/*
** Automatically generated from `dir.m'
** by the Mercury compiler,
** version rotd-2007-08-16, configured for i686-pc-linux-gnu.
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
INIT mercury__dir__init
ENDINIT
*/

#define MR_ALLOW_RESET
#include "mercury_imp.h"
#line 24 "dir.c"
#include "dir.mh"

#line 27 "dir.c"
#line 530 "io.int"
#include "io.mh"

#line 31 "dir.c"
#line 538 "io.int"
#include "string.mh"

#line 35 "dir.c"
#line 29 "bitmap.int2"
#include "bitmap.mh"

#line 39 "dir.c"
#line 28 "time.int2"
#include "time.mh"

#line 43 "dir.c"
#line 31 "array.int2"
#include "array.mh"

#line 47 "dir.c"
#line 4 "builtin.opt"
#include "builtin.mh"

#line 51 "dir.c"
#line 12 "pretty_printer.opt"
#include "pretty_printer.mh"

#line 55 "dir.c"
#line 3 "float.opt"
#include "float.mh"

#line 59 "dir.c"
#line 3 "math.opt"
#include "math.mh"

#line 63 "dir.c"
#line 3 "construct.opt"
#include "construct.mh"

#line 67 "dir.c"
#line 6 "type_desc.opt"
#include "type_desc.mh"

#line 71 "dir.c"
#line 103 "rtti_implementation.opt"
#include "rtti_implementation.mh"

#line 75 "dir.c"
#line 4 "char.opt"
#include "char.mh"

#line 79 "dir.c"
#line 14 "exception.opt"
#include "exception.mh"

#line 83 "dir.c"
#line 23 "store.opt"
#include "store.mh"

#line 87 "dir.c"
#line 4 "int.opt"
#include "int.mh"

#line 91 "dir.c"
#line 156 "io.opt"
#include "table_builtin.mh"

#line 95 "dir.c"
#line 3 "list.opt"
#include "list.mh"

#line 99 "dir.c"
#line 9 "private_builtin.opt"
#include "private_builtin.mh"

#line 103 "dir.c"
#line 104 "dir.c"
#ifndef DIR_DECL_GUARD
#define DIR_DECL_GUARD

#line 108 "dir.c"
#line 1335 "dir.m"


#include "mercury_string.h"
#include "mercury_types.h"

#if defined(MR_WIN32) && defined(MR_HAVE_WINDOWS_H)
  #include <windows.h>
#endif

#ifdef HAVE_UNISTD_H
  #include <unistd.h>
#endif

#ifdef MR_HAVE_SYS_TYPES_H
  #include <sys/types.h>
#endif

#ifdef MR_HAVE_DIRENT_H
  #include <dirent.h>
#endif

#if defined(MR_WIN32)
  typedef   HANDLE      ML_DIR_STREAM;
#elif defined(MR_HAVE_READDIR)
  typedef   DIR *       ML_DIR_STREAM;
#else
  typedef   MR_Integer  ML_DIR_STREAM;
#endif

#line 139 "dir.c"
#line 140 "dir.c"

#endif
#line 143 "dir.c"

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
	MR_String f1;
};
MR_STATIC_LINKAGE const struct mercury_type_1 mercury_common_1[];

struct mercury_type_2 {
	MR_Integer f1;
};
MR_STATIC_LINKAGE const struct mercury_type_2 mercury_common_2[];

struct mercury_type_3 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[4];
};
MR_STATIC_LINKAGE const struct mercury_type_3 mercury_common_3[];

struct mercury_type_4 {
	MR_Word * f1;
	MR_Integer f2;
	MR_Word * f3[4];
	MR_Integer f4[2];
	MR_Word * f5[2];
};
MR_STATIC_LINKAGE const struct mercury_type_4 mercury_common_4[];

struct mercury_type_5 {
	MR_Word * f1[2];
};
MR_STATIC_LINKAGE const struct mercury_type_5 mercury_common_5[];

struct mercury_type_6 {
	MR_Word * f1;
	MR_Integer f2;
};
MR_STATIC_LINKAGE const struct mercury_type_6 mercury_common_6[];

struct mercury_type_7 {
	MR_Word * f1;
	MR_Integer f2;
	MR_Word * f3;
	MR_Word * f4;
};
MR_STATIC_LINKAGE const struct mercury_type_7 mercury_common_7[];

struct mercury_type_8 {
	MR_Unsigned f1[2];
};
MR_STATIC_LINKAGE const struct mercury_type_8 mercury_common_8[];

struct mercury_type_9 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[9];
	MR_Integer f4;
	MR_Word * f5[3];
};
MR_STATIC_LINKAGE const struct mercury_type_9 mercury_common_9[];

extern const MR_TypeCtorInfo_Struct
	mercury_data_dir__type_ctor_info_stream_0,
	mercury_data_dir__type_ctor_info_foldl_pred_1;
MR_decl_label1(dir__can_implement_dir_foldl_0_0, 1)
MR_decl_label1(dir__can_implement_make_directory_0_0, 1)
MR_decl_label4(dir__check_dir_readable_5_0, 2,7,5,4)
MR_decl_label2(dir__close_4_0, 4,2)
MR_decl_label1(dir__directory_separator_1_0, 2)
MR_decl_label8(dir__find_matching_brace_or_comma_6_0, 68,3,9,7,10,5,15,13)
MR_decl_label3(dir__find_matching_brace_or_comma_6_0, 21,17,26)
MR_decl_label1(dir__foldl2_6_0, 2)
MR_decl_label8(dir__foldl2_process_dir_11_0, 13,19,16,17,6,23,29,32)
MR_decl_label7(dir__foldl2_process_dir_11_0, 54,35,36,56,40,25,3)
MR_decl_label1(dir__foldl2_process_dir2_12_0, 2)
MR_decl_label8(dir__foldl2_process_entries_13_0, 89,35,4,5,6,9,11,12)
MR_decl_label8(dir__foldl2_process_entries_13_0, 20,25,23,22,16,28,32,29)
MR_decl_label1(dir__foldl2_process_entries_13_0, 8)
MR_decl_label7(dir__is_directory_separator_1_0, 6,9,13,16,3,18,21)
MR_decl_label7(dir__is_directory_separator_1_1, 4,7,11,14,3,15,1)
MR_decl_label8(dir__is_root_directory_1_0, 6,7,3,17,20,15,24,40)
MR_decl_label3(dir__is_root_directory_1_0, 12,92,1)
MR_decl_label8(dir__make_directory_4_0, 6,7,8,9,12,27,3,49)
MR_decl_label1(dir__make_mkdir_res_error_4_0, 2)
MR_decl_label3(dir__make_mkdir_res_exists_5_0, 2,3,7)
MR_decl_label8(dir__make_win32_dir_open_result_ok_5_0, 5,4,6,12,14,10,11,9)
MR_decl_label1(dir__make_win32_dir_open_result_ok_5_0, 3)
MR_decl_label8(dir__path_name_is_absolute_1_0, 3,13,16,11,20,63,34,8)
MR_decl_label1(dir__path_name_is_absolute_1_0, 1)
MR_decl_label2(dir__path_name_is_root_directory_1_0, 2,3)
MR_decl_label6(dir__read_entry_4_0, 32,4,2,5,10,8)
MR_decl_label3(dir__read_first_entry_4_0, 2,5,3)
MR_decl_label1(dir__recursive_foldl2_7_0, 2)
MR_decl_label4(dir__split_name_3_0, 2,3,6,1)
MR_decl_label8(dir__split_name_2_3_0, 4,6,3,8,10,11,14,15)
MR_decl_label8(dir__split_name_2_3_0, 21,18,24,28,25,30,32,38)
MR_decl_label8(dir__split_name_2_3_0, 47,50,43,58,42,40,37,35)
MR_decl_label8(dir__split_name_2_3_0, 62,31,65,68,73,78,80,81)
MR_decl_label1(dir__split_name_2_3_0, 1)
MR_decl_label8(dir__strip_leading_win32_root_directory_2_0, 8,10,2,3,16,18,23,24)
MR_decl_label7(dir__strip_leading_win32_root_directory_2_0, 12,13,29,32,35,38,1)
MR_decl_label2(dir__use_windows_paths_0_0, 2,5)
MR_decl_label3(f_100_105_114_95_95_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_95_95_104_111_49_54_95_95_91_49_44_32_51_93_95_48_3_0, 4,5,3)
MR_decl_label3(f_100_105_114_95_95_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_95_95_104_111_49_55_95_95_91_49_44_32_51_93_95_48_3_0, 4,5,3)
MR_decl_label3(f_100_105_114_95_95_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_95_95_104_111_49_56_95_95_91_49_44_32_51_93_95_48_3_0, 4,5,3)
MR_decl_label3(dir__list__map__ho11_3_0, 4,5,3)
MR_decl_label3(dir__list__map__ho15_3_0, 4,5,3)
MR_decl_label4(dir__list__takewhile__ho7_4_0, 23,8,10,4)
MR_decl_label4(dir__list__takewhile__ho8_4_0, 23,8,10,4)
MR_decl_label4(dir__list__takewhile__ho9_4_0, 23,8,10,4)
MR_decl_label1(f_100_105_114_95_95_112_114_105_118_97_116_101_95_98_117_105_108_116_105_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_99_111_109_112_97_114_101_95_112_114_101_100_95_95_91_50_44_32_51_93_95_48_3_0, 2)
MR_decl_label3(f_100_105_114_95_95_112_114_105_118_97_116_101_95_98_117_105_108_116_105_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_117_110_105_102_121_95_112_114_101_100_95_95_91_49_44_32_50_93_95_48_2_0, 2,10,1)
MR_decl_label8(fn__f_100_105_114_95_95_47_2_0, 2,3,4,5,6,7,10,8)
MR_decl_label8(fn__f_100_105_114_95_95_47_2_0, 16,19,21,26,28,13,36,39)
MR_decl_label7(fn__f_100_105_114_95_95_47_2_0, 42,33,47,30,31,51,55)
MR_decl_label1(fn__dir__alt_directory_separator_0_0, 2)
MR_decl_label8(fn__dir__basename_1_0, 2,3,6,11,14,20,8,23)
MR_decl_label8(fn__dir__basename_1_0, 25,22,27,29,30,33,34,38)
MR_decl_label2(fn__dir__basename_1_0, 37,1)
MR_decl_label2(fn__dir__basename_det_1_0, 3,2)
MR_decl_label8(fn__dir__canonicalize_path_chars_1_0, 8,11,4,16,19,23,28,33)
MR_decl_label4(fn__dir__canonicalize_path_chars_1_0, 29,30,2,3)
MR_decl_label8(fn__dir__canonicalize_path_chars_2_2_0, 70,7,10,13,4,5,17,19)
MR_decl_label3(fn__dir__canonicalize_path_chars_2_2_0, 22,18,3)
MR_decl_label2(fn__dir__det_basename_1_0, 3,2)
MR_decl_label1(fn__dir__directory_separator_0_0, 2)
MR_decl_label8(fn__dir__dirname_1_0, 2,3,6,4,12,15,21,9)
MR_decl_label8(fn__dir__dirname_1_0, 26,24,30,32,29,35,36,28)
MR_decl_label8(fn__dir__expand_acc_2_0, 24,6,7,8,9,10,4,12)
MR_decl_label1(fn__dir__expand_acc_2_0, 3)
MR_decl_label2(fn__dir__expand_braces_1_0, 2,3)
MR_def_extern_entry(fn__dir__directory_separator_0_0)
MR_def_extern_entry(dir__directory_separator_1_0)
MR_def_extern_entry(fn__dir__alt_directory_separator_0_0)
MR_def_extern_entry(dir__is_directory_separator_1_0)
MR_def_extern_entry(dir__is_directory_separator_1_1)
MR_def_extern_entry(fn__dir__this_directory_0_0)
MR_def_extern_entry(dir__this_directory_1_0)
MR_def_extern_entry(fn__dir__parent_directory_0_0)
MR_def_extern_entry(dir__parent_directory_1_0)
MR_def_extern_entry(dir__use_windows_paths_0_0)
MR_def_extern_entry(dir__split_name_2_3_0)
MR_decl_static(fn__dir__canonicalize_path_chars_2_2_0)
MR_def_extern_entry(fn__dir__canonicalize_path_chars_1_0)
MR_decl_static(dir__strip_leading_win32_root_directory_2_0)
MR_def_extern_entry(dir__path_name_is_absolute_1_0)
MR_def_extern_entry(dir__is_root_directory_1_0)
MR_def_extern_entry(dir__split_name_3_0)
MR_def_extern_entry(fn__dir__basename_1_0)
MR_def_extern_entry(dir__basename_2_0)
MR_def_extern_entry(fn__dir__basename_det_1_0)
MR_def_extern_entry(fn__dir__det_basename_1_0)
MR_def_extern_entry(fn__dir__dirname_1_0)
MR_def_extern_entry(dir__dirname_2_0)
MR_def_extern_entry(dir__path_name_is_root_directory_1_0)
MR_def_extern_entry(fn__f_100_105_114_95_95_47_2_0)
MR_def_extern_entry(fn__dir__make_path_name_2_0)
MR_decl_static(dir__can_implement_make_directory_0_0)
MR_def_extern_entry(dir__make_single_directory_2_5_0)
MR_def_extern_entry(dir__make_directory_4_0)
MR_def_extern_entry(dir__make_single_directory_4_0)
MR_decl_static(dir__can_implement_dir_foldl_0_0)
MR_decl_static(dir__open_2_4_0)
MR_def_extern_entry(dir__foldl2_process_dir_11_0)
MR_def_extern_entry(dir__foldl2_6_0)
MR_def_extern_entry(dir__recursive_foldl2_7_0)
MR_decl_static(dir__find_matching_brace_or_comma_6_0)
MR_def_extern_entry(fn__dir__expand_acc_2_0)
MR_def_extern_entry(fn__dir__expand_1_0)
MR_def_extern_entry(fn__dir__expand_braces_1_0)
MR_decl_static(fn__dir__make_mkdir_res_ok_0_0)
MR_decl_static(dir__make_mkdir_res_error_4_0)
MR_decl_static(dir__check_dir_accessibility_4_0)
MR_decl_static(dir__make_mkdir_res_exists_5_0)
MR_decl_static(dir__read_entry_2_6_0)
MR_decl_static(dir__read_entry_4_0)
MR_decl_static(dir__foldl2_process_entries_13_0)
MR_decl_static(dir__foldl2_process_dir2_12_0)
MR_decl_static(dir__check_dir_readable_5_0)
MR_decl_static(dir__read_first_entry_4_0)
MR_decl_static(fn__dir__copy_c_string_1_0)
MR_decl_static(dir__close_2_5_0)
MR_decl_static(dir__close_4_0)
MR_decl_static(dir__make_win32_dir_open_result_ok_5_0)
MR_decl_static(fn__dir__make_dir_open_result_eof_0_0)
MR_decl_static(dir__make_dir_open_result_error_4_0)
MR_decl_static(fn__dir__add_alternatives_2_0)
MR_def_extern_entry(__Unify___dir__foldl_pred_1_0)
MR_def_extern_entry(__Compare___dir__foldl_pred_1_0)
MR_def_extern_entry(__Unify___dir__stream_0_0)
MR_def_extern_entry(__Compare___dir__stream_0_0)
MR_decl_static(fn__dir__list__map__ho5_2_0)
MR_decl_static(dir__list__takewhile__ho7_4_0)
MR_decl_static(dir__list__takewhile__ho8_4_0)
MR_decl_static(dir__list__takewhile__ho9_4_0)
MR_decl_static(dir__list__map__ho11_3_0)
MR_decl_static(dir__list__map__ho15_3_0)
MR_decl_static(dir__IntroducedFrom__pred__map__214__1__ho22_5_0)
MR_decl_static(f_100_105_114_95_95_112_114_105_118_97_116_101_95_98_117_105_108_116_105_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_99_111_109_112_97_114_101_95_112_114_101_100_95_95_91_50_44_32_51_93_95_48_3_0)
MR_decl_static(f_100_105_114_95_95_112_114_105_118_97_116_101_95_98_117_105_108_116_105_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_117_110_105_102_121_95_112_114_101_100_95_95_91_49_44_32_50_93_95_48_2_0)
MR_decl_static(fn__f_100_105_114_95_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_0)
MR_decl_static(fn__f_100_105_114_95_95_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_112_95_95_104_111_51_95_95_91_50_93_95_48_2_0)
MR_decl_static(f_100_105_114_95_95_101_120_99_101_112_116_105_111_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_110_97_108_108_121_95_95_104_111_54_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_55_44_32_56_44_32_57_44_32_49_48_44_32_49_49_44_32_49_50_44_32_49_51_44_32_49_52_93_95_48_6_0)
MR_decl_static(f_100_105_114_95_95_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_95_95_104_111_49_54_95_95_91_49_44_32_51_93_95_48_3_0)
MR_decl_static(f_100_105_114_95_95_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_95_95_104_111_49_55_95_95_91_49_44_32_51_93_95_48_3_0)
MR_decl_static(f_100_105_114_95_95_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_95_95_104_111_49_56_95_95_91_49_44_32_51_93_95_48_3_0)

static const struct mercury_type_0 mercury_common_0[7] =
{
{
58,
MR_tbmkword(0, 0)
},
{
92,
MR_tbmkword(0, 0)
},
{
47,
MR_tbmkword(0, 0)
},
{
2,
MR_tbmkword(0, 0)
},
{
1,
MR_TAG_COMMON(1,0,3)
},
{
0,
MR_TAG_COMMON(1,0,4)
},
{
0,
MR_TAG_COMMON(1,0,3)
},
};

static const struct mercury_type_1 mercury_common_1[4] =
{
{
MR_string_const("dir.make_directory not implemented on this platform", 51)
},
{
MR_string_const("dir.foldl2 not implemented on this platform", 43)
},
{
MR_string_const("no error", 8)
},
{
MR_string_const("dir.foldl2: pathname is not a directory", 39)
},
};

static const struct mercury_type_2 mercury_common_2[2] =
{
{
1
},
{
0
},
};

static const MR_UserClosureId
mercury_data__closure_layout__dir__foldl2_process_dir_11_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_dir__type_ctor_info_stream_0;
extern const MR_TypeCtorInfo_Struct mercury_data_io__type_ctor_info_res_0;
extern const MR_TypeCtorInfo_Struct mercury_data_io__type_ctor_info_state_0;
static const struct mercury_type_3 mercury_common_3[1] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__dir__foldl2_process_dir_11_0_1,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_CTOR0_ADDR(dir, stream),
MR_CTOR0_ADDR(io, res),
MR_IO_CTOR_ADDR,
MR_IO_CTOR_ADDR
}
},
};

extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_pred_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_string_0;
extern const MR_TypeCtorInfo_Struct mercury_data_io__type_ctor_info_file_type_0;
extern const MR_TypeCtorInfo_Struct mercury_data_bool__type_ctor_info_bool_0;
extern const MR_TypeCtorInfo_Struct mercury_data_io__type_ctor_info_state_0;
static const struct mercury_type_4 mercury_common_4[1] =
{
{
MR_CTOR0_ADDR(builtin, pred),
8,
{
MR_STRING_CTOR_ADDR,
MR_STRING_CTOR_ADDR,
MR_CTOR0_ADDR(io, file_type),
MR_BOOL_CTOR_ADDR
},
{
1,
1
},
{
MR_IO_CTOR_ADDR,
MR_IO_CTOR_ADDR
}
},
};

extern const MR_TypeCtorInfo_Struct mercury_data_list__type_ctor_info_list_1;
extern const MR_TypeCtorInfo_Struct mercury_data_io__type_ctor_info_file_id_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_character_0;
static const struct mercury_type_5 mercury_common_5[3] =
{
{
{
MR_LIST_CTOR_ADDR,
MR_CTOR0_ADDR(io, file_id)
}
},
{
{
MR_LIST_CTOR_ADDR,
MR_CHAR_CTOR_ADDR
}
},
{
{
MR_tbmkword(0, 0),
MR_tbmkword(0, 0)
}
},
};

extern const MR_TypeCtorInfo_Struct mercury_data_io__type_ctor_info_maybe_partial_res_1;
static const struct mercury_type_6 mercury_common_6[1] =
{
{
MR_CTOR1_ADDR(io, maybe_partial_res),
1
},
};

extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_tuple_0;
static const struct mercury_type_7 mercury_common_7[1] =
{
{
MR_CTOR0_ADDR(builtin, tuple),
2,
MR_COMMON(6,0),
MR_BOOL_CTOR_ADDR
},
};

static const struct mercury_type_8 mercury_common_8[1] =
{
{
{
1,
17
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__dir__foldl2_process_dir_11_0_2;
extern const MR_TypeCtorInfo_Struct mercury_data_private_builtin__type_ctor_info_type_info_0;
extern const MR_TypeCtorInfo_Struct mercury_data_bool__type_ctor_info_bool_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_string_0;
static const struct mercury_type_9 mercury_common_9[1] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__dir__foldl2_process_dir_11_0_2,
MR_COMMON(8,0)
},
13,
{
MR_CTOR0_ADDR(private_builtin, type_info),
MR_CTOR0_ADDR(dir, stream),
MR_BOOL_CTOR_ADDR,
MR_COMMON(4,0),
MR_STRING_CTOR_ADDR,
MR_COMMON(5,0),
MR_STRING_CTOR_ADDR,
MR_BOOL_CTOR_ADDR,
MR_BOOL_CTOR_ADDR
},
1,
{
MR_COMMON(7,0),
MR_IO_CTOR_ADDR,
MR_IO_CTOR_ADDR
}
},
};

const MR_TypeCtorInfo_Struct mercury_data_dir__type_ctor_info_stream_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_FOREIGN,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___dir__stream_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___dir__stream_0_0)),
	"dir",
	"stream",
	{ 0 },
	{ 0 },
	-1,
	0,
	NULL
};

static const MR_VA_PseudoTypeInfo_Struct8 mercury_data___vpti_pred_8__plain_builtin__type_ctor_info_string_0__plain_builtin__type_ctor_info_string_0__plain_io__type_ctor_info_file_type_0__plain_bool__type_ctor_info_bool_0__pseudo_1__pseudo_1__plain_io__type_ctor_info_state_0__plain_io__type_ctor_info_state_0 = {
	&mercury_data_builtin__type_ctor_info_pred_0,
	8,
{	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_string_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_string_0,
	(MR_PseudoTypeInfo) &mercury_data_io__type_ctor_info_file_type_0,
	(MR_PseudoTypeInfo) &mercury_data_bool__type_ctor_info_bool_0,
	(MR_PseudoTypeInfo) 1,
	(MR_PseudoTypeInfo) 1,
	(MR_PseudoTypeInfo) &mercury_data_io__type_ctor_info_state_0,
	(MR_PseudoTypeInfo) &mercury_data_io__type_ctor_info_state_0
}};

const MR_TypeCtorInfo_Struct mercury_data_dir__type_ctor_info_foldl_pred_1 = {
	1,
	13,
	-1,
	MR_TYPECTOR_REP_EQUIV,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___dir__foldl_pred_1_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___dir__foldl_pred_1_0)),
	"dir",
	"foldl_pred",
	{ 0 },
	{ (void *)&mercury_data___vpti_pred_8__plain_builtin__type_ctor_info_string_0__plain_builtin__type_ctor_info_string_0__plain_io__type_ctor_info_file_type_0__plain_bool__type_ctor_info_bool_0__pseudo_1__pseudo_1__plain_io__type_ctor_info_state_0__plain_io__type_ctor_info_state_0 },
	-1,
	0,
	NULL
};

static const MR_UserClosureId
mercury_data__closure_layout__dir__foldl2_process_dir_11_0_1 = {
{
MR_PREDICATE,
"dir",
"dir",
"close",
4,
0
},
"dir",
"dir.m",
1190,
"d1;c12;t;c2;d1;c4;d1;c3;"
};

static const MR_UserClosureId
mercury_data__closure_layout__dir__foldl2_process_dir_11_0_2 = {
{
MR_PREDICATE,
"dir",
"dir",
"foldl2_process_dir2",
12,
0
},
"dir",
"dir.m",
1191,
"d1;c12;t;c2;d1;c4;d1;c4;"
};


MR_BEGIN_MODULE(dir_module0)
	MR_init_entry1(fn__dir__directory_separator_0_0);
	MR_init_label1(fn__dir__directory_separator_0_0,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__dir__directory_separator_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__fn__dir__directory_separator_0_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
{
#line 983 "io.opt"

#ifdef MR_WIN32
    SUCCESS_INDICATOR = MR_TRUE;
#else
    SUCCESS_INDICATOR = MR_FALSE;
#endif
;}
#line 660 "dir.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(fn__dir__directory_separator_0_0_i2);
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	MR_r1 = (MR_Integer) 92;
	MR_proceed();
MR_def_label(fn__dir__directory_separator_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 47;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(dir_module1)
	MR_init_entry1(dir__directory_separator_1_0);
	MR_init_label1(dir__directory_separator_1_0,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__dir__directory_separator_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__dir__directory_separator_1_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
{
#line 983 "io.opt"

#ifdef MR_WIN32
    SUCCESS_INDICATOR = MR_TRUE;
#else
    SUCCESS_INDICATOR = MR_FALSE;
#endif
;}
#line 704 "dir.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(dir__directory_separator_1_0_i2);
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	MR_r1 = (MR_Integer) 92;
	MR_proceed();
MR_def_label(dir__directory_separator_1_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 47;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(dir_module2)
	MR_init_entry1(fn__dir__alt_directory_separator_0_0);
	MR_init_label1(fn__dir__alt_directory_separator_0_0,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__dir__alt_directory_separator_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__fn__dir__alt_directory_separator_0_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
{
#line 990 "io.opt"

#ifdef __CYGWIN__
    SUCCESS_INDICATOR = MR_TRUE;
#else
    SUCCESS_INDICATOR = MR_FALSE;
#endif
;}
#line 748 "dir.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(fn__dir__alt_directory_separator_0_0_i2);
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	MR_r1 = (MR_Integer) 92;
	MR_proceed();
MR_def_label(fn__dir__alt_directory_separator_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 47;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(dir_module3)
	MR_init_entry1(dir__is_directory_separator_1_0);
	MR_init_label7(dir__is_directory_separator_1_0,6,9,13,16,3,18,21)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__dir__is_directory_separator_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	{
#define	MR_PROC_LABEL	mercury__dir__is_directory_separator_1_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
{
#line 983 "io.opt"

#ifdef MR_WIN32
    SUCCESS_INDICATOR = MR_TRUE;
#else
    SUCCESS_INDICATOR = MR_FALSE;
#endif
;}
#line 793 "dir.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(dir__is_directory_separator_1_0_i6);
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Integer) 92;
	MR_GOTO_LAB(dir__is_directory_separator_1_0_i9);
MR_def_label(dir__is_directory_separator_1_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Integer) 47;
MR_def_label(dir__is_directory_separator_1_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_sv(1) != MR_r1)) {
		MR_GOTO_LAB(dir__is_directory_separator_1_0_i3);
	}
	{
#define	MR_PROC_LABEL	mercury__dir__is_directory_separator_1_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
{
#line 990 "io.opt"

#ifdef __CYGWIN__
    SUCCESS_INDICATOR = MR_TRUE;
#else
    SUCCESS_INDICATOR = MR_FALSE;
#endif
;}
#line 825 "dir.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(dir__is_directory_separator_1_0_i13);
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	MR_r1 = (MR_Integer) 92;
	MR_GOTO_LAB(dir__is_directory_separator_1_0_i16);
MR_def_label(dir__is_directory_separator_1_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 47;
MR_def_label(dir__is_directory_separator_1_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_sv(1) == MR_r1)) {
		MR_GOTO_LAB(dir__is_directory_separator_1_0_i3);
	}
	MR_decr_sp(1);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(dir__is_directory_separator_1_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	{
#define	MR_PROC_LABEL	mercury__dir__is_directory_separator_1_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
{
#line 990 "io.opt"

#ifdef __CYGWIN__
    SUCCESS_INDICATOR = MR_TRUE;
#else
    SUCCESS_INDICATOR = MR_FALSE;
#endif
;}
#line 861 "dir.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(dir__is_directory_separator_1_0_i18);
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Integer) 92;
	MR_GOTO_LAB(dir__is_directory_separator_1_0_i21);
MR_def_label(dir__is_directory_separator_1_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Integer) 47;
MR_def_label(dir__is_directory_separator_1_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_sv(1) == MR_r1);
	MR_decr_sp(1);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_declare_entry(MR_do_fail);

MR_BEGIN_MODULE(dir_module4)
	MR_init_entry1(dir__is_directory_separator_1_1);
	MR_init_label7(dir__is_directory_separator_1_1,4,7,11,14,3,15,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__dir__is_directory_separator_1_1);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_mkframe("pred dir.is_directory_separator/1-1", 1,
		MR_LABEL_AP(dir__is_directory_separator_1_1_i3));
	{
#define	MR_PROC_LABEL	mercury__dir__is_directory_separator_1_1
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
{
#line 983 "io.opt"

#ifdef MR_WIN32
    SUCCESS_INDICATOR = MR_TRUE;
#else
    SUCCESS_INDICATOR = MR_FALSE;
#endif
;}
#line 914 "dir.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(dir__is_directory_separator_1_1_i4);
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	MR_r1 = (MR_Integer) 92;
	MR_GOTO_LAB(dir__is_directory_separator_1_1_i7);
MR_def_label(dir__is_directory_separator_1_1,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 47;
MR_def_label(dir__is_directory_separator_1_1,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__dir__is_directory_separator_1_1
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
{
#line 990 "io.opt"

#ifdef __CYGWIN__
    SUCCESS_INDICATOR = MR_TRUE;
#else
    SUCCESS_INDICATOR = MR_FALSE;
#endif
;}
#line 941 "dir.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(dir__is_directory_separator_1_1_i11);
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	MR_r2 = (MR_Integer) 92;
	MR_GOTO_LAB(dir__is_directory_separator_1_1_i14);
MR_def_label(dir__is_directory_separator_1_1,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 47;
MR_def_label(dir__is_directory_separator_1_1,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 != MR_r2)) {
		MR_GOTO_LAB(dir__is_directory_separator_1_1_i1);
	}
MR_def_label(dir__is_directory_separator_1_1,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_redoip_slot_word(MR_curfr) = (MR_Word) MR_ENTRY(MR_do_fail);
	{
#define	MR_PROC_LABEL	mercury__dir__is_directory_separator_1_1
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
{
#line 990 "io.opt"

#ifdef __CYGWIN__
    SUCCESS_INDICATOR = MR_TRUE;
#else
    SUCCESS_INDICATOR = MR_FALSE;
#endif
;}
#line 974 "dir.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(dir__is_directory_separator_1_1_i15);
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	MR_r1 = (MR_Integer) 92;
	MR_succeed();
MR_def_label(dir__is_directory_separator_1_1,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 47;
MR_def_label(dir__is_directory_separator_1_1,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succeed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(dir_module5)
	MR_init_entry1(fn__dir__this_directory_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__dir__this_directory_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(".", 1);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(dir_module6)
	MR_init_entry1(dir__this_directory_1_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__dir__this_directory_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(".", 1);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(dir_module7)
	MR_init_entry1(fn__dir__parent_directory_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__dir__parent_directory_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("..", 2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(dir_module8)
	MR_init_entry1(dir__parent_directory_1_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__dir__parent_directory_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("..", 2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(dir_module9)
	MR_init_entry1(dir__use_windows_paths_0_0);
	MR_init_label2(dir__use_windows_paths_0_0,2,5)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__dir__use_windows_paths_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__dir__use_windows_paths_0_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
{
#line 983 "io.opt"

#ifdef MR_WIN32
    SUCCESS_INDICATOR = MR_TRUE;
#else
    SUCCESS_INDICATOR = MR_FALSE;
#endif
;}
#line 1096 "dir.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(dir__use_windows_paths_0_0_i2);
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	MR_r1 = (MR_Integer) 92;
	MR_GOTO_LAB(dir__use_windows_paths_0_0_i5);
MR_def_label(dir__use_windows_paths_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 47;
MR_def_label(dir__use_windows_paths_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = ((MR_Integer) MR_r1 == (MR_Integer) 92);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(list__split_last_3_0);
MR_decl_entry(string__to_char_list_2_0);
MR_decl_entry(__Unify___list__list_1_0);
MR_decl_entry(string__from_char_list_2_0);
MR_decl_entry(list__reverse_2_3_0);
MR_decl_entry(char__is_alpha_1_0);
MR_decl_entry(string__from_rev_char_list_2_0);

MR_BEGIN_MODULE(dir_module10)
	MR_init_entry1(dir__split_name_2_3_0);
	MR_init_label8(dir__split_name_2_3_0,4,6,3,8,10,11,14,15)
	MR_init_label8(dir__split_name_2_3_0,21,18,24,28,25,30,32,38)
	MR_init_label8(dir__split_name_2_3_0,47,50,43,58,42,40,37,35)
	MR_init_label8(dir__split_name_2_3_0,62,31,65,68,73,78,80,81)
	MR_init_label1(dir__split_name_2_3_0,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__dir__split_name_2_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(dir__split_name_2_3_0_i1);
	}
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_CHAR_CTOR_ADDR;
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(list__split_last_3_0,
		dir__split_name_2_3_0_i4);
MR_def_label(dir__split_name_2_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(dir__split_name_2_3_0_i3);
	}
	MR_sv(2) = MR_r2;
	MR_r1 = MR_r3;
	MR_np_call_localret_ent(dir__is_directory_separator_1_0,
		dir__split_name_2_3_0_i6);
MR_def_label(dir__split_name_2_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(dir__split_name_2_3_0_i8);
	}
MR_def_label(dir__split_name_2_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_sv(1);
MR_def_label(dir__split_name_2_3_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(".", 1);
	MR_np_call_localret_ent(string__to_char_list_2_0,
		dir__split_name_2_3_0_i10);
MR_def_label(dir__split_name_2_3_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = (MR_Word) MR_CHAR_CTOR_ADDR;
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(__Unify___list__list_1_0,
		dir__split_name_2_3_0_i11);
MR_def_label(dir__split_name_2_3_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(dir__split_name_2_3_0_i1);
	}
	MR_r1 = (MR_Word) MR_string_const("..", 2);
	MR_np_call_localret_ent(string__to_char_list_2_0,
		dir__split_name_2_3_0_i14);
MR_def_label(dir__split_name_2_3_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = (MR_Word) MR_CHAR_CTOR_ADDR;
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(__Unify___list__list_1_0,
		dir__split_name_2_3_0_i15);
MR_def_label(dir__split_name_2_3_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(dir__split_name_2_3_0_i1);
	}
	{
#define	MR_PROC_LABEL	mercury__dir__split_name_2_3_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
{
#line 81 "builtin.opt"

    SUCCESS_INDICATOR = MR_FALSE;
;}
#line 1209 "dir.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(dir__split_name_2_3_0_i18);
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(string__from_char_list_2_0,
		dir__split_name_2_3_0_i21);
MR_def_label(dir__split_name_2_3_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__dir__split_name_2_3_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
{
#line 81 "builtin.opt"

    SUCCESS_INDICATOR = MR_FALSE;
;}
#line 1230 "dir.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(dir__split_name_2_3_0_i1);
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	MR_r2 = (MR_Word) MR_string_const("", 0);
	MR_r3 = (MR_Word) MR_string_const("", 0);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(dir__split_name_2_3_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CHAR_CTOR_ADDR;
	MR_r2 = MR_sv(1);
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_np_call_localret_ent(list__reverse_2_3_0,
		dir__split_name_2_3_0_i24);
MR_def_label(dir__split_name_2_3_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(dir__split_name_2_3_0_i30);
	}
	MR_sv(2) = MR_r1;
	MR_sv(3) = MR_ctfield(1, MR_r1, 1);
	MR_r1 = MR_ctfield(1, MR_r1, 0);
	MR_np_call_localret_ent(dir__is_directory_separator_1_0,
		dir__split_name_2_3_0_i28);
MR_def_label(dir__split_name_2_3_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(dir__split_name_2_3_0_i25);
	}
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(dir__list__takewhile__ho9_4_0,
		dir__split_name_2_3_0_i32);
MR_def_label(dir__split_name_2_3_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
MR_def_label(dir__split_name_2_3_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(dir__list__takewhile__ho9_4_0,
		dir__split_name_2_3_0_i32);
MR_def_label(dir__split_name_2_3_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(dir__split_name_2_3_0_i31);
	}
	if (MR_LTAGS_TEST(MR_r2,0,0)) {
		MR_GOTO_LAB(dir__split_name_2_3_0_i31);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_sv(3) = MR_ctfield(1, MR_tempr1, 1);
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_ctfield(1, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(dir__is_directory_separator_1_0,
		dir__split_name_2_3_0_i38);
MR_def_label(dir__split_name_2_3_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(dir__split_name_2_3_0_i37);
	}
	{
#define	MR_PROC_LABEL	mercury__dir__split_name_2_3_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
{
#line 983 "io.opt"

#ifdef MR_WIN32
    SUCCESS_INDICATOR = MR_TRUE;
#else
    SUCCESS_INDICATOR = MR_FALSE;
#endif
;}
#line 1311 "dir.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(dir__split_name_2_3_0_i47);
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	MR_r1 = (MR_Integer) 92;
	MR_GOTO_LAB(dir__split_name_2_3_0_i50);
MR_def_label(dir__split_name_2_3_0,47)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 47;
MR_def_label(dir__split_name_2_3_0,50)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_EQ(MR_r1,92)) {
		MR_GOTO_LAB(dir__split_name_2_3_0_i43);
	}
	{
#define	MR_PROC_LABEL	mercury__dir__split_name_2_3_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
{
#line 990 "io.opt"

#ifdef __CYGWIN__
    SUCCESS_INDICATOR = MR_TRUE;
#else
    SUCCESS_INDICATOR = MR_FALSE;
#endif
;}
#line 1341 "dir.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(dir__split_name_2_3_0_i42);
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
MR_def_label(dir__split_name_2_3_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_sv(3),0,0)) {
		MR_GOTO_LAB(dir__split_name_2_3_0_i42);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr3 = MR_sv(3);
	MR_tempr1 = MR_ctfield(1, MR_tempr3, 0);
	if (MR_INT_NE(MR_tempr1,58)) {
		MR_GOTO_LAB(dir__split_name_2_3_0_i42);
	}
	MR_tempr1 = MR_ctfield(1, MR_tempr3, 1);
	if (MR_LTAGS_TEST(MR_tempr1,0,0)) {
		MR_GOTO_LAB(dir__split_name_2_3_0_i42);
	}
	MR_tempr2 = MR_ctfield(1, MR_tempr1, 1);
	if (MR_LTAGS_TESTR(MR_tempr2,0,0)) {
		MR_GOTO_LAB(dir__split_name_2_3_0_i42);
	}
	MR_r1 = MR_ctfield(1, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(char__is_alpha_1_0,
		dir__split_name_2_3_0_i58);
MR_def_label(dir__split_name_2_3_0,58)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(dir__split_name_2_3_0_i42);
	}
	MR_r1 = MR_sv(1);
	MR_GOTO_LAB(dir__split_name_2_3_0_i40);
MR_def_label(dir__split_name_2_3_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(3),0,0)) {
		MR_GOTO_LAB(dir__split_name_2_3_0_i37);
	}
	MR_r1 = MR_sv(1);
MR_def_label(dir__split_name_2_3_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_GOTO_LAB(dir__split_name_2_3_0_i35);
MR_def_label(dir__split_name_2_3_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_sv(3);
	MR_np_call_localret_ent(string__from_rev_char_list_2_0,
		dir__split_name_2_3_0_i62);
MR_def_label(dir__split_name_2_3_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(1) = MR_tempr1;
	}
	MR_np_call_localret_ent(string__from_rev_char_list_2_0,
		dir__split_name_2_3_0_i62);
MR_def_label(dir__split_name_2_3_0,62)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	}
	MR_np_call_localret_ent(string__from_rev_char_list_2_0,
		dir__split_name_2_3_0_i81);
MR_def_label(dir__split_name_2_3_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__dir__split_name_2_3_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
{
#line 983 "io.opt"

#ifdef MR_WIN32
    SUCCESS_INDICATOR = MR_TRUE;
#else
    SUCCESS_INDICATOR = MR_FALSE;
#endif
;}
#line 1430 "dir.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(dir__split_name_2_3_0_i65);
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	MR_r1 = (MR_Integer) 92;
	MR_GOTO_LAB(dir__split_name_2_3_0_i68);
MR_def_label(dir__split_name_2_3_0,65)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 47;
MR_def_label(dir__split_name_2_3_0,68)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,92)) {
		MR_GOTO_LAB(dir__split_name_2_3_0_i1);
	}
	if (MR_LTAGS_TEST(MR_sv(1),0,0)) {
		MR_GOTO_LAB(dir__split_name_2_3_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr3 = MR_sv(1);
	MR_tempr1 = MR_ctfield(1, MR_tempr3, 1);
	if (MR_LTAGS_TEST(MR_tempr1,0,0)) {
		MR_GOTO_LAB(dir__split_name_2_3_0_i1);
	}
	MR_tempr2 = MR_ctfield(1, MR_tempr1, 0);
	if (MR_INT_NE(MR_tempr2,58)) {
		MR_GOTO_LAB(dir__split_name_2_3_0_i1);
	}
	MR_tempr2 = MR_tempr3;
	MR_sv(1) = MR_ctfield(1, MR_tempr1, 1);
	MR_sv(2) = MR_ctfield(1, MR_tempr2, 0);
	MR_r1 = MR_sv(2);
	}
	MR_np_call_localret_ent(char__is_alpha_1_0,
		dir__split_name_2_3_0_i73);
MR_def_label(dir__split_name_2_3_0,73)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(dir__split_name_2_3_0_i1);
	}
	if (MR_LTAGS_TEST(MR_sv(1),0,0)) {
		MR_GOTO_LAB(dir__split_name_2_3_0_i1);
	}
	MR_r1 = MR_ctfield(1, MR_sv(1), 0);
	MR_np_call_localret_ent(dir__is_directory_separator_1_0,
		dir__split_name_2_3_0_i78);
MR_def_label(dir__split_name_2_3_0,78)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(dir__split_name_2_3_0_i1);
	}
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(string__from_char_list_2_0,
		dir__split_name_2_3_0_i80);
MR_def_label(dir__split_name_2_3_0,80)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_TAG_COMMON(1,0,0);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(string__from_char_list_2_0,
		dir__split_name_2_3_0_i81);
MR_def_label(dir__split_name_2_3_0,81)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r3 = MR_sv(1);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(dir__split_name_2_3_0,1)
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


MR_BEGIN_MODULE(dir_module11)
	MR_init_entry1(fn__dir__canonicalize_path_chars_2_2_0);
	MR_init_label8(fn__dir__canonicalize_path_chars_2_2_0,70,7,10,13,4,5,17,19)
	MR_init_label3(fn__dir__canonicalize_path_chars_2_2_0,22,18,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__dir__canonicalize_path_chars_2_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
MR_def_label(fn__dir__canonicalize_path_chars_2_2_0,70)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(fn__dir__canonicalize_path_chars_2_2_0_i3);
	}
	MR_sv(3) = MR_ctfield(1, MR_r1, 1);
	MR_r3 = MR_ctfield(1, MR_r1, 0);
	{
#define	MR_PROC_LABEL	mercury__fn__dir__canonicalize_path_chars_2_2_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
{
#line 990 "io.opt"

#ifdef __CYGWIN__
    SUCCESS_INDICATOR = MR_TRUE;
#else
    SUCCESS_INDICATOR = MR_FALSE;
#endif
;}
#line 1554 "dir.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(fn__dir__canonicalize_path_chars_2_2_0_i7);
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	MR_GOTO_LAB(fn__dir__canonicalize_path_chars_2_2_0_i5);
MR_def_label(fn__dir__canonicalize_path_chars_2_2_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(dir__is_directory_separator_1_0,
		fn__dir__canonicalize_path_chars_2_2_0_i10);
MR_def_label(fn__dir__canonicalize_path_chars_2_2_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(fn__dir__canonicalize_path_chars_2_2_0_i4);
	}
	{
#define	MR_PROC_LABEL	mercury__fn__dir__canonicalize_path_chars_2_2_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
{
#line 983 "io.opt"

#ifdef MR_WIN32
    SUCCESS_INDICATOR = MR_TRUE;
#else
    SUCCESS_INDICATOR = MR_FALSE;
#endif
;}
#line 1591 "dir.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(fn__dir__canonicalize_path_chars_2_2_0_i13);
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	MR_r1 = (MR_Integer) 92;
	MR_GOTO_LAB(fn__dir__canonicalize_path_chars_2_2_0_i17);
MR_def_label(fn__dir__canonicalize_path_chars_2_2_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 47;
	MR_GOTO_LAB(fn__dir__canonicalize_path_chars_2_2_0_i17);
MR_def_label(fn__dir__canonicalize_path_chars_2_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
MR_def_label(fn__dir__canonicalize_path_chars_2_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_r1 = MR_r3;
MR_def_label(fn__dir__canonicalize_path_chars_2_2_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_np_call_localret_ent(dir__is_directory_separator_1_0,
		fn__dir__canonicalize_path_chars_2_2_0_i19);
MR_def_label(fn__dir__canonicalize_path_chars_2_2_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(fn__dir__canonicalize_path_chars_2_2_0_i18);
	}
	if (MR_LTAGS_TEST(MR_sv(3),0,0)) {
		MR_GOTO_LAB(fn__dir__canonicalize_path_chars_2_2_0_i18);
	}
	MR_r1 = MR_ctfield(1, MR_sv(3), 0);
	MR_np_call_localret_ent(dir__is_directory_separator_1_0,
		fn__dir__canonicalize_path_chars_2_2_0_i22);
MR_def_label(fn__dir__canonicalize_path_chars_2_2_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(fn__dir__canonicalize_path_chars_2_2_0_i18);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(1);
	MR_succip_word = MR_sv(4);
	MR_GOTO_LAB(fn__dir__canonicalize_path_chars_2_2_0_i70);
MR_def_label(fn__dir__canonicalize_path_chars_2_2_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr1, 1) = MR_sv(1);
	MR_r1 = MR_sv(3);
	MR_succip_word = MR_sv(4);
	MR_GOTO_LAB(fn__dir__canonicalize_path_chars_2_2_0_i70);
	}
MR_def_label(fn__dir__canonicalize_path_chars_2_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CHAR_CTOR_ADDR;
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(list__reverse_2_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(dir_module12)
	MR_init_entry1(fn__dir__canonicalize_path_chars_1_0);
	MR_init_label8(fn__dir__canonicalize_path_chars_1_0,8,11,4,16,19,23,28,33)
	MR_init_label4(fn__dir__canonicalize_path_chars_1_0,29,30,2,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__dir__canonicalize_path_chars_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	{
#define	MR_PROC_LABEL	mercury__fn__dir__canonicalize_path_chars_1_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
{
#line 983 "io.opt"

#ifdef MR_WIN32
    SUCCESS_INDICATOR = MR_TRUE;
#else
    SUCCESS_INDICATOR = MR_FALSE;
#endif
;}
#line 1690 "dir.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(fn__dir__canonicalize_path_chars_1_0_i8);
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Integer) 92;
	MR_GOTO_LAB(fn__dir__canonicalize_path_chars_1_0_i11);
MR_def_label(fn__dir__canonicalize_path_chars_1_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Integer) 47;
MR_def_label(fn__dir__canonicalize_path_chars_1_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_EQ(MR_r1,92)) {
		MR_GOTO_LAB(fn__dir__canonicalize_path_chars_1_0_i4);
	}
	MR_r1 = MR_sv(1);
	{
#define	MR_PROC_LABEL	mercury__fn__dir__canonicalize_path_chars_1_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
{
#line 990 "io.opt"

#ifdef __CYGWIN__
    SUCCESS_INDICATOR = MR_TRUE;
#else
    SUCCESS_INDICATOR = MR_FALSE;
#endif
;}
#line 1723 "dir.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(fn__dir__canonicalize_path_chars_1_0_i3);
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	MR_sv(1) = MR_r1;
MR_def_label(fn__dir__canonicalize_path_chars_1_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_sv(1),0,0)) {
		MR_GOTO_LAB(fn__dir__canonicalize_path_chars_1_0_i2);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(2) = MR_ctfield(1, MR_tempr1, 0);
	MR_sv(3) = MR_ctfield(1, MR_tempr1, 1);
	MR_r1 = MR_sv(2);
	}
	MR_np_call_localret_ent(dir__is_directory_separator_1_0,
		fn__dir__canonicalize_path_chars_1_0_i16);
MR_def_label(fn__dir__canonicalize_path_chars_1_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(fn__dir__canonicalize_path_chars_1_0_i2);
	}
	{
#define	MR_PROC_LABEL	mercury__fn__dir__canonicalize_path_chars_1_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
{
#line 990 "io.opt"

#ifdef __CYGWIN__
    SUCCESS_INDICATOR = MR_TRUE;
#else
    SUCCESS_INDICATOR = MR_FALSE;
#endif
;}
#line 1763 "dir.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(fn__dir__canonicalize_path_chars_1_0_i19);
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	MR_r1 = MR_sv(3);
	MR_sv(1) = MR_sv(2);
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_np_call_localret_ent(fn__dir__canonicalize_path_chars_2_2_0,
		fn__dir__canonicalize_path_chars_1_0_i28);
MR_def_label(fn__dir__canonicalize_path_chars_1_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__fn__dir__canonicalize_path_chars_1_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
{
#line 983 "io.opt"

#ifdef MR_WIN32
    SUCCESS_INDICATOR = MR_TRUE;
#else
    SUCCESS_INDICATOR = MR_FALSE;
#endif
;}
#line 1790 "dir.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(fn__dir__canonicalize_path_chars_1_0_i23);
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	MR_r1 = MR_sv(3);
	MR_sv(1) = (MR_Integer) 92;
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_np_call_localret_ent(fn__dir__canonicalize_path_chars_2_2_0,
		fn__dir__canonicalize_path_chars_1_0_i28);
MR_def_label(fn__dir__canonicalize_path_chars_1_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_sv(1) = (MR_Integer) 47;
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_np_call_localret_ent(fn__dir__canonicalize_path_chars_2_2_0,
		fn__dir__canonicalize_path_chars_1_0_i28);
MR_def_label(fn__dir__canonicalize_path_chars_1_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(fn__dir__canonicalize_path_chars_1_0_i30);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(1, MR_r1, 1);
	if (MR_LTAGS_TESTR(MR_tempr1,0,0)) {
		MR_GOTO_LAB(fn__dir__canonicalize_path_chars_1_0_i30);
	}
	MR_sv(2) = MR_r1;
	MR_r1 = MR_ctfield(1, MR_r1, 0);
	}
	MR_np_call_localret_ent(dir__is_directory_separator_1_0,
		fn__dir__canonicalize_path_chars_1_0_i33);
MR_def_label(fn__dir__canonicalize_path_chars_1_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(fn__dir__canonicalize_path_chars_1_0_i29);
	}
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = MR_sv(1);
	MR_tfield(1, MR_r1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_decr_sp_and_return(4);
MR_def_label(fn__dir__canonicalize_path_chars_1_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
MR_def_label(fn__dir__canonicalize_path_chars_1_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(4);
	}
MR_def_label(fn__dir__canonicalize_path_chars_1_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
MR_def_label(fn__dir__canonicalize_path_chars_1_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(fn__dir__canonicalize_path_chars_2_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(dir_module13)
	MR_init_entry1(dir__strip_leading_win32_root_directory_2_0);
	MR_init_label8(dir__strip_leading_win32_root_directory_2_0,8,10,2,3,16,18,23,24)
	MR_init_label7(dir__strip_leading_win32_root_directory_2_0,12,13,29,32,35,38,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(dir__strip_leading_win32_root_directory_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(dir__strip_leading_win32_root_directory_2_0_i3);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_ctfield(1, MR_r1, 1);
	if (MR_LTAGS_TEST(MR_tempr1,0,0)) {
		MR_GOTO_LAB(dir__strip_leading_win32_root_directory_2_0_i3);
	}
	MR_tempr2 = MR_ctfield(1, MR_tempr1, 0);
	if (MR_INT_NE(MR_tempr2,58)) {
		MR_GOTO_LAB(dir__strip_leading_win32_root_directory_2_0_i3);
	}
	MR_tempr2 = MR_ctfield(1, MR_tempr1, 1);
	if (MR_LTAGS_TEST(MR_tempr2,0,0)) {
		MR_GOTO_LAB(dir__strip_leading_win32_root_directory_2_0_i3);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_ctfield(1, MR_tempr2, 1);
	MR_sv(3) = MR_ctfield(1, MR_tempr2, 0);
	MR_r1 = MR_ctfield(1, MR_r1, 0);
	}
	MR_np_call_localret_ent(char__is_alpha_1_0,
		dir__strip_leading_win32_root_directory_2_0_i8);
MR_def_label(dir__strip_leading_win32_root_directory_2_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(dir__strip_leading_win32_root_directory_2_0_i2);
	}
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(dir__is_directory_separator_1_0,
		dir__strip_leading_win32_root_directory_2_0_i10);
MR_def_label(dir__strip_leading_win32_root_directory_2_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(dir__strip_leading_win32_root_directory_2_0_i2);
	}
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(dir__strip_leading_win32_root_directory_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
MR_def_label(dir__strip_leading_win32_root_directory_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(dir__strip_leading_win32_root_directory_2_0_i13);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_ctfield(1, MR_r1, 1);
	if (MR_LTAGS_TEST(MR_tempr1,0,0)) {
		MR_GOTO_LAB(dir__strip_leading_win32_root_directory_2_0_i13);
	}
	MR_tempr2 = MR_ctfield(1, MR_r1, 0);
	MR_tempr3 = MR_ctfield(1, MR_tempr1, 0);
	if ((MR_tempr2 != MR_tempr3)) {
		MR_GOTO_LAB(dir__strip_leading_win32_root_directory_2_0_i13);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_tempr2;
	MR_sv(3) = MR_ctfield(1, MR_tempr1, 1);
	MR_r1 = MR_tempr2;
	}
	MR_np_call_localret_ent(dir__is_directory_separator_1_0,
		dir__strip_leading_win32_root_directory_2_0_i16);
MR_def_label(dir__strip_leading_win32_root_directory_2_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(dir__strip_leading_win32_root_directory_2_0_i12);
	}
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(dir__list__takewhile__ho8_4_0,
		dir__strip_leading_win32_root_directory_2_0_i18);
MR_def_label(dir__strip_leading_win32_root_directory_2_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(dir__strip_leading_win32_root_directory_2_0_i12);
	}
	if (MR_LTAGS_TEST(MR_r2,0,0)) {
		MR_GOTO_LAB(dir__strip_leading_win32_root_directory_2_0_i38);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r2;
	MR_r3 = MR_ctfield(1, MR_tempr2, 0);
	if ((MR_sv(2) != MR_r3)) {
		MR_GOTO_LAB(dir__strip_leading_win32_root_directory_2_0_i12);
	}
	MR_tempr1 = MR_ctfield(1, MR_tempr2, 1);
	MR_r3 = MR_tempr1;
	if (MR_LTAGS_TESTR(MR_tempr1,0,0)) {
		MR_GOTO_LAB(dir__strip_leading_win32_root_directory_2_0_i23);
	}
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_r1 = MR_TRUE;
	MR_proceed();
	}
MR_def_label(dir__strip_leading_win32_root_directory_2_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r3;
	MR_np_call_localret_ent(dir__list__takewhile__ho7_4_0,
		dir__strip_leading_win32_root_directory_2_0_i24);
MR_def_label(dir__strip_leading_win32_root_directory_2_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(dir__strip_leading_win32_root_directory_2_0_i12);
	}
	if (MR_LTAGS_TEST(MR_r2,0,0)) {
		MR_GOTO_LAB(dir__strip_leading_win32_root_directory_2_0_i38);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(1, MR_r2, 0);
	if ((MR_sv(2) != MR_tempr1)) {
		MR_GOTO_LAB(dir__strip_leading_win32_root_directory_2_0_i12);
	}
	MR_r2 = MR_ctfield(1, MR_r2, 1);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_r1 = MR_TRUE;
	MR_proceed();
	}
MR_def_label(dir__strip_leading_win32_root_directory_2_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
MR_def_label(dir__strip_leading_win32_root_directory_2_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(dir__strip_leading_win32_root_directory_2_0_i1);
	}
	MR_sv(1) = MR_ctfield(1, MR_r1, 1);
	MR_r1 = MR_ctfield(1, MR_r1, 0);
	MR_np_call_localret_ent(dir__is_directory_separator_1_0,
		dir__strip_leading_win32_root_directory_2_0_i29);
MR_def_label(dir__strip_leading_win32_root_directory_2_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(dir__strip_leading_win32_root_directory_2_0_i1);
	}
	if (MR_LTAGS_TESTR(MR_sv(1),0,0)) {
		MR_GOTO_LAB(dir__strip_leading_win32_root_directory_2_0_i32);
	}
	MR_r2 = MR_sv(1);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(dir__strip_leading_win32_root_directory_2_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr3 = MR_sv(1);
	MR_tempr1 = MR_ctfield(1, MR_tempr3, 1);
	MR_tempr2 = MR_tempr3;
	MR_sv(1) = MR_tempr1;
	MR_r1 = MR_ctfield(1, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(dir__is_directory_separator_1_0,
		dir__strip_leading_win32_root_directory_2_0_i35);
MR_def_label(dir__strip_leading_win32_root_directory_2_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(dir__strip_leading_win32_root_directory_2_0_i1);
	}
	MR_r2 = MR_sv(1);
MR_def_label(dir__strip_leading_win32_root_directory_2_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(dir__strip_leading_win32_root_directory_2_0,1)
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

MR_decl_entry(require__error_1_0);

MR_BEGIN_MODULE(dir_module14)
	MR_init_entry1(dir__path_name_is_absolute_1_0);
	MR_init_label8(dir__path_name_is_absolute_1_0,3,13,16,11,20,63,34,8)
	MR_init_label1(dir__path_name_is_absolute_1_0,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__dir__path_name_is_absolute_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__dir__path_name_is_absolute_1_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
{
#line 81 "builtin.opt"

    SUCCESS_INDICATOR = MR_FALSE;
;}
#line 2088 "dir.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(dir__path_name_is_absolute_1_0_i3);
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_r1 = (MR_Word) MR_string_const("dir.dotnet_path_name_is_absolute_2 called for non-.NET CLI backend", 66);
	MR_np_call_localret_ent(require__error_1_0,
		dir__path_name_is_absolute_1_0_i34);
MR_def_label(dir__path_name_is_absolute_1_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__dir__path_name_is_absolute_1_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
{
#line 983 "io.opt"

#ifdef MR_WIN32
    SUCCESS_INDICATOR = MR_TRUE;
#else
    SUCCESS_INDICATOR = MR_FALSE;
#endif
;}
#line 2115 "dir.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(dir__path_name_is_absolute_1_0_i13);
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	MR_r2 = (MR_Integer) 92;
	MR_GOTO_LAB(dir__path_name_is_absolute_1_0_i16);
MR_def_label(dir__path_name_is_absolute_1_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 47;
MR_def_label(dir__path_name_is_absolute_1_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r2,92)) {
		MR_GOTO_LAB(dir__path_name_is_absolute_1_0_i11);
	}
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(string__to_char_list_2_0,
		dir__path_name_is_absolute_1_0_i20);
MR_def_label(dir__path_name_is_absolute_1_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__dir__path_name_is_absolute_1_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
{
#line 990 "io.opt"

#ifdef __CYGWIN__
    SUCCESS_INDICATOR = MR_TRUE;
#else
    SUCCESS_INDICATOR = MR_FALSE;
#endif
;}
#line 2151 "dir.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(dir__path_name_is_absolute_1_0_i8);
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(string__to_char_list_2_0,
		dir__path_name_is_absolute_1_0_i20);
MR_def_label(dir__path_name_is_absolute_1_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__dir__canonicalize_path_chars_1_0,
		dir__path_name_is_absolute_1_0_i63);
MR_def_label(dir__path_name_is_absolute_1_0,63)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(dir__strip_leading_win32_root_directory_2_0);
MR_def_label(dir__path_name_is_absolute_1_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(2);
MR_def_label(dir__path_name_is_absolute_1_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	{
	MR_String	Str;
	MR_Integer	Length;
#define	MR_PROC_LABEL	mercury__dir__path_name_is_absolute_1_0
	Str = (MR_String) MR_r1;
{
#line 218 "string.opt"

    Length = strlen(Str);
;}
#line 2188 "dir.c"
	MR_tempr1 = Length;
#undef	MR_PROC_LABEL
	}
	{
	MR_Integer	Index;
	MR_Integer	Length;
#define	MR_PROC_LABEL	mercury__dir__path_name_is_absolute_1_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
	Index = (MR_Integer) 0;
	Length = MR_tempr1;
{
#line 974 "string.opt"

    /*
    ** We do not test for negative values of Index because (a) MR_Unsigned
    ** is unsigned and hence a negative argument will appear as a very large
    ** positive one after the cast and (b) anybody dealing with the case
    ** where strlen(Str) > MAXINT is clearly barking mad (and one may well get
    ** an integer overflow error in this case).
    */
    SUCCESS_INDICATOR = ((MR_Unsigned) Index < (MR_Unsigned) Length);
;}
#line 2213 "dir.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(dir__path_name_is_absolute_1_0_i1);
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	{
	MR_String	Str;
	MR_Integer	Index;
	MR_Char	Ch;
#define	MR_PROC_LABEL	mercury__dir__path_name_is_absolute_1_0
	Str = (MR_String) MR_r1;
	Index = (MR_Integer) 0;
{
#line 507 "string.opt"

    Ch = Str[Index];
;}
#line 2231 "dir.c"
	MR_r1 = Ch;
#undef	MR_PROC_LABEL
	}
	MR_np_tailcall_ent(dir__is_directory_separator_1_0);
	}
MR_def_label(dir__path_name_is_absolute_1_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(dir_module15)
	MR_init_entry1(dir__is_root_directory_1_0);
	MR_init_label8(dir__is_root_directory_1_0,6,7,3,17,20,15,24,40)
	MR_init_label3(dir__is_root_directory_1_0,12,92,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__dir__is_root_directory_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__dir__is_root_directory_1_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
{
#line 81 "builtin.opt"

    SUCCESS_INDICATOR = MR_FALSE;
;}
#line 2270 "dir.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(dir__is_root_directory_1_0_i3);
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(string__from_char_list_2_0,
		dir__is_root_directory_1_0_i6);
MR_def_label(dir__is_root_directory_1_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(dir__path_name_is_absolute_1_0,
		dir__is_root_directory_1_0_i7);
MR_def_label(dir__is_root_directory_1_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(dir__is_root_directory_1_0_i1);
	}
	MR_r1 = (MR_Word) MR_string_const("dir.is_dotnet_root_directory called for non-.NET CLI backend", 60);
	MR_np_call_localret_ent(require__error_1_0,
		dir__is_root_directory_1_0_i40);
MR_def_label(dir__is_root_directory_1_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__dir__is_root_directory_1_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
{
#line 983 "io.opt"

#ifdef MR_WIN32
    SUCCESS_INDICATOR = MR_TRUE;
#else
    SUCCESS_INDICATOR = MR_FALSE;
#endif
;}
#line 2309 "dir.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(dir__is_root_directory_1_0_i17);
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	MR_r2 = (MR_Integer) 92;
	MR_GOTO_LAB(dir__is_root_directory_1_0_i20);
MR_def_label(dir__is_root_directory_1_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 47;
MR_def_label(dir__is_root_directory_1_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r2,92)) {
		MR_GOTO_LAB(dir__is_root_directory_1_0_i15);
	}
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(dir__strip_leading_win32_root_directory_2_0,
		dir__is_root_directory_1_0_i24);
MR_def_label(dir__is_root_directory_1_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__dir__is_root_directory_1_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
{
#line 990 "io.opt"

#ifdef __CYGWIN__
    SUCCESS_INDICATOR = MR_TRUE;
#else
    SUCCESS_INDICATOR = MR_FALSE;
#endif
;}
#line 2345 "dir.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(dir__is_root_directory_1_0_i12);
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(dir__strip_leading_win32_root_directory_2_0,
		dir__is_root_directory_1_0_i24);
MR_def_label(dir__is_root_directory_1_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(dir__is_root_directory_1_0_i1);
	}
	MR_r1 = (MR_Word) MR_CHAR_CTOR_ADDR;
	MR_r3 = MR_r2;
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(__Unify___list__list_1_0);
MR_def_label(dir__is_root_directory_1_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(2);
MR_def_label(dir__is_root_directory_1_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(dir__is_root_directory_1_0_i92);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(1, MR_r1, 1);
	if (MR_LTAGS_TESTR(MR_tempr1,0,0)) {
		MR_GOTO_LAB(dir__is_root_directory_1_0_i92);
	}
	MR_r1 = MR_ctfield(1, MR_r1, 0);
	MR_np_tailcall_ent(dir__is_directory_separator_1_0);
	}
MR_def_label(dir__is_root_directory_1_0,92)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
MR_def_label(dir__is_root_directory_1_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(2);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(dir_module16)
	MR_init_entry1(dir__split_name_3_0);
	MR_init_label4(dir__split_name_3_0,2,3,6,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__dir__split_name_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(string__to_char_list_2_0,
		dir__split_name_3_0_i2);
MR_def_label(dir__split_name_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__dir__canonicalize_path_chars_1_0,
		dir__split_name_3_0_i3);
MR_def_label(dir__split_name_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(dir__is_root_directory_1_0,
		dir__split_name_3_0_i6);
MR_def_label(dir__split_name_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(dir__split_name_3_0_i1);
	}
	MR_r1 = MR_sv(1);
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(dir__split_name_2_3_0);
MR_def_label(dir__split_name_3_0,1)
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


MR_BEGIN_MODULE(dir_module17)
	MR_init_entry1(fn__dir__basename_1_0);
	MR_init_label8(fn__dir__basename_1_0,2,3,6,11,14,20,8,23)
	MR_init_label8(fn__dir__basename_1_0,25,22,27,29,30,33,34,38)
	MR_init_label2(fn__dir__basename_1_0,37,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__dir__basename_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(string__to_char_list_2_0,
		fn__dir__basename_1_0_i2);
MR_def_label(fn__dir__basename_1_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__dir__canonicalize_path_chars_1_0,
		fn__dir__basename_1_0_i3);
MR_def_label(fn__dir__basename_1_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_np_call_localret_ent(dir__is_root_directory_1_0,
		fn__dir__basename_1_0_i6);
MR_def_label(fn__dir__basename_1_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(fn__dir__basename_1_0_i1);
	}
	MR_r1 = MR_sv(2);
	{
#define	MR_PROC_LABEL	mercury__fn__dir__basename_1_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
{
#line 983 "io.opt"

#ifdef MR_WIN32
    SUCCESS_INDICATOR = MR_TRUE;
#else
    SUCCESS_INDICATOR = MR_FALSE;
#endif
;}
#line 2492 "dir.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(fn__dir__basename_1_0_i11);
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	MR_sv(2) = MR_r1;
	MR_r1 = (MR_Integer) 92;
	MR_GOTO_LAB(fn__dir__basename_1_0_i14);
MR_def_label(fn__dir__basename_1_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = (MR_Integer) 47;
MR_def_label(fn__dir__basename_1_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,92)) {
		MR_GOTO_LAB(fn__dir__basename_1_0_i8);
	}
	if (MR_LTAGS_TEST(MR_sv(2),0,0)) {
		MR_GOTO_LAB(fn__dir__basename_1_0_i8);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr3 = MR_sv(2);
	MR_tempr1 = MR_ctfield(1, MR_tempr3, 1);
	if (MR_LTAGS_TEST(MR_tempr1,0,0)) {
		MR_GOTO_LAB(fn__dir__basename_1_0_i8);
	}
	MR_tempr2 = MR_ctfield(1, MR_tempr1, 0);
	if (MR_INT_NE(MR_tempr2,58)) {
		MR_GOTO_LAB(fn__dir__basename_1_0_i8);
	}
	MR_tempr2 = MR_ctfield(1, MR_tempr1, 1);
	if (MR_LTAGS_TESTR(MR_tempr2,0,0)) {
		MR_GOTO_LAB(fn__dir__basename_1_0_i8);
	}
	MR_r1 = MR_ctfield(1, MR_tempr3, 0);
	}
	MR_np_call_localret_ent(char__is_alpha_1_0,
		fn__dir__basename_1_0_i20);
MR_def_label(fn__dir__basename_1_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(fn__dir__basename_1_0_i1);
	}
MR_def_label(fn__dir__basename_1_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_r1 = (MR_Word) MR_CHAR_CTOR_ADDR;
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(list__split_last_3_0,
		fn__dir__basename_1_0_i23);
MR_def_label(fn__dir__basename_1_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(fn__dir__basename_1_0_i22);
	}
	MR_sv(3) = MR_r2;
	MR_r1 = MR_r3;
	MR_np_call_localret_ent(dir__is_directory_separator_1_0,
		fn__dir__basename_1_0_i25);
MR_def_label(fn__dir__basename_1_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(fn__dir__basename_1_0_i27);
	}
MR_def_label(fn__dir__basename_1_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_sv(2);
MR_def_label(fn__dir__basename_1_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(".", 1);
	MR_np_call_localret_ent(string__to_char_list_2_0,
		fn__dir__basename_1_0_i29);
MR_def_label(fn__dir__basename_1_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = (MR_Word) MR_CHAR_CTOR_ADDR;
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(__Unify___list__list_1_0,
		fn__dir__basename_1_0_i30);
MR_def_label(fn__dir__basename_1_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(fn__dir__basename_1_0_i1);
	}
	MR_r1 = (MR_Word) MR_string_const("..", 2);
	MR_np_call_localret_ent(string__to_char_list_2_0,
		fn__dir__basename_1_0_i33);
MR_def_label(fn__dir__basename_1_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = (MR_Word) MR_CHAR_CTOR_ADDR;
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(__Unify___list__list_1_0,
		fn__dir__basename_1_0_i34);
MR_def_label(fn__dir__basename_1_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(fn__dir__basename_1_0_i1);
	}
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(dir__split_name_2_3_0,
		fn__dir__basename_1_0_i38);
MR_def_label(fn__dir__basename_1_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(fn__dir__basename_1_0_i37);
	}
	MR_r2 = MR_r3;
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(fn__dir__basename_1_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(fn__dir__basename_1_0,1)
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


MR_BEGIN_MODULE(dir_module18)
	MR_init_entry1(dir__basename_2_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__dir__basename_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(fn__dir__basename_1_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_string_0;
MR_decl_entry(fn__require__func_error_1_0);

MR_BEGIN_MODULE(dir_module19)
	MR_init_entry1(fn__dir__basename_det_1_0);
	MR_init_label2(fn__dir__basename_det_1_0,3,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__dir__basename_det_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(fn__dir__basename_1_0,
		fn__dir__basename_det_1_0_i3);
MR_def_label(fn__dir__basename_det_1_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(fn__dir__basename_det_1_0_i2);
	}
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(1);
MR_def_label(fn__dir__basename_det_1_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = (MR_Word) MR_string_const("dir.basename_det: given directory is root directory", 51);
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_np_tailcall_ent(fn__require__func_error_1_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(dir_module20)
	MR_init_entry1(fn__dir__det_basename_1_0);
	MR_init_label2(fn__dir__det_basename_1_0,3,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__dir__det_basename_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(fn__dir__basename_1_0,
		fn__dir__det_basename_1_0_i3);
MR_def_label(fn__dir__det_basename_1_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(fn__dir__det_basename_1_0_i2);
	}
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(1);
MR_def_label(fn__dir__det_basename_1_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = (MR_Word) MR_string_const("dir.basename_det: given directory is root directory", 51);
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_np_tailcall_ent(fn__require__func_error_1_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(dir_module21)
	MR_init_entry1(fn__dir__dirname_1_0);
	MR_init_label8(fn__dir__dirname_1_0,2,3,6,4,12,15,21,9)
	MR_init_label8(fn__dir__dirname_1_0,26,24,30,32,29,35,36,28)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__dir__dirname_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(string__to_char_list_2_0,
		fn__dir__dirname_1_0_i2);
MR_def_label(fn__dir__dirname_1_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__dir__canonicalize_path_chars_1_0,
		fn__dir__dirname_1_0_i3);
MR_def_label(fn__dir__dirname_1_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(dir__is_root_directory_1_0,
		fn__dir__dirname_1_0_i6);
MR_def_label(fn__dir__dirname_1_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(fn__dir__dirname_1_0_i4);
	}
	MR_r1 = MR_sv(1);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(string__from_char_list_2_0);
MR_def_label(fn__dir__dirname_1_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	{
#define	MR_PROC_LABEL	mercury__fn__dir__dirname_1_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
{
#line 983 "io.opt"

#ifdef MR_WIN32
    SUCCESS_INDICATOR = MR_TRUE;
#else
    SUCCESS_INDICATOR = MR_FALSE;
#endif
;}
#line 2769 "dir.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(fn__dir__dirname_1_0_i12);
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Integer) 92;
	MR_GOTO_LAB(fn__dir__dirname_1_0_i15);
MR_def_label(fn__dir__dirname_1_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Integer) 47;
MR_def_label(fn__dir__dirname_1_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,92)) {
		MR_GOTO_LAB(fn__dir__dirname_1_0_i9);
	}
	if (MR_LTAGS_TEST(MR_sv(1),0,0)) {
		MR_GOTO_LAB(fn__dir__dirname_1_0_i9);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr3 = MR_sv(1);
	MR_tempr1 = MR_ctfield(1, MR_tempr3, 1);
	if (MR_LTAGS_TEST(MR_tempr1,0,0)) {
		MR_GOTO_LAB(fn__dir__dirname_1_0_i9);
	}
	MR_tempr2 = MR_ctfield(1, MR_tempr1, 0);
	if (MR_INT_NE(MR_tempr2,58)) {
		MR_GOTO_LAB(fn__dir__dirname_1_0_i9);
	}
	MR_tempr2 = MR_ctfield(1, MR_tempr1, 1);
	if (MR_LTAGS_TESTR(MR_tempr2,0,0)) {
		MR_GOTO_LAB(fn__dir__dirname_1_0_i9);
	}
	MR_r1 = MR_ctfield(1, MR_tempr3, 0);
	}
	MR_np_call_localret_ent(char__is_alpha_1_0,
		fn__dir__dirname_1_0_i21);
MR_def_label(fn__dir__dirname_1_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(fn__dir__dirname_1_0_i9);
	}
	MR_r1 = MR_sv(1);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(string__from_char_list_2_0);
MR_def_label(fn__dir__dirname_1_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(dir__split_name_2_3_0,
		fn__dir__dirname_1_0_i26);
MR_def_label(fn__dir__dirname_1_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(fn__dir__dirname_1_0_i24);
	}
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(3);
MR_def_label(fn__dir__dirname_1_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r1 = (MR_Word) MR_CHAR_CTOR_ADDR;
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(list__split_last_3_0,
		fn__dir__dirname_1_0_i30);
MR_def_label(fn__dir__dirname_1_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(fn__dir__dirname_1_0_i29);
	}
	MR_sv(2) = MR_r2;
	MR_r1 = MR_r3;
	MR_np_call_localret_ent(dir__is_directory_separator_1_0,
		fn__dir__dirname_1_0_i32);
MR_def_label(fn__dir__dirname_1_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(fn__dir__dirname_1_0_i29);
	}
	MR_sv(1) = MR_sv(2);
	MR_r1 = (MR_Word) MR_string_const("..", 2);
	MR_np_call_localret_ent(string__to_char_list_2_0,
		fn__dir__dirname_1_0_i35);
MR_def_label(fn__dir__dirname_1_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("..", 2);
	MR_np_call_localret_ent(string__to_char_list_2_0,
		fn__dir__dirname_1_0_i35);
MR_def_label(fn__dir__dirname_1_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = (MR_Word) MR_CHAR_CTOR_ADDR;
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(__Unify___list__list_1_0,
		fn__dir__dirname_1_0_i36);
MR_def_label(fn__dir__dirname_1_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(fn__dir__dirname_1_0_i28);
	}
	MR_r1 = (MR_Word) MR_string_const("..", 2);
	MR_decr_sp_and_return(3);
MR_def_label(fn__dir__dirname_1_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(".", 1);
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(dir_module22)
	MR_init_entry1(dir__dirname_2_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__dir__dirname_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(fn__dir__dirname_1_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(dir_module23)
	MR_init_entry1(dir__path_name_is_root_directory_1_0);
	MR_init_label2(dir__path_name_is_root_directory_1_0,2,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__dir__path_name_is_root_directory_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(string__to_char_list_2_0,
		dir__path_name_is_root_directory_1_0_i2);
MR_def_label(dir__path_name_is_root_directory_1_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__dir__canonicalize_path_chars_1_0,
		dir__path_name_is_root_directory_1_0_i3);
MR_def_label(dir__path_name_is_root_directory_1_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_np_tailcall_ent(dir__is_root_directory_1_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(string__append_3_2);
MR_decl_entry(string__to_char_list_2_1);

MR_BEGIN_MODULE(dir_module24)
	MR_init_entry1(fn__f_100_105_114_95_95_47_2_0);
	MR_init_label8(fn__f_100_105_114_95_95_47_2_0,2,3,4,5,6,7,10,8)
	MR_init_label8(fn__f_100_105_114_95_95_47_2_0,16,19,21,26,28,13,36,39)
	MR_init_label7(fn__f_100_105_114_95_95_47_2_0,42,33,47,30,31,51,55)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__f_100_105_114_95_95_47_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_np_call_localret_ent(string__to_char_list_2_0,
		fn__f_100_105_114_95_95_47_2_0_i2);
MR_def_label(fn__f_100_105_114_95_95_47_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__dir__canonicalize_path_chars_1_0,
		fn__f_100_105_114_95_95_47_2_0_i3);
MR_def_label(fn__f_100_105_114_95_95_47_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(string__from_char_list_2_0,
		fn__f_100_105_114_95_95_47_2_0_i4);
MR_def_label(fn__f_100_105_114_95_95_47_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	}
	MR_np_call_localret_ent(string__to_char_list_2_0,
		fn__f_100_105_114_95_95_47_2_0_i5);
MR_def_label(fn__f_100_105_114_95_95_47_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__dir__canonicalize_path_chars_1_0,
		fn__f_100_105_114_95_95_47_2_0_i6);
MR_def_label(fn__f_100_105_114_95_95_47_2_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(string__from_char_list_2_0,
		fn__f_100_105_114_95_95_47_2_0_i7);
MR_def_label(fn__f_100_105_114_95_95_47_2_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_np_call_localret_ent(dir__path_name_is_absolute_1_0,
		fn__f_100_105_114_95_95_47_2_0_i10);
MR_def_label(fn__f_100_105_114_95_95_47_2_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(fn__f_100_105_114_95_95_47_2_0_i8);
	}
	MR_r1 = (MR_Word) MR_string_const("dir./: second argument is absolute", 34);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(require__error_1_0);
MR_def_label(fn__f_100_105_114_95_95_47_2_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	{
#define	MR_PROC_LABEL	mercury__fn__f_100_105_114_95_95_47_2_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
{
#line 983 "io.opt"

#ifdef MR_WIN32
    SUCCESS_INDICATOR = MR_TRUE;
#else
    SUCCESS_INDICATOR = MR_FALSE;
#endif
;}
#line 3011 "dir.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(fn__f_100_105_114_95_95_47_2_0_i16);
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	MR_sv(2) = MR_r1;
	MR_r1 = (MR_Integer) 92;
	MR_GOTO_LAB(fn__f_100_105_114_95_95_47_2_0_i19);
MR_def_label(fn__f_100_105_114_95_95_47_2_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = (MR_Integer) 47;
MR_def_label(fn__f_100_105_114_95_95_47_2_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,92)) {
		MR_GOTO_LAB(fn__f_100_105_114_95_95_47_2_0_i13);
	}
	{
	MR_Word MR_tempr1;
	{
	MR_String	Str;
	MR_Integer	Length;
#define	MR_PROC_LABEL	mercury__fn__f_100_105_114_95_95_47_2_0
	Str = (MR_String) MR_sv(2);
{
#line 218 "string.opt"

    Length = strlen(Str);
;}
#line 3041 "dir.c"
	MR_tempr1 = Length;
#undef	MR_PROC_LABEL
	}
	MR_r2 = MR_tempr1;
	if (MR_INT_LT(MR_tempr1,2)) {
		MR_GOTO_LAB(fn__f_100_105_114_95_95_47_2_0_i13);
	}
	{
	MR_String	Str;
	MR_Integer	Index;
	MR_Char	Ch;
#define	MR_PROC_LABEL	mercury__fn__f_100_105_114_95_95_47_2_0
	Str = (MR_String) MR_sv(2);
	Index = (MR_Integer) 0;
{
#line 507 "string.opt"

    Ch = Str[Index];
;}
#line 3061 "dir.c"
	MR_r1 = Ch;
#undef	MR_PROC_LABEL
	}
	MR_sv(3) = MR_tempr1;
	}
	MR_np_call_localret_ent(char__is_alpha_1_0,
		fn__f_100_105_114_95_95_47_2_0_i21);
MR_def_label(fn__f_100_105_114_95_95_47_2_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(fn__f_100_105_114_95_95_47_2_0_i13);
	}
	{
	MR_String	Str;
	MR_Integer	Index;
	MR_Char	Ch;
#define	MR_PROC_LABEL	mercury__fn__f_100_105_114_95_95_47_2_0
	Str = (MR_String) MR_sv(2);
	Index = (MR_Integer) 1;
{
#line 507 "string.opt"

    Ch = Str[Index];
;}
#line 3086 "dir.c"
	MR_r2 = Ch;
#undef	MR_PROC_LABEL
	}
	if (MR_INT_NE(MR_r2,58)) {
		MR_GOTO_LAB(fn__f_100_105_114_95_95_47_2_0_i13);
	}
	if (MR_INT_LE(MR_sv(3),2)) {
		MR_GOTO_LAB(fn__f_100_105_114_95_95_47_2_0_i28);
	}
	{
	MR_String	Str;
	MR_Integer	Index;
	MR_Char	Ch;
#define	MR_PROC_LABEL	mercury__fn__f_100_105_114_95_95_47_2_0
	Str = (MR_String) MR_sv(2);
	Index = (MR_Integer) 2;
{
#line 507 "string.opt"

    Ch = Str[Index];
;}
#line 3108 "dir.c"
	MR_r1 = Ch;
#undef	MR_PROC_LABEL
	}
	MR_np_call_localret_ent(dir__is_directory_separator_1_0,
		fn__f_100_105_114_95_95_47_2_0_i26);
MR_def_label(fn__f_100_105_114_95_95_47_2_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(fn__f_100_105_114_95_95_47_2_0_i13);
	}
MR_def_label(fn__f_100_105_114_95_95_47_2_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("dir./: second argument is a current drive relative path", 55);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(require__error_1_0);
MR_def_label(fn__f_100_105_114_95_95_47_2_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	{
	MR_String	Str;
	MR_Integer	Length;
#define	MR_PROC_LABEL	mercury__fn__f_100_105_114_95_95_47_2_0
	Str = (MR_String) MR_sv(1);
{
#line 218 "string.opt"

    Length = strlen(Str);
;}
#line 3138 "dir.c"
	MR_r2 = Length;
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__fn__f_100_105_114_95_95_47_2_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
{
#line 983 "io.opt"

#ifdef MR_WIN32
    SUCCESS_INDICATOR = MR_TRUE;
#else
    SUCCESS_INDICATOR = MR_FALSE;
#endif
;}
#line 3156 "dir.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(fn__f_100_105_114_95_95_47_2_0_i36);
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	MR_sv(2) = MR_r1;
	MR_sv(3) = MR_r2;
	MR_r1 = (MR_Integer) 92;
	MR_GOTO_LAB(fn__f_100_105_114_95_95_47_2_0_i39);
MR_def_label(fn__f_100_105_114_95_95_47_2_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_sv(3) = MR_r2;
	MR_r1 = (MR_Integer) 47;
MR_def_label(fn__f_100_105_114_95_95_47_2_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,92)) {
		MR_GOTO_LAB(fn__f_100_105_114_95_95_47_2_0_i33);
	}
	if (MR_INT_NE(MR_sv(3),2)) {
		MR_GOTO_LAB(fn__f_100_105_114_95_95_47_2_0_i33);
	}
	{
	MR_String	Str;
	MR_Integer	Index;
	MR_Char	Ch;
#define	MR_PROC_LABEL	mercury__fn__f_100_105_114_95_95_47_2_0
	Str = (MR_String) MR_sv(1);
	Index = (MR_Integer) 0;
{
#line 507 "string.opt"

    Ch = Str[Index];
;}
#line 3191 "dir.c"
	MR_r1 = Ch;
#undef	MR_PROC_LABEL
	}
	MR_np_call_localret_ent(char__is_alpha_1_0,
		fn__f_100_105_114_95_95_47_2_0_i42);
MR_def_label(fn__f_100_105_114_95_95_47_2_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(fn__f_100_105_114_95_95_47_2_0_i33);
	}
	{
	MR_Word MR_tempr1;
	{
	MR_String	Str;
	MR_Integer	Index;
	MR_Char	Ch;
#define	MR_PROC_LABEL	mercury__fn__f_100_105_114_95_95_47_2_0
	Str = (MR_String) MR_sv(1);
	Index = (MR_Integer) 1;
{
#line 507 "string.opt"

    Ch = Str[Index];
;}
#line 3216 "dir.c"
	MR_tempr1 = Ch;
#undef	MR_PROC_LABEL
	}
	if (MR_INT_NE(MR_tempr1,58)) {
		MR_GOTO_LAB(fn__f_100_105_114_95_95_47_2_0_i33);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(string__append_3_2);
	}
MR_def_label(fn__f_100_105_114_95_95_47_2_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(3);
	if (MR_INT_EQ(MR_tempr1,0)) {
		MR_GOTO_LAB(fn__f_100_105_114_95_95_47_2_0_i31);
	}
	MR_tempr2 = ((MR_Integer) MR_tempr1 - (MR_Integer) 1);
	{
	MR_String	Str;
	MR_Integer	Index;
	MR_Char	Ch;
#define	MR_PROC_LABEL	mercury__fn__f_100_105_114_95_95_47_2_0
	Str = (MR_String) MR_sv(1);
	Index = MR_tempr2;
{
#line 507 "string.opt"

    Ch = Str[Index];
;}
#line 3251 "dir.c"
	MR_tempr1 = Ch;
#undef	MR_PROC_LABEL
	}
	MR_sv(2) = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(dir__is_directory_separator_1_0,
		fn__f_100_105_114_95_95_47_2_0_i47);
MR_def_label(fn__f_100_105_114_95_95_47_2_0,47)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(fn__f_100_105_114_95_95_47_2_0_i30);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(string__append_3_2);
MR_def_label(fn__f_100_105_114_95_95_47_2_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
MR_def_label(fn__f_100_105_114_95_95_47_2_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__fn__f_100_105_114_95_95_47_2_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
{
#line 983 "io.opt"

#ifdef MR_WIN32
    SUCCESS_INDICATOR = MR_TRUE;
#else
    SUCCESS_INDICATOR = MR_FALSE;
#endif
;}
#line 3289 "dir.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(fn__f_100_105_114_95_95_47_2_0_i51);
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	MR_sv(2) = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(1,0,1);
	MR_np_call_localret_ent(string__to_char_list_2_1,
		fn__f_100_105_114_95_95_47_2_0_i55);
MR_def_label(fn__f_100_105_114_95_95_47_2_0,51)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(1,0,2);
	MR_np_call_localret_ent(string__to_char_list_2_1,
		fn__f_100_105_114_95_95_47_2_0_i55);
MR_def_label(fn__f_100_105_114_95_95_47_2_0,55)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_r1;
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr2;
	{
	MR_Word	Strs;
	MR_String	Str;
#define	MR_PROC_LABEL	mercury__fn__f_100_105_114_95_95_47_2_0
	Strs = MR_tempr1;
{
#line 706 "string.opt"
{
    MR_Word list = Strs;
    MR_Word tmp;
    size_t  len;

    /* Determine the total length of all strings */
    len = 0;
    while (!MR_list_is_empty(list)) {
        len += strlen((MR_String) MR_list_head(list));
        list = MR_list_tail(list);
    }

    /* Allocate enough word aligned memory for the string */
    MR_allocate_aligned_string_msg(Str, len, MR_PROC_LABEL);

    /* Copy the strings into the new memory */
    len = 0;
    list = Strs;
    while (!MR_list_is_empty(list)) {
        strcpy((MR_String) Str + len, (MR_String) MR_list_head(list));
        len += strlen((MR_String) MR_list_head(list));
        list = MR_list_tail(list);
    }

    Str[len] = '\0';
};}
#line 3351 "dir.c"
	MR_r1 = (MR_Word) Str;
#undef	MR_PROC_LABEL
	}
	MR_decr_sp_and_return(4);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(dir_module25)
	MR_init_entry1(fn__dir__make_path_name_2_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__dir__make_path_name_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(fn__f_100_105_114_95_95_47_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(dir_module26)
	MR_init_entry1(dir__can_implement_make_directory_0_0);
	MR_init_label1(dir__can_implement_make_directory_0_0,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(dir__can_implement_make_directory_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__dir__can_implement_make_directory_0_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
{
#line 931 "dir.m"

#if defined(MR_WIN32)
    SUCCESS_INDICATOR = MR_TRUE;
#elif defined(MR_HAVE_MKDIR)
    SUCCESS_INDICATOR = MR_TRUE;
#else
    SUCCESS_INDICATOR = MR_FALSE;
#endif
;}
#line 3409 "dir.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(dir__can_implement_make_directory_0_0_i1);
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(dir__can_implement_make_directory_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(dir_module27)
	MR_init_entry1(dir__make_single_directory_2_5_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__dir__make_single_directory_2_5_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	{
	MR_Integer	ErrorIfExists;
	MR_String	DirName;
	MR_Word	Result;
	MR_Word	IO0;
	MR_Word	IO;
#define	MR_PROC_LABEL	mercury__dir__make_single_directory_2_5_0
	ErrorIfExists = MR_r1;
	DirName = (MR_String) MR_r2;
	MR_save_registers();
{
#line 976 "dir.m"
{
#if defined(MR_WIN32)
    if (CreateDirectory(DirName, NULL)) {
        Result = ML_make_mkdir_res_ok();
    } else {
        int error;

        error = GetLastError();
        if (!ErrorIfExists && error == ERROR_ALREADY_EXISTS) {
            ML_make_mkdir_res_exists(error, DirName, &Result);
        } else {
            ML_make_mkdir_res_error(error, &Result);
        }
    }
#elif defined(MR_HAVE_MKDIR)
    if (mkdir(DirName, 0777) == 0) {
        Result = ML_make_mkdir_res_ok();
  #ifdef EEXIST
    } else if (!ErrorIfExists && errno == EEXIST) {
        ML_make_mkdir_res_exists(errno, DirName, &Result);
  #endif /* EEXIST */
    } else {
        ML_make_mkdir_res_error(errno, &Result);
    }
#else /* !MR_WIN32 && !MR_HAVE_MKDIR */
    MR_fatal_error(
        "dir.make_single_directory_2 called but not supported");
#endif
    IO = IO0;
};}
#line 3482 "dir.c"
#ifndef MR_CONSERVATIVE_GC
	MR_restore_registers();
#endif
	MR_r1 = Result;
#undef	MR_PROC_LABEL
	}
	MR_decr_sp_and_return(1);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(io__check_file_accessibility_5_0);

MR_BEGIN_MODULE(dir_module28)
	MR_init_entry1(dir__make_directory_4_0);
	MR_init_label8(dir__make_directory_4_0,6,7,8,9,12,27,3,49)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__dir__make_directory_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__dir__make_directory_4_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
{
#line 931 "dir.m"

#if defined(MR_WIN32)
    SUCCESS_INDICATOR = MR_TRUE;
#elif defined(MR_HAVE_MKDIR)
    SUCCESS_INDICATOR = MR_TRUE;
#else
    SUCCESS_INDICATOR = MR_FALSE;
#endif
;}
#line 3525 "dir.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(dir__make_directory_4_0_i3);
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(fn__dir__dirname_1_0,
		dir__make_directory_4_0_i6);
MR_def_label(dir__make_directory_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *)MR_sv(1), (char *)MR_r1) != 0)) {
		MR_GOTO_LAB(dir__make_directory_4_0_i7);
	}
	{
	MR_Integer	ErrorIfExists;
	MR_String	DirName;
	MR_Word	Result;
	MR_Word	IO0;
	MR_Word	IO;
#define	MR_PROC_LABEL	mercury__dir__make_directory_4_0
	ErrorIfExists = (MR_Integer) 0;
	DirName = (MR_String) MR_sv(1);
	MR_save_registers();
{
#line 976 "dir.m"
{
#if defined(MR_WIN32)
    if (CreateDirectory(DirName, NULL)) {
        Result = ML_make_mkdir_res_ok();
    } else {
        int error;

        error = GetLastError();
        if (!ErrorIfExists && error == ERROR_ALREADY_EXISTS) {
            ML_make_mkdir_res_exists(error, DirName, &Result);
        } else {
            ML_make_mkdir_res_error(error, &Result);
        }
    }
#elif defined(MR_HAVE_MKDIR)
    if (mkdir(DirName, 0777) == 0) {
        Result = ML_make_mkdir_res_ok();
  #ifdef EEXIST
    } else if (!ErrorIfExists && errno == EEXIST) {
        ML_make_mkdir_res_exists(errno, DirName, &Result);
  #endif /* EEXIST */
    } else {
        ML_make_mkdir_res_error(errno, &Result);
    }
#else /* !MR_WIN32 && !MR_HAVE_MKDIR */
    MR_fatal_error(
        "dir.make_single_directory_2 called but not supported");
#endif
    IO = IO0;
};}
#line 3583 "dir.c"
#ifndef MR_CONSERVATIVE_GC
	MR_restore_registers();
#endif
	MR_r1 = Result;
#undef	MR_PROC_LABEL
	}
	MR_decr_sp_and_return(3);
MR_def_label(dir__make_directory_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *)MR_r1, (char *)(MR_Word) MR_string_const(".", 1)) != 0)) {
		MR_GOTO_LAB(dir__make_directory_4_0_i8);
	}
	{
	MR_Integer	ErrorIfExists;
	MR_String	DirName;
	MR_Word	Result;
	MR_Word	IO0;
	MR_Word	IO;
#define	MR_PROC_LABEL	mercury__dir__make_directory_4_0
	ErrorIfExists = (MR_Integer) 0;
	DirName = (MR_String) MR_sv(1);
	MR_save_registers();
{
#line 976 "dir.m"
{
#if defined(MR_WIN32)
    if (CreateDirectory(DirName, NULL)) {
        Result = ML_make_mkdir_res_ok();
    } else {
        int error;

        error = GetLastError();
        if (!ErrorIfExists && error == ERROR_ALREADY_EXISTS) {
            ML_make_mkdir_res_exists(error, DirName, &Result);
        } else {
            ML_make_mkdir_res_error(error, &Result);
        }
    }
#elif defined(MR_HAVE_MKDIR)
    if (mkdir(DirName, 0777) == 0) {
        Result = ML_make_mkdir_res_ok();
  #ifdef EEXIST
    } else if (!ErrorIfExists && errno == EEXIST) {
        ML_make_mkdir_res_exists(errno, DirName, &Result);
  #endif /* EEXIST */
    } else {
        ML_make_mkdir_res_error(errno, &Result);
    }
#else /* !MR_WIN32 && !MR_HAVE_MKDIR */
    MR_fatal_error(
        "dir.make_single_directory_2 called but not supported");
#endif
    IO = IO0;
};}
#line 3638 "dir.c"
#ifndef MR_CONSERVATIVE_GC
	MR_restore_registers();
#endif
	MR_r1 = Result;
#undef	MR_PROC_LABEL
	}
	MR_decr_sp_and_return(3);
MR_def_label(dir__make_directory_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_np_call_localret_ent(io__check_file_accessibility_5_0,
		dir__make_directory_4_0_i9);
MR_def_label(dir__make_directory_4_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(dir__make_directory_4_0_i27);
	}
	MR_r1 = MR_sv(2);
	MR_np_localcall_lab(dir__make_directory_4_0,
		dir__make_directory_4_0_i12);
MR_def_label(dir__make_directory_4_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(dir__make_directory_4_0_i49);
	}
MR_def_label(dir__make_directory_4_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Integer	ErrorIfExists;
	MR_String	DirName;
	MR_Word	Result;
	MR_Word	IO0;
	MR_Word	IO;
#define	MR_PROC_LABEL	mercury__dir__make_directory_4_0
	ErrorIfExists = (MR_Integer) 0;
	DirName = (MR_String) MR_sv(1);
	MR_save_registers();
{
#line 976 "dir.m"
{
#if defined(MR_WIN32)
    if (CreateDirectory(DirName, NULL)) {
        Result = ML_make_mkdir_res_ok();
    } else {
        int error;

        error = GetLastError();
        if (!ErrorIfExists && error == ERROR_ALREADY_EXISTS) {
            ML_make_mkdir_res_exists(error, DirName, &Result);
        } else {
            ML_make_mkdir_res_error(error, &Result);
        }
    }
#elif defined(MR_HAVE_MKDIR)
    if (mkdir(DirName, 0777) == 0) {
        Result = ML_make_mkdir_res_ok();
  #ifdef EEXIST
    } else if (!ErrorIfExists && errno == EEXIST) {
        ML_make_mkdir_res_exists(errno, DirName, &Result);
  #endif /* EEXIST */
    } else {
        ML_make_mkdir_res_error(errno, &Result);
    }
#else /* !MR_WIN32 && !MR_HAVE_MKDIR */
    MR_fatal_error(
        "dir.make_single_directory_2 called but not supported");
#endif
    IO = IO0;
};}
#line 3709 "dir.c"
#ifndef MR_CONSERVATIVE_GC
	MR_restore_registers();
#endif
	MR_r1 = Result;
#undef	MR_PROC_LABEL
	}
	MR_decr_sp_and_return(3);
MR_def_label(dir__make_directory_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(1,1,0);
	MR_proceed();
MR_def_label(dir__make_directory_4_0,49)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(dir_module29)
	MR_init_entry1(dir__make_single_directory_4_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__dir__make_single_directory_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	{
	MR_Integer	ErrorIfExists;
	MR_String	DirName;
	MR_Word	Result;
	MR_Word	IO0;
	MR_Word	IO;
#define	MR_PROC_LABEL	mercury__dir__make_single_directory_4_0
	ErrorIfExists = (MR_Integer) 1;
	DirName = (MR_String) MR_r1;
	MR_save_registers();
{
#line 976 "dir.m"
{
#if defined(MR_WIN32)
    if (CreateDirectory(DirName, NULL)) {
        Result = ML_make_mkdir_res_ok();
    } else {
        int error;

        error = GetLastError();
        if (!ErrorIfExists && error == ERROR_ALREADY_EXISTS) {
            ML_make_mkdir_res_exists(error, DirName, &Result);
        } else {
            ML_make_mkdir_res_error(error, &Result);
        }
    }
#elif defined(MR_HAVE_MKDIR)
    if (mkdir(DirName, 0777) == 0) {
        Result = ML_make_mkdir_res_ok();
  #ifdef EEXIST
    } else if (!ErrorIfExists && errno == EEXIST) {
        ML_make_mkdir_res_exists(errno, DirName, &Result);
  #endif /* EEXIST */
    } else {
        ML_make_mkdir_res_error(errno, &Result);
    }
#else /* !MR_WIN32 && !MR_HAVE_MKDIR */
    MR_fatal_error(
        "dir.make_single_directory_2 called but not supported");
#endif
    IO = IO0;
};}
#line 3785 "dir.c"
#ifndef MR_CONSERVATIVE_GC
	MR_restore_registers();
#endif
	MR_r1 = Result;
#undef	MR_PROC_LABEL
	}
	MR_decr_sp_and_return(1);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(dir_module30)
	MR_init_entry1(dir__can_implement_dir_foldl_0_0);
	MR_init_label1(dir__can_implement_dir_foldl_0_0,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(dir__can_implement_dir_foldl_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__dir__can_implement_dir_foldl_0_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
{
#line 1381 "dir.m"

#if defined(MR_HAVE_OPENDIR) && defined(MR_HAVE_READDIR) && \
        defined(MR_HAVE_CLOSEDIR)
    SUCCESS_INDICATOR = MR_TRUE;
#elif defined(MR_WIN32)
    SUCCESS_INDICATOR = MR_TRUE;
#else
    SUCCESS_INDICATOR = MR_FALSE;
#endif
;}
#line 3828 "dir.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(dir__can_implement_dir_foldl_0_0_i1);
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(dir__can_implement_dir_foldl_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(dir_module31)
	MR_init_entry1(dir__open_2_4_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(dir__open_2_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	{
	MR_String	DirName;
	MR_Word	Result;
	MR_Word	IO0;
	MR_Word	IO;
#define	MR_PROC_LABEL	mercury__dir__open_2_4_0
	DirName = (MR_String) MR_r1;
	MR_save_registers();
{
#line 1418 "dir.m"
{
#if defined(MR_WIN32)
    WIN32_FIND_DATA file_data;
    ML_DIR_STREAM Dir;
    LPTSTR FirstFileName;
    char *dir_pattern;
    MR_Integer is_readable;

    ML_check_dir_readable(DirName, &is_readable, &Result);
    if (is_readable) {
        dir_pattern = ML_make_path_name(DirName, MR_make_string_const("*"));
        Dir = FindFirstFile(dir_pattern, &file_data);
        if (Dir == INVALID_HANDLE_VALUE) {
            int error = GetLastError();
            if (error == ERROR_NO_MORE_FILES) {
                Result = ML_make_dir_open_result_eof();
            } else {
                ML_make_dir_open_result_error(error, &Result);
            }
        } else {
            ML_make_win32_dir_open_result_ok(Dir,
                (MR_Word) file_data.cFileName, &Result);
        }
    }

#elif defined(MR_HAVE_OPENDIR) && defined(MR_HAVE_READDIR) && \
        defined(MR_HAVE_CLOSEDIR)
    ML_DIR_STREAM Dir;

    Dir = opendir(DirName);
    if (Dir == NULL) {
        ML_make_dir_open_result_error(errno, &Result);
    } else {
        ML_dir_read_first_entry(Dir, &Result);
    }

#else /* !MR_WIN32 && !(MR_HAVE_OPENDIR etc.) */
    MR_fatal_error("dir.open called but not supported");
#endif
    IO = IO0;
};}
#line 3910 "dir.c"
#ifndef MR_CONSERVATIVE_GC
	MR_restore_registers();
#endif
	MR_r1 = Result;
#undef	MR_PROC_LABEL
	}
	MR_decr_sp_and_return(1);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(io__file_id_4_0);
extern const MR_TypeCtorInfo_Struct mercury_data_io__type_ctor_info_file_id_0;
MR_decl_entry(list__member_2_0);
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_tuple_0;
extern const MR_TypeCtorInfo_Struct mercury_data_bool__type_ctor_info_bool_0;

MR_BEGIN_MODULE(dir_module32)
	MR_init_entry1(dir__foldl2_process_dir_11_0);
	MR_init_label8(dir__foldl2_process_dir_11_0,13,19,16,17,6,23,29,32)
	MR_init_label7(dir__foldl2_process_dir_11_0,54,35,36,56,40,25,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__dir__foldl2_process_dir_11_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__dir__foldl2_process_dir_11_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
{
#line 1381 "dir.m"

#if defined(MR_HAVE_OPENDIR) && defined(MR_HAVE_READDIR) && \
        defined(MR_HAVE_CLOSEDIR)
    SUCCESS_INDICATOR = MR_TRUE;
#elif defined(MR_WIN32)
    SUCCESS_INDICATOR = MR_TRUE;
#else
    SUCCESS_INDICATOR = MR_FALSE;
#endif
;}
#line 3959 "dir.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(dir__foldl2_process_dir_11_0_i3);
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	MR_incr_sp(10);
	MR_sv(10) = (MR_Word) MR_succip;
	if (MR_INT_NE(MR_r6,1)) {
		MR_GOTO_LAB(dir__foldl2_process_dir_11_0_i6);
	}
	if (MR_INT_NE(MR_r7,1)) {
		MR_GOTO_LAB(dir__foldl2_process_dir_11_0_i6);
	}
	{
#define	MR_PROC_LABEL	mercury__dir__foldl2_process_dir_11_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
{
#line 964 "io.opt"

#if defined(MR_HAVE_SYMLINK) && defined(MR_HAVE_READLINK)
    SUCCESS_INDICATOR = MR_TRUE;
#else
    SUCCESS_INDICATOR = MR_FALSE;
#endif
;}
#line 3987 "dir.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(dir__foldl2_process_dir_11_0_i6);
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_sv(3) = MR_tempr1;
	MR_sv(4) = MR_r5;
	MR_sv(5) = MR_r6;
	MR_sv(6) = MR_r7;
	MR_sv(7) = MR_r8;
	MR_sv(8) = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(io__file_id_4_0,
		dir__foldl2_process_dir_11_0_i13);
MR_def_label(dir__foldl2_process_dir_11_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,0)) {
		MR_GOTO_LAB(dir__foldl2_process_dir_11_0_i23);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(0, MR_r1, 0);
	MR_r4 = MR_tempr1;
	if (MR_INT_NE(MR_sv(1),1)) {
		MR_GOTO_LAB(dir__foldl2_process_dir_11_0_i17);
	}
	MR_sv(9) = MR_tempr1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(io, file_id);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(4);
	}
	MR_np_call_localret_ent(list__member_2_0,
		dir__foldl2_process_dir_11_0_i19);
MR_def_label(dir__foldl2_process_dir_11_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(dir__foldl2_process_dir_11_0_i16);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,2,0);
	MR_GOTO_LAB(dir__foldl2_process_dir_11_0_i23);
MR_def_label(dir__foldl2_process_dir_11_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_sv(9);
MR_def_label(dir__foldl2_process_dir_11_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r5 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_r4;
	MR_tfield(1, MR_tempr1, 1) = MR_sv(4);
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,2,1);
	MR_sv(4) = MR_tempr1;
	MR_GOTO_LAB(dir__foldl2_process_dir_11_0_i23);
	}
MR_def_label(dir__foldl2_process_dir_11_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_sv(5) = MR_r6;
	MR_sv(6) = MR_r7;
	MR_sv(7) = MR_r8;
	MR_sv(8) = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,2,1);
	MR_sv(4) = MR_r5;
MR_def_label(dir__foldl2_process_dir_11_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,0)) {
		MR_GOTO_LAB(dir__foldl2_process_dir_11_0_i25);
	}
	MR_r4 = MR_ctfield(0, MR_r1, 0);
	if (MR_INT_NE(MR_r4,0)) {
		MR_GOTO_LAB(dir__foldl2_process_dir_11_0_i54);
	}
	{
#define	MR_PROC_LABEL	mercury__dir__foldl2_process_dir_11_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
{
#line 1381 "dir.m"

#if defined(MR_HAVE_OPENDIR) && defined(MR_HAVE_READDIR) && \
        defined(MR_HAVE_CLOSEDIR)
    SUCCESS_INDICATOR = MR_TRUE;
#elif defined(MR_WIN32)
    SUCCESS_INDICATOR = MR_TRUE;
#else
    SUCCESS_INDICATOR = MR_FALSE;
#endif
;}
#line 4086 "dir.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(dir__foldl2_process_dir_11_0_i29);
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	{
	MR_String	DirName;
	MR_Word	Result;
	MR_Word	IO0;
	MR_Word	IO;
#define	MR_PROC_LABEL	mercury__dir__foldl2_process_dir_11_0
	DirName = (MR_String) MR_sv(3);
	MR_save_registers();
{
#line 1418 "dir.m"
{
#if defined(MR_WIN32)
    WIN32_FIND_DATA file_data;
    ML_DIR_STREAM Dir;
    LPTSTR FirstFileName;
    char *dir_pattern;
    MR_Integer is_readable;

    ML_check_dir_readable(DirName, &is_readable, &Result);
    if (is_readable) {
        dir_pattern = ML_make_path_name(DirName, MR_make_string_const("*"));
        Dir = FindFirstFile(dir_pattern, &file_data);
        if (Dir == INVALID_HANDLE_VALUE) {
            int error = GetLastError();
            if (error == ERROR_NO_MORE_FILES) {
                Result = ML_make_dir_open_result_eof();
            } else {
                ML_make_dir_open_result_error(error, &Result);
            }
        } else {
            ML_make_win32_dir_open_result_ok(Dir,
                (MR_Word) file_data.cFileName, &Result);
        }
    }

#elif defined(MR_HAVE_OPENDIR) && defined(MR_HAVE_READDIR) && \
        defined(MR_HAVE_CLOSEDIR)
    ML_DIR_STREAM Dir;

    Dir = opendir(DirName);
    if (Dir == NULL) {
        ML_make_dir_open_result_error(errno, &Result);
    } else {
        ML_dir_read_first_entry(Dir, &Result);
    }

#else /* !MR_WIN32 && !(MR_HAVE_OPENDIR etc.) */
    MR_fatal_error("dir.open called but not supported");
#endif
    IO = IO0;
};}
#line 4143 "dir.c"
#ifndef MR_CONSERVATIVE_GC
	MR_restore_registers();
#endif
	MR_r4 = Result;
#undef	MR_PROC_LABEL
	}
	MR_r1 = MR_r4;
	MR_GOTO_LAB(dir__foldl2_process_dir_11_0_i32);
MR_def_label(dir__foldl2_process_dir_11_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(2,1,1);
MR_def_label(dir__foldl2_process_dir_11_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TEST(MR_r1,1)) {
		MR_GOTO_LAB(dir__foldl2_process_dir_11_0_i35);
	}
	if (MR_PTAG_TEST(MR_r1,2)) {
		MR_GOTO_LAB(dir__foldl2_process_dir_11_0_i25);
	}
MR_def_label(dir__foldl2_process_dir_11_0,54)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 1);
	MR_tfield(0, MR_r2, 0) = MR_sv(7);
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(10);
MR_def_label(dir__foldl2_process_dir_11_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(3,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(dir__close_4_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tempr2 = MR_ctfield(1, MR_r1, 0);
	MR_tfield(0, MR_tempr1, 3) = MR_ctfield(0, MR_tempr2, 0);
	MR_tag_alloc_heap(MR_tempr3, 0, (MR_Integer) 13);
	MR_r2 = MR_tempr3;
	MR_tfield(0, MR_tempr3, 0) = (MR_Word) MR_COMMON(9,0);
	MR_tfield(0, MR_tempr3, 1) = (MR_Word) MR_ENTRY_AP(dir__foldl2_process_dir2_12_0);
	MR_tfield(0, MR_tempr3, 2) = (MR_Integer) 10;
	MR_tempr4 = MR_sv(8);
	MR_tfield(0, MR_tempr3, 3) = MR_tempr4;
	MR_tfield(0, MR_tempr3, 4) = MR_ctfield(0, MR_tempr1, 3);
	MR_tfield(0, MR_tempr3, 5) = MR_sv(1);
	MR_tfield(0, MR_tempr3, 6) = MR_sv(2);
	MR_tfield(0, MR_tempr3, 7) = MR_sv(3);
	MR_tfield(0, MR_tempr3, 8) = MR_sv(4);
	MR_tfield(0, MR_tempr3, 9) = MR_ctfield(0, MR_tempr2, 1);
	MR_tfield(0, MR_tempr3, 10) = MR_sv(5);
	MR_tfield(0, MR_tempr3, 11) = MR_sv(6);
	MR_tfield(0, MR_tempr3, 12) = MR_sv(7);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = (MR_Word) MR_CTOR1_ADDR(io, maybe_partial_res);
	MR_tfield(0, MR_tempr2, 1) = MR_tempr4;
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 4);
	MR_tfield(0, MR_r1, 0) = (MR_Word) MR_CTOR0_ADDR(builtin, tuple);
	MR_tfield(0, MR_r1, 1) = (MR_Integer) 2;
	MR_tfield(0, MR_r1, 2) = MR_tempr2;
	MR_tfield(0, MR_r1, 3) = (MR_Word) MR_BOOL_CTOR_ADDR;
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(f_100_105_114_95_95_101_120_99_101_112_116_105_111_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_110_97_108_108_121_95_95_104_111_54_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_55_44_32_56_44_32_57_44_32_49_48_44_32_49_49_44_32_49_50_44_32_49_51_44_32_49_52_93_95_48_6_0,
		dir__foldl2_process_dir_11_0_i36);
MR_def_label(dir__foldl2_process_dir_11_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_ctfield(0, MR_r1, 0);
	if (MR_PTAG_TESTR(MR_r4,0)) {
		MR_GOTO_LAB(dir__foldl2_process_dir_11_0_i56);
	}
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(dir__foldl2_process_dir_11_0_i40);
	}
MR_def_label(dir__foldl2_process_dir_11_0,56)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(0, MR_r1, 1);
	MR_r2 = MR_r4;
	MR_decr_sp_and_return(10);
MR_def_label(dir__foldl2_process_dir_11_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_ctfield(0, MR_r4, 0);
	MR_tfield(1, MR_tempr1, 1) = MR_ctfield(1, MR_r2, 0);
	MR_r1 = MR_ctfield(0, MR_r1, 1);
	MR_r2 = MR_tempr1;
	MR_decr_sp_and_return(10);
	}
MR_def_label(dir__foldl2_process_dir_11_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(7);
	MR_tfield(1, MR_tempr1, 1) = MR_const_mask_field(MR_r1, 0);
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(10);
	}
MR_def_label(dir__foldl2_process_dir_11_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_r8;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_string_const("dir.foldl2 not implemented on this platform", 43);
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(dir_module33)
	MR_init_entry1(dir__foldl2_6_0);
	MR_init_label1(dir__foldl2_6_0,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__dir__foldl2_6_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_r8 = MR_r4;
	MR_r4 = MR_r3;
	MR_r3 = MR_r2;
	MR_r2 = (MR_Integer) 0;
	MR_r5 = (MR_Word) MR_tbmkword(0, 0);
	MR_r6 = (MR_Integer) 0;
	MR_r7 = (MR_Integer) 0;
	MR_np_call_localret_ent(dir__foldl2_process_dir_11_0,
		dir__foldl2_6_0_i2);
MR_def_label(dir__foldl2_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(1);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(dir_module34)
	MR_init_entry1(dir__recursive_foldl2_7_0);
	MR_init_label1(dir__recursive_foldl2_7_0,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__dir__recursive_foldl2_7_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_r7 = MR_r4;
	MR_r4 = MR_r3;
	MR_r3 = MR_r2;
	MR_r2 = (MR_Integer) 0;
	MR_r8 = MR_r5;
	MR_r5 = (MR_Word) MR_tbmkword(0, 0);
	MR_r6 = (MR_Integer) 1;
	MR_np_call_localret_ent(dir__foldl2_process_dir_11_0,
		dir__recursive_foldl2_7_0_i2);
MR_def_label(dir__recursive_foldl2_7_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(1);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(exception__throw_1_0);
MR_decl_entry(list__append_3_1);

MR_BEGIN_MODULE(dir_module35)
	MR_init_entry1(dir__find_matching_brace_or_comma_6_0);
	MR_init_label8(dir__find_matching_brace_or_comma_6_0,68,3,9,7,10,5,15,13)
	MR_init_label3(dir__find_matching_brace_or_comma_6_0,21,17,26)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(dir__find_matching_brace_or_comma_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
MR_def_label(dir__find_matching_brace_or_comma_6_0,68)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(dir__find_matching_brace_or_comma_6_0_i3);
	}
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = (MR_Word) MR_string_const("no matching brace", 17);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(exception__throw_1_0);
MR_def_label(dir__find_matching_brace_or_comma_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_ctfield(1, MR_r1, 1);
	MR_r5 = MR_ctfield(1, MR_r1, 0);
	if (MR_INT_NE(MR_r5,125)) {
		MR_GOTO_LAB(dir__find_matching_brace_or_comma_6_0_i5);
	}
	if (MR_INT_NE(MR_r4,0)) {
		MR_GOTO_LAB(dir__find_matching_brace_or_comma_6_0_i7);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r3;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,5,1);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__append_3_1,
		dir__find_matching_brace_or_comma_6_0_i9);
MR_def_label(dir__find_matching_brace_or_comma_6_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(3);
	MR_decr_sp_and_return(4);
MR_def_label(dir__find_matching_brace_or_comma_6_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r5;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r4;
	MR_r1 = (MR_Word) MR_CHAR_CTOR_ADDR;
	MR_r2 = MR_r3;
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__append_3_1,
		dir__find_matching_brace_or_comma_6_0_i10);
MR_def_label(dir__find_matching_brace_or_comma_6_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(1);
	MR_r4 = ((MR_Integer) MR_sv(2) - (MR_Integer) 1);
	MR_succip_word = MR_sv(4);
	MR_GOTO_LAB(dir__find_matching_brace_or_comma_6_0_i68);
MR_def_label(dir__find_matching_brace_or_comma_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r5,123)) {
		MR_GOTO_LAB(dir__find_matching_brace_or_comma_6_0_i13);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r5;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r4;
	MR_r1 = (MR_Word) MR_CHAR_CTOR_ADDR;
	MR_r2 = MR_r3;
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__append_3_1,
		dir__find_matching_brace_or_comma_6_0_i15);
MR_def_label(dir__find_matching_brace_or_comma_6_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(1);
	MR_r4 = ((MR_Integer) MR_sv(2) + (MR_Integer) 1);
	MR_succip_word = MR_sv(4);
	MR_GOTO_LAB(dir__find_matching_brace_or_comma_6_0_i68);
MR_def_label(dir__find_matching_brace_or_comma_6_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r5,44)) {
		MR_GOTO_LAB(dir__find_matching_brace_or_comma_6_0_i17);
	}
	if (MR_INT_NE(MR_r4,0)) {
		MR_GOTO_LAB(dir__find_matching_brace_or_comma_6_0_i17);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r3;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_sv(2) = MR_r4;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,5,1);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__append_3_1,
		dir__find_matching_brace_or_comma_6_0_i21);
MR_def_label(dir__find_matching_brace_or_comma_6_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_r4 = MR_sv(2);
	MR_succip_word = MR_sv(4);
	MR_GOTO_LAB(dir__find_matching_brace_or_comma_6_0_i68);
MR_def_label(dir__find_matching_brace_or_comma_6_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r5;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r4;
	MR_r1 = (MR_Word) MR_CHAR_CTOR_ADDR;
	MR_r2 = MR_r3;
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__append_3_1,
		dir__find_matching_brace_or_comma_6_0_i26);
MR_def_label(dir__find_matching_brace_or_comma_6_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_succip_word = MR_sv(4);
	MR_GOTO_LAB(dir__find_matching_brace_or_comma_6_0_i68);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(list__condense_2_0);

MR_BEGIN_MODULE(dir_module36)
	MR_init_entry1(fn__dir__expand_acc_2_0);
	MR_init_label8(fn__dir__expand_acc_2_0,24,6,7,8,9,10,4,12)
	MR_init_label1(fn__dir__expand_acc_2_0,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__dir__expand_acc_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
MR_def_label(fn__dir__expand_acc_2_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(fn__dir__expand_acc_2_0_i3);
	}
	MR_r5 = MR_ctfield(1, MR_r1, 1);
	MR_r6 = MR_ctfield(1, MR_r1, 0);
	if (MR_INT_NE(MR_r6,123)) {
		MR_GOTO_LAB(fn__dir__expand_acc_2_0_i4);
	}
	MR_sv(1) = MR_r2;
	MR_r1 = MR_r5;
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_r4 = (MR_Integer) 0;
	MR_np_call_localret_ent(dir__find_matching_brace_or_comma_6_0,
		fn__dir__expand_acc_2_0_i6);
MR_def_label(fn__dir__expand_acc_2_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r2;
	MR_sv(3) = (MR_Word) MR_TAG_COMMON(0,5,1);
	MR_np_call_localret_ent(fn__dir__list__map__ho5_2_0,
		fn__dir__expand_acc_2_0_i7);
MR_def_label(fn__dir__expand_acc_2_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(list__condense_2_0,
		fn__dir__expand_acc_2_0_i8);
MR_def_label(fn__dir__expand_acc_2_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(f_100_105_114_95_95_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_95_95_104_111_49_54_95_95_91_49_44_32_51_93_95_48_3_0,
		fn__dir__expand_acc_2_0_i9);
MR_def_label(fn__dir__expand_acc_2_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(list__condense_2_0,
		fn__dir__expand_acc_2_0_i10);
MR_def_label(fn__dir__expand_acc_2_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_succip_word = MR_sv(4);
	MR_GOTO_LAB(fn__dir__expand_acc_2_0_i24);
MR_def_label(fn__dir__expand_acc_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r5;
	MR_r1 = MR_r6;
	MR_np_call_localret_ent(fn__f_100_105_114_95_95_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_112_95_95_104_111_51_95_95_91_50_93_95_48_2_0,
		fn__dir__expand_acc_2_0_i12);
MR_def_label(fn__dir__expand_acc_2_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_succip_word = MR_sv(4);
	MR_GOTO_LAB(fn__dir__expand_acc_2_0_i24);
MR_def_label(fn__dir__expand_acc_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(4);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(dir_module37)
	MR_init_entry1(fn__dir__expand_1_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__dir__expand_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_TAG_COMMON(1,5,2);
	MR_np_tailcall_ent(fn__dir__expand_acc_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(dir_module38)
	MR_init_entry1(fn__dir__expand_braces_1_0);
	MR_init_label2(fn__dir__expand_braces_1_0,2,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__dir__expand_braces_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(string__to_char_list_2_0,
		fn__dir__expand_braces_1_0_i2);
MR_def_label(fn__dir__expand_braces_1_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_TAG_COMMON(1,5,2);
	MR_np_call_localret_ent(fn__dir__expand_acc_2_0,
		fn__dir__expand_braces_1_0_i3);
MR_def_label(fn__dir__expand_braces_1_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_np_tailcall_ent(dir__list__map__ho11_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(dir_module39)
	MR_init_entry1(fn__dir__make_mkdir_res_ok_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__dir__make_mkdir_res_ok_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(io__make_maybe_win32_err_msg_5_0);

MR_BEGIN_MODULE(dir_module40)
	MR_init_entry1(dir__make_mkdir_res_error_4_0);
	MR_init_label1(dir__make_mkdir_res_error_4_0,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(dir__make_mkdir_res_error_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_r2 = (MR_Word) MR_string_const("dir.make_directory failed: ", 27);
	MR_np_call_localret_ent(io__make_maybe_win32_err_msg_5_0,
		dir__make_mkdir_res_error_4_0_i2);
MR_def_label(dir__make_mkdir_res_error_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(1);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(dir_module41)
	MR_init_entry1(dir__check_dir_accessibility_4_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(dir__check_dir_accessibility_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_TAG_COMMON(1,0,5);
	MR_np_tailcall_ent(io__check_file_accessibility_5_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(io__file_type_5_0);

MR_BEGIN_MODULE(dir_module42)
	MR_init_entry1(dir__make_mkdir_res_exists_5_0);
	MR_init_label3(dir__make_mkdir_res_exists_5_0,2,3,7)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(dir__make_mkdir_res_exists_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_r1 = (MR_Integer) 1;
	MR_np_call_localret_ent(io__file_type_5_0,
		dir__make_mkdir_res_exists_5_0_i2);
MR_def_label(dir__make_mkdir_res_exists_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,0)) {
		MR_GOTO_LAB(dir__make_mkdir_res_exists_5_0_i3);
	}
	MR_r3 = MR_ctfield(0, MR_r1, 0);
	if (MR_INT_NE(MR_r3,1)) {
		MR_GOTO_LAB(dir__make_mkdir_res_exists_5_0_i3);
	}
	MR_r1 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(dir__check_dir_accessibility_4_0);
MR_def_label(dir__make_mkdir_res_exists_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = (MR_Word) MR_string_const("dir.make_directory failed: ", 27);
	MR_np_call_localret_ent(io__make_maybe_win32_err_msg_5_0,
		dir__make_mkdir_res_exists_5_0_i7);
MR_def_label(dir__make_mkdir_res_exists_5_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(3);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(dir_module43)
	MR_init_entry1(dir__read_entry_2_6_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(dir__read_entry_2_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	ML_DIR_STREAM	Dir;
	MR_Integer	Status;
	MR_Integer	Error;
	MR_String	FileName;
	MR_Word	IO0;
	MR_Word	IO;
#define	MR_PROC_LABEL	mercury__dir__read_entry_2_6_0
	MR_MAYBE_UNBOX_FOREIGN_TYPE(ML_DIR_STREAM, MR_r1, Dir);
{
#line 1701 "dir.m"
{
#if defined(MR_WIN32)
    WIN32_FIND_DATA file_data;

    IO = IO0;
    if (FindNextFile(Dir, &file_data)) {
        Status = 1;
        MR_make_aligned_string_copy(FileName, file_data.cFileName);
    } else {
        Error = GetLastError();
        Status = (Error == ERROR_NO_MORE_FILES ? -1 : 0);
        FileName = NULL;
    }

#elif defined(MR_HAVE_READDIR) && defined(MR_HAVE_CLOSEDIR)
    struct dirent *dir_entry;

    IO = IO0;
    errno = 0;
    dir_entry = readdir(Dir);
    if (dir_entry == NULL) {
        Error = errno;
        FileName = NULL;
        Status = (Error == 0 ? -1 : 0);
    } else {
        MR_make_aligned_string_copy(FileName, dir_entry->d_name);
        Error = 0;
        Status = 1;
    }

#else /* !MR_WIN32 && !(MR_HAVE_READDIR etc.) */
    MR_fatal_error("dir.read_entry_2 called but not supported");
#endif
};}
#line 4798 "dir.c"
	MR_r1 = Status;
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_Integer, Error, MR_r2);
	MR_r3 = (MR_Word) FileName;
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(dir_module44)
	MR_init_entry1(dir__read_entry_4_0);
	MR_init_label6(dir__read_entry_4_0,32,4,2,5,10,8)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(dir__read_entry_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
MR_def_label(dir__read_entry_4_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	{
	ML_DIR_STREAM	Dir;
	MR_Integer	Status;
	MR_Integer	Error;
	MR_String	FileName;
	MR_Word	IO0;
	MR_Word	IO;
#define	MR_PROC_LABEL	mercury__dir__read_entry_4_0
	MR_MAYBE_UNBOX_FOREIGN_TYPE(ML_DIR_STREAM, MR_r1, Dir);
{
#line 1701 "dir.m"
{
#if defined(MR_WIN32)
    WIN32_FIND_DATA file_data;

    IO = IO0;
    if (FindNextFile(Dir, &file_data)) {
        Status = 1;
        MR_make_aligned_string_copy(FileName, file_data.cFileName);
    } else {
        Error = GetLastError();
        Status = (Error == ERROR_NO_MORE_FILES ? -1 : 0);
        FileName = NULL;
    }

#elif defined(MR_HAVE_READDIR) && defined(MR_HAVE_CLOSEDIR)
    struct dirent *dir_entry;

    IO = IO0;
    errno = 0;
    dir_entry = readdir(Dir);
    if (dir_entry == NULL) {
        Error = errno;
        FileName = NULL;
        Status = (Error == 0 ? -1 : 0);
    } else {
        MR_make_aligned_string_copy(FileName, dir_entry->d_name);
        Error = 0;
        Status = 1;
    }

#else /* !MR_WIN32 && !(MR_HAVE_READDIR etc.) */
    MR_fatal_error("dir.read_entry_2 called but not supported");
#endif
};}
#line 4874 "dir.c"
	MR_r4 = Status;
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_Integer, Error, MR_tempr1);
	MR_r6 = (MR_Word) FileName;
#undef	MR_PROC_LABEL
	}
	if (MR_INT_NE(MR_r4,0)) {
		MR_GOTO_LAB(dir__read_entry_4_0_i2);
	}
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Word) MR_string_const("dir.foldl2: reading directory entry failed: ", 44);
	}
	MR_np_call_localret_ent(io__make_maybe_win32_err_msg_5_0,
		dir__read_entry_4_0_i4);
MR_def_label(dir__read_entry_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr1, 0) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(2);
	}
MR_def_label(dir__read_entry_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r4,-1)) {
		MR_GOTO_LAB(dir__read_entry_4_0_i5);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_decr_sp_and_return(2);
MR_def_label(dir__read_entry_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *)MR_r6, (char *)(MR_Word) MR_string_const(".", 1)) != 0)) {
		MR_GOTO_LAB(dir__read_entry_4_0_i10);
	}
	MR_sv(1) = MR_r6;
	MR_succip_word = MR_sv(2);
	MR_GOTO_LAB(dir__read_entry_4_0_i32);
MR_def_label(dir__read_entry_4_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *)MR_r6, (char *)(MR_Word) MR_string_const("..", 2)) != 0)) {
		MR_GOTO_LAB(dir__read_entry_4_0_i8);
	}
	MR_sv(1) = MR_r6;
	MR_succip_word = MR_sv(2);
	MR_GOTO_LAB(dir__read_entry_4_0_i32);
MR_def_label(dir__read_entry_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r1, 0) = MR_r6;
	MR_decr_sp_and_return(2);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_declare_entry(mercury__do_call_closure_5);

MR_BEGIN_MODULE(dir_module45)
	MR_init_entry1(dir__foldl2_process_entries_13_0);
	MR_init_label8(dir__foldl2_process_entries_13_0,89,35,4,5,6,9,11,12)
	MR_init_label8(dir__foldl2_process_entries_13_0,20,25,23,22,16,28,32,29)
	MR_init_label1(dir__foldl2_process_entries_13_0,8)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(dir__foldl2_process_entries_13_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(12);
	MR_sv(12) = (MR_Word) MR_succip;
MR_def_label(dir__foldl2_process_entries_13_0,89)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TEST(MR_r6,1)) {
		MR_GOTO_LAB(dir__foldl2_process_entries_13_0_i4);
	}
	if (MR_PTAG_TEST(MR_r6,2)) {
		MR_GOTO_LAB(dir__foldl2_process_entries_13_0_i35);
	}
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 1);
	MR_tfield(0, MR_r2, 0) = MR_r10;
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(12);
MR_def_label(dir__foldl2_process_entries_13_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_r10;
	MR_tfield(1, MR_tempr1, 1) = MR_ctfield(2, MR_r6, 0);
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(12);
	}
MR_def_label(dir__foldl2_process_entries_13_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r5;
	MR_sv(4) = MR_tempr1;
	MR_sv(5) = MR_r7;
	MR_sv(6) = MR_r8;
	MR_sv(7) = MR_r9;
	MR_sv(8) = MR_r10;
	MR_sv(9) = MR_ctfield(1, MR_r6, 0);
	MR_sv(11) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(9);
	}
	MR_np_call_localret_ent(fn__f_100_105_114_95_95_47_2_0,
		dir__foldl2_process_entries_13_0_i5);
MR_def_label(dir__foldl2_process_entries_13_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(10) = MR_r1;
	MR_r1 = (MR_Integer) 0;
	MR_r2 = MR_sv(10);
	MR_np_call_localret_ent(io__file_type_5_0,
		dir__foldl2_process_entries_13_0_i6);
MR_def_label(dir__foldl2_process_entries_13_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,0)) {
		MR_GOTO_LAB(dir__foldl2_process_entries_13_0_i8);
	}
	MR_r5 = MR_sv(8);
	MR_sv(8) = MR_ctfield(0, MR_r1, 0);
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(9);
	MR_r4 = MR_sv(8);
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(dir__foldl2_process_entries_13_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_5),
		mercury__dir__foldl2_process_entries_13_0_i9);
MR_def_label(dir__foldl2_process_entries_13_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(dir__foldl2_process_entries_13_0_i11);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr1, 0) = MR_r2;
	MR_r1 = (MR_Integer) 0;
	MR_r2 = MR_tempr1;
	MR_decr_sp_and_return(12);
	}
MR_def_label(dir__foldl2_process_entries_13_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(6),1)) {
		MR_GOTO_LAB(dir__foldl2_process_entries_13_0_i12);
	}
	if (MR_INT_NE(MR_sv(8),1)) {
		MR_GOTO_LAB(dir__foldl2_process_entries_13_0_i12);
	}
	MR_r1 = MR_sv(11);
	MR_r8 = MR_r2;
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(10);
	MR_r5 = MR_sv(5);
	MR_r6 = MR_sv(6);
	MR_r7 = MR_sv(7);
	MR_np_call_localret_ent(dir__foldl2_process_dir_11_0,
		dir__foldl2_process_entries_13_0_i25);
MR_def_label(dir__foldl2_process_entries_13_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(6),1)) {
		MR_GOTO_LAB(dir__foldl2_process_entries_13_0_i16);
	}
	if (MR_INT_NE(MR_sv(8),2)) {
		MR_GOTO_LAB(dir__foldl2_process_entries_13_0_i16);
	}
	if (MR_INT_NE(MR_sv(7),1)) {
		MR_GOTO_LAB(dir__foldl2_process_entries_13_0_i16);
	}
	MR_sv(8) = MR_r2;
	MR_r1 = (MR_Integer) 1;
	MR_r2 = MR_sv(10);
	MR_np_call_localret_ent(io__file_type_5_0,
		dir__foldl2_process_entries_13_0_i20);
MR_def_label(dir__foldl2_process_entries_13_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,0)) {
		MR_GOTO_LAB(dir__foldl2_process_entries_13_0_i22);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(0, MR_r1, 0);
	if (MR_INT_NE(MR_tempr1,1)) {
		MR_GOTO_LAB(dir__foldl2_process_entries_13_0_i23);
	}
	MR_r1 = MR_sv(11);
	MR_r2 = (MR_Integer) 1;
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(10);
	MR_r5 = MR_sv(5);
	MR_r6 = MR_sv(6);
	MR_r7 = MR_sv(7);
	MR_r8 = MR_sv(8);
	}
	MR_np_call_localret_ent(dir__foldl2_process_dir_11_0,
		dir__foldl2_process_entries_13_0_i25);
MR_def_label(dir__foldl2_process_entries_13_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r2;
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_GOTO_LAB(dir__foldl2_process_entries_13_0_i28);
MR_def_label(dir__foldl2_process_entries_13_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 1);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_sv(8);
	MR_r1 = MR_sv(1);
	MR_r4 = MR_tempr1;
	MR_r3 = (MR_Integer) 1;
	MR_GOTO_LAB(dir__foldl2_process_entries_13_0_i28);
	}
MR_def_label(dir__foldl2_process_entries_13_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(8);
	MR_tfield(1, MR_tempr1, 1) = MR_ctfield(1, MR_r1, 0);
	MR_r1 = MR_sv(1);
	MR_r4 = MR_tempr1;
	MR_r3 = (MR_Integer) 0;
	MR_GOTO_LAB(dir__foldl2_process_entries_13_0_i28);
	}
MR_def_label(dir__foldl2_process_entries_13_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r4, 0, (MR_Integer) 1);
	MR_tfield(0, MR_r4, 0) = MR_r2;
	MR_r1 = MR_sv(1);
	MR_r3 = (MR_Integer) 1;
MR_def_label(dir__foldl2_process_entries_13_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r3,1)) {
		MR_GOTO_LAB(dir__foldl2_process_entries_13_0_i29);
	}
	if (MR_PTAG_TESTR(MR_r4,0)) {
		MR_GOTO_LAB(dir__foldl2_process_entries_13_0_i29);
	}
	MR_sv(1) = MR_r1;
	MR_sv(8) = MR_ctfield(0, MR_r4, 0);
	MR_np_call_localret_ent(dir__read_entry_4_0,
		dir__foldl2_process_entries_13_0_i32);
MR_def_label(dir__foldl2_process_entries_13_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r6 = MR_r1;
	MR_r1 = MR_sv(11);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(4);
	MR_r7 = MR_sv(5);
	MR_r8 = MR_sv(6);
	MR_r9 = MR_sv(7);
	MR_r10 = MR_sv(8);
	MR_succip_word = MR_sv(12);
	MR_GOTO_LAB(dir__foldl2_process_entries_13_0_i89);
MR_def_label(dir__foldl2_process_entries_13_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_r2 = MR_r4;
	MR_decr_sp_and_return(12);
MR_def_label(dir__foldl2_process_entries_13_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(8);
	MR_tfield(1, MR_tempr1, 1) = MR_ctfield(1, MR_r1, 0);
	MR_r1 = (MR_Integer) 0;
	MR_r2 = MR_tempr1;
	MR_decr_sp_and_return(12);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(dir_module46)
	MR_init_entry1(dir__foldl2_process_dir2_12_0);
	MR_init_label1(dir__foldl2_process_dir2_12_0,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(dir__foldl2_process_dir2_12_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_r7;
	MR_r7 = MR_r6;
	MR_r6 = MR_tempr1;
	}
	MR_np_call_localret_ent(dir__foldl2_process_entries_13_0,
		dir__foldl2_process_dir2_12_0_i2);
MR_def_label(dir__foldl2_process_dir2_12_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_r2;
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(1);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(dir_module47)
	MR_init_entry1(dir__check_dir_readable_5_0);
	MR_init_label4(dir__check_dir_readable_5_0,2,7,5,4)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(dir__check_dir_readable_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Integer) 1;
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(io__file_type_5_0,
		dir__check_dir_readable_5_0_i2);
MR_def_label(dir__check_dir_readable_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,0)) {
		MR_GOTO_LAB(dir__check_dir_readable_5_0_i4);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(0, MR_r1, 0);
	if (MR_INT_NE(MR_tempr1,1)) {
		MR_GOTO_LAB(dir__check_dir_readable_5_0_i5);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = (MR_Word) MR_TAG_COMMON(1,0,6);
	}
	MR_np_call_localret_ent(io__check_file_accessibility_5_0,
		dir__check_dir_readable_5_0_i7);
MR_def_label(dir__check_dir_readable_5_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(dir__check_dir_readable_5_0_i4);
	}
	MR_r1 = (MR_Integer) 1;
	MR_r2 = (MR_Word) MR_TAG_COMMON(2,1,2);
	MR_decr_sp_and_return(2);
MR_def_label(dir__check_dir_readable_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_r2 = (MR_Word) MR_TAG_COMMON(2,1,3);
	MR_decr_sp_and_return(2);
MR_def_label(dir__check_dir_readable_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr1, 0) = MR_ctfield(1, MR_r1, 0);
	MR_r1 = (MR_Integer) 0;
	MR_r2 = MR_tempr1;
	MR_decr_sp_and_return(2);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(dir_module48)
	MR_init_entry1(dir__read_first_entry_4_0);
	MR_init_label3(dir__read_first_entry_4_0,2,5,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(dir__read_first_entry_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(dir__read_entry_4_0,
		dir__read_first_entry_4_0_i2);
MR_def_label(dir__read_first_entry_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TEST(MR_r1,1)) {
		MR_GOTO_LAB(dir__read_first_entry_4_0_i5);
	}
	if (MR_PTAG_TEST(MR_r1,2)) {
		MR_GOTO_LAB(dir__read_first_entry_4_0_i3);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_decr_sp_and_return(2);
MR_def_label(dir__read_first_entry_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 1) = MR_ctfield(1, MR_r1, 0);
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r1, 0) = MR_tempr1;
	MR_decr_sp_and_return(2);
	}
MR_def_label(dir__read_first_entry_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(2);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(dir_module49)
	MR_init_entry1(fn__dir__copy_c_string_1_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__dir__copy_c_string_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word	Ptr;
	MR_String	Str;
#define	MR_PROC_LABEL	mercury__fn__dir__copy_c_string_1_0
	Ptr = MR_r1;
{
#line 1593 "dir.m"

    MR_make_aligned_string_copy(Str, (char *) Ptr);
;}
#line 5337 "dir.c"
	MR_r1 = (MR_Word) Str;
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(dir_module50)
	MR_init_entry1(dir__close_2_5_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(dir__close_2_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	ML_DIR_STREAM	Dir;
	MR_Integer	Status;
	MR_Integer	Error;
	MR_Word	IO0;
	MR_Word	IO;
#define	MR_PROC_LABEL	mercury__dir__close_2_5_0
	MR_MAYBE_UNBOX_FOREIGN_TYPE(ML_DIR_STREAM, MR_r1, Dir);
{
#line 1634 "dir.m"
{
    IO = IO0;
#if defined(MR_WIN32)
    Status = FindClose(Dir);
    Error = GetLastError();
#elif defined(MR_HAVE_CLOSEDIR)
    Status = (closedir(Dir) == 0);
    Error = errno;
#else
    MR_fatal_error("dir.open called but not supported");
#endif
};}
#line 5381 "dir.c"
	MR_r1 = Status;
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_Integer, Error, MR_r2);
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(dir_module51)
	MR_init_entry1(dir__close_4_0);
	MR_init_label2(dir__close_4_0,4,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(dir__close_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	{
	ML_DIR_STREAM	Dir;
	MR_Integer	Status;
	MR_Integer	Error;
	MR_Word	IO0;
	MR_Word	IO;
#define	MR_PROC_LABEL	mercury__dir__close_4_0
	MR_MAYBE_UNBOX_FOREIGN_TYPE(ML_DIR_STREAM, MR_r1, Dir);
{
#line 1634 "dir.m"
{
    IO = IO0;
#if defined(MR_WIN32)
    Status = FindClose(Dir);
    Error = GetLastError();
#elif defined(MR_HAVE_CLOSEDIR)
    Status = (closedir(Dir) == 0);
    Error = errno;
#else
    MR_fatal_error("dir.open called but not supported");
#endif
};}
#line 5429 "dir.c"
	MR_tempr1 = Status;
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_Integer, Error, MR_r1);
#undef	MR_PROC_LABEL
	}
	if (MR_INT_NE(MR_tempr1,0)) {
		MR_GOTO_LAB(dir__close_4_0_i2);
	}
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_r2 = (MR_Word) MR_string_const("dir.foldl2: closing directory failed: ", 38);
	}
	MR_np_call_localret_ent(io__make_maybe_win32_err_msg_5_0,
		dir__close_4_0_i4);
MR_def_label(dir__close_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(1);
	}
MR_def_label(dir__close_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(dir_module52)
	MR_init_entry1(dir__make_win32_dir_open_result_ok_5_0);
	MR_init_label8(dir__make_win32_dir_open_result_ok_5_0,5,4,6,12,14,10,11,9)
	MR_init_label1(dir__make_win32_dir_open_result_ok_5_0,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(dir__make_win32_dir_open_result_ok_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word	Ptr;
	MR_String	Str;
#define	MR_PROC_LABEL	mercury__dir__make_win32_dir_open_result_ok_5_0
	Ptr = MR_r2;
{
#line 1593 "dir.m"

    MR_make_aligned_string_copy(Str, (char *) Ptr);
;}
#line 5485 "dir.c"
	MR_r4 = (MR_Word) Str;
#undef	MR_PROC_LABEL
	}
	if ((strcmp((char *)MR_r4, (char *)(MR_Word) MR_string_const(".", 1)) != 0)) {
		MR_GOTO_LAB(dir__make_win32_dir_open_result_ok_5_0_i5);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(2) = MR_r4;
	MR_GOTO_LAB(dir__make_win32_dir_open_result_ok_5_0_i4);
MR_def_label(dir__make_win32_dir_open_result_ok_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *)MR_r4, (char *)(MR_Word) MR_string_const("..", 2)) != 0)) {
		MR_GOTO_LAB(dir__make_win32_dir_open_result_ok_5_0_i3);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(2) = MR_r4;
MR_def_label(dir__make_win32_dir_open_result_ok_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(dir__read_entry_4_0,
		dir__make_win32_dir_open_result_ok_5_0_i6);
MR_def_label(dir__make_win32_dir_open_result_ok_5_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TEST(MR_r1,1)) {
		MR_GOTO_LAB(dir__make_win32_dir_open_result_ok_5_0_i9);
	}
	if (MR_PTAG_TEST(MR_r1,2)) {
		MR_GOTO_LAB(dir__make_win32_dir_open_result_ok_5_0_i10);
	}
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(dir__close_4_0,
		dir__make_win32_dir_open_result_ok_5_0_i12);
MR_def_label(dir__make_win32_dir_open_result_ok_5_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(dir__make_win32_dir_open_result_ok_5_0_i14);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_decr_sp_and_return(3);
MR_def_label(dir__make_win32_dir_open_result_ok_5_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr1, 0) = MR_ctfield(1, MR_r1, 0);
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(3);
	}
MR_def_label(dir__make_win32_dir_open_result_ok_5_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	}
	MR_np_call_localret_ent(dir__close_4_0,
		dir__make_win32_dir_open_result_ok_5_0_i11);
MR_def_label(dir__make_win32_dir_open_result_ok_5_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_decr_sp_and_return(3);
MR_def_label(dir__make_win32_dir_open_result_ok_5_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 1) = MR_ctfield(1, MR_r1, 0);
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r1, 0) = MR_tempr1;
	MR_decr_sp_and_return(3);
	}
MR_def_label(dir__make_win32_dir_open_result_ok_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tfield(0, MR_tempr1, 1) = MR_r4;
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r1, 0) = MR_tempr1;
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(dir_module53)
	MR_init_entry1(fn__dir__make_dir_open_result_eof_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__dir__make_dir_open_result_eof_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(dir_module54)
	MR_init_entry1(dir__make_dir_open_result_error_4_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(dir__make_dir_open_result_error_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	{
	MR_Integer	Error;
	MR_String	Msg0;
	MR_String	Msg;
	MR_Word	IO0;
	MR_Word	IO;
#define	MR_PROC_LABEL	mercury__dir__make_dir_open_result_error_4_0
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_Integer, MR_r1, Error);
	Msg0 = (MR_String) (MR_Word) MR_string_const("dir.foldl2: opening directory failed: ", 38);
	MR_OBTAIN_GLOBAL_LOCK("make_err_msg");
{
#line 979 "io.opt"

    ML_maybe_make_err_msg(MR_TRUE, Error, Msg0, MR_PROC_LABEL, MR_FALSE, Msg);
    MR_update_io(IO0, IO);
;}
#line 5626 "dir.c"
	MR_RELEASE_GLOBAL_LOCK("make_err_msg");
	MR_tempr1 = (MR_Word) Msg;
#undef	MR_PROC_LABEL
	}
	MR_tag_alloc_heap(MR_r1, 2, (MR_Integer) 1);
	MR_tfield(2, MR_r1, 0) = MR_tempr1;
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(dir_module55)
	MR_init_entry1(fn__dir__add_alternatives_2_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__dir__add_alternatives_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_r1;
	MR_r1 = MR_tempr1;
	MR_np_tailcall_ent(f_100_105_114_95_95_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_95_95_104_111_49_56_95_95_91_49_44_32_51_93_95_48_3_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(dir_module56)
	MR_init_entry1(__Unify___dir__foldl_pred_1_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___dir__foldl_pred_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(f_100_105_114_95_95_112_114_105_118_97_116_101_95_98_117_105_108_116_105_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_117_110_105_102_121_95_112_114_101_100_95_95_91_49_44_32_50_93_95_48_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(dir_module57)
	MR_init_entry1(__Compare___dir__foldl_pred_1_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___dir__foldl_pred_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(f_100_105_114_95_95_112_114_105_118_97_116_101_95_98_117_105_108_116_105_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_99_111_109_112_97_114_101_95_112_114_101_100_95_95_91_50_44_32_51_93_95_48_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___builtin__c_pointer_0_0);

MR_BEGIN_MODULE(dir_module58)
	MR_init_entry1(__Unify___dir__stream_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___dir__stream_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(__Unify___builtin__c_pointer_0_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Compare___builtin__c_pointer_0_0);

MR_BEGIN_MODULE(dir_module59)
	MR_init_entry1(__Compare___dir__stream_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___dir__stream_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(__Compare___builtin__c_pointer_0_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(dir_module60)
	MR_init_entry1(fn__dir__list__map__ho5_2_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__dir__list__map__ho5_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(dir__list__map__ho15_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(dir_module61)
	MR_init_entry1(dir__list__takewhile__ho7_4_0);
	MR_init_label4(dir__list__takewhile__ho7_4_0,23,8,10,4)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(dir__list__takewhile__ho7_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(dir__list__takewhile__ho7_4_0_i23);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(dir__list__takewhile__ho7_4_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(3) = MR_ctfield(1, MR_r1, 1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(1, MR_r1, 0);
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(dir__is_directory_separator_1_0,
		dir__list__takewhile__ho7_4_0_i8);
MR_def_label(dir__list__takewhile__ho7_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(dir__list__takewhile__ho7_4_0_i4);
	}
	MR_r1 = MR_sv(1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_r1 = MR_sv(3);
	}
	MR_np_localcall_lab(dir__list__takewhile__ho7_4_0,
		dir__list__takewhile__ho7_4_0_i10);
MR_def_label(dir__list__takewhile__ho7_4_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(4);
	}
MR_def_label(dir__list__takewhile__ho7_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_decr_sp_and_return(4);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(dir_module62)
	MR_init_entry1(dir__list__takewhile__ho8_4_0);
	MR_init_label4(dir__list__takewhile__ho8_4_0,23,8,10,4)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(dir__list__takewhile__ho8_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(dir__list__takewhile__ho8_4_0_i23);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(dir__list__takewhile__ho8_4_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(3) = MR_ctfield(1, MR_r1, 1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(1, MR_r1, 0);
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(dir__is_directory_separator_1_0,
		dir__list__takewhile__ho8_4_0_i8);
MR_def_label(dir__list__takewhile__ho8_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(dir__list__takewhile__ho8_4_0_i4);
	}
	MR_r1 = MR_sv(1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_r1 = MR_sv(3);
	}
	MR_np_localcall_lab(dir__list__takewhile__ho8_4_0,
		dir__list__takewhile__ho8_4_0_i10);
MR_def_label(dir__list__takewhile__ho8_4_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(4);
	}
MR_def_label(dir__list__takewhile__ho8_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_decr_sp_and_return(4);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(dir_module63)
	MR_init_entry1(dir__list__takewhile__ho9_4_0);
	MR_init_label4(dir__list__takewhile__ho9_4_0,23,8,10,4)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(dir__list__takewhile__ho9_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(dir__list__takewhile__ho9_4_0_i23);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(dir__list__takewhile__ho9_4_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(3) = MR_ctfield(1, MR_r1, 1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(1, MR_r1, 0);
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(dir__is_directory_separator_1_0,
		dir__list__takewhile__ho9_4_0_i8);
MR_def_label(dir__list__takewhile__ho9_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(dir__list__takewhile__ho9_4_0_i4);
	}
	MR_r1 = MR_sv(1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_r1 = MR_sv(3);
	}
	MR_np_localcall_lab(dir__list__takewhile__ho9_4_0,
		dir__list__takewhile__ho9_4_0_i10);
MR_def_label(dir__list__takewhile__ho9_4_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(4);
	}
MR_def_label(dir__list__takewhile__ho9_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_decr_sp_and_return(4);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(dir_module64)
	MR_init_entry1(dir__list__map__ho11_3_0);
	MR_init_label3(dir__list__map__ho11_3_0,4,5,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(dir__list__map__ho11_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(dir__list__map__ho11_3_0_i3);
	}
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_ctfield(1, MR_r1, 1);
	MR_r1 = MR_ctfield(1, MR_r1, 0);
	MR_np_call_localret_ent(string__from_char_list_2_0,
		dir__list__map__ho11_3_0_i4);
MR_def_label(dir__list__map__ho11_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	}
	MR_np_localcall_lab(dir__list__map__ho11_3_0,
		dir__list__map__ho11_3_0_i5);
MR_def_label(dir__list__map__ho11_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(2);
	}
MR_def_label(dir__list__map__ho11_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(dir_module65)
	MR_init_entry1(dir__list__map__ho15_3_0);
	MR_init_label3(dir__list__map__ho15_3_0,4,5,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(dir__list__map__ho15_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(dir__list__map__ho15_3_0_i3);
	}
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_ctfield(1, MR_r1, 1);
	MR_r1 = MR_ctfield(1, MR_r1, 0);
	MR_np_call_localret_ent(dir__IntroducedFrom__pred__map__214__1__ho22_5_0,
		dir__list__map__ho15_3_0_i4);
MR_def_label(dir__list__map__ho15_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	}
	MR_np_localcall_lab(dir__list__map__ho15_3_0,
		dir__list__map__ho15_3_0_i5);
MR_def_label(dir__list__map__ho15_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(2);
	}
MR_def_label(dir__list__map__ho15_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(dir_module66)
	MR_init_entry1(dir__IntroducedFrom__pred__map__214__1__ho22_5_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(dir__IntroducedFrom__pred__map__214__1__ho22_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_TAG_COMMON(1,5,2);
	MR_np_tailcall_ent(fn__dir__expand_acc_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(dir_module67)
	MR_init_entry1(f_100_105_114_95_95_112_114_105_118_97_116_101_95_98_117_105_108_116_105_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_99_111_109_112_97_114_101_95_112_114_101_100_95_95_91_50_44_32_51_93_95_48_3_0);
	MR_init_label1(f_100_105_114_95_95_112_114_105_118_97_116_101_95_98_117_105_108_116_105_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_99_111_109_112_97_114_101_95_112_114_101_100_95_95_91_50_44_32_51_93_95_48_3_0,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(f_100_105_114_95_95_112_114_105_118_97_116_101_95_98_117_105_108_116_105_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_99_111_109_112_97_114_101_95_112_114_101_100_95_95_91_50_44_32_51_93_95_48_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__f_100_105_114_95_95_112_114_105_118_97_116_101_95_98_117_105_108_116_105_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_99_111_109_112_97_114_101_95_112_114_101_100_95_95_91_50_44_32_51_93_95_48_3_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
{
#line 78 "builtin.opt"

    SUCCESS_INDICATOR = MR_TRUE;
;}
#line 6101 "dir.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(f_100_105_114_95_95_112_114_105_118_97_116_101_95_98_117_105_108_116_105_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_99_111_109_112_97_114_101_95_112_114_101_100_95_95_91_50_44_32_51_93_95_48_3_0_i2);
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	MR_r1 = (MR_Word) MR_string_const("attempted higher-order comparison", 33);
	MR_np_tailcall_ent(require__error_1_0);
MR_def_label(f_100_105_114_95_95_112_114_105_118_97_116_101_95_98_117_105_108_116_105_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_99_111_109_112_97_114_101_95_112_114_101_100_95_95_91_50_44_32_51_93_95_48_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(dir_module68)
	MR_init_entry1(f_100_105_114_95_95_112_114_105_118_97_116_101_95_98_117_105_108_116_105_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_117_110_105_102_121_95_112_114_101_100_95_95_91_49_44_32_50_93_95_48_2_0);
	MR_init_label3(f_100_105_114_95_95_112_114_105_118_97_116_101_95_98_117_105_108_116_105_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_117_110_105_102_121_95_112_114_101_100_95_95_91_49_44_32_50_93_95_48_2_0,2,10,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(f_100_105_114_95_95_112_114_105_118_97_116_101_95_98_117_105_108_116_105_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_117_110_105_102_121_95_112_114_101_100_95_95_91_49_44_32_50_93_95_48_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__f_100_105_114_95_95_112_114_105_118_97_116_101_95_98_117_105_108_116_105_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_117_110_105_102_121_95_112_114_101_100_95_95_91_49_44_32_50_93_95_48_2_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
{
#line 78 "builtin.opt"

    SUCCESS_INDICATOR = MR_TRUE;
;}
#line 6141 "dir.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(f_100_105_114_95_95_112_114_105_118_97_116_101_95_98_117_105_108_116_105_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_117_110_105_102_121_95_112_114_101_100_95_95_91_49_44_32_50_93_95_48_2_0_i2);
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_r1 = (MR_Word) MR_string_const("attempted higher-order unification", 34);
	MR_np_call_localret_ent(require__error_1_0,
		f_100_105_114_95_95_112_114_105_118_97_116_101_95_98_117_105_108_116_105_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_117_110_105_102_121_95_112_114_101_100_95_95_91_49_44_32_50_93_95_48_2_0_i10);
MR_def_label(f_100_105_114_95_95_112_114_105_118_97_116_101_95_98_117_105_108_116_105_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_117_110_105_102_121_95_112_114_101_100_95_95_91_49_44_32_50_93_95_48_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__f_100_105_114_95_95_112_114_105_118_97_116_101_95_98_117_105_108_116_105_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_117_110_105_102_121_95_112_114_101_100_95_95_91_49_44_32_50_93_95_48_2_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
{
#line 78 "builtin.opt"

    SUCCESS_INDICATOR = MR_TRUE;
;}
#line 6164 "dir.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(f_100_105_114_95_95_112_114_105_118_97_116_101_95_98_117_105_108_116_105_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_117_110_105_102_121_95_112_114_101_100_95_95_91_49_44_32_50_93_95_48_2_0_i1);
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
MR_def_label(f_100_105_114_95_95_112_114_105_118_97_116_101_95_98_117_105_108_116_105_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_117_110_105_102_121_95_112_114_101_100_95_95_91_49_44_32_50_93_95_48_2_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(1);
MR_def_label(f_100_105_114_95_95_112_114_105_118_97_116_101_95_98_117_105_108_116_105_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_117_110_105_102_121_95_112_114_101_100_95_95_91_49_44_32_50_93_95_48_2_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(dir_module69)
	MR_init_entry1(fn__f_100_105_114_95_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__f_100_105_114_95_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1200;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(dir_module70)
	MR_init_entry1(fn__f_100_105_114_95_95_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_112_95_95_104_111_51_95_95_91_50_93_95_48_2_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__f_100_105_114_95_95_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_112_95_95_104_111_51_95_95_91_50_93_95_48_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(f_100_105_114_95_95_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_95_95_104_111_49_55_95_95_91_49_44_32_51_93_95_48_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(exception__finally_2_6_0);

MR_BEGIN_MODULE(dir_module71)
	MR_init_entry1(f_100_105_114_95_95_101_120_99_101_112_116_105_111_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_110_97_108_108_121_95_95_104_111_54_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_55_44_32_56_44_32_57_44_32_49_48_44_32_49_49_44_32_49_50_44_32_49_51_44_32_49_52_93_95_48_6_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(f_100_105_114_95_95_101_120_99_101_112_116_105_111_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_110_97_108_108_121_95_95_104_111_54_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_55_44_32_56_44_32_57_44_32_49_48_44_32_49_49_44_32_49_50_44_32_49_51_44_32_49_52_93_95_48_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(exception__finally_2_6_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(dir_module72)
	MR_init_entry1(f_100_105_114_95_95_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_95_95_104_111_49_54_95_95_91_49_44_32_51_93_95_48_3_0);
	MR_init_label3(f_100_105_114_95_95_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_95_95_104_111_49_54_95_95_91_49_44_32_51_93_95_48_3_0,4,5,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(f_100_105_114_95_95_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_95_95_104_111_49_54_95_95_91_49_44_32_51_93_95_48_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r2,0,0)) {
		MR_GOTO_LAB(f_100_105_114_95_95_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_95_95_104_111_49_54_95_95_91_49_44_32_51_93_95_48_3_0_i3);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_ctfield(1, MR_r2, 1);
	MR_sv(2) = MR_r1;
	MR_r2 = MR_ctfield(1, MR_r2, 0);
	MR_np_call_localret_ent(fn__dir__add_alternatives_2_0,
		f_100_105_114_95_95_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_95_95_104_111_49_54_95_95_91_49_44_32_51_93_95_48_3_0_i4);
MR_def_label(f_100_105_114_95_95_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_95_95_104_111_49_54_95_95_91_49_44_32_51_93_95_48_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_np_localcall_lab(f_100_105_114_95_95_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_95_95_104_111_49_54_95_95_91_49_44_32_51_93_95_48_3_0,
		f_100_105_114_95_95_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_95_95_104_111_49_54_95_95_91_49_44_32_51_93_95_48_3_0_i5);
MR_def_label(f_100_105_114_95_95_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_95_95_104_111_49_54_95_95_91_49_44_32_51_93_95_48_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(3);
	}
MR_def_label(f_100_105_114_95_95_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_95_95_104_111_49_54_95_95_91_49_44_32_51_93_95_48_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(dir_module73)
	MR_init_entry1(f_100_105_114_95_95_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_95_95_104_111_49_55_95_95_91_49_44_32_51_93_95_48_3_0);
	MR_init_label3(f_100_105_114_95_95_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_95_95_104_111_49_55_95_95_91_49_44_32_51_93_95_48_3_0,4,5,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(f_100_105_114_95_95_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_95_95_104_111_49_55_95_95_91_49_44_32_51_93_95_48_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r2,0,0)) {
		MR_GOTO_LAB(f_100_105_114_95_95_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_95_95_104_111_49_55_95_95_91_49_44_32_51_93_95_48_3_0_i3);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_sv(1) = MR_ctfield(1, MR_r2, 1);
	MR_sv(2) = MR_r1;
	MR_r1 = (MR_Word) MR_CHAR_CTOR_ADDR;
	MR_r2 = MR_ctfield(1, MR_r2, 0);
	}
	MR_np_call_localret_ent(list__append_3_1,
		f_100_105_114_95_95_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_95_95_104_111_49_55_95_95_91_49_44_32_51_93_95_48_3_0_i4);
MR_def_label(f_100_105_114_95_95_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_95_95_104_111_49_55_95_95_91_49_44_32_51_93_95_48_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_np_localcall_lab(f_100_105_114_95_95_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_95_95_104_111_49_55_95_95_91_49_44_32_51_93_95_48_3_0,
		f_100_105_114_95_95_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_95_95_104_111_49_55_95_95_91_49_44_32_51_93_95_48_3_0_i5);
MR_def_label(f_100_105_114_95_95_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_95_95_104_111_49_55_95_95_91_49_44_32_51_93_95_48_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(3);
	}
MR_def_label(f_100_105_114_95_95_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_95_95_104_111_49_55_95_95_91_49_44_32_51_93_95_48_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(dir_module74)
	MR_init_entry1(f_100_105_114_95_95_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_95_95_104_111_49_56_95_95_91_49_44_32_51_93_95_48_3_0);
	MR_init_label3(f_100_105_114_95_95_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_95_95_104_111_49_56_95_95_91_49_44_32_51_93_95_48_3_0,4,5,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(f_100_105_114_95_95_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_95_95_104_111_49_56_95_95_91_49_44_32_51_93_95_48_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r2,0,0)) {
		MR_GOTO_LAB(f_100_105_114_95_95_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_95_95_104_111_49_56_95_95_91_49_44_32_51_93_95_48_3_0_i3);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r2;
	MR_sv(1) = MR_ctfield(1, MR_tempr2, 1);
	MR_sv(2) = MR_r1;
	MR_r1 = (MR_Word) MR_CHAR_CTOR_ADDR;
	MR_tempr1 = MR_tempr2;
	MR_r2 = MR_sv(2);
	MR_r3 = MR_ctfield(1, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(list__append_3_1,
		f_100_105_114_95_95_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_95_95_104_111_49_56_95_95_91_49_44_32_51_93_95_48_3_0_i4);
MR_def_label(f_100_105_114_95_95_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_95_95_104_111_49_56_95_95_91_49_44_32_51_93_95_48_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_np_localcall_lab(f_100_105_114_95_95_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_95_95_104_111_49_56_95_95_91_49_44_32_51_93_95_48_3_0,
		f_100_105_114_95_95_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_95_95_104_111_49_56_95_95_91_49_44_32_51_93_95_48_3_0_i5);
MR_def_label(f_100_105_114_95_95_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_95_95_104_111_49_56_95_95_91_49_44_32_51_93_95_48_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(3);
	}
MR_def_label(f_100_105_114_95_95_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_95_95_104_111_49_56_95_95_91_49_44_32_51_93_95_48_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_declare_static(mercury__dir__make_dir_open_result_error_4_0);

void
ML_make_dir_open_result_error(MR_Integer Mercury__argument1, MR_Word * Mercury__argument2);

void
ML_make_dir_open_result_error(MR_Integer Mercury__argument1, MR_Word * Mercury__argument2)
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
	MR_setup_callback(MR_ENTRY(mercury__dir__make_dir_open_result_error_4_0));
#endif
	MR_restore_registers();
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_Integer, Mercury__argument1, MR_r1);
	MR_save_transient_registers();
	(void) MR_call_engine(MR_ENTRY(mercury__dir__make_dir_open_result_error_4_0), MR_FALSE);
	MR_restore_transient_registers();
#if MR_DEEP_PROFILING
	MR_current_call_site_dynamic = saved_cur_csd;
	MR_current_callback_site = saved_cur_callback;
#endif
	*Mercury__argument2 = MR_r1;
#if MR_THREAD_SAFE
	if (must_finalize_engine) {
		 MR_finalize_thread_engine();
	}
#endif
	MR_restore_regs_from_mem(c_regs);
}


MR_declare_static(mercury__fn__dir__make_dir_open_result_eof_0_0);

MR_Word
ML_make_dir_open_result_eof(void);

MR_Word
ML_make_dir_open_result_eof(void)
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
	MR_Word return_value;

	MR_save_regs_to_mem(c_regs);
#if MR_THREAD_SAFE
	must_finalize_engine = MR_init_thread(MR_use_now);
#endif
#if MR_DEEP_PROFILING
	saved_cur_callback = MR_current_callback_site;
	saved_cur_csd = MR_current_call_site_dynamic;
	MR_setup_callback(MR_ENTRY(mercury__fn__dir__make_dir_open_result_eof_0_0));
#endif
	MR_restore_registers();
	MR_save_transient_registers();
	(void) MR_call_engine(MR_ENTRY(mercury__fn__dir__make_dir_open_result_eof_0_0), MR_FALSE);
	MR_restore_transient_registers();
#if MR_DEEP_PROFILING
	MR_current_call_site_dynamic = saved_cur_csd;
	MR_current_callback_site = saved_cur_callback;
#endif
	return_value = MR_r1;
#if MR_THREAD_SAFE
	if (must_finalize_engine) {
		 MR_finalize_thread_engine();
	}
#endif
	MR_restore_regs_from_mem(c_regs);
	return return_value;
}


MR_declare_static(mercury__dir__make_win32_dir_open_result_ok_5_0);

void
ML_make_win32_dir_open_result_ok(ML_DIR_STREAM Mercury__argument1, MR_Word Mercury__argument2, MR_Word * Mercury__argument3);

void
ML_make_win32_dir_open_result_ok(ML_DIR_STREAM Mercury__argument1, MR_Word Mercury__argument2, MR_Word * Mercury__argument3)
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
	MR_setup_callback(MR_ENTRY(mercury__dir__make_win32_dir_open_result_ok_5_0));
#endif
	MR_restore_registers();
	MR_MAYBE_BOX_FOREIGN_TYPE(ML_DIR_STREAM, Mercury__argument1, MR_r1);
	MR_r2 = Mercury__argument2;
	MR_save_transient_registers();
	(void) MR_call_engine(MR_ENTRY(mercury__dir__make_win32_dir_open_result_ok_5_0), MR_FALSE);
	MR_restore_transient_registers();
#if MR_DEEP_PROFILING
	MR_current_call_site_dynamic = saved_cur_csd;
	MR_current_callback_site = saved_cur_callback;
#endif
	*Mercury__argument3 = MR_r1;
#if MR_THREAD_SAFE
	if (must_finalize_engine) {
		 MR_finalize_thread_engine();
	}
#endif
	MR_restore_regs_from_mem(c_regs);
}


MR_declare_static(mercury__dir__read_first_entry_4_0);

void
ML_dir_read_first_entry(ML_DIR_STREAM Mercury__argument1, MR_Word * Mercury__argument2);

void
ML_dir_read_first_entry(ML_DIR_STREAM Mercury__argument1, MR_Word * Mercury__argument2)
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
	MR_setup_callback(MR_ENTRY(mercury__dir__read_first_entry_4_0));
#endif
	MR_restore_registers();
	MR_MAYBE_BOX_FOREIGN_TYPE(ML_DIR_STREAM, Mercury__argument1, MR_r1);
	MR_save_transient_registers();
	(void) MR_call_engine(MR_ENTRY(mercury__dir__read_first_entry_4_0), MR_FALSE);
	MR_restore_transient_registers();
#if MR_DEEP_PROFILING
	MR_current_call_site_dynamic = saved_cur_csd;
	MR_current_callback_site = saved_cur_callback;
#endif
	*Mercury__argument2 = MR_r1;
#if MR_THREAD_SAFE
	if (must_finalize_engine) {
		 MR_finalize_thread_engine();
	}
#endif
	MR_restore_regs_from_mem(c_regs);
}


MR_declare_static(mercury__dir__check_dir_readable_5_0);

void
ML_check_dir_readable(MR_String Mercury__argument1, MR_Integer * Mercury__argument2, MR_Word * Mercury__argument3);

void
ML_check_dir_readable(MR_String Mercury__argument1, MR_Integer * Mercury__argument2, MR_Word * Mercury__argument3)
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
	MR_setup_callback(MR_ENTRY(mercury__dir__check_dir_readable_5_0));
#endif
	MR_restore_registers();
	MR_r1 = (MR_Word) Mercury__argument1;
	MR_save_transient_registers();
	(void) MR_call_engine(MR_ENTRY(mercury__dir__check_dir_readable_5_0), MR_FALSE);
	MR_restore_transient_registers();
#if MR_DEEP_PROFILING
	MR_current_call_site_dynamic = saved_cur_csd;
	MR_current_callback_site = saved_cur_callback;
#endif
	*Mercury__argument2 = MR_r1;
	*Mercury__argument3 = MR_r2;
#if MR_THREAD_SAFE
	if (must_finalize_engine) {
		 MR_finalize_thread_engine();
	}
#endif
	MR_restore_regs_from_mem(c_regs);
}


MR_declare_static(mercury__dir__check_dir_accessibility_4_0);

void
ML_check_dir_accessibility(MR_String Mercury__argument1, MR_Word * Mercury__argument2);

void
ML_check_dir_accessibility(MR_String Mercury__argument1, MR_Word * Mercury__argument2)
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
	MR_setup_callback(MR_ENTRY(mercury__dir__check_dir_accessibility_4_0));
#endif
	MR_restore_registers();
	MR_r1 = (MR_Word) Mercury__argument1;
	MR_save_transient_registers();
	(void) MR_call_engine(MR_ENTRY(mercury__dir__check_dir_accessibility_4_0), MR_FALSE);
	MR_restore_transient_registers();
#if MR_DEEP_PROFILING
	MR_current_call_site_dynamic = saved_cur_csd;
	MR_current_callback_site = saved_cur_callback;
#endif
	*Mercury__argument2 = MR_r1;
#if MR_THREAD_SAFE
	if (must_finalize_engine) {
		 MR_finalize_thread_engine();
	}
#endif
	MR_restore_regs_from_mem(c_regs);
}


MR_declare_static(mercury__dir__make_mkdir_res_exists_5_0);

void
ML_make_mkdir_res_exists(MR_Integer Mercury__argument1, MR_String Mercury__argument2, MR_Word * Mercury__argument3);

void
ML_make_mkdir_res_exists(MR_Integer Mercury__argument1, MR_String Mercury__argument2, MR_Word * Mercury__argument3)
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
	MR_setup_callback(MR_ENTRY(mercury__dir__make_mkdir_res_exists_5_0));
#endif
	MR_restore_registers();
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_Integer, Mercury__argument1, MR_r1);
	MR_r2 = (MR_Word) Mercury__argument2;
	MR_save_transient_registers();
	(void) MR_call_engine(MR_ENTRY(mercury__dir__make_mkdir_res_exists_5_0), MR_FALSE);
	MR_restore_transient_registers();
#if MR_DEEP_PROFILING
	MR_current_call_site_dynamic = saved_cur_csd;
	MR_current_callback_site = saved_cur_callback;
#endif
	*Mercury__argument3 = MR_r1;
#if MR_THREAD_SAFE
	if (must_finalize_engine) {
		 MR_finalize_thread_engine();
	}
#endif
	MR_restore_regs_from_mem(c_regs);
}


MR_declare_static(mercury__dir__make_mkdir_res_error_4_0);

void
ML_make_mkdir_res_error(MR_Integer Mercury__argument1, MR_Word * Mercury__argument2);

void
ML_make_mkdir_res_error(MR_Integer Mercury__argument1, MR_Word * Mercury__argument2)
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
	MR_setup_callback(MR_ENTRY(mercury__dir__make_mkdir_res_error_4_0));
#endif
	MR_restore_registers();
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_Integer, Mercury__argument1, MR_r1);
	MR_save_transient_registers();
	(void) MR_call_engine(MR_ENTRY(mercury__dir__make_mkdir_res_error_4_0), MR_FALSE);
	MR_restore_transient_registers();
#if MR_DEEP_PROFILING
	MR_current_call_site_dynamic = saved_cur_csd;
	MR_current_callback_site = saved_cur_callback;
#endif
	*Mercury__argument2 = MR_r1;
#if MR_THREAD_SAFE
	if (must_finalize_engine) {
		 MR_finalize_thread_engine();
	}
#endif
	MR_restore_regs_from_mem(c_regs);
}


MR_declare_static(mercury__fn__dir__make_mkdir_res_ok_0_0);

MR_Word
ML_make_mkdir_res_ok(void);

MR_Word
ML_make_mkdir_res_ok(void)
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
	MR_Word return_value;

	MR_save_regs_to_mem(c_regs);
#if MR_THREAD_SAFE
	must_finalize_engine = MR_init_thread(MR_use_now);
#endif
#if MR_DEEP_PROFILING
	saved_cur_callback = MR_current_callback_site;
	saved_cur_csd = MR_current_call_site_dynamic;
	MR_setup_callback(MR_ENTRY(mercury__fn__dir__make_mkdir_res_ok_0_0));
#endif
	MR_restore_registers();
	MR_save_transient_registers();
	(void) MR_call_engine(MR_ENTRY(mercury__fn__dir__make_mkdir_res_ok_0_0), MR_FALSE);
	MR_restore_transient_registers();
#if MR_DEEP_PROFILING
	MR_current_call_site_dynamic = saved_cur_csd;
	MR_current_callback_site = saved_cur_callback;
#endif
	return_value = MR_r1;
#if MR_THREAD_SAFE
	if (must_finalize_engine) {
		 MR_finalize_thread_engine();
	}
#endif
	MR_restore_regs_from_mem(c_regs);
	return return_value;
}


MR_declare_entry(mercury__fn__dir__make_path_name_2_0);

MR_String
ML_make_path_name(MR_String Mercury__argument1, MR_String Mercury__argument2);

MR_String
ML_make_path_name(MR_String Mercury__argument1, MR_String Mercury__argument2)
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
	MR_String return_value;

	MR_save_regs_to_mem(c_regs);
#if MR_THREAD_SAFE
	must_finalize_engine = MR_init_thread(MR_use_now);
#endif
#if MR_DEEP_PROFILING
	saved_cur_callback = MR_current_callback_site;
	saved_cur_csd = MR_current_call_site_dynamic;
	MR_setup_callback(MR_ENTRY(mercury__fn__dir__make_path_name_2_0));
#endif
	MR_restore_registers();
	MR_r1 = (MR_Word) Mercury__argument1;
	MR_r2 = (MR_Word) Mercury__argument2;
	MR_save_transient_registers();
	(void) MR_call_engine(MR_ENTRY(mercury__fn__dir__make_path_name_2_0), MR_FALSE);
	MR_restore_transient_registers();
#if MR_DEEP_PROFILING
	MR_current_call_site_dynamic = saved_cur_csd;
	MR_current_callback_site = saved_cur_callback;
#endif
	return_value = (MR_String) MR_r1;
#if MR_THREAD_SAFE
	if (must_finalize_engine) {
		 MR_finalize_thread_engine();
	}
#endif
	MR_restore_regs_from_mem(c_regs);
	return return_value;
}


MR_declare_entry(mercury__fn__dir__this_directory_0_0);

MR_String
ML_dir_this_directory(void);

MR_String
ML_dir_this_directory(void)
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
	MR_String return_value;

	MR_save_regs_to_mem(c_regs);
#if MR_THREAD_SAFE
	must_finalize_engine = MR_init_thread(MR_use_now);
#endif
#if MR_DEEP_PROFILING
	saved_cur_callback = MR_current_callback_site;
	saved_cur_csd = MR_current_call_site_dynamic;
	MR_setup_callback(MR_ENTRY(mercury__fn__dir__this_directory_0_0));
#endif
	MR_restore_registers();
	MR_save_transient_registers();
	(void) MR_call_engine(MR_ENTRY(mercury__fn__dir__this_directory_0_0), MR_FALSE);
	MR_restore_transient_registers();
#if MR_DEEP_PROFILING
	MR_current_call_site_dynamic = saved_cur_csd;
	MR_current_callback_site = saved_cur_callback;
#endif
	return_value = (MR_String) MR_r1;
#if MR_THREAD_SAFE
	if (must_finalize_engine) {
		 MR_finalize_thread_engine();
	}
#endif
	MR_restore_regs_from_mem(c_regs);
	return return_value;
}


static void mercury__dir_maybe_bunch_0(void)
{
	dir_module0();
	dir_module1();
	dir_module2();
	dir_module3();
	dir_module4();
	dir_module5();
	dir_module6();
	dir_module7();
	dir_module8();
	dir_module9();
	dir_module10();
	dir_module11();
	dir_module12();
	dir_module13();
	dir_module14();
	dir_module15();
	dir_module16();
	dir_module17();
	dir_module18();
	dir_module19();
	dir_module20();
	dir_module21();
	dir_module22();
	dir_module23();
	dir_module24();
	dir_module25();
	dir_module26();
	dir_module27();
	dir_module28();
	dir_module29();
	dir_module30();
	dir_module31();
	dir_module32();
	dir_module33();
	dir_module34();
	dir_module35();
	dir_module36();
	dir_module37();
	dir_module38();
	dir_module39();
}

static void mercury__dir_maybe_bunch_1(void)
{
	dir_module40();
	dir_module41();
	dir_module42();
	dir_module43();
	dir_module44();
	dir_module45();
	dir_module46();
	dir_module47();
	dir_module48();
	dir_module49();
	dir_module50();
	dir_module51();
	dir_module52();
	dir_module53();
	dir_module54();
	dir_module55();
	dir_module56();
	dir_module57();
	dir_module58();
	dir_module59();
	dir_module60();
	dir_module61();
	dir_module62();
	dir_module63();
	dir_module64();
	dir_module65();
	dir_module66();
	dir_module67();
	dir_module68();
	dir_module69();
	dir_module70();
	dir_module71();
	dir_module72();
	dir_module73();
	dir_module74();
}

/* suppress gcc -Wmissing-decls warnings */
void mercury__dir__init(void);
void mercury__dir__init_type_tables(void);
void mercury__dir__init_debugger(void);
#ifdef MR_DEEP_PROFILING
void mercury__dir__write_out_proc_statics(FILE *fp);
#endif
#ifdef MR_RECORD_TERM_SIZES
void mercury__dir__init_complexity_procs(void);
#endif

void mercury__dir__init(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	mercury__dir_maybe_bunch_0();
	mercury__dir_maybe_bunch_1();
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_dir__type_ctor_info_stream_0,
		dir__stream_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_dir__type_ctor_info_foldl_pred_1,
		dir__foldl_pred_1_0);
	mercury__dir__init_debugger();
}

void mercury__dir__init_type_tables(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	{
		MR_register_type_ctor_info(
		&mercury_data_dir__type_ctor_info_stream_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_dir__type_ctor_info_foldl_pred_1);
	}
}


void mercury__dir__init_debugger(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}

#ifdef MR_DEEP_PROFILING

void mercury__dir__write_out_proc_statics(FILE *fp)
{
}

#endif

#ifdef MR_RECORD_TERM_SIZES

void mercury__dir__init_complexity_procs(void)
{
}

#endif

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;
