/*
** Automatically generated from `options.m'
** by the Mercury compiler,
** version rotd-2010-03-01, configured for x86_64-unknown-linux-gnu.
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
INIT mercury__libs__options__init
ENDINIT
*/

#define MR_ALLOW_RESET
#include "mercury_imp.h"
#line 534 "../library/io.int"
#include "io.mh"

#line 28 "libs.options.c"
#line 542 "../library/io.int"
#include "string.mh"

#line 32 "libs.options.c"
#line 56 "../library/dir.int"
#include "dir.mh"

#line 36 "libs.options.c"
#line 29 "../library/bitmap.int2"
#include "bitmap.mh"

#line 40 "libs.options.c"
#line 28 "../library/time.int2"
#include "time.mh"

#line 44 "libs.options.c"
#line 31 "../library/array.int2"
#include "array.mh"

#line 48 "libs.options.c"
#line 33 "../mdbcomp/mdbcomp.rtti_access.int2"
#include "mdbcomp.rtti_access.mh"

#line 52 "libs.options.c"
#line 53 "libs.options.c"
#include "libs.options.mh"

#line 56 "libs.options.c"
#line 57 "libs.options.c"
#ifndef LIBS__OPTIONS_DECL_GUARD
#define LIBS__OPTIONS_DECL_GUARD

#line 61 "libs.options.c"
#line 62 "libs.options.c"

#endif
#line 65 "libs.options.c"

#ifdef _MSC_VER
#define MR_STATIC_LINKAGE extern
#else
#define MR_STATIC_LINKAGE static
#endif

struct mercury_type_0 {
	MR_Integer f1[2];
};
MR_STATIC_LINKAGE const struct mercury_type_0 mercury_common_0[];

struct mercury_type_1 {
	MR_Integer f1;
};
MR_STATIC_LINKAGE const struct mercury_type_1 mercury_common_1[];

struct mercury_type_3 {
	MR_Integer f1;
	MR_Word * f2;
};
MR_STATIC_LINKAGE const struct mercury_type_3 mercury_common_3[];

struct mercury_type_4 {
	MR_Word * f1[2];
};
MR_STATIC_LINKAGE const struct mercury_type_4 mercury_common_4[];

struct mercury_type_5 {
	MR_Integer f1;
	MR_String f2;
};
MR_STATIC_LINKAGE const struct mercury_type_5 mercury_common_5[];

struct mercury_type_6 {
	MR_String f1;
	MR_Word * f2;
};
MR_STATIC_LINKAGE const struct mercury_type_6 mercury_common_6[];

struct mercury_type_7 {
	MR_String f1;
};
MR_STATIC_LINKAGE const struct mercury_type_7 mercury_common_7[];

struct mercury_type_9 {
	MR_Word * f1[3];
};
MR_STATIC_LINKAGE const struct mercury_type_9 mercury_common_9[];

struct mercury_type_10 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[3];
};
MR_STATIC_LINKAGE const struct mercury_type_10 mercury_common_10[];

struct mercury_type_11 {
	MR_Word * f1;
	MR_Code * f2;
	MR_Integer f3;
};
MR_STATIC_LINKAGE const struct mercury_type_11 mercury_common_11[];

MR_STATIC_LINKAGE const struct mercury_type_1 mercury_vector_common_1_0[];

struct mercury_type_2 {
	MR_String f1;
	MR_Integer f2;
};
MR_STATIC_LINKAGE const struct mercury_type_2 mercury_vector_common_2_0[];

MR_STATIC_LINKAGE const struct mercury_type_3 mercury_vector_common_3_0[];

struct mercury_type_8 {
	MR_Word * f1;
};
MR_STATIC_LINKAGE const struct mercury_type_8 mercury_vector_common_8_0[];

extern const MR_TypeCtorInfo_Struct
	mercury_data_libs__options__type_ctor_info_maybe_option_table_0,
	mercury_data_libs__options__type_ctor_info_option_0,
	mercury_data_libs__options__type_ctor_info_option_category_0,
	mercury_data_libs__options__type_ctor_info_option_table_0;
MR_decl_label5(libs__options__enable_opt_levels_4_0, 20,2,4,6,3)
MR_decl_label1(libs__options__handle_quoted_flag_4_0, 2)
MR_decl_label10(libs__options__inconsequential_options_1_0, 2,3,4,5,6,7,8,9,10,11)
MR_decl_label1(libs__options__inconsequential_options_1_0, 12)
MR_decl_label10(libs__options__long_option_2_0, 3,744,5,8,9,10,11,12,13,14)
MR_decl_label10(libs__options__long_option_2_0, 15,16,17,18,19,20,21,22,23,24)
MR_decl_label10(libs__options__long_option_2_0, 25,26,27,28,29,30,31,32,33,34)
MR_decl_label10(libs__options__long_option_2_0, 35,36,37,38,39,40,41,42,43,44)
MR_decl_label10(libs__options__long_option_2_0, 45,47,48,50,51,52,53,56,59,60)
MR_decl_label10(libs__options__long_option_2_0, 63,64,65,66,67,68,69,70,71,72)
MR_decl_label10(libs__options__long_option_2_0, 73,74,75,76,77,78,79,80,81,82)
MR_decl_label10(libs__options__long_option_2_0, 83,84,85,86,87,88,89,90,91,92)
MR_decl_label10(libs__options__long_option_2_0, 93,95,96,97,98,99,100,101,102,103)
MR_decl_label10(libs__options__long_option_2_0, 104,105,106,109,110,111,113,114,115,116)
MR_decl_label10(libs__options__long_option_2_0, 117,118,119,120,122,123,125,126,127,128)
MR_decl_label10(libs__options__long_option_2_0, 129,138,140,141,142,143,144,145,146,148)
MR_decl_label10(libs__options__long_option_2_0, 149,150,151,152,153,154,155,156,157,158)
MR_decl_label10(libs__options__long_option_2_0, 159,160,161,162,163,167,168,169,171,172)
MR_decl_label10(libs__options__long_option_2_0, 174,175,176,179,180,181,182,183,184,185)
MR_decl_label10(libs__options__long_option_2_0, 186,187,188,189,190,191,193,194,195,196)
MR_decl_label10(libs__options__long_option_2_0, 197,198,199,200,201,202,203,204,205,206)
MR_decl_label10(libs__options__long_option_2_0, 207,208,209,210,211,212,214,215,216,217)
MR_decl_label10(libs__options__long_option_2_0, 218,219,220,221,222,223,224,225,226,227)
MR_decl_label10(libs__options__long_option_2_0, 228,229,230,232,233,234,235,237,238,239)
MR_decl_label10(libs__options__long_option_2_0, 241,242,243,244,245,246,247,248,249,250)
MR_decl_label10(libs__options__long_option_2_0, 251,253,254,255,257,258,259,260,261,262)
MR_decl_label10(libs__options__long_option_2_0, 263,264,265,266,267,268,269,270,271,272)
MR_decl_label10(libs__options__long_option_2_0, 273,274,275,276,277,278,279,280,281,282)
MR_decl_label10(libs__options__long_option_2_0, 283,284,285,286,287,288,289,290,291,292)
MR_decl_label10(libs__options__long_option_2_0, 293,295,302,312,322,323,325,326,327,328)
MR_decl_label10(libs__options__long_option_2_0, 329,330,331,332,333,334,335,336,337,338)
MR_decl_label10(libs__options__long_option_2_0, 339,340,341,342,343,344,345,347,348,349)
MR_decl_label10(libs__options__long_option_2_0, 350,351,352,353,354,356,357,358,359,360)
MR_decl_label10(libs__options__long_option_2_0, 363,364,365,366,372,373,374,375,377,378)
MR_decl_label10(libs__options__long_option_2_0, 379,380,382,383,384,385,386,388,391,393)
MR_decl_label10(libs__options__long_option_2_0, 395,398,400,401,402,403,404,405,406,407)
MR_decl_label10(libs__options__long_option_2_0, 408,409,410,411,413,414,415,416,417,418)
MR_decl_label10(libs__options__long_option_2_0, 419,420,421,422,423,424,425,426,427,428)
MR_decl_label10(libs__options__long_option_2_0, 429,430,431,432,435,436,437,439,441,442)
MR_decl_label10(libs__options__long_option_2_0, 443,444,445,446,447,448,449,450,451,454)
MR_decl_label10(libs__options__long_option_2_0, 455,456,457,458,460,461,462,464,465,468)
MR_decl_label10(libs__options__long_option_2_0, 469,470,471,472,473,475,476,477,478,479)
MR_decl_label10(libs__options__long_option_2_0, 480,481,482,483,484,485,486,487,488,489)
MR_decl_label10(libs__options__long_option_2_0, 490,491,492,493,495,496,497,498,499,500)
MR_decl_label10(libs__options__long_option_2_0, 505,506,512,513,514,517,518,520,521,522)
MR_decl_label10(libs__options__long_option_2_0, 523,524,525,526,528,529,530,531,532,533)
MR_decl_label10(libs__options__long_option_2_0, 534,535,537,538,539,540,541,543,544,545)
MR_decl_label10(libs__options__long_option_2_0, 547,548,549,550,551,553,554,556,558,559)
MR_decl_label10(libs__options__long_option_2_0, 560,561,562,563,564,565,567,568,569,570)
MR_decl_label10(libs__options__long_option_2_0, 572,573,574,575,577,578,579,580,584,585)
MR_decl_label10(libs__options__long_option_2_0, 586,587,588,589,590,591,592,593,594,595)
MR_decl_label10(libs__options__long_option_2_0, 596,597,598,599,600,601,602,603,604,605)
MR_decl_label10(libs__options__long_option_2_0, 606,607,608,609,611,612,613,614,615,616)
MR_decl_label10(libs__options__long_option_2_0, 617,618,619,620,621,623,624,625,626,627)
MR_decl_label10(libs__options__long_option_2_0, 628,629,630,631,632,633,634,635,636,637)
MR_decl_label10(libs__options__long_option_2_0, 638,639,640,642,643,644,645,646,647,648)
MR_decl_label10(libs__options__long_option_2_0, 649,650,651,652,653,654,655,656,657,658)
MR_decl_label10(libs__options__long_option_2_0, 660,661,662,663,664,666,668,669,670,671)
MR_decl_label10(libs__options__long_option_2_0, 672,673,674,675,678,681,682,683,684,685)
MR_decl_label10(libs__options__long_option_2_0, 686,687,688,689,690,691,692,693,694,695)
MR_decl_label10(libs__options__long_option_2_0, 697,699,700,701,702,703,706,707,708,709)
MR_decl_label10(libs__options__long_option_2_0, 710,711,712,713,714,715,716,717,718,719)
MR_decl_label10(libs__options__long_option_2_0, 720,721,722,723,724,726,727,728,729,730)
MR_decl_label10(libs__options__long_option_2_0, 731,732,733,734,735,736,737,738,739,740)
MR_decl_label2(libs__options__long_option_2_0, 741,742)
MR_decl_label9(libs__options__opt_level_3_0, 3,40,15,22,23,24,25,26,1)
MR_decl_label2(libs__options__option_defaults_2_0, 1,3)
MR_decl_label3(libs__options__option_defaults_2_2_1, 2,3,4)
MR_decl_label10(libs__options__options_help_2_0, 2,3,4,5,6,7,8,9,10,11)
MR_decl_label10(libs__options__options_help_2_0, 12,13,14,15,16,17,18,19,20,21)
MR_decl_label10(libs__options__options_help_2_0, 22,23,24,25,26,27,28,29,30,31)
MR_decl_label10(libs__options__options_help_2_0, 32,33,34,35,36,37,38,39,40,41)
MR_decl_label4(libs__options__options_help_2_0, 42,43,44,45)
MR_decl_label1(libs__options__options_help_aux_output_2_0, 2)
MR_decl_label1(libs__options__options_help_build_system_2_0, 2)
MR_decl_label10(libs__options__options_help_code_generation_2_0, 2,3,4,5,6,7,8,9,10,11)
MR_decl_label10(libs__options__options_help_code_generation_2_0, 12,13,14,15,16,17,18,19,20,21)
MR_decl_label4(libs__options__options_help_code_generation_2_0, 22,23,24,25)
MR_decl_label10(libs__options__options_help_compilation_model_2_0, 2,3,4,5,6,7,8,9,10,11)
MR_decl_label9(libs__options__options_help_compilation_model_2_0, 12,13,14,15,16,17,18,19,20)
MR_decl_label10(libs__options__options_help_ctgc_2_0, 2,3,4,5,6,7,8,9,10,11)
MR_decl_label10(libs__options__options_help_ctgc_2_0, 12,13,14,15,16,17,18,19,20,21)
MR_decl_label10(libs__options__options_help_ctgc_2_0, 22,23,24,25,26,27,28,29,30,31)
MR_decl_label1(libs__options__options_help_ctgc_2_0, 32)
MR_decl_label10(libs__options__options_help_hlds_elds_optimization_2_0, 2,3,4,5,6,7,8,9,10,11)
MR_decl_label5(libs__options__options_help_hlds_elds_optimization_2_0, 12,13,14,15,16)
MR_decl_label1(libs__options__options_help_hlds_hlds_optimization_2_0, 2)
MR_decl_label10(libs__options__options_help_hlds_llds_optimization_2_0, 2,3,4,5,6,7,8,9,10,11)
MR_decl_label10(libs__options__options_help_hlds_llds_optimization_2_0, 12,13,14,15,16,17,18,19,20,21)
MR_decl_label2(libs__options__options_help_hlds_llds_optimization_2_0, 22,23)
MR_decl_label1(libs__options__options_help_link_2_0, 2)
MR_decl_label10(libs__options__options_help_llds_llds_optimization_2_0, 2,3,4,5,6,7,8,9,10,11)
MR_decl_label10(libs__options__options_help_llds_llds_optimization_2_0, 12,13,14,15,16,17,18,19,20,21)
MR_decl_label5(libs__options__options_help_llds_llds_optimization_2_0, 22,23,24,25,26)
MR_decl_label10(libs__options__options_help_misc_2_0, 2,3,4,5,6,7,8,9,10,11)
MR_decl_label10(libs__options__options_help_misc_2_0, 12,13,14,15,16,17,18,19,20,21)
MR_decl_label10(libs__options__options_help_misc_2_0, 22,23,24,25,26,27,28,29,30,31)
MR_decl_label1(libs__options__options_help_misc_2_0, 32)
MR_decl_label10(libs__options__options_help_mlds_mlds_optimization_2_0, 2,3,4,5,6,7,8,9,10,11)
MR_decl_label10(libs__options__options_help_mlds_mlds_optimization_2_0, 12,13,14,15,16,17,18,19,20,21)
MR_decl_label10(libs__options__options_help_mlds_mlds_optimization_2_0, 22,23,24,25,26,27,28,29,30,31)
MR_decl_label4(libs__options__options_help_mlds_mlds_optimization_2_0, 32,33,34,35)
MR_decl_label10(libs__options__options_help_optimization_2_0, 2,3,4,5,6,7,8,9,10,11)
MR_decl_label10(libs__options__options_help_optimization_2_0, 12,13,14,15,16,17,18,19,20,21)
MR_decl_label2(libs__options__options_help_optimization_2_0, 22,23)
MR_decl_label4(libs__options__options_help_output_2_0, 2,3,4,5)
MR_decl_label10(libs__options__options_help_output_optimization_2_0, 2,3,4,5,6,7,8,9,10,11)
MR_decl_label10(libs__options__options_help_output_optimization_2_0, 12,13,14,15,16,17,18,19,20,21)
MR_decl_label10(libs__options__options_help_output_optimization_2_0, 22,23,24,25,26,27,28,29,30,31)
MR_decl_label1(libs__options__options_help_output_optimization_2_0, 32)
MR_decl_label7(libs__options__options_help_target_code_compilation_2_0, 2,3,4,5,6,7,8)
MR_decl_label10(libs__options__options_help_termination_2_0, 2,3,4,5,6,7,8,9,10,11)
MR_decl_label10(libs__options__options_help_termination_2_0, 12,13,14,15,16,17,18,19,20,21)
MR_decl_label8(libs__options__options_help_termination_2_0, 22,23,24,25,26,27,28,29)
MR_decl_label10(libs__options__options_help_verbosity_2_0, 2,3,4,5,6,7,8,9,10,11)
MR_decl_label3(libs__options__options_help_verbosity_2_0, 12,13,14)
MR_decl_label1(libs__options__options_help_warning_2_0, 2)
MR_decl_label3(libs__options__override_options_3_0, 10,3,4)
MR_decl_label2(libs__options__set_opt_level_3_0, 2,3)
MR_decl_label1(libs__options__short_option_2_0, 1)
MR_decl_label10(libs__options__special_handler_4_0, 6,3,13,14,15,10,19,27,24,31)
MR_decl_label10(libs__options__special_handler_4_0, 40,38,43,44,36,47,55,52,59,72)
MR_decl_label10(libs__options__special_handler_4_0, 70,126,127,128,130,123,137,145,142,153)
MR_decl_label10(libs__options__special_handler_4_0, 152,156,151,149,164,166,167,161,170,176)
MR_decl_label10(libs__options__special_handler_4_0, 186,180,198,197,196,194,208,205,213,215)
MR_decl_label10(libs__options__special_handler_4_0, 220,211,225,223,231,228,237,238,240,234)
MR_decl_label10(libs__options__special_handler_4_0, 243,247,251,255,259,263,267,274,271,277)
MR_decl_label9(libs__options__special_handler_4_0, 281,288,289,291,285,294,302,304,1)
MR_decl_label5(libs__options__write_tabbed_lines_3_0, 12,4,5,6,14)
MR_decl_label2(fn__libs__options__append_to_accumulating_option_2_0, 2,4)
MR_decl_label3(fn__libs__options__option_table_add_mercury_library_directory_2_0, 4,6,8)
MR_decl_label10(fn__libs__options__quote_arg_1_0, 4,10,12,13,11,45,7,2,20,21)
MR_decl_label9(fn__libs__options__quote_arg_1_0, 23,28,32,34,30,26,36,37,38)
MR_decl_label6(fn__libs__options__quote_arg_unix_1_0, 14,15,5,4,13,2)
MR_def_extern_entry(libs__options__short_option_2_0)
MR_def_extern_entry(libs__options__long_option_2_0)
MR_decl_static(libs__options__option_defaults_2_2_0)
MR_decl_static(libs__options__option_defaults_2_2_1)
MR_def_extern_entry(libs__options__option_defaults_2_0)
MR_def_extern_entry(fn__libs__options__option_table_add_mercury_library_directory_2_0)
MR_def_extern_entry(fn__libs__options__option_table_add_search_library_files_directory_2_0)
MR_decl_static(libs__options__override_options_3_0)
MR_decl_static(libs__options__opt_level_3_0)
MR_decl_static(libs__options__enable_opt_levels_4_0)
MR_decl_static(libs__options__set_opt_level_3_0)
MR_decl_static(libs__options__opt_space_1_0)
MR_decl_static(fn__libs__options__quote_arg_unix_1_0)
MR_def_extern_entry(fn__libs__options__quote_arg_1_0)
MR_decl_static(fn__libs__options__append_to_accumulating_option_2_0)
MR_decl_static(libs__options__handle_quoted_flag_4_0)
MR_def_extern_entry(libs__options__special_handler_4_0)
MR_def_extern_entry(libs__options__inconsequential_options_1_0)
MR_decl_static(libs__options__write_tabbed_lines_3_0)
MR_decl_static(libs__options__options_help_warning_2_0)
MR_decl_static(libs__options__options_help_verbosity_2_0)
MR_decl_static(libs__options__options_help_output_2_0)
MR_decl_static(libs__options__options_help_aux_output_2_0)
MR_decl_static(libs__options__options_help_ctgc_2_0)
MR_decl_static(libs__options__options_help_termination_2_0)
MR_decl_static(libs__options__options_help_compilation_model_2_0)
MR_decl_static(libs__options__options_help_code_generation_2_0)
MR_decl_static(libs__options__options_help_optimization_2_0)
MR_decl_static(libs__options__options_help_hlds_hlds_optimization_2_0)
MR_decl_static(libs__options__options_help_hlds_llds_optimization_2_0)
MR_decl_static(libs__options__options_help_llds_llds_optimization_2_0)
MR_decl_static(libs__options__options_help_mlds_mlds_optimization_2_0)
MR_decl_static(libs__options__options_help_hlds_elds_optimization_2_0)
MR_decl_static(libs__options__options_help_output_optimization_2_0)
MR_decl_static(libs__options__options_help_target_code_compilation_2_0)
MR_decl_static(libs__options__options_help_link_2_0)
MR_decl_static(libs__options__options_help_build_system_2_0)
MR_decl_static(libs__options__options_help_misc_2_0)
MR_def_extern_entry(libs__options__options_help_2_0)
MR_def_extern_entry(__Unify___libs__options__maybe_option_table_0_0)
MR_def_extern_entry(__Compare___libs__options__maybe_option_table_0_0)
MR_def_extern_entry(__Unify___libs__options__option_0_0)
MR_def_extern_entry(__Compare___libs__options__option_0_0)
MR_decl_static(__Unify___libs__options__option_category_0_0)
MR_decl_static(__Compare___libs__options__option_category_0_0)
MR_def_extern_entry(__Unify___libs__options__option_table_0_0)
MR_def_extern_entry(__Compare___libs__options__option_table_0_0)

static const struct mercury_type_0 mercury_common_0[1] =
{
{
{
12314225,
62652144
}
},
};

static const struct mercury_type_1 mercury_common_1[28] =
{
{
1
},
{
0
},
{
90
},
{
1024
},
{
-1
},
{
6
},
{
5
},
{
8
},
{
2
},
{
4
},
{
32
},
{
3
},
{
30
},
{
60
},
{
3000
},
{
50
},
{
25
},
{
100
},
{
15
},
{
200
},
{
1000
},
{
10
},
{
20
},
{
70
},
{
256
},
{
-2
},
{
40
},
{
16399
},
};

static const struct mercury_type_3 mercury_common_3[673] =
{
{
141,
MR_TAG_COMMON(1,1,0)
},
{
140,
MR_TAG_COMMON(1,1,1)
},
{
139,
MR_TAG_COMMON(2,1,0)
},
{
138,
MR_TAG_COMMON(1,1,1)
},
{
137,
MR_TAG_COMMON(1,1,1)
},
{
136,
MR_TAG_COMMON(1,1,1)
},
{
135,
MR_TAG_COMMON(1,1,1)
},
{
3,
MR_tbmkword(0, 0)
},
{
134,
MR_TAG_COMMON(3,3,7)
},
{
133,
MR_TAG_COMMON(3,3,7)
},
{
132,
MR_TAG_COMMON(1,1,1)
},
{
131,
MR_TAG_COMMON(3,5,0)
},
{
130,
MR_TAG_COMMON(3,5,0)
},
{
129,
MR_TAG_COMMON(3,5,0)
},
{
128,
MR_TAG_COMMON(3,3,7)
},
{
127,
MR_TAG_COMMON(3,3,7)
},
{
126,
MR_TAG_COMMON(3,3,7)
},
{
125,
MR_TAG_COMMON(3,3,7)
},
{
124,
MR_TAG_COMMON(1,1,1)
},
{
123,
MR_TAG_COMMON(1,1,1)
},
{
122,
MR_TAG_COMMON(1,1,1)
},
{
121,
MR_TAG_COMMON(1,1,1)
},
{
120,
MR_TAG_COMMON(1,1,0)
},
{
119,
MR_TAG_COMMON(1,1,1)
},
{
118,
MR_TAG_COMMON(1,1,1)
},
{
117,
MR_TAG_COMMON(1,1,1)
},
{
116,
MR_TAG_COMMON(1,1,0)
},
{
115,
MR_TAG_COMMON(1,1,1)
},
{
114,
MR_TAG_COMMON(3,5,0)
},
{
113,
MR_TAG_COMMON(1,1,1)
},
{
112,
MR_TAG_COMMON(1,1,1)
},
{
111,
MR_TAG_COMMON(3,3,7)
},
{
110,
MR_TAG_COMMON(1,1,1)
},
{
109,
MR_TAG_COMMON(1,1,1)
},
{
108,
MR_TAG_COMMON(1,1,1)
},
{
107,
MR_TAG_COMMON(1,1,1)
},
{
106,
MR_TAG_COMMON(1,1,1)
},
{
105,
MR_TAG_COMMON(1,1,1)
},
{
104,
MR_TAG_COMMON(1,1,1)
},
{
103,
MR_TAG_COMMON(3,5,1)
},
{
102,
MR_TAG_COMMON(1,1,0)
},
{
101,
MR_TAG_COMMON(1,1,1)
},
{
100,
MR_TAG_COMMON(1,1,1)
},
{
99,
MR_TAG_COMMON(1,1,1)
},
{
605,
MR_TAG_COMMON(1,1,1)
},
{
604,
MR_TAG_COMMON(3,3,7)
},
{
603,
MR_TAG_COMMON(1,1,1)
},
{
602,
MR_TAG_COMMON(1,1,1)
},
{
601,
MR_TAG_COMMON(1,1,0)
},
{
600,
MR_TAG_COMMON(1,1,0)
},
{
599,
MR_TAG_COMMON(3,3,7)
},
{
3,
MR_TAG_COMMON(1,6,0)
},
{
598,
MR_TAG_COMMON(3,3,51)
},
{
597,
MR_TAG_COMMON(1,1,1)
},
{
596,
MR_TAG_COMMON(1,1,1)
},
{
595,
MR_TAG_COMMON(3,3,51)
},
{
2,
MR_TAG_COMMON(1,7,0)
},
{
594,
MR_TAG_COMMON(3,3,56)
},
{
3,
MR_TAG_COMMON(1,6,1)
},
{
593,
MR_TAG_COMMON(3,3,58)
},
{
592,
MR_tbmkword(0, 5)
},
{
591,
MR_TAG_COMMON(3,3,7)
},
{
590,
MR_TAG_COMMON(3,3,7)
},
{
589,
MR_TAG_COMMON(3,3,7)
},
{
588,
MR_TAG_COMMON(3,3,7)
},
{
587,
MR_TAG_COMMON(3,5,2)
},
{
586,
MR_TAG_COMMON(3,5,3)
},
{
2,
MR_tbmkword(0, 0)
},
{
584,
MR_TAG_COMMON(3,3,67)
},
{
585,
MR_tbmkword(0, 3)
},
{
583,
MR_TAG_COMMON(1,1,0)
},
{
582,
MR_TAG_COMMON(3,5,4)
},
{
580,
MR_TAG_COMMON(3,3,67)
},
{
581,
MR_TAG_COMMON(3,3,67)
},
{
579,
MR_TAG_COMMON(1,1,1)
},
{
578,
MR_TAG_COMMON(1,1,1)
},
{
577,
MR_TAG_COMMON(2,1,0)
},
{
576,
MR_TAG_COMMON(1,1,1)
},
{
575,
MR_TAG_COMMON(1,1,1)
},
{
574,
MR_TAG_COMMON(1,1,1)
},
{
297,
MR_TAG_COMMON(1,1,0)
},
{
296,
MR_TAG_COMMON(1,1,0)
},
{
295,
MR_TAG_COMMON(1,1,1)
},
{
294,
MR_TAG_COMMON(2,1,2)
},
{
293,
MR_TAG_COMMON(2,1,3)
},
{
292,
MR_TAG_COMMON(1,1,0)
},
{
291,
MR_TAG_COMMON(2,1,4)
},
{
290,
MR_TAG_COMMON(2,1,5)
},
{
289,
MR_TAG_COMMON(2,1,6)
},
{
288,
MR_TAG_COMMON(2,1,1)
},
{
287,
MR_TAG_COMMON(1,1,1)
},
{
286,
MR_TAG_COMMON(2,1,1)
},
{
285,
MR_TAG_COMMON(2,1,6)
},
{
284,
MR_TAG_COMMON(2,1,1)
},
{
283,
MR_TAG_COMMON(2,1,6)
},
{
282,
MR_TAG_COMMON(1,1,1)
},
{
281,
MR_TAG_COMMON(1,1,0)
},
{
280,
MR_TAG_COMMON(1,1,0)
},
{
279,
MR_tbmkword(0, 1)
},
{
278,
MR_TAG_COMMON(1,1,0)
},
{
277,
MR_TAG_COMMON(1,1,1)
},
{
276,
MR_TAG_COMMON(1,1,1)
},
{
275,
MR_TAG_COMMON(1,1,0)
},
{
274,
MR_TAG_COMMON(1,1,1)
},
{
273,
MR_TAG_COMMON(1,1,1)
},
{
236,
MR_TAG_COMMON(1,1,1)
},
{
234,
MR_TAG_COMMON(1,1,1)
},
{
235,
MR_TAG_COMMON(1,1,1)
},
{
233,
MR_TAG_COMMON(1,1,1)
},
{
232,
MR_TAG_COMMON(1,1,1)
},
{
231,
MR_TAG_COMMON(1,1,1)
},
{
230,
MR_TAG_COMMON(1,1,1)
},
{
229,
MR_TAG_COMMON(1,1,1)
},
{
228,
MR_TAG_COMMON(1,1,1)
},
{
227,
MR_TAG_COMMON(1,1,1)
},
{
226,
MR_TAG_COMMON(1,1,1)
},
{
225,
MR_TAG_COMMON(1,1,1)
},
{
223,
MR_TAG_COMMON(1,1,0)
},
{
222,
MR_TAG_COMMON(1,1,0)
},
{
221,
MR_TAG_COMMON(1,1,0)
},
{
219,
MR_TAG_COMMON(1,1,0)
},
{
218,
MR_TAG_COMMON(1,1,0)
},
{
217,
MR_TAG_COMMON(1,1,1)
},
{
220,
MR_TAG_COMMON(2,1,7)
},
{
216,
MR_TAG_COMMON(2,1,8)
},
{
215,
MR_TAG_COMMON(2,1,9)
},
{
214,
MR_TAG_COMMON(2,1,10)
},
{
213,
MR_TAG_COMMON(2,1,1)
},
{
212,
MR_TAG_COMMON(2,1,1)
},
{
211,
MR_TAG_COMMON(2,1,4)
},
{
210,
MR_TAG_COMMON(3,5,5)
},
{
224,
MR_TAG_COMMON(1,1,1)
},
{
209,
MR_TAG_COMMON(1,1,1)
},
{
201,
MR_TAG_COMMON(1,1,0)
},
{
200,
MR_TAG_COMMON(1,1,1)
},
{
199,
MR_TAG_COMMON(1,1,1)
},
{
198,
MR_TAG_COMMON(1,1,1)
},
{
197,
MR_TAG_COMMON(1,1,1)
},
{
208,
MR_TAG_COMMON(1,1,1)
},
{
207,
MR_TAG_COMMON(1,1,1)
},
{
206,
MR_TAG_COMMON(1,1,0)
},
{
205,
MR_TAG_COMMON(1,1,1)
},
{
204,
MR_TAG_COMMON(1,1,1)
},
{
203,
MR_TAG_COMMON(1,1,1)
},
{
202,
MR_TAG_COMMON(3,5,6)
},
{
196,
MR_TAG_COMMON(1,1,1)
},
{
195,
MR_TAG_COMMON(1,1,1)
},
{
194,
MR_TAG_COMMON(1,1,1)
},
{
193,
MR_TAG_COMMON(1,1,1)
},
{
192,
MR_TAG_COMMON(3,5,7)
},
{
191,
MR_TAG_COMMON(3,5,0)
},
{
190,
MR_TAG_COMMON(1,1,1)
},
{
189,
MR_TAG_COMMON(1,1,1)
},
{
188,
MR_TAG_COMMON(1,1,1)
},
{
187,
MR_TAG_COMMON(1,1,1)
},
{
186,
MR_TAG_COMMON(1,1,0)
},
{
185,
MR_TAG_COMMON(1,1,1)
},
{
184,
MR_TAG_COMMON(1,1,1)
},
{
183,
MR_TAG_COMMON(1,1,1)
},
{
182,
MR_TAG_COMMON(1,1,0)
},
{
181,
MR_TAG_COMMON(1,1,0)
},
{
180,
MR_TAG_COMMON(1,1,0)
},
{
179,
MR_TAG_COMMON(1,1,0)
},
{
178,
MR_TAG_COMMON(1,1,1)
},
{
177,
MR_TAG_COMMON(1,1,1)
},
{
176,
MR_TAG_COMMON(1,1,1)
},
{
175,
MR_TAG_COMMON(1,1,1)
},
{
174,
MR_TAG_COMMON(1,1,1)
},
{
173,
MR_TAG_COMMON(1,1,1)
},
{
172,
MR_TAG_COMMON(1,1,1)
},
{
171,
MR_TAG_COMMON(1,1,1)
},
{
170,
MR_tbmkword(0, 0)
},
{
169,
MR_tbmkword(0, 0)
},
{
168,
MR_tbmkword(0, 0)
},
{
167,
MR_tbmkword(0, 1)
},
{
166,
MR_TAG_COMMON(1,1,1)
},
{
165,
MR_TAG_COMMON(1,1,1)
},
{
164,
MR_tbmkword(0, 0)
},
{
163,
MR_tbmkword(0, 0)
},
{
162,
MR_tbmkword(0, 0)
},
{
161,
MR_tbmkword(0, 0)
},
{
160,
MR_tbmkword(0, 0)
},
{
159,
MR_tbmkword(0, 0)
},
{
158,
MR_tbmkword(0, 0)
},
{
157,
MR_tbmkword(0, 0)
},
{
156,
MR_tbmkword(0, 0)
},
{
155,
MR_TAG_COMMON(3,5,8)
},
{
154,
MR_tbmkword(0, 3)
},
{
272,
MR_TAG_COMMON(1,1,1)
},
{
271,
MR_TAG_COMMON(1,1,0)
},
{
270,
MR_TAG_COMMON(1,1,1)
},
{
269,
MR_TAG_COMMON(2,1,0)
},
{
268,
MR_TAG_COMMON(2,1,11)
},
{
267,
MR_TAG_COMMON(2,1,0)
},
{
266,
MR_TAG_COMMON(2,1,11)
},
{
265,
MR_TAG_COMMON(2,1,0)
},
{
264,
MR_TAG_COMMON(2,1,9)
},
{
262,
MR_TAG_COMMON(2,1,9)
},
{
261,
MR_TAG_COMMON(2,1,9)
},
{
260,
MR_TAG_COMMON(1,1,1)
},
{
259,
MR_TAG_COMMON(1,1,1)
},
{
258,
MR_TAG_COMMON(1,1,1)
},
{
257,
MR_TAG_COMMON(1,1,1)
},
{
256,
MR_TAG_COMMON(1,1,1)
},
{
254,
MR_TAG_COMMON(1,1,1)
},
{
255,
MR_TAG_COMMON(1,1,0)
},
{
253,
MR_TAG_COMMON(1,1,0)
},
{
252,
MR_TAG_COMMON(1,1,0)
},
{
251,
MR_TAG_COMMON(1,1,0)
},
{
250,
MR_TAG_COMMON(1,1,0)
},
{
249,
MR_TAG_COMMON(1,1,1)
},
{
248,
MR_TAG_COMMON(1,1,0)
},
{
247,
MR_TAG_COMMON(1,1,1)
},
{
246,
MR_TAG_COMMON(1,1,1)
},
{
245,
MR_TAG_COMMON(1,1,1)
},
{
244,
MR_TAG_COMMON(1,1,1)
},
{
243,
MR_TAG_COMMON(1,1,1)
},
{
242,
MR_TAG_COMMON(1,1,1)
},
{
241,
MR_TAG_COMMON(1,1,1)
},
{
240,
MR_TAG_COMMON(1,1,1)
},
{
239,
MR_TAG_COMMON(1,1,1)
},
{
238,
MR_TAG_COMMON(1,1,1)
},
{
237,
MR_TAG_COMMON(3,3,7)
},
{
153,
MR_TAG_COMMON(3,5,0)
},
{
152,
MR_TAG_COMMON(2,1,12)
},
{
151,
MR_TAG_COMMON(2,1,13)
},
{
150,
MR_tbmkword(0, 1)
},
{
149,
MR_TAG_COMMON(1,1,0)
},
{
148,
MR_TAG_COMMON(1,1,1)
},
{
147,
MR_TAG_COMMON(1,1,1)
},
{
146,
MR_TAG_COMMON(1,1,1)
},
{
144,
MR_TAG_COMMON(1,1,0)
},
{
143,
MR_TAG_COMMON(1,1,0)
},
{
142,
MR_TAG_COMMON(1,1,0)
},
{
145,
MR_tbmkword(0, 0)
},
{
573,
MR_TAG_COMMON(3,5,9)
},
{
572,
MR_TAG_COMMON(3,5,0)
},
{
571,
MR_TAG_COMMON(3,5,10)
},
{
570,
MR_TAG_COMMON(1,1,1)
},
{
569,
MR_TAG_COMMON(3,5,11)
},
{
568,
MR_TAG_COMMON(3,5,0)
},
{
567,
MR_TAG_COMMON(3,5,12)
},
{
566,
MR_TAG_COMMON(3,5,13)
},
{
565,
MR_TAG_COMMON(3,5,12)
},
{
564,
MR_TAG_COMMON(3,5,13)
},
{
563,
MR_TAG_COMMON(3,5,14)
},
{
558,
MR_TAG_COMMON(3,5,0)
},
{
557,
MR_TAG_COMMON(3,5,15)
},
{
556,
MR_TAG_COMMON(3,5,0)
},
{
555,
MR_TAG_COMMON(3,5,15)
},
{
554,
MR_TAG_COMMON(3,5,16)
},
{
553,
MR_TAG_COMMON(3,5,17)
},
{
552,
MR_TAG_COMMON(3,5,0)
},
{
551,
MR_TAG_COMMON(3,5,0)
},
{
562,
MR_TAG_COMMON(3,5,18)
},
{
561,
MR_TAG_COMMON(3,5,18)
},
{
560,
MR_TAG_COMMON(3,5,18)
},
{
559,
MR_TAG_COMMON(3,5,18)
},
{
550,
MR_TAG_COMMON(3,5,0)
},
{
549,
MR_TAG_COMMON(3,5,0)
},
{
548,
MR_TAG_COMMON(3,5,0)
},
{
547,
MR_TAG_COMMON(3,5,0)
},
{
546,
MR_TAG_COMMON(3,5,0)
},
{
545,
MR_TAG_COMMON(3,5,0)
},
{
544,
MR_TAG_COMMON(3,5,19)
},
{
543,
MR_TAG_COMMON(3,5,20)
},
{
542,
MR_TAG_COMMON(3,5,21)
},
{
541,
MR_TAG_COMMON(3,5,0)
},
{
540,
MR_TAG_COMMON(3,5,0)
},
{
539,
MR_TAG_COMMON(3,3,7)
},
{
538,
MR_TAG_COMMON(3,5,0)
},
{
537,
MR_TAG_COMMON(3,5,22)
},
{
536,
MR_TAG_COMMON(3,5,23)
},
{
535,
MR_TAG_COMMON(3,5,24)
},
{
534,
MR_TAG_COMMON(3,5,0)
},
{
533,
MR_TAG_COMMON(3,5,25)
},
{
532,
MR_TAG_COMMON(3,5,26)
},
{
531,
MR_TAG_COMMON(1,1,1)
},
{
530,
MR_TAG_COMMON(3,3,7)
},
{
529,
MR_TAG_COMMON(1,1,0)
},
{
528,
MR_TAG_COMMON(1,1,0)
},
{
527,
MR_TAG_COMMON(1,1,0)
},
{
525,
MR_TAG_COMMON(1,1,0)
},
{
526,
MR_TAG_COMMON(1,1,0)
},
{
524,
MR_tbmkword(0, 3)
},
{
523,
MR_TAG_COMMON(3,5,27)
},
{
522,
MR_tbmkword(0, 3)
},
{
521,
MR_TAG_COMMON(3,5,27)
},
{
520,
MR_TAG_COMMON(3,3,7)
},
{
519,
MR_TAG_COMMON(3,3,7)
},
{
518,
MR_TAG_COMMON(3,3,7)
},
{
517,
MR_tbmkword(0, 4)
},
{
516,
MR_TAG_COMMON(3,3,67)
},
{
514,
MR_TAG_COMMON(3,3,7)
},
{
515,
MR_tbmkword(0, 3)
},
{
512,
MR_TAG_COMMON(3,3,7)
},
{
513,
MR_tbmkword(0, 3)
},
{
510,
MR_TAG_COMMON(3,3,7)
},
{
511,
MR_tbmkword(0, 3)
},
{
509,
MR_TAG_COMMON(3,3,7)
},
{
508,
MR_TAG_COMMON(3,3,7)
},
{
507,
MR_TAG_COMMON(3,3,7)
},
{
506,
MR_TAG_COMMON(3,3,7)
},
{
505,
MR_tbmkword(0, 3)
},
{
504,
MR_TAG_COMMON(3,3,7)
},
{
503,
MR_tbmkword(0, 3)
},
{
502,
MR_TAG_COMMON(3,3,7)
},
{
501,
MR_TAG_COMMON(3,5,0)
},
{
617,
MR_TAG_COMMON(3,5,0)
},
{
616,
MR_TAG_COMMON(3,5,0)
},
{
615,
MR_TAG_COMMON(1,1,1)
},
{
614,
MR_TAG_COMMON(3,5,0)
},
{
613,
MR_TAG_COMMON(3,3,7)
},
{
612,
MR_TAG_COMMON(1,1,1)
},
{
611,
MR_TAG_COMMON(3,5,0)
},
{
610,
MR_TAG_COMMON(1,1,1)
},
{
609,
MR_TAG_COMMON(1,1,1)
},
{
608,
MR_TAG_COMMON(2,1,14)
},
{
607,
MR_TAG_COMMON(2,1,15)
},
{
606,
MR_TAG_COMMON(1,1,1)
},
{
456,
MR_TAG_COMMON(1,1,1)
},
{
455,
MR_TAG_COMMON(1,1,0)
},
{
454,
MR_tbmkword(0, 0)
},
{
453,
MR_TAG_COMMON(2,1,0)
},
{
452,
MR_TAG_COMMON(1,1,1)
},
{
451,
MR_TAG_COMMON(1,1,1)
},
{
450,
MR_TAG_COMMON(2,1,1)
},
{
449,
MR_TAG_COMMON(1,1,1)
},
{
448,
MR_TAG_COMMON(1,1,1)
},
{
447,
MR_TAG_COMMON(1,1,1)
},
{
446,
MR_TAG_COMMON(1,1,1)
},
{
445,
MR_TAG_COMMON(1,1,1)
},
{
444,
MR_TAG_COMMON(1,1,1)
},
{
443,
MR_TAG_COMMON(1,1,1)
},
{
442,
MR_TAG_COMMON(2,1,8)
},
{
441,
MR_TAG_COMMON(1,1,1)
},
{
440,
MR_TAG_COMMON(1,1,1)
},
{
439,
MR_TAG_COMMON(1,1,1)
},
{
438,
MR_TAG_COMMON(1,1,1)
},
{
437,
MR_TAG_COMMON(1,1,1)
},
{
436,
MR_TAG_COMMON(1,1,1)
},
{
435,
MR_TAG_COMMON(1,1,1)
},
{
434,
MR_TAG_COMMON(1,1,0)
},
{
433,
MR_TAG_COMMON(1,1,1)
},
{
432,
MR_TAG_COMMON(1,1,0)
},
{
431,
MR_TAG_COMMON(1,1,1)
},
{
430,
MR_TAG_COMMON(1,1,1)
},
{
429,
MR_TAG_COMMON(1,1,1)
},
{
428,
MR_TAG_COMMON(1,1,0)
},
{
427,
MR_TAG_COMMON(1,1,1)
},
{
426,
MR_TAG_COMMON(1,1,1)
},
{
425,
MR_TAG_COMMON(1,1,1)
},
{
424,
MR_TAG_COMMON(1,1,1)
},
{
423,
MR_TAG_COMMON(1,1,1)
},
{
422,
MR_TAG_COMMON(1,1,1)
},
{
421,
MR_TAG_COMMON(1,1,0)
},
{
420,
MR_TAG_COMMON(1,1,1)
},
{
419,
MR_TAG_COMMON(2,1,9)
},
{
418,
MR_TAG_COMMON(2,1,11)
},
{
417,
MR_TAG_COMMON(2,1,11)
},
{
416,
MR_TAG_COMMON(2,1,7)
},
{
415,
MR_TAG_COMMON(2,1,9)
},
{
414,
MR_TAG_COMMON(2,1,9)
},
{
413,
MR_TAG_COMMON(2,1,16)
},
{
412,
MR_TAG_COMMON(2,1,16)
},
{
411,
MR_TAG_COMMON(1,1,1)
},
{
385,
MR_TAG_COMMON(1,1,1)
},
{
384,
MR_TAG_COMMON(1,1,1)
},
{
383,
MR_TAG_COMMON(1,1,1)
},
{
382,
MR_TAG_COMMON(2,1,9)
},
{
381,
MR_TAG_COMMON(2,1,1)
},
{
380,
MR_TAG_COMMON(1,1,1)
},
{
379,
MR_TAG_COMMON(1,1,0)
},
{
378,
MR_TAG_COMMON(1,1,1)
},
{
377,
MR_TAG_COMMON(1,1,1)
},
{
376,
MR_TAG_COMMON(2,1,9)
},
{
375,
MR_TAG_COMMON(2,1,17)
},
{
374,
MR_TAG_COMMON(3,5,0)
},
{
373,
MR_TAG_COMMON(1,1,1)
},
{
372,
MR_TAG_COMMON(1,1,1)
},
{
367,
MR_TAG_COMMON(2,1,18)
},
{
366,
MR_TAG_COMMON(2,1,19)
},
{
365,
MR_TAG_COMMON(2,1,20)
},
{
364,
MR_TAG_COMMON(2,1,9)
},
{
363,
MR_TAG_COMMON(1,1,1)
},
{
362,
MR_TAG_COMMON(1,1,1)
},
{
339,
MR_TAG_COMMON(1,1,1)
},
{
338,
MR_TAG_COMMON(1,1,1)
},
{
337,
MR_TAG_COMMON(1,1,1)
},
{
336,
MR_TAG_COMMON(1,1,1)
},
{
335,
MR_TAG_COMMON(1,1,1)
},
{
334,
MR_TAG_COMMON(1,1,1)
},
{
333,
MR_TAG_COMMON(3,3,7)
},
{
332,
MR_TAG_COMMON(1,1,1)
},
{
331,
MR_TAG_COMMON(2,1,21)
},
{
330,
MR_TAG_COMMON(1,1,1)
},
{
329,
MR_TAG_COMMON(2,1,21)
},
{
328,
MR_TAG_COMMON(2,1,22)
},
{
327,
MR_TAG_COMMON(1,1,1)
},
{
326,
MR_TAG_COMMON(1,1,1)
},
{
325,
MR_TAG_COMMON(1,1,1)
},
{
361,
MR_TAG_COMMON(1,1,1)
},
{
360,
MR_TAG_COMMON(1,1,1)
},
{
358,
MR_tbmkword(0, 1)
},
{
357,
MR_TAG_COMMON(1,1,0)
},
{
356,
MR_TAG_COMMON(2,1,17)
},
{
355,
MR_TAG_COMMON(2,1,17)
},
{
354,
MR_TAG_COMMON(2,1,17)
},
{
353,
MR_TAG_COMMON(2,1,0)
},
{
352,
MR_TAG_COMMON(2,1,0)
},
{
351,
MR_TAG_COMMON(2,1,0)
},
{
350,
MR_TAG_COMMON(2,1,11)
},
{
349,
MR_TAG_COMMON(1,1,0)
},
{
348,
MR_TAG_COMMON(1,1,0)
},
{
347,
MR_TAG_COMMON(1,1,0)
},
{
346,
MR_TAG_COMMON(1,1,0)
},
{
345,
MR_TAG_COMMON(1,1,1)
},
{
344,
MR_TAG_COMMON(1,1,1)
},
{
359,
MR_TAG_COMMON(1,1,1)
},
{
343,
MR_TAG_COMMON(1,1,0)
},
{
342,
MR_TAG_COMMON(1,1,1)
},
{
341,
MR_TAG_COMMON(1,1,1)
},
{
340,
MR_TAG_COMMON(1,1,1)
},
{
324,
MR_TAG_COMMON(1,1,1)
},
{
323,
MR_TAG_COMMON(1,1,1)
},
{
322,
MR_TAG_COMMON(1,1,0)
},
{
321,
MR_TAG_COMMON(3,5,0)
},
{
320,
MR_TAG_COMMON(1,1,1)
},
{
319,
MR_TAG_COMMON(2,1,6)
},
{
318,
MR_TAG_COMMON(2,1,6)
},
{
317,
MR_TAG_COMMON(2,1,17)
},
{
316,
MR_TAG_COMMON(2,1,6)
},
{
315,
MR_TAG_COMMON(2,1,1)
},
{
314,
MR_TAG_COMMON(2,1,1)
},
{
313,
MR_TAG_COMMON(1,1,1)
},
{
312,
MR_TAG_COMMON(1,1,0)
},
{
311,
MR_TAG_COMMON(1,1,1)
},
{
310,
MR_tbmkword(0, 1)
},
{
309,
MR_TAG_COMMON(1,1,0)
},
{
98,
MR_TAG_COMMON(1,1,1)
},
{
97,
MR_TAG_COMMON(1,1,1)
},
{
96,
MR_TAG_COMMON(1,1,1)
},
{
95,
MR_TAG_COMMON(1,1,1)
},
{
94,
MR_TAG_COMMON(1,1,1)
},
{
93,
MR_TAG_COMMON(1,1,1)
},
{
92,
MR_TAG_COMMON(1,1,1)
},
{
91,
MR_TAG_COMMON(1,1,1)
},
{
90,
MR_TAG_COMMON(1,1,1)
},
{
89,
MR_TAG_COMMON(1,1,1)
},
{
88,
MR_TAG_COMMON(1,1,1)
},
{
87,
MR_TAG_COMMON(1,1,1)
},
{
86,
MR_TAG_COMMON(1,1,1)
},
{
80,
MR_TAG_COMMON(1,1,1)
},
{
79,
MR_TAG_COMMON(1,1,1)
},
{
78,
MR_TAG_COMMON(1,1,1)
},
{
77,
MR_TAG_COMMON(1,1,1)
},
{
76,
MR_TAG_COMMON(1,1,1)
},
{
75,
MR_TAG_COMMON(1,1,1)
},
{
74,
MR_TAG_COMMON(1,1,1)
},
{
85,
MR_TAG_COMMON(3,3,67)
},
{
84,
MR_TAG_COMMON(1,1,1)
},
{
83,
MR_TAG_COMMON(1,1,1)
},
{
82,
MR_TAG_COMMON(1,1,1)
},
{
81,
MR_TAG_COMMON(1,1,1)
},
{
371,
MR_TAG_COMMON(1,1,1)
},
{
370,
MR_TAG_COMMON(1,1,1)
},
{
369,
MR_TAG_COMMON(1,1,1)
},
{
368,
MR_TAG_COMMON(1,1,1)
},
{
410,
MR_TAG_COMMON(1,1,1)
},
{
409,
MR_TAG_COMMON(1,1,1)
},
{
408,
MR_TAG_COMMON(2,1,23)
},
{
407,
MR_TAG_COMMON(1,1,0)
},
{
406,
MR_TAG_COMMON(1,1,1)
},
{
405,
MR_TAG_COMMON(2,1,9)
},
{
403,
MR_TAG_COMMON(1,1,1)
},
{
402,
MR_TAG_COMMON(1,1,1)
},
{
404,
MR_TAG_COMMON(3,5,28)
},
{
401,
MR_TAG_COMMON(1,1,1)
},
{
400,
MR_TAG_COMMON(2,1,24)
},
{
399,
MR_TAG_COMMON(2,1,11)
},
{
398,
MR_TAG_COMMON(3,5,28)
},
{
397,
MR_TAG_COMMON(2,1,1)
},
{
394,
MR_TAG_COMMON(1,1,1)
},
{
393,
MR_TAG_COMMON(1,1,1)
},
{
392,
MR_TAG_COMMON(2,1,1)
},
{
391,
MR_TAG_COMMON(2,1,21)
},
{
390,
MR_TAG_COMMON(2,1,1)
},
{
389,
MR_TAG_COMMON(3,5,29)
},
{
388,
MR_TAG_COMMON(1,1,1)
},
{
387,
MR_TAG_COMMON(2,1,1)
},
{
386,
MR_TAG_COMMON(1,1,1)
},
{
396,
MR_TAG_COMMON(1,1,1)
},
{
395,
MR_TAG_COMMON(1,1,1)
},
{
308,
MR_TAG_COMMON(1,1,1)
},
{
307,
MR_TAG_COMMON(2,1,1)
},
{
306,
MR_TAG_COMMON(1,1,1)
},
{
305,
MR_TAG_COMMON(1,1,1)
},
{
304,
MR_TAG_COMMON(1,1,1)
},
{
303,
MR_TAG_COMMON(1,1,1)
},
{
302,
MR_TAG_COMMON(1,1,0)
},
{
301,
MR_TAG_COMMON(1,1,1)
},
{
300,
MR_tbmkword(0, 0)
},
{
299,
MR_TAG_COMMON(2,1,25)
},
{
298,
MR_tbmkword(0, 2)
},
{
500,
MR_TAG_COMMON(1,1,0)
},
{
499,
MR_TAG_COMMON(1,1,1)
},
{
498,
MR_TAG_COMMON(3,5,30)
},
{
497,
MR_TAG_COMMON(3,3,7)
},
{
496,
MR_tbmkword(0, 3)
},
{
495,
MR_TAG_COMMON(3,3,7)
},
{
494,
MR_TAG_COMMON(3,5,31)
},
{
493,
MR_TAG_COMMON(3,5,32)
},
{
492,
MR_tbmkword(0, 3)
},
{
491,
MR_TAG_COMMON(3,3,7)
},
{
490,
MR_TAG_COMMON(3,5,33)
},
{
489,
MR_TAG_COMMON(1,1,1)
},
{
488,
MR_TAG_COMMON(1,1,0)
},
{
487,
MR_TAG_COMMON(3,5,34)
},
{
486,
MR_tbmkword(0, 3)
},
{
485,
MR_TAG_COMMON(3,3,7)
},
{
484,
MR_TAG_COMMON(3,5,35)
},
{
483,
MR_TAG_COMMON(3,5,36)
},
{
482,
MR_TAG_COMMON(3,3,7)
},
{
481,
MR_tbmkword(0, 3)
},
{
480,
MR_TAG_COMMON(3,3,7)
},
{
479,
MR_TAG_COMMON(3,5,37)
},
{
478,
MR_TAG_COMMON(3,5,38)
},
{
477,
MR_TAG_COMMON(3,5,24)
},
{
476,
MR_TAG_COMMON(3,5,39)
},
{
475,
MR_TAG_COMMON(3,5,39)
},
{
474,
MR_TAG_COMMON(3,5,39)
},
{
473,
MR_TAG_COMMON(3,5,40)
},
{
472,
MR_TAG_COMMON(3,5,0)
},
{
471,
MR_TAG_COMMON(3,5,18)
},
{
470,
MR_TAG_COMMON(3,5,0)
},
{
469,
MR_TAG_COMMON(3,5,0)
},
{
468,
MR_TAG_COMMON(3,5,0)
},
{
467,
MR_TAG_COMMON(3,5,0)
},
{
466,
MR_TAG_COMMON(3,5,41)
},
{
465,
MR_TAG_COMMON(3,5,0)
},
{
460,
MR_tbmkword(0, 3)
},
{
459,
MR_TAG_COMMON(3,3,7)
},
{
464,
MR_TAG_COMMON(1,1,1)
},
{
463,
MR_TAG_COMMON(1,1,0)
},
{
462,
MR_TAG_COMMON(1,1,1)
},
{
461,
MR_TAG_COMMON(3,3,7)
},
{
458,
MR_TAG_COMMON(3,5,24)
},
{
457,
MR_TAG_COMMON(1,1,1)
},
{
73,
MR_TAG_COMMON(1,1,1)
},
{
72,
MR_TAG_COMMON(1,1,1)
},
{
71,
MR_TAG_COMMON(1,1,1)
},
{
70,
MR_TAG_COMMON(1,1,1)
},
{
69,
MR_TAG_COMMON(1,1,1)
},
{
68,
MR_TAG_COMMON(1,1,1)
},
{
67,
MR_TAG_COMMON(1,1,1)
},
{
66,
MR_TAG_COMMON(2,1,4)
},
{
65,
MR_TAG_COMMON(2,1,4)
},
{
64,
MR_TAG_COMMON(1,1,1)
},
{
63,
MR_TAG_COMMON(1,1,1)
},
{
62,
MR_TAG_COMMON(3,3,7)
},
{
61,
MR_TAG_COMMON(3,3,7)
},
{
59,
MR_TAG_COMMON(1,1,1)
},
{
60,
MR_TAG_COMMON(1,1,1)
},
{
58,
MR_TAG_COMMON(2,1,4)
},
{
57,
MR_TAG_COMMON(1,1,1)
},
{
56,
MR_TAG_COMMON(3,3,7)
},
{
55,
MR_TAG_COMMON(2,1,4)
},
{
54,
MR_TAG_COMMON(1,1,1)
},
{
53,
MR_TAG_COMMON(1,1,1)
},
{
52,
MR_TAG_COMMON(1,1,1)
},
{
51,
MR_TAG_COMMON(1,1,1)
},
{
50,
MR_TAG_COMMON(1,1,1)
},
{
49,
MR_TAG_COMMON(3,5,0)
},
{
48,
MR_TAG_COMMON(1,1,1)
},
{
47,
MR_TAG_COMMON(1,1,1)
},
{
46,
MR_TAG_COMMON(2,1,18)
},
{
45,
MR_TAG_COMMON(1,1,1)
},
{
44,
MR_TAG_COMMON(1,1,0)
},
{
43,
MR_TAG_COMMON(1,1,1)
},
{
42,
MR_TAG_COMMON(1,1,1)
},
{
41,
MR_TAG_COMMON(1,1,1)
},
{
40,
MR_TAG_COMMON(1,1,1)
},
{
39,
MR_TAG_COMMON(1,1,1)
},
{
38,
MR_TAG_COMMON(1,1,1)
},
{
37,
MR_TAG_COMMON(1,1,0)
},
{
36,
MR_TAG_COMMON(1,1,1)
},
{
35,
MR_TAG_COMMON(1,1,1)
},
{
34,
MR_TAG_COMMON(1,1,0)
},
{
33,
MR_TAG_COMMON(1,1,0)
},
{
32,
MR_TAG_COMMON(1,1,1)
},
{
31,
MR_TAG_COMMON(1,1,0)
},
{
30,
MR_TAG_COMMON(1,1,0)
},
{
29,
MR_TAG_COMMON(1,1,0)
},
{
28,
MR_TAG_COMMON(1,1,1)
},
{
27,
MR_TAG_COMMON(1,1,0)
},
{
26,
MR_TAG_COMMON(1,1,0)
},
{
25,
MR_TAG_COMMON(1,1,0)
},
{
24,
MR_TAG_COMMON(1,1,1)
},
{
23,
MR_TAG_COMMON(1,1,0)
},
{
22,
MR_TAG_COMMON(1,1,0)
},
{
21,
MR_TAG_COMMON(1,1,0)
},
{
20,
MR_TAG_COMMON(1,1,0)
},
{
19,
MR_TAG_COMMON(1,1,1)
},
{
18,
MR_TAG_COMMON(1,1,0)
},
{
17,
MR_TAG_COMMON(1,1,0)
},
{
13,
MR_TAG_COMMON(1,1,0)
},
{
12,
MR_TAG_COMMON(1,1,1)
},
{
11,
MR_TAG_COMMON(1,1,0)
},
{
16,
MR_TAG_COMMON(1,1,1)
},
{
15,
MR_TAG_COMMON(1,1,1)
},
{
14,
MR_TAG_COMMON(1,1,1)
},
{
10,
MR_TAG_COMMON(1,1,0)
},
{
9,
MR_TAG_COMMON(1,1,1)
},
{
8,
MR_TAG_COMMON(1,1,0)
},
{
7,
MR_TAG_COMMON(1,1,0)
},
{
6,
MR_TAG_COMMON(1,1,0)
},
{
5,
MR_TAG_COMMON(1,1,0)
},
{
4,
MR_TAG_COMMON(1,1,0)
},
{
3,
MR_TAG_COMMON(1,1,1)
},
{
2,
MR_TAG_COMMON(1,1,1)
},
{
1,
MR_TAG_COMMON(1,1,1)
},
{
0,
MR_tbmkword(0, 1)
},
{
342,
MR_TAG_COMMON(1,1,0)
},
{
362,
MR_TAG_COMMON(1,1,0)
},
{
444,
MR_TAG_COMMON(1,1,0)
},
{
437,
MR_TAG_COMMON(1,1,0)
},
{
411,
MR_TAG_COMMON(1,1,0)
},
{
422,
MR_TAG_COMMON(1,1,0)
},
{
436,
MR_TAG_COMMON(1,1,0)
},
{
450,
MR_TAG_COMMON(2,1,0)
},
{
435,
MR_TAG_COMMON(1,1,0)
},
{
433,
MR_TAG_COMMON(1,1,0)
},
{
441,
MR_TAG_COMMON(1,1,0)
},
{
462,
MR_TAG_COMMON(1,1,0)
},
{
447,
MR_TAG_COMMON(1,1,0)
},
{
426,
MR_TAG_COMMON(1,1,0)
},
{
452,
MR_TAG_COMMON(1,1,0)
},
{
429,
MR_TAG_COMMON(1,1,0)
},
{
430,
MR_TAG_COMMON(1,1,0)
},
{
427,
MR_TAG_COMMON(1,1,0)
},
{
335,
MR_TAG_COMMON(1,1,0)
},
{
320,
MR_TAG_COMMON(1,1,0)
},
{
315,
MR_TAG_COMMON(2,1,21)
},
{
313,
MR_TAG_COMMON(1,1,0)
},
{
311,
MR_TAG_COMMON(1,1,0)
},
{
361,
MR_TAG_COMMON(1,1,0)
},
{
445,
MR_TAG_COMMON(1,1,0)
},
{
450,
MR_TAG_COMMON(2,1,11)
},
{
438,
MR_TAG_COMMON(1,1,0)
},
{
450,
MR_TAG_COMMON(2,1,9)
},
{
449,
MR_TAG_COMMON(1,1,0)
},
{
341,
MR_TAG_COMMON(1,1,0)
},
{
324,
MR_TAG_COMMON(1,1,0)
},
{
363,
MR_TAG_COMMON(1,1,0)
},
{
327,
MR_TAG_COMMON(1,1,0)
},
{
325,
MR_TAG_COMMON(1,1,0)
},
{
344,
MR_TAG_COMMON(1,1,0)
},
{
328,
MR_TAG_COMMON(2,1,12)
},
{
315,
MR_TAG_COMMON(2,1,22)
},
{
316,
MR_TAG_COMMON(2,1,7)
},
{
359,
MR_TAG_COMMON(1,1,0)
},
{
431,
MR_TAG_COMMON(1,1,0)
},
{
328,
MR_TAG_COMMON(2,1,26)
},
{
315,
MR_TAG_COMMON(2,1,17)
},
{
360,
MR_TAG_COMMON(1,1,0)
},
{
450,
MR_TAG_COMMON(2,1,6)
},
{
451,
MR_TAG_COMMON(1,1,0)
},
{
464,
MR_TAG_COMMON(1,1,0)
},
{
453,
MR_TAG_COMMON(2,1,1)
},
{
446,
MR_TAG_COMMON(1,1,0)
},
{
331,
MR_TAG_COMMON(2,1,0)
},
{
143,
MR_TAG_COMMON(1,1,1)
},
{
142,
MR_TAG_COMMON(1,1,1)
},
};

static const struct mercury_type_4 mercury_common_4[674] =
{
{
{
MR_TAG_COMMON(0,3,0),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(0,3,1),
MR_TAG_COMMON(1,4,0)
}
},
{
{
MR_TAG_COMMON(0,3,2),
MR_TAG_COMMON(1,4,1)
}
},
{
{
MR_TAG_COMMON(0,3,3),
MR_TAG_COMMON(1,4,2)
}
},
{
{
MR_TAG_COMMON(0,3,4),
MR_TAG_COMMON(1,4,3)
}
},
{
{
MR_TAG_COMMON(0,3,5),
MR_TAG_COMMON(1,4,4)
}
},
{
{
MR_TAG_COMMON(0,3,6),
MR_TAG_COMMON(1,4,5)
}
},
{
{
MR_TAG_COMMON(0,3,8),
MR_TAG_COMMON(1,4,6)
}
},
{
{
MR_TAG_COMMON(0,3,9),
MR_TAG_COMMON(1,4,7)
}
},
{
{
MR_TAG_COMMON(0,3,10),
MR_TAG_COMMON(1,4,8)
}
},
{
{
MR_TAG_COMMON(0,3,11),
MR_TAG_COMMON(1,4,9)
}
},
{
{
MR_TAG_COMMON(0,3,12),
MR_TAG_COMMON(1,4,10)
}
},
{
{
MR_TAG_COMMON(0,3,13),
MR_TAG_COMMON(1,4,11)
}
},
{
{
MR_TAG_COMMON(0,3,14),
MR_TAG_COMMON(1,4,12)
}
},
{
{
MR_TAG_COMMON(0,3,15),
MR_TAG_COMMON(1,4,13)
}
},
{
{
MR_TAG_COMMON(0,3,16),
MR_TAG_COMMON(1,4,14)
}
},
{
{
MR_TAG_COMMON(0,3,17),
MR_TAG_COMMON(1,4,15)
}
},
{
{
MR_TAG_COMMON(0,3,18),
MR_TAG_COMMON(1,4,16)
}
},
{
{
MR_TAG_COMMON(0,3,19),
MR_TAG_COMMON(1,4,17)
}
},
{
{
MR_TAG_COMMON(0,3,20),
MR_TAG_COMMON(1,4,18)
}
},
{
{
MR_TAG_COMMON(0,3,21),
MR_TAG_COMMON(1,4,19)
}
},
{
{
MR_TAG_COMMON(0,3,22),
MR_TAG_COMMON(1,4,20)
}
},
{
{
MR_TAG_COMMON(0,3,23),
MR_TAG_COMMON(1,4,21)
}
},
{
{
MR_TAG_COMMON(0,3,24),
MR_TAG_COMMON(1,4,22)
}
},
{
{
MR_TAG_COMMON(0,3,25),
MR_TAG_COMMON(1,4,23)
}
},
{
{
MR_TAG_COMMON(0,3,26),
MR_TAG_COMMON(1,4,24)
}
},
{
{
MR_TAG_COMMON(0,3,27),
MR_TAG_COMMON(1,4,25)
}
},
{
{
MR_TAG_COMMON(0,3,28),
MR_TAG_COMMON(1,4,26)
}
},
{
{
MR_TAG_COMMON(0,3,29),
MR_TAG_COMMON(1,4,27)
}
},
{
{
MR_TAG_COMMON(0,3,30),
MR_TAG_COMMON(1,4,28)
}
},
{
{
MR_TAG_COMMON(0,3,31),
MR_TAG_COMMON(1,4,29)
}
},
{
{
MR_TAG_COMMON(0,3,32),
MR_TAG_COMMON(1,4,30)
}
},
{
{
MR_TAG_COMMON(0,3,33),
MR_TAG_COMMON(1,4,31)
}
},
{
{
MR_TAG_COMMON(0,3,34),
MR_TAG_COMMON(1,4,32)
}
},
{
{
MR_TAG_COMMON(0,3,35),
MR_TAG_COMMON(1,4,33)
}
},
{
{
MR_TAG_COMMON(0,3,36),
MR_TAG_COMMON(1,4,34)
}
},
{
{
MR_TAG_COMMON(0,3,37),
MR_TAG_COMMON(1,4,35)
}
},
{
{
MR_TAG_COMMON(0,3,38),
MR_TAG_COMMON(1,4,36)
}
},
{
{
MR_TAG_COMMON(0,3,39),
MR_TAG_COMMON(1,4,37)
}
},
{
{
MR_TAG_COMMON(0,3,40),
MR_TAG_COMMON(1,4,38)
}
},
{
{
MR_TAG_COMMON(0,3,41),
MR_TAG_COMMON(1,4,39)
}
},
{
{
MR_TAG_COMMON(0,3,42),
MR_TAG_COMMON(1,4,40)
}
},
{
{
MR_TAG_COMMON(0,3,43),
MR_TAG_COMMON(1,4,41)
}
},
{
{
MR_TAG_COMMON(0,3,44),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(0,3,45),
MR_TAG_COMMON(1,4,43)
}
},
{
{
MR_TAG_COMMON(0,3,46),
MR_TAG_COMMON(1,4,44)
}
},
{
{
MR_TAG_COMMON(0,3,47),
MR_TAG_COMMON(1,4,45)
}
},
{
{
MR_TAG_COMMON(0,3,48),
MR_TAG_COMMON(1,4,46)
}
},
{
{
MR_TAG_COMMON(0,3,49),
MR_TAG_COMMON(1,4,47)
}
},
{
{
MR_TAG_COMMON(0,3,50),
MR_TAG_COMMON(1,4,48)
}
},
{
{
MR_TAG_COMMON(0,3,52),
MR_TAG_COMMON(1,4,49)
}
},
{
{
MR_TAG_COMMON(0,3,53),
MR_TAG_COMMON(1,4,50)
}
},
{
{
MR_TAG_COMMON(0,3,54),
MR_TAG_COMMON(1,4,51)
}
},
{
{
MR_TAG_COMMON(0,3,55),
MR_TAG_COMMON(1,4,52)
}
},
{
{
MR_TAG_COMMON(0,3,57),
MR_TAG_COMMON(1,4,53)
}
},
{
{
MR_TAG_COMMON(0,3,59),
MR_TAG_COMMON(1,4,54)
}
},
{
{
MR_TAG_COMMON(0,3,60),
MR_TAG_COMMON(1,4,55)
}
},
{
{
MR_TAG_COMMON(0,3,61),
MR_TAG_COMMON(1,4,56)
}
},
{
{
MR_TAG_COMMON(0,3,62),
MR_TAG_COMMON(1,4,57)
}
},
{
{
MR_TAG_COMMON(0,3,63),
MR_TAG_COMMON(1,4,58)
}
},
{
{
MR_TAG_COMMON(0,3,64),
MR_TAG_COMMON(1,4,59)
}
},
{
{
MR_TAG_COMMON(0,3,65),
MR_TAG_COMMON(1,4,60)
}
},
{
{
MR_TAG_COMMON(0,3,66),
MR_TAG_COMMON(1,4,61)
}
},
{
{
MR_TAG_COMMON(0,3,68),
MR_TAG_COMMON(1,4,62)
}
},
{
{
MR_TAG_COMMON(0,3,69),
MR_TAG_COMMON(1,4,63)
}
},
{
{
MR_TAG_COMMON(0,3,70),
MR_TAG_COMMON(1,4,64)
}
},
{
{
MR_TAG_COMMON(0,3,71),
MR_TAG_COMMON(1,4,65)
}
},
{
{
MR_TAG_COMMON(0,3,72),
MR_TAG_COMMON(1,4,66)
}
},
{
{
MR_TAG_COMMON(0,3,73),
MR_TAG_COMMON(1,4,67)
}
},
{
{
MR_TAG_COMMON(0,3,74),
MR_TAG_COMMON(1,4,68)
}
},
{
{
MR_TAG_COMMON(0,3,75),
MR_TAG_COMMON(1,4,69)
}
},
{
{
MR_TAG_COMMON(0,3,76),
MR_TAG_COMMON(1,4,70)
}
},
{
{
MR_TAG_COMMON(0,3,77),
MR_TAG_COMMON(1,4,71)
}
},
{
{
MR_TAG_COMMON(0,3,78),
MR_TAG_COMMON(1,4,72)
}
},
{
{
MR_TAG_COMMON(0,3,79),
MR_TAG_COMMON(1,4,73)
}
},
{
{
MR_TAG_COMMON(0,3,80),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(0,3,81),
MR_TAG_COMMON(1,4,75)
}
},
{
{
MR_TAG_COMMON(0,3,82),
MR_TAG_COMMON(1,4,76)
}
},
{
{
MR_TAG_COMMON(0,3,83),
MR_TAG_COMMON(1,4,77)
}
},
{
{
MR_TAG_COMMON(0,3,84),
MR_TAG_COMMON(1,4,78)
}
},
{
{
MR_TAG_COMMON(0,3,85),
MR_TAG_COMMON(1,4,79)
}
},
{
{
MR_TAG_COMMON(0,3,86),
MR_TAG_COMMON(1,4,80)
}
},
{
{
MR_TAG_COMMON(0,3,87),
MR_TAG_COMMON(1,4,81)
}
},
{
{
MR_TAG_COMMON(0,3,88),
MR_TAG_COMMON(1,4,82)
}
},
{
{
MR_TAG_COMMON(0,3,89),
MR_TAG_COMMON(1,4,83)
}
},
{
{
MR_TAG_COMMON(0,3,90),
MR_TAG_COMMON(1,4,84)
}
},
{
{
MR_TAG_COMMON(0,3,91),
MR_TAG_COMMON(1,4,85)
}
},
{
{
MR_TAG_COMMON(0,3,92),
MR_TAG_COMMON(1,4,86)
}
},
{
{
MR_TAG_COMMON(0,3,93),
MR_TAG_COMMON(1,4,87)
}
},
{
{
MR_TAG_COMMON(0,3,94),
MR_TAG_COMMON(1,4,88)
}
},
{
{
MR_TAG_COMMON(0,3,95),
MR_TAG_COMMON(1,4,89)
}
},
{
{
MR_TAG_COMMON(0,3,96),
MR_TAG_COMMON(1,4,90)
}
},
{
{
MR_TAG_COMMON(0,3,97),
MR_TAG_COMMON(1,4,91)
}
},
{
{
MR_TAG_COMMON(0,3,98),
MR_TAG_COMMON(1,4,92)
}
},
{
{
MR_TAG_COMMON(0,3,99),
MR_TAG_COMMON(1,4,93)
}
},
{
{
MR_TAG_COMMON(0,3,100),
MR_TAG_COMMON(1,4,94)
}
},
{
{
MR_TAG_COMMON(0,3,101),
MR_TAG_COMMON(1,4,95)
}
},
{
{
MR_TAG_COMMON(0,3,102),
MR_TAG_COMMON(1,4,96)
}
},
{
{
MR_TAG_COMMON(0,3,103),
MR_TAG_COMMON(1,4,97)
}
},
{
{
MR_TAG_COMMON(0,3,104),
MR_TAG_COMMON(1,4,98)
}
},
{
{
MR_TAG_COMMON(0,3,105),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(0,3,106),
MR_TAG_COMMON(1,4,100)
}
},
{
{
MR_TAG_COMMON(0,3,107),
MR_TAG_COMMON(1,4,101)
}
},
{
{
MR_TAG_COMMON(0,3,108),
MR_TAG_COMMON(1,4,102)
}
},
{
{
MR_TAG_COMMON(0,3,109),
MR_TAG_COMMON(1,4,103)
}
},
{
{
MR_TAG_COMMON(0,3,110),
MR_TAG_COMMON(1,4,104)
}
},
{
{
MR_TAG_COMMON(0,3,111),
MR_TAG_COMMON(1,4,105)
}
},
{
{
MR_TAG_COMMON(0,3,112),
MR_TAG_COMMON(1,4,106)
}
},
{
{
MR_TAG_COMMON(0,3,113),
MR_TAG_COMMON(1,4,107)
}
},
{
{
MR_TAG_COMMON(0,3,114),
MR_TAG_COMMON(1,4,108)
}
},
{
{
MR_TAG_COMMON(0,3,115),
MR_TAG_COMMON(1,4,109)
}
},
{
{
MR_TAG_COMMON(0,3,116),
MR_TAG_COMMON(1,4,110)
}
},
{
{
MR_TAG_COMMON(0,3,117),
MR_TAG_COMMON(1,4,111)
}
},
{
{
MR_TAG_COMMON(0,3,118),
MR_TAG_COMMON(1,4,112)
}
},
{
{
MR_TAG_COMMON(0,3,119),
MR_TAG_COMMON(1,4,113)
}
},
{
{
MR_TAG_COMMON(0,3,120),
MR_TAG_COMMON(1,4,114)
}
},
{
{
MR_TAG_COMMON(0,3,121),
MR_TAG_COMMON(1,4,115)
}
},
{
{
MR_TAG_COMMON(0,3,122),
MR_TAG_COMMON(1,4,116)
}
},
{
{
MR_TAG_COMMON(0,3,123),
MR_TAG_COMMON(1,4,117)
}
},
{
{
MR_TAG_COMMON(0,3,124),
MR_TAG_COMMON(1,4,118)
}
},
{
{
MR_TAG_COMMON(0,3,125),
MR_TAG_COMMON(1,4,119)
}
},
{
{
MR_TAG_COMMON(0,3,126),
MR_TAG_COMMON(1,4,120)
}
},
{
{
MR_TAG_COMMON(0,3,127),
MR_TAG_COMMON(1,4,121)
}
},
{
{
MR_TAG_COMMON(0,3,128),
MR_TAG_COMMON(1,4,122)
}
},
{
{
MR_TAG_COMMON(0,3,129),
MR_TAG_COMMON(1,4,123)
}
},
{
{
MR_TAG_COMMON(0,3,130),
MR_TAG_COMMON(1,4,124)
}
},
{
{
MR_TAG_COMMON(0,3,131),
MR_TAG_COMMON(1,4,125)
}
},
{
{
MR_TAG_COMMON(0,3,132),
MR_TAG_COMMON(1,4,126)
}
},
{
{
MR_TAG_COMMON(0,3,133),
MR_TAG_COMMON(1,4,127)
}
},
{
{
MR_TAG_COMMON(0,3,134),
MR_TAG_COMMON(1,4,128)
}
},
{
{
MR_TAG_COMMON(0,3,135),
MR_TAG_COMMON(1,4,129)
}
},
{
{
MR_TAG_COMMON(0,3,136),
MR_TAG_COMMON(1,4,130)
}
},
{
{
MR_TAG_COMMON(0,3,137),
MR_TAG_COMMON(1,4,131)
}
},
{
{
MR_TAG_COMMON(0,3,138),
MR_TAG_COMMON(1,4,132)
}
},
{
{
MR_TAG_COMMON(0,3,139),
MR_TAG_COMMON(1,4,133)
}
},
{
{
MR_TAG_COMMON(0,3,140),
MR_TAG_COMMON(1,4,134)
}
},
{
{
MR_TAG_COMMON(0,3,141),
MR_TAG_COMMON(1,4,135)
}
},
{
{
MR_TAG_COMMON(0,3,142),
MR_TAG_COMMON(1,4,136)
}
},
{
{
MR_TAG_COMMON(0,3,143),
MR_TAG_COMMON(1,4,137)
}
},
{
{
MR_TAG_COMMON(0,3,144),
MR_TAG_COMMON(1,4,138)
}
},
{
{
MR_TAG_COMMON(0,3,145),
MR_TAG_COMMON(1,4,139)
}
},
{
{
MR_TAG_COMMON(0,3,146),
MR_TAG_COMMON(1,4,140)
}
},
{
{
MR_TAG_COMMON(0,3,147),
MR_TAG_COMMON(1,4,141)
}
},
{
{
MR_TAG_COMMON(0,3,148),
MR_TAG_COMMON(1,4,142)
}
},
{
{
MR_TAG_COMMON(0,3,149),
MR_TAG_COMMON(1,4,143)
}
},
{
{
MR_TAG_COMMON(0,3,150),
MR_TAG_COMMON(1,4,144)
}
},
{
{
MR_TAG_COMMON(0,3,151),
MR_TAG_COMMON(1,4,145)
}
},
{
{
MR_TAG_COMMON(0,3,152),
MR_TAG_COMMON(1,4,146)
}
},
{
{
MR_TAG_COMMON(0,3,153),
MR_TAG_COMMON(1,4,147)
}
},
{
{
MR_TAG_COMMON(0,3,154),
MR_TAG_COMMON(1,4,148)
}
},
{
{
MR_TAG_COMMON(0,3,155),
MR_TAG_COMMON(1,4,149)
}
},
{
{
MR_TAG_COMMON(0,3,156),
MR_TAG_COMMON(1,4,150)
}
},
{
{
MR_TAG_COMMON(0,3,157),
MR_TAG_COMMON(1,4,151)
}
},
{
{
MR_TAG_COMMON(0,3,158),
MR_TAG_COMMON(1,4,152)
}
},
{
{
MR_TAG_COMMON(0,3,159),
MR_TAG_COMMON(1,4,153)
}
},
{
{
MR_TAG_COMMON(0,3,160),
MR_TAG_COMMON(1,4,154)
}
},
{
{
MR_TAG_COMMON(0,3,161),
MR_TAG_COMMON(1,4,155)
}
},
{
{
MR_TAG_COMMON(0,3,162),
MR_TAG_COMMON(1,4,156)
}
},
{
{
MR_TAG_COMMON(0,3,163),
MR_TAG_COMMON(1,4,157)
}
},
{
{
MR_TAG_COMMON(0,3,164),
MR_TAG_COMMON(1,4,158)
}
},
{
{
MR_TAG_COMMON(0,3,165),
MR_TAG_COMMON(1,4,159)
}
},
{
{
MR_TAG_COMMON(0,3,166),
MR_TAG_COMMON(1,4,160)
}
},
{
{
MR_TAG_COMMON(0,3,167),
MR_TAG_COMMON(1,4,161)
}
},
{
{
MR_TAG_COMMON(0,3,168),
MR_TAG_COMMON(1,4,162)
}
},
{
{
MR_TAG_COMMON(0,3,169),
MR_TAG_COMMON(1,4,163)
}
},
{
{
MR_TAG_COMMON(0,3,170),
MR_TAG_COMMON(1,4,164)
}
},
{
{
MR_TAG_COMMON(0,3,171),
MR_TAG_COMMON(1,4,165)
}
},
{
{
MR_TAG_COMMON(0,3,172),
MR_TAG_COMMON(1,4,166)
}
},
{
{
MR_TAG_COMMON(0,3,173),
MR_TAG_COMMON(1,4,167)
}
},
{
{
MR_TAG_COMMON(0,3,174),
MR_TAG_COMMON(1,4,168)
}
},
{
{
MR_TAG_COMMON(0,3,175),
MR_TAG_COMMON(1,4,169)
}
},
{
{
MR_TAG_COMMON(0,3,176),
MR_TAG_COMMON(1,4,170)
}
},
{
{
MR_TAG_COMMON(0,3,177),
MR_TAG_COMMON(1,4,171)
}
},
{
{
MR_TAG_COMMON(0,3,178),
MR_TAG_COMMON(1,4,172)
}
},
{
{
MR_TAG_COMMON(0,3,179),
MR_TAG_COMMON(1,4,173)
}
},
{
{
MR_TAG_COMMON(0,3,180),
MR_TAG_COMMON(1,4,174)
}
},
{
{
MR_TAG_COMMON(0,3,181),
MR_TAG_COMMON(1,4,175)
}
},
{
{
MR_TAG_COMMON(0,3,182),
MR_TAG_COMMON(1,4,176)
}
},
{
{
MR_TAG_COMMON(0,3,183),
MR_TAG_COMMON(1,4,177)
}
},
{
{
MR_TAG_COMMON(0,3,184),
MR_TAG_COMMON(1,4,178)
}
},
{
{
MR_TAG_COMMON(0,3,185),
MR_TAG_COMMON(1,4,179)
}
},
{
{
MR_TAG_COMMON(0,3,186),
MR_TAG_COMMON(1,4,180)
}
},
{
{
MR_TAG_COMMON(0,3,187),
MR_TAG_COMMON(1,4,181)
}
},
{
{
MR_TAG_COMMON(0,3,188),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(0,3,189),
MR_TAG_COMMON(1,4,183)
}
},
{
{
MR_TAG_COMMON(0,3,190),
MR_TAG_COMMON(1,4,184)
}
},
{
{
MR_TAG_COMMON(0,3,191),
MR_TAG_COMMON(1,4,185)
}
},
{
{
MR_TAG_COMMON(0,3,192),
MR_TAG_COMMON(1,4,186)
}
},
{
{
MR_TAG_COMMON(0,3,193),
MR_TAG_COMMON(1,4,187)
}
},
{
{
MR_TAG_COMMON(0,3,194),
MR_TAG_COMMON(1,4,188)
}
},
{
{
MR_TAG_COMMON(0,3,195),
MR_TAG_COMMON(1,4,189)
}
},
{
{
MR_TAG_COMMON(0,3,196),
MR_TAG_COMMON(1,4,190)
}
},
{
{
MR_TAG_COMMON(0,3,197),
MR_TAG_COMMON(1,4,191)
}
},
{
{
MR_TAG_COMMON(0,3,198),
MR_TAG_COMMON(1,4,192)
}
},
{
{
MR_TAG_COMMON(0,3,199),
MR_TAG_COMMON(1,4,193)
}
},
{
{
MR_TAG_COMMON(0,3,200),
MR_TAG_COMMON(1,4,194)
}
},
{
{
MR_TAG_COMMON(0,3,201),
MR_TAG_COMMON(1,4,195)
}
},
{
{
MR_TAG_COMMON(0,3,202),
MR_TAG_COMMON(1,4,196)
}
},
{
{
MR_TAG_COMMON(0,3,203),
MR_TAG_COMMON(1,4,197)
}
},
{
{
MR_TAG_COMMON(0,3,204),
MR_TAG_COMMON(1,4,198)
}
},
{
{
MR_TAG_COMMON(0,3,205),
MR_TAG_COMMON(1,4,199)
}
},
{
{
MR_TAG_COMMON(0,3,206),
MR_TAG_COMMON(1,4,200)
}
},
{
{
MR_TAG_COMMON(0,3,207),
MR_TAG_COMMON(1,4,201)
}
},
{
{
MR_TAG_COMMON(0,3,208),
MR_TAG_COMMON(1,4,202)
}
},
{
{
MR_TAG_COMMON(0,3,209),
MR_TAG_COMMON(1,4,203)
}
},
{
{
MR_TAG_COMMON(0,3,210),
MR_TAG_COMMON(1,4,204)
}
},
{
{
MR_TAG_COMMON(0,3,211),
MR_TAG_COMMON(1,4,205)
}
},
{
{
MR_TAG_COMMON(0,3,212),
MR_TAG_COMMON(1,4,206)
}
},
{
{
MR_TAG_COMMON(0,3,213),
MR_TAG_COMMON(1,4,207)
}
},
{
{
MR_TAG_COMMON(0,3,214),
MR_TAG_COMMON(1,4,208)
}
},
{
{
MR_TAG_COMMON(0,3,215),
MR_TAG_COMMON(1,4,209)
}
},
{
{
MR_TAG_COMMON(0,3,216),
MR_TAG_COMMON(1,4,210)
}
},
{
{
MR_TAG_COMMON(0,3,217),
MR_TAG_COMMON(1,4,211)
}
},
{
{
MR_TAG_COMMON(0,3,218),
MR_TAG_COMMON(1,4,212)
}
},
{
{
MR_TAG_COMMON(0,3,219),
MR_TAG_COMMON(1,4,213)
}
},
{
{
MR_TAG_COMMON(0,3,220),
MR_TAG_COMMON(1,4,214)
}
},
{
{
MR_TAG_COMMON(0,3,221),
MR_TAG_COMMON(1,4,215)
}
},
{
{
MR_TAG_COMMON(0,3,222),
MR_TAG_COMMON(1,4,216)
}
},
{
{
MR_TAG_COMMON(0,3,223),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(0,3,224),
MR_TAG_COMMON(1,4,218)
}
},
{
{
MR_TAG_COMMON(0,3,225),
MR_TAG_COMMON(1,4,219)
}
},
{
{
MR_TAG_COMMON(0,3,226),
MR_TAG_COMMON(1,4,220)
}
},
{
{
MR_TAG_COMMON(0,3,227),
MR_TAG_COMMON(1,4,221)
}
},
{
{
MR_TAG_COMMON(0,3,228),
MR_TAG_COMMON(1,4,222)
}
},
{
{
MR_TAG_COMMON(0,3,229),
MR_TAG_COMMON(1,4,223)
}
},
{
{
MR_TAG_COMMON(0,3,230),
MR_TAG_COMMON(1,4,224)
}
},
{
{
MR_TAG_COMMON(0,3,231),
MR_TAG_COMMON(1,4,225)
}
},
{
{
MR_TAG_COMMON(0,3,232),
MR_TAG_COMMON(1,4,226)
}
},
{
{
MR_TAG_COMMON(0,3,233),
MR_TAG_COMMON(1,4,227)
}
},
{
{
MR_TAG_COMMON(0,3,234),
MR_TAG_COMMON(1,4,228)
}
},
{
{
MR_TAG_COMMON(0,3,235),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(0,3,236),
MR_TAG_COMMON(1,4,230)
}
},
{
{
MR_TAG_COMMON(0,3,237),
MR_TAG_COMMON(1,4,231)
}
},
{
{
MR_TAG_COMMON(0,3,238),
MR_TAG_COMMON(1,4,232)
}
},
{
{
MR_TAG_COMMON(0,3,239),
MR_TAG_COMMON(1,4,233)
}
},
{
{
MR_TAG_COMMON(0,3,240),
MR_TAG_COMMON(1,4,234)
}
},
{
{
MR_TAG_COMMON(0,3,241),
MR_TAG_COMMON(1,4,235)
}
},
{
{
MR_TAG_COMMON(0,3,242),
MR_TAG_COMMON(1,4,236)
}
},
{
{
MR_TAG_COMMON(0,3,243),
MR_TAG_COMMON(1,4,237)
}
},
{
{
MR_TAG_COMMON(0,3,244),
MR_TAG_COMMON(1,4,238)
}
},
{
{
MR_TAG_COMMON(0,3,245),
MR_TAG_COMMON(1,4,239)
}
},
{
{
MR_TAG_COMMON(0,3,246),
MR_TAG_COMMON(1,4,240)
}
},
{
{
MR_TAG_COMMON(0,3,247),
MR_TAG_COMMON(1,4,241)
}
},
{
{
MR_TAG_COMMON(0,3,248),
MR_TAG_COMMON(1,4,242)
}
},
{
{
MR_TAG_COMMON(0,3,249),
MR_TAG_COMMON(1,4,243)
}
},
{
{
MR_TAG_COMMON(0,3,250),
MR_TAG_COMMON(1,4,244)
}
},
{
{
MR_TAG_COMMON(0,3,251),
MR_TAG_COMMON(1,4,245)
}
},
{
{
MR_TAG_COMMON(0,3,252),
MR_TAG_COMMON(1,4,246)
}
},
{
{
MR_TAG_COMMON(0,3,253),
MR_TAG_COMMON(1,4,247)
}
},
{
{
MR_TAG_COMMON(0,3,254),
MR_TAG_COMMON(1,4,248)
}
},
{
{
MR_TAG_COMMON(0,3,255),
MR_TAG_COMMON(1,4,249)
}
},
{
{
MR_TAG_COMMON(0,3,256),
MR_TAG_COMMON(1,4,250)
}
},
{
{
MR_TAG_COMMON(0,3,257),
MR_TAG_COMMON(1,4,251)
}
},
{
{
MR_TAG_COMMON(0,3,258),
MR_TAG_COMMON(1,4,252)
}
},
{
{
MR_TAG_COMMON(0,3,259),
MR_TAG_COMMON(1,4,253)
}
},
{
{
MR_TAG_COMMON(0,3,260),
MR_TAG_COMMON(1,4,254)
}
},
{
{
MR_TAG_COMMON(0,3,261),
MR_TAG_COMMON(1,4,255)
}
},
{
{
MR_TAG_COMMON(0,3,262),
MR_TAG_COMMON(1,4,256)
}
},
{
{
MR_TAG_COMMON(0,3,263),
MR_TAG_COMMON(1,4,257)
}
},
{
{
MR_TAG_COMMON(0,3,264),
MR_TAG_COMMON(1,4,258)
}
},
{
{
MR_TAG_COMMON(0,3,265),
MR_TAG_COMMON(1,4,259)
}
},
{
{
MR_TAG_COMMON(0,3,266),
MR_TAG_COMMON(1,4,260)
}
},
{
{
MR_TAG_COMMON(0,3,267),
MR_TAG_COMMON(1,4,261)
}
},
{
{
MR_TAG_COMMON(0,3,268),
MR_TAG_COMMON(1,4,262)
}
},
{
{
MR_TAG_COMMON(0,3,269),
MR_TAG_COMMON(1,4,263)
}
},
{
{
MR_TAG_COMMON(0,3,270),
MR_TAG_COMMON(1,4,264)
}
},
{
{
MR_TAG_COMMON(0,3,271),
MR_TAG_COMMON(1,4,265)
}
},
{
{
MR_TAG_COMMON(0,3,272),
MR_TAG_COMMON(1,4,266)
}
},
{
{
MR_TAG_COMMON(0,3,273),
MR_TAG_COMMON(1,4,267)
}
},
{
{
MR_TAG_COMMON(0,3,274),
MR_TAG_COMMON(1,4,268)
}
},
{
{
MR_TAG_COMMON(0,3,275),
MR_TAG_COMMON(1,4,269)
}
},
{
{
MR_TAG_COMMON(0,3,276),
MR_TAG_COMMON(1,4,270)
}
},
{
{
MR_TAG_COMMON(0,3,277),
MR_TAG_COMMON(1,4,271)
}
},
{
{
MR_TAG_COMMON(0,3,278),
MR_TAG_COMMON(1,4,272)
}
},
{
{
MR_TAG_COMMON(0,3,279),
MR_TAG_COMMON(1,4,273)
}
},
{
{
MR_TAG_COMMON(0,3,280),
MR_TAG_COMMON(1,4,274)
}
},
{
{
MR_TAG_COMMON(0,3,281),
MR_TAG_COMMON(1,4,275)
}
},
{
{
MR_TAG_COMMON(0,3,282),
MR_TAG_COMMON(1,4,276)
}
},
{
{
MR_TAG_COMMON(0,3,283),
MR_TAG_COMMON(1,4,277)
}
},
{
{
MR_TAG_COMMON(0,3,284),
MR_TAG_COMMON(1,4,278)
}
},
{
{
MR_TAG_COMMON(0,3,285),
MR_TAG_COMMON(1,4,279)
}
},
{
{
MR_TAG_COMMON(0,3,286),
MR_TAG_COMMON(1,4,280)
}
},
{
{
MR_TAG_COMMON(0,3,287),
MR_TAG_COMMON(1,4,281)
}
},
{
{
MR_TAG_COMMON(0,3,288),
MR_TAG_COMMON(1,4,282)
}
},
{
{
MR_TAG_COMMON(0,3,289),
MR_TAG_COMMON(1,4,283)
}
},
{
{
MR_TAG_COMMON(0,3,290),
MR_TAG_COMMON(1,4,284)
}
},
{
{
MR_TAG_COMMON(0,3,291),
MR_TAG_COMMON(1,4,285)
}
},
{
{
MR_TAG_COMMON(0,3,292),
MR_TAG_COMMON(1,4,286)
}
},
{
{
MR_TAG_COMMON(0,3,293),
MR_TAG_COMMON(1,4,287)
}
},
{
{
MR_TAG_COMMON(0,3,294),
MR_TAG_COMMON(1,4,288)
}
},
{
{
MR_TAG_COMMON(0,3,295),
MR_TAG_COMMON(1,4,289)
}
},
{
{
MR_TAG_COMMON(0,3,296),
MR_TAG_COMMON(1,4,290)
}
},
{
{
MR_TAG_COMMON(0,3,297),
MR_TAG_COMMON(1,4,291)
}
},
{
{
MR_TAG_COMMON(0,3,298),
MR_TAG_COMMON(1,4,292)
}
},
{
{
MR_TAG_COMMON(0,3,299),
MR_TAG_COMMON(1,4,293)
}
},
{
{
MR_TAG_COMMON(0,3,300),
MR_TAG_COMMON(1,4,294)
}
},
{
{
MR_TAG_COMMON(0,3,301),
MR_TAG_COMMON(1,4,295)
}
},
{
{
MR_TAG_COMMON(0,3,302),
MR_TAG_COMMON(1,4,296)
}
},
{
{
MR_TAG_COMMON(0,3,303),
MR_TAG_COMMON(1,4,297)
}
},
{
{
MR_TAG_COMMON(0,3,304),
MR_TAG_COMMON(1,4,298)
}
},
{
{
MR_TAG_COMMON(0,3,305),
MR_TAG_COMMON(1,4,299)
}
},
{
{
MR_TAG_COMMON(0,3,306),
MR_TAG_COMMON(1,4,300)
}
},
{
{
MR_TAG_COMMON(0,3,307),
MR_TAG_COMMON(1,4,301)
}
},
{
{
MR_TAG_COMMON(0,3,308),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(0,3,309),
MR_TAG_COMMON(1,4,303)
}
},
{
{
MR_TAG_COMMON(0,3,310),
MR_TAG_COMMON(1,4,304)
}
},
{
{
MR_TAG_COMMON(0,3,311),
MR_TAG_COMMON(1,4,305)
}
},
{
{
MR_TAG_COMMON(0,3,312),
MR_TAG_COMMON(1,4,306)
}
},
{
{
MR_TAG_COMMON(0,3,313),
MR_TAG_COMMON(1,4,307)
}
},
{
{
MR_TAG_COMMON(0,3,314),
MR_TAG_COMMON(1,4,308)
}
},
{
{
MR_TAG_COMMON(0,3,315),
MR_TAG_COMMON(1,4,309)
}
},
{
{
MR_TAG_COMMON(0,3,316),
MR_TAG_COMMON(1,4,310)
}
},
{
{
MR_TAG_COMMON(0,3,317),
MR_TAG_COMMON(1,4,311)
}
},
{
{
MR_TAG_COMMON(0,3,318),
MR_TAG_COMMON(1,4,312)
}
},
{
{
MR_TAG_COMMON(0,3,319),
MR_TAG_COMMON(1,4,313)
}
},
{
{
MR_TAG_COMMON(0,3,320),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(0,3,321),
MR_TAG_COMMON(1,4,315)
}
},
{
{
MR_TAG_COMMON(0,3,322),
MR_TAG_COMMON(1,4,316)
}
},
{
{
MR_TAG_COMMON(0,3,323),
MR_TAG_COMMON(1,4,317)
}
},
{
{
MR_TAG_COMMON(0,3,324),
MR_TAG_COMMON(1,4,318)
}
},
{
{
MR_TAG_COMMON(0,3,325),
MR_TAG_COMMON(1,4,319)
}
},
{
{
MR_TAG_COMMON(0,3,326),
MR_TAG_COMMON(1,4,320)
}
},
{
{
MR_TAG_COMMON(0,3,327),
MR_TAG_COMMON(1,4,321)
}
},
{
{
MR_TAG_COMMON(0,3,328),
MR_TAG_COMMON(1,4,322)
}
},
{
{
MR_TAG_COMMON(0,3,329),
MR_TAG_COMMON(1,4,323)
}
},
{
{
MR_TAG_COMMON(0,3,330),
MR_TAG_COMMON(1,4,324)
}
},
{
{
MR_TAG_COMMON(0,3,331),
MR_TAG_COMMON(1,4,325)
}
},
{
{
MR_TAG_COMMON(0,3,332),
MR_TAG_COMMON(1,4,326)
}
},
{
{
MR_TAG_COMMON(0,3,333),
MR_TAG_COMMON(1,4,327)
}
},
{
{
MR_TAG_COMMON(0,3,334),
MR_TAG_COMMON(1,4,328)
}
},
{
{
MR_TAG_COMMON(0,3,335),
MR_TAG_COMMON(1,4,329)
}
},
{
{
MR_TAG_COMMON(0,3,336),
MR_TAG_COMMON(1,4,330)
}
},
{
{
MR_TAG_COMMON(0,3,337),
MR_TAG_COMMON(1,4,331)
}
},
{
{
MR_TAG_COMMON(0,3,338),
MR_TAG_COMMON(1,4,332)
}
},
{
{
MR_TAG_COMMON(0,3,339),
MR_TAG_COMMON(1,4,333)
}
},
{
{
MR_TAG_COMMON(0,3,340),
MR_TAG_COMMON(1,4,334)
}
},
{
{
MR_TAG_COMMON(0,3,341),
MR_TAG_COMMON(1,4,335)
}
},
{
{
MR_TAG_COMMON(0,3,342),
MR_TAG_COMMON(1,4,336)
}
},
{
{
MR_TAG_COMMON(0,3,343),
MR_TAG_COMMON(1,4,337)
}
},
{
{
MR_TAG_COMMON(0,3,344),
MR_TAG_COMMON(1,4,338)
}
},
{
{
MR_TAG_COMMON(0,3,345),
MR_TAG_COMMON(1,4,339)
}
},
{
{
MR_TAG_COMMON(0,3,346),
MR_TAG_COMMON(1,4,340)
}
},
{
{
MR_TAG_COMMON(0,3,347),
MR_TAG_COMMON(1,4,341)
}
},
{
{
MR_TAG_COMMON(0,3,348),
MR_TAG_COMMON(1,4,342)
}
},
{
{
MR_TAG_COMMON(0,3,349),
MR_TAG_COMMON(1,4,343)
}
},
{
{
MR_TAG_COMMON(0,3,350),
MR_TAG_COMMON(1,4,344)
}
},
{
{
MR_TAG_COMMON(0,3,351),
MR_TAG_COMMON(1,4,345)
}
},
{
{
MR_TAG_COMMON(0,3,352),
MR_TAG_COMMON(1,4,346)
}
},
{
{
MR_TAG_COMMON(0,3,353),
MR_TAG_COMMON(1,4,347)
}
},
{
{
MR_TAG_COMMON(0,3,354),
MR_TAG_COMMON(1,4,348)
}
},
{
{
MR_TAG_COMMON(0,3,355),
MR_TAG_COMMON(1,4,349)
}
},
{
{
MR_TAG_COMMON(0,3,356),
MR_TAG_COMMON(1,4,350)
}
},
{
{
MR_TAG_COMMON(0,3,357),
MR_TAG_COMMON(1,4,351)
}
},
{
{
MR_TAG_COMMON(0,3,358),
MR_TAG_COMMON(1,4,352)
}
},
{
{
MR_TAG_COMMON(0,3,359),
MR_TAG_COMMON(1,4,353)
}
},
{
{
MR_TAG_COMMON(0,3,360),
MR_TAG_COMMON(1,4,354)
}
},
{
{
MR_TAG_COMMON(0,3,361),
MR_TAG_COMMON(1,4,355)
}
},
{
{
MR_TAG_COMMON(0,3,362),
MR_TAG_COMMON(1,4,356)
}
},
{
{
MR_TAG_COMMON(0,3,363),
MR_TAG_COMMON(1,4,357)
}
},
{
{
MR_TAG_COMMON(0,3,364),
MR_TAG_COMMON(1,4,358)
}
},
{
{
MR_TAG_COMMON(0,3,365),
MR_TAG_COMMON(1,4,359)
}
},
{
{
MR_TAG_COMMON(0,3,366),
MR_TAG_COMMON(1,4,360)
}
},
{
{
MR_TAG_COMMON(0,3,367),
MR_TAG_COMMON(1,4,361)
}
},
{
{
MR_TAG_COMMON(0,3,368),
MR_TAG_COMMON(1,4,362)
}
},
{
{
MR_TAG_COMMON(0,3,369),
MR_TAG_COMMON(1,4,363)
}
},
{
{
MR_TAG_COMMON(0,3,370),
MR_TAG_COMMON(1,4,364)
}
},
{
{
MR_TAG_COMMON(0,3,371),
MR_TAG_COMMON(1,4,365)
}
},
{
{
MR_TAG_COMMON(0,3,372),
MR_TAG_COMMON(1,4,366)
}
},
{
{
MR_TAG_COMMON(0,3,373),
MR_TAG_COMMON(1,4,367)
}
},
{
{
MR_TAG_COMMON(0,3,374),
MR_TAG_COMMON(1,4,368)
}
},
{
{
MR_TAG_COMMON(0,3,375),
MR_TAG_COMMON(1,4,369)
}
},
{
{
MR_TAG_COMMON(0,3,376),
MR_TAG_COMMON(1,4,370)
}
},
{
{
MR_TAG_COMMON(0,3,377),
MR_TAG_COMMON(1,4,371)
}
},
{
{
MR_TAG_COMMON(0,3,378),
MR_TAG_COMMON(1,4,372)
}
},
{
{
MR_TAG_COMMON(0,3,379),
MR_TAG_COMMON(1,4,373)
}
},
{
{
MR_TAG_COMMON(0,3,380),
MR_TAG_COMMON(1,4,374)
}
},
{
{
MR_TAG_COMMON(0,3,381),
MR_TAG_COMMON(1,4,375)
}
},
{
{
MR_TAG_COMMON(0,3,382),
MR_TAG_COMMON(1,4,376)
}
},
{
{
MR_TAG_COMMON(0,3,383),
MR_TAG_COMMON(1,4,377)
}
},
{
{
MR_TAG_COMMON(0,3,384),
MR_TAG_COMMON(1,4,378)
}
},
{
{
MR_TAG_COMMON(0,3,385),
MR_TAG_COMMON(1,4,379)
}
},
{
{
MR_TAG_COMMON(0,3,386),
MR_TAG_COMMON(1,4,380)
}
},
{
{
MR_TAG_COMMON(0,3,387),
MR_TAG_COMMON(1,4,381)
}
},
{
{
MR_TAG_COMMON(0,3,388),
MR_TAG_COMMON(1,4,382)
}
},
{
{
MR_TAG_COMMON(0,3,389),
MR_TAG_COMMON(1,4,383)
}
},
{
{
MR_TAG_COMMON(0,3,390),
MR_TAG_COMMON(1,4,384)
}
},
{
{
MR_TAG_COMMON(0,3,391),
MR_TAG_COMMON(1,4,385)
}
},
{
{
MR_TAG_COMMON(0,3,392),
MR_TAG_COMMON(1,4,386)
}
},
{
{
MR_TAG_COMMON(0,3,393),
MR_TAG_COMMON(1,4,387)
}
},
{
{
MR_TAG_COMMON(0,3,394),
MR_TAG_COMMON(1,4,388)
}
},
{
{
MR_TAG_COMMON(0,3,395),
MR_TAG_COMMON(1,4,389)
}
},
{
{
MR_TAG_COMMON(0,3,396),
MR_TAG_COMMON(1,4,390)
}
},
{
{
MR_TAG_COMMON(0,3,397),
MR_TAG_COMMON(1,4,391)
}
},
{
{
MR_TAG_COMMON(0,3,398),
MR_TAG_COMMON(1,4,392)
}
},
{
{
MR_TAG_COMMON(0,3,399),
MR_TAG_COMMON(1,4,393)
}
},
{
{
MR_TAG_COMMON(0,3,400),
MR_TAG_COMMON(1,4,394)
}
},
{
{
MR_TAG_COMMON(0,3,401),
MR_TAG_COMMON(1,4,395)
}
},
{
{
MR_TAG_COMMON(0,3,402),
MR_TAG_COMMON(1,4,396)
}
},
{
{
MR_TAG_COMMON(0,3,403),
MR_TAG_COMMON(1,4,397)
}
},
{
{
MR_TAG_COMMON(0,3,404),
MR_TAG_COMMON(1,4,398)
}
},
{
{
MR_TAG_COMMON(0,3,405),
MR_TAG_COMMON(1,4,399)
}
},
{
{
MR_TAG_COMMON(0,3,406),
MR_TAG_COMMON(1,4,400)
}
},
{
{
MR_TAG_COMMON(0,3,407),
MR_TAG_COMMON(1,4,401)
}
},
{
{
MR_TAG_COMMON(0,3,408),
MR_TAG_COMMON(1,4,402)
}
},
{
{
MR_TAG_COMMON(0,3,409),
MR_TAG_COMMON(1,4,403)
}
},
{
{
MR_TAG_COMMON(0,3,410),
MR_TAG_COMMON(1,4,404)
}
},
{
{
MR_TAG_COMMON(0,3,411),
MR_TAG_COMMON(1,4,405)
}
},
{
{
MR_TAG_COMMON(0,3,412),
MR_TAG_COMMON(1,4,406)
}
},
{
{
MR_TAG_COMMON(0,3,413),
MR_TAG_COMMON(1,4,407)
}
},
{
{
MR_TAG_COMMON(0,3,414),
MR_TAG_COMMON(1,4,408)
}
},
{
{
MR_TAG_COMMON(0,3,415),
MR_TAG_COMMON(1,4,409)
}
},
{
{
MR_TAG_COMMON(0,3,416),
MR_TAG_COMMON(1,4,410)
}
},
{
{
MR_TAG_COMMON(0,3,417),
MR_TAG_COMMON(1,4,411)
}
},
{
{
MR_TAG_COMMON(0,3,418),
MR_TAG_COMMON(1,4,412)
}
},
{
{
MR_TAG_COMMON(0,3,419),
MR_TAG_COMMON(1,4,413)
}
},
{
{
MR_TAG_COMMON(0,3,420),
MR_TAG_COMMON(1,4,414)
}
},
{
{
MR_TAG_COMMON(0,3,421),
MR_TAG_COMMON(1,4,415)
}
},
{
{
MR_TAG_COMMON(0,3,422),
MR_TAG_COMMON(1,4,416)
}
},
{
{
MR_TAG_COMMON(0,3,423),
MR_TAG_COMMON(1,4,417)
}
},
{
{
MR_TAG_COMMON(0,3,424),
MR_TAG_COMMON(1,4,418)
}
},
{
{
MR_TAG_COMMON(0,3,425),
MR_TAG_COMMON(1,4,419)
}
},
{
{
MR_TAG_COMMON(0,3,426),
MR_TAG_COMMON(1,4,420)
}
},
{
{
MR_TAG_COMMON(0,3,427),
MR_TAG_COMMON(1,4,421)
}
},
{
{
MR_TAG_COMMON(0,3,428),
MR_TAG_COMMON(1,4,422)
}
},
{
{
MR_TAG_COMMON(0,3,429),
MR_TAG_COMMON(1,4,423)
}
},
{
{
MR_TAG_COMMON(0,3,430),
MR_TAG_COMMON(1,4,424)
}
},
{
{
MR_TAG_COMMON(0,3,431),
MR_TAG_COMMON(1,4,425)
}
},
{
{
MR_TAG_COMMON(0,3,432),
MR_TAG_COMMON(1,4,426)
}
},
{
{
MR_TAG_COMMON(0,3,433),
MR_TAG_COMMON(1,4,427)
}
},
{
{
MR_TAG_COMMON(0,3,434),
MR_TAG_COMMON(1,4,428)
}
},
{
{
MR_TAG_COMMON(0,3,435),
MR_TAG_COMMON(1,4,429)
}
},
{
{
MR_TAG_COMMON(0,3,436),
MR_TAG_COMMON(1,4,430)
}
},
{
{
MR_TAG_COMMON(0,3,437),
MR_TAG_COMMON(1,4,431)
}
},
{
{
MR_TAG_COMMON(0,3,438),
MR_TAG_COMMON(1,4,432)
}
},
{
{
MR_TAG_COMMON(0,3,439),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(0,3,440),
MR_TAG_COMMON(1,4,434)
}
},
{
{
MR_TAG_COMMON(0,3,441),
MR_TAG_COMMON(1,4,435)
}
},
{
{
MR_TAG_COMMON(0,3,442),
MR_TAG_COMMON(1,4,436)
}
},
{
{
MR_TAG_COMMON(0,3,443),
MR_TAG_COMMON(1,4,437)
}
},
{
{
MR_TAG_COMMON(0,3,444),
MR_TAG_COMMON(1,4,438)
}
},
{
{
MR_TAG_COMMON(0,3,445),
MR_TAG_COMMON(1,4,439)
}
},
{
{
MR_TAG_COMMON(0,3,446),
MR_TAG_COMMON(1,4,440)
}
},
{
{
MR_TAG_COMMON(0,3,447),
MR_TAG_COMMON(1,4,441)
}
},
{
{
MR_TAG_COMMON(0,3,448),
MR_TAG_COMMON(1,4,442)
}
},
{
{
MR_TAG_COMMON(0,3,449),
MR_TAG_COMMON(1,4,443)
}
},
{
{
MR_TAG_COMMON(0,3,450),
MR_TAG_COMMON(1,4,444)
}
},
{
{
MR_TAG_COMMON(0,3,451),
MR_TAG_COMMON(1,4,445)
}
},
{
{
MR_TAG_COMMON(0,3,452),
MR_TAG_COMMON(1,4,446)
}
},
{
{
MR_TAG_COMMON(0,3,453),
MR_TAG_COMMON(1,4,447)
}
},
{
{
MR_TAG_COMMON(0,3,454),
MR_TAG_COMMON(1,4,448)
}
},
{
{
MR_TAG_COMMON(0,3,455),
MR_TAG_COMMON(1,4,449)
}
},
{
{
MR_TAG_COMMON(0,3,456),
MR_TAG_COMMON(1,4,450)
}
},
{
{
MR_TAG_COMMON(0,3,457),
MR_TAG_COMMON(1,4,451)
}
},
{
{
MR_TAG_COMMON(0,3,458),
MR_TAG_COMMON(1,4,452)
}
},
{
{
MR_TAG_COMMON(0,3,459),
MR_TAG_COMMON(1,4,453)
}
},
{
{
MR_TAG_COMMON(0,3,460),
MR_TAG_COMMON(1,4,454)
}
},
{
{
MR_TAG_COMMON(0,3,461),
MR_TAG_COMMON(1,4,455)
}
},
{
{
MR_TAG_COMMON(0,3,462),
MR_TAG_COMMON(1,4,456)
}
},
{
{
MR_TAG_COMMON(0,3,463),
MR_TAG_COMMON(1,4,457)
}
},
{
{
MR_TAG_COMMON(0,3,464),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(0,3,465),
MR_TAG_COMMON(1,4,459)
}
},
{
{
MR_TAG_COMMON(0,3,466),
MR_TAG_COMMON(1,4,460)
}
},
{
{
MR_TAG_COMMON(0,3,467),
MR_TAG_COMMON(1,4,461)
}
},
{
{
MR_TAG_COMMON(0,3,468),
MR_TAG_COMMON(1,4,462)
}
},
{
{
MR_TAG_COMMON(0,3,469),
MR_TAG_COMMON(1,4,463)
}
},
{
{
MR_TAG_COMMON(0,3,470),
MR_TAG_COMMON(1,4,464)
}
},
{
{
MR_TAG_COMMON(0,3,471),
MR_TAG_COMMON(1,4,465)
}
},
{
{
MR_TAG_COMMON(0,3,472),
MR_TAG_COMMON(1,4,466)
}
},
{
{
MR_TAG_COMMON(0,3,473),
MR_TAG_COMMON(1,4,467)
}
},
{
{
MR_TAG_COMMON(0,3,474),
MR_TAG_COMMON(1,4,468)
}
},
{
{
MR_TAG_COMMON(0,3,475),
MR_TAG_COMMON(1,4,469)
}
},
{
{
MR_TAG_COMMON(0,3,476),
MR_TAG_COMMON(1,4,470)
}
},
{
{
MR_TAG_COMMON(0,3,477),
MR_TAG_COMMON(1,4,471)
}
},
{
{
MR_TAG_COMMON(0,3,478),
MR_TAG_COMMON(1,4,472)
}
},
{
{
MR_TAG_COMMON(0,3,479),
MR_TAG_COMMON(1,4,473)
}
},
{
{
MR_TAG_COMMON(0,3,480),
MR_TAG_COMMON(1,4,474)
}
},
{
{
MR_TAG_COMMON(0,3,481),
MR_TAG_COMMON(1,4,475)
}
},
{
{
MR_TAG_COMMON(0,3,482),
MR_TAG_COMMON(1,4,476)
}
},
{
{
MR_TAG_COMMON(0,3,483),
MR_TAG_COMMON(1,4,477)
}
},
{
{
MR_TAG_COMMON(0,3,484),
MR_TAG_COMMON(1,4,478)
}
},
{
{
MR_TAG_COMMON(0,3,485),
MR_TAG_COMMON(1,4,479)
}
},
{
{
MR_TAG_COMMON(0,3,486),
MR_TAG_COMMON(1,4,480)
}
},
{
{
MR_TAG_COMMON(0,3,487),
MR_TAG_COMMON(1,4,481)
}
},
{
{
MR_TAG_COMMON(0,3,488),
MR_TAG_COMMON(1,4,482)
}
},
{
{
MR_TAG_COMMON(0,3,489),
MR_TAG_COMMON(1,4,483)
}
},
{
{
MR_TAG_COMMON(0,3,490),
MR_TAG_COMMON(1,4,484)
}
},
{
{
MR_TAG_COMMON(0,3,491),
MR_TAG_COMMON(1,4,485)
}
},
{
{
MR_TAG_COMMON(0,3,492),
MR_TAG_COMMON(1,4,486)
}
},
{
{
MR_TAG_COMMON(0,3,493),
MR_TAG_COMMON(1,4,487)
}
},
{
{
MR_TAG_COMMON(0,3,494),
MR_TAG_COMMON(1,4,488)
}
},
{
{
MR_TAG_COMMON(0,3,495),
MR_TAG_COMMON(1,4,489)
}
},
{
{
MR_TAG_COMMON(0,3,496),
MR_TAG_COMMON(1,4,490)
}
},
{
{
MR_TAG_COMMON(0,3,497),
MR_TAG_COMMON(1,4,491)
}
},
{
{
MR_TAG_COMMON(0,3,498),
MR_TAG_COMMON(1,4,492)
}
},
{
{
MR_TAG_COMMON(0,3,499),
MR_TAG_COMMON(1,4,493)
}
},
{
{
MR_TAG_COMMON(0,3,500),
MR_TAG_COMMON(1,4,494)
}
},
{
{
MR_TAG_COMMON(0,3,501),
MR_TAG_COMMON(1,4,495)
}
},
{
{
MR_TAG_COMMON(0,3,502),
MR_TAG_COMMON(1,4,496)
}
},
{
{
MR_TAG_COMMON(0,3,503),
MR_TAG_COMMON(1,4,497)
}
},
{
{
MR_TAG_COMMON(0,3,504),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(0,3,505),
MR_TAG_COMMON(1,4,499)
}
},
{
{
MR_TAG_COMMON(0,3,506),
MR_TAG_COMMON(1,4,500)
}
},
{
{
MR_TAG_COMMON(0,3,507),
MR_TAG_COMMON(1,4,501)
}
},
{
{
MR_TAG_COMMON(0,3,508),
MR_TAG_COMMON(1,4,502)
}
},
{
{
MR_TAG_COMMON(0,3,509),
MR_TAG_COMMON(1,4,503)
}
},
{
{
MR_TAG_COMMON(0,3,510),
MR_TAG_COMMON(1,4,504)
}
},
{
{
MR_TAG_COMMON(0,3,511),
MR_TAG_COMMON(1,4,505)
}
},
{
{
MR_TAG_COMMON(0,3,512),
MR_TAG_COMMON(1,4,506)
}
},
{
{
MR_TAG_COMMON(0,3,513),
MR_TAG_COMMON(1,4,507)
}
},
{
{
MR_TAG_COMMON(0,3,514),
MR_TAG_COMMON(1,4,508)
}
},
{
{
MR_TAG_COMMON(0,3,515),
MR_TAG_COMMON(1,4,509)
}
},
{
{
MR_TAG_COMMON(0,3,516),
MR_TAG_COMMON(1,4,510)
}
},
{
{
MR_TAG_COMMON(0,3,517),
MR_TAG_COMMON(1,4,511)
}
},
{
{
MR_TAG_COMMON(0,3,518),
MR_TAG_COMMON(1,4,512)
}
},
{
{
MR_TAG_COMMON(0,3,519),
MR_TAG_COMMON(1,4,513)
}
},
{
{
MR_TAG_COMMON(0,3,520),
MR_TAG_COMMON(1,4,514)
}
},
{
{
MR_TAG_COMMON(0,3,521),
MR_TAG_COMMON(1,4,515)
}
},
{
{
MR_TAG_COMMON(0,3,522),
MR_TAG_COMMON(1,4,516)
}
},
{
{
MR_TAG_COMMON(0,3,523),
MR_TAG_COMMON(1,4,517)
}
},
{
{
MR_TAG_COMMON(0,3,524),
MR_TAG_COMMON(1,4,518)
}
},
{
{
MR_TAG_COMMON(0,3,525),
MR_TAG_COMMON(1,4,519)
}
},
{
{
MR_TAG_COMMON(0,3,526),
MR_TAG_COMMON(1,4,520)
}
},
{
{
MR_TAG_COMMON(0,3,527),
MR_TAG_COMMON(1,4,521)
}
},
{
{
MR_TAG_COMMON(0,3,528),
MR_TAG_COMMON(1,4,522)
}
},
{
{
MR_TAG_COMMON(0,3,529),
MR_TAG_COMMON(1,4,523)
}
},
{
{
MR_TAG_COMMON(0,3,530),
MR_TAG_COMMON(1,4,524)
}
},
{
{
MR_TAG_COMMON(0,3,531),
MR_TAG_COMMON(1,4,525)
}
},
{
{
MR_TAG_COMMON(0,3,532),
MR_TAG_COMMON(1,4,526)
}
},
{
{
MR_TAG_COMMON(0,3,533),
MR_TAG_COMMON(1,4,527)
}
},
{
{
MR_TAG_COMMON(0,3,534),
MR_TAG_COMMON(1,4,528)
}
},
{
{
MR_TAG_COMMON(0,3,535),
MR_TAG_COMMON(1,4,529)
}
},
{
{
MR_TAG_COMMON(0,3,536),
MR_TAG_COMMON(1,4,530)
}
},
{
{
MR_TAG_COMMON(0,3,537),
MR_TAG_COMMON(1,4,531)
}
},
{
{
MR_TAG_COMMON(0,3,538),
MR_TAG_COMMON(1,4,532)
}
},
{
{
MR_TAG_COMMON(0,3,539),
MR_TAG_COMMON(1,4,533)
}
},
{
{
MR_TAG_COMMON(0,3,540),
MR_TAG_COMMON(1,4,534)
}
},
{
{
MR_TAG_COMMON(0,3,541),
MR_TAG_COMMON(1,4,535)
}
},
{
{
MR_TAG_COMMON(0,3,542),
MR_TAG_COMMON(1,4,536)
}
},
{
{
MR_TAG_COMMON(0,3,543),
MR_TAG_COMMON(1,4,537)
}
},
{
{
MR_TAG_COMMON(0,3,544),
MR_TAG_COMMON(1,4,538)
}
},
{
{
MR_TAG_COMMON(0,3,545),
MR_TAG_COMMON(1,4,539)
}
},
{
{
MR_TAG_COMMON(0,3,546),
MR_TAG_COMMON(1,4,540)
}
},
{
{
MR_TAG_COMMON(0,3,547),
MR_TAG_COMMON(1,4,541)
}
},
{
{
MR_TAG_COMMON(0,3,548),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(0,3,549),
MR_TAG_COMMON(1,4,543)
}
},
{
{
MR_TAG_COMMON(0,3,550),
MR_TAG_COMMON(1,4,544)
}
},
{
{
MR_TAG_COMMON(0,3,551),
MR_TAG_COMMON(1,4,545)
}
},
{
{
MR_TAG_COMMON(0,3,552),
MR_TAG_COMMON(1,4,546)
}
},
{
{
MR_TAG_COMMON(0,3,553),
MR_TAG_COMMON(1,4,547)
}
},
{
{
MR_TAG_COMMON(0,3,554),
MR_TAG_COMMON(1,4,548)
}
},
{
{
MR_TAG_COMMON(0,3,555),
MR_TAG_COMMON(1,4,549)
}
},
{
{
MR_TAG_COMMON(0,3,556),
MR_TAG_COMMON(1,4,550)
}
},
{
{
MR_TAG_COMMON(0,3,557),
MR_TAG_COMMON(1,4,551)
}
},
{
{
MR_TAG_COMMON(0,3,558),
MR_TAG_COMMON(1,4,552)
}
},
{
{
MR_TAG_COMMON(0,3,559),
MR_TAG_COMMON(1,4,553)
}
},
{
{
MR_TAG_COMMON(0,3,560),
MR_TAG_COMMON(1,4,554)
}
},
{
{
MR_TAG_COMMON(0,3,561),
MR_TAG_COMMON(1,4,555)
}
},
{
{
MR_TAG_COMMON(0,3,562),
MR_TAG_COMMON(1,4,556)
}
},
{
{
MR_TAG_COMMON(0,3,563),
MR_TAG_COMMON(1,4,557)
}
},
{
{
MR_TAG_COMMON(0,3,564),
MR_TAG_COMMON(1,4,558)
}
},
{
{
MR_TAG_COMMON(0,3,565),
MR_TAG_COMMON(1,4,559)
}
},
{
{
MR_TAG_COMMON(0,3,566),
MR_TAG_COMMON(1,4,560)
}
},
{
{
MR_TAG_COMMON(0,3,567),
MR_TAG_COMMON(1,4,561)
}
},
{
{
MR_TAG_COMMON(0,3,568),
MR_TAG_COMMON(1,4,562)
}
},
{
{
MR_TAG_COMMON(0,3,569),
MR_TAG_COMMON(1,4,563)
}
},
{
{
MR_TAG_COMMON(0,3,570),
MR_TAG_COMMON(1,4,564)
}
},
{
{
MR_TAG_COMMON(0,3,571),
MR_TAG_COMMON(1,4,565)
}
},
{
{
MR_TAG_COMMON(0,3,572),
MR_TAG_COMMON(1,4,566)
}
},
{
{
MR_TAG_COMMON(0,3,573),
MR_TAG_COMMON(1,4,567)
}
},
{
{
MR_TAG_COMMON(0,3,574),
MR_TAG_COMMON(1,4,568)
}
},
{
{
MR_TAG_COMMON(0,3,575),
MR_TAG_COMMON(1,4,569)
}
},
{
{
MR_TAG_COMMON(0,3,576),
MR_TAG_COMMON(1,4,570)
}
},
{
{
MR_TAG_COMMON(0,3,577),
MR_TAG_COMMON(1,4,571)
}
},
{
{
MR_TAG_COMMON(0,3,578),
MR_TAG_COMMON(1,4,572)
}
},
{
{
MR_TAG_COMMON(0,3,579),
MR_TAG_COMMON(1,4,573)
}
},
{
{
MR_TAG_COMMON(0,3,580),
MR_TAG_COMMON(1,4,574)
}
},
{
{
MR_TAG_COMMON(0,3,581),
MR_TAG_COMMON(1,4,575)
}
},
{
{
MR_TAG_COMMON(0,3,582),
MR_TAG_COMMON(1,4,576)
}
},
{
{
MR_TAG_COMMON(0,3,583),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(0,3,584),
MR_TAG_COMMON(1,4,578)
}
},
{
{
MR_TAG_COMMON(0,3,585),
MR_TAG_COMMON(1,4,579)
}
},
{
{
MR_TAG_COMMON(0,3,586),
MR_TAG_COMMON(1,4,580)
}
},
{
{
MR_TAG_COMMON(0,3,587),
MR_TAG_COMMON(1,4,581)
}
},
{
{
MR_TAG_COMMON(0,3,588),
MR_TAG_COMMON(1,4,582)
}
},
{
{
MR_TAG_COMMON(0,3,589),
MR_TAG_COMMON(1,4,583)
}
},
{
{
MR_TAG_COMMON(0,3,590),
MR_TAG_COMMON(1,4,584)
}
},
{
{
MR_TAG_COMMON(0,3,591),
MR_TAG_COMMON(1,4,585)
}
},
{
{
MR_TAG_COMMON(0,3,592),
MR_TAG_COMMON(1,4,586)
}
},
{
{
MR_TAG_COMMON(0,3,593),
MR_TAG_COMMON(1,4,587)
}
},
{
{
MR_TAG_COMMON(0,3,594),
MR_TAG_COMMON(1,4,588)
}
},
{
{
MR_TAG_COMMON(0,3,595),
MR_TAG_COMMON(1,4,589)
}
},
{
{
MR_TAG_COMMON(0,3,596),
MR_TAG_COMMON(1,4,590)
}
},
{
{
MR_TAG_COMMON(0,3,597),
MR_TAG_COMMON(1,4,591)
}
},
{
{
MR_TAG_COMMON(0,3,598),
MR_TAG_COMMON(1,4,592)
}
},
{
{
MR_TAG_COMMON(0,3,599),
MR_TAG_COMMON(1,4,593)
}
},
{
{
MR_TAG_COMMON(0,3,600),
MR_TAG_COMMON(1,4,594)
}
},
{
{
MR_TAG_COMMON(0,3,601),
MR_TAG_COMMON(1,4,595)
}
},
{
{
MR_TAG_COMMON(0,3,602),
MR_TAG_COMMON(1,4,596)
}
},
{
{
MR_TAG_COMMON(0,3,603),
MR_TAG_COMMON(1,4,597)
}
},
{
{
MR_TAG_COMMON(0,3,604),
MR_TAG_COMMON(1,4,598)
}
},
{
{
MR_TAG_COMMON(0,3,605),
MR_TAG_COMMON(1,4,599)
}
},
{
{
MR_TAG_COMMON(0,3,606),
MR_TAG_COMMON(1,4,600)
}
},
{
{
MR_TAG_COMMON(0,3,607),
MR_TAG_COMMON(1,4,601)
}
},
{
{
MR_TAG_COMMON(0,3,608),
MR_TAG_COMMON(1,4,602)
}
},
{
{
MR_TAG_COMMON(0,3,609),
MR_TAG_COMMON(1,4,603)
}
},
{
{
MR_TAG_COMMON(0,3,610),
MR_TAG_COMMON(1,4,604)
}
},
{
{
MR_TAG_COMMON(0,3,611),
MR_TAG_COMMON(1,4,605)
}
},
{
{
MR_TAG_COMMON(0,3,612),
MR_TAG_COMMON(1,4,606)
}
},
{
{
MR_TAG_COMMON(0,3,613),
MR_TAG_COMMON(1,4,607)
}
},
{
{
MR_TAG_COMMON(0,3,614),
MR_TAG_COMMON(1,4,608)
}
},
{
{
MR_TAG_COMMON(0,3,615),
MR_TAG_COMMON(1,4,609)
}
},
{
{
MR_TAG_COMMON(0,3,616),
MR_TAG_COMMON(1,4,610)
}
},
{
{
MR_TAG_COMMON(0,3,617),
MR_TAG_COMMON(1,4,611)
}
},
{
{
MR_TAG_COMMON(0,3,618),
MR_TAG_COMMON(1,4,612)
}
},
{
{
MR_TAG_COMMON(0,3,619),
MR_TAG_COMMON(1,4,613)
}
},
{
{
MR_TAG_COMMON(0,3,620),
MR_TAG_COMMON(1,4,614)
}
},
{
{
MR_TAG_COMMON(0,3,621),
MR_TAG_COMMON(1,4,615)
}
},
{
{
MR_TAG_COMMON(0,3,622),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(0,3,623),
MR_TAG_COMMON(1,4,617)
}
},
{
{
MR_TAG_COMMON(0,3,624),
MR_TAG_COMMON(1,4,618)
}
},
{
{
MR_TAG_COMMON(0,3,625),
MR_TAG_COMMON(1,4,619)
}
},
{
{
MR_TAG_COMMON(0,3,626),
MR_TAG_COMMON(1,4,620)
}
},
{
{
MR_TAG_COMMON(0,3,627),
MR_TAG_COMMON(1,4,621)
}
},
{
{
MR_TAG_COMMON(0,3,628),
MR_TAG_COMMON(1,4,622)
}
},
{
{
MR_TAG_COMMON(0,3,629),
MR_TAG_COMMON(1,4,623)
}
},
{
{
MR_TAG_COMMON(0,3,630),
MR_TAG_COMMON(1,4,624)
}
},
{
{
MR_TAG_COMMON(0,3,631),
MR_TAG_COMMON(1,4,625)
}
},
{
{
MR_TAG_COMMON(0,3,637),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(0,3,636),
MR_TAG_COMMON(1,4,627)
}
},
{
{
MR_TAG_COMMON(0,3,635),
MR_TAG_COMMON(1,4,628)
}
},
{
{
MR_TAG_COMMON(0,3,638),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(0,3,639),
MR_TAG_COMMON(1,4,630)
}
},
{
{
MR_TAG_COMMON(0,3,640),
MR_TAG_COMMON(1,4,631)
}
},
{
{
MR_TAG_COMMON(0,3,641),
MR_TAG_COMMON(1,4,632)
}
},
{
{
MR_TAG_COMMON(0,3,642),
MR_TAG_COMMON(1,4,633)
}
},
{
{
MR_TAG_COMMON(0,3,643),
MR_TAG_COMMON(1,4,634)
}
},
{
{
MR_TAG_COMMON(0,3,644),
MR_TAG_COMMON(1,4,635)
}
},
{
{
MR_TAG_COMMON(0,3,645),
MR_TAG_COMMON(1,4,636)
}
},
{
{
MR_TAG_COMMON(0,3,646),
MR_TAG_COMMON(1,4,637)
}
},
{
{
MR_TAG_COMMON(0,3,647),
MR_TAG_COMMON(1,4,638)
}
},
{
{
MR_TAG_COMMON(0,3,648),
MR_TAG_COMMON(1,4,639)
}
},
{
{
MR_TAG_COMMON(0,3,649),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(0,3,650),
MR_TAG_COMMON(1,4,641)
}
},
{
{
MR_TAG_COMMON(0,3,651),
MR_TAG_COMMON(1,4,642)
}
},
{
{
MR_TAG_COMMON(0,3,652),
MR_TAG_COMMON(1,4,643)
}
},
{
{
MR_TAG_COMMON(0,3,653),
MR_TAG_COMMON(1,4,644)
}
},
{
{
MR_TAG_COMMON(0,3,654),
MR_TAG_COMMON(1,4,645)
}
},
{
{
MR_TAG_COMMON(0,3,655),
MR_TAG_COMMON(1,4,646)
}
},
{
{
MR_TAG_COMMON(0,3,656),
MR_TAG_COMMON(1,4,647)
}
},
{
{
MR_TAG_COMMON(0,3,657),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(0,3,658),
MR_TAG_COMMON(1,4,649)
}
},
{
{
MR_TAG_COMMON(0,3,659),
MR_TAG_COMMON(1,4,650)
}
},
{
{
MR_TAG_COMMON(0,3,660),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(0,3,661),
MR_TAG_COMMON(1,4,652)
}
},
{
{
MR_TAG_COMMON(0,3,662),
MR_TAG_COMMON(1,4,653)
}
},
{
{
MR_TAG_COMMON(0,3,663),
MR_TAG_COMMON(1,4,654)
}
},
{
{
MR_TAG_COMMON(0,3,664),
MR_TAG_COMMON(1,4,655)
}
},
{
{
MR_TAG_COMMON(0,3,665),
MR_TAG_COMMON(1,4,656)
}
},
{
{
MR_TAG_COMMON(0,3,666),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(0,3,667),
MR_TAG_COMMON(1,4,658)
}
},
{
{
MR_TAG_COMMON(0,3,668),
MR_TAG_COMMON(1,4,659)
}
},
{
{
MR_TAG_COMMON(0,3,418),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(0,3,325),
MR_TAG_COMMON(1,4,661)
}
},
{
{
MR_TAG_COMMON(0,3,542),
MR_TAG_COMMON(1,4,662)
}
},
{
{
MR_TAG_COMMON(0,3,650),
MR_TAG_COMMON(1,4,663)
}
},
{
{
MR_TAG_COMMON(0,3,338),
MR_TAG_COMMON(1,4,664)
}
},
{
{
MR_TAG_COMMON(0,3,669),
MR_TAG_COMMON(1,4,665)
}
},
{
{
MR_TAG_COMMON(0,3,646),
MR_TAG_COMMON(1,4,666)
}
},
{
{
MR_TAG_COMMON(0,3,624),
MR_TAG_COMMON(1,4,667)
}
},
{
{
MR_TAG_COMMON(0,3,623),
MR_TAG_COMMON(1,4,668)
}
},
{
{
MR_TAG_COMMON(0,3,670),
MR_TAG_COMMON(1,4,669)
}
},
{
{
MR_TAG_COMMON(0,3,231),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(0,3,671),
MR_TAG_COMMON(1,4,671)
}
},
{
{
MR_TAG_COMMON(0,3,672),
MR_TAG_COMMON(1,4,672)
}
},
};

static const struct mercury_type_5 mercury_common_5[45] =
{
{
0,
MR_string_const("", 0)
},
{
0,
MR_string_const("default", 7)
},
{
0,
MR_string_const("-r", 2)
},
{
0,
MR_string_const("cp", 2)
},
{
0,
MR_string_const("/usr/local/", 11)
},
{
0,
MR_string_const("low", 3)
},
{
0,
MR_string_const("no", 2)
},
{
0,
MR_string_const("boehm", 5)
},
{
0,
MR_string_const("c", 1)
},
{
0,
MR_string_const("jar", 3)
},
{
0,
MR_string_const("-install_name ", 14)
},
{
0,
MR_string_const("-Wl,-no-undefined", 17)
},
{
0,
MR_string_const(" -Wl,-rpath", 11)
},
{
0,
MR_string_const("-Wl,-rpath", 10)
},
{
0,
MR_string_const("-L", 2)
},
{
0,
MR_string_const("-l", 2)
},
{
0,
MR_string_const("-s", 2)
},
{
0,
MR_string_const("-static", 7)
},
{
0,
MR_string_const("-g", 2)
},
{
0,
MR_string_const("mdemangle", 9)
},
{
0,
MR_string_const("mkinit_erl", 10)
},
{
0,
MR_string_const("mkinit", 6)
},
{
0,
MR_string_const("ar", 2)
},
{
0,
MR_string_const("gcc -shared", 11)
},
{
0,
MR_string_const("gcc", 3)
},
{
0,
MR_string_const(".a", 2)
},
{
0,
MR_string_const(".so", 3)
},
{
0,
MR_string_const("shared", 6)
},
{
0,
MR_string_const("total", 5)
},
{
0,
MR_string_const("within_n_cells_difference", 25)
},
{
0,
MR_string_const(".beam", 5)
},
{
0,
MR_string_const("erl", 3)
},
{
0,
MR_string_const("erlc", 4)
},
{
0,
MR_string_const("csc", 3)
},
{
0,
MR_string_const("1.0.3300.0", 10)
},
{
0,
MR_string_const("ilasm", 5)
},
{
0,
MR_string_const(".class", 6)
},
{
0,
MR_string_const("java", 4)
},
{
0,
MR_string_const("javac", 5)
},
{
0,
MR_string_const(".o", 2)
},
{
0,
MR_string_const("-o ", 3)
},
{
0,
MR_string_const("-O", 2)
},
{
0,
MR_string_const("erlang", 6)
},
{
0,
MR_string_const("il", 2)
},
{
0,
MR_string_const("x86_64", 6)
},
};

static const struct mercury_type_6 mercury_common_6[1372] =
{
{
MR_string_const(".", 1),
MR_tbmkword(0, 0)
},
{
MR_string_const("Mercury.options", 15),
MR_tbmkword(0, 0)
},
{
MR_string_const("\tprocedures.", 12),
MR_tbmkword(0, 0)
},
{
MR_string_const("\tWarn about possible errors in the bodies of foreign", 52),
MR_TAG_COMMON(1,6,2)
},
{
MR_string_const("--warn-suspicious-foreign-procs", 31),
MR_TAG_COMMON(1,6,3)
},
{
MR_string_const("\tDo not warn about unresolved polymorphism.", 43),
MR_TAG_COMMON(1,6,4)
},
{
MR_string_const("--no-warn-unresolved-polymorphism", 33),
MR_TAG_COMMON(1,6,5)
},
{
MR_string_const("\treplaced by switches.", 22),
MR_TAG_COMMON(1,6,6)
},
{
MR_string_const("\tGenerate informational messages for if-then-elses that could be", 64),
MR_TAG_COMMON(1,6,7)
},
{
MR_string_const("--inform-ite-instead-of-switch", 30),
MR_TAG_COMMON(1,6,8)
},
{
MR_string_const("\tbeen marked as obsolete.", 25),
MR_TAG_COMMON(1,6,9)
},
{
MR_string_const("\tDo not warn about calls to predicates or functions that have", 61),
MR_TAG_COMMON(1,6,10)
},
{
MR_string_const("--no-warn-obsolete", 18),
MR_TAG_COMMON(1,6,11)
},
{
MR_string_const("\tbetween the format string and the supplied values.", 51),
MR_TAG_COMMON(1,6,12)
},
{
MR_string_const("\tthe compiler cannot tell whether there are any mismatches", 58),
MR_TAG_COMMON(1,6,13)
},
{
MR_string_const("\tWarn about calls to string.format or io.format for which", 57),
MR_TAG_COMMON(1,6,14)
},
{
MR_string_const("--warn-unknown-format-calls", 27),
MR_TAG_COMMON(1,6,15)
},
{
MR_string_const("\tformat string and the supplied values.", 39),
MR_TAG_COMMON(1,6,16)
},
{
MR_string_const("\tthe compiler knows for sure contain mismatches between the", 59),
MR_TAG_COMMON(1,6,17)
},
{
MR_string_const("\tDo not warn about calls to string.format or io.format that", 59),
MR_TAG_COMMON(1,6,18)
},
{
MR_string_const("--no-warn-known-bad-format-calls", 32),
MR_TAG_COMMON(1,6,19)
},
{
MR_string_const("\t(See the \"Termination Analysis Options\" section below).", 56),
MR_TAG_COMMON(1,6,20)
},
{
MR_string_const("\tThis option is only enabled when termination analysis is enabled.", 66),
MR_TAG_COMMON(1,6,21)
},
{
MR_string_const("\tcomparison predicates that cannot be proved to terminate.", 58),
MR_TAG_COMMON(1,6,22)
},
{
MR_string_const("\tDo not warn about types that have user-defined equality or", 59),
MR_TAG_COMMON(1,6,23)
},
{
MR_string_const("--no-warn-non-term-special-preds", 32),
MR_TAG_COMMON(1,6,24)
},
{
MR_string_const("\ta \140pragma inline\' declaration.", 31),
MR_TAG_COMMON(1,6,25)
},
{
MR_string_const("\tDisable warnings about tabled procedures that also have", 56),
MR_TAG_COMMON(1,6,26)
},
{
MR_string_const("--no-warn-table-with-inline", 27),
MR_TAG_COMMON(1,6,27)
},
{
MR_string_const("\ttarget code (e.g. gcc).", 24),
MR_TAG_COMMON(1,6,28)
},
{
MR_string_const("\tDisable warnings from the compiler used to process the", 55),
MR_TAG_COMMON(1,6,29)
},
{
MR_string_const("--no-warn-target-code", 21),
MR_TAG_COMMON(1,6,30)
},
{
MR_string_const("\tWarn about procedures which are never called.", 46),
MR_TAG_COMMON(1,6,31)
},
{
MR_string_const("--warn-dead-procs", 17),
MR_TAG_COMMON(1,6,32)
},
{
MR_string_const("\tSemantics Options\" section below) is enabled.", 46),
MR_TAG_COMMON(1,6,33)
},
{
MR_string_const("\tthe \140--allow-stubs\' option (described in the \"Language", 55),
MR_TAG_COMMON(1,6,34)
},
{
MR_string_const("\tclauses.  Note that this option only has any effect if", 55),
MR_TAG_COMMON(1,6,35)
},
{
MR_string_const("\tDisable warnings about procedures for which there are no", 57),
MR_TAG_COMMON(1,6,36)
},
{
MR_string_const("--no-warn-stubs", 15),
MR_TAG_COMMON(1,6,37)
},
{
MR_string_const("\twith \140--make\' are already up to date.", 38),
MR_TAG_COMMON(1,6,38)
},
{
MR_string_const("\tDon\'t warn if targets specified on the command line", 52),
MR_TAG_COMMON(1,6,39)
},
{
MR_string_const("--no-warn-up-to-date", 20),
MR_TAG_COMMON(1,6,40)
},
{
MR_string_const("\tThis requires --high-level-code.", 33),
MR_TAG_COMMON(1,6,41)
},
{
MR_string_const("\tWarn about any directly recursive calls that are not tail calls.", 65),
MR_TAG_COMMON(1,6,42)
},
{
MR_string_const("--warn-non-tail-recursion", 25),
MR_TAG_COMMON(1,6,43)
},
{
MR_string_const("\toptions files with \140--make\'.", 29),
MR_TAG_COMMON(1,6,44)
},
{
MR_string_const("\tWarn about references to undefined variables in", 48),
MR_TAG_COMMON(1,6,45)
},
{
MR_string_const("--no-warn-undefined-options-variables", 37),
MR_TAG_COMMON(1,6,46)
},
{
MR_string_const("\tDisable warnings from the smart recompilation system.", 54),
MR_TAG_COMMON(1,6,47)
},
{
MR_string_const("--no-warn-smart-recompilation", 29),
MR_TAG_COMMON(1,6,48)
},
{
MR_string_const("\tdeclaration does not match the module\'s file name.", 51),
MR_TAG_COMMON(1,6,49)
},
{
MR_string_const("\tDisable warnings for modules whose \140:- module\'", 47),
MR_TAG_COMMON(1,6,50)
},
{
MR_string_const("--no-warn-wrong-module-name", 27),
MR_TAG_COMMON(1,6,51)
},
{
MR_string_const("\ta \140:- module\' declaration.", 27),
MR_TAG_COMMON(1,6,52)
},
{
MR_string_const("\tDisable warnings for modules that do no start with", 51),
MR_TAG_COMMON(1,6,53)
},
{
MR_string_const("--no-warn-missing-module-name", 29),
MR_TAG_COMMON(1,6,54)
},
{
MR_string_const("\tsame input arguments.", 22),
MR_TAG_COMMON(1,6,55)
},
{
MR_string_const("\tWarn about multiple calls to a predicate with the", 50),
MR_TAG_COMMON(1,6,56)
},
{
MR_string_const("--warn-duplicate-calls", 22),
MR_TAG_COMMON(1,6,57)
},
{
MR_string_const("\tsimple that they are likely to be programming errors.", 54),
MR_TAG_COMMON(1,6,58)
},
{
MR_string_const("\tDisable warnings about constructs which are so", 47),
MR_TAG_COMMON(1,6,59)
},
{
MR_string_const("--no-warn-simple-code", 21),
MR_TAG_COMMON(1,6,60)
},
{
MR_string_const("\tDisable warnings about unifications which cannot succeed.", 58),
MR_TAG_COMMON(1,6,61)
},
{
MR_string_const("--no-warn-unification-cannot-succeed", 36),
MR_TAG_COMMON(1,6,62)
},
{
MR_string_const("\titself negatively through some path along its call graph.", 58),
MR_TAG_COMMON(1,6,63)
},
{
MR_string_const("\tNon-stratification occurs when a predicate or function can call", 64),
MR_TAG_COMMON(1,6,64)
},
{
MR_string_const("\tfunctions in the module.", 25),
MR_TAG_COMMON(1,6,65)
},
{
MR_string_const("\tWarn about possible non-stratification of the predicates and/or", 64),
MR_TAG_COMMON(1,6,66)
},
{
MR_string_const("--warn-non-stratification", 25),
MR_TAG_COMMON(1,6,67)
},
{
MR_string_const("\tor function are not contiguous.", 32),
MR_TAG_COMMON(1,6,68)
},
{
MR_string_const("\tGenerate a warning if the clauses and foreign_procs of a predicate", 67),
MR_TAG_COMMON(1,6,69)
},
{
MR_string_const("--warn-non-contiguous-foreign-procs", 35),
MR_TAG_COMMON(1,6,70)
},
{
MR_string_const("\tare not contiguous.", 20),
MR_TAG_COMMON(1,6,71)
},
{
MR_string_const("\tDo not generate a warning if the clauses of a predicate or function", 68),
MR_TAG_COMMON(1,6,72)
},
{
MR_string_const("--no-warn-non-contiguous-clauses", 32),
MR_TAG_COMMON(1,6,73)
},
{
MR_string_const("\trecreated by running \140mmake <mainmodule>.depend\'", 49),
MR_TAG_COMMON(1,6,74)
},
{
MR_string_const("\t\140.trans_opt\' files has been lost.  The information can be", 58),
MR_TAG_COMMON(1,6,75)
},
{
MR_string_const("\tto allow \140.trans_opt\' files to be read when creating other", 59),
MR_TAG_COMMON(1,6,76)
},
{
MR_string_const("\tDisable warnings produced when the information required", 56),
MR_TAG_COMMON(1,6,77)
},
{
MR_string_const("--no-warn-missing-trans-opt-deps", 32),
MR_TAG_COMMON(1,6,78)
},
{
MR_string_const("\tbe opened.", 11),
MR_TAG_COMMON(1,6,79)
},
{
MR_string_const("\tEnable warnings about \140.trans_opt\' files which cannot", 54),
MR_TAG_COMMON(1,6,80)
},
{
MR_string_const("--warn-missing-trans-opt-files", 30),
MR_TAG_COMMON(1,6,81)
},
{
MR_string_const("\tDisable warnings about \140.opt\' files which cannot be opened.", 60),
MR_TAG_COMMON(1,6,82)
},
{
MR_string_const("--no-warn-missing-opt-files", 27),
MR_TAG_COMMON(1,6,83)
},
{
MR_string_const("\twhich are not used in the interface.", 37),
MR_TAG_COMMON(1,6,84)
},
{
MR_string_const("\tWarn about modules imported in the interface, but", 50),
MR_TAG_COMMON(1,6,85)
},
{
MR_string_const("--warn-interface-imports", 24),
MR_TAG_COMMON(1,6,86)
},
{
MR_string_const("\tWarn about predicate arguments which are not used.", 51),
MR_TAG_COMMON(1,6,87)
},
{
MR_string_const("--warn-unused-args", 18),
MR_TAG_COMMON(1,6,88)
},
{
MR_string_const("\tDon\'t warn about modules which export nothing.", 47),
MR_TAG_COMMON(1,6,89)
},
{
MR_string_const("--no-warn-nothing-exported", 26),
MR_TAG_COMMON(1,6,90)
},
{
MR_string_const("\tWarn about modules that are imported but not used.", 51),
MR_TAG_COMMON(1,6,91)
},
{
MR_string_const("--warn-unused-imports", 21),
MR_TAG_COMMON(1,6,92)
},
{
MR_string_const("\tof the types in scope.", 23),
MR_TAG_COMMON(1,6,93)
},
{
MR_string_const("\tDon\'t warn about insts that are not consistent with any", 56),
MR_TAG_COMMON(1,6,94)
},
{
MR_string_const("--no-warn-insts-without-matching-type", 37),
MR_TAG_COMMON(1,6,95)
},
{
MR_string_const("\terroneous but whose determinism declarations are laxer.", 56),
MR_TAG_COMMON(1,6,96)
},
{
MR_string_const("\tDon\'t warn about procedures whose determinism is inferred", 58),
MR_TAG_COMMON(1,6,97)
},
{
MR_string_const("--no-warn-inferred-erroneous", 28),
MR_TAG_COMMON(1,6,98)
},
{
MR_string_const("\twhich could have been stricter.", 32),
MR_TAG_COMMON(1,6,99)
},
{
MR_string_const("\tDon\'t warn about determinism declarations", 42),
MR_TAG_COMMON(1,6,100)
},
{
MR_string_const("--no-warn-det-decls-too-lax", 27),
MR_TAG_COMMON(1,6,101)
},
{
MR_string_const("\tDon\'t warn about variables which occur in overlapping scopes.", 62),
MR_TAG_COMMON(1,6,102)
},
{
MR_string_const("--no-warn-overlapping-scopes", 28),
MR_TAG_COMMON(1,6,103)
},
{
MR_string_const("\tDon\'t warn about variables which only occur once.", 50),
MR_TAG_COMMON(1,6,104)
},
{
MR_string_const("--no-warn-singleton-variables", 29),
MR_TAG_COMMON(1,6,105)
},
{
MR_string_const("\tby --introduce-accumulators.", 29),
MR_TAG_COMMON(1,6,106)
},
{
MR_string_const("\tDon\'t warn about argument order rearrangement caused", 53),
MR_TAG_COMMON(1,6,107)
},
{
MR_string_const("--inhibit-accumulator-warnings", 30),
MR_TAG_COMMON(1,6,108)
},
{
MR_string_const("\tif it finds any syntax errors in the program.", 46),
MR_TAG_COMMON(1,6,109)
},
{
MR_string_const("\tafter syntax checking and not do any semantic checking", 55),
MR_TAG_COMMON(1,6,110)
},
{
MR_string_const("\tThis option causes the compiler to halt immediately", 52),
MR_TAG_COMMON(1,6,111)
},
{
MR_string_const("--halt-at-syntax-errors", 23),
MR_TAG_COMMON(1,6,112)
},
{
MR_string_const("\tnon-zero exit status.", 22),
MR_TAG_COMMON(1,6,113)
},
{
MR_string_const("\tgenerate code --- instead, it will return a", 44),
MR_TAG_COMMON(1,6,114)
},
{
MR_string_const("\tif any warning is issued, the compiler will not", 48),
MR_TAG_COMMON(1,6,115)
},
{
MR_string_const("\twarnings as if they were errors.  This means that", 50),
MR_TAG_COMMON(1,6,116)
},
{
MR_string_const("\tThis option causes the compiler to treat all ", 46),
MR_TAG_COMMON(1,6,117)
},
{
MR_string_const("--halt-at-warn", 14),
MR_TAG_COMMON(1,6,118)
},
{
MR_string_const("\tDisable all warning messages.", 30),
MR_TAG_COMMON(1,6,119)
},
{
MR_string_const("-w, --inhibit-warnings", 22),
MR_TAG_COMMON(1,6,120)
},
{
MR_string_const("\t\140--structure-reuse\' option.", 28),
MR_tbmkword(0, 0)
},
{
MR_string_const("\tOutput detailed debugging traces of the indirect reuse pass of", 63),
MR_TAG_COMMON(1,6,122)
},
{
MR_string_const("--debug-indirect-reuse", 22),
MR_TAG_COMMON(1,6,123)
},
{
MR_string_const("\toption.", 8),
MR_TAG_COMMON(1,6,124)
},
{
MR_string_const("\tOutput detailed debugging traces of the \140--intermodule-analysis\'", 65),
MR_TAG_COMMON(1,6,125)
},
{
MR_string_const("--debug-intermodule-analysis", 28),
MR_TAG_COMMON(1,6,126)
},
{
MR_string_const("\toption.", 8),
MR_TAG_COMMON(1,6,127)
},
{
MR_string_const("\tOutput detailed debugging traces of the \140--analyse-trail-usage\'", 64),
MR_TAG_COMMON(1,6,128)
},
{
MR_string_const("--debug-trail-usage", 19),
MR_TAG_COMMON(1,6,129)
},
{
MR_string_const("\tOutput detailed debugging traces of the \140--make\' option.", 57),
MR_TAG_COMMON(1,6,130)
},
{
MR_string_const("--debug-make", 12),
MR_TAG_COMMON(1,6,131)
},
{
MR_string_const("\tof the predicate with the given predicate id.", 46),
MR_TAG_COMMON(1,6,132)
},
{
MR_string_const("\tOutput detailed debugging traces of the liveness analysis", 58),
MR_TAG_COMMON(1,6,133)
},
{
MR_string_const("--debug-liveness <pred_id>", 26),
MR_TAG_COMMON(1,6,134)
},
{
MR_string_const("\tdeduction and deforestation process.", 37),
MR_TAG_COMMON(1,6,135)
},
{
MR_string_const("\tOutput detailed debugging traces of the partial", 48),
MR_TAG_COMMON(1,6,136)
},
{
MR_string_const("--debug-pd", 10),
MR_TAG_COMMON(1,6,137)
},
{
MR_string_const("\tonly for the predicate/function with the specified name.", 57),
MR_TAG_COMMON(1,6,138)
},
{
MR_string_const("\tOutput detailed debugging traces of the optimization process", 61),
MR_TAG_COMMON(1,6,139)
},
{
MR_string_const("--debug-opt-pred-name <name>", 28),
MR_TAG_COMMON(1,6,140)
},
{
MR_string_const("\tonly for the predicate/function with the specified pred id.", 60),
MR_TAG_COMMON(1,6,141)
},
{
MR_string_const("\tOutput detailed debugging traces of the optimization process", 61),
MR_TAG_COMMON(1,6,142)
},
{
MR_string_const("--debug-opt-pred-id <n>", 23),
MR_TAG_COMMON(1,6,143)
},
{
MR_string_const("\tOutput detailed debugging traces of the optimization process.", 62),
MR_TAG_COMMON(1,6,144)
},
{
MR_string_const("--debug-opt", 11),
MR_TAG_COMMON(1,6,145)
},
{
MR_string_const("\tOutput detailed debugging traces of determinism analysis.", 58),
MR_TAG_COMMON(1,6,146)
},
{
MR_string_const("--debug-det, --debug-determinism", 32),
MR_TAG_COMMON(1,6,147)
},
{
MR_string_const("\tpred id.", 9),
MR_TAG_COMMON(1,6,148)
},
{
MR_string_const("\tmode checking of the predicate or function with the specified", 62),
MR_TAG_COMMON(1,6,149)
},
{
MR_string_const("\tWith --debug-modes, restrict the debugging traces to the", 57),
MR_TAG_COMMON(1,6,150)
},
{
MR_string_const("--debug-modes-pred-id <n>", 25),
MR_TAG_COMMON(1,6,151)
},
{
MR_string_const("\tOutput detailed debugging traces of the mode checking.", 55),
MR_TAG_COMMON(1,6,152)
},
{
MR_string_const("--debug-modes-verbose", 21),
MR_TAG_COMMON(1,6,153)
},
{
MR_string_const("\tOutput only minimal debugging traces of the mode checking.", 59),
MR_TAG_COMMON(1,6,154)
},
{
MR_string_const("--debug-modes-minimal", 21),
MR_TAG_COMMON(1,6,155)
},
{
MR_string_const("\tOutput statistics after each step of mode checking.", 52),
MR_TAG_COMMON(1,6,156)
},
{
MR_string_const("--debug-modes-statistics", 24),
MR_TAG_COMMON(1,6,157)
},
{
MR_string_const("\tOutput debugging traces of the mode checking.", 46),
MR_TAG_COMMON(1,6,158)
},
{
MR_string_const("-N, --debug-modes", 17),
MR_TAG_COMMON(1,6,159)
},
{
MR_string_const("\tin terms of goals and variables to the end of the named file.", 62),
MR_TAG_COMMON(1,6,160)
},
{
MR_string_const("\tAppend information about the size of each procedure in the module", 66),
MR_TAG_COMMON(1,6,161)
},
{
MR_string_const("--proc-size-statistics <filename>", 33),
MR_TAG_COMMON(1,6,162)
},
{
MR_string_const("\tinformation at the boundaries between phases of the compiler.", 62),
MR_TAG_COMMON(1,6,163)
},
{
MR_string_const("\tAt the moment this option implies \140--no-trad-passes\', so you get", 65),
MR_TAG_COMMON(1,6,164)
},
{
MR_string_const("\tOutput messages about the compiler\'s time/space usage.", 55),
MR_TAG_COMMON(1,6,165)
},
{
MR_string_const("-S, --statistics", 16),
MR_TAG_COMMON(1,6,166)
},
{
MR_string_const("\tnot just the first.  Implies \140--verbose-recompilation\'.", 56),
MR_TAG_COMMON(1,6,167)
},
{
MR_string_const("\tFind all the reasons why a module needs to be recompiled,", 58),
MR_TAG_COMMON(1,6,168)
},
{
MR_string_const("--find-all-recompilation-reasons", 32),
MR_TAG_COMMON(1,6,169)
},
{
MR_string_const("\texplaining why a module needs to be recompiled.", 48),
MR_TAG_COMMON(1,6,170)
},
{
MR_string_const("\tWhen using \140--smart-recompilation\', output messages", 52),
MR_TAG_COMMON(1,6,171)
},
{
MR_string_const("--verbose-recompilation", 23),
MR_TAG_COMMON(1,6,172)
},
{
MR_string_const("\tNote that some commands will only be printed with \140--verbose\'.", 63),
MR_TAG_COMMON(1,6,173)
},
{
MR_string_const("\tOutput each external command before it is run.", 47),
MR_TAG_COMMON(1,6,174)
},
{
MR_string_const("--verbose-commands", 18),
MR_TAG_COMMON(1,6,175)
},
{
MR_string_const("\tfile after compiling a module (default: 15).", 45),
MR_TAG_COMMON(1,6,176)
},
{
MR_string_const("\tWith \140--make\', output the first <n> lines of the \140.err\'", 56),
MR_TAG_COMMON(1,6,177)
},
{
MR_string_const("--output-compile-error-lines <n>", 32),
MR_TAG_COMMON(1,6,178)
},
{
MR_string_const("\tthe \140--make\' option.", 21),
MR_TAG_COMMON(1,6,179)
},
{
MR_string_const("\tDisable messages about the progress of builds using", 52),
MR_TAG_COMMON(1,6,180)
},
{
MR_string_const("--no-verbose-make", 17),
MR_TAG_COMMON(1,6,181)
},
{
MR_string_const("\tdetailed explanation of any errors it finds in your program.", 61),
MR_TAG_COMMON(1,6,182)
},
{
MR_string_const("\tExplain error messages.  Asks the compiler to give you a more", 62),
MR_TAG_COMMON(1,6,183)
},
{
MR_string_const("-E, --verbose-error-messages", 28),
MR_TAG_COMMON(1,6,184)
},
{
MR_string_const("\tOutput very verbose progress messages.", 39),
MR_TAG_COMMON(1,6,185)
},
{
MR_string_const("-V, --very-verbose", 18),
MR_TAG_COMMON(1,6,186)
},
{
MR_string_const("\tOutput progress messages at each stage in the compilation.", 59),
MR_TAG_COMMON(1,6,187)
},
{
MR_string_const("-v, --verbose", 13),
MR_TAG_COMMON(1,6,188)
},
{
MR_string_const("\toutput.", 8),
MR_tbmkword(0, 0)
},
{
MR_string_const("\tvia the --ml option.  The flags are printed to the standard", 60),
MR_TAG_COMMON(1,6,190)
},
{
MR_string_const("\tstandard library as well as any other libraries specified", 58),
MR_TAG_COMMON(1,6,191)
},
{
MR_string_const("\tagainst the current set of libraries.  This includes the", 57),
MR_TAG_COMMON(1,6,192)
},
{
MR_string_const("\tPrint the flags that are passed to linker in order to link", 59),
MR_TAG_COMMON(1,6,193)
},
{
MR_string_const("--output-library-link-flags", 27),
MR_TAG_COMMON(1,6,194)
},
{
MR_string_const("\tto the standard output.", 24),
MR_TAG_COMMON(1,6,195)
},
{
MR_string_const("\tPrint the flags with which the C compiler will be invoked", 58),
MR_TAG_COMMON(1,6,196)
},
{
MR_string_const("--output-cflags", 15),
MR_TAG_COMMON(1,6,197)
},
{
MR_string_const("\tPrint the name of the C compiler to the standard output.", 57),
MR_TAG_COMMON(1,6,198)
},
{
MR_string_const("--output-cc", 11),
MR_TAG_COMMON(1,6,199)
},
{
MR_string_const("\tto be installed should be built to the standard output.", 56),
MR_TAG_COMMON(1,6,200)
},
{
MR_string_const("\tPrint the list of compilation grades in which a library", 56),
MR_TAG_COMMON(1,6,201)
},
{
MR_string_const("--output-libgrades", 18),
MR_TAG_COMMON(1,6,202)
},
{
MR_string_const("\tstandard output.", 17),
MR_TAG_COMMON(1,6,203)
},
{
MR_string_const("\tPrint the command used to link shared libraries to the", 55),
MR_TAG_COMMON(1,6,204)
},
{
MR_string_const("--output-shared-lib-link-command", 32),
MR_TAG_COMMON(1,6,205)
},
{
MR_string_const("\tstandard output.", 17),
MR_TAG_COMMON(1,6,206)
},
{
MR_string_const("\tPrint the command used to link executables to the", 50),
MR_TAG_COMMON(1,6,207)
},
{
MR_string_const("--output-link-command", 21),
MR_TAG_COMMON(1,6,208)
},
{
MR_string_const("\toutput.", 8),
MR_TAG_COMMON(1,6,209)
},
{
MR_string_const("\tthe command line options, and print it to the standard", 55),
MR_TAG_COMMON(1,6,210)
},
{
MR_string_const("\tCompute the grade of the library to link with based on", 55),
MR_TAG_COMMON(1,6,211)
},
{
MR_string_const("--output-grade-string", 21),
MR_TAG_COMMON(1,6,212)
},
{
MR_string_const("\tbut do not attempt to link the named modules.", 46),
MR_TAG_COMMON(1,6,213)
},
{
MR_string_const("\tGenerate C code in \140<module>.c\' and object code in \140<module>.o\'", 64),
MR_TAG_COMMON(1,6,214)
},
{
MR_string_const("-c, --compile-only", 18),
MR_TAG_COMMON(1,6,215)
},
{
MR_string_const("\t\140<module>.java\'), but not object code.", 39),
MR_TAG_COMMON(1,6,216)
},
{
MR_string_const("\tIL code in \140<module>.il\', or Java code in", 42),
MR_TAG_COMMON(1,6,217)
},
{
MR_string_const("\tassembler code in \140<module>.s\' or \140<module>.pic_s\',", 52),
MR_TAG_COMMON(1,6,218)
},
{
MR_string_const("\tGenerate target code (i.e. C code in \140<module>.c\',", 51),
MR_TAG_COMMON(1,6,219)
},
{
MR_string_const("-C, --target-code-only", 22),
MR_TAG_COMMON(1,6,220)
},
{
MR_string_const("\tCheck the module for errors, but do not generate any code.", 59),
MR_TAG_COMMON(1,6,221)
},
{
MR_string_const("-e, --errorcheck-only", 21),
MR_TAG_COMMON(1,6,222)
},
{
MR_string_const("\tand don\'t generate any code.", 29),
MR_TAG_COMMON(1,6,223)
},
{
MR_string_const("\ttype-correct. Don\'t check modes or determinism,", 48),
MR_TAG_COMMON(1,6,224)
},
{
MR_string_const("\tJust check that the code is syntactically correct and", 54),
MR_TAG_COMMON(1,6,225)
},
{
MR_string_const("-t, --typecheck-only", 20),
MR_TAG_COMMON(1,6,226)
},
{
MR_string_const("\tThis option acts as a Mercury ugly-printer.", 44),
MR_TAG_COMMON(1,6,227)
},
{
MR_string_const("\tConvert to Mercury. Output to file \140<module>.ugly\'", 51),
MR_TAG_COMMON(1,6,228)
},
{
MR_string_const("-P, --convert-to-mercury", 24),
MR_TAG_COMMON(1,6,229)
},
{
MR_string_const("\tThis option should only be used by mmake.", 42),
MR_TAG_COMMON(1,6,230)
},
{
MR_string_const("\tinto the \140<module>.xml\' file.", 30),
MR_TAG_COMMON(1,6,231)
},
{
MR_string_const("\tOutput XML documentation of the module", 39),
MR_TAG_COMMON(1,6,232)
},
{
MR_string_const("-x,--make-xml-doc,--make-xml-documentation", 42),
MR_TAG_COMMON(1,6,233)
},
{
MR_string_const("\tThis option should only be used by mmake.", 42),
MR_TAG_COMMON(1,6,234)
},
{
MR_string_const("\tinto the \140<module>.trans_opt\' file.", 36),
MR_TAG_COMMON(1,6,235)
},
{
MR_string_const("\tOutput transitive optimization information", 43),
MR_TAG_COMMON(1,6,236)
},
{
MR_string_const("--make-transitive-optimization-interface", 40),
MR_TAG_COMMON(1,6,237)
},
{
MR_string_const("--make-trans-opt", 16),
MR_TAG_COMMON(1,6,238)
},
{
MR_string_const("\tThis option should only be used by mmake.", 42),
MR_TAG_COMMON(1,6,239)
},
{
MR_string_const("\t\140<module>.opt\'.", 16),
MR_TAG_COMMON(1,6,240)
},
{
MR_string_const("\tWrite inter-module optimization information to", 47),
MR_TAG_COMMON(1,6,241)
},
{
MR_string_const("--make-opt-int, --make-optimization-interface", 45),
MR_TAG_COMMON(1,6,242)
},
{
MR_string_const("\tThis option should only be used by mmake.", 42),
MR_TAG_COMMON(1,6,243)
},
{
MR_string_const("\tWrite the unqualified short interface to \140<module>.int3\'.", 58),
MR_TAG_COMMON(1,6,244)
},
{
MR_string_const("--make-short-int, --make-short-interface", 40),
MR_TAG_COMMON(1,6,245)
},
{
MR_string_const("\tThis option should only be used by mmake.", 42),
MR_TAG_COMMON(1,6,246)
},
{
MR_string_const("\tWrite the private interface to \140<module>.int0\'.", 48),
MR_TAG_COMMON(1,6,247)
},
{
MR_string_const("--make-priv-int, --make-private-interface", 41),
MR_TAG_COMMON(1,6,248)
},
{
MR_string_const("\tThis option should only be used by mmake.", 42),
MR_TAG_COMMON(1,6,249)
},
{
MR_string_const("\tand write the short interface to \140<module>.int2\'", 49),
MR_TAG_COMMON(1,6,250)
},
{
MR_string_const("\tWrite the module interface to \140<module>.int\',", 46),
MR_TAG_COMMON(1,6,251)
},
{
MR_string_const("-i, --make-int, --make-interface", 32),
MR_TAG_COMMON(1,6,252)
},
{
MR_string_const("\tchapter of the Mercury User\'s Guide for further details.)", 58),
MR_TAG_COMMON(1,6,253)
},
{
MR_string_const("\tthe stand-alone interface.  (See the Stand-alone Interface", 59),
MR_TAG_COMMON(1,6,254)
},
{
MR_string_const("\t<basename> is used as the basename of any files generated for", 62),
MR_TAG_COMMON(1,6,255)
},
{
MR_string_const("\tOutput a stand-alone interface.", 32),
MR_TAG_COMMON(1,6,256)
},
{
MR_string_const("--generate-standalone-interface <basename>", 42),
MR_TAG_COMMON(1,6,257)
},
{
MR_string_const("\tImplies --generate-dependencies.", 33),
MR_TAG_COMMON(1,6,258)
},
{
MR_string_const("\tdependency graph in top-down order to \140<module>.order\'.", 56),
MR_TAG_COMMON(1,6,259)
},
{
MR_string_const("\tOutput the strongly connected components of the module", 55),
MR_TAG_COMMON(1,6,260)
},
{
MR_string_const("--generate-module-order", 23),
MR_TAG_COMMON(1,6,261)
},
{
MR_string_const("\tto \140<module>.d\'.", 17),
MR_TAG_COMMON(1,6,262)
},
{
MR_string_const("\tOutput \140Make\'-style dependencies for the module", 48),
MR_TAG_COMMON(1,6,263)
},
{
MR_string_const("--generate-dependency-file", 26),
MR_TAG_COMMON(1,6,264)
},
{
MR_string_const("\tand all of its dependencies to \140<module>.dep\'.", 47),
MR_TAG_COMMON(1,6,265)
},
{
MR_string_const("\tOutput \140Make\'-style dependencies for the module", 48),
MR_TAG_COMMON(1,6,266)
},
{
MR_string_const("-M, --generate-dependencies", 27),
MR_TAG_COMMON(1,6,267)
},
{
MR_string_const("\tgenerated.", 11),
MR_TAG_COMMON(1,6,268)
},
{
MR_string_const("\tIf there are no such modules the mapping need not be", 53),
MR_TAG_COMMON(1,6,269)
},
{
MR_string_const("\tfor which the file name does not match the module name.", 56),
MR_TAG_COMMON(1,6,270)
},
{
MR_string_const("\t\140mmc --generate-dependencies\' if there are any modules", 55),
MR_TAG_COMMON(1,6,271)
},
{
MR_string_const("\tto \140Mercury.modules\'. This must be done before", 47),
MR_TAG_COMMON(1,6,272)
},
{
MR_string_const("\tof source files given as non-option arguments to mmc", 53),
MR_TAG_COMMON(1,6,273)
},
{
MR_string_const("\tOutput the module name to file name mapping for the list", 57),
MR_TAG_COMMON(1,6,274)
},
{
MR_string_const("-f, --generate-source-file-mapping", 34),
MR_TAG_COMMON(1,6,275)
},
{
MR_string_const("is to link the named modules to produce an executable.\n", 55),
MR_TAG_COMMON(1,6,276)
},
{
MR_string_const("If none of these options are specified, the default action", 58),
MR_TAG_COMMON(1,6,277)
},
{
MR_string_const("Only the first one specified will apply.", 40),
MR_TAG_COMMON(1,6,278)
},
{
MR_string_const("These options are mutually exclusive.", 37),
MR_TAG_COMMON(1,6,279)
},
{
MR_string_const("\tto be deprecated at a later date.", 34),
MR_tbmkword(0, 0)
},
{
MR_string_const("\tThis option is specific to the IL backend, and is likely", 57),
MR_TAG_COMMON(1,6,281)
},
{
MR_string_const("\tmodules must be compiled with this option enabled.", 51),
MR_TAG_COMMON(1,6,282)
},
{
MR_string_const("\tTo use assemblies created with this command all the Mercury", 60),
MR_TAG_COMMON(1,6,283)
},
{
MR_string_const("\tSign the current assembly with the Mercury strong name.", 56),
MR_TAG_COMMON(1,6,284)
},
{
MR_string_const("--sign-assembly", 15),
MR_TAG_COMMON(1,6,285)
},
{
MR_string_const("\tthe specified stage, to \140<module>.mlds_dump.<num>-<name>\'.", 59),
MR_TAG_COMMON(1,6,286)
},
{
MR_string_const("\tDump the internal compiler representation of the MLDS, after", 61),
MR_TAG_COMMON(1,6,287)
},
{
MR_string_const("--verbose-dump-mlds <stage number or name>", 42),
MR_TAG_COMMON(1,6,288)
},
{
MR_string_const("\tMultiple dump options accumulate.", 34),
MR_TAG_COMMON(1,6,289)
},
{
MR_string_const("\tStage numbers range from 1-99.", 31),
MR_TAG_COMMON(1,6,290)
},
{
MR_string_const("\tand \140<module>.h_dump.<num>-<name>\'.", 36),
MR_TAG_COMMON(1,6,291)
},
{
MR_string_const("\tto\140<module>.c_dump.<num>-<name>\',", 34),
MR_TAG_COMMON(1,6,292)
},
{
MR_string_const("\tafter the specified stage, as C code,", 38),
MR_TAG_COMMON(1,6,293)
},
{
MR_string_const("\tDump the MLDS (medium level intermediate representation)", 57),
MR_TAG_COMMON(1,6,294)
},
{
MR_string_const("--dump-mlds <stage number or name>", 34),
MR_TAG_COMMON(1,6,295)
},
{
MR_string_const("\tthis stage is identical to the previously dumped HLDS stage.", 61),
MR_TAG_COMMON(1,6,296)
},
{
MR_string_const("\tCreate a file for a HLDS stage even if the file notes only that", 64),
MR_TAG_COMMON(1,6,297)
},
{
MR_string_const("--dump-same-hlds", 16),
MR_TAG_COMMON(1,6,298)
},
{
MR_string_const("\tthe \140--dump-hlds\' option.", 26),
MR_TAG_COMMON(1,6,299)
},
{
MR_string_const("\tAppend the given suffix to the names of the files created by", 61),
MR_TAG_COMMON(1,6,300)
},
{
MR_string_const("--dump-hlds-file-suffix <suffix>", 32),
MR_TAG_COMMON(1,6,301)
},
{
MR_string_const("\t(see the Mercury User\'s Guide for details).", 44),
MR_TAG_COMMON(1,6,302)
},
{
MR_string_const("\tcorresponding letter occurs in the option argument", 51),
MR_TAG_COMMON(1,6,303)
},
{
MR_string_const("\tEach type of detail is included in the dump if its", 51),
MR_TAG_COMMON(1,6,304)
},
{
MR_string_const("\tWith \140--dump-hlds\', include extra detail in the dump.", 54),
MR_TAG_COMMON(1,6,305)
},
{
MR_string_const("--dump-hlds-options <options>", 29),
MR_TAG_COMMON(1,6,306)
},
{
MR_string_const("\tname.", 6),
MR_TAG_COMMON(1,6,307)
},
{
MR_string_const("\tDump the HLDS only of the predicate/function with the given", 60),
MR_TAG_COMMON(1,6,308)
},
{
MR_string_const("--dump-hlds-pred-name <name>", 28),
MR_TAG_COMMON(1,6,309)
},
{
MR_string_const("\tpred id.", 9),
MR_TAG_COMMON(1,6,310)
},
{
MR_string_const("\tDump the HLDS only of the predicate/function with the given", 60),
MR_TAG_COMMON(1,6,311)
},
{
MR_string_const("--dump-hlds-pred-id <n>", 23),
MR_TAG_COMMON(1,6,312)
},
{
MR_string_const("\tMultiple dump options accumulate.", 34),
MR_TAG_COMMON(1,6,313)
},
{
MR_string_const("\tStage numbers range from 1-599.", 32),
MR_TAG_COMMON(1,6,314)
},
{
MR_string_const("\tthe specified stage to \140<module>.hlds_dump.<num>-<name>\'.", 58),
MR_TAG_COMMON(1,6,315)
},
{
MR_string_const("\tDump the HLDS (high level intermediate representation) after", 61),
MR_TAG_COMMON(1,6,316)
},
{
MR_string_const("-d <n>, --dump-hlds <stage number or name>", 42),
MR_TAG_COMMON(1,6,317)
},
{
MR_string_const("\tThe resulting file can be processed by the graphviz tools.", 59),
MR_TAG_COMMON(1,6,318)
},
{
MR_string_const("\timports module B.", 18),
MR_TAG_COMMON(1,6,319)
},
{
MR_string_const("\tThe imports graph contains the directed graph module A", 55),
MR_TAG_COMMON(1,6,320)
},
{
MR_string_const("\tWrite out the imports graph to \140<module>.imports_graph\'.", 57),
MR_TAG_COMMON(1,6,321)
},
{
MR_string_const("--imports-graph", 15),
MR_TAG_COMMON(1,6,322)
},
{
MR_string_const("\tWrite out the dependency graph to \140<module>.dependency_graph\'.", 63),
MR_TAG_COMMON(1,6,323)
},
{
MR_string_const("--show-dependency-graph", 23),
MR_TAG_COMMON(1,6,324)
},
{
MR_string_const("\tuse the \140--no-llds-optimize\' option.)", 38),
MR_TAG_COMMON(1,6,325)
},
{
MR_string_const("\t(The code may be easier to understand if you also", 50),
MR_TAG_COMMON(1,6,326)
},
{
MR_string_const("\tOutput comments in the \140<module>.c\' file.", 42),
MR_TAG_COMMON(1,6,327)
},
{
MR_string_const("--auto-comments", 15),
MR_TAG_COMMON(1,6,328)
},
{
MR_string_const("\tor in Mercury (with the option --convert-to-mercury).", 54),
MR_TAG_COMMON(1,6,329)
},
{
MR_string_const("\tThe generated code may be in C (the usual case),", 49),
MR_TAG_COMMON(1,6,330)
},
{
MR_string_const("\tDo not put source line numbers in the generated code.", 54),
MR_TAG_COMMON(1,6,331)
},
{
MR_string_const("-n-, --no-line-numbers", 22),
MR_TAG_COMMON(1,6,332)
},
{
MR_string_const("\tby an experimental debugger.", 29),
MR_TAG_COMMON(1,6,333)
},
{
MR_string_const("\tOutput a bytecode form of the module for use", 45),
MR_TAG_COMMON(1,6,334)
},
{
MR_string_const("--generate-bytecode", 19),
MR_TAG_COMMON(1,6,335)
},
{
MR_string_const("\tsupported in general.", 22),
MR_TAG_COMMON(1,6,336)
},
{
MR_string_const("\thigher-order arguments, even if stack tracing is not", 53),
MR_TAG_COMMON(1,6,337)
},
{
MR_string_const("\tEnable stack traces through predicates and functions with", 58),
MR_TAG_COMMON(1,6,338)
},
{
MR_string_const("--stack-trace-higher-order", 26),
MR_TAG_COMMON(1,6,339)
},
{
MR_string_const("\tHowever, it will not do this if this option is given.", 54),
MR_TAG_COMMON(1,6,340)
},
{
MR_string_const("\taccessible from as many debugger events as possible.", 53),
MR_TAG_COMMON(1,6,341)
},
{
MR_string_const("\tbeyond the point of their last use, in order to make them", 58),
MR_TAG_COMMON(1,6,342)
},
{
MR_string_const("\tpreserves the values of variables as long as possible, even", 60),
MR_TAG_COMMON(1,6,343)
},
{
MR_string_const("\tWhen the trace level is \140deep\', the compiler normally", 54),
MR_TAG_COMMON(1,6,344)
},
{
MR_string_const("--no-delay-death", 16),
MR_TAG_COMMON(1,6,345)
},
{
MR_string_const("\tDo not disable optimizations that can distort deep profiles.", 61),
MR_TAG_COMMON(1,6,346)
},
{
MR_string_const("--profile-optimized", 19),
MR_TAG_COMMON(1,6,347)
},
{
MR_string_const("\tEnable the trace goals that depend on the <keyword> trace flag.", 64),
MR_TAG_COMMON(1,6,348)
},
{
MR_string_const("--trace-flag <keyword>", 22),
MR_TAG_COMMON(1,6,349)
},
{
MR_string_const("\tDo not disable optimizations that can change the trace.", 56),
MR_TAG_COMMON(1,6,350)
},
{
MR_string_const("--trace-optimized", 17),
MR_TAG_COMMON(1,6,351)
},
{
MR_string_const("\tstack frames", 13),
MR_TAG_COMMON(1,6,352)
},
{
MR_string_const("\tthe debugger won\'t have access to the contents of the reused", 61),
MR_TAG_COMMON(1,6,353)
},
{
MR_string_const("\ttheir parent call\'s stack frame, but it also means that", 56),
MR_TAG_COMMON(1,6,354)
},
{
MR_string_const("\tEXIT events. This allows these recursive calls to reuse", 56),
MR_TAG_COMMON(1,6,355)
},
{
MR_string_const("\tGenerate TAIL events for self-tail-recursive calls instead of", 62),
MR_TAG_COMMON(1,6,356)
},
{
MR_string_const("--exec-trace-tail-rec", 21),
MR_TAG_COMMON(1,6,357)
},
{
MR_string_const("\tfor details.", 13),
MR_TAG_COMMON(1,6,358)
},
{
MR_string_const("\tSee the Debugging chapter of the Mercury User\'s Guide", 54),
MR_TAG_COMMON(1,6,359)
},
{
MR_string_const("\tof execution tracing.", 22),
MR_TAG_COMMON(1,6,360)
},
{
MR_string_const("\tGenerate code that includes the specified level", 48),
MR_TAG_COMMON(1,6,361)
},
{
MR_string_const("--trace {minimum, shallow, deep, rep, default}", 46),
MR_TAG_COMMON(1,6,362)
},
{
MR_string_const("\tlibrary for installation.", 26),
MR_TAG_COMMON(1,6,363)
},
{
MR_string_const("\twhen using Mmake. This is recommended when building a", 54),
MR_TAG_COMMON(1,6,364)
},
{
MR_string_const("\tGenerate dependencies for use by \140mmc --make\' even", 51),
MR_TAG_COMMON(1,6,365)
},
{
MR_string_const("--generate-mmc-make-module-dependencies", 39),
MR_TAG_COMMON(1,6,366)
},
{
MR_string_const("--generate-mmc-deps", 19),
MR_TAG_COMMON(1,6,367)
},
{
MR_string_const("\tused by mmake.", 15),
MR_TAG_COMMON(1,6,368)
},
{
MR_string_const("\tfor use by \140mmc --make\' in addition to the dependencies", 56),
MR_TAG_COMMON(1,6,369)
},
{
MR_string_const("\tWhen generating \140.dep\' files, generate dependencies", 52),
MR_TAG_COMMON(1,6,370)
},
{
MR_string_const("\tdo not assume the availability of GNU Make extensions.", 55),
MR_TAG_COMMON(1,6,371)
},
{
MR_string_const("\tfragments that use only the features of standard make;", 55),
MR_TAG_COMMON(1,6,372)
},
{
MR_string_const("\tWhen generating \140.dep\' files, generate Makefile", 48),
MR_TAG_COMMON(1,6,373)
},
{
MR_string_const("--no-assume-gmake", 17),
MR_TAG_COMMON(1,6,374)
},
{
MR_string_const("\tdoes not yet work with \140--intermodule-optimization\'.", 53),
MR_TAG_COMMON(1,6,375)
},
{
MR_string_const("\tnot invalidate the compiled code. \140--smart-recompilation\'", 58),
MR_TAG_COMMON(1,6,376)
},
{
MR_string_const("\timported module\'s interface changes in a way which does", 56),
MR_TAG_COMMON(1,6,377)
},
{
MR_string_const("\tto be used to avoid unnecessary recompilations if an", 53),
MR_TAG_COMMON(1,6,378)
},
{
MR_string_const("\tWhen compiling, write program dependency information", 53),
MR_TAG_COMMON(1,6,379)
},
{
MR_string_const("--smart-recompilation", 21),
MR_TAG_COMMON(1,6,380)
},
{
MR_string_const("\t(default: 0)", 13),
MR_tbmkword(0, 0)
},
{
MR_string_const("\tcan be reused, and the terms that reuse these terms.", 53),
MR_TAG_COMMON(1,6,382)
},
{
MR_string_const("\tSpecify the maximum difference in arities between the terms that", 65),
MR_TAG_COMMON(1,6,383)
},
{
MR_string_const("--structure-reuse-constraint-arg, --ctgc-constraint-arg", 55),
MR_TAG_COMMON(1,6,384)
},
{
MR_string_const("\t(default: within_n_cells_difference, with threshold 0)", 55),
MR_TAG_COMMON(1,6,385)
},
{
MR_string_const("\tneeds to be set using \140--structure-reuse-constraint-arg\'.", 58),
MR_TAG_COMMON(1,6,386)
},
{
MR_string_const("\tand new term does not exceed a certain threshold. The threshold ", 65),
MR_TAG_COMMON(1,6,387)
},
{
MR_string_const("\treuse is allowed as long as the arities between the reused term", 64),
MR_TAG_COMMON(1,6,388)
},
{
MR_string_const("\ttype and constructor. \140within_n_cells_difference\' states that", 62),
MR_TAG_COMMON(1,6,389)
},
{
MR_string_const("\tspecifies that reuse is only allowed between terms of the same", 63),
MR_TAG_COMMON(1,6,390)
},
{
MR_string_const("\tConstraint on the way we allow structure reuse. \140same_cons_id\'", 63),
MR_TAG_COMMON(1,6,391)
},
{
MR_string_const("\twithin_n_cells_difference}", 27),
MR_TAG_COMMON(1,6,392)
},
{
MR_string_const("\twithin_n_cells_difference}, --ctgc-constraint {same_cons_id,", 61),
MR_TAG_COMMON(1,6,393)
},
{
MR_string_const("--structure-reuse-constraint {same_cons_id, ", 44),
MR_TAG_COMMON(1,6,394)
},
{
MR_string_const("\tCollection).", 13),
MR_TAG_COMMON(1,6,395)
},
{
MR_string_const("\tPerform structure reuse analysis (Compile Time Garbage ", 56),
MR_TAG_COMMON(1,6,396)
},
{
MR_string_const("--structure-reuse, --ctgc", 25),
MR_TAG_COMMON(1,6,397)
},
{
MR_string_const("\t(default: 0).", 14),
MR_TAG_COMMON(1,6,398)
},
{
MR_string_const("\tlarger than <n>. When n=0, widening is not enabled.", 52),
MR_TAG_COMMON(1,6,399)
},
{
MR_string_const("\tPerform widening when the set of structure sharing pairs becomes", 65),
MR_TAG_COMMON(1,6,400)
},
{
MR_string_const("--structure-sharing-widening <n>", 32),
MR_TAG_COMMON(1,6,401)
},
{
MR_string_const("\tPerform structure sharing analysis.", 36),
MR_TAG_COMMON(1,6,402)
},
{
MR_string_const("--structure-sharing", 19),
MR_TAG_COMMON(1,6,403)
},
{
MR_string_const("\twith at most <n> paths (default: 256).", 39),
MR_tbmkword(0, 0)
},
{
MR_string_const("\tPerform termination analysis only on predicates", 48),
MR_TAG_COMMON(1,6,405)
},
{
MR_string_const("--term-path-limit <n>, --termination-path-limit <n>", 51),
MR_TAG_COMMON(1,6,406)
},
{
MR_string_const("\t(default: 3).", 14),
MR_TAG_COMMON(1,6,407)
},
{
MR_string_const("\tPrint at most <n> reasons for any single termination error", 59),
MR_TAG_COMMON(1,6,408)
},
{
MR_string_const("--term-err-limit <n>, --termination-error-limit <n>", 51),
MR_TAG_COMMON(1,6,409)
},
{
MR_string_const("\tthan pointers to cells of the same type.", 41),
MR_TAG_COMMON(1,6,410)
},
{
MR_string_const("\tnumber of words in the cell that contain something other", 57),
MR_TAG_COMMON(1,6,411)
},
{
MR_string_const("\tin the cell.  The \140num-data-elems\' norm says that it is the", 60),
MR_TAG_COMMON(1,6,412)
},
{
MR_string_const("\tone.  The \140total\' norm says that it is the number of words", 59),
MR_TAG_COMMON(1,6,413)
},
{
MR_string_const("\tof a memory cell. The \140simple\' norm says that size is always", 61),
MR_TAG_COMMON(1,6,414)
},
{
MR_string_const("\tThe norm defines how termination analysis measures the size", 60),
MR_TAG_COMMON(1,6,415)
},
{
MR_string_const("--termination-norm {simple, total, num-data-elems}", 50),
MR_TAG_COMMON(1,6,416)
},
{
MR_string_const("\tSetting this limit to zero disables single argument analysis.", 62),
MR_TAG_COMMON(1,6,417)
},
{
MR_string_const("\tcomponents of the call graph that have up to <n> procedures.", 61),
MR_TAG_COMMON(1,6,418)
},
{
MR_string_const("\trecursion on single arguments in strongly connected", 52),
MR_TAG_COMMON(1,6,419)
},
{
MR_string_const("\tWhen performing termination analysis, try analyzing", 52),
MR_TAG_COMMON(1,6,420)
},
{
MR_string_const("--term-single-arg <n>, --termination-single-argument-analysis <n>", 65),
MR_TAG_COMMON(1,6,421)
},
{
MR_string_const("\tpredicates or functions that cannot be proved to terminate.", 60),
MR_TAG_COMMON(1,6,422)
},
{
MR_string_const("\tEnable termination analysis, and emit warnings for all", 55),
MR_TAG_COMMON(1,6,423)
},
{
MR_string_const("--verb-chk-term, --verb-check-term, --verbose-check-termination", 63),
MR_TAG_COMMON(1,6,424)
},
{
MR_string_const("\twarning of non-termination, as it is likely to be spurious.", 60),
MR_TAG_COMMON(1,6,425)
},
{
MR_string_const("\tnot be analysed.  In these cases the compiler does not emit a", 62),
MR_TAG_COMMON(1,6,426)
},
{
MR_string_const("\tconstructs (such as higher order calls) were used which could", 62),
MR_TAG_COMMON(1,6,427)
},
{
MR_string_const("\ttermination properties of other predicates, or because language", 64),
MR_TAG_COMMON(1,6,428)
},
{
MR_string_const("\tthe problem is either a lack of information about the", 54),
MR_TAG_COMMON(1,6,429)
},
{
MR_string_const("\tIn many cases where the compiler is unable to prove termination", 64),
MR_TAG_COMMON(1,6,430)
},
{
MR_string_const("\tpredicates or functions that cannot be proved to terminate.", 60),
MR_TAG_COMMON(1,6,431)
},
{
MR_string_const("\tEnable termination analysis, and emit warnings for some", 56),
MR_TAG_COMMON(1,6,432)
},
{
MR_string_const("--chk-term, --check-term, --check-termination", 45),
MR_TAG_COMMON(1,6,433)
},
{
MR_string_const("\tAnalyse each predicate to discover if it terminates.", 53),
MR_TAG_COMMON(1,6,434)
},
{
MR_string_const("--enable-term, --enable-termination", 35),
MR_TAG_COMMON(1,6,435)
},
{
MR_string_const("\twill result in an error at link time.", 38),
MR_tbmkword(0, 0)
},
{
MR_string_const("\tAttempting to use a grade which has not been installed", 55),
MR_TAG_COMMON(1,6,437)
},
{
MR_string_const("\tof these possible grades will have been installed.", 51),
MR_TAG_COMMON(1,6,438)
},
{
MR_string_const("\tDepending on your particular installation, only a subset", 57),
MR_TAG_COMMON(1,6,439)
},
{
MR_string_const("\t\140.spf\', \140.stseg\', \140.debug\', \140.par\' and/or \140.pic_reg\' appended.", 63),
MR_TAG_COMMON(1,6,440)
},
{
MR_string_const("\t\140.gc\', \140.mps\', \140.prof\', \140.memprof\', \140.profdeep\', \140.tr\',", 56),
MR_TAG_COMMON(1,6,441)
},
{
MR_string_const("\tor one of those with one or more of the grade modifiers", 56),
MR_TAG_COMMON(1,6,442)
},
{
MR_string_const("\t\140asm_fast\', \140hl\', \140hlc\', \140il\', or \140java\',", 42),
MR_TAG_COMMON(1,6,443)
},
{
MR_string_const("\tthe base grades \140none\', \140reg\', \140jump\', \140asm_jump\', \140fast\', ", 60),
MR_TAG_COMMON(1,6,444)
},
{
MR_string_const("\tSelect the compilation model. The <grade> should be one of", 59),
MR_TAG_COMMON(1,6,445)
},
{
MR_string_const("-s <grade>, --grade <grade>", 27),
MR_TAG_COMMON(1,6,446)
},
{
MR_string_const("", 0),
MR_TAG_COMMON(1,6,447)
},
{
MR_string_const("library which has been compiled with the same setting.", 54),
MR_TAG_COMMON(1,6,448)
},
{
MR_string_const("and it must be linked to a version of the Mercury", 49),
MR_TAG_COMMON(1,6,449)
},
{
MR_string_const("compiled with the same setting of these options,", 48),
MR_TAG_COMMON(1,6,450)
},
{
MR_string_const("code in such a way that the entire program must be", 50),
MR_TAG_COMMON(1,6,451)
},
{
MR_string_const("The following compilation options affect the generated", 54),
MR_TAG_COMMON(1,6,452)
},
{
MR_string_const("\tcode.", 6),
MR_tbmkword(0, 0)
},
{
MR_string_const("\tGenerate C code in \140<module>.c\', but do not generate object", 60),
MR_TAG_COMMON(1,6,454)
},
{
MR_string_const("\tAn abbreviation for \140--target c --target-code-only\'.", 53),
MR_TAG_COMMON(1,6,455)
},
{
MR_string_const("--compile-to-c", 14),
MR_TAG_COMMON(1,6,456)
},
{
MR_string_const("\tobject code.", 13),
MR_TAG_COMMON(1,6,457)
},
{
MR_string_const("\tGenerate Erlang code in \140<module>.erl\', but do not generate", 60),
MR_TAG_COMMON(1,6,458)
},
{
MR_string_const("\tAn abbreviation for \140--target erlang --target-code-only\'.", 58),
MR_TAG_COMMON(1,6,459)
},
{
MR_string_const("--erlang-only", 13),
MR_TAG_COMMON(1,6,460)
},
{
MR_string_const("\tAn abbreviation for \140--target erlang\'.", 39),
MR_TAG_COMMON(1,6,461)
},
{
MR_string_const("--erlang", 8),
MR_TAG_COMMON(1,6,462)
},
{
MR_string_const("\tobject code.", 13),
MR_TAG_COMMON(1,6,463)
},
{
MR_string_const("\tGenerate Java code in \140<module>.java\', but do not generate", 59),
MR_TAG_COMMON(1,6,464)
},
{
MR_string_const("\tAn abbreviation for \140--target java --target-code-only\'.", 56),
MR_TAG_COMMON(1,6,465)
},
{
MR_string_const("--java-only", 11),
MR_TAG_COMMON(1,6,466)
},
{
MR_string_const("\tAn abbreviation for \140--target java\'.", 37),
MR_TAG_COMMON(1,6,467)
},
{
MR_string_const("--java", 6),
MR_TAG_COMMON(1,6,468)
},
{
MR_string_const("\tcode.", 6),
MR_TAG_COMMON(1,6,469)
},
{
MR_string_const("\tUse specific workarounds for the ROTOR CLR in the generated", 60),
MR_TAG_COMMON(1,6,470)
},
{
MR_string_const("--support-rotor-clr", 19),
MR_TAG_COMMON(1,6,471)
},
{
MR_string_const("\tDon\'t use MS CLR specific workarounds in the generated code.", 61),
MR_TAG_COMMON(1,6,472)
},
{
MR_string_const("--no-support-ms-clr", 19),
MR_TAG_COMMON(1,6,473)
},
{
MR_string_const("\twith the Microsoft .NET SDK.", 29),
MR_TAG_COMMON(1,6,474)
},
{
MR_string_const("\tThe version number for the mscorlib assembly distributed", 57),
MR_TAG_COMMON(1,6,475)
},
{
MR_string_const("--dotnet-library-version <version-number>", 41),
MR_TAG_COMMON(1,6,476)
},
{
MR_string_const("\tobject code.", 13),
MR_TAG_COMMON(1,6,477)
},
{
MR_string_const("\tGenerate IL code in \140<module>.il\', but do not generate", 55),
MR_TAG_COMMON(1,6,478)
},
{
MR_string_const("\tAn abbreviation for \140--target il --target-code-only\'.", 54),
MR_TAG_COMMON(1,6,479)
},
{
MR_string_const("--il-only", 9),
MR_TAG_COMMON(1,6,480)
},
{
MR_string_const("\tAn abbreviation for \140--target il\'.", 35),
MR_TAG_COMMON(1,6,481)
},
{
MR_string_const("--il", 4),
MR_TAG_COMMON(1,6,482)
},
{
MR_string_const("\tthese both use grade \140hlc\'.", 28),
MR_TAG_COMMON(1,6,483)
},
{
MR_string_const("\twith code generated using \140--target c --high-level-code\', so", 61),
MR_TAG_COMMON(1,6,484)
},
{
MR_string_const("\tABIs, code generated using \140--target asm\' is binary compatible", 63),
MR_TAG_COMMON(1,6,485)
},
{
MR_string_const("\twhere different option settings normally correspond to different", 65),
MR_TAG_COMMON(1,6,486)
},
{
MR_string_const("\tAs an exception to the usual rule for options in this section,", 63),
MR_TAG_COMMON(1,6,487)
},
{
MR_string_const("\tTargets other than C imply \140--high-level-code\' (see below).", 60),
MR_TAG_COMMON(1,6,488)
},
{
MR_string_const("\tRuntime.", 9),
MR_TAG_COMMON(1,6,489)
},
{
MR_string_const("\tis the Intermediate Language for the .NET Common Language", 58),
MR_TAG_COMMON(1,6,490)
},
{
MR_string_const("\tThe default is C.  \"IL\" (also known as \"CIL\" or \"MSIL\")", 56),
MR_TAG_COMMON(1,6,491)
},
{
MR_string_const("\tSpecify the target language: C, assembler, IL, Java or Erlang.", 63),
MR_TAG_COMMON(1,6,492)
},
{
MR_string_const("--target erlang\t\t\t(grades: erlang)", 34),
MR_TAG_COMMON(1,6,493)
},
{
MR_string_const("--target java\t\t\t(grades: java)", 30),
MR_TAG_COMMON(1,6,494)
},
{
MR_string_const("--target il\t\t\t(grades: il)", 26),
MR_TAG_COMMON(1,6,495)
},
{
MR_string_const("--target asm\t\t\t(grades: hlc)", 28),
MR_TAG_COMMON(1,6,496)
},
{
MR_string_const("\t\t\t\t\tasm_jump, asm_fast, hl, hlc)", 33),
MR_TAG_COMMON(1,6,497)
},
{
MR_string_const("--target c\t\t\t(grades: none, reg, jump, fast,", 44),
MR_TAG_COMMON(1,6,498)
},
{
MR_string_const("\tback-ends.", 11),
MR_tbmkword(0, 0)
},
{
MR_string_const("\tThis option is not yet supported for the \140--high-level-code\'", 61),
MR_TAG_COMMON(1,6,500)
},
{
MR_string_const("\tfor details.", 13),
MR_TAG_COMMON(1,6,501)
},
{
MR_string_const("\tSee the Debugging chapter of the Mercury User\'s Guide", 54),
MR_TAG_COMMON(1,6,502)
},
{
MR_string_const("\tdebugger.", 10),
MR_TAG_COMMON(1,6,503)
},
{
MR_string_const("\tThis allows subterm dependency tracking in the declarative", 59),
MR_TAG_COMMON(1,6,504)
},
{
MR_string_const("\tEnable full support for declarative debugging.", 47),
MR_TAG_COMMON(1,6,505)
},
{
MR_string_const("--decl-debug\t\t\t\t(grade modifier: \140.decldebug\')", 46),
MR_TAG_COMMON(1,6,506)
},
{
MR_string_const("\tback-ends.", 11),
MR_TAG_COMMON(1,6,507)
},
{
MR_string_const("\tThis option is not yet supported for the \140--high-level-code\'", 61),
MR_TAG_COMMON(1,6,508)
},
{
MR_string_const("\tfor details.", 13),
MR_TAG_COMMON(1,6,509)
},
{
MR_string_const("\tSee the Debugging chapter of the Mercury User\'s Guide", 54),
MR_TAG_COMMON(1,6,510)
},
{
MR_string_const("\tEnable Mercury-level debugging.", 32),
MR_TAG_COMMON(1,6,511)
},
{
MR_string_const("--debug\t\t\t\t(grade modifier: \140.debug\')", 37),
MR_TAG_COMMON(1,6,512)
},
{
MR_string_const("\t--no-highlevel-code.", 21),
MR_tbmkword(0, 0)
},
{
MR_string_const("\tThis option is supported for the C back-end, with", 50),
MR_TAG_COMMON(1,6,514)
},
{
MR_string_const("\tlisted in the given file.", 26),
MR_TAG_COMMON(1,6,515)
},
{
MR_string_const("\tEnable experimental complexity analysis for the predicates", 59),
MR_TAG_COMMON(1,6,516)
},
{
MR_string_const("--experimental-complexity=<filename>\t\t", 38),
MR_TAG_COMMON(1,6,517)
},
{
MR_string_const("\tAugment each heap cells with its size in cells.", 48),
MR_TAG_COMMON(1,6,518)
},
{
MR_string_const("--record-term-sizes-as-cells\t\t(grade modifier: \140.tsc\')", 54),
MR_TAG_COMMON(1,6,519)
},
{
MR_string_const("\tAugment each heap cells with its size in words.", 48),
MR_TAG_COMMON(1,6,520)
},
{
MR_string_const("--record-term-sizes-as-words\t\t(grade modifier: \140.tsw\')", 54),
MR_TAG_COMMON(1,6,521)
},
{
MR_string_const("\timplicit parallelism", 21),
MR_TAG_COMMON(1,6,522)
},
{
MR_string_const("\tSelect deep profiling options suitable for profiler directed", 61),
MR_TAG_COMMON(1,6,523)
},
{
MR_string_const("--profile-for-implicit-parallelism", 34),
MR_TAG_COMMON(1,6,524)
},
{
MR_string_const("\tEnable coverage profiling, implies --deep-profiling (above).", 61),
MR_TAG_COMMON(1,6,525)
},
{
MR_string_const("--coverage-profiling", 20),
MR_TAG_COMMON(1,6,526)
},
{
MR_string_const("\tor Java back-ends.", 19),
MR_TAG_COMMON(1,6,527)
},
{
MR_string_const("\tThis option is not supported for the high-level C, IL", 54),
MR_TAG_COMMON(1,6,528)
},
{
MR_string_const("\tEnable deep profiling.", 23),
MR_TAG_COMMON(1,6,529)
},
{
MR_string_const("--deep-profiling\t\t(grade modifier: \140.profdeep\')", 47),
MR_TAG_COMMON(1,6,530)
},
{
MR_string_const("\tThis option is not supported for the IL or Java back-ends.", 59),
MR_TAG_COMMON(1,6,531)
},
{
MR_string_const("\tEnable memory and call profiling.", 34),
MR_TAG_COMMON(1,6,532)
},
{
MR_string_const("--memory-profiling\t\t(grade modifier: \140.memprof\')", 48),
MR_TAG_COMMON(1,6,533)
},
{
MR_string_const("\tThis option is not supported for the IL or Java back-ends.", 59),
MR_TAG_COMMON(1,6,534)
},
{
MR_string_const("\t\140<module>.prof\'.", 17),
MR_TAG_COMMON(1,6,535)
},
{
MR_string_const("\tinformation (the static call graph) to the file", 48),
MR_TAG_COMMON(1,6,536)
},
{
MR_string_const("\tgenerated code, and also output some profiling", 47),
MR_TAG_COMMON(1,6,537)
},
{
MR_string_const("\tEnable time and call profiling.  Insert profiling hooks in the", 63),
MR_TAG_COMMON(1,6,538)
},
{
MR_string_const("\t\t\t\t(grade modifier: \140.prof\')", 29),
MR_TAG_COMMON(1,6,539)
},
{
MR_string_const("-p, --profiling, --time-profiling", 33),
MR_TAG_COMMON(1,6,540)
},
{
MR_string_const("\tprecision floats are used by default.", 38),
MR_tbmkword(0, 0)
},
{
MR_string_const("\tfloating point values don\'t need to be boxed.  Double", 54),
MR_TAG_COMMON(1,6,542)
},
{
MR_string_const("\tUse single precision floats so that, on 32-bit machines,", 57),
MR_TAG_COMMON(1,6,543)
},
{
MR_string_const("--single-prec-float\t\t(grade modifier: \140.spf\')", 45),
MR_TAG_COMMON(1,6,544)
},
{
MR_string_const("\tattribute.  The default is no.", 31),
MR_TAG_COMMON(1,6,545)
},
{
MR_string_const("\tprocedure is treated as though it has a \140not_thread_safe\'", 58),
MR_TAG_COMMON(1,6,546)
},
{
MR_string_const("\t\140thread_safe\' attribute.  \140no\' means that the foreign", 54),
MR_TAG_COMMON(1,6,547)
},
{
MR_string_const("\t\140maybe_thread_safe\' option is treated as though it has a", 57),
MR_TAG_COMMON(1,6,548)
},
{
MR_string_const("\tattribute.  \140yes\' means that a foreign procedure with the", 58),
MR_TAG_COMMON(1,6,549)
},
{
MR_string_const("\tSpecify how to treat the \140maybe_thread_safe\' foreign code", 58),
MR_TAG_COMMON(1,6,550)
},
{
MR_string_const("--maybe-thread-safe {yes, no}", 29),
MR_TAG_COMMON(1,6,551)
},
{
MR_string_const("\tat the cost of increased execution time.", 41),
MR_TAG_COMMON(1,6,552)
},
{
MR_string_const("\tof small segments.  This can help to avoid trail exhaustion", 60),
MR_TAG_COMMON(1,6,553)
},
{
MR_string_const("\tAs above, but use a dynamically sized trail that is composed", 61),
MR_TAG_COMMON(1,6,554)
},
{
MR_string_const("--trail-segments\t\t\t(grade modifier: \140.trseg\')", 45),
MR_TAG_COMMON(1,6,555)
},
{
MR_string_const("\tThis option is not yet supported for the IL or Java back-ends.", 63),
MR_TAG_COMMON(1,6,556)
},
{
MR_string_const("\tor for backtrackable destructive update.", 41),
MR_TAG_COMMON(1,6,557)
},
{
MR_string_const("\tThis is necessary for interfacing with constraint solvers,", 59),
MR_TAG_COMMON(1,6,558)
},
{
MR_string_const("\tEnable use of a trail.", 23),
MR_TAG_COMMON(1,6,559)
},
{
MR_string_const("--use-trail\t\t\t(grade modifier: \140.tr\')", 37),
MR_TAG_COMMON(1,6,560)
},
{
MR_string_const("\tIL or Java implementation.", 27),
MR_TAG_COMMON(1,6,561)
},
{
MR_string_const("\twhich always use the garbage collector of the underlying", 57),
MR_TAG_COMMON(1,6,562)
},
{
MR_string_const("\tThis is the case for the IL and Java back-ends,", 48),
MR_TAG_COMMON(1,6,563)
},
{
MR_string_const("\t\140automatic\' means the target language provides it.", 51),
MR_TAG_COMMON(1,6,564)
},
{
MR_string_const("\tRavenbrook Limited\'s MPS (Memory Pool System) kit.", 51),
MR_TAG_COMMON(1,6,565)
},
{
MR_string_const("\t\140mps\' is a different conservative collector, based on", 54),
MR_TAG_COMMON(1,6,566)
},
{
MR_string_const("\tit requires \140--high-level-code\'.", 33),
MR_TAG_COMMON(1,6,567)
},
{
MR_string_const("\t\140accurate\' is our own type-accurate copying GC;", 48),
MR_TAG_COMMON(1,6,568)
},
{
MR_string_const("\t\140hgc\' is our own conservative collector;", 41),
MR_TAG_COMMON(1,6,569)
},
{
MR_string_const("\t\140boehm\' is Hans Boehm et al\'s conservative collector.", 54),
MR_TAG_COMMON(1,6,570)
},
{
MR_string_const("\t(default: boehm).", 18),
MR_TAG_COMMON(1,6,571)
},
{
MR_string_const("\tSpecify which method of garbage collection to use", 50),
MR_TAG_COMMON(1,6,572)
},
{
MR_string_const("\t\t\t\tother grades use \140--gc none\'.)", 34),
MR_TAG_COMMON(1,6,573)
},
{
MR_string_const("\t\t\t\t\140.mps\' grades use \140--gc mps\',", 33),
MR_TAG_COMMON(1,6,574)
},
{
MR_string_const("\t\t\t\t\140.hgc\' grades use \140--gc hgc\',", 33),
MR_TAG_COMMON(1,6,575)
},
{
MR_string_const("\t\t\t\t\140.gc\' grades use \140--gc boehm\',", 34),
MR_TAG_COMMON(1,6,576)
},
{
MR_string_const("\t\t\t\t\t\140--gc automatic\',", 22),
MR_TAG_COMMON(1,6,577)
},
{
MR_string_const("\t\t\t\t(\140java\', \140il\' and \140erlang\' grades use", 41),
MR_TAG_COMMON(1,6,578)
},
{
MR_string_const("--garbage-collection {none, boehm, hgc, mps, accurate, automatic}", 65),
MR_TAG_COMMON(1,6,579)
},
{
MR_string_const("--gc {none, boehm, hgc, mps, accurate, automatic}", 49),
MR_TAG_COMMON(1,6,580)
},
{
MR_string_const("\tenabled.", 9),
MR_tbmkword(0, 0)
},
{
MR_string_const("\tThis option is ignored if the \140--high-level-code\' option is", 60),
MR_TAG_COMMON(1,6,582)
},
{
MR_string_const("\texhaustion at the cost of increased execution time.", 52),
MR_TAG_COMMON(1,6,583)
},
{
MR_string_const("\tcomposed of small segments.  This can help to avoid stack", 58),
MR_TAG_COMMON(1,6,584)
},
{
MR_string_const("\tSpecify whether to use dynamically sized stacks that are", 57),
MR_TAG_COMMON(1,6,585)
},
{
MR_string_const("--stack-segments\t\t(grade modifier: \140.stseg\')", 44),
MR_TAG_COMMON(1,6,586)
},
{
MR_string_const("\tsystems running Unix.  On other systems it has no effect.", 58),
MR_TAG_COMMON(1,6,587)
},
{
MR_string_const("\tThis is necessary when using shared libraries on Intel x86", 59),
MR_TAG_COMMON(1,6,588)
},
{
MR_string_const("\twith position-independent code (gcc\'s \140-fpic\' option).", 55),
MR_TAG_COMMON(1,6,589)
},
{
MR_string_const("\tSelect a register usage convention that is compatible,", 55),
MR_TAG_COMMON(1,6,590)
},
{
MR_string_const("[For Unix with intel x86 architecture only]", 43),
MR_TAG_COMMON(1,6,591)
},
{
MR_string_const("--pic-reg\t\t\t(grade modifier: \140.pic_reg\')", 40),
MR_TAG_COMMON(1,6,592)
},
{
MR_string_const("\tenabled.", 9),
MR_TAG_COMMON(1,6,593)
},
{
MR_string_const("\tThis option is ignored if the \140--high-level-code\' option is", 60),
MR_TAG_COMMON(1,6,594)
},
{
MR_string_const("\tasm extensions for inline assembler labels.", 44),
MR_TAG_COMMON(1,6,595)
},
{
MR_string_const("\tSpecify whether or not to use GNU C\'s", 38),
MR_TAG_COMMON(1,6,596)
},
{
MR_string_const("--no-asm-labels\t\t\t(grades: none, reg, jump, fast)", 49),
MR_TAG_COMMON(1,6,597)
},
{
MR_string_const("--asm-labels\t\t\t(grades: asm_jump, asm_fast)", 43),
MR_TAG_COMMON(1,6,598)
},
{
MR_string_const("\tenabled.", 9),
MR_TAG_COMMON(1,6,599)
},
{
MR_string_const("\tThis option is ignored if the \140--high-level-code\' option is", 60),
MR_TAG_COMMON(1,6,600)
},
{
MR_string_const("\t\"labels as values\" extension.", 30),
MR_TAG_COMMON(1,6,601)
},
{
MR_string_const("\tSpecify whether or not to use GNU C\'s", 38),
MR_TAG_COMMON(1,6,602)
},
{
MR_string_const("--no-gcc-non-local-gotos\t(grades: none, reg)", 44),
MR_TAG_COMMON(1,6,603)
},
{
MR_string_const("--gcc-non-local-gotos\t\t(grades: jump, fast, asm_jump, asm_fast)", 63),
MR_TAG_COMMON(1,6,604)
},
{
MR_string_const("\tenabled.", 9),
MR_TAG_COMMON(1,6,605)
},
{
MR_string_const("\tThis option is ignored if the \140--high-level-code\' option is", 60),
MR_TAG_COMMON(1,6,606)
},
{
MR_string_const("\tglobal register variables extension.", 37),
MR_TAG_COMMON(1,6,607)
},
{
MR_string_const("\tSpecify whether or not to use GNU C\'s", 38),
MR_TAG_COMMON(1,6,608)
},
{
MR_string_const("--no-gcc-global-registers\t(grades: none, jump, asm_jump)", 56),
MR_TAG_COMMON(1,6,609)
},
{
MR_string_const("--gcc-global-registers\t\t(grades: reg, fast, asm_fast)", 53),
MR_TAG_COMMON(1,6,610)
},
{
MR_string_const("\toutput arguments.", 18),
MR_tbmkword(0, 0)
},
{
MR_string_const("\tUse pass-by-reference for exported procedures with multiple", 60),
MR_TAG_COMMON(1,6,612)
},
{
MR_string_const("--java-export-ref-out", 21),
MR_TAG_COMMON(1,6,613)
},
{
MR_string_const("\tAn abbreviation for \140--high-level-code --high-level-data\'.", 59),
MR_TAG_COMMON(1,6,614)
},
{
MR_string_const("--high-level\t\t\t(grades: hl, il, java)", 37),
MR_TAG_COMMON(1,6,615)
},
{
MR_string_const("\tUse an alternative higher-level data representation.", 53),
MR_TAG_COMMON(1,6,616)
},
{
MR_string_const("--high-level-data\t\t\t(grades: hl, il, java)", 42),
MR_TAG_COMMON(1,6,617)
},
{
MR_string_const("\toriginal back-end.", 19),
MR_TAG_COMMON(1,6,618)
},
{
MR_string_const("\trather than the very low-level code that is generated by our", 61),
MR_TAG_COMMON(1,6,619)
},
{
MR_string_const("\tUse an alternative back-end that generates high-level code", 59),
MR_TAG_COMMON(1,6,620)
},
{
MR_string_const("-H, --high-level-code\t\t\t(grades: hl, hlc, il, java)", 51),
MR_TAG_COMMON(1,6,621)
},
{
MR_string_const("\t(constants) of discriminated union types.", 42),
MR_tbmkword(0, 0)
},
{
MR_string_const("\tfor representing nullary constructors", 38),
MR_TAG_COMMON(1,6,623)
},
{
MR_string_const("\tAllocate up to <n> global objects per type,", 44),
MR_TAG_COMMON(1,6,624)
},
{
MR_string_const("--num-reserved-objects <n>    (This option is not for general use.)", 67),
MR_TAG_COMMON(1,6,625)
},
{
MR_string_const("\t(constants) of discriminated union types.", 42),
MR_TAG_COMMON(1,6,626)
},
{
MR_string_const("\taddresses that can be used to represent nullary constructors", 61),
MR_TAG_COMMON(1,6,627)
},
{
MR_string_const("\tTreat the integer values from 0 up to <n> - 1 as reserved", 58),
MR_TAG_COMMON(1,6,628)
},
{
MR_string_const("--num-reserved-addresses <n>  (This option is not for general use.)", 67),
MR_TAG_COMMON(1,6,629)
},
{
MR_string_const("\tUse <n> tag bits.", 18),
MR_TAG_COMMON(1,6,630)
},
{
MR_string_const("--num-tag-bits <n>            (This option is not for general use.)", 67),
MR_TAG_COMMON(1,6,631)
},
{
MR_string_const("\teach word as tag bits (default: low).", 38),
MR_TAG_COMMON(1,6,632)
},
{
MR_string_const("\tSpecify whether to use the low bits or the high bits of ", 57),
MR_TAG_COMMON(1,6,633)
},
{
MR_string_const("--tags {none, low, high}      (This option is not for general use.)", 67),
MR_TAG_COMMON(1,6,634)
},
{
MR_string_const("\t\140-DNO_TYPE_LAYOUT\').", 21),
MR_tbmkword(0, 0)
},
{
MR_string_const("\tto them. (The C code also needs to be compiled with", 52),
MR_TAG_COMMON(1,6,636)
},
{
MR_string_const("\tDon\'t output type_ctor_layout structures or references", 55),
MR_TAG_COMMON(1,6,637)
},
{
MR_string_const("(This option is not for general use.)", 37),
MR_TAG_COMMON(1,6,638)
},
{
MR_string_const("--no-type-layout", 16),
MR_TAG_COMMON(1,6,639)
},
{
MR_string_const("\tminimal model tabling.", 23),
MR_TAG_COMMON(1,6,640)
},
{
MR_string_const("\tEnables extra data structures that assist in debugging", 55),
MR_TAG_COMMON(1,6,641)
},
{
MR_string_const("(This option is not for general use.)", 37),
MR_TAG_COMMON(1,6,642)
},
{
MR_string_const("--minimal-model-debug", 21),
MR_TAG_COMMON(1,6,643)
},
{
MR_string_const("\tEnable the use of an experimental form of minimal model tabling.", 65),
MR_TAG_COMMON(1,6,644)
},
{
MR_string_const("(This option is not for general use.)", 37),
MR_TAG_COMMON(1,6,645)
},
{
MR_string_const("--use-minimal-model-own-stacks", 30),
MR_TAG_COMMON(1,6,646)
},
{
MR_string_const("\tEnable the use of the standard form of minimal model tabling.", 62),
MR_TAG_COMMON(1,6,647)
},
{
MR_string_const("(This option is not for general use.)", 37),
MR_TAG_COMMON(1,6,648)
},
{
MR_string_const("--use-minimal-model-stack-copy", 30),
MR_TAG_COMMON(1,6,649)
},
{
MR_string_const("\t(valid range: 1 to 100, default: 90).", 38),
MR_tbmkword(0, 0)
},
{
MR_string_const("\tshould be allowed to get.  Given as an integer percentage", 58),
MR_TAG_COMMON(1,6,651)
},
{
MR_string_const("\tSpecify how full the \140:- pragma fact_table\' hash tables", 56),
MR_TAG_COMMON(1,6,652)
},
{
MR_string_const("--fact-table-hash-percent-full <percentage>", 43),
MR_TAG_COMMON(1,6,653)
},
{
MR_string_const("\t\140:- pragma fact_table\' data array (default: 1024).", 51),
MR_TAG_COMMON(1,6,654)
},
{
MR_string_const("\tSpecify the maximum number of elements in a single", 51),
MR_TAG_COMMON(1,6,655)
},
{
MR_string_const("--fact-table-max-array-size <n>", 31),
MR_TAG_COMMON(1,6,656)
},
{
MR_string_const("\timposed by some C compilers.", 29),
MR_TAG_COMMON(1,6,657)
},
{
MR_string_const("\tThis option can be useful to avoid exceeding fixed limits", 58),
MR_TAG_COMMON(1,6,658)
},
{
MR_string_const("\tThe special value 0 indicates the table size is unlimited.", 59),
MR_TAG_COMMON(1,6,659)
},
{
MR_string_const("\tThe maximum number of entries a jump table can have.", 53),
MR_TAG_COMMON(1,6,660)
},
{
MR_string_const("--max-jump-table-size=<n>", 25),
MR_TAG_COMMON(1,6,661)
},
{
MR_string_const("\tCombines the effect of the two options above.", 46),
MR_TAG_COMMON(1,6,662)
},
{
MR_string_const("--no-reclaim-heap-on-failure", 28),
MR_TAG_COMMON(1,6,663)
},
{
MR_string_const("\tDon\'t reclaim heap on backtracking in semidet code.", 52),
MR_TAG_COMMON(1,6,664)
},
{
MR_string_const("--no-reclaim-heap-on-semidet-failure", 36),
MR_TAG_COMMON(1,6,665)
},
{
MR_string_const("\tDon\'t reclaim heap on backtracking in nondet code.", 51),
MR_TAG_COMMON(1,6,666)
},
{
MR_string_const("--no-reclaim-heap-on-nondet-failure", 35),
MR_TAG_COMMON(1,6,667)
},
{
MR_string_const("\tbefore going on the next phase on all predicates.", 50),
MR_TAG_COMMON(1,6,668)
},
{
MR_string_const("\tto complete each phase of code generation on all predicates", 60),
MR_TAG_COMMON(1,6,669)
},
{
MR_string_const("\tThis option tells the compiler", 31),
MR_TAG_COMMON(1,6,670)
},
{
MR_string_const("\tbefore going on to the next predicate.", 39),
MR_TAG_COMMON(1,6,671)
},
{
MR_string_const("\tThe default \140--trad-passes\' completely processes each predicate", 64),
MR_TAG_COMMON(1,6,672)
},
{
MR_string_const("--no-trad-passes", 16),
MR_TAG_COMMON(1,6,673)
},
{
MR_string_const("\t\140<module>.pic_s\' rather than to \140<module>.s\'.", 46),
MR_TAG_COMMON(1,6,674)
},
{
MR_string_const("\tThe generated assembler code will be written to", 48),
MR_TAG_COMMON(1,6,675)
},
{
MR_string_const("\tThis option is only used by the \140--target asm\' back-end.", 57),
MR_TAG_COMMON(1,6,676)
},
{
MR_string_const("\tGenerate position-independent code.", 36),
MR_TAG_COMMON(1,6,677)
},
{
MR_string_const("--pic", 5),
MR_TAG_COMMON(1,6,678)
},
{
MR_string_const("\treal machine registers.", 24),
MR_tbmkword(0, 0)
},
{
MR_string_const("\tAssume that <n> float temporaries will fit into", 48),
MR_TAG_COMMON(1,6,680)
},
{
MR_string_const("--num-real-f-temps <n> \t(This option is not for general use.)", 61),
MR_TAG_COMMON(1,6,681)
},
{
MR_string_const("\treal machine registers.", 24),
MR_TAG_COMMON(1,6,682)
},
{
MR_string_const("\tAssume that <n> non-float temporaries will fit into", 52),
MR_TAG_COMMON(1,6,683)
},
{
MR_string_const("--num-real-r-temps <n> \t(This option is not for general use.)", 61),
MR_TAG_COMMON(1,6,684)
},
{
MR_string_const("\tregisters.", 11),
MR_TAG_COMMON(1,6,685)
},
{
MR_string_const("\tAssume registers f1 up to f<n> are real floating point", 55),
MR_TAG_COMMON(1,6,686)
},
{
MR_string_const("--num-real-f-regs <n>  \t(This option is not for general use.)", 61),
MR_TAG_COMMON(1,6,687)
},
{
MR_string_const("\tregisters.", 11),
MR_TAG_COMMON(1,6,688)
},
{
MR_string_const("\tAssume registers r1 up to r<n> are real general purpose", 56),
MR_TAG_COMMON(1,6,689)
},
{
MR_string_const("--num-real-r-regs <n>  \t(This option is not for general use.)", 61),
MR_TAG_COMMON(1,6,690)
},
{
MR_string_const("\tAssume that branch instructions have a delay slot.", 51),
MR_TAG_COMMON(1,6,691)
},
{
MR_string_const("--branch-delay-slot    \t(This option is not for general use.)", 61),
MR_TAG_COMMON(1,6,692)
},
{
MR_string_const("\t(default: 0).", 14),
MR_tbmkword(0, 0)
},
{
MR_string_const("\tsuboptimal modules with \140--intermodule-analysis\'", 49),
MR_TAG_COMMON(1,6,694)
},
{
MR_string_const("\tThe maximum number of times to repeat analyses of", 50),
MR_TAG_COMMON(1,6,695)
},
{
MR_string_const("--analysis-repeat <n>", 21),
MR_TAG_COMMON(1,6,696)
},
{
MR_string_const("\tThis option is not yet fully implemented.", 42),
MR_TAG_COMMON(1,6,697)
},
{
MR_string_const("\tunused argument elimination across module boundaries.", 54),
MR_TAG_COMMON(1,6,698)
},
{
MR_string_const("\tPerform analyses such as termination analysis and", 50),
MR_TAG_COMMON(1,6,699)
},
{
MR_string_const("--intermodule-analysis", 22),
MR_TAG_COMMON(1,6,700)
},
{
MR_string_const("\tnot build any others.", 22),
MR_TAG_COMMON(1,6,701)
},
{
MR_string_const("\te.g. those for the standard library, but do", 44),
MR_TAG_COMMON(1,6,702)
},
{
MR_string_const("\t\140.trans_opt\' files which are already built,", 44),
MR_TAG_COMMON(1,6,703)
},
{
MR_string_const("\tPerform inter-module optimization using any", 44),
MR_TAG_COMMON(1,6,704)
},
{
MR_string_const("--use-trans-opt-files", 21),
MR_TAG_COMMON(1,6,705)
},
{
MR_string_const("\tnot build any others.", 22),
MR_TAG_COMMON(1,6,706)
},
{
MR_string_const("\te.g. those for the standard library, but do", 44),
MR_TAG_COMMON(1,6,707)
},
{
MR_string_const("\t\140.opt\' files which are already built,", 38),
MR_TAG_COMMON(1,6,708)
},
{
MR_string_const("\tPerform inter-module optimization using any", 44),
MR_TAG_COMMON(1,6,709)
},
{
MR_string_const("--use-opt-files", 15),
MR_TAG_COMMON(1,6,710)
},
{
MR_string_const("\tclosure of the imports.", 24),
MR_TAG_COMMON(1,6,711)
},
{
MR_string_const("\tfor directly imported modules, not the transitive", 50),
MR_TAG_COMMON(1,6,712)
},
{
MR_string_const("\tOnly read the inter-module optimization information", 52),
MR_TAG_COMMON(1,6,713)
},
{
MR_string_const("--no-read-opt-files-transitively", 32),
MR_TAG_COMMON(1,6,714)
},
{
MR_string_const("\twork with \140mmc --make\'.", 24),
MR_TAG_COMMON(1,6,715)
},
{
MR_string_const("\tNote that \140--transitive-intermodule-optimization\' does not", 59),
MR_TAG_COMMON(1,6,716)
},
{
MR_string_const("\tThis data is imported from \140<module>.trans_opt\' files.", 55),
MR_TAG_COMMON(1,6,717)
},
{
MR_string_const("\tImport the transitive intermodule optimization data.", 53),
MR_TAG_COMMON(1,6,718)
},
{
MR_string_const("--transitive-intermodule-optimization", 37),
MR_TAG_COMMON(1,6,719)
},
{
MR_string_const("--trans-intermod-opt", 20),
MR_TAG_COMMON(1,6,720)
},
{
MR_string_const("\tThis option must be set throughout the compilation process.", 60),
MR_TAG_COMMON(1,6,721)
},
{
MR_string_const("\tthe code for predicates imported from other modules.", 53),
MR_TAG_COMMON(1,6,722)
},
{
MR_string_const("\tPerform inlining and higher-order specialization of", 52),
MR_TAG_COMMON(1,6,723)
},
{
MR_string_const("--intermodule-optimization", 26),
MR_TAG_COMMON(1,6,724)
},
{
MR_string_const("--intermod-opt", 14),
MR_TAG_COMMON(1,6,725)
},
{
MR_string_const("\tincrease code size.", 20),
MR_TAG_COMMON(1,6,726)
},
{
MR_string_const("\tand turn off optimizations that significantly", 46),
MR_TAG_COMMON(1,6,727)
},
{
MR_string_const("\tTurn on optimizations that reduce code size", 44),
MR_TAG_COMMON(1,6,728)
},
{
MR_string_const("--opt-space, --optimize-space", 29),
MR_TAG_COMMON(1,6,729)
},
{
MR_string_const("\twhile optimization level 6 means full optimization.", 52),
MR_TAG_COMMON(1,6,730)
},
{
MR_string_const("\tOptimization level -1 means no optimization", 44),
MR_TAG_COMMON(1,6,731)
},
{
MR_string_const("\tSet optimization level to <n>.", 31),
MR_TAG_COMMON(1,6,732)
},
{
MR_string_const("-O <n>, --opt-level <n>, --optimization-level <n>", 49),
MR_TAG_COMMON(1,6,733)
},
{
MR_string_const("\t--feedback file option.", 24),
MR_tbmkword(0, 0)
},
{
MR_string_const("\tThe profiling feedback file can be specified using the", 55),
MR_TAG_COMMON(1,6,735)
},
{
MR_string_const("\tmdprof_feedback.", 17),
MR_TAG_COMMON(1,6,736)
},
{
MR_string_const("\t(implicit parallelism) using information generated by", 54),
MR_TAG_COMMON(1,6,737)
},
{
MR_string_const("\tIntroduce parallel conjunctions where it could be worthwhile", 61),
MR_TAG_COMMON(1,6,738)
},
{
MR_string_const("--implicit-parallelism", 22),
MR_TAG_COMMON(1,6,739)
},
{
MR_string_const("\tspecified distance value.", 26),
MR_TAG_COMMON(1,6,740)
},
{
MR_string_const("\tControl the granularity of parallel execution using the", 56),
MR_TAG_COMMON(1,6,741)
},
{
MR_string_const("--distance-granularity <distance>", 33),
MR_TAG_COMMON(1,6,742)
},
{
MR_string_const("\tthe --control-granularity option.", 34),
MR_TAG_COMMON(1,6,743)
},
{
MR_string_const("\tSpecify the number of CPUs of the target machine, for use by", 61),
MR_TAG_COMMON(1,6,744)
},
{
MR_string_const("--parallelism-target <n>", 24),
MR_TAG_COMMON(1,6,745)
},
{
MR_string_const("\thandle, which is specified using --parallelism-target.", 55),
MR_TAG_COMMON(1,6,746)
},
{
MR_string_const("\tDon\'t try to generate more parallelism than the machine can", 60),
MR_TAG_COMMON(1,6,747)
},
{
MR_string_const("--control-granularity", 21),
MR_TAG_COMMON(1,6,748)
},
{
MR_string_const("\tof minimal model tabling.", 26),
MR_TAG_COMMON(1,6,749)
},
{
MR_string_const("\tThis information is used to reduce the overhead", 48),
MR_TAG_COMMON(1,6,750)
},
{
MR_string_const("\tthat are evaluated using minimal model tabling.", 48),
MR_TAG_COMMON(1,6,751)
},
{
MR_string_const("\tIdentify those goals that do not call procedures", 49),
MR_TAG_COMMON(1,6,752)
},
{
MR_string_const("--analyse-mm-tabling", 20),
MR_TAG_COMMON(1,6,753)
},
{
MR_string_const("\tof trailing.", 13),
MR_TAG_COMMON(1,6,754)
},
{
MR_string_const("\tThis information is used to reduce the overhead", 48),
MR_TAG_COMMON(1,6,755)
},
{
MR_string_const("\tprocedures that will not modify the trail.", 43),
MR_TAG_COMMON(1,6,756)
},
{
MR_string_const("\tEnable trail usage analysis.  Identify those", 45),
MR_TAG_COMMON(1,6,757)
},
{
MR_string_const("--analyse-trail-usage", 21),
MR_TAG_COMMON(1,6,758)
},
{
MR_string_const("\tSome optimizations can make use of this information.", 53),
MR_TAG_COMMON(1,6,759)
},
{
MR_string_const("\tprocedures that will not throw an exception.", 45),
MR_TAG_COMMON(1,6,760)
},
{
MR_string_const("\tEnable exception analysis.  Identify those", 43),
MR_TAG_COMMON(1,6,761)
},
{
MR_string_const("--analyse-exceptions", 20),
MR_TAG_COMMON(1,6,762)
},
{
MR_string_const("\tA value of -1 specifies no limit. The default is 15.", 53),
MR_TAG_COMMON(1,6,763)
},
{
MR_string_const("\tto be optimized by deforestation.", 34),
MR_TAG_COMMON(1,6,764)
},
{
MR_string_const("\tSpecify a rough limit on the size of a goal", 44),
MR_TAG_COMMON(1,6,765)
},
{
MR_string_const("--deforestation-size-threshold <threshold>", 42),
MR_TAG_COMMON(1,6,766)
},
{
MR_string_const("\tA value of -1 specifies no limit. The default is 200.", 54),
MR_TAG_COMMON(1,6,767)
},
{
MR_string_const("\tin a procedure created by deforestation.", 41),
MR_TAG_COMMON(1,6,768)
},
{
MR_string_const("\tSpecify a rough limit on the number of variables", 49),
MR_TAG_COMMON(1,6,769)
},
{
MR_string_const("--deforestation-vars-threshold <threshold>", 42),
MR_TAG_COMMON(1,6,770)
},
{
MR_string_const("\tA value of -1 specifies no depth limit. The default is 4.", 58),
MR_TAG_COMMON(1,6,771)
},
{
MR_string_const("\tdeforestation algorithm.", 25),
MR_TAG_COMMON(1,6,772)
},
{
MR_string_const("\tSpecify a depth limit to prevent infinite loops in the", 55),
MR_TAG_COMMON(1,6,773)
},
{
MR_string_const("--deforestation-depth-limit <limit>", 35),
MR_TAG_COMMON(1,6,774)
},
{
MR_string_const("\tover data structures within a conjunction.", 43),
MR_TAG_COMMON(1,6,775)
},
{
MR_string_const("\tintermediate data structures and to avoid repeated traversals", 62),
MR_TAG_COMMON(1,6,776)
},
{
MR_string_const("\ttransformation whose aim is to avoid the construction of", 57),
MR_TAG_COMMON(1,6,777)
},
{
MR_string_const("\tEnable deforestation. Deforestation is a program", 49),
MR_TAG_COMMON(1,6,778)
},
{
MR_string_const("--deforestation", 15),
MR_TAG_COMMON(1,6,779)
},
{
MR_string_const("\tconstructor application.", 25),
MR_TAG_COMMON(1,6,780)
},
{
MR_string_const("\tEnable the optimization of \"last\" calls that are followed by", 61),
MR_TAG_COMMON(1,6,781)
},
{
MR_string_const("--optimize-constructor-last-call", 32),
MR_TAG_COMMON(1,6,782)
},
{
MR_string_const("\tprocedures, so as to make them tail recursive.", 47),
MR_TAG_COMMON(1,6,783)
},
{
MR_string_const("\tAttempt to introduce accumulating variables into", 49),
MR_TAG_COMMON(1,6,784)
},
{
MR_string_const("--introduce-accumulators", 24),
MR_TAG_COMMON(1,6,785)
},
{
MR_string_const("\tsize of the code.", 18),
MR_TAG_COMMON(1,6,786)
},
{
MR_string_const("\tonly goal deletion; a value of one prevents any increase in the", 64),
MR_TAG_COMMON(1,6,787)
},
{
MR_string_const("\tnot needed. A value of zero forbids goal movement and allows", 61),
MR_TAG_COMMON(1,6,788)
},
{
MR_string_const("\twhen removing it from computation paths on which its outputs are", 65),
MR_TAG_COMMON(1,6,789)
},
{
MR_string_const("\tGives the maximum number of places to which a goal may be copied", 65),
MR_TAG_COMMON(1,6,790)
},
{
MR_string_const("--unneeded-code-copy-limit", 26),
MR_TAG_COMMON(1,6,791)
},
{
MR_string_const("\tor movement of the goal.", 25),
MR_TAG_COMMON(1,6,792)
},
{
MR_string_const("\tnot needed, provided the semantics options allow the deletion", 62),
MR_TAG_COMMON(1,6,793)
},
{
MR_string_const("\tRemove goals from computation paths where their outputs are", 60),
MR_TAG_COMMON(1,6,794)
},
{
MR_string_const("--unneeded-code", 15),
MR_TAG_COMMON(1,6,795)
},
{
MR_string_const("\t\140--type-specialization\'.", 25),
MR_TAG_COMMON(1,6,796)
},
{
MR_string_const("\tbe specialized by \140--optimize-higher-order\' and", 48),
MR_TAG_COMMON(1,6,797)
},
{
MR_string_const("\tSet the maximum size of higher-order arguments to", 50),
MR_TAG_COMMON(1,6,798)
},
{
MR_string_const("--higher-order-arg-limit", 24),
MR_TAG_COMMON(1,6,799)
},
{
MR_string_const("\tand branched goals.", 20),
MR_TAG_COMMON(1,6,800)
},
{
MR_string_const("\tGoal size is measured as the number of calls, unifications", 59),
MR_TAG_COMMON(1,6,801)
},
{
MR_string_const("\t\140--optimize-higher-order\' and \140--type-specialization\'.", 55),
MR_TAG_COMMON(1,6,802)
},
{
MR_string_const("\tSet the maximum goal size of specialized versions created by", 61),
MR_TAG_COMMON(1,6,803)
},
{
MR_string_const("--higher-order-size-limit", 25),
MR_TAG_COMMON(1,6,804)
},
{
MR_string_const("\tthere are \140:- pragma type_spec\' declarations.", 46),
MR_TAG_COMMON(1,6,805)
},
{
MR_string_const("\tEnable specialization of polymorphic predicates for which", 58),
MR_TAG_COMMON(1,6,806)
},
{
MR_string_const("--user-guided-type-specialization", 33),
MR_TAG_COMMON(1,6,807)
},
{
MR_string_const("\tpolymorphic types are known.", 29),
MR_TAG_COMMON(1,6,808)
},
{
MR_string_const("\tEnable specialization of polymorphic predicates where the", 58),
MR_TAG_COMMON(1,6,809)
},
{
MR_string_const("--type-specialization", 21),
MR_TAG_COMMON(1,6,810)
},
{
MR_string_const("\tEnable specialization of higher-order predicates.", 50),
MR_TAG_COMMON(1,6,811)
},
{
MR_string_const("--optimize-higher-order", 23),
MR_TAG_COMMON(1,6,812)
},
{
MR_string_const("\t\140--intermodule-optimization\'.", 30),
MR_TAG_COMMON(1,6,813)
},
{
MR_string_const("\tThis option implies \140--optimize-unused-args\' and", 49),
MR_TAG_COMMON(1,6,814)
},
{
MR_string_const("\tPerform unused argument removal across module boundaries.", 58),
MR_TAG_COMMON(1,6,815)
},
{
MR_string_const("--intermod-unused-args", 22),
MR_TAG_COMMON(1,6,816)
},
{
MR_string_const("\tefficient code for many polymorphic predicates.", 48),
MR_TAG_COMMON(1,6,817)
},
{
MR_string_const("\tThis will cause the compiler to generate more", 46),
MR_TAG_COMMON(1,6,818)
},
{
MR_string_const("\tRemove unused predicate arguments.", 35),
MR_TAG_COMMON(1,6,819)
},
{
MR_string_const("--optimize-unused-args", 22),
MR_TAG_COMMON(1,6,820)
},
{
MR_string_const("\tMinimize the number of variables saved across calls.", 53),
MR_TAG_COMMON(1,6,821)
},
{
MR_string_const("--optimize-saved-vars", 21),
MR_TAG_COMMON(1,6,822)
},
{
MR_string_const("\tprimitive goals that can fail.", 31),
MR_TAG_COMMON(1,6,823)
},
{
MR_string_const("\tReorder goals to move construction unifications after", 54),
MR_TAG_COMMON(1,6,824)
},
{
MR_string_const("--delay-constructs", 18),
MR_TAG_COMMON(1,6,825)
},
{
MR_string_const("\tHoist loop invariants out of loops.", 36),
MR_TAG_COMMON(1,6,826)
},
{
MR_string_const("--loop-invariants", 17),
MR_TAG_COMMON(1,6,827)
},
{
MR_string_const("\twith the same input arguments.", 31),
MR_TAG_COMMON(1,6,828)
},
{
MR_string_const("\tOptimize away multiple calls to a predicate", 44),
MR_TAG_COMMON(1,6,829)
},
{
MR_string_const("--optimize-duplicate-calls", 26),
MR_TAG_COMMON(1,6,830)
},
{
MR_string_const("\talways leave this to be done at runtime.", 41),
MR_TAG_COMMON(1,6,831)
},
{
MR_string_const("\tstring.format and related predicates at compile time;", 54),
MR_TAG_COMMON(1,6,832)
},
{
MR_string_const("\tDo not attempt to interpret the format string in calls to", 58),
MR_TAG_COMMON(1,6,833)
},
{
MR_string_const("--no-optimize-format-calls", 26),
MR_TAG_COMMON(1,6,834)
},
{
MR_string_const("\tRemove excess assignment unifications.", 39),
MR_TAG_COMMON(1,6,835)
},
{
MR_string_const("--excess-assign", 15),
MR_TAG_COMMON(1,6,836)
},
{
MR_string_const("\tDon\'t migrate into the end of branched goals.", 46),
MR_TAG_COMMON(1,6,837)
},
{
MR_string_const("--no-follow-code", 16),
MR_TAG_COMMON(1,6,838)
},
{
MR_string_const("\tMigrate into the start of branched goals.", 42),
MR_TAG_COMMON(1,6,839)
},
{
MR_string_const("--prev-code", 11),
MR_TAG_COMMON(1,6,840)
},
{
MR_string_const("\tSpecialized versions of procedures will not be created.", 56),
MR_TAG_COMMON(1,6,841)
},
{
MR_string_const("\tbut only rearrange goals within each procedure.", 48),
MR_TAG_COMMON(1,6,842)
},
{
MR_string_const("\tEnable the constraint propagation transformation,", 50),
MR_TAG_COMMON(1,6,843)
},
{
MR_string_const("--local-constraint-propagation", 30),
MR_TAG_COMMON(1,6,844)
},
{
MR_string_const("\twhich can fail are executed as early as possible.", 50),
MR_TAG_COMMON(1,6,845)
},
{
MR_string_const("\twhich attempts to transform the code so that goals", 51),
MR_TAG_COMMON(1,6,846)
},
{
MR_string_const("\tEnable the constraint propagation transformation,", 50),
MR_TAG_COMMON(1,6,847)
},
{
MR_string_const("--constraint-propagation", 24),
MR_TAG_COMMON(1,6,848)
},
{
MR_string_const("\tDisable optimization of common term structures.", 48),
MR_TAG_COMMON(1,6,849)
},
{
MR_string_const("--no-common-struct", 18),
MR_TAG_COMMON(1,6,850)
},
{
MR_string_const("\tslow compilation.", 18),
MR_TAG_COMMON(1,6,851)
},
{
MR_string_const("\tcontaining large numbers of variables can cause", 48),
MR_TAG_COMMON(1,6,852)
},
{
MR_string_const("\tcontaining more than <threshold> variables. Procedures", 55),
MR_TAG_COMMON(1,6,853)
},
{
MR_string_const("\tDon\'t inline a call if it would result in a procedure", 54),
MR_TAG_COMMON(1,6,854)
},
{
MR_string_const("--inline-vars-threshold <threshold>", 35),
MR_TAG_COMMON(1,6,855)
},
{
MR_string_const("\tand too high a value may result in reduced performance.", 56),
MR_TAG_COMMON(1,6,856)
},
{
MR_string_const("\tthe \140.opt\' file and compiling to C may cause link errors,", 58),
MR_TAG_COMMON(1,6,857)
},
{
MR_string_const("\t\140.opt\' files. Note that changing this between writing", 54),
MR_TAG_COMMON(1,6,858)
},
{
MR_string_const("\tdetermine which predicates should be included in", 49),
MR_TAG_COMMON(1,6,859)
},
{
MR_string_const("\tSimilar to \140--inline-simple-threshold\', except used to", 55),
MR_TAG_COMMON(1,6,860)
},
{
MR_string_const("--intermod-inline-simple-threshold", 34),
MR_TAG_COMMON(1,6,861)
},
{
MR_string_const("\tgiven threshold.", 17),
MR_TAG_COMMON(1,6,862)
},
{
MR_string_const("\tInline a procedure if its size is less than the", 48),
MR_TAG_COMMON(1,6,863)
},
{
MR_string_const("--inline-simple-threshold <threshold>", 37),
MR_TAG_COMMON(1,6,864)
},
{
MR_string_const("\tit is called is below the given threshold.", 43),
MR_TAG_COMMON(1,6,865)
},
{
MR_string_const("\tless the assumed call cost, multiplied by the number of times", 62),
MR_TAG_COMMON(1,6,866)
},
{
MR_string_const("\tin terms of the number of connectives in its internal form)", 60),
MR_TAG_COMMON(1,6,867)
},
{
MR_string_const("\tInline a procedure if its size (measured roughly", 49),
MR_TAG_COMMON(1,6,868)
},
{
MR_string_const("--inline-compound-threshold <threshold>", 39),
MR_TAG_COMMON(1,6,869)
},
{
MR_string_const("\tmultiplied by the number of times it is called,", 48),
MR_TAG_COMMON(1,6,870)
},
{
MR_string_const("\tUsed only in conjunction with --inline-compound-threshold.", 59),
MR_TAG_COMMON(1,6,871)
},
{
MR_string_const("\tAssume that the cost of a call is the given parameter.", 55),
MR_TAG_COMMON(1,6,872)
},
{
MR_string_const("--inline-call-cost <cost>", 25),
MR_TAG_COMMON(1,6,873)
},
{
MR_string_const("\tDisable the inlining of procedures called only once.", 53),
MR_TAG_COMMON(1,6,874)
},
{
MR_string_const("--no-inline-single-use", 22),
MR_TAG_COMMON(1,6,875)
},
{
MR_string_const("\tbuiltins is not traced.", 24),
MR_TAG_COMMON(1,6,876)
},
{
MR_string_const("\tdebugging, as without this option the execution of", 51),
MR_TAG_COMMON(1,6,877)
},
{
MR_string_const("\tout of line procedures.  This is done by default when,", 55),
MR_TAG_COMMON(1,6,878)
},
{
MR_string_const("\tGenerate builtins (e.g. arithmetic operators) as calls to", 58),
MR_TAG_COMMON(1,6,879)
},
{
MR_string_const("--no-inline-builtins", 20),
MR_TAG_COMMON(1,6,880)
},
{
MR_string_const("\tDisable the inlining of simple procedures.", 43),
MR_TAG_COMMON(1,6,881)
},
{
MR_string_const("--no-inline-simple", 18),
MR_TAG_COMMON(1,6,882)
},
{
MR_string_const("\tDisable all forms of inlining.", 31),
MR_TAG_COMMON(1,6,883)
},
{
MR_string_const("--no-inlining", 13),
MR_TAG_COMMON(1,6,884)
},
{
MR_string_const("\tDon\'t generate simplified code for simple negations.", 53),
MR_tbmkword(0, 0)
},
{
MR_string_const("--no-simple-neg", 15),
MR_TAG_COMMON(1,6,886)
},
{
MR_string_const("\tDisable the middle recursion optimization.", 43),
MR_TAG_COMMON(1,6,887)
},
{
MR_string_const("--no-middle-rec", 15),
MR_TAG_COMMON(1,6,888)
},
{
MR_string_const("\teven when this would otherwise be possible.", 44),
MR_TAG_COMMON(1,6,889)
},
{
MR_string_const("\tDon\'t use the atomic variants of the Boehm gc allocator calls,", 63),
MR_TAG_COMMON(1,6,890)
},
{
MR_string_const("--no-use-atomic-cells", 21),
MR_TAG_COMMON(1,6,891)
},
{
MR_string_const("\tstatic constants.", 18),
MR_TAG_COMMON(1,6,892)
},
{
MR_string_const("\tfor purposes such as debugging will still be created as", 56),
MR_TAG_COMMON(1,6,893)
},
{
MR_string_const("\tNote that auxiliary data structures created by the compiler", 60),
MR_TAG_COMMON(1,6,894)
},
{
MR_string_const("\tat compile time and storing them as static constants.", 54),
MR_TAG_COMMON(1,6,895)
},
{
MR_string_const("\tDisable the optimization of constructing constant ground terms", 63),
MR_TAG_COMMON(1,6,896)
},
{
MR_string_const("--no-static-ground-terms", 24),
MR_TAG_COMMON(1,6,897)
},
{
MR_string_const("\tmust be at least this number (default: 4).", 43),
MR_TAG_COMMON(1,6,898)
},
{
MR_string_const("\tThe number of alternatives in a binary search switch", 53),
MR_TAG_COMMON(1,6,899)
},
{
MR_string_const("--binary-switch-size <n>", 24),
MR_TAG_COMMON(1,6,900)
},
{
MR_string_const("\tmust be at least this number (default: 3).", 43),
MR_TAG_COMMON(1,6,901)
},
{
MR_string_const("\tThe number of alternatives in a try/retry chain switch", 55),
MR_TAG_COMMON(1,6,902)
},
{
MR_string_const("--try-switch-size <n>", 21),
MR_TAG_COMMON(1,6,903)
},
{
MR_string_const("\tmust be at least this number (default: 3).", 43),
MR_TAG_COMMON(1,6,904)
},
{
MR_string_const("\tThe number of alternatives in a tag switch", 43),
MR_TAG_COMMON(1,6,905)
},
{
MR_string_const("--tag-switch-size <n>", 21),
MR_TAG_COMMON(1,6,906)
},
{
MR_string_const("\tmust have at least this many entries (default: 8).", 51),
MR_TAG_COMMON(1,6,907)
},
{
MR_string_const("\tThe hash table generated for a string switch", 45),
MR_TAG_COMMON(1,6,908)
},
{
MR_string_const("--string-switch-size <n>", 24),
MR_TAG_COMMON(1,6,909)
},
{
MR_string_const("\tmust have at least this many entries (default: 4).", 51),
MR_TAG_COMMON(1,6,910)
},
{
MR_string_const("\tThe lookup table generated for an atomic switch", 48),
MR_TAG_COMMON(1,6,911)
},
{
MR_string_const("--lookup-switch-size <n>", 24),
MR_TAG_COMMON(1,6,912)
},
{
MR_string_const("\tmust have at least this many entries (default: 4).", 51),
MR_TAG_COMMON(1,6,913)
},
{
MR_string_const("\tThe jump table generated for an atomic switch", 46),
MR_TAG_COMMON(1,6,914)
},
{
MR_string_const("--dense-switch-size <n>", 23),
MR_TAG_COMMON(1,6,915)
},
{
MR_string_const("\tmust have at least this percentage of full slots (default: 25).", 64),
MR_TAG_COMMON(1,6,916)
},
{
MR_string_const("\tin which all the outputs are constant terms", 44),
MR_TAG_COMMON(1,6,917)
},
{
MR_string_const("\tThe jump table generated for an atomic switch", 46),
MR_TAG_COMMON(1,6,918)
},
{
MR_string_const("--lookup-switch-req-density <percentage>", 40),
MR_TAG_COMMON(1,6,919)
},
{
MR_string_const("\tmust have at least this percentage of full slots (default: 25).", 64),
MR_TAG_COMMON(1,6,920)
},
{
MR_string_const("\tThe jump table generated for an atomic switch", 46),
MR_TAG_COMMON(1,6,921)
},
{
MR_string_const("--dense-switch-req-density <percentage>", 39),
MR_TAG_COMMON(1,6,922)
},
{
MR_string_const("\tdisable string hashing and integer table-lookup indexing.", 58),
MR_TAG_COMMON(1,6,923)
},
{
MR_string_const("\tGenerate switches as a simple if-then-else chains;", 51),
MR_TAG_COMMON(1,6,924)
},
{
MR_string_const("--no-smart-indexing", 19),
MR_TAG_COMMON(1,6,925)
},
{
MR_string_const("\tIterate most optimizations at most <n> times (default: 3).", 59),
MR_tbmkword(0, 0)
},
{
MR_string_const("--optimize-repeat <n>", 21),
MR_TAG_COMMON(1,6,927)
},
{
MR_string_const("\tthe assigned value.", 20),
MR_TAG_COMMON(1,6,928)
},
{
MR_string_const("\tOptimize away assignments to locations that already hold", 57),
MR_TAG_COMMON(1,6,929)
},
{
MR_string_const("--optimize-reassign", 19),
MR_TAG_COMMON(1,6,930)
},
{
MR_string_const("\tDisable branch delay slot optimizations.", 41),
MR_TAG_COMMON(1,6,931)
},
{
MR_string_const("--no-optimize-delay-slot", 24),
MR_TAG_COMMON(1,6,932)
},
{
MR_string_const("\tDisable stack frame optimizations.", 35),
MR_TAG_COMMON(1,6,933)
},
{
MR_string_const("--no-optimize-frames", 20),
MR_TAG_COMMON(1,6,934)
},
{
MR_string_const("\tEnable elimination of duplicate procedures.", 44),
MR_TAG_COMMON(1,6,935)
},
{
MR_string_const("--optimize-proc-dups", 20),
MR_TAG_COMMON(1,6,936)
},
{
MR_string_const("\tEnable elimination of duplicate code within procedures.", 56),
MR_TAG_COMMON(1,6,937)
},
{
MR_string_const("--optimize-dups", 15),
MR_TAG_COMMON(1,6,938)
},
{
MR_string_const("\tDisable elimination of dead labels and code.", 45),
MR_TAG_COMMON(1,6,939)
},
{
MR_string_const("--no-optimize-labels", 20),
MR_TAG_COMMON(1,6,940)
},
{
MR_string_const("\tblocks wherever possible.", 26),
MR_TAG_COMMON(1,6,941)
},
{
MR_string_const("\tDisable the transformation to use local variables in C code", 60),
MR_TAG_COMMON(1,6,942)
},
{
MR_string_const("--no-use-local-vars", 19),
MR_TAG_COMMON(1,6,943)
},
{
MR_string_const("\tminimize stack consumption, possibly at the expense of speed.", 62),
MR_TAG_COMMON(1,6,944)
},
{
MR_string_const("\twhen this requires a runtime check. This option tries to", 57),
MR_TAG_COMMON(1,6,945)
},
{
MR_string_const("\tConvert nondet calls into tail calls whenever possible, even", 61),
MR_TAG_COMMON(1,6,946)
},
{
MR_string_const("--checked-nondet-tailcalls", 26),
MR_TAG_COMMON(1,6,947)
},
{
MR_string_const("\tDisable the optimization of tailcalls.", 39),
MR_TAG_COMMON(1,6,948)
},
{
MR_string_const("--pessimize-tailcalls", 21),
MR_TAG_COMMON(1,6,949)
},
{
MR_string_const("\tDisable elimination of jumps to ordinary code.", 47),
MR_TAG_COMMON(1,6,950)
},
{
MR_string_const("--no-optimize-fulljumps", 23),
MR_TAG_COMMON(1,6,951)
},
{
MR_string_const("\tDisable elimination of jumps to jumps.", 39),
MR_TAG_COMMON(1,6,952)
},
{
MR_string_const("--no-optimize-jumps", 19),
MR_TAG_COMMON(1,6,953)
},
{
MR_string_const("\tDisable local peephole optimizations.", 38),
MR_TAG_COMMON(1,6,954)
},
{
MR_string_const("--no-optimize-peep", 18),
MR_TAG_COMMON(1,6,955)
},
{
MR_string_const("\tEnable dead predicate elimination.", 35),
MR_TAG_COMMON(1,6,956)
},
{
MR_string_const("--optimize-dead-procs", 21),
MR_TAG_COMMON(1,6,957)
},
{
MR_string_const("\tDisable the low-level optimization passes.", 43),
MR_TAG_COMMON(1,6,958)
},
{
MR_string_const("--no-llds-optimize", 18),
MR_TAG_COMMON(1,6,959)
},
{
MR_string_const("\tDisable optimization of common subsequences in layout structures.", 66),
MR_TAG_COMMON(1,6,960)
},
{
MR_string_const("--no-common-layout-data", 23),
MR_TAG_COMMON(1,6,961)
},
{
MR_string_const("\tDisable optimization of common data structures.", 48),
MR_TAG_COMMON(1,6,962)
},
{
MR_string_const("--no-common-data", 16),
MR_TAG_COMMON(1,6,963)
},
{
MR_string_const("\tin the standard library.", 25),
MR_tbmkword(0, 0)
},
{
MR_string_const("\tbut instead insert calls to the versions of these operations", 61),
MR_TAG_COMMON(1,6,965)
},
{
MR_string_const("\tDo not generate trailing operations inline,", 44),
MR_TAG_COMMON(1,6,966)
},
{
MR_string_const("--no-generate-trail-ops-inline", 30),
MR_TAG_COMMON(1,6,967)
},
{
MR_string_const("\tby replacing occurrences of such variables with their values.", 62),
MR_TAG_COMMON(1,6,968)
},
{
MR_string_const("\tEliminate local variables with known values, where possible,", 61),
MR_TAG_COMMON(1,6,969)
},
{
MR_string_const("--eliminate-local-vars", 22),
MR_TAG_COMMON(1,6,970)
},
{
MR_string_const("\tassignment statements into initializers.", 41),
MR_TAG_COMMON(1,6,971)
},
{
MR_string_const("\tassignment statements, rather than converting such", 51),
MR_TAG_COMMON(1,6,972)
},
{
MR_string_const("\tLeave initializations of local variables as", 44),
MR_TAG_COMMON(1,6,973)
},
{
MR_string_const("--no-optimize-initializations", 29),
MR_TAG_COMMON(1,6,974)
},
{
MR_string_const("\tby turning self-tailcalls into loops.", 38),
MR_TAG_COMMON(1,6,975)
},
{
MR_string_const("\tTreat tailcalls as ordinary calls, rather than optimizing", 58),
MR_TAG_COMMON(1,6,976)
},
{
MR_string_const("--no-optimize-tailcalls", 23),
MR_TAG_COMMON(1,6,977)
},
{
MR_string_const("\tDisable the MLDS->MLDS optimization passes.", 44),
MR_TAG_COMMON(1,6,978)
},
{
MR_string_const("--no-mlds-optimize", 18),
MR_TAG_COMMON(1,6,979)
},
{
MR_string_const("\tcould be longer than 255 characters at runtime.", 48),
MR_tbmkword(0, 0)
},
{
MR_string_const("\tswitching on atoms. Do not enable if the string switched on", 60),
MR_TAG_COMMON(1,6,981)
},
{
MR_string_const("\tswitches by converting the string to an atom at runtime and", 60),
MR_TAG_COMMON(1,6,982)
},
{
MR_string_const("\tEnable a workaround for slow HiPE compilation of large string", 62),
MR_TAG_COMMON(1,6,983)
},
{
MR_string_const("--erlang-switch-on-strings-as-atoms", 35),
MR_TAG_COMMON(1,6,984)
},
{
MR_string_const("\textension.", 11),
MR_tbmkword(0, 0)
},
{
MR_string_const("\tparallel grades not using the global register variables", 56),
MR_TAG_COMMON(1,6,986)
},
{
MR_string_const("\tinto local variables. This option only affects low-level", 57),
MR_TAG_COMMON(1,6,987)
},
{
MR_string_const("\tDon\'t copy the thread-local Mercury engine base address", 56),
MR_TAG_COMMON(1,6,988)
},
{
MR_string_const("--no-local-thread-engine-base", 29),
MR_TAG_COMMON(1,6,989)
},
{
MR_string_const("\tseverely stress the C compiler on large modules.", 49),
MR_TAG_COMMON(1,6,990)
},
{
MR_string_const("\twhich produces the most efficient code but tends to", 52),
MR_TAG_COMMON(1,6,991)
},
{
MR_string_const("\tthe Mercury procedures in a single C function,", 47),
MR_TAG_COMMON(1,6,992)
},
{
MR_string_const("\tThis option has the effect of putting the code for all", 55),
MR_TAG_COMMON(1,6,993)
},
{
MR_string_const("--everything-in-one-c-function", 30),
MR_TAG_COMMON(1,6,994)
},
{
MR_string_const("\tslightly more efficient code, but makes compilation slower.", 60),
MR_TAG_COMMON(1,6,995)
},
{
MR_string_const("\tvalue of <n> is one.  Increasing <n> can produce", 49),
MR_TAG_COMMON(1,6,996)
},
{
MR_string_const("\tprocedures in a single C function.  The default", 48),
MR_TAG_COMMON(1,6,997)
},
{
MR_string_const("\tPut the code for up to <n> Mercury", 35),
MR_TAG_COMMON(1,6,998)
},
{
MR_string_const("--procs-per-c-function <n>", 26),
MR_TAG_COMMON(1,6,999)
},
{
MR_string_const("\tUse only gotos, don\'t emit C loop constructs.", 46),
MR_TAG_COMMON(1,6,1000)
},
{
MR_string_const("--no-emit-c-loops", 17),
MR_TAG_COMMON(1,6,1001)
},
{
MR_string_const("\tThis produces slightly bigger but slightly faster code.", 56),
MR_TAG_COMMON(1,6,1002)
},
{
MR_string_const("\tto the fail or redo code in the runtime system.", 48),
MR_TAG_COMMON(1,6,1003)
},
{
MR_string_const("\tEmit the fail or redo macro instead of a branch", 48),
MR_TAG_COMMON(1,6,1004)
},
{
MR_string_const("--use-macro-for-redo-fail", 25),
MR_TAG_COMMON(1,6,1005)
},
{
MR_string_const("\tlist of flags passed to the Erlang compiler.", 45),
MR_tbmkword(0, 0)
},
{
MR_string_const("\tDo not add \140+nowarn_unused_vars +nowarn_unused_function\' to the", 64),
MR_TAG_COMMON(1,6,1007)
},
{
MR_string_const("--no-erlang-inhibit-trivial-warnings", 36),
MR_TAG_COMMON(1,6,1008)
},
{
MR_string_const("\tgeneration for all modules except for a select few.", 52),
MR_TAG_COMMON(1,6,1009)
},
{
MR_string_const("\tso it is useful when you wish to enable native code", 52),
MR_TAG_COMMON(1,6,1010)
},
{
MR_string_const("\tErlang compiler.  Cancelled out by \140--no-erlang-native code\'", 61),
MR_TAG_COMMON(1,6,1011)
},
{
MR_string_const("\tAdd \140+native\' to the list of flags passed to the", 49),
MR_TAG_COMMON(1,6,1012)
},
{
MR_string_const("--erlang-native-code", 20),
MR_TAG_COMMON(1,6,1013)
},
{
MR_string_const("\tErlang header files (.hrl).", 28),
MR_TAG_COMMON(1,6,1014)
},
{
MR_string_const("\tAppend <dir> to the list of directories to be searched for", 59),
MR_TAG_COMMON(1,6,1015)
},
{
MR_string_const("--erlang-include-directory <dir>, --erlang-include-dir <dir>", 60),
MR_TAG_COMMON(1,6,1016)
},
{
MR_string_const("\tto be quoted when passed to the shell.", 39),
MR_TAG_COMMON(1,6,1017)
},
{
MR_string_const("\t\140--erlang-flag\' should be used for single words which need", 59),
MR_TAG_COMMON(1,6,1018)
},
{
MR_string_const("\tSpecify options to be passed to the Erlang compiler.", 53),
MR_TAG_COMMON(1,6,1019)
},
{
MR_string_const("--erlang-flags <options>, --erlang-flag <option>", 48),
MR_TAG_COMMON(1,6,1020)
},
{
MR_string_const("\tThe default is \140erl\'.", 22),
MR_TAG_COMMON(1,6,1021)
},
{
MR_string_const("\tSpecify the name of the Erlang interpreter.", 44),
MR_TAG_COMMON(1,6,1022)
},
{
MR_string_const("--erlang-interpreter <erl>", 26),
MR_TAG_COMMON(1,6,1023)
},
{
MR_string_const("\tThe default is \140erlc\'.", 23),
MR_TAG_COMMON(1,6,1024)
},
{
MR_string_const("\tSpecify the name of the Erlang compiler.", 41),
MR_TAG_COMMON(1,6,1025)
},
{
MR_string_const("--erlang-compiler <erlc>", 24),
MR_TAG_COMMON(1,6,1026)
},
{
MR_string_const("\tto be quoted when passed to the shell.", 39),
MR_TAG_COMMON(1,6,1027)
},
{
MR_string_const("\t\140--csharp-flag\' should be used for single words which need", 59),
MR_TAG_COMMON(1,6,1028)
},
{
MR_string_const("\tSpecify options to be passed to the C# compiler.", 49),
MR_TAG_COMMON(1,6,1029)
},
{
MR_string_const("--csharp-flags <options>, --csharp-flag <option>", 48),
MR_TAG_COMMON(1,6,1030)
},
{
MR_string_const("\tSpecify the name of the C# Compiler.  The default is \140csc\'.", 60),
MR_TAG_COMMON(1,6,1031)
},
{
MR_string_const("--csharp-compiler <csc>", 23),
MR_TAG_COMMON(1,6,1032)
},
{
MR_string_const("\tto be quoted when passed to the shell.", 39),
MR_TAG_COMMON(1,6,1033)
},
{
MR_string_const("\t\140--ilasm-flag\' should be used for single words which need", 58),
MR_TAG_COMMON(1,6,1034)
},
{
MR_string_const("\tSpecify options to be passed to the IL assembler.", 50),
MR_TAG_COMMON(1,6,1035)
},
{
MR_string_const("--ilasm-flags <options>, --ilasm-flag <options>", 47),
MR_TAG_COMMON(1,6,1036)
},
{
MR_string_const("\tSpecify the name of the .NET IL Assembler command.", 51),
MR_TAG_COMMON(1,6,1037)
},
{
MR_string_const("--il-assembler <ilasm>", 22),
MR_TAG_COMMON(1,6,1038)
},
{
MR_string_const("\tBy default this is \140.class\'.", 29),
MR_TAG_COMMON(1,6,1039)
},
{
MR_string_const("\tSpecify an extension for Java object (bytecode) files", 54),
MR_TAG_COMMON(1,6,1040)
},
{
MR_string_const("--java-object-file-extension <ext>", 34),
MR_TAG_COMMON(1,6,1041)
},
{
MR_string_const("\tSet the classpath for the Java compiler.", 41),
MR_TAG_COMMON(1,6,1042)
},
{
MR_string_const("--java-classpath <path>", 23),
MR_TAG_COMMON(1,6,1043)
},
{
MR_string_const("\tto be quoted when passed to the shell.", 39),
MR_TAG_COMMON(1,6,1044)
},
{
MR_string_const("\t\140--java-flag\' should be used for single words which need", 57),
MR_TAG_COMMON(1,6,1045)
},
{
MR_string_const("\tSpecify options to be passed to the Java compiler.", 51),
MR_TAG_COMMON(1,6,1046)
},
{
MR_string_const("--java-flags <options>, --java-flag <option>", 44),
MR_TAG_COMMON(1,6,1047)
},
{
MR_string_const("\tThe default is \140java\'", 22),
MR_TAG_COMMON(1,6,1048)
},
{
MR_string_const("\tSpecify which Java interpreter to use.", 39),
MR_TAG_COMMON(1,6,1049)
},
{
MR_string_const("--java-interpreter <java>", 25),
MR_TAG_COMMON(1,6,1050)
},
{
MR_string_const("\tSpecify which Java compiler to use.  The default is \140javac\'.", 61),
MR_TAG_COMMON(1,6,1051)
},
{
MR_string_const("--java-compiler <javac>", 23),
MR_TAG_COMMON(1,6,1052)
},
{
MR_string_const("--javac <javac>", 15),
MR_TAG_COMMON(1,6,1053)
},
{
MR_string_const("\tto be quoted when passed to the shell.", 39),
MR_TAG_COMMON(1,6,1054)
},
{
MR_string_const("\t\140--cflag\' should be used for single words which need", 53),
MR_TAG_COMMON(1,6,1055)
},
{
MR_string_const("\tSpecify options to be passed to the C compiler.", 48),
MR_TAG_COMMON(1,6,1056)
},
{
MR_string_const("--cflags <options>, --cflag <option>", 36),
MR_TAG_COMMON(1,6,1057)
},
{
MR_string_const("\tis not set or if the C compiler is not GNU C.", 46),
MR_TAG_COMMON(1,6,1058)
},
{
MR_string_const("\tThis option has no effect if \140--gc boehm\'", 42),
MR_TAG_COMMON(1,6,1059)
},
{
MR_string_const("\tbut may significantly increase code size.", 42),
MR_TAG_COMMON(1,6,1060)
},
{
MR_string_const("\tThis can improve performance a fair bit,", 41),
MR_TAG_COMMON(1,6,1061)
},
{
MR_string_const("\tInline calls to GC_malloc().", 29),
MR_TAG_COMMON(1,6,1062)
},
{
MR_string_const("--inline-alloc", 14),
MR_TAG_COMMON(1,6,1063)
},
{
MR_string_const("\tsequence of \140--c-include-directory\' options.", 45),
MR_TAG_COMMON(1,6,1064)
},
{
MR_string_const("\t\140MERCURY_MC_ALL_C_INCL_DIRS\' environment variable to a", 55),
MR_TAG_COMMON(1,6,1065)
},
{
MR_string_const("\tthis list, rather than append to it, then you can set the", 58),
MR_TAG_COMMON(1,6,1066)
},
{
MR_string_const("\tC header files.  Note that if you want to override", 51),
MR_TAG_COMMON(1,6,1067)
},
{
MR_string_const("\tAppend <dir> to the list of directories to be searched for", 59),
MR_TAG_COMMON(1,6,1068)
},
{
MR_string_const("--c-include-directory <dir>, --c-include-dir <dir>", 50),
MR_TAG_COMMON(1,6,1069)
},
{
MR_string_const("\tand disables stripping of the executable.)", 43),
MR_TAG_COMMON(1,6,1070)
},
{
MR_string_const("\t(This has the same effect as \140--cflags \"-g\"\'", 45),
MR_TAG_COMMON(1,6,1071)
},
{
MR_string_const("\tEnable debugging of the generated C code.", 42),
MR_TAG_COMMON(1,6,1072)
},
{
MR_string_const("--c-debug", 9),
MR_TAG_COMMON(1,6,1073)
},
{
MR_string_const("\theaders, rather than the ANSI subset.", 38),
MR_TAG_COMMON(1,6,1074)
},
{
MR_string_const("\tof C should be used.  Use the full contents of system", 54),
MR_TAG_COMMON(1,6,1075)
},
{
MR_string_const("\tDon\'t specify to the C compiler that the ANSI dialect", 54),
MR_TAG_COMMON(1,6,1076)
},
{
MR_string_const("--no-ansi-c", 11),
MR_TAG_COMMON(1,6,1077)
},
{
MR_string_const("\tDon\'t enable the C compiler\'s optimizations.", 45),
MR_TAG_COMMON(1,6,1078)
},
{
MR_string_const("--no-c-optimize", 15),
MR_TAG_COMMON(1,6,1079)
},
{
MR_string_const("\tSpecify which C compiler to use.", 33),
MR_TAG_COMMON(1,6,1080)
},
{
MR_string_const("--cc <compiler-name>", 20),
MR_TAG_COMMON(1,6,1081)
},
{
MR_string_const("\tpass \140/debug\' to the IL assembler.)", 36),
MR_TAG_COMMON(1,6,1082)
},
{
MR_string_const("\tIf the target language is IL, this causes the compiler to", 58),
MR_TAG_COMMON(1,6,1083)
},
{
MR_string_const("\t\140--c-debug\' (see below).", 25),
MR_TAG_COMMON(1,6,1084)
},
{
MR_string_const("\tIf the target language is C, this has the same effect as", 57),
MR_TAG_COMMON(1,6,1085)
},
{
MR_string_const("\tEnable debugging of the generated target code.", 47),
MR_TAG_COMMON(1,6,1086)
},
{
MR_string_const("--target-debug", 14),
MR_TAG_COMMON(1,6,1087)
},
{
MR_string_const("\trather than to \140mmc\'.", 22),
MR_TAG_COMMON(1,6,1088)
},
{
MR_string_const("\toptions to the target code compiler (e.g. \140mgnuc\')", 51),
MR_TAG_COMMON(1,6,1089)
},
{
MR_string_const("\tNote that if you are using Mmake, you need to pass these", 57),
MR_TAG_COMMON(1,6,1090)
},
{
MR_string_const("\tSpecify the command used to produce Java archive (JAR) files.", 62),
MR_tbmkword(0, 0)
},
{
MR_string_const("--java-archive-command <command>", 32),
MR_TAG_COMMON(1,6,1092)
},
{
MR_string_const("\ta shared library.", 18),
MR_TAG_COMMON(1,6,1093)
},
{
MR_string_const("\tSpecify the command used to invoke the linker when linking", 59),
MR_TAG_COMMON(1,6,1094)
},
{
MR_string_const("--link-shared-lib-command <command>", 35),
MR_TAG_COMMON(1,6,1095)
},
{
MR_string_const("\tan executable.", 15),
MR_TAG_COMMON(1,6,1096)
},
{
MR_string_const("\tSpecify the command used to invoke the linker when linking", 59),
MR_TAG_COMMON(1,6,1097)
},
{
MR_string_const("--link-executable-command <command>", 35),
MR_TAG_COMMON(1,6,1098)
},
{
MR_string_const("\tby the Mercury compiler.)", 26),
MR_TAG_COMMON(1,6,1099)
},
{
MR_string_const("\tcontaining only C code that was automatically generated", 56),
MR_TAG_COMMON(1,6,1100)
},
{
MR_string_const("\thand-coded C code with \140INIT\' comments, rather than", 52),
MR_TAG_COMMON(1,6,1101)
},
{
MR_string_const("\t(This may be necessary if the C files contain", 46),
MR_TAG_COMMON(1,6,1102)
},
{
MR_string_const("\tSearch \140.c\' files for extra initialization functions.", 54),
MR_TAG_COMMON(1,6,1103)
},
{
MR_string_const("--extra-initialization-functions, --extra-inits", 47),
MR_TAG_COMMON(1,6,1104)
},
{
MR_string_const("\tSpecify flags to pass to the Mercury runtime.", 46),
MR_TAG_COMMON(1,6,1105)
},
{
MR_string_const("--runtime-flags <flags>", 23),
MR_TAG_COMMON(1,6,1106)
},
{
MR_string_const("\tDisable use of the readline library in the debugger.", 53),
MR_TAG_COMMON(1,6,1107)
},
{
MR_string_const("--no-use-readline", 17),
MR_TAG_COMMON(1,6,1108)
},
{
MR_string_const("\tDo not allow undefined symbols in shared libraries.", 52),
MR_TAG_COMMON(1,6,1109)
},
{
MR_string_const("--no-allow-undefined", 20),
MR_TAG_COMMON(1,6,1110)
},
{
MR_string_const("\tprovide a main() function.", 27),
MR_TAG_COMMON(1,6,1111)
},
{
MR_string_const("\tDon\'t generate a C main() function.  The user\'s code must", 58),
MR_TAG_COMMON(1,6,1112)
},
{
MR_string_const("--no-main", 9),
MR_TAG_COMMON(1,6,1113)
},
{
MR_string_const("\tDon\'t pipe link errors through the Mercury demangler.", 54),
MR_TAG_COMMON(1,6,1114)
},
{
MR_string_const("--no-demangle", 13),
MR_TAG_COMMON(1,6,1115)
},
{
MR_string_const("\tDon\'t strip executables.", 25),
MR_TAG_COMMON(1,6,1116)
},
{
MR_string_const("--no-strip", 10),
MR_TAG_COMMON(1,6,1117)
},
{
MR_string_const("\tbe passed to c2init when tracing is enabled.", 45),
MR_TAG_COMMON(1,6,1118)
},
{
MR_string_const("\tAppend <init-file> to the list of \140.init\' files to", 51),
MR_TAG_COMMON(1,6,1119)
},
{
MR_string_const("--trace-init-file <init-file>", 29),
MR_TAG_COMMON(1,6,1120)
},
{
MR_string_const("\tbe passed to c2init.", 21),
MR_TAG_COMMON(1,6,1121)
},
{
MR_string_const("\tAppend <init-file> to the list of \140.init\' files to", 51),
MR_TAG_COMMON(1,6,1122)
},
{
MR_string_const("--init-file <init-file>", 23),
MR_TAG_COMMON(1,6,1123)
},
{
MR_string_const("\tbe searched for \140.init\' files by c2init.", 41),
MR_TAG_COMMON(1,6,1124)
},
{
MR_string_const("\tAppend <directory> to the list of directories to", 49),
MR_TAG_COMMON(1,6,1125)
},
{
MR_string_const("--init-file-directory <directory>", 33),
MR_TAG_COMMON(1,6,1126)
},
{
MR_string_const("\t\140--mercury-linkage shared\'.", 28),
MR_TAG_COMMON(1,6,1127)
},
{
MR_string_const("\tShared libraries are always linked with", 40),
MR_TAG_COMMON(1,6,1128)
},
{
MR_string_const("\tlinking an executable with Mercury libraries.", 46),
MR_TAG_COMMON(1,6,1129)
},
{
MR_string_const("\tSpecify whether to use shared or static linking when", 53),
MR_TAG_COMMON(1,6,1130)
},
{
MR_string_const("--mercury-linkage {shared|static}", 33),
MR_TAG_COMMON(1,6,1131)
},
{
MR_string_const("\twith \140--linkage shared\'.", 25),
MR_TAG_COMMON(1,6,1132)
},
{
MR_string_const("\texecutables.  Shared libraries are always linked", 49),
MR_TAG_COMMON(1,6,1133)
},
{
MR_string_const("\tSpecify whether to use shared or static linking for", 52),
MR_TAG_COMMON(1,6,1134)
},
{
MR_string_const("--linkage {shared|static}", 25),
MR_TAG_COMMON(1,6,1135)
},
{
MR_string_const("\tLink with the specified Mercury library.", 41),
MR_TAG_COMMON(1,6,1136)
},
{
MR_string_const("--ml <library>, --mercury-library <library>", 43),
MR_TAG_COMMON(1,6,1137)
},
{
MR_string_const("\tImplies \140--no-mercury-configuration-directory\'.", 48),
MR_TAG_COMMON(1,6,1138)
},
{
MR_string_const("\tDon\'t use the Mercury standard library.", 40),
MR_TAG_COMMON(1,6,1139)
},
{
MR_string_const("--no-mercury-stdlib-dir", 23),
MR_TAG_COMMON(1,6,1140)
},
{
MR_string_const("--no-mercury-standard-library-directory", 39),
MR_TAG_COMMON(1,6,1141)
},
{
MR_string_const("\tand \140--mercury-configuration-directory <directory>\'.", 53),
MR_TAG_COMMON(1,6,1142)
},
{
MR_string_const("\tImplies \140--mercury-library-directory <directory>\'", 50),
MR_TAG_COMMON(1,6,1143)
},
{
MR_string_const("\tSearch <directory> for the Mercury standard library.", 53),
MR_TAG_COMMON(1,6,1144)
},
{
MR_string_const("--mercury-stdlib-dir <directory>", 32),
MR_TAG_COMMON(1,6,1145)
},
{
MR_string_const("--mercury-standard-library-directory <directory>", 48),
MR_TAG_COMMON(1,6,1146)
},
{
MR_string_const("\toptions as needed.", 19),
MR_TAG_COMMON(1,6,1147)
},
{
MR_string_const("\t\140--init-file-directory\' and \140--c-include-directory\'", 52),
MR_TAG_COMMON(1,6,1148)
},
{
MR_string_const("\t\140--search-directory\', \140--library-directory\',", 45),
MR_TAG_COMMON(1,6,1149)
},
{
MR_string_const("\tbe searched for Mercury libraries. This will add", 49),
MR_TAG_COMMON(1,6,1150)
},
{
MR_string_const("\tAppend <directory> to the list of directories to", 49),
MR_TAG_COMMON(1,6,1151)
},
{
MR_string_const("--mld <directory>, --mercury-library-directory <directory>", 58),
MR_TAG_COMMON(1,6,1152)
},
{
MR_string_const("\t\140--c-include-directory\' options.", 33),
MR_TAG_COMMON(1,6,1153)
},
{
MR_string_const("\t\140--library-directory\', \140--init-file-directory\' and", 51),
MR_TAG_COMMON(1,6,1154)
},
{
MR_string_const("\t\140--search-directory\', \140--intermod-directory\',", 46),
MR_TAG_COMMON(1,6,1155)
},
{
MR_string_const("\tinstalled.  Similar to adding <directory> using all of the", 59),
MR_TAG_COMMON(1,6,1156)
},
{
MR_string_const("\tSearch <directory> for Mercury library files have not yet been", 63),
MR_TAG_COMMON(1,6,1157)
},
{
MR_string_const("--search-library-files-directory <directory>", 44),
MR_TAG_COMMON(1,6,1158)
},
{
MR_string_const("--search-lib-files-dir <directory>", 34),
MR_TAG_COMMON(1,6,1159)
},
{
MR_string_const("\tLink with the specified object file.", 37),
MR_TAG_COMMON(1,6,1160)
},
{
MR_string_const("--link-object <object-file>", 27),
MR_TAG_COMMON(1,6,1161)
},
{
MR_string_const("\tLink with the specified library.", 33),
MR_TAG_COMMON(1,6,1162)
},
{
MR_string_const("-l <library>, --library <library>", 33),
MR_TAG_COMMON(1,6,1163)
},
{
MR_string_const("\t-R option above (such as Mac OS X).", 36),
MR_TAG_COMMON(1,6,1164)
},
{
MR_string_const("\tpath is obtained from the shared library and not via the", 57),
MR_TAG_COMMON(1,6,1165)
},
{
MR_string_const("\tThis option is useful on systems where the runtime search", 58),
MR_TAG_COMMON(1,6,1166)
},
{
MR_string_const("\tSpecify the path where a shared library will be installed.", 59),
MR_TAG_COMMON(1,6,1167)
},
{
MR_string_const("--shlib-linker-install-name-path <directory>", 44),
MR_TAG_COMMON(1,6,1168)
},
{
MR_string_const("\tto search for shared libraries at runtime.", 43),
MR_TAG_COMMON(1,6,1169)
},
{
MR_string_const("\tAppend <directory> to the list of directories in which", 55),
MR_TAG_COMMON(1,6,1170)
},
{
MR_string_const("-R <directory>, --runtime-library-directory <directory>", 55),
MR_TAG_COMMON(1,6,1171)
},
{
MR_string_const("\tto search for libraries.", 25),
MR_TAG_COMMON(1,6,1172)
},
{
MR_string_const("\tAppend <directory> to the list of directories in which", 55),
MR_TAG_COMMON(1,6,1173)
},
{
MR_string_const("-L <directory>, --library-directory <directory>", 47),
MR_TAG_COMMON(1,6,1174)
},
{
MR_string_const("\tto be quoted when passed to the shell.", 39),
MR_TAG_COMMON(1,6,1175)
},
{
MR_string_const("\t\140--ld-libflag\' should be used for single words which need", 58),
MR_TAG_COMMON(1,6,1176)
},
{
MR_string_const("\twhich command is used.", 23),
MR_TAG_COMMON(1,6,1177)
},
{
MR_string_const("\tUse \140ml --print-shared-lib-link-command\' to find out", 53),
MR_TAG_COMMON(1,6,1178)
},
{
MR_string_const("\tinvoked by ml to link a shared library.", 40),
MR_TAG_COMMON(1,6,1179)
},
{
MR_string_const("\tSpecify options to be passed to the linker command", 51),
MR_TAG_COMMON(1,6,1180)
},
{
MR_string_const("--ld-libflags <options>, --ld-libflag <option>", 46),
MR_TAG_COMMON(1,6,1181)
},
{
MR_string_const("\tto be quoted when passed to the shell.", 39),
MR_TAG_COMMON(1,6,1182)
},
{
MR_string_const("\t\140--ld-flag\' should be used for single words which need", 55),
MR_TAG_COMMON(1,6,1183)
},
{
MR_string_const("\tcommand is used.", 17),
MR_TAG_COMMON(1,6,1184)
},
{
MR_string_const("\tUse \140ml --print-link-command\' to find out which", 48),
MR_TAG_COMMON(1,6,1185)
},
{
MR_string_const("\tinvoked by ml to link an executable.", 37),
MR_TAG_COMMON(1,6,1186)
},
{
MR_string_const("\tSpecify options to be passed to the linker command", 51),
MR_TAG_COMMON(1,6,1187)
},
{
MR_string_const("--ld-flags <options>, --ld-flag <option>", 40),
MR_TAG_COMMON(1,6,1188)
},
{
MR_string_const("\tThis option is ignored by \140mmc --make\'.", 40),
MR_TAG_COMMON(1,6,1189)
},
{
MR_string_const("\tof the first module on the command line.)", 42),
MR_TAG_COMMON(1,6,1190)
},
{
MR_string_const("\t(The default executable name is the same as the name", 53),
MR_TAG_COMMON(1,6,1191)
},
{
MR_string_const("\tSpecify the name of the final executable.", 42),
MR_TAG_COMMON(1,6,1192)
},
{
MR_string_const("-o <filename>, --output-file <filename>", 39),
MR_TAG_COMMON(1,6,1193)
},
{
MR_string_const("\t(This option is only supported by \140mmc --make\'.)", 49),
MR_tbmkword(0, 0)
},
{
MR_string_const("\tThis option uses temporary files to pass arguments to sub-commands.", 68),
MR_TAG_COMMON(1,6,1195)
},
{
MR_string_const("\tEnable this option if your shell doesn\'t support long command lines.", 69),
MR_TAG_COMMON(1,6,1196)
},
{
MR_string_const("--restricted-command-line", 25),
MR_TAG_COMMON(1,6,1197)
},
{
MR_string_const("\t(This option is only supported by \140mmc --make\'.)", 49),
MR_TAG_COMMON(1,6,1198)
},
{
MR_string_const("\ta Mercury library.", 19),
MR_TAG_COMMON(1,6,1199)
},
{
MR_string_const("\tInstall the specified C header file with along with", 52),
MR_TAG_COMMON(1,6,1200)
},
{
MR_string_const("--extra-library-header <file>, --extra-lib-header <file>", 56),
MR_TAG_COMMON(1,6,1201)
},
{
MR_string_const("\tReport run times for commands executed by \140mmc --make\'.", 56),
MR_TAG_COMMON(1,6,1202)
},
{
MR_string_const("--show-make-times", 17),
MR_TAG_COMMON(1,6,1203)
},
{
MR_string_const("\tfirst.", 7),
MR_TAG_COMMON(1,6,1204)
},
{
MR_string_const("\tMake \140mmc --make\' compile more recently modified source files", 62),
MR_TAG_COMMON(1,6,1205)
},
{
MR_string_const("--order-make-by-timestamp", 25),
MR_TAG_COMMON(1,6,1206)
},
{
MR_string_const("\t\140mmc --make\'.)", 15),
MR_TAG_COMMON(1,6,1207)
},
{
MR_string_const("\tattempting to use them.  (This option is only meaningful with", 62),
MR_TAG_COMMON(1,6,1208)
},
{
MR_string_const("\tDo not check that libraries have been installed before", 55),
MR_TAG_COMMON(1,6,1209)
},
{
MR_string_const("--no-libgrade-install-check", 27),
MR_TAG_COMMON(1,6,1210)
},
{
MR_string_const("\twork with \140mmc --make\').", 25),
MR_TAG_COMMON(1,6,1211)
},
{
MR_string_const("\t\140--use-grade-subdirs\' does not work with Mmake (it does", 56),
MR_TAG_COMMON(1,6,1212)
},
{
MR_string_const("\tthe current directory.", 23),
MR_TAG_COMMON(1,6,1213)
},
{
MR_string_const("\tExecutables and libraries will be symlinked or copied into", 59),
MR_TAG_COMMON(1,6,1214)
},
{
MR_string_const("\tlaid out so that multiple grades can be built simultaneously.", 62),
MR_TAG_COMMON(1,6,1215)
},
{
MR_string_const("\tGenerate intermediate files in a \140Mercury\' subdirectory,", 57),
MR_TAG_COMMON(1,6,1216)
},
{
MR_string_const("--use-grade-subdirs", 19),
MR_TAG_COMMON(1,6,1217)
},
{
MR_string_const("\trather than generating them in the current directory.", 54),
MR_TAG_COMMON(1,6,1218)
},
{
MR_string_const("\tGenerate intermediate files in a \140Mercury\' subdirectory,", 57),
MR_TAG_COMMON(1,6,1219)
},
{
MR_string_const("--use-subdirs", 13),
MR_TAG_COMMON(1,6,1220)
},
{
MR_string_const("\tdirectories given by \140--intermod-directory\'.", 45),
MR_TAG_COMMON(1,6,1221)
},
{
MR_string_const("\tof directories to search for \140.opt\' files - use only the", 57),
MR_TAG_COMMON(1,6,1222)
},
{
MR_string_const("\tDon\'t add arguments to \140--search-directory\' to the list", 56),
MR_TAG_COMMON(1,6,1223)
},
{
MR_string_const("--no-use-search-directories-for-intermod", 40),
MR_TAG_COMMON(1,6,1224)
},
{
MR_string_const("\tsearched for \140.opt\' files.", 27),
MR_TAG_COMMON(1,6,1225)
},
{
MR_string_const("\tAdd <dir> to the list of directories to be", 43),
MR_TAG_COMMON(1,6,1226)
},
{
MR_string_const("--intermod-directory <dir>", 26),
MR_TAG_COMMON(1,6,1227)
},
{
MR_string_const("\timported modules.", 18),
MR_TAG_COMMON(1,6,1228)
},
{
MR_string_const("\tAppend <dir> to the list of directories to be searched for", 59),
MR_TAG_COMMON(1,6,1229)
},
{
MR_string_const("-I <dir>, --search-directory <dir>", 34),
MR_TAG_COMMON(1,6,1230)
},
{
MR_string_const("\tThe configuration file is just an options file.", 48),
MR_TAG_COMMON(1,6,1231)
},
{
MR_string_const("\t\140--no-mercury-stdlib-dir\' is passed to mmc.", 44),
MR_TAG_COMMON(1,6,1232)
},
{
MR_string_const("\ta default configuration will be used, unless", 45),
MR_TAG_COMMON(1,6,1233)
},
{
MR_string_const("\tfrom <file>.  If the \140--config-file\' option is not set,", 56),
MR_TAG_COMMON(1,6,1234)
},
{
MR_string_const("\tRead the Mercury compiler\'s configuration information", 54),
MR_TAG_COMMON(1,6,1235)
},
{
MR_string_const("--config-file <file>", 20),
MR_TAG_COMMON(1,6,1236)
},
{
MR_string_const("\tSearch <directory> for Mercury system\'s configuration files.", 61),
MR_TAG_COMMON(1,6,1237)
},
{
MR_string_const("--mercury-config-dir <directory>", 32),
MR_TAG_COMMON(1,6,1238)
},
{
MR_string_const("--mercury-configuration-directory <directory>", 45),
MR_TAG_COMMON(1,6,1239)
},
{
MR_string_const("\toptions files.", 15),
MR_TAG_COMMON(1,6,1240)
},
{
MR_string_const("\tAdd <dir> to the list of directories to be searched for", 56),
MR_TAG_COMMON(1,6,1241)
},
{
MR_string_const("--options-search-directory <dir>", 32),
MR_TAG_COMMON(1,6,1242)
},
{
MR_string_const("\tin the current directory will be read.", 39),
MR_TAG_COMMON(1,6,1243)
},
{
MR_string_const("\tstandard input.  By default the file \140Mercury.options\'", 55),
MR_TAG_COMMON(1,6,1244)
},
{
MR_string_const("\tIf <file> is \140-\', an options file will be read from the", 56),
MR_TAG_COMMON(1,6,1245)
},
{
MR_string_const("\tAdd <file> to the list of options files to be processed.", 57),
MR_TAG_COMMON(1,6,1246)
},
{
MR_string_const("--options-file <file>", 21),
MR_TAG_COMMON(1,6,1247)
},
{
MR_string_const("\tas if they were specified on the command line.", 47),
MR_TAG_COMMON(1,6,1248)
},
{
MR_string_const("\tTake options from the specified file, and handle them", 54),
MR_TAG_COMMON(1,6,1249)
},
{
MR_string_const("--flags-file <file>", 19),
MR_TAG_COMMON(1,6,1250)
},
{
MR_string_const("--flags <file>", 14),
MR_TAG_COMMON(1,6,1251)
},
{
MR_string_const("\tboth shared and static linking.", 32),
MR_TAG_COMMON(1,6,1252)
},
{
MR_string_const("\ttimes.  By default libraries will be installed for", 51),
MR_TAG_COMMON(1,6,1253)
},
{
MR_string_const("\tor static linking.  This option can be specified multiple", 58),
MR_TAG_COMMON(1,6,1254)
},
{
MR_string_const("\tSpecify whether libraries should be installed for shared", 57),
MR_TAG_COMMON(1,6,1255)
},
{
MR_string_const("--lib-linkage {shared|static}", 29),
MR_TAG_COMMON(1,6,1256)
},
{
MR_string_const("\t(This option does not work with Mmake, only \140mmc --make\'.)", 59),
MR_TAG_COMMON(1,6,1257)
},
{
MR_string_const("\tset of library grades to be installed.", 39),
MR_TAG_COMMON(1,6,1258)
},
{
MR_string_const("\tRemove grades that contain the specified component from the", 60),
MR_TAG_COMMON(1,6,1259)
},
{
MR_string_const("--libgrades-exclude <component>", 31),
MR_TAG_COMMON(1,6,1260)
},
{
MR_string_const("--libgrades-exclude-component <component>", 41),
MR_TAG_COMMON(1,6,1261)
},
{
MR_string_const("\t(This option does not work with Mmake, only \140mmc --make\'.)", 59),
MR_TAG_COMMON(1,6,1262)
},
{
MR_string_const("\tthe set of library grades to be installed.", 43),
MR_TAG_COMMON(1,6,1263)
},
{
MR_string_const("\tRemove grades that do not contain the specified component from", 63),
MR_TAG_COMMON(1,6,1264)
},
{
MR_string_const("--libgrades-include <component>", 31),
MR_TAG_COMMON(1,6,1265)
},
{
MR_string_const("--libgrades-include-component <component>", 41),
MR_TAG_COMMON(1,6,1266)
},
{
MR_string_const("\tto be installed should be built.", 33),
MR_TAG_COMMON(1,6,1267)
},
{
MR_string_const("\tClear the list of compilation grades in which a library", 56),
MR_TAG_COMMON(1,6,1268)
},
{
MR_string_const("--no-libgrade", 13),
MR_TAG_COMMON(1,6,1269)
},
{
MR_string_const("\twhich a library to be installed should be built.", 49),
MR_TAG_COMMON(1,6,1270)
},
{
MR_string_const("\tAdd <grade> to the list of compilation grades in", 49),
MR_TAG_COMMON(1,6,1271)
},
{
MR_string_const("--libgrade <grade>", 18),
MR_TAG_COMMON(1,6,1272)
},
{
MR_string_const("\tto install each directory. The default option is \140-r\'.", 55),
MR_TAG_COMMON(1,6,1273)
},
{
MR_string_const("\t\140<command> <option> <source> <target>\'", 39),
MR_TAG_COMMON(1,6,1274)
},
{
MR_string_const("\ta directory. The given command will be invoked as", 50),
MR_TAG_COMMON(1,6,1275)
},
{
MR_string_const("\tSpecify the flag to pass to the install command to install", 59),
MR_TAG_COMMON(1,6,1276)
},
{
MR_string_const("--install-command-dir-option <option>", 37),
MR_TAG_COMMON(1,6,1277)
},
{
MR_string_const("\tin a Mercury library. The default command is \140cp\'.", 51),
MR_TAG_COMMON(1,6,1278)
},
{
MR_string_const("\t\140<command> <source> <target>\' to install each file", 51),
MR_TAG_COMMON(1,6,1279)
},
{
MR_string_const("\tMercury libraries. The given command will be invoked as", 56),
MR_TAG_COMMON(1,6,1280)
},
{
MR_string_const("\tSpecify the command to use to install the files in", 51),
MR_TAG_COMMON(1,6,1281)
},
{
MR_string_const("--install-command <command>", 27),
MR_TAG_COMMON(1,6,1282)
},
{
MR_string_const("\tThe directory under which to install Mercury libraries.", 56),
MR_TAG_COMMON(1,6,1283)
},
{
MR_string_const("--install-prefix <dir>", 22),
MR_TAG_COMMON(1,6,1284)
},
{
MR_string_const("\tcontaining the main module given first.", 40),
MR_TAG_COMMON(1,6,1285)
},
{
MR_string_const("\tfiles in the program or library, with the source file", 54),
MR_TAG_COMMON(1,6,1286)
},
{
MR_string_const("\tThe command will be passed the names of all of the source", 58),
MR_TAG_COMMON(1,6,1287)
},
{
MR_string_const("\tfile for a library.", 20),
MR_TAG_COMMON(1,6,1288)
},
{
MR_string_const("\tSpecify a command to produce extra entries in the \140.init\'", 58),
MR_TAG_COMMON(1,6,1289)
},
{
MR_string_const("--extra-init-command <command>", 30),
MR_TAG_COMMON(1,6,1290)
},
{
MR_string_const("\tcontaining the main module given first.", 40),
MR_TAG_COMMON(1,6,1291)
},
{
MR_string_const("\tfiles in the program or library, with the source file", 54),
MR_TAG_COMMON(1,6,1292)
},
{
MR_string_const("\tThe command will be passed the names of all of the source", 58),
MR_TAG_COMMON(1,6,1293)
},
{
MR_string_const("\theader files generated by the Mercury compiler.", 48),
MR_TAG_COMMON(1,6,1294)
},
{
MR_string_const("\tThis can be used to compile C source files which rely on", 57),
MR_TAG_COMMON(1,6,1295)
},
{
MR_string_const("\tSpecify a command to run before linking with \140mmc --make\'.", 59),
MR_TAG_COMMON(1,6,1296)
},
{
MR_string_const("--pre-link-command <command>", 28),
MR_TAG_COMMON(1,6,1297)
},
{
MR_string_const("\tverbosity and build system options are not tracked.", 52),
MR_TAG_COMMON(1,6,1298)
},
{
MR_string_const("\ttimestamp on the file itself has not changed.  Warning,", 56),
MR_TAG_COMMON(1,6,1299)
},
{
MR_string_const("\t\140mmc --make\' will then know to recompile the module even if the", 64),
MR_TAG_COMMON(1,6,1300)
},
{
MR_string_const("\teach module.  If an option for a module is added or removed,", 61),
MR_TAG_COMMON(1,6,1301)
},
{
MR_string_const("\tWith \140--make\', keep track of the options used when compiling", 61),
MR_TAG_COMMON(1,6,1302)
},
{
MR_string_const("--track-flags", 13),
MR_TAG_COMMON(1,6,1303)
},
{
MR_string_const("\tconcurrently for some tasks.", 29),
MR_TAG_COMMON(1,6,1304)
},
{
MR_string_const("\tWith \140--make\', attempt to perform up to <n> jobs", 49),
MR_TAG_COMMON(1,6,1305)
},
{
MR_string_const("-j <n>, --jobs <n>", 18),
MR_TAG_COMMON(1,6,1306)
},
{
MR_string_const("\tpossible even if an error is detected.", 39),
MR_TAG_COMMON(1,6,1307)
},
{
MR_string_const("\tWith \140--make\', keep going as far as", 36),
MR_TAG_COMMON(1,6,1308)
},
{
MR_string_const("-k, --keep-going", 16),
MR_TAG_COMMON(1,6,1309)
},
{
MR_string_const("\teven if they are up to date.", 29),
MR_TAG_COMMON(1,6,1310)
},
{
MR_string_const("\tSame as \140--make\', but always rebuild the target files", 54),
MR_TAG_COMMON(1,6,1311)
},
{
MR_string_const("-r, --rebuild", 13),
MR_TAG_COMMON(1,6,1312)
},
{
MR_string_const("\tNote that this option also enables \140--use-subdirs\'.", 52),
MR_TAG_COMMON(1,6,1313)
},
{
MR_string_const("\tfiles, if they are not already up-to-date.", 43),
MR_TAG_COMMON(1,6,1314)
},
{
MR_string_const("\tmake, rather than source files.  Create the specified", 54),
MR_TAG_COMMON(1,6,1315)
},
{
MR_string_const("\tTreat the non-option arguments to \140mmc\' as files to", 52),
MR_TAG_COMMON(1,6,1316)
},
{
MR_string_const("-m, --make", 10),
MR_TAG_COMMON(1,6,1317)
},
{
MR_string_const("\tonly be processed for implicit parallelism.", 44),
MR_tbmkword(0, 0)
},
{
MR_string_const("\tUse the specified profiling feedback file which may currently", 62),
MR_TAG_COMMON(1,6,1319)
},
{
MR_string_const("--feedback-file", 15),
MR_TAG_COMMON(1,6,1320)
},
{
MR_string_const("\tplatform the compiler is running on.", 37),
MR_TAG_COMMON(1,6,1321)
},
{
MR_string_const("\tDo not assume that the code being generated is for the", 55),
MR_TAG_COMMON(1,6,1322)
},
{
MR_string_const("--cross-compiling", 17),
MR_TAG_COMMON(1,6,1323)
},
{
MR_string_const("\tDisplay the compiler version.", 30),
MR_TAG_COMMON(1,6,1324)
},
{
MR_string_const("--version", 9),
MR_TAG_COMMON(1,6,1325)
},
{
MR_string_const("\tfunction any further.", 22),
MR_TAG_COMMON(1,6,1326)
},
{
MR_string_const("\treached, the typechecker will not process the predicate or", 59),
MR_TAG_COMMON(1,6,1327)
},
{
MR_string_const("\tabout excessively ambiguous overloading to <n>. If this limit is", 65),
MR_TAG_COMMON(1,6,1328)
},
{
MR_string_const("\tSet the number of type assignments required to generate an error", 65),
MR_TAG_COMMON(1,6,1329)
},
{
MR_string_const("--typecheck-ambiguity-error-limit <n>", 37),
MR_TAG_COMMON(1,6,1330)
},
{
MR_string_const("\twarning about highly ambiguous overloading to <n>.", 51),
MR_TAG_COMMON(1,6,1331)
},
{
MR_string_const("\tSet the number of type assignments required to generate a", 58),
MR_TAG_COMMON(1,6,1332)
},
{
MR_string_const("--typecheck-ambiguity-warn-limit <n>", 36),
MR_TAG_COMMON(1,6,1333)
},
{
MR_string_const("\tcreation for each one.)", 24),
MR_TAG_COMMON(1,6,1334)
},
{
MR_string_const("\tcompile several modules without the overhead of process", 56),
MR_TAG_COMMON(1,6,1335)
},
{
MR_string_const("\tis reached. (This allows a program or user to interactively", 60),
MR_TAG_COMMON(1,6,1336)
},
{
MR_string_const("\tfile name from the standard input. Repeat this until EOF", 57),
MR_TAG_COMMON(1,6,1337)
},
{
MR_string_const("\tRead then compile a newline terminated module name or", 54),
MR_TAG_COMMON(1,6,1338)
},
{
MR_string_const("--filenames-from-stdin", 22),
MR_TAG_COMMON(1,6,1339)
},
{
MR_string_const("\tGet the specification of user-defined events from <filename>.", 62),
MR_tbmkword(0, 0)
},
{
MR_string_const("--event-set-file-name <filename>", 32),
MR_TAG_COMMON(1,6,1341)
},
{
MR_string_const("\tPerform at most <n> passes of mode inference (default: 30).", 60),
MR_TAG_COMMON(1,6,1342)
},
{
MR_string_const("--mode-inference-iteration-limit <n>", 36),
MR_TAG_COMMON(1,6,1343)
},
{
MR_string_const("\tPerform at most <n> passes of type inference (default: 60).", 60),
MR_TAG_COMMON(1,6,1344)
},
{
MR_string_const("--type-inference-iteration-limit <n>", 36),
MR_TAG_COMMON(1,6,1345)
},
{
MR_string_const("\tdon\'t try to infer the determinism, just report an error.", 58),
MR_TAG_COMMON(1,6,1346)
},
{
MR_string_const("\tIf there is no determinism declaration for a procedure,", 56),
MR_TAG_COMMON(1,6,1347)
},
{
MR_string_const("--no-infer-det, --no-infer-determinism", 38),
MR_TAG_COMMON(1,6,1348)
},
{
MR_string_const("\ttry to infer the modes, rather than just reporting an error.", 61),
MR_TAG_COMMON(1,6,1349)
},
{
MR_string_const("\tIf there is no mode declaration for a predicate,", 49),
MR_TAG_COMMON(1,6,1350)
},
{
MR_string_const("--infer-modes", 13),
MR_TAG_COMMON(1,6,1351)
},
{
MR_string_const("\ttry to infer the type, rather than just reporting an error.", 60),
MR_TAG_COMMON(1,6,1352)
},
{
MR_string_const("\tIf there is no type declaration for a predicate or function,", 61),
MR_TAG_COMMON(1,6,1353)
},
{
MR_string_const("--infer-types", 13),
MR_TAG_COMMON(1,6,1354)
},
{
MR_string_const("\tAbbreviation for \140--infer-types --infer-modes --infer-det\'.", 60),
MR_TAG_COMMON(1,6,1355)
},
{
MR_string_const("--infer-all", 11),
MR_TAG_COMMON(1,6,1356)
},
{
MR_string_const("\tin the \"Warning Options\" section.)", 35),
MR_TAG_COMMON(1,6,1357)
},
{
MR_string_const("\t(See also the documentation for the \140--warn-stubs\' option", 58),
MR_TAG_COMMON(1,6,1358)
},
{
MR_string_const("\tThis option is sometimes useful during program development.", 60),
MR_TAG_COMMON(1,6,1359)
},
{
MR_string_const("\tsuch procedures will raise an exception at run-time.", 53),
MR_TAG_COMMON(1,6,1360)
},
{
MR_string_const("\tAllow procedures to have no clauses.  Any calls to", 51),
MR_TAG_COMMON(1,6,1361)
},
{
MR_string_const("--allow-stubs", 13),
MR_TAG_COMMON(1,6,1362)
},
{
MR_string_const("\toptimised away.", 16),
MR_TAG_COMMON(1,6,1363)
},
{
MR_string_const("\tAllow infinite loops or goals with determinism erroneous to be", 63),
MR_TAG_COMMON(1,6,1364)
},
{
MR_string_const("--no-fully-strict", 17),
MR_TAG_COMMON(1,6,1365)
},
{
MR_string_const("\tExecute disjunctions strictly left-to-right.", 45),
MR_TAG_COMMON(1,6,1366)
},
{
MR_string_const("--no-reorder-disj", 17),
MR_TAG_COMMON(1,6,1367)
},
{
MR_string_const("\tthat reordering is unavoidable.", 32),
MR_TAG_COMMON(1,6,1368)
},
{
MR_string_const("\tExecute conjunctions left-to-right except where the modes imply", 64),
MR_TAG_COMMON(1,6,1369)
},
{
MR_string_const("--no-reorder-conj", 17),
MR_TAG_COMMON(1,6,1370)
},
};

static const struct mercury_type_7 mercury_common_7[3] =
{
{
MR_string_const("", 0)
},
{
MR_string_const("argument of \140--linkage\' should be either \"shared\" or \"static\".", 62)
},
{
MR_string_const("argument of \140--mercury-linkage\' should be either \"shared\" or \"static\".", 70)
},
};

extern const MR_TypeCtorInfo_Struct mercury_data_pair__type_ctor_info_pair_2;
extern const MR_TypeCtorInfo_Struct mercury_data_getopt_io__type_ctor_info_option_data_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_string_0;
extern const MR_TypeCtorInfo_Struct mercury_data_tree234__type_ctor_info_tree234_2;
extern const MR_TypeCtorInfo_Struct mercury_data_libs__options__type_ctor_info_option_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_string_0;
extern const MR_TypeCtorInfo_Struct mercury_data_getopt_io__type_ctor_info_option_data_0;
static const struct mercury_type_9 mercury_common_9[5] =
{
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
MR_CTOR0_ADDR(libs__options, option),
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
MR_CTOR0_ADDR(libs__options, option),
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
};

static const MR_UserClosureId
mercury_data__closure_layout__fn__libs__options__option_table_add_mercury_library_directory_2_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__fn__libs__options__option_table_add_search_library_files_directory_2_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__libs__options__special_handler_4_0_1;
static const struct mercury_type_10 mercury_common_10[3] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__fn__libs__options__option_table_add_mercury_library_directory_2_0_1,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_COMMON(9,3),
MR_COMMON(9,4),
MR_COMMON(9,4)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__fn__libs__options__option_table_add_search_library_files_directory_2_0_1,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_COMMON(9,3),
MR_COMMON(9,4),
MR_COMMON(9,4)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__libs__options__special_handler_4_0_1,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_COMMON(9,3),
MR_COMMON(9,4),
MR_COMMON(9,4)
}
},
};

static const struct mercury_type_11 mercury_common_11[3] =
{
{
MR_COMMON(10,0),
MR_ENTRY_AP(fn__libs__options__append_to_accumulating_option_2_0),
0
},
{
MR_COMMON(10,1),
MR_ENTRY_AP(fn__libs__options__append_to_accumulating_option_2_0),
0
},
{
MR_COMMON(10,2),
MR_ENTRY_AP(fn__libs__options__append_to_accumulating_option_2_0),
0
},
};

static const struct mercury_type_1 mercury_vector_common_1_0[58] =
{
{
609
},
{
0
},
{
0
},
{
0
},
{
89
},
{
129
},
{
41
},
{
0
},
{
0
},
{
225
},
{
598
},
{
0
},
{
0
},
{
506
},
{
83
},
{
51
},
{
298
},
{
86
},
{
0
},
{
507
},
{
47
},
{
50
},
{
0
},
{
40
},
{
0
},
{
0
},
{
0
},
{
0
},
{
0
},
{
0
},
{
0
},
{
0
},
{
0
},
{
0
},
{
0
},
{
0
},
{
90
},
{
126
},
{
88
},
{
81
},
{
0
},
{
609
},
{
75
},
{
577
},
{
575
},
{
508
},
{
574
},
{
120
},
{
501
},
{
167
},
{
0
},
{
576
},
{
154
},
{
87
},
{
0
},
{
39
},
{
0
},
{
80
},
};

static const struct mercury_type_2 mercury_vector_common_2_0[2048] =
{
{
MR_string_const("pic-reg", 7),
-1
},
{
MR_string_const("reclaim-heap-on-nondet-failure", 30),
-1
},
{
MR_string_const("lib-linkage", 11),
-1
},
{
MR_string_const("generate-source-file-mapping", 28),
5
},
{
MR_string_const("warn-table-with-inline", 22),
1
},
{
MR_string_const("erlang-native-code", 18),
-1
},
{
MR_string_const("readline-libs", 13),
-1
},
{
MR_string_const("analysis-repeat", 15),
-1
},
{
MR_string_const("analyse-local-closures", 22),
-1
},
{
MR_string_const("optimize-format-calls", 21),
-1
},
{
MR_string_const("debug-liveness", 14),
12
},
{
MR_string_const("optimize-dups", 13),
-1
},
{
MR_string_const("auto-comments", 13),
-1
},
{
MR_string_const("higher-order-arg-limit", 22),
3
},
{
MR_string_const("library-extension", 17),
-1
},
{
MR_string_const("term-single-arg", 15),
-1
},
{
MR_string_const("dotnet-library-version", 22),
-1
},
{
MR_string_const("java-object-file-extension", 26),
-1
},
{
MR_string_const("type-ctor-info", 14),
-1
},
{
MR_string_const("local-constraint-propagation", 28),
-1
},
{
MR_string_const("keep-going", 10),
-1
},
{
MR_string_const("size-region-ite-snapshot", 24),
-1
},
{
MR_string_const("erlang", 6),
-1
},
{
MR_string_const("simple-mode-constraints", 23),
-1
},
{
MR_string_const("cflags-for-warnings", 19),
-1
},
{
MR_string_const("trace-stack-layout", 18),
29
},
{
MR_string_const("termination-path-limit", 22),
-1
},
{
MR_string_const("optimize-saved-vars-const", 25),
-1
},
{
MR_string_const("debug-types", 11),
-1
},
{
MR_string_const("pretest-equality-cast-pointers", 30),
-1
},
{
MR_string_const("dump-hlds-alias", 15),
-1
},
{
MR_string_const("profile-deep-coverage-use-portcounts", 36),
-1
},
{
MR_string_const("warn-unification-cannot-succeed", 31),
-1
},
{
MR_string_const("common-goal", 11),
-1
},
{
MR_string_const("shlib-linker-rpath-flag", 23),
-1
},
{
MR_string_const("profile-optimised", 17),
-1
},
{
MR_string_const("checked-nondet-tailcalls", 24),
-1
},
{
MR_string_const("disable-trail-ops", 17),
38
},
{
MR_string_const("chk-term", 8),
-1
},
{
MR_string_const("debug-intermodule-analysis", 26),
-1
},
{
MR_string_const("asm-labels", 10),
-1
},
{
MR_string_const("c-optimize", 10),
-1
},
{
MR_string_const("chk-term2", 9),
-1
},
{
MR_string_const("detailed-statistics", 19),
-1
},
{
MR_string_const("arg-size-analysis-only", 22),
-1
},
{
MR_string_const("IL-only", 7),
-1
},
{
MR_string_const("mld", 3),
-1
},
{
MR_string_const("type-ctor-layout", 16),
-1
},
{
MR_string_const("common-struct", 13),
-1
},
{
MR_string_const("verbose-check-termination", 25),
-1
},
{
MR_string_const("middle-rec", 10),
-1
},
{
MR_string_const("pic-object-file-extension", 25),
-1
},
{
MR_string_const("convert-to-Mercury", 18),
-1
},
{
MR_string_const("optimize-space", 14),
54
},
{
MR_string_const("dump-hlds-options", 17),
-1
},
{
MR_string_const("bug-intermod-2002-06-13", 23),
-1
},
{
MR_string_const("extra-init-command", 18),
-1
},
{
MR_string_const("optimize-peep", 13),
-1
},
{
MR_string_const("csharp-compiler", 15),
-1
},
{
MR_string_const("inline-par-builtins", 19),
-1
},
{
MR_string_const("make-short-int", 14),
-1
},
{
MR_string_const("inline-vars-threshold", 21),
-1
},
{
MR_string_const("proc-size-statistics", 20),
63
},
{
MR_string_const("follow-code", 11),
-1
},
{
MR_string_const("dense-switch-req-density", 24),
-1
},
{
MR_string_const("mkinit-erl-command", 18),
-1
},
{
MR_string_const("optimize-saved-vars", 19),
-1
},
{
MR_string_const("restricted-command-line", 23),
-1
},
{
MR_string_const("output-cc", 9),
69
},
{
MR_string_const("osv-cvstore-cost", 16),
-1
},
{
MR_string_const("force-disable-tracing", 21),
-1
},
{
MR_string_const("mode-constraints", 16),
-1
},
{
MR_string_const("use-regions-debug", 17),
6
},
{
MR_string_const("debug-modes", 11),
-1
},
{
MR_string_const("conf-low-tag-bits", 17),
-1
},
{
MR_string_const("output-library-link-flags", 25),
-1
},
{
MR_string_const("java-only", 9),
-1
},
{
MR_string_const("assume-gmake", 12),
-1
},
{
MR_string_const("separate-assemblies", 19),
-1
},
{
MR_string_const("new-type-class-rtti", 19),
-1
},
{
MR_string_const("debug-modes-statistics", 22),
-1
},
{
MR_string_const("IL-funcptr-types", 16),
-1
},
{
MR_string_const("num-real-r-regs", 15),
-1
},
{
MR_string_const("deep-profiling", 14),
-1
},
{
MR_string_const("profile-deep-coverage-branch-switch", 35),
-1
},
{
MR_string_const("intermodule-analysis", 20),
-1
},
{
MR_string_const("make-private-interface", 22),
87
},
{
MR_string_const("linker-link-lib-suffix", 22),
-1
},
{
MR_string_const("bug-foreign_import-2002-08-06", 29),
-1
},
{
MR_string_const("always-specialize-in-dep-par-conjs", 34),
-1
},
{
MR_string_const("output-file", 11),
91
},
{
MR_string_const("dense-switch-size", 17),
-1
},
{
MR_string_const("garbage-collection", 18),
-1
},
{
MR_string_const("infer-types", 11),
-1
},
{
MR_string_const("install-command-dir-option", 26),
-1
},
{
MR_string_const("optimise-constructor-last-call-accumulator", 42),
-1
},
{
MR_string_const("optimize-fulljumps", 18),
97
},
{
MR_string_const("analyse-mm-tabling", 18),
-1
},
{
MR_string_const("libgrades-include", 17),
-1
},
{
MR_string_const("feedback-file", 13),
-1
},
{
MR_string_const("compile-only", 12),
-1
},
{
MR_string_const("linker-link-lib-flag", 20),
-1
},
{
MR_string_const("time-profiling", 14),
-1
},
{
MR_string_const("optimize-tailcalls", 18),
-1
},
{
MR_string_const("deforestation", 13),
-1
},
{
MR_string_const("profile-memory", 14),
-1
},
{
MR_string_const("java-debug", 10),
-1
},
{
MR_string_const("num-real-f-regs", 15),
-1
},
{
MR_string_const("Java-only", 9),
-1
},
{
MR_string_const("profile-for-implicit-parallelism", 32),
-1
},
{
MR_string_const("shlib-linker-debug-flags", 24),
-1
},
{
MR_string_const("linker-path-flag", 16),
-1
},
{
MR_string_const("ctgc", 4),
-1
},
{
MR_string_const("libgrade-install-check", 22),
-1
},
{
MR_string_const("implicit-parallelism", 20),
-1
},
{
MR_string_const("debug-term", 10),
-1
},
{
MR_string_const("filenames-from-stdin", 20),
8
},
{
MR_string_const("linkage", 7),
-1
},
{
MR_string_const("common-layout-data", 18),
120
},
{
MR_string_const("target", 6),
-1
},
{
MR_string_const("Erlang", 6),
-1
},
{
MR_string_const("enable-termination2", 19),
-1
},
{
MR_string_const("debug-indirect-reuse", 20),
-1
},
{
MR_string_const("opt-no-return-calls", 19),
-1
},
{
MR_string_const("output-compile-error-lines", 26),
-1
},
{
MR_string_const("allow-undefined", 15),
-1
},
{
MR_string_const("use-readline", 12),
9
},
{
MR_string_const("java-compiler", 13),
-1
},
{
MR_string_const("extra-initialization-functions", 30),
-1
},
{
MR_string_const("create-archive-command-output-flag", 34),
-1
},
{
MR_string_const("verifiable-code", 15),
-1
},
{
MR_string_const("use-macro-for-redo-fail", 23),
-1
},
{
MR_string_const("pic", 3),
-1
},
{
MR_string_const("output-libgrades", 16),
-1
},
{
MR_string_const("check-term2", 11),
-1
},
{
MR_string_const("high-level-data", 15),
-1
},
{
MR_string_const("optimize-duplicate-calls", 24),
-1
},
{
MR_string_const("opt-space", 9),
-1
},
{
MR_string_const("cflag", 5),
-1
},
{
MR_string_const("experiment", 10),
-1
},
{
MR_string_const("linker-rpath-flag", 17),
-1
},
{
MR_string_const("high-level-c", 12),
-1
},
{
MR_string_const("inline-simple", 13),
-1
},
{
MR_string_const("main", 4),
10
},
{
MR_string_const("reorder-conj", 12),
-1
},
{
MR_string_const("debug-modes-pred-id", 19),
-1
},
{
MR_string_const("lexically-order-constructors", 28),
147
},
{
MR_string_const("binary-switch-size", 18),
-1
},
{
MR_string_const("c-optimise", 10),
-1
},
{
MR_string_const("no-noncompact-ho-call-2004-01-15", 32),
-1
},
{
MR_string_const("size-region-disj-fixed", 22),
151
},
{
MR_string_const("deforestation-depth-limit", 25),
-1
},
{
MR_string_const("erlang-flag", 11),
-1
},
{
MR_string_const("mercury-config-dir", 18),
156
},
{
MR_string_const("reclaim-heap-on-failure", 23),
14
},
{
MR_string_const("tuple-min-args", 14),
-1
},
{
MR_string_const("debug-pd", 8),
-1
},
{
MR_string_const("install-opt-files-2002-08-30", 28),
-1
},
{
MR_string_const("high-level-code", 15),
-1
},
{
MR_string_const("make-xml-doc", 12),
-1
},
{
MR_string_const("generate-bytecode", 17),
-1
},
{
MR_string_const("structure-reuse-free-cells", 26),
-1
},
{
MR_string_const("verbose-recompilation", 21),
163
},
{
MR_string_const("IL-byref-tailcalls", 18),
-1
},
{
MR_string_const("inlining", 8),
-1
},
{
MR_string_const("trace-table-io-states", 21),
-1
},
{
MR_string_const("debug-il-asm", 12),
-1
},
{
MR_string_const("common-struct-preds", 19),
-1
},
{
MR_string_const("osv-fvstore-cost", 16),
-1
},
{
MR_string_const("verb-check-term2", 16),
-1
},
{
MR_string_const("config-file", 11),
-1
},
{
MR_string_const("mercury-standard-library-directory", 34),
-1
},
{
MR_string_const("halt-at-warn", 12),
-1
},
{
MR_string_const("ilasm-flags", 11),
-1
},
{
MR_string_const("delay-death", 11),
-1
},
{
MR_string_const("use-grade-subdirs", 17),
15
},
{
MR_string_const("tuple", 5),
-1
},
{
MR_string_const("det-copy-out", 12),
-1
},
{
MR_string_const("c-debug", 7),
-1
},
{
MR_string_const("link-object", 11),
16
},
{
MR_string_const("debug-make", 10),
-1
},
{
MR_string_const("mercury-linkage", 15),
-1
},
{
MR_string_const("failing-disjunct-in-switch-dup-fix", 34),
-1
},
{
MR_string_const("common-data", 11),
-1
},
{
MR_string_const("deforestation-vars-threshold", 28),
-1
},
{
MR_string_const("introduce-accumulators", 22),
-1
},
{
MR_string_const("output-grade-string", 19),
-1
},
{
MR_string_const("optimise-constructor-last-call", 30),
-1
},
{
MR_string_const("generate-mmc-make-module-dependencies", 37),
-1
},
{
MR_string_const("foreign-enum-switch-fix", 23),
-1
},
{
(MR_String) (MR_Integer) 0,
-2
},
{
MR_string_const("unboxed-float", 13),
-1
},
{
(MR_String) (MR_Integer) 0,
-2
},
{
MR_string_const("term2-propagate-failure-constrs", 31),
17
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
MR_string_const("make", 4),
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
MR_string_const("parallel-liveness", 17),
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
MR_string_const("optimise-higher-order", 21),
19
},
{
(MR_String) (MR_Integer) 0,
-2
},
{
MR_string_const("size-region-ite-protect", 23),
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
MR_string_const("warn-duplicate-calls", 20),
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
MR_string_const("thread-libs", 11),
21
},
{
MR_string_const("loop-invariants", 15),
-1
},
{
(MR_String) (MR_Integer) 0,
-2
},
{
MR_string_const("everything-in-one-c-function", 28),
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
MR_string_const("make-interface", 14),
-1
},
{
MR_string_const("inline-alloc", 12),
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
MR_string_const("warn-wrong-module-name", 22),
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
MR_string_const("verbose-commands", 16),
-1
},
{
MR_string_const("make-int", 8),
-1
},
{
MR_string_const("warn-det-decls-too-lax", 22),
22
},
{
MR_string_const("warn-suspicious-foreign-procs", 29),
-1
},
{
(MR_String) (MR_Integer) 0,
-2
},
{
MR_string_const("target-code-only", 16),
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
MR_string_const("erlang-switch-on-strings-as-atoms", 33),
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
MR_string_const("erlang-include-dir", 18),
-1
},
{
MR_string_const("fullarch", 8),
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
MR_string_const("deforestation-size-threshold", 28),
-1
},
{
MR_string_const("term2-widening-limit", 20),
23
},
{
MR_string_const("force-disable-ssdebug", 21),
24
},
{
MR_string_const("term2-max-matrix-size", 21),
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
MR_string_const("demangle-command", 16),
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
MR_string_const("cflags", 6),
-1
},
{
MR_string_const("dump-hlds", 9),
-1
},
{
MR_string_const("java-classpath", 14),
-1
},
{
MR_string_const("num-real-temps", 14),
-1
},
{
MR_string_const("trace-optimized", 15),
-1
},
{
MR_string_const("profile-time", 12),
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
MR_string_const("trace-table-io-all", 18),
25
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
MR_string_const("read-config-file-2003-03-01", 27),
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
MR_string_const("check-term", 10),
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
MR_string_const("install-prefix", 14),
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
MR_string_const("profile-deep-coverage-branch-ite", 32),
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
MR_string_const("inline-compound-threshold", 25),
30
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
MR_string_const("fixed-user-guided-type-specialization", 37),
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
MR_string_const("extra-library-header", 20),
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
MR_string_const("unneeded-code-debug-pred-name", 29),
-1
},
{
(MR_String) (MR_Integer) 0,
-2
},
{
MR_string_const("trace-table-io", 14),
-1
},
{
MR_string_const("library", 7),
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
MR_string_const("make-trans-opt", 14),
-1
},
{
(MR_String) (MR_Integer) 0,
-2
},
{
MR_string_const("pre-prof-transforms-simplify", 28),
-1
},
{
MR_string_const("num-reserved-objects", 20),
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
MR_string_const("runtime-flags", 13),
-1
},
{
MR_string_const("allow-some-paths-only-waits", 27),
-1
},
{
MR_string_const("demangle", 8),
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
MR_string_const("highlevel-data", 14),
-1
},
{
(MR_String) (MR_Integer) 0,
-2
},
{
MR_string_const("size-region-semi-disj-protect", 29),
-1
},
{
MR_string_const("delay-constructs", 16),
33
},
{
MR_string_const("unboxed-enums", 13),
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
MR_string_const("infer-all", 9),
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
MR_string_const("c-compiler-type", 15),
-1
},
{
MR_string_const("generate-trail-ops-inline", 25),
-1
},
{
(MR_String) (MR_Integer) 0,
-2
},
{
MR_string_const("lookup-switch-req-density", 25),
-1
},
{
(MR_String) (MR_Integer) 0,
-2
},
{
MR_string_const("basic-stack-layout", 18),
-1
},
{
(MR_String) (MR_Integer) 0,
-2
},
{
MR_string_const("erlang-include-directory", 24),
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
MR_string_const("osv-on-stack", 12),
-1
},
{
(MR_String) (MR_Integer) 0,
-2
},
{
MR_string_const("dump-same-hlds", 14),
37
},
{
MR_string_const("old-implicit-parallelism", 24),
-1
},
{
MR_string_const("c-include-dir", 13),
40
},
{
MR_string_const("distance-granularity", 20),
-1
},
{
(MR_String) (MR_Integer) 0,
-2
},
{
MR_string_const("profile-deep-coverage-branch-disj", 33),
-1
},
{
MR_string_const("verbose-mlds-dump", 17),
-1
},
{
MR_string_const("debug-determinism", 17),
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
MR_string_const("make-transitive-optimisation-interface", 38),
-1
},
{
(MR_String) (MR_Integer) 0,
-2
},
{
MR_string_const("parallel-code-gen", 17),
-1
},
{
(MR_String) (MR_Integer) 0,
-2
},
{
MR_string_const("highlevel-C", 11),
-1
},
{
MR_string_const("shlib-linker-install-name-path", 30),
-1
},
{
(MR_String) (MR_Integer) 0,
-2
},
{
MR_string_const("infer-modes", 11),
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
MR_string_const("ld-libflag", 10),
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
MR_string_const("debug-modes-verbose", 19),
-1
},
{
(MR_String) (MR_Integer) 0,
-2
},
{
MR_string_const("tag-switch-size", 15),
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
MR_string_const("highlevel-c", 11),
41
},
{
MR_string_const("optimise-proc-dups", 18),
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
MR_string_const("warn-non-term-special-preds", 27),
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
MR_string_const("cflags-for-threads", 18),
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
MR_string_const("control-granularity", 19),
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
MR_string_const("parallelism-target", 18),
-1
},
{
MR_string_const("cflags-for-pic", 14),
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
MR_string_const("mkinit-command", 14),
42
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
MR_string_const("gcc-non-local-gotos", 19),
45
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
MR_string_const("optimise-jumps", 14),
-1
},
{
(MR_String) (MR_Integer) 0,
-2
},
{
MR_string_const("procid-stack-layout", 19),
-1
},
{
MR_string_const("c-include-directory", 19),
-1
},
{
MR_string_const("warn-missing-module-name", 24),
46
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
MR_string_const("library-directory", 17),
-1
},
{
MR_string_const("analysis-file-cache", 19),
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
MR_string_const("optimize-dead-procs", 19),
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
MR_string_const("analyse-exceptions", 18),
-1
},
{
(MR_String) (MR_Integer) 0,
-2
},
{
MR_string_const("use-minimal-model-own-stacks", 28),
47
},
{
(MR_String) (MR_Integer) 0,
-2
},
{
MR_string_const("optimise-dead-procs", 19),
48
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
MR_string_const("warn-insts-without-matching-type", 32),
50
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
MR_string_const("termination2-norm", 17),
51
},
{
(MR_String) (MR_Integer) 0,
-2
},
{
MR_string_const("termination-single-argument-analysis", 36),
-1
},
{
(MR_String) (MR_Integer) 0,
-2
},
{
MR_string_const("output-shared-lib-link-command", 30),
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
(MR_String) (MR_Integer) 0,
-2
},
{
(MR_String) (MR_Integer) 0,
-2
},
{
MR_string_const("generate-standalone-interface", 29),
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
MR_string_const("x86_64-only", 11),
52
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
MR_string_const("osv-cvload-cost", 15),
-1
},
{
MR_string_const("profile-deep", 12),
53
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
MR_string_const("optimisation-level", 18),
55
},
{
MR_string_const("trad-passes", 11),
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
MR_string_const("output-link-command", 19),
-1
},
{
MR_string_const("verbose-error-messages", 22),
-1
},
{
(MR_String) (MR_Integer) 0,
-2
},
{
MR_string_const("linker-allow-undefined-flag", 27),
-1
},
{
(MR_String) (MR_Integer) 0,
-2
},
{
MR_string_const("profile-deep-coverage-after-goal", 32),
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
MR_string_const("tuple-trace-counts-file", 23),
56
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
MR_string_const("init-file", 9),
-1
},
{
MR_string_const("convert-to-mercury", 18),
-1
},
{
MR_string_const("mercury-library", 15),
-1
},
{
MR_string_const("shared-libs", 11),
-1
},
{
MR_string_const("erlang-inhibit-trivial-warnings", 31),
-1
},
{
MR_string_const("cflags-for-ansi", 15),
-1
},
{
MR_string_const("optimize-region-ops", 19),
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
MR_string_const("disable-mm-pneg", 15),
-1
},
{
MR_string_const("errorcheck-only", 15),
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
MR_string_const("warn-unused-imports", 19),
59
},
{
(MR_String) (MR_Integer) 0,
-2
},
{
MR_string_const("size-region-commit-entry", 24),
60
},
{
MR_string_const("pretty-print", 12),
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
MR_string_const("max-jump-table-size", 19),
-1
},
{
(MR_String) (MR_Integer) 0,
-2
},
{
MR_string_const("optimise-constant-propagation", 29),
-1
},
{
(MR_String) (MR_Integer) 0,
-2
},
{
MR_string_const("create-archive-command", 22),
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
MR_string_const("search-lib-files-dir", 20),
62
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
MR_string_const("fully-strict", 12),
64
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
MR_string_const("region-analysis", 15),
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
MR_string_const("erlang-interpreter", 18),
-1
},
{
MR_string_const("trace-io-builtins-2006-08-14", 28),
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
MR_string_const("optimise-saved-vars", 19),
-1
},
{
(MR_String) (MR_Integer) 0,
-2
},
{
MR_string_const("use-activation-counts", 21),
65
},
{
MR_string_const("optimize-reassign", 17),
-1
},
{
(MR_String) (MR_Integer) 0,
-2
},
{
MR_string_const("emit-c-loops", 12),
-1
},
{
(MR_String) (MR_Integer) 0,
-2
},
{
MR_string_const("c-flag-to-name-object-file", 26),
-1
},
{
MR_string_const("osv-op-ratio", 12),
-1
},
{
MR_string_const("warn-simple-code", 16),
66
},
{
(MR_String) (MR_Integer) 0,
-2
},
{
MR_string_const("use-atomic-cells", 16),
68
},
{
(MR_String) (MR_Integer) 0,
-2
},
{
MR_string_const("make-optimization-interface", 27),
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
MR_string_const("support-ms-clr", 14),
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
MR_string_const("init-file-directory", 19),
-1
},
{
(MR_String) (MR_Integer) 0,
-2
},
{
MR_string_const("mercury-library-directory", 25),
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
MR_string_const("term-err-limit", 14),
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
MR_string_const("warn-undefined-options-variables", 32),
70
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
MR_string_const("debug-stack-opt", 15),
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
MR_string_const("warn-missing-trans-opt-deps", 27),
-1
},
{
MR_string_const("profiling", 9),
-1
},
{
MR_string_const("transitive-intermodule-optimisation", 35),
71
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
MR_string_const("term-norm", 9),
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
MR_string_const("il-byref-tailcalls", 18),
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
MR_string_const("erlang-only", 11),
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
MR_string_const("osv-node-ratio", 14),
-1
},
{
(MR_String) (MR_Integer) 0,
-2
},
{
MR_string_const("should-pretest-equality", 23),
73
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
MR_string_const("optimize-constructor-last-call", 30),
-1
},
{
MR_string_const("cflags-for-regs", 15),
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
MR_string_const("verbose-dump-mlds", 17),
-1
},
{
MR_string_const("debug-mode-constraints", 22),
74
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
MR_string_const("optimize-frames", 15),
-1
},
{
MR_string_const("track-flags", 11),
-1
},
{
MR_string_const("mutable-always-boxed", 20),
-1
},
{
MR_string_const("shlib-linker-rpath-separator", 28),
77
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
MR_string_const("optimise-frames", 15),
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
MR_string_const("object-file-extension", 21),
-1
},
{
(MR_String) (MR_Integer) 0,
-2
},
{
MR_string_const("Erlang-only", 11),
-1
},
{
MR_string_const("ssdb", 4),
-1
},
{
MR_string_const("typecheck-ambiguity-warn-limit", 30),
78
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
MR_string_const("benchmark-modes-repeat", 22),
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
MR_string_const("erlang-compiler", 15),
80
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
MR_string_const("warn-smart-recompilation", 24),
-1
},
{
MR_string_const("use-local-vars", 14),
81
},
{
(MR_String) (MR_Integer) 0,
-2
},
{
MR_string_const("use-search-directories-for-intermod", 35),
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
MR_string_const("switch-multi-rec-base-first", 27),
-1
},
{
(MR_String) (MR_Integer) 0,
-2
},
{
MR_string_const("verbose", 7),
-1
},
{
MR_string_const("nondet-copy-out", 15),
-1
},
{
MR_string_const("optimise-unused-args", 20),
82
},
{
MR_string_const("link-executable-command", 23),
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
MR_string_const("num-reserved-addresses", 22),
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
MR_string_const("fact-table-hash-percent-full", 28),
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
MR_string_const("minimal-model-debug", 19),
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
MR_string_const("debug-modes-minimal", 19),
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
MR_string_const("debug-dep-par-conj", 18),
-1
},
{
(MR_String) (MR_Integer) 0,
-2
},
{
MR_string_const("make-opt-int", 12),
-1
},
{
MR_string_const("support-rotor-clr", 17),
-1
},
{
(MR_String) (MR_Integer) 0,
-2
},
{
MR_string_const("polymorphism", 12),
83
},
{
MR_string_const("libgrade", 8),
-1
},
{
(MR_String) (MR_Integer) 0,
-2
},
{
MR_string_const("termination2-propagate-failure-constraints", 42),
86
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
MR_string_const("debug-det", 9),
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
MR_string_const("lookup-switch-size", 18),
-1
},
{
MR_string_const("record-term-sizes-as-cells", 26),
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
MR_string_const("debug-mm-tabling-analysis", 25),
-1
},
{
MR_string_const("x86_64", 6),
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
MR_string_const("inhibit-accumulator-warnings", 28),
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
MR_string_const("coverage-profiling", 18),
88
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
MR_string_const("compile-to-C", 12),
-1
},
{
(MR_String) (MR_Integer) 0,
-2
},
{
MR_string_const("warn-nothing-exported", 21),
89
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
MR_string_const("enable-termination", 18),
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
MR_string_const("dump-hlds-pred-id", 17),
-1
},
{
MR_string_const("unboxed-no-tag-types", 20),
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
MR_string_const("compare-specialization", 22),
-1
},
{
MR_string_const("branch-delay-slot", 17),
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
MR_string_const("strict-sequential", 17),
-1
},
{
MR_string_const("x86-64", 6),
90
},
{
MR_string_const("record-term-sizes-as-words", 26),
-1
},
{
MR_string_const("trans-intermod-opt", 18),
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
MR_string_const("compile-to-c", 12),
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
MR_string_const("show-make-times", 15),
-1
},
{
MR_string_const("warn-non-contiguous-clauses", 27),
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
MR_string_const("deep-profile-tail-recursion", 27),
-1
},
{
MR_string_const("optimise-delay-slot", 19),
-1
},
{
MR_string_const("shlib-linker-use-install-name", 29),
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
MR_string_const("optimize-delay-slot", 19),
93
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
MR_string_const("make-xml-documentation", 22),
-1
},
{
(MR_String) (MR_Integer) 0,
-2
},
{
MR_string_const("transitive-intermodule-optimization", 35),
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
MR_string_const("can-compare-compound-values", 27),
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
MR_string_const("use-zeroing-for-ho-cycles", 25),
-1
},
{
MR_string_const("debug-code-gen-pred-id", 22),
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
MR_string_const("linker-debug-flags", 18),
-1
},
{
(MR_String) (MR_Integer) 0,
-2
},
{
MR_string_const("java-archive-command", 20),
94
},
{
MR_string_const("warn-stubs", 10),
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
MR_string_const("trace-libs", 10),
95
},
{
MR_string_const("suppress-trace", 14),
-1
},
{
(MR_String) (MR_Integer) 0,
-2
},
{
MR_string_const("extra-inits", 11),
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
MR_string_const("shlib-linker-link-lib-flag", 26),
-1
},
{
(MR_String) (MR_Integer) 0,
-2
},
{
MR_string_const("low-level-debug", 15),
-1
},
{
(MR_String) (MR_Integer) 0,
-2
},
{
MR_string_const("flags-file", 10),
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
MR_string_const("make-priv-int", 13),
-1
},
{
MR_string_const("procs-per-C-function", 20),
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
MR_string_const("erlang-object-file-extension", 28),
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
MR_string_const("source-to-source-debug", 22),
-1
},
{
(MR_String) (MR_Integer) 0,
-2
},
{
MR_string_const("make-analysis-registry", 22),
-1
},
{
(MR_String) (MR_Integer) 0,
-2
},
{
MR_string_const("linker-opt-separator", 20),
-1
},
{
MR_string_const("structure-sharing-widening", 26),
-1
},
{
(MR_String) (MR_Integer) 0,
-2
},
{
MR_string_const("Java", 4),
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
MR_string_const("linker-trace-flags", 18),
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
MR_string_const("single-prec-float", 17),
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
MR_string_const("IL-refany-fields", 16),
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
MR_string_const("try-switch-size", 15),
-1
},
{
MR_string_const("bits-per-word", 13),
-1
},
{
MR_string_const("strip", 5),
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
MR_string_const("trail-segments", 14),
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
MR_string_const("optimize-unused-args", 20),
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
MR_string_const("smart-recompilation", 19),
-1
},
{
(MR_String) (MR_Integer) 0,
-2
},
{
MR_string_const("use-lots-of-ho-specialization", 29),
-1
},
{
(MR_String) (MR_Integer) 0,
-2
},
{
MR_string_const("stack-segments", 14),
-1
},
{
MR_string_const("find-all-recompilation-reasons", 30),
-1
},
{
(MR_String) (MR_Integer) 0,
-2
},
{
MR_string_const("exec-trace-tail-rec", 19),
-1
},
{
MR_string_const("structure-sharing", 17),
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
MR_string_const("smart-indexing", 14),
96
},
{
MR_string_const("benchmark-modes", 15),
-1
},
{
MR_string_const("delay-partial-instantiations", 28),
-1
},
{
(MR_String) (MR_Integer) 0,
-2
},
{
MR_string_const("intermod-opt", 12),
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
MR_string_const("shared-library-extension", 24),
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
MR_string_const("deforestation-cost-factor", 25),
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
MR_string_const("optimize-constructor-last-call-null", 35),
98
},
{
MR_string_const("optimise-dups", 13),
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
MR_string_const("optimise-constructor-last-call-null", 35),
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
MR_string_const("inform-ite-instead-of-switch", 28),
-1
},
{
MR_string_const("gcc-nested-functions", 20),
99
},
{
MR_string_const("string-switch-size", 18),
-1
},
{
MR_string_const("ilasm-flag", 10),
-1
},
{
MR_string_const("optimise-saved-vars-const", 25),
-1
},
{
(MR_String) (MR_Integer) 0,
-2
},
{
MR_string_const("ctgc-constraint", 15),
-1
},
{
(MR_String) (MR_Integer) 0,
-2
},
{
MR_string_const("ld-libflags", 11),
-1
},
{
(MR_String) (MR_Integer) 0,
-2
},
{
MR_string_const("unneeded-code-copy-limit", 24),
102
},
{
MR_string_const("osv-full-path", 13),
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
MR_string_const("library-linkage", 15),
-1
},
{
MR_string_const("allow-multi-arm-switches", 24),
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
MR_string_const("user-guided-type-specialisation", 31),
-1
},
{
MR_string_const("type-ctor-functors", 18),
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
MR_string_const("profile-optimized", 17),
-1
},
{
MR_string_const("x86-64-only", 11),
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
MR_string_const("optimise-peep", 13),
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
MR_string_const("debug-termination", 17),
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
MR_string_const("shlib-linker-trace-flags", 24),
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
MR_string_const("infer-det", 9),
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
MR_string_const("warn-missing-opt-files", 22),
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
MR_string_const("ld-flag", 7),
-1
},
{
MR_string_const("size-region-commit-fixed", 24),
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
MR_string_const("analyse-closures", 16),
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
MR_string_const("reclaim-heap-on-semidet-failure", 31),
-1
},
{
MR_string_const("term-path-limit", 15),
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
MR_string_const("bytes-per-word", 14),
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
MR_string_const("cc", 2),
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
MR_string_const("optimize-trail-usage", 20),
106
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
MR_string_const("erlang-flags", 12),
-1
},
{
MR_string_const("termination-error-limit", 23),
109
},
{
(MR_String) (MR_Integer) 0,
-2
},
{
MR_string_const("typecheck-ambiguity-error-limit", 31),
110
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
MR_string_const("static-ground-terms", 19),
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
MR_string_const("javac", 5),
-1
},
{
(MR_String) (MR_Integer) 0,
-2
},
{
MR_string_const("compile-to-shared-lib", 21),
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
MR_string_const("warn-unknown-format-calls", 25),
-1
},
{
MR_string_const("use-trail", 9),
-1
},
{
MR_string_const("structure-reuse-max-conditions", 30),
111
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
MR_string_const("extend-stacks-when-needed", 25),
-1
},
{
MR_string_const("csharp-flag", 11),
-1
},
{
(MR_String) (MR_Integer) 0,
-2
},
{
MR_string_const("use-regions-profiling", 21),
-1
},
{
(MR_String) (MR_Integer) 0,
-2
},
{
MR_string_const("help", 4),
-1
},
{
(MR_String) (MR_Integer) 0,
-2
},
{
MR_string_const("optimize-proc-dups", 18),
112
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
MR_string_const("check-termination2", 18),
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
MR_string_const("delay-construct", 15),
-1
},
{
MR_string_const("order-make-by-timestamp", 23),
113
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
MR_string_const("linker-strip-flag", 17),
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
MR_string_const("can-compare-constants-as-ints", 29),
-1
},
{
MR_string_const("intermodule-optimization", 24),
114
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
MR_string_const("gcc-local-labels", 16),
-1
},
{
MR_string_const("make-transitive-optimization-interface", 38),
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
MR_string_const("intermod-directory", 18),
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
MR_string_const("disable-mm-cut", 14),
115
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
MR_string_const("type-specialisation", 19),
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
MR_string_const("num-tag-bits", 12),
117
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
MR_string_const("warn-unresolved-polymorphism", 28),
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
MR_string_const("optimize-jumps", 14),
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
MR_string_const("optimise-duplicate-calls", 24),
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
MR_string_const("verb-chk-term2", 14),
-1
},
{
MR_string_const("experimental-complexity", 23),
-1
},
{
MR_string_const("libgrades-exclude-component", 27),
-1
},
{
MR_string_const("java-flag", 9),
-1
},
{
MR_string_const("eliminate-local-vars", 20),
118
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
MR_string_const("optimize-higher-order", 21),
122
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
MR_string_const("structure-reuse-constraint", 26),
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
MR_string_const("gc", 2),
-1
},
{
MR_string_const("shlib-linker-link-lib-suffix", 28),
-1
},
{
MR_string_const("num-real-f-temps", 16),
-1
},
{
(MR_String) (MR_Integer) 0,
-2
},
{
MR_string_const("warn-non-stratification", 23),
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
MR_string_const("trace-table-io-require", 22),
123
},
{
MR_string_const("store-at-ref-impure-2008-09-11", 30),
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
MR_string_const("cflags-for-gotos", 16),
-1
},
{
MR_string_const("constraint-propagation", 22),
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
MR_string_const("num-real-r-temps", 16),
-1
},
{
MR_string_const("from-ground-term-threshold", 26),
-1
},
{
(MR_String) (MR_Integer) 0,
-2
},
{
MR_string_const("everything-in-one-C-function", 28),
-1
},
{
MR_string_const("verbose-check-termination2", 26),
-1
},
{
MR_string_const("java-interpreter", 16),
125
},
{
MR_string_const("backend-foreign-languages", 25),
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
MR_string_const("term2-norm", 10),
128
},
{
(MR_String) (MR_Integer) 0,
-2
},
{
MR_string_const("standardize-labels", 18),
-1
},
{
(MR_String) (MR_Integer) 0,
-2
},
{
MR_string_const("typecheck-only", 14),
-1
},
{
MR_string_const("user-guided-type-specialization", 31),
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
MR_string_const("standardise-labels", 18),
-1
},
{
MR_string_const("switch-single-rec-base-first", 28),
-1
},
{
MR_string_const("jobs", 4),
129
},
{
MR_string_const("special-preds", 13),
-1
},
{
MR_string_const("ld-flags", 8),
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
MR_string_const("trace-optimised", 15),
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
MR_string_const("flags", 5),
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
MR_string_const("put-nondet-env-on-heap", 22),
-1
},
{
MR_string_const("halt-at-syntax-errors", 21),
-1
},
{
MR_string_const("line-numbers", 12),
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
MR_string_const("warn-up-to-date", 15),
-1
},
{
MR_string_const("linker-rpath-separator", 22),
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
MR_string_const("il", 2),
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
MR_string_const("mercury-stdlib-dir", 18),
-1
},
{
(MR_String) (MR_Integer) 0,
-2
},
{
MR_string_const("tuple-costs-ratio", 17),
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
MR_string_const("put-commit-in-own-func", 22),
-1
},
{
(MR_String) (MR_Integer) 0,
-2
},
{
MR_string_const("no-det-warning-compound-compare-2007-07-17", 42),
-1
},
{
MR_string_const("trace-table-io-only-retry", 25),
-1
},
{
MR_string_const("analysis-file-cache-dir", 23),
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
MR_string_const("verb-chk-term", 13),
-1
},
{
(MR_String) (MR_Integer) 0,
-2
},
{
MR_string_const("gcc-global-registers", 20),
-1
},
{
MR_string_const("warn-obsolete", 13),
-1
},
{
MR_string_const("have-delay-slot", 15),
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
MR_string_const("optimise-tailcalls", 18),
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
MR_string_const("read-opt-files-transitively", 27),
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
MR_string_const("compound-compare-builtins-2007-07-09", 36),
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
MR_string_const("verbose-make", 12),
132
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
MR_string_const("track-options", 13),
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
MR_string_const("parallel", 8),
133
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
MR_string_const("memory-profiling", 16),
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
MR_string_const("intermodule-optimisation", 24),
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
MR_string_const("allow-hijacks", 13),
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
MR_string_const("statistics", 10),
-1
},
{
MR_string_const("use-opt-files", 13),
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
MR_string_const("runtime-library-directory", 25),
-1
},
{
MR_string_const("ss-debug", 8),
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
MR_string_const("debug-opt", 9),
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
MR_string_const("ml", 2),
-1
},
{
MR_string_const("propagate-mode-constraints", 26),
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
MR_string_const("warn-overlapping-scopes", 23),
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
MR_string_const("trace-prof", 10),
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
MR_string_const("executable-file-extension", 25),
-1
},
{
(MR_String) (MR_Integer) 0,
-2
},
{
MR_string_const("pessimize-tailcalls", 19),
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
MR_string_const("enable-term2", 12),
134
},
{
MR_string_const("unneeded-code", 13),
-1
},
{
MR_string_const("dump-mlds", 9),
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
MR_string_const("inline-single-use", 17),
-1
},
{
(MR_String) (MR_Integer) 0,
-2
},
{
MR_string_const("linker-static-flags", 19),
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
MR_string_const("warn-singleton-variables", 24),
-1
},
{
MR_string_const("enable-term", 11),
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
MR_string_const("linker-error-undefined-flag", 27),
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
MR_string_const("use-symlinks", 12),
-1
},
{
MR_string_const("high-level-C", 12),
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
MR_string_const("il-only", 7),
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
MR_string_const("verb-check-term", 15),
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
MR_string_const("verifiable", 10),
136
},
{
(MR_String) (MR_Integer) 0,
-2
},
{
MR_string_const("type-specialization", 19),
-1
},
{
(MR_String) (MR_Integer) 0,
-2
},
{
MR_string_const("size-region-ite-fixed", 21),
137
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
MR_string_const("trace-init-file", 15),
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
MR_string_const("show-dependency-graph", 21),
140
},
{
(MR_String) (MR_Integer) 0,
-2
},
{
MR_string_const("options-file", 12),
141
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
MR_string_const("higher-order-size-limit", 23),
-1
},
{
(MR_String) (MR_Integer) 0,
-2
},
{
MR_string_const("shlib-linker-install-name-flag", 30),
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
MR_string_const("dump-hlds-pred-name", 19),
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
MR_string_const("cross-compiling", 15),
-1
},
{
MR_string_const("libgrades-include-component", 27),
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
MR_string_const("local-var-access-threshold", 26),
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
MR_string_const("osv-fvload-cost", 15),
-1
},
{
MR_string_const("termination2-widening-limit", 27),
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
MR_string_const("osv-allpath-node-ratio", 22),
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
MR_string_const("debug-closure", 13),
-1
},
{
(MR_String) (MR_Integer) 0,
-2
},
{
MR_string_const("sync-term-size", 14),
-1
},
{
(MR_String) (MR_Integer) 0,
-2
},
{
MR_string_const("ranlib-flags", 12),
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
MR_string_const("osv-cand-head", 13),
142
},
{
(MR_String) (MR_Integer) 0,
-2
},
{
MR_string_const("table-debug", 11),
-1
},
{
MR_string_const("single-precision-float", 22),
146
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
MR_string_const("body-typeinfo-liveness", 22),
-1
},
{
(MR_String) (MR_Integer) 0,
-2
},
{
MR_string_const("options-search-directory", 24),
149
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
MR_string_const("link-shared-lib-command", 23),
-1
},
{
MR_string_const("use-alloc-regions", 17),
-1
},
{
(MR_String) (MR_Integer) 0,
-2
},
{
MR_string_const("warn-missing-trans-opt-files", 28),
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
MR_string_const("maybe-thread-safe", 17),
-1
},
{
(MR_String) (MR_Integer) 0,
-2
},
{
MR_string_const("search-library-files-directory", 30),
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
MR_string_const("make-short-interface", 20),
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
MR_string_const("trace", 5),
150
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
MR_string_const("warn-non-tail-recursion", 23),
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
MR_string_const("intermod-unused-args", 20),
-1
},
{
MR_string_const("llds-optimize", 13),
-1
},
{
MR_string_const("mlds-optimize", 13),
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
MR_string_const("extra-lib-header", 16),
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
MR_string_const("linker-thread-flags", 19),
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
MR_string_const("inline-builtins", 15),
152
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
MR_string_const("optimize-constant-propagation", 29),
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
MR_string_const("unneeded-code-debug", 19),
-1
},
{
MR_string_const("structure-reuse-repeat", 22),
153
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
MR_string_const("tags", 4),
157
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
MR_string_const("library-grade", 13),
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
MR_string_const("event-set-file-name", 19),
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
MR_string_const("debug", 5),
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
MR_string_const("optimise-reassign", 17),
158
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
MR_string_const("fact-table-max-array-size", 25),
-1
},
{
MR_string_const("debug-opt-pred-name", 19),
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
MR_string_const("untuple", 7),
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
MR_string_const("dump-trace-counts", 17),
-1
},
{
(MR_String) (MR_Integer) 0,
-2
},
{
MR_string_const("profile-deep-coverage-use-trivial", 33),
-1
},
{
(MR_String) (MR_Integer) 0,
-2
},
{
MR_string_const("warn-inferred-erroneous", 23),
160
},
{
MR_string_const("cflags-for-optimization", 23),
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
MR_string_const("rtti-line-numbers", 17),
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
MR_string_const("search-directory", 16),
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
MR_string_const("warn-non-contiguous-foreign-procs", 33),
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
MR_string_const("trace-flag", 10),
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
MR_string_const("sign-assembly", 13),
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
MR_string_const("grade", 5),
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
MR_string_const("dump-hlds-file-suffix", 21),
-1
},
{
MR_string_const("warn-known-bad-format-calls", 27),
161
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
MR_string_const("optimize-constructor-last-call-accumulator", 42),
-1
},
{
MR_string_const("warn-dead-procs", 15),
162
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
MR_string_const("install-command", 15),
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
MR_string_const("optimise-labels", 15),
166
},
{
(MR_String) (MR_Integer) 0,
-2
},
{
MR_string_const("mode-inference-iteration-limit", 30),
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
MR_string_const("optimise-fulljumps", 18),
-1
},
{
MR_string_const("optimize-labels", 15),
-1
},
{
MR_string_const("create-archive-command-flags", 28),
-1
},
{
MR_string_const("pre-link-command", 16),
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
MR_string_const("local-module-id", 15),
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
MR_string_const("java-export-ref-out", 19),
167
},
{
(MR_String) (MR_Integer) 0,
-2
},
{
MR_string_const("libgrades-exclude", 17),
-1
},
{
(MR_String) (MR_Integer) 0,
-2
},
{
MR_string_const("prop-mode-constraints", 21),
-1
},
{
MR_string_const("ranlib-command", 14),
168
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
MR_string_const("warn-unused-args", 16),
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
MR_string_const("optimise-repeat", 15),
171
},
{
MR_string_const("cflags-for-debug", 16),
-1
},
{
MR_string_const("inline-simple-threshold", 23),
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
MR_string_const("optimize-repeat", 15),
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
MR_string_const("optimize-initializations", 24),
-1
},
{
(MR_String) (MR_Integer) 0,
-2
},
{
MR_string_const("size-region-disj-snapshot", 25),
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
MR_string_const("il-assembler", 12),
-1
},
{
MR_string_const("infer-determinism", 17),
-1
},
{
MR_string_const("il-funcptr-types", 16),
-1
},
{
MR_string_const("termination-norm", 16),
-1
},
{
(MR_String) (MR_Integer) 0,
-2
},
{
MR_string_const("optimize-saved-vars-cell", 24),
-1
},
{
(MR_String) (MR_Integer) 0,
-2
},
{
MR_string_const("hlds-dump", 9),
-1
},
{
(MR_String) (MR_Integer) 0,
-2
},
{
MR_string_const("termination2-maximum-matrix-size", 32),
-1
},
{
MR_string_const("mlds-dump", 9),
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
MR_string_const("imports-graph", 13),
172
},
{
MR_string_const("output-cflags", 13),
173
},
{
MR_string_const("java-flags", 10),
-1
},
{
MR_string_const("simple-neg", 10),
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
MR_string_const("optimization-level", 18),
-1
},
{
(MR_String) (MR_Integer) 0,
-2
},
{
MR_string_const("generate-module-order", 21),
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
MR_string_const("local-thread-engine-base", 24),
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
MR_string_const("osv-loop", 8),
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
MR_string_const("decl-debug", 10),
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
MR_string_const("solver-type-auto-init", 21),
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
MR_string_const("osv-all-cand", 12),
174
},
{
MR_string_const("invoked-by-mmc-make", 19),
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
MR_string_const("optimise-space", 14),
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
MR_string_const("profile-calls", 13),
-1
},
{
(MR_String) (MR_Integer) 0,
-2
},
{
MR_string_const("allow-stubs", 11),
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
MR_string_const("mercury-configuration-directory", 31),
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
MR_string_const("frameopt-comments", 17),
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
MR_string_const("check-termination", 17),
-1
},
{
MR_string_const("term2-propagate-failure-constraints", 35),
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
MR_string_const("make-optimisation-interface", 27),
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
MR_string_const("excess-assign", 13),
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
MR_string_const("version", 7),
176
},
{
(MR_String) (MR_Integer) 0,
-2
},
{
MR_string_const("intermod-inline-simple-threshold", 32),
-1
},
{
(MR_String) (MR_Integer) 0,
-2
},
{
MR_string_const("agc-stack-layout", 16),
-1
},
{
(MR_String) (MR_Integer) 0,
-2
},
{
MR_string_const("structure-reuse-constraint-arg", 30),
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
MR_string_const("mlds-optimise", 13),
-1
},
{
MR_string_const("llds-optimise", 13),
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
MR_string_const("stack-trace-higher-order", 24),
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
MR_string_const("inline-call-cost", 16),
-1
},
{
(MR_String) (MR_Integer) 0,
-2
},
{
MR_string_const("type-inference-iteration-limit", 30),
177
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
MR_string_const("generate-dependency-file", 24),
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
MR_string_const("target-debug", 12),
-1
},
{
MR_string_const("procs-per-c-function", 20),
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
MR_string_const("debug-trail-usage", 17),
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
MR_string_const("use-subdirs", 11),
-1
},
{
MR_string_const("shlib-linker-thread-flags", 25),
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
MR_string_const("highlevel-code", 14),
-1
},
{
(MR_String) (MR_Integer) 0,
-2
},
{
MR_string_const("java", 4),
178
},
{
MR_string_const("opt-level", 9),
-1
},
{
MR_string_const("generate-dependencies", 21),
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
MR_string_const("type-check-constraints", 22),
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
MR_string_const("bug-intermod-2006-09-28", 23),
-1
},
{
MR_string_const("structure-reuse", 15),
-1
},
{
MR_string_const("type-layout", 11),
-1
},
{
MR_string_const("csharp-flags", 12),
-1
},
{
MR_string_const("warn-target-code", 16),
181
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
MR_string_const("use-regions", 11),
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
MR_string_const("ctgc-constraint-arg", 19),
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
MR_string_const("warn-interface-imports", 22),
-1
},
{
MR_string_const("use-minimal-model-stack-copy", 28),
-1
},
{
MR_string_const("analyse-trail-usage", 19),
-1
},
{
(MR_String) (MR_Integer) 0,
-2
},
{
MR_string_const("generate-mmc-deps", 17),
183
},
{
MR_string_const("link-with-pic-object-file-extension", 35),
-1
},
{
MR_string_const("ansi-c", 6),
-1
},
{
MR_string_const("coverage-profiling-via-calls", 28),
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
MR_string_const("il-refany-fields", 16),
-1
},
{
MR_string_const("prefer-switch", 13),
-1
},
{
(MR_String) (MR_Integer) 0,
-2
},
{
MR_string_const("optimise-initializations", 24),
-1
},
{
(MR_String) (MR_Integer) 0,
-2
},
{
MR_string_const("debug-opt-pred-id", 17),
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
MR_string_const("reorder-disj", 12),
186
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
MR_string_const("optimise-saved-vars-cell", 24),
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
(MR_String) (MR_Integer) 0,
-2
},
{
MR_string_const("inhibit-warnings", 16),
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
MR_string_const("very-verbose", 12),
187
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
MR_string_const("rebuild", 7),
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
MR_string_const("math-lib", 8),
189
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
MR_string_const("use-trans-opt-files", 19),
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
};

static const struct mercury_type_3 mercury_vector_common_3_0[14] =
{
{
0,
MR_TAG_COMMON(1,4,616)
},
{
1,
MR_TAG_COMMON(1,4,577)
},
{
2,
MR_TAG_COMMON(1,4,458)
},
{
3,
MR_TAG_COMMON(1,4,42)
},
{
4,
MR_TAG_COMMON(1,4,229)
},
{
5,
MR_TAG_COMMON(1,4,182)
},
{
6,
MR_TAG_COMMON(1,4,217)
},
{
7,
MR_TAG_COMMON(1,4,99)
},
{
8,
MR_TAG_COMMON(1,4,498)
},
{
9,
MR_TAG_COMMON(1,4,433)
},
{
10,
MR_TAG_COMMON(1,4,542)
},
{
11,
MR_TAG_COMMON(1,4,302)
},
{
12,
MR_TAG_COMMON(1,4,74)
},
{
13,
MR_TAG_COMMON(1,4,314)
},
};

static const struct mercury_type_8 mercury_vector_common_8_0[14] =
{
{
MR_TAG_COMMON(1,4,616)
},
{
MR_TAG_COMMON(1,4,577)
},
{
MR_TAG_COMMON(1,4,458)
},
{
MR_TAG_COMMON(1,4,42)
},
{
MR_TAG_COMMON(1,4,229)
},
{
MR_TAG_COMMON(1,4,182)
},
{
MR_TAG_COMMON(1,4,217)
},
{
MR_TAG_COMMON(1,4,99)
},
{
MR_TAG_COMMON(1,4,498)
},
{
MR_TAG_COMMON(1,4,433)
},
{
MR_TAG_COMMON(1,4,542)
},
{
MR_TAG_COMMON(1,4,302)
},
{
MR_TAG_COMMON(1,4,74)
},
{
MR_TAG_COMMON(1,4,314)
},
};
extern const MR_TypeCtorInfo_Struct mercury_data_getopt_io__type_ctor_info_maybe_option_table_1;

static const MR_FA_TypeInfo_Struct1 mercury_data_getopt_io__ti_maybe_option_table_1libs__options__type_ctor_info_option_0 = {
	&mercury_data_getopt_io__type_ctor_info_maybe_option_table_1,
{	(MR_TypeInfo) &mercury_data_libs__options__type_ctor_info_option_0
}};

const MR_TypeCtorInfo_Struct mercury_data_libs__options__type_ctor_info_maybe_option_table_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_EQUIV_GROUND,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___libs__options__maybe_option_table_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___libs__options__maybe_option_table_0_0)),
	"libs.options",
	"maybe_option_table",
	{ 0 },
	{ (void *)&mercury_data_getopt_io__ti_maybe_option_table_1libs__options__type_ctor_info_option_0 },
	-1,
	0,
	NULL
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_0 = {
	"inhibit_warnings",
	0
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_1 = {
	"inhibit_accumulator_warnings",
	1
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_2 = {
	"halt_at_warn",
	2
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_3 = {
	"halt_at_syntax_errors",
	3
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_4 = {
	"warn_singleton_vars",
	4
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_5 = {
	"warn_overlapping_scopes",
	5
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_6 = {
	"warn_det_decls_too_lax",
	6
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_7 = {
	"warn_inferred_erroneous",
	7
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_8 = {
	"warn_nothing_exported",
	8
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_9 = {
	"warn_unused_args",
	9
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_10 = {
	"warn_interface_imports",
	10
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_11 = {
	"warn_missing_opt_files",
	11
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_12 = {
	"warn_missing_trans_opt_files",
	12
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_13 = {
	"warn_missing_trans_opt_deps",
	13
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_14 = {
	"warn_non_contiguous_clauses",
	14
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_15 = {
	"warn_non_contiguous_foreign_procs",
	15
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_16 = {
	"warn_non_stratification",
	16
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_17 = {
	"warn_unification_cannot_succeed",
	17
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_18 = {
	"warn_simple_code",
	18
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_19 = {
	"warn_duplicate_calls",
	19
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_20 = {
	"warn_missing_module_name",
	20
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_21 = {
	"warn_wrong_module_name",
	21
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_22 = {
	"warn_smart_recompilation",
	22
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_23 = {
	"warn_undefined_options_variables",
	23
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_24 = {
	"warn_non_tail_recursion",
	24
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_25 = {
	"warn_target_code",
	25
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_26 = {
	"warn_up_to_date",
	26
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_27 = {
	"warn_stubs",
	27
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_28 = {
	"warn_dead_procs",
	28
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_29 = {
	"warn_table_with_inline",
	29
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_30 = {
	"warn_non_term_special_preds",
	30
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_31 = {
	"warn_known_bad_format_calls",
	31
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_32 = {
	"warn_unknown_format_calls",
	32
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_33 = {
	"warn_obsolete",
	33
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_34 = {
	"warn_insts_without_matching_type",
	34
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_35 = {
	"warn_unused_imports",
	35
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_36 = {
	"inform_ite_instead_of_switch",
	36
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_37 = {
	"warn_unresolved_polymorphism",
	37
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_38 = {
	"warn_suspicious_foreign_procs",
	38
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_39 = {
	"verbose",
	39
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_40 = {
	"very_verbose",
	40
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_41 = {
	"verbose_errors",
	41
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_42 = {
	"verbose_recompilation",
	42
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_43 = {
	"find_all_recompilation_reasons",
	43
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_44 = {
	"verbose_make",
	44
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_45 = {
	"verbose_commands",
	45
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_46 = {
	"output_compile_error_lines",
	46
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_47 = {
	"statistics",
	47
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_48 = {
	"detailed_statistics",
	48
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_49 = {
	"proc_size_statistics",
	49
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_50 = {
	"debug_types",
	50
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_51 = {
	"debug_modes",
	51
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_52 = {
	"debug_modes_statistics",
	52
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_53 = {
	"debug_modes_minimal",
	53
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_54 = {
	"debug_modes_verbose",
	54
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_55 = {
	"debug_modes_pred_id",
	55
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_56 = {
	"debug_dep_par_conj",
	56
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_57 = {
	"debug_det",
	57
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_58 = {
	"debug_code_gen_pred_id",
	58
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_59 = {
	"debug_opt",
	59
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_60 = {
	"debug_term",
	60
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_61 = {
	"debug_opt_pred_id",
	61
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_62 = {
	"debug_opt_pred_name",
	62
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_63 = {
	"debug_pd",
	63
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_64 = {
	"debug_il_asm",
	64
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_65 = {
	"debug_liveness",
	65
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_66 = {
	"debug_stack_opt",
	66
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_67 = {
	"debug_make",
	67
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_68 = {
	"debug_closure",
	68
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_69 = {
	"debug_trail_usage",
	69
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_70 = {
	"debug_mode_constraints",
	70
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_71 = {
	"debug_intermodule_analysis",
	71
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_72 = {
	"debug_mm_tabling_analysis",
	72
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_73 = {
	"debug_indirect_reuse",
	73
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_74 = {
	"make_short_interface",
	74
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_75 = {
	"make_interface",
	75
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_76 = {
	"make_private_interface",
	76
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_77 = {
	"make_optimization_interface",
	77
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_78 = {
	"make_transitive_opt_interface",
	78
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_79 = {
	"make_analysis_registry",
	79
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_80 = {
	"make_xml_documentation",
	80
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_81 = {
	"generate_source_file_mapping",
	81
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_82 = {
	"generate_dependency_file",
	82
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_83 = {
	"generate_dependencies",
	83
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_84 = {
	"generate_module_order",
	84
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_85 = {
	"generate_standalone_interface",
	85
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_86 = {
	"convert_to_mercury",
	86
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_87 = {
	"typecheck_only",
	87
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_88 = {
	"errorcheck_only",
	88
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_89 = {
	"target_code_only",
	89
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_90 = {
	"compile_only",
	90
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_91 = {
	"compile_to_shared_lib",
	91
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_92 = {
	"output_grade_string",
	92
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_93 = {
	"output_link_command",
	93
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_94 = {
	"output_shared_lib_link_command",
	94
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_95 = {
	"output_libgrades",
	95
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_96 = {
	"output_cc",
	96
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_97 = {
	"output_cflags",
	97
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_98 = {
	"output_library_link_flags",
	98
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_99 = {
	"smart_recompilation",
	99
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_100 = {
	"generate_item_version_numbers",
	100
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_101 = {
	"generate_mmc_make_module_dependencies",
	101
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_102 = {
	"assume_gmake",
	102
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_103 = {
	"trace_level",
	103
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_104 = {
	"trace_optimized",
	104
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_105 = {
	"trace_prof",
	105
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_106 = {
	"trace_table_io",
	106
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_107 = {
	"trace_table_io_only_retry",
	107
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_108 = {
	"trace_table_io_states",
	108
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_109 = {
	"trace_table_io_require",
	109
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_110 = {
	"trace_table_io_all",
	110
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_111 = {
	"trace_goal_flags",
	111
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_112 = {
	"prof_optimized",
	112
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_113 = {
	"exec_trace_tail_rec",
	113
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_114 = {
	"suppress_trace",
	114
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_115 = {
	"force_disable_tracing",
	115
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_116 = {
	"delay_death",
	116
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_117 = {
	"stack_trace_higher_order",
	117
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_118 = {
	"force_disable_ssdebug",
	118
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_119 = {
	"generate_bytecode",
	119
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_120 = {
	"line_numbers",
	120
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_121 = {
	"auto_comments",
	121
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_122 = {
	"frameopt_comments",
	122
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_123 = {
	"show_dependency_graph",
	123
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_124 = {
	"imports_graph",
	124
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_125 = {
	"dump_trace_counts",
	125
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_126 = {
	"dump_hlds",
	126
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_127 = {
	"dump_hlds_pred_id",
	127
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_128 = {
	"dump_hlds_pred_name",
	128
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_129 = {
	"dump_hlds_alias",
	129
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_130 = {
	"dump_hlds_options",
	130
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_131 = {
	"dump_hlds_file_suffix",
	131
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_132 = {
	"dump_same_hlds",
	132
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_133 = {
	"dump_mlds",
	133
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_134 = {
	"verbose_dump_mlds",
	134
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_135 = {
	"mode_constraints",
	135
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_136 = {
	"simple_mode_constraints",
	136
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_137 = {
	"prop_mode_constraints",
	137
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_138 = {
	"benchmark_modes",
	138
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_139 = {
	"benchmark_modes_repeat",
	139
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_140 = {
	"sign_assembly",
	140
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_141 = {
	"separate_assemblies",
	141
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_142 = {
	"reorder_conj",
	142
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_143 = {
	"reorder_disj",
	143
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_144 = {
	"fully_strict",
	144
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_145 = {
	"strict_sequential",
	145
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_146 = {
	"allow_stubs",
	146
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_147 = {
	"infer_types",
	147
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_148 = {
	"infer_modes",
	148
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_149 = {
	"infer_det",
	149
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_150 = {
	"infer_all",
	150
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_151 = {
	"type_inference_iteration_limit",
	151
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_152 = {
	"mode_inference_iteration_limit",
	152
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_153 = {
	"event_set_file_name",
	153
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_154 = {
	"grade",
	154
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_155 = {
	"target",
	155
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_156 = {
	"il",
	156
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_157 = {
	"il_only",
	157
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_158 = {
	"compile_to_c",
	158
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_159 = {
	"java",
	159
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_160 = {
	"java_only",
	160
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_161 = {
	"x86_64",
	161
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_162 = {
	"x86_64_only",
	162
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_163 = {
	"erlang",
	163
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_164 = {
	"erlang_only",
	164
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_165 = {
	"exec_trace",
	165
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_166 = {
	"decl_debug",
	166
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_167 = {
	"profiling",
	167
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_168 = {
	"time_profiling",
	168
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_169 = {
	"memory_profiling",
	169
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_170 = {
	"deep_profiling",
	170
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_171 = {
	"profile_calls",
	171
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_172 = {
	"profile_time",
	172
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_173 = {
	"profile_memory",
	173
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_174 = {
	"profile_deep",
	174
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_175 = {
	"use_activation_counts",
	175
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_176 = {
	"pre_prof_transforms_simplify",
	176
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_177 = {
	"coverage_profiling",
	177
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_178 = {
	"coverage_profiling_via_calls",
	178
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_179 = {
	"profile_deep_coverage_after_goal",
	179
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_180 = {
	"profile_deep_coverage_branch_ite",
	180
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_181 = {
	"profile_deep_coverage_branch_switch",
	181
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_182 = {
	"profile_deep_coverage_branch_disj",
	182
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_183 = {
	"profile_deep_coverage_use_portcounts",
	183
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_184 = {
	"profile_deep_coverage_use_trivial",
	184
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_185 = {
	"profile_for_implicit_parallelism",
	185
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_186 = {
	"use_zeroing_for_ho_cycles",
	186
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_187 = {
	"use_lots_of_ho_specialization",
	187
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_188 = {
	"deep_profile_tail_recursion",
	188
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_189 = {
	"record_term_sizes_as_words",
	189
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_190 = {
	"record_term_sizes_as_cells",
	190
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_191 = {
	"experimental_complexity",
	191
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_192 = {
	"gc",
	192
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_193 = {
	"parallel",
	193
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_194 = {
	"threadscope",
	194
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_195 = {
	"use_trail",
	195
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_196 = {
	"trail_segments",
	196
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_197 = {
	"use_minimal_model_stack_copy",
	197
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_198 = {
	"use_minimal_model_own_stacks",
	198
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_199 = {
	"minimal_model_debug",
	199
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_200 = {
	"single_prec_float",
	200
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_201 = {
	"type_layout",
	201
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_202 = {
	"maybe_thread_safe_opt",
	202
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_203 = {
	"extend_stacks_when_needed",
	203
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_204 = {
	"stack_segments",
	204
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_205 = {
	"use_regions",
	205
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_206 = {
	"use_alloc_regions",
	206
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_207 = {
	"use_regions_debug",
	207
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_208 = {
	"use_regions_profiling",
	208
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_209 = {
	"source_to_source_debug",
	209
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_210 = {
	"tags",
	210
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_211 = {
	"num_tag_bits",
	211
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_212 = {
	"num_reserved_addresses",
	212
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_213 = {
	"num_reserved_objects",
	213
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_214 = {
	"bits_per_word",
	214
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_215 = {
	"bytes_per_word",
	215
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_216 = {
	"conf_low_tag_bits",
	216
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_217 = {
	"unboxed_float",
	217
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_218 = {
	"unboxed_enums",
	218
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_219 = {
	"unboxed_no_tag_types",
	219
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_220 = {
	"sync_term_size",
	220
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_221 = {
	"gcc_non_local_gotos",
	221
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_222 = {
	"gcc_global_registers",
	222
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_223 = {
	"asm_labels",
	223
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_224 = {
	"pic_reg",
	224
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_225 = {
	"highlevel_code",
	225
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_226 = {
	"highlevel_data",
	226
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_227 = {
	"gcc_nested_functions",
	227
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_228 = {
	"det_copy_out",
	228
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_229 = {
	"nondet_copy_out",
	229
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_230 = {
	"put_commit_in_own_func",
	230
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_231 = {
	"put_nondet_env_on_heap",
	231
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_232 = {
	"java_export_ref_out",
	232
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_233 = {
	"verifiable_code",
	233
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_234 = {
	"il_refany_fields",
	234
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_235 = {
	"il_funcptr_types",
	235
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_236 = {
	"il_byref_tailcalls",
	236
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_237 = {
	"backend_foreign_languages",
	237
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_238 = {
	"stack_trace",
	238
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_239 = {
	"basic_stack_layout",
	239
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_240 = {
	"agc_stack_layout",
	240
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_241 = {
	"procid_stack_layout",
	241
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_242 = {
	"trace_stack_layout",
	242
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_243 = {
	"body_typeinfo_liveness",
	243
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_244 = {
	"can_compare_constants_as_ints",
	244
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_245 = {
	"pretest_equality_cast_pointers",
	245
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_246 = {
	"can_compare_compound_values",
	246
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_247 = {
	"lexically_order_constructors",
	247
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_248 = {
	"mutable_always_boxed",
	248
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_249 = {
	"delay_partial_instantiations",
	249
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_250 = {
	"special_preds",
	250
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_251 = {
	"type_ctor_info",
	251
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_252 = {
	"type_ctor_layout",
	252
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_253 = {
	"type_ctor_functors",
	253
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_254 = {
	"new_type_class_rtti",
	254
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_255 = {
	"rtti_line_numbers",
	255
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_256 = {
	"disable_minimal_model_stack_copy_pneg",
	256
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_257 = {
	"disable_minimal_model_stack_copy_cut",
	257
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_258 = {
	"use_minimal_model_stack_copy_pneg",
	258
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_259 = {
	"use_minimal_model_stack_copy_cut",
	259
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_260 = {
	"disable_trail_ops",
	260
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_261 = {
	"size_region_ite_fixed",
	261
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_262 = {
	"size_region_disj_fixed",
	262
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_263 = {
	"size_region_semi_disj_fixed",
	263
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_264 = {
	"size_region_commit_fixed",
	264
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_265 = {
	"size_region_ite_protect",
	265
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_266 = {
	"size_region_ite_snapshot",
	266
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_267 = {
	"size_region_semi_disj_protect",
	267
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_268 = {
	"size_region_disj_snapshot",
	268
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_269 = {
	"size_region_commit_entry",
	269
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_270 = {
	"solver_type_auto_init",
	270
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_271 = {
	"allow_multi_arm_switches",
	271
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_272 = {
	"type_check_constraints",
	272
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_273 = {
	"low_level_debug",
	273
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_274 = {
	"table_debug",
	274
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_275 = {
	"trad_passes",
	275
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_276 = {
	"parallel_liveness",
	276
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_277 = {
	"parallel_code_gen",
	277
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_278 = {
	"polymorphism",
	278
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_279 = {
	"reclaim_heap_on_failure",
	279
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_280 = {
	"reclaim_heap_on_semidet_failure",
	280
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_281 = {
	"reclaim_heap_on_nondet_failure",
	281
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_282 = {
	"have_delay_slot",
	282
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_283 = {
	"num_real_r_regs",
	283
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_284 = {
	"num_real_f_regs",
	284
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_285 = {
	"num_real_r_temps",
	285
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_286 = {
	"num_real_f_temps",
	286
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_287 = {
	"pic",
	287
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_288 = {
	"max_jump_table_size",
	288
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_289 = {
	"max_specialized_do_call_closure",
	289
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_290 = {
	"max_specialized_do_call_class_method",
	290
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_291 = {
	"compare_specialization",
	291
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_292 = {
	"should_pretest_equality",
	292
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_293 = {
	"fact_table_max_array_size",
	293
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_294 = {
	"fact_table_hash_percent_full",
	294
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_295 = {
	"gcc_local_labels",
	295
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_296 = {
	"prefer_switch",
	296
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_297 = {
	"opt_no_return_calls",
	297
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_298 = {
	"opt_level",
	298
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_299 = {
	"opt_level_number",
	299
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_300 = {
	"opt_space",
	300
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_301 = {
	"intermodule_optimization",
	301
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_302 = {
	"read_opt_files_transitively",
	302
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_303 = {
	"use_opt_files",
	303
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_304 = {
	"use_trans_opt_files",
	304
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_305 = {
	"transitive_optimization",
	305
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_306 = {
	"intermodule_analysis",
	306
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_307 = {
	"analysis_repeat",
	307
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_308 = {
	"analysis_file_cache",
	308
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_309 = {
	"allow_inlining",
	309
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_310 = {
	"inlining",
	310
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_311 = {
	"inline_simple",
	311
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_312 = {
	"inline_builtins",
	312
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_313 = {
	"inline_single_use",
	313
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_314 = {
	"inline_call_cost",
	314
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_315 = {
	"inline_compound_threshold",
	315
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_316 = {
	"inline_simple_threshold",
	316
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_317 = {
	"inline_vars_threshold",
	317
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_318 = {
	"intermod_inline_simple_threshold",
	318
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_319 = {
	"from_ground_term_threshold",
	319
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_320 = {
	"common_struct",
	320
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_321 = {
	"common_struct_preds",
	321
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_322 = {
	"common_goal",
	322
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_323 = {
	"constraint_propagation",
	323
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_324 = {
	"local_constraint_propagation",
	324
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_325 = {
	"optimize_unused_args",
	325
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_326 = {
	"intermod_unused_args",
	326
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_327 = {
	"optimize_higher_order",
	327
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_328 = {
	"higher_order_size_limit",
	328
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_329 = {
	"higher_order_arg_limit",
	329
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_330 = {
	"unneeded_code",
	330
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_331 = {
	"unneeded_code_copy_limit",
	331
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_332 = {
	"unneeded_code_debug",
	332
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_333 = {
	"unneeded_code_debug_pred_name",
	333
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_334 = {
	"type_specialization",
	334
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_335 = {
	"user_guided_type_specialization",
	335
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_336 = {
	"introduce_accumulators",
	336
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_337 = {
	"optimize_constructor_last_call_accumulator",
	337
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_338 = {
	"optimize_constructor_last_call_null",
	338
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_339 = {
	"optimize_constructor_last_call",
	339
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_340 = {
	"optimize_duplicate_calls",
	340
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_341 = {
	"constant_propagation",
	341
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_342 = {
	"excess_assign",
	342
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_343 = {
	"optimize_format_calls",
	343
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_344 = {
	"optimize_saved_vars_const",
	344
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_345 = {
	"optimize_saved_vars_cell",
	345
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_346 = {
	"optimize_saved_vars_cell_loop",
	346
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_347 = {
	"optimize_saved_vars_cell_full_path",
	347
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_348 = {
	"optimize_saved_vars_cell_on_stack",
	348
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_349 = {
	"optimize_saved_vars_cell_candidate_headvars",
	349
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_350 = {
	"optimize_saved_vars_cell_cv_store_cost",
	350
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_351 = {
	"optimize_saved_vars_cell_cv_load_cost",
	351
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_352 = {
	"optimize_saved_vars_cell_fv_store_cost",
	352
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_353 = {
	"optimize_saved_vars_cell_fv_load_cost",
	353
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_354 = {
	"optimize_saved_vars_cell_op_ratio",
	354
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_355 = {
	"optimize_saved_vars_cell_node_ratio",
	355
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_356 = {
	"optimize_saved_vars_cell_all_path_node_ratio",
	356
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_357 = {
	"optimize_saved_vars_cell_include_all_candidates",
	357
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_358 = {
	"optimize_saved_vars",
	358
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_359 = {
	"loop_invariants",
	359
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_360 = {
	"delay_construct",
	360
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_361 = {
	"follow_code",
	361
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_362 = {
	"optimize_dead_procs",
	362
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_363 = {
	"deforestation",
	363
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_364 = {
	"deforestation_depth_limit",
	364
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_365 = {
	"deforestation_cost_factor",
	365
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_366 = {
	"deforestation_vars_threshold",
	366
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_367 = {
	"deforestation_size_threshold",
	367
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_368 = {
	"analyse_trail_usage",
	368
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_369 = {
	"optimize_trail_usage",
	369
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_370 = {
	"optimize_region_ops",
	370
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_371 = {
	"analyse_mm_tabling",
	371
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_372 = {
	"untuple",
	372
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_373 = {
	"tuple",
	373
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_374 = {
	"tuple_trace_counts_file",
	374
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_375 = {
	"tuple_costs_ratio",
	375
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_376 = {
	"tuple_min_args",
	376
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_377 = {
	"inline_par_builtins",
	377
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_378 = {
	"always_specialize_in_dep_par_conjs",
	378
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_379 = {
	"allow_some_paths_only_waits",
	379
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_380 = {
	"control_granularity",
	380
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_381 = {
	"distance_granularity",
	381
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_382 = {
	"parallelism_target",
	382
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_383 = {
	"implicit_parallelism",
	383
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_384 = {
	"old_implicit_parallelism",
	384
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_385 = {
	"region_analysis",
	385
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_386 = {
	"structure_sharing_analysis",
	386
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_387 = {
	"structure_sharing_widening",
	387
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_388 = {
	"structure_reuse_analysis",
	388
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_389 = {
	"structure_reuse_constraint",
	389
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_390 = {
	"structure_reuse_constraint_arg",
	390
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_391 = {
	"structure_reuse_max_conditions",
	391
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_392 = {
	"structure_reuse_repeat",
	392
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_393 = {
	"structure_reuse_free_cells",
	393
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_394 = {
	"termination",
	394
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_395 = {
	"termination_check",
	395
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_396 = {
	"verbose_check_termination",
	396
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_397 = {
	"termination_single_args",
	397
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_398 = {
	"termination_norm",
	398
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_399 = {
	"termination_error_limit",
	399
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_400 = {
	"termination_path_limit",
	400
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_401 = {
	"termination2",
	401
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_402 = {
	"check_termination2",
	402
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_403 = {
	"verbose_check_termination2",
	403
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_404 = {
	"termination2_norm",
	404
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_405 = {
	"widening_limit",
	405
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_406 = {
	"arg_size_analysis_only",
	406
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_407 = {
	"propagate_failure_constrs",
	407
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_408 = {
	"term2_maximum_matrix_size",
	408
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_409 = {
	"analyse_exceptions",
	409
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_410 = {
	"analyse_closures",
	410
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_411 = {
	"smart_indexing",
	411
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_412 = {
	"dense_switch_req_density",
	412
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_413 = {
	"lookup_switch_req_density",
	413
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_414 = {
	"dense_switch_size",
	414
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_415 = {
	"lookup_switch_size",
	415
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_416 = {
	"string_switch_size",
	416
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_417 = {
	"tag_switch_size",
	417
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_418 = {
	"try_switch_size",
	418
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_419 = {
	"binary_switch_size",
	419
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_420 = {
	"switch_single_rec_base_first",
	420
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_421 = {
	"switch_multi_rec_base_first",
	421
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_422 = {
	"static_ground_cells",
	422
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_423 = {
	"static_ground_floats",
	423
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_424 = {
	"static_code_addresses",
	424
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_425 = {
	"use_atomic_cells",
	425
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_426 = {
	"middle_rec",
	426
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_427 = {
	"simple_neg",
	427
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_428 = {
	"allow_hijacks",
	428
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_429 = {
	"optimize_tailcalls",
	429
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_430 = {
	"optimize_initializations",
	430
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_431 = {
	"eliminate_local_vars",
	431
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_432 = {
	"generate_trail_ops_inline",
	432
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_433 = {
	"common_data",
	433
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_434 = {
	"common_layout_data",
	434
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_435 = {
	"optimize",
	435
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_436 = {
	"optimize_peep",
	436
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_437 = {
	"optimize_jumps",
	437
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_438 = {
	"optimize_fulljumps",
	438
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_439 = {
	"pessimize_tailcalls",
	439
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_440 = {
	"checked_nondet_tailcalls",
	440
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_441 = {
	"use_local_vars",
	441
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_442 = {
	"local_var_access_threshold",
	442
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_443 = {
	"standardize_labels",
	443
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_444 = {
	"optimize_labels",
	444
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_445 = {
	"optimize_dups",
	445
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_446 = {
	"optimize_proc_dups",
	446
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_447 = {
	"optimize_frames",
	447
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_448 = {
	"optimize_delay_slot",
	448
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_449 = {
	"optimize_reassign",
	449
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_450 = {
	"optimize_repeat",
	450
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_451 = {
	"use_macro_for_redo_fail",
	451
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_452 = {
	"emit_c_loops",
	452
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_453 = {
	"procs_per_c_function",
	453
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_454 = {
	"everything_in_one_c_function",
	454
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_455 = {
	"local_thread_engine_base",
	455
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_456 = {
	"erlang_switch_on_strings_as_atoms",
	456
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_457 = {
	"target_debug",
	457
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_458 = {
	"cc",
	458
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_459 = {
	"cflags",
	459
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_460 = {
	"quoted_cflag",
	460
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_461 = {
	"c_include_directory",
	461
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_462 = {
	"c_optimize",
	462
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_463 = {
	"ansi_c",
	463
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_464 = {
	"inline_alloc",
	464
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_465 = {
	"cflags_for_warnings",
	465
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_466 = {
	"cflags_for_optimization",
	466
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_467 = {
	"cflags_for_ansi",
	467
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_468 = {
	"cflags_for_regs",
	468
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_469 = {
	"cflags_for_gotos",
	469
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_470 = {
	"cflags_for_threads",
	470
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_471 = {
	"cflags_for_debug",
	471
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_472 = {
	"cflags_for_pic",
	472
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_473 = {
	"c_flag_to_name_object_file",
	473
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_474 = {
	"object_file_extension",
	474
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_475 = {
	"pic_object_file_extension",
	475
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_476 = {
	"link_with_pic_object_file_extension",
	476
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_477 = {
	"c_compiler_type",
	477
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_478 = {
	"java_compiler",
	478
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_479 = {
	"java_interpreter",
	479
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_480 = {
	"java_flags",
	480
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_481 = {
	"quoted_java_flag",
	481
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_482 = {
	"java_classpath",
	482
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_483 = {
	"java_object_file_extension",
	483
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_484 = {
	"il_assembler",
	484
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_485 = {
	"ilasm_flags",
	485
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_486 = {
	"quoted_ilasm_flag",
	486
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_487 = {
	"dotnet_library_version",
	487
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_488 = {
	"support_ms_clr",
	488
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_489 = {
	"support_rotor_clr",
	489
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_490 = {
	"csharp_compiler",
	490
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_491 = {
	"csharp_flags",
	491
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_492 = {
	"quoted_csharp_flag",
	492
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_493 = {
	"erlang_compiler",
	493
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_494 = {
	"erlang_interpreter",
	494
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_495 = {
	"erlang_flags",
	495
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_496 = {
	"quoted_erlang_flag",
	496
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_497 = {
	"erlang_include_directory",
	497
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_498 = {
	"erlang_object_file_extension",
	498
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_499 = {
	"erlang_native_code",
	499
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_500 = {
	"erlang_inhibit_trivial_warnings",
	500
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_501 = {
	"output_file_name",
	501
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_502 = {
	"ld_flags",
	502
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_503 = {
	"quoted_ld_flag",
	503
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_504 = {
	"ld_libflags",
	504
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_505 = {
	"quoted_ld_libflag",
	505
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_506 = {
	"link_library_directories",
	506
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_507 = {
	"runtime_link_library_directories",
	507
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_508 = {
	"link_libraries",
	508
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_509 = {
	"link_objects",
	509
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_510 = {
	"mercury_library_directories",
	510
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_511 = {
	"mercury_library_directory_special",
	511
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_512 = {
	"search_library_files_directories",
	512
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_513 = {
	"search_library_files_directory_special",
	513
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_514 = {
	"mercury_libraries",
	514
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_515 = {
	"mercury_library_special",
	515
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_516 = {
	"mercury_standard_library_directory",
	516
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_517 = {
	"mercury_standard_library_directory_special",
	517
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_518 = {
	"init_file_directories",
	518
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_519 = {
	"init_files",
	519
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_520 = {
	"trace_init_files",
	520
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_521 = {
	"linkage",
	521
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_522 = {
	"linkage_special",
	522
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_523 = {
	"mercury_linkage",
	523
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_524 = {
	"mercury_linkage_special",
	524
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_525 = {
	"strip",
	525
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_526 = {
	"demangle",
	526
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_527 = {
	"main",
	527
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_528 = {
	"allow_undefined",
	528
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_529 = {
	"use_readline",
	529
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_530 = {
	"runtime_flags",
	530
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_531 = {
	"extra_initialization_functions",
	531
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_532 = {
	"shared_library_extension",
	532
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_533 = {
	"library_extension",
	533
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_534 = {
	"executable_file_extension",
	534
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_535 = {
	"link_executable_command",
	535
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_536 = {
	"link_shared_lib_command",
	536
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_537 = {
	"create_archive_command",
	537
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_538 = {
	"create_archive_command_output_flag",
	538
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_539 = {
	"create_archive_command_flags",
	539
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_540 = {
	"ranlib_command",
	540
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_541 = {
	"ranlib_flags",
	541
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_542 = {
	"mkinit_command",
	542
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_543 = {
	"mkinit_erl_command",
	543
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_544 = {
	"demangle_command",
	544
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_545 = {
	"trace_libs",
	545
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_546 = {
	"thread_libs",
	546
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_547 = {
	"shared_libs",
	547
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_548 = {
	"math_lib",
	548
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_549 = {
	"readline_libs",
	549
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_550 = {
	"linker_opt_separator",
	550
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_551 = {
	"linker_thread_flags",
	551
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_552 = {
	"shlib_linker_thread_flags",
	552
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_553 = {
	"linker_static_flags",
	553
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_554 = {
	"linker_strip_flag",
	554
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_555 = {
	"linker_link_lib_flag",
	555
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_556 = {
	"linker_link_lib_suffix",
	556
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_557 = {
	"shlib_linker_link_lib_flag",
	557
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_558 = {
	"shlib_linker_link_lib_suffix",
	558
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_559 = {
	"linker_debug_flags",
	559
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_560 = {
	"shlib_linker_debug_flags",
	560
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_561 = {
	"linker_trace_flags",
	561
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_562 = {
	"shlib_linker_trace_flags",
	562
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_563 = {
	"linker_path_flag",
	563
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_564 = {
	"linker_rpath_flag",
	564
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_565 = {
	"linker_rpath_separator",
	565
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_566 = {
	"shlib_linker_rpath_flag",
	566
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_567 = {
	"shlib_linker_rpath_separator",
	567
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_568 = {
	"linker_allow_undefined_flag",
	568
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_569 = {
	"linker_error_undefined_flag",
	569
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_570 = {
	"shlib_linker_use_install_name",
	570
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_571 = {
	"shlib_linker_install_name_flag",
	571
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_572 = {
	"shlib_linker_install_name_path",
	572
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_573 = {
	"java_archive_command",
	573
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_574 = {
	"make",
	574
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_575 = {
	"keep_going",
	575
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_576 = {
	"rebuild",
	576
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_577 = {
	"jobs",
	577
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_578 = {
	"track_flags",
	578
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_579 = {
	"invoked_by_mmc_make",
	579
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_580 = {
	"extra_init_command",
	580
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_581 = {
	"pre_link_command",
	581
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_582 = {
	"install_prefix",
	582
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_583 = {
	"use_symlinks",
	583
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_584 = {
	"mercury_configuration_directory",
	584
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_585 = {
	"mercury_configuration_directory_special",
	585
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_586 = {
	"install_command",
	586
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_587 = {
	"install_command_dir_option",
	587
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_588 = {
	"libgrades",
	588
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_589 = {
	"libgrades_include_components",
	589
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_590 = {
	"libgrades_exclude_components",
	590
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_591 = {
	"lib_linkages",
	591
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_592 = {
	"flags_file",
	592
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_593 = {
	"options_files",
	593
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_594 = {
	"config_file",
	594
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_595 = {
	"options_search_directories",
	595
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_596 = {
	"use_subdirs",
	596
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_597 = {
	"use_grade_subdirs",
	597
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_598 = {
	"search_directories",
	598
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_599 = {
	"intermod_directories",
	599
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_600 = {
	"use_search_directories_for_intermod",
	600
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_601 = {
	"libgrade_install_check",
	601
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_602 = {
	"order_make_by_timestamp",
	602
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_603 = {
	"show_make_times",
	603
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_604 = {
	"extra_library_header",
	604
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_605 = {
	"restricted_command_line",
	605
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_606 = {
	"filenames_from_stdin",
	606
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_607 = {
	"typecheck_ambiguity_warn_limit",
	607
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_608 = {
	"typecheck_ambiguity_error_limit",
	608
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_609 = {
	"help",
	609
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_610 = {
	"version",
	610
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_611 = {
	"fullarch",
	611
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_612 = {
	"cross_compiling",
	612
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_613 = {
	"local_module_id",
	613
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_614 = {
	"analysis_file_cache_dir",
	614
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_615 = {
	"compiler_sufficiently_recent",
	615
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_616 = {
	"experiment",
	616
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_617 = {
	"feedback_file",
	617
};

const MR_EnumFunctorDescPtr mercury_data_libs__options__enum_value_ordered_option_0[] = {
	&mercury_data_libs__options__enum_functor_desc_option_0_0,
	&mercury_data_libs__options__enum_functor_desc_option_0_1,
	&mercury_data_libs__options__enum_functor_desc_option_0_2,
	&mercury_data_libs__options__enum_functor_desc_option_0_3,
	&mercury_data_libs__options__enum_functor_desc_option_0_4,
	&mercury_data_libs__options__enum_functor_desc_option_0_5,
	&mercury_data_libs__options__enum_functor_desc_option_0_6,
	&mercury_data_libs__options__enum_functor_desc_option_0_7,
	&mercury_data_libs__options__enum_functor_desc_option_0_8,
	&mercury_data_libs__options__enum_functor_desc_option_0_9,
	&mercury_data_libs__options__enum_functor_desc_option_0_10,
	&mercury_data_libs__options__enum_functor_desc_option_0_11,
	&mercury_data_libs__options__enum_functor_desc_option_0_12,
	&mercury_data_libs__options__enum_functor_desc_option_0_13,
	&mercury_data_libs__options__enum_functor_desc_option_0_14,
	&mercury_data_libs__options__enum_functor_desc_option_0_15,
	&mercury_data_libs__options__enum_functor_desc_option_0_16,
	&mercury_data_libs__options__enum_functor_desc_option_0_17,
	&mercury_data_libs__options__enum_functor_desc_option_0_18,
	&mercury_data_libs__options__enum_functor_desc_option_0_19,
	&mercury_data_libs__options__enum_functor_desc_option_0_20,
	&mercury_data_libs__options__enum_functor_desc_option_0_21,
	&mercury_data_libs__options__enum_functor_desc_option_0_22,
	&mercury_data_libs__options__enum_functor_desc_option_0_23,
	&mercury_data_libs__options__enum_functor_desc_option_0_24,
	&mercury_data_libs__options__enum_functor_desc_option_0_25,
	&mercury_data_libs__options__enum_functor_desc_option_0_26,
	&mercury_data_libs__options__enum_functor_desc_option_0_27,
	&mercury_data_libs__options__enum_functor_desc_option_0_28,
	&mercury_data_libs__options__enum_functor_desc_option_0_29,
	&mercury_data_libs__options__enum_functor_desc_option_0_30,
	&mercury_data_libs__options__enum_functor_desc_option_0_31,
	&mercury_data_libs__options__enum_functor_desc_option_0_32,
	&mercury_data_libs__options__enum_functor_desc_option_0_33,
	&mercury_data_libs__options__enum_functor_desc_option_0_34,
	&mercury_data_libs__options__enum_functor_desc_option_0_35,
	&mercury_data_libs__options__enum_functor_desc_option_0_36,
	&mercury_data_libs__options__enum_functor_desc_option_0_37,
	&mercury_data_libs__options__enum_functor_desc_option_0_38,
	&mercury_data_libs__options__enum_functor_desc_option_0_39,
	&mercury_data_libs__options__enum_functor_desc_option_0_40,
	&mercury_data_libs__options__enum_functor_desc_option_0_41,
	&mercury_data_libs__options__enum_functor_desc_option_0_42,
	&mercury_data_libs__options__enum_functor_desc_option_0_43,
	&mercury_data_libs__options__enum_functor_desc_option_0_44,
	&mercury_data_libs__options__enum_functor_desc_option_0_45,
	&mercury_data_libs__options__enum_functor_desc_option_0_46,
	&mercury_data_libs__options__enum_functor_desc_option_0_47,
	&mercury_data_libs__options__enum_functor_desc_option_0_48,
	&mercury_data_libs__options__enum_functor_desc_option_0_49,
	&mercury_data_libs__options__enum_functor_desc_option_0_50,
	&mercury_data_libs__options__enum_functor_desc_option_0_51,
	&mercury_data_libs__options__enum_functor_desc_option_0_52,
	&mercury_data_libs__options__enum_functor_desc_option_0_53,
	&mercury_data_libs__options__enum_functor_desc_option_0_54,
	&mercury_data_libs__options__enum_functor_desc_option_0_55,
	&mercury_data_libs__options__enum_functor_desc_option_0_56,
	&mercury_data_libs__options__enum_functor_desc_option_0_57,
	&mercury_data_libs__options__enum_functor_desc_option_0_58,
	&mercury_data_libs__options__enum_functor_desc_option_0_59,
	&mercury_data_libs__options__enum_functor_desc_option_0_60,
	&mercury_data_libs__options__enum_functor_desc_option_0_61,
	&mercury_data_libs__options__enum_functor_desc_option_0_62,
	&mercury_data_libs__options__enum_functor_desc_option_0_63,
	&mercury_data_libs__options__enum_functor_desc_option_0_64,
	&mercury_data_libs__options__enum_functor_desc_option_0_65,
	&mercury_data_libs__options__enum_functor_desc_option_0_66,
	&mercury_data_libs__options__enum_functor_desc_option_0_67,
	&mercury_data_libs__options__enum_functor_desc_option_0_68,
	&mercury_data_libs__options__enum_functor_desc_option_0_69,
	&mercury_data_libs__options__enum_functor_desc_option_0_70,
	&mercury_data_libs__options__enum_functor_desc_option_0_71,
	&mercury_data_libs__options__enum_functor_desc_option_0_72,
	&mercury_data_libs__options__enum_functor_desc_option_0_73,
	&mercury_data_libs__options__enum_functor_desc_option_0_74,
	&mercury_data_libs__options__enum_functor_desc_option_0_75,
	&mercury_data_libs__options__enum_functor_desc_option_0_76,
	&mercury_data_libs__options__enum_functor_desc_option_0_77,
	&mercury_data_libs__options__enum_functor_desc_option_0_78,
	&mercury_data_libs__options__enum_functor_desc_option_0_79,
	&mercury_data_libs__options__enum_functor_desc_option_0_80,
	&mercury_data_libs__options__enum_functor_desc_option_0_81,
	&mercury_data_libs__options__enum_functor_desc_option_0_82,
	&mercury_data_libs__options__enum_functor_desc_option_0_83,
	&mercury_data_libs__options__enum_functor_desc_option_0_84,
	&mercury_data_libs__options__enum_functor_desc_option_0_85,
	&mercury_data_libs__options__enum_functor_desc_option_0_86,
	&mercury_data_libs__options__enum_functor_desc_option_0_87,
	&mercury_data_libs__options__enum_functor_desc_option_0_88,
	&mercury_data_libs__options__enum_functor_desc_option_0_89,
	&mercury_data_libs__options__enum_functor_desc_option_0_90,
	&mercury_data_libs__options__enum_functor_desc_option_0_91,
	&mercury_data_libs__options__enum_functor_desc_option_0_92,
	&mercury_data_libs__options__enum_functor_desc_option_0_93,
	&mercury_data_libs__options__enum_functor_desc_option_0_94,
	&mercury_data_libs__options__enum_functor_desc_option_0_95,
	&mercury_data_libs__options__enum_functor_desc_option_0_96,
	&mercury_data_libs__options__enum_functor_desc_option_0_97,
	&mercury_data_libs__options__enum_functor_desc_option_0_98,
	&mercury_data_libs__options__enum_functor_desc_option_0_99,
	&mercury_data_libs__options__enum_functor_desc_option_0_100,
	&mercury_data_libs__options__enum_functor_desc_option_0_101,
	&mercury_data_libs__options__enum_functor_desc_option_0_102,
	&mercury_data_libs__options__enum_functor_desc_option_0_103,
	&mercury_data_libs__options__enum_functor_desc_option_0_104,
	&mercury_data_libs__options__enum_functor_desc_option_0_105,
	&mercury_data_libs__options__enum_functor_desc_option_0_106,
	&mercury_data_libs__options__enum_functor_desc_option_0_107,
	&mercury_data_libs__options__enum_functor_desc_option_0_108,
	&mercury_data_libs__options__enum_functor_desc_option_0_109,
	&mercury_data_libs__options__enum_functor_desc_option_0_110,
	&mercury_data_libs__options__enum_functor_desc_option_0_111,
	&mercury_data_libs__options__enum_functor_desc_option_0_112,
	&mercury_data_libs__options__enum_functor_desc_option_0_113,
	&mercury_data_libs__options__enum_functor_desc_option_0_114,
	&mercury_data_libs__options__enum_functor_desc_option_0_115,
	&mercury_data_libs__options__enum_functor_desc_option_0_116,
	&mercury_data_libs__options__enum_functor_desc_option_0_117,
	&mercury_data_libs__options__enum_functor_desc_option_0_118,
	&mercury_data_libs__options__enum_functor_desc_option_0_119,
	&mercury_data_libs__options__enum_functor_desc_option_0_120,
	&mercury_data_libs__options__enum_functor_desc_option_0_121,
	&mercury_data_libs__options__enum_functor_desc_option_0_122,
	&mercury_data_libs__options__enum_functor_desc_option_0_123,
	&mercury_data_libs__options__enum_functor_desc_option_0_124,
	&mercury_data_libs__options__enum_functor_desc_option_0_125,
	&mercury_data_libs__options__enum_functor_desc_option_0_126,
	&mercury_data_libs__options__enum_functor_desc_option_0_127,
	&mercury_data_libs__options__enum_functor_desc_option_0_128,
	&mercury_data_libs__options__enum_functor_desc_option_0_129,
	&mercury_data_libs__options__enum_functor_desc_option_0_130,
	&mercury_data_libs__options__enum_functor_desc_option_0_131,
	&mercury_data_libs__options__enum_functor_desc_option_0_132,
	&mercury_data_libs__options__enum_functor_desc_option_0_133,
	&mercury_data_libs__options__enum_functor_desc_option_0_134,
	&mercury_data_libs__options__enum_functor_desc_option_0_135,
	&mercury_data_libs__options__enum_functor_desc_option_0_136,
	&mercury_data_libs__options__enum_functor_desc_option_0_137,
	&mercury_data_libs__options__enum_functor_desc_option_0_138,
	&mercury_data_libs__options__enum_functor_desc_option_0_139,
	&mercury_data_libs__options__enum_functor_desc_option_0_140,
	&mercury_data_libs__options__enum_functor_desc_option_0_141,
	&mercury_data_libs__options__enum_functor_desc_option_0_142,
	&mercury_data_libs__options__enum_functor_desc_option_0_143,
	&mercury_data_libs__options__enum_functor_desc_option_0_144,
	&mercury_data_libs__options__enum_functor_desc_option_0_145,
	&mercury_data_libs__options__enum_functor_desc_option_0_146,
	&mercury_data_libs__options__enum_functor_desc_option_0_147,
	&mercury_data_libs__options__enum_functor_desc_option_0_148,
	&mercury_data_libs__options__enum_functor_desc_option_0_149,
	&mercury_data_libs__options__enum_functor_desc_option_0_150,
	&mercury_data_libs__options__enum_functor_desc_option_0_151,
	&mercury_data_libs__options__enum_functor_desc_option_0_152,
	&mercury_data_libs__options__enum_functor_desc_option_0_153,
	&mercury_data_libs__options__enum_functor_desc_option_0_154,
	&mercury_data_libs__options__enum_functor_desc_option_0_155,
	&mercury_data_libs__options__enum_functor_desc_option_0_156,
	&mercury_data_libs__options__enum_functor_desc_option_0_157,
	&mercury_data_libs__options__enum_functor_desc_option_0_158,
	&mercury_data_libs__options__enum_functor_desc_option_0_159,
	&mercury_data_libs__options__enum_functor_desc_option_0_160,
	&mercury_data_libs__options__enum_functor_desc_option_0_161,
	&mercury_data_libs__options__enum_functor_desc_option_0_162,
	&mercury_data_libs__options__enum_functor_desc_option_0_163,
	&mercury_data_libs__options__enum_functor_desc_option_0_164,
	&mercury_data_libs__options__enum_functor_desc_option_0_165,
	&mercury_data_libs__options__enum_functor_desc_option_0_166,
	&mercury_data_libs__options__enum_functor_desc_option_0_167,
	&mercury_data_libs__options__enum_functor_desc_option_0_168,
	&mercury_data_libs__options__enum_functor_desc_option_0_169,
	&mercury_data_libs__options__enum_functor_desc_option_0_170,
	&mercury_data_libs__options__enum_functor_desc_option_0_171,
	&mercury_data_libs__options__enum_functor_desc_option_0_172,
	&mercury_data_libs__options__enum_functor_desc_option_0_173,
	&mercury_data_libs__options__enum_functor_desc_option_0_174,
	&mercury_data_libs__options__enum_functor_desc_option_0_175,
	&mercury_data_libs__options__enum_functor_desc_option_0_176,
	&mercury_data_libs__options__enum_functor_desc_option_0_177,
	&mercury_data_libs__options__enum_functor_desc_option_0_178,
	&mercury_data_libs__options__enum_functor_desc_option_0_179,
	&mercury_data_libs__options__enum_functor_desc_option_0_180,
	&mercury_data_libs__options__enum_functor_desc_option_0_181,
	&mercury_data_libs__options__enum_functor_desc_option_0_182,
	&mercury_data_libs__options__enum_functor_desc_option_0_183,
	&mercury_data_libs__options__enum_functor_desc_option_0_184,
	&mercury_data_libs__options__enum_functor_desc_option_0_185,
	&mercury_data_libs__options__enum_functor_desc_option_0_186,
	&mercury_data_libs__options__enum_functor_desc_option_0_187,
	&mercury_data_libs__options__enum_functor_desc_option_0_188,
	&mercury_data_libs__options__enum_functor_desc_option_0_189,
	&mercury_data_libs__options__enum_functor_desc_option_0_190,
	&mercury_data_libs__options__enum_functor_desc_option_0_191,
	&mercury_data_libs__options__enum_functor_desc_option_0_192,
	&mercury_data_libs__options__enum_functor_desc_option_0_193,
	&mercury_data_libs__options__enum_functor_desc_option_0_194,
	&mercury_data_libs__options__enum_functor_desc_option_0_195,
	&mercury_data_libs__options__enum_functor_desc_option_0_196,
	&mercury_data_libs__options__enum_functor_desc_option_0_197,
	&mercury_data_libs__options__enum_functor_desc_option_0_198,
	&mercury_data_libs__options__enum_functor_desc_option_0_199,
	&mercury_data_libs__options__enum_functor_desc_option_0_200,
	&mercury_data_libs__options__enum_functor_desc_option_0_201,
	&mercury_data_libs__options__enum_functor_desc_option_0_202,
	&mercury_data_libs__options__enum_functor_desc_option_0_203,
	&mercury_data_libs__options__enum_functor_desc_option_0_204,
	&mercury_data_libs__options__enum_functor_desc_option_0_205,
	&mercury_data_libs__options__enum_functor_desc_option_0_206,
	&mercury_data_libs__options__enum_functor_desc_option_0_207,
	&mercury_data_libs__options__enum_functor_desc_option_0_208,
	&mercury_data_libs__options__enum_functor_desc_option_0_209,
	&mercury_data_libs__options__enum_functor_desc_option_0_210,
	&mercury_data_libs__options__enum_functor_desc_option_0_211,
	&mercury_data_libs__options__enum_functor_desc_option_0_212,
	&mercury_data_libs__options__enum_functor_desc_option_0_213,
	&mercury_data_libs__options__enum_functor_desc_option_0_214,
	&mercury_data_libs__options__enum_functor_desc_option_0_215,
	&mercury_data_libs__options__enum_functor_desc_option_0_216,
	&mercury_data_libs__options__enum_functor_desc_option_0_217,
	&mercury_data_libs__options__enum_functor_desc_option_0_218,
	&mercury_data_libs__options__enum_functor_desc_option_0_219,
	&mercury_data_libs__options__enum_functor_desc_option_0_220,
	&mercury_data_libs__options__enum_functor_desc_option_0_221,
	&mercury_data_libs__options__enum_functor_desc_option_0_222,
	&mercury_data_libs__options__enum_functor_desc_option_0_223,
	&mercury_data_libs__options__enum_functor_desc_option_0_224,
	&mercury_data_libs__options__enum_functor_desc_option_0_225,
	&mercury_data_libs__options__enum_functor_desc_option_0_226,
	&mercury_data_libs__options__enum_functor_desc_option_0_227,
	&mercury_data_libs__options__enum_functor_desc_option_0_228,
	&mercury_data_libs__options__enum_functor_desc_option_0_229,
	&mercury_data_libs__options__enum_functor_desc_option_0_230,
	&mercury_data_libs__options__enum_functor_desc_option_0_231,
	&mercury_data_libs__options__enum_functor_desc_option_0_232,
	&mercury_data_libs__options__enum_functor_desc_option_0_233,
	&mercury_data_libs__options__enum_functor_desc_option_0_234,
	&mercury_data_libs__options__enum_functor_desc_option_0_235,
	&mercury_data_libs__options__enum_functor_desc_option_0_236,
	&mercury_data_libs__options__enum_functor_desc_option_0_237,
	&mercury_data_libs__options__enum_functor_desc_option_0_238,
	&mercury_data_libs__options__enum_functor_desc_option_0_239,
	&mercury_data_libs__options__enum_functor_desc_option_0_240,
	&mercury_data_libs__options__enum_functor_desc_option_0_241,
	&mercury_data_libs__options__enum_functor_desc_option_0_242,
	&mercury_data_libs__options__enum_functor_desc_option_0_243,
	&mercury_data_libs__options__enum_functor_desc_option_0_244,
	&mercury_data_libs__options__enum_functor_desc_option_0_245,
	&mercury_data_libs__options__enum_functor_desc_option_0_246,
	&mercury_data_libs__options__enum_functor_desc_option_0_247,
	&mercury_data_libs__options__enum_functor_desc_option_0_248,
	&mercury_data_libs__options__enum_functor_desc_option_0_249,
	&mercury_data_libs__options__enum_functor_desc_option_0_250,
	&mercury_data_libs__options__enum_functor_desc_option_0_251,
	&mercury_data_libs__options__enum_functor_desc_option_0_252,
	&mercury_data_libs__options__enum_functor_desc_option_0_253,
	&mercury_data_libs__options__enum_functor_desc_option_0_254,
	&mercury_data_libs__options__enum_functor_desc_option_0_255,
	&mercury_data_libs__options__enum_functor_desc_option_0_256,
	&mercury_data_libs__options__enum_functor_desc_option_0_257,
	&mercury_data_libs__options__enum_functor_desc_option_0_258,
	&mercury_data_libs__options__enum_functor_desc_option_0_259,
	&mercury_data_libs__options__enum_functor_desc_option_0_260,
	&mercury_data_libs__options__enum_functor_desc_option_0_261,
	&mercury_data_libs__options__enum_functor_desc_option_0_262,
	&mercury_data_libs__options__enum_functor_desc_option_0_263,
	&mercury_data_libs__options__enum_functor_desc_option_0_264,
	&mercury_data_libs__options__enum_functor_desc_option_0_265,
	&mercury_data_libs__options__enum_functor_desc_option_0_266,
	&mercury_data_libs__options__enum_functor_desc_option_0_267,
	&mercury_data_libs__options__enum_functor_desc_option_0_268,
	&mercury_data_libs__options__enum_functor_desc_option_0_269,
	&mercury_data_libs__options__enum_functor_desc_option_0_270,
	&mercury_data_libs__options__enum_functor_desc_option_0_271,
	&mercury_data_libs__options__enum_functor_desc_option_0_272,
	&mercury_data_libs__options__enum_functor_desc_option_0_273,
	&mercury_data_libs__options__enum_functor_desc_option_0_274,
	&mercury_data_libs__options__enum_functor_desc_option_0_275,
	&mercury_data_libs__options__enum_functor_desc_option_0_276,
	&mercury_data_libs__options__enum_functor_desc_option_0_277,
	&mercury_data_libs__options__enum_functor_desc_option_0_278,
	&mercury_data_libs__options__enum_functor_desc_option_0_279,
	&mercury_data_libs__options__enum_functor_desc_option_0_280,
	&mercury_data_libs__options__enum_functor_desc_option_0_281,
	&mercury_data_libs__options__enum_functor_desc_option_0_282,
	&mercury_data_libs__options__enum_functor_desc_option_0_283,
	&mercury_data_libs__options__enum_functor_desc_option_0_284,
	&mercury_data_libs__options__enum_functor_desc_option_0_285,
	&mercury_data_libs__options__enum_functor_desc_option_0_286,
	&mercury_data_libs__options__enum_functor_desc_option_0_287,
	&mercury_data_libs__options__enum_functor_desc_option_0_288,
	&mercury_data_libs__options__enum_functor_desc_option_0_289,
	&mercury_data_libs__options__enum_functor_desc_option_0_290,
	&mercury_data_libs__options__enum_functor_desc_option_0_291,
	&mercury_data_libs__options__enum_functor_desc_option_0_292,
	&mercury_data_libs__options__enum_functor_desc_option_0_293,
	&mercury_data_libs__options__enum_functor_desc_option_0_294,
	&mercury_data_libs__options__enum_functor_desc_option_0_295,
	&mercury_data_libs__options__enum_functor_desc_option_0_296,
	&mercury_data_libs__options__enum_functor_desc_option_0_297,
	&mercury_data_libs__options__enum_functor_desc_option_0_298,
	&mercury_data_libs__options__enum_functor_desc_option_0_299,
	&mercury_data_libs__options__enum_functor_desc_option_0_300,
	&mercury_data_libs__options__enum_functor_desc_option_0_301,
	&mercury_data_libs__options__enum_functor_desc_option_0_302,
	&mercury_data_libs__options__enum_functor_desc_option_0_303,
	&mercury_data_libs__options__enum_functor_desc_option_0_304,
	&mercury_data_libs__options__enum_functor_desc_option_0_305,
	&mercury_data_libs__options__enum_functor_desc_option_0_306,
	&mercury_data_libs__options__enum_functor_desc_option_0_307,
	&mercury_data_libs__options__enum_functor_desc_option_0_308,
	&mercury_data_libs__options__enum_functor_desc_option_0_309,
	&mercury_data_libs__options__enum_functor_desc_option_0_310,
	&mercury_data_libs__options__enum_functor_desc_option_0_311,
	&mercury_data_libs__options__enum_functor_desc_option_0_312,
	&mercury_data_libs__options__enum_functor_desc_option_0_313,
	&mercury_data_libs__options__enum_functor_desc_option_0_314,
	&mercury_data_libs__options__enum_functor_desc_option_0_315,
	&mercury_data_libs__options__enum_functor_desc_option_0_316,
	&mercury_data_libs__options__enum_functor_desc_option_0_317,
	&mercury_data_libs__options__enum_functor_desc_option_0_318,
	&mercury_data_libs__options__enum_functor_desc_option_0_319,
	&mercury_data_libs__options__enum_functor_desc_option_0_320,
	&mercury_data_libs__options__enum_functor_desc_option_0_321,
	&mercury_data_libs__options__enum_functor_desc_option_0_322,
	&mercury_data_libs__options__enum_functor_desc_option_0_323,
	&mercury_data_libs__options__enum_functor_desc_option_0_324,
	&mercury_data_libs__options__enum_functor_desc_option_0_325,
	&mercury_data_libs__options__enum_functor_desc_option_0_326,
	&mercury_data_libs__options__enum_functor_desc_option_0_327,
	&mercury_data_libs__options__enum_functor_desc_option_0_328,
	&mercury_data_libs__options__enum_functor_desc_option_0_329,
	&mercury_data_libs__options__enum_functor_desc_option_0_330,
	&mercury_data_libs__options__enum_functor_desc_option_0_331,
	&mercury_data_libs__options__enum_functor_desc_option_0_332,
	&mercury_data_libs__options__enum_functor_desc_option_0_333,
	&mercury_data_libs__options__enum_functor_desc_option_0_334,
	&mercury_data_libs__options__enum_functor_desc_option_0_335,
	&mercury_data_libs__options__enum_functor_desc_option_0_336,
	&mercury_data_libs__options__enum_functor_desc_option_0_337,
	&mercury_data_libs__options__enum_functor_desc_option_0_338,
	&mercury_data_libs__options__enum_functor_desc_option_0_339,
	&mercury_data_libs__options__enum_functor_desc_option_0_340,
	&mercury_data_libs__options__enum_functor_desc_option_0_341,
	&mercury_data_libs__options__enum_functor_desc_option_0_342,
	&mercury_data_libs__options__enum_functor_desc_option_0_343,
	&mercury_data_libs__options__enum_functor_desc_option_0_344,
	&mercury_data_libs__options__enum_functor_desc_option_0_345,
	&mercury_data_libs__options__enum_functor_desc_option_0_346,
	&mercury_data_libs__options__enum_functor_desc_option_0_347,
	&mercury_data_libs__options__enum_functor_desc_option_0_348,
	&mercury_data_libs__options__enum_functor_desc_option_0_349,
	&mercury_data_libs__options__enum_functor_desc_option_0_350,
	&mercury_data_libs__options__enum_functor_desc_option_0_351,
	&mercury_data_libs__options__enum_functor_desc_option_0_352,
	&mercury_data_libs__options__enum_functor_desc_option_0_353,
	&mercury_data_libs__options__enum_functor_desc_option_0_354,
	&mercury_data_libs__options__enum_functor_desc_option_0_355,
	&mercury_data_libs__options__enum_functor_desc_option_0_356,
	&mercury_data_libs__options__enum_functor_desc_option_0_357,
	&mercury_data_libs__options__enum_functor_desc_option_0_358,
	&mercury_data_libs__options__enum_functor_desc_option_0_359,
	&mercury_data_libs__options__enum_functor_desc_option_0_360,
	&mercury_data_libs__options__enum_functor_desc_option_0_361,
	&mercury_data_libs__options__enum_functor_desc_option_0_362,
	&mercury_data_libs__options__enum_functor_desc_option_0_363,
	&mercury_data_libs__options__enum_functor_desc_option_0_364,
	&mercury_data_libs__options__enum_functor_desc_option_0_365,
	&mercury_data_libs__options__enum_functor_desc_option_0_366,
	&mercury_data_libs__options__enum_functor_desc_option_0_367,
	&mercury_data_libs__options__enum_functor_desc_option_0_368,
	&mercury_data_libs__options__enum_functor_desc_option_0_369,
	&mercury_data_libs__options__enum_functor_desc_option_0_370,
	&mercury_data_libs__options__enum_functor_desc_option_0_371,
	&mercury_data_libs__options__enum_functor_desc_option_0_372,
	&mercury_data_libs__options__enum_functor_desc_option_0_373,
	&mercury_data_libs__options__enum_functor_desc_option_0_374,
	&mercury_data_libs__options__enum_functor_desc_option_0_375,
	&mercury_data_libs__options__enum_functor_desc_option_0_376,
	&mercury_data_libs__options__enum_functor_desc_option_0_377,
	&mercury_data_libs__options__enum_functor_desc_option_0_378,
	&mercury_data_libs__options__enum_functor_desc_option_0_379,
	&mercury_data_libs__options__enum_functor_desc_option_0_380,
	&mercury_data_libs__options__enum_functor_desc_option_0_381,
	&mercury_data_libs__options__enum_functor_desc_option_0_382,
	&mercury_data_libs__options__enum_functor_desc_option_0_383,
	&mercury_data_libs__options__enum_functor_desc_option_0_384,
	&mercury_data_libs__options__enum_functor_desc_option_0_385,
	&mercury_data_libs__options__enum_functor_desc_option_0_386,
	&mercury_data_libs__options__enum_functor_desc_option_0_387,
	&mercury_data_libs__options__enum_functor_desc_option_0_388,
	&mercury_data_libs__options__enum_functor_desc_option_0_389,
	&mercury_data_libs__options__enum_functor_desc_option_0_390,
	&mercury_data_libs__options__enum_functor_desc_option_0_391,
	&mercury_data_libs__options__enum_functor_desc_option_0_392,
	&mercury_data_libs__options__enum_functor_desc_option_0_393,
	&mercury_data_libs__options__enum_functor_desc_option_0_394,
	&mercury_data_libs__options__enum_functor_desc_option_0_395,
	&mercury_data_libs__options__enum_functor_desc_option_0_396,
	&mercury_data_libs__options__enum_functor_desc_option_0_397,
	&mercury_data_libs__options__enum_functor_desc_option_0_398,
	&mercury_data_libs__options__enum_functor_desc_option_0_399,
	&mercury_data_libs__options__enum_functor_desc_option_0_400,
	&mercury_data_libs__options__enum_functor_desc_option_0_401,
	&mercury_data_libs__options__enum_functor_desc_option_0_402,
	&mercury_data_libs__options__enum_functor_desc_option_0_403,
	&mercury_data_libs__options__enum_functor_desc_option_0_404,
	&mercury_data_libs__options__enum_functor_desc_option_0_405,
	&mercury_data_libs__options__enum_functor_desc_option_0_406,
	&mercury_data_libs__options__enum_functor_desc_option_0_407,
	&mercury_data_libs__options__enum_functor_desc_option_0_408,
	&mercury_data_libs__options__enum_functor_desc_option_0_409,
	&mercury_data_libs__options__enum_functor_desc_option_0_410,
	&mercury_data_libs__options__enum_functor_desc_option_0_411,
	&mercury_data_libs__options__enum_functor_desc_option_0_412,
	&mercury_data_libs__options__enum_functor_desc_option_0_413,
	&mercury_data_libs__options__enum_functor_desc_option_0_414,
	&mercury_data_libs__options__enum_functor_desc_option_0_415,
	&mercury_data_libs__options__enum_functor_desc_option_0_416,
	&mercury_data_libs__options__enum_functor_desc_option_0_417,
	&mercury_data_libs__options__enum_functor_desc_option_0_418,
	&mercury_data_libs__options__enum_functor_desc_option_0_419,
	&mercury_data_libs__options__enum_functor_desc_option_0_420,
	&mercury_data_libs__options__enum_functor_desc_option_0_421,
	&mercury_data_libs__options__enum_functor_desc_option_0_422,
	&mercury_data_libs__options__enum_functor_desc_option_0_423,
	&mercury_data_libs__options__enum_functor_desc_option_0_424,
	&mercury_data_libs__options__enum_functor_desc_option_0_425,
	&mercury_data_libs__options__enum_functor_desc_option_0_426,
	&mercury_data_libs__options__enum_functor_desc_option_0_427,
	&mercury_data_libs__options__enum_functor_desc_option_0_428,
	&mercury_data_libs__options__enum_functor_desc_option_0_429,
	&mercury_data_libs__options__enum_functor_desc_option_0_430,
	&mercury_data_libs__options__enum_functor_desc_option_0_431,
	&mercury_data_libs__options__enum_functor_desc_option_0_432,
	&mercury_data_libs__options__enum_functor_desc_option_0_433,
	&mercury_data_libs__options__enum_functor_desc_option_0_434,
	&mercury_data_libs__options__enum_functor_desc_option_0_435,
	&mercury_data_libs__options__enum_functor_desc_option_0_436,
	&mercury_data_libs__options__enum_functor_desc_option_0_437,
	&mercury_data_libs__options__enum_functor_desc_option_0_438,
	&mercury_data_libs__options__enum_functor_desc_option_0_439,
	&mercury_data_libs__options__enum_functor_desc_option_0_440,
	&mercury_data_libs__options__enum_functor_desc_option_0_441,
	&mercury_data_libs__options__enum_functor_desc_option_0_442,
	&mercury_data_libs__options__enum_functor_desc_option_0_443,
	&mercury_data_libs__options__enum_functor_desc_option_0_444,
	&mercury_data_libs__options__enum_functor_desc_option_0_445,
	&mercury_data_libs__options__enum_functor_desc_option_0_446,
	&mercury_data_libs__options__enum_functor_desc_option_0_447,
	&mercury_data_libs__options__enum_functor_desc_option_0_448,
	&mercury_data_libs__options__enum_functor_desc_option_0_449,
	&mercury_data_libs__options__enum_functor_desc_option_0_450,
	&mercury_data_libs__options__enum_functor_desc_option_0_451,
	&mercury_data_libs__options__enum_functor_desc_option_0_452,
	&mercury_data_libs__options__enum_functor_desc_option_0_453,
	&mercury_data_libs__options__enum_functor_desc_option_0_454,
	&mercury_data_libs__options__enum_functor_desc_option_0_455,
	&mercury_data_libs__options__enum_functor_desc_option_0_456,
	&mercury_data_libs__options__enum_functor_desc_option_0_457,
	&mercury_data_libs__options__enum_functor_desc_option_0_458,
	&mercury_data_libs__options__enum_functor_desc_option_0_459,
	&mercury_data_libs__options__enum_functor_desc_option_0_460,
	&mercury_data_libs__options__enum_functor_desc_option_0_461,
	&mercury_data_libs__options__enum_functor_desc_option_0_462,
	&mercury_data_libs__options__enum_functor_desc_option_0_463,
	&mercury_data_libs__options__enum_functor_desc_option_0_464,
	&mercury_data_libs__options__enum_functor_desc_option_0_465,
	&mercury_data_libs__options__enum_functor_desc_option_0_466,
	&mercury_data_libs__options__enum_functor_desc_option_0_467,
	&mercury_data_libs__options__enum_functor_desc_option_0_468,
	&mercury_data_libs__options__enum_functor_desc_option_0_469,
	&mercury_data_libs__options__enum_functor_desc_option_0_470,
	&mercury_data_libs__options__enum_functor_desc_option_0_471,
	&mercury_data_libs__options__enum_functor_desc_option_0_472,
	&mercury_data_libs__options__enum_functor_desc_option_0_473,
	&mercury_data_libs__options__enum_functor_desc_option_0_474,
	&mercury_data_libs__options__enum_functor_desc_option_0_475,
	&mercury_data_libs__options__enum_functor_desc_option_0_476,
	&mercury_data_libs__options__enum_functor_desc_option_0_477,
	&mercury_data_libs__options__enum_functor_desc_option_0_478,
	&mercury_data_libs__options__enum_functor_desc_option_0_479,
	&mercury_data_libs__options__enum_functor_desc_option_0_480,
	&mercury_data_libs__options__enum_functor_desc_option_0_481,
	&mercury_data_libs__options__enum_functor_desc_option_0_482,
	&mercury_data_libs__options__enum_functor_desc_option_0_483,
	&mercury_data_libs__options__enum_functor_desc_option_0_484,
	&mercury_data_libs__options__enum_functor_desc_option_0_485,
	&mercury_data_libs__options__enum_functor_desc_option_0_486,
	&mercury_data_libs__options__enum_functor_desc_option_0_487,
	&mercury_data_libs__options__enum_functor_desc_option_0_488,
	&mercury_data_libs__options__enum_functor_desc_option_0_489,
	&mercury_data_libs__options__enum_functor_desc_option_0_490,
	&mercury_data_libs__options__enum_functor_desc_option_0_491,
	&mercury_data_libs__options__enum_functor_desc_option_0_492,
	&mercury_data_libs__options__enum_functor_desc_option_0_493,
	&mercury_data_libs__options__enum_functor_desc_option_0_494,
	&mercury_data_libs__options__enum_functor_desc_option_0_495,
	&mercury_data_libs__options__enum_functor_desc_option_0_496,
	&mercury_data_libs__options__enum_functor_desc_option_0_497,
	&mercury_data_libs__options__enum_functor_desc_option_0_498,
	&mercury_data_libs__options__enum_functor_desc_option_0_499,
	&mercury_data_libs__options__enum_functor_desc_option_0_500,
	&mercury_data_libs__options__enum_functor_desc_option_0_501,
	&mercury_data_libs__options__enum_functor_desc_option_0_502,
	&mercury_data_libs__options__enum_functor_desc_option_0_503,
	&mercury_data_libs__options__enum_functor_desc_option_0_504,
	&mercury_data_libs__options__enum_functor_desc_option_0_505,
	&mercury_data_libs__options__enum_functor_desc_option_0_506,
	&mercury_data_libs__options__enum_functor_desc_option_0_507,
	&mercury_data_libs__options__enum_functor_desc_option_0_508,
	&mercury_data_libs__options__enum_functor_desc_option_0_509,
	&mercury_data_libs__options__enum_functor_desc_option_0_510,
	&mercury_data_libs__options__enum_functor_desc_option_0_511,
	&mercury_data_libs__options__enum_functor_desc_option_0_512,
	&mercury_data_libs__options__enum_functor_desc_option_0_513,
	&mercury_data_libs__options__enum_functor_desc_option_0_514,
	&mercury_data_libs__options__enum_functor_desc_option_0_515,
	&mercury_data_libs__options__enum_functor_desc_option_0_516,
	&mercury_data_libs__options__enum_functor_desc_option_0_517,
	&mercury_data_libs__options__enum_functor_desc_option_0_518,
	&mercury_data_libs__options__enum_functor_desc_option_0_519,
	&mercury_data_libs__options__enum_functor_desc_option_0_520,
	&mercury_data_libs__options__enum_functor_desc_option_0_521,
	&mercury_data_libs__options__enum_functor_desc_option_0_522,
	&mercury_data_libs__options__enum_functor_desc_option_0_523,
	&mercury_data_libs__options__enum_functor_desc_option_0_524,
	&mercury_data_libs__options__enum_functor_desc_option_0_525,
	&mercury_data_libs__options__enum_functor_desc_option_0_526,
	&mercury_data_libs__options__enum_functor_desc_option_0_527,
	&mercury_data_libs__options__enum_functor_desc_option_0_528,
	&mercury_data_libs__options__enum_functor_desc_option_0_529,
	&mercury_data_libs__options__enum_functor_desc_option_0_530,
	&mercury_data_libs__options__enum_functor_desc_option_0_531,
	&mercury_data_libs__options__enum_functor_desc_option_0_532,
	&mercury_data_libs__options__enum_functor_desc_option_0_533,
	&mercury_data_libs__options__enum_functor_desc_option_0_534,
	&mercury_data_libs__options__enum_functor_desc_option_0_535,
	&mercury_data_libs__options__enum_functor_desc_option_0_536,
	&mercury_data_libs__options__enum_functor_desc_option_0_537,
	&mercury_data_libs__options__enum_functor_desc_option_0_538,
	&mercury_data_libs__options__enum_functor_desc_option_0_539,
	&mercury_data_libs__options__enum_functor_desc_option_0_540,
	&mercury_data_libs__options__enum_functor_desc_option_0_541,
	&mercury_data_libs__options__enum_functor_desc_option_0_542,
	&mercury_data_libs__options__enum_functor_desc_option_0_543,
	&mercury_data_libs__options__enum_functor_desc_option_0_544,
	&mercury_data_libs__options__enum_functor_desc_option_0_545,
	&mercury_data_libs__options__enum_functor_desc_option_0_546,
	&mercury_data_libs__options__enum_functor_desc_option_0_547,
	&mercury_data_libs__options__enum_functor_desc_option_0_548,
	&mercury_data_libs__options__enum_functor_desc_option_0_549,
	&mercury_data_libs__options__enum_functor_desc_option_0_550,
	&mercury_data_libs__options__enum_functor_desc_option_0_551,
	&mercury_data_libs__options__enum_functor_desc_option_0_552,
	&mercury_data_libs__options__enum_functor_desc_option_0_553,
	&mercury_data_libs__options__enum_functor_desc_option_0_554,
	&mercury_data_libs__options__enum_functor_desc_option_0_555,
	&mercury_data_libs__options__enum_functor_desc_option_0_556,
	&mercury_data_libs__options__enum_functor_desc_option_0_557,
	&mercury_data_libs__options__enum_functor_desc_option_0_558,
	&mercury_data_libs__options__enum_functor_desc_option_0_559,
	&mercury_data_libs__options__enum_functor_desc_option_0_560,
	&mercury_data_libs__options__enum_functor_desc_option_0_561,
	&mercury_data_libs__options__enum_functor_desc_option_0_562,
	&mercury_data_libs__options__enum_functor_desc_option_0_563,
	&mercury_data_libs__options__enum_functor_desc_option_0_564,
	&mercury_data_libs__options__enum_functor_desc_option_0_565,
	&mercury_data_libs__options__enum_functor_desc_option_0_566,
	&mercury_data_libs__options__enum_functor_desc_option_0_567,
	&mercury_data_libs__options__enum_functor_desc_option_0_568,
	&mercury_data_libs__options__enum_functor_desc_option_0_569,
	&mercury_data_libs__options__enum_functor_desc_option_0_570,
	&mercury_data_libs__options__enum_functor_desc_option_0_571,
	&mercury_data_libs__options__enum_functor_desc_option_0_572,
	&mercury_data_libs__options__enum_functor_desc_option_0_573,
	&mercury_data_libs__options__enum_functor_desc_option_0_574,
	&mercury_data_libs__options__enum_functor_desc_option_0_575,
	&mercury_data_libs__options__enum_functor_desc_option_0_576,
	&mercury_data_libs__options__enum_functor_desc_option_0_577,
	&mercury_data_libs__options__enum_functor_desc_option_0_578,
	&mercury_data_libs__options__enum_functor_desc_option_0_579,
	&mercury_data_libs__options__enum_functor_desc_option_0_580,
	&mercury_data_libs__options__enum_functor_desc_option_0_581,
	&mercury_data_libs__options__enum_functor_desc_option_0_582,
	&mercury_data_libs__options__enum_functor_desc_option_0_583,
	&mercury_data_libs__options__enum_functor_desc_option_0_584,
	&mercury_data_libs__options__enum_functor_desc_option_0_585,
	&mercury_data_libs__options__enum_functor_desc_option_0_586,
	&mercury_data_libs__options__enum_functor_desc_option_0_587,
	&mercury_data_libs__options__enum_functor_desc_option_0_588,
	&mercury_data_libs__options__enum_functor_desc_option_0_589,
	&mercury_data_libs__options__enum_functor_desc_option_0_590,
	&mercury_data_libs__options__enum_functor_desc_option_0_591,
	&mercury_data_libs__options__enum_functor_desc_option_0_592,
	&mercury_data_libs__options__enum_functor_desc_option_0_593,
	&mercury_data_libs__options__enum_functor_desc_option_0_594,
	&mercury_data_libs__options__enum_functor_desc_option_0_595,
	&mercury_data_libs__options__enum_functor_desc_option_0_596,
	&mercury_data_libs__options__enum_functor_desc_option_0_597,
	&mercury_data_libs__options__enum_functor_desc_option_0_598,
	&mercury_data_libs__options__enum_functor_desc_option_0_599,
	&mercury_data_libs__options__enum_functor_desc_option_0_600,
	&mercury_data_libs__options__enum_functor_desc_option_0_601,
	&mercury_data_libs__options__enum_functor_desc_option_0_602,
	&mercury_data_libs__options__enum_functor_desc_option_0_603,
	&mercury_data_libs__options__enum_functor_desc_option_0_604,
	&mercury_data_libs__options__enum_functor_desc_option_0_605,
	&mercury_data_libs__options__enum_functor_desc_option_0_606,
	&mercury_data_libs__options__enum_functor_desc_option_0_607,
	&mercury_data_libs__options__enum_functor_desc_option_0_608,
	&mercury_data_libs__options__enum_functor_desc_option_0_609,
	&mercury_data_libs__options__enum_functor_desc_option_0_610,
	&mercury_data_libs__options__enum_functor_desc_option_0_611,
	&mercury_data_libs__options__enum_functor_desc_option_0_612,
	&mercury_data_libs__options__enum_functor_desc_option_0_613,
	&mercury_data_libs__options__enum_functor_desc_option_0_614,
	&mercury_data_libs__options__enum_functor_desc_option_0_615,
	&mercury_data_libs__options__enum_functor_desc_option_0_616,
	&mercury_data_libs__options__enum_functor_desc_option_0_617
};

const MR_EnumFunctorDescPtr mercury_data_libs__options__enum_name_ordered_option_0[] = {
	&mercury_data_libs__options__enum_functor_desc_option_0_240,
	&mercury_data_libs__options__enum_functor_desc_option_0_428,
	&mercury_data_libs__options__enum_functor_desc_option_0_309,
	&mercury_data_libs__options__enum_functor_desc_option_0_271,
	&mercury_data_libs__options__enum_functor_desc_option_0_379,
	&mercury_data_libs__options__enum_functor_desc_option_0_146,
	&mercury_data_libs__options__enum_functor_desc_option_0_528,
	&mercury_data_libs__options__enum_functor_desc_option_0_378,
	&mercury_data_libs__options__enum_functor_desc_option_0_410,
	&mercury_data_libs__options__enum_functor_desc_option_0_409,
	&mercury_data_libs__options__enum_functor_desc_option_0_371,
	&mercury_data_libs__options__enum_functor_desc_option_0_368,
	&mercury_data_libs__options__enum_functor_desc_option_0_308,
	&mercury_data_libs__options__enum_functor_desc_option_0_614,
	&mercury_data_libs__options__enum_functor_desc_option_0_307,
	&mercury_data_libs__options__enum_functor_desc_option_0_463,
	&mercury_data_libs__options__enum_functor_desc_option_0_406,
	&mercury_data_libs__options__enum_functor_desc_option_0_223,
	&mercury_data_libs__options__enum_functor_desc_option_0_102,
	&mercury_data_libs__options__enum_functor_desc_option_0_121,
	&mercury_data_libs__options__enum_functor_desc_option_0_237,
	&mercury_data_libs__options__enum_functor_desc_option_0_239,
	&mercury_data_libs__options__enum_functor_desc_option_0_138,
	&mercury_data_libs__options__enum_functor_desc_option_0_139,
	&mercury_data_libs__options__enum_functor_desc_option_0_419,
	&mercury_data_libs__options__enum_functor_desc_option_0_214,
	&mercury_data_libs__options__enum_functor_desc_option_0_243,
	&mercury_data_libs__options__enum_functor_desc_option_0_215,
	&mercury_data_libs__options__enum_functor_desc_option_0_477,
	&mercury_data_libs__options__enum_functor_desc_option_0_473,
	&mercury_data_libs__options__enum_functor_desc_option_0_461,
	&mercury_data_libs__options__enum_functor_desc_option_0_462,
	&mercury_data_libs__options__enum_functor_desc_option_0_246,
	&mercury_data_libs__options__enum_functor_desc_option_0_244,
	&mercury_data_libs__options__enum_functor_desc_option_0_458,
	&mercury_data_libs__options__enum_functor_desc_option_0_459,
	&mercury_data_libs__options__enum_functor_desc_option_0_467,
	&mercury_data_libs__options__enum_functor_desc_option_0_471,
	&mercury_data_libs__options__enum_functor_desc_option_0_469,
	&mercury_data_libs__options__enum_functor_desc_option_0_466,
	&mercury_data_libs__options__enum_functor_desc_option_0_472,
	&mercury_data_libs__options__enum_functor_desc_option_0_468,
	&mercury_data_libs__options__enum_functor_desc_option_0_470,
	&mercury_data_libs__options__enum_functor_desc_option_0_465,
	&mercury_data_libs__options__enum_functor_desc_option_0_402,
	&mercury_data_libs__options__enum_functor_desc_option_0_440,
	&mercury_data_libs__options__enum_functor_desc_option_0_433,
	&mercury_data_libs__options__enum_functor_desc_option_0_322,
	&mercury_data_libs__options__enum_functor_desc_option_0_434,
	&mercury_data_libs__options__enum_functor_desc_option_0_320,
	&mercury_data_libs__options__enum_functor_desc_option_0_321,
	&mercury_data_libs__options__enum_functor_desc_option_0_291,
	&mercury_data_libs__options__enum_functor_desc_option_0_90,
	&mercury_data_libs__options__enum_functor_desc_option_0_158,
	&mercury_data_libs__options__enum_functor_desc_option_0_91,
	&mercury_data_libs__options__enum_functor_desc_option_0_615,
	&mercury_data_libs__options__enum_functor_desc_option_0_216,
	&mercury_data_libs__options__enum_functor_desc_option_0_594,
	&mercury_data_libs__options__enum_functor_desc_option_0_341,
	&mercury_data_libs__options__enum_functor_desc_option_0_323,
	&mercury_data_libs__options__enum_functor_desc_option_0_380,
	&mercury_data_libs__options__enum_functor_desc_option_0_86,
	&mercury_data_libs__options__enum_functor_desc_option_0_177,
	&mercury_data_libs__options__enum_functor_desc_option_0_178,
	&mercury_data_libs__options__enum_functor_desc_option_0_537,
	&mercury_data_libs__options__enum_functor_desc_option_0_539,
	&mercury_data_libs__options__enum_functor_desc_option_0_538,
	&mercury_data_libs__options__enum_functor_desc_option_0_612,
	&mercury_data_libs__options__enum_functor_desc_option_0_490,
	&mercury_data_libs__options__enum_functor_desc_option_0_491,
	&mercury_data_libs__options__enum_functor_desc_option_0_68,
	&mercury_data_libs__options__enum_functor_desc_option_0_58,
	&mercury_data_libs__options__enum_functor_desc_option_0_56,
	&mercury_data_libs__options__enum_functor_desc_option_0_57,
	&mercury_data_libs__options__enum_functor_desc_option_0_64,
	&mercury_data_libs__options__enum_functor_desc_option_0_73,
	&mercury_data_libs__options__enum_functor_desc_option_0_71,
	&mercury_data_libs__options__enum_functor_desc_option_0_65,
	&mercury_data_libs__options__enum_functor_desc_option_0_67,
	&mercury_data_libs__options__enum_functor_desc_option_0_72,
	&mercury_data_libs__options__enum_functor_desc_option_0_70,
	&mercury_data_libs__options__enum_functor_desc_option_0_51,
	&mercury_data_libs__options__enum_functor_desc_option_0_53,
	&mercury_data_libs__options__enum_functor_desc_option_0_55,
	&mercury_data_libs__options__enum_functor_desc_option_0_52,
	&mercury_data_libs__options__enum_functor_desc_option_0_54,
	&mercury_data_libs__options__enum_functor_desc_option_0_59,
	&mercury_data_libs__options__enum_functor_desc_option_0_61,
	&mercury_data_libs__options__enum_functor_desc_option_0_62,
	&mercury_data_libs__options__enum_functor_desc_option_0_63,
	&mercury_data_libs__options__enum_functor_desc_option_0_66,
	&mercury_data_libs__options__enum_functor_desc_option_0_60,
	&mercury_data_libs__options__enum_functor_desc_option_0_69,
	&mercury_data_libs__options__enum_functor_desc_option_0_50,
	&mercury_data_libs__options__enum_functor_desc_option_0_166,
	&mercury_data_libs__options__enum_functor_desc_option_0_188,
	&mercury_data_libs__options__enum_functor_desc_option_0_170,
	&mercury_data_libs__options__enum_functor_desc_option_0_363,
	&mercury_data_libs__options__enum_functor_desc_option_0_365,
	&mercury_data_libs__options__enum_functor_desc_option_0_364,
	&mercury_data_libs__options__enum_functor_desc_option_0_367,
	&mercury_data_libs__options__enum_functor_desc_option_0_366,
	&mercury_data_libs__options__enum_functor_desc_option_0_360,
	&mercury_data_libs__options__enum_functor_desc_option_0_116,
	&mercury_data_libs__options__enum_functor_desc_option_0_249,
	&mercury_data_libs__options__enum_functor_desc_option_0_526,
	&mercury_data_libs__options__enum_functor_desc_option_0_544,
	&mercury_data_libs__options__enum_functor_desc_option_0_412,
	&mercury_data_libs__options__enum_functor_desc_option_0_414,
	&mercury_data_libs__options__enum_functor_desc_option_0_228,
	&mercury_data_libs__options__enum_functor_desc_option_0_48,
	&mercury_data_libs__options__enum_functor_desc_option_0_257,
	&mercury_data_libs__options__enum_functor_desc_option_0_256,
	&mercury_data_libs__options__enum_functor_desc_option_0_260,
	&mercury_data_libs__options__enum_functor_desc_option_0_381,
	&mercury_data_libs__options__enum_functor_desc_option_0_487,
	&mercury_data_libs__options__enum_functor_desc_option_0_126,
	&mercury_data_libs__options__enum_functor_desc_option_0_129,
	&mercury_data_libs__options__enum_functor_desc_option_0_131,
	&mercury_data_libs__options__enum_functor_desc_option_0_130,
	&mercury_data_libs__options__enum_functor_desc_option_0_127,
	&mercury_data_libs__options__enum_functor_desc_option_0_128,
	&mercury_data_libs__options__enum_functor_desc_option_0_133,
	&mercury_data_libs__options__enum_functor_desc_option_0_132,
	&mercury_data_libs__options__enum_functor_desc_option_0_125,
	&mercury_data_libs__options__enum_functor_desc_option_0_431,
	&mercury_data_libs__options__enum_functor_desc_option_0_452,
	&mercury_data_libs__options__enum_functor_desc_option_0_163,
	&mercury_data_libs__options__enum_functor_desc_option_0_493,
	&mercury_data_libs__options__enum_functor_desc_option_0_495,
	&mercury_data_libs__options__enum_functor_desc_option_0_497,
	&mercury_data_libs__options__enum_functor_desc_option_0_500,
	&mercury_data_libs__options__enum_functor_desc_option_0_494,
	&mercury_data_libs__options__enum_functor_desc_option_0_499,
	&mercury_data_libs__options__enum_functor_desc_option_0_498,
	&mercury_data_libs__options__enum_functor_desc_option_0_164,
	&mercury_data_libs__options__enum_functor_desc_option_0_456,
	&mercury_data_libs__options__enum_functor_desc_option_0_88,
	&mercury_data_libs__options__enum_functor_desc_option_0_153,
	&mercury_data_libs__options__enum_functor_desc_option_0_454,
	&mercury_data_libs__options__enum_functor_desc_option_0_342,
	&mercury_data_libs__options__enum_functor_desc_option_0_165,
	&mercury_data_libs__options__enum_functor_desc_option_0_113,
	&mercury_data_libs__options__enum_functor_desc_option_0_534,
	&mercury_data_libs__options__enum_functor_desc_option_0_616,
	&mercury_data_libs__options__enum_functor_desc_option_0_191,
	&mercury_data_libs__options__enum_functor_desc_option_0_203,
	&mercury_data_libs__options__enum_functor_desc_option_0_580,
	&mercury_data_libs__options__enum_functor_desc_option_0_531,
	&mercury_data_libs__options__enum_functor_desc_option_0_604,
	&mercury_data_libs__options__enum_functor_desc_option_0_294,
	&mercury_data_libs__options__enum_functor_desc_option_0_293,
	&mercury_data_libs__options__enum_functor_desc_option_0_617,
	&mercury_data_libs__options__enum_functor_desc_option_0_606,
	&mercury_data_libs__options__enum_functor_desc_option_0_43,
	&mercury_data_libs__options__enum_functor_desc_option_0_592,
	&mercury_data_libs__options__enum_functor_desc_option_0_361,
	&mercury_data_libs__options__enum_functor_desc_option_0_118,
	&mercury_data_libs__options__enum_functor_desc_option_0_115,
	&mercury_data_libs__options__enum_functor_desc_option_0_122,
	&mercury_data_libs__options__enum_functor_desc_option_0_319,
	&mercury_data_libs__options__enum_functor_desc_option_0_611,
	&mercury_data_libs__options__enum_functor_desc_option_0_144,
	&mercury_data_libs__options__enum_functor_desc_option_0_192,
	&mercury_data_libs__options__enum_functor_desc_option_0_222,
	&mercury_data_libs__options__enum_functor_desc_option_0_295,
	&mercury_data_libs__options__enum_functor_desc_option_0_227,
	&mercury_data_libs__options__enum_functor_desc_option_0_221,
	&mercury_data_libs__options__enum_functor_desc_option_0_119,
	&mercury_data_libs__options__enum_functor_desc_option_0_83,
	&mercury_data_libs__options__enum_functor_desc_option_0_82,
	&mercury_data_libs__options__enum_functor_desc_option_0_100,
	&mercury_data_libs__options__enum_functor_desc_option_0_101,
	&mercury_data_libs__options__enum_functor_desc_option_0_84,
	&mercury_data_libs__options__enum_functor_desc_option_0_81,
	&mercury_data_libs__options__enum_functor_desc_option_0_85,
	&mercury_data_libs__options__enum_functor_desc_option_0_432,
	&mercury_data_libs__options__enum_functor_desc_option_0_154,
	&mercury_data_libs__options__enum_functor_desc_option_0_3,
	&mercury_data_libs__options__enum_functor_desc_option_0_2,
	&mercury_data_libs__options__enum_functor_desc_option_0_282,
	&mercury_data_libs__options__enum_functor_desc_option_0_609,
	&mercury_data_libs__options__enum_functor_desc_option_0_329,
	&mercury_data_libs__options__enum_functor_desc_option_0_328,
	&mercury_data_libs__options__enum_functor_desc_option_0_225,
	&mercury_data_libs__options__enum_functor_desc_option_0_226,
	&mercury_data_libs__options__enum_functor_desc_option_0_156,
	&mercury_data_libs__options__enum_functor_desc_option_0_484,
	&mercury_data_libs__options__enum_functor_desc_option_0_236,
	&mercury_data_libs__options__enum_functor_desc_option_0_235,
	&mercury_data_libs__options__enum_functor_desc_option_0_157,
	&mercury_data_libs__options__enum_functor_desc_option_0_234,
	&mercury_data_libs__options__enum_functor_desc_option_0_485,
	&mercury_data_libs__options__enum_functor_desc_option_0_383,
	&mercury_data_libs__options__enum_functor_desc_option_0_124,
	&mercury_data_libs__options__enum_functor_desc_option_0_150,
	&mercury_data_libs__options__enum_functor_desc_option_0_149,
	&mercury_data_libs__options__enum_functor_desc_option_0_148,
	&mercury_data_libs__options__enum_functor_desc_option_0_147,
	&mercury_data_libs__options__enum_functor_desc_option_0_36,
	&mercury_data_libs__options__enum_functor_desc_option_0_1,
	&mercury_data_libs__options__enum_functor_desc_option_0_0,
	&mercury_data_libs__options__enum_functor_desc_option_0_518,
	&mercury_data_libs__options__enum_functor_desc_option_0_519,
	&mercury_data_libs__options__enum_functor_desc_option_0_464,
	&mercury_data_libs__options__enum_functor_desc_option_0_312,
	&mercury_data_libs__options__enum_functor_desc_option_0_314,
	&mercury_data_libs__options__enum_functor_desc_option_0_315,
	&mercury_data_libs__options__enum_functor_desc_option_0_377,
	&mercury_data_libs__options__enum_functor_desc_option_0_311,
	&mercury_data_libs__options__enum_functor_desc_option_0_316,
	&mercury_data_libs__options__enum_functor_desc_option_0_313,
	&mercury_data_libs__options__enum_functor_desc_option_0_317,
	&mercury_data_libs__options__enum_functor_desc_option_0_310,
	&mercury_data_libs__options__enum_functor_desc_option_0_586,
	&mercury_data_libs__options__enum_functor_desc_option_0_587,
	&mercury_data_libs__options__enum_functor_desc_option_0_582,
	&mercury_data_libs__options__enum_functor_desc_option_0_599,
	&mercury_data_libs__options__enum_functor_desc_option_0_318,
	&mercury_data_libs__options__enum_functor_desc_option_0_326,
	&mercury_data_libs__options__enum_functor_desc_option_0_306,
	&mercury_data_libs__options__enum_functor_desc_option_0_301,
	&mercury_data_libs__options__enum_functor_desc_option_0_336,
	&mercury_data_libs__options__enum_functor_desc_option_0_579,
	&mercury_data_libs__options__enum_functor_desc_option_0_159,
	&mercury_data_libs__options__enum_functor_desc_option_0_573,
	&mercury_data_libs__options__enum_functor_desc_option_0_482,
	&mercury_data_libs__options__enum_functor_desc_option_0_478,
	&mercury_data_libs__options__enum_functor_desc_option_0_232,
	&mercury_data_libs__options__enum_functor_desc_option_0_480,
	&mercury_data_libs__options__enum_functor_desc_option_0_479,
	&mercury_data_libs__options__enum_functor_desc_option_0_483,
	&mercury_data_libs__options__enum_functor_desc_option_0_160,
	&mercury_data_libs__options__enum_functor_desc_option_0_577,
	&mercury_data_libs__options__enum_functor_desc_option_0_575,
	&mercury_data_libs__options__enum_functor_desc_option_0_502,
	&mercury_data_libs__options__enum_functor_desc_option_0_504,
	&mercury_data_libs__options__enum_functor_desc_option_0_247,
	&mercury_data_libs__options__enum_functor_desc_option_0_591,
	&mercury_data_libs__options__enum_functor_desc_option_0_601,
	&mercury_data_libs__options__enum_functor_desc_option_0_588,
	&mercury_data_libs__options__enum_functor_desc_option_0_590,
	&mercury_data_libs__options__enum_functor_desc_option_0_589,
	&mercury_data_libs__options__enum_functor_desc_option_0_533,
	&mercury_data_libs__options__enum_functor_desc_option_0_120,
	&mercury_data_libs__options__enum_functor_desc_option_0_535,
	&mercury_data_libs__options__enum_functor_desc_option_0_508,
	&mercury_data_libs__options__enum_functor_desc_option_0_506,
	&mercury_data_libs__options__enum_functor_desc_option_0_509,
	&mercury_data_libs__options__enum_functor_desc_option_0_536,
	&mercury_data_libs__options__enum_functor_desc_option_0_476,
	&mercury_data_libs__options__enum_functor_desc_option_0_521,
	&mercury_data_libs__options__enum_functor_desc_option_0_522,
	&mercury_data_libs__options__enum_functor_desc_option_0_568,
	&mercury_data_libs__options__enum_functor_desc_option_0_559,
	&mercury_data_libs__options__enum_functor_desc_option_0_569,
	&mercury_data_libs__options__enum_functor_desc_option_0_555,
	&mercury_data_libs__options__enum_functor_desc_option_0_556,
	&mercury_data_libs__options__enum_functor_desc_option_0_550,
	&mercury_data_libs__options__enum_functor_desc_option_0_563,
	&mercury_data_libs__options__enum_functor_desc_option_0_564,
	&mercury_data_libs__options__enum_functor_desc_option_0_565,
	&mercury_data_libs__options__enum_functor_desc_option_0_553,
	&mercury_data_libs__options__enum_functor_desc_option_0_554,
	&mercury_data_libs__options__enum_functor_desc_option_0_551,
	&mercury_data_libs__options__enum_functor_desc_option_0_561,
	&mercury_data_libs__options__enum_functor_desc_option_0_324,
	&mercury_data_libs__options__enum_functor_desc_option_0_613,
	&mercury_data_libs__options__enum_functor_desc_option_0_455,
	&mercury_data_libs__options__enum_functor_desc_option_0_442,
	&mercury_data_libs__options__enum_functor_desc_option_0_413,
	&mercury_data_libs__options__enum_functor_desc_option_0_415,
	&mercury_data_libs__options__enum_functor_desc_option_0_359,
	&mercury_data_libs__options__enum_functor_desc_option_0_273,
	&mercury_data_libs__options__enum_functor_desc_option_0_527,
	&mercury_data_libs__options__enum_functor_desc_option_0_574,
	&mercury_data_libs__options__enum_functor_desc_option_0_79,
	&mercury_data_libs__options__enum_functor_desc_option_0_75,
	&mercury_data_libs__options__enum_functor_desc_option_0_77,
	&mercury_data_libs__options__enum_functor_desc_option_0_76,
	&mercury_data_libs__options__enum_functor_desc_option_0_74,
	&mercury_data_libs__options__enum_functor_desc_option_0_78,
	&mercury_data_libs__options__enum_functor_desc_option_0_80,
	&mercury_data_libs__options__enum_functor_desc_option_0_548,
	&mercury_data_libs__options__enum_functor_desc_option_0_288,
	&mercury_data_libs__options__enum_functor_desc_option_0_290,
	&mercury_data_libs__options__enum_functor_desc_option_0_289,
	&mercury_data_libs__options__enum_functor_desc_option_0_202,
	&mercury_data_libs__options__enum_functor_desc_option_0_169,
	&mercury_data_libs__options__enum_functor_desc_option_0_584,
	&mercury_data_libs__options__enum_functor_desc_option_0_585,
	&mercury_data_libs__options__enum_functor_desc_option_0_514,
	&mercury_data_libs__options__enum_functor_desc_option_0_510,
	&mercury_data_libs__options__enum_functor_desc_option_0_511,
	&mercury_data_libs__options__enum_functor_desc_option_0_515,
	&mercury_data_libs__options__enum_functor_desc_option_0_523,
	&mercury_data_libs__options__enum_functor_desc_option_0_524,
	&mercury_data_libs__options__enum_functor_desc_option_0_516,
	&mercury_data_libs__options__enum_functor_desc_option_0_517,
	&mercury_data_libs__options__enum_functor_desc_option_0_426,
	&mercury_data_libs__options__enum_functor_desc_option_0_199,
	&mercury_data_libs__options__enum_functor_desc_option_0_542,
	&mercury_data_libs__options__enum_functor_desc_option_0_543,
	&mercury_data_libs__options__enum_functor_desc_option_0_135,
	&mercury_data_libs__options__enum_functor_desc_option_0_152,
	&mercury_data_libs__options__enum_functor_desc_option_0_248,
	&mercury_data_libs__options__enum_functor_desc_option_0_254,
	&mercury_data_libs__options__enum_functor_desc_option_0_229,
	&mercury_data_libs__options__enum_functor_desc_option_0_284,
	&mercury_data_libs__options__enum_functor_desc_option_0_286,
	&mercury_data_libs__options__enum_functor_desc_option_0_283,
	&mercury_data_libs__options__enum_functor_desc_option_0_285,
	&mercury_data_libs__options__enum_functor_desc_option_0_212,
	&mercury_data_libs__options__enum_functor_desc_option_0_213,
	&mercury_data_libs__options__enum_functor_desc_option_0_211,
	&mercury_data_libs__options__enum_functor_desc_option_0_474,
	&mercury_data_libs__options__enum_functor_desc_option_0_384,
	&mercury_data_libs__options__enum_functor_desc_option_0_298,
	&mercury_data_libs__options__enum_functor_desc_option_0_299,
	&mercury_data_libs__options__enum_functor_desc_option_0_297,
	&mercury_data_libs__options__enum_functor_desc_option_0_300,
	&mercury_data_libs__options__enum_functor_desc_option_0_435,
	&mercury_data_libs__options__enum_functor_desc_option_0_339,
	&mercury_data_libs__options__enum_functor_desc_option_0_337,
	&mercury_data_libs__options__enum_functor_desc_option_0_338,
	&mercury_data_libs__options__enum_functor_desc_option_0_362,
	&mercury_data_libs__options__enum_functor_desc_option_0_448,
	&mercury_data_libs__options__enum_functor_desc_option_0_340,
	&mercury_data_libs__options__enum_functor_desc_option_0_445,
	&mercury_data_libs__options__enum_functor_desc_option_0_343,
	&mercury_data_libs__options__enum_functor_desc_option_0_447,
	&mercury_data_libs__options__enum_functor_desc_option_0_438,
	&mercury_data_libs__options__enum_functor_desc_option_0_327,
	&mercury_data_libs__options__enum_functor_desc_option_0_430,
	&mercury_data_libs__options__enum_functor_desc_option_0_437,
	&mercury_data_libs__options__enum_functor_desc_option_0_444,
	&mercury_data_libs__options__enum_functor_desc_option_0_436,
	&mercury_data_libs__options__enum_functor_desc_option_0_446,
	&mercury_data_libs__options__enum_functor_desc_option_0_449,
	&mercury_data_libs__options__enum_functor_desc_option_0_370,
	&mercury_data_libs__options__enum_functor_desc_option_0_450,
	&mercury_data_libs__options__enum_functor_desc_option_0_358,
	&mercury_data_libs__options__enum_functor_desc_option_0_345,
	&mercury_data_libs__options__enum_functor_desc_option_0_356,
	&mercury_data_libs__options__enum_functor_desc_option_0_349,
	&mercury_data_libs__options__enum_functor_desc_option_0_351,
	&mercury_data_libs__options__enum_functor_desc_option_0_350,
	&mercury_data_libs__options__enum_functor_desc_option_0_347,
	&mercury_data_libs__options__enum_functor_desc_option_0_353,
	&mercury_data_libs__options__enum_functor_desc_option_0_352,
	&mercury_data_libs__options__enum_functor_desc_option_0_357,
	&mercury_data_libs__options__enum_functor_desc_option_0_346,
	&mercury_data_libs__options__enum_functor_desc_option_0_355,
	&mercury_data_libs__options__enum_functor_desc_option_0_348,
	&mercury_data_libs__options__enum_functor_desc_option_0_354,
	&mercury_data_libs__options__enum_functor_desc_option_0_344,
	&mercury_data_libs__options__enum_functor_desc_option_0_429,
	&mercury_data_libs__options__enum_functor_desc_option_0_369,
	&mercury_data_libs__options__enum_functor_desc_option_0_325,
	&mercury_data_libs__options__enum_functor_desc_option_0_593,
	&mercury_data_libs__options__enum_functor_desc_option_0_595,
	&mercury_data_libs__options__enum_functor_desc_option_0_602,
	&mercury_data_libs__options__enum_functor_desc_option_0_96,
	&mercury_data_libs__options__enum_functor_desc_option_0_97,
	&mercury_data_libs__options__enum_functor_desc_option_0_46,
	&mercury_data_libs__options__enum_functor_desc_option_0_501,
	&mercury_data_libs__options__enum_functor_desc_option_0_92,
	&mercury_data_libs__options__enum_functor_desc_option_0_95,
	&mercury_data_libs__options__enum_functor_desc_option_0_98,
	&mercury_data_libs__options__enum_functor_desc_option_0_93,
	&mercury_data_libs__options__enum_functor_desc_option_0_94,
	&mercury_data_libs__options__enum_functor_desc_option_0_193,
	&mercury_data_libs__options__enum_functor_desc_option_0_277,
	&mercury_data_libs__options__enum_functor_desc_option_0_276,
	&mercury_data_libs__options__enum_functor_desc_option_0_382,
	&mercury_data_libs__options__enum_functor_desc_option_0_439,
	&mercury_data_libs__options__enum_functor_desc_option_0_287,
	&mercury_data_libs__options__enum_functor_desc_option_0_475,
	&mercury_data_libs__options__enum_functor_desc_option_0_224,
	&mercury_data_libs__options__enum_functor_desc_option_0_278,
	&mercury_data_libs__options__enum_functor_desc_option_0_581,
	&mercury_data_libs__options__enum_functor_desc_option_0_176,
	&mercury_data_libs__options__enum_functor_desc_option_0_296,
	&mercury_data_libs__options__enum_functor_desc_option_0_245,
	&mercury_data_libs__options__enum_functor_desc_option_0_49,
	&mercury_data_libs__options__enum_functor_desc_option_0_241,
	&mercury_data_libs__options__enum_functor_desc_option_0_453,
	&mercury_data_libs__options__enum_functor_desc_option_0_112,
	&mercury_data_libs__options__enum_functor_desc_option_0_171,
	&mercury_data_libs__options__enum_functor_desc_option_0_174,
	&mercury_data_libs__options__enum_functor_desc_option_0_179,
	&mercury_data_libs__options__enum_functor_desc_option_0_182,
	&mercury_data_libs__options__enum_functor_desc_option_0_180,
	&mercury_data_libs__options__enum_functor_desc_option_0_181,
	&mercury_data_libs__options__enum_functor_desc_option_0_183,
	&mercury_data_libs__options__enum_functor_desc_option_0_184,
	&mercury_data_libs__options__enum_functor_desc_option_0_185,
	&mercury_data_libs__options__enum_functor_desc_option_0_173,
	&mercury_data_libs__options__enum_functor_desc_option_0_172,
	&mercury_data_libs__options__enum_functor_desc_option_0_167,
	&mercury_data_libs__options__enum_functor_desc_option_0_137,
	&mercury_data_libs__options__enum_functor_desc_option_0_407,
	&mercury_data_libs__options__enum_functor_desc_option_0_230,
	&mercury_data_libs__options__enum_functor_desc_option_0_231,
	&mercury_data_libs__options__enum_functor_desc_option_0_460,
	&mercury_data_libs__options__enum_functor_desc_option_0_492,
	&mercury_data_libs__options__enum_functor_desc_option_0_496,
	&mercury_data_libs__options__enum_functor_desc_option_0_486,
	&mercury_data_libs__options__enum_functor_desc_option_0_481,
	&mercury_data_libs__options__enum_functor_desc_option_0_503,
	&mercury_data_libs__options__enum_functor_desc_option_0_505,
	&mercury_data_libs__options__enum_functor_desc_option_0_540,
	&mercury_data_libs__options__enum_functor_desc_option_0_541,
	&mercury_data_libs__options__enum_functor_desc_option_0_302,
	&mercury_data_libs__options__enum_functor_desc_option_0_549,
	&mercury_data_libs__options__enum_functor_desc_option_0_576,
	&mercury_data_libs__options__enum_functor_desc_option_0_279,
	&mercury_data_libs__options__enum_functor_desc_option_0_281,
	&mercury_data_libs__options__enum_functor_desc_option_0_280,
	&mercury_data_libs__options__enum_functor_desc_option_0_190,
	&mercury_data_libs__options__enum_functor_desc_option_0_189,
	&mercury_data_libs__options__enum_functor_desc_option_0_385,
	&mercury_data_libs__options__enum_functor_desc_option_0_142,
	&mercury_data_libs__options__enum_functor_desc_option_0_143,
	&mercury_data_libs__options__enum_functor_desc_option_0_605,
	&mercury_data_libs__options__enum_functor_desc_option_0_255,
	&mercury_data_libs__options__enum_functor_desc_option_0_530,
	&mercury_data_libs__options__enum_functor_desc_option_0_507,
	&mercury_data_libs__options__enum_functor_desc_option_0_598,
	&mercury_data_libs__options__enum_functor_desc_option_0_512,
	&mercury_data_libs__options__enum_functor_desc_option_0_513,
	&mercury_data_libs__options__enum_functor_desc_option_0_141,
	&mercury_data_libs__options__enum_functor_desc_option_0_532,
	&mercury_data_libs__options__enum_functor_desc_option_0_547,
	&mercury_data_libs__options__enum_functor_desc_option_0_560,
	&mercury_data_libs__options__enum_functor_desc_option_0_571,
	&mercury_data_libs__options__enum_functor_desc_option_0_572,
	&mercury_data_libs__options__enum_functor_desc_option_0_557,
	&mercury_data_libs__options__enum_functor_desc_option_0_558,
	&mercury_data_libs__options__enum_functor_desc_option_0_566,
	&mercury_data_libs__options__enum_functor_desc_option_0_567,
	&mercury_data_libs__options__enum_functor_desc_option_0_552,
	&mercury_data_libs__options__enum_functor_desc_option_0_562,
	&mercury_data_libs__options__enum_functor_desc_option_0_570,
	&mercury_data_libs__options__enum_functor_desc_option_0_292,
	&mercury_data_libs__options__enum_functor_desc_option_0_123,
	&mercury_data_libs__options__enum_functor_desc_option_0_603,
	&mercury_data_libs__options__enum_functor_desc_option_0_140,
	&mercury_data_libs__options__enum_functor_desc_option_0_136,
	&mercury_data_libs__options__enum_functor_desc_option_0_427,
	&mercury_data_libs__options__enum_functor_desc_option_0_200,
	&mercury_data_libs__options__enum_functor_desc_option_0_269,
	&mercury_data_libs__options__enum_functor_desc_option_0_264,
	&mercury_data_libs__options__enum_functor_desc_option_0_262,
	&mercury_data_libs__options__enum_functor_desc_option_0_268,
	&mercury_data_libs__options__enum_functor_desc_option_0_261,
	&mercury_data_libs__options__enum_functor_desc_option_0_265,
	&mercury_data_libs__options__enum_functor_desc_option_0_266,
	&mercury_data_libs__options__enum_functor_desc_option_0_263,
	&mercury_data_libs__options__enum_functor_desc_option_0_267,
	&mercury_data_libs__options__enum_functor_desc_option_0_411,
	&mercury_data_libs__options__enum_functor_desc_option_0_99,
	&mercury_data_libs__options__enum_functor_desc_option_0_270,
	&mercury_data_libs__options__enum_functor_desc_option_0_209,
	&mercury_data_libs__options__enum_functor_desc_option_0_250,
	&mercury_data_libs__options__enum_functor_desc_option_0_204,
	&mercury_data_libs__options__enum_functor_desc_option_0_238,
	&mercury_data_libs__options__enum_functor_desc_option_0_117,
	&mercury_data_libs__options__enum_functor_desc_option_0_443,
	&mercury_data_libs__options__enum_functor_desc_option_0_424,
	&mercury_data_libs__options__enum_functor_desc_option_0_422,
	&mercury_data_libs__options__enum_functor_desc_option_0_423,
	&mercury_data_libs__options__enum_functor_desc_option_0_47,
	&mercury_data_libs__options__enum_functor_desc_option_0_145,
	&mercury_data_libs__options__enum_functor_desc_option_0_416,
	&mercury_data_libs__options__enum_functor_desc_option_0_525,
	&mercury_data_libs__options__enum_functor_desc_option_0_388,
	&mercury_data_libs__options__enum_functor_desc_option_0_389,
	&mercury_data_libs__options__enum_functor_desc_option_0_390,
	&mercury_data_libs__options__enum_functor_desc_option_0_393,
	&mercury_data_libs__options__enum_functor_desc_option_0_391,
	&mercury_data_libs__options__enum_functor_desc_option_0_392,
	&mercury_data_libs__options__enum_functor_desc_option_0_386,
	&mercury_data_libs__options__enum_functor_desc_option_0_387,
	&mercury_data_libs__options__enum_functor_desc_option_0_488,
	&mercury_data_libs__options__enum_functor_desc_option_0_489,
	&mercury_data_libs__options__enum_functor_desc_option_0_114,
	&mercury_data_libs__options__enum_functor_desc_option_0_421,
	&mercury_data_libs__options__enum_functor_desc_option_0_420,
	&mercury_data_libs__options__enum_functor_desc_option_0_220,
	&mercury_data_libs__options__enum_functor_desc_option_0_274,
	&mercury_data_libs__options__enum_functor_desc_option_0_417,
	&mercury_data_libs__options__enum_functor_desc_option_0_210,
	&mercury_data_libs__options__enum_functor_desc_option_0_155,
	&mercury_data_libs__options__enum_functor_desc_option_0_89,
	&mercury_data_libs__options__enum_functor_desc_option_0_457,
	&mercury_data_libs__options__enum_functor_desc_option_0_408,
	&mercury_data_libs__options__enum_functor_desc_option_0_394,
	&mercury_data_libs__options__enum_functor_desc_option_0_401,
	&mercury_data_libs__options__enum_functor_desc_option_0_404,
	&mercury_data_libs__options__enum_functor_desc_option_0_395,
	&mercury_data_libs__options__enum_functor_desc_option_0_399,
	&mercury_data_libs__options__enum_functor_desc_option_0_398,
	&mercury_data_libs__options__enum_functor_desc_option_0_400,
	&mercury_data_libs__options__enum_functor_desc_option_0_397,
	&mercury_data_libs__options__enum_functor_desc_option_0_546,
	&mercury_data_libs__options__enum_functor_desc_option_0_194,
	&mercury_data_libs__options__enum_functor_desc_option_0_168,
	&mercury_data_libs__options__enum_functor_desc_option_0_111,
	&mercury_data_libs__options__enum_functor_desc_option_0_520,
	&mercury_data_libs__options__enum_functor_desc_option_0_103,
	&mercury_data_libs__options__enum_functor_desc_option_0_545,
	&mercury_data_libs__options__enum_functor_desc_option_0_104,
	&mercury_data_libs__options__enum_functor_desc_option_0_105,
	&mercury_data_libs__options__enum_functor_desc_option_0_242,
	&mercury_data_libs__options__enum_functor_desc_option_0_106,
	&mercury_data_libs__options__enum_functor_desc_option_0_110,
	&mercury_data_libs__options__enum_functor_desc_option_0_107,
	&mercury_data_libs__options__enum_functor_desc_option_0_109,
	&mercury_data_libs__options__enum_functor_desc_option_0_108,
	&mercury_data_libs__options__enum_functor_desc_option_0_578,
	&mercury_data_libs__options__enum_functor_desc_option_0_275,
	&mercury_data_libs__options__enum_functor_desc_option_0_196,
	&mercury_data_libs__options__enum_functor_desc_option_0_305,
	&mercury_data_libs__options__enum_functor_desc_option_0_418,
	&mercury_data_libs__options__enum_functor_desc_option_0_373,
	&mercury_data_libs__options__enum_functor_desc_option_0_375,
	&mercury_data_libs__options__enum_functor_desc_option_0_376,
	&mercury_data_libs__options__enum_functor_desc_option_0_374,
	&mercury_data_libs__options__enum_functor_desc_option_0_272,
	&mercury_data_libs__options__enum_functor_desc_option_0_253,
	&mercury_data_libs__options__enum_functor_desc_option_0_251,
	&mercury_data_libs__options__enum_functor_desc_option_0_252,
	&mercury_data_libs__options__enum_functor_desc_option_0_151,
	&mercury_data_libs__options__enum_functor_desc_option_0_201,
	&mercury_data_libs__options__enum_functor_desc_option_0_334,
	&mercury_data_libs__options__enum_functor_desc_option_0_608,
	&mercury_data_libs__options__enum_functor_desc_option_0_607,
	&mercury_data_libs__options__enum_functor_desc_option_0_87,
	&mercury_data_libs__options__enum_functor_desc_option_0_218,
	&mercury_data_libs__options__enum_functor_desc_option_0_217,
	&mercury_data_libs__options__enum_functor_desc_option_0_219,
	&mercury_data_libs__options__enum_functor_desc_option_0_330,
	&mercury_data_libs__options__enum_functor_desc_option_0_331,
	&mercury_data_libs__options__enum_functor_desc_option_0_332,
	&mercury_data_libs__options__enum_functor_desc_option_0_333,
	&mercury_data_libs__options__enum_functor_desc_option_0_372,
	&mercury_data_libs__options__enum_functor_desc_option_0_175,
	&mercury_data_libs__options__enum_functor_desc_option_0_206,
	&mercury_data_libs__options__enum_functor_desc_option_0_425,
	&mercury_data_libs__options__enum_functor_desc_option_0_597,
	&mercury_data_libs__options__enum_functor_desc_option_0_441,
	&mercury_data_libs__options__enum_functor_desc_option_0_187,
	&mercury_data_libs__options__enum_functor_desc_option_0_451,
	&mercury_data_libs__options__enum_functor_desc_option_0_198,
	&mercury_data_libs__options__enum_functor_desc_option_0_197,
	&mercury_data_libs__options__enum_functor_desc_option_0_259,
	&mercury_data_libs__options__enum_functor_desc_option_0_258,
	&mercury_data_libs__options__enum_functor_desc_option_0_303,
	&mercury_data_libs__options__enum_functor_desc_option_0_529,
	&mercury_data_libs__options__enum_functor_desc_option_0_205,
	&mercury_data_libs__options__enum_functor_desc_option_0_207,
	&mercury_data_libs__options__enum_functor_desc_option_0_208,
	&mercury_data_libs__options__enum_functor_desc_option_0_600,
	&mercury_data_libs__options__enum_functor_desc_option_0_596,
	&mercury_data_libs__options__enum_functor_desc_option_0_583,
	&mercury_data_libs__options__enum_functor_desc_option_0_195,
	&mercury_data_libs__options__enum_functor_desc_option_0_304,
	&mercury_data_libs__options__enum_functor_desc_option_0_186,
	&mercury_data_libs__options__enum_functor_desc_option_0_335,
	&mercury_data_libs__options__enum_functor_desc_option_0_39,
	&mercury_data_libs__options__enum_functor_desc_option_0_396,
	&mercury_data_libs__options__enum_functor_desc_option_0_403,
	&mercury_data_libs__options__enum_functor_desc_option_0_45,
	&mercury_data_libs__options__enum_functor_desc_option_0_134,
	&mercury_data_libs__options__enum_functor_desc_option_0_41,
	&mercury_data_libs__options__enum_functor_desc_option_0_44,
	&mercury_data_libs__options__enum_functor_desc_option_0_42,
	&mercury_data_libs__options__enum_functor_desc_option_0_233,
	&mercury_data_libs__options__enum_functor_desc_option_0_610,
	&mercury_data_libs__options__enum_functor_desc_option_0_40,
	&mercury_data_libs__options__enum_functor_desc_option_0_28,
	&mercury_data_libs__options__enum_functor_desc_option_0_6,
	&mercury_data_libs__options__enum_functor_desc_option_0_19,
	&mercury_data_libs__options__enum_functor_desc_option_0_7,
	&mercury_data_libs__options__enum_functor_desc_option_0_34,
	&mercury_data_libs__options__enum_functor_desc_option_0_10,
	&mercury_data_libs__options__enum_functor_desc_option_0_31,
	&mercury_data_libs__options__enum_functor_desc_option_0_20,
	&mercury_data_libs__options__enum_functor_desc_option_0_11,
	&mercury_data_libs__options__enum_functor_desc_option_0_13,
	&mercury_data_libs__options__enum_functor_desc_option_0_12,
	&mercury_data_libs__options__enum_functor_desc_option_0_14,
	&mercury_data_libs__options__enum_functor_desc_option_0_15,
	&mercury_data_libs__options__enum_functor_desc_option_0_16,
	&mercury_data_libs__options__enum_functor_desc_option_0_24,
	&mercury_data_libs__options__enum_functor_desc_option_0_30,
	&mercury_data_libs__options__enum_functor_desc_option_0_8,
	&mercury_data_libs__options__enum_functor_desc_option_0_33,
	&mercury_data_libs__options__enum_functor_desc_option_0_5,
	&mercury_data_libs__options__enum_functor_desc_option_0_18,
	&mercury_data_libs__options__enum_functor_desc_option_0_4,
	&mercury_data_libs__options__enum_functor_desc_option_0_22,
	&mercury_data_libs__options__enum_functor_desc_option_0_27,
	&mercury_data_libs__options__enum_functor_desc_option_0_38,
	&mercury_data_libs__options__enum_functor_desc_option_0_29,
	&mercury_data_libs__options__enum_functor_desc_option_0_25,
	&mercury_data_libs__options__enum_functor_desc_option_0_23,
	&mercury_data_libs__options__enum_functor_desc_option_0_17,
	&mercury_data_libs__options__enum_functor_desc_option_0_32,
	&mercury_data_libs__options__enum_functor_desc_option_0_37,
	&mercury_data_libs__options__enum_functor_desc_option_0_9,
	&mercury_data_libs__options__enum_functor_desc_option_0_35,
	&mercury_data_libs__options__enum_functor_desc_option_0_26,
	&mercury_data_libs__options__enum_functor_desc_option_0_21,
	&mercury_data_libs__options__enum_functor_desc_option_0_405,
	&mercury_data_libs__options__enum_functor_desc_option_0_161,
	&mercury_data_libs__options__enum_functor_desc_option_0_162
};

const MR_Integer mercury_data_libs__options__functor_number_map_option_0[] = {
	201,
	200,
	179,
	178,
	601,
	599,
	582,
	584,
	597,
	611,
	586,
	589,
	591,
	590,
	592,
	593,
	594,
	608,
	600,
	583,
	588,
	614,
	602,
	607,
	595,
	606,
	613,
	603,
	581,
	605,
	596,
	587,
	609,
	598,
	585,
	612,
	199,
	610,
	604,
	570,
	580,
	575,
	577,
	154,
	576,
	573,
	364,
	472,
	110,
	384,
	93,
	81,
	84,
	82,
	85,
	83,
	72,
	73,
	71,
	86,
	91,
	87,
	88,
	89,
	74,
	77,
	90,
	78,
	70,
	92,
	80,
	76,
	79,
	75,
	280,
	277,
	279,
	278,
	281,
	276,
	282,
	174,
	170,
	169,
	173,
	175,
	61,
	538,
	137,
	494,
	52,
	54,
	366,
	369,
	370,
	367,
	362,
	363,
	368,
	461,
	171,
	172,
	18,
	510,
	512,
	513,
	515,
	517,
	519,
	518,
	516,
	508,
	387,
	142,
	486,
	158,
	103,
	467,
	157,
	168,
	244,
	19,
	159,
	445,
	194,
	124,
	116,
	120,
	121,
	117,
	119,
	118,
	123,
	122,
	574,
	303,
	448,
	400,
	22,
	23,
	447,
	431,
	422,
	423,
	162,
	473,
	5,
	198,
	197,
	196,
	195,
	533,
	304,
	138,
	177,
	493,
	186,
	190,
	53,
	224,
	232,
	616,
	617,
	127,
	135,
	141,
	94,
	399,
	507,
	288,
	96,
	388,
	398,
	397,
	389,
	547,
	381,
	62,
	63,
	390,
	392,
	393,
	391,
	394,
	395,
	396,
	568,
	552,
	95,
	420,
	419,
	145,
	163,
	371,
	506,
	566,
	522,
	555,
	554,
	300,
	450,
	534,
	287,
	146,
	465,
	560,
	548,
	561,
	562,
	463,
	492,
	314,
	312,
	313,
	25,
	27,
	56,
	540,
	539,
	541,
	489,
	167,
	164,
	17,
	378,
	184,
	185,
	166,
	109,
	307,
	402,
	403,
	228,
	578,
	191,
	189,
	188,
	20,
	466,
	21,
	0,
	385,
	514,
	26,
	33,
	383,
	32,
	237,
	305,
	104,
	464,
	531,
	532,
	530,
	306,
	425,
	112,
	111,
	557,
	556,
	113,
	455,
	453,
	458,
	452,
	456,
	457,
	459,
	454,
	451,
	462,
	3,
	529,
	273,
	490,
	521,
	373,
	372,
	379,
	416,
	418,
	417,
	180,
	310,
	308,
	311,
	309,
	376,
	284,
	286,
	285,
	51,
	444,
	151,
	150,
	165,
	382,
	319,
	317,
	318,
	320,
	221,
	413,
	558,
	567,
	523,
	220,
	14,
	12,
	2,
	213,
	209,
	205,
	211,
	206,
	207,
	210,
	212,
	218,
	160,
	49,
	50,
	47,
	59,
	266,
	358,
	219,
	332,
	183,
	182,
	542,
	543,
	544,
	545,
	535,
	569,
	222,
	323,
	324,
	322,
	327,
	58,
	140,
	329,
	355,
	342,
	351,
	347,
	353,
	344,
	346,
	345,
	349,
	348,
	354,
	352,
	343,
	350,
	341,
	272,
	102,
	156,
	325,
	97,
	99,
	98,
	101,
	100,
	11,
	357,
	339,
	10,
	546,
	525,
	528,
	526,
	527,
	208,
	7,
	4,
	60,
	114,
	374,
	193,
	316,
	421,
	482,
	483,
	476,
	477,
	478,
	480,
	481,
	479,
	497,
	500,
	571,
	504,
	502,
	501,
	503,
	498,
	44,
	572,
	499,
	615,
	16,
	401,
	496,
	9,
	8,
	460,
	107,
	270,
	108,
	271,
	474,
	491,
	524,
	24,
	488,
	487,
	470,
	471,
	469,
	549,
	299,
	449,
	1,
	356,
	333,
	125,
	176,
	46,
	48,
	321,
	336,
	334,
	331,
	375,
	45,
	551,
	269,
	468,
	335,
	328,
	337,
	330,
	326,
	338,
	340,
	553,
	126,
	386,
	139,
	268,
	136,
	495,
	34,
	35,
	404,
	30,
	31,
	15,
	204,
	43,
	39,
	36,
	41,
	38,
	42,
	37,
	40,
	29,
	315,
	377,
	250,
	28,
	227,
	230,
	229,
	408,
	226,
	231,
	187,
	192,
	407,
	115,
	484,
	485,
	68,
	69,
	405,
	128,
	132,
	129,
	406,
	130,
	134,
	133,
	131,
	365,
	235,
	409,
	236,
	410,
	247,
	427,
	246,
	248,
	292,
	293,
	429,
	430,
	291,
	294,
	297,
	298,
	202,
	203,
	509,
	251,
	252,
	295,
	296,
	475,
	105,
	274,
	6,
	559,
	426,
	148,
	432,
	243,
	143,
	245,
	249,
	64,
	66,
	65,
	411,
	412,
	301,
	302,
	106,
	511,
	505,
	433,
	283,
	414,
	258,
	264,
	441,
	262,
	263,
	256,
	257,
	437,
	438,
	254,
	434,
	265,
	442,
	259,
	260,
	261,
	439,
	440,
	253,
	255,
	443,
	435,
	436,
	225,
	275,
	234,
	415,
	233,
	520,
	223,
	147,
	380,
	216,
	565,
	289,
	290,
	214,
	215,
	240,
	242,
	241,
	238,
	155,
	359,
	57,
	360,
	564,
	550,
	428,
	217,
	563,
	239,
	361,
	446,
	149,
	424,
	153,
	537,
	536,
	181,
	579,
	161,
	67,
	267,
	13,
	55,
	144,
	152 };
	
const MR_TypeCtorInfo_Struct mercury_data_libs__options__type_ctor_info_option_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_ENUM,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___libs__options__option_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___libs__options__option_0_0)),
	"libs.options",
	"option",
	{ (void *)mercury_data_libs__options__enum_name_ordered_option_0 },
	{ (void *)mercury_data_libs__options__enum_value_ordered_option_0 },
	618,
	4,
	mercury_data_libs__options__functor_number_map_option_0
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_category_0_0 = {
	"warning_option",
	0
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_category_0_1 = {
	"verbosity_option",
	1
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_category_0_2 = {
	"output_option",
	2
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_category_0_3 = {
	"aux_output_option",
	3
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_category_0_4 = {
	"language_semantics_option",
	4
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_category_0_5 = {
	"compilation_model_option",
	5
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_category_0_6 = {
	"internal_use_option",
	6
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_category_0_7 = {
	"code_gen_option",
	7
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_category_0_8 = {
	"special_optimization_option",
	8
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_category_0_9 = {
	"optimization_option",
	9
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_category_0_10 = {
	"target_code_compilation_option",
	10
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_category_0_11 = {
	"link_option",
	11
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_category_0_12 = {
	"build_system_option",
	12
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_category_0_13 = {
	"miscellaneous_option",
	13
};

const MR_EnumFunctorDescPtr mercury_data_libs__options__enum_value_ordered_option_category_0[] = {
	&mercury_data_libs__options__enum_functor_desc_option_category_0_0,
	&mercury_data_libs__options__enum_functor_desc_option_category_0_1,
	&mercury_data_libs__options__enum_functor_desc_option_category_0_2,
	&mercury_data_libs__options__enum_functor_desc_option_category_0_3,
	&mercury_data_libs__options__enum_functor_desc_option_category_0_4,
	&mercury_data_libs__options__enum_functor_desc_option_category_0_5,
	&mercury_data_libs__options__enum_functor_desc_option_category_0_6,
	&mercury_data_libs__options__enum_functor_desc_option_category_0_7,
	&mercury_data_libs__options__enum_functor_desc_option_category_0_8,
	&mercury_data_libs__options__enum_functor_desc_option_category_0_9,
	&mercury_data_libs__options__enum_functor_desc_option_category_0_10,
	&mercury_data_libs__options__enum_functor_desc_option_category_0_11,
	&mercury_data_libs__options__enum_functor_desc_option_category_0_12,
	&mercury_data_libs__options__enum_functor_desc_option_category_0_13
};

const MR_EnumFunctorDescPtr mercury_data_libs__options__enum_name_ordered_option_category_0[] = {
	&mercury_data_libs__options__enum_functor_desc_option_category_0_3,
	&mercury_data_libs__options__enum_functor_desc_option_category_0_12,
	&mercury_data_libs__options__enum_functor_desc_option_category_0_7,
	&mercury_data_libs__options__enum_functor_desc_option_category_0_5,
	&mercury_data_libs__options__enum_functor_desc_option_category_0_6,
	&mercury_data_libs__options__enum_functor_desc_option_category_0_4,
	&mercury_data_libs__options__enum_functor_desc_option_category_0_11,
	&mercury_data_libs__options__enum_functor_desc_option_category_0_13,
	&mercury_data_libs__options__enum_functor_desc_option_category_0_9,
	&mercury_data_libs__options__enum_functor_desc_option_category_0_2,
	&mercury_data_libs__options__enum_functor_desc_option_category_0_8,
	&mercury_data_libs__options__enum_functor_desc_option_category_0_10,
	&mercury_data_libs__options__enum_functor_desc_option_category_0_1,
	&mercury_data_libs__options__enum_functor_desc_option_category_0_0
};

const MR_Integer mercury_data_libs__options__functor_number_map_option_category_0[] = {
	13,
	12,
	9,
	0,
	5,
	3,
	4,
	2,
	10,
	8,
	11,
	6,
	1,
	7 };
	
const MR_TypeCtorInfo_Struct mercury_data_libs__options__type_ctor_info_option_category_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_ENUM,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___libs__options__option_category_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___libs__options__option_category_0_0)),
	"libs.options",
	"option_category",
	{ (void *)mercury_data_libs__options__enum_name_ordered_option_category_0 },
	{ (void *)mercury_data_libs__options__enum_value_ordered_option_category_0 },
	14,
	4,
	mercury_data_libs__options__functor_number_map_option_category_0
};

static const MR_FA_TypeInfo_Struct2 mercury_data_tree234__ti_tree234_2libs__options__type_ctor_info_option_0getopt_io__type_ctor_info_option_data_0 = {
	&mercury_data_tree234__type_ctor_info_tree234_2,
{	(MR_TypeInfo) &mercury_data_libs__options__type_ctor_info_option_0,
	(MR_TypeInfo) &mercury_data_getopt_io__type_ctor_info_option_data_0
}};

const MR_TypeCtorInfo_Struct mercury_data_libs__options__type_ctor_info_option_table_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_EQUIV_GROUND,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___libs__options__option_table_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___libs__options__option_table_0_0)),
	"libs.options",
	"option_table",
	{ 0 },
	{ (void *)&mercury_data_tree234__ti_tree234_2libs__options__type_ctor_info_option_0getopt_io__type_ctor_info_option_data_0 },
	-1,
	0,
	NULL
};


static const MR_UserClosureId
mercury_data__closure_layout__libs__options__special_handler_4_0_1 = {
{
MR_FUNCTION,
"libs.options",
"libs.options",
"append_to_accumulating_option",
3,
0
},
"libs.options",
"options.m",
2888,
"d26;c6;"
};

static const MR_UserClosureId
mercury_data__closure_layout__fn__libs__options__option_table_add_search_library_files_directory_2_0_1 = {
{
MR_FUNCTION,
"libs.options",
"libs.options",
"append_to_accumulating_option",
3,
0
},
"libs.options",
"options.m",
2958,
"d1;c4;"
};

static const MR_UserClosureId
mercury_data__closure_layout__fn__libs__options__option_table_add_mercury_library_directory_2_0_1 = {
{
MR_FUNCTION,
"libs.options",
"libs.options",
"append_to_accumulating_option",
3,
0
},
"libs.options",
"options.m",
2948,
"d1;c4;"
};



MR_BEGIN_MODULE(libs__options_module0)
	MR_init_entry1(libs__options__short_option_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__libs__options__short_option_2_0);
	MR_init_label1(libs__options__short_option_2_0,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'short_option'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__libs__options__short_option_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(((MR_Unsigned) ((MR_Integer) MR_r1 - (MR_Integer) 63) <= 57))) {
		MR_GOTO_LAB(libs__options__short_option_2_0_i1);
	}
	if (!((((MR_Integer) 1 << (((MR_Integer) MR_r1 - (MR_Integer) 63) & (MR_Integer) 31)) & (MR_Integer) MR_tfield(0, MR_COMMON(0,0), (((MR_Integer) MR_r1 - (MR_Integer) 63) >> (MR_Integer) 5))))) {
		MR_GOTO_LAB(libs__options__short_option_2_0_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = (MR_Word) &MR_tfield(0, (MR_Word *) &mercury_vector_common_1_0, ((MR_Integer) MR_r1 - (MR_Integer) 63));
	MR_r2 = MR_tfield(0, MR_tempr1, 0);
	MR_r1 = MR_TRUE;
	MR_proceed();
	}
MR_def_label(libs__options__short_option_2_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(libs__options_module1)
	MR_init_entry1(libs__options__long_option_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__libs__options__long_option_2_0);
	MR_init_label10(libs__options__long_option_2_0,3,744,5,8,9,10,11,12,13,14)
	MR_init_label10(libs__options__long_option_2_0,15,16,17,18,19,20,21,22,23,24)
	MR_init_label10(libs__options__long_option_2_0,25,26,27,28,29,30,31,32,33,34)
	MR_init_label10(libs__options__long_option_2_0,35,36,37,38,39,40,41,42,43,44)
	MR_init_label10(libs__options__long_option_2_0,45,47,48,50,51,52,53,56,59,60)
	MR_init_label10(libs__options__long_option_2_0,63,64,65,66,67,68,69,70,71,72)
	MR_init_label10(libs__options__long_option_2_0,73,74,75,76,77,78,79,80,81,82)
	MR_init_label10(libs__options__long_option_2_0,83,84,85,86,87,88,89,90,91,92)
	MR_init_label10(libs__options__long_option_2_0,93,95,96,97,98,99,100,101,102,103)
	MR_init_label10(libs__options__long_option_2_0,104,105,106,109,110,111,113,114,115,116)
	MR_init_label10(libs__options__long_option_2_0,117,118,119,120,122,123,125,126,127,128)
	MR_init_label10(libs__options__long_option_2_0,129,138,140,141,142,143,144,145,146,148)
	MR_init_label10(libs__options__long_option_2_0,149,150,151,152,153,154,155,156,157,158)
	MR_init_label10(libs__options__long_option_2_0,159,160,161,162,163,167,168,169,171,172)
	MR_init_label10(libs__options__long_option_2_0,174,175,176,179,180,181,182,183,184,185)
	MR_init_label10(libs__options__long_option_2_0,186,187,188,189,190,191,193,194,195,196)
	MR_init_label10(libs__options__long_option_2_0,197,198,199,200,201,202,203,204,205,206)
	MR_init_label10(libs__options__long_option_2_0,207,208,209,210,211,212,214,215,216,217)
	MR_init_label10(libs__options__long_option_2_0,218,219,220,221,222,223,224,225,226,227)
	MR_init_label10(libs__options__long_option_2_0,228,229,230,232,233,234,235,237,238,239)
	MR_init_label10(libs__options__long_option_2_0,241,242,243,244,245,246,247,248,249,250)
	MR_init_label10(libs__options__long_option_2_0,251,253,254,255,257,258,259,260,261,262)
	MR_init_label10(libs__options__long_option_2_0,263,264,265,266,267,268,269,270,271,272)
	MR_init_label10(libs__options__long_option_2_0,273,274,275,276,277,278,279,280,281,282)
	MR_init_label10(libs__options__long_option_2_0,283,284,285,286,287,288,289,290,291,292)
	MR_init_label10(libs__options__long_option_2_0,293,295,302,312,322,323,325,326,327,328)
	MR_init_label10(libs__options__long_option_2_0,329,330,331,332,333,334,335,336,337,338)
	MR_init_label10(libs__options__long_option_2_0,339,340,341,342,343,344,345,347,348,349)
	MR_init_label10(libs__options__long_option_2_0,350,351,352,353,354,356,357,358,359,360)
	MR_init_label10(libs__options__long_option_2_0,363,364,365,366,372,373,374,375,377,378)
	MR_init_label10(libs__options__long_option_2_0,379,380,382,383,384,385,386,388,391,393)
	MR_init_label10(libs__options__long_option_2_0,395,398,400,401,402,403,404,405,406,407)
	MR_init_label10(libs__options__long_option_2_0,408,409,410,411,413,414,415,416,417,418)
	MR_init_label10(libs__options__long_option_2_0,419,420,421,422,423,424,425,426,427,428)
	MR_init_label10(libs__options__long_option_2_0,429,430,431,432,435,436,437,439,441,442)
	MR_init_label10(libs__options__long_option_2_0,443,444,445,446,447,448,449,450,451,454)
	MR_init_label10(libs__options__long_option_2_0,455,456,457,458,460,461,462,464,465,468)
	MR_init_label10(libs__options__long_option_2_0,469,470,471,472,473,475,476,477,478,479)
	MR_init_label10(libs__options__long_option_2_0,480,481,482,483,484,485,486,487,488,489)
	MR_init_label10(libs__options__long_option_2_0,490,491,492,493,495,496,497,498,499,500)
	MR_init_label10(libs__options__long_option_2_0,505,506,512,513,514,517,518,520,521,522)
	MR_init_label10(libs__options__long_option_2_0,523,524,525,526,528,529,530,531,532,533)
	MR_init_label10(libs__options__long_option_2_0,534,535,537,538,539,540,541,543,544,545)
	MR_init_label10(libs__options__long_option_2_0,547,548,549,550,551,553,554,556,558,559)
	MR_init_label10(libs__options__long_option_2_0,560,561,562,563,564,565,567,568,569,570)
	MR_init_label10(libs__options__long_option_2_0,572,573,574,575,577,578,579,580,584,585)
	MR_init_label10(libs__options__long_option_2_0,586,587,588,589,590,591,592,593,594,595)
	MR_init_label10(libs__options__long_option_2_0,596,597,598,599,600,601,602,603,604,605)
	MR_init_label10(libs__options__long_option_2_0,606,607,608,609,611,612,613,614,615,616)
	MR_init_label10(libs__options__long_option_2_0,617,618,619,620,621,623,624,625,626,627)
	MR_init_label10(libs__options__long_option_2_0,628,629,630,631,632,633,634,635,636,637)
	MR_init_label10(libs__options__long_option_2_0,638,639,640,642,643,644,645,646,647,648)
	MR_init_label10(libs__options__long_option_2_0,649,650,651,652,653,654,655,656,657,658)
	MR_init_label10(libs__options__long_option_2_0,660,661,662,663,664,666,668,669,670,671)
	MR_init_label10(libs__options__long_option_2_0,672,673,674,675,678,681,682,683,684,685)
	MR_init_label10(libs__options__long_option_2_0,686,687,688,689,690,691,692,693,694,695)
	MR_init_label10(libs__options__long_option_2_0,697,699,700,701,702,703,706,707,708,709)
	MR_init_label10(libs__options__long_option_2_0,710,711,712,713,714,715,716,717,718,719)
	MR_init_label10(libs__options__long_option_2_0,720,721,722,723,724,726,727,728,729,730)
	MR_init_label10(libs__options__long_option_2_0,731,732,733,734,735,736,737,738,739,740)
	MR_init_label2(libs__options__long_option_2_0,741,742)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'long_option'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__libs__options__long_option_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = (MR_hash_string((MR_String) MR_r1) & (MR_Integer) 2047);
MR_def_label(libs__options__long_option_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	while (1) {
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = ((MR_Integer) MR_r3 * (MR_Integer) 2);
	MR_tempr2 = ((MR_Word *) &mercury_vector_common_2_0)[(MR_Integer) MR_tempr1];
	if (((MR_Integer) MR_tempr2 && (strcmp((char *) (MR_Word *) MR_tempr2, (char *) (MR_Word *) MR_r1) == 0))) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i5);
	}
	MR_r3 = ((MR_Word *) &mercury_vector_common_2_0)[((MR_Integer) MR_tempr1 + (MR_Integer) 1)];
	if (MR_INT_GE(MR_r3,0))
		continue;
	}
	break; } /* end while */
MR_def_label(libs__options__long_option_2_0,744)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_r3,
		MR_LABEL_AP(libs__options__long_option_2_0_i262) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i226) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i444) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i525) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i19) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i573) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i229) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i720) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i727) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i312) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i637) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i338) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i715) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i513) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i435) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i143) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i597) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i454) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i99) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i411) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i450) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i185) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i742) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i195) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i683) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i119) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i144) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i325) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i620) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i257) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i595) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i245) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i16) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i674) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i204) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i241) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i678) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i599) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i682) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i638) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i717) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i697) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i681) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i602) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i718) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i738) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i379) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i98) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i672) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i60) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i375) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i263) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i660) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i347) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i593) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i706) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i559) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i331) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i652) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i482) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i393) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i478) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i255) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i545) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i605) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i372) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i327) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i219) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i278) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i286) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i543) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i366) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i70) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i633) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i664) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i272) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i735) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i716) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i212) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i363) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i630) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i739) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i357) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i617) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i246) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i468) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i395) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i422) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i706) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i728) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i275) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i604) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i537) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i492) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i475) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i343) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i336) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i724) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i439) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i551) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i669) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i423) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i128) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i323) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i616) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i242) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i701) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i359) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i735) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i243) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i209) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i420) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i649) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i442) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i498) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i623) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i550) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i427) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i673) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i149) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i742) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i584) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i639) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i348) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i276) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i729) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i72) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i460) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i558) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i654) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i47) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i76) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i264) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i273) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i681) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i514) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i339) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i347) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i692) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i562) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i419) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i517) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i481) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i403) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i221) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i631) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i445) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i710) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i697) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i706) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i189) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i614) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i579) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i382) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i227) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i103) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i625) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i706) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i517) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i388) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i531) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i163) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i48) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i740) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i477) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i114) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i640) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i671) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i283) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i59) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i663) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i377) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i520) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i499) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i609) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i79) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i105) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i603) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i701) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i430) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i636) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i378) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i706) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i675) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i612) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i465) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i274) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i344) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i528) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i706) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i89) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i140) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i402) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i267) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i335) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i186) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i41) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i129) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i405) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i567) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i400) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i486) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i10) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i53) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i400) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i42) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i20) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i148) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i570) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i577) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i539) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i613) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i138) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i544) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i142) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i606) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i691) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i596) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i461) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i356) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i122) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i239) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i117) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i706) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i682) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i473) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i247) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i483) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i548) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i556) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i84) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i118) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i437) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i391) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i259) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i353) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i217) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i731) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i607) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i514) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i184) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i611) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i90) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i496) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i702) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i523) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i407) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i713) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i577) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i280) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i589) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i350) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i699) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i598) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i248) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i52) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i642) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i391) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i268) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i517) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i207) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i493) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i447) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i629) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i151) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i517) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i330) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i28) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i684) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i661) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i266) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i686) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i373) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i532) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i333) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i254) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i699) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i36) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i436) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i722) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i341) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i726) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i75) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i341) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i39) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i141) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i143) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i270) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i524) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i8) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i287) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i250) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i349) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i111) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i271) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i51) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i426) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i249) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i102) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i488) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i660) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i380) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i210) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i575) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i690) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i302) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i600) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i569) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i12) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i191) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i660) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i385) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i345) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i656) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i214) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i538) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i222) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i574) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i706) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i327) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i82) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i329) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i586) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i700) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i279) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i24) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i80) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i398) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i158) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i487) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i379) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i146) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i17) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i624) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i34) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i238) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i109) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i145) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i740) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i741) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i281) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i199) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i344) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i685) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i52) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i634) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i337) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i113) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i364) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i203) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i337) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i351) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i741) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i180) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i92) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i711) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i580) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i22) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i78) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i68) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i155) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i56) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i360) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i322) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i431) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i354) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i554) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i374) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i632) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i643) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i398) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i157) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i261) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i443) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i140) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i642) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i406) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i224) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i635) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i9) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i490) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i658) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i668) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i27) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i585) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i592) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i88) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i670) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i707) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i169) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i9) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i223) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i109) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i668) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i197) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i32) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i618) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i340) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i200) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i340) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i388) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i109) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i695) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i63) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i644) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i425) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i462) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i21) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i123) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i156) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i558) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i206) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i404) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i547) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i395) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i253) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i572) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i180) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i401) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i421) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i159) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i736) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i414) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i193) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i737) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i106) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i709) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i167) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i110) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i322) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i182) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i77) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i176) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i549) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i564) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i160) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i183) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i712) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i608) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i470) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i211) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i615) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i342) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i338) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i342) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i491) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i533) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i168) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i500) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i325) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i648) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i446) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i86) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i285) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i444) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i732) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i548) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i100) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i241) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i8) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i331) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i623) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i201) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i495) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i35) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i449) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i190) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i727) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i225) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i144) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i703) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i693) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i295) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i578) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i146) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i93) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i172) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i460) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i666) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i15) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i65) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i162) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i560) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i651) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i69) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i518) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i330) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i681) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i611) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i291) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i416) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i694) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i470) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i534) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i391) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i472) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i601) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i95) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i352) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i14) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i333) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i339) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i59) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i561) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i441) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i457) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i587) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i335) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i648) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i537) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i205) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i358) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i30) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i115) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i706) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i688) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i662) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i356) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i540) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i567) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i59) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i455) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i714) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i141) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i174) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i91) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i548) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i174) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i154) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i451) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i179) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i448) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i122) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i547) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i234) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i521) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i432) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i11) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i418) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i506) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i377) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i104) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i235) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i706) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i116) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i721) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i60) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i535) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i26) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i707) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i323) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i230) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i706) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i50) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i113) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i269) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i383) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i470) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i733) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i171) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i73) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i216) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i180) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i628) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i380) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i237) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i25) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i120) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i563) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i265) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i584) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i87) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i590) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i479) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i417) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i23) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i585) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i424) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i66) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i517) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i738) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i60) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i47) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i95) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i187) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i125) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i198) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i293) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i512) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i208) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i591) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i653) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i439) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i408) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i284) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i138) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i289) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i645) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i153) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i232) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i288) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i152) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i193) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i708) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i292) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i429) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i81) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i33) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i384) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i214) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i393) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i127) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i29) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i469) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i413) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i413) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i556) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i415) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i485) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i345) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i85) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i161) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i150) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i443) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i568) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i646) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i329) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i553) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i626) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i83) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i588) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i244) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i40) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i687) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i218) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i215) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i31) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i126) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i196) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i522) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i594) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i37) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i343) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i43) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i476) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i332) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i365) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i336) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i332) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i655) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i260) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i410) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i458) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i441) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i237) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i233) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i13) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i328) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i689) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i480) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i328) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i334) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i188) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i505) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i495) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i739) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i145) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i326) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i596) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i142) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i590) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i497) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i277) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i456) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i194) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i349) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i526) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i409) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i282) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i619) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i181) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i290) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i464) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i347) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i251) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i730) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i382) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i541) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i682) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i140) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i398) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i565) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i45) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i471) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i734) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i647) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i413) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i413) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i175) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i484) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i97) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i529) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i701) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i253) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i621) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i67) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i202) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i517) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i736) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i349) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i530) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i101) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i706) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i649) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i96) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i650) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i18) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i71) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i647) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i38) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i74) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i723) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i528) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i428) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i719) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i657) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i737) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i258) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i334) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i627) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i220) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i326) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i489) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i44) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i228) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i386) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i64) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744) MR_AND
		MR_LABEL_AP(libs__options__long_option_2_0_i744));
MR_def_label(libs__options__long_option_2_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 162;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 161;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 21;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 26;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 35;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 9;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 37;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 32;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 17;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 23;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 25;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 29;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 38;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 27;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 22;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 4;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 18;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 5;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 33;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 8;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 30;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 24;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 16;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 15;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 14;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 12;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 13;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 11;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 20;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 31;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 10;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 34;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 7;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 19;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 6;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 28;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 40;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 610;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,47)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 233;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,48)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 42;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,50)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 44;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,51)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 41;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,52)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 134;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,53)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 45;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,56)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 39;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,59)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 403;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,60)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 396;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,63)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 186;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,64)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 304;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,65)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 195;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,66)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 583;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,67)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 596;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,68)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 600;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,69)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 208;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,70)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 207;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,71)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 205;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,72)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 529;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,73)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 303;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,74)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 197;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,75)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 198;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,76)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 451;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,77)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 187;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,78)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 441;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,79)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 597;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,80)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 425;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,81)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 206;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,82)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 175;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,83)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 372;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,84)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 333;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,85)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 332;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,86)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 331;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,87)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 330;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,88)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 219;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,89)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 217;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,90)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 218;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,91)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 87;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,92)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 607;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,93)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 608;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,95)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 334;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,96)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 201;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,97)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 151;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,98)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 252;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,99)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 251;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,100)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 253;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,101)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 272;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,102)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 374;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,103)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 376;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,104)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 375;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,105)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 373;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,106)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 418;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,109)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 305;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,110)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 196;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,111)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 275;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,113)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 578;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,114)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 108;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,115)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 109;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,116)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 107;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,117)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 110;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,118)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 106;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,119)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 242;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,120)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 105;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,122)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 104;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,123)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 545;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,125)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 520;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,126)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 111;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,127)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 103;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,128)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 168;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,129)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 546;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,138)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 405;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,140)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 407;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,141)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 404;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,142)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 408;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,143)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 397;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,144)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 400;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,145)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 398;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,146)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 399;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,148)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 89;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,149)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 155;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,150)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 210;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,151)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 417;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,152)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 274;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,153)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 220;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,154)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 420;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,155)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 421;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,156)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 114;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,157)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 489;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,158)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 488;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,159)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 387;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,160)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 386;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,161)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 392;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,162)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 391;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,163)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 393;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,167)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 525;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,168)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 416;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,169)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 145;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,171)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 47;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,172)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 422;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,174)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 443;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,175)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 117;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,176)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 204;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,179)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 250;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,180)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 209;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,181)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 270;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,182)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 99;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,183)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 411;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,184)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 267;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,185)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 266;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,186)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 265;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,187)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 261;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,188)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 268;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,189)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 262;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,190)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 264;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,191)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 269;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,193)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 200;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,194)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 427;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,195)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 136;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,196)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 140;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,197)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 603;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,198)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 123;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,199)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 292;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,200)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 570;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,201)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 562;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,202)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 552;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,203)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 567;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,204)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 566;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,205)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 558;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,206)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 557;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,207)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 572;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,208)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 571;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,209)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 560;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,210)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 547;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,211)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 532;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,212)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 141;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,214)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 513;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,215)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 598;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,216)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 507;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,217)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 530;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,218)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 255;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,219)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 605;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,220)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 143;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,221)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 142;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,222)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 385;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,223)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 189;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,224)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 190;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,225)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 280;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,226)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 281;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,227)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 279;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,228)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 576;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,229)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 549;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,230)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 302;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,232)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 541;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,233)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 540;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,234)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 231;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,235)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 230;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,237)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 137;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,238)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 167;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,239)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 172;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,241)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 112;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,242)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 173;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,243)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 185;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,244)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 184;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,245)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 183;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,246)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 181;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,247)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 180;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,248)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 182;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,249)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 179;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,250)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 174;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,251)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 171;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,253)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 453;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,254)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 241;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,255)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 49;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,257)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 245;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,258)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 296;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,259)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 176;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,260)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 581;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,261)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 278;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,262)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 224;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,263)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 475;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,264)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 287;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,265)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 439;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,266)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 382;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,267)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 276;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,268)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 277;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,269)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 193;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,270)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 94;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,271)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 93;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,272)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 98;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,273)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 95;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,274)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 92;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,275)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 501;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,276)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 46;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,277)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 97;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,278)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 96;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,279)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 354;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,280)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 348;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,281)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 355;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,282)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 346;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,283)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 352;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,284)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 353;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,285)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 347;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,286)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 350;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,287)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 351;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,288)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 349;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,289)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 356;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,290)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 357;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,291)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 602;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,292)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 595;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,293)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 593;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,295)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 369;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,302)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 370;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,312)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 343;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,322)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 325;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,323)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 429;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,325)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 344;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,326)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 345;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,327)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 358;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,328)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 450;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,329)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 449;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,330)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 446;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,331)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 436;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,332)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 444;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,333)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 437;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,334)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 430;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,335)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 327;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,336)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 438;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,337)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 447;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,338)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 445;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,339)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 340;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,340)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 448;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,341)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 362;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,342)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 338;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,343)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 337;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,344)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 339;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,345)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 341;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,347)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 300;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,348)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 297;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,349)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 298;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,350)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 384;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,351)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 474;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,352)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 211;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,353)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 213;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,354)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 212;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,356)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 285;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,357)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 283;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,358)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 286;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,359)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 284;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,360)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 229;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,363)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 254;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,364)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 248;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,365)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 152;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,366)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 135;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,372)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 543;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,373)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 542;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,374)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 199;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,375)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 426;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,377)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 517;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,378)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 524;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,379)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 511;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,380)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 515;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,382)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 585;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,383)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 169;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,384)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 202;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,385)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 288;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,386)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 548;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,388)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 80;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,391)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 78;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,393)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 74;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,395)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 76;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,398)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 77;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,400)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 75;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,401)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 79;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,402)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 574;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,403)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 527;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,404)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 273;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,405)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 359;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,406)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 415;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,407)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 413;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,408)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 442;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,409)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 455;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,410)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 613;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,411)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 324;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,413)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 435;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,414)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 561;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,415)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 551;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,416)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 554;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,417)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 553;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,418)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 565;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,419)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 564;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,420)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 563;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,421)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 550;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,422)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 556;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,423)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 555;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,424)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 569;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,425)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 559;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,426)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 568;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,427)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 522;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,428)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 476;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,429)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 536;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,430)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 509;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,431)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 535;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,432)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 120;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,435)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 533;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,436)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 506;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,437)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 508;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,439)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 589;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,441)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 590;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,442)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 601;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,443)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 588;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,444)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 591;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,445)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 247;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,446)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 504;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,447)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 505;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,448)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 502;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,449)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 503;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,450)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 575;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,451)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 577;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,454)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 483;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,455)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 479;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,456)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 480;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,457)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 481;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,458)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 232;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,460)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 478;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,461)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 482;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,462)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 573;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,464)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 579;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,465)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 336;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,468)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 306;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,469)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 326;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,470)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 301;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,471)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 318;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,472)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 599;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,473)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 582;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,475)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 587;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,476)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 586;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,477)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 310;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,478)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 317;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,479)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 313;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,480)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 316;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,481)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 311;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,482)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 377;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,483)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 315;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,484)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 314;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,485)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 312;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,486)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 464;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,487)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 518;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,488)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 519;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,489)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 0;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,490)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 1;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,491)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 36;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,492)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 147;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,493)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 148;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,495)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 149;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,496)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 150;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,497)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 124;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,498)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 383;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,499)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 485;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,500)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 486;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,505)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 484;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,506)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 156;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,512)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 328;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,513)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 329;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,514)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 226;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,517)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 225;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,518)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 609;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,520)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 2;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,521)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 3;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,522)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 154;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,523)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 432;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,524)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 85;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,525)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 81;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,526)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 84;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,528)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 101;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,529)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 82;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,530)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 83;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,531)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 119;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,532)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 221;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,533)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 227;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,534)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 295;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,535)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 222;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,537)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 192;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,538)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 144;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,539)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 611;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,540)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 319;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,541)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 122;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,543)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 115;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,544)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 118;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,545)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 361;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,547)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 592;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,548)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 335;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,549)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 43;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,550)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 606;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,551)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 617;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,553)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 293;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,554)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 294;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,556)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 604;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,558)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 531;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,559)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 580;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,560)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 203;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,561)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 191;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,562)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 616;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,563)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 534;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,564)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 113;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,565)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 342;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,567)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 454;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,568)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 153;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,569)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 88;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,570)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 456;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,572)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 498;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,573)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 499;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,574)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 494;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,575)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 500;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,577)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 497;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,578)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 495;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,579)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 496;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,580)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 493;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,584)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 401;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,585)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 394;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,586)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 452;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,587)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 431;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,588)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 125;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,589)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 132;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,590)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 133;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,591)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 128;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,592)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 127;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,593)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 130;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,594)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 131;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,595)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 129;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,596)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 126;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,597)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 487;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,598)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 381;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,599)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 260;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,600)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 256;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,601)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 257;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,602)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 48;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,603)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 228;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,604)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 414;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,605)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 412;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,606)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 544;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,607)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 526;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,608)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 249;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,609)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 116;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,611)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 360;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,612)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 366;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,613)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 367;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,614)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 364;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,615)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 365;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,616)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 363;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,617)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 170;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,618)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 188;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,619)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 166;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,620)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 50;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,621)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 69;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,623)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 60;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,624)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 66;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,625)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 63;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,626)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 62;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,627)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 61;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,628)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 59;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,629)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 54;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,630)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 52;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,631)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 55;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,632)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 53;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,633)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 51;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,634)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 70;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,635)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 72;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,636)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 67;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,637)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 65;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,638)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 71;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,639)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 73;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,640)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 64;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,642)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 57;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,643)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 56;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,644)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 58;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,645)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 68;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,646)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 165;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,647)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 390;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,648)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 389;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,649)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 388;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,650)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 491;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,651)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 492;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,652)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 490;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,653)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 612;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,654)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 538;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,655)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 539;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,656)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 537;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,657)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 178;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,658)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 177;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,660)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 86;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,661)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 380;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,662)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 323;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,663)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 594;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,664)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 216;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,666)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 91;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,668)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 158;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,669)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 90;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,670)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 291;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,671)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 321;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,672)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 320;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,673)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 434;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,674)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 322;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,675)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 433;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,678)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 440;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,681)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 402;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,682)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 395;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,683)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 465;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,684)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 470;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,685)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 468;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,686)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 472;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,687)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 466;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,688)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 469;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,689)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 471;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,690)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 467;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,691)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 459;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,692)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 460;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,693)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 458;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,694)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 244;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,695)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 246;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,697)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 462;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,699)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 461;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,700)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 473;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,701)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 457;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,702)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 477;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,703)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 215;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,706)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 615;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,707)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 282;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,708)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 243;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,709)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 214;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,710)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 419;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,711)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 139;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,712)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 138;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,713)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 239;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,714)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 237;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,715)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 121;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,716)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 102;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,717)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 223;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,718)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 406;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,719)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 463;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,720)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 307;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,721)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 614;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,722)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 308;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,723)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 368;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,724)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 371;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,726)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 409;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,727)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 410;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,728)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 378;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,729)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 528;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,730)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 146;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,731)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 379;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,732)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 271;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,733)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 428;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,734)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 240;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,735)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 160;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,736)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 159;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,737)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 234;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,738)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 157;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,739)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 235;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,740)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 236;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,741)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 164;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,742)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 163;
	MR_r1 = MR_TRUE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(libs__options_module2)
	MR_init_entry1(libs__options__option_defaults_2_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__libs__options__option_defaults_2_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'option_defaults_2'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(libs__options__option_defaults_2_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) &MR_tfield(0, (MR_Word *) &mercury_vector_common_8_0, (MR_Integer) MR_r1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_tfield(0, MR_r2, 0);
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_declare_entry(MR_do_fail);

MR_BEGIN_MODULE(libs__options_module3)
	MR_init_entry1(libs__options__option_defaults_2_2_1);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__libs__options__option_defaults_2_2_1);
	MR_init_label3(libs__options__option_defaults_2_2_1,2,3,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'option_defaults_2'/2 mode 1 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(libs__options__option_defaults_2_2_1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_mkframe("pred libs.options.option_defaults_2/2-1", 1,
		MR_LABEL_AP(libs__options__option_defaults_2_2_1_i2));
	{
	MR_Word MR_tempr1;
	MR_tempr1 = (MR_Word) &MR_tfield(0, (MR_Word *) &mercury_vector_common_3_0, 0);
	MR_fv(1) = (MR_Integer) 2;
	MR_r1 = MR_tfield(0, MR_tempr1, 0);
	MR_r2 = MR_tfield(0, MR_tempr1, 1);
	MR_succeed();
	}
MR_def_label(libs__options__option_defaults_2_2_1,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_fv(1);
	if (MR_INT_GE(MR_r3,26)) {
		MR_GOTO_LAB(libs__options__option_defaults_2_2_1_i3);
	}
	MR_fv(1) = ((MR_Integer) MR_fv(1) + (MR_Integer) 2);
	MR_GOTO_LAB(libs__options__option_defaults_2_2_1_i4);
MR_def_label(libs__options__option_defaults_2_2_1,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_redoip_slot_word(MR_curfr) = (MR_Word) MR_ENTRY(MR_do_fail);
MR_def_label(libs__options__option_defaults_2_2_1,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = (MR_Word) &MR_tfield(0, (MR_Word *) &mercury_vector_common_3_0, (MR_Integer) MR_r3);
	MR_r1 = MR_tfield(0, MR_tempr1, 0);
	MR_r2 = MR_tfield(0, MR_tempr1, 1);
	MR_succeed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(list__member_2_1);

MR_BEGIN_MODULE(libs__options_module4)
	MR_init_entry1(libs__options__option_defaults_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__libs__options__option_defaults_2_0);
	MR_init_label2(libs__options__option_defaults_2_0,1,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'option_defaults'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__libs__options__option_defaults_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_mkframe("pred libs.options.option_defaults/2-0", 0,
		MR_ENTRY(MR_do_fail));
	MR_np_call_localret_ent(libs__options__option_defaults_2_2_1,
		libs__options__option_defaults_2_0_i1);
MR_def_label(libs__options__option_defaults_2_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,9,0);
	MR_np_call_localret_ent(list__member_2_1,
		libs__options__option_defaults_2_0_i3);
MR_def_label(libs__options__option_defaults_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_tfield(0, MR_r1, 0);
	MR_r2 = MR_tfield(0, MR_tempr1, 1);
	MR_succeed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__dir__make_path_name_2_0);
MR_decl_entry(fn__list__foldl_3_0);

MR_BEGIN_MODULE(libs__options_module5)
	MR_init_entry1(fn__libs__options__option_table_add_mercury_library_directory_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__libs__options__option_table_add_mercury_library_directory_2_0);
	MR_init_label3(fn__libs__options__option_table_add_mercury_library_directory_2_0,4,6,8)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'option_table_add_mercury_library_directory'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__libs__options__option_table_add_mercury_library_directory_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(5) = (MR_Word) MR_TAG_COMMON(0,9,1);
	MR_sv(6) = (MR_Word) MR_TAG_COMMON(0,9,2);
	MR_r1 = MR_r2;
	MR_r2 = (MR_Word) MR_string_const("ints", 4);
	MR_np_call_localret_ent(fn__dir__make_path_name_2_0,
		fn__libs__options__option_table_add_mercury_library_directory_2_0_i4);
MR_def_label(fn__libs__options__option_table_add_mercury_library_directory_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_sv(3) = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Integer) 598;
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = (MR_Word) MR_string_const("inc", 3);
	}
	MR_np_call_localret_ent(fn__dir__make_path_name_2_0,
		fn__libs__options__option_table_add_mercury_library_directory_2_0_i6);
MR_def_label(fn__libs__options__option_table_add_mercury_library_directory_2_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_sv(4) = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Integer) 461;
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = (MR_Word) MR_string_const("inc", 3);
	}
	MR_np_call_localret_ent(fn__dir__make_path_name_2_0,
		fn__libs__options__option_table_add_mercury_library_directory_2_0_i8);
MR_def_label(fn__libs__options__option_table_add_mercury_library_directory_2_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = (MR_Integer) 497;
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = (MR_Integer) 510;
	MR_tfield(0, MR_tempr2, 1) = MR_sv(2);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr3, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(4);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 2);
	MR_r4 = MR_tempr4;
	MR_tfield(1, MR_tempr4, 0) = MR_sv(3);
	MR_tfield(1, MR_tempr4, 1) = MR_tempr1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(6);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,11,0);
	MR_r5 = MR_sv(1);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(fn__list__foldl_3_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(libs__options_module6)
	MR_init_entry1(fn__libs__options__option_table_add_search_library_files_directory_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__libs__options__option_table_add_search_library_files_directory_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'option_table_add_search_library_files_directory'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__libs__options__option_table_add_search_library_files_directory_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = (MR_Integer) 598;
	MR_tfield(0, MR_tempr1, 1) = MR_r2;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = (MR_Integer) 461;
	MR_tfield(0, MR_tempr2, 1) = MR_r2;
	MR_tag_alloc_heap(MR_tempr3, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr3, 0) = (MR_Integer) 497;
	MR_tfield(0, MR_tempr3, 1) = MR_r2;
	MR_tag_alloc_heap(MR_tempr4, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr4, 0) = (MR_Integer) 512;
	MR_tfield(0, MR_tempr4, 1) = MR_r2;
	MR_tag_alloc_heap(MR_tempr5, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr5, 0) = MR_tempr4;
	MR_tfield(1, MR_tempr5, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr4, 0) = MR_tempr3;
	MR_tfield(1, MR_tempr4, 1) = MR_tempr5;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr3, 1) = MR_tempr4;
	MR_tag_alloc_heap(MR_tempr6, 1, (MR_Integer) 2);
	MR_r4 = MR_tempr6;
	MR_tfield(1, MR_tempr6, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr6, 1) = MR_tempr3;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,9,1);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,9,2);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,11,1);
	MR_r5 = MR_tempr1;
	MR_np_tailcall_ent(fn__list__foldl_3_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(svmap__set_4_0);

MR_BEGIN_MODULE(libs__options_module7)
	MR_init_entry1(libs__options__override_options_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__libs__options__override_options_3_0);
	MR_init_label3(libs__options__override_options_3_0,10,3,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'override_options'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(libs__options__override_options_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
MR_def_label(libs__options__override_options_3_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(libs__options__override_options_3_0_i3);
	}
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(2);
MR_def_label(libs__options__override_options_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_tfield(1, MR_r1, 1);
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(libs__options, option);
	MR_tempr2 = MR_r2;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(getopt_io, option_data);
	MR_tempr3 = MR_tfield(1, MR_tempr1, 0);
	MR_r3 = MR_tfield(0, MR_tempr3, 0);
	MR_r4 = MR_tfield(0, MR_tempr3, 1);
	MR_r5 = MR_tempr2;
	}
	MR_np_call_localret_ent(svmap__set_4_0,
		libs__options__override_options_3_0_i4);
MR_def_label(libs__options__override_options_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(2);
	MR_GOTO_LAB(libs__options__override_options_3_0_i10);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(getopt_io__lookup_bool_option_3_0);

MR_BEGIN_MODULE(libs__options_module8)
	MR_init_entry1(libs__options__opt_level_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__libs__options__opt_level_3_0);
	MR_init_label9(libs__options__opt_level_3_0,3,40,15,22,23,24,25,26,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'opt_level'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(libs__options__opt_level_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(((MR_Unsigned) MR_r1 <= 6))) {
		MR_GOTO_LAB(libs__options__opt_level_3_0_i1);
	}
	MR_COMPUTED_GOTO((MR_Unsigned) MR_r1,
		MR_LABEL_AP(libs__options__opt_level_3_0_i3) MR_AND
		MR_LABEL_AP(libs__options__opt_level_3_0_i40) MR_AND
		MR_LABEL_AP(libs__options__opt_level_3_0_i22) MR_AND
		MR_LABEL_AP(libs__options__opt_level_3_0_i23) MR_AND
		MR_LABEL_AP(libs__options__opt_level_3_0_i24) MR_AND
		MR_LABEL_AP(libs__options__opt_level_3_0_i25) MR_AND
		MR_LABEL_AP(libs__options__opt_level_3_0_i26));
MR_def_label(libs__options__opt_level_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_TAG_COMMON(1,4,626);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__opt_level_3_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = (MR_Word) MR_TAG_COMMON(0,3,632);
	MR_sv(2) = (MR_Word) MR_TAG_COMMON(0,3,633);
	MR_sv(3) = (MR_Word) MR_TAG_COMMON(0,3,634);
	MR_sv(4) = (MR_Word) MR_TAG_COMMON(1,4,629);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(libs__options, option);
	MR_r3 = (MR_Integer) 282;
	MR_np_call_localret_ent(getopt_io__lookup_bool_option_3_0,
		libs__options__opt_level_3_0_i15);
MR_def_label(libs__options__opt_level_3_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = (MR_Integer) 448;
	MR_tfield(0, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr1, 1) = MR_sv(4);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(3);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(1);
	MR_tfield(1, MR_r2, 1) = MR_tempr1;
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(5);
	}
MR_def_label(libs__options__opt_level_3_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_TAG_COMMON(1,4,640);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__opt_level_3_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_TAG_COMMON(1,4,648);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__opt_level_3_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_TAG_COMMON(1,4,651);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__opt_level_3_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_TAG_COMMON(1,4,657);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__opt_level_3_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_TAG_COMMON(1,4,660);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__opt_level_3_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(libs__compiler_util__unexpected_2_0);

MR_BEGIN_MODULE(libs__options_module9)
	MR_init_entry1(libs__options__enable_opt_levels_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__libs__options__enable_opt_levels_4_0);
	MR_init_label5(libs__options__enable_opt_levels_4_0,20,2,4,6,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'enable_opt_levels'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(libs__options__enable_opt_levels_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
MR_def_label(libs__options__enable_opt_levels_4_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) MR_r1 <= (MR_Integer) MR_r2)) {
		MR_GOTO_LAB(libs__options__enable_opt_levels_4_0_i2);
	}
	MR_r1 = MR_r3;
	MR_decr_sp_and_return(4);
MR_def_label(libs__options__enable_opt_levels_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(3) = MR_tempr1;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(libs__options__opt_level_3_0,
		libs__options__enable_opt_levels_4_0_i4);
MR_def_label(libs__options__enable_opt_levels_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(libs__options__enable_opt_levels_4_0_i3);
	}
	MR_r1 = MR_r2;
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(libs__options__override_options_3_0,
		libs__options__enable_opt_levels_4_0_i6);
MR_def_label(libs__options__enable_opt_levels_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = ((MR_Integer) MR_sv(1) + (MR_Integer) 1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tempr1;
	MR_succip_word = MR_sv(4);
	MR_GOTO_LAB(libs__options__enable_opt_levels_4_0_i20);
	}
MR_def_label(libs__options__enable_opt_levels_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("options.m", 9);
	MR_r2 = (MR_Word) MR_string_const("Unknown optimization level", 26);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(libs__options_module10)
	MR_init_entry1(libs__options__set_opt_level_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__libs__options__set_opt_level_3_0);
	MR_init_label2(libs__options__set_opt_level_3_0,2,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'set_opt_level'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(libs__options__set_opt_level_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_r1 = (MR_Integer) 9;
	MR_np_call_localret_ent(libs__options__option_defaults_2_2_0,
		libs__options__set_opt_level_3_0_i2);
MR_def_label(libs__options__set_opt_level_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(libs__options__override_options_3_0,
		libs__options__set_opt_level_3_0_i3);
MR_def_label(libs__options__set_opt_level_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 0;
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tempr1;
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(libs__options__enable_opt_levels_4_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(libs__options_module11)
	MR_init_entry1(libs__options__opt_space_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__libs__options__opt_space_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'opt_space'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(libs__options__opt_space_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(1,4,670);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(libs__options_module12)
	MR_init_entry1(fn__libs__options__quote_arg_unix_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__libs__options__quote_arg_unix_1_0);
	MR_init_label6(fn__libs__options__quote_arg_unix_1_0,14,15,5,4,13,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'quote_arg_unix'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__libs__options__quote_arg_unix_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(fn__libs__options__quote_arg_unix_1_0_i2);
	}
	MR_r3 = (MR_Word) MR_sp;
MR_def_label(fn__libs__options__quote_arg_unix_1_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	while (1) {
	MR_incr_sp(1);
	MR_sv(1) = MR_tfield(1, MR_r1, 0);
	MR_r1 = MR_tfield(1, MR_r1, 1);
	if (MR_LTAGS_TESTR(MR_r1,0,0))
		continue;
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	break; } /* end while */
MR_def_label(fn__libs__options__quote_arg_unix_1_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_EQ(MR_sv(1),34)) {
		MR_GOTO_LAB(fn__libs__options__quote_arg_unix_1_0_i5);
	}
	if (MR_INT_EQ(MR_sv(1),36)) {
		MR_GOTO_LAB(fn__libs__options__quote_arg_unix_1_0_i5);
	}
	if (MR_INT_EQ(MR_sv(1),92)) {
		MR_GOTO_LAB(fn__libs__options__quote_arg_unix_1_0_i5);
	}
	if (MR_INT_NE(MR_sv(1),96)) {
		MR_GOTO_LAB(fn__libs__options__quote_arg_unix_1_0_i4);
	}
MR_def_label(fn__libs__options__quote_arg_unix_1_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(1);
	MR_tfield(1, MR_r2, 1) = MR_r1;
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = (MR_Integer) 92;
	MR_tfield(1, MR_r1, 1) = MR_r2;
	MR_GOTO_LAB(fn__libs__options__quote_arg_unix_1_0_i13);
MR_def_label(fn__libs__options__quote_arg_unix_1_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(1);
	MR_tfield(1, MR_r2, 1) = MR_r1;
	MR_r1 = MR_r2;
MR_def_label(fn__libs__options__quote_arg_unix_1_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp(1);
	if (((MR_Integer) MR_sp > (MR_Integer) MR_r3)) {
		MR_GOTO_LAB(fn__libs__options__quote_arg_unix_1_0_i15);
	}
	MR_proceed();
MR_def_label(fn__libs__options__quote_arg_unix_1_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(dir__use_windows_paths_0_0);
MR_decl_entry(fn__string__to_char_list_1_0);
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_character_0;
MR_decl_entry(char__is_whitespace_1_0);
MR_declare_entry(MR_do_redo);
MR_decl_entry(fn__f_115_116_114_105_110_103_95_95_43_43_2_0);
MR_decl_entry(char__is_alnum_or_underscore_1_0);
MR_decl_entry(fn__string__from_char_list_1_0);

MR_BEGIN_MODULE(libs__options_module13)
	MR_init_entry1(fn__libs__options__quote_arg_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__libs__options__quote_arg_1_0);
	MR_init_label10(fn__libs__options__quote_arg_1_0,4,10,12,13,11,45,7,2,20,21)
	MR_init_label9(fn__libs__options__quote_arg_1_0,23,28,32,34,30,26,36,37,38)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'quote_arg'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__libs__options__quote_arg_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(dir__use_windows_paths_0_0,
		fn__libs__options__quote_arg_1_0_i4);
MR_def_label(fn__libs__options__quote_arg_1_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(fn__libs__options__quote_arg_1_0_i2);
	}
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(fn__string__to_char_list_1_0,
		fn__libs__options__quote_arg_1_0_i10);
MR_def_label(fn__libs__options__quote_arg_1_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = (MR_Word) MR_redoip_slot(MR_maxfr);
	MR_sv(3) = (MR_Word) MR_redofr_slot(MR_maxfr);
	MR_save_maxfr(MR_sv(4));
	MR_redofr_slot_word(MR_maxfr) = (MR_Word) MR_curfr;
	MR_redoip_slot_word(MR_maxfr) = (MR_Word) MR_LABEL_AP(fn__libs__options__quote_arg_1_0_i11);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CHAR_CTOR_ADDR;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__member_2_1,
		fn__libs__options__quote_arg_1_0_i12);
MR_def_label(fn__libs__options__quote_arg_1_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(char__is_whitespace_1_0,
		fn__libs__options__quote_arg_1_0_i13);
MR_def_label(fn__libs__options__quote_arg_1_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO(MR_ENTRY(MR_do_redo));
	}
	MR_restore_maxfr(MR_sv(4));
	MR_redoip_slot_word(MR_maxfr) = MR_sv(2);
	MR_redofr_slot_word(MR_maxfr) = MR_sv(3);
	MR_GOTO_LAB(fn__libs__options__quote_arg_1_0_i45);
MR_def_label(fn__libs__options__quote_arg_1_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_redoip_slot_word(MR_maxfr) = MR_sv(2);
	MR_redofr_slot_word(MR_maxfr) = MR_sv(3);
	if ((strcmp((char *) (MR_Word *) MR_sv(1), MR_string_const("", 0)) != 0)) {
		MR_GOTO_LAB(fn__libs__options__quote_arg_1_0_i7);
	}
MR_def_label(fn__libs__options__quote_arg_1_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = (MR_Word) MR_string_const("\"", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__libs__options__quote_arg_1_0_i38);
MR_def_label(fn__libs__options__quote_arg_1_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_decr_sp_and_return(5);
MR_def_label(fn__libs__options__quote_arg_1_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(fn__string__to_char_list_1_0,
		fn__libs__options__quote_arg_1_0_i20);
MR_def_label(fn__libs__options__quote_arg_1_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__libs__options__quote_arg_unix_1_0,
		fn__libs__options__quote_arg_1_0_i21);
MR_def_label(fn__libs__options__quote_arg_1_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(fn__libs__options__quote_arg_1_0_i23);
	}
	MR_r1 = (MR_Word) MR_string_const("\"\"", 2);
	MR_decr_sp_and_return(5);
MR_def_label(fn__libs__options__quote_arg_1_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = (MR_Word) MR_redoip_slot(MR_maxfr);
	MR_sv(3) = (MR_Word) MR_redofr_slot(MR_maxfr);
	MR_save_maxfr(MR_sv(4));
	MR_redofr_slot_word(MR_maxfr) = (MR_Word) MR_curfr;
	MR_redoip_slot_word(MR_maxfr) = (MR_Word) MR_LABEL_AP(fn__libs__options__quote_arg_1_0_i26);
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_CHAR_CTOR_ADDR;
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(list__member_2_1,
		fn__libs__options__quote_arg_1_0_i28);
MR_def_label(fn__libs__options__quote_arg_1_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(((MR_Unsigned) ((MR_Integer) MR_r1 - (MR_Integer) 44) <= 14))) {
		MR_GOTO_LAB(fn__libs__options__quote_arg_1_0_i32);
	}
	if (!((((MR_Integer) 1 << ((MR_Integer) MR_r1 - (MR_Integer) 44)) & (MR_Integer) 16399))) {
		MR_GOTO_LAB(fn__libs__options__quote_arg_1_0_i32);
	}
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_r3;
	MR_GOTO(MR_ENTRY(MR_do_redo));
MR_def_label(fn__libs__options__quote_arg_1_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(char__is_alnum_or_underscore_1_0,
		fn__libs__options__quote_arg_1_0_i34);
MR_def_label(fn__libs__options__quote_arg_1_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(fn__libs__options__quote_arg_1_0_i30);
	}
	MR_r1 = MR_sv(1);
	MR_GOTO(MR_ENTRY(MR_do_redo));
MR_def_label(fn__libs__options__quote_arg_1_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_restore_maxfr(MR_sv(4));
	MR_redoip_slot_word(MR_maxfr) = MR_sv(2);
	MR_redofr_slot_word(MR_maxfr) = MR_sv(3);
	MR_GOTO_LAB(fn__libs__options__quote_arg_1_0_i36);
MR_def_label(fn__libs__options__quote_arg_1_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_redoip_slot_word(MR_maxfr) = MR_sv(2);
	MR_redofr_slot_word(MR_maxfr) = MR_sv(3);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(fn__string__from_char_list_1_0);
MR_def_label(fn__libs__options__quote_arg_1_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(fn__string__from_char_list_1_0,
		fn__libs__options__quote_arg_1_0_i37);
MR_def_label(fn__libs__options__quote_arg_1_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("\"", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__libs__options__quote_arg_1_0_i38);
MR_def_label(fn__libs__options__quote_arg_1_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("\"", 1);
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__getopt_io__lookup_accumulating_option_2_0);
MR_decl_entry(fn__f_108_105_115_116_95_95_43_43_2_0);
MR_decl_entry(fn__f_109_97_112_95_95_101_108_101_109_32_58_61_3_0);

MR_BEGIN_MODULE(libs__options_module14)
	MR_init_entry1(fn__libs__options__append_to_accumulating_option_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__libs__options__append_to_accumulating_option_2_0);
	MR_init_label2(fn__libs__options__append_to_accumulating_option_2_0,2,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'append_to_accumulating_option'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__libs__options__append_to_accumulating_option_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_tfield(0, MR_r1, 0);
	MR_sv(2) = MR_tfield(0, MR_r1, 1);
	MR_sv(3) = MR_r2;
	MR_sv(4) = (MR_Word) MR_CTOR0_ADDR(libs__options, option);
	MR_r1 = MR_sv(4);
	MR_r3 = MR_sv(1);
	MR_np_call_localret_ent(fn__getopt_io__lookup_accumulating_option_2_0,
		fn__libs__options__append_to_accumulating_option_2_0_i2);
MR_def_label(fn__libs__options__append_to_accumulating_option_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tempr2 = MR_r1;
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = MR_tempr2;
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		fn__libs__options__append_to_accumulating_option_2_0_i4);
MR_def_label(fn__libs__options__append_to_accumulating_option_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_r5 = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 3;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(getopt_io, option_data);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(3);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(fn__f_109_97_112_95_95_101_108_101_109_32_58_61_3_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(libs__options_module15)
	MR_init_entry1(libs__options__handle_quoted_flag_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__libs__options__handle_quoted_flag_4_0);
	MR_init_label1(libs__options__handle_quoted_flag_4_0,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'handle_quoted_flag'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(libs__options__handle_quoted_flag_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r3;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__libs__options__quote_arg_1_0,
		libs__options__handle_quoted_flag_4_0_i2);
MR_def_label(libs__options__handle_quoted_flag_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(fn__libs__options__append_to_accumulating_option_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(map__set_4_0);
MR_decl_entry(libs__handle_options__convert_grade_option_3_0);
MR_decl_entry(bool__not_2_0);
MR_decl_entry(fn__map__set_3_0);

MR_BEGIN_MODULE(libs__options_module16)
	MR_init_entry1(libs__options__special_handler_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__libs__options__special_handler_4_0);
	MR_init_label10(libs__options__special_handler_4_0,6,3,13,14,15,10,19,27,24,31)
	MR_init_label10(libs__options__special_handler_4_0,40,38,43,44,36,47,55,52,59,72)
	MR_init_label10(libs__options__special_handler_4_0,70,126,127,128,130,123,137,145,142,153)
	MR_init_label10(libs__options__special_handler_4_0,152,156,151,149,164,166,167,161,170,176)
	MR_init_label10(libs__options__special_handler_4_0,186,180,198,197,196,194,208,205,213,215)
	MR_init_label10(libs__options__special_handler_4_0,220,211,225,223,231,228,237,238,240,234)
	MR_init_label10(libs__options__special_handler_4_0,243,247,251,255,259,263,267,274,271,277)
	MR_init_label9(libs__options__special_handler_4_0,281,288,289,291,285,294,302,304,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'special_handler'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__libs__options__special_handler_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,158)) {
		MR_GOTO_LAB(libs__options__special_handler_4_0_i3);
	}
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(libs__options__special_handler_4_0_i1);
	}
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(libs__options, option);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(getopt_io, option_data);
	MR_r4 = (MR_Integer) 155;
	MR_r5 = (MR_Word) MR_TAG_COMMON(3,5,8);
	MR_np_call_localret_ent(map__set_4_0,
		libs__options__special_handler_4_0_i6);
MR_def_label(libs__options__special_handler_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(libs__options, option);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(getopt_io, option_data);
	MR_r3 = MR_tempr1;
	MR_r4 = (MR_Integer) 89;
	MR_r5 = (MR_Word) MR_TAG_COMMON(1,1,0);
	}
	MR_np_call_localret_ent(map__set_4_0,
		libs__options__special_handler_4_0_i304);
MR_def_label(libs__options__special_handler_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,170)) {
		MR_GOTO_LAB(libs__options__special_handler_4_0_i10);
	}
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(libs__options__special_handler_4_0_i1);
	}
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = (MR_Word) MR_TAG_COMMON(1,1,1);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(libs__options, option);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(getopt_io, option_data);
	MR_r4 = (MR_Integer) 172;
	MR_r5 = MR_sv(1);
	MR_np_call_localret_ent(map__set_4_0,
		libs__options__special_handler_4_0_i13);
MR_def_label(libs__options__special_handler_4_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(libs__options, option);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(getopt_io, option_data);
	MR_r3 = MR_tempr1;
	MR_r4 = (MR_Integer) 171;
	MR_r5 = MR_sv(1);
	}
	MR_np_call_localret_ent(map__set_4_0,
		libs__options__special_handler_4_0_i14);
MR_def_label(libs__options__special_handler_4_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(libs__options, option);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(getopt_io, option_data);
	MR_r3 = MR_tempr1;
	MR_r4 = (MR_Integer) 173;
	MR_r5 = MR_sv(1);
	}
	MR_np_call_localret_ent(map__set_4_0,
		libs__options__special_handler_4_0_i15);
MR_def_label(libs__options__special_handler_4_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(libs__options, option);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(getopt_io, option_data);
	MR_r3 = MR_tempr1;
	MR_r4 = (MR_Integer) 174;
	MR_r5 = (MR_Word) MR_TAG_COMMON(1,1,0);
	}
	MR_np_call_localret_ent(map__set_4_0,
		libs__options__special_handler_4_0_i304);
MR_def_label(libs__options__special_handler_4_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,163)) {
		MR_GOTO_LAB(libs__options__special_handler_4_0_i19);
	}
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(libs__options__special_handler_4_0_i1);
	}
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(libs__options, option);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(getopt_io, option_data);
	MR_r4 = (MR_Integer) 155;
	MR_r5 = (MR_Word) MR_TAG_COMMON(3,5,42);
	MR_np_call_localret_ent(map__set_4_0,
		libs__options__special_handler_4_0_i304);
MR_def_label(libs__options__special_handler_4_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,164)) {
		MR_GOTO_LAB(libs__options__special_handler_4_0_i24);
	}
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(libs__options__special_handler_4_0_i1);
	}
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(libs__options, option);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(getopt_io, option_data);
	MR_r4 = (MR_Integer) 155;
	MR_r5 = (MR_Word) MR_TAG_COMMON(3,5,42);
	MR_np_call_localret_ent(map__set_4_0,
		libs__options__special_handler_4_0_i27);
MR_def_label(libs__options__special_handler_4_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(libs__options, option);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(getopt_io, option_data);
	MR_r3 = MR_tempr1;
	MR_r4 = (MR_Integer) 89;
	MR_r5 = (MR_Word) MR_TAG_COMMON(1,1,0);
	}
	MR_np_call_localret_ent(map__set_4_0,
		libs__options__special_handler_4_0_i304);
MR_def_label(libs__options__special_handler_4_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,454)) {
		MR_GOTO_LAB(libs__options__special_handler_4_0_i31);
	}
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(libs__options__special_handler_4_0_i1);
	}
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(libs__options, option);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(getopt_io, option_data);
	MR_r4 = (MR_Integer) 453;
	MR_r5 = (MR_Word) MR_TAG_COMMON(2,1,1);
	MR_np_call_localret_ent(map__set_4_0,
		libs__options__special_handler_4_0_i304);
MR_def_label(libs__options__special_handler_4_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,154)) {
		MR_GOTO_LAB(libs__options__special_handler_4_0_i36);
	}
	if (MR_RTAGS_TESTR(MR_r2,3,0)) {
		MR_GOTO_LAB(libs__options__special_handler_4_0_i1);
	}
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_r1 = MR_tfield(3, MR_r2, 1);
	MR_sv(1) = MR_r1;
	MR_r2 = MR_r3;
	MR_np_call_localret_ent(libs__handle_options__convert_grade_option_3_0,
		libs__options__special_handler_4_0_i40);
MR_def_label(libs__options__special_handler_4_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(libs__options__special_handler_4_0_i38);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr1, 0) = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(6);
	}
MR_def_label(libs__options__special_handler_4_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = (MR_Word) MR_string_const("\'", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		libs__options__special_handler_4_0_i43);
MR_def_label(libs__options__special_handler_4_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("invalid grade \140", 15);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		libs__options__special_handler_4_0_i44);
MR_def_label(libs__options__special_handler_4_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r2, 0) = MR_r1;
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(6);
MR_def_label(libs__options__special_handler_4_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,156)) {
		MR_GOTO_LAB(libs__options__special_handler_4_0_i47);
	}
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(libs__options__special_handler_4_0_i1);
	}
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(libs__options, option);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(getopt_io, option_data);
	MR_r4 = (MR_Integer) 155;
	MR_r5 = (MR_Word) MR_TAG_COMMON(3,5,43);
	MR_np_call_localret_ent(map__set_4_0,
		libs__options__special_handler_4_0_i304);
MR_def_label(libs__options__special_handler_4_0,47)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,157)) {
		MR_GOTO_LAB(libs__options__special_handler_4_0_i52);
	}
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(libs__options__special_handler_4_0_i1);
	}
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(libs__options, option);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(getopt_io, option_data);
	MR_r4 = (MR_Integer) 155;
	MR_r5 = (MR_Word) MR_TAG_COMMON(3,5,43);
	MR_np_call_localret_ent(map__set_4_0,
		libs__options__special_handler_4_0_i55);
MR_def_label(libs__options__special_handler_4_0,55)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(libs__options, option);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(getopt_io, option_data);
	MR_r3 = MR_tempr1;
	MR_r4 = (MR_Integer) 89;
	MR_r5 = (MR_Word) MR_TAG_COMMON(1,1,0);
	}
	MR_np_call_localret_ent(map__set_4_0,
		libs__options__special_handler_4_0_i304);
MR_def_label(libs__options__special_handler_4_0,52)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,150)) {
		MR_GOTO_LAB(libs__options__special_handler_4_0_i59);
	}
	if (MR_PTAG_TESTR(MR_r2,1)) {
		MR_GOTO_LAB(libs__options__special_handler_4_0_i1);
	}
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_tfield(1, MR_r2, 0);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = (MR_Integer) 147;
	MR_tfield(0, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr3, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr3, 0) = (MR_Integer) 148;
	MR_tfield(0, MR_tempr3, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr4, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr4, 0) = (MR_Integer) 149;
	MR_tfield(0, MR_tempr4, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_tempr4;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr4, 0) = MR_tempr3;
	MR_tfield(1, MR_tempr4, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = MR_tempr2;
	MR_tfield(1, MR_r1, 1) = MR_tempr4;
	MR_r2 = MR_r3;
	}
	MR_np_call_localret_ent(libs__options__override_options_3_0,
		libs__options__special_handler_4_0_i304);
MR_def_label(libs__options__special_handler_4_0,59)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(libs__options__special_handler_4_0_i70);
	}
	if (MR_PTAG_TESTR(MR_r2,1)) {
		MR_GOTO_LAB(libs__options__special_handler_4_0_i1);
	}
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_tfield(1, MR_r2, 0);
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(bool__not_2_0,
		libs__options__special_handler_4_0_i72);
MR_def_label(libs__options__special_handler_4_0,72)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6, MR_tempr7, MR_tempr8, MR_tempr9, MR_tempr10, MR_tempr11, MR_tempr12, MR_tempr13, MR_tempr14, MR_tempr15, MR_tempr16, MR_tempr17, MR_tempr18, MR_tempr19, MR_tempr20, MR_tempr21, MR_tempr22, MR_tempr23, MR_tempr24;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(2);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tag_alloc_heap(MR_tempr3, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr3, 0) = (MR_Integer) 4;
	MR_tfield(0, MR_tempr3, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr4, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr4, 0) = (MR_Integer) 5;
	MR_tfield(0, MR_tempr4, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr5, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr5, 0) = (MR_Integer) 6;
	MR_tfield(0, MR_tempr5, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr6, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr6, 0) = (MR_Integer) 7;
	MR_tfield(0, MR_tempr6, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr7, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr7, 0) = (MR_Integer) 8;
	MR_tfield(0, MR_tempr7, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr8, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr8, 0) = (MR_Integer) 10;
	MR_tfield(0, MR_tempr8, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr9, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr9, 0) = (MR_Integer) 11;
	MR_tfield(0, MR_tempr9, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr10, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr10, 0) = (MR_Integer) 12;
	MR_tfield(0, MR_tempr10, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr11, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr11, 0) = (MR_Integer) 13;
	MR_tfield(0, MR_tempr11, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr12, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr12, 0) = (MR_Integer) 17;
	MR_tfield(0, MR_tempr12, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr13, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr13, 0) = (MR_Integer) 18;
	MR_tfield(0, MR_tempr13, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr14, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr14, 0) = (MR_Integer) 20;
	MR_tfield(0, MR_tempr14, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr15, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr15, 0) = (MR_Integer) 21;
	MR_tfield(0, MR_tempr15, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr16, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr16, 0) = (MR_Integer) 22;
	MR_tfield(0, MR_tempr16, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr17, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr17, 0) = (MR_Integer) 23;
	MR_tfield(0, MR_tempr17, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr18, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr18, 0) = (MR_Integer) 25;
	MR_tfield(0, MR_tempr18, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr19, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr19, 0) = (MR_Integer) 26;
	MR_tfield(0, MR_tempr19, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr20, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr20, 0) = (MR_Integer) 27;
	MR_tfield(0, MR_tempr20, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr21, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr21, 0) = (MR_Integer) 28;
	MR_tfield(0, MR_tempr21, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr22, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr22, 0) = (MR_Integer) 29;
	MR_tfield(0, MR_tempr22, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr23, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr23, 0) = (MR_Integer) 30;
	MR_tfield(0, MR_tempr23, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr24, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr24, 0) = (MR_Integer) 34;
	MR_tfield(0, MR_tempr24, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_tempr24;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr24, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr24, 0) = MR_tempr23;
	MR_tfield(1, MR_tempr24, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_tempr22;
	MR_tfield(1, MR_tempr1, 1) = MR_tempr24;
	MR_tag_alloc_heap(MR_tempr22, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr22, 0) = MR_tempr21;
	MR_tfield(1, MR_tempr22, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_tempr20;
	MR_tfield(1, MR_tempr1, 1) = MR_tempr22;
	MR_tag_alloc_heap(MR_tempr20, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr20, 0) = MR_tempr19;
	MR_tfield(1, MR_tempr20, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_tempr18;
	MR_tfield(1, MR_tempr1, 1) = MR_tempr20;
	MR_tag_alloc_heap(MR_tempr18, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr18, 0) = MR_tempr17;
	MR_tfield(1, MR_tempr18, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_tempr16;
	MR_tfield(1, MR_tempr1, 1) = MR_tempr18;
	MR_tag_alloc_heap(MR_tempr16, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr16, 0) = MR_tempr15;
	MR_tfield(1, MR_tempr16, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_tempr14;
	MR_tfield(1, MR_tempr1, 1) = MR_tempr16;
	MR_tag_alloc_heap(MR_tempr14, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr14, 0) = MR_tempr13;
	MR_tfield(1, MR_tempr14, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_tempr12;
	MR_tfield(1, MR_tempr1, 1) = MR_tempr14;
	MR_tag_alloc_heap(MR_tempr12, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr12, 0) = MR_tempr11;
	MR_tfield(1, MR_tempr12, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_tempr10;
	MR_tfield(1, MR_tempr1, 1) = MR_tempr12;
	MR_tag_alloc_heap(MR_tempr10, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr10, 0) = MR_tempr9;
	MR_tfield(1, MR_tempr10, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_tempr8;
	MR_tfield(1, MR_tempr1, 1) = MR_tempr10;
	MR_tag_alloc_heap(MR_tempr8, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr8, 0) = MR_tempr7;
	MR_tfield(1, MR_tempr8, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_tempr6;
	MR_tfield(1, MR_tempr1, 1) = MR_tempr8;
	MR_tag_alloc_heap(MR_tempr6, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr6, 0) = MR_tempr5;
	MR_tfield(1, MR_tempr6, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_tempr4;
	MR_tfield(1, MR_tempr1, 1) = MR_tempr6;
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr4, 0) = MR_tempr3;
	MR_tfield(1, MR_tempr4, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = MR_tempr2;
	MR_tfield(1, MR_r1, 1) = MR_tempr4;
	MR_r2 = MR_sv(1);
	}
	MR_np_call_localret_ent(libs__options__override_options_3_0,
		libs__options__special_handler_4_0_i304);
MR_def_label(libs__options__special_handler_4_0,70)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,310)) {
		MR_GOTO_LAB(libs__options__special_handler_4_0_i123);
	}
	if (MR_PTAG_TESTR(MR_r2,1)) {
		MR_GOTO_LAB(libs__options__special_handler_4_0_i1);
	}
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_r5 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_tfield(1, MR_r2, 0);
	MR_sv(1) = MR_tfield(1, MR_tempr1, 0);
	MR_sv(2) = MR_tempr1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(libs__options, option);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(getopt_io, option_data);
	MR_r4 = (MR_Integer) 311;
	}
	MR_np_call_localret_ent(map__set_4_0,
		libs__options__special_handler_4_0_i126);
MR_def_label(libs__options__special_handler_4_0,126)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(libs__options, option);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(getopt_io, option_data);
	MR_r3 = MR_tempr1;
	MR_r4 = (MR_Integer) 312;
	MR_r5 = MR_sv(2);
	}
	MR_np_call_localret_ent(map__set_4_0,
		libs__options__special_handler_4_0_i127);
MR_def_label(libs__options__special_handler_4_0,127)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(libs__options, option);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(getopt_io, option_data);
	MR_r3 = MR_tempr1;
	MR_r4 = (MR_Integer) 313;
	MR_r5 = MR_sv(2);
	}
	MR_np_call_localret_ent(map__set_4_0,
		libs__options__special_handler_4_0_i128);
MR_def_label(libs__options__special_handler_4_0,128)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(1),0)) {
		MR_GOTO_LAB(libs__options__special_handler_4_0_i130);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(libs__options, option);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(getopt_io, option_data);
	MR_r3 = MR_tempr1;
	MR_r4 = (MR_Integer) 315;
	MR_r5 = (MR_Word) MR_TAG_COMMON(2,1,1);
	}
	MR_np_call_localret_ent(map__set_4_0,
		libs__options__special_handler_4_0_i304);
MR_def_label(libs__options__special_handler_4_0,130)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(libs__options, option);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(getopt_io, option_data);
	MR_r3 = MR_tempr1;
	MR_r4 = (MR_Integer) 315;
	MR_r5 = (MR_Word) MR_TAG_COMMON(2,1,21);
	}
	MR_np_call_localret_ent(map__set_4_0,
		libs__options__special_handler_4_0_i304);
MR_def_label(libs__options__special_handler_4_0,123)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,159)) {
		MR_GOTO_LAB(libs__options__special_handler_4_0_i137);
	}
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(libs__options__special_handler_4_0_i1);
	}
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(libs__options, option);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(getopt_io, option_data);
	MR_r4 = (MR_Integer) 155;
	MR_r5 = (MR_Word) MR_TAG_COMMON(3,5,37);
	MR_np_call_localret_ent(map__set_4_0,
		libs__options__special_handler_4_0_i304);
MR_def_label(libs__options__special_handler_4_0,137)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,160)) {
		MR_GOTO_LAB(libs__options__special_handler_4_0_i142);
	}
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(libs__options__special_handler_4_0_i1);
	}
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(libs__options, option);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(getopt_io, option_data);
	MR_r4 = (MR_Integer) 155;
	MR_r5 = (MR_Word) MR_TAG_COMMON(3,5,37);
	MR_np_call_localret_ent(map__set_4_0,
		libs__options__special_handler_4_0_i145);
MR_def_label(libs__options__special_handler_4_0,145)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(libs__options, option);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(getopt_io, option_data);
	MR_r3 = MR_tempr1;
	MR_r4 = (MR_Integer) 89;
	MR_r5 = (MR_Word) MR_TAG_COMMON(1,1,0);
	}
	MR_np_call_localret_ent(map__set_4_0,
		libs__options__special_handler_4_0_i304);
MR_def_label(libs__options__special_handler_4_0,142)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,522)) {
		MR_GOTO_LAB(libs__options__special_handler_4_0_i149);
	}
	if (MR_RTAGS_TESTR(MR_r2,3,0)) {
		MR_GOTO_LAB(libs__options__special_handler_4_0_i1);
	}
	MR_r6 = MR_tfield(3, MR_r2, 1);
	if ((strcmp((char *) (MR_Word *) MR_r6, MR_string_const("shared", 6)) != 0)) {
		MR_GOTO_LAB(libs__options__special_handler_4_0_i153);
	}
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_r4 = MR_r3;
	MR_r1 = MR_r6;
	MR_GOTO_LAB(libs__options__special_handler_4_0_i152);
MR_def_label(libs__options__special_handler_4_0,153)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r6, MR_string_const("static", 6)) != 0)) {
		MR_GOTO_LAB(libs__options__special_handler_4_0_i151);
	}
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_r4 = MR_r3;
	MR_r1 = MR_r6;
MR_def_label(libs__options__special_handler_4_0,152)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_r5 = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_sv(1) = MR_tempr1;
	MR_sv(2) = (MR_Word) MR_CTOR0_ADDR(libs__options, option);
	MR_sv(3) = (MR_Word) MR_CTOR0_ADDR(getopt_io, option_data);
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(3);
	MR_r3 = (MR_Integer) 523;
	}
	MR_np_call_localret_ent(fn__f_109_97_112_95_95_101_108_101_109_32_58_61_3_0,
		libs__options__special_handler_4_0_i156);
MR_def_label(libs__options__special_handler_4_0,156)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(3);
	MR_r3 = (MR_Integer) 521;
	MR_r4 = MR_tempr1;
	MR_r5 = MR_sv(1);
	}
	MR_np_call_localret_ent(fn__f_109_97_112_95_95_101_108_101_109_32_58_61_3_0,
		libs__options__special_handler_4_0_i304);
MR_def_label(libs__options__special_handler_4_0,151)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_TAG_COMMON(1,7,1);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__special_handler_4_0,149)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,169)) {
		MR_GOTO_LAB(libs__options__special_handler_4_0_i161);
	}
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(libs__options__special_handler_4_0_i1);
	}
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = (MR_Word) MR_TAG_COMMON(1,1,1);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(libs__options, option);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(getopt_io, option_data);
	MR_r4 = (MR_Integer) 172;
	MR_r5 = MR_sv(1);
	MR_np_call_localret_ent(map__set_4_0,
		libs__options__special_handler_4_0_i164);
MR_def_label(libs__options__special_handler_4_0,164)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = (MR_Word) MR_TAG_COMMON(1,1,0);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(libs__options, option);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(getopt_io, option_data);
	MR_r3 = MR_tempr1;
	MR_r4 = (MR_Integer) 171;
	MR_r5 = MR_sv(2);
	}
	MR_np_call_localret_ent(map__set_4_0,
		libs__options__special_handler_4_0_i166);
MR_def_label(libs__options__special_handler_4_0,166)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(libs__options, option);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(getopt_io, option_data);
	MR_r3 = MR_tempr1;
	MR_r4 = (MR_Integer) 173;
	MR_r5 = MR_sv(2);
	}
	MR_np_call_localret_ent(map__set_4_0,
		libs__options__special_handler_4_0_i167);
MR_def_label(libs__options__special_handler_4_0,167)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(libs__options, option);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(getopt_io, option_data);
	MR_r3 = MR_tempr1;
	MR_r4 = (MR_Integer) 174;
	MR_r5 = MR_sv(1);
	}
	MR_np_call_localret_ent(map__set_4_0,
		libs__options__special_handler_4_0_i304);
MR_def_label(libs__options__special_handler_4_0,161)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,585)) {
		MR_GOTO_LAB(libs__options__special_handler_4_0_i170);
	}
	if (MR_RTAGS_TESTR(MR_r2,3,0)) {
		MR_GOTO_LAB(libs__options__special_handler_4_0_i1);
	}
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_tfield(3, MR_r2, 1);
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 2);
	MR_r5 = MR_tempr2;
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 2;
	MR_tfield(3, MR_tempr2, 1) = MR_tempr1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(libs__options, option);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(getopt_io, option_data);
	MR_r4 = (MR_Integer) 584;
	}
	MR_np_call_localret_ent(fn__map__set_3_0,
		libs__options__special_handler_4_0_i304);
MR_def_label(libs__options__special_handler_4_0,170)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,511)) {
		MR_GOTO_LAB(libs__options__special_handler_4_0_i176);
	}
	if (MR_RTAGS_TESTR(MR_r2,3,0)) {
		MR_GOTO_LAB(libs__options__special_handler_4_0_i1);
	}
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_r1 = MR_r3;
	MR_r2 = MR_tfield(3, MR_r2, 1);
	MR_np_call_localret_ent(fn__libs__options__option_table_add_mercury_library_directory_2_0,
		libs__options__special_handler_4_0_i304);
MR_def_label(libs__options__special_handler_4_0,176)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,515)) {
		MR_GOTO_LAB(libs__options__special_handler_4_0_i180);
	}
	if (MR_RTAGS_TESTR(MR_r2,3,0)) {
		MR_GOTO_LAB(libs__options__special_handler_4_0_i1);
	}
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_sv(2) = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Integer) 508;
	MR_tfield(0, MR_tempr1, 1) = MR_tfield(3, MR_r2, 1);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_sv(3) = MR_tempr2;
	MR_tfield(0, MR_tempr2, 0) = (MR_Integer) 514;
	MR_tfield(0, MR_tempr2, 1) = MR_tfield(0, MR_tempr1, 1);
	MR_sv(1) = MR_r3;
	MR_sv(4) = (MR_Word) MR_TAG_COMMON(0,9,1);
	MR_sv(5) = (MR_Word) MR_TAG_COMMON(0,9,2);
	MR_r1 = MR_tfield(0, MR_tempr1, 1);
	MR_r2 = (MR_Word) MR_string_const(".init", 5);
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		libs__options__special_handler_4_0_i186);
MR_def_label(libs__options__special_handler_4_0,186)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = (MR_Integer) 519;
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(3);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_r4 = MR_tempr3;
	MR_tfield(1, MR_tempr3, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr3, 1) = MR_tempr1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(5);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,11,2);
	MR_r5 = MR_sv(1);
	}
	MR_np_call_localret_ent(fn__list__foldl_3_0,
		libs__options__special_handler_4_0_i304);
MR_def_label(libs__options__special_handler_4_0,180)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,524)) {
		MR_GOTO_LAB(libs__options__special_handler_4_0_i194);
	}
	if (MR_RTAGS_TESTR(MR_r2,3,0)) {
		MR_GOTO_LAB(libs__options__special_handler_4_0_i1);
	}
	MR_r6 = MR_tfield(3, MR_r2, 1);
	if ((strcmp((char *) (MR_Word *) MR_r6, MR_string_const("shared", 6)) != 0)) {
		MR_GOTO_LAB(libs__options__special_handler_4_0_i198);
	}
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_r4 = MR_r3;
	MR_r1 = MR_r6;
	MR_GOTO_LAB(libs__options__special_handler_4_0_i197);
MR_def_label(libs__options__special_handler_4_0,198)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r6, MR_string_const("static", 6)) != 0)) {
		MR_GOTO_LAB(libs__options__special_handler_4_0_i196);
	}
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_r4 = MR_r3;
	MR_r1 = MR_r6;
MR_def_label(libs__options__special_handler_4_0,197)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_r5 = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(libs__options, option);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(getopt_io, option_data);
	MR_r3 = (MR_Integer) 523;
	}
	MR_np_call_localret_ent(fn__f_109_97_112_95_95_101_108_101_109_32_58_61_3_0,
		libs__options__special_handler_4_0_i304);
MR_def_label(libs__options__special_handler_4_0,196)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_TAG_COMMON(1,7,2);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__special_handler_4_0,194)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,517)) {
		MR_GOTO_LAB(libs__options__special_handler_4_0_i205);
	}
	if (MR_RTAGS_TESTR(MR_r2,3,1)) {
		MR_GOTO_LAB(libs__options__special_handler_4_0_i1);
	}
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_r5 = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 2;
	MR_tfield(3, MR_tempr1, 1) = MR_tfield(3, MR_r2, 1);
	MR_sv(1) = MR_tempr1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(libs__options, option);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(getopt_io, option_data);
	MR_r4 = (MR_Integer) 516;
	}
	MR_np_call_localret_ent(fn__map__set_3_0,
		libs__options__special_handler_4_0_i208);
MR_def_label(libs__options__special_handler_4_0,208)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(libs__options, option);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(getopt_io, option_data);
	MR_r3 = MR_tempr1;
	MR_r4 = (MR_Integer) 584;
	MR_r5 = MR_sv(1);
	}
	MR_np_call_localret_ent(fn__map__set_3_0,
		libs__options__special_handler_4_0_i304);
MR_def_label(libs__options__special_handler_4_0,205)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,298)) {
		MR_GOTO_LAB(libs__options__special_handler_4_0_i211);
	}
	if (MR_PTAG_TESTR(MR_r2,2)) {
		MR_GOTO_LAB(libs__options__special_handler_4_0_i1);
	}
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_r6 = MR_tfield(2, MR_r2, 0);
	if (MR_INT_LE(MR_r6,6)) {
		MR_GOTO_LAB(libs__options__special_handler_4_0_i213);
	}
	MR_sv(1) = (MR_Integer) 6;
	MR_r5 = (MR_Word) MR_TAG_COMMON(2,1,5);
	MR_r4 = (MR_Integer) 299;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(libs__options, option);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(getopt_io, option_data);
	MR_np_call_localret_ent(map__set_4_0,
		libs__options__special_handler_4_0_i220);
MR_def_label(libs__options__special_handler_4_0,213)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_GE(MR_r6,-1)) {
		MR_GOTO_LAB(libs__options__special_handler_4_0_i215);
	}
	MR_sv(1) = (MR_Integer) -1;
	MR_r5 = (MR_Word) MR_TAG_COMMON(2,1,4);
	MR_r4 = (MR_Integer) 299;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(libs__options, option);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(getopt_io, option_data);
	MR_np_call_localret_ent(map__set_4_0,
		libs__options__special_handler_4_0_i220);
MR_def_label(libs__options__special_handler_4_0,215)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r5, 2, (MR_Integer) 1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r6;
	MR_tfield(2, MR_r5, 0) = MR_tempr1;
	MR_sv(1) = MR_tempr1;
	MR_r4 = (MR_Integer) 299;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(libs__options, option);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(getopt_io, option_data);
	}
	MR_np_call_localret_ent(map__set_4_0,
		libs__options__special_handler_4_0_i220);
MR_def_label(libs__options__special_handler_4_0,220)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(libs__options__set_opt_level_3_0,
		libs__options__special_handler_4_0_i304);
MR_def_label(libs__options__special_handler_4_0,211)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,300)) {
		MR_GOTO_LAB(libs__options__special_handler_4_0_i223);
	}
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(libs__options__special_handler_4_0_i1);
	}
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r3;
	MR_np_call_localret_ent(libs__options__opt_space_1_0,
		libs__options__special_handler_4_0_i225);
MR_def_label(libs__options__special_handler_4_0,225)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(libs__options__override_options_3_0,
		libs__options__special_handler_4_0_i304);
MR_def_label(libs__options__special_handler_4_0,223)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,358)) {
		MR_GOTO_LAB(libs__options__special_handler_4_0_i228);
	}
	if (MR_PTAG_TESTR(MR_r2,1)) {
		MR_GOTO_LAB(libs__options__special_handler_4_0_i1);
	}
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_r5 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_tfield(1, MR_r2, 0);
	MR_sv(1) = MR_tempr1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(libs__options, option);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(getopt_io, option_data);
	MR_r4 = (MR_Integer) 344;
	}
	MR_np_call_localret_ent(map__set_4_0,
		libs__options__special_handler_4_0_i231);
MR_def_label(libs__options__special_handler_4_0,231)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(libs__options, option);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(getopt_io, option_data);
	MR_r3 = MR_tempr1;
	MR_r4 = (MR_Integer) 345;
	MR_r5 = MR_sv(1);
	}
	MR_np_call_localret_ent(map__set_4_0,
		libs__options__special_handler_4_0_i304);
MR_def_label(libs__options__special_handler_4_0,228)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,167)) {
		MR_GOTO_LAB(libs__options__special_handler_4_0_i234);
	}
	if (MR_PTAG_TESTR(MR_r2,1)) {
		MR_GOTO_LAB(libs__options__special_handler_4_0_i1);
	}
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_r5 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_tfield(1, MR_r2, 0);
	MR_sv(1) = MR_tempr1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(libs__options, option);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(getopt_io, option_data);
	MR_r4 = (MR_Integer) 172;
	}
	MR_np_call_localret_ent(map__set_4_0,
		libs__options__special_handler_4_0_i237);
MR_def_label(libs__options__special_handler_4_0,237)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(libs__options, option);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(getopt_io, option_data);
	MR_r3 = MR_tempr1;
	MR_r4 = (MR_Integer) 171;
	MR_r5 = MR_sv(1);
	}
	MR_np_call_localret_ent(map__set_4_0,
		libs__options__special_handler_4_0_i238);
MR_def_label(libs__options__special_handler_4_0,238)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = (MR_Word) MR_TAG_COMMON(1,1,1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(libs__options, option);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(getopt_io, option_data);
	MR_r3 = MR_tempr1;
	MR_r4 = (MR_Integer) 173;
	MR_r5 = MR_sv(1);
	}
	MR_np_call_localret_ent(map__set_4_0,
		libs__options__special_handler_4_0_i240);
MR_def_label(libs__options__special_handler_4_0,240)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(libs__options, option);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(getopt_io, option_data);
	MR_r3 = MR_tempr1;
	MR_r4 = (MR_Integer) 174;
	MR_r5 = MR_sv(1);
	}
	MR_np_call_localret_ent(map__set_4_0,
		libs__options__special_handler_4_0_i304);
MR_def_label(libs__options__special_handler_4_0,234)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,460)) {
		MR_GOTO_LAB(libs__options__special_handler_4_0_i243);
	}
	if (MR_RTAGS_TESTR(MR_r2,3,0)) {
		MR_GOTO_LAB(libs__options__special_handler_4_0_i1);
	}
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_r1 = (MR_Integer) 459;
	MR_r2 = MR_tfield(3, MR_r2, 1);
	MR_np_call_localret_ent(libs__options__handle_quoted_flag_4_0,
		libs__options__special_handler_4_0_i304);
MR_def_label(libs__options__special_handler_4_0,243)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,492)) {
		MR_GOTO_LAB(libs__options__special_handler_4_0_i247);
	}
	if (MR_RTAGS_TESTR(MR_r2,3,0)) {
		MR_GOTO_LAB(libs__options__special_handler_4_0_i1);
	}
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_r1 = (MR_Integer) 491;
	MR_r2 = MR_tfield(3, MR_r2, 1);
	MR_np_call_localret_ent(libs__options__handle_quoted_flag_4_0,
		libs__options__special_handler_4_0_i304);
MR_def_label(libs__options__special_handler_4_0,247)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,496)) {
		MR_GOTO_LAB(libs__options__special_handler_4_0_i251);
	}
	if (MR_RTAGS_TESTR(MR_r2,3,0)) {
		MR_GOTO_LAB(libs__options__special_handler_4_0_i1);
	}
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_r1 = (MR_Integer) 495;
	MR_r2 = MR_tfield(3, MR_r2, 1);
	MR_np_call_localret_ent(libs__options__handle_quoted_flag_4_0,
		libs__options__special_handler_4_0_i304);
MR_def_label(libs__options__special_handler_4_0,251)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,486)) {
		MR_GOTO_LAB(libs__options__special_handler_4_0_i255);
	}
	if (MR_RTAGS_TESTR(MR_r2,3,0)) {
		MR_GOTO_LAB(libs__options__special_handler_4_0_i1);
	}
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_r1 = (MR_Integer) 485;
	MR_r2 = MR_tfield(3, MR_r2, 1);
	MR_np_call_localret_ent(libs__options__handle_quoted_flag_4_0,
		libs__options__special_handler_4_0_i304);
MR_def_label(libs__options__special_handler_4_0,255)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,481)) {
		MR_GOTO_LAB(libs__options__special_handler_4_0_i259);
	}
	if (MR_RTAGS_TESTR(MR_r2,3,0)) {
		MR_GOTO_LAB(libs__options__special_handler_4_0_i1);
	}
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_r1 = (MR_Integer) 480;
	MR_r2 = MR_tfield(3, MR_r2, 1);
	MR_np_call_localret_ent(libs__options__handle_quoted_flag_4_0,
		libs__options__special_handler_4_0_i304);
MR_def_label(libs__options__special_handler_4_0,259)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,503)) {
		MR_GOTO_LAB(libs__options__special_handler_4_0_i263);
	}
	if (MR_RTAGS_TESTR(MR_r2,3,0)) {
		MR_GOTO_LAB(libs__options__special_handler_4_0_i1);
	}
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_r1 = (MR_Integer) 502;
	MR_r2 = MR_tfield(3, MR_r2, 1);
	MR_np_call_localret_ent(libs__options__handle_quoted_flag_4_0,
		libs__options__special_handler_4_0_i304);
MR_def_label(libs__options__special_handler_4_0,263)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,505)) {
		MR_GOTO_LAB(libs__options__special_handler_4_0_i267);
	}
	if (MR_RTAGS_TESTR(MR_r2,3,0)) {
		MR_GOTO_LAB(libs__options__special_handler_4_0_i1);
	}
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_r1 = (MR_Integer) 504;
	MR_r2 = MR_tfield(3, MR_r2, 1);
	MR_np_call_localret_ent(libs__options__handle_quoted_flag_4_0,
		libs__options__special_handler_4_0_i304);
MR_def_label(libs__options__special_handler_4_0,267)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,279)) {
		MR_GOTO_LAB(libs__options__special_handler_4_0_i271);
	}
	if (MR_PTAG_TESTR(MR_r2,1)) {
		MR_GOTO_LAB(libs__options__special_handler_4_0_i1);
	}
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_r5 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_tfield(1, MR_r2, 0);
	MR_sv(1) = MR_tempr1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(libs__options, option);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(getopt_io, option_data);
	MR_r4 = (MR_Integer) 280;
	}
	MR_np_call_localret_ent(map__set_4_0,
		libs__options__special_handler_4_0_i274);
MR_def_label(libs__options__special_handler_4_0,274)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(libs__options, option);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(getopt_io, option_data);
	MR_r3 = MR_tempr1;
	MR_r4 = (MR_Integer) 281;
	MR_r5 = MR_sv(1);
	}
	MR_np_call_localret_ent(map__set_4_0,
		libs__options__special_handler_4_0_i304);
MR_def_label(libs__options__special_handler_4_0,271)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,513)) {
		MR_GOTO_LAB(libs__options__special_handler_4_0_i277);
	}
	if (MR_RTAGS_TESTR(MR_r2,3,0)) {
		MR_GOTO_LAB(libs__options__special_handler_4_0_i1);
	}
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_r1 = MR_r3;
	MR_r2 = MR_tfield(3, MR_r2, 1);
	MR_np_call_localret_ent(fn__libs__options__option_table_add_search_library_files_directory_2_0,
		libs__options__special_handler_4_0_i304);
MR_def_label(libs__options__special_handler_4_0,277)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,145)) {
		MR_GOTO_LAB(libs__options__special_handler_4_0_i281);
	}
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(libs__options__special_handler_4_0_i1);
	}
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_r1 = (MR_Word) MR_TAG_COMMON(1,4,673);
	MR_r2 = MR_r3;
	MR_np_call_localret_ent(libs__options__override_options_3_0,
		libs__options__special_handler_4_0_i304);
MR_def_label(libs__options__special_handler_4_0,281)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,168)) {
		MR_GOTO_LAB(libs__options__special_handler_4_0_i285);
	}
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(libs__options__special_handler_4_0_i1);
	}
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = (MR_Word) MR_TAG_COMMON(1,1,0);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(libs__options, option);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(getopt_io, option_data);
	MR_r4 = (MR_Integer) 172;
	MR_r5 = MR_sv(1);
	MR_np_call_localret_ent(map__set_4_0,
		libs__options__special_handler_4_0_i288);
MR_def_label(libs__options__special_handler_4_0,288)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(libs__options, option);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(getopt_io, option_data);
	MR_r3 = MR_tempr1;
	MR_r4 = (MR_Integer) 171;
	MR_r5 = MR_sv(1);
	}
	MR_np_call_localret_ent(map__set_4_0,
		libs__options__special_handler_4_0_i289);
MR_def_label(libs__options__special_handler_4_0,289)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = (MR_Word) MR_TAG_COMMON(1,1,1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(libs__options, option);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(getopt_io, option_data);
	MR_r3 = MR_tempr1;
	MR_r4 = (MR_Integer) 173;
	MR_r5 = MR_sv(1);
	}
	MR_np_call_localret_ent(map__set_4_0,
		libs__options__special_handler_4_0_i291);
MR_def_label(libs__options__special_handler_4_0,291)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(libs__options, option);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(getopt_io, option_data);
	MR_r3 = MR_tempr1;
	MR_r4 = (MR_Integer) 174;
	MR_r5 = MR_sv(1);
	}
	MR_np_call_localret_ent(map__set_4_0,
		libs__options__special_handler_4_0_i304);
MR_def_label(libs__options__special_handler_4_0,285)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,161)) {
		MR_GOTO_LAB(libs__options__special_handler_4_0_i294);
	}
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(libs__options__special_handler_4_0_i1);
	}
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(libs__options, option);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(getopt_io, option_data);
	MR_r4 = (MR_Integer) 155;
	MR_r5 = (MR_Word) MR_TAG_COMMON(3,5,44);
	MR_np_call_localret_ent(map__set_4_0,
		libs__options__special_handler_4_0_i304);
MR_def_label(libs__options__special_handler_4_0,294)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,162)) {
		MR_GOTO_LAB(libs__options__special_handler_4_0_i1);
	}
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(libs__options__special_handler_4_0_i1);
	}
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(libs__options, option);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(getopt_io, option_data);
	MR_r4 = (MR_Integer) 155;
	MR_r5 = (MR_Word) MR_TAG_COMMON(3,5,44);
	MR_np_call_localret_ent(map__set_4_0,
		libs__options__special_handler_4_0_i302);
MR_def_label(libs__options__special_handler_4_0,302)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(libs__options, option);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(getopt_io, option_data);
	MR_r3 = MR_tempr1;
	MR_r4 = (MR_Integer) 89;
	MR_r5 = (MR_Word) MR_TAG_COMMON(1,1,0);
	}
	MR_np_call_localret_ent(map__set_4_0,
		libs__options__special_handler_4_0_i304);
MR_def_label(libs__options__special_handler_4_0,304)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 1);
	MR_tfield(0, MR_r2, 0) = MR_r1;
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(6);
MR_def_label(libs__options__special_handler_4_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(assoc_list__keys_2_0);
MR_decl_entry(fn__set__from_list_1_0);

MR_BEGIN_MODULE(libs__options_module17)
	MR_init_entry1(libs__options__inconsequential_options_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__libs__options__inconsequential_options_1_0);
	MR_init_label10(libs__options__inconsequential_options_1_0,2,3,4,5,6,7,8,9,10,11)
	MR_init_label1(libs__options__inconsequential_options_1_0,12)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'inconsequential_options'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__libs__options__inconsequential_options_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_r1 = (MR_Integer) 0;
	MR_np_call_localret_ent(libs__options__option_defaults_2_2_0,
		libs__options__inconsequential_options_1_0_i2);
MR_def_label(libs__options__inconsequential_options_1_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Integer) 1;
	MR_np_call_localret_ent(libs__options__option_defaults_2_2_0,
		libs__options__inconsequential_options_1_0_i3);
MR_def_label(libs__options__inconsequential_options_1_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = (MR_Integer) 6;
	MR_np_call_localret_ent(libs__options__option_defaults_2_2_0,
		libs__options__inconsequential_options_1_0_i4);
MR_def_label(libs__options__inconsequential_options_1_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = (MR_Integer) 12;
	MR_np_call_localret_ent(libs__options__option_defaults_2_2_0,
		libs__options__inconsequential_options_1_0_i5);
MR_def_label(libs__options__inconsequential_options_1_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_sv(4) = (MR_Word) MR_CTOR0_ADDR(libs__options, option);
	MR_sv(5) = (MR_Word) MR_CTOR0_ADDR(getopt_io, option_data);
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(assoc_list__keys_2_0,
		libs__options__inconsequential_options_1_0_i6);
MR_def_label(libs__options__inconsequential_options_1_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(assoc_list__keys_2_0,
		libs__options__inconsequential_options_1_0_i7);
MR_def_label(libs__options__inconsequential_options_1_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(assoc_list__keys_2_0,
		libs__options__inconsequential_options_1_0_i8);
MR_def_label(libs__options__inconsequential_options_1_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(assoc_list__keys_2_0,
		libs__options__inconsequential_options_1_0_i9);
MR_def_label(libs__options__inconsequential_options_1_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		libs__options__inconsequential_options_1_0_i10);
MR_def_label(libs__options__inconsequential_options_1_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		libs__options__inconsequential_options_1_0_i11);
MR_def_label(libs__options__inconsequential_options_1_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		libs__options__inconsequential_options_1_0_i12);
MR_def_label(libs__options__inconsequential_options_1_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(fn__set__from_list_1_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(io__write_char_3_0);
MR_decl_entry(io__write_string_3_0);

MR_BEGIN_MODULE(libs__options_module18)
	MR_init_entry1(libs__options__write_tabbed_lines_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__libs__options__write_tabbed_lines_3_0);
	MR_init_label5(libs__options__write_tabbed_lines_3_0,12,4,5,6,14)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'write_tabbed_lines'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(libs__options__write_tabbed_lines_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
MR_def_label(libs__options__write_tabbed_lines_3_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(libs__options__write_tabbed_lines_3_0_i14);
	}
	MR_sv(1) = MR_tfield(1, MR_r1, 0);
	MR_sv(2) = MR_tfield(1, MR_r1, 1);
	MR_r1 = (MR_Integer) 9;
	MR_np_call_localret_ent(io__write_char_3_0,
		libs__options__write_tabbed_lines_3_0_i4);
MR_def_label(libs__options__write_tabbed_lines_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(io__write_string_3_0,
		libs__options__write_tabbed_lines_3_0_i5);
MR_def_label(libs__options__write_tabbed_lines_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 10;
	MR_np_call_localret_ent(io__write_char_3_0,
		libs__options__write_tabbed_lines_3_0_i6);
MR_def_label(libs__options__write_tabbed_lines_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_GOTO_LAB(libs__options__write_tabbed_lines_3_0_i12);
MR_def_label(libs__options__write_tabbed_lines_3_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(libs__options_module19)
	MR_init_entry1(libs__options__options_help_warning_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__libs__options__options_help_warning_2_0);
	MR_init_label1(libs__options__options_help_warning_2_0,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'options_help_warning'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(libs__options__options_help_warning_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_r1 = (MR_Word) MR_string_const("\nWarning Options:\n", 18);
	MR_np_call_localret_ent(io__write_string_3_0,
		libs__options__options_help_warning_2_0_i2);
MR_def_label(libs__options__options_help_warning_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(1,6,121);
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_np_tailcall_ent(libs__options__write_tabbed_lines_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(libs__options_module20)
	MR_init_entry1(libs__options__options_help_verbosity_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__libs__options__options_help_verbosity_2_0);
	MR_init_label10(libs__options__options_help_verbosity_2_0,2,3,4,5,6,7,8,9,10,11)
	MR_init_label3(libs__options__options_help_verbosity_2_0,12,13,14)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'options_help_verbosity'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(libs__options__options_help_verbosity_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_r1 = (MR_Word) MR_string_const("\nVerbosity Options:\n", 20);
	MR_np_call_localret_ent(io__write_string_3_0,
		libs__options__options_help_verbosity_2_0_i2);
MR_def_label(libs__options__options_help_verbosity_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = (MR_Word) MR_string_const("-v, --verbose", 13);
	MR_sv(2) = (MR_Word) MR_TAG_COMMON(1,6,188);
	MR_r1 = (MR_Integer) 9;
	MR_np_call_localret_ent(io__write_char_3_0,
		libs__options__options_help_verbosity_2_0_i3);
MR_def_label(libs__options__options_help_verbosity_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(io__write_string_3_0,
		libs__options__options_help_verbosity_2_0_i4);
MR_def_label(libs__options__options_help_verbosity_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 10;
	MR_np_call_localret_ent(io__write_char_3_0,
		libs__options__options_help_verbosity_2_0_i5);
MR_def_label(libs__options__options_help_verbosity_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = (MR_Word) MR_string_const("\tOutput progress messages at each stage in the compilation.", 59);
	MR_sv(2) = (MR_Word) MR_TAG_COMMON(1,6,187);
	MR_r1 = (MR_Integer) 9;
	MR_np_call_localret_ent(io__write_char_3_0,
		libs__options__options_help_verbosity_2_0_i6);
MR_def_label(libs__options__options_help_verbosity_2_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(io__write_string_3_0,
		libs__options__options_help_verbosity_2_0_i7);
MR_def_label(libs__options__options_help_verbosity_2_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 10;
	MR_np_call_localret_ent(io__write_char_3_0,
		libs__options__options_help_verbosity_2_0_i8);
MR_def_label(libs__options__options_help_verbosity_2_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = (MR_Word) MR_string_const("-V, --very-verbose", 18);
	MR_sv(2) = (MR_Word) MR_TAG_COMMON(1,6,186);
	MR_r1 = (MR_Integer) 9;
	MR_np_call_localret_ent(io__write_char_3_0,
		libs__options__options_help_verbosity_2_0_i9);
MR_def_label(libs__options__options_help_verbosity_2_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(io__write_string_3_0,
		libs__options__options_help_verbosity_2_0_i10);
MR_def_label(libs__options__options_help_verbosity_2_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 10;
	MR_np_call_localret_ent(io__write_char_3_0,
		libs__options__options_help_verbosity_2_0_i11);
MR_def_label(libs__options__options_help_verbosity_2_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = (MR_Word) MR_string_const("\tOutput very verbose progress messages.", 39);
	MR_sv(2) = (MR_Word) MR_TAG_COMMON(1,6,185);
	MR_r1 = (MR_Integer) 9;
	MR_np_call_localret_ent(io__write_char_3_0,
		libs__options__options_help_verbosity_2_0_i12);
MR_def_label(libs__options__options_help_verbosity_2_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(io__write_string_3_0,
		libs__options__options_help_verbosity_2_0_i13);
MR_def_label(libs__options__options_help_verbosity_2_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 10;
	MR_np_call_localret_ent(io__write_char_3_0,
		libs__options__options_help_verbosity_2_0_i14);
MR_def_label(libs__options__options_help_verbosity_2_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(libs__options__write_tabbed_lines_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(libs__options_module21)
	MR_init_entry1(libs__options__options_help_output_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__libs__options__options_help_output_2_0);
	MR_init_label4(libs__options__options_help_output_2_0,2,3,4,5)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'options_help_output'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(libs__options__options_help_output_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_r1 = (MR_Word) MR_string_const("\nOutput Options:\n", 17);
	MR_np_call_localret_ent(io__write_string_3_0,
		libs__options__options_help_output_2_0_i2);
MR_def_label(libs__options__options_help_output_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = (MR_Word) MR_string_const("These options are mutually exclusive.", 37);
	MR_sv(2) = (MR_Word) MR_TAG_COMMON(1,6,279);
	MR_r1 = (MR_Integer) 9;
	MR_np_call_localret_ent(io__write_char_3_0,
		libs__options__options_help_output_2_0_i3);
MR_def_label(libs__options__options_help_output_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(io__write_string_3_0,
		libs__options__options_help_output_2_0_i4);
MR_def_label(libs__options__options_help_output_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 10;
	MR_np_call_localret_ent(io__write_char_3_0,
		libs__options__options_help_output_2_0_i5);
MR_def_label(libs__options__options_help_output_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(libs__options__write_tabbed_lines_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(libs__options_module22)
	MR_init_entry1(libs__options__options_help_aux_output_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__libs__options__options_help_aux_output_2_0);
	MR_init_label1(libs__options__options_help_aux_output_2_0,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'options_help_aux_output'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(libs__options__options_help_aux_output_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_r1 = (MR_Word) MR_string_const("\nAuxiliary Output Options:\n", 27);
	MR_np_call_localret_ent(io__write_string_3_0,
		libs__options__options_help_aux_output_2_0_i2);
MR_def_label(libs__options__options_help_aux_output_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(1,6,381);
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_np_tailcall_ent(libs__options__write_tabbed_lines_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(libs__options_module23)
	MR_init_entry1(libs__options__options_help_ctgc_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__libs__options__options_help_ctgc_2_0);
	MR_init_label10(libs__options__options_help_ctgc_2_0,2,3,4,5,6,7,8,9,10,11)
	MR_init_label10(libs__options__options_help_ctgc_2_0,12,13,14,15,16,17,18,19,20,21)
	MR_init_label10(libs__options__options_help_ctgc_2_0,22,23,24,25,26,27,28,29,30,31)
	MR_init_label1(libs__options__options_help_ctgc_2_0,32)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'options_help_ctgc'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(libs__options__options_help_ctgc_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_r1 = (MR_Word) MR_string_const("\nCompile Time Garbage Collection Options:\n", 42);
	MR_np_call_localret_ent(io__write_string_3_0,
		libs__options__options_help_ctgc_2_0_i2);
MR_def_label(libs__options__options_help_ctgc_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = (MR_Word) MR_string_const("--structure-sharing", 19);
	MR_sv(2) = (MR_Word) MR_TAG_COMMON(1,6,403);
	MR_r1 = (MR_Integer) 9;
	MR_np_call_localret_ent(io__write_char_3_0,
		libs__options__options_help_ctgc_2_0_i3);
MR_def_label(libs__options__options_help_ctgc_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(io__write_string_3_0,
		libs__options__options_help_ctgc_2_0_i4);
MR_def_label(libs__options__options_help_ctgc_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 10;
	MR_np_call_localret_ent(io__write_char_3_0,
		libs__options__options_help_ctgc_2_0_i5);
MR_def_label(libs__options__options_help_ctgc_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = (MR_Word) MR_string_const("\tPerform structure sharing analysis.", 36);
	MR_sv(2) = (MR_Word) MR_TAG_COMMON(1,6,402);
	MR_r1 = (MR_Integer) 9;
	MR_np_call_localret_ent(io__write_char_3_0,
		libs__options__options_help_ctgc_2_0_i6);
MR_def_label(libs__options__options_help_ctgc_2_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(io__write_string_3_0,
		libs__options__options_help_ctgc_2_0_i7);
MR_def_label(libs__options__options_help_ctgc_2_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 10;
	MR_np_call_localret_ent(io__write_char_3_0,
		libs__options__options_help_ctgc_2_0_i8);
MR_def_label(libs__options__options_help_ctgc_2_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = (MR_Word) MR_string_const("--structure-sharing-widening <n>", 32);
	MR_sv(2) = (MR_Word) MR_TAG_COMMON(1,6,401);
	MR_r1 = (MR_Integer) 9;
	MR_np_call_localret_ent(io__write_char_3_0,
		libs__options__options_help_ctgc_2_0_i9);
MR_def_label(libs__options__options_help_ctgc_2_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(io__write_string_3_0,
		libs__options__options_help_ctgc_2_0_i10);
MR_def_label(libs__options__options_help_ctgc_2_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 10;
	MR_np_call_localret_ent(io__write_char_3_0,
		libs__options__options_help_ctgc_2_0_i11);
MR_def_label(libs__options__options_help_ctgc_2_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = (MR_Word) MR_string_const("\tPerform widening when the set of structure sharing pairs becomes", 65);
	MR_sv(2) = (MR_Word) MR_TAG_COMMON(1,6,400);
	MR_r1 = (MR_Integer) 9;
	MR_np_call_localret_ent(io__write_char_3_0,
		libs__options__options_help_ctgc_2_0_i12);
MR_def_label(libs__options__options_help_ctgc_2_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(io__write_string_3_0,
		libs__options__options_help_ctgc_2_0_i13);
MR_def_label(libs__options__options_help_ctgc_2_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 10;
	MR_np_call_localret_ent(io__write_char_3_0,
		libs__options__options_help_ctgc_2_0_i14);
MR_def_label(libs__options__options_help_ctgc_2_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = (MR_Word) MR_string_const("\tlarger than <n>. When n=0, widening is not enabled.", 52);
	MR_sv(2) = (MR_Word) MR_TAG_COMMON(1,6,399);
	MR_r1 = (MR_Integer) 9;
	MR_np_call_localret_ent(io__write_char_3_0,
		libs__options__options_help_ctgc_2_0_i15);
MR_def_label(libs__options__options_help_ctgc_2_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(io__write_string_3_0,
		libs__options__options_help_ctgc_2_0_i16);
MR_def_label(libs__options__options_help_ctgc_2_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 10;
	MR_np_call_localret_ent(io__write_char_3_0,
		libs__options__options_help_ctgc_2_0_i17);
MR_def_label(libs__options__options_help_ctgc_2_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = (MR_Word) MR_string_const("\t(default: 0).", 14);
	MR_sv(2) = (MR_Word) MR_TAG_COMMON(1,6,398);
	MR_r1 = (MR_Integer) 9;
	MR_np_call_localret_ent(io__write_char_3_0,
		libs__options__options_help_ctgc_2_0_i18);
MR_def_label(libs__options__options_help_ctgc_2_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(io__write_string_3_0,
		libs__options__options_help_ctgc_2_0_i19);
MR_def_label(libs__options__options_help_ctgc_2_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 10;
	MR_np_call_localret_ent(io__write_char_3_0,
		libs__options__options_help_ctgc_2_0_i20);
MR_def_label(libs__options__options_help_ctgc_2_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = (MR_Word) MR_string_const("--structure-reuse, --ctgc", 25);
	MR_sv(2) = (MR_Word) MR_TAG_COMMON(1,6,397);
	MR_r1 = (MR_Integer) 9;
	MR_np_call_localret_ent(io__write_char_3_0,
		libs__options__options_help_ctgc_2_0_i21);
MR_def_label(libs__options__options_help_ctgc_2_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(io__write_string_3_0,
		libs__options__options_help_ctgc_2_0_i22);
MR_def_label(libs__options__options_help_ctgc_2_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 10;
	MR_np_call_localret_ent(io__write_char_3_0,
		libs__options__options_help_ctgc_2_0_i23);
MR_def_label(libs__options__options_help_ctgc_2_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = (MR_Word) MR_string_const("\tPerform structure reuse analysis (Compile Time Garbage ", 56);
	MR_sv(2) = (MR_Word) MR_TAG_COMMON(1,6,396);
	MR_r1 = (MR_Integer) 9;
	MR_np_call_localret_ent(io__write_char_3_0,
		libs__options__options_help_ctgc_2_0_i24);
MR_def_label(libs__options__options_help_ctgc_2_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(io__write_string_3_0,
		libs__options__options_help_ctgc_2_0_i25);
MR_def_label(libs__options__options_help_ctgc_2_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 10;
	MR_np_call_localret_ent(io__write_char_3_0,
		libs__options__options_help_ctgc_2_0_i26);
MR_def_label(libs__options__options_help_ctgc_2_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = (MR_Word) MR_string_const("\tCollection).", 13);
	MR_sv(2) = (MR_Word) MR_TAG_COMMON(1,6,395);
	MR_r1 = (MR_Integer) 9;
	MR_np_call_localret_ent(io__write_char_3_0,
		libs__options__options_help_ctgc_2_0_i27);
MR_def_label(libs__options__options_help_ctgc_2_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(io__write_string_3_0,
		libs__options__options_help_ctgc_2_0_i28);
MR_def_label(libs__options__options_help_ctgc_2_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 10;
	MR_np_call_localret_ent(io__write_char_3_0,
		libs__options__options_help_ctgc_2_0_i29);
MR_def_label(libs__options__options_help_ctgc_2_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = (MR_Word) MR_string_const("--structure-reuse-constraint {same_cons_id, ", 44);
	MR_sv(2) = (MR_Word) MR_TAG_COMMON(1,6,394);
	MR_r1 = (MR_Integer) 9;
	MR_np_call_localret_ent(io__write_char_3_0,
		libs__options__options_help_ctgc_2_0_i30);
MR_def_label(libs__options__options_help_ctgc_2_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(io__write_string_3_0,
		libs__options__options_help_ctgc_2_0_i31);
MR_def_label(libs__options__options_help_ctgc_2_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 10;
	MR_np_call_localret_ent(io__write_char_3_0,
		libs__options__options_help_ctgc_2_0_i32);
MR_def_label(libs__options__options_help_ctgc_2_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(libs__options__write_tabbed_lines_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(libs__options_module24)
	MR_init_entry1(libs__options__options_help_termination_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__libs__options__options_help_termination_2_0);
	MR_init_label10(libs__options__options_help_termination_2_0,2,3,4,5,6,7,8,9,10,11)
	MR_init_label10(libs__options__options_help_termination_2_0,12,13,14,15,16,17,18,19,20,21)
	MR_init_label8(libs__options__options_help_termination_2_0,22,23,24,25,26,27,28,29)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'options_help_termination'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(libs__options__options_help_termination_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_r1 = (MR_Word) MR_string_const("\nTermination Analysis Options:\n", 31);
	MR_np_call_localret_ent(io__write_string_3_0,
		libs__options__options_help_termination_2_0_i2);
MR_def_label(libs__options__options_help_termination_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = (MR_Word) MR_string_const("--enable-term, --enable-termination", 35);
	MR_sv(2) = (MR_Word) MR_TAG_COMMON(1,6,435);
	MR_r1 = (MR_Integer) 9;
	MR_np_call_localret_ent(io__write_char_3_0,
		libs__options__options_help_termination_2_0_i3);
MR_def_label(libs__options__options_help_termination_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(io__write_string_3_0,
		libs__options__options_help_termination_2_0_i4);
MR_def_label(libs__options__options_help_termination_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 10;
	MR_np_call_localret_ent(io__write_char_3_0,
		libs__options__options_help_termination_2_0_i5);
MR_def_label(libs__options__options_help_termination_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = (MR_Word) MR_string_const("\tAnalyse each predicate to discover if it terminates.", 53);
	MR_sv(2) = (MR_Word) MR_TAG_COMMON(1,6,434);
	MR_r1 = (MR_Integer) 9;
	MR_np_call_localret_ent(io__write_char_3_0,
		libs__options__options_help_termination_2_0_i6);
MR_def_label(libs__options__options_help_termination_2_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(io__write_string_3_0,
		libs__options__options_help_termination_2_0_i7);
MR_def_label(libs__options__options_help_termination_2_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 10;
	MR_np_call_localret_ent(io__write_char_3_0,
		libs__options__options_help_termination_2_0_i8);
MR_def_label(libs__options__options_help_termination_2_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = (MR_Word) MR_string_const("--chk-term, --check-term, --check-termination", 45);
	MR_sv(2) = (MR_Word) MR_TAG_COMMON(1,6,433);
	MR_r1 = (MR_Integer) 9;
	MR_np_call_localret_ent(io__write_char_3_0,
		libs__options__options_help_termination_2_0_i9);
MR_def_label(libs__options__options_help_termination_2_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(io__write_string_3_0,
		libs__options__options_help_termination_2_0_i10);
MR_def_label(libs__options__options_help_termination_2_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 10;
	MR_np_call_localret_ent(io__write_char_3_0,
		libs__options__options_help_termination_2_0_i11);
MR_def_label(libs__options__options_help_termination_2_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = (MR_Word) MR_string_const("\tEnable termination analysis, and emit warnings for some", 56);
	MR_sv(2) = (MR_Word) MR_TAG_COMMON(1,6,432);
	MR_r1 = (MR_Integer) 9;
	MR_np_call_localret_ent(io__write_char_3_0,
		libs__options__options_help_termination_2_0_i12);
MR_def_label(libs__options__options_help_termination_2_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(io__write_string_3_0,
		libs__options__options_help_termination_2_0_i13);
MR_def_label(libs__options__options_help_termination_2_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 10;
	MR_np_call_localret_ent(io__write_char_3_0,
		libs__options__options_help_termination_2_0_i14);
MR_def_label(libs__options__options_help_termination_2_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = (MR_Word) MR_string_const("\tpredicates or functions that cannot be proved to terminate.", 60);
	MR_sv(2) = (MR_Word) MR_TAG_COMMON(1,6,431);
	MR_r1 = (MR_Integer) 9;
	MR_np_call_localret_ent(io__write_char_3_0,
		libs__options__options_help_termination_2_0_i15);
MR_def_label(libs__options__options_help_termination_2_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(io__write_string_3_0,
		libs__options__options_help_termination_2_0_i16);
MR_def_label(libs__options__options_help_termination_2_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 10;
	MR_np_call_localret_ent(io__write_char_3_0,
		libs__options__options_help_termination_2_0_i17);
MR_def_label(libs__options__options_help_termination_2_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = (MR_Word) MR_string_const("\tIn many cases where the compiler is unable to prove termination", 64);
	MR_sv(2) = (MR_Word) MR_TAG_COMMON(1,6,430);
	MR_r1 = (MR_Integer) 9;
	MR_np_call_localret_ent(io__write_char_3_0,
		libs__options__options_help_termination_2_0_i18);
MR_def_label(libs__options__options_help_termination_2_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(io__write_string_3_0,
		libs__options__options_help_termination_2_0_i19);
MR_def_label(libs__options__options_help_termination_2_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 10;
	MR_np_call_localret_ent(io__write_char_3_0,
		libs__options__options_help_termination_2_0_i20);
MR_def_label(libs__options__options_help_termination_2_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = (MR_Word) MR_string_const("\tthe problem is either a lack of information about the", 54);
	MR_sv(2) = (MR_Word) MR_TAG_COMMON(1,6,429);
	MR_r1 = (MR_Integer) 9;
	MR_np_call_localret_ent(io__write_char_3_0,
		libs__options__options_help_termination_2_0_i21);
MR_def_label(libs__options__options_help_termination_2_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(io__write_string_3_0,
		libs__options__options_help_termination_2_0_i22);
MR_def_label(libs__options__options_help_termination_2_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 10;
	MR_np_call_localret_ent(io__write_char_3_0,
		libs__options__options_help_termination_2_0_i23);
MR_def_label(libs__options__options_help_termination_2_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = (MR_Word) MR_string_const("\ttermination properties of other predicates, or because language", 64);
	MR_sv(2) = (MR_Word) MR_TAG_COMMON(1,6,428);
	MR_r1 = (MR_Integer) 9;
	MR_np_call_localret_ent(io__write_char_3_0,
		libs__options__options_help_termination_2_0_i24);
MR_def_label(libs__options__options_help_termination_2_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(io__write_string_3_0,
		libs__options__options_help_termination_2_0_i25);
MR_def_label(libs__options__options_help_termination_2_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 10;
	MR_np_call_localret_ent(io__write_char_3_0,
		libs__options__options_help_termination_2_0_i26);
MR_def_label(libs__options__options_help_termination_2_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = (MR_Word) MR_string_const("\tconstructs (such as higher order calls) were used which could", 62);
	MR_sv(2) = (MR_Word) MR_TAG_COMMON(1,6,427);
	MR_r1 = (MR_Integer) 9;
	MR_np_call_localret_ent(io__write_char_3_0,
		libs__options__options_help_termination_2_0_i27);
MR_def_label(libs__options__options_help_termination_2_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(io__write_string_3_0,
		libs__options__options_help_termination_2_0_i28);
MR_def_label(libs__options__options_help_termination_2_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 10;
	MR_np_call_localret_ent(io__write_char_3_0,
		libs__options__options_help_termination_2_0_i29);
MR_def_label(libs__options__options_help_termination_2_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(libs__options__write_tabbed_lines_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(libs__options_module25)
	MR_init_entry1(libs__options__options_help_compilation_model_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__libs__options__options_help_compilation_model_2_0);
	MR_init_label10(libs__options__options_help_compilation_model_2_0,2,3,4,5,6,7,8,9,10,11)
	MR_init_label9(libs__options__options_help_compilation_model_2_0,12,13,14,15,16,17,18,19,20)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'options_help_compilation_model'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(libs__options__options_help_compilation_model_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_r1 = (MR_Word) MR_string_const("\nCompilation model options:\n", 28);
	MR_np_call_localret_ent(io__write_string_3_0,
		libs__options__options_help_compilation_model_2_0_i2);
MR_def_label(libs__options__options_help_compilation_model_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(1,6,453);
	MR_np_call_localret_ent(libs__options__write_tabbed_lines_3_0,
		libs__options__options_help_compilation_model_2_0_i3);
MR_def_label(libs__options__options_help_compilation_model_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("\n    Target selection compilation model options:\n", 49);
	MR_np_call_localret_ent(io__write_string_3_0,
		libs__options__options_help_compilation_model_2_0_i4);
MR_def_label(libs__options__options_help_compilation_model_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(1,6,499);
	MR_np_call_localret_ent(libs__options__write_tabbed_lines_3_0,
		libs__options__options_help_compilation_model_2_0_i5);
MR_def_label(libs__options__options_help_compilation_model_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("\n    Optional feature compilation model options:\n", 49);
	MR_np_call_localret_ent(io__write_string_3_0,
		libs__options__options_help_compilation_model_2_0_i6);
MR_def_label(libs__options__options_help_compilation_model_2_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("      Debugging\n", 16);
	MR_np_call_localret_ent(io__write_string_3_0,
		libs__options__options_help_compilation_model_2_0_i7);
MR_def_label(libs__options__options_help_compilation_model_2_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(1,6,513);
	MR_np_call_localret_ent(libs__options__write_tabbed_lines_3_0,
		libs__options__options_help_compilation_model_2_0_i8);
MR_def_label(libs__options__options_help_compilation_model_2_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("      Profiling\n", 16);
	MR_np_call_localret_ent(io__write_string_3_0,
		libs__options__options_help_compilation_model_2_0_i9);
MR_def_label(libs__options__options_help_compilation_model_2_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(1,6,541);
	MR_np_call_localret_ent(libs__options__write_tabbed_lines_3_0,
		libs__options__options_help_compilation_model_2_0_i10);
MR_def_label(libs__options__options_help_compilation_model_2_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("      Miscellaneous optional features\n", 38);
	MR_np_call_localret_ent(io__write_string_3_0,
		libs__options__options_help_compilation_model_2_0_i11);
MR_def_label(libs__options__options_help_compilation_model_2_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(1,6,581);
	MR_np_call_localret_ent(libs__options__write_tabbed_lines_3_0,
		libs__options__options_help_compilation_model_2_0_i12);
MR_def_label(libs__options__options_help_compilation_model_2_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("\n    LLDS back-end compilation model options:\n", 46);
	MR_np_call_localret_ent(io__write_string_3_0,
		libs__options__options_help_compilation_model_2_0_i13);
MR_def_label(libs__options__options_help_compilation_model_2_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(1,6,611);
	MR_np_call_localret_ent(libs__options__write_tabbed_lines_3_0,
		libs__options__options_help_compilation_model_2_0_i14);
MR_def_label(libs__options__options_help_compilation_model_2_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("\n    MLDS back-end compilation model options:\n", 46);
	MR_np_call_localret_ent(io__write_string_3_0,
		libs__options__options_help_compilation_model_2_0_i15);
MR_def_label(libs__options__options_help_compilation_model_2_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(1,6,622);
	MR_np_call_localret_ent(libs__options__write_tabbed_lines_3_0,
		libs__options__options_help_compilation_model_2_0_i16);
MR_def_label(libs__options__options_help_compilation_model_2_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("\n    Developer compilation model options:\n", 42);
	MR_np_call_localret_ent(io__write_string_3_0,
		libs__options__options_help_compilation_model_2_0_i17);
MR_def_label(libs__options__options_help_compilation_model_2_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("\n      Data representation\n", 27);
	MR_np_call_localret_ent(io__write_string_3_0,
		libs__options__options_help_compilation_model_2_0_i18);
MR_def_label(libs__options__options_help_compilation_model_2_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(1,6,635);
	MR_np_call_localret_ent(libs__options__write_tabbed_lines_3_0,
		libs__options__options_help_compilation_model_2_0_i19);
MR_def_label(libs__options__options_help_compilation_model_2_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("\n      Developer optional features\n", 35);
	MR_np_call_localret_ent(io__write_string_3_0,
		libs__options__options_help_compilation_model_2_0_i20);
MR_def_label(libs__options__options_help_compilation_model_2_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(1,6,650);
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_np_tailcall_ent(libs__options__write_tabbed_lines_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(libs__options_module26)
	MR_init_entry1(libs__options__options_help_code_generation_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__libs__options__options_help_code_generation_2_0);
	MR_init_label10(libs__options__options_help_code_generation_2_0,2,3,4,5,6,7,8,9,10,11)
	MR_init_label10(libs__options__options_help_code_generation_2_0,12,13,14,15,16,17,18,19,20,21)
	MR_init_label4(libs__options__options_help_code_generation_2_0,22,23,24,25)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'options_help_code_generation'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(libs__options__options_help_code_generation_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_r1 = (MR_Word) MR_string_const("\nCode generation options:\n", 26);
	MR_np_call_localret_ent(io__write_string_3_0,
		libs__options__options_help_code_generation_2_0_i2);
MR_def_label(libs__options__options_help_code_generation_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = (MR_Word) MR_string_const("--pic", 5);
	MR_sv(2) = (MR_Word) MR_TAG_COMMON(1,6,678);
	MR_r1 = (MR_Integer) 9;
	MR_np_call_localret_ent(io__write_char_3_0,
		libs__options__options_help_code_generation_2_0_i3);
MR_def_label(libs__options__options_help_code_generation_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(io__write_string_3_0,
		libs__options__options_help_code_generation_2_0_i4);
MR_def_label(libs__options__options_help_code_generation_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 10;
	MR_np_call_localret_ent(io__write_char_3_0,
		libs__options__options_help_code_generation_2_0_i5);
MR_def_label(libs__options__options_help_code_generation_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = (MR_Word) MR_string_const("\tGenerate position-independent code.", 36);
	MR_sv(2) = (MR_Word) MR_TAG_COMMON(1,6,677);
	MR_r1 = (MR_Integer) 9;
	MR_np_call_localret_ent(io__write_char_3_0,
		libs__options__options_help_code_generation_2_0_i6);
MR_def_label(libs__options__options_help_code_generation_2_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(io__write_string_3_0,
		libs__options__options_help_code_generation_2_0_i7);
MR_def_label(libs__options__options_help_code_generation_2_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 10;
	MR_np_call_localret_ent(io__write_char_3_0,
		libs__options__options_help_code_generation_2_0_i8);
MR_def_label(libs__options__options_help_code_generation_2_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = (MR_Word) MR_string_const("\tThis option is only used by the \140--target asm\' back-end.", 57);
	MR_sv(2) = (MR_Word) MR_TAG_COMMON(1,6,676);
	MR_r1 = (MR_Integer) 9;
	MR_np_call_localret_ent(io__write_char_3_0,
		libs__options__options_help_code_generation_2_0_i9);
MR_def_label(libs__options__options_help_code_generation_2_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(io__write_string_3_0,
		libs__options__options_help_code_generation_2_0_i10);
MR_def_label(libs__options__options_help_code_generation_2_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 10;
	MR_np_call_localret_ent(io__write_char_3_0,
		libs__options__options_help_code_generation_2_0_i11);
MR_def_label(libs__options__options_help_code_generation_2_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = (MR_Word) MR_string_const("\tThe generated assembler code will be written to", 48);
	MR_sv(2) = (MR_Word) MR_TAG_COMMON(1,6,675);
	MR_r1 = (MR_Integer) 9;
	MR_np_call_localret_ent(io__write_char_3_0,
		libs__options__options_help_code_generation_2_0_i12);
MR_def_label(libs__options__options_help_code_generation_2_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(io__write_string_3_0,
		libs__options__options_help_code_generation_2_0_i13);
MR_def_label(libs__options__options_help_code_generation_2_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 10;
	MR_np_call_localret_ent(io__write_char_3_0,
		libs__options__options_help_code_generation_2_0_i14);
MR_def_label(libs__options__options_help_code_generation_2_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = (MR_Word) MR_string_const("\t\140<module>.pic_s\' rather than to \140<module>.s\'.", 46);
	MR_sv(2) = (MR_Word) MR_TAG_COMMON(1,6,674);
	MR_r1 = (MR_Integer) 9;
	MR_np_call_localret_ent(io__write_char_3_0,
		libs__options__options_help_code_generation_2_0_i15);
MR_def_label(libs__options__options_help_code_generation_2_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(io__write_string_3_0,
		libs__options__options_help_code_generation_2_0_i16);
MR_def_label(libs__options__options_help_code_generation_2_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 10;
	MR_np_call_localret_ent(io__write_char_3_0,
		libs__options__options_help_code_generation_2_0_i17);
MR_def_label(libs__options__options_help_code_generation_2_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = (MR_Word) MR_string_const("--no-trad-passes", 16);
	MR_sv(2) = (MR_Word) MR_TAG_COMMON(1,6,673);
	MR_r1 = (MR_Integer) 9;
	MR_np_call_localret_ent(io__write_char_3_0,
		libs__options__options_help_code_generation_2_0_i18);
MR_def_label(libs__options__options_help_code_generation_2_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(io__write_string_3_0,
		libs__options__options_help_code_generation_2_0_i19);
MR_def_label(libs__options__options_help_code_generation_2_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 10;
	MR_np_call_localret_ent(io__write_char_3_0,
		libs__options__options_help_code_generation_2_0_i20);
MR_def_label(libs__options__options_help_code_generation_2_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = (MR_Word) MR_string_const("\tThe default \140--trad-passes\' completely processes each predicate", 64);
	MR_sv(2) = (MR_Word) MR_TAG_COMMON(1,6,672);
	MR_r1 = (MR_Integer) 9;
	MR_np_call_localret_ent(io__write_char_3_0,
		libs__options__options_help_code_generation_2_0_i21);
MR_def_label(libs__options__options_help_code_generation_2_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(io__write_string_3_0,
		libs__options__options_help_code_generation_2_0_i22);
MR_def_label(libs__options__options_help_code_generation_2_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 10;
	MR_np_call_localret_ent(io__write_char_3_0,
		libs__options__options_help_code_generation_2_0_i23);
MR_def_label(libs__options__options_help_code_generation_2_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(libs__options__write_tabbed_lines_3_0,
		libs__options__options_help_code_generation_2_0_i24);
MR_def_label(libs__options__options_help_code_generation_2_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("\n    Code generation target options:\n", 37);
	MR_np_call_localret_ent(io__write_string_3_0,
		libs__options__options_help_code_generation_2_0_i25);
MR_def_label(libs__options__options_help_code_generation_2_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(1,6,693);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(libs__options__write_tabbed_lines_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(libs__options_module27)
	MR_init_entry1(libs__options__options_help_optimization_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__libs__options__options_help_optimization_2_0);
	MR_init_label10(libs__options__options_help_optimization_2_0,2,3,4,5,6,7,8,9,10,11)
	MR_init_label10(libs__options__options_help_optimization_2_0,12,13,14,15,16,17,18,19,20,21)
	MR_init_label2(libs__options__options_help_optimization_2_0,22,23)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'options_help_optimization'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(libs__options__options_help_optimization_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_r1 = (MR_Word) MR_string_const("\nOptimization Options:\n", 23);
	MR_np_call_localret_ent(io__write_string_3_0,
		libs__options__options_help_optimization_2_0_i2);
MR_def_label(libs__options__options_help_optimization_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = (MR_Word) MR_string_const("-O <n>, --opt-level <n>, --optimization-level <n>", 49);
	MR_sv(2) = (MR_Word) MR_TAG_COMMON(1,6,733);
	MR_r1 = (MR_Integer) 9;
	MR_np_call_localret_ent(io__write_char_3_0,
		libs__options__options_help_optimization_2_0_i3);
MR_def_label(libs__options__options_help_optimization_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(io__write_string_3_0,
		libs__options__options_help_optimization_2_0_i4);
MR_def_label(libs__options__options_help_optimization_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 10;
	MR_np_call_localret_ent(io__write_char_3_0,
		libs__options__options_help_optimization_2_0_i5);
MR_def_label(libs__options__options_help_optimization_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = (MR_Word) MR_string_const("\tSet optimization level to <n>.", 31);
	MR_sv(2) = (MR_Word) MR_TAG_COMMON(1,6,732);
	MR_r1 = (MR_Integer) 9;
	MR_np_call_localret_ent(io__write_char_3_0,
		libs__options__options_help_optimization_2_0_i6);
MR_def_label(libs__options__options_help_optimization_2_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(io__write_string_3_0,
		libs__options__options_help_optimization_2_0_i7);
MR_def_label(libs__options__options_help_optimization_2_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 10;
	MR_np_call_localret_ent(io__write_char_3_0,
		libs__options__options_help_optimization_2_0_i8);
MR_def_label(libs__options__options_help_optimization_2_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = (MR_Word) MR_string_const("\tOptimization level -1 means no optimization", 44);
	MR_sv(2) = (MR_Word) MR_TAG_COMMON(1,6,731);
	MR_r1 = (MR_Integer) 9;
	MR_np_call_localret_ent(io__write_char_3_0,
		libs__options__options_help_optimization_2_0_i9);
MR_def_label(libs__options__options_help_optimization_2_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(io__write_string_3_0,
		libs__options__options_help_optimization_2_0_i10);
MR_def_label(libs__options__options_help_optimization_2_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 10;
	MR_np_call_localret_ent(io__write_char_3_0,
		libs__options__options_help_optimization_2_0_i11);
MR_def_label(libs__options__options_help_optimization_2_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = (MR_Word) MR_string_const("\twhile optimization level 6 means full optimization.", 52);
	MR_sv(2) = (MR_Word) MR_TAG_COMMON(1,6,730);
	MR_r1 = (MR_Integer) 9;
	MR_np_call_localret_ent(io__write_char_3_0,
		libs__options__options_help_optimization_2_0_i12);
MR_def_label(libs__options__options_help_optimization_2_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(io__write_string_3_0,
		libs__options__options_help_optimization_2_0_i13);
MR_def_label(libs__options__options_help_optimization_2_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 10;
	MR_np_call_localret_ent(io__write_char_3_0,
		libs__options__options_help_optimization_2_0_i14);
MR_def_label(libs__options__options_help_optimization_2_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = (MR_Word) MR_string_const("--opt-space, --optimize-space", 29);
	MR_sv(2) = (MR_Word) MR_TAG_COMMON(1,6,729);
	MR_r1 = (MR_Integer) 9;
	MR_np_call_localret_ent(io__write_char_3_0,
		libs__options__options_help_optimization_2_0_i15);
MR_def_label(libs__options__options_help_optimization_2_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(io__write_string_3_0,
		libs__options__options_help_optimization_2_0_i16);
MR_def_label(libs__options__options_help_optimization_2_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 10;
	MR_np_call_localret_ent(io__write_char_3_0,
		libs__options__options_help_optimization_2_0_i17);
MR_def_label(libs__options__options_help_optimization_2_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = (MR_Word) MR_string_const("\tTurn on optimizations that reduce code size", 44);
	MR_sv(2) = (MR_Word) MR_TAG_COMMON(1,6,728);
	MR_r1 = (MR_Integer) 9;
	MR_np_call_localret_ent(io__write_char_3_0,
		libs__options__options_help_optimization_2_0_i18);
MR_def_label(libs__options__options_help_optimization_2_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(io__write_string_3_0,
		libs__options__options_help_optimization_2_0_i19);
MR_def_label(libs__options__options_help_optimization_2_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 10;
	MR_np_call_localret_ent(io__write_char_3_0,
		libs__options__options_help_optimization_2_0_i20);
MR_def_label(libs__options__options_help_optimization_2_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = (MR_Word) MR_string_const("\tand turn off optimizations that significantly", 46);
	MR_sv(2) = (MR_Word) MR_TAG_COMMON(1,6,727);
	MR_r1 = (MR_Integer) 9;
	MR_np_call_localret_ent(io__write_char_3_0,
		libs__options__options_help_optimization_2_0_i21);
MR_def_label(libs__options__options_help_optimization_2_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(io__write_string_3_0,
		libs__options__options_help_optimization_2_0_i22);
MR_def_label(libs__options__options_help_optimization_2_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 10;
	MR_np_call_localret_ent(io__write_char_3_0,
		libs__options__options_help_optimization_2_0_i23);
MR_def_label(libs__options__options_help_optimization_2_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(libs__options__write_tabbed_lines_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(libs__options_module28)
	MR_init_entry1(libs__options__options_help_hlds_hlds_optimization_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__libs__options__options_help_hlds_hlds_optimization_2_0);
	MR_init_label1(libs__options__options_help_hlds_hlds_optimization_2_0,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'options_help_hlds_hlds_optimization'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(libs__options__options_help_hlds_hlds_optimization_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_r1 = (MR_Word) MR_string_const("\n    High-level (HLDS -> HLDS) optimizations:\n", 46);
	MR_np_call_localret_ent(io__write_string_3_0,
		libs__options__options_help_hlds_hlds_optimization_2_0_i2);
MR_def_label(libs__options__options_help_hlds_hlds_optimization_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(1,6,885);
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_np_tailcall_ent(libs__options__write_tabbed_lines_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(libs__options_module29)
	MR_init_entry1(libs__options__options_help_hlds_llds_optimization_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__libs__options__options_help_hlds_llds_optimization_2_0);
	MR_init_label10(libs__options__options_help_hlds_llds_optimization_2_0,2,3,4,5,6,7,8,9,10,11)
	MR_init_label10(libs__options__options_help_hlds_llds_optimization_2_0,12,13,14,15,16,17,18,19,20,21)
	MR_init_label2(libs__options__options_help_hlds_llds_optimization_2_0,22,23)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'options_help_hlds_llds_optimization'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(libs__options__options_help_hlds_llds_optimization_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_r1 = (MR_Word) MR_string_const("\n    Medium-level (HLDS -> LLDS) optimizations:\n", 48);
	MR_np_call_localret_ent(io__write_string_3_0,
		libs__options__options_help_hlds_llds_optimization_2_0_i2);
MR_def_label(libs__options__options_help_hlds_llds_optimization_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = (MR_Word) MR_string_const("--no-smart-indexing", 19);
	MR_sv(2) = (MR_Word) MR_TAG_COMMON(1,6,925);
	MR_r1 = (MR_Integer) 9;
	MR_np_call_localret_ent(io__write_char_3_0,
		libs__options__options_help_hlds_llds_optimization_2_0_i3);
MR_def_label(libs__options__options_help_hlds_llds_optimization_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(io__write_string_3_0,
		libs__options__options_help_hlds_llds_optimization_2_0_i4);
MR_def_label(libs__options__options_help_hlds_llds_optimization_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 10;
	MR_np_call_localret_ent(io__write_char_3_0,
		libs__options__options_help_hlds_llds_optimization_2_0_i5);
MR_def_label(libs__options__options_help_hlds_llds_optimization_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = (MR_Word) MR_string_const("\tGenerate switches as a simple if-then-else chains;", 51);
	MR_sv(2) = (MR_Word) MR_TAG_COMMON(1,6,924);
	MR_r1 = (MR_Integer) 9;
	MR_np_call_localret_ent(io__write_char_3_0,
		libs__options__options_help_hlds_llds_optimization_2_0_i6);
MR_def_label(libs__options__options_help_hlds_llds_optimization_2_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(io__write_string_3_0,
		libs__options__options_help_hlds_llds_optimization_2_0_i7);
MR_def_label(libs__options__options_help_hlds_llds_optimization_2_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 10;
	MR_np_call_localret_ent(io__write_char_3_0,
		libs__options__options_help_hlds_llds_optimization_2_0_i8);
MR_def_label(libs__options__options_help_hlds_llds_optimization_2_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = (MR_Word) MR_string_const("\tdisable string hashing and integer table-lookup indexing.", 58);
	MR_sv(2) = (MR_Word) MR_TAG_COMMON(1,6,923);
	MR_r1 = (MR_Integer) 9;
	MR_np_call_localret_ent(io__write_char_3_0,
		libs__options__options_help_hlds_llds_optimization_2_0_i9);
MR_def_label(libs__options__options_help_hlds_llds_optimization_2_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(io__write_string_3_0,
		libs__options__options_help_hlds_llds_optimization_2_0_i10);
MR_def_label(libs__options__options_help_hlds_llds_optimization_2_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 10;
	MR_np_call_localret_ent(io__write_char_3_0,
		libs__options__options_help_hlds_llds_optimization_2_0_i11);
MR_def_label(libs__options__options_help_hlds_llds_optimization_2_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = (MR_Word) MR_string_const("--dense-switch-req-density <percentage>", 39);
	MR_sv(2) = (MR_Word) MR_TAG_COMMON(1,6,922);
	MR_r1 = (MR_Integer) 9;
	MR_np_call_localret_ent(io__write_char_3_0,
		libs__options__options_help_hlds_llds_optimization_2_0_i12);
MR_def_label(libs__options__options_help_hlds_llds_optimization_2_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(io__write_string_3_0,
		libs__options__options_help_hlds_llds_optimization_2_0_i13);
MR_def_label(libs__options__options_help_hlds_llds_optimization_2_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 10;
	MR_np_call_localret_ent(io__write_char_3_0,
		libs__options__options_help_hlds_llds_optimization_2_0_i14);
MR_def_label(libs__options__options_help_hlds_llds_optimization_2_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = (MR_Word) MR_string_const("\tThe jump table generated for an atomic switch", 46);
	MR_sv(2) = (MR_Word) MR_TAG_COMMON(1,6,921);
	MR_r1 = (MR_Integer) 9;
	MR_np_call_localret_ent(io__write_char_3_0,
		libs__options__options_help_hlds_llds_optimization_2_0_i15);
MR_def_label(libs__options__options_help_hlds_llds_optimization_2_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(io__write_string_3_0,
		libs__options__options_help_hlds_llds_optimization_2_0_i16);
MR_def_label(libs__options__options_help_hlds_llds_optimization_2_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 10;
	MR_np_call_localret_ent(io__write_char_3_0,
		libs__options__options_help_hlds_llds_optimization_2_0_i17);
MR_def_label(libs__options__options_help_hlds_llds_optimization_2_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = (MR_Word) MR_string_const("\tmust have at least this percentage of full slots (default: 25).", 64);
	MR_sv(2) = (MR_Word) MR_TAG_COMMON(1,6,920);
	MR_r1 = (MR_Integer) 9;
	MR_np_call_localret_ent(io__write_char_3_0,
		libs__options__options_help_hlds_llds_optimization_2_0_i18);
MR_def_label(libs__options__options_help_hlds_llds_optimization_2_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(io__write_string_3_0,
		libs__options__options_help_hlds_llds_optimization_2_0_i19);
MR_def_label(libs__options__options_help_hlds_llds_optimization_2_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 10;
	MR_np_call_localret_ent(io__write_char_3_0,
		libs__options__options_help_hlds_llds_optimization_2_0_i20);
MR_def_label(libs__options__options_help_hlds_llds_optimization_2_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = (MR_Word) MR_string_const("--lookup-switch-req-density <percentage>", 40);
	MR_sv(2) = (MR_Word) MR_TAG_COMMON(1,6,919);
	MR_r1 = (MR_Integer) 9;
	MR_np_call_localret_ent(io__write_char_3_0,
		libs__options__options_help_hlds_llds_optimization_2_0_i21);
MR_def_label(libs__options__options_help_hlds_llds_optimization_2_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(io__write_string_3_0,
		libs__options__options_help_hlds_llds_optimization_2_0_i22);
MR_def_label(libs__options__options_help_hlds_llds_optimization_2_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 10;
	MR_np_call_localret_ent(io__write_char_3_0,
		libs__options__options_help_hlds_llds_optimization_2_0_i23);
MR_def_label(libs__options__options_help_hlds_llds_optimization_2_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(libs__options__write_tabbed_lines_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(libs__options_module30)
	MR_init_entry1(libs__options__options_help_llds_llds_optimization_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__libs__options__options_help_llds_llds_optimization_2_0);
	MR_init_label10(libs__options__options_help_llds_llds_optimization_2_0,2,3,4,5,6,7,8,9,10,11)
	MR_init_label10(libs__options__options_help_llds_llds_optimization_2_0,12,13,14,15,16,17,18,19,20,21)
	MR_init_label5(libs__options__options_help_llds_llds_optimization_2_0,22,23,24,25,26)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'options_help_llds_llds_optimization'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(libs__options__options_help_llds_llds_optimization_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_r1 = (MR_Word) MR_string_const("\n    Low-level (LLDS -> LLDS) optimizations:\n", 45);
	MR_np_call_localret_ent(io__write_string_3_0,
		libs__options__options_help_llds_llds_optimization_2_0_i2);
MR_def_label(libs__options__options_help_llds_llds_optimization_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = (MR_Word) MR_string_const("--no-common-data", 16);
	MR_sv(2) = (MR_Word) MR_TAG_COMMON(1,6,963);
	MR_r1 = (MR_Integer) 9;
	MR_np_call_localret_ent(io__write_char_3_0,
		libs__options__options_help_llds_llds_optimization_2_0_i3);
MR_def_label(libs__options__options_help_llds_llds_optimization_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(io__write_string_3_0,
		libs__options__options_help_llds_llds_optimization_2_0_i4);
MR_def_label(libs__options__options_help_llds_llds_optimization_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 10;
	MR_np_call_localret_ent(io__write_char_3_0,
		libs__options__options_help_llds_llds_optimization_2_0_i5);
MR_def_label(libs__options__options_help_llds_llds_optimization_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = (MR_Word) MR_string_const("\tDisable optimization of common data structures.", 48);
	MR_sv(2) = (MR_Word) MR_TAG_COMMON(1,6,962);
	MR_r1 = (MR_Integer) 9;
	MR_np_call_localret_ent(io__write_char_3_0,
		libs__options__options_help_llds_llds_optimization_2_0_i6);
MR_def_label(libs__options__options_help_llds_llds_optimization_2_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(io__write_string_3_0,
		libs__options__options_help_llds_llds_optimization_2_0_i7);
MR_def_label(libs__options__options_help_llds_llds_optimization_2_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 10;
	MR_np_call_localret_ent(io__write_char_3_0,
		libs__options__options_help_llds_llds_optimization_2_0_i8);
MR_def_label(libs__options__options_help_llds_llds_optimization_2_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = (MR_Word) MR_string_const("--no-common-layout-data", 23);
	MR_sv(2) = (MR_Word) MR_TAG_COMMON(1,6,961);
	MR_r1 = (MR_Integer) 9;
	MR_np_call_localret_ent(io__write_char_3_0,
		libs__options__options_help_llds_llds_optimization_2_0_i9);
MR_def_label(libs__options__options_help_llds_llds_optimization_2_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(io__write_string_3_0,
		libs__options__options_help_llds_llds_optimization_2_0_i10);
MR_def_label(libs__options__options_help_llds_llds_optimization_2_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 10;
	MR_np_call_localret_ent(io__write_char_3_0,
		libs__options__options_help_llds_llds_optimization_2_0_i11);
MR_def_label(libs__options__options_help_llds_llds_optimization_2_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = (MR_Word) MR_string_const("\tDisable optimization of common subsequences in layout structures.", 66);
	MR_sv(2) = (MR_Word) MR_TAG_COMMON(1,6,960);
	MR_r1 = (MR_Integer) 9;
	MR_np_call_localret_ent(io__write_char_3_0,
		libs__options__options_help_llds_llds_optimization_2_0_i12);
MR_def_label(libs__options__options_help_llds_llds_optimization_2_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(io__write_string_3_0,
		libs__options__options_help_llds_llds_optimization_2_0_i13);
MR_def_label(libs__options__options_help_llds_llds_optimization_2_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 10;
	MR_np_call_localret_ent(io__write_char_3_0,
		libs__options__options_help_llds_llds_optimization_2_0_i14);
MR_def_label(libs__options__options_help_llds_llds_optimization_2_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = (MR_Word) MR_string_const("--no-llds-optimize", 18);
	MR_sv(2) = (MR_Word) MR_TAG_COMMON(1,6,959);
	MR_r1 = (MR_Integer) 9;
	MR_np_call_localret_ent(io__write_char_3_0,
		libs__options__options_help_llds_llds_optimization_2_0_i15);
MR_def_label(libs__options__options_help_llds_llds_optimization_2_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(io__write_string_3_0,
		libs__options__options_help_llds_llds_optimization_2_0_i16);
MR_def_label(libs__options__options_help_llds_llds_optimization_2_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 10;
	MR_np_call_localret_ent(io__write_char_3_0,
		libs__options__options_help_llds_llds_optimization_2_0_i17);
MR_def_label(libs__options__options_help_llds_llds_optimization_2_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = (MR_Word) MR_string_const("\tDisable the low-level optimization passes.", 43);
	MR_sv(2) = (MR_Word) MR_TAG_COMMON(1,6,958);
	MR_r1 = (MR_Integer) 9;
	MR_np_call_localret_ent(io__write_char_3_0,
		libs__options__options_help_llds_llds_optimization_2_0_i18);
MR_def_label(libs__options__options_help_llds_llds_optimization_2_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(io__write_string_3_0,
		libs__options__options_help_llds_llds_optimization_2_0_i19);
MR_def_label(libs__options__options_help_llds_llds_optimization_2_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 10;
	MR_np_call_localret_ent(io__write_char_3_0,
		libs__options__options_help_llds_llds_optimization_2_0_i20);
MR_def_label(libs__options__options_help_llds_llds_optimization_2_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = (MR_Word) MR_string_const("--optimize-dead-procs", 21);
	MR_sv(2) = (MR_Word) MR_TAG_COMMON(1,6,957);
	MR_r1 = (MR_Integer) 9;
	MR_np_call_localret_ent(io__write_char_3_0,
		libs__options__options_help_llds_llds_optimization_2_0_i21);
MR_def_label(libs__options__options_help_llds_llds_optimization_2_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(io__write_string_3_0,
		libs__options__options_help_llds_llds_optimization_2_0_i22);
MR_def_label(libs__options__options_help_llds_llds_optimization_2_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 10;
	MR_np_call_localret_ent(io__write_char_3_0,
		libs__options__options_help_llds_llds_optimization_2_0_i23);
MR_def_label(libs__options__options_help_llds_llds_optimization_2_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = (MR_Word) MR_string_const("\tEnable dead predicate elimination.", 35);
	MR_sv(2) = (MR_Word) MR_TAG_COMMON(1,6,956);
	MR_r1 = (MR_Integer) 9;
	MR_np_call_localret_ent(io__write_char_3_0,
		libs__options__options_help_llds_llds_optimization_2_0_i24);
MR_def_label(libs__options__options_help_llds_llds_optimization_2_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(io__write_string_3_0,
		libs__options__options_help_llds_llds_optimization_2_0_i25);
MR_def_label(libs__options__options_help_llds_llds_optimization_2_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 10;
	MR_np_call_localret_ent(io__write_char_3_0,
		libs__options__options_help_llds_llds_optimization_2_0_i26);
MR_def_label(libs__options__options_help_llds_llds_optimization_2_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(libs__options__write_tabbed_lines_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(libs__options_module31)
	MR_init_entry1(libs__options__options_help_mlds_mlds_optimization_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__libs__options__options_help_mlds_mlds_optimization_2_0);
	MR_init_label10(libs__options__options_help_mlds_mlds_optimization_2_0,2,3,4,5,6,7,8,9,10,11)
	MR_init_label10(libs__options__options_help_mlds_mlds_optimization_2_0,12,13,14,15,16,17,18,19,20,21)
	MR_init_label10(libs__options__options_help_mlds_mlds_optimization_2_0,22,23,24,25,26,27,28,29,30,31)
	MR_init_label4(libs__options__options_help_mlds_mlds_optimization_2_0,32,33,34,35)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'options_help_mlds_mlds_optimization'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(libs__options__options_help_mlds_mlds_optimization_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_r1 = (MR_Word) MR_string_const("\n    MLDS -> MLDS optimizations:\n", 33);
	MR_np_call_localret_ent(io__write_string_3_0,
		libs__options__options_help_mlds_mlds_optimization_2_0_i2);
MR_def_label(libs__options__options_help_mlds_mlds_optimization_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = (MR_Word) MR_string_const("--no-mlds-optimize", 18);
	MR_sv(2) = (MR_Word) MR_TAG_COMMON(1,6,979);
	MR_r1 = (MR_Integer) 9;
	MR_np_call_localret_ent(io__write_char_3_0,
		libs__options__options_help_mlds_mlds_optimization_2_0_i3);
MR_def_label(libs__options__options_help_mlds_mlds_optimization_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(io__write_string_3_0,
		libs__options__options_help_mlds_mlds_optimization_2_0_i4);
MR_def_label(libs__options__options_help_mlds_mlds_optimization_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 10;
	MR_np_call_localret_ent(io__write_char_3_0,
		libs__options__options_help_mlds_mlds_optimization_2_0_i5);
MR_def_label(libs__options__options_help_mlds_mlds_optimization_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = (MR_Word) MR_string_const("\tDisable the MLDS->MLDS optimization passes.", 44);
	MR_sv(2) = (MR_Word) MR_TAG_COMMON(1,6,978);
	MR_r1 = (MR_Integer) 9;
	MR_np_call_localret_ent(io__write_char_3_0,
		libs__options__options_help_mlds_mlds_optimization_2_0_i6);
MR_def_label(libs__options__options_help_mlds_mlds_optimization_2_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(io__write_string_3_0,
		libs__options__options_help_mlds_mlds_optimization_2_0_i7);
MR_def_label(libs__options__options_help_mlds_mlds_optimization_2_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 10;
	MR_np_call_localret_ent(io__write_char_3_0,
		libs__options__options_help_mlds_mlds_optimization_2_0_i8);
MR_def_label(libs__options__options_help_mlds_mlds_optimization_2_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = (MR_Word) MR_string_const("--no-optimize-tailcalls", 23);
	MR_sv(2) = (MR_Word) MR_TAG_COMMON(1,6,977);
	MR_r1 = (MR_Integer) 9;
	MR_np_call_localret_ent(io__write_char_3_0,
		libs__options__options_help_mlds_mlds_optimization_2_0_i9);
MR_def_label(libs__options__options_help_mlds_mlds_optimization_2_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(io__write_string_3_0,
		libs__options__options_help_mlds_mlds_optimization_2_0_i10);
MR_def_label(libs__options__options_help_mlds_mlds_optimization_2_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 10;
	MR_np_call_localret_ent(io__write_char_3_0,
		libs__options__options_help_mlds_mlds_optimization_2_0_i11);
MR_def_label(libs__options__options_help_mlds_mlds_optimization_2_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = (MR_Word) MR_string_const("\tTreat tailcalls as ordinary calls, rather than optimizing", 58);
	MR_sv(2) = (MR_Word) MR_TAG_COMMON(1,6,976);
	MR_r1 = (MR_Integer) 9;
	MR_np_call_localret_ent(io__write_char_3_0,
		libs__options__options_help_mlds_mlds_optimization_2_0_i12);
MR_def_label(libs__options__options_help_mlds_mlds_optimization_2_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(io__write_string_3_0,
		libs__options__options_help_mlds_mlds_optimization_2_0_i13);
MR_def_label(libs__options__options_help_mlds_mlds_optimization_2_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 10;
	MR_np_call_localret_ent(io__write_char_3_0,
		libs__options__options_help_mlds_mlds_optimization_2_0_i14);
MR_def_label(libs__options__options_help_mlds_mlds_optimization_2_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = (MR_Word) MR_string_const("\tby turning self-tailcalls into loops.", 38);
	MR_sv(2) = (MR_Word) MR_TAG_COMMON(1,6,975);
	MR_r1 = (MR_Integer) 9;
	MR_np_call_localret_ent(io__write_char_3_0,
		libs__options__options_help_mlds_mlds_optimization_2_0_i15);
MR_def_label(libs__options__options_help_mlds_mlds_optimization_2_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(io__write_string_3_0,
		libs__options__options_help_mlds_mlds_optimization_2_0_i16);
MR_def_label(libs__options__options_help_mlds_mlds_optimization_2_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 10;
	MR_np_call_localret_ent(io__write_char_3_0,
		libs__options__options_help_mlds_mlds_optimization_2_0_i17);
MR_def_label(libs__options__options_help_mlds_mlds_optimization_2_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = (MR_Word) MR_string_const("--no-optimize-initializations", 29);
	MR_sv(2) = (MR_Word) MR_TAG_COMMON(1,6,974);
	MR_r1 = (MR_Integer) 9;
	MR_np_call_localret_ent(io__write_char_3_0,
		libs__options__options_help_mlds_mlds_optimization_2_0_i18);
MR_def_label(libs__options__options_help_mlds_mlds_optimization_2_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(io__write_string_3_0,
		libs__options__options_help_mlds_mlds_optimization_2_0_i19);
MR_def_label(libs__options__options_help_mlds_mlds_optimization_2_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 10;
	MR_np_call_localret_ent(io__write_char_3_0,
		libs__options__options_help_mlds_mlds_optimization_2_0_i20);
MR_def_label(libs__options__options_help_mlds_mlds_optimization_2_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = (MR_Word) MR_string_const("\tLeave initializations of local variables as", 44);
	MR_sv(2) = (MR_Word) MR_TAG_COMMON(1,6,973);
	MR_r1 = (MR_Integer) 9;
	MR_np_call_localret_ent(io__write_char_3_0,
		libs__options__options_help_mlds_mlds_optimization_2_0_i21);
MR_def_label(libs__options__options_help_mlds_mlds_optimization_2_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(io__write_string_3_0,
		libs__options__options_help_mlds_mlds_optimization_2_0_i22);
MR_def_label(libs__options__options_help_mlds_mlds_optimization_2_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 10;
	MR_np_call_localret_ent(io__write_char_3_0,
		libs__options__options_help_mlds_mlds_optimization_2_0_i23);
MR_def_label(libs__options__options_help_mlds_mlds_optimization_2_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = (MR_Word) MR_string_const("\tassignment statements, rather than converting such", 51);
	MR_sv(2) = (MR_Word) MR_TAG_COMMON(1,6,972);
	MR_r1 = (MR_Integer) 9;
	MR_np_call_localret_ent(io__write_char_3_0,
		libs__options__options_help_mlds_mlds_optimization_2_0_i24);
MR_def_label(libs__options__options_help_mlds_mlds_optimization_2_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(io__write_string_3_0,
		libs__options__options_help_mlds_mlds_optimization_2_0_i25);
MR_def_label(libs__options__options_help_mlds_mlds_optimization_2_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 10;
	MR_np_call_localret_ent(io__write_char_3_0,
		libs__options__options_help_mlds_mlds_optimization_2_0_i26);
MR_def_label(libs__options__options_help_mlds_mlds_optimization_2_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = (MR_Word) MR_string_const("\tassignment statements into initializers.", 41);
	MR_sv(2) = (MR_Word) MR_TAG_COMMON(1,6,971);
	MR_r1 = (MR_Integer) 9;
	MR_np_call_localret_ent(io__write_char_3_0,
		libs__options__options_help_mlds_mlds_optimization_2_0_i27);
MR_def_label(libs__options__options_help_mlds_mlds_optimization_2_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(io__write_string_3_0,
		libs__options__options_help_mlds_mlds_optimization_2_0_i28);
MR_def_label(libs__options__options_help_mlds_mlds_optimization_2_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 10;
	MR_np_call_localret_ent(io__write_char_3_0,
		libs__options__options_help_mlds_mlds_optimization_2_0_i29);
MR_def_label(libs__options__options_help_mlds_mlds_optimization_2_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = (MR_Word) MR_string_const("--eliminate-local-vars", 22);
	MR_sv(2) = (MR_Word) MR_TAG_COMMON(1,6,970);
	MR_r1 = (MR_Integer) 9;
	MR_np_call_localret_ent(io__write_char_3_0,
		libs__options__options_help_mlds_mlds_optimization_2_0_i30);
MR_def_label(libs__options__options_help_mlds_mlds_optimization_2_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(io__write_string_3_0,
		libs__options__options_help_mlds_mlds_optimization_2_0_i31);
MR_def_label(libs__options__options_help_mlds_mlds_optimization_2_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 10;
	MR_np_call_localret_ent(io__write_char_3_0,
		libs__options__options_help_mlds_mlds_optimization_2_0_i32);
MR_def_label(libs__options__options_help_mlds_mlds_optimization_2_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = (MR_Word) MR_string_const("\tEliminate local variables with known values, where possible,", 61);
	MR_sv(2) = (MR_Word) MR_TAG_COMMON(1,6,969);
	MR_r1 = (MR_Integer) 9;
	MR_np_call_localret_ent(io__write_char_3_0,
		libs__options__options_help_mlds_mlds_optimization_2_0_i33);
MR_def_label(libs__options__options_help_mlds_mlds_optimization_2_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(io__write_string_3_0,
		libs__options__options_help_mlds_mlds_optimization_2_0_i34);
MR_def_label(libs__options__options_help_mlds_mlds_optimization_2_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 10;
	MR_np_call_localret_ent(io__write_char_3_0,
		libs__options__options_help_mlds_mlds_optimization_2_0_i35);
MR_def_label(libs__options__options_help_mlds_mlds_optimization_2_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(libs__options__write_tabbed_lines_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(libs__options_module32)
	MR_init_entry1(libs__options__options_help_hlds_elds_optimization_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__libs__options__options_help_hlds_elds_optimization_2_0);
	MR_init_label10(libs__options__options_help_hlds_elds_optimization_2_0,2,3,4,5,6,7,8,9,10,11)
	MR_init_label5(libs__options__options_help_hlds_elds_optimization_2_0,12,13,14,15,16)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'options_help_hlds_elds_optimization'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(libs__options__options_help_hlds_elds_optimization_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_r1 = (MR_Word) MR_string_const("\n    HLDS -> ELDS optimizations:\n", 33);
	MR_np_call_localret_ent(io__write_string_3_0,
		libs__options__options_help_hlds_elds_optimization_2_0_i2);
MR_def_label(libs__options__options_help_hlds_elds_optimization_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = (MR_Word) MR_string_const("--erlang-switch-on-strings-as-atoms", 35);
	MR_sv(2) = (MR_Word) MR_TAG_COMMON(1,6,984);
	MR_r1 = (MR_Integer) 9;
	MR_np_call_localret_ent(io__write_char_3_0,
		libs__options__options_help_hlds_elds_optimization_2_0_i3);
MR_def_label(libs__options__options_help_hlds_elds_optimization_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(io__write_string_3_0,
		libs__options__options_help_hlds_elds_optimization_2_0_i4);
MR_def_label(libs__options__options_help_hlds_elds_optimization_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 10;
	MR_np_call_localret_ent(io__write_char_3_0,
		libs__options__options_help_hlds_elds_optimization_2_0_i5);
MR_def_label(libs__options__options_help_hlds_elds_optimization_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = (MR_Word) MR_string_const("\tEnable a workaround for slow HiPE compilation of large string", 62);
	MR_sv(2) = (MR_Word) MR_TAG_COMMON(1,6,983);
	MR_r1 = (MR_Integer) 9;
	MR_np_call_localret_ent(io__write_char_3_0,
		libs__options__options_help_hlds_elds_optimization_2_0_i6);
MR_def_label(libs__options__options_help_hlds_elds_optimization_2_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(io__write_string_3_0,
		libs__options__options_help_hlds_elds_optimization_2_0_i7);
MR_def_label(libs__options__options_help_hlds_elds_optimization_2_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 10;
	MR_np_call_localret_ent(io__write_char_3_0,
		libs__options__options_help_hlds_elds_optimization_2_0_i8);
MR_def_label(libs__options__options_help_hlds_elds_optimization_2_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = (MR_Word) MR_string_const("\tswitches by converting the string to an atom at runtime and", 60);
	MR_sv(2) = (MR_Word) MR_TAG_COMMON(1,6,982);
	MR_r1 = (MR_Integer) 9;
	MR_np_call_localret_ent(io__write_char_3_0,
		libs__options__options_help_hlds_elds_optimization_2_0_i9);
MR_def_label(libs__options__options_help_hlds_elds_optimization_2_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(io__write_string_3_0,
		libs__options__options_help_hlds_elds_optimization_2_0_i10);
MR_def_label(libs__options__options_help_hlds_elds_optimization_2_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 10;
	MR_np_call_localret_ent(io__write_char_3_0,
		libs__options__options_help_hlds_elds_optimization_2_0_i11);
MR_def_label(libs__options__options_help_hlds_elds_optimization_2_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = (MR_Word) MR_string_const("\tswitching on atoms. Do not enable if the string switched on", 60);
	MR_sv(2) = (MR_Word) MR_TAG_COMMON(1,6,981);
	MR_r1 = (MR_Integer) 9;
	MR_np_call_localret_ent(io__write_char_3_0,
		libs__options__options_help_hlds_elds_optimization_2_0_i12);
MR_def_label(libs__options__options_help_hlds_elds_optimization_2_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(io__write_string_3_0,
		libs__options__options_help_hlds_elds_optimization_2_0_i13);
MR_def_label(libs__options__options_help_hlds_elds_optimization_2_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 10;
	MR_np_call_localret_ent(io__write_char_3_0,
		libs__options__options_help_hlds_elds_optimization_2_0_i14);
MR_def_label(libs__options__options_help_hlds_elds_optimization_2_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = (MR_Word) MR_string_const("\tcould be longer than 255 characters at runtime.", 48);
	MR_r1 = (MR_Integer) 9;
	MR_np_call_localret_ent(io__write_char_3_0,
		libs__options__options_help_hlds_elds_optimization_2_0_i15);
MR_def_label(libs__options__options_help_hlds_elds_optimization_2_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(io__write_string_3_0,
		libs__options__options_help_hlds_elds_optimization_2_0_i16);
MR_def_label(libs__options__options_help_hlds_elds_optimization_2_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 10;
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(io__write_char_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(libs__options_module33)
	MR_init_entry1(libs__options__options_help_output_optimization_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__libs__options__options_help_output_optimization_2_0);
	MR_init_label10(libs__options__options_help_output_optimization_2_0,2,3,4,5,6,7,8,9,10,11)
	MR_init_label10(libs__options__options_help_output_optimization_2_0,12,13,14,15,16,17,18,19,20,21)
	MR_init_label10(libs__options__options_help_output_optimization_2_0,22,23,24,25,26,27,28,29,30,31)
	MR_init_label1(libs__options__options_help_output_optimization_2_0,32)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'options_help_output_optimization'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(libs__options__options_help_output_optimization_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_r1 = (MR_Word) MR_string_const("\n    Output-level (LLDS -> C) optimizations:\n", 45);
	MR_np_call_localret_ent(io__write_string_3_0,
		libs__options__options_help_output_optimization_2_0_i2);
MR_def_label(libs__options__options_help_output_optimization_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = (MR_Word) MR_string_const("--use-macro-for-redo-fail", 25);
	MR_sv(2) = (MR_Word) MR_TAG_COMMON(1,6,1005);
	MR_r1 = (MR_Integer) 9;
	MR_np_call_localret_ent(io__write_char_3_0,
		libs__options__options_help_output_optimization_2_0_i3);
MR_def_label(libs__options__options_help_output_optimization_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(io__write_string_3_0,
		libs__options__options_help_output_optimization_2_0_i4);
MR_def_label(libs__options__options_help_output_optimization_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 10;
	MR_np_call_localret_ent(io__write_char_3_0,
		libs__options__options_help_output_optimization_2_0_i5);
MR_def_label(libs__options__options_help_output_optimization_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = (MR_Word) MR_string_const("\tEmit the fail or redo macro instead of a branch", 48);
	MR_sv(2) = (MR_Word) MR_TAG_COMMON(1,6,1004);
	MR_r1 = (MR_Integer) 9;
	MR_np_call_localret_ent(io__write_char_3_0,
		libs__options__options_help_output_optimization_2_0_i6);
MR_def_label(libs__options__options_help_output_optimization_2_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(io__write_string_3_0,
		libs__options__options_help_output_optimization_2_0_i7);
MR_def_label(libs__options__options_help_output_optimization_2_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 10;
	MR_np_call_localret_ent(io__write_char_3_0,
		libs__options__options_help_output_optimization_2_0_i8);
MR_def_label(libs__options__options_help_output_optimization_2_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = (MR_Word) MR_string_const("\tto the fail or redo code in the runtime system.", 48);
	MR_sv(2) = (MR_Word) MR_TAG_COMMON(1,6,1003);
	MR_r1 = (MR_Integer) 9;
	MR_np_call_localret_ent(io__write_char_3_0,
		libs__options__options_help_output_optimization_2_0_i9);
MR_def_label(libs__options__options_help_output_optimization_2_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(io__write_string_3_0,
		libs__options__options_help_output_optimization_2_0_i10);
MR_def_label(libs__options__options_help_output_optimization_2_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 10;
	MR_np_call_localret_ent(io__write_char_3_0,
		libs__options__options_help_output_optimization_2_0_i11);
MR_def_label(libs__options__options_help_output_optimization_2_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = (MR_Word) MR_string_const("\tThis produces slightly bigger but slightly faster code.", 56);
	MR_sv(2) = (MR_Word) MR_TAG_COMMON(1,6,1002);
	MR_r1 = (MR_Integer) 9;
	MR_np_call_localret_ent(io__write_char_3_0,
		libs__options__options_help_output_optimization_2_0_i12);
MR_def_label(libs__options__options_help_output_optimization_2_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(io__write_string_3_0,
		libs__options__options_help_output_optimization_2_0_i13);
MR_def_label(libs__options__options_help_output_optimization_2_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 10;
	MR_np_call_localret_ent(io__write_char_3_0,
		libs__options__options_help_output_optimization_2_0_i14);
MR_def_label(libs__options__options_help_output_optimization_2_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = (MR_Word) MR_string_const("--no-emit-c-loops", 17);
	MR_sv(2) = (MR_Word) MR_TAG_COMMON(1,6,1001);
	MR_r1 = (MR_Integer) 9;
	MR_np_call_localret_ent(io__write_char_3_0,
		libs__options__options_help_output_optimization_2_0_i15);
MR_def_label(libs__options__options_help_output_optimization_2_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(io__write_string_3_0,
		libs__options__options_help_output_optimization_2_0_i16);
MR_def_label(libs__options__options_help_output_optimization_2_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 10;
	MR_np_call_localret_ent(io__write_char_3_0,
		libs__options__options_help_output_optimization_2_0_i17);
MR_def_label(libs__options__options_help_output_optimization_2_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = (MR_Word) MR_string_const("\tUse only gotos, don\'t emit C loop constructs.", 46);
	MR_sv(2) = (MR_Word) MR_TAG_COMMON(1,6,1000);
	MR_r1 = (MR_Integer) 9;
	MR_np_call_localret_ent(io__write_char_3_0,
		libs__options__options_help_output_optimization_2_0_i18);
MR_def_label(libs__options__options_help_output_optimization_2_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(io__write_string_3_0,
		libs__options__options_help_output_optimization_2_0_i19);
MR_def_label(libs__options__options_help_output_optimization_2_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 10;
	MR_np_call_localret_ent(io__write_char_3_0,
		libs__options__options_help_output_optimization_2_0_i20);
MR_def_label(libs__options__options_help_output_optimization_2_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = (MR_Word) MR_string_const("--procs-per-c-function <n>", 26);
	MR_sv(2) = (MR_Word) MR_TAG_COMMON(1,6,999);
	MR_r1 = (MR_Integer) 9;
	MR_np_call_localret_ent(io__write_char_3_0,
		libs__options__options_help_output_optimization_2_0_i21);
MR_def_label(libs__options__options_help_output_optimization_2_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(io__write_string_3_0,
		libs__options__options_help_output_optimization_2_0_i22);
MR_def_label(libs__options__options_help_output_optimization_2_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 10;
	MR_np_call_localret_ent(io__write_char_3_0,
		libs__options__options_help_output_optimization_2_0_i23);
MR_def_label(libs__options__options_help_output_optimization_2_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = (MR_Word) MR_string_const("\tPut the code for up to <n> Mercury", 35);
	MR_sv(2) = (MR_Word) MR_TAG_COMMON(1,6,998);
	MR_r1 = (MR_Integer) 9;
	MR_np_call_localret_ent(io__write_char_3_0,
		libs__options__options_help_output_optimization_2_0_i24);
MR_def_label(libs__options__options_help_output_optimization_2_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(io__write_string_3_0,
		libs__options__options_help_output_optimization_2_0_i25);
MR_def_label(libs__options__options_help_output_optimization_2_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 10;
	MR_np_call_localret_ent(io__write_char_3_0,
		libs__options__options_help_output_optimization_2_0_i26);
MR_def_label(libs__options__options_help_output_optimization_2_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = (MR_Word) MR_string_const("\tprocedures in a single C function.  The default", 48);
	MR_sv(2) = (MR_Word) MR_TAG_COMMON(1,6,997);
	MR_r1 = (MR_Integer) 9;
	MR_np_call_localret_ent(io__write_char_3_0,
		libs__options__options_help_output_optimization_2_0_i27);
MR_def_label(libs__options__options_help_output_optimization_2_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(io__write_string_3_0,
		libs__options__options_help_output_optimization_2_0_i28);
MR_def_label(libs__options__options_help_output_optimization_2_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 10;
	MR_np_call_localret_ent(io__write_char_3_0,
		libs__options__options_help_output_optimization_2_0_i29);
MR_def_label(libs__options__options_help_output_optimization_2_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = (MR_Word) MR_string_const("\tvalue of <n> is one.  Increasing <n> can produce", 49);
	MR_sv(2) = (MR_Word) MR_TAG_COMMON(1,6,996);
	MR_r1 = (MR_Integer) 9;
	MR_np_call_localret_ent(io__write_char_3_0,
		libs__options__options_help_output_optimization_2_0_i30);
MR_def_label(libs__options__options_help_output_optimization_2_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(io__write_string_3_0,
		libs__options__options_help_output_optimization_2_0_i31);
MR_def_label(libs__options__options_help_output_optimization_2_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 10;
	MR_np_call_localret_ent(io__write_char_3_0,
		libs__options__options_help_output_optimization_2_0_i32);
MR_def_label(libs__options__options_help_output_optimization_2_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(libs__options__write_tabbed_lines_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(libs__options_module34)
	MR_init_entry1(libs__options__options_help_target_code_compilation_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__libs__options__options_help_target_code_compilation_2_0);
	MR_init_label7(libs__options__options_help_target_code_compilation_2_0,2,3,4,5,6,7,8)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'options_help_target_code_compilation'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(libs__options__options_help_target_code_compilation_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_r1 = (MR_Word) MR_string_const("\n    Target code compilation:\n", 30);
	MR_np_call_localret_ent(io__write_string_3_0,
		libs__options__options_help_target_code_compilation_2_0_i2);
MR_def_label(libs__options__options_help_target_code_compilation_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = (MR_Word) MR_string_const("\tNote that if you are using Mmake, you need to pass these", 57);
	MR_sv(2) = (MR_Word) MR_TAG_COMMON(1,6,1090);
	MR_r1 = (MR_Integer) 9;
	MR_np_call_localret_ent(io__write_char_3_0,
		libs__options__options_help_target_code_compilation_2_0_i3);
MR_def_label(libs__options__options_help_target_code_compilation_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(io__write_string_3_0,
		libs__options__options_help_target_code_compilation_2_0_i4);
MR_def_label(libs__options__options_help_target_code_compilation_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 10;
	MR_np_call_localret_ent(io__write_char_3_0,
		libs__options__options_help_target_code_compilation_2_0_i5);
MR_def_label(libs__options__options_help_target_code_compilation_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = (MR_Word) MR_string_const("\toptions to the target code compiler (e.g. \140mgnuc\')", 51);
	MR_sv(2) = (MR_Word) MR_TAG_COMMON(1,6,1089);
	MR_r1 = (MR_Integer) 9;
	MR_np_call_localret_ent(io__write_char_3_0,
		libs__options__options_help_target_code_compilation_2_0_i6);
MR_def_label(libs__options__options_help_target_code_compilation_2_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(io__write_string_3_0,
		libs__options__options_help_target_code_compilation_2_0_i7);
MR_def_label(libs__options__options_help_target_code_compilation_2_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 10;
	MR_np_call_localret_ent(io__write_char_3_0,
		libs__options__options_help_target_code_compilation_2_0_i8);
MR_def_label(libs__options__options_help_target_code_compilation_2_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(libs__options__write_tabbed_lines_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(libs__options_module35)
	MR_init_entry1(libs__options__options_help_link_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__libs__options__options_help_link_2_0);
	MR_init_label1(libs__options__options_help_link_2_0,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'options_help_link'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(libs__options__options_help_link_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_r1 = (MR_Word) MR_string_const("\nLink Options:\n", 15);
	MR_np_call_localret_ent(io__write_string_3_0,
		libs__options__options_help_link_2_0_i2);
MR_def_label(libs__options__options_help_link_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(1,6,1194);
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_np_tailcall_ent(libs__options__write_tabbed_lines_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(libs__options_module36)
	MR_init_entry1(libs__options__options_help_build_system_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__libs__options__options_help_build_system_2_0);
	MR_init_label1(libs__options__options_help_build_system_2_0,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'options_help_build_system'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(libs__options__options_help_build_system_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_r1 = (MR_Word) MR_string_const("\nBuild System Options:\n", 23);
	MR_np_call_localret_ent(io__write_string_3_0,
		libs__options__options_help_build_system_2_0_i2);
MR_def_label(libs__options__options_help_build_system_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(1,6,1318);
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_np_tailcall_ent(libs__options__write_tabbed_lines_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(libs__options_module37)
	MR_init_entry1(libs__options__options_help_misc_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__libs__options__options_help_misc_2_0);
	MR_init_label10(libs__options__options_help_misc_2_0,2,3,4,5,6,7,8,9,10,11)
	MR_init_label10(libs__options__options_help_misc_2_0,12,13,14,15,16,17,18,19,20,21)
	MR_init_label10(libs__options__options_help_misc_2_0,22,23,24,25,26,27,28,29,30,31)
	MR_init_label1(libs__options__options_help_misc_2_0,32)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'options_help_misc'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(libs__options__options_help_misc_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_r1 = (MR_Word) MR_string_const("\nMiscellaneous Options:\n", 24);
	MR_np_call_localret_ent(io__write_string_3_0,
		libs__options__options_help_misc_2_0_i2);
MR_def_label(libs__options__options_help_misc_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = (MR_Word) MR_string_const("--filenames-from-stdin", 22);
	MR_sv(2) = (MR_Word) MR_TAG_COMMON(1,6,1339);
	MR_r1 = (MR_Integer) 9;
	MR_np_call_localret_ent(io__write_char_3_0,
		libs__options__options_help_misc_2_0_i3);
MR_def_label(libs__options__options_help_misc_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(io__write_string_3_0,
		libs__options__options_help_misc_2_0_i4);
MR_def_label(libs__options__options_help_misc_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 10;
	MR_np_call_localret_ent(io__write_char_3_0,
		libs__options__options_help_misc_2_0_i5);
MR_def_label(libs__options__options_help_misc_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = (MR_Word) MR_string_const("\tRead then compile a newline terminated module name or", 54);
	MR_sv(2) = (MR_Word) MR_TAG_COMMON(1,6,1338);
	MR_r1 = (MR_Integer) 9;
	MR_np_call_localret_ent(io__write_char_3_0,
		libs__options__options_help_misc_2_0_i6);
MR_def_label(libs__options__options_help_misc_2_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(io__write_string_3_0,
		libs__options__options_help_misc_2_0_i7);
MR_def_label(libs__options__options_help_misc_2_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 10;
	MR_np_call_localret_ent(io__write_char_3_0,
		libs__options__options_help_misc_2_0_i8);
MR_def_label(libs__options__options_help_misc_2_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = (MR_Word) MR_string_const("\tfile name from the standard input. Repeat this until EOF", 57);
	MR_sv(2) = (MR_Word) MR_TAG_COMMON(1,6,1337);
	MR_r1 = (MR_Integer) 9;
	MR_np_call_localret_ent(io__write_char_3_0,
		libs__options__options_help_misc_2_0_i9);
MR_def_label(libs__options__options_help_misc_2_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(io__write_string_3_0,
		libs__options__options_help_misc_2_0_i10);
MR_def_label(libs__options__options_help_misc_2_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 10;
	MR_np_call_localret_ent(io__write_char_3_0,
		libs__options__options_help_misc_2_0_i11);
MR_def_label(libs__options__options_help_misc_2_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = (MR_Word) MR_string_const("\tis reached. (This allows a program or user to interactively", 60);
	MR_sv(2) = (MR_Word) MR_TAG_COMMON(1,6,1336);
	MR_r1 = (MR_Integer) 9;
	MR_np_call_localret_ent(io__write_char_3_0,
		libs__options__options_help_misc_2_0_i12);
MR_def_label(libs__options__options_help_misc_2_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(io__write_string_3_0,
		libs__options__options_help_misc_2_0_i13);
MR_def_label(libs__options__options_help_misc_2_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 10;
	MR_np_call_localret_ent(io__write_char_3_0,
		libs__options__options_help_misc_2_0_i14);
MR_def_label(libs__options__options_help_misc_2_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = (MR_Word) MR_string_const("\tcompile several modules without the overhead of process", 56);
	MR_sv(2) = (MR_Word) MR_TAG_COMMON(1,6,1335);
	MR_r1 = (MR_Integer) 9;
	MR_np_call_localret_ent(io__write_char_3_0,
		libs__options__options_help_misc_2_0_i15);
MR_def_label(libs__options__options_help_misc_2_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(io__write_string_3_0,
		libs__options__options_help_misc_2_0_i16);
MR_def_label(libs__options__options_help_misc_2_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 10;
	MR_np_call_localret_ent(io__write_char_3_0,
		libs__options__options_help_misc_2_0_i17);
MR_def_label(libs__options__options_help_misc_2_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = (MR_Word) MR_string_const("\tcreation for each one.)", 24);
	MR_sv(2) = (MR_Word) MR_TAG_COMMON(1,6,1334);
	MR_r1 = (MR_Integer) 9;
	MR_np_call_localret_ent(io__write_char_3_0,
		libs__options__options_help_misc_2_0_i18);
MR_def_label(libs__options__options_help_misc_2_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(io__write_string_3_0,
		libs__options__options_help_misc_2_0_i19);
MR_def_label(libs__options__options_help_misc_2_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 10;
	MR_np_call_localret_ent(io__write_char_3_0,
		libs__options__options_help_misc_2_0_i20);
MR_def_label(libs__options__options_help_misc_2_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = (MR_Word) MR_string_const("--typecheck-ambiguity-warn-limit <n>", 36);
	MR_sv(2) = (MR_Word) MR_TAG_COMMON(1,6,1333);
	MR_r1 = (MR_Integer) 9;
	MR_np_call_localret_ent(io__write_char_3_0,
		libs__options__options_help_misc_2_0_i21);
MR_def_label(libs__options__options_help_misc_2_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(io__write_string_3_0,
		libs__options__options_help_misc_2_0_i22);
MR_def_label(libs__options__options_help_misc_2_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 10;
	MR_np_call_localret_ent(io__write_char_3_0,
		libs__options__options_help_misc_2_0_i23);
MR_def_label(libs__options__options_help_misc_2_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = (MR_Word) MR_string_const("\tSet the number of type assignments required to generate a", 58);
	MR_sv(2) = (MR_Word) MR_TAG_COMMON(1,6,1332);
	MR_r1 = (MR_Integer) 9;
	MR_np_call_localret_ent(io__write_char_3_0,
		libs__options__options_help_misc_2_0_i24);
MR_def_label(libs__options__options_help_misc_2_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(io__write_string_3_0,
		libs__options__options_help_misc_2_0_i25);
MR_def_label(libs__options__options_help_misc_2_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 10;
	MR_np_call_localret_ent(io__write_char_3_0,
		libs__options__options_help_misc_2_0_i26);
MR_def_label(libs__options__options_help_misc_2_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = (MR_Word) MR_string_const("\twarning about highly ambiguous overloading to <n>.", 51);
	MR_sv(2) = (MR_Word) MR_TAG_COMMON(1,6,1331);
	MR_r1 = (MR_Integer) 9;
	MR_np_call_localret_ent(io__write_char_3_0,
		libs__options__options_help_misc_2_0_i27);
MR_def_label(libs__options__options_help_misc_2_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(io__write_string_3_0,
		libs__options__options_help_misc_2_0_i28);
MR_def_label(libs__options__options_help_misc_2_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 10;
	MR_np_call_localret_ent(io__write_char_3_0,
		libs__options__options_help_misc_2_0_i29);
MR_def_label(libs__options__options_help_misc_2_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = (MR_Word) MR_string_const("--typecheck-ambiguity-error-limit <n>", 37);
	MR_sv(2) = (MR_Word) MR_TAG_COMMON(1,6,1330);
	MR_r1 = (MR_Integer) 9;
	MR_np_call_localret_ent(io__write_char_3_0,
		libs__options__options_help_misc_2_0_i30);
MR_def_label(libs__options__options_help_misc_2_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(io__write_string_3_0,
		libs__options__options_help_misc_2_0_i31);
MR_def_label(libs__options__options_help_misc_2_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 10;
	MR_np_call_localret_ent(io__write_char_3_0,
		libs__options__options_help_misc_2_0_i32);
MR_def_label(libs__options__options_help_misc_2_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(libs__options__write_tabbed_lines_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(libs__options_module38)
	MR_init_entry1(libs__options__options_help_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__libs__options__options_help_2_0);
	MR_init_label10(libs__options__options_help_2_0,2,3,4,5,6,7,8,9,10,11)
	MR_init_label10(libs__options__options_help_2_0,12,13,14,15,16,17,18,19,20,21)
	MR_init_label10(libs__options__options_help_2_0,22,23,24,25,26,27,28,29,30,31)
	MR_init_label10(libs__options__options_help_2_0,32,33,34,35,36,37,38,39,40,41)
	MR_init_label4(libs__options__options_help_2_0,42,43,44,45)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'options_help'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__libs__options__options_help_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_r1 = (MR_Word) MR_string_const("\t-?, -h, --help\n", 16);
	MR_np_call_localret_ent(io__write_string_3_0,
		libs__options__options_help_2_0_i2);
MR_def_label(libs__options__options_help_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("\t\tPrint this usage message.\n", 28);
	MR_np_call_localret_ent(io__write_string_3_0,
		libs__options__options_help_2_0_i3);
MR_def_label(libs__options__options_help_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(libs__options__options_help_warning_2_0,
		libs__options__options_help_2_0_i4);
MR_def_label(libs__options__options_help_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(libs__options__options_help_verbosity_2_0,
		libs__options__options_help_2_0_i5);
MR_def_label(libs__options__options_help_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(libs__options__options_help_output_2_0,
		libs__options__options_help_2_0_i6);
MR_def_label(libs__options__options_help_2_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(libs__options__options_help_aux_output_2_0,
		libs__options__options_help_2_0_i7);
MR_def_label(libs__options__options_help_2_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("\nLanguage semantics options:\n", 29);
	MR_np_call_localret_ent(io__write_string_3_0,
		libs__options__options_help_2_0_i8);
MR_def_label(libs__options__options_help_2_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("(See the Mercury language reference manual for detailed explanations.)\n", 71);
	MR_np_call_localret_ent(io__write_string_3_0,
		libs__options__options_help_2_0_i9);
MR_def_label(libs__options__options_help_2_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = (MR_Word) MR_string_const("--no-reorder-conj", 17);
	MR_sv(2) = (MR_Word) MR_TAG_COMMON(1,6,1370);
	MR_r1 = (MR_Integer) 9;
	MR_np_call_localret_ent(io__write_char_3_0,
		libs__options__options_help_2_0_i10);
MR_def_label(libs__options__options_help_2_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(io__write_string_3_0,
		libs__options__options_help_2_0_i11);
MR_def_label(libs__options__options_help_2_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 10;
	MR_np_call_localret_ent(io__write_char_3_0,
		libs__options__options_help_2_0_i12);
MR_def_label(libs__options__options_help_2_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = (MR_Word) MR_string_const("\tExecute conjunctions left-to-right except where the modes imply", 64);
	MR_sv(2) = (MR_Word) MR_TAG_COMMON(1,6,1369);
	MR_r1 = (MR_Integer) 9;
	MR_np_call_localret_ent(io__write_char_3_0,
		libs__options__options_help_2_0_i13);
MR_def_label(libs__options__options_help_2_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(io__write_string_3_0,
		libs__options__options_help_2_0_i14);
MR_def_label(libs__options__options_help_2_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 10;
	MR_np_call_localret_ent(io__write_char_3_0,
		libs__options__options_help_2_0_i15);
MR_def_label(libs__options__options_help_2_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = (MR_Word) MR_string_const("\tthat reordering is unavoidable.", 32);
	MR_sv(2) = (MR_Word) MR_TAG_COMMON(1,6,1368);
	MR_r1 = (MR_Integer) 9;
	MR_np_call_localret_ent(io__write_char_3_0,
		libs__options__options_help_2_0_i16);
MR_def_label(libs__options__options_help_2_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(io__write_string_3_0,
		libs__options__options_help_2_0_i17);
MR_def_label(libs__options__options_help_2_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 10;
	MR_np_call_localret_ent(io__write_char_3_0,
		libs__options__options_help_2_0_i18);
MR_def_label(libs__options__options_help_2_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = (MR_Word) MR_string_const("--no-reorder-disj", 17);
	MR_sv(2) = (MR_Word) MR_TAG_COMMON(1,6,1367);
	MR_r1 = (MR_Integer) 9;
	MR_np_call_localret_ent(io__write_char_3_0,
		libs__options__options_help_2_0_i19);
MR_def_label(libs__options__options_help_2_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(io__write_string_3_0,
		libs__options__options_help_2_0_i20);
MR_def_label(libs__options__options_help_2_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 10;
	MR_np_call_localret_ent(io__write_char_3_0,
		libs__options__options_help_2_0_i21);
MR_def_label(libs__options__options_help_2_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = (MR_Word) MR_string_const("\tExecute disjunctions strictly left-to-right.", 45);
	MR_sv(2) = (MR_Word) MR_TAG_COMMON(1,6,1366);
	MR_r1 = (MR_Integer) 9;
	MR_np_call_localret_ent(io__write_char_3_0,
		libs__options__options_help_2_0_i22);
MR_def_label(libs__options__options_help_2_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(io__write_string_3_0,
		libs__options__options_help_2_0_i23);
MR_def_label(libs__options__options_help_2_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 10;
	MR_np_call_localret_ent(io__write_char_3_0,
		libs__options__options_help_2_0_i24);
MR_def_label(libs__options__options_help_2_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = (MR_Word) MR_string_const("--no-fully-strict", 17);
	MR_sv(2) = (MR_Word) MR_TAG_COMMON(1,6,1365);
	MR_r1 = (MR_Integer) 9;
	MR_np_call_localret_ent(io__write_char_3_0,
		libs__options__options_help_2_0_i25);
MR_def_label(libs__options__options_help_2_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(io__write_string_3_0,
		libs__options__options_help_2_0_i26);
MR_def_label(libs__options__options_help_2_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 10;
	MR_np_call_localret_ent(io__write_char_3_0,
		libs__options__options_help_2_0_i27);
MR_def_label(libs__options__options_help_2_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = (MR_Word) MR_string_const("\tAllow infinite loops or goals with determinism erroneous to be", 63);
	MR_sv(2) = (MR_Word) MR_TAG_COMMON(1,6,1364);
	MR_r1 = (MR_Integer) 9;
	MR_np_call_localret_ent(io__write_char_3_0,
		libs__options__options_help_2_0_i28);
MR_def_label(libs__options__options_help_2_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(io__write_string_3_0,
		libs__options__options_help_2_0_i29);
MR_def_label(libs__options__options_help_2_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 10;
	MR_np_call_localret_ent(io__write_char_3_0,
		libs__options__options_help_2_0_i30);
MR_def_label(libs__options__options_help_2_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(libs__options__write_tabbed_lines_3_0,
		libs__options__options_help_2_0_i31);
MR_def_label(libs__options__options_help_2_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(libs__options__options_help_termination_2_0,
		libs__options__options_help_2_0_i32);
MR_def_label(libs__options__options_help_2_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(libs__options__options_help_ctgc_2_0,
		libs__options__options_help_2_0_i33);
MR_def_label(libs__options__options_help_2_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(libs__options__options_help_compilation_model_2_0,
		libs__options__options_help_2_0_i34);
MR_def_label(libs__options__options_help_2_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(libs__options__options_help_code_generation_2_0,
		libs__options__options_help_2_0_i35);
MR_def_label(libs__options__options_help_2_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(libs__options__options_help_optimization_2_0,
		libs__options__options_help_2_0_i36);
MR_def_label(libs__options__options_help_2_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(libs__options__options_help_hlds_hlds_optimization_2_0,
		libs__options__options_help_2_0_i37);
MR_def_label(libs__options__options_help_2_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(libs__options__options_help_hlds_llds_optimization_2_0,
		libs__options__options_help_2_0_i38);
MR_def_label(libs__options__options_help_2_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(libs__options__options_help_llds_llds_optimization_2_0,
		libs__options__options_help_2_0_i39);
MR_def_label(libs__options__options_help_2_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(libs__options__options_help_mlds_mlds_optimization_2_0,
		libs__options__options_help_2_0_i40);
MR_def_label(libs__options__options_help_2_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(libs__options__options_help_hlds_elds_optimization_2_0,
		libs__options__options_help_2_0_i41);
MR_def_label(libs__options__options_help_2_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(libs__options__options_help_output_optimization_2_0,
		libs__options__options_help_2_0_i42);
MR_def_label(libs__options__options_help_2_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(libs__options__options_help_target_code_compilation_2_0,
		libs__options__options_help_2_0_i43);
MR_def_label(libs__options__options_help_2_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(libs__options__options_help_link_2_0,
		libs__options__options_help_2_0_i44);
MR_def_label(libs__options__options_help_2_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(libs__options__options_help_build_system_2_0,
		libs__options__options_help_2_0_i45);
MR_def_label(libs__options__options_help_2_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(libs__options__options_help_misc_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___getopt_io__maybe_option_table_1_0);

MR_BEGIN_MODULE(libs__options_module39)
	MR_init_entry1(__Unify___libs__options__maybe_option_table_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___libs__options__maybe_option_table_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___libs__options__maybe_option_table_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(libs__options, option);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	MR_np_tailcall_ent(__Unify___getopt_io__maybe_option_table_1_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Compare___getopt_io__maybe_option_table_1_0);

MR_BEGIN_MODULE(libs__options_module40)
	MR_init_entry1(__Compare___libs__options__maybe_option_table_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___libs__options__maybe_option_table_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___libs__options__maybe_option_table_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(libs__options, option);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	MR_np_tailcall_ent(__Compare___getopt_io__maybe_option_table_1_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(libs__options_module41)
	MR_init_entry1(__Unify___libs__options__option_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___libs__options__option_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___libs__options__option_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_r1 == MR_r2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(private_builtin__builtin_compare_int_3_0);

MR_BEGIN_MODULE(libs__options_module42)
	MR_init_entry1(__Compare___libs__options__option_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___libs__options__option_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___libs__options__option_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(libs__options_module43)
	MR_init_entry1(__Unify___libs__options__option_category_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___libs__options__option_category_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___libs__options__option_category_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_r1 == MR_r2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(libs__options_module44)
	MR_init_entry1(__Compare___libs__options__option_category_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___libs__options__option_category_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___libs__options__option_category_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___tree234__tree234_2_0);

MR_BEGIN_MODULE(libs__options_module45)
	MR_init_entry1(__Unify___libs__options__option_table_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___libs__options__option_table_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___libs__options__option_table_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(libs__options, option);
	MR_tempr2 = MR_r2;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(getopt_io, option_data);
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

MR_BEGIN_MODULE(libs__options_module46)
	MR_init_entry1(__Compare___libs__options__option_table_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___libs__options__option_table_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___libs__options__option_table_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(libs__options, option);
	MR_tempr2 = MR_r2;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(getopt_io, option_data);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tempr2;
	MR_np_tailcall_ent(__Compare___tree234__tree234_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

static void mercury__libs__options_maybe_bunch_0(void)
{
	libs__options_module0();
	libs__options_module1();
	libs__options_module2();
	libs__options_module3();
	libs__options_module4();
	libs__options_module5();
	libs__options_module6();
	libs__options_module7();
	libs__options_module8();
	libs__options_module9();
	libs__options_module10();
	libs__options_module11();
	libs__options_module12();
	libs__options_module13();
	libs__options_module14();
	libs__options_module15();
	libs__options_module16();
	libs__options_module17();
	libs__options_module18();
	libs__options_module19();
	libs__options_module20();
	libs__options_module21();
	libs__options_module22();
	libs__options_module23();
	libs__options_module24();
	libs__options_module25();
	libs__options_module26();
	libs__options_module27();
	libs__options_module28();
	libs__options_module29();
	libs__options_module30();
	libs__options_module31();
	libs__options_module32();
	libs__options_module33();
	libs__options_module34();
	libs__options_module35();
	libs__options_module36();
	libs__options_module37();
	libs__options_module38();
	libs__options_module39();
}

static void mercury__libs__options_maybe_bunch_1(void)
{
	libs__options_module40();
	libs__options_module41();
	libs__options_module42();
	libs__options_module43();
	libs__options_module44();
	libs__options_module45();
	libs__options_module46();
}

/* suppress gcc -Wmissing-decls warnings */
void mercury__libs__options__init(void);
void mercury__libs__options__init_type_tables(void);
void mercury__libs__options__init_debugger(void);
#ifdef MR_DEEP_PROFILING
void mercury__libs__options__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp);
#endif
#ifdef MR_RECORD_TERM_SIZES
void mercury__libs__options__init_complexity_procs(void);
#endif

void mercury__libs__options__init(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	mercury__libs__options_maybe_bunch_0();
	mercury__libs__options_maybe_bunch_1();
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_libs__options__type_ctor_info_maybe_option_table_0,
		libs__options__maybe_option_table_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_libs__options__type_ctor_info_option_0,
		libs__options__option_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_libs__options__type_ctor_info_option_category_0,
		libs__options__option_category_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_libs__options__type_ctor_info_option_table_0,
		libs__options__option_table_0_0);
	mercury__libs__options__init_debugger();
}

void mercury__libs__options__init_type_tables(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	{
		MR_register_type_ctor_info(
		&mercury_data_libs__options__type_ctor_info_maybe_option_table_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_libs__options__type_ctor_info_option_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_libs__options__type_ctor_info_option_category_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_libs__options__type_ctor_info_option_table_0);
	}
}


void mercury__libs__options__init_debugger(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}

#ifdef MR_DEEP_PROFILING

void mercury__libs__options__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp)
{
	MR_write_out_module_proc_reps_start(procrep_fp, &mercury_data__module_common_layout__libs__options);
	MR_write_out_module_proc_reps_end(procrep_fp);
}

#endif

#ifdef MR_RECORD_TERM_SIZES

void mercury__libs__options__init_complexity_procs(void)
{
}

#endif

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;
