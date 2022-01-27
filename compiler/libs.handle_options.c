/*
** Automatically generated from `handle_options.m'
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
INIT mercury__libs__handle_options__init
REQUIRED_INIT mercury__libs__handle_options__required_init
ENDINIT
*/

#define MR_ALLOW_RESET
#include "mercury_imp.h"
#line 26 "libs.handle_options.c"
#include "libs.handle_options.mh"

#line 29 "libs.handle_options.c"
#line 526 "../library/io.int"
#include "io.mh"

#line 33 "libs.handle_options.c"
#line 536 "../library/io.int"
#include "time.mh"

#line 37 "libs.handle_options.c"
#line 537 "../library/io.int"
#include "string.mh"

#line 41 "libs.handle_options.c"
#line 56 "../library/dir.int"
#include "dir.mh"

#line 45 "libs.handle_options.c"
#line 31 "../library/bitmap.int2"
#include "bitmap.mh"

#line 49 "libs.handle_options.c"
#line 33 "../library/array.int2"
#include "array.mh"

#line 53 "libs.handle_options.c"
#line 39 "../mdbcomp/mdbcomp.rtti_access.int2"
#include "mdbcomp.rtti_access.mh"

#line 57 "libs.handle_options.c"
#line 58 "libs.handle_options.c"
#ifndef LIBS__HANDLE_OPTIONS_DECL_GUARD
#define LIBS__HANDLE_OPTIONS_DECL_GUARD

#line 62 "libs.handle_options.c"
#line 2503 "handle_options.m"
#ifdef MR_HIGHLEVEL_CODE
    extern MR_Word libs__handle_options__mutable_variable_already_printed_usage;
#else
    extern MR_Word libs__handle_options__mutable_variable_already_printed_usage;
#endif
#ifdef MR_THREAD_SAFE
    extern MercuryLock libs__handle_options__mutable_variable_already_printed_usage_lock;
#endif

#line 73 "libs.handle_options.c"
#line 74 "libs.handle_options.c"

#endif
#line 77 "libs.handle_options.c"

#ifdef _MSC_VER
#define MR_STATIC_LINKAGE extern
#else
#define MR_STATIC_LINKAGE static
#endif


#ifdef MR_MSVC
#pragma pack(push, MR_BYTES_PER_WORD)
#endif
struct mercury_type_0 {
	MR_Word * f1[3];
};
#ifdef MR_MSVC
#pragma pack(pop)
#endif
MR_STATIC_LINKAGE const struct mercury_type_0 mercury_common_0[];


#ifdef MR_MSVC
#pragma pack(push, MR_BYTES_PER_WORD)
#endif
struct mercury_type_1 {
	MR_Word * f1[2];
};
#ifdef MR_MSVC
#pragma pack(pop)
#endif
MR_STATIC_LINKAGE const struct mercury_type_1 mercury_common_1[];


#ifdef MR_MSVC
#pragma pack(push, MR_BYTES_PER_WORD)
#endif
struct mercury_type_2 {
	MR_String f1;
	MR_Word * f2;
};
#ifdef MR_MSVC
#pragma pack(pop)
#endif
MR_STATIC_LINKAGE const struct mercury_type_2 mercury_common_2[];


#ifdef MR_MSVC
#pragma pack(push, MR_BYTES_PER_WORD)
#endif
struct mercury_type_3 {
	MR_Integer f1;
	MR_Word * f2;
};
#ifdef MR_MSVC
#pragma pack(pop)
#endif
MR_STATIC_LINKAGE const struct mercury_type_3 mercury_common_3[];


#ifdef MR_MSVC
#pragma pack(push, MR_BYTES_PER_WORD)
#endif
struct mercury_type_4 {
	MR_Integer f1;
	MR_String f2;
};
#ifdef MR_MSVC
#pragma pack(pop)
#endif
MR_STATIC_LINKAGE const struct mercury_type_4 mercury_common_4[];


#ifdef MR_MSVC
#pragma pack(push, MR_BYTES_PER_WORD)
#endif
struct mercury_type_5 {
	MR_Integer f1;
};
#ifdef MR_MSVC
#pragma pack(pop)
#endif
MR_STATIC_LINKAGE const struct mercury_type_5 mercury_common_5[];


#ifdef MR_MSVC
#pragma pack(push, MR_BYTES_PER_WORD)
#endif
struct mercury_type_6 {
	MR_Word * f1;
};
#ifdef MR_MSVC
#pragma pack(pop)
#endif
MR_STATIC_LINKAGE const struct mercury_type_6 mercury_common_6[];


#ifdef MR_MSVC
#pragma pack(push, MR_BYTES_PER_WORD)
#endif
struct mercury_type_7 {
	MR_Word * f1;
	MR_Word * f2;
	MR_Integer f3;
	MR_Word * f4;
	MR_Word * f5;
};
#ifdef MR_MSVC
#pragma pack(pop)
#endif
MR_STATIC_LINKAGE const struct mercury_type_7 mercury_common_7[];


#ifdef MR_MSVC
#pragma pack(push, MR_BYTES_PER_WORD)
#endif
struct mercury_type_8 {
	MR_Word * f1;
	MR_Code * f2;
	MR_Integer f3;
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
	MR_Word * f3[4];
};
#ifdef MR_MSVC
#pragma pack(pop)
#endif
MR_STATIC_LINKAGE const struct mercury_type_9 mercury_common_9[];


#ifdef MR_MSVC
#pragma pack(push, MR_BYTES_PER_WORD)
#endif
struct mercury_type_10 {
	MR_Word * f1[4];
};
#ifdef MR_MSVC
#pragma pack(pop)
#endif
MR_STATIC_LINKAGE const struct mercury_type_10 mercury_common_10[];


#ifdef MR_MSVC
#pragma pack(push, MR_BYTES_PER_WORD)
#endif
struct mercury_type_11 {
	MR_Word * f1;
	MR_Word * f2;
	MR_Integer f3;
	MR_Word * f4;
};
#ifdef MR_MSVC
#pragma pack(pop)
#endif
MR_STATIC_LINKAGE const struct mercury_type_11 mercury_common_11[];


#ifdef MR_MSVC
#pragma pack(push, MR_BYTES_PER_WORD)
#endif
struct mercury_type_12 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[6];
};
#ifdef MR_MSVC
#pragma pack(pop)
#endif
MR_STATIC_LINKAGE const struct mercury_type_12 mercury_common_12[];


#ifdef MR_MSVC
#pragma pack(push, MR_BYTES_PER_WORD)
#endif
struct mercury_type_13 {
	MR_Word * f1;
	MR_Code * f2;
	MR_Integer f3;
	MR_String f4;
};
#ifdef MR_MSVC
#pragma pack(pop)
#endif
MR_STATIC_LINKAGE const struct mercury_type_13 mercury_common_13[];


#ifdef MR_MSVC
#pragma pack(push, MR_BYTES_PER_WORD)
#endif
struct mercury_type_14 {
	MR_Word * f1;
	MR_Integer f2;
	MR_Word * f3;
	MR_Word * f4;
};
#ifdef MR_MSVC
#pragma pack(pop)
#endif
MR_STATIC_LINKAGE const struct mercury_type_14 mercury_common_14[];


#ifdef MR_MSVC
#pragma pack(push, MR_BYTES_PER_WORD)
#endif
struct mercury_type_15 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[7];
};
#ifdef MR_MSVC
#pragma pack(pop)
#endif
MR_STATIC_LINKAGE const struct mercury_type_15 mercury_common_15[];


#ifdef MR_MSVC
#pragma pack(push, MR_BYTES_PER_WORD)
#endif
struct mercury_type_16 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[3];
};
#ifdef MR_MSVC
#pragma pack(pop)
#endif
MR_STATIC_LINKAGE const struct mercury_type_16 mercury_common_16[];


#ifdef MR_MSVC
#pragma pack(push, MR_BYTES_PER_WORD)
#endif
struct mercury_type_17 {
	MR_Word * f1;
	MR_Integer f2;
	MR_Word * f3;
};
#ifdef MR_MSVC
#pragma pack(pop)
#endif
MR_STATIC_LINKAGE const struct mercury_type_17 mercury_common_17[];


#ifdef MR_MSVC
#pragma pack(push, MR_BYTES_PER_WORD)
#endif
struct mercury_type_18 {
	MR_Word * f1;
	MR_Code * f2;
	MR_Integer f3;
	MR_Integer f4;
};
#ifdef MR_MSVC
#pragma pack(pop)
#endif
MR_STATIC_LINKAGE const struct mercury_type_18 mercury_common_18[];


#ifdef MR_MSVC
#pragma pack(push, MR_BYTES_PER_WORD)
#endif
struct mercury_type_19 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[5];
};
#ifdef MR_MSVC
#pragma pack(pop)
#endif
MR_STATIC_LINKAGE const struct mercury_type_19 mercury_common_19[];

MR_STATIC_LINKAGE const struct mercury_type_6 mercury_vector_common_6_0[];

extern const MR_TypeCtorInfo_Struct
	mercury_data_libs__handle_options__type_ctor_info_grade_component_0;
MR_decl_label10(libs__handle_options__IntroducedFrom__pred__compute_grade_components__2794__1_2_0, 1,6,8,10,7,4,15,18,19,21)
MR_decl_label2(libs__handle_options__IntroducedFrom__pred__compute_grade_components__2794__1_2_0, 17,23)
MR_decl_label6(libs__handle_options__IntroducedFrom__pred__convert_grade_option__2722__1_5_0, 2,5,7,9,10,1)
MR_decl_label2(libs__handle_options__IntroducedFrom__pred__grade_string_to_comp_strings__2655__1_2_0, 2,1)
MR_decl_label10(libs__handle_options__check_option_values_22_0, 2,6,4,8,9,10,14,12,16,17)
MR_decl_label10(libs__handle_options__check_option_values_22_0, 18,22,20,24,25,26,27,29,30,31)
MR_decl_label10(libs__handle_options__check_option_values_22_0, 35,33,37,38,39,43,41,45,46,47)
MR_decl_label10(libs__handle_options__check_option_values_22_0, 51,48,52,53,54,60,64,63,56,66)
MR_decl_label10(libs__handle_options__check_option_values_22_0, 67,69,70,74,72,76,77,78,79,80)
MR_decl_label10(libs__handle_options__check_option_values_22_0, 83,84,89,86,91,93,94,98,96,100)
MR_decl_label10(libs__handle_options__check_option_values_22_0, 101,102,103,109,112,107,113,115,116,119)
MR_decl_label10(libs__handle_options__check_option_values_22_0, 121,124,120,127,129,132,128,135,140,139)
MR_decl_label10(libs__handle_options__check_option_values_22_0, 143,142,146,145,149,148,152,151,155,154)
MR_decl_label10(libs__handle_options__check_option_values_22_0, 158,157,161,160,164,163,167,166,170,169)
MR_decl_label10(libs__handle_options__check_option_values_22_0, 173,172,176,175,179,178,182,181,185,184)
MR_decl_label10(libs__handle_options__check_option_values_22_0, 188,187,191,190,194,193,197,196,199,138)
MR_decl_label10(libs__handle_options__check_option_values_22_0, 202,204,136,207,208,209,213,211,215,216)
MR_decl_label10(libs__handle_options__check_option_values_22_0, 217,221,219,223,224,225,226,231,228,233)
MR_decl_label10(libs__handle_options__check_option_values_22_0, 234,235,240,246,248,250,252,237,256,258)
MR_decl_label10(libs__handle_options__check_option_values_22_0, 259,260,265,268,269,267,261,271,272,276)
MR_decl_label10(libs__handle_options__check_option_values_22_0, 274,278,279,280,284,282,286,287,291,288)
MR_decl_label3(libs__handle_options__compute_grade_2_0, 2,4,6)
MR_decl_label5(libs__handle_options__construct_string_2_0, 3,5,46,11,15)
MR_decl_label10(libs__handle_options__convert_dump_alias_2_0, 3,4,5,6,7,8,9,10,11,12)
MR_decl_label10(libs__handle_options__convert_dump_alias_2_0, 13,14,15,16,17,18,19,20,21,1)
MR_decl_label5(libs__handle_options__convert_grade_option_3_0, 4,5,6,8,1)
MR_decl_label4(libs__handle_options__convert_option_table_result_to_globals_5_0, 3,6,8,10)
MR_decl_label10(libs__handle_options__convert_options_to_globals_22_0, 2,3,6,758,8,10,11,13,16,12)
MR_decl_label10(libs__handle_options__convert_options_to_globals_22_0, 18,20,21,19,22,26,28,29,30,31)
MR_decl_label10(libs__handle_options__convert_options_to_globals_22_0, 32,33,27,37,41,42,43,44,48,45)
MR_decl_label10(libs__handle_options__convert_options_to_globals_22_0, 49,50,767,52,57,59,61,55,63,66)
MR_decl_label10(libs__handle_options__convert_options_to_globals_22_0, 51,70,71,76,77,1003,78,80,82,84)
MR_decl_label10(libs__handle_options__convert_options_to_globals_22_0, 85,86,87,88,89,91,92,93,94,95)
MR_decl_label10(libs__handle_options__convert_options_to_globals_22_0, 96,98,97,75,103,104,105,108,109,111)
MR_decl_label10(libs__handle_options__convert_options_to_globals_22_0, 117,119,120,122,123,124,125,126,127,128)
MR_decl_label10(libs__handle_options__convert_options_to_globals_22_0, 129,130,131,132,133,116,783,135,136,139)
MR_decl_label10(libs__handle_options__convert_options_to_globals_22_0, 141,143,144,145,146,147,148,149,150,152)
MR_decl_label10(libs__handle_options__convert_options_to_globals_22_0, 153,154,155,156,157,159,110,162,164,165)
MR_decl_label10(libs__handle_options__convert_options_to_globals_22_0, 167,168,169,170,171,172,173,176,175,174)
MR_decl_label10(libs__handle_options__convert_options_to_globals_22_0, 177,178,179,180,181,182,183,184,787,186)
MR_decl_label10(libs__handle_options__convert_options_to_globals_22_0, 187,188,190,192,185,194,195,199,200,203)
MR_decl_label10(libs__handle_options__convert_options_to_globals_22_0, 202,205,206,207,208,212,209,213,214,215)
MR_decl_label10(libs__handle_options__convert_options_to_globals_22_0, 216,217,218,219,220,221,222,223,224,225)
MR_decl_label10(libs__handle_options__convert_options_to_globals_22_0, 226,227,228,229,230,231,232,233,234,235)
MR_decl_label10(libs__handle_options__convert_options_to_globals_22_0, 236,237,238,239,240,241,242,243,244,245)
MR_decl_label10(libs__handle_options__convert_options_to_globals_22_0, 246,247,248,249,250,251,252,253,254,255)
MR_decl_label10(libs__handle_options__convert_options_to_globals_22_0, 256,257,258,263,259,264,265,266,267,268)
MR_decl_label10(libs__handle_options__convert_options_to_globals_22_0, 271,273,274,276,270,277,278,279,281,280)
MR_decl_label10(libs__handle_options__convert_options_to_globals_22_0, 282,283,285,286,284,287,288,292,291,295)
MR_decl_label10(libs__handle_options__convert_options_to_globals_22_0, 290,296,297,298,299,301,302,303,304,306)
MR_decl_label10(libs__handle_options__convert_options_to_globals_22_0, 300,307,308,309,310,311,312,313,314,315)
MR_decl_label10(libs__handle_options__convert_options_to_globals_22_0, 316,320,327,324,330,331,334,335,336,333)
MR_decl_label10(libs__handle_options__convert_options_to_globals_22_0, 338,339,340,341,342,344,811,345,332,348)
MR_decl_label10(libs__handle_options__convert_options_to_globals_22_0, 352,347,353,354,355,356,357,358,361,360)
MR_decl_label10(libs__handle_options__convert_options_to_globals_22_0, 359,362,363,364,365,366,368,369,370,371)
MR_decl_label10(libs__handle_options__convert_options_to_globals_22_0, 372,373,374,375,376,377,378,380,385,386)
MR_decl_label10(libs__handle_options__convert_options_to_globals_22_0, 387,388,389,390,391,392,393,394,395,396)
MR_decl_label10(libs__handle_options__convert_options_to_globals_22_0, 397,398,400,402,1044,404,383,382,413,414)
MR_decl_label10(libs__handle_options__convert_options_to_globals_22_0, 415,416,417,418,419,421,420,379,426,427)
MR_decl_label10(libs__handle_options__convert_options_to_globals_22_0, 428,429,431,432,435,436,437,438,440,441)
MR_decl_label10(libs__handle_options__convert_options_to_globals_22_0, 443,430,444,445,449,446,453,452,456,458)
MR_decl_label10(libs__handle_options__convert_options_to_globals_22_0, 459,451,461,467,466,465,470,464,462,472)
MR_decl_label10(libs__handle_options__convert_options_to_globals_22_0, 473,474,475,477,479,480,481,482,483,486)
MR_decl_label10(libs__handle_options__convert_options_to_globals_22_0, 487,488,489,490,491,492,493,494,495,485)
MR_decl_label10(libs__handle_options__convert_options_to_globals_22_0, 497,498,1280,484,502,503,504,505,506,507)
MR_decl_label10(libs__handle_options__convert_options_to_globals_22_0, 508,509,510,511,512,513,514,519,515,520)
MR_decl_label10(libs__handle_options__convert_options_to_globals_22_0, 525,521,526,527,528,529,530,534,536,538)
MR_decl_label10(libs__handle_options__convert_options_to_globals_22_0, 540,533,543,532,544,545,546,547,548,549)
MR_decl_label10(libs__handle_options__convert_options_to_globals_22_0, 550,551,552,553,554,555,556,557,559,560)
MR_decl_label10(libs__handle_options__convert_options_to_globals_22_0, 561,562,563,564,567,568,569,572,558,573)
MR_decl_label10(libs__handle_options__convert_options_to_globals_22_0, 575,576,577,580,574,581,586,589,590,593)
MR_decl_label10(libs__handle_options__convert_options_to_globals_22_0, 582,594,595,596,598,600,601,602,604,605)
MR_decl_label10(libs__handle_options__convert_options_to_globals_22_0, 606,608,610,611,612,614,615,616,618,620)
MR_decl_label10(libs__handle_options__convert_options_to_globals_22_0, 621,622,624,626,627,628,630,597,631,633)
MR_decl_label10(libs__handle_options__convert_options_to_globals_22_0, 634,635,636,638,632,639,640,641,645,647)
MR_decl_label10(libs__handle_options__convert_options_to_globals_22_0, 648,649,650,651,644,653,654,655,657,660)
MR_decl_label10(libs__handle_options__convert_options_to_globals_22_0, 661,662,664,665,666,668,669,671,672,674)
MR_decl_label10(libs__handle_options__convert_options_to_globals_22_0, 676,677,680,679,686,687,688,689,690,691)
MR_decl_label10(libs__handle_options__convert_options_to_globals_22_0, 695,696,697,698,701,678,702,703,708,704)
MR_decl_label10(libs__handle_options__convert_options_to_globals_22_0, 711,713,715,865,717,719,723,724,721,726)
MR_decl_label10(libs__handle_options__convert_options_to_globals_22_0, 725,716,730,734,732,731,735,738,742,736)
MR_decl_label7(libs__handle_options__convert_options_to_globals_22_0, 743,746,744,751,753,755,756)
MR_decl_label10(libs__handle_options__disable_smart_recompilation_5_0, 2,4,5,7,8,9,10,11,16,13)
MR_decl_label1(libs__handle_options__display_compiler_version_2_0, 2)
MR_decl_label10(libs__handle_options__filter_grade_7_0, 3,4,7,9,11,12,10,18,16,2)
MR_decl_label2(libs__handle_options__filter_grade_7_0, 23,25)
MR_decl_label1(libs__handle_options__generate_default_globals_3_0, 2)
MR_decl_label10(libs__handle_options__grade_component_table_5_0, 3,4,5,6,7,8,9,10,11,12)
MR_decl_label10(libs__handle_options__grade_component_table_5_0, 13,14,15,16,17,18,19,20,21,22)
MR_decl_label10(libs__handle_options__grade_component_table_5_0, 23,24,25,26,27,28,29,30,31,32)
MR_decl_label10(libs__handle_options__grade_component_table_5_0, 33,34,35,36,37,38,39,40,41,42)
MR_decl_label10(libs__handle_options__grade_component_table_5_0, 43,44,45,46,47,48,49,50,51,1)
MR_decl_label10(libs__handle_options__grade_component_table_5_2, 2,3,4,5,6,7,8,9,10,11)
MR_decl_label10(libs__handle_options__grade_component_table_5_2, 12,13,14,15,16,17,18,19,20,21)
MR_decl_label10(libs__handle_options__grade_component_table_5_2, 22,23,24,25,26,27,28,29,30,31)
MR_decl_label10(libs__handle_options__grade_component_table_5_2, 32,33,34,35,36,37,38,39,40,41)
MR_decl_label9(libs__handle_options__grade_component_table_5_2, 42,43,44,45,46,47,48,49,50)
MR_decl_label8(libs__handle_options__grade_directory_component_2_0, 2,4,6,5,9,11,12,8)
MR_decl_label3(libs__handle_options__grade_start_values_1_0, 58,59,60)
MR_decl_label10(libs__handle_options__handle_given_options_8_0, 2,3,6,7,8,9,10,11,12,13)
MR_decl_label10(libs__handle_options__handle_given_options_8_0, 14,15,16,17,18,19,20,22,23,39)
MR_decl_label5(libs__handle_options__handle_given_options_8_0, 40,41,45,42,5)
MR_decl_label9(libs__handle_options__long_usage_2_0, 2,6,7,8,9,10,11,12,13)
MR_decl_label10(libs__handle_options__maybe_disable_smart_recompilation_8_0, 2,5,7,8,10,11,12,13,14,26)
MR_decl_label2(libs__handle_options__maybe_disable_smart_recompilation_8_0, 16,3)
MR_decl_label3(libs__handle_options__must_contain_2_0, 6,9,5)
MR_decl_label3(libs__handle_options__must_not_contain_2_0, 6,7,5)
MR_decl_label2(libs__handle_options__option_implies_5_0, 2,4)
MR_decl_label2(libs__handle_options__option_neg_implies_5_0, 2,4)
MR_decl_label4(libs__handle_options__option_requires_7_0, 2,3,9,5)
MR_decl_label8(libs__handle_options__postprocess_options_libgrades_4_0, 2,3,5,7,8,11,14,16)
MR_decl_label10(libs__handle_options__postprocess_options_lowlevel_2_0, 3,5,6,4,7,9,10,8,11,13)
MR_decl_label10(libs__handle_options__postprocess_options_lowlevel_2_0, 14,12,15,17,18,16,19,20,21,25)
MR_decl_label10(libs__handle_options__postprocess_options_lowlevel_2_0, 24,28,30,23,31,32,35,36,37,38)
MR_decl_label6(libs__handle_options__split_grade_string_2_2_0, 37,5,6,8,10,1)
MR_decl_label6(libs__handle_options__string_to_grade_component_6_0, 4,2,7,8,9,11)
MR_decl_label4(libs__handle_options__usage_2_0, 4,7,8,18)
MR_decl_label3(libs__handle_options__usage_errors_3_0, 2,4,5)
MR_decl_label1(fn__libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2035__1_2_0, 2)
MR_decl_label2(fn__libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2050__1_2_0, 2,3)
MR_decl_label1(fn__libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2063__1_2_0, 2)
MR_decl_label1(fn__libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2073__1_2_0, 2)
MR_decl_label2(fn__libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2109__1_3_0, 2,3)
MR_decl_label2(fn__libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2145__1_2_0, 2,3)
MR_decl_label2(fn__libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2149__1_2_0, 2,3)
MR_decl_label2(fn__libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2171__1_2_0, 2,3)
MR_decl_label2(fn__libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2173__1_2_0, 2,3)
MR_decl_label1(fn__libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2179__1_1_0, 2)
MR_decl_label1(fn__libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2180__1_1_0, 2)
MR_decl_static(libs__handle_options__process_given_options_6_0)
MR_decl_static(libs__handle_options__add_error_3_0)
MR_decl_static(libs__handle_options__convert_dump_alias_2_0)
MR_decl_static(libs__handle_options__check_option_values_22_0)
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
MR_decl_static(libs__handle_options__convert_options_to_globals_22_0)
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
MR_decl_static(libs__handle_options__IntroducedFrom__pred__convert_grade_option__2722__1_5_0)
MR_decl_static(libs__handle_options__IntroducedFrom__pred__check_option_values__526__1_1_0)
MR_decl_static(fn__libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2035__1_2_0)
MR_decl_static(fn__libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2050__1_2_0)
MR_decl_static(fn__libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2063__1_2_0)
MR_decl_static(fn__libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2073__1_2_0)
MR_decl_static(fn__libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2109__1_3_0)
MR_decl_static(libs__handle_options__IntroducedFrom__pred__convert_options_to_globals__2127__1_2_0)
MR_decl_static(libs__handle_options__IntroducedFrom__pred__convert_options_to_globals__2127__2_2_0)
MR_decl_static(fn__libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2145__1_2_0)
MR_decl_static(fn__libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2149__1_2_0)
MR_decl_static(fn__libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2179__1_1_0)
MR_decl_static(fn__libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2180__1_1_0)
MR_decl_static(fn__libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2171__1_2_0)
MR_decl_static(fn__libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2173__1_2_0)
MR_decl_static(libs__handle_options__IntroducedFrom__pred__grade_string_to_comp_strings__2655__1_2_0)
MR_decl_static(libs__handle_options__IntroducedFrom__pred__add_option_list__2745__1_3_0)
MR_decl_static(libs__handle_options__IntroducedFrom__pred__compute_grade_components__2794__1_2_0)
MR_decl_static(libs__handle_options__IntroducedFrom__pred__reset_grade_options__3089__1_3_0)

extern const MR_TypeCtorInfo_Struct mercury_data_tree234__type_ctor_info_tree234_2;
extern const MR_TypeCtorInfo_Struct mercury_data_libs__options__type_ctor_info_option_0;
extern const MR_TypeCtorInfo_Struct mercury_data_getopt_io__type_ctor_info_option_data_0;
extern const MR_TypeCtorInfo_Struct mercury_data_pair__type_ctor_info_pair_2;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_string_0;
extern const MR_TypeCtorInfo_Struct mercury_data_libs__options__type_ctor_info_option_0;
extern const MR_TypeCtorInfo_Struct mercury_data_getopt_io__type_ctor_info_option_data_0;
extern const MR_TypeCtorInfo_Struct mercury_data_libs__handle_options__type_ctor_info_grade_component_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_string_0;
static const struct mercury_type_0 mercury_common_0[6] =
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
MR_CTOR0_ADDR(libs__options, option),
MR_CTOR0_ADDR(getopt_io, option_data)
}
},
};

extern const MR_TypeCtorInfo_Struct mercury_data_set_ordlist__type_ctor_info_set_ordlist_1;
extern const MR_TypeCtorInfo_Struct mercury_data_list__type_ctor_info_list_1;
extern const MR_TypeCtorInfo_Struct mercury_data_getopt_io__type_ctor_info_maybe_option_table_1;
extern const MR_TypeCtorInfo_Struct mercury_data_list__type_ctor_info_list_1;
static const struct mercury_type_1 mercury_common_1[122] =
{
{
{
MR_CTOR1_ADDR(set_ordlist, set_ordlist),
MR_CTOR0_ADDR(libs__handle_options, grade_component)
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
MR_TAG_COMMON(0,3,1),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(0,3,2),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(0,3,3),
MR_TAG_COMMON(1,1,3)
}
},
{
{
MR_TAG_COMMON(0,3,4),
MR_TAG_COMMON(1,1,4)
}
},
{
{
MR_TAG_COMMON(0,3,5),
MR_TAG_COMMON(1,1,5)
}
},
{
{
MR_TAG_COMMON(0,3,6),
MR_TAG_COMMON(1,1,6)
}
},
{
{
MR_TAG_COMMON(0,3,7),
MR_TAG_COMMON(1,1,7)
}
},
{
{
MR_TAG_COMMON(3,4,1),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(0,3,8),
MR_TAG_COMMON(1,1,5)
}
},
{
{
MR_TAG_COMMON(0,3,6),
MR_TAG_COMMON(1,1,10)
}
},
{
{
MR_TAG_COMMON(0,3,7),
MR_TAG_COMMON(1,1,11)
}
},
{
{
MR_TAG_COMMON(0,3,9),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(0,3,10),
MR_TAG_COMMON(1,1,13)
}
},
{
{
MR_TAG_COMMON(0,3,3),
MR_TAG_COMMON(1,1,14)
}
},
{
{
MR_TAG_COMMON(0,3,8),
MR_TAG_COMMON(1,1,15)
}
},
{
{
MR_TAG_COMMON(0,3,11),
MR_TAG_COMMON(1,1,16)
}
},
{
{
MR_TAG_COMMON(0,3,12),
MR_TAG_COMMON(1,1,17)
}
},
{
{
MR_TAG_COMMON(3,4,2),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(0,3,13),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(0,3,14),
MR_TAG_COMMON(1,1,20)
}
},
{
{
MR_TAG_COMMON(0,3,15),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(0,3,14),
MR_TAG_COMMON(1,1,22)
}
},
{
{
MR_TAG_COMMON(0,3,16),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(0,3,17),
MR_TAG_COMMON(1,1,24)
}
},
{
{
MR_TAG_COMMON(0,3,18),
MR_TAG_COMMON(1,1,25)
}
},
{
{
MR_TAG_COMMON(0,3,19),
MR_TAG_COMMON(1,1,24)
}
},
{
{
MR_TAG_COMMON(0,3,20),
MR_TAG_COMMON(1,1,27)
}
},
{
{
MR_TAG_COMMON(0,3,4),
MR_TAG_COMMON(1,1,3)
}
},
{
{
MR_TAG_COMMON(0,3,3),
MR_TAG_COMMON(1,1,29)
}
},
{
{
MR_TAG_COMMON(0,3,8),
MR_TAG_COMMON(1,1,30)
}
},
{
{
MR_TAG_COMMON(0,3,11),
MR_TAG_COMMON(1,1,31)
}
},
{
{
MR_TAG_COMMON(0,3,12),
MR_TAG_COMMON(1,1,32)
}
},
{
{
MR_TAG_COMMON(3,4,3),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(0,3,21),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(0,3,22),
MR_TAG_COMMON(1,1,35)
}
},
{
{
MR_TAG_COMMON(0,3,12),
MR_TAG_COMMON(1,1,7)
}
},
{
{
MR_TAG_COMMON(0,3,23),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(0,3,24),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(0,3,25),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(0,3,3),
MR_TAG_COMMON(1,1,13)
}
},
{
{
MR_TAG_COMMON(0,3,10),
MR_TAG_COMMON(1,1,41)
}
},
{
{
MR_TAG_COMMON(0,3,8),
MR_TAG_COMMON(1,1,42)
}
},
{
{
MR_TAG_COMMON(0,3,11),
MR_TAG_COMMON(1,1,43)
}
},
{
{
MR_TAG_COMMON(0,3,12),
MR_TAG_COMMON(1,1,44)
}
},
{
{
MR_TAG_COMMON(3,4,7),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(3,4,1),
MR_TAG_COMMON(1,1,46)
}
},
{
{
MR_TAG_COMMON(0,3,26),
MR_TAG_COMMON(1,1,13)
}
},
{
{
MR_TAG_COMMON(0,3,10),
MR_TAG_COMMON(1,1,48)
}
},
{
{
MR_TAG_COMMON(0,3,8),
MR_TAG_COMMON(1,1,49)
}
},
{
{
MR_TAG_COMMON(0,3,11),
MR_TAG_COMMON(1,1,50)
}
},
{
{
MR_TAG_COMMON(0,3,12),
MR_TAG_COMMON(1,1,51)
}
},
{
{
MR_TAG_COMMON(0,3,10),
MR_TAG_COMMON(1,1,4)
}
},
{
{
MR_TAG_COMMON(0,3,8),
MR_TAG_COMMON(1,1,53)
}
},
{
{
MR_TAG_COMMON(0,3,11),
MR_TAG_COMMON(1,1,54)
}
},
{
{
MR_TAG_COMMON(0,3,12),
MR_TAG_COMMON(1,1,55)
}
},
{
{
MR_TAG_COMMON(0,3,26),
MR_TAG_COMMON(1,1,3)
}
},
{
{
MR_TAG_COMMON(0,3,10),
MR_TAG_COMMON(1,1,57)
}
},
{
{
MR_TAG_COMMON(0,3,8),
MR_TAG_COMMON(1,1,58)
}
},
{
{
MR_TAG_COMMON(0,3,11),
MR_TAG_COMMON(1,1,59)
}
},
{
{
MR_TAG_COMMON(0,3,12),
MR_TAG_COMMON(1,1,60)
}
},
{
{
MR_TAG_COMMON(3,4,8),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(3,4,9),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(0,3,12),
MR_TAG_COMMON(1,1,11)
}
},
{
{
MR_TAG_COMMON(0,3,27),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(0,3,28),
MR_TAG_COMMON(1,1,65)
}
},
{
{
MR_TAG_COMMON(0,3,29),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(0,3,30),
MR_TAG_COMMON(1,1,67)
}
},
{
{
MR_TAG_COMMON(0,3,31),
MR_TAG_COMMON(1,1,68)
}
},
{
{
MR_TAG_COMMON(0,3,32),
MR_TAG_COMMON(1,1,69)
}
},
{
{
MR_TAG_COMMON(0,3,33),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(0,3,17),
MR_TAG_COMMON(1,1,71)
}
},
{
{
MR_TAG_COMMON(0,3,18),
MR_TAG_COMMON(1,1,72)
}
},
{
{
MR_TAG_COMMON(0,3,19),
MR_TAG_COMMON(1,1,71)
}
},
{
{
MR_TAG_COMMON(0,3,20),
MR_TAG_COMMON(1,1,74)
}
},
{
{
MR_TAG_COMMON(0,3,34),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(0,3,11),
MR_TAG_COMMON(1,1,10)
}
},
{
{
MR_TAG_COMMON(0,3,12),
MR_TAG_COMMON(1,1,77)
}
},
{
{
MR_TAG_COMMON(0,3,35),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(0,3,36),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(0,3,37),
MR_TAG_COMMON(1,1,67)
}
},
{
{
MR_TAG_COMMON(0,3,31),
MR_TAG_COMMON(1,1,81)
}
},
{
{
MR_TAG_COMMON(0,3,38),
MR_TAG_COMMON(1,1,82)
}
},
{
{
MR_TAG_COMMON(0,3,38),
MR_TAG_COMMON(1,1,69)
}
},
{
{
MR_TAG_COMMON(0,3,32),
MR_TAG_COMMON(1,1,82)
}
},
{
{
MR_TAG_COMMON(0,3,39),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(0,3,37),
MR_TAG_COMMON(1,1,86)
}
},
{
{
MR_TAG_COMMON(0,3,40),
MR_TAG_COMMON(1,1,87)
}
},
{
{
MR_TAG_COMMON(0,3,32),
MR_TAG_COMMON(1,1,88)
}
},
{
{
MR_TAG_COMMON(0,3,40),
MR_TAG_COMMON(1,1,81)
}
},
{
{
MR_TAG_COMMON(0,3,38),
MR_TAG_COMMON(1,1,90)
}
},
{
{
MR_TAG_COMMON(0,3,41),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(0,3,42),
MR_TAG_COMMON(1,1,92)
}
},
{
{
MR_TAG_COMMON(0,3,43),
MR_TAG_COMMON(1,1,93)
}
},
{
{
MR_TAG_COMMON(0,3,44),
MR_TAG_COMMON(1,1,92)
}
},
{
{
MR_TAG_COMMON(0,3,43),
MR_TAG_COMMON(1,1,95)
}
},
{
{
MR_TAG_COMMON(0,3,45),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(0,3,44),
MR_TAG_COMMON(1,1,97)
}
},
{
{
MR_TAG_COMMON(0,3,43),
MR_TAG_COMMON(1,1,98)
}
},
{
{
MR_TAG_COMMON(0,3,42),
MR_TAG_COMMON(1,1,97)
}
},
{
{
MR_TAG_COMMON(0,3,43),
MR_TAG_COMMON(1,1,100)
}
},
{
{
MR_TAG_COMMON(0,3,11),
MR_TAG_COMMON(1,1,6)
}
},
{
{
MR_TAG_COMMON(0,3,12),
MR_TAG_COMMON(1,1,102)
}
},
{
{
MR_TAG_COMMON(0,3,46),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(0,3,47),
MR_TAG_COMMON(1,1,104)
}
},
{
{
MR_TAG_COMMON(0,3,48),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(0,3,49),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(0,3,50),
MR_TAG_COMMON(1,1,107)
}
},
{
{
MR_TAG_COMMON(0,3,51),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(0,3,52),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(0,3,53),
MR_TAG_COMMON(1,1,110)
}
},
{
{
MR_TAG_COMMON(0,3,54),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(0,3,53),
MR_TAG_COMMON(1,1,112)
}
},
{
{
MR_TAG_COMMON(0,3,55),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(0,3,56),
MR_TAG_COMMON(1,1,114)
}
},
{
{
MR_TAG_COMMON(0,3,57),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(0,3,58),
MR_TAG_COMMON(1,1,116)
}
},
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
MR_CTOR1_ADDR(set_ordlist, set_ordlist),
MR_CTOR0_ADDR(libs__handle_options, grade_component)
}
},
};

static const struct mercury_type_2 mercury_common_2[12] =
{
{
MR_string_const("Copyright (C) 1993-2013 The University of Melbourne\n", 52),
MR_tbmkword(0, 0)
},
{
MR_string_const("\n", 1),
MR_TAG_COMMON(1,2,0)
},
{
MR_string_const("Use \140mmc --help\' for more information.\n", 39),
MR_tbmkword(0, 0)
},
{
MR_string_const("Usage: mmc [<options>] <arguments>\n", 35),
MR_TAG_COMMON(1,2,2)
},
{
MR_string_const("shared", 6),
MR_tbmkword(0, 0)
},
{
MR_string_const("static", 6),
MR_TAG_COMMON(1,2,4)
},
{
MR_string_const("csharp", 6),
MR_tbmkword(0, 0)
},
{
MR_string_const("il", 2),
MR_TAG_COMMON(1,2,6)
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
MR_string_const("java", 4),
MR_tbmkword(0, 0)
},
{
MR_string_const("\n", 1),
MR_tbmkword(0, 0)
},
};

static const struct mercury_type_3 mercury_common_3[69] =
{
{
3,
MR_TAG_COMMON(1,2,5)
},
{
211,
MR_TAG_COMMON(3,4,0)
},
{
248,
MR_TAG_COMMON(1,5,0)
},
{
249,
MR_TAG_COMMON(1,5,0)
},
{
247,
MR_TAG_COMMON(1,5,0)
},
{
243,
MR_TAG_COMMON(1,5,1)
},
{
242,
MR_TAG_COMMON(1,5,1)
},
{
244,
MR_TAG_COMMON(1,5,1)
},
{
243,
MR_TAG_COMMON(1,5,0)
},
{
248,
MR_TAG_COMMON(1,5,1)
},
{
247,
MR_TAG_COMMON(1,5,1)
},
{
242,
MR_TAG_COMMON(1,5,0)
},
{
244,
MR_TAG_COMMON(1,5,0)
},
{
183,
MR_TAG_COMMON(1,5,0)
},
{
182,
MR_TAG_COMMON(1,5,1)
},
{
183,
MR_TAG_COMMON(1,5,1)
},
{
218,
MR_TAG_COMMON(1,5,1)
},
{
217,
MR_TAG_COMMON(1,5,0)
},
{
216,
MR_TAG_COMMON(1,5,1)
},
{
217,
MR_TAG_COMMON(1,5,1)
},
{
216,
MR_TAG_COMMON(1,5,0)
},
{
223,
MR_TAG_COMMON(1,5,0)
},
{
222,
MR_TAG_COMMON(1,5,1)
},
{
211,
MR_TAG_COMMON(3,4,4)
},
{
211,
MR_TAG_COMMON(3,4,5)
},
{
211,
MR_TAG_COMMON(3,4,6)
},
{
249,
MR_TAG_COMMON(1,5,1)
},
{
478,
MR_TAG_COMMON(1,5,1)
},
{
296,
MR_TAG_COMMON(1,5,1)
},
{
191,
MR_TAG_COMMON(1,5,0)
},
{
190,
MR_TAG_COMMON(1,5,1)
},
{
188,
MR_TAG_COMMON(1,5,1)
},
{
189,
MR_TAG_COMMON(1,5,0)
},
{
218,
MR_TAG_COMMON(1,5,0)
},
{
211,
MR_TAG_COMMON(3,4,10)
},
{
212,
MR_TAG_COMMON(1,5,1)
},
{
245,
MR_TAG_COMMON(1,5,1)
},
{
190,
MR_TAG_COMMON(1,5,0)
},
{
189,
MR_TAG_COMMON(1,5,1)
},
{
191,
MR_TAG_COMMON(1,5,1)
},
{
188,
MR_TAG_COMMON(1,5,0)
},
{
227,
MR_TAG_COMMON(1,5,0)
},
{
226,
MR_TAG_COMMON(1,5,0)
},
{
224,
MR_TAG_COMMON(1,5,1)
},
{
226,
MR_TAG_COMMON(1,5,1)
},
{
227,
MR_TAG_COMMON(1,5,1)
},
{
238,
MR_TAG_COMMON(1,5,1)
},
{
219,
MR_TAG_COMMON(1,5,1)
},
{
228,
MR_TAG_COMMON(1,5,1)
},
{
223,
MR_TAG_COMMON(1,5,1)
},
{
222,
MR_TAG_COMMON(1,5,0)
},
{
213,
MR_TAG_COMMON(1,5,1)
},
{
215,
MR_TAG_COMMON(1,5,0)
},
{
214,
MR_TAG_COMMON(1,5,1)
},
{
215,
MR_TAG_COMMON(1,5,1)
},
{
209,
MR_TAG_COMMON(1,5,1)
},
{
208,
MR_TAG_COMMON(1,5,0)
},
{
209,
MR_TAG_COMMON(1,5,0)
},
{
208,
MR_TAG_COMMON(1,5,1)
},
{
2,
MR_tbmkword(0, 0)
},
{
212,
MR_TAG_COMMON(1,5,0)
},
{
213,
MR_TAG_COMMON(1,5,0)
},
{
211,
MR_TAG_COMMON(3,4,14)
},
{
214,
MR_TAG_COMMON(1,5,0)
},
{
245,
MR_TAG_COMMON(1,5,0)
},
{
182,
MR_TAG_COMMON(1,5,0)
},
{
228,
MR_TAG_COMMON(1,5,0)
},
{
224,
MR_TAG_COMMON(1,5,0)
},
{
296,
MR_TAG_COMMON(1,5,0)
},
};

static const struct mercury_type_4 mercury_common_4[15] =
{
{
0,
MR_string_const("accurate", 8)
},
{
0,
MR_string_const("c", 1)
},
{
0,
MR_string_const("csharp", 6)
},
{
0,
MR_string_const("erlang", 6)
},
{
0,
MR_string_const("boehm", 5)
},
{
0,
MR_string_const("boehm_debug", 11)
},
{
0,
MR_string_const("hgc", 3)
},
{
0,
MR_string_const("asm", 3)
},
{
0,
MR_string_const("il", 2)
},
{
0,
MR_string_const("java", 4)
},
{
0,
MR_string_const("mps", 3)
},
{
0,
MR_string_const("automatic", 9)
},
{
0,
MR_string_const(".exe", 4)
},
{
0,
MR_string_const("shared", 6)
},
{
0,
MR_string_const("none", 4)
},
};

static const struct mercury_type_5 mercury_common_5[5] =
{
{
0
},
{
1
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

static const struct mercury_type_6 mercury_common_6[6] =
{
{
MR_TAG_COMMON(1,1,9)
},
{
MR_TAG_COMMON(1,1,19)
},
{
MR_TAG_COMMON(1,1,34)
},
{
MR_TAG_COMMON(1,1,47)
},
{
MR_TAG_COMMON(1,1,62)
},
{
MR_TAG_COMMON(1,1,63)
},
};

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
mercury_data__closure_layout__libs__handle_options__grade_directory_component_2_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__libs__handle_options__postprocess_options_libgrades_4_0_3;
static const MR_UserClosureId
mercury_data__closure_layout__libs__handle_options__postprocess_options_libgrades_4_0_5;
static const MR_UserClosureId
mercury_data__closure_layout__libs__handle_options__convert_options_to_globals_22_0_6;
static const MR_UserClosureId
mercury_data__closure_layout__libs__handle_options__convert_options_to_globals_22_0_7;
static const MR_UserClosureId
mercury_data__closure_layout__libs__handle_options__convert_options_to_globals_22_0_10;
static const MR_UserClosureId
mercury_data__closure_layout__libs__handle_options__convert_options_to_globals_22_0_11;
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
static const struct mercury_type_7 mercury_common_7[16] =
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
MR_COMMON(0,3),
MR_COMMON(0,4)
},
{
(MR_Word *) &mercury_data__closure_layout__libs__handle_options__grade_directory_component_2_0_1,
(MR_Word *) (MR_Integer) 0,
2,
MR_COMMON(0,3),
MR_COMMON(0,4)
},
{
(MR_Word *) &mercury_data__closure_layout__libs__handle_options__postprocess_options_libgrades_4_0_3,
(MR_Word *) (MR_Integer) 0,
2,
MR_COMMON(1,119),
MR_COMMON(1,119)
},
{
(MR_Word *) &mercury_data__closure_layout__libs__handle_options__postprocess_options_libgrades_4_0_5,
(MR_Word *) (MR_Integer) 0,
2,
MR_COMMON(1,119),
MR_COMMON(1,119)
},
{
(MR_Word *) &mercury_data__closure_layout__libs__handle_options__convert_options_to_globals_22_0_6,
(MR_Word *) (MR_Integer) 0,
2,
MR_STRING_CTOR_ADDR,
MR_STRING_CTOR_ADDR
},
{
(MR_Word *) &mercury_data__closure_layout__libs__handle_options__convert_options_to_globals_22_0_7,
(MR_Word *) (MR_Integer) 0,
2,
MR_COMMON(17,0),
MR_STRING_CTOR_ADDR
},
{
(MR_Word *) &mercury_data__closure_layout__libs__handle_options__convert_options_to_globals_22_0_10,
(MR_Word *) (MR_Integer) 0,
2,
MR_STRING_CTOR_ADDR,
MR_STRING_CTOR_ADDR
},
{
(MR_Word *) &mercury_data__closure_layout__libs__handle_options__convert_options_to_globals_22_0_11,
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
static const struct mercury_type_8 mercury_common_8[19] =
{
{
MR_COMMON(7,0),
MR_ENTRY_AP(libs__options__short_option_2_0),
0
},
{
MR_COMMON(7,1),
MR_ENTRY_AP(libs__options__long_option_2_0),
0
},
{
MR_COMMON(7,2),
MR_ENTRY_AP(libs__options__option_defaults_2_0),
0
},
{
MR_COMMON(9,0),
MR_ENTRY_AP(libs__options__special_handler_4_0),
0
},
{
MR_COMMON(11,0),
MR_ENTRY_AP(libs__handle_options__IntroducedFrom__pred__check_option_values__526__1_1_0),
0
},
{
MR_COMMON(7,5),
MR_ENTRY_AP(libs__handle_options__must_contain_2_0),
0
},
{
MR_COMMON(7,6),
MR_ENTRY_AP(libs__handle_options__must_not_contain_2_0),
0
},
{
MR_COMMON(7,9),
MR_ENTRY_AP(fn__libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2179__1_1_0),
0
},
{
MR_COMMON(7,10),
MR_ENTRY_AP(fn__libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2180__1_1_0),
0
},
{
MR_COMMON(7,11),
MR_ENTRY_AP(libs__options__short_option_2_0),
0
},
{
MR_COMMON(7,12),
MR_ENTRY_AP(libs__options__long_option_2_0),
0
},
{
MR_COMMON(7,13),
MR_ENTRY_AP(libs__options__option_defaults_2_0),
0
},
{
MR_COMMON(9,2),
MR_ENTRY_AP(libs__options__special_handler_4_0),
0
},
{
MR_COMMON(11,1),
MR_ENTRY_AP(libs__handle_options__grade_start_values_1_0),
0
},
{
MR_COMMON(16,8),
MR_ENTRY_AP(libs__handle_options__IntroducedFrom__pred__reset_grade_options__3089__1_3_0),
0
},
{
MR_COMMON(19,0),
MR_ENTRY_AP(libs__handle_options__IntroducedFrom__pred__convert_grade_option__2722__1_5_0),
0
},
{
MR_COMMON(7,15),
MR_ENTRY_AP(libs__handle_options__IntroducedFrom__pred__grade_string_to_comp_strings__2655__1_2_0),
0
},
{
MR_COMMON(16,9),
MR_ENTRY_AP(libs__handle_options__IntroducedFrom__pred__add_option_list__2745__1_3_0),
0
},
{
MR_COMMON(16,10),
MR_ENTRY_AP(libs__handle_options__IntroducedFrom__pred__add_option_list__2745__1_3_0),
0
},
};

static const MR_UserClosureId
mercury_data__closure_layout__libs__handle_options__process_given_options_6_0_4;
extern const MR_TypeCtorInfo_Struct mercury_data_getopt_io__type_ctor_info_special_data_0;
static const MR_UserClosureId
mercury_data__closure_layout__libs__handle_options__convert_options_to_globals_22_0_5;
static const MR_UserClosureId
mercury_data__closure_layout__libs__handle_options__separate_option_args_5_0_4;
static const MR_UserClosureId
mercury_data__closure_layout__libs__handle_options__usage_errors_3_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_io__type_ctor_info_state_0;
static const struct mercury_type_9 mercury_common_9[4] =
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
MR_COMMON(0,3),
MR_COMMON(1,118)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__libs__handle_options__convert_options_to_globals_22_0_5,
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
MR_COMMON(0,3),
MR_COMMON(1,118)
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

static const struct mercury_type_10 mercury_common_10[2] =
{
{
{
MR_TAG_COMMON(0,8,0),
MR_TAG_COMMON(0,8,1),
MR_TAG_COMMON(0,8,2),
MR_TAG_COMMON(0,8,3)
}
},
{
{
MR_TAG_COMMON(0,8,9),
MR_TAG_COMMON(0,8,10),
MR_TAG_COMMON(0,8,11),
MR_TAG_COMMON(0,8,12)
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__libs__handle_options__check_option_values_22_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__libs__handle_options__convert_grade_option_3_0_1;
static const struct mercury_type_11 mercury_common_11[2] =
{
{
(MR_Word *) &mercury_data__closure_layout__libs__handle_options__check_option_values_22_0_1,
(MR_Word *) (MR_Integer) 0,
1,
MR_CHAR_CTOR_ADDR
},
{
(MR_Word *) &mercury_data__closure_layout__libs__handle_options__convert_grade_option_3_0_1,
(MR_Word *) (MR_Integer) 0,
1,
MR_COMMON(0,5)
},
};

static const MR_UserClosureId
mercury_data__closure_layout__libs__handle_options__postprocess_options_libgrades_4_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__libs__handle_options__postprocess_options_libgrades_4_0_2;
static const struct mercury_type_12 mercury_common_12[2] =
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
MR_COMMON(1,119),
MR_COMMON(1,119),
MR_COMMON(1,119),
MR_COMMON(1,119)
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
MR_COMMON(1,119),
MR_COMMON(1,119),
MR_COMMON(1,119),
MR_COMMON(1,119)
}
},
};

static const struct mercury_type_13 mercury_common_13[2] =
{
{
MR_COMMON(12,0),
MR_ENTRY_AP(libs__handle_options__string_to_grade_component_6_0),
1,
MR_string_const("included", 8)
},
{
MR_COMMON(12,1),
MR_ENTRY_AP(libs__handle_options__string_to_grade_component_6_0),
1,
MR_string_const("excluded", 8)
},
};

extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_pred_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_func_0;
static const struct mercury_type_14 mercury_common_14[2] =
{
{
MR_CTOR0_ADDR(builtin, pred),
2,
MR_COMMON(1,120),
MR_COMMON(1,120)
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
static const struct mercury_type_15 mercury_common_15[2] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__libs__handle_options__postprocess_options_libgrades_4_0_4,
(MR_Word *) (MR_Integer) 0
},
7,
{
MR_COMMON(14,0),
MR_COMMON(1,119),
MR_STRING_CTOR_ADDR,
MR_COMMON(1,119),
MR_COMMON(1,119),
MR_COMMON(1,119),
MR_COMMON(1,119)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__libs__handle_options__postprocess_options_libgrades_4_0_6,
(MR_Word *) (MR_Integer) 0
},
7,
{
MR_COMMON(14,0),
MR_COMMON(1,119),
MR_STRING_CTOR_ADDR,
MR_COMMON(1,119),
MR_COMMON(1,119),
MR_COMMON(1,119),
MR_COMMON(1,119)
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__libs__handle_options__convert_options_to_globals_22_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__libs__handle_options__convert_options_to_globals_22_0_2;
static const MR_UserClosureId
mercury_data__closure_layout__libs__handle_options__convert_options_to_globals_22_0_3;
static const MR_UserClosureId
mercury_data__closure_layout__libs__handle_options__convert_options_to_globals_22_0_4;
static const MR_UserClosureId
mercury_data__closure_layout__libs__handle_options__convert_options_to_globals_22_0_8;
static const MR_UserClosureId
mercury_data__closure_layout__libs__handle_options__convert_options_to_globals_22_0_9;
static const MR_UserClosureId
mercury_data__closure_layout__libs__handle_options__convert_options_to_globals_22_0_12;
static const MR_UserClosureId
mercury_data__closure_layout__libs__handle_options__convert_options_to_globals_22_0_13;
static const MR_UserClosureId
mercury_data__closure_layout__libs__handle_options__convert_grade_option_3_0_2;
static const MR_UserClosureId
mercury_data__closure_layout__libs__handle_options__IntroducedFrom__pred__convert_grade_option__2722__1_5_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__libs__handle_options__IntroducedFrom__pred__convert_grade_option__2722__1_5_0_2;
static const struct mercury_type_16 mercury_common_16[11] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__libs__handle_options__convert_options_to_globals_22_0_1,
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
(MR_Word *) &mercury_data__closure_layout__libs__handle_options__convert_options_to_globals_22_0_2,
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
(MR_Word *) &mercury_data__closure_layout__libs__handle_options__convert_options_to_globals_22_0_3,
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
(MR_Word *) &mercury_data__closure_layout__libs__handle_options__convert_options_to_globals_22_0_4,
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
(MR_Word *) &mercury_data__closure_layout__libs__handle_options__convert_options_to_globals_22_0_8,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_COMMON(14,1),
MR_STRING_CTOR_ADDR,
MR_STRING_CTOR_ADDR
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__libs__handle_options__convert_options_to_globals_22_0_9,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_COMMON(14,1),
MR_STRING_CTOR_ADDR,
MR_STRING_CTOR_ADDR
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__libs__handle_options__convert_options_to_globals_22_0_12,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_COMMON(14,1),
MR_STRING_CTOR_ADDR,
MR_STRING_CTOR_ADDR
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__libs__handle_options__convert_options_to_globals_22_0_13,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_COMMON(14,1),
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
MR_COMMON(0,5),
MR_COMMON(0,3),
MR_COMMON(0,3)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__libs__handle_options__IntroducedFrom__pred__convert_grade_option__2722__1_5_0_1,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_COMMON(0,5),
MR_COMMON(0,3),
MR_COMMON(0,3)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__libs__handle_options__IntroducedFrom__pred__convert_grade_option__2722__1_5_0_2,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_COMMON(0,5),
MR_COMMON(0,3),
MR_COMMON(0,3)
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
MR_COMMON(7,14),
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
MR_COMMON(0,3),
MR_COMMON(0,3),
MR_COMMON(1,121),
MR_COMMON(1,121)
}
},
};

static const struct mercury_type_6 mercury_vector_common_6_0[28] =
{
{
MR_TAG_COMMON(0,3,12)
},
{
MR_TAG_COMMON(0,3,11)
},
{
MR_TAG_COMMON(0,3,8)
},
{
MR_TAG_COMMON(0,3,4)
},
{
MR_TAG_COMMON(0,3,2)
},
{
MR_TAG_COMMON(0,3,3)
},
{
MR_TAG_COMMON(0,3,60)
},
{
MR_TAG_COMMON(0,3,61)
},
{
MR_TAG_COMMON(0,3,62)
},
{
MR_TAG_COMMON(0,3,29)
},
{
MR_TAG_COMMON(0,3,32)
},
{
MR_TAG_COMMON(0,3,40)
},
{
MR_TAG_COMMON(0,3,37)
},
{
MR_TAG_COMMON(0,3,63)
},
{
MR_TAG_COMMON(0,3,52)
},
{
MR_TAG_COMMON(0,3,20)
},
{
MR_TAG_COMMON(0,3,17)
},
{
MR_TAG_COMMON(0,3,33)
},
{
MR_TAG_COMMON(0,3,64)
},
{
MR_TAG_COMMON(0,3,65)
},
{
MR_TAG_COMMON(0,3,13)
},
{
MR_TAG_COMMON(0,3,66)
},
{
MR_TAG_COMMON(0,3,50)
},
{
MR_TAG_COMMON(0,3,21)
},
{
MR_TAG_COMMON(0,3,67)
},
{
MR_TAG_COMMON(0,3,42)
},
{
MR_TAG_COMMON(0,3,41)
},
{
MR_TAG_COMMON(0,3,68)
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
	"comp_par_threadscope",
	2
};

static const MR_EnumFunctorDesc mercury_data_libs__handle_options__enum_functor_desc_grade_component_0_3 = {
	"comp_gc",
	3
};

static const MR_EnumFunctorDesc mercury_data_libs__handle_options__enum_functor_desc_grade_component_0_4 = {
	"comp_prof",
	4
};

static const MR_EnumFunctorDesc mercury_data_libs__handle_options__enum_functor_desc_grade_component_0_5 = {
	"comp_term_size",
	5
};

static const MR_EnumFunctorDesc mercury_data_libs__handle_options__enum_functor_desc_grade_component_0_6 = {
	"comp_trail",
	6
};

static const MR_EnumFunctorDesc mercury_data_libs__handle_options__enum_functor_desc_grade_component_0_7 = {
	"comp_minimal_model",
	7
};

static const MR_EnumFunctorDesc mercury_data_libs__handle_options__enum_functor_desc_grade_component_0_8 = {
	"comp_single_prec_float",
	8
};

static const MR_EnumFunctorDesc mercury_data_libs__handle_options__enum_functor_desc_grade_component_0_9 = {
	"comp_pic",
	9
};

static const MR_EnumFunctorDesc mercury_data_libs__handle_options__enum_functor_desc_grade_component_0_10 = {
	"comp_lowlevel",
	10
};

static const MR_EnumFunctorDesc mercury_data_libs__handle_options__enum_functor_desc_grade_component_0_11 = {
	"comp_trace",
	11
};

static const MR_EnumFunctorDesc mercury_data_libs__handle_options__enum_functor_desc_grade_component_0_12 = {
	"comp_stack_extend",
	12
};

static const MR_EnumFunctorDesc mercury_data_libs__handle_options__enum_functor_desc_grade_component_0_13 = {
	"comp_regions",
	13
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
	&mercury_data_libs__handle_options__enum_functor_desc_grade_component_0_12,
	&mercury_data_libs__handle_options__enum_functor_desc_grade_component_0_13
};

const MR_EnumFunctorDescPtr mercury_data_libs__handle_options__enum_name_ordered_grade_component_0[] = {
	&mercury_data_libs__handle_options__enum_functor_desc_grade_component_0_3,
	&mercury_data_libs__handle_options__enum_functor_desc_grade_component_0_0,
	&mercury_data_libs__handle_options__enum_functor_desc_grade_component_0_10,
	&mercury_data_libs__handle_options__enum_functor_desc_grade_component_0_7,
	&mercury_data_libs__handle_options__enum_functor_desc_grade_component_0_1,
	&mercury_data_libs__handle_options__enum_functor_desc_grade_component_0_2,
	&mercury_data_libs__handle_options__enum_functor_desc_grade_component_0_9,
	&mercury_data_libs__handle_options__enum_functor_desc_grade_component_0_4,
	&mercury_data_libs__handle_options__enum_functor_desc_grade_component_0_13,
	&mercury_data_libs__handle_options__enum_functor_desc_grade_component_0_8,
	&mercury_data_libs__handle_options__enum_functor_desc_grade_component_0_12,
	&mercury_data_libs__handle_options__enum_functor_desc_grade_component_0_5,
	&mercury_data_libs__handle_options__enum_functor_desc_grade_component_0_11,
	&mercury_data_libs__handle_options__enum_functor_desc_grade_component_0_6
};

const MR_Integer mercury_data_libs__handle_options__functor_number_map_grade_component_0[] = {
	1,
	4,
	5,
	0,
	7,
	11,
	13,
	3,
	9,
	6,
	2,
	12,
	10,
	8 };
	
const MR_TypeCtorInfo_Struct mercury_data_libs__handle_options__type_ctor_info_grade_component_0 = {
	0,
	15,
	-1,
	MR_TYPECTOR_REP_ENUM,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___libs__handle_options__grade_component_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___libs__handle_options__grade_component_0_0)),
	"libs.handle_options",
	"grade_component",
	{ (void *)mercury_data_libs__handle_options__enum_name_ordered_grade_component_0 },
	{ (void *)mercury_data_libs__handle_options__enum_value_ordered_grade_component_0 },
	14,
	4,
	mercury_data_libs__handle_options__functor_number_map_grade_component_0
};


static const MR_UserClosureId
mercury_data__closure_layout__libs__handle_options__IntroducedFrom__pred__convert_grade_option__2722__1_5_0_2 = {
{
MR_PREDICATE,
"libs.handle_options",
"libs.handle_options",
"lambda_handle_options_m_2745",
3,
0
},
"libs.handle_options",
"handle_options.m",
2745,
"5"
};

static const MR_UserClosureId
mercury_data__closure_layout__libs__handle_options__IntroducedFrom__pred__convert_grade_option__2722__1_5_0_1 = {
{
MR_PREDICATE,
"libs.handle_options",
"libs.handle_options",
"lambda_handle_options_m_2745",
3,
0
},
"libs.handle_options",
"handle_options.m",
2745,
"5"
};

static const MR_UserClosureId
mercury_data__closure_layout__libs__handle_options__filter_grade_7_0_1 = {
{
MR_PREDICATE,
"libs.handle_options",
"libs.handle_options",
"lambda_handle_options_m_2655",
2,
0
},
"libs.handle_options",
"handle_options.m",
2655,
"9"
};

static const MR_UserClosureId
mercury_data__closure_layout__libs__handle_options__convert_grade_option_3_0_3 = {
{
MR_PREDICATE,
"libs.handle_options",
"libs.handle_options",
"lambda_handle_options_m_2722",
5,
0
},
"libs.handle_options",
"handle_options.m",
2722,
"8"
};

static const MR_UserClosureId
mercury_data__closure_layout__libs__handle_options__convert_grade_option_3_0_2 = {
{
MR_PREDICATE,
"libs.handle_options",
"libs.handle_options",
"lambda_handle_options_m_3089",
3,
0
},
"libs.handle_options",
"handle_options.m",
3089,
"5"
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
3089,
"4"
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
3137,
"8"
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
2492,
"7"
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
189,
"14"
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
189,
"13"
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
189,
"12"
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
189,
"11"
};

static const MR_UserClosureId
mercury_data__closure_layout__libs__handle_options__convert_options_to_globals_22_0_13 = {
{
MR_FUNCTION,
"libs.handle_options",
"libs.handle_options",
"lambda_handle_options_m_2173",
3,
0
},
"libs.handle_options",
"handle_options.m",
2173,
"1840"
};

static const MR_UserClosureId
mercury_data__closure_layout__libs__handle_options__convert_options_to_globals_22_0_12 = {
{
MR_FUNCTION,
"libs.handle_options",
"libs.handle_options",
"lambda_handle_options_m_2171",
3,
0
},
"libs.handle_options",
"handle_options.m",
2171,
"1831"
};

static const MR_UserClosureId
mercury_data__closure_layout__libs__handle_options__convert_options_to_globals_22_0_11 = {
{
MR_FUNCTION,
"libs.handle_options",
"libs.handle_options",
"lambda_handle_options_m_2180",
2,
0
},
"libs.handle_options",
"handle_options.m",
2180,
"1822"
};

static const MR_UserClosureId
mercury_data__closure_layout__libs__handle_options__convert_options_to_globals_22_0_10 = {
{
MR_FUNCTION,
"libs.handle_options",
"libs.handle_options",
"lambda_handle_options_m_2179",
2,
0
},
"libs.handle_options",
"handle_options.m",
2179,
"1814"
};

static const MR_UserClosureId
mercury_data__closure_layout__libs__handle_options__convert_options_to_globals_22_0_9 = {
{
MR_FUNCTION,
"libs.handle_options",
"libs.handle_options",
"lambda_handle_options_m_2149",
3,
0
},
"libs.handle_options",
"handle_options.m",
2149,
"1788"
};

static const MR_UserClosureId
mercury_data__closure_layout__libs__handle_options__convert_options_to_globals_22_0_8 = {
{
MR_FUNCTION,
"libs.handle_options",
"libs.handle_options",
"lambda_handle_options_m_2145",
3,
0
},
"libs.handle_options",
"handle_options.m",
2145,
"1776"
};

static const MR_UserClosureId
mercury_data__closure_layout__libs__handle_options__convert_options_to_globals_22_0_7 = {
{
MR_PREDICATE,
"libs.handle_options",
"libs.handle_options",
"lambda2_handle_options_m_2127",
2,
0
},
"libs.handle_options",
"handle_options.m",
2127,
"1756"
};

static const MR_UserClosureId
mercury_data__closure_layout__libs__handle_options__convert_options_to_globals_22_0_6 = {
{
MR_PREDICATE,
"libs.handle_options",
"libs.handle_options",
"lambda_handle_options_m_2127",
2,
0
},
"libs.handle_options",
"handle_options.m",
2127,
"1752"
};

static const MR_UserClosureId
mercury_data__closure_layout__libs__handle_options__convert_options_to_globals_22_0_5 = {
{
MR_FUNCTION,
"libs.handle_options",
"libs.handle_options",
"lambda_handle_options_m_2109",
4,
0
},
"libs.handle_options",
"handle_options.m",
2109,
"1731"
};

static const MR_UserClosureId
mercury_data__closure_layout__libs__handle_options__convert_options_to_globals_22_0_4 = {
{
MR_FUNCTION,
"libs.handle_options",
"libs.handle_options",
"lambda_handle_options_m_2073",
3,
0
},
"libs.handle_options",
"handle_options.m",
2073,
"1696"
};

static const MR_UserClosureId
mercury_data__closure_layout__libs__handle_options__convert_options_to_globals_22_0_3 = {
{
MR_FUNCTION,
"libs.handle_options",
"libs.handle_options",
"lambda_handle_options_m_2063",
3,
0
},
"libs.handle_options",
"handle_options.m",
2063,
"1682"
};

static const MR_UserClosureId
mercury_data__closure_layout__libs__handle_options__convert_options_to_globals_22_0_2 = {
{
MR_FUNCTION,
"libs.handle_options",
"libs.handle_options",
"lambda_handle_options_m_2050",
3,
0
},
"libs.handle_options",
"handle_options.m",
2050,
"1660"
};

static const MR_UserClosureId
mercury_data__closure_layout__libs__handle_options__convert_options_to_globals_22_0_1 = {
{
MR_FUNCTION,
"libs.handle_options",
"libs.handle_options",
"lambda_handle_options_m_2035",
3,
0
},
"libs.handle_options",
"handle_options.m",
2035,
"1640"
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
2574,
"26"
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
2574,
"27"
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
2572,
"22"
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
2572,
"23"
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
2564,
"14"
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
2562,
"10"
};

static const MR_UserClosureId
mercury_data__closure_layout__libs__handle_options__grade_directory_component_2_0_1 = {
{
MR_PREDICATE,
"libs.handle_options",
"libs.handle_options",
"lambda_handle_options_m_2794",
2,
0
},
"libs.handle_options",
"handle_options.m",
2794,
"4"
};

static const MR_UserClosureId
mercury_data__closure_layout__libs__handle_options__compute_grade_2_0_1 = {
{
MR_PREDICATE,
"libs.handle_options",
"libs.handle_options",
"lambda_handle_options_m_2794",
2,
0
},
"libs.handle_options",
"handle_options.m",
2794,
"4"
};

static const MR_UserClosureId
mercury_data__closure_layout__libs__handle_options__check_option_values_22_0_1 = {
{
MR_PREDICATE,
"libs.handle_options",
"libs.handle_options",
"lambda_handle_options_m_526",
1,
0
},
"libs.handle_options",
"handle_options.m",
526,
"409"
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
189,
"14"
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
189,
"13"
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
189,
"12"
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
189,
"11"
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
	MR_r2 = (MR_Word) MR_TAG_COMMON(1,10,0);
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
	MR_init_label10(libs__handle_options__convert_dump_alias_2_0,3,4,5,6,7,8,9,10,11,12)
	MR_init_label10(libs__handle_options__convert_dump_alias_2_0,13,14,15,16,17,18,19,20,21,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'convert_dump_alias'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(libs__handle_options__convert_dump_alias_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("mm", 2)) != 0)) {
		MR_GOTO_LAB(libs__handle_options__convert_dump_alias_2_0_i3);
	}
	MR_r2 = (MR_Word) MR_string_const("bdgvP", 5);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__handle_options__convert_dump_alias_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("ALL", 3)) != 0)) {
		MR_GOTO_LAB(libs__handle_options__convert_dump_alias_2_0_i4);
	}
	MR_r2 = (MR_Word) MR_string_const("abcdEfgilmnprstuvzBCDIMPRSTUZ", 29);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__handle_options__convert_dump_alias_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("all", 3)) != 0)) {
		MR_GOTO_LAB(libs__handle_options__convert_dump_alias_2_0_i5);
	}
	MR_r2 = (MR_Word) MR_string_const("abcdEfgilmnprstuvzBCMPSTZ", 25);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__handle_options__convert_dump_alias_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("cmp", 3)) != 0)) {
		MR_GOTO_LAB(libs__handle_options__convert_dump_alias_2_0_i6);
	}
	MR_r2 = (MR_Word) MR_string_const("bdfgilmnprstuvzP", 16);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__handle_options__convert_dump_alias_2_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("lco", 3)) != 0)) {
		MR_GOTO_LAB(libs__handle_options__convert_dump_alias_2_0_i7);
	}
	MR_r2 = (MR_Word) MR_string_const("agiuvzD", 7);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__handle_options__convert_dump_alias_2_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("min", 3)) != 0)) {
		MR_GOTO_LAB(libs__handle_options__convert_dump_alias_2_0_i8);
	}
	MR_r2 = (MR_Word) MR_string_const("ilv", 3);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__handle_options__convert_dump_alias_2_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("osv", 3)) != 0)) {
		MR_GOTO_LAB(libs__handle_options__convert_dump_alias_2_0_i9);
	}
	MR_r2 = (MR_Word) MR_string_const("bcdglmnpruvP", 12);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__handle_options__convert_dump_alias_2_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("allD", 4)) != 0)) {
		MR_GOTO_LAB(libs__handle_options__convert_dump_alias_2_0_i10);
	}
	MR_r2 = (MR_Word) MR_string_const("abcdEfgilmnprstuvzBCDMPT", 24);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__handle_options__convert_dump_alias_2_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("ctgc", 4)) != 0)) {
		MR_GOTO_LAB(libs__handle_options__convert_dump_alias_2_0_i11);
	}
	MR_r2 = (MR_Word) MR_string_const("cdinpGDRS", 9);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__handle_options__convert_dump_alias_2_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("most", 4)) != 0)) {
		MR_GOTO_LAB(libs__handle_options__convert_dump_alias_2_0_i12);
	}
	MR_r2 = (MR_Word) MR_string_const("bcdfgilmnprstvzP", 16);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__handle_options__convert_dump_alias_2_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("poly", 4)) != 0)) {
		MR_GOTO_LAB(libs__handle_options__convert_dump_alias_2_0_i13);
	}
	MR_r2 = (MR_Word) MR_string_const("vxX", 3);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__handle_options__convert_dump_alias_2_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("vars", 4)) != 0)) {
		MR_GOTO_LAB(libs__handle_options__convert_dump_alias_2_0_i14);
	}
	MR_r2 = (MR_Word) MR_string_const("npBis", 5);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__handle_options__convert_dump_alias_2_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("paths", 5)) != 0)) {
		MR_GOTO_LAB(libs__handle_options__convert_dump_alias_2_0_i15);
	}
	MR_r2 = (MR_Word) MR_string_const("cP", 2);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__handle_options__convert_dump_alias_2_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("petdr", 5)) != 0)) {
		MR_GOTO_LAB(libs__handle_options__convert_dump_alias_2_0_i16);
	}
	MR_r2 = (MR_Word) MR_string_const("din", 3);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__handle_options__convert_dump_alias_2_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("trans", 5)) != 0)) {
		MR_GOTO_LAB(libs__handle_options__convert_dump_alias_2_0_i17);
	}
	MR_r2 = (MR_Word) MR_string_const("bcdglmnstuvz", 12);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__handle_options__convert_dump_alias_2_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("detism", 6)) != 0)) {
		MR_GOTO_LAB(libs__handle_options__convert_dump_alias_2_0_i18);
	}
	MR_r2 = (MR_Word) MR_string_const("divM", 4);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__handle_options__convert_dump_alias_2_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("codegen", 7)) != 0)) {
		MR_GOTO_LAB(libs__handle_options__convert_dump_alias_2_0_i19);
	}
	MR_r2 = (MR_Word) MR_string_const("dfnprsu", 7);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__handle_options__convert_dump_alias_2_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("vanessa", 7)) != 0)) {
		MR_GOTO_LAB(libs__handle_options__convert_dump_alias_2_0_i20);
	}
	MR_r2 = (MR_Word) MR_string_const("ltuCIU", 6);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__handle_options__convert_dump_alias_2_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("mintrans", 8)) != 0)) {
		MR_GOTO_LAB(libs__handle_options__convert_dump_alias_2_0_i21);
	}
	MR_r2 = (MR_Word) MR_string_const("bcdglmnstvz", 11);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__handle_options__convert_dump_alias_2_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("statevar", 8)) != 0)) {
		MR_GOTO_LAB(libs__handle_options__convert_dump_alias_2_0_i1);
	}
	MR_r2 = (MR_Word) MR_string_const("gvCP", 4);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__handle_options__convert_dump_alias_2_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
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
MR_decl_entry(libs__globals__convert_ssdb_trace_level_3_0);
MR_decl_entry(libs__globals__convert_maybe_thread_safe_2_0);
MR_decl_entry(map__set_4_0);
MR_decl_entry(getopt_io__lookup_string_option_3_0);
MR_decl_entry(string__contains_char_2_0);
MR_decl_entry(fn__f_115_116_114_105_110_103_95_95_43_43_2_0);
MR_decl_entry(libs__globals__convert_c_compiler_type_2_0);
MR_decl_entry(libs__globals__convert_csharp_compiler_type_2_0);
MR_decl_entry(libs__globals__convert_reuse_strategy_3_0);
MR_decl_entry(fn__string__words_separator_2_0);
MR_decl_entry(string__to_int_2_0);
MR_decl_entry(map__det_update_4_0);
MR_decl_entry(mdbcomp__feedback__read_feedback_file_4_0);
MR_decl_entry(mdbcomp__feedback__read_error_message_string_3_0);
MR_decl_entry(libs__globals__convert_env_type_2_0);

MR_BEGIN_MODULE(libs__handle_options_module3)
	MR_init_entry1(libs__handle_options__check_option_values_22_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__libs__handle_options__check_option_values_22_0);
	MR_init_label10(libs__handle_options__check_option_values_22_0,2,6,4,8,9,10,14,12,16,17)
	MR_init_label10(libs__handle_options__check_option_values_22_0,18,22,20,24,25,26,27,29,30,31)
	MR_init_label10(libs__handle_options__check_option_values_22_0,35,33,37,38,39,43,41,45,46,47)
	MR_init_label10(libs__handle_options__check_option_values_22_0,51,48,52,53,54,60,64,63,56,66)
	MR_init_label10(libs__handle_options__check_option_values_22_0,67,69,70,74,72,76,77,78,79,80)
	MR_init_label10(libs__handle_options__check_option_values_22_0,83,84,89,86,91,93,94,98,96,100)
	MR_init_label10(libs__handle_options__check_option_values_22_0,101,102,103,109,112,107,113,115,116,119)
	MR_init_label10(libs__handle_options__check_option_values_22_0,121,124,120,127,129,132,128,135,140,139)
	MR_init_label10(libs__handle_options__check_option_values_22_0,143,142,146,145,149,148,152,151,155,154)
	MR_init_label10(libs__handle_options__check_option_values_22_0,158,157,161,160,164,163,167,166,170,169)
	MR_init_label10(libs__handle_options__check_option_values_22_0,173,172,176,175,179,178,182,181,185,184)
	MR_init_label10(libs__handle_options__check_option_values_22_0,188,187,191,190,194,193,197,196,199,138)
	MR_init_label10(libs__handle_options__check_option_values_22_0,202,204,136,207,208,209,213,211,215,216)
	MR_init_label10(libs__handle_options__check_option_values_22_0,217,221,219,223,224,225,226,231,228,233)
	MR_init_label10(libs__handle_options__check_option_values_22_0,234,235,240,246,248,250,252,237,256,258)
	MR_init_label10(libs__handle_options__check_option_values_22_0,259,260,265,268,269,267,261,271,272,276)
	MR_init_label10(libs__handle_options__check_option_values_22_0,274,278,279,280,284,282,286,287,291,288)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'check_option_values'/22 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(libs__handle_options__check_option_values_22_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(20);
	MR_sv(20) = (MR_Word) MR_succip;
	MR_sv(8) = MR_r1;
	MR_sv(1) = MR_r2;
	MR_sv(18) = (MR_Word) MR_CTOR0_ADDR(libs__options, option);
	MR_sv(19) = (MR_Word) MR_CTOR0_ADDR(getopt_io, option_data);
	MR_r1 = MR_sv(18);
	MR_r2 = MR_sv(19);
	MR_r3 = MR_sv(8);
	MR_r4 = (MR_Integer) 170;
	MR_np_call_localret_ent(map__lookup_3_0,
		libs__handle_options__check_option_values_22_0_i2);
MR_def_label(libs__handle_options__check_option_values_22_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,0)) {
		MR_GOTO_LAB(libs__handle_options__check_option_values_22_0_i4);
	}
	MR_r1 = MR_tfield(3, MR_r1, 1);
	MR_np_call_localret_ent(libs__globals__convert_target_2_0,
		libs__handle_options__check_option_values_22_0_i6);
MR_def_label(libs__handle_options__check_option_values_22_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(libs__handle_options__check_option_values_22_0_i4);
	}
	MR_sv(2) = MR_sv(1);
	MR_sv(1) = MR_r2;
	MR_r3 = MR_sv(8);
	MR_r4 = (MR_Integer) 211;
	MR_r1 = MR_sv(18);
	MR_r2 = MR_sv(19);
	MR_GOTO_LAB(libs__handle_options__check_option_values_22_0_i9);
MR_def_label(libs__handle_options__check_option_values_22_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("Invalid target option (must be \140c\', \140asm\', \140il\', \140java\', \'csharp\', or \140erlang\')", 79);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(libs__handle_options__add_error_3_0,
		libs__handle_options__check_option_values_22_0_i8);
MR_def_label(libs__handle_options__check_option_values_22_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = (MR_Integer) 0;
	MR_r3 = MR_sv(8);
	MR_sv(2) = MR_r1;
	MR_r4 = (MR_Integer) 211;
	MR_r1 = MR_sv(18);
	MR_r2 = MR_sv(19);
MR_def_label(libs__handle_options__check_option_values_22_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r3;
	MR_sv(18) = MR_r1;
	MR_sv(19) = MR_r2;
	MR_np_call_localret_ent(map__lookup_3_0,
		libs__handle_options__check_option_values_22_0_i10);
MR_def_label(libs__handle_options__check_option_values_22_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,0)) {
		MR_GOTO_LAB(libs__handle_options__check_option_values_22_0_i12);
	}
	MR_r1 = MR_tfield(3, MR_r1, 1);
	MR_np_call_localret_ent(libs__globals__convert_gc_method_2_0,
		libs__handle_options__check_option_values_22_0_i14);
MR_def_label(libs__handle_options__check_option_values_22_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(libs__handle_options__check_option_values_22_0_i12);
	}
	MR_sv(3) = MR_sv(2);
	MR_sv(2) = MR_r2;
	MR_r3 = MR_sv(8);
	MR_r4 = (MR_Integer) 231;
	MR_r1 = MR_sv(18);
	MR_r2 = MR_sv(19);
	MR_GOTO_LAB(libs__handle_options__check_option_values_22_0_i17);
MR_def_label(libs__handle_options__check_option_values_22_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("Invalid GC option (must be \140none\', \140conservative\', \140boehm\', \140hgc\', \140mps\', \140accurate\', or \140automatic\')", 101);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(libs__handle_options__add_error_3_0,
		libs__handle_options__check_option_values_22_0_i16);
MR_def_label(libs__handle_options__check_option_values_22_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = (MR_Integer) 1;
	MR_r3 = MR_sv(8);
	MR_sv(3) = MR_r1;
	MR_r4 = (MR_Integer) 231;
	MR_r1 = MR_sv(18);
	MR_r2 = MR_sv(19);
MR_def_label(libs__handle_options__check_option_values_22_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r3;
	MR_sv(18) = MR_r1;
	MR_sv(19) = MR_r2;
	MR_np_call_localret_ent(map__lookup_3_0,
		libs__handle_options__check_option_values_22_0_i18);
MR_def_label(libs__handle_options__check_option_values_22_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,0)) {
		MR_GOTO_LAB(libs__handle_options__check_option_values_22_0_i20);
	}
	MR_r1 = MR_tfield(3, MR_r1, 1);
	MR_np_call_localret_ent(libs__globals__convert_tags_method_2_0,
		libs__handle_options__check_option_values_22_0_i22);
MR_def_label(libs__handle_options__check_option_values_22_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(libs__handle_options__check_option_values_22_0_i20);
	}
	MR_sv(4) = MR_sv(3);
	MR_sv(3) = MR_r2;
	MR_r3 = MR_sv(8);
	MR_r4 = (MR_Integer) 316;
	MR_r1 = MR_sv(18);
	MR_r2 = MR_sv(19);
	MR_GOTO_LAB(libs__handle_options__check_option_values_22_0_i25);
MR_def_label(libs__handle_options__check_option_values_22_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("Invalid tags option (must be \140none\', \140low\' or \140high\')", 53);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(libs__handle_options__add_error_3_0,
		libs__handle_options__check_option_values_22_0_i24);
MR_def_label(libs__handle_options__check_option_values_22_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = (MR_Integer) 0;
	MR_r3 = MR_sv(8);
	MR_sv(4) = MR_r1;
	MR_r4 = (MR_Integer) 316;
	MR_r1 = MR_sv(18);
	MR_r2 = MR_sv(19);
MR_def_label(libs__handle_options__check_option_values_22_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r3;
	MR_sv(18) = MR_r1;
	MR_sv(19) = MR_r2;
	MR_np_call_localret_ent(map__lookup_3_0,
		libs__handle_options__check_option_values_22_0_i26);
MR_def_label(libs__handle_options__check_option_values_22_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,2)) {
		MR_GOTO_LAB(libs__handle_options__check_option_values_22_0_i27);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(2, MR_r1, 0);
	MR_r5 = MR_tempr1;
	if (MR_INT_LT(MR_tempr1,1)) {
		MR_GOTO_LAB(libs__handle_options__check_option_values_22_0_i27);
	}
	if (MR_INT_GT(MR_tempr1,100)) {
		MR_GOTO_LAB(libs__handle_options__check_option_values_22_0_i27);
	}
	MR_r3 = MR_sv(8);
	MR_r4 = (MR_Integer) 416;
	MR_r1 = MR_sv(18);
	MR_r2 = MR_sv(19);
	MR_GOTO_LAB(libs__handle_options__check_option_values_22_0_i30);
	}
MR_def_label(libs__handle_options__check_option_values_22_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("Invalid argument to option \140--fact-table-hash-percent-full\'\n\t(must be an integer between 1 and 100)", 99);
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(libs__handle_options__add_error_3_0,
		libs__handle_options__check_option_values_22_0_i29);
MR_def_label(libs__handle_options__check_option_values_22_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(8);
	MR_sv(4) = MR_r1;
	MR_r4 = (MR_Integer) 416;
	MR_r1 = MR_sv(18);
	MR_r2 = MR_sv(19);
MR_def_label(libs__handle_options__check_option_values_22_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r3;
	MR_sv(18) = MR_r1;
	MR_sv(19) = MR_r2;
	MR_np_call_localret_ent(map__lookup_3_0,
		libs__handle_options__check_option_values_22_0_i31);
MR_def_label(libs__handle_options__check_option_values_22_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,0)) {
		MR_GOTO_LAB(libs__handle_options__check_option_values_22_0_i33);
	}
	MR_r1 = MR_tfield(3, MR_r1, 1);
	MR_np_call_localret_ent(libs__globals__convert_termination_norm_2_0,
		libs__handle_options__check_option_values_22_0_i35);
MR_def_label(libs__handle_options__check_option_values_22_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(libs__handle_options__check_option_values_22_0_i33);
	}
	MR_sv(5) = MR_sv(4);
	MR_sv(4) = MR_r2;
	MR_r3 = MR_sv(8);
	MR_r4 = (MR_Integer) 422;
	MR_r1 = MR_sv(18);
	MR_r2 = MR_sv(19);
	MR_GOTO_LAB(libs__handle_options__check_option_values_22_0_i38);
MR_def_label(libs__handle_options__check_option_values_22_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("Invalid argument to option \140--termination-norm\'\n\t(must be \140simple\', \140total\' or \140num-data-elems\').", 97);
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(libs__handle_options__add_error_3_0,
		libs__handle_options__check_option_values_22_0_i37);
MR_def_label(libs__handle_options__check_option_values_22_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = (MR_Integer) 0;
	MR_r3 = MR_sv(8);
	MR_sv(5) = MR_r1;
	MR_r4 = (MR_Integer) 422;
	MR_r1 = MR_sv(18);
	MR_r2 = MR_sv(19);
MR_def_label(libs__handle_options__check_option_values_22_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r3;
	MR_sv(18) = MR_r1;
	MR_sv(19) = MR_r2;
	MR_np_call_localret_ent(map__lookup_3_0,
		libs__handle_options__check_option_values_22_0_i39);
MR_def_label(libs__handle_options__check_option_values_22_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,0)) {
		MR_GOTO_LAB(libs__handle_options__check_option_values_22_0_i41);
	}
	MR_r1 = MR_tfield(3, MR_r1, 1);
	MR_np_call_localret_ent(libs__globals__convert_termination_norm_2_0,
		libs__handle_options__check_option_values_22_0_i43);
MR_def_label(libs__handle_options__check_option_values_22_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(libs__handle_options__check_option_values_22_0_i41);
	}
	MR_sv(6) = MR_sv(5);
	MR_sv(5) = MR_r2;
	MR_r3 = MR_sv(8);
	MR_r4 = (MR_Integer) 127;
	MR_r1 = MR_sv(18);
	MR_r2 = MR_sv(19);
	MR_GOTO_LAB(libs__handle_options__check_option_values_22_0_i46);
MR_def_label(libs__handle_options__check_option_values_22_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("Invalid argument to option \140--termination2-norm\'\n\t(must be\140simple\', \140total\' or \140num-data-elems\').", 97);
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(libs__handle_options__add_error_3_0,
		libs__handle_options__check_option_values_22_0_i45);
MR_def_label(libs__handle_options__check_option_values_22_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = (MR_Integer) 0;
	MR_r3 = MR_sv(8);
	MR_sv(6) = MR_r1;
	MR_r4 = (MR_Integer) 127;
	MR_r1 = MR_sv(18);
	MR_r2 = MR_sv(19);
MR_def_label(libs__handle_options__check_option_values_22_0,46)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r3;
	MR_sv(18) = MR_r1;
	MR_sv(19) = MR_r2;
	MR_np_call_localret_ent(map__lookup_3_0,
		libs__handle_options__check_option_values_22_0_i47);
MR_def_label(libs__handle_options__check_option_values_22_0,47)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,1)) {
		MR_GOTO_LAB(libs__handle_options__check_option_values_22_0_i48);
	}
	MR_r2 = MR_tfield(1, MR_r1, 0);
	if (MR_INT_NE(MR_r2,1)) {
		MR_GOTO_LAB(libs__handle_options__check_option_values_22_0_i48);
	}
	MR_np_call_localret_ent(fn__libs__trace_params__trace_level_none_0_0,
		libs__handle_options__check_option_values_22_0_i51);
MR_def_label(libs__handle_options__check_option_values_22_0,51)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(15) = MR_r1;
	MR_r3 = MR_sv(8);
	MR_sv(16) = MR_sv(6);
	MR_r4 = (MR_Integer) 126;
	MR_r1 = MR_sv(18);
	MR_r2 = MR_sv(19);
	MR_GOTO_LAB(libs__handle_options__check_option_values_22_0_i69);
MR_def_label(libs__handle_options__check_option_values_22_0,48)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(18);
	MR_r2 = MR_sv(19);
	MR_r3 = MR_sv(8);
	MR_r4 = (MR_Integer) 115;
	MR_np_call_localret_ent(map__lookup_3_0,
		libs__handle_options__check_option_values_22_0_i52);
MR_def_label(libs__handle_options__check_option_values_22_0,52)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(15) = MR_r1;
	MR_r1 = MR_sv(18);
	MR_r2 = MR_sv(19);
	MR_r3 = MR_sv(8);
	MR_r4 = (MR_Integer) 182;
	MR_np_call_localret_ent(map__lookup_3_0,
		libs__handle_options__check_option_values_22_0_i53);
MR_def_label(libs__handle_options__check_option_values_22_0,53)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(16) = MR_r1;
	MR_r1 = MR_sv(18);
	MR_r2 = MR_sv(19);
	MR_r3 = MR_sv(8);
	MR_r4 = (MR_Integer) 183;
	MR_np_call_localret_ent(map__lookup_3_0,
		libs__handle_options__check_option_values_22_0_i54);
MR_def_label(libs__handle_options__check_option_values_22_0,54)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(15),3,0)) {
		MR_GOTO_LAB(libs__handle_options__check_option_values_22_0_i56);
	}
	if (MR_PTAG_TESTR(MR_sv(16),1)) {
		MR_GOTO_LAB(libs__handle_options__check_option_values_22_0_i56);
	}
	if (MR_PTAG_TESTR(MR_r1,1)) {
		MR_GOTO_LAB(libs__handle_options__check_option_values_22_0_i56);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_tfield(3, MR_sv(15), 1);
	MR_r2 = MR_tfield(1, MR_sv(16), 0);
	MR_r3 = MR_tfield(1, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(libs__trace_params__convert_trace_level_4_0,
		libs__handle_options__check_option_values_22_0_i60);
MR_def_label(libs__handle_options__check_option_values_22_0,60)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(libs__handle_options__check_option_values_22_0_i56);
	}
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(libs__handle_options__check_option_values_22_0_i63);
	}
	MR_np_call_localret_ent(fn__libs__trace_params__trace_level_none_0_0,
		libs__handle_options__check_option_values_22_0_i64);
MR_def_label(libs__handle_options__check_option_values_22_0,64)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(15) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("Specified trace level is not compatible with grade", 50);
	MR_r2 = MR_sv(6);
	MR_np_call_localret_ent(libs__handle_options__add_error_3_0,
		libs__handle_options__check_option_values_22_0_i67);
MR_def_label(libs__handle_options__check_option_values_22_0,63)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(15) = MR_tfield(1, MR_r2, 0);
	MR_r3 = MR_sv(8);
	MR_sv(16) = MR_sv(6);
	MR_r4 = (MR_Integer) 126;
	MR_r1 = MR_sv(18);
	MR_r2 = MR_sv(19);
	MR_GOTO_LAB(libs__handle_options__check_option_values_22_0_i69);
MR_def_label(libs__handle_options__check_option_values_22_0,56)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__libs__trace_params__trace_level_none_0_0,
		libs__handle_options__check_option_values_22_0_i66);
MR_def_label(libs__handle_options__check_option_values_22_0,66)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(15) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("Invalid argument to option \140--trace\'\n\t(must be \140minimum\', \140shallow\', \140deep\', \140decl\', \140rep\' or \140default\').", 105);
	MR_r2 = MR_sv(6);
	MR_np_call_localret_ent(libs__handle_options__add_error_3_0,
		libs__handle_options__check_option_values_22_0_i67);
MR_def_label(libs__handle_options__check_option_values_22_0,67)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(8);
	MR_sv(16) = MR_r1;
	MR_r4 = (MR_Integer) 126;
	MR_r1 = MR_sv(18);
	MR_r2 = MR_sv(19);
MR_def_label(libs__handle_options__check_option_values_22_0,69)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r3;
	MR_sv(18) = MR_r1;
	MR_sv(19) = MR_r2;
	MR_np_call_localret_ent(map__lookup_3_0,
		libs__handle_options__check_option_values_22_0_i70);
MR_def_label(libs__handle_options__check_option_values_22_0,70)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,0)) {
		MR_GOTO_LAB(libs__handle_options__check_option_values_22_0_i72);
	}
	MR_r1 = MR_tfield(3, MR_r1, 1);
	MR_np_call_localret_ent(libs__trace_params__convert_trace_suppress_2_0,
		libs__handle_options__check_option_values_22_0_i74);
MR_def_label(libs__handle_options__check_option_values_22_0,74)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(libs__handle_options__check_option_values_22_0_i72);
	}
	MR_sv(7) = MR_sv(16);
	MR_sv(16) = MR_r2;
	MR_r3 = MR_sv(8);
	MR_r4 = (MR_Integer) 131;
	MR_r1 = MR_sv(18);
	MR_r2 = MR_sv(19);
	MR_GOTO_LAB(libs__handle_options__check_option_values_22_0_i78);
MR_def_label(libs__handle_options__check_option_values_22_0,72)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__libs__trace_params__default_trace_suppress_0_0,
		libs__handle_options__check_option_values_22_0_i76);
MR_def_label(libs__handle_options__check_option_values_22_0,76)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(16);
	MR_sv(16) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("Invalid argument to option \140--suppress-trace\'.", 46);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(libs__handle_options__add_error_3_0,
		libs__handle_options__check_option_values_22_0_i77);
MR_def_label(libs__handle_options__check_option_values_22_0,77)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(8);
	MR_sv(7) = MR_r1;
	MR_r4 = (MR_Integer) 131;
	MR_r1 = MR_sv(18);
	MR_r2 = MR_sv(19);
MR_def_label(libs__handle_options__check_option_values_22_0,78)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r3;
	MR_sv(18) = MR_r1;
	MR_sv(19) = MR_r2;
	MR_np_call_localret_ent(map__lookup_3_0,
		libs__handle_options__check_option_values_22_0_i79);
MR_def_label(libs__handle_options__check_option_values_22_0,79)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,1)) {
		MR_GOTO_LAB(libs__handle_options__check_option_values_22_0_i80);
	}
	MR_r5 = MR_tfield(1, MR_r1, 0);
	if (MR_INT_NE(MR_r5,1)) {
		MR_GOTO_LAB(libs__handle_options__check_option_values_22_0_i80);
	}
	MR_sv(6) = (MR_Integer) 0;
	MR_r3 = MR_sv(8);
	MR_r4 = (MR_Integer) 221;
	MR_r1 = MR_sv(18);
	MR_r2 = MR_sv(19);
	MR_GOTO_LAB(libs__handle_options__check_option_values_22_0_i93);
MR_def_label(libs__handle_options__check_option_values_22_0,80)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(18);
	MR_r2 = MR_sv(19);
	MR_r3 = MR_sv(8);
	MR_r4 = (MR_Integer) 229;
	MR_np_call_localret_ent(map__lookup_3_0,
		libs__handle_options__check_option_values_22_0_i83);
MR_def_label(libs__handle_options__check_option_values_22_0,83)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(18);
	MR_r2 = MR_sv(19);
	MR_r3 = MR_sv(8);
	MR_r4 = (MR_Integer) 228;
	MR_np_call_localret_ent(map__lookup_3_0,
		libs__handle_options__check_option_values_22_0_i84);
MR_def_label(libs__handle_options__check_option_values_22_0,84)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(6),3,0)) {
		MR_GOTO_LAB(libs__handle_options__check_option_values_22_0_i86);
	}
	if (MR_PTAG_TESTR(MR_r1,1)) {
		MR_GOTO_LAB(libs__handle_options__check_option_values_22_0_i86);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_tfield(3, MR_sv(6), 1);
	MR_r2 = MR_tfield(1, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(libs__globals__convert_ssdb_trace_level_3_0,
		libs__handle_options__check_option_values_22_0_i89);
MR_def_label(libs__handle_options__check_option_values_22_0,89)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(libs__handle_options__check_option_values_22_0_i86);
	}
	MR_sv(6) = MR_r2;
	MR_r3 = MR_sv(8);
	MR_r4 = (MR_Integer) 221;
	MR_r1 = MR_sv(18);
	MR_r2 = MR_sv(19);
	MR_GOTO_LAB(libs__handle_options__check_option_values_22_0_i93);
MR_def_label(libs__handle_options__check_option_values_22_0,86)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("Invalid argument to option \140--ssdb-trace\'.", 42);
	MR_r2 = MR_sv(7);
	MR_np_call_localret_ent(libs__handle_options__add_error_3_0,
		libs__handle_options__check_option_values_22_0_i91);
MR_def_label(libs__handle_options__check_option_values_22_0,91)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = (MR_Integer) 0;
	MR_r3 = MR_sv(8);
	MR_sv(7) = MR_r1;
	MR_r4 = (MR_Integer) 221;
	MR_r1 = MR_sv(18);
	MR_r2 = MR_sv(19);
MR_def_label(libs__handle_options__check_option_values_22_0,93)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r3;
	MR_sv(18) = MR_r1;
	MR_sv(19) = MR_r2;
	MR_np_call_localret_ent(map__lookup_3_0,
		libs__handle_options__check_option_values_22_0_i94);
MR_def_label(libs__handle_options__check_option_values_22_0,94)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,0)) {
		MR_GOTO_LAB(libs__handle_options__check_option_values_22_0_i96);
	}
	MR_r1 = MR_tfield(3, MR_r1, 1);
	MR_np_call_localret_ent(libs__globals__convert_maybe_thread_safe_2_0,
		libs__handle_options__check_option_values_22_0_i98);
MR_def_label(libs__handle_options__check_option_values_22_0,98)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(libs__handle_options__check_option_values_22_0_i96);
	}
	MR_sv(9) = MR_sv(7);
	MR_sv(7) = MR_r2;
	MR_r3 = MR_sv(8);
	MR_r4 = (MR_Integer) 143;
	MR_r1 = MR_sv(18);
	MR_r2 = MR_sv(19);
	MR_GOTO_LAB(libs__handle_options__check_option_values_22_0_i101);
MR_def_label(libs__handle_options__check_option_values_22_0,96)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("Invalid argument to option \140--maybe-thread-safe\'.", 49);
	MR_r2 = MR_sv(7);
	MR_np_call_localret_ent(libs__handle_options__add_error_3_0,
		libs__handle_options__check_option_values_22_0_i100);
MR_def_label(libs__handle_options__check_option_values_22_0,100)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = (MR_Integer) 0;
	MR_r3 = MR_sv(8);
	MR_sv(9) = MR_r1;
	MR_r4 = (MR_Integer) 143;
	MR_r1 = MR_sv(18);
	MR_r2 = MR_sv(19);
MR_def_label(libs__handle_options__check_option_values_22_0,101)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r3;
	MR_sv(18) = MR_r1;
	MR_sv(19) = MR_r2;
	MR_np_call_localret_ent(map__lookup_3_0,
		libs__handle_options__check_option_values_22_0_i102);
MR_def_label(libs__handle_options__check_option_values_22_0,102)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,0)) {
		MR_GOTO_LAB(libs__handle_options__check_option_values_22_0_i103);
	}
	MR_r4 = MR_tfield(3, MR_r1, 1);
	if ((strcmp((char *) (MR_Word *) MR_r4, MR_string_const("", 0)) != 0)) {
		MR_GOTO_LAB(libs__handle_options__check_option_values_22_0_i103);
	}
	MR_r2 = MR_sv(8);
	MR_r3 = (MR_Integer) 144;
	MR_r1 = MR_sv(18);
	MR_GOTO_LAB(libs__handle_options__check_option_values_22_0_i115);
MR_def_label(libs__handle_options__check_option_values_22_0,103)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,0)) {
		MR_GOTO_LAB(libs__handle_options__check_option_values_22_0_i107);
	}
	MR_r1 = MR_tfield(3, MR_r1, 1);
	MR_np_call_localret_ent(libs__handle_options__convert_dump_alias_2_0,
		libs__handle_options__check_option_values_22_0_i109);
MR_def_label(libs__handle_options__check_option_values_22_0,109)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(libs__handle_options__check_option_values_22_0_i107);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_r4 = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr1, 1) = MR_r2;
	MR_r1 = MR_sv(18);
	MR_r2 = MR_sv(19);
	MR_r3 = (MR_Integer) 144;
	MR_r5 = MR_sv(8);
	}
	MR_np_call_localret_ent(map__set_4_0,
		libs__handle_options__check_option_values_22_0_i112);
MR_def_label(libs__handle_options__check_option_values_22_0,112)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r3 = (MR_Integer) 144;
	MR_r1 = MR_sv(18);
	MR_GOTO_LAB(libs__handle_options__check_option_values_22_0_i115);
MR_def_label(libs__handle_options__check_option_values_22_0,107)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("Invalid argument to option \140--hlds-dump-alias\'.", 47);
	MR_r2 = MR_sv(9);
	MR_np_call_localret_ent(libs__handle_options__add_error_3_0,
		libs__handle_options__check_option_values_22_0_i113);
MR_def_label(libs__handle_options__check_option_values_22_0,113)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(8);
	MR_sv(9) = MR_r1;
	MR_r3 = (MR_Integer) 144;
	MR_r1 = MR_sv(18);
MR_def_label(libs__handle_options__check_option_values_22_0,115)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r2;
	MR_sv(18) = MR_r1;
	MR_np_call_localret_ent(getopt_io__lookup_string_option_3_0,
		libs__handle_options__check_option_values_22_0_i116);
MR_def_label(libs__handle_options__check_option_values_22_0,116)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("", 0)) != 0)) {
		MR_GOTO_LAB(libs__handle_options__check_option_values_22_0_i119);
	}
	MR_r1 = (MR_Word) MR_string_const("x", 1);
MR_def_label(libs__handle_options__check_option_values_22_0,119)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(10) = MR_r1;
	MR_r2 = (MR_Integer) 121;
	MR_np_call_localret_ent(string__contains_char_2_0,
		libs__handle_options__check_option_values_22_0_i121);
MR_def_label(libs__handle_options__check_option_values_22_0,121)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(libs__handle_options__check_option_values_22_0_i120);
	}
	MR_r1 = MR_sv(10);
	MR_r2 = (MR_Integer) 97;
	MR_np_call_localret_ent(string__contains_char_2_0,
		libs__handle_options__check_option_values_22_0_i124);
MR_def_label(libs__handle_options__check_option_values_22_0,124)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(libs__handle_options__check_option_values_22_0_i120);
	}
	MR_r1 = (MR_Word) MR_string_const("a", 1);
	MR_r2 = MR_sv(10);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		libs__handle_options__check_option_values_22_0_i127);
MR_def_label(libs__handle_options__check_option_values_22_0,120)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(10);
MR_def_label(libs__handle_options__check_option_values_22_0,127)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(10) = MR_r1;
	MR_r2 = (MR_Integer) 97;
	MR_np_call_localret_ent(string__contains_char_2_0,
		libs__handle_options__check_option_values_22_0_i129);
MR_def_label(libs__handle_options__check_option_values_22_0,129)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(libs__handle_options__check_option_values_22_0_i128);
	}
	MR_r1 = MR_sv(10);
	MR_r2 = (MR_Integer) 117;
	MR_np_call_localret_ent(string__contains_char_2_0,
		libs__handle_options__check_option_values_22_0_i132);
MR_def_label(libs__handle_options__check_option_values_22_0,132)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(libs__handle_options__check_option_values_22_0_i128);
	}
	MR_r1 = (MR_Word) MR_string_const("u", 1);
	MR_r2 = MR_sv(10);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		libs__handle_options__check_option_values_22_0_i135);
MR_def_label(libs__handle_options__check_option_values_22_0,128)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(10);
MR_def_label(libs__handle_options__check_option_values_22_0,135)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(10) = MR_r1;
	MR_r2 = (MR_Integer) 65;
	MR_np_call_localret_ent(string__contains_char_2_0,
		libs__handle_options__check_option_values_22_0_i140);
MR_def_label(libs__handle_options__check_option_values_22_0,140)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(libs__handle_options__check_option_values_22_0_i139);
	}
	MR_r1 = MR_sv(10);
	MR_GOTO_LAB(libs__handle_options__check_option_values_22_0_i138);
MR_def_label(libs__handle_options__check_option_values_22_0,139)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(10);
	MR_r2 = (MR_Integer) 66;
	MR_np_call_localret_ent(string__contains_char_2_0,
		libs__handle_options__check_option_values_22_0_i143);
MR_def_label(libs__handle_options__check_option_values_22_0,143)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(libs__handle_options__check_option_values_22_0_i142);
	}
	MR_r1 = MR_sv(10);
	MR_GOTO_LAB(libs__handle_options__check_option_values_22_0_i138);
MR_def_label(libs__handle_options__check_option_values_22_0,142)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(10);
	MR_r2 = (MR_Integer) 68;
	MR_np_call_localret_ent(string__contains_char_2_0,
		libs__handle_options__check_option_values_22_0_i146);
MR_def_label(libs__handle_options__check_option_values_22_0,146)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(libs__handle_options__check_option_values_22_0_i145);
	}
	MR_r1 = MR_sv(10);
	MR_GOTO_LAB(libs__handle_options__check_option_values_22_0_i138);
MR_def_label(libs__handle_options__check_option_values_22_0,145)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(10);
	MR_r2 = (MR_Integer) 71;
	MR_np_call_localret_ent(string__contains_char_2_0,
		libs__handle_options__check_option_values_22_0_i149);
MR_def_label(libs__handle_options__check_option_values_22_0,149)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(libs__handle_options__check_option_values_22_0_i148);
	}
	MR_r1 = MR_sv(10);
	MR_GOTO_LAB(libs__handle_options__check_option_values_22_0_i138);
MR_def_label(libs__handle_options__check_option_values_22_0,148)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(10);
	MR_r2 = (MR_Integer) 80;
	MR_np_call_localret_ent(string__contains_char_2_0,
		libs__handle_options__check_option_values_22_0_i152);
MR_def_label(libs__handle_options__check_option_values_22_0,152)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(libs__handle_options__check_option_values_22_0_i151);
	}
	MR_r1 = MR_sv(10);
	MR_GOTO_LAB(libs__handle_options__check_option_values_22_0_i138);
MR_def_label(libs__handle_options__check_option_values_22_0,151)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(10);
	MR_r2 = (MR_Integer) 82;
	MR_np_call_localret_ent(string__contains_char_2_0,
		libs__handle_options__check_option_values_22_0_i155);
MR_def_label(libs__handle_options__check_option_values_22_0,155)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(libs__handle_options__check_option_values_22_0_i154);
	}
	MR_r1 = MR_sv(10);
	MR_GOTO_LAB(libs__handle_options__check_option_values_22_0_i138);
MR_def_label(libs__handle_options__check_option_values_22_0,154)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(10);
	MR_r2 = (MR_Integer) 83;
	MR_np_call_localret_ent(string__contains_char_2_0,
		libs__handle_options__check_option_values_22_0_i158);
MR_def_label(libs__handle_options__check_option_values_22_0,158)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(libs__handle_options__check_option_values_22_0_i157);
	}
	MR_r1 = MR_sv(10);
	MR_GOTO_LAB(libs__handle_options__check_option_values_22_0_i138);
MR_def_label(libs__handle_options__check_option_values_22_0,157)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(10);
	MR_r2 = (MR_Integer) 98;
	MR_np_call_localret_ent(string__contains_char_2_0,
		libs__handle_options__check_option_values_22_0_i161);
MR_def_label(libs__handle_options__check_option_values_22_0,161)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(libs__handle_options__check_option_values_22_0_i160);
	}
	MR_r1 = MR_sv(10);
	MR_GOTO_LAB(libs__handle_options__check_option_values_22_0_i138);
MR_def_label(libs__handle_options__check_option_values_22_0,160)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(10);
	MR_r2 = (MR_Integer) 99;
	MR_np_call_localret_ent(string__contains_char_2_0,
		libs__handle_options__check_option_values_22_0_i164);
MR_def_label(libs__handle_options__check_option_values_22_0,164)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(libs__handle_options__check_option_values_22_0_i163);
	}
	MR_r1 = MR_sv(10);
	MR_GOTO_LAB(libs__handle_options__check_option_values_22_0_i138);
MR_def_label(libs__handle_options__check_option_values_22_0,163)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(10);
	MR_r2 = (MR_Integer) 100;
	MR_np_call_localret_ent(string__contains_char_2_0,
		libs__handle_options__check_option_values_22_0_i167);
MR_def_label(libs__handle_options__check_option_values_22_0,167)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(libs__handle_options__check_option_values_22_0_i166);
	}
	MR_r1 = MR_sv(10);
	MR_GOTO_LAB(libs__handle_options__check_option_values_22_0_i138);
MR_def_label(libs__handle_options__check_option_values_22_0,166)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(10);
	MR_r2 = (MR_Integer) 102;
	MR_np_call_localret_ent(string__contains_char_2_0,
		libs__handle_options__check_option_values_22_0_i170);
MR_def_label(libs__handle_options__check_option_values_22_0,170)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(libs__handle_options__check_option_values_22_0_i169);
	}
	MR_r1 = MR_sv(10);
	MR_GOTO_LAB(libs__handle_options__check_option_values_22_0_i138);
MR_def_label(libs__handle_options__check_option_values_22_0,169)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(10);
	MR_r2 = (MR_Integer) 103;
	MR_np_call_localret_ent(string__contains_char_2_0,
		libs__handle_options__check_option_values_22_0_i173);
MR_def_label(libs__handle_options__check_option_values_22_0,173)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(libs__handle_options__check_option_values_22_0_i172);
	}
	MR_r1 = MR_sv(10);
	MR_GOTO_LAB(libs__handle_options__check_option_values_22_0_i138);
MR_def_label(libs__handle_options__check_option_values_22_0,172)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(10);
	MR_r2 = (MR_Integer) 105;
	MR_np_call_localret_ent(string__contains_char_2_0,
		libs__handle_options__check_option_values_22_0_i176);
MR_def_label(libs__handle_options__check_option_values_22_0,176)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(libs__handle_options__check_option_values_22_0_i175);
	}
	MR_r1 = MR_sv(10);
	MR_GOTO_LAB(libs__handle_options__check_option_values_22_0_i138);
MR_def_label(libs__handle_options__check_option_values_22_0,175)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(10);
	MR_r2 = (MR_Integer) 108;
	MR_np_call_localret_ent(string__contains_char_2_0,
		libs__handle_options__check_option_values_22_0_i179);
MR_def_label(libs__handle_options__check_option_values_22_0,179)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(libs__handle_options__check_option_values_22_0_i178);
	}
	MR_r1 = MR_sv(10);
	MR_GOTO_LAB(libs__handle_options__check_option_values_22_0_i138);
MR_def_label(libs__handle_options__check_option_values_22_0,178)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(10);
	MR_r2 = (MR_Integer) 109;
	MR_np_call_localret_ent(string__contains_char_2_0,
		libs__handle_options__check_option_values_22_0_i182);
MR_def_label(libs__handle_options__check_option_values_22_0,182)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(libs__handle_options__check_option_values_22_0_i181);
	}
	MR_r1 = MR_sv(10);
	MR_GOTO_LAB(libs__handle_options__check_option_values_22_0_i138);
MR_def_label(libs__handle_options__check_option_values_22_0,181)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(10);
	MR_r2 = (MR_Integer) 110;
	MR_np_call_localret_ent(string__contains_char_2_0,
		libs__handle_options__check_option_values_22_0_i185);
MR_def_label(libs__handle_options__check_option_values_22_0,185)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(libs__handle_options__check_option_values_22_0_i184);
	}
	MR_r1 = MR_sv(10);
	MR_GOTO_LAB(libs__handle_options__check_option_values_22_0_i138);
MR_def_label(libs__handle_options__check_option_values_22_0,184)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(10);
	MR_r2 = (MR_Integer) 112;
	MR_np_call_localret_ent(string__contains_char_2_0,
		libs__handle_options__check_option_values_22_0_i188);
MR_def_label(libs__handle_options__check_option_values_22_0,188)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(libs__handle_options__check_option_values_22_0_i187);
	}
	MR_r1 = MR_sv(10);
	MR_GOTO_LAB(libs__handle_options__check_option_values_22_0_i138);
MR_def_label(libs__handle_options__check_option_values_22_0,187)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(10);
	MR_r2 = (MR_Integer) 115;
	MR_np_call_localret_ent(string__contains_char_2_0,
		libs__handle_options__check_option_values_22_0_i191);
MR_def_label(libs__handle_options__check_option_values_22_0,191)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(libs__handle_options__check_option_values_22_0_i190);
	}
	MR_r1 = MR_sv(10);
	MR_GOTO_LAB(libs__handle_options__check_option_values_22_0_i138);
MR_def_label(libs__handle_options__check_option_values_22_0,190)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(10);
	MR_r2 = (MR_Integer) 116;
	MR_np_call_localret_ent(string__contains_char_2_0,
		libs__handle_options__check_option_values_22_0_i194);
MR_def_label(libs__handle_options__check_option_values_22_0,194)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(libs__handle_options__check_option_values_22_0_i193);
	}
	MR_r1 = MR_sv(10);
	MR_GOTO_LAB(libs__handle_options__check_option_values_22_0_i138);
MR_def_label(libs__handle_options__check_option_values_22_0,193)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(10);
	MR_r2 = (MR_Integer) 117;
	MR_np_call_localret_ent(string__contains_char_2_0,
		libs__handle_options__check_option_values_22_0_i197);
MR_def_label(libs__handle_options__check_option_values_22_0,197)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(libs__handle_options__check_option_values_22_0_i196);
	}
	MR_r1 = MR_sv(10);
	MR_GOTO_LAB(libs__handle_options__check_option_values_22_0_i138);
MR_def_label(libs__handle_options__check_option_values_22_0,196)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(10);
	MR_r2 = (MR_Integer) 122;
	MR_np_call_localret_ent(string__contains_char_2_0,
		libs__handle_options__check_option_values_22_0_i199);
MR_def_label(libs__handle_options__check_option_values_22_0,199)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(libs__handle_options__check_option_values_22_0_i136);
	}
	MR_r1 = MR_sv(10);
MR_def_label(libs__handle_options__check_option_values_22_0,138)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(10) = MR_r1;
	MR_r2 = (MR_Integer) 120;
	MR_np_call_localret_ent(string__contains_char_2_0,
		libs__handle_options__check_option_values_22_0_i202);
MR_def_label(libs__handle_options__check_option_values_22_0,202)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(libs__handle_options__check_option_values_22_0_i136);
	}
	MR_r1 = (MR_Word) MR_string_const("x", 1);
	MR_r2 = MR_sv(10);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		libs__handle_options__check_option_values_22_0_i204);
MR_def_label(libs__handle_options__check_option_values_22_0,204)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_r4 = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_r5 = MR_sv(8);
	MR_r1 = MR_sv(18);
	MR_r2 = MR_sv(19);
	MR_r3 = (MR_Integer) 144;
	MR_GOTO_LAB(libs__handle_options__check_option_values_22_0_i207);
	}
MR_def_label(libs__handle_options__check_option_values_22_0,136)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(10);
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_r4 = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_r5 = MR_sv(8);
	MR_r1 = MR_sv(18);
	MR_r2 = MR_sv(19);
	MR_r3 = (MR_Integer) 144;
	}
MR_def_label(libs__handle_options__check_option_values_22_0,207)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(18) = MR_r1;
	MR_sv(19) = MR_r2;
	MR_np_call_localret_ent(map__set_4_0,
		libs__handle_options__check_option_values_22_0_i208);
MR_def_label(libs__handle_options__check_option_values_22_0,208)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(14) = MR_r1;
	MR_r1 = MR_sv(18);
	MR_r2 = MR_sv(19);
	MR_r3 = MR_sv(14);
	MR_r4 = (MR_Integer) 504;
	MR_np_call_localret_ent(map__lookup_3_0,
		libs__handle_options__check_option_values_22_0_i209);
MR_def_label(libs__handle_options__check_option_values_22_0,209)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,0)) {
		MR_GOTO_LAB(libs__handle_options__check_option_values_22_0_i211);
	}
	MR_r1 = MR_tfield(3, MR_r1, 1);
	MR_np_call_localret_ent(libs__globals__convert_c_compiler_type_2_0,
		libs__handle_options__check_option_values_22_0_i213);
MR_def_label(libs__handle_options__check_option_values_22_0,213)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(libs__handle_options__check_option_values_22_0_i211);
	}
	MR_sv(8) = MR_r2;
	MR_r3 = MR_sv(14);
	MR_r4 = (MR_Integer) 505;
	MR_r1 = MR_sv(18);
	MR_r2 = MR_sv(19);
	MR_GOTO_LAB(libs__handle_options__check_option_values_22_0_i216);
MR_def_label(libs__handle_options__check_option_values_22_0,211)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("Invalid argument to option \140--c-compiler-type\'\n\t(must be \140gcc\', \140lcc\', \140cl\', or \140unknown\').", 91);
	MR_r2 = MR_sv(9);
	MR_np_call_localret_ent(libs__handle_options__add_error_3_0,
		libs__handle_options__check_option_values_22_0_i215);
MR_def_label(libs__handle_options__check_option_values_22_0,215)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = (MR_Word) MR_tbmkword(0, 1);
	MR_r3 = MR_sv(14);
	MR_sv(9) = MR_r1;
	MR_r4 = (MR_Integer) 505;
	MR_r1 = MR_sv(18);
	MR_r2 = MR_sv(19);
MR_def_label(libs__handle_options__check_option_values_22_0,216)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(14) = MR_r3;
	MR_sv(18) = MR_r1;
	MR_sv(19) = MR_r2;
	MR_np_call_localret_ent(map__lookup_3_0,
		libs__handle_options__check_option_values_22_0_i217);
MR_def_label(libs__handle_options__check_option_values_22_0,217)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,0)) {
		MR_GOTO_LAB(libs__handle_options__check_option_values_22_0_i219);
	}
	MR_r1 = MR_tfield(3, MR_r1, 1);
	MR_np_call_localret_ent(libs__globals__convert_csharp_compiler_type_2_0,
		libs__handle_options__check_option_values_22_0_i221);
MR_def_label(libs__handle_options__check_option_values_22_0,221)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(libs__handle_options__check_option_values_22_0_i219);
	}
	MR_sv(11) = MR_sv(9);
	MR_sv(9) = MR_r2;
	MR_r3 = MR_sv(14);
	MR_r4 = (MR_Integer) 407;
	MR_r1 = MR_sv(18);
	MR_r2 = MR_sv(19);
	MR_GOTO_LAB(libs__handle_options__check_option_values_22_0_i224);
MR_def_label(libs__handle_options__check_option_values_22_0,219)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("Invalid argument to option \140--csharp-compiler-type\'\n\t(must be \140microsoft\', \140mono\', or \140unknown\').", 97);
	MR_r2 = MR_sv(9);
	MR_np_call_localret_ent(libs__handle_options__add_error_3_0,
		libs__handle_options__check_option_values_22_0_i223);
MR_def_label(libs__handle_options__check_option_values_22_0,223)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = (MR_Integer) 2;
	MR_r3 = MR_sv(14);
	MR_sv(11) = MR_r1;
	MR_r4 = (MR_Integer) 407;
	MR_r1 = MR_sv(18);
	MR_r2 = MR_sv(19);
MR_def_label(libs__handle_options__check_option_values_22_0,224)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(14) = MR_r3;
	MR_sv(18) = MR_r1;
	MR_sv(19) = MR_r2;
	MR_np_call_localret_ent(map__lookup_3_0,
		libs__handle_options__check_option_values_22_0_i225);
MR_def_label(libs__handle_options__check_option_values_22_0,225)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(10) = MR_r1;
	MR_r1 = MR_sv(18);
	MR_r2 = MR_sv(19);
	MR_r3 = MR_sv(14);
	MR_r4 = (MR_Integer) 408;
	MR_np_call_localret_ent(map__lookup_3_0,
		libs__handle_options__check_option_values_22_0_i226);
MR_def_label(libs__handle_options__check_option_values_22_0,226)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(10),3,0)) {
		MR_GOTO_LAB(libs__handle_options__check_option_values_22_0_i228);
	}
	if (MR_PTAG_TESTR(MR_r1,2)) {
		MR_GOTO_LAB(libs__handle_options__check_option_values_22_0_i228);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_tfield(3, MR_sv(10), 1);
	MR_r2 = MR_tfield(2, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(libs__globals__convert_reuse_strategy_3_0,
		libs__handle_options__check_option_values_22_0_i231);
MR_def_label(libs__handle_options__check_option_values_22_0,231)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(libs__handle_options__check_option_values_22_0_i228);
	}
	MR_sv(10) = MR_r2;
	MR_r3 = MR_sv(14);
	MR_sv(17) = MR_sv(11);
	MR_r4 = (MR_Integer) 515;
	MR_r1 = MR_sv(18);
	MR_r2 = MR_sv(19);
	MR_GOTO_LAB(libs__handle_options__check_option_values_22_0_i234);
MR_def_label(libs__handle_options__check_option_values_22_0,228)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("Invalid argument to option \140--structure-reuse-constraint\'\n\t(must be \140same_cons_id\' or \140within_n_cells_difference\').", 115);
	MR_r2 = MR_sv(11);
	MR_np_call_localret_ent(libs__handle_options__add_error_3_0,
		libs__handle_options__check_option_values_22_0_i233);
MR_def_label(libs__handle_options__check_option_values_22_0,233)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(10) = (MR_Word) MR_tbmkword(0, 0);
	MR_r3 = MR_sv(14);
	MR_sv(17) = MR_r1;
	MR_r4 = (MR_Integer) 515;
	MR_r1 = MR_sv(18);
	MR_r2 = MR_sv(19);
MR_def_label(libs__handle_options__check_option_values_22_0,234)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(14) = MR_r3;
	MR_sv(18) = MR_r1;
	MR_sv(19) = MR_r2;
	MR_np_call_localret_ent(map__lookup_3_0,
		libs__handle_options__check_option_values_22_0_i235);
MR_def_label(libs__handle_options__check_option_values_22_0,235)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,0)) {
		MR_GOTO_LAB(libs__handle_options__check_option_values_22_0_i237);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,8,4);
	MR_r2 = MR_tfield(3, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(fn__string__words_separator_2_0,
		libs__handle_options__check_option_values_22_0_i240);
MR_def_label(libs__handle_options__check_option_values_22_0,240)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(libs__handle_options__check_option_values_22_0_i237);
	}
	MR_r2 = MR_tfield(1, MR_r1, 1);
	if (MR_LTAGS_TEST(MR_r2,0,0)) {
		MR_GOTO_LAB(libs__handle_options__check_option_values_22_0_i237);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_tfield(1, MR_r2, 1);
	if (MR_LTAGS_TEST(MR_tempr1,0,0)) {
		MR_GOTO_LAB(libs__handle_options__check_option_values_22_0_i237);
	}
	MR_tempr2 = MR_tfield(1, MR_tempr1, 1);
	if (MR_LTAGS_TEST(MR_tempr2,0,0)) {
		MR_GOTO_LAB(libs__handle_options__check_option_values_22_0_i237);
	}
	MR_tempr3 = MR_tfield(1, MR_tempr2, 1);
	if (MR_LTAGS_TESTR(MR_tempr3,0,0)) {
		MR_GOTO_LAB(libs__handle_options__check_option_values_22_0_i237);
	}
	MR_sv(11) = MR_tfield(1, MR_r2, 0);
	MR_sv(12) = MR_tfield(1, MR_tempr1, 0);
	MR_sv(13) = MR_tfield(1, MR_tempr2, 0);
	MR_r1 = MR_tfield(1, MR_r1, 0);
	}
	MR_np_call_localret_ent(string__to_int_2_0,
		libs__handle_options__check_option_values_22_0_i246);
MR_def_label(libs__handle_options__check_option_values_22_0,246)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(libs__handle_options__check_option_values_22_0_i237);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(11);
	MR_sv(11) = MR_r2;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(string__to_int_2_0,
		libs__handle_options__check_option_values_22_0_i248);
MR_def_label(libs__handle_options__check_option_values_22_0,248)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(libs__handle_options__check_option_values_22_0_i237);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(12);
	MR_sv(12) = MR_r2;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(string__to_int_2_0,
		libs__handle_options__check_option_values_22_0_i250);
MR_def_label(libs__handle_options__check_option_values_22_0,250)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(libs__handle_options__check_option_values_22_0_i237);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(13);
	MR_sv(13) = MR_r2;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(string__to_int_2_0,
		libs__handle_options__check_option_values_22_0_i252);
MR_def_label(libs__handle_options__check_option_values_22_0,252)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(libs__handle_options__check_option_values_22_0_i237);
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
	MR_sv(13) = MR_sv(17);
	MR_r4 = (MR_Integer) 658;
	MR_r1 = MR_sv(18);
	MR_r2 = MR_sv(19);
	MR_GOTO_LAB(libs__handle_options__check_option_values_22_0_i259);
	}
MR_def_label(libs__handle_options__check_option_values_22_0,237)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("Invalid argument to option \140--dotnet-library-version\'\n\t(must be of the form \140MajorNum.MinorNum.BuildNum.RevisionNum\').", 118);
	MR_r2 = MR_sv(17);
	MR_np_call_localret_ent(libs__handle_options__add_error_3_0,
		libs__handle_options__check_option_values_22_0_i256);
MR_def_label(libs__handle_options__check_option_values_22_0,256)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(13) = MR_r1;
	MR_r1 = MR_sv(18);
	MR_r2 = MR_sv(19);
	MR_r3 = (MR_Integer) 96;
	MR_r4 = (MR_Word) MR_TAG_COMMON(1,5,1);
	MR_r5 = MR_sv(14);
	MR_np_call_localret_ent(map__det_update_4_0,
		libs__handle_options__check_option_values_22_0_i258);
MR_def_label(libs__handle_options__check_option_values_22_0,258)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(11) = (MR_Word) MR_tbmkword(0, 0);
	MR_r3 = MR_r1;
	MR_r4 = (MR_Integer) 658;
	MR_r1 = MR_sv(18);
	MR_r2 = MR_sv(19);
MR_def_label(libs__handle_options__check_option_values_22_0,259)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(17) = MR_r3;
	MR_sv(18) = MR_r1;
	MR_sv(19) = MR_r2;
	MR_np_call_localret_ent(map__lookup_3_0,
		libs__handle_options__check_option_values_22_0_i260);
MR_def_label(libs__handle_options__check_option_values_22_0,260)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,0)) {
		MR_GOTO_LAB(libs__handle_options__check_option_values_22_0_i261);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(3, MR_r1, 1);
	if ((strcmp((char *) (MR_Word *) MR_tempr1, MR_string_const("", 0)) == 0)) {
		MR_GOTO_LAB(libs__handle_options__check_option_values_22_0_i261);
	}
	MR_sv(12) = MR_tempr1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(mdbcomp__feedback__read_feedback_file_4_0,
		libs__handle_options__check_option_values_22_0_i265);
MR_def_label(libs__handle_options__check_option_values_22_0,265)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,1)) {
		MR_GOTO_LAB(libs__handle_options__check_option_values_22_0_i267);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(12);
	MR_r2 = MR_tfield(1, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(mdbcomp__feedback__read_error_message_string_3_0,
		libs__handle_options__check_option_values_22_0_i268);
MR_def_label(libs__handle_options__check_option_values_22_0,268)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(13);
	MR_np_call_localret_ent(libs__handle_options__add_error_3_0,
		libs__handle_options__check_option_values_22_0_i269);
MR_def_label(libs__handle_options__check_option_values_22_0,269)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(12) = (MR_Word) MR_tbmkword(0, 0);
	MR_r3 = MR_sv(17);
	MR_sv(13) = MR_r1;
	MR_r4 = (MR_Integer) 641;
	MR_r1 = MR_sv(18);
	MR_r2 = MR_sv(19);
	MR_GOTO_LAB(libs__handle_options__check_option_values_22_0_i271);
MR_def_label(libs__handle_options__check_option_values_22_0,267)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_sv(12), 1, (MR_Integer) 1);
	MR_tfield(1, MR_sv(12), 0) = MR_tfield(0, MR_r1, 0);
	MR_r3 = MR_sv(17);
	MR_r4 = (MR_Integer) 641;
	MR_r1 = MR_sv(18);
	MR_r2 = MR_sv(19);
	MR_GOTO_LAB(libs__handle_options__check_option_values_22_0_i271);
MR_def_label(libs__handle_options__check_option_values_22_0,261)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(12) = (MR_Word) MR_tbmkword(0, 0);
	MR_r3 = MR_sv(17);
	MR_r4 = (MR_Integer) 641;
	MR_r1 = MR_sv(18);
	MR_r2 = MR_sv(19);
MR_def_label(libs__handle_options__check_option_values_22_0,271)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(17) = MR_r3;
	MR_sv(18) = MR_r1;
	MR_sv(19) = MR_r2;
	MR_np_call_localret_ent(map__lookup_3_0,
		libs__handle_options__check_option_values_22_0_i272);
MR_def_label(libs__handle_options__check_option_values_22_0,272)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,0)) {
		MR_GOTO_LAB(libs__handle_options__check_option_values_22_0_i274);
	}
	MR_r1 = MR_tfield(3, MR_r1, 1);
	MR_np_call_localret_ent(libs__globals__convert_env_type_2_0,
		libs__handle_options__check_option_values_22_0_i276);
MR_def_label(libs__handle_options__check_option_values_22_0,276)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(libs__handle_options__check_option_values_22_0_i274);
	}
	MR_sv(14) = MR_sv(13);
	MR_sv(13) = MR_r2;
	MR_r3 = MR_sv(17);
	MR_r4 = (MR_Integer) 642;
	MR_r1 = MR_sv(18);
	MR_r2 = MR_sv(19);
	MR_GOTO_LAB(libs__handle_options__check_option_values_22_0_i279);
MR_def_label(libs__handle_options__check_option_values_22_0,274)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("Invalid argument to option \140--host-env-type\'\n\t(must be \140posix\', \140cygwin\', \140msys\' or \140windows\').", 95);
	MR_r2 = MR_sv(13);
	MR_np_call_localret_ent(libs__handle_options__add_error_3_0,
		libs__handle_options__check_option_values_22_0_i278);
MR_def_label(libs__handle_options__check_option_values_22_0,278)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(13) = (MR_Integer) 0;
	MR_r3 = MR_sv(17);
	MR_sv(14) = MR_r1;
	MR_r4 = (MR_Integer) 642;
	MR_r1 = MR_sv(18);
	MR_r2 = MR_sv(19);
MR_def_label(libs__handle_options__check_option_values_22_0,279)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(17) = MR_r3;
	MR_np_call_localret_ent(map__lookup_3_0,
		libs__handle_options__check_option_values_22_0_i280);
MR_def_label(libs__handle_options__check_option_values_22_0,280)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,0)) {
		MR_GOTO_LAB(libs__handle_options__check_option_values_22_0_i282);
	}
	MR_r1 = MR_tfield(3, MR_r1, 1);
	MR_np_call_localret_ent(libs__globals__convert_env_type_2_0,
		libs__handle_options__check_option_values_22_0_i284);
MR_def_label(libs__handle_options__check_option_values_22_0,284)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(libs__handle_options__check_option_values_22_0_i282);
	}
	MR_r3 = MR_sv(14);
	MR_sv(14) = MR_r2;
	MR_r2 = MR_r3;
	MR_GOTO_LAB(libs__handle_options__check_option_values_22_0_i287);
MR_def_label(libs__handle_options__check_option_values_22_0,282)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("Invalid argument to option \140--target-env-type\'\n\t(must be \140posix\', \140cygwin\', \140msys\' or \140windows\').", 97);
	MR_r2 = MR_sv(14);
	MR_np_call_localret_ent(libs__handle_options__add_error_3_0,
		libs__handle_options__check_option_values_22_0_i286);
MR_def_label(libs__handle_options__check_option_values_22_0,286)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(14) = (MR_Integer) 0;
	MR_r2 = MR_r1;
MR_def_label(libs__handle_options__check_option_values_22_0,287)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(13),0)) {
		MR_GOTO_LAB(libs__handle_options__check_option_values_22_0_i288);
	}
	if (MR_INT_NE(MR_sv(9),0)) {
		MR_GOTO_LAB(libs__handle_options__check_option_values_22_0_i288);
	}
	MR_r1 = (MR_Word) MR_string_const("\140--host-env-type posix\140 is incompatible with\n\140--csharp-compiler-type microsoft\'.", 80);
	MR_np_call_localret_ent(libs__handle_options__add_error_3_0,
		libs__handle_options__check_option_values_22_0_i291);
MR_def_label(libs__handle_options__check_option_values_22_0,291)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(4);
	MR_r6 = MR_sv(5);
	MR_r7 = MR_sv(15);
	MR_r8 = MR_sv(16);
	MR_r9 = MR_sv(6);
	MR_r10 = MR_sv(7);
	MR_r11 = MR_sv(8);
	MR_r12 = MR_sv(9);
	MR_r13 = MR_sv(10);
	MR_r14 = MR_sv(11);
	MR_r15 = MR_sv(12);
	MR_r16 = MR_sv(13);
	MR_r17 = MR_sv(14);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(17);
	MR_r18 = MR_tempr1;
	MR_decr_sp_and_return(20);
	}
MR_def_label(libs__handle_options__check_option_values_22_0,288)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(4);
	MR_r6 = MR_sv(5);
	MR_r7 = MR_sv(15);
	MR_r8 = MR_sv(16);
	MR_r9 = MR_sv(6);
	MR_r10 = MR_sv(7);
	MR_r11 = MR_sv(8);
	MR_r12 = MR_sv(9);
	MR_r13 = MR_sv(10);
	MR_r14 = MR_sv(11);
	MR_r15 = MR_sv(12);
	MR_r16 = MR_sv(13);
	MR_r17 = MR_sv(14);
	MR_r1 = MR_sv(17);
	MR_r18 = MR_tempr1;
	MR_decr_sp_and_return(20);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(string__append_list_2_0);

MR_BEGIN_MODULE(libs__handle_options_module4)
	MR_init_entry1(libs__handle_options__construct_string_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__libs__handle_options__construct_string_2_0);
	MR_init_label5(libs__handle_options__construct_string_2_0,3,5,46,11,15)
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
	MR_r3 = MR_tfield(1, MR_r2, 1);
	if (MR_LTAGS_TESTR(MR_r3,0,0)) {
		MR_GOTO_LAB(libs__handle_options__construct_string_2_0_i46);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_tfield(0, MR_tfield(1, MR_r2, 0), 1);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = (MR_Word) MR_string_const(".", 1);
	MR_tfield(1, MR_r2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_tfield(0, MR_tfield(1, MR_r1, 0), 1);
	MR_tfield(1, MR_tempr1, 1) = MR_r2;
	MR_r1 = MR_tempr1;
	MR_np_tailcall_ent(string__append_list_2_0);
	}
MR_def_label(libs__handle_options__construct_string_2_0,46)
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
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_r1;
	MR_tfield(1, MR_r2, 1) = (MR_Word) MR_tbmkword(0, 0);
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = (MR_Word) MR_string_const(".", 1);
	MR_tfield(1, MR_tempr1, 1) = MR_r2;
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = MR_sv(2);
	MR_tfield(1, MR_r1, 1) = MR_tempr1;
	}
	MR_np_call_localret_ent(string__append_list_2_0,
		libs__handle_options__construct_string_2_0_i15);
MR_def_label(libs__handle_options__construct_string_2_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_r1;
	MR_tfield(1, MR_r2, 1) = (MR_Word) MR_tbmkword(0, 0);
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = (MR_Word) MR_string_const(".", 1);
	MR_tfield(1, MR_tempr1, 1) = MR_r2;
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = MR_sv(1);
	MR_tfield(1, MR_r1, 1) = MR_tempr1;
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
	MR_init_label3(libs__handle_options__compute_grade_2_0,2,4,6)
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
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 4);
	MR_tfield(0, MR_r2, 0) = (MR_Word) MR_COMMON(7,3);
	MR_tfield(0, MR_r2, 1) = (MR_Word) MR_ENTRY_AP(libs__handle_options__IntroducedFrom__pred__compute_grade_components__2794__1_2_0);
	MR_tfield(0, MR_r2, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_r2, 3) = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,2);
	MR_np_call_localret_ent(solutions__solutions_2_1,
		libs__handle_options__compute_grade_2_0_i4);
MR_def_label(libs__handle_options__compute_grade_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(libs__handle_options__compute_grade_2_0_i6);
	}
	MR_r1 = (MR_Word) MR_string_const("none", 4);
	MR_decr_sp_and_return(1);
MR_def_label(libs__handle_options__compute_grade_2_0,6)
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

MR_BEGIN_MODULE(libs__handle_options_module6)
	MR_init_entry1(libs__handle_options__grade_directory_component_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__libs__handle_options__grade_directory_component_2_0);
	MR_init_label8(libs__handle_options__grade_directory_component_2_0,2,4,6,5,9,11,12,8)
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
	MR_np_call_localret_ent(libs__globals__get_options_2_0,
		libs__handle_options__grade_directory_component_2_0_i2);
MR_def_label(libs__handle_options__grade_directory_component_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 4);
	MR_tfield(0, MR_r2, 0) = (MR_Word) MR_COMMON(7,4);
	MR_tfield(0, MR_r2, 1) = (MR_Word) MR_ENTRY_AP(libs__handle_options__IntroducedFrom__pred__compute_grade_components__2794__1_2_0);
	MR_tfield(0, MR_r2, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_r2, 3) = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,2);
	MR_np_call_localret_ent(solutions__solutions_2_1,
		libs__handle_options__grade_directory_component_2_0_i4);
MR_def_label(libs__handle_options__grade_directory_component_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(libs__handle_options__grade_directory_component_2_0_i6);
	}
	MR_r1 = (MR_Word) MR_string_const("none", 4);
	MR_GOTO_LAB(libs__handle_options__grade_directory_component_2_0_i5);
MR_def_label(libs__handle_options__grade_directory_component_2_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(libs__handle_options__construct_string_2_0,
		libs__handle_options__grade_directory_component_2_0_i5);
MR_def_label(libs__handle_options__grade_directory_component_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r2 = (MR_Word) MR_string_const(".picreg", 7);
	MR_np_call_localret_ent(string__sub_string_search_3_0,
		libs__handle_options__grade_directory_component_2_0_i9);
MR_def_label(libs__handle_options__grade_directory_component_2_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(libs__handle_options__grade_directory_component_2_0_i8);
	}
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(string__split_4_0,
		libs__handle_options__grade_directory_component_2_0_i11);
MR_def_label(libs__handle_options__grade_directory_component_2_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const(".picreg", 7);
	MR_np_call_localret_ent(string__append_3_1,
		libs__handle_options__grade_directory_component_2_0_i12);
MR_def_label(libs__handle_options__grade_directory_component_2_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(libs__handle_options__grade_directory_component_2_0_i8);
	}
	MR_r1 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0);
MR_def_label(libs__handle_options__grade_directory_component_2_0,8)
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
	MR_sv(3) = MR_r1;
	MR_sv(1) = (MR_Word) MR_TAG_COMMON(1,5,1);
	MR_r2 = (MR_Integer) 368;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		libs__handle_options__postprocess_options_lowlevel_2_0_i3);
MR_def_label(libs__handle_options__postprocess_options_lowlevel_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(libs__handle_options__postprocess_options_lowlevel_2_0_i5);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = (MR_Integer) 467;
	MR_GOTO_LAB(libs__handle_options__postprocess_options_lowlevel_2_0_i4);
MR_def_label(libs__handle_options__postprocess_options_lowlevel_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 461;
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(3);
	MR_np_call_localret_ent(libs__globals__set_option_4_0,
		libs__handle_options__postprocess_options_lowlevel_2_0_i6);
MR_def_label(libs__handle_options__postprocess_options_lowlevel_2_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 467;
MR_def_label(libs__handle_options__postprocess_options_lowlevel_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		libs__handle_options__postprocess_options_lowlevel_2_0_i7);
MR_def_label(libs__handle_options__postprocess_options_lowlevel_2_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(libs__handle_options__postprocess_options_lowlevel_2_0_i9);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = (MR_Integer) 467;
	MR_GOTO_LAB(libs__handle_options__postprocess_options_lowlevel_2_0_i8);
MR_def_label(libs__handle_options__postprocess_options_lowlevel_2_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 464;
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(3);
	MR_np_call_localret_ent(libs__globals__set_option_4_0,
		libs__handle_options__postprocess_options_lowlevel_2_0_i10);
MR_def_label(libs__handle_options__postprocess_options_lowlevel_2_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 467;
MR_def_label(libs__handle_options__postprocess_options_lowlevel_2_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		libs__handle_options__postprocess_options_lowlevel_2_0_i11);
MR_def_label(libs__handle_options__postprocess_options_lowlevel_2_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(libs__handle_options__postprocess_options_lowlevel_2_0_i13);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = (MR_Integer) 466;
	MR_GOTO_LAB(libs__handle_options__postprocess_options_lowlevel_2_0_i12);
MR_def_label(libs__handle_options__postprocess_options_lowlevel_2_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 457;
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(3);
	MR_np_call_localret_ent(libs__globals__set_option_4_0,
		libs__handle_options__postprocess_options_lowlevel_2_0_i14);
MR_def_label(libs__handle_options__postprocess_options_lowlevel_2_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 466;
MR_def_label(libs__handle_options__postprocess_options_lowlevel_2_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		libs__handle_options__postprocess_options_lowlevel_2_0_i15);
MR_def_label(libs__handle_options__postprocess_options_lowlevel_2_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(libs__handle_options__postprocess_options_lowlevel_2_0_i17);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = (MR_Integer) 467;
	MR_GOTO_LAB(libs__handle_options__postprocess_options_lowlevel_2_0_i16);
MR_def_label(libs__handle_options__postprocess_options_lowlevel_2_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 298;
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(3);
	MR_np_call_localret_ent(libs__globals__set_option_4_0,
		libs__handle_options__postprocess_options_lowlevel_2_0_i18);
MR_def_label(libs__handle_options__postprocess_options_lowlevel_2_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 467;
MR_def_label(libs__handle_options__postprocess_options_lowlevel_2_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		libs__handle_options__postprocess_options_lowlevel_2_0_i19);
MR_def_label(libs__handle_options__postprocess_options_lowlevel_2_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = (MR_Integer) 461;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		libs__handle_options__postprocess_options_lowlevel_2_0_i20);
MR_def_label(libs__handle_options__postprocess_options_lowlevel_2_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = (MR_Integer) 470;
	MR_np_call_localret_ent(libs__globals__lookup_int_option_3_0,
		libs__handle_options__postprocess_options_lowlevel_2_0_i21);
MR_def_label(libs__handle_options__postprocess_options_lowlevel_2_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(3),1)) {
		MR_GOTO_LAB(libs__handle_options__postprocess_options_lowlevel_2_0_i25);
	}
	MR_r3 = MR_sv(2);
	MR_GOTO_LAB(libs__handle_options__postprocess_options_lowlevel_2_0_i24);
MR_def_label(libs__handle_options__postprocess_options_lowlevel_2_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(4),1)) {
		MR_GOTO_LAB(libs__handle_options__postprocess_options_lowlevel_2_0_i23);
	}
	MR_r3 = MR_sv(2);
MR_def_label(libs__handle_options__postprocess_options_lowlevel_2_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_LT(MR_r1,1)) {
		MR_GOTO_LAB(libs__handle_options__postprocess_options_lowlevel_2_0_i28);
	}
	MR_sv(2) = MR_r3;
	MR_GOTO_LAB(libs__handle_options__postprocess_options_lowlevel_2_0_i23);
MR_def_label(libs__handle_options__postprocess_options_lowlevel_2_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 470;
	MR_r2 = (MR_Word) MR_TAG_COMMON(2,5,1);
	MR_np_call_localret_ent(libs__globals__set_option_4_0,
		libs__handle_options__postprocess_options_lowlevel_2_0_i30);
MR_def_label(libs__handle_options__postprocess_options_lowlevel_2_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 238;
	MR_GOTO_LAB(libs__handle_options__postprocess_options_lowlevel_2_0_i31);
MR_def_label(libs__handle_options__postprocess_options_lowlevel_2_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_r2 = (MR_Integer) 238;
MR_def_label(libs__handle_options__postprocess_options_lowlevel_2_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		libs__handle_options__postprocess_options_lowlevel_2_0_i32);
MR_def_label(libs__handle_options__postprocess_options_lowlevel_2_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(3);
	MR_r2 = MR_sv(1);
	MR_r1 = (MR_Integer) 442;
	MR_np_call_localret_ent(libs__globals__set_option_4_0,
		libs__handle_options__postprocess_options_lowlevel_2_0_i35);
MR_def_label(libs__handle_options__postprocess_options_lowlevel_2_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r2 = (MR_Integer) 242;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		libs__handle_options__postprocess_options_lowlevel_2_0_i36);
MR_def_label(libs__handle_options__postprocess_options_lowlevel_2_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = (MR_Integer) 244;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		libs__handle_options__postprocess_options_lowlevel_2_0_i37);
MR_def_label(libs__handle_options__postprocess_options_lowlevel_2_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(3),1)) {
		MR_GOTO_LAB(libs__handle_options__postprocess_options_lowlevel_2_0_i38);
	}
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(libs__handle_options__postprocess_options_lowlevel_2_0_i38);
	}
	MR_r3 = MR_sv(4);
	MR_r2 = (MR_Word) MR_TAG_COMMON(1,5,0);
	MR_r1 = (MR_Integer) 443;
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(libs__globals__set_option_4_0);
MR_def_label(libs__handle_options__postprocess_options_lowlevel_2_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(4);
	MR_r2 = MR_sv(1);
	MR_r1 = (MR_Integer) 443;
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
	MR_sv(4) = MR_r2;
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r4;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r5;
	MR_sv(3) = MR_tempr2;
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
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(libs__globals__lookup_option_3_0,
		libs__handle_options__option_requires_7_0_i3);
MR_def_label(libs__handle_options__option_requires_7_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(4),1)) {
		MR_GOTO_LAB(libs__handle_options__option_requires_7_0_i5);
	}
	MR_r2 = MR_sv(1);
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
	MR_tfield(1, MR_tempr1, 0) = MR_sv(2);
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
	MR_r1 = (MR_Integer) 111;
	MR_r2 = (MR_Word) MR_TAG_COMMON(1,5,0);
	MR_r3 = MR_sv(2);
	MR_np_call_localret_ent(libs__globals__set_option_4_0,
		libs__handle_options__disable_smart_recompilation_5_0_i4);
MR_def_label(libs__handle_options__disable_smart_recompilation_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r2 = (MR_Integer) 23;
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
	MR_sv(4) = MR_r1;
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r4;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r5;
	MR_sv(3) = MR_tempr1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		libs__handle_options__maybe_disable_smart_recompilation_8_0_i2);
MR_def_label(libs__handle_options__maybe_disable_smart_recompilation_8_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(4),1)) {
		MR_GOTO_LAB(libs__handle_options__maybe_disable_smart_recompilation_8_0_i3);
	}
	if ((MR_r1 != MR_sv(1))) {
		MR_GOTO_LAB(libs__handle_options__maybe_disable_smart_recompilation_8_0_i3);
	}
	MR_r1 = (MR_Integer) 1;
	MR_np_call_localret_ent(libs__globals__io_set_disable_smart_recompilation_3_0,
		libs__handle_options__maybe_disable_smart_recompilation_8_0_i5);
MR_def_label(libs__handle_options__maybe_disable_smart_recompilation_8_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 111;
	MR_r2 = (MR_Word) MR_TAG_COMMON(1,5,0);
	MR_r3 = MR_sv(3);
	MR_np_call_localret_ent(libs__globals__set_option_4_0,
		libs__handle_options__maybe_disable_smart_recompilation_8_0_i7);
MR_def_label(libs__handle_options__maybe_disable_smart_recompilation_8_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r2 = (MR_Integer) 23;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		libs__handle_options__maybe_disable_smart_recompilation_8_0_i8);
MR_def_label(libs__handle_options__maybe_disable_smart_recompilation_8_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(libs__handle_options__maybe_disable_smart_recompilation_8_0_i10);
	}
	MR_r1 = MR_sv(4);
	MR_decr_sp_and_return(5);
MR_def_label(libs__handle_options__maybe_disable_smart_recompilation_8_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("Warning: smart recompilation does not yet work with ", 52);
	MR_np_call_localret_ent(io__write_string_3_0,
		libs__handle_options__maybe_disable_smart_recompilation_8_0_i11);
MR_def_label(libs__handle_options__maybe_disable_smart_recompilation_8_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(io__write_string_3_0,
		libs__handle_options__maybe_disable_smart_recompilation_8_0_i12);
MR_def_label(libs__handle_options__maybe_disable_smart_recompilation_8_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(".\n", 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		libs__handle_options__maybe_disable_smart_recompilation_8_0_i13);
MR_def_label(libs__handle_options__maybe_disable_smart_recompilation_8_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
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
	MR_r1 = MR_sv(4);
	MR_decr_sp_and_return(5);
MR_def_label(libs__handle_options__maybe_disable_smart_recompilation_8_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_np_call_localret_ent(io__set_exit_status_3_0,
		libs__handle_options__maybe_disable_smart_recompilation_8_0_i26);
MR_def_label(libs__handle_options__maybe_disable_smart_recompilation_8_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
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
	MR_init_label8(libs__handle_options__postprocess_options_libgrades_4_0,2,3,5,7,8,11,14,16)
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
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_r2 = (MR_Integer) 623;
	MR_np_call_localret_ent(libs__globals__lookup_accumulating_option_3_0,
		libs__handle_options__postprocess_options_libgrades_4_0_i2);
MR_def_label(libs__handle_options__postprocess_options_libgrades_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = (MR_Integer) 624;
	MR_np_call_localret_ent(libs__globals__lookup_accumulating_option_3_0,
		libs__handle_options__postprocess_options_libgrades_4_0_i3);
MR_def_label(libs__handle_options__postprocess_options_libgrades_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_sv(5) = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_sv(6) = (MR_Word) MR_TAG_COMMON(0,1,1);
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_r2;
	MR_r4 = (MR_Word) MR_TAG_COMMON(0,13,0);
	MR_r5 = MR_tempr1;
	MR_r6 = (MR_Word) MR_tbmkword(0, 0);
	MR_r7 = MR_sv(2);
	}
	MR_np_call_localret_ent(list__foldl2_6_0,
		libs__handle_options__postprocess_options_libgrades_4_0_i5);
MR_def_label(libs__handle_options__postprocess_options_libgrades_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(5);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_sv(6);
	MR_r3 = MR_r2;
	MR_r4 = (MR_Word) MR_TAG_COMMON(0,13,1);
	MR_r5 = MR_tempr1;
	MR_r6 = (MR_Word) MR_tbmkword(0, 0);
	MR_r7 = MR_tempr2;
	}
	MR_np_call_localret_ent(list__foldl2_6_0,
		libs__handle_options__postprocess_options_libgrades_4_0_i7);
MR_def_label(libs__handle_options__postprocess_options_libgrades_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_sv(4) = MR_r2;
	MR_r1 = MR_sv(1);
	MR_r2 = (MR_Integer) 622;
	MR_np_call_localret_ent(libs__globals__lookup_accumulating_option_3_0,
		libs__handle_options__postprocess_options_libgrades_4_0_i8);
MR_def_label(libs__handle_options__postprocess_options_libgrades_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_r4 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(15,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(libs__handle_options__filter_grade_7_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr1, 3) = (MR_Word) MR_TAG_COMMON(0,8,5);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(3);
	MR_tempr2 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_r2;
	MR_r5 = MR_tempr2;
	MR_r6 = (MR_Word) MR_tbmkword(0, 0);
	MR_r7 = MR_sv(4);
	}
	MR_np_call_localret_ent(list__foldl2_6_0,
		libs__handle_options__postprocess_options_libgrades_4_0_i11);
MR_def_label(libs__handle_options__postprocess_options_libgrades_4_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_r4 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(15,1);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(libs__handle_options__filter_grade_7_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr1, 3) = (MR_Word) MR_TAG_COMMON(0,8,6);
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
		libs__handle_options__postprocess_options_libgrades_4_0_i14);
MR_def_label(libs__handle_options__postprocess_options_libgrades_4_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 3;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_sv(3) = MR_r2;
	MR_r1 = (MR_Integer) 622;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(1);
	}
	MR_np_call_localret_ent(libs__globals__set_option_4_0,
		libs__handle_options__postprocess_options_libgrades_4_0_i16);
MR_def_label(libs__handle_options__postprocess_options_libgrades_4_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(3);
	MR_decr_sp_and_return(7);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(libs__globals__globals_init_18_0);
MR_decl_entry(libs__globals__lookup_string_option_3_0);
MR_decl_entry(io__get_environment_var_4_0);
MR_decl_entry(fn__libs__globals__gc_is_conservative_1_0);
MR_decl_entry(io__progname_base_4_0);
MR_decl_entry(libs__compiler_util__record_warning_3_0);
MR_decl_entry(libs__globals__set_tags_method_3_0);
MR_decl_entry(libs__globals__current_grade_supports_par_conj_2_0);
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
	MR_init_entry1(libs__handle_options__convert_options_to_globals_22_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__libs__handle_options__convert_options_to_globals_22_0);
	MR_init_label10(libs__handle_options__convert_options_to_globals_22_0,2,3,6,758,8,10,11,13,16,12)
	MR_init_label10(libs__handle_options__convert_options_to_globals_22_0,18,20,21,19,22,26,28,29,30,31)
	MR_init_label10(libs__handle_options__convert_options_to_globals_22_0,32,33,27,37,41,42,43,44,48,45)
	MR_init_label10(libs__handle_options__convert_options_to_globals_22_0,49,50,767,52,57,59,61,55,63,66)
	MR_init_label10(libs__handle_options__convert_options_to_globals_22_0,51,70,71,76,77,1003,78,80,82,84)
	MR_init_label10(libs__handle_options__convert_options_to_globals_22_0,85,86,87,88,89,91,92,93,94,95)
	MR_init_label10(libs__handle_options__convert_options_to_globals_22_0,96,98,97,75,103,104,105,108,109,111)
	MR_init_label10(libs__handle_options__convert_options_to_globals_22_0,117,119,120,122,123,124,125,126,127,128)
	MR_init_label10(libs__handle_options__convert_options_to_globals_22_0,129,130,131,132,133,116,783,135,136,139)
	MR_init_label10(libs__handle_options__convert_options_to_globals_22_0,141,143,144,145,146,147,148,149,150,152)
	MR_init_label10(libs__handle_options__convert_options_to_globals_22_0,153,154,155,156,157,159,110,162,164,165)
	MR_init_label10(libs__handle_options__convert_options_to_globals_22_0,167,168,169,170,171,172,173,176,175,174)
	MR_init_label10(libs__handle_options__convert_options_to_globals_22_0,177,178,179,180,181,182,183,184,787,186)
	MR_init_label10(libs__handle_options__convert_options_to_globals_22_0,187,188,190,192,185,194,195,199,200,203)
	MR_init_label10(libs__handle_options__convert_options_to_globals_22_0,202,205,206,207,208,212,209,213,214,215)
	MR_init_label10(libs__handle_options__convert_options_to_globals_22_0,216,217,218,219,220,221,222,223,224,225)
	MR_init_label10(libs__handle_options__convert_options_to_globals_22_0,226,227,228,229,230,231,232,233,234,235)
	MR_init_label10(libs__handle_options__convert_options_to_globals_22_0,236,237,238,239,240,241,242,243,244,245)
	MR_init_label10(libs__handle_options__convert_options_to_globals_22_0,246,247,248,249,250,251,252,253,254,255)
	MR_init_label10(libs__handle_options__convert_options_to_globals_22_0,256,257,258,263,259,264,265,266,267,268)
	MR_init_label10(libs__handle_options__convert_options_to_globals_22_0,271,273,274,276,270,277,278,279,281,280)
	MR_init_label10(libs__handle_options__convert_options_to_globals_22_0,282,283,285,286,284,287,288,292,291,295)
	MR_init_label10(libs__handle_options__convert_options_to_globals_22_0,290,296,297,298,299,301,302,303,304,306)
	MR_init_label10(libs__handle_options__convert_options_to_globals_22_0,300,307,308,309,310,311,312,313,314,315)
	MR_init_label10(libs__handle_options__convert_options_to_globals_22_0,316,320,327,324,330,331,334,335,336,333)
	MR_init_label10(libs__handle_options__convert_options_to_globals_22_0,338,339,340,341,342,344,811,345,332,348)
	MR_init_label10(libs__handle_options__convert_options_to_globals_22_0,352,347,353,354,355,356,357,358,361,360)
	MR_init_label10(libs__handle_options__convert_options_to_globals_22_0,359,362,363,364,365,366,368,369,370,371)
	MR_init_label10(libs__handle_options__convert_options_to_globals_22_0,372,373,374,375,376,377,378,380,385,386)
	MR_init_label10(libs__handle_options__convert_options_to_globals_22_0,387,388,389,390,391,392,393,394,395,396)
	MR_init_label10(libs__handle_options__convert_options_to_globals_22_0,397,398,400,402,1044,404,383,382,413,414)
	MR_init_label10(libs__handle_options__convert_options_to_globals_22_0,415,416,417,418,419,421,420,379,426,427)
	MR_init_label10(libs__handle_options__convert_options_to_globals_22_0,428,429,431,432,435,436,437,438,440,441)
	MR_init_label10(libs__handle_options__convert_options_to_globals_22_0,443,430,444,445,449,446,453,452,456,458)
	MR_init_label10(libs__handle_options__convert_options_to_globals_22_0,459,451,461,467,466,465,470,464,462,472)
	MR_init_label10(libs__handle_options__convert_options_to_globals_22_0,473,474,475,477,479,480,481,482,483,486)
	MR_init_label10(libs__handle_options__convert_options_to_globals_22_0,487,488,489,490,491,492,493,494,495,485)
	MR_init_label10(libs__handle_options__convert_options_to_globals_22_0,497,498,1280,484,502,503,504,505,506,507)
	MR_init_label10(libs__handle_options__convert_options_to_globals_22_0,508,509,510,511,512,513,514,519,515,520)
	MR_init_label10(libs__handle_options__convert_options_to_globals_22_0,525,521,526,527,528,529,530,534,536,538)
	MR_init_label10(libs__handle_options__convert_options_to_globals_22_0,540,533,543,532,544,545,546,547,548,549)
	MR_init_label10(libs__handle_options__convert_options_to_globals_22_0,550,551,552,553,554,555,556,557,559,560)
	MR_init_label10(libs__handle_options__convert_options_to_globals_22_0,561,562,563,564,567,568,569,572,558,573)
	MR_init_label10(libs__handle_options__convert_options_to_globals_22_0,575,576,577,580,574,581,586,589,590,593)
	MR_init_label10(libs__handle_options__convert_options_to_globals_22_0,582,594,595,596,598,600,601,602,604,605)
	MR_init_label10(libs__handle_options__convert_options_to_globals_22_0,606,608,610,611,612,614,615,616,618,620)
	MR_init_label10(libs__handle_options__convert_options_to_globals_22_0,621,622,624,626,627,628,630,597,631,633)
	MR_init_label10(libs__handle_options__convert_options_to_globals_22_0,634,635,636,638,632,639,640,641,645,647)
	MR_init_label10(libs__handle_options__convert_options_to_globals_22_0,648,649,650,651,644,653,654,655,657,660)
	MR_init_label10(libs__handle_options__convert_options_to_globals_22_0,661,662,664,665,666,668,669,671,672,674)
	MR_init_label10(libs__handle_options__convert_options_to_globals_22_0,676,677,680,679,686,687,688,689,690,691)
	MR_init_label10(libs__handle_options__convert_options_to_globals_22_0,695,696,697,698,701,678,702,703,708,704)
	MR_init_label10(libs__handle_options__convert_options_to_globals_22_0,711,713,715,865,717,719,723,724,721,726)
	MR_init_label10(libs__handle_options__convert_options_to_globals_22_0,725,716,730,734,732,731,735,738,742,736)
	MR_init_label7(libs__handle_options__convert_options_to_globals_22_0,743,746,744,751,753,755,756)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'convert_options_to_globals'/22 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(libs__handle_options__convert_options_to_globals_22_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(18);
	MR_sv(18) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(5) = MR_r4;
	MR_sv(3) = MR_r7;
	MR_sv(8) = MR_r18;
	MR_np_call_localret_ent(libs__globals__globals_init_18_0,
		libs__handle_options__convert_options_to_globals_22_0_i2);
MR_def_label(libs__handle_options__convert_options_to_globals_22_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r2 = (MR_Integer) 168;
	MR_np_call_localret_ent(libs__globals__lookup_string_option_3_0,
		libs__handle_options__convert_options_to_globals_22_0_i3);
MR_def_label(libs__handle_options__convert_options_to_globals_22_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("", 0)) != 0)) {
		MR_GOTO_LAB(libs__handle_options__convert_options_to_globals_22_0_i758);
	}
	MR_r1 = (MR_Word) MR_string_const("MERCURY_EVENT_SET_FILE_NAME", 27);
	MR_np_call_localret_ent(io__get_environment_var_4_0,
		libs__handle_options__convert_options_to_globals_22_0_i6);
MR_def_label(libs__handle_options__convert_options_to_globals_22_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(libs__handle_options__convert_options_to_globals_22_0_i8);
	}
MR_def_label(libs__handle_options__convert_options_to_globals_22_0,758)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_GOTO_LAB(libs__handle_options__convert_options_to_globals_22_0_i11);
MR_def_label(libs__handle_options__convert_options_to_globals_22_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr1, 1) = MR_tfield(1, MR_r1, 0);
	MR_r1 = (MR_Integer) 168;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(4);
	}
	MR_np_call_localret_ent(libs__globals__set_option_4_0,
		libs__handle_options__convert_options_to_globals_22_0_i10);
MR_def_label(libs__handle_options__convert_options_to_globals_22_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(2);
MR_def_label(libs__handle_options__convert_options_to_globals_22_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_np_call_localret_ent(fn__libs__globals__gc_is_conservative_1_0,
		libs__handle_options__convert_options_to_globals_22_0_i13);
MR_def_label(libs__handle_options__convert_options_to_globals_22_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(libs__handle_options__convert_options_to_globals_22_0_i12);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = (MR_Word) MR_TAG_COMMON(1,5,0);
	MR_r1 = (MR_Integer) 303;
	MR_r2 = MR_sv(4);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(libs__globals__set_option_4_0,
		libs__handle_options__convert_options_to_globals_22_0_i16);
MR_def_label(libs__handle_options__convert_options_to_globals_22_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 304;
	MR_r2 = MR_sv(4);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(libs__globals__set_option_4_0,
		libs__handle_options__convert_options_to_globals_22_0_i18);
MR_def_label(libs__handle_options__convert_options_to_globals_22_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
MR_def_label(libs__handle_options__convert_options_to_globals_22_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(5),0)) {
		MR_GOTO_LAB(libs__handle_options__convert_options_to_globals_22_0_i20);
	}
	MR_r2 = (MR_Integer) 0;
	MR_GOTO_LAB(libs__handle_options__convert_options_to_globals_22_0_i19);
MR_def_label(libs__handle_options__convert_options_to_globals_22_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_r2 = (MR_Integer) 232;
	MR_np_call_localret_ent(libs__globals__lookup_int_option_3_0,
		libs__handle_options__convert_options_to_globals_22_0_i21);
MR_def_label(libs__handle_options__convert_options_to_globals_22_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(7);
MR_def_label(libs__handle_options__convert_options_to_globals_22_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(5),1)) {
		MR_GOTO_LAB(libs__handle_options__convert_options_to_globals_22_0_i22);
	}
	if (MR_INT_NE(MR_r2,-1)) {
		MR_GOTO_LAB(libs__handle_options__convert_options_to_globals_22_0_i22);
	}
	MR_sv(7) = MR_r1;
	MR_r2 = (MR_Integer) 237;
	MR_np_call_localret_ent(libs__globals__lookup_int_option_3_0,
		libs__handle_options__convert_options_to_globals_22_0_i26);
MR_def_label(libs__handle_options__convert_options_to_globals_22_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_r1 = MR_r2;
MR_def_label(libs__handle_options__convert_options_to_globals_22_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_GE(MR_r1,0)) {
		MR_GOTO_LAB(libs__handle_options__convert_options_to_globals_22_0_i27);
	}
	MR_r1 = (MR_Word) MR_string_const("mercury_compile", 15);
	MR_np_call_localret_ent(io__progname_base_4_0,
		libs__handle_options__convert_options_to_globals_22_0_i28);
MR_def_label(libs__handle_options__convert_options_to_globals_22_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r2 = (MR_Word) MR_string_const(": warning: --num-tag-bits invalid or unspecified\n", 49);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		libs__handle_options__convert_options_to_globals_22_0_i29);
MR_def_label(libs__handle_options__convert_options_to_globals_22_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__write_string_3_0,
		libs__handle_options__convert_options_to_globals_22_0_i30);
MR_def_label(libs__handle_options__convert_options_to_globals_22_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	MR_r2 = (MR_Word) MR_string_const(": using --num-tag-bits 0 (tags disabled)\n", 41);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		libs__handle_options__convert_options_to_globals_22_0_i31);
MR_def_label(libs__handle_options__convert_options_to_globals_22_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__write_string_3_0,
		libs__handle_options__convert_options_to_globals_22_0_i32);
MR_def_label(libs__handle_options__convert_options_to_globals_22_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(7);
	MR_np_call_localret_ent(libs__compiler_util__record_warning_3_0,
		libs__handle_options__convert_options_to_globals_22_0_i33);
MR_def_label(libs__handle_options__convert_options_to_globals_22_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = (MR_Integer) 0;
	MR_r3 = MR_sv(7);
	MR_r2 = (MR_Word) MR_TAG_COMMON(2,5,0);
	MR_r1 = (MR_Integer) 232;
	MR_np_call_localret_ent(libs__globals__set_option_4_0,
		libs__handle_options__convert_options_to_globals_22_0_i37);
MR_def_label(libs__handle_options__convert_options_to_globals_22_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr1, 0) = MR_r1;
	MR_sv(4) = MR_r1;
	MR_r3 = MR_sv(7);
	MR_r2 = MR_tempr1;
	MR_r1 = (MR_Integer) 232;
	}
	MR_np_call_localret_ent(libs__globals__set_option_4_0,
		libs__handle_options__convert_options_to_globals_22_0_i37);
MR_def_label(libs__handle_options__convert_options_to_globals_22_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(4),0)) {
		MR_GOTO_LAB(libs__handle_options__convert_options_to_globals_22_0_i41);
	}
	MR_sv(5) = (MR_Integer) 0;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(libs__globals__set_tags_method_3_0,
		libs__handle_options__convert_options_to_globals_22_0_i41);
MR_def_label(libs__handle_options__convert_options_to_globals_22_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(10) = MR_r1;
	MR_np_call_localret_ent(libs__globals__current_grade_supports_par_conj_2_0,
		libs__handle_options__convert_options_to_globals_22_0_i42);
MR_def_label(libs__handle_options__convert_options_to_globals_22_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_r1 = MR_sv(10);
	MR_r2 = (MR_Integer) 212;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		libs__handle_options__convert_options_to_globals_22_0_i43);
MR_def_label(libs__handle_options__convert_options_to_globals_22_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(10);
	MR_r2 = (MR_Integer) 213;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		libs__handle_options__convert_options_to_globals_22_0_i44);
MR_def_label(libs__handle_options__convert_options_to_globals_22_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(7),0)) {
		MR_GOTO_LAB(libs__handle_options__convert_options_to_globals_22_0_i45);
	}
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(libs__handle_options__convert_options_to_globals_22_0_i45);
	}
	MR_r1 = (MR_Word) MR_string_const("\'threadscope\' grade component requires a parallel grade", 55);
	MR_r2 = MR_sv(8);
	MR_np_call_localret_ent(libs__handle_options__add_error_3_0,
		libs__handle_options__convert_options_to_globals_22_0_i48);
MR_def_label(libs__handle_options__convert_options_to_globals_22_0,48)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_r1 = MR_sv(10);
	MR_r2 = (MR_Integer) 657;
	MR_GOTO_LAB(libs__handle_options__convert_options_to_globals_22_0_i49);
MR_def_label(libs__handle_options__convert_options_to_globals_22_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(10);
	MR_r2 = (MR_Integer) 657;
MR_def_label(libs__handle_options__convert_options_to_globals_22_0,49)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(10) = MR_r1;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		libs__handle_options__convert_options_to_globals_22_0_i50);
MR_def_label(libs__handle_options__convert_options_to_globals_22_0,50)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(libs__handle_options__convert_options_to_globals_22_0_i52);
	}
MR_def_label(libs__handle_options__convert_options_to_globals_22_0,767)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_sv(10);
	MR_sv(6) = MR_sv(8);
	MR_r3 = (MR_Word) MR_TAG_COMMON(1,5,1);
	MR_r1 = (MR_Integer) 657;
	MR_r2 = (MR_Integer) 194;
	MR_GOTO_LAB(libs__handle_options__convert_options_to_globals_22_0_i51);
MR_def_label(libs__handle_options__convert_options_to_globals_22_0,52)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(7),0)) {
		MR_GOTO_LAB(libs__handle_options__convert_options_to_globals_22_0_i55);
	}
	if (MR_INT_NE(MR_sv(6),0)) {
		MR_GOTO_LAB(libs__handle_options__convert_options_to_globals_22_0_i57);
	}
	MR_r3 = MR_sv(10);
	MR_r2 = (MR_Word) MR_TAG_COMMON(1,5,0);
	MR_sv(6) = MR_sv(8);
	MR_r1 = (MR_Integer) 657;
	MR_np_call_localret_ent(libs__globals__set_option_4_0,
		libs__handle_options__convert_options_to_globals_22_0_i61);
MR_def_label(libs__handle_options__convert_options_to_globals_22_0,57)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("\'--implicit-parallelism\' requires a grade that supports parallel conjunctions, use a low-level C grade without trailing.", 120);
	MR_r2 = MR_sv(8);
	MR_np_call_localret_ent(libs__handle_options__add_error_3_0,
		libs__handle_options__convert_options_to_globals_22_0_i59);
MR_def_label(libs__handle_options__convert_options_to_globals_22_0,59)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(10);
	MR_r2 = (MR_Word) MR_TAG_COMMON(1,5,0);
	MR_sv(6) = MR_r1;
	MR_r1 = (MR_Integer) 657;
	MR_np_call_localret_ent(libs__globals__set_option_4_0,
		libs__handle_options__convert_options_to_globals_22_0_i61);
MR_def_label(libs__handle_options__convert_options_to_globals_22_0,61)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r1;
	MR_r3 = (MR_Word) MR_TAG_COMMON(1,5,1);
	MR_r1 = (MR_Integer) 657;
	MR_r2 = (MR_Integer) 194;
	MR_GOTO_LAB(libs__handle_options__convert_options_to_globals_22_0_i51);
MR_def_label(libs__handle_options__convert_options_to_globals_22_0,55)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(10);
	MR_r2 = (MR_Integer) 658;
	MR_np_call_localret_ent(libs__globals__lookup_string_option_3_0,
		libs__handle_options__convert_options_to_globals_22_0_i63);
MR_def_label(libs__handle_options__convert_options_to_globals_22_0,63)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("", 0)) != 0)) {
		MR_GOTO_LAB(libs__handle_options__convert_options_to_globals_22_0_i767);
	}
	MR_r1 = (MR_Word) MR_string_const("\'--implicit-parallelism\' requires \'--feedback-file\'", 51);
	MR_r2 = MR_sv(8);
	MR_np_call_localret_ent(libs__handle_options__add_error_3_0,
		libs__handle_options__convert_options_to_globals_22_0_i66);
MR_def_label(libs__handle_options__convert_options_to_globals_22_0,66)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_sv(10);
	MR_sv(6) = MR_r1;
	MR_r3 = (MR_Word) MR_TAG_COMMON(1,5,1);
	MR_r1 = (MR_Integer) 657;
	MR_r2 = (MR_Integer) 194;
MR_def_label(libs__handle_options__convert_options_to_globals_22_0,51)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(12) = MR_r3;
	MR_np_call_localret_ent(libs__handle_options__option_implies_5_0,
		libs__handle_options__convert_options_to_globals_22_0_i70);
MR_def_label(libs__handle_options__convert_options_to_globals_22_0,70)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(7),0)) {
		MR_GOTO_LAB(libs__handle_options__convert_options_to_globals_22_0_i71);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 659;
	MR_r2 = (MR_Word) MR_TAG_COMMON(1,5,0);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(libs__globals__set_option_4_0,
		libs__handle_options__convert_options_to_globals_22_0_i71);
MR_def_label(libs__handle_options__convert_options_to_globals_22_0,71)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(1),0)) {
		MR_GOTO_LAB(libs__handle_options__convert_options_to_globals_22_0_i76);
	}
	MR_r2 = (MR_Integer) 256;
	MR_GOTO_LAB(libs__handle_options__convert_options_to_globals_22_0_i75);
MR_def_label(libs__handle_options__convert_options_to_globals_22_0,76)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(1),2)) {
		MR_GOTO_LAB(libs__handle_options__convert_options_to_globals_22_0_i77);
	}
	MR_r2 = (MR_Integer) 256;
	MR_GOTO_LAB(libs__handle_options__convert_options_to_globals_22_0_i75);
MR_def_label(libs__handle_options__convert_options_to_globals_22_0,77)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(1),5)) {
		MR_GOTO_LAB(libs__handle_options__convert_options_to_globals_22_0_i78);
	}
MR_def_label(libs__handle_options__convert_options_to_globals_22_0,1003)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 256;
	MR_GOTO_LAB(libs__handle_options__convert_options_to_globals_22_0_i75);
MR_def_label(libs__handle_options__convert_options_to_globals_22_0,78)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(1),1)) {
		MR_GOTO_LAB(libs__handle_options__convert_options_to_globals_22_0_i1003);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 0;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(libs__globals__set_gc_method_3_0,
		libs__handle_options__convert_options_to_globals_22_0_i80);
MR_def_label(libs__handle_options__convert_options_to_globals_22_0,80)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 211;
	MR_r2 = (MR_Word) MR_TAG_COMMON(3,4,11);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(libs__globals__set_option_4_0,
		libs__handle_options__convert_options_to_globals_22_0_i82);
MR_def_label(libs__handle_options__convert_options_to_globals_22_0,82)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = (MR_Word) MR_TAG_COMMON(1,5,0);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 304;
	MR_r2 = MR_sv(7);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(libs__globals__set_option_4_0,
		libs__handle_options__convert_options_to_globals_22_0_i84);
MR_def_label(libs__handle_options__convert_options_to_globals_22_0,84)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 303;
	MR_r2 = MR_sv(7);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(libs__globals__set_option_4_0,
		libs__handle_options__convert_options_to_globals_22_0_i85);
MR_def_label(libs__handle_options__convert_options_to_globals_22_0,85)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 247;
	MR_r2 = MR_sv(12);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(libs__globals__set_option_4_0,
		libs__handle_options__convert_options_to_globals_22_0_i86);
MR_def_label(libs__handle_options__convert_options_to_globals_22_0,86)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 248;
	MR_r2 = MR_sv(12);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(libs__globals__set_option_4_0,
		libs__handle_options__convert_options_to_globals_22_0_i87);
MR_def_label(libs__handle_options__convert_options_to_globals_22_0,87)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 249;
	MR_r2 = MR_sv(7);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(libs__globals__set_option_4_0,
		libs__handle_options__convert_options_to_globals_22_0_i88);
MR_def_label(libs__handle_options__convert_options_to_globals_22_0,88)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 251;
	MR_r2 = MR_sv(12);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(libs__globals__set_option_4_0,
		libs__handle_options__convert_options_to_globals_22_0_i89);
MR_def_label(libs__handle_options__convert_options_to_globals_22_0,89)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 232;
	MR_r2 = (MR_Word) MR_TAG_COMMON(2,5,0);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(libs__globals__set_option_4_0,
		libs__handle_options__convert_options_to_globals_22_0_i91);
MR_def_label(libs__handle_options__convert_options_to_globals_22_0,91)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 239;
	MR_r2 = MR_sv(7);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(libs__globals__set_option_4_0,
		libs__handle_options__convert_options_to_globals_22_0_i92);
MR_def_label(libs__handle_options__convert_options_to_globals_22_0,92)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 240;
	MR_r2 = MR_sv(7);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(libs__globals__set_option_4_0,
		libs__handle_options__convert_options_to_globals_22_0_i93);
MR_def_label(libs__handle_options__convert_options_to_globals_22_0,93)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 441;
	MR_r2 = MR_sv(7);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(libs__globals__set_option_4_0,
		libs__handle_options__convert_options_to_globals_22_0_i94);
MR_def_label(libs__handle_options__convert_options_to_globals_22_0,94)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 635;
	MR_r2 = MR_sv(7);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(libs__globals__set_option_4_0,
		libs__handle_options__convert_options_to_globals_22_0_i95);
MR_def_label(libs__handle_options__convert_options_to_globals_22_0,95)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 649;
	MR_r2 = MR_sv(12);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(libs__globals__set_option_4_0,
		libs__handle_options__convert_options_to_globals_22_0_i96);
MR_def_label(libs__handle_options__convert_options_to_globals_22_0,96)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(fn__libs__trace_params__given_trace_level_is_none_1_0,
		libs__handle_options__convert_options_to_globals_22_0_i98);
MR_def_label(libs__handle_options__convert_options_to_globals_22_0,98)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(libs__handle_options__convert_options_to_globals_22_0_i97);
	}
	MR_r1 = (MR_Integer) 478;
	MR_r2 = MR_sv(12);
	MR_r3 = MR_sv(7);
	MR_np_call_localret_ent(libs__globals__set_option_4_0,
		libs__handle_options__convert_options_to_globals_22_0_i1003);
MR_def_label(libs__handle_options__convert_options_to_globals_22_0,97)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(7);
	MR_r2 = (MR_Integer) 256;
MR_def_label(libs__handle_options__convert_options_to_globals_22_0,75)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		libs__handle_options__convert_options_to_globals_22_0_i103);
MR_def_label(libs__handle_options__convert_options_to_globals_22_0,103)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r2 = (MR_Integer) 255;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		libs__handle_options__convert_options_to_globals_22_0_i104);
MR_def_label(libs__handle_options__convert_options_to_globals_22_0,104)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(7),1)) {
		MR_GOTO_LAB(libs__handle_options__convert_options_to_globals_22_0_i105);
	}
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(libs__handle_options__convert_options_to_globals_22_0_i105);
	}
	MR_r3 = MR_sv(12);
	MR_r4 = MR_sv(8);
	MR_GOTO_LAB(libs__handle_options__convert_options_to_globals_22_0_i109);
MR_def_label(libs__handle_options__convert_options_to_globals_22_0,105)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 254;
	MR_r2 = (MR_Integer) 253;
	MR_r3 = MR_sv(12);
	MR_r4 = MR_sv(8);
	MR_np_call_localret_ent(libs__handle_options__option_implies_5_0,
		libs__handle_options__convert_options_to_globals_22_0_i108);
MR_def_label(libs__handle_options__convert_options_to_globals_22_0,108)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(12);
	MR_r4 = MR_r1;
MR_def_label(libs__handle_options__convert_options_to_globals_22_0,109)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(1),0)) {
		MR_GOTO_LAB(libs__handle_options__convert_options_to_globals_22_0_i111);
	}
	if (MR_INT_NE(MR_sv(1),0)) {
		MR_GOTO_LAB(libs__handle_options__convert_options_to_globals_22_0_i783);
	}
	MR_sv(12) = MR_r3;
	MR_r1 = (MR_Integer) 247;
	MR_r2 = (MR_Integer) 252;
	MR_np_call_localret_ent(libs__handle_options__option_implies_5_0,
		libs__handle_options__convert_options_to_globals_22_0_i159);
MR_def_label(libs__handle_options__convert_options_to_globals_22_0,111)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(1),5)) {
		MR_GOTO_LAB(libs__handle_options__convert_options_to_globals_22_0_i116);
	}
	MR_sv(12) = MR_r3;
	MR_r1 = (MR_Integer) 0;
	MR_r2 = MR_r4;
	MR_np_call_localret_ent(libs__globals__set_gc_method_3_0,
		libs__handle_options__convert_options_to_globals_22_0_i117);
MR_def_label(libs__handle_options__convert_options_to_globals_22_0,117)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 211;
	MR_r2 = (MR_Word) MR_TAG_COMMON(3,4,11);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(libs__globals__set_option_4_0,
		libs__handle_options__convert_options_to_globals_22_0_i119);
MR_def_label(libs__handle_options__convert_options_to_globals_22_0,119)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 238;
	MR_r2 = MR_sv(12);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(libs__globals__set_option_4_0,
		libs__handle_options__convert_options_to_globals_22_0_i120);
MR_def_label(libs__handle_options__convert_options_to_globals_22_0,120)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = (MR_Word) MR_TAG_COMMON(1,5,0);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 304;
	MR_r2 = MR_sv(7);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(libs__globals__set_option_4_0,
		libs__handle_options__convert_options_to_globals_22_0_i122);
MR_def_label(libs__handle_options__convert_options_to_globals_22_0,122)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 303;
	MR_r2 = MR_sv(7);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(libs__globals__set_option_4_0,
		libs__handle_options__convert_options_to_globals_22_0_i123);
MR_def_label(libs__handle_options__convert_options_to_globals_22_0,123)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 270;
	MR_r2 = MR_sv(12);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(libs__globals__set_option_4_0,
		libs__handle_options__convert_options_to_globals_22_0_i124);
MR_def_label(libs__handle_options__convert_options_to_globals_22_0,124)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 265;
	MR_r2 = MR_sv(7);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(libs__globals__set_option_4_0,
		libs__handle_options__convert_options_to_globals_22_0_i125);
MR_def_label(libs__handle_options__convert_options_to_globals_22_0,125)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 267;
	MR_r2 = MR_sv(12);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(libs__globals__set_option_4_0,
		libs__handle_options__convert_options_to_globals_22_0_i126);
MR_def_label(libs__handle_options__convert_options_to_globals_22_0,126)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 268;
	MR_r2 = MR_sv(12);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(libs__globals__set_option_4_0,
		libs__handle_options__convert_options_to_globals_22_0_i127);
MR_def_label(libs__handle_options__convert_options_to_globals_22_0,127)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 635;
	MR_r2 = MR_sv(7);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(libs__globals__set_option_4_0,
		libs__handle_options__convert_options_to_globals_22_0_i128);
MR_def_label(libs__handle_options__convert_options_to_globals_22_0,128)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 649;
	MR_r2 = MR_sv(12);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(libs__globals__set_option_4_0,
		libs__handle_options__convert_options_to_globals_22_0_i129);
MR_def_label(libs__handle_options__convert_options_to_globals_22_0,129)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 242;
	MR_r2 = MR_sv(7);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(libs__globals__set_option_4_0,
		libs__handle_options__convert_options_to_globals_22_0_i130);
MR_def_label(libs__handle_options__convert_options_to_globals_22_0,130)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 243;
	MR_r2 = MR_sv(7);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(libs__globals__set_option_4_0,
		libs__handle_options__convert_options_to_globals_22_0_i131);
MR_def_label(libs__handle_options__convert_options_to_globals_22_0,131)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 244;
	MR_r2 = MR_sv(7);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(libs__globals__set_option_4_0,
		libs__handle_options__convert_options_to_globals_22_0_i132);
MR_def_label(libs__handle_options__convert_options_to_globals_22_0,132)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 247;
	MR_r2 = MR_sv(7);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(libs__globals__set_option_4_0,
		libs__handle_options__convert_options_to_globals_22_0_i133);
MR_def_label(libs__handle_options__convert_options_to_globals_22_0,133)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 248;
	MR_r2 = MR_sv(7);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(libs__globals__set_option_4_0,
		libs__handle_options__convert_options_to_globals_22_0_i159);
MR_def_label(libs__handle_options__convert_options_to_globals_22_0,116)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(1),1)) {
		MR_GOTO_LAB(libs__handle_options__convert_options_to_globals_22_0_i135);
	}
MR_def_label(libs__handle_options__convert_options_to_globals_22_0,783)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 215;
	MR_r2 = (MR_Integer) 214;
	MR_GOTO_LAB(libs__handle_options__convert_options_to_globals_22_0_i110);
MR_def_label(libs__handle_options__convert_options_to_globals_22_0,135)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(1),4)) {
		MR_GOTO_LAB(libs__handle_options__convert_options_to_globals_22_0_i136);
	}
	MR_sv(12) = MR_r3;
	MR_r1 = (MR_Integer) 461;
	MR_r2 = (MR_Word) MR_TAG_COMMON(1,5,0);
	MR_r3 = MR_r4;
	MR_np_call_localret_ent(libs__globals__set_option_4_0,
		libs__handle_options__convert_options_to_globals_22_0_i159);
MR_def_label(libs__handle_options__convert_options_to_globals_22_0,136)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(12) = MR_r3;
	MR_r1 = (MR_Integer) 0;
	MR_r2 = MR_r4;
	MR_np_call_localret_ent(libs__globals__set_gc_method_3_0,
		libs__handle_options__convert_options_to_globals_22_0_i139);
MR_def_label(libs__handle_options__convert_options_to_globals_22_0,139)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 211;
	MR_r2 = (MR_Word) MR_TAG_COMMON(3,4,11);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(libs__globals__set_option_4_0,
		libs__handle_options__convert_options_to_globals_22_0_i141);
MR_def_label(libs__handle_options__convert_options_to_globals_22_0,141)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = (MR_Word) MR_TAG_COMMON(1,5,0);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 304;
	MR_r2 = MR_sv(7);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(libs__globals__set_option_4_0,
		libs__handle_options__convert_options_to_globals_22_0_i143);
MR_def_label(libs__handle_options__convert_options_to_globals_22_0,143)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 303;
	MR_r2 = MR_sv(7);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(libs__globals__set_option_4_0,
		libs__handle_options__convert_options_to_globals_22_0_i144);
MR_def_label(libs__handle_options__convert_options_to_globals_22_0,144)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 247;
	MR_r2 = MR_sv(12);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(libs__globals__set_option_4_0,
		libs__handle_options__convert_options_to_globals_22_0_i145);
MR_def_label(libs__handle_options__convert_options_to_globals_22_0,145)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 248;
	MR_r2 = MR_sv(12);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(libs__globals__set_option_4_0,
		libs__handle_options__convert_options_to_globals_22_0_i146);
MR_def_label(libs__handle_options__convert_options_to_globals_22_0,146)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 238;
	MR_r2 = MR_sv(12);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(libs__globals__set_option_4_0,
		libs__handle_options__convert_options_to_globals_22_0_i147);
MR_def_label(libs__handle_options__convert_options_to_globals_22_0,147)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 249;
	MR_r2 = MR_sv(7);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(libs__globals__set_option_4_0,
		libs__handle_options__convert_options_to_globals_22_0_i148);
MR_def_label(libs__handle_options__convert_options_to_globals_22_0,148)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 251;
	MR_r2 = MR_sv(12);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(libs__globals__set_option_4_0,
		libs__handle_options__convert_options_to_globals_22_0_i149);
MR_def_label(libs__handle_options__convert_options_to_globals_22_0,149)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 250;
	MR_r2 = MR_sv(12);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(libs__globals__set_option_4_0,
		libs__handle_options__convert_options_to_globals_22_0_i150);
MR_def_label(libs__handle_options__convert_options_to_globals_22_0,150)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 232;
	MR_r2 = (MR_Word) MR_TAG_COMMON(2,5,0);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(libs__globals__set_option_4_0,
		libs__handle_options__convert_options_to_globals_22_0_i152);
MR_def_label(libs__handle_options__convert_options_to_globals_22_0,152)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 240;
	MR_r2 = MR_sv(7);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(libs__globals__set_option_4_0,
		libs__handle_options__convert_options_to_globals_22_0_i153);
MR_def_label(libs__handle_options__convert_options_to_globals_22_0,153)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 253;
	MR_r2 = MR_sv(12);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(libs__globals__set_option_4_0,
		libs__handle_options__convert_options_to_globals_22_0_i154);
MR_def_label(libs__handle_options__convert_options_to_globals_22_0,154)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 266;
	MR_r2 = MR_sv(12);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(libs__globals__set_option_4_0,
		libs__handle_options__convert_options_to_globals_22_0_i155);
MR_def_label(libs__handle_options__convert_options_to_globals_22_0,155)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 635;
	MR_r2 = MR_sv(7);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(libs__globals__set_option_4_0,
		libs__handle_options__convert_options_to_globals_22_0_i156);
MR_def_label(libs__handle_options__convert_options_to_globals_22_0,156)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 649;
	MR_r2 = MR_sv(12);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(libs__globals__set_option_4_0,
		libs__handle_options__convert_options_to_globals_22_0_i157);
MR_def_label(libs__handle_options__convert_options_to_globals_22_0,157)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(1),2)) {
		MR_GOTO_LAB(libs__handle_options__convert_options_to_globals_22_0_i159);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 565;
	MR_r2 = (MR_Word) MR_TAG_COMMON(3,4,12);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(libs__globals__set_option_4_0,
		libs__handle_options__convert_options_to_globals_22_0_i159);
MR_def_label(libs__handle_options__convert_options_to_globals_22_0,159)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(12);
	MR_r4 = MR_r1;
	MR_r1 = (MR_Integer) 215;
	MR_r2 = (MR_Integer) 214;
MR_def_label(libs__handle_options__convert_options_to_globals_22_0,110)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(12) = MR_r3;
	MR_np_call_localret_ent(libs__handle_options__option_implies_5_0,
		libs__handle_options__convert_options_to_globals_22_0_i162);
MR_def_label(libs__handle_options__convert_options_to_globals_22_0,162)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = (MR_Word) MR_TAG_COMMON(3,4,13);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 99;
	MR_r2 = (MR_Integer) 550;
	MR_r3 = MR_sv(7);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(libs__handle_options__option_implies_5_0,
		libs__handle_options__convert_options_to_globals_22_0_i164);
MR_def_label(libs__handle_options__convert_options_to_globals_22_0,164)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 99;
	MR_r2 = (MR_Integer) 552;
	MR_r3 = MR_sv(7);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(libs__handle_options__option_implies_5_0,
		libs__handle_options__convert_options_to_globals_22_0_i165);
MR_def_label(libs__handle_options__convert_options_to_globals_22_0,165)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(13) = (MR_Word) MR_TAG_COMMON(1,5,0);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 247;
	MR_r2 = (MR_Integer) 242;
	MR_r3 = MR_sv(13);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(libs__handle_options__option_implies_5_0,
		libs__handle_options__convert_options_to_globals_22_0_i167);
MR_def_label(libs__handle_options__convert_options_to_globals_22_0,167)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 247;
	MR_r2 = (MR_Integer) 243;
	MR_r3 = MR_sv(13);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(libs__handle_options__option_implies_5_0,
		libs__handle_options__convert_options_to_globals_22_0_i168);
MR_def_label(libs__handle_options__convert_options_to_globals_22_0,168)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 247;
	MR_r2 = (MR_Integer) 244;
	MR_r3 = MR_sv(13);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(libs__handle_options__option_implies_5_0,
		libs__handle_options__convert_options_to_globals_22_0_i169);
MR_def_label(libs__handle_options__convert_options_to_globals_22_0,169)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 249;
	MR_r2 = (MR_Integer) 317;
	MR_r3 = MR_sv(13);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(libs__handle_options__option_neg_implies_5_0,
		libs__handle_options__convert_options_to_globals_22_0_i170);
MR_def_label(libs__handle_options__convert_options_to_globals_22_0,170)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 454;
	MR_r2 = (MR_Integer) 448;
	MR_r3 = MR_sv(13);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(libs__handle_options__option_neg_implies_5_0,
		libs__handle_options__convert_options_to_globals_22_0_i171);
MR_def_label(libs__handle_options__convert_options_to_globals_22_0,171)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 610;
	MR_r2 = (MR_Integer) 608;
	MR_r3 = MR_sv(12);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(libs__handle_options__option_implies_5_0,
		libs__handle_options__convert_options_to_globals_22_0_i172);
MR_def_label(libs__handle_options__convert_options_to_globals_22_0,172)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_r2 = (MR_Integer) 625;
	MR_np_call_localret_ent(libs__globals__lookup_accumulating_option_3_0,
		libs__handle_options__convert_options_to_globals_22_0_i173);
MR_def_label(libs__handle_options__convert_options_to_globals_22_0,173)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(libs__handle_options__convert_options_to_globals_22_0_i175);
	}
	MR_r1 = (MR_Integer) 625;
	MR_r2 = (MR_Word) MR_TAG_COMMON(3,3,0);
	MR_r3 = MR_sv(7);
	MR_np_call_localret_ent(libs__globals__set_option_4_0,
		libs__handle_options__convert_options_to_globals_22_0_i176);
MR_def_label(libs__handle_options__convert_options_to_globals_22_0,176)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(12);
	MR_r4 = MR_r1;
	MR_r1 = (MR_Integer) 608;
	MR_r2 = (MR_Integer) 98;
	MR_GOTO_LAB(libs__handle_options__convert_options_to_globals_22_0_i174);
MR_def_label(libs__handle_options__convert_options_to_globals_22_0,175)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(12);
	MR_r4 = MR_sv(7);
	MR_r1 = (MR_Integer) 608;
	MR_r2 = (MR_Integer) 98;
MR_def_label(libs__handle_options__convert_options_to_globals_22_0,174)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(12) = MR_r3;
	MR_np_call_localret_ent(libs__handle_options__option_implies_5_0,
		libs__handle_options__convert_options_to_globals_22_0_i177);
MR_def_label(libs__handle_options__convert_options_to_globals_22_0,177)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 608;
	MR_r2 = (MR_Integer) 97;
	MR_r3 = MR_sv(12);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(libs__handle_options__option_implies_5_0,
		libs__handle_options__convert_options_to_globals_22_0_i178);
MR_def_label(libs__handle_options__convert_options_to_globals_22_0,178)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 608;
	MR_r2 = (MR_Integer) 630;
	MR_r3 = MR_sv(12);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(libs__handle_options__option_implies_5_0,
		libs__handle_options__convert_options_to_globals_22_0_i179);
MR_def_label(libs__handle_options__convert_options_to_globals_22_0,179)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 613;
	MR_r2 = (MR_Integer) 630;
	MR_r3 = MR_sv(12);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(libs__handle_options__option_implies_5_0,
		libs__handle_options__convert_options_to_globals_22_0_i180);
MR_def_label(libs__handle_options__convert_options_to_globals_22_0,180)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 613;
	MR_r2 = (MR_Integer) 608;
	MR_r3 = MR_sv(13);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(libs__handle_options__option_implies_5_0,
		libs__handle_options__convert_options_to_globals_22_0_i181);
MR_def_label(libs__handle_options__convert_options_to_globals_22_0,181)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 613;
	MR_r2 = (MR_Integer) 113;
	MR_r3 = MR_sv(13);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(libs__handle_options__option_implies_5_0,
		libs__handle_options__convert_options_to_globals_22_0_i182);
MR_def_label(libs__handle_options__convert_options_to_globals_22_0,182)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 608;
	MR_r2 = (MR_Integer) 635;
	MR_r3 = MR_sv(13);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(libs__handle_options__option_neg_implies_5_0,
		libs__handle_options__convert_options_to_globals_22_0_i183);
MR_def_label(libs__handle_options__convert_options_to_globals_22_0,183)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_r2 = (MR_Integer) 327;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		libs__handle_options__convert_options_to_globals_22_0_i184);
MR_def_label(libs__handle_options__convert_options_to_globals_22_0,184)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(libs__handle_options__convert_options_to_globals_22_0_i186);
	}
MR_def_label(libs__handle_options__convert_options_to_globals_22_0,787)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(8);
	MR_r2 = (MR_Integer) 323;
	MR_GOTO_LAB(libs__handle_options__convert_options_to_globals_22_0_i185);
MR_def_label(libs__handle_options__convert_options_to_globals_22_0,186)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(8);
	MR_r2 = (MR_Integer) 608;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		libs__handle_options__convert_options_to_globals_22_0_i187);
MR_def_label(libs__handle_options__convert_options_to_globals_22_0,187)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r2 = (MR_Integer) 613;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		libs__handle_options__convert_options_to_globals_22_0_i188);
MR_def_label(libs__handle_options__convert_options_to_globals_22_0,188)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__bool__or_2_0,
		libs__handle_options__convert_options_to_globals_22_0_i190);
MR_def_label(libs__handle_options__convert_options_to_globals_22_0,190)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(libs__handle_options__convert_options_to_globals_22_0_i787);
	}
	MR_r1 = (MR_Word) MR_string_const("\140--transitive-intermodule-optimization\' is incompatible with \140mmc --make\'.", 74);
	MR_r2 = MR_sv(6);
	MR_np_call_localret_ent(libs__handle_options__add_error_3_0,
		libs__handle_options__convert_options_to_globals_22_0_i192);
MR_def_label(libs__handle_options__convert_options_to_globals_22_0,192)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r2 = (MR_Integer) 323;
MR_def_label(libs__handle_options__convert_options_to_globals_22_0,185)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		libs__handle_options__convert_options_to_globals_22_0_i194);
MR_def_label(libs__handle_options__convert_options_to_globals_22_0,194)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r2 = (MR_Integer) 328;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		libs__handle_options__convert_options_to_globals_22_0_i195);
MR_def_label(libs__handle_options__convert_options_to_globals_22_0,195)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(7),1)) {
		MR_GOTO_LAB(libs__handle_options__convert_options_to_globals_22_0_i200);
	}
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(libs__handle_options__convert_options_to_globals_22_0_i200);
	}
	MR_r1 = (MR_Word) MR_string_const("\140--intermodule-optimization\' is incompatible with \140--intermodule-analysis\'.", 75);
	MR_r2 = MR_sv(6);
	MR_np_call_localret_ent(libs__handle_options__add_error_3_0,
		libs__handle_options__convert_options_to_globals_22_0_i199);
MR_def_label(libs__handle_options__convert_options_to_globals_22_0,199)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
MR_def_label(libs__handle_options__convert_options_to_globals_22_0,200)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__have_symlinks_0_0,
		libs__handle_options__convert_options_to_globals_22_0_i203);
MR_def_label(libs__handle_options__convert_options_to_globals_22_0,203)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(libs__handle_options__convert_options_to_globals_22_0_i202);
	}
	MR_r1 = MR_sv(8);
	MR_r2 = (MR_Integer) 93;
	MR_GOTO_LAB(libs__handle_options__convert_options_to_globals_22_0_i206);
MR_def_label(libs__handle_options__convert_options_to_globals_22_0,202)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 617;
	MR_r2 = MR_sv(13);
	MR_r3 = MR_sv(8);
	MR_np_call_localret_ent(libs__globals__set_option_4_0,
		libs__handle_options__convert_options_to_globals_22_0_i205);
MR_def_label(libs__handle_options__convert_options_to_globals_22_0,205)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 93;
MR_def_label(libs__handle_options__convert_options_to_globals_22_0,206)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_np_call_localret_ent(libs__globals__lookup_maybe_string_option_3_0,
		libs__handle_options__convert_options_to_globals_22_0_i207);
MR_def_label(libs__handle_options__convert_options_to_globals_22_0,207)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r2 = (MR_Integer) 560;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		libs__handle_options__convert_options_to_globals_22_0_i208);
MR_def_label(libs__handle_options__convert_options_to_globals_22_0,208)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_sv(7),0,0)) {
		MR_GOTO_LAB(libs__handle_options__convert_options_to_globals_22_0_i209);
	}
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(libs__handle_options__convert_options_to_globals_22_0_i209);
	}
	MR_r1 = (MR_Word) MR_string_const("\140--generate-standalone-interface\' is incompatible with \140--extra-initialization-functions\'.", 90);
	MR_r2 = MR_sv(6);
	MR_np_call_localret_ent(libs__handle_options__add_error_3_0,
		libs__handle_options__convert_options_to_globals_22_0_i212);
MR_def_label(libs__handle_options__convert_options_to_globals_22_0,212)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(12);
	MR_r4 = MR_sv(8);
	MR_sv(11) = MR_r1;
	MR_r1 = (MR_Integer) 406;
	MR_r2 = (MR_Integer) 404;
	MR_GOTO_LAB(libs__handle_options__convert_options_to_globals_22_0_i213);
MR_def_label(libs__handle_options__convert_options_to_globals_22_0,209)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(12);
	MR_r4 = MR_sv(8);
	MR_sv(11) = MR_sv(6);
	MR_r1 = (MR_Integer) 406;
	MR_r2 = (MR_Integer) 404;
MR_def_label(libs__handle_options__convert_options_to_globals_22_0,213)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(12) = MR_r3;
	MR_np_call_localret_ent(libs__handle_options__option_implies_5_0,
		libs__handle_options__convert_options_to_globals_22_0_i214);
MR_def_label(libs__handle_options__convert_options_to_globals_22_0,214)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 414;
	MR_r2 = (MR_Integer) 413;
	MR_r3 = MR_sv(12);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(libs__handle_options__option_implies_5_0,
		libs__handle_options__convert_options_to_globals_22_0_i215);
MR_def_label(libs__handle_options__convert_options_to_globals_22_0,215)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 413;
	MR_r2 = (MR_Integer) 412;
	MR_r3 = MR_sv(12);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(libs__handle_options__option_implies_5_0,
		libs__handle_options__convert_options_to_globals_22_0_i216);
MR_def_label(libs__handle_options__convert_options_to_globals_22_0,216)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 413;
	MR_r2 = (MR_Integer) 13;
	MR_r3 = MR_sv(12);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(libs__handle_options__option_implies_5_0,
		libs__handle_options__convert_options_to_globals_22_0_i217);
MR_def_label(libs__handle_options__convert_options_to_globals_22_0,217)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 421;
	MR_r2 = (MR_Integer) 420;
	MR_r3 = MR_sv(12);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(libs__handle_options__option_implies_5_0,
		libs__handle_options__convert_options_to_globals_22_0_i218);
MR_def_label(libs__handle_options__convert_options_to_globals_22_0,218)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 420;
	MR_r2 = (MR_Integer) 419;
	MR_r3 = MR_sv(12);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(libs__handle_options__option_implies_5_0,
		libs__handle_options__convert_options_to_globals_22_0_i219);
MR_def_label(libs__handle_options__convert_options_to_globals_22_0,219)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 420;
	MR_r2 = (MR_Integer) 13;
	MR_r3 = MR_sv(12);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(libs__handle_options__option_implies_5_0,
		libs__handle_options__convert_options_to_globals_22_0_i220);
MR_def_label(libs__handle_options__convert_options_to_globals_22_0,220)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 86;
	MR_r2 = (MR_Integer) 327;
	MR_r3 = MR_sv(12);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(libs__handle_options__option_implies_5_0,
		libs__handle_options__convert_options_to_globals_22_0_i221);
MR_def_label(libs__handle_options__convert_options_to_globals_22_0,221)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 327;
	MR_r2 = (MR_Integer) 323;
	MR_r3 = MR_sv(12);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(libs__handle_options__option_implies_5_0,
		libs__handle_options__convert_options_to_globals_22_0_i222);
MR_def_label(libs__handle_options__convert_options_to_globals_22_0,222)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 326;
	MR_r2 = (MR_Integer) 325;
	MR_r3 = MR_sv(12);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(libs__handle_options__option_implies_5_0,
		libs__handle_options__convert_options_to_globals_22_0_i223);
MR_def_label(libs__handle_options__convert_options_to_globals_22_0,223)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 323;
	MR_r2 = (MR_Integer) 325;
	MR_r3 = MR_sv(13);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(libs__handle_options__option_implies_5_0,
		libs__handle_options__convert_options_to_globals_22_0_i224);
MR_def_label(libs__handle_options__convert_options_to_globals_22_0,224)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 327;
	MR_r2 = (MR_Integer) 326;
	MR_r3 = MR_sv(13);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(libs__handle_options__option_implies_5_0,
		libs__handle_options__convert_options_to_globals_22_0_i225);
MR_def_label(libs__handle_options__convert_options_to_globals_22_0,225)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 325;
	MR_r2 = MR_sv(13);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(libs__globals__set_option_4_0,
		libs__handle_options__convert_options_to_globals_22_0_i226);
MR_def_label(libs__handle_options__convert_options_to_globals_22_0,226)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 111;
	MR_r2 = (MR_Integer) 112;
	MR_r3 = MR_sv(12);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(libs__handle_options__option_implies_5_0,
		libs__handle_options__convert_options_to_globals_22_0_i227);
MR_def_label(libs__handle_options__convert_options_to_globals_22_0,227)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 48;
	MR_r2 = (MR_Integer) 47;
	MR_r3 = MR_sv(12);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(libs__handle_options__option_implies_5_0,
		libs__handle_options__convert_options_to_globals_22_0_i228);
MR_def_label(libs__handle_options__convert_options_to_globals_22_0,228)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 89;
	MR_r2 = (MR_Integer) 111;
	MR_r3 = MR_sv(13);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(libs__handle_options__option_implies_5_0,
		libs__handle_options__convert_options_to_globals_22_0_i229);
MR_def_label(libs__handle_options__convert_options_to_globals_22_0,229)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 91;
	MR_r2 = (MR_Integer) 111;
	MR_r3 = MR_sv(13);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(libs__handle_options__option_implies_5_0,
		libs__handle_options__convert_options_to_globals_22_0_i230);
MR_def_label(libs__handle_options__convert_options_to_globals_22_0,230)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 90;
	MR_r2 = (MR_Integer) 111;
	MR_r3 = MR_sv(13);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(libs__handle_options__option_implies_5_0,
		libs__handle_options__convert_options_to_globals_22_0_i231);
MR_def_label(libs__handle_options__convert_options_to_globals_22_0,231)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 94;
	MR_r2 = (MR_Integer) 111;
	MR_r3 = MR_sv(13);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(libs__handle_options__option_implies_5_0,
		libs__handle_options__convert_options_to_globals_22_0_i232);
MR_def_label(libs__handle_options__convert_options_to_globals_22_0,232)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 84;
	MR_r2 = (MR_Integer) 111;
	MR_r3 = MR_sv(13);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(libs__handle_options__option_implies_5_0,
		libs__handle_options__convert_options_to_globals_22_0_i233);
MR_def_label(libs__handle_options__convert_options_to_globals_22_0,233)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 83;
	MR_r2 = (MR_Integer) 111;
	MR_r3 = MR_sv(13);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(libs__handle_options__option_implies_5_0,
		libs__handle_options__convert_options_to_globals_22_0_i234);
MR_def_label(libs__handle_options__convert_options_to_globals_22_0,234)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 82;
	MR_r2 = (MR_Integer) 111;
	MR_r3 = MR_sv(13);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(libs__handle_options__option_implies_5_0,
		libs__handle_options__convert_options_to_globals_22_0_i235);
MR_def_label(libs__handle_options__convert_options_to_globals_22_0,235)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 88;
	MR_r2 = (MR_Integer) 111;
	MR_r3 = MR_sv(13);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(libs__handle_options__option_implies_5_0,
		libs__handle_options__convert_options_to_globals_22_0_i236);
MR_def_label(libs__handle_options__convert_options_to_globals_22_0,236)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 100;
	MR_r2 = (MR_Integer) 111;
	MR_r3 = MR_sv(13);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(libs__handle_options__option_implies_5_0,
		libs__handle_options__convert_options_to_globals_22_0_i237);
MR_def_label(libs__handle_options__convert_options_to_globals_22_0,237)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 85;
	MR_r2 = (MR_Integer) 111;
	MR_r3 = MR_sv(13);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(libs__handle_options__option_implies_5_0,
		libs__handle_options__convert_options_to_globals_22_0_i238);
MR_def_label(libs__handle_options__convert_options_to_globals_22_0,238)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 86;
	MR_r2 = (MR_Integer) 111;
	MR_r3 = MR_sv(13);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(libs__handle_options__option_implies_5_0,
		libs__handle_options__convert_options_to_globals_22_0_i239);
MR_def_label(libs__handle_options__convert_options_to_globals_22_0,239)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 87;
	MR_r2 = (MR_Integer) 111;
	MR_r3 = MR_sv(13);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(libs__handle_options__option_implies_5_0,
		libs__handle_options__convert_options_to_globals_22_0_i240);
MR_def_label(libs__handle_options__convert_options_to_globals_22_0,240)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 96;
	MR_r2 = (MR_Integer) 111;
	MR_r3 = MR_sv(13);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(libs__handle_options__option_implies_5_0,
		libs__handle_options__convert_options_to_globals_22_0_i241);
MR_def_label(libs__handle_options__convert_options_to_globals_22_0,241)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 95;
	MR_r2 = (MR_Integer) 111;
	MR_r3 = MR_sv(13);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(libs__handle_options__option_implies_5_0,
		libs__handle_options__convert_options_to_globals_22_0_i242);
MR_def_label(libs__handle_options__convert_options_to_globals_22_0,242)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 84;
	MR_r2 = (MR_Integer) 133;
	MR_r3 = MR_sv(13);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(libs__handle_options__option_implies_5_0,
		libs__handle_options__convert_options_to_globals_22_0_i243);
MR_def_label(libs__handle_options__convert_options_to_globals_22_0,243)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 83;
	MR_r2 = (MR_Integer) 133;
	MR_r3 = MR_sv(13);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(libs__handle_options__option_implies_5_0,
		libs__handle_options__convert_options_to_globals_22_0_i244);
MR_def_label(libs__handle_options__convert_options_to_globals_22_0,244)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 82;
	MR_r2 = (MR_Integer) 133;
	MR_r3 = MR_sv(13);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(libs__handle_options__option_implies_5_0,
		libs__handle_options__convert_options_to_globals_22_0_i245);
MR_def_label(libs__handle_options__convert_options_to_globals_22_0,245)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 85;
	MR_r2 = (MR_Integer) 133;
	MR_r3 = MR_sv(13);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(libs__handle_options__option_implies_5_0,
		libs__handle_options__convert_options_to_globals_22_0_i246);
MR_def_label(libs__handle_options__convert_options_to_globals_22_0,246)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 86;
	MR_r2 = (MR_Integer) 133;
	MR_r3 = MR_sv(13);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(libs__handle_options__option_implies_5_0,
		libs__handle_options__convert_options_to_globals_22_0_i247);
MR_def_label(libs__handle_options__convert_options_to_globals_22_0,247)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 82;
	MR_r2 = (MR_Integer) 112;
	MR_r3 = MR_sv(13);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(libs__handle_options__option_implies_5_0,
		libs__handle_options__convert_options_to_globals_22_0_i248);
MR_def_label(libs__handle_options__convert_options_to_globals_22_0,248)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 88;
	MR_r2 = (MR_Integer) 323;
	MR_r3 = MR_sv(13);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(libs__handle_options__option_implies_5_0,
		libs__handle_options__convert_options_to_globals_22_0_i249);
MR_def_label(libs__handle_options__convert_options_to_globals_22_0,249)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_r2 = (MR_Integer) 111;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		libs__handle_options__convert_options_to_globals_22_0_i250);
MR_def_label(libs__handle_options__convert_options_to_globals_22_0,250)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(7);
	MR_sv(7) = MR_r1;
	MR_r2 = (MR_Integer) 323;
	MR_r3 = (MR_Integer) 1;
	MR_r4 = (MR_Word) MR_string_const("\140--intermodule-optimization\'", 28);
	MR_r5 = MR_tempr1;
	}
	MR_np_call_localret_ent(libs__handle_options__maybe_disable_smart_recompilation_8_0,
		libs__handle_options__convert_options_to_globals_22_0_i251);
MR_def_label(libs__handle_options__convert_options_to_globals_22_0,251)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = (MR_Integer) 325;
	MR_r3 = (MR_Integer) 1;
	MR_r4 = (MR_Word) MR_string_const("\140--use-opt-files\'", 17);
	MR_r5 = MR_tempr1;
	}
	MR_np_call_localret_ent(libs__handle_options__maybe_disable_smart_recompilation_8_0,
		libs__handle_options__convert_options_to_globals_22_0_i252);
MR_def_label(libs__handle_options__convert_options_to_globals_22_0,252)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = (MR_Integer) 97;
	MR_r3 = (MR_Integer) 0;
	MR_r4 = (MR_Word) MR_string_const("\140--no-target-code-only\'", 23);
	MR_r5 = MR_tempr1;
	}
	MR_np_call_localret_ent(libs__handle_options__maybe_disable_smart_recompilation_8_0,
		libs__handle_options__convert_options_to_globals_22_0_i253);
MR_def_label(libs__handle_options__convert_options_to_globals_22_0,253)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 631;
	MR_r2 = (MR_Integer) 630;
	MR_r3 = MR_sv(12);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(libs__handle_options__option_implies_5_0,
		libs__handle_options__convert_options_to_globals_22_0_i254);
MR_def_label(libs__handle_options__convert_options_to_globals_22_0,254)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 45;
	MR_r2 = (MR_Integer) 44;
	MR_r3 = MR_sv(12);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(libs__handle_options__option_implies_5_0,
		libs__handle_options__convert_options_to_globals_22_0_i255);
MR_def_label(libs__handle_options__convert_options_to_globals_22_0,255)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 44;
	MR_r2 = (MR_Integer) 50;
	MR_r3 = MR_sv(12);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(libs__handle_options__option_implies_5_0,
		libs__handle_options__convert_options_to_globals_22_0_i256);
MR_def_label(libs__handle_options__convert_options_to_globals_22_0,256)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r2 = (MR_Integer) 45;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		libs__handle_options__convert_options_to_globals_22_0_i257);
MR_def_label(libs__handle_options__convert_options_to_globals_22_0,257)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = (MR_Integer) 54;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		libs__handle_options__convert_options_to_globals_22_0_i258);
MR_def_label(libs__handle_options__convert_options_to_globals_22_0,258)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(7),1)) {
		MR_GOTO_LAB(libs__handle_options__convert_options_to_globals_22_0_i259);
	}
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(libs__handle_options__convert_options_to_globals_22_0_i259);
	}
	MR_sv(7) = MR_r1;
	MR_r1 = (MR_Integer) 55;
	MR_r2 = (MR_Word) MR_TAG_COMMON(1,5,1);
	MR_r3 = MR_sv(6);
	MR_np_call_localret_ent(libs__globals__set_option_4_0,
		libs__handle_options__convert_options_to_globals_22_0_i263);
MR_def_label(libs__handle_options__convert_options_to_globals_22_0,263)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(12);
	MR_r4 = MR_r1;
	MR_r1 = (MR_Integer) 60;
	MR_r2 = (MR_Integer) 58;
	MR_GOTO_LAB(libs__handle_options__convert_options_to_globals_22_0_i264);
MR_def_label(libs__handle_options__convert_options_to_globals_22_0,259)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_r3 = MR_sv(12);
	MR_r4 = MR_sv(6);
	MR_r1 = (MR_Integer) 60;
	MR_r2 = (MR_Integer) 58;
MR_def_label(libs__handle_options__convert_options_to_globals_22_0,264)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(12) = MR_r3;
	MR_np_call_localret_ent(libs__handle_options__option_implies_5_0,
		libs__handle_options__convert_options_to_globals_22_0_i265);
MR_def_label(libs__handle_options__convert_options_to_globals_22_0,265)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 61;
	MR_r2 = (MR_Integer) 58;
	MR_r3 = MR_sv(12);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(libs__handle_options__option_implies_5_0,
		libs__handle_options__convert_options_to_globals_22_0_i266);
MR_def_label(libs__handle_options__convert_options_to_globals_22_0,266)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 59;
	MR_r2 = (MR_Integer) 58;
	MR_r3 = MR_sv(12);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(libs__handle_options__option_implies_5_0,
		libs__handle_options__convert_options_to_globals_22_0_i267);
MR_def_label(libs__handle_options__convert_options_to_globals_22_0,267)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_r2 = (MR_Integer) 72;
	MR_np_call_localret_ent(libs__globals__lookup_int_option_3_0,
		libs__handle_options__convert_options_to_globals_22_0_i268);
MR_def_label(libs__handle_options__convert_options_to_globals_22_0,268)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_LT(MR_r1,0)) {
		MR_GOTO_LAB(libs__handle_options__convert_options_to_globals_22_0_i270);
	}
	MR_r1 = (MR_Word) MR_string_const("all", 3);
	MR_np_call_localret_ent(libs__handle_options__convert_dump_alias_2_0,
		libs__handle_options__convert_options_to_globals_22_0_i271);
MR_def_label(libs__handle_options__convert_options_to_globals_22_0,271)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(libs__handle_options__convert_options_to_globals_22_0_i270);
	}
	MR_sv(6) = MR_r2;
	MR_r1 = MR_sv(8);
	MR_r2 = (MR_Integer) 144;
	MR_np_call_localret_ent(libs__globals__lookup_string_option_3_0,
		libs__handle_options__convert_options_to_globals_22_0_i273);
MR_def_label(libs__handle_options__convert_options_to_globals_22_0,273)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(6);
	MR_np_call_localret_ent(string__append_3_2,
		libs__handle_options__convert_options_to_globals_22_0_i274);
MR_def_label(libs__handle_options__convert_options_to_globals_22_0,274)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 3, (MR_Integer) 2);
	MR_tfield(3, MR_r2, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_r2, 1) = MR_r1;
	MR_r1 = (MR_Integer) 144;
	MR_r3 = MR_sv(8);
	MR_np_call_localret_ent(libs__globals__set_option_4_0,
		libs__handle_options__convert_options_to_globals_22_0_i276);
MR_def_label(libs__handle_options__convert_options_to_globals_22_0,276)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(12);
	MR_r4 = MR_r1;
	MR_r1 = (MR_Integer) 61;
	MR_r2 = (MR_Integer) 58;
	MR_GOTO_LAB(libs__handle_options__convert_options_to_globals_22_0_i277);
MR_def_label(libs__handle_options__convert_options_to_globals_22_0,270)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(12);
	MR_r4 = MR_sv(8);
	MR_r1 = (MR_Integer) 61;
	MR_r2 = (MR_Integer) 58;
MR_def_label(libs__handle_options__convert_options_to_globals_22_0,277)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(12) = MR_r3;
	MR_np_call_localret_ent(libs__handle_options__option_implies_5_0,
		libs__handle_options__convert_options_to_globals_22_0_i278);
MR_def_label(libs__handle_options__convert_options_to_globals_22_0,278)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r2 = (MR_Integer) 62;
	MR_np_call_localret_ent(libs__globals__lookup_int_option_3_0,
		libs__handle_options__convert_options_to_globals_22_0_i279);
MR_def_label(libs__handle_options__convert_options_to_globals_22_0,279)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_LE(MR_r1,0)) {
		MR_GOTO_LAB(libs__handle_options__convert_options_to_globals_22_0_i280);
	}
	MR_r1 = (MR_Integer) 58;
	MR_r2 = MR_sv(12);
	MR_r3 = MR_sv(6);
	MR_np_call_localret_ent(libs__globals__set_option_4_0,
		libs__handle_options__convert_options_to_globals_22_0_i281);
MR_def_label(libs__handle_options__convert_options_to_globals_22_0,281)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 356;
	MR_GOTO_LAB(libs__handle_options__convert_options_to_globals_22_0_i282);
MR_def_label(libs__handle_options__convert_options_to_globals_22_0,280)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(6);
	MR_r2 = (MR_Integer) 356;
MR_def_label(libs__handle_options__convert_options_to_globals_22_0,282)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_np_call_localret_ent(libs__globals__lookup_accumulating_option_3_0,
		libs__handle_options__convert_options_to_globals_22_0_i283);
MR_def_label(libs__handle_options__convert_options_to_globals_22_0,283)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(libs__handle_options__convert_options_to_globals_22_0_i285);
	}
	MR_r1 = MR_sv(6);
	MR_r2 = (MR_Integer) 68;
	MR_GOTO_LAB(libs__handle_options__convert_options_to_globals_22_0_i284);
MR_def_label(libs__handle_options__convert_options_to_globals_22_0,285)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 355;
	MR_r2 = MR_sv(12);
	MR_r3 = MR_sv(6);
	MR_np_call_localret_ent(libs__globals__set_option_4_0,
		libs__handle_options__convert_options_to_globals_22_0_i286);
MR_def_label(libs__handle_options__convert_options_to_globals_22_0,286)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 68;
MR_def_label(libs__handle_options__convert_options_to_globals_22_0,284)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_np_call_localret_ent(libs__globals__lookup_accumulating_option_3_0,
		libs__handle_options__convert_options_to_globals_22_0_i287);
MR_def_label(libs__handle_options__convert_options_to_globals_22_0,287)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r2 = (MR_Integer) 69;
	MR_np_call_localret_ent(libs__globals__lookup_accumulating_option_3_0,
		libs__handle_options__convert_options_to_globals_22_0_i288);
MR_def_label(libs__handle_options__convert_options_to_globals_22_0,288)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_sv(6),0,0)) {
		MR_GOTO_LAB(libs__handle_options__convert_options_to_globals_22_0_i292);
	}
	MR_r2 = MR_sv(12);
	MR_r3 = MR_sv(8);
	MR_GOTO_LAB(libs__handle_options__convert_options_to_globals_22_0_i291);
MR_def_label(libs__handle_options__convert_options_to_globals_22_0,292)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(libs__handle_options__convert_options_to_globals_22_0_i290);
	}
	MR_r2 = MR_sv(12);
	MR_r3 = MR_sv(8);
MR_def_label(libs__handle_options__convert_options_to_globals_22_0,291)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(12) = MR_r2;
	MR_r1 = (MR_Integer) 66;
	MR_np_call_localret_ent(libs__globals__set_option_4_0,
		libs__handle_options__convert_options_to_globals_22_0_i295);
MR_def_label(libs__handle_options__convert_options_to_globals_22_0,295)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 78;
	MR_GOTO_LAB(libs__handle_options__convert_options_to_globals_22_0_i296);
MR_def_label(libs__handle_options__convert_options_to_globals_22_0,290)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(8);
	MR_r2 = (MR_Integer) 78;
MR_def_label(libs__handle_options__convert_options_to_globals_22_0,296)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		libs__handle_options__convert_options_to_globals_22_0_i297);
MR_def_label(libs__handle_options__convert_options_to_globals_22_0,297)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(analysis__enable_debug_messages_3_0,
		libs__handle_options__convert_options_to_globals_22_0_i298);
MR_def_label(libs__handle_options__convert_options_to_globals_22_0,298)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(6);
	MR_r2 = (MR_Integer) 141;
	MR_np_call_localret_ent(libs__globals__lookup_accumulating_option_3_0,
		libs__handle_options__convert_options_to_globals_22_0_i299);
MR_def_label(libs__handle_options__convert_options_to_globals_22_0,299)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(libs__handle_options__convert_options_to_globals_22_0_i301);
	}
	MR_r3 = MR_sv(12);
	MR_r4 = MR_sv(6);
	MR_r1 = (MR_Integer) 77;
	MR_r2 = (MR_Integer) 152;
	MR_GOTO_LAB(libs__handle_options__convert_options_to_globals_22_0_i300);
MR_def_label(libs__handle_options__convert_options_to_globals_22_0,301)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(6);
	MR_r2 = (MR_Integer) 144;
	MR_np_call_localret_ent(libs__globals__lookup_string_option_3_0,
		libs__handle_options__convert_options_to_globals_22_0_i302);
MR_def_label(libs__handle_options__convert_options_to_globals_22_0,302)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("M", 1);
	MR_r3 = (MR_Word) MR_string_const("", 0);
	MR_np_call_localret_ent(string__replace_all_4_0,
		libs__handle_options__convert_options_to_globals_22_0_i303);
MR_def_label(libs__handle_options__convert_options_to_globals_22_0,303)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("T", 1);
	MR_r3 = (MR_Word) MR_string_const("", 0);
	MR_np_call_localret_ent(string__replace_all_4_0,
		libs__handle_options__convert_options_to_globals_22_0_i304);
MR_def_label(libs__handle_options__convert_options_to_globals_22_0,304)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 3, (MR_Integer) 2);
	MR_tfield(3, MR_r2, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_r2, 1) = MR_r1;
	MR_r1 = (MR_Integer) 144;
	MR_r3 = MR_sv(6);
	MR_np_call_localret_ent(libs__globals__set_option_4_0,
		libs__handle_options__convert_options_to_globals_22_0_i306);
MR_def_label(libs__handle_options__convert_options_to_globals_22_0,306)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(12);
	MR_r4 = MR_r1;
	MR_r1 = (MR_Integer) 77;
	MR_r2 = (MR_Integer) 152;
MR_def_label(libs__handle_options__convert_options_to_globals_22_0,300)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(12) = MR_r3;
	MR_np_call_localret_ent(libs__handle_options__option_implies_5_0,
		libs__handle_options__convert_options_to_globals_22_0_i307);
MR_def_label(libs__handle_options__convert_options_to_globals_22_0,307)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 152;
	MR_r2 = (MR_Integer) 150;
	MR_r3 = MR_sv(12);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(libs__handle_options__option_implies_5_0,
		libs__handle_options__convert_options_to_globals_22_0_i308);
MR_def_label(libs__handle_options__convert_options_to_globals_22_0,308)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 151;
	MR_r2 = (MR_Integer) 150;
	MR_r3 = MR_sv(12);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(libs__handle_options__option_implies_5_0,
		libs__handle_options__convert_options_to_globals_22_0_i309);
MR_def_label(libs__handle_options__convert_options_to_globals_22_0,309)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 135;
	MR_r2 = (MR_Integer) 134;
	MR_r3 = MR_sv(12);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(libs__handle_options__option_implies_5_0,
		libs__handle_options__convert_options_to_globals_22_0_i310);
MR_def_label(libs__handle_options__convert_options_to_globals_22_0,310)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(14) = MR_r1;
	MR_r2 = (MR_Integer) 214;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		libs__handle_options__convert_options_to_globals_22_0_i311);
MR_def_label(libs__handle_options__convert_options_to_globals_22_0,311)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(14);
	MR_r2 = (MR_Integer) 247;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		libs__handle_options__convert_options_to_globals_22_0_i312);
MR_def_label(libs__handle_options__convert_options_to_globals_22_0,312)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_r1 = MR_sv(14);
	MR_r2 = (MR_Integer) 216;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		libs__handle_options__convert_options_to_globals_22_0_i313);
MR_def_label(libs__handle_options__convert_options_to_globals_22_0,313)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(10) = MR_r1;
	MR_r1 = MR_sv(14);
	MR_r2 = (MR_Integer) 217;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		libs__handle_options__convert_options_to_globals_22_0_i314);
MR_def_label(libs__handle_options__convert_options_to_globals_22_0,314)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_r1;
	MR_r1 = MR_sv(10);
	MR_r2 = MR_sv(9);
	MR_np_call_localret_ent(bool__or_3_0,
		libs__handle_options__convert_options_to_globals_22_0_i315);
MR_def_label(libs__handle_options__convert_options_to_globals_22_0,315)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(10),1)) {
		MR_GOTO_LAB(libs__handle_options__convert_options_to_globals_22_0_i316);
	}
	if (MR_INT_NE(MR_sv(9),1)) {
		MR_GOTO_LAB(libs__handle_options__convert_options_to_globals_22_0_i316);
	}
	MR_r1 = (MR_Word) MR_string_const("can\'t use both forms of minimal model tabling at once", 53);
	MR_r2 = MR_sv(11);
	MR_np_call_localret_ent(libs__handle_options__add_error_3_0,
		libs__handle_options__convert_options_to_globals_22_0_i327);
MR_def_label(libs__handle_options__convert_options_to_globals_22_0,316)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(libs__handle_options__convert_options_to_globals_22_0_i320);
	}
	if (MR_INT_NE(MR_sv(8),1)) {
		MR_GOTO_LAB(libs__handle_options__convert_options_to_globals_22_0_i320);
	}
	MR_r1 = (MR_Word) MR_string_const("minimal model tabling is incompatible with high level code", 58);
	MR_r2 = MR_sv(11);
	MR_np_call_localret_ent(libs__handle_options__add_error_3_0,
		libs__handle_options__convert_options_to_globals_22_0_i327);
MR_def_label(libs__handle_options__convert_options_to_globals_22_0,320)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(libs__handle_options__convert_options_to_globals_22_0_i324);
	}
	if (MR_INT_NE(MR_sv(6),1)) {
		MR_GOTO_LAB(libs__handle_options__convert_options_to_globals_22_0_i324);
	}
	MR_r1 = (MR_Word) MR_string_const("minimal model tabling is incompatible with trailing", 51);
	MR_r2 = MR_sv(11);
	MR_np_call_localret_ent(libs__handle_options__add_error_3_0,
		libs__handle_options__convert_options_to_globals_22_0_i327);
MR_def_label(libs__handle_options__convert_options_to_globals_22_0,327)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(13);
	MR_r4 = MR_sv(14);
	MR_sv(9) = MR_r1;
	MR_r1 = (MR_Integer) 248;
	MR_r2 = (MR_Integer) 295;
	MR_GOTO_LAB(libs__handle_options__convert_options_to_globals_22_0_i330);
MR_def_label(libs__handle_options__convert_options_to_globals_22_0,324)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(13);
	MR_r4 = MR_sv(14);
	MR_sv(9) = MR_sv(11);
	MR_r1 = (MR_Integer) 248;
	MR_r2 = (MR_Integer) 295;
MR_def_label(libs__handle_options__convert_options_to_globals_22_0,330)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(13) = MR_r3;
	MR_np_call_localret_ent(libs__handle_options__option_implies_5_0,
		libs__handle_options__convert_options_to_globals_22_0_i331);
MR_def_label(libs__handle_options__convert_options_to_globals_22_0,331)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(1),0)) {
		MR_GOTO_LAB(libs__handle_options__convert_options_to_globals_22_0_i333);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 219;
	MR_r2 = (MR_Integer) 238;
	MR_r3 = MR_sv(12);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(libs__handle_options__option_implies_5_0,
		libs__handle_options__convert_options_to_globals_22_0_i334);
MR_def_label(libs__handle_options__convert_options_to_globals_22_0,334)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 247;
	MR_r2 = (MR_Integer) 246;
	MR_r3 = MR_sv(13);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(libs__handle_options__option_implies_5_0,
		libs__handle_options__convert_options_to_globals_22_0_i335);
MR_def_label(libs__handle_options__convert_options_to_globals_22_0,335)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 238;
	MR_r2 = (MR_Integer) 246;
	MR_r3 = MR_sv(13);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(libs__handle_options__option_implies_5_0,
		libs__handle_options__convert_options_to_globals_22_0_i336);
MR_def_label(libs__handle_options__convert_options_to_globals_22_0,336)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 247;
	MR_r2 = (MR_Integer) 269;
	MR_r3 = MR_sv(13);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(libs__handle_options__option_implies_5_0,
		libs__handle_options__convert_options_to_globals_22_0_i811);
MR_def_label(libs__handle_options__convert_options_to_globals_22_0,333)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 295;
	MR_r2 = MR_sv(13);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(libs__globals__set_option_4_0,
		libs__handle_options__convert_options_to_globals_22_0_i338);
MR_def_label(libs__handle_options__convert_options_to_globals_22_0,338)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 219;
	MR_r2 = (MR_Integer) 238;
	MR_r3 = MR_sv(12);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(libs__handle_options__option_implies_5_0,
		libs__handle_options__convert_options_to_globals_22_0_i339);
MR_def_label(libs__handle_options__convert_options_to_globals_22_0,339)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 247;
	MR_r2 = (MR_Integer) 246;
	MR_r3 = MR_sv(13);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(libs__handle_options__option_implies_5_0,
		libs__handle_options__convert_options_to_globals_22_0_i340);
MR_def_label(libs__handle_options__convert_options_to_globals_22_0,340)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 238;
	MR_r2 = (MR_Integer) 246;
	MR_r3 = MR_sv(13);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(libs__handle_options__option_implies_5_0,
		libs__handle_options__convert_options_to_globals_22_0_i341);
MR_def_label(libs__handle_options__convert_options_to_globals_22_0,341)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 247;
	MR_r2 = (MR_Integer) 269;
	MR_r3 = MR_sv(13);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(libs__handle_options__option_implies_5_0,
		libs__handle_options__convert_options_to_globals_22_0_i342);
MR_def_label(libs__handle_options__convert_options_to_globals_22_0,342)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(1),2)) {
		MR_GOTO_LAB(libs__handle_options__convert_options_to_globals_22_0_i344);
	}
	MR_r3 = MR_r1;
	MR_GOTO_LAB(libs__handle_options__convert_options_to_globals_22_0_i332);
MR_def_label(libs__handle_options__convert_options_to_globals_22_0,344)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(1),3)) {
		MR_GOTO_LAB(libs__handle_options__convert_options_to_globals_22_0_i345);
	}
MR_def_label(libs__handle_options__convert_options_to_globals_22_0,811)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_GOTO_LAB(libs__handle_options__convert_options_to_globals_22_0_i332);
MR_def_label(libs__handle_options__convert_options_to_globals_22_0,345)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 293;
	MR_r2 = MR_sv(13);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(libs__globals__set_option_4_0,
		libs__handle_options__convert_options_to_globals_22_0_i811);
MR_def_label(libs__handle_options__convert_options_to_globals_22_0,332)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_EQ(MR_sv(1),2)) {
		MR_GOTO_LAB(libs__handle_options__convert_options_to_globals_22_0_i348);
	}
	if (MR_INT_NE(MR_sv(1),3)) {
		MR_GOTO_LAB(libs__handle_options__convert_options_to_globals_22_0_i347);
	}
MR_def_label(libs__handle_options__convert_options_to_globals_22_0,348)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 434;
	MR_r2 = (MR_Word) MR_TAG_COMMON(2,5,2);
	MR_np_call_localret_ent(libs__globals__set_option_4_0,
		libs__handle_options__convert_options_to_globals_22_0_i352);
MR_def_label(libs__handle_options__convert_options_to_globals_22_0,352)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(13);
	MR_r4 = MR_r1;
	MR_r1 = (MR_Integer) 478;
	MR_r2 = (MR_Integer) 554;
	MR_GOTO_LAB(libs__handle_options__convert_options_to_globals_22_0_i353);
MR_def_label(libs__handle_options__convert_options_to_globals_22_0,347)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_r3 = MR_sv(13);
	MR_r4 = MR_tempr1;
	MR_r1 = (MR_Integer) 478;
	MR_r2 = (MR_Integer) 554;
	}
MR_def_label(libs__handle_options__convert_options_to_globals_22_0,353)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(13) = MR_r3;
	MR_np_call_localret_ent(libs__handle_options__option_implies_5_0,
		libs__handle_options__convert_options_to_globals_22_0_i354);
MR_def_label(libs__handle_options__convert_options_to_globals_22_0,354)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 204;
	MR_r2 = (MR_Integer) 195;
	MR_r3 = MR_sv(12);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(libs__handle_options__option_implies_5_0,
		libs__handle_options__convert_options_to_globals_22_0_i355);
MR_def_label(libs__handle_options__convert_options_to_globals_22_0,355)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 195;
	MR_r2 = (MR_Integer) 207;
	MR_r3 = MR_sv(13);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(libs__handle_options__option_implies_5_0,
		libs__handle_options__convert_options_to_globals_22_0_i356);
MR_def_label(libs__handle_options__convert_options_to_globals_22_0,356)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 204;
	MR_r2 = (MR_Integer) 124;
	MR_r3 = MR_sv(12);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(libs__handle_options__option_implies_5_0,
		libs__handle_options__convert_options_to_globals_22_0_i357);
MR_def_label(libs__handle_options__convert_options_to_globals_22_0,357)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r2 = (MR_Integer) 124;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		libs__handle_options__convert_options_to_globals_22_0_i358);
MR_def_label(libs__handle_options__convert_options_to_globals_22_0,358)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(libs__handle_options__convert_options_to_globals_22_0_i360);
	}
	MR_r1 = (MR_Integer) 191;
	MR_r2 = (MR_Integer) 331;
	MR_r3 = MR_sv(13);
	MR_r4 = MR_sv(6);
	MR_np_call_localret_ent(libs__handle_options__option_implies_5_0,
		libs__handle_options__convert_options_to_globals_22_0_i361);
MR_def_label(libs__handle_options__convert_options_to_globals_22_0,361)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(12);
	MR_r4 = MR_r1;
	MR_r1 = (MR_Integer) 191;
	MR_r2 = (MR_Integer) 193;
	MR_GOTO_LAB(libs__handle_options__convert_options_to_globals_22_0_i359);
MR_def_label(libs__handle_options__convert_options_to_globals_22_0,360)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(12);
	MR_r4 = MR_sv(6);
	MR_r1 = (MR_Integer) 191;
	MR_r2 = (MR_Integer) 193;
MR_def_label(libs__handle_options__convert_options_to_globals_22_0,359)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(12) = MR_r3;
	MR_np_call_localret_ent(libs__handle_options__option_implies_5_0,
		libs__handle_options__convert_options_to_globals_22_0_i362);
MR_def_label(libs__handle_options__convert_options_to_globals_22_0,362)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 208;
	MR_r2 = (MR_Integer) 193;
	MR_r3 = MR_sv(12);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(libs__handle_options__option_implies_5_0,
		libs__handle_options__convert_options_to_globals_22_0_i363);
MR_def_label(libs__handle_options__convert_options_to_globals_22_0,363)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 209;
	MR_r2 = (MR_Integer) 193;
	MR_r3 = MR_sv(12);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(libs__handle_options__option_implies_5_0,
		libs__handle_options__convert_options_to_globals_22_0_i364);
MR_def_label(libs__handle_options__convert_options_to_globals_22_0,364)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r2 = (MR_Integer) 210;
	MR_np_call_localret_ent(libs__globals__lookup_string_option_3_0,
		libs__handle_options__convert_options_to_globals_22_0_i365);
MR_def_label(libs__handle_options__convert_options_to_globals_22_0,365)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("", 0)) != 0)) {
		MR_GOTO_LAB(libs__handle_options__convert_options_to_globals_22_0_i366);
	}
	MR_r3 = MR_sv(12);
	MR_r4 = MR_sv(6);
	MR_r1 = (MR_Integer) 183;
	MR_r2 = (MR_Integer) 182;
	MR_GOTO_LAB(libs__handle_options__convert_options_to_globals_22_0_i369);
MR_def_label(libs__handle_options__convert_options_to_globals_22_0,366)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 331;
	MR_r2 = MR_sv(13);
	MR_r3 = MR_sv(6);
	MR_np_call_localret_ent(libs__globals__set_option_4_0,
		libs__handle_options__convert_options_to_globals_22_0_i368);
MR_def_label(libs__handle_options__convert_options_to_globals_22_0,368)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(12);
	MR_r4 = MR_r1;
	MR_r1 = (MR_Integer) 183;
	MR_r2 = (MR_Integer) 182;
MR_def_label(libs__handle_options__convert_options_to_globals_22_0,369)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(12) = MR_r3;
	MR_np_call_localret_ent(libs__handle_options__option_implies_5_0,
		libs__handle_options__convert_options_to_globals_22_0_i370);
MR_def_label(libs__handle_options__convert_options_to_globals_22_0,370)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 228;
	MR_r2 = (MR_Integer) 230;
	MR_r3 = MR_sv(12);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(libs__handle_options__option_implies_5_0,
		libs__handle_options__convert_options_to_globals_22_0_i371);
MR_def_label(libs__handle_options__convert_options_to_globals_22_0,371)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 182;
	MR_r2 = (MR_Integer) 259;
	MR_r3 = MR_sv(12);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(libs__handle_options__option_implies_5_0,
		libs__handle_options__convert_options_to_globals_22_0_i372);
MR_def_label(libs__handle_options__convert_options_to_globals_22_0,372)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 191;
	MR_r2 = (MR_Integer) 259;
	MR_r3 = MR_sv(12);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(libs__handle_options__option_implies_5_0,
		libs__handle_options__convert_options_to_globals_22_0_i373);
MR_def_label(libs__handle_options__convert_options_to_globals_22_0,373)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 191;
	MR_r2 = (MR_Integer) 314;
	MR_r3 = MR_sv(12);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(libs__handle_options__option_implies_5_0,
		libs__handle_options__convert_options_to_globals_22_0_i374);
MR_def_label(libs__handle_options__convert_options_to_globals_22_0,374)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 182;
	MR_r2 = (MR_Integer) 122;
	MR_r3 = MR_sv(12);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(libs__handle_options__option_implies_5_0,
		libs__handle_options__convert_options_to_globals_22_0_i375);
MR_def_label(libs__handle_options__convert_options_to_globals_22_0,375)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 122;
	MR_r2 = (MR_Integer) 118;
	MR_r3 = MR_sv(12);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(libs__handle_options__option_implies_5_0,
		libs__handle_options__convert_options_to_globals_22_0_i376);
MR_def_label(libs__handle_options__convert_options_to_globals_22_0,376)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 121;
	MR_r2 = (MR_Integer) 118;
	MR_r3 = MR_sv(12);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(libs__handle_options__option_implies_5_0,
		libs__handle_options__convert_options_to_globals_22_0_i377);
MR_def_label(libs__handle_options__convert_options_to_globals_22_0,377)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(11) = MR_r1;
	MR_r2 = (MR_Integer) 116;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		libs__handle_options__convert_options_to_globals_22_0_i378);
MR_def_label(libs__handle_options__convert_options_to_globals_22_0,378)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(fn__libs__trace_params__given_trace_level_is_none_1_0,
		libs__handle_options__convert_options_to_globals_22_0_i380);
MR_def_label(libs__handle_options__convert_options_to_globals_22_0,380)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(libs__handle_options__convert_options_to_globals_22_0_i379);
	}
	if (MR_INT_NE(MR_sv(6),0)) {
		MR_GOTO_LAB(libs__handle_options__convert_options_to_globals_22_0_i383);
	}
	MR_sv(6) = (MR_Word) MR_TAG_COMMON(1,5,0);
	MR_r1 = (MR_Integer) 331;
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(11);
	MR_np_call_localret_ent(libs__globals__set_option_4_0,
		libs__handle_options__convert_options_to_globals_22_0_i385);
MR_def_label(libs__handle_options__convert_options_to_globals_22_0,385)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 348;
	MR_r2 = MR_sv(6);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(libs__globals__set_option_4_0,
		libs__handle_options__convert_options_to_globals_22_0_i386);
MR_def_label(libs__handle_options__convert_options_to_globals_22_0,386)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 350;
	MR_r2 = MR_sv(6);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(libs__globals__set_option_4_0,
		libs__handle_options__convert_options_to_globals_22_0_i387);
MR_def_label(libs__handle_options__convert_options_to_globals_22_0,387)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 357;
	MR_r2 = MR_sv(6);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(libs__globals__set_option_4_0,
		libs__handle_options__convert_options_to_globals_22_0_i388);
MR_def_label(libs__handle_options__convert_options_to_globals_22_0,388)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 358;
	MR_r2 = MR_sv(6);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(libs__globals__set_option_4_0,
		libs__handle_options__convert_options_to_globals_22_0_i389);
MR_def_label(libs__handle_options__convert_options_to_globals_22_0,389)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 386;
	MR_r2 = MR_sv(6);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(libs__globals__set_option_4_0,
		libs__handle_options__convert_options_to_globals_22_0_i390);
MR_def_label(libs__handle_options__convert_options_to_globals_22_0,390)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 346;
	MR_r2 = MR_sv(6);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(libs__globals__set_option_4_0,
		libs__handle_options__convert_options_to_globals_22_0_i391);
MR_def_label(libs__handle_options__convert_options_to_globals_22_0,391)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 347;
	MR_r2 = MR_sv(6);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(libs__globals__set_option_4_0,
		libs__handle_options__convert_options_to_globals_22_0_i392);
MR_def_label(libs__handle_options__convert_options_to_globals_22_0,392)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 363;
	MR_r2 = MR_sv(6);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(libs__globals__set_option_4_0,
		libs__handle_options__convert_options_to_globals_22_0_i393);
MR_def_label(libs__handle_options__convert_options_to_globals_22_0,393)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 362;
	MR_r2 = MR_sv(6);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(libs__globals__set_option_4_0,
		libs__handle_options__convert_options_to_globals_22_0_i394);
MR_def_label(libs__handle_options__convert_options_to_globals_22_0,394)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 368;
	MR_r2 = MR_sv(6);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(libs__globals__set_option_4_0,
		libs__handle_options__convert_options_to_globals_22_0_i395);
MR_def_label(libs__handle_options__convert_options_to_globals_22_0,395)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 382;
	MR_r2 = MR_sv(6);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(libs__globals__set_option_4_0,
		libs__handle_options__convert_options_to_globals_22_0_i396);
MR_def_label(libs__handle_options__convert_options_to_globals_22_0,396)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 395;
	MR_r2 = MR_sv(6);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(libs__globals__set_option_4_0,
		libs__handle_options__convert_options_to_globals_22_0_i397);
MR_def_label(libs__handle_options__convert_options_to_globals_22_0,397)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 396;
	MR_r2 = MR_sv(6);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(libs__globals__set_option_4_0,
		libs__handle_options__convert_options_to_globals_22_0_i398);
MR_def_label(libs__handle_options__convert_options_to_globals_22_0,398)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(1),0)) {
		MR_GOTO_LAB(libs__handle_options__convert_options_to_globals_22_0_i400);
	}
	MR_r3 = MR_r1;
	MR_r2 = (MR_Word) MR_TAG_COMMON(1,5,0);
	MR_r1 = (MR_Integer) 447;
	MR_GOTO_LAB(libs__handle_options__convert_options_to_globals_22_0_i382);
MR_def_label(libs__handle_options__convert_options_to_globals_22_0,400)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(1),2)) {
		MR_GOTO_LAB(libs__handle_options__convert_options_to_globals_22_0_i402);
	}
	MR_r3 = MR_r1;
	MR_r2 = (MR_Word) MR_TAG_COMMON(1,5,0);
	MR_r1 = (MR_Integer) 447;
	MR_GOTO_LAB(libs__handle_options__convert_options_to_globals_22_0_i382);
MR_def_label(libs__handle_options__convert_options_to_globals_22_0,402)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(1),5)) {
		MR_GOTO_LAB(libs__handle_options__convert_options_to_globals_22_0_i404);
	}
MR_def_label(libs__handle_options__convert_options_to_globals_22_0,1044)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r2 = (MR_Word) MR_TAG_COMMON(1,5,0);
	MR_r1 = (MR_Integer) 447;
	MR_GOTO_LAB(libs__handle_options__convert_options_to_globals_22_0_i382);
MR_def_label(libs__handle_options__convert_options_to_globals_22_0,404)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(1),1)) {
		MR_GOTO_LAB(libs__handle_options__convert_options_to_globals_22_0_i1044);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 455;
	MR_r2 = MR_sv(6);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(libs__globals__set_option_4_0,
		libs__handle_options__convert_options_to_globals_22_0_i1044);
MR_def_label(libs__handle_options__convert_options_to_globals_22_0,383)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(11);
	MR_r2 = (MR_Word) MR_TAG_COMMON(1,5,0);
	MR_r1 = (MR_Integer) 447;
MR_def_label(libs__handle_options__convert_options_to_globals_22_0,382)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r2;
	MR_np_call_localret_ent(libs__globals__set_option_4_0,
		libs__handle_options__convert_options_to_globals_22_0_i413);
MR_def_label(libs__handle_options__convert_options_to_globals_22_0,413)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 365;
	MR_r2 = MR_sv(12);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(libs__globals__set_option_4_0,
		libs__handle_options__convert_options_to_globals_22_0_i414);
MR_def_label(libs__handle_options__convert_options_to_globals_22_0,414)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 384;
	MR_r2 = MR_sv(12);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(libs__globals__set_option_4_0,
		libs__handle_options__convert_options_to_globals_22_0_i415);
MR_def_label(libs__handle_options__convert_options_to_globals_22_0,415)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 445;
	MR_r2 = MR_sv(6);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(libs__globals__set_option_4_0,
		libs__handle_options__convert_options_to_globals_22_0_i416);
MR_def_label(libs__handle_options__convert_options_to_globals_22_0,416)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 263;
	MR_r2 = MR_sv(12);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(libs__globals__set_option_4_0,
		libs__handle_options__convert_options_to_globals_22_0_i417);
MR_def_label(libs__handle_options__convert_options_to_globals_22_0,417)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 264;
	MR_r2 = MR_sv(12);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(libs__globals__set_option_4_0,
		libs__handle_options__convert_options_to_globals_22_0_i418);
MR_def_label(libs__handle_options__convert_options_to_globals_22_0,418)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 319;
	MR_r2 = MR_sv(6);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(libs__globals__set_option_4_0,
		libs__handle_options__convert_options_to_globals_22_0_i419);
MR_def_label(libs__handle_options__convert_options_to_globals_22_0,419)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(fn__libs__trace_params__trace_level_allows_tail_rec_1_0,
		libs__handle_options__convert_options_to_globals_22_0_i421);
MR_def_label(libs__handle_options__convert_options_to_globals_22_0,421)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(libs__handle_options__convert_options_to_globals_22_0_i420);
	}
	MR_r1 = (MR_Integer) 125;
	MR_r2 = (MR_Word) MR_TAG_COMMON(1,5,0);
	MR_r3 = MR_sv(6);
	MR_np_call_localret_ent(libs__globals__set_option_4_0,
		libs__handle_options__convert_options_to_globals_22_0_i426);
MR_def_label(libs__handle_options__convert_options_to_globals_22_0,420)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(12);
	MR_r4 = MR_sv(6);
	MR_r1 = (MR_Integer) 191;
	MR_r2 = (MR_Integer) 262;
	MR_GOTO_LAB(libs__handle_options__convert_options_to_globals_22_0_i427);
MR_def_label(libs__handle_options__convert_options_to_globals_22_0,379)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 125;
	MR_r2 = MR_sv(13);
	MR_r3 = MR_sv(11);
	MR_np_call_localret_ent(libs__globals__set_option_4_0,
		libs__handle_options__convert_options_to_globals_22_0_i426);
MR_def_label(libs__handle_options__convert_options_to_globals_22_0,426)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(12);
	MR_r4 = MR_r1;
	MR_r1 = (MR_Integer) 191;
	MR_r2 = (MR_Integer) 262;
MR_def_label(libs__handle_options__convert_options_to_globals_22_0,427)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(12) = MR_r3;
	MR_np_call_localret_ent(libs__handle_options__option_implies_5_0,
		libs__handle_options__convert_options_to_globals_22_0_i428);
MR_def_label(libs__handle_options__convert_options_to_globals_22_0,428)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(11) = MR_r1;
	MR_r2 = (MR_Integer) 191;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		libs__handle_options__convert_options_to_globals_22_0_i429);
MR_def_label(libs__handle_options__convert_options_to_globals_22_0,429)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(libs__handle_options__convert_options_to_globals_22_0_i431);
	}
	MR_sv(6) = MR_r1;
	MR_r3 = MR_sv(11);
	MR_sv(11) = MR_sv(9);
	MR_r1 = MR_r3;
	MR_r2 = (MR_Integer) 208;
	MR_GOTO_LAB(libs__handle_options__convert_options_to_globals_22_0_i430);
MR_def_label(libs__handle_options__convert_options_to_globals_22_0,431)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(8),0)) {
		MR_GOTO_LAB(libs__handle_options__convert_options_to_globals_22_0_i432);
	}
	if (MR_INT_NE(MR_sv(1),0)) {
		MR_GOTO_LAB(libs__handle_options__convert_options_to_globals_22_0_i432);
	}
	MR_sv(6) = MR_r1;
	MR_r2 = MR_sv(13);
	MR_r3 = MR_sv(11);
	MR_sv(11) = MR_sv(9);
	MR_r1 = (MR_Integer) 362;
	MR_GOTO_LAB(libs__handle_options__convert_options_to_globals_22_0_i436);
MR_def_label(libs__handle_options__convert_options_to_globals_22_0,432)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("deep profiling is incompatible with high level code", 51);
	MR_r2 = MR_sv(9);
	MR_np_call_localret_ent(libs__handle_options__add_error_3_0,
		libs__handle_options__convert_options_to_globals_22_0_i435);
MR_def_label(libs__handle_options__convert_options_to_globals_22_0,435)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(13);
	MR_r3 = MR_sv(11);
	MR_sv(11) = MR_r1;
	MR_r1 = (MR_Integer) 362;
MR_def_label(libs__handle_options__convert_options_to_globals_22_0,436)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(13) = MR_r2;
	MR_np_call_localret_ent(libs__globals__set_option_4_0,
		libs__handle_options__convert_options_to_globals_22_0_i437);
MR_def_label(libs__handle_options__convert_options_to_globals_22_0,437)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_r1;
	MR_r2 = (MR_Integer) 206;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		libs__handle_options__convert_options_to_globals_22_0_i438);
MR_def_label(libs__handle_options__convert_options_to_globals_22_0,438)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(libs__handle_options__convert_options_to_globals_22_0_i440);
	}
	MR_r1 = MR_sv(9);
	MR_r2 = (MR_Integer) 208;
	MR_GOTO_LAB(libs__handle_options__convert_options_to_globals_22_0_i430);
MR_def_label(libs__handle_options__convert_options_to_globals_22_0,440)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 350;
	MR_r2 = MR_sv(12);
	MR_r3 = MR_sv(9);
	MR_np_call_localret_ent(libs__globals__set_option_4_0,
		libs__handle_options__convert_options_to_globals_22_0_i441);
MR_def_label(libs__handle_options__convert_options_to_globals_22_0,441)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 351;
	MR_r2 = (MR_Word) MR_TAG_COMMON(2,5,2);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(libs__globals__set_option_4_0,
		libs__handle_options__convert_options_to_globals_22_0_i443);
MR_def_label(libs__handle_options__convert_options_to_globals_22_0,443)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 208;
MR_def_label(libs__handle_options__convert_options_to_globals_22_0,430)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(14) = MR_r1;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		libs__handle_options__convert_options_to_globals_22_0_i444);
MR_def_label(libs__handle_options__convert_options_to_globals_22_0,444)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_r1;
	MR_r1 = MR_sv(14);
	MR_r2 = (MR_Integer) 209;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		libs__handle_options__convert_options_to_globals_22_0_i445);
MR_def_label(libs__handle_options__convert_options_to_globals_22_0,445)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(9),1)) {
		MR_GOTO_LAB(libs__handle_options__convert_options_to_globals_22_0_i446);
	}
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(libs__handle_options__convert_options_to_globals_22_0_i446);
	}
	MR_r1 = (MR_Word) MR_string_const("we can\'t record term size as both words and cells", 49);
	MR_r2 = MR_sv(11);
	MR_np_call_localret_ent(libs__handle_options__add_error_3_0,
		libs__handle_options__convert_options_to_globals_22_0_i449);
MR_def_label(libs__handle_options__convert_options_to_globals_22_0,449)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(13);
	MR_r4 = MR_sv(14);
	MR_GOTO_LAB(libs__handle_options__convert_options_to_globals_22_0_i461);
MR_def_label(libs__handle_options__convert_options_to_globals_22_0,446)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(9),1)) {
		MR_GOTO_LAB(libs__handle_options__convert_options_to_globals_22_0_i453);
	}
	MR_r2 = MR_sv(13);
	MR_r3 = MR_sv(14);
	MR_GOTO_LAB(libs__handle_options__convert_options_to_globals_22_0_i452);
MR_def_label(libs__handle_options__convert_options_to_globals_22_0,453)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(libs__handle_options__convert_options_to_globals_22_0_i451);
	}
	MR_r2 = MR_sv(13);
	MR_r3 = MR_sv(14);
MR_def_label(libs__handle_options__convert_options_to_globals_22_0,452)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(13) = MR_r2;
	MR_r1 = (MR_Integer) 362;
	MR_np_call_localret_ent(libs__globals__set_option_4_0,
		libs__handle_options__convert_options_to_globals_22_0_i456);
MR_def_label(libs__handle_options__convert_options_to_globals_22_0,456)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(8),0)) {
		MR_GOTO_LAB(libs__handle_options__convert_options_to_globals_22_0_i458);
	}
	MR_r3 = MR_sv(13);
	MR_r5 = MR_r1;
	MR_r1 = MR_sv(11);
	MR_r4 = MR_r5;
	MR_GOTO_LAB(libs__handle_options__convert_options_to_globals_22_0_i461);
MR_def_label(libs__handle_options__convert_options_to_globals_22_0,458)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("term size profiling is incompatible with high level code", 56);
	MR_r2 = MR_sv(11);
	MR_np_call_localret_ent(libs__handle_options__add_error_3_0,
		libs__handle_options__convert_options_to_globals_22_0_i459);
MR_def_label(libs__handle_options__convert_options_to_globals_22_0,459)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(13);
	MR_r4 = MR_sv(9);
	MR_GOTO_LAB(libs__handle_options__convert_options_to_globals_22_0_i461);
MR_def_label(libs__handle_options__convert_options_to_globals_22_0,451)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(13);
	MR_r1 = MR_sv(11);
	MR_r4 = MR_sv(14);
MR_def_label(libs__handle_options__convert_options_to_globals_22_0,461)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(1),0)) {
		MR_GOTO_LAB(libs__handle_options__convert_options_to_globals_22_0_i467);
	}
	if (MR_INT_NE(MR_sv(8),0)) {
		MR_GOTO_LAB(libs__handle_options__convert_options_to_globals_22_0_i465);
	}
	MR_GOTO_LAB(libs__handle_options__convert_options_to_globals_22_0_i466);
MR_def_label(libs__handle_options__convert_options_to_globals_22_0,467)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(1),1)) {
		MR_GOTO_LAB(libs__handle_options__convert_options_to_globals_22_0_i465);
	}
MR_def_label(libs__handle_options__convert_options_to_globals_22_0,466)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_GOTO_LAB(libs__handle_options__convert_options_to_globals_22_0_i464);
MR_def_label(libs__handle_options__convert_options_to_globals_22_0,465)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(13) = MR_r3;
	MR_r2 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_sv(9) = MR_r4;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__libs__trace_params__given_trace_level_is_none_1_0,
		libs__handle_options__convert_options_to_globals_22_0_i470);
MR_def_label(libs__handle_options__convert_options_to_globals_22_0,470)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(libs__handle_options__convert_options_to_globals_22_0_i462);
	}
	MR_r3 = MR_sv(13);
	MR_r4 = MR_sv(9);
MR_def_label(libs__handle_options__convert_options_to_globals_22_0,464)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(14) = MR_sv(3);
	MR_r1 = (MR_Integer) 212;
	MR_r2 = (MR_Integer) 484;
	MR_GOTO_LAB(libs__handle_options__convert_options_to_globals_22_0_i473);
MR_def_label(libs__handle_options__convert_options_to_globals_22_0,462)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_sv(13);
	MR_r1 = MR_sv(3);
	MR_tempr2 = MR_sv(9);
	MR_tempr3 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("debugging is available only in low level C grades", 49);
	MR_r2 = MR_tempr3;
	}
	MR_np_call_localret_ent(libs__handle_options__add_error_3_0,
		libs__handle_options__convert_options_to_globals_22_0_i472);
MR_def_label(libs__handle_options__convert_options_to_globals_22_0,472)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(13);
	MR_r4 = MR_sv(9);
	MR_sv(14) = MR_r1;
	MR_r1 = (MR_Integer) 212;
	MR_r2 = (MR_Integer) 484;
MR_def_label(libs__handle_options__convert_options_to_globals_22_0,473)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(13) = MR_r3;
	MR_np_call_localret_ent(libs__handle_options__option_implies_5_0,
		libs__handle_options__convert_options_to_globals_22_0_i474);
MR_def_label(libs__handle_options__convert_options_to_globals_22_0,474)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 334;
	MR_r2 = (MR_Integer) 364;
	MR_r3 = MR_sv(13);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(libs__handle_options__option_neg_implies_5_0,
		libs__handle_options__convert_options_to_globals_22_0_i475);
MR_def_label(libs__handle_options__convert_options_to_globals_22_0,475)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(6),0)) {
		MR_GOTO_LAB(libs__handle_options__convert_options_to_globals_22_0_i477);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 331;
	MR_r2 = (MR_Integer) 364;
	MR_r3 = MR_sv(13);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(libs__handle_options__option_neg_implies_5_0,
		libs__handle_options__convert_options_to_globals_22_0_i477);
MR_def_label(libs__handle_options__convert_options_to_globals_22_0,477)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(13);
	MR_r4 = MR_r1;
	MR_r1 = (MR_Integer) 157;
	MR_r2 = (MR_Integer) 386;
	MR_np_call_localret_ent(libs__handle_options__option_neg_implies_5_0,
		libs__handle_options__convert_options_to_globals_22_0_i479);
MR_def_label(libs__handle_options__convert_options_to_globals_22_0,479)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 157;
	MR_r2 = (MR_Integer) 346;
	MR_r3 = MR_sv(13);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(libs__handle_options__option_neg_implies_5_0,
		libs__handle_options__convert_options_to_globals_22_0_i480);
MR_def_label(libs__handle_options__convert_options_to_globals_22_0,480)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 157;
	MR_r2 = (MR_Integer) 347;
	MR_r3 = MR_sv(13);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(libs__handle_options__option_neg_implies_5_0,
		libs__handle_options__convert_options_to_globals_22_0_i481);
MR_def_label(libs__handle_options__convert_options_to_globals_22_0,481)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 259;
	MR_r2 = (MR_Integer) 262;
	MR_r3 = MR_sv(12);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(libs__handle_options__option_implies_5_0,
		libs__handle_options__convert_options_to_globals_22_0_i482);
MR_def_label(libs__handle_options__convert_options_to_globals_22_0,482)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 263;
	MR_r2 = (MR_Integer) 262;
	MR_r3 = MR_sv(12);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(libs__handle_options__option_implies_5_0,
		libs__handle_options__convert_options_to_globals_22_0_i483);
MR_def_label(libs__handle_options__convert_options_to_globals_22_0,483)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(2),6)) {
		MR_GOTO_LAB(libs__handle_options__convert_options_to_globals_22_0_i485);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 261;
	MR_r2 = MR_sv(12);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(libs__globals__set_option_4_0,
		libs__handle_options__convert_options_to_globals_22_0_i486);
MR_def_label(libs__handle_options__convert_options_to_globals_22_0,486)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 264;
	MR_r2 = MR_sv(12);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(libs__globals__set_option_4_0,
		libs__handle_options__convert_options_to_globals_22_0_i487);
MR_def_label(libs__handle_options__convert_options_to_globals_22_0,487)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 447;
	MR_r2 = MR_sv(13);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(libs__globals__set_option_4_0,
		libs__handle_options__convert_options_to_globals_22_0_i488);
MR_def_label(libs__handle_options__convert_options_to_globals_22_0,488)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 467;
	MR_r2 = MR_sv(13);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(libs__globals__set_option_4_0,
		libs__handle_options__convert_options_to_globals_22_0_i489);
MR_def_label(libs__handle_options__convert_options_to_globals_22_0,489)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 319;
	MR_r2 = MR_sv(13);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(libs__globals__set_option_4_0,
		libs__handle_options__convert_options_to_globals_22_0_i490);
MR_def_label(libs__handle_options__convert_options_to_globals_22_0,490)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 445;
	MR_r2 = MR_sv(13);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(libs__globals__set_option_4_0,
		libs__handle_options__convert_options_to_globals_22_0_i491);
MR_def_label(libs__handle_options__convert_options_to_globals_22_0,491)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 303;
	MR_r2 = MR_sv(13);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(libs__globals__set_option_4_0,
		libs__handle_options__convert_options_to_globals_22_0_i492);
MR_def_label(libs__handle_options__convert_options_to_globals_22_0,492)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 304;
	MR_r2 = MR_sv(13);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(libs__globals__set_option_4_0,
		libs__handle_options__convert_options_to_globals_22_0_i493);
MR_def_label(libs__handle_options__convert_options_to_globals_22_0,493)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 362;
	MR_r2 = MR_sv(13);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(libs__globals__set_option_4_0,
		libs__handle_options__convert_options_to_globals_22_0_i494);
MR_def_label(libs__handle_options__convert_options_to_globals_22_0,494)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 357;
	MR_r2 = MR_sv(13);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(libs__globals__set_option_4_0,
		libs__handle_options__convert_options_to_globals_22_0_i495);
MR_def_label(libs__handle_options__convert_options_to_globals_22_0,495)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 358;
	MR_r2 = MR_sv(13);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(libs__globals__set_option_4_0,
		libs__handle_options__convert_options_to_globals_22_0_i1280);
MR_def_label(libs__handle_options__convert_options_to_globals_22_0,485)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(2),0)) {
		MR_GOTO_LAB(libs__handle_options__convert_options_to_globals_22_0_i497);
	}
	MR_r2 = (MR_Integer) 253;
	MR_GOTO_LAB(libs__handle_options__convert_options_to_globals_22_0_i484);
MR_def_label(libs__handle_options__convert_options_to_globals_22_0,497)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(2),2)) {
		MR_GOTO_LAB(libs__handle_options__convert_options_to_globals_22_0_i498);
	}
	MR_r2 = (MR_Integer) 253;
	MR_GOTO_LAB(libs__handle_options__convert_options_to_globals_22_0_i484);
MR_def_label(libs__handle_options__convert_options_to_globals_22_0,498)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(2),3)) {
		MR_GOTO_LAB(libs__handle_options__convert_options_to_globals_22_0_i1280);
	}
MR_def_label(libs__handle_options__convert_options_to_globals_22_0,1280)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 253;
	MR_GOTO_LAB(libs__handle_options__convert_options_to_globals_22_0_i484);
MR_def_label(libs__handle_options__convert_options_to_globals_22_0,484)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		libs__handle_options__convert_options_to_globals_22_0_i502);
MR_def_label(libs__handle_options__convert_options_to_globals_22_0,502)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = (MR_Integer) 262;
	MR_r2 = (MR_Integer) 260;
	MR_r3 = MR_sv(12);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(libs__handle_options__option_implies_5_0,
		libs__handle_options__convert_options_to_globals_22_0_i503);
MR_def_label(libs__handle_options__convert_options_to_globals_22_0,503)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 261;
	MR_r2 = (MR_Integer) 260;
	MR_r3 = MR_sv(12);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(libs__handle_options__option_implies_5_0,
		libs__handle_options__convert_options_to_globals_22_0_i504);
MR_def_label(libs__handle_options__convert_options_to_globals_22_0,504)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 262;
	MR_r2 = (MR_Integer) 465;
	MR_r3 = MR_sv(13);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(libs__handle_options__option_implies_5_0,
		libs__handle_options__convert_options_to_globals_22_0_i505);
MR_def_label(libs__handle_options__convert_options_to_globals_22_0,505)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 261;
	MR_r2 = (MR_Integer) 465;
	MR_r3 = MR_sv(13);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(libs__handle_options__option_implies_5_0,
		libs__handle_options__convert_options_to_globals_22_0_i506);
MR_def_label(libs__handle_options__convert_options_to_globals_22_0,506)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 260;
	MR_r2 = (MR_Integer) 463;
	MR_r3 = MR_sv(13);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(libs__handle_options__option_implies_5_0,
		libs__handle_options__convert_options_to_globals_22_0_i507);
MR_def_label(libs__handle_options__convert_options_to_globals_22_0,507)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 264;
	MR_r2 = (MR_Integer) 386;
	MR_r3 = MR_sv(13);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(libs__handle_options__option_implies_5_0,
		libs__handle_options__convert_options_to_globals_22_0_i508);
MR_def_label(libs__handle_options__convert_options_to_globals_22_0,508)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 264;
	MR_r2 = (MR_Integer) 346;
	MR_r3 = MR_sv(13);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(libs__handle_options__option_implies_5_0,
		libs__handle_options__convert_options_to_globals_22_0_i509);
MR_def_label(libs__handle_options__convert_options_to_globals_22_0,509)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 214;
	MR_r2 = (MR_Integer) 445;
	MR_r3 = MR_sv(13);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(libs__handle_options__option_implies_5_0,
		libs__handle_options__convert_options_to_globals_22_0_i510);
MR_def_label(libs__handle_options__convert_options_to_globals_22_0,510)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 223;
	MR_r2 = (MR_Integer) 445;
	MR_r3 = MR_sv(13);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(libs__handle_options__option_implies_5_0,
		libs__handle_options__convert_options_to_globals_22_0_i511);
MR_def_label(libs__handle_options__convert_options_to_globals_22_0,511)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 216;
	MR_r2 = (MR_Integer) 447;
	MR_r3 = MR_sv(13);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(libs__handle_options__option_implies_5_0,
		libs__handle_options__convert_options_to_globals_22_0_i512);
MR_def_label(libs__handle_options__convert_options_to_globals_22_0,512)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_r1;
	MR_r2 = (MR_Integer) 278;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		libs__handle_options__convert_options_to_globals_22_0_i513);
MR_def_label(libs__handle_options__convert_options_to_globals_22_0,513)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(9);
	MR_r2 = (MR_Integer) 279;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		libs__handle_options__convert_options_to_globals_22_0_i514);
MR_def_label(libs__handle_options__convert_options_to_globals_22_0,514)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(10),1)) {
		MR_GOTO_LAB(libs__handle_options__convert_options_to_globals_22_0_i515);
	}
	if (MR_INT_NE(MR_sv(6),0)) {
		MR_GOTO_LAB(libs__handle_options__convert_options_to_globals_22_0_i515);
	}
	MR_sv(6) = MR_r1;
	MR_r1 = (MR_Integer) 280;
	MR_r2 = (MR_Word) MR_TAG_COMMON(1,5,1);
	MR_r3 = MR_sv(9);
	MR_np_call_localret_ent(libs__globals__set_option_4_0,
		libs__handle_options__convert_options_to_globals_22_0_i519);
MR_def_label(libs__handle_options__convert_options_to_globals_22_0,519)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_GOTO_LAB(libs__handle_options__convert_options_to_globals_22_0_i520);
MR_def_label(libs__handle_options__convert_options_to_globals_22_0,515)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r3 = MR_sv(9);
MR_def_label(libs__handle_options__convert_options_to_globals_22_0,520)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(10),1)) {
		MR_GOTO_LAB(libs__handle_options__convert_options_to_globals_22_0_i521);
	}
	if (MR_INT_NE(MR_sv(6),0)) {
		MR_GOTO_LAB(libs__handle_options__convert_options_to_globals_22_0_i521);
	}
	MR_r1 = (MR_Integer) 281;
	MR_r2 = (MR_Word) MR_TAG_COMMON(1,5,1);
	MR_np_call_localret_ent(libs__globals__set_option_4_0,
		libs__handle_options__convert_options_to_globals_22_0_i525);
MR_def_label(libs__handle_options__convert_options_to_globals_22_0,525)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 140;
	MR_GOTO_LAB(libs__handle_options__convert_options_to_globals_22_0_i526);
MR_def_label(libs__handle_options__convert_options_to_globals_22_0,521)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r3;
	MR_r2 = (MR_Integer) 140;
MR_def_label(libs__handle_options__convert_options_to_globals_22_0,526)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(11) = MR_r1;
	MR_np_call_localret_ent(libs__globals__lookup_accumulating_option_3_0,
		libs__handle_options__convert_options_to_globals_22_0_i527);
MR_def_label(libs__handle_options__convert_options_to_globals_22_0,527)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(11);
	MR_r2 = (MR_Integer) 139;
	MR_np_call_localret_ent(libs__globals__lookup_accumulating_option_3_0,
		libs__handle_options__convert_options_to_globals_22_0_i528);
MR_def_label(libs__handle_options__convert_options_to_globals_22_0,528)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(10) = MR_r1;
	MR_r1 = MR_sv(11);
	MR_r2 = (MR_Integer) 299;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		libs__handle_options__convert_options_to_globals_22_0_i529);
MR_def_label(libs__handle_options__convert_options_to_globals_22_0,529)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_r1;
	MR_r1 = MR_sv(11);
	MR_r2 = (MR_Integer) 300;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		libs__handle_options__convert_options_to_globals_22_0_i530);
MR_def_label(libs__handle_options__convert_options_to_globals_22_0,530)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_sv(6),0,0)) {
		MR_GOTO_LAB(libs__handle_options__convert_options_to_globals_22_0_i534);
	}
	MR_r2 = MR_sv(13);
	MR_r3 = MR_sv(11);
	MR_GOTO_LAB(libs__handle_options__convert_options_to_globals_22_0_i533);
MR_def_label(libs__handle_options__convert_options_to_globals_22_0,534)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_sv(10),0,0)) {
		MR_GOTO_LAB(libs__handle_options__convert_options_to_globals_22_0_i536);
	}
	MR_r2 = MR_sv(13);
	MR_r3 = MR_sv(11);
	MR_GOTO_LAB(libs__handle_options__convert_options_to_globals_22_0_i533);
MR_def_label(libs__handle_options__convert_options_to_globals_22_0,536)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(7),1)) {
		MR_GOTO_LAB(libs__handle_options__convert_options_to_globals_22_0_i538);
	}
	MR_r2 = MR_sv(13);
	MR_r3 = MR_sv(11);
	MR_GOTO_LAB(libs__handle_options__convert_options_to_globals_22_0_i533);
MR_def_label(libs__handle_options__convert_options_to_globals_22_0,538)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(9),1)) {
		MR_GOTO_LAB(libs__handle_options__convert_options_to_globals_22_0_i540);
	}
	MR_r2 = MR_sv(13);
	MR_r3 = MR_sv(11);
	MR_GOTO_LAB(libs__handle_options__convert_options_to_globals_22_0_i533);
MR_def_label(libs__handle_options__convert_options_to_globals_22_0,540)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(libs__handle_options__convert_options_to_globals_22_0_i532);
	}
	MR_r2 = MR_sv(13);
	MR_r3 = MR_sv(11);
MR_def_label(libs__handle_options__convert_options_to_globals_22_0,533)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(13) = MR_r2;
	MR_r1 = (MR_Integer) 298;
	MR_np_call_localret_ent(libs__globals__set_option_4_0,
		libs__handle_options__convert_options_to_globals_22_0_i543);
MR_def_label(libs__handle_options__convert_options_to_globals_22_0,543)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(12);
	MR_r4 = MR_r1;
	MR_r1 = (MR_Integer) 357;
	MR_r2 = (MR_Integer) 358;
	MR_GOTO_LAB(libs__handle_options__convert_options_to_globals_22_0_i544);
MR_def_label(libs__handle_options__convert_options_to_globals_22_0,532)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(12);
	MR_r4 = MR_sv(11);
	MR_r1 = (MR_Integer) 357;
	MR_r2 = (MR_Integer) 358;
MR_def_label(libs__handle_options__convert_options_to_globals_22_0,544)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(12) = MR_r3;
	MR_np_call_localret_ent(libs__handle_options__option_implies_5_0,
		libs__handle_options__convert_options_to_globals_22_0_i545);
MR_def_label(libs__handle_options__convert_options_to_globals_22_0,545)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 346;
	MR_r2 = (MR_Integer) 347;
	MR_r3 = MR_sv(12);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(libs__handle_options__option_implies_5_0,
		libs__handle_options__convert_options_to_globals_22_0_i546);
MR_def_label(libs__handle_options__convert_options_to_globals_22_0,546)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 349;
	MR_r2 = (MR_Integer) 323;
	MR_r3 = MR_sv(12);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(libs__handle_options__option_implies_5_0,
		libs__handle_options__convert_options_to_globals_22_0_i547);
MR_def_label(libs__handle_options__convert_options_to_globals_22_0,547)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 349;
	MR_r2 = (MR_Integer) 348;
	MR_r3 = MR_sv(12);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(libs__handle_options__option_implies_5_0,
		libs__handle_options__convert_options_to_globals_22_0_i548);
MR_def_label(libs__handle_options__convert_options_to_globals_22_0,548)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 359;
	MR_r2 = (MR_Integer) 365;
	MR_r3 = MR_sv(12);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(libs__handle_options__option_implies_5_0,
		libs__handle_options__convert_options_to_globals_22_0_i549);
MR_def_label(libs__handle_options__convert_options_to_globals_22_0,549)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 359;
	MR_r2 = (MR_Integer) 343;
	MR_r3 = MR_sv(12);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(libs__handle_options__option_implies_5_0,
		libs__handle_options__convert_options_to_globals_22_0_i550);
MR_def_label(libs__handle_options__convert_options_to_globals_22_0,550)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 85;
	MR_r2 = (MR_Integer) 348;
	MR_r3 = MR_sv(13);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(libs__handle_options__option_implies_5_0,
		libs__handle_options__convert_options_to_globals_22_0_i551);
MR_def_label(libs__handle_options__convert_options_to_globals_22_0,551)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 391;
	MR_r2 = (MR_Integer) 392;
	MR_r3 = MR_sv(12);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(libs__handle_options__option_implies_5_0,
		libs__handle_options__convert_options_to_globals_22_0_i552);
MR_def_label(libs__handle_options__convert_options_to_globals_22_0,552)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 92;
	MR_r2 = (MR_Integer) 91;
	MR_r3 = MR_sv(12);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(libs__handle_options__option_implies_5_0,
		libs__handle_options__convert_options_to_globals_22_0_i553);
MR_def_label(libs__handle_options__convert_options_to_globals_22_0,553)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 138;
	MR_r2 = (MR_Integer) 91;
	MR_r3 = MR_sv(12);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(libs__handle_options__option_implies_5_0,
		libs__handle_options__convert_options_to_globals_22_0_i554);
MR_def_label(libs__handle_options__convert_options_to_globals_22_0,554)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 89;
	MR_r2 = (MR_Integer) 22;
	MR_r3 = MR_sv(13);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(libs__handle_options__option_implies_5_0,
		libs__handle_options__convert_options_to_globals_22_0_i555);
MR_def_label(libs__handle_options__convert_options_to_globals_22_0,555)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(10) = MR_r1;
	MR_r2 = (MR_Integer) 648;
	MR_np_call_localret_ent(libs__globals__lookup_string_option_3_0,
		libs__handle_options__convert_options_to_globals_22_0_i556);
MR_def_label(libs__handle_options__convert_options_to_globals_22_0,556)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_r1 = MR_sv(10);
	MR_r2 = (MR_Integer) 545;
	MR_np_call_localret_ent(libs__globals__lookup_maybe_string_option_3_0,
		libs__handle_options__convert_options_to_globals_22_0_i557);
MR_def_label(libs__handle_options__convert_options_to_globals_22_0,557)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(libs__handle_options__convert_options_to_globals_22_0_i559);
	}
	MR_r1 = MR_sv(10);
	MR_r2 = (MR_Integer) 618;
	MR_GOTO_LAB(libs__handle_options__convert_options_to_globals_22_0_i558);
MR_def_label(libs__handle_options__convert_options_to_globals_22_0,559)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_tfield(1, MR_r1, 0);
	MR_r1 = MR_sv(10);
	MR_np_call_localret_ent(libs__globals__get_options_2_0,
		libs__handle_options__convert_options_to_globals_22_0_i560);
MR_def_label(libs__handle_options__convert_options_to_globals_22_0,560)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(6);
	MR_np_call_localret_ent(fn__libs__options__option_table_add_mercury_library_directory_2_0,
		libs__handle_options__convert_options_to_globals_22_0_i561);
MR_def_label(libs__handle_options__convert_options_to_globals_22_0,561)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(10);
	MR_np_call_localret_ent(libs__globals__set_options_3_0,
		libs__handle_options__convert_options_to_globals_22_0_i562);
MR_def_label(libs__handle_options__convert_options_to_globals_22_0,562)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_r1;
	MR_r2 = (MR_Integer) 535;
	MR_np_call_localret_ent(libs__globals__lookup_accumulating_option_3_0,
		libs__handle_options__convert_options_to_globals_22_0_i563);
MR_def_label(libs__handle_options__convert_options_to_globals_22_0,563)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(10) = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = (MR_Word) MR_string_const("lib", 3);
	MR_np_call_localret_ent(fn__f_100_105_114_95_95_47_2_0,
		libs__handle_options__convert_options_to_globals_22_0_i564);
MR_def_label(libs__handle_options__convert_options_to_globals_22_0,564)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = MR_sv(10);
	MR_tag_alloc_heap(MR_r2, 3, (MR_Integer) 2);
	MR_tfield(3, MR_r2, 0) = (MR_Integer) 3;
	MR_tfield(3, MR_r2, 1) = MR_tempr1;
	MR_r1 = (MR_Integer) 535;
	MR_r3 = MR_sv(9);
	}
	MR_np_call_localret_ent(libs__globals__set_option_4_0,
		libs__handle_options__convert_options_to_globals_22_0_i567);
MR_def_label(libs__handle_options__convert_options_to_globals_22_0,567)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(10) = MR_r1;
	MR_r2 = (MR_Integer) 536;
	MR_np_call_localret_ent(libs__globals__lookup_accumulating_option_3_0,
		libs__handle_options__convert_options_to_globals_22_0_i568);
MR_def_label(libs__handle_options__convert_options_to_globals_22_0,568)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(6);
	MR_sv(6) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Word) MR_string_const("lib", 3);
	}
	MR_np_call_localret_ent(fn__f_100_105_114_95_95_47_2_0,
		libs__handle_options__convert_options_to_globals_22_0_i569);
MR_def_label(libs__handle_options__convert_options_to_globals_22_0,569)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = MR_sv(6);
	MR_tag_alloc_heap(MR_r2, 3, (MR_Integer) 2);
	MR_tfield(3, MR_r2, 0) = (MR_Integer) 3;
	MR_tfield(3, MR_r2, 1) = MR_tempr1;
	MR_r1 = (MR_Integer) 536;
	MR_r3 = MR_sv(10);
	}
	MR_np_call_localret_ent(libs__globals__set_option_4_0,
		libs__handle_options__convert_options_to_globals_22_0_i572);
MR_def_label(libs__handle_options__convert_options_to_globals_22_0,572)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 618;
MR_def_label(libs__handle_options__convert_options_to_globals_22_0,558)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_r1;
	MR_np_call_localret_ent(libs__globals__lookup_maybe_string_option_3_0,
		libs__handle_options__convert_options_to_globals_22_0_i573);
MR_def_label(libs__handle_options__convert_options_to_globals_22_0,573)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(libs__handle_options__convert_options_to_globals_22_0_i575);
	}
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(9);
	MR_r2 = (MR_Integer) 628;
	MR_GOTO_LAB(libs__handle_options__convert_options_to_globals_22_0_i574);
MR_def_label(libs__handle_options__convert_options_to_globals_22_0,575)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_sv(10) = MR_tfield(1, MR_r1, 0);
	MR_r1 = MR_sv(9);
	MR_r2 = (MR_Integer) 482;
	MR_np_call_localret_ent(libs__globals__lookup_accumulating_option_3_0,
		libs__handle_options__convert_options_to_globals_22_0_i576);
MR_def_label(libs__handle_options__convert_options_to_globals_22_0,576)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(10);
	MR_sv(10) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Word) MR_string_const("conf", 4);
	}
	MR_np_call_localret_ent(fn__f_100_105_114_95_95_47_2_0,
		libs__handle_options__convert_options_to_globals_22_0_i577);
MR_def_label(libs__handle_options__convert_options_to_globals_22_0,577)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = MR_sv(10);
	MR_tag_alloc_heap(MR_r2, 3, (MR_Integer) 2);
	MR_tfield(3, MR_r2, 0) = (MR_Integer) 3;
	MR_tfield(3, MR_r2, 1) = MR_tempr1;
	MR_r1 = (MR_Integer) 482;
	MR_r3 = MR_sv(9);
	}
	MR_np_call_localret_ent(libs__globals__set_option_4_0,
		libs__handle_options__convert_options_to_globals_22_0_i580);
MR_def_label(libs__handle_options__convert_options_to_globals_22_0,580)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 628;
MR_def_label(libs__handle_options__convert_options_to_globals_22_0,574)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(10) = MR_r1;
	MR_np_call_localret_ent(libs__globals__lookup_maybe_string_option_3_0,
		libs__handle_options__convert_options_to_globals_22_0_i581);
MR_def_label(libs__handle_options__convert_options_to_globals_22_0,581)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(libs__handle_options__convert_options_to_globals_22_0_i582);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(1, MR_r1, 0);
	if ((strcmp((char *) (MR_Word *) MR_tempr1, MR_string_const("", 0)) != 0)) {
		MR_GOTO_LAB(libs__handle_options__convert_options_to_globals_22_0_i582);
	}
	if (MR_LTAGS_TESTR(MR_sv(6),0,0)) {
		MR_GOTO_LAB(libs__handle_options__convert_options_to_globals_22_0_i586);
	}
	MR_r1 = (MR_Integer) 628;
	MR_r2 = (MR_Word) MR_TAG_COMMON(3,3,59);
	MR_r3 = MR_sv(10);
	}
	MR_np_call_localret_ent(libs__globals__set_option_4_0,
		libs__handle_options__convert_options_to_globals_22_0_i593);
MR_def_label(libs__handle_options__convert_options_to_globals_22_0,586)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(1, MR_sv(6), 0);
	MR_r2 = (MR_Word) MR_string_const("conf", 4);
	MR_np_call_localret_ent(fn__f_100_105_114_95_95_47_2_0,
		libs__handle_options__convert_options_to_globals_22_0_i589);
MR_def_label(libs__handle_options__convert_options_to_globals_22_0,589)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("Mercury.config", 14);
	MR_np_call_localret_ent(fn__f_100_105_114_95_95_47_2_0,
		libs__handle_options__convert_options_to_globals_22_0_i590);
MR_def_label(libs__handle_options__convert_options_to_globals_22_0,590)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tag_alloc_heap(MR_r2, 3, (MR_Integer) 2);
	MR_tfield(3, MR_r2, 0) = (MR_Integer) 2;
	MR_tfield(3, MR_r2, 1) = MR_tempr1;
	MR_r1 = (MR_Integer) 628;
	MR_r3 = MR_sv(10);
	}
	MR_np_call_localret_ent(libs__globals__set_option_4_0,
		libs__handle_options__convert_options_to_globals_22_0_i593);
MR_def_label(libs__handle_options__convert_options_to_globals_22_0,593)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 539;
	MR_GOTO_LAB(libs__handle_options__convert_options_to_globals_22_0_i594);
MR_def_label(libs__handle_options__convert_options_to_globals_22_0,582)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(10);
	MR_r2 = (MR_Integer) 539;
MR_def_label(libs__handle_options__convert_options_to_globals_22_0,594)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(11) = MR_r1;
	MR_np_call_localret_ent(libs__globals__lookup_accumulating_option_3_0,
		libs__handle_options__convert_options_to_globals_22_0_i595);
MR_def_label(libs__handle_options__convert_options_to_globals_22_0,595)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(11);
	MR_np_call_localret_ent(libs__handle_options__grade_directory_component_2_0,
		libs__handle_options__convert_options_to_globals_22_0_i596);
MR_def_label(libs__handle_options__convert_options_to_globals_22_0,596)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(6),0,0)) {
		MR_GOTO_LAB(libs__handle_options__convert_options_to_globals_22_0_i598);
	}
	MR_sv(10) = MR_r1;
	MR_r1 = MR_sv(11);
	MR_r2 = (MR_Integer) 634;
	MR_GOTO_LAB(libs__handle_options__convert_options_to_globals_22_0_i597);
MR_def_label(libs__handle_options__convert_options_to_globals_22_0,598)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(16,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(fn__libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2035__1_2_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_r1;
	MR_sv(10) = MR_r1;
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = MR_r1;
	MR_r4 = MR_sv(6);
	}
	MR_np_call_localret_ent(fn__list__map_2_0,
		libs__handle_options__convert_options_to_globals_22_0_i600);
MR_def_label(libs__handle_options__convert_options_to_globals_22_0,600)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_r1;
	MR_r1 = MR_sv(11);
	MR_r2 = (MR_Integer) 535;
	MR_np_call_localret_ent(libs__globals__lookup_accumulating_option_3_0,
		libs__handle_options__convert_options_to_globals_22_0_i601);
MR_def_label(libs__handle_options__convert_options_to_globals_22_0,601)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(9);
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		libs__handle_options__convert_options_to_globals_22_0_i602);
MR_def_label(libs__handle_options__convert_options_to_globals_22_0,602)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 3, (MR_Integer) 2);
	MR_tfield(3, MR_r2, 0) = (MR_Integer) 3;
	MR_tfield(3, MR_r2, 1) = MR_r1;
	MR_r1 = (MR_Integer) 535;
	MR_r3 = MR_sv(11);
	MR_np_call_localret_ent(libs__globals__set_option_4_0,
		libs__handle_options__convert_options_to_globals_22_0_i604);
MR_def_label(libs__handle_options__convert_options_to_globals_22_0,604)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(11) = MR_r1;
	MR_r2 = (MR_Integer) 536;
	MR_np_call_localret_ent(libs__globals__lookup_accumulating_option_3_0,
		libs__handle_options__convert_options_to_globals_22_0_i605);
MR_def_label(libs__handle_options__convert_options_to_globals_22_0,605)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(9);
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		libs__handle_options__convert_options_to_globals_22_0_i606);
MR_def_label(libs__handle_options__convert_options_to_globals_22_0,606)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 3, (MR_Integer) 2);
	MR_tfield(3, MR_r2, 0) = (MR_Integer) 3;
	MR_tfield(3, MR_r2, 1) = MR_r1;
	MR_r1 = (MR_Integer) 536;
	MR_r3 = MR_sv(11);
	MR_np_call_localret_ent(libs__globals__set_option_4_0,
		libs__handle_options__convert_options_to_globals_22_0_i608);
MR_def_label(libs__handle_options__convert_options_to_globals_22_0,608)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(16,1);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(fn__libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2050__1_2_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(10);
	MR_sv(11) = MR_r1;
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = MR_r1;
	MR_r4 = MR_sv(6);
	}
	MR_np_call_localret_ent(fn__list__map_2_0,
		libs__handle_options__convert_options_to_globals_22_0_i610);
MR_def_label(libs__handle_options__convert_options_to_globals_22_0,610)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_r1;
	MR_r1 = MR_sv(11);
	MR_r2 = (MR_Integer) 482;
	MR_np_call_localret_ent(libs__globals__lookup_accumulating_option_3_0,
		libs__handle_options__convert_options_to_globals_22_0_i611);
MR_def_label(libs__handle_options__convert_options_to_globals_22_0,611)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = MR_sv(9);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		libs__handle_options__convert_options_to_globals_22_0_i612);
MR_def_label(libs__handle_options__convert_options_to_globals_22_0,612)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 3, (MR_Integer) 2);
	MR_tfield(3, MR_r2, 0) = (MR_Integer) 3;
	MR_tfield(3, MR_r2, 1) = MR_r1;
	MR_r1 = (MR_Integer) 482;
	MR_r3 = MR_sv(11);
	MR_np_call_localret_ent(libs__globals__set_option_4_0,
		libs__handle_options__convert_options_to_globals_22_0_i614);
MR_def_label(libs__handle_options__convert_options_to_globals_22_0,614)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(11) = MR_r1;
	MR_r2 = (MR_Integer) 526;
	MR_np_call_localret_ent(libs__globals__lookup_accumulating_option_3_0,
		libs__handle_options__convert_options_to_globals_22_0_i615);
MR_def_label(libs__handle_options__convert_options_to_globals_22_0,615)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = MR_sv(9);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		libs__handle_options__convert_options_to_globals_22_0_i616);
MR_def_label(libs__handle_options__convert_options_to_globals_22_0,616)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 3, (MR_Integer) 2);
	MR_tfield(3, MR_r2, 0) = (MR_Integer) 3;
	MR_tfield(3, MR_r2, 1) = MR_r1;
	MR_r1 = (MR_Integer) 526;
	MR_r3 = MR_sv(11);
	MR_np_call_localret_ent(libs__globals__set_option_4_0,
		libs__handle_options__convert_options_to_globals_22_0_i618);
MR_def_label(libs__handle_options__convert_options_to_globals_22_0,618)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(16,2);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(fn__libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2063__1_2_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(10);
	MR_sv(11) = MR_r1;
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = MR_r1;
	MR_r4 = MR_sv(6);
	}
	MR_np_call_localret_ent(fn__list__map_2_0,
		libs__handle_options__convert_options_to_globals_22_0_i620);
MR_def_label(libs__handle_options__convert_options_to_globals_22_0,620)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_r1;
	MR_r1 = MR_sv(11);
	MR_r2 = (MR_Integer) 633;
	MR_np_call_localret_ent(libs__globals__lookup_accumulating_option_3_0,
		libs__handle_options__convert_options_to_globals_22_0_i621);
MR_def_label(libs__handle_options__convert_options_to_globals_22_0,621)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = MR_sv(9);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		libs__handle_options__convert_options_to_globals_22_0_i622);
MR_def_label(libs__handle_options__convert_options_to_globals_22_0,622)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 3, (MR_Integer) 2);
	MR_tfield(3, MR_r2, 0) = (MR_Integer) 3;
	MR_tfield(3, MR_r2, 1) = MR_r1;
	MR_r1 = (MR_Integer) 633;
	MR_r3 = MR_sv(11);
	MR_np_call_localret_ent(libs__globals__set_option_4_0,
		libs__handle_options__convert_options_to_globals_22_0_i624);
MR_def_label(libs__handle_options__convert_options_to_globals_22_0,624)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(16,3);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(fn__libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2073__1_2_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(10);
	MR_sv(9) = MR_r1;
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = MR_r1;
	MR_r4 = MR_sv(6);
	}
	MR_np_call_localret_ent(fn__list__map_2_0,
		libs__handle_options__convert_options_to_globals_22_0_i626);
MR_def_label(libs__handle_options__convert_options_to_globals_22_0,626)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(9);
	MR_r2 = (MR_Integer) 547;
	MR_np_call_localret_ent(libs__globals__lookup_accumulating_option_3_0,
		libs__handle_options__convert_options_to_globals_22_0_i627);
MR_def_label(libs__handle_options__convert_options_to_globals_22_0,627)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(6);
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		libs__handle_options__convert_options_to_globals_22_0_i628);
MR_def_label(libs__handle_options__convert_options_to_globals_22_0,628)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 3, (MR_Integer) 2);
	MR_tfield(3, MR_r2, 0) = (MR_Integer) 3;
	MR_tfield(3, MR_r2, 1) = MR_r1;
	MR_r1 = (MR_Integer) 547;
	MR_r3 = MR_sv(9);
	MR_np_call_localret_ent(libs__globals__set_option_4_0,
		libs__handle_options__convert_options_to_globals_22_0_i630);
MR_def_label(libs__handle_options__convert_options_to_globals_22_0,630)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 634;
MR_def_label(libs__handle_options__convert_options_to_globals_22_0,597)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_r1;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		libs__handle_options__convert_options_to_globals_22_0_i631);
MR_def_label(libs__handle_options__convert_options_to_globals_22_0,631)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(libs__handle_options__convert_options_to_globals_22_0_i633);
	}
	MR_r1 = MR_sv(9);
	MR_r2 = (MR_Integer) 631;
	MR_GOTO_LAB(libs__handle_options__convert_options_to_globals_22_0_i632);
MR_def_label(libs__handle_options__convert_options_to_globals_22_0,633)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(9);
	MR_r2 = (MR_Integer) 633;
	MR_np_call_localret_ent(libs__globals__lookup_accumulating_option_3_0,
		libs__handle_options__convert_options_to_globals_22_0_i634);
MR_def_label(libs__handle_options__convert_options_to_globals_22_0,634)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(9);
	MR_r2 = (MR_Integer) 632;
	MR_np_call_localret_ent(libs__globals__lookup_accumulating_option_3_0,
		libs__handle_options__convert_options_to_globals_22_0_i635);
MR_def_label(libs__handle_options__convert_options_to_globals_22_0,635)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = MR_sv(6);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		libs__handle_options__convert_options_to_globals_22_0_i636);
MR_def_label(libs__handle_options__convert_options_to_globals_22_0,636)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 3, (MR_Integer) 2);
	MR_tfield(3, MR_r2, 0) = (MR_Integer) 3;
	MR_tfield(3, MR_r2, 1) = MR_r1;
	MR_r1 = (MR_Integer) 633;
	MR_r3 = MR_sv(9);
	MR_np_call_localret_ent(libs__globals__set_option_4_0,
		libs__handle_options__convert_options_to_globals_22_0_i638);
MR_def_label(libs__handle_options__convert_options_to_globals_22_0,638)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 631;
MR_def_label(libs__handle_options__convert_options_to_globals_22_0,632)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(16) = MR_r1;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		libs__handle_options__convert_options_to_globals_22_0_i639);
MR_def_label(libs__handle_options__convert_options_to_globals_22_0,639)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(16);
	MR_r2 = (MR_Integer) 541;
	MR_np_call_localret_ent(libs__globals__lookup_accumulating_option_3_0,
		libs__handle_options__convert_options_to_globals_22_0_i640);
MR_def_label(libs__handle_options__convert_options_to_globals_22_0,640)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_r1;
	MR_r1 = MR_sv(16);
	MR_r2 = (MR_Integer) 633;
	MR_np_call_localret_ent(libs__globals__lookup_accumulating_option_3_0,
		libs__handle_options__convert_options_to_globals_22_0_i641);
MR_def_label(libs__handle_options__convert_options_to_globals_22_0,641)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_sv(11) = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(9,1);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(fn__libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2109__1_3_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(7);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(10);
	if (MR_INT_NE(MR_sv(6),0)) {
		MR_GOTO_LAB(libs__handle_options__convert_options_to_globals_22_0_i644);
	}
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = MR_sv(9);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		libs__handle_options__convert_options_to_globals_22_0_i645);
MR_def_label(libs__handle_options__convert_options_to_globals_22_0,645)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 3, (MR_Integer) 2);
	MR_tfield(3, MR_r2, 0) = (MR_Integer) 3;
	MR_tfield(3, MR_r2, 1) = MR_r1;
	MR_r1 = (MR_Integer) 633;
	MR_r3 = MR_sv(16);
	MR_np_call_localret_ent(libs__globals__set_option_4_0,
		libs__handle_options__convert_options_to_globals_22_0_i647);
MR_def_label(libs__handle_options__convert_options_to_globals_22_0,647)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(10) = MR_r1;
	MR_r2 = (MR_Integer) 535;
	MR_np_call_localret_ent(libs__globals__lookup_accumulating_option_3_0,
		libs__handle_options__convert_options_to_globals_22_0_i648);
MR_def_label(libs__handle_options__convert_options_to_globals_22_0,648)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_r1 = MR_sv(10);
	MR_r2 = (MR_Integer) 547;
	MR_np_call_localret_ent(libs__globals__lookup_accumulating_option_3_0,
		libs__handle_options__convert_options_to_globals_22_0_i649);
MR_def_label(libs__handle_options__convert_options_to_globals_22_0,649)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(7);
	MR_sv(7) = MR_r1;
	MR_sv(16) = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r1 = MR_sv(16);
	MR_r2 = MR_sv(9);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		libs__handle_options__convert_options_to_globals_22_0_i650);
MR_def_label(libs__handle_options__convert_options_to_globals_22_0,650)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(7);
	MR_sv(7) = MR_r1;
	MR_r1 = MR_sv(16);
	MR_r2 = MR_sv(9);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		libs__handle_options__convert_options_to_globals_22_0_i651);
MR_def_label(libs__handle_options__convert_options_to_globals_22_0,651)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 3, (MR_Integer) 2);
	MR_tfield(3, MR_r2, 0) = (MR_Integer) 3;
	MR_tfield(3, MR_r2, 1) = MR_sv(7);
	MR_sv(7) = MR_r1;
	MR_r3 = MR_sv(10);
	MR_r1 = (MR_Integer) 535;
	MR_np_call_localret_ent(libs__globals__set_option_4_0,
		libs__handle_options__convert_options_to_globals_22_0_i674);
MR_def_label(libs__handle_options__convert_options_to_globals_22_0,644)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(10) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("Mercury", 7);
	MR_r2 = MR_tfield(0, MR_sv(11), 4);
	MR_np_call_localret_ent(fn__f_100_105_114_95_95_47_2_0,
		libs__handle_options__convert_options_to_globals_22_0_i653);
MR_def_label(libs__handle_options__convert_options_to_globals_22_0,653)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(7);
	MR_np_call_localret_ent(fn__f_100_105_114_95_95_47_2_0,
		libs__handle_options__convert_options_to_globals_22_0_i654);
MR_def_label(libs__handle_options__convert_options_to_globals_22_0,654)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_sv(15) = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r1 = MR_sv(15);
	MR_r2 = MR_r1;
	MR_r3 = MR_sv(11);
	MR_r4 = MR_sv(9);
	MR_np_call_localret_ent(fn__list__map_2_0,
		libs__handle_options__convert_options_to_globals_22_0_i655);
MR_def_label(libs__handle_options__convert_options_to_globals_22_0,655)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_sv(17) = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(7);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_sv(7) = MR_r1;
	}
	MR_np_call_localret_ent(fn__dir__this_directory_0_0,
		libs__handle_options__convert_options_to_globals_22_0_i657);
MR_def_label(libs__handle_options__convert_options_to_globals_22_0,657)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(7,7);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(libs__handle_options__IntroducedFrom__pred__convert_options_to_globals__2127__1_2_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_r1;
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 4);
	MR_tfield(0, MR_r2, 0) = (MR_Word) MR_COMMON(7,8);
	MR_tfield(0, MR_r2, 1) = (MR_Word) MR_ENTRY_AP(libs__handle_options__IntroducedFrom__pred__convert_options_to_globals__2127__2_2_0);
	MR_tfield(0, MR_r2, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_r2, 3) = MR_tempr1;
	MR_r1 = MR_sv(15);
	MR_r3 = MR_sv(10);
	}
	MR_np_call_localret_ent(fn__list__filter_2_0,
		libs__handle_options__convert_options_to_globals_22_0_i660);
MR_def_label(libs__handle_options__convert_options_to_globals_22_0,660)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(15);
	MR_r2 = MR_sv(7);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		libs__handle_options__convert_options_to_globals_22_0_i661);
MR_def_label(libs__handle_options__convert_options_to_globals_22_0,661)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(15);
	MR_r2 = MR_sv(17);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		libs__handle_options__convert_options_to_globals_22_0_i662);
MR_def_label(libs__handle_options__convert_options_to_globals_22_0,662)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 3, (MR_Integer) 2);
	MR_tfield(3, MR_r2, 0) = (MR_Integer) 3;
	MR_tfield(3, MR_r2, 1) = MR_r1;
	MR_r1 = (MR_Integer) 633;
	MR_r3 = MR_sv(16);
	MR_np_call_localret_ent(libs__globals__set_option_4_0,
		libs__handle_options__convert_options_to_globals_22_0_i664);
MR_def_label(libs__handle_options__convert_options_to_globals_22_0,664)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(10) = MR_r1;
	MR_r2 = (MR_Integer) 535;
	MR_np_call_localret_ent(libs__globals__lookup_accumulating_option_3_0,
		libs__handle_options__convert_options_to_globals_22_0_i665);
MR_def_label(libs__handle_options__convert_options_to_globals_22_0,665)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(16) = MR_r1;
	MR_r1 = MR_sv(10);
	MR_r2 = (MR_Integer) 547;
	MR_np_call_localret_ent(libs__globals__lookup_accumulating_option_3_0,
		libs__handle_options__convert_options_to_globals_22_0_i666);
MR_def_label(libs__handle_options__convert_options_to_globals_22_0,666)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(16,4);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(fn__libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2145__1_2_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(11);
	MR_sv(7) = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_sv(17) = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_r1;
	MR_r4 = MR_sv(9);
	}
	MR_np_call_localret_ent(fn__list__map_2_0,
		libs__handle_options__convert_options_to_globals_22_0_i668);
MR_def_label(libs__handle_options__convert_options_to_globals_22_0,668)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(16);
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		libs__handle_options__convert_options_to_globals_22_0_i669);
MR_def_label(libs__handle_options__convert_options_to_globals_22_0,669)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(16,5);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(fn__libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2149__1_2_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(11);
	MR_sv(16) = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_r1;
	MR_r4 = MR_sv(9);
	}
	MR_np_call_localret_ent(fn__list__map_2_0,
		libs__handle_options__convert_options_to_globals_22_0_i671);
MR_def_label(libs__handle_options__convert_options_to_globals_22_0,671)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(17);
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		libs__handle_options__convert_options_to_globals_22_0_i672);
MR_def_label(libs__handle_options__convert_options_to_globals_22_0,672)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 3, (MR_Integer) 2);
	MR_tfield(3, MR_r2, 0) = (MR_Integer) 3;
	MR_tfield(3, MR_r2, 1) = MR_sv(16);
	MR_sv(7) = MR_r1;
	MR_r3 = MR_sv(10);
	MR_r1 = (MR_Integer) 535;
	MR_np_call_localret_ent(libs__globals__set_option_4_0,
		libs__handle_options__convert_options_to_globals_22_0_i674);
MR_def_label(libs__handle_options__convert_options_to_globals_22_0,674)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 3, (MR_Integer) 2);
	MR_tfield(3, MR_r2, 0) = (MR_Integer) 3;
	MR_tfield(3, MR_r2, 1) = MR_sv(7);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 547;
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(libs__globals__set_option_4_0,
		libs__handle_options__convert_options_to_globals_22_0_i676);
MR_def_label(libs__handle_options__convert_options_to_globals_22_0,676)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(16) = MR_r1;
	MR_r2 = (MR_Integer) 630;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		libs__handle_options__convert_options_to_globals_22_0_i677);
MR_def_label(libs__handle_options__convert_options_to_globals_22_0,677)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(6),0)) {
		MR_GOTO_LAB(libs__handle_options__convert_options_to_globals_22_0_i680);
	}
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(libs__handle_options__convert_options_to_globals_22_0_i678);
	}
	MR_sv(7) = (MR_Word) MR_TAG_COMMON(0,8,7);
	MR_sv(6) = (MR_Word) MR_TAG_COMMON(0,8,8);
	MR_r1 = MR_sv(16);
	MR_GOTO_LAB(libs__handle_options__convert_options_to_globals_22_0_i679);
MR_def_label(libs__handle_options__convert_options_to_globals_22_0,680)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_sv(7) = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(16,6);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(fn__libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2171__1_2_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tempr3 = MR_sv(11);
	MR_tfield(0, MR_tempr1, 3) = MR_tempr3;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 4);
	MR_sv(6) = MR_tempr2;
	MR_tfield(0, MR_tempr2, 0) = (MR_Word) MR_COMMON(16,7);
	MR_tfield(0, MR_tempr2, 1) = (MR_Word) MR_ENTRY_AP(fn__libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2173__1_2_0);
	MR_tfield(0, MR_tempr2, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr2, 3) = MR_tempr3;
	MR_r1 = MR_sv(16);
	}
MR_def_label(libs__handle_options__convert_options_to_globals_22_0,679)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(16) = MR_r1;
	MR_r2 = (MR_Integer) 482;
	MR_np_call_localret_ent(libs__globals__lookup_accumulating_option_3_0,
		libs__handle_options__convert_options_to_globals_22_0_i686);
MR_def_label(libs__handle_options__convert_options_to_globals_22_0,686)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(10) = MR_r1;
	MR_np_call_localret_ent(fn__dir__this_directory_0_0,
		libs__handle_options__convert_options_to_globals_22_0_i687);
MR_def_label(libs__handle_options__convert_options_to_globals_22_0,687)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_tempr1;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(libs__handle_options__convert_options_to_globals_22_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_1),
		mercury__libs__handle_options__convert_options_to_globals_22_0_i688);
MR_def_label(libs__handle_options__convert_options_to_globals_22_0,688)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(7);
	MR_sv(7) = MR_r1;
	MR_sv(11) = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r1 = MR_sv(11);
	MR_r2 = MR_r1;
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(9);
	}
	MR_np_call_localret_ent(fn__list__map_2_0,
		libs__handle_options__convert_options_to_globals_22_0_i689);
MR_def_label(libs__handle_options__convert_options_to_globals_22_0,689)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_r1;
	MR_np_call_localret_ent(fn__dir__this_directory_0_0,
		libs__handle_options__convert_options_to_globals_22_0_i690);
MR_def_label(libs__handle_options__convert_options_to_globals_22_0,690)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(10);
	MR_sv(10) = MR_r1;
	MR_r1 = MR_sv(11);
	MR_r2 = MR_sv(9);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		libs__handle_options__convert_options_to_globals_22_0_i691);
MR_def_label(libs__handle_options__convert_options_to_globals_22_0,691)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(7);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(10);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_r2, 3, (MR_Integer) 2);
	MR_tfield(3, MR_r2, 0) = (MR_Integer) 3;
	MR_tfield(3, MR_r2, 1) = MR_tempr2;
	MR_r1 = (MR_Integer) 482;
	MR_r3 = MR_sv(16);
	}
	MR_np_call_localret_ent(libs__globals__set_option_4_0,
		libs__handle_options__convert_options_to_globals_22_0_i695);
MR_def_label(libs__handle_options__convert_options_to_globals_22_0,695)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(10) = MR_r1;
	MR_r2 = (MR_Integer) 526;
	MR_np_call_localret_ent(libs__globals__lookup_accumulating_option_3_0,
		libs__handle_options__convert_options_to_globals_22_0_i696);
MR_def_label(libs__handle_options__convert_options_to_globals_22_0,696)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_np_call_localret_ent(fn__dir__this_directory_0_0,
		libs__handle_options__convert_options_to_globals_22_0_i697);
MR_def_label(libs__handle_options__convert_options_to_globals_22_0,697)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_tempr1;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(libs__handle_options__convert_options_to_globals_22_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_1),
		mercury__libs__handle_options__convert_options_to_globals_22_0_i698);
MR_def_label(libs__handle_options__convert_options_to_globals_22_0,698)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = MR_sv(7);
	MR_tag_alloc_heap(MR_r2, 3, (MR_Integer) 2);
	MR_tfield(3, MR_r2, 0) = (MR_Integer) 3;
	MR_tfield(3, MR_r2, 1) = MR_tempr1;
	MR_r1 = (MR_Integer) 526;
	MR_r3 = MR_sv(10);
	}
	MR_np_call_localret_ent(libs__globals__set_option_4_0,
		libs__handle_options__convert_options_to_globals_22_0_i701);
MR_def_label(libs__handle_options__convert_options_to_globals_22_0,701)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(13);
	MR_r4 = MR_r1;
	MR_r1 = (MR_Integer) 325;
	MR_r2 = (MR_Integer) 12;
	MR_GOTO_LAB(libs__handle_options__convert_options_to_globals_22_0_i702);
MR_def_label(libs__handle_options__convert_options_to_globals_22_0,678)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(13);
	MR_r4 = MR_sv(16);
	MR_r1 = (MR_Integer) 325;
	MR_r2 = (MR_Integer) 12;
MR_def_label(libs__handle_options__convert_options_to_globals_22_0,702)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(13) = MR_r3;
	MR_np_call_localret_ent(libs__handle_options__option_implies_5_0,
		libs__handle_options__convert_options_to_globals_22_0_i703);
MR_def_label(libs__handle_options__convert_options_to_globals_22_0,703)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(8),1)) {
		MR_GOTO_LAB(libs__handle_options__convert_options_to_globals_22_0_i704);
	}
	if (MR_INT_NE(MR_sv(2),6)) {
		MR_GOTO_LAB(libs__handle_options__convert_options_to_globals_22_0_i704);
	}
	if (MR_INT_NE(MR_sv(3),1)) {
		MR_GOTO_LAB(libs__handle_options__convert_options_to_globals_22_0_i704);
	}
	MR_sv(2) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("--gc accurate is incompatible with --put-nondet-env-on-heap", 59);
	MR_r2 = MR_sv(14);
	MR_np_call_localret_ent(libs__handle_options__add_error_3_0,
		libs__handle_options__convert_options_to_globals_22_0_i708);
MR_def_label(libs__handle_options__convert_options_to_globals_22_0,708)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 25;
	MR_r2 = (MR_Integer) 448;
	MR_r3 = MR_sv(12);
	MR_r4 = (MR_Word) MR_string_const("--warn-non-tail-recursion requires --optimize-tailcalls", 55);
	MR_r5 = MR_sv(2);
	MR_r6 = MR_tempr1;
	}
	MR_np_call_localret_ent(libs__handle_options__option_requires_7_0,
		libs__handle_options__convert_options_to_globals_22_0_i713);
MR_def_label(libs__handle_options__convert_options_to_globals_22_0,704)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(8),0)) {
		MR_GOTO_LAB(libs__handle_options__convert_options_to_globals_22_0_i711);
	}
	MR_sv(2) = MR_r1;
	MR_r1 = (MR_Integer) 25;
	MR_r2 = (MR_Integer) 459;
	MR_r3 = MR_sv(13);
	MR_r4 = (MR_Word) MR_string_const("--warn-non-tail-recursion is incompatible with --pessimize-tailcalls", 68);
	MR_r5 = MR_sv(2);
	MR_r6 = MR_sv(14);
	MR_np_call_localret_ent(libs__handle_options__option_requires_7_0,
		libs__handle_options__convert_options_to_globals_22_0_i713);
MR_def_label(libs__handle_options__convert_options_to_globals_22_0,711)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = (MR_Integer) 25;
	MR_r2 = (MR_Integer) 448;
	MR_r3 = MR_sv(12);
	MR_r4 = (MR_Word) MR_string_const("--warn-non-tail-recursion requires --optimize-tailcalls", 55);
	MR_r5 = MR_sv(2);
	MR_r6 = MR_sv(14);
	MR_np_call_localret_ent(libs__handle_options__option_requires_7_0,
		libs__handle_options__convert_options_to_globals_22_0_i713);
MR_def_label(libs__handle_options__convert_options_to_globals_22_0,713)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(13);
	MR_r5 = MR_sv(2);
	MR_r6 = MR_r1;
	MR_r1 = (MR_Integer) 25;
	MR_r2 = (MR_Integer) 96;
	MR_r4 = (MR_Word) MR_string_const("--warn-non-tail-recursion is incompatible with --errorcheck-only", 64);
	MR_np_call_localret_ent(libs__handle_options__option_requires_7_0,
		libs__handle_options__convert_options_to_globals_22_0_i715);
MR_def_label(libs__handle_options__convert_options_to_globals_22_0,715)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(1),0)) {
		MR_GOTO_LAB(libs__handle_options__convert_options_to_globals_22_0_i717);
	}
MR_def_label(libs__handle_options__convert_options_to_globals_22_0,865)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(2);
	MR_sv(2) = (MR_Word) MR_TAG_COMMON(1,2,8);
	MR_sv(3) = MR_r1;
	MR_r1 = MR_r3;
	MR_r2 = (MR_Integer) 258;
	MR_GOTO_LAB(libs__handle_options__convert_options_to_globals_22_0_i716);
MR_def_label(libs__handle_options__convert_options_to_globals_22_0,717)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(1),2)) {
		MR_GOTO_LAB(libs__handle_options__convert_options_to_globals_22_0_i719);
	}
	MR_r3 = MR_sv(2);
	MR_sv(2) = (MR_Word) MR_TAG_COMMON(1,2,6);
	MR_sv(3) = MR_r1;
	MR_r1 = MR_r3;
	MR_r2 = (MR_Integer) 258;
	MR_GOTO_LAB(libs__handle_options__convert_options_to_globals_22_0_i716);
MR_def_label(libs__handle_options__convert_options_to_globals_22_0,719)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(1),5)) {
		MR_GOTO_LAB(libs__handle_options__convert_options_to_globals_22_0_i721);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = (MR_Word) MR_TAG_COMMON(1,2,9);
	MR_sv(3) = MR_r1;
	MR_r1 = (MR_Integer) 362;
	MR_r2 = MR_sv(13);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(libs__globals__set_option_4_0,
		libs__handle_options__convert_options_to_globals_22_0_i723);
MR_def_label(libs__handle_options__convert_options_to_globals_22_0,723)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 293;
	MR_r2 = MR_sv(13);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(libs__globals__set_option_4_0,
		libs__handle_options__convert_options_to_globals_22_0_i724);
MR_def_label(libs__handle_options__convert_options_to_globals_22_0,724)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 258;
	MR_GOTO_LAB(libs__handle_options__convert_options_to_globals_22_0_i716);
MR_def_label(libs__handle_options__convert_options_to_globals_22_0,721)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(1),1)) {
		MR_GOTO_LAB(libs__handle_options__convert_options_to_globals_22_0_i725);
	}
	MR_sv(3) = MR_r1;
	MR_r1 = (MR_Integer) 362;
	MR_r2 = MR_sv(13);
	MR_r3 = MR_sv(2);
	MR_np_call_localret_ent(libs__globals__set_option_4_0,
		libs__handle_options__convert_options_to_globals_22_0_i726);
MR_def_label(libs__handle_options__convert_options_to_globals_22_0,726)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = (MR_Word) MR_TAG_COMMON(1,2,7);
	MR_r2 = (MR_Integer) 258;
	MR_GOTO_LAB(libs__handle_options__convert_options_to_globals_22_0_i716);
MR_def_label(libs__handle_options__convert_options_to_globals_22_0,725)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(1),3)) {
		MR_GOTO_LAB(libs__handle_options__convert_options_to_globals_22_0_i865);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = (MR_Word) MR_TAG_COMMON(1,2,10);
	MR_sv(3) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Integer) 258;
	}
MR_def_label(libs__handle_options__convert_options_to_globals_22_0,716)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_np_call_localret_ent(libs__globals__lookup_accumulating_option_3_0,
		libs__handle_options__convert_options_to_globals_22_0_i730);
MR_def_label(libs__handle_options__convert_options_to_globals_22_0,730)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(libs__handle_options__convert_options_to_globals_22_0_i732);
	}
	MR_tag_alloc_heap(MR_r2, 3, (MR_Integer) 2);
	MR_tfield(3, MR_r2, 0) = (MR_Integer) 3;
	MR_tfield(3, MR_r2, 1) = MR_sv(2);
	MR_r1 = (MR_Integer) 258;
	MR_r3 = MR_sv(7);
	MR_np_call_localret_ent(libs__globals__set_option_4_0,
		libs__handle_options__convert_options_to_globals_22_0_i734);
MR_def_label(libs__handle_options__convert_options_to_globals_22_0,734)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 313;
	MR_GOTO_LAB(libs__handle_options__convert_options_to_globals_22_0_i731);
MR_def_label(libs__handle_options__convert_options_to_globals_22_0,732)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(7);
	MR_r2 = (MR_Integer) 313;
MR_def_label(libs__handle_options__convert_options_to_globals_22_0,731)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_np_call_localret_ent(libs__globals__lookup_int_option_3_0,
		libs__handle_options__convert_options_to_globals_22_0_i735);
MR_def_label(libs__handle_options__convert_options_to_globals_22_0,735)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_GE(MR_r1,0)) {
		MR_GOTO_LAB(libs__handle_options__convert_options_to_globals_22_0_i736);
	}
	if (MR_INT_NE(MR_sv(8),0)) {
		MR_GOTO_LAB(libs__handle_options__convert_options_to_globals_22_0_i738);
	}
	MR_r1 = (MR_Integer) 313;
	MR_r2 = (MR_Word) MR_TAG_COMMON(2,5,3);
	MR_r3 = MR_sv(2);
	MR_np_call_localret_ent(libs__globals__set_option_4_0,
		libs__handle_options__convert_options_to_globals_22_0_i742);
MR_def_label(libs__handle_options__convert_options_to_globals_22_0,738)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 313;
	MR_r2 = (MR_Word) MR_TAG_COMMON(2,5,4);
	MR_r3 = MR_sv(2);
	MR_np_call_localret_ent(libs__globals__set_option_4_0,
		libs__handle_options__convert_options_to_globals_22_0_i742);
MR_def_label(libs__handle_options__convert_options_to_globals_22_0,742)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(12);
	MR_r3 = MR_r1;
	MR_GOTO_LAB(libs__handle_options__convert_options_to_globals_22_0_i743);
MR_def_label(libs__handle_options__convert_options_to_globals_22_0,736)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(12);
	MR_r3 = MR_sv(2);
MR_def_label(libs__handle_options__convert_options_to_globals_22_0,743)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(1),0)) {
		MR_GOTO_LAB(libs__handle_options__convert_options_to_globals_22_0_i744);
	}
	if (MR_INT_EQ(MR_sv(5),2)) {
		MR_GOTO_LAB(libs__handle_options__convert_options_to_globals_22_0_i746);
	}
	if (MR_INT_NE(MR_sv(5),1)) {
		MR_GOTO_LAB(libs__handle_options__convert_options_to_globals_22_0_i744);
	}
MR_def_label(libs__handle_options__convert_options_to_globals_22_0,746)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_LT(MR_sv(4),2)) {
		MR_GOTO_LAB(libs__handle_options__convert_options_to_globals_22_0_i744);
	}
	MR_r1 = (MR_Integer) 265;
	MR_np_call_localret_ent(libs__globals__set_option_4_0,
		libs__handle_options__convert_options_to_globals_22_0_i751);
MR_def_label(libs__handle_options__convert_options_to_globals_22_0,744)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 265;
	MR_r2 = MR_sv(13);
	MR_np_call_localret_ent(libs__globals__set_option_4_0,
		libs__handle_options__convert_options_to_globals_22_0_i751);
MR_def_label(libs__handle_options__convert_options_to_globals_22_0,751)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(8),0)) {
		MR_GOTO_LAB(libs__handle_options__convert_options_to_globals_22_0_i753);
	}
	MR_np_call_localret_ent(libs__handle_options__postprocess_options_lowlevel_2_0,
		libs__handle_options__convert_options_to_globals_22_0_i753);
MR_def_label(libs__handle_options__convert_options_to_globals_22_0,753)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(libs__handle_options__postprocess_options_libgrades_4_0,
		libs__handle_options__convert_options_to_globals_22_0_i755);
MR_def_label(libs__handle_options__convert_options_to_globals_22_0,755)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r1;
	MR_np_call_localret_ent(libs__globals__globals_init_mutables_3_0,
		libs__handle_options__convert_options_to_globals_22_0_i756);
MR_def_label(libs__handle_options__convert_options_to_globals_22_0,756)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_decr_sp_and_return(18);
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
	MR_init_label5(libs__handle_options__handle_given_options_8_0,40,41,45,42,5)
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
	MR_sv(3) = MR_r1;
	MR_sv(18) = MR_r2;
	MR_r1 = MR_r2;
	MR_r2 = (MR_Integer) 91;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		libs__handle_options__handle_given_options_8_0_i6);
MR_def_label(libs__handle_options__handle_given_options_8_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(18);
	MR_r2 = (MR_Integer) 90;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		libs__handle_options__handle_given_options_8_0_i7);
MR_def_label(libs__handle_options__handle_given_options_8_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(18);
	MR_r2 = (MR_Integer) 83;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		libs__handle_options__handle_given_options_8_0_i8);
MR_def_label(libs__handle_options__handle_given_options_8_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(18);
	MR_r2 = (MR_Integer) 84;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		libs__handle_options__handle_given_options_8_0_i9);
MR_def_label(libs__handle_options__handle_given_options_8_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_r1 = MR_sv(18);
	MR_r2 = (MR_Integer) 82;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		libs__handle_options__handle_given_options_8_0_i10);
MR_def_label(libs__handle_options__handle_given_options_8_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_r1 = MR_sv(18);
	MR_r2 = (MR_Integer) 85;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		libs__handle_options__handle_given_options_8_0_i11);
MR_def_label(libs__handle_options__handle_given_options_8_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_r1;
	MR_r1 = MR_sv(18);
	MR_r2 = (MR_Integer) 86;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		libs__handle_options__handle_given_options_8_0_i12);
MR_def_label(libs__handle_options__handle_given_options_8_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(10) = MR_r1;
	MR_r1 = MR_sv(18);
	MR_r2 = (MR_Integer) 87;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		libs__handle_options__handle_given_options_8_0_i13);
MR_def_label(libs__handle_options__handle_given_options_8_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(11) = MR_r1;
	MR_r1 = MR_sv(18);
	MR_r2 = (MR_Integer) 88;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		libs__handle_options__handle_given_options_8_0_i14);
MR_def_label(libs__handle_options__handle_given_options_8_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(12) = MR_r1;
	MR_r1 = MR_sv(18);
	MR_r2 = (MR_Integer) 94;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		libs__handle_options__handle_given_options_8_0_i15);
MR_def_label(libs__handle_options__handle_given_options_8_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(13) = MR_r1;
	MR_r1 = MR_sv(18);
	MR_r2 = (MR_Integer) 95;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		libs__handle_options__handle_given_options_8_0_i16);
MR_def_label(libs__handle_options__handle_given_options_8_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(14) = MR_r1;
	MR_r1 = MR_sv(18);
	MR_r2 = (MR_Integer) 96;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		libs__handle_options__handle_given_options_8_0_i17);
MR_def_label(libs__handle_options__handle_given_options_8_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(15) = MR_r1;
	MR_r1 = MR_sv(18);
	MR_r2 = (MR_Integer) 97;
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
	MR_r2 = (MR_Integer) 98;
	MR_GOTO_LAB(libs__handle_options__handle_given_options_8_0_i22);
MR_def_label(libs__handle_options__handle_given_options_8_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(17) = (MR_Integer) 0;
	MR_r1 = MR_sv(18);
	MR_r2 = (MR_Integer) 98;
MR_def_label(libs__handle_options__handle_given_options_8_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(18) = MR_r1;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		libs__handle_options__handle_given_options_8_0_i23);
MR_def_label(libs__handle_options__handle_given_options_8_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_r1;
	MR_tfield(1, MR_r2, 1) = (MR_Word) MR_tbmkword(0, 0);
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(17);
	MR_tfield(1, MR_tempr1, 1) = MR_r2;
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(16);
	MR_tfield(1, MR_r2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(15);
	MR_tfield(1, MR_tempr1, 1) = MR_r2;
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(14);
	MR_tfield(1, MR_r2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(13);
	MR_tfield(1, MR_tempr1, 1) = MR_r2;
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(12);
	MR_tfield(1, MR_r2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(11);
	MR_tfield(1, MR_tempr1, 1) = MR_r2;
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(10);
	MR_tfield(1, MR_r2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(9);
	MR_tfield(1, MR_tempr1, 1) = MR_r2;
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(8);
	MR_tfield(1, MR_r2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(7);
	MR_tfield(1, MR_tempr1, 1) = MR_r2;
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(6);
	MR_tfield(1, MR_r2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(5);
	MR_tfield(1, MR_tempr1, 1) = MR_r2;
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = MR_sv(4);
	MR_tfield(1, MR_r1, 1) = MR_tempr1;
	}
	MR_np_call_localret_ent(bool__or_list_2_0,
		libs__handle_options__handle_given_options_8_0_i39);
MR_def_label(libs__handle_options__handle_given_options_8_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(bool__not_2_0,
		libs__handle_options__handle_given_options_8_0_i40);
MR_def_label(libs__handle_options__handle_given_options_8_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(18);
	MR_r2 = (MR_Integer) 111;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		libs__handle_options__handle_given_options_8_0_i41);
MR_def_label(libs__handle_options__handle_given_options_8_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(libs__handle_options__handle_given_options_8_0_i42);
	}
	if (MR_INT_NE(MR_sv(4),1)) {
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
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_tempr1;
	MR_decr_sp_and_return(19);
	}
MR_def_label(libs__handle_options__handle_given_options_8_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(18);
	MR_decr_sp_and_return(19);
MR_def_label(libs__handle_options__handle_given_options_8_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_sv(2);
	MR_r3 = (MR_Integer) 0;
	MR_r4 = MR_tempr1;
	MR_r5 = MR_tempr2;
	MR_decr_sp_and_return(19);
	}
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
	MR_np_call_localret_ent(libs__handle_options__check_option_values_22_0,
		libs__handle_options__convert_option_table_result_to_globals_5_0_i6);
MR_def_label(libs__handle_options__convert_option_table_result_to_globals_5_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r18,0,0)) {
		MR_GOTO_LAB(libs__handle_options__convert_option_table_result_to_globals_5_0_i8);
	}
	MR_r18 = (MR_Word) MR_tbmkword(0, 0);
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(libs__handle_options__convert_options_to_globals_22_0);
MR_def_label(libs__handle_options__convert_option_table_result_to_globals_5_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r18;
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
	MR_r2 = (MR_Word) MR_TAG_COMMON(1,10,1);
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
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_TAG_COMMON(1,2,1);
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = (MR_Word) MR_string_const("Mercury Compiler, version ", 26);
	MR_tfield(1, MR_r1, 1) = MR_tempr1;
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
#line 2503 "handle_options.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&libs__handle_options__mutable_variable_already_printed_usage_lock,
                "libs__handle_options__mutable_variable_already_printed_usage_lock");
#endif
;}
#line 11544 "libs.handle_options.c"
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
#line 2503 "handle_options.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&libs__handle_options__mutable_variable_already_printed_usage_lock,
                "libs__handle_options__mutable_variable_already_printed_usage_lock");
#endif
;}
#line 11577 "libs.handle_options.c"
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
#line 2503 "handle_options.m"
X = libs__handle_options__mutable_variable_already_printed_usage;
;}
#line 11608 "libs.handle_options.c"
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
#line 2503 "handle_options.m"
libs__handle_options__mutable_variable_already_printed_usage = X;
;}
#line 11641 "libs.handle_options.c"
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
	MR_init_label4(libs__handle_options__usage_2_0,4,7,8,18)
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
#line 2503 "handle_options.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&libs__handle_options__mutable_variable_already_printed_usage_lock,
                "libs__handle_options__mutable_variable_already_printed_usage_lock");
#endif
;}
#line 11675 "libs.handle_options.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__libs__handle_options__usage_2_0
{
#line 2503 "handle_options.m"
X = libs__handle_options__mutable_variable_already_printed_usage;
;}
#line 11685 "libs.handle_options.c"
	MR_r2 = X;
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__libs__handle_options__usage_2_0
{
#line 2503 "handle_options.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&libs__handle_options__mutable_variable_already_printed_usage_lock,
                "libs__handle_options__mutable_variable_already_printed_usage_lock");
#endif
;}
#line 11698 "libs.handle_options.c"
#undef	MR_PROC_LABEL
	}
	if (MR_INT_NE(MR_r2,0)) {
		MR_GOTO_LAB(libs__handle_options__usage_2_0_i18);
	}
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(library__version_1_0,
		libs__handle_options__usage_2_0_i4);
MR_def_label(libs__handle_options__usage_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_TAG_COMMON(1,2,1);
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = (MR_Word) MR_string_const("Mercury Compiler, version ", 26);
	MR_tfield(1, MR_r1, 1) = MR_tempr1;
	}
	MR_np_call_localret_ent(io__write_strings_3_0,
		libs__handle_options__usage_2_0_i7);
MR_def_label(libs__handle_options__usage_2_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(1,2,3);
	MR_np_call_localret_ent(io__write_strings_3_0,
		libs__handle_options__usage_2_0_i8);
MR_def_label(libs__handle_options__usage_2_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__libs__handle_options__usage_2_0
{
#line 2503 "handle_options.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&libs__handle_options__mutable_variable_already_printed_usage_lock,
                "libs__handle_options__mutable_variable_already_printed_usage_lock");
#endif
;}
#line 11737 "libs.handle_options.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__libs__handle_options__usage_2_0
	X = (MR_Integer) 1;
{
#line 2503 "handle_options.m"
libs__handle_options__mutable_variable_already_printed_usage = X;
;}
#line 11748 "libs.handle_options.c"
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__libs__handle_options__usage_2_0
{
#line 2503 "handle_options.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&libs__handle_options__mutable_variable_already_printed_usage_lock,
                "libs__handle_options__mutable_variable_already_printed_usage_lock");
#endif
;}
#line 11760 "libs.handle_options.c"
#undef	MR_PROC_LABEL
	}
	MR_decr_sp_and_return(1);
MR_def_label(libs__handle_options__usage_2_0,18)
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
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(9,3);
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
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_TAG_COMMON(1,2,11);
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = (MR_Word) MR_string_const("Name: mmc -- Melbourne Mercury Compiler, version ", 49);
	MR_tfield(1, MR_r1, 1) = MR_tempr1;
	}
	MR_np_call_localret_ent(io__write_strings_3_0,
		libs__handle_options__long_usage_2_0_i6);
MR_def_label(libs__handle_options__long_usage_2_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("Copyright: Copyright (C) 1993-2013 The University of Melbourne\n", 63);
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
	MR_init_label6(libs__handle_options__split_grade_string_2_2_0,37,5,6,8,10,1)
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
		MR_GOTO_LAB(libs__handle_options__split_grade_string_2_2_0_i37);
	}
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__handle_options__split_grade_string_2_2_0,37)
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
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_r1;
	MR_tfield(1, MR_r2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(2);
MR_def_label(libs__handle_options__split_grade_string_2_2_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tfield(1, MR_r2, 1);
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
	MR_init_label5(libs__handle_options__convert_grade_option_3_0,4,5,6,8,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'convert_grade_option'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__libs__handle_options__convert_grade_option_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,8,13);
	MR_r4 = (MR_Word) MR_TAG_COMMON(0,8,14);
	MR_r5 = MR_tempr1;
	}
	MR_np_call_localret_ent(solutions__aggregate_4_0,
		libs__handle_options__convert_grade_option_3_0_i4);
MR_def_label(libs__handle_options__convert_grade_option_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(string__to_char_list_2_0,
		libs__handle_options__convert_grade_option_3_0_i5);
MR_def_label(libs__handle_options__convert_grade_option_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(libs__handle_options__split_grade_string_2_2_0,
		libs__handle_options__convert_grade_option_3_0_i6);
MR_def_label(libs__handle_options__convert_grade_option_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(libs__handle_options__convert_grade_option_3_0_i1);
	}
	MR_sv(2) = MR_r2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(libs__handle_options, grade_component);
	MR_np_call_localret_ent(set__init_1_0,
		libs__handle_options__convert_grade_option_3_0_i8);
MR_def_label(libs__handle_options__convert_grade_option_3_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,1,0);
	MR_r4 = (MR_Word) MR_TAG_COMMON(0,8,15);
	MR_r5 = MR_sv(2);
	MR_r6 = MR_sv(1);
	MR_r7 = MR_tempr1;
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(list__foldl2_6_4);
	}
MR_def_label(libs__handle_options__convert_grade_option_3_0,1)
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
#line 2503 "handle_options.m"
#ifdef MR_THREAD_SAFE
   pthread_mutex_init(&libs__handle_options__mutable_variable_already_printed_usage_lock, MR_MUTEX_ATTR);
#endif
;}
#line 12095 "libs.handle_options.c"
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
#line 2503 "handle_options.m"
#ifdef MR_THREAD_SAFE
   pthread_mutex_init(&libs__handle_options__mutable_variable_already_printed_usage_lock, MR_MUTEX_ATTR);
#endif
;}
#line 12129 "libs.handle_options.c"
	MR_RELEASE_GLOBAL_LOCK("pre_initialise_mutable_already_printed_usage");
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__libs__handle_options__initialise_mutable_already_printed_usage_0_0
{
#line 2503 "handle_options.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&libs__handle_options__mutable_variable_already_printed_usage_lock,
                "libs__handle_options__mutable_variable_already_printed_usage_lock");
#endif
;}
#line 12142 "libs.handle_options.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__libs__handle_options__initialise_mutable_already_printed_usage_0_0
	X = (MR_Integer) 0;
{
#line 2503 "handle_options.m"
libs__handle_options__mutable_variable_already_printed_usage = X;
;}
#line 12153 "libs.handle_options.c"
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__libs__handle_options__initialise_mutable_already_printed_usage_0_0
{
#line 2503 "handle_options.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&libs__handle_options__mutable_variable_already_printed_usage_lock,
                "libs__handle_options__mutable_variable_already_printed_usage_lock");
#endif
;}
#line 12165 "libs.handle_options.c"
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
	MR_init_label10(libs__handle_options__grade_component_table_5_0,3,4,5,6,7,8,9,10,11,12)
	MR_init_label10(libs__handle_options__grade_component_table_5_0,13,14,15,16,17,18,19,20,21,22)
	MR_init_label10(libs__handle_options__grade_component_table_5_0,23,24,25,26,27,28,29,30,31,32)
	MR_init_label10(libs__handle_options__grade_component_table_5_0,33,34,35,36,37,38,39,40,41,42)
	MR_init_label10(libs__handle_options__grade_component_table_5_0,43,44,45,46,47,48,49,50,51,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'grade_component_table'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(libs__handle_options__grade_component_table_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("gc", 2)) != 0)) {
		MR_GOTO_LAB(libs__handle_options__grade_component_table_5_0_i3);
	}
	MR_r2 = (MR_Integer) 3;
	MR_r3 = (MR_Word) MR_TAG_COMMON(1,1,38);
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	MR_r5 = (MR_Integer) 1;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__handle_options__grade_component_table_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("hl", 2)) != 0)) {
		MR_GOTO_LAB(libs__handle_options__grade_component_table_5_0_i4);
	}
	MR_r2 = (MR_Integer) 0;
	MR_r3 = (MR_Word) MR_TAG_COMMON(1,1,45);
	MR_r4 = (MR_Word) MR_TAG_COMMON(1,6,3);
	MR_r5 = (MR_Integer) 1;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__handle_options__grade_component_table_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("il", 2)) != 0)) {
		MR_GOTO_LAB(libs__handle_options__grade_component_table_5_0_i5);
	}
	MR_r2 = (MR_Integer) 0;
	MR_r3 = (MR_Word) MR_TAG_COMMON(1,1,45);
	MR_r4 = (MR_Word) MR_TAG_COMMON(1,6,4);
	MR_r5 = (MR_Integer) 1;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__handle_options__grade_component_table_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("mm", 2)) != 0)) {
		MR_GOTO_LAB(libs__handle_options__grade_component_table_5_0_i6);
	}
	MR_r2 = (MR_Integer) 7;
	MR_r3 = (MR_Word) MR_TAG_COMMON(1,1,73);
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	MR_r5 = (MR_Integer) 0;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__handle_options__grade_component_table_5_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("tr", 2)) != 0)) {
		MR_GOTO_LAB(libs__handle_options__grade_component_table_5_0_i7);
	}
	MR_r2 = (MR_Integer) 6;
	MR_r3 = (MR_Word) MR_TAG_COMMON(1,1,111);
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	MR_r5 = (MR_Integer) 1;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__handle_options__grade_component_table_5_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("agc", 3)) != 0)) {
		MR_GOTO_LAB(libs__handle_options__grade_component_table_5_0_i8);
	}
	MR_r2 = (MR_Integer) 3;
	MR_r3 = (MR_Word) MR_TAG_COMMON(1,1,2);
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	MR_r5 = (MR_Integer) 1;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__handle_options__grade_component_table_5_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("dmm", 3)) != 0)) {
		MR_GOTO_LAB(libs__handle_options__grade_component_table_5_0_i9);
	}
	MR_r2 = (MR_Integer) 7;
	MR_r3 = (MR_Word) MR_TAG_COMMON(1,1,26);
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	MR_r5 = (MR_Integer) 0;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__handle_options__grade_component_table_5_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("gcd", 3)) != 0)) {
		MR_GOTO_LAB(libs__handle_options__grade_component_table_5_0_i10);
	}
	MR_r2 = (MR_Integer) 3;
	MR_r3 = (MR_Word) MR_TAG_COMMON(1,1,39);
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	MR_r5 = (MR_Integer) 1;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__handle_options__grade_component_table_5_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("hgc", 3)) != 0)) {
		MR_GOTO_LAB(libs__handle_options__grade_component_table_5_0_i11);
	}
	MR_r2 = (MR_Integer) 3;
	MR_r3 = (MR_Word) MR_TAG_COMMON(1,1,40);
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	MR_r5 = (MR_Integer) 1;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__handle_options__grade_component_table_5_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("hlc", 3)) != 0)) {
		MR_GOTO_LAB(libs__handle_options__grade_component_table_5_0_i12);
	}
	MR_r2 = (MR_Integer) 0;
	MR_r3 = (MR_Word) MR_TAG_COMMON(1,1,56);
	MR_r4 = (MR_Word) MR_TAG_COMMON(1,6,3);
	MR_r5 = (MR_Integer) 1;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__handle_options__grade_component_table_5_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("ilc", 3)) != 0)) {
		MR_GOTO_LAB(libs__handle_options__grade_component_table_5_0_i13);
	}
	MR_r2 = (MR_Integer) 0;
	MR_r3 = (MR_Word) MR_TAG_COMMON(1,1,56);
	MR_r4 = (MR_Word) MR_TAG_COMMON(1,6,4);
	MR_r5 = (MR_Integer) 1;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__handle_options__grade_component_table_5_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("mps", 3)) != 0)) {
		MR_GOTO_LAB(libs__handle_options__grade_component_table_5_0_i14);
	}
	MR_r2 = (MR_Integer) 3;
	MR_r3 = (MR_Word) MR_TAG_COMMON(1,1,76);
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	MR_r5 = (MR_Integer) 1;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__handle_options__grade_component_table_5_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("par", 3)) != 0)) {
		MR_GOTO_LAB(libs__handle_options__grade_component_table_5_0_i15);
	}
	MR_r2 = (MR_Integer) 1;
	MR_r3 = (MR_Word) MR_TAG_COMMON(1,1,79);
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	MR_r5 = (MR_Integer) 1;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__handle_options__grade_component_table_5_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("reg", 3)) != 0)) {
		MR_GOTO_LAB(libs__handle_options__grade_component_table_5_0_i16);
	}
	MR_r2 = (MR_Integer) 0;
	MR_r3 = (MR_Word) MR_TAG_COMMON(1,1,103);
	MR_r4 = (MR_Word) MR_TAG_COMMON(1,6,0);
	MR_r5 = (MR_Integer) 1;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__handle_options__grade_component_table_5_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("spf", 3)) != 0)) {
		MR_GOTO_LAB(libs__handle_options__grade_component_table_5_0_i17);
	}
	MR_r2 = (MR_Integer) 8;
	MR_r3 = (MR_Word) MR_TAG_COMMON(1,1,105);
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	MR_r5 = (MR_Integer) 1;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__handle_options__grade_component_table_5_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("tsc", 3)) != 0)) {
		MR_GOTO_LAB(libs__handle_options__grade_component_table_5_0_i18);
	}
	MR_r2 = (MR_Integer) 5;
	MR_r3 = (MR_Word) MR_TAG_COMMON(1,1,115);
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	MR_r5 = (MR_Integer) 1;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__handle_options__grade_component_table_5_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("tsw", 3)) != 0)) {
		MR_GOTO_LAB(libs__handle_options__grade_component_table_5_0_i19);
	}
	MR_r2 = (MR_Integer) 5;
	MR_r3 = (MR_Word) MR_TAG_COMMON(1,1,117);
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	MR_r5 = (MR_Integer) 1;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__handle_options__grade_component_table_5_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("exts", 4)) != 0)) {
		MR_GOTO_LAB(libs__handle_options__grade_component_table_5_0_i20);
	}
	MR_r2 = (MR_Integer) 12;
	MR_r3 = (MR_Word) MR_TAG_COMMON(1,1,36);
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	MR_r5 = (MR_Integer) 1;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__handle_options__grade_component_table_5_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("fast", 4)) != 0)) {
		MR_GOTO_LAB(libs__handle_options__grade_component_table_5_0_i21);
	}
	MR_r2 = (MR_Integer) 0;
	MR_r3 = (MR_Word) MR_TAG_COMMON(1,1,37);
	MR_r4 = (MR_Word) MR_TAG_COMMON(1,6,0);
	MR_r5 = (MR_Integer) 1;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__handle_options__grade_component_table_5_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("java", 4)) != 0)) {
		MR_GOTO_LAB(libs__handle_options__grade_component_table_5_0_i22);
	}
	MR_r2 = (MR_Integer) 0;
	MR_r3 = (MR_Word) MR_TAG_COMMON(1,1,18);
	MR_r4 = (MR_Word) MR_TAG_COMMON(1,6,5);
	MR_r5 = (MR_Integer) 1;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__handle_options__grade_component_table_5_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("jump", 4)) != 0)) {
		MR_GOTO_LAB(libs__handle_options__grade_component_table_5_0_i23);
	}
	MR_r2 = (MR_Integer) 0;
	MR_r3 = (MR_Word) MR_TAG_COMMON(1,1,64);
	MR_r4 = (MR_Word) MR_TAG_COMMON(1,6,0);
	MR_r5 = (MR_Integer) 1;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__handle_options__grade_component_table_5_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("mmos", 4)) != 0)) {
		MR_GOTO_LAB(libs__handle_options__grade_component_table_5_0_i24);
	}
	MR_r2 = (MR_Integer) 7;
	MR_r3 = (MR_Word) MR_TAG_COMMON(1,1,75);
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	MR_r5 = (MR_Integer) 1;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__handle_options__grade_component_table_5_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("mmsc", 4)) != 0)) {
		MR_GOTO_LAB(libs__handle_options__grade_component_table_5_0_i25);
	}
	MR_r2 = (MR_Integer) 7;
	MR_r3 = (MR_Word) MR_TAG_COMMON(1,1,73);
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	MR_r5 = (MR_Integer) 1;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__handle_options__grade_component_table_5_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("none", 4)) != 0)) {
		MR_GOTO_LAB(libs__handle_options__grade_component_table_5_0_i26);
	}
	MR_r2 = (MR_Integer) 0;
	MR_r3 = (MR_Word) MR_TAG_COMMON(1,1,78);
	MR_r4 = (MR_Word) MR_TAG_COMMON(1,6,0);
	MR_r5 = (MR_Integer) 1;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__handle_options__grade_component_table_5_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("prof", 4)) != 0)) {
		MR_GOTO_LAB(libs__handle_options__grade_component_table_5_0_i27);
	}
	MR_r2 = (MR_Integer) 4;
	MR_r3 = (MR_Word) MR_TAG_COMMON(1,1,83);
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	MR_r5 = (MR_Integer) 1;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__handle_options__grade_component_table_5_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("rbmm", 4)) != 0)) {
		MR_GOTO_LAB(libs__handle_options__grade_component_table_5_0_i28);
	}
	MR_r2 = (MR_Integer) 13;
	MR_r3 = (MR_Word) MR_TAG_COMMON(1,1,94);
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	MR_r5 = (MR_Integer) 1;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__handle_options__grade_component_table_5_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("debug", 5)) != 0)) {
		MR_GOTO_LAB(libs__handle_options__grade_component_table_5_0_i29);
	}
	MR_r2 = (MR_Integer) 11;
	MR_r3 = (MR_Word) MR_TAG_COMMON(1,1,21);
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	MR_r5 = (MR_Integer) 1;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__handle_options__grade_component_table_5_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("dmmos", 5)) != 0)) {
		MR_GOTO_LAB(libs__handle_options__grade_component_table_5_0_i30);
	}
	MR_r2 = (MR_Integer) 7;
	MR_r3 = (MR_Word) MR_TAG_COMMON(1,1,28);
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	MR_r5 = (MR_Integer) 1;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__handle_options__grade_component_table_5_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("dmmsc", 5)) != 0)) {
		MR_GOTO_LAB(libs__handle_options__grade_component_table_5_0_i31);
	}
	MR_r2 = (MR_Integer) 7;
	MR_r3 = (MR_Word) MR_TAG_COMMON(1,1,26);
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	MR_r5 = (MR_Integer) 1;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__handle_options__grade_component_table_5_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("rbmmd", 5)) != 0)) {
		MR_GOTO_LAB(libs__handle_options__grade_component_table_5_0_i32);
	}
	MR_r2 = (MR_Integer) 13;
	MR_r3 = (MR_Word) MR_TAG_COMMON(1,1,96);
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	MR_r5 = (MR_Integer) 1;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__handle_options__grade_component_table_5_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("rbmmp", 5)) != 0)) {
		MR_GOTO_LAB(libs__handle_options__grade_component_table_5_0_i33);
	}
	MR_r2 = (MR_Integer) 13;
	MR_r3 = (MR_Word) MR_TAG_COMMON(1,1,101);
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	MR_r5 = (MR_Integer) 1;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__handle_options__grade_component_table_5_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("stseg", 5)) != 0)) {
		MR_GOTO_LAB(libs__handle_options__grade_component_table_5_0_i34);
	}
	MR_r2 = (MR_Integer) 12;
	MR_r3 = (MR_Word) MR_TAG_COMMON(1,1,108);
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	MR_r5 = (MR_Integer) 1;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__handle_options__grade_component_table_5_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("trseg", 5)) != 0)) {
		MR_GOTO_LAB(libs__handle_options__grade_component_table_5_0_i35);
	}
	MR_r2 = (MR_Integer) 6;
	MR_r3 = (MR_Word) MR_TAG_COMMON(1,1,113);
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	MR_r5 = (MR_Integer) 1;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__handle_options__grade_component_table_5_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("csharp", 6)) != 0)) {
		MR_GOTO_LAB(libs__handle_options__grade_component_table_5_0_i36);
	}
	MR_r2 = (MR_Integer) 0;
	MR_r3 = (MR_Word) MR_TAG_COMMON(1,1,18);
	MR_r4 = (MR_Word) MR_TAG_COMMON(1,6,1);
	MR_r5 = (MR_Integer) 1;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__handle_options__grade_component_table_5_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("erlang", 6)) != 0)) {
		MR_GOTO_LAB(libs__handle_options__grade_component_table_5_0_i37);
	}
	MR_r2 = (MR_Integer) 0;
	MR_r3 = (MR_Word) MR_TAG_COMMON(1,1,33);
	MR_r4 = (MR_Word) MR_TAG_COMMON(1,6,2);
	MR_r5 = (MR_Integer) 1;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__handle_options__grade_component_table_5_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("picreg", 6)) != 0)) {
		MR_GOTO_LAB(libs__handle_options__grade_component_table_5_0_i38);
	}
	MR_r2 = (MR_Integer) 9;
	MR_r3 = (MR_Word) MR_TAG_COMMON(1,1,80);
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	MR_r5 = (MR_Integer) 1;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__handle_options__grade_component_table_5_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("rbmmdp", 6)) != 0)) {
		MR_GOTO_LAB(libs__handle_options__grade_component_table_5_0_i39);
	}
	MR_r2 = (MR_Integer) 13;
	MR_r3 = (MR_Word) MR_TAG_COMMON(1,1,99);
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	MR_r5 = (MR_Integer) 1;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__handle_options__grade_component_table_5_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("hl_nest", 7)) != 0)) {
		MR_GOTO_LAB(libs__handle_options__grade_component_table_5_0_i40);
	}
	MR_r2 = (MR_Integer) 0;
	MR_r3 = (MR_Word) MR_TAG_COMMON(1,1,52);
	MR_r4 = (MR_Word) MR_TAG_COMMON(1,6,3);
	MR_r5 = (MR_Integer) 1;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__handle_options__grade_component_table_5_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("memprof", 7)) != 0)) {
		MR_GOTO_LAB(libs__handle_options__grade_component_table_5_0_i41);
	}
	MR_r2 = (MR_Integer) 4;
	MR_r3 = (MR_Word) MR_TAG_COMMON(1,1,70);
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	MR_r5 = (MR_Integer) 1;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__handle_options__grade_component_table_5_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("profall", 7)) != 0)) {
		MR_GOTO_LAB(libs__handle_options__grade_component_table_5_0_i42);
	}
	MR_r2 = (MR_Integer) 4;
	MR_r3 = (MR_Word) MR_TAG_COMMON(1,1,84);
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	MR_r5 = (MR_Integer) 1;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__handle_options__grade_component_table_5_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("ssdebug", 7)) != 0)) {
		MR_GOTO_LAB(libs__handle_options__grade_component_table_5_0_i43);
	}
	MR_r2 = (MR_Integer) 11;
	MR_r3 = (MR_Word) MR_TAG_COMMON(1,1,106);
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	MR_r5 = (MR_Integer) 1;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__handle_options__grade_component_table_5_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("asm_fast", 8)) != 0)) {
		MR_GOTO_LAB(libs__handle_options__grade_component_table_5_0_i44);
	}
	MR_r2 = (MR_Integer) 0;
	MR_r3 = (MR_Word) MR_TAG_COMMON(1,1,8);
	MR_r4 = (MR_Word) MR_TAG_COMMON(1,6,0);
	MR_r5 = (MR_Integer) 1;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__handle_options__grade_component_table_5_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("asm_jump", 8)) != 0)) {
		MR_GOTO_LAB(libs__handle_options__grade_component_table_5_0_i45);
	}
	MR_r2 = (MR_Integer) 0;
	MR_r3 = (MR_Word) MR_TAG_COMMON(1,1,12);
	MR_r4 = (MR_Word) MR_TAG_COMMON(1,6,0);
	MR_r5 = (MR_Integer) 1;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__handle_options__grade_component_table_5_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("hlc_nest", 8)) != 0)) {
		MR_GOTO_LAB(libs__handle_options__grade_component_table_5_0_i46);
	}
	MR_r2 = (MR_Integer) 0;
	MR_r3 = (MR_Word) MR_TAG_COMMON(1,1,61);
	MR_r4 = (MR_Word) MR_TAG_COMMON(1,6,3);
	MR_r5 = (MR_Integer) 1;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__handle_options__grade_component_table_5_0,46)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("ll_debug", 8)) != 0)) {
		MR_GOTO_LAB(libs__handle_options__grade_component_table_5_0_i47);
	}
	MR_r2 = (MR_Integer) 10;
	MR_r3 = (MR_Word) MR_TAG_COMMON(1,1,66);
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	MR_r5 = (MR_Integer) 1;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__handle_options__grade_component_table_5_0,47)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("profdeep", 8)) != 0)) {
		MR_GOTO_LAB(libs__handle_options__grade_component_table_5_0_i48);
	}
	MR_r2 = (MR_Integer) 4;
	MR_r3 = (MR_Word) MR_TAG_COMMON(1,1,89);
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	MR_r5 = (MR_Integer) 1;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__handle_options__grade_component_table_5_0,48)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("proftime", 8)) != 0)) {
		MR_GOTO_LAB(libs__handle_options__grade_component_table_5_0_i49);
	}
	MR_r2 = (MR_Integer) 4;
	MR_r3 = (MR_Word) MR_TAG_COMMON(1,1,91);
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	MR_r5 = (MR_Integer) 1;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__handle_options__grade_component_table_5_0,49)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("decldebug", 9)) != 0)) {
		MR_GOTO_LAB(libs__handle_options__grade_component_table_5_0_i50);
	}
	MR_r2 = (MR_Integer) 11;
	MR_r3 = (MR_Word) MR_TAG_COMMON(1,1,23);
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	MR_r5 = (MR_Integer) 1;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__handle_options__grade_component_table_5_0,50)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("profcalls", 9)) != 0)) {
		MR_GOTO_LAB(libs__handle_options__grade_component_table_5_0_i51);
	}
	MR_r2 = (MR_Integer) 4;
	MR_r3 = (MR_Word) MR_TAG_COMMON(1,1,85);
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	MR_r5 = (MR_Integer) 1;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__handle_options__grade_component_table_5_0,51)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("threadscope", 11)) != 0)) {
		MR_GOTO_LAB(libs__handle_options__grade_component_table_5_0_i1);
	}
	MR_r2 = (MR_Integer) 2;
	MR_r3 = (MR_Word) MR_TAG_COMMON(1,1,109);
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	MR_r5 = (MR_Integer) 1;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__handle_options__grade_component_table_5_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(libs__handle_options_module32)
	MR_init_entry1(libs__handle_options__grade_component_table_5_2);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__libs__handle_options__grade_component_table_5_2);
	MR_init_label10(libs__handle_options__grade_component_table_5_2,2,3,4,5,6,7,8,9,10,11)
	MR_init_label10(libs__handle_options__grade_component_table_5_2,12,13,14,15,16,17,18,19,20,21)
	MR_init_label10(libs__handle_options__grade_component_table_5_2,22,23,24,25,26,27,28,29,30,31)
	MR_init_label10(libs__handle_options__grade_component_table_5_2,32,33,34,35,36,37,38,39,40,41)
	MR_init_label9(libs__handle_options__grade_component_table_5_2,42,43,44,45,46,47,48,49,50)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'grade_component_table'/5 mode 2 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(libs__handle_options__grade_component_table_5_2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_mkframe("pred libs.handle_options.grade_component_table/5-2", 0,
		MR_LABEL_AP(libs__handle_options__grade_component_table_5_2_i2));
	MR_r1 = (MR_Word) MR_string_const("none", 4);
	MR_r2 = (MR_Integer) 0;
	MR_r3 = (MR_Word) MR_TAG_COMMON(1,1,78);
	MR_r4 = (MR_Word) MR_TAG_COMMON(1,6,0);
	MR_r5 = (MR_Integer) 1;
	MR_succeed();
MR_def_label(libs__handle_options__grade_component_table_5_2,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_redoip_slot_word(MR_maxfr) = (MR_Word) MR_LABEL_AP(libs__handle_options__grade_component_table_5_2_i3);
	MR_r1 = (MR_Word) MR_string_const("reg", 3);
	MR_r2 = (MR_Integer) 0;
	MR_r3 = (MR_Word) MR_TAG_COMMON(1,1,103);
	MR_r4 = (MR_Word) MR_TAG_COMMON(1,6,0);
	MR_r5 = (MR_Integer) 1;
	MR_succeed();
MR_def_label(libs__handle_options__grade_component_table_5_2,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_redoip_slot_word(MR_maxfr) = (MR_Word) MR_LABEL_AP(libs__handle_options__grade_component_table_5_2_i4);
	MR_r1 = (MR_Word) MR_string_const("jump", 4);
	MR_r2 = (MR_Integer) 0;
	MR_r3 = (MR_Word) MR_TAG_COMMON(1,1,64);
	MR_r4 = (MR_Word) MR_TAG_COMMON(1,6,0);
	MR_r5 = (MR_Integer) 1;
	MR_succeed();
MR_def_label(libs__handle_options__grade_component_table_5_2,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_redoip_slot_word(MR_maxfr) = (MR_Word) MR_LABEL_AP(libs__handle_options__grade_component_table_5_2_i5);
	MR_r1 = (MR_Word) MR_string_const("asm_jump", 8);
	MR_r2 = (MR_Integer) 0;
	MR_r3 = (MR_Word) MR_TAG_COMMON(1,1,12);
	MR_r4 = (MR_Word) MR_TAG_COMMON(1,6,0);
	MR_r5 = (MR_Integer) 1;
	MR_succeed();
MR_def_label(libs__handle_options__grade_component_table_5_2,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_redoip_slot_word(MR_maxfr) = (MR_Word) MR_LABEL_AP(libs__handle_options__grade_component_table_5_2_i6);
	MR_r1 = (MR_Word) MR_string_const("fast", 4);
	MR_r2 = (MR_Integer) 0;
	MR_r3 = (MR_Word) MR_TAG_COMMON(1,1,37);
	MR_r4 = (MR_Word) MR_TAG_COMMON(1,6,0);
	MR_r5 = (MR_Integer) 1;
	MR_succeed();
MR_def_label(libs__handle_options__grade_component_table_5_2,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_redoip_slot_word(MR_maxfr) = (MR_Word) MR_LABEL_AP(libs__handle_options__grade_component_table_5_2_i7);
	MR_r1 = (MR_Word) MR_string_const("asm_fast", 8);
	MR_r2 = (MR_Integer) 0;
	MR_r3 = (MR_Word) MR_TAG_COMMON(1,1,8);
	MR_r4 = (MR_Word) MR_TAG_COMMON(1,6,0);
	MR_r5 = (MR_Integer) 1;
	MR_succeed();
MR_def_label(libs__handle_options__grade_component_table_5_2,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_redoip_slot_word(MR_maxfr) = (MR_Word) MR_LABEL_AP(libs__handle_options__grade_component_table_5_2_i8);
	MR_r1 = (MR_Word) MR_string_const("hl", 2);
	MR_r2 = (MR_Integer) 0;
	MR_r3 = (MR_Word) MR_TAG_COMMON(1,1,45);
	MR_r4 = (MR_Word) MR_TAG_COMMON(1,6,3);
	MR_r5 = (MR_Integer) 1;
	MR_succeed();
MR_def_label(libs__handle_options__grade_component_table_5_2,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_redoip_slot_word(MR_maxfr) = (MR_Word) MR_LABEL_AP(libs__handle_options__grade_component_table_5_2_i9);
	MR_r1 = (MR_Word) MR_string_const("hlc", 3);
	MR_r2 = (MR_Integer) 0;
	MR_r3 = (MR_Word) MR_TAG_COMMON(1,1,56);
	MR_r4 = (MR_Word) MR_TAG_COMMON(1,6,3);
	MR_r5 = (MR_Integer) 1;
	MR_succeed();
MR_def_label(libs__handle_options__grade_component_table_5_2,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_redoip_slot_word(MR_maxfr) = (MR_Word) MR_LABEL_AP(libs__handle_options__grade_component_table_5_2_i10);
	MR_r1 = (MR_Word) MR_string_const("hl_nest", 7);
	MR_r2 = (MR_Integer) 0;
	MR_r3 = (MR_Word) MR_TAG_COMMON(1,1,52);
	MR_r4 = (MR_Word) MR_TAG_COMMON(1,6,3);
	MR_r5 = (MR_Integer) 1;
	MR_succeed();
MR_def_label(libs__handle_options__grade_component_table_5_2,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_redoip_slot_word(MR_maxfr) = (MR_Word) MR_LABEL_AP(libs__handle_options__grade_component_table_5_2_i11);
	MR_r1 = (MR_Word) MR_string_const("hlc_nest", 8);
	MR_r2 = (MR_Integer) 0;
	MR_r3 = (MR_Word) MR_TAG_COMMON(1,1,61);
	MR_r4 = (MR_Word) MR_TAG_COMMON(1,6,3);
	MR_r5 = (MR_Integer) 1;
	MR_succeed();
MR_def_label(libs__handle_options__grade_component_table_5_2,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_redoip_slot_word(MR_maxfr) = (MR_Word) MR_LABEL_AP(libs__handle_options__grade_component_table_5_2_i12);
	MR_r1 = (MR_Word) MR_string_const("il", 2);
	MR_r2 = (MR_Integer) 0;
	MR_r3 = (MR_Word) MR_TAG_COMMON(1,1,45);
	MR_r4 = (MR_Word) MR_TAG_COMMON(1,6,4);
	MR_r5 = (MR_Integer) 1;
	MR_succeed();
MR_def_label(libs__handle_options__grade_component_table_5_2,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_redoip_slot_word(MR_maxfr) = (MR_Word) MR_LABEL_AP(libs__handle_options__grade_component_table_5_2_i13);
	MR_r1 = (MR_Word) MR_string_const("ilc", 3);
	MR_r2 = (MR_Integer) 0;
	MR_r3 = (MR_Word) MR_TAG_COMMON(1,1,56);
	MR_r4 = (MR_Word) MR_TAG_COMMON(1,6,4);
	MR_r5 = (MR_Integer) 1;
	MR_succeed();
MR_def_label(libs__handle_options__grade_component_table_5_2,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_redoip_slot_word(MR_maxfr) = (MR_Word) MR_LABEL_AP(libs__handle_options__grade_component_table_5_2_i14);
	MR_r1 = (MR_Word) MR_string_const("java", 4);
	MR_r2 = (MR_Integer) 0;
	MR_r3 = (MR_Word) MR_TAG_COMMON(1,1,18);
	MR_r4 = (MR_Word) MR_TAG_COMMON(1,6,5);
	MR_r5 = (MR_Integer) 1;
	MR_succeed();
MR_def_label(libs__handle_options__grade_component_table_5_2,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_redoip_slot_word(MR_maxfr) = (MR_Word) MR_LABEL_AP(libs__handle_options__grade_component_table_5_2_i15);
	MR_r1 = (MR_Word) MR_string_const("csharp", 6);
	MR_r2 = (MR_Integer) 0;
	MR_r3 = (MR_Word) MR_TAG_COMMON(1,1,18);
	MR_r4 = (MR_Word) MR_TAG_COMMON(1,6,1);
	MR_r5 = (MR_Integer) 1;
	MR_succeed();
MR_def_label(libs__handle_options__grade_component_table_5_2,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_redoip_slot_word(MR_maxfr) = (MR_Word) MR_LABEL_AP(libs__handle_options__grade_component_table_5_2_i16);
	MR_r1 = (MR_Word) MR_string_const("erlang", 6);
	MR_r2 = (MR_Integer) 0;
	MR_r3 = (MR_Word) MR_TAG_COMMON(1,1,33);
	MR_r4 = (MR_Word) MR_TAG_COMMON(1,6,2);
	MR_r5 = (MR_Integer) 1;
	MR_succeed();
MR_def_label(libs__handle_options__grade_component_table_5_2,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_redoip_slot_word(MR_maxfr) = (MR_Word) MR_LABEL_AP(libs__handle_options__grade_component_table_5_2_i17);
	MR_r1 = (MR_Word) MR_string_const("par", 3);
	MR_r2 = (MR_Integer) 1;
	MR_r3 = (MR_Word) MR_TAG_COMMON(1,1,79);
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	MR_r5 = (MR_Integer) 1;
	MR_succeed();
MR_def_label(libs__handle_options__grade_component_table_5_2,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_redoip_slot_word(MR_maxfr) = (MR_Word) MR_LABEL_AP(libs__handle_options__grade_component_table_5_2_i18);
	MR_r1 = (MR_Word) MR_string_const("threadscope", 11);
	MR_r2 = (MR_Integer) 2;
	MR_r3 = (MR_Word) MR_TAG_COMMON(1,1,109);
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	MR_r5 = (MR_Integer) 1;
	MR_succeed();
MR_def_label(libs__handle_options__grade_component_table_5_2,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_redoip_slot_word(MR_maxfr) = (MR_Word) MR_LABEL_AP(libs__handle_options__grade_component_table_5_2_i19);
	MR_r1 = (MR_Word) MR_string_const("gc", 2);
	MR_r2 = (MR_Integer) 3;
	MR_r3 = (MR_Word) MR_TAG_COMMON(1,1,38);
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	MR_r5 = (MR_Integer) 1;
	MR_succeed();
MR_def_label(libs__handle_options__grade_component_table_5_2,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_redoip_slot_word(MR_maxfr) = (MR_Word) MR_LABEL_AP(libs__handle_options__grade_component_table_5_2_i20);
	MR_r1 = (MR_Word) MR_string_const("gcd", 3);
	MR_r2 = (MR_Integer) 3;
	MR_r3 = (MR_Word) MR_TAG_COMMON(1,1,39);
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	MR_r5 = (MR_Integer) 1;
	MR_succeed();
MR_def_label(libs__handle_options__grade_component_table_5_2,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_redoip_slot_word(MR_maxfr) = (MR_Word) MR_LABEL_AP(libs__handle_options__grade_component_table_5_2_i21);
	MR_r1 = (MR_Word) MR_string_const("hgc", 3);
	MR_r2 = (MR_Integer) 3;
	MR_r3 = (MR_Word) MR_TAG_COMMON(1,1,40);
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	MR_r5 = (MR_Integer) 1;
	MR_succeed();
MR_def_label(libs__handle_options__grade_component_table_5_2,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_redoip_slot_word(MR_maxfr) = (MR_Word) MR_LABEL_AP(libs__handle_options__grade_component_table_5_2_i22);
	MR_r1 = (MR_Word) MR_string_const("mps", 3);
	MR_r2 = (MR_Integer) 3;
	MR_r3 = (MR_Word) MR_TAG_COMMON(1,1,76);
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	MR_r5 = (MR_Integer) 1;
	MR_succeed();
MR_def_label(libs__handle_options__grade_component_table_5_2,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_redoip_slot_word(MR_maxfr) = (MR_Word) MR_LABEL_AP(libs__handle_options__grade_component_table_5_2_i23);
	MR_r1 = (MR_Word) MR_string_const("agc", 3);
	MR_r2 = (MR_Integer) 3;
	MR_r3 = (MR_Word) MR_TAG_COMMON(1,1,2);
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	MR_r5 = (MR_Integer) 1;
	MR_succeed();
MR_def_label(libs__handle_options__grade_component_table_5_2,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_redoip_slot_word(MR_maxfr) = (MR_Word) MR_LABEL_AP(libs__handle_options__grade_component_table_5_2_i24);
	MR_r1 = (MR_Word) MR_string_const("prof", 4);
	MR_r2 = (MR_Integer) 4;
	MR_r3 = (MR_Word) MR_TAG_COMMON(1,1,83);
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	MR_r5 = (MR_Integer) 1;
	MR_succeed();
MR_def_label(libs__handle_options__grade_component_table_5_2,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_redoip_slot_word(MR_maxfr) = (MR_Word) MR_LABEL_AP(libs__handle_options__grade_component_table_5_2_i25);
	MR_r1 = (MR_Word) MR_string_const("proftime", 8);
	MR_r2 = (MR_Integer) 4;
	MR_r3 = (MR_Word) MR_TAG_COMMON(1,1,91);
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	MR_r5 = (MR_Integer) 1;
	MR_succeed();
MR_def_label(libs__handle_options__grade_component_table_5_2,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_redoip_slot_word(MR_maxfr) = (MR_Word) MR_LABEL_AP(libs__handle_options__grade_component_table_5_2_i26);
	MR_r1 = (MR_Word) MR_string_const("profcalls", 9);
	MR_r2 = (MR_Integer) 4;
	MR_r3 = (MR_Word) MR_TAG_COMMON(1,1,85);
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	MR_r5 = (MR_Integer) 1;
	MR_succeed();
MR_def_label(libs__handle_options__grade_component_table_5_2,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_redoip_slot_word(MR_maxfr) = (MR_Word) MR_LABEL_AP(libs__handle_options__grade_component_table_5_2_i27);
	MR_r1 = (MR_Word) MR_string_const("memprof", 7);
	MR_r2 = (MR_Integer) 4;
	MR_r3 = (MR_Word) MR_TAG_COMMON(1,1,70);
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	MR_r5 = (MR_Integer) 1;
	MR_succeed();
MR_def_label(libs__handle_options__grade_component_table_5_2,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_redoip_slot_word(MR_maxfr) = (MR_Word) MR_LABEL_AP(libs__handle_options__grade_component_table_5_2_i28);
	MR_r1 = (MR_Word) MR_string_const("profall", 7);
	MR_r2 = (MR_Integer) 4;
	MR_r3 = (MR_Word) MR_TAG_COMMON(1,1,84);
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	MR_r5 = (MR_Integer) 1;
	MR_succeed();
MR_def_label(libs__handle_options__grade_component_table_5_2,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_redoip_slot_word(MR_maxfr) = (MR_Word) MR_LABEL_AP(libs__handle_options__grade_component_table_5_2_i29);
	MR_r1 = (MR_Word) MR_string_const("profdeep", 8);
	MR_r2 = (MR_Integer) 4;
	MR_r3 = (MR_Word) MR_TAG_COMMON(1,1,89);
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	MR_r5 = (MR_Integer) 1;
	MR_succeed();
MR_def_label(libs__handle_options__grade_component_table_5_2,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_redoip_slot_word(MR_maxfr) = (MR_Word) MR_LABEL_AP(libs__handle_options__grade_component_table_5_2_i30);
	MR_r1 = (MR_Word) MR_string_const("tsw", 3);
	MR_r2 = (MR_Integer) 5;
	MR_r3 = (MR_Word) MR_TAG_COMMON(1,1,117);
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	MR_r5 = (MR_Integer) 1;
	MR_succeed();
MR_def_label(libs__handle_options__grade_component_table_5_2,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_redoip_slot_word(MR_maxfr) = (MR_Word) MR_LABEL_AP(libs__handle_options__grade_component_table_5_2_i31);
	MR_r1 = (MR_Word) MR_string_const("tsc", 3);
	MR_r2 = (MR_Integer) 5;
	MR_r3 = (MR_Word) MR_TAG_COMMON(1,1,115);
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	MR_r5 = (MR_Integer) 1;
	MR_succeed();
MR_def_label(libs__handle_options__grade_component_table_5_2,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_redoip_slot_word(MR_maxfr) = (MR_Word) MR_LABEL_AP(libs__handle_options__grade_component_table_5_2_i32);
	MR_r1 = (MR_Word) MR_string_const("tr", 2);
	MR_r2 = (MR_Integer) 6;
	MR_r3 = (MR_Word) MR_TAG_COMMON(1,1,111);
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	MR_r5 = (MR_Integer) 1;
	MR_succeed();
MR_def_label(libs__handle_options__grade_component_table_5_2,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_redoip_slot_word(MR_maxfr) = (MR_Word) MR_LABEL_AP(libs__handle_options__grade_component_table_5_2_i33);
	MR_r1 = (MR_Word) MR_string_const("trseg", 5);
	MR_r2 = (MR_Integer) 6;
	MR_r3 = (MR_Word) MR_TAG_COMMON(1,1,113);
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	MR_r5 = (MR_Integer) 1;
	MR_succeed();
MR_def_label(libs__handle_options__grade_component_table_5_2,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_redoip_slot_word(MR_maxfr) = (MR_Word) MR_LABEL_AP(libs__handle_options__grade_component_table_5_2_i34);
	MR_r1 = (MR_Word) MR_string_const("mm", 2);
	MR_r2 = (MR_Integer) 7;
	MR_r3 = (MR_Word) MR_TAG_COMMON(1,1,73);
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	MR_r5 = (MR_Integer) 0;
	MR_succeed();
MR_def_label(libs__handle_options__grade_component_table_5_2,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_redoip_slot_word(MR_maxfr) = (MR_Word) MR_LABEL_AP(libs__handle_options__grade_component_table_5_2_i35);
	MR_r1 = (MR_Word) MR_string_const("dmm", 3);
	MR_r2 = (MR_Integer) 7;
	MR_r3 = (MR_Word) MR_TAG_COMMON(1,1,26);
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	MR_r5 = (MR_Integer) 0;
	MR_succeed();
MR_def_label(libs__handle_options__grade_component_table_5_2,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_redoip_slot_word(MR_maxfr) = (MR_Word) MR_LABEL_AP(libs__handle_options__grade_component_table_5_2_i36);
	MR_r1 = (MR_Word) MR_string_const("mmsc", 4);
	MR_r2 = (MR_Integer) 7;
	MR_r3 = (MR_Word) MR_TAG_COMMON(1,1,73);
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	MR_r5 = (MR_Integer) 1;
	MR_succeed();
MR_def_label(libs__handle_options__grade_component_table_5_2,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_redoip_slot_word(MR_maxfr) = (MR_Word) MR_LABEL_AP(libs__handle_options__grade_component_table_5_2_i37);
	MR_r1 = (MR_Word) MR_string_const("dmmsc", 5);
	MR_r2 = (MR_Integer) 7;
	MR_r3 = (MR_Word) MR_TAG_COMMON(1,1,26);
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	MR_r5 = (MR_Integer) 1;
	MR_succeed();
MR_def_label(libs__handle_options__grade_component_table_5_2,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_redoip_slot_word(MR_maxfr) = (MR_Word) MR_LABEL_AP(libs__handle_options__grade_component_table_5_2_i38);
	MR_r1 = (MR_Word) MR_string_const("mmos", 4);
	MR_r2 = (MR_Integer) 7;
	MR_r3 = (MR_Word) MR_TAG_COMMON(1,1,75);
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	MR_r5 = (MR_Integer) 1;
	MR_succeed();
MR_def_label(libs__handle_options__grade_component_table_5_2,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_redoip_slot_word(MR_maxfr) = (MR_Word) MR_LABEL_AP(libs__handle_options__grade_component_table_5_2_i39);
	MR_r1 = (MR_Word) MR_string_const("dmmos", 5);
	MR_r2 = (MR_Integer) 7;
	MR_r3 = (MR_Word) MR_TAG_COMMON(1,1,28);
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	MR_r5 = (MR_Integer) 1;
	MR_succeed();
MR_def_label(libs__handle_options__grade_component_table_5_2,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_redoip_slot_word(MR_maxfr) = (MR_Word) MR_LABEL_AP(libs__handle_options__grade_component_table_5_2_i40);
	MR_r1 = (MR_Word) MR_string_const("spf", 3);
	MR_r2 = (MR_Integer) 8;
	MR_r3 = (MR_Word) MR_TAG_COMMON(1,1,105);
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	MR_r5 = (MR_Integer) 1;
	MR_succeed();
MR_def_label(libs__handle_options__grade_component_table_5_2,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_redoip_slot_word(MR_maxfr) = (MR_Word) MR_LABEL_AP(libs__handle_options__grade_component_table_5_2_i41);
	MR_r1 = (MR_Word) MR_string_const("picreg", 6);
	MR_r2 = (MR_Integer) 9;
	MR_r3 = (MR_Word) MR_TAG_COMMON(1,1,80);
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	MR_r5 = (MR_Integer) 1;
	MR_succeed();
MR_def_label(libs__handle_options__grade_component_table_5_2,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_redoip_slot_word(MR_maxfr) = (MR_Word) MR_LABEL_AP(libs__handle_options__grade_component_table_5_2_i42);
	MR_r1 = (MR_Word) MR_string_const("decldebug", 9);
	MR_r2 = (MR_Integer) 11;
	MR_r3 = (MR_Word) MR_TAG_COMMON(1,1,23);
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	MR_r5 = (MR_Integer) 1;
	MR_succeed();
MR_def_label(libs__handle_options__grade_component_table_5_2,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_redoip_slot_word(MR_maxfr) = (MR_Word) MR_LABEL_AP(libs__handle_options__grade_component_table_5_2_i43);
	MR_r1 = (MR_Word) MR_string_const("debug", 5);
	MR_r2 = (MR_Integer) 11;
	MR_r3 = (MR_Word) MR_TAG_COMMON(1,1,21);
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	MR_r5 = (MR_Integer) 1;
	MR_succeed();
MR_def_label(libs__handle_options__grade_component_table_5_2,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_redoip_slot_word(MR_maxfr) = (MR_Word) MR_LABEL_AP(libs__handle_options__grade_component_table_5_2_i44);
	MR_r1 = (MR_Word) MR_string_const("ssdebug", 7);
	MR_r2 = (MR_Integer) 11;
	MR_r3 = (MR_Word) MR_TAG_COMMON(1,1,106);
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	MR_r5 = (MR_Integer) 1;
	MR_succeed();
MR_def_label(libs__handle_options__grade_component_table_5_2,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_redoip_slot_word(MR_maxfr) = (MR_Word) MR_LABEL_AP(libs__handle_options__grade_component_table_5_2_i45);
	MR_r1 = (MR_Word) MR_string_const("ll_debug", 8);
	MR_r2 = (MR_Integer) 10;
	MR_r3 = (MR_Word) MR_TAG_COMMON(1,1,66);
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	MR_r5 = (MR_Integer) 1;
	MR_succeed();
MR_def_label(libs__handle_options__grade_component_table_5_2,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_redoip_slot_word(MR_maxfr) = (MR_Word) MR_LABEL_AP(libs__handle_options__grade_component_table_5_2_i46);
	MR_r1 = (MR_Word) MR_string_const("exts", 4);
	MR_r2 = (MR_Integer) 12;
	MR_r3 = (MR_Word) MR_TAG_COMMON(1,1,36);
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	MR_r5 = (MR_Integer) 1;
	MR_succeed();
MR_def_label(libs__handle_options__grade_component_table_5_2,46)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_redoip_slot_word(MR_maxfr) = (MR_Word) MR_LABEL_AP(libs__handle_options__grade_component_table_5_2_i47);
	MR_r1 = (MR_Word) MR_string_const("stseg", 5);
	MR_r2 = (MR_Integer) 12;
	MR_r3 = (MR_Word) MR_TAG_COMMON(1,1,108);
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	MR_r5 = (MR_Integer) 1;
	MR_succeed();
MR_def_label(libs__handle_options__grade_component_table_5_2,47)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_redoip_slot_word(MR_maxfr) = (MR_Word) MR_LABEL_AP(libs__handle_options__grade_component_table_5_2_i48);
	MR_r1 = (MR_Word) MR_string_const("rbmm", 4);
	MR_r2 = (MR_Integer) 13;
	MR_r3 = (MR_Word) MR_TAG_COMMON(1,1,94);
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	MR_r5 = (MR_Integer) 1;
	MR_succeed();
MR_def_label(libs__handle_options__grade_component_table_5_2,48)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_redoip_slot_word(MR_maxfr) = (MR_Word) MR_LABEL_AP(libs__handle_options__grade_component_table_5_2_i49);
	MR_r1 = (MR_Word) MR_string_const("rbmmd", 5);
	MR_r2 = (MR_Integer) 13;
	MR_r3 = (MR_Word) MR_TAG_COMMON(1,1,96);
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	MR_r5 = (MR_Integer) 1;
	MR_succeed();
MR_def_label(libs__handle_options__grade_component_table_5_2,49)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_redoip_slot_word(MR_maxfr) = (MR_Word) MR_LABEL_AP(libs__handle_options__grade_component_table_5_2_i50);
	MR_r1 = (MR_Word) MR_string_const("rbmmp", 5);
	MR_r2 = (MR_Integer) 13;
	MR_r3 = (MR_Word) MR_TAG_COMMON(1,1,101);
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	MR_r5 = (MR_Integer) 1;
	MR_succeed();
MR_def_label(libs__handle_options__grade_component_table_5_2,50)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("rbmmdp", 6);
	MR_r2 = (MR_Integer) 13;
	MR_r3 = (MR_Word) MR_TAG_COMMON(1,1,99);
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	MR_r5 = (MR_Integer) 1;
	MR_succeed_discard();
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
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(libs__handle_options__grade_component_table_5_0,
		libs__handle_options__string_to_grade_component_6_0_i4);
MR_def_label(libs__handle_options__string_to_grade_component_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(libs__handle_options__string_to_grade_component_6_0_i2);
	}
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = MR_sv(2);
	MR_tfield(1, MR_r1, 1) = MR_sv(3);
	MR_r2 = MR_sv(4);
	MR_decr_sp_and_return(5);
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
	MR_sv(5) = MR_r1;
	MR_sv(1) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(2) = MR_tempr1;
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_r5;
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
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,8,16);
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
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		libs__handle_options__filter_grade_7_0_i23);
MR_def_label(libs__handle_options__filter_grade_7_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(5);
	MR_sv(5) = MR_sv(4);
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(1);
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
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = MR_sv(2);
	MR_tfield(1, MR_r1, 1) = MR_sv(3);
	MR_r2 = MR_sv(4);
	MR_decr_sp_and_return(8);
MR_def_label(libs__handle_options__filter_grade_7_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_sv(5);
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(4);
	MR_decr_sp_and_return(8);
MR_def_label(libs__handle_options__filter_grade_7_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("invalid library grade: ", 23);
	MR_r2 = MR_sv(2);
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
	MR_r2 = MR_sv(4);
	}
	MR_np_call_localret_ent(list__append_3_1,
		libs__handle_options__filter_grade_7_0_i25);
MR_def_label(libs__handle_options__filter_grade_7_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
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

MR_declare_entry(MR_do_fail);

MR_BEGIN_MODULE(libs__handle_options_module37)
	MR_init_entry1(libs__handle_options__grade_start_values_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__libs__handle_options__grade_start_values_1_0);
	MR_init_label3(libs__handle_options__grade_start_values_1_0,58,59,60)
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
		MR_LABEL_AP(libs__handle_options__grade_start_values_1_0_i58));
	MR_r2 = (MR_Word) &MR_tfield(0, (MR_Word *) &mercury_vector_common_6_0, 0);
	MR_fv(1) = (MR_Integer) 1;
	MR_r1 = MR_tfield(0, MR_r2, 0);
	MR_succeed();
MR_def_label(libs__handle_options__grade_start_values_1_0,58)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_fv(1);
	if (MR_INT_GE(MR_r2,27)) {
		MR_GOTO_LAB(libs__handle_options__grade_start_values_1_0_i59);
	}
	MR_fv(1) = ((MR_Integer) MR_fv(1) + (MR_Integer) 1);
	MR_GOTO_LAB(libs__handle_options__grade_start_values_1_0_i60);
MR_def_label(libs__handle_options__grade_start_values_1_0,59)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_redoip_slot_word(MR_curfr) = (MR_Word) MR_ENTRY(MR_do_fail);
MR_def_label(libs__handle_options__grade_start_values_1_0,60)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) &MR_tfield(0, (MR_Word *) &mercury_vector_common_6_0, (MR_Integer) MR_r2);
	MR_r1 = MR_tfield(0, MR_r2, 0);
	MR_succeed();
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
	MR_init_entry1(libs__handle_options__IntroducedFrom__pred__convert_grade_option__2722__1_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__libs__handle_options__IntroducedFrom__pred__convert_grade_option__2722__1_5_0);
	MR_init_label6(libs__handle_options__IntroducedFrom__pred__convert_grade_option__2722__1_5_0,2,5,7,9,10,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__pred__convert_grade_option__2722__1'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(libs__handle_options__IntroducedFrom__pred__convert_grade_option__2722__1_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(3) = MR_r2;
	MR_sv(4) = MR_r3;
	MR_np_call_localret_ent(libs__handle_options__grade_component_table_5_0,
		libs__handle_options__IntroducedFrom__pred__convert_grade_option__2722__1_5_0_i2);
MR_def_label(libs__handle_options__IntroducedFrom__pred__convert_grade_option__2722__1_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(libs__handle_options__IntroducedFrom__pred__convert_grade_option__2722__1_5_0_i1);
	}
	MR_sv(5) = MR_r2;
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r4;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(libs__handle_options, grade_component);
	MR_r3 = MR_sv(4);
	MR_np_call_localret_ent(set__member_2_0,
		libs__handle_options__IntroducedFrom__pred__convert_grade_option__2722__1_5_0_i5);
MR_def_label(libs__handle_options__IntroducedFrom__pred__convert_grade_option__2722__1_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(libs__handle_options__IntroducedFrom__pred__convert_grade_option__2722__1_5_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(libs__handle_options, grade_component);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(4);
	MR_np_call_localret_ent(set__insert_3_0,
		libs__handle_options__IntroducedFrom__pred__convert_grade_option__2722__1_5_0_i7);
MR_def_label(libs__handle_options__IntroducedFrom__pred__convert_grade_option__2722__1_5_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,1);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,8,17);
	MR_r4 = MR_sv(1);
	MR_r5 = MR_sv(3);
	MR_np_call_localret_ent(list__foldl_4_0,
		libs__handle_options__IntroducedFrom__pred__convert_grade_option__2722__1_5_0_i9);
MR_def_label(libs__handle_options__IntroducedFrom__pred__convert_grade_option__2722__1_5_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_sv(2),0,0)) {
		MR_GOTO_LAB(libs__handle_options__IntroducedFrom__pred__convert_grade_option__2722__1_5_0_i10);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_tfield(1, MR_sv(2), 0);
	if (MR_LTAGS_TEST(MR_tempr1,0,0)) {
		MR_GOTO_LAB(libs__handle_options__IntroducedFrom__pred__convert_grade_option__2722__1_5_0_i10);
	}
	MR_tempr2 = MR_tfield(1, MR_tempr1, 1);
	if (MR_LTAGS_TESTR(MR_tempr2,0,0)) {
		MR_GOTO_LAB(libs__handle_options__IntroducedFrom__pred__convert_grade_option__2722__1_5_0_i10);
	}
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = (MR_Integer) 170;
	MR_tfield(0, MR_tempr2, 1) = MR_tfield(1, MR_tempr1, 0);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_r4 = MR_tempr3;
	MR_tfield(1, MR_tempr3, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr3, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,1);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,8,18);
	MR_r5 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__foldl_4_0,
		libs__handle_options__IntroducedFrom__pred__convert_grade_option__2722__1_5_0_i10);
MR_def_label(libs__handle_options__IntroducedFrom__pred__convert_grade_option__2722__1_5_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r3 = MR_sv(5);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__handle_options__IntroducedFrom__pred__convert_grade_option__2722__1_5_0,1)
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
	MR_init_entry1(libs__handle_options__IntroducedFrom__pred__check_option_values__526__1_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__libs__handle_options__IntroducedFrom__pred__check_option_values__526__1_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__pred__check_option_values__526__1'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(libs__handle_options__IntroducedFrom__pred__check_option_values__526__1_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = ((MR_Integer) MR_r1 == (MR_Integer) 46);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(libs__handle_options_module43)
	MR_init_entry1(fn__libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2035__1_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2035__1_2_0);
	MR_init_label1(fn__libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2035__1_2_0,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__func__convert_options_to_globals__2035__1'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2035__1_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_r1 = MR_r2;
	MR_r2 = (MR_Word) MR_string_const("lib", 3);
	MR_np_call_localret_ent(fn__f_100_105_114_95_95_47_2_0,
		fn__libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2035__1_2_0_i2);
MR_def_label(fn__libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2035__1_2_0,2)
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
	MR_init_entry1(fn__libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2050__1_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2050__1_2_0);
	MR_init_label2(fn__libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2050__1_2_0,2,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__func__convert_options_to_globals__2050__1'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2050__1_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_r1 = MR_r2;
	MR_r2 = (MR_Word) MR_string_const("lib", 3);
	MR_np_call_localret_ent(fn__f_100_105_114_95_95_47_2_0,
		fn__libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2050__1_2_0_i2);
MR_def_label(fn__libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2050__1_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(fn__f_100_105_114_95_95_47_2_0,
		fn__libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2050__1_2_0_i3);
MR_def_label(fn__libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2050__1_2_0,3)
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
	MR_init_entry1(fn__libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2063__1_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2063__1_2_0);
	MR_init_label1(fn__libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2063__1_2_0,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__func__convert_options_to_globals__2063__1'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2063__1_2_0)
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
		fn__libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2063__1_2_0_i2);
MR_def_label(fn__libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2063__1_2_0,2)
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
	MR_init_entry1(fn__libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2073__1_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2073__1_2_0);
	MR_init_label1(fn__libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2073__1_2_0,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__func__convert_options_to_globals__2073__1'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2073__1_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_r1 = MR_r2;
	MR_r2 = (MR_Word) MR_string_const("modules", 7);
	MR_np_call_localret_ent(fn__f_100_105_114_95_95_47_2_0,
		fn__libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2073__1_2_0_i2);
MR_def_label(fn__libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2073__1_2_0,2)
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
	MR_init_entry1(fn__libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2109__1_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2109__1_3_0);
	MR_init_label2(fn__libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2109__1_3_0,2,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__func__convert_options_to_globals__2109__1'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2109__1_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_r1 = MR_r3;
	MR_r2 = (MR_Word) MR_string_const("Mercury", 7);
	MR_np_call_localret_ent(fn__f_100_105_114_95_95_47_2_0,
		fn__libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2109__1_3_0_i2);
MR_def_label(fn__libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2109__1_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(fn__f_100_105_114_95_95_47_2_0,
		fn__libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2109__1_3_0_i3);
MR_def_label(fn__libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2109__1_3_0,3)
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
	MR_init_entry1(libs__handle_options__IntroducedFrom__pred__convert_options_to_globals__2127__1_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__libs__handle_options__IntroducedFrom__pred__convert_options_to_globals__2127__1_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__pred__convert_options_to_globals__2127__1'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(libs__handle_options__IntroducedFrom__pred__convert_options_to_globals__2127__1_2_0)
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
	MR_init_entry1(libs__handle_options__IntroducedFrom__pred__convert_options_to_globals__2127__2_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__libs__handle_options__IntroducedFrom__pred__convert_options_to_globals__2127__2_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__pred__convert_options_to_globals__2127__2'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(libs__handle_options__IntroducedFrom__pred__convert_options_to_globals__2127__2_2_0)
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
	MR_init_entry1(fn__libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2145__1_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2145__1_2_0);
	MR_init_label2(fn__libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2145__1_2_0,2,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__func__convert_options_to_globals__2145__1'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2145__1_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(fn__libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2145__1_2_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_1),
		mercury__fn__libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2145__1_2_0_i2);
MR_def_label(fn__libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2145__1_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("Mercury", 7);
	MR_np_call_localret_ent(fn__f_100_105_114_95_95_47_2_0,
		fn__libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2145__1_2_0_i3);
MR_def_label(fn__libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2145__1_2_0,3)
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
	MR_init_entry1(fn__libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2149__1_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2149__1_2_0);
	MR_init_label2(fn__libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2149__1_2_0,2,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__func__convert_options_to_globals__2149__1'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2149__1_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(fn__libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2149__1_2_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_1),
		mercury__fn__libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2149__1_2_0_i2);
MR_def_label(fn__libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2149__1_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("Mercury", 7);
	MR_np_call_localret_ent(fn__f_100_105_114_95_95_47_2_0,
		fn__libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2149__1_2_0_i3);
MR_def_label(fn__libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2149__1_2_0,3)
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
	MR_init_entry1(fn__libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2179__1_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2179__1_1_0);
	MR_init_label1(fn__libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2179__1_1_0,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__func__convert_options_to_globals__2179__1'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2179__1_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_r2 = (MR_Word) MR_string_const("Mercury", 7);
	MR_np_call_localret_ent(fn__f_100_105_114_95_95_47_2_0,
		fn__libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2179__1_1_0_i2);
MR_def_label(fn__libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2179__1_1_0,2)
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
	MR_init_entry1(fn__libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2180__1_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2180__1_1_0);
	MR_init_label1(fn__libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2180__1_1_0,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__func__convert_options_to_globals__2180__1'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2180__1_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_r2 = (MR_Word) MR_string_const("Mercury", 7);
	MR_np_call_localret_ent(fn__f_100_105_114_95_95_47_2_0,
		fn__libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2180__1_1_0_i2);
MR_def_label(fn__libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2180__1_1_0,2)
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
	MR_init_entry1(fn__libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2171__1_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2171__1_2_0);
	MR_init_label2(fn__libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2171__1_2_0,2,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__func__convert_options_to_globals__2171__1'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2171__1_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(fn__libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2171__1_2_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_1),
		mercury__fn__libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2171__1_2_0_i2);
MR_def_label(fn__libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2171__1_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("Mercury", 7);
	MR_np_call_localret_ent(fn__f_100_105_114_95_95_47_2_0,
		fn__libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2171__1_2_0_i3);
MR_def_label(fn__libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2171__1_2_0,3)
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
	MR_init_entry1(fn__libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2173__1_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2173__1_2_0);
	MR_init_label2(fn__libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2173__1_2_0,2,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__func__convert_options_to_globals__2173__1'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2173__1_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(fn__libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2173__1_2_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_1),
		mercury__fn__libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2173__1_2_0_i2);
MR_def_label(fn__libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2173__1_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("Mercury", 7);
	MR_np_call_localret_ent(fn__f_100_105_114_95_95_47_2_0,
		fn__libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2173__1_2_0_i3);
MR_def_label(fn__libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2173__1_2_0,3)
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
	MR_init_entry1(libs__handle_options__IntroducedFrom__pred__grade_string_to_comp_strings__2655__1_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__libs__handle_options__IntroducedFrom__pred__grade_string_to_comp_strings__2655__1_2_0);
	MR_init_label2(libs__handle_options__IntroducedFrom__pred__grade_string_to_comp_strings__2655__1_2_0,2,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__pred__grade_string_to_comp_strings__2655__1'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(libs__handle_options__IntroducedFrom__pred__grade_string_to_comp_strings__2655__1_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(libs__handle_options__grade_component_table_5_0,
		libs__handle_options__IntroducedFrom__pred__grade_string_to_comp_strings__2655__1_2_0_i2);
MR_def_label(libs__handle_options__IntroducedFrom__pred__grade_string_to_comp_strings__2655__1_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(libs__handle_options__IntroducedFrom__pred__grade_string_to_comp_strings__2655__1_2_0_i1);
	}
	MR_r2 = MR_sv(1);
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__handle_options__IntroducedFrom__pred__grade_string_to_comp_strings__2655__1_2_0,1)
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


MR_BEGIN_MODULE(libs__handle_options_module57)
	MR_init_entry1(libs__handle_options__IntroducedFrom__pred__add_option_list__2745__1_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__libs__handle_options__IntroducedFrom__pred__add_option_list__2745__1_3_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__pred__add_option_list__2745__1'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(libs__handle_options__IntroducedFrom__pred__add_option_list__2745__1_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(libs__options, option);
	MR_tempr2 = MR_r2;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(getopt_io, option_data);
	MR_r3 = MR_tfield(0, MR_tempr1, 0);
	MR_r4 = MR_tfield(0, MR_tempr1, 1);
	MR_r5 = MR_tempr2;
	MR_np_tailcall_ent(map__set_4_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(map__search_3_0);

MR_BEGIN_MODULE(libs__handle_options_module58)
	MR_init_entry1(libs__handle_options__IntroducedFrom__pred__compute_grade_components__2794__1_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__libs__handle_options__IntroducedFrom__pred__compute_grade_components__2794__1_2_0);
	MR_init_label10(libs__handle_options__IntroducedFrom__pred__compute_grade_components__2794__1_2_0,1,6,8,10,7,4,15,18,19,21)
	MR_init_label2(libs__handle_options__IntroducedFrom__pred__compute_grade_components__2794__1_2_0,17,23)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__pred__compute_grade_components__2794__1'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(libs__handle_options__IntroducedFrom__pred__compute_grade_components__2794__1_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_mkframe("pred libs.handle_options.IntroducedFrom__pred__compute_grade_components__2794__1/2-0", 12,
		MR_ENTRY(MR_do_fail));
	MR_fv(1) = MR_r1;
	MR_np_call_localret_ent(libs__handle_options__grade_component_table_5_2,
		libs__handle_options__IntroducedFrom__pred__compute_grade_components__2794__1_2_0_i1);
MR_def_label(libs__handle_options__IntroducedFrom__pred__compute_grade_components__2794__1_2_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_fv(7) = (MR_Word) MR_redoip_slot(MR_maxfr);
	MR_fv(8) = (MR_Word) MR_redofr_slot(MR_maxfr);
	MR_save_maxfr(MR_fv(9));
	MR_redofr_slot_word(MR_maxfr) = (MR_Word) MR_curfr;
	MR_redoip_slot_word(MR_maxfr) = (MR_Word) MR_LABEL_AP(libs__handle_options__IntroducedFrom__pred__compute_grade_components__2794__1_2_0_i4);
	MR_fv(2) = MR_r1;
	MR_fv(3) = MR_r2;
	MR_fv(5) = MR_r4;
	MR_fv(6) = MR_r5;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,1);
	MR_r2 = MR_r3;
	MR_np_call_localret_ent(list__member_2_1,
		libs__handle_options__IntroducedFrom__pred__compute_grade_components__2794__1_2_0_i6);
MR_def_label(libs__handle_options__IntroducedFrom__pred__compute_grade_components__2794__1_2_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_fv(4) = MR_tfield(0, MR_r1, 1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(libs__options, option);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(getopt_io, option_data);
	MR_r3 = MR_fv(1);
	MR_r4 = MR_tfield(0, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(map__search_3_0,
		libs__handle_options__IntroducedFrom__pred__compute_grade_components__2794__1_2_0_i8);
MR_def_label(libs__handle_options__IntroducedFrom__pred__compute_grade_components__2794__1_2_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(libs__handle_options__IntroducedFrom__pred__compute_grade_components__2794__1_2_0_i7);
	}
	MR_r1 = MR_fv(4);
	MR_np_call_localret_ent(__Unify___getopt_io__option_data_0_0,
		libs__handle_options__IntroducedFrom__pred__compute_grade_components__2794__1_2_0_i10);
MR_def_label(libs__handle_options__IntroducedFrom__pred__compute_grade_components__2794__1_2_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO(MR_ENTRY(MR_do_redo));
	}
MR_def_label(libs__handle_options__IntroducedFrom__pred__compute_grade_components__2794__1_2_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_restore_maxfr(MR_fv(9));
	MR_redoip_slot_word(MR_maxfr) = MR_fv(7);
	MR_redofr_slot_word(MR_maxfr) = MR_fv(8);
	MR_GOTO(MR_ENTRY(MR_do_redo));
MR_def_label(libs__handle_options__IntroducedFrom__pred__compute_grade_components__2794__1_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_fv(2);
	MR_r2 = MR_fv(3);
	MR_r4 = MR_fv(5);
	MR_r5 = MR_fv(6);
	MR_redoip_slot_word(MR_maxfr) = MR_fv(7);
	MR_redofr_slot_word(MR_maxfr) = MR_fv(8);
	if (MR_INT_NE(MR_r5,1)) {
		MR_GOTO(MR_ENTRY(MR_do_redo));
	}
	if (MR_LTAGS_TESTR(MR_r4,0,0)) {
		MR_GOTO_LAB(libs__handle_options__IntroducedFrom__pred__compute_grade_components__2794__1_2_0_i15);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_r2;
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_succeed();
	}
MR_def_label(libs__handle_options__IntroducedFrom__pred__compute_grade_components__2794__1_2_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_fv(10) = (MR_Word) MR_redoip_slot(MR_maxfr);
	MR_fv(11) = (MR_Word) MR_redofr_slot(MR_maxfr);
	MR_save_maxfr(MR_fv(12));
	MR_redofr_slot_word(MR_maxfr) = (MR_Word) MR_curfr;
	MR_redoip_slot_word(MR_maxfr) = (MR_Word) MR_LABEL_AP(libs__handle_options__IntroducedFrom__pred__compute_grade_components__2794__1_2_0_i17);
	MR_fv(2) = MR_r1;
	MR_fv(3) = MR_r2;
	MR_fv(6) = (MR_Word) MR_CTOR0_ADDR(getopt_io, option_data);
	MR_r1 = MR_fv(6);
	MR_r2 = MR_tfield(1, MR_r4, 0);
	MR_np_call_localret_ent(list__member_2_1,
		libs__handle_options__IntroducedFrom__pred__compute_grade_components__2794__1_2_0_i18);
MR_def_label(libs__handle_options__IntroducedFrom__pred__compute_grade_components__2794__1_2_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_fv(5) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(libs__options, option);
	MR_r2 = MR_fv(6);
	MR_r3 = MR_fv(1);
	MR_r4 = (MR_Integer) 170;
	MR_np_call_localret_ent(map__search_3_0,
		libs__handle_options__IntroducedFrom__pred__compute_grade_components__2794__1_2_0_i19);
MR_def_label(libs__handle_options__IntroducedFrom__pred__compute_grade_components__2794__1_2_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO(MR_ENTRY(MR_do_redo));
	}
	MR_r1 = MR_fv(5);
	MR_np_call_localret_ent(__Unify___getopt_io__option_data_0_0,
		libs__handle_options__IntroducedFrom__pred__compute_grade_components__2794__1_2_0_i21);
MR_def_label(libs__handle_options__IntroducedFrom__pred__compute_grade_components__2794__1_2_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO(MR_ENTRY(MR_do_redo));
	}
	MR_restore_maxfr(MR_fv(12));
	MR_redoip_slot_word(MR_maxfr) = MR_fv(10);
	MR_redofr_slot_word(MR_maxfr) = MR_fv(11);
	MR_GOTO_LAB(libs__handle_options__IntroducedFrom__pred__compute_grade_components__2794__1_2_0_i23);
MR_def_label(libs__handle_options__IntroducedFrom__pred__compute_grade_components__2794__1_2_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_redoip_slot_word(MR_maxfr) = MR_fv(10);
	MR_redofr_slot_word(MR_maxfr) = MR_fv(11);
	MR_GOTO(MR_ENTRY(MR_do_redo));
MR_def_label(libs__handle_options__IntroducedFrom__pred__compute_grade_components__2794__1_2_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r1, 0) = MR_fv(3);
	MR_tfield(0, MR_r1, 1) = MR_fv(2);
	MR_succeed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(libs__handle_options_module59)
	MR_init_entry1(libs__handle_options__IntroducedFrom__pred__reset_grade_options__3089__1_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__libs__handle_options__IntroducedFrom__pred__reset_grade_options__3089__1_3_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__pred__reset_grade_options__3089__1'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(libs__handle_options__IntroducedFrom__pred__reset_grade_options__3089__1_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(libs__options, option);
	MR_tempr2 = MR_r2;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(getopt_io, option_data);
	MR_r3 = MR_tfield(0, MR_tempr1, 0);
	MR_r4 = MR_tfield(0, MR_tempr1, 1);
	MR_r5 = MR_tempr2;
	MR_np_tailcall_ent(map__set_4_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE
#line 2503 "handle_options.m"
MR_Word libs__handle_options__mutable_variable_already_printed_usage;
#ifdef MR_THREAD_SAFE
    MercuryLock libs__handle_options__mutable_variable_already_printed_usage_lock;
#endif

#line 14563 "libs.handle_options.c"

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
#ifdef MR_THREADSCOPE
void mercury__libs__handle_options__init_threadscope_string_table(void);
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
	MR_write_out_module_proc_reps_start(procrep_fp, &mercury_data__module_layout__libs__handle_options);
	MR_write_out_module_proc_reps_end(procrep_fp);
}

#endif

#ifdef MR_RECORD_TERM_SIZES

void mercury__libs__handle_options__init_complexity_procs(void)
{
}

#endif

#ifdef MR_THREADSCOPE

void mercury__libs__handle_options__init_threadscope_string_table(void)
{
}

#endif

void mercury__libs__handle_options__required_init(void)
{
	libs__handle_options__user_init_pred_0();
}

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;
