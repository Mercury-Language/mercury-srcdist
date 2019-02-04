/*
** Automatically generated from `make.program_target.m'
** by the Mercury compiler,
** version rotd-2007-04-03, configured for i686-pc-linux-gnu.
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
INIT mercury__make__program_target__init
ENDINIT
*/

#define MR_ALLOW_RESET
#include "mercury_imp.h"
#line 520 "../library/io.int"
#include "io.mh"

#line 27 "make.program_target.c"
#line 526 "../library/io.int"
#include "string.mh"

#line 31 "make.program_target.c"
#line 52 "../library/dir.int"
#include "dir.mh"

#line 35 "make.program_target.c"
#line 24 "libs.process_util.int"
#include "libs.process_util.mh"

#line 39 "make.program_target.c"
#line 23 "../library/bitmap.int2"
#include "bitmap.mh"

#line 43 "make.program_target.c"
#line 26 "../library/time.int2"
#include "time.mh"

#line 47 "make.program_target.c"
#line 28 "../library/array.int2"
#include "array.mh"

#line 51 "make.program_target.c"
#line 52 "make.program_target.c"
#include "make.program_target.mh"

#line 55 "make.program_target.c"
#line 56 "make.program_target.c"
#ifndef MAKE__PROGRAM_TARGET_DECL_GUARD
#define MAKE__PROGRAM_TARGET_DECL_GUARD

#line 60 "make.program_target.c"
#line 61 "make.program_target.c"

#endif
#line 64 "make.program_target.c"


struct mercury_type_0 {
	MR_Word * f1[3];
};
static const struct mercury_type_0 mercury_common_0[];

struct mercury_type_1 {
	MR_Word * f1[2];
};
static const struct mercury_type_1 mercury_common_1[];

struct mercury_type_2 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[7];
};
static const struct mercury_type_2 mercury_common_2[];

struct mercury_type_3 {
	MR_Word * f1;
	MR_Code * f2;
	MR_Integer f3;
};
static const struct mercury_type_3 mercury_common_3[];

struct mercury_type_4 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[3];
};
static const struct mercury_type_4 mercury_common_4[];

struct mercury_type_5 {
	MR_Word * f1;
	MR_Integer f2;
	MR_Word * f3;
	MR_Word * f4;
};
static const struct mercury_type_5 mercury_common_5[];

struct mercury_type_6 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[6];
};
static const struct mercury_type_6 mercury_common_6[];

struct mercury_type_7 {
	MR_Word * f1;
	MR_Word * f2;
	MR_Integer f3;
	MR_Word * f4;
	MR_Word * f5;
};
static const struct mercury_type_7 mercury_common_7[];

struct mercury_type_8 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[4];
};
static const struct mercury_type_8 mercury_common_8[];

struct mercury_type_9 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[5];
};
static const struct mercury_type_9 mercury_common_9[];

struct mercury_type_10 {
	MR_String f1;
	MR_Word * f2;
};
static const struct mercury_type_10 mercury_common_10[];

struct mercury_type_11 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[8];
};
static const struct mercury_type_11 mercury_common_11[];

struct mercury_type_12 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[9];
};
static const struct mercury_type_12 mercury_common_12[];

struct mercury_type_13 {
	MR_Integer f1;
};
static const struct mercury_type_13 mercury_common_13[];

struct mercury_type_15 {
	MR_Integer f1;
	MR_Word * f2;
};
static const struct mercury_type_15 mercury_common_15[];

struct mercury_type_16 {
	MR_Word * f1;
	MR_Word * f2;
	MR_Integer f3;
	MR_Word * f4;
};
static const struct mercury_type_16 mercury_common_16[];

struct mercury_type_17 {
	MR_Integer f1[2];
};
static const struct mercury_type_17 mercury_common_17[];

struct mercury_type_18 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[16];
};
static const struct mercury_type_18 mercury_common_18[];

struct mercury_type_19 {
	MR_Word * f1;
	MR_Integer f2;
	MR_Word * f3[6];
};
static const struct mercury_type_19 mercury_common_19[];

struct mercury_type_14 {
	MR_Word * f1;
	MR_Integer f2;
};
static const struct mercury_type_14 mercury_vector_common_14_0[];
MR_decl_label4(make__program_target__IntroducedFrom__pred__build_linked_target_2__423__1_7_0, 2,5,4,7)
MR_decl_label4(make__program_target__IntroducedFrom__pred__generate_archive_index__1302__1_4_0, 2,3,4,5)
MR_decl_label4(make__program_target__IntroducedFrom__pred__install_file__1197__1_4_0, 2,3,4,5)
MR_decl_label2(make__program_target__IntroducedFrom__pred__install_library_grade__935__1_3_0, 2,3)
MR_decl_label3(make__program_target__IntroducedFrom__pred__install_library_grade__963__1_1_0, 5,3,1)
MR_decl_label1(make__program_target__IntroducedFrom__pred__install_library_grade__977__1_9_0, 2)
MR_decl_label2(make__program_target__IntroducedFrom__pred__make_install_dirs__1233__1_5_0, 2,3)
MR_decl_label1(make__program_target__IntroducedFrom__pred__make_module_clean__1405__1_6_0, 2)
MR_decl_label3(make__program_target__IntroducedFrom__pred__make_module_clean__1416__1_7_0, 2,3,4)
MR_decl_label8(f_109_97_107_101_95_95_112_114_111_103_114_97_109_95_116_97_114_103_101_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_97_110_97_108_121_115_105_115_95_102_105_108_101_115_95_50_95_95_91_49_93_95_48_9_0, 36,2,3,4,5,6,7,9)
MR_decl_label8(f_109_97_107_101_95_95_112_114_111_103_114_97_109_95_116_97_114_103_101_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_97_110_97_108_121_115_105_115_95_102_105_108_101_115_95_50_95_95_91_49_93_95_48_9_0, 11,12,8,15,17,18,14,20)
MR_decl_label8(f_109_97_107_101_95_95_112_114_111_103_114_97_109_95_116_97_114_103_101_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_107_101_95_108_105_110_107_101_100_95_116_97_114_103_101_116_95_50_95_95_91_50_93_95_48_7_0, 2,3,4,7,8,10,11,12)
MR_decl_label8(f_109_97_107_101_95_95_112_114_111_103_114_97_109_95_116_97_114_103_101_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_107_101_95_108_105_110_107_101_100_95_116_97_114_103_101_116_95_50_95_95_91_50_93_95_48_7_0, 13,14,15,9,17,18,19,20)
MR_decl_label8(f_109_97_107_101_95_95_112_114_111_103_114_97_109_95_116_97_114_103_101_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_107_101_95_108_105_110_107_101_100_95_116_97_114_103_101_116_95_50_95_95_91_50_93_95_48_7_0, 21,22,23,25,26,28,29,24)
MR_decl_label5(f_109_97_107_101_95_95_112_114_111_103_114_97_109_95_116_97_114_103_101_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_107_101_95_108_105_110_107_101_100_95_116_97_114_103_101_116_95_50_95_95_91_50_93_95_48_7_0, 30,31,32,33,34)
MR_decl_label8(f_109_97_107_101_95_95_112_114_111_103_114_97_109_95_116_97_114_103_101_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_107_101_95_109_105_115_99_95_116_97_114_103_101_116_95_98_117_105_108_100_101_114_95_95_91_50_93_95_48_7_0, 4,3,2,6,7,8,12,13)
MR_decl_label8(f_109_97_107_101_95_95_112_114_111_103_114_97_109_95_116_97_114_103_101_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_107_101_95_109_105_115_99_95_116_97_114_103_101_116_95_98_117_105_108_100_101_114_95_95_91_50_93_95_48_7_0, 15,16,17,18,20,21,22,23)
MR_decl_label8(f_109_97_107_101_95_95_112_114_111_103_114_97_109_95_116_97_114_103_101_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_107_101_95_109_105_115_99_95_116_97_114_103_101_116_95_98_117_105_108_100_101_114_95_95_91_50_93_95_48_7_0, 25,26,27,28,30,31,32,34)
MR_decl_label8(f_109_97_107_101_95_95_112_114_111_103_114_97_109_95_116_97_114_103_101_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_107_101_95_109_105_115_99_95_116_97_114_103_101_116_95_98_117_105_108_100_101_114_95_95_91_50_93_95_48_7_0, 36,39,41,42,44,45,47,49)
MR_decl_label8(f_109_97_107_101_95_95_112_114_111_103_114_97_109_95_116_97_114_103_101_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_107_101_95_109_105_115_99_95_116_97_114_103_101_116_95_98_117_105_108_100_101_114_95_95_91_50_93_95_48_7_0, 50,51,52,55,56,11,59,60)
MR_decl_label4(f_109_97_107_101_95_95_112_114_111_103_114_97_109_95_116_97_114_103_101_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_107_101_95_109_105_115_99_95_116_97_114_103_101_116_95_98_117_105_108_100_101_114_95_95_91_50_93_95_48_7_0, 61,64,65,66)
MR_decl_label7(make__program_target__build_analysis_files_8_0, 2,3,4,7,8,9,11)
MR_decl_label6(make__program_target__build_linked_target_16_0, 2,14,4,6,7,8)
MR_decl_label8(make__program_target__build_linked_target_2_16_0, 2,3,4,8,7,10,12,13)
MR_decl_label8(make__program_target__build_linked_target_2_16_0, 5,14,15,16,17,19,21,22)
MR_decl_label8(make__program_target__build_linked_target_2_16_0, 26,27,28,32,31,36,39,38)
MR_decl_label8(make__program_target__build_linked_target_2_16_0, 40,41,35,43,44,45,46,47)
MR_decl_label8(make__program_target__build_linked_target_2_16_0, 48,49,50,51,53,55,56,57)
MR_decl_label8(make__program_target__build_linked_target_2_16_0, 58,59,60,61,52,63,66,65)
MR_decl_label5(make__program_target__build_linked_target_2_16_0, 67,42,29,69,71)
MR_decl_label8(make__program_target__get_foreign_object_targets_7_0, 2,3,6,5,4,12,14,9)
MR_decl_label7(make__program_target__get_foreign_object_targets_7_0, 19,16,22,27,28,29,30)
MR_decl_label6(make__program_target__get_target_modules_7_0, 2,8,20,6,4,3)
MR_decl_label4(make__program_target__get_target_modules_2_7_0, 2,6,3,4)
MR_decl_label5(make__program_target__install_file_5_0, 2,3,4,5,6)
MR_decl_label6(make__program_target__install_grade_init_5_0, 2,3,4,5,6,7)
MR_decl_label8(make__program_target__install_grade_ints_and_headers_8_0, 2,4,5,6,7,8,9,12)
MR_decl_label8(make__program_target__install_grade_ints_and_headers_8_0, 11,16,17,18,19,20,21,22)
MR_decl_label8(make__program_target__install_grade_ints_and_headers_8_0, 10,24,25,26,28,29,30,32)
MR_decl_label3(make__program_target__install_grade_ints_and_headers_8_0, 33,34,35)
MR_decl_label8(make__program_target__install_ints_and_headers_7_0, 2,4,5,7,9,10,11,12)
MR_decl_label8(make__program_target__install_ints_and_headers_7_0, 13,14,15,18,17,20,21,22)
MR_decl_label5(make__program_target__install_ints_and_headers_7_0, 23,24,25,16,27)
MR_decl_label8(make__program_target__install_library_6_0, 2,3,4,8,9,10,11,13)
MR_decl_label5(make__program_target__install_library_6_0, 16,17,18,12,5)
MR_decl_label8(make__program_target__install_library_grade_9_0, 2,3,4,5,6,7,10,9)
MR_decl_label8(make__program_target__install_library_grade_9_0, 12,8,16,17,18,19,15,20)
MR_decl_label1(make__program_target__install_library_grade_9_0, 21)
MR_decl_label6(make__program_target__install_library_grade_2_8_0, 2,4,5,6,7,8)
MR_decl_label8(make__program_target__install_library_grade_files_9_0, 2,3,5,6,7,8,9,12)
MR_decl_label8(make__program_target__install_library_grade_files_9_0, 13,14,15,10,17,18,19,20)
MR_decl_label8(make__program_target__install_library_grade_files_9_0, 21,32,22,23,26,27,28,29)
MR_decl_label8(make__program_target__install_subdir_file_7_0, 2,3,4,7,8,9,10,5)
MR_decl_label8(make__program_target__linked_target_cleanup_8_0, 2,6,5,8,9,10,11,12)
MR_decl_label2(make__program_target__linked_target_cleanup_8_0, 13,15)
MR_decl_label8(make__program_target__make_grade_install_dirs_5_0, 2,3,4,5,6,7,8,9)
MR_decl_label8(make__program_target__make_grade_install_dirs_5_0, 10,11,12,13,14,15,16,17)
MR_decl_label8(make__program_target__make_grade_install_dirs_5_0, 18,19,22,23,24,25,26,27)
MR_decl_label8(make__program_target__make_grade_install_dirs_5_0, 28,29,21,20,34,33,31,40)
MR_decl_label8(make__program_target__make_grade_install_dirs_5_0, 41,42,43,47,49,45,54,55)
MR_decl_label8(make__program_target__make_grade_install_dirs_5_0, 56,57,59,61,62,63,64,65)
MR_decl_label8(make__program_target__make_install_dirs_4_0, 2,3,4,5,6,7,8,9)
MR_decl_label8(make__program_target__make_install_dirs_4_0, 10,11,12,13,16,15,14,18)
MR_decl_label2(make__program_target__make_install_symlink_5_0, 2,3)
MR_decl_label8(make__program_target__make_linked_target_6_0, 3,9,7,13,6,5,15,17)
MR_decl_label2(make__program_target__make_linked_target_6_0, 19,21)
MR_decl_label8(make__program_target__make_main_module_realclean_5_0, 2,3,4,5,6,7,8,9)
MR_decl_label5(make__program_target__make_main_module_realclean_5_0, 10,11,12,13,14)
MR_decl_label8(make__program_target__make_module_clean_5_0, 2,3,4,6,5,7,8,9)
MR_decl_label8(make__program_target__make_module_clean_5_0, 10,11,12,13,14,15,16,17)
MR_decl_label5(make__program_target__make_module_realclean_5_0, 2,3,4,5,6)
MR_decl_label8(make__program_target__maybe_install_library_file_6_0, 2,4,6,10,11,12,13,14)
MR_decl_label6(make__program_target__maybe_install_library_file_6_0, 15,16,17,18,3,21)
MR_decl_label2(make__program_target__maybe_make_grade_clean_7_0, 13,4)
MR_decl_label8(make__program_target__modules_needing_reanalysis_6_0, 40,4,5,23,7,11,10,13)
MR_decl_label2(make__program_target__modules_needing_reanalysis_6_0, 3,44)
MR_decl_label8(make__program_target__print_mkdir_errors_4_0, 21,5,7,8,9,10,11,3)
MR_decl_label6(make__program_target__remove_init_files_5_0, 2,3,4,5,6,7)
MR_decl_label1(make__program_target__reset_analysis_registry_dependency_status_3_0, 2)
MR_decl_label6(make__program_target__reverse_ordered_modules_3_0, 2,3,4,5,6,7)
MR_decl_label2(fn__make__program_target__lookup_module_imports_2_0, 2,4)
MR_def_extern_entry(make__program_target__make_misc_target_6_0)
MR_decl_static(make__program_target__get_target_modules_7_0)
MR_decl_static(make__program_target__modules_needing_reanalysis_6_0)
MR_decl_static(make__program_target__reverse_ordered_modules_3_0)
MR_decl_static(make__program_target__build_analysis_files_8_0)
MR_decl_static(make__program_target__install_file_5_0)
MR_decl_static(make__program_target__install_grade_init_5_0)
MR_decl_static(make__program_target__maybe_install_library_file_6_0)
MR_decl_static(make__program_target__print_mkdir_errors_4_0)
MR_decl_static(make__program_target__make_install_symlink_5_0)
MR_decl_static(make__program_target__make_grade_install_dirs_5_0)
MR_decl_static(make__program_target__install_library_grade_files_9_0)
MR_decl_static(make__program_target__make_install_dirs_4_0)
MR_decl_static(make__program_target__install_library_6_0)
MR_decl_static(make__program_target__remove_init_files_5_0)
MR_decl_static(make__program_target__make_main_module_realclean_5_0)
MR_def_extern_entry(make__program_target__make_linked_target_6_0)
MR_decl_static(make__program_target__make_misc_target_builder_7_0)
MR_decl_static(fn__make__program_target__this_file_0_0)
MR_decl_static(make__program_target__make_linked_target_2_7_0)
MR_decl_static(make__program_target__get_target_modules_2_7_0)
MR_decl_static(make__program_target__get_foreign_object_targets_7_0)
MR_decl_static(make__program_target__build_linked_target_2_16_0)
MR_decl_static(make__program_target__build_linked_target_16_0)
MR_decl_static(make__program_target__linked_target_cleanup_8_0)
MR_decl_static(fn__make__program_target__lookup_module_imports_2_0)
MR_decl_static(make__program_target__reset_analysis_registry_dependency_status_3_0)
MR_decl_static(make__program_target__install_subdir_file_7_0)
MR_decl_static(make__program_target__install_ints_and_headers_7_0)
MR_decl_static(make__program_target__install_library_grade_9_0)
MR_decl_static(make__program_target__maybe_make_grade_clean_7_0)
MR_decl_static(make__program_target__install_library_grade_2_8_0)
MR_decl_static(make__program_target__install_grade_ints_and_headers_8_0)
MR_decl_static(make__program_target__make_module_clean_5_0)
MR_decl_static(make__program_target__make_module_realclean_5_0)
MR_decl_static(fn__make__program_target__IntroducedFrom__func__get_foreign_object_targets__270__1_2_0)
MR_decl_static(fn__make__program_target__IntroducedFrom__func__get_foreign_object_targets__284__1_3_0)
MR_decl_static(fn__make__program_target__IntroducedFrom__func__get_foreign_object_targets__284__2_3_0)
MR_decl_static(fn__make__program_target__IntroducedFrom__func__build_linked_target_2__377__1_1_0)
MR_decl_static(make__program_target__IntroducedFrom__pred__build_linked_target_2__386__1_3_0)
MR_decl_static(make__program_target__IntroducedFrom__pred__build_linked_target_2__423__1_7_0)
MR_decl_static(fn__make__program_target__IntroducedFrom__func__build_linked_target_2__438__1_1_0)
MR_decl_static(make__program_target__IntroducedFrom__pred__build_linked_target_2__443__1_5_0)
MR_decl_static(make__program_target__IntroducedFrom__pred__make_misc_target_builder__598__1_8_0)
MR_decl_static(make__program_target__IntroducedFrom__pred__build_analysis_files__681__1_2_0)
MR_decl_static(make__program_target__IntroducedFrom__pred__reverse_ordered_modules__747__1_2_0)
MR_decl_static(make__program_target__IntroducedFrom__pred__install_library_grade__935__1_3_0)
MR_decl_static(make__program_target__IntroducedFrom__pred__install_library_grade__963__1_1_0)
MR_decl_static(make__program_target__IntroducedFrom__pred__install_library_grade__977__1_9_0)
MR_decl_static(make__program_target__IntroducedFrom__pred__install_file__1197__1_4_0)
MR_decl_static(make__program_target__IntroducedFrom__pred__make_install_dirs__1233__1_5_0)
MR_decl_static(make__program_target__IntroducedFrom__pred__generate_archive_index__1302__1_4_0)
MR_decl_static(make__program_target__IntroducedFrom__pred__make_module_clean__1405__1_6_0)
MR_decl_static(make__program_target__IntroducedFrom__pred__make_module_clean__1424__1_7_0)
MR_decl_static(make__program_target__IntroducedFrom__pred__make_module_clean__1416__1_7_0)
MR_decl_static(f_109_97_107_101_95_95_112_114_111_103_114_97_109_95_116_97_114_103_101_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_107_101_95_108_105_110_107_101_100_95_116_97_114_103_101_116_95_50_95_95_91_50_93_95_48_7_0)
MR_decl_static(f_109_97_107_101_95_95_112_114_111_103_114_97_109_95_116_97_114_103_101_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_107_101_95_109_105_115_99_95_116_97_114_103_101_116_95_98_117_105_108_100_101_114_95_95_91_50_93_95_48_7_0)
MR_decl_static(f_109_97_107_101_95_95_112_114_111_103_114_97_109_95_116_97_114_103_101_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_97_110_97_108_121_115_105_115_95_102_105_108_101_115_95_50_95_95_91_49_93_95_48_9_0)

extern const MR_TypeCtorInfo_Struct mercury_data_pair__type_ctor_info_pair_2;
extern const MR_TypeCtorInfo_Struct mercury_data_mdbcomp__prim_data__type_ctor_info_sym_name_0;
extern const MR_TypeCtorInfo_Struct mercury_data_make__type_ctor_info_misc_target_type_0;
extern const MR_TypeCtorInfo_Struct mercury_data_tree234__type_ctor_info_tree234_2;
extern const MR_TypeCtorInfo_Struct mercury_data_mdbcomp__prim_data__type_ctor_info_sym_name_0;
extern const MR_TypeCtorInfo_Struct mercury_data_make__type_ctor_info_target_type_0;
extern const MR_TypeCtorInfo_Struct mercury_data_make__dependencies__type_ctor_info_dependency_file_0;
extern const MR_TypeCtorInfo_Struct mercury_data_make__type_ctor_info_dependency_status_0;
extern const MR_TypeCtorInfo_Struct mercury_data_make__dependencies__type_ctor_info_dependency_file_0;
extern const MR_TypeCtorInfo_Struct mercury_data_make__type_ctor_info_dependency_status_0;
static const struct mercury_type_0 mercury_common_0[5] =
{
{
{
MR_CTOR_ADDR(pair, pair, 2),
MR_CTOR0_ADDR(mdbcomp__prim_data, sym_name),
MR_CTOR0_ADDR(make, misc_target_type)
}
},
{
{
MR_CTOR_ADDR(tree234, tree234, 2),
MR_CTOR0_ADDR(mdbcomp__prim_data, sym_name),
MR_COMMON(1,4)
}
},
{
{
MR_CTOR_ADDR(pair, pair, 2),
MR_CTOR0_ADDR(mdbcomp__prim_data, sym_name),
MR_CTOR0_ADDR(make, target_type)
}
},
{
{
MR_CTOR_ADDR(pair, pair, 2),
MR_CTOR0_ADDR(make__dependencies, dependency_file),
MR_CTOR0_ADDR(make, dependency_status)
}
},
{
{
MR_CTOR_ADDR(pair, pair, 2),
MR_CTOR0_ADDR(make__dependencies, dependency_file),
MR_CTOR0_ADDR(make, dependency_status)
}
},
};

extern const MR_TypeCtorInfo_Struct mercury_data_list__type_ctor_info_list_1;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_string_0;
extern const MR_BaseTypeclassInfo mercury_data_base_typeclass_info_analysis__compiler__arity1__transform_hlds__mmc_analysis__mmc__arity0__[];
extern const MR_TypeCtorInfo_Struct mercury_data_transform_hlds__mmc_analysis__type_ctor_info_mmc_0;
extern const MR_TypeCtorInfo_Struct mercury_data_maybe__type_ctor_info_maybe_1;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__modules__type_ctor_info_module_imports_0;
extern const MR_TypeCtorInfo_Struct mercury_data_relation__type_ctor_info_relation_1;
extern const MR_TypeCtorInfo_Struct mercury_data_maybe__type_ctor_info_maybe_error_1;
extern const MR_TypeCtorInfo_Struct mercury_data_libs__timestamp__type_ctor_info_timestamp_0;
extern const MR_TypeCtorInfo_Struct mercury_data_libs__timestamp__type_ctor_info_timestamp_0;
extern const MR_TypeCtorInfo_Struct mercury_data_make__module_target__type_ctor_info_foreign_code_file_0;
extern const MR_TypeCtorInfo_Struct mercury_data_make__module_target__type_ctor_info_foreign_code_file_0;
extern const MR_TypeCtorInfo_Struct mercury_data_maybe__type_ctor_info_maybe_1;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__modules__type_ctor_info_module_imports_0;
static const struct mercury_type_1 mercury_common_1[26] =
{
{
{
MR_LIST_CTOR_ADDR,
MR_STRING_CTOR_ADDR
}
},
{
{
MR_LIST_CTOR_ADDR,
MR_CTOR0_ADDR(mdbcomp__prim_data, sym_name)
}
},
{
{
MR_LIST_CTOR_ADDR,
MR_CTOR0_ADDR(mdbcomp__prim_data, sym_name)
}
},
{
{
(MR_Word *) &mercury_data_base_typeclass_info_analysis__compiler__arity1__transform_hlds__mmc_analysis__mmc__arity0__,
MR_CTOR0_ADDR(transform_hlds__mmc_analysis, mmc)
}
},
{
{
MR_CTOR1_ADDR(maybe, maybe),
MR_CTOR0_ADDR(parse_tree__modules, module_imports)
}
},
{
{
MR_CTOR1_ADDR(relation, relation),
MR_CTOR0_ADDR(mdbcomp__prim_data, sym_name)
}
},
{
{
MR_CTOR1_ADDR(relation, relation),
MR_CTOR0_ADDR(mdbcomp__prim_data, sym_name)
}
},
{
{
MR_CTOR1_ADDR(maybe, maybe_error),
MR_CTOR0_ADDR(libs__timestamp, timestamp)
}
},
{
{
MR_CTOR1_ADDR(maybe, maybe_error),
MR_CTOR0_ADDR(libs__timestamp, timestamp)
}
},
{
{
MR_LIST_CTOR_ADDR,
MR_CTOR0_ADDR(make__module_target, foreign_code_file)
}
},
{
{
MR_LIST_CTOR_ADDR,
MR_CTOR0_ADDR(make__module_target, foreign_code_file)
}
},
{
{
MR_CTOR1_ADDR(maybe, maybe),
MR_CTOR0_ADDR(parse_tree__modules, module_imports)
}
},
{
{
MR_tbmkword(0, 11),
MR_tbmkword(0, 0)
}
},
{
{
MR_tbmkword(0, 9),
MR_TAG_COMMON(1,1,12)
}
},
{
{
MR_TAG_COMMON(1,13,1),
MR_TAG_COMMON(1,1,13)
}
},
{
{
MR_tbmkword(0, 8),
MR_TAG_COMMON(1,1,14)
}
},
{
{
MR_tbmkword(0, 1),
MR_TAG_COMMON(1,1,15)
}
},
{
{
MR_TAG_COMMON(1,13,0),
MR_tbmkword(0, 0)
}
},
{
{
MR_tbmkword(0, 7),
MR_TAG_COMMON(1,1,17)
}
},
{
{
MR_tbmkword(0, 6),
MR_TAG_COMMON(1,1,18)
}
},
{
{
MR_tbmkword(0, 5),
MR_TAG_COMMON(1,1,19)
}
},
{
{
MR_tbmkword(0, 4),
MR_TAG_COMMON(1,1,20)
}
},
{
{
MR_tbmkword(0, 3),
MR_TAG_COMMON(1,1,21)
}
},
{
{
MR_tbmkword(0, 2),
MR_TAG_COMMON(1,1,22)
}
},
{
{
MR_LIST_CTOR_ADDR,
MR_CTOR0_ADDR(make__dependencies, dependency_file)
}
},
{
{
MR_LIST_CTOR_ADDR,
MR_CTOR0_ADDR(make__dependencies, dependency_file)
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__make__program_target__make_misc_target_6_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_bool__type_ctor_info_bool_0;
extern const MR_TypeCtorInfo_Struct mercury_data_make__type_ctor_info_make_info_0;
extern const MR_TypeCtorInfo_Struct mercury_data_io__type_ctor_info_state_0;
static const MR_UserClosureId
mercury_data__closure_layout__make__program_target__get_target_modules_7_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_mdbcomp__prim_data__type_ctor_info_sym_name_0;
static const MR_UserClosureId
mercury_data__closure_layout__make__program_target__install_library_6_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__make__program_target__make_linked_target_6_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_make__type_ctor_info_linked_target_file_0;
static const MR_UserClosureId
mercury_data__closure_layout__make__program_target__make_linked_target_6_0_2;
static const MR_UserClosureId
mercury_data__closure_layout__make__program_target__build_linked_target_2_16_0_3;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_string_0;
static const MR_UserClosureId
mercury_data__closure_layout__make__program_target__build_linked_target_2_16_0_5;
extern const MR_TypeCtorInfo_Struct mercury_data_backend_libs__compile_target_code__type_ctor_info_pic_0;
static const MR_UserClosureId
mercury_data__closure_layout__make__program_target__build_linked_target_2_16_0_8;
extern const MR_TypeCtorInfo_Struct mercury_data_io__type_ctor_info_output_stream_0;
extern const MR_TypeCtorInfo_Struct mercury_data_backend_libs__compile_target_code__type_ctor_info_linked_target_type_0;
static const MR_UserClosureId
mercury_data__closure_layout__make__program_target__build_linked_target_2_16_0_9;
static const MR_UserClosureId
mercury_data__closure_layout__make__program_target__install_ints_and_headers_7_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__make__program_target__install_library_grade_9_0_3;
static const MR_UserClosureId
mercury_data__closure_layout__make__program_target__install_library_grade_2_8_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__make__program_target__make_module_clean_5_0_5;
static const MR_UserClosureId
mercury_data__closure_layout__make__program_target__IntroducedFrom__pred__make_module_clean__1416__1_7_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__f_109_97_107_101_95_95_112_114_111_103_114_97_109_95_116_97_114_103_101_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_107_101_95_108_105_110_107_101_100_95_116_97_114_103_101_116_95_50_95_95_91_50_93_95_48_7_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__f_109_97_107_101_95_95_112_114_111_103_114_97_109_95_116_97_114_103_101_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_107_101_95_108_105_110_107_101_100_95_116_97_114_103_101_116_95_50_95_95_91_50_93_95_48_7_0_6;
static const MR_UserClosureId
mercury_data__closure_layout__f_109_97_107_101_95_95_112_114_111_103_114_97_109_95_116_97_114_103_101_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_97_110_97_108_121_115_105_115_95_102_105_108_101_115_95_50_95_95_91_49_93_95_48_9_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_make__dependencies__type_ctor_info_dependency_file_0;
static const struct mercury_type_2 mercury_common_2[17] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__make__program_target__make_misc_target_6_0_1,
(MR_Word *) (MR_Integer) 0
},
7,
{
MR_COMMON(0,0),
MR_COMMON(1,0),
MR_BOOL_CTOR_ADDR,
MR_CTOR0_ADDR(make, make_info),
MR_CTOR0_ADDR(make, make_info),
MR_IO_CTOR_ADDR,
MR_IO_CTOR_ADDR
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__make__program_target__get_target_modules_7_0_1,
(MR_Word *) (MR_Integer) 0
},
7,
{
MR_CTOR0_ADDR(mdbcomp__prim_data, sym_name),
MR_COMMON(1,2),
MR_COMMON(1,2),
MR_CTOR0_ADDR(make, make_info),
MR_CTOR0_ADDR(make, make_info),
MR_IO_CTOR_ADDR,
MR_IO_CTOR_ADDR
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__make__program_target__install_library_6_0_1,
(MR_Word *) (MR_Integer) 0
},
7,
{
MR_BOOL_CTOR_ADDR,
MR_CTOR0_ADDR(mdbcomp__prim_data, sym_name),
MR_BOOL_CTOR_ADDR,
MR_CTOR0_ADDR(make, make_info),
MR_CTOR0_ADDR(make, make_info),
MR_IO_CTOR_ADDR,
MR_IO_CTOR_ADDR
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__make__program_target__make_linked_target_6_0_1,
(MR_Word *) (MR_Integer) 0
},
7,
{
MR_CTOR0_ADDR(make, linked_target_file),
MR_COMMON(1,0),
MR_BOOL_CTOR_ADDR,
MR_CTOR0_ADDR(make, make_info),
MR_CTOR0_ADDR(make, make_info),
MR_IO_CTOR_ADDR,
MR_IO_CTOR_ADDR
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__make__program_target__make_linked_target_6_0_2,
(MR_Word *) (MR_Integer) 0
},
7,
{
MR_CTOR0_ADDR(make, linked_target_file),
MR_COMMON(1,0),
MR_BOOL_CTOR_ADDR,
MR_CTOR0_ADDR(make, make_info),
MR_CTOR0_ADDR(make, make_info),
MR_IO_CTOR_ADDR,
MR_IO_CTOR_ADDR
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__make__program_target__build_linked_target_2_16_0_3,
(MR_Word *) (MR_Integer) 0
},
7,
{
MR_COMMON(1,0),
MR_STRING_CTOR_ADDR,
MR_COMMON(1,8),
MR_CTOR0_ADDR(make, make_info),
MR_CTOR0_ADDR(make, make_info),
MR_IO_CTOR_ADDR,
MR_IO_CTOR_ADDR
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__make__program_target__build_linked_target_2_16_0_5,
(MR_Word *) (MR_Integer) 0
},
7,
{
MR_CTOR0_ADDR(backend_libs__compile_target_code, pic),
MR_CTOR0_ADDR(mdbcomp__prim_data, sym_name),
MR_COMMON(1,9),
MR_CTOR0_ADDR(make, make_info),
MR_CTOR0_ADDR(make, make_info),
MR_IO_CTOR_ADDR,
MR_IO_CTOR_ADDR
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__make__program_target__build_linked_target_2_16_0_8,
(MR_Word *) (MR_Integer) 0
},
7,
{
MR_CTOR0_ADDR(io, output_stream),
MR_CTOR0_ADDR(backend_libs__compile_target_code, linked_target_type),
MR_CTOR0_ADDR(mdbcomp__prim_data, sym_name),
MR_COMMON(1,0),
MR_BOOL_CTOR_ADDR,
MR_IO_CTOR_ADDR,
MR_IO_CTOR_ADDR
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__make__program_target__build_linked_target_2_16_0_9,
(MR_Word *) (MR_Integer) 0
},
7,
{
MR_CTOR0_ADDR(io, output_stream),
MR_CTOR0_ADDR(backend_libs__compile_target_code, linked_target_type),
MR_CTOR0_ADDR(mdbcomp__prim_data, sym_name),
MR_COMMON(1,0),
MR_BOOL_CTOR_ADDR,
MR_IO_CTOR_ADDR,
MR_IO_CTOR_ADDR
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__make__program_target__install_ints_and_headers_7_0_1,
(MR_Word *) (MR_Integer) 0
},
7,
{
MR_BOOL_CTOR_ADDR,
MR_STRING_CTOR_ADDR,
MR_CTOR0_ADDR(mdbcomp__prim_data, sym_name),
MR_STRING_CTOR_ADDR,
MR_BOOL_CTOR_ADDR,
MR_IO_CTOR_ADDR,
MR_IO_CTOR_ADDR
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__make__program_target__install_library_grade_9_0_3,
(MR_Word *) (MR_Integer) 0
},
7,
{
MR_BOOL_CTOR_ADDR,
MR_CTOR0_ADDR(mdbcomp__prim_data, sym_name),
MR_COMMON(1,2),
MR_CTOR0_ADDR(make, make_info),
MR_CTOR0_ADDR(make, make_info),
MR_IO_CTOR_ADDR,
MR_IO_CTOR_ADDR
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__make__program_target__install_library_grade_2_8_0_1,
(MR_Word *) (MR_Integer) 0
},
7,
{
MR_COMMON(0,0),
MR_COMMON(1,0),
MR_BOOL_CTOR_ADDR,
MR_CTOR0_ADDR(make, make_info),
MR_CTOR0_ADDR(make, make_info),
MR_IO_CTOR_ADDR,
MR_IO_CTOR_ADDR
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__make__program_target__make_module_clean_5_0_5,
(MR_Word *) (MR_Integer) 0
},
7,
{
MR_CTOR0_ADDR(mdbcomp__prim_data, sym_name),
MR_COMMON(1,0),
MR_CTOR0_ADDR(backend_libs__compile_target_code, pic),
MR_CTOR0_ADDR(make, make_info),
MR_CTOR0_ADDR(make, make_info),
MR_IO_CTOR_ADDR,
MR_IO_CTOR_ADDR
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__make__program_target__IntroducedFrom__pred__make_module_clean__1416__1_7_0_1,
(MR_Word *) (MR_Integer) 0
},
7,
{
MR_CTOR0_ADDR(mdbcomp__prim_data, sym_name),
MR_CTOR0_ADDR(backend_libs__compile_target_code, pic),
MR_STRING_CTOR_ADDR,
MR_CTOR0_ADDR(make, make_info),
MR_CTOR0_ADDR(make, make_info),
MR_IO_CTOR_ADDR,
MR_IO_CTOR_ADDR
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__f_109_97_107_101_95_95_112_114_111_103_114_97_109_95_116_97_114_103_101_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_107_101_95_108_105_110_107_101_100_95_116_97_114_103_101_116_95_50_95_95_91_50_93_95_48_7_0_1,
(MR_Word *) (MR_Integer) 0
},
7,
{
MR_CTOR0_ADDR(backend_libs__compile_target_code, pic),
MR_CTOR0_ADDR(mdbcomp__prim_data, sym_name),
MR_COMMON(1,24),
MR_CTOR0_ADDR(make, make_info),
MR_CTOR0_ADDR(make, make_info),
MR_IO_CTOR_ADDR,
MR_IO_CTOR_ADDR
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__f_109_97_107_101_95_95_112_114_111_103_114_97_109_95_116_97_114_103_101_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_107_101_95_108_105_110_107_101_100_95_116_97_114_103_101_116_95_50_95_95_91_50_93_95_48_7_0_6,
(MR_Word *) (MR_Integer) 0
},
7,
{
MR_CTOR0_ADDR(mdbcomp__prim_data, sym_name),
MR_COMMON(19,0),
MR_BOOL_CTOR_ADDR,
MR_CTOR0_ADDR(make, make_info),
MR_CTOR0_ADDR(make, make_info),
MR_IO_CTOR_ADDR,
MR_IO_CTOR_ADDR
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__f_109_97_107_101_95_95_112_114_111_103_114_97_109_95_116_97_114_103_101_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_97_110_97_108_121_115_105_115_95_102_105_108_101_115_95_50_95_95_91_49_93_95_48_9_0_1,
(MR_Word *) (MR_Integer) 0
},
7,
{
MR_COMMON(1,0),
MR_CTOR0_ADDR(make__dependencies, dependency_file),
MR_BOOL_CTOR_ADDR,
MR_CTOR0_ADDR(make, make_info),
MR_CTOR0_ADDR(make, make_info),
MR_IO_CTOR_ADDR,
MR_IO_CTOR_ADDR
}
},
};

MR_decl_entry(fn__libs__options__quote_arg_1_0);
MR_decl_entry(make__util__make_remove_file_5_0);
MR_decl_entry(make__dependencies__dependency_status_6_0);
MR_decl_entry(make__module_target__make_module_target_6_0);
static const struct mercury_type_3 mercury_common_3[20] =
{
{
MR_COMMON(2,1),
MR_ENTRY_AP(make__program_target__get_target_modules_2_7_0),
0
},
{
MR_COMMON(7,0),
MR_ENTRY_AP(make__program_target__IntroducedFrom__pred__reverse_ordered_modules__747__1_2_0),
0
},
{
MR_COMMON(7,2),
MR_ENTRY_AP(fn__libs__options__quote_arg_1_0),
0
},
{
MR_COMMON(9,3),
MR_ENTRY_AP(make__util__make_remove_file_5_0),
0
},
{
MR_COMMON(7,3),
MR_ENTRY_AP(fn__make__program_target__IntroducedFrom__func__build_linked_target_2__377__1_1_0),
0
},
{
MR_COMMON(6,2),
MR_ENTRY_AP(make__dependencies__dependency_status_6_0),
0
},
{
MR_COMMON(4,2),
MR_ENTRY_AP(make__program_target__IntroducedFrom__pred__build_linked_target_2__386__1_3_0),
0
},
{
MR_COMMON(7,4),
MR_ENTRY_AP(fn__make__program_target__IntroducedFrom__func__build_linked_target_2__438__1_1_0),
0
},
{
MR_COMMON(16,0),
MR_ENTRY_AP(make__program_target__IntroducedFrom__pred__install_library_grade__963__1_1_0),
0
},
{
MR_COMMON(9,5),
MR_ENTRY_AP(make__program_target__make_module_clean_5_0),
0
},
{
MR_COMMON(6,9),
MR_ENTRY_AP(make__module_target__make_module_target_6_0),
0
},
{
MR_COMMON(6,10),
MR_ENTRY_AP(make__module_target__make_module_target_6_0),
0
},
{
MR_COMMON(6,11),
MR_ENTRY_AP(make__module_target__make_module_target_6_0),
0
},
{
MR_COMMON(9,6),
MR_ENTRY_AP(make__program_target__make_module_clean_5_0),
0
},
{
MR_COMMON(9,7),
MR_ENTRY_AP(make__program_target__make_module_realclean_5_0),
0
},
{
MR_COMMON(6,12),
MR_ENTRY_AP(make__module_target__make_module_target_6_0),
0
},
{
MR_COMMON(6,13),
MR_ENTRY_AP(make__module_target__make_module_target_6_0),
0
},
{
MR_COMMON(6,14),
MR_ENTRY_AP(make__module_target__make_module_target_6_0),
0
},
{
MR_COMMON(4,4),
MR_ENTRY_AP(make__program_target__reset_analysis_registry_dependency_status_3_0),
0
},
{
MR_COMMON(4,5),
MR_ENTRY_AP(make__program_target__reset_analysis_registry_dependency_status_3_0),
0
},
};

static const MR_UserClosureId
mercury_data__closure_layout__make__program_target__reverse_ordered_modules_3_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__modules__type_ctor_info_module_imports_0;
static const MR_UserClosureId
mercury_data__closure_layout__make__program_target__get_foreign_object_targets_7_0_2;
extern const MR_TypeCtorInfo_Struct mercury_data_libs__globals__type_ctor_info_foreign_language_0;
static const MR_UserClosureId
mercury_data__closure_layout__make__program_target__build_linked_target_2_16_0_4;
static const MR_UserClosureId
mercury_data__closure_layout__make__program_target__install_library_grade_9_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__f_109_97_107_101_95_95_112_114_111_103_114_97_109_95_116_97_114_103_101_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_97_110_97_108_121_115_105_115_95_102_105_108_101_115_95_50_95_95_91_49_93_95_48_9_0_2;
static const MR_UserClosureId
mercury_data__closure_layout__f_109_97_107_101_95_95_112_114_111_103_114_97_109_95_116_97_114_103_101_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_97_110_97_108_121_115_105_115_95_102_105_108_101_115_95_50_95_95_91_49_93_95_48_9_0_3;
static const struct mercury_type_4 mercury_common_4[6] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__make__program_target__reverse_ordered_modules_3_0_1,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_COMMON(0,1),
MR_CTOR0_ADDR(mdbcomp__prim_data, sym_name),
MR_CTOR0_ADDR(parse_tree__modules, module_imports)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__make__program_target__get_foreign_object_targets_7_0_2,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_CTOR0_ADDR(mdbcomp__prim_data, sym_name),
MR_CTOR0_ADDR(libs__globals, foreign_language),
MR_CTOR0_ADDR(make__dependencies, dependency_file)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__make__program_target__build_linked_target_2_16_0_4,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_STRING_CTOR_ADDR,
MR_IO_CTOR_ADDR,
MR_IO_CTOR_ADDR
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__make__program_target__install_library_grade_9_0_1,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_STRING_CTOR_ADDR,
MR_IO_CTOR_ADDR,
MR_IO_CTOR_ADDR
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__f_109_97_107_101_95_95_112_114_111_103_114_97_109_95_116_97_114_103_101_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_97_110_97_108_121_115_105_115_95_102_105_108_101_115_95_50_95_95_91_49_93_95_48_9_0_2,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_CTOR0_ADDR(mdbcomp__prim_data, sym_name),
MR_CTOR0_ADDR(make, make_info),
MR_CTOR0_ADDR(make, make_info)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__f_109_97_107_101_95_95_112_114_111_103_114_97_109_95_116_97_114_103_101_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_97_110_97_108_121_115_105_115_95_102_105_108_101_115_95_50_95_95_91_49_93_95_48_9_0_3,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_CTOR0_ADDR(mdbcomp__prim_data, sym_name),
MR_CTOR0_ADDR(make, make_info),
MR_CTOR0_ADDR(make, make_info)
}
},
};

extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_func_0;
static const struct mercury_type_5 mercury_common_5[1] =
{
{
MR_CTOR0_ADDR(builtin, func),
2,
MR_CTOR0_ADDR(mdbcomp__prim_data, sym_name),
MR_CTOR0_ADDR(parse_tree__modules, module_imports)
},
};

static const MR_UserClosureId
mercury_data__closure_layout__make__program_target__reverse_ordered_modules_3_0_2;
static const MR_UserClosureId
mercury_data__closure_layout__make__program_target__remove_init_files_5_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__make__program_target__build_linked_target_2_16_0_2;
extern const MR_TypeCtorInfo_Struct mercury_data_make__type_ctor_info_dependency_status_0;
static const MR_UserClosureId
mercury_data__closure_layout__make__program_target__linked_target_cleanup_8_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__make__program_target__make_module_clean_5_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_make__type_ctor_info_module_target_type_0;
static const MR_UserClosureId
mercury_data__closure_layout__make__program_target__make_module_clean_5_0_2;
static const MR_UserClosureId
mercury_data__closure_layout__make__program_target__make_module_clean_5_0_3;
static const MR_UserClosureId
mercury_data__closure_layout__make__program_target__make_module_clean_5_0_4;
static const MR_UserClosureId
mercury_data__closure_layout__make__program_target__make_module_realclean_5_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__f_109_97_107_101_95_95_112_114_111_103_114_97_109_95_116_97_114_103_101_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_107_101_95_108_105_110_107_101_100_95_116_97_114_103_101_116_95_50_95_95_91_50_93_95_48_7_0_2;
static const MR_UserClosureId
mercury_data__closure_layout__f_109_97_107_101_95_95_112_114_111_103_114_97_109_95_116_97_114_103_101_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_107_101_95_108_105_110_107_101_100_95_116_97_114_103_101_116_95_50_95_95_91_50_93_95_48_7_0_3;
static const MR_UserClosureId
mercury_data__closure_layout__f_109_97_107_101_95_95_112_114_111_103_114_97_109_95_116_97_114_103_101_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_107_101_95_108_105_110_107_101_100_95_116_97_114_103_101_116_95_50_95_95_91_50_93_95_48_7_0_4;
static const MR_UserClosureId
mercury_data__closure_layout__f_109_97_107_101_95_95_112_114_111_103_114_97_109_95_116_97_114_103_101_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_107_101_95_109_105_115_99_95_116_97_114_103_101_116_95_98_117_105_108_100_101_114_95_95_91_50_93_95_48_7_0_3;
static const MR_UserClosureId
mercury_data__closure_layout__f_109_97_107_101_95_95_112_114_111_103_114_97_109_95_116_97_114_103_101_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_107_101_95_109_105_115_99_95_116_97_114_103_101_116_95_98_117_105_108_100_101_114_95_95_91_50_93_95_48_7_0_5;
static const MR_UserClosureId
mercury_data__closure_layout__f_109_97_107_101_95_95_112_114_111_103_114_97_109_95_116_97_114_103_101_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_107_101_95_109_105_115_99_95_116_97_114_103_101_116_95_98_117_105_108_100_101_114_95_95_91_50_93_95_48_7_0_6;
static const struct mercury_type_6 mercury_common_6[15] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__make__program_target__reverse_ordered_modules_3_0_2,
(MR_Word *) (MR_Integer) 0
},
6,
{
MR_COMMON(5,0),
MR_CTOR0_ADDR(mdbcomp__prim_data, sym_name),
MR_COMMON(1,5),
MR_COMMON(1,5),
MR_COMMON(1,5),
MR_COMMON(1,5)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__make__program_target__remove_init_files_5_0_1,
(MR_Word *) (MR_Integer) 0
},
6,
{
MR_CTOR0_ADDR(mdbcomp__prim_data, sym_name),
MR_STRING_CTOR_ADDR,
MR_CTOR0_ADDR(make, make_info),
MR_CTOR0_ADDR(make, make_info),
MR_IO_CTOR_ADDR,
MR_IO_CTOR_ADDR
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__make__program_target__build_linked_target_2_16_0_2,
(MR_Word *) (MR_Integer) 0
},
6,
{
MR_CTOR0_ADDR(make__dependencies, dependency_file),
MR_CTOR0_ADDR(make, dependency_status),
MR_CTOR0_ADDR(make, make_info),
MR_CTOR0_ADDR(make, make_info),
MR_IO_CTOR_ADDR,
MR_IO_CTOR_ADDR
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__make__program_target__linked_target_cleanup_8_0_1,
(MR_Word *) (MR_Integer) 0
},
6,
{
MR_CTOR0_ADDR(mdbcomp__prim_data, sym_name),
MR_STRING_CTOR_ADDR,
MR_CTOR0_ADDR(make, make_info),
MR_CTOR0_ADDR(make, make_info),
MR_IO_CTOR_ADDR,
MR_IO_CTOR_ADDR
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__make__program_target__make_module_clean_5_0_1,
(MR_Word *) (MR_Integer) 0
},
6,
{
MR_CTOR0_ADDR(mdbcomp__prim_data, sym_name),
MR_CTOR0_ADDR(make, module_target_type),
MR_CTOR0_ADDR(make, make_info),
MR_CTOR0_ADDR(make, make_info),
MR_IO_CTOR_ADDR,
MR_IO_CTOR_ADDR
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__make__program_target__make_module_clean_5_0_2,
(MR_Word *) (MR_Integer) 0
},
6,
{
MR_CTOR0_ADDR(mdbcomp__prim_data, sym_name),
MR_STRING_CTOR_ADDR,
MR_CTOR0_ADDR(make, make_info),
MR_CTOR0_ADDR(make, make_info),
MR_IO_CTOR_ADDR,
MR_IO_CTOR_ADDR
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__make__program_target__make_module_clean_5_0_3,
(MR_Word *) (MR_Integer) 0
},
6,
{
MR_CTOR0_ADDR(mdbcomp__prim_data, sym_name),
MR_STRING_CTOR_ADDR,
MR_CTOR0_ADDR(make, make_info),
MR_CTOR0_ADDR(make, make_info),
MR_IO_CTOR_ADDR,
MR_IO_CTOR_ADDR
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__make__program_target__make_module_clean_5_0_4,
(MR_Word *) (MR_Integer) 0
},
6,
{
MR_CTOR0_ADDR(mdbcomp__prim_data, sym_name),
MR_STRING_CTOR_ADDR,
MR_CTOR0_ADDR(make, make_info),
MR_CTOR0_ADDR(make, make_info),
MR_IO_CTOR_ADDR,
MR_IO_CTOR_ADDR
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__make__program_target__make_module_realclean_5_0_1,
(MR_Word *) (MR_Integer) 0
},
6,
{
MR_CTOR0_ADDR(mdbcomp__prim_data, sym_name),
MR_CTOR0_ADDR(make, module_target_type),
MR_CTOR0_ADDR(make, make_info),
MR_CTOR0_ADDR(make, make_info),
MR_IO_CTOR_ADDR,
MR_IO_CTOR_ADDR
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__f_109_97_107_101_95_95_112_114_111_103_114_97_109_95_116_97_114_103_101_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_107_101_95_108_105_110_107_101_100_95_116_97_114_103_101_116_95_50_95_95_91_50_93_95_48_7_0_2,
(MR_Word *) (MR_Integer) 0
},
6,
{
MR_CTOR0_ADDR(make__dependencies, dependency_file),
MR_BOOL_CTOR_ADDR,
MR_CTOR0_ADDR(make, make_info),
MR_CTOR0_ADDR(make, make_info),
MR_IO_CTOR_ADDR,
MR_IO_CTOR_ADDR
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__f_109_97_107_101_95_95_112_114_111_103_114_97_109_95_116_97_114_103_101_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_107_101_95_108_105_110_107_101_100_95_116_97_114_103_101_116_95_50_95_95_91_50_93_95_48_7_0_3,
(MR_Word *) (MR_Integer) 0
},
6,
{
MR_CTOR0_ADDR(make__dependencies, dependency_file),
MR_BOOL_CTOR_ADDR,
MR_CTOR0_ADDR(make, make_info),
MR_CTOR0_ADDR(make, make_info),
MR_IO_CTOR_ADDR,
MR_IO_CTOR_ADDR
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__f_109_97_107_101_95_95_112_114_111_103_114_97_109_95_116_97_114_103_101_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_107_101_95_108_105_110_107_101_100_95_116_97_114_103_101_116_95_50_95_95_91_50_93_95_48_7_0_4,
(MR_Word *) (MR_Integer) 0
},
6,
{
MR_CTOR0_ADDR(make__dependencies, dependency_file),
MR_BOOL_CTOR_ADDR,
MR_CTOR0_ADDR(make, make_info),
MR_CTOR0_ADDR(make, make_info),
MR_IO_CTOR_ADDR,
MR_IO_CTOR_ADDR
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__f_109_97_107_101_95_95_112_114_111_103_114_97_109_95_116_97_114_103_101_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_107_101_95_109_105_115_99_95_116_97_114_103_101_116_95_98_117_105_108_100_101_114_95_95_91_50_93_95_48_7_0_3,
(MR_Word *) (MR_Integer) 0
},
6,
{
MR_CTOR0_ADDR(make__dependencies, dependency_file),
MR_BOOL_CTOR_ADDR,
MR_CTOR0_ADDR(make, make_info),
MR_CTOR0_ADDR(make, make_info),
MR_IO_CTOR_ADDR,
MR_IO_CTOR_ADDR
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__f_109_97_107_101_95_95_112_114_111_103_114_97_109_95_116_97_114_103_101_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_107_101_95_109_105_115_99_95_116_97_114_103_101_116_95_98_117_105_108_100_101_114_95_95_91_50_93_95_48_7_0_5,
(MR_Word *) (MR_Integer) 0
},
6,
{
MR_CTOR0_ADDR(make__dependencies, dependency_file),
MR_BOOL_CTOR_ADDR,
MR_CTOR0_ADDR(make, make_info),
MR_CTOR0_ADDR(make, make_info),
MR_IO_CTOR_ADDR,
MR_IO_CTOR_ADDR
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__f_109_97_107_101_95_95_112_114_111_103_114_97_109_95_116_97_114_103_101_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_107_101_95_109_105_115_99_95_116_97_114_103_101_116_95_98_117_105_108_100_101_114_95_95_91_50_93_95_48_7_0_6,
(MR_Word *) (MR_Integer) 0
},
6,
{
MR_CTOR0_ADDR(make__dependencies, dependency_file),
MR_BOOL_CTOR_ADDR,
MR_CTOR0_ADDR(make, make_info),
MR_CTOR0_ADDR(make, make_info),
MR_IO_CTOR_ADDR,
MR_IO_CTOR_ADDR
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__make__program_target__reverse_ordered_modules_3_0_3;
static const MR_UserClosureId
mercury_data__closure_layout__make__program_target__build_analysis_files_8_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__make__program_target__install_file_5_0_2;
static const MR_UserClosureId
mercury_data__closure_layout__make__program_target__build_linked_target_2_16_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__make__program_target__build_linked_target_2_16_0_6;
extern const MR_TypeCtorInfo_Struct mercury_data_make__module_target__type_ctor_info_foreign_code_file_0;
static const struct mercury_type_7 mercury_common_7[5] =
{
{
(MR_Word *) &mercury_data__closure_layout__make__program_target__reverse_ordered_modules_3_0_3,
(MR_Word *) (MR_Integer) 0,
2,
MR_COMMON(1,2),
MR_COMMON(1,2)
},
{
(MR_Word *) &mercury_data__closure_layout__make__program_target__build_analysis_files_8_0_1,
(MR_Word *) (MR_Integer) 0,
2,
MR_COMMON(1,2),
MR_CTOR0_ADDR(mdbcomp__prim_data, sym_name)
},
{
(MR_Word *) &mercury_data__closure_layout__make__program_target__install_file_5_0_2,
(MR_Word *) (MR_Integer) 0,
2,
MR_STRING_CTOR_ADDR,
MR_STRING_CTOR_ADDR
},
{
(MR_Word *) &mercury_data__closure_layout__make__program_target__build_linked_target_2_16_0_1,
(MR_Word *) (MR_Integer) 0,
2,
MR_STRING_CTOR_ADDR,
MR_CTOR0_ADDR(make__dependencies, dependency_file)
},
{
(MR_Word *) &mercury_data__closure_layout__make__program_target__build_linked_target_2_16_0_6,
(MR_Word *) (MR_Integer) 0,
2,
MR_CTOR0_ADDR(make__module_target, foreign_code_file),
MR_STRING_CTOR_ADDR
},
};

static const MR_UserClosureId
mercury_data__closure_layout__make__program_target__install_file_5_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__make__program_target__maybe_install_library_file_6_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__make__program_target__get_foreign_object_targets_7_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__make__program_target__get_foreign_object_targets_7_0_3;
static const MR_UserClosureId
mercury_data__closure_layout__make__program_target__get_foreign_object_targets_7_0_4;
static const struct mercury_type_8 mercury_common_8[5] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__make__program_target__install_file_5_0_1,
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
{
{
(MR_Word *) &mercury_data__closure_layout__make__program_target__maybe_install_library_file_6_0_1,
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
{
{
(MR_Word *) &mercury_data__closure_layout__make__program_target__get_foreign_object_targets_7_0_1,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_CTOR0_ADDR(backend_libs__compile_target_code, pic),
MR_CTOR0_ADDR(mdbcomp__prim_data, sym_name),
MR_STRING_CTOR_ADDR,
MR_CTOR0_ADDR(make__dependencies, dependency_file)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__make__program_target__get_foreign_object_targets_7_0_3,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_CTOR0_ADDR(backend_libs__compile_target_code, pic),
MR_CTOR0_ADDR(mdbcomp__prim_data, sym_name),
MR_STRING_CTOR_ADDR,
MR_CTOR0_ADDR(make__dependencies, dependency_file)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__make__program_target__get_foreign_object_targets_7_0_4,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_CTOR0_ADDR(backend_libs__compile_target_code, pic),
MR_CTOR0_ADDR(mdbcomp__prim_data, sym_name),
MR_STRING_CTOR_ADDR,
MR_CTOR0_ADDR(make__dependencies, dependency_file)
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__make__program_target__make_grade_install_dirs_5_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__make__program_target__make_install_dirs_4_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__make__program_target__make_install_dirs_4_0_2;
extern const MR_TypeCtorInfo_Struct mercury_data_io__type_ctor_info_res_0;
static const MR_UserClosureId
mercury_data__closure_layout__make__program_target__make_main_module_realclean_5_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__make__program_target__build_linked_target_2_16_0_7;
static const MR_UserClosureId
mercury_data__closure_layout__make__program_target__maybe_make_grade_clean_7_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__f_109_97_107_101_95_95_112_114_111_103_114_97_109_95_116_97_114_103_101_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_107_101_95_109_105_115_99_95_116_97_114_103_101_116_95_98_117_105_108_100_101_114_95_95_91_50_93_95_48_7_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__f_109_97_107_101_95_95_112_114_111_103_114_97_109_95_116_97_114_103_101_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_107_101_95_109_105_115_99_95_116_97_114_103_101_116_95_98_117_105_108_100_101_114_95_95_91_50_93_95_48_7_0_2;
static const struct mercury_type_9 mercury_common_9[8] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__make__program_target__make_grade_install_dirs_5_0_1,
(MR_Word *) (MR_Integer) 0
},
5,
{
MR_STRING_CTOR_ADDR,
MR_STRING_CTOR_ADDR,
MR_BOOL_CTOR_ADDR,
MR_IO_CTOR_ADDR,
MR_IO_CTOR_ADDR
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__make__program_target__make_install_dirs_4_0_1,
(MR_Word *) (MR_Integer) 0
},
5,
{
MR_STRING_CTOR_ADDR,
MR_STRING_CTOR_ADDR,
MR_BOOL_CTOR_ADDR,
MR_IO_CTOR_ADDR,
MR_IO_CTOR_ADDR
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__make__program_target__make_install_dirs_4_0_2,
(MR_Word *) (MR_Integer) 0
},
5,
{
MR_STRING_CTOR_ADDR,
MR_STRING_CTOR_ADDR,
MR_CTOR0_ADDR(io, res),
MR_IO_CTOR_ADDR,
MR_IO_CTOR_ADDR
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__make__program_target__make_main_module_realclean_5_0_1,
(MR_Word *) (MR_Integer) 0
},
5,
{
MR_STRING_CTOR_ADDR,
MR_CTOR0_ADDR(make, make_info),
MR_CTOR0_ADDR(make, make_info),
MR_IO_CTOR_ADDR,
MR_IO_CTOR_ADDR
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__make__program_target__build_linked_target_2_16_0_7,
(MR_Word *) (MR_Integer) 0
},
5,
{
MR_STRING_CTOR_ADDR,
MR_CTOR0_ADDR(mdbcomp__prim_data, sym_name),
MR_STRING_CTOR_ADDR,
MR_IO_CTOR_ADDR,
MR_IO_CTOR_ADDR
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__make__program_target__maybe_make_grade_clean_7_0_1,
(MR_Word *) (MR_Integer) 0
},
5,
{
MR_CTOR0_ADDR(mdbcomp__prim_data, sym_name),
MR_CTOR0_ADDR(make, make_info),
MR_CTOR0_ADDR(make, make_info),
MR_IO_CTOR_ADDR,
MR_IO_CTOR_ADDR
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__f_109_97_107_101_95_95_112_114_111_103_114_97_109_95_116_97_114_103_101_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_107_101_95_109_105_115_99_95_116_97_114_103_101_116_95_98_117_105_108_100_101_114_95_95_91_50_93_95_48_7_0_1,
(MR_Word *) (MR_Integer) 0
},
5,
{
MR_CTOR0_ADDR(mdbcomp__prim_data, sym_name),
MR_CTOR0_ADDR(make, make_info),
MR_CTOR0_ADDR(make, make_info),
MR_IO_CTOR_ADDR,
MR_IO_CTOR_ADDR
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__f_109_97_107_101_95_95_112_114_111_103_114_97_109_95_116_97_114_103_101_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_107_101_95_109_105_115_99_95_116_97_114_103_101_116_95_98_117_105_108_100_101_114_95_95_91_50_93_95_48_7_0_2,
(MR_Word *) (MR_Integer) 0
},
5,
{
MR_CTOR0_ADDR(mdbcomp__prim_data, sym_name),
MR_CTOR0_ADDR(make, make_info),
MR_CTOR0_ADDR(make, make_info),
MR_IO_CTOR_ADDR,
MR_IO_CTOR_ADDR
}
},
};

static const struct mercury_type_10 mercury_common_10[18] =
{
{
MR_string_const("analysis", 8),
MR_tbmkword(0, 0)
},
{
MR_string_const("trans_opt", 9),
MR_TAG_COMMON(1,10,0)
},
{
MR_string_const("opt", 3),
MR_TAG_COMMON(1,10,1)
},
{
MR_string_const("module_dep", 10),
MR_tbmkword(0, 0)
},
{
MR_string_const("mih", 3),
MR_TAG_COMMON(1,10,3)
},
{
MR_string_const("mh", 2),
MR_TAG_COMMON(1,10,4)
},
{
MR_string_const("trans_opt", 9),
MR_TAG_COMMON(1,10,5)
},
{
MR_string_const("opt", 3),
MR_TAG_COMMON(1,10,6)
},
{
MR_string_const("int3", 4),
MR_TAG_COMMON(1,10,7)
},
{
MR_string_const("int2", 4),
MR_TAG_COMMON(1,10,8)
},
{
MR_string_const("int", 3),
MR_TAG_COMMON(1,10,9)
},
{
MR_string_const("int0", 4),
MR_TAG_COMMON(1,10,10)
},
{
MR_string_const("--compile-to-shared-lib", 23),
MR_tbmkword(0, 0)
},
{
MR_string_const("opt", 3),
MR_tbmkword(0, 0)
},
{
MR_string_const("int0", 4),
MR_TAG_COMMON(1,10,13)
},
{
MR_string_const("--use-grade-subdirs", 19),
MR_tbmkword(0, 0)
},
{
MR_string_const(".prof", 5),
MR_tbmkword(0, 0)
},
{
MR_string_const(".used", 5),
MR_TAG_COMMON(1,10,16)
},
};

static const MR_UserClosureId
mercury_data__closure_layout__make__program_target__install_library_grade_files_9_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__make__program_target__IntroducedFrom__pred__install_library_grade__977__1_9_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__f_109_97_107_101_95_95_112_114_111_103_114_97_109_95_116_97_114_103_101_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_107_101_95_108_105_110_107_101_100_95_116_97_114_103_101_116_95_50_95_95_91_50_93_95_48_7_0_7;
extern const MR_TypeCtorInfo_Struct mercury_data_libs__globals__type_ctor_info_compilation_target_0;
static const MR_UserClosureId
mercury_data__closure_layout__f_109_97_107_101_95_95_112_114_111_103_114_97_109_95_116_97_114_103_101_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_107_101_95_109_105_115_99_95_116_97_114_103_101_116_95_98_117_105_108_100_101_114_95_95_91_50_93_95_48_7_0_4;
static const struct mercury_type_11 mercury_common_11[4] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__make__program_target__install_library_grade_files_9_0_1,
(MR_Word *) (MR_Integer) 0
},
8,
{
MR_BOOL_CTOR_ADDR,
MR_STRING_CTOR_ADDR,
MR_CTOR0_ADDR(mdbcomp__prim_data, sym_name),
MR_BOOL_CTOR_ADDR,
MR_CTOR0_ADDR(make, make_info),
MR_CTOR0_ADDR(make, make_info),
MR_IO_CTOR_ADDR,
MR_IO_CTOR_ADDR
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__make__program_target__IntroducedFrom__pred__install_library_grade__977__1_9_0_1,
(MR_Word *) (MR_Integer) 0
},
8,
{
MR_BOOL_CTOR_ADDR,
MR_CTOR0_ADDR(mdbcomp__prim_data, sym_name),
MR_COMMON(1,2),
MR_CTOR0_ADDR(make, make_info),
MR_BOOL_CTOR_ADDR,
MR_BOOL_CTOR_ADDR,
MR_IO_CTOR_ADDR,
MR_IO_CTOR_ADDR
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__f_109_97_107_101_95_95_112_114_111_103_114_97_109_95_116_97_114_103_101_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_107_101_95_108_105_110_107_101_100_95_116_97_114_103_101_116_95_50_95_95_91_50_93_95_48_7_0_7,
(MR_Word *) (MR_Integer) 0
},
8,
{
MR_CTOR0_ADDR(mdbcomp__prim_data, sym_name),
MR_CTOR0_ADDR(backend_libs__compile_target_code, linked_target_type),
MR_STRING_CTOR_ADDR,
MR_CTOR0_ADDR(libs__globals, compilation_target),
MR_CTOR0_ADDR(make, make_info),
MR_CTOR0_ADDR(make, make_info),
MR_IO_CTOR_ADDR,
MR_IO_CTOR_ADDR
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__f_109_97_107_101_95_95_112_114_111_103_114_97_109_95_116_97_114_103_101_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_107_101_95_109_105_115_99_95_116_97_114_103_101_116_95_98_117_105_108_100_101_114_95_95_91_50_93_95_48_7_0_4,
(MR_Word *) (MR_Integer) 0
},
8,
{
MR_COMMON(19,1),
MR_BOOL_CTOR_ADDR,
MR_COMMON(1,24),
MR_BOOL_CTOR_ADDR,
MR_CTOR0_ADDR(make, make_info),
MR_CTOR0_ADDR(make, make_info),
MR_IO_CTOR_ADDR,
MR_IO_CTOR_ADDR
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__make__program_target__install_library_6_0_2;
static const MR_UserClosureId
mercury_data__closure_layout__make__program_target__install_library_grade_9_0_4;
static const struct mercury_type_12 mercury_common_12[2] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__make__program_target__install_library_6_0_2,
(MR_Word *) (MR_Integer) 0
},
9,
{
MR_BOOL_CTOR_ADDR,
MR_CTOR0_ADDR(mdbcomp__prim_data, sym_name),
MR_COMMON(1,2),
MR_STRING_CTOR_ADDR,
MR_BOOL_CTOR_ADDR,
MR_CTOR0_ADDR(make, make_info),
MR_CTOR0_ADDR(make, make_info),
MR_IO_CTOR_ADDR,
MR_IO_CTOR_ADDR
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__make__program_target__install_library_grade_9_0_4,
(MR_Word *) (MR_Integer) 0
},
9,
{
MR_BOOL_CTOR_ADDR,
MR_CTOR0_ADDR(mdbcomp__prim_data, sym_name),
MR_COMMON(1,2),
MR_BOOL_CTOR_ADDR,
MR_BOOL_CTOR_ADDR,
MR_CTOR0_ADDR(make, make_info),
MR_CTOR0_ADDR(make, make_info),
MR_IO_CTOR_ADDR,
MR_IO_CTOR_ADDR
}
},
};

static const struct mercury_type_13 mercury_common_13[2] =
{
{
0
},
{
1
},
};

static const struct mercury_type_15 mercury_common_15[4] =
{
{
3,
MR_tbmkword(0, 0)
},
{
2,
MR_tbmkword(0, 0)
},
{
1,
MR_TAG_COMMON(1,15,1)
},
{
0,
MR_TAG_COMMON(1,15,2)
},
};

static const MR_UserClosureId
mercury_data__closure_layout__make__program_target__install_library_grade_9_0_2;
static const struct mercury_type_16 mercury_common_16[1] =
{
{
(MR_Word *) &mercury_data__closure_layout__make__program_target__install_library_grade_9_0_2,
(MR_Word *) (MR_Integer) 0,
1,
MR_COMMON(0,4)
},
};

static const struct mercury_type_17 mercury_common_17[3] =
{
{
{
1,
1
}
},
{
{
1,
2
}
},
{
{
0,
2
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__f_109_97_107_101_95_95_112_114_111_103_114_97_109_95_116_97_114_103_101_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_107_101_95_108_105_110_107_101_100_95_116_97_114_103_101_116_95_50_95_95_91_50_93_95_48_7_0_5;
extern const MR_TypeCtorInfo_Struct mercury_data_make__dependencies__type_ctor_info_dependencies_result_0;
static const struct mercury_type_18 mercury_common_18[1] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__f_109_97_107_101_95_95_112_114_111_103_114_97_109_95_116_97_114_103_101_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_107_101_95_108_105_110_107_101_100_95_116_97_114_103_101_116_95_50_95_95_91_50_93_95_48_7_0_5,
(MR_Word *) (MR_Integer) 0
},
16,
{
MR_CTOR0_ADDR(mdbcomp__prim_data, sym_name),
MR_CTOR0_ADDR(backend_libs__compile_target_code, linked_target_type),
MR_STRING_CTOR_ADDR,
MR_COMMON(1,8),
MR_COMMON(1,2),
MR_COMMON(1,2),
MR_CTOR0_ADDR(libs__globals, compilation_target),
MR_CTOR0_ADDR(backend_libs__compile_target_code, pic),
MR_BOOL_CTOR_ADDR,
MR_CTOR0_ADDR(make__dependencies, dependencies_result),
MR_CTOR0_ADDR(io, output_stream),
MR_BOOL_CTOR_ADDR,
MR_CTOR0_ADDR(make, make_info),
MR_CTOR0_ADDR(make, make_info),
MR_IO_CTOR_ADDR,
MR_IO_CTOR_ADDR
}
},
};

extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_pred_0;
extern const MR_TypeCtorInfo_Struct mercury_data_io__type_ctor_info_output_stream_0;
extern const MR_TypeCtorInfo_Struct mercury_data_bool__type_ctor_info_bool_0;
extern const MR_TypeCtorInfo_Struct mercury_data_make__type_ctor_info_make_info_0;
extern const MR_TypeCtorInfo_Struct mercury_data_io__type_ctor_info_state_0;
static const struct mercury_type_19 mercury_common_19[2] =
{
{
MR_CTOR0_ADDR(builtin, pred),
6,
{
MR_CTOR0_ADDR(io, output_stream),
MR_BOOL_CTOR_ADDR,
MR_CTOR0_ADDR(make, make_info),
MR_CTOR0_ADDR(make, make_info),
MR_IO_CTOR_ADDR,
MR_IO_CTOR_ADDR
}
},
{
MR_CTOR0_ADDR(builtin, pred),
6,
{
MR_CTOR0_ADDR(make__dependencies, dependency_file),
MR_BOOL_CTOR_ADDR,
MR_CTOR0_ADDR(make, make_info),
MR_CTOR0_ADDR(make, make_info),
MR_IO_CTOR_ADDR,
MR_IO_CTOR_ADDR
}
},
};

static const struct mercury_type_14 mercury_vector_common_14_0[4] =
{
{
MR_tbmkword(0, 0),
505
},
{
MR_tbmkword(0, 0),
505
},
{
MR_TAG_COMMON(1,10,12),
505
},
{
MR_tbmkword(0, 0),
505
},
};

static const MR_UserClosureId
mercury_data__closure_layout__make__program_target__make_misc_target_6_0_1 = {
{
MR_PREDICATE,
"make.program_target",
"make.program_target",
"make_misc_target_builder",
7,
0
},
"make.program_target",
"make.program_target.m",
528,
"d1;c8;"
};

static const MR_UserClosureId
mercury_data__closure_layout__make__program_target__get_target_modules_7_0_1 = {
{
MR_PREDICATE,
"make.program_target",
"make.program_target",
"get_target_modules_2",
7,
0
},
"make.program_target",
"make.program_target.m",
221,
"d1;c9;t;c1;"
};

static const MR_UserClosureId
mercury_data__closure_layout__make__program_target__reverse_ordered_modules_3_0_1 = {
{
MR_FUNCTION,
"make.program_target",
"make.program_target",
"lookup_module_imports",
3,
0
},
"make.program_target",
"make.program_target.m",
743,
"d1;c5;"
};

static const MR_UserClosureId
mercury_data__closure_layout__make__program_target__reverse_ordered_modules_3_0_2 = {
{
MR_PREDICATE,
"parse_tree.modules",
"parse_tree.modules",
"add_module_relations",
6,
0
},
"make.program_target",
"make.program_target.m",
743,
"d1;c4;"
};

static const MR_UserClosureId
mercury_data__closure_layout__make__program_target__reverse_ordered_modules_3_0_3 = {
{
MR_PREDICATE,
"make.program_target",
"make.program_target",
"lambda_make_program_target_m_747",
2,
0
},
"make.program_target",
"make.program_target.m",
747,
"d1;c11;"
};

static const MR_UserClosureId
mercury_data__closure_layout__make__program_target__build_analysis_files_8_0_1 = {
{
MR_PREDICATE,
"make.program_target",
"make.program_target",
"lambda_make_program_target_m_681",
2,
0
},
"make.program_target",
"make.program_target.m",
681,
"d1;c13;e;c3;"
};

static const MR_UserClosureId
mercury_data__closure_layout__make__program_target__install_file_5_0_1 = {
{
MR_PREDICATE,
"make.program_target",
"make.program_target",
"lambda_make_program_target_m_1197",
4,
0
},
"make.program_target",
"make.program_target.m",
1197,
"d1;c6;"
};

static const MR_UserClosureId
mercury_data__closure_layout__make__program_target__install_file_5_0_2 = {
{
MR_FUNCTION,
"libs.options",
"libs.options",
"quote_arg",
2,
0
},
"make.program_target",
"make.program_target.m",
1206,
"d1;c13;"
};

static const MR_UserClosureId
mercury_data__closure_layout__make__program_target__maybe_install_library_file_6_0_1 = {
{
MR_PREDICATE,
"make.program_target",
"make.program_target",
"lambda_make_program_target_m_1302",
4,
0
},
"make.program_target",
"make.program_target.m",
1302,
"d1;c6;"
};

static const MR_UserClosureId
mercury_data__closure_layout__make__program_target__make_grade_install_dirs_5_0_1 = {
{
MR_PREDICATE,
"make.program_target",
"make.program_target",
"make_install_symlink",
5,
0
},
"make.program_target",
"make.program_target.m",
1260,
"d1;c36;"
};

static const MR_UserClosureId
mercury_data__closure_layout__make__program_target__install_library_grade_files_9_0_1 = {
{
MR_PREDICATE,
"make.program_target",
"make.program_target",
"install_grade_ints_and_headers",
8,
0
},
"make.program_target",
"make.program_target.m",
1054,
"d1;c12;d1;c12;"
};

static const MR_UserClosureId
mercury_data__closure_layout__make__program_target__make_install_dirs_4_0_1 = {
{
MR_PREDICATE,
"make.program_target",
"make.program_target",
"make_install_symlink",
5,
0
},
"make.program_target",
"make.program_target.m",
1225,
"d1;c27;"
};

static const MR_UserClosureId
mercury_data__closure_layout__make__program_target__make_install_dirs_4_0_2 = {
{
MR_PREDICATE,
"make.program_target",
"make.program_target",
"lambda_make_program_target_m_1233",
5,
0
},
"make.program_target",
"make.program_target.m",
1233,
"d1;c30;d2;c2;"
};

static const MR_UserClosureId
mercury_data__closure_layout__make__program_target__install_library_6_0_1 = {
{
MR_PREDICATE,
"make.program_target",
"make.program_target",
"install_ints_and_headers",
7,
0
},
"make.program_target",
"make.program_target.m",
830,
"d1;c10;t;c1;"
};

static const MR_UserClosureId
mercury_data__closure_layout__make__program_target__install_library_6_0_2 = {
{
MR_PREDICATE,
"make.program_target",
"make.program_target",
"install_library_grade",
9,
0
},
"make.program_target",
"make.program_target.m",
845,
"d1;c10;t;c6;t;c6;"
};

static const MR_UserClosureId
mercury_data__closure_layout__make__program_target__remove_init_files_5_0_1 = {
{
MR_PREDICATE,
"make.util",
"make.util",
"make_remove_file",
6,
0
},
"make.program_target",
"make.program_target.m",
1381,
"d1;c12;"
};

static const MR_UserClosureId
mercury_data__closure_layout__make__program_target__make_main_module_realclean_5_0_1 = {
{
MR_PREDICATE,
"make.util",
"make.util",
"make_remove_file",
5,
0
},
"make.program_target",
"make.program_target.m",
1364,
"d1;c31;"
};

static const MR_UserClosureId
mercury_data__closure_layout__make__program_target__make_linked_target_6_0_1 = {
{
MR_PREDICATE,
"make.program_target",
"make.program_target",
"make_linked_target_2",
7,
0
},
"make.program_target",
"make.program_target.m",
98,
"d1;c11;e;c4;d1;c2;"
};

static const MR_UserClosureId
mercury_data__closure_layout__make__program_target__make_linked_target_6_0_2 = {
{
MR_PREDICATE,
"make.program_target",
"make.program_target",
"make_linked_target_2",
7,
0
},
"make.program_target",
"make.program_target.m",
98,
"d1;c11;e;c4;d1;c2;"
};

static const MR_UserClosureId
mercury_data__closure_layout__make__program_target__get_foreign_object_targets_7_0_1 = {
{
MR_FUNCTION,
"make.program_target",
"make.program_target",
"lambda_make_program_target_m_284",
4,
0
},
"make.program_target",
"make.program_target.m",
284,
"d1;c12;d1;c3;"
};

static const MR_UserClosureId
mercury_data__closure_layout__make__program_target__get_foreign_object_targets_7_0_2 = {
{
MR_FUNCTION,
"make.program_target",
"make.program_target",
"lambda_make_program_target_m_270",
3,
0
},
"make.program_target",
"make.program_target.m",
270,
"d1;c11;e;t;c2;"
};

static const MR_UserClosureId
mercury_data__closure_layout__make__program_target__get_foreign_object_targets_7_0_3 = {
{
MR_FUNCTION,
"make.program_target",
"make.program_target",
"lambda2_make_program_target_m_284",
4,
0
},
"make.program_target",
"make.program_target.m",
284,
"d1;c12;d1;c3;"
};

static const MR_UserClosureId
mercury_data__closure_layout__make__program_target__get_foreign_object_targets_7_0_4 = {
{
MR_FUNCTION,
"make.program_target",
"make.program_target",
"lambda_make_program_target_m_284",
4,
0
},
"make.program_target",
"make.program_target.m",
284,
"d1;c12;d1;c3;"
};

static const MR_UserClosureId
mercury_data__closure_layout__make__program_target__build_linked_target_2_16_0_1 = {
{
MR_FUNCTION,
"make.program_target",
"make.program_target",
"lambda_make_program_target_m_377",
2,
0
},
"make.program_target",
"make.program_target.m",
377,
"d1;c28;"
};

static const MR_UserClosureId
mercury_data__closure_layout__make__program_target__build_linked_target_2_16_0_2 = {
{
MR_PREDICATE,
"make.dependencies",
"make.dependencies",
"dependency_status",
6,
0
},
"make.program_target",
"make.program_target.m",
376,
"d1;c26;"
};

static const MR_UserClosureId
mercury_data__closure_layout__make__program_target__build_linked_target_2_16_0_3 = {
{
MR_PREDICATE,
"make.util",
"make.util",
"get_file_timestamp",
7,
0
},
"make.program_target",
"make.program_target.m",
384,
"d1;c32;"
};

static const MR_UserClosureId
mercury_data__closure_layout__make__program_target__build_linked_target_2_16_0_4 = {
{
MR_PREDICATE,
"make.program_target",
"make.program_target",
"lambda_make_program_target_m_386",
3,
0
},
"make.program_target",
"make.program_target.m",
386,
"d1;c37;"
};

static const MR_UserClosureId
mercury_data__closure_layout__make__program_target__build_linked_target_2_16_0_5 = {
{
MR_PREDICATE,
"make.program_target",
"make.program_target",
"lambda_make_program_target_m_423",
7,
0
},
"make.program_target",
"make.program_target.m",
423,
"d1;c41;d3;c3;"
};

static const MR_UserClosureId
mercury_data__closure_layout__make__program_target__build_linked_target_2_16_0_6 = {
{
MR_FUNCTION,
"make.program_target",
"make.program_target",
"lambda_make_program_target_m_438",
2,
0
},
"make.program_target",
"make.program_target.m",
438,
"d1;c41;d3;c6;"
};

static const MR_UserClosureId
mercury_data__closure_layout__make__program_target__build_linked_target_2_16_0_7 = {
{
MR_PREDICATE,
"make.program_target",
"make.program_target",
"lambda_make_program_target_m_443",
5,
0
},
"make.program_target",
"make.program_target.m",
443,
"d1;c41;d3;c9;"
};

static const MR_UserClosureId
mercury_data__closure_layout__make__program_target__build_linked_target_2_16_0_8 = {
{
MR_PREDICATE,
"backend_libs.compile_target_code",
"backend_libs.compile_target_code",
"link",
7,
0
},
"make.program_target",
"make.program_target.m",
458,
"d1;c41;d3;c14;d1;c2;"
};

static const MR_UserClosureId
mercury_data__closure_layout__make__program_target__build_linked_target_2_16_0_9 = {
{
MR_PREDICATE,
"backend_libs.compile_target_code",
"backend_libs.compile_target_code",
"link",
7,
0
},
"make.program_target",
"make.program_target.m",
458,
"d1;c41;d3;c14;d1;c2;"
};

static const MR_UserClosureId
mercury_data__closure_layout__make__program_target__linked_target_cleanup_8_0_1 = {
{
MR_PREDICATE,
"make.util",
"make.util",
"make_remove_file",
6,
0
},
"make.program_target",
"make.program_target.m",
1381,
"d1;c12;"
};

static const MR_UserClosureId
mercury_data__closure_layout__make__program_target__install_ints_and_headers_7_0_1 = {
{
MR_PREDICATE,
"make.program_target",
"make.program_target",
"install_subdir_file",
7,
0
},
"make.program_target",
"make.program_target.m",
882,
"d1;c9;d1;c11;"
};

static const MR_UserClosureId
mercury_data__closure_layout__make__program_target__install_library_grade_9_0_1 = {
{
MR_PREDICATE,
"make.program_target",
"make.program_target",
"lambda_make_program_target_m_935",
3,
0
},
"make.program_target",
"make.program_target.m",
935,
"d1;c22;"
};

static const MR_UserClosureId
mercury_data__closure_layout__make__program_target__install_library_grade_9_0_2 = {
{
MR_PREDICATE,
"make.program_target",
"make.program_target",
"lambda_make_program_target_m_963",
1,
0
},
"make.program_target",
"make.program_target.m",
963,
"d1;c27;d2;c5;"
};

static const MR_UserClosureId
mercury_data__closure_layout__make__program_target__install_library_grade_9_0_3 = {
{
MR_PREDICATE,
"make.program_target",
"make.program_target",
"maybe_make_grade_clean",
7,
0
},
"make.program_target",
"make.program_target.m",
976,
"d1;c27;d2;c9;"
};

static const MR_UserClosureId
mercury_data__closure_layout__make__program_target__install_library_grade_9_0_4 = {
{
MR_PREDICATE,
"make.program_target",
"make.program_target",
"lambda_make_program_target_m_977",
9,
0
},
"make.program_target",
"make.program_target.m",
977,
"d1;c27;d2;c10;"
};

static const MR_UserClosureId
mercury_data__closure_layout__make__program_target__maybe_make_grade_clean_7_0_1 = {
{
MR_PREDICATE,
"make.program_target",
"make.program_target",
"make_module_clean",
5,
0
},
"make.program_target",
"make.program_target.m",
1341,
"d1;c8;"
};

static const MR_UserClosureId
mercury_data__closure_layout__make__program_target__install_library_grade_2_8_0_1 = {
{
MR_PREDICATE,
"make.program_target",
"make.program_target",
"make_misc_target_builder",
7,
0
},
"make.program_target",
"make.program_target.m",
528,
"d1;c8;"
};

static const MR_UserClosureId
mercury_data__closure_layout__make__program_target__make_module_clean_5_0_1 = {
{
MR_PREDICATE,
"make.util",
"make.util",
"make_remove_target_file",
6,
0
},
"make.program_target",
"make.program_target.m",
1389,
"d1;c6;"
};

static const MR_UserClosureId
mercury_data__closure_layout__make__program_target__make_module_clean_5_0_2 = {
{
MR_PREDICATE,
"make.util",
"make.util",
"make_remove_file",
6,
0
},
"make.program_target",
"make.program_target.m",
1394,
"d1;c20;"
};

static const MR_UserClosureId
mercury_data__closure_layout__make__program_target__make_module_clean_5_0_3 = {
{
MR_PREDICATE,
"make.program_target",
"make.program_target",
"lambda_make_program_target_m_1405",
6,
0
},
"make.program_target",
"make.program_target.m",
1405,
"d1;c29;"
};

static const MR_UserClosureId
mercury_data__closure_layout__make__program_target__make_module_clean_5_0_4 = {
{
MR_PREDICATE,
"make.program_target",
"make.program_target",
"lambda_make_program_target_m_1405",
6,
0
},
"make.program_target",
"make.program_target.m",
1405,
"d1;c29;"
};

static const MR_UserClosureId
mercury_data__closure_layout__make__program_target__make_module_clean_5_0_5 = {
{
MR_PREDICATE,
"make.program_target",
"make.program_target",
"lambda_make_program_target_m_1416",
7,
0
},
"make.program_target",
"make.program_target.m",
1416,
"d1;c35;"
};

static const MR_UserClosureId
mercury_data__closure_layout__make__program_target__make_module_realclean_5_0_1 = {
{
MR_PREDICATE,
"make.util",
"make.util",
"make_remove_target_file",
6,
0
},
"make.program_target",
"make.program_target.m",
1454,
"d1;c7;"
};

static const MR_UserClosureId
mercury_data__closure_layout__make__program_target__IntroducedFrom__pred__install_library_grade__977__1_9_0_1 = {
{
MR_PREDICATE,
"make.program_target",
"make.program_target",
"install_library_grade_2",
8,
0
},
"make.program_target",
"make.program_target.m",
980,
"d1;c27;d2;c10;q;c3;"
};

static const MR_UserClosureId
mercury_data__closure_layout__make__program_target__IntroducedFrom__pred__make_module_clean__1416__1_7_0_1 = {
{
MR_PREDICATE,
"make.program_target",
"make.program_target",
"lambda_make_program_target_m_1424",
7,
0
},
"make.program_target",
"make.program_target.m",
1424,
"d1;c35;q;c11;"
};

static const MR_UserClosureId
mercury_data__closure_layout__f_109_97_107_101_95_95_112_114_111_103_114_97_109_95_116_97_114_103_101_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_107_101_95_108_105_110_107_101_100_95_116_97_114_103_101_116_95_50_95_95_91_50_93_95_48_7_0_1 = {
{
MR_PREDICATE,
"make.program_target",
"make.program_target",
"get_foreign_object_targets",
7,
0
},
"make.program_target",
"make.program_target.m",
155,
"d1;c12;e;c8;"
};

static const MR_UserClosureId
mercury_data__closure_layout__f_109_97_107_101_95_95_112_114_111_103_114_97_109_95_116_97_114_103_101_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_107_101_95_108_105_110_107_101_100_95_116_97_114_103_101_116_95_50_95_95_91_50_93_95_48_7_0_2 = {
{
MR_PREDICATE,
"make.module_target",
"make.module_target",
"make_module_target",
6,
0
},
"make.program_target",
"make.program_target.m",
159,
"d1;c12;e;c11;"
};

static const MR_UserClosureId
mercury_data__closure_layout__f_109_97_107_101_95_95_112_114_111_103_114_97_109_95_116_97_114_103_101_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_107_101_95_108_105_110_107_101_100_95_116_97_114_103_101_116_95_50_95_95_91_50_93_95_48_7_0_3 = {
{
MR_PREDICATE,
"make.module_target",
"make.module_target",
"make_module_target",
6,
0
},
"make.program_target",
"make.program_target.m",
163,
"d1;c12;e;c13;d1;c2;"
};

static const MR_UserClosureId
mercury_data__closure_layout__f_109_97_107_101_95_95_112_114_111_103_114_97_109_95_116_97_114_103_101_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_107_101_95_108_105_110_107_101_100_95_116_97_114_103_101_116_95_50_95_95_91_50_93_95_48_7_0_4 = {
{
MR_PREDICATE,
"make.module_target",
"make.module_target",
"make_module_target",
6,
0
},
"make.program_target",
"make.program_target.m",
172,
"d1;c12;e;c14;d1;c2;"
};

static const MR_UserClosureId
mercury_data__closure_layout__f_109_97_107_101_95_95_112_114_111_103_114_97_109_95_116_97_114_103_101_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_107_101_95_108_105_110_107_101_100_95_116_97_114_103_101_116_95_50_95_95_91_50_93_95_48_7_0_5 = {
{
MR_PREDICATE,
"make.program_target",
"make.program_target",
"build_linked_target",
16,
0
},
"make.program_target",
"make.program_target.m",
190,
"d1;c12;e;c21;t;c2;"
};

static const MR_UserClosureId
mercury_data__closure_layout__f_109_97_107_101_95_95_112_114_111_103_114_97_109_95_116_97_114_103_101_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_107_101_95_108_105_110_107_101_100_95_116_97_114_103_101_116_95_50_95_95_91_50_93_95_48_7_0_6 = {
{
MR_PREDICATE,
"make.util",
"make.util",
"build_with_output_redirect",
7,
0
},
"make.program_target",
"make.program_target.m",
189,
"d1;c12;e;c21;t;c1;"
};

static const MR_UserClosureId
mercury_data__closure_layout__f_109_97_107_101_95_95_112_114_111_103_114_97_109_95_116_97_114_103_101_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_107_101_95_108_105_110_107_101_100_95_116_97_114_103_101_116_95_50_95_95_91_50_93_95_48_7_0_7 = {
{
MR_PREDICATE,
"make.program_target",
"make.program_target",
"linked_target_cleanup",
8,
0
},
"make.program_target",
"make.program_target.m",
189,
"d1;c12;e;c21;t;c3;"
};

static const MR_UserClosureId
mercury_data__closure_layout__f_109_97_107_101_95_95_112_114_111_103_114_97_109_95_116_97_114_103_101_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_107_101_95_109_105_115_99_95_116_97_114_103_101_116_95_98_117_105_108_100_101_114_95_95_91_50_93_95_48_7_0_1 = {
{
MR_PREDICATE,
"make.program_target",
"make.program_target",
"make_module_clean",
5,
0
},
"make.program_target",
"make.program_target.m",
556,
"d1;c13;d1;c3;"
};

static const MR_UserClosureId
mercury_data__closure_layout__f_109_97_107_101_95_95_112_114_111_103_114_97_109_95_116_97_114_103_101_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_107_101_95_109_105_115_99_95_116_97_114_103_101_116_95_98_117_105_108_100_101_114_95_95_91_50_93_95_48_7_0_2 = {
{
MR_PREDICATE,
"make.program_target",
"make.program_target",
"make_module_realclean",
5,
0
},
"make.program_target",
"make.program_target.m",
562,
"d1;c13;d2;c4;"
};

static const MR_UserClosureId
mercury_data__closure_layout__f_109_97_107_101_95_95_112_114_111_103_114_97_109_95_116_97_114_103_101_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_107_101_95_109_105_115_99_95_116_97_114_103_101_116_95_98_117_105_108_100_101_114_95_95_91_50_93_95_48_7_0_3 = {
{
MR_PREDICATE,
"make.module_target",
"make.module_target",
"make_module_target",
6,
0
},
"make.program_target",
"make.program_target.m",
599,
"d1;c13;d5;c12;"
};

static const MR_UserClosureId
mercury_data__closure_layout__f_109_97_107_101_95_95_112_114_111_103_114_97_109_95_116_97_114_103_101_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_107_101_95_109_105_115_99_95_116_97_114_103_101_116_95_98_117_105_108_100_101_114_95_95_91_50_93_95_48_7_0_4 = {
{
MR_PREDICATE,
"make.program_target",
"make.program_target",
"lambda_make_program_target_m_598",
8,
0
},
"make.program_target",
"make.program_target.m",
598,
"d1;c13;d5;c11;"
};

static const MR_UserClosureId
mercury_data__closure_layout__f_109_97_107_101_95_95_112_114_111_103_114_97_109_95_116_97_114_103_101_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_107_101_95_109_105_115_99_95_116_97_114_103_101_116_95_98_117_105_108_100_101_114_95_95_91_50_93_95_48_7_0_5 = {
{
MR_PREDICATE,
"make.module_target",
"make.module_target",
"make_module_target",
6,
0
},
"make.program_target",
"make.program_target.m",
658,
"d1;c13;d7;c6;e;c1;"
};

static const MR_UserClosureId
mercury_data__closure_layout__f_109_97_107_101_95_95_112_114_111_103_114_97_109_95_116_97_114_103_101_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_107_101_95_109_105_115_99_95_116_97_114_103_101_116_95_98_117_105_108_100_101_114_95_95_91_50_93_95_48_7_0_6 = {
{
MR_PREDICATE,
"make.module_target",
"make.module_target",
"make_module_target",
6,
0
},
"make.program_target",
"make.program_target.m",
571,
"d1;c13;d3;c5;e;c1;"
};

static const MR_UserClosureId
mercury_data__closure_layout__f_109_97_107_101_95_95_112_114_111_103_114_97_109_95_116_97_114_103_101_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_97_110_97_108_121_115_105_115_95_102_105_108_101_115_95_50_95_95_91_49_93_95_48_9_0_1 = {
{
MR_PREDICATE,
"make.module_target",
"make.module_target",
"make_module_target_extra_options",
7,
0
},
"make.program_target",
"make.program_target.m",
702,
"d1;c12;"
};

static const MR_UserClosureId
mercury_data__closure_layout__f_109_97_107_101_95_95_112_114_111_103_114_97_109_95_116_97_114_103_101_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_97_110_97_108_121_115_105_115_95_102_105_108_101_115_95_50_95_95_91_49_93_95_48_9_0_2 = {
{
MR_PREDICATE,
"make.program_target",
"make.program_target",
"reset_analysis_registry_dependency_status",
3,
0
},
"make.program_target",
"make.program_target.m",
719,
"d1;c19;t;c2;"
};

static const MR_UserClosureId
mercury_data__closure_layout__f_109_97_107_101_95_95_112_114_111_103_114_97_109_95_116_97_114_103_101_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_97_110_97_108_121_115_105_115_95_102_105_108_101_115_95_50_95_95_91_49_93_95_48_9_0_3 = {
{
MR_PREDICATE,
"make.program_target",
"make.program_target",
"reset_analysis_registry_dependency_status",
3,
0
},
"make.program_target",
"make.program_target.m",
724,
"d1;c19;e;c1;t;c1;"
};

MR_decl_entry(make__util__build_with_module_options_8_0);

MR_BEGIN_MODULE(make__program_target_module0)
	MR_init_entry1(make__program_target__make_misc_target_6_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__make__program_target__make_misc_target_6_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(2,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(make__program_target__make_misc_target_builder_7_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_r1;
	MR_r1 = MR_ctfield(0, MR_r1, 0);
	MR_r4 = MR_r2;
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_r3 = MR_tempr1;
	MR_np_tailcall_ent(make__util__build_with_module_options_8_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(libs__globals__io_get_target_3_0);
extern const MR_TypeCtorInfo_Struct mercury_data_make__type_ctor_info_make_info_0;
extern const MR_TypeCtorInfo_Struct mercury_data_io__type_ctor_info_state_0;
MR_decl_entry(list__foldl3_8_4);

MR_BEGIN_MODULE(make__program_target_module1)
	MR_init_entry1(make__program_target__get_target_modules_7_0);
	MR_init_label6(make__program_target__get_target_modules_7_0,2,8,20,6,4,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(make__program_target__get_target_modules_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_np_call_localret_ent(libs__globals__io_get_target_3_0,
		make__program_target__get_target_modules_7_0_i2);
MR_def_label(make__program_target__get_target_modules_7_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_r10 = MR_tempr1;
	if (MR_PTAG_TEST(MR_tempr1,0)) {
		MR_GOTO_LAB(make__program_target__get_target_modules_7_0_i6);
	}
	if (MR_PTAG_TEST(MR_tempr1,3)) {
		MR_GOTO_LAB(make__program_target__get_target_modules_7_0_i8);
	}
	if (MR_PTAG_TESTR(MR_tempr1,2)) {
		MR_GOTO_LAB(make__program_target__get_target_modules_7_0_i3);
	}
	if (MR_INT_NE(MR_r1,3)) {
		MR_GOTO_LAB(make__program_target__get_target_modules_7_0_i3);
	}
	MR_r6 = MR_sv(2);
	MR_r8 = MR_sv(3);
	MR_GOTO_LAB(make__program_target__get_target_modules_7_0_i4);
	}
MR_def_label(make__program_target__get_target_modules_7_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_ctfield(3, MR_r10, 0),0)) {
		MR_GOTO_LAB(make__program_target__get_target_modules_7_0_i3);
	}
	if (MR_INT_NE(MR_r1,3)) {
		MR_GOTO_LAB(make__program_target__get_target_modules_7_0_i3);
	}
MR_def_label(make__program_target__get_target_modules_7_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r6 = MR_sv(2);
	MR_r8 = MR_sv(3);
	MR_GOTO_LAB(make__program_target__get_target_modules_7_0_i4);
MR_def_label(make__program_target__get_target_modules_7_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_EQ(MR_unmkbody(MR_r10),1)) {
		MR_GOTO_LAB(make__program_target__get_target_modules_7_0_i20);
	}
	MR_GOTO_LAB(make__program_target__get_target_modules_7_0_i3);
MR_def_label(make__program_target__get_target_modules_7_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__prim_data, sym_name);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,1);
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(make, make_info);
	MR_r4 = (MR_Word) MR_IO_CTOR_ADDR;
	MR_r5 = (MR_Word) MR_TAG_COMMON(0,3,0);
	MR_r7 = (MR_Word) MR_tbmkword(0, 0);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(list__foldl3_8_4);
MR_def_label(make__program_target__get_target_modules_7_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(3);
	MR_decr_sp_and_return(4);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__transform_hlds__mmc_analysis__module_name_to_module_id_1_0);
MR_decl_entry(analysis__read_module_overall_status_5_0);

MR_BEGIN_MODULE(make__program_target_module2)
	MR_init_entry1(make__program_target__modules_needing_reanalysis_6_0);
	MR_init_label8(make__program_target__modules_needing_reanalysis_6_0,40,4,5,23,7,11,10,13)
	MR_init_label2(make__program_target__modules_needing_reanalysis_6_0,3,44)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(make__program_target__modules_needing_reanalysis_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
MR_def_label(make__program_target__modules_needing_reanalysis_6_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r2,0,0)) {
		MR_GOTO_LAB(make__program_target__modules_needing_reanalysis_6_0_i3);
	}
	MR_sv(1) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_sv(2) = MR_ctfield(1, MR_tempr1, 0);
	MR_sv(3) = MR_ctfield(1, MR_tempr1, 1);
	MR_r1 = MR_sv(2);
	}
	MR_np_call_localret_ent(fn__transform_hlds__mmc_analysis__module_name_to_module_id_1_0,
		make__program_target__modules_needing_reanalysis_6_0_i4);
MR_def_label(make__program_target__modules_needing_reanalysis_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,1,3);
	MR_np_call_localret_ent(analysis__read_module_overall_status_5_0,
		make__program_target__modules_needing_reanalysis_6_0_i5);
MR_def_label(make__program_target__modules_needing_reanalysis_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(make__program_target__modules_needing_reanalysis_6_0_i7);
	}
MR_def_label(make__program_target__modules_needing_reanalysis_6_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_succip_word = MR_sv(4);
	MR_GOTO_LAB(make__program_target__modules_needing_reanalysis_6_0_i40);
MR_def_label(make__program_target__modules_needing_reanalysis_6_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_ctfield(1, MR_r1, 0);
	if (MR_INT_NE(MR_r4,0)) {
		MR_GOTO_LAB(make__program_target__modules_needing_reanalysis_6_0_i10);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_np_localcall_lab(make__program_target__modules_needing_reanalysis_6_0,
		make__program_target__modules_needing_reanalysis_6_0_i11);
MR_def_label(make__program_target__modules_needing_reanalysis_6_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(4);
	}
MR_def_label(make__program_target__modules_needing_reanalysis_6_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r4,1)) {
		MR_GOTO_LAB(make__program_target__modules_needing_reanalysis_6_0_i23);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_np_localcall_lab(make__program_target__modules_needing_reanalysis_6_0,
		make__program_target__modules_needing_reanalysis_6_0_i13);
MR_def_label(make__program_target__modules_needing_reanalysis_6_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_EQ(MR_sv(1),0)) {
		MR_GOTO_LAB(make__program_target__modules_needing_reanalysis_6_0_i44);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr1, 1) = MR_r2;
	MR_r2 = MR_tempr1;
	MR_decr_sp_and_return(4);
	}
MR_def_label(make__program_target__modules_needing_reanalysis_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
MR_def_label(make__program_target__modules_needing_reanalysis_6_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(4);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(parse_tree__modules__add_module_relations_6_0);
MR_decl_entry(fn__relation__init_0_0);
MR_decl_entry(list__foldl2_6_0);
MR_decl_entry(relation__atsort_2_0);
MR_decl_entry(list__reverse_2_0);
MR_decl_entry(list__map_3_0);
MR_decl_entry(list__condense_2_0);

MR_BEGIN_MODULE(make__program_target_module3)
	MR_init_entry1(make__program_target__reverse_ordered_modules_3_0);
	MR_init_label6(make__program_target__reverse_ordered_modules_3_0,2,3,4,5,6,7)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(make__program_target__reverse_ordered_modules_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(4,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(fn__make__program_target__lookup_module_imports_2_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 4);
	MR_sv(2) = MR_tempr2;
	MR_tfield(0, MR_tempr2, 0) = (MR_Word) MR_COMMON(6,0);
	MR_tfield(0, MR_tempr2, 1) = (MR_Word) MR_ENTRY_AP(parse_tree__modules__add_module_relations_6_0);
	MR_tfield(0, MR_tempr2, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr2, 3) = MR_tempr1;
	MR_sv(1) = MR_r2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__prim_data, sym_name);
	}
	MR_np_call_localret_ent(fn__relation__init_0_0,
		make__program_target__reverse_ordered_modules_3_0_i2);
MR_def_label(make__program_target__reverse_ordered_modules_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__prim_data, sym_name);
	MR_np_call_localret_ent(fn__relation__init_0_0,
		make__program_target__reverse_ordered_modules_3_0_i3);
MR_def_label(make__program_target__reverse_ordered_modules_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r7 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__prim_data, sym_name);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,6);
	MR_r3 = MR_r2;
	MR_r4 = MR_sv(2);
	MR_r5 = MR_sv(1);
	MR_r6 = MR_sv(3);
	MR_np_call_localret_ent(list__foldl2_6_0,
		make__program_target__reverse_ordered_modules_3_0_i4);
MR_def_label(make__program_target__reverse_ordered_modules_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__prim_data, sym_name);
	MR_np_call_localret_ent(relation__atsort_2_0,
		make__program_target__reverse_ordered_modules_3_0_i5);
MR_def_label(make__program_target__reverse_ordered_modules_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = (MR_Word) MR_TAG_COMMON(0,1,1);
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(list__reverse_2_0,
		make__program_target__reverse_ordered_modules_3_0_i6);
MR_def_label(make__program_target__reverse_ordered_modules_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_r1;
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,3,1);
	MR_np_call_localret_ent(list__map_3_0,
		make__program_target__reverse_ordered_modules_3_0_i7);
MR_def_label(make__program_target__reverse_ordered_modules_3_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__prim_data, sym_name);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(list__condense_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(libs__globals__io_lookup_bool_option_4_0);
MR_decl_entry(list__filter_3_0);
MR_decl_entry(make__dependencies__make_local_module_id_options_7_0);

MR_BEGIN_MODULE(make__program_target_module4)
	MR_init_entry1(make__program_target__build_analysis_files_8_0);
	MR_init_label7(make__program_target__build_analysis_files_8_0,2,3,4,7,8,9,11)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(make__program_target__build_analysis_files_8_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_np_call_localret_ent(libs__globals__io_get_target_3_0,
		make__program_target__build_analysis_files_8_0_i2);
MR_def_label(make__program_target__build_analysis_files_8_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 493;
	MR_np_call_localret_ent(libs__globals__io_lookup_bool_option_4_0,
		make__program_target__build_analysis_files_8_0_i3);
MR_def_label(make__program_target__build_analysis_files_8_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(3),0)) {
		MR_GOTO_LAB(make__program_target__build_analysis_files_8_0_i4);
	}
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(make__program_target__build_analysis_files_8_0_i4);
	}
	MR_r1 = (MR_Integer) 0;
	MR_r2 = MR_sv(4);
	MR_decr_sp_and_return(5);
MR_def_label(make__program_target__build_analysis_files_8_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(0, MR_sv(4), 0);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(make__program_target__reverse_ordered_modules_3_0,
		make__program_target__build_analysis_files_8_0_i7);
MR_def_label(make__program_target__build_analysis_files_8_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r2 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(7,1);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(make__program_target__IntroducedFrom__pred__build_analysis_files__681__1_2_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(2);
	MR_r3 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__prim_data, sym_name);
	}
	MR_np_call_localret_ent(list__filter_3_0,
		make__program_target__build_analysis_files_8_0_i8);
MR_def_label(make__program_target__build_analysis_files_8_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	MR_r2 = MR_sv(4);
	}
	MR_np_call_localret_ent(make__dependencies__make_local_module_id_options_7_0,
		make__program_target__build_analysis_files_8_0_i9);
MR_def_label(make__program_target__build_analysis_files_8_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(make__program_target__build_analysis_files_8_0_i11);
	}
	MR_r1 = (MR_Integer) 0;
	MR_r2 = MR_r3;
	MR_decr_sp_and_return(5);
MR_def_label(make__program_target__build_analysis_files_8_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r4 = MR_r3;
	MR_r3 = MR_sv(3);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(f_109_97_107_101_95_95_112_114_111_103_114_97_109_95_116_97_114_103_101_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_97_110_97_108_121_115_105_115_95_102_105_108_101_115_95_50_95_95_91_49_93_95_48_9_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(make__util__verbose_msg_3_0);
MR_decl_entry(libs__globals__io_lookup_string_option_4_0);
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_string_0;
MR_decl_entry(fn__list__map_2_0);
MR_decl_entry(fn__string__join_list_2_0);
MR_decl_entry(io__output_stream_3_0);
MR_decl_entry(hlds__passes_aux__invoke_system_command_6_0);

MR_BEGIN_MODULE(make__program_target_module5)
	MR_init_entry1(make__program_target__install_file_5_0);
	MR_init_label5(make__program_target__install_file_5_0,2,3,4,5,6)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(make__program_target__install_file_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(8,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(make__program_target__IntroducedFrom__pred__install_file__1197__1_4_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr1, 3) = MR_r1;
	MR_tempr2 = MR_r2;
	MR_tfield(0, MR_tempr1, 4) = MR_tempr2;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_tempr2;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(make__util__verbose_msg_3_0,
		make__program_target__install_file_5_0_i2);
MR_def_label(make__program_target__install_file_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 503;
	MR_np_call_localret_ent(libs__globals__io_lookup_string_option_4_0,
		make__program_target__install_file_5_0_i3);
MR_def_label(make__program_target__install_file_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_r4 = MR_tempr3;
	MR_tfield(1, MR_tempr3, 0) = MR_r1;
	MR_tfield(1, MR_tempr3, 1) = MR_tempr2;
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,3,2);
	}
	MR_np_call_localret_ent(fn__list__map_2_0,
		make__program_target__install_file_5_0_i4);
MR_def_label(make__program_target__install_file_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("   ", 3);
	MR_np_call_localret_ent(fn__string__join_list_2_0,
		make__program_target__install_file_5_0_i5);
MR_def_label(make__program_target__install_file_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(io__output_stream_3_0,
		make__program_target__install_file_5_0_i6);
MR_def_label(make__program_target__install_file_5_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 0;
	MR_r3 = MR_sv(1);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(hlds__passes_aux__invoke_system_command_6_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__f_100_105_114_95_95_47_2_0);
MR_decl_entry(parse_tree__modules__module_name_to_file_name_6_0);

MR_BEGIN_MODULE(make__program_target_module6)
	MR_init_entry1(make__program_target__install_grade_init_5_0);
	MR_init_label6(make__program_target__install_grade_init_5_0,2,3,4,5,6,7)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(make__program_target__install_grade_init_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_r1 = (MR_Integer) 499;
	MR_np_call_localret_ent(libs__globals__io_lookup_string_option_4_0,
		make__program_target__install_grade_init_5_0_i2);
MR_def_label(make__program_target__install_grade_init_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("lib", 3);
	MR_np_call_localret_ent(fn__f_100_105_114_95_95_47_2_0,
		make__program_target__install_grade_init_5_0_i3);
MR_def_label(make__program_target__install_grade_init_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("mercury", 7);
	MR_np_call_localret_ent(fn__f_100_105_114_95_95_47_2_0,
		make__program_target__install_grade_init_5_0_i4);
MR_def_label(make__program_target__install_grade_init_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("modules", 7);
	MR_np_call_localret_ent(fn__f_100_105_114_95_95_47_2_0,
		make__program_target__install_grade_init_5_0_i5);
MR_def_label(make__program_target__install_grade_init_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(fn__f_100_105_114_95_95_47_2_0,
		make__program_target__install_grade_init_5_0_i6);
MR_def_label(make__program_target__install_grade_init_5_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = (MR_Word) MR_string_const(".init", 5);
	MR_r3 = (MR_Integer) 0;
	MR_np_call_localret_ent(parse_tree__modules__module_name_to_file_name_6_0,
		make__program_target__install_grade_init_5_0_i7);
MR_def_label(make__program_target__install_grade_init_5_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(make__program_target__install_file_5_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(libs__globals__io_lookup_accumulating_option_4_0);
MR_decl_entry(list__member_2_0);
MR_decl_entry(fn__dir__det_basename_1_0);

MR_BEGIN_MODULE(make__program_target_module7)
	MR_init_entry1(make__program_target__maybe_install_library_file_6_0);
	MR_init_label8(make__program_target__maybe_install_library_file_6_0,2,4,6,10,11,12,13,14)
	MR_init_label6(make__program_target__maybe_install_library_file_6_0,15,16,17,18,3,21)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(make__program_target__maybe_install_library_file_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_r1 = (MR_Integer) 505;
	MR_np_call_localret_ent(libs__globals__io_lookup_accumulating_option_4_0,
		make__program_target__maybe_install_library_file_6_0_i2);
MR_def_label(make__program_target__maybe_install_library_file_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(list__member_2_0,
		make__program_target__maybe_install_library_file_6_0_i4);
MR_def_label(make__program_target__maybe_install_library_file_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(make__program_target__maybe_install_library_file_6_0_i3);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(make__program_target__install_file_5_0,
		make__program_target__maybe_install_library_file_6_0_i6);
MR_def_label(make__program_target__maybe_install_library_file_6_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *)MR_sv(1), (char *)(MR_Word) MR_string_const("static", 6)) != 0)) {
		MR_GOTO_LAB(make__program_target__maybe_install_library_file_6_0_i21);
	}
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(make__program_target__maybe_install_library_file_6_0_i21);
	}
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(fn__dir__det_basename_1_0,
		make__program_target__maybe_install_library_file_6_0_i10);
MR_def_label(make__program_target__maybe_install_library_file_6_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(8,1);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(make__program_target__IntroducedFrom__pred__generate_archive_index__1302__1_4_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr1, 3) = MR_r1;
	MR_tfield(0, MR_tempr1, 4) = MR_sv(3);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(make__util__verbose_msg_3_0,
		make__program_target__maybe_install_library_file_6_0_i11);
MR_def_label(make__program_target__maybe_install_library_file_6_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 460;
	MR_np_call_localret_ent(libs__globals__io_lookup_string_option_4_0,
		make__program_target__maybe_install_library_file_6_0_i12);
MR_def_label(make__program_target__maybe_install_library_file_6_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = (MR_Integer) 461;
	MR_np_call_localret_ent(libs__globals__io_lookup_string_option_4_0,
		make__program_target__maybe_install_library_file_6_0_i13);
MR_def_label(make__program_target__maybe_install_library_file_6_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_sv(2) = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__libs__options__quote_arg_1_0,
		make__program_target__maybe_install_library_file_6_0_i14);
MR_def_label(make__program_target__maybe_install_library_file_6_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(fn__f_100_105_114_95_95_47_2_0,
		make__program_target__maybe_install_library_file_6_0_i15);
MR_def_label(make__program_target__maybe_install_library_file_6_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__libs__options__quote_arg_1_0,
		make__program_target__maybe_install_library_file_6_0_i16);
MR_def_label(make__program_target__maybe_install_library_file_6_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr3;
	MR_tfield(1, MR_tempr3, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr3, 1) = MR_tempr2;
	MR_r1 = (MR_Word) MR_string_const("    ", 4);
	}
	MR_np_call_localret_ent(fn__string__join_list_2_0,
		make__program_target__maybe_install_library_file_6_0_i17);
MR_def_label(make__program_target__maybe_install_library_file_6_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(io__output_stream_3_0,
		make__program_target__maybe_install_library_file_6_0_i18);
MR_def_label(make__program_target__maybe_install_library_file_6_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 0;
	MR_r3 = MR_sv(1);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(hlds__passes_aux__invoke_system_command_6_0);
MR_def_label(make__program_target__maybe_install_library_file_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
MR_def_label(make__program_target__maybe_install_library_file_6_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(4);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(io__write_string_3_0);
MR_decl_entry(fn__io__error_message_1_0);
MR_decl_entry(io__nl_2_0);

MR_BEGIN_MODULE(make__program_target_module8)
	MR_init_entry1(make__program_target__print_mkdir_errors_4_0);
	MR_init_label8(make__program_target__print_mkdir_errors_4_0,21,5,7,8,9,10,11,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(make__program_target__print_mkdir_errors_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
MR_def_label(make__program_target__print_mkdir_errors_4_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	while (1) {
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(make__program_target__print_mkdir_errors_4_0_i3);
	}
	MR_r3 = MR_ctfield(1, MR_r1, 0);
	if (MR_LTAGS_TESTR(MR_r3,0,0)) {
		MR_GOTO_LAB(make__program_target__print_mkdir_errors_4_0_i5);
	}
	MR_r1 = MR_ctfield(1, MR_r1, 1);
	MR_succip_word = MR_sv(3);
	/* continue */ } /* end while */
MR_def_label(make__program_target__print_mkdir_errors_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_ctfield(1, MR_r3, 0);
	MR_sv(2) = MR_ctfield(1, MR_r1, 1);
	MR_r1 = (MR_Word) MR_string_const("Error creating installation directories: ", 41);
	MR_np_call_localret_ent(io__write_string_3_0,
		make__program_target__print_mkdir_errors_4_0_i7);
MR_def_label(make__program_target__print_mkdir_errors_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(fn__io__error_message_1_0,
		make__program_target__print_mkdir_errors_4_0_i8);
MR_def_label(make__program_target__print_mkdir_errors_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__write_string_3_0,
		make__program_target__print_mkdir_errors_4_0_i9);
MR_def_label(make__program_target__print_mkdir_errors_4_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__nl_2_0,
		make__program_target__print_mkdir_errors_4_0_i10);
MR_def_label(make__program_target__print_mkdir_errors_4_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_np_localcall_lab(make__program_target__print_mkdir_errors_4_0,
		make__program_target__print_mkdir_errors_4_0_i11);
MR_def_label(make__program_target__print_mkdir_errors_4_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(3);
MR_def_label(make__program_target__print_mkdir_errors_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__f_115_116_114_105_110_103_95_95_43_43_2_0);
MR_decl_entry(parse_tree__modules__maybe_make_symlink_5_0);

MR_BEGIN_MODULE(make__program_target_module9)
	MR_init_entry1(make__program_target__make_install_symlink_5_0);
	MR_init_label2(make__program_target__make_install_symlink_5_0,2,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(make__program_target__make_install_symlink_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_r1 = MR_r2;
	MR_r2 = (MR_Word) MR_string_const("s", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		make__program_target__make_install_symlink_5_0_i2);
MR_def_label(make__program_target__make_install_symlink_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(fn__f_100_105_114_95_95_47_2_0,
		make__program_target__make_install_symlink_5_0_i3);
MR_def_label(make__program_target__make_install_symlink_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("..", 2);
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(parse_tree__modules__maybe_make_symlink_5_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(dir__make_directory_4_0);
extern const MR_TypeCtorInfo_Struct mercury_data_bool__type_ctor_info_bool_0;
MR_decl_entry(list__map_foldl_5_0);
MR_decl_entry(fn__bool__and_list_1_0);

MR_BEGIN_MODULE(make__program_target_module10)
	MR_init_entry1(make__program_target__make_grade_install_dirs_5_0);
	MR_init_label8(make__program_target__make_grade_install_dirs_5_0,2,3,4,5,6,7,8,9)
	MR_init_label8(make__program_target__make_grade_install_dirs_5_0,10,11,12,13,14,15,16,17)
	MR_init_label8(make__program_target__make_grade_install_dirs_5_0,18,19,22,23,24,25,26,27)
	MR_init_label8(make__program_target__make_grade_install_dirs_5_0,28,29,21,20,34,33,31,40)
	MR_init_label8(make__program_target__make_grade_install_dirs_5_0,41,42,43,47,49,45,54,55)
	MR_init_label8(make__program_target__make_grade_install_dirs_5_0,56,57,59,61,62,63,64,65)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(make__program_target__make_grade_install_dirs_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Integer) 499;
	MR_np_call_localret_ent(libs__globals__io_lookup_string_option_4_0,
		make__program_target__make_grade_install_dirs_5_0_i2);
MR_def_label(make__program_target__make_grade_install_dirs_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("lib", 3);
	MR_np_call_localret_ent(fn__f_100_105_114_95_95_47_2_0,
		make__program_target__make_grade_install_dirs_5_0_i3);
MR_def_label(make__program_target__make_grade_install_dirs_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("mercury", 7);
	MR_np_call_localret_ent(fn__f_100_105_114_95_95_47_2_0,
		make__program_target__make_grade_install_dirs_5_0_i4);
MR_def_label(make__program_target__make_grade_install_dirs_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r2 = (MR_Word) MR_string_const("ints", 4);
	MR_np_call_localret_ent(fn__f_100_105_114_95_95_47_2_0,
		make__program_target__make_grade_install_dirs_5_0_i5);
MR_def_label(make__program_target__make_grade_install_dirs_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(fn__f_100_105_114_95_95_47_2_0,
		make__program_target__make_grade_install_dirs_5_0_i6);
MR_def_label(make__program_target__make_grade_install_dirs_5_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("Mercury", 7);
	MR_np_call_localret_ent(fn__f_100_105_114_95_95_47_2_0,
		make__program_target__make_grade_install_dirs_5_0_i7);
MR_def_label(make__program_target__make_grade_install_dirs_5_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_np_call_localret_ent(dir__make_directory_4_0,
		make__program_target__make_grade_install_dirs_5_0_i8);
MR_def_label(make__program_target__make_grade_install_dirs_5_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = (MR_Word) MR_string_const("lib", 3);
	MR_np_call_localret_ent(fn__f_100_105_114_95_95_47_2_0,
		make__program_target__make_grade_install_dirs_5_0_i9);
MR_def_label(make__program_target__make_grade_install_dirs_5_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(fn__f_100_105_114_95_95_47_2_0,
		make__program_target__make_grade_install_dirs_5_0_i10);
MR_def_label(make__program_target__make_grade_install_dirs_5_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("inc", 3);
	MR_np_call_localret_ent(fn__f_100_105_114_95_95_47_2_0,
		make__program_target__make_grade_install_dirs_5_0_i11);
MR_def_label(make__program_target__make_grade_install_dirs_5_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("Mercury", 7);
	MR_np_call_localret_ent(fn__f_100_105_114_95_95_47_2_0,
		make__program_target__make_grade_install_dirs_5_0_i12);
MR_def_label(make__program_target__make_grade_install_dirs_5_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_np_call_localret_ent(dir__make_directory_4_0,
		make__program_target__make_grade_install_dirs_5_0_i13);
MR_def_label(make__program_target__make_grade_install_dirs_5_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_sv(2) = MR_tempr1;
	MR_r2 = (MR_Word) MR_string_const("modules", 7);
	}
	MR_np_call_localret_ent(fn__f_100_105_114_95_95_47_2_0,
		make__program_target__make_grade_install_dirs_5_0_i14);
MR_def_label(make__program_target__make_grade_install_dirs_5_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(fn__f_100_105_114_95_95_47_2_0,
		make__program_target__make_grade_install_dirs_5_0_i15);
MR_def_label(make__program_target__make_grade_install_dirs_5_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(dir__make_directory_4_0,
		make__program_target__make_grade_install_dirs_5_0_i16);
MR_def_label(make__program_target__make_grade_install_dirs_5_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_sv(2) = MR_tempr3;
	MR_tfield(1, MR_tempr3, 0) = MR_sv(4);
	MR_tfield(1, MR_tempr3, 1) = MR_tempr2;
	MR_r1 = MR_sv(5);
	MR_r2 = (MR_Word) MR_string_const("mih", 3);
	}
	MR_np_call_localret_ent(make__program_target__make_install_symlink_5_0,
		make__program_target__make_grade_install_dirs_5_0_i17);
MR_def_label(make__program_target__make_grade_install_dirs_5_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r4 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(9,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(make__program_target__make_install_symlink_5_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(3);
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = (MR_Word) MR_BOOL_CTOR_ADDR;
	MR_r3 = (MR_Word) MR_IO_CTOR_ADDR;
	MR_r5 = (MR_Word) MR_TAG_COMMON(1,10,2);
	}
	MR_np_call_localret_ent(list__map_foldl_5_0,
		make__program_target__make_grade_install_dirs_5_0_i18);
MR_def_label(make__program_target__make_grade_install_dirs_5_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__bool__and_list_1_0,
		make__program_target__make_grade_install_dirs_5_0_i19);
MR_def_label(make__program_target__make_grade_install_dirs_5_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(make__program_target__make_grade_install_dirs_5_0_i21);
	}
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = (MR_Word) MR_string_const("mihs", 4);
	MR_np_call_localret_ent(fn__f_100_105_114_95_95_47_2_0,
		make__program_target__make_grade_install_dirs_5_0_i22);
MR_def_label(make__program_target__make_grade_install_dirs_5_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(dir__make_directory_4_0,
		make__program_target__make_grade_install_dirs_5_0_i23);
MR_def_label(make__program_target__make_grade_install_dirs_5_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = (MR_Word) MR_string_const("opts", 4);
	MR_np_call_localret_ent(fn__f_100_105_114_95_95_47_2_0,
		make__program_target__make_grade_install_dirs_5_0_i24);
MR_def_label(make__program_target__make_grade_install_dirs_5_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(dir__make_directory_4_0,
		make__program_target__make_grade_install_dirs_5_0_i25);
MR_def_label(make__program_target__make_grade_install_dirs_5_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = (MR_Word) MR_string_const("trans_opts", 10);
	MR_np_call_localret_ent(fn__f_100_105_114_95_95_47_2_0,
		make__program_target__make_grade_install_dirs_5_0_i26);
MR_def_label(make__program_target__make_grade_install_dirs_5_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(dir__make_directory_4_0,
		make__program_target__make_grade_install_dirs_5_0_i27);
MR_def_label(make__program_target__make_grade_install_dirs_5_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_sv(3) = MR_tempr1;
	MR_r2 = (MR_Word) MR_string_const("analysiss", 9);
	}
	MR_np_call_localret_ent(fn__f_100_105_114_95_95_47_2_0,
		make__program_target__make_grade_install_dirs_5_0_i28);
MR_def_label(make__program_target__make_grade_install_dirs_5_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(dir__make_directory_4_0,
		make__program_target__make_grade_install_dirs_5_0_i29);
MR_def_label(make__program_target__make_grade_install_dirs_5_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = MR_sv(2);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_r4 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_sv(3);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_sv(3) = MR_tempr3;
	MR_tfield(1, MR_tempr3, 0) = MR_sv(4);
	MR_tfield(1, MR_tempr3, 1) = MR_tempr2;
	MR_GOTO_LAB(make__program_target__make_grade_install_dirs_5_0_i20);
	}
MR_def_label(make__program_target__make_grade_install_dirs_5_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(3) = MR_ctfield(1, MR_tempr1, 1);
	MR_sv(5) = MR_ctfield(1, MR_tempr1, 0);
	}
MR_def_label(make__program_target__make_grade_install_dirs_5_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(5),0,0)) {
		MR_GOTO_LAB(make__program_target__make_grade_install_dirs_5_0_i31);
	}
	MR_r3 = MR_ctfield(1, MR_sv(3), 0);
	if (MR_LTAGS_TESTR(MR_r3,0,0)) {
		MR_GOTO_LAB(make__program_target__make_grade_install_dirs_5_0_i33);
	}
	MR_r1 = MR_ctfield(1, MR_sv(3), 1);
	MR_np_call_localret_ent(make__program_target__print_mkdir_errors_4_0,
		make__program_target__make_grade_install_dirs_5_0_i34);
MR_def_label(make__program_target__make_grade_install_dirs_5_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_decr_sp_and_return(6);
MR_def_label(make__program_target__make_grade_install_dirs_5_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_ctfield(1, MR_r3, 0);
	MR_sv(3) = MR_ctfield(1, MR_sv(3), 1);
	MR_r1 = (MR_Word) MR_string_const("Error creating installation directories: ", 41);
	MR_np_call_localret_ent(io__write_string_3_0,
		make__program_target__make_grade_install_dirs_5_0_i49);
MR_def_label(make__program_target__make_grade_install_dirs_5_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_ctfield(1, MR_sv(5), 0);
	MR_r1 = (MR_Word) MR_string_const("Error creating installation directories: ", 41);
	MR_np_call_localret_ent(io__write_string_3_0,
		make__program_target__make_grade_install_dirs_5_0_i40);
MR_def_label(make__program_target__make_grade_install_dirs_5_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(fn__io__error_message_1_0,
		make__program_target__make_grade_install_dirs_5_0_i41);
MR_def_label(make__program_target__make_grade_install_dirs_5_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__write_string_3_0,
		make__program_target__make_grade_install_dirs_5_0_i42);
MR_def_label(make__program_target__make_grade_install_dirs_5_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__nl_2_0,
		make__program_target__make_grade_install_dirs_5_0_i43);
MR_def_label(make__program_target__make_grade_install_dirs_5_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_ctfield(1, MR_sv(3), 0);
	if (MR_LTAGS_TESTR(MR_r3,0,0)) {
		MR_GOTO_LAB(make__program_target__make_grade_install_dirs_5_0_i45);
	}
	MR_r4 = MR_ctfield(1, MR_sv(3), 1);
	MR_r3 = MR_ctfield(1, MR_r4, 0);
	if (MR_LTAGS_TESTR(MR_r3,0,0)) {
		MR_GOTO_LAB(make__program_target__make_grade_install_dirs_5_0_i47);
	}
	MR_r1 = MR_ctfield(1, MR_r4, 1);
	MR_np_call_localret_ent(make__program_target__print_mkdir_errors_4_0,
		make__program_target__make_grade_install_dirs_5_0_i65);
MR_def_label(make__program_target__make_grade_install_dirs_5_0,47)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_ctfield(1, MR_r3, 0);
	MR_sv(3) = MR_ctfield(1, MR_r4, 1);
	MR_r1 = (MR_Word) MR_string_const("Error creating installation directories: ", 41);
	MR_np_call_localret_ent(io__write_string_3_0,
		make__program_target__make_grade_install_dirs_5_0_i49);
MR_def_label(make__program_target__make_grade_install_dirs_5_0,49)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(fn__io__error_message_1_0,
		make__program_target__make_grade_install_dirs_5_0_i62);
MR_def_label(make__program_target__make_grade_install_dirs_5_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_ctfield(1, MR_r3, 0);
	MR_sv(3) = MR_ctfield(1, MR_sv(3), 1);
	MR_r1 = (MR_Word) MR_string_const("Error creating installation directories: ", 41);
	MR_np_call_localret_ent(io__write_string_3_0,
		make__program_target__make_grade_install_dirs_5_0_i54);
MR_def_label(make__program_target__make_grade_install_dirs_5_0,54)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(fn__io__error_message_1_0,
		make__program_target__make_grade_install_dirs_5_0_i55);
MR_def_label(make__program_target__make_grade_install_dirs_5_0,55)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__write_string_3_0,
		make__program_target__make_grade_install_dirs_5_0_i56);
MR_def_label(make__program_target__make_grade_install_dirs_5_0,56)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__nl_2_0,
		make__program_target__make_grade_install_dirs_5_0_i57);
MR_def_label(make__program_target__make_grade_install_dirs_5_0,57)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_ctfield(1, MR_sv(3), 0);
	if (MR_LTAGS_TESTR(MR_r3,0,0)) {
		MR_GOTO_LAB(make__program_target__make_grade_install_dirs_5_0_i59);
	}
	MR_r1 = MR_ctfield(1, MR_sv(3), 1);
	MR_np_call_localret_ent(make__program_target__print_mkdir_errors_4_0,
		make__program_target__make_grade_install_dirs_5_0_i65);
MR_def_label(make__program_target__make_grade_install_dirs_5_0,59)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_ctfield(1, MR_r3, 0);
	MR_sv(3) = MR_ctfield(1, MR_sv(3), 1);
	MR_r1 = (MR_Word) MR_string_const("Error creating installation directories: ", 41);
	MR_np_call_localret_ent(io__write_string_3_0,
		make__program_target__make_grade_install_dirs_5_0_i61);
MR_def_label(make__program_target__make_grade_install_dirs_5_0,61)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(fn__io__error_message_1_0,
		make__program_target__make_grade_install_dirs_5_0_i62);
MR_def_label(make__program_target__make_grade_install_dirs_5_0,62)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__write_string_3_0,
		make__program_target__make_grade_install_dirs_5_0_i63);
MR_def_label(make__program_target__make_grade_install_dirs_5_0,63)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__nl_2_0,
		make__program_target__make_grade_install_dirs_5_0_i64);
MR_def_label(make__program_target__make_grade_install_dirs_5_0,64)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(make__program_target__print_mkdir_errors_4_0,
		make__program_target__make_grade_install_dirs_5_0_i65);
MR_def_label(make__program_target__make_grade_install_dirs_5_0,65)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_r2 = MR_sv(1);
	MR_decr_sp_and_return(6);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__bool__and_2_0);
MR_decl_entry(make__util__linked_target_file_name_5_0);
MR_decl_entry(list__map_foldl2_7_0);

MR_BEGIN_MODULE(make__program_target_module11)
	MR_init_entry1(make__program_target__install_library_grade_files_9_0);
	MR_init_label8(make__program_target__install_library_grade_files_9_0,2,3,5,6,7,8,9,12)
	MR_init_label8(make__program_target__install_library_grade_files_9_0,13,14,15,10,17,18,19,20)
	MR_init_label8(make__program_target__install_library_grade_files_9_0,21,32,22,23,26,27,28,29)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(make__program_target__install_library_grade_files_9_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_sv(2) = MR_tempr1;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_sv(8) = MR_r5;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(make__program_target__make_grade_install_dirs_5_0,
		make__program_target__install_library_grade_files_9_0_i2);
MR_def_label(make__program_target__install_library_grade_files_9_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__bool__and_2_0,
		make__program_target__install_library_grade_files_9_0_i3);
MR_def_label(make__program_target__install_library_grade_files_9_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(1),0)) {
		MR_GOTO_LAB(make__program_target__install_library_grade_files_9_0_i5);
	}
	MR_r1 = (MR_Integer) 0;
	MR_r2 = MR_sv(8);
	MR_decr_sp_and_return(9);
MR_def_label(make__program_target__install_library_grade_files_9_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = (MR_Integer) 1;
	MR_np_call_localret_ent(make__util__linked_target_file_name_5_0,
		make__program_target__install_library_grade_files_9_0_i6);
MR_def_label(make__program_target__install_library_grade_files_9_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = (MR_Integer) 2;
	MR_np_call_localret_ent(make__util__linked_target_file_name_5_0,
		make__program_target__install_library_grade_files_9_0_i7);
MR_def_label(make__program_target__install_library_grade_files_9_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = (MR_Integer) 3;
	MR_np_call_localret_ent(make__util__linked_target_file_name_5_0,
		make__program_target__install_library_grade_files_9_0_i8);
MR_def_label(make__program_target__install_library_grade_files_9_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_r1 = (MR_Integer) 499;
	MR_np_call_localret_ent(libs__globals__io_lookup_string_option_4_0,
		make__program_target__install_library_grade_files_9_0_i9);
MR_def_label(make__program_target__install_library_grade_files_9_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *)MR_sv(2), (char *)(MR_Word) MR_string_const("java", 4)) != 0)) {
		MR_GOTO_LAB(make__program_target__install_library_grade_files_9_0_i10);
	}
	MR_r2 = (MR_Word) MR_string_const("lib", 3);
	MR_np_call_localret_ent(fn__f_100_105_114_95_95_47_2_0,
		make__program_target__install_library_grade_files_9_0_i12);
MR_def_label(make__program_target__install_library_grade_files_9_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("mercury", 7);
	MR_np_call_localret_ent(fn__f_100_105_114_95_95_47_2_0,
		make__program_target__install_library_grade_files_9_0_i13);
MR_def_label(make__program_target__install_library_grade_files_9_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("lib", 3);
	MR_np_call_localret_ent(fn__f_100_105_114_95_95_47_2_0,
		make__program_target__install_library_grade_files_9_0_i14);
MR_def_label(make__program_target__install_library_grade_files_9_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("java", 4);
	MR_np_call_localret_ent(fn__f_100_105_114_95_95_47_2_0,
		make__program_target__install_library_grade_files_9_0_i15);
MR_def_label(make__program_target__install_library_grade_files_9_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_np_call_localret_ent(make__program_target__install_file_5_0,
		make__program_target__install_library_grade_files_9_0_i32);
MR_def_label(make__program_target__install_library_grade_files_9_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("lib", 3);
	MR_np_call_localret_ent(fn__f_100_105_114_95_95_47_2_0,
		make__program_target__install_library_grade_files_9_0_i17);
MR_def_label(make__program_target__install_library_grade_files_9_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("mercury", 7);
	MR_np_call_localret_ent(fn__f_100_105_114_95_95_47_2_0,
		make__program_target__install_library_grade_files_9_0_i18);
MR_def_label(make__program_target__install_library_grade_files_9_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("lib", 3);
	MR_np_call_localret_ent(fn__f_100_105_114_95_95_47_2_0,
		make__program_target__install_library_grade_files_9_0_i19);
MR_def_label(make__program_target__install_library_grade_files_9_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(fn__f_100_105_114_95_95_47_2_0,
		make__program_target__install_library_grade_files_9_0_i20);
MR_def_label(make__program_target__install_library_grade_files_9_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("static", 6);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(7);
	MR_np_call_localret_ent(make__program_target__maybe_install_library_file_6_0,
		make__program_target__install_library_grade_files_9_0_i21);
MR_def_label(make__program_target__install_library_grade_files_9_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *)MR_sv(5), (char *)MR_sv(6)) != 0)) {
		MR_GOTO_LAB(make__program_target__install_library_grade_files_9_0_i22);
	}
MR_def_label(make__program_target__install_library_grade_files_9_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(3);
	MR_sv(3) = MR_r4;
	MR_GOTO_LAB(make__program_target__install_library_grade_files_9_0_i26);
MR_def_label(make__program_target__install_library_grade_files_9_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("shared", 6);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(7);
	MR_np_call_localret_ent(make__program_target__maybe_install_library_file_6_0,
		make__program_target__install_library_grade_files_9_0_i23);
MR_def_label(make__program_target__install_library_grade_files_9_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(fn__bool__and_2_0,
		make__program_target__install_library_grade_files_9_0_i32);
MR_def_label(make__program_target__install_library_grade_files_9_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_np_call_localret_ent(make__program_target__install_grade_init_5_0,
		make__program_target__install_library_grade_files_9_0_i27);
MR_def_label(make__program_target__install_library_grade_files_9_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_r5 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(11,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(make__program_target__install_grade_ints_and_headers_8_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(2);
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__prim_data, sym_name);
	MR_r2 = (MR_Word) MR_BOOL_CTOR_ADDR;
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(make, make_info);
	MR_r4 = (MR_Word) MR_IO_CTOR_ADDR;
	MR_r6 = MR_sv(4);
	MR_r7 = MR_sv(8);
	}
	MR_np_call_localret_ent(list__map_foldl2_7_0,
		make__program_target__install_library_grade_files_9_0_i28);
MR_def_label(make__program_target__install_library_grade_files_9_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = MR_sv(3);
	MR_tfield(1, MR_r1, 1) = MR_tempr1;
	MR_sv(1) = MR_r2;
	}
	MR_np_call_localret_ent(fn__bool__and_list_1_0,
		make__program_target__install_library_grade_files_9_0_i29);
MR_def_label(make__program_target__install_library_grade_files_9_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_decr_sp_and_return(9);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

extern const MR_TypeCtorInfo_Struct mercury_data_io__type_ctor_info_res_0;
MR_decl_entry(fn__f_108_105_115_116_95_95_43_43_2_0);

MR_BEGIN_MODULE(make__program_target_module12)
	MR_init_entry1(make__program_target__make_install_dirs_4_0);
	MR_init_label8(make__program_target__make_install_dirs_4_0,2,3,4,5,6,7,8,9)
	MR_init_label8(make__program_target__make_install_dirs_4_0,10,11,12,13,16,15,14,18)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(make__program_target__make_install_dirs_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_r1 = (MR_Integer) 499;
	MR_np_call_localret_ent(libs__globals__io_lookup_string_option_4_0,
		make__program_target__make_install_dirs_4_0_i2);
MR_def_label(make__program_target__make_install_dirs_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("lib", 3);
	MR_np_call_localret_ent(fn__f_100_105_114_95_95_47_2_0,
		make__program_target__make_install_dirs_4_0_i3);
MR_def_label(make__program_target__make_install_dirs_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("mercury", 7);
	MR_np_call_localret_ent(fn__f_100_105_114_95_95_47_2_0,
		make__program_target__make_install_dirs_4_0_i4);
MR_def_label(make__program_target__make_install_dirs_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r2 = (MR_Word) MR_string_const("inc", 3);
	MR_np_call_localret_ent(fn__f_100_105_114_95_95_47_2_0,
		make__program_target__make_install_dirs_4_0_i5);
MR_def_label(make__program_target__make_install_dirs_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(dir__make_directory_4_0,
		make__program_target__make_install_dirs_4_0_i6);
MR_def_label(make__program_target__make_install_dirs_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = (MR_Word) MR_string_const("modules", 7);
	MR_np_call_localret_ent(fn__f_100_105_114_95_95_47_2_0,
		make__program_target__make_install_dirs_4_0_i7);
MR_def_label(make__program_target__make_install_dirs_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(dir__make_directory_4_0,
		make__program_target__make_install_dirs_4_0_i8);
MR_def_label(make__program_target__make_install_dirs_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	MR_r2 = (MR_Word) MR_string_const("ints", 4);
	}
	MR_np_call_localret_ent(fn__f_100_105_114_95_95_47_2_0,
		make__program_target__make_install_dirs_4_0_i9);
MR_def_label(make__program_target__make_install_dirs_4_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("Mercury", 7);
	MR_np_call_localret_ent(fn__f_100_105_114_95_95_47_2_0,
		make__program_target__make_install_dirs_4_0_i10);
MR_def_label(make__program_target__make_install_dirs_4_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_np_call_localret_ent(dir__make_directory_4_0,
		make__program_target__make_install_dirs_4_0_i11);
MR_def_label(make__program_target__make_install_dirs_4_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr3, 0, (MR_Integer) 4);
	MR_r4 = MR_tempr3;
	MR_tfield(0, MR_tempr3, 0) = (MR_Word) MR_COMMON(9,1);
	MR_tfield(0, MR_tempr3, 1) = (MR_Word) MR_ENTRY_AP(make__program_target__make_install_symlink_5_0);
	MR_tfield(0, MR_tempr3, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr3, 3) = MR_sv(3);
	MR_sv(2) = MR_tempr1;
	MR_sv(1) = (MR_Word) MR_TAG_COMMON(1,10,11);
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = (MR_Word) MR_BOOL_CTOR_ADDR;
	MR_r3 = (MR_Word) MR_IO_CTOR_ADDR;
	MR_r5 = MR_sv(1);
	}
	MR_np_call_localret_ent(list__map_foldl_5_0,
		make__program_target__make_install_dirs_4_0_i12);
MR_def_label(make__program_target__make_install_dirs_4_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__bool__and_list_1_0,
		make__program_target__make_install_dirs_4_0_i13);
MR_def_label(make__program_target__make_install_dirs_4_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(make__program_target__make_install_dirs_4_0_i15);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r4 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(9,2);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(make__program_target__IntroducedFrom__pred__make_install_dirs__1233__1_5_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(3);
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(io, res);
	MR_r3 = (MR_Word) MR_IO_CTOR_ADDR;
	MR_r5 = (MR_Word) MR_TAG_COMMON(1,10,11);
	}
	MR_np_call_localret_ent(list__map_foldl_5_0,
		make__program_target__make_install_dirs_4_0_i16);
MR_def_label(make__program_target__make_install_dirs_4_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(io, res);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		make__program_target__make_install_dirs_4_0_i14);
MR_def_label(make__program_target__make_install_dirs_4_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(2);
MR_def_label(make__program_target__make_install_dirs_4_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(make__program_target__print_mkdir_errors_4_0,
		make__program_target__make_install_dirs_4_0_i18);
MR_def_label(make__program_target__make_install_dirs_4_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_decr_sp_and_return(4);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(make__dependencies__find_reachable_local_modules_7_0);
MR_decl_entry(fn__set__to_sorted_list_1_0);
MR_decl_entry(libs__globals__io_get_globals_3_0);
MR_decl_entry(libs__handle_options__grade_directory_component_2_0);
MR_decl_entry(fn__list__delete_all_2_0);
MR_decl_entry(make__util__foldl2_maybe_stop_at_error_8_0);

MR_BEGIN_MODULE(make__program_target_module13)
	MR_init_entry1(make__program_target__install_library_6_0);
	MR_init_label8(make__program_target__install_library_6_0,2,3,4,8,9,10,11,13)
	MR_init_label5(make__program_target__install_library_6_0,16,17,18,12,5)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(make__program_target__install_library_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(make__dependencies__find_reachable_local_modules_7_0,
		make__program_target__install_library_6_0_i2);
MR_def_label(make__program_target__install_library_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_sv(4) = MR_r3;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__prim_data, sym_name);
	MR_np_call_localret_ent(fn__set__to_sorted_list_1_0,
		make__program_target__install_library_6_0_i3);
MR_def_label(make__program_target__install_library_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_np_call_localret_ent(make__program_target__make_install_dirs_4_0,
		make__program_target__install_library_6_0_i4);
MR_def_label(make__program_target__install_library_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(2),1)) {
		MR_GOTO_LAB(make__program_target__install_library_6_0_i5);
	}
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(make__program_target__install_library_6_0_i5);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r5 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(2,2);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(make__program_target__install_ints_and_headers_7_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tempr2 = MR_r2;
	MR_tfield(0, MR_tempr1, 3) = MR_tempr2;
	MR_sv(2) = MR_tempr2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__prim_data, sym_name);
	MR_r2 = (MR_Word) MR_BOOL_CTOR_ADDR;
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(make, make_info);
	MR_r4 = (MR_Word) MR_IO_CTOR_ADDR;
	MR_r6 = MR_sv(3);
	MR_r7 = MR_sv(4);
	}
	MR_np_call_localret_ent(list__map_foldl2_7_0,
		make__program_target__install_library_6_0_i8);
MR_def_label(make__program_target__install_library_6_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_sv(5) = MR_r2;
	MR_np_call_localret_ent(libs__globals__io_get_globals_3_0,
		make__program_target__install_library_6_0_i9);
MR_def_label(make__program_target__install_library_6_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(libs__handle_options__grade_directory_component_2_0,
		make__program_target__install_library_6_0_i10);
MR_def_label(make__program_target__install_library_6_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r5 = MR_sv(5);
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(3);
	MR_np_call_localret_ent(make__program_target__install_library_grade_files_9_0,
		make__program_target__install_library_6_0_i11);
MR_def_label(make__program_target__install_library_6_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_sv(4) = MR_tempr1;
	MR_sv(6) = MR_r2;
	}
	MR_np_call_localret_ent(fn__bool__and_list_1_0,
		make__program_target__install_library_6_0_i13);
MR_def_label(make__program_target__install_library_6_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(make__program_target__install_library_6_0_i12);
	}
	if (MR_INT_NE(MR_sv(4),1)) {
		MR_GOTO_LAB(make__program_target__install_library_6_0_i12);
	}
	MR_r1 = (MR_Integer) 504;
	MR_np_call_localret_ent(libs__globals__io_lookup_accumulating_option_4_0,
		make__program_target__install_library_6_0_i16);
MR_def_label(make__program_target__install_library_6_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = (MR_Integer) 493;
	MR_np_call_localret_ent(libs__globals__io_lookup_bool_option_4_0,
		make__program_target__install_library_6_0_i17);
MR_def_label(make__program_target__install_library_6_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r3 = MR_sv(5);
	MR_np_call_localret_ent(fn__list__delete_all_2_0,
		make__program_target__install_library_6_0_i18);
MR_def_label(make__program_target__install_library_6_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 6);
	MR_r5 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(12,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(make__program_target__install_library_grade_9_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 3;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 5) = MR_sv(3);
	MR_r6 = MR_r1;
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(make, make_info);
	MR_r3 = (MR_Word) MR_IO_CTOR_ADDR;
	MR_r4 = MR_sv(4);
	MR_r7 = MR_sv(6);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(make__util__foldl2_maybe_stop_at_error_8_0);
	}
MR_def_label(make__program_target__install_library_6_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_r2 = MR_sv(6);
	MR_decr_sp_and_return(7);
MR_def_label(make__program_target__install_library_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_r2 = MR_sv(4);
	MR_decr_sp_and_return(7);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(make__util__make_remove_file_6_0);
MR_decl_entry(list__foldl2_6_5);

MR_BEGIN_MODULE(make__program_target_module14)
	MR_init_entry1(make__program_target__remove_init_files_5_0);
	MR_init_label6(make__program_target__remove_init_files_5_0,2,3,4,5,6,7)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(make__program_target__remove_init_files_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(4) = MR_r2;
	MR_r1 = (MR_Integer) 400;
	MR_np_call_localret_ent(libs__globals__io_lookup_string_option_4_0,
		make__program_target__remove_init_files_5_0_i2);
MR_def_label(make__program_target__remove_init_files_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = (MR_Integer) 401;
	MR_np_call_localret_ent(libs__globals__io_lookup_string_option_4_0,
		make__program_target__remove_init_files_5_0_i3);
MR_def_label(make__program_target__remove_init_files_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = (MR_Integer) 402;
	MR_np_call_localret_ent(libs__globals__io_lookup_string_option_4_0,
		make__program_target__remove_init_files_5_0_i4);
MR_def_label(make__program_target__remove_init_files_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(6,1);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(make__util__make_remove_file_6_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r2 = MR_sv(2);
	MR_sv(2) = MR_tempr1;
	MR_r1 = (MR_Word) MR_string_const("_init", 5);
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		make__program_target__remove_init_files_5_0_i5);
MR_def_label(make__program_target__remove_init_files_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("_init", 5);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		make__program_target__remove_init_files_5_0_i6);
MR_def_label(make__program_target__remove_init_files_5_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("_init", 5);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		make__program_target__remove_init_files_5_0_i7);
MR_def_label(make__program_target__remove_init_files_5_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(3);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_r5 = MR_tempr3;
	MR_tfield(1, MR_tempr3, 0) = (MR_Word) MR_string_const("_init.c", 7);
	MR_tfield(1, MR_tempr3, 1) = MR_tempr1;
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(make, make_info);
	MR_r3 = (MR_Word) MR_IO_CTOR_ADDR;
	MR_r4 = MR_sv(2);
	MR_r6 = MR_sv(4);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(list__foldl2_6_5);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(libs__globals__io_set_option_4_0);

MR_BEGIN_MODULE(make__program_target_module15)
	MR_init_entry1(make__program_target__make_main_module_realclean_5_0);
	MR_init_label8(make__program_target__make_main_module_realclean_5_0,2,3,4,5,6,7,8,9)
	MR_init_label5(make__program_target__make_main_module_realclean_5_0,10,11,12,13,14)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(make__program_target__make_main_module_realclean_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(11);
	MR_sv(11) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(10) = MR_r2;
	MR_r2 = (MR_Integer) 0;
	MR_np_call_localret_ent(make__util__linked_target_file_name_5_0,
		make__program_target__make_main_module_realclean_5_0_i2);
MR_def_label(make__program_target__make_main_module_realclean_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = (MR_Integer) 1;
	MR_np_call_localret_ent(make__util__linked_target_file_name_5_0,
		make__program_target__make_main_module_realclean_5_0_i3);
MR_def_label(make__program_target__make_main_module_realclean_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = (MR_Integer) 2;
	MR_np_call_localret_ent(make__util__linked_target_file_name_5_0,
		make__program_target__make_main_module_realclean_5_0_i4);
MR_def_label(make__program_target__make_main_module_realclean_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = (MR_Integer) 3;
	MR_np_call_localret_ent(make__util__linked_target_file_name_5_0,
		make__program_target__make_main_module_realclean_5_0_i5);
MR_def_label(make__program_target__make_main_module_realclean_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = (MR_Integer) 511;
	MR_np_call_localret_ent(libs__globals__io_lookup_bool_option_4_0,
		make__program_target__make_main_module_realclean_5_0_i6);
MR_def_label(make__program_target__make_main_module_realclean_5_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = (MR_Integer) 511;
	MR_r2 = (MR_Word) MR_TAG_COMMON(1,13,0);
	MR_np_call_localret_ent(libs__globals__io_set_option_4_0,
		make__program_target__make_main_module_realclean_5_0_i7);
MR_def_label(make__program_target__make_main_module_realclean_5_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = (MR_Integer) 0;
	MR_np_call_localret_ent(make__util__linked_target_file_name_5_0,
		make__program_target__make_main_module_realclean_5_0_i8);
MR_def_label(make__program_target__make_main_module_realclean_5_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = (MR_Integer) 1;
	MR_np_call_localret_ent(make__util__linked_target_file_name_5_0,
		make__program_target__make_main_module_realclean_5_0_i9);
MR_def_label(make__program_target__make_main_module_realclean_5_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = (MR_Integer) 2;
	MR_np_call_localret_ent(make__util__linked_target_file_name_5_0,
		make__program_target__make_main_module_realclean_5_0_i10);
MR_def_label(make__program_target__make_main_module_realclean_5_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = (MR_Integer) 3;
	MR_np_call_localret_ent(make__util__linked_target_file_name_5_0,
		make__program_target__make_main_module_realclean_5_0_i11);
MR_def_label(make__program_target__make_main_module_realclean_5_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(6);
	MR_sv(6) = MR_r1;
	MR_r1 = (MR_Integer) 511;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(libs__globals__io_set_option_4_0,
		make__program_target__make_main_module_realclean_5_0_i12);
MR_def_label(make__program_target__make_main_module_realclean_5_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(6);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
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
	MR_tfield(1, MR_tempr1, 0) = MR_sv(5);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(4);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(3);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_r5 = MR_tempr3;
	MR_tfield(1, MR_tempr3, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr3, 1) = MR_tempr1;
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(make, make_info);
	MR_r3 = (MR_Word) MR_IO_CTOR_ADDR;
	MR_r4 = (MR_Word) MR_TAG_COMMON(0,3,3);
	MR_r6 = MR_sv(10);
	}
	MR_np_call_localret_ent(list__foldl2_6_5,
		make__program_target__make_main_module_realclean_5_0_i13);
MR_def_label(make__program_target__make_main_module_realclean_5_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = (MR_Word) MR_string_const(".init", 5);
	MR_np_call_localret_ent(make__util__make_remove_file_6_0,
		make__program_target__make_main_module_realclean_5_0_i14);
MR_def_label(make__program_target__make_main_module_realclean_5_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_succip_word = MR_sv(11);
	MR_decr_sp(11);
	MR_np_tailcall_ent(make__program_target__remove_init_files_5_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(make__program_target_module16)
	MR_init_entry1(make__program_target__make_linked_target_6_0);
	MR_init_label8(make__program_target__make_linked_target_6_0,3,9,7,13,6,5,15,17)
	MR_init_label2(make__program_target__make_linked_target_6_0,19,21)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__make__program_target__make_linked_target_6_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_ctfield(0, MR_r1, 1);
	MR_tempr2 = (MR_Word) (MR_Word *) &MR_tfield(0, (MR_Word *) &mercury_vector_common_14_0, ((MR_Integer) MR_tempr1 * (MR_Integer) 2));
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_ctfield(0, MR_r1, 0);
	MR_sv(3) = MR_tempr1;
	MR_sv(4) = MR_ctfield(0, MR_tempr2, 0);
	MR_sv(5) = MR_r2;
	MR_r1 = MR_ctfield(0, MR_tempr2, 1);
	}
	MR_np_call_localret_ent(libs__globals__io_lookup_accumulating_option_4_0,
		make__program_target__make_linked_target_6_0_i3);
MR_def_label(make__program_target__make_linked_target_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(3),1)) {
		MR_GOTO_LAB(make__program_target__make_linked_target_6_0_i7);
	}
	MR_r3 = MR_r1;
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = (MR_Word) MR_string_const("static", 6);
	MR_np_call_localret_ent(list__member_2_0,
		make__program_target__make_linked_target_6_0_i9);
MR_def_label(make__program_target__make_linked_target_6_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(make__program_target__make_linked_target_6_0_i5);
	}
	MR_r2 = MR_sv(5);
	MR_GOTO_LAB(make__program_target__make_linked_target_6_0_i6);
MR_def_label(make__program_target__make_linked_target_6_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(3),2)) {
		MR_GOTO_LAB(make__program_target__make_linked_target_6_0_i5);
	}
	MR_r3 = MR_r1;
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = (MR_Word) MR_string_const("shared", 6);
	MR_np_call_localret_ent(list__member_2_0,
		make__program_target__make_linked_target_6_0_i13);
MR_def_label(make__program_target__make_linked_target_6_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(make__program_target__make_linked_target_6_0_i5);
	}
	MR_r2 = MR_sv(5);
MR_def_label(make__program_target__make_linked_target_6_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(6);
MR_def_label(make__program_target__make_linked_target_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 253;
	MR_np_call_localret_ent(libs__globals__io_lookup_bool_option_4_0,
		make__program_target__make_linked_target_6_0_i15);
MR_def_label(make__program_target__make_linked_target_6_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(make__program_target__make_linked_target_6_0_i17);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(2,3);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(make__program_target__make_linked_target_2_7_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(1);
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(4);
	MR_r4 = MR_sv(5);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(make__util__build_with_module_options_8_0);
	}
MR_def_label(make__program_target__make_linked_target_6_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r1, 0) = MR_sv(2);
	MR_tfield(0, MR_r1, 1) = (MR_Word) MR_tbmkword(0, 2);
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(f_109_97_107_101_95_95_112_114_111_103_114_97_109_95_116_97_114_103_101_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_107_101_95_109_105_115_99_95_116_97_114_103_101_116_95_98_117_105_108_100_101_114_95_95_91_50_93_95_48_7_0,
		make__program_target__make_linked_target_6_0_i19);
MR_def_label(make__program_target__make_linked_target_6_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(make__program_target__make_linked_target_6_0_i21);
	}
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(6);
MR_def_label(make__program_target__make_linked_target_6_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(2,4);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(make__program_target__make_linked_target_2_7_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(1);
	MR_r1 = MR_sv(2);
	MR_r4 = MR_r2;
	MR_r2 = MR_sv(4);
	MR_r3 = MR_tempr1;
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(make__util__build_with_module_options_8_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(make__program_target_module17)
	MR_init_entry1(make__program_target__make_misc_target_builder_7_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(make__program_target__make_misc_target_builder_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r3;
	MR_np_tailcall_ent(f_109_97_107_101_95_95_112_114_111_103_114_97_109_95_116_97_114_103_101_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_107_101_95_109_105_115_99_95_116_97_114_103_101_116_95_98_117_105_108_100_101_114_95_95_91_50_93_95_48_7_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(make__program_target_module18)
	MR_init_entry1(fn__make__program_target__this_file_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__make__program_target__this_file_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("make.program_target.m", 21);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(make__program_target_module19)
	MR_init_entry1(make__program_target__make_linked_target_2_7_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(make__program_target__make_linked_target_2_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r3;
	MR_np_tailcall_ent(f_109_97_107_101_95_95_112_114_111_103_114_97_109_95_116_97_114_103_101_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_107_101_95_108_105_110_107_101_100_95_116_97_114_103_101_116_95_50_95_95_91_50_93_95_48_7_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(make__module_dep_file__get_module_dependencies_6_0);
MR_decl_entry(__Unify___mdbcomp__prim_data__sym_name_0_0);

MR_BEGIN_MODULE(make__program_target_module20)
	MR_init_entry1(make__program_target__get_target_modules_2_7_0);
	MR_init_label4(make__program_target__get_target_modules_2_7_0,2,6,3,4)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(make__program_target__get_target_modules_2_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_r2 = MR_r3;
	MR_np_call_localret_ent(make__module_dep_file__get_module_dependencies_6_0,
		make__program_target__get_target_modules_2_7_0_i2);
MR_def_label(make__program_target__get_target_modules_2_7_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(make__program_target__get_target_modules_2_7_0_i4);
	}
	MR_sv(3) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_ctfield(0, MR_ctfield(1, MR_tempr1, 0), 1);
	}
	MR_np_call_localret_ent(__Unify___mdbcomp__prim_data__sym_name_0_0,
		make__program_target__get_target_modules_2_7_0_i6);
MR_def_label(make__program_target__get_target_modules_2_7_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(make__program_target__get_target_modules_2_7_0_i3);
	}
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = MR_sv(1);
	MR_tfield(1, MR_r1, 1) = MR_sv(2);
	MR_r2 = MR_sv(3);
	MR_decr_sp_and_return(4);
MR_def_label(make__program_target__get_target_modules_2_7_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(3);
MR_def_label(make__program_target__get_target_modules_2_7_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_decr_sp_and_return(4);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(libs__compiler_util__unexpected_2_0);
extern const MR_TypeCtorInfo_Struct mercury_data_libs__globals__type_ctor_info_foreign_language_0;
MR_decl_entry(set__member_2_0);

MR_BEGIN_MODULE(make__program_target_module21)
	MR_init_entry1(make__program_target__get_foreign_object_targets_7_0);
	MR_init_label8(make__program_target__get_foreign_object_targets_7_0,2,3,6,5,4,12,14,9)
	MR_init_label7(make__program_target__get_foreign_object_targets_7_0,19,16,22,27,28,29,30)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(make__program_target__get_foreign_object_targets_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_np_call_localret_ent(libs__globals__io_get_target_3_0,
		make__program_target__get_foreign_object_targets_7_0_i2);
MR_def_label(make__program_target__get_foreign_object_targets_7_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(make__module_dep_file__get_module_dependencies_6_0,
		make__program_target__get_foreign_object_targets_7_0_i3);
MR_def_label(make__program_target__get_foreign_object_targets_7_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(make__program_target__get_foreign_object_targets_7_0_i5);
	}
	MR_sv(5) = MR_r2;
	MR_np_call_localret_ent(fn__make__program_target__this_file_0_0,
		make__program_target__get_foreign_object_targets_7_0_i6);
MR_def_label(make__program_target__get_foreign_object_targets_7_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("unknown imports", 15);
	MR_np_call_localret_ent(libs__compiler_util__unexpected_2_0,
		make__program_target__get_foreign_object_targets_7_0_i4);
MR_def_label(make__program_target__get_foreign_object_targets_7_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_ctfield(1, MR_r1, 0);
	MR_sv(5) = MR_r2;
MR_def_label(make__program_target__get_foreign_object_targets_7_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(3),3)) {
		MR_GOTO_LAB(make__program_target__get_foreign_object_targets_7_0_i9);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_sv(4);
	MR_tempr1 = MR_ctfield(0, MR_tempr2, 11);
	if (MR_PTAG_TESTR(MR_tempr1,1)) {
		MR_GOTO_LAB(make__program_target__get_foreign_object_targets_7_0_i9);
	}
	MR_sv(6) = MR_ctfield(0, MR_tempr2, 10);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(libs__globals, foreign_language);
	MR_r2 = (MR_Integer) 0;
	MR_r3 = MR_ctfield(1, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(set__member_2_0,
		make__program_target__get_foreign_object_targets_7_0_i12);
MR_def_label(make__program_target__get_foreign_object_targets_7_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(make__program_target__get_foreign_object_targets_7_0_i9);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6, MR_tempr7;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 2;
	MR_tempr6 = MR_sv(1);
	MR_tfield(3, MR_tempr1, 1) = MR_tempr6;
	MR_tfield(3, MR_tempr1, 2) = (MR_Integer) 0;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tempr7 = MR_sv(2);
	MR_tfield(0, MR_tempr2, 0) = MR_tempr7;
	MR_tfield(0, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr3, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr3, 0) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr4, 0) = MR_tempr3;
	MR_tfield(1, MR_tempr4, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr5, 0, (MR_Integer) 5);
	MR_r3 = MR_tempr5;
	MR_tfield(0, MR_tempr5, 0) = (MR_Word) MR_COMMON(8,2);
	MR_tfield(0, MR_tempr5, 1) = (MR_Word) MR_ENTRY_AP(fn__make__program_target__IntroducedFrom__func__get_foreign_object_targets__284__1_3_0);
	MR_tfield(0, MR_tempr5, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr5, 3) = MR_tempr6;
	MR_tfield(0, MR_tempr5, 4) = MR_tempr7;
	MR_sv(1) = MR_tempr4;
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(make__dependencies, dependency_file);
	MR_r4 = MR_sv(6);
	}
	MR_np_call_localret_ent(fn__list__map_2_0,
		make__program_target__get_foreign_object_targets_7_0_i14);
MR_def_label(make__program_target__get_foreign_object_targets_7_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(make__dependencies, dependency_file);
	MR_r3 = MR_sv(1);
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		make__program_target__get_foreign_object_targets_7_0_i29);
MR_def_label(make__program_target__get_foreign_object_targets_7_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(3),1)) {
		MR_GOTO_LAB(make__program_target__get_foreign_object_targets_7_0_i16);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_ctfield(0, MR_sv(4), 11);
	MR_r3 = MR_tempr1;
	if (MR_PTAG_TESTR(MR_tempr1,1)) {
		MR_GOTO_LAB(make__program_target__get_foreign_object_targets_7_0_i16);
	}
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 4);
	MR_sv(1) = MR_tempr2;
	MR_tfield(0, MR_tempr2, 0) = (MR_Word) MR_COMMON(4,1);
	MR_tfield(0, MR_tempr2, 1) = (MR_Word) MR_ENTRY_AP(fn__make__program_target__IntroducedFrom__func__get_foreign_object_targets__270__1_2_0);
	MR_tfield(0, MR_tempr2, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr2, 3) = MR_sv(2);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(libs__globals, foreign_language);
	MR_r2 = MR_ctfield(1, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(fn__set__to_sorted_list_1_0,
		make__program_target__get_foreign_object_targets_7_0_i19);
MR_def_label(make__program_target__get_foreign_object_targets_7_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(libs__globals, foreign_language);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(make__dependencies, dependency_file);
	MR_r3 = MR_sv(1);
	MR_np_call_localret_ent(fn__list__map_2_0,
		make__program_target__get_foreign_object_targets_7_0_i29);
MR_def_label(make__program_target__get_foreign_object_targets_7_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_sv(3),
		MR_LABEL_AP(make__program_target__get_foreign_object_targets_7_0_i22) MR_AND
		MR_LABEL_AP(make__program_target__get_foreign_object_targets_7_0_i30) MR_AND
		MR_LABEL_AP(make__program_target__get_foreign_object_targets_7_0_i30) MR_AND
		MR_LABEL_AP(make__program_target__get_foreign_object_targets_7_0_i27) MR_AND
		MR_LABEL_AP(make__program_target__get_foreign_object_targets_7_0_i30));
MR_def_label(make__program_target__get_foreign_object_targets_7_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(8,3);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(fn__make__program_target__IntroducedFrom__func__get_foreign_object_targets__284__2_3_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(2);
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(make__dependencies, dependency_file);
	MR_r4 = MR_ctfield(0, MR_sv(4), 10);
	}
	MR_np_call_localret_ent(fn__list__map_2_0,
		make__program_target__get_foreign_object_targets_7_0_i28);
MR_def_label(make__program_target__get_foreign_object_targets_7_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(8,4);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(fn__make__program_target__IntroducedFrom__func__get_foreign_object_targets__284__1_3_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(2);
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(make__dependencies, dependency_file);
	MR_r4 = MR_ctfield(0, MR_sv(4), 10);
	}
	MR_np_call_localret_ent(fn__list__map_2_0,
		make__program_target__get_foreign_object_targets_7_0_i28);
MR_def_label(make__program_target__get_foreign_object_targets_7_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(make__dependencies, dependency_file);
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		make__program_target__get_foreign_object_targets_7_0_i29);
MR_def_label(make__program_target__get_foreign_object_targets_7_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(5);
	MR_decr_sp_and_return(7);
MR_def_label(make__program_target__get_foreign_object_targets_7_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = MR_sv(5);
	MR_decr_sp_and_return(7);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(backend_libs__compile_target_code__make_init_obj_file_6_0);
MR_decl_entry(fn__map__delete_2_0);
MR_decl_entry(fn__dir__this_directory_0_0);
MR_decl_entry(make__util__get_file_timestamp_7_0);
MR_decl_entry(make__dependencies__check_dependency_timestamps_9_0);
MR_decl_entry(make__util__maybe_warn_up_to_date_target_5_0);
MR_decl_entry(make__util__maybe_symlink_or_copy_linked_target_message_3_0);
MR_decl_entry(backend_libs__compile_target_code__post_link_make_symlink_or_copy_6_0);
MR_decl_entry(make__util__maybe_make_linked_target_message_3_0);
MR_decl_entry(fn__list__condense_1_0);
MR_decl_entry(backend_libs__compile_target_code__maybe_pic_object_file_extension_4_0);
MR_decl_entry(backend_libs__compile_target_code__link_7_0);
MR_decl_entry(libs__process_util__call_in_forked_process_4_0);
MR_decl_entry(fn__set__delete_2_0);
MR_decl_entry(parse_tree__modules__create_java_shell_script_4_0);
MR_decl_entry(libs__compiler_util__sorry_2_0);
MR_decl_entry(make__util__file_error_3_0);

MR_BEGIN_MODULE(make__program_target_module22)
	MR_init_entry1(make__program_target__build_linked_target_2_16_0);
	MR_init_label8(make__program_target__build_linked_target_2_16_0,2,3,4,8,7,10,12,13)
	MR_init_label8(make__program_target__build_linked_target_2_16_0,5,14,15,16,17,19,21,22)
	MR_init_label8(make__program_target__build_linked_target_2_16_0,26,27,28,32,31,36,39,38)
	MR_init_label8(make__program_target__build_linked_target_2_16_0,40,41,35,43,44,45,46,47)
	MR_init_label8(make__program_target__build_linked_target_2_16_0,48,49,50,51,53,55,56,57)
	MR_init_label8(make__program_target__build_linked_target_2_16_0,58,59,60,61,52,63,66,65)
	MR_init_label5(make__program_target__build_linked_target_2_16_0,67,42,29,69,71)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(make__program_target__build_linked_target_2_16_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(17);
	MR_sv(17) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_sv(5) = MR_r5;
	MR_sv(6) = MR_r6;
	MR_sv(7) = MR_r7;
	MR_sv(8) = MR_r8;
	MR_sv(9) = MR_r9;
	MR_sv(10) = MR_r10;
	MR_sv(11) = MR_r11;
	MR_sv(14) = MR_r12;
	MR_r1 = (MR_Integer) 429;
	MR_np_call_localret_ent(libs__globals__io_lookup_accumulating_option_4_0,
		make__program_target__build_linked_target_2_16_0_i2);
MR_def_label(make__program_target__build_linked_target_2_16_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(12) = MR_r1;
	MR_r1 = (MR_Integer) 429;
	MR_r2 = (MR_Word) MR_TAG_COMMON(3,15,0);
	MR_np_call_localret_ent(libs__globals__io_set_option_4_0,
		make__program_target__build_linked_target_2_16_0_i3);
MR_def_label(make__program_target__build_linked_target_2_16_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__prim_data, sym_name);
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(fn__set__to_sorted_list_1_0,
		make__program_target__build_linked_target_2_16_0_i4);
MR_def_label(make__program_target__build_linked_target_2_16_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(2),0)) {
		MR_GOTO_LAB(make__program_target__build_linked_target_2_16_0_i5);
	}
	if (MR_INT_NE(MR_sv(7),0)) {
		MR_GOTO_LAB(make__program_target__build_linked_target_2_16_0_i8);
	}
	MR_r2 = MR_sv(1);
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(11);
	MR_GOTO_LAB(make__program_target__build_linked_target_2_16_0_i7);
MR_def_label(make__program_target__build_linked_target_2_16_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(7),3)) {
		MR_GOTO_LAB(make__program_target__build_linked_target_2_16_0_i5);
	}
	MR_r2 = MR_sv(1);
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(11);
MR_def_label(make__program_target__build_linked_target_2_16_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_sv(11) = MR_r1;
	MR_sv(5) = MR_r3;
	MR_np_call_localret_ent(backend_libs__compile_target_code__make_init_obj_file_6_0,
		make__program_target__build_linked_target_2_16_0_i10);
MR_def_label(make__program_target__build_linked_target_2_16_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(make__program_target__build_linked_target_2_16_0_i12);
	}
	MR_r3 = MR_sv(12);
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_sv(13) = (MR_Integer) 2;
	MR_sv(15) = MR_sv(14);
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_GOTO_LAB(make__program_target__build_linked_target_2_16_0_i14);
MR_def_label(make__program_target__build_linked_target_2_16_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(13) = MR_ctfield(1, MR_r1, 0);
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,7);
	MR_r3 = MR_ctfield(0, MR_sv(14), 1);
	MR_r4 = MR_sv(13);
	MR_np_call_localret_ent(fn__map__delete_2_0,
		make__program_target__build_linked_target_2_16_0_i13);
MR_def_label(make__program_target__build_linked_target_2_16_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 13);
	MR_sv(15) = MR_tempr1;
	MR_tempr3 = MR_sv(14);
	MR_tfield(0, MR_tempr1, 0) = MR_ctfield(0, MR_tempr3, 0);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_tfield(0, MR_tempr1, 2) = MR_ctfield(0, MR_tempr3, 2);
	MR_tfield(0, MR_tempr1, 3) = MR_ctfield(0, MR_tempr3, 3);
	MR_tfield(0, MR_tempr1, 4) = MR_ctfield(0, MR_tempr3, 4);
	MR_tfield(0, MR_tempr1, 5) = MR_ctfield(0, MR_tempr3, 5);
	MR_tfield(0, MR_tempr1, 6) = MR_ctfield(0, MR_tempr3, 6);
	MR_tfield(0, MR_tempr1, 7) = MR_ctfield(0, MR_tempr3, 7);
	MR_tfield(0, MR_tempr1, 8) = MR_ctfield(0, MR_tempr3, 8);
	MR_tfield(0, MR_tempr1, 9) = MR_ctfield(0, MR_tempr3, 9);
	MR_tfield(0, MR_tempr1, 10) = MR_ctfield(0, MR_tempr3, 10);
	MR_tfield(0, MR_tempr1, 11) = MR_ctfield(0, MR_tempr3, 11);
	MR_tfield(0, MR_tempr1, 12) = MR_ctfield(0, MR_tempr3, 12);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_sv(13);
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r3 = MR_sv(12);
	MR_sv(13) = MR_sv(10);
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_GOTO_LAB(make__program_target__build_linked_target_2_16_0_i14);
	}
MR_def_label(make__program_target__build_linked_target_2_16_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(12);
	MR_sv(5) = MR_r1;
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_sv(13) = MR_sv(10);
	MR_sv(15) = MR_sv(14);
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
MR_def_label(make__program_target__build_linked_target_2_16_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(12) = MR_r3;
	MR_sv(10) = MR_r2;
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		make__program_target__build_linked_target_2_16_0_i15);
MR_def_label(make__program_target__build_linked_target_2_16_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(14) = MR_r1;
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(make__dependencies, dependency_file);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,3,4);
	MR_r4 = MR_sv(14);
	MR_np_call_localret_ent(fn__list__map_2_0,
		make__program_target__build_linked_target_2_16_0_i16);
MR_def_label(make__program_target__build_linked_target_2_16_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r6 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(make__dependencies, dependency_file);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(make, dependency_status);
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(make, make_info);
	MR_r4 = (MR_Word) MR_IO_CTOR_ADDR;
	MR_r5 = (MR_Word) MR_TAG_COMMON(0,3,5);
	MR_r7 = MR_sv(15);
	MR_np_call_localret_ent(list__map_foldl2_7_0,
		make__program_target__build_linked_target_2_16_0_i17);
MR_def_label(make__program_target__build_linked_target_2_16_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(16) = MR_r2;
	MR_r3 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(make, dependency_status);
	MR_r2 = (MR_Integer) 3;
	MR_np_call_localret_ent(list__member_2_0,
		make__program_target__build_linked_target_2_16_0_i19);
MR_def_label(make__program_target__build_linked_target_2_16_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(make__program_target__build_linked_target_2_16_0_i21);
	}
	MR_sv(13) = (MR_Integer) 2;
MR_def_label(make__program_target__build_linked_target_2_16_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_EQ(MR_sv(13),2)) {
		MR_GOTO_LAB(make__program_target__build_linked_target_2_16_0_i22);
	}
	MR_sv(15) = (MR_Integer) 1;
	MR_np_call_localret_ent(fn__dir__this_directory_0_0,
		make__program_target__build_linked_target_2_16_0_i26);
MR_def_label(make__program_target__build_linked_target_2_16_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(15) = (MR_Integer) 0;
	MR_np_call_localret_ent(fn__dir__this_directory_0_0,
		make__program_target__build_linked_target_2_16_0_i26);
MR_def_label(make__program_target__build_linked_target_2_16_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 4);
	MR_r5 = MR_tempr2;
	MR_tfield(0, MR_tempr2, 0) = (MR_Word) MR_COMMON(2,5);
	MR_tfield(0, MR_tempr2, 1) = (MR_Word) MR_ENTRY_AP(make__util__get_file_timestamp_7_0);
	MR_tfield(0, MR_tempr2, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr2, 3) = MR_tempr1;
	MR_r7 = MR_sv(16);
	MR_sv(16) = (MR_Word) MR_TAG_COMMON(0,1,7);
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = MR_sv(16);
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(make, make_info);
	MR_r4 = (MR_Word) MR_IO_CTOR_ADDR;
	MR_r6 = MR_sv(14);
	}
	MR_np_call_localret_ent(list__map_foldl2_7_0,
		make__program_target__build_linked_target_2_16_0_i27);
MR_def_label(make__program_target__build_linked_target_2_16_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(4);
	MR_sv(4) = MR_r2;
	MR_r7 = MR_r1;
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = MR_sv(3);
	MR_r4 = MR_sv(15);
	MR_r5 = MR_sv(14);
	MR_r6 = (MR_Word) MR_TAG_COMMON(0,3,6);
	MR_np_call_localret_ent(make__dependencies__check_dependency_timestamps_9_0,
		make__program_target__build_linked_target_2_16_0_i28);
MR_def_label(make__program_target__build_linked_target_2_16_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(9),1)) {
		MR_GOTO_LAB(make__program_target__build_linked_target_2_16_0_i29);
	}
	if (MR_INT_NE(MR_sv(13),0)) {
		MR_GOTO_LAB(make__program_target__build_linked_target_2_16_0_i32);
	}
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_GOTO_LAB(make__program_target__build_linked_target_2_16_0_i31);
MR_def_label(make__program_target__build_linked_target_2_16_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_r3 = MR_sv(13);
MR_def_label(make__program_target__build_linked_target_2_16_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r3,0)) {
		MR_GOTO_LAB(make__program_target__build_linked_target_2_16_0_i35);
	}
	MR_r1 = (MR_Integer) 511;
	MR_np_call_localret_ent(libs__globals__io_lookup_bool_option_4_0,
		make__program_target__build_linked_target_2_16_0_i36);
MR_def_label(make__program_target__build_linked_target_2_16_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(make__program_target__build_linked_target_2_16_0_i38);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(2);
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r1, 0) = MR_sv(1);
	MR_tfield(0, MR_r1, 1) = MR_tempr1;
	MR_r2 = MR_sv(4);
	}
	MR_np_call_localret_ent(make__util__maybe_warn_up_to_date_target_5_0,
		make__program_target__build_linked_target_2_16_0_i39);
MR_def_label(make__program_target__build_linked_target_2_16_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_r3 = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 3;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(12);
	MR_sv(1) = (MR_Integer) 1;
	MR_sv(2) = MR_r1;
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r1 = (MR_Integer) 429;
	}
	MR_np_call_localret_ent(libs__globals__io_set_option_4_0,
		make__program_target__build_linked_target_2_16_0_i71);
MR_def_label(make__program_target__build_linked_target_2_16_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(2);
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r1, 0) = MR_sv(1);
	MR_tfield(0, MR_r1, 1) = MR_tempr1;
	}
	MR_np_call_localret_ent(make__util__maybe_symlink_or_copy_linked_target_message_3_0,
		make__program_target__build_linked_target_2_16_0_i40);
MR_def_label(make__program_target__build_linked_target_2_16_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(11);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(1);
	MR_np_call_localret_ent(backend_libs__compile_target_code__post_link_make_symlink_or_copy_6_0,
		make__program_target__build_linked_target_2_16_0_i41);
MR_def_label(make__program_target__build_linked_target_2_16_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 3;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(12);
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_sv(4);
	MR_r2 = MR_tempr1;
	MR_r1 = (MR_Integer) 429;
	}
	MR_np_call_localret_ent(libs__globals__io_set_option_4_0,
		make__program_target__build_linked_target_2_16_0_i71);
MR_def_label(make__program_target__build_linked_target_2_16_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r3,1)) {
		MR_GOTO_LAB(make__program_target__build_linked_target_2_16_0_i42);
	}
	MR_sv(3) = MR_r1;
	MR_np_call_localret_ent(make__util__maybe_make_linked_target_message_3_0,
		make__program_target__build_linked_target_2_16_0_i43);
MR_def_label(make__program_target__build_linked_target_2_16_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r5 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(2,6);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(make__program_target__IntroducedFrom__pred__build_linked_target_2__423__1_7_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(8);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__prim_data, sym_name);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,10);
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(make, make_info);
	MR_r4 = (MR_Word) MR_IO_CTOR_ADDR;
	MR_r6 = MR_sv(5);
	MR_r7 = MR_sv(4);
	}
	MR_np_call_localret_ent(list__map_foldl2_7_0,
		make__program_target__build_linked_target_2_16_0_i44);
MR_def_label(make__program_target__build_linked_target_2_16_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r2;
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(make__module_target, foreign_code_file);
	MR_np_call_localret_ent(fn__list__condense_1_0,
		make__program_target__build_linked_target_2_16_0_i45);
MR_def_label(make__program_target__build_linked_target_2_16_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(make__module_target, foreign_code_file);
	MR_r2 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,3,7);
	MR_np_call_localret_ent(fn__list__map_2_0,
		make__program_target__build_linked_target_2_16_0_i46);
MR_def_label(make__program_target__build_linked_target_2_16_0,46)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(8);
	MR_np_call_localret_ent(backend_libs__compile_target_code__maybe_pic_object_file_extension_4_0,
		make__program_target__build_linked_target_2_16_0_i47);
MR_def_label(make__program_target__build_linked_target_2_16_0,47)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r4 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(9,4);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(make__program_target__IntroducedFrom__pred__build_linked_target_2__443__1_5_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__prim_data, sym_name);
	MR_r2 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r3 = (MR_Word) MR_IO_CTOR_ADDR;
	MR_r5 = MR_sv(6);
	}
	MR_np_call_localret_ent(list__map_foldl_5_0,
		make__program_target__build_linked_target_2_16_0_i48);
MR_def_label(make__program_target__build_linked_target_2_16_0,48)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r3 = MR_sv(12);
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		make__program_target__build_linked_target_2_16_0_i49);
MR_def_label(make__program_target__build_linked_target_2_16_0,49)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		make__program_target__build_linked_target_2_16_0_i50);
MR_def_label(make__program_target__build_linked_target_2_16_0,50)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = MR_sv(10);
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		make__program_target__build_linked_target_2_16_0_i51);
MR_def_label(make__program_target__build_linked_target_2_16_0,51)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_sv(7),
		MR_LABEL_AP(make__program_target__build_linked_target_2_16_0_i53) MR_AND
		MR_LABEL_AP(make__program_target__build_linked_target_2_16_0_i55) MR_AND
		MR_LABEL_AP(make__program_target__build_linked_target_2_16_0_i56) MR_AND
		MR_LABEL_AP(make__program_target__build_linked_target_2_16_0_i58) MR_AND
		MR_LABEL_AP(make__program_target__build_linked_target_2_16_0_i60));
MR_def_label(make__program_target__build_linked_target_2_16_0,53)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 7);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(2,7);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(backend_libs__compile_target_code__link_7_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 4;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(11);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 5) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 6) = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(libs__process_util__call_in_forked_process_4_0,
		make__program_target__build_linked_target_2_16_0_i57);
MR_def_label(make__program_target__build_linked_target_2_16_0,55)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_r3 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(2);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = MR_sv(1);
	MR_tfield(0, MR_tempr2, 1) = MR_tempr1;
	MR_sv(1) = (MR_Integer) 1;
	MR_tempr4 = MR_sv(5);
	MR_r2 = MR_ctfield(0, MR_tempr4, 11);
	MR_r3 = MR_tempr2;
	MR_sv(2) = MR_ctfield(0, MR_tempr4, 10);
	MR_sv(4) = MR_ctfield(0, MR_tempr4, 9);
	MR_tempr3 = MR_tempr4;
	MR_sv(5) = MR_ctfield(0, MR_tempr3, 8);
	MR_sv(6) = MR_ctfield(0, MR_tempr3, 7);
	MR_sv(7) = MR_ctfield(0, MR_tempr3, 6);
	MR_sv(8) = MR_ctfield(0, MR_tempr3, 5);
	MR_sv(9) = MR_ctfield(0, MR_tempr3, 4);
	MR_sv(10) = MR_ctfield(0, MR_tempr3, 3);
	MR_sv(11) = MR_ctfield(0, MR_tempr3, 2);
	MR_sv(13) = MR_ctfield(0, MR_tempr3, 1);
	MR_sv(14) = MR_ctfield(0, MR_tempr3, 0);
	MR_sv(15) = MR_ctfield(0, MR_tempr3, 12);
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,2);
	}
	MR_np_call_localret_ent(fn__set__delete_2_0,
		make__program_target__build_linked_target_2_16_0_i63);
MR_def_label(make__program_target__build_linked_target_2_16_0,56)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(parse_tree__modules__create_java_shell_script_4_0,
		make__program_target__build_linked_target_2_16_0_i57);
MR_def_label(make__program_target__build_linked_target_2_16_0,57)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_r3 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(2);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = MR_sv(1);
	MR_tfield(0, MR_tempr2, 1) = MR_tempr1;
	MR_sv(1) = MR_r1;
	MR_tempr4 = MR_sv(5);
	MR_r2 = MR_ctfield(0, MR_tempr4, 11);
	MR_r3 = MR_tempr2;
	MR_sv(2) = MR_ctfield(0, MR_tempr4, 10);
	MR_sv(4) = MR_ctfield(0, MR_tempr4, 9);
	MR_tempr3 = MR_tempr4;
	MR_sv(5) = MR_ctfield(0, MR_tempr3, 8);
	MR_sv(6) = MR_ctfield(0, MR_tempr3, 7);
	MR_sv(7) = MR_ctfield(0, MR_tempr3, 6);
	MR_sv(8) = MR_ctfield(0, MR_tempr3, 5);
	MR_sv(9) = MR_ctfield(0, MR_tempr3, 4);
	MR_sv(10) = MR_ctfield(0, MR_tempr3, 3);
	MR_sv(11) = MR_ctfield(0, MR_tempr3, 2);
	MR_sv(13) = MR_ctfield(0, MR_tempr3, 1);
	MR_sv(14) = MR_ctfield(0, MR_tempr3, 0);
	MR_sv(15) = MR_ctfield(0, MR_tempr3, 12);
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,2);
	}
	MR_np_call_localret_ent(fn__set__delete_2_0,
		make__program_target__build_linked_target_2_16_0_i63);
MR_def_label(make__program_target__build_linked_target_2_16_0,58)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 7);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(2,8);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(backend_libs__compile_target_code__link_7_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 4;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(11);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 5) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 6) = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(libs__process_util__call_in_forked_process_4_0,
		make__program_target__build_linked_target_2_16_0_i59);
MR_def_label(make__program_target__build_linked_target_2_16_0,59)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(2);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_r3 = MR_tempr2;
	MR_tfield(0, MR_tempr2, 0) = MR_sv(1);
	MR_tfield(0, MR_tempr2, 1) = MR_tempr1;
	MR_sv(1) = MR_r1;
	MR_tempr3 = MR_sv(5);
	MR_r2 = MR_ctfield(0, MR_tempr3, 11);
	MR_sv(2) = MR_ctfield(0, MR_tempr3, 10);
	MR_sv(4) = MR_ctfield(0, MR_tempr3, 9);
	MR_tempr1 = MR_tempr3;
	MR_sv(5) = MR_ctfield(0, MR_tempr1, 8);
	MR_sv(6) = MR_ctfield(0, MR_tempr1, 7);
	MR_sv(7) = MR_ctfield(0, MR_tempr1, 6);
	MR_sv(8) = MR_ctfield(0, MR_tempr1, 5);
	MR_sv(9) = MR_ctfield(0, MR_tempr1, 4);
	MR_sv(10) = MR_ctfield(0, MR_tempr1, 3);
	MR_sv(11) = MR_ctfield(0, MR_tempr1, 2);
	MR_sv(13) = MR_ctfield(0, MR_tempr1, 1);
	MR_sv(14) = MR_ctfield(0, MR_tempr1, 0);
	MR_sv(15) = MR_ctfield(0, MR_tempr1, 12);
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,2);
	}
	MR_np_call_localret_ent(fn__set__delete_2_0,
		make__program_target__build_linked_target_2_16_0_i63);
MR_def_label(make__program_target__build_linked_target_2_16_0,60)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__make__program_target__this_file_0_0,
		make__program_target__build_linked_target_2_16_0_i61);
MR_def_label(make__program_target__build_linked_target_2_16_0,61)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("mmc --make and target x86_64", 28);
	MR_np_call_localret_ent(libs__compiler_util__sorry_2_0,
		make__program_target__build_linked_target_2_16_0_i52);
MR_def_label(make__program_target__build_linked_target_2_16_0,52)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__set__delete_2_0,
		make__program_target__build_linked_target_2_16_0_i63);
MR_def_label(make__program_target__build_linked_target_2_16_0,63)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 13);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_sv(14);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(13);
	MR_tfield(0, MR_tempr1, 2) = MR_sv(11);
	MR_tfield(0, MR_tempr1, 3) = MR_sv(10);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(9);
	MR_tfield(0, MR_tempr1, 5) = MR_sv(8);
	MR_tfield(0, MR_tempr1, 6) = MR_sv(7);
	MR_tfield(0, MR_tempr1, 7) = MR_sv(6);
	MR_tfield(0, MR_tempr1, 8) = MR_sv(5);
	MR_tfield(0, MR_tempr1, 9) = MR_sv(4);
	MR_tfield(0, MR_tempr1, 10) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 11) = MR_r1;
	MR_tfield(0, MR_tempr1, 12) = MR_sv(15);
	if (MR_INT_NE(MR_sv(1),0)) {
		MR_GOTO_LAB(make__program_target__build_linked_target_2_16_0_i65);
	}
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_sv(3);
	}
	MR_np_call_localret_ent(make__util__file_error_3_0,
		make__program_target__build_linked_target_2_16_0_i66);
MR_def_label(make__program_target__build_linked_target_2_16_0,66)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_r2 = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 3;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(12);
	MR_r1 = (MR_Integer) 429;
	}
	MR_np_call_localret_ent(libs__globals__io_set_option_4_0,
		make__program_target__build_linked_target_2_16_0_i71);
MR_def_label(make__program_target__build_linked_target_2_16_0,65)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r4 = MR_sv(3);
	MR_sv(3) = MR_ctfield(0, MR_r3, 10);
	MR_sv(13) = MR_sv(14);
	MR_sv(14) = MR_sv(15);
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = MR_sv(16);
	MR_r3 = MR_ctfield(0, MR_r3, 1);
	MR_np_call_localret_ent(fn__map__delete_2_0,
		make__program_target__build_linked_target_2_16_0_i67);
MR_def_label(make__program_target__build_linked_target_2_16_0,67)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 13);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_sv(13);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_tfield(0, MR_tempr1, 2) = MR_sv(11);
	MR_tfield(0, MR_tempr1, 3) = MR_sv(10);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(9);
	MR_tfield(0, MR_tempr1, 5) = MR_sv(8);
	MR_tfield(0, MR_tempr1, 6) = MR_sv(7);
	MR_tfield(0, MR_tempr1, 7) = MR_sv(6);
	MR_tfield(0, MR_tempr1, 8) = MR_sv(5);
	MR_tfield(0, MR_tempr1, 9) = MR_sv(4);
	MR_tfield(0, MR_tempr1, 10) = MR_sv(3);
	MR_tfield(0, MR_tempr1, 11) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 12) = MR_sv(14);
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 2);
	MR_r2 = MR_tempr2;
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 3;
	MR_tfield(3, MR_tempr2, 1) = MR_sv(12);
	MR_sv(2) = MR_tempr1;
	MR_r1 = (MR_Integer) 429;
	}
	MR_np_call_localret_ent(libs__globals__io_set_option_4_0,
		make__program_target__build_linked_target_2_16_0_i71);
MR_def_label(make__program_target__build_linked_target_2_16_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(make__util__file_error_3_0,
		make__program_target__build_linked_target_2_16_0_i69);
MR_def_label(make__program_target__build_linked_target_2_16_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(make__util__file_error_3_0,
		make__program_target__build_linked_target_2_16_0_i69);
MR_def_label(make__program_target__build_linked_target_2_16_0,69)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_r2 = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 3;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(12);
	MR_sv(1) = (MR_Integer) 0;
	MR_sv(2) = MR_sv(4);
	MR_r1 = (MR_Integer) 429;
	}
	MR_np_call_localret_ent(libs__globals__io_set_option_4_0,
		make__program_target__build_linked_target_2_16_0_i71);
MR_def_label(make__program_target__build_linked_target_2_16_0,71)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_decr_sp_and_return(17);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(libs__globals__io_lookup_maybe_string_option_4_0);
MR_decl_entry(backend_libs__compile_target_code__make_all_module_command_6_0);

MR_BEGIN_MODULE(make__program_target_module23)
	MR_init_entry1(make__program_target__build_linked_target_16_0);
	MR_init_label6(make__program_target__build_linked_target_16_0,2,14,4,6,7,8)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(make__program_target__build_linked_target_16_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(14);
	MR_sv(14) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_sv(5) = MR_r5;
	MR_sv(6) = MR_r6;
	MR_sv(7) = MR_r7;
	MR_sv(8) = MR_r8;
	MR_sv(9) = MR_r9;
	MR_sv(10) = MR_r10;
	MR_sv(11) = MR_r11;
	MR_sv(13) = MR_r12;
	MR_r1 = (MR_Integer) 498;
	MR_np_call_localret_ent(libs__globals__io_lookup_maybe_string_option_4_0,
		make__program_target__build_linked_target_16_0_i2);
MR_def_label(make__program_target__build_linked_target_16_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(make__program_target__build_linked_target_16_0_i4);
	}
MR_def_label(make__program_target__build_linked_target_16_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(4);
	MR_r5 = MR_sv(5);
	MR_r6 = MR_sv(6);
	MR_r7 = MR_sv(7);
	MR_r8 = MR_sv(8);
	MR_r9 = MR_sv(9);
	MR_r10 = MR_sv(10);
	MR_r11 = MR_sv(11);
	MR_r12 = MR_sv(13);
	MR_succip_word = MR_sv(14);
	MR_decr_sp(14);
	MR_np_tailcall_ent(make__program_target__build_linked_target_2_16_0);
MR_def_label(make__program_target__build_linked_target_16_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(12) = MR_ctfield(1, MR_r1, 0);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__prim_data, sym_name);
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(fn__set__to_sorted_list_1_0,
		make__program_target__build_linked_target_16_0_i6);
MR_def_label(make__program_target__build_linked_target_16_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(12);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(backend_libs__compile_target_code__make_all_module_command_6_0,
		make__program_target__build_linked_target_16_0_i7);
MR_def_label(make__program_target__build_linked_target_16_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(11);
	MR_r2 = (MR_Integer) 0;
	MR_np_call_localret_ent(hlds__passes_aux__invoke_system_command_6_0,
		make__program_target__build_linked_target_16_0_i8);
MR_def_label(make__program_target__build_linked_target_16_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(make__program_target__build_linked_target_16_0_i14);
	}
	MR_r1 = (MR_Integer) 0;
	MR_r2 = MR_sv(13);
	MR_decr_sp_and_return(14);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(make__program_target_module24)
	MR_init_entry1(make__program_target__linked_target_cleanup_8_0);
	MR_init_label8(make__program_target__linked_target_cleanup_8_0,2,6,5,8,9,10,11,12)
	MR_init_label2(make__program_target__linked_target_cleanup_8_0,13,15)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(make__program_target__linked_target_cleanup_8_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r4;
	MR_r1 = MR_r3;
	MR_r2 = MR_r5;
	MR_np_call_localret_ent(make__util__make_remove_file_5_0,
		make__program_target__linked_target_cleanup_8_0_i2);
MR_def_label(make__program_target__linked_target_cleanup_8_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(2),0)) {
		MR_GOTO_LAB(make__program_target__linked_target_cleanup_8_0_i15);
	}
	if (MR_INT_NE(MR_sv(3),0)) {
		MR_GOTO_LAB(make__program_target__linked_target_cleanup_8_0_i6);
	}
	MR_sv(2) = MR_r1;
	MR_GOTO_LAB(make__program_target__linked_target_cleanup_8_0_i5);
MR_def_label(make__program_target__linked_target_cleanup_8_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(3),3)) {
		MR_GOTO_LAB(make__program_target__linked_target_cleanup_8_0_i15);
	}
	MR_sv(2) = MR_r1;
MR_def_label(make__program_target__linked_target_cleanup_8_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 400;
	MR_np_call_localret_ent(libs__globals__io_lookup_string_option_4_0,
		make__program_target__linked_target_cleanup_8_0_i8);
MR_def_label(make__program_target__linked_target_cleanup_8_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = (MR_Integer) 401;
	MR_np_call_localret_ent(libs__globals__io_lookup_string_option_4_0,
		make__program_target__linked_target_cleanup_8_0_i9);
MR_def_label(make__program_target__linked_target_cleanup_8_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = (MR_Integer) 402;
	MR_np_call_localret_ent(libs__globals__io_lookup_string_option_4_0,
		make__program_target__linked_target_cleanup_8_0_i10);
MR_def_label(make__program_target__linked_target_cleanup_8_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(6,3);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(make__util__make_remove_file_6_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r2 = MR_sv(3);
	MR_sv(3) = MR_tempr1;
	MR_r1 = (MR_Word) MR_string_const("_init", 5);
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		make__program_target__linked_target_cleanup_8_0_i11);
MR_def_label(make__program_target__linked_target_cleanup_8_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("_init", 5);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		make__program_target__linked_target_cleanup_8_0_i12);
MR_def_label(make__program_target__linked_target_cleanup_8_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("_init", 5);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		make__program_target__linked_target_cleanup_8_0_i13);
MR_def_label(make__program_target__linked_target_cleanup_8_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(4);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_r5 = MR_tempr3;
	MR_tfield(1, MR_tempr3, 0) = (MR_Word) MR_string_const("_init.c", 7);
	MR_tfield(1, MR_tempr3, 1) = MR_tempr1;
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(make, make_info);
	MR_r3 = (MR_Word) MR_IO_CTOR_ADDR;
	MR_r4 = MR_sv(3);
	MR_r6 = MR_sv(2);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(list__foldl2_6_5);
	}
MR_def_label(make__program_target__linked_target_cleanup_8_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(map__lookup_3_0);

MR_BEGIN_MODULE(make__program_target_module25)
	MR_init_entry1(fn__make__program_target__lookup_module_imports_2_0);
	MR_init_label2(fn__make__program_target__lookup_module_imports_2_0,2,4)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__make__program_target__lookup_module_imports_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_r3 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__prim_data, sym_name);
	MR_r4 = MR_r2;
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,11);
	MR_np_call_localret_ent(map__lookup_3_0,
		fn__make__program_target__lookup_module_imports_2_0_i2);
MR_def_label(fn__make__program_target__lookup_module_imports_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(fn__make__program_target__lookup_module_imports_2_0_i4);
	}
	MR_r1 = (MR_Word) MR_string_const("make.program_target.m", 21);
	MR_r2 = (MR_Word) MR_string_const("lookup_module_imports", 21);
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
MR_def_label(fn__make__program_target__lookup_module_imports_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(1, MR_r1, 0);
	MR_decr_sp_and_return(1);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__f_109_97_112_95_95_101_108_101_109_32_58_61_3_0);

MR_BEGIN_MODULE(make__program_target_module26)
	MR_init_entry1(make__program_target__reset_analysis_registry_dependency_status_3_0);
	MR_init_label1(make__program_target__reset_analysis_registry_dependency_status_3_0,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(make__program_target__reset_analysis_registry_dependency_status_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 7);
	MR_tag_alloc_heap(MR_r3, 0, (MR_Integer) 1);
	MR_tfield(0, MR_r3, 0) = MR_tempr1;
	MR_sv(1) = MR_r2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(make__dependencies, dependency_file);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(make, dependency_status);
	MR_r4 = MR_ctfield(0, MR_sv(1), 4);
	MR_r5 = (MR_Integer) 0;
	}
	MR_np_call_localret_ent(fn__f_109_97_112_95_95_101_108_101_109_32_58_61_3_0,
		make__program_target__reset_analysis_registry_dependency_status_3_0_i2);
MR_def_label(make__program_target__reset_analysis_registry_dependency_status_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 13);
	MR_tempr2 = MR_sv(1);
	MR_tfield(0, MR_tempr1, 0) = MR_ctfield(0, MR_tempr2, 0);
	MR_tfield(0, MR_tempr1, 1) = MR_ctfield(0, MR_tempr2, 1);
	MR_tfield(0, MR_tempr1, 2) = MR_ctfield(0, MR_tempr2, 2);
	MR_tfield(0, MR_tempr1, 3) = MR_ctfield(0, MR_tempr2, 3);
	MR_tfield(0, MR_tempr1, 4) = MR_r1;
	MR_tfield(0, MR_tempr1, 5) = MR_ctfield(0, MR_tempr2, 5);
	MR_tfield(0, MR_tempr1, 6) = MR_ctfield(0, MR_tempr2, 6);
	MR_tfield(0, MR_tempr1, 7) = MR_ctfield(0, MR_tempr2, 7);
	MR_tfield(0, MR_tempr1, 8) = MR_ctfield(0, MR_tempr2, 8);
	MR_tfield(0, MR_tempr1, 9) = MR_ctfield(0, MR_tempr2, 9);
	MR_tfield(0, MR_tempr1, 10) = MR_ctfield(0, MR_tempr2, 10);
	MR_tfield(0, MR_tempr1, 11) = MR_ctfield(0, MR_tempr2, 11);
	MR_tfield(0, MR_tempr1, 12) = MR_ctfield(0, MR_tempr2, 12);
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(2);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(make__program_target_module27)
	MR_init_entry1(make__program_target__install_subdir_file_7_0);
	MR_init_label8(make__program_target__install_subdir_file_7_0,2,3,4,7,8,9,10,5)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(make__program_target__install_subdir_file_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_sv(4) = MR_tempr1;
	MR_r1 = (MR_Word) MR_string_const(".", 1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		make__program_target__install_subdir_file_7_0_i2);
MR_def_label(make__program_target__install_subdir_file_7_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r3 = (MR_Integer) 0;
	MR_np_call_localret_ent(parse_tree__modules__module_name_to_file_name_6_0,
		make__program_target__install_subdir_file_7_0_i3);
MR_def_label(make__program_target__install_subdir_file_7_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(make__program_target__install_file_5_0,
		make__program_target__install_subdir_file_7_0_i4);
MR_def_label(make__program_target__install_subdir_file_7_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(1),0)) {
		MR_GOTO_LAB(make__program_target__install_subdir_file_7_0_i5);
	}
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = (MR_Word) MR_string_const("Mercury", 7);
	MR_np_call_localret_ent(fn__f_100_105_114_95_95_47_2_0,
		make__program_target__install_subdir_file_7_0_i7);
MR_def_label(make__program_target__install_subdir_file_7_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = (MR_Word) MR_string_const("s", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		make__program_target__install_subdir_file_7_0_i8);
MR_def_label(make__program_target__install_subdir_file_7_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(fn__f_100_105_114_95_95_47_2_0,
		make__program_target__install_subdir_file_7_0_i9);
MR_def_label(make__program_target__install_subdir_file_7_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(make__program_target__install_file_5_0,
		make__program_target__install_subdir_file_7_0_i10);
MR_def_label(make__program_target__install_subdir_file_7_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(fn__bool__and_2_0);
MR_def_label(make__program_target__install_subdir_file_7_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(make__program_target_module28)
	MR_init_entry1(make__program_target__install_ints_and_headers_7_0);
	MR_init_label8(make__program_target__install_ints_and_headers_7_0,2,4,5,7,9,10,11,12)
	MR_init_label8(make__program_target__install_ints_and_headers_7_0,13,14,15,18,17,20,21,22)
	MR_init_label5(make__program_target__install_ints_and_headers_7_0,23,24,25,16,27)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(make__program_target__install_ints_and_headers_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_r3;
	}
	MR_np_call_localret_ent(make__module_dep_file__get_module_dependencies_6_0,
		make__program_target__install_ints_and_headers_7_0_i2);
MR_def_label(make__program_target__install_ints_and_headers_7_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(make__program_target__install_ints_and_headers_7_0_i4);
	}
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(7);
MR_def_label(make__program_target__install_ints_and_headers_7_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_ctfield(1, MR_r1, 0);
	MR_sv(6) = MR_r2;
	MR_r1 = (MR_Integer) 247;
	MR_np_call_localret_ent(libs__globals__io_lookup_bool_option_4_0,
		make__program_target__install_ints_and_headers_7_0_i5);
MR_def_label(make__program_target__install_ints_and_headers_7_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(make__program_target__install_ints_and_headers_7_0_i7);
	}
	MR_sv(3) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = (MR_Integer) 499;
	MR_np_call_localret_ent(libs__globals__io_lookup_string_option_4_0,
		make__program_target__install_ints_and_headers_7_0_i10);
MR_def_label(make__program_target__install_ints_and_headers_7_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(0, MR_sv(3), 7);
	if (MR_LTAGS_TESTR(MR_tempr1,0,0)) {
		MR_GOTO_LAB(make__program_target__install_ints_and_headers_7_0_i9);
	}
	MR_sv(3) = (MR_Word) MR_TAG_COMMON(1,10,13);
	MR_r1 = (MR_Integer) 499;
	}
	MR_np_call_localret_ent(libs__globals__io_lookup_string_option_4_0,
		make__program_target__install_ints_and_headers_7_0_i10);
MR_def_label(make__program_target__install_ints_and_headers_7_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = (MR_Word) MR_TAG_COMMON(1,10,14);
	MR_r1 = (MR_Integer) 499;
	MR_np_call_localret_ent(libs__globals__io_lookup_string_option_4_0,
		make__program_target__install_ints_and_headers_7_0_i10);
MR_def_label(make__program_target__install_ints_and_headers_7_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("lib", 3);
	MR_np_call_localret_ent(fn__f_100_105_114_95_95_47_2_0,
		make__program_target__install_ints_and_headers_7_0_i11);
MR_def_label(make__program_target__install_ints_and_headers_7_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("mercury", 7);
	MR_np_call_localret_ent(fn__f_100_105_114_95_95_47_2_0,
		make__program_target__install_ints_and_headers_7_0_i12);
MR_def_label(make__program_target__install_ints_and_headers_7_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r2 = (MR_Word) MR_string_const("ints", 4);
	MR_np_call_localret_ent(fn__f_100_105_114_95_95_47_2_0,
		make__program_target__install_ints_and_headers_7_0_i13);
MR_def_label(make__program_target__install_ints_and_headers_7_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 6);
	MR_r4 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(2,9);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(make__program_target__install_subdir_file_7_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 3;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 4) = MR_r1;
	MR_tfield(0, MR_tempr1, 5) = MR_sv(2);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = (MR_Word) MR_string_const("module_dep", 10);
	MR_tfield(1, MR_tempr2, 1) = MR_sv(3);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = (MR_Word) MR_string_const("int3", 4);
	MR_tfield(1, MR_tempr3, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = (MR_Word) MR_string_const("int2", 4);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr3;
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 2);
	MR_r5 = MR_tempr4;
	MR_tfield(1, MR_tempr4, 0) = (MR_Word) MR_string_const("int", 3);
	MR_tfield(1, MR_tempr4, 1) = MR_tempr2;
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = (MR_Word) MR_BOOL_CTOR_ADDR;
	MR_r3 = (MR_Word) MR_IO_CTOR_ADDR;
	}
	MR_np_call_localret_ent(list__map_foldl_5_0,
		make__program_target__install_ints_and_headers_7_0_i14);
MR_def_label(make__program_target__install_ints_and_headers_7_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_np_call_localret_ent(libs__globals__io_get_target_3_0,
		make__program_target__install_ints_and_headers_7_0_i15);
MR_def_label(make__program_target__install_ints_and_headers_7_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(make__program_target__install_ints_and_headers_7_0_i18);
	}
	MR_r1 = MR_sv(2);
	MR_GOTO_LAB(make__program_target__install_ints_and_headers_7_0_i17);
MR_def_label(make__program_target__install_ints_and_headers_7_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,3)) {
		MR_GOTO_LAB(make__program_target__install_ints_and_headers_7_0_i16);
	}
	MR_r1 = MR_sv(2);
MR_def_label(make__program_target__install_ints_and_headers_7_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r2 = (MR_Word) MR_string_const(".mh", 3);
	MR_r3 = (MR_Integer) 0;
	MR_np_call_localret_ent(parse_tree__modules__module_name_to_file_name_6_0,
		make__program_target__install_ints_and_headers_7_0_i20);
MR_def_label(make__program_target__install_ints_and_headers_7_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = (MR_Word) MR_string_const("inc", 3);
	MR_np_call_localret_ent(fn__f_100_105_114_95_95_47_2_0,
		make__program_target__install_ints_and_headers_7_0_i21);
MR_def_label(make__program_target__install_ints_and_headers_7_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(make__program_target__install_file_5_0,
		make__program_target__install_ints_and_headers_7_0_i22);
MR_def_label(make__program_target__install_ints_and_headers_7_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_sv(4) = MR_tempr1;
	MR_r2 = (MR_Word) MR_string_const("ints", 4);
	}
	MR_np_call_localret_ent(fn__f_100_105_114_95_95_47_2_0,
		make__program_target__install_ints_and_headers_7_0_i23);
MR_def_label(make__program_target__install_ints_and_headers_7_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = (MR_Word) MR_string_const("mh", 2);
	MR_np_call_localret_ent(make__program_target__install_subdir_file_7_0,
		make__program_target__install_ints_and_headers_7_0_i24);
MR_def_label(make__program_target__install_ints_and_headers_7_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(fn__bool__and_2_0,
		make__program_target__install_ints_and_headers_7_0_i25);
MR_def_label(make__program_target__install_ints_and_headers_7_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = MR_sv(3);
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__bool__and_list_1_0,
		make__program_target__install_ints_and_headers_7_0_i27);
MR_def_label(make__program_target__install_ints_and_headers_7_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = (MR_Integer) 1;
	MR_tfield(1, MR_r1, 1) = MR_sv(3);
	MR_np_call_localret_ent(fn__bool__and_list_1_0,
		make__program_target__install_ints_and_headers_7_0_i27);
MR_def_label(make__program_target__install_ints_and_headers_7_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(6);
	MR_decr_sp_and_return(7);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(libs__globals__lookup_bool_option_3_0);
MR_decl_entry(fn__bool__not_1_0);
MR_decl_entry(make__options_file__lookup_mmc_options_4_0);
MR_decl_entry(libs__handle_options__handle_options_7_0);
MR_decl_entry(fn__map__to_assoc_list_1_0);
MR_decl_entry(fn__list__filter_2_0);
MR_decl_entry(fn__map__from_assoc_list_1_0);
MR_decl_entry(libs__process_util__build_with_check_for_interrupt_7_0);
MR_decl_entry(libs__globals__io_set_globals_3_0);
MR_decl_entry(libs__handle_options__usage_errors_3_0);

MR_BEGIN_MODULE(make__program_target_module29)
	MR_init_entry1(make__program_target__install_library_grade_9_0);
	MR_init_label8(make__program_target__install_library_grade_9_0,2,3,4,5,6,7,10,9)
	MR_init_label8(make__program_target__install_library_grade_9_0,12,8,16,17,18,19,15,20)
	MR_init_label1(make__program_target__install_library_grade_9_0,21)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(make__program_target__install_library_grade_9_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_sv(5) = MR_r5;
	MR_np_call_localret_ent(libs__globals__io_get_globals_3_0,
		make__program_target__install_library_grade_9_0_i2);
MR_def_label(make__program_target__install_library_grade_9_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r2 = (MR_Integer) 511;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		make__program_target__install_library_grade_9_0_i3);
MR_def_label(make__program_target__install_library_grade_9_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__bool__not_1_0,
		make__program_target__install_library_grade_9_0_i4);
MR_def_label(make__program_target__install_library_grade_9_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(4);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_TAG_COMMON(1,10,15);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = (MR_Word) MR_string_const("--grade", 7);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_sv(7) = MR_r1;
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = MR_ctfield(0, MR_sv(5), 2);
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		make__program_target__install_library_grade_9_0_i5);
MR_def_label(make__program_target__install_library_grade_9_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(4,3);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(make__program_target__IntroducedFrom__pred__install_library_grade__935__1_3_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(make__util__verbose_msg_3_0,
		make__program_target__install_library_grade_9_0_i6);
MR_def_label(make__program_target__install_library_grade_9_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(0, MR_sv(5), 3);
	MR_np_call_localret_ent(make__options_file__lookup_mmc_options_4_0,
		make__program_target__install_library_grade_9_0_i7);
MR_def_label(make__program_target__install_library_grade_9_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(make__program_target__install_library_grade_9_0_i9);
	}
	MR_np_call_localret_ent(fn__make__program_target__this_file_0_0,
		make__program_target__install_library_grade_9_0_i10);
MR_def_label(make__program_target__install_library_grade_9_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("install_library_grade: bad DEFAULT_MCFLAGS", 42);
	MR_np_call_localret_ent(libs__compiler_util__unexpected_2_0,
		make__program_target__install_library_grade_9_0_i8);
MR_def_label(make__program_target__install_library_grade_9_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = MR_ctfield(1, MR_tempr1, 0);
	MR_r3 = MR_sv(4);
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		make__program_target__install_library_grade_9_0_i12);
MR_def_label(make__program_target__install_library_grade_9_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(libs__handle_options__handle_options_7_0,
		make__program_target__install_library_grade_9_0_i8);
MR_def_label(make__program_target__install_library_grade_9_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(make__program_target__install_library_grade_9_0_i15);
	}
	MR_sv(8) = (MR_Word) MR_TAG_COMMON(0,0,3);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(make__dependencies, dependency_file);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(make, dependency_status);
	MR_r3 = MR_ctfield(0, MR_sv(5), 4);
	MR_np_call_localret_ent(fn__map__to_assoc_list_1_0,
		make__program_target__install_library_grade_9_0_i16);
MR_def_label(make__program_target__install_library_grade_9_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,3,8);
	MR_np_call_localret_ent(fn__list__filter_2_0,
		make__program_target__install_library_grade_9_0_i17);
MR_def_label(make__program_target__install_library_grade_9_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(make__dependencies, dependency_file);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(make, dependency_status);
	MR_np_call_localret_ent(fn__map__from_assoc_list_1_0,
		make__program_target__install_library_grade_9_0_i18);
MR_def_label(make__program_target__install_library_grade_9_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6, MR_tempr7;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 13);
	MR_r4 = MR_tempr1;
	MR_tempr4 = MR_sv(5);
	MR_tfield(0, MR_tempr1, 0) = MR_ctfield(0, MR_tempr4, 0);
	MR_tfield(0, MR_tempr1, 1) = MR_ctfield(0, MR_tempr4, 1);
	MR_tfield(0, MR_tempr1, 2) = MR_sv(4);
	MR_tfield(0, MR_tempr1, 3) = MR_ctfield(0, MR_tempr4, 3);
	MR_tfield(0, MR_tempr1, 4) = MR_r1;
	MR_tfield(0, MR_tempr1, 5) = MR_ctfield(0, MR_tempr4, 5);
	MR_tfield(0, MR_tempr1, 6) = MR_ctfield(0, MR_tempr4, 6);
	MR_tfield(0, MR_tempr1, 7) = MR_ctfield(0, MR_tempr4, 7);
	MR_tfield(0, MR_tempr1, 8) = MR_ctfield(0, MR_tempr4, 8);
	MR_tfield(0, MR_tempr1, 9) = MR_ctfield(0, MR_tempr4, 9);
	MR_tfield(0, MR_tempr1, 10) = MR_ctfield(0, MR_tempr4, 10);
	MR_tfield(0, MR_tempr1, 11) = MR_ctfield(0, MR_tempr4, 11);
	MR_tfield(0, MR_tempr1, 12) = MR_ctfield(0, MR_tempr4, 12);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 6);
	MR_r3 = MR_tempr2;
	MR_tfield(0, MR_tempr2, 0) = (MR_Word) MR_COMMON(2,10);
	MR_tfield(0, MR_tempr2, 1) = (MR_Word) MR_ENTRY_AP(make__program_target__maybe_make_grade_clean_7_0);
	MR_tfield(0, MR_tempr2, 2) = (MR_Integer) 3;
	MR_tempr5 = MR_sv(7);
	MR_tfield(0, MR_tempr2, 3) = MR_tempr5;
	MR_tempr6 = MR_sv(2);
	MR_tfield(0, MR_tempr2, 4) = MR_tempr6;
	MR_tempr7 = MR_sv(3);
	MR_tfield(0, MR_tempr2, 5) = MR_tempr7;
	MR_tag_alloc_heap(MR_tempr3, 0, (MR_Integer) 7);
	MR_r2 = MR_tempr3;
	MR_tfield(0, MR_tempr3, 0) = (MR_Word) MR_COMMON(12,1);
	MR_tfield(0, MR_tempr3, 1) = (MR_Word) MR_ENTRY_AP(make__program_target__IntroducedFrom__pred__install_library_grade__977__1_9_0);
	MR_tfield(0, MR_tempr3, 2) = (MR_Integer) 4;
	MR_tfield(0, MR_tempr3, 3) = MR_sv(1);
	MR_tfield(0, MR_tempr3, 4) = MR_tempr6;
	MR_tfield(0, MR_tempr3, 5) = MR_tempr7;
	MR_tfield(0, MR_tempr3, 6) = MR_tempr5;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(make, make_info);
	}
	MR_np_call_localret_ent(libs__process_util__build_with_check_for_interrupt_7_0,
		make__program_target__install_library_grade_9_0_i19);
MR_def_label(make__program_target__install_library_grade_9_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_r1 = MR_sv(6);
	MR_np_call_localret_ent(libs__globals__io_set_globals_3_0,
		make__program_target__install_library_grade_9_0_i21);
MR_def_label(make__program_target__install_library_grade_9_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(libs__handle_options__usage_errors_3_0,
		make__program_target__install_library_grade_9_0_i20);
MR_def_label(make__program_target__install_library_grade_9_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = (MR_Integer) 0;
	MR_sv(2) = MR_sv(5);
	MR_r1 = MR_sv(6);
	MR_np_call_localret_ent(libs__globals__io_set_globals_3_0,
		make__program_target__install_library_grade_9_0_i21);
MR_def_label(make__program_target__install_library_grade_9_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_decr_sp_and_return(9);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(make__program_target_module30)
	MR_init_entry1(make__program_target__maybe_make_grade_clean_7_0);
	MR_init_label2(make__program_target__maybe_make_grade_clean_7_0,13,4)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(make__program_target__maybe_make_grade_clean_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(make__program_target__maybe_make_grade_clean_7_0_i13);
	}
	MR_r1 = MR_r4;
	MR_proceed();
MR_def_label(make__program_target__maybe_make_grade_clean_7_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r3;
	MR_r1 = MR_r2;
	MR_r2 = MR_r4;
	MR_np_call_localret_ent(make__program_target__make_main_module_realclean_5_0,
		make__program_target__maybe_make_grade_clean_7_0_i4);
MR_def_label(make__program_target__maybe_make_grade_clean_7_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r6 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__prim_data, sym_name);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(make, make_info);
	MR_r3 = (MR_Word) MR_IO_CTOR_ADDR;
	MR_r4 = (MR_Word) MR_TAG_COMMON(0,3,9);
	MR_r5 = MR_sv(1);
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(list__foldl2_6_5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(make__program_target_module31)
	MR_init_entry1(make__program_target__install_library_grade_2_8_0);
	MR_init_label6(make__program_target__install_library_grade_2_8_0,2,4,5,6,7,8)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(make__program_target__install_library_grade_2_8_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tempr3 = MR_r2;
	MR_tfield(0, MR_tempr1, 0) = MR_tempr3;
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 3);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 4);
	MR_tfield(0, MR_tempr2, 0) = (MR_Word) MR_COMMON(2,11);
	MR_tfield(0, MR_tempr2, 1) = (MR_Word) MR_ENTRY_AP(make__program_target__make_misc_target_builder_7_0);
	MR_tfield(0, MR_tempr2, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr2, 3) = MR_tempr1;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_tempr3;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r5;
	MR_r1 = MR_tempr3;
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_r3 = MR_tempr2;
	}
	MR_np_call_localret_ent(make__util__build_with_module_options_8_0,
		make__program_target__install_library_grade_2_8_0_i2);
MR_def_label(make__program_target__install_library_grade_2_8_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(make__program_target__install_library_grade_2_8_0_i4);
	}
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(6);
MR_def_label(make__program_target__install_library_grade_2_8_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r2;
	MR_np_call_localret_ent(libs__globals__io_get_globals_3_0,
		make__program_target__install_library_grade_2_8_0_i5);
MR_def_label(make__program_target__install_library_grade_2_8_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(libs__handle_options__grade_directory_component_2_0,
		make__program_target__install_library_grade_2_8_0_i6);
MR_def_label(make__program_target__install_library_grade_2_8_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(5);
	MR_np_call_localret_ent(make__program_target__install_library_grade_files_9_0,
		make__program_target__install_library_grade_2_8_0_i7);
MR_def_label(make__program_target__install_library_grade_2_8_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r4 = MR_r2;
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_np_call_localret_ent(make__program_target__maybe_make_grade_clean_7_0,
		make__program_target__install_library_grade_2_8_0_i8);
MR_def_label(make__program_target__install_library_grade_2_8_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_decr_sp_and_return(6);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(make__program_target_module32)
	MR_init_entry1(make__program_target__install_grade_ints_and_headers_8_0);
	MR_init_label8(make__program_target__install_grade_ints_and_headers_8_0,2,4,5,6,7,8,9,12)
	MR_init_label8(make__program_target__install_grade_ints_and_headers_8_0,11,16,17,18,19,20,21,22)
	MR_init_label8(make__program_target__install_grade_ints_and_headers_8_0,10,24,25,26,28,29,30,32)
	MR_init_label3(make__program_target__install_grade_ints_and_headers_8_0,33,34,35)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(make__program_target__install_grade_ints_and_headers_8_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(3) = MR_tempr1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_r4;
	}
	MR_np_call_localret_ent(make__module_dep_file__get_module_dependencies_6_0,
		make__program_target__install_grade_ints_and_headers_8_0_i2);
MR_def_label(make__program_target__install_grade_ints_and_headers_8_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(make__program_target__install_grade_ints_and_headers_8_0_i4);
	}
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(8);
MR_def_label(make__program_target__install_grade_ints_and_headers_8_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_ctfield(1, MR_r1, 0);
	MR_sv(7) = MR_r2;
	MR_r1 = (MR_Integer) 499;
	MR_np_call_localret_ent(libs__globals__io_lookup_string_option_4_0,
		make__program_target__install_grade_ints_and_headers_8_0_i5);
MR_def_label(make__program_target__install_grade_ints_and_headers_8_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("lib", 3);
	MR_np_call_localret_ent(fn__f_100_105_114_95_95_47_2_0,
		make__program_target__install_grade_ints_and_headers_8_0_i6);
MR_def_label(make__program_target__install_grade_ints_and_headers_8_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("mercury", 7);
	MR_np_call_localret_ent(fn__f_100_105_114_95_95_47_2_0,
		make__program_target__install_grade_ints_and_headers_8_0_i7);
MR_def_label(make__program_target__install_grade_ints_and_headers_8_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_np_call_localret_ent(libs__globals__io_get_target_3_0,
		make__program_target__install_grade_ints_and_headers_8_0_i8);
MR_def_label(make__program_target__install_grade_ints_and_headers_8_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = (MR_Integer) 189;
	MR_np_call_localret_ent(libs__globals__io_lookup_bool_option_4_0,
		make__program_target__install_grade_ints_and_headers_8_0_i9);
MR_def_label(make__program_target__install_grade_ints_and_headers_8_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(6),0)) {
		MR_GOTO_LAB(make__program_target__install_grade_ints_and_headers_8_0_i12);
	}
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(make__program_target__install_grade_ints_and_headers_8_0_i10);
	}
	MR_r1 = MR_sv(5);
	MR_GOTO_LAB(make__program_target__install_grade_ints_and_headers_8_0_i11);
MR_def_label(make__program_target__install_grade_ints_and_headers_8_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(6),3)) {
		MR_GOTO_LAB(make__program_target__install_grade_ints_and_headers_8_0_i10);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(0, MR_sv(4), 11);
	if (MR_PTAG_TESTR(MR_tempr1,1)) {
		MR_GOTO_LAB(make__program_target__install_grade_ints_and_headers_8_0_i10);
	}
	MR_r1 = MR_sv(5);
	}
MR_def_label(make__program_target__install_grade_ints_and_headers_8_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r2 = (MR_Word) MR_string_const("lib", 3);
	MR_np_call_localret_ent(fn__f_100_105_114_95_95_47_2_0,
		make__program_target__install_grade_ints_and_headers_8_0_i16);
MR_def_label(make__program_target__install_grade_ints_and_headers_8_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(fn__f_100_105_114_95_95_47_2_0,
		make__program_target__install_grade_ints_and_headers_8_0_i17);
MR_def_label(make__program_target__install_grade_ints_and_headers_8_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("inc", 3);
	MR_np_call_localret_ent(fn__f_100_105_114_95_95_47_2_0,
		make__program_target__install_grade_ints_and_headers_8_0_i18);
MR_def_label(make__program_target__install_grade_ints_and_headers_8_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r3 = MR_sv(3);
	MR_r4 = (MR_Word) MR_string_const("mih", 3);
	MR_np_call_localret_ent(make__program_target__install_subdir_file_7_0,
		make__program_target__install_grade_ints_and_headers_8_0_i19);
MR_def_label(make__program_target__install_grade_ints_and_headers_8_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = (MR_Word) MR_string_const("ints", 4);
	MR_np_call_localret_ent(fn__f_100_105_114_95_95_47_2_0,
		make__program_target__install_grade_ints_and_headers_8_0_i20);
MR_def_label(make__program_target__install_grade_ints_and_headers_8_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r3 = MR_sv(3);
	MR_r4 = (MR_Word) MR_string_const("mih", 3);
	MR_np_call_localret_ent(make__program_target__install_subdir_file_7_0,
		make__program_target__install_grade_ints_and_headers_8_0_i21);
MR_def_label(make__program_target__install_grade_ints_and_headers_8_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(fn__bool__and_2_0,
		make__program_target__install_grade_ints_and_headers_8_0_i22);
MR_def_label(make__program_target__install_grade_ints_and_headers_8_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = (MR_Word) MR_string_const("ints", 4);
	MR_np_call_localret_ent(fn__f_100_105_114_95_95_47_2_0,
		make__program_target__install_grade_ints_and_headers_8_0_i24);
MR_def_label(make__program_target__install_grade_ints_and_headers_8_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	MR_sv(4) = (MR_Integer) 1;
	MR_r2 = (MR_Word) MR_string_const("ints", 4);
	MR_np_call_localret_ent(fn__f_100_105_114_95_95_47_2_0,
		make__program_target__install_grade_ints_and_headers_8_0_i24);
MR_def_label(make__program_target__install_grade_ints_and_headers_8_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(fn__f_100_105_114_95_95_47_2_0,
		make__program_target__install_grade_ints_and_headers_8_0_i25);
MR_def_label(make__program_target__install_grade_ints_and_headers_8_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = (MR_Integer) 247;
	MR_np_call_localret_ent(libs__globals__io_lookup_bool_option_4_0,
		make__program_target__install_grade_ints_and_headers_8_0_i26);
MR_def_label(make__program_target__install_grade_ints_and_headers_8_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(make__program_target__install_grade_ints_and_headers_8_0_i28);
	}
	MR_sv(5) = (MR_Integer) 1;
	MR_r1 = (MR_Integer) 253;
	MR_np_call_localret_ent(libs__globals__io_lookup_bool_option_4_0,
		make__program_target__install_grade_ints_and_headers_8_0_i30);
MR_def_label(make__program_target__install_grade_ints_and_headers_8_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = (MR_Word) MR_string_const("opt", 3);
	MR_np_call_localret_ent(make__program_target__install_subdir_file_7_0,
		make__program_target__install_grade_ints_and_headers_8_0_i29);
MR_def_label(make__program_target__install_grade_ints_and_headers_8_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = (MR_Integer) 253;
	MR_np_call_localret_ent(libs__globals__io_lookup_bool_option_4_0,
		make__program_target__install_grade_ints_and_headers_8_0_i30);
MR_def_label(make__program_target__install_grade_ints_and_headers_8_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(make__program_target__install_grade_ints_and_headers_8_0_i32);
	}
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(5);
	MR_sv(1) = (MR_Integer) 1;
	MR_np_call_localret_ent(fn__bool__and_2_0,
		make__program_target__install_grade_ints_and_headers_8_0_i34);
MR_def_label(make__program_target__install_grade_ints_and_headers_8_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = (MR_Word) MR_string_const("analysis", 8);
	MR_np_call_localret_ent(make__program_target__install_subdir_file_7_0,
		make__program_target__install_grade_ints_and_headers_8_0_i33);
MR_def_label(make__program_target__install_grade_ints_and_headers_8_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(fn__bool__and_2_0,
		make__program_target__install_grade_ints_and_headers_8_0_i34);
MR_def_label(make__program_target__install_grade_ints_and_headers_8_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(fn__bool__and_2_0,
		make__program_target__install_grade_ints_and_headers_8_0_i35);
MR_def_label(make__program_target__install_grade_ints_and_headers_8_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(7);
	MR_decr_sp_and_return(8);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(make__util__make_remove_target_file_6_0);
extern const MR_TypeCtorInfo_Struct mercury_data_make__type_ctor_info_module_target_type_0;
MR_decl_entry(fn__parse_tree__prog_foreign__foreign_language_module_name_2_1);
extern const MR_TypeCtorInfo_Struct mercury_data_backend_libs__compile_target_code__type_ctor_info_pic_0;
MR_decl_entry(fn__parse_tree__prog_foreign__foreign_language_file_extension_1_1);

MR_BEGIN_MODULE(make__program_target_module33)
	MR_init_entry1(make__program_target__make_module_clean_5_0);
	MR_init_label8(make__program_target__make_module_clean_5_0,2,3,4,6,5,7,8,9)
	MR_init_label8(make__program_target__make_module_clean_5_0,10,11,12,13,14,15,16,17)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(make__program_target__make_module_clean_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r4 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(6,4);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(make__util__make_remove_target_file_6_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_r1;
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(make, module_target_type);
	MR_r6 = MR_r2;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(make, make_info);
	MR_r3 = (MR_Word) MR_IO_CTOR_ADDR;
	MR_r5 = (MR_Word) MR_TAG_COMMON(1,1,16);
	}
	MR_np_call_localret_ent(list__foldl2_6_5,
		make__program_target__make_module_clean_5_0_i2);
MR_def_label(make__program_target__make_module_clean_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r4 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(6,5);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(make__util__make_remove_file_6_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(1);
	MR_r6 = MR_r1;
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(make, make_info);
	MR_r3 = (MR_Word) MR_IO_CTOR_ADDR;
	MR_r5 = (MR_Word) MR_TAG_COMMON(1,10,17);
	}
	MR_np_call_localret_ent(list__foldl2_6_5,
		make__program_target__make_module_clean_5_0_i3);
MR_def_label(make__program_target__make_module_clean_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(make__module_dep_file__get_module_dependencies_6_0,
		make__program_target__make_module_clean_5_0_i4);
MR_def_label(make__program_target__make_module_clean_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(make__program_target__make_module_clean_5_0_i6);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r4 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(6,6);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(make__program_target__IntroducedFrom__pred__make_module_clean__1405__1_6_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(1);
	MR_r5 = (MR_Word) MR_tbmkword(0, 0);
	MR_r6 = MR_r2;
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(make, make_info);
	MR_r3 = (MR_Word) MR_IO_CTOR_ADDR;
	MR_GOTO_LAB(make__program_target__make_module_clean_5_0_i5);
	}
MR_def_label(make__program_target__make_module_clean_5_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r4 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(6,7);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(make__program_target__IntroducedFrom__pred__make_module_clean__1405__1_6_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(1);
	MR_r5 = MR_ctfield(0, MR_ctfield(1, MR_r1, 0), 10);
	MR_r6 = MR_r2;
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(make, make_info);
	MR_r3 = (MR_Word) MR_IO_CTOR_ADDR;
	}
MR_def_label(make__program_target__make_module_clean_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r5;
	MR_np_call_localret_ent(list__foldl2_6_5,
		make__program_target__make_module_clean_5_0_i7);
MR_def_label(make__program_target__make_module_clean_5_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = (MR_Integer) 0;
	MR_np_call_localret_ent(fn__parse_tree__prog_foreign__foreign_language_module_name_2_1,
		make__program_target__make_module_clean_5_0_i8);
MR_def_label(make__program_target__make_module_clean_5_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_tbmkword(0, 8);
	MR_r3 = MR_sv(3);
	MR_np_call_localret_ent(make__util__make_remove_target_file_6_0,
		make__program_target__make_module_clean_5_0_i9);
MR_def_label(make__program_target__make_module_clean_5_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_r4 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(2,12);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(make__program_target__IntroducedFrom__pred__make_module_clean__1416__1_7_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(2);
	MR_r6 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(backend_libs__compile_target_code, pic);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(make, make_info);
	MR_r3 = (MR_Word) MR_IO_CTOR_ADDR;
	MR_r5 = (MR_Word) MR_TAG_COMMON(1,15,3);
	}
	MR_np_call_localret_ent(list__foldl2_6_5,
		make__program_target__make_module_clean_5_0_i10);
MR_def_label(make__program_target__make_module_clean_5_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = (MR_Integer) 1;
	MR_np_call_localret_ent(fn__parse_tree__prog_foreign__foreign_language_module_name_2_1,
		make__program_target__make_module_clean_5_0_i11);
MR_def_label(make__program_target__make_module_clean_5_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = (MR_Integer) 1;
	MR_np_call_localret_ent(fn__parse_tree__prog_foreign__foreign_language_file_extension_1_1,
		make__program_target__make_module_clean_5_0_i12);
MR_def_label(make__program_target__make_module_clean_5_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_np_call_localret_ent(make__util__make_remove_file_6_0,
		make__program_target__make_module_clean_5_0_i13);
MR_def_label(make__program_target__make_module_clean_5_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = (MR_Word) MR_TAG_COMMON(3,17,0);
	MR_np_call_localret_ent(make__util__make_remove_target_file_6_0,
		make__program_target__make_module_clean_5_0_i14);
MR_def_label(make__program_target__make_module_clean_5_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = (MR_Integer) 2;
	MR_np_call_localret_ent(fn__parse_tree__prog_foreign__foreign_language_module_name_2_1,
		make__program_target__make_module_clean_5_0_i15);
MR_def_label(make__program_target__make_module_clean_5_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Integer) 2;
	MR_np_call_localret_ent(fn__parse_tree__prog_foreign__foreign_language_file_extension_1_1,
		make__program_target__make_module_clean_5_0_i16);
MR_def_label(make__program_target__make_module_clean_5_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_np_call_localret_ent(make__util__make_remove_file_6_0,
		make__program_target__make_module_clean_5_0_i17);
MR_def_label(make__program_target__make_module_clean_5_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = (MR_Word) MR_TAG_COMMON(3,17,1);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(make__util__make_remove_target_file_6_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__make__make_module_dep_file_extension_0_0);

MR_BEGIN_MODULE(make__program_target_module34)
	MR_init_entry1(make__program_target__make_module_realclean_5_0);
	MR_init_label5(make__program_target__make_module_realclean_5_0,2,3,4,5,6)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(make__program_target__make_module_realclean_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(make__program_target__make_module_clean_5_0,
		make__program_target__make_module_realclean_5_0_i2);
MR_def_label(make__program_target__make_module_realclean_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r4 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(6,8);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(make__util__make_remove_target_file_6_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(1);
	MR_r6 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(make, module_target_type);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(make, make_info);
	MR_r3 = (MR_Word) MR_IO_CTOR_ADDR;
	MR_r5 = (MR_Word) MR_TAG_COMMON(1,1,23);
	}
	MR_np_call_localret_ent(list__foldl2_6_5,
		make__program_target__make_module_realclean_5_0_i3);
MR_def_label(make__program_target__make_module_realclean_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_np_call_localret_ent(fn__make__make_module_dep_file_extension_0_0,
		make__program_target__make_module_realclean_5_0_i4);
MR_def_label(make__program_target__make_module_realclean_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_np_call_localret_ent(make__util__make_remove_file_6_0,
		make__program_target__make_module_realclean_5_0_i5);
MR_def_label(make__program_target__make_module_realclean_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = (MR_Word) MR_string_const(".imdg", 5);
	MR_np_call_localret_ent(make__util__make_remove_file_6_0,
		make__program_target__make_module_realclean_5_0_i6);
MR_def_label(make__program_target__make_module_realclean_5_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = (MR_Word) MR_string_const(".request", 8);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(make__util__make_remove_file_6_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(make__program_target_module35)
	MR_init_entry1(fn__make__program_target__IntroducedFrom__func__get_foreign_object_targets__270__1_2_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__make__program_target__IntroducedFrom__func__get_foreign_object_targets__270__1_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr1, 1) = MR_r2;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = MR_r1;
	MR_tfield(0, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_r1, 0) = MR_tempr2;
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(make__program_target_module36)
	MR_init_entry1(fn__make__program_target__IntroducedFrom__func__get_foreign_object_targets__284__1_3_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__make__program_target__IntroducedFrom__func__get_foreign_object_targets__284__1_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 3;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_tfield(3, MR_tempr1, 2) = MR_r3;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = MR_r2;
	MR_tfield(0, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_r1, 0) = MR_tempr2;
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(make__program_target_module37)
	MR_init_entry1(fn__make__program_target__IntroducedFrom__func__get_foreign_object_targets__284__2_3_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__make__program_target__IntroducedFrom__func__get_foreign_object_targets__284__2_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 3;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_tfield(3, MR_tempr1, 2) = MR_r3;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = MR_r2;
	MR_tfield(0, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_r1, 0) = MR_tempr2;
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(make__program_target_module38)
	MR_init_entry1(fn__make__program_target__IntroducedFrom__func__build_linked_target_2__377__1_1_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__make__program_target__IntroducedFrom__func__build_linked_target_2__377__1_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_tempr1;
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(io__write_3_0);

MR_BEGIN_MODULE(make__program_target_module39)
	MR_init_entry1(make__program_target__IntroducedFrom__pred__build_linked_target_2__386__1_3_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(make__program_target__IntroducedFrom__pred__build_linked_target_2__386__1_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_np_tailcall_ent(io__write_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(make__module_target__external_foreign_code_files_5_0);

MR_BEGIN_MODULE(make__program_target_module40)
	MR_init_entry1(make__program_target__IntroducedFrom__pred__build_linked_target_2__423__1_7_0);
	MR_init_label4(make__program_target__IntroducedFrom__pred__build_linked_target_2__423__1_7_0,2,5,4,7)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(make__program_target__IntroducedFrom__pred__build_linked_target_2__423__1_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_r1 = MR_r2;
	MR_r2 = MR_r3;
	MR_np_call_localret_ent(make__module_dep_file__get_module_dependencies_6_0,
		make__program_target__IntroducedFrom__pred__build_linked_target_2__423__1_7_0_i2);
MR_def_label(make__program_target__IntroducedFrom__pred__build_linked_target_2__423__1_7_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(make__program_target__IntroducedFrom__pred__build_linked_target_2__423__1_7_0_i4);
	}
	MR_sv(1) = MR_r2;
	MR_np_call_localret_ent(fn__make__program_target__this_file_0_0,
		make__program_target__IntroducedFrom__pred__build_linked_target_2__423__1_7_0_i5);
MR_def_label(make__program_target__IntroducedFrom__pred__build_linked_target_2__423__1_7_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("build_linked_target: error in dependencies", 42);
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
MR_def_label(make__program_target__IntroducedFrom__pred__build_linked_target_2__423__1_7_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_r2;
	MR_r2 = MR_ctfield(1, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(make__module_target__external_foreign_code_files_5_0,
		make__program_target__IntroducedFrom__pred__build_linked_target_2__423__1_7_0_i7);
MR_def_label(make__program_target__IntroducedFrom__pred__build_linked_target_2__423__1_7_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_decr_sp_and_return(2);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(make__program_target_module41)
	MR_init_entry1(fn__make__program_target__IntroducedFrom__func__build_linked_target_2__438__1_1_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__make__program_target__IntroducedFrom__func__build_linked_target_2__438__1_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(0, MR_r1, 2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(make__program_target_module42)
	MR_init_entry1(make__program_target__IntroducedFrom__pred__build_linked_target_2__443__1_5_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(make__program_target__IntroducedFrom__pred__build_linked_target_2__443__1_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r3 = (MR_Integer) 0;
	MR_np_tailcall_ent(parse_tree__modules__module_name_to_file_name_6_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(make__program_target_module43)
	MR_init_entry1(make__program_target__IntroducedFrom__pred__make_misc_target_builder__598__1_8_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(make__program_target__IntroducedFrom__pred__make_misc_target_builder__598__1_8_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r5 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(make__dependencies, dependency_file);
	MR_r7 = MR_r4;
	MR_r4 = MR_r2;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(make, make_info);
	MR_r6 = MR_r3;
	MR_r3 = (MR_Word) MR_IO_CTOR_ADDR;
	MR_np_tailcall_ent(make__util__foldl2_maybe_stop_at_error_8_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(make__program_target_module44)
	MR_init_entry1(make__program_target__IntroducedFrom__pred__build_analysis_files__681__1_2_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(make__program_target__IntroducedFrom__pred__build_analysis_files__681__1_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__prim_data, sym_name);
	MR_np_tailcall_ent(list__member_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(set__to_sorted_list_2_0);

MR_BEGIN_MODULE(make__program_target_module45)
	MR_init_entry1(make__program_target__IntroducedFrom__pred__reverse_ordered_modules__747__1_2_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(make__program_target__IntroducedFrom__pred__reverse_ordered_modules__747__1_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__prim_data, sym_name);
	MR_np_tailcall_ent(set__to_sorted_list_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(make__program_target_module46)
	MR_init_entry1(make__program_target__IntroducedFrom__pred__install_library_grade__935__1_3_0);
	MR_init_label2(make__program_target__IntroducedFrom__pred__install_library_grade__935__1_3_0,2,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(make__program_target__IntroducedFrom__pred__install_library_grade__935__1_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("Installing grade ", 17);
	MR_np_call_localret_ent(io__write_string_3_0,
		make__program_target__IntroducedFrom__pred__install_library_grade__935__1_3_0_i2);
MR_def_label(make__program_target__IntroducedFrom__pred__install_library_grade__935__1_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(io__write_string_3_0,
		make__program_target__IntroducedFrom__pred__install_library_grade__935__1_3_0_i3);
MR_def_label(make__program_target__IntroducedFrom__pred__install_library_grade__935__1_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(io__nl_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(make__util__target_is_grade_or_arch_dependent_1_0);

MR_BEGIN_MODULE(make__program_target_module47)
	MR_init_entry1(make__program_target__IntroducedFrom__pred__install_library_grade__963__1_1_0);
	MR_init_label3(make__program_target__IntroducedFrom__pred__install_library_grade__963__1_1_0,5,3,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(make__program_target__IntroducedFrom__pred__install_library_grade__963__1_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(0, MR_r1, 0);
	if (MR_PTAG_TESTR(MR_tempr1,0)) {
		MR_GOTO_LAB(make__program_target__IntroducedFrom__pred__install_library_grade__963__1_1_0_i3);
	}
	MR_r1 = MR_ctfield(0, MR_ctfield(0, MR_tempr1, 0), 1);
	}
	MR_np_call_localret_ent(make__util__target_is_grade_or_arch_dependent_1_0,
		make__program_target__IntroducedFrom__pred__install_library_grade__963__1_1_0_i5);
MR_def_label(make__program_target__IntroducedFrom__pred__install_library_grade__963__1_1_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(make__program_target__IntroducedFrom__pred__install_library_grade__963__1_1_0_i1);
	}
MR_def_label(make__program_target__IntroducedFrom__pred__install_library_grade__963__1_1_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(make__program_target__IntroducedFrom__pred__install_library_grade__963__1_1_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(make__program_target_module48)
	MR_init_entry1(make__program_target__IntroducedFrom__pred__install_library_grade__977__1_9_0);
	MR_init_label1(make__program_target__IntroducedFrom__pred__install_library_grade__977__1_9_0,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(make__program_target__IntroducedFrom__pred__install_library_grade__977__1_9_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 8);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(11,1);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(make__program_target__install_library_grade_2_8_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 5;
	MR_tfield(0, MR_tempr1, 3) = MR_r1;
	MR_tfield(0, MR_tempr1, 4) = MR_r2;
	MR_tfield(0, MR_tempr1, 5) = MR_r3;
	MR_tempr2 = MR_r5;
	MR_tfield(0, MR_tempr1, 6) = MR_tempr2;
	MR_tfield(0, MR_tempr1, 7) = MR_r4;
	MR_sv(1) = MR_tempr2;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(libs__process_util__call_in_forked_process_4_0,
		make__program_target__IntroducedFrom__pred__install_library_grade__977__1_9_0_i2);
MR_def_label(make__program_target__IntroducedFrom__pred__install_library_grade__977__1_9_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_decr_sp_and_return(2);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(make__program_target_module49)
	MR_init_entry1(make__program_target__IntroducedFrom__pred__install_file__1197__1_4_0);
	MR_init_label4(make__program_target__IntroducedFrom__pred__install_file__1197__1_4_0,2,3,4,5)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(make__program_target__IntroducedFrom__pred__install_file__1197__1_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_r1 = (MR_Word) MR_string_const("Installing file ", 16);
	MR_np_call_localret_ent(io__write_string_3_0,
		make__program_target__IntroducedFrom__pred__install_file__1197__1_4_0_i2);
MR_def_label(make__program_target__IntroducedFrom__pred__install_file__1197__1_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(io__write_string_3_0,
		make__program_target__IntroducedFrom__pred__install_file__1197__1_4_0_i3);
MR_def_label(make__program_target__IntroducedFrom__pred__install_file__1197__1_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(" in ", 4);
	MR_np_call_localret_ent(io__write_string_3_0,
		make__program_target__IntroducedFrom__pred__install_file__1197__1_4_0_i4);
MR_def_label(make__program_target__IntroducedFrom__pred__install_file__1197__1_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(io__write_string_3_0,
		make__program_target__IntroducedFrom__pred__install_file__1197__1_4_0_i5);
MR_def_label(make__program_target__IntroducedFrom__pred__install_file__1197__1_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(io__nl_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(make__program_target_module50)
	MR_init_entry1(make__program_target__IntroducedFrom__pred__make_install_dirs__1233__1_5_0);
	MR_init_label2(make__program_target__IntroducedFrom__pred__make_install_dirs__1233__1_5_0,2,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(make__program_target__IntroducedFrom__pred__make_install_dirs__1233__1_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_r1 = MR_r2;
	MR_r2 = (MR_Word) MR_string_const("s", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		make__program_target__IntroducedFrom__pred__make_install_dirs__1233__1_5_0_i2);
MR_def_label(make__program_target__IntroducedFrom__pred__make_install_dirs__1233__1_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(fn__f_100_105_114_95_95_47_2_0,
		make__program_target__IntroducedFrom__pred__make_install_dirs__1233__1_5_0_i3);
MR_def_label(make__program_target__IntroducedFrom__pred__make_install_dirs__1233__1_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(dir__make_directory_4_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(make__program_target_module51)
	MR_init_entry1(make__program_target__IntroducedFrom__pred__generate_archive_index__1302__1_4_0);
	MR_init_label4(make__program_target__IntroducedFrom__pred__generate_archive_index__1302__1_4_0,2,3,4,5)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(make__program_target__IntroducedFrom__pred__generate_archive_index__1302__1_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_r1 = (MR_Word) MR_string_const("Generating archive index for file ", 34);
	MR_np_call_localret_ent(io__write_string_3_0,
		make__program_target__IntroducedFrom__pred__generate_archive_index__1302__1_4_0_i2);
MR_def_label(make__program_target__IntroducedFrom__pred__generate_archive_index__1302__1_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(io__write_string_3_0,
		make__program_target__IntroducedFrom__pred__generate_archive_index__1302__1_4_0_i3);
MR_def_label(make__program_target__IntroducedFrom__pred__generate_archive_index__1302__1_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(" in ", 4);
	MR_np_call_localret_ent(io__write_string_3_0,
		make__program_target__IntroducedFrom__pred__generate_archive_index__1302__1_4_0_i4);
MR_def_label(make__program_target__IntroducedFrom__pred__generate_archive_index__1302__1_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(io__write_string_3_0,
		make__program_target__IntroducedFrom__pred__generate_archive_index__1302__1_4_0_i5);
MR_def_label(make__program_target__IntroducedFrom__pred__generate_archive_index__1302__1_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(io__nl_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(parse_tree__modules__fact_table_file_name_7_0);

MR_BEGIN_MODULE(make__program_target_module52)
	MR_init_entry1(make__program_target__IntroducedFrom__pred__make_module_clean__1405__1_6_0);
	MR_init_label1(make__program_target__IntroducedFrom__pred__make_module_clean__1405__1_6_0,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(make__program_target__IntroducedFrom__pred__make_module_clean__1405__1_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r3;
	MR_r3 = (MR_Word) MR_string_const(".c", 2);
	MR_r4 = (MR_Integer) 0;
	MR_np_call_localret_ent(parse_tree__modules__fact_table_file_name_7_0,
		make__program_target__IntroducedFrom__pred__make_module_clean__1405__1_6_0_i2);
MR_def_label(make__program_target__IntroducedFrom__pred__make_module_clean__1405__1_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(make__util__make_remove_file_5_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(make__program_target_module53)
	MR_init_entry1(make__program_target__IntroducedFrom__pred__make_module_clean__1424__1_7_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(make__program_target__IntroducedFrom__pred__make_module_clean__1424__1_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 3;
	MR_tfield(3, MR_tempr1, 1) = MR_r2;
	MR_tfield(3, MR_tempr1, 2) = MR_r3;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_r4;
	MR_np_tailcall_ent(make__util__make_remove_target_file_6_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(make__program_target_module54)
	MR_init_entry1(make__program_target__IntroducedFrom__pred__make_module_clean__1416__1_7_0);
	MR_init_label3(make__program_target__IntroducedFrom__pred__make_module_clean__1416__1_7_0,2,3,4)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(make__program_target__IntroducedFrom__pred__make_module_clean__1416__1_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 0;
	MR_tempr2 = MR_r3;
	MR_tfield(3, MR_tempr1, 1) = MR_tempr2;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_tempr2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_r4;
	}
	MR_np_call_localret_ent(make__util__make_remove_target_file_6_0,
		make__program_target__IntroducedFrom__pred__make_module_clean__1416__1_7_0_i2);
MR_def_label(make__program_target__IntroducedFrom__pred__make_module_clean__1416__1_7_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr1, 0) = MR_sv(3);
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(make__util__make_remove_target_file_6_0,
		make__program_target__IntroducedFrom__pred__make_module_clean__1416__1_7_0_i3);
MR_def_label(make__program_target__IntroducedFrom__pred__make_module_clean__1416__1_7_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 2;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(3);
	MR_tfield(3, MR_tempr1, 2) = (MR_Integer) 0;
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(make__util__make_remove_target_file_6_0,
		make__program_target__IntroducedFrom__pred__make_module_clean__1416__1_7_0_i4);
MR_def_label(make__program_target__IntroducedFrom__pred__make_module_clean__1416__1_7_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_r4 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(2,13);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(make__program_target__IntroducedFrom__pred__make_module_clean__1424__1_7_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(3);
	MR_r6 = MR_r1;
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(make, make_info);
	MR_r3 = (MR_Word) MR_IO_CTOR_ADDR;
	MR_r5 = MR_sv(2);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(list__foldl2_6_5);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(backend_libs__compile_target_code__get_object_code_type_4_0);
MR_decl_entry(fn__make__util__make_dependency_list_2_0);
MR_decl_entry(make__util__foldl2_maybe_stop_at_error_maybe_parallel_8_0);
MR_decl_entry(make__dependencies__check_dependencies_9_0);
MR_decl_entry(make__util__build_with_output_redirect_7_0);

MR_BEGIN_MODULE(make__program_target_module55)
	MR_init_entry1(f_109_97_107_101_95_95_112_114_111_103_114_97_109_95_116_97_114_103_101_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_107_101_95_108_105_110_107_101_100_95_116_97_114_103_101_116_95_50_95_95_91_50_93_95_48_7_0);
	MR_init_label8(f_109_97_107_101_95_95_112_114_111_103_114_97_109_95_116_97_114_103_101_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_107_101_95_108_105_110_107_101_100_95_116_97_114_103_101_116_95_50_95_95_91_50_93_95_48_7_0,2,3,4,7,8,10,11,12)
	MR_init_label8(f_109_97_107_101_95_95_112_114_111_103_114_97_109_95_116_97_114_103_101_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_107_101_95_108_105_110_107_101_100_95_116_97_114_103_101_116_95_50_95_95_91_50_93_95_48_7_0,13,14,15,9,17,18,19,20)
	MR_init_label8(f_109_97_107_101_95_95_112_114_111_103_114_97_109_95_116_97_114_103_101_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_107_101_95_108_105_110_107_101_100_95_116_97_114_103_101_116_95_50_95_95_91_50_93_95_48_7_0,21,22,23,25,26,28,29,24)
	MR_init_label5(f_109_97_107_101_95_95_112_114_111_103_114_97_109_95_116_97_114_103_101_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_107_101_95_108_105_110_107_101_100_95_116_97_114_103_101_116_95_50_95_95_91_50_93_95_48_7_0,30,31,32,33,34)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(f_109_97_107_101_95_95_112_114_111_103_114_97_109_95_116_97_114_103_101_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_107_101_95_108_105_110_107_101_100_95_116_97_114_103_101_116_95_50_95_95_91_50_93_95_48_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(12);
	MR_sv(12) = (MR_Word) MR_succip;
	MR_sv(1) = MR_ctfield(0, MR_r1, 0);
	MR_sv(2) = MR_ctfield(0, MR_r1, 1);
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(make__dependencies__find_reachable_local_modules_7_0,
		f_109_97_107_101_95_95_112_114_111_103_114_97_109_95_116_97_114_103_101_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_107_101_95_108_105_110_107_101_100_95_116_97_114_103_101_116_95_50_95_95_91_50_93_95_48_7_0_i2);
MR_def_label(f_109_97_107_101_95_95_112_114_111_103_114_97_109_95_116_97_114_103_101_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_107_101_95_108_105_110_107_101_100_95_116_97_114_103_101_116_95_50_95_95_91_50_93_95_48_7_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_sv(4) = MR_r2;
	MR_sv(10) = MR_r3;
	MR_r1 = (MR_Integer) 493;
	MR_np_call_localret_ent(libs__globals__io_lookup_bool_option_4_0,
		f_109_97_107_101_95_95_112_114_111_103_114_97_109_95_116_97_114_103_101_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_107_101_95_108_105_110_107_101_100_95_116_97_114_103_101_116_95_50_95_95_91_50_93_95_48_7_0_i3);
MR_def_label(f_109_97_107_101_95_95_112_114_111_103_114_97_109_95_116_97_114_103_101_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_107_101_95_108_105_110_107_101_100_95_116_97_114_103_101_116_95_50_95_95_91_50_93_95_48_7_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(3),0)) {
		MR_GOTO_LAB(f_109_97_107_101_95_95_112_114_111_103_114_97_109_95_116_97_114_103_101_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_107_101_95_108_105_110_107_101_100_95_116_97_114_103_101_116_95_50_95_95_91_50_93_95_48_7_0_i4);
	}
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(f_109_97_107_101_95_95_112_114_111_103_114_97_109_95_116_97_114_103_101_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_107_101_95_108_105_110_107_101_100_95_116_97_114_103_101_116_95_50_95_95_91_50_93_95_48_7_0_i4);
	}
	MR_r1 = (MR_Integer) 0;
	MR_r2 = MR_sv(10);
	MR_decr_sp_and_return(12);
MR_def_label(f_109_97_107_101_95_95_112_114_111_103_114_97_109_95_116_97_114_103_101_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_107_101_95_108_105_110_107_101_100_95_116_97_114_103_101_116_95_50_95_95_91_50_93_95_48_7_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(backend_libs__compile_target_code__get_object_code_type_4_0,
		f_109_97_107_101_95_95_112_114_111_103_114_97_109_95_116_97_114_103_101_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_107_101_95_108_105_110_107_101_100_95_116_97_114_103_101_116_95_50_95_95_91_50_93_95_48_7_0_i7);
MR_def_label(f_109_97_107_101_95_95_112_114_111_103_114_97_109_95_116_97_114_103_101_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_107_101_95_108_105_110_107_101_100_95_116_97_114_103_101_116_95_50_95_95_91_50_93_95_48_7_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_np_call_localret_ent(libs__globals__io_get_target_3_0,
		f_109_97_107_101_95_95_112_114_111_103_114_97_109_95_116_97_114_103_101_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_107_101_95_108_105_110_107_101_100_95_116_97_114_103_101_116_95_50_95_95_91_50_93_95_48_7_0_i8);
MR_def_label(f_109_97_107_101_95_95_112_114_111_103_114_97_109_95_116_97_114_103_101_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_107_101_95_108_105_110_107_101_100_95_116_97_114_103_101_116_95_50_95_95_91_50_93_95_48_7_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_r1,
		MR_LABEL_AP(f_109_97_107_101_95_95_112_114_111_103_114_97_109_95_116_97_114_103_101_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_107_101_95_108_105_110_107_101_100_95_116_97_114_103_101_116_95_50_95_95_91_50_93_95_48_7_0_i10) MR_AND
		MR_LABEL_AP(f_109_97_107_101_95_95_112_114_111_103_114_97_109_95_116_97_114_103_101_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_107_101_95_108_105_110_107_101_100_95_116_97_114_103_101_116_95_50_95_95_91_50_93_95_48_7_0_i11) MR_AND
		MR_LABEL_AP(f_109_97_107_101_95_95_112_114_111_103_114_97_109_95_116_97_114_103_101_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_107_101_95_108_105_110_107_101_100_95_116_97_114_103_101_116_95_50_95_95_91_50_93_95_48_7_0_i12) MR_AND
		MR_LABEL_AP(f_109_97_107_101_95_95_112_114_111_103_114_97_109_95_116_97_114_103_101_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_107_101_95_108_105_110_107_101_100_95_116_97_114_103_101_116_95_50_95_95_91_50_93_95_48_7_0_i13) MR_AND
		MR_LABEL_AP(f_109_97_107_101_95_95_112_114_111_103_114_97_109_95_116_97_114_103_101_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_107_101_95_108_105_110_107_101_100_95_116_97_114_103_101_116_95_50_95_95_91_50_93_95_48_7_0_i14));
MR_def_label(f_109_97_107_101_95_95_112_114_111_103_114_97_109_95_116_97_114_103_101_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_107_101_95_108_105_110_107_101_100_95_116_97_114_103_101_116_95_50_95_95_91_50_93_95_48_7_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_sv(9) = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(6);
	MR_r2 = MR_sv(4);
	MR_sv(7) = MR_r1;
	MR_sv(8) = (MR_Word) MR_tbmkword(0, 8);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__prim_data, sym_name);
	MR_GOTO_LAB(f_109_97_107_101_95_95_112_114_111_103_114_97_109_95_116_97_114_103_101_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_107_101_95_108_105_110_107_101_100_95_116_97_114_103_101_116_95_50_95_95_91_50_93_95_48_7_0_i9);
	}
MR_def_label(f_109_97_107_101_95_95_112_114_111_103_114_97_109_95_116_97_114_103_101_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_107_101_95_108_105_110_107_101_100_95_116_97_114_103_101_116_95_50_95_95_91_50_93_95_48_7_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(4);
	MR_sv(7) = MR_r1;
	MR_sv(8) = (MR_Word) MR_tbmkword(0, 9);
	MR_sv(9) = (MR_Word) MR_tbmkword(0, 10);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__prim_data, sym_name);
	MR_GOTO_LAB(f_109_97_107_101_95_95_112_114_111_103_114_97_109_95_116_97_114_103_101_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_107_101_95_108_105_110_107_101_100_95_116_97_114_103_101_116_95_50_95_95_91_50_93_95_48_7_0_i9);
MR_def_label(f_109_97_107_101_95_95_112_114_111_103_114_97_109_95_116_97_114_103_101_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_107_101_95_108_105_110_107_101_100_95_116_97_114_103_101_116_95_50_95_95_91_50_93_95_48_7_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(4);
	MR_sv(7) = MR_r1;
	MR_sv(8) = (MR_Word) MR_tbmkword(0, 11);
	MR_sv(9) = (MR_Word) MR_TAG_COMMON(3,17,2);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__prim_data, sym_name);
	MR_GOTO_LAB(f_109_97_107_101_95_95_112_114_111_103_114_97_109_95_116_97_114_103_101_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_107_101_95_108_105_110_107_101_100_95_116_97_114_103_101_116_95_50_95_95_91_50_93_95_48_7_0_i9);
MR_def_label(f_109_97_107_101_95_95_112_114_111_103_114_97_109_95_116_97_114_103_101_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_107_101_95_108_105_110_107_101_100_95_116_97_114_103_101_116_95_50_95_95_91_50_93_95_48_7_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_sv(8), 2, (MR_Integer) 1);
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_sv(6);
	MR_tfield(2, MR_sv(8), 0) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_sv(9) = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr1, 1) = MR_tempr2;
	MR_r2 = MR_sv(4);
	MR_sv(7) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__prim_data, sym_name);
	MR_GOTO_LAB(f_109_97_107_101_95_95_112_114_111_103_114_97_109_95_116_97_114_103_101_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_107_101_95_108_105_110_107_101_100_95_116_97_114_103_101_116_95_50_95_95_91_50_93_95_48_7_0_i9);
	}
MR_def_label(f_109_97_107_101_95_95_112_114_111_103_114_97_109_95_116_97_114_103_101_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_107_101_95_108_105_110_107_101_100_95_116_97_114_103_101_116_95_50_95_95_91_50_93_95_48_7_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_np_call_localret_ent(fn__make__program_target__this_file_0_0,
		f_109_97_107_101_95_95_112_114_111_103_114_97_109_95_116_97_114_103_101_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_107_101_95_108_105_110_107_101_100_95_116_97_114_103_101_116_95_50_95_95_91_50_93_95_48_7_0_i15);
MR_def_label(f_109_97_107_101_95_95_112_114_111_103_114_97_109_95_116_97_114_103_101_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_107_101_95_108_105_110_107_101_100_95_116_97_114_103_101_116_95_50_95_95_91_50_93_95_48_7_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("mmc --make and target x86_64", 28);
	MR_np_call_localret_ent(libs__compiler_util__sorry_2_0,
		f_109_97_107_101_95_95_112_114_111_103_114_97_109_95_116_97_114_103_101_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_107_101_95_108_105_110_107_101_100_95_116_97_114_103_101_116_95_50_95_95_91_50_93_95_48_7_0_i9);
MR_def_label(f_109_97_107_101_95_95_112_114_111_103_114_97_109_95_116_97_114_103_101_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_107_101_95_108_105_110_107_101_100_95_116_97_114_103_101_116_95_50_95_95_91_50_93_95_48_7_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r2;
	MR_np_call_localret_ent(fn__set__to_sorted_list_1_0,
		f_109_97_107_101_95_95_112_114_111_103_114_97_109_95_116_97_114_103_101_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_107_101_95_108_105_110_107_101_100_95_116_97_114_103_101_116_95_50_95_95_91_50_93_95_48_7_0_i17);
MR_def_label(f_109_97_107_101_95_95_112_114_111_103_114_97_109_95_116_97_114_103_101_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_107_101_95_108_105_110_107_101_100_95_116_97_114_103_101_116_95_50_95_95_91_50_93_95_48_7_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r3 = MR_sv(10);
	MR_np_call_localret_ent(make__program_target__get_target_modules_7_0,
		f_109_97_107_101_95_95_112_114_111_103_114_97_109_95_116_97_114_103_101_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_107_101_95_108_105_110_107_101_100_95_116_97_114_103_101_116_95_50_95_95_91_50_93_95_48_7_0_i18);
MR_def_label(f_109_97_107_101_95_95_112_114_111_103_114_97_109_95_116_97_114_103_101_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_107_101_95_108_105_110_107_101_100_95_116_97_114_103_101_116_95_50_95_95_91_50_93_95_48_7_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(10) = MR_r2;
	MR_r2 = MR_sv(8);
	MR_sv(8) = MR_r1;
	MR_np_call_localret_ent(fn__make__util__make_dependency_list_2_0,
		f_109_97_107_101_95_95_112_114_111_103_114_97_109_95_116_97_114_103_101_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_107_101_95_108_105_110_107_101_100_95_116_97_114_103_101_116_95_50_95_95_91_50_93_95_48_7_0_i19);
MR_def_label(f_109_97_107_101_95_95_112_114_111_103_114_97_109_95_116_97_114_103_101_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_107_101_95_108_105_110_107_101_100_95_116_97_114_103_101_116_95_50_95_95_91_50_93_95_48_7_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(9);
	MR_sv(9) = MR_r1;
	MR_r1 = MR_sv(8);
	MR_np_call_localret_ent(fn__make__util__make_dependency_list_2_0,
		f_109_97_107_101_95_95_112_114_111_103_114_97_109_95_116_97_114_103_101_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_107_101_95_108_105_110_107_101_100_95_116_97_114_103_101_116_95_50_95_95_91_50_93_95_48_7_0_i20);
MR_def_label(f_109_97_107_101_95_95_112_114_111_103_114_97_109_95_116_97_114_103_101_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_107_101_95_108_105_110_107_101_100_95_116_97_114_103_101_116_95_50_95_95_91_50_93_95_48_7_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r5 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(2,14);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(make__program_target__get_foreign_object_targets_7_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(6);
	MR_r7 = MR_sv(10);
	MR_sv(10) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__prim_data, sym_name);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,25);
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(make, make_info);
	MR_r4 = (MR_Word) MR_IO_CTOR_ADDR;
	MR_r6 = MR_sv(8);
	}
	MR_np_call_localret_ent(list__map_foldl2_7_0,
		f_109_97_107_101_95_95_112_114_111_103_114_97_109_95_116_97_114_103_101_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_107_101_95_108_105_110_107_101_100_95_116_97_114_103_101_116_95_50_95_95_91_50_93_95_48_7_0_i21);
MR_def_label(f_109_97_107_101_95_95_112_114_111_103_114_97_109_95_116_97_114_103_101_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_107_101_95_108_105_110_107_101_100_95_116_97_114_103_101_116_95_50_95_95_91_50_93_95_48_7_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(11) = MR_r2;
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(make__dependencies, dependency_file);
	MR_np_call_localret_ent(fn__list__condense_1_0,
		f_109_97_107_101_95_95_112_114_111_103_114_97_109_95_116_97_114_103_101_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_107_101_95_108_105_110_107_101_100_95_116_97_114_103_101_116_95_50_95_95_91_50_93_95_48_7_0_i22);
MR_def_label(f_109_97_107_101_95_95_112_114_111_103_114_97_109_95_116_97_114_103_101_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_107_101_95_108_105_110_107_101_100_95_116_97_114_103_101_116_95_50_95_95_91_50_93_95_48_7_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r6 = MR_sv(9);
	MR_sv(9) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(make__dependencies, dependency_file);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(make, make_info);
	MR_r3 = (MR_Word) MR_IO_CTOR_ADDR;
	MR_r4 = MR_sv(5);
	MR_r5 = (MR_Word) MR_TAG_COMMON(0,3,10);
	MR_r7 = MR_sv(11);
	MR_np_call_localret_ent(make__util__foldl2_maybe_stop_at_error_8_0,
		f_109_97_107_101_95_95_112_114_111_103_114_97_109_95_116_97_114_103_101_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_107_101_95_108_105_110_107_101_100_95_116_97_114_103_101_116_95_50_95_95_91_50_93_95_48_7_0_i23);
MR_def_label(f_109_97_107_101_95_95_112_114_111_103_114_97_109_95_116_97_114_103_101_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_107_101_95_108_105_110_107_101_100_95_116_97_114_103_101_116_95_50_95_95_91_50_93_95_48_7_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(f_109_97_107_101_95_95_112_114_111_103_114_97_109_95_116_97_114_103_101_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_107_101_95_108_105_110_107_101_100_95_116_97_114_103_101_116_95_50_95_95_91_50_93_95_48_7_0_i25);
	}
	MR_r1 = MR_sv(1);
	MR_sv(11) = MR_r2;
	MR_r2 = MR_sv(2);
	MR_sv(5) = (MR_Integer) 0;
	MR_GOTO_LAB(f_109_97_107_101_95_95_112_114_111_103_114_97_109_95_116_97_114_103_101_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_107_101_95_108_105_110_107_101_100_95_116_97_114_103_101_116_95_50_95_95_91_50_93_95_48_7_0_i24);
MR_def_label(f_109_97_107_101_95_95_112_114_111_103_114_97_109_95_116_97_114_103_101_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_107_101_95_108_105_110_107_101_100_95_116_97_114_103_101_116_95_50_95_95_91_50_93_95_48_7_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(make__dependencies, dependency_file);
	MR_r6 = MR_r2;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(make, make_info);
	MR_r3 = MR_sv(5);
	MR_r4 = (MR_Word) MR_TAG_COMMON(0,3,11);
	MR_r5 = MR_sv(10);
	MR_np_call_localret_ent(make__util__foldl2_maybe_stop_at_error_maybe_parallel_8_0,
		f_109_97_107_101_95_95_112_114_111_103_114_97_109_95_116_97_114_103_101_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_107_101_95_108_105_110_107_101_100_95_116_97_114_103_101_116_95_50_95_95_91_50_93_95_48_7_0_i26);
MR_def_label(f_109_97_107_101_95_95_112_114_111_103_114_97_109_95_116_97_114_103_101_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_107_101_95_108_105_110_107_101_100_95_116_97_114_103_101_116_95_50_95_95_91_50_93_95_48_7_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(f_109_97_107_101_95_95_112_114_111_103_114_97_109_95_116_97_114_103_101_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_107_101_95_108_105_110_107_101_100_95_116_97_114_103_101_116_95_50_95_95_91_50_93_95_48_7_0_i28);
	}
	MR_r1 = MR_sv(1);
	MR_sv(11) = MR_r2;
	MR_r2 = MR_sv(2);
	MR_sv(5) = (MR_Integer) 0;
	MR_GOTO_LAB(f_109_97_107_101_95_95_112_114_111_103_114_97_109_95_116_97_114_103_101_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_107_101_95_108_105_110_107_101_100_95_116_97_114_103_101_116_95_50_95_95_91_50_93_95_48_7_0_i24);
MR_def_label(f_109_97_107_101_95_95_112_114_111_103_114_97_109_95_116_97_114_103_101_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_107_101_95_108_105_110_107_101_100_95_116_97_114_103_101_116_95_50_95_95_91_50_93_95_48_7_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(make__dependencies, dependency_file);
	MR_r7 = MR_r2;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(make, make_info);
	MR_r3 = (MR_Word) MR_IO_CTOR_ADDR;
	MR_r4 = MR_sv(5);
	MR_r5 = (MR_Word) MR_TAG_COMMON(0,3,12);
	MR_r6 = MR_sv(9);
	MR_np_call_localret_ent(make__util__foldl2_maybe_stop_at_error_8_0,
		f_109_97_107_101_95_95_112_114_111_103_114_97_109_95_116_97_114_103_101_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_107_101_95_108_105_110_107_101_100_95_116_97_114_103_101_116_95_50_95_95_91_50_93_95_48_7_0_i29);
MR_def_label(f_109_97_107_101_95_95_112_114_111_103_114_97_109_95_116_97_114_103_101_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_107_101_95_108_105_110_107_101_100_95_116_97_114_103_101_116_95_50_95_95_91_50_93_95_48_7_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(11) = MR_r2;
	MR_r2 = MR_sv(2);
MR_def_label(f_109_97_107_101_95_95_112_114_111_103_114_97_109_95_116_97_114_103_101_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_107_101_95_108_105_110_107_101_100_95_116_97_114_103_101_116_95_50_95_95_91_50_93_95_48_7_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_np_call_localret_ent(make__util__linked_target_file_name_5_0,
		f_109_97_107_101_95_95_112_114_111_103_114_97_109_95_116_97_114_103_101_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_107_101_95_108_105_110_107_101_100_95_116_97_114_103_101_116_95_50_95_95_91_50_93_95_48_7_0_i30);
MR_def_label(f_109_97_107_101_95_95_112_114_111_103_114_97_109_95_116_97_114_103_101_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_107_101_95_108_105_110_107_101_100_95_116_97_114_103_101_116_95_50_95_95_91_50_93_95_48_7_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_r1;
	MR_np_call_localret_ent(fn__dir__this_directory_0_0,
		f_109_97_107_101_95_95_112_114_111_103_114_97_109_95_116_97_114_103_101_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_107_101_95_108_105_110_107_101_100_95_116_97_114_103_101_116_95_50_95_95_91_50_93_95_48_7_0_i31);
MR_def_label(f_109_97_107_101_95_95_112_114_111_103_114_97_109_95_116_97_114_103_101_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_107_101_95_108_105_110_107_101_100_95_116_97_114_103_101_116_95_50_95_95_91_50_93_95_48_7_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(9);
	MR_r3 = MR_sv(11);
	}
	MR_np_call_localret_ent(make__util__get_file_timestamp_7_0,
		f_109_97_107_101_95_95_112_114_111_103_114_97_109_95_116_97_114_103_101_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_107_101_95_108_105_110_107_101_100_95_116_97_114_103_101_116_95_50_95_95_91_50_93_95_48_7_0_i32);
MR_def_label(f_109_97_107_101_95_95_112_114_111_103_114_97_109_95_116_97_114_103_101_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_107_101_95_108_105_110_107_101_100_95_116_97_114_103_101_116_95_50_95_95_91_50_93_95_48_7_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(5);
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(9);
	MR_r5 = MR_r2;
	MR_r2 = MR_sv(5);
	MR_r4 = MR_sv(10);
	MR_np_call_localret_ent(make__dependencies__check_dependencies_9_0,
		f_109_97_107_101_95_95_112_114_111_103_114_97_109_95_116_97_114_103_101_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_107_101_95_108_105_110_107_101_100_95_116_97_114_103_101_116_95_50_95_95_91_50_93_95_48_7_0_i33);
MR_def_label(f_109_97_107_101_95_95_112_114_111_103_114_97_109_95_116_97_114_103_101_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_107_101_95_108_105_110_107_101_100_95_116_97_114_103_101_116_95_50_95_95_91_50_93_95_48_7_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(3),1)) {
		MR_GOTO_LAB(f_109_97_107_101_95_95_112_114_111_103_114_97_109_95_116_97_114_103_101_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_107_101_95_108_105_110_107_101_100_95_116_97_114_103_101_116_95_50_95_95_91_50_93_95_48_7_0_i34);
	}
	if (MR_INT_EQ(MR_r1,2)) {
		MR_GOTO_LAB(f_109_97_107_101_95_95_112_114_111_103_114_97_109_95_116_97_114_103_101_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_107_101_95_108_105_110_107_101_100_95_116_97_114_103_101_116_95_50_95_95_91_50_93_95_48_7_0_i34);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6, MR_tempr7;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 13);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(18,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(make__program_target__build_linked_target_16_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 10;
	MR_tempr4 = MR_sv(1);
	MR_tfield(0, MR_tempr1, 3) = MR_tempr4;
	MR_tempr5 = MR_sv(2);
	MR_tfield(0, MR_tempr1, 4) = MR_tempr5;
	MR_tempr6 = MR_sv(9);
	MR_tfield(0, MR_tempr1, 5) = MR_tempr6;
	MR_tfield(0, MR_tempr1, 6) = MR_sv(5);
	MR_tfield(0, MR_tempr1, 7) = MR_sv(4);
	MR_tfield(0, MR_tempr1, 8) = MR_sv(8);
	MR_tempr7 = MR_sv(7);
	MR_tfield(0, MR_tempr1, 9) = MR_tempr7;
	MR_tfield(0, MR_tempr1, 10) = MR_sv(6);
	MR_tfield(0, MR_tempr1, 11) = MR_sv(3);
	MR_tfield(0, MR_tempr1, 12) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 5);
	MR_tfield(0, MR_tempr2, 0) = (MR_Word) MR_COMMON(2,15);
	MR_tfield(0, MR_tempr2, 1) = (MR_Word) MR_ENTRY_AP(make__util__build_with_output_redirect_7_0);
	MR_tfield(0, MR_tempr2, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr2, 3) = MR_tempr4;
	MR_tfield(0, MR_tempr2, 4) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr3, 0, (MR_Integer) 7);
	MR_tfield(0, MR_tempr3, 0) = (MR_Word) MR_COMMON(11,2);
	MR_tfield(0, MR_tempr3, 1) = (MR_Word) MR_ENTRY_AP(make__program_target__linked_target_cleanup_8_0);
	MR_tfield(0, MR_tempr3, 2) = (MR_Integer) 4;
	MR_tfield(0, MR_tempr3, 3) = MR_tempr4;
	MR_tfield(0, MR_tempr3, 4) = MR_tempr5;
	MR_tfield(0, MR_tempr3, 5) = MR_tempr6;
	MR_tfield(0, MR_tempr3, 6) = MR_tempr7;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(make, make_info);
	MR_r4 = MR_r2;
	MR_r2 = MR_tempr2;
	MR_r3 = MR_tempr3;
	MR_succip_word = MR_sv(12);
	MR_decr_sp(12);
	MR_np_tailcall_ent(libs__process_util__build_with_check_for_interrupt_7_0);
	}
MR_def_label(f_109_97_107_101_95_95_112_114_111_103_114_97_109_95_116_97_114_103_101_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_107_101_95_108_105_110_107_101_100_95_116_97_114_103_101_116_95_50_95_95_91_50_93_95_48_7_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(12);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(backend_libs__compile_target_code__shared_libraries_supported_3_0);
MR_decl_entry(backend_libs__compile_target_code__make_init_file_6_0);

MR_BEGIN_MODULE(make__program_target_module56)
	MR_init_entry1(f_109_97_107_101_95_95_112_114_111_103_114_97_109_95_116_97_114_103_101_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_107_101_95_109_105_115_99_95_116_97_114_103_101_116_95_98_117_105_108_100_101_114_95_95_91_50_93_95_48_7_0);
	MR_init_label8(f_109_97_107_101_95_95_112_114_111_103_114_97_109_95_116_97_114_103_101_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_107_101_95_109_105_115_99_95_116_97_114_103_101_116_95_98_117_105_108_100_101_114_95_95_91_50_93_95_48_7_0,4,3,2,6,7,8,12,13)
	MR_init_label8(f_109_97_107_101_95_95_112_114_111_103_114_97_109_95_116_97_114_103_101_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_107_101_95_109_105_115_99_95_116_97_114_103_101_116_95_98_117_105_108_100_101_114_95_95_91_50_93_95_48_7_0,15,16,17,18,20,21,22,23)
	MR_init_label8(f_109_97_107_101_95_95_112_114_111_103_114_97_109_95_116_97_114_103_101_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_107_101_95_109_105_115_99_95_116_97_114_103_101_116_95_98_117_105_108_100_101_114_95_95_91_50_93_95_48_7_0,25,26,27,28,30,31,32,34)
	MR_init_label8(f_109_97_107_101_95_95_112_114_111_103_114_97_109_95_116_97_114_103_101_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_107_101_95_109_105_115_99_95_116_97_114_103_101_116_95_98_117_105_108_100_101_114_95_95_91_50_93_95_48_7_0,36,39,41,42,44,45,47,49)
	MR_init_label8(f_109_97_107_101_95_95_112_114_111_103_114_97_109_95_116_97_114_103_101_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_107_101_95_109_105_115_99_95_116_97_114_103_101_116_95_98_117_105_108_100_101_114_95_95_91_50_93_95_48_7_0,50,51,52,55,56,11,59,60)
	MR_init_label4(f_109_97_107_101_95_95_112_114_111_103_114_97_109_95_116_97_114_103_101_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_107_101_95_109_105_115_99_95_116_97_114_103_101_116_95_98_117_105_108_100_101_114_95_95_91_50_93_95_48_7_0,61,64,65,66)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(f_109_97_107_101_95_95_112_114_111_103_114_97_109_95_116_97_114_103_101_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_107_101_95_109_105_115_99_95_116_97_114_103_101_116_95_98_117_105_108_100_101_114_95_95_91_50_93_95_48_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(3) = MR_ctfield(0, MR_r2, 7);
	MR_sv(2) = MR_ctfield(0, MR_r1, 1);
	MR_r4 = MR_ctfield(0, MR_r1, 0);
	if (MR_LTAGS_TESTR(MR_sv(2),0,0)) {
		MR_GOTO_LAB(f_109_97_107_101_95_95_112_114_111_103_114_97_109_95_116_97_114_103_101_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_107_101_95_109_105_115_99_95_116_97_114_103_101_116_95_98_117_105_108_100_101_114_95_95_91_50_93_95_48_7_0_i4);
	}
	MR_r1 = MR_r4;
	MR_GOTO_LAB(f_109_97_107_101_95_95_112_114_111_103_114_97_109_95_116_97_114_103_101_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_107_101_95_109_105_115_99_95_116_97_114_103_101_116_95_98_117_105_108_100_101_114_95_95_91_50_93_95_48_7_0_i3);
MR_def_label(f_109_97_107_101_95_95_112_114_111_103_114_97_109_95_116_97_114_103_101_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_107_101_95_109_105_115_99_95_116_97_114_103_101_116_95_98_117_105_108_100_101_114_95_95_91_50_93_95_48_7_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,1)) {
		MR_GOTO_LAB(f_109_97_107_101_95_95_112_114_111_103_114_97_109_95_116_97_114_103_101_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_107_101_95_109_105_115_99_95_116_97_114_103_101_116_95_98_117_105_108_100_101_114_95_95_91_50_93_95_48_7_0_i2);
	}
	MR_r1 = MR_r4;
MR_def_label(f_109_97_107_101_95_95_112_114_111_103_114_97_109_95_116_97_114_103_101_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_107_101_95_109_105_115_99_95_116_97_114_103_101_116_95_98_117_105_108_100_101_114_95_95_91_50_93_95_48_7_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 13);
	MR_r4 = MR_tempr1;
	MR_tempr2 = MR_r2;
	MR_tfield(0, MR_tempr1, 0) = MR_ctfield(0, MR_tempr2, 0);
	MR_tfield(0, MR_tempr1, 1) = MR_ctfield(0, MR_tempr2, 1);
	MR_tfield(0, MR_tempr1, 2) = MR_ctfield(0, MR_tempr2, 2);
	MR_tfield(0, MR_tempr1, 3) = MR_ctfield(0, MR_tempr2, 3);
	MR_tfield(0, MR_tempr1, 4) = MR_ctfield(0, MR_tempr2, 4);
	MR_tfield(0, MR_tempr1, 5) = MR_ctfield(0, MR_tempr2, 5);
	MR_tfield(0, MR_tempr1, 6) = MR_ctfield(0, MR_tempr2, 6);
	MR_tfield(0, MR_tempr1, 7) = (MR_Integer) 0;
	MR_tfield(0, MR_tempr1, 8) = MR_ctfield(0, MR_tempr2, 8);
	MR_tfield(0, MR_tempr1, 9) = MR_ctfield(0, MR_tempr2, 9);
	MR_tfield(0, MR_tempr1, 10) = MR_ctfield(0, MR_tempr2, 10);
	MR_tfield(0, MR_tempr1, 11) = MR_ctfield(0, MR_tempr2, 11);
	MR_tfield(0, MR_tempr1, 12) = MR_ctfield(0, MR_tempr2, 12);
	MR_r2 = MR_tempr1;
	MR_GOTO_LAB(f_109_97_107_101_95_95_112_114_111_103_114_97_109_95_116_97_114_103_101_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_107_101_95_109_105_115_99_95_116_97_114_103_101_116_95_98_117_105_108_100_101_114_95_95_91_50_93_95_48_7_0_i6);
	}
MR_def_label(f_109_97_107_101_95_95_112_114_111_103_114_97_109_95_116_97_114_103_101_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_107_101_95_109_105_115_99_95_116_97_114_103_101_116_95_98_117_105_108_100_101_114_95_95_91_50_93_95_48_7_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r4;
MR_def_label(f_109_97_107_101_95_95_112_114_111_103_114_97_109_95_116_97_114_103_101_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_107_101_95_109_105_115_99_95_116_97_114_103_101_116_95_98_117_105_108_100_101_114_95_95_91_50_93_95_48_7_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(make__dependencies__find_reachable_local_modules_7_0,
		f_109_97_107_101_95_95_112_114_111_103_114_97_109_95_116_97_114_103_101_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_107_101_95_109_105_115_99_95_116_97_114_103_101_116_95_98_117_105_108_100_101_114_95_95_91_50_93_95_48_7_0_i7);
MR_def_label(f_109_97_107_101_95_95_112_114_111_103_114_97_109_95_116_97_114_103_101_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_107_101_95_109_105_115_99_95_116_97_114_103_101_116_95_98_117_105_108_100_101_114_95_95_91_50_93_95_48_7_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 13);
	MR_sv(6) = MR_tempr1;
	MR_tempr2 = MR_r3;
	MR_tfield(0, MR_tempr1, 0) = MR_ctfield(0, MR_tempr2, 0);
	MR_tfield(0, MR_tempr1, 1) = MR_ctfield(0, MR_tempr2, 1);
	MR_tfield(0, MR_tempr1, 2) = MR_ctfield(0, MR_tempr2, 2);
	MR_tfield(0, MR_tempr1, 3) = MR_ctfield(0, MR_tempr2, 3);
	MR_tfield(0, MR_tempr1, 4) = MR_ctfield(0, MR_tempr2, 4);
	MR_tfield(0, MR_tempr1, 5) = MR_ctfield(0, MR_tempr2, 5);
	MR_tfield(0, MR_tempr1, 6) = MR_ctfield(0, MR_tempr2, 6);
	MR_tfield(0, MR_tempr1, 7) = MR_sv(3);
	MR_tfield(0, MR_tempr1, 8) = MR_ctfield(0, MR_tempr2, 8);
	MR_tfield(0, MR_tempr1, 9) = MR_ctfield(0, MR_tempr2, 9);
	MR_tfield(0, MR_tempr1, 10) = MR_ctfield(0, MR_tempr2, 10);
	MR_tfield(0, MR_tempr1, 11) = MR_ctfield(0, MR_tempr2, 11);
	MR_tfield(0, MR_tempr1, 12) = MR_ctfield(0, MR_tempr2, 12);
	MR_sv(3) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__prim_data, sym_name);
	}
	MR_np_call_localret_ent(fn__set__to_sorted_list_1_0,
		f_109_97_107_101_95_95_112_114_111_103_114_97_109_95_116_97_114_103_101_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_107_101_95_109_105_115_99_95_116_97_114_103_101_116_95_98_117_105_108_100_101_114_95_95_91_50_93_95_48_7_0_i8);
MR_def_label(f_109_97_107_101_95_95_112_114_111_103_114_97_109_95_116_97_114_103_101_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_107_101_95_109_105_115_99_95_116_97_114_103_101_116_95_98_117_105_108_100_101_114_95_95_91_50_93_95_48_7_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_r5 = MR_tempr1;
	if (MR_PTAG_TESTR(MR_tempr1,0)) {
		MR_GOTO_LAB(f_109_97_107_101_95_95_112_114_111_103_114_97_109_95_116_97_114_103_101_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_107_101_95_109_105_115_99_95_116_97_114_103_101_116_95_98_117_105_108_100_101_114_95_95_91_50_93_95_48_7_0_i11);
	}
	MR_COMPUTED_GOTO((MR_Unsigned) MR_unmkbody(MR_tempr1),
		MR_LABEL_AP(f_109_97_107_101_95_95_112_114_111_103_114_97_109_95_116_97_114_103_101_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_107_101_95_109_105_115_99_95_116_97_114_103_101_116_95_98_117_105_108_100_101_114_95_95_91_50_93_95_48_7_0_i12) MR_AND
		MR_LABEL_AP(f_109_97_107_101_95_95_112_114_111_103_114_97_109_95_116_97_114_103_101_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_107_101_95_109_105_115_99_95_116_97_114_103_101_116_95_98_117_105_108_100_101_114_95_95_91_50_93_95_48_7_0_i15) MR_AND
		MR_LABEL_AP(f_109_97_107_101_95_95_112_114_111_103_114_97_109_95_116_97_114_103_101_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_107_101_95_109_105_115_99_95_116_97_114_103_101_116_95_98_117_105_108_100_101_114_95_95_91_50_93_95_48_7_0_i18) MR_AND
		MR_LABEL_AP(f_109_97_107_101_95_95_112_114_111_103_114_97_109_95_116_97_114_103_101_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_107_101_95_109_105_115_99_95_116_97_114_103_101_116_95_98_117_105_108_100_101_114_95_95_91_50_93_95_48_7_0_i20) MR_AND
		MR_LABEL_AP(f_109_97_107_101_95_95_112_114_111_103_114_97_109_95_116_97_114_103_101_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_107_101_95_109_105_115_99_95_116_97_114_103_101_116_95_98_117_105_108_100_101_114_95_95_91_50_93_95_48_7_0_i44) MR_AND
		MR_LABEL_AP(f_109_97_107_101_95_95_112_114_111_103_114_97_109_95_116_97_114_103_101_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_107_101_95_109_105_115_99_95_116_97_114_103_101_116_95_98_117_105_108_100_101_114_95_95_91_50_93_95_48_7_0_i49));
	}
MR_def_label(f_109_97_107_101_95_95_112_114_111_103_114_97_109_95_116_97_114_103_101_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_107_101_95_109_105_115_99_95_116_97_114_103_101_116_95_98_117_105_108_100_101_114_95_95_91_50_93_95_48_7_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r5 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__prim_data, sym_name);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(make, make_info);
	MR_r3 = (MR_Word) MR_IO_CTOR_ADDR;
	MR_r4 = (MR_Word) MR_TAG_COMMON(0,3,13);
	MR_r6 = MR_sv(6);
	MR_np_call_localret_ent(list__foldl2_6_5,
		f_109_97_107_101_95_95_112_114_111_103_114_97_109_95_116_97_114_103_101_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_107_101_95_109_105_115_99_95_116_97_114_103_101_116_95_98_117_105_108_100_101_114_95_95_91_50_93_95_48_7_0_i13);
MR_def_label(f_109_97_107_101_95_95_112_114_111_103_114_97_109_95_116_97_114_103_101_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_107_101_95_109_105_115_99_95_116_97_114_103_101_116_95_98_117_105_108_100_101_114_95_95_91_50_93_95_48_7_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(make__program_target__remove_init_files_5_0,
		f_109_97_107_101_95_95_112_114_111_103_114_97_109_95_116_97_114_103_101_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_107_101_95_109_105_115_99_95_116_97_114_103_101_116_95_98_117_105_108_100_101_114_95_95_91_50_93_95_48_7_0_i17);
MR_def_label(f_109_97_107_101_95_95_112_114_111_103_114_97_109_95_116_97_114_103_101_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_107_101_95_109_105_115_99_95_116_97_114_103_101_116_95_98_117_105_108_100_101_114_95_95_91_50_93_95_48_7_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(6);
	MR_np_call_localret_ent(make__program_target__make_main_module_realclean_5_0,
		f_109_97_107_101_95_95_112_114_111_103_114_97_109_95_116_97_114_103_101_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_107_101_95_109_105_115_99_95_116_97_114_103_101_116_95_98_117_105_108_100_101_114_95_95_91_50_93_95_48_7_0_i16);
MR_def_label(f_109_97_107_101_95_95_112_114_111_103_114_97_109_95_116_97_114_103_101_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_107_101_95_109_105_115_99_95_116_97_114_103_101_116_95_98_117_105_108_100_101_114_95_95_91_50_93_95_48_7_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r6 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__prim_data, sym_name);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(make, make_info);
	MR_r3 = (MR_Word) MR_IO_CTOR_ADDR;
	MR_r4 = (MR_Word) MR_TAG_COMMON(0,3,14);
	MR_r5 = MR_sv(2);
	MR_np_call_localret_ent(list__foldl2_6_5,
		f_109_97_107_101_95_95_112_114_111_103_114_97_109_95_116_97_114_103_101_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_107_101_95_109_105_115_99_95_116_97_114_103_101_116_95_98_117_105_108_100_101_114_95_95_91_50_93_95_48_7_0_i17);
MR_def_label(f_109_97_107_101_95_95_112_114_111_103_114_97_109_95_116_97_114_103_101_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_107_101_95_109_105_115_99_95_116_97_114_103_101_116_95_98_117_105_108_100_101_114_95_95_91_50_93_95_48_7_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(7);
MR_def_label(f_109_97_107_101_95_95_112_114_111_103_114_97_109_95_116_97_114_103_101_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_107_101_95_109_105_115_99_95_116_97_114_103_101_116_95_98_117_105_108_100_101_114_95_95_91_50_93_95_48_7_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(6);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(make__program_target__build_analysis_files_8_0);
MR_def_label(f_109_97_107_101_95_95_112_114_111_103_114_97_109_95_116_97_114_103_101_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_107_101_95_109_105_115_99_95_116_97_114_103_101_116_95_98_117_105_108_100_101_114_95_95_91_50_93_95_48_7_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r2 = (MR_Word) MR_tbmkword(0, 5);
	MR_np_call_localret_ent(fn__make__util__make_dependency_list_2_0,
		f_109_97_107_101_95_95_112_114_111_103_114_97_109_95_116_97_114_103_101_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_107_101_95_109_105_115_99_95_116_97_114_103_101_116_95_98_117_105_108_100_101_114_95_95_91_50_93_95_48_7_0_i21);
MR_def_label(f_109_97_107_101_95_95_112_114_111_103_114_97_109_95_116_97_114_103_101_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_107_101_95_109_105_115_99_95_116_97_114_103_101_116_95_98_117_105_108_100_101_114_95_95_91_50_93_95_48_7_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = (MR_Word) MR_tbmkword(0, 3);
	MR_np_call_localret_ent(fn__make__util__make_dependency_list_2_0,
		f_109_97_107_101_95_95_112_114_111_103_114_97_109_95_116_97_114_103_101_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_107_101_95_109_105_115_99_95_116_97_114_103_101_116_95_98_117_105_108_100_101_114_95_95_91_50_93_95_48_7_0_i22);
MR_def_label(f_109_97_107_101_95_95_112_114_111_103_114_97_109_95_116_97_114_103_101_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_107_101_95_109_105_115_99_95_116_97_114_103_101_116_95_98_117_105_108_100_101_114_95_95_91_50_93_95_48_7_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = (MR_Integer) 247;
	MR_np_call_localret_ent(libs__globals__io_lookup_bool_option_4_0,
		f_109_97_107_101_95_95_112_114_111_103_114_97_109_95_116_97_114_103_101_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_107_101_95_109_105_115_99_95_116_97_114_103_101_116_95_98_117_105_108_100_101_114_95_95_91_50_93_95_48_7_0_i23);
MR_def_label(f_109_97_107_101_95_95_112_114_111_103_114_97_109_95_116_97_114_103_101_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_107_101_95_109_105_115_99_95_116_97_114_103_101_116_95_98_117_105_108_100_101_114_95_95_91_50_93_95_48_7_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(f_109_97_107_101_95_95_112_114_111_103_114_97_109_95_116_97_114_103_101_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_107_101_95_109_105_115_99_95_116_97_114_103_101_116_95_98_117_105_108_100_101_114_95_95_91_50_93_95_48_7_0_i25);
	}
	MR_sv(5) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = (MR_Integer) 493;
	MR_np_call_localret_ent(libs__globals__io_lookup_bool_option_4_0,
		f_109_97_107_101_95_95_112_114_111_103_114_97_109_95_116_97_114_103_101_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_107_101_95_109_105_115_99_95_116_97_114_103_101_116_95_98_117_105_108_100_101_114_95_95_91_50_93_95_48_7_0_i27);
MR_def_label(f_109_97_107_101_95_95_112_114_111_103_114_97_109_95_116_97_114_103_101_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_107_101_95_109_105_115_99_95_116_97_114_103_101_116_95_98_117_105_108_100_101_114_95_95_91_50_93_95_48_7_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_r2 = (MR_Word) MR_tbmkword(0, 6);
	MR_np_call_localret_ent(fn__make__util__make_dependency_list_2_0,
		f_109_97_107_101_95_95_112_114_111_103_114_97_109_95_116_97_114_103_101_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_107_101_95_109_105_115_99_95_116_97_114_103_101_116_95_98_117_105_108_100_101_114_95_95_91_50_93_95_48_7_0_i26);
MR_def_label(f_109_97_107_101_95_95_112_114_111_103_114_97_109_95_116_97_114_103_101_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_107_101_95_109_105_115_99_95_116_97_114_103_101_116_95_98_117_105_108_100_101_114_95_95_91_50_93_95_48_7_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = (MR_Integer) 493;
	MR_np_call_localret_ent(libs__globals__io_lookup_bool_option_4_0,
		f_109_97_107_101_95_95_112_114_111_103_114_97_109_95_116_97_114_103_101_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_107_101_95_109_105_115_99_95_116_97_114_103_101_116_95_98_117_105_108_100_101_114_95_95_91_50_93_95_48_7_0_i27);
MR_def_label(f_109_97_107_101_95_95_112_114_111_103_114_97_109_95_116_97_114_103_101_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_107_101_95_109_105_115_99_95_116_97_114_103_101_116_95_98_117_105_108_100_101_114_95_95_91_50_93_95_48_7_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_r5 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(11,3);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(make__program_target__IntroducedFrom__pred__make_misc_target_builder__598__1_8_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr1, 3) = (MR_Word) MR_TAG_COMMON(0,3,15);
	MR_tfield(0, MR_tempr1, 4) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(5);
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_sv(4);
	MR_tfield(1, MR_tempr3, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 2);
	MR_r6 = MR_tempr4;
	MR_tfield(1, MR_tempr4, 0) = MR_sv(3);
	MR_tfield(1, MR_tempr4, 1) = MR_tempr3;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,1,25);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(make, make_info);
	MR_r3 = (MR_Word) MR_IO_CTOR_ADDR;
	MR_r4 = MR_ctfield(0, MR_tempr1, 4);
	MR_r7 = MR_sv(6);
	}
	MR_np_call_localret_ent(make__util__foldl2_maybe_stop_at_error_8_0,
		f_109_97_107_101_95_95_112_114_111_103_114_97_109_95_116_97_114_103_101_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_107_101_95_109_105_115_99_95_116_97_114_103_101_116_95_98_117_105_108_100_101_114_95_95_91_50_93_95_48_7_0_i28);
MR_def_label(f_109_97_107_101_95_95_112_114_111_103_114_97_109_95_116_97_114_103_101_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_107_101_95_109_105_115_99_95_116_97_114_103_101_116_95_98_117_105_108_100_101_114_95_95_91_50_93_95_48_7_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(f_109_97_107_101_95_95_112_114_111_103_114_97_109_95_116_97_114_103_101_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_107_101_95_109_105_115_99_95_116_97_114_103_101_116_95_98_117_105_108_100_101_114_95_95_91_50_93_95_48_7_0_i30);
	}
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(7);
MR_def_label(f_109_97_107_101_95_95_112_114_111_103_114_97_109_95_116_97_114_103_101_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_107_101_95_109_105_115_99_95_116_97_114_103_101_116_95_98_117_105_108_100_101_114_95_95_91_50_93_95_48_7_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r1, 0) = MR_sv(1);
	MR_tfield(0, MR_r1, 1) = (MR_Integer) 1;
	MR_np_call_localret_ent(make__program_target__make_linked_target_6_0,
		f_109_97_107_101_95_95_112_114_111_103_114_97_109_95_116_97_114_103_101_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_107_101_95_109_105_115_99_95_116_97_114_103_101_116_95_98_117_105_108_100_101_114_95_95_91_50_93_95_48_7_0_i31);
MR_def_label(f_109_97_107_101_95_95_112_114_111_103_114_97_109_95_116_97_114_103_101_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_107_101_95_109_105_115_99_95_116_97_114_103_101_116_95_98_117_105_108_100_101_114_95_95_91_50_93_95_48_7_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_sv(4) = MR_r2;
	MR_np_call_localret_ent(backend_libs__compile_target_code__shared_libraries_supported_3_0,
		f_109_97_107_101_95_95_112_114_111_103_114_97_109_95_116_97_114_103_101_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_107_101_95_109_105_115_99_95_116_97_114_103_101_116_95_98_117_105_108_100_101_114_95_95_91_50_93_95_48_7_0_i32);
MR_def_label(f_109_97_107_101_95_95_112_114_111_103_114_97_109_95_116_97_114_103_101_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_107_101_95_109_105_115_99_95_116_97_114_103_101_116_95_98_117_105_108_100_101_114_95_95_91_50_93_95_48_7_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(3),0)) {
		MR_GOTO_LAB(f_109_97_107_101_95_95_112_114_111_103_114_97_109_95_116_97_114_103_101_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_107_101_95_109_105_115_99_95_116_97_114_103_101_116_95_98_117_105_108_100_101_114_95_95_91_50_93_95_48_7_0_i34);
	}
	MR_r1 = (MR_Integer) 0;
	MR_r2 = MR_sv(4);
	MR_decr_sp_and_return(7);
MR_def_label(f_109_97_107_101_95_95_112_114_111_103_114_97_109_95_116_97_114_103_101_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_107_101_95_109_105_115_99_95_116_97_114_103_101_116_95_98_117_105_108_100_101_114_95_95_91_50_93_95_48_7_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(f_109_97_107_101_95_95_112_114_111_103_114_97_109_95_116_97_114_103_101_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_107_101_95_109_105_115_99_95_116_97_114_103_101_116_95_98_117_105_108_100_101_114_95_95_91_50_93_95_48_7_0_i36);
	}
	MR_sv(3) = MR_sv(4);
	MR_np_call_localret_ent(io__output_stream_3_0,
		f_109_97_107_101_95_95_112_114_111_103_114_97_109_95_116_97_114_103_101_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_107_101_95_109_105_115_99_95_116_97_114_103_101_116_95_98_117_105_108_100_101_114_95_95_91_50_93_95_48_7_0_i42);
MR_def_label(f_109_97_107_101_95_95_112_114_111_103_114_97_109_95_116_97_114_103_101_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_107_101_95_109_105_115_99_95_116_97_114_103_101_116_95_98_117_105_108_100_101_114_95_95_91_50_93_95_48_7_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r1, 0) = MR_sv(1);
	MR_tfield(0, MR_r1, 1) = (MR_Integer) 2;
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(make__program_target__make_linked_target_6_0,
		f_109_97_107_101_95_95_112_114_111_103_114_97_109_95_116_97_114_103_101_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_107_101_95_109_105_115_99_95_116_97_114_103_101_116_95_98_117_105_108_100_101_114_95_95_91_50_93_95_48_7_0_i39);
MR_def_label(f_109_97_107_101_95_95_112_114_111_103_114_97_109_95_116_97_114_103_101_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_107_101_95_109_105_115_99_95_116_97_114_103_101_116_95_98_117_105_108_100_101_114_95_95_91_50_93_95_48_7_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(f_109_97_107_101_95_95_112_114_111_103_114_97_109_95_116_97_114_103_101_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_107_101_95_109_105_115_99_95_116_97_114_103_101_116_95_98_117_105_108_100_101_114_95_95_91_50_93_95_48_7_0_i41);
	}
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(7);
MR_def_label(f_109_97_107_101_95_95_112_114_111_103_114_97_109_95_116_97_114_103_101_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_107_101_95_109_105_115_99_95_116_97_114_103_101_116_95_98_117_105_108_100_101_114_95_95_91_50_93_95_48_7_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r2;
	MR_np_call_localret_ent(io__output_stream_3_0,
		f_109_97_107_101_95_95_112_114_111_103_114_97_109_95_116_97_114_103_101_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_107_101_95_109_105_115_99_95_116_97_114_103_101_116_95_98_117_105_108_100_101_114_95_95_91_50_93_95_48_7_0_i42);
MR_def_label(f_109_97_107_101_95_95_112_114_111_103_114_97_109_95_116_97_114_103_101_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_107_101_95_109_105_115_99_95_116_97_114_103_101_116_95_98_117_105_108_100_101_114_95_95_91_50_93_95_48_7_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_np_call_localret_ent(backend_libs__compile_target_code__make_init_file_6_0,
		f_109_97_107_101_95_95_112_114_111_103_114_97_109_95_116_97_114_103_101_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_107_101_95_109_105_115_99_95_116_97_114_103_101_116_95_98_117_105_108_100_101_114_95_95_91_50_93_95_48_7_0_i66);
MR_def_label(f_109_97_107_101_95_95_112_114_111_103_114_97_109_95_116_97_114_103_101_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_107_101_95_109_105_115_99_95_116_97_114_103_101_116_95_98_117_105_108_100_101_114_95_95_91_50_93_95_48_7_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r1, 0) = MR_sv(1);
	MR_tfield(0, MR_r1, 1) = (MR_Word) MR_tbmkword(0, 3);
	MR_r2 = MR_sv(6);
	MR_np_call_localret_ent(make__program_target__make_misc_target_6_0,
		f_109_97_107_101_95_95_112_114_111_103_114_97_109_95_116_97_114_103_101_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_107_101_95_109_105_115_99_95_116_97_114_103_101_116_95_98_117_105_108_100_101_114_95_95_91_50_93_95_48_7_0_i45);
MR_def_label(f_109_97_107_101_95_95_112_114_111_103_114_97_109_95_116_97_114_103_101_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_107_101_95_109_105_115_99_95_116_97_114_103_101_116_95_98_117_105_108_100_101_114_95_95_91_50_93_95_48_7_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(f_109_97_107_101_95_95_112_114_111_103_114_97_109_95_116_97_114_103_101_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_107_101_95_109_105_115_99_95_116_97_114_103_101_116_95_98_117_105_108_100_101_114_95_95_91_50_93_95_48_7_0_i47);
	}
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(7);
MR_def_label(f_109_97_107_101_95_95_112_114_111_103_114_97_109_95_116_97_114_103_101_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_107_101_95_109_105_115_99_95_116_97_114_103_101_116_95_98_117_105_108_100_101_114_95_95_91_50_93_95_48_7_0,47)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(make__program_target__install_library_6_0);
MR_def_label(f_109_97_107_101_95_95_112_114_111_103_114_97_109_95_116_97_114_103_101_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_107_101_95_109_105_115_99_95_116_97_114_103_101_116_95_98_117_105_108_100_101_114_95_95_91_50_93_95_48_7_0,49)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_tbmkword(0, 12);
	MR_r3 = MR_sv(6);
	MR_np_call_localret_ent(make__program_target__get_target_modules_7_0,
		f_109_97_107_101_95_95_112_114_111_103_114_97_109_95_116_97_114_103_101_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_107_101_95_109_105_115_99_95_116_97_114_103_101_116_95_98_117_105_108_100_101_114_95_95_91_50_93_95_48_7_0_i50);
MR_def_label(f_109_97_107_101_95_95_112_114_111_103_114_97_109_95_116_97_114_103_101_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_107_101_95_109_105_115_99_95_116_97_114_103_101_116_95_98_117_105_108_100_101_114_95_95_91_50_93_95_48_7_0,50)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_r1 = (MR_Integer) 493;
	MR_np_call_localret_ent(libs__globals__io_lookup_bool_option_4_0,
		f_109_97_107_101_95_95_112_114_111_103_114_97_109_95_116_97_114_103_101_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_107_101_95_109_105_115_99_95_116_97_114_103_101_116_95_98_117_105_108_100_101_114_95_95_91_50_93_95_48_7_0_i51);
MR_def_label(f_109_97_107_101_95_95_112_114_111_103_114_97_109_95_116_97_114_103_101_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_107_101_95_109_105_115_99_95_116_97_114_103_101_116_95_98_117_105_108_100_101_114_95_95_91_50_93_95_48_7_0,51)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(3),0)) {
		MR_GOTO_LAB(f_109_97_107_101_95_95_112_114_111_103_114_97_109_95_116_97_114_103_101_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_107_101_95_109_105_115_99_95_116_97_114_103_101_116_95_98_117_105_108_100_101_114_95_95_91_50_93_95_48_7_0_i52);
	}
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(f_109_97_107_101_95_95_112_114_111_103_114_97_109_95_116_97_114_103_101_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_107_101_95_109_105_115_99_95_116_97_114_103_101_116_95_98_117_105_108_100_101_114_95_95_91_50_93_95_48_7_0_i52);
	}
	MR_r1 = (MR_Integer) 0;
	MR_r2 = MR_sv(2);
	MR_decr_sp_and_return(7);
MR_def_label(f_109_97_107_101_95_95_112_114_111_103_114_97_109_95_116_97_114_103_101_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_107_101_95_109_105_115_99_95_116_97_114_103_101_116_95_98_117_105_108_100_101_114_95_95_91_50_93_95_48_7_0,52)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	MR_r2 = (MR_Word) MR_tbmkword(0, 12);
	}
	MR_np_call_localret_ent(fn__make__util__make_dependency_list_2_0,
		f_109_97_107_101_95_95_112_114_111_103_114_97_109_95_116_97_114_103_101_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_107_101_95_109_105_115_99_95_116_97_114_103_101_116_95_98_117_105_108_100_101_114_95_95_91_50_93_95_48_7_0_i55);
MR_def_label(f_109_97_107_101_95_95_112_114_111_103_114_97_109_95_116_97_114_103_101_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_107_101_95_109_105_115_99_95_116_97_114_103_101_116_95_98_117_105_108_100_101_114_95_95_91_50_93_95_48_7_0,55)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r6 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(make__dependencies, dependency_file);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(make, make_info);
	MR_r3 = (MR_Word) MR_IO_CTOR_ADDR;
	MR_r4 = MR_sv(1);
	MR_r5 = (MR_Word) MR_TAG_COMMON(0,3,16);
	MR_r7 = MR_sv(2);
	MR_np_call_localret_ent(make__util__foldl2_maybe_stop_at_error_8_0,
		f_109_97_107_101_95_95_112_114_111_103_114_97_109_95_116_97_114_103_101_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_107_101_95_109_105_115_99_95_116_97_114_103_101_116_95_98_117_105_108_100_101_114_95_95_91_50_93_95_48_7_0_i56);
MR_def_label(f_109_97_107_101_95_95_112_114_111_103_114_97_109_95_116_97_114_103_101_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_107_101_95_109_105_115_99_95_116_97_114_103_101_116_95_98_117_105_108_100_101_114_95_95_91_50_93_95_48_7_0,56)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_sv(3) = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__bool__and_2_0,
		f_109_97_107_101_95_95_112_114_111_103_114_97_109_95_116_97_114_103_101_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_107_101_95_109_105_115_99_95_116_97_114_103_101_116_95_98_117_105_108_100_101_114_95_95_91_50_93_95_48_7_0_i66);
MR_def_label(f_109_97_107_101_95_95_112_114_111_103_114_97_109_95_116_97_114_103_101_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_107_101_95_109_105_115_99_95_116_97_114_103_101_116_95_98_117_105_108_100_101_114_95_95_91_50_93_95_48_7_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_ctfield(1, MR_r5, 0);
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r3 = MR_sv(6);
	MR_np_call_localret_ent(make__program_target__get_target_modules_7_0,
		f_109_97_107_101_95_95_112_114_111_103_114_97_109_95_116_97_114_103_101_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_107_101_95_109_105_115_99_95_116_97_114_103_101_116_95_98_117_105_108_100_101_114_95_95_91_50_93_95_48_7_0_i59);
MR_def_label(f_109_97_107_101_95_95_112_114_111_103_114_97_109_95_116_97_114_103_101_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_107_101_95_109_105_115_99_95_116_97_114_103_101_116_95_98_117_105_108_100_101_114_95_95_91_50_93_95_48_7_0,59)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_sv(4) = MR_r2;
	MR_r1 = (MR_Integer) 493;
	MR_np_call_localret_ent(libs__globals__io_lookup_bool_option_4_0,
		f_109_97_107_101_95_95_112_114_111_103_114_97_109_95_116_97_114_103_101_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_107_101_95_109_105_115_99_95_116_97_114_103_101_116_95_98_117_105_108_100_101_114_95_95_91_50_93_95_48_7_0_i60);
MR_def_label(f_109_97_107_101_95_95_112_114_111_103_114_97_109_95_116_97_114_103_101_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_107_101_95_109_105_115_99_95_116_97_114_103_101_116_95_98_117_105_108_100_101_114_95_95_91_50_93_95_48_7_0,60)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(3),0)) {
		MR_GOTO_LAB(f_109_97_107_101_95_95_112_114_111_103_114_97_109_95_116_97_114_103_101_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_107_101_95_109_105_115_99_95_116_97_114_103_101_116_95_98_117_105_108_100_101_114_95_95_91_50_93_95_48_7_0_i61);
	}
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(f_109_97_107_101_95_95_112_114_111_103_114_97_109_95_116_97_114_103_101_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_107_101_95_109_105_115_99_95_116_97_114_103_101_116_95_98_117_105_108_100_101_114_95_95_91_50_93_95_48_7_0_i61);
	}
	MR_r1 = (MR_Integer) 0;
	MR_r2 = MR_sv(4);
	MR_decr_sp_and_return(7);
MR_def_label(f_109_97_107_101_95_95_112_114_111_103_114_97_109_95_116_97_114_103_101_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_107_101_95_109_105_115_99_95_116_97_114_103_101_116_95_98_117_105_108_100_101_114_95_95_91_50_93_95_48_7_0,61)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(fn__make__util__make_dependency_list_2_0,
		f_109_97_107_101_95_95_112_114_111_103_114_97_109_95_116_97_114_103_101_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_107_101_95_109_105_115_99_95_116_97_114_103_101_116_95_98_117_105_108_100_101_114_95_95_91_50_93_95_48_7_0_i64);
MR_def_label(f_109_97_107_101_95_95_112_114_111_103_114_97_109_95_116_97_114_103_101_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_107_101_95_109_105_115_99_95_116_97_114_103_101_116_95_98_117_105_108_100_101_114_95_95_91_50_93_95_48_7_0,64)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r6 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(make__dependencies, dependency_file);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(make, make_info);
	MR_r3 = (MR_Word) MR_IO_CTOR_ADDR;
	MR_r4 = MR_sv(1);
	MR_r5 = (MR_Word) MR_TAG_COMMON(0,3,17);
	MR_r7 = MR_sv(4);
	MR_np_call_localret_ent(make__util__foldl2_maybe_stop_at_error_8_0,
		f_109_97_107_101_95_95_112_114_111_103_114_97_109_95_116_97_114_103_101_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_107_101_95_109_105_115_99_95_116_97_114_103_101_116_95_98_117_105_108_100_101_114_95_95_91_50_93_95_48_7_0_i65);
MR_def_label(f_109_97_107_101_95_95_112_114_111_103_114_97_109_95_116_97_114_103_101_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_107_101_95_109_105_115_99_95_116_97_114_103_101_116_95_98_117_105_108_100_101_114_95_95_91_50_93_95_48_7_0,65)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_sv(3) = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__bool__and_2_0,
		f_109_97_107_101_95_95_112_114_111_103_114_97_109_95_116_97_114_103_101_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_107_101_95_109_105_115_99_95_116_97_114_103_101_116_95_98_117_105_108_100_101_114_95_95_91_50_93_95_48_7_0_i66);
MR_def_label(f_109_97_107_101_95_95_112_114_111_103_114_97_109_95_116_97_114_103_101_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_107_101_95_109_105_115_99_95_116_97_114_103_101_116_95_98_117_105_108_100_101_114_95_95_91_50_93_95_48_7_0,66)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(3);
	MR_decr_sp_and_return(7);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(make__module_target__make_module_target_extra_options_7_0);
MR_decl_entry(list__is_not_empty_1_0);
MR_decl_entry(make__util__maybe_reanalyse_modules_message_2_0);
MR_decl_entry(list__foldl_4_1);

MR_BEGIN_MODULE(make__program_target_module57)
	MR_init_entry1(f_109_97_107_101_95_95_112_114_111_103_114_97_109_95_116_97_114_103_101_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_97_110_97_108_121_115_105_115_95_102_105_108_101_115_95_50_95_95_91_49_93_95_48_9_0);
	MR_init_label8(f_109_97_107_101_95_95_112_114_111_103_114_97_109_95_116_97_114_103_101_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_97_110_97_108_121_115_105_115_95_102_105_108_101_115_95_50_95_95_91_49_93_95_48_9_0,36,2,3,4,5,6,7,9)
	MR_init_label8(f_109_97_107_101_95_95_112_114_111_103_114_97_109_95_116_97_114_103_101_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_97_110_97_108_121_115_105_115_95_102_105_108_101_115_95_50_95_95_91_49_93_95_48_9_0,11,12,8,15,17,18,14,20)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(f_109_97_107_101_95_95_112_114_111_103_114_97_109_95_116_97_114_103_101_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_97_110_97_108_121_115_105_115_95_102_105_108_101_115_95_50_95_95_91_49_93_95_48_9_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
MR_def_label(f_109_97_107_101_95_95_112_114_111_103_114_97_109_95_116_97_114_103_101_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_97_110_97_108_121_115_105_115_95_102_105_108_101_115_95_50_95_95_91_49_93_95_48_9_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(5) = MR_r4;
	MR_r1 = (MR_Integer) 493;
	MR_np_call_localret_ent(libs__globals__io_lookup_bool_option_4_0,
		f_109_97_107_101_95_95_112_114_111_103_114_97_109_95_116_97_114_103_101_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_97_110_97_108_121_115_105_115_95_102_105_108_101_115_95_50_95_95_91_49_93_95_48_9_0_i2);
MR_def_label(f_109_97_107_101_95_95_112_114_111_103_114_97_109_95_116_97_114_103_101_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_97_110_97_108_121_115_105_115_95_102_105_108_101_115_95_50_95_95_91_49_93_95_48_9_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_sv(6) = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(2,16);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(make__module_target__make_module_target_extra_options_7_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(2);
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = (MR_Word) MR_tbmkword(0, 7);
	}
	MR_np_call_localret_ent(fn__make__util__make_dependency_list_2_0,
		f_109_97_107_101_95_95_112_114_111_103_114_97_109_95_116_97_114_103_101_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_97_110_97_108_121_115_105_115_95_102_105_108_101_115_95_50_95_95_91_49_93_95_48_9_0_i3);
MR_def_label(f_109_97_107_101_95_95_112_114_111_103_114_97_109_95_116_97_114_103_101_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_97_110_97_108_121_115_105_115_95_102_105_108_101_115_95_50_95_95_91_49_93_95_48_9_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r6 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(make__dependencies, dependency_file);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(make, make_info);
	MR_r3 = (MR_Word) MR_IO_CTOR_ADDR;
	MR_r4 = MR_sv(4);
	MR_r5 = MR_sv(6);
	MR_r7 = MR_sv(5);
	MR_np_call_localret_ent(make__util__foldl2_maybe_stop_at_error_8_0,
		f_109_97_107_101_95_95_112_114_111_103_114_97_109_95_116_97_114_103_101_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_97_110_97_108_121_115_105_115_95_102_105_108_101_115_95_50_95_95_91_49_93_95_48_9_0_i4);
MR_def_label(f_109_97_107_101_95_95_112_114_111_103_114_97_109_95_116_97_114_103_101_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_97_110_97_108_121_115_105_115_95_102_105_108_101_115_95_50_95_95_91_49_93_95_48_9_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_sv(5) = MR_ctfield(0, MR_tempr1, 12);
	if (MR_INT_LE(MR_sv(5),1)) {
		MR_GOTO_LAB(f_109_97_107_101_95_95_112_114_111_103_114_97_109_95_116_97_114_103_101_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_97_110_97_108_121_115_105_115_95_102_105_108_101_115_95_50_95_95_91_49_93_95_48_9_0_i5);
	}
	MR_sv(8) = MR_tempr1;
	MR_r2 = MR_sv(1);
	MR_sv(4) = MR_r1;
	MR_r1 = (MR_Integer) 1;
	MR_GOTO_LAB(f_109_97_107_101_95_95_112_114_111_103_114_97_109_95_116_97_114_103_101_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_97_110_97_108_121_115_105_115_95_102_105_108_101_115_95_50_95_95_91_49_93_95_48_9_0_i6);
	}
MR_def_label(f_109_97_107_101_95_95_112_114_111_103_114_97_109_95_116_97_114_103_101_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_97_110_97_108_121_115_105_115_95_102_105_108_101_115_95_50_95_95_91_49_93_95_48_9_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r2;
	MR_r2 = MR_sv(1);
	MR_sv(4) = MR_r1;
	MR_r1 = (MR_Integer) 0;
MR_def_label(f_109_97_107_101_95_95_112_114_111_103_114_97_109_95_116_97_114_103_101_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_97_110_97_108_121_115_105_115_95_102_105_108_101_115_95_50_95_95_91_49_93_95_48_9_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_np_call_localret_ent(make__program_target__modules_needing_reanalysis_6_0,
		f_109_97_107_101_95_95_112_114_111_103_114_97_109_95_116_97_114_103_101_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_97_110_97_108_121_115_105_115_95_102_105_108_101_115_95_50_95_95_91_49_93_95_48_9_0_i7);
MR_def_label(f_109_97_107_101_95_95_112_114_111_103_114_97_109_95_116_97_114_103_101_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_97_110_97_108_121_115_105_115_95_102_105_108_101_115_95_50_95_95_91_49_93_95_48_9_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_sv(7) = MR_r2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__prim_data, sym_name);
	MR_r2 = MR_sv(6);
	MR_np_call_localret_ent(list__is_not_empty_1_0,
		f_109_97_107_101_95_95_112_114_111_103_114_97_109_95_116_97_114_103_101_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_97_110_97_108_121_115_105_115_95_102_105_108_101_115_95_50_95_95_91_49_93_95_48_9_0_i9);
MR_def_label(f_109_97_107_101_95_95_112_114_111_103_114_97_109_95_116_97_114_103_101_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_97_110_97_108_121_115_105_115_95_102_105_108_101_115_95_50_95_95_91_49_93_95_48_9_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(f_109_97_107_101_95_95_112_114_111_103_114_97_109_95_116_97_114_103_101_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_97_110_97_108_121_115_105_115_95_102_105_108_101_115_95_50_95_95_91_49_93_95_48_9_0_i8);
	}
	MR_np_call_localret_ent(make__util__maybe_reanalyse_modules_message_2_0,
		f_109_97_107_101_95_95_112_114_111_103_114_97_109_95_116_97_114_103_101_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_97_110_97_108_121_115_105_115_95_102_105_108_101_115_95_50_95_95_91_49_93_95_48_9_0_i11);
MR_def_label(f_109_97_107_101_95_95_112_114_111_103_114_97_109_95_116_97_114_103_101_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_97_110_97_108_121_115_105_115_95_102_105_108_101_115_95_50_95_95_91_49_93_95_48_9_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__prim_data, sym_name);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(make, make_info);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,3,18);
	MR_r4 = MR_sv(6);
	MR_r5 = MR_sv(8);
	MR_np_call_localret_ent(list__foldl_4_1,
		f_109_97_107_101_95_95_112_114_111_103_114_97_109_95_116_97_114_103_101_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_97_110_97_108_121_115_105_115_95_102_105_108_101_115_95_50_95_95_91_49_93_95_48_9_0_i12);
MR_def_label(f_109_97_107_101_95_95_112_114_111_103_114_97_109_95_116_97_114_103_101_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_97_110_97_108_121_115_105_115_95_102_105_108_101_115_95_50_95_95_91_49_93_95_48_9_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_succip_word = MR_sv(9);
	MR_GOTO_LAB(f_109_97_107_101_95_95_112_114_111_103_114_97_109_95_116_97_114_103_101_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_97_110_97_108_121_115_105_115_95_102_105_108_101_115_95_50_95_95_91_49_93_95_48_9_0_i36);
MR_def_label(f_109_97_107_101_95_95_112_114_111_103_114_97_109_95_116_97_114_103_101_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_97_110_97_108_121_115_105_115_95_102_105_108_101_115_95_50_95_95_91_49_93_95_48_9_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__prim_data, sym_name);
	MR_r2 = MR_sv(7);
	MR_np_call_localret_ent(list__is_not_empty_1_0,
		f_109_97_107_101_95_95_112_114_111_103_114_97_109_95_116_97_114_103_101_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_97_110_97_108_121_115_105_115_95_102_105_108_101_115_95_50_95_95_91_49_93_95_48_9_0_i15);
MR_def_label(f_109_97_107_101_95_95_112_114_111_103_114_97_109_95_116_97_114_103_101_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_97_110_97_108_121_115_105_115_95_102_105_108_101_115_95_50_95_95_91_49_93_95_48_9_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(f_109_97_107_101_95_95_112_114_111_103_114_97_109_95_116_97_114_103_101_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_97_110_97_108_121_115_105_115_95_102_105_108_101_115_95_50_95_95_91_49_93_95_48_9_0_i14);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__prim_data, sym_name);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(make, make_info);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,3,19);
	MR_r4 = MR_sv(7);
	MR_r5 = MR_sv(8);
	MR_np_call_localret_ent(list__foldl_4_1,
		f_109_97_107_101_95_95_112_114_111_103_114_97_109_95_116_97_114_103_101_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_97_110_97_108_121_115_105_115_95_102_105_108_101_115_95_50_95_95_91_49_93_95_48_9_0_i17);
MR_def_label(f_109_97_107_101_95_95_112_114_111_103_114_97_109_95_116_97_114_103_101_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_97_110_97_108_121_115_105_115_95_102_105_108_101_115_95_50_95_95_91_49_93_95_48_9_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 13);
	MR_sv(4) = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_ctfield(0, MR_r1, 0);
	MR_tfield(0, MR_tempr1, 1) = MR_ctfield(0, MR_r1, 1);
	MR_tfield(0, MR_tempr1, 2) = MR_ctfield(0, MR_r1, 2);
	MR_tfield(0, MR_tempr1, 3) = MR_ctfield(0, MR_r1, 3);
	MR_tfield(0, MR_tempr1, 4) = MR_ctfield(0, MR_r1, 4);
	MR_tfield(0, MR_tempr1, 5) = MR_ctfield(0, MR_r1, 5);
	MR_tfield(0, MR_tempr1, 6) = MR_ctfield(0, MR_r1, 6);
	MR_tfield(0, MR_tempr1, 7) = MR_ctfield(0, MR_r1, 7);
	MR_tfield(0, MR_tempr1, 8) = MR_ctfield(0, MR_r1, 8);
	MR_tfield(0, MR_tempr1, 9) = MR_ctfield(0, MR_r1, 9);
	MR_tfield(0, MR_tempr1, 10) = MR_ctfield(0, MR_r1, 10);
	MR_tfield(0, MR_tempr1, 11) = MR_ctfield(0, MR_r1, 11);
	MR_tfield(0, MR_tempr1, 12) = ((MR_Integer) MR_sv(5) - (MR_Integer) 1);
	}
	MR_np_call_localret_ent(make__util__maybe_reanalyse_modules_message_2_0,
		f_109_97_107_101_95_95_112_114_111_103_114_97_109_95_116_97_114_103_101_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_97_110_97_108_121_115_105_115_95_102_105_108_101_115_95_50_95_95_91_49_93_95_48_9_0_i18);
MR_def_label(f_109_97_107_101_95_95_112_114_111_103_114_97_109_95_116_97_114_103_101_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_97_110_97_108_121_115_105_115_95_102_105_108_101_115_95_50_95_95_91_49_93_95_48_9_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(4);
	MR_succip_word = MR_sv(9);
	MR_GOTO_LAB(f_109_97_107_101_95_95_112_114_111_103_114_97_109_95_116_97_114_103_101_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_97_110_97_108_121_115_105_115_95_102_105_108_101_115_95_50_95_95_91_49_93_95_48_9_0_i36);
MR_def_label(f_109_97_107_101_95_95_112_114_111_103_114_97_109_95_116_97_114_103_101_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_97_110_97_108_121_115_105_115_95_102_105_108_101_115_95_50_95_95_91_49_93_95_48_9_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(fn__bool__and_2_0,
		f_109_97_107_101_95_95_112_114_111_103_114_97_109_95_116_97_114_103_101_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_97_110_97_108_121_115_105_115_95_102_105_108_101_115_95_50_95_95_91_49_93_95_48_9_0_i20);
MR_def_label(f_109_97_107_101_95_95_112_114_111_103_114_97_109_95_116_97_114_103_101_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_97_110_97_108_121_115_105_115_95_102_105_108_101_115_95_50_95_95_91_49_93_95_48_9_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(8);
	MR_decr_sp_and_return(9);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

static void mercury__make__program_target_maybe_bunch_0(void)
{
	make__program_target_module0();
	make__program_target_module1();
	make__program_target_module2();
	make__program_target_module3();
	make__program_target_module4();
	make__program_target_module5();
	make__program_target_module6();
	make__program_target_module7();
	make__program_target_module8();
	make__program_target_module9();
	make__program_target_module10();
	make__program_target_module11();
	make__program_target_module12();
	make__program_target_module13();
	make__program_target_module14();
	make__program_target_module15();
	make__program_target_module16();
	make__program_target_module17();
	make__program_target_module18();
	make__program_target_module19();
	make__program_target_module20();
	make__program_target_module21();
	make__program_target_module22();
	make__program_target_module23();
	make__program_target_module24();
	make__program_target_module25();
	make__program_target_module26();
	make__program_target_module27();
	make__program_target_module28();
	make__program_target_module29();
	make__program_target_module30();
	make__program_target_module31();
	make__program_target_module32();
	make__program_target_module33();
	make__program_target_module34();
	make__program_target_module35();
	make__program_target_module36();
	make__program_target_module37();
	make__program_target_module38();
	make__program_target_module39();
}

static void mercury__make__program_target_maybe_bunch_1(void)
{
	make__program_target_module40();
	make__program_target_module41();
	make__program_target_module42();
	make__program_target_module43();
	make__program_target_module44();
	make__program_target_module45();
	make__program_target_module46();
	make__program_target_module47();
	make__program_target_module48();
	make__program_target_module49();
	make__program_target_module50();
	make__program_target_module51();
	make__program_target_module52();
	make__program_target_module53();
	make__program_target_module54();
	make__program_target_module55();
	make__program_target_module56();
	make__program_target_module57();
}

/* suppress gcc -Wmissing-decls warnings */
void mercury__make__program_target__init(void);
void mercury__make__program_target__init_type_tables(void);
void mercury__make__program_target__init_debugger(void);
#ifdef MR_DEEP_PROFILING
void mercury__make__program_target__write_out_proc_statics(FILE *fp);
#endif
#ifdef MR_RECORD_TERM_SIZES
void mercury__make__program_target__init_complexity_procs(void);
#endif

void mercury__make__program_target__init(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	mercury__make__program_target_maybe_bunch_0();
	mercury__make__program_target_maybe_bunch_1();
	mercury__make__program_target__init_debugger();
}

void mercury__make__program_target__init_type_tables(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}


void mercury__make__program_target__init_debugger(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}

#ifdef MR_DEEP_PROFILING

void mercury__make__program_target__write_out_proc_statics(FILE *fp)
{
}

#endif

#ifdef MR_RECORD_TERM_SIZES

void mercury__make__program_target__init_complexity_procs(void)
{
}

#endif

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;
