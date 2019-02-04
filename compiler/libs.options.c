/*
** Automatically generated from `options.m'
** by the Mercury compiler,
** version rotd-2012-03-21, configured for x86_64-unknown-linux-gnu.
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
#line 526 "../library/io.int"
#include "io.mh"

#line 28 "libs.options.c"
#line 536 "../library/io.int"
#include "time.mh"

#line 32 "libs.options.c"
#line 537 "../library/io.int"
#include "string.mh"

#line 36 "libs.options.c"
#line 56 "../library/dir.int"
#include "dir.mh"

#line 40 "libs.options.c"
#line 31 "../library/bitmap.int2"
#include "bitmap.mh"

#line 44 "libs.options.c"
#line 33 "../library/array.int2"
#include "array.mh"

#line 48 "libs.options.c"
#line 39 "../mdbcomp/mdbcomp.rtti_access.int2"
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


#ifdef MR_MSVC
#pragma pack(push, MR_BYTES_PER_WORD)
#endif
struct mercury_type_0 {
	MR_Integer f1;
};
#ifdef MR_MSVC
#pragma pack(pop)
#endif
MR_STATIC_LINKAGE const struct mercury_type_0 mercury_common_0[];


#ifdef MR_MSVC
#pragma pack(push, MR_BYTES_PER_WORD)
#endif
struct mercury_type_1 {
	MR_Integer f1;
	MR_Word * f2;
};
#ifdef MR_MSVC
#pragma pack(pop)
#endif
MR_STATIC_LINKAGE const struct mercury_type_1 mercury_common_1[];


#ifdef MR_MSVC
#pragma pack(push, MR_BYTES_PER_WORD)
#endif
struct mercury_type_2 {
	MR_Word * f1[2];
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
	MR_String f2;
};
#ifdef MR_MSVC
#pragma pack(pop)
#endif
MR_STATIC_LINKAGE const struct mercury_type_3 mercury_common_3[];


#ifdef MR_MSVC
#pragma pack(push, MR_BYTES_PER_WORD)
#endif
struct mercury_type_4 {
	MR_String f1;
	MR_Word * f2;
};
#ifdef MR_MSVC
#pragma pack(pop)
#endif
MR_STATIC_LINKAGE const struct mercury_type_4 mercury_common_4[];


#ifdef MR_MSVC
#pragma pack(push, MR_BYTES_PER_WORD)
#endif
struct mercury_type_5 {
	MR_String f1;
};
#ifdef MR_MSVC
#pragma pack(pop)
#endif
MR_STATIC_LINKAGE const struct mercury_type_5 mercury_common_5[];


#ifdef MR_MSVC
#pragma pack(push, MR_BYTES_PER_WORD)
#endif
struct mercury_type_6 {
	MR_Word * f1[3];
};
#ifdef MR_MSVC
#pragma pack(pop)
#endif
MR_STATIC_LINKAGE const struct mercury_type_6 mercury_common_6[];


#ifdef MR_MSVC
#pragma pack(push, MR_BYTES_PER_WORD)
#endif
struct mercury_type_7 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[3];
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

MR_STATIC_LINKAGE const struct mercury_type_1 mercury_vector_common_1_0[];

extern const MR_TypeCtorInfo_Struct
	mercury_data_libs__options__type_ctor_info_maybe_option_table_0,
	mercury_data_libs__options__type_ctor_info_option_0,
	mercury_data_libs__options__type_ctor_info_option_category_0,
	mercury_data_libs__options__type_ctor_info_option_table_0;
MR_decl_label5(libs__options__enable_opt_levels_4_0, 20,2,4,6,3)
MR_decl_label1(libs__options__handle_quoted_flag_4_0, 2)
MR_decl_label10(libs__options__inconsequential_options_1_0, 2,3,4,5,6,7,8,9,10,11)
MR_decl_label1(libs__options__inconsequential_options_1_0, 12)
MR_decl_label10(libs__options__long_option_2_0, 3,4,5,6,7,8,9,10,11,12)
MR_decl_label10(libs__options__long_option_2_0, 13,14,15,16,17,18,19,20,21,22)
MR_decl_label10(libs__options__long_option_2_0, 23,24,25,26,27,28,29,30,31,32)
MR_decl_label10(libs__options__long_option_2_0, 33,34,35,36,37,38,39,40,41,42)
MR_decl_label10(libs__options__long_option_2_0, 43,44,45,46,47,48,49,50,51,52)
MR_decl_label10(libs__options__long_option_2_0, 53,54,55,56,57,58,59,60,61,62)
MR_decl_label10(libs__options__long_option_2_0, 63,64,65,66,67,68,69,70,71,72)
MR_decl_label10(libs__options__long_option_2_0, 73,74,75,76,77,78,79,80,81,82)
MR_decl_label10(libs__options__long_option_2_0, 83,84,85,86,87,88,89,90,91,92)
MR_decl_label10(libs__options__long_option_2_0, 93,94,95,96,97,98,99,100,101,102)
MR_decl_label10(libs__options__long_option_2_0, 103,104,105,106,107,108,109,110,111,112)
MR_decl_label10(libs__options__long_option_2_0, 113,114,115,116,117,118,119,120,121,122)
MR_decl_label10(libs__options__long_option_2_0, 123,124,125,126,127,128,129,130,131,132)
MR_decl_label10(libs__options__long_option_2_0, 133,134,135,136,137,138,139,140,141,142)
MR_decl_label10(libs__options__long_option_2_0, 143,144,145,146,147,148,149,150,151,152)
MR_decl_label10(libs__options__long_option_2_0, 153,154,155,156,157,158,159,160,161,162)
MR_decl_label10(libs__options__long_option_2_0, 163,164,165,166,167,168,169,170,171,172)
MR_decl_label10(libs__options__long_option_2_0, 173,174,175,176,177,178,179,180,181,182)
MR_decl_label10(libs__options__long_option_2_0, 183,184,185,186,187,188,189,190,191,192)
MR_decl_label10(libs__options__long_option_2_0, 193,194,195,196,197,198,199,200,201,202)
MR_decl_label10(libs__options__long_option_2_0, 203,204,205,206,207,208,209,210,211,212)
MR_decl_label10(libs__options__long_option_2_0, 213,214,215,216,217,218,219,220,221,222)
MR_decl_label10(libs__options__long_option_2_0, 223,224,225,226,227,228,229,230,231,232)
MR_decl_label10(libs__options__long_option_2_0, 233,234,235,236,237,238,239,240,241,242)
MR_decl_label10(libs__options__long_option_2_0, 243,244,245,246,247,248,249,250,251,252)
MR_decl_label10(libs__options__long_option_2_0, 253,254,255,256,257,258,259,260,261,262)
MR_decl_label10(libs__options__long_option_2_0, 263,264,265,266,267,268,269,270,271,272)
MR_decl_label10(libs__options__long_option_2_0, 273,274,275,276,277,278,279,280,281,282)
MR_decl_label10(libs__options__long_option_2_0, 283,284,285,286,287,288,289,290,291,292)
MR_decl_label10(libs__options__long_option_2_0, 293,294,295,296,297,298,299,300,301,302)
MR_decl_label10(libs__options__long_option_2_0, 303,304,305,306,307,308,309,310,311,312)
MR_decl_label10(libs__options__long_option_2_0, 313,314,315,316,317,318,319,320,321,322)
MR_decl_label10(libs__options__long_option_2_0, 323,324,325,326,327,328,329,330,331,332)
MR_decl_label10(libs__options__long_option_2_0, 333,334,335,336,337,338,339,340,341,342)
MR_decl_label10(libs__options__long_option_2_0, 343,344,345,346,347,348,349,350,351,352)
MR_decl_label10(libs__options__long_option_2_0, 353,354,355,356,357,358,359,360,361,362)
MR_decl_label10(libs__options__long_option_2_0, 363,364,365,366,367,368,369,370,371,372)
MR_decl_label10(libs__options__long_option_2_0, 373,374,375,376,377,378,379,380,381,382)
MR_decl_label10(libs__options__long_option_2_0, 383,384,385,386,387,388,389,390,391,392)
MR_decl_label10(libs__options__long_option_2_0, 393,394,395,396,397,398,399,400,401,402)
MR_decl_label10(libs__options__long_option_2_0, 403,404,405,406,407,408,409,410,411,412)
MR_decl_label10(libs__options__long_option_2_0, 413,414,415,416,417,418,419,420,421,422)
MR_decl_label10(libs__options__long_option_2_0, 423,424,425,426,427,428,429,430,431,432)
MR_decl_label10(libs__options__long_option_2_0, 433,434,435,436,437,438,439,440,441,442)
MR_decl_label10(libs__options__long_option_2_0, 443,444,445,446,447,448,449,450,451,452)
MR_decl_label10(libs__options__long_option_2_0, 453,454,455,456,457,458,459,460,461,462)
MR_decl_label10(libs__options__long_option_2_0, 463,464,465,466,467,468,469,470,471,472)
MR_decl_label10(libs__options__long_option_2_0, 473,474,475,476,477,478,479,480,481,482)
MR_decl_label10(libs__options__long_option_2_0, 483,484,485,486,487,488,489,490,491,492)
MR_decl_label10(libs__options__long_option_2_0, 493,494,495,496,497,498,499,500,501,502)
MR_decl_label10(libs__options__long_option_2_0, 503,504,505,506,507,508,509,510,511,512)
MR_decl_label10(libs__options__long_option_2_0, 513,514,515,516,517,518,519,520,521,522)
MR_decl_label10(libs__options__long_option_2_0, 523,524,525,526,527,528,529,530,531,532)
MR_decl_label10(libs__options__long_option_2_0, 533,534,535,536,537,538,539,540,541,542)
MR_decl_label10(libs__options__long_option_2_0, 543,544,545,546,547,548,549,550,551,552)
MR_decl_label10(libs__options__long_option_2_0, 553,554,555,556,557,558,559,560,561,562)
MR_decl_label10(libs__options__long_option_2_0, 563,564,565,566,567,568,569,570,571,572)
MR_decl_label10(libs__options__long_option_2_0, 573,574,575,576,577,578,579,580,581,582)
MR_decl_label10(libs__options__long_option_2_0, 583,584,585,586,587,588,589,590,591,592)
MR_decl_label10(libs__options__long_option_2_0, 593,594,595,596,597,598,599,600,601,602)
MR_decl_label10(libs__options__long_option_2_0, 603,604,605,606,607,608,609,610,611,612)
MR_decl_label10(libs__options__long_option_2_0, 613,614,615,616,617,618,619,620,621,622)
MR_decl_label10(libs__options__long_option_2_0, 623,624,625,626,627,628,629,630,631,632)
MR_decl_label10(libs__options__long_option_2_0, 633,634,635,636,637,638,639,640,641,642)
MR_decl_label10(libs__options__long_option_2_0, 643,644,645,646,647,648,649,650,651,652)
MR_decl_label10(libs__options__long_option_2_0, 653,654,655,656,657,658,659,660,661,662)
MR_decl_label10(libs__options__long_option_2_0, 663,664,665,666,667,668,669,670,671,672)
MR_decl_label10(libs__options__long_option_2_0, 673,674,675,676,677,678,679,680,681,682)
MR_decl_label10(libs__options__long_option_2_0, 683,684,685,686,687,688,689,690,691,692)
MR_decl_label10(libs__options__long_option_2_0, 693,694,695,696,697,698,699,700,701,702)
MR_decl_label10(libs__options__long_option_2_0, 703,704,705,706,707,708,709,710,711,712)
MR_decl_label10(libs__options__long_option_2_0, 713,714,715,716,717,718,719,720,721,722)
MR_decl_label10(libs__options__long_option_2_0, 723,724,725,726,727,728,729,730,731,732)
MR_decl_label10(libs__options__long_option_2_0, 733,734,735,736,737,738,739,740,741,742)
MR_decl_label10(libs__options__long_option_2_0, 743,744,745,746,747,748,749,750,751,752)
MR_decl_label10(libs__options__long_option_2_0, 753,754,755,756,757,758,759,760,761,762)
MR_decl_label10(libs__options__long_option_2_0, 763,764,765,766,767,768,769,770,771,772)
MR_decl_label10(libs__options__long_option_2_0, 773,774,775,776,777,778,779,780,781,782)
MR_decl_label7(libs__options__long_option_2_0, 783,784,785,786,787,788,1)
MR_decl_label8(libs__options__opt_level_3_0, 3,15,4,22,23,24,25,1)
MR_decl_label2(libs__options__option_defaults_2_0, 1,3)
MR_decl_label10(libs__options__option_defaults_2_2_0, 3,4,5,6,7,8,9,10,11,12)
MR_decl_label3(libs__options__option_defaults_2_2_0, 13,14,15)
MR_decl_label3(libs__options__option_defaults_2_2_1, 2,3,4)
MR_decl_label10(libs__options__options_help_2_0, 2,3,4,5,6,7,8,9,10,11)
MR_decl_label10(libs__options__options_help_2_0, 12,13,14,15,16,17,18,19,20,21)
MR_decl_label10(libs__options__options_help_2_0, 22,23,24,25,26,27,28,29,30,31)
MR_decl_label10(libs__options__options_help_2_0, 32,33,34,35,36,37,38,39,40,41)
MR_decl_label7(libs__options__options_help_2_0, 42,43,44,45,46,47,48)
MR_decl_label1(libs__options__options_help_aux_output_2_0, 2)
MR_decl_label1(libs__options__options_help_build_system_2_0, 2)
MR_decl_label10(libs__options__options_help_code_generation_2_0, 2,3,4,5,6,7,8,9,10,11)
MR_decl_label10(libs__options__options_help_code_generation_2_0, 12,13,14,15,16,17,18,19,20,21)
MR_decl_label7(libs__options__options_help_code_generation_2_0, 22,23,24,25,26,27,28)
MR_decl_label10(libs__options__options_help_compilation_model_2_0, 2,3,4,5,6,7,8,9,10,11)
MR_decl_label9(libs__options__options_help_compilation_model_2_0, 12,13,14,15,16,17,18,19,20)
MR_decl_label10(libs__options__options_help_ctgc_2_0, 2,3,4,5,6,7,8,9,10,11)
MR_decl_label10(libs__options__options_help_ctgc_2_0, 12,13,14,15,16,17,18,19,20,21)
MR_decl_label10(libs__options__options_help_ctgc_2_0, 22,23,24,25,26,27,28,29,30,31)
MR_decl_label4(libs__options__options_help_ctgc_2_0, 32,33,34,35)
MR_decl_label10(libs__options__options_help_hlds_elds_optimization_2_0, 2,3,4,5,6,7,8,9,10,11)
MR_decl_label5(libs__options__options_help_hlds_elds_optimization_2_0, 12,13,14,15,16)
MR_decl_label1(libs__options__options_help_hlds_hlds_optimization_2_0, 2)
MR_decl_label10(libs__options__options_help_hlds_llds_optimization_2_0, 2,3,4,5,6,7,8,9,10,11)
MR_decl_label10(libs__options__options_help_hlds_llds_optimization_2_0, 12,13,14,15,16,17,18,19,20,21)
MR_decl_label5(libs__options__options_help_hlds_llds_optimization_2_0, 22,23,24,25,26)
MR_decl_label1(libs__options__options_help_link_2_0, 2)
MR_decl_label10(libs__options__options_help_llds_llds_optimization_2_0, 2,3,4,5,6,7,8,9,10,11)
MR_decl_label10(libs__options__options_help_llds_llds_optimization_2_0, 12,13,14,15,16,17,18,19,20,21)
MR_decl_label5(libs__options__options_help_llds_llds_optimization_2_0, 22,23,24,25,26)
MR_decl_label10(libs__options__options_help_misc_2_0, 2,3,4,5,6,7,8,9,10,11)
MR_decl_label10(libs__options__options_help_misc_2_0, 12,13,14,15,16,17,18,19,20,21)
MR_decl_label8(libs__options__options_help_misc_2_0, 22,23,24,25,26,27,28,29)
MR_decl_label10(libs__options__options_help_mlds_mlds_optimization_2_0, 2,3,4,5,6,7,8,9,10,11)
MR_decl_label10(libs__options__options_help_mlds_mlds_optimization_2_0, 12,13,14,15,16,17,18,19,20,21)
MR_decl_label10(libs__options__options_help_mlds_mlds_optimization_2_0, 22,23,24,25,26,27,28,29,30,31)
MR_decl_label7(libs__options__options_help_mlds_mlds_optimization_2_0, 32,33,34,35,36,37,38)
MR_decl_label10(libs__options__options_help_optimization_2_0, 2,3,4,5,6,7,8,9,10,11)
MR_decl_label10(libs__options__options_help_optimization_2_0, 12,13,14,15,16,17,18,19,20,21)
MR_decl_label5(libs__options__options_help_optimization_2_0, 22,23,24,25,26)
MR_decl_label1(libs__options__options_help_output_2_0, 2)
MR_decl_label10(libs__options__options_help_output_optimization_2_0, 2,3,4,5,6,7,8,9,10,11)
MR_decl_label10(libs__options__options_help_output_optimization_2_0, 12,13,14,15,16,17,18,19,20,21)
MR_decl_label10(libs__options__options_help_output_optimization_2_0, 22,23,24,25,26,27,28,29,30,31)
MR_decl_label4(libs__options__options_help_output_optimization_2_0, 32,33,34,35)
MR_decl_label10(libs__options__options_help_target_code_compilation_2_0, 2,3,4,5,6,7,8,9,10,11)
MR_decl_label10(libs__options__options_help_termination_2_0, 2,3,4,5,6,7,8,9,10,11)
MR_decl_label10(libs__options__options_help_termination_2_0, 12,13,14,15,16,17,18,19,20,21)
MR_decl_label10(libs__options__options_help_termination_2_0, 22,23,24,25,26,27,28,29,30,31)
MR_decl_label1(libs__options__options_help_termination_2_0, 32)
MR_decl_label10(libs__options__options_help_verbosity_2_0, 2,3,4,5,6,7,8,9,10,11)
MR_decl_label3(libs__options__options_help_verbosity_2_0, 12,13,14)
MR_decl_label1(libs__options__options_help_warning_2_0, 2)
MR_decl_label3(libs__options__override_options_3_0, 10,3,4)
MR_decl_label2(libs__options__set_opt_level_3_0, 2,3)
MR_decl_label10(libs__options__short_option_2_0, 3,4,5,6,7,8,9,10,11,12)
MR_decl_label10(libs__options__short_option_2_0, 13,14,15,16,17,18,19,20,21,22)
MR_decl_label10(libs__options__short_option_2_0, 23,24,25,26,27,28,29,30,31,32)
MR_decl_label5(libs__options__short_option_2_0, 33,34,35,36,1)
MR_decl_label10(libs__options__special_handler_4_0, 6,3,10,18,15,25,26,27,22,34)
MR_decl_label10(libs__options__special_handler_4_0, 31,37,45,42,49,58,56,61,62,54)
MR_decl_label10(libs__options__special_handler_4_0, 65,73,70,77,88,99,97,153,154,155)
MR_decl_label10(libs__options__special_handler_4_0, 157,150,164,172,169,180,179,183,178,176)
MR_decl_label10(libs__options__special_handler_4_0, 191,193,194,188,197,203,213,207,225,224)
MR_decl_label10(libs__options__special_handler_4_0, 223,221,235,232,240,242,247,238,252,250)
MR_decl_label10(libs__options__special_handler_4_0, 258,255,264,265,267,261,270,274,278,282)
MR_decl_label10(libs__options__special_handler_4_0, 286,290,294,298,302,306,313,310,316,320)
MR_decl_label8(libs__options__special_handler_4_0, 327,328,330,324,333,341,343,1)
MR_decl_label5(libs__options__write_tabbed_lines_3_0, 12,4,5,6,14)
MR_decl_label2(fn__libs__options__append_to_accumulating_option_2_0, 2,4)
MR_decl_label3(fn__libs__options__option_table_add_mercury_library_directory_2_0, 4,6,8)
MR_decl_label10(fn__libs__options__quote_arg_1_0, 4,10,12,13,11,50,7,2,20,21)
MR_decl_label10(fn__libs__options__quote_arg_1_0, 23,28,34,35,36,37,32,39,30,26)
MR_decl_label3(fn__libs__options__quote_arg_1_0, 41,42,43)
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

static const struct mercury_type_0 mercury_common_0[29] =
{
{
1
},
{
0
},
{
79
},
{
1000
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
4000
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
};

static const struct mercury_type_1 mercury_common_1[714] =
{
{
155,
MR_TAG_COMMON(1,0,0)
},
{
154,
MR_TAG_COMMON(1,0,1)
},
{
153,
MR_TAG_COMMON(2,0,0)
},
{
152,
MR_TAG_COMMON(1,0,1)
},
{
151,
MR_TAG_COMMON(1,0,1)
},
{
150,
MR_TAG_COMMON(1,0,1)
},
{
149,
MR_TAG_COMMON(1,0,1)
},
{
3,
MR_tbmkword(0, 0)
},
{
148,
MR_TAG_COMMON(3,1,7)
},
{
147,
MR_TAG_COMMON(3,1,7)
},
{
146,
MR_TAG_COMMON(1,0,1)
},
{
145,
MR_TAG_COMMON(3,3,0)
},
{
144,
MR_TAG_COMMON(3,3,0)
},
{
143,
MR_TAG_COMMON(3,3,0)
},
{
142,
MR_TAG_COMMON(3,1,7)
},
{
141,
MR_TAG_COMMON(3,1,7)
},
{
140,
MR_TAG_COMMON(3,1,7)
},
{
139,
MR_TAG_COMMON(3,1,7)
},
{
138,
MR_TAG_COMMON(1,0,1)
},
{
137,
MR_TAG_COMMON(1,0,1)
},
{
136,
MR_TAG_COMMON(2,0,2)
},
{
135,
MR_TAG_COMMON(1,0,1)
},
{
134,
MR_TAG_COMMON(1,0,1)
},
{
133,
MR_TAG_COMMON(1,0,0)
},
{
132,
MR_TAG_COMMON(1,0,1)
},
{
131,
MR_TAG_COMMON(1,0,1)
},
{
130,
MR_TAG_COMMON(1,0,1)
},
{
129,
MR_TAG_COMMON(2,0,3)
},
{
128,
MR_TAG_COMMON(1,0,0)
},
{
127,
MR_TAG_COMMON(1,0,1)
},
{
126,
MR_TAG_COMMON(3,3,0)
},
{
125,
MR_TAG_COMMON(1,0,1)
},
{
124,
MR_TAG_COMMON(1,0,1)
},
{
123,
MR_TAG_COMMON(3,1,7)
},
{
122,
MR_TAG_COMMON(1,0,1)
},
{
121,
MR_TAG_COMMON(1,0,1)
},
{
120,
MR_TAG_COMMON(1,0,1)
},
{
119,
MR_TAG_COMMON(1,0,1)
},
{
118,
MR_TAG_COMMON(1,0,1)
},
{
117,
MR_TAG_COMMON(1,0,1)
},
{
116,
MR_TAG_COMMON(1,0,1)
},
{
115,
MR_TAG_COMMON(3,3,1)
},
{
114,
MR_TAG_COMMON(1,0,0)
},
{
113,
MR_TAG_COMMON(1,0,1)
},
{
112,
MR_TAG_COMMON(1,0,1)
},
{
111,
MR_TAG_COMMON(1,0,1)
},
{
639,
MR_TAG_COMMON(3,3,2)
},
{
638,
MR_TAG_COMMON(3,3,2)
},
{
637,
MR_tbmkword(0, 3)
},
{
636,
MR_TAG_COMMON(1,0,1)
},
{
635,
MR_TAG_COMMON(3,1,7)
},
{
634,
MR_TAG_COMMON(1,0,1)
},
{
633,
MR_TAG_COMMON(1,0,1)
},
{
632,
MR_TAG_COMMON(1,0,0)
},
{
631,
MR_TAG_COMMON(1,0,0)
},
{
630,
MR_TAG_COMMON(3,1,7)
},
{
3,
MR_TAG_COMMON(1,4,0)
},
{
629,
MR_TAG_COMMON(3,1,56)
},
{
628,
MR_TAG_COMMON(1,0,1)
},
{
627,
MR_TAG_COMMON(1,0,1)
},
{
626,
MR_TAG_COMMON(3,1,56)
},
{
2,
MR_TAG_COMMON(1,5,0)
},
{
625,
MR_TAG_COMMON(3,1,61)
},
{
3,
MR_TAG_COMMON(1,4,1)
},
{
624,
MR_TAG_COMMON(3,1,63)
},
{
623,
MR_tbmkword(0, 5)
},
{
622,
MR_TAG_COMMON(3,1,7)
},
{
621,
MR_TAG_COMMON(3,1,7)
},
{
620,
MR_TAG_COMMON(3,1,7)
},
{
619,
MR_TAG_COMMON(3,1,7)
},
{
618,
MR_TAG_COMMON(3,3,3)
},
{
617,
MR_TAG_COMMON(3,3,4)
},
{
2,
MR_tbmkword(0, 0)
},
{
615,
MR_TAG_COMMON(3,1,72)
},
{
616,
MR_tbmkword(0, 3)
},
{
614,
MR_TAG_COMMON(1,0,0)
},
{
613,
MR_TAG_COMMON(3,3,5)
},
{
611,
MR_TAG_COMMON(3,1,72)
},
{
612,
MR_TAG_COMMON(3,1,72)
},
{
610,
MR_TAG_COMMON(1,0,1)
},
{
609,
MR_TAG_COMMON(1,0,1)
},
{
608,
MR_TAG_COMMON(2,0,0)
},
{
607,
MR_TAG_COMMON(1,0,1)
},
{
606,
MR_TAG_COMMON(1,0,1)
},
{
605,
MR_TAG_COMMON(1,0,1)
},
{
317,
MR_TAG_COMMON(1,0,0)
},
{
316,
MR_TAG_COMMON(1,0,0)
},
{
315,
MR_TAG_COMMON(1,0,1)
},
{
314,
MR_TAG_COMMON(2,0,4)
},
{
313,
MR_TAG_COMMON(2,0,5)
},
{
312,
MR_TAG_COMMON(1,0,0)
},
{
311,
MR_TAG_COMMON(2,0,6)
},
{
310,
MR_TAG_COMMON(2,0,7)
},
{
309,
MR_TAG_COMMON(2,0,8)
},
{
308,
MR_TAG_COMMON(2,0,1)
},
{
307,
MR_TAG_COMMON(1,0,1)
},
{
306,
MR_TAG_COMMON(2,0,1)
},
{
305,
MR_TAG_COMMON(2,0,8)
},
{
304,
MR_TAG_COMMON(2,0,1)
},
{
303,
MR_TAG_COMMON(2,0,8)
},
{
302,
MR_TAG_COMMON(1,0,1)
},
{
301,
MR_TAG_COMMON(1,0,0)
},
{
300,
MR_TAG_COMMON(1,0,0)
},
{
299,
MR_tbmkword(0, 1)
},
{
298,
MR_TAG_COMMON(1,0,0)
},
{
297,
MR_TAG_COMMON(1,0,1)
},
{
296,
MR_TAG_COMMON(1,0,1)
},
{
295,
MR_TAG_COMMON(1,0,0)
},
{
294,
MR_TAG_COMMON(1,0,1)
},
{
293,
MR_TAG_COMMON(1,0,1)
},
{
254,
MR_TAG_COMMON(1,0,1)
},
{
252,
MR_TAG_COMMON(1,0,1)
},
{
253,
MR_TAG_COMMON(1,0,1)
},
{
251,
MR_TAG_COMMON(1,0,1)
},
{
250,
MR_TAG_COMMON(1,0,1)
},
{
249,
MR_TAG_COMMON(1,0,1)
},
{
248,
MR_TAG_COMMON(1,0,1)
},
{
247,
MR_TAG_COMMON(1,0,1)
},
{
246,
MR_TAG_COMMON(1,0,1)
},
{
245,
MR_TAG_COMMON(1,0,1)
},
{
244,
MR_TAG_COMMON(1,0,1)
},
{
243,
MR_TAG_COMMON(1,0,0)
},
{
241,
MR_TAG_COMMON(1,0,0)
},
{
240,
MR_TAG_COMMON(1,0,0)
},
{
239,
MR_TAG_COMMON(1,0,0)
},
{
237,
MR_TAG_COMMON(1,0,0)
},
{
236,
MR_TAG_COMMON(1,0,0)
},
{
235,
MR_TAG_COMMON(1,0,1)
},
{
238,
MR_TAG_COMMON(2,0,9)
},
{
234,
MR_TAG_COMMON(2,0,10)
},
{
233,
MR_TAG_COMMON(2,0,11)
},
{
232,
MR_TAG_COMMON(2,0,12)
},
{
231,
MR_TAG_COMMON(2,0,1)
},
{
230,
MR_TAG_COMMON(2,0,1)
},
{
229,
MR_TAG_COMMON(2,0,6)
},
{
228,
MR_TAG_COMMON(3,3,6)
},
{
242,
MR_TAG_COMMON(1,0,1)
},
{
227,
MR_TAG_COMMON(1,0,1)
},
{
219,
MR_TAG_COMMON(1,0,0)
},
{
218,
MR_TAG_COMMON(1,0,1)
},
{
217,
MR_TAG_COMMON(1,0,1)
},
{
216,
MR_TAG_COMMON(1,0,1)
},
{
215,
MR_TAG_COMMON(1,0,1)
},
{
226,
MR_TAG_COMMON(1,0,1)
},
{
225,
MR_TAG_COMMON(1,0,1)
},
{
224,
MR_TAG_COMMON(1,0,0)
},
{
223,
MR_TAG_COMMON(1,0,1)
},
{
222,
MR_TAG_COMMON(1,0,1)
},
{
221,
MR_TAG_COMMON(1,0,1)
},
{
220,
MR_TAG_COMMON(3,3,7)
},
{
214,
MR_TAG_COMMON(1,0,1)
},
{
213,
MR_TAG_COMMON(1,0,1)
},
{
212,
MR_TAG_COMMON(1,0,1)
},
{
211,
MR_TAG_COMMON(1,0,1)
},
{
210,
MR_TAG_COMMON(3,3,8)
},
{
209,
MR_TAG_COMMON(3,3,0)
},
{
208,
MR_TAG_COMMON(1,0,1)
},
{
207,
MR_TAG_COMMON(1,0,1)
},
{
206,
MR_TAG_COMMON(1,0,1)
},
{
205,
MR_TAG_COMMON(1,0,1)
},
{
204,
MR_TAG_COMMON(1,0,0)
},
{
203,
MR_TAG_COMMON(1,0,1)
},
{
202,
MR_TAG_COMMON(1,0,1)
},
{
201,
MR_TAG_COMMON(1,0,1)
},
{
200,
MR_TAG_COMMON(1,0,0)
},
{
199,
MR_TAG_COMMON(1,0,0)
},
{
198,
MR_TAG_COMMON(1,0,0)
},
{
197,
MR_TAG_COMMON(1,0,0)
},
{
196,
MR_TAG_COMMON(1,0,1)
},
{
195,
MR_TAG_COMMON(1,0,1)
},
{
194,
MR_TAG_COMMON(1,0,0)
},
{
193,
MR_TAG_COMMON(1,0,1)
},
{
192,
MR_TAG_COMMON(1,0,1)
},
{
191,
MR_TAG_COMMON(1,0,1)
},
{
190,
MR_TAG_COMMON(1,0,1)
},
{
189,
MR_TAG_COMMON(1,0,1)
},
{
188,
MR_TAG_COMMON(1,0,1)
},
{
187,
MR_TAG_COMMON(1,0,1)
},
{
186,
MR_tbmkword(0, 0)
},
{
185,
MR_tbmkword(0, 0)
},
{
184,
MR_tbmkword(0, 0)
},
{
183,
MR_tbmkword(0, 1)
},
{
182,
MR_TAG_COMMON(1,0,1)
},
{
181,
MR_TAG_COMMON(1,0,1)
},
{
180,
MR_tbmkword(0, 0)
},
{
179,
MR_tbmkword(0, 0)
},
{
178,
MR_tbmkword(0, 0)
},
{
177,
MR_tbmkword(0, 0)
},
{
174,
MR_tbmkword(0, 0)
},
{
173,
MR_tbmkword(0, 0)
},
{
176,
MR_tbmkword(0, 0)
},
{
175,
MR_tbmkword(0, 0)
},
{
172,
MR_tbmkword(0, 0)
},
{
171,
MR_tbmkword(0, 0)
},
{
170,
MR_tbmkword(0, 0)
},
{
169,
MR_TAG_COMMON(3,3,9)
},
{
168,
MR_tbmkword(0, 3)
},
{
292,
MR_TAG_COMMON(1,0,0)
},
{
291,
MR_TAG_COMMON(1,0,1)
},
{
290,
MR_TAG_COMMON(1,0,0)
},
{
289,
MR_TAG_COMMON(1,0,1)
},
{
288,
MR_TAG_COMMON(2,0,0)
},
{
287,
MR_TAG_COMMON(2,0,13)
},
{
286,
MR_TAG_COMMON(2,0,0)
},
{
285,
MR_TAG_COMMON(2,0,13)
},
{
284,
MR_TAG_COMMON(2,0,0)
},
{
283,
MR_TAG_COMMON(2,0,8)
},
{
281,
MR_TAG_COMMON(2,0,11)
},
{
280,
MR_TAG_COMMON(2,0,11)
},
{
279,
MR_TAG_COMMON(1,0,1)
},
{
278,
MR_TAG_COMMON(1,0,1)
},
{
277,
MR_TAG_COMMON(1,0,1)
},
{
276,
MR_TAG_COMMON(1,0,1)
},
{
275,
MR_TAG_COMMON(1,0,1)
},
{
273,
MR_TAG_COMMON(1,0,1)
},
{
274,
MR_TAG_COMMON(1,0,0)
},
{
272,
MR_TAG_COMMON(1,0,0)
},
{
271,
MR_TAG_COMMON(1,0,0)
},
{
270,
MR_TAG_COMMON(1,0,0)
},
{
269,
MR_TAG_COMMON(1,0,0)
},
{
268,
MR_TAG_COMMON(1,0,1)
},
{
267,
MR_TAG_COMMON(1,0,1)
},
{
266,
MR_TAG_COMMON(1,0,0)
},
{
265,
MR_TAG_COMMON(1,0,1)
},
{
264,
MR_TAG_COMMON(1,0,1)
},
{
263,
MR_TAG_COMMON(1,0,1)
},
{
262,
MR_TAG_COMMON(1,0,1)
},
{
261,
MR_TAG_COMMON(1,0,1)
},
{
260,
MR_TAG_COMMON(1,0,1)
},
{
259,
MR_TAG_COMMON(1,0,1)
},
{
258,
MR_TAG_COMMON(1,0,1)
},
{
257,
MR_TAG_COMMON(1,0,1)
},
{
256,
MR_TAG_COMMON(1,0,1)
},
{
255,
MR_TAG_COMMON(3,1,7)
},
{
167,
MR_TAG_COMMON(3,3,0)
},
{
166,
MR_TAG_COMMON(2,0,14)
},
{
165,
MR_TAG_COMMON(2,0,15)
},
{
164,
MR_tbmkword(0, 1)
},
{
163,
MR_TAG_COMMON(1,0,0)
},
{
162,
MR_TAG_COMMON(1,0,1)
},
{
161,
MR_TAG_COMMON(1,0,1)
},
{
160,
MR_TAG_COMMON(1,0,1)
},
{
158,
MR_TAG_COMMON(1,0,0)
},
{
157,
MR_TAG_COMMON(1,0,0)
},
{
156,
MR_TAG_COMMON(1,0,0)
},
{
159,
MR_tbmkword(0, 0)
},
{
604,
MR_TAG_COMMON(3,3,10)
},
{
603,
MR_TAG_COMMON(3,3,0)
},
{
602,
MR_TAG_COMMON(3,3,11)
},
{
601,
MR_TAG_COMMON(1,0,1)
},
{
600,
MR_TAG_COMMON(3,3,12)
},
{
599,
MR_TAG_COMMON(3,3,0)
},
{
598,
MR_TAG_COMMON(3,3,13)
},
{
597,
MR_TAG_COMMON(3,3,14)
},
{
596,
MR_TAG_COMMON(3,3,13)
},
{
595,
MR_TAG_COMMON(3,3,14)
},
{
594,
MR_TAG_COMMON(3,3,15)
},
{
589,
MR_TAG_COMMON(3,3,0)
},
{
588,
MR_TAG_COMMON(3,3,16)
},
{
587,
MR_TAG_COMMON(3,3,0)
},
{
586,
MR_TAG_COMMON(3,3,16)
},
{
585,
MR_TAG_COMMON(3,3,17)
},
{
584,
MR_TAG_COMMON(3,3,18)
},
{
583,
MR_TAG_COMMON(3,3,0)
},
{
582,
MR_TAG_COMMON(3,3,0)
},
{
593,
MR_TAG_COMMON(3,3,19)
},
{
592,
MR_TAG_COMMON(3,3,19)
},
{
591,
MR_TAG_COMMON(3,3,19)
},
{
590,
MR_TAG_COMMON(3,3,19)
},
{
581,
MR_TAG_COMMON(3,3,0)
},
{
580,
MR_TAG_COMMON(3,3,0)
},
{
579,
MR_TAG_COMMON(3,3,0)
},
{
578,
MR_TAG_COMMON(3,3,0)
},
{
577,
MR_TAG_COMMON(3,3,0)
},
{
576,
MR_TAG_COMMON(3,3,0)
},
{
575,
MR_TAG_COMMON(3,3,0)
},
{
574,
MR_TAG_COMMON(3,3,0)
},
{
573,
MR_TAG_COMMON(3,3,20)
},
{
572,
MR_TAG_COMMON(3,3,21)
},
{
571,
MR_TAG_COMMON(3,3,22)
},
{
570,
MR_TAG_COMMON(3,3,23)
},
{
569,
MR_TAG_COMMON(3,3,0)
},
{
568,
MR_TAG_COMMON(3,3,0)
},
{
567,
MR_TAG_COMMON(3,1,7)
},
{
566,
MR_TAG_COMMON(3,3,0)
},
{
565,
MR_TAG_COMMON(3,3,24)
},
{
564,
MR_TAG_COMMON(3,3,25)
},
{
563,
MR_TAG_COMMON(3,3,26)
},
{
562,
MR_TAG_COMMON(3,3,0)
},
{
561,
MR_TAG_COMMON(3,3,27)
},
{
560,
MR_TAG_COMMON(3,3,28)
},
{
559,
MR_TAG_COMMON(3,1,7)
},
{
558,
MR_TAG_COMMON(3,1,7)
},
{
557,
MR_TAG_COMMON(1,0,1)
},
{
556,
MR_TAG_COMMON(3,1,7)
},
{
555,
MR_TAG_COMMON(1,0,0)
},
{
554,
MR_TAG_COMMON(1,0,0)
},
{
553,
MR_TAG_COMMON(1,0,0)
},
{
551,
MR_TAG_COMMON(1,0,0)
},
{
552,
MR_TAG_COMMON(1,0,0)
},
{
550,
MR_tbmkword(0, 3)
},
{
549,
MR_TAG_COMMON(3,3,29)
},
{
548,
MR_tbmkword(0, 3)
},
{
547,
MR_TAG_COMMON(3,3,29)
},
{
546,
MR_TAG_COMMON(3,1,7)
},
{
545,
MR_TAG_COMMON(3,1,7)
},
{
544,
MR_TAG_COMMON(3,1,7)
},
{
543,
MR_tbmkword(0, 4)
},
{
542,
MR_TAG_COMMON(3,1,72)
},
{
540,
MR_TAG_COMMON(3,1,7)
},
{
541,
MR_tbmkword(0, 3)
},
{
538,
MR_TAG_COMMON(3,1,7)
},
{
539,
MR_tbmkword(0, 3)
},
{
536,
MR_TAG_COMMON(3,1,7)
},
{
537,
MR_tbmkword(0, 3)
},
{
535,
MR_TAG_COMMON(3,1,7)
},
{
534,
MR_TAG_COMMON(3,1,7)
},
{
533,
MR_TAG_COMMON(3,1,7)
},
{
532,
MR_TAG_COMMON(3,1,7)
},
{
531,
MR_tbmkword(0, 3)
},
{
530,
MR_TAG_COMMON(3,1,7)
},
{
529,
MR_tbmkword(0, 3)
},
{
528,
MR_TAG_COMMON(3,1,7)
},
{
527,
MR_TAG_COMMON(3,3,0)
},
{
657,
MR_TAG_COMMON(1,0,1)
},
{
656,
MR_TAG_COMMON(1,0,1)
},
{
655,
MR_TAG_COMMON(3,3,0)
},
{
654,
MR_TAG_COMMON(1,0,1)
},
{
653,
MR_TAG_COMMON(2,0,1)
},
{
652,
MR_TAG_COMMON(1,0,1)
},
{
651,
MR_TAG_COMMON(1,0,1)
},
{
650,
MR_TAG_COMMON(3,3,0)
},
{
649,
MR_TAG_COMMON(1,0,1)
},
{
648,
MR_TAG_COMMON(3,3,0)
},
{
647,
MR_TAG_COMMON(3,1,7)
},
{
646,
MR_TAG_COMMON(1,0,1)
},
{
645,
MR_TAG_COMMON(3,3,0)
},
{
644,
MR_TAG_COMMON(1,0,1)
},
{
643,
MR_TAG_COMMON(1,0,1)
},
{
642,
MR_TAG_COMMON(2,0,16)
},
{
641,
MR_TAG_COMMON(2,0,17)
},
{
640,
MR_TAG_COMMON(1,0,1)
},
{
474,
MR_TAG_COMMON(1,0,1)
},
{
473,
MR_TAG_COMMON(1,0,0)
},
{
472,
MR_tbmkword(0, 0)
},
{
471,
MR_TAG_COMMON(2,0,0)
},
{
470,
MR_TAG_COMMON(1,0,1)
},
{
469,
MR_TAG_COMMON(1,0,1)
},
{
468,
MR_TAG_COMMON(2,0,18)
},
{
467,
MR_TAG_COMMON(2,0,1)
},
{
466,
MR_TAG_COMMON(1,0,1)
},
{
465,
MR_TAG_COMMON(1,0,1)
},
{
464,
MR_TAG_COMMON(1,0,1)
},
{
463,
MR_TAG_COMMON(1,0,1)
},
{
462,
MR_TAG_COMMON(1,0,1)
},
{
461,
MR_TAG_COMMON(1,0,1)
},
{
460,
MR_TAG_COMMON(1,0,1)
},
{
459,
MR_TAG_COMMON(2,0,10)
},
{
458,
MR_TAG_COMMON(1,0,1)
},
{
457,
MR_TAG_COMMON(1,0,1)
},
{
456,
MR_TAG_COMMON(1,0,1)
},
{
455,
MR_TAG_COMMON(1,0,1)
},
{
454,
MR_TAG_COMMON(1,0,1)
},
{
453,
MR_TAG_COMMON(1,0,1)
},
{
452,
MR_TAG_COMMON(1,0,1)
},
{
451,
MR_TAG_COMMON(1,0,1)
},
{
450,
MR_TAG_COMMON(1,0,0)
},
{
449,
MR_TAG_COMMON(1,0,1)
},
{
448,
MR_TAG_COMMON(1,0,0)
},
{
447,
MR_TAG_COMMON(1,0,1)
},
{
446,
MR_TAG_COMMON(1,0,1)
},
{
445,
MR_TAG_COMMON(1,0,1)
},
{
444,
MR_TAG_COMMON(1,0,0)
},
{
443,
MR_TAG_COMMON(1,0,1)
},
{
442,
MR_TAG_COMMON(1,0,1)
},
{
441,
MR_TAG_COMMON(1,0,1)
},
{
440,
MR_TAG_COMMON(1,0,1)
},
{
439,
MR_TAG_COMMON(1,0,1)
},
{
438,
MR_TAG_COMMON(1,0,1)
},
{
437,
MR_TAG_COMMON(1,0,0)
},
{
436,
MR_TAG_COMMON(1,0,1)
},
{
435,
MR_TAG_COMMON(2,0,11)
},
{
434,
MR_TAG_COMMON(2,0,13)
},
{
433,
MR_TAG_COMMON(2,0,13)
},
{
432,
MR_TAG_COMMON(2,0,11)
},
{
431,
MR_TAG_COMMON(2,0,9)
},
{
430,
MR_TAG_COMMON(2,0,11)
},
{
429,
MR_TAG_COMMON(2,0,11)
},
{
428,
MR_TAG_COMMON(2,0,19)
},
{
427,
MR_TAG_COMMON(2,0,19)
},
{
426,
MR_TAG_COMMON(1,0,1)
},
{
400,
MR_TAG_COMMON(1,0,1)
},
{
399,
MR_TAG_COMMON(1,0,0)
},
{
398,
MR_TAG_COMMON(1,0,1)
},
{
397,
MR_TAG_COMMON(1,0,1)
},
{
396,
MR_TAG_COMMON(2,0,11)
},
{
395,
MR_TAG_COMMON(2,0,20)
},
{
394,
MR_TAG_COMMON(3,3,0)
},
{
393,
MR_TAG_COMMON(1,0,1)
},
{
392,
MR_TAG_COMMON(1,0,1)
},
{
387,
MR_TAG_COMMON(2,0,21)
},
{
386,
MR_TAG_COMMON(2,0,22)
},
{
385,
MR_TAG_COMMON(2,0,3)
},
{
384,
MR_TAG_COMMON(2,0,11)
},
{
383,
MR_TAG_COMMON(1,0,1)
},
{
382,
MR_TAG_COMMON(1,0,1)
},
{
359,
MR_TAG_COMMON(1,0,1)
},
{
358,
MR_TAG_COMMON(1,0,1)
},
{
357,
MR_TAG_COMMON(1,0,1)
},
{
356,
MR_TAG_COMMON(1,0,1)
},
{
355,
MR_TAG_COMMON(1,0,1)
},
{
354,
MR_TAG_COMMON(1,0,1)
},
{
353,
MR_TAG_COMMON(3,1,7)
},
{
352,
MR_TAG_COMMON(1,0,1)
},
{
351,
MR_TAG_COMMON(2,0,23)
},
{
350,
MR_TAG_COMMON(1,0,1)
},
{
349,
MR_TAG_COMMON(2,0,23)
},
{
348,
MR_TAG_COMMON(2,0,24)
},
{
347,
MR_TAG_COMMON(1,0,1)
},
{
346,
MR_TAG_COMMON(1,0,1)
},
{
345,
MR_TAG_COMMON(1,0,1)
},
{
381,
MR_TAG_COMMON(1,0,1)
},
{
380,
MR_TAG_COMMON(1,0,1)
},
{
378,
MR_tbmkword(0, 1)
},
{
377,
MR_TAG_COMMON(1,0,0)
},
{
376,
MR_TAG_COMMON(2,0,20)
},
{
375,
MR_TAG_COMMON(2,0,20)
},
{
374,
MR_TAG_COMMON(2,0,20)
},
{
373,
MR_TAG_COMMON(2,0,0)
},
{
372,
MR_TAG_COMMON(2,0,0)
},
{
371,
MR_TAG_COMMON(2,0,0)
},
{
370,
MR_TAG_COMMON(2,0,13)
},
{
369,
MR_TAG_COMMON(1,0,0)
},
{
368,
MR_TAG_COMMON(1,0,0)
},
{
367,
MR_TAG_COMMON(1,0,0)
},
{
366,
MR_TAG_COMMON(1,0,0)
},
{
365,
MR_TAG_COMMON(1,0,1)
},
{
364,
MR_TAG_COMMON(1,0,1)
},
{
379,
MR_TAG_COMMON(1,0,1)
},
{
363,
MR_TAG_COMMON(1,0,0)
},
{
362,
MR_TAG_COMMON(1,0,1)
},
{
361,
MR_TAG_COMMON(1,0,1)
},
{
360,
MR_TAG_COMMON(1,0,1)
},
{
344,
MR_TAG_COMMON(1,0,1)
},
{
343,
MR_TAG_COMMON(1,0,1)
},
{
342,
MR_TAG_COMMON(1,0,0)
},
{
341,
MR_TAG_COMMON(3,3,0)
},
{
340,
MR_TAG_COMMON(1,0,1)
},
{
339,
MR_TAG_COMMON(2,0,8)
},
{
338,
MR_TAG_COMMON(2,0,8)
},
{
337,
MR_TAG_COMMON(2,0,20)
},
{
336,
MR_TAG_COMMON(2,0,8)
},
{
335,
MR_TAG_COMMON(2,0,1)
},
{
334,
MR_TAG_COMMON(2,0,1)
},
{
333,
MR_TAG_COMMON(1,0,1)
},
{
332,
MR_TAG_COMMON(1,0,0)
},
{
331,
MR_TAG_COMMON(1,0,1)
},
{
330,
MR_tbmkword(0, 1)
},
{
329,
MR_TAG_COMMON(1,0,0)
},
{
110,
MR_TAG_COMMON(1,0,1)
},
{
109,
MR_TAG_COMMON(1,0,1)
},
{
108,
MR_TAG_COMMON(1,0,1)
},
{
107,
MR_TAG_COMMON(1,0,1)
},
{
106,
MR_TAG_COMMON(1,0,1)
},
{
105,
MR_TAG_COMMON(1,0,1)
},
{
104,
MR_TAG_COMMON(1,0,1)
},
{
103,
MR_TAG_COMMON(1,0,1)
},
{
102,
MR_TAG_COMMON(1,0,1)
},
{
101,
MR_TAG_COMMON(1,0,1)
},
{
100,
MR_TAG_COMMON(1,0,1)
},
{
99,
MR_TAG_COMMON(1,0,1)
},
{
98,
MR_TAG_COMMON(1,0,1)
},
{
97,
MR_TAG_COMMON(1,0,1)
},
{
96,
MR_TAG_COMMON(1,0,1)
},
{
95,
MR_TAG_COMMON(1,0,1)
},
{
94,
MR_TAG_COMMON(1,0,1)
},
{
88,
MR_TAG_COMMON(1,0,1)
},
{
87,
MR_TAG_COMMON(1,0,1)
},
{
86,
MR_TAG_COMMON(1,0,1)
},
{
85,
MR_TAG_COMMON(1,0,1)
},
{
84,
MR_TAG_COMMON(1,0,1)
},
{
83,
MR_TAG_COMMON(1,0,1)
},
{
82,
MR_TAG_COMMON(1,0,1)
},
{
93,
MR_TAG_COMMON(3,1,72)
},
{
92,
MR_TAG_COMMON(1,0,1)
},
{
91,
MR_TAG_COMMON(1,0,1)
},
{
90,
MR_TAG_COMMON(1,0,1)
},
{
89,
MR_TAG_COMMON(1,0,1)
},
{
391,
MR_TAG_COMMON(1,0,1)
},
{
390,
MR_TAG_COMMON(1,0,1)
},
{
389,
MR_TAG_COMMON(1,0,1)
},
{
388,
MR_TAG_COMMON(1,0,1)
},
{
425,
MR_TAG_COMMON(1,0,1)
},
{
424,
MR_TAG_COMMON(1,0,1)
},
{
423,
MR_TAG_COMMON(2,0,25)
},
{
422,
MR_TAG_COMMON(1,0,0)
},
{
421,
MR_TAG_COMMON(1,0,1)
},
{
420,
MR_TAG_COMMON(2,0,11)
},
{
418,
MR_TAG_COMMON(1,0,1)
},
{
417,
MR_TAG_COMMON(1,0,1)
},
{
419,
MR_TAG_COMMON(3,3,30)
},
{
416,
MR_TAG_COMMON(1,0,1)
},
{
415,
MR_TAG_COMMON(2,0,26)
},
{
414,
MR_TAG_COMMON(2,0,13)
},
{
413,
MR_TAG_COMMON(3,3,30)
},
{
412,
MR_TAG_COMMON(2,0,1)
},
{
409,
MR_TAG_COMMON(1,0,1)
},
{
408,
MR_TAG_COMMON(1,0,1)
},
{
407,
MR_TAG_COMMON(2,0,1)
},
{
406,
MR_TAG_COMMON(2,0,23)
},
{
405,
MR_TAG_COMMON(2,0,1)
},
{
404,
MR_TAG_COMMON(3,3,31)
},
{
403,
MR_TAG_COMMON(1,0,1)
},
{
402,
MR_TAG_COMMON(2,0,1)
},
{
401,
MR_TAG_COMMON(1,0,1)
},
{
411,
MR_TAG_COMMON(1,0,1)
},
{
410,
MR_TAG_COMMON(1,0,1)
},
{
328,
MR_TAG_COMMON(1,0,1)
},
{
327,
MR_TAG_COMMON(2,0,1)
},
{
326,
MR_TAG_COMMON(1,0,1)
},
{
325,
MR_TAG_COMMON(1,0,1)
},
{
324,
MR_TAG_COMMON(1,0,1)
},
{
323,
MR_TAG_COMMON(1,0,1)
},
{
322,
MR_TAG_COMMON(1,0,0)
},
{
321,
MR_TAG_COMMON(1,0,1)
},
{
320,
MR_tbmkword(0, 0)
},
{
319,
MR_TAG_COMMON(2,0,27)
},
{
318,
MR_tbmkword(0, 2)
},
{
526,
MR_TAG_COMMON(1,0,0)
},
{
525,
MR_TAG_COMMON(1,0,1)
},
{
524,
MR_TAG_COMMON(3,3,32)
},
{
523,
MR_TAG_COMMON(3,1,7)
},
{
522,
MR_tbmkword(0, 3)
},
{
521,
MR_TAG_COMMON(3,1,7)
},
{
520,
MR_TAG_COMMON(3,3,33)
},
{
519,
MR_TAG_COMMON(3,3,34)
},
{
518,
MR_TAG_COMMON(3,3,0)
},
{
517,
MR_tbmkword(0, 3)
},
{
516,
MR_TAG_COMMON(3,1,7)
},
{
515,
MR_TAG_COMMON(3,3,35)
},
{
514,
MR_TAG_COMMON(1,0,1)
},
{
513,
MR_TAG_COMMON(1,0,0)
},
{
512,
MR_TAG_COMMON(3,3,36)
},
{
511,
MR_tbmkword(0, 3)
},
{
510,
MR_TAG_COMMON(3,1,7)
},
{
509,
MR_TAG_COMMON(3,3,37)
},
{
508,
MR_TAG_COMMON(3,3,38)
},
{
507,
MR_TAG_COMMON(3,1,7)
},
{
506,
MR_tbmkword(0, 3)
},
{
505,
MR_TAG_COMMON(3,1,7)
},
{
504,
MR_TAG_COMMON(3,3,39)
},
{
503,
MR_TAG_COMMON(3,3,40)
},
{
502,
MR_TAG_COMMON(3,3,41)
},
{
501,
MR_TAG_COMMON(3,3,26)
},
{
500,
MR_TAG_COMMON(3,3,42)
},
{
499,
MR_TAG_COMMON(3,3,42)
},
{
498,
MR_TAG_COMMON(3,3,42)
},
{
497,
MR_TAG_COMMON(3,3,43)
},
{
496,
MR_TAG_COMMON(3,3,0)
},
{
495,
MR_TAG_COMMON(3,3,19)
},
{
494,
MR_TAG_COMMON(3,3,0)
},
{
493,
MR_TAG_COMMON(3,3,0)
},
{
492,
MR_TAG_COMMON(3,3,0)
},
{
491,
MR_TAG_COMMON(3,3,0)
},
{
490,
MR_TAG_COMMON(3,3,44)
},
{
489,
MR_TAG_COMMON(3,3,0)
},
{
488,
MR_tbmkword(0, 3)
},
{
487,
MR_TAG_COMMON(3,1,7)
},
{
486,
MR_tbmkword(0, 3)
},
{
485,
MR_TAG_COMMON(3,1,7)
},
{
484,
MR_tbmkword(0, 3)
},
{
483,
MR_TAG_COMMON(3,1,7)
},
{
478,
MR_tbmkword(0, 3)
},
{
477,
MR_TAG_COMMON(3,1,7)
},
{
482,
MR_TAG_COMMON(1,0,1)
},
{
481,
MR_TAG_COMMON(1,0,0)
},
{
480,
MR_TAG_COMMON(1,0,1)
},
{
479,
MR_TAG_COMMON(3,1,7)
},
{
476,
MR_TAG_COMMON(3,3,26)
},
{
475,
MR_TAG_COMMON(1,0,1)
},
{
81,
MR_TAG_COMMON(1,0,1)
},
{
80,
MR_TAG_COMMON(1,0,1)
},
{
79,
MR_TAG_COMMON(1,0,1)
},
{
78,
MR_TAG_COMMON(1,0,1)
},
{
77,
MR_TAG_COMMON(1,0,1)
},
{
76,
MR_TAG_COMMON(1,0,1)
},
{
75,
MR_TAG_COMMON(1,0,1)
},
{
74,
MR_TAG_COMMON(1,0,1)
},
{
73,
MR_TAG_COMMON(2,0,6)
},
{
72,
MR_TAG_COMMON(2,0,6)
},
{
71,
MR_TAG_COMMON(1,0,1)
},
{
70,
MR_TAG_COMMON(1,0,1)
},
{
69,
MR_TAG_COMMON(3,1,7)
},
{
68,
MR_TAG_COMMON(3,1,7)
},
{
66,
MR_TAG_COMMON(1,0,1)
},
{
67,
MR_TAG_COMMON(1,0,1)
},
{
65,
MR_TAG_COMMON(2,0,6)
},
{
64,
MR_TAG_COMMON(1,0,1)
},
{
63,
MR_TAG_COMMON(3,1,7)
},
{
62,
MR_TAG_COMMON(2,0,6)
},
{
61,
MR_TAG_COMMON(1,0,1)
},
{
60,
MR_TAG_COMMON(1,0,1)
},
{
59,
MR_TAG_COMMON(1,0,1)
},
{
58,
MR_TAG_COMMON(1,0,1)
},
{
57,
MR_TAG_COMMON(1,0,1)
},
{
56,
MR_TAG_COMMON(3,3,0)
},
{
55,
MR_TAG_COMMON(1,0,1)
},
{
54,
MR_TAG_COMMON(1,0,1)
},
{
53,
MR_TAG_COMMON(1,0,1)
},
{
52,
MR_TAG_COMMON(1,0,1)
},
{
51,
MR_TAG_COMMON(2,0,21)
},
{
50,
MR_TAG_COMMON(1,0,1)
},
{
49,
MR_TAG_COMMON(1,0,0)
},
{
48,
MR_TAG_COMMON(1,0,1)
},
{
47,
MR_TAG_COMMON(1,0,1)
},
{
46,
MR_TAG_COMMON(1,0,1)
},
{
45,
MR_TAG_COMMON(1,0,1)
},
{
44,
MR_TAG_COMMON(1,0,1)
},
{
43,
MR_TAG_COMMON(1,0,0)
},
{
42,
MR_TAG_COMMON(1,0,0)
},
{
41,
MR_tbmkword(0, 1)
},
{
40,
MR_TAG_COMMON(1,0,0)
},
{
39,
MR_TAG_COMMON(1,0,1)
},
{
38,
MR_TAG_COMMON(1,0,0)
},
{
37,
MR_TAG_COMMON(1,0,1)
},
{
36,
MR_TAG_COMMON(1,0,1)
},
{
35,
MR_TAG_COMMON(1,0,0)
},
{
34,
MR_TAG_COMMON(1,0,0)
},
{
33,
MR_TAG_COMMON(1,0,1)
},
{
32,
MR_TAG_COMMON(1,0,0)
},
{
31,
MR_TAG_COMMON(1,0,0)
},
{
30,
MR_TAG_COMMON(1,0,0)
},
{
29,
MR_TAG_COMMON(1,0,1)
},
{
28,
MR_TAG_COMMON(1,0,0)
},
{
27,
MR_TAG_COMMON(1,0,0)
},
{
26,
MR_TAG_COMMON(1,0,0)
},
{
25,
MR_TAG_COMMON(1,0,1)
},
{
24,
MR_TAG_COMMON(1,0,0)
},
{
23,
MR_TAG_COMMON(1,0,0)
},
{
22,
MR_TAG_COMMON(1,0,0)
},
{
21,
MR_TAG_COMMON(1,0,0)
},
{
20,
MR_TAG_COMMON(1,0,1)
},
{
19,
MR_TAG_COMMON(1,0,0)
},
{
18,
MR_TAG_COMMON(1,0,0)
},
{
14,
MR_TAG_COMMON(1,0,0)
},
{
13,
MR_TAG_COMMON(1,0,1)
},
{
12,
MR_TAG_COMMON(1,0,0)
},
{
17,
MR_TAG_COMMON(1,0,1)
},
{
16,
MR_TAG_COMMON(1,0,1)
},
{
15,
MR_TAG_COMMON(1,0,1)
},
{
11,
MR_TAG_COMMON(1,0,0)
},
{
10,
MR_TAG_COMMON(1,0,1)
},
{
9,
MR_TAG_COMMON(1,0,0)
},
{
8,
MR_TAG_COMMON(1,0,0)
},
{
7,
MR_TAG_COMMON(1,0,0)
},
{
6,
MR_TAG_COMMON(1,0,0)
},
{
5,
MR_TAG_COMMON(1,0,0)
},
{
4,
MR_TAG_COMMON(1,0,1)
},
{
3,
MR_TAG_COMMON(1,0,1)
},
{
2,
MR_TAG_COMMON(1,0,1)
},
{
1,
MR_TAG_COMMON(1,0,1)
},
{
0,
MR_tbmkword(0, 1)
},
{
362,
MR_TAG_COMMON(1,0,0)
},
{
382,
MR_TAG_COMMON(1,0,0)
},
{
461,
MR_TAG_COMMON(1,0,0)
},
{
454,
MR_TAG_COMMON(1,0,0)
},
{
426,
MR_TAG_COMMON(1,0,0)
},
{
438,
MR_TAG_COMMON(1,0,0)
},
{
453,
MR_TAG_COMMON(1,0,0)
},
{
452,
MR_TAG_COMMON(1,0,0)
},
{
467,
MR_TAG_COMMON(2,0,0)
},
{
451,
MR_TAG_COMMON(1,0,0)
},
{
449,
MR_TAG_COMMON(1,0,0)
},
{
458,
MR_TAG_COMMON(1,0,0)
},
{
480,
MR_TAG_COMMON(1,0,0)
},
{
464,
MR_TAG_COMMON(1,0,0)
},
{
442,
MR_TAG_COMMON(1,0,0)
},
{
470,
MR_TAG_COMMON(1,0,0)
},
{
445,
MR_TAG_COMMON(1,0,0)
},
{
446,
MR_TAG_COMMON(1,0,0)
},
{
443,
MR_TAG_COMMON(1,0,0)
},
{
355,
MR_TAG_COMMON(1,0,0)
},
{
340,
MR_TAG_COMMON(1,0,0)
},
{
335,
MR_TAG_COMMON(2,0,23)
},
{
333,
MR_TAG_COMMON(1,0,0)
},
{
331,
MR_TAG_COMMON(1,0,0)
},
{
381,
MR_TAG_COMMON(1,0,0)
},
{
462,
MR_TAG_COMMON(1,0,0)
},
{
467,
MR_TAG_COMMON(2,0,13)
},
{
455,
MR_TAG_COMMON(1,0,0)
},
{
467,
MR_TAG_COMMON(2,0,11)
},
{
466,
MR_TAG_COMMON(1,0,0)
},
{
361,
MR_TAG_COMMON(1,0,0)
},
{
344,
MR_TAG_COMMON(1,0,0)
},
{
383,
MR_TAG_COMMON(1,0,0)
},
{
347,
MR_TAG_COMMON(1,0,0)
},
{
345,
MR_TAG_COMMON(1,0,0)
},
{
364,
MR_TAG_COMMON(1,0,0)
},
{
348,
MR_TAG_COMMON(2,0,14)
},
{
335,
MR_TAG_COMMON(2,0,24)
},
{
336,
MR_TAG_COMMON(2,0,9)
},
{
379,
MR_TAG_COMMON(1,0,0)
},
{
447,
MR_TAG_COMMON(1,0,0)
},
{
348,
MR_TAG_COMMON(2,0,28)
},
{
335,
MR_TAG_COMMON(2,0,20)
},
{
380,
MR_TAG_COMMON(1,0,0)
},
{
467,
MR_TAG_COMMON(2,0,8)
},
{
469,
MR_TAG_COMMON(1,0,0)
},
{
482,
MR_TAG_COMMON(1,0,0)
},
{
471,
MR_TAG_COMMON(2,0,1)
},
{
463,
MR_TAG_COMMON(1,0,0)
},
{
351,
MR_TAG_COMMON(2,0,0)
},
{
157,
MR_TAG_COMMON(1,0,1)
},
{
156,
MR_TAG_COMMON(1,0,1)
},
};

static const struct mercury_type_2 mercury_common_2[715] =
{
{
{
MR_TAG_COMMON(0,1,0),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(0,1,1),
MR_TAG_COMMON(1,2,0)
}
},
{
{
MR_TAG_COMMON(0,1,2),
MR_TAG_COMMON(1,2,1)
}
},
{
{
MR_TAG_COMMON(0,1,3),
MR_TAG_COMMON(1,2,2)
}
},
{
{
MR_TAG_COMMON(0,1,4),
MR_TAG_COMMON(1,2,3)
}
},
{
{
MR_TAG_COMMON(0,1,5),
MR_TAG_COMMON(1,2,4)
}
},
{
{
MR_TAG_COMMON(0,1,6),
MR_TAG_COMMON(1,2,5)
}
},
{
{
MR_TAG_COMMON(0,1,8),
MR_TAG_COMMON(1,2,6)
}
},
{
{
MR_TAG_COMMON(0,1,9),
MR_TAG_COMMON(1,2,7)
}
},
{
{
MR_TAG_COMMON(0,1,10),
MR_TAG_COMMON(1,2,8)
}
},
{
{
MR_TAG_COMMON(0,1,11),
MR_TAG_COMMON(1,2,9)
}
},
{
{
MR_TAG_COMMON(0,1,12),
MR_TAG_COMMON(1,2,10)
}
},
{
{
MR_TAG_COMMON(0,1,13),
MR_TAG_COMMON(1,2,11)
}
},
{
{
MR_TAG_COMMON(0,1,14),
MR_TAG_COMMON(1,2,12)
}
},
{
{
MR_TAG_COMMON(0,1,15),
MR_TAG_COMMON(1,2,13)
}
},
{
{
MR_TAG_COMMON(0,1,16),
MR_TAG_COMMON(1,2,14)
}
},
{
{
MR_TAG_COMMON(0,1,17),
MR_TAG_COMMON(1,2,15)
}
},
{
{
MR_TAG_COMMON(0,1,18),
MR_TAG_COMMON(1,2,16)
}
},
{
{
MR_TAG_COMMON(0,1,19),
MR_TAG_COMMON(1,2,17)
}
},
{
{
MR_TAG_COMMON(0,1,20),
MR_TAG_COMMON(1,2,18)
}
},
{
{
MR_TAG_COMMON(0,1,21),
MR_TAG_COMMON(1,2,19)
}
},
{
{
MR_TAG_COMMON(0,1,22),
MR_TAG_COMMON(1,2,20)
}
},
{
{
MR_TAG_COMMON(0,1,23),
MR_TAG_COMMON(1,2,21)
}
},
{
{
MR_TAG_COMMON(0,1,24),
MR_TAG_COMMON(1,2,22)
}
},
{
{
MR_TAG_COMMON(0,1,25),
MR_TAG_COMMON(1,2,23)
}
},
{
{
MR_TAG_COMMON(0,1,26),
MR_TAG_COMMON(1,2,24)
}
},
{
{
MR_TAG_COMMON(0,1,27),
MR_TAG_COMMON(1,2,25)
}
},
{
{
MR_TAG_COMMON(0,1,28),
MR_TAG_COMMON(1,2,26)
}
},
{
{
MR_TAG_COMMON(0,1,29),
MR_TAG_COMMON(1,2,27)
}
},
{
{
MR_TAG_COMMON(0,1,30),
MR_TAG_COMMON(1,2,28)
}
},
{
{
MR_TAG_COMMON(0,1,31),
MR_TAG_COMMON(1,2,29)
}
},
{
{
MR_TAG_COMMON(0,1,32),
MR_TAG_COMMON(1,2,30)
}
},
{
{
MR_TAG_COMMON(0,1,33),
MR_TAG_COMMON(1,2,31)
}
},
{
{
MR_TAG_COMMON(0,1,34),
MR_TAG_COMMON(1,2,32)
}
},
{
{
MR_TAG_COMMON(0,1,35),
MR_TAG_COMMON(1,2,33)
}
},
{
{
MR_TAG_COMMON(0,1,36),
MR_TAG_COMMON(1,2,34)
}
},
{
{
MR_TAG_COMMON(0,1,37),
MR_TAG_COMMON(1,2,35)
}
},
{
{
MR_TAG_COMMON(0,1,38),
MR_TAG_COMMON(1,2,36)
}
},
{
{
MR_TAG_COMMON(0,1,39),
MR_TAG_COMMON(1,2,37)
}
},
{
{
MR_TAG_COMMON(0,1,40),
MR_TAG_COMMON(1,2,38)
}
},
{
{
MR_TAG_COMMON(0,1,41),
MR_TAG_COMMON(1,2,39)
}
},
{
{
MR_TAG_COMMON(0,1,42),
MR_TAG_COMMON(1,2,40)
}
},
{
{
MR_TAG_COMMON(0,1,43),
MR_TAG_COMMON(1,2,41)
}
},
{
{
MR_TAG_COMMON(0,1,44),
MR_TAG_COMMON(1,2,42)
}
},
{
{
MR_TAG_COMMON(0,1,45),
MR_TAG_COMMON(1,2,43)
}
},
{
{
MR_TAG_COMMON(0,1,46),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(0,1,47),
MR_TAG_COMMON(1,2,45)
}
},
{
{
MR_TAG_COMMON(0,1,48),
MR_TAG_COMMON(1,2,46)
}
},
{
{
MR_TAG_COMMON(0,1,49),
MR_TAG_COMMON(1,2,47)
}
},
{
{
MR_TAG_COMMON(0,1,50),
MR_TAG_COMMON(1,2,48)
}
},
{
{
MR_TAG_COMMON(0,1,51),
MR_TAG_COMMON(1,2,49)
}
},
{
{
MR_TAG_COMMON(0,1,52),
MR_TAG_COMMON(1,2,50)
}
},
{
{
MR_TAG_COMMON(0,1,53),
MR_TAG_COMMON(1,2,51)
}
},
{
{
MR_TAG_COMMON(0,1,54),
MR_TAG_COMMON(1,2,52)
}
},
{
{
MR_TAG_COMMON(0,1,55),
MR_TAG_COMMON(1,2,53)
}
},
{
{
MR_TAG_COMMON(0,1,57),
MR_TAG_COMMON(1,2,54)
}
},
{
{
MR_TAG_COMMON(0,1,58),
MR_TAG_COMMON(1,2,55)
}
},
{
{
MR_TAG_COMMON(0,1,59),
MR_TAG_COMMON(1,2,56)
}
},
{
{
MR_TAG_COMMON(0,1,60),
MR_TAG_COMMON(1,2,57)
}
},
{
{
MR_TAG_COMMON(0,1,62),
MR_TAG_COMMON(1,2,58)
}
},
{
{
MR_TAG_COMMON(0,1,64),
MR_TAG_COMMON(1,2,59)
}
},
{
{
MR_TAG_COMMON(0,1,65),
MR_TAG_COMMON(1,2,60)
}
},
{
{
MR_TAG_COMMON(0,1,66),
MR_TAG_COMMON(1,2,61)
}
},
{
{
MR_TAG_COMMON(0,1,67),
MR_TAG_COMMON(1,2,62)
}
},
{
{
MR_TAG_COMMON(0,1,68),
MR_TAG_COMMON(1,2,63)
}
},
{
{
MR_TAG_COMMON(0,1,69),
MR_TAG_COMMON(1,2,64)
}
},
{
{
MR_TAG_COMMON(0,1,70),
MR_TAG_COMMON(1,2,65)
}
},
{
{
MR_TAG_COMMON(0,1,71),
MR_TAG_COMMON(1,2,66)
}
},
{
{
MR_TAG_COMMON(0,1,73),
MR_TAG_COMMON(1,2,67)
}
},
{
{
MR_TAG_COMMON(0,1,74),
MR_TAG_COMMON(1,2,68)
}
},
{
{
MR_TAG_COMMON(0,1,75),
MR_TAG_COMMON(1,2,69)
}
},
{
{
MR_TAG_COMMON(0,1,76),
MR_TAG_COMMON(1,2,70)
}
},
{
{
MR_TAG_COMMON(0,1,77),
MR_TAG_COMMON(1,2,71)
}
},
{
{
MR_TAG_COMMON(0,1,78),
MR_TAG_COMMON(1,2,72)
}
},
{
{
MR_TAG_COMMON(0,1,79),
MR_TAG_COMMON(1,2,73)
}
},
{
{
MR_TAG_COMMON(0,1,80),
MR_TAG_COMMON(1,2,74)
}
},
{
{
MR_TAG_COMMON(0,1,81),
MR_TAG_COMMON(1,2,75)
}
},
{
{
MR_TAG_COMMON(0,1,82),
MR_TAG_COMMON(1,2,76)
}
},
{
{
MR_TAG_COMMON(0,1,83),
MR_TAG_COMMON(1,2,77)
}
},
{
{
MR_TAG_COMMON(0,1,84),
MR_TAG_COMMON(1,2,78)
}
},
{
{
MR_TAG_COMMON(0,1,85),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(0,1,86),
MR_TAG_COMMON(1,2,80)
}
},
{
{
MR_TAG_COMMON(0,1,87),
MR_TAG_COMMON(1,2,81)
}
},
{
{
MR_TAG_COMMON(0,1,88),
MR_TAG_COMMON(1,2,82)
}
},
{
{
MR_TAG_COMMON(0,1,89),
MR_TAG_COMMON(1,2,83)
}
},
{
{
MR_TAG_COMMON(0,1,90),
MR_TAG_COMMON(1,2,84)
}
},
{
{
MR_TAG_COMMON(0,1,91),
MR_TAG_COMMON(1,2,85)
}
},
{
{
MR_TAG_COMMON(0,1,92),
MR_TAG_COMMON(1,2,86)
}
},
{
{
MR_TAG_COMMON(0,1,93),
MR_TAG_COMMON(1,2,87)
}
},
{
{
MR_TAG_COMMON(0,1,94),
MR_TAG_COMMON(1,2,88)
}
},
{
{
MR_TAG_COMMON(0,1,95),
MR_TAG_COMMON(1,2,89)
}
},
{
{
MR_TAG_COMMON(0,1,96),
MR_TAG_COMMON(1,2,90)
}
},
{
{
MR_TAG_COMMON(0,1,97),
MR_TAG_COMMON(1,2,91)
}
},
{
{
MR_TAG_COMMON(0,1,98),
MR_TAG_COMMON(1,2,92)
}
},
{
{
MR_TAG_COMMON(0,1,99),
MR_TAG_COMMON(1,2,93)
}
},
{
{
MR_TAG_COMMON(0,1,100),
MR_TAG_COMMON(1,2,94)
}
},
{
{
MR_TAG_COMMON(0,1,101),
MR_TAG_COMMON(1,2,95)
}
},
{
{
MR_TAG_COMMON(0,1,102),
MR_TAG_COMMON(1,2,96)
}
},
{
{
MR_TAG_COMMON(0,1,103),
MR_TAG_COMMON(1,2,97)
}
},
{
{
MR_TAG_COMMON(0,1,104),
MR_TAG_COMMON(1,2,98)
}
},
{
{
MR_TAG_COMMON(0,1,105),
MR_TAG_COMMON(1,2,99)
}
},
{
{
MR_TAG_COMMON(0,1,106),
MR_TAG_COMMON(1,2,100)
}
},
{
{
MR_TAG_COMMON(0,1,107),
MR_TAG_COMMON(1,2,101)
}
},
{
{
MR_TAG_COMMON(0,1,108),
MR_TAG_COMMON(1,2,102)
}
},
{
{
MR_TAG_COMMON(0,1,109),
MR_TAG_COMMON(1,2,103)
}
},
{
{
MR_TAG_COMMON(0,1,110),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(0,1,111),
MR_TAG_COMMON(1,2,105)
}
},
{
{
MR_TAG_COMMON(0,1,112),
MR_TAG_COMMON(1,2,106)
}
},
{
{
MR_TAG_COMMON(0,1,113),
MR_TAG_COMMON(1,2,107)
}
},
{
{
MR_TAG_COMMON(0,1,114),
MR_TAG_COMMON(1,2,108)
}
},
{
{
MR_TAG_COMMON(0,1,115),
MR_TAG_COMMON(1,2,109)
}
},
{
{
MR_TAG_COMMON(0,1,116),
MR_TAG_COMMON(1,2,110)
}
},
{
{
MR_TAG_COMMON(0,1,117),
MR_TAG_COMMON(1,2,111)
}
},
{
{
MR_TAG_COMMON(0,1,118),
MR_TAG_COMMON(1,2,112)
}
},
{
{
MR_TAG_COMMON(0,1,119),
MR_TAG_COMMON(1,2,113)
}
},
{
{
MR_TAG_COMMON(0,1,120),
MR_TAG_COMMON(1,2,114)
}
},
{
{
MR_TAG_COMMON(0,1,121),
MR_TAG_COMMON(1,2,115)
}
},
{
{
MR_TAG_COMMON(0,1,122),
MR_TAG_COMMON(1,2,116)
}
},
{
{
MR_TAG_COMMON(0,1,123),
MR_TAG_COMMON(1,2,117)
}
},
{
{
MR_TAG_COMMON(0,1,124),
MR_TAG_COMMON(1,2,118)
}
},
{
{
MR_TAG_COMMON(0,1,125),
MR_TAG_COMMON(1,2,119)
}
},
{
{
MR_TAG_COMMON(0,1,126),
MR_TAG_COMMON(1,2,120)
}
},
{
{
MR_TAG_COMMON(0,1,127),
MR_TAG_COMMON(1,2,121)
}
},
{
{
MR_TAG_COMMON(0,1,128),
MR_TAG_COMMON(1,2,122)
}
},
{
{
MR_TAG_COMMON(0,1,129),
MR_TAG_COMMON(1,2,123)
}
},
{
{
MR_TAG_COMMON(0,1,130),
MR_TAG_COMMON(1,2,124)
}
},
{
{
MR_TAG_COMMON(0,1,131),
MR_TAG_COMMON(1,2,125)
}
},
{
{
MR_TAG_COMMON(0,1,132),
MR_TAG_COMMON(1,2,126)
}
},
{
{
MR_TAG_COMMON(0,1,133),
MR_TAG_COMMON(1,2,127)
}
},
{
{
MR_TAG_COMMON(0,1,134),
MR_TAG_COMMON(1,2,128)
}
},
{
{
MR_TAG_COMMON(0,1,135),
MR_TAG_COMMON(1,2,129)
}
},
{
{
MR_TAG_COMMON(0,1,136),
MR_TAG_COMMON(1,2,130)
}
},
{
{
MR_TAG_COMMON(0,1,137),
MR_TAG_COMMON(1,2,131)
}
},
{
{
MR_TAG_COMMON(0,1,138),
MR_TAG_COMMON(1,2,132)
}
},
{
{
MR_TAG_COMMON(0,1,139),
MR_TAG_COMMON(1,2,133)
}
},
{
{
MR_TAG_COMMON(0,1,140),
MR_TAG_COMMON(1,2,134)
}
},
{
{
MR_TAG_COMMON(0,1,141),
MR_TAG_COMMON(1,2,135)
}
},
{
{
MR_TAG_COMMON(0,1,142),
MR_TAG_COMMON(1,2,136)
}
},
{
{
MR_TAG_COMMON(0,1,143),
MR_TAG_COMMON(1,2,137)
}
},
{
{
MR_TAG_COMMON(0,1,144),
MR_TAG_COMMON(1,2,138)
}
},
{
{
MR_TAG_COMMON(0,1,145),
MR_TAG_COMMON(1,2,139)
}
},
{
{
MR_TAG_COMMON(0,1,146),
MR_TAG_COMMON(1,2,140)
}
},
{
{
MR_TAG_COMMON(0,1,147),
MR_TAG_COMMON(1,2,141)
}
},
{
{
MR_TAG_COMMON(0,1,148),
MR_TAG_COMMON(1,2,142)
}
},
{
{
MR_TAG_COMMON(0,1,149),
MR_TAG_COMMON(1,2,143)
}
},
{
{
MR_TAG_COMMON(0,1,150),
MR_TAG_COMMON(1,2,144)
}
},
{
{
MR_TAG_COMMON(0,1,151),
MR_TAG_COMMON(1,2,145)
}
},
{
{
MR_TAG_COMMON(0,1,152),
MR_TAG_COMMON(1,2,146)
}
},
{
{
MR_TAG_COMMON(0,1,153),
MR_TAG_COMMON(1,2,147)
}
},
{
{
MR_TAG_COMMON(0,1,154),
MR_TAG_COMMON(1,2,148)
}
},
{
{
MR_TAG_COMMON(0,1,155),
MR_TAG_COMMON(1,2,149)
}
},
{
{
MR_TAG_COMMON(0,1,156),
MR_TAG_COMMON(1,2,150)
}
},
{
{
MR_TAG_COMMON(0,1,157),
MR_TAG_COMMON(1,2,151)
}
},
{
{
MR_TAG_COMMON(0,1,158),
MR_TAG_COMMON(1,2,152)
}
},
{
{
MR_TAG_COMMON(0,1,159),
MR_TAG_COMMON(1,2,153)
}
},
{
{
MR_TAG_COMMON(0,1,160),
MR_TAG_COMMON(1,2,154)
}
},
{
{
MR_TAG_COMMON(0,1,161),
MR_TAG_COMMON(1,2,155)
}
},
{
{
MR_TAG_COMMON(0,1,162),
MR_TAG_COMMON(1,2,156)
}
},
{
{
MR_TAG_COMMON(0,1,163),
MR_TAG_COMMON(1,2,157)
}
},
{
{
MR_TAG_COMMON(0,1,164),
MR_TAG_COMMON(1,2,158)
}
},
{
{
MR_TAG_COMMON(0,1,165),
MR_TAG_COMMON(1,2,159)
}
},
{
{
MR_TAG_COMMON(0,1,166),
MR_TAG_COMMON(1,2,160)
}
},
{
{
MR_TAG_COMMON(0,1,167),
MR_TAG_COMMON(1,2,161)
}
},
{
{
MR_TAG_COMMON(0,1,168),
MR_TAG_COMMON(1,2,162)
}
},
{
{
MR_TAG_COMMON(0,1,169),
MR_TAG_COMMON(1,2,163)
}
},
{
{
MR_TAG_COMMON(0,1,170),
MR_TAG_COMMON(1,2,164)
}
},
{
{
MR_TAG_COMMON(0,1,171),
MR_TAG_COMMON(1,2,165)
}
},
{
{
MR_TAG_COMMON(0,1,172),
MR_TAG_COMMON(1,2,166)
}
},
{
{
MR_TAG_COMMON(0,1,173),
MR_TAG_COMMON(1,2,167)
}
},
{
{
MR_TAG_COMMON(0,1,174),
MR_TAG_COMMON(1,2,168)
}
},
{
{
MR_TAG_COMMON(0,1,175),
MR_TAG_COMMON(1,2,169)
}
},
{
{
MR_TAG_COMMON(0,1,176),
MR_TAG_COMMON(1,2,170)
}
},
{
{
MR_TAG_COMMON(0,1,177),
MR_TAG_COMMON(1,2,171)
}
},
{
{
MR_TAG_COMMON(0,1,178),
MR_TAG_COMMON(1,2,172)
}
},
{
{
MR_TAG_COMMON(0,1,179),
MR_TAG_COMMON(1,2,173)
}
},
{
{
MR_TAG_COMMON(0,1,180),
MR_TAG_COMMON(1,2,174)
}
},
{
{
MR_TAG_COMMON(0,1,181),
MR_TAG_COMMON(1,2,175)
}
},
{
{
MR_TAG_COMMON(0,1,182),
MR_TAG_COMMON(1,2,176)
}
},
{
{
MR_TAG_COMMON(0,1,183),
MR_TAG_COMMON(1,2,177)
}
},
{
{
MR_TAG_COMMON(0,1,184),
MR_TAG_COMMON(1,2,178)
}
},
{
{
MR_TAG_COMMON(0,1,185),
MR_TAG_COMMON(1,2,179)
}
},
{
{
MR_TAG_COMMON(0,1,186),
MR_TAG_COMMON(1,2,180)
}
},
{
{
MR_TAG_COMMON(0,1,187),
MR_TAG_COMMON(1,2,181)
}
},
{
{
MR_TAG_COMMON(0,1,188),
MR_TAG_COMMON(1,2,182)
}
},
{
{
MR_TAG_COMMON(0,1,189),
MR_TAG_COMMON(1,2,183)
}
},
{
{
MR_TAG_COMMON(0,1,190),
MR_TAG_COMMON(1,2,184)
}
},
{
{
MR_TAG_COMMON(0,1,191),
MR_TAG_COMMON(1,2,185)
}
},
{
{
MR_TAG_COMMON(0,1,192),
MR_TAG_COMMON(1,2,186)
}
},
{
{
MR_TAG_COMMON(0,1,193),
MR_TAG_COMMON(1,2,187)
}
},
{
{
MR_TAG_COMMON(0,1,194),
MR_TAG_COMMON(1,2,188)
}
},
{
{
MR_TAG_COMMON(0,1,195),
MR_TAG_COMMON(1,2,189)
}
},
{
{
MR_TAG_COMMON(0,1,196),
MR_TAG_COMMON(1,2,190)
}
},
{
{
MR_TAG_COMMON(0,1,197),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(0,1,198),
MR_TAG_COMMON(1,2,192)
}
},
{
{
MR_TAG_COMMON(0,1,199),
MR_TAG_COMMON(1,2,193)
}
},
{
{
MR_TAG_COMMON(0,1,200),
MR_TAG_COMMON(1,2,194)
}
},
{
{
MR_TAG_COMMON(0,1,201),
MR_TAG_COMMON(1,2,195)
}
},
{
{
MR_TAG_COMMON(0,1,202),
MR_TAG_COMMON(1,2,196)
}
},
{
{
MR_TAG_COMMON(0,1,203),
MR_TAG_COMMON(1,2,197)
}
},
{
{
MR_TAG_COMMON(0,1,204),
MR_TAG_COMMON(1,2,198)
}
},
{
{
MR_TAG_COMMON(0,1,205),
MR_TAG_COMMON(1,2,199)
}
},
{
{
MR_TAG_COMMON(0,1,206),
MR_TAG_COMMON(1,2,200)
}
},
{
{
MR_TAG_COMMON(0,1,207),
MR_TAG_COMMON(1,2,201)
}
},
{
{
MR_TAG_COMMON(0,1,208),
MR_TAG_COMMON(1,2,202)
}
},
{
{
MR_TAG_COMMON(0,1,209),
MR_TAG_COMMON(1,2,203)
}
},
{
{
MR_TAG_COMMON(0,1,210),
MR_TAG_COMMON(1,2,204)
}
},
{
{
MR_TAG_COMMON(0,1,211),
MR_TAG_COMMON(1,2,205)
}
},
{
{
MR_TAG_COMMON(0,1,212),
MR_TAG_COMMON(1,2,206)
}
},
{
{
MR_TAG_COMMON(0,1,213),
MR_TAG_COMMON(1,2,207)
}
},
{
{
MR_TAG_COMMON(0,1,214),
MR_TAG_COMMON(1,2,208)
}
},
{
{
MR_TAG_COMMON(0,1,215),
MR_TAG_COMMON(1,2,209)
}
},
{
{
MR_TAG_COMMON(0,1,216),
MR_TAG_COMMON(1,2,210)
}
},
{
{
MR_TAG_COMMON(0,1,217),
MR_TAG_COMMON(1,2,211)
}
},
{
{
MR_TAG_COMMON(0,1,218),
MR_TAG_COMMON(1,2,212)
}
},
{
{
MR_TAG_COMMON(0,1,219),
MR_TAG_COMMON(1,2,213)
}
},
{
{
MR_TAG_COMMON(0,1,220),
MR_TAG_COMMON(1,2,214)
}
},
{
{
MR_TAG_COMMON(0,1,221),
MR_TAG_COMMON(1,2,215)
}
},
{
{
MR_TAG_COMMON(0,1,222),
MR_TAG_COMMON(1,2,216)
}
},
{
{
MR_TAG_COMMON(0,1,223),
MR_TAG_COMMON(1,2,217)
}
},
{
{
MR_TAG_COMMON(0,1,224),
MR_TAG_COMMON(1,2,218)
}
},
{
{
MR_TAG_COMMON(0,1,225),
MR_TAG_COMMON(1,2,219)
}
},
{
{
MR_TAG_COMMON(0,1,226),
MR_TAG_COMMON(1,2,220)
}
},
{
{
MR_TAG_COMMON(0,1,227),
MR_TAG_COMMON(1,2,221)
}
},
{
{
MR_TAG_COMMON(0,1,228),
MR_TAG_COMMON(1,2,222)
}
},
{
{
MR_TAG_COMMON(0,1,229),
MR_TAG_COMMON(1,2,223)
}
},
{
{
MR_TAG_COMMON(0,1,230),
MR_TAG_COMMON(1,2,224)
}
},
{
{
MR_TAG_COMMON(0,1,231),
MR_TAG_COMMON(1,2,225)
}
},
{
{
MR_TAG_COMMON(0,1,232),
MR_TAG_COMMON(1,2,226)
}
},
{
{
MR_TAG_COMMON(0,1,233),
MR_TAG_COMMON(1,2,227)
}
},
{
{
MR_TAG_COMMON(0,1,234),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(0,1,235),
MR_TAG_COMMON(1,2,229)
}
},
{
{
MR_TAG_COMMON(0,1,236),
MR_TAG_COMMON(1,2,230)
}
},
{
{
MR_TAG_COMMON(0,1,237),
MR_TAG_COMMON(1,2,231)
}
},
{
{
MR_TAG_COMMON(0,1,238),
MR_TAG_COMMON(1,2,232)
}
},
{
{
MR_TAG_COMMON(0,1,239),
MR_TAG_COMMON(1,2,233)
}
},
{
{
MR_TAG_COMMON(0,1,240),
MR_TAG_COMMON(1,2,234)
}
},
{
{
MR_TAG_COMMON(0,1,241),
MR_TAG_COMMON(1,2,235)
}
},
{
{
MR_TAG_COMMON(0,1,242),
MR_TAG_COMMON(1,2,236)
}
},
{
{
MR_TAG_COMMON(0,1,243),
MR_TAG_COMMON(1,2,237)
}
},
{
{
MR_TAG_COMMON(0,1,244),
MR_TAG_COMMON(1,2,238)
}
},
{
{
MR_TAG_COMMON(0,1,245),
MR_TAG_COMMON(1,2,239)
}
},
{
{
MR_TAG_COMMON(0,1,246),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(0,1,247),
MR_TAG_COMMON(1,2,241)
}
},
{
{
MR_TAG_COMMON(0,1,248),
MR_TAG_COMMON(1,2,242)
}
},
{
{
MR_TAG_COMMON(0,1,249),
MR_TAG_COMMON(1,2,243)
}
},
{
{
MR_TAG_COMMON(0,1,250),
MR_TAG_COMMON(1,2,244)
}
},
{
{
MR_TAG_COMMON(0,1,251),
MR_TAG_COMMON(1,2,245)
}
},
{
{
MR_TAG_COMMON(0,1,252),
MR_TAG_COMMON(1,2,246)
}
},
{
{
MR_TAG_COMMON(0,1,253),
MR_TAG_COMMON(1,2,247)
}
},
{
{
MR_TAG_COMMON(0,1,254),
MR_TAG_COMMON(1,2,248)
}
},
{
{
MR_TAG_COMMON(0,1,255),
MR_TAG_COMMON(1,2,249)
}
},
{
{
MR_TAG_COMMON(0,1,256),
MR_TAG_COMMON(1,2,250)
}
},
{
{
MR_TAG_COMMON(0,1,257),
MR_TAG_COMMON(1,2,251)
}
},
{
{
MR_TAG_COMMON(0,1,258),
MR_TAG_COMMON(1,2,252)
}
},
{
{
MR_TAG_COMMON(0,1,259),
MR_TAG_COMMON(1,2,253)
}
},
{
{
MR_TAG_COMMON(0,1,260),
MR_TAG_COMMON(1,2,254)
}
},
{
{
MR_TAG_COMMON(0,1,261),
MR_TAG_COMMON(1,2,255)
}
},
{
{
MR_TAG_COMMON(0,1,262),
MR_TAG_COMMON(1,2,256)
}
},
{
{
MR_TAG_COMMON(0,1,263),
MR_TAG_COMMON(1,2,257)
}
},
{
{
MR_TAG_COMMON(0,1,264),
MR_TAG_COMMON(1,2,258)
}
},
{
{
MR_TAG_COMMON(0,1,265),
MR_TAG_COMMON(1,2,259)
}
},
{
{
MR_TAG_COMMON(0,1,266),
MR_TAG_COMMON(1,2,260)
}
},
{
{
MR_TAG_COMMON(0,1,267),
MR_TAG_COMMON(1,2,261)
}
},
{
{
MR_TAG_COMMON(0,1,268),
MR_TAG_COMMON(1,2,262)
}
},
{
{
MR_TAG_COMMON(0,1,269),
MR_TAG_COMMON(1,2,263)
}
},
{
{
MR_TAG_COMMON(0,1,270),
MR_TAG_COMMON(1,2,264)
}
},
{
{
MR_TAG_COMMON(0,1,271),
MR_TAG_COMMON(1,2,265)
}
},
{
{
MR_TAG_COMMON(0,1,272),
MR_TAG_COMMON(1,2,266)
}
},
{
{
MR_TAG_COMMON(0,1,273),
MR_TAG_COMMON(1,2,267)
}
},
{
{
MR_TAG_COMMON(0,1,274),
MR_TAG_COMMON(1,2,268)
}
},
{
{
MR_TAG_COMMON(0,1,275),
MR_TAG_COMMON(1,2,269)
}
},
{
{
MR_TAG_COMMON(0,1,276),
MR_TAG_COMMON(1,2,270)
}
},
{
{
MR_TAG_COMMON(0,1,277),
MR_TAG_COMMON(1,2,271)
}
},
{
{
MR_TAG_COMMON(0,1,278),
MR_TAG_COMMON(1,2,272)
}
},
{
{
MR_TAG_COMMON(0,1,279),
MR_TAG_COMMON(1,2,273)
}
},
{
{
MR_TAG_COMMON(0,1,280),
MR_TAG_COMMON(1,2,274)
}
},
{
{
MR_TAG_COMMON(0,1,281),
MR_TAG_COMMON(1,2,275)
}
},
{
{
MR_TAG_COMMON(0,1,282),
MR_TAG_COMMON(1,2,276)
}
},
{
{
MR_TAG_COMMON(0,1,283),
MR_TAG_COMMON(1,2,277)
}
},
{
{
MR_TAG_COMMON(0,1,284),
MR_TAG_COMMON(1,2,278)
}
},
{
{
MR_TAG_COMMON(0,1,285),
MR_TAG_COMMON(1,2,279)
}
},
{
{
MR_TAG_COMMON(0,1,286),
MR_TAG_COMMON(1,2,280)
}
},
{
{
MR_TAG_COMMON(0,1,287),
MR_TAG_COMMON(1,2,281)
}
},
{
{
MR_TAG_COMMON(0,1,288),
MR_TAG_COMMON(1,2,282)
}
},
{
{
MR_TAG_COMMON(0,1,289),
MR_TAG_COMMON(1,2,283)
}
},
{
{
MR_TAG_COMMON(0,1,290),
MR_TAG_COMMON(1,2,284)
}
},
{
{
MR_TAG_COMMON(0,1,291),
MR_TAG_COMMON(1,2,285)
}
},
{
{
MR_TAG_COMMON(0,1,292),
MR_TAG_COMMON(1,2,286)
}
},
{
{
MR_TAG_COMMON(0,1,293),
MR_TAG_COMMON(1,2,287)
}
},
{
{
MR_TAG_COMMON(0,1,294),
MR_TAG_COMMON(1,2,288)
}
},
{
{
MR_TAG_COMMON(0,1,295),
MR_TAG_COMMON(1,2,289)
}
},
{
{
MR_TAG_COMMON(0,1,296),
MR_TAG_COMMON(1,2,290)
}
},
{
{
MR_TAG_COMMON(0,1,297),
MR_TAG_COMMON(1,2,291)
}
},
{
{
MR_TAG_COMMON(0,1,298),
MR_TAG_COMMON(1,2,292)
}
},
{
{
MR_TAG_COMMON(0,1,299),
MR_TAG_COMMON(1,2,293)
}
},
{
{
MR_TAG_COMMON(0,1,300),
MR_TAG_COMMON(1,2,294)
}
},
{
{
MR_TAG_COMMON(0,1,301),
MR_TAG_COMMON(1,2,295)
}
},
{
{
MR_TAG_COMMON(0,1,302),
MR_TAG_COMMON(1,2,296)
}
},
{
{
MR_TAG_COMMON(0,1,303),
MR_TAG_COMMON(1,2,297)
}
},
{
{
MR_TAG_COMMON(0,1,304),
MR_TAG_COMMON(1,2,298)
}
},
{
{
MR_TAG_COMMON(0,1,305),
MR_TAG_COMMON(1,2,299)
}
},
{
{
MR_TAG_COMMON(0,1,306),
MR_TAG_COMMON(1,2,300)
}
},
{
{
MR_TAG_COMMON(0,1,307),
MR_TAG_COMMON(1,2,301)
}
},
{
{
MR_TAG_COMMON(0,1,308),
MR_TAG_COMMON(1,2,302)
}
},
{
{
MR_TAG_COMMON(0,1,309),
MR_TAG_COMMON(1,2,303)
}
},
{
{
MR_TAG_COMMON(0,1,310),
MR_TAG_COMMON(1,2,304)
}
},
{
{
MR_TAG_COMMON(0,1,311),
MR_TAG_COMMON(1,2,305)
}
},
{
{
MR_TAG_COMMON(0,1,312),
MR_TAG_COMMON(1,2,306)
}
},
{
{
MR_TAG_COMMON(0,1,313),
MR_TAG_COMMON(1,2,307)
}
},
{
{
MR_TAG_COMMON(0,1,314),
MR_TAG_COMMON(1,2,308)
}
},
{
{
MR_TAG_COMMON(0,1,315),
MR_TAG_COMMON(1,2,309)
}
},
{
{
MR_TAG_COMMON(0,1,316),
MR_TAG_COMMON(1,2,310)
}
},
{
{
MR_TAG_COMMON(0,1,317),
MR_TAG_COMMON(1,2,311)
}
},
{
{
MR_TAG_COMMON(0,1,318),
MR_TAG_COMMON(1,2,312)
}
},
{
{
MR_TAG_COMMON(0,1,319),
MR_TAG_COMMON(1,2,313)
}
},
{
{
MR_TAG_COMMON(0,1,320),
MR_TAG_COMMON(1,2,314)
}
},
{
{
MR_TAG_COMMON(0,1,321),
MR_TAG_COMMON(1,2,315)
}
},
{
{
MR_TAG_COMMON(0,1,322),
MR_TAG_COMMON(1,2,316)
}
},
{
{
MR_TAG_COMMON(0,1,323),
MR_TAG_COMMON(1,2,317)
}
},
{
{
MR_TAG_COMMON(0,1,324),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(0,1,325),
MR_TAG_COMMON(1,2,319)
}
},
{
{
MR_TAG_COMMON(0,1,326),
MR_TAG_COMMON(1,2,320)
}
},
{
{
MR_TAG_COMMON(0,1,327),
MR_TAG_COMMON(1,2,321)
}
},
{
{
MR_TAG_COMMON(0,1,328),
MR_TAG_COMMON(1,2,322)
}
},
{
{
MR_TAG_COMMON(0,1,329),
MR_TAG_COMMON(1,2,323)
}
},
{
{
MR_TAG_COMMON(0,1,330),
MR_TAG_COMMON(1,2,324)
}
},
{
{
MR_TAG_COMMON(0,1,331),
MR_TAG_COMMON(1,2,325)
}
},
{
{
MR_TAG_COMMON(0,1,332),
MR_TAG_COMMON(1,2,326)
}
},
{
{
MR_TAG_COMMON(0,1,333),
MR_TAG_COMMON(1,2,327)
}
},
{
{
MR_TAG_COMMON(0,1,334),
MR_TAG_COMMON(1,2,328)
}
},
{
{
MR_TAG_COMMON(0,1,335),
MR_TAG_COMMON(1,2,329)
}
},
{
{
MR_TAG_COMMON(0,1,336),
MR_TAG_COMMON(1,2,330)
}
},
{
{
MR_TAG_COMMON(0,1,337),
MR_TAG_COMMON(1,2,331)
}
},
{
{
MR_TAG_COMMON(0,1,338),
MR_TAG_COMMON(1,2,332)
}
},
{
{
MR_TAG_COMMON(0,1,339),
MR_TAG_COMMON(1,2,333)
}
},
{
{
MR_TAG_COMMON(0,1,340),
MR_TAG_COMMON(1,2,334)
}
},
{
{
MR_TAG_COMMON(0,1,341),
MR_TAG_COMMON(1,2,335)
}
},
{
{
MR_TAG_COMMON(0,1,342),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(0,1,343),
MR_TAG_COMMON(1,2,337)
}
},
{
{
MR_TAG_COMMON(0,1,344),
MR_TAG_COMMON(1,2,338)
}
},
{
{
MR_TAG_COMMON(0,1,345),
MR_TAG_COMMON(1,2,339)
}
},
{
{
MR_TAG_COMMON(0,1,346),
MR_TAG_COMMON(1,2,340)
}
},
{
{
MR_TAG_COMMON(0,1,347),
MR_TAG_COMMON(1,2,341)
}
},
{
{
MR_TAG_COMMON(0,1,348),
MR_TAG_COMMON(1,2,342)
}
},
{
{
MR_TAG_COMMON(0,1,349),
MR_TAG_COMMON(1,2,343)
}
},
{
{
MR_TAG_COMMON(0,1,350),
MR_TAG_COMMON(1,2,344)
}
},
{
{
MR_TAG_COMMON(0,1,351),
MR_TAG_COMMON(1,2,345)
}
},
{
{
MR_TAG_COMMON(0,1,352),
MR_TAG_COMMON(1,2,346)
}
},
{
{
MR_TAG_COMMON(0,1,353),
MR_TAG_COMMON(1,2,347)
}
},
{
{
MR_TAG_COMMON(0,1,354),
MR_TAG_COMMON(1,2,348)
}
},
{
{
MR_TAG_COMMON(0,1,355),
MR_TAG_COMMON(1,2,349)
}
},
{
{
MR_TAG_COMMON(0,1,356),
MR_TAG_COMMON(1,2,350)
}
},
{
{
MR_TAG_COMMON(0,1,357),
MR_TAG_COMMON(1,2,351)
}
},
{
{
MR_TAG_COMMON(0,1,358),
MR_TAG_COMMON(1,2,352)
}
},
{
{
MR_TAG_COMMON(0,1,359),
MR_TAG_COMMON(1,2,353)
}
},
{
{
MR_TAG_COMMON(0,1,360),
MR_TAG_COMMON(1,2,354)
}
},
{
{
MR_TAG_COMMON(0,1,361),
MR_TAG_COMMON(1,2,355)
}
},
{
{
MR_TAG_COMMON(0,1,362),
MR_TAG_COMMON(1,2,356)
}
},
{
{
MR_TAG_COMMON(0,1,363),
MR_TAG_COMMON(1,2,357)
}
},
{
{
MR_TAG_COMMON(0,1,364),
MR_TAG_COMMON(1,2,358)
}
},
{
{
MR_TAG_COMMON(0,1,365),
MR_TAG_COMMON(1,2,359)
}
},
{
{
MR_TAG_COMMON(0,1,366),
MR_TAG_COMMON(1,2,360)
}
},
{
{
MR_TAG_COMMON(0,1,367),
MR_TAG_COMMON(1,2,361)
}
},
{
{
MR_TAG_COMMON(0,1,368),
MR_TAG_COMMON(1,2,362)
}
},
{
{
MR_TAG_COMMON(0,1,369),
MR_TAG_COMMON(1,2,363)
}
},
{
{
MR_TAG_COMMON(0,1,370),
MR_TAG_COMMON(1,2,364)
}
},
{
{
MR_TAG_COMMON(0,1,371),
MR_TAG_COMMON(1,2,365)
}
},
{
{
MR_TAG_COMMON(0,1,372),
MR_TAG_COMMON(1,2,366)
}
},
{
{
MR_TAG_COMMON(0,1,373),
MR_TAG_COMMON(1,2,367)
}
},
{
{
MR_TAG_COMMON(0,1,374),
MR_TAG_COMMON(1,2,368)
}
},
{
{
MR_TAG_COMMON(0,1,375),
MR_TAG_COMMON(1,2,369)
}
},
{
{
MR_TAG_COMMON(0,1,376),
MR_TAG_COMMON(1,2,370)
}
},
{
{
MR_TAG_COMMON(0,1,377),
MR_TAG_COMMON(1,2,371)
}
},
{
{
MR_TAG_COMMON(0,1,378),
MR_TAG_COMMON(1,2,372)
}
},
{
{
MR_TAG_COMMON(0,1,379),
MR_TAG_COMMON(1,2,373)
}
},
{
{
MR_TAG_COMMON(0,1,380),
MR_TAG_COMMON(1,2,374)
}
},
{
{
MR_TAG_COMMON(0,1,381),
MR_TAG_COMMON(1,2,375)
}
},
{
{
MR_TAG_COMMON(0,1,382),
MR_TAG_COMMON(1,2,376)
}
},
{
{
MR_TAG_COMMON(0,1,383),
MR_TAG_COMMON(1,2,377)
}
},
{
{
MR_TAG_COMMON(0,1,384),
MR_TAG_COMMON(1,2,378)
}
},
{
{
MR_TAG_COMMON(0,1,385),
MR_TAG_COMMON(1,2,379)
}
},
{
{
MR_TAG_COMMON(0,1,386),
MR_TAG_COMMON(1,2,380)
}
},
{
{
MR_TAG_COMMON(0,1,387),
MR_TAG_COMMON(1,2,381)
}
},
{
{
MR_TAG_COMMON(0,1,388),
MR_TAG_COMMON(1,2,382)
}
},
{
{
MR_TAG_COMMON(0,1,389),
MR_TAG_COMMON(1,2,383)
}
},
{
{
MR_TAG_COMMON(0,1,390),
MR_TAG_COMMON(1,2,384)
}
},
{
{
MR_TAG_COMMON(0,1,391),
MR_TAG_COMMON(1,2,385)
}
},
{
{
MR_TAG_COMMON(0,1,392),
MR_TAG_COMMON(1,2,386)
}
},
{
{
MR_TAG_COMMON(0,1,393),
MR_TAG_COMMON(1,2,387)
}
},
{
{
MR_TAG_COMMON(0,1,394),
MR_TAG_COMMON(1,2,388)
}
},
{
{
MR_TAG_COMMON(0,1,395),
MR_TAG_COMMON(1,2,389)
}
},
{
{
MR_TAG_COMMON(0,1,396),
MR_TAG_COMMON(1,2,390)
}
},
{
{
MR_TAG_COMMON(0,1,397),
MR_TAG_COMMON(1,2,391)
}
},
{
{
MR_TAG_COMMON(0,1,398),
MR_TAG_COMMON(1,2,392)
}
},
{
{
MR_TAG_COMMON(0,1,399),
MR_TAG_COMMON(1,2,393)
}
},
{
{
MR_TAG_COMMON(0,1,400),
MR_TAG_COMMON(1,2,394)
}
},
{
{
MR_TAG_COMMON(0,1,401),
MR_TAG_COMMON(1,2,395)
}
},
{
{
MR_TAG_COMMON(0,1,402),
MR_TAG_COMMON(1,2,396)
}
},
{
{
MR_TAG_COMMON(0,1,403),
MR_TAG_COMMON(1,2,397)
}
},
{
{
MR_TAG_COMMON(0,1,404),
MR_TAG_COMMON(1,2,398)
}
},
{
{
MR_TAG_COMMON(0,1,405),
MR_TAG_COMMON(1,2,399)
}
},
{
{
MR_TAG_COMMON(0,1,406),
MR_TAG_COMMON(1,2,400)
}
},
{
{
MR_TAG_COMMON(0,1,407),
MR_TAG_COMMON(1,2,401)
}
},
{
{
MR_TAG_COMMON(0,1,408),
MR_TAG_COMMON(1,2,402)
}
},
{
{
MR_TAG_COMMON(0,1,409),
MR_TAG_COMMON(1,2,403)
}
},
{
{
MR_TAG_COMMON(0,1,410),
MR_TAG_COMMON(1,2,404)
}
},
{
{
MR_TAG_COMMON(0,1,411),
MR_TAG_COMMON(1,2,405)
}
},
{
{
MR_TAG_COMMON(0,1,412),
MR_TAG_COMMON(1,2,406)
}
},
{
{
MR_TAG_COMMON(0,1,413),
MR_TAG_COMMON(1,2,407)
}
},
{
{
MR_TAG_COMMON(0,1,414),
MR_TAG_COMMON(1,2,408)
}
},
{
{
MR_TAG_COMMON(0,1,415),
MR_TAG_COMMON(1,2,409)
}
},
{
{
MR_TAG_COMMON(0,1,416),
MR_TAG_COMMON(1,2,410)
}
},
{
{
MR_TAG_COMMON(0,1,417),
MR_TAG_COMMON(1,2,411)
}
},
{
{
MR_TAG_COMMON(0,1,418),
MR_TAG_COMMON(1,2,412)
}
},
{
{
MR_TAG_COMMON(0,1,419),
MR_TAG_COMMON(1,2,413)
}
},
{
{
MR_TAG_COMMON(0,1,420),
MR_TAG_COMMON(1,2,414)
}
},
{
{
MR_TAG_COMMON(0,1,421),
MR_TAG_COMMON(1,2,415)
}
},
{
{
MR_TAG_COMMON(0,1,422),
MR_TAG_COMMON(1,2,416)
}
},
{
{
MR_TAG_COMMON(0,1,423),
MR_TAG_COMMON(1,2,417)
}
},
{
{
MR_TAG_COMMON(0,1,424),
MR_TAG_COMMON(1,2,418)
}
},
{
{
MR_TAG_COMMON(0,1,425),
MR_TAG_COMMON(1,2,419)
}
},
{
{
MR_TAG_COMMON(0,1,426),
MR_TAG_COMMON(1,2,420)
}
},
{
{
MR_TAG_COMMON(0,1,427),
MR_TAG_COMMON(1,2,421)
}
},
{
{
MR_TAG_COMMON(0,1,428),
MR_TAG_COMMON(1,2,422)
}
},
{
{
MR_TAG_COMMON(0,1,429),
MR_TAG_COMMON(1,2,423)
}
},
{
{
MR_TAG_COMMON(0,1,430),
MR_TAG_COMMON(1,2,424)
}
},
{
{
MR_TAG_COMMON(0,1,431),
MR_TAG_COMMON(1,2,425)
}
},
{
{
MR_TAG_COMMON(0,1,432),
MR_TAG_COMMON(1,2,426)
}
},
{
{
MR_TAG_COMMON(0,1,433),
MR_TAG_COMMON(1,2,427)
}
},
{
{
MR_TAG_COMMON(0,1,434),
MR_TAG_COMMON(1,2,428)
}
},
{
{
MR_TAG_COMMON(0,1,435),
MR_TAG_COMMON(1,2,429)
}
},
{
{
MR_TAG_COMMON(0,1,436),
MR_TAG_COMMON(1,2,430)
}
},
{
{
MR_TAG_COMMON(0,1,437),
MR_TAG_COMMON(1,2,431)
}
},
{
{
MR_TAG_COMMON(0,1,438),
MR_TAG_COMMON(1,2,432)
}
},
{
{
MR_TAG_COMMON(0,1,439),
MR_TAG_COMMON(1,2,433)
}
},
{
{
MR_TAG_COMMON(0,1,440),
MR_TAG_COMMON(1,2,434)
}
},
{
{
MR_TAG_COMMON(0,1,441),
MR_TAG_COMMON(1,2,435)
}
},
{
{
MR_TAG_COMMON(0,1,442),
MR_TAG_COMMON(1,2,436)
}
},
{
{
MR_TAG_COMMON(0,1,443),
MR_TAG_COMMON(1,2,437)
}
},
{
{
MR_TAG_COMMON(0,1,444),
MR_TAG_COMMON(1,2,438)
}
},
{
{
MR_TAG_COMMON(0,1,445),
MR_TAG_COMMON(1,2,439)
}
},
{
{
MR_TAG_COMMON(0,1,446),
MR_TAG_COMMON(1,2,440)
}
},
{
{
MR_TAG_COMMON(0,1,447),
MR_TAG_COMMON(1,2,441)
}
},
{
{
MR_TAG_COMMON(0,1,448),
MR_TAG_COMMON(1,2,442)
}
},
{
{
MR_TAG_COMMON(0,1,449),
MR_TAG_COMMON(1,2,443)
}
},
{
{
MR_TAG_COMMON(0,1,450),
MR_TAG_COMMON(1,2,444)
}
},
{
{
MR_TAG_COMMON(0,1,451),
MR_TAG_COMMON(1,2,445)
}
},
{
{
MR_TAG_COMMON(0,1,452),
MR_TAG_COMMON(1,2,446)
}
},
{
{
MR_TAG_COMMON(0,1,453),
MR_TAG_COMMON(1,2,447)
}
},
{
{
MR_TAG_COMMON(0,1,454),
MR_TAG_COMMON(1,2,448)
}
},
{
{
MR_TAG_COMMON(0,1,455),
MR_TAG_COMMON(1,2,449)
}
},
{
{
MR_TAG_COMMON(0,1,456),
MR_TAG_COMMON(1,2,450)
}
},
{
{
MR_TAG_COMMON(0,1,457),
MR_TAG_COMMON(1,2,451)
}
},
{
{
MR_TAG_COMMON(0,1,458),
MR_TAG_COMMON(1,2,452)
}
},
{
{
MR_TAG_COMMON(0,1,459),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(0,1,460),
MR_TAG_COMMON(1,2,454)
}
},
{
{
MR_TAG_COMMON(0,1,461),
MR_TAG_COMMON(1,2,455)
}
},
{
{
MR_TAG_COMMON(0,1,462),
MR_TAG_COMMON(1,2,456)
}
},
{
{
MR_TAG_COMMON(0,1,463),
MR_TAG_COMMON(1,2,457)
}
},
{
{
MR_TAG_COMMON(0,1,464),
MR_TAG_COMMON(1,2,458)
}
},
{
{
MR_TAG_COMMON(0,1,465),
MR_TAG_COMMON(1,2,459)
}
},
{
{
MR_TAG_COMMON(0,1,466),
MR_TAG_COMMON(1,2,460)
}
},
{
{
MR_TAG_COMMON(0,1,467),
MR_TAG_COMMON(1,2,461)
}
},
{
{
MR_TAG_COMMON(0,1,468),
MR_TAG_COMMON(1,2,462)
}
},
{
{
MR_TAG_COMMON(0,1,469),
MR_TAG_COMMON(1,2,463)
}
},
{
{
MR_TAG_COMMON(0,1,470),
MR_TAG_COMMON(1,2,464)
}
},
{
{
MR_TAG_COMMON(0,1,471),
MR_TAG_COMMON(1,2,465)
}
},
{
{
MR_TAG_COMMON(0,1,472),
MR_TAG_COMMON(1,2,466)
}
},
{
{
MR_TAG_COMMON(0,1,473),
MR_TAG_COMMON(1,2,467)
}
},
{
{
MR_TAG_COMMON(0,1,474),
MR_TAG_COMMON(1,2,468)
}
},
{
{
MR_TAG_COMMON(0,1,475),
MR_TAG_COMMON(1,2,469)
}
},
{
{
MR_TAG_COMMON(0,1,476),
MR_TAG_COMMON(1,2,470)
}
},
{
{
MR_TAG_COMMON(0,1,477),
MR_TAG_COMMON(1,2,471)
}
},
{
{
MR_TAG_COMMON(0,1,478),
MR_TAG_COMMON(1,2,472)
}
},
{
{
MR_TAG_COMMON(0,1,479),
MR_TAG_COMMON(1,2,473)
}
},
{
{
MR_TAG_COMMON(0,1,480),
MR_TAG_COMMON(1,2,474)
}
},
{
{
MR_TAG_COMMON(0,1,481),
MR_TAG_COMMON(1,2,475)
}
},
{
{
MR_TAG_COMMON(0,1,482),
MR_TAG_COMMON(1,2,476)
}
},
{
{
MR_TAG_COMMON(0,1,483),
MR_TAG_COMMON(1,2,477)
}
},
{
{
MR_TAG_COMMON(0,1,484),
MR_TAG_COMMON(1,2,478)
}
},
{
{
MR_TAG_COMMON(0,1,485),
MR_TAG_COMMON(1,2,479)
}
},
{
{
MR_TAG_COMMON(0,1,486),
MR_TAG_COMMON(1,2,480)
}
},
{
{
MR_TAG_COMMON(0,1,487),
MR_TAG_COMMON(1,2,481)
}
},
{
{
MR_TAG_COMMON(0,1,488),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(0,1,489),
MR_TAG_COMMON(1,2,483)
}
},
{
{
MR_TAG_COMMON(0,1,490),
MR_TAG_COMMON(1,2,484)
}
},
{
{
MR_TAG_COMMON(0,1,491),
MR_TAG_COMMON(1,2,485)
}
},
{
{
MR_TAG_COMMON(0,1,492),
MR_TAG_COMMON(1,2,486)
}
},
{
{
MR_TAG_COMMON(0,1,493),
MR_TAG_COMMON(1,2,487)
}
},
{
{
MR_TAG_COMMON(0,1,494),
MR_TAG_COMMON(1,2,488)
}
},
{
{
MR_TAG_COMMON(0,1,495),
MR_TAG_COMMON(1,2,489)
}
},
{
{
MR_TAG_COMMON(0,1,496),
MR_TAG_COMMON(1,2,490)
}
},
{
{
MR_TAG_COMMON(0,1,497),
MR_TAG_COMMON(1,2,491)
}
},
{
{
MR_TAG_COMMON(0,1,498),
MR_TAG_COMMON(1,2,492)
}
},
{
{
MR_TAG_COMMON(0,1,499),
MR_TAG_COMMON(1,2,493)
}
},
{
{
MR_TAG_COMMON(0,1,500),
MR_TAG_COMMON(1,2,494)
}
},
{
{
MR_TAG_COMMON(0,1,501),
MR_TAG_COMMON(1,2,495)
}
},
{
{
MR_TAG_COMMON(0,1,502),
MR_TAG_COMMON(1,2,496)
}
},
{
{
MR_TAG_COMMON(0,1,503),
MR_TAG_COMMON(1,2,497)
}
},
{
{
MR_TAG_COMMON(0,1,504),
MR_TAG_COMMON(1,2,498)
}
},
{
{
MR_TAG_COMMON(0,1,505),
MR_TAG_COMMON(1,2,499)
}
},
{
{
MR_TAG_COMMON(0,1,506),
MR_TAG_COMMON(1,2,500)
}
},
{
{
MR_TAG_COMMON(0,1,507),
MR_TAG_COMMON(1,2,501)
}
},
{
{
MR_TAG_COMMON(0,1,508),
MR_TAG_COMMON(1,2,502)
}
},
{
{
MR_TAG_COMMON(0,1,509),
MR_TAG_COMMON(1,2,503)
}
},
{
{
MR_TAG_COMMON(0,1,510),
MR_TAG_COMMON(1,2,504)
}
},
{
{
MR_TAG_COMMON(0,1,511),
MR_TAG_COMMON(1,2,505)
}
},
{
{
MR_TAG_COMMON(0,1,512),
MR_TAG_COMMON(1,2,506)
}
},
{
{
MR_TAG_COMMON(0,1,513),
MR_TAG_COMMON(1,2,507)
}
},
{
{
MR_TAG_COMMON(0,1,514),
MR_TAG_COMMON(1,2,508)
}
},
{
{
MR_TAG_COMMON(0,1,515),
MR_TAG_COMMON(1,2,509)
}
},
{
{
MR_TAG_COMMON(0,1,516),
MR_TAG_COMMON(1,2,510)
}
},
{
{
MR_TAG_COMMON(0,1,517),
MR_TAG_COMMON(1,2,511)
}
},
{
{
MR_TAG_COMMON(0,1,518),
MR_TAG_COMMON(1,2,512)
}
},
{
{
MR_TAG_COMMON(0,1,519),
MR_TAG_COMMON(1,2,513)
}
},
{
{
MR_TAG_COMMON(0,1,520),
MR_TAG_COMMON(1,2,514)
}
},
{
{
MR_TAG_COMMON(0,1,521),
MR_TAG_COMMON(1,2,515)
}
},
{
{
MR_TAG_COMMON(0,1,522),
MR_TAG_COMMON(1,2,516)
}
},
{
{
MR_TAG_COMMON(0,1,523),
MR_TAG_COMMON(1,2,517)
}
},
{
{
MR_TAG_COMMON(0,1,524),
MR_TAG_COMMON(1,2,518)
}
},
{
{
MR_TAG_COMMON(0,1,525),
MR_TAG_COMMON(1,2,519)
}
},
{
{
MR_TAG_COMMON(0,1,526),
MR_TAG_COMMON(1,2,520)
}
},
{
{
MR_TAG_COMMON(0,1,527),
MR_TAG_COMMON(1,2,521)
}
},
{
{
MR_TAG_COMMON(0,1,528),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(0,1,529),
MR_TAG_COMMON(1,2,523)
}
},
{
{
MR_TAG_COMMON(0,1,530),
MR_TAG_COMMON(1,2,524)
}
},
{
{
MR_TAG_COMMON(0,1,531),
MR_TAG_COMMON(1,2,525)
}
},
{
{
MR_TAG_COMMON(0,1,532),
MR_TAG_COMMON(1,2,526)
}
},
{
{
MR_TAG_COMMON(0,1,533),
MR_TAG_COMMON(1,2,527)
}
},
{
{
MR_TAG_COMMON(0,1,534),
MR_TAG_COMMON(1,2,528)
}
},
{
{
MR_TAG_COMMON(0,1,535),
MR_TAG_COMMON(1,2,529)
}
},
{
{
MR_TAG_COMMON(0,1,536),
MR_TAG_COMMON(1,2,530)
}
},
{
{
MR_TAG_COMMON(0,1,537),
MR_TAG_COMMON(1,2,531)
}
},
{
{
MR_TAG_COMMON(0,1,538),
MR_TAG_COMMON(1,2,532)
}
},
{
{
MR_TAG_COMMON(0,1,539),
MR_TAG_COMMON(1,2,533)
}
},
{
{
MR_TAG_COMMON(0,1,540),
MR_TAG_COMMON(1,2,534)
}
},
{
{
MR_TAG_COMMON(0,1,541),
MR_TAG_COMMON(1,2,535)
}
},
{
{
MR_TAG_COMMON(0,1,542),
MR_TAG_COMMON(1,2,536)
}
},
{
{
MR_TAG_COMMON(0,1,543),
MR_TAG_COMMON(1,2,537)
}
},
{
{
MR_TAG_COMMON(0,1,544),
MR_TAG_COMMON(1,2,538)
}
},
{
{
MR_TAG_COMMON(0,1,545),
MR_TAG_COMMON(1,2,539)
}
},
{
{
MR_TAG_COMMON(0,1,546),
MR_TAG_COMMON(1,2,540)
}
},
{
{
MR_TAG_COMMON(0,1,547),
MR_TAG_COMMON(1,2,541)
}
},
{
{
MR_TAG_COMMON(0,1,548),
MR_TAG_COMMON(1,2,542)
}
},
{
{
MR_TAG_COMMON(0,1,549),
MR_TAG_COMMON(1,2,543)
}
},
{
{
MR_TAG_COMMON(0,1,550),
MR_TAG_COMMON(1,2,544)
}
},
{
{
MR_TAG_COMMON(0,1,551),
MR_TAG_COMMON(1,2,545)
}
},
{
{
MR_TAG_COMMON(0,1,552),
MR_TAG_COMMON(1,2,546)
}
},
{
{
MR_TAG_COMMON(0,1,553),
MR_TAG_COMMON(1,2,547)
}
},
{
{
MR_TAG_COMMON(0,1,554),
MR_TAG_COMMON(1,2,548)
}
},
{
{
MR_TAG_COMMON(0,1,555),
MR_TAG_COMMON(1,2,549)
}
},
{
{
MR_TAG_COMMON(0,1,556),
MR_TAG_COMMON(1,2,550)
}
},
{
{
MR_TAG_COMMON(0,1,557),
MR_TAG_COMMON(1,2,551)
}
},
{
{
MR_TAG_COMMON(0,1,558),
MR_TAG_COMMON(1,2,552)
}
},
{
{
MR_TAG_COMMON(0,1,559),
MR_TAG_COMMON(1,2,553)
}
},
{
{
MR_TAG_COMMON(0,1,560),
MR_TAG_COMMON(1,2,554)
}
},
{
{
MR_TAG_COMMON(0,1,561),
MR_TAG_COMMON(1,2,555)
}
},
{
{
MR_TAG_COMMON(0,1,562),
MR_TAG_COMMON(1,2,556)
}
},
{
{
MR_TAG_COMMON(0,1,563),
MR_TAG_COMMON(1,2,557)
}
},
{
{
MR_TAG_COMMON(0,1,564),
MR_TAG_COMMON(1,2,558)
}
},
{
{
MR_TAG_COMMON(0,1,565),
MR_TAG_COMMON(1,2,559)
}
},
{
{
MR_TAG_COMMON(0,1,566),
MR_TAG_COMMON(1,2,560)
}
},
{
{
MR_TAG_COMMON(0,1,567),
MR_TAG_COMMON(1,2,561)
}
},
{
{
MR_TAG_COMMON(0,1,568),
MR_TAG_COMMON(1,2,562)
}
},
{
{
MR_TAG_COMMON(0,1,569),
MR_TAG_COMMON(1,2,563)
}
},
{
{
MR_TAG_COMMON(0,1,570),
MR_TAG_COMMON(1,2,564)
}
},
{
{
MR_TAG_COMMON(0,1,571),
MR_TAG_COMMON(1,2,565)
}
},
{
{
MR_TAG_COMMON(0,1,572),
MR_TAG_COMMON(1,2,566)
}
},
{
{
MR_TAG_COMMON(0,1,573),
MR_TAG_COMMON(1,2,567)
}
},
{
{
MR_TAG_COMMON(0,1,574),
MR_TAG_COMMON(1,2,568)
}
},
{
{
MR_TAG_COMMON(0,1,575),
MR_TAG_COMMON(1,2,569)
}
},
{
{
MR_TAG_COMMON(0,1,576),
MR_TAG_COMMON(1,2,570)
}
},
{
{
MR_TAG_COMMON(0,1,577),
MR_TAG_COMMON(1,2,571)
}
},
{
{
MR_TAG_COMMON(0,1,578),
MR_TAG_COMMON(1,2,572)
}
},
{
{
MR_TAG_COMMON(0,1,579),
MR_TAG_COMMON(1,2,573)
}
},
{
{
MR_TAG_COMMON(0,1,580),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(0,1,581),
MR_TAG_COMMON(1,2,575)
}
},
{
{
MR_TAG_COMMON(0,1,582),
MR_TAG_COMMON(1,2,576)
}
},
{
{
MR_TAG_COMMON(0,1,583),
MR_TAG_COMMON(1,2,577)
}
},
{
{
MR_TAG_COMMON(0,1,584),
MR_TAG_COMMON(1,2,578)
}
},
{
{
MR_TAG_COMMON(0,1,585),
MR_TAG_COMMON(1,2,579)
}
},
{
{
MR_TAG_COMMON(0,1,586),
MR_TAG_COMMON(1,2,580)
}
},
{
{
MR_TAG_COMMON(0,1,587),
MR_TAG_COMMON(1,2,581)
}
},
{
{
MR_TAG_COMMON(0,1,588),
MR_TAG_COMMON(1,2,582)
}
},
{
{
MR_TAG_COMMON(0,1,589),
MR_TAG_COMMON(1,2,583)
}
},
{
{
MR_TAG_COMMON(0,1,590),
MR_TAG_COMMON(1,2,584)
}
},
{
{
MR_TAG_COMMON(0,1,591),
MR_TAG_COMMON(1,2,585)
}
},
{
{
MR_TAG_COMMON(0,1,592),
MR_TAG_COMMON(1,2,586)
}
},
{
{
MR_TAG_COMMON(0,1,593),
MR_TAG_COMMON(1,2,587)
}
},
{
{
MR_TAG_COMMON(0,1,594),
MR_TAG_COMMON(1,2,588)
}
},
{
{
MR_TAG_COMMON(0,1,595),
MR_TAG_COMMON(1,2,589)
}
},
{
{
MR_TAG_COMMON(0,1,596),
MR_TAG_COMMON(1,2,590)
}
},
{
{
MR_TAG_COMMON(0,1,597),
MR_TAG_COMMON(1,2,591)
}
},
{
{
MR_TAG_COMMON(0,1,598),
MR_TAG_COMMON(1,2,592)
}
},
{
{
MR_TAG_COMMON(0,1,599),
MR_TAG_COMMON(1,2,593)
}
},
{
{
MR_TAG_COMMON(0,1,600),
MR_TAG_COMMON(1,2,594)
}
},
{
{
MR_TAG_COMMON(0,1,601),
MR_TAG_COMMON(1,2,595)
}
},
{
{
MR_TAG_COMMON(0,1,602),
MR_TAG_COMMON(1,2,596)
}
},
{
{
MR_TAG_COMMON(0,1,603),
MR_TAG_COMMON(1,2,597)
}
},
{
{
MR_TAG_COMMON(0,1,604),
MR_TAG_COMMON(1,2,598)
}
},
{
{
MR_TAG_COMMON(0,1,605),
MR_TAG_COMMON(1,2,599)
}
},
{
{
MR_TAG_COMMON(0,1,606),
MR_TAG_COMMON(1,2,600)
}
},
{
{
MR_TAG_COMMON(0,1,607),
MR_TAG_COMMON(1,2,601)
}
},
{
{
MR_TAG_COMMON(0,1,608),
MR_TAG_COMMON(1,2,602)
}
},
{
{
MR_TAG_COMMON(0,1,609),
MR_TAG_COMMON(1,2,603)
}
},
{
{
MR_TAG_COMMON(0,1,610),
MR_TAG_COMMON(1,2,604)
}
},
{
{
MR_TAG_COMMON(0,1,611),
MR_TAG_COMMON(1,2,605)
}
},
{
{
MR_TAG_COMMON(0,1,612),
MR_TAG_COMMON(1,2,606)
}
},
{
{
MR_TAG_COMMON(0,1,613),
MR_TAG_COMMON(1,2,607)
}
},
{
{
MR_TAG_COMMON(0,1,614),
MR_TAG_COMMON(1,2,608)
}
},
{
{
MR_TAG_COMMON(0,1,615),
MR_TAG_COMMON(1,2,609)
}
},
{
{
MR_TAG_COMMON(0,1,616),
MR_TAG_COMMON(1,2,610)
}
},
{
{
MR_TAG_COMMON(0,1,617),
MR_TAG_COMMON(1,2,611)
}
},
{
{
MR_TAG_COMMON(0,1,618),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(0,1,619),
MR_TAG_COMMON(1,2,613)
}
},
{
{
MR_TAG_COMMON(0,1,620),
MR_TAG_COMMON(1,2,614)
}
},
{
{
MR_TAG_COMMON(0,1,621),
MR_TAG_COMMON(1,2,615)
}
},
{
{
MR_TAG_COMMON(0,1,622),
MR_TAG_COMMON(1,2,616)
}
},
{
{
MR_TAG_COMMON(0,1,623),
MR_TAG_COMMON(1,2,617)
}
},
{
{
MR_TAG_COMMON(0,1,624),
MR_TAG_COMMON(1,2,618)
}
},
{
{
MR_TAG_COMMON(0,1,625),
MR_TAG_COMMON(1,2,619)
}
},
{
{
MR_TAG_COMMON(0,1,626),
MR_TAG_COMMON(1,2,620)
}
},
{
{
MR_TAG_COMMON(0,1,627),
MR_TAG_COMMON(1,2,621)
}
},
{
{
MR_TAG_COMMON(0,1,628),
MR_TAG_COMMON(1,2,622)
}
},
{
{
MR_TAG_COMMON(0,1,629),
MR_TAG_COMMON(1,2,623)
}
},
{
{
MR_TAG_COMMON(0,1,630),
MR_TAG_COMMON(1,2,624)
}
},
{
{
MR_TAG_COMMON(0,1,631),
MR_TAG_COMMON(1,2,625)
}
},
{
{
MR_TAG_COMMON(0,1,632),
MR_TAG_COMMON(1,2,626)
}
},
{
{
MR_TAG_COMMON(0,1,633),
MR_TAG_COMMON(1,2,627)
}
},
{
{
MR_TAG_COMMON(0,1,634),
MR_TAG_COMMON(1,2,628)
}
},
{
{
MR_TAG_COMMON(0,1,635),
MR_TAG_COMMON(1,2,629)
}
},
{
{
MR_TAG_COMMON(0,1,636),
MR_TAG_COMMON(1,2,630)
}
},
{
{
MR_TAG_COMMON(0,1,637),
MR_TAG_COMMON(1,2,631)
}
},
{
{
MR_TAG_COMMON(0,1,638),
MR_TAG_COMMON(1,2,632)
}
},
{
{
MR_TAG_COMMON(0,1,639),
MR_TAG_COMMON(1,2,633)
}
},
{
{
MR_TAG_COMMON(0,1,640),
MR_TAG_COMMON(1,2,634)
}
},
{
{
MR_TAG_COMMON(0,1,641),
MR_TAG_COMMON(1,2,635)
}
},
{
{
MR_TAG_COMMON(0,1,642),
MR_TAG_COMMON(1,2,636)
}
},
{
{
MR_TAG_COMMON(0,1,643),
MR_TAG_COMMON(1,2,637)
}
},
{
{
MR_TAG_COMMON(0,1,644),
MR_TAG_COMMON(1,2,638)
}
},
{
{
MR_TAG_COMMON(0,1,645),
MR_TAG_COMMON(1,2,639)
}
},
{
{
MR_TAG_COMMON(0,1,646),
MR_TAG_COMMON(1,2,640)
}
},
{
{
MR_TAG_COMMON(0,1,647),
MR_TAG_COMMON(1,2,641)
}
},
{
{
MR_TAG_COMMON(0,1,648),
MR_TAG_COMMON(1,2,642)
}
},
{
{
MR_TAG_COMMON(0,1,649),
MR_TAG_COMMON(1,2,643)
}
},
{
{
MR_TAG_COMMON(0,1,650),
MR_TAG_COMMON(1,2,644)
}
},
{
{
MR_TAG_COMMON(0,1,651),
MR_TAG_COMMON(1,2,645)
}
},
{
{
MR_TAG_COMMON(0,1,652),
MR_TAG_COMMON(1,2,646)
}
},
{
{
MR_TAG_COMMON(0,1,653),
MR_TAG_COMMON(1,2,647)
}
},
{
{
MR_TAG_COMMON(0,1,654),
MR_TAG_COMMON(1,2,648)
}
},
{
{
MR_TAG_COMMON(0,1,655),
MR_TAG_COMMON(1,2,649)
}
},
{
{
MR_TAG_COMMON(0,1,656),
MR_TAG_COMMON(1,2,650)
}
},
{
{
MR_TAG_COMMON(0,1,657),
MR_TAG_COMMON(1,2,651)
}
},
{
{
MR_TAG_COMMON(0,1,658),
MR_TAG_COMMON(1,2,652)
}
},
{
{
MR_TAG_COMMON(0,1,659),
MR_TAG_COMMON(1,2,653)
}
},
{
{
MR_TAG_COMMON(0,1,660),
MR_TAG_COMMON(1,2,654)
}
},
{
{
MR_TAG_COMMON(0,1,661),
MR_TAG_COMMON(1,2,655)
}
},
{
{
MR_TAG_COMMON(0,1,662),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(0,1,663),
MR_TAG_COMMON(1,2,657)
}
},
{
{
MR_TAG_COMMON(0,1,664),
MR_TAG_COMMON(1,2,658)
}
},
{
{
MR_TAG_COMMON(0,1,665),
MR_TAG_COMMON(1,2,659)
}
},
{
{
MR_TAG_COMMON(0,1,666),
MR_TAG_COMMON(1,2,660)
}
},
{
{
MR_TAG_COMMON(0,1,667),
MR_TAG_COMMON(1,2,661)
}
},
{
{
MR_TAG_COMMON(0,1,668),
MR_TAG_COMMON(1,2,662)
}
},
{
{
MR_TAG_COMMON(0,1,669),
MR_TAG_COMMON(1,2,663)
}
},
{
{
MR_TAG_COMMON(0,1,670),
MR_TAG_COMMON(1,2,664)
}
},
{
{
MR_TAG_COMMON(0,1,671),
MR_TAG_COMMON(1,2,665)
}
},
{
{
MR_TAG_COMMON(0,1,672),
MR_TAG_COMMON(1,2,666)
}
},
{
{
MR_TAG_COMMON(0,1,678),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(0,1,677),
MR_TAG_COMMON(1,2,668)
}
},
{
{
MR_TAG_COMMON(0,1,676),
MR_TAG_COMMON(1,2,669)
}
},
{
{
MR_TAG_COMMON(0,1,679),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(0,1,680),
MR_TAG_COMMON(1,2,671)
}
},
{
{
MR_TAG_COMMON(0,1,681),
MR_TAG_COMMON(1,2,672)
}
},
{
{
MR_TAG_COMMON(0,1,682),
MR_TAG_COMMON(1,2,673)
}
},
{
{
MR_TAG_COMMON(0,1,683),
MR_TAG_COMMON(1,2,674)
}
},
{
{
MR_TAG_COMMON(0,1,684),
MR_TAG_COMMON(1,2,675)
}
},
{
{
MR_TAG_COMMON(0,1,685),
MR_TAG_COMMON(1,2,676)
}
},
{
{
MR_TAG_COMMON(0,1,686),
MR_TAG_COMMON(1,2,677)
}
},
{
{
MR_TAG_COMMON(0,1,687),
MR_TAG_COMMON(1,2,678)
}
},
{
{
MR_TAG_COMMON(0,1,688),
MR_TAG_COMMON(1,2,679)
}
},
{
{
MR_TAG_COMMON(0,1,689),
MR_TAG_COMMON(1,2,680)
}
},
{
{
MR_TAG_COMMON(0,1,690),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(0,1,691),
MR_TAG_COMMON(1,2,682)
}
},
{
{
MR_TAG_COMMON(0,1,692),
MR_TAG_COMMON(1,2,683)
}
},
{
{
MR_TAG_COMMON(0,1,693),
MR_TAG_COMMON(1,2,684)
}
},
{
{
MR_TAG_COMMON(0,1,694),
MR_TAG_COMMON(1,2,685)
}
},
{
{
MR_TAG_COMMON(0,1,695),
MR_TAG_COMMON(1,2,686)
}
},
{
{
MR_TAG_COMMON(0,1,696),
MR_TAG_COMMON(1,2,687)
}
},
{
{
MR_TAG_COMMON(0,1,697),
MR_TAG_COMMON(1,2,688)
}
},
{
{
MR_TAG_COMMON(0,1,698),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(0,1,699),
MR_TAG_COMMON(1,2,690)
}
},
{
{
MR_TAG_COMMON(0,1,700),
MR_TAG_COMMON(1,2,691)
}
},
{
{
MR_TAG_COMMON(0,1,701),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(0,1,702),
MR_TAG_COMMON(1,2,693)
}
},
{
{
MR_TAG_COMMON(0,1,703),
MR_TAG_COMMON(1,2,694)
}
},
{
{
MR_TAG_COMMON(0,1,704),
MR_TAG_COMMON(1,2,695)
}
},
{
{
MR_TAG_COMMON(0,1,705),
MR_TAG_COMMON(1,2,696)
}
},
{
{
MR_TAG_COMMON(0,1,706),
MR_TAG_COMMON(1,2,697)
}
},
{
{
MR_TAG_COMMON(0,1,707),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(0,1,708),
MR_TAG_COMMON(1,2,699)
}
},
{
{
MR_TAG_COMMON(0,1,709),
MR_TAG_COMMON(1,2,700)
}
},
{
{
MR_TAG_COMMON(0,1,438),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(0,1,347),
MR_TAG_COMMON(1,2,702)
}
},
{
{
MR_TAG_COMMON(0,1,574),
MR_TAG_COMMON(1,2,703)
}
},
{
{
MR_TAG_COMMON(0,1,691),
MR_TAG_COMMON(1,2,704)
}
},
{
{
MR_TAG_COMMON(0,1,361),
MR_TAG_COMMON(1,2,705)
}
},
{
{
MR_TAG_COMMON(0,1,710),
MR_TAG_COMMON(1,2,706)
}
},
{
{
MR_TAG_COMMON(0,1,687),
MR_TAG_COMMON(1,2,707)
}
},
{
{
MR_TAG_COMMON(0,1,664),
MR_TAG_COMMON(1,2,708)
}
},
{
{
MR_TAG_COMMON(0,1,663),
MR_TAG_COMMON(1,2,709)
}
},
{
{
MR_TAG_COMMON(0,1,711),
MR_TAG_COMMON(1,2,710)
}
},
{
{
MR_TAG_COMMON(0,1,242),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(0,1,712),
MR_TAG_COMMON(1,2,712)
}
},
{
{
MR_TAG_COMMON(0,1,713),
MR_TAG_COMMON(1,2,713)
}
},
};

static const struct mercury_type_3 mercury_common_3[49] =
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
MR_string_const("posix", 5)
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
MR_string_const("mfiltercc", 9)
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
MR_string_const("mono", 4)
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
MR_string_const("csharp", 6)
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

static const struct mercury_type_4 mercury_common_4[1422] =
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
MR_string_const("\tDo not generate messages about inferred modes.", 47),
MR_tbmkword(0, 0)
},
{
MR_string_const("--no-inform-inferred-modes", 26),
MR_TAG_COMMON(1,4,2)
},
{
MR_string_const("\tDo not generate messages about inferred types.", 47),
MR_TAG_COMMON(1,4,3)
},
{
MR_string_const("--no-inform-inferred-types", 26),
MR_TAG_COMMON(1,4,4)
},
{
MR_string_const("\tDo not generate messages about inferred types or modes.", 56),
MR_TAG_COMMON(1,4,5)
},
{
MR_string_const("--no-inform-inferred", 20),
MR_TAG_COMMON(1,4,6)
},
{
MR_string_const("\tDo not warn about one state variable shadowing another.", 56),
MR_TAG_COMMON(1,4,7)
},
{
MR_string_const("--no-warn-state-var-shadowing", 29),
MR_TAG_COMMON(1,4,8)
},
{
MR_string_const("\tprocedures.", 12),
MR_TAG_COMMON(1,4,9)
},
{
MR_string_const("\tWarn about possible errors in the bodies of foreign", 52),
MR_TAG_COMMON(1,4,10)
},
{
MR_string_const("--warn-suspicious-foreign-procs", 31),
MR_TAG_COMMON(1,4,11)
},
{
MR_string_const("\tDo not warn about unresolved polymorphism.", 43),
MR_TAG_COMMON(1,4,12)
},
{
MR_string_const("--no-warn-unresolved-polymorphism", 33),
MR_TAG_COMMON(1,4,13)
},
{
MR_string_const("\treplaced by switches.", 22),
MR_TAG_COMMON(1,4,14)
},
{
MR_string_const("\tGenerate informational messages for if-then-elses that could be", 64),
MR_TAG_COMMON(1,4,15)
},
{
MR_string_const("--inform-ite-instead-of-switch", 30),
MR_TAG_COMMON(1,4,16)
},
{
MR_string_const("\tbeen marked as obsolete.", 25),
MR_TAG_COMMON(1,4,17)
},
{
MR_string_const("\tDo not warn about calls to predicates or functions that have", 61),
MR_TAG_COMMON(1,4,18)
},
{
MR_string_const("--no-warn-obsolete", 18),
MR_TAG_COMMON(1,4,19)
},
{
MR_string_const("\tbetween the format string and the supplied values.", 51),
MR_TAG_COMMON(1,4,20)
},
{
MR_string_const("\tthe compiler cannot tell whether there are any mismatches", 58),
MR_TAG_COMMON(1,4,21)
},
{
MR_string_const("\tWarn about calls to string.format or io.format for which", 57),
MR_TAG_COMMON(1,4,22)
},
{
MR_string_const("--warn-unknown-format-calls", 27),
MR_TAG_COMMON(1,4,23)
},
{
MR_string_const("\tformat string and the supplied values.", 39),
MR_TAG_COMMON(1,4,24)
},
{
MR_string_const("\tthe compiler knows for sure contain mismatches between the", 59),
MR_TAG_COMMON(1,4,25)
},
{
MR_string_const("\tDo not warn about calls to string.format or io.format that", 59),
MR_TAG_COMMON(1,4,26)
},
{
MR_string_const("--no-warn-known-bad-format-calls", 32),
MR_TAG_COMMON(1,4,27)
},
{
MR_string_const("\t(See the \"Termination Analysis Options\" section below).", 56),
MR_TAG_COMMON(1,4,28)
},
{
MR_string_const("\tThis option is only enabled when termination analysis is enabled.", 66),
MR_TAG_COMMON(1,4,29)
},
{
MR_string_const("\tcomparison predicates that cannot be proved to terminate.", 58),
MR_TAG_COMMON(1,4,30)
},
{
MR_string_const("\tDo not warn about types that have user-defined equality or", 59),
MR_TAG_COMMON(1,4,31)
},
{
MR_string_const("--no-warn-non-term-special-preds", 32),
MR_TAG_COMMON(1,4,32)
},
{
MR_string_const("\ta \140pragma inline\' declaration.", 31),
MR_TAG_COMMON(1,4,33)
},
{
MR_string_const("\tDisable warnings about tabled procedures that also have", 56),
MR_TAG_COMMON(1,4,34)
},
{
MR_string_const("--no-warn-table-with-inline", 27),
MR_TAG_COMMON(1,4,35)
},
{
MR_string_const("\ttarget code (e.g. gcc).", 24),
MR_TAG_COMMON(1,4,36)
},
{
MR_string_const("\tDisable warnings from the compiler used to process the", 55),
MR_TAG_COMMON(1,4,37)
},
{
MR_string_const("--no-warn-target-code", 21),
MR_TAG_COMMON(1,4,38)
},
{
MR_string_const("\tWarn about procedures which are never called.", 46),
MR_TAG_COMMON(1,4,39)
},
{
MR_string_const("--warn-dead-procs", 17),
MR_TAG_COMMON(1,4,40)
},
{
MR_string_const("\tSemantics Options\" section below) is enabled.", 46),
MR_TAG_COMMON(1,4,41)
},
{
MR_string_const("\tthe \140--allow-stubs\' option (described in the \"Language", 55),
MR_TAG_COMMON(1,4,42)
},
{
MR_string_const("\tclauses.  Note that this option only has any effect if", 55),
MR_TAG_COMMON(1,4,43)
},
{
MR_string_const("\tDisable warnings about procedures for which there are no", 57),
MR_TAG_COMMON(1,4,44)
},
{
MR_string_const("--no-warn-stubs", 15),
MR_TAG_COMMON(1,4,45)
},
{
MR_string_const("\twith \140--make\' are already up to date.", 38),
MR_TAG_COMMON(1,4,46)
},
{
MR_string_const("\tDon\'t warn if targets specified on the command line", 52),
MR_TAG_COMMON(1,4,47)
},
{
MR_string_const("--no-warn-up-to-date", 20),
MR_TAG_COMMON(1,4,48)
},
{
MR_string_const("\tThis requires --high-level-code.", 33),
MR_TAG_COMMON(1,4,49)
},
{
MR_string_const("\tWarn about any directly recursive calls that are not tail calls.", 65),
MR_TAG_COMMON(1,4,50)
},
{
MR_string_const("--warn-non-tail-recursion", 25),
MR_TAG_COMMON(1,4,51)
},
{
MR_string_const("\toptions files with \140--make\'.", 29),
MR_TAG_COMMON(1,4,52)
},
{
MR_string_const("\tDo not warn about references to undefined variables in", 55),
MR_TAG_COMMON(1,4,53)
},
{
MR_string_const("--no-warn-undefined-options-variables", 37),
MR_TAG_COMMON(1,4,54)
},
{
MR_string_const("\tDisable warnings from the smart recompilation system.", 54),
MR_TAG_COMMON(1,4,55)
},
{
MR_string_const("--no-warn-smart-recompilation", 29),
MR_TAG_COMMON(1,4,56)
},
{
MR_string_const("\tdeclaration does not match the module\'s file name.", 51),
MR_TAG_COMMON(1,4,57)
},
{
MR_string_const("\tDisable warnings for modules whose \140:- module\'", 47),
MR_TAG_COMMON(1,4,58)
},
{
MR_string_const("--no-warn-wrong-module-name", 27),
MR_TAG_COMMON(1,4,59)
},
{
MR_string_const("\ta \140:- module\' declaration.", 27),
MR_TAG_COMMON(1,4,60)
},
{
MR_string_const("\tDisable warnings for modules that do no start with", 51),
MR_TAG_COMMON(1,4,61)
},
{
MR_string_const("--no-warn-missing-module-name", 29),
MR_TAG_COMMON(1,4,62)
},
{
MR_string_const("\tsame input arguments.", 22),
MR_TAG_COMMON(1,4,63)
},
{
MR_string_const("\tWarn about multiple calls to a predicate with the", 50),
MR_TAG_COMMON(1,4,64)
},
{
MR_string_const("--warn-duplicate-calls", 22),
MR_TAG_COMMON(1,4,65)
},
{
MR_string_const("\tsimple that they are likely to be programming errors.", 54),
MR_TAG_COMMON(1,4,66)
},
{
MR_string_const("\tDisable warnings about constructs which are so", 47),
MR_TAG_COMMON(1,4,67)
},
{
MR_string_const("--no-warn-simple-code", 21),
MR_TAG_COMMON(1,4,68)
},
{
MR_string_const("\tDisable warnings about unifications which cannot succeed.", 58),
MR_TAG_COMMON(1,4,69)
},
{
MR_string_const("--no-warn-unification-cannot-succeed", 36),
MR_TAG_COMMON(1,4,70)
},
{
MR_string_const("\titself negatively through some path along its call graph.", 58),
MR_TAG_COMMON(1,4,71)
},
{
MR_string_const("\tNon-stratification occurs when a predicate or function can call", 64),
MR_TAG_COMMON(1,4,72)
},
{
MR_string_const("\tfunctions in the module.", 25),
MR_TAG_COMMON(1,4,73)
},
{
MR_string_const("\tWarn about possible non-stratification of the predicates and/or", 64),
MR_TAG_COMMON(1,4,74)
},
{
MR_string_const("--warn-non-stratification", 25),
MR_TAG_COMMON(1,4,75)
},
{
MR_string_const("\tor function are not contiguous.", 32),
MR_TAG_COMMON(1,4,76)
},
{
MR_string_const("\tGenerate a warning if the clauses and foreign_procs of a predicate", 67),
MR_TAG_COMMON(1,4,77)
},
{
MR_string_const("--warn-non-contiguous-foreign-procs", 35),
MR_TAG_COMMON(1,4,78)
},
{
MR_string_const("\tare not contiguous.", 20),
MR_TAG_COMMON(1,4,79)
},
{
MR_string_const("\tDo not generate a warning if the clauses of a predicate or function", 68),
MR_TAG_COMMON(1,4,80)
},
{
MR_string_const("--no-warn-non-contiguous-clauses", 32),
MR_TAG_COMMON(1,4,81)
},
{
MR_string_const("\trecreated by running \140mmake <mainmodule>.depend\'", 49),
MR_TAG_COMMON(1,4,82)
},
{
MR_string_const("\t\140.trans_opt\' files has been lost.  The information can be", 58),
MR_TAG_COMMON(1,4,83)
},
{
MR_string_const("\tto allow \140.trans_opt\' files to be read when creating other", 59),
MR_TAG_COMMON(1,4,84)
},
{
MR_string_const("\tDisable warnings produced when the information required", 56),
MR_TAG_COMMON(1,4,85)
},
{
MR_string_const("--no-warn-missing-trans-opt-deps", 32),
MR_TAG_COMMON(1,4,86)
},
{
MR_string_const("\tbe opened.", 11),
MR_TAG_COMMON(1,4,87)
},
{
MR_string_const("\tEnable warnings about \140.trans_opt\' files which cannot", 54),
MR_TAG_COMMON(1,4,88)
},
{
MR_string_const("--warn-missing-trans-opt-files", 30),
MR_TAG_COMMON(1,4,89)
},
{
MR_string_const("\tDisable warnings about \140.opt\' files which cannot be opened.", 60),
MR_TAG_COMMON(1,4,90)
},
{
MR_string_const("--no-warn-missing-opt-files", 27),
MR_TAG_COMMON(1,4,91)
},
{
MR_string_const("\twhich are not used in the interface.", 37),
MR_TAG_COMMON(1,4,92)
},
{
MR_string_const("\tWarn about modules imported in the interface, but", 50),
MR_TAG_COMMON(1,4,93)
},
{
MR_string_const("--warn-interface-imports", 24),
MR_TAG_COMMON(1,4,94)
},
{
MR_string_const("\tWarn about predicate arguments which are not used.", 51),
MR_TAG_COMMON(1,4,95)
},
{
MR_string_const("--warn-unused-args", 18),
MR_TAG_COMMON(1,4,96)
},
{
MR_string_const("\tDon\'t warn about modules which export nothing.", 47),
MR_TAG_COMMON(1,4,97)
},
{
MR_string_const("--no-warn-nothing-exported", 26),
MR_TAG_COMMON(1,4,98)
},
{
MR_string_const("\tWarn about modules that are imported but not used.", 51),
MR_TAG_COMMON(1,4,99)
},
{
MR_string_const("--warn-unused-imports", 21),
MR_TAG_COMMON(1,4,100)
},
{
MR_string_const("\tof the types in scope.", 23),
MR_TAG_COMMON(1,4,101)
},
{
MR_string_const("\tDon\'t warn about insts that are not consistent with any", 56),
MR_TAG_COMMON(1,4,102)
},
{
MR_string_const("--no-warn-insts-without-matching-type", 37),
MR_TAG_COMMON(1,4,103)
},
{
MR_string_const("\terroneous but whose determinism declarations are laxer.", 56),
MR_TAG_COMMON(1,4,104)
},
{
MR_string_const("\tDon\'t warn about procedures whose determinism is inferred", 58),
MR_TAG_COMMON(1,4,105)
},
{
MR_string_const("--no-warn-inferred-erroneous", 28),
MR_TAG_COMMON(1,4,106)
},
{
MR_string_const("\twhich could have been stricter.", 32),
MR_TAG_COMMON(1,4,107)
},
{
MR_string_const("\tDon\'t warn about determinism declarations", 42),
MR_TAG_COMMON(1,4,108)
},
{
MR_string_const("--no-warn-det-decls-too-lax", 27),
MR_TAG_COMMON(1,4,109)
},
{
MR_string_const("\tDon\'t warn about variables which occur in overlapping scopes.", 62),
MR_TAG_COMMON(1,4,110)
},
{
MR_string_const("--no-warn-overlapping-scopes", 28),
MR_TAG_COMMON(1,4,111)
},
{
MR_string_const("\tDon\'t warn about variables which only occur once.", 50),
MR_TAG_COMMON(1,4,112)
},
{
MR_string_const("--no-warn-singleton-variables", 29),
MR_TAG_COMMON(1,4,113)
},
{
MR_string_const("\tby --introduce-accumulators.", 29),
MR_TAG_COMMON(1,4,114)
},
{
MR_string_const("\tDon\'t warn about argument order rearrangement caused", 53),
MR_TAG_COMMON(1,4,115)
},
{
MR_string_const("--inhibit-accumulator-warnings", 30),
MR_TAG_COMMON(1,4,116)
},
{
MR_string_const("\tif it finds any syntax errors in the program.", 46),
MR_TAG_COMMON(1,4,117)
},
{
MR_string_const("\tafter syntax checking and not do any semantic checking", 55),
MR_TAG_COMMON(1,4,118)
},
{
MR_string_const("\tThis option causes the compiler to halt immediately", 52),
MR_TAG_COMMON(1,4,119)
},
{
MR_string_const("--halt-at-syntax-errors", 23),
MR_TAG_COMMON(1,4,120)
},
{
MR_string_const("\tnon-zero exit status.", 22),
MR_TAG_COMMON(1,4,121)
},
{
MR_string_const("\tgenerate code --- instead, it will return a", 44),
MR_TAG_COMMON(1,4,122)
},
{
MR_string_const("\tif any warning is issued, the compiler will not", 48),
MR_TAG_COMMON(1,4,123)
},
{
MR_string_const("\twarnings as if they were errors.  This means that", 50),
MR_TAG_COMMON(1,4,124)
},
{
MR_string_const("\tThis option causes the compiler to treat all ", 46),
MR_TAG_COMMON(1,4,125)
},
{
MR_string_const("--halt-at-warn", 14),
MR_TAG_COMMON(1,4,126)
},
{
MR_string_const("\tDisable all warning messages.", 30),
MR_TAG_COMMON(1,4,127)
},
{
MR_string_const("-w, --inhibit-warnings", 22),
MR_TAG_COMMON(1,4,128)
},
{
MR_string_const("\tOutput debugging traces of type representation choices.", 56),
MR_tbmkword(0, 0)
},
{
MR_string_const("--debug-type-rep", 16),
MR_TAG_COMMON(1,4,130)
},
{
MR_string_const("\t\140--structure-reuse\' option.", 28),
MR_TAG_COMMON(1,4,131)
},
{
MR_string_const("\tOutput detailed debugging traces of the indirect reuse pass of", 63),
MR_TAG_COMMON(1,4,132)
},
{
MR_string_const("--debug-indirect-reuse", 22),
MR_TAG_COMMON(1,4,133)
},
{
MR_string_const("\toption.", 8),
MR_TAG_COMMON(1,4,134)
},
{
MR_string_const("\tOutput detailed debugging traces of the \140--intermodule-analysis\'", 65),
MR_TAG_COMMON(1,4,135)
},
{
MR_string_const("--debug-intermodule-analysis", 28),
MR_TAG_COMMON(1,4,136)
},
{
MR_string_const("\toption.", 8),
MR_TAG_COMMON(1,4,137)
},
{
MR_string_const("\tOutput detailed debugging traces of the \140--analyse-trail-usage\'", 64),
MR_TAG_COMMON(1,4,138)
},
{
MR_string_const("--debug-trail-usage", 19),
MR_TAG_COMMON(1,4,139)
},
{
MR_string_const("\tOutput detailed debugging traces of the \140--make\' option.", 57),
MR_TAG_COMMON(1,4,140)
},
{
MR_string_const("--debug-make", 12),
MR_TAG_COMMON(1,4,141)
},
{
MR_string_const("\tof the predicate with the given predicate id.", 46),
MR_TAG_COMMON(1,4,142)
},
{
MR_string_const("\tOutput detailed debugging traces of the liveness analysis", 58),
MR_TAG_COMMON(1,4,143)
},
{
MR_string_const("--debug-liveness <pred_id>", 26),
MR_TAG_COMMON(1,4,144)
},
{
MR_string_const("\tdeduction and deforestation process.", 37),
MR_TAG_COMMON(1,4,145)
},
{
MR_string_const("\tOutput detailed debugging traces of the partial", 48),
MR_TAG_COMMON(1,4,146)
},
{
MR_string_const("--debug-pd", 10),
MR_TAG_COMMON(1,4,147)
},
{
MR_string_const("\tonly for the predicate/function with the specified name.", 57),
MR_TAG_COMMON(1,4,148)
},
{
MR_string_const("\tOutput detailed debugging traces of the optimization process", 61),
MR_TAG_COMMON(1,4,149)
},
{
MR_string_const("--debug-opt-pred-name <name>", 28),
MR_TAG_COMMON(1,4,150)
},
{
MR_string_const("\tonly for the predicate/function with the specified pred id.", 60),
MR_TAG_COMMON(1,4,151)
},
{
MR_string_const("\tOutput detailed debugging traces of the optimization process", 61),
MR_TAG_COMMON(1,4,152)
},
{
MR_string_const("--debug-opt-pred-id <n>", 23),
MR_TAG_COMMON(1,4,153)
},
{
MR_string_const("\tOutput detailed debugging traces of the optimization process.", 62),
MR_TAG_COMMON(1,4,154)
},
{
MR_string_const("--debug-opt", 11),
MR_TAG_COMMON(1,4,155)
},
{
MR_string_const("\tOutput detailed debugging traces of determinism analysis.", 58),
MR_TAG_COMMON(1,4,156)
},
{
MR_string_const("--debug-det, --debug-determinism", 32),
MR_TAG_COMMON(1,4,157)
},
{
MR_string_const("\tpred id.", 9),
MR_TAG_COMMON(1,4,158)
},
{
MR_string_const("\tmode checking of the predicate or function with the specified", 62),
MR_TAG_COMMON(1,4,159)
},
{
MR_string_const("\tWith --debug-modes, restrict the debugging traces to the", 57),
MR_TAG_COMMON(1,4,160)
},
{
MR_string_const("--debug-modes-pred-id <n>", 25),
MR_TAG_COMMON(1,4,161)
},
{
MR_string_const("\tOutput detailed debugging traces of the mode checking.", 55),
MR_TAG_COMMON(1,4,162)
},
{
MR_string_const("--debug-modes-verbose", 21),
MR_TAG_COMMON(1,4,163)
},
{
MR_string_const("\tOutput only minimal debugging traces of the mode checking.", 59),
MR_TAG_COMMON(1,4,164)
},
{
MR_string_const("--debug-modes-minimal", 21),
MR_TAG_COMMON(1,4,165)
},
{
MR_string_const("\tOutput statistics after each step of mode checking.", 52),
MR_TAG_COMMON(1,4,166)
},
{
MR_string_const("--debug-modes-statistics", 24),
MR_TAG_COMMON(1,4,167)
},
{
MR_string_const("\tOutput debugging traces of the mode checking.", 46),
MR_TAG_COMMON(1,4,168)
},
{
MR_string_const("-N, --debug-modes", 17),
MR_TAG_COMMON(1,4,169)
},
{
MR_string_const("\tin terms of goals and variables to the end of the named file.", 62),
MR_TAG_COMMON(1,4,170)
},
{
MR_string_const("\tAppend information about the size of each procedure in the module", 66),
MR_TAG_COMMON(1,4,171)
},
{
MR_string_const("--proc-size-statistics <filename>", 33),
MR_TAG_COMMON(1,4,172)
},
{
MR_string_const("\tinformation at the boundaries between phases of the compiler.", 62),
MR_TAG_COMMON(1,4,173)
},
{
MR_string_const("\tAt the moment this option implies \140--no-trad-passes\', so you get", 65),
MR_TAG_COMMON(1,4,174)
},
{
MR_string_const("\tOutput messages about the compiler\'s time/space usage.", 55),
MR_TAG_COMMON(1,4,175)
},
{
MR_string_const("-S, --statistics", 16),
MR_TAG_COMMON(1,4,176)
},
{
MR_string_const("\tmmake normally redirects to a .err file.", 41),
MR_TAG_COMMON(1,4,177)
},
{
MR_string_const("\tReport the command line arguments for compilations whose output", 64),
MR_TAG_COMMON(1,4,178)
},
{
MR_string_const("--report-cmd-line-args-in-doterr", 32),
MR_TAG_COMMON(1,4,179)
},
{
MR_string_const("\tReport the command line arguments.", 35),
MR_TAG_COMMON(1,4,180)
},
{
MR_string_const("--report-cmd-line-args-doterr", 29),
MR_TAG_COMMON(1,4,181)
},
{
MR_string_const("\tfile after compiling a module (default: 15).", 45),
MR_TAG_COMMON(1,4,182)
},
{
MR_string_const("\tWith \140--make\', output the first <n> lines of the \140.err\'", 56),
MR_TAG_COMMON(1,4,183)
},
{
MR_string_const("--output-compile-error-lines <n>", 32),
MR_TAG_COMMON(1,4,184)
},
{
MR_string_const("\tnot just the first.  Implies \140--verbose-recompilation\'.", 56),
MR_TAG_COMMON(1,4,185)
},
{
MR_string_const("\tFind all the reasons why a module needs to be recompiled,", 58),
MR_TAG_COMMON(1,4,186)
},
{
MR_string_const("--find-all-recompilation-reasons", 32),
MR_TAG_COMMON(1,4,187)
},
{
MR_string_const("\texplaining why a module needs to be recompiled.", 48),
MR_TAG_COMMON(1,4,188)
},
{
MR_string_const("\tWhen using \140--smart-recompilation\', output messages", 52),
MR_TAG_COMMON(1,4,189)
},
{
MR_string_const("--verbose-recompilation", 23),
MR_TAG_COMMON(1,4,190)
},
{
MR_string_const("\tNote that some commands will only be printed with \140--verbose\'.", 63),
MR_TAG_COMMON(1,4,191)
},
{
MR_string_const("\tOutput each external command before it is run.", 47),
MR_TAG_COMMON(1,4,192)
},
{
MR_string_const("--verbose-commands", 18),
MR_TAG_COMMON(1,4,193)
},
{
MR_string_const("\tthe \140--make\' option.", 21),
MR_TAG_COMMON(1,4,194)
},
{
MR_string_const("\tDisable messages about the progress of builds using", 52),
MR_TAG_COMMON(1,4,195)
},
{
MR_string_const("--no-verbose-make", 17),
MR_TAG_COMMON(1,4,196)
},
{
MR_string_const("\tdetailed explanation of any errors it finds in your program.", 61),
MR_TAG_COMMON(1,4,197)
},
{
MR_string_const("\tExplain error messages.  Asks the compiler to give you a more", 62),
MR_TAG_COMMON(1,4,198)
},
{
MR_string_const("-E, --verbose-error-messages", 28),
MR_TAG_COMMON(1,4,199)
},
{
MR_string_const("\tOutput very verbose progress messages.", 39),
MR_TAG_COMMON(1,4,200)
},
{
MR_string_const("-V, --very-verbose", 18),
MR_TAG_COMMON(1,4,201)
},
{
MR_string_const("\tOutput progress messages at each stage in the compilation.", 59),
MR_TAG_COMMON(1,4,202)
},
{
MR_string_const("-v, --verbose", 13),
MR_TAG_COMMON(1,4,203)
},
{
MR_string_const("\tThe flags are printed to the standard output.", 46),
MR_tbmkword(0, 0)
},
{
MR_string_const("\tThis includes the C header files from the standard library.", 60),
MR_TAG_COMMON(1,4,205)
},
{
MR_string_const("\twhich directories to search for C header files.", 48),
MR_TAG_COMMON(1,4,206)
},
{
MR_string_const("\tPrint the flags that are passed to the C compiler to specify", 61),
MR_TAG_COMMON(1,4,207)
},
{
MR_string_const("--output-c-include-dir-flags, --output-c-include-directory-flags", 64),
MR_TAG_COMMON(1,4,208)
},
{
MR_string_const("\tThe flags are printed to the standard output.", 46),
MR_TAG_COMMON(1,4,209)
},
{
MR_string_const("\tmacros used to specify the compilation grade.", 46),
MR_TAG_COMMON(1,4,210)
},
{
MR_string_const("\tPrint the flags that are passed to the C compiler to define the", 64),
MR_TAG_COMMON(1,4,211)
},
{
MR_string_const("--output-grade-defines", 22),
MR_TAG_COMMON(1,4,212)
},
{
MR_string_const("\toutput.", 8),
MR_TAG_COMMON(1,4,213)
},
{
MR_string_const("\tvia the --ml option.  The flags are printed to the standard", 60),
MR_TAG_COMMON(1,4,214)
},
{
MR_string_const("\tstandard library as well as any other libraries specified", 58),
MR_TAG_COMMON(1,4,215)
},
{
MR_string_const("\tagainst the current set of libraries.  This includes the", 57),
MR_TAG_COMMON(1,4,216)
},
{
MR_string_const("\tPrint the flags that are passed to linker in order to link", 59),
MR_TAG_COMMON(1,4,217)
},
{
MR_string_const("--output-library-link-flags", 27),
MR_TAG_COMMON(1,4,218)
},
{
MR_string_const("\tPrint the C# compiler type to the standard output.", 51),
MR_TAG_COMMON(1,4,219)
},
{
MR_string_const("--output-csharp-compiler-type", 29),
MR_TAG_COMMON(1,4,220)
},
{
MR_string_const("\tto the standard output.", 24),
MR_TAG_COMMON(1,4,221)
},
{
MR_string_const("\tPrint the flags with which the C compiler will be invoked", 58),
MR_TAG_COMMON(1,4,222)
},
{
MR_string_const("--output-cflags", 15),
MR_TAG_COMMON(1,4,223)
},
{
MR_string_const("\tPrint the C compiler type to the standard output.", 50),
MR_TAG_COMMON(1,4,224)
},
{
MR_string_const("--output-cc-type, --output-c-compiler-type", 42),
MR_TAG_COMMON(1,4,225)
},
{
MR_string_const("\tstandard output.", 17),
MR_TAG_COMMON(1,4,226)
},
{
MR_string_const("\tPrint the command used to invoke the C compiler to the", 55),
MR_TAG_COMMON(1,4,227)
},
{
MR_string_const("--output-cc", 11),
MR_TAG_COMMON(1,4,228)
},
{
MR_string_const("\tto be installed should be built to the standard output.", 56),
MR_TAG_COMMON(1,4,229)
},
{
MR_string_const("\tPrint the list of compilation grades in which a library", 56),
MR_TAG_COMMON(1,4,230)
},
{
MR_string_const("--output-libgrades", 18),
MR_TAG_COMMON(1,4,231)
},
{
MR_string_const("\tstandard output.", 17),
MR_TAG_COMMON(1,4,232)
},
{
MR_string_const("\tPrint the command used to link shared libraries to the", 55),
MR_TAG_COMMON(1,4,233)
},
{
MR_string_const("--output-shared-lib-link-command", 32),
MR_TAG_COMMON(1,4,234)
},
{
MR_string_const("\tstandard output.", 17),
MR_TAG_COMMON(1,4,235)
},
{
MR_string_const("\tPrint the command used to link executables to the", 50),
MR_TAG_COMMON(1,4,236)
},
{
MR_string_const("--output-link-command", 21),
MR_TAG_COMMON(1,4,237)
},
{
MR_string_const("\toutput.", 8),
MR_TAG_COMMON(1,4,238)
},
{
MR_string_const("\tthe command line options, and print it to the standard", 55),
MR_TAG_COMMON(1,4,239)
},
{
MR_string_const("\tCompute the grade of the library to link with based on", 55),
MR_TAG_COMMON(1,4,240)
},
{
MR_string_const("--output-grade-string", 21),
MR_TAG_COMMON(1,4,241)
},
{
MR_string_const("\tbut do not attempt to link the named modules.", 46),
MR_TAG_COMMON(1,4,242)
},
{
MR_string_const("\tGenerate C code in \140<module>.c\' and object code in \140<module>.o\'", 64),
MR_TAG_COMMON(1,4,243)
},
{
MR_string_const("-c, --compile-only", 18),
MR_TAG_COMMON(1,4,244)
},
{
MR_string_const("\t\140<module>.java\'), but not object code.", 39),
MR_TAG_COMMON(1,4,245)
},
{
MR_string_const("\tIL code in \140<module>.il\', or Java code in", 42),
MR_TAG_COMMON(1,4,246)
},
{
MR_string_const("\tassembler code in \140<module>.s\' or \140<module>.pic_s\',", 52),
MR_TAG_COMMON(1,4,247)
},
{
MR_string_const("\tGenerate target code (i.e. C code in \140<module>.c\',", 51),
MR_TAG_COMMON(1,4,248)
},
{
MR_string_const("-C, --target-code-only", 22),
MR_TAG_COMMON(1,4,249)
},
{
MR_string_const("\tCheck the module for errors, but do not generate any code.", 59),
MR_TAG_COMMON(1,4,250)
},
{
MR_string_const("-e, --errorcheck-only", 21),
MR_TAG_COMMON(1,4,251)
},
{
MR_string_const("\tand don\'t generate any code.", 29),
MR_TAG_COMMON(1,4,252)
},
{
MR_string_const("\ttype-correct. Don\'t check modes or determinism,", 48),
MR_TAG_COMMON(1,4,253)
},
{
MR_string_const("\tJust check that the code is syntactically correct and", 54),
MR_TAG_COMMON(1,4,254)
},
{
MR_string_const("-t, --typecheck-only", 20),
MR_TAG_COMMON(1,4,255)
},
{
MR_string_const("\tThis option acts as a Mercury ugly-printer.", 44),
MR_TAG_COMMON(1,4,256)
},
{
MR_string_const("\tConvert to Mercury. Output to file \140<module>.ugly\'", 51),
MR_TAG_COMMON(1,4,257)
},
{
MR_string_const("-P, --convert-to-mercury", 24),
MR_TAG_COMMON(1,4,258)
},
{
MR_string_const("\tThis option should only be used by mmake.", 42),
MR_TAG_COMMON(1,4,259)
},
{
MR_string_const("\tinto the \140<module>.xml\' file.", 30),
MR_TAG_COMMON(1,4,260)
},
{
MR_string_const("\tOutput XML documentation of the module", 39),
MR_TAG_COMMON(1,4,261)
},
{
MR_string_const("-x,--make-xml-doc,--make-xml-documentation", 42),
MR_TAG_COMMON(1,4,262)
},
{
MR_string_const("\tThis option should only be used by mmake.", 42),
MR_TAG_COMMON(1,4,263)
},
{
MR_string_const("\tinto the \140<module>.trans_opt\' file.", 36),
MR_TAG_COMMON(1,4,264)
},
{
MR_string_const("\tOutput transitive optimization information", 43),
MR_TAG_COMMON(1,4,265)
},
{
MR_string_const("--make-transitive-optimization-interface", 40),
MR_TAG_COMMON(1,4,266)
},
{
MR_string_const("--make-trans-opt", 16),
MR_TAG_COMMON(1,4,267)
},
{
MR_string_const("\tThis option should only be used by mmake.", 42),
MR_TAG_COMMON(1,4,268)
},
{
MR_string_const("\t\140<module>.opt\'.", 16),
MR_TAG_COMMON(1,4,269)
},
{
MR_string_const("\tWrite inter-module optimization information to", 47),
MR_TAG_COMMON(1,4,270)
},
{
MR_string_const("--make-opt-int, --make-optimization-interface", 45),
MR_TAG_COMMON(1,4,271)
},
{
MR_string_const("\tThis option should only be used by mmake.", 42),
MR_TAG_COMMON(1,4,272)
},
{
MR_string_const("\tWrite the unqualified short interface to \140<module>.int3\'.", 58),
MR_TAG_COMMON(1,4,273)
},
{
MR_string_const("--make-short-int, --make-short-interface", 40),
MR_TAG_COMMON(1,4,274)
},
{
MR_string_const("\tThis option should only be used by mmake.", 42),
MR_TAG_COMMON(1,4,275)
},
{
MR_string_const("\tWrite the private interface to \140<module>.int0\'.", 48),
MR_TAG_COMMON(1,4,276)
},
{
MR_string_const("--make-priv-int, --make-private-interface", 41),
MR_TAG_COMMON(1,4,277)
},
{
MR_string_const("\tThis option should only be used by mmake.", 42),
MR_TAG_COMMON(1,4,278)
},
{
MR_string_const("\tand write the short interface to \140<module>.int2\'", 49),
MR_TAG_COMMON(1,4,279)
},
{
MR_string_const("\tWrite the module interface to \140<module>.int\',", 46),
MR_TAG_COMMON(1,4,280)
},
{
MR_string_const("-i, --make-int, --make-interface", 32),
MR_TAG_COMMON(1,4,281)
},
{
MR_string_const("\tchapter of the Mercury User\'s Guide for further details.)", 58),
MR_TAG_COMMON(1,4,282)
},
{
MR_string_const("\tthe stand-alone interface.  (See the Stand-alone Interface", 59),
MR_TAG_COMMON(1,4,283)
},
{
MR_string_const("\t<basename> is used as the basename of any files generated for", 62),
MR_TAG_COMMON(1,4,284)
},
{
MR_string_const("\tOutput a stand-alone interface.", 32),
MR_TAG_COMMON(1,4,285)
},
{
MR_string_const("--generate-standalone-interface <basename>", 42),
MR_TAG_COMMON(1,4,286)
},
{
MR_string_const("\tImplies --generate-dependencies.", 33),
MR_TAG_COMMON(1,4,287)
},
{
MR_string_const("\tdependency graph in top-down order to \140<module>.order\'.", 56),
MR_TAG_COMMON(1,4,288)
},
{
MR_string_const("\tOutput the strongly connected components of the module", 55),
MR_TAG_COMMON(1,4,289)
},
{
MR_string_const("--generate-module-order", 23),
MR_TAG_COMMON(1,4,290)
},
{
MR_string_const("\tto \140<module>.d\'.", 17),
MR_TAG_COMMON(1,4,291)
},
{
MR_string_const("\tOutput \140Make\'-style dependencies for the module", 48),
MR_TAG_COMMON(1,4,292)
},
{
MR_string_const("--generate-dependency-file", 26),
MR_TAG_COMMON(1,4,293)
},
{
MR_string_const("\tand all of its dependencies to \140<module>.dep\'.", 47),
MR_TAG_COMMON(1,4,294)
},
{
MR_string_const("\tOutput \140Make\'-style dependencies for the module", 48),
MR_TAG_COMMON(1,4,295)
},
{
MR_string_const("-M, --generate-dependencies", 27),
MR_TAG_COMMON(1,4,296)
},
{
MR_string_const("\tgenerated.", 11),
MR_TAG_COMMON(1,4,297)
},
{
MR_string_const("\tIf there are no such modules the mapping need not be", 53),
MR_TAG_COMMON(1,4,298)
},
{
MR_string_const("\tfor which the file name does not match the module name.", 56),
MR_TAG_COMMON(1,4,299)
},
{
MR_string_const("\t\140mmc --generate-dependencies\' if there are any modules", 55),
MR_TAG_COMMON(1,4,300)
},
{
MR_string_const("\tto \140Mercury.modules\'. This must be done before", 47),
MR_TAG_COMMON(1,4,301)
},
{
MR_string_const("\tof source files given as non-option arguments to mmc", 53),
MR_TAG_COMMON(1,4,302)
},
{
MR_string_const("\tOutput the module name to file name mapping for the list", 57),
MR_TAG_COMMON(1,4,303)
},
{
MR_string_const("-f, --generate-source-file-mapping", 34),
MR_TAG_COMMON(1,4,304)
},
{
MR_string_const("is to link the named modules to produce an executable.\n", 55),
MR_TAG_COMMON(1,4,305)
},
{
MR_string_const("If none of these options are specified, the default action", 58),
MR_TAG_COMMON(1,4,306)
},
{
MR_string_const("Only the first one specified will apply.", 40),
MR_TAG_COMMON(1,4,307)
},
{
MR_string_const("These options are mutually exclusive.", 37),
MR_TAG_COMMON(1,4,308)
},
{
MR_string_const("\tthe specified stage, to \140<module>.mlds_dump.<num>-<name>\'.", 59),
MR_tbmkword(0, 0)
},
{
MR_string_const("\tDump the internal compiler representation of the MLDS, after", 61),
MR_TAG_COMMON(1,4,310)
},
{
MR_string_const("--verbose-dump-mlds <stage number or name>", 42),
MR_TAG_COMMON(1,4,311)
},
{
MR_string_const("\tMultiple dump options accumulate.", 34),
MR_TAG_COMMON(1,4,312)
},
{
MR_string_const("\tStage numbers range from 1-99.", 31),
MR_TAG_COMMON(1,4,313)
},
{
MR_string_const("\tand \140<module>.h_dump.<num>-<name>\'.", 36),
MR_TAG_COMMON(1,4,314)
},
{
MR_string_const("\tto\140<module>.c_dump.<num>-<name>\',", 34),
MR_TAG_COMMON(1,4,315)
},
{
MR_string_const("\tafter the specified stage, as C code,", 38),
MR_TAG_COMMON(1,4,316)
},
{
MR_string_const("\tDump the MLDS (medium level intermediate representation)", 57),
MR_TAG_COMMON(1,4,317)
},
{
MR_string_const("--dump-mlds <stage number or name>", 34),
MR_TAG_COMMON(1,4,318)
},
{
MR_string_const("\tthis stage is identical to the previously dumped HLDS stage.", 61),
MR_TAG_COMMON(1,4,319)
},
{
MR_string_const("\tCreate a file for a HLDS stage even if the file notes only that", 64),
MR_TAG_COMMON(1,4,320)
},
{
MR_string_const("--dump-same-hlds", 16),
MR_TAG_COMMON(1,4,321)
},
{
MR_string_const("\tthe \140--dump-hlds\' option.", 26),
MR_TAG_COMMON(1,4,322)
},
{
MR_string_const("\tAppend the given suffix to the names of the files created by", 61),
MR_TAG_COMMON(1,4,323)
},
{
MR_string_const("--dump-hlds-file-suffix <suffix>", 32),
MR_TAG_COMMON(1,4,324)
},
{
MR_string_const("\t(see the Mercury User\'s Guide for details).", 44),
MR_TAG_COMMON(1,4,325)
},
{
MR_string_const("\tcorresponding letter occurs in the option argument", 51),
MR_TAG_COMMON(1,4,326)
},
{
MR_string_const("\tEach type of detail is included in the dump if its", 51),
MR_TAG_COMMON(1,4,327)
},
{
MR_string_const("\tWith \140--dump-hlds\', include extra detail in the dump.", 54),
MR_TAG_COMMON(1,4,328)
},
{
MR_string_const("--dump-hlds-options <options>", 29),
MR_TAG_COMMON(1,4,329)
},
{
MR_string_const("\tname.", 6),
MR_TAG_COMMON(1,4,330)
},
{
MR_string_const("\tDump the HLDS only of the predicate/function with the given", 60),
MR_TAG_COMMON(1,4,331)
},
{
MR_string_const("--dump-hlds-pred-name <name>", 28),
MR_TAG_COMMON(1,4,332)
},
{
MR_string_const("\tpred id.", 9),
MR_TAG_COMMON(1,4,333)
},
{
MR_string_const("\tDump the HLDS only of the predicate/function with the given", 60),
MR_TAG_COMMON(1,4,334)
},
{
MR_string_const("--dump-hlds-pred-id <n>", 23),
MR_TAG_COMMON(1,4,335)
},
{
MR_string_const("\tMultiple dump options accumulate.", 34),
MR_TAG_COMMON(1,4,336)
},
{
MR_string_const("\tStage numbers range from 1-599.", 32),
MR_TAG_COMMON(1,4,337)
},
{
MR_string_const("\tthe specified stage to \140<module>.hlds_dump.<num>-<name>\'.", 58),
MR_TAG_COMMON(1,4,338)
},
{
MR_string_const("\tDump the HLDS (high level intermediate representation) after", 61),
MR_TAG_COMMON(1,4,339)
},
{
MR_string_const("-d <n>, --dump-hlds <stage number or name>", 42),
MR_TAG_COMMON(1,4,340)
},
{
MR_string_const("\tThe resulting file can be processed by the graphviz tools.", 59),
MR_TAG_COMMON(1,4,341)
},
{
MR_string_const("\timports module B.", 18),
MR_TAG_COMMON(1,4,342)
},
{
MR_string_const("\tThe imports graph contains the directed graph module A", 55),
MR_TAG_COMMON(1,4,343)
},
{
MR_string_const("\tWrite out the imports graph to \140<module>.imports_graph\'.", 57),
MR_TAG_COMMON(1,4,344)
},
{
MR_string_const("--imports-graph", 15),
MR_TAG_COMMON(1,4,345)
},
{
MR_string_const("\tWrite out the dependency graph to \140<module>.dependency_graph\'.", 63),
MR_TAG_COMMON(1,4,346)
},
{
MR_string_const("--show-dependency-graph", 23),
MR_TAG_COMMON(1,4,347)
},
{
MR_string_const("\t(unless a long single word forces the line over this limit).", 61),
MR_TAG_COMMON(1,4,348)
},
{
MR_string_const("\tSet the maximum width of an error message line to <n> characters", 65),
MR_TAG_COMMON(1,4,349)
},
{
MR_string_const("--max-error-line-width <n>", 26),
MR_TAG_COMMON(1,4,350)
},
{
MR_string_const("\tuse the \140--no-llds-optimize\' option.)", 38),
MR_TAG_COMMON(1,4,351)
},
{
MR_string_const("\t(The code may be easier to understand if you also", 50),
MR_TAG_COMMON(1,4,352)
},
{
MR_string_const("\tOutput comments in the \140<module>.c\' file.", 42),
MR_TAG_COMMON(1,4,353)
},
{
MR_string_const("--auto-comments", 15),
MR_TAG_COMMON(1,4,354)
},
{
MR_string_const("\tor in Mercury (with the option --convert-to-mercury).", 54),
MR_TAG_COMMON(1,4,355)
},
{
MR_string_const("\tThe generated code may be in C (the usual case),", 49),
MR_TAG_COMMON(1,4,356)
},
{
MR_string_const("\tDo not put source line numbers in the generated code.", 54),
MR_TAG_COMMON(1,4,357)
},
{
MR_string_const("-n-, --no-line-numbers", 22),
MR_TAG_COMMON(1,4,358)
},
{
MR_string_const("\tby an experimental debugger.", 29),
MR_TAG_COMMON(1,4,359)
},
{
MR_string_const("\tOutput a bytecode form of the module for use", 45),
MR_TAG_COMMON(1,4,360)
},
{
MR_string_const("--generate-bytecode", 19),
MR_TAG_COMMON(1,4,361)
},
{
MR_string_const("\tsupported in general.", 22),
MR_TAG_COMMON(1,4,362)
},
{
MR_string_const("\thigher-order arguments, even if stack tracing is not", 53),
MR_TAG_COMMON(1,4,363)
},
{
MR_string_const("\tEnable stack traces through predicates and functions with", 58),
MR_TAG_COMMON(1,4,364)
},
{
MR_string_const("--stack-trace-higher-order", 26),
MR_TAG_COMMON(1,4,365)
},
{
MR_string_const("\tin the procedure is no more than N. The default value is 1000.", 63),
MR_TAG_COMMON(1,4,366)
},
{
MR_string_const("\tDelay the deaths of variables only when the number of variables", 64),
MR_TAG_COMMON(1,4,367)
},
{
MR_string_const("--delay-death-max-vars <N>", 26),
MR_TAG_COMMON(1,4,368)
},
{
MR_string_const("\tHowever, it will not do this if this option is given.", 54),
MR_TAG_COMMON(1,4,369)
},
{
MR_string_const("\taccessible from as many debugger events as possible.", 53),
MR_TAG_COMMON(1,4,370)
},
{
MR_string_const("\tbeyond the point of their last use, in order to make them", 58),
MR_TAG_COMMON(1,4,371)
},
{
MR_string_const("\tpreserves the values of variables as long as possible, even", 60),
MR_TAG_COMMON(1,4,372)
},
{
MR_string_const("\tWhen the trace level is \140deep\', the compiler normally", 54),
MR_TAG_COMMON(1,4,373)
},
{
MR_string_const("--no-delay-death", 16),
MR_TAG_COMMON(1,4,374)
},
{
MR_string_const("\tDo not disable optimizations that can distort deep profiles.", 61),
MR_TAG_COMMON(1,4,375)
},
{
MR_string_const("--profile-optimized", 19),
MR_TAG_COMMON(1,4,376)
},
{
MR_string_const("\tEnable the trace goals that depend on the <keyword> trace flag.", 64),
MR_TAG_COMMON(1,4,377)
},
{
MR_string_const("--trace-flag <keyword>", 22),
MR_TAG_COMMON(1,4,378)
},
{
MR_string_const("\tDo not disable optimizations that can change the trace.", 56),
MR_TAG_COMMON(1,4,379)
},
{
MR_string_const("--trace-optimized", 17),
MR_TAG_COMMON(1,4,380)
},
{
MR_string_const("\tstack frames", 13),
MR_TAG_COMMON(1,4,381)
},
{
MR_string_const("\tthe debugger won\'t have access to the contents of the reused", 61),
MR_TAG_COMMON(1,4,382)
},
{
MR_string_const("\ttheir parent call\'s stack frame, but it also means that", 56),
MR_TAG_COMMON(1,4,383)
},
{
MR_string_const("\tEXIT events. This allows these recursive calls to reuse", 56),
MR_TAG_COMMON(1,4,384)
},
{
MR_string_const("\tGenerate TAIL events for self-tail-recursive calls instead of", 62),
MR_TAG_COMMON(1,4,385)
},
{
MR_string_const("--exec-trace-tail-rec", 21),
MR_TAG_COMMON(1,4,386)
},
{
MR_string_const("\tfor details.", 13),
MR_TAG_COMMON(1,4,387)
},
{
MR_string_const("\tSee the Debugging chapter of the Mercury User\'s Guide", 54),
MR_TAG_COMMON(1,4,388)
},
{
MR_string_const("\tof execution tracing.", 22),
MR_TAG_COMMON(1,4,389)
},
{
MR_string_const("\tGenerate code that includes the specified level", 48),
MR_TAG_COMMON(1,4,390)
},
{
MR_string_const("--trace {minimum, shallow, deep, rep, default}", 46),
MR_TAG_COMMON(1,4,391)
},
{
MR_string_const("\tlibrary for installation.", 26),
MR_TAG_COMMON(1,4,392)
},
{
MR_string_const("\twhen using Mmake. This is recommended when building a", 54),
MR_TAG_COMMON(1,4,393)
},
{
MR_string_const("\tGenerate dependencies for use by \140mmc --make\' even", 51),
MR_TAG_COMMON(1,4,394)
},
{
MR_string_const("--generate-mmc-make-module-dependencies", 39),
MR_TAG_COMMON(1,4,395)
},
{
MR_string_const("--generate-mmc-deps", 19),
MR_TAG_COMMON(1,4,396)
},
{
MR_string_const("\tused by mmake.", 15),
MR_TAG_COMMON(1,4,397)
},
{
MR_string_const("\tfor use by \140mmc --make\' in addition to the dependencies", 56),
MR_TAG_COMMON(1,4,398)
},
{
MR_string_const("\tWhen generating \140.dep\' files, generate dependencies", 52),
MR_TAG_COMMON(1,4,399)
},
{
MR_string_const("\tdo not assume the availability of GNU Make extensions.", 55),
MR_TAG_COMMON(1,4,400)
},
{
MR_string_const("\tfragments that use only the features of standard make;", 55),
MR_TAG_COMMON(1,4,401)
},
{
MR_string_const("\tWhen generating \140.dep\' files, generate Makefile", 48),
MR_TAG_COMMON(1,4,402)
},
{
MR_string_const("--no-assume-gmake", 17),
MR_TAG_COMMON(1,4,403)
},
{
MR_string_const("\tdoes not yet work with \140--intermodule-optimization\'.", 53),
MR_TAG_COMMON(1,4,404)
},
{
MR_string_const("\tnot invalidate the compiled code. \140--smart-recompilation\'", 58),
MR_TAG_COMMON(1,4,405)
},
{
MR_string_const("\timported module\'s interface changes in a way which does", 56),
MR_TAG_COMMON(1,4,406)
},
{
MR_string_const("\tto be used to avoid unnecessary recompilations if an", 53),
MR_TAG_COMMON(1,4,407)
},
{
MR_string_const("\tWhen compiling, write program dependency information", 53),
MR_TAG_COMMON(1,4,408)
},
{
MR_string_const("--smart-recompilation", 21),
MR_TAG_COMMON(1,4,409)
},
{
MR_string_const("\t(default: 0)", 13),
MR_tbmkword(0, 0)
},
{
MR_string_const("\tcan be reused, and the terms that reuse these terms.", 53),
MR_TAG_COMMON(1,4,411)
},
{
MR_string_const("\tSpecify the maximum difference in arities between the terms that", 65),
MR_TAG_COMMON(1,4,412)
},
{
MR_string_const("--structure-reuse-constraint-arg, --ctgc-constraint-arg", 55),
MR_TAG_COMMON(1,4,413)
},
{
MR_string_const("\t(default: within_n_cells_difference, with threshold 0)", 55),
MR_TAG_COMMON(1,4,414)
},
{
MR_string_const("\tneeds to be set using \140--structure-reuse-constraint-arg\'.", 58),
MR_TAG_COMMON(1,4,415)
},
{
MR_string_const("\tand new term does not exceed a certain threshold. The threshold ", 65),
MR_TAG_COMMON(1,4,416)
},
{
MR_string_const("\treuse is allowed as long as the arities between the reused term", 64),
MR_TAG_COMMON(1,4,417)
},
{
MR_string_const("\ttype and constructor. \140within_n_cells_difference\' states that", 62),
MR_TAG_COMMON(1,4,418)
},
{
MR_string_const("\tspecifies that reuse is only allowed between terms of the same", 63),
MR_TAG_COMMON(1,4,419)
},
{
MR_string_const("\tConstraint on the way we allow structure reuse. \140same_cons_id\'", 63),
MR_TAG_COMMON(1,4,420)
},
{
MR_string_const("\twithin_n_cells_difference}", 27),
MR_TAG_COMMON(1,4,421)
},
{
MR_string_const("\twithin_n_cells_difference}, --ctgc-constraint {same_cons_id,", 61),
MR_TAG_COMMON(1,4,422)
},
{
MR_string_const("--structure-reuse-constraint {same_cons_id, ", 44),
MR_TAG_COMMON(1,4,423)
},
{
MR_string_const("\tCollection).", 13),
MR_TAG_COMMON(1,4,424)
},
{
MR_string_const("\tPerform structure reuse analysis (Compile Time Garbage ", 56),
MR_TAG_COMMON(1,4,425)
},
{
MR_string_const("--structure-reuse, --ctgc", 25),
MR_TAG_COMMON(1,4,426)
},
{
MR_string_const("\t(default: 0).", 14),
MR_TAG_COMMON(1,4,427)
},
{
MR_string_const("\tlarger than <n>. When n=0, widening is not enabled.", 52),
MR_TAG_COMMON(1,4,428)
},
{
MR_string_const("\tPerform widening when the set of structure sharing pairs becomes", 65),
MR_TAG_COMMON(1,4,429)
},
{
MR_string_const("--structure-sharing-widening <n>", 32),
MR_TAG_COMMON(1,4,430)
},
{
MR_string_const("\tPerform structure sharing analysis.", 36),
MR_TAG_COMMON(1,4,431)
},
{
MR_string_const("--structure-sharing", 19),
MR_TAG_COMMON(1,4,432)
},
{
MR_string_const("\twith at most <n> paths (default: 256).", 39),
MR_tbmkword(0, 0)
},
{
MR_string_const("\tPerform termination analysis only on predicates", 48),
MR_TAG_COMMON(1,4,434)
},
{
MR_string_const("--term-path-limit <n>, --termination-path-limit <n>", 51),
MR_TAG_COMMON(1,4,435)
},
{
MR_string_const("\t(default: 3).", 14),
MR_TAG_COMMON(1,4,436)
},
{
MR_string_const("\tPrint at most <n> reasons for any single termination error", 59),
MR_TAG_COMMON(1,4,437)
},
{
MR_string_const("--term-err-limit <n>, --termination-error-limit <n>", 51),
MR_TAG_COMMON(1,4,438)
},
{
MR_string_const("\tthan pointers to cells of the same type.", 41),
MR_TAG_COMMON(1,4,439)
},
{
MR_string_const("\tnumber of words in the cell that contain something other", 57),
MR_TAG_COMMON(1,4,440)
},
{
MR_string_const("\tin the cell.  The \140num-data-elems\' norm says that it is the", 60),
MR_TAG_COMMON(1,4,441)
},
{
MR_string_const("\tone.  The \140total\' norm says that it is the number of words", 59),
MR_TAG_COMMON(1,4,442)
},
{
MR_string_const("\tof a memory cell. The \140simple\' norm says that size is always", 61),
MR_TAG_COMMON(1,4,443)
},
{
MR_string_const("\tThe norm defines how termination analysis measures the size", 60),
MR_TAG_COMMON(1,4,444)
},
{
MR_string_const("--termination-norm {simple, total, num-data-elems}", 50),
MR_TAG_COMMON(1,4,445)
},
{
MR_string_const("\tSetting this limit to zero disables single argument analysis.", 62),
MR_TAG_COMMON(1,4,446)
},
{
MR_string_const("\tcomponents of the call graph that have up to <n> procedures.", 61),
MR_TAG_COMMON(1,4,447)
},
{
MR_string_const("\trecursion on single arguments in strongly connected", 52),
MR_TAG_COMMON(1,4,448)
},
{
MR_string_const("\tWhen performing termination analysis, try analyzing", 52),
MR_TAG_COMMON(1,4,449)
},
{
MR_string_const("--term-single-arg <n>, --termination-single-argument-analysis <n>", 65),
MR_TAG_COMMON(1,4,450)
},
{
MR_string_const("\tpredicates or functions that cannot be proved to terminate.", 60),
MR_TAG_COMMON(1,4,451)
},
{
MR_string_const("\tEnable termination analysis, and emit warnings for all", 55),
MR_TAG_COMMON(1,4,452)
},
{
MR_string_const("--verb-chk-term, --verb-check-term, --verbose-check-termination", 63),
MR_TAG_COMMON(1,4,453)
},
{
MR_string_const("\twarning of non-termination, as it is likely to be spurious.", 60),
MR_TAG_COMMON(1,4,454)
},
{
MR_string_const("\tnot be analysed.  In these cases the compiler does not emit a", 62),
MR_TAG_COMMON(1,4,455)
},
{
MR_string_const("\tconstructs (such as higher order calls) were used which could", 62),
MR_TAG_COMMON(1,4,456)
},
{
MR_string_const("\ttermination properties of other predicates, or because language", 64),
MR_TAG_COMMON(1,4,457)
},
{
MR_string_const("\tthe problem is either a lack of information about the", 54),
MR_TAG_COMMON(1,4,458)
},
{
MR_string_const("\tIn many cases where the compiler is unable to prove termination", 64),
MR_TAG_COMMON(1,4,459)
},
{
MR_string_const("\tpredicates or functions that cannot be proved to terminate.", 60),
MR_TAG_COMMON(1,4,460)
},
{
MR_string_const("\tEnable termination analysis, and emit warnings for some", 56),
MR_TAG_COMMON(1,4,461)
},
{
MR_string_const("--chk-term, --check-term, --check-termination", 45),
MR_TAG_COMMON(1,4,462)
},
{
MR_string_const("\tAnalyse each predicate to discover if it terminates.", 53),
MR_TAG_COMMON(1,4,463)
},
{
MR_string_const("--enable-term, --enable-termination", 35),
MR_TAG_COMMON(1,4,464)
},
{
MR_string_const("\twill result in an error at link time.", 38),
MR_tbmkword(0, 0)
},
{
MR_string_const("\tAttempting to use a grade which has not been installed", 55),
MR_TAG_COMMON(1,4,466)
},
{
MR_string_const("\tof these possible grades will have been installed.", 51),
MR_TAG_COMMON(1,4,467)
},
{
MR_string_const("\tDepending on your particular installation, only a subset", 57),
MR_TAG_COMMON(1,4,468)
},
{
MR_string_const("\t\140.spf\', \140.stseg\', \140.debug\', \140.par\' and/or \140.pic_reg\' appended.", 63),
MR_TAG_COMMON(1,4,469)
},
{
MR_string_const("\t\140.gc\', \140.mps\', \140.prof\', \140.memprof\', \140.profdeep\', \140.tr\',", 56),
MR_TAG_COMMON(1,4,470)
},
{
MR_string_const("\tor one of those with one or more of the grade modifiers", 56),
MR_TAG_COMMON(1,4,471)
},
{
MR_string_const("\t\140asm_fast\', \140hl\', \140hlc\', \140il\', or \140java\',", 42),
MR_TAG_COMMON(1,4,472)
},
{
MR_string_const("\tthe base grades \140none\', \140reg\', \140jump\', \140asm_jump\', \140fast\', ", 60),
MR_TAG_COMMON(1,4,473)
},
{
MR_string_const("\tSelect the compilation model. The <grade> should be one of", 59),
MR_TAG_COMMON(1,4,474)
},
{
MR_string_const("-s <grade>, --grade <grade>", 27),
MR_TAG_COMMON(1,4,475)
},
{
MR_string_const("", 0),
MR_TAG_COMMON(1,4,476)
},
{
MR_string_const("library which has been compiled with the same setting.", 54),
MR_TAG_COMMON(1,4,477)
},
{
MR_string_const("and it must be linked to a version of the Mercury", 49),
MR_TAG_COMMON(1,4,478)
},
{
MR_string_const("compiled with the same setting of these options,", 48),
MR_TAG_COMMON(1,4,479)
},
{
MR_string_const("code in such a way that the entire program must be", 50),
MR_TAG_COMMON(1,4,480)
},
{
MR_string_const("The following compilation options affect the generated", 54),
MR_TAG_COMMON(1,4,481)
},
{
MR_string_const("\tcode.", 6),
MR_tbmkword(0, 0)
},
{
MR_string_const("\tGenerate C code in \140<module>.c\', but do not generate object", 60),
MR_TAG_COMMON(1,4,483)
},
{
MR_string_const("\tAn abbreviation for \140--target c --target-code-only\'.", 53),
MR_TAG_COMMON(1,4,484)
},
{
MR_string_const("--compile-to-c", 14),
MR_TAG_COMMON(1,4,485)
},
{
MR_string_const("\tobject code.", 13),
MR_TAG_COMMON(1,4,486)
},
{
MR_string_const("\tGenerate Erlang code in \140<module>.erl\', but do not generate", 60),
MR_TAG_COMMON(1,4,487)
},
{
MR_string_const("\tAn abbreviation for \140--target erlang --target-code-only\'.", 58),
MR_TAG_COMMON(1,4,488)
},
{
MR_string_const("--erlang-only", 13),
MR_TAG_COMMON(1,4,489)
},
{
MR_string_const("\tAn abbreviation for \140--target erlang\'.", 39),
MR_TAG_COMMON(1,4,490)
},
{
MR_string_const("--erlang", 8),
MR_TAG_COMMON(1,4,491)
},
{
MR_string_const("\tobject code.", 13),
MR_TAG_COMMON(1,4,492)
},
{
MR_string_const("\tGenerate Java code in \140<module>.java\', but do not generate", 59),
MR_TAG_COMMON(1,4,493)
},
{
MR_string_const("\tAn abbreviation for \140--target java --target-code-only\'.", 56),
MR_TAG_COMMON(1,4,494)
},
{
MR_string_const("--java-only", 11),
MR_TAG_COMMON(1,4,495)
},
{
MR_string_const("\tAn abbreviation for \140--target java\'.", 37),
MR_TAG_COMMON(1,4,496)
},
{
MR_string_const("--java", 6),
MR_TAG_COMMON(1,4,497)
},
{
MR_string_const("\tobject code.", 13),
MR_TAG_COMMON(1,4,498)
},
{
MR_string_const("\tGenerate C# code in \140<module>.cs\', but do not generate", 55),
MR_TAG_COMMON(1,4,499)
},
{
MR_string_const("\tAn abbreviation for \140--target csharp --target-code-only\'.", 58),
MR_TAG_COMMON(1,4,500)
},
{
MR_string_const("--csharp-only", 13),
MR_TAG_COMMON(1,4,501)
},
{
MR_string_const("\tAn abbreviation for \140--target csharp\'.", 39),
MR_TAG_COMMON(1,4,502)
},
{
MR_string_const("--csharp", 8),
MR_TAG_COMMON(1,4,503)
},
{
MR_string_const("\tthese both use grade \140hlc\'.", 28),
MR_TAG_COMMON(1,4,504)
},
{
MR_string_const("\twith code generated using \140--target c --high-level-code\', so", 61),
MR_TAG_COMMON(1,4,505)
},
{
MR_string_const("\tABIs, code generated using \140--target asm\' is binary compatible", 63),
MR_TAG_COMMON(1,4,506)
},
{
MR_string_const("\twhere different option settings normally correspond to different", 65),
MR_TAG_COMMON(1,4,507)
},
{
MR_string_const("\tAs an exception to the usual rule for options in this section,", 63),
MR_TAG_COMMON(1,4,508)
},
{
MR_string_const("\tTargets other than C imply \140--high-level-code\' (see below).", 60),
MR_TAG_COMMON(1,4,509)
},
{
MR_string_const("\tRuntime.", 9),
MR_TAG_COMMON(1,4,510)
},
{
MR_string_const("\tis the Intermediate Language for the .NET Common Language", 58),
MR_TAG_COMMON(1,4,511)
},
{
MR_string_const("\tThe default is C.  \"IL\" (also known as \"CIL\" or \"MSIL\")", 56),
MR_TAG_COMMON(1,4,512)
},
{
MR_string_const("\tSpecify the target language: C, assembler, IL, C#, Java or Erlang.", 67),
MR_TAG_COMMON(1,4,513)
},
{
MR_string_const("--target erlang\t\t\t(grades: erlang)", 34),
MR_TAG_COMMON(1,4,514)
},
{
MR_string_const("--target java\t\t\t(grades: java)", 30),
MR_TAG_COMMON(1,4,515)
},
{
MR_string_const("--target csharp\t\t\t(grades: csharp)", 34),
MR_TAG_COMMON(1,4,516)
},
{
MR_string_const("--target il\t\t\t(grades: il)", 26),
MR_TAG_COMMON(1,4,517)
},
{
MR_string_const("--target asm\t\t\t(grades: hlc)", 28),
MR_TAG_COMMON(1,4,518)
},
{
MR_string_const("\t\t\t\t\tasm_jump, asm_fast, hl, hlc)", 33),
MR_TAG_COMMON(1,4,519)
},
{
MR_string_const("--target c\t\t\t(grades: none, reg, jump, fast,", 44),
MR_TAG_COMMON(1,4,520)
},
{
MR_string_const("\tback-ends.", 11),
MR_tbmkword(0, 0)
},
{
MR_string_const("\tThis option is not yet supported for the \140--high-level-code\'", 61),
MR_TAG_COMMON(1,4,522)
},
{
MR_string_const("\tfor details.", 13),
MR_TAG_COMMON(1,4,523)
},
{
MR_string_const("\tSee the Debugging chapter of the Mercury User\'s Guide", 54),
MR_TAG_COMMON(1,4,524)
},
{
MR_string_const("\tdebugger.", 10),
MR_TAG_COMMON(1,4,525)
},
{
MR_string_const("\tThis allows subterm dependency tracking in the declarative", 59),
MR_TAG_COMMON(1,4,526)
},
{
MR_string_const("\tEnable full support for declarative debugging.", 47),
MR_TAG_COMMON(1,4,527)
},
{
MR_string_const("--decl-debug\t\t\t\t(grade modifier: \140.decldebug\')", 46),
MR_TAG_COMMON(1,4,528)
},
{
MR_string_const("\tback-ends.", 11),
MR_TAG_COMMON(1,4,529)
},
{
MR_string_const("\tThis option is not yet supported for the \140--high-level-code\'", 61),
MR_TAG_COMMON(1,4,530)
},
{
MR_string_const("\tfor details.", 13),
MR_TAG_COMMON(1,4,531)
},
{
MR_string_const("\tSee the Debugging chapter of the Mercury User\'s Guide", 54),
MR_TAG_COMMON(1,4,532)
},
{
MR_string_const("\tEnable Mercury-level debugging.", 32),
MR_TAG_COMMON(1,4,533)
},
{
MR_string_const("--debug\t\t\t\t(grade modifier: \140.debug\')", 37),
MR_TAG_COMMON(1,4,534)
},
{
MR_string_const("\tgrades on some processors, See README.ThreadScope for details.", 63),
MR_tbmkword(0, 0)
},
{
MR_string_const("\tThis option is supported by the low-level C back-end parallel", 62),
MR_TAG_COMMON(1,4,536)
},
{
MR_string_const("\tEnable support for profiling parallel execution.", 49),
MR_TAG_COMMON(1,4,537)
},
{
MR_string_const("--threadscope\t\t(grade modifier: \140.threadscope\')", 47),
MR_TAG_COMMON(1,4,538)
},
{
MR_string_const("\t--no-highlevel-code.", 21),
MR_TAG_COMMON(1,4,539)
},
{
MR_string_const("\tThis option is supported for the C back-end, with", 50),
MR_TAG_COMMON(1,4,540)
},
{
MR_string_const("\tlisted in the given file.", 26),
MR_TAG_COMMON(1,4,541)
},
{
MR_string_const("\tEnable experimental complexity analysis for the predicates", 59),
MR_TAG_COMMON(1,4,542)
},
{
MR_string_const("--experimental-complexity=<filename>\t\t", 38),
MR_TAG_COMMON(1,4,543)
},
{
MR_string_const("\tAugment each heap cells with its size in cells.", 48),
MR_TAG_COMMON(1,4,544)
},
{
MR_string_const("--record-term-sizes-as-cells\t\t(grade modifier: \140.tsc\')", 54),
MR_TAG_COMMON(1,4,545)
},
{
MR_string_const("\tAugment each heap cells with its size in words.", 48),
MR_TAG_COMMON(1,4,546)
},
{
MR_string_const("--record-term-sizes-as-words\t\t(grade modifier: \140.tsw\')", 54),
MR_TAG_COMMON(1,4,547)
},
{
MR_string_const("\tthis option", 12),
MR_TAG_COMMON(1,4,548)
},
{
MR_string_const("\t--profile-for-implicit-parallelism is a deprecated synonym for", 63),
MR_TAG_COMMON(1,4,549)
},
{
MR_string_const("\timplicit parallelism.", 22),
MR_TAG_COMMON(1,4,550)
},
{
MR_string_const("\tSelect deep profiling options suitable for profiler directed", 61),
MR_TAG_COMMON(1,4,551)
},
{
MR_string_const("--profile-for-feedback", 22),
MR_TAG_COMMON(1,4,552)
},
{
MR_string_const("\tDisable coverage profiling.", 28),
MR_TAG_COMMON(1,4,553)
},
{
MR_string_const("--no-coverage-profiling", 23),
MR_TAG_COMMON(1,4,554)
},
{
MR_string_const("\tor Java back-ends.", 19),
MR_TAG_COMMON(1,4,555)
},
{
MR_string_const("\tThis option is not supported for the high-level C, IL, C#", 58),
MR_TAG_COMMON(1,4,556)
},
{
MR_string_const("\tEnable deep profiling.", 23),
MR_TAG_COMMON(1,4,557)
},
{
MR_string_const("--deep-profiling\t\t(grade modifier: \140.profdeep\')", 47),
MR_TAG_COMMON(1,4,558)
},
{
MR_string_const("\tThis option is not supported for the IL, C# or Java back-ends.", 63),
MR_TAG_COMMON(1,4,559)
},
{
MR_string_const("\tEnable memory and call profiling.", 34),
MR_TAG_COMMON(1,4,560)
},
{
MR_string_const("--memory-profiling\t\t(grade modifier: \140.memprof\')", 48),
MR_TAG_COMMON(1,4,561)
},
{
MR_string_const("\tThis option is not supported for the IL, C# or Java back-ends.", 63),
MR_TAG_COMMON(1,4,562)
},
{
MR_string_const("\t\140<module>.prof\'.", 17),
MR_TAG_COMMON(1,4,563)
},
{
MR_string_const("\tinformation (the static call graph) to the file", 48),
MR_TAG_COMMON(1,4,564)
},
{
MR_string_const("\tgenerated code, and also output some profiling", 47),
MR_TAG_COMMON(1,4,565)
},
{
MR_string_const("\tEnable time and call profiling.  Insert profiling hooks in the", 63),
MR_TAG_COMMON(1,4,566)
},
{
MR_string_const("\t\t\t\t(grade modifier: \140.prof\')", 29),
MR_TAG_COMMON(1,4,567)
},
{
MR_string_const("-p, --profiling, --time-profiling", 33),
MR_TAG_COMMON(1,4,568)
},
{
MR_string_const("\tprecision floats are used by default.", 38),
MR_tbmkword(0, 0)
},
{
MR_string_const("\tfloating point values don\'t need to be boxed.  Double", 54),
MR_TAG_COMMON(1,4,570)
},
{
MR_string_const("\tUse single precision floats so that, on 32-bit machines,", 57),
MR_TAG_COMMON(1,4,571)
},
{
MR_string_const("--single-prec-float\t\t(grade modifier: \140.spf\')", 45),
MR_TAG_COMMON(1,4,572)
},
{
MR_string_const("\tattribute.  The default is no.", 31),
MR_TAG_COMMON(1,4,573)
},
{
MR_string_const("\tprocedure is treated as though it has a \140not_thread_safe\'", 58),
MR_TAG_COMMON(1,4,574)
},
{
MR_string_const("\t\140thread_safe\' attribute.  \140no\' means that the foreign", 54),
MR_TAG_COMMON(1,4,575)
},
{
MR_string_const("\t\140maybe_thread_safe\' option is treated as though it has a", 57),
MR_TAG_COMMON(1,4,576)
},
{
MR_string_const("\tattribute.  \140yes\' means that a foreign procedure with the", 58),
MR_TAG_COMMON(1,4,577)
},
{
MR_string_const("\tSpecify how to treat the \140maybe_thread_safe\' foreign code", 58),
MR_TAG_COMMON(1,4,578)
},
{
MR_string_const("--maybe-thread-safe {yes, no}", 29),
MR_TAG_COMMON(1,4,579)
},
{
MR_string_const("\tEnable concurrency (via pthreads) for the high-level C grades.", 63),
MR_TAG_COMMON(1,4,580)
},
{
MR_string_const("\tEnable parallel execution support for the low-level C grades.", 62),
MR_TAG_COMMON(1,4,581)
},
{
MR_string_const("--parallel\t\t(grade modifier: \140.par\')", 36),
MR_TAG_COMMON(1,4,582)
},
{
MR_string_const("\tat the cost of increased execution time.", 41),
MR_TAG_COMMON(1,4,583)
},
{
MR_string_const("\tof small segments.  This can help to avoid trail exhaustion", 60),
MR_TAG_COMMON(1,4,584)
},
{
MR_string_const("\tAs above, but use a dynamically sized trail that is composed", 61),
MR_TAG_COMMON(1,4,585)
},
{
MR_string_const("--trail-segments\t\t\t(grade modifier: \140.trseg\')", 45),
MR_TAG_COMMON(1,4,586)
},
{
MR_string_const("\tThis option is not yet supported for the IL, C# or Java back-ends.", 67),
MR_TAG_COMMON(1,4,587)
},
{
MR_string_const("\tor for backtrackable destructive update.", 41),
MR_TAG_COMMON(1,4,588)
},
{
MR_string_const("\tThis is necessary for interfacing with constraint solvers,", 59),
MR_TAG_COMMON(1,4,589)
},
{
MR_string_const("\tEnable use of a trail.", 23),
MR_TAG_COMMON(1,4,590)
},
{
MR_string_const("--use-trail\t\t\t(grade modifier: \140.tr\')", 37),
MR_TAG_COMMON(1,4,591)
},
{
MR_string_const("\timplementation.", 16),
MR_TAG_COMMON(1,4,592)
},
{
MR_string_const("\twhich always use the garbage collector of the underlying", 57),
MR_TAG_COMMON(1,4,593)
},
{
MR_string_const("\tThis is the case for the IL, C#, Java and Erlang back-ends,", 60),
MR_TAG_COMMON(1,4,594)
},
{
MR_string_const("\t\140automatic\' means the target language provides it.", 51),
MR_TAG_COMMON(1,4,595)
},
{
MR_string_const("\tRavenbrook Limited\'s MPS (Memory Pool System) kit.", 51),
MR_TAG_COMMON(1,4,596)
},
{
MR_string_const("\t\140mps\' is a different conservative collector, based on", 54),
MR_TAG_COMMON(1,4,597)
},
{
MR_string_const("\tit requires \140--high-level-code\'.", 33),
MR_TAG_COMMON(1,4,598)
},
{
MR_string_const("\t\140accurate\' is our own type-accurate copying GC;", 48),
MR_TAG_COMMON(1,4,599)
},
{
MR_string_const("\t\140hgc\' is our own conservative collector;", 41),
MR_TAG_COMMON(1,4,600)
},
{
MR_string_const("\t\140boehm\' is Hans Boehm et al\'s conservative collector.", 54),
MR_TAG_COMMON(1,4,601)
},
{
MR_string_const("\t(default: boehm).", 18),
MR_TAG_COMMON(1,4,602)
},
{
MR_string_const("\tSpecify which method of garbage collection to use", 50),
MR_TAG_COMMON(1,4,603)
},
{
MR_string_const("\t\t\t\tother grades use \140--gc none\'.)", 34),
MR_TAG_COMMON(1,4,604)
},
{
MR_string_const("\t\t\t\t\140.mps\' grades use \140--gc mps\',", 33),
MR_TAG_COMMON(1,4,605)
},
{
MR_string_const("\t\t\t\t\140.hgc\' grades use \140--gc hgc\',", 33),
MR_TAG_COMMON(1,4,606)
},
{
MR_string_const("\t\t\t\t\140.gc\' grades use \140--gc boehm\',", 34),
MR_TAG_COMMON(1,4,607)
},
{
MR_string_const("\t\t\t\t\tgrades use \140--gc automatic\',", 33),
MR_TAG_COMMON(1,4,608)
},
{
MR_string_const("\t\t\t\t(\140java\', \140csharp\', \140il\' and \140erlang\'", 40),
MR_TAG_COMMON(1,4,609)
},
{
MR_string_const("--garbage-collection {none, boehm, hgc, mps, accurate, automatic}", 65),
MR_TAG_COMMON(1,4,610)
},
{
MR_string_const("--gc {none, boehm, hgc, mps, accurate, automatic}", 49),
MR_TAG_COMMON(1,4,611)
},
{
MR_string_const("\tenabled.", 9),
MR_tbmkword(0, 0)
},
{
MR_string_const("\tThis option is ignored if the \140--high-level-code\' option is", 60),
MR_TAG_COMMON(1,4,613)
},
{
MR_string_const("\texhaustion at the cost of increased execution time.", 52),
MR_TAG_COMMON(1,4,614)
},
{
MR_string_const("\tcomposed of small segments.  This can help to avoid stack", 58),
MR_TAG_COMMON(1,4,615)
},
{
MR_string_const("\tSpecify whether to use dynamically sized stacks that are", 57),
MR_TAG_COMMON(1,4,616)
},
{
MR_string_const("--stack-segments\t\t(grade modifier: \140.stseg\')", 44),
MR_TAG_COMMON(1,4,617)
},
{
MR_string_const("\tsystems running Unix.  On other systems it has no effect.", 58),
MR_TAG_COMMON(1,4,618)
},
{
MR_string_const("\tThis is necessary when using shared libraries on Intel x86", 59),
MR_TAG_COMMON(1,4,619)
},
{
MR_string_const("\twith position-independent code (gcc\'s \140-fpic\' option).", 55),
MR_TAG_COMMON(1,4,620)
},
{
MR_string_const("\tSelect a register usage convention that is compatible,", 55),
MR_TAG_COMMON(1,4,621)
},
{
MR_string_const("[For Unix with intel x86 architecture only]", 43),
MR_TAG_COMMON(1,4,622)
},
{
MR_string_const("--pic-reg\t\t\t(grade modifier: \140.pic_reg\')", 40),
MR_TAG_COMMON(1,4,623)
},
{
MR_string_const("\tenabled.", 9),
MR_TAG_COMMON(1,4,624)
},
{
MR_string_const("\tThis option is ignored if the \140--high-level-code\' option is", 60),
MR_TAG_COMMON(1,4,625)
},
{
MR_string_const("\tasm extensions for inline assembler labels.", 44),
MR_TAG_COMMON(1,4,626)
},
{
MR_string_const("\tSpecify whether or not to use GNU C\'s", 38),
MR_TAG_COMMON(1,4,627)
},
{
MR_string_const("--no-asm-labels\t\t\t(grades: none, reg, jump, fast)", 49),
MR_TAG_COMMON(1,4,628)
},
{
MR_string_const("--asm-labels\t\t\t(grades: asm_jump, asm_fast)", 43),
MR_TAG_COMMON(1,4,629)
},
{
MR_string_const("\tenabled.", 9),
MR_TAG_COMMON(1,4,630)
},
{
MR_string_const("\tThis option is ignored if the \140--high-level-code\' option is", 60),
MR_TAG_COMMON(1,4,631)
},
{
MR_string_const("\t\"labels as values\" extension.", 30),
MR_TAG_COMMON(1,4,632)
},
{
MR_string_const("\tSpecify whether or not to use GNU C\'s", 38),
MR_TAG_COMMON(1,4,633)
},
{
MR_string_const("--no-gcc-non-local-gotos\t(grades: none, reg)", 44),
MR_TAG_COMMON(1,4,634)
},
{
MR_string_const("--gcc-non-local-gotos\t\t(grades: jump, fast, asm_jump, asm_fast)", 63),
MR_TAG_COMMON(1,4,635)
},
{
MR_string_const("\tenabled.", 9),
MR_TAG_COMMON(1,4,636)
},
{
MR_string_const("\tThis option is ignored if the \140--high-level-code\' option is", 60),
MR_TAG_COMMON(1,4,637)
},
{
MR_string_const("\tglobal register variables extension.", 37),
MR_TAG_COMMON(1,4,638)
},
{
MR_string_const("\tSpecify whether or not to use GNU C\'s", 38),
MR_TAG_COMMON(1,4,639)
},
{
MR_string_const("--no-gcc-global-registers\t(grades: none, jump, asm_jump)", 56),
MR_TAG_COMMON(1,4,640)
},
{
MR_string_const("--gcc-global-registers\t\t(grades: reg, fast, asm_fast)", 53),
MR_TAG_COMMON(1,4,641)
},
{
MR_string_const("\tAn abbreviation for \140--high-level-code --high-level-data\'.", 59),
MR_tbmkword(0, 0)
},
{
MR_string_const("--high-level\t\t\t(grades: hl, il, csharp, java)", 45),
MR_TAG_COMMON(1,4,643)
},
{
MR_string_const("\tUse an alternative higher-level data representation.", 53),
MR_TAG_COMMON(1,4,644)
},
{
MR_string_const("--high-level-data\t\t\t(grades: hl, il, csharp, java)", 50),
MR_TAG_COMMON(1,4,645)
},
{
MR_string_const("\toriginal back-end.", 19),
MR_TAG_COMMON(1,4,646)
},
{
MR_string_const("\trather than the very low-level code that is generated by our", 61),
MR_TAG_COMMON(1,4,647)
},
{
MR_string_const("\tUse an alternative back-end that generates high-level code", 59),
MR_TAG_COMMON(1,4,648)
},
{
MR_string_const("-H, --high-level-code\t\t\t(grades: hl, hlc, il, csharp, java)", 59),
MR_TAG_COMMON(1,4,649)
},
{
MR_string_const("\t(constants) of discriminated union types.", 42),
MR_tbmkword(0, 0)
},
{
MR_string_const("\tfor representing nullary constructors", 38),
MR_TAG_COMMON(1,4,651)
},
{
MR_string_const("\tAllocate up to <n> global objects per type,", 44),
MR_TAG_COMMON(1,4,652)
},
{
MR_string_const("--num-reserved-objects <n>    (This option is not for general use.)", 67),
MR_TAG_COMMON(1,4,653)
},
{
MR_string_const("\t(constants) of discriminated union types.", 42),
MR_TAG_COMMON(1,4,654)
},
{
MR_string_const("\taddresses that can be used to represent nullary constructors", 61),
MR_TAG_COMMON(1,4,655)
},
{
MR_string_const("\tTreat the integer values from 0 up to <n> - 1 as reserved", 58),
MR_TAG_COMMON(1,4,656)
},
{
MR_string_const("--num-reserved-addresses <n>  (This option is not for general use.)", 67),
MR_TAG_COMMON(1,4,657)
},
{
MR_string_const("\tUse <n> tag bits.", 18),
MR_TAG_COMMON(1,4,658)
},
{
MR_string_const("--num-tag-bits <n>            (This option is not for general use.)", 67),
MR_TAG_COMMON(1,4,659)
},
{
MR_string_const("\teach word as tag bits (default: low).", 38),
MR_TAG_COMMON(1,4,660)
},
{
MR_string_const("\tSpecify whether to use the low bits or the high bits of ", 57),
MR_TAG_COMMON(1,4,661)
},
{
MR_string_const("--tags {none, low, high}      (This option is not for general use.)", 67),
MR_TAG_COMMON(1,4,662)
},
{
MR_string_const("\t\140-DNO_TYPE_LAYOUT\').", 21),
MR_tbmkword(0, 0)
},
{
MR_string_const("\tto them. (The C code also needs to be compiled with", 52),
MR_TAG_COMMON(1,4,664)
},
{
MR_string_const("\tDon\'t output type_ctor_layout structures or references", 55),
MR_TAG_COMMON(1,4,665)
},
{
MR_string_const("(This option is not for general use.)", 37),
MR_TAG_COMMON(1,4,666)
},
{
MR_string_const("--no-type-layout", 16),
MR_TAG_COMMON(1,4,667)
},
{
MR_string_const("\tminimal model tabling.", 23),
MR_TAG_COMMON(1,4,668)
},
{
MR_string_const("\tEnables extra data structures that assist in debugging", 55),
MR_TAG_COMMON(1,4,669)
},
{
MR_string_const("(This option is not for general use.)", 37),
MR_TAG_COMMON(1,4,670)
},
{
MR_string_const("--minimal-model-debug", 21),
MR_TAG_COMMON(1,4,671)
},
{
MR_string_const("\tEnable the use of an experimental form of minimal model tabling.", 65),
MR_TAG_COMMON(1,4,672)
},
{
MR_string_const("(This option is not for general use.)", 37),
MR_TAG_COMMON(1,4,673)
},
{
MR_string_const("--use-minimal-model-own-stacks", 30),
MR_TAG_COMMON(1,4,674)
},
{
MR_string_const("\tEnable the use of the standard form of minimal model tabling.", 62),
MR_TAG_COMMON(1,4,675)
},
{
MR_string_const("(This option is not for general use.)", 37),
MR_TAG_COMMON(1,4,676)
},
{
MR_string_const("--use-minimal-model-stack-copy", 30),
MR_TAG_COMMON(1,4,677)
},
{
MR_string_const("\t(valid range: 1 to 100, default: 90).", 38),
MR_tbmkword(0, 0)
},
{
MR_string_const("\tshould be allowed to get.  Given as an integer percentage", 58),
MR_TAG_COMMON(1,4,679)
},
{
MR_string_const("\tSpecify how full the \140:- pragma fact_table\' hash tables", 56),
MR_TAG_COMMON(1,4,680)
},
{
MR_string_const("--fact-table-hash-percent-full <percentage>", 43),
MR_TAG_COMMON(1,4,681)
},
{
MR_string_const("\t\140:- pragma fact_table\' data array (default: 1024).", 51),
MR_TAG_COMMON(1,4,682)
},
{
MR_string_const("\tSpecify the maximum number of elements in a single", 51),
MR_TAG_COMMON(1,4,683)
},
{
MR_string_const("--fact-table-max-array-size <n>", 31),
MR_TAG_COMMON(1,4,684)
},
{
MR_string_const("\timposed by some C compilers.", 29),
MR_TAG_COMMON(1,4,685)
},
{
MR_string_const("\tThis option can be useful to avoid exceeding fixed limits", 58),
MR_TAG_COMMON(1,4,686)
},
{
MR_string_const("\tThe special value 0 indicates the table size is unlimited.", 59),
MR_TAG_COMMON(1,4,687)
},
{
MR_string_const("\tThe maximum number of entries a jump table can have.", 53),
MR_TAG_COMMON(1,4,688)
},
{
MR_string_const("--max-jump-table-size=<n>", 25),
MR_TAG_COMMON(1,4,689)
},
{
MR_string_const("\tCombines the effect of the two options above.", 46),
MR_TAG_COMMON(1,4,690)
},
{
MR_string_const("--no-reclaim-heap-on-failure", 28),
MR_TAG_COMMON(1,4,691)
},
{
MR_string_const("\tDon\'t reclaim heap on backtracking in semidet code.", 52),
MR_TAG_COMMON(1,4,692)
},
{
MR_string_const("--no-reclaim-heap-on-semidet-failure", 36),
MR_TAG_COMMON(1,4,693)
},
{
MR_string_const("\tDon\'t reclaim heap on backtracking in nondet code.", 51),
MR_TAG_COMMON(1,4,694)
},
{
MR_string_const("--no-reclaim-heap-on-nondet-failure", 35),
MR_TAG_COMMON(1,4,695)
},
{
MR_string_const("\tbefore going on the next phase on all predicates.", 50),
MR_TAG_COMMON(1,4,696)
},
{
MR_string_const("\tto complete each phase of code generation on all predicates", 60),
MR_TAG_COMMON(1,4,697)
},
{
MR_string_const("\tThis option tells the compiler", 31),
MR_TAG_COMMON(1,4,698)
},
{
MR_string_const("\tbefore going on to the next predicate.", 39),
MR_TAG_COMMON(1,4,699)
},
{
MR_string_const("\tThe default \140--trad-passes\' completely processes each predicate", 64),
MR_TAG_COMMON(1,4,700)
},
{
MR_string_const("--no-trad-passes", 16),
MR_TAG_COMMON(1,4,701)
},
{
MR_string_const("\t\140<module>.pic_s\' rather than to \140<module>.s\'.", 46),
MR_TAG_COMMON(1,4,702)
},
{
MR_string_const("\tThe generated assembler code will be written to", 48),
MR_TAG_COMMON(1,4,703)
},
{
MR_string_const("\tThis option is only used by the \140--target asm\' back-end.", 57),
MR_TAG_COMMON(1,4,704)
},
{
MR_string_const("\tGenerate position-independent code.", 36),
MR_TAG_COMMON(1,4,705)
},
{
MR_string_const("--pic", 5),
MR_TAG_COMMON(1,4,706)
},
{
MR_string_const("\treal machine registers.", 24),
MR_tbmkword(0, 0)
},
{
MR_string_const("\tAssume that <n> float temporaries will fit into", 48),
MR_TAG_COMMON(1,4,708)
},
{
MR_string_const("--num-real-f-temps <n> \t(This option is not for general use.)", 61),
MR_TAG_COMMON(1,4,709)
},
{
MR_string_const("\treal machine registers.", 24),
MR_TAG_COMMON(1,4,710)
},
{
MR_string_const("\tAssume that <n> non-float temporaries will fit into", 52),
MR_TAG_COMMON(1,4,711)
},
{
MR_string_const("--num-real-r-temps <n> \t(This option is not for general use.)", 61),
MR_TAG_COMMON(1,4,712)
},
{
MR_string_const("\tregisters.", 11),
MR_TAG_COMMON(1,4,713)
},
{
MR_string_const("\tAssume registers f1 up to f<n> are real floating point", 55),
MR_TAG_COMMON(1,4,714)
},
{
MR_string_const("--num-real-f-regs <n>  \t(This option is not for general use.)", 61),
MR_TAG_COMMON(1,4,715)
},
{
MR_string_const("\tregisters.", 11),
MR_TAG_COMMON(1,4,716)
},
{
MR_string_const("\tAssume registers r1 up to r<n> are real general purpose", 56),
MR_TAG_COMMON(1,4,717)
},
{
MR_string_const("--num-real-r-regs <n>  \t(This option is not for general use.)", 61),
MR_TAG_COMMON(1,4,718)
},
{
MR_string_const("\tAssume that branch instructions have a delay slot.", 51),
MR_TAG_COMMON(1,4,719)
},
{
MR_string_const("--branch-delay-slot    \t(This option is not for general use.)", 61),
MR_TAG_COMMON(1,4,720)
},
{
MR_string_const("\t(default: 0).", 14),
MR_tbmkword(0, 0)
},
{
MR_string_const("\tsuboptimal modules with \140--intermodule-analysis\'", 49),
MR_TAG_COMMON(1,4,722)
},
{
MR_string_const("\tThe maximum number of times to repeat analyses of", 50),
MR_TAG_COMMON(1,4,723)
},
{
MR_string_const("--analysis-repeat <n>", 21),
MR_TAG_COMMON(1,4,724)
},
{
MR_string_const("\tThis option is not yet fully implemented.", 42),
MR_TAG_COMMON(1,4,725)
},
{
MR_string_const("\tunused argument elimination across module boundaries.", 54),
MR_TAG_COMMON(1,4,726)
},
{
MR_string_const("\tPerform analyses such as termination analysis and", 50),
MR_TAG_COMMON(1,4,727)
},
{
MR_string_const("--intermodule-analysis", 22),
MR_TAG_COMMON(1,4,728)
},
{
MR_string_const("\tnot build any others.", 22),
MR_TAG_COMMON(1,4,729)
},
{
MR_string_const("\te.g. those for the standard library, but do", 44),
MR_TAG_COMMON(1,4,730)
},
{
MR_string_const("\t\140.trans_opt\' files which are already built,", 44),
MR_TAG_COMMON(1,4,731)
},
{
MR_string_const("\tPerform inter-module optimization using any", 44),
MR_TAG_COMMON(1,4,732)
},
{
MR_string_const("--use-trans-opt-files", 21),
MR_TAG_COMMON(1,4,733)
},
{
MR_string_const("\tnot build any others.", 22),
MR_TAG_COMMON(1,4,734)
},
{
MR_string_const("\te.g. those for the standard library, but do", 44),
MR_TAG_COMMON(1,4,735)
},
{
MR_string_const("\t\140.opt\' files which are already built,", 38),
MR_TAG_COMMON(1,4,736)
},
{
MR_string_const("\tPerform inter-module optimization using any", 44),
MR_TAG_COMMON(1,4,737)
},
{
MR_string_const("--use-opt-files", 15),
MR_TAG_COMMON(1,4,738)
},
{
MR_string_const("\tclosure of the imports.", 24),
MR_TAG_COMMON(1,4,739)
},
{
MR_string_const("\tfor directly imported modules, not the transitive", 50),
MR_TAG_COMMON(1,4,740)
},
{
MR_string_const("\tOnly read the inter-module optimization information", 52),
MR_TAG_COMMON(1,4,741)
},
{
MR_string_const("--no-read-opt-files-transitively", 32),
MR_TAG_COMMON(1,4,742)
},
{
MR_string_const("\twork with \140mmc --make\'.", 24),
MR_TAG_COMMON(1,4,743)
},
{
MR_string_const("\tNote that \140--transitive-intermodule-optimization\' does not", 59),
MR_TAG_COMMON(1,4,744)
},
{
MR_string_const("\tThis data is imported from \140<module>.trans_opt\' files.", 55),
MR_TAG_COMMON(1,4,745)
},
{
MR_string_const("\tImport the transitive intermodule optimization data.", 53),
MR_TAG_COMMON(1,4,746)
},
{
MR_string_const("--transitive-intermodule-optimization", 37),
MR_TAG_COMMON(1,4,747)
},
{
MR_string_const("--trans-intermod-opt", 20),
MR_TAG_COMMON(1,4,748)
},
{
MR_string_const("\tThis option must be set throughout the compilation process.", 60),
MR_TAG_COMMON(1,4,749)
},
{
MR_string_const("\tthe code for predicates imported from other modules.", 53),
MR_TAG_COMMON(1,4,750)
},
{
MR_string_const("\tPerform inlining and higher-order specialization of", 52),
MR_TAG_COMMON(1,4,751)
},
{
MR_string_const("--intermodule-optimization", 26),
MR_TAG_COMMON(1,4,752)
},
{
MR_string_const("--intermod-opt", 14),
MR_TAG_COMMON(1,4,753)
},
{
MR_string_const("\tincrease code size.", 20),
MR_TAG_COMMON(1,4,754)
},
{
MR_string_const("\tand turn off optimizations that significantly", 46),
MR_TAG_COMMON(1,4,755)
},
{
MR_string_const("\tTurn on optimizations that reduce code size", 44),
MR_TAG_COMMON(1,4,756)
},
{
MR_string_const("--opt-space, --optimize-space", 29),
MR_TAG_COMMON(1,4,757)
},
{
MR_string_const("\twhile optimization level 6 means full optimization.", 52),
MR_TAG_COMMON(1,4,758)
},
{
MR_string_const("\tOptimization level -1 means no optimization", 44),
MR_TAG_COMMON(1,4,759)
},
{
MR_string_const("\tSet optimization level to <n>.", 31),
MR_TAG_COMMON(1,4,760)
},
{
MR_string_const("-O <n>, --opt-level <n>, --optimization-level <n>", 49),
MR_TAG_COMMON(1,4,761)
},
{
MR_string_const("\tof minimal model tabling.", 26),
MR_tbmkword(0, 0)
},
{
MR_string_const("\tThis information is used to reduce the overhead", 48),
MR_TAG_COMMON(1,4,763)
},
{
MR_string_const("\tthat are evaluated using minimal model tabling.", 48),
MR_TAG_COMMON(1,4,764)
},
{
MR_string_const("\tIdentify those goals that do not call procedures", 49),
MR_TAG_COMMON(1,4,765)
},
{
MR_string_const("--analyse-mm-tabling", 20),
MR_TAG_COMMON(1,4,766)
},
{
MR_string_const("\tof trailing.", 13),
MR_TAG_COMMON(1,4,767)
},
{
MR_string_const("\tThis information is used to reduce the overhead", 48),
MR_TAG_COMMON(1,4,768)
},
{
MR_string_const("\tprocedures that will not modify the trail.", 43),
MR_TAG_COMMON(1,4,769)
},
{
MR_string_const("\tEnable trail usage analysis.  Identify those", 45),
MR_TAG_COMMON(1,4,770)
},
{
MR_string_const("--analyse-trail-usage", 21),
MR_TAG_COMMON(1,4,771)
},
{
MR_string_const("\tSome optimizations can make use of this information.", 53),
MR_TAG_COMMON(1,4,772)
},
{
MR_string_const("\tprocedures that will not throw an exception.", 45),
MR_TAG_COMMON(1,4,773)
},
{
MR_string_const("\tEnable exception analysis.  Identify those", 43),
MR_TAG_COMMON(1,4,774)
},
{
MR_string_const("--analyse-exceptions", 20),
MR_TAG_COMMON(1,4,775)
},
{
MR_string_const("\tA value of -1 specifies no limit. The default is 15.", 53),
MR_TAG_COMMON(1,4,776)
},
{
MR_string_const("\tto be optimized by deforestation.", 34),
MR_TAG_COMMON(1,4,777)
},
{
MR_string_const("\tSpecify a rough limit on the size of a goal", 44),
MR_TAG_COMMON(1,4,778)
},
{
MR_string_const("--deforestation-size-threshold <threshold>", 42),
MR_TAG_COMMON(1,4,779)
},
{
MR_string_const("\tA value of -1 specifies no limit. The default is 200.", 54),
MR_TAG_COMMON(1,4,780)
},
{
MR_string_const("\tin a procedure created by deforestation.", 41),
MR_TAG_COMMON(1,4,781)
},
{
MR_string_const("\tSpecify a rough limit on the number of variables", 49),
MR_TAG_COMMON(1,4,782)
},
{
MR_string_const("--deforestation-vars-threshold <threshold>", 42),
MR_TAG_COMMON(1,4,783)
},
{
MR_string_const("\tA value of -1 specifies no depth limit. The default is 4.", 58),
MR_TAG_COMMON(1,4,784)
},
{
MR_string_const("\tdeforestation algorithm.", 25),
MR_TAG_COMMON(1,4,785)
},
{
MR_string_const("\tSpecify a depth limit to prevent infinite loops in the", 55),
MR_TAG_COMMON(1,4,786)
},
{
MR_string_const("--deforestation-depth-limit <limit>", 35),
MR_TAG_COMMON(1,4,787)
},
{
MR_string_const("\tover data structures within a conjunction.", 43),
MR_TAG_COMMON(1,4,788)
},
{
MR_string_const("\tintermediate data structures and to avoid repeated traversals", 62),
MR_TAG_COMMON(1,4,789)
},
{
MR_string_const("\ttransformation whose aim is to avoid the construction of", 57),
MR_TAG_COMMON(1,4,790)
},
{
MR_string_const("\tEnable deforestation. Deforestation is a program", 49),
MR_TAG_COMMON(1,4,791)
},
{
MR_string_const("--deforestation", 15),
MR_TAG_COMMON(1,4,792)
},
{
MR_string_const("\tconstructor application.", 25),
MR_TAG_COMMON(1,4,793)
},
{
MR_string_const("\tEnable the optimization of \"last\" calls that are followed by", 61),
MR_TAG_COMMON(1,4,794)
},
{
MR_string_const("--optimize-constructor-last-call", 32),
MR_TAG_COMMON(1,4,795)
},
{
MR_string_const("\tprocedures, so as to make them tail recursive.", 47),
MR_TAG_COMMON(1,4,796)
},
{
MR_string_const("\tAttempt to introduce accumulating variables into", 49),
MR_TAG_COMMON(1,4,797)
},
{
MR_string_const("--introduce-accumulators", 24),
MR_TAG_COMMON(1,4,798)
},
{
MR_string_const("\tsize of the code.", 18),
MR_TAG_COMMON(1,4,799)
},
{
MR_string_const("\tonly goal deletion; a value of one prevents any increase in the", 64),
MR_TAG_COMMON(1,4,800)
},
{
MR_string_const("\tnot needed. A value of zero forbids goal movement and allows", 61),
MR_TAG_COMMON(1,4,801)
},
{
MR_string_const("\twhen removing it from computation paths on which its outputs are", 65),
MR_TAG_COMMON(1,4,802)
},
{
MR_string_const("\tGives the maximum number of places to which a goal may be copied", 65),
MR_TAG_COMMON(1,4,803)
},
{
MR_string_const("--unneeded-code-copy-limit", 26),
MR_TAG_COMMON(1,4,804)
},
{
MR_string_const("\tor movement of the goal.", 25),
MR_TAG_COMMON(1,4,805)
},
{
MR_string_const("\tnot needed, provided the semantics options allow the deletion", 62),
MR_TAG_COMMON(1,4,806)
},
{
MR_string_const("\tRemove goals from computation paths where their outputs are", 60),
MR_TAG_COMMON(1,4,807)
},
{
MR_string_const("--unneeded-code", 15),
MR_TAG_COMMON(1,4,808)
},
{
MR_string_const("\t\140--type-specialization\'.", 25),
MR_TAG_COMMON(1,4,809)
},
{
MR_string_const("\tbe specialized by \140--optimize-higher-order\' and", 48),
MR_TAG_COMMON(1,4,810)
},
{
MR_string_const("\tSet the maximum size of higher-order arguments to", 50),
MR_TAG_COMMON(1,4,811)
},
{
MR_string_const("--higher-order-arg-limit", 24),
MR_TAG_COMMON(1,4,812)
},
{
MR_string_const("\tand branched goals.", 20),
MR_TAG_COMMON(1,4,813)
},
{
MR_string_const("\tGoal size is measured as the number of calls, unifications", 59),
MR_TAG_COMMON(1,4,814)
},
{
MR_string_const("\t\140--optimize-higher-order\' and \140--type-specialization\'.", 55),
MR_TAG_COMMON(1,4,815)
},
{
MR_string_const("\tSet the maximum goal size of specialized versions created by", 61),
MR_TAG_COMMON(1,4,816)
},
{
MR_string_const("--higher-order-size-limit", 25),
MR_TAG_COMMON(1,4,817)
},
{
MR_string_const("\tthere are \140:- pragma type_spec\' declarations.", 46),
MR_TAG_COMMON(1,4,818)
},
{
MR_string_const("\tEnable specialization of polymorphic predicates for which", 58),
MR_TAG_COMMON(1,4,819)
},
{
MR_string_const("--user-guided-type-specialization", 33),
MR_TAG_COMMON(1,4,820)
},
{
MR_string_const("\tpolymorphic types are known.", 29),
MR_TAG_COMMON(1,4,821)
},
{
MR_string_const("\tEnable specialization of polymorphic predicates where the", 58),
MR_TAG_COMMON(1,4,822)
},
{
MR_string_const("--type-specialization", 21),
MR_TAG_COMMON(1,4,823)
},
{
MR_string_const("\tEnable specialization of higher-order predicates.", 50),
MR_TAG_COMMON(1,4,824)
},
{
MR_string_const("--optimize-higher-order", 23),
MR_TAG_COMMON(1,4,825)
},
{
MR_string_const("\t\140--intermodule-optimization\'.", 30),
MR_TAG_COMMON(1,4,826)
},
{
MR_string_const("\tThis option implies \140--optimize-unused-args\' and", 49),
MR_TAG_COMMON(1,4,827)
},
{
MR_string_const("\tPerform unused argument removal across module boundaries.", 58),
MR_TAG_COMMON(1,4,828)
},
{
MR_string_const("--intermod-unused-args", 22),
MR_TAG_COMMON(1,4,829)
},
{
MR_string_const("\tefficient code for many polymorphic predicates.", 48),
MR_TAG_COMMON(1,4,830)
},
{
MR_string_const("\tThis will cause the compiler to generate more", 46),
MR_TAG_COMMON(1,4,831)
},
{
MR_string_const("\tRemove unused predicate arguments.", 35),
MR_TAG_COMMON(1,4,832)
},
{
MR_string_const("--optimize-unused-args", 22),
MR_TAG_COMMON(1,4,833)
},
{
MR_string_const("\tMinimize the number of variables saved across calls.", 53),
MR_TAG_COMMON(1,4,834)
},
{
MR_string_const("--optimize-saved-vars", 21),
MR_TAG_COMMON(1,4,835)
},
{
MR_string_const("\tprimitive goals that can fail.", 31),
MR_TAG_COMMON(1,4,836)
},
{
MR_string_const("\tReorder goals to move construction unifications after", 54),
MR_TAG_COMMON(1,4,837)
},
{
MR_string_const("--delay-constructs", 18),
MR_TAG_COMMON(1,4,838)
},
{
MR_string_const("\tHoist loop invariants out of loops.", 36),
MR_TAG_COMMON(1,4,839)
},
{
MR_string_const("--loop-invariants", 17),
MR_TAG_COMMON(1,4,840)
},
{
MR_string_const("\twith the same input arguments.", 31),
MR_TAG_COMMON(1,4,841)
},
{
MR_string_const("\tOptimize away multiple calls to a predicate", 44),
MR_TAG_COMMON(1,4,842)
},
{
MR_string_const("--optimize-duplicate-calls", 26),
MR_TAG_COMMON(1,4,843)
},
{
MR_string_const("\talways leave this to be done at runtime.", 41),
MR_TAG_COMMON(1,4,844)
},
{
MR_string_const("\tstring.format and related predicates at compile time;", 54),
MR_TAG_COMMON(1,4,845)
},
{
MR_string_const("\tDo not attempt to interpret the format string in calls to", 58),
MR_TAG_COMMON(1,4,846)
},
{
MR_string_const("--no-optimize-format-calls", 26),
MR_TAG_COMMON(1,4,847)
},
{
MR_string_const("\tRemove excess assignment unifications.", 39),
MR_TAG_COMMON(1,4,848)
},
{
MR_string_const("--excess-assign", 15),
MR_TAG_COMMON(1,4,849)
},
{
MR_string_const("\tDon\'t migrate into the end of branched goals.", 46),
MR_TAG_COMMON(1,4,850)
},
{
MR_string_const("--no-follow-code", 16),
MR_TAG_COMMON(1,4,851)
},
{
MR_string_const("\tMigrate into the start of branched goals.", 42),
MR_TAG_COMMON(1,4,852)
},
{
MR_string_const("--prev-code", 11),
MR_TAG_COMMON(1,4,853)
},
{
MR_string_const("\tSpecialized versions of procedures will not be created.", 56),
MR_TAG_COMMON(1,4,854)
},
{
MR_string_const("\tbut only rearrange goals within each procedure.", 48),
MR_TAG_COMMON(1,4,855)
},
{
MR_string_const("\tEnable the constraint propagation transformation,", 50),
MR_TAG_COMMON(1,4,856)
},
{
MR_string_const("--local-constraint-propagation", 30),
MR_TAG_COMMON(1,4,857)
},
{
MR_string_const("\twhich can fail are executed as early as possible.", 50),
MR_TAG_COMMON(1,4,858)
},
{
MR_string_const("\twhich attempts to transform the code so that goals", 51),
MR_TAG_COMMON(1,4,859)
},
{
MR_string_const("\tEnable the constraint propagation transformation,", 50),
MR_TAG_COMMON(1,4,860)
},
{
MR_string_const("--constraint-propagation", 24),
MR_TAG_COMMON(1,4,861)
},
{
MR_string_const("\tDisable optimization of common term structures.", 48),
MR_TAG_COMMON(1,4,862)
},
{
MR_string_const("--no-common-struct", 18),
MR_TAG_COMMON(1,4,863)
},
{
MR_string_const("\tslow compilation.", 18),
MR_TAG_COMMON(1,4,864)
},
{
MR_string_const("\tcontaining large numbers of variables can cause", 48),
MR_TAG_COMMON(1,4,865)
},
{
MR_string_const("\tcontaining more than <threshold> variables. Procedures", 55),
MR_TAG_COMMON(1,4,866)
},
{
MR_string_const("\tDon\'t inline a call if it would result in a procedure", 54),
MR_TAG_COMMON(1,4,867)
},
{
MR_string_const("--inline-vars-threshold <threshold>", 35),
MR_TAG_COMMON(1,4,868)
},
{
MR_string_const("\tand too high a value may result in reduced performance.", 56),
MR_TAG_COMMON(1,4,869)
},
{
MR_string_const("\tthe \140.opt\' file and compiling to C may cause link errors,", 58),
MR_TAG_COMMON(1,4,870)
},
{
MR_string_const("\t\140.opt\' files. Note that changing this between writing", 54),
MR_TAG_COMMON(1,4,871)
},
{
MR_string_const("\tdetermine which predicates should be included in", 49),
MR_TAG_COMMON(1,4,872)
},
{
MR_string_const("\tSimilar to \140--inline-simple-threshold\', except used to", 55),
MR_TAG_COMMON(1,4,873)
},
{
MR_string_const("--intermod-inline-simple-threshold", 34),
MR_TAG_COMMON(1,4,874)
},
{
MR_string_const("\tgiven threshold.", 17),
MR_TAG_COMMON(1,4,875)
},
{
MR_string_const("\tInline a procedure if its size is less than the", 48),
MR_TAG_COMMON(1,4,876)
},
{
MR_string_const("--inline-simple-threshold <threshold>", 37),
MR_TAG_COMMON(1,4,877)
},
{
MR_string_const("\tit is called is below the given threshold.", 43),
MR_TAG_COMMON(1,4,878)
},
{
MR_string_const("\tless the assumed call cost, multiplied by the number of times", 62),
MR_TAG_COMMON(1,4,879)
},
{
MR_string_const("\tin terms of the number of connectives in its internal form)", 60),
MR_TAG_COMMON(1,4,880)
},
{
MR_string_const("\tInline a procedure if its size (measured roughly", 49),
MR_TAG_COMMON(1,4,881)
},
{
MR_string_const("--inline-compound-threshold <threshold>", 39),
MR_TAG_COMMON(1,4,882)
},
{
MR_string_const("\tmultiplied by the number of times it is called,", 48),
MR_TAG_COMMON(1,4,883)
},
{
MR_string_const("\tUsed only in conjunction with --inline-compound-threshold.", 59),
MR_TAG_COMMON(1,4,884)
},
{
MR_string_const("\tAssume that the cost of a call is the given parameter.", 55),
MR_TAG_COMMON(1,4,885)
},
{
MR_string_const("--inline-call-cost <cost>", 25),
MR_TAG_COMMON(1,4,886)
},
{
MR_string_const("\tDisable the inlining of procedures called only once.", 53),
MR_TAG_COMMON(1,4,887)
},
{
MR_string_const("--no-inline-single-use", 22),
MR_TAG_COMMON(1,4,888)
},
{
MR_string_const("\tbuiltins is not traced.", 24),
MR_TAG_COMMON(1,4,889)
},
{
MR_string_const("\tdebugging, as without this option the execution of", 51),
MR_TAG_COMMON(1,4,890)
},
{
MR_string_const("\tout of line procedures.  This is done by default when,", 55),
MR_TAG_COMMON(1,4,891)
},
{
MR_string_const("\tGenerate builtins (e.g. arithmetic operators) as calls to", 58),
MR_TAG_COMMON(1,4,892)
},
{
MR_string_const("--no-inline-builtins", 20),
MR_TAG_COMMON(1,4,893)
},
{
MR_string_const("\tDisable the inlining of simple procedures.", 43),
MR_TAG_COMMON(1,4,894)
},
{
MR_string_const("--no-inline-simple", 18),
MR_TAG_COMMON(1,4,895)
},
{
MR_string_const("\tDisable all forms of inlining.", 31),
MR_TAG_COMMON(1,4,896)
},
{
MR_string_const("--no-inlining", 13),
MR_TAG_COMMON(1,4,897)
},
{
MR_string_const("\tDon\'t generate simplified code for simple negations.", 53),
MR_tbmkword(0, 0)
},
{
MR_string_const("--no-simple-neg", 15),
MR_TAG_COMMON(1,4,899)
},
{
MR_string_const("\tDisable the middle recursion optimization.", 43),
MR_TAG_COMMON(1,4,900)
},
{
MR_string_const("--no-middle-rec", 15),
MR_TAG_COMMON(1,4,901)
},
{
MR_string_const("\teven when this would otherwise be possible.", 44),
MR_TAG_COMMON(1,4,902)
},
{
MR_string_const("\tDon\'t use the atomic variants of the Boehm gc allocator calls,", 63),
MR_TAG_COMMON(1,4,903)
},
{
MR_string_const("--no-use-atomic-cells", 21),
MR_TAG_COMMON(1,4,904)
},
{
MR_string_const("\tstatic constants.", 18),
MR_TAG_COMMON(1,4,905)
},
{
MR_string_const("\tfor purposes such as debugging will still be created as", 56),
MR_TAG_COMMON(1,4,906)
},
{
MR_string_const("\tNote that auxiliary data structures created by the compiler", 60),
MR_TAG_COMMON(1,4,907)
},
{
MR_string_const("\tat compile time and storing them as static constants.", 54),
MR_TAG_COMMON(1,4,908)
},
{
MR_string_const("\tDisable the optimization of constructing constant ground terms", 63),
MR_TAG_COMMON(1,4,909)
},
{
MR_string_const("--no-static-ground-terms", 24),
MR_TAG_COMMON(1,4,910)
},
{
MR_string_const("\tmust be at least this number (default: 4).", 43),
MR_TAG_COMMON(1,4,911)
},
{
MR_string_const("\tThe number of alternatives in a binary search switch", 53),
MR_TAG_COMMON(1,4,912)
},
{
MR_string_const("--binary-switch-size <n>", 24),
MR_TAG_COMMON(1,4,913)
},
{
MR_string_const("\tmust be at least this number (default: 3).", 43),
MR_TAG_COMMON(1,4,914)
},
{
MR_string_const("\tThe number of alternatives in a try/retry chain switch", 55),
MR_TAG_COMMON(1,4,915)
},
{
MR_string_const("--try-switch-size <n>", 21),
MR_TAG_COMMON(1,4,916)
},
{
MR_string_const("\tmust be at least this number (default: 3).", 43),
MR_TAG_COMMON(1,4,917)
},
{
MR_string_const("\tThe number of alternatives in a tag switch", 43),
MR_TAG_COMMON(1,4,918)
},
{
MR_string_const("--tag-switch-size <n>", 21),
MR_TAG_COMMON(1,4,919)
},
{
MR_string_const("\tmust have at least this many entries (default: 4).", 51),
MR_TAG_COMMON(1,4,920)
},
{
MR_string_const("\tThe binary search table generated for a string switch", 54),
MR_TAG_COMMON(1,4,921)
},
{
MR_string_const("--string-binary-switch-size <n>", 31),
MR_TAG_COMMON(1,4,922)
},
{
MR_string_const("\tmust have at least this many entries (default: 8).", 51),
MR_TAG_COMMON(1,4,923)
},
{
MR_string_const("\tThe hash table generated for a string switch", 45),
MR_TAG_COMMON(1,4,924)
},
{
MR_string_const("--string-hash-switch-size <n>", 29),
MR_TAG_COMMON(1,4,925)
},
{
MR_string_const("\tmust have at least this many entries (default: 4).", 51),
MR_TAG_COMMON(1,4,926)
},
{
MR_string_const("\tThe lookup table generated for an atomic switch", 48),
MR_TAG_COMMON(1,4,927)
},
{
MR_string_const("--lookup-switch-size <n>", 24),
MR_TAG_COMMON(1,4,928)
},
{
MR_string_const("\tmust have at least this many entries (default: 4).", 51),
MR_TAG_COMMON(1,4,929)
},
{
MR_string_const("\tThe jump table generated for an atomic switch", 46),
MR_TAG_COMMON(1,4,930)
},
{
MR_string_const("--dense-switch-size <n>", 23),
MR_TAG_COMMON(1,4,931)
},
{
MR_string_const("\tmust have at least this percentage of full slots (default: 25).", 64),
MR_TAG_COMMON(1,4,932)
},
{
MR_string_const("\tin which all the outputs are constant terms", 44),
MR_TAG_COMMON(1,4,933)
},
{
MR_string_const("\tThe jump table generated for an atomic switch", 46),
MR_TAG_COMMON(1,4,934)
},
{
MR_string_const("--lookup-switch-req-density <percentage>", 40),
MR_TAG_COMMON(1,4,935)
},
{
MR_string_const("\tmust have at least this percentage of full slots (default: 25).", 64),
MR_TAG_COMMON(1,4,936)
},
{
MR_string_const("\tThe jump table generated for an atomic switch", 46),
MR_TAG_COMMON(1,4,937)
},
{
MR_string_const("--dense-switch-req-density <percentage>", 39),
MR_TAG_COMMON(1,4,938)
},
{
MR_string_const("\tdisable string hashing and integer table-lookup indexing.", 58),
MR_TAG_COMMON(1,4,939)
},
{
MR_string_const("\tGenerate switches as a simple if-then-else chains;", 51),
MR_TAG_COMMON(1,4,940)
},
{
MR_string_const("--no-smart-indexing", 19),
MR_TAG_COMMON(1,4,941)
},
{
MR_string_const("\t(default: 4000).", 17),
MR_tbmkword(0, 0)
},
{
MR_string_const("\tonly as long as the arrays involved have at most <n> elements", 62),
MR_TAG_COMMON(1,4,943)
},
{
MR_string_const("\tAttempt to compress the layout structures used by the debugger", 63),
MR_TAG_COMMON(1,4,944)
},
{
MR_string_const("--layout-compression-limit <n>", 30),
MR_TAG_COMMON(1,4,945)
},
{
MR_string_const("\tIterate most optimizations at most <n> times (default: 3).", 59),
MR_TAG_COMMON(1,4,946)
},
{
MR_string_const("--optimize-repeat <n>", 21),
MR_TAG_COMMON(1,4,947)
},
{
MR_string_const("\tthe assigned value.", 20),
MR_TAG_COMMON(1,4,948)
},
{
MR_string_const("\tOptimize away assignments to locations that already hold", 57),
MR_TAG_COMMON(1,4,949)
},
{
MR_string_const("--optimize-reassign", 19),
MR_TAG_COMMON(1,4,950)
},
{
MR_string_const("\tDisable branch delay slot optimizations.", 41),
MR_TAG_COMMON(1,4,951)
},
{
MR_string_const("--no-optimize-delay-slot", 24),
MR_TAG_COMMON(1,4,952)
},
{
MR_string_const("\tDisable stack frame optimizations.", 35),
MR_TAG_COMMON(1,4,953)
},
{
MR_string_const("--no-optimize-frames", 20),
MR_TAG_COMMON(1,4,954)
},
{
MR_string_const("\tEnable elimination of duplicate procedures.", 44),
MR_TAG_COMMON(1,4,955)
},
{
MR_string_const("--optimize-proc-dups", 20),
MR_TAG_COMMON(1,4,956)
},
{
MR_string_const("\tEnable elimination of duplicate code within procedures.", 56),
MR_TAG_COMMON(1,4,957)
},
{
MR_string_const("--optimize-dups", 15),
MR_TAG_COMMON(1,4,958)
},
{
MR_string_const("\tDisable elimination of dead labels and code.", 45),
MR_TAG_COMMON(1,4,959)
},
{
MR_string_const("--no-optimize-labels", 20),
MR_TAG_COMMON(1,4,960)
},
{
MR_string_const("\tblocks wherever possible.", 26),
MR_TAG_COMMON(1,4,961)
},
{
MR_string_const("\tDisable the transformation to use local variables in C code", 60),
MR_TAG_COMMON(1,4,962)
},
{
MR_string_const("--no-use-local-vars", 19),
MR_TAG_COMMON(1,4,963)
},
{
MR_string_const("\tminimize stack consumption, possibly at the expense of speed.", 62),
MR_TAG_COMMON(1,4,964)
},
{
MR_string_const("\twhen this requires a runtime check. This option tries to", 57),
MR_TAG_COMMON(1,4,965)
},
{
MR_string_const("\tConvert nondet calls into tail calls whenever possible, even", 61),
MR_TAG_COMMON(1,4,966)
},
{
MR_string_const("--checked-nondet-tailcalls", 26),
MR_TAG_COMMON(1,4,967)
},
{
MR_string_const("\tDisable the optimization of tailcalls.", 39),
MR_TAG_COMMON(1,4,968)
},
{
MR_string_const("--pessimize-tailcalls", 21),
MR_TAG_COMMON(1,4,969)
},
{
MR_string_const("\tDisable elimination of jumps to ordinary code.", 47),
MR_TAG_COMMON(1,4,970)
},
{
MR_string_const("--no-optimize-fulljumps", 23),
MR_TAG_COMMON(1,4,971)
},
{
MR_string_const("\tDisable elimination of jumps to jumps.", 39),
MR_TAG_COMMON(1,4,972)
},
{
MR_string_const("--no-optimize-jumps", 19),
MR_TAG_COMMON(1,4,973)
},
{
MR_string_const("\tDisable local peephole optimizations.", 38),
MR_TAG_COMMON(1,4,974)
},
{
MR_string_const("--no-optimize-peep", 18),
MR_TAG_COMMON(1,4,975)
},
{
MR_string_const("\tEnable dead predicate elimination.", 35),
MR_TAG_COMMON(1,4,976)
},
{
MR_string_const("--optimize-dead-procs", 21),
MR_TAG_COMMON(1,4,977)
},
{
MR_string_const("\tDisable the low-level optimization passes.", 43),
MR_TAG_COMMON(1,4,978)
},
{
MR_string_const("--no-llds-optimize", 18),
MR_TAG_COMMON(1,4,979)
},
{
MR_string_const("\tDisable optimization of common subsequences in layout structures.", 66),
MR_TAG_COMMON(1,4,980)
},
{
MR_string_const("--no-common-layout-data", 23),
MR_TAG_COMMON(1,4,981)
},
{
MR_string_const("\tDisable optimization of common data structures.", 48),
MR_TAG_COMMON(1,4,982)
},
{
MR_string_const("--no-common-data", 16),
MR_TAG_COMMON(1,4,983)
},
{
MR_string_const("\tin the standard library.", 25),
MR_tbmkword(0, 0)
},
{
MR_string_const("\tbut instead insert calls to the versions of these operations", 61),
MR_TAG_COMMON(1,4,985)
},
{
MR_string_const("\tDo not generate trailing operations inline,", 44),
MR_TAG_COMMON(1,4,986)
},
{
MR_string_const("--no-generate-trail-ops-inline", 30),
MR_TAG_COMMON(1,4,987)
},
{
MR_string_const("\tby replacing occurrences of such variables with their values.", 62),
MR_TAG_COMMON(1,4,988)
},
{
MR_string_const("\tEliminate local variables with known values, where possible,", 61),
MR_TAG_COMMON(1,4,989)
},
{
MR_string_const("--eliminate-local-vars", 22),
MR_TAG_COMMON(1,4,990)
},
{
MR_string_const("\tassignment statements into initializers.", 41),
MR_TAG_COMMON(1,4,991)
},
{
MR_string_const("\tassignment statements, rather than converting such", 51),
MR_TAG_COMMON(1,4,992)
},
{
MR_string_const("\tLeave initializations of local variables as", 44),
MR_TAG_COMMON(1,4,993)
},
{
MR_string_const("--no-optimize-initializations", 29),
MR_TAG_COMMON(1,4,994)
},
{
MR_string_const("\tby turning self-tailcalls into loops.", 38),
MR_TAG_COMMON(1,4,995)
},
{
MR_string_const("\tTreat tailcalls as ordinary calls, rather than optimizing", 58),
MR_TAG_COMMON(1,4,996)
},
{
MR_string_const("--no-optimize-tailcalls", 23),
MR_TAG_COMMON(1,4,997)
},
{
MR_string_const("\tDo not perform peephole optimization of the MLDS.", 50),
MR_TAG_COMMON(1,4,998)
},
{
MR_string_const("--no-mlds-peephole", 18),
MR_TAG_COMMON(1,4,999)
},
{
MR_string_const("\tDisable the MLDS->MLDS optimization passes.", 44),
MR_TAG_COMMON(1,4,1000)
},
{
MR_string_const("--no-mlds-optimize", 18),
MR_TAG_COMMON(1,4,1001)
},
{
MR_string_const("\tcould be longer than 255 characters at runtime.", 48),
MR_tbmkword(0, 0)
},
{
MR_string_const("\tswitching on atoms. Do not enable if the string switched on", 60),
MR_TAG_COMMON(1,4,1003)
},
{
MR_string_const("\tswitches by converting the string to an atom at runtime and", 60),
MR_TAG_COMMON(1,4,1004)
},
{
MR_string_const("\tEnable a workaround for slow HiPE compilation of large string", 62),
MR_TAG_COMMON(1,4,1005)
},
{
MR_string_const("--erlang-switch-on-strings-as-atoms", 35),
MR_TAG_COMMON(1,4,1006)
},
{
MR_string_const("\textension.", 11),
MR_tbmkword(0, 0)
},
{
MR_string_const("\tparallel grades not using the global register variables", 56),
MR_TAG_COMMON(1,4,1008)
},
{
MR_string_const("\tinto local variables. This option only affects low-level", 57),
MR_TAG_COMMON(1,4,1009)
},
{
MR_string_const("\tDon\'t copy the thread-local Mercury engine base address", 56),
MR_TAG_COMMON(1,4,1010)
},
{
MR_string_const("--no-local-thread-engine-base", 29),
MR_TAG_COMMON(1,4,1011)
},
{
MR_string_const("\tseverely stress the C compiler on large modules.", 49),
MR_TAG_COMMON(1,4,1012)
},
{
MR_string_const("\twhich produces the most efficient code but tends to", 52),
MR_TAG_COMMON(1,4,1013)
},
{
MR_string_const("\tthe Mercury procedures in a single C function,", 47),
MR_TAG_COMMON(1,4,1014)
},
{
MR_string_const("\tThis option has the effect of putting the code for all", 55),
MR_TAG_COMMON(1,4,1015)
},
{
MR_string_const("--everything-in-one-c-function", 30),
MR_TAG_COMMON(1,4,1016)
},
{
MR_string_const("\tslightly more efficient code, but makes compilation slower.", 60),
MR_TAG_COMMON(1,4,1017)
},
{
MR_string_const("\tvalue of <n> is one.  Increasing <n> can produce", 49),
MR_TAG_COMMON(1,4,1018)
},
{
MR_string_const("\tprocedures in a single C function.  The default", 48),
MR_TAG_COMMON(1,4,1019)
},
{
MR_string_const("\tPut the code for up to <n> Mercury", 35),
MR_TAG_COMMON(1,4,1020)
},
{
MR_string_const("--procs-per-c-function <n>", 26),
MR_TAG_COMMON(1,4,1021)
},
{
MR_string_const("\tUse only gotos, don\'t emit C loop constructs.", 46),
MR_TAG_COMMON(1,4,1022)
},
{
MR_string_const("--no-emit-c-loops", 17),
MR_TAG_COMMON(1,4,1023)
},
{
MR_string_const("\tThis produces slightly bigger but slightly faster code.", 56),
MR_TAG_COMMON(1,4,1024)
},
{
MR_string_const("\tto the fail or redo code in the runtime system.", 48),
MR_TAG_COMMON(1,4,1025)
},
{
MR_string_const("\tEmit the fail or redo macro instead of a branch", 48),
MR_TAG_COMMON(1,4,1026)
},
{
MR_string_const("--use-macro-for-redo-fail", 25),
MR_TAG_COMMON(1,4,1027)
},
{
MR_string_const("\tlist of flags passed to the Erlang compiler.", 45),
MR_tbmkword(0, 0)
},
{
MR_string_const("\tDo not add \140+nowarn_unused_vars +nowarn_unused_function\' to the", 64),
MR_TAG_COMMON(1,4,1029)
},
{
MR_string_const("--no-erlang-inhibit-trivial-warnings", 36),
MR_TAG_COMMON(1,4,1030)
},
{
MR_string_const("\tgeneration for all modules except for a select few.", 52),
MR_TAG_COMMON(1,4,1031)
},
{
MR_string_const("\tso it is useful when you wish to enable native code", 52),
MR_TAG_COMMON(1,4,1032)
},
{
MR_string_const("\tErlang compiler.  Cancelled out by \140--no-erlang-native code\'", 61),
MR_TAG_COMMON(1,4,1033)
},
{
MR_string_const("\tAdd \140+native\' to the list of flags passed to the", 49),
MR_TAG_COMMON(1,4,1034)
},
{
MR_string_const("--erlang-native-code", 20),
MR_TAG_COMMON(1,4,1035)
},
{
MR_string_const("\tErlang header files (.hrl).", 28),
MR_TAG_COMMON(1,4,1036)
},
{
MR_string_const("\tAppend <dir> to the list of directories to be searched for", 59),
MR_TAG_COMMON(1,4,1037)
},
{
MR_string_const("--erlang-include-directory <dir>, --erlang-include-dir <dir>", 60),
MR_TAG_COMMON(1,4,1038)
},
{
MR_string_const("\tto be quoted when passed to the shell.", 39),
MR_TAG_COMMON(1,4,1039)
},
{
MR_string_const("\t\140--erlang-flag\' should be used for single words which need", 59),
MR_TAG_COMMON(1,4,1040)
},
{
MR_string_const("\tSpecify options to be passed to the Erlang compiler.", 53),
MR_TAG_COMMON(1,4,1041)
},
{
MR_string_const("--erlang-flags <options>, --erlang-flag <option>", 48),
MR_TAG_COMMON(1,4,1042)
},
{
MR_string_const("\tThe default is \140erl\'.", 22),
MR_TAG_COMMON(1,4,1043)
},
{
MR_string_const("\tSpecify the name of the Erlang interpreter.", 44),
MR_TAG_COMMON(1,4,1044)
},
{
MR_string_const("--erlang-interpreter <erl>", 26),
MR_TAG_COMMON(1,4,1045)
},
{
MR_string_const("\tThe default is \140erlc\'.", 23),
MR_TAG_COMMON(1,4,1046)
},
{
MR_string_const("\tSpecify the name of the Erlang compiler.", 41),
MR_TAG_COMMON(1,4,1047)
},
{
MR_string_const("--erlang-compiler <erlc>", 24),
MR_TAG_COMMON(1,4,1048)
},
{
MR_string_const("\tInfrastructure (CLI) execution environment, e.g. \140mono\'.", 57),
MR_TAG_COMMON(1,4,1049)
},
{
MR_string_const("\tSpecify the program that implements the Common Language", 56),
MR_TAG_COMMON(1,4,1050)
},
{
MR_string_const("--cli-interpreter <prog>", 24),
MR_TAG_COMMON(1,4,1051)
},
{
MR_string_const("\tto be quoted when passed to the shell.", 39),
MR_TAG_COMMON(1,4,1052)
},
{
MR_string_const("\t\140--csharp-flag\' should be used for single words which need", 59),
MR_TAG_COMMON(1,4,1053)
},
{
MR_string_const("\tSpecify options to be passed to the C# compiler.", 49),
MR_TAG_COMMON(1,4,1054)
},
{
MR_string_const("--csharp-flags <options>, --csharp-flag <option>", 48),
MR_TAG_COMMON(1,4,1055)
},
{
MR_string_const("\tSpecify the name of the C# Compiler.  The default is \140csc\'.", 60),
MR_TAG_COMMON(1,4,1056)
},
{
MR_string_const("--csharp-compiler <csc>", 23),
MR_TAG_COMMON(1,4,1057)
},
{
MR_string_const("\tBy default this is \140.class\'.", 29),
MR_TAG_COMMON(1,4,1058)
},
{
MR_string_const("\tSpecify an extension for Java object (bytecode) files", 54),
MR_TAG_COMMON(1,4,1059)
},
{
MR_string_const("--java-object-file-extension <ext>", 34),
MR_TAG_COMMON(1,4,1060)
},
{
MR_string_const("\tSet the classpath for the Java compiler.", 41),
MR_TAG_COMMON(1,4,1061)
},
{
MR_string_const("--java-classpath <path>", 23),
MR_TAG_COMMON(1,4,1062)
},
{
MR_string_const("\tto be quoted when passed to the shell.", 39),
MR_TAG_COMMON(1,4,1063)
},
{
MR_string_const("\t\140--java-flag\' should be used for single words which need", 57),
MR_TAG_COMMON(1,4,1064)
},
{
MR_string_const("\tSpecify options to be passed to the Java compiler.", 51),
MR_TAG_COMMON(1,4,1065)
},
{
MR_string_const("--java-flags <options>, --java-flag <option>", 44),
MR_TAG_COMMON(1,4,1066)
},
{
MR_string_const("\tThe default is \140java\'", 22),
MR_TAG_COMMON(1,4,1067)
},
{
MR_string_const("\tSpecify which Java interpreter to use.", 39),
MR_TAG_COMMON(1,4,1068)
},
{
MR_string_const("--java-interpreter <java>", 25),
MR_TAG_COMMON(1,4,1069)
},
{
MR_string_const("\tSpecify which Java compiler to use.  The default is \140javac\'.", 61),
MR_TAG_COMMON(1,4,1070)
},
{
MR_string_const("--java-compiler <javac>", 23),
MR_TAG_COMMON(1,4,1071)
},
{
MR_string_const("--javac <javac>", 15),
MR_TAG_COMMON(1,4,1072)
},
{
MR_string_const("\tto be quoted when passed to the shell.", 39),
MR_TAG_COMMON(1,4,1073)
},
{
MR_string_const("\t\140--cflag\' should be used for single words which need", 53),
MR_TAG_COMMON(1,4,1074)
},
{
MR_string_const("\tSpecify options to be passed to the C compiler.", 48),
MR_TAG_COMMON(1,4,1075)
},
{
MR_string_const("--cflags <options>, --cflag <option>", 36),
MR_TAG_COMMON(1,4,1076)
},
{
MR_string_const("\tis not set or if the C compiler is not GNU C.", 46),
MR_TAG_COMMON(1,4,1077)
},
{
MR_string_const("\tThis option has no effect if \140--gc boehm\'", 42),
MR_TAG_COMMON(1,4,1078)
},
{
MR_string_const("\tbut may significantly increase code size.", 42),
MR_TAG_COMMON(1,4,1079)
},
{
MR_string_const("\tThis can improve performance a fair bit,", 41),
MR_TAG_COMMON(1,4,1080)
},
{
MR_string_const("\tInline calls to GC_malloc().", 29),
MR_TAG_COMMON(1,4,1081)
},
{
MR_string_const("--inline-alloc", 14),
MR_TAG_COMMON(1,4,1082)
},
{
MR_string_const("\tsequence of \140--c-include-directory\' options.", 45),
MR_TAG_COMMON(1,4,1083)
},
{
MR_string_const("\t\140MERCURY_MC_ALL_C_INCL_DIRS\' environment variable to a", 55),
MR_TAG_COMMON(1,4,1084)
},
{
MR_string_const("\tthis list, rather than append to it, then you can set the", 58),
MR_TAG_COMMON(1,4,1085)
},
{
MR_string_const("\tC header files.  Note that if you want to override", 51),
MR_TAG_COMMON(1,4,1086)
},
{
MR_string_const("\tAppend <dir> to the list of directories to be searched for", 59),
MR_TAG_COMMON(1,4,1087)
},
{
MR_string_const("--c-include-directory <dir>, --c-include-dir <dir>", 50),
MR_TAG_COMMON(1,4,1088)
},
{
MR_string_const("\tand disables stripping of the executable.)", 43),
MR_TAG_COMMON(1,4,1089)
},
{
MR_string_const("\t(This has the same effect as \140--cflags \"-g\"\'", 45),
MR_TAG_COMMON(1,4,1090)
},
{
MR_string_const("\tEnable debugging of the generated C code.", 42),
MR_TAG_COMMON(1,4,1091)
},
{
MR_string_const("--c-debug", 9),
MR_TAG_COMMON(1,4,1092)
},
{
MR_string_const("\theaders, rather than the ANSI subset.", 38),
MR_TAG_COMMON(1,4,1093)
},
{
MR_string_const("\tof C should be used.  Use the full contents of system", 54),
MR_TAG_COMMON(1,4,1094)
},
{
MR_string_const("\tDon\'t specify to the C compiler that the ANSI dialect", 54),
MR_TAG_COMMON(1,4,1095)
},
{
MR_string_const("--no-ansi-c", 11),
MR_TAG_COMMON(1,4,1096)
},
{
MR_string_const("\tDon\'t enable the C compiler\'s optimizations.", 45),
MR_TAG_COMMON(1,4,1097)
},
{
MR_string_const("--no-c-optimize", 15),
MR_TAG_COMMON(1,4,1098)
},
{
MR_string_const("\tSpecify which C compiler to use.", 33),
MR_TAG_COMMON(1,4,1099)
},
{
MR_string_const("--cc <compiler-name>", 20),
MR_TAG_COMMON(1,4,1100)
},
{
MR_string_const("\tpass \140/debug\' to the IL assembler or C# compiler.)", 51),
MR_TAG_COMMON(1,4,1101)
},
{
MR_string_const("\tIf the target language is IL or C#, this causes the compiler to", 64),
MR_TAG_COMMON(1,4,1102)
},
{
MR_string_const("\t\140--c-debug\' (see below).", 25),
MR_TAG_COMMON(1,4,1103)
},
{
MR_string_const("\tIf the target language is C, this has the same effect as", 57),
MR_TAG_COMMON(1,4,1104)
},
{
MR_string_const("\tEnable debugging of the generated target code.", 47),
MR_TAG_COMMON(1,4,1105)
},
{
MR_string_const("--target-debug", 14),
MR_TAG_COMMON(1,4,1106)
},
{
MR_string_const("\trather than to \140mmc\'.", 22),
MR_TAG_COMMON(1,4,1107)
},
{
MR_string_const("\toptions to the target code compiler (e.g. \140mgnuc\')", 51),
MR_TAG_COMMON(1,4,1108)
},
{
MR_string_const("\tNote that if you are using Mmake, you need to pass these", 57),
MR_TAG_COMMON(1,4,1109)
},
{
MR_string_const("\t(Mac OS X only.)", 17),
MR_tbmkword(0, 0)
},
{
MR_string_const("\tAppend the specified directory to the framework search path.", 61),
MR_TAG_COMMON(1,4,1111)
},
{
MR_string_const("-F <directory>, --framework-directory <directory>", 49),
MR_TAG_COMMON(1,4,1112)
},
{
MR_string_const("\t(Mac OS X only.)", 17),
MR_TAG_COMMON(1,4,1113)
},
{
MR_string_const("\tBuild and link against the specified framework.", 48),
MR_TAG_COMMON(1,4,1114)
},
{
MR_string_const("--framework <framework>", 23),
MR_TAG_COMMON(1,4,1115)
},
{
MR_string_const("\tSpecify the command used to produce Java archive (JAR) files.", 62),
MR_TAG_COMMON(1,4,1116)
},
{
MR_string_const("--java-archive-command <command>", 32),
MR_TAG_COMMON(1,4,1117)
},
{
MR_string_const("\ta shared library.", 18),
MR_TAG_COMMON(1,4,1118)
},
{
MR_string_const("\tSpecify the command used to invoke the linker when linking", 59),
MR_TAG_COMMON(1,4,1119)
},
{
MR_string_const("--link-shared-lib-command <command>", 35),
MR_TAG_COMMON(1,4,1120)
},
{
MR_string_const("\tan executable.", 15),
MR_TAG_COMMON(1,4,1121)
},
{
MR_string_const("\tSpecify the command used to invoke the linker when linking", 59),
MR_TAG_COMMON(1,4,1122)
},
{
MR_string_const("--link-executable-command <command>", 35),
MR_TAG_COMMON(1,4,1123)
},
{
MR_string_const("\tby the Mercury compiler.)", 26),
MR_TAG_COMMON(1,4,1124)
},
{
MR_string_const("\tcontaining only C code that was automatically generated", 56),
MR_TAG_COMMON(1,4,1125)
},
{
MR_string_const("\thand-coded C code with \140INIT\' comments, rather than", 52),
MR_TAG_COMMON(1,4,1126)
},
{
MR_string_const("\t(This may be necessary if the C files contain", 46),
MR_TAG_COMMON(1,4,1127)
},
{
MR_string_const("\tSearch \140.c\' files for extra initialization functions.", 54),
MR_TAG_COMMON(1,4,1128)
},
{
MR_string_const("--extra-initialization-functions, --extra-inits", 47),
MR_TAG_COMMON(1,4,1129)
},
{
MR_string_const("\tSpecify flags to pass to the Mercury runtime.", 46),
MR_TAG_COMMON(1,4,1130)
},
{
MR_string_const("--runtime-flags <flags>", 23),
MR_TAG_COMMON(1,4,1131)
},
{
MR_string_const("\tDisable use of the readline library in the debugger.", 53),
MR_TAG_COMMON(1,4,1132)
},
{
MR_string_const("--no-use-readline", 17),
MR_TAG_COMMON(1,4,1133)
},
{
MR_string_const("\tDo not allow undefined symbols in shared libraries.", 52),
MR_TAG_COMMON(1,4,1134)
},
{
MR_string_const("--no-allow-undefined", 20),
MR_TAG_COMMON(1,4,1135)
},
{
MR_string_const("\tprovide a main() function.", 27),
MR_TAG_COMMON(1,4,1136)
},
{
MR_string_const("\tDon\'t generate a C main() function.  The user\'s code must", 58),
MR_TAG_COMMON(1,4,1137)
},
{
MR_string_const("--no-main", 9),
MR_TAG_COMMON(1,4,1138)
},
{
MR_string_const("\tDon\'t pipe link errors through the Mercury demangler.", 54),
MR_TAG_COMMON(1,4,1139)
},
{
MR_string_const("--no-demangle", 13),
MR_TAG_COMMON(1,4,1140)
},
{
MR_string_const("\tDon\'t strip executables.", 25),
MR_TAG_COMMON(1,4,1141)
},
{
MR_string_const("--no-strip", 10),
MR_TAG_COMMON(1,4,1142)
},
{
MR_string_const("\tbe passed to c2init when tracing is enabled.", 45),
MR_TAG_COMMON(1,4,1143)
},
{
MR_string_const("\tAppend <init-file> to the list of \140.init\' files to", 51),
MR_TAG_COMMON(1,4,1144)
},
{
MR_string_const("--trace-init-file <init-file>", 29),
MR_TAG_COMMON(1,4,1145)
},
{
MR_string_const("\tbe passed to c2init.", 21),
MR_TAG_COMMON(1,4,1146)
},
{
MR_string_const("\tAppend <init-file> to the list of \140.init\' files to", 51),
MR_TAG_COMMON(1,4,1147)
},
{
MR_string_const("--init-file <init-file>", 23),
MR_TAG_COMMON(1,4,1148)
},
{
MR_string_const("\tbe searched for \140.init\' files by c2init.", 41),
MR_TAG_COMMON(1,4,1149)
},
{
MR_string_const("\tAppend <directory> to the list of directories to", 49),
MR_TAG_COMMON(1,4,1150)
},
{
MR_string_const("--init-file-directory <directory>", 33),
MR_TAG_COMMON(1,4,1151)
},
{
MR_string_const("\t\140--mercury-linkage shared\'.", 28),
MR_TAG_COMMON(1,4,1152)
},
{
MR_string_const("\tShared libraries are always linked with", 40),
MR_TAG_COMMON(1,4,1153)
},
{
MR_string_const("\tlinking an executable with Mercury libraries.", 46),
MR_TAG_COMMON(1,4,1154)
},
{
MR_string_const("\tSpecify whether to use shared or static linking when", 53),
MR_TAG_COMMON(1,4,1155)
},
{
MR_string_const("--mercury-linkage {shared|static}", 33),
MR_TAG_COMMON(1,4,1156)
},
{
MR_string_const("\twith \140--linkage shared\'.", 25),
MR_TAG_COMMON(1,4,1157)
},
{
MR_string_const("\texecutables.  Shared libraries are always linked", 49),
MR_TAG_COMMON(1,4,1158)
},
{
MR_string_const("\tSpecify whether to use shared or static linking for", 52),
MR_TAG_COMMON(1,4,1159)
},
{
MR_string_const("--linkage {shared|static}", 25),
MR_TAG_COMMON(1,4,1160)
},
{
MR_string_const("\tLink with the specified Mercury library.", 41),
MR_TAG_COMMON(1,4,1161)
},
{
MR_string_const("--ml <library>, --mercury-library <library>", 43),
MR_TAG_COMMON(1,4,1162)
},
{
MR_string_const("\tImplies \140--no-mercury-configuration-directory\'.", 48),
MR_TAG_COMMON(1,4,1163)
},
{
MR_string_const("\tDon\'t use the Mercury standard library.", 40),
MR_TAG_COMMON(1,4,1164)
},
{
MR_string_const("--no-mercury-stdlib-dir", 23),
MR_TAG_COMMON(1,4,1165)
},
{
MR_string_const("--no-mercury-standard-library-directory", 39),
MR_TAG_COMMON(1,4,1166)
},
{
MR_string_const("\tand \140--mercury-configuration-directory <directory>\'.", 53),
MR_TAG_COMMON(1,4,1167)
},
{
MR_string_const("\tImplies \140--mercury-library-directory <directory>\'", 50),
MR_TAG_COMMON(1,4,1168)
},
{
MR_string_const("\tSearch <directory> for the Mercury standard library.", 53),
MR_TAG_COMMON(1,4,1169)
},
{
MR_string_const("--mercury-stdlib-dir <directory>", 32),
MR_TAG_COMMON(1,4,1170)
},
{
MR_string_const("--mercury-standard-library-directory <directory>", 48),
MR_TAG_COMMON(1,4,1171)
},
{
MR_string_const("\toptions as needed.", 19),
MR_TAG_COMMON(1,4,1172)
},
{
MR_string_const("\t\140--init-file-directory\' and \140--c-include-directory\'", 52),
MR_TAG_COMMON(1,4,1173)
},
{
MR_string_const("\t\140--search-directory\', \140--library-directory\',", 45),
MR_TAG_COMMON(1,4,1174)
},
{
MR_string_const("\tbe searched for Mercury libraries. This will add", 49),
MR_TAG_COMMON(1,4,1175)
},
{
MR_string_const("\tAppend <directory> to the list of directories to", 49),
MR_TAG_COMMON(1,4,1176)
},
{
MR_string_const("--mld <directory>, --mercury-library-directory <directory>", 58),
MR_TAG_COMMON(1,4,1177)
},
{
MR_string_const("\t\140--c-include-directory\' options.", 33),
MR_TAG_COMMON(1,4,1178)
},
{
MR_string_const("\t\140--library-directory\', \140--init-file-directory\' and", 51),
MR_TAG_COMMON(1,4,1179)
},
{
MR_string_const("\t\140--search-directory\', \140--intermod-directory\',", 46),
MR_TAG_COMMON(1,4,1180)
},
{
MR_string_const("\tinstalled.  Similar to adding <directory> using all of the", 59),
MR_TAG_COMMON(1,4,1181)
},
{
MR_string_const("\tSearch <directory> for Mercury library files have not yet been", 63),
MR_TAG_COMMON(1,4,1182)
},
{
MR_string_const("--search-library-files-directory <directory>", 44),
MR_TAG_COMMON(1,4,1183)
},
{
MR_string_const("--search-lib-files-dir <directory>", 34),
MR_TAG_COMMON(1,4,1184)
},
{
MR_string_const("\tLink with the specified object file.", 37),
MR_TAG_COMMON(1,4,1185)
},
{
MR_string_const("--link-object <object-file>", 27),
MR_TAG_COMMON(1,4,1186)
},
{
MR_string_const("\tLink with the specified library.", 33),
MR_TAG_COMMON(1,4,1187)
},
{
MR_string_const("-l <library>, --library <library>", 33),
MR_TAG_COMMON(1,4,1188)
},
{
MR_string_const("\t-R option above (such as Mac OS X).", 36),
MR_TAG_COMMON(1,4,1189)
},
{
MR_string_const("\tpath is obtained from the shared library and not via the", 57),
MR_TAG_COMMON(1,4,1190)
},
{
MR_string_const("\tThis option is useful on systems where the runtime search", 58),
MR_TAG_COMMON(1,4,1191)
},
{
MR_string_const("\tSpecify the path where a shared library will be installed.", 59),
MR_TAG_COMMON(1,4,1192)
},
{
MR_string_const("--shlib-linker-install-name-path <directory>", 44),
MR_TAG_COMMON(1,4,1193)
},
{
MR_string_const("\tto search for shared libraries at runtime.", 43),
MR_TAG_COMMON(1,4,1194)
},
{
MR_string_const("\tAppend <directory> to the list of directories in which", 55),
MR_TAG_COMMON(1,4,1195)
},
{
MR_string_const("-R <directory>, --runtime-library-directory <directory>", 55),
MR_TAG_COMMON(1,4,1196)
},
{
MR_string_const("\tto search for libraries.", 25),
MR_TAG_COMMON(1,4,1197)
},
{
MR_string_const("\tAppend <directory> to the list of directories in which", 55),
MR_TAG_COMMON(1,4,1198)
},
{
MR_string_const("-L <directory>, --library-directory <directory>", 47),
MR_TAG_COMMON(1,4,1199)
},
{
MR_string_const("\tto be quoted when passed to the shell.", 39),
MR_TAG_COMMON(1,4,1200)
},
{
MR_string_const("\t\140--ld-libflag\' should be used for single words which need", 58),
MR_TAG_COMMON(1,4,1201)
},
{
MR_string_const("\twhich command is used.", 23),
MR_TAG_COMMON(1,4,1202)
},
{
MR_string_const("\tUse \140ml --print-shared-lib-link-command\' to find out", 53),
MR_TAG_COMMON(1,4,1203)
},
{
MR_string_const("\tinvoked by ml to link a shared library.", 40),
MR_TAG_COMMON(1,4,1204)
},
{
MR_string_const("\tSpecify options to be passed to the linker command", 51),
MR_TAG_COMMON(1,4,1205)
},
{
MR_string_const("--ld-libflags <options>, --ld-libflag <option>", 46),
MR_TAG_COMMON(1,4,1206)
},
{
MR_string_const("\tto be quoted when passed to the shell.", 39),
MR_TAG_COMMON(1,4,1207)
},
{
MR_string_const("\t\140--ld-flag\' should be used for single words which need", 55),
MR_TAG_COMMON(1,4,1208)
},
{
MR_string_const("\tcommand is used.", 17),
MR_TAG_COMMON(1,4,1209)
},
{
MR_string_const("\tUse \140ml --print-link-command\' to find out which", 48),
MR_TAG_COMMON(1,4,1210)
},
{
MR_string_const("\tinvoked by ml to link an executable.", 37),
MR_TAG_COMMON(1,4,1211)
},
{
MR_string_const("\tSpecify options to be passed to the linker command", 51),
MR_TAG_COMMON(1,4,1212)
},
{
MR_string_const("--ld-flags <options>, --ld-flag <option>", 40),
MR_TAG_COMMON(1,4,1213)
},
{
MR_string_const("\tThis option is ignored by \140mmc --make\'.", 40),
MR_TAG_COMMON(1,4,1214)
},
{
MR_string_const("\tof the first module on the command line.)", 42),
MR_TAG_COMMON(1,4,1215)
},
{
MR_string_const("\t(The default executable name is the same as the name", 53),
MR_TAG_COMMON(1,4,1216)
},
{
MR_string_const("\tSpecify the name of the final executable.", 42),
MR_TAG_COMMON(1,4,1217)
},
{
MR_string_const("-o <filename>, --output-file <filename>", 39),
MR_TAG_COMMON(1,4,1218)
},
{
MR_string_const("\tinvoked.", 9),
MR_tbmkword(0, 0)
},
{
MR_string_const("\tSpecify the environment type in which generated programs will be", 65),
MR_TAG_COMMON(1,4,1220)
},
{
MR_string_const("--target-env-type <type>", 24),
MR_TAG_COMMON(1,4,1221)
},
{
MR_string_const("\tinvoked.", 9),
MR_TAG_COMMON(1,4,1222)
},
{
MR_string_const("\tSpecify the environment type in which the compiler will be", 59),
MR_TAG_COMMON(1,4,1223)
},
{
MR_string_const("--host-env-type <type>", 22),
MR_TAG_COMMON(1,4,1224)
},
{
MR_string_const("\t--target-env-type to <type>.", 29),
MR_TAG_COMMON(1,4,1225)
},
{
MR_string_const("\tThis option is equivalent to setting both --host-env-type and", 62),
MR_TAG_COMMON(1,4,1226)
},
{
MR_string_const("\tThe <type> should be one of \140posix\', \140cygwin\', \140msys\', or \140windows\'.", 69),
MR_TAG_COMMON(1,4,1227)
},
{
MR_string_const("\tprograms will be invoked.", 26),
MR_TAG_COMMON(1,4,1228)
},
{
MR_string_const("\tSpecify the environment type in which the compiler and generated", 65),
MR_TAG_COMMON(1,4,1229)
},
{
MR_string_const("--env-type <type>", 17),
MR_TAG_COMMON(1,4,1230)
},
{
MR_string_const("\t(This option is only supported by \140mmc --make\'.)", 49),
MR_TAG_COMMON(1,4,1231)
},
{
MR_string_const("\tThis option uses temporary files to pass arguments to sub-commands.", 68),
MR_TAG_COMMON(1,4,1232)
},
{
MR_string_const("\tEnable this option if your shell doesn\'t support long command lines.", 69),
MR_TAG_COMMON(1,4,1233)
},
{
MR_string_const("--restricted-command-line", 25),
MR_TAG_COMMON(1,4,1234)
},
{
MR_string_const("\t(This option is only supported by \140mmc --make\'.)", 49),
MR_TAG_COMMON(1,4,1235)
},
{
MR_string_const("\ta Mercury library.", 19),
MR_TAG_COMMON(1,4,1236)
},
{
MR_string_const("\tInstall the specified C header file with along with", 52),
MR_TAG_COMMON(1,4,1237)
},
{
MR_string_const("--extra-library-header <file>, --extra-lib-header <file>", 56),
MR_TAG_COMMON(1,4,1238)
},
{
MR_string_const("\tReport run times for commands executed by \140mmc --make\'.", 56),
MR_TAG_COMMON(1,4,1239)
},
{
MR_string_const("--show-make-times", 17),
MR_TAG_COMMON(1,4,1240)
},
{
MR_string_const("\tfirst.", 7),
MR_TAG_COMMON(1,4,1241)
},
{
MR_string_const("\tMake \140mmc --make\' compile more recently modified source files", 62),
MR_TAG_COMMON(1,4,1242)
},
{
MR_string_const("--order-make-by-timestamp", 25),
MR_TAG_COMMON(1,4,1243)
},
{
MR_string_const("\t\140mmc --make\'.)", 15),
MR_TAG_COMMON(1,4,1244)
},
{
MR_string_const("\tattempting to use them.  (This option is only meaningful with", 62),
MR_TAG_COMMON(1,4,1245)
},
{
MR_string_const("\tDo not check that libraries have been installed before", 55),
MR_TAG_COMMON(1,4,1246)
},
{
MR_string_const("--no-libgrade-install-check", 27),
MR_TAG_COMMON(1,4,1247)
},
{
MR_string_const("\twork with \140mmc --make\').", 25),
MR_TAG_COMMON(1,4,1248)
},
{
MR_string_const("\t\140--use-grade-subdirs\' does not work with Mmake (it does", 56),
MR_TAG_COMMON(1,4,1249)
},
{
MR_string_const("\tthe current directory.", 23),
MR_TAG_COMMON(1,4,1250)
},
{
MR_string_const("\tExecutables and libraries will be symlinked or copied into", 59),
MR_TAG_COMMON(1,4,1251)
},
{
MR_string_const("\tlaid out so that multiple grades can be built simultaneously.", 62),
MR_TAG_COMMON(1,4,1252)
},
{
MR_string_const("\tGenerate intermediate files in a \140Mercury\' subdirectory,", 57),
MR_TAG_COMMON(1,4,1253)
},
{
MR_string_const("--use-grade-subdirs", 19),
MR_TAG_COMMON(1,4,1254)
},
{
MR_string_const("\trather than generating them in the current directory.", 54),
MR_TAG_COMMON(1,4,1255)
},
{
MR_string_const("\tGenerate intermediate files in a \140Mercury\' subdirectory,", 57),
MR_TAG_COMMON(1,4,1256)
},
{
MR_string_const("--use-subdirs", 13),
MR_TAG_COMMON(1,4,1257)
},
{
MR_string_const("\tdirectories given by \140--intermod-directory\'.", 45),
MR_TAG_COMMON(1,4,1258)
},
{
MR_string_const("\tof directories to search for \140.opt\' files - use only the", 57),
MR_TAG_COMMON(1,4,1259)
},
{
MR_string_const("\tDon\'t add arguments to \140--search-directory\' to the list", 56),
MR_TAG_COMMON(1,4,1260)
},
{
MR_string_const("--no-use-search-directories-for-intermod", 40),
MR_TAG_COMMON(1,4,1261)
},
{
MR_string_const("\tsearched for \140.opt\' files.", 27),
MR_TAG_COMMON(1,4,1262)
},
{
MR_string_const("\tAdd <dir> to the list of directories to be", 43),
MR_TAG_COMMON(1,4,1263)
},
{
MR_string_const("--intermod-directory <dir>", 26),
MR_TAG_COMMON(1,4,1264)
},
{
MR_string_const("\timported modules.", 18),
MR_TAG_COMMON(1,4,1265)
},
{
MR_string_const("\tAppend <dir> to the list of directories to be searched for", 59),
MR_TAG_COMMON(1,4,1266)
},
{
MR_string_const("-I <dir>, --search-directory <dir>", 34),
MR_TAG_COMMON(1,4,1267)
},
{
MR_string_const("\tThe configuration file is just an options file.", 48),
MR_TAG_COMMON(1,4,1268)
},
{
MR_string_const("\t\140--no-mercury-stdlib-dir\' is passed to mmc.", 44),
MR_TAG_COMMON(1,4,1269)
},
{
MR_string_const("\ta default configuration will be used, unless", 45),
MR_TAG_COMMON(1,4,1270)
},
{
MR_string_const("\tfrom <file>.  If the \140--config-file\' option is not set,", 56),
MR_TAG_COMMON(1,4,1271)
},
{
MR_string_const("\tRead the Mercury compiler\'s configuration information", 54),
MR_TAG_COMMON(1,4,1272)
},
{
MR_string_const("--config-file <file>", 20),
MR_TAG_COMMON(1,4,1273)
},
{
MR_string_const("\tSearch <directory> for Mercury system\'s configuration files.", 61),
MR_TAG_COMMON(1,4,1274)
},
{
MR_string_const("--mercury-config-dir <directory>", 32),
MR_TAG_COMMON(1,4,1275)
},
{
MR_string_const("--mercury-configuration-directory <directory>", 45),
MR_TAG_COMMON(1,4,1276)
},
{
MR_string_const("\toptions files.", 15),
MR_TAG_COMMON(1,4,1277)
},
{
MR_string_const("\tAdd <dir> to the list of directories to be searched for", 56),
MR_TAG_COMMON(1,4,1278)
},
{
MR_string_const("--options-search-directory <dir>", 32),
MR_TAG_COMMON(1,4,1279)
},
{
MR_string_const("\tin the current directory will be read.", 39),
MR_TAG_COMMON(1,4,1280)
},
{
MR_string_const("\tstandard input.  By default the file \140Mercury.options\'", 55),
MR_TAG_COMMON(1,4,1281)
},
{
MR_string_const("\tIf <file> is \140-\', an options file will be read from the", 56),
MR_TAG_COMMON(1,4,1282)
},
{
MR_string_const("\tAdd <file> to the list of options files to be processed.", 57),
MR_TAG_COMMON(1,4,1283)
},
{
MR_string_const("--options-file <file>", 21),
MR_TAG_COMMON(1,4,1284)
},
{
MR_string_const("\tas if they were specified on the command line.", 47),
MR_TAG_COMMON(1,4,1285)
},
{
MR_string_const("\tTake options from the specified file, and handle them", 54),
MR_TAG_COMMON(1,4,1286)
},
{
MR_string_const("--flags-file <file>", 19),
MR_TAG_COMMON(1,4,1287)
},
{
MR_string_const("--flags <file>", 14),
MR_TAG_COMMON(1,4,1288)
},
{
MR_string_const("\tboth shared and static linking.", 32),
MR_TAG_COMMON(1,4,1289)
},
{
MR_string_const("\ttimes.  By default libraries will be installed for", 51),
MR_TAG_COMMON(1,4,1290)
},
{
MR_string_const("\tor static linking.  This option can be specified multiple", 58),
MR_TAG_COMMON(1,4,1291)
},
{
MR_string_const("\tSpecify whether libraries should be installed for shared", 57),
MR_TAG_COMMON(1,4,1292)
},
{
MR_string_const("--lib-linkage {shared|static}", 29),
MR_TAG_COMMON(1,4,1293)
},
{
MR_string_const("\t(This option does not work with Mmake, only \140mmc --make\'.)", 59),
MR_TAG_COMMON(1,4,1294)
},
{
MR_string_const("\tset of library grades to be installed.", 39),
MR_TAG_COMMON(1,4,1295)
},
{
MR_string_const("\tRemove grades that contain the specified component from the", 60),
MR_TAG_COMMON(1,4,1296)
},
{
MR_string_const("--libgrades-exclude <component>", 31),
MR_TAG_COMMON(1,4,1297)
},
{
MR_string_const("--libgrades-exclude-component <component>", 41),
MR_TAG_COMMON(1,4,1298)
},
{
MR_string_const("\t(This option does not work with Mmake, only \140mmc --make\'.)", 59),
MR_TAG_COMMON(1,4,1299)
},
{
MR_string_const("\tthe set of library grades to be installed.", 43),
MR_TAG_COMMON(1,4,1300)
},
{
MR_string_const("\tRemove grades that do not contain the specified component from", 63),
MR_TAG_COMMON(1,4,1301)
},
{
MR_string_const("--libgrades-include <component>", 31),
MR_TAG_COMMON(1,4,1302)
},
{
MR_string_const("--libgrades-include-component <component>", 41),
MR_TAG_COMMON(1,4,1303)
},
{
MR_string_const("\tto be installed should be built.", 33),
MR_TAG_COMMON(1,4,1304)
},
{
MR_string_const("\tClear the list of compilation grades in which a library", 56),
MR_TAG_COMMON(1,4,1305)
},
{
MR_string_const("--no-libgrade", 13),
MR_TAG_COMMON(1,4,1306)
},
{
MR_string_const("\twhich a library to be installed should be built.", 49),
MR_TAG_COMMON(1,4,1307)
},
{
MR_string_const("\tAdd <grade> to the list of compilation grades in", 49),
MR_TAG_COMMON(1,4,1308)
},
{
MR_string_const("--libgrade <grade>", 18),
MR_TAG_COMMON(1,4,1309)
},
{
MR_string_const("\tto install each directory. The default option is \140-r\'.", 55),
MR_TAG_COMMON(1,4,1310)
},
{
MR_string_const("\t\140<command> <option> <source> <target>\'", 39),
MR_TAG_COMMON(1,4,1311)
},
{
MR_string_const("\ta directory. The given command will be invoked as", 50),
MR_TAG_COMMON(1,4,1312)
},
{
MR_string_const("\tSpecify the flag to pass to the install command to install", 59),
MR_TAG_COMMON(1,4,1313)
},
{
MR_string_const("--install-command-dir-option <option>", 37),
MR_TAG_COMMON(1,4,1314)
},
{
MR_string_const("\tin a Mercury library. The default command is \140cp\'.", 51),
MR_TAG_COMMON(1,4,1315)
},
{
MR_string_const("\t\140<command> <source> <target>\' to install each file", 51),
MR_TAG_COMMON(1,4,1316)
},
{
MR_string_const("\tMercury libraries. The given command will be invoked as", 56),
MR_TAG_COMMON(1,4,1317)
},
{
MR_string_const("\tSpecify the command to use to install the files in", 51),
MR_TAG_COMMON(1,4,1318)
},
{
MR_string_const("--install-command <command>", 27),
MR_TAG_COMMON(1,4,1319)
},
{
MR_string_const("\tThe directory under which to install Mercury libraries.", 56),
MR_TAG_COMMON(1,4,1320)
},
{
MR_string_const("--install-prefix <dir>", 22),
MR_TAG_COMMON(1,4,1321)
},
{
MR_string_const("\tcontaining the main module given first.", 40),
MR_TAG_COMMON(1,4,1322)
},
{
MR_string_const("\tfiles in the program or library, with the source file", 54),
MR_TAG_COMMON(1,4,1323)
},
{
MR_string_const("\tThe command will be passed the names of all of the source", 58),
MR_TAG_COMMON(1,4,1324)
},
{
MR_string_const("\tfile for a library.", 20),
MR_TAG_COMMON(1,4,1325)
},
{
MR_string_const("\tSpecify a command to produce extra entries in the \140.init\'", 58),
MR_TAG_COMMON(1,4,1326)
},
{
MR_string_const("--extra-init-command <command>", 30),
MR_TAG_COMMON(1,4,1327)
},
{
MR_string_const("\tcontaining the main module given first.", 40),
MR_TAG_COMMON(1,4,1328)
},
{
MR_string_const("\tfiles in the program or library, with the source file", 54),
MR_TAG_COMMON(1,4,1329)
},
{
MR_string_const("\tThe command will be passed the names of all of the source", 58),
MR_TAG_COMMON(1,4,1330)
},
{
MR_string_const("\theader files generated by the Mercury compiler.", 48),
MR_TAG_COMMON(1,4,1331)
},
{
MR_string_const("\tThis can be used to compile C source files which rely on", 57),
MR_TAG_COMMON(1,4,1332)
},
{
MR_string_const("\tSpecify a command to run before linking with \140mmc --make\'.", 59),
MR_TAG_COMMON(1,4,1333)
},
{
MR_string_const("--pre-link-command <command>", 28),
MR_TAG_COMMON(1,4,1334)
},
{
MR_string_const("\tverbosity and build system options are not tracked.", 52),
MR_TAG_COMMON(1,4,1335)
},
{
MR_string_const("\ttimestamp on the file itself has not changed.  Warning,", 56),
MR_TAG_COMMON(1,4,1336)
},
{
MR_string_const("\t\140mmc --make\' will then know to recompile the module even if the", 64),
MR_TAG_COMMON(1,4,1337)
},
{
MR_string_const("\teach module.  If an option for a module is added or removed,", 61),
MR_TAG_COMMON(1,4,1338)
},
{
MR_string_const("\tWith \140--make\', keep track of the options used when compiling", 61),
MR_TAG_COMMON(1,4,1339)
},
{
MR_string_const("--track-flags", 13),
MR_TAG_COMMON(1,4,1340)
},
{
MR_string_const("\tconcurrently for some tasks.", 29),
MR_TAG_COMMON(1,4,1341)
},
{
MR_string_const("\tWith \140--make\', attempt to perform up to <n> jobs", 49),
MR_TAG_COMMON(1,4,1342)
},
{
MR_string_const("-j <n>, --jobs <n>", 18),
MR_TAG_COMMON(1,4,1343)
},
{
MR_string_const("\tpossible even if an error is detected.", 39),
MR_TAG_COMMON(1,4,1344)
},
{
MR_string_const("\tWith \140--make\', keep going as far as", 36),
MR_TAG_COMMON(1,4,1345)
},
{
MR_string_const("-k, --keep-going", 16),
MR_TAG_COMMON(1,4,1346)
},
{
MR_string_const("\teven if they are up to date.", 29),
MR_TAG_COMMON(1,4,1347)
},
{
MR_string_const("\tSame as \140--make\', but always rebuild the target files", 54),
MR_TAG_COMMON(1,4,1348)
},
{
MR_string_const("-r, --rebuild", 13),
MR_TAG_COMMON(1,4,1349)
},
{
MR_string_const("\tNote that this option also enables \140--use-subdirs\'.", 52),
MR_TAG_COMMON(1,4,1350)
},
{
MR_string_const("\tfiles, if they are not already up-to-date.", 43),
MR_TAG_COMMON(1,4,1351)
},
{
MR_string_const("\tmake, rather than source files.  Create the specified", 54),
MR_TAG_COMMON(1,4,1352)
},
{
MR_string_const("\tTreat the non-option arguments to \140mmc\' as files to", 52),
MR_TAG_COMMON(1,4,1353)
},
{
MR_string_const("-m, --make", 10),
MR_TAG_COMMON(1,4,1354)
},
{
MR_string_const("\tonly be processed for implicit parallelism.", 44),
MR_tbmkword(0, 0)
},
{
MR_string_const("\tUse the specified profiling feedback file which may currently", 62),
MR_TAG_COMMON(1,4,1356)
},
{
MR_string_const("--feedback-file", 15),
MR_TAG_COMMON(1,4,1357)
},
{
MR_string_const("\t--feedback file option.", 24),
MR_TAG_COMMON(1,4,1358)
},
{
MR_string_const("\tThe profiling feedback file can be specified using the", 55),
MR_TAG_COMMON(1,4,1359)
},
{
MR_string_const("\tmdprof_create_feedback.", 24),
MR_TAG_COMMON(1,4,1360)
},
{
MR_string_const("\t(implicit parallelism) using information generated by", 54),
MR_TAG_COMMON(1,4,1361)
},
{
MR_string_const("\tIntroduce parallel conjunctions where it could be worthwhile", 61),
MR_TAG_COMMON(1,4,1362)
},
{
MR_string_const("--implicit-parallelism", 22),
MR_TAG_COMMON(1,4,1363)
},
{
MR_string_const("\tspecified distance value.", 26),
MR_TAG_COMMON(1,4,1364)
},
{
MR_string_const("\tControl the granularity of parallel execution using the", 56),
MR_TAG_COMMON(1,4,1365)
},
{
MR_string_const("--distance-granularity <distance>", 33),
MR_TAG_COMMON(1,4,1366)
},
{
MR_string_const("\tautomatically.", 15),
MR_TAG_COMMON(1,4,1367)
},
{
MR_string_const("\thandle, which may be specified at runtime or detected", 54),
MR_TAG_COMMON(1,4,1368)
},
{
MR_string_const("\tDon\'t try to generate more parallelism than the machine can", 60),
MR_TAG_COMMON(1,4,1369)
},
{
MR_string_const("--control-granularity", 21),
MR_TAG_COMMON(1,4,1370)
},
{
MR_string_const("\tplatform the compiler is running on.", 37),
MR_TAG_COMMON(1,4,1371)
},
{
MR_string_const("\tDo not assume that the code being generated is for the", 55),
MR_TAG_COMMON(1,4,1372)
},
{
MR_string_const("--cross-compiling", 17),
MR_TAG_COMMON(1,4,1373)
},
{
MR_string_const("\tDisplay the compiler version.", 30),
MR_TAG_COMMON(1,4,1374)
},
{
MR_string_const("--version", 9),
MR_TAG_COMMON(1,4,1375)
},
{
MR_string_const("\tfunction any further.", 22),
MR_TAG_COMMON(1,4,1376)
},
{
MR_string_const("\treached, the typechecker will not process the predicate or", 59),
MR_TAG_COMMON(1,4,1377)
},
{
MR_string_const("\tabout excessively ambiguous overloading to <n>. If this limit is", 65),
MR_TAG_COMMON(1,4,1378)
},
{
MR_string_const("\tSet the number of type assignments required to generate an error", 65),
MR_TAG_COMMON(1,4,1379)
},
{
MR_string_const("--typecheck-ambiguity-error-limit <n>", 37),
MR_TAG_COMMON(1,4,1380)
},
{
MR_string_const("\twarning about highly ambiguous overloading to <n>.", 51),
MR_TAG_COMMON(1,4,1381)
},
{
MR_string_const("\tSet the number of type assignments required to generate a", 58),
MR_TAG_COMMON(1,4,1382)
},
{
MR_string_const("--typecheck-ambiguity-warn-limit <n>", 36),
MR_TAG_COMMON(1,4,1383)
},
{
MR_string_const("\tcreation for each one.)", 24),
MR_TAG_COMMON(1,4,1384)
},
{
MR_string_const("\tcompile several modules without the overhead of process", 56),
MR_TAG_COMMON(1,4,1385)
},
{
MR_string_const("\tis reached. (This allows a program or user to interactively", 60),
MR_TAG_COMMON(1,4,1386)
},
{
MR_string_const("\tfile name from the standard input. Repeat this until EOF", 57),
MR_TAG_COMMON(1,4,1387)
},
{
MR_string_const("\tRead then compile a newline terminated module name or", 54),
MR_TAG_COMMON(1,4,1388)
},
{
MR_string_const("--filenames-from-stdin", 22),
MR_TAG_COMMON(1,4,1389)
},
{
MR_string_const("\tGet the specification of user-defined events from <filename>.", 62),
MR_tbmkword(0, 0)
},
{
MR_string_const("--event-set-file-name <filename>", 32),
MR_TAG_COMMON(1,4,1391)
},
{
MR_string_const("\tPerform at most <n> passes of mode inference (default: 30).", 60),
MR_TAG_COMMON(1,4,1392)
},
{
MR_string_const("--mode-inference-iteration-limit <n>", 36),
MR_TAG_COMMON(1,4,1393)
},
{
MR_string_const("\tPerform at most <n> passes of type inference (default: 60).", 60),
MR_TAG_COMMON(1,4,1394)
},
{
MR_string_const("--type-inference-iteration-limit <n>", 36),
MR_TAG_COMMON(1,4,1395)
},
{
MR_string_const("\tdon\'t try to infer the determinism, just report an error.", 58),
MR_TAG_COMMON(1,4,1396)
},
{
MR_string_const("\tIf there is no determinism declaration for a procedure,", 56),
MR_TAG_COMMON(1,4,1397)
},
{
MR_string_const("--no-infer-det, --no-infer-determinism", 38),
MR_TAG_COMMON(1,4,1398)
},
{
MR_string_const("\ttry to infer the modes, rather than just reporting an error.", 61),
MR_TAG_COMMON(1,4,1399)
},
{
MR_string_const("\tIf there is no mode declaration for a predicate,", 49),
MR_TAG_COMMON(1,4,1400)
},
{
MR_string_const("--infer-modes", 13),
MR_TAG_COMMON(1,4,1401)
},
{
MR_string_const("\ttry to infer the type, rather than just reporting an error.", 60),
MR_TAG_COMMON(1,4,1402)
},
{
MR_string_const("\tIf there is no type declaration for a predicate or function,", 61),
MR_TAG_COMMON(1,4,1403)
},
{
MR_string_const("--infer-types", 13),
MR_TAG_COMMON(1,4,1404)
},
{
MR_string_const("\tAbbreviation for \140--infer-types --infer-modes --infer-det\'.", 60),
MR_TAG_COMMON(1,4,1405)
},
{
MR_string_const("--infer-all", 11),
MR_TAG_COMMON(1,4,1406)
},
{
MR_string_const("\tin the \"Warning Options\" section.)", 35),
MR_TAG_COMMON(1,4,1407)
},
{
MR_string_const("\t(See also the documentation for the \140--warn-stubs\' option", 58),
MR_TAG_COMMON(1,4,1408)
},
{
MR_string_const("\tThis option is sometimes useful during program development.", 60),
MR_TAG_COMMON(1,4,1409)
},
{
MR_string_const("\tsuch procedures will raise an exception at run-time.", 53),
MR_TAG_COMMON(1,4,1410)
},
{
MR_string_const("\tAllow procedures to have no clauses.  Any calls to", 51),
MR_TAG_COMMON(1,4,1411)
},
{
MR_string_const("--allow-stubs", 13),
MR_TAG_COMMON(1,4,1412)
},
{
MR_string_const("\toptimised away.", 16),
MR_TAG_COMMON(1,4,1413)
},
{
MR_string_const("\tAllow infinite loops or goals with determinism erroneous to be", 63),
MR_TAG_COMMON(1,4,1414)
},
{
MR_string_const("--no-fully-strict", 17),
MR_TAG_COMMON(1,4,1415)
},
{
MR_string_const("\tExecute disjunctions strictly left-to-right.", 45),
MR_TAG_COMMON(1,4,1416)
},
{
MR_string_const("--no-reorder-disj", 17),
MR_TAG_COMMON(1,4,1417)
},
{
MR_string_const("\tthat reordering is unavoidable.", 32),
MR_TAG_COMMON(1,4,1418)
},
{
MR_string_const("\tExecute conjunctions left-to-right except where the modes imply", 64),
MR_TAG_COMMON(1,4,1419)
},
{
MR_string_const("--no-reorder-conj", 17),
MR_TAG_COMMON(1,4,1420)
},
};

static const struct mercury_type_5 mercury_common_5[3] =
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
static const struct mercury_type_6 mercury_common_6[5] =
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
static const struct mercury_type_7 mercury_common_7[3] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__fn__libs__options__option_table_add_mercury_library_directory_2_0_1,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_COMMON(6,3),
MR_COMMON(6,4),
MR_COMMON(6,4)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__fn__libs__options__option_table_add_search_library_files_directory_2_0_1,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_COMMON(6,3),
MR_COMMON(6,4),
MR_COMMON(6,4)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__libs__options__special_handler_4_0_1,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_COMMON(6,3),
MR_COMMON(6,4),
MR_COMMON(6,4)
}
},
};

static const struct mercury_type_8 mercury_common_8[3] =
{
{
MR_COMMON(7,0),
MR_ENTRY_AP(fn__libs__options__append_to_accumulating_option_2_0),
0
},
{
MR_COMMON(7,1),
MR_ENTRY_AP(fn__libs__options__append_to_accumulating_option_2_0),
0
},
{
MR_COMMON(7,2),
MR_ENTRY_AP(fn__libs__options__append_to_accumulating_option_2_0),
0
},
};

static const struct mercury_type_1 mercury_vector_common_1_0[14] =
{
{
0,
MR_TAG_COMMON(1,2,656)
},
{
1,
MR_TAG_COMMON(1,2,612)
},
{
2,
MR_TAG_COMMON(1,2,482)
},
{
3,
MR_TAG_COMMON(1,2,44)
},
{
4,
MR_TAG_COMMON(1,2,240)
},
{
5,
MR_TAG_COMMON(1,2,191)
},
{
6,
MR_TAG_COMMON(1,2,228)
},
{
7,
MR_TAG_COMMON(1,2,104)
},
{
8,
MR_TAG_COMMON(1,2,522)
},
{
9,
MR_TAG_COMMON(1,2,453)
},
{
10,
MR_TAG_COMMON(1,2,574)
},
{
11,
MR_TAG_COMMON(1,2,318)
},
{
12,
MR_TAG_COMMON(1,2,79)
},
{
13,
MR_TAG_COMMON(1,2,336)
},
};
extern const MR_TypeCtorInfo_Struct mercury_data_getopt_io__type_ctor_info_maybe_option_table_1;

static const MR_FA_TypeInfo_Struct1 mercury_data_getopt_io__ti_maybe_option_table_1libs__options__type_ctor_info_option_0 = {
	&mercury_data_getopt_io__type_ctor_info_maybe_option_table_1,
{	(MR_TypeInfo) &mercury_data_libs__options__type_ctor_info_option_0
}};

const MR_TypeCtorInfo_Struct mercury_data_libs__options__type_ctor_info_maybe_option_table_0 = {
	0,
	15,
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
	"halt_at_auto_parallel_failure",
	4
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_5 = {
	"warn_singleton_vars",
	5
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_6 = {
	"warn_overlapping_scopes",
	6
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_7 = {
	"warn_det_decls_too_lax",
	7
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_8 = {
	"warn_inferred_erroneous",
	8
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_9 = {
	"warn_nothing_exported",
	9
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_10 = {
	"warn_unused_args",
	10
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_11 = {
	"warn_interface_imports",
	11
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_12 = {
	"warn_missing_opt_files",
	12
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_13 = {
	"warn_missing_trans_opt_files",
	13
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_14 = {
	"warn_missing_trans_opt_deps",
	14
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_15 = {
	"warn_non_contiguous_clauses",
	15
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_16 = {
	"warn_non_contiguous_foreign_procs",
	16
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_17 = {
	"warn_non_stratification",
	17
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_18 = {
	"warn_unification_cannot_succeed",
	18
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_19 = {
	"warn_simple_code",
	19
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_20 = {
	"warn_duplicate_calls",
	20
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_21 = {
	"warn_missing_module_name",
	21
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_22 = {
	"warn_wrong_module_name",
	22
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_23 = {
	"warn_smart_recompilation",
	23
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_24 = {
	"warn_undefined_options_variables",
	24
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_25 = {
	"warn_non_tail_recursion",
	25
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_26 = {
	"warn_target_code",
	26
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_27 = {
	"warn_up_to_date",
	27
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_28 = {
	"warn_stubs",
	28
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_29 = {
	"warn_dead_procs",
	29
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_30 = {
	"warn_table_with_inline",
	30
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_31 = {
	"warn_non_term_special_preds",
	31
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_32 = {
	"warn_known_bad_format_calls",
	32
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_33 = {
	"warn_unknown_format_calls",
	33
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_34 = {
	"warn_obsolete",
	34
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_35 = {
	"warn_insts_without_matching_type",
	35
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_36 = {
	"warn_unused_imports",
	36
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_37 = {
	"inform_ite_instead_of_switch",
	37
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_38 = {
	"warn_unresolved_polymorphism",
	38
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_39 = {
	"warn_suspicious_foreign_procs",
	39
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_40 = {
	"warn_state_var_shadowing",
	40
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_41 = {
	"inform_inferred",
	41
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_42 = {
	"inform_inferred_types",
	42
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_43 = {
	"inform_inferred_modes",
	43
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_44 = {
	"verbose",
	44
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_45 = {
	"very_verbose",
	45
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_46 = {
	"verbose_errors",
	46
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_47 = {
	"verbose_recompilation",
	47
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_48 = {
	"find_all_recompilation_reasons",
	48
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_49 = {
	"verbose_make",
	49
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_50 = {
	"verbose_commands",
	50
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_51 = {
	"output_compile_error_lines",
	51
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_52 = {
	"report_cmd_line_args",
	52
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_53 = {
	"report_cmd_line_args_in_doterr",
	53
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_54 = {
	"statistics",
	54
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_55 = {
	"detailed_statistics",
	55
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_56 = {
	"proc_size_statistics",
	56
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_57 = {
	"debug_types",
	57
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_58 = {
	"debug_modes",
	58
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_59 = {
	"debug_modes_statistics",
	59
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_60 = {
	"debug_modes_minimal",
	60
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_61 = {
	"debug_modes_verbose",
	61
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_62 = {
	"debug_modes_pred_id",
	62
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_63 = {
	"debug_dep_par_conj",
	63
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_64 = {
	"debug_det",
	64
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_65 = {
	"debug_code_gen_pred_id",
	65
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_66 = {
	"debug_opt",
	66
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_67 = {
	"debug_term",
	67
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_68 = {
	"debug_opt_pred_id",
	68
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_69 = {
	"debug_opt_pred_name",
	69
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_70 = {
	"debug_pd",
	70
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_71 = {
	"debug_il_asm",
	71
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_72 = {
	"debug_liveness",
	72
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_73 = {
	"debug_stack_opt",
	73
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_74 = {
	"debug_make",
	74
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_75 = {
	"debug_closure",
	75
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_76 = {
	"debug_trail_usage",
	76
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_77 = {
	"debug_mode_constraints",
	77
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_78 = {
	"debug_intermodule_analysis",
	78
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_79 = {
	"debug_mm_tabling_analysis",
	79
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_80 = {
	"debug_indirect_reuse",
	80
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_81 = {
	"debug_type_rep",
	81
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_82 = {
	"make_short_interface",
	82
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_83 = {
	"make_interface",
	83
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_84 = {
	"make_private_interface",
	84
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_85 = {
	"make_optimization_interface",
	85
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_86 = {
	"make_transitive_opt_interface",
	86
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_87 = {
	"make_analysis_registry",
	87
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_88 = {
	"make_xml_documentation",
	88
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_89 = {
	"generate_source_file_mapping",
	89
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_90 = {
	"generate_dependency_file",
	90
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_91 = {
	"generate_dependencies",
	91
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_92 = {
	"generate_module_order",
	92
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_93 = {
	"generate_standalone_interface",
	93
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_94 = {
	"convert_to_mercury",
	94
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_95 = {
	"typecheck_only",
	95
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_96 = {
	"errorcheck_only",
	96
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_97 = {
	"target_code_only",
	97
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_98 = {
	"compile_only",
	98
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_99 = {
	"compile_to_shared_lib",
	99
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_100 = {
	"output_grade_string",
	100
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_101 = {
	"output_link_command",
	101
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_102 = {
	"output_shared_lib_link_command",
	102
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_103 = {
	"output_libgrades",
	103
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_104 = {
	"output_cc",
	104
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_105 = {
	"output_c_compiler_type",
	105
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_106 = {
	"output_csharp_compiler_type",
	106
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_107 = {
	"output_cflags",
	107
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_108 = {
	"output_library_link_flags",
	108
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_109 = {
	"output_grade_defines",
	109
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_110 = {
	"output_c_include_directory_flags",
	110
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_111 = {
	"smart_recompilation",
	111
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_112 = {
	"generate_item_version_numbers",
	112
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_113 = {
	"generate_mmc_make_module_dependencies",
	113
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_114 = {
	"assume_gmake",
	114
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_115 = {
	"trace_level",
	115
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_116 = {
	"trace_optimized",
	116
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_117 = {
	"trace_prof",
	117
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_118 = {
	"trace_table_io",
	118
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_119 = {
	"trace_table_io_only_retry",
	119
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_120 = {
	"trace_table_io_states",
	120
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_121 = {
	"trace_table_io_require",
	121
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_122 = {
	"trace_table_io_all",
	122
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_123 = {
	"trace_goal_flags",
	123
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_124 = {
	"prof_optimized",
	124
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_125 = {
	"exec_trace_tail_rec",
	125
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_126 = {
	"suppress_trace",
	126
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_127 = {
	"force_disable_tracing",
	127
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_128 = {
	"delay_death",
	128
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_129 = {
	"delay_death_max_vars",
	129
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_130 = {
	"stack_trace_higher_order",
	130
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_131 = {
	"force_disable_ssdebug",
	131
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_132 = {
	"generate_bytecode",
	132
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_133 = {
	"line_numbers",
	133
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_134 = {
	"auto_comments",
	134
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_135 = {
	"frameopt_comments",
	135
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_136 = {
	"max_error_line_width",
	136
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_137 = {
	"show_dependency_graph",
	137
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_138 = {
	"imports_graph",
	138
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_139 = {
	"dump_trace_counts",
	139
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_140 = {
	"dump_hlds",
	140
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_141 = {
	"dump_hlds_pred_id",
	141
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_142 = {
	"dump_hlds_pred_name",
	142
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_143 = {
	"dump_hlds_alias",
	143
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_144 = {
	"dump_hlds_options",
	144
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_145 = {
	"dump_hlds_file_suffix",
	145
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_146 = {
	"dump_same_hlds",
	146
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_147 = {
	"dump_mlds",
	147
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_148 = {
	"verbose_dump_mlds",
	148
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_149 = {
	"mode_constraints",
	149
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_150 = {
	"simple_mode_constraints",
	150
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_151 = {
	"prop_mode_constraints",
	151
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_152 = {
	"benchmark_modes",
	152
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_153 = {
	"benchmark_modes_repeat",
	153
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_154 = {
	"sign_assembly",
	154
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_155 = {
	"separate_assemblies",
	155
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_156 = {
	"reorder_conj",
	156
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_157 = {
	"reorder_disj",
	157
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_158 = {
	"fully_strict",
	158
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_159 = {
	"strict_sequential",
	159
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_160 = {
	"allow_stubs",
	160
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_161 = {
	"infer_types",
	161
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_162 = {
	"infer_modes",
	162
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_163 = {
	"infer_det",
	163
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_164 = {
	"infer_all",
	164
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_165 = {
	"type_inference_iteration_limit",
	165
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_166 = {
	"mode_inference_iteration_limit",
	166
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_167 = {
	"event_set_file_name",
	167
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_168 = {
	"grade",
	168
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_169 = {
	"target",
	169
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_170 = {
	"il",
	170
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_171 = {
	"il_only",
	171
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_172 = {
	"compile_to_c",
	172
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_173 = {
	"java",
	173
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_174 = {
	"java_only",
	174
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_175 = {
	"csharp",
	175
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_176 = {
	"csharp_only",
	176
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_177 = {
	"x86_64",
	177
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_178 = {
	"x86_64_only",
	178
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_179 = {
	"erlang",
	179
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_180 = {
	"erlang_only",
	180
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_181 = {
	"exec_trace",
	181
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_182 = {
	"decl_debug",
	182
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_183 = {
	"profiling",
	183
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_184 = {
	"time_profiling",
	184
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_185 = {
	"memory_profiling",
	185
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_186 = {
	"deep_profiling",
	186
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_187 = {
	"profile_calls",
	187
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_188 = {
	"profile_time",
	188
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_189 = {
	"profile_memory",
	189
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_190 = {
	"profile_deep",
	190
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_191 = {
	"use_activation_counts",
	191
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_192 = {
	"pre_prof_transforms_simplify",
	192
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_193 = {
	"pre_implicit_parallelism_simplify",
	193
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_194 = {
	"coverage_profiling",
	194
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_195 = {
	"coverage_profiling_via_calls",
	195
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_196 = {
	"coverage_profiling_static",
	196
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_197 = {
	"profile_deep_coverage_after_goal",
	197
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_198 = {
	"profile_deep_coverage_branch_ite",
	198
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_199 = {
	"profile_deep_coverage_branch_switch",
	199
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_200 = {
	"profile_deep_coverage_branch_disj",
	200
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_201 = {
	"profile_deep_coverage_use_portcounts",
	201
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_202 = {
	"profile_deep_coverage_use_trivial",
	202
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_203 = {
	"profile_for_feedback",
	203
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_204 = {
	"use_zeroing_for_ho_cycles",
	204
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_205 = {
	"use_lots_of_ho_specialization",
	205
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_206 = {
	"deep_profile_tail_recursion",
	206
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_207 = {
	"record_term_sizes_as_words",
	207
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_208 = {
	"record_term_sizes_as_cells",
	208
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_209 = {
	"experimental_complexity",
	209
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_210 = {
	"gc",
	210
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_211 = {
	"parallel",
	211
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_212 = {
	"threadscope",
	212
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_213 = {
	"use_trail",
	213
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_214 = {
	"trail_segments",
	214
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_215 = {
	"use_minimal_model_stack_copy",
	215
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_216 = {
	"use_minimal_model_own_stacks",
	216
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_217 = {
	"minimal_model_debug",
	217
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_218 = {
	"single_prec_float",
	218
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_219 = {
	"type_layout",
	219
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_220 = {
	"maybe_thread_safe_opt",
	220
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_221 = {
	"extend_stacks_when_needed",
	221
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_222 = {
	"stack_segments",
	222
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_223 = {
	"use_regions",
	223
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_224 = {
	"use_alloc_regions",
	224
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_225 = {
	"use_regions_debug",
	225
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_226 = {
	"use_regions_profiling",
	226
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_227 = {
	"source_to_source_debug",
	227
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_228 = {
	"tags",
	228
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_229 = {
	"num_tag_bits",
	229
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_230 = {
	"num_reserved_addresses",
	230
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_231 = {
	"num_reserved_objects",
	231
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_232 = {
	"bits_per_word",
	232
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_233 = {
	"bytes_per_word",
	233
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_234 = {
	"conf_low_tag_bits",
	234
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_235 = {
	"unboxed_float",
	235
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_236 = {
	"unboxed_enums",
	236
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_237 = {
	"unboxed_no_tag_types",
	237
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_238 = {
	"sync_term_size",
	238
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_239 = {
	"gcc_non_local_gotos",
	239
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_240 = {
	"gcc_global_registers",
	240
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_241 = {
	"asm_labels",
	241
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_242 = {
	"pic_reg",
	242
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_243 = {
	"use_float_registers",
	243
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_244 = {
	"highlevel_code",
	244
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_245 = {
	"highlevel_data",
	245
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_246 = {
	"gcc_nested_functions",
	246
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_247 = {
	"det_copy_out",
	247
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_248 = {
	"nondet_copy_out",
	248
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_249 = {
	"put_commit_in_own_func",
	249
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_250 = {
	"put_nondet_env_on_heap",
	250
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_251 = {
	"verifiable_code",
	251
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_252 = {
	"il_refany_fields",
	252
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_253 = {
	"il_funcptr_types",
	253
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_254 = {
	"il_byref_tailcalls",
	254
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_255 = {
	"backend_foreign_languages",
	255
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_256 = {
	"stack_trace",
	256
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_257 = {
	"basic_stack_layout",
	257
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_258 = {
	"agc_stack_layout",
	258
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_259 = {
	"procid_stack_layout",
	259
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_260 = {
	"trace_stack_layout",
	260
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_261 = {
	"body_typeinfo_liveness",
	261
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_262 = {
	"can_compare_constants_as_ints",
	262
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_263 = {
	"pretest_equality_cast_pointers",
	263
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_264 = {
	"can_compare_compound_values",
	264
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_265 = {
	"lexically_order_constructors",
	265
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_266 = {
	"mutable_always_boxed",
	266
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_267 = {
	"delay_partial_instantiations",
	267
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_268 = {
	"allow_defn_of_builtins",
	268
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_269 = {
	"special_preds",
	269
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_270 = {
	"type_ctor_info",
	270
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_271 = {
	"type_ctor_layout",
	271
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_272 = {
	"type_ctor_functors",
	272
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_273 = {
	"new_type_class_rtti",
	273
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_274 = {
	"rtti_line_numbers",
	274
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_275 = {
	"disable_minimal_model_stack_copy_pneg",
	275
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_276 = {
	"disable_minimal_model_stack_copy_cut",
	276
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_277 = {
	"use_minimal_model_stack_copy_pneg",
	277
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_278 = {
	"use_minimal_model_stack_copy_cut",
	278
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_279 = {
	"disable_trail_ops",
	279
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_280 = {
	"size_region_ite_fixed",
	280
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_281 = {
	"size_region_disj_fixed",
	281
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_282 = {
	"size_region_semi_disj_fixed",
	282
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_283 = {
	"size_region_commit_fixed",
	283
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_284 = {
	"size_region_ite_protect",
	284
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_285 = {
	"size_region_ite_snapshot",
	285
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_286 = {
	"size_region_semi_disj_protect",
	286
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_287 = {
	"size_region_disj_snapshot",
	287
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_288 = {
	"size_region_commit_entry",
	288
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_289 = {
	"solver_type_auto_init",
	289
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_290 = {
	"allow_multi_arm_switches",
	290
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_291 = {
	"type_check_constraints",
	291
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_292 = {
	"allow_argument_packing",
	292
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_293 = {
	"low_level_debug",
	293
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_294 = {
	"table_debug",
	294
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_295 = {
	"trad_passes",
	295
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_296 = {
	"parallel_liveness",
	296
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_297 = {
	"parallel_code_gen",
	297
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_298 = {
	"polymorphism",
	298
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_299 = {
	"reclaim_heap_on_failure",
	299
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_300 = {
	"reclaim_heap_on_semidet_failure",
	300
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_301 = {
	"reclaim_heap_on_nondet_failure",
	301
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_302 = {
	"have_delay_slot",
	302
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_303 = {
	"num_real_r_regs",
	303
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_304 = {
	"num_real_f_regs",
	304
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_305 = {
	"num_real_r_temps",
	305
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_306 = {
	"num_real_f_temps",
	306
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_307 = {
	"pic",
	307
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_308 = {
	"max_jump_table_size",
	308
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_309 = {
	"max_specialized_do_call_closure",
	309
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_310 = {
	"max_specialized_do_call_class_method",
	310
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_311 = {
	"compare_specialization",
	311
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_312 = {
	"should_pretest_equality",
	312
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_313 = {
	"fact_table_max_array_size",
	313
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_314 = {
	"fact_table_hash_percent_full",
	314
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_315 = {
	"gcc_local_labels",
	315
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_316 = {
	"prefer_switch",
	316
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_317 = {
	"opt_no_return_calls",
	317
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_318 = {
	"opt_level",
	318
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_319 = {
	"opt_level_number",
	319
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_320 = {
	"opt_space",
	320
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_321 = {
	"intermodule_optimization",
	321
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_322 = {
	"read_opt_files_transitively",
	322
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_323 = {
	"use_opt_files",
	323
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_324 = {
	"use_trans_opt_files",
	324
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_325 = {
	"transitive_optimization",
	325
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_326 = {
	"intermodule_analysis",
	326
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_327 = {
	"analysis_repeat",
	327
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_328 = {
	"analysis_file_cache",
	328
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_329 = {
	"allow_inlining",
	329
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_330 = {
	"inlining",
	330
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_331 = {
	"inline_simple",
	331
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_332 = {
	"inline_builtins",
	332
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_333 = {
	"inline_single_use",
	333
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_334 = {
	"inline_call_cost",
	334
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_335 = {
	"inline_compound_threshold",
	335
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_336 = {
	"inline_simple_threshold",
	336
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_337 = {
	"inline_vars_threshold",
	337
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_338 = {
	"intermod_inline_simple_threshold",
	338
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_339 = {
	"from_ground_term_threshold",
	339
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_340 = {
	"common_struct",
	340
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_341 = {
	"common_struct_preds",
	341
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_342 = {
	"common_goal",
	342
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_343 = {
	"constraint_propagation",
	343
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_344 = {
	"local_constraint_propagation",
	344
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_345 = {
	"optimize_unused_args",
	345
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_346 = {
	"intermod_unused_args",
	346
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_347 = {
	"optimize_higher_order",
	347
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_348 = {
	"higher_order_size_limit",
	348
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_349 = {
	"higher_order_arg_limit",
	349
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_350 = {
	"unneeded_code",
	350
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_351 = {
	"unneeded_code_copy_limit",
	351
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_352 = {
	"unneeded_code_debug",
	352
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_353 = {
	"unneeded_code_debug_pred_name",
	353
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_354 = {
	"type_specialization",
	354
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_355 = {
	"user_guided_type_specialization",
	355
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_356 = {
	"introduce_accumulators",
	356
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_357 = {
	"optimize_constructor_last_call_accumulator",
	357
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_358 = {
	"optimize_constructor_last_call_null",
	358
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_359 = {
	"optimize_constructor_last_call",
	359
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_360 = {
	"optimize_duplicate_calls",
	360
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_361 = {
	"constant_propagation",
	361
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_362 = {
	"excess_assign",
	362
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_363 = {
	"optimize_format_calls",
	363
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_364 = {
	"optimize_saved_vars_const",
	364
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_365 = {
	"optimize_saved_vars_cell",
	365
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_366 = {
	"optimize_saved_vars_cell_loop",
	366
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_367 = {
	"optimize_saved_vars_cell_full_path",
	367
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_368 = {
	"optimize_saved_vars_cell_on_stack",
	368
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_369 = {
	"optimize_saved_vars_cell_candidate_headvars",
	369
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_370 = {
	"optimize_saved_vars_cell_cv_store_cost",
	370
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_371 = {
	"optimize_saved_vars_cell_cv_load_cost",
	371
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_372 = {
	"optimize_saved_vars_cell_fv_store_cost",
	372
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_373 = {
	"optimize_saved_vars_cell_fv_load_cost",
	373
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_374 = {
	"optimize_saved_vars_cell_op_ratio",
	374
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_375 = {
	"optimize_saved_vars_cell_node_ratio",
	375
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_376 = {
	"optimize_saved_vars_cell_all_path_node_ratio",
	376
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_377 = {
	"optimize_saved_vars_cell_include_all_candidates",
	377
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_378 = {
	"optimize_saved_vars",
	378
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_379 = {
	"loop_invariants",
	379
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_380 = {
	"delay_construct",
	380
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_381 = {
	"follow_code",
	381
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_382 = {
	"optimize_dead_procs",
	382
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_383 = {
	"deforestation",
	383
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_384 = {
	"deforestation_depth_limit",
	384
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_385 = {
	"deforestation_cost_factor",
	385
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_386 = {
	"deforestation_vars_threshold",
	386
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_387 = {
	"deforestation_size_threshold",
	387
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_388 = {
	"analyse_trail_usage",
	388
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_389 = {
	"optimize_trail_usage",
	389
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_390 = {
	"optimize_region_ops",
	390
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_391 = {
	"analyse_mm_tabling",
	391
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_392 = {
	"untuple",
	392
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_393 = {
	"tuple",
	393
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_394 = {
	"tuple_trace_counts_file",
	394
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_395 = {
	"tuple_costs_ratio",
	395
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_396 = {
	"tuple_min_args",
	396
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_397 = {
	"inline_par_builtins",
	397
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_398 = {
	"always_specialize_in_dep_par_conjs",
	398
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_399 = {
	"allow_some_paths_only_waits",
	399
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_400 = {
	"region_analysis",
	400
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_401 = {
	"structure_sharing_analysis",
	401
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_402 = {
	"structure_sharing_widening",
	402
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_403 = {
	"structure_reuse_analysis",
	403
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_404 = {
	"structure_reuse_constraint",
	404
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_405 = {
	"structure_reuse_constraint_arg",
	405
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_406 = {
	"structure_reuse_max_conditions",
	406
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_407 = {
	"structure_reuse_repeat",
	407
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_408 = {
	"structure_reuse_free_cells",
	408
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_409 = {
	"termination",
	409
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_410 = {
	"termination_check",
	410
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_411 = {
	"verbose_check_termination",
	411
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_412 = {
	"termination_single_args",
	412
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_413 = {
	"termination_norm",
	413
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_414 = {
	"termination_error_limit",
	414
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_415 = {
	"termination_path_limit",
	415
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_416 = {
	"termination2",
	416
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_417 = {
	"check_termination2",
	417
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_418 = {
	"verbose_check_termination2",
	418
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_419 = {
	"termination2_norm",
	419
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_420 = {
	"widening_limit",
	420
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_421 = {
	"arg_size_analysis_only",
	421
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_422 = {
	"propagate_failure_constrs",
	422
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_423 = {
	"term2_maximum_matrix_size",
	423
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_424 = {
	"analyse_exceptions",
	424
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_425 = {
	"analyse_closures",
	425
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_426 = {
	"smart_indexing",
	426
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_427 = {
	"dense_switch_req_density",
	427
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_428 = {
	"lookup_switch_req_density",
	428
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_429 = {
	"dense_switch_size",
	429
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_430 = {
	"lookup_switch_size",
	430
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_431 = {
	"string_hash_switch_size",
	431
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_432 = {
	"string_binary_switch_size",
	432
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_433 = {
	"tag_switch_size",
	433
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_434 = {
	"try_switch_size",
	434
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_435 = {
	"binary_switch_size",
	435
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_436 = {
	"switch_single_rec_base_first",
	436
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_437 = {
	"switch_multi_rec_base_first",
	437
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_438 = {
	"static_ground_cells",
	438
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_439 = {
	"static_ground_floats",
	439
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_440 = {
	"static_code_addresses",
	440
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_441 = {
	"use_atomic_cells",
	441
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_442 = {
	"middle_rec",
	442
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_443 = {
	"simple_neg",
	443
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_444 = {
	"allow_hijacks",
	444
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_445 = {
	"optimize_tailcalls",
	445
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_446 = {
	"optimize_initializations",
	446
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_447 = {
	"eliminate_local_vars",
	447
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_448 = {
	"generate_trail_ops_inline",
	448
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_449 = {
	"common_data",
	449
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_450 = {
	"common_layout_data",
	450
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_451 = {
	"optimize",
	451
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_452 = {
	"optimize_peep",
	452
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_453 = {
	"optimize_peep_mkword",
	453
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_454 = {
	"optimize_jumps",
	454
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_455 = {
	"optimize_fulljumps",
	455
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_456 = {
	"pessimize_tailcalls",
	456
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_457 = {
	"checked_nondet_tailcalls",
	457
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_458 = {
	"use_local_vars",
	458
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_459 = {
	"local_var_access_threshold",
	459
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_460 = {
	"standardize_labels",
	460
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_461 = {
	"optimize_labels",
	461
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_462 = {
	"optimize_dups",
	462
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_463 = {
	"optimize_proc_dups",
	463
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_464 = {
	"optimize_frames",
	464
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_465 = {
	"optimize_delay_slot",
	465
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_466 = {
	"optimize_reassign",
	466
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_467 = {
	"optimize_repeat",
	467
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_468 = {
	"layout_compression_limit",
	468
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_469 = {
	"use_macro_for_redo_fail",
	469
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_470 = {
	"emit_c_loops",
	470
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_471 = {
	"procs_per_c_function",
	471
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_472 = {
	"everything_in_one_c_function",
	472
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_473 = {
	"local_thread_engine_base",
	473
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_474 = {
	"erlang_switch_on_strings_as_atoms",
	474
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_475 = {
	"target_debug",
	475
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_476 = {
	"cc",
	476
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_477 = {
	"cflags",
	477
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_478 = {
	"quoted_cflag",
	478
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_479 = {
	"c_include_directory",
	479
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_480 = {
	"c_optimize",
	480
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_481 = {
	"ansi_c",
	481
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_482 = {
	"inline_alloc",
	482
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_483 = {
	"gcc_flags",
	483
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_484 = {
	"quoted_gcc_flag",
	484
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_485 = {
	"clang_flags",
	485
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_486 = {
	"quoted_clang_flag",
	486
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_487 = {
	"msvc_flags",
	487
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_488 = {
	"quoted_msvc_flag",
	488
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_489 = {
	"cflags_for_warnings",
	489
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_490 = {
	"cflags_for_optimization",
	490
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_491 = {
	"cflags_for_ansi",
	491
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_492 = {
	"cflags_for_regs",
	492
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_493 = {
	"cflags_for_gotos",
	493
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_494 = {
	"cflags_for_threads",
	494
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_495 = {
	"cflags_for_debug",
	495
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_496 = {
	"cflags_for_pic",
	496
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_497 = {
	"c_flag_to_name_object_file",
	497
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_498 = {
	"object_file_extension",
	498
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_499 = {
	"pic_object_file_extension",
	499
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_500 = {
	"link_with_pic_object_file_extension",
	500
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_501 = {
	"c_compiler_type",
	501
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_502 = {
	"csharp_compiler_type",
	502
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_503 = {
	"java_compiler",
	503
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_504 = {
	"java_interpreter",
	504
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_505 = {
	"java_flags",
	505
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_506 = {
	"quoted_java_flag",
	506
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_507 = {
	"java_classpath",
	507
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_508 = {
	"java_object_file_extension",
	508
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_509 = {
	"il_assembler",
	509
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_510 = {
	"ilasm_flags",
	510
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_511 = {
	"quoted_ilasm_flag",
	511
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_512 = {
	"dotnet_library_version",
	512
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_513 = {
	"support_ms_clr",
	513
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_514 = {
	"support_rotor_clr",
	514
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_515 = {
	"csharp_compiler",
	515
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_516 = {
	"csharp_flags",
	516
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_517 = {
	"quoted_csharp_flag",
	517
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_518 = {
	"cli_interpreter",
	518
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_519 = {
	"erlang_compiler",
	519
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_520 = {
	"erlang_interpreter",
	520
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_521 = {
	"erlang_flags",
	521
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_522 = {
	"quoted_erlang_flag",
	522
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_523 = {
	"erlang_include_directory",
	523
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_524 = {
	"erlang_object_file_extension",
	524
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_525 = {
	"erlang_native_code",
	525
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_526 = {
	"erlang_inhibit_trivial_warnings",
	526
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_527 = {
	"output_file_name",
	527
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_528 = {
	"ld_flags",
	528
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_529 = {
	"quoted_ld_flag",
	529
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_530 = {
	"ld_libflags",
	530
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_531 = {
	"quoted_ld_libflag",
	531
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_532 = {
	"link_library_directories",
	532
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_533 = {
	"runtime_link_library_directories",
	533
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_534 = {
	"link_libraries",
	534
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_535 = {
	"link_objects",
	535
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_536 = {
	"mercury_library_directories",
	536
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_537 = {
	"mercury_library_directory_special",
	537
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_538 = {
	"search_library_files_directories",
	538
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_539 = {
	"search_library_files_directory_special",
	539
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_540 = {
	"mercury_libraries",
	540
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_541 = {
	"mercury_library_special",
	541
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_542 = {
	"mercury_standard_library_directory",
	542
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_543 = {
	"mercury_standard_library_directory_special",
	543
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_544 = {
	"init_file_directories",
	544
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_545 = {
	"init_files",
	545
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_546 = {
	"trace_init_files",
	546
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_547 = {
	"linkage",
	547
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_548 = {
	"linkage_special",
	548
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_549 = {
	"mercury_linkage",
	549
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_550 = {
	"mercury_linkage_special",
	550
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_551 = {
	"strip",
	551
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_552 = {
	"demangle",
	552
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_553 = {
	"main",
	553
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_554 = {
	"allow_undefined",
	554
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_555 = {
	"use_readline",
	555
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_556 = {
	"runtime_flags",
	556
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_557 = {
	"extra_initialization_functions",
	557
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_558 = {
	"frameworks",
	558
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_559 = {
	"framework_directories",
	559
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_560 = {
	"shared_library_extension",
	560
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_561 = {
	"library_extension",
	561
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_562 = {
	"executable_file_extension",
	562
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_563 = {
	"link_executable_command",
	563
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_564 = {
	"link_shared_lib_command",
	564
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_565 = {
	"create_archive_command",
	565
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_566 = {
	"create_archive_command_output_flag",
	566
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_567 = {
	"create_archive_command_flags",
	567
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_568 = {
	"ranlib_command",
	568
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_569 = {
	"ranlib_flags",
	569
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_570 = {
	"mkinit_command",
	570
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_571 = {
	"mkinit_erl_command",
	571
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_572 = {
	"demangle_command",
	572
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_573 = {
	"filtercc_command",
	573
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_574 = {
	"trace_libs",
	574
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_575 = {
	"thread_libs",
	575
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_576 = {
	"hwloc_libs",
	576
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_577 = {
	"hwloc_static_libs",
	577
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_578 = {
	"shared_libs",
	578
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_579 = {
	"math_lib",
	579
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_580 = {
	"readline_libs",
	580
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_581 = {
	"linker_opt_separator",
	581
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_582 = {
	"linker_thread_flags",
	582
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_583 = {
	"shlib_linker_thread_flags",
	583
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_584 = {
	"linker_static_flags",
	584
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_585 = {
	"linker_strip_flag",
	585
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_586 = {
	"linker_link_lib_flag",
	586
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_587 = {
	"linker_link_lib_suffix",
	587
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_588 = {
	"shlib_linker_link_lib_flag",
	588
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_589 = {
	"shlib_linker_link_lib_suffix",
	589
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_590 = {
	"linker_debug_flags",
	590
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_591 = {
	"shlib_linker_debug_flags",
	591
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_592 = {
	"linker_trace_flags",
	592
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_593 = {
	"shlib_linker_trace_flags",
	593
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_594 = {
	"linker_path_flag",
	594
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_595 = {
	"linker_rpath_flag",
	595
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_596 = {
	"linker_rpath_separator",
	596
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_597 = {
	"shlib_linker_rpath_flag",
	597
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_598 = {
	"shlib_linker_rpath_separator",
	598
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_599 = {
	"linker_allow_undefined_flag",
	599
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_600 = {
	"linker_error_undefined_flag",
	600
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_601 = {
	"shlib_linker_use_install_name",
	601
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_602 = {
	"shlib_linker_install_name_flag",
	602
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_603 = {
	"shlib_linker_install_name_path",
	603
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_604 = {
	"java_archive_command",
	604
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_605 = {
	"make",
	605
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_606 = {
	"keep_going",
	606
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_607 = {
	"rebuild",
	607
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_608 = {
	"jobs",
	608
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_609 = {
	"track_flags",
	609
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_610 = {
	"invoked_by_mmc_make",
	610
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_611 = {
	"extra_init_command",
	611
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_612 = {
	"pre_link_command",
	612
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_613 = {
	"install_prefix",
	613
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_614 = {
	"use_symlinks",
	614
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_615 = {
	"mercury_configuration_directory",
	615
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_616 = {
	"mercury_configuration_directory_special",
	616
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_617 = {
	"install_command",
	617
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_618 = {
	"install_command_dir_option",
	618
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_619 = {
	"libgrades",
	619
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_620 = {
	"libgrades_include_components",
	620
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_621 = {
	"libgrades_exclude_components",
	621
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_622 = {
	"lib_linkages",
	622
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_623 = {
	"flags_file",
	623
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_624 = {
	"options_files",
	624
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_625 = {
	"config_file",
	625
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_626 = {
	"options_search_directories",
	626
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_627 = {
	"use_subdirs",
	627
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_628 = {
	"use_grade_subdirs",
	628
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_629 = {
	"search_directories",
	629
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_630 = {
	"intermod_directories",
	630
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_631 = {
	"use_search_directories_for_intermod",
	631
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_632 = {
	"libgrade_install_check",
	632
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_633 = {
	"order_make_by_timestamp",
	633
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_634 = {
	"show_make_times",
	634
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_635 = {
	"extra_library_header",
	635
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_636 = {
	"restricted_command_line",
	636
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_637 = {
	"env_type",
	637
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_638 = {
	"host_env_type",
	638
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_639 = {
	"target_env_type",
	639
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_640 = {
	"filenames_from_stdin",
	640
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_641 = {
	"typecheck_ambiguity_warn_limit",
	641
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_642 = {
	"typecheck_ambiguity_error_limit",
	642
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_643 = {
	"help",
	643
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_644 = {
	"version",
	644
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_645 = {
	"fullarch",
	645
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_646 = {
	"cross_compiling",
	646
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_647 = {
	"local_module_id",
	647
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_648 = {
	"analysis_file_cache_dir",
	648
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_649 = {
	"compiler_sufficiently_recent",
	649
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_650 = {
	"experiment",
	650
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_651 = {
	"ignore_par_conjunctions",
	651
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_652 = {
	"control_granularity",
	652
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_653 = {
	"distance_granularity",
	653
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_654 = {
	"implicit_parallelism",
	654
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_655 = {
	"feedback_file",
	655
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_656 = {
	"par_loop_control",
	656
};

static const MR_EnumFunctorDesc mercury_data_libs__options__enum_functor_desc_option_0_657 = {
	"par_loop_control_preserve_tail_recursion",
	657
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
	&mercury_data_libs__options__enum_functor_desc_option_0_617,
	&mercury_data_libs__options__enum_functor_desc_option_0_618,
	&mercury_data_libs__options__enum_functor_desc_option_0_619,
	&mercury_data_libs__options__enum_functor_desc_option_0_620,
	&mercury_data_libs__options__enum_functor_desc_option_0_621,
	&mercury_data_libs__options__enum_functor_desc_option_0_622,
	&mercury_data_libs__options__enum_functor_desc_option_0_623,
	&mercury_data_libs__options__enum_functor_desc_option_0_624,
	&mercury_data_libs__options__enum_functor_desc_option_0_625,
	&mercury_data_libs__options__enum_functor_desc_option_0_626,
	&mercury_data_libs__options__enum_functor_desc_option_0_627,
	&mercury_data_libs__options__enum_functor_desc_option_0_628,
	&mercury_data_libs__options__enum_functor_desc_option_0_629,
	&mercury_data_libs__options__enum_functor_desc_option_0_630,
	&mercury_data_libs__options__enum_functor_desc_option_0_631,
	&mercury_data_libs__options__enum_functor_desc_option_0_632,
	&mercury_data_libs__options__enum_functor_desc_option_0_633,
	&mercury_data_libs__options__enum_functor_desc_option_0_634,
	&mercury_data_libs__options__enum_functor_desc_option_0_635,
	&mercury_data_libs__options__enum_functor_desc_option_0_636,
	&mercury_data_libs__options__enum_functor_desc_option_0_637,
	&mercury_data_libs__options__enum_functor_desc_option_0_638,
	&mercury_data_libs__options__enum_functor_desc_option_0_639,
	&mercury_data_libs__options__enum_functor_desc_option_0_640,
	&mercury_data_libs__options__enum_functor_desc_option_0_641,
	&mercury_data_libs__options__enum_functor_desc_option_0_642,
	&mercury_data_libs__options__enum_functor_desc_option_0_643,
	&mercury_data_libs__options__enum_functor_desc_option_0_644,
	&mercury_data_libs__options__enum_functor_desc_option_0_645,
	&mercury_data_libs__options__enum_functor_desc_option_0_646,
	&mercury_data_libs__options__enum_functor_desc_option_0_647,
	&mercury_data_libs__options__enum_functor_desc_option_0_648,
	&mercury_data_libs__options__enum_functor_desc_option_0_649,
	&mercury_data_libs__options__enum_functor_desc_option_0_650,
	&mercury_data_libs__options__enum_functor_desc_option_0_651,
	&mercury_data_libs__options__enum_functor_desc_option_0_652,
	&mercury_data_libs__options__enum_functor_desc_option_0_653,
	&mercury_data_libs__options__enum_functor_desc_option_0_654,
	&mercury_data_libs__options__enum_functor_desc_option_0_655,
	&mercury_data_libs__options__enum_functor_desc_option_0_656,
	&mercury_data_libs__options__enum_functor_desc_option_0_657
};

const MR_EnumFunctorDescPtr mercury_data_libs__options__enum_name_ordered_option_0[] = {
	&mercury_data_libs__options__enum_functor_desc_option_0_258,
	&mercury_data_libs__options__enum_functor_desc_option_0_292,
	&mercury_data_libs__options__enum_functor_desc_option_0_268,
	&mercury_data_libs__options__enum_functor_desc_option_0_444,
	&mercury_data_libs__options__enum_functor_desc_option_0_329,
	&mercury_data_libs__options__enum_functor_desc_option_0_290,
	&mercury_data_libs__options__enum_functor_desc_option_0_399,
	&mercury_data_libs__options__enum_functor_desc_option_0_160,
	&mercury_data_libs__options__enum_functor_desc_option_0_554,
	&mercury_data_libs__options__enum_functor_desc_option_0_398,
	&mercury_data_libs__options__enum_functor_desc_option_0_425,
	&mercury_data_libs__options__enum_functor_desc_option_0_424,
	&mercury_data_libs__options__enum_functor_desc_option_0_391,
	&mercury_data_libs__options__enum_functor_desc_option_0_388,
	&mercury_data_libs__options__enum_functor_desc_option_0_328,
	&mercury_data_libs__options__enum_functor_desc_option_0_648,
	&mercury_data_libs__options__enum_functor_desc_option_0_327,
	&mercury_data_libs__options__enum_functor_desc_option_0_481,
	&mercury_data_libs__options__enum_functor_desc_option_0_421,
	&mercury_data_libs__options__enum_functor_desc_option_0_241,
	&mercury_data_libs__options__enum_functor_desc_option_0_114,
	&mercury_data_libs__options__enum_functor_desc_option_0_134,
	&mercury_data_libs__options__enum_functor_desc_option_0_255,
	&mercury_data_libs__options__enum_functor_desc_option_0_257,
	&mercury_data_libs__options__enum_functor_desc_option_0_152,
	&mercury_data_libs__options__enum_functor_desc_option_0_153,
	&mercury_data_libs__options__enum_functor_desc_option_0_435,
	&mercury_data_libs__options__enum_functor_desc_option_0_232,
	&mercury_data_libs__options__enum_functor_desc_option_0_261,
	&mercury_data_libs__options__enum_functor_desc_option_0_233,
	&mercury_data_libs__options__enum_functor_desc_option_0_501,
	&mercury_data_libs__options__enum_functor_desc_option_0_497,
	&mercury_data_libs__options__enum_functor_desc_option_0_479,
	&mercury_data_libs__options__enum_functor_desc_option_0_480,
	&mercury_data_libs__options__enum_functor_desc_option_0_264,
	&mercury_data_libs__options__enum_functor_desc_option_0_262,
	&mercury_data_libs__options__enum_functor_desc_option_0_476,
	&mercury_data_libs__options__enum_functor_desc_option_0_477,
	&mercury_data_libs__options__enum_functor_desc_option_0_491,
	&mercury_data_libs__options__enum_functor_desc_option_0_495,
	&mercury_data_libs__options__enum_functor_desc_option_0_493,
	&mercury_data_libs__options__enum_functor_desc_option_0_490,
	&mercury_data_libs__options__enum_functor_desc_option_0_496,
	&mercury_data_libs__options__enum_functor_desc_option_0_492,
	&mercury_data_libs__options__enum_functor_desc_option_0_494,
	&mercury_data_libs__options__enum_functor_desc_option_0_489,
	&mercury_data_libs__options__enum_functor_desc_option_0_417,
	&mercury_data_libs__options__enum_functor_desc_option_0_457,
	&mercury_data_libs__options__enum_functor_desc_option_0_485,
	&mercury_data_libs__options__enum_functor_desc_option_0_518,
	&mercury_data_libs__options__enum_functor_desc_option_0_449,
	&mercury_data_libs__options__enum_functor_desc_option_0_342,
	&mercury_data_libs__options__enum_functor_desc_option_0_450,
	&mercury_data_libs__options__enum_functor_desc_option_0_340,
	&mercury_data_libs__options__enum_functor_desc_option_0_341,
	&mercury_data_libs__options__enum_functor_desc_option_0_311,
	&mercury_data_libs__options__enum_functor_desc_option_0_98,
	&mercury_data_libs__options__enum_functor_desc_option_0_172,
	&mercury_data_libs__options__enum_functor_desc_option_0_99,
	&mercury_data_libs__options__enum_functor_desc_option_0_649,
	&mercury_data_libs__options__enum_functor_desc_option_0_234,
	&mercury_data_libs__options__enum_functor_desc_option_0_625,
	&mercury_data_libs__options__enum_functor_desc_option_0_361,
	&mercury_data_libs__options__enum_functor_desc_option_0_343,
	&mercury_data_libs__options__enum_functor_desc_option_0_652,
	&mercury_data_libs__options__enum_functor_desc_option_0_94,
	&mercury_data_libs__options__enum_functor_desc_option_0_194,
	&mercury_data_libs__options__enum_functor_desc_option_0_196,
	&mercury_data_libs__options__enum_functor_desc_option_0_195,
	&mercury_data_libs__options__enum_functor_desc_option_0_565,
	&mercury_data_libs__options__enum_functor_desc_option_0_567,
	&mercury_data_libs__options__enum_functor_desc_option_0_566,
	&mercury_data_libs__options__enum_functor_desc_option_0_646,
	&mercury_data_libs__options__enum_functor_desc_option_0_175,
	&mercury_data_libs__options__enum_functor_desc_option_0_515,
	&mercury_data_libs__options__enum_functor_desc_option_0_502,
	&mercury_data_libs__options__enum_functor_desc_option_0_516,
	&mercury_data_libs__options__enum_functor_desc_option_0_176,
	&mercury_data_libs__options__enum_functor_desc_option_0_75,
	&mercury_data_libs__options__enum_functor_desc_option_0_65,
	&mercury_data_libs__options__enum_functor_desc_option_0_63,
	&mercury_data_libs__options__enum_functor_desc_option_0_64,
	&mercury_data_libs__options__enum_functor_desc_option_0_71,
	&mercury_data_libs__options__enum_functor_desc_option_0_80,
	&mercury_data_libs__options__enum_functor_desc_option_0_78,
	&mercury_data_libs__options__enum_functor_desc_option_0_72,
	&mercury_data_libs__options__enum_functor_desc_option_0_74,
	&mercury_data_libs__options__enum_functor_desc_option_0_79,
	&mercury_data_libs__options__enum_functor_desc_option_0_77,
	&mercury_data_libs__options__enum_functor_desc_option_0_58,
	&mercury_data_libs__options__enum_functor_desc_option_0_60,
	&mercury_data_libs__options__enum_functor_desc_option_0_62,
	&mercury_data_libs__options__enum_functor_desc_option_0_59,
	&mercury_data_libs__options__enum_functor_desc_option_0_61,
	&mercury_data_libs__options__enum_functor_desc_option_0_66,
	&mercury_data_libs__options__enum_functor_desc_option_0_68,
	&mercury_data_libs__options__enum_functor_desc_option_0_69,
	&mercury_data_libs__options__enum_functor_desc_option_0_70,
	&mercury_data_libs__options__enum_functor_desc_option_0_73,
	&mercury_data_libs__options__enum_functor_desc_option_0_67,
	&mercury_data_libs__options__enum_functor_desc_option_0_76,
	&mercury_data_libs__options__enum_functor_desc_option_0_81,
	&mercury_data_libs__options__enum_functor_desc_option_0_57,
	&mercury_data_libs__options__enum_functor_desc_option_0_182,
	&mercury_data_libs__options__enum_functor_desc_option_0_206,
	&mercury_data_libs__options__enum_functor_desc_option_0_186,
	&mercury_data_libs__options__enum_functor_desc_option_0_383,
	&mercury_data_libs__options__enum_functor_desc_option_0_385,
	&mercury_data_libs__options__enum_functor_desc_option_0_384,
	&mercury_data_libs__options__enum_functor_desc_option_0_387,
	&mercury_data_libs__options__enum_functor_desc_option_0_386,
	&mercury_data_libs__options__enum_functor_desc_option_0_380,
	&mercury_data_libs__options__enum_functor_desc_option_0_128,
	&mercury_data_libs__options__enum_functor_desc_option_0_129,
	&mercury_data_libs__options__enum_functor_desc_option_0_267,
	&mercury_data_libs__options__enum_functor_desc_option_0_552,
	&mercury_data_libs__options__enum_functor_desc_option_0_572,
	&mercury_data_libs__options__enum_functor_desc_option_0_427,
	&mercury_data_libs__options__enum_functor_desc_option_0_429,
	&mercury_data_libs__options__enum_functor_desc_option_0_247,
	&mercury_data_libs__options__enum_functor_desc_option_0_55,
	&mercury_data_libs__options__enum_functor_desc_option_0_276,
	&mercury_data_libs__options__enum_functor_desc_option_0_275,
	&mercury_data_libs__options__enum_functor_desc_option_0_279,
	&mercury_data_libs__options__enum_functor_desc_option_0_653,
	&mercury_data_libs__options__enum_functor_desc_option_0_512,
	&mercury_data_libs__options__enum_functor_desc_option_0_140,
	&mercury_data_libs__options__enum_functor_desc_option_0_143,
	&mercury_data_libs__options__enum_functor_desc_option_0_145,
	&mercury_data_libs__options__enum_functor_desc_option_0_144,
	&mercury_data_libs__options__enum_functor_desc_option_0_141,
	&mercury_data_libs__options__enum_functor_desc_option_0_142,
	&mercury_data_libs__options__enum_functor_desc_option_0_147,
	&mercury_data_libs__options__enum_functor_desc_option_0_146,
	&mercury_data_libs__options__enum_functor_desc_option_0_139,
	&mercury_data_libs__options__enum_functor_desc_option_0_447,
	&mercury_data_libs__options__enum_functor_desc_option_0_470,
	&mercury_data_libs__options__enum_functor_desc_option_0_637,
	&mercury_data_libs__options__enum_functor_desc_option_0_179,
	&mercury_data_libs__options__enum_functor_desc_option_0_519,
	&mercury_data_libs__options__enum_functor_desc_option_0_521,
	&mercury_data_libs__options__enum_functor_desc_option_0_523,
	&mercury_data_libs__options__enum_functor_desc_option_0_526,
	&mercury_data_libs__options__enum_functor_desc_option_0_520,
	&mercury_data_libs__options__enum_functor_desc_option_0_525,
	&mercury_data_libs__options__enum_functor_desc_option_0_524,
	&mercury_data_libs__options__enum_functor_desc_option_0_180,
	&mercury_data_libs__options__enum_functor_desc_option_0_474,
	&mercury_data_libs__options__enum_functor_desc_option_0_96,
	&mercury_data_libs__options__enum_functor_desc_option_0_167,
	&mercury_data_libs__options__enum_functor_desc_option_0_472,
	&mercury_data_libs__options__enum_functor_desc_option_0_362,
	&mercury_data_libs__options__enum_functor_desc_option_0_181,
	&mercury_data_libs__options__enum_functor_desc_option_0_125,
	&mercury_data_libs__options__enum_functor_desc_option_0_562,
	&mercury_data_libs__options__enum_functor_desc_option_0_650,
	&mercury_data_libs__options__enum_functor_desc_option_0_209,
	&mercury_data_libs__options__enum_functor_desc_option_0_221,
	&mercury_data_libs__options__enum_functor_desc_option_0_611,
	&mercury_data_libs__options__enum_functor_desc_option_0_557,
	&mercury_data_libs__options__enum_functor_desc_option_0_635,
	&mercury_data_libs__options__enum_functor_desc_option_0_314,
	&mercury_data_libs__options__enum_functor_desc_option_0_313,
	&mercury_data_libs__options__enum_functor_desc_option_0_655,
	&mercury_data_libs__options__enum_functor_desc_option_0_640,
	&mercury_data_libs__options__enum_functor_desc_option_0_573,
	&mercury_data_libs__options__enum_functor_desc_option_0_48,
	&mercury_data_libs__options__enum_functor_desc_option_0_623,
	&mercury_data_libs__options__enum_functor_desc_option_0_381,
	&mercury_data_libs__options__enum_functor_desc_option_0_131,
	&mercury_data_libs__options__enum_functor_desc_option_0_127,
	&mercury_data_libs__options__enum_functor_desc_option_0_135,
	&mercury_data_libs__options__enum_functor_desc_option_0_559,
	&mercury_data_libs__options__enum_functor_desc_option_0_558,
	&mercury_data_libs__options__enum_functor_desc_option_0_339,
	&mercury_data_libs__options__enum_functor_desc_option_0_645,
	&mercury_data_libs__options__enum_functor_desc_option_0_158,
	&mercury_data_libs__options__enum_functor_desc_option_0_210,
	&mercury_data_libs__options__enum_functor_desc_option_0_483,
	&mercury_data_libs__options__enum_functor_desc_option_0_240,
	&mercury_data_libs__options__enum_functor_desc_option_0_315,
	&mercury_data_libs__options__enum_functor_desc_option_0_246,
	&mercury_data_libs__options__enum_functor_desc_option_0_239,
	&mercury_data_libs__options__enum_functor_desc_option_0_132,
	&mercury_data_libs__options__enum_functor_desc_option_0_91,
	&mercury_data_libs__options__enum_functor_desc_option_0_90,
	&mercury_data_libs__options__enum_functor_desc_option_0_112,
	&mercury_data_libs__options__enum_functor_desc_option_0_113,
	&mercury_data_libs__options__enum_functor_desc_option_0_92,
	&mercury_data_libs__options__enum_functor_desc_option_0_89,
	&mercury_data_libs__options__enum_functor_desc_option_0_93,
	&mercury_data_libs__options__enum_functor_desc_option_0_448,
	&mercury_data_libs__options__enum_functor_desc_option_0_168,
	&mercury_data_libs__options__enum_functor_desc_option_0_4,
	&mercury_data_libs__options__enum_functor_desc_option_0_3,
	&mercury_data_libs__options__enum_functor_desc_option_0_2,
	&mercury_data_libs__options__enum_functor_desc_option_0_302,
	&mercury_data_libs__options__enum_functor_desc_option_0_643,
	&mercury_data_libs__options__enum_functor_desc_option_0_349,
	&mercury_data_libs__options__enum_functor_desc_option_0_348,
	&mercury_data_libs__options__enum_functor_desc_option_0_244,
	&mercury_data_libs__options__enum_functor_desc_option_0_245,
	&mercury_data_libs__options__enum_functor_desc_option_0_638,
	&mercury_data_libs__options__enum_functor_desc_option_0_576,
	&mercury_data_libs__options__enum_functor_desc_option_0_577,
	&mercury_data_libs__options__enum_functor_desc_option_0_651,
	&mercury_data_libs__options__enum_functor_desc_option_0_170,
	&mercury_data_libs__options__enum_functor_desc_option_0_509,
	&mercury_data_libs__options__enum_functor_desc_option_0_254,
	&mercury_data_libs__options__enum_functor_desc_option_0_253,
	&mercury_data_libs__options__enum_functor_desc_option_0_171,
	&mercury_data_libs__options__enum_functor_desc_option_0_252,
	&mercury_data_libs__options__enum_functor_desc_option_0_510,
	&mercury_data_libs__options__enum_functor_desc_option_0_654,
	&mercury_data_libs__options__enum_functor_desc_option_0_138,
	&mercury_data_libs__options__enum_functor_desc_option_0_164,
	&mercury_data_libs__options__enum_functor_desc_option_0_163,
	&mercury_data_libs__options__enum_functor_desc_option_0_162,
	&mercury_data_libs__options__enum_functor_desc_option_0_161,
	&mercury_data_libs__options__enum_functor_desc_option_0_41,
	&mercury_data_libs__options__enum_functor_desc_option_0_43,
	&mercury_data_libs__options__enum_functor_desc_option_0_42,
	&mercury_data_libs__options__enum_functor_desc_option_0_37,
	&mercury_data_libs__options__enum_functor_desc_option_0_1,
	&mercury_data_libs__options__enum_functor_desc_option_0_0,
	&mercury_data_libs__options__enum_functor_desc_option_0_544,
	&mercury_data_libs__options__enum_functor_desc_option_0_545,
	&mercury_data_libs__options__enum_functor_desc_option_0_482,
	&mercury_data_libs__options__enum_functor_desc_option_0_332,
	&mercury_data_libs__options__enum_functor_desc_option_0_334,
	&mercury_data_libs__options__enum_functor_desc_option_0_335,
	&mercury_data_libs__options__enum_functor_desc_option_0_397,
	&mercury_data_libs__options__enum_functor_desc_option_0_331,
	&mercury_data_libs__options__enum_functor_desc_option_0_336,
	&mercury_data_libs__options__enum_functor_desc_option_0_333,
	&mercury_data_libs__options__enum_functor_desc_option_0_337,
	&mercury_data_libs__options__enum_functor_desc_option_0_330,
	&mercury_data_libs__options__enum_functor_desc_option_0_617,
	&mercury_data_libs__options__enum_functor_desc_option_0_618,
	&mercury_data_libs__options__enum_functor_desc_option_0_613,
	&mercury_data_libs__options__enum_functor_desc_option_0_630,
	&mercury_data_libs__options__enum_functor_desc_option_0_338,
	&mercury_data_libs__options__enum_functor_desc_option_0_346,
	&mercury_data_libs__options__enum_functor_desc_option_0_326,
	&mercury_data_libs__options__enum_functor_desc_option_0_321,
	&mercury_data_libs__options__enum_functor_desc_option_0_356,
	&mercury_data_libs__options__enum_functor_desc_option_0_610,
	&mercury_data_libs__options__enum_functor_desc_option_0_173,
	&mercury_data_libs__options__enum_functor_desc_option_0_604,
	&mercury_data_libs__options__enum_functor_desc_option_0_507,
	&mercury_data_libs__options__enum_functor_desc_option_0_503,
	&mercury_data_libs__options__enum_functor_desc_option_0_505,
	&mercury_data_libs__options__enum_functor_desc_option_0_504,
	&mercury_data_libs__options__enum_functor_desc_option_0_508,
	&mercury_data_libs__options__enum_functor_desc_option_0_174,
	&mercury_data_libs__options__enum_functor_desc_option_0_608,
	&mercury_data_libs__options__enum_functor_desc_option_0_606,
	&mercury_data_libs__options__enum_functor_desc_option_0_468,
	&mercury_data_libs__options__enum_functor_desc_option_0_528,
	&mercury_data_libs__options__enum_functor_desc_option_0_530,
	&mercury_data_libs__options__enum_functor_desc_option_0_265,
	&mercury_data_libs__options__enum_functor_desc_option_0_622,
	&mercury_data_libs__options__enum_functor_desc_option_0_632,
	&mercury_data_libs__options__enum_functor_desc_option_0_619,
	&mercury_data_libs__options__enum_functor_desc_option_0_621,
	&mercury_data_libs__options__enum_functor_desc_option_0_620,
	&mercury_data_libs__options__enum_functor_desc_option_0_561,
	&mercury_data_libs__options__enum_functor_desc_option_0_133,
	&mercury_data_libs__options__enum_functor_desc_option_0_563,
	&mercury_data_libs__options__enum_functor_desc_option_0_534,
	&mercury_data_libs__options__enum_functor_desc_option_0_532,
	&mercury_data_libs__options__enum_functor_desc_option_0_535,
	&mercury_data_libs__options__enum_functor_desc_option_0_564,
	&mercury_data_libs__options__enum_functor_desc_option_0_500,
	&mercury_data_libs__options__enum_functor_desc_option_0_547,
	&mercury_data_libs__options__enum_functor_desc_option_0_548,
	&mercury_data_libs__options__enum_functor_desc_option_0_599,
	&mercury_data_libs__options__enum_functor_desc_option_0_590,
	&mercury_data_libs__options__enum_functor_desc_option_0_600,
	&mercury_data_libs__options__enum_functor_desc_option_0_586,
	&mercury_data_libs__options__enum_functor_desc_option_0_587,
	&mercury_data_libs__options__enum_functor_desc_option_0_581,
	&mercury_data_libs__options__enum_functor_desc_option_0_594,
	&mercury_data_libs__options__enum_functor_desc_option_0_595,
	&mercury_data_libs__options__enum_functor_desc_option_0_596,
	&mercury_data_libs__options__enum_functor_desc_option_0_584,
	&mercury_data_libs__options__enum_functor_desc_option_0_585,
	&mercury_data_libs__options__enum_functor_desc_option_0_582,
	&mercury_data_libs__options__enum_functor_desc_option_0_592,
	&mercury_data_libs__options__enum_functor_desc_option_0_344,
	&mercury_data_libs__options__enum_functor_desc_option_0_647,
	&mercury_data_libs__options__enum_functor_desc_option_0_473,
	&mercury_data_libs__options__enum_functor_desc_option_0_459,
	&mercury_data_libs__options__enum_functor_desc_option_0_428,
	&mercury_data_libs__options__enum_functor_desc_option_0_430,
	&mercury_data_libs__options__enum_functor_desc_option_0_379,
	&mercury_data_libs__options__enum_functor_desc_option_0_293,
	&mercury_data_libs__options__enum_functor_desc_option_0_553,
	&mercury_data_libs__options__enum_functor_desc_option_0_605,
	&mercury_data_libs__options__enum_functor_desc_option_0_87,
	&mercury_data_libs__options__enum_functor_desc_option_0_83,
	&mercury_data_libs__options__enum_functor_desc_option_0_85,
	&mercury_data_libs__options__enum_functor_desc_option_0_84,
	&mercury_data_libs__options__enum_functor_desc_option_0_82,
	&mercury_data_libs__options__enum_functor_desc_option_0_86,
	&mercury_data_libs__options__enum_functor_desc_option_0_88,
	&mercury_data_libs__options__enum_functor_desc_option_0_579,
	&mercury_data_libs__options__enum_functor_desc_option_0_136,
	&mercury_data_libs__options__enum_functor_desc_option_0_308,
	&mercury_data_libs__options__enum_functor_desc_option_0_310,
	&mercury_data_libs__options__enum_functor_desc_option_0_309,
	&mercury_data_libs__options__enum_functor_desc_option_0_220,
	&mercury_data_libs__options__enum_functor_desc_option_0_185,
	&mercury_data_libs__options__enum_functor_desc_option_0_615,
	&mercury_data_libs__options__enum_functor_desc_option_0_616,
	&mercury_data_libs__options__enum_functor_desc_option_0_540,
	&mercury_data_libs__options__enum_functor_desc_option_0_536,
	&mercury_data_libs__options__enum_functor_desc_option_0_537,
	&mercury_data_libs__options__enum_functor_desc_option_0_541,
	&mercury_data_libs__options__enum_functor_desc_option_0_549,
	&mercury_data_libs__options__enum_functor_desc_option_0_550,
	&mercury_data_libs__options__enum_functor_desc_option_0_542,
	&mercury_data_libs__options__enum_functor_desc_option_0_543,
	&mercury_data_libs__options__enum_functor_desc_option_0_442,
	&mercury_data_libs__options__enum_functor_desc_option_0_217,
	&mercury_data_libs__options__enum_functor_desc_option_0_570,
	&mercury_data_libs__options__enum_functor_desc_option_0_571,
	&mercury_data_libs__options__enum_functor_desc_option_0_149,
	&mercury_data_libs__options__enum_functor_desc_option_0_166,
	&mercury_data_libs__options__enum_functor_desc_option_0_487,
	&mercury_data_libs__options__enum_functor_desc_option_0_266,
	&mercury_data_libs__options__enum_functor_desc_option_0_273,
	&mercury_data_libs__options__enum_functor_desc_option_0_248,
	&mercury_data_libs__options__enum_functor_desc_option_0_304,
	&mercury_data_libs__options__enum_functor_desc_option_0_306,
	&mercury_data_libs__options__enum_functor_desc_option_0_303,
	&mercury_data_libs__options__enum_functor_desc_option_0_305,
	&mercury_data_libs__options__enum_functor_desc_option_0_230,
	&mercury_data_libs__options__enum_functor_desc_option_0_231,
	&mercury_data_libs__options__enum_functor_desc_option_0_229,
	&mercury_data_libs__options__enum_functor_desc_option_0_498,
	&mercury_data_libs__options__enum_functor_desc_option_0_318,
	&mercury_data_libs__options__enum_functor_desc_option_0_319,
	&mercury_data_libs__options__enum_functor_desc_option_0_317,
	&mercury_data_libs__options__enum_functor_desc_option_0_320,
	&mercury_data_libs__options__enum_functor_desc_option_0_451,
	&mercury_data_libs__options__enum_functor_desc_option_0_359,
	&mercury_data_libs__options__enum_functor_desc_option_0_357,
	&mercury_data_libs__options__enum_functor_desc_option_0_358,
	&mercury_data_libs__options__enum_functor_desc_option_0_382,
	&mercury_data_libs__options__enum_functor_desc_option_0_465,
	&mercury_data_libs__options__enum_functor_desc_option_0_360,
	&mercury_data_libs__options__enum_functor_desc_option_0_462,
	&mercury_data_libs__options__enum_functor_desc_option_0_363,
	&mercury_data_libs__options__enum_functor_desc_option_0_464,
	&mercury_data_libs__options__enum_functor_desc_option_0_455,
	&mercury_data_libs__options__enum_functor_desc_option_0_347,
	&mercury_data_libs__options__enum_functor_desc_option_0_446,
	&mercury_data_libs__options__enum_functor_desc_option_0_454,
	&mercury_data_libs__options__enum_functor_desc_option_0_461,
	&mercury_data_libs__options__enum_functor_desc_option_0_452,
	&mercury_data_libs__options__enum_functor_desc_option_0_453,
	&mercury_data_libs__options__enum_functor_desc_option_0_463,
	&mercury_data_libs__options__enum_functor_desc_option_0_466,
	&mercury_data_libs__options__enum_functor_desc_option_0_390,
	&mercury_data_libs__options__enum_functor_desc_option_0_467,
	&mercury_data_libs__options__enum_functor_desc_option_0_378,
	&mercury_data_libs__options__enum_functor_desc_option_0_365,
	&mercury_data_libs__options__enum_functor_desc_option_0_376,
	&mercury_data_libs__options__enum_functor_desc_option_0_369,
	&mercury_data_libs__options__enum_functor_desc_option_0_371,
	&mercury_data_libs__options__enum_functor_desc_option_0_370,
	&mercury_data_libs__options__enum_functor_desc_option_0_367,
	&mercury_data_libs__options__enum_functor_desc_option_0_373,
	&mercury_data_libs__options__enum_functor_desc_option_0_372,
	&mercury_data_libs__options__enum_functor_desc_option_0_377,
	&mercury_data_libs__options__enum_functor_desc_option_0_366,
	&mercury_data_libs__options__enum_functor_desc_option_0_375,
	&mercury_data_libs__options__enum_functor_desc_option_0_368,
	&mercury_data_libs__options__enum_functor_desc_option_0_374,
	&mercury_data_libs__options__enum_functor_desc_option_0_364,
	&mercury_data_libs__options__enum_functor_desc_option_0_445,
	&mercury_data_libs__options__enum_functor_desc_option_0_389,
	&mercury_data_libs__options__enum_functor_desc_option_0_345,
	&mercury_data_libs__options__enum_functor_desc_option_0_624,
	&mercury_data_libs__options__enum_functor_desc_option_0_626,
	&mercury_data_libs__options__enum_functor_desc_option_0_633,
	&mercury_data_libs__options__enum_functor_desc_option_0_105,
	&mercury_data_libs__options__enum_functor_desc_option_0_110,
	&mercury_data_libs__options__enum_functor_desc_option_0_104,
	&mercury_data_libs__options__enum_functor_desc_option_0_107,
	&mercury_data_libs__options__enum_functor_desc_option_0_51,
	&mercury_data_libs__options__enum_functor_desc_option_0_106,
	&mercury_data_libs__options__enum_functor_desc_option_0_527,
	&mercury_data_libs__options__enum_functor_desc_option_0_109,
	&mercury_data_libs__options__enum_functor_desc_option_0_100,
	&mercury_data_libs__options__enum_functor_desc_option_0_103,
	&mercury_data_libs__options__enum_functor_desc_option_0_108,
	&mercury_data_libs__options__enum_functor_desc_option_0_101,
	&mercury_data_libs__options__enum_functor_desc_option_0_102,
	&mercury_data_libs__options__enum_functor_desc_option_0_656,
	&mercury_data_libs__options__enum_functor_desc_option_0_657,
	&mercury_data_libs__options__enum_functor_desc_option_0_211,
	&mercury_data_libs__options__enum_functor_desc_option_0_297,
	&mercury_data_libs__options__enum_functor_desc_option_0_296,
	&mercury_data_libs__options__enum_functor_desc_option_0_456,
	&mercury_data_libs__options__enum_functor_desc_option_0_307,
	&mercury_data_libs__options__enum_functor_desc_option_0_499,
	&mercury_data_libs__options__enum_functor_desc_option_0_242,
	&mercury_data_libs__options__enum_functor_desc_option_0_298,
	&mercury_data_libs__options__enum_functor_desc_option_0_193,
	&mercury_data_libs__options__enum_functor_desc_option_0_612,
	&mercury_data_libs__options__enum_functor_desc_option_0_192,
	&mercury_data_libs__options__enum_functor_desc_option_0_316,
	&mercury_data_libs__options__enum_functor_desc_option_0_263,
	&mercury_data_libs__options__enum_functor_desc_option_0_56,
	&mercury_data_libs__options__enum_functor_desc_option_0_259,
	&mercury_data_libs__options__enum_functor_desc_option_0_471,
	&mercury_data_libs__options__enum_functor_desc_option_0_124,
	&mercury_data_libs__options__enum_functor_desc_option_0_187,
	&mercury_data_libs__options__enum_functor_desc_option_0_190,
	&mercury_data_libs__options__enum_functor_desc_option_0_197,
	&mercury_data_libs__options__enum_functor_desc_option_0_200,
	&mercury_data_libs__options__enum_functor_desc_option_0_198,
	&mercury_data_libs__options__enum_functor_desc_option_0_199,
	&mercury_data_libs__options__enum_functor_desc_option_0_201,
	&mercury_data_libs__options__enum_functor_desc_option_0_202,
	&mercury_data_libs__options__enum_functor_desc_option_0_203,
	&mercury_data_libs__options__enum_functor_desc_option_0_189,
	&mercury_data_libs__options__enum_functor_desc_option_0_188,
	&mercury_data_libs__options__enum_functor_desc_option_0_183,
	&mercury_data_libs__options__enum_functor_desc_option_0_151,
	&mercury_data_libs__options__enum_functor_desc_option_0_422,
	&mercury_data_libs__options__enum_functor_desc_option_0_249,
	&mercury_data_libs__options__enum_functor_desc_option_0_250,
	&mercury_data_libs__options__enum_functor_desc_option_0_478,
	&mercury_data_libs__options__enum_functor_desc_option_0_486,
	&mercury_data_libs__options__enum_functor_desc_option_0_517,
	&mercury_data_libs__options__enum_functor_desc_option_0_522,
	&mercury_data_libs__options__enum_functor_desc_option_0_484,
	&mercury_data_libs__options__enum_functor_desc_option_0_511,
	&mercury_data_libs__options__enum_functor_desc_option_0_506,
	&mercury_data_libs__options__enum_functor_desc_option_0_529,
	&mercury_data_libs__options__enum_functor_desc_option_0_531,
	&mercury_data_libs__options__enum_functor_desc_option_0_488,
	&mercury_data_libs__options__enum_functor_desc_option_0_568,
	&mercury_data_libs__options__enum_functor_desc_option_0_569,
	&mercury_data_libs__options__enum_functor_desc_option_0_322,
	&mercury_data_libs__options__enum_functor_desc_option_0_580,
	&mercury_data_libs__options__enum_functor_desc_option_0_607,
	&mercury_data_libs__options__enum_functor_desc_option_0_299,
	&mercury_data_libs__options__enum_functor_desc_option_0_301,
	&mercury_data_libs__options__enum_functor_desc_option_0_300,
	&mercury_data_libs__options__enum_functor_desc_option_0_208,
	&mercury_data_libs__options__enum_functor_desc_option_0_207,
	&mercury_data_libs__options__enum_functor_desc_option_0_400,
	&mercury_data_libs__options__enum_functor_desc_option_0_156,
	&mercury_data_libs__options__enum_functor_desc_option_0_157,
	&mercury_data_libs__options__enum_functor_desc_option_0_52,
	&mercury_data_libs__options__enum_functor_desc_option_0_53,
	&mercury_data_libs__options__enum_functor_desc_option_0_636,
	&mercury_data_libs__options__enum_functor_desc_option_0_274,
	&mercury_data_libs__options__enum_functor_desc_option_0_556,
	&mercury_data_libs__options__enum_functor_desc_option_0_533,
	&mercury_data_libs__options__enum_functor_desc_option_0_629,
	&mercury_data_libs__options__enum_functor_desc_option_0_538,
	&mercury_data_libs__options__enum_functor_desc_option_0_539,
	&mercury_data_libs__options__enum_functor_desc_option_0_155,
	&mercury_data_libs__options__enum_functor_desc_option_0_560,
	&mercury_data_libs__options__enum_functor_desc_option_0_578,
	&mercury_data_libs__options__enum_functor_desc_option_0_591,
	&mercury_data_libs__options__enum_functor_desc_option_0_602,
	&mercury_data_libs__options__enum_functor_desc_option_0_603,
	&mercury_data_libs__options__enum_functor_desc_option_0_588,
	&mercury_data_libs__options__enum_functor_desc_option_0_589,
	&mercury_data_libs__options__enum_functor_desc_option_0_597,
	&mercury_data_libs__options__enum_functor_desc_option_0_598,
	&mercury_data_libs__options__enum_functor_desc_option_0_583,
	&mercury_data_libs__options__enum_functor_desc_option_0_593,
	&mercury_data_libs__options__enum_functor_desc_option_0_601,
	&mercury_data_libs__options__enum_functor_desc_option_0_312,
	&mercury_data_libs__options__enum_functor_desc_option_0_137,
	&mercury_data_libs__options__enum_functor_desc_option_0_634,
	&mercury_data_libs__options__enum_functor_desc_option_0_154,
	&mercury_data_libs__options__enum_functor_desc_option_0_150,
	&mercury_data_libs__options__enum_functor_desc_option_0_443,
	&mercury_data_libs__options__enum_functor_desc_option_0_218,
	&mercury_data_libs__options__enum_functor_desc_option_0_288,
	&mercury_data_libs__options__enum_functor_desc_option_0_283,
	&mercury_data_libs__options__enum_functor_desc_option_0_281,
	&mercury_data_libs__options__enum_functor_desc_option_0_287,
	&mercury_data_libs__options__enum_functor_desc_option_0_280,
	&mercury_data_libs__options__enum_functor_desc_option_0_284,
	&mercury_data_libs__options__enum_functor_desc_option_0_285,
	&mercury_data_libs__options__enum_functor_desc_option_0_282,
	&mercury_data_libs__options__enum_functor_desc_option_0_286,
	&mercury_data_libs__options__enum_functor_desc_option_0_426,
	&mercury_data_libs__options__enum_functor_desc_option_0_111,
	&mercury_data_libs__options__enum_functor_desc_option_0_289,
	&mercury_data_libs__options__enum_functor_desc_option_0_227,
	&mercury_data_libs__options__enum_functor_desc_option_0_269,
	&mercury_data_libs__options__enum_functor_desc_option_0_222,
	&mercury_data_libs__options__enum_functor_desc_option_0_256,
	&mercury_data_libs__options__enum_functor_desc_option_0_130,
	&mercury_data_libs__options__enum_functor_desc_option_0_460,
	&mercury_data_libs__options__enum_functor_desc_option_0_440,
	&mercury_data_libs__options__enum_functor_desc_option_0_438,
	&mercury_data_libs__options__enum_functor_desc_option_0_439,
	&mercury_data_libs__options__enum_functor_desc_option_0_54,
	&mercury_data_libs__options__enum_functor_desc_option_0_159,
	&mercury_data_libs__options__enum_functor_desc_option_0_432,
	&mercury_data_libs__options__enum_functor_desc_option_0_431,
	&mercury_data_libs__options__enum_functor_desc_option_0_551,
	&mercury_data_libs__options__enum_functor_desc_option_0_403,
	&mercury_data_libs__options__enum_functor_desc_option_0_404,
	&mercury_data_libs__options__enum_functor_desc_option_0_405,
	&mercury_data_libs__options__enum_functor_desc_option_0_408,
	&mercury_data_libs__options__enum_functor_desc_option_0_406,
	&mercury_data_libs__options__enum_functor_desc_option_0_407,
	&mercury_data_libs__options__enum_functor_desc_option_0_401,
	&mercury_data_libs__options__enum_functor_desc_option_0_402,
	&mercury_data_libs__options__enum_functor_desc_option_0_513,
	&mercury_data_libs__options__enum_functor_desc_option_0_514,
	&mercury_data_libs__options__enum_functor_desc_option_0_126,
	&mercury_data_libs__options__enum_functor_desc_option_0_437,
	&mercury_data_libs__options__enum_functor_desc_option_0_436,
	&mercury_data_libs__options__enum_functor_desc_option_0_238,
	&mercury_data_libs__options__enum_functor_desc_option_0_294,
	&mercury_data_libs__options__enum_functor_desc_option_0_433,
	&mercury_data_libs__options__enum_functor_desc_option_0_228,
	&mercury_data_libs__options__enum_functor_desc_option_0_169,
	&mercury_data_libs__options__enum_functor_desc_option_0_97,
	&mercury_data_libs__options__enum_functor_desc_option_0_475,
	&mercury_data_libs__options__enum_functor_desc_option_0_639,
	&mercury_data_libs__options__enum_functor_desc_option_0_423,
	&mercury_data_libs__options__enum_functor_desc_option_0_409,
	&mercury_data_libs__options__enum_functor_desc_option_0_416,
	&mercury_data_libs__options__enum_functor_desc_option_0_419,
	&mercury_data_libs__options__enum_functor_desc_option_0_410,
	&mercury_data_libs__options__enum_functor_desc_option_0_414,
	&mercury_data_libs__options__enum_functor_desc_option_0_413,
	&mercury_data_libs__options__enum_functor_desc_option_0_415,
	&mercury_data_libs__options__enum_functor_desc_option_0_412,
	&mercury_data_libs__options__enum_functor_desc_option_0_575,
	&mercury_data_libs__options__enum_functor_desc_option_0_212,
	&mercury_data_libs__options__enum_functor_desc_option_0_184,
	&mercury_data_libs__options__enum_functor_desc_option_0_123,
	&mercury_data_libs__options__enum_functor_desc_option_0_546,
	&mercury_data_libs__options__enum_functor_desc_option_0_115,
	&mercury_data_libs__options__enum_functor_desc_option_0_574,
	&mercury_data_libs__options__enum_functor_desc_option_0_116,
	&mercury_data_libs__options__enum_functor_desc_option_0_117,
	&mercury_data_libs__options__enum_functor_desc_option_0_260,
	&mercury_data_libs__options__enum_functor_desc_option_0_118,
	&mercury_data_libs__options__enum_functor_desc_option_0_122,
	&mercury_data_libs__options__enum_functor_desc_option_0_119,
	&mercury_data_libs__options__enum_functor_desc_option_0_121,
	&mercury_data_libs__options__enum_functor_desc_option_0_120,
	&mercury_data_libs__options__enum_functor_desc_option_0_609,
	&mercury_data_libs__options__enum_functor_desc_option_0_295,
	&mercury_data_libs__options__enum_functor_desc_option_0_214,
	&mercury_data_libs__options__enum_functor_desc_option_0_325,
	&mercury_data_libs__options__enum_functor_desc_option_0_434,
	&mercury_data_libs__options__enum_functor_desc_option_0_393,
	&mercury_data_libs__options__enum_functor_desc_option_0_395,
	&mercury_data_libs__options__enum_functor_desc_option_0_396,
	&mercury_data_libs__options__enum_functor_desc_option_0_394,
	&mercury_data_libs__options__enum_functor_desc_option_0_291,
	&mercury_data_libs__options__enum_functor_desc_option_0_272,
	&mercury_data_libs__options__enum_functor_desc_option_0_270,
	&mercury_data_libs__options__enum_functor_desc_option_0_271,
	&mercury_data_libs__options__enum_functor_desc_option_0_165,
	&mercury_data_libs__options__enum_functor_desc_option_0_219,
	&mercury_data_libs__options__enum_functor_desc_option_0_354,
	&mercury_data_libs__options__enum_functor_desc_option_0_642,
	&mercury_data_libs__options__enum_functor_desc_option_0_641,
	&mercury_data_libs__options__enum_functor_desc_option_0_95,
	&mercury_data_libs__options__enum_functor_desc_option_0_236,
	&mercury_data_libs__options__enum_functor_desc_option_0_235,
	&mercury_data_libs__options__enum_functor_desc_option_0_237,
	&mercury_data_libs__options__enum_functor_desc_option_0_350,
	&mercury_data_libs__options__enum_functor_desc_option_0_351,
	&mercury_data_libs__options__enum_functor_desc_option_0_352,
	&mercury_data_libs__options__enum_functor_desc_option_0_353,
	&mercury_data_libs__options__enum_functor_desc_option_0_392,
	&mercury_data_libs__options__enum_functor_desc_option_0_191,
	&mercury_data_libs__options__enum_functor_desc_option_0_224,
	&mercury_data_libs__options__enum_functor_desc_option_0_441,
	&mercury_data_libs__options__enum_functor_desc_option_0_243,
	&mercury_data_libs__options__enum_functor_desc_option_0_628,
	&mercury_data_libs__options__enum_functor_desc_option_0_458,
	&mercury_data_libs__options__enum_functor_desc_option_0_205,
	&mercury_data_libs__options__enum_functor_desc_option_0_469,
	&mercury_data_libs__options__enum_functor_desc_option_0_216,
	&mercury_data_libs__options__enum_functor_desc_option_0_215,
	&mercury_data_libs__options__enum_functor_desc_option_0_278,
	&mercury_data_libs__options__enum_functor_desc_option_0_277,
	&mercury_data_libs__options__enum_functor_desc_option_0_323,
	&mercury_data_libs__options__enum_functor_desc_option_0_555,
	&mercury_data_libs__options__enum_functor_desc_option_0_223,
	&mercury_data_libs__options__enum_functor_desc_option_0_225,
	&mercury_data_libs__options__enum_functor_desc_option_0_226,
	&mercury_data_libs__options__enum_functor_desc_option_0_631,
	&mercury_data_libs__options__enum_functor_desc_option_0_627,
	&mercury_data_libs__options__enum_functor_desc_option_0_614,
	&mercury_data_libs__options__enum_functor_desc_option_0_213,
	&mercury_data_libs__options__enum_functor_desc_option_0_324,
	&mercury_data_libs__options__enum_functor_desc_option_0_204,
	&mercury_data_libs__options__enum_functor_desc_option_0_355,
	&mercury_data_libs__options__enum_functor_desc_option_0_44,
	&mercury_data_libs__options__enum_functor_desc_option_0_411,
	&mercury_data_libs__options__enum_functor_desc_option_0_418,
	&mercury_data_libs__options__enum_functor_desc_option_0_50,
	&mercury_data_libs__options__enum_functor_desc_option_0_148,
	&mercury_data_libs__options__enum_functor_desc_option_0_46,
	&mercury_data_libs__options__enum_functor_desc_option_0_49,
	&mercury_data_libs__options__enum_functor_desc_option_0_47,
	&mercury_data_libs__options__enum_functor_desc_option_0_251,
	&mercury_data_libs__options__enum_functor_desc_option_0_644,
	&mercury_data_libs__options__enum_functor_desc_option_0_45,
	&mercury_data_libs__options__enum_functor_desc_option_0_29,
	&mercury_data_libs__options__enum_functor_desc_option_0_7,
	&mercury_data_libs__options__enum_functor_desc_option_0_20,
	&mercury_data_libs__options__enum_functor_desc_option_0_8,
	&mercury_data_libs__options__enum_functor_desc_option_0_35,
	&mercury_data_libs__options__enum_functor_desc_option_0_11,
	&mercury_data_libs__options__enum_functor_desc_option_0_32,
	&mercury_data_libs__options__enum_functor_desc_option_0_21,
	&mercury_data_libs__options__enum_functor_desc_option_0_12,
	&mercury_data_libs__options__enum_functor_desc_option_0_14,
	&mercury_data_libs__options__enum_functor_desc_option_0_13,
	&mercury_data_libs__options__enum_functor_desc_option_0_15,
	&mercury_data_libs__options__enum_functor_desc_option_0_16,
	&mercury_data_libs__options__enum_functor_desc_option_0_17,
	&mercury_data_libs__options__enum_functor_desc_option_0_25,
	&mercury_data_libs__options__enum_functor_desc_option_0_31,
	&mercury_data_libs__options__enum_functor_desc_option_0_9,
	&mercury_data_libs__options__enum_functor_desc_option_0_34,
	&mercury_data_libs__options__enum_functor_desc_option_0_6,
	&mercury_data_libs__options__enum_functor_desc_option_0_19,
	&mercury_data_libs__options__enum_functor_desc_option_0_5,
	&mercury_data_libs__options__enum_functor_desc_option_0_23,
	&mercury_data_libs__options__enum_functor_desc_option_0_40,
	&mercury_data_libs__options__enum_functor_desc_option_0_28,
	&mercury_data_libs__options__enum_functor_desc_option_0_39,
	&mercury_data_libs__options__enum_functor_desc_option_0_30,
	&mercury_data_libs__options__enum_functor_desc_option_0_26,
	&mercury_data_libs__options__enum_functor_desc_option_0_24,
	&mercury_data_libs__options__enum_functor_desc_option_0_18,
	&mercury_data_libs__options__enum_functor_desc_option_0_33,
	&mercury_data_libs__options__enum_functor_desc_option_0_38,
	&mercury_data_libs__options__enum_functor_desc_option_0_10,
	&mercury_data_libs__options__enum_functor_desc_option_0_36,
	&mercury_data_libs__options__enum_functor_desc_option_0_27,
	&mercury_data_libs__options__enum_functor_desc_option_0_22,
	&mercury_data_libs__options__enum_functor_desc_option_0_420,
	&mercury_data_libs__options__enum_functor_desc_option_0_177,
	&mercury_data_libs__options__enum_functor_desc_option_0_178
};

const MR_Integer mercury_data_libs__options__functor_number_map_option_0[] = {
	224,
	223,
	195,
	194,
	193,
	640,
	638,
	621,
	623,
	636,
	651,
	625,
	628,
	630,
	629,
	631,
	632,
	633,
	648,
	639,
	622,
	627,
	654,
	641,
	647,
	634,
	646,
	653,
	643,
	620,
	645,
	635,
	626,
	649,
	637,
	624,
	652,
	222,
	650,
	644,
	642,
	219,
	221,
	220,
	609,
	619,
	614,
	616,
	166,
	615,
	612,
	391,
	458,
	459,
	508,
	120,
	415,
	102,
	89,
	92,
	90,
	93,
	91,
	80,
	81,
	79,
	94,
	99,
	95,
	96,
	97,
	82,
	85,
	98,
	86,
	78,
	100,
	88,
	84,
	87,
	83,
	101,
	303,
	300,
	302,
	301,
	304,
	299,
	305,
	189,
	185,
	184,
	188,
	190,
	65,
	576,
	148,
	531,
	56,
	58,
	395,
	398,
	399,
	396,
	389,
	387,
	392,
	390,
	397,
	394,
	388,
	497,
	186,
	187,
	20,
	548,
	550,
	551,
	553,
	555,
	557,
	556,
	554,
	546,
	418,
	153,
	523,
	170,
	112,
	113,
	503,
	169,
	183,
	267,
	21,
	171,
	307,
	481,
	214,
	134,
	126,
	130,
	131,
	127,
	129,
	128,
	133,
	132,
	613,
	327,
	484,
	431,
	24,
	25,
	483,
	467,
	456,
	457,
	176,
	509,
	7,
	218,
	217,
	216,
	215,
	571,
	328,
	149,
	192,
	530,
	206,
	210,
	57,
	247,
	254,
	73,
	77,
	656,
	657,
	138,
	146,
	152,
	103,
	430,
	545,
	312,
	105,
	419,
	429,
	428,
	420,
	585,
	412,
	410,
	66,
	68,
	67,
	421,
	423,
	424,
	422,
	425,
	426,
	427,
	607,
	591,
	104,
	454,
	453,
	156,
	177,
	402,
	544,
	605,
	560,
	594,
	593,
	324,
	486,
	572,
	311,
	157,
	501,
	599,
	586,
	600,
	601,
	499,
	529,
	339,
	337,
	338,
	27,
	29,
	60,
	578,
	577,
	579,
	526,
	182,
	179,
	19,
	408,
	588,
	200,
	201,
	181,
	119,
	332,
	433,
	434,
	617,
	211,
	209,
	208,
	22,
	502,
	23,
	0,
	416,
	552,
	28,
	35,
	414,
	34,
	260,
	330,
	114,
	2,
	500,
	569,
	570,
	568,
	331,
	461,
	122,
	121,
	596,
	595,
	123,
	491,
	489,
	494,
	488,
	492,
	493,
	495,
	490,
	487,
	498,
	5,
	567,
	1,
	296,
	527,
	559,
	404,
	403,
	409,
	450,
	452,
	451,
	196,
	335,
	333,
	336,
	334,
	406,
	308,
	310,
	309,
	55,
	480,
	162,
	161,
	180,
	413,
	343,
	341,
	342,
	344,
	244,
	447,
	597,
	606,
	561,
	243,
	16,
	14,
	4,
	236,
	232,
	228,
	234,
	229,
	230,
	233,
	235,
	241,
	174,
	53,
	54,
	51,
	63,
	289,
	383,
	242,
	356,
	199,
	198,
	580,
	581,
	582,
	583,
	573,
	608,
	245,
	347,
	348,
	346,
	351,
	62,
	151,
	353,
	380,
	367,
	376,
	372,
	378,
	369,
	371,
	370,
	374,
	373,
	379,
	377,
	368,
	375,
	366,
	295,
	111,
	168,
	349,
	106,
	108,
	107,
	110,
	109,
	13,
	382,
	364,
	12,
	584,
	563,
	566,
	564,
	565,
	231,
	9,
	6,
	455,
	519,
	520,
	513,
	514,
	515,
	517,
	518,
	516,
	535,
	538,
	610,
	542,
	540,
	539,
	541,
	536,
	46,
	611,
	537,
	655,
	18,
	432,
	534,
	11,
	10,
	496,
	117,
	293,
	118,
	294,
	511,
	510,
	528,
	562,
	26,
	525,
	524,
	506,
	507,
	505,
	587,
	323,
	485,
	3,
	381,
	357,
	135,
	191,
	50,
	52,
	345,
	360,
	361,
	358,
	355,
	405,
	47,
	590,
	292,
	504,
	359,
	352,
	362,
	354,
	350,
	363,
	365,
	257,
	592,
	136,
	417,
	150,
	291,
	147,
	532,
	36,
	37,
	435,
	32,
	33,
	17,
	227,
	178,
	439,
	48,
	436,
	329,
	444,
	45,
	41,
	38,
	43,
	40,
	44,
	39,
	42,
	31,
	340,
	407,
	273,
	30,
	75,
	250,
	252,
	251,
	441,
	249,
	253,
	207,
	212,
	440,
	125,
	521,
	522,
	74,
	76,
	437,
	49,
	139,
	143,
	140,
	438,
	141,
	145,
	144,
	142,
	393,
	258,
	442,
	259,
	443,
	270,
	463,
	269,
	271,
	316,
	317,
	465,
	466,
	315,
	318,
	321,
	322,
	225,
	226,
	547,
	274,
	275,
	319,
	320,
	512,
	115,
	297,
	8,
	598,
	462,
	159,
	173,
	172,
	468,
	266,
	154,
	268,
	272,
	69,
	71,
	70,
	445,
	446,
	325,
	326,
	116,
	165,
	549,
	543,
	203,
	204,
	469,
	306,
	448,
	281,
	287,
	477,
	285,
	286,
	279,
	280,
	473,
	474,
	277,
	470,
	288,
	478,
	282,
	283,
	284,
	475,
	476,
	276,
	278,
	479,
	471,
	472,
	248,
	298,
	256,
	449,
	255,
	558,
	246,
	158,
	411,
	239,
	604,
	313,
	314,
	237,
	238,
	263,
	265,
	264,
	261,
	167,
	384,
	61,
	385,
	603,
	589,
	464,
	240,
	602,
	262,
	386,
	482,
	160,
	460,
	137,
	202,
	533,
	164,
	575,
	574,
	197,
	618,
	175,
	72,
	290,
	15,
	59,
	155,
	205,
	64,
	124,
	213,
	163,
	400,
	401 };
	
const MR_TypeCtorInfo_Struct mercury_data_libs__options__type_ctor_info_option_0 = {
	0,
	15,
	-1,
	MR_TYPECTOR_REP_ENUM,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___libs__options__option_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___libs__options__option_0_0)),
	"libs.options",
	"option",
	{ (void *)mercury_data_libs__options__enum_name_ordered_option_0 },
	{ (void *)mercury_data_libs__options__enum_value_ordered_option_0 },
	658,
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
	15,
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
	15,
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
3042,
"466"
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
3134,
"5"
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
3124,
"5"
};



MR_BEGIN_MODULE(libs__options_module0)
	MR_init_entry1(libs__options__short_option_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__libs__options__short_option_2_0);
	MR_init_label10(libs__options__short_option_2_0,3,4,5,6,7,8,9,10,11,12)
	MR_init_label10(libs__options__short_option_2_0,13,14,15,16,17,18,19,20,21,22)
	MR_init_label10(libs__options__short_option_2_0,23,24,25,26,27,28,29,30,31,32)
	MR_init_label5(libs__options__short_option_2_0,33,34,35,36,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'short_option'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__libs__options__short_option_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,63)) {
		MR_GOTO_LAB(libs__options__short_option_2_0_i3);
	}
	MR_r2 = (MR_Integer) 643;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__short_option_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,67)) {
		MR_GOTO_LAB(libs__options__short_option_2_0_i4);
	}
	MR_r2 = (MR_Integer) 97;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__short_option_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,68)) {
		MR_GOTO_LAB(libs__options__short_option_2_0_i5);
	}
	MR_r2 = (MR_Integer) 143;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__short_option_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,69)) {
		MR_GOTO_LAB(libs__options__short_option_2_0_i6);
	}
	MR_r2 = (MR_Integer) 46;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__short_option_2_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,70)) {
		MR_GOTO_LAB(libs__options__short_option_2_0_i7);
	}
	MR_r2 = (MR_Integer) 559;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__short_option_2_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,72)) {
		MR_GOTO_LAB(libs__options__short_option_2_0_i8);
	}
	MR_r2 = (MR_Integer) 244;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__short_option_2_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,73)) {
		MR_GOTO_LAB(libs__options__short_option_2_0_i9);
	}
	MR_r2 = (MR_Integer) 629;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__short_option_2_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,76)) {
		MR_GOTO_LAB(libs__options__short_option_2_0_i10);
	}
	MR_r2 = (MR_Integer) 532;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__short_option_2_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,77)) {
		MR_GOTO_LAB(libs__options__short_option_2_0_i11);
	}
	MR_r2 = (MR_Integer) 91;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__short_option_2_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,78)) {
		MR_GOTO_LAB(libs__options__short_option_2_0_i12);
	}
	MR_r2 = (MR_Integer) 58;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__short_option_2_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,79)) {
		MR_GOTO_LAB(libs__options__short_option_2_0_i13);
	}
	MR_r2 = (MR_Integer) 318;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__short_option_2_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,80)) {
		MR_GOTO_LAB(libs__options__short_option_2_0_i14);
	}
	MR_r2 = (MR_Integer) 94;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__short_option_2_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,82)) {
		MR_GOTO_LAB(libs__options__short_option_2_0_i15);
	}
	MR_r2 = (MR_Integer) 533;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__short_option_2_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,83)) {
		MR_GOTO_LAB(libs__options__short_option_2_0_i16);
	}
	MR_r2 = (MR_Integer) 54;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__short_option_2_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,84)) {
		MR_GOTO_LAB(libs__options__short_option_2_0_i17);
	}
	MR_r2 = (MR_Integer) 57;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__short_option_2_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,86)) {
		MR_GOTO_LAB(libs__options__short_option_2_0_i18);
	}
	MR_r2 = (MR_Integer) 45;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__short_option_2_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,99)) {
		MR_GOTO_LAB(libs__options__short_option_2_0_i19);
	}
	MR_r2 = (MR_Integer) 98;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__short_option_2_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,100)) {
		MR_GOTO_LAB(libs__options__short_option_2_0_i20);
	}
	MR_r2 = (MR_Integer) 140;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__short_option_2_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,101)) {
		MR_GOTO_LAB(libs__options__short_option_2_0_i21);
	}
	MR_r2 = (MR_Integer) 96;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__short_option_2_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,102)) {
		MR_GOTO_LAB(libs__options__short_option_2_0_i22);
	}
	MR_r2 = (MR_Integer) 89;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__short_option_2_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,104)) {
		MR_GOTO_LAB(libs__options__short_option_2_0_i23);
	}
	MR_r2 = (MR_Integer) 643;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__short_option_2_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,105)) {
		MR_GOTO_LAB(libs__options__short_option_2_0_i24);
	}
	MR_r2 = (MR_Integer) 83;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__short_option_2_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,106)) {
		MR_GOTO_LAB(libs__options__short_option_2_0_i25);
	}
	MR_r2 = (MR_Integer) 608;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__short_option_2_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,107)) {
		MR_GOTO_LAB(libs__options__short_option_2_0_i26);
	}
	MR_r2 = (MR_Integer) 606;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__short_option_2_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,108)) {
		MR_GOTO_LAB(libs__options__short_option_2_0_i27);
	}
	MR_r2 = (MR_Integer) 534;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__short_option_2_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,109)) {
		MR_GOTO_LAB(libs__options__short_option_2_0_i28);
	}
	MR_r2 = (MR_Integer) 605;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__short_option_2_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,110)) {
		MR_GOTO_LAB(libs__options__short_option_2_0_i29);
	}
	MR_r2 = (MR_Integer) 133;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__short_option_2_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,111)) {
		MR_GOTO_LAB(libs__options__short_option_2_0_i30);
	}
	MR_r2 = (MR_Integer) 527;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__short_option_2_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,112)) {
		MR_GOTO_LAB(libs__options__short_option_2_0_i31);
	}
	MR_r2 = (MR_Integer) 183;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__short_option_2_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,114)) {
		MR_GOTO_LAB(libs__options__short_option_2_0_i32);
	}
	MR_r2 = (MR_Integer) 607;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__short_option_2_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,115)) {
		MR_GOTO_LAB(libs__options__short_option_2_0_i33);
	}
	MR_r2 = (MR_Integer) 168;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__short_option_2_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,116)) {
		MR_GOTO_LAB(libs__options__short_option_2_0_i34);
	}
	MR_r2 = (MR_Integer) 95;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__short_option_2_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,118)) {
		MR_GOTO_LAB(libs__options__short_option_2_0_i35);
	}
	MR_r2 = (MR_Integer) 44;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__short_option_2_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,119)) {
		MR_GOTO_LAB(libs__options__short_option_2_0_i36);
	}
	MR_r2 = (MR_Integer) 0;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__short_option_2_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,120)) {
		MR_GOTO_LAB(libs__options__short_option_2_0_i1);
	}
	MR_r2 = (MR_Integer) 88;
	MR_r1 = MR_TRUE;
	MR_proceed();
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
	MR_init_label10(libs__options__long_option_2_0,3,4,5,6,7,8,9,10,11,12)
	MR_init_label10(libs__options__long_option_2_0,13,14,15,16,17,18,19,20,21,22)
	MR_init_label10(libs__options__long_option_2_0,23,24,25,26,27,28,29,30,31,32)
	MR_init_label10(libs__options__long_option_2_0,33,34,35,36,37,38,39,40,41,42)
	MR_init_label10(libs__options__long_option_2_0,43,44,45,46,47,48,49,50,51,52)
	MR_init_label10(libs__options__long_option_2_0,53,54,55,56,57,58,59,60,61,62)
	MR_init_label10(libs__options__long_option_2_0,63,64,65,66,67,68,69,70,71,72)
	MR_init_label10(libs__options__long_option_2_0,73,74,75,76,77,78,79,80,81,82)
	MR_init_label10(libs__options__long_option_2_0,83,84,85,86,87,88,89,90,91,92)
	MR_init_label10(libs__options__long_option_2_0,93,94,95,96,97,98,99,100,101,102)
	MR_init_label10(libs__options__long_option_2_0,103,104,105,106,107,108,109,110,111,112)
	MR_init_label10(libs__options__long_option_2_0,113,114,115,116,117,118,119,120,121,122)
	MR_init_label10(libs__options__long_option_2_0,123,124,125,126,127,128,129,130,131,132)
	MR_init_label10(libs__options__long_option_2_0,133,134,135,136,137,138,139,140,141,142)
	MR_init_label10(libs__options__long_option_2_0,143,144,145,146,147,148,149,150,151,152)
	MR_init_label10(libs__options__long_option_2_0,153,154,155,156,157,158,159,160,161,162)
	MR_init_label10(libs__options__long_option_2_0,163,164,165,166,167,168,169,170,171,172)
	MR_init_label10(libs__options__long_option_2_0,173,174,175,176,177,178,179,180,181,182)
	MR_init_label10(libs__options__long_option_2_0,183,184,185,186,187,188,189,190,191,192)
	MR_init_label10(libs__options__long_option_2_0,193,194,195,196,197,198,199,200,201,202)
	MR_init_label10(libs__options__long_option_2_0,203,204,205,206,207,208,209,210,211,212)
	MR_init_label10(libs__options__long_option_2_0,213,214,215,216,217,218,219,220,221,222)
	MR_init_label10(libs__options__long_option_2_0,223,224,225,226,227,228,229,230,231,232)
	MR_init_label10(libs__options__long_option_2_0,233,234,235,236,237,238,239,240,241,242)
	MR_init_label10(libs__options__long_option_2_0,243,244,245,246,247,248,249,250,251,252)
	MR_init_label10(libs__options__long_option_2_0,253,254,255,256,257,258,259,260,261,262)
	MR_init_label10(libs__options__long_option_2_0,263,264,265,266,267,268,269,270,271,272)
	MR_init_label10(libs__options__long_option_2_0,273,274,275,276,277,278,279,280,281,282)
	MR_init_label10(libs__options__long_option_2_0,283,284,285,286,287,288,289,290,291,292)
	MR_init_label10(libs__options__long_option_2_0,293,294,295,296,297,298,299,300,301,302)
	MR_init_label10(libs__options__long_option_2_0,303,304,305,306,307,308,309,310,311,312)
	MR_init_label10(libs__options__long_option_2_0,313,314,315,316,317,318,319,320,321,322)
	MR_init_label10(libs__options__long_option_2_0,323,324,325,326,327,328,329,330,331,332)
	MR_init_label10(libs__options__long_option_2_0,333,334,335,336,337,338,339,340,341,342)
	MR_init_label10(libs__options__long_option_2_0,343,344,345,346,347,348,349,350,351,352)
	MR_init_label10(libs__options__long_option_2_0,353,354,355,356,357,358,359,360,361,362)
	MR_init_label10(libs__options__long_option_2_0,363,364,365,366,367,368,369,370,371,372)
	MR_init_label10(libs__options__long_option_2_0,373,374,375,376,377,378,379,380,381,382)
	MR_init_label10(libs__options__long_option_2_0,383,384,385,386,387,388,389,390,391,392)
	MR_init_label10(libs__options__long_option_2_0,393,394,395,396,397,398,399,400,401,402)
	MR_init_label10(libs__options__long_option_2_0,403,404,405,406,407,408,409,410,411,412)
	MR_init_label10(libs__options__long_option_2_0,413,414,415,416,417,418,419,420,421,422)
	MR_init_label10(libs__options__long_option_2_0,423,424,425,426,427,428,429,430,431,432)
	MR_init_label10(libs__options__long_option_2_0,433,434,435,436,437,438,439,440,441,442)
	MR_init_label10(libs__options__long_option_2_0,443,444,445,446,447,448,449,450,451,452)
	MR_init_label10(libs__options__long_option_2_0,453,454,455,456,457,458,459,460,461,462)
	MR_init_label10(libs__options__long_option_2_0,463,464,465,466,467,468,469,470,471,472)
	MR_init_label10(libs__options__long_option_2_0,473,474,475,476,477,478,479,480,481,482)
	MR_init_label10(libs__options__long_option_2_0,483,484,485,486,487,488,489,490,491,492)
	MR_init_label10(libs__options__long_option_2_0,493,494,495,496,497,498,499,500,501,502)
	MR_init_label10(libs__options__long_option_2_0,503,504,505,506,507,508,509,510,511,512)
	MR_init_label10(libs__options__long_option_2_0,513,514,515,516,517,518,519,520,521,522)
	MR_init_label10(libs__options__long_option_2_0,523,524,525,526,527,528,529,530,531,532)
	MR_init_label10(libs__options__long_option_2_0,533,534,535,536,537,538,539,540,541,542)
	MR_init_label10(libs__options__long_option_2_0,543,544,545,546,547,548,549,550,551,552)
	MR_init_label10(libs__options__long_option_2_0,553,554,555,556,557,558,559,560,561,562)
	MR_init_label10(libs__options__long_option_2_0,563,564,565,566,567,568,569,570,571,572)
	MR_init_label10(libs__options__long_option_2_0,573,574,575,576,577,578,579,580,581,582)
	MR_init_label10(libs__options__long_option_2_0,583,584,585,586,587,588,589,590,591,592)
	MR_init_label10(libs__options__long_option_2_0,593,594,595,596,597,598,599,600,601,602)
	MR_init_label10(libs__options__long_option_2_0,603,604,605,606,607,608,609,610,611,612)
	MR_init_label10(libs__options__long_option_2_0,613,614,615,616,617,618,619,620,621,622)
	MR_init_label10(libs__options__long_option_2_0,623,624,625,626,627,628,629,630,631,632)
	MR_init_label10(libs__options__long_option_2_0,633,634,635,636,637,638,639,640,641,642)
	MR_init_label10(libs__options__long_option_2_0,643,644,645,646,647,648,649,650,651,652)
	MR_init_label10(libs__options__long_option_2_0,653,654,655,656,657,658,659,660,661,662)
	MR_init_label10(libs__options__long_option_2_0,663,664,665,666,667,668,669,670,671,672)
	MR_init_label10(libs__options__long_option_2_0,673,674,675,676,677,678,679,680,681,682)
	MR_init_label10(libs__options__long_option_2_0,683,684,685,686,687,688,689,690,691,692)
	MR_init_label10(libs__options__long_option_2_0,693,694,695,696,697,698,699,700,701,702)
	MR_init_label10(libs__options__long_option_2_0,703,704,705,706,707,708,709,710,711,712)
	MR_init_label10(libs__options__long_option_2_0,713,714,715,716,717,718,719,720,721,722)
	MR_init_label10(libs__options__long_option_2_0,723,724,725,726,727,728,729,730,731,732)
	MR_init_label10(libs__options__long_option_2_0,733,734,735,736,737,738,739,740,741,742)
	MR_init_label10(libs__options__long_option_2_0,743,744,745,746,747,748,749,750,751,752)
	MR_init_label10(libs__options__long_option_2_0,753,754,755,756,757,758,759,760,761,762)
	MR_init_label10(libs__options__long_option_2_0,763,764,765,766,767,768,769,770,771,772)
	MR_init_label10(libs__options__long_option_2_0,773,774,775,776,777,778,779,780,781,782)
	MR_init_label7(libs__options__long_option_2_0,783,784,785,786,787,788,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'long_option'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__libs__options__long_option_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("C#", 2)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i3);
	}
	MR_r2 = (MR_Integer) 175;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("cc", 2)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i4);
	}
	MR_r2 = (MR_Integer) 476;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("gc", 2)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i5);
	}
	MR_r2 = (MR_Integer) 210;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("il", 2)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i6);
	}
	MR_r2 = (MR_Integer) 170;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("ml", 2)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i7);
	}
	MR_r2 = (MR_Integer) 541;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("mld", 3)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i8);
	}
	MR_r2 = (MR_Integer) 537;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("pic", 3)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i9);
	}
	MR_r2 = (MR_Integer) 307;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("Java", 4)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i10);
	}
	MR_r2 = (MR_Integer) 173;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("ctgc", 4)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i11);
	}
	MR_r2 = (MR_Integer) 403;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("help", 4)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i12);
	}
	MR_r2 = (MR_Integer) 643;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("java", 4)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i13);
	}
	MR_r2 = (MR_Integer) 173;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("jobs", 4)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i14);
	}
	MR_r2 = (MR_Integer) 608;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("main", 4)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i15);
	}
	MR_r2 = (MR_Integer) 553;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("make", 4)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i16);
	}
	MR_r2 = (MR_Integer) 605;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("ssdb", 4)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i17);
	}
	MR_r2 = (MR_Integer) 227;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("tags", 4)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i18);
	}
	MR_r2 = (MR_Integer) 228;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("cflag", 5)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i19);
	}
	MR_r2 = (MR_Integer) 478;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("debug", 5)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i20);
	}
	MR_r2 = (MR_Integer) 181;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("flags", 5)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i21);
	}
	MR_r2 = (MR_Integer) 623;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("grade", 5)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i22);
	}
	MR_r2 = (MR_Integer) 168;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("javac", 5)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i23);
	}
	MR_r2 = (MR_Integer) 503;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("strip", 5)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i24);
	}
	MR_r2 = (MR_Integer) 551;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("trace", 5)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i25);
	}
	MR_r2 = (MR_Integer) 115;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("tuple", 5)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i26);
	}
	MR_r2 = (MR_Integer) 393;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("Erlang", 6)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i27);
	}
	MR_r2 = (MR_Integer) 179;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("ansi-c", 6)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i28);
	}
	MR_r2 = (MR_Integer) 481;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("cflags", 6)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i29);
	}
	MR_r2 = (MR_Integer) 477;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("csharp", 6)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i30);
	}
	MR_r2 = (MR_Integer) 175;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("erlang", 6)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i31);
	}
	MR_r2 = (MR_Integer) 179;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("target", 6)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i32);
	}
	MR_r2 = (MR_Integer) 169;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("x86-64", 6)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i33);
	}
	MR_r2 = (MR_Integer) 177;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("x86_64", 6)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i34);
	}
	MR_r2 = (MR_Integer) 177;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("C#-only", 7)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i35);
	}
	MR_r2 = (MR_Integer) 176;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("IL-only", 7)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i36);
	}
	MR_r2 = (MR_Integer) 171;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("c-debug", 7)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i37);
	}
	MR_r2 = (MR_Integer) 475;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("il-only", 7)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i38);
	}
	MR_r2 = (MR_Integer) 171;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("ld-flag", 7)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i39);
	}
	MR_r2 = (MR_Integer) 529;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("library", 7)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i40);
	}
	MR_r2 = (MR_Integer) 534;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("linkage", 7)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i41);
	}
	MR_r2 = (MR_Integer) 548;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("pic-reg", 7)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i42);
	}
	MR_r2 = (MR_Integer) 242;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("rebuild", 7)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i43);
	}
	MR_r2 = (MR_Integer) 607;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("untuple", 7)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i44);
	}
	MR_r2 = (MR_Integer) 392;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("verbose", 7)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i45);
	}
	MR_r2 = (MR_Integer) 44;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("version", 7)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i46);
	}
	MR_r2 = (MR_Integer) 644;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,46)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("chk-term", 8)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i47);
	}
	MR_r2 = (MR_Integer) 410;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,47)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("debug-pd", 8)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i48);
	}
	MR_r2 = (MR_Integer) 70;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,48)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("demangle", 8)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i49);
	}
	MR_r2 = (MR_Integer) 552;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,49)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("env-type", 8)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i50);
	}
	MR_r2 = (MR_Integer) 637;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,50)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("fullarch", 8)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i51);
	}
	MR_r2 = (MR_Integer) 645;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,51)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("gcc-flag", 8)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i52);
	}
	MR_r2 = (MR_Integer) 484;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,52)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("inlining", 8)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i53);
	}
	MR_r2 = (MR_Integer) 330;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,53)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("ld-flags", 8)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i54);
	}
	MR_r2 = (MR_Integer) 528;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,54)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("libgrade", 8)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i55);
	}
	MR_r2 = (MR_Integer) 619;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,55)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("make-int", 8)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i56);
	}
	MR_r2 = (MR_Integer) 83;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,56)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("math-lib", 8)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i57);
	}
	MR_r2 = (MR_Integer) 579;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,57)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("osv-loop", 8)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i58);
	}
	MR_r2 = (MR_Integer) 366;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,58)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("parallel", 8)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i59);
	}
	MR_r2 = (MR_Integer) 211;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,59)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("ss-debug", 8)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i60);
	}
	MR_r2 = (MR_Integer) 227;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,60)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("Java-only", 9)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i61);
	}
	MR_r2 = (MR_Integer) 174;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,61)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("chk-term2", 9)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i62);
	}
	MR_r2 = (MR_Integer) 417;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,62)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("debug-det", 9)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i63);
	}
	MR_r2 = (MR_Integer) 64;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,63)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("debug-opt", 9)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i64);
	}
	MR_r2 = (MR_Integer) 66;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,64)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("dump-hlds", 9)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i65);
	}
	MR_r2 = (MR_Integer) 140;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,65)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("dump-mlds", 9)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i66);
	}
	MR_r2 = (MR_Integer) 147;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,66)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("framework", 9)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i67);
	}
	MR_r2 = (MR_Integer) 558;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,67)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("gcc-flags", 9)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i68);
	}
	MR_r2 = (MR_Integer) 483;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,68)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("hlds-dump", 9)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i69);
	}
	MR_r2 = (MR_Integer) 140;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,69)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("infer-all", 9)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i70);
	}
	MR_r2 = (MR_Integer) 164;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,70)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("infer-det", 9)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i71);
	}
	MR_r2 = (MR_Integer) 163;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,71)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("init-file", 9)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i72);
	}
	MR_r2 = (MR_Integer) 545;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,72)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("java-flag", 9)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i73);
	}
	MR_r2 = (MR_Integer) 506;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,73)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("java-only", 9)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i74);
	}
	MR_r2 = (MR_Integer) 174;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,74)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("mlds-dump", 9)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i75);
	}
	MR_r2 = (MR_Integer) 147;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,75)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("msvc-flag", 9)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i76);
	}
	MR_r2 = (MR_Integer) 488;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,76)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("opt-level", 9)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i77);
	}
	MR_r2 = (MR_Integer) 318;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,77)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("opt-space", 9)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i78);
	}
	MR_r2 = (MR_Integer) 320;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,78)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("output-cc", 9)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i79);
	}
	MR_r2 = (MR_Integer) 104;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,79)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("profiling", 9)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i80);
	}
	MR_r2 = (MR_Integer) 183;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,80)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("term-norm", 9)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i81);
	}
	MR_r2 = (MR_Integer) 413;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,81)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("use-trail", 9)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i82);
	}
	MR_r2 = (MR_Integer) 213;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,82)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("asm-labels", 10)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i83);
	}
	MR_r2 = (MR_Integer) 241;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,83)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("c-optimise", 10)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i84);
	}
	MR_r2 = (MR_Integer) 480;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,84)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("c-optimize", 10)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i85);
	}
	MR_r2 = (MR_Integer) 480;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,85)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("check-term", 10)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i86);
	}
	MR_r2 = (MR_Integer) 410;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,86)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("clang-flag", 10)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i87);
	}
	MR_r2 = (MR_Integer) 486;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,87)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("debug-make", 10)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i88);
	}
	MR_r2 = (MR_Integer) 74;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,88)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("debug-term", 10)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i89);
	}
	MR_r2 = (MR_Integer) 67;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,89)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("decl-debug", 10)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i90);
	}
	MR_r2 = (MR_Integer) 182;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,90)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("experiment", 10)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i91);
	}
	MR_r2 = (MR_Integer) 650;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,91)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("flags-file", 10)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i92);
	}
	MR_r2 = (MR_Integer) 623;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,92)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("hwloc-libs", 10)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i93);
	}
	MR_r2 = (MR_Integer) 576;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,93)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("ilasm-flag", 10)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i94);
	}
	MR_r2 = (MR_Integer) 511;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,94)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("java-debug", 10)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i95);
	}
	MR_r2 = (MR_Integer) 475;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,95)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("java-flags", 10)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i96);
	}
	MR_r2 = (MR_Integer) 505;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,96)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("keep-going", 10)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i97);
	}
	MR_r2 = (MR_Integer) 606;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,97)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("ld-libflag", 10)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i98);
	}
	MR_r2 = (MR_Integer) 531;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,98)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("middle-rec", 10)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i99);
	}
	MR_r2 = (MR_Integer) 442;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,99)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("msvc-flags", 10)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i100);
	}
	MR_r2 = (MR_Integer) 487;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,100)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("simple-neg", 10)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i101);
	}
	MR_r2 = (MR_Integer) 443;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,101)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("statistics", 10)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i102);
	}
	MR_r2 = (MR_Integer) 54;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,102)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("term2-norm", 10)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i103);
	}
	MR_r2 = (MR_Integer) 419;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,103)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("trace-flag", 10)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i104);
	}
	MR_r2 = (MR_Integer) 123;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,104)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("trace-libs", 10)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i105);
	}
	MR_r2 = (MR_Integer) 574;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,105)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("trace-prof", 10)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i106);
	}
	MR_r2 = (MR_Integer) 117;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,106)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("verifiable", 10)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i107);
	}
	MR_r2 = (MR_Integer) 251;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,107)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("warn-stubs", 10)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i108);
	}
	MR_r2 = (MR_Integer) 28;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,108)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("Erlang-only", 11)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i109);
	}
	MR_r2 = (MR_Integer) 180;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,109)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("allow-stubs", 11)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i110);
	}
	MR_r2 = (MR_Integer) 160;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,110)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("check-term2", 11)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i111);
	}
	MR_r2 = (MR_Integer) 417;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,111)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("clang-flags", 11)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i112);
	}
	MR_r2 = (MR_Integer) 485;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,112)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("common-data", 11)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i113);
	}
	MR_r2 = (MR_Integer) 449;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,113)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("common-goal", 11)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i114);
	}
	MR_r2 = (MR_Integer) 342;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,114)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("config-file", 11)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i115);
	}
	MR_r2 = (MR_Integer) 625;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,115)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("csharp-flag", 11)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i116);
	}
	MR_r2 = (MR_Integer) 517;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,116)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("csharp-only", 11)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i117);
	}
	MR_r2 = (MR_Integer) 176;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,117)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("debug-modes", 11)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i118);
	}
	MR_r2 = (MR_Integer) 58;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,118)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("debug-types", 11)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i119);
	}
	MR_r2 = (MR_Integer) 57;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,119)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("delay-death", 11)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i120);
	}
	MR_r2 = (MR_Integer) 128;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,120)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("enable-term", 11)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i121);
	}
	MR_r2 = (MR_Integer) 409;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,121)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("erlang-flag", 11)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i122);
	}
	MR_r2 = (MR_Integer) 522;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,122)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("erlang-only", 11)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i123);
	}
	MR_r2 = (MR_Integer) 180;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,123)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("extra-inits", 11)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i124);
	}
	MR_r2 = (MR_Integer) 557;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,124)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("follow-code", 11)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i125);
	}
	MR_r2 = (MR_Integer) 381;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,125)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("highlevel-C", 11)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i126);
	}
	MR_r2 = (MR_Integer) 244;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,126)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("highlevel-c", 11)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i127);
	}
	MR_r2 = (MR_Integer) 244;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,127)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("ilasm-flags", 11)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i128);
	}
	MR_r2 = (MR_Integer) 510;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,128)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("infer-modes", 11)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i129);
	}
	MR_r2 = (MR_Integer) 162;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,129)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("infer-types", 11)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i130);
	}
	MR_r2 = (MR_Integer) 161;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,130)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("ld-libflags", 11)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i131);
	}
	MR_r2 = (MR_Integer) 530;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,131)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("lib-linkage", 11)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i132);
	}
	MR_r2 = (MR_Integer) 622;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,132)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("link-object", 11)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i133);
	}
	MR_r2 = (MR_Integer) 535;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,133)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("output-file", 11)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i134);
	}
	MR_r2 = (MR_Integer) 527;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,134)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("shared-libs", 11)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i135);
	}
	MR_r2 = (MR_Integer) 578;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,135)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("table-debug", 11)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i136);
	}
	MR_r2 = (MR_Integer) 294;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,136)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("thread-libs", 11)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i137);
	}
	MR_r2 = (MR_Integer) 575;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,137)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("track-flags", 11)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i138);
	}
	MR_r2 = (MR_Integer) 609;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,138)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("trad-passes", 11)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i139);
	}
	MR_r2 = (MR_Integer) 295;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,139)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("type-layout", 11)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i140);
	}
	MR_r2 = (MR_Integer) 219;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,140)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("use-regions", 11)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i141);
	}
	MR_r2 = (MR_Integer) 223;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,141)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("use-subdirs", 11)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i142);
	}
	MR_r2 = (MR_Integer) 627;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,142)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("x86-64-only", 11)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i143);
	}
	MR_r2 = (MR_Integer) 178;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,143)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("x86_64-only", 11)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i144);
	}
	MR_r2 = (MR_Integer) 178;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,144)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("assume-gmake", 12)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i145);
	}
	MR_r2 = (MR_Integer) 114;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,145)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("compile-only", 12)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i146);
	}
	MR_r2 = (MR_Integer) 98;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,146)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("compile-to-C", 12)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i147);
	}
	MR_r2 = (MR_Integer) 172;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,147)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("compile-to-c", 12)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i148);
	}
	MR_r2 = (MR_Integer) 172;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,148)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("csharp-flags", 12)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i149);
	}
	MR_r2 = (MR_Integer) 516;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,149)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("debug-il-asm", 12)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i150);
	}
	MR_r2 = (MR_Integer) 71;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,150)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("det-copy-out", 12)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i151);
	}
	MR_r2 = (MR_Integer) 247;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,151)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("emit-c-loops", 12)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i152);
	}
	MR_r2 = (MR_Integer) 470;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,152)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("enable-term2", 12)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i153);
	}
	MR_r2 = (MR_Integer) 416;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,153)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("erlang-flags", 12)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i154);
	}
	MR_r2 = (MR_Integer) 521;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,154)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("fully-strict", 12)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i155);
	}
	MR_r2 = (MR_Integer) 158;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,155)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("halt-at-warn", 12)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i156);
	}
	MR_r2 = (MR_Integer) 2;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,156)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("high-level-C", 12)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i157);
	}
	MR_r2 = (MR_Integer) 244;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,157)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("high-level-c", 12)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i158);
	}
	MR_r2 = (MR_Integer) 244;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,158)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("il-assembler", 12)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i159);
	}
	MR_r2 = (MR_Integer) 509;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,159)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("inline-alloc", 12)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i160);
	}
	MR_r2 = (MR_Integer) 482;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,160)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("intermod-opt", 12)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i161);
	}
	MR_r2 = (MR_Integer) 321;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,161)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("line-numbers", 12)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i162);
	}
	MR_r2 = (MR_Integer) 133;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,162)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("make-opt-int", 12)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i163);
	}
	MR_r2 = (MR_Integer) 85;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,163)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("make-xml-doc", 12)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i164);
	}
	MR_r2 = (MR_Integer) 88;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,164)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("num-tag-bits", 12)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i165);
	}
	MR_r2 = (MR_Integer) 229;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,165)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("options-file", 12)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i166);
	}
	MR_r2 = (MR_Integer) 624;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,166)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("osv-all-cand", 12)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i167);
	}
	MR_r2 = (MR_Integer) 377;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,167)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("osv-on-stack", 12)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i168);
	}
	MR_r2 = (MR_Integer) 368;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,168)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("osv-op-ratio", 12)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i169);
	}
	MR_r2 = (MR_Integer) 374;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,169)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("polymorphism", 12)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i170);
	}
	MR_r2 = (MR_Integer) 298;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,170)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("pretty-print", 12)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i171);
	}
	MR_r2 = (MR_Integer) 94;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,171)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("profile-deep", 12)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i172);
	}
	MR_r2 = (MR_Integer) 190;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,172)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("profile-time", 12)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i173);
	}
	MR_r2 = (MR_Integer) 188;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,173)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("ranlib-flags", 12)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i174);
	}
	MR_r2 = (MR_Integer) 569;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,174)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("reorder-conj", 12)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i175);
	}
	MR_r2 = (MR_Integer) 156;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,175)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("reorder-disj", 12)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i176);
	}
	MR_r2 = (MR_Integer) 157;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,176)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("target-debug", 12)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i177);
	}
	MR_r2 = (MR_Integer) 475;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,177)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("use-readline", 12)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i178);
	}
	MR_r2 = (MR_Integer) 555;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,178)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("use-symlinks", 12)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i179);
	}
	MR_r2 = (MR_Integer) 614;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,179)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("verbose-make", 12)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i180);
	}
	MR_r2 = (MR_Integer) 49;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,180)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("very-verbose", 12)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i181);
	}
	MR_r2 = (MR_Integer) 45;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,181)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("allow-hijacks", 13)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i182);
	}
	MR_r2 = (MR_Integer) 444;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,182)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("auto-comments", 13)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i183);
	}
	MR_r2 = (MR_Integer) 134;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,183)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("bits-per-word", 13)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i184);
	}
	MR_r2 = (MR_Integer) 232;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,184)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("c-include-dir", 13)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i185);
	}
	MR_r2 = (MR_Integer) 479;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,185)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("common-struct", 13)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i186);
	}
	MR_r2 = (MR_Integer) 340;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,186)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("debug-closure", 13)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i187);
	}
	MR_r2 = (MR_Integer) 75;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,187)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("deforestation", 13)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i188);
	}
	MR_r2 = (MR_Integer) 383;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,188)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("excess-assign", 13)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i189);
	}
	MR_r2 = (MR_Integer) 362;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,189)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("feedback-file", 13)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i190);
	}
	MR_r2 = (MR_Integer) 655;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,190)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("host-env-type", 13)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i191);
	}
	MR_r2 = (MR_Integer) 638;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,191)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("imports-graph", 13)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i192);
	}
	MR_r2 = (MR_Integer) 138;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,192)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("inline-simple", 13)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i193);
	}
	MR_r2 = (MR_Integer) 331;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,193)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("java-compiler", 13)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i194);
	}
	MR_r2 = (MR_Integer) 503;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,194)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("library-grade", 13)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i195);
	}
	MR_r2 = (MR_Integer) 619;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,195)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("llds-optimise", 13)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i196);
	}
	MR_r2 = (MR_Integer) 451;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,196)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("llds-optimize", 13)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i197);
	}
	MR_r2 = (MR_Integer) 451;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,197)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("make-priv-int", 13)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i198);
	}
	MR_r2 = (MR_Integer) 84;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,198)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("mlds-optimise", 13)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i199);
	}
	MR_r2 = (MR_Integer) 451;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,199)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("mlds-optimize", 13)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i200);
	}
	MR_r2 = (MR_Integer) 451;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,200)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("mlds-peephole", 13)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i201);
	}
	MR_r2 = (MR_Integer) 452;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,201)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("optimise-dups", 13)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i202);
	}
	MR_r2 = (MR_Integer) 462;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,202)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("optimise-peep", 13)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i203);
	}
	MR_r2 = (MR_Integer) 452;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,203)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("optimize-dups", 13)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i204);
	}
	MR_r2 = (MR_Integer) 462;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,204)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("optimize-peep", 13)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i205);
	}
	MR_r2 = (MR_Integer) 452;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,205)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("osv-cand-head", 13)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i206);
	}
	MR_r2 = (MR_Integer) 369;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,206)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("osv-full-path", 13)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i207);
	}
	MR_r2 = (MR_Integer) 367;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,207)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("output-cflags", 13)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i208);
	}
	MR_r2 = (MR_Integer) 107;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,208)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("prefer-switch", 13)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i209);
	}
	MR_r2 = (MR_Integer) 316;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,209)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("profile-calls", 13)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i210);
	}
	MR_r2 = (MR_Integer) 187;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,210)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("readline-libs", 13)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i211);
	}
	MR_r2 = (MR_Integer) 580;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,211)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("runtime-flags", 13)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i212);
	}
	MR_r2 = (MR_Integer) 556;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,212)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("sign-assembly", 13)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i213);
	}
	MR_r2 = (MR_Integer) 154;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,213)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("special-preds", 13)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i214);
	}
	MR_r2 = (MR_Integer) 269;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,214)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("track-options", 13)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i215);
	}
	MR_r2 = (MR_Integer) 609;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,215)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("unboxed-enums", 13)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i216);
	}
	MR_r2 = (MR_Integer) 236;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,216)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("unboxed-float", 13)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i217);
	}
	MR_r2 = (MR_Integer) 235;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,217)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("unneeded-code", 13)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i218);
	}
	MR_r2 = (MR_Integer) 350;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,218)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("use-opt-files", 13)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i219);
	}
	MR_r2 = (MR_Integer) 323;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,219)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("verb-chk-term", 13)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i220);
	}
	MR_r2 = (MR_Integer) 411;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,220)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("warn-obsolete", 13)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i221);
	}
	MR_r2 = (MR_Integer) 34;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,221)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("bytes-per-word", 14)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i222);
	}
	MR_r2 = (MR_Integer) 233;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,222)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("cflags-for-pic", 14)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i223);
	}
	MR_r2 = (MR_Integer) 496;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,223)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("debug-liveness", 14)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i224);
	}
	MR_r2 = (MR_Integer) 72;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,224)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("debug-type-rep", 14)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i225);
	}
	MR_r2 = (MR_Integer) 81;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,225)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("deep-profiling", 14)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i226);
	}
	MR_r2 = (MR_Integer) 186;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,226)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("disable-mm-cut", 14)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i227);
	}
	MR_r2 = (MR_Integer) 276;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,227)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("dump-same-hlds", 14)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i228);
	}
	MR_r2 = (MR_Integer) 146;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,228)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("highlevel-code", 14)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i229);
	}
	MR_r2 = (MR_Integer) 244;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,229)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("highlevel-data", 14)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i230);
	}
	MR_r2 = (MR_Integer) 245;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,230)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("install-prefix", 14)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i231);
	}
	MR_r2 = (MR_Integer) 613;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,231)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("java-classpath", 14)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i232);
	}
	MR_r2 = (MR_Integer) 507;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,232)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("make-interface", 14)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i233);
	}
	MR_r2 = (MR_Integer) 83;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,233)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("make-short-int", 14)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i234);
	}
	MR_r2 = (MR_Integer) 82;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,234)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("make-trans-opt", 14)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i235);
	}
	MR_r2 = (MR_Integer) 86;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,235)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("mkinit-command", 14)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i236);
	}
	MR_r2 = (MR_Integer) 570;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,236)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("num-real-temps", 14)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i237);
	}
	MR_r2 = (MR_Integer) 305;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,237)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("optimise-jumps", 14)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i238);
	}
	MR_r2 = (MR_Integer) 454;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,238)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("optimise-space", 14)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i239);
	}
	MR_r2 = (MR_Integer) 320;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,239)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("optimize-jumps", 14)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i240);
	}
	MR_r2 = (MR_Integer) 454;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,240)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("optimize-space", 14)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i241);
	}
	MR_r2 = (MR_Integer) 320;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,241)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("osv-node-ratio", 14)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i242);
	}
	MR_r2 = (MR_Integer) 375;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,242)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("output-cc-type", 14)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i243);
	}
	MR_r2 = (MR_Integer) 105;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,243)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("profile-memory", 14)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i244);
	}
	MR_r2 = (MR_Integer) 189;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,244)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("ranlib-command", 14)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i245);
	}
	MR_r2 = (MR_Integer) 568;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,245)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("smart-indexing", 14)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i246);
	}
	MR_r2 = (MR_Integer) 426;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,246)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("stack-segments", 14)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i247);
	}
	MR_r2 = (MR_Integer) 222;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,247)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("support-ms-clr", 14)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i248);
	}
	MR_r2 = (MR_Integer) 513;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,248)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("suppress-trace", 14)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i249);
	}
	MR_r2 = (MR_Integer) 126;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,249)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("sync-term-size", 14)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i250);
	}
	MR_r2 = (MR_Integer) 238;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,250)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("term-err-limit", 14)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i251);
	}
	MR_r2 = (MR_Integer) 414;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,251)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("time-profiling", 14)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i252);
	}
	MR_r2 = (MR_Integer) 184;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,252)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("trace-table-io", 14)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i253);
	}
	MR_r2 = (MR_Integer) 118;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,253)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("trail-segments", 14)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i254);
	}
	MR_r2 = (MR_Integer) 214;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,254)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("tuple-min-args", 14)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i255);
	}
	MR_r2 = (MR_Integer) 396;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,255)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("type-ctor-info", 14)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i256);
	}
	MR_r2 = (MR_Integer) 270;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,256)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("typecheck-only", 14)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i257);
	}
	MR_r2 = (MR_Integer) 95;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,257)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("use-local-vars", 14)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i258);
	}
	MR_r2 = (MR_Integer) 458;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,258)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("verb-chk-term2", 14)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i259);
	}
	MR_r2 = (MR_Integer) 418;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,259)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("allow-undefined", 15)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i260);
	}
	MR_r2 = (MR_Integer) 554;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,260)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("analysis-repeat", 15)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i261);
	}
	MR_r2 = (MR_Integer) 327;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,261)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("benchmark-modes", 15)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i262);
	}
	MR_r2 = (MR_Integer) 152;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,262)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("c-compiler-type", 15)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i263);
	}
	MR_r2 = (MR_Integer) 501;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,263)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("cflags-for-ansi", 15)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i264);
	}
	MR_r2 = (MR_Integer) 491;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,264)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("cflags-for-regs", 15)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i265);
	}
	MR_r2 = (MR_Integer) 492;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,265)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("cli-interpreter", 15)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i266);
	}
	MR_r2 = (MR_Integer) 518;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,266)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("cross-compiling", 15)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i267);
	}
	MR_r2 = (MR_Integer) 646;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,267)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("csharp-compiler", 15)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i268);
	}
	MR_r2 = (MR_Integer) 515;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,268)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("ctgc-constraint", 15)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i269);
	}
	MR_r2 = (MR_Integer) 404;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,269)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("debug-stack-opt", 15)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i270);
	}
	MR_r2 = (MR_Integer) 73;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,270)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("delay-construct", 15)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i271);
	}
	MR_r2 = (MR_Integer) 380;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,271)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("disable-mm-pneg", 15)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i272);
	}
	MR_r2 = (MR_Integer) 275;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,272)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("dump-hlds-alias", 15)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i273);
	}
	MR_r2 = (MR_Integer) 143;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,273)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("erlang-compiler", 15)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i274);
	}
	MR_r2 = (MR_Integer) 519;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,274)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("errorcheck-only", 15)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i275);
	}
	MR_r2 = (MR_Integer) 96;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,275)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("have-delay-slot", 15)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i276);
	}
	MR_r2 = (MR_Integer) 302;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,276)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("high-level-code", 15)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i277);
	}
	MR_r2 = (MR_Integer) 244;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,277)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("high-level-data", 15)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i278);
	}
	MR_r2 = (MR_Integer) 245;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,278)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("inform-inferred", 15)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i279);
	}
	MR_r2 = (MR_Integer) 41;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,279)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("inline-builtins", 15)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i280);
	}
	MR_r2 = (MR_Integer) 332;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,280)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("install-command", 15)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i281);
	}
	MR_r2 = (MR_Integer) 617;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,281)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("library-linkage", 15)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i282);
	}
	MR_r2 = (MR_Integer) 622;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,282)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("local-module-id", 15)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i283);
	}
	MR_r2 = (MR_Integer) 647;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,283)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("loop-invariants", 15)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i284);
	}
	MR_r2 = (MR_Integer) 379;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,284)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("low-level-debug", 15)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i285);
	}
	MR_r2 = (MR_Integer) 293;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,285)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("mercury-library", 15)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i286);
	}
	MR_r2 = (MR_Integer) 541;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,286)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("mercury-linkage", 15)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i287);
	}
	MR_r2 = (MR_Integer) 550;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,287)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("nondet-copy-out", 15)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i288);
	}
	MR_r2 = (MR_Integer) 248;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,288)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("num-real-f-regs", 15)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i289);
	}
	MR_r2 = (MR_Integer) 304;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,289)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("num-real-r-regs", 15)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i290);
	}
	MR_r2 = (MR_Integer) 303;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,290)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("optimise-frames", 15)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i291);
	}
	MR_r2 = (MR_Integer) 464;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,291)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("optimise-labels", 15)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i292);
	}
	MR_r2 = (MR_Integer) 461;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,292)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("optimise-repeat", 15)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i293);
	}
	MR_r2 = (MR_Integer) 467;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,293)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("optimize-frames", 15)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i294);
	}
	MR_r2 = (MR_Integer) 464;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,294)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("optimize-labels", 15)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i295);
	}
	MR_r2 = (MR_Integer) 461;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,295)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("optimize-repeat", 15)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i296);
	}
	MR_r2 = (MR_Integer) 467;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,296)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("osv-cvload-cost", 15)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i297);
	}
	MR_r2 = (MR_Integer) 371;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,297)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("osv-fvload-cost", 15)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i298);
	}
	MR_r2 = (MR_Integer) 373;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,298)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("region-analysis", 15)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i299);
	}
	MR_r2 = (MR_Integer) 400;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,299)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("show-make-times", 15)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i300);
	}
	MR_r2 = (MR_Integer) 634;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,300)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("structure-reuse", 15)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i301);
	}
	MR_r2 = (MR_Integer) 403;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,301)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("tag-switch-size", 15)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i302);
	}
	MR_r2 = (MR_Integer) 433;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,302)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("target-env-type", 15)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i303);
	}
	MR_r2 = (MR_Integer) 639;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,303)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("term-path-limit", 15)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i304);
	}
	MR_r2 = (MR_Integer) 415;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,304)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("term-single-arg", 15)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i305);
	}
	MR_r2 = (MR_Integer) 412;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,305)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("trace-init-file", 15)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i306);
	}
	MR_r2 = (MR_Integer) 546;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,306)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("trace-optimised", 15)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i307);
	}
	MR_r2 = (MR_Integer) 116;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,307)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("trace-optimized", 15)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i308);
	}
	MR_r2 = (MR_Integer) 116;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,308)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("try-switch-size", 15)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i309);
	}
	MR_r2 = (MR_Integer) 434;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,309)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("verb-check-term", 15)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i310);
	}
	MR_r2 = (MR_Integer) 411;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,310)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("verifiable-code", 15)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i311);
	}
	MR_r2 = (MR_Integer) 251;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,311)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("warn-dead-procs", 15)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i312);
	}
	MR_r2 = (MR_Integer) 29;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,312)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("warn-up-to-date", 15)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i313);
	}
	MR_r2 = (MR_Integer) 27;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,313)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("IL-funcptr-types", 16)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i314);
	}
	MR_r2 = (MR_Integer) 253;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,314)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("IL-refany-fields", 16)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i315);
	}
	MR_r2 = (MR_Integer) 252;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,315)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("agc-stack-layout", 16)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i316);
	}
	MR_r2 = (MR_Integer) 258;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,316)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("analyse-closures", 16)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i317);
	}
	MR_r2 = (MR_Integer) 425;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,317)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("cflags-for-debug", 16)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i318);
	}
	MR_r2 = (MR_Integer) 495;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,318)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("cflags-for-gotos", 16)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i319);
	}
	MR_r2 = (MR_Integer) 493;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,319)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("delay-constructs", 16)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i320);
	}
	MR_r2 = (MR_Integer) 380;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,320)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("demangle-command", 16)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i321);
	}
	MR_r2 = (MR_Integer) 572;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,321)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("extra-lib-header", 16)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i322);
	}
	MR_r2 = (MR_Integer) 635;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,322)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("filtercc-command", 16)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i323);
	}
	MR_r2 = (MR_Integer) 573;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,323)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("gcc-local-labels", 16)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i324);
	}
	MR_r2 = (MR_Integer) 315;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,324)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("il-funcptr-types", 16)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i325);
	}
	MR_r2 = (MR_Integer) 253;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,325)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("il-refany-fields", 16)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i326);
	}
	MR_r2 = (MR_Integer) 252;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,326)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("inhibit-warnings", 16)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i327);
	}
	MR_r2 = (MR_Integer) 0;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,327)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("inline-call-cost", 16)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i328);
	}
	MR_r2 = (MR_Integer) 334;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,328)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("java-interpreter", 16)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i329);
	}
	MR_r2 = (MR_Integer) 504;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,329)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("linker-path-flag", 16)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i330);
	}
	MR_r2 = (MR_Integer) 594;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,330)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("memory-profiling", 16)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i331);
	}
	MR_r2 = (MR_Integer) 185;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,331)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("mode-constraints", 16)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i332);
	}
	MR_r2 = (MR_Integer) 149;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,332)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("num-real-f-temps", 16)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i333);
	}
	MR_r2 = (MR_Integer) 306;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,333)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("num-real-r-temps", 16)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i334);
	}
	MR_r2 = (MR_Integer) 305;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,334)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("osv-cvstore-cost", 16)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i335);
	}
	MR_r2 = (MR_Integer) 370;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,335)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("osv-fvstore-cost", 16)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i336);
	}
	MR_r2 = (MR_Integer) 372;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,336)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("output-libgrades", 16)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i337);
	}
	MR_r2 = (MR_Integer) 103;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,337)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("par-loop-control", 16)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i338);
	}
	MR_r2 = (MR_Integer) 656;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,338)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("pre-link-command", 16)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i339);
	}
	MR_r2 = (MR_Integer) 612;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,339)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("search-directory", 16)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i340);
	}
	MR_r2 = (MR_Integer) 629;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,340)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("target-code-only", 16)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i341);
	}
	MR_r2 = (MR_Integer) 97;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,341)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("termination-norm", 16)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i342);
	}
	MR_r2 = (MR_Integer) 413;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,342)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("type-ctor-layout", 16)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i343);
	}
	MR_r2 = (MR_Integer) 271;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,343)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("use-atomic-cells", 16)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i344);
	}
	MR_r2 = (MR_Integer) 441;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,344)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("verb-check-term2", 16)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i345);
	}
	MR_r2 = (MR_Integer) 418;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,345)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("verbose-commands", 16)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i346);
	}
	MR_r2 = (MR_Integer) 50;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,346)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("warn-simple-code", 16)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i347);
	}
	MR_r2 = (MR_Integer) 19;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,347)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("warn-target-code", 16)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i348);
	}
	MR_r2 = (MR_Integer) 26;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,348)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("warn-unused-args", 16)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i349);
	}
	MR_r2 = (MR_Integer) 10;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,349)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("branch-delay-slot", 17)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i350);
	}
	MR_r2 = (MR_Integer) 302;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,350)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("check-termination", 17)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i351);
	}
	MR_r2 = (MR_Integer) 410;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,351)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("conf-low-tag-bits", 17)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i352);
	}
	MR_r2 = (MR_Integer) 234;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,352)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("debug-determinism", 17)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i353);
	}
	MR_r2 = (MR_Integer) 64;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,353)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("debug-opt-pred-id", 17)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i354);
	}
	MR_r2 = (MR_Integer) 68;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,354)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("debug-termination", 17)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i355);
	}
	MR_r2 = (MR_Integer) 67;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,355)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("debug-trail-usage", 17)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i356);
	}
	MR_r2 = (MR_Integer) 76;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,356)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("dense-switch-size", 17)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i357);
	}
	MR_r2 = (MR_Integer) 429;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,357)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("disable-trail-ops", 17)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i358);
	}
	MR_r2 = (MR_Integer) 279;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,358)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("dump-hlds-options", 17)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i359);
	}
	MR_r2 = (MR_Integer) 144;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,359)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("dump-hlds-pred-id", 17)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i360);
	}
	MR_r2 = (MR_Integer) 141;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,360)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("dump-trace-counts", 17)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i361);
	}
	MR_r2 = (MR_Integer) 139;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,361)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("frameopt-comments", 17)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i362);
	}
	MR_r2 = (MR_Integer) 135;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,362)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("generate-bytecode", 17)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i363);
	}
	MR_r2 = (MR_Integer) 132;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,363)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("generate-mmc-deps", 17)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i364);
	}
	MR_r2 = (MR_Integer) 113;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,364)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("hwloc-static-libs", 17)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i365);
	}
	MR_r2 = (MR_Integer) 577;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,365)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("infer-determinism", 17)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i366);
	}
	MR_r2 = (MR_Integer) 163;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,366)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("inline-single-use", 17)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i367);
	}
	MR_r2 = (MR_Integer) 333;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,367)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("libgrades-exclude", 17)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i368);
	}
	MR_r2 = (MR_Integer) 621;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,368)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("libgrades-include", 17)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i369);
	}
	MR_r2 = (MR_Integer) 620;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,369)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("library-directory", 17)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i370);
	}
	MR_r2 = (MR_Integer) 532;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,370)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("library-extension", 17)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i371);
	}
	MR_r2 = (MR_Integer) 561;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,371)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("linker-rpath-flag", 17)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i372);
	}
	MR_r2 = (MR_Integer) 595;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,372)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("linker-strip-flag", 17)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i373);
	}
	MR_r2 = (MR_Integer) 585;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,373)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("maybe-thread-safe", 17)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i374);
	}
	MR_r2 = (MR_Integer) 220;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,374)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("optimise-reassign", 17)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i375);
	}
	MR_r2 = (MR_Integer) 466;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,375)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("optimize-reassign", 17)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i376);
	}
	MR_r2 = (MR_Integer) 466;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,376)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("parallel-code-gen", 17)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i377);
	}
	MR_r2 = (MR_Integer) 297;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,377)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("parallel-liveness", 17)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i378);
	}
	MR_r2 = (MR_Integer) 296;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,378)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("profile-optimised", 17)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i379);
	}
	MR_r2 = (MR_Integer) 124;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,379)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("profile-optimized", 17)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i380);
	}
	MR_r2 = (MR_Integer) 124;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,380)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("rtti-line-numbers", 17)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i381);
	}
	MR_r2 = (MR_Integer) 274;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,381)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("single-prec-float", 17)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i382);
	}
	MR_r2 = (MR_Integer) 218;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,382)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("strict-sequential", 17)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i383);
	}
	MR_r2 = (MR_Integer) 159;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,383)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("structure-sharing", 17)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i384);
	}
	MR_r2 = (MR_Integer) 401;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,384)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("support-rotor-clr", 17)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i385);
	}
	MR_r2 = (MR_Integer) 514;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,385)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("termination2-norm", 17)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i386);
	}
	MR_r2 = (MR_Integer) 419;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,386)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("tuple-costs-ratio", 17)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i387);
	}
	MR_r2 = (MR_Integer) 395;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,387)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("use-alloc-regions", 17)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i388);
	}
	MR_r2 = (MR_Integer) 224;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,388)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("use-grade-subdirs", 17)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i389);
	}
	MR_r2 = (MR_Integer) 628;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,389)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("use-regions-debug", 17)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i390);
	}
	MR_r2 = (MR_Integer) 225;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,390)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("verbose-dump-mlds", 17)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i391);
	}
	MR_r2 = (MR_Integer) 148;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,391)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("verbose-mlds-dump", 17)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i392);
	}
	MR_r2 = (MR_Integer) 148;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,392)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("IL-byref-tailcalls", 18)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i393);
	}
	MR_r2 = (MR_Integer) 254;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,393)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("analyse-exceptions", 18)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i394);
	}
	MR_r2 = (MR_Integer) 424;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,394)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("analyse-mm-tabling", 18)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i395);
	}
	MR_r2 = (MR_Integer) 391;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,395)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("basic-stack-layout", 18)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i396);
	}
	MR_r2 = (MR_Integer) 257;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,396)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("binary-switch-size", 18)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i397);
	}
	MR_r2 = (MR_Integer) 435;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,397)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("cflags-for-threads", 18)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i398);
	}
	MR_r2 = (MR_Integer) 494;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,398)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("check-termination2", 18)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i399);
	}
	MR_r2 = (MR_Integer) 417;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,399)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("common-layout-data", 18)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i400);
	}
	MR_r2 = (MR_Integer) 450;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,400)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("convert-to-Mercury", 18)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i401);
	}
	MR_r2 = (MR_Integer) 94;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,401)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("convert-to-mercury", 18)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i402);
	}
	MR_r2 = (MR_Integer) 94;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,402)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("coverage-profiling", 18)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i403);
	}
	MR_r2 = (MR_Integer) 194;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,403)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("debug-dep-par-conj", 18)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i404);
	}
	MR_r2 = (MR_Integer) 63;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,404)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("enable-termination", 18)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i405);
	}
	MR_r2 = (MR_Integer) 409;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,405)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("erlang-include-dir", 18)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i406);
	}
	MR_r2 = (MR_Integer) 523;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,406)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("erlang-interpreter", 18)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i407);
	}
	MR_r2 = (MR_Integer) 520;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,407)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("erlang-native-code", 18)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i408);
	}
	MR_r2 = (MR_Integer) 525;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,408)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("extra-init-command", 18)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i409);
	}
	MR_r2 = (MR_Integer) 611;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,409)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("garbage-collection", 18)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i410);
	}
	MR_r2 = (MR_Integer) 210;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,410)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("il-byref-tailcalls", 18)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i411);
	}
	MR_r2 = (MR_Integer) 254;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,411)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("intermod-directory", 18)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i412);
	}
	MR_r2 = (MR_Integer) 630;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,412)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("linker-debug-flags", 18)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i413);
	}
	MR_r2 = (MR_Integer) 590;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,413)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("linker-trace-flags", 18)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i414);
	}
	MR_r2 = (MR_Integer) 592;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,414)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("lookup-switch-size", 18)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i415);
	}
	MR_r2 = (MR_Integer) 430;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,415)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("mercury-config-dir", 18)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i416);
	}
	MR_r2 = (MR_Integer) 616;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,416)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("mercury-stdlib-dir", 18)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i417);
	}
	MR_r2 = (MR_Integer) 543;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,417)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("mkinit-erl-command", 18)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i418);
	}
	MR_r2 = (MR_Integer) 571;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,418)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("optimisation-level", 18)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i419);
	}
	MR_r2 = (MR_Integer) 318;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,419)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("optimise-fulljumps", 18)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i420);
	}
	MR_r2 = (MR_Integer) 455;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,420)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("optimise-proc-dups", 18)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i421);
	}
	MR_r2 = (MR_Integer) 463;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,421)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("optimise-tailcalls", 18)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i422);
	}
	MR_r2 = (MR_Integer) 445;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,422)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("optimization-level", 18)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i423);
	}
	MR_r2 = (MR_Integer) 318;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,423)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("optimize-fulljumps", 18)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i424);
	}
	MR_r2 = (MR_Integer) 455;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,424)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("optimize-proc-dups", 18)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i425);
	}
	MR_r2 = (MR_Integer) 463;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,425)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("optimize-tailcalls", 18)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i426);
	}
	MR_r2 = (MR_Integer) 445;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,426)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("standardise-labels", 18)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i427);
	}
	MR_r2 = (MR_Integer) 460;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,427)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("standardize-labels", 18)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i428);
	}
	MR_r2 = (MR_Integer) 460;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,428)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("string-switch-size", 18)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i429);
	}
	MR_r2 = (MR_Integer) 431;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,429)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("trace-stack-layout", 18)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i430);
	}
	MR_r2 = (MR_Integer) 260;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,430)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("trace-table-io-all", 18)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i431);
	}
	MR_r2 = (MR_Integer) 122;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,431)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("trans-intermod-opt", 18)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i432);
	}
	MR_r2 = (MR_Integer) 325;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,432)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("type-ctor-functors", 18)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i433);
	}
	MR_r2 = (MR_Integer) 272;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,433)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("analyse-trail-usage", 19)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i434);
	}
	MR_r2 = (MR_Integer) 388;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,434)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("analysis-file-cache", 19)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i435);
	}
	MR_r2 = (MR_Integer) 328;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,435)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("c-include-directory", 19)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i436);
	}
	MR_r2 = (MR_Integer) 479;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,436)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("cflags-for-warnings", 19)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i437);
	}
	MR_r2 = (MR_Integer) 489;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,437)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("common-struct-preds", 19)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i438);
	}
	MR_r2 = (MR_Integer) 341;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,438)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("control-granularity", 19)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i439);
	}
	MR_r2 = (MR_Integer) 652;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,439)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("ctgc-constraint-arg", 19)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i440);
	}
	MR_r2 = (MR_Integer) 405;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,440)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("debug-modes-minimal", 19)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i441);
	}
	MR_r2 = (MR_Integer) 60;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,441)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("debug-modes-pred-id", 19)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i442);
	}
	MR_r2 = (MR_Integer) 62;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,442)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("debug-modes-verbose", 19)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i443);
	}
	MR_r2 = (MR_Integer) 61;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,443)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("debug-opt-pred-name", 19)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i444);
	}
	MR_r2 = (MR_Integer) 69;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,444)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("detailed-statistics", 19)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i445);
	}
	MR_r2 = (MR_Integer) 55;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,445)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("dump-hlds-pred-name", 19)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i446);
	}
	MR_r2 = (MR_Integer) 142;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,446)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("enable-termination2", 19)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i447);
	}
	MR_r2 = (MR_Integer) 416;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,447)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("event-set-file-name", 19)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i448);
	}
	MR_r2 = (MR_Integer) 167;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,448)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("exec-trace-tail-rec", 19)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i449);
	}
	MR_r2 = (MR_Integer) 125;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,449)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("framework-directory", 19)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i450);
	}
	MR_r2 = (MR_Integer) 559;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,450)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("gcc-non-local-gotos", 19)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i451);
	}
	MR_r2 = (MR_Integer) 239;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,451)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("init-file-directory", 19)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i452);
	}
	MR_r2 = (MR_Integer) 544;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,452)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("inline-par-builtins", 19)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i453);
	}
	MR_r2 = (MR_Integer) 397;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,453)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("invoked-by-mmc-make", 19)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i454);
	}
	MR_r2 = (MR_Integer) 610;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,454)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("java-export-ref-out", 19)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i455);
	}
	MR_r2 = (MR_Integer) 649;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,455)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("linker-static-flags", 19)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i456);
	}
	MR_r2 = (MR_Integer) 584;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,456)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("linker-thread-flags", 19)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i457);
	}
	MR_r2 = (MR_Integer) 582;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,457)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("max-jump-table-size", 19)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i458);
	}
	MR_r2 = (MR_Integer) 308;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,458)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("minimal-model-debug", 19)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i459);
	}
	MR_r2 = (MR_Integer) 217;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,459)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("new-type-class-rtti", 19)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i460);
	}
	MR_r2 = (MR_Integer) 273;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,460)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("opt-no-return-calls", 19)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i461);
	}
	MR_r2 = (MR_Integer) 317;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,461)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("optimise-dead-procs", 19)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i462);
	}
	MR_r2 = (MR_Integer) 382;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,462)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("optimise-delay-slot", 19)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i463);
	}
	MR_r2 = (MR_Integer) 465;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,463)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("optimise-saved-vars", 19)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i464);
	}
	MR_r2 = (MR_Integer) 378;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,464)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("optimize-dead-procs", 19)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i465);
	}
	MR_r2 = (MR_Integer) 382;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,465)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("optimize-delay-slot", 19)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i466);
	}
	MR_r2 = (MR_Integer) 465;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,466)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("optimize-region-ops", 19)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i467);
	}
	MR_r2 = (MR_Integer) 390;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,467)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("optimize-saved-vars", 19)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i468);
	}
	MR_r2 = (MR_Integer) 378;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,468)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("output-grade-string", 19)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i469);
	}
	MR_r2 = (MR_Integer) 100;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,469)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("output-link-command", 19)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i470);
	}
	MR_r2 = (MR_Integer) 101;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,470)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("pessimize-tailcalls", 19)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i471);
	}
	MR_r2 = (MR_Integer) 456;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,471)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("procid-stack-layout", 19)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i472);
	}
	MR_r2 = (MR_Integer) 259;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,472)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("separate-assemblies", 19)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i473);
	}
	MR_r2 = (MR_Integer) 155;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,473)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("smart-recompilation", 19)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i474);
	}
	MR_r2 = (MR_Integer) 111;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,474)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("static-ground-terms", 19)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i475);
	}
	MR_r2 = (MR_Integer) 438;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,475)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("type-specialisation", 19)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i476);
	}
	MR_r2 = (MR_Integer) 354;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,476)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("type-specialization", 19)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i477);
	}
	MR_r2 = (MR_Integer) 354;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,477)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("unneeded-code-debug", 19)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i478);
	}
	MR_r2 = (MR_Integer) 352;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,478)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("use-float-registers", 19)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i479);
	}
	MR_r2 = (MR_Integer) 243;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,479)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("use-trans-opt-files", 19)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i480);
	}
	MR_r2 = (MR_Integer) 324;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,480)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("warn-unused-imports", 19)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i481);
	}
	MR_r2 = (MR_Integer) 36;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,481)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("csharp-compiler-type", 20)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i482);
	}
	MR_r2 = (MR_Integer) 502;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,482)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("debug-indirect-reuse", 20)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i483);
	}
	MR_r2 = (MR_Integer) 80;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,483)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("delay-death-max-vars", 20)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i484);
	}
	MR_r2 = (MR_Integer) 129;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,484)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("distance-granularity", 20)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i485);
	}
	MR_r2 = (MR_Integer) 653;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,485)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("eliminate-local-vars", 20)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i486);
	}
	MR_r2 = (MR_Integer) 447;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,486)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("extra-library-header", 20)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i487);
	}
	MR_r2 = (MR_Integer) 635;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,487)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("filenames-from-stdin", 20)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i488);
	}
	MR_r2 = (MR_Integer) 640;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,488)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("gcc-global-registers", 20)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i489);
	}
	MR_r2 = (MR_Integer) 240;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,489)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("gcc-nested-functions", 20)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i490);
	}
	MR_r2 = (MR_Integer) 246;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,490)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("implicit-parallelism", 20)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i491);
	}
	MR_r2 = (MR_Integer) 654;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,491)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("intermod-unused-args", 20)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i492);
	}
	MR_r2 = (MR_Integer) 346;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,492)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("intermodule-analysis", 20)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i493);
	}
	MR_r2 = (MR_Integer) 326;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,493)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("java-archive-command", 20)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i494);
	}
	MR_r2 = (MR_Integer) 604;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,494)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("linker-link-lib-flag", 20)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i495);
	}
	MR_r2 = (MR_Integer) 586;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,495)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("linker-opt-separator", 20)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i496);
	}
	MR_r2 = (MR_Integer) 581;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,496)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("make-short-interface", 20)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i497);
	}
	MR_r2 = (MR_Integer) 82;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,497)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("max-error-line-width", 20)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i498);
	}
	MR_r2 = (MR_Integer) 136;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,498)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("mutable-always-boxed", 20)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i499);
	}
	MR_r2 = (MR_Integer) 266;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,499)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("num-reserved-objects", 20)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i500);
	}
	MR_r2 = (MR_Integer) 231;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,500)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("optimise-peep-mkword", 20)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i501);
	}
	MR_r2 = (MR_Integer) 453;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,501)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("optimise-unused-args", 20)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i502);
	}
	MR_r2 = (MR_Integer) 345;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,502)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("optimize-peep-mkword", 20)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i503);
	}
	MR_r2 = (MR_Integer) 453;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,503)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("optimize-trail-usage", 20)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i504);
	}
	MR_r2 = (MR_Integer) 389;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,504)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("optimize-unused-args", 20)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i505);
	}
	MR_r2 = (MR_Integer) 345;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,505)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("output-grade-defines", 20)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i506);
	}
	MR_r2 = (MR_Integer) 109;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,506)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("proc-size-statistics", 20)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i507);
	}
	MR_r2 = (MR_Integer) 56;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,507)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("procs-per-C-function", 20)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i508);
	}
	MR_r2 = (MR_Integer) 471;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,508)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("procs-per-c-function", 20)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i509);
	}
	MR_r2 = (MR_Integer) 471;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,509)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("profile-for-feedback", 20)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i510);
	}
	MR_r2 = (MR_Integer) 203;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,510)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("report-cmd-line-args", 20)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i511);
	}
	MR_r2 = (MR_Integer) 52;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,511)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("search-lib-files-dir", 20)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i512);
	}
	MR_r2 = (MR_Integer) 539;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,512)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("term2-widening-limit", 20)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i513);
	}
	MR_r2 = (MR_Integer) 420;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,513)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("unboxed-no-tag-types", 20)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i514);
	}
	MR_r2 = (MR_Integer) 237;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,514)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("warn-duplicate-calls", 20)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i515);
	}
	MR_r2 = (MR_Integer) 20;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,515)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("compile-to-shared-lib", 21)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i516);
	}
	MR_r2 = (MR_Integer) 99;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,516)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("dump-hlds-file-suffix", 21)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i517);
	}
	MR_r2 = (MR_Integer) 145;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,517)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("force-disable-ssdebug", 21)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i518);
	}
	MR_r2 = (MR_Integer) 131;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,518)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("force-disable-tracing", 21)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i519);
	}
	MR_r2 = (MR_Integer) 127;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,519)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("generate-dependencies", 21)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i520);
	}
	MR_r2 = (MR_Integer) 91;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,520)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("generate-module-order", 21)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i521);
	}
	MR_r2 = (MR_Integer) 92;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,521)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("halt-at-syntax-errors", 21)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i522);
	}
	MR_r2 = (MR_Integer) 3;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,522)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("inform-inferred-modes", 21)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i523);
	}
	MR_r2 = (MR_Integer) 43;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,523)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("inform-inferred-types", 21)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i524);
	}
	MR_r2 = (MR_Integer) 42;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,524)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("inline-vars-threshold", 21)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i525);
	}
	MR_r2 = (MR_Integer) 337;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,525)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("object-file-extension", 21)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i526);
	}
	MR_r2 = (MR_Integer) 498;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,526)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("optimise-higher-order", 21)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i527);
	}
	MR_r2 = (MR_Integer) 347;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,527)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("optimize-format-calls", 21)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i528);
	}
	MR_r2 = (MR_Integer) 363;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,528)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("optimize-higher-order", 21)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i529);
	}
	MR_r2 = (MR_Integer) 347;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,529)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("prop-mode-constraints", 21)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i530);
	}
	MR_r2 = (MR_Integer) 151;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,530)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("show-dependency-graph", 21)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i531);
	}
	MR_r2 = (MR_Integer) 137;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,531)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("size-region-ite-fixed", 21)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i532);
	}
	MR_r2 = (MR_Integer) 280;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,532)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("solver-type-auto-init", 21)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i533);
	}
	MR_r2 = (MR_Integer) 289;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,533)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("term2-max-matrix-size", 21)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i534);
	}
	MR_r2 = (MR_Integer) 423;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,534)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("trace-table-io-states", 21)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i535);
	}
	MR_r2 = (MR_Integer) 120;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,535)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("use-activation-counts", 21)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i536);
	}
	MR_r2 = (MR_Integer) 191;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,536)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("use-regions-profiling", 21)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i537);
	}
	MR_r2 = (MR_Integer) 226;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,537)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("verbose-recompilation", 21)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i538);
	}
	MR_r2 = (MR_Integer) 47;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,538)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("warn-nothing-exported", 21)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i539);
	}
	MR_r2 = (MR_Integer) 9;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,539)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("allow-argument-packing", 22)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i540);
	}
	MR_r2 = (MR_Integer) 292;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,540)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("allow-defn-of-builtins", 22)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i541);
	}
	MR_r2 = (MR_Integer) 268;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,541)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("analyse-local-closures", 22)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i542);
	}
	MR_r2 = (MR_Integer) 425;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,542)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("arg-size-analysis-only", 22)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i543);
	}
	MR_r2 = (MR_Integer) 421;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,543)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("benchmark-modes-repeat", 22)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i544);
	}
	MR_r2 = (MR_Integer) 153;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,544)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("body-typeinfo-liveness", 22)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i545);
	}
	MR_r2 = (MR_Integer) 261;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,545)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("compare-specialization", 22)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i546);
	}
	MR_r2 = (MR_Integer) 311;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,546)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("constraint-propagation", 22)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i547);
	}
	MR_r2 = (MR_Integer) 343;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,547)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("create-archive-command", 22)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i548);
	}
	MR_r2 = (MR_Integer) 565;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,548)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("debug-code-gen-pred-id", 22)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i549);
	}
	MR_r2 = (MR_Integer) 65;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,549)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("debug-mode-constraints", 22)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i550);
	}
	MR_r2 = (MR_Integer) 77;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,550)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("debug-modes-statistics", 22)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i551);
	}
	MR_r2 = (MR_Integer) 59;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,551)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("dotnet-library-version", 22)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i552);
	}
	MR_r2 = (MR_Integer) 512;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,552)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("higher-order-arg-limit", 22)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i553);
	}
	MR_r2 = (MR_Integer) 349;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,553)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("introduce-accumulators", 22)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i554);
	}
	MR_r2 = (MR_Integer) 356;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,554)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("libgrade-install-check", 22)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i555);
	}
	MR_r2 = (MR_Integer) 632;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,555)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("linker-link-lib-suffix", 22)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i556);
	}
	MR_r2 = (MR_Integer) 587;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,556)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("linker-rpath-separator", 22)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i557);
	}
	MR_r2 = (MR_Integer) 596;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,557)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("make-analysis-registry", 22)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i558);
	}
	MR_r2 = (MR_Integer) 87;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,558)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("make-private-interface", 22)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i559);
	}
	MR_r2 = (MR_Integer) 84;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,559)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("make-xml-documentation", 22)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i560);
	}
	MR_r2 = (MR_Integer) 88;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,560)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("num-reserved-addresses", 22)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i561);
	}
	MR_r2 = (MR_Integer) 230;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,561)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("osv-allpath-node-ratio", 22)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i562);
	}
	MR_r2 = (MR_Integer) 376;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,562)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("output-c-compiler-type", 22)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i563);
	}
	MR_r2 = (MR_Integer) 105;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,563)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("put-commit-in-own-func", 22)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i564);
	}
	MR_r2 = (MR_Integer) 249;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,564)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("put-nondet-env-on-heap", 22)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i565);
	}
	MR_r2 = (MR_Integer) 250;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,565)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("single-precision-float", 22)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i566);
	}
	MR_r2 = (MR_Integer) 218;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,566)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("size-region-disj-fixed", 22)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i567);
	}
	MR_r2 = (MR_Integer) 281;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,567)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("source-to-source-debug", 22)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i568);
	}
	MR_r2 = (MR_Integer) 227;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,568)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("structure-reuse-repeat", 22)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i569);
	}
	MR_r2 = (MR_Integer) 407;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,569)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("termination-path-limit", 22)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i570);
	}
	MR_r2 = (MR_Integer) 415;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,570)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("trace-table-io-require", 22)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i571);
	}
	MR_r2 = (MR_Integer) 121;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,571)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("type-check-constraints", 22)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i572);
	}
	MR_r2 = (MR_Integer) 291;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,572)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("verbose-error-messages", 22)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i573);
	}
	MR_r2 = (MR_Integer) 46;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,573)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("warn-det-decls-too-lax", 22)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i574);
	}
	MR_r2 = (MR_Integer) 7;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,574)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("warn-interface-imports", 22)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i575);
	}
	MR_r2 = (MR_Integer) 11;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,575)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("warn-missing-opt-files", 22)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i576);
	}
	MR_r2 = (MR_Integer) 12;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,576)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("warn-table-with-inline", 22)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i577);
	}
	MR_r2 = (MR_Integer) 30;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,577)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("warn-wrong-module-name", 22)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i578);
	}
	MR_r2 = (MR_Integer) 22;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,578)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("analysis-file-cache-dir", 23)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i579);
	}
	MR_r2 = (MR_Integer) 648;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,579)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("bug-intermod-2002-06-13", 23)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i580);
	}
	MR_r2 = (MR_Integer) 649;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,580)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("bug-intermod-2006-09-28", 23)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i581);
	}
	MR_r2 = (MR_Integer) 649;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,581)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("cflags-for-optimization", 23)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i582);
	}
	MR_r2 = (MR_Integer) 490;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,582)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("experimental-complexity", 23)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i583);
	}
	MR_r2 = (MR_Integer) 209;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,583)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("foreign-enum-switch-fix", 23)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i584);
	}
	MR_r2 = (MR_Integer) 649;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,584)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("higher-order-size-limit", 23)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i585);
	}
	MR_r2 = (MR_Integer) 348;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,585)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("ignore-par-conjunctions", 23)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i586);
	}
	MR_r2 = (MR_Integer) 651;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,586)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("inline-simple-threshold", 23)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i587);
	}
	MR_r2 = (MR_Integer) 336;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,587)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("link-executable-command", 23)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i588);
	}
	MR_r2 = (MR_Integer) 563;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,588)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("link-shared-lib-command", 23)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i589);
	}
	MR_r2 = (MR_Integer) 564;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,589)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("order-make-by-timestamp", 23)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i590);
	}
	MR_r2 = (MR_Integer) 633;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,590)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("reclaim-heap-on-failure", 23)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i591);
	}
	MR_r2 = (MR_Integer) 299;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,591)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("restricted-command-line", 23)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i592);
	}
	MR_r2 = (MR_Integer) 636;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,592)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("shlib-linker-rpath-flag", 23)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i593);
	}
	MR_r2 = (MR_Integer) 597;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,593)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("should-pretest-equality", 23)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i594);
	}
	MR_r2 = (MR_Integer) 312;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,594)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("simple-mode-constraints", 23)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i595);
	}
	MR_r2 = (MR_Integer) 150;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,595)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("size-region-ite-protect", 23)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i596);
	}
	MR_r2 = (MR_Integer) 284;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,596)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("string-hash-switch-size", 23)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i597);
	}
	MR_r2 = (MR_Integer) 431;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,597)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("termination-error-limit", 23)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i598);
	}
	MR_r2 = (MR_Integer) 414;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,598)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("tuple-trace-counts-file", 23)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i599);
	}
	MR_r2 = (MR_Integer) 394;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,599)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("use-macro-for-redo-fail", 23)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i600);
	}
	MR_r2 = (MR_Integer) 469;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,600)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("warn-inferred-erroneous", 23)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i601);
	}
	MR_r2 = (MR_Integer) 8;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,601)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("warn-non-stratification", 23)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i602);
	}
	MR_r2 = (MR_Integer) 17;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,602)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("warn-non-tail-recursion", 23)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i603);
	}
	MR_r2 = (MR_Integer) 25;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,603)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("warn-overlapping-scopes", 23)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i604);
	}
	MR_r2 = (MR_Integer) 6;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,604)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("allow-multi-arm-switches", 24)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i605);
	}
	MR_r2 = (MR_Integer) 290;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,605)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("checked-nondet-tailcalls", 24)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i606);
	}
	MR_r2 = (MR_Integer) 457;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,606)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("dense-switch-req-density", 24)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i607);
	}
	MR_r2 = (MR_Integer) 427;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,607)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("erlang-include-directory", 24)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i608);
	}
	MR_r2 = (MR_Integer) 523;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,608)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("generate-dependency-file", 24)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i609);
	}
	MR_r2 = (MR_Integer) 90;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,609)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("intermodule-optimisation", 24)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i610);
	}
	MR_r2 = (MR_Integer) 321;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,610)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("intermodule-optimization", 24)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i611);
	}
	MR_r2 = (MR_Integer) 321;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,611)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("java-generics-2010-04-13", 24)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i612);
	}
	MR_r2 = (MR_Integer) 649;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,612)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("layout-compression-limit", 24)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i613);
	}
	MR_r2 = (MR_Integer) 468;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,613)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("local-thread-engine-base", 24)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i614);
	}
	MR_r2 = (MR_Integer) 473;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,614)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("optimise-duplicate-calls", 24)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i615);
	}
	MR_r2 = (MR_Integer) 360;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,615)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("optimise-initializations", 24)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i616);
	}
	MR_r2 = (MR_Integer) 446;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,616)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("optimise-saved-vars-cell", 24)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i617);
	}
	MR_r2 = (MR_Integer) 365;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,617)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("optimize-duplicate-calls", 24)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i618);
	}
	MR_r2 = (MR_Integer) 360;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,618)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("optimize-initializations", 24)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i619);
	}
	MR_r2 = (MR_Integer) 446;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,619)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("optimize-saved-vars-cell", 24)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i620);
	}
	MR_r2 = (MR_Integer) 365;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,620)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("options-search-directory", 24)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i621);
	}
	MR_r2 = (MR_Integer) 626;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,621)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("shared-library-extension", 24)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i622);
	}
	MR_r2 = (MR_Integer) 560;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,622)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("shlib-linker-debug-flags", 24)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i623);
	}
	MR_r2 = (MR_Integer) 591;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,623)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("shlib-linker-trace-flags", 24)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i624);
	}
	MR_r2 = (MR_Integer) 593;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,624)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("size-region-commit-entry", 24)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i625);
	}
	MR_r2 = (MR_Integer) 288;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,625)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("size-region-commit-fixed", 24)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i626);
	}
	MR_r2 = (MR_Integer) 283;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,626)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("size-region-ite-snapshot", 24)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i627);
	}
	MR_r2 = (MR_Integer) 285;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,627)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("stack-trace-higher-order", 24)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i628);
	}
	MR_r2 = (MR_Integer) 130;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,628)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("unneeded-code-copy-limit", 24)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i629);
	}
	MR_r2 = (MR_Integer) 351;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,629)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("warn-missing-module-name", 24)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i630);
	}
	MR_r2 = (MR_Integer) 21;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,630)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("warn-singleton-variables", 24)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i631);
	}
	MR_r2 = (MR_Integer) 5;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,631)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("warn-smart-recompilation", 24)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i632);
	}
	MR_r2 = (MR_Integer) 23;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,632)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("warn-state-var-shadowing", 24)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i633);
	}
	MR_r2 = (MR_Integer) 40;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,633)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("backend-foreign-languages", 25)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i634);
	}
	MR_r2 = (MR_Integer) 255;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,634)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("coverage-profiling-static", 25)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i635);
	}
	MR_r2 = (MR_Integer) 196;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,635)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("debug-mm-tabling-analysis", 25)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i636);
	}
	MR_r2 = (MR_Integer) 79;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,636)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("deforestation-cost-factor", 25)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i637);
	}
	MR_r2 = (MR_Integer) 385;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,637)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("deforestation-depth-limit", 25)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i638);
	}
	MR_r2 = (MR_Integer) 384;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,638)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("executable-file-extension", 25)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i639);
	}
	MR_r2 = (MR_Integer) 562;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,639)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("extend-stacks-when-needed", 25)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i640);
	}
	MR_r2 = (MR_Integer) 221;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,640)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("fact-table-max-array-size", 25)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i641);
	}
	MR_r2 = (MR_Integer) 313;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,641)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("generate-trail-ops-inline", 25)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i642);
	}
	MR_r2 = (MR_Integer) 448;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,642)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("inline-compound-threshold", 25)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i643);
	}
	MR_r2 = (MR_Integer) 335;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,643)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("lookup-switch-req-density", 25)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i644);
	}
	MR_r2 = (MR_Integer) 428;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,644)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("mercury-library-directory", 25)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i645);
	}
	MR_r2 = (MR_Integer) 537;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,645)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("optimise-saved-vars-const", 25)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i646);
	}
	MR_r2 = (MR_Integer) 364;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,646)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("optimize-saved-vars-const", 25)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i647);
	}
	MR_r2 = (MR_Integer) 364;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,647)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("output-library-link-flags", 25)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i648);
	}
	MR_r2 = (MR_Integer) 108;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,648)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("pic-object-file-extension", 25)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i649);
	}
	MR_r2 = (MR_Integer) 499;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,649)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("runtime-library-directory", 25)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i650);
	}
	MR_r2 = (MR_Integer) 533;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,650)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("shlib-linker-thread-flags", 25)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i651);
	}
	MR_r2 = (MR_Integer) 583;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,651)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("size-region-disj-snapshot", 25)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i652);
	}
	MR_r2 = (MR_Integer) 287;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,652)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("string-binary-switch-size", 25)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i653);
	}
	MR_r2 = (MR_Integer) 432;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,653)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("trace-table-io-only-retry", 25)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i654);
	}
	MR_r2 = (MR_Integer) 119;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,654)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("use-zeroing-for-ho-cycles", 25)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i655);
	}
	MR_r2 = (MR_Integer) 204;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,655)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("verbose-check-termination", 25)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i656);
	}
	MR_r2 = (MR_Integer) 411;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,656)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("warn-unknown-format-calls", 25)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i657);
	}
	MR_r2 = (MR_Integer) 33;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,657)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("c-flag-to-name-object-file", 26)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i658);
	}
	MR_r2 = (MR_Integer) 497;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,658)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("debug-intermodule-analysis", 26)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i659);
	}
	MR_r2 = (MR_Integer) 78;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,659)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("from-ground-term-threshold", 26)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i660);
	}
	MR_r2 = (MR_Integer) 339;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,660)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("install-command-dir-option", 26)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i661);
	}
	MR_r2 = (MR_Integer) 618;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,661)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("java-object-file-extension", 26)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i662);
	}
	MR_r2 = (MR_Integer) 508;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,662)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("local-var-access-threshold", 26)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i663);
	}
	MR_r2 = (MR_Integer) 459;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,663)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("output-c-include-dir-flags", 26)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i664);
	}
	MR_r2 = (MR_Integer) 110;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,664)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("output-compile-error-lines", 26)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i665);
	}
	MR_r2 = (MR_Integer) 51;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,665)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("propagate-mode-constraints", 26)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i666);
	}
	MR_r2 = (MR_Integer) 151;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,666)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("record-term-sizes-as-cells", 26)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i667);
	}
	MR_r2 = (MR_Integer) 208;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,667)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("record-term-sizes-as-words", 26)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i668);
	}
	MR_r2 = (MR_Integer) 207;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,668)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("shlib-linker-link-lib-flag", 26)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i669);
	}
	MR_r2 = (MR_Integer) 588;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,669)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("structure-reuse-constraint", 26)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i670);
	}
	MR_r2 = (MR_Integer) 404;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,670)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("structure-reuse-free-cells", 26)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i671);
	}
	MR_r2 = (MR_Integer) 408;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,671)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("structure-sharing-widening", 26)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i672);
	}
	MR_r2 = (MR_Integer) 402;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,672)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("verbose-check-termination2", 26)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i673);
	}
	MR_r2 = (MR_Integer) 418;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,673)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("allow-some-paths-only-waits", 27)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i674);
	}
	MR_r2 = (MR_Integer) 399;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,674)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("can-compare-compound-values", 27)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i675);
	}
	MR_r2 = (MR_Integer) 264;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,675)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("deep-profile-tail-recursion", 27)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i676);
	}
	MR_r2 = (MR_Integer) 206;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,676)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("libgrades-exclude-component", 27)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i677);
	}
	MR_r2 = (MR_Integer) 621;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,677)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("libgrades-include-component", 27)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i678);
	}
	MR_r2 = (MR_Integer) 620;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,678)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("linker-allow-undefined-flag", 27)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i679);
	}
	MR_r2 = (MR_Integer) 599;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,679)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("linker-error-undefined-flag", 27)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i680);
	}
	MR_r2 = (MR_Integer) 600;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,680)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("make-optimisation-interface", 27)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i681);
	}
	MR_r2 = (MR_Integer) 85;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,681)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("make-optimization-interface", 27)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i682);
	}
	MR_r2 = (MR_Integer) 85;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,682)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("output-csharp-compiler-type", 27)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i683);
	}
	MR_r2 = (MR_Integer) 106;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,683)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("read-config-file-2003-03-01", 27)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i684);
	}
	MR_r2 = (MR_Integer) 649;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,684)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("read-opt-files-transitively", 27)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i685);
	}
	MR_r2 = (MR_Integer) 322;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,685)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("switch-multi-rec-base-first", 27)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i686);
	}
	MR_r2 = (MR_Integer) 437;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,686)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("termination2-widening-limit", 27)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i687);
	}
	MR_r2 = (MR_Integer) 420;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,687)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("warn-known-bad-format-calls", 27)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i688);
	}
	MR_r2 = (MR_Integer) 32;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,688)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("warn-missing-trans-opt-deps", 27)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i689);
	}
	MR_r2 = (MR_Integer) 14;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,689)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("warn-non-contiguous-clauses", 27)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i690);
	}
	MR_r2 = (MR_Integer) 15;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,690)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("warn-non-term-special-preds", 27)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i691);
	}
	MR_r2 = (MR_Integer) 31;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,691)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("coverage-profiling-via-calls", 28)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i692);
	}
	MR_r2 = (MR_Integer) 195;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,692)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("create-archive-command-flags", 28)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i693);
	}
	MR_r2 = (MR_Integer) 567;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,693)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("deforestation-size-threshold", 28)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i694);
	}
	MR_r2 = (MR_Integer) 387;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,694)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("deforestation-vars-threshold", 28)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i695);
	}
	MR_r2 = (MR_Integer) 386;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,695)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("delay-partial-instantiations", 28)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i696);
	}
	MR_r2 = (MR_Integer) 267;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,696)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("erlang-object-file-extension", 28)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i697);
	}
	MR_r2 = (MR_Integer) 524;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,697)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("everything-in-one-C-function", 28)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i698);
	}
	MR_r2 = (MR_Integer) 472;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,698)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("everything-in-one-c-function", 28)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i699);
	}
	MR_r2 = (MR_Integer) 472;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,699)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("fact-table-hash-percent-full", 28)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i700);
	}
	MR_r2 = (MR_Integer) 314;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,700)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("generate-source-file-mapping", 28)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i701);
	}
	MR_r2 = (MR_Integer) 89;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,701)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("inform-ite-instead-of-switch", 28)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i702);
	}
	MR_r2 = (MR_Integer) 37;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,702)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("inhibit-accumulator-warnings", 28)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i703);
	}
	MR_r2 = (MR_Integer) 1;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,703)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("install-opt-files-2002-08-30", 28)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i704);
	}
	MR_r2 = (MR_Integer) 649;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,704)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("lexically-order-constructors", 28)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i705);
	}
	MR_r2 = (MR_Integer) 265;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,705)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("local-constraint-propagation", 28)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i706);
	}
	MR_r2 = (MR_Integer) 344;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,706)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("pre-prof-transforms-simplify", 28)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i707);
	}
	MR_r2 = (MR_Integer) 192;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,707)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("shlib-linker-link-lib-suffix", 28)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i708);
	}
	MR_r2 = (MR_Integer) 589;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,708)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("shlib-linker-rpath-separator", 28)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i709);
	}
	MR_r2 = (MR_Integer) 598;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,709)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("switch-single-rec-base-first", 28)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i710);
	}
	MR_r2 = (MR_Integer) 436;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,710)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("trace-io-builtins-2006-08-14", 28)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i711);
	}
	MR_r2 = (MR_Integer) 649;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,711)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("use-minimal-model-own-stacks", 28)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i712);
	}
	MR_r2 = (MR_Integer) 216;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,712)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("use-minimal-model-stack-copy", 28)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i713);
	}
	MR_r2 = (MR_Integer) 215;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,713)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("warn-missing-trans-opt-files", 28)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i714);
	}
	MR_r2 = (MR_Integer) 13;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,714)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("warn-unresolved-polymorphism", 28)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i715);
	}
	MR_r2 = (MR_Integer) 38;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,715)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("bug-foreign_import-2002-08-06", 29)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i716);
	}
	MR_r2 = (MR_Integer) 649;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,716)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("can-compare-constants-as-ints", 29)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i717);
	}
	MR_r2 = (MR_Integer) 262;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,717)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("generate-standalone-interface", 29)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i718);
	}
	MR_r2 = (MR_Integer) 93;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,718)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("halt-at-auto-parallel-failure", 29)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i719);
	}
	MR_r2 = (MR_Integer) 4;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,719)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("optimise-constant-propagation", 29)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i720);
	}
	MR_r2 = (MR_Integer) 361;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,720)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("optimize-constant-propagation", 29)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i721);
	}
	MR_r2 = (MR_Integer) 361;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,721)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("shlib-linker-use-install-name", 29)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i722);
	}
	MR_r2 = (MR_Integer) 601;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,722)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("size-region-semi-disj-protect", 29)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i723);
	}
	MR_r2 = (MR_Integer) 286;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,723)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("unneeded-code-debug-pred-name", 29)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i724);
	}
	MR_r2 = (MR_Integer) 353;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,724)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("use-lots-of-ho-specialization", 29)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i725);
	}
	MR_r2 = (MR_Integer) 205;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,725)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("warn-suspicious-foreign-procs", 29)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i726);
	}
	MR_r2 = (MR_Integer) 39;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,726)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("extra-initialization-functions", 30)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i727);
	}
	MR_r2 = (MR_Integer) 557;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,727)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("find-all-recompilation-reasons", 30)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i728);
	}
	MR_r2 = (MR_Integer) 48;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,728)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("mode-inference-iteration-limit", 30)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i729);
	}
	MR_r2 = (MR_Integer) 166;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,729)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("optimise-constructor-last-call", 30)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i730);
	}
	MR_r2 = (MR_Integer) 359;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,730)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("optimize-constructor-last-call", 30)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i731);
	}
	MR_r2 = (MR_Integer) 359;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,731)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("output-shared-lib-link-command", 30)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i732);
	}
	MR_r2 = (MR_Integer) 102;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,732)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("pretest-equality-cast-pointers", 30)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i733);
	}
	MR_r2 = (MR_Integer) 263;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,733)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("reclaim-heap-on-nondet-failure", 30)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i734);
	}
	MR_r2 = (MR_Integer) 301;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,734)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("report-cmd-line-args-in-doterr", 30)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i735);
	}
	MR_r2 = (MR_Integer) 53;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,735)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("search-library-files-directory", 30)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i736);
	}
	MR_r2 = (MR_Integer) 539;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,736)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("shlib-linker-install-name-flag", 30)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i737);
	}
	MR_r2 = (MR_Integer) 602;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,737)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("shlib-linker-install-name-path", 30)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i738);
	}
	MR_r2 = (MR_Integer) 603;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,738)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("store-at-ref-impure-2008-09-11", 30)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i739);
	}
	MR_r2 = (MR_Integer) 649;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,739)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("structure-reuse-constraint-arg", 30)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i740);
	}
	MR_r2 = (MR_Integer) 405;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,740)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("structure-reuse-max-conditions", 30)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i741);
	}
	MR_r2 = (MR_Integer) 406;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,741)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("type-inference-iteration-limit", 30)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i742);
	}
	MR_r2 = (MR_Integer) 165;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,742)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("typecheck-ambiguity-warn-limit", 30)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i743);
	}
	MR_r2 = (MR_Integer) 641;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,743)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("erlang-inhibit-trivial-warnings", 31)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i744);
	}
	MR_r2 = (MR_Integer) 526;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,744)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("mercury-configuration-directory", 31)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i745);
	}
	MR_r2 = (MR_Integer) 616;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,745)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("reclaim-heap-on-semidet-failure", 31)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i746);
	}
	MR_r2 = (MR_Integer) 300;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,746)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("term2-propagate-failure-constrs", 31)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i747);
	}
	MR_r2 = (MR_Integer) 422;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,747)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("typecheck-ambiguity-error-limit", 31)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i748);
	}
	MR_r2 = (MR_Integer) 642;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,748)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("user-guided-type-specialisation", 31)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i749);
	}
	MR_r2 = (MR_Integer) 355;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,749)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("user-guided-type-specialization", 31)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i750);
	}
	MR_r2 = (MR_Integer) 355;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,750)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("warn-unification-cannot-succeed", 31)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i751);
	}
	MR_r2 = (MR_Integer) 18;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,751)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("intermod-inline-simple-threshold", 32)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i752);
	}
	MR_r2 = (MR_Integer) 338;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,752)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("no-noncompact-ho-call-2004-01-15", 32)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i753);
	}
	MR_r2 = (MR_Integer) 649;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,753)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("output-c-include-directory-flags", 32)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i754);
	}
	MR_r2 = (MR_Integer) 110;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,754)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("profile-deep-coverage-after-goal", 32)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i755);
	}
	MR_r2 = (MR_Integer) 197;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,755)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("profile-deep-coverage-branch-ite", 32)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i756);
	}
	MR_r2 = (MR_Integer) 198;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,756)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("profile-for-implicit-parallelism", 32)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i757);
	}
	MR_r2 = (MR_Integer) 203;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,757)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("termination2-maximum-matrix-size", 32)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i758);
	}
	MR_r2 = (MR_Integer) 423;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,758)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("warn-insts-without-matching-type", 32)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i759);
	}
	MR_r2 = (MR_Integer) 35;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,759)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("warn-undefined-options-variables", 32)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i760);
	}
	MR_r2 = (MR_Integer) 24;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,760)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("erlang-switch-on-strings-as-atoms", 33)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i761);
	}
	MR_r2 = (MR_Integer) 474;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,761)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("pre-implicit-parallelism-simplify", 33)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i762);
	}
	MR_r2 = (MR_Integer) 193;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,762)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("profile-deep-coverage-branch-disj", 33)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i763);
	}
	MR_r2 = (MR_Integer) 200;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,763)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("profile-deep-coverage-use-trivial", 33)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i764);
	}
	MR_r2 = (MR_Integer) 202;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,764)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("warn-non-contiguous-foreign-procs", 33)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i765);
	}
	MR_r2 = (MR_Integer) 16;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,765)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("always-specialize-in-dep-par-conjs", 34)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i766);
	}
	MR_r2 = (MR_Integer) 398;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,766)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("create-archive-command-output-flag", 34)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i767);
	}
	MR_r2 = (MR_Integer) 566;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,767)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("failing-disjunct-in-switch-dup-fix", 34)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i768);
	}
	MR_r2 = (MR_Integer) 649;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,768)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("mercury-standard-library-directory", 34)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i769);
	}
	MR_r2 = (MR_Integer) 543;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,769)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("link-with-pic-object-file-extension", 35)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i770);
	}
	MR_r2 = (MR_Integer) 500;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,770)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("optimise-constructor-last-call-null", 35)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i771);
	}
	MR_r2 = (MR_Integer) 358;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,771)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("optimize-constructor-last-call-null", 35)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i772);
	}
	MR_r2 = (MR_Integer) 358;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,772)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("profile-deep-coverage-branch-switch", 35)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i773);
	}
	MR_r2 = (MR_Integer) 199;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,773)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("term2-propagate-failure-constraints", 35)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i774);
	}
	MR_r2 = (MR_Integer) 422;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,774)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("transitive-intermodule-optimisation", 35)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i775);
	}
	MR_r2 = (MR_Integer) 325;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,775)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("transitive-intermodule-optimization", 35)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i776);
	}
	MR_r2 = (MR_Integer) 325;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,776)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("use-search-directories-for-intermod", 35)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i777);
	}
	MR_r2 = (MR_Integer) 631;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,777)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("compound-compare-builtins-2007-07-09", 36)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i778);
	}
	MR_r2 = (MR_Integer) 649;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,778)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("profile-deep-coverage-use-portcounts", 36)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i779);
	}
	MR_r2 = (MR_Integer) 201;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,779)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("termination-single-argument-analysis", 36)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i780);
	}
	MR_r2 = (MR_Integer) 412;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,780)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("fixed-user-guided-type-specialization", 37)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i781);
	}
	MR_r2 = (MR_Integer) 355;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,781)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("generate-mmc-make-module-dependencies", 37)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i782);
	}
	MR_r2 = (MR_Integer) 113;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,782)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("make-transitive-optimisation-interface", 38)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i783);
	}
	MR_r2 = (MR_Integer) 86;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,783)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("make-transitive-optimization-interface", 38)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i784);
	}
	MR_r2 = (MR_Integer) 86;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,784)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("par-loop-control-preserve-tail-recursion", 40)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i785);
	}
	MR_r2 = (MR_Integer) 657;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,785)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("no-det-warning-compound-compare-2007-07-17", 42)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i786);
	}
	MR_r2 = (MR_Integer) 649;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,786)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("optimise-constructor-last-call-accumulator", 42)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i787);
	}
	MR_r2 = (MR_Integer) 357;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,787)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("optimize-constructor-last-call-accumulator", 42)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i788);
	}
	MR_r2 = (MR_Integer) 357;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,788)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("termination2-propagate-failure-constraints", 42)) != 0)) {
		MR_GOTO_LAB(libs__options__long_option_2_0_i1);
	}
	MR_r2 = (MR_Integer) 422;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__long_option_2_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(libs__options_module2)
	MR_init_entry1(libs__options__option_defaults_2_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__libs__options__option_defaults_2_2_0);
	MR_init_label10(libs__options__option_defaults_2_2_0,3,4,5,6,7,8,9,10,11,12)
	MR_init_label3(libs__options__option_defaults_2_2_0,13,14,15)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'option_defaults_2'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(libs__options__option_defaults_2_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,3)) {
		MR_GOTO_LAB(libs__options__option_defaults_2_2_0_i3);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(1,2,44);
	MR_proceed();
MR_def_label(libs__options__option_defaults_2_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,12)) {
		MR_GOTO_LAB(libs__options__option_defaults_2_2_0_i4);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(1,2,79);
	MR_proceed();
MR_def_label(libs__options__option_defaults_2_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,7)) {
		MR_GOTO_LAB(libs__options__option_defaults_2_2_0_i5);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(1,2,104);
	MR_proceed();
MR_def_label(libs__options__option_defaults_2_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,5)) {
		MR_GOTO_LAB(libs__options__option_defaults_2_2_0_i6);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(1,2,191);
	MR_proceed();
MR_def_label(libs__options__option_defaults_2_2_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,6)) {
		MR_GOTO_LAB(libs__options__option_defaults_2_2_0_i7);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(1,2,228);
	MR_proceed();
MR_def_label(libs__options__option_defaults_2_2_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,4)) {
		MR_GOTO_LAB(libs__options__option_defaults_2_2_0_i8);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(1,2,240);
	MR_proceed();
MR_def_label(libs__options__option_defaults_2_2_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,11)) {
		MR_GOTO_LAB(libs__options__option_defaults_2_2_0_i9);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(1,2,318);
	MR_proceed();
MR_def_label(libs__options__option_defaults_2_2_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,13)) {
		MR_GOTO_LAB(libs__options__option_defaults_2_2_0_i10);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(1,2,336);
	MR_proceed();
MR_def_label(libs__options__option_defaults_2_2_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,9)) {
		MR_GOTO_LAB(libs__options__option_defaults_2_2_0_i11);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(1,2,453);
	MR_proceed();
MR_def_label(libs__options__option_defaults_2_2_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,2)) {
		MR_GOTO_LAB(libs__options__option_defaults_2_2_0_i12);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(1,2,482);
	MR_proceed();
MR_def_label(libs__options__option_defaults_2_2_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,8)) {
		MR_GOTO_LAB(libs__options__option_defaults_2_2_0_i13);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(1,2,522);
	MR_proceed();
MR_def_label(libs__options__option_defaults_2_2_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,10)) {
		MR_GOTO_LAB(libs__options__option_defaults_2_2_0_i14);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(1,2,574);
	MR_proceed();
MR_def_label(libs__options__option_defaults_2_2_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(libs__options__option_defaults_2_2_0_i15);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(1,2,612);
	MR_proceed();
MR_def_label(libs__options__option_defaults_2_2_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(1,2,656);
	MR_proceed();
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
	MR_tempr1 = (MR_Word) &MR_tfield(0, (MR_Word *) &mercury_vector_common_1_0, 0);
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
	MR_tempr1 = (MR_Word) &MR_tfield(0, (MR_Word *) &mercury_vector_common_1_0, (MR_Integer) MR_r3);
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
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,6,0);
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
	MR_sv(5) = (MR_Word) MR_TAG_COMMON(0,6,1);
	MR_sv(6) = (MR_Word) MR_TAG_COMMON(0,6,2);
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
	MR_tfield(0, MR_tempr1, 0) = (MR_Integer) 629;
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
	MR_tfield(0, MR_tempr1, 0) = (MR_Integer) 479;
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
	MR_tfield(0, MR_tempr1, 0) = (MR_Integer) 523;
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = (MR_Integer) 536;
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
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,8,0);
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
	MR_tfield(0, MR_tempr1, 0) = (MR_Integer) 629;
	MR_tfield(0, MR_tempr1, 1) = MR_r2;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = (MR_Integer) 479;
	MR_tfield(0, MR_tempr2, 1) = MR_r2;
	MR_tag_alloc_heap(MR_tempr3, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr3, 0) = (MR_Integer) 523;
	MR_tfield(0, MR_tempr3, 1) = MR_r2;
	MR_tag_alloc_heap(MR_tempr4, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr4, 0) = (MR_Integer) 538;
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
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,6,1);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,6,2);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,8,1);
	MR_r5 = MR_tempr1;
	MR_np_tailcall_ent(fn__list__foldl_3_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(map__set_4_0);

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
	MR_np_call_localret_ent(map__set_4_0,
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
	MR_init_label8(libs__options__opt_level_3_0,3,15,4,22,23,24,25,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'opt_level'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(libs__options__opt_level_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(libs__options__opt_level_3_0_i3);
	}
	MR_r2 = (MR_Word) MR_TAG_COMMON(1,2,667);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__opt_level_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(libs__options__opt_level_3_0_i4);
	}
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = (MR_Word) MR_TAG_COMMON(0,1,673);
	MR_sv(2) = (MR_Word) MR_TAG_COMMON(0,1,674);
	MR_sv(3) = (MR_Word) MR_TAG_COMMON(0,1,675);
	MR_sv(4) = (MR_Word) MR_TAG_COMMON(1,2,670);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(libs__options, option);
	MR_r3 = (MR_Integer) 302;
	MR_np_call_localret_ent(getopt_io__lookup_bool_option_3_0,
		libs__options__opt_level_3_0_i15);
MR_def_label(libs__options__opt_level_3_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = (MR_Integer) 465;
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
MR_def_label(libs__options__opt_level_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,2)) {
		MR_GOTO_LAB(libs__options__opt_level_3_0_i22);
	}
	MR_r2 = (MR_Word) MR_TAG_COMMON(1,2,681);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__opt_level_3_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,3)) {
		MR_GOTO_LAB(libs__options__opt_level_3_0_i23);
	}
	MR_r2 = (MR_Word) MR_TAG_COMMON(1,2,689);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__opt_level_3_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,4)) {
		MR_GOTO_LAB(libs__options__opt_level_3_0_i24);
	}
	MR_r2 = (MR_Word) MR_TAG_COMMON(1,2,692);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__opt_level_3_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,5)) {
		MR_GOTO_LAB(libs__options__opt_level_3_0_i25);
	}
	MR_r2 = (MR_Word) MR_TAG_COMMON(1,2,698);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__opt_level_3_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,6)) {
		MR_GOTO_LAB(libs__options__opt_level_3_0_i1);
	}
	MR_r2 = (MR_Word) MR_TAG_COMMON(1,2,701);
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

MR_decl_entry(require__unexpected_3_0);

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
	MR_r1 = (MR_Word) MR_string_const("libs.options", 12);
	MR_r2 = (MR_Word) MR_string_const("predicate \140libs.options.enable_opt_levels\'/4", 44);
	MR_r3 = (MR_Word) MR_string_const("unknown optimization level", 26);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(require__unexpected_3_0);
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
	MR_r1 = (MR_Word) MR_TAG_COMMON(1,2,711);
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
	break;
	} /* end while */
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
	MR_init_label10(fn__libs__options__quote_arg_1_0,4,10,12,13,11,50,7,2,20,21)
	MR_init_label10(fn__libs__options__quote_arg_1_0,23,28,34,35,36,37,32,39,30,26)
	MR_init_label3(fn__libs__options__quote_arg_1_0,41,42,43)
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
	MR_GOTO_LAB(fn__libs__options__quote_arg_1_0_i50);
MR_def_label(fn__libs__options__quote_arg_1_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_redoip_slot_word(MR_maxfr) = MR_sv(2);
	MR_redofr_slot_word(MR_maxfr) = MR_sv(3);
	if ((strcmp((char *) (MR_Word *) MR_sv(1), MR_string_const("", 0)) != 0)) {
		MR_GOTO_LAB(fn__libs__options__quote_arg_1_0_i7);
	}
MR_def_label(fn__libs__options__quote_arg_1_0,50)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = (MR_Word) MR_string_const("\"", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__libs__options__quote_arg_1_0_i43);
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
	if (MR_INT_NE(MR_r1,44)) {
		MR_GOTO_LAB(fn__libs__options__quote_arg_1_0_i34);
	}
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_r3;
	MR_GOTO(MR_ENTRY(MR_do_redo));
MR_def_label(fn__libs__options__quote_arg_1_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,45)) {
		MR_GOTO_LAB(fn__libs__options__quote_arg_1_0_i35);
	}
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_r3;
	MR_GOTO(MR_ENTRY(MR_do_redo));
MR_def_label(fn__libs__options__quote_arg_1_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,46)) {
		MR_GOTO_LAB(fn__libs__options__quote_arg_1_0_i36);
	}
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_r3;
	MR_GOTO(MR_ENTRY(MR_do_redo));
MR_def_label(fn__libs__options__quote_arg_1_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,47)) {
		MR_GOTO_LAB(fn__libs__options__quote_arg_1_0_i37);
	}
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_r3;
	MR_GOTO(MR_ENTRY(MR_do_redo));
MR_def_label(fn__libs__options__quote_arg_1_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,58)) {
		MR_GOTO_LAB(fn__libs__options__quote_arg_1_0_i32);
	}
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_r3;
	MR_GOTO(MR_ENTRY(MR_do_redo));
MR_def_label(fn__libs__options__quote_arg_1_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(char__is_alnum_or_underscore_1_0,
		fn__libs__options__quote_arg_1_0_i39);
MR_def_label(fn__libs__options__quote_arg_1_0,39)
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
	MR_GOTO_LAB(fn__libs__options__quote_arg_1_0_i41);
MR_def_label(fn__libs__options__quote_arg_1_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_redoip_slot_word(MR_maxfr) = MR_sv(2);
	MR_redofr_slot_word(MR_maxfr) = MR_sv(3);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(fn__string__from_char_list_1_0);
MR_def_label(fn__libs__options__quote_arg_1_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(fn__string__from_char_list_1_0,
		fn__libs__options__quote_arg_1_0_i42);
MR_def_label(fn__libs__options__quote_arg_1_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("\"", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__libs__options__quote_arg_1_0_i43);
MR_def_label(fn__libs__options__quote_arg_1_0,43)
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

MR_decl_entry(fn__map__set_3_0);
MR_decl_entry(libs__handle_options__convert_grade_option_3_0);
MR_decl_entry(bool__not_2_0);

MR_BEGIN_MODULE(libs__options_module16)
	MR_init_entry1(libs__options__special_handler_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__libs__options__special_handler_4_0);
	MR_init_label10(libs__options__special_handler_4_0,6,3,10,18,15,25,26,27,22,34)
	MR_init_label10(libs__options__special_handler_4_0,31,37,45,42,49,58,56,61,62,54)
	MR_init_label10(libs__options__special_handler_4_0,65,73,70,77,88,99,97,153,154,155)
	MR_init_label10(libs__options__special_handler_4_0,157,150,164,172,169,180,179,183,178,176)
	MR_init_label10(libs__options__special_handler_4_0,191,193,194,188,197,203,213,207,225,224)
	MR_init_label10(libs__options__special_handler_4_0,223,221,235,232,240,242,247,238,252,250)
	MR_init_label10(libs__options__special_handler_4_0,258,255,264,265,267,261,270,274,278,282)
	MR_init_label10(libs__options__special_handler_4_0,286,290,294,298,302,306,313,310,316,320)
	MR_init_label8(libs__options__special_handler_4_0,327,328,330,324,333,341,343,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'special_handler'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__libs__options__special_handler_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,172)) {
		MR_GOTO_LAB(libs__options__special_handler_4_0_i3);
	}
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(libs__options__special_handler_4_0_i1);
	}
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(libs__options, option);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(getopt_io, option_data);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_r3 = (MR_Integer) 169;
	MR_r4 = (MR_Word) MR_TAG_COMMON(3,3,9);
	MR_r5 = MR_tempr1;
	}
	MR_np_call_localret_ent(map__set_4_0,
		libs__options__special_handler_4_0_i6);
MR_def_label(libs__options__special_handler_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(libs__options, option);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(getopt_io, option_data);
	MR_r3 = (MR_Integer) 97;
	MR_r4 = (MR_Word) MR_TAG_COMMON(1,0,0);
	MR_r5 = MR_tempr1;
	}
	MR_np_call_localret_ent(map__set_4_0,
		libs__options__special_handler_4_0_i343);
MR_def_label(libs__options__special_handler_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,175)) {
		MR_GOTO_LAB(libs__options__special_handler_4_0_i10);
	}
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(libs__options__special_handler_4_0_i1);
	}
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(libs__options, option);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(getopt_io, option_data);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_r3 = (MR_Integer) 169;
	MR_r4 = (MR_Word) MR_TAG_COMMON(3,3,45);
	MR_r5 = MR_tempr1;
	}
	MR_np_call_localret_ent(map__set_4_0,
		libs__options__special_handler_4_0_i343);
MR_def_label(libs__options__special_handler_4_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,176)) {
		MR_GOTO_LAB(libs__options__special_handler_4_0_i15);
	}
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(libs__options__special_handler_4_0_i1);
	}
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(libs__options, option);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(getopt_io, option_data);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_r3 = (MR_Integer) 169;
	MR_r4 = (MR_Word) MR_TAG_COMMON(3,3,45);
	MR_r5 = MR_tempr1;
	}
	MR_np_call_localret_ent(map__set_4_0,
		libs__options__special_handler_4_0_i18);
MR_def_label(libs__options__special_handler_4_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(libs__options, option);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(getopt_io, option_data);
	MR_r3 = (MR_Integer) 97;
	MR_r4 = (MR_Word) MR_TAG_COMMON(1,0,0);
	MR_r5 = MR_tempr1;
	}
	MR_np_call_localret_ent(map__set_4_0,
		libs__options__special_handler_4_0_i343);
MR_def_label(libs__options__special_handler_4_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,186)) {
		MR_GOTO_LAB(libs__options__special_handler_4_0_i22);
	}
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(libs__options__special_handler_4_0_i1);
	}
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = (MR_Word) MR_TAG_COMMON(1,0,1);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(libs__options, option);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(getopt_io, option_data);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_r3 = (MR_Integer) 188;
	MR_r4 = MR_sv(1);
	MR_r5 = MR_tempr1;
	}
	MR_np_call_localret_ent(map__set_4_0,
		libs__options__special_handler_4_0_i25);
MR_def_label(libs__options__special_handler_4_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(libs__options, option);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(getopt_io, option_data);
	MR_r3 = (MR_Integer) 187;
	MR_r4 = MR_sv(1);
	MR_r5 = MR_tempr1;
	}
	MR_np_call_localret_ent(map__set_4_0,
		libs__options__special_handler_4_0_i26);
MR_def_label(libs__options__special_handler_4_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(libs__options, option);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(getopt_io, option_data);
	MR_r3 = (MR_Integer) 189;
	MR_r4 = MR_sv(1);
	MR_r5 = MR_tempr1;
	}
	MR_np_call_localret_ent(map__set_4_0,
		libs__options__special_handler_4_0_i27);
MR_def_label(libs__options__special_handler_4_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(libs__options, option);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(getopt_io, option_data);
	MR_r3 = (MR_Integer) 190;
	MR_r4 = (MR_Word) MR_TAG_COMMON(1,0,0);
	MR_r5 = MR_tempr1;
	}
	MR_np_call_localret_ent(map__set_4_0,
		libs__options__special_handler_4_0_i343);
MR_def_label(libs__options__special_handler_4_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,637)) {
		MR_GOTO_LAB(libs__options__special_handler_4_0_i31);
	}
	if (MR_RTAGS_TESTR(MR_r2,3,0)) {
		MR_GOTO_LAB(libs__options__special_handler_4_0_i1);
	}
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_r5 = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr1, 1) = MR_tfield(3, MR_r2, 1);
	MR_sv(1) = MR_tempr1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(libs__options, option);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(getopt_io, option_data);
	MR_r4 = (MR_Integer) 638;
	}
	MR_np_call_localret_ent(fn__map__set_3_0,
		libs__options__special_handler_4_0_i34);
MR_def_label(libs__options__special_handler_4_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(libs__options, option);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(getopt_io, option_data);
	MR_r3 = MR_tempr1;
	MR_r4 = (MR_Integer) 639;
	MR_r5 = MR_sv(1);
	}
	MR_np_call_localret_ent(fn__map__set_3_0,
		libs__options__special_handler_4_0_i343);
MR_def_label(libs__options__special_handler_4_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,179)) {
		MR_GOTO_LAB(libs__options__special_handler_4_0_i37);
	}
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(libs__options__special_handler_4_0_i1);
	}
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(libs__options, option);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(getopt_io, option_data);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_r3 = (MR_Integer) 169;
	MR_r4 = (MR_Word) MR_TAG_COMMON(3,3,46);
	MR_r5 = MR_tempr1;
	}
	MR_np_call_localret_ent(map__set_4_0,
		libs__options__special_handler_4_0_i343);
MR_def_label(libs__options__special_handler_4_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,180)) {
		MR_GOTO_LAB(libs__options__special_handler_4_0_i42);
	}
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(libs__options__special_handler_4_0_i1);
	}
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(libs__options, option);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(getopt_io, option_data);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_r3 = (MR_Integer) 169;
	MR_r4 = (MR_Word) MR_TAG_COMMON(3,3,46);
	MR_r5 = MR_tempr1;
	}
	MR_np_call_localret_ent(map__set_4_0,
		libs__options__special_handler_4_0_i45);
MR_def_label(libs__options__special_handler_4_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(libs__options, option);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(getopt_io, option_data);
	MR_r3 = (MR_Integer) 97;
	MR_r4 = (MR_Word) MR_TAG_COMMON(1,0,0);
	MR_r5 = MR_tempr1;
	}
	MR_np_call_localret_ent(map__set_4_0,
		libs__options__special_handler_4_0_i343);
MR_def_label(libs__options__special_handler_4_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,472)) {
		MR_GOTO_LAB(libs__options__special_handler_4_0_i49);
	}
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(libs__options__special_handler_4_0_i1);
	}
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(libs__options, option);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(getopt_io, option_data);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_r3 = (MR_Integer) 471;
	MR_r4 = (MR_Word) MR_TAG_COMMON(2,0,1);
	MR_r5 = MR_tempr1;
	}
	MR_np_call_localret_ent(map__set_4_0,
		libs__options__special_handler_4_0_i343);
MR_def_label(libs__options__special_handler_4_0,49)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,168)) {
		MR_GOTO_LAB(libs__options__special_handler_4_0_i54);
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
		libs__options__special_handler_4_0_i58);
MR_def_label(libs__options__special_handler_4_0,58)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(libs__options__special_handler_4_0_i56);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr1, 0) = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(6);
	}
MR_def_label(libs__options__special_handler_4_0,56)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = (MR_Word) MR_string_const("\'", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		libs__options__special_handler_4_0_i61);
MR_def_label(libs__options__special_handler_4_0,61)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("invalid grade \140", 15);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		libs__options__special_handler_4_0_i62);
MR_def_label(libs__options__special_handler_4_0,62)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r2, 0) = MR_r1;
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(6);
MR_def_label(libs__options__special_handler_4_0,54)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,170)) {
		MR_GOTO_LAB(libs__options__special_handler_4_0_i65);
	}
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(libs__options__special_handler_4_0_i1);
	}
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(libs__options, option);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(getopt_io, option_data);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_r3 = (MR_Integer) 169;
	MR_r4 = (MR_Word) MR_TAG_COMMON(3,3,47);
	MR_r5 = MR_tempr1;
	}
	MR_np_call_localret_ent(map__set_4_0,
		libs__options__special_handler_4_0_i343);
MR_def_label(libs__options__special_handler_4_0,65)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,171)) {
		MR_GOTO_LAB(libs__options__special_handler_4_0_i70);
	}
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(libs__options__special_handler_4_0_i1);
	}
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(libs__options, option);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(getopt_io, option_data);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_r3 = (MR_Integer) 169;
	MR_r4 = (MR_Word) MR_TAG_COMMON(3,3,47);
	MR_r5 = MR_tempr1;
	}
	MR_np_call_localret_ent(map__set_4_0,
		libs__options__special_handler_4_0_i73);
MR_def_label(libs__options__special_handler_4_0,73)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(libs__options, option);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(getopt_io, option_data);
	MR_r3 = (MR_Integer) 97;
	MR_r4 = (MR_Word) MR_TAG_COMMON(1,0,0);
	MR_r5 = MR_tempr1;
	}
	MR_np_call_localret_ent(map__set_4_0,
		libs__options__special_handler_4_0_i343);
MR_def_label(libs__options__special_handler_4_0,70)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,164)) {
		MR_GOTO_LAB(libs__options__special_handler_4_0_i77);
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
	MR_tfield(0, MR_tempr2, 0) = (MR_Integer) 161;
	MR_tfield(0, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr3, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr3, 0) = (MR_Integer) 162;
	MR_tfield(0, MR_tempr3, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr4, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr4, 0) = (MR_Integer) 163;
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
		libs__options__special_handler_4_0_i343);
MR_def_label(libs__options__special_handler_4_0,77)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,41)) {
		MR_GOTO_LAB(libs__options__special_handler_4_0_i88);
	}
	if (MR_PTAG_TESTR(MR_r2,1)) {
		MR_GOTO_LAB(libs__options__special_handler_4_0_i1);
	}
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_tfield(1, MR_r2, 0);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = (MR_Integer) 42;
	MR_tfield(0, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr3, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr3, 0) = (MR_Integer) 43;
	MR_tfield(0, MR_tempr3, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_tempr3;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = MR_tempr2;
	MR_tfield(1, MR_r1, 1) = MR_tempr1;
	MR_r2 = MR_r3;
	}
	MR_np_call_localret_ent(libs__options__override_options_3_0,
		libs__options__special_handler_4_0_i343);
MR_def_label(libs__options__special_handler_4_0,88)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(libs__options__special_handler_4_0_i97);
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
		libs__options__special_handler_4_0_i99);
MR_def_label(libs__options__special_handler_4_0,99)
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
	MR_tfield(0, MR_tempr3, 0) = (MR_Integer) 5;
	MR_tfield(0, MR_tempr3, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr4, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr4, 0) = (MR_Integer) 6;
	MR_tfield(0, MR_tempr4, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr5, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr5, 0) = (MR_Integer) 7;
	MR_tfield(0, MR_tempr5, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr6, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr6, 0) = (MR_Integer) 8;
	MR_tfield(0, MR_tempr6, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr7, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr7, 0) = (MR_Integer) 9;
	MR_tfield(0, MR_tempr7, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr8, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr8, 0) = (MR_Integer) 11;
	MR_tfield(0, MR_tempr8, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr9, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr9, 0) = (MR_Integer) 12;
	MR_tfield(0, MR_tempr9, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr10, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr10, 0) = (MR_Integer) 13;
	MR_tfield(0, MR_tempr10, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr11, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr11, 0) = (MR_Integer) 14;
	MR_tfield(0, MR_tempr11, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr12, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr12, 0) = (MR_Integer) 18;
	MR_tfield(0, MR_tempr12, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr13, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr13, 0) = (MR_Integer) 19;
	MR_tfield(0, MR_tempr13, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr14, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr14, 0) = (MR_Integer) 21;
	MR_tfield(0, MR_tempr14, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr15, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr15, 0) = (MR_Integer) 22;
	MR_tfield(0, MR_tempr15, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr16, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr16, 0) = (MR_Integer) 23;
	MR_tfield(0, MR_tempr16, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr17, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr17, 0) = (MR_Integer) 24;
	MR_tfield(0, MR_tempr17, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr18, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr18, 0) = (MR_Integer) 26;
	MR_tfield(0, MR_tempr18, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr19, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr19, 0) = (MR_Integer) 27;
	MR_tfield(0, MR_tempr19, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr20, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr20, 0) = (MR_Integer) 28;
	MR_tfield(0, MR_tempr20, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr21, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr21, 0) = (MR_Integer) 29;
	MR_tfield(0, MR_tempr21, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr22, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr22, 0) = (MR_Integer) 30;
	MR_tfield(0, MR_tempr22, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr23, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr23, 0) = (MR_Integer) 31;
	MR_tfield(0, MR_tempr23, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr24, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr24, 0) = (MR_Integer) 35;
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
		libs__options__special_handler_4_0_i343);
MR_def_label(libs__options__special_handler_4_0,97)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,330)) {
		MR_GOTO_LAB(libs__options__special_handler_4_0_i150);
	}
	if (MR_PTAG_TESTR(MR_r2,1)) {
		MR_GOTO_LAB(libs__options__special_handler_4_0_i1);
	}
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_r4 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_tfield(1, MR_r2, 0);
	MR_sv(1) = MR_tfield(1, MR_tempr1, 0);
	MR_sv(2) = MR_tempr1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(libs__options, option);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(getopt_io, option_data);
	MR_tempr2 = MR_r3;
	MR_r3 = (MR_Integer) 331;
	MR_r5 = MR_tempr2;
	}
	MR_np_call_localret_ent(map__set_4_0,
		libs__options__special_handler_4_0_i153);
MR_def_label(libs__options__special_handler_4_0,153)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(libs__options, option);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(getopt_io, option_data);
	MR_r3 = (MR_Integer) 332;
	MR_r4 = MR_sv(2);
	MR_r5 = MR_tempr1;
	}
	MR_np_call_localret_ent(map__set_4_0,
		libs__options__special_handler_4_0_i154);
MR_def_label(libs__options__special_handler_4_0,154)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(libs__options, option);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(getopt_io, option_data);
	MR_r3 = (MR_Integer) 333;
	MR_r4 = MR_sv(2);
	MR_r5 = MR_tempr1;
	}
	MR_np_call_localret_ent(map__set_4_0,
		libs__options__special_handler_4_0_i155);
MR_def_label(libs__options__special_handler_4_0,155)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(1),0)) {
		MR_GOTO_LAB(libs__options__special_handler_4_0_i157);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(libs__options, option);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(getopt_io, option_data);
	MR_r3 = (MR_Integer) 335;
	MR_r4 = (MR_Word) MR_TAG_COMMON(2,0,1);
	MR_r5 = MR_tempr1;
	}
	MR_np_call_localret_ent(map__set_4_0,
		libs__options__special_handler_4_0_i343);
MR_def_label(libs__options__special_handler_4_0,157)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(libs__options, option);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(getopt_io, option_data);
	MR_r3 = (MR_Integer) 335;
	MR_r4 = (MR_Word) MR_TAG_COMMON(2,0,23);
	MR_r5 = MR_tempr1;
	}
	MR_np_call_localret_ent(map__set_4_0,
		libs__options__special_handler_4_0_i343);
MR_def_label(libs__options__special_handler_4_0,150)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,173)) {
		MR_GOTO_LAB(libs__options__special_handler_4_0_i164);
	}
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(libs__options__special_handler_4_0_i1);
	}
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(libs__options, option);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(getopt_io, option_data);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_r3 = (MR_Integer) 169;
	MR_r4 = (MR_Word) MR_TAG_COMMON(3,3,39);
	MR_r5 = MR_tempr1;
	}
	MR_np_call_localret_ent(map__set_4_0,
		libs__options__special_handler_4_0_i343);
MR_def_label(libs__options__special_handler_4_0,164)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,174)) {
		MR_GOTO_LAB(libs__options__special_handler_4_0_i169);
	}
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(libs__options__special_handler_4_0_i1);
	}
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(libs__options, option);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(getopt_io, option_data);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_r3 = (MR_Integer) 169;
	MR_r4 = (MR_Word) MR_TAG_COMMON(3,3,39);
	MR_r5 = MR_tempr1;
	}
	MR_np_call_localret_ent(map__set_4_0,
		libs__options__special_handler_4_0_i172);
MR_def_label(libs__options__special_handler_4_0,172)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(libs__options, option);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(getopt_io, option_data);
	MR_r3 = (MR_Integer) 97;
	MR_r4 = (MR_Word) MR_TAG_COMMON(1,0,0);
	MR_r5 = MR_tempr1;
	}
	MR_np_call_localret_ent(map__set_4_0,
		libs__options__special_handler_4_0_i343);
MR_def_label(libs__options__special_handler_4_0,169)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,548)) {
		MR_GOTO_LAB(libs__options__special_handler_4_0_i176);
	}
	if (MR_RTAGS_TESTR(MR_r2,3,0)) {
		MR_GOTO_LAB(libs__options__special_handler_4_0_i1);
	}
	MR_r6 = MR_tfield(3, MR_r2, 1);
	if ((strcmp((char *) (MR_Word *) MR_r6, MR_string_const("shared", 6)) != 0)) {
		MR_GOTO_LAB(libs__options__special_handler_4_0_i180);
	}
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_r4 = MR_r3;
	MR_r1 = MR_r6;
	MR_GOTO_LAB(libs__options__special_handler_4_0_i179);
MR_def_label(libs__options__special_handler_4_0,180)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r6, MR_string_const("static", 6)) != 0)) {
		MR_GOTO_LAB(libs__options__special_handler_4_0_i178);
	}
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_r4 = MR_r3;
	MR_r1 = MR_r6;
MR_def_label(libs__options__special_handler_4_0,179)
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
	MR_r3 = (MR_Integer) 549;
	}
	MR_np_call_localret_ent(fn__f_109_97_112_95_95_101_108_101_109_32_58_61_3_0,
		libs__options__special_handler_4_0_i183);
MR_def_label(libs__options__special_handler_4_0,183)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(3);
	MR_r3 = (MR_Integer) 547;
	MR_r4 = MR_tempr1;
	MR_r5 = MR_sv(1);
	}
	MR_np_call_localret_ent(fn__f_109_97_112_95_95_101_108_101_109_32_58_61_3_0,
		libs__options__special_handler_4_0_i343);
MR_def_label(libs__options__special_handler_4_0,178)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_TAG_COMMON(1,5,1);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__special_handler_4_0,176)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,185)) {
		MR_GOTO_LAB(libs__options__special_handler_4_0_i188);
	}
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(libs__options__special_handler_4_0_i1);
	}
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = (MR_Word) MR_TAG_COMMON(1,0,1);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(libs__options, option);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(getopt_io, option_data);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_r3 = (MR_Integer) 188;
	MR_r4 = MR_sv(1);
	MR_r5 = MR_tempr1;
	}
	MR_np_call_localret_ent(map__set_4_0,
		libs__options__special_handler_4_0_i191);
MR_def_label(libs__options__special_handler_4_0,191)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = (MR_Word) MR_TAG_COMMON(1,0,0);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(libs__options, option);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(getopt_io, option_data);
	MR_r3 = (MR_Integer) 187;
	MR_r4 = MR_sv(2);
	MR_r5 = MR_tempr1;
	}
	MR_np_call_localret_ent(map__set_4_0,
		libs__options__special_handler_4_0_i193);
MR_def_label(libs__options__special_handler_4_0,193)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(libs__options, option);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(getopt_io, option_data);
	MR_r3 = (MR_Integer) 189;
	MR_r4 = MR_sv(2);
	MR_r5 = MR_tempr1;
	}
	MR_np_call_localret_ent(map__set_4_0,
		libs__options__special_handler_4_0_i194);
MR_def_label(libs__options__special_handler_4_0,194)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(libs__options, option);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(getopt_io, option_data);
	MR_r3 = (MR_Integer) 190;
	MR_r4 = MR_sv(1);
	MR_r5 = MR_tempr1;
	}
	MR_np_call_localret_ent(map__set_4_0,
		libs__options__special_handler_4_0_i343);
MR_def_label(libs__options__special_handler_4_0,188)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,616)) {
		MR_GOTO_LAB(libs__options__special_handler_4_0_i197);
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
	MR_r4 = (MR_Integer) 615;
	}
	MR_np_call_localret_ent(fn__map__set_3_0,
		libs__options__special_handler_4_0_i343);
MR_def_label(libs__options__special_handler_4_0,197)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,537)) {
		MR_GOTO_LAB(libs__options__special_handler_4_0_i203);
	}
	if (MR_RTAGS_TESTR(MR_r2,3,0)) {
		MR_GOTO_LAB(libs__options__special_handler_4_0_i1);
	}
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_r1 = MR_r3;
	MR_r2 = MR_tfield(3, MR_r2, 1);
	MR_np_call_localret_ent(fn__libs__options__option_table_add_mercury_library_directory_2_0,
		libs__options__special_handler_4_0_i343);
MR_def_label(libs__options__special_handler_4_0,203)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,541)) {
		MR_GOTO_LAB(libs__options__special_handler_4_0_i207);
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
	MR_tfield(0, MR_tempr1, 0) = (MR_Integer) 534;
	MR_tfield(0, MR_tempr1, 1) = MR_tfield(3, MR_r2, 1);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_sv(3) = MR_tempr2;
	MR_tfield(0, MR_tempr2, 0) = (MR_Integer) 540;
	MR_tfield(0, MR_tempr2, 1) = MR_tfield(0, MR_tempr1, 1);
	MR_sv(1) = MR_r3;
	MR_sv(4) = (MR_Word) MR_TAG_COMMON(0,6,1);
	MR_sv(5) = (MR_Word) MR_TAG_COMMON(0,6,2);
	MR_r1 = MR_tfield(0, MR_tempr1, 1);
	MR_r2 = (MR_Word) MR_string_const(".init", 5);
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		libs__options__special_handler_4_0_i213);
MR_def_label(libs__options__special_handler_4_0,213)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = (MR_Integer) 545;
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
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,8,2);
	MR_r5 = MR_sv(1);
	}
	MR_np_call_localret_ent(fn__list__foldl_3_0,
		libs__options__special_handler_4_0_i343);
MR_def_label(libs__options__special_handler_4_0,207)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,550)) {
		MR_GOTO_LAB(libs__options__special_handler_4_0_i221);
	}
	if (MR_RTAGS_TESTR(MR_r2,3,0)) {
		MR_GOTO_LAB(libs__options__special_handler_4_0_i1);
	}
	MR_r6 = MR_tfield(3, MR_r2, 1);
	if ((strcmp((char *) (MR_Word *) MR_r6, MR_string_const("shared", 6)) != 0)) {
		MR_GOTO_LAB(libs__options__special_handler_4_0_i225);
	}
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_r4 = MR_r3;
	MR_r1 = MR_r6;
	MR_GOTO_LAB(libs__options__special_handler_4_0_i224);
MR_def_label(libs__options__special_handler_4_0,225)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r6, MR_string_const("static", 6)) != 0)) {
		MR_GOTO_LAB(libs__options__special_handler_4_0_i223);
	}
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_r4 = MR_r3;
	MR_r1 = MR_r6;
MR_def_label(libs__options__special_handler_4_0,224)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_r5 = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(libs__options, option);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(getopt_io, option_data);
	MR_r3 = (MR_Integer) 549;
	}
	MR_np_call_localret_ent(fn__f_109_97_112_95_95_101_108_101_109_32_58_61_3_0,
		libs__options__special_handler_4_0_i343);
MR_def_label(libs__options__special_handler_4_0,223)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_TAG_COMMON(1,5,2);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__options__special_handler_4_0,221)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,543)) {
		MR_GOTO_LAB(libs__options__special_handler_4_0_i232);
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
	MR_r4 = (MR_Integer) 542;
	}
	MR_np_call_localret_ent(fn__map__set_3_0,
		libs__options__special_handler_4_0_i235);
MR_def_label(libs__options__special_handler_4_0,235)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(libs__options, option);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(getopt_io, option_data);
	MR_r3 = MR_tempr1;
	MR_r4 = (MR_Integer) 615;
	MR_r5 = MR_sv(1);
	}
	MR_np_call_localret_ent(fn__map__set_3_0,
		libs__options__special_handler_4_0_i343);
MR_def_label(libs__options__special_handler_4_0,232)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,318)) {
		MR_GOTO_LAB(libs__options__special_handler_4_0_i238);
	}
	if (MR_PTAG_TESTR(MR_r2,2)) {
		MR_GOTO_LAB(libs__options__special_handler_4_0_i1);
	}
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_r6 = MR_tfield(2, MR_r2, 0);
	if (MR_INT_LE(MR_r6,6)) {
		MR_GOTO_LAB(libs__options__special_handler_4_0_i240);
	}
	MR_r5 = MR_r3;
	MR_sv(1) = (MR_Integer) 6;
	MR_r4 = (MR_Word) MR_TAG_COMMON(2,0,7);
	MR_r3 = (MR_Integer) 319;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(libs__options, option);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(getopt_io, option_data);
	MR_np_call_localret_ent(map__set_4_0,
		libs__options__special_handler_4_0_i247);
MR_def_label(libs__options__special_handler_4_0,240)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_GE(MR_r6,-1)) {
		MR_GOTO_LAB(libs__options__special_handler_4_0_i242);
	}
	MR_r5 = MR_r3;
	MR_sv(1) = (MR_Integer) -1;
	MR_r4 = (MR_Word) MR_TAG_COMMON(2,0,6);
	MR_r3 = (MR_Integer) 319;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(libs__options, option);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(getopt_io, option_data);
	MR_np_call_localret_ent(map__set_4_0,
		libs__options__special_handler_4_0_i247);
MR_def_label(libs__options__special_handler_4_0,242)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r4, 2, (MR_Integer) 1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r6;
	MR_tfield(2, MR_r4, 0) = MR_tempr1;
	MR_r5 = MR_r3;
	MR_sv(1) = MR_tempr1;
	MR_r3 = (MR_Integer) 319;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(libs__options, option);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(getopt_io, option_data);
	}
	MR_np_call_localret_ent(map__set_4_0,
		libs__options__special_handler_4_0_i247);
MR_def_label(libs__options__special_handler_4_0,247)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(libs__options__set_opt_level_3_0,
		libs__options__special_handler_4_0_i343);
MR_def_label(libs__options__special_handler_4_0,238)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,320)) {
		MR_GOTO_LAB(libs__options__special_handler_4_0_i250);
	}
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(libs__options__special_handler_4_0_i1);
	}
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r3;
	MR_np_call_localret_ent(libs__options__opt_space_1_0,
		libs__options__special_handler_4_0_i252);
MR_def_label(libs__options__special_handler_4_0,252)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(libs__options__override_options_3_0,
		libs__options__special_handler_4_0_i343);
MR_def_label(libs__options__special_handler_4_0,250)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,378)) {
		MR_GOTO_LAB(libs__options__special_handler_4_0_i255);
	}
	if (MR_PTAG_TESTR(MR_r2,1)) {
		MR_GOTO_LAB(libs__options__special_handler_4_0_i1);
	}
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_r4 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_tfield(1, MR_r2, 0);
	MR_sv(1) = MR_tempr1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(libs__options, option);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(getopt_io, option_data);
	MR_tempr2 = MR_r3;
	MR_r3 = (MR_Integer) 364;
	MR_r5 = MR_tempr2;
	}
	MR_np_call_localret_ent(map__set_4_0,
		libs__options__special_handler_4_0_i258);
MR_def_label(libs__options__special_handler_4_0,258)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(libs__options, option);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(getopt_io, option_data);
	MR_r3 = (MR_Integer) 365;
	MR_r4 = MR_sv(1);
	MR_r5 = MR_tempr1;
	}
	MR_np_call_localret_ent(map__set_4_0,
		libs__options__special_handler_4_0_i343);
MR_def_label(libs__options__special_handler_4_0,255)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,183)) {
		MR_GOTO_LAB(libs__options__special_handler_4_0_i261);
	}
	if (MR_PTAG_TESTR(MR_r2,1)) {
		MR_GOTO_LAB(libs__options__special_handler_4_0_i1);
	}
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_r4 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_tfield(1, MR_r2, 0);
	MR_sv(1) = MR_tempr1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(libs__options, option);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(getopt_io, option_data);
	MR_tempr2 = MR_r3;
	MR_r3 = (MR_Integer) 188;
	MR_r5 = MR_tempr2;
	}
	MR_np_call_localret_ent(map__set_4_0,
		libs__options__special_handler_4_0_i264);
MR_def_label(libs__options__special_handler_4_0,264)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(libs__options, option);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(getopt_io, option_data);
	MR_r3 = (MR_Integer) 187;
	MR_r4 = MR_sv(1);
	MR_r5 = MR_tempr1;
	}
	MR_np_call_localret_ent(map__set_4_0,
		libs__options__special_handler_4_0_i265);
MR_def_label(libs__options__special_handler_4_0,265)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = (MR_Word) MR_TAG_COMMON(1,0,1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(libs__options, option);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(getopt_io, option_data);
	MR_r3 = (MR_Integer) 189;
	MR_r4 = MR_sv(1);
	MR_r5 = MR_tempr1;
	}
	MR_np_call_localret_ent(map__set_4_0,
		libs__options__special_handler_4_0_i267);
MR_def_label(libs__options__special_handler_4_0,267)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(libs__options, option);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(getopt_io, option_data);
	MR_r3 = (MR_Integer) 190;
	MR_r4 = MR_sv(1);
	MR_r5 = MR_tempr1;
	}
	MR_np_call_localret_ent(map__set_4_0,
		libs__options__special_handler_4_0_i343);
MR_def_label(libs__options__special_handler_4_0,261)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,478)) {
		MR_GOTO_LAB(libs__options__special_handler_4_0_i270);
	}
	if (MR_RTAGS_TESTR(MR_r2,3,0)) {
		MR_GOTO_LAB(libs__options__special_handler_4_0_i1);
	}
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_r1 = (MR_Integer) 477;
	MR_r2 = MR_tfield(3, MR_r2, 1);
	MR_np_call_localret_ent(libs__options__handle_quoted_flag_4_0,
		libs__options__special_handler_4_0_i343);
MR_def_label(libs__options__special_handler_4_0,270)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,486)) {
		MR_GOTO_LAB(libs__options__special_handler_4_0_i274);
	}
	if (MR_RTAGS_TESTR(MR_r2,3,0)) {
		MR_GOTO_LAB(libs__options__special_handler_4_0_i1);
	}
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_r1 = (MR_Integer) 485;
	MR_r2 = MR_tfield(3, MR_r2, 1);
	MR_np_call_localret_ent(libs__options__handle_quoted_flag_4_0,
		libs__options__special_handler_4_0_i343);
MR_def_label(libs__options__special_handler_4_0,274)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,517)) {
		MR_GOTO_LAB(libs__options__special_handler_4_0_i278);
	}
	if (MR_RTAGS_TESTR(MR_r2,3,0)) {
		MR_GOTO_LAB(libs__options__special_handler_4_0_i1);
	}
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_r1 = (MR_Integer) 516;
	MR_r2 = MR_tfield(3, MR_r2, 1);
	MR_np_call_localret_ent(libs__options__handle_quoted_flag_4_0,
		libs__options__special_handler_4_0_i343);
MR_def_label(libs__options__special_handler_4_0,278)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,522)) {
		MR_GOTO_LAB(libs__options__special_handler_4_0_i282);
	}
	if (MR_RTAGS_TESTR(MR_r2,3,0)) {
		MR_GOTO_LAB(libs__options__special_handler_4_0_i1);
	}
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_r1 = (MR_Integer) 521;
	MR_r2 = MR_tfield(3, MR_r2, 1);
	MR_np_call_localret_ent(libs__options__handle_quoted_flag_4_0,
		libs__options__special_handler_4_0_i343);
MR_def_label(libs__options__special_handler_4_0,282)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,484)) {
		MR_GOTO_LAB(libs__options__special_handler_4_0_i286);
	}
	if (MR_RTAGS_TESTR(MR_r2,3,0)) {
		MR_GOTO_LAB(libs__options__special_handler_4_0_i1);
	}
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_r1 = (MR_Integer) 483;
	MR_r2 = MR_tfield(3, MR_r2, 1);
	MR_np_call_localret_ent(libs__options__handle_quoted_flag_4_0,
		libs__options__special_handler_4_0_i343);
MR_def_label(libs__options__special_handler_4_0,286)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,511)) {
		MR_GOTO_LAB(libs__options__special_handler_4_0_i290);
	}
	if (MR_RTAGS_TESTR(MR_r2,3,0)) {
		MR_GOTO_LAB(libs__options__special_handler_4_0_i1);
	}
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_r1 = (MR_Integer) 510;
	MR_r2 = MR_tfield(3, MR_r2, 1);
	MR_np_call_localret_ent(libs__options__handle_quoted_flag_4_0,
		libs__options__special_handler_4_0_i343);
MR_def_label(libs__options__special_handler_4_0,290)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,506)) {
		MR_GOTO_LAB(libs__options__special_handler_4_0_i294);
	}
	if (MR_RTAGS_TESTR(MR_r2,3,0)) {
		MR_GOTO_LAB(libs__options__special_handler_4_0_i1);
	}
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_r1 = (MR_Integer) 505;
	MR_r2 = MR_tfield(3, MR_r2, 1);
	MR_np_call_localret_ent(libs__options__handle_quoted_flag_4_0,
		libs__options__special_handler_4_0_i343);
MR_def_label(libs__options__special_handler_4_0,294)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,529)) {
		MR_GOTO_LAB(libs__options__special_handler_4_0_i298);
	}
	if (MR_RTAGS_TESTR(MR_r2,3,0)) {
		MR_GOTO_LAB(libs__options__special_handler_4_0_i1);
	}
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_r1 = (MR_Integer) 528;
	MR_r2 = MR_tfield(3, MR_r2, 1);
	MR_np_call_localret_ent(libs__options__handle_quoted_flag_4_0,
		libs__options__special_handler_4_0_i343);
MR_def_label(libs__options__special_handler_4_0,298)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,531)) {
		MR_GOTO_LAB(libs__options__special_handler_4_0_i302);
	}
	if (MR_RTAGS_TESTR(MR_r2,3,0)) {
		MR_GOTO_LAB(libs__options__special_handler_4_0_i1);
	}
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_r1 = (MR_Integer) 530;
	MR_r2 = MR_tfield(3, MR_r2, 1);
	MR_np_call_localret_ent(libs__options__handle_quoted_flag_4_0,
		libs__options__special_handler_4_0_i343);
MR_def_label(libs__options__special_handler_4_0,302)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,488)) {
		MR_GOTO_LAB(libs__options__special_handler_4_0_i306);
	}
	if (MR_RTAGS_TESTR(MR_r2,3,0)) {
		MR_GOTO_LAB(libs__options__special_handler_4_0_i1);
	}
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_r1 = (MR_Integer) 487;
	MR_r2 = MR_tfield(3, MR_r2, 1);
	MR_np_call_localret_ent(libs__options__handle_quoted_flag_4_0,
		libs__options__special_handler_4_0_i343);
MR_def_label(libs__options__special_handler_4_0,306)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,299)) {
		MR_GOTO_LAB(libs__options__special_handler_4_0_i310);
	}
	if (MR_PTAG_TESTR(MR_r2,1)) {
		MR_GOTO_LAB(libs__options__special_handler_4_0_i1);
	}
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_r4 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_tfield(1, MR_r2, 0);
	MR_sv(1) = MR_tempr1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(libs__options, option);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(getopt_io, option_data);
	MR_tempr2 = MR_r3;
	MR_r3 = (MR_Integer) 300;
	MR_r5 = MR_tempr2;
	}
	MR_np_call_localret_ent(map__set_4_0,
		libs__options__special_handler_4_0_i313);
MR_def_label(libs__options__special_handler_4_0,313)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(libs__options, option);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(getopt_io, option_data);
	MR_r3 = (MR_Integer) 301;
	MR_r4 = MR_sv(1);
	MR_r5 = MR_tempr1;
	}
	MR_np_call_localret_ent(map__set_4_0,
		libs__options__special_handler_4_0_i343);
MR_def_label(libs__options__special_handler_4_0,310)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,539)) {
		MR_GOTO_LAB(libs__options__special_handler_4_0_i316);
	}
	if (MR_RTAGS_TESTR(MR_r2,3,0)) {
		MR_GOTO_LAB(libs__options__special_handler_4_0_i1);
	}
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_r1 = MR_r3;
	MR_r2 = MR_tfield(3, MR_r2, 1);
	MR_np_call_localret_ent(fn__libs__options__option_table_add_search_library_files_directory_2_0,
		libs__options__special_handler_4_0_i343);
MR_def_label(libs__options__special_handler_4_0,316)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,159)) {
		MR_GOTO_LAB(libs__options__special_handler_4_0_i320);
	}
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(libs__options__special_handler_4_0_i1);
	}
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_r1 = (MR_Word) MR_TAG_COMMON(1,2,714);
	MR_r2 = MR_r3;
	MR_np_call_localret_ent(libs__options__override_options_3_0,
		libs__options__special_handler_4_0_i343);
MR_def_label(libs__options__special_handler_4_0,320)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,184)) {
		MR_GOTO_LAB(libs__options__special_handler_4_0_i324);
	}
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(libs__options__special_handler_4_0_i1);
	}
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = (MR_Word) MR_TAG_COMMON(1,0,0);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(libs__options, option);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(getopt_io, option_data);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_r3 = (MR_Integer) 188;
	MR_r4 = MR_sv(1);
	MR_r5 = MR_tempr1;
	}
	MR_np_call_localret_ent(map__set_4_0,
		libs__options__special_handler_4_0_i327);
MR_def_label(libs__options__special_handler_4_0,327)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(libs__options, option);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(getopt_io, option_data);
	MR_r3 = (MR_Integer) 187;
	MR_r4 = MR_sv(1);
	MR_r5 = MR_tempr1;
	}
	MR_np_call_localret_ent(map__set_4_0,
		libs__options__special_handler_4_0_i328);
MR_def_label(libs__options__special_handler_4_0,328)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = (MR_Word) MR_TAG_COMMON(1,0,1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(libs__options, option);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(getopt_io, option_data);
	MR_r3 = (MR_Integer) 189;
	MR_r4 = MR_sv(1);
	MR_r5 = MR_tempr1;
	}
	MR_np_call_localret_ent(map__set_4_0,
		libs__options__special_handler_4_0_i330);
MR_def_label(libs__options__special_handler_4_0,330)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(libs__options, option);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(getopt_io, option_data);
	MR_r3 = (MR_Integer) 190;
	MR_r4 = MR_sv(1);
	MR_r5 = MR_tempr1;
	}
	MR_np_call_localret_ent(map__set_4_0,
		libs__options__special_handler_4_0_i343);
MR_def_label(libs__options__special_handler_4_0,324)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,177)) {
		MR_GOTO_LAB(libs__options__special_handler_4_0_i333);
	}
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(libs__options__special_handler_4_0_i1);
	}
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(libs__options, option);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(getopt_io, option_data);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_r3 = (MR_Integer) 169;
	MR_r4 = (MR_Word) MR_TAG_COMMON(3,3,48);
	MR_r5 = MR_tempr1;
	}
	MR_np_call_localret_ent(map__set_4_0,
		libs__options__special_handler_4_0_i343);
MR_def_label(libs__options__special_handler_4_0,333)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,178)) {
		MR_GOTO_LAB(libs__options__special_handler_4_0_i1);
	}
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(libs__options__special_handler_4_0_i1);
	}
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(libs__options, option);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(getopt_io, option_data);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_r3 = (MR_Integer) 169;
	MR_r4 = (MR_Word) MR_TAG_COMMON(3,3,48);
	MR_r5 = MR_tempr1;
	}
	MR_np_call_localret_ent(map__set_4_0,
		libs__options__special_handler_4_0_i341);
MR_def_label(libs__options__special_handler_4_0,341)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(libs__options, option);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(getopt_io, option_data);
	MR_r3 = (MR_Integer) 97;
	MR_r4 = (MR_Word) MR_TAG_COMMON(1,0,0);
	MR_r5 = MR_tempr1;
	}
	MR_np_call_localret_ent(map__set_4_0,
		libs__options__special_handler_4_0_i343);
MR_def_label(libs__options__special_handler_4_0,343)
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
	MR_sv(3) = MR_r1;
	MR_r1 = (MR_Integer) 1;
	MR_np_call_localret_ent(libs__options__option_defaults_2_2_0,
		libs__options__inconsequential_options_1_0_i3);
MR_def_label(libs__options__inconsequential_options_1_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Integer) 6;
	MR_np_call_localret_ent(libs__options__option_defaults_2_2_0,
		libs__options__inconsequential_options_1_0_i4);
MR_def_label(libs__options__inconsequential_options_1_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = (MR_Integer) 12;
	MR_np_call_localret_ent(libs__options__option_defaults_2_2_0,
		libs__options__inconsequential_options_1_0_i5);
MR_def_label(libs__options__inconsequential_options_1_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r1;
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
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
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
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
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
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r1;
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
	MR_r2 = MR_sv(3);
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
	MR_r2 = MR_sv(2);
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
	MR_r2 = MR_sv(1);
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
	MR_r1 = (MR_Word) MR_TAG_COMMON(1,4,129);
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
	MR_sv(2) = (MR_Word) MR_TAG_COMMON(1,4,203);
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
	MR_sv(2) = (MR_Word) MR_TAG_COMMON(1,4,202);
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
	MR_sv(2) = (MR_Word) MR_TAG_COMMON(1,4,201);
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
	MR_sv(2) = (MR_Word) MR_TAG_COMMON(1,4,200);
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
	MR_init_label1(libs__options__options_help_output_2_0,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'options_help_output'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(libs__options__options_help_output_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_r1 = (MR_Word) MR_string_const("\nOutput Options:\n", 17);
	MR_np_call_localret_ent(io__write_string_3_0,
		libs__options__options_help_output_2_0_i2);
MR_def_label(libs__options__options_help_output_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(1,4,309);
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
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
	MR_r1 = (MR_Word) MR_TAG_COMMON(1,4,410);
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
	MR_init_label4(libs__options__options_help_ctgc_2_0,32,33,34,35)
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
	MR_sv(2) = (MR_Word) MR_TAG_COMMON(1,4,432);
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
	MR_sv(2) = (MR_Word) MR_TAG_COMMON(1,4,431);
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
	MR_sv(2) = (MR_Word) MR_TAG_COMMON(1,4,430);
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
	MR_sv(2) = (MR_Word) MR_TAG_COMMON(1,4,429);
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
	MR_sv(2) = (MR_Word) MR_TAG_COMMON(1,4,428);
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
	MR_sv(2) = (MR_Word) MR_TAG_COMMON(1,4,427);
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
	MR_sv(2) = (MR_Word) MR_TAG_COMMON(1,4,426);
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
	MR_sv(2) = (MR_Word) MR_TAG_COMMON(1,4,425);
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
	MR_sv(2) = (MR_Word) MR_TAG_COMMON(1,4,424);
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
	MR_sv(2) = (MR_Word) MR_TAG_COMMON(1,4,423);
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
	MR_sv(1) = (MR_Word) MR_string_const("\twithin_n_cells_difference}, --ctgc-constraint {same_cons_id,", 61);
	MR_sv(2) = (MR_Word) MR_TAG_COMMON(1,4,422);
	MR_r1 = (MR_Integer) 9;
	MR_np_call_localret_ent(io__write_char_3_0,
		libs__options__options_help_ctgc_2_0_i33);
MR_def_label(libs__options__options_help_ctgc_2_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(io__write_string_3_0,
		libs__options__options_help_ctgc_2_0_i34);
MR_def_label(libs__options__options_help_ctgc_2_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 10;
	MR_np_call_localret_ent(io__write_char_3_0,
		libs__options__options_help_ctgc_2_0_i35);
MR_def_label(libs__options__options_help_ctgc_2_0,35)
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
	MR_init_label10(libs__options__options_help_termination_2_0,22,23,24,25,26,27,28,29,30,31)
	MR_init_label1(libs__options__options_help_termination_2_0,32)
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
	MR_sv(2) = (MR_Word) MR_TAG_COMMON(1,4,464);
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
	MR_sv(2) = (MR_Word) MR_TAG_COMMON(1,4,463);
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
	MR_sv(2) = (MR_Word) MR_TAG_COMMON(1,4,462);
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
	MR_sv(2) = (MR_Word) MR_TAG_COMMON(1,4,461);
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
	MR_sv(2) = (MR_Word) MR_TAG_COMMON(1,4,460);
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
	MR_sv(2) = (MR_Word) MR_TAG_COMMON(1,4,459);
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
	MR_sv(2) = (MR_Word) MR_TAG_COMMON(1,4,458);
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
	MR_sv(2) = (MR_Word) MR_TAG_COMMON(1,4,457);
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
	MR_sv(2) = (MR_Word) MR_TAG_COMMON(1,4,456);
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
	MR_sv(1) = (MR_Word) MR_string_const("\tnot be analysed.  In these cases the compiler does not emit a", 62);
	MR_sv(2) = (MR_Word) MR_TAG_COMMON(1,4,455);
	MR_r1 = (MR_Integer) 9;
	MR_np_call_localret_ent(io__write_char_3_0,
		libs__options__options_help_termination_2_0_i30);
MR_def_label(libs__options__options_help_termination_2_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(io__write_string_3_0,
		libs__options__options_help_termination_2_0_i31);
MR_def_label(libs__options__options_help_termination_2_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 10;
	MR_np_call_localret_ent(io__write_char_3_0,
		libs__options__options_help_termination_2_0_i32);
MR_def_label(libs__options__options_help_termination_2_0,32)
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
	MR_r1 = (MR_Word) MR_TAG_COMMON(1,4,482);
	MR_np_call_localret_ent(libs__options__write_tabbed_lines_3_0,
		libs__options__options_help_compilation_model_2_0_i3);
MR_def_label(libs__options__options_help_compilation_model_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("\n    Target selection compilation model options:\n", 49);
	MR_np_call_localret_ent(io__write_string_3_0,
		libs__options__options_help_compilation_model_2_0_i4);
MR_def_label(libs__options__options_help_compilation_model_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(1,4,521);
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
	MR_r1 = (MR_Word) MR_TAG_COMMON(1,4,535);
	MR_np_call_localret_ent(libs__options__write_tabbed_lines_3_0,
		libs__options__options_help_compilation_model_2_0_i8);
MR_def_label(libs__options__options_help_compilation_model_2_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("      Profiling\n", 16);
	MR_np_call_localret_ent(io__write_string_3_0,
		libs__options__options_help_compilation_model_2_0_i9);
MR_def_label(libs__options__options_help_compilation_model_2_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(1,4,569);
	MR_np_call_localret_ent(libs__options__write_tabbed_lines_3_0,
		libs__options__options_help_compilation_model_2_0_i10);
MR_def_label(libs__options__options_help_compilation_model_2_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("      Miscellaneous optional features\n", 38);
	MR_np_call_localret_ent(io__write_string_3_0,
		libs__options__options_help_compilation_model_2_0_i11);
MR_def_label(libs__options__options_help_compilation_model_2_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(1,4,612);
	MR_np_call_localret_ent(libs__options__write_tabbed_lines_3_0,
		libs__options__options_help_compilation_model_2_0_i12);
MR_def_label(libs__options__options_help_compilation_model_2_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("\n    LLDS back-end compilation model options:\n", 46);
	MR_np_call_localret_ent(io__write_string_3_0,
		libs__options__options_help_compilation_model_2_0_i13);
MR_def_label(libs__options__options_help_compilation_model_2_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(1,4,642);
	MR_np_call_localret_ent(libs__options__write_tabbed_lines_3_0,
		libs__options__options_help_compilation_model_2_0_i14);
MR_def_label(libs__options__options_help_compilation_model_2_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("\n    MLDS back-end compilation model options:\n", 46);
	MR_np_call_localret_ent(io__write_string_3_0,
		libs__options__options_help_compilation_model_2_0_i15);
MR_def_label(libs__options__options_help_compilation_model_2_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(1,4,650);
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
	MR_r1 = (MR_Word) MR_TAG_COMMON(1,4,663);
	MR_np_call_localret_ent(libs__options__write_tabbed_lines_3_0,
		libs__options__options_help_compilation_model_2_0_i19);
MR_def_label(libs__options__options_help_compilation_model_2_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("\n      Developer optional features\n", 35);
	MR_np_call_localret_ent(io__write_string_3_0,
		libs__options__options_help_compilation_model_2_0_i20);
MR_def_label(libs__options__options_help_compilation_model_2_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(1,4,678);
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
	MR_init_label7(libs__options__options_help_code_generation_2_0,22,23,24,25,26,27,28)
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
	MR_sv(2) = (MR_Word) MR_TAG_COMMON(1,4,706);
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
	MR_sv(2) = (MR_Word) MR_TAG_COMMON(1,4,705);
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
	MR_sv(2) = (MR_Word) MR_TAG_COMMON(1,4,704);
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
	MR_sv(2) = (MR_Word) MR_TAG_COMMON(1,4,703);
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
	MR_sv(2) = (MR_Word) MR_TAG_COMMON(1,4,702);
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
	MR_sv(2) = (MR_Word) MR_TAG_COMMON(1,4,701);
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
	MR_sv(2) = (MR_Word) MR_TAG_COMMON(1,4,700);
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
	MR_sv(1) = (MR_Word) MR_string_const("\tbefore going on to the next predicate.", 39);
	MR_sv(2) = (MR_Word) MR_TAG_COMMON(1,4,699);
	MR_r1 = (MR_Integer) 9;
	MR_np_call_localret_ent(io__write_char_3_0,
		libs__options__options_help_code_generation_2_0_i24);
MR_def_label(libs__options__options_help_code_generation_2_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(io__write_string_3_0,
		libs__options__options_help_code_generation_2_0_i25);
MR_def_label(libs__options__options_help_code_generation_2_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 10;
	MR_np_call_localret_ent(io__write_char_3_0,
		libs__options__options_help_code_generation_2_0_i26);
MR_def_label(libs__options__options_help_code_generation_2_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(libs__options__write_tabbed_lines_3_0,
		libs__options__options_help_code_generation_2_0_i27);
MR_def_label(libs__options__options_help_code_generation_2_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("\n    Code generation target options:\n", 37);
	MR_np_call_localret_ent(io__write_string_3_0,
		libs__options__options_help_code_generation_2_0_i28);
MR_def_label(libs__options__options_help_code_generation_2_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(1,4,721);
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
	MR_init_label5(libs__options__options_help_optimization_2_0,22,23,24,25,26)
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
	MR_sv(2) = (MR_Word) MR_TAG_COMMON(1,4,761);
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
	MR_sv(2) = (MR_Word) MR_TAG_COMMON(1,4,760);
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
	MR_sv(2) = (MR_Word) MR_TAG_COMMON(1,4,759);
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
	MR_sv(2) = (MR_Word) MR_TAG_COMMON(1,4,758);
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
	MR_sv(2) = (MR_Word) MR_TAG_COMMON(1,4,757);
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
	MR_sv(2) = (MR_Word) MR_TAG_COMMON(1,4,756);
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
	MR_sv(2) = (MR_Word) MR_TAG_COMMON(1,4,755);
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
	MR_sv(1) = (MR_Word) MR_string_const("\tincrease code size.", 20);
	MR_sv(2) = (MR_Word) MR_TAG_COMMON(1,4,754);
	MR_r1 = (MR_Integer) 9;
	MR_np_call_localret_ent(io__write_char_3_0,
		libs__options__options_help_optimization_2_0_i24);
MR_def_label(libs__options__options_help_optimization_2_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(io__write_string_3_0,
		libs__options__options_help_optimization_2_0_i25);
MR_def_label(libs__options__options_help_optimization_2_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 10;
	MR_np_call_localret_ent(io__write_char_3_0,
		libs__options__options_help_optimization_2_0_i26);
MR_def_label(libs__options__options_help_optimization_2_0,26)
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
	MR_r1 = (MR_Word) MR_TAG_COMMON(1,4,898);
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
	MR_init_label5(libs__options__options_help_hlds_llds_optimization_2_0,22,23,24,25,26)
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
	MR_sv(2) = (MR_Word) MR_TAG_COMMON(1,4,941);
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
	MR_sv(2) = (MR_Word) MR_TAG_COMMON(1,4,940);
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
	MR_sv(2) = (MR_Word) MR_TAG_COMMON(1,4,939);
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
	MR_sv(2) = (MR_Word) MR_TAG_COMMON(1,4,938);
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
	MR_sv(2) = (MR_Word) MR_TAG_COMMON(1,4,937);
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
	MR_sv(2) = (MR_Word) MR_TAG_COMMON(1,4,936);
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
	MR_sv(2) = (MR_Word) MR_TAG_COMMON(1,4,935);
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
	MR_sv(1) = (MR_Word) MR_string_const("\tThe jump table generated for an atomic switch", 46);
	MR_sv(2) = (MR_Word) MR_TAG_COMMON(1,4,934);
	MR_r1 = (MR_Integer) 9;
	MR_np_call_localret_ent(io__write_char_3_0,
		libs__options__options_help_hlds_llds_optimization_2_0_i24);
MR_def_label(libs__options__options_help_hlds_llds_optimization_2_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(io__write_string_3_0,
		libs__options__options_help_hlds_llds_optimization_2_0_i25);
MR_def_label(libs__options__options_help_hlds_llds_optimization_2_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 10;
	MR_np_call_localret_ent(io__write_char_3_0,
		libs__options__options_help_hlds_llds_optimization_2_0_i26);
MR_def_label(libs__options__options_help_hlds_llds_optimization_2_0,26)
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
	MR_sv(2) = (MR_Word) MR_TAG_COMMON(1,4,983);
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
	MR_sv(2) = (MR_Word) MR_TAG_COMMON(1,4,982);
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
	MR_sv(2) = (MR_Word) MR_TAG_COMMON(1,4,981);
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
	MR_sv(2) = (MR_Word) MR_TAG_COMMON(1,4,980);
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
	MR_sv(2) = (MR_Word) MR_TAG_COMMON(1,4,979);
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
	MR_sv(2) = (MR_Word) MR_TAG_COMMON(1,4,978);
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
	MR_sv(2) = (MR_Word) MR_TAG_COMMON(1,4,977);
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
	MR_sv(2) = (MR_Word) MR_TAG_COMMON(1,4,976);
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
	MR_init_label7(libs__options__options_help_mlds_mlds_optimization_2_0,32,33,34,35,36,37,38)
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
	MR_sv(2) = (MR_Word) MR_TAG_COMMON(1,4,1001);
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
	MR_sv(2) = (MR_Word) MR_TAG_COMMON(1,4,1000);
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
	MR_sv(1) = (MR_Word) MR_string_const("--no-mlds-peephole", 18);
	MR_sv(2) = (MR_Word) MR_TAG_COMMON(1,4,999);
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
	MR_sv(1) = (MR_Word) MR_string_const("\tDo not perform peephole optimization of the MLDS.", 50);
	MR_sv(2) = (MR_Word) MR_TAG_COMMON(1,4,998);
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
	MR_sv(1) = (MR_Word) MR_string_const("--no-optimize-tailcalls", 23);
	MR_sv(2) = (MR_Word) MR_TAG_COMMON(1,4,997);
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
	MR_sv(1) = (MR_Word) MR_string_const("\tTreat tailcalls as ordinary calls, rather than optimizing", 58);
	MR_sv(2) = (MR_Word) MR_TAG_COMMON(1,4,996);
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
	MR_sv(1) = (MR_Word) MR_string_const("\tby turning self-tailcalls into loops.", 38);
	MR_sv(2) = (MR_Word) MR_TAG_COMMON(1,4,995);
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
	MR_sv(1) = (MR_Word) MR_string_const("--no-optimize-initializations", 29);
	MR_sv(2) = (MR_Word) MR_TAG_COMMON(1,4,994);
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
	MR_sv(1) = (MR_Word) MR_string_const("\tLeave initializations of local variables as", 44);
	MR_sv(2) = (MR_Word) MR_TAG_COMMON(1,4,993);
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
	MR_sv(1) = (MR_Word) MR_string_const("\tassignment statements, rather than converting such", 51);
	MR_sv(2) = (MR_Word) MR_TAG_COMMON(1,4,992);
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
	MR_sv(1) = (MR_Word) MR_string_const("\tassignment statements into initializers.", 41);
	MR_sv(2) = (MR_Word) MR_TAG_COMMON(1,4,991);
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
	MR_sv(1) = (MR_Word) MR_string_const("--eliminate-local-vars", 22);
	MR_sv(2) = (MR_Word) MR_TAG_COMMON(1,4,990);
	MR_r1 = (MR_Integer) 9;
	MR_np_call_localret_ent(io__write_char_3_0,
		libs__options__options_help_mlds_mlds_optimization_2_0_i36);
MR_def_label(libs__options__options_help_mlds_mlds_optimization_2_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(io__write_string_3_0,
		libs__options__options_help_mlds_mlds_optimization_2_0_i37);
MR_def_label(libs__options__options_help_mlds_mlds_optimization_2_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 10;
	MR_np_call_localret_ent(io__write_char_3_0,
		libs__options__options_help_mlds_mlds_optimization_2_0_i38);
MR_def_label(libs__options__options_help_mlds_mlds_optimization_2_0,38)
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
	MR_sv(2) = (MR_Word) MR_TAG_COMMON(1,4,1006);
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
	MR_sv(2) = (MR_Word) MR_TAG_COMMON(1,4,1005);
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
	MR_sv(2) = (MR_Word) MR_TAG_COMMON(1,4,1004);
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
	MR_sv(2) = (MR_Word) MR_TAG_COMMON(1,4,1003);
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
	MR_init_label4(libs__options__options_help_output_optimization_2_0,32,33,34,35)
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
	MR_sv(2) = (MR_Word) MR_TAG_COMMON(1,4,1027);
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
	MR_sv(2) = (MR_Word) MR_TAG_COMMON(1,4,1026);
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
	MR_sv(2) = (MR_Word) MR_TAG_COMMON(1,4,1025);
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
	MR_sv(2) = (MR_Word) MR_TAG_COMMON(1,4,1024);
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
	MR_sv(2) = (MR_Word) MR_TAG_COMMON(1,4,1023);
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
	MR_sv(2) = (MR_Word) MR_TAG_COMMON(1,4,1022);
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
	MR_sv(2) = (MR_Word) MR_TAG_COMMON(1,4,1021);
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
	MR_sv(2) = (MR_Word) MR_TAG_COMMON(1,4,1020);
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
	MR_sv(2) = (MR_Word) MR_TAG_COMMON(1,4,1019);
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
	MR_sv(2) = (MR_Word) MR_TAG_COMMON(1,4,1018);
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
	MR_sv(1) = (MR_Word) MR_string_const("\tslightly more efficient code, but makes compilation slower.", 60);
	MR_sv(2) = (MR_Word) MR_TAG_COMMON(1,4,1017);
	MR_r1 = (MR_Integer) 9;
	MR_np_call_localret_ent(io__write_char_3_0,
		libs__options__options_help_output_optimization_2_0_i33);
MR_def_label(libs__options__options_help_output_optimization_2_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(io__write_string_3_0,
		libs__options__options_help_output_optimization_2_0_i34);
MR_def_label(libs__options__options_help_output_optimization_2_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 10;
	MR_np_call_localret_ent(io__write_char_3_0,
		libs__options__options_help_output_optimization_2_0_i35);
MR_def_label(libs__options__options_help_output_optimization_2_0,35)
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
	MR_init_label10(libs__options__options_help_target_code_compilation_2_0,2,3,4,5,6,7,8,9,10,11)
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
	MR_sv(2) = (MR_Word) MR_TAG_COMMON(1,4,1109);
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
	MR_sv(2) = (MR_Word) MR_TAG_COMMON(1,4,1108);
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
	MR_sv(1) = (MR_Word) MR_string_const("\trather than to \140mmc\'.", 22);
	MR_sv(2) = (MR_Word) MR_TAG_COMMON(1,4,1107);
	MR_r1 = (MR_Integer) 9;
	MR_np_call_localret_ent(io__write_char_3_0,
		libs__options__options_help_target_code_compilation_2_0_i9);
MR_def_label(libs__options__options_help_target_code_compilation_2_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(io__write_string_3_0,
		libs__options__options_help_target_code_compilation_2_0_i10);
MR_def_label(libs__options__options_help_target_code_compilation_2_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 10;
	MR_np_call_localret_ent(io__write_char_3_0,
		libs__options__options_help_target_code_compilation_2_0_i11);
MR_def_label(libs__options__options_help_target_code_compilation_2_0,11)
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
	MR_r1 = (MR_Word) MR_TAG_COMMON(1,4,1219);
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
	MR_r1 = (MR_Word) MR_TAG_COMMON(1,4,1355);
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
	MR_init_label8(libs__options__options_help_misc_2_0,22,23,24,25,26,27,28,29)
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
	MR_sv(2) = (MR_Word) MR_TAG_COMMON(1,4,1389);
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
	MR_sv(2) = (MR_Word) MR_TAG_COMMON(1,4,1388);
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
	MR_sv(2) = (MR_Word) MR_TAG_COMMON(1,4,1387);
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
	MR_sv(2) = (MR_Word) MR_TAG_COMMON(1,4,1386);
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
	MR_sv(2) = (MR_Word) MR_TAG_COMMON(1,4,1385);
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
	MR_sv(2) = (MR_Word) MR_TAG_COMMON(1,4,1384);
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
	MR_sv(2) = (MR_Word) MR_TAG_COMMON(1,4,1383);
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
	MR_sv(2) = (MR_Word) MR_TAG_COMMON(1,4,1382);
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
	MR_sv(2) = (MR_Word) MR_TAG_COMMON(1,4,1381);
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
	MR_init_label7(libs__options__options_help_2_0,42,43,44,45,46,47,48)
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
	MR_r1 = (MR_Word) MR_string_const("\t-\?, -h, --help\n", 16);
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
	MR_sv(2) = (MR_Word) MR_TAG_COMMON(1,4,1420);
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
	MR_sv(2) = (MR_Word) MR_TAG_COMMON(1,4,1419);
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
	MR_sv(2) = (MR_Word) MR_TAG_COMMON(1,4,1418);
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
	MR_sv(2) = (MR_Word) MR_TAG_COMMON(1,4,1417);
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
	MR_sv(2) = (MR_Word) MR_TAG_COMMON(1,4,1416);
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
	MR_sv(2) = (MR_Word) MR_TAG_COMMON(1,4,1415);
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
	MR_sv(2) = (MR_Word) MR_TAG_COMMON(1,4,1414);
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
	MR_sv(1) = (MR_Word) MR_string_const("\toptimised away.", 16);
	MR_sv(2) = (MR_Word) MR_TAG_COMMON(1,4,1413);
	MR_r1 = (MR_Integer) 9;
	MR_np_call_localret_ent(io__write_char_3_0,
		libs__options__options_help_2_0_i31);
MR_def_label(libs__options__options_help_2_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(io__write_string_3_0,
		libs__options__options_help_2_0_i32);
MR_def_label(libs__options__options_help_2_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 10;
	MR_np_call_localret_ent(io__write_char_3_0,
		libs__options__options_help_2_0_i33);
MR_def_label(libs__options__options_help_2_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(libs__options__write_tabbed_lines_3_0,
		libs__options__options_help_2_0_i34);
MR_def_label(libs__options__options_help_2_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(libs__options__options_help_termination_2_0,
		libs__options__options_help_2_0_i35);
MR_def_label(libs__options__options_help_2_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(libs__options__options_help_ctgc_2_0,
		libs__options__options_help_2_0_i36);
MR_def_label(libs__options__options_help_2_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(libs__options__options_help_compilation_model_2_0,
		libs__options__options_help_2_0_i37);
MR_def_label(libs__options__options_help_2_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(libs__options__options_help_code_generation_2_0,
		libs__options__options_help_2_0_i38);
MR_def_label(libs__options__options_help_2_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(libs__options__options_help_optimization_2_0,
		libs__options__options_help_2_0_i39);
MR_def_label(libs__options__options_help_2_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(libs__options__options_help_hlds_hlds_optimization_2_0,
		libs__options__options_help_2_0_i40);
MR_def_label(libs__options__options_help_2_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(libs__options__options_help_hlds_llds_optimization_2_0,
		libs__options__options_help_2_0_i41);
MR_def_label(libs__options__options_help_2_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(libs__options__options_help_llds_llds_optimization_2_0,
		libs__options__options_help_2_0_i42);
MR_def_label(libs__options__options_help_2_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(libs__options__options_help_mlds_mlds_optimization_2_0,
		libs__options__options_help_2_0_i43);
MR_def_label(libs__options__options_help_2_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(libs__options__options_help_hlds_elds_optimization_2_0,
		libs__options__options_help_2_0_i44);
MR_def_label(libs__options__options_help_2_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(libs__options__options_help_output_optimization_2_0,
		libs__options__options_help_2_0_i45);
MR_def_label(libs__options__options_help_2_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(libs__options__options_help_target_code_compilation_2_0,
		libs__options__options_help_2_0_i46);
MR_def_label(libs__options__options_help_2_0,46)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(libs__options__options_help_link_2_0,
		libs__options__options_help_2_0_i47);
MR_def_label(libs__options__options_help_2_0,47)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(libs__options__options_help_build_system_2_0,
		libs__options__options_help_2_0_i48);
MR_def_label(libs__options__options_help_2_0,48)
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
#ifdef MR_THREADSCOPE
void mercury__libs__options__init_threadscope_string_table(void);
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

#ifdef MR_THREADSCOPE

void mercury__libs__options__init_threadscope_string_table(void)
{
}

#endif

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;
