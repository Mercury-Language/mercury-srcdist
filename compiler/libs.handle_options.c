/*
** Automatically generated from `handle_options.m'
** by the Mercury compiler,
** version rotd-2007-06-30, configured for i686-pc-linux-gnu.
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
ENDINIT
*/

#define MR_ALLOW_RESET
#include "mercury_imp.h"
#line 530 "../library/io.int"
#include "io.mh"

#line 27 "libs.handle_options.c"
#line 538 "../library/io.int"
#include "string.mh"

#line 31 "libs.handle_options.c"
#line 52 "../library/dir.int"
#include "dir.mh"

#line 35 "libs.handle_options.c"
#line 29 "../library/bitmap.int2"
#include "bitmap.mh"

#line 39 "libs.handle_options.c"
#line 28 "../library/time.int2"
#include "time.mh"

#line 43 "libs.handle_options.c"
#line 30 "../library/array.int2"
#include "array.mh"

#line 47 "libs.handle_options.c"
#line 48 "libs.handle_options.c"
#include "libs.handle_options.mh"

#line 51 "libs.handle_options.c"
#line 52 "libs.handle_options.c"
#ifndef LIBS__HANDLE_OPTIONS_DECL_GUARD
#define LIBS__HANDLE_OPTIONS_DECL_GUARD

#line 56 "libs.handle_options.c"
#line 57 "libs.handle_options.c"

#endif
#line 60 "libs.handle_options.c"

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

struct mercury_type_6 {
	MR_Integer f1[32];
};
MR_STATIC_LINKAGE const struct mercury_type_6 mercury_common_6[];

struct mercury_type_7 {
	MR_Integer f1;
	MR_String f2[7];
	MR_Integer f3;
	MR_String f4;
	MR_Integer f5[8];
	MR_String f6;
	MR_Integer f7[4];
	MR_String f8;
	MR_Integer f9[2];
	MR_String f10[2];
	MR_Integer f11[3];
	MR_String f12;
};
MR_STATIC_LINKAGE const struct mercury_type_7 mercury_common_7[];

struct mercury_type_8 {
	MR_Integer f1;
};
MR_STATIC_LINKAGE const struct mercury_type_8 mercury_common_8[];

struct mercury_type_9 {
	MR_Integer f1;
	MR_String f2;
};
MR_STATIC_LINKAGE const struct mercury_type_9 mercury_common_9[];

struct mercury_type_10 {
	MR_String f1;
	MR_Word * f2;
};
MR_STATIC_LINKAGE const struct mercury_type_10 mercury_common_10[];

struct mercury_type_11 {
	MR_Integer f1;
	MR_Word * f2;
};
MR_STATIC_LINKAGE const struct mercury_type_11 mercury_common_11[];

struct mercury_type_12 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[3];
};
MR_STATIC_LINKAGE const struct mercury_type_12 mercury_common_12[];

struct mercury_type_13 {
	MR_Word * f1;
	MR_Integer f2;
	MR_Word * f3;
};
MR_STATIC_LINKAGE const struct mercury_type_13 mercury_common_13[];

struct mercury_type_14 {
	MR_Word * f1;
	MR_Integer f2;
	MR_Word * f3;
	MR_Word * f4;
};
MR_STATIC_LINKAGE const struct mercury_type_14 mercury_common_14[];

struct mercury_type_15 {
	MR_Word * f1;
	MR_Code * f2;
	MR_Integer f3;
	MR_Integer f4;
};
MR_STATIC_LINKAGE const struct mercury_type_15 mercury_common_15[];

struct mercury_type_16 {
	MR_Word * f1;
	MR_Word * f2;
	MR_Integer f3;
	MR_Word * f4;
};
MR_STATIC_LINKAGE const struct mercury_type_16 mercury_common_16[];

struct mercury_type_17 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[5];
};
MR_STATIC_LINKAGE const struct mercury_type_17 mercury_common_17[];

struct mercury_type_18 {
	MR_Word * f1;
};
MR_STATIC_LINKAGE const struct mercury_type_18 mercury_common_18[];

struct mercury_type_19 {
	MR_Integer f1[128];
};
MR_STATIC_LINKAGE const struct mercury_type_19 mercury_common_19[];

struct mercury_type_20 {
	MR_Integer f1;
	MR_String f2[14];
	MR_Integer f3[4];
	MR_String f4;
	MR_Integer f5[4];
	MR_String f6;
	MR_Integer f7[9];
	MR_String f8;
	MR_Integer f9;
	MR_String f10;
	MR_Integer f11[2];
	MR_String f12;
	MR_Integer f13;
	MR_String f14;
	MR_Integer f15[7];
	MR_String f16;
	MR_Integer f17[11];
	MR_String f18[2];
	MR_Integer f19;
	MR_String f20;
	MR_Integer f21[3];
	MR_String f22;
	MR_Integer f23;
	MR_String f24[2];
	MR_Integer f25[2];
	MR_String f26;
	MR_Integer f27;
	MR_String f28;
	MR_Integer f29[6];
	MR_String f30[2];
	MR_Integer f31;
	MR_String f32[3];
	MR_Integer f33[11];
	MR_String f34[3];
	MR_Integer f35[6];
	MR_String f36;
	MR_Integer f37;
	MR_String f38[2];
	MR_Integer f39[3];
	MR_String f40[2];
	MR_Integer f41[6];
	MR_String f42;
	MR_Integer f43[3];
};
MR_STATIC_LINKAGE const struct mercury_type_20 mercury_common_20[];

MR_STATIC_LINKAGE const struct mercury_type_18 mercury_vector_common_18_0[];

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
MR_decl_label8(libs__handle_options__IntroducedFrom__pred__compute_grade_components__2240__1_2_0, 1,6,8,10,7,4,15,17)
MR_decl_label4(libs__handle_options__IntroducedFrom__pred__compute_grade_components__2240__1_2_0, 18,20,16,22)
MR_decl_label6(libs__handle_options__IntroducedFrom__pred__convert_grade_option__2168__1_5_0, 2,5,7,8,9,1)
MR_decl_label8(libs__handle_options__check_option_values_12_0, 2,6,4,8,9,10,14,12)
MR_decl_label8(libs__handle_options__check_option_values_12_0, 16,17,18,22,20,24,25,26)
MR_decl_label8(libs__handle_options__check_option_values_12_0, 27,29,30,31,35,33,37,38)
MR_decl_label8(libs__handle_options__check_option_values_12_0, 39,43,41,45,46,47,51,48)
MR_decl_label8(libs__handle_options__check_option_values_12_0, 52,53,54,60,64,63,56,66)
MR_decl_label8(libs__handle_options__check_option_values_12_0, 67,69,70,74,72,76,77,78)
MR_decl_label8(libs__handle_options__check_option_values_12_0, 79,83,81,85,86,87,88,94)
MR_decl_label3(libs__handle_options__check_option_values_12_0, 96,92,97)
MR_decl_label3(libs__handle_options__compute_grade_2_0, 2,3,5)
MR_decl_label5(libs__handle_options__construct_string_2_0, 3,5,8,9,7)
MR_decl_label8(libs__handle_options__convert_dump_alias_2_0, 3,20,5,6,7,8,9,10)
MR_decl_label8(libs__handle_options__convert_dump_alias_2_0, 11,12,13,14,15,16,17,18)
MR_decl_label5(libs__handle_options__convert_grade_option_3_0, 2,3,4,6,1)
MR_decl_label8(libs__handle_options__disable_smart_recompilation_5_0, 2,3,5,6,7,8,9,14)
MR_decl_label1(libs__handle_options__disable_smart_recompilation_5_0, 11)
MR_decl_label1(libs__handle_options__display_compiler_version_2_0, 2)
MR_decl_label8(libs__handle_options__grade_component_table_5_0, 3,50,5,6,7,8,9,10)
MR_decl_label8(libs__handle_options__grade_component_table_5_0, 11,12,13,14,15,16,17,18)
MR_decl_label8(libs__handle_options__grade_component_table_5_0, 19,20,21,22,23,24,25,26)
MR_decl_label8(libs__handle_options__grade_component_table_5_0, 27,28,29,30,31,32,33,34)
MR_decl_label8(libs__handle_options__grade_component_table_5_0, 35,36,37,38,39,40,41,42)
MR_decl_label6(libs__handle_options__grade_component_table_5_0, 43,44,45,46,47,48)
MR_decl_label3(libs__handle_options__grade_component_table_5_2, 2,3,4)
MR_decl_label5(libs__handle_options__grade_directory_component_2_0, 2,4,6,7,3)
MR_decl_label3(libs__handle_options__grade_start_values_1_0, 2,3,4)
MR_decl_label8(libs__handle_options__handle_options_7_0, 2,3,6,7,8,9,10,11)
MR_decl_label8(libs__handle_options__handle_options_7_0, 12,13,14,15,16,17,18,19)
MR_decl_label8(libs__handle_options__handle_options_7_0, 20,23,24,25,26,30,31,27)
MR_decl_label1(libs__handle_options__handle_options_7_0, 5)
MR_decl_label8(libs__handle_options__long_usage_2_0, 2,3,4,5,6,7,8,9)
MR_decl_label8(libs__handle_options__maybe_disable_smart_recompilation_8_0, 2,5,6,8,9,10,11,12)
MR_decl_label3(libs__handle_options__maybe_disable_smart_recompilation_8_0, 24,14,3)
MR_decl_label2(libs__handle_options__option_implies_5_0, 2,4)
MR_decl_label2(libs__handle_options__option_neg_implies_5_0, 2,4)
MR_decl_label4(libs__handle_options__option_requires_7_0, 2,3,9,5)
MR_decl_label3(libs__handle_options__postprocess_options_4_0, 4,6,3)
MR_decl_label8(libs__handle_options__postprocess_options_2_13_0, 2,3,4,7,616,9,10,11)
MR_decl_label8(libs__handle_options__postprocess_options_2_13_0, 13,15,12,17,19,22,18,23)
MR_decl_label8(libs__handle_options__postprocess_options_2_13_0, 27,29,30,31,32,33,28,35)
MR_decl_label8(libs__handle_options__postprocess_options_2_13_0, 36,40,41,45,46,47,48,49)
MR_decl_label8(libs__handle_options__postprocess_options_2_13_0, 50,51,52,53,54,55,56,60)
MR_decl_label8(libs__handle_options__postprocess_options_2_13_0, 57,64,66,63,71,42,72,73)
MR_decl_label8(libs__handle_options__postprocess_options_2_13_0, 802,74,77,82,83,84,85,86)
MR_decl_label8(libs__handle_options__postprocess_options_2_13_0, 87,88,89,90,91,92,93,94)
MR_decl_label8(libs__handle_options__postprocess_options_2_13_0, 95,630,97,98,104,107,108,109)
MR_decl_label8(libs__handle_options__postprocess_options_2_13_0, 111,113,114,115,116,117,118,103)
MR_decl_label8(libs__handle_options__postprocess_options_2_13_0, 119,120,121,122,123,124,125,126)
MR_decl_label8(libs__handle_options__postprocess_options_2_13_0, 127,128,129,132,131,130,133,134)
MR_decl_label8(libs__handle_options__postprocess_options_2_13_0, 135,136,137,138,139,632,141,142)
MR_decl_label8(libs__handle_options__postprocess_options_2_13_0, 143,145,147,140,149,150,154,151)
MR_decl_label8(libs__handle_options__postprocess_options_2_13_0, 158,157,160,161,162,163,167,164)
MR_decl_label8(libs__handle_options__postprocess_options_2_13_0, 168,169,170,171,172,173,174,175)
MR_decl_label8(libs__handle_options__postprocess_options_2_13_0, 176,177,178,179,180,181,182,183)
MR_decl_label8(libs__handle_options__postprocess_options_2_13_0, 184,185,186,187,188,189,190,191)
MR_decl_label8(libs__handle_options__postprocess_options_2_13_0, 192,193,194,195,196,197,198,199)
MR_decl_label8(libs__handle_options__postprocess_options_2_13_0, 200,201,202,203,204,205,206,207)
MR_decl_label8(libs__handle_options__postprocess_options_2_13_0, 208,209,210,211,212,213,217,214)
MR_decl_label8(libs__handle_options__postprocess_options_2_13_0, 218,219,220,221,222,225,227,228)
MR_decl_label8(libs__handle_options__postprocess_options_2_13_0, 229,224,230,231,232,234,233,235)
MR_decl_label8(libs__handle_options__postprocess_options_2_13_0, 236,237,241,240,244,239,245,246)
MR_decl_label8(libs__handle_options__postprocess_options_2_13_0, 247,248,250,251,252,253,254,249)
MR_decl_label8(libs__handle_options__postprocess_options_2_13_0, 255,256,257,258,259,260,261,262)
MR_decl_label8(libs__handle_options__postprocess_options_2_13_0, 263,264,268,275,272,278,279,280)
MR_decl_label8(libs__handle_options__postprocess_options_2_13_0, 281,282,285,284,283,286,287,289)
MR_decl_label8(libs__handle_options__postprocess_options_2_13_0, 290,291,292,293,294,295,296,301)
MR_decl_label8(libs__handle_options__postprocess_options_2_13_0, 297,302,303,304,305,306,308,312)
MR_decl_label8(libs__handle_options__postprocess_options_2_13_0, 313,314,315,316,317,318,319,320)
MR_decl_label8(libs__handle_options__postprocess_options_2_13_0, 321,322,323,324,325,333,311,310)
MR_decl_label8(libs__handle_options__postprocess_options_2_13_0, 334,335,336,337,338,339,340,307)
MR_decl_label8(libs__handle_options__postprocess_options_2_13_0, 341,342,343,345,346,349,350,351)
MR_decl_label8(libs__handle_options__postprocess_options_2_13_0, 352,354,355,356,344,357,358,362)
MR_decl_label8(libs__handle_options__postprocess_options_2_13_0, 359,366,365,369,371,372,364,374)
MR_decl_label8(libs__handle_options__postprocess_options_2_13_0, 380,379,378,383,377,375,385,386)
MR_decl_label8(libs__handle_options__postprocess_options_2_13_0, 387,388,390,392,393,394,395,396)
MR_decl_label8(libs__handle_options__postprocess_options_2_13_0, 397,405,406,407,408,409,410,411)
MR_decl_label8(libs__handle_options__postprocess_options_2_13_0, 412,413,414,415,416,421,417,422)
MR_decl_label8(libs__handle_options__postprocess_options_2_13_0, 423,424,425,426,427,428,429,430)
MR_decl_label8(libs__handle_options__postprocess_options_2_13_0, 431,432,433,434,438,435,439,443)
MR_decl_label8(libs__handle_options__postprocess_options_2_13_0, 440,444,445,446,447,448,452,454)
MR_decl_label8(libs__handle_options__postprocess_options_2_13_0, 456,458,451,461,450,462,463,464)
MR_decl_label8(libs__handle_options__postprocess_options_2_13_0, 465,466,467,468,469,470,471,472)
MR_decl_label8(libs__handle_options__postprocess_options_2_13_0, 473,474,475,477,478,479,480,481)
MR_decl_label8(libs__handle_options__postprocess_options_2_13_0, 482,483,484,485,486,476,487,489)
MR_decl_label8(libs__handle_options__postprocess_options_2_13_0, 490,491,492,488,493,498,500,501)
MR_decl_label8(libs__handle_options__postprocess_options_2_13_0, 502,494,503,504,505,507,508,509)
MR_decl_label8(libs__handle_options__postprocess_options_2_13_0, 510,511,512,513,514,515,516,517)
MR_decl_label8(libs__handle_options__postprocess_options_2_13_0, 518,519,520,521,522,523,524,525)
MR_decl_label8(libs__handle_options__postprocess_options_2_13_0, 526,506,527,529,530,531,532,533)
MR_decl_label8(libs__handle_options__postprocess_options_2_13_0, 528,534,535,536,539,540,541,542)
MR_decl_label8(libs__handle_options__postprocess_options_2_13_0, 543,538,545,546,547,548,549,550)
MR_decl_label8(libs__handle_options__postprocess_options_2_13_0, 551,552,553,554,555,556,557,558)
MR_decl_label8(libs__handle_options__postprocess_options_2_13_0, 559,560,561,564,567,568,569,570)
MR_decl_label8(libs__handle_options__postprocess_options_2_13_0, 571,572,573,574,563,575,576,577)
MR_decl_label8(libs__handle_options__postprocess_options_2_13_0, 578,579,582,584,587,588,589,580)
MR_decl_label8(libs__handle_options__postprocess_options_2_13_0, 590,593,592,591,594,597,599,595)
MR_decl_label7(libs__handle_options__postprocess_options_2_13_0, 600,602,605,601,610,611,614)
MR_decl_label8(libs__handle_options__postprocess_options_lowlevel_2_0, 2,5,4,3,6,8,9,7)
MR_decl_label8(libs__handle_options__postprocess_options_lowlevel_2_0, 10,12,13,11,14,16,17,15)
MR_decl_label8(libs__handle_options__postprocess_options_lowlevel_2_0, 18,20,21,19,22,23,24,28)
MR_decl_label2(libs__handle_options__postprocess_options_lowlevel_2_0, 27,26)
MR_decl_label6(libs__handle_options__split_grade_string_2_2_0, 25,4,5,7,8,1)
MR_decl_label3(libs__handle_options__usage_2_0, 2,5,3)
MR_decl_label3(libs__handle_options__usage_errors_3_0, 2,3,4)
MR_decl_label1(fn__libs__handle_options__IntroducedFrom__func__postprocess_options_2__1668__1_2_0, 2)
MR_decl_label2(fn__libs__handle_options__IntroducedFrom__func__postprocess_options_2__1683__1_2_0, 2,3)
MR_decl_label1(fn__libs__handle_options__IntroducedFrom__func__postprocess_options_2__1692__1_2_0, 2)
MR_decl_label1(fn__libs__handle_options__IntroducedFrom__func__postprocess_options_2__1702__1_2_0, 2)
MR_decl_label2(fn__libs__handle_options__IntroducedFrom__func__postprocess_options_2__1738__1_3_0, 2,3)
MR_decl_label2(fn__libs__handle_options__IntroducedFrom__func__postprocess_options_2__1779__1_2_0, 2,3)
MR_decl_label2(fn__libs__handle_options__IntroducedFrom__func__postprocess_options_2__1783__1_2_0, 2,3)
MR_decl_label2(fn__libs__handle_options__IntroducedFrom__func__postprocess_options_2__1806__1_2_0, 2,3)
MR_decl_label1(fn__libs__handle_options__IntroducedFrom__func__postprocess_options_2__1808__1_1_0, 2)
MR_def_extern_entry(libs__handle_options__process_options_6_0)
MR_decl_static(libs__handle_options__add_error_3_0)
MR_decl_static(libs__handle_options__convert_dump_alias_2_0)
MR_decl_static(libs__handle_options__check_option_values_12_0)
MR_decl_static(libs__handle_options__construct_string_2_0)
MR_def_extern_entry(libs__handle_options__compute_grade_2_0)
MR_def_extern_entry(libs__handle_options__grade_directory_component_2_0)
MR_decl_static(libs__handle_options__option_implies_5_0)
MR_decl_static(libs__handle_options__option_neg_implies_5_0)
MR_decl_static(libs__handle_options__postprocess_options_lowlevel_2_0)
MR_decl_static(libs__handle_options__option_requires_7_0)
MR_decl_static(libs__handle_options__disable_smart_recompilation_5_0)
MR_decl_static(libs__handle_options__maybe_disable_smart_recompilation_8_0)
MR_decl_static(libs__handle_options__postprocess_options_2_13_0)
MR_decl_static(libs__handle_options__postprocess_options_4_0)
MR_def_extern_entry(libs__handle_options__handle_options_7_0)
MR_def_extern_entry(libs__handle_options__display_compiler_version_2_0)
MR_def_extern_entry(libs__handle_options__usage_2_0)
MR_def_extern_entry(libs__handle_options__usage_errors_3_0)
MR_def_extern_entry(libs__handle_options__long_usage_2_0)
MR_decl_static(libs__handle_options__split_grade_string_2_2_0)
MR_def_extern_entry(libs__handle_options__convert_grade_option_3_0)
MR_decl_static(libs__handle_options__add_option_list_3_0)
MR_decl_static(libs__handle_options__grade_component_table_5_0)
MR_decl_static(libs__handle_options__grade_component_table_5_2)
MR_decl_static(libs__handle_options__grade_start_values_1_0)
MR_decl_static(libs__handle_options__char_is_not_2_0)
MR_decl_static(__Unify___libs__handle_options__grade_component_0_0)
MR_decl_static(__Compare___libs__handle_options__grade_component_0_0)
MR_decl_static(libs__handle_options__IntroducedFrom__pred__convert_grade_option__2168__1_5_0)
MR_decl_static(fn__libs__handle_options__IntroducedFrom__func__postprocess_options_2__1668__1_2_0)
MR_decl_static(fn__libs__handle_options__IntroducedFrom__func__postprocess_options_2__1683__1_2_0)
MR_decl_static(fn__libs__handle_options__IntroducedFrom__func__postprocess_options_2__1692__1_2_0)
MR_decl_static(fn__libs__handle_options__IntroducedFrom__func__postprocess_options_2__1702__1_2_0)
MR_decl_static(fn__libs__handle_options__IntroducedFrom__func__postprocess_options_2__1738__1_3_0)
MR_decl_static(libs__handle_options__IntroducedFrom__pred__postprocess_options_2__1759__1_2_0)
MR_decl_static(libs__handle_options__IntroducedFrom__pred__postprocess_options_2__1759__2_2_0)
MR_decl_static(fn__libs__handle_options__IntroducedFrom__func__postprocess_options_2__1779__1_2_0)
MR_decl_static(fn__libs__handle_options__IntroducedFrom__func__postprocess_options_2__1783__1_2_0)
MR_decl_static(fn__libs__handle_options__IntroducedFrom__func__postprocess_options_2__1806__1_2_0)
MR_decl_static(fn__libs__handle_options__IntroducedFrom__func__postprocess_options_2__1808__1_1_0)
MR_decl_static(libs__handle_options__IntroducedFrom__pred__add_option_list__2191__1_3_0)
MR_decl_static(libs__handle_options__IntroducedFrom__pred__compute_grade_components__2240__1_2_0)
MR_decl_static(libs__handle_options__IntroducedFrom__pred__reset_grade_options__2500__1_3_0)

static const MR_UserClosureId
mercury_data__closure_layout__libs__handle_options__process_options_6_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_character_0;
extern const MR_TypeCtorInfo_Struct mercury_data_libs__options__type_ctor_info_option_0;
static const MR_UserClosureId
mercury_data__closure_layout__libs__handle_options__process_options_6_0_2;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_string_0;
static const MR_UserClosureId
mercury_data__closure_layout__libs__handle_options__process_options_6_0_3;
extern const MR_TypeCtorInfo_Struct mercury_data_getopt_io__type_ctor_info_option_data_0;
static const MR_UserClosureId
mercury_data__closure_layout__libs__handle_options__compute_grade_2_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__libs__handle_options__postprocess_options_2_13_0_6;
static const MR_UserClosureId
mercury_data__closure_layout__libs__handle_options__postprocess_options_2_13_0_7;
static const MR_UserClosureId
mercury_data__closure_layout__libs__handle_options__postprocess_options_2_13_0_11;
static const MR_UserClosureId
mercury_data__closure_layout__libs__handle_options__split_grade_string_2_2_0_1;
static const struct mercury_type_0 mercury_common_0[8] =
{
{
(MR_Word *) &mercury_data__closure_layout__libs__handle_options__process_options_6_0_1,
(MR_Word *) (MR_Integer) 0,
2,
MR_CHAR_CTOR_ADDR,
MR_CTOR0_ADDR(libs__options, option)
},
{
(MR_Word *) &mercury_data__closure_layout__libs__handle_options__process_options_6_0_2,
(MR_Word *) (MR_Integer) 0,
2,
MR_STRING_CTOR_ADDR,
MR_CTOR0_ADDR(libs__options, option)
},
{
(MR_Word *) &mercury_data__closure_layout__libs__handle_options__process_options_6_0_3,
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
(MR_Word *) &mercury_data__closure_layout__libs__handle_options__postprocess_options_2_13_0_6,
(MR_Word *) (MR_Integer) 0,
2,
MR_STRING_CTOR_ADDR,
MR_STRING_CTOR_ADDR
},
{
(MR_Word *) &mercury_data__closure_layout__libs__handle_options__postprocess_options_2_13_0_7,
(MR_Word *) (MR_Integer) 0,
2,
MR_COMMON(13,0),
MR_STRING_CTOR_ADDR
},
{
(MR_Word *) &mercury_data__closure_layout__libs__handle_options__postprocess_options_2_13_0_11,
(MR_Word *) (MR_Integer) 0,
2,
MR_STRING_CTOR_ADDR,
MR_STRING_CTOR_ADDR
},
{
(MR_Word *) &mercury_data__closure_layout__libs__handle_options__split_grade_string_2_2_0_1,
(MR_Word *) (MR_Integer) 0,
2,
MR_CHAR_CTOR_ADDR,
MR_CHAR_CTOR_ADDR
},
};

MR_decl_entry(libs__options__short_option_2_0);
MR_decl_entry(libs__options__long_option_2_0);
MR_decl_entry(libs__options__option_defaults_2_0);
MR_decl_entry(libs__options__special_handler_4_0);
static const struct mercury_type_1 mercury_common_1[10] =
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
MR_COMMON(0,6),
MR_ENTRY_AP(fn__libs__handle_options__IntroducedFrom__func__postprocess_options_2__1808__1_1_0),
0
},
{
MR_COMMON(16,0),
MR_ENTRY_AP(libs__handle_options__grade_start_values_1_0),
0
},
{
MR_COMMON(12,7),
MR_ENTRY_AP(libs__handle_options__IntroducedFrom__pred__reset_grade_options__2500__1_3_0),
0
},
{
MR_COMMON(17,0),
MR_ENTRY_AP(libs__handle_options__IntroducedFrom__pred__convert_grade_option__2168__1_5_0),
0
},
{
MR_COMMON(12,8),
MR_ENTRY_AP(libs__handle_options__IntroducedFrom__pred__add_option_list__2191__1_3_0),
0
},
{
MR_COMMON(12,9),
MR_ENTRY_AP(libs__handle_options__IntroducedFrom__pred__add_option_list__2191__1_3_0),
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
static const struct mercury_type_3 mercury_common_3[99] =
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
MR_CTOR0_ADDR(libs__handle_options, grade_component)
}
},
{
{
MR_LIST_CTOR_ADDR,
MR_CTOR0_ADDR(libs__handle_options, grade_component)
}
},
{
{
MR_TAG_COMMON(0,11,2),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(0,11,3),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(0,11,4),
MR_TAG_COMMON(1,3,4)
}
},
{
{
MR_TAG_COMMON(0,11,5),
MR_TAG_COMMON(1,3,5)
}
},
{
{
MR_TAG_COMMON(0,11,6),
MR_TAG_COMMON(1,3,6)
}
},
{
{
MR_TAG_COMMON(0,11,7),
MR_TAG_COMMON(1,3,7)
}
},
{
{
MR_TAG_COMMON(0,11,8),
MR_TAG_COMMON(1,3,8)
}
},
{
{
MR_TAG_COMMON(3,9,3),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(0,11,9),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(0,11,10),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(0,11,11),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(0,11,12),
MR_TAG_COMMON(1,3,13)
}
},
{
{
MR_TAG_COMMON(0,11,13),
MR_TAG_COMMON(1,3,14)
}
},
{
{
MR_TAG_COMMON(0,11,14),
MR_TAG_COMMON(1,3,15)
}
},
{
{
MR_TAG_COMMON(0,11,15),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(0,11,4),
MR_TAG_COMMON(1,3,17)
}
},
{
{
MR_TAG_COMMON(0,11,16),
MR_TAG_COMMON(1,3,18)
}
},
{
{
MR_TAG_COMMON(0,11,17),
MR_TAG_COMMON(1,3,19)
}
},
{
{
MR_TAG_COMMON(0,11,7),
MR_TAG_COMMON(1,3,20)
}
},
{
{
MR_TAG_COMMON(0,11,8),
MR_TAG_COMMON(1,3,21)
}
},
{
{
MR_TAG_COMMON(3,9,5),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(3,9,3),
MR_TAG_COMMON(1,3,23)
}
},
{
{
MR_TAG_COMMON(0,11,19),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(0,11,18),
MR_TAG_COMMON(1,3,25)
}
},
{
{
MR_TAG_COMMON(0,11,20),
MR_TAG_COMMON(1,3,7)
}
},
{
{
MR_TAG_COMMON(0,11,21),
MR_TAG_COMMON(1,3,27)
}
},
{
{
MR_TAG_COMMON(0,11,23),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(0,11,22),
MR_TAG_COMMON(1,3,29)
}
},
{
{
MR_TAG_COMMON(0,11,17),
MR_TAG_COMMON(1,3,6)
}
},
{
{
MR_TAG_COMMON(0,11,20),
MR_TAG_COMMON(1,3,31)
}
},
{
{
MR_TAG_COMMON(0,11,8),
MR_TAG_COMMON(1,3,32)
}
},
{
{
MR_TAG_COMMON(0,11,24),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(0,11,25),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(0,11,26),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(0,11,22),
MR_TAG_COMMON(1,3,36)
}
},
{
{
MR_TAG_COMMON(0,11,7),
MR_TAG_COMMON(1,3,31)
}
},
{
{
MR_TAG_COMMON(0,11,8),
MR_TAG_COMMON(1,3,38)
}
},
{
{
MR_TAG_COMMON(0,11,28),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(0,11,27),
MR_TAG_COMMON(1,3,40)
}
},
{
{
MR_TAG_COMMON(0,11,16),
MR_TAG_COMMON(1,3,17)
}
},
{
{
MR_TAG_COMMON(0,11,4),
MR_TAG_COMMON(1,3,42)
}
},
{
{
MR_TAG_COMMON(0,11,17),
MR_TAG_COMMON(1,3,43)
}
},
{
{
MR_TAG_COMMON(0,11,7),
MR_TAG_COMMON(1,3,44)
}
},
{
{
MR_TAG_COMMON(0,11,8),
MR_TAG_COMMON(1,3,45)
}
},
{
{
MR_TAG_COMMON(3,9,8),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(0,11,29),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(0,11,30),
MR_TAG_COMMON(1,3,48)
}
},
{
{
MR_TAG_COMMON(0,11,31),
MR_TAG_COMMON(1,3,49)
}
},
{
{
MR_TAG_COMMON(0,11,8),
MR_TAG_COMMON(1,3,27)
}
},
{
{
MR_TAG_COMMON(3,9,9),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(0,11,32),
MR_TAG_COMMON(1,3,13)
}
},
{
{
MR_TAG_COMMON(0,11,13),
MR_TAG_COMMON(1,3,53)
}
},
{
{
MR_TAG_COMMON(0,11,14),
MR_TAG_COMMON(1,3,54)
}
},
{
{
MR_TAG_COMMON(0,11,33),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(0,11,30),
MR_TAG_COMMON(1,3,56)
}
},
{
{
MR_TAG_COMMON(0,11,31),
MR_TAG_COMMON(1,3,57)
}
},
{
{
MR_TAG_COMMON(0,11,34),
MR_TAG_COMMON(1,3,56)
}
},
{
{
MR_TAG_COMMON(0,11,35),
MR_TAG_COMMON(1,3,59)
}
},
{
{
MR_TAG_COMMON(0,11,37),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(0,11,36),
MR_TAG_COMMON(1,3,61)
}
},
{
{
MR_TAG_COMMON(0,11,38),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(0,11,39),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(0,11,41),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(0,11,40),
MR_TAG_COMMON(1,3,65)
}
},
{
{
MR_TAG_COMMON(0,11,21),
MR_TAG_COMMON(1,3,32)
}
},
{
{
MR_TAG_COMMON(0,11,42),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(0,11,44),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(0,11,43),
MR_TAG_COMMON(1,3,69)
}
},
{
{
MR_TAG_COMMON(0,11,45),
MR_TAG_COMMON(1,3,14)
}
},
{
{
MR_TAG_COMMON(0,11,46),
MR_TAG_COMMON(1,3,71)
}
},
{
{
MR_TAG_COMMON(0,11,47),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(0,11,12),
MR_TAG_COMMON(1,3,73)
}
},
{
{
MR_TAG_COMMON(0,11,45),
MR_TAG_COMMON(1,3,74)
}
},
{
{
MR_TAG_COMMON(0,11,14),
MR_TAG_COMMON(1,3,75)
}
},
{
{
MR_TAG_COMMON(0,11,34),
MR_TAG_COMMON(1,3,48)
}
},
{
{
MR_TAG_COMMON(0,11,35),
MR_TAG_COMMON(1,3,77)
}
},
{
{
MR_TAG_COMMON(0,11,16),
MR_TAG_COMMON(1,3,5)
}
},
{
{
MR_TAG_COMMON(0,11,17),
MR_TAG_COMMON(1,3,79)
}
},
{
{
MR_TAG_COMMON(0,11,7),
MR_TAG_COMMON(1,3,80)
}
},
{
{
MR_TAG_COMMON(0,11,8),
MR_TAG_COMMON(1,3,81)
}
},
{
{
MR_TAG_COMMON(0,11,49),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(0,11,48),
MR_TAG_COMMON(1,3,83)
}
},
{
{
MR_TAG_COMMON(0,11,46),
MR_TAG_COMMON(1,3,54)
}
},
{
{
MR_TAG_COMMON(0,11,46),
MR_TAG_COMMON(1,3,15)
}
},
{
{
MR_TAG_COMMON(0,11,50),
MR_TAG_COMMON(1,3,17)
}
},
{
{
MR_TAG_COMMON(0,11,16),
MR_TAG_COMMON(1,3,87)
}
},
{
{
MR_TAG_COMMON(0,11,17),
MR_TAG_COMMON(1,3,88)
}
},
{
{
MR_TAG_COMMON(0,11,7),
MR_TAG_COMMON(1,3,89)
}
},
{
{
MR_TAG_COMMON(0,11,8),
MR_TAG_COMMON(1,3,90)
}
},
{
{
MR_TAG_COMMON(0,11,51),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(3,9,10),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(0,11,50),
MR_TAG_COMMON(1,3,4)
}
},
{
{
MR_TAG_COMMON(0,11,16),
MR_TAG_COMMON(1,3,94)
}
},
{
{
MR_TAG_COMMON(0,11,17),
MR_TAG_COMMON(1,3,95)
}
},
{
{
MR_TAG_COMMON(0,11,7),
MR_TAG_COMMON(1,3,96)
}
},
{
{
MR_TAG_COMMON(0,11,8),
MR_TAG_COMMON(1,3,97)
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__libs__handle_options__process_options_6_0_4;
extern const MR_TypeCtorInfo_Struct mercury_data_getopt_io__type_ctor_info_special_data_0;
static const MR_UserClosureId
mercury_data__closure_layout__libs__handle_options__postprocess_options_2_13_0_5;
static const MR_UserClosureId
mercury_data__closure_layout__libs__handle_options__usage_errors_3_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_io__type_ctor_info_state_0;
static const struct mercury_type_4 mercury_common_4[3] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__libs__handle_options__process_options_6_0_4,
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
(MR_Word *) &mercury_data__closure_layout__libs__handle_options__postprocess_options_2_13_0_5,
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

static const struct mercury_type_5 mercury_common_5[1] =
{
{
{
MR_TAG_COMMON(0,1,0),
MR_TAG_COMMON(0,1,1),
MR_TAG_COMMON(0,1,2),
MR_TAG_COMMON(0,1,3)
}
},
};

static const struct mercury_type_6 mercury_common_6[1] =
{
{
{
-2,
3,
4,
-1,
5,
-1,
-1,
-1,
-2,
7,
-2,
-2,
-2,
-2,
-2,
-2,
-2,
-2,
-1,
-2,
-2,
-2,
-2,
-1,
-2,
-2,
-1,
-1,
-2,
-2,
-2,
-1
}
},
};

static const struct mercury_type_7 mercury_common_7[1] =
{
{
0,
{
MR_string_const("most", 4),
MR_string_const("mm", 2),
MR_string_const("allD", 4),
MR_string_const("all", 3),
MR_string_const("ALL", 3),
MR_string_const("codegen", 7),
MR_string_const("min", 3)
},
0,
MR_string_const("osv", 3),
{
0,
0,
0,
0,
0,
0,
0,
0
},
MR_string_const("petdr", 5),
{
0,
0,
0,
0
},
MR_string_const("ctgc", 4),
{
0,
0
},
{
MR_string_const("vanessa", 7),
MR_string_const("paths", 5)
},
{
0,
0,
0
},
MR_string_const("trans", 5)
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

static const struct mercury_type_9 mercury_common_9[12] =
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
MR_string_const("accurate", 8)
},
{
0,
MR_string_const("c", 1)
},
{
0,
MR_string_const("boehm_debug", 11)
},
{
0,
MR_string_const("asm", 3)
},
{
0,
MR_string_const("boehm", 5)
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
MR_string_const("erlang", 6)
},
{
0,
MR_string_const("none", 4)
},
};

static const struct mercury_type_10 mercury_common_10[13] =
{
{
MR_string_const("shared", 6),
MR_tbmkword(0, 0)
},
{
MR_string_const("static", 6),
MR_TAG_COMMON(1,10,0)
},
{
MR_string_const("c", 1),
MR_tbmkword(0, 0)
},
{
MR_string_const("mc++", 4),
MR_tbmkword(0, 0)
},
{
MR_string_const("csharp", 6),
MR_TAG_COMMON(1,10,3)
},
{
MR_string_const("il", 2),
MR_TAG_COMMON(1,10,4)
},
{
MR_string_const("java", 4),
MR_tbmkword(0, 0)
},
{
MR_string_const("erlang", 6),
MR_tbmkword(0, 0)
},
{
MR_string_const("Copyright (C) 1993-2007 The University of Melbourne\n", 52),
MR_tbmkword(0, 0)
},
{
MR_string_const("\n", 1),
MR_TAG_COMMON(1,10,8)
},
{
MR_string_const("Use \140mmc --help\' for more information.\n", 39),
MR_tbmkword(0, 0)
},
{
MR_string_const("Usage: mmc [<options>] <arguments>\n", 35),
MR_TAG_COMMON(1,10,10)
},
{
MR_string_const("\n", 1),
MR_tbmkword(0, 0)
},
};

static const struct mercury_type_11 mercury_common_11[58] =
{
{
3,
MR_TAG_COMMON(1,10,1)
},
{
2,
MR_tbmkword(0, 0)
},
{
168,
MR_TAG_COMMON(3,9,2)
},
{
197,
MR_TAG_COMMON(1,8,1)
},
{
198,
MR_TAG_COMMON(1,8,1)
},
{
196,
MR_TAG_COMMON(1,8,1)
},
{
193,
MR_TAG_COMMON(1,8,0)
},
{
192,
MR_TAG_COMMON(1,8,1)
},
{
194,
MR_TAG_COMMON(1,8,1)
},
{
168,
MR_TAG_COMMON(3,9,4)
},
{
170,
MR_TAG_COMMON(1,8,0)
},
{
160,
MR_TAG_COMMON(1,8,1)
},
{
159,
MR_TAG_COMMON(1,8,1)
},
{
157,
MR_TAG_COMMON(1,8,0)
},
{
158,
MR_TAG_COMMON(1,8,1)
},
{
197,
MR_TAG_COMMON(1,8,0)
},
{
196,
MR_TAG_COMMON(1,8,0)
},
{
193,
MR_TAG_COMMON(1,8,1)
},
{
165,
MR_TAG_COMMON(1,8,1)
},
{
166,
MR_TAG_COMMON(1,8,0)
},
{
192,
MR_TAG_COMMON(1,8,0)
},
{
194,
MR_TAG_COMMON(1,8,0)
},
{
151,
MR_TAG_COMMON(1,8,0)
},
{
152,
MR_TAG_COMMON(1,8,0)
},
{
168,
MR_TAG_COMMON(3,9,6)
},
{
168,
MR_TAG_COMMON(3,9,7)
},
{
152,
MR_TAG_COMMON(1,8,1)
},
{
165,
MR_TAG_COMMON(1,8,0)
},
{
166,
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
171,
MR_TAG_COMMON(1,8,0)
},
{
159,
MR_TAG_COMMON(1,8,0)
},
{
173,
MR_TAG_COMMON(1,8,0)
},
{
172,
MR_TAG_COMMON(1,8,0)
},
{
171,
MR_TAG_COMMON(1,8,1)
},
{
177,
MR_TAG_COMMON(1,8,0)
},
{
178,
MR_TAG_COMMON(1,8,1)
},
{
169,
MR_TAG_COMMON(1,8,0)
},
{
180,
MR_TAG_COMMON(1,8,0)
},
{
228,
MR_TAG_COMMON(1,8,0)
},
{
393,
MR_TAG_COMMON(1,8,0)
},
{
195,
MR_TAG_COMMON(1,8,0)
},
{
177,
MR_TAG_COMMON(1,8,1)
},
{
178,
MR_TAG_COMMON(1,8,0)
},
{
157,
MR_TAG_COMMON(1,8,1)
},
{
158,
MR_TAG_COMMON(1,8,0)
},
{
160,
MR_TAG_COMMON(1,8,0)
},
{
174,
MR_TAG_COMMON(1,8,0)
},
{
188,
MR_TAG_COMMON(1,8,0)
},
{
198,
MR_TAG_COMMON(1,8,0)
},
{
179,
MR_TAG_COMMON(1,8,0)
},
{
169,
MR_TAG_COMMON(1,8,1)
},
{
168,
MR_TAG_COMMON(3,9,11)
},
{
170,
MR_TAG_COMMON(1,8,1)
},
{
180,
MR_TAG_COMMON(1,8,1)
},
{
195,
MR_TAG_COMMON(1,8,1)
},
{
151,
MR_TAG_COMMON(1,8,1)
},
};

static const MR_UserClosureId
mercury_data__closure_layout__libs__handle_options__postprocess_options_2_13_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__libs__handle_options__postprocess_options_2_13_0_2;
static const MR_UserClosureId
mercury_data__closure_layout__libs__handle_options__postprocess_options_2_13_0_3;
static const MR_UserClosureId
mercury_data__closure_layout__libs__handle_options__postprocess_options_2_13_0_4;
static const MR_UserClosureId
mercury_data__closure_layout__libs__handle_options__postprocess_options_2_13_0_8;
static const MR_UserClosureId
mercury_data__closure_layout__libs__handle_options__postprocess_options_2_13_0_9;
static const MR_UserClosureId
mercury_data__closure_layout__libs__handle_options__postprocess_options_2_13_0_10;
static const MR_UserClosureId
mercury_data__closure_layout__libs__handle_options__convert_grade_option_3_0_2;
static const MR_UserClosureId
mercury_data__closure_layout__libs__handle_options__add_option_list_3_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__libs__handle_options__IntroducedFrom__pred__convert_grade_option__2168__1_5_0_1;
static const struct mercury_type_12 mercury_common_12[10] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__libs__handle_options__postprocess_options_2_13_0_1,
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
(MR_Word *) &mercury_data__closure_layout__libs__handle_options__postprocess_options_2_13_0_2,
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
(MR_Word *) &mercury_data__closure_layout__libs__handle_options__postprocess_options_2_13_0_3,
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
(MR_Word *) &mercury_data__closure_layout__libs__handle_options__postprocess_options_2_13_0_4,
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
(MR_Word *) &mercury_data__closure_layout__libs__handle_options__postprocess_options_2_13_0_8,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_COMMON(14,0),
MR_STRING_CTOR_ADDR,
MR_STRING_CTOR_ADDR
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__libs__handle_options__postprocess_options_2_13_0_9,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_COMMON(14,0),
MR_STRING_CTOR_ADDR,
MR_STRING_CTOR_ADDR
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__libs__handle_options__postprocess_options_2_13_0_10,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_COMMON(14,0),
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
(MR_Word *) &mercury_data__closure_layout__libs__handle_options__add_option_list_3_0_1,
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
(MR_Word *) &mercury_data__closure_layout__libs__handle_options__IntroducedFrom__pred__convert_grade_option__2168__1_5_0_1,
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

extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_pred_0;
static const struct mercury_type_13 mercury_common_13[1] =
{
{
MR_CTOR0_ADDR(builtin, pred),
1,
MR_STRING_CTOR_ADDR
},
};

extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_func_0;
static const struct mercury_type_14 mercury_common_14[1] =
{
{
MR_CTOR0_ADDR(builtin, func),
2,
MR_STRING_CTOR_ADDR,
MR_STRING_CTOR_ADDR
},
};

static const struct mercury_type_15 mercury_common_15[1] =
{
{
MR_COMMON(0,7),
MR_ENTRY_AP(libs__handle_options__char_is_not_2_0),
1,
46
},
};

static const MR_UserClosureId
mercury_data__closure_layout__libs__handle_options__convert_grade_option_3_0_1;
static const struct mercury_type_16 mercury_common_16[1] =
{
{
(MR_Word *) &mercury_data__closure_layout__libs__handle_options__convert_grade_option_3_0_1,
(MR_Word *) (MR_Integer) 0,
1,
MR_COMMON(2,5)
},
};

static const MR_UserClosureId
mercury_data__closure_layout__libs__handle_options__convert_grade_option_3_0_3;
static const struct mercury_type_17 mercury_common_17[1] =
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
MR_COMMON(3,2),
MR_COMMON(3,2)
}
},
};

static const struct mercury_type_18 mercury_common_18[5] =
{
{
MR_TAG_COMMON(1,3,10)
},
{
MR_TAG_COMMON(1,3,24)
},
{
MR_TAG_COMMON(1,3,47)
},
{
MR_TAG_COMMON(1,3,52)
},
{
MR_TAG_COMMON(1,3,93)
},
};

static const struct mercury_type_19 mercury_common_19[1] =
{
{
{
-2,
-1,
5,
-1,
-1,
-1,
1,
-1,
-1,
-1,
11,
-1,
-1,
-1,
-1,
-2,
-2,
-2,
-2,
-1,
-2,
-2,
-2,
-2,
-1,
-2,
-2,
-2,
-2,
-2,
-2,
-2,
-2,
-2,
-1,
-2,
-1,
-2,
-2,
-1,
-2,
-1,
-2,
-2,
-2,
-2,
-2,
-2,
-2,
-1,
-2,
-2,
-2,
-2,
-2,
-2,
-2,
-2,
-2,
-2,
-2,
-1,
-1,
-2,
-1,
-2,
-2,
-2,
-1,
-2,
-1,
-1,
-2,
-2,
-1,
-2,
-1,
-2,
-2,
-2,
-2,
-2,
-2,
2,
-1,
-2,
9,
-1,
-1,
-2,
-2,
-2,
-2,
-2,
-2,
-2,
-2,
-2,
-2,
-2,
-1,
-1,
10,
-2,
-2,
-2,
-2,
-2,
-2,
12,
-2,
-1,
-1,
-2,
-2,
-2,
13,
-1,
-2,
-2,
-2,
-2,
-2,
-2,
-1,
-2,
-2,
-2
}
},
};

static const struct mercury_type_20 mercury_common_20[1] =
{
{
0,
{
MR_string_const("agc", 3),
MR_string_const("reg", 3),
MR_string_const("gcd", 3),
MR_string_const("tr", 2),
MR_string_const("profcalls", 9),
MR_string_const("hl", 2),
MR_string_const("tsc", 3),
MR_string_const("asm_fast", 8),
MR_string_const("decldebug", 9),
MR_string_const("jump", 4),
MR_string_const("gc", 2),
MR_string_const("mps", 3),
MR_string_const("debug", 5),
MR_string_const("none", 4)
},
{
0,
0,
0,
0
},
MR_string_const("tsw", 3),
{
0,
0,
0,
0
},
MR_string_const("java", 4),
{
0,
0,
0,
0,
0,
0,
0,
0,
0
},
MR_string_const("mm", 2),
0,
MR_string_const("fast", 4),
{
0,
0
},
MR_string_const("il", 2),
0,
MR_string_const("memprof", 7),
{
0,
0,
0,
0,
0,
0,
0
},
MR_string_const("dmmsc", 5),
{
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0
},
{
MR_string_const("dmmos", 5),
MR_string_const("exts", 4)
},
0,
MR_string_const("par", 3),
{
0,
0,
0
},
MR_string_const("rt", 2),
0,
{
MR_string_const("ll_debug", 8),
MR_string_const("dmm", 3)
},
{
0,
0
},
MR_string_const("asm_jump", 8),
0,
MR_string_const("picreg", 6),
{
0,
0,
0,
0,
0,
0
},
{
MR_string_const("stseg", 5),
MR_string_const("mmsc", 4)
},
0,
{
MR_string_const("proftime", 8),
MR_string_const("profdeep", 8),
MR_string_const("mmos", 4)
},
{
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0
},
{
MR_string_const("hlc", 3),
MR_string_const("ilc", 3),
MR_string_const("spf", 3)
},
{
0,
0,
0,
0,
0,
0
},
MR_string_const("profall", 7),
0,
{
MR_string_const("prof", 4),
MR_string_const("hl_nest", 7)
},
{
0,
0,
0
},
{
MR_string_const("rbmm", 4),
MR_string_const("erlang", 6)
},
{
0,
0,
0,
0,
0,
0
},
MR_string_const("hlc_nest", 8),
{
0,
0,
0
}
},
};

static const struct mercury_type_18 mercury_vector_common_18_0[21] =
{
{
MR_TAG_COMMON(0,11,8)
},
{
MR_TAG_COMMON(0,11,7)
},
{
MR_TAG_COMMON(0,11,17)
},
{
MR_TAG_COMMON(0,11,5)
},
{
MR_TAG_COMMON(0,11,3)
},
{
MR_TAG_COMMON(0,11,4)
},
{
MR_TAG_COMMON(0,11,52)
},
{
MR_TAG_COMMON(0,11,53)
},
{
MR_TAG_COMMON(0,11,11)
},
{
MR_TAG_COMMON(0,11,14)
},
{
MR_TAG_COMMON(0,11,45)
},
{
MR_TAG_COMMON(0,11,12)
},
{
MR_TAG_COMMON(0,11,54)
},
{
MR_TAG_COMMON(0,11,55)
},
{
MR_TAG_COMMON(0,11,35)
},
{
MR_TAG_COMMON(0,11,30)
},
{
MR_TAG_COMMON(0,11,29)
},
{
MR_TAG_COMMON(0,11,56)
},
{
MR_TAG_COMMON(0,11,57)
},
{
MR_TAG_COMMON(0,11,26)
},
{
MR_TAG_COMMON(0,11,43)
},
};

static const struct mercury_type_21 mercury_vector_common_21_0[43] =
{
{
MR_string_const("none", 4),
0,
MR_TAG_COMMON(1,3,39),
MR_TAG_COMMON(1,18,0),
1
},
{
MR_string_const("reg", 3),
0,
MR_TAG_COMMON(1,3,9),
MR_TAG_COMMON(1,18,0),
1
},
{
MR_string_const("jump", 4),
0,
MR_TAG_COMMON(1,3,33),
MR_TAG_COMMON(1,18,0),
1
},
{
MR_string_const("asm_jump", 8),
0,
MR_TAG_COMMON(1,3,67),
MR_TAG_COMMON(1,18,0),
1
},
{
MR_string_const("fast", 4),
0,
MR_TAG_COMMON(1,3,51),
MR_TAG_COMMON(1,18,0),
1
},
{
MR_string_const("asm_fast", 8),
0,
MR_TAG_COMMON(1,3,28),
MR_TAG_COMMON(1,18,0),
1
},
{
MR_string_const("hl", 2),
0,
MR_TAG_COMMON(1,3,22),
MR_TAG_COMMON(1,18,1),
1
},
{
MR_string_const("hlc", 3),
0,
MR_TAG_COMMON(1,3,82),
MR_TAG_COMMON(1,18,1),
1
},
{
MR_string_const("hl_nest", 7),
0,
MR_TAG_COMMON(1,3,91),
MR_TAG_COMMON(1,18,1),
1
},
{
MR_string_const("hlc_nest", 8),
0,
MR_TAG_COMMON(1,3,98),
MR_TAG_COMMON(1,18,1),
1
},
{
MR_string_const("il", 2),
0,
MR_TAG_COMMON(1,3,22),
MR_TAG_COMMON(1,18,3),
1
},
{
MR_string_const("ilc", 3),
0,
MR_TAG_COMMON(1,3,82),
MR_TAG_COMMON(1,18,3),
1
},
{
MR_string_const("java", 4),
0,
MR_TAG_COMMON(1,3,46),
MR_TAG_COMMON(1,18,2),
1
},
{
MR_string_const("erlang", 6),
0,
MR_tbmkword(0, 0),
MR_TAG_COMMON(1,18,4),
1
},
{
MR_string_const("par", 3),
1,
MR_TAG_COMMON(1,3,63),
MR_tbmkword(0, 0),
1
},
{
MR_string_const("gc", 2),
2,
MR_TAG_COMMON(1,3,34),
MR_tbmkword(0, 0),
1
},
{
MR_string_const("gcd", 3),
2,
MR_TAG_COMMON(1,3,11),
MR_tbmkword(0, 0),
1
},
{
MR_string_const("mps", 3),
2,
MR_TAG_COMMON(1,3,35),
MR_tbmkword(0, 0),
1
},
{
MR_string_const("agc", 3),
2,
MR_TAG_COMMON(1,3,3),
MR_tbmkword(0, 0),
1
},
{
MR_string_const("prof", 4),
3,
MR_TAG_COMMON(1,3,86),
MR_tbmkword(0, 0),
1
},
{
MR_string_const("proftime", 8),
3,
MR_TAG_COMMON(1,3,72),
MR_tbmkword(0, 0),
1
},
{
MR_string_const("profcalls", 9),
3,
MR_TAG_COMMON(1,3,16),
MR_tbmkword(0, 0),
1
},
{
MR_string_const("memprof", 7),
3,
MR_TAG_COMMON(1,3,55),
MR_tbmkword(0, 0),
1
},
{
MR_string_const("profall", 7),
3,
MR_TAG_COMMON(1,3,85),
MR_tbmkword(0, 0),
1
},
{
MR_string_const("profdeep", 8),
3,
MR_TAG_COMMON(1,3,76),
MR_tbmkword(0, 0),
1
},
{
MR_string_const("tsw", 3),
4,
MR_TAG_COMMON(1,3,41),
MR_tbmkword(0, 0),
1
},
{
MR_string_const("tsc", 3),
4,
MR_TAG_COMMON(1,3,26),
MR_tbmkword(0, 0),
1
},
{
MR_string_const("tr", 2),
5,
MR_TAG_COMMON(1,3,12),
MR_tbmkword(0, 0),
1
},
{
MR_string_const("rt", 2),
6,
MR_TAG_COMMON(1,3,64),
MR_tbmkword(0, 0),
1
},
{
MR_string_const("mm", 2),
7,
MR_TAG_COMMON(1,3,50),
MR_tbmkword(0, 0),
0
},
{
MR_string_const("dmm", 3),
7,
MR_TAG_COMMON(1,3,58),
MR_tbmkword(0, 0),
0
},
{
MR_string_const("mmsc", 4),
7,
MR_TAG_COMMON(1,3,50),
MR_tbmkword(0, 0),
1
},
{
MR_string_const("dmmsc", 5),
7,
MR_TAG_COMMON(1,3,58),
MR_tbmkword(0, 0),
1
},
{
MR_string_const("mmos", 4),
7,
MR_TAG_COMMON(1,3,78),
MR_tbmkword(0, 0),
1
},
{
MR_string_const("dmmos", 5),
7,
MR_TAG_COMMON(1,3,60),
MR_tbmkword(0, 0),
1
},
{
MR_string_const("spf", 3),
8,
MR_TAG_COMMON(1,3,84),
MR_tbmkword(0, 0),
1
},
{
MR_string_const("picreg", 6),
9,
MR_TAG_COMMON(1,3,68),
MR_tbmkword(0, 0),
1
},
{
MR_string_const("decldebug", 9),
11,
MR_TAG_COMMON(1,3,30),
MR_tbmkword(0, 0),
1
},
{
MR_string_const("debug", 5),
11,
MR_TAG_COMMON(1,3,37),
MR_tbmkword(0, 0),
1
},
{
MR_string_const("ll_debug", 8),
10,
MR_TAG_COMMON(1,3,66),
MR_tbmkword(0, 0),
1
},
{
MR_string_const("exts", 4),
12,
MR_TAG_COMMON(1,3,62),
MR_tbmkword(0, 0),
1
},
{
MR_string_const("stseg", 5),
12,
MR_TAG_COMMON(1,3,70),
MR_tbmkword(0, 0),
1
},
{
MR_string_const("rbmm", 4),
13,
MR_TAG_COMMON(1,3,92),
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
	"comp_tag",
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
	&mercury_data_libs__handle_options__enum_functor_desc_grade_component_0_2,
	&mercury_data_libs__handle_options__enum_functor_desc_grade_component_0_0,
	&mercury_data_libs__handle_options__enum_functor_desc_grade_component_0_10,
	&mercury_data_libs__handle_options__enum_functor_desc_grade_component_0_7,
	&mercury_data_libs__handle_options__enum_functor_desc_grade_component_0_1,
	&mercury_data_libs__handle_options__enum_functor_desc_grade_component_0_9,
	&mercury_data_libs__handle_options__enum_functor_desc_grade_component_0_3,
	&mercury_data_libs__handle_options__enum_functor_desc_grade_component_0_13,
	&mercury_data_libs__handle_options__enum_functor_desc_grade_component_0_8,
	&mercury_data_libs__handle_options__enum_functor_desc_grade_component_0_12,
	&mercury_data_libs__handle_options__enum_functor_desc_grade_component_0_6,
	&mercury_data_libs__handle_options__enum_functor_desc_grade_component_0_4,
	&mercury_data_libs__handle_options__enum_functor_desc_grade_component_0_11,
	&mercury_data_libs__handle_options__enum_functor_desc_grade_component_0_5
};

const MR_Integer mercury_data_libs__handle_options__functor_number_map_grade_component_0[] = {
	1,
	4,
	0,
	6,
	11,
	13,
	10,
	3,
	8,
	5,
	2,
	12,
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
	14,
	4,
	mercury_data_libs__handle_options__functor_number_map_grade_component_0
};

static const MR_UserClosureId
mercury_data__closure_layout__libs__handle_options__process_options_6_0_1 = {
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
163,
"d1;c8;"
};

static const MR_UserClosureId
mercury_data__closure_layout__libs__handle_options__process_options_6_0_2 = {
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
163,
"d1;c9;"
};

static const MR_UserClosureId
mercury_data__closure_layout__libs__handle_options__process_options_6_0_3 = {
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
163,
"d1;c10;"
};

static const MR_UserClosureId
mercury_data__closure_layout__libs__handle_options__process_options_6_0_4 = {
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
163,
"d1;c11;"
};

static const MR_UserClosureId
mercury_data__closure_layout__libs__handle_options__compute_grade_2_0_1 = {
{
MR_PREDICATE,
"libs.handle_options",
"libs.handle_options",
"lambda_handle_options_m_2240",
2,
0
},
"libs.handle_options",
"handle_options.m",
2240,
"d1;c3;"
};

static const MR_UserClosureId
mercury_data__closure_layout__libs__handle_options__postprocess_options_2_13_0_1 = {
{
MR_FUNCTION,
"libs.handle_options",
"libs.handle_options",
"lambda_handle_options_m_1668",
3,
0
},
"libs.handle_options",
"handle_options.m",
1668,
"d1;c15;q;c662;d1;c3;"
};

static const MR_UserClosureId
mercury_data__closure_layout__libs__handle_options__postprocess_options_2_13_0_2 = {
{
MR_FUNCTION,
"libs.handle_options",
"libs.handle_options",
"lambda_handle_options_m_1683",
3,
0
},
"libs.handle_options",
"handle_options.m",
1683,
"d1;c15;q;c662;d1;c17;"
};

static const MR_UserClosureId
mercury_data__closure_layout__libs__handle_options__postprocess_options_2_13_0_3 = {
{
MR_FUNCTION,
"libs.handle_options",
"libs.handle_options",
"lambda_handle_options_m_1692",
3,
0
},
"libs.handle_options",
"handle_options.m",
1692,
"d1;c15;q;c662;d1;c25;"
};

static const MR_UserClosureId
mercury_data__closure_layout__libs__handle_options__postprocess_options_2_13_0_4 = {
{
MR_FUNCTION,
"libs.handle_options",
"libs.handle_options",
"lambda_handle_options_m_1702",
3,
0
},
"libs.handle_options",
"handle_options.m",
1702,
"d1;c15;q;c662;d1;c33;"
};

static const MR_UserClosureId
mercury_data__closure_layout__libs__handle_options__postprocess_options_2_13_0_5 = {
{
MR_FUNCTION,
"libs.handle_options",
"libs.handle_options",
"lambda_handle_options_m_1738",
4,
0
},
"libs.handle_options",
"handle_options.m",
1738,
"d1;c15;q;c672;"
};

static const MR_UserClosureId
mercury_data__closure_layout__libs__handle_options__postprocess_options_2_13_0_6 = {
{
MR_PREDICATE,
"libs.handle_options",
"libs.handle_options",
"lambda_handle_options_m_1759",
2,
0
},
"libs.handle_options",
"handle_options.m",
1759,
"d1;c15;q;c673;d1;c12;"
};

static const MR_UserClosureId
mercury_data__closure_layout__libs__handle_options__postprocess_options_2_13_0_7 = {
{
MR_PREDICATE,
"libs.handle_options",
"libs.handle_options",
"lambda2_handle_options_m_1759",
2,
0
},
"libs.handle_options",
"handle_options.m",
1759,
"d1;c15;q;c673;d1;c11;"
};

static const MR_UserClosureId
mercury_data__closure_layout__libs__handle_options__postprocess_options_2_13_0_8 = {
{
MR_FUNCTION,
"libs.handle_options",
"libs.handle_options",
"lambda_handle_options_m_1779",
3,
0
},
"libs.handle_options",
"handle_options.m",
1779,
"d1;c15;q;c681;d1;c2;"
};

static const MR_UserClosureId
mercury_data__closure_layout__libs__handle_options__postprocess_options_2_13_0_9 = {
{
MR_FUNCTION,
"libs.handle_options",
"libs.handle_options",
"lambda_handle_options_m_1783",
3,
0
},
"libs.handle_options",
"handle_options.m",
1783,
"d1;c15;q;c681;d1;c5;"
};

static const MR_UserClosureId
mercury_data__closure_layout__libs__handle_options__postprocess_options_2_13_0_10 = {
{
MR_FUNCTION,
"libs.handle_options",
"libs.handle_options",
"lambda_handle_options_m_1806",
3,
0
},
"libs.handle_options",
"handle_options.m",
1806,
"d1;c15;q;c690;?;t;"
};

static const MR_UserClosureId
mercury_data__closure_layout__libs__handle_options__postprocess_options_2_13_0_11 = {
{
MR_FUNCTION,
"libs.handle_options",
"libs.handle_options",
"lambda_handle_options_m_1808",
2,
0
},
"libs.handle_options",
"handle_options.m",
1808,
"d1;c15;q;c690;?;e;t;"
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
2076,
"d1;c6;"
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
2541,
"d2;c4;"
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
2500,
"d1;c3;"
};

static const MR_UserClosureId
mercury_data__closure_layout__libs__handle_options__convert_grade_option_3_0_2 = {
{
MR_PREDICATE,
"libs.handle_options",
"libs.handle_options",
"lambda_handle_options_m_2500",
3,
0
},
"libs.handle_options",
"handle_options.m",
2500,
"d1;c4;"
};

static const MR_UserClosureId
mercury_data__closure_layout__libs__handle_options__convert_grade_option_3_0_3 = {
{
MR_PREDICATE,
"libs.handle_options",
"libs.handle_options",
"lambda_handle_options_m_2168",
5,
0
},
"libs.handle_options",
"handle_options.m",
2168,
"d1;c7;"
};

static const MR_UserClosureId
mercury_data__closure_layout__libs__handle_options__add_option_list_3_0_1 = {
{
MR_PREDICATE,
"libs.handle_options",
"libs.handle_options",
"lambda_handle_options_m_2191",
3,
0
},
"libs.handle_options",
"handle_options.m",
2191,
"d1;c4;"
};

static const MR_UserClosureId
mercury_data__closure_layout__libs__handle_options__IntroducedFrom__pred__convert_grade_option__2168__1_5_0_1 = {
{
MR_PREDICATE,
"libs.handle_options",
"libs.handle_options",
"lambda_handle_options_m_2191",
3,
0
},
"libs.handle_options",
"handle_options.m",
2191,
"d1;c4;"
};

MR_decl_entry(getopt_io__process_options_7_0);

MR_BEGIN_MODULE(libs__handle_options_module0)
	MR_init_entry1(libs__handle_options__process_options_6_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__libs__handle_options__process_options_6_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(libs__options, option);
	MR_r2 = (MR_Word) MR_TAG_COMMON(1,5,0);
	MR_np_tailcall_ent(getopt_io__process_options_7_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(list__append_3_1);

MR_BEGIN_MODULE(libs__handle_options_module1)
	MR_init_entry1(libs__handle_options__add_error_3_0);
MR_BEGIN_CODE

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
	MR_init_label8(libs__handle_options__convert_dump_alias_2_0,3,20,5,6,7,8,9,10)
	MR_init_label8(libs__handle_options__convert_dump_alias_2_0,11,12,13,14,15,16,17,18)
MR_BEGIN_CODE

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
	MR_Word MR_tempr1;
	MR_tempr1 = (MR_COMMON(7,0))[(MR_Integer) MR_r3];
	if (((MR_Integer) MR_tempr1 && (strcmp((char *)MR_tempr1, (char *)MR_r1) == 0))) {
		MR_GOTO_LAB(libs__handle_options__convert_dump_alias_2_0_i5);
	}
	MR_r3 = (MR_COMMON(6,0))[(MR_Integer) MR_r3];
	if (MR_INT_GE(MR_r3,0))
		continue;
	}
	break; } /* end while */
MR_def_label(libs__handle_options__convert_dump_alias_2_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_proceed();
MR_def_label(libs__handle_options__convert_dump_alias_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_r3,
		MR_LABEL_AP(libs__handle_options__convert_dump_alias_2_0_i20) MR_AND
		MR_LABEL_AP(libs__handle_options__convert_dump_alias_2_0_i6) MR_AND
		MR_LABEL_AP(libs__handle_options__convert_dump_alias_2_0_i7) MR_AND
		MR_LABEL_AP(libs__handle_options__convert_dump_alias_2_0_i8) MR_AND
		MR_LABEL_AP(libs__handle_options__convert_dump_alias_2_0_i9) MR_AND
		MR_LABEL_AP(libs__handle_options__convert_dump_alias_2_0_i10) MR_AND
		MR_LABEL_AP(libs__handle_options__convert_dump_alias_2_0_i11) MR_AND
		MR_LABEL_AP(libs__handle_options__convert_dump_alias_2_0_i12) MR_AND
		MR_LABEL_AP(libs__handle_options__convert_dump_alias_2_0_i20) MR_AND
		MR_LABEL_AP(libs__handle_options__convert_dump_alias_2_0_i13) MR_AND
		MR_LABEL_AP(libs__handle_options__convert_dump_alias_2_0_i20) MR_AND
		MR_LABEL_AP(libs__handle_options__convert_dump_alias_2_0_i20) MR_AND
		MR_LABEL_AP(libs__handle_options__convert_dump_alias_2_0_i20) MR_AND
		MR_LABEL_AP(libs__handle_options__convert_dump_alias_2_0_i20) MR_AND
		MR_LABEL_AP(libs__handle_options__convert_dump_alias_2_0_i20) MR_AND
		MR_LABEL_AP(libs__handle_options__convert_dump_alias_2_0_i20) MR_AND
		MR_LABEL_AP(libs__handle_options__convert_dump_alias_2_0_i20) MR_AND
		MR_LABEL_AP(libs__handle_options__convert_dump_alias_2_0_i20) MR_AND
		MR_LABEL_AP(libs__handle_options__convert_dump_alias_2_0_i14) MR_AND
		MR_LABEL_AP(libs__handle_options__convert_dump_alias_2_0_i20) MR_AND
		MR_LABEL_AP(libs__handle_options__convert_dump_alias_2_0_i20) MR_AND
		MR_LABEL_AP(libs__handle_options__convert_dump_alias_2_0_i20) MR_AND
		MR_LABEL_AP(libs__handle_options__convert_dump_alias_2_0_i20) MR_AND
		MR_LABEL_AP(libs__handle_options__convert_dump_alias_2_0_i15) MR_AND
		MR_LABEL_AP(libs__handle_options__convert_dump_alias_2_0_i20) MR_AND
		MR_LABEL_AP(libs__handle_options__convert_dump_alias_2_0_i20) MR_AND
		MR_LABEL_AP(libs__handle_options__convert_dump_alias_2_0_i16) MR_AND
		MR_LABEL_AP(libs__handle_options__convert_dump_alias_2_0_i17) MR_AND
		MR_LABEL_AP(libs__handle_options__convert_dump_alias_2_0_i20) MR_AND
		MR_LABEL_AP(libs__handle_options__convert_dump_alias_2_0_i20) MR_AND
		MR_LABEL_AP(libs__handle_options__convert_dump_alias_2_0_i20) MR_AND
		MR_LABEL_AP(libs__handle_options__convert_dump_alias_2_0_i18));
MR_def_label(libs__handle_options__convert_dump_alias_2_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("bcdfgilmnprstuvzP", 17);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__handle_options__convert_dump_alias_2_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("bdgvP", 5);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__handle_options__convert_dump_alias_2_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("abcdfgilmnprstuvzBCDMPT", 23);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__handle_options__convert_dump_alias_2_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("abcdfgilmnprstuvzBCMPST", 23);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__handle_options__convert_dump_alias_2_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("abcdfgilmnprstuvzBCDIMPRSTU", 27);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__handle_options__convert_dump_alias_2_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("dfnprsu", 7);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__handle_options__convert_dump_alias_2_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("ilv", 3);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__handle_options__convert_dump_alias_2_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("bcdglmnpruvP", 12);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__handle_options__convert_dump_alias_2_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("din", 3);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__handle_options__convert_dump_alias_2_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("cdinpGDRS", 9);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__handle_options__convert_dump_alias_2_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("ltuCIU", 6);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__handle_options__convert_dump_alias_2_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("cP", 2);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__handle_options__convert_dump_alias_2_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("bcdglmnstuvz", 12);
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

MR_BEGIN_MODULE(libs__handle_options_module3)
	MR_init_entry1(libs__handle_options__check_option_values_12_0);
	MR_init_label8(libs__handle_options__check_option_values_12_0,2,6,4,8,9,10,14,12)
	MR_init_label8(libs__handle_options__check_option_values_12_0,16,17,18,22,20,24,25,26)
	MR_init_label8(libs__handle_options__check_option_values_12_0,27,29,30,31,35,33,37,38)
	MR_init_label8(libs__handle_options__check_option_values_12_0,39,43,41,45,46,47,51,48)
	MR_init_label8(libs__handle_options__check_option_values_12_0,52,53,54,60,64,63,56,66)
	MR_init_label8(libs__handle_options__check_option_values_12_0,67,69,70,74,72,76,77,78)
	MR_init_label8(libs__handle_options__check_option_values_12_0,79,83,81,85,86,87,88,94)
	MR_init_label3(libs__handle_options__check_option_values_12_0,96,92,97)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(libs__handle_options__check_option_values_12_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(11);
	MR_sv(11) = (MR_Word) MR_succip;
	MR_sv(9) = MR_r1;
	MR_sv(1) = MR_r2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(libs__options, option);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(getopt_io, option_data);
	MR_r3 = MR_sv(9);
	MR_r4 = (MR_Integer) 141;
	MR_np_call_localret_ent(map__lookup_3_0,
		libs__handle_options__check_option_values_12_0_i2);
MR_def_label(libs__handle_options__check_option_values_12_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,0)) {
		MR_GOTO_LAB(libs__handle_options__check_option_values_12_0_i4);
	}
	MR_r1 = MR_ctfield(3, MR_r1, 1);
	MR_np_call_localret_ent(libs__globals__convert_target_2_0,
		libs__handle_options__check_option_values_12_0_i6);
MR_def_label(libs__handle_options__check_option_values_12_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(libs__handle_options__check_option_values_12_0_i4);
	}
	MR_sv(2) = MR_sv(1);
	MR_sv(1) = MR_r2;
	MR_r3 = MR_sv(9);
	MR_r4 = (MR_Integer) 168;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(libs__options, option);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(getopt_io, option_data);
	MR_GOTO_LAB(libs__handle_options__check_option_values_12_0_i9);
MR_def_label(libs__handle_options__check_option_values_12_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("Invalid target option (must be \140c\', \140asm\', \140il\', or \140java\')", 59);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(libs__handle_options__add_error_3_0,
		libs__handle_options__check_option_values_12_0_i8);
MR_def_label(libs__handle_options__check_option_values_12_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = (MR_Integer) 0;
	MR_r3 = MR_sv(9);
	MR_sv(2) = MR_r1;
	MR_r4 = (MR_Integer) 168;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(libs__options, option);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(getopt_io, option_data);
MR_def_label(libs__handle_options__check_option_values_12_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_r3;
	MR_np_call_localret_ent(map__lookup_3_0,
		libs__handle_options__check_option_values_12_0_i10);
MR_def_label(libs__handle_options__check_option_values_12_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,0)) {
		MR_GOTO_LAB(libs__handle_options__check_option_values_12_0_i12);
	}
	MR_r1 = MR_ctfield(3, MR_r1, 1);
	MR_np_call_localret_ent(libs__globals__convert_gc_method_2_0,
		libs__handle_options__check_option_values_12_0_i14);
MR_def_label(libs__handle_options__check_option_values_12_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(libs__handle_options__check_option_values_12_0_i12);
	}
	MR_sv(3) = MR_sv(2);
	MR_sv(2) = MR_r2;
	MR_r3 = MR_sv(9);
	MR_r4 = (MR_Integer) 181;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(libs__options, option);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(getopt_io, option_data);
	MR_GOTO_LAB(libs__handle_options__check_option_values_12_0_i17);
MR_def_label(libs__handle_options__check_option_values_12_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("Invalid GC option (must be \140none\', \140conservative\', \140boehm\', \140mps\', \140accurate\', or \140automatic\')", 94);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(libs__handle_options__add_error_3_0,
		libs__handle_options__check_option_values_12_0_i16);
MR_def_label(libs__handle_options__check_option_values_12_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = (MR_Integer) 1;
	MR_r3 = MR_sv(9);
	MR_sv(3) = MR_r1;
	MR_r4 = (MR_Integer) 181;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(libs__options, option);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(getopt_io, option_data);
MR_def_label(libs__handle_options__check_option_values_12_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_r3;
	MR_np_call_localret_ent(map__lookup_3_0,
		libs__handle_options__check_option_values_12_0_i18);
MR_def_label(libs__handle_options__check_option_values_12_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,0)) {
		MR_GOTO_LAB(libs__handle_options__check_option_values_12_0_i20);
	}
	MR_r1 = MR_ctfield(3, MR_r1, 1);
	MR_np_call_localret_ent(libs__globals__convert_tags_method_2_0,
		libs__handle_options__check_option_values_12_0_i22);
MR_def_label(libs__handle_options__check_option_values_12_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(libs__handle_options__check_option_values_12_0_i20);
	}
	MR_sv(4) = MR_sv(3);
	MR_sv(3) = MR_r2;
	MR_r3 = MR_sv(9);
	MR_r4 = (MR_Integer) 249;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(libs__options, option);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(getopt_io, option_data);
	MR_GOTO_LAB(libs__handle_options__check_option_values_12_0_i25);
MR_def_label(libs__handle_options__check_option_values_12_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("Invalid tags option (must be \140none\', \140low\' or \140high\')", 53);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(libs__handle_options__add_error_3_0,
		libs__handle_options__check_option_values_12_0_i24);
MR_def_label(libs__handle_options__check_option_values_12_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = (MR_Integer) 0;
	MR_r3 = MR_sv(9);
	MR_sv(4) = MR_r1;
	MR_r4 = (MR_Integer) 249;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(libs__options, option);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(getopt_io, option_data);
MR_def_label(libs__handle_options__check_option_values_12_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_r3;
	MR_np_call_localret_ent(map__lookup_3_0,
		libs__handle_options__check_option_values_12_0_i26);
MR_def_label(libs__handle_options__check_option_values_12_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,2)) {
		MR_GOTO_LAB(libs__handle_options__check_option_values_12_0_i27);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(2, MR_r1, 0);
	MR_r5 = MR_tempr1;
	if (MR_INT_LT(MR_tempr1,1)) {
		MR_GOTO_LAB(libs__handle_options__check_option_values_12_0_i27);
	}
	if (MR_INT_GT(MR_tempr1,100)) {
		MR_GOTO_LAB(libs__handle_options__check_option_values_12_0_i27);
	}
	MR_r3 = MR_sv(9);
	MR_r4 = (MR_Integer) 340;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(libs__options, option);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(getopt_io, option_data);
	MR_GOTO_LAB(libs__handle_options__check_option_values_12_0_i30);
	}
MR_def_label(libs__handle_options__check_option_values_12_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("Invalid argument to option \140--fact-table-hash-percent-full\'\n\t(must be an integer between 1 and 100)", 99);
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(libs__handle_options__add_error_3_0,
		libs__handle_options__check_option_values_12_0_i29);
MR_def_label(libs__handle_options__check_option_values_12_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(9);
	MR_sv(4) = MR_r1;
	MR_r4 = (MR_Integer) 340;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(libs__options, option);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(getopt_io, option_data);
MR_def_label(libs__handle_options__check_option_values_12_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_r3;
	MR_np_call_localret_ent(map__lookup_3_0,
		libs__handle_options__check_option_values_12_0_i31);
MR_def_label(libs__handle_options__check_option_values_12_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,0)) {
		MR_GOTO_LAB(libs__handle_options__check_option_values_12_0_i33);
	}
	MR_r1 = MR_ctfield(3, MR_r1, 1);
	MR_np_call_localret_ent(libs__globals__convert_termination_norm_2_0,
		libs__handle_options__check_option_values_12_0_i35);
MR_def_label(libs__handle_options__check_option_values_12_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(libs__handle_options__check_option_values_12_0_i33);
	}
	MR_sv(5) = MR_sv(4);
	MR_sv(4) = MR_r2;
	MR_r3 = MR_sv(9);
	MR_r4 = (MR_Integer) 346;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(libs__options, option);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(getopt_io, option_data);
	MR_GOTO_LAB(libs__handle_options__check_option_values_12_0_i38);
MR_def_label(libs__handle_options__check_option_values_12_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("Invalid argument to option \140--termination-norm\'\n\t(must be \140simple\', \140total\' or \140num-data-elems\').", 97);
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(libs__handle_options__add_error_3_0,
		libs__handle_options__check_option_values_12_0_i37);
MR_def_label(libs__handle_options__check_option_values_12_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = (MR_Integer) 0;
	MR_r3 = MR_sv(9);
	MR_sv(5) = MR_r1;
	MR_r4 = (MR_Integer) 346;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(libs__options, option);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(getopt_io, option_data);
MR_def_label(libs__handle_options__check_option_values_12_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_r3;
	MR_np_call_localret_ent(map__lookup_3_0,
		libs__handle_options__check_option_values_12_0_i39);
MR_def_label(libs__handle_options__check_option_values_12_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,0)) {
		MR_GOTO_LAB(libs__handle_options__check_option_values_12_0_i41);
	}
	MR_r1 = MR_ctfield(3, MR_r1, 1);
	MR_np_call_localret_ent(libs__globals__convert_termination_norm_2_0,
		libs__handle_options__check_option_values_12_0_i43);
MR_def_label(libs__handle_options__check_option_values_12_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(libs__handle_options__check_option_values_12_0_i41);
	}
	MR_sv(8) = MR_sv(5);
	MR_sv(5) = MR_r2;
	MR_r3 = MR_sv(9);
	MR_r4 = (MR_Integer) 104;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(libs__options, option);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(getopt_io, option_data);
	MR_GOTO_LAB(libs__handle_options__check_option_values_12_0_i46);
MR_def_label(libs__handle_options__check_option_values_12_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("Invalid argument to option \140--termination2-norm\'\n\t(must be\140simple\', \140total\' or \140num-data-elems\').", 97);
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(libs__handle_options__add_error_3_0,
		libs__handle_options__check_option_values_12_0_i45);
MR_def_label(libs__handle_options__check_option_values_12_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = (MR_Integer) 0;
	MR_r3 = MR_sv(9);
	MR_sv(8) = MR_r1;
	MR_r4 = (MR_Integer) 104;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(libs__options, option);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(getopt_io, option_data);
MR_def_label(libs__handle_options__check_option_values_12_0,46)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_r3;
	MR_np_call_localret_ent(map__lookup_3_0,
		libs__handle_options__check_option_values_12_0_i47);
MR_def_label(libs__handle_options__check_option_values_12_0,47)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,1)) {
		MR_GOTO_LAB(libs__handle_options__check_option_values_12_0_i48);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(1, MR_r1, 0);
	if (MR_INT_NE(MR_tempr1,1)) {
		MR_GOTO_LAB(libs__handle_options__check_option_values_12_0_i48);
	}
	}
	MR_np_call_localret_ent(fn__libs__trace_params__trace_level_none_0_0,
		libs__handle_options__check_option_values_12_0_i51);
MR_def_label(libs__handle_options__check_option_values_12_0,51)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r3 = MR_sv(9);
	MR_sv(7) = MR_sv(8);
	MR_r4 = (MR_Integer) 103;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(libs__options, option);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(getopt_io, option_data);
	MR_GOTO_LAB(libs__handle_options__check_option_values_12_0_i69);
MR_def_label(libs__handle_options__check_option_values_12_0,48)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(libs__options, option);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(getopt_io, option_data);
	MR_r3 = MR_sv(9);
	MR_r4 = (MR_Integer) 92;
	MR_np_call_localret_ent(map__lookup_3_0,
		libs__handle_options__check_option_values_12_0_i52);
MR_def_label(libs__handle_options__check_option_values_12_0,52)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(libs__options, option);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(getopt_io, option_data);
	MR_r3 = MR_sv(9);
	MR_r4 = (MR_Integer) 151;
	MR_np_call_localret_ent(map__lookup_3_0,
		libs__handle_options__check_option_values_12_0_i53);
MR_def_label(libs__handle_options__check_option_values_12_0,53)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(libs__options, option);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(getopt_io, option_data);
	MR_r3 = MR_sv(9);
	MR_r4 = (MR_Integer) 152;
	MR_np_call_localret_ent(map__lookup_3_0,
		libs__handle_options__check_option_values_12_0_i54);
MR_def_label(libs__handle_options__check_option_values_12_0,54)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(6),3,0)) {
		MR_GOTO_LAB(libs__handle_options__check_option_values_12_0_i56);
	}
	if (MR_PTAG_TESTR(MR_sv(7),1)) {
		MR_GOTO_LAB(libs__handle_options__check_option_values_12_0_i56);
	}
	if (MR_PTAG_TESTR(MR_r1,1)) {
		MR_GOTO_LAB(libs__handle_options__check_option_values_12_0_i56);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_ctfield(3, MR_sv(6), 1);
	MR_r2 = MR_ctfield(1, MR_sv(7), 0);
	MR_r3 = MR_ctfield(1, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(libs__trace_params__convert_trace_level_4_0,
		libs__handle_options__check_option_values_12_0_i60);
MR_def_label(libs__handle_options__check_option_values_12_0,60)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(libs__handle_options__check_option_values_12_0_i56);
	}
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(libs__handle_options__check_option_values_12_0_i63);
	}
	MR_np_call_localret_ent(fn__libs__trace_params__trace_level_none_0_0,
		libs__handle_options__check_option_values_12_0_i64);
MR_def_label(libs__handle_options__check_option_values_12_0,64)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("Specified trace level is not compatible with grade", 50);
	MR_r2 = MR_sv(8);
	MR_np_call_localret_ent(libs__handle_options__add_error_3_0,
		libs__handle_options__check_option_values_12_0_i67);
MR_def_label(libs__handle_options__check_option_values_12_0,63)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_ctfield(1, MR_r2, 0);
	MR_r3 = MR_sv(9);
	MR_sv(7) = MR_sv(8);
	MR_r4 = (MR_Integer) 103;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(libs__options, option);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(getopt_io, option_data);
	MR_GOTO_LAB(libs__handle_options__check_option_values_12_0_i69);
MR_def_label(libs__handle_options__check_option_values_12_0,56)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__libs__trace_params__trace_level_none_0_0,
		libs__handle_options__check_option_values_12_0_i66);
MR_def_label(libs__handle_options__check_option_values_12_0,66)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("Invalid argument to option \140--trace\'\n\t(must be \140minimum\', \140shallow\', \140deep\', \140decl\', \140rep\' or \140default\').", 105);
	MR_r2 = MR_sv(8);
	MR_np_call_localret_ent(libs__handle_options__add_error_3_0,
		libs__handle_options__check_option_values_12_0_i67);
MR_def_label(libs__handle_options__check_option_values_12_0,67)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(9);
	MR_sv(7) = MR_r1;
	MR_r4 = (MR_Integer) 103;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(libs__options, option);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(getopt_io, option_data);
MR_def_label(libs__handle_options__check_option_values_12_0,69)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_r3;
	MR_np_call_localret_ent(map__lookup_3_0,
		libs__handle_options__check_option_values_12_0_i70);
MR_def_label(libs__handle_options__check_option_values_12_0,70)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,0)) {
		MR_GOTO_LAB(libs__handle_options__check_option_values_12_0_i72);
	}
	MR_r1 = MR_ctfield(3, MR_r1, 1);
	MR_np_call_localret_ent(libs__trace_params__convert_trace_suppress_2_0,
		libs__handle_options__check_option_values_12_0_i74);
MR_def_label(libs__handle_options__check_option_values_12_0,74)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(libs__handle_options__check_option_values_12_0_i72);
	}
	MR_sv(8) = MR_sv(7);
	MR_sv(7) = MR_r2;
	MR_r3 = MR_sv(9);
	MR_r4 = (MR_Integer) 176;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(libs__options, option);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(getopt_io, option_data);
	MR_GOTO_LAB(libs__handle_options__check_option_values_12_0_i78);
MR_def_label(libs__handle_options__check_option_values_12_0,72)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__libs__trace_params__default_trace_suppress_0_0,
		libs__handle_options__check_option_values_12_0_i76);
MR_def_label(libs__handle_options__check_option_values_12_0,76)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(7);
	MR_sv(7) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("Invalid argument to option \140--suppress-trace\'.", 46);
	MR_np_call_localret_ent(libs__handle_options__add_error_3_0,
		libs__handle_options__check_option_values_12_0_i77);
MR_def_label(libs__handle_options__check_option_values_12_0,77)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(9);
	MR_sv(8) = MR_r1;
	MR_r4 = (MR_Integer) 176;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(libs__options, option);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(getopt_io, option_data);
MR_def_label(libs__handle_options__check_option_values_12_0,78)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_r3;
	MR_np_call_localret_ent(map__lookup_3_0,
		libs__handle_options__check_option_values_12_0_i79);
MR_def_label(libs__handle_options__check_option_values_12_0,79)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,0)) {
		MR_GOTO_LAB(libs__handle_options__check_option_values_12_0_i81);
	}
	MR_r1 = MR_ctfield(3, MR_r1, 1);
	MR_np_call_localret_ent(libs__globals__convert_maybe_thread_safe_2_0,
		libs__handle_options__check_option_values_12_0_i83);
MR_def_label(libs__handle_options__check_option_values_12_0,83)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(libs__handle_options__check_option_values_12_0_i81);
	}
	MR_sv(10) = MR_sv(8);
	MR_sv(8) = MR_r2;
	MR_r3 = MR_sv(9);
	MR_r4 = (MR_Integer) 116;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(libs__options, option);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(getopt_io, option_data);
	MR_GOTO_LAB(libs__handle_options__check_option_values_12_0_i86);
MR_def_label(libs__handle_options__check_option_values_12_0,81)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("Invalid argument to option \140--maybe-thread-safe\'.", 49);
	MR_r2 = MR_sv(8);
	MR_np_call_localret_ent(libs__handle_options__add_error_3_0,
		libs__handle_options__check_option_values_12_0_i85);
MR_def_label(libs__handle_options__check_option_values_12_0,85)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = (MR_Integer) 0;
	MR_r3 = MR_sv(9);
	MR_sv(10) = MR_r1;
	MR_r4 = (MR_Integer) 116;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(libs__options, option);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(getopt_io, option_data);
MR_def_label(libs__handle_options__check_option_values_12_0,86)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_r3;
	MR_np_call_localret_ent(map__lookup_3_0,
		libs__handle_options__check_option_values_12_0_i87);
MR_def_label(libs__handle_options__check_option_values_12_0,87)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,0)) {
		MR_GOTO_LAB(libs__handle_options__check_option_values_12_0_i88);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(3, MR_r1, 1);
	if ((strcmp((char *)MR_tempr1, (char *)(MR_Word) MR_string_const("", 0)) != 0)) {
		MR_GOTO_LAB(libs__handle_options__check_option_values_12_0_i88);
	}
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(4);
	MR_r6 = MR_sv(5);
	MR_r7 = MR_sv(6);
	MR_r8 = MR_sv(7);
	MR_r9 = MR_sv(8);
	MR_r1 = MR_sv(9);
	MR_r10 = MR_sv(10);
	MR_decr_sp_and_return(11);
	}
MR_def_label(libs__handle_options__check_option_values_12_0,88)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,0)) {
		MR_GOTO_LAB(libs__handle_options__check_option_values_12_0_i92);
	}
	MR_r1 = MR_ctfield(3, MR_r1, 1);
	MR_np_call_localret_ent(libs__handle_options__convert_dump_alias_2_0,
		libs__handle_options__check_option_values_12_0_i94);
MR_def_label(libs__handle_options__check_option_values_12_0,94)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(libs__handle_options__check_option_values_12_0_i92);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_r4 = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr1, 1) = MR_r2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(libs__options, option);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(getopt_io, option_data);
	MR_r3 = (MR_Integer) 117;
	MR_r5 = MR_sv(9);
	}
	MR_np_call_localret_ent(svmap__set_4_0,
		libs__handle_options__check_option_values_12_0_i96);
MR_def_label(libs__handle_options__check_option_values_12_0,96)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(4);
	MR_r6 = MR_sv(5);
	MR_r7 = MR_sv(6);
	MR_r8 = MR_sv(7);
	MR_r9 = MR_sv(8);
	MR_r10 = MR_sv(10);
	MR_decr_sp_and_return(11);
MR_def_label(libs__handle_options__check_option_values_12_0,92)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("Invalid argument to option \140--hlds-dump-alias\'.", 47);
	MR_r2 = MR_sv(10);
	MR_np_call_localret_ent(libs__handle_options__add_error_3_0,
		libs__handle_options__check_option_values_12_0_i97);
MR_def_label(libs__handle_options__check_option_values_12_0,97)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(4);
	MR_r6 = MR_sv(5);
	MR_r7 = MR_sv(6);
	MR_r8 = MR_sv(7);
	MR_r9 = MR_sv(8);
	MR_r10 = MR_r1;
	MR_r1 = MR_sv(9);
	MR_decr_sp_and_return(11);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(string__append_list_2_0);

MR_BEGIN_MODULE(libs__handle_options_module4)
	MR_init_entry1(libs__handle_options__construct_string_2_0);
	MR_init_label5(libs__handle_options__construct_string_2_0,3,5,8,9,7)
MR_BEGIN_CODE

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
	MR_r2 = MR_ctfield(1, MR_r1, 1);
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(libs__handle_options__construct_string_2_0_i5);
	}
	MR_r1 = MR_ctfield(0, MR_ctfield(1, MR_r1, 0), 1);
	MR_proceed();
MR_def_label(libs__handle_options__construct_string_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(1, MR_r2, 1);
	if (MR_LTAGS_TEST(MR_tempr1,0,0)) {
		MR_GOTO_LAB(libs__handle_options__construct_string_2_0_i7);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_ctfield(0, MR_ctfield(1, MR_r1, 0), 1);
	MR_sv(2) = MR_ctfield(0, MR_ctfield(1, MR_r2, 0), 1);
	MR_r1 = MR_tempr1;
	}
	MR_np_localcall_lab(libs__handle_options__construct_string_2_0,
		libs__handle_options__construct_string_2_0_i8);
MR_def_label(libs__handle_options__construct_string_2_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = (MR_Word) MR_string_const(".", 1);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = MR_sv(2);
	MR_tfield(1, MR_r1, 1) = MR_tempr2;
	}
	MR_np_call_localret_ent(string__append_list_2_0,
		libs__handle_options__construct_string_2_0_i9);
MR_def_label(libs__handle_options__construct_string_2_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = (MR_Word) MR_string_const(".", 1);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = MR_sv(1);
	MR_tfield(1, MR_r1, 1) = MR_tempr2;
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(string__append_list_2_0);
	}
MR_def_label(libs__handle_options__construct_string_2_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_ctfield(0, MR_ctfield(1, MR_r2, 0), 1);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = (MR_Word) MR_string_const(".", 1);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_ctfield(0, MR_ctfield(1, MR_r1, 0), 1);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr2;
	MR_r1 = MR_tempr1;
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
	MR_init_label3(libs__handle_options__compute_grade_2_0,2,3,5)
MR_BEGIN_CODE

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
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(libs__handle_options__IntroducedFrom__pred__compute_grade_components__2240__1_2_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,2,2);
	}
	MR_np_call_localret_ent(solutions__solutions_2_1,
		libs__handle_options__compute_grade_2_0_i3);
MR_def_label(libs__handle_options__compute_grade_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(libs__handle_options__compute_grade_2_0_i5);
	}
	MR_r1 = (MR_Word) MR_string_const("none", 4);
	MR_decr_sp_and_return(1);
MR_def_label(libs__handle_options__compute_grade_2_0,5)
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
	MR_init_label5(libs__handle_options__grade_directory_component_2_0,2,4,6,7,3)
MR_BEGIN_CODE

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
	MR_init_label2(libs__handle_options__option_implies_5_0,2,4)
MR_BEGIN_CODE

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
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_sv(3) = MR_tempr1;
	MR_r2 = MR_r1;
	MR_r1 = MR_tempr1;
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


MR_BEGIN_MODULE(libs__handle_options_module8)
	MR_init_entry1(libs__handle_options__option_neg_implies_5_0);
	MR_init_label2(libs__handle_options__option_neg_implies_5_0,2,4)
MR_BEGIN_CODE

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
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_sv(3) = MR_tempr1;
	MR_r2 = MR_r1;
	MR_r1 = MR_tempr1;
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

MR_decl_entry(libs__globals__lookup_int_option_3_0);

MR_BEGIN_MODULE(libs__handle_options_module9)
	MR_init_entry1(libs__handle_options__postprocess_options_lowlevel_2_0);
	MR_init_label8(libs__handle_options__postprocess_options_lowlevel_2_0,2,5,4,3,6,8,9,7)
	MR_init_label8(libs__handle_options__postprocess_options_lowlevel_2_0,10,12,13,11,14,16,17,15)
	MR_init_label8(libs__handle_options__postprocess_options_lowlevel_2_0,18,20,21,19,22,23,24,28)
	MR_init_label2(libs__handle_options__postprocess_options_lowlevel_2_0,27,26)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(libs__handle_options__postprocess_options_lowlevel_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = (MR_Word) MR_TAG_COMMON(1,8,0);
	MR_r2 = (MR_Integer) 196;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		libs__handle_options__postprocess_options_lowlevel_2_0_i2);
MR_def_label(libs__handle_options__postprocess_options_lowlevel_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(libs__handle_options__postprocess_options_lowlevel_2_0_i4);
	}
	MR_r1 = (MR_Integer) 362;
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(1);
	MR_np_call_localret_ent(libs__globals__set_option_4_0,
		libs__handle_options__postprocess_options_lowlevel_2_0_i5);
MR_def_label(libs__handle_options__postprocess_options_lowlevel_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 295;
	MR_GOTO_LAB(libs__handle_options__postprocess_options_lowlevel_2_0_i3);
MR_def_label(libs__handle_options__postprocess_options_lowlevel_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = (MR_Integer) 295;
MR_def_label(libs__handle_options__postprocess_options_lowlevel_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		libs__handle_options__postprocess_options_lowlevel_2_0_i6);
MR_def_label(libs__handle_options__postprocess_options_lowlevel_2_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(libs__handle_options__postprocess_options_lowlevel_2_0_i8);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = (MR_Integer) 384;
	MR_GOTO_LAB(libs__handle_options__postprocess_options_lowlevel_2_0_i7);
MR_def_label(libs__handle_options__postprocess_options_lowlevel_2_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 378;
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(1);
	MR_np_call_localret_ent(libs__globals__set_option_4_0,
		libs__handle_options__postprocess_options_lowlevel_2_0_i9);
MR_def_label(libs__handle_options__postprocess_options_lowlevel_2_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 384;
MR_def_label(libs__handle_options__postprocess_options_lowlevel_2_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		libs__handle_options__postprocess_options_lowlevel_2_0_i10);
MR_def_label(libs__handle_options__postprocess_options_lowlevel_2_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(libs__handle_options__postprocess_options_lowlevel_2_0_i12);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = (MR_Integer) 384;
	MR_GOTO_LAB(libs__handle_options__postprocess_options_lowlevel_2_0_i11);
MR_def_label(libs__handle_options__postprocess_options_lowlevel_2_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 381;
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(1);
	MR_np_call_localret_ent(libs__globals__set_option_4_0,
		libs__handle_options__postprocess_options_lowlevel_2_0_i13);
MR_def_label(libs__handle_options__postprocess_options_lowlevel_2_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 384;
MR_def_label(libs__handle_options__postprocess_options_lowlevel_2_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		libs__handle_options__postprocess_options_lowlevel_2_0_i14);
MR_def_label(libs__handle_options__postprocess_options_lowlevel_2_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(libs__handle_options__postprocess_options_lowlevel_2_0_i16);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = (MR_Integer) 383;
	MR_GOTO_LAB(libs__handle_options__postprocess_options_lowlevel_2_0_i15);
MR_def_label(libs__handle_options__postprocess_options_lowlevel_2_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 374;
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(1);
	MR_np_call_localret_ent(libs__globals__set_option_4_0,
		libs__handle_options__postprocess_options_lowlevel_2_0_i17);
MR_def_label(libs__handle_options__postprocess_options_lowlevel_2_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 383;
MR_def_label(libs__handle_options__postprocess_options_lowlevel_2_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		libs__handle_options__postprocess_options_lowlevel_2_0_i18);
MR_def_label(libs__handle_options__postprocess_options_lowlevel_2_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(libs__handle_options__postprocess_options_lowlevel_2_0_i20);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = (MR_Integer) 384;
	MR_GOTO_LAB(libs__handle_options__postprocess_options_lowlevel_2_0_i19);
MR_def_label(libs__handle_options__postprocess_options_lowlevel_2_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 230;
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(1);
	MR_np_call_localret_ent(libs__globals__set_option_4_0,
		libs__handle_options__postprocess_options_lowlevel_2_0_i21);
MR_def_label(libs__handle_options__postprocess_options_lowlevel_2_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 384;
MR_def_label(libs__handle_options__postprocess_options_lowlevel_2_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		libs__handle_options__postprocess_options_lowlevel_2_0_i22);
MR_def_label(libs__handle_options__postprocess_options_lowlevel_2_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = (MR_Integer) 378;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		libs__handle_options__postprocess_options_lowlevel_2_0_i23);
MR_def_label(libs__handle_options__postprocess_options_lowlevel_2_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = (MR_Integer) 387;
	MR_np_call_localret_ent(libs__globals__lookup_int_option_3_0,
		libs__handle_options__postprocess_options_lowlevel_2_0_i24);
MR_def_label(libs__handle_options__postprocess_options_lowlevel_2_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(1),1)) {
		MR_GOTO_LAB(libs__handle_options__postprocess_options_lowlevel_2_0_i28);
	}
	if (MR_INT_GE(MR_r1,1)) {
		MR_GOTO_LAB(libs__handle_options__postprocess_options_lowlevel_2_0_i28);
	}
	MR_r3 = MR_sv(3);
	MR_GOTO_LAB(libs__handle_options__postprocess_options_lowlevel_2_0_i27);
MR_def_label(libs__handle_options__postprocess_options_lowlevel_2_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(2),1)) {
		MR_GOTO_LAB(libs__handle_options__postprocess_options_lowlevel_2_0_i26);
	}
	if (MR_INT_GE(MR_r1,1)) {
		MR_GOTO_LAB(libs__handle_options__postprocess_options_lowlevel_2_0_i26);
	}
	MR_r3 = MR_sv(3);
MR_def_label(libs__handle_options__postprocess_options_lowlevel_2_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 387;
	MR_r2 = (MR_Word) MR_TAG_COMMON(2,8,0);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(libs__globals__set_option_4_0);
MR_def_label(libs__handle_options__postprocess_options_lowlevel_2_0,26)
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
	MR_init_label4(libs__handle_options__option_requires_7_0,2,3,9,5)
MR_BEGIN_CODE

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
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r5;
	MR_sv(4) = MR_tempr1;
	MR_sv(5) = MR_r6;
	MR_r2 = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		libs__handle_options__option_requires_7_0_i2);
MR_def_label(libs__handle_options__option_requires_7_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(4);
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

MR_decl_entry(io__write_string_3_0);
MR_decl_entry(io__set_exit_status_3_0);

MR_BEGIN_MODULE(libs__handle_options_module11)
	MR_init_entry1(libs__handle_options__disable_smart_recompilation_5_0);
	MR_init_label8(libs__handle_options__disable_smart_recompilation_5_0,2,3,5,6,7,8,9,14)
	MR_init_label1(libs__handle_options__disable_smart_recompilation_5_0,11)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(libs__handle_options__disable_smart_recompilation_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Integer) 88;
	MR_r3 = MR_r2;
	MR_r2 = (MR_Word) MR_TAG_COMMON(1,8,1);
	MR_np_call_localret_ent(libs__globals__set_option_4_0,
		libs__handle_options__disable_smart_recompilation_5_0_i2);
MR_def_label(libs__handle_options__disable_smart_recompilation_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r2 = (MR_Integer) 20;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		libs__handle_options__disable_smart_recompilation_5_0_i3);
MR_def_label(libs__handle_options__disable_smart_recompilation_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(libs__handle_options__disable_smart_recompilation_5_0_i5);
	}
	MR_r1 = MR_sv(2);
	MR_decr_sp_and_return(3);
MR_def_label(libs__handle_options__disable_smart_recompilation_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("Warning: smart recompilation does not yet work with ", 52);
	MR_np_call_localret_ent(io__write_string_3_0,
		libs__handle_options__disable_smart_recompilation_5_0_i6);
MR_def_label(libs__handle_options__disable_smart_recompilation_5_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(io__write_string_3_0,
		libs__handle_options__disable_smart_recompilation_5_0_i7);
MR_def_label(libs__handle_options__disable_smart_recompilation_5_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(".\n", 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		libs__handle_options__disable_smart_recompilation_5_0_i8);
MR_def_label(libs__handle_options__disable_smart_recompilation_5_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_r2 = (MR_Integer) 2;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		libs__handle_options__disable_smart_recompilation_5_0_i9);
MR_def_label(libs__handle_options__disable_smart_recompilation_5_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(libs__handle_options__disable_smart_recompilation_5_0_i11);
	}
MR_def_label(libs__handle_options__disable_smart_recompilation_5_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_decr_sp_and_return(3);
MR_def_label(libs__handle_options__disable_smart_recompilation_5_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_np_call_localret_ent(io__set_exit_status_3_0,
		libs__handle_options__disable_smart_recompilation_5_0_i14);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(libs__handle_options_module12)
	MR_init_entry1(libs__handle_options__maybe_disable_smart_recompilation_8_0);
	MR_init_label8(libs__handle_options__maybe_disable_smart_recompilation_8_0,2,5,6,8,9,10,11,12)
	MR_init_label3(libs__handle_options__maybe_disable_smart_recompilation_8_0,24,14,3)
MR_BEGIN_CODE

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
	MR_r1 = (MR_Integer) 88;
	MR_r2 = (MR_Word) MR_TAG_COMMON(1,8,1);
	MR_r3 = MR_sv(4);
	MR_np_call_localret_ent(libs__globals__set_option_4_0,
		libs__handle_options__maybe_disable_smart_recompilation_8_0_i5);
MR_def_label(libs__handle_options__maybe_disable_smart_recompilation_8_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r2 = (MR_Integer) 20;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		libs__handle_options__maybe_disable_smart_recompilation_8_0_i6);
MR_def_label(libs__handle_options__maybe_disable_smart_recompilation_8_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(libs__handle_options__maybe_disable_smart_recompilation_8_0_i8);
	}
	MR_r1 = MR_sv(1);
	MR_decr_sp_and_return(5);
MR_def_label(libs__handle_options__maybe_disable_smart_recompilation_8_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("Warning: smart recompilation does not yet work with ", 52);
	MR_np_call_localret_ent(io__write_string_3_0,
		libs__handle_options__maybe_disable_smart_recompilation_8_0_i9);
MR_def_label(libs__handle_options__maybe_disable_smart_recompilation_8_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(io__write_string_3_0,
		libs__handle_options__maybe_disable_smart_recompilation_8_0_i10);
MR_def_label(libs__handle_options__maybe_disable_smart_recompilation_8_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(".\n", 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		libs__handle_options__maybe_disable_smart_recompilation_8_0_i11);
MR_def_label(libs__handle_options__maybe_disable_smart_recompilation_8_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = (MR_Integer) 2;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		libs__handle_options__maybe_disable_smart_recompilation_8_0_i12);
MR_def_label(libs__handle_options__maybe_disable_smart_recompilation_8_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(libs__handle_options__maybe_disable_smart_recompilation_8_0_i14);
	}
MR_def_label(libs__handle_options__maybe_disable_smart_recompilation_8_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_decr_sp_and_return(5);
MR_def_label(libs__handle_options__maybe_disable_smart_recompilation_8_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_np_call_localret_ent(io__set_exit_status_3_0,
		libs__handle_options__maybe_disable_smart_recompilation_8_0_i24);
MR_def_label(libs__handle_options__maybe_disable_smart_recompilation_8_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(libs__globals__globals_io_init_11_0);
MR_decl_entry(libs__globals__io_get_globals_3_0);
MR_decl_entry(libs__globals__lookup_string_option_3_0);
MR_decl_entry(io__get_environment_var_4_0);
MR_decl_entry(fn__libs__globals__gc_is_conservative_1_0);
MR_decl_entry(io__progname_base_4_0);
MR_decl_entry(libs__compiler_util__report_warning_3_0);
MR_decl_entry(libs__globals__set_tags_method_3_0);
MR_decl_entry(libs__globals__set_gc_method_3_0);
MR_decl_entry(fn__libs__trace_params__given_trace_level_is_none_1_0);
MR_decl_entry(libs__globals__lookup_accumulating_option_3_0);
MR_decl_entry(fn__bool__or_2_0);
MR_decl_entry(io__have_symlinks_0_0);
MR_decl_entry(libs__globals__lookup_maybe_string_option_3_0);
MR_decl_entry(string__append_3_2);
MR_decl_entry(analysis__enable_debug_messages_3_0);
MR_decl_entry(string__replace_all_4_0);
MR_decl_entry(bool__or_3_0);
MR_decl_entry(fn__libs__options__option_table_add_mercury_library_directory_2_0);
MR_decl_entry(libs__globals__set_options_3_0);
MR_decl_entry(fn__f_100_105_114_95_95_47_2_0);
MR_decl_entry(fn__list__map_2_0);
MR_decl_entry(fn__f_108_105_115_116_95_95_43_43_2_0);
MR_decl_entry(fn__dir__this_directory_0_0);
MR_decl_entry(fn__list__filter_2_0);
MR_declare_entry(mercury__do_call_closure_1);
MR_decl_entry(libs__globals__io_set_globals_3_0);

MR_BEGIN_MODULE(libs__handle_options_module13)
	MR_init_entry1(libs__handle_options__postprocess_options_2_13_0);
	MR_init_label8(libs__handle_options__postprocess_options_2_13_0,2,3,4,7,616,9,10,11)
	MR_init_label8(libs__handle_options__postprocess_options_2_13_0,13,15,12,17,19,22,18,23)
	MR_init_label8(libs__handle_options__postprocess_options_2_13_0,27,29,30,31,32,33,28,35)
	MR_init_label8(libs__handle_options__postprocess_options_2_13_0,36,40,41,45,46,47,48,49)
	MR_init_label8(libs__handle_options__postprocess_options_2_13_0,50,51,52,53,54,55,56,60)
	MR_init_label8(libs__handle_options__postprocess_options_2_13_0,57,64,66,63,71,42,72,73)
	MR_init_label8(libs__handle_options__postprocess_options_2_13_0,802,74,77,82,83,84,85,86)
	MR_init_label8(libs__handle_options__postprocess_options_2_13_0,87,88,89,90,91,92,93,94)
	MR_init_label8(libs__handle_options__postprocess_options_2_13_0,95,630,97,98,104,107,108,109)
	MR_init_label8(libs__handle_options__postprocess_options_2_13_0,111,113,114,115,116,117,118,103)
	MR_init_label8(libs__handle_options__postprocess_options_2_13_0,119,120,121,122,123,124,125,126)
	MR_init_label8(libs__handle_options__postprocess_options_2_13_0,127,128,129,132,131,130,133,134)
	MR_init_label8(libs__handle_options__postprocess_options_2_13_0,135,136,137,138,139,632,141,142)
	MR_init_label8(libs__handle_options__postprocess_options_2_13_0,143,145,147,140,149,150,154,151)
	MR_init_label8(libs__handle_options__postprocess_options_2_13_0,158,157,160,161,162,163,167,164)
	MR_init_label8(libs__handle_options__postprocess_options_2_13_0,168,169,170,171,172,173,174,175)
	MR_init_label8(libs__handle_options__postprocess_options_2_13_0,176,177,178,179,180,181,182,183)
	MR_init_label8(libs__handle_options__postprocess_options_2_13_0,184,185,186,187,188,189,190,191)
	MR_init_label8(libs__handle_options__postprocess_options_2_13_0,192,193,194,195,196,197,198,199)
	MR_init_label8(libs__handle_options__postprocess_options_2_13_0,200,201,202,203,204,205,206,207)
	MR_init_label8(libs__handle_options__postprocess_options_2_13_0,208,209,210,211,212,213,217,214)
	MR_init_label8(libs__handle_options__postprocess_options_2_13_0,218,219,220,221,222,225,227,228)
	MR_init_label8(libs__handle_options__postprocess_options_2_13_0,229,224,230,231,232,234,233,235)
	MR_init_label8(libs__handle_options__postprocess_options_2_13_0,236,237,241,240,244,239,245,246)
	MR_init_label8(libs__handle_options__postprocess_options_2_13_0,247,248,250,251,252,253,254,249)
	MR_init_label8(libs__handle_options__postprocess_options_2_13_0,255,256,257,258,259,260,261,262)
	MR_init_label8(libs__handle_options__postprocess_options_2_13_0,263,264,268,275,272,278,279,280)
	MR_init_label8(libs__handle_options__postprocess_options_2_13_0,281,282,285,284,283,286,287,289)
	MR_init_label8(libs__handle_options__postprocess_options_2_13_0,290,291,292,293,294,295,296,301)
	MR_init_label8(libs__handle_options__postprocess_options_2_13_0,297,302,303,304,305,306,308,312)
	MR_init_label8(libs__handle_options__postprocess_options_2_13_0,313,314,315,316,317,318,319,320)
	MR_init_label8(libs__handle_options__postprocess_options_2_13_0,321,322,323,324,325,333,311,310)
	MR_init_label8(libs__handle_options__postprocess_options_2_13_0,334,335,336,337,338,339,340,307)
	MR_init_label8(libs__handle_options__postprocess_options_2_13_0,341,342,343,345,346,349,350,351)
	MR_init_label8(libs__handle_options__postprocess_options_2_13_0,352,354,355,356,344,357,358,362)
	MR_init_label8(libs__handle_options__postprocess_options_2_13_0,359,366,365,369,371,372,364,374)
	MR_init_label8(libs__handle_options__postprocess_options_2_13_0,380,379,378,383,377,375,385,386)
	MR_init_label8(libs__handle_options__postprocess_options_2_13_0,387,388,390,392,393,394,395,396)
	MR_init_label8(libs__handle_options__postprocess_options_2_13_0,397,405,406,407,408,409,410,411)
	MR_init_label8(libs__handle_options__postprocess_options_2_13_0,412,413,414,415,416,421,417,422)
	MR_init_label8(libs__handle_options__postprocess_options_2_13_0,423,424,425,426,427,428,429,430)
	MR_init_label8(libs__handle_options__postprocess_options_2_13_0,431,432,433,434,438,435,439,443)
	MR_init_label8(libs__handle_options__postprocess_options_2_13_0,440,444,445,446,447,448,452,454)
	MR_init_label8(libs__handle_options__postprocess_options_2_13_0,456,458,451,461,450,462,463,464)
	MR_init_label8(libs__handle_options__postprocess_options_2_13_0,465,466,467,468,469,470,471,472)
	MR_init_label8(libs__handle_options__postprocess_options_2_13_0,473,474,475,477,478,479,480,481)
	MR_init_label8(libs__handle_options__postprocess_options_2_13_0,482,483,484,485,486,476,487,489)
	MR_init_label8(libs__handle_options__postprocess_options_2_13_0,490,491,492,488,493,498,500,501)
	MR_init_label8(libs__handle_options__postprocess_options_2_13_0,502,494,503,504,505,507,508,509)
	MR_init_label8(libs__handle_options__postprocess_options_2_13_0,510,511,512,513,514,515,516,517)
	MR_init_label8(libs__handle_options__postprocess_options_2_13_0,518,519,520,521,522,523,524,525)
	MR_init_label8(libs__handle_options__postprocess_options_2_13_0,526,506,527,529,530,531,532,533)
	MR_init_label8(libs__handle_options__postprocess_options_2_13_0,528,534,535,536,539,540,541,542)
	MR_init_label8(libs__handle_options__postprocess_options_2_13_0,543,538,545,546,547,548,549,550)
	MR_init_label8(libs__handle_options__postprocess_options_2_13_0,551,552,553,554,555,556,557,558)
	MR_init_label8(libs__handle_options__postprocess_options_2_13_0,559,560,561,564,567,568,569,570)
	MR_init_label8(libs__handle_options__postprocess_options_2_13_0,571,572,573,574,563,575,576,577)
	MR_init_label8(libs__handle_options__postprocess_options_2_13_0,578,579,582,584,587,588,589,580)
	MR_init_label8(libs__handle_options__postprocess_options_2_13_0,590,593,592,591,594,597,599,595)
	MR_init_label7(libs__handle_options__postprocess_options_2_13_0,600,602,605,601,610,611,614)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(libs__handle_options__postprocess_options_2_13_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(15);
	MR_sv(15) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_r7;
	MR_sv(8) = MR_r10;
	MR_np_call_localret_ent(libs__globals__globals_io_init_11_0,
		libs__handle_options__postprocess_options_2_13_0_i2);
MR_def_label(libs__handle_options__postprocess_options_2_13_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(libs__globals__io_get_globals_3_0,
		libs__handle_options__postprocess_options_2_13_0_i3);
MR_def_label(libs__handle_options__postprocess_options_2_13_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r2 = (MR_Integer) 139;
	MR_np_call_localret_ent(libs__globals__lookup_string_option_3_0,
		libs__handle_options__postprocess_options_2_13_0_i4);
MR_def_label(libs__handle_options__postprocess_options_2_13_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *)MR_r1, (char *)(MR_Word) MR_string_const("", 0)) != 0)) {
		MR_GOTO_LAB(libs__handle_options__postprocess_options_2_13_0_i616);
	}
	MR_r1 = (MR_Word) MR_string_const("MERCURY_EVENT_SET_FILE_NAME", 27);
	MR_np_call_localret_ent(io__get_environment_var_4_0,
		libs__handle_options__postprocess_options_2_13_0_i7);
MR_def_label(libs__handle_options__postprocess_options_2_13_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(libs__handle_options__postprocess_options_2_13_0_i9);
	}
MR_def_label(libs__handle_options__postprocess_options_2_13_0,616)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_GOTO_LAB(libs__handle_options__postprocess_options_2_13_0_i11);
MR_def_label(libs__handle_options__postprocess_options_2_13_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr1, 1) = MR_ctfield(1, MR_r1, 0);
	MR_r1 = (MR_Integer) 139;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(5);
	}
	MR_np_call_localret_ent(libs__globals__set_option_4_0,
		libs__handle_options__postprocess_options_2_13_0_i10);
MR_def_label(libs__handle_options__postprocess_options_2_13_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(2);
MR_def_label(libs__handle_options__postprocess_options_2_13_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_np_call_localret_ent(fn__libs__globals__gc_is_conservative_1_0,
		libs__handle_options__postprocess_options_2_13_0_i13);
MR_def_label(libs__handle_options__postprocess_options_2_13_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(libs__handle_options__postprocess_options_2_13_0_i12);
	}
	MR_r3 = MR_sv(5);
	MR_sv(5) = (MR_Word) MR_TAG_COMMON(1,8,1);
	MR_r1 = (MR_Integer) 235;
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(libs__globals__set_option_4_0,
		libs__handle_options__postprocess_options_2_13_0_i15);
MR_def_label(libs__handle_options__postprocess_options_2_13_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = (MR_Integer) 236;
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(libs__globals__set_option_4_0,
		libs__handle_options__postprocess_options_2_13_0_i17);
MR_def_label(libs__handle_options__postprocess_options_2_13_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
MR_def_label(libs__handle_options__postprocess_options_2_13_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(3),0)) {
		MR_GOTO_LAB(libs__handle_options__postprocess_options_2_13_0_i19);
	}
	MR_r2 = (MR_Integer) 0;
	MR_GOTO_LAB(libs__handle_options__postprocess_options_2_13_0_i18);
MR_def_label(libs__handle_options__postprocess_options_2_13_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r2 = (MR_Integer) 182;
	MR_np_call_localret_ent(libs__globals__lookup_int_option_3_0,
		libs__handle_options__postprocess_options_2_13_0_i22);
MR_def_label(libs__handle_options__postprocess_options_2_13_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(6);
MR_def_label(libs__handle_options__postprocess_options_2_13_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(3),1)) {
		MR_GOTO_LAB(libs__handle_options__postprocess_options_2_13_0_i23);
	}
	if (MR_INT_NE(MR_r2,-1)) {
		MR_GOTO_LAB(libs__handle_options__postprocess_options_2_13_0_i23);
	}
	MR_sv(6) = MR_r1;
	MR_r2 = (MR_Integer) 187;
	MR_np_call_localret_ent(libs__globals__lookup_int_option_3_0,
		libs__handle_options__postprocess_options_2_13_0_i27);
MR_def_label(libs__handle_options__postprocess_options_2_13_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = MR_r2;
MR_def_label(libs__handle_options__postprocess_options_2_13_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_GE(MR_r1,0)) {
		MR_GOTO_LAB(libs__handle_options__postprocess_options_2_13_0_i28);
	}
	MR_r1 = (MR_Word) MR_string_const("mercury_compile", 15);
	MR_np_call_localret_ent(io__progname_base_4_0,
		libs__handle_options__postprocess_options_2_13_0_i29);
MR_def_label(libs__handle_options__postprocess_options_2_13_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_np_call_localret_ent(libs__compiler_util__report_warning_3_0,
		libs__handle_options__postprocess_options_2_13_0_i30);
MR_def_label(libs__handle_options__postprocess_options_2_13_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(": warning: --num-tag-bits invalid or unspecified\n", 49);
	MR_np_call_localret_ent(libs__compiler_util__report_warning_3_0,
		libs__handle_options__postprocess_options_2_13_0_i31);
MR_def_label(libs__handle_options__postprocess_options_2_13_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(io__write_string_3_0,
		libs__handle_options__postprocess_options_2_13_0_i32);
MR_def_label(libs__handle_options__postprocess_options_2_13_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(": using --num-tag-bits 0 (tags disabled)\n", 41);
	MR_np_call_localret_ent(libs__compiler_util__report_warning_3_0,
		libs__handle_options__postprocess_options_2_13_0_i33);
MR_def_label(libs__handle_options__postprocess_options_2_13_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = (MR_Integer) 0;
	MR_r3 = MR_sv(6);
	MR_r2 = (MR_Word) MR_TAG_COMMON(2,8,1);
	MR_r1 = (MR_Integer) 182;
	MR_np_call_localret_ent(libs__globals__set_option_4_0,
		libs__handle_options__postprocess_options_2_13_0_i35);
MR_def_label(libs__handle_options__postprocess_options_2_13_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr1, 0) = MR_r1;
	MR_sv(5) = MR_r1;
	MR_r3 = MR_sv(6);
	MR_r2 = MR_tempr1;
	MR_r1 = (MR_Integer) 182;
	}
	MR_np_call_localret_ent(libs__globals__set_option_4_0,
		libs__handle_options__postprocess_options_2_13_0_i35);
MR_def_label(libs__handle_options__postprocess_options_2_13_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(5),0)) {
		MR_GOTO_LAB(libs__handle_options__postprocess_options_2_13_0_i36);
	}
	MR_sv(3) = (MR_Integer) 0;
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(libs__globals__set_tags_method_3_0,
		libs__handle_options__postprocess_options_2_13_0_i36);
MR_def_label(libs__handle_options__postprocess_options_2_13_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 197;
	MR_sv(7) = MR_r1;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		libs__handle_options__postprocess_options_2_13_0_i40);
MR_def_label(libs__handle_options__postprocess_options_2_13_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = (MR_Integer) 258;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		libs__handle_options__postprocess_options_2_13_0_i41);
MR_def_label(libs__handle_options__postprocess_options_2_13_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(1),1)) {
		MR_GOTO_LAB(libs__handle_options__postprocess_options_2_13_0_i71);
	}
	MR_r2 = MR_sv(7);
	MR_sv(7) = MR_r1;
	MR_r1 = (MR_Integer) 0;
	MR_np_call_localret_ent(libs__globals__set_gc_method_3_0,
		libs__handle_options__postprocess_options_2_13_0_i45);
MR_def_label(libs__handle_options__postprocess_options_2_13_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = (MR_Integer) 168;
	MR_r2 = (MR_Word) MR_TAG_COMMON(3,9,0);
	MR_np_call_localret_ent(libs__globals__set_option_4_0,
		libs__handle_options__postprocess_options_2_13_0_i46);
MR_def_label(libs__handle_options__postprocess_options_2_13_0,46)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = (MR_Word) MR_TAG_COMMON(1,8,1);
	MR_r3 = MR_r1;
	MR_r1 = (MR_Integer) 236;
	MR_r2 = MR_sv(9);
	MR_np_call_localret_ent(libs__globals__set_option_4_0,
		libs__handle_options__postprocess_options_2_13_0_i47);
MR_def_label(libs__handle_options__postprocess_options_2_13_0,47)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = (MR_Integer) 235;
	MR_r2 = MR_sv(9);
	MR_np_call_localret_ent(libs__globals__set_option_4_0,
		libs__handle_options__postprocess_options_2_13_0_i48);
MR_def_label(libs__handle_options__postprocess_options_2_13_0,48)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(10) = (MR_Word) MR_TAG_COMMON(1,8,0);
	MR_r3 = MR_r1;
	MR_r1 = (MR_Integer) 196;
	MR_r2 = MR_sv(10);
	MR_np_call_localret_ent(libs__globals__set_option_4_0,
		libs__handle_options__postprocess_options_2_13_0_i49);
MR_def_label(libs__handle_options__postprocess_options_2_13_0,49)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = (MR_Integer) 197;
	MR_r2 = MR_sv(10);
	MR_np_call_localret_ent(libs__globals__set_option_4_0,
		libs__handle_options__postprocess_options_2_13_0_i50);
MR_def_label(libs__handle_options__postprocess_options_2_13_0,50)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = (MR_Integer) 198;
	MR_r2 = MR_sv(9);
	MR_np_call_localret_ent(libs__globals__set_option_4_0,
		libs__handle_options__postprocess_options_2_13_0_i51);
MR_def_label(libs__handle_options__postprocess_options_2_13_0,51)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = (MR_Integer) 200;
	MR_r2 = MR_sv(10);
	MR_np_call_localret_ent(libs__globals__set_option_4_0,
		libs__handle_options__postprocess_options_2_13_0_i52);
MR_def_label(libs__handle_options__postprocess_options_2_13_0,52)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = (MR_Integer) 182;
	MR_r2 = (MR_Word) MR_TAG_COMMON(2,8,1);
	MR_np_call_localret_ent(libs__globals__set_option_4_0,
		libs__handle_options__postprocess_options_2_13_0_i53);
MR_def_label(libs__handle_options__postprocess_options_2_13_0,53)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = (MR_Integer) 189;
	MR_r2 = MR_sv(9);
	MR_np_call_localret_ent(libs__globals__set_option_4_0,
		libs__handle_options__postprocess_options_2_13_0_i54);
MR_def_label(libs__handle_options__postprocess_options_2_13_0,54)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = (MR_Integer) 190;
	MR_r2 = MR_sv(9);
	MR_np_call_localret_ent(libs__globals__set_option_4_0,
		libs__handle_options__postprocess_options_2_13_0_i55);
MR_def_label(libs__handle_options__postprocess_options_2_13_0,55)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = (MR_Integer) 362;
	MR_r2 = MR_sv(9);
	MR_np_call_localret_ent(libs__globals__set_option_4_0,
		libs__handle_options__postprocess_options_2_13_0_i56);
MR_def_label(libs__handle_options__postprocess_options_2_13_0,56)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(6),1)) {
		MR_GOTO_LAB(libs__handle_options__postprocess_options_2_13_0_i57);
	}
	if (MR_INT_NE(MR_sv(7),1)) {
		MR_GOTO_LAB(libs__handle_options__postprocess_options_2_13_0_i57);
	}
	MR_sv(6) = (MR_Word) MR_TAG_COMMON(1,8,0);
	MR_r3 = MR_r1;
	MR_r1 = (MR_Integer) 256;
	MR_r2 = MR_sv(6);
	MR_np_call_localret_ent(libs__globals__set_option_4_0,
		libs__handle_options__postprocess_options_2_13_0_i60);
MR_def_label(libs__handle_options__postprocess_options_2_13_0,60)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = (MR_Integer) 312;
	MR_r2 = MR_sv(6);
	MR_np_call_localret_ent(libs__globals__set_option_4_0,
		libs__handle_options__postprocess_options_2_13_0_i57);
MR_def_label(libs__handle_options__postprocess_options_2_13_0,57)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(fn__libs__trace_params__given_trace_level_is_none_1_0,
		libs__handle_options__postprocess_options_2_13_0_i64);
MR_def_label(libs__handle_options__postprocess_options_2_13_0,64)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(libs__handle_options__postprocess_options_2_13_0_i63);
	}
	MR_r1 = (MR_Integer) 393;
	MR_r2 = MR_sv(10);
	MR_r3 = MR_sv(6);
	MR_np_call_localret_ent(libs__globals__set_option_4_0,
		libs__handle_options__postprocess_options_2_13_0_i66);
MR_def_label(libs__handle_options__postprocess_options_2_13_0,66)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 205;
	MR_GOTO_LAB(libs__handle_options__postprocess_options_2_13_0_i42);
MR_def_label(libs__handle_options__postprocess_options_2_13_0,63)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(6);
	MR_r2 = (MR_Integer) 205;
	MR_GOTO_LAB(libs__handle_options__postprocess_options_2_13_0_i42);
MR_def_label(libs__handle_options__postprocess_options_2_13_0,71)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_sv(7) = MR_tempr1;
	MR_r2 = (MR_Integer) 205;
	}
MR_def_label(libs__handle_options__postprocess_options_2_13_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_r1;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		libs__handle_options__postprocess_options_2_13_0_i72);
MR_def_label(libs__handle_options__postprocess_options_2_13_0,72)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(9);
	MR_r2 = (MR_Integer) 204;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		libs__handle_options__postprocess_options_2_13_0_i73);
MR_def_label(libs__handle_options__postprocess_options_2_13_0,73)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(6),1)) {
		MR_GOTO_LAB(libs__handle_options__postprocess_options_2_13_0_i74);
	}
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(libs__handle_options__postprocess_options_2_13_0_i74);
	}
	MR_r3 = MR_sv(9);
	if (MR_INT_EQ(MR_sv(1),2)) {
		MR_GOTO_LAB(libs__handle_options__postprocess_options_2_13_0_i82);
	}
MR_def_label(libs__handle_options__postprocess_options_2_13_0,802)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_sv(1),
		MR_LABEL_AP(libs__handle_options__postprocess_options_2_13_0_i104) MR_AND
		MR_LABEL_AP(libs__handle_options__postprocess_options_2_13_0_i107) MR_AND
		MR_LABEL_AP(libs__handle_options__postprocess_options_2_13_0_i107) MR_AND
		MR_LABEL_AP(libs__handle_options__postprocess_options_2_13_0_i108) MR_AND
		MR_LABEL_AP(libs__handle_options__postprocess_options_2_13_0_i111) MR_AND
		MR_LABEL_AP(libs__handle_options__postprocess_options_2_13_0_i113));
MR_def_label(libs__handle_options__postprocess_options_2_13_0,74)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 203;
	MR_r2 = (MR_Integer) 202;
	MR_r3 = (MR_Word) MR_TAG_COMMON(1,8,0);
	MR_r4 = MR_sv(9);
	MR_np_call_localret_ent(libs__handle_options__option_implies_5_0,
		libs__handle_options__postprocess_options_2_13_0_i77);
MR_def_label(libs__handle_options__postprocess_options_2_13_0,77)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	if (MR_INT_NE(MR_sv(1),2)) {
		MR_GOTO_LAB(libs__handle_options__postprocess_options_2_13_0_i802);
	}
MR_def_label(libs__handle_options__postprocess_options_2_13_0,82)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_r2 = MR_r3;
	MR_np_call_localret_ent(libs__globals__set_gc_method_3_0,
		libs__handle_options__postprocess_options_2_13_0_i83);
MR_def_label(libs__handle_options__postprocess_options_2_13_0,83)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = (MR_Integer) 168;
	MR_r2 = (MR_Word) MR_TAG_COMMON(3,9,0);
	MR_np_call_localret_ent(libs__globals__set_option_4_0,
		libs__handle_options__postprocess_options_2_13_0_i84);
MR_def_label(libs__handle_options__postprocess_options_2_13_0,84)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = (MR_Word) MR_TAG_COMMON(1,8,1);
	MR_r3 = MR_r1;
	MR_r1 = (MR_Integer) 236;
	MR_r2 = MR_sv(6);
	MR_np_call_localret_ent(libs__globals__set_option_4_0,
		libs__handle_options__postprocess_options_2_13_0_i85);
MR_def_label(libs__handle_options__postprocess_options_2_13_0,85)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = (MR_Integer) 235;
	MR_r2 = MR_sv(6);
	MR_np_call_localret_ent(libs__globals__set_option_4_0,
		libs__handle_options__postprocess_options_2_13_0_i86);
MR_def_label(libs__handle_options__postprocess_options_2_13_0,86)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = (MR_Word) MR_TAG_COMMON(1,8,0);
	MR_r3 = MR_r1;
	MR_r1 = (MR_Integer) 196;
	MR_r2 = MR_sv(9);
	MR_np_call_localret_ent(libs__globals__set_option_4_0,
		libs__handle_options__postprocess_options_2_13_0_i87);
MR_def_label(libs__handle_options__postprocess_options_2_13_0,87)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = (MR_Integer) 197;
	MR_r2 = MR_sv(9);
	MR_np_call_localret_ent(libs__globals__set_option_4_0,
		libs__handle_options__postprocess_options_2_13_0_i88);
MR_def_label(libs__handle_options__postprocess_options_2_13_0,88)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = (MR_Integer) 198;
	MR_r2 = MR_sv(6);
	MR_np_call_localret_ent(libs__globals__set_option_4_0,
		libs__handle_options__postprocess_options_2_13_0_i89);
MR_def_label(libs__handle_options__postprocess_options_2_13_0,89)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = (MR_Integer) 200;
	MR_r2 = MR_sv(9);
	MR_np_call_localret_ent(libs__globals__set_option_4_0,
		libs__handle_options__postprocess_options_2_13_0_i90);
MR_def_label(libs__handle_options__postprocess_options_2_13_0,90)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = (MR_Integer) 199;
	MR_r2 = MR_sv(9);
	MR_np_call_localret_ent(libs__globals__set_option_4_0,
		libs__handle_options__postprocess_options_2_13_0_i91);
MR_def_label(libs__handle_options__postprocess_options_2_13_0,91)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = (MR_Integer) 182;
	MR_r2 = (MR_Word) MR_TAG_COMMON(2,8,1);
	MR_np_call_localret_ent(libs__globals__set_option_4_0,
		libs__handle_options__postprocess_options_2_13_0_i92);
MR_def_label(libs__handle_options__postprocess_options_2_13_0,92)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = (MR_Integer) 190;
	MR_r2 = MR_sv(6);
	MR_np_call_localret_ent(libs__globals__set_option_4_0,
		libs__handle_options__postprocess_options_2_13_0_i93);
MR_def_label(libs__handle_options__postprocess_options_2_13_0,93)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = (MR_Integer) 362;
	MR_r2 = MR_sv(6);
	MR_np_call_localret_ent(libs__globals__set_option_4_0,
		libs__handle_options__postprocess_options_2_13_0_i94);
MR_def_label(libs__handle_options__postprocess_options_2_13_0,94)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = (MR_Integer) 202;
	MR_r2 = MR_sv(9);
	MR_np_call_localret_ent(libs__globals__set_option_4_0,
		libs__handle_options__postprocess_options_2_13_0_i95);
MR_def_label(libs__handle_options__postprocess_options_2_13_0,95)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(7),0)) {
		MR_GOTO_LAB(libs__handle_options__postprocess_options_2_13_0_i97);
	}
MR_def_label(libs__handle_options__postprocess_options_2_13_0,630)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_COMPUTED_GOTO((MR_Unsigned) MR_sv(1),
		MR_LABEL_AP(libs__handle_options__postprocess_options_2_13_0_i104) MR_AND
		MR_LABEL_AP(libs__handle_options__postprocess_options_2_13_0_i107) MR_AND
		MR_LABEL_AP(libs__handle_options__postprocess_options_2_13_0_i107) MR_AND
		MR_LABEL_AP(libs__handle_options__postprocess_options_2_13_0_i108) MR_AND
		MR_LABEL_AP(libs__handle_options__postprocess_options_2_13_0_i111) MR_AND
		MR_LABEL_AP(libs__handle_options__postprocess_options_2_13_0_i113));
MR_def_label(libs__handle_options__postprocess_options_2_13_0,97)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = (MR_Integer) 256;
	MR_r2 = MR_sv(9);
	MR_np_call_localret_ent(libs__globals__set_option_4_0,
		libs__handle_options__postprocess_options_2_13_0_i98);
MR_def_label(libs__handle_options__postprocess_options_2_13_0,98)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = (MR_Integer) 312;
	MR_r2 = MR_sv(9);
	MR_np_call_localret_ent(libs__globals__set_option_4_0,
		libs__handle_options__postprocess_options_2_13_0_i630);
MR_def_label(libs__handle_options__postprocess_options_2_13_0,104)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 196;
	MR_r2 = (MR_Integer) 201;
	MR_r4 = MR_r3;
	MR_r3 = (MR_Word) MR_TAG_COMMON(1,8,0);
	MR_np_call_localret_ent(libs__handle_options__option_implies_5_0,
		libs__handle_options__postprocess_options_2_13_0_i118);
MR_def_label(libs__handle_options__postprocess_options_2_13_0,107)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r3;
	MR_r3 = (MR_Word) MR_TAG_COMMON(1,8,0);
	MR_r1 = (MR_Integer) 82;
	MR_r2 = (MR_Integer) 242;
	MR_GOTO_LAB(libs__handle_options__postprocess_options_2_13_0_i103);
MR_def_label(libs__handle_options__postprocess_options_2_13_0,108)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = (MR_Word) MR_TAG_COMMON(1,8,0);
	MR_r1 = (MR_Integer) 196;
	MR_r2 = MR_sv(6);
	MR_np_call_localret_ent(libs__globals__set_option_4_0,
		libs__handle_options__postprocess_options_2_13_0_i109);
MR_def_label(libs__handle_options__postprocess_options_2_13_0,109)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r1;
	MR_r1 = (MR_Integer) 196;
	MR_r2 = (MR_Integer) 201;
	MR_r3 = MR_sv(6);
	MR_np_call_localret_ent(libs__handle_options__option_implies_5_0,
		libs__handle_options__postprocess_options_2_13_0_i118);
MR_def_label(libs__handle_options__postprocess_options_2_13_0,111)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 378;
	MR_r2 = (MR_Word) MR_TAG_COMMON(1,8,1);
	MR_np_call_localret_ent(libs__globals__set_option_4_0,
		libs__handle_options__postprocess_options_2_13_0_i118);
MR_def_label(libs__handle_options__postprocess_options_2_13_0,113)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_r2 = MR_r3;
	MR_np_call_localret_ent(libs__globals__set_gc_method_3_0,
		libs__handle_options__postprocess_options_2_13_0_i114);
MR_def_label(libs__handle_options__postprocess_options_2_13_0,114)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = (MR_Integer) 168;
	MR_r2 = (MR_Word) MR_TAG_COMMON(3,9,0);
	MR_np_call_localret_ent(libs__globals__set_option_4_0,
		libs__handle_options__postprocess_options_2_13_0_i115);
MR_def_label(libs__handle_options__postprocess_options_2_13_0,115)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = (MR_Word) MR_TAG_COMMON(1,8,1);
	MR_r3 = MR_r1;
	MR_r1 = (MR_Integer) 236;
	MR_r2 = MR_sv(6);
	MR_np_call_localret_ent(libs__globals__set_option_4_0,
		libs__handle_options__postprocess_options_2_13_0_i116);
MR_def_label(libs__handle_options__postprocess_options_2_13_0,116)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = (MR_Integer) 235;
	MR_r2 = MR_sv(6);
	MR_np_call_localret_ent(libs__globals__set_option_4_0,
		libs__handle_options__postprocess_options_2_13_0_i117);
MR_def_label(libs__handle_options__postprocess_options_2_13_0,117)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = (MR_Integer) 216;
	MR_r2 = (MR_Word) MR_TAG_COMMON(1,8,0);
	MR_np_call_localret_ent(libs__globals__set_option_4_0,
		libs__handle_options__postprocess_options_2_13_0_i118);
MR_def_label(libs__handle_options__postprocess_options_2_13_0,118)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r1;
	MR_r3 = (MR_Word) MR_TAG_COMMON(1,8,0);
	MR_r1 = (MR_Integer) 82;
	MR_r2 = (MR_Integer) 242;
MR_def_label(libs__handle_options__postprocess_options_2_13_0,103)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(11) = MR_r3;
	MR_np_call_localret_ent(libs__handle_options__option_implies_5_0,
		libs__handle_options__postprocess_options_2_13_0_i119);
MR_def_label(libs__handle_options__postprocess_options_2_13_0,119)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = (MR_Word) MR_TAG_COMMON(3,9,1);
	MR_r4 = MR_r1;
	MR_r1 = (MR_Integer) 82;
	MR_r2 = (MR_Integer) 456;
	MR_r3 = MR_sv(6);
	MR_np_call_localret_ent(libs__handle_options__option_implies_5_0,
		libs__handle_options__postprocess_options_2_13_0_i120);
MR_def_label(libs__handle_options__postprocess_options_2_13_0,120)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r1;
	MR_r1 = (MR_Integer) 82;
	MR_r2 = (MR_Integer) 458;
	MR_r3 = MR_sv(6);
	MR_np_call_localret_ent(libs__handle_options__option_implies_5_0,
		libs__handle_options__postprocess_options_2_13_0_i121);
MR_def_label(libs__handle_options__postprocess_options_2_13_0,121)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r1;
	MR_r1 = (MR_Integer) 242;
	MR_r2 = (MR_Integer) 195;
	MR_r3 = MR_sv(11);
	MR_np_call_localret_ent(libs__handle_options__option_implies_5_0,
		libs__handle_options__postprocess_options_2_13_0_i122);
MR_def_label(libs__handle_options__postprocess_options_2_13_0,122)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(12) = (MR_Word) MR_TAG_COMMON(1,8,1);
	MR_r4 = MR_r1;
	MR_r1 = (MR_Integer) 196;
	MR_r2 = (MR_Integer) 192;
	MR_r3 = MR_sv(12);
	MR_np_call_localret_ent(libs__handle_options__option_implies_5_0,
		libs__handle_options__postprocess_options_2_13_0_i123);
MR_def_label(libs__handle_options__postprocess_options_2_13_0,123)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r1;
	MR_r1 = (MR_Integer) 196;
	MR_r2 = (MR_Integer) 193;
	MR_r3 = MR_sv(12);
	MR_np_call_localret_ent(libs__handle_options__option_implies_5_0,
		libs__handle_options__postprocess_options_2_13_0_i124);
MR_def_label(libs__handle_options__postprocess_options_2_13_0,124)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r1;
	MR_r1 = (MR_Integer) 196;
	MR_r2 = (MR_Integer) 194;
	MR_r3 = MR_sv(12);
	MR_np_call_localret_ent(libs__handle_options__option_implies_5_0,
		libs__handle_options__postprocess_options_2_13_0_i125);
MR_def_label(libs__handle_options__postprocess_options_2_13_0,125)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r1;
	MR_r1 = (MR_Integer) 198;
	MR_r2 = (MR_Integer) 250;
	MR_r3 = MR_sv(12);
	MR_np_call_localret_ent(libs__handle_options__option_neg_implies_5_0,
		libs__handle_options__postprocess_options_2_13_0_i126);
MR_def_label(libs__handle_options__postprocess_options_2_13_0,126)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r1;
	MR_r1 = (MR_Integer) 372;
	MR_r2 = (MR_Integer) 367;
	MR_r3 = MR_sv(12);
	MR_np_call_localret_ent(libs__handle_options__option_neg_implies_5_0,
		libs__handle_options__postprocess_options_2_13_0_i127);
MR_def_label(libs__handle_options__postprocess_options_2_13_0,127)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r1;
	MR_r1 = (MR_Integer) 510;
	MR_r2 = (MR_Integer) 508;
	MR_r3 = MR_sv(11);
	MR_np_call_localret_ent(libs__handle_options__option_implies_5_0,
		libs__handle_options__postprocess_options_2_13_0_i128);
MR_def_label(libs__handle_options__postprocess_options_2_13_0,128)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r2 = (MR_Integer) 522;
	MR_np_call_localret_ent(libs__globals__lookup_accumulating_option_3_0,
		libs__handle_options__postprocess_options_2_13_0_i129);
MR_def_label(libs__handle_options__postprocess_options_2_13_0,129)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(libs__handle_options__postprocess_options_2_13_0_i131);
	}
	MR_r1 = (MR_Integer) 522;
	MR_r2 = (MR_Word) MR_TAG_COMMON(3,11,0);
	MR_r3 = MR_sv(6);
	MR_np_call_localret_ent(libs__globals__set_option_4_0,
		libs__handle_options__postprocess_options_2_13_0_i132);
MR_def_label(libs__handle_options__postprocess_options_2_13_0,132)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(11);
	MR_r4 = MR_r1;
	MR_r1 = (MR_Integer) 508;
	MR_r2 = (MR_Integer) 81;
	MR_GOTO_LAB(libs__handle_options__postprocess_options_2_13_0_i130);
MR_def_label(libs__handle_options__postprocess_options_2_13_0,131)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(11);
	MR_r4 = MR_sv(6);
	MR_r1 = (MR_Integer) 508;
	MR_r2 = (MR_Integer) 81;
MR_def_label(libs__handle_options__postprocess_options_2_13_0,130)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(11) = MR_r3;
	MR_np_call_localret_ent(libs__handle_options__option_implies_5_0,
		libs__handle_options__postprocess_options_2_13_0_i133);
MR_def_label(libs__handle_options__postprocess_options_2_13_0,133)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r1;
	MR_r1 = (MR_Integer) 508;
	MR_r2 = (MR_Integer) 80;
	MR_r3 = MR_sv(11);
	MR_np_call_localret_ent(libs__handle_options__option_implies_5_0,
		libs__handle_options__postprocess_options_2_13_0_i134);
MR_def_label(libs__handle_options__postprocess_options_2_13_0,134)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r1;
	MR_r1 = (MR_Integer) 508;
	MR_r2 = (MR_Integer) 527;
	MR_r3 = MR_sv(11);
	MR_np_call_localret_ent(libs__handle_options__option_implies_5_0,
		libs__handle_options__postprocess_options_2_13_0_i135);
MR_def_label(libs__handle_options__postprocess_options_2_13_0,135)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r1;
	MR_r1 = (MR_Integer) 512;
	MR_r2 = (MR_Integer) 527;
	MR_r3 = MR_sv(11);
	MR_np_call_localret_ent(libs__handle_options__option_implies_5_0,
		libs__handle_options__postprocess_options_2_13_0_i136);
MR_def_label(libs__handle_options__postprocess_options_2_13_0,136)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r1;
	MR_r1 = (MR_Integer) 512;
	MR_r2 = (MR_Integer) 508;
	MR_r3 = MR_sv(12);
	MR_np_call_localret_ent(libs__handle_options__option_implies_5_0,
		libs__handle_options__postprocess_options_2_13_0_i137);
MR_def_label(libs__handle_options__postprocess_options_2_13_0,137)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r1;
	MR_r1 = (MR_Integer) 512;
	MR_r2 = (MR_Integer) 90;
	MR_r3 = MR_sv(12);
	MR_np_call_localret_ent(libs__handle_options__option_implies_5_0,
		libs__handle_options__postprocess_options_2_13_0_i138);
MR_def_label(libs__handle_options__postprocess_options_2_13_0,138)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_r1;
	MR_r2 = (MR_Integer) 261;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		libs__handle_options__postprocess_options_2_13_0_i139);
MR_def_label(libs__handle_options__postprocess_options_2_13_0,139)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(libs__handle_options__postprocess_options_2_13_0_i141);
	}
MR_def_label(libs__handle_options__postprocess_options_2_13_0,632)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_sv(8);
	MR_r1 = MR_sv(9);
	MR_r2 = (MR_Integer) 256;
	MR_GOTO_LAB(libs__handle_options__postprocess_options_2_13_0_i140);
MR_def_label(libs__handle_options__postprocess_options_2_13_0,141)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(9);
	MR_r2 = (MR_Integer) 508;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		libs__handle_options__postprocess_options_2_13_0_i142);
MR_def_label(libs__handle_options__postprocess_options_2_13_0,142)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(9);
	MR_r2 = (MR_Integer) 512;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		libs__handle_options__postprocess_options_2_13_0_i143);
MR_def_label(libs__handle_options__postprocess_options_2_13_0,143)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_np_call_localret_ent(fn__bool__or_2_0,
		libs__handle_options__postprocess_options_2_13_0_i145);
MR_def_label(libs__handle_options__postprocess_options_2_13_0,145)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(libs__handle_options__postprocess_options_2_13_0_i632);
	}
	MR_r1 = (MR_Word) MR_string_const("\140--transitive-intermodule-optimization\' is incompatible with \140mmc --make\'.", 74);
	MR_r2 = MR_sv(8);
	MR_np_call_localret_ent(libs__handle_options__add_error_3_0,
		libs__handle_options__postprocess_options_2_13_0_i147);
MR_def_label(libs__handle_options__postprocess_options_2_13_0,147)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_r1 = MR_sv(9);
	MR_r2 = (MR_Integer) 256;
MR_def_label(libs__handle_options__postprocess_options_2_13_0,140)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_r1;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		libs__handle_options__postprocess_options_2_13_0_i149);
MR_def_label(libs__handle_options__postprocess_options_2_13_0,149)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(9);
	MR_r2 = (MR_Integer) 262;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		libs__handle_options__postprocess_options_2_13_0_i150);
MR_def_label(libs__handle_options__postprocess_options_2_13_0,150)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(6),1)) {
		MR_GOTO_LAB(libs__handle_options__postprocess_options_2_13_0_i151);
	}
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(libs__handle_options__postprocess_options_2_13_0_i151);
	}
	MR_r1 = (MR_Word) MR_string_const("\140--intermodule-optimization\' is incompatible with \140--intermodule-analysis\'.", 75);
	MR_r2 = MR_sv(7);
	MR_np_call_localret_ent(libs__handle_options__add_error_3_0,
		libs__handle_options__postprocess_options_2_13_0_i154);
MR_def_label(libs__handle_options__postprocess_options_2_13_0,154)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_np_call_localret_ent(io__have_symlinks_0_0,
		libs__handle_options__postprocess_options_2_13_0_i158);
MR_def_label(libs__handle_options__postprocess_options_2_13_0,151)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_sv(7);
	MR_np_call_localret_ent(io__have_symlinks_0_0,
		libs__handle_options__postprocess_options_2_13_0_i158);
MR_def_label(libs__handle_options__postprocess_options_2_13_0,158)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(libs__handle_options__postprocess_options_2_13_0_i157);
	}
	MR_r1 = MR_sv(9);
	MR_r2 = (MR_Integer) 76;
	MR_GOTO_LAB(libs__handle_options__postprocess_options_2_13_0_i161);
MR_def_label(libs__handle_options__postprocess_options_2_13_0,157)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 516;
	MR_r2 = MR_sv(12);
	MR_r3 = MR_sv(9);
	MR_np_call_localret_ent(libs__globals__set_option_4_0,
		libs__handle_options__postprocess_options_2_13_0_i160);
MR_def_label(libs__handle_options__postprocess_options_2_13_0,160)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 76;
MR_def_label(libs__handle_options__postprocess_options_2_13_0,161)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_np_call_localret_ent(libs__globals__lookup_maybe_string_option_3_0,
		libs__handle_options__postprocess_options_2_13_0_i162);
MR_def_label(libs__handle_options__postprocess_options_2_13_0,162)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = (MR_Integer) 466;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		libs__handle_options__postprocess_options_2_13_0_i163);
MR_def_label(libs__handle_options__postprocess_options_2_13_0,163)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_sv(6),0,0)) {
		MR_GOTO_LAB(libs__handle_options__postprocess_options_2_13_0_i164);
	}
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(libs__handle_options__postprocess_options_2_13_0_i164);
	}
	MR_r1 = (MR_Word) MR_string_const("\140--generate-standalone-interface\' is incompatible with \140--extra-initialization-functions\'.", 90);
	MR_r2 = MR_sv(8);
	MR_np_call_localret_ent(libs__handle_options__add_error_3_0,
		libs__handle_options__postprocess_options_2_13_0_i167);
MR_def_label(libs__handle_options__postprocess_options_2_13_0,167)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(11);
	MR_r4 = MR_sv(7);
	MR_sv(13) = MR_r1;
	MR_r1 = (MR_Integer) 333;
	MR_r2 = (MR_Integer) 331;
	MR_GOTO_LAB(libs__handle_options__postprocess_options_2_13_0_i168);
MR_def_label(libs__handle_options__postprocess_options_2_13_0,164)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(11);
	MR_r4 = MR_sv(7);
	MR_sv(13) = MR_sv(8);
	MR_r1 = (MR_Integer) 333;
	MR_r2 = (MR_Integer) 331;
MR_def_label(libs__handle_options__postprocess_options_2_13_0,168)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(11) = MR_r3;
	MR_np_call_localret_ent(libs__handle_options__option_implies_5_0,
		libs__handle_options__postprocess_options_2_13_0_i169);
MR_def_label(libs__handle_options__postprocess_options_2_13_0,169)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r1;
	MR_r1 = (MR_Integer) 338;
	MR_r2 = (MR_Integer) 337;
	MR_r3 = MR_sv(11);
	MR_np_call_localret_ent(libs__handle_options__option_implies_5_0,
		libs__handle_options__postprocess_options_2_13_0_i170);
MR_def_label(libs__handle_options__postprocess_options_2_13_0,170)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r1;
	MR_r1 = (MR_Integer) 337;
	MR_r2 = (MR_Integer) 336;
	MR_r3 = MR_sv(11);
	MR_np_call_localret_ent(libs__handle_options__option_implies_5_0,
		libs__handle_options__postprocess_options_2_13_0_i171);
MR_def_label(libs__handle_options__postprocess_options_2_13_0,171)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r1;
	MR_r1 = (MR_Integer) 337;
	MR_r2 = (MR_Integer) 12;
	MR_r3 = MR_sv(11);
	MR_np_call_localret_ent(libs__handle_options__option_implies_5_0,
		libs__handle_options__postprocess_options_2_13_0_i172);
MR_def_label(libs__handle_options__postprocess_options_2_13_0,172)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r1;
	MR_r1 = (MR_Integer) 345;
	MR_r2 = (MR_Integer) 344;
	MR_r3 = MR_sv(11);
	MR_np_call_localret_ent(libs__handle_options__option_implies_5_0,
		libs__handle_options__postprocess_options_2_13_0_i173);
MR_def_label(libs__handle_options__postprocess_options_2_13_0,173)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r1;
	MR_r1 = (MR_Integer) 344;
	MR_r2 = (MR_Integer) 343;
	MR_r3 = MR_sv(11);
	MR_np_call_localret_ent(libs__handle_options__option_implies_5_0,
		libs__handle_options__postprocess_options_2_13_0_i174);
MR_def_label(libs__handle_options__postprocess_options_2_13_0,174)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r1;
	MR_r1 = (MR_Integer) 344;
	MR_r2 = (MR_Integer) 12;
	MR_r3 = MR_sv(11);
	MR_np_call_localret_ent(libs__handle_options__option_implies_5_0,
		libs__handle_options__postprocess_options_2_13_0_i175);
MR_def_label(libs__handle_options__postprocess_options_2_13_0,175)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r1;
	MR_r1 = (MR_Integer) 69;
	MR_r2 = (MR_Integer) 261;
	MR_r3 = MR_sv(11);
	MR_np_call_localret_ent(libs__handle_options__option_implies_5_0,
		libs__handle_options__postprocess_options_2_13_0_i176);
MR_def_label(libs__handle_options__postprocess_options_2_13_0,176)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r1;
	MR_r1 = (MR_Integer) 261;
	MR_r2 = (MR_Integer) 256;
	MR_r3 = MR_sv(11);
	MR_np_call_localret_ent(libs__handle_options__option_implies_5_0,
		libs__handle_options__postprocess_options_2_13_0_i177);
MR_def_label(libs__handle_options__postprocess_options_2_13_0,177)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r1;
	MR_r1 = (MR_Integer) 260;
	MR_r2 = (MR_Integer) 259;
	MR_r3 = MR_sv(11);
	MR_np_call_localret_ent(libs__handle_options__option_implies_5_0,
		libs__handle_options__postprocess_options_2_13_0_i178);
MR_def_label(libs__handle_options__postprocess_options_2_13_0,178)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r1;
	MR_r1 = (MR_Integer) 256;
	MR_r2 = (MR_Integer) 259;
	MR_r3 = MR_sv(12);
	MR_np_call_localret_ent(libs__handle_options__option_implies_5_0,
		libs__handle_options__postprocess_options_2_13_0_i179);
MR_def_label(libs__handle_options__postprocess_options_2_13_0,179)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r1;
	MR_r1 = (MR_Integer) 261;
	MR_r2 = (MR_Integer) 260;
	MR_r3 = MR_sv(12);
	MR_np_call_localret_ent(libs__handle_options__option_implies_5_0,
		libs__handle_options__postprocess_options_2_13_0_i180);
MR_def_label(libs__handle_options__postprocess_options_2_13_0,180)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = (MR_Integer) 259;
	MR_r2 = MR_sv(12);
	MR_np_call_localret_ent(libs__globals__set_option_4_0,
		libs__handle_options__postprocess_options_2_13_0_i181);
MR_def_label(libs__handle_options__postprocess_options_2_13_0,181)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r1;
	MR_r1 = (MR_Integer) 88;
	MR_r2 = (MR_Integer) 89;
	MR_r3 = MR_sv(11);
	MR_np_call_localret_ent(libs__handle_options__option_implies_5_0,
		libs__handle_options__postprocess_options_2_13_0_i182);
MR_def_label(libs__handle_options__postprocess_options_2_13_0,182)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r1;
	MR_r1 = (MR_Integer) 38;
	MR_r2 = (MR_Integer) 37;
	MR_r3 = MR_sv(11);
	MR_np_call_localret_ent(libs__handle_options__option_implies_5_0,
		libs__handle_options__postprocess_options_2_13_0_i183);
MR_def_label(libs__handle_options__postprocess_options_2_13_0,183)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r1;
	MR_r1 = (MR_Integer) 72;
	MR_r2 = (MR_Integer) 88;
	MR_r3 = MR_sv(12);
	MR_np_call_localret_ent(libs__handle_options__option_implies_5_0,
		libs__handle_options__postprocess_options_2_13_0_i184);
MR_def_label(libs__handle_options__postprocess_options_2_13_0,184)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r1;
	MR_r1 = (MR_Integer) 74;
	MR_r2 = (MR_Integer) 88;
	MR_r3 = MR_sv(12);
	MR_np_call_localret_ent(libs__handle_options__option_implies_5_0,
		libs__handle_options__postprocess_options_2_13_0_i185);
MR_def_label(libs__handle_options__postprocess_options_2_13_0,185)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r1;
	MR_r1 = (MR_Integer) 73;
	MR_r2 = (MR_Integer) 88;
	MR_r3 = MR_sv(12);
	MR_np_call_localret_ent(libs__handle_options__option_implies_5_0,
		libs__handle_options__postprocess_options_2_13_0_i186);
MR_def_label(libs__handle_options__postprocess_options_2_13_0,186)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r1;
	MR_r1 = (MR_Integer) 77;
	MR_r2 = (MR_Integer) 88;
	MR_r3 = MR_sv(12);
	MR_np_call_localret_ent(libs__handle_options__option_implies_5_0,
		libs__handle_options__postprocess_options_2_13_0_i187);
MR_def_label(libs__handle_options__postprocess_options_2_13_0,187)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r1;
	MR_r1 = (MR_Integer) 67;
	MR_r2 = (MR_Integer) 88;
	MR_r3 = MR_sv(12);
	MR_np_call_localret_ent(libs__handle_options__option_implies_5_0,
		libs__handle_options__postprocess_options_2_13_0_i188);
MR_def_label(libs__handle_options__postprocess_options_2_13_0,188)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r1;
	MR_r1 = (MR_Integer) 66;
	MR_r2 = (MR_Integer) 88;
	MR_r3 = MR_sv(12);
	MR_np_call_localret_ent(libs__handle_options__option_implies_5_0,
		libs__handle_options__postprocess_options_2_13_0_i189);
MR_def_label(libs__handle_options__postprocess_options_2_13_0,189)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r1;
	MR_r1 = (MR_Integer) 65;
	MR_r2 = (MR_Integer) 88;
	MR_r3 = MR_sv(12);
	MR_np_call_localret_ent(libs__handle_options__option_implies_5_0,
		libs__handle_options__postprocess_options_2_13_0_i190);
MR_def_label(libs__handle_options__postprocess_options_2_13_0,190)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r1;
	MR_r1 = (MR_Integer) 71;
	MR_r2 = (MR_Integer) 88;
	MR_r3 = MR_sv(12);
	MR_np_call_localret_ent(libs__handle_options__option_implies_5_0,
		libs__handle_options__postprocess_options_2_13_0_i191);
MR_def_label(libs__handle_options__postprocess_options_2_13_0,191)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r1;
	MR_r1 = (MR_Integer) 83;
	MR_r2 = (MR_Integer) 88;
	MR_r3 = MR_sv(12);
	MR_np_call_localret_ent(libs__handle_options__option_implies_5_0,
		libs__handle_options__postprocess_options_2_13_0_i192);
MR_def_label(libs__handle_options__postprocess_options_2_13_0,192)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r1;
	MR_r1 = (MR_Integer) 68;
	MR_r2 = (MR_Integer) 88;
	MR_r3 = MR_sv(12);
	MR_np_call_localret_ent(libs__handle_options__option_implies_5_0,
		libs__handle_options__postprocess_options_2_13_0_i193);
MR_def_label(libs__handle_options__postprocess_options_2_13_0,193)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r1;
	MR_r1 = (MR_Integer) 69;
	MR_r2 = (MR_Integer) 88;
	MR_r3 = MR_sv(12);
	MR_np_call_localret_ent(libs__handle_options__option_implies_5_0,
		libs__handle_options__postprocess_options_2_13_0_i194);
MR_def_label(libs__handle_options__postprocess_options_2_13_0,194)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r1;
	MR_r1 = (MR_Integer) 70;
	MR_r2 = (MR_Integer) 88;
	MR_r3 = MR_sv(12);
	MR_np_call_localret_ent(libs__handle_options__option_implies_5_0,
		libs__handle_options__postprocess_options_2_13_0_i195);
MR_def_label(libs__handle_options__postprocess_options_2_13_0,195)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r1;
	MR_r1 = (MR_Integer) 79;
	MR_r2 = (MR_Integer) 88;
	MR_r3 = MR_sv(12);
	MR_np_call_localret_ent(libs__handle_options__option_implies_5_0,
		libs__handle_options__postprocess_options_2_13_0_i196);
MR_def_label(libs__handle_options__postprocess_options_2_13_0,196)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r1;
	MR_r1 = (MR_Integer) 78;
	MR_r2 = (MR_Integer) 88;
	MR_r3 = MR_sv(12);
	MR_np_call_localret_ent(libs__handle_options__option_implies_5_0,
		libs__handle_options__postprocess_options_2_13_0_i197);
MR_def_label(libs__handle_options__postprocess_options_2_13_0,197)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r1;
	MR_r1 = (MR_Integer) 67;
	MR_r2 = (MR_Integer) 107;
	MR_r3 = MR_sv(12);
	MR_np_call_localret_ent(libs__handle_options__option_implies_5_0,
		libs__handle_options__postprocess_options_2_13_0_i198);
MR_def_label(libs__handle_options__postprocess_options_2_13_0,198)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r1;
	MR_r1 = (MR_Integer) 66;
	MR_r2 = (MR_Integer) 107;
	MR_r3 = MR_sv(12);
	MR_np_call_localret_ent(libs__handle_options__option_implies_5_0,
		libs__handle_options__postprocess_options_2_13_0_i199);
MR_def_label(libs__handle_options__postprocess_options_2_13_0,199)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r1;
	MR_r1 = (MR_Integer) 65;
	MR_r2 = (MR_Integer) 107;
	MR_r3 = MR_sv(12);
	MR_np_call_localret_ent(libs__handle_options__option_implies_5_0,
		libs__handle_options__postprocess_options_2_13_0_i200);
MR_def_label(libs__handle_options__postprocess_options_2_13_0,200)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r1;
	MR_r1 = (MR_Integer) 68;
	MR_r2 = (MR_Integer) 107;
	MR_r3 = MR_sv(12);
	MR_np_call_localret_ent(libs__handle_options__option_implies_5_0,
		libs__handle_options__postprocess_options_2_13_0_i201);
MR_def_label(libs__handle_options__postprocess_options_2_13_0,201)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r1;
	MR_r1 = (MR_Integer) 69;
	MR_r2 = (MR_Integer) 107;
	MR_r3 = MR_sv(12);
	MR_np_call_localret_ent(libs__handle_options__option_implies_5_0,
		libs__handle_options__postprocess_options_2_13_0_i202);
MR_def_label(libs__handle_options__postprocess_options_2_13_0,202)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r1;
	MR_r1 = (MR_Integer) 65;
	MR_r2 = (MR_Integer) 89;
	MR_r3 = MR_sv(12);
	MR_np_call_localret_ent(libs__handle_options__option_implies_5_0,
		libs__handle_options__postprocess_options_2_13_0_i203);
MR_def_label(libs__handle_options__postprocess_options_2_13_0,203)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r1;
	MR_r1 = (MR_Integer) 71;
	MR_r2 = (MR_Integer) 256;
	MR_r3 = MR_sv(12);
	MR_np_call_localret_ent(libs__handle_options__option_implies_5_0,
		libs__handle_options__postprocess_options_2_13_0_i204);
MR_def_label(libs__handle_options__postprocess_options_2_13_0,204)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r2 = (MR_Integer) 88;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		libs__handle_options__postprocess_options_2_13_0_i205);
MR_def_label(libs__handle_options__postprocess_options_2_13_0,205)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r5 = MR_sv(6);
	MR_sv(6) = MR_r1;
	MR_r2 = (MR_Integer) 256;
	MR_r3 = (MR_Integer) 1;
	MR_r4 = (MR_Word) MR_string_const("\140--intermodule-optimization\'", 28);
	MR_np_call_localret_ent(libs__handle_options__maybe_disable_smart_recompilation_8_0,
		libs__handle_options__postprocess_options_2_13_0_i206);
MR_def_label(libs__handle_options__postprocess_options_2_13_0,206)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r5 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = (MR_Integer) 259;
	MR_r3 = (MR_Integer) 1;
	MR_r4 = (MR_Word) MR_string_const("\140--use-opt-files\'", 17);
	MR_np_call_localret_ent(libs__handle_options__maybe_disable_smart_recompilation_8_0,
		libs__handle_options__postprocess_options_2_13_0_i207);
MR_def_label(libs__handle_options__postprocess_options_2_13_0,207)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r5 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = (MR_Integer) 80;
	MR_r3 = (MR_Integer) 0;
	MR_r4 = (MR_Word) MR_string_const("\140--no-target-code-only\'", 23);
	MR_np_call_localret_ent(libs__handle_options__maybe_disable_smart_recompilation_8_0,
		libs__handle_options__postprocess_options_2_13_0_i208);
MR_def_label(libs__handle_options__postprocess_options_2_13_0,208)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r1;
	MR_r1 = (MR_Integer) 528;
	MR_r2 = (MR_Integer) 527;
	MR_r3 = MR_sv(11);
	MR_np_call_localret_ent(libs__handle_options__option_implies_5_0,
		libs__handle_options__postprocess_options_2_13_0_i209);
MR_def_label(libs__handle_options__postprocess_options_2_13_0,209)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r1;
	MR_r1 = (MR_Integer) 35;
	MR_r2 = (MR_Integer) 34;
	MR_r3 = MR_sv(11);
	MR_np_call_localret_ent(libs__handle_options__option_implies_5_0,
		libs__handle_options__postprocess_options_2_13_0_i210);
MR_def_label(libs__handle_options__postprocess_options_2_13_0,210)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r1;
	MR_r1 = (MR_Integer) 34;
	MR_r2 = (MR_Integer) 40;
	MR_r3 = MR_sv(11);
	MR_np_call_localret_ent(libs__handle_options__option_implies_5_0,
		libs__handle_options__postprocess_options_2_13_0_i211);
MR_def_label(libs__handle_options__postprocess_options_2_13_0,211)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_r2 = (MR_Integer) 35;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		libs__handle_options__postprocess_options_2_13_0_i212);
MR_def_label(libs__handle_options__postprocess_options_2_13_0,212)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = (MR_Integer) 42;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		libs__handle_options__postprocess_options_2_13_0_i213);
MR_def_label(libs__handle_options__postprocess_options_2_13_0,213)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(6),1)) {
		MR_GOTO_LAB(libs__handle_options__postprocess_options_2_13_0_i214);
	}
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(libs__handle_options__postprocess_options_2_13_0_i214);
	}
	MR_sv(6) = MR_r1;
	MR_r1 = (MR_Integer) 43;
	MR_r2 = (MR_Word) MR_TAG_COMMON(1,8,0);
	MR_r3 = MR_sv(7);
	MR_np_call_localret_ent(libs__globals__set_option_4_0,
		libs__handle_options__postprocess_options_2_13_0_i217);
MR_def_label(libs__handle_options__postprocess_options_2_13_0,217)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(11);
	MR_r4 = MR_r1;
	MR_r1 = (MR_Integer) 47;
	MR_r2 = (MR_Integer) 45;
	MR_GOTO_LAB(libs__handle_options__postprocess_options_2_13_0_i218);
MR_def_label(libs__handle_options__postprocess_options_2_13_0,214)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r3 = MR_sv(11);
	MR_r4 = MR_sv(7);
	MR_r1 = (MR_Integer) 47;
	MR_r2 = (MR_Integer) 45;
MR_def_label(libs__handle_options__postprocess_options_2_13_0,218)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(11) = MR_r3;
	MR_np_call_localret_ent(libs__handle_options__option_implies_5_0,
		libs__handle_options__postprocess_options_2_13_0_i219);
MR_def_label(libs__handle_options__postprocess_options_2_13_0,219)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r1;
	MR_r1 = (MR_Integer) 48;
	MR_r2 = (MR_Integer) 45;
	MR_r3 = MR_sv(11);
	MR_np_call_localret_ent(libs__handle_options__option_implies_5_0,
		libs__handle_options__postprocess_options_2_13_0_i220);
MR_def_label(libs__handle_options__postprocess_options_2_13_0,220)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r1;
	MR_r1 = (MR_Integer) 46;
	MR_r2 = (MR_Integer) 45;
	MR_r3 = MR_sv(11);
	MR_np_call_localret_ent(libs__handle_options__option_implies_5_0,
		libs__handle_options__postprocess_options_2_13_0_i221);
MR_def_label(libs__handle_options__postprocess_options_2_13_0,221)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_r2 = (MR_Integer) 57;
	MR_np_call_localret_ent(libs__globals__lookup_int_option_3_0,
		libs__handle_options__postprocess_options_2_13_0_i222);
MR_def_label(libs__handle_options__postprocess_options_2_13_0,222)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_LT(MR_r1,0)) {
		MR_GOTO_LAB(libs__handle_options__postprocess_options_2_13_0_i224);
	}
	MR_r1 = (MR_Word) MR_string_const("all", 3);
	MR_np_call_localret_ent(libs__handle_options__convert_dump_alias_2_0,
		libs__handle_options__postprocess_options_2_13_0_i225);
MR_def_label(libs__handle_options__postprocess_options_2_13_0,225)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(libs__handle_options__postprocess_options_2_13_0_i224);
	}
	MR_sv(7) = MR_r2;
	MR_r1 = MR_sv(8);
	MR_r2 = (MR_Integer) 117;
	MR_np_call_localret_ent(libs__globals__lookup_string_option_3_0,
		libs__handle_options__postprocess_options_2_13_0_i227);
MR_def_label(libs__handle_options__postprocess_options_2_13_0,227)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(7);
	MR_np_call_localret_ent(string__append_3_2,
		libs__handle_options__postprocess_options_2_13_0_i228);
MR_def_label(libs__handle_options__postprocess_options_2_13_0,228)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_r2 = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_r1 = (MR_Integer) 117;
	MR_r3 = MR_sv(8);
	}
	MR_np_call_localret_ent(libs__globals__set_option_4_0,
		libs__handle_options__postprocess_options_2_13_0_i229);
MR_def_label(libs__handle_options__postprocess_options_2_13_0,229)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(11);
	MR_r4 = MR_r1;
	MR_r1 = (MR_Integer) 48;
	MR_r2 = (MR_Integer) 45;
	MR_GOTO_LAB(libs__handle_options__postprocess_options_2_13_0_i230);
MR_def_label(libs__handle_options__postprocess_options_2_13_0,224)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(11);
	MR_r4 = MR_sv(8);
	MR_r1 = (MR_Integer) 48;
	MR_r2 = (MR_Integer) 45;
MR_def_label(libs__handle_options__postprocess_options_2_13_0,230)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(11) = MR_r3;
	MR_np_call_localret_ent(libs__handle_options__option_implies_5_0,
		libs__handle_options__postprocess_options_2_13_0_i231);
MR_def_label(libs__handle_options__postprocess_options_2_13_0,231)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_r2 = (MR_Integer) 49;
	MR_np_call_localret_ent(libs__globals__lookup_int_option_3_0,
		libs__handle_options__postprocess_options_2_13_0_i232);
MR_def_label(libs__handle_options__postprocess_options_2_13_0,232)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_LE(MR_r1,0)) {
		MR_GOTO_LAB(libs__handle_options__postprocess_options_2_13_0_i233);
	}
	MR_r1 = (MR_Integer) 45;
	MR_r2 = MR_sv(11);
	MR_r3 = MR_sv(7);
	MR_np_call_localret_ent(libs__globals__set_option_4_0,
		libs__handle_options__postprocess_options_2_13_0_i234);
MR_def_label(libs__handle_options__postprocess_options_2_13_0,234)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 53;
	MR_GOTO_LAB(libs__handle_options__postprocess_options_2_13_0_i235);
MR_def_label(libs__handle_options__postprocess_options_2_13_0,233)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(7);
	MR_r2 = (MR_Integer) 53;
MR_def_label(libs__handle_options__postprocess_options_2_13_0,235)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_np_call_localret_ent(libs__globals__lookup_accumulating_option_3_0,
		libs__handle_options__postprocess_options_2_13_0_i236);
MR_def_label(libs__handle_options__postprocess_options_2_13_0,236)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r2 = (MR_Integer) 54;
	MR_np_call_localret_ent(libs__globals__lookup_accumulating_option_3_0,
		libs__handle_options__postprocess_options_2_13_0_i237);
MR_def_label(libs__handle_options__postprocess_options_2_13_0,237)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_sv(7),0,0)) {
		MR_GOTO_LAB(libs__handle_options__postprocess_options_2_13_0_i241);
	}
	MR_r2 = MR_sv(11);
	MR_r3 = MR_sv(8);
	MR_GOTO_LAB(libs__handle_options__postprocess_options_2_13_0_i240);
MR_def_label(libs__handle_options__postprocess_options_2_13_0,241)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(libs__handle_options__postprocess_options_2_13_0_i239);
	}
	MR_r2 = MR_sv(11);
	MR_r3 = MR_sv(8);
MR_def_label(libs__handle_options__postprocess_options_2_13_0,240)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(11) = MR_r2;
	MR_r1 = (MR_Integer) 51;
	MR_np_call_localret_ent(libs__globals__set_option_4_0,
		libs__handle_options__postprocess_options_2_13_0_i244);
MR_def_label(libs__handle_options__postprocess_options_2_13_0,244)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 63;
	MR_GOTO_LAB(libs__handle_options__postprocess_options_2_13_0_i245);
MR_def_label(libs__handle_options__postprocess_options_2_13_0,239)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(8);
	MR_r2 = (MR_Integer) 63;
MR_def_label(libs__handle_options__postprocess_options_2_13_0,245)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		libs__handle_options__postprocess_options_2_13_0_i246);
MR_def_label(libs__handle_options__postprocess_options_2_13_0,246)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(analysis__enable_debug_messages_3_0,
		libs__handle_options__postprocess_options_2_13_0_i247);
MR_def_label(libs__handle_options__postprocess_options_2_13_0,247)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(7);
	MR_r2 = (MR_Integer) 114;
	MR_np_call_localret_ent(libs__globals__lookup_accumulating_option_3_0,
		libs__handle_options__postprocess_options_2_13_0_i248);
MR_def_label(libs__handle_options__postprocess_options_2_13_0,248)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(libs__handle_options__postprocess_options_2_13_0_i250);
	}
	MR_r3 = MR_sv(11);
	MR_r4 = MR_sv(7);
	MR_r1 = (MR_Integer) 62;
	MR_r2 = (MR_Integer) 123;
	MR_GOTO_LAB(libs__handle_options__postprocess_options_2_13_0_i249);
MR_def_label(libs__handle_options__postprocess_options_2_13_0,250)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(7);
	MR_r2 = (MR_Integer) 117;
	MR_np_call_localret_ent(libs__globals__lookup_string_option_3_0,
		libs__handle_options__postprocess_options_2_13_0_i251);
MR_def_label(libs__handle_options__postprocess_options_2_13_0,251)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("M", 1);
	MR_r3 = (MR_Word) MR_string_const("", 0);
	MR_np_call_localret_ent(string__replace_all_4_0,
		libs__handle_options__postprocess_options_2_13_0_i252);
MR_def_label(libs__handle_options__postprocess_options_2_13_0,252)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("T", 1);
	MR_r3 = (MR_Word) MR_string_const("", 0);
	MR_np_call_localret_ent(string__replace_all_4_0,
		libs__handle_options__postprocess_options_2_13_0_i253);
MR_def_label(libs__handle_options__postprocess_options_2_13_0,253)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_r2 = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_r1 = (MR_Integer) 117;
	MR_r3 = MR_sv(7);
	}
	MR_np_call_localret_ent(libs__globals__set_option_4_0,
		libs__handle_options__postprocess_options_2_13_0_i254);
MR_def_label(libs__handle_options__postprocess_options_2_13_0,254)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(11);
	MR_r4 = MR_r1;
	MR_r1 = (MR_Integer) 62;
	MR_r2 = (MR_Integer) 123;
MR_def_label(libs__handle_options__postprocess_options_2_13_0,249)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(11) = MR_r3;
	MR_np_call_localret_ent(libs__handle_options__option_implies_5_0,
		libs__handle_options__postprocess_options_2_13_0_i255);
MR_def_label(libs__handle_options__postprocess_options_2_13_0,255)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r1;
	MR_r1 = (MR_Integer) 123;
	MR_r2 = (MR_Integer) 121;
	MR_r3 = MR_sv(11);
	MR_np_call_localret_ent(libs__handle_options__option_implies_5_0,
		libs__handle_options__postprocess_options_2_13_0_i256);
MR_def_label(libs__handle_options__postprocess_options_2_13_0,256)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r1;
	MR_r1 = (MR_Integer) 122;
	MR_r2 = (MR_Integer) 121;
	MR_r3 = MR_sv(11);
	MR_np_call_localret_ent(libs__handle_options__option_implies_5_0,
		libs__handle_options__postprocess_options_2_13_0_i257);
MR_def_label(libs__handle_options__postprocess_options_2_13_0,257)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r1;
	MR_r1 = (MR_Integer) 109;
	MR_r2 = (MR_Integer) 108;
	MR_r3 = MR_sv(11);
	MR_np_call_localret_ent(libs__handle_options__option_implies_5_0,
		libs__handle_options__postprocess_options_2_13_0_i258);
MR_def_label(libs__handle_options__postprocess_options_2_13_0,258)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(14) = MR_r1;
	MR_r2 = (MR_Integer) 170;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		libs__handle_options__postprocess_options_2_13_0_i259);
MR_def_label(libs__handle_options__postprocess_options_2_13_0,259)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_r1 = MR_sv(14);
	MR_r2 = (MR_Integer) 196;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		libs__handle_options__postprocess_options_2_13_0_i260);
MR_def_label(libs__handle_options__postprocess_options_2_13_0,260)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_r1 = MR_sv(14);
	MR_r2 = (MR_Integer) 171;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		libs__handle_options__postprocess_options_2_13_0_i261);
MR_def_label(libs__handle_options__postprocess_options_2_13_0,261)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_r1;
	MR_r1 = MR_sv(14);
	MR_r2 = (MR_Integer) 172;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		libs__handle_options__postprocess_options_2_13_0_i262);
MR_def_label(libs__handle_options__postprocess_options_2_13_0,262)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(10) = MR_r1;
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(10);
	MR_np_call_localret_ent(bool__or_3_0,
		libs__handle_options__postprocess_options_2_13_0_i263);
MR_def_label(libs__handle_options__postprocess_options_2_13_0,263)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(9),1)) {
		MR_GOTO_LAB(libs__handle_options__postprocess_options_2_13_0_i264);
	}
	if (MR_INT_NE(MR_sv(10),1)) {
		MR_GOTO_LAB(libs__handle_options__postprocess_options_2_13_0_i264);
	}
	MR_sv(7) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("can\'t use both forms of minimal model tabling at once", 53);
	MR_r2 = MR_sv(13);
	MR_np_call_localret_ent(libs__handle_options__add_error_3_0,
		libs__handle_options__postprocess_options_2_13_0_i275);
MR_def_label(libs__handle_options__postprocess_options_2_13_0,264)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(libs__handle_options__postprocess_options_2_13_0_i268);
	}
	if (MR_INT_NE(MR_sv(8),1)) {
		MR_GOTO_LAB(libs__handle_options__postprocess_options_2_13_0_i268);
	}
	MR_sv(7) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("minimal model tabling is incompatible with high level code", 58);
	MR_r2 = MR_sv(13);
	MR_np_call_localret_ent(libs__handle_options__add_error_3_0,
		libs__handle_options__postprocess_options_2_13_0_i275);
MR_def_label(libs__handle_options__postprocess_options_2_13_0,268)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(libs__handle_options__postprocess_options_2_13_0_i272);
	}
	if (MR_INT_NE(MR_sv(7),1)) {
		MR_GOTO_LAB(libs__handle_options__postprocess_options_2_13_0_i272);
	}
	MR_sv(7) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("minimal model tabling is incompatible with trailing", 51);
	MR_r2 = MR_sv(13);
	MR_np_call_localret_ent(libs__handle_options__add_error_3_0,
		libs__handle_options__postprocess_options_2_13_0_i275);
MR_def_label(libs__handle_options__postprocess_options_2_13_0,275)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(11);
	MR_sv(13) = MR_r1;
	MR_r4 = MR_sv(14);
	MR_r1 = (MR_Integer) 174;
	MR_r2 = (MR_Integer) 188;
	MR_GOTO_LAB(libs__handle_options__postprocess_options_2_13_0_i278);
MR_def_label(libs__handle_options__postprocess_options_2_13_0,272)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_r3 = MR_sv(11);
	MR_r4 = MR_sv(14);
	MR_r1 = (MR_Integer) 174;
	MR_r2 = (MR_Integer) 188;
MR_def_label(libs__handle_options__postprocess_options_2_13_0,278)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(11) = MR_r3;
	MR_np_call_localret_ent(libs__handle_options__option_implies_5_0,
		libs__handle_options__postprocess_options_2_13_0_i279);
MR_def_label(libs__handle_options__postprocess_options_2_13_0,279)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r1;
	MR_r1 = (MR_Integer) 196;
	MR_r2 = (MR_Integer) 215;
	MR_r3 = MR_sv(12);
	MR_np_call_localret_ent(libs__handle_options__option_implies_5_0,
		libs__handle_options__postprocess_options_2_13_0_i280);
MR_def_label(libs__handle_options__postprocess_options_2_13_0,280)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r1;
	MR_r1 = (MR_Integer) 393;
	MR_r2 = (MR_Integer) 460;
	MR_r3 = MR_sv(12);
	MR_np_call_localret_ent(libs__handle_options__option_implies_5_0,
		libs__handle_options__postprocess_options_2_13_0_i281);
MR_def_label(libs__handle_options__postprocess_options_2_13_0,281)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(10) = MR_r1;
	MR_r2 = (MR_Integer) 101;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		libs__handle_options__postprocess_options_2_13_0_i282);
MR_def_label(libs__handle_options__postprocess_options_2_13_0,282)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(libs__handle_options__postprocess_options_2_13_0_i284);
	}
	MR_r1 = (MR_Integer) 160;
	MR_r2 = (MR_Integer) 264;
	MR_r3 = MR_sv(12);
	MR_r4 = MR_sv(10);
	MR_np_call_localret_ent(libs__handle_options__option_implies_5_0,
		libs__handle_options__postprocess_options_2_13_0_i285);
MR_def_label(libs__handle_options__postprocess_options_2_13_0,285)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 167;
	MR_GOTO_LAB(libs__handle_options__postprocess_options_2_13_0_i283);
MR_def_label(libs__handle_options__postprocess_options_2_13_0,284)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(10);
	MR_r2 = (MR_Integer) 167;
MR_def_label(libs__handle_options__postprocess_options_2_13_0,283)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(10) = MR_r1;
	MR_np_call_localret_ent(libs__globals__lookup_string_option_3_0,
		libs__handle_options__postprocess_options_2_13_0_i286);
MR_def_label(libs__handle_options__postprocess_options_2_13_0,286)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *)MR_r1, (char *)(MR_Word) MR_string_const("", 0)) != 0)) {
		MR_GOTO_LAB(libs__handle_options__postprocess_options_2_13_0_i287);
	}
	MR_r3 = MR_sv(11);
	MR_r4 = MR_sv(10);
	MR_r1 = (MR_Integer) 152;
	MR_r2 = (MR_Integer) 151;
	MR_GOTO_LAB(libs__handle_options__postprocess_options_2_13_0_i290);
MR_def_label(libs__handle_options__postprocess_options_2_13_0,287)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 264;
	MR_r2 = MR_sv(12);
	MR_r3 = MR_sv(10);
	MR_np_call_localret_ent(libs__globals__set_option_4_0,
		libs__handle_options__postprocess_options_2_13_0_i289);
MR_def_label(libs__handle_options__postprocess_options_2_13_0,289)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(11);
	MR_r4 = MR_r1;
	MR_r1 = (MR_Integer) 152;
	MR_r2 = (MR_Integer) 151;
MR_def_label(libs__handle_options__postprocess_options_2_13_0,290)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(11) = MR_r3;
	MR_np_call_localret_ent(libs__handle_options__option_implies_5_0,
		libs__handle_options__postprocess_options_2_13_0_i291);
MR_def_label(libs__handle_options__postprocess_options_2_13_0,291)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r1;
	MR_r1 = (MR_Integer) 151;
	MR_r2 = (MR_Integer) 208;
	MR_r3 = MR_sv(11);
	MR_np_call_localret_ent(libs__handle_options__option_implies_5_0,
		libs__handle_options__postprocess_options_2_13_0_i292);
MR_def_label(libs__handle_options__postprocess_options_2_13_0,292)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r1;
	MR_r1 = (MR_Integer) 160;
	MR_r2 = (MR_Integer) 208;
	MR_r3 = MR_sv(11);
	MR_np_call_localret_ent(libs__handle_options__option_implies_5_0,
		libs__handle_options__postprocess_options_2_13_0_i293);
MR_def_label(libs__handle_options__postprocess_options_2_13_0,293)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r1;
	MR_r1 = (MR_Integer) 160;
	MR_r2 = (MR_Integer) 247;
	MR_r3 = MR_sv(11);
	MR_np_call_localret_ent(libs__handle_options__option_implies_5_0,
		libs__handle_options__postprocess_options_2_13_0_i294);
MR_def_label(libs__handle_options__postprocess_options_2_13_0,294)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(14) = MR_r1;
	MR_r2 = (MR_Integer) 151;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		libs__handle_options__postprocess_options_2_13_0_i295);
MR_def_label(libs__handle_options__postprocess_options_2_13_0,295)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(10) = MR_r1;
	MR_r1 = MR_sv(14);
	MR_r2 = (MR_Integer) 152;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		libs__handle_options__postprocess_options_2_13_0_i296);
MR_def_label(libs__handle_options__postprocess_options_2_13_0,296)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(10),1)) {
		MR_GOTO_LAB(libs__handle_options__postprocess_options_2_13_0_i297);
	}
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(libs__handle_options__postprocess_options_2_13_0_i297);
	}
	if (MR_INT_NE(MR_sv(7),0)) {
		MR_GOTO_LAB(libs__handle_options__postprocess_options_2_13_0_i297);
	}
	MR_r1 = (MR_Integer) 170;
	MR_r2 = (MR_Word) MR_TAG_COMMON(1,8,0);
	MR_r3 = MR_sv(14);
	MR_np_call_localret_ent(libs__globals__set_option_4_0,
		libs__handle_options__postprocess_options_2_13_0_i301);
MR_def_label(libs__handle_options__postprocess_options_2_13_0,301)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(11);
	MR_r4 = MR_r1;
	MR_r1 = (MR_Integer) 151;
	MR_r2 = (MR_Integer) 99;
	MR_GOTO_LAB(libs__handle_options__postprocess_options_2_13_0_i302);
MR_def_label(libs__handle_options__postprocess_options_2_13_0,297)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(11);
	MR_r4 = MR_sv(14);
	MR_r1 = (MR_Integer) 151;
	MR_r2 = (MR_Integer) 99;
MR_def_label(libs__handle_options__postprocess_options_2_13_0,302)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(11) = MR_r3;
	MR_np_call_localret_ent(libs__handle_options__option_implies_5_0,
		libs__handle_options__postprocess_options_2_13_0_i303);
MR_def_label(libs__handle_options__postprocess_options_2_13_0,303)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r1;
	MR_r1 = (MR_Integer) 99;
	MR_r2 = (MR_Integer) 95;
	MR_r3 = MR_sv(11);
	MR_np_call_localret_ent(libs__handle_options__option_implies_5_0,
		libs__handle_options__postprocess_options_2_13_0_i304);
MR_def_label(libs__handle_options__postprocess_options_2_13_0,304)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r1;
	MR_r1 = (MR_Integer) 98;
	MR_r2 = (MR_Integer) 95;
	MR_r3 = MR_sv(11);
	MR_np_call_localret_ent(libs__handle_options__option_implies_5_0,
		libs__handle_options__postprocess_options_2_13_0_i305);
MR_def_label(libs__handle_options__postprocess_options_2_13_0,305)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(10) = MR_r1;
	MR_r2 = (MR_Integer) 93;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		libs__handle_options__postprocess_options_2_13_0_i306);
MR_def_label(libs__handle_options__postprocess_options_2_13_0,306)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(fn__libs__trace_params__given_trace_level_is_none_1_0,
		libs__handle_options__postprocess_options_2_13_0_i308);
MR_def_label(libs__handle_options__postprocess_options_2_13_0,308)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(libs__handle_options__postprocess_options_2_13_0_i307);
	}
	if (MR_INT_NE(MR_sv(7),0)) {
		MR_GOTO_LAB(libs__handle_options__postprocess_options_2_13_0_i311);
	}
	MR_sv(7) = (MR_Word) MR_TAG_COMMON(1,8,1);
	MR_r1 = (MR_Integer) 264;
	MR_r2 = MR_sv(7);
	MR_r3 = MR_sv(10);
	MR_np_call_localret_ent(libs__globals__set_option_4_0,
		libs__handle_options__postprocess_options_2_13_0_i312);
MR_def_label(libs__handle_options__postprocess_options_2_13_0,312)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = (MR_Integer) 278;
	MR_r2 = MR_sv(7);
	MR_np_call_localret_ent(libs__globals__set_option_4_0,
		libs__handle_options__postprocess_options_2_13_0_i313);
MR_def_label(libs__handle_options__postprocess_options_2_13_0,313)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = (MR_Integer) 280;
	MR_r2 = MR_sv(7);
	MR_np_call_localret_ent(libs__globals__set_option_4_0,
		libs__handle_options__postprocess_options_2_13_0_i314);
MR_def_label(libs__handle_options__postprocess_options_2_13_0,314)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = (MR_Integer) 285;
	MR_r2 = MR_sv(7);
	MR_np_call_localret_ent(libs__globals__set_option_4_0,
		libs__handle_options__postprocess_options_2_13_0_i315);
MR_def_label(libs__handle_options__postprocess_options_2_13_0,315)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = (MR_Integer) 286;
	MR_r2 = MR_sv(7);
	MR_np_call_localret_ent(libs__globals__set_option_4_0,
		libs__handle_options__postprocess_options_2_13_0_i316);
MR_def_label(libs__handle_options__postprocess_options_2_13_0,316)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = (MR_Integer) 313;
	MR_r2 = MR_sv(7);
	MR_np_call_localret_ent(libs__globals__set_option_4_0,
		libs__handle_options__postprocess_options_2_13_0_i317);
MR_def_label(libs__handle_options__postprocess_options_2_13_0,317)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = (MR_Integer) 276;
	MR_r2 = MR_sv(7);
	MR_np_call_localret_ent(libs__globals__set_option_4_0,
		libs__handle_options__postprocess_options_2_13_0_i318);
MR_def_label(libs__handle_options__postprocess_options_2_13_0,318)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = (MR_Integer) 277;
	MR_r2 = MR_sv(7);
	MR_np_call_localret_ent(libs__globals__set_option_4_0,
		libs__handle_options__postprocess_options_2_13_0_i319);
MR_def_label(libs__handle_options__postprocess_options_2_13_0,319)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = (MR_Integer) 291;
	MR_r2 = MR_sv(7);
	MR_np_call_localret_ent(libs__globals__set_option_4_0,
		libs__handle_options__postprocess_options_2_13_0_i320);
MR_def_label(libs__handle_options__postprocess_options_2_13_0,320)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = (MR_Integer) 290;
	MR_r2 = MR_sv(7);
	MR_np_call_localret_ent(libs__globals__set_option_4_0,
		libs__handle_options__postprocess_options_2_13_0_i321);
MR_def_label(libs__handle_options__postprocess_options_2_13_0,321)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = (MR_Integer) 295;
	MR_r2 = MR_sv(7);
	MR_np_call_localret_ent(libs__globals__set_option_4_0,
		libs__handle_options__postprocess_options_2_13_0_i322);
MR_def_label(libs__handle_options__postprocess_options_2_13_0,322)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = (MR_Integer) 309;
	MR_r2 = MR_sv(7);
	MR_np_call_localret_ent(libs__globals__set_option_4_0,
		libs__handle_options__postprocess_options_2_13_0_i323);
MR_def_label(libs__handle_options__postprocess_options_2_13_0,323)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = (MR_Integer) 321;
	MR_r2 = MR_sv(7);
	MR_np_call_localret_ent(libs__globals__set_option_4_0,
		libs__handle_options__postprocess_options_2_13_0_i324);
MR_def_label(libs__handle_options__postprocess_options_2_13_0,324)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = (MR_Integer) 322;
	MR_r2 = MR_sv(7);
	MR_np_call_localret_ent(libs__globals__set_option_4_0,
		libs__handle_options__postprocess_options_2_13_0_i325);
MR_def_label(libs__handle_options__postprocess_options_2_13_0,325)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(1),1)) {
		MR_GOTO_LAB(libs__handle_options__postprocess_options_2_13_0_i333);
	}
	MR_r3 = MR_r1;
	MR_r1 = (MR_Integer) 373;
	MR_r2 = MR_sv(7);
	MR_np_call_localret_ent(libs__globals__set_option_4_0,
		libs__handle_options__postprocess_options_2_13_0_i333);
MR_def_label(libs__handle_options__postprocess_options_2_13_0,333)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r2 = (MR_Word) MR_TAG_COMMON(1,8,1);
	MR_r1 = (MR_Integer) 366;
	MR_GOTO_LAB(libs__handle_options__postprocess_options_2_13_0_i310);
MR_def_label(libs__handle_options__postprocess_options_2_13_0,311)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(10);
	MR_r2 = (MR_Word) MR_TAG_COMMON(1,8,1);
	MR_r1 = (MR_Integer) 366;
MR_def_label(libs__handle_options__postprocess_options_2_13_0,310)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r2;
	MR_np_call_localret_ent(libs__globals__set_option_4_0,
		libs__handle_options__postprocess_options_2_13_0_i334);
MR_def_label(libs__handle_options__postprocess_options_2_13_0,334)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = (MR_Integer) 293;
	MR_r2 = MR_sv(11);
	MR_np_call_localret_ent(libs__globals__set_option_4_0,
		libs__handle_options__postprocess_options_2_13_0_i335);
MR_def_label(libs__handle_options__postprocess_options_2_13_0,335)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = (MR_Integer) 311;
	MR_r2 = MR_sv(11);
	MR_np_call_localret_ent(libs__globals__set_option_4_0,
		libs__handle_options__postprocess_options_2_13_0_i336);
MR_def_label(libs__handle_options__postprocess_options_2_13_0,336)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = (MR_Integer) 364;
	MR_r2 = MR_sv(7);
	MR_np_call_localret_ent(libs__globals__set_option_4_0,
		libs__handle_options__postprocess_options_2_13_0_i337);
MR_def_label(libs__handle_options__postprocess_options_2_13_0,337)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = (MR_Integer) 212;
	MR_r2 = MR_sv(11);
	MR_np_call_localret_ent(libs__globals__set_option_4_0,
		libs__handle_options__postprocess_options_2_13_0_i338);
MR_def_label(libs__handle_options__postprocess_options_2_13_0,338)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = (MR_Integer) 213;
	MR_r2 = MR_sv(11);
	MR_np_call_localret_ent(libs__globals__set_option_4_0,
		libs__handle_options__postprocess_options_2_13_0_i339);
MR_def_label(libs__handle_options__postprocess_options_2_13_0,339)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = (MR_Integer) 252;
	MR_r2 = MR_sv(7);
	MR_np_call_localret_ent(libs__globals__set_option_4_0,
		libs__handle_options__postprocess_options_2_13_0_i340);
MR_def_label(libs__handle_options__postprocess_options_2_13_0,340)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(11);
	MR_r4 = MR_r1;
	MR_r1 = (MR_Integer) 160;
	MR_r2 = (MR_Integer) 211;
	MR_GOTO_LAB(libs__handle_options__postprocess_options_2_13_0_i341);
MR_def_label(libs__handle_options__postprocess_options_2_13_0,307)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(11);
	MR_r4 = MR_sv(10);
	MR_r1 = (MR_Integer) 160;
	MR_r2 = (MR_Integer) 211;
MR_def_label(libs__handle_options__postprocess_options_2_13_0,341)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(11) = MR_r3;
	MR_np_call_localret_ent(libs__handle_options__option_implies_5_0,
		libs__handle_options__postprocess_options_2_13_0_i342);
MR_def_label(libs__handle_options__postprocess_options_2_13_0,342)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(10) = MR_r1;
	MR_r2 = (MR_Integer) 160;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		libs__handle_options__postprocess_options_2_13_0_i343);
MR_def_label(libs__handle_options__postprocess_options_2_13_0,343)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(libs__handle_options__postprocess_options_2_13_0_i345);
	}
	MR_sv(7) = MR_r1;
	MR_r1 = MR_sv(10);
	MR_r2 = (MR_Integer) 165;
	MR_GOTO_LAB(libs__handle_options__postprocess_options_2_13_0_i344);
MR_def_label(libs__handle_options__postprocess_options_2_13_0,345)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(8),0)) {
		MR_GOTO_LAB(libs__handle_options__postprocess_options_2_13_0_i346);
	}
	if (MR_INT_NE(MR_sv(1),0)) {
		MR_GOTO_LAB(libs__handle_options__postprocess_options_2_13_0_i346);
	}
	MR_sv(7) = MR_r1;
	MR_r2 = MR_sv(12);
	MR_r3 = MR_sv(10);
	MR_r1 = (MR_Integer) 290;
	MR_GOTO_LAB(libs__handle_options__postprocess_options_2_13_0_i350);
MR_def_label(libs__handle_options__postprocess_options_2_13_0,346)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("deep profiling is incompatible with high level code", 51);
	MR_r2 = MR_sv(13);
	MR_np_call_localret_ent(libs__handle_options__add_error_3_0,
		libs__handle_options__postprocess_options_2_13_0_i349);
MR_def_label(libs__handle_options__postprocess_options_2_13_0,349)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(12);
	MR_sv(13) = MR_r1;
	MR_r3 = MR_sv(10);
	MR_r1 = (MR_Integer) 290;
MR_def_label(libs__handle_options__postprocess_options_2_13_0,350)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(12) = MR_r2;
	MR_np_call_localret_ent(libs__globals__set_option_4_0,
		libs__handle_options__postprocess_options_2_13_0_i351);
MR_def_label(libs__handle_options__postprocess_options_2_13_0,351)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(10) = MR_r1;
	MR_r2 = (MR_Integer) 163;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		libs__handle_options__postprocess_options_2_13_0_i352);
MR_def_label(libs__handle_options__postprocess_options_2_13_0,352)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(libs__handle_options__postprocess_options_2_13_0_i354);
	}
	MR_r1 = MR_sv(10);
	MR_r2 = (MR_Integer) 165;
	MR_GOTO_LAB(libs__handle_options__postprocess_options_2_13_0_i344);
MR_def_label(libs__handle_options__postprocess_options_2_13_0,354)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 280;
	MR_r2 = MR_sv(11);
	MR_r3 = MR_sv(10);
	MR_np_call_localret_ent(libs__globals__set_option_4_0,
		libs__handle_options__postprocess_options_2_13_0_i355);
MR_def_label(libs__handle_options__postprocess_options_2_13_0,355)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = (MR_Integer) 281;
	MR_r2 = (MR_Word) MR_TAG_COMMON(2,8,2);
	MR_np_call_localret_ent(libs__globals__set_option_4_0,
		libs__handle_options__postprocess_options_2_13_0_i356);
MR_def_label(libs__handle_options__postprocess_options_2_13_0,356)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 165;
MR_def_label(libs__handle_options__postprocess_options_2_13_0,344)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(14) = MR_r1;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		libs__handle_options__postprocess_options_2_13_0_i357);
MR_def_label(libs__handle_options__postprocess_options_2_13_0,357)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(10) = MR_r1;
	MR_r1 = MR_sv(14);
	MR_r2 = (MR_Integer) 166;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		libs__handle_options__postprocess_options_2_13_0_i358);
MR_def_label(libs__handle_options__postprocess_options_2_13_0,358)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(10),1)) {
		MR_GOTO_LAB(libs__handle_options__postprocess_options_2_13_0_i359);
	}
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(libs__handle_options__postprocess_options_2_13_0_i359);
	}
	MR_r1 = (MR_Word) MR_string_const("we can\'t record term size as both words and cells", 49);
	MR_r2 = MR_sv(13);
	MR_np_call_localret_ent(libs__handle_options__add_error_3_0,
		libs__handle_options__postprocess_options_2_13_0_i362);
MR_def_label(libs__handle_options__postprocess_options_2_13_0,362)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(12);
	MR_r4 = MR_sv(14);
	MR_GOTO_LAB(libs__handle_options__postprocess_options_2_13_0_i374);
MR_def_label(libs__handle_options__postprocess_options_2_13_0,359)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(10),1)) {
		MR_GOTO_LAB(libs__handle_options__postprocess_options_2_13_0_i366);
	}
	MR_r2 = MR_sv(12);
	MR_r3 = MR_sv(14);
	MR_GOTO_LAB(libs__handle_options__postprocess_options_2_13_0_i365);
MR_def_label(libs__handle_options__postprocess_options_2_13_0,366)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(libs__handle_options__postprocess_options_2_13_0_i364);
	}
	MR_r2 = MR_sv(12);
	MR_r3 = MR_sv(14);
MR_def_label(libs__handle_options__postprocess_options_2_13_0,365)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(12) = MR_r2;
	MR_r1 = (MR_Integer) 290;
	MR_np_call_localret_ent(libs__globals__set_option_4_0,
		libs__handle_options__postprocess_options_2_13_0_i369);
MR_def_label(libs__handle_options__postprocess_options_2_13_0,369)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(8),0)) {
		MR_GOTO_LAB(libs__handle_options__postprocess_options_2_13_0_i371);
	}
	MR_r3 = MR_sv(12);
	MR_r4 = MR_r1;
	MR_r1 = MR_sv(13);
	MR_GOTO_LAB(libs__handle_options__postprocess_options_2_13_0_i374);
MR_def_label(libs__handle_options__postprocess_options_2_13_0,371)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(10) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("term size profiling is incompatible with high level code", 56);
	MR_r2 = MR_sv(13);
	MR_np_call_localret_ent(libs__handle_options__add_error_3_0,
		libs__handle_options__postprocess_options_2_13_0_i372);
MR_def_label(libs__handle_options__postprocess_options_2_13_0,372)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(12);
	MR_r4 = MR_sv(10);
	MR_GOTO_LAB(libs__handle_options__postprocess_options_2_13_0_i374);
MR_def_label(libs__handle_options__postprocess_options_2_13_0,364)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(12);
	MR_r1 = MR_sv(13);
	MR_r4 = MR_sv(14);
MR_def_label(libs__handle_options__postprocess_options_2_13_0,374)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(1),0)) {
		MR_GOTO_LAB(libs__handle_options__postprocess_options_2_13_0_i380);
	}
	if (MR_INT_NE(MR_sv(8),0)) {
		MR_GOTO_LAB(libs__handle_options__postprocess_options_2_13_0_i378);
	}
	MR_GOTO_LAB(libs__handle_options__postprocess_options_2_13_0_i379);
MR_def_label(libs__handle_options__postprocess_options_2_13_0,380)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(1),1)) {
		MR_GOTO_LAB(libs__handle_options__postprocess_options_2_13_0_i378);
	}
MR_def_label(libs__handle_options__postprocess_options_2_13_0,379)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_GOTO_LAB(libs__handle_options__postprocess_options_2_13_0_i377);
MR_def_label(libs__handle_options__postprocess_options_2_13_0,378)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(12) = MR_r3;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_sv(4) = MR_tempr1;
	MR_sv(10) = MR_r4;
	}
	MR_np_call_localret_ent(fn__libs__trace_params__given_trace_level_is_none_1_0,
		libs__handle_options__postprocess_options_2_13_0_i383);
MR_def_label(libs__handle_options__postprocess_options_2_13_0,383)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(libs__handle_options__postprocess_options_2_13_0_i375);
	}
	MR_r3 = MR_sv(12);
	MR_r4 = MR_sv(10);
MR_def_label(libs__handle_options__postprocess_options_2_13_0,377)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 169;
	MR_r2 = (MR_Integer) 399;
	MR_GOTO_LAB(libs__handle_options__postprocess_options_2_13_0_i386);
MR_def_label(libs__handle_options__postprocess_options_2_13_0,375)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(12);
	MR_r1 = MR_sv(4);
	MR_tempr2 = MR_sv(10);
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("debugging is available only in low level C grades", 49);
	}
	MR_np_call_localret_ent(libs__handle_options__add_error_3_0,
		libs__handle_options__postprocess_options_2_13_0_i385);
MR_def_label(libs__handle_options__postprocess_options_2_13_0,385)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(12);
	MR_r4 = MR_sv(10);
	MR_sv(4) = MR_r1;
	MR_r1 = (MR_Integer) 169;
	MR_r2 = (MR_Integer) 399;
MR_def_label(libs__handle_options__postprocess_options_2_13_0,386)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(12) = MR_r3;
	MR_np_call_localret_ent(libs__handle_options__option_implies_5_0,
		libs__handle_options__postprocess_options_2_13_0_i387);
MR_def_label(libs__handle_options__postprocess_options_2_13_0,387)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r1;
	MR_r1 = (MR_Integer) 267;
	MR_r2 = (MR_Integer) 292;
	MR_r3 = MR_sv(12);
	MR_np_call_localret_ent(libs__handle_options__option_neg_implies_5_0,
		libs__handle_options__postprocess_options_2_13_0_i388);
MR_def_label(libs__handle_options__postprocess_options_2_13_0,388)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(7),0)) {
		MR_GOTO_LAB(libs__handle_options__postprocess_options_2_13_0_i390);
	}
	MR_r4 = MR_r1;
	MR_r1 = (MR_Integer) 264;
	MR_r2 = (MR_Integer) 292;
	MR_r3 = MR_sv(12);
	MR_np_call_localret_ent(libs__handle_options__option_neg_implies_5_0,
		libs__handle_options__postprocess_options_2_13_0_i390);
MR_def_label(libs__handle_options__postprocess_options_2_13_0,390)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(12);
	MR_r4 = MR_r1;
	MR_r1 = (MR_Integer) 197;
	MR_r2 = (MR_Integer) 290;
	MR_np_call_localret_ent(libs__handle_options__option_implies_5_0,
		libs__handle_options__postprocess_options_2_13_0_i392);
MR_def_label(libs__handle_options__postprocess_options_2_13_0,392)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r1;
	MR_r1 = (MR_Integer) 128;
	MR_r2 = (MR_Integer) 313;
	MR_r3 = MR_sv(12);
	MR_np_call_localret_ent(libs__handle_options__option_neg_implies_5_0,
		libs__handle_options__postprocess_options_2_13_0_i393);
MR_def_label(libs__handle_options__postprocess_options_2_13_0,393)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r1;
	MR_r1 = (MR_Integer) 128;
	MR_r2 = (MR_Integer) 276;
	MR_r3 = MR_sv(12);
	MR_np_call_localret_ent(libs__handle_options__option_neg_implies_5_0,
		libs__handle_options__postprocess_options_2_13_0_i394);
MR_def_label(libs__handle_options__postprocess_options_2_13_0,394)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r1;
	MR_r1 = (MR_Integer) 128;
	MR_r2 = (MR_Integer) 277;
	MR_r3 = MR_sv(12);
	MR_np_call_localret_ent(libs__handle_options__option_neg_implies_5_0,
		libs__handle_options__postprocess_options_2_13_0_i395);
MR_def_label(libs__handle_options__postprocess_options_2_13_0,395)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r1;
	MR_r1 = (MR_Integer) 208;
	MR_r2 = (MR_Integer) 211;
	MR_r3 = MR_sv(11);
	MR_np_call_localret_ent(libs__handle_options__option_implies_5_0,
		libs__handle_options__postprocess_options_2_13_0_i396);
MR_def_label(libs__handle_options__postprocess_options_2_13_0,396)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r1;
	MR_r1 = (MR_Integer) 212;
	MR_r2 = (MR_Integer) 211;
	MR_r3 = MR_sv(11);
	MR_np_call_localret_ent(libs__handle_options__option_implies_5_0,
		libs__handle_options__postprocess_options_2_13_0_i397);
MR_def_label(libs__handle_options__postprocess_options_2_13_0,397)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(2),5)) {
		MR_GOTO_LAB(libs__handle_options__postprocess_options_2_13_0_i415);
	}
	MR_r3 = MR_r1;
	MR_r1 = (MR_Integer) 210;
	MR_r2 = MR_sv(11);
	MR_np_call_localret_ent(libs__globals__set_option_4_0,
		libs__handle_options__postprocess_options_2_13_0_i405);
MR_def_label(libs__handle_options__postprocess_options_2_13_0,405)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = (MR_Integer) 213;
	MR_r2 = MR_sv(11);
	MR_np_call_localret_ent(libs__globals__set_option_4_0,
		libs__handle_options__postprocess_options_2_13_0_i406);
MR_def_label(libs__handle_options__postprocess_options_2_13_0,406)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = (MR_Integer) 366;
	MR_r2 = MR_sv(12);
	MR_np_call_localret_ent(libs__globals__set_option_4_0,
		libs__handle_options__postprocess_options_2_13_0_i407);
MR_def_label(libs__handle_options__postprocess_options_2_13_0,407)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = (MR_Integer) 384;
	MR_r2 = MR_sv(12);
	MR_np_call_localret_ent(libs__globals__set_option_4_0,
		libs__handle_options__postprocess_options_2_13_0_i408);
MR_def_label(libs__handle_options__postprocess_options_2_13_0,408)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = (MR_Integer) 252;
	MR_r2 = MR_sv(12);
	MR_np_call_localret_ent(libs__globals__set_option_4_0,
		libs__handle_options__postprocess_options_2_13_0_i409);
MR_def_label(libs__handle_options__postprocess_options_2_13_0,409)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = (MR_Integer) 364;
	MR_r2 = MR_sv(12);
	MR_np_call_localret_ent(libs__globals__set_option_4_0,
		libs__handle_options__postprocess_options_2_13_0_i410);
MR_def_label(libs__handle_options__postprocess_options_2_13_0,410)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = (MR_Integer) 235;
	MR_r2 = MR_sv(12);
	MR_np_call_localret_ent(libs__globals__set_option_4_0,
		libs__handle_options__postprocess_options_2_13_0_i411);
MR_def_label(libs__handle_options__postprocess_options_2_13_0,411)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = (MR_Integer) 236;
	MR_r2 = MR_sv(12);
	MR_np_call_localret_ent(libs__globals__set_option_4_0,
		libs__handle_options__postprocess_options_2_13_0_i412);
MR_def_label(libs__handle_options__postprocess_options_2_13_0,412)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = (MR_Integer) 290;
	MR_r2 = MR_sv(12);
	MR_np_call_localret_ent(libs__globals__set_option_4_0,
		libs__handle_options__postprocess_options_2_13_0_i413);
MR_def_label(libs__handle_options__postprocess_options_2_13_0,413)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = (MR_Integer) 285;
	MR_r2 = MR_sv(12);
	MR_np_call_localret_ent(libs__globals__set_option_4_0,
		libs__handle_options__postprocess_options_2_13_0_i414);
MR_def_label(libs__handle_options__postprocess_options_2_13_0,414)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = (MR_Integer) 286;
	MR_r2 = MR_sv(12);
	MR_np_call_localret_ent(libs__globals__set_option_4_0,
		libs__handle_options__postprocess_options_2_13_0_i415);
MR_def_label(libs__handle_options__postprocess_options_2_13_0,415)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 202;
	MR_sv(7) = MR_r1;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		libs__handle_options__postprocess_options_2_13_0_i416);
MR_def_label(libs__handle_options__postprocess_options_2_13_0,416)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(8),1)) {
		MR_GOTO_LAB(libs__handle_options__postprocess_options_2_13_0_i417);
	}
	if (MR_INT_NE(MR_sv(2),5)) {
		MR_GOTO_LAB(libs__handle_options__postprocess_options_2_13_0_i417);
	}
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(libs__handle_options__postprocess_options_2_13_0_i417);
	}
	MR_r1 = (MR_Word) MR_string_const("--gc accurate is incompatible with --put-nondet-env-on-heap", 59);
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(libs__handle_options__add_error_3_0,
		libs__handle_options__postprocess_options_2_13_0_i421);
MR_def_label(libs__handle_options__postprocess_options_2_13_0,421)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(11);
	MR_sv(10) = MR_r1;
	MR_r4 = MR_sv(7);
	MR_r1 = (MR_Integer) 211;
	MR_r2 = (MR_Integer) 209;
	MR_GOTO_LAB(libs__handle_options__postprocess_options_2_13_0_i422);
MR_def_label(libs__handle_options__postprocess_options_2_13_0,417)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(11);
	MR_sv(10) = MR_sv(4);
	MR_r4 = MR_sv(7);
	MR_r1 = (MR_Integer) 211;
	MR_r2 = (MR_Integer) 209;
MR_def_label(libs__handle_options__postprocess_options_2_13_0,422)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(11) = MR_r3;
	MR_np_call_localret_ent(libs__handle_options__option_implies_5_0,
		libs__handle_options__postprocess_options_2_13_0_i423);
MR_def_label(libs__handle_options__postprocess_options_2_13_0,423)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r1;
	MR_r1 = (MR_Integer) 210;
	MR_r2 = (MR_Integer) 209;
	MR_r3 = MR_sv(11);
	MR_np_call_localret_ent(libs__handle_options__option_implies_5_0,
		libs__handle_options__postprocess_options_2_13_0_i424);
MR_def_label(libs__handle_options__postprocess_options_2_13_0,424)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r1;
	MR_r1 = (MR_Integer) 211;
	MR_r2 = (MR_Integer) 382;
	MR_r3 = MR_sv(12);
	MR_np_call_localret_ent(libs__handle_options__option_implies_5_0,
		libs__handle_options__postprocess_options_2_13_0_i425);
MR_def_label(libs__handle_options__postprocess_options_2_13_0,425)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r1;
	MR_r1 = (MR_Integer) 210;
	MR_r2 = (MR_Integer) 382;
	MR_r3 = MR_sv(12);
	MR_np_call_localret_ent(libs__handle_options__option_implies_5_0,
		libs__handle_options__postprocess_options_2_13_0_i426);
MR_def_label(libs__handle_options__postprocess_options_2_13_0,426)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r1;
	MR_r1 = (MR_Integer) 209;
	MR_r2 = (MR_Integer) 380;
	MR_r3 = MR_sv(12);
	MR_np_call_localret_ent(libs__handle_options__option_implies_5_0,
		libs__handle_options__postprocess_options_2_13_0_i427);
MR_def_label(libs__handle_options__postprocess_options_2_13_0,427)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r1;
	MR_r1 = (MR_Integer) 213;
	MR_r2 = (MR_Integer) 313;
	MR_r3 = MR_sv(12);
	MR_np_call_localret_ent(libs__handle_options__option_implies_5_0,
		libs__handle_options__postprocess_options_2_13_0_i428);
MR_def_label(libs__handle_options__postprocess_options_2_13_0,428)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r1;
	MR_r1 = (MR_Integer) 213;
	MR_r2 = (MR_Integer) 276;
	MR_r3 = MR_sv(12);
	MR_np_call_localret_ent(libs__handle_options__option_implies_5_0,
		libs__handle_options__postprocess_options_2_13_0_i429);
MR_def_label(libs__handle_options__postprocess_options_2_13_0,429)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r1;
	MR_r1 = (MR_Integer) 170;
	MR_r2 = (MR_Integer) 364;
	MR_r3 = MR_sv(12);
	MR_np_call_localret_ent(libs__handle_options__option_implies_5_0,
		libs__handle_options__postprocess_options_2_13_0_i430);
MR_def_label(libs__handle_options__postprocess_options_2_13_0,430)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r1;
	MR_r1 = (MR_Integer) 178;
	MR_r2 = (MR_Integer) 364;
	MR_r3 = MR_sv(12);
	MR_np_call_localret_ent(libs__handle_options__option_implies_5_0,
		libs__handle_options__postprocess_options_2_13_0_i431);
MR_def_label(libs__handle_options__postprocess_options_2_13_0,431)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r1;
	MR_r1 = (MR_Integer) 171;
	MR_r2 = (MR_Integer) 366;
	MR_r3 = MR_sv(12);
	MR_np_call_localret_ent(libs__handle_options__option_implies_5_0,
		libs__handle_options__postprocess_options_2_13_0_i432);
MR_def_label(libs__handle_options__postprocess_options_2_13_0,432)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r2 = (MR_Integer) 223;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		libs__handle_options__postprocess_options_2_13_0_i433);
MR_def_label(libs__handle_options__postprocess_options_2_13_0,433)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = (MR_Integer) 224;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		libs__handle_options__postprocess_options_2_13_0_i434);
MR_def_label(libs__handle_options__postprocess_options_2_13_0,434)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(9),1)) {
		MR_GOTO_LAB(libs__handle_options__postprocess_options_2_13_0_i435);
	}
	if (MR_INT_NE(MR_sv(2),0)) {
		MR_GOTO_LAB(libs__handle_options__postprocess_options_2_13_0_i435);
	}
	MR_sv(2) = MR_r1;
	MR_r1 = (MR_Integer) 225;
	MR_r2 = (MR_Word) MR_TAG_COMMON(1,8,0);
	MR_r3 = MR_sv(4);
	MR_np_call_localret_ent(libs__globals__set_option_4_0,
		libs__handle_options__postprocess_options_2_13_0_i438);
MR_def_label(libs__handle_options__postprocess_options_2_13_0,438)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_GOTO_LAB(libs__handle_options__postprocess_options_2_13_0_i439);
MR_def_label(libs__handle_options__postprocess_options_2_13_0,435)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r3 = MR_sv(4);
MR_def_label(libs__handle_options__postprocess_options_2_13_0,439)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(9),1)) {
		MR_GOTO_LAB(libs__handle_options__postprocess_options_2_13_0_i440);
	}
	if (MR_INT_NE(MR_sv(2),0)) {
		MR_GOTO_LAB(libs__handle_options__postprocess_options_2_13_0_i440);
	}
	MR_r1 = (MR_Integer) 226;
	MR_r2 = (MR_Word) MR_TAG_COMMON(1,8,0);
	MR_np_call_localret_ent(libs__globals__set_option_4_0,
		libs__handle_options__postprocess_options_2_13_0_i443);
MR_def_label(libs__handle_options__postprocess_options_2_13_0,443)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 113;
	MR_GOTO_LAB(libs__handle_options__postprocess_options_2_13_0_i444);
MR_def_label(libs__handle_options__postprocess_options_2_13_0,440)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r3;
	MR_r2 = (MR_Integer) 113;
MR_def_label(libs__handle_options__postprocess_options_2_13_0,444)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_r1;
	MR_np_call_localret_ent(libs__globals__lookup_accumulating_option_3_0,
		libs__handle_options__postprocess_options_2_13_0_i445);
MR_def_label(libs__handle_options__postprocess_options_2_13_0,445)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(9);
	MR_r2 = (MR_Integer) 112;
	MR_np_call_localret_ent(libs__globals__lookup_accumulating_option_3_0,
		libs__handle_options__postprocess_options_2_13_0_i446);
MR_def_label(libs__handle_options__postprocess_options_2_13_0,446)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(9);
	MR_r2 = (MR_Integer) 231;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		libs__handle_options__postprocess_options_2_13_0_i447);
MR_def_label(libs__handle_options__postprocess_options_2_13_0,447)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_r1 = MR_sv(9);
	MR_r2 = (MR_Integer) 232;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		libs__handle_options__postprocess_options_2_13_0_i448);
MR_def_label(libs__handle_options__postprocess_options_2_13_0,448)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_sv(2),0,0)) {
		MR_GOTO_LAB(libs__handle_options__postprocess_options_2_13_0_i452);
	}
	MR_r2 = MR_sv(12);
	MR_r3 = MR_sv(9);
	MR_GOTO_LAB(libs__handle_options__postprocess_options_2_13_0_i451);
MR_def_label(libs__handle_options__postprocess_options_2_13_0,452)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_sv(4),0,0)) {
		MR_GOTO_LAB(libs__handle_options__postprocess_options_2_13_0_i454);
	}
	MR_r2 = MR_sv(12);
	MR_r3 = MR_sv(9);
	MR_GOTO_LAB(libs__handle_options__postprocess_options_2_13_0_i451);
MR_def_label(libs__handle_options__postprocess_options_2_13_0,454)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(6),1)) {
		MR_GOTO_LAB(libs__handle_options__postprocess_options_2_13_0_i456);
	}
	MR_r2 = MR_sv(12);
	MR_r3 = MR_sv(9);
	MR_GOTO_LAB(libs__handle_options__postprocess_options_2_13_0_i451);
MR_def_label(libs__handle_options__postprocess_options_2_13_0,456)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(7),1)) {
		MR_GOTO_LAB(libs__handle_options__postprocess_options_2_13_0_i458);
	}
	MR_r2 = MR_sv(12);
	MR_r3 = MR_sv(9);
	MR_GOTO_LAB(libs__handle_options__postprocess_options_2_13_0_i451);
MR_def_label(libs__handle_options__postprocess_options_2_13_0,458)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(libs__handle_options__postprocess_options_2_13_0_i450);
	}
	MR_r2 = MR_sv(12);
	MR_r3 = MR_sv(9);
MR_def_label(libs__handle_options__postprocess_options_2_13_0,451)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(12) = MR_r2;
	MR_r1 = (MR_Integer) 230;
	MR_np_call_localret_ent(libs__globals__set_option_4_0,
		libs__handle_options__postprocess_options_2_13_0_i461);
MR_def_label(libs__handle_options__postprocess_options_2_13_0,461)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(11);
	MR_r4 = MR_r1;
	MR_r1 = (MR_Integer) 285;
	MR_r2 = (MR_Integer) 286;
	MR_GOTO_LAB(libs__handle_options__postprocess_options_2_13_0_i462);
MR_def_label(libs__handle_options__postprocess_options_2_13_0,450)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(11);
	MR_r4 = MR_sv(9);
	MR_r1 = (MR_Integer) 285;
	MR_r2 = (MR_Integer) 286;
MR_def_label(libs__handle_options__postprocess_options_2_13_0,462)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(11) = MR_r3;
	MR_np_call_localret_ent(libs__handle_options__option_implies_5_0,
		libs__handle_options__postprocess_options_2_13_0_i463);
MR_def_label(libs__handle_options__postprocess_options_2_13_0,463)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r1;
	MR_r1 = (MR_Integer) 276;
	MR_r2 = (MR_Integer) 277;
	MR_r3 = MR_sv(11);
	MR_np_call_localret_ent(libs__handle_options__option_implies_5_0,
		libs__handle_options__postprocess_options_2_13_0_i464);
MR_def_label(libs__handle_options__postprocess_options_2_13_0,464)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r1;
	MR_r1 = (MR_Integer) 279;
	MR_r2 = (MR_Integer) 256;
	MR_r3 = MR_sv(11);
	MR_np_call_localret_ent(libs__handle_options__option_implies_5_0,
		libs__handle_options__postprocess_options_2_13_0_i465);
MR_def_label(libs__handle_options__postprocess_options_2_13_0,465)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r1;
	MR_r1 = (MR_Integer) 279;
	MR_r2 = (MR_Integer) 278;
	MR_r3 = MR_sv(11);
	MR_np_call_localret_ent(libs__handle_options__option_implies_5_0,
		libs__handle_options__postprocess_options_2_13_0_i466);
MR_def_label(libs__handle_options__postprocess_options_2_13_0,466)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r1;
	MR_r1 = (MR_Integer) 287;
	MR_r2 = (MR_Integer) 293;
	MR_r3 = MR_sv(11);
	MR_np_call_localret_ent(libs__handle_options__option_implies_5_0,
		libs__handle_options__postprocess_options_2_13_0_i467);
MR_def_label(libs__handle_options__postprocess_options_2_13_0,467)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r1;
	MR_r1 = (MR_Integer) 287;
	MR_r2 = (MR_Integer) 274;
	MR_r3 = MR_sv(11);
	MR_np_call_localret_ent(libs__handle_options__option_implies_5_0,
		libs__handle_options__postprocess_options_2_13_0_i468);
MR_def_label(libs__handle_options__postprocess_options_2_13_0,468)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r1;
	MR_r1 = (MR_Integer) 68;
	MR_r2 = (MR_Integer) 278;
	MR_r3 = MR_sv(12);
	MR_np_call_localret_ent(libs__handle_options__option_implies_5_0,
		libs__handle_options__postprocess_options_2_13_0_i469);
MR_def_label(libs__handle_options__postprocess_options_2_13_0,469)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r1;
	MR_r1 = (MR_Integer) 318;
	MR_r2 = (MR_Integer) 319;
	MR_r3 = MR_sv(11);
	MR_np_call_localret_ent(libs__handle_options__option_implies_5_0,
		libs__handle_options__postprocess_options_2_13_0_i470);
MR_def_label(libs__handle_options__postprocess_options_2_13_0,470)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r1;
	MR_r1 = (MR_Integer) 75;
	MR_r2 = (MR_Integer) 74;
	MR_r3 = MR_sv(11);
	MR_np_call_localret_ent(libs__handle_options__option_implies_5_0,
		libs__handle_options__postprocess_options_2_13_0_i471);
MR_def_label(libs__handle_options__postprocess_options_2_13_0,471)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r1;
	MR_r1 = (MR_Integer) 111;
	MR_r2 = (MR_Integer) 74;
	MR_r3 = MR_sv(11);
	MR_np_call_localret_ent(libs__handle_options__option_implies_5_0,
		libs__handle_options__postprocess_options_2_13_0_i472);
MR_def_label(libs__handle_options__postprocess_options_2_13_0,472)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r1;
	MR_r1 = (MR_Integer) 72;
	MR_r2 = (MR_Integer) 19;
	MR_r3 = MR_sv(12);
	MR_np_call_localret_ent(libs__handle_options__option_implies_5_0,
		libs__handle_options__postprocess_options_2_13_0_i473);
MR_def_label(libs__handle_options__postprocess_options_2_13_0,473)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r2 = (MR_Integer) 537;
	MR_np_call_localret_ent(libs__globals__lookup_string_option_3_0,
		libs__handle_options__postprocess_options_2_13_0_i474);
MR_def_label(libs__handle_options__postprocess_options_2_13_0,474)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = (MR_Integer) 451;
	MR_np_call_localret_ent(libs__globals__lookup_maybe_string_option_3_0,
		libs__handle_options__postprocess_options_2_13_0_i475);
MR_def_label(libs__handle_options__postprocess_options_2_13_0,475)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(libs__handle_options__postprocess_options_2_13_0_i477);
	}
	MR_r1 = MR_sv(6);
	MR_r2 = (MR_Integer) 517;
	MR_GOTO_LAB(libs__handle_options__postprocess_options_2_13_0_i476);
MR_def_label(libs__handle_options__postprocess_options_2_13_0,477)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_ctfield(1, MR_r1, 0);
	MR_r1 = MR_sv(6);
	MR_np_call_localret_ent(libs__globals__get_options_2_0,
		libs__handle_options__postprocess_options_2_13_0_i478);
MR_def_label(libs__handle_options__postprocess_options_2_13_0,478)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(fn__libs__options__option_table_add_mercury_library_directory_2_0,
		libs__handle_options__postprocess_options_2_13_0_i479);
MR_def_label(libs__handle_options__postprocess_options_2_13_0,479)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(6);
	MR_np_call_localret_ent(libs__globals__set_options_3_0,
		libs__handle_options__postprocess_options_2_13_0_i480);
MR_def_label(libs__handle_options__postprocess_options_2_13_0,480)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_r2 = (MR_Integer) 441;
	MR_np_call_localret_ent(libs__globals__lookup_accumulating_option_3_0,
		libs__handle_options__postprocess_options_2_13_0_i481);
MR_def_label(libs__handle_options__postprocess_options_2_13_0,481)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = (MR_Word) MR_string_const("lib", 3);
	MR_np_call_localret_ent(fn__f_100_105_114_95_95_47_2_0,
		libs__handle_options__postprocess_options_2_13_0_i482);
MR_def_label(libs__handle_options__postprocess_options_2_13_0,482)
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
	MR_r1 = (MR_Integer) 441;
	MR_r3 = MR_sv(7);
	}
	MR_np_call_localret_ent(libs__globals__set_option_4_0,
		libs__handle_options__postprocess_options_2_13_0_i483);
MR_def_label(libs__handle_options__postprocess_options_2_13_0,483)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r2 = (MR_Integer) 442;
	MR_np_call_localret_ent(libs__globals__lookup_accumulating_option_3_0,
		libs__handle_options__postprocess_options_2_13_0_i484);
MR_def_label(libs__handle_options__postprocess_options_2_13_0,484)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_sv(4) = MR_tempr1;
	MR_r2 = (MR_Word) MR_string_const("lib", 3);
	}
	MR_np_call_localret_ent(fn__f_100_105_114_95_95_47_2_0,
		libs__handle_options__postprocess_options_2_13_0_i485);
MR_def_label(libs__handle_options__postprocess_options_2_13_0,485)
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
	MR_r1 = (MR_Integer) 442;
	MR_r3 = MR_sv(6);
	}
	MR_np_call_localret_ent(libs__globals__set_option_4_0,
		libs__handle_options__postprocess_options_2_13_0_i486);
MR_def_label(libs__handle_options__postprocess_options_2_13_0,486)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 517;
MR_def_label(libs__handle_options__postprocess_options_2_13_0,476)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_np_call_localret_ent(libs__globals__lookup_maybe_string_option_3_0,
		libs__handle_options__postprocess_options_2_13_0_i487);
MR_def_label(libs__handle_options__postprocess_options_2_13_0,487)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(libs__handle_options__postprocess_options_2_13_0_i489);
	}
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = (MR_Integer) 525;
	MR_GOTO_LAB(libs__handle_options__postprocess_options_2_13_0_i488);
MR_def_label(libs__handle_options__postprocess_options_2_13_0,489)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_sv(6) = MR_ctfield(1, MR_r1, 0);
	MR_r1 = MR_sv(7);
	MR_r2 = (MR_Integer) 397;
	MR_np_call_localret_ent(libs__globals__lookup_accumulating_option_3_0,
		libs__handle_options__postprocess_options_2_13_0_i490);
MR_def_label(libs__handle_options__postprocess_options_2_13_0,490)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_sv(6) = MR_tempr1;
	MR_r2 = (MR_Word) MR_string_const("conf", 4);
	}
	MR_np_call_localret_ent(fn__f_100_105_114_95_95_47_2_0,
		libs__handle_options__postprocess_options_2_13_0_i491);
MR_def_label(libs__handle_options__postprocess_options_2_13_0,491)
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
	MR_r1 = (MR_Integer) 397;
	MR_r3 = MR_sv(7);
	}
	MR_np_call_localret_ent(libs__globals__set_option_4_0,
		libs__handle_options__postprocess_options_2_13_0_i492);
MR_def_label(libs__handle_options__postprocess_options_2_13_0,492)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 525;
MR_def_label(libs__handle_options__postprocess_options_2_13_0,488)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_np_call_localret_ent(libs__globals__lookup_maybe_string_option_3_0,
		libs__handle_options__postprocess_options_2_13_0_i493);
MR_def_label(libs__handle_options__postprocess_options_2_13_0,493)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(libs__handle_options__postprocess_options_2_13_0_i494);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(1, MR_r1, 0);
	if ((strcmp((char *)MR_tempr1, (char *)(MR_Word) MR_string_const("", 0)) != 0)) {
		MR_GOTO_LAB(libs__handle_options__postprocess_options_2_13_0_i494);
	}
	if (MR_LTAGS_TESTR(MR_sv(4),0,0)) {
		MR_GOTO_LAB(libs__handle_options__postprocess_options_2_13_0_i498);
	}
	MR_r1 = (MR_Integer) 525;
	MR_r2 = (MR_Word) MR_TAG_COMMON(3,11,1);
	MR_r3 = MR_sv(6);
	}
	MR_np_call_localret_ent(libs__globals__set_option_4_0,
		libs__handle_options__postprocess_options_2_13_0_i502);
MR_def_label(libs__handle_options__postprocess_options_2_13_0,498)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(1, MR_sv(4), 0);
	MR_r2 = (MR_Word) MR_string_const("conf", 4);
	MR_np_call_localret_ent(fn__f_100_105_114_95_95_47_2_0,
		libs__handle_options__postprocess_options_2_13_0_i500);
MR_def_label(libs__handle_options__postprocess_options_2_13_0,500)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("Mercury.config", 14);
	MR_np_call_localret_ent(fn__f_100_105_114_95_95_47_2_0,
		libs__handle_options__postprocess_options_2_13_0_i501);
MR_def_label(libs__handle_options__postprocess_options_2_13_0,501)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 2);
	MR_r2 = MR_tempr2;
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 2;
	MR_tfield(3, MR_tempr2, 1) = MR_tempr1;
	MR_r1 = (MR_Integer) 525;
	MR_r3 = MR_sv(6);
	}
	MR_np_call_localret_ent(libs__globals__set_option_4_0,
		libs__handle_options__postprocess_options_2_13_0_i502);
MR_def_label(libs__handle_options__postprocess_options_2_13_0,502)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 445;
	MR_GOTO_LAB(libs__handle_options__postprocess_options_2_13_0_i503);
MR_def_label(libs__handle_options__postprocess_options_2_13_0,494)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(6);
	MR_r2 = (MR_Integer) 445;
MR_def_label(libs__handle_options__postprocess_options_2_13_0,503)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_r1;
	MR_np_call_localret_ent(libs__globals__lookup_accumulating_option_3_0,
		libs__handle_options__postprocess_options_2_13_0_i504);
MR_def_label(libs__handle_options__postprocess_options_2_13_0,504)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(9);
	MR_np_call_localret_ent(libs__handle_options__grade_directory_component_2_0,
		libs__handle_options__postprocess_options_2_13_0_i505);
MR_def_label(libs__handle_options__postprocess_options_2_13_0,505)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(4),0,0)) {
		MR_GOTO_LAB(libs__handle_options__postprocess_options_2_13_0_i507);
	}
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(9);
	MR_r2 = (MR_Integer) 531;
	MR_GOTO_LAB(libs__handle_options__postprocess_options_2_13_0_i506);
MR_def_label(libs__handle_options__postprocess_options_2_13_0,507)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(12,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(fn__libs__handle_options__IntroducedFrom__func__postprocess_options_2__1668__1_2_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_r1;
	MR_sv(6) = MR_r1;
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r4 = MR_sv(4);
	}
	MR_np_call_localret_ent(fn__list__map_2_0,
		libs__handle_options__postprocess_options_2_13_0_i508);
MR_def_label(libs__handle_options__postprocess_options_2_13_0,508)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_r1 = MR_sv(9);
	MR_r2 = (MR_Integer) 441;
	MR_np_call_localret_ent(libs__globals__lookup_accumulating_option_3_0,
		libs__handle_options__postprocess_options_2_13_0_i509);
MR_def_label(libs__handle_options__postprocess_options_2_13_0,509)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r3 = MR_sv(7);
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		libs__handle_options__postprocess_options_2_13_0_i510);
MR_def_label(libs__handle_options__postprocess_options_2_13_0,510)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_r2 = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 3;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_r1 = (MR_Integer) 441;
	MR_r3 = MR_sv(9);
	}
	MR_np_call_localret_ent(libs__globals__set_option_4_0,
		libs__handle_options__postprocess_options_2_13_0_i511);
MR_def_label(libs__handle_options__postprocess_options_2_13_0,511)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_r1;
	MR_r2 = (MR_Integer) 442;
	MR_np_call_localret_ent(libs__globals__lookup_accumulating_option_3_0,
		libs__handle_options__postprocess_options_2_13_0_i512);
MR_def_label(libs__handle_options__postprocess_options_2_13_0,512)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r3 = MR_sv(7);
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		libs__handle_options__postprocess_options_2_13_0_i513);
MR_def_label(libs__handle_options__postprocess_options_2_13_0,513)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_r2 = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 3;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_r1 = (MR_Integer) 442;
	MR_r3 = MR_sv(9);
	}
	MR_np_call_localret_ent(libs__globals__set_option_4_0,
		libs__handle_options__postprocess_options_2_13_0_i514);
MR_def_label(libs__handle_options__postprocess_options_2_13_0,514)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(12,1);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(fn__libs__handle_options__IntroducedFrom__func__postprocess_options_2__1683__1_2_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(6);
	MR_sv(9) = MR_r1;
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r4 = MR_sv(4);
	}
	MR_np_call_localret_ent(fn__list__map_2_0,
		libs__handle_options__postprocess_options_2_13_0_i515);
MR_def_label(libs__handle_options__postprocess_options_2_13_0,515)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_r1 = MR_sv(9);
	MR_r2 = (MR_Integer) 397;
	MR_np_call_localret_ent(libs__globals__lookup_accumulating_option_3_0,
		libs__handle_options__postprocess_options_2_13_0_i516);
MR_def_label(libs__handle_options__postprocess_options_2_13_0,516)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = MR_sv(7);
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		libs__handle_options__postprocess_options_2_13_0_i517);
MR_def_label(libs__handle_options__postprocess_options_2_13_0,517)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_r2 = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 3;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_r1 = (MR_Integer) 397;
	MR_r3 = MR_sv(9);
	}
	MR_np_call_localret_ent(libs__globals__set_option_4_0,
		libs__handle_options__postprocess_options_2_13_0_i518);
MR_def_label(libs__handle_options__postprocess_options_2_13_0,518)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(12,2);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(fn__libs__handle_options__IntroducedFrom__func__postprocess_options_2__1692__1_2_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(6);
	MR_sv(9) = MR_r1;
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r4 = MR_sv(4);
	}
	MR_np_call_localret_ent(fn__list__map_2_0,
		libs__handle_options__postprocess_options_2_13_0_i519);
MR_def_label(libs__handle_options__postprocess_options_2_13_0,519)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_r1 = MR_sv(9);
	MR_r2 = (MR_Integer) 530;
	MR_np_call_localret_ent(libs__globals__lookup_accumulating_option_3_0,
		libs__handle_options__postprocess_options_2_13_0_i520);
MR_def_label(libs__handle_options__postprocess_options_2_13_0,520)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = MR_sv(7);
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		libs__handle_options__postprocess_options_2_13_0_i521);
MR_def_label(libs__handle_options__postprocess_options_2_13_0,521)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_r2 = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 3;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_r1 = (MR_Integer) 530;
	MR_r3 = MR_sv(9);
	}
	MR_np_call_localret_ent(libs__globals__set_option_4_0,
		libs__handle_options__postprocess_options_2_13_0_i522);
MR_def_label(libs__handle_options__postprocess_options_2_13_0,522)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(12,3);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(fn__libs__handle_options__IntroducedFrom__func__postprocess_options_2__1702__1_2_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(6);
	MR_sv(7) = MR_r1;
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r4 = MR_sv(4);
	}
	MR_np_call_localret_ent(fn__list__map_2_0,
		libs__handle_options__postprocess_options_2_13_0_i523);
MR_def_label(libs__handle_options__postprocess_options_2_13_0,523)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = (MR_Integer) 453;
	MR_np_call_localret_ent(libs__globals__lookup_accumulating_option_3_0,
		libs__handle_options__postprocess_options_2_13_0_i524);
MR_def_label(libs__handle_options__postprocess_options_2_13_0,524)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r3 = MR_sv(4);
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		libs__handle_options__postprocess_options_2_13_0_i525);
MR_def_label(libs__handle_options__postprocess_options_2_13_0,525)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_r2 = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 3;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_r1 = (MR_Integer) 453;
	MR_r3 = MR_sv(7);
	}
	MR_np_call_localret_ent(libs__globals__set_option_4_0,
		libs__handle_options__postprocess_options_2_13_0_i526);
MR_def_label(libs__handle_options__postprocess_options_2_13_0,526)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 531;
MR_def_label(libs__handle_options__postprocess_options_2_13_0,506)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		libs__handle_options__postprocess_options_2_13_0_i527);
MR_def_label(libs__handle_options__postprocess_options_2_13_0,527)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(libs__handle_options__postprocess_options_2_13_0_i529);
	}
	MR_r1 = MR_sv(7);
	MR_r2 = (MR_Integer) 528;
	MR_GOTO_LAB(libs__handle_options__postprocess_options_2_13_0_i528);
MR_def_label(libs__handle_options__postprocess_options_2_13_0,529)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(7);
	MR_r2 = (MR_Integer) 530;
	MR_np_call_localret_ent(libs__globals__lookup_accumulating_option_3_0,
		libs__handle_options__postprocess_options_2_13_0_i530);
MR_def_label(libs__handle_options__postprocess_options_2_13_0,530)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = (MR_Integer) 529;
	MR_np_call_localret_ent(libs__globals__lookup_accumulating_option_3_0,
		libs__handle_options__postprocess_options_2_13_0_i531);
MR_def_label(libs__handle_options__postprocess_options_2_13_0,531)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		libs__handle_options__postprocess_options_2_13_0_i532);
MR_def_label(libs__handle_options__postprocess_options_2_13_0,532)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_r2 = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 3;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_r1 = (MR_Integer) 530;
	MR_r3 = MR_sv(7);
	}
	MR_np_call_localret_ent(libs__globals__set_option_4_0,
		libs__handle_options__postprocess_options_2_13_0_i533);
MR_def_label(libs__handle_options__postprocess_options_2_13_0,533)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 528;
MR_def_label(libs__handle_options__postprocess_options_2_13_0,528)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(13) = MR_r1;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		libs__handle_options__postprocess_options_2_13_0_i534);
MR_def_label(libs__handle_options__postprocess_options_2_13_0,534)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(13);
	MR_r2 = (MR_Integer) 447;
	MR_np_call_localret_ent(libs__globals__lookup_accumulating_option_3_0,
		libs__handle_options__postprocess_options_2_13_0_i535);
MR_def_label(libs__handle_options__postprocess_options_2_13_0,535)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_r1 = MR_sv(13);
	MR_r2 = (MR_Integer) 530;
	MR_np_call_localret_ent(libs__globals__lookup_accumulating_option_3_0,
		libs__handle_options__postprocess_options_2_13_0_i536);
MR_def_label(libs__handle_options__postprocess_options_2_13_0,536)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_sv(9) = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(4,1);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(fn__libs__handle_options__IntroducedFrom__func__postprocess_options_2__1738__1_3_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(6);
	if (MR_INT_NE(MR_sv(4),0)) {
		MR_GOTO_LAB(libs__handle_options__postprocess_options_2_13_0_i538);
	}
	MR_r3 = MR_r1;
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = MR_sv(7);
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		libs__handle_options__postprocess_options_2_13_0_i539);
MR_def_label(libs__handle_options__postprocess_options_2_13_0,539)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_r2 = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 3;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_r1 = (MR_Integer) 530;
	MR_r3 = MR_sv(13);
	}
	MR_np_call_localret_ent(libs__globals__set_option_4_0,
		libs__handle_options__postprocess_options_2_13_0_i540);
MR_def_label(libs__handle_options__postprocess_options_2_13_0,540)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r2 = (MR_Integer) 441;
	MR_np_call_localret_ent(libs__globals__lookup_accumulating_option_3_0,
		libs__handle_options__postprocess_options_2_13_0_i541);
MR_def_label(libs__handle_options__postprocess_options_2_13_0,541)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = (MR_Integer) 453;
	MR_np_call_localret_ent(libs__globals__lookup_accumulating_option_3_0,
		libs__handle_options__postprocess_options_2_13_0_i542);
MR_def_label(libs__handle_options__postprocess_options_2_13_0,542)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = MR_sv(7);
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		libs__handle_options__postprocess_options_2_13_0_i543);
MR_def_label(libs__handle_options__postprocess_options_2_13_0,543)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = MR_sv(7);
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		libs__handle_options__postprocess_options_2_13_0_i558);
MR_def_label(libs__handle_options__postprocess_options_2_13_0,538)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("Mercury", 7);
	MR_r2 = MR_ctfield(0, MR_sv(9), 4);
	MR_np_call_localret_ent(fn__f_100_105_114_95_95_47_2_0,
		libs__handle_options__postprocess_options_2_13_0_i545);
MR_def_label(libs__handle_options__postprocess_options_2_13_0,545)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(fn__f_100_105_114_95_95_47_2_0,
		libs__handle_options__postprocess_options_2_13_0_i546);
MR_def_label(libs__handle_options__postprocess_options_2_13_0,546)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r3 = MR_sv(9);
	MR_r4 = MR_sv(7);
	MR_np_call_localret_ent(fn__list__map_2_0,
		libs__handle_options__postprocess_options_2_13_0_i547);
MR_def_label(libs__handle_options__postprocess_options_2_13_0,547)
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
		libs__handle_options__postprocess_options_2_13_0_i548);
MR_def_label(libs__handle_options__postprocess_options_2_13_0,548)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(0,4);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(libs__handle_options__IntroducedFrom__pred__postprocess_options_2__1759__1_2_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 4);
	MR_r2 = MR_tempr2;
	MR_tfield(0, MR_tempr2, 0) = (MR_Word) MR_COMMON(0,5);
	MR_tfield(0, MR_tempr2, 1) = (MR_Word) MR_ENTRY_AP(libs__handle_options__IntroducedFrom__pred__postprocess_options_2__1759__2_2_0);
	MR_tfield(0, MR_tempr2, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr2, 3) = MR_tempr1;
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r3 = MR_sv(6);
	}
	MR_np_call_localret_ent(fn__list__filter_2_0,
		libs__handle_options__postprocess_options_2_13_0_i549);
MR_def_label(libs__handle_options__postprocess_options_2_13_0,549)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		libs__handle_options__postprocess_options_2_13_0_i550);
MR_def_label(libs__handle_options__postprocess_options_2_13_0,550)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = MR_sv(14);
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		libs__handle_options__postprocess_options_2_13_0_i551);
MR_def_label(libs__handle_options__postprocess_options_2_13_0,551)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_r2 = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 3;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_r1 = (MR_Integer) 530;
	MR_r3 = MR_sv(13);
	}
	MR_np_call_localret_ent(libs__globals__set_option_4_0,
		libs__handle_options__postprocess_options_2_13_0_i552);
MR_def_label(libs__handle_options__postprocess_options_2_13_0,552)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r2 = (MR_Integer) 441;
	MR_np_call_localret_ent(libs__globals__lookup_accumulating_option_3_0,
		libs__handle_options__postprocess_options_2_13_0_i553);
MR_def_label(libs__handle_options__postprocess_options_2_13_0,553)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = (MR_Integer) 453;
	MR_np_call_localret_ent(libs__globals__lookup_accumulating_option_3_0,
		libs__handle_options__postprocess_options_2_13_0_i554);
MR_def_label(libs__handle_options__postprocess_options_2_13_0,554)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(12,4);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(fn__libs__handle_options__IntroducedFrom__func__postprocess_options_2__1779__1_2_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(9);
	MR_sv(13) = MR_r1;
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r4 = MR_sv(7);
	}
	MR_np_call_localret_ent(fn__list__map_2_0,
		libs__handle_options__postprocess_options_2_13_0_i555);
MR_def_label(libs__handle_options__postprocess_options_2_13_0,555)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r3 = MR_sv(2);
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		libs__handle_options__postprocess_options_2_13_0_i556);
MR_def_label(libs__handle_options__postprocess_options_2_13_0,556)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(12,5);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(fn__libs__handle_options__IntroducedFrom__func__postprocess_options_2__1783__1_2_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(9);
	MR_sv(2) = MR_r1;
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r4 = MR_sv(7);
	}
	MR_np_call_localret_ent(fn__list__map_2_0,
		libs__handle_options__postprocess_options_2_13_0_i557);
MR_def_label(libs__handle_options__postprocess_options_2_13_0,557)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r3 = MR_sv(13);
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		libs__handle_options__postprocess_options_2_13_0_i558);
MR_def_label(libs__handle_options__postprocess_options_2_13_0,558)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_r2 = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 3;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r3 = MR_sv(6);
	MR_r1 = (MR_Integer) 441;
	}
	MR_np_call_localret_ent(libs__globals__set_option_4_0,
		libs__handle_options__postprocess_options_2_13_0_i559);
MR_def_label(libs__handle_options__postprocess_options_2_13_0,559)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_r2 = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 3;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(2);
	MR_r3 = MR_r1;
	MR_r1 = (MR_Integer) 453;
	}
	MR_np_call_localret_ent(libs__globals__set_option_4_0,
		libs__handle_options__postprocess_options_2_13_0_i560);
MR_def_label(libs__handle_options__postprocess_options_2_13_0,560)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(13) = MR_r1;
	MR_r2 = (MR_Integer) 527;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		libs__handle_options__postprocess_options_2_13_0_i561);
MR_def_label(libs__handle_options__postprocess_options_2_13_0,561)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(4),1)) {
		MR_GOTO_LAB(libs__handle_options__postprocess_options_2_13_0_i564);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_sv(2) = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(12,6);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(fn__libs__handle_options__IntroducedFrom__func__postprocess_options_2__1806__1_2_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(9);
	MR_r1 = MR_sv(13);
	MR_GOTO_LAB(libs__handle_options__postprocess_options_2_13_0_i567);
	}
MR_def_label(libs__handle_options__postprocess_options_2_13_0,564)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(libs__handle_options__postprocess_options_2_13_0_i563);
	}
	MR_sv(2) = (MR_Word) MR_TAG_COMMON(0,1,4);
	MR_r1 = MR_sv(13);
MR_def_label(libs__handle_options__postprocess_options_2_13_0,567)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(13) = MR_r1;
	MR_r2 = (MR_Integer) 397;
	MR_np_call_localret_ent(libs__globals__lookup_accumulating_option_3_0,
		libs__handle_options__postprocess_options_2_13_0_i568);
MR_def_label(libs__handle_options__postprocess_options_2_13_0,568)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_np_call_localret_ent(fn__dir__this_directory_0_0,
		libs__handle_options__postprocess_options_2_13_0_i569);
MR_def_label(libs__handle_options__postprocess_options_2_13_0,569)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(libs__handle_options__postprocess_options_2_13_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_1),
		mercury__libs__handle_options__postprocess_options_2_13_0_i570);
MR_def_label(libs__handle_options__postprocess_options_2_13_0,570)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r4 = MR_sv(7);
	MR_np_call_localret_ent(fn__list__map_2_0,
		libs__handle_options__postprocess_options_2_13_0_i571);
MR_def_label(libs__handle_options__postprocess_options_2_13_0,571)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_np_call_localret_ent(fn__dir__this_directory_0_0,
		libs__handle_options__postprocess_options_2_13_0_i572);
MR_def_label(libs__handle_options__postprocess_options_2_13_0,572)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = MR_sv(6);
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		libs__handle_options__postprocess_options_2_13_0_i573);
MR_def_label(libs__handle_options__postprocess_options_2_13_0,573)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(4);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr3, 3, (MR_Integer) 2);
	MR_r2 = MR_tempr3;
	MR_tfield(3, MR_tempr3, 0) = (MR_Integer) 3;
	MR_tfield(3, MR_tempr3, 1) = MR_tempr2;
	MR_r1 = (MR_Integer) 397;
	MR_r3 = MR_sv(13);
	}
	MR_np_call_localret_ent(libs__globals__set_option_4_0,
		libs__handle_options__postprocess_options_2_13_0_i574);
MR_def_label(libs__handle_options__postprocess_options_2_13_0,574)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(12);
	MR_r4 = MR_r1;
	MR_r1 = (MR_Integer) 259;
	MR_r2 = (MR_Integer) 11;
	MR_GOTO_LAB(libs__handle_options__postprocess_options_2_13_0_i575);
MR_def_label(libs__handle_options__postprocess_options_2_13_0,563)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(12);
	MR_r4 = MR_sv(13);
	MR_r1 = (MR_Integer) 259;
	MR_r2 = (MR_Integer) 11;
MR_def_label(libs__handle_options__postprocess_options_2_13_0,575)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(12) = MR_r3;
	MR_np_call_localret_ent(libs__handle_options__option_implies_5_0,
		libs__handle_options__postprocess_options_2_13_0_i576);
MR_def_label(libs__handle_options__postprocess_options_2_13_0,576)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = (MR_Integer) 22;
	MR_r2 = (MR_Integer) 196;
	MR_r3 = MR_sv(11);
	MR_r4 = (MR_Word) MR_string_const("--warn-non-tail-recursion requires --high-level-code", 52);
	MR_r5 = MR_sv(2);
	MR_r6 = MR_sv(10);
	MR_np_call_localret_ent(libs__handle_options__option_requires_7_0,
		libs__handle_options__postprocess_options_2_13_0_i577);
MR_def_label(libs__handle_options__postprocess_options_2_13_0,577)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r6 = MR_r1;
	MR_r1 = (MR_Integer) 22;
	MR_r2 = (MR_Integer) 367;
	MR_r3 = MR_sv(11);
	MR_r4 = (MR_Word) MR_string_const("--warn-non-tail-recursion requires --optimize-tailcalls", 55);
	MR_r5 = MR_sv(2);
	MR_np_call_localret_ent(libs__handle_options__option_requires_7_0,
		libs__handle_options__postprocess_options_2_13_0_i578);
MR_def_label(libs__handle_options__postprocess_options_2_13_0,578)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r6 = MR_r1;
	MR_r1 = (MR_Integer) 22;
	MR_r2 = (MR_Integer) 79;
	MR_r3 = MR_sv(12);
	MR_r4 = (MR_Word) MR_string_const("--warn-non-tail-recursion is incompatible with --errorcheck-only", 64);
	MR_r5 = MR_sv(2);
	MR_np_call_localret_ent(libs__handle_options__option_requires_7_0,
		libs__handle_options__postprocess_options_2_13_0_i579);
MR_def_label(libs__handle_options__postprocess_options_2_13_0,579)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_sv(1),
		MR_LABEL_AP(libs__handle_options__postprocess_options_2_13_0_i587) MR_AND
		MR_LABEL_AP(libs__handle_options__postprocess_options_2_13_0_i582) MR_AND
		MR_LABEL_AP(libs__handle_options__postprocess_options_2_13_0_i584) MR_AND
		MR_LABEL_AP(libs__handle_options__postprocess_options_2_13_0_i587) MR_AND
		MR_LABEL_AP(libs__handle_options__postprocess_options_2_13_0_i587) MR_AND
		MR_LABEL_AP(libs__handle_options__postprocess_options_2_13_0_i588));
MR_def_label(libs__handle_options__postprocess_options_2_13_0,582)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(2);
	MR_sv(2) = (MR_Word) MR_TAG_COMMON(1,10,5);
	MR_sv(4) = MR_r1;
	MR_r1 = (MR_Integer) 290;
	MR_r2 = MR_sv(12);
	MR_np_call_localret_ent(libs__globals__set_option_4_0,
		libs__handle_options__postprocess_options_2_13_0_i589);
MR_def_label(libs__handle_options__postprocess_options_2_13_0,584)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(2);
	MR_sv(2) = (MR_Word) MR_TAG_COMMON(1,10,6);
	MR_sv(4) = MR_r1;
	MR_r1 = (MR_Integer) 290;
	MR_r2 = MR_sv(12);
	MR_np_call_localret_ent(libs__globals__set_option_4_0,
		libs__handle_options__postprocess_options_2_13_0_i589);
MR_def_label(libs__handle_options__postprocess_options_2_13_0,587)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_sv(2) = (MR_Word) MR_TAG_COMMON(1,10,2);
	MR_r2 = (MR_Integer) 207;
	MR_GOTO_LAB(libs__handle_options__postprocess_options_2_13_0_i580);
MR_def_label(libs__handle_options__postprocess_options_2_13_0,588)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(2);
	MR_sv(2) = (MR_Word) MR_TAG_COMMON(1,10,7);
	MR_sv(4) = MR_r1;
	MR_r1 = (MR_Integer) 290;
	MR_r2 = MR_sv(12);
	MR_np_call_localret_ent(libs__globals__set_option_4_0,
		libs__handle_options__postprocess_options_2_13_0_i589);
MR_def_label(libs__handle_options__postprocess_options_2_13_0,589)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 207;
MR_def_label(libs__handle_options__postprocess_options_2_13_0,580)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_np_call_localret_ent(libs__globals__lookup_accumulating_option_3_0,
		libs__handle_options__postprocess_options_2_13_0_i590);
MR_def_label(libs__handle_options__postprocess_options_2_13_0,590)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(libs__handle_options__postprocess_options_2_13_0_i592);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_r2 = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 3;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(2);
	MR_r1 = (MR_Integer) 207;
	MR_r3 = MR_sv(6);
	}
	MR_np_call_localret_ent(libs__globals__set_option_4_0,
		libs__handle_options__postprocess_options_2_13_0_i593);
MR_def_label(libs__handle_options__postprocess_options_2_13_0,593)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 246;
	MR_GOTO_LAB(libs__handle_options__postprocess_options_2_13_0_i591);
MR_def_label(libs__handle_options__postprocess_options_2_13_0,592)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(6);
	MR_r2 = (MR_Integer) 246;
MR_def_label(libs__handle_options__postprocess_options_2_13_0,591)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_np_call_localret_ent(libs__globals__lookup_int_option_3_0,
		libs__handle_options__postprocess_options_2_13_0_i594);
MR_def_label(libs__handle_options__postprocess_options_2_13_0,594)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_GE(MR_r1,0)) {
		MR_GOTO_LAB(libs__handle_options__postprocess_options_2_13_0_i595);
	}
	if (MR_INT_NE(MR_sv(8),0)) {
		MR_GOTO_LAB(libs__handle_options__postprocess_options_2_13_0_i597);
	}
	MR_r1 = (MR_Integer) 246;
	MR_r2 = (MR_Word) MR_TAG_COMMON(2,8,3);
	MR_r3 = MR_sv(2);
	MR_np_call_localret_ent(libs__globals__set_option_4_0,
		libs__handle_options__postprocess_options_2_13_0_i599);
MR_def_label(libs__handle_options__postprocess_options_2_13_0,597)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 246;
	MR_r2 = (MR_Word) MR_TAG_COMMON(2,8,4);
	MR_r3 = MR_sv(2);
	MR_np_call_localret_ent(libs__globals__set_option_4_0,
		libs__handle_options__postprocess_options_2_13_0_i599);
MR_def_label(libs__handle_options__postprocess_options_2_13_0,599)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(11);
	MR_r3 = MR_r1;
	MR_GOTO_LAB(libs__handle_options__postprocess_options_2_13_0_i600);
MR_def_label(libs__handle_options__postprocess_options_2_13_0,595)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(11);
	MR_r3 = MR_sv(2);
MR_def_label(libs__handle_options__postprocess_options_2_13_0,600)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_EQ(MR_sv(1),0)) {
		MR_GOTO_LAB(libs__handle_options__postprocess_options_2_13_0_i602);
	}
	if (MR_INT_NE(MR_sv(1),3)) {
		MR_GOTO_LAB(libs__handle_options__postprocess_options_2_13_0_i601);
	}
MR_def_label(libs__handle_options__postprocess_options_2_13_0,602)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_EQ(MR_sv(3),1)) {
		MR_GOTO_LAB(libs__handle_options__postprocess_options_2_13_0_i605);
	}
	if (MR_INT_NE(MR_sv(3),2)) {
		MR_GOTO_LAB(libs__handle_options__postprocess_options_2_13_0_i601);
	}
MR_def_label(libs__handle_options__postprocess_options_2_13_0,605)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_LT(MR_sv(5),2)) {
		MR_GOTO_LAB(libs__handle_options__postprocess_options_2_13_0_i601);
	}
	MR_r1 = (MR_Integer) 214;
	MR_np_call_localret_ent(libs__globals__set_option_4_0,
		libs__handle_options__postprocess_options_2_13_0_i610);
MR_def_label(libs__handle_options__postprocess_options_2_13_0,601)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 214;
	MR_r2 = MR_sv(12);
	MR_np_call_localret_ent(libs__globals__set_option_4_0,
		libs__handle_options__postprocess_options_2_13_0_i610);
MR_def_label(libs__handle_options__postprocess_options_2_13_0,610)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(8),0)) {
		MR_GOTO_LAB(libs__handle_options__postprocess_options_2_13_0_i611);
	}
	MR_np_call_localret_ent(libs__handle_options__postprocess_options_lowlevel_2_0,
		libs__handle_options__postprocess_options_2_13_0_i611);
MR_def_label(libs__handle_options__postprocess_options_2_13_0,611)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(libs__globals__io_set_globals_3_0,
		libs__handle_options__postprocess_options_2_13_0_i614);
MR_def_label(libs__handle_options__postprocess_options_2_13_0,614)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	MR_decr_sp_and_return(15);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(libs__handle_options_module14)
	MR_init_entry1(libs__handle_options__postprocess_options_4_0);
	MR_init_label3(libs__handle_options__postprocess_options_4_0,4,6,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(libs__handle_options__postprocess_options_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,0)) {
		MR_GOTO_LAB(libs__handle_options__postprocess_options_4_0_i3);
	}
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_r1 = MR_ctfield(0, MR_r1, 0);
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_np_call_localret_ent(libs__handle_options__check_option_values_12_0,
		libs__handle_options__postprocess_options_4_0_i4);
MR_def_label(libs__handle_options__postprocess_options_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r10,0,0)) {
		MR_GOTO_LAB(libs__handle_options__postprocess_options_4_0_i6);
	}
	MR_r10 = (MR_Word) MR_tbmkword(0, 0);
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_np_tailcall_ent(libs__handle_options__postprocess_options_2_13_0);
MR_def_label(libs__handle_options__postprocess_options_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r10;
	MR_decr_sp_and_return(1);
MR_def_label(libs__handle_options__postprocess_options_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_ctfield(1, MR_r1, 0);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_tempr1;
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(libs__globals__io_lookup_bool_option_4_0);
MR_decl_entry(libs__globals__io_get_target_3_0);
MR_decl_entry(bool__or_list_2_0);
MR_decl_entry(bool__not_2_0);

MR_BEGIN_MODULE(libs__handle_options_module15)
	MR_init_entry1(libs__handle_options__handle_options_7_0);
	MR_init_label8(libs__handle_options__handle_options_7_0,2,3,6,7,8,9,10,11)
	MR_init_label8(libs__handle_options__handle_options_7_0,12,13,14,15,16,17,18,19)
	MR_init_label8(libs__handle_options__handle_options_7_0,20,23,24,25,26,30,31,27)
	MR_init_label1(libs__handle_options__handle_options_7_0,5)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__libs__handle_options__handle_options_7_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(18);
	MR_sv(18) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(libs__handle_options__process_options_6_0,
		libs__handle_options__handle_options_7_0_i2);
MR_def_label(libs__handle_options__handle_options_7_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_sv(3) = MR_r2;
	MR_r1 = MR_r3;
	MR_np_call_localret_ent(libs__handle_options__postprocess_options_4_0,
		libs__handle_options__handle_options_7_0_i3);
MR_def_label(libs__handle_options__handle_options_7_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(libs__handle_options__handle_options_7_0_i5);
	}
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Integer) 74;
	MR_np_call_localret_ent(libs__globals__io_lookup_bool_option_4_0,
		libs__handle_options__handle_options_7_0_i6);
MR_def_label(libs__handle_options__handle_options_7_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = (MR_Integer) 73;
	MR_np_call_localret_ent(libs__globals__io_lookup_bool_option_4_0,
		libs__handle_options__handle_options_7_0_i7);
MR_def_label(libs__handle_options__handle_options_7_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = (MR_Integer) 66;
	MR_np_call_localret_ent(libs__globals__io_lookup_bool_option_4_0,
		libs__handle_options__handle_options_7_0_i8);
MR_def_label(libs__handle_options__handle_options_7_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = (MR_Integer) 67;
	MR_np_call_localret_ent(libs__globals__io_lookup_bool_option_4_0,
		libs__handle_options__handle_options_7_0_i9);
MR_def_label(libs__handle_options__handle_options_7_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_r1 = (MR_Integer) 65;
	MR_np_call_localret_ent(libs__globals__io_lookup_bool_option_4_0,
		libs__handle_options__handle_options_7_0_i10);
MR_def_label(libs__handle_options__handle_options_7_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_r1 = (MR_Integer) 68;
	MR_np_call_localret_ent(libs__globals__io_lookup_bool_option_4_0,
		libs__handle_options__handle_options_7_0_i11);
MR_def_label(libs__handle_options__handle_options_7_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_r1;
	MR_r1 = (MR_Integer) 69;
	MR_np_call_localret_ent(libs__globals__io_lookup_bool_option_4_0,
		libs__handle_options__handle_options_7_0_i12);
MR_def_label(libs__handle_options__handle_options_7_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(10) = MR_r1;
	MR_r1 = (MR_Integer) 70;
	MR_np_call_localret_ent(libs__globals__io_lookup_bool_option_4_0,
		libs__handle_options__handle_options_7_0_i13);
MR_def_label(libs__handle_options__handle_options_7_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(11) = MR_r1;
	MR_r1 = (MR_Integer) 71;
	MR_np_call_localret_ent(libs__globals__io_lookup_bool_option_4_0,
		libs__handle_options__handle_options_7_0_i14);
MR_def_label(libs__handle_options__handle_options_7_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(12) = MR_r1;
	MR_r1 = (MR_Integer) 77;
	MR_np_call_localret_ent(libs__globals__io_lookup_bool_option_4_0,
		libs__handle_options__handle_options_7_0_i15);
MR_def_label(libs__handle_options__handle_options_7_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(13) = MR_r1;
	MR_r1 = (MR_Integer) 78;
	MR_np_call_localret_ent(libs__globals__io_lookup_bool_option_4_0,
		libs__handle_options__handle_options_7_0_i16);
MR_def_label(libs__handle_options__handle_options_7_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(14) = MR_r1;
	MR_r1 = (MR_Integer) 79;
	MR_np_call_localret_ent(libs__globals__io_lookup_bool_option_4_0,
		libs__handle_options__handle_options_7_0_i17);
MR_def_label(libs__handle_options__handle_options_7_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(15) = MR_r1;
	MR_r1 = (MR_Integer) 80;
	MR_np_call_localret_ent(libs__globals__io_lookup_bool_option_4_0,
		libs__handle_options__handle_options_7_0_i18);
MR_def_label(libs__handle_options__handle_options_7_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(16) = MR_r1;
	MR_np_call_localret_ent(libs__globals__io_get_target_3_0,
		libs__handle_options__handle_options_7_0_i19);
MR_def_label(libs__handle_options__handle_options_7_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(libs__handle_options__handle_options_7_0_i20);
	}
	MR_sv(17) = (MR_Integer) 1;
	MR_r1 = (MR_Integer) 81;
	MR_np_call_localret_ent(libs__globals__io_lookup_bool_option_4_0,
		libs__handle_options__handle_options_7_0_i23);
MR_def_label(libs__handle_options__handle_options_7_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(17) = (MR_Integer) 0;
	MR_r1 = (MR_Integer) 81;
	MR_np_call_localret_ent(libs__globals__io_lookup_bool_option_4_0,
		libs__handle_options__handle_options_7_0_i23);
MR_def_label(libs__handle_options__handle_options_7_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
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
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = MR_sv(4);
	MR_tfield(1, MR_r1, 1) = MR_tempr2;
	}
	MR_np_call_localret_ent(bool__or_list_2_0,
		libs__handle_options__handle_options_7_0_i24);
MR_def_label(libs__handle_options__handle_options_7_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(bool__not_2_0,
		libs__handle_options__handle_options_7_0_i25);
MR_def_label(libs__handle_options__handle_options_7_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = (MR_Integer) 88;
	MR_np_call_localret_ent(libs__globals__io_lookup_bool_option_4_0,
		libs__handle_options__handle_options_7_0_i26);
MR_def_label(libs__handle_options__handle_options_7_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(libs__handle_options__handle_options_7_0_i27);
	}
	if (MR_INT_NE(MR_sv(4),1)) {
		MR_GOTO_LAB(libs__handle_options__handle_options_7_0_i27);
	}
	MR_np_call_localret_ent(libs__globals__io_get_globals_3_0,
		libs__handle_options__handle_options_7_0_i30);
MR_def_label(libs__handle_options__handle_options_7_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("linking", 7);
	MR_np_call_localret_ent(libs__handle_options__disable_smart_recompilation_5_0,
		libs__handle_options__handle_options_7_0_i31);
MR_def_label(libs__handle_options__handle_options_7_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(libs__globals__io_set_globals_3_0,
		libs__handle_options__handle_options_7_0_i27);
MR_def_label(libs__handle_options__handle_options_7_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(4);
	MR_decr_sp_and_return(18);
MR_def_label(libs__handle_options__handle_options_7_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = (MR_Integer) 0;
	MR_decr_sp_and_return(18);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(library__version_1_0);
MR_decl_entry(io__write_strings_3_0);

MR_BEGIN_MODULE(libs__handle_options_module16)
	MR_init_entry1(libs__handle_options__display_compiler_version_2_0);
	MR_init_label1(libs__handle_options__display_compiler_version_2_0,2)
MR_BEGIN_CODE

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
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_TAG_COMMON(1,10,9);
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

MR_decl_entry(libs__globals__io_printing_usage_3_0);

MR_BEGIN_MODULE(libs__handle_options_module17)
	MR_init_entry1(libs__handle_options__usage_2_0);
	MR_init_label3(libs__handle_options__usage_2_0,2,5,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__libs__handle_options__usage_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(libs__globals__io_printing_usage_3_0,
		libs__handle_options__usage_2_0_i2);
MR_def_label(libs__handle_options__usage_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(libs__handle_options__usage_2_0_i3);
	}
	MR_np_call_localret_ent(libs__handle_options__display_compiler_version_2_0,
		libs__handle_options__usage_2_0_i5);
MR_def_label(libs__handle_options__usage_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(1,10,11);
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_np_tailcall_ent(io__write_strings_3_0);
MR_def_label(libs__handle_options__usage_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(1);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(parse_tree__error_util__write_error_plain_with_progname_4_0);
extern const MR_TypeCtorInfo_Struct mercury_data_io__type_ctor_info_state_0;
MR_decl_entry(list__foldl_4_0);

MR_BEGIN_MODULE(libs__handle_options_module18)
	MR_init_entry1(libs__handle_options__usage_errors_3_0);
	MR_init_label3(libs__handle_options__usage_errors_3_0,2,3,4)
MR_BEGIN_CODE

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
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(4,2);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(parse_tree__error_util__write_error_plain_with_progname_4_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_r1;
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = (MR_Word) MR_IO_CTOR_ADDR;
	MR_r4 = MR_sv(1);
	}
	MR_np_call_localret_ent(list__foldl_4_0,
		libs__handle_options__usage_errors_3_0_i3);
MR_def_label(libs__handle_options__usage_errors_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_np_call_localret_ent(io__set_exit_status_3_0,
		libs__handle_options__usage_errors_3_0_i4);
MR_def_label(libs__handle_options__usage_errors_3_0,4)
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

MR_BEGIN_MODULE(libs__handle_options_module19)
	MR_init_entry1(libs__handle_options__long_usage_2_0);
	MR_init_label8(libs__handle_options__long_usage_2_0,2,3,4,5,6,7,8,9)
MR_BEGIN_CODE

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
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_TAG_COMMON(1,10,12);
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = (MR_Word) MR_string_const("Mercury Compiler, version ", 26);
	MR_tfield(1, MR_r1, 1) = MR_tempr1;
	}
	MR_np_call_localret_ent(io__write_strings_3_0,
		libs__handle_options__long_usage_2_0_i3);
MR_def_label(libs__handle_options__long_usage_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("Copyright (C) 1993-2007 The University of Melbourne\n", 52);
	MR_np_call_localret_ent(io__write_string_3_0,
		libs__handle_options__long_usage_2_0_i4);
MR_def_label(libs__handle_options__long_usage_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("Usage: mmc [<options>] <arguments>\n", 35);
	MR_np_call_localret_ent(io__write_string_3_0,
		libs__handle_options__long_usage_2_0_i5);
MR_def_label(libs__handle_options__long_usage_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("Arguments:\n", 11);
	MR_np_call_localret_ent(io__write_string_3_0,
		libs__handle_options__long_usage_2_0_i6);
MR_def_label(libs__handle_options__long_usage_2_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("\tArguments ending in \140.m\' are assumed to be source file names.\n", 63);
	MR_np_call_localret_ent(io__write_string_3_0,
		libs__handle_options__long_usage_2_0_i7);
MR_def_label(libs__handle_options__long_usage_2_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("\tArguments that do not end in \140.m\' are assumed to be module names.\n", 67);
	MR_np_call_localret_ent(io__write_string_3_0,
		libs__handle_options__long_usage_2_0_i8);
MR_def_label(libs__handle_options__long_usage_2_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("Options:\n", 9);
	MR_np_call_localret_ent(io__write_string_3_0,
		libs__handle_options__long_usage_2_0_i9);
MR_def_label(libs__handle_options__long_usage_2_0,9)
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

MR_BEGIN_MODULE(libs__handle_options_module20)
	MR_init_entry1(libs__handle_options__split_grade_string_2_2_0);
	MR_init_label6(libs__handle_options__split_grade_string_2_2_0,25,4,5,7,8,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(libs__handle_options__split_grade_string_2_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(libs__handle_options__split_grade_string_2_2_0_i25);
	}
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__handle_options__split_grade_string_2_2_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_r3 = MR_r1;
	MR_r1 = (MR_Word) MR_CHAR_CTOR_ADDR;
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,15,0);
	MR_np_call_localret_ent(list__takewhile_4_0,
		libs__handle_options__split_grade_string_2_2_0_i4);
MR_def_label(libs__handle_options__split_grade_string_2_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_np_call_localret_ent(string__from_char_list_2_0,
		libs__handle_options__split_grade_string_2_2_0_i5);
MR_def_label(libs__handle_options__split_grade_string_2_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,0)) {
		MR_GOTO_LAB(libs__handle_options__split_grade_string_2_2_0_i7);
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
MR_def_label(libs__handle_options__split_grade_string_2_2_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_ctfield(1, MR_tempr1, 1);
	}
	MR_np_localcall_lab(libs__handle_options__split_grade_string_2_2_0,
		libs__handle_options__split_grade_string_2_2_0_i8);
MR_def_label(libs__handle_options__split_grade_string_2_2_0,8)
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
MR_decl_entry(list__foldl2_6_2);

MR_BEGIN_MODULE(libs__handle_options_module21)
	MR_init_entry1(libs__handle_options__convert_grade_option_3_0);
	MR_init_label5(libs__handle_options__convert_grade_option_3_0,2,3,4,6,1)
MR_BEGIN_CODE

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
	MR_r5 = MR_r2;
	MR_r2 = MR_sv(3);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,1,5);
	MR_r4 = (MR_Word) MR_TAG_COMMON(0,1,6);
	MR_np_call_localret_ent(solutions__aggregate_4_0,
		libs__handle_options__convert_grade_option_3_0_i2);
MR_def_label(libs__handle_options__convert_grade_option_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	}
	MR_np_call_localret_ent(string__to_char_list_2_0,
		libs__handle_options__convert_grade_option_3_0_i3);
MR_def_label(libs__handle_options__convert_grade_option_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(libs__handle_options__split_grade_string_2_2_0,
		libs__handle_options__convert_grade_option_3_0_i4);
MR_def_label(libs__handle_options__convert_grade_option_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(libs__handle_options__convert_grade_option_3_0_i1);
	}
	MR_sv(2) = MR_r2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(libs__handle_options, grade_component);
	MR_np_call_localret_ent(set__init_1_0,
		libs__handle_options__convert_grade_option_3_0_i6);
MR_def_label(libs__handle_options__convert_grade_option_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r7 = MR_r1;
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = MR_sv(3);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,3,1);
	MR_r4 = (MR_Word) MR_TAG_COMMON(0,1,7);
	MR_r5 = MR_sv(2);
	MR_r6 = MR_sv(1);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(list__foldl2_6_2);
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

MR_decl_entry(list__foldl_4_1);

MR_BEGIN_MODULE(libs__handle_options_module22)
	MR_init_entry1(libs__handle_options__add_option_list_3_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(libs__handle_options__add_option_list_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,2,3);
	MR_r5 = MR_r2;
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,2,4);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,1,8);
	MR_np_tailcall_ent(list__foldl_4_1);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(libs__handle_options_module23)
	MR_init_entry1(libs__handle_options__grade_component_table_5_0);
	MR_init_label8(libs__handle_options__grade_component_table_5_0,3,50,5,6,7,8,9,10)
	MR_init_label8(libs__handle_options__grade_component_table_5_0,11,12,13,14,15,16,17,18)
	MR_init_label8(libs__handle_options__grade_component_table_5_0,19,20,21,22,23,24,25,26)
	MR_init_label8(libs__handle_options__grade_component_table_5_0,27,28,29,30,31,32,33,34)
	MR_init_label8(libs__handle_options__grade_component_table_5_0,35,36,37,38,39,40,41,42)
	MR_init_label6(libs__handle_options__grade_component_table_5_0,43,44,45,46,47,48)
MR_BEGIN_CODE

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
	MR_Word MR_tempr1;
	MR_tempr1 = (MR_COMMON(20,0))[(MR_Integer) MR_r6];
	if (((MR_Integer) MR_tempr1 && (strcmp((char *)MR_tempr1, (char *)MR_r1) == 0))) {
		MR_GOTO_LAB(libs__handle_options__grade_component_table_5_0_i5);
	}
	MR_r6 = (MR_COMMON(19,0))[(MR_Integer) MR_r6];
	if (MR_INT_GE(MR_r6,0))
		continue;
	}
	break; } /* end while */
MR_def_label(libs__handle_options__grade_component_table_5_0,50)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_proceed();
MR_def_label(libs__handle_options__grade_component_table_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_r6,
		MR_LABEL_AP(libs__handle_options__grade_component_table_5_0_i50) MR_AND
		MR_LABEL_AP(libs__handle_options__grade_component_table_5_0_i6) MR_AND
		MR_LABEL_AP(libs__handle_options__grade_component_table_5_0_i7) MR_AND
		MR_LABEL_AP(libs__handle_options__grade_component_table_5_0_i8) MR_AND
		MR_LABEL_AP(libs__handle_options__grade_component_table_5_0_i9) MR_AND
		MR_LABEL_AP(libs__handle_options__grade_component_table_5_0_i10) MR_AND
		MR_LABEL_AP(libs__handle_options__grade_component_table_5_0_i11) MR_AND
		MR_LABEL_AP(libs__handle_options__grade_component_table_5_0_i12) MR_AND
		MR_LABEL_AP(libs__handle_options__grade_component_table_5_0_i13) MR_AND
		MR_LABEL_AP(libs__handle_options__grade_component_table_5_0_i14) MR_AND
		MR_LABEL_AP(libs__handle_options__grade_component_table_5_0_i15) MR_AND
		MR_LABEL_AP(libs__handle_options__grade_component_table_5_0_i16) MR_AND
		MR_LABEL_AP(libs__handle_options__grade_component_table_5_0_i17) MR_AND
		MR_LABEL_AP(libs__handle_options__grade_component_table_5_0_i18) MR_AND
		MR_LABEL_AP(libs__handle_options__grade_component_table_5_0_i19) MR_AND
		MR_LABEL_AP(libs__handle_options__grade_component_table_5_0_i50) MR_AND
		MR_LABEL_AP(libs__handle_options__grade_component_table_5_0_i50) MR_AND
		MR_LABEL_AP(libs__handle_options__grade_component_table_5_0_i50) MR_AND
		MR_LABEL_AP(libs__handle_options__grade_component_table_5_0_i50) MR_AND
		MR_LABEL_AP(libs__handle_options__grade_component_table_5_0_i20) MR_AND
		MR_LABEL_AP(libs__handle_options__grade_component_table_5_0_i50) MR_AND
		MR_LABEL_AP(libs__handle_options__grade_component_table_5_0_i50) MR_AND
		MR_LABEL_AP(libs__handle_options__grade_component_table_5_0_i50) MR_AND
		MR_LABEL_AP(libs__handle_options__grade_component_table_5_0_i50) MR_AND
		MR_LABEL_AP(libs__handle_options__grade_component_table_5_0_i21) MR_AND
		MR_LABEL_AP(libs__handle_options__grade_component_table_5_0_i50) MR_AND
		MR_LABEL_AP(libs__handle_options__grade_component_table_5_0_i50) MR_AND
		MR_LABEL_AP(libs__handle_options__grade_component_table_5_0_i50) MR_AND
		MR_LABEL_AP(libs__handle_options__grade_component_table_5_0_i50) MR_AND
		MR_LABEL_AP(libs__handle_options__grade_component_table_5_0_i50) MR_AND
		MR_LABEL_AP(libs__handle_options__grade_component_table_5_0_i50) MR_AND
		MR_LABEL_AP(libs__handle_options__grade_component_table_5_0_i50) MR_AND
		MR_LABEL_AP(libs__handle_options__grade_component_table_5_0_i50) MR_AND
		MR_LABEL_AP(libs__handle_options__grade_component_table_5_0_i50) MR_AND
		MR_LABEL_AP(libs__handle_options__grade_component_table_5_0_i22) MR_AND
		MR_LABEL_AP(libs__handle_options__grade_component_table_5_0_i50) MR_AND
		MR_LABEL_AP(libs__handle_options__grade_component_table_5_0_i23) MR_AND
		MR_LABEL_AP(libs__handle_options__grade_component_table_5_0_i50) MR_AND
		MR_LABEL_AP(libs__handle_options__grade_component_table_5_0_i50) MR_AND
		MR_LABEL_AP(libs__handle_options__grade_component_table_5_0_i24) MR_AND
		MR_LABEL_AP(libs__handle_options__grade_component_table_5_0_i50) MR_AND
		MR_LABEL_AP(libs__handle_options__grade_component_table_5_0_i25) MR_AND
		MR_LABEL_AP(libs__handle_options__grade_component_table_5_0_i50) MR_AND
		MR_LABEL_AP(libs__handle_options__grade_component_table_5_0_i50) MR_AND
		MR_LABEL_AP(libs__handle_options__grade_component_table_5_0_i50) MR_AND
		MR_LABEL_AP(libs__handle_options__grade_component_table_5_0_i50) MR_AND
		MR_LABEL_AP(libs__handle_options__grade_component_table_5_0_i50) MR_AND
		MR_LABEL_AP(libs__handle_options__grade_component_table_5_0_i50) MR_AND
		MR_LABEL_AP(libs__handle_options__grade_component_table_5_0_i50) MR_AND
		MR_LABEL_AP(libs__handle_options__grade_component_table_5_0_i26) MR_AND
		MR_LABEL_AP(libs__handle_options__grade_component_table_5_0_i50) MR_AND
		MR_LABEL_AP(libs__handle_options__grade_component_table_5_0_i50) MR_AND
		MR_LABEL_AP(libs__handle_options__grade_component_table_5_0_i50) MR_AND
		MR_LABEL_AP(libs__handle_options__grade_component_table_5_0_i50) MR_AND
		MR_LABEL_AP(libs__handle_options__grade_component_table_5_0_i50) MR_AND
		MR_LABEL_AP(libs__handle_options__grade_component_table_5_0_i50) MR_AND
		MR_LABEL_AP(libs__handle_options__grade_component_table_5_0_i50) MR_AND
		MR_LABEL_AP(libs__handle_options__grade_component_table_5_0_i50) MR_AND
		MR_LABEL_AP(libs__handle_options__grade_component_table_5_0_i50) MR_AND
		MR_LABEL_AP(libs__handle_options__grade_component_table_5_0_i50) MR_AND
		MR_LABEL_AP(libs__handle_options__grade_component_table_5_0_i50) MR_AND
		MR_LABEL_AP(libs__handle_options__grade_component_table_5_0_i27) MR_AND
		MR_LABEL_AP(libs__handle_options__grade_component_table_5_0_i28) MR_AND
		MR_LABEL_AP(libs__handle_options__grade_component_table_5_0_i50) MR_AND
		MR_LABEL_AP(libs__handle_options__grade_component_table_5_0_i29) MR_AND
		MR_LABEL_AP(libs__handle_options__grade_component_table_5_0_i50) MR_AND
		MR_LABEL_AP(libs__handle_options__grade_component_table_5_0_i50) MR_AND
		MR_LABEL_AP(libs__handle_options__grade_component_table_5_0_i50) MR_AND
		MR_LABEL_AP(libs__handle_options__grade_component_table_5_0_i30) MR_AND
		MR_LABEL_AP(libs__handle_options__grade_component_table_5_0_i50) MR_AND
		MR_LABEL_AP(libs__handle_options__grade_component_table_5_0_i31) MR_AND
		MR_LABEL_AP(libs__handle_options__grade_component_table_5_0_i32) MR_AND
		MR_LABEL_AP(libs__handle_options__grade_component_table_5_0_i50) MR_AND
		MR_LABEL_AP(libs__handle_options__grade_component_table_5_0_i50) MR_AND
		MR_LABEL_AP(libs__handle_options__grade_component_table_5_0_i33) MR_AND
		MR_LABEL_AP(libs__handle_options__grade_component_table_5_0_i50) MR_AND
		MR_LABEL_AP(libs__handle_options__grade_component_table_5_0_i34) MR_AND
		MR_LABEL_AP(libs__handle_options__grade_component_table_5_0_i50) MR_AND
		MR_LABEL_AP(libs__handle_options__grade_component_table_5_0_i50) MR_AND
		MR_LABEL_AP(libs__handle_options__grade_component_table_5_0_i50) MR_AND
		MR_LABEL_AP(libs__handle_options__grade_component_table_5_0_i50) MR_AND
		MR_LABEL_AP(libs__handle_options__grade_component_table_5_0_i50) MR_AND
		MR_LABEL_AP(libs__handle_options__grade_component_table_5_0_i50) MR_AND
		MR_LABEL_AP(libs__handle_options__grade_component_table_5_0_i35) MR_AND
		MR_LABEL_AP(libs__handle_options__grade_component_table_5_0_i36) MR_AND
		MR_LABEL_AP(libs__handle_options__grade_component_table_5_0_i50) MR_AND
		MR_LABEL_AP(libs__handle_options__grade_component_table_5_0_i37) MR_AND
		MR_LABEL_AP(libs__handle_options__grade_component_table_5_0_i38) MR_AND
		MR_LABEL_AP(libs__handle_options__grade_component_table_5_0_i39) MR_AND
		MR_LABEL_AP(libs__handle_options__grade_component_table_5_0_i50) MR_AND
		MR_LABEL_AP(libs__handle_options__grade_component_table_5_0_i50) MR_AND
		MR_LABEL_AP(libs__handle_options__grade_component_table_5_0_i50) MR_AND
		MR_LABEL_AP(libs__handle_options__grade_component_table_5_0_i50) MR_AND
		MR_LABEL_AP(libs__handle_options__grade_component_table_5_0_i50) MR_AND
		MR_LABEL_AP(libs__handle_options__grade_component_table_5_0_i50) MR_AND
		MR_LABEL_AP(libs__handle_options__grade_component_table_5_0_i50) MR_AND
		MR_LABEL_AP(libs__handle_options__grade_component_table_5_0_i50) MR_AND
		MR_LABEL_AP(libs__handle_options__grade_component_table_5_0_i50) MR_AND
		MR_LABEL_AP(libs__handle_options__grade_component_table_5_0_i50) MR_AND
		MR_LABEL_AP(libs__handle_options__grade_component_table_5_0_i50) MR_AND
		MR_LABEL_AP(libs__handle_options__grade_component_table_5_0_i40) MR_AND
		MR_LABEL_AP(libs__handle_options__grade_component_table_5_0_i41) MR_AND
		MR_LABEL_AP(libs__handle_options__grade_component_table_5_0_i42) MR_AND
		MR_LABEL_AP(libs__handle_options__grade_component_table_5_0_i50) MR_AND
		MR_LABEL_AP(libs__handle_options__grade_component_table_5_0_i50) MR_AND
		MR_LABEL_AP(libs__handle_options__grade_component_table_5_0_i50) MR_AND
		MR_LABEL_AP(libs__handle_options__grade_component_table_5_0_i50) MR_AND
		MR_LABEL_AP(libs__handle_options__grade_component_table_5_0_i50) MR_AND
		MR_LABEL_AP(libs__handle_options__grade_component_table_5_0_i50) MR_AND
		MR_LABEL_AP(libs__handle_options__grade_component_table_5_0_i43) MR_AND
		MR_LABEL_AP(libs__handle_options__grade_component_table_5_0_i50) MR_AND
		MR_LABEL_AP(libs__handle_options__grade_component_table_5_0_i44) MR_AND
		MR_LABEL_AP(libs__handle_options__grade_component_table_5_0_i45) MR_AND
		MR_LABEL_AP(libs__handle_options__grade_component_table_5_0_i50) MR_AND
		MR_LABEL_AP(libs__handle_options__grade_component_table_5_0_i50) MR_AND
		MR_LABEL_AP(libs__handle_options__grade_component_table_5_0_i50) MR_AND
		MR_LABEL_AP(libs__handle_options__grade_component_table_5_0_i46) MR_AND
		MR_LABEL_AP(libs__handle_options__grade_component_table_5_0_i47) MR_AND
		MR_LABEL_AP(libs__handle_options__grade_component_table_5_0_i50) MR_AND
		MR_LABEL_AP(libs__handle_options__grade_component_table_5_0_i50) MR_AND
		MR_LABEL_AP(libs__handle_options__grade_component_table_5_0_i50) MR_AND
		MR_LABEL_AP(libs__handle_options__grade_component_table_5_0_i50) MR_AND
		MR_LABEL_AP(libs__handle_options__grade_component_table_5_0_i50) MR_AND
		MR_LABEL_AP(libs__handle_options__grade_component_table_5_0_i50) MR_AND
		MR_LABEL_AP(libs__handle_options__grade_component_table_5_0_i48) MR_AND
		MR_LABEL_AP(libs__handle_options__grade_component_table_5_0_i50) MR_AND
		MR_LABEL_AP(libs__handle_options__grade_component_table_5_0_i50) MR_AND
		MR_LABEL_AP(libs__handle_options__grade_component_table_5_0_i50));
MR_def_label(libs__handle_options__grade_component_table_5_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 2;
	MR_r3 = (MR_Word) MR_TAG_COMMON(1,3,3);
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	MR_r5 = (MR_Integer) 1;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__handle_options__grade_component_table_5_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 0;
	MR_r3 = (MR_Word) MR_TAG_COMMON(1,3,9);
	MR_r4 = (MR_Word) MR_TAG_COMMON(1,18,0);
	MR_r5 = (MR_Integer) 1;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__handle_options__grade_component_table_5_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 2;
	MR_r3 = (MR_Word) MR_TAG_COMMON(1,3,11);
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	MR_r5 = (MR_Integer) 1;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__handle_options__grade_component_table_5_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 5;
	MR_r3 = (MR_Word) MR_TAG_COMMON(1,3,12);
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	MR_r5 = (MR_Integer) 1;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__handle_options__grade_component_table_5_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 3;
	MR_r3 = (MR_Word) MR_TAG_COMMON(1,3,16);
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	MR_r5 = (MR_Integer) 1;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__handle_options__grade_component_table_5_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 0;
	MR_r3 = (MR_Word) MR_TAG_COMMON(1,3,22);
	MR_r4 = (MR_Word) MR_TAG_COMMON(1,18,1);
	MR_r5 = (MR_Integer) 1;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__handle_options__grade_component_table_5_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 4;
	MR_r3 = (MR_Word) MR_TAG_COMMON(1,3,26);
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	MR_r5 = (MR_Integer) 1;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__handle_options__grade_component_table_5_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 0;
	MR_r3 = (MR_Word) MR_TAG_COMMON(1,3,28);
	MR_r4 = (MR_Word) MR_TAG_COMMON(1,18,0);
	MR_r5 = (MR_Integer) 1;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__handle_options__grade_component_table_5_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 11;
	MR_r3 = (MR_Word) MR_TAG_COMMON(1,3,30);
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	MR_r5 = (MR_Integer) 1;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__handle_options__grade_component_table_5_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 0;
	MR_r3 = (MR_Word) MR_TAG_COMMON(1,3,33);
	MR_r4 = (MR_Word) MR_TAG_COMMON(1,18,0);
	MR_r5 = (MR_Integer) 1;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__handle_options__grade_component_table_5_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 2;
	MR_r3 = (MR_Word) MR_TAG_COMMON(1,3,34);
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	MR_r5 = (MR_Integer) 1;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__handle_options__grade_component_table_5_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 2;
	MR_r3 = (MR_Word) MR_TAG_COMMON(1,3,35);
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	MR_r5 = (MR_Integer) 1;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__handle_options__grade_component_table_5_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 11;
	MR_r3 = (MR_Word) MR_TAG_COMMON(1,3,37);
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	MR_r5 = (MR_Integer) 1;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__handle_options__grade_component_table_5_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 0;
	MR_r3 = (MR_Word) MR_TAG_COMMON(1,3,39);
	MR_r4 = (MR_Word) MR_TAG_COMMON(1,18,0);
	MR_r5 = (MR_Integer) 1;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__handle_options__grade_component_table_5_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 4;
	MR_r3 = (MR_Word) MR_TAG_COMMON(1,3,41);
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	MR_r5 = (MR_Integer) 1;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__handle_options__grade_component_table_5_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 0;
	MR_r3 = (MR_Word) MR_TAG_COMMON(1,3,46);
	MR_r4 = (MR_Word) MR_TAG_COMMON(1,18,2);
	MR_r5 = (MR_Integer) 1;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__handle_options__grade_component_table_5_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 7;
	MR_r3 = (MR_Word) MR_TAG_COMMON(1,3,50);
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	MR_r5 = (MR_Integer) 0;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__handle_options__grade_component_table_5_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 0;
	MR_r3 = (MR_Word) MR_TAG_COMMON(1,3,51);
	MR_r4 = (MR_Word) MR_TAG_COMMON(1,18,0);
	MR_r5 = (MR_Integer) 1;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__handle_options__grade_component_table_5_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 0;
	MR_r3 = (MR_Word) MR_TAG_COMMON(1,3,22);
	MR_r4 = (MR_Word) MR_TAG_COMMON(1,18,3);
	MR_r5 = (MR_Integer) 1;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__handle_options__grade_component_table_5_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 3;
	MR_r3 = (MR_Word) MR_TAG_COMMON(1,3,55);
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	MR_r5 = (MR_Integer) 1;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__handle_options__grade_component_table_5_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 7;
	MR_r3 = (MR_Word) MR_TAG_COMMON(1,3,58);
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	MR_r5 = (MR_Integer) 1;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__handle_options__grade_component_table_5_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 7;
	MR_r3 = (MR_Word) MR_TAG_COMMON(1,3,60);
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	MR_r5 = (MR_Integer) 1;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__handle_options__grade_component_table_5_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 12;
	MR_r3 = (MR_Word) MR_TAG_COMMON(1,3,62);
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	MR_r5 = (MR_Integer) 1;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__handle_options__grade_component_table_5_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 1;
	MR_r3 = (MR_Word) MR_TAG_COMMON(1,3,63);
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	MR_r5 = (MR_Integer) 1;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__handle_options__grade_component_table_5_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 6;
	MR_r3 = (MR_Word) MR_TAG_COMMON(1,3,64);
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	MR_r5 = (MR_Integer) 1;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__handle_options__grade_component_table_5_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 10;
	MR_r3 = (MR_Word) MR_TAG_COMMON(1,3,66);
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	MR_r5 = (MR_Integer) 1;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__handle_options__grade_component_table_5_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 7;
	MR_r3 = (MR_Word) MR_TAG_COMMON(1,3,58);
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	MR_r5 = (MR_Integer) 0;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__handle_options__grade_component_table_5_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 0;
	MR_r3 = (MR_Word) MR_TAG_COMMON(1,3,67);
	MR_r4 = (MR_Word) MR_TAG_COMMON(1,18,0);
	MR_r5 = (MR_Integer) 1;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__handle_options__grade_component_table_5_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 9;
	MR_r3 = (MR_Word) MR_TAG_COMMON(1,3,68);
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	MR_r5 = (MR_Integer) 1;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__handle_options__grade_component_table_5_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 12;
	MR_r3 = (MR_Word) MR_TAG_COMMON(1,3,70);
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	MR_r5 = (MR_Integer) 1;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__handle_options__grade_component_table_5_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 7;
	MR_r3 = (MR_Word) MR_TAG_COMMON(1,3,50);
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	MR_r5 = (MR_Integer) 1;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__handle_options__grade_component_table_5_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 3;
	MR_r3 = (MR_Word) MR_TAG_COMMON(1,3,72);
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	MR_r5 = (MR_Integer) 1;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__handle_options__grade_component_table_5_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 3;
	MR_r3 = (MR_Word) MR_TAG_COMMON(1,3,76);
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	MR_r5 = (MR_Integer) 1;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__handle_options__grade_component_table_5_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 7;
	MR_r3 = (MR_Word) MR_TAG_COMMON(1,3,78);
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	MR_r5 = (MR_Integer) 1;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__handle_options__grade_component_table_5_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 0;
	MR_r3 = (MR_Word) MR_TAG_COMMON(1,3,82);
	MR_r4 = (MR_Word) MR_TAG_COMMON(1,18,1);
	MR_r5 = (MR_Integer) 1;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__handle_options__grade_component_table_5_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 0;
	MR_r3 = (MR_Word) MR_TAG_COMMON(1,3,82);
	MR_r4 = (MR_Word) MR_TAG_COMMON(1,18,3);
	MR_r5 = (MR_Integer) 1;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__handle_options__grade_component_table_5_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 8;
	MR_r3 = (MR_Word) MR_TAG_COMMON(1,3,84);
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	MR_r5 = (MR_Integer) 1;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__handle_options__grade_component_table_5_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 3;
	MR_r3 = (MR_Word) MR_TAG_COMMON(1,3,85);
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	MR_r5 = (MR_Integer) 1;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__handle_options__grade_component_table_5_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 3;
	MR_r3 = (MR_Word) MR_TAG_COMMON(1,3,86);
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	MR_r5 = (MR_Integer) 1;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__handle_options__grade_component_table_5_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 0;
	MR_r3 = (MR_Word) MR_TAG_COMMON(1,3,91);
	MR_r4 = (MR_Word) MR_TAG_COMMON(1,18,1);
	MR_r5 = (MR_Integer) 1;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__handle_options__grade_component_table_5_0,46)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 13;
	MR_r3 = (MR_Word) MR_TAG_COMMON(1,3,92);
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	MR_r5 = (MR_Integer) 1;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__handle_options__grade_component_table_5_0,47)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 0;
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_r4 = (MR_Word) MR_TAG_COMMON(1,18,4);
	MR_r5 = (MR_Integer) 1;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__handle_options__grade_component_table_5_0,48)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 0;
	MR_r3 = (MR_Word) MR_TAG_COMMON(1,3,98);
	MR_r4 = (MR_Word) MR_TAG_COMMON(1,18,1);
	MR_r5 = (MR_Integer) 1;
	MR_r1 = MR_TRUE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_declare_entry(MR_do_fail);

MR_BEGIN_MODULE(libs__handle_options_module24)
	MR_init_entry1(libs__handle_options__grade_component_table_5_2);
	MR_init_label3(libs__handle_options__grade_component_table_5_2,2,3,4)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(libs__handle_options__grade_component_table_5_2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_mkframe("pred libs.handle_options.grade_component_table/5-2", 1,
		MR_LABEL_AP(libs__handle_options__grade_component_table_5_2_i2));
	{
	MR_Word MR_tempr1;
	MR_tempr1 = (MR_Word) (MR_Word *) &MR_tfield(0, (MR_Word *) &mercury_vector_common_21_0, (MR_Integer) 0);
	MR_fv(1) = (MR_Integer) 5;
	MR_r1 = MR_ctfield(0, MR_tempr1, 0);
	MR_r2 = MR_ctfield(0, MR_tempr1, 1);
	MR_r3 = MR_ctfield(0, MR_tempr1, 2);
	MR_r4 = MR_ctfield(0, MR_tempr1, 3);
	MR_r5 = MR_ctfield(0, MR_tempr1, 4);
	MR_succeed();
	}
MR_def_label(libs__handle_options__grade_component_table_5_2,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r6 = MR_fv(1);
	if (MR_INT_GE(MR_r6,210)) {
		MR_GOTO_LAB(libs__handle_options__grade_component_table_5_2_i3);
	}
	MR_fv(1) = ((MR_Integer) MR_fv(1) + (MR_Integer) 5);
	MR_GOTO_LAB(libs__handle_options__grade_component_table_5_2_i4);
MR_def_label(libs__handle_options__grade_component_table_5_2,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_redoip_slot_word(MR_curfr) = (MR_Word) MR_ENTRY(MR_do_fail);
MR_def_label(libs__handle_options__grade_component_table_5_2,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = (MR_Word) (MR_Word *) &MR_tfield(0, (MR_Word *) &mercury_vector_common_21_0, MR_r6);
	MR_r1 = MR_ctfield(0, MR_tempr1, 0);
	MR_r2 = MR_ctfield(0, MR_tempr1, 1);
	MR_r3 = MR_ctfield(0, MR_tempr1, 2);
	MR_r4 = MR_ctfield(0, MR_tempr1, 3);
	MR_r5 = MR_ctfield(0, MR_tempr1, 4);
	MR_succeed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(libs__handle_options_module25)
	MR_init_entry1(libs__handle_options__grade_start_values_1_0);
	MR_init_label3(libs__handle_options__grade_start_values_1_0,2,3,4)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(libs__handle_options__grade_start_values_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_mkframe("pred libs.handle_options.grade_start_values/1-0", 1,
		MR_LABEL_AP(libs__handle_options__grade_start_values_1_0_i2));
	{
	MR_Word MR_tempr1;
	MR_tempr1 = (MR_Word) (MR_Word *) &MR_tfield(0, (MR_Word *) &mercury_vector_common_18_0, (MR_Integer) 0);
	MR_fv(1) = (MR_Integer) 1;
	MR_r1 = MR_ctfield(0, MR_tempr1, 0);
	MR_succeed();
	}
MR_def_label(libs__handle_options__grade_start_values_1_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_fv(1);
	if (MR_INT_GE(MR_r2,20)) {
		MR_GOTO_LAB(libs__handle_options__grade_start_values_1_0_i3);
	}
	MR_fv(1) = ((MR_Integer) MR_fv(1) + (MR_Integer) 1);
	MR_GOTO_LAB(libs__handle_options__grade_start_values_1_0_i4);
MR_def_label(libs__handle_options__grade_start_values_1_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_redoip_slot_word(MR_curfr) = (MR_Word) MR_ENTRY(MR_do_fail);
MR_def_label(libs__handle_options__grade_start_values_1_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = (MR_Word) (MR_Word *) &MR_tfield(0, (MR_Word *) &mercury_vector_common_18_0, MR_r2);
	MR_r1 = MR_ctfield(0, MR_tempr1, 0);
	MR_succeed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(libs__handle_options_module26)
	MR_init_entry1(libs__handle_options__char_is_not_2_0);
MR_BEGIN_CODE

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


MR_BEGIN_MODULE(libs__handle_options_module27)
	MR_init_entry1(__Unify___libs__handle_options__grade_component_0_0);
MR_BEGIN_CODE

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

MR_BEGIN_MODULE(libs__handle_options_module28)
	MR_init_entry1(__Compare___libs__handle_options__grade_component_0_0);
MR_BEGIN_CODE

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

MR_BEGIN_MODULE(libs__handle_options_module29)
	MR_init_entry1(libs__handle_options__IntroducedFrom__pred__convert_grade_option__2168__1_5_0);
	MR_init_label6(libs__handle_options__IntroducedFrom__pred__convert_grade_option__2168__1_5_0,2,5,7,8,9,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(libs__handle_options__IntroducedFrom__pred__convert_grade_option__2168__1_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(4) = MR_r3;
	MR_sv(5) = MR_r2;
	MR_np_call_localret_ent(libs__handle_options__grade_component_table_5_0,
		libs__handle_options__IntroducedFrom__pred__convert_grade_option__2168__1_5_0_i2);
MR_def_label(libs__handle_options__IntroducedFrom__pred__convert_grade_option__2168__1_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(libs__handle_options__IntroducedFrom__pred__convert_grade_option__2168__1_5_0_i1);
	}
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(libs__handle_options, grade_component);
	MR_r3 = MR_sv(4);
	MR_np_call_localret_ent(set__member_2_0,
		libs__handle_options__IntroducedFrom__pred__convert_grade_option__2168__1_5_0_i5);
MR_def_label(libs__handle_options__IntroducedFrom__pred__convert_grade_option__2168__1_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(libs__handle_options__IntroducedFrom__pred__convert_grade_option__2168__1_5_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(libs__handle_options, grade_component);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(1);
	MR_np_call_localret_ent(set__insert_3_0,
		libs__handle_options__IntroducedFrom__pred__convert_grade_option__2168__1_5_0_i7);
MR_def_label(libs__handle_options__IntroducedFrom__pred__convert_grade_option__2168__1_5_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,2,3);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,2,4);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,1,9);
	MR_r4 = MR_sv(2);
	MR_r5 = MR_sv(5);
	MR_np_call_localret_ent(list__foldl_4_1,
		libs__handle_options__IntroducedFrom__pred__convert_grade_option__2168__1_5_0_i8);
MR_def_label(libs__handle_options__IntroducedFrom__pred__convert_grade_option__2168__1_5_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_sv(3),0,0)) {
		MR_GOTO_LAB(libs__handle_options__IntroducedFrom__pred__convert_grade_option__2168__1_5_0_i9);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_ctfield(1, MR_sv(3), 0);
	if (MR_LTAGS_TEST(MR_tempr1,0,0)) {
		MR_GOTO_LAB(libs__handle_options__IntroducedFrom__pred__convert_grade_option__2168__1_5_0_i9);
	}
	MR_tempr2 = MR_ctfield(1, MR_tempr1, 1);
	if (MR_LTAGS_TESTR(MR_tempr2,0,0)) {
		MR_GOTO_LAB(libs__handle_options__IntroducedFrom__pred__convert_grade_option__2168__1_5_0_i9);
	}
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = (MR_Integer) 141;
	MR_tfield(0, MR_tempr2, 1) = MR_ctfield(1, MR_tempr1, 0);
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(libs__handle_options__add_option_list_3_0,
		libs__handle_options__IntroducedFrom__pred__convert_grade_option__2168__1_5_0_i9);
MR_def_label(libs__handle_options__IntroducedFrom__pred__convert_grade_option__2168__1_5_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(1);
	MR_r2 = MR_r1;
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__handle_options__IntroducedFrom__pred__convert_grade_option__2168__1_5_0,1)
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


MR_BEGIN_MODULE(libs__handle_options_module30)
	MR_init_entry1(fn__libs__handle_options__IntroducedFrom__func__postprocess_options_2__1668__1_2_0);
	MR_init_label1(fn__libs__handle_options__IntroducedFrom__func__postprocess_options_2__1668__1_2_0,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__libs__handle_options__IntroducedFrom__func__postprocess_options_2__1668__1_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_r1 = MR_r2;
	MR_r2 = (MR_Word) MR_string_const("lib", 3);
	MR_np_call_localret_ent(fn__f_100_105_114_95_95_47_2_0,
		fn__libs__handle_options__IntroducedFrom__func__postprocess_options_2__1668__1_2_0_i2);
MR_def_label(fn__libs__handle_options__IntroducedFrom__func__postprocess_options_2__1668__1_2_0,2)
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


MR_BEGIN_MODULE(libs__handle_options_module31)
	MR_init_entry1(fn__libs__handle_options__IntroducedFrom__func__postprocess_options_2__1683__1_2_0);
	MR_init_label2(fn__libs__handle_options__IntroducedFrom__func__postprocess_options_2__1683__1_2_0,2,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__libs__handle_options__IntroducedFrom__func__postprocess_options_2__1683__1_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_r1 = MR_r2;
	MR_r2 = (MR_Word) MR_string_const("lib", 3);
	MR_np_call_localret_ent(fn__f_100_105_114_95_95_47_2_0,
		fn__libs__handle_options__IntroducedFrom__func__postprocess_options_2__1683__1_2_0_i2);
MR_def_label(fn__libs__handle_options__IntroducedFrom__func__postprocess_options_2__1683__1_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(fn__f_100_105_114_95_95_47_2_0,
		fn__libs__handle_options__IntroducedFrom__func__postprocess_options_2__1683__1_2_0_i3);
MR_def_label(fn__libs__handle_options__IntroducedFrom__func__postprocess_options_2__1683__1_2_0,3)
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

MR_BEGIN_MODULE(libs__handle_options_module32)
	MR_init_entry1(fn__libs__handle_options__IntroducedFrom__func__postprocess_options_2__1692__1_2_0);
	MR_init_label1(fn__libs__handle_options__IntroducedFrom__func__postprocess_options_2__1692__1_2_0,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__libs__handle_options__IntroducedFrom__func__postprocess_options_2__1692__1_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("ints", 4);
	MR_np_call_localret_ent(fn__dir__make_path_name_2_0,
		fn__libs__handle_options__IntroducedFrom__func__postprocess_options_2__1692__1_2_0_i2);
MR_def_label(fn__libs__handle_options__IntroducedFrom__func__postprocess_options_2__1692__1_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(fn__dir__make_path_name_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(libs__handle_options_module33)
	MR_init_entry1(fn__libs__handle_options__IntroducedFrom__func__postprocess_options_2__1702__1_2_0);
	MR_init_label1(fn__libs__handle_options__IntroducedFrom__func__postprocess_options_2__1702__1_2_0,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__libs__handle_options__IntroducedFrom__func__postprocess_options_2__1702__1_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_r1 = MR_r2;
	MR_r2 = (MR_Word) MR_string_const("modules", 7);
	MR_np_call_localret_ent(fn__f_100_105_114_95_95_47_2_0,
		fn__libs__handle_options__IntroducedFrom__func__postprocess_options_2__1702__1_2_0_i2);
MR_def_label(fn__libs__handle_options__IntroducedFrom__func__postprocess_options_2__1702__1_2_0,2)
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


MR_BEGIN_MODULE(libs__handle_options_module34)
	MR_init_entry1(fn__libs__handle_options__IntroducedFrom__func__postprocess_options_2__1738__1_3_0);
	MR_init_label2(fn__libs__handle_options__IntroducedFrom__func__postprocess_options_2__1738__1_3_0,2,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__libs__handle_options__IntroducedFrom__func__postprocess_options_2__1738__1_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_r1 = MR_r3;
	MR_r2 = (MR_Word) MR_string_const("Mercury", 7);
	MR_np_call_localret_ent(fn__f_100_105_114_95_95_47_2_0,
		fn__libs__handle_options__IntroducedFrom__func__postprocess_options_2__1738__1_3_0_i2);
MR_def_label(fn__libs__handle_options__IntroducedFrom__func__postprocess_options_2__1738__1_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(fn__f_100_105_114_95_95_47_2_0,
		fn__libs__handle_options__IntroducedFrom__func__postprocess_options_2__1738__1_3_0_i3);
MR_def_label(fn__libs__handle_options__IntroducedFrom__func__postprocess_options_2__1738__1_3_0,3)
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


MR_BEGIN_MODULE(libs__handle_options_module35)
	MR_init_entry1(libs__handle_options__IntroducedFrom__pred__postprocess_options_2__1759__1_2_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(libs__handle_options__IntroducedFrom__pred__postprocess_options_2__1759__1_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (strcmp((char *)MR_r1, (char *)MR_r2) == 0);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(std_util__isnt_2_0);

MR_BEGIN_MODULE(libs__handle_options_module36)
	MR_init_entry1(libs__handle_options__IntroducedFrom__pred__postprocess_options_2__1759__2_2_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(libs__handle_options__IntroducedFrom__pred__postprocess_options_2__1759__2_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r2;
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_np_tailcall_ent(std_util__isnt_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(libs__handle_options_module37)
	MR_init_entry1(fn__libs__handle_options__IntroducedFrom__func__postprocess_options_2__1779__1_2_0);
	MR_init_label2(fn__libs__handle_options__IntroducedFrom__func__postprocess_options_2__1779__1_2_0,2,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__libs__handle_options__IntroducedFrom__func__postprocess_options_2__1779__1_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(fn__libs__handle_options__IntroducedFrom__func__postprocess_options_2__1779__1_2_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_1),
		mercury__fn__libs__handle_options__IntroducedFrom__func__postprocess_options_2__1779__1_2_0_i2);
MR_def_label(fn__libs__handle_options__IntroducedFrom__func__postprocess_options_2__1779__1_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("Mercury", 7);
	MR_np_call_localret_ent(fn__f_100_105_114_95_95_47_2_0,
		fn__libs__handle_options__IntroducedFrom__func__postprocess_options_2__1779__1_2_0_i3);
MR_def_label(fn__libs__handle_options__IntroducedFrom__func__postprocess_options_2__1779__1_2_0,3)
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


MR_BEGIN_MODULE(libs__handle_options_module38)
	MR_init_entry1(fn__libs__handle_options__IntroducedFrom__func__postprocess_options_2__1783__1_2_0);
	MR_init_label2(fn__libs__handle_options__IntroducedFrom__func__postprocess_options_2__1783__1_2_0,2,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__libs__handle_options__IntroducedFrom__func__postprocess_options_2__1783__1_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(fn__libs__handle_options__IntroducedFrom__func__postprocess_options_2__1783__1_2_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_1),
		mercury__fn__libs__handle_options__IntroducedFrom__func__postprocess_options_2__1783__1_2_0_i2);
MR_def_label(fn__libs__handle_options__IntroducedFrom__func__postprocess_options_2__1783__1_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("Mercury", 7);
	MR_np_call_localret_ent(fn__f_100_105_114_95_95_47_2_0,
		fn__libs__handle_options__IntroducedFrom__func__postprocess_options_2__1783__1_2_0_i3);
MR_def_label(fn__libs__handle_options__IntroducedFrom__func__postprocess_options_2__1783__1_2_0,3)
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


MR_BEGIN_MODULE(libs__handle_options_module39)
	MR_init_entry1(fn__libs__handle_options__IntroducedFrom__func__postprocess_options_2__1806__1_2_0);
	MR_init_label2(fn__libs__handle_options__IntroducedFrom__func__postprocess_options_2__1806__1_2_0,2,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__libs__handle_options__IntroducedFrom__func__postprocess_options_2__1806__1_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(fn__libs__handle_options__IntroducedFrom__func__postprocess_options_2__1806__1_2_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_1),
		mercury__fn__libs__handle_options__IntroducedFrom__func__postprocess_options_2__1806__1_2_0_i2);
MR_def_label(fn__libs__handle_options__IntroducedFrom__func__postprocess_options_2__1806__1_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("Mercury", 7);
	MR_np_call_localret_ent(fn__f_100_105_114_95_95_47_2_0,
		fn__libs__handle_options__IntroducedFrom__func__postprocess_options_2__1806__1_2_0_i3);
MR_def_label(fn__libs__handle_options__IntroducedFrom__func__postprocess_options_2__1806__1_2_0,3)
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


MR_BEGIN_MODULE(libs__handle_options_module40)
	MR_init_entry1(fn__libs__handle_options__IntroducedFrom__func__postprocess_options_2__1808__1_1_0);
	MR_init_label1(fn__libs__handle_options__IntroducedFrom__func__postprocess_options_2__1808__1_1_0,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__libs__handle_options__IntroducedFrom__func__postprocess_options_2__1808__1_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_r2 = (MR_Word) MR_string_const("Mercury", 7);
	MR_np_call_localret_ent(fn__f_100_105_114_95_95_47_2_0,
		fn__libs__handle_options__IntroducedFrom__func__postprocess_options_2__1808__1_1_0_i2);
MR_def_label(fn__libs__handle_options__IntroducedFrom__func__postprocess_options_2__1808__1_1_0,2)
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

MR_decl_entry(map__set_4_0);

MR_BEGIN_MODULE(libs__handle_options_module41)
	MR_init_entry1(libs__handle_options__IntroducedFrom__pred__add_option_list__2191__1_3_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(libs__handle_options__IntroducedFrom__pred__add_option_list__2191__1_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(libs__options, option);
	MR_r3 = MR_r2;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(getopt_io, option_data);
	MR_r4 = MR_ctfield(0, MR_tempr1, 0);
	MR_r5 = MR_ctfield(0, MR_tempr1, 1);
	MR_np_tailcall_ent(map__set_4_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(list__member_2_1);
MR_decl_entry(map__search_3_0);
MR_declare_entry(MR_do_redo);

MR_BEGIN_MODULE(libs__handle_options_module42)
	MR_init_entry1(libs__handle_options__IntroducedFrom__pred__compute_grade_components__2240__1_2_0);
	MR_init_label8(libs__handle_options__IntroducedFrom__pred__compute_grade_components__2240__1_2_0,1,6,8,10,7,4,15,17)
	MR_init_label4(libs__handle_options__IntroducedFrom__pred__compute_grade_components__2240__1_2_0,18,20,16,22)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(libs__handle_options__IntroducedFrom__pred__compute_grade_components__2240__1_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_mkframe("pred libs.handle_options.IntroducedFrom__pred__compute_grade_components__2240__1/2-0", 12,
		MR_ENTRY(MR_do_fail));
	MR_fv(1) = MR_r1;
	MR_np_call_localret_ent(libs__handle_options__grade_component_table_5_2,
		libs__handle_options__IntroducedFrom__pred__compute_grade_components__2240__1_2_0_i1);
MR_def_label(libs__handle_options__IntroducedFrom__pred__compute_grade_components__2240__1_2_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_fv(7) = (MR_Word) MR_redoip_slot(MR_maxfr);
	MR_fv(8) = (MR_Word) MR_redofr_slot(MR_maxfr);
	MR_save_maxfr(MR_fv(9));
	MR_redofr_slot_word(MR_maxfr) = (MR_Word) MR_curfr;
	MR_redoip_slot_word(MR_maxfr) = (MR_Word) MR_LABEL_AP(libs__handle_options__IntroducedFrom__pred__compute_grade_components__2240__1_2_0_i4);
	MR_fv(2) = MR_r1;
	MR_fv(3) = MR_r2;
	MR_fv(4) = MR_r4;
	MR_fv(5) = MR_r5;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,2,3);
	MR_r2 = MR_r3;
	MR_np_call_localret_ent(list__member_2_1,
		libs__handle_options__IntroducedFrom__pred__compute_grade_components__2240__1_2_0_i6);
MR_def_label(libs__handle_options__IntroducedFrom__pred__compute_grade_components__2240__1_2_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_fv(6) = MR_ctfield(0, MR_r1, 1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(libs__options, option);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(getopt_io, option_data);
	MR_r3 = MR_fv(1);
	MR_r4 = MR_ctfield(0, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(map__search_3_0,
		libs__handle_options__IntroducedFrom__pred__compute_grade_components__2240__1_2_0_i8);
MR_def_label(libs__handle_options__IntroducedFrom__pred__compute_grade_components__2240__1_2_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(libs__handle_options__IntroducedFrom__pred__compute_grade_components__2240__1_2_0_i7);
	}
	MR_r1 = MR_fv(6);
	MR_np_call_localret_ent(__Unify___getopt_io__option_data_0_0,
		libs__handle_options__IntroducedFrom__pred__compute_grade_components__2240__1_2_0_i10);
MR_def_label(libs__handle_options__IntroducedFrom__pred__compute_grade_components__2240__1_2_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO(MR_ENTRY(MR_do_redo));
	}
MR_def_label(libs__handle_options__IntroducedFrom__pred__compute_grade_components__2240__1_2_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_restore_maxfr(MR_fv(9));
	MR_redoip_slot_word(MR_maxfr) = MR_fv(7);
	MR_redofr_slot_word(MR_maxfr) = MR_fv(8);
	MR_GOTO(MR_ENTRY(MR_do_redo));
MR_def_label(libs__handle_options__IntroducedFrom__pred__compute_grade_components__2240__1_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_fv(2);
	MR_r2 = MR_fv(3);
	MR_r4 = MR_fv(4);
	MR_r5 = MR_fv(5);
	MR_redoip_slot_word(MR_maxfr) = MR_fv(7);
	MR_redofr_slot_word(MR_maxfr) = MR_fv(8);
	if (MR_INT_NE(MR_r5,1)) {
		MR_GOTO(MR_ENTRY(MR_do_redo));
	}
	if (MR_LTAGS_TESTR(MR_r4,0,0)) {
		MR_GOTO_LAB(libs__handle_options__IntroducedFrom__pred__compute_grade_components__2240__1_2_0_i15);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_r2;
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_succeed();
	}
MR_def_label(libs__handle_options__IntroducedFrom__pred__compute_grade_components__2240__1_2_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_fv(10) = (MR_Word) MR_redoip_slot(MR_maxfr);
	MR_fv(11) = (MR_Word) MR_redofr_slot(MR_maxfr);
	MR_save_maxfr(MR_fv(12));
	MR_redofr_slot_word(MR_maxfr) = (MR_Word) MR_curfr;
	MR_redoip_slot_word(MR_maxfr) = (MR_Word) MR_LABEL_AP(libs__handle_options__IntroducedFrom__pred__compute_grade_components__2240__1_2_0_i16);
	MR_fv(2) = MR_r1;
	MR_fv(3) = MR_r2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(getopt_io, option_data);
	MR_r2 = MR_ctfield(1, MR_r4, 0);
	MR_np_call_localret_ent(list__member_2_1,
		libs__handle_options__IntroducedFrom__pred__compute_grade_components__2240__1_2_0_i17);
MR_def_label(libs__handle_options__IntroducedFrom__pred__compute_grade_components__2240__1_2_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_fv(4) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(libs__options, option);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(getopt_io, option_data);
	MR_r3 = MR_fv(1);
	MR_r4 = (MR_Integer) 141;
	MR_np_call_localret_ent(map__search_3_0,
		libs__handle_options__IntroducedFrom__pred__compute_grade_components__2240__1_2_0_i18);
MR_def_label(libs__handle_options__IntroducedFrom__pred__compute_grade_components__2240__1_2_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO(MR_ENTRY(MR_do_redo));
	}
	MR_r1 = MR_fv(4);
	MR_np_call_localret_ent(__Unify___getopt_io__option_data_0_0,
		libs__handle_options__IntroducedFrom__pred__compute_grade_components__2240__1_2_0_i20);
MR_def_label(libs__handle_options__IntroducedFrom__pred__compute_grade_components__2240__1_2_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO(MR_ENTRY(MR_do_redo));
	}
	MR_restore_maxfr(MR_fv(12));
	MR_redoip_slot_word(MR_maxfr) = MR_fv(10);
	MR_redofr_slot_word(MR_maxfr) = MR_fv(11);
	MR_GOTO_LAB(libs__handle_options__IntroducedFrom__pred__compute_grade_components__2240__1_2_0_i22);
MR_def_label(libs__handle_options__IntroducedFrom__pred__compute_grade_components__2240__1_2_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_redoip_slot_word(MR_maxfr) = MR_fv(10);
	MR_redofr_slot_word(MR_maxfr) = MR_fv(11);
	MR_GOTO(MR_ENTRY(MR_do_redo));
MR_def_label(libs__handle_options__IntroducedFrom__pred__compute_grade_components__2240__1_2_0,22)
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


MR_BEGIN_MODULE(libs__handle_options_module43)
	MR_init_entry1(libs__handle_options__IntroducedFrom__pred__reset_grade_options__2500__1_3_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(libs__handle_options__IntroducedFrom__pred__reset_grade_options__2500__1_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(libs__options, option);
	MR_r3 = MR_r2;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(getopt_io, option_data);
	MR_r4 = MR_ctfield(0, MR_tempr1, 0);
	MR_r5 = MR_ctfield(0, MR_tempr1, 1);
	MR_np_tailcall_ent(map__set_4_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

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
}

/* suppress gcc -Wmissing-decls warnings */
void mercury__libs__handle_options__init(void);
void mercury__libs__handle_options__init_type_tables(void);
void mercury__libs__handle_options__init_debugger(void);
#ifdef MR_DEEP_PROFILING
void mercury__libs__handle_options__write_out_proc_statics(FILE *fp);
#endif
#ifdef MR_RECORD_TERM_SIZES
void mercury__libs__handle_options__init_complexity_procs(void);
#endif

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

void mercury__libs__handle_options__write_out_proc_statics(FILE *fp)
{
}

#endif

#ifdef MR_RECORD_TERM_SIZES

void mercury__libs__handle_options__init_complexity_procs(void)
{
}

#endif

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;
