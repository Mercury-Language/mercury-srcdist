/*
** Automatically generated from `dir.m'
** by the Mercury compiler,
** version rotd-2013-02-19, configured for x86_64-apple-darwin12.2.1.
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
INIT mercury__dir__init
ENDINIT
*/

#define MR_ALLOW_RESET
#include "mercury_imp.h"
#line 25 "dir.c"
#include "dir.mh"

#line 28 "dir.c"
#line 526 "io.int"
#include "io.mh"

#line 32 "dir.c"
#line 536 "io.int"
#include "time.mh"

#line 36 "dir.c"
#line 537 "io.int"
#include "string.mh"

#line 40 "dir.c"
#line 31 "bitmap.int2"
#include "bitmap.mh"

#line 44 "dir.c"
#line 21 "stm_builtin.int2"
#include "stm_builtin.mh"

#line 48 "dir.c"
#line 35 "store.int2"
#include "store.mh"

#line 52 "dir.c"
#line 33 "array.int2"
#include "array.mh"

#line 56 "dir.c"
#line 4 "builtin.opt"
#include "builtin.mh"

#line 60 "dir.c"
#line 12 "pretty_printer.opt"
#include "pretty_printer.mh"

#line 64 "dir.c"
#line 39 "pretty_printer.opt"
#include "version_array.mh"

#line 68 "dir.c"
#line 3 "float.opt"
#include "float.mh"

#line 72 "dir.c"
#line 3 "math.opt"
#include "math.mh"

#line 76 "dir.c"
#line 3 "construct.opt"
#include "construct.mh"

#line 80 "dir.c"
#line 6 "type_desc.opt"
#include "type_desc.mh"

#line 84 "dir.c"
#line 130 "rtti_implementation.opt"
#include "rtti_implementation.mh"

#line 88 "dir.c"
#line 4 "char.opt"
#include "char.mh"

#line 92 "dir.c"
#line 14 "exception.opt"
#include "exception.mh"

#line 96 "dir.c"
#line 4 "int.opt"
#include "int.mh"

#line 100 "dir.c"
#line 171 "io.opt"
#include "table_builtin.mh"

#line 104 "dir.c"
#line 6 "benchmarking.opt"
#include "benchmarking.mh"

#line 108 "dir.c"
#line 9 "private_builtin.opt"
#include "private_builtin.mh"

#line 112 "dir.c"
#line 113 "dir.c"
#ifndef DIR_DECL_GUARD
#define DIR_DECL_GUARD

#line 117 "dir.c"
#line 1544 "dir.m"


#include "mercury_string.h"
#include "mercury_types.h"

#if defined(MR_WIN32) && defined(MR_HAVE_WINDOWS_H)
  #include "mercury_windows.h"
  #include <direct.h>   /* for _wgetcwd */
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

#line 149 "dir.c"
#line 150 "dir.c"

#endif
#line 153 "dir.c"

#ifdef _MSC_VER
#define MR_STATIC_LINKAGE extern
#else
#define MR_STATIC_LINKAGE static
#endif


#ifdef MR_MSVC
#pragma pack(push, MR_BYTES_PER_WORD)
#endif
struct mercury_type_0 {
	MR_Word * f1[2];
};
#ifdef MR_MSVC
#pragma pack(pop)
#endif
MR_STATIC_LINKAGE const struct mercury_type_0 mercury_common_0[];


#ifdef MR_MSVC
#pragma pack(push, MR_BYTES_PER_WORD)
#endif
struct mercury_type_1 {
	MR_Word * f1[3];
};
#ifdef MR_MSVC
#pragma pack(pop)
#endif
MR_STATIC_LINKAGE const struct mercury_type_1 mercury_common_1[];


#ifdef MR_MSVC
#pragma pack(push, MR_BYTES_PER_WORD)
#endif
struct mercury_type_2 {
	MR_Word * f1[4];
};
#ifdef MR_MSVC
#pragma pack(pop)
#endif
MR_STATIC_LINKAGE const struct mercury_type_2 mercury_common_2[];


#ifdef MR_MSVC
#pragma pack(push, MR_BYTES_PER_WORD)
#endif
struct mercury_type_3 {
	MR_Word * f1[5];
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
	MR_Integer f1;
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
	MR_Integer f2;
	MR_Word * f3[4];
	MR_Integer f4[2];
	MR_Word * f5[2];
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
	MR_Integer f2;
};
#ifdef MR_MSVC
#pragma pack(pop)
#endif
MR_STATIC_LINKAGE const struct mercury_type_8 mercury_common_8[];


#ifdef MR_MSVC
#pragma pack(push, MR_BYTES_PER_WORD)
#endif
struct mercury_type_9 {
	MR_Word * f1;
	MR_Integer f2;
	MR_Word * f3;
	MR_Word * f4;
	MR_Word * f5;
};
#ifdef MR_MSVC
#pragma pack(pop)
#endif
MR_STATIC_LINKAGE const struct mercury_type_9 mercury_common_9[];


#ifdef MR_MSVC
#pragma pack(push, MR_BYTES_PER_WORD)
#endif
struct mercury_type_10 {
	MR_Unsigned f1[2];
};
#ifdef MR_MSVC
#pragma pack(pop)
#endif
MR_STATIC_LINKAGE const struct mercury_type_10 mercury_common_10[];


#ifdef MR_MSVC
#pragma pack(push, MR_BYTES_PER_WORD)
#endif
struct mercury_type_11 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[6];
	MR_Integer f4;
	MR_Word * f5[6];
};
#ifdef MR_MSVC
#pragma pack(pop)
#endif
MR_STATIC_LINKAGE const struct mercury_type_11 mercury_common_11[];

extern const MR_TypeCtorInfo_Struct
	mercury_data_dir__type_ctor_info_foldl_pred_1,
	mercury_data_dir__type_ctor_info_stream_0;
MR_decl_label1(dir__IntroducedFrom__pred__foldl2_process_dir__1359__1_13_0, 2)
MR_decl_label1(dir__can_implement_dir_foldl_0_0, 1)
MR_decl_label1(dir__can_implement_make_directory_0_0, 1)
MR_decl_label1(dir__check_dir_accessibility_4_0, 18)
MR_decl_label6(dir__check_dir_readable_5_0, 2,4,9,13,15,7)
MR_decl_label6(dir__check_for_symlink_loop_7_0, 6,8,12,9,10,3)
MR_decl_label2(dir__close_4_0, 5,2)
MR_decl_label1(dir__directory_separator_1_0, 2)
MR_decl_label10(dir__find_matching_brace_or_comma_6_0, 74,9,6,11,4,17,14,24,21,19)
MR_decl_label2(dir__find_matching_brace_or_comma_6_0, 31,3)
MR_decl_label2(dir__foldl2_6_0, 2,3)
MR_decl_label10(dir__foldl2_process_dir_11_0, 9,6,11,13,18,22,64,24,26,31)
MR_decl_label6(dir__foldl2_process_dir_11_0, 35,36,38,33,40,3)
MR_decl_label1(dir__foldl2_process_dir2_13_0, 3)
MR_decl_label10(dir__foldl2_process_entries_14_0, 136,3,5,7,8,10,12,14,16,24)
MR_decl_label9(dir__foldl2_process_entries_14_0, 26,30,29,20,34,38,40,41,35)
MR_decl_label7(dir__is_directory_separator_1_0, 6,9,13,16,3,18,21)
MR_decl_label7(dir__is_directory_separator_1_1, 4,7,11,14,3,15,1)
MR_decl_label10(dir__is_root_directory_1_0, 6,7,3,17,20,13,30,32,25,38)
MR_decl_label10(dir__is_root_directory_1_0, 40,43,46,49,42,35,51,54,57,95)
MR_decl_label2(dir__is_root_directory_1_0, 12,1)
MR_decl_label10(dir__make_directory_4_0, 6,7,9,15,12,16,18,20,3,70)
MR_decl_label1(dir__make_mkdir_res_error_4_0, 3)
MR_decl_label4(dir__make_mkdir_res_exists_5_0, 2,7,3,13)
MR_decl_label10(dir__make_win32_dir_open_result_ok_5_0, 5,4,6,12,9,18,20,8,26,3)
MR_decl_label1(dir__make_win32_dir_open_result_ok_5_0, 94)
MR_decl_label10(dir__path_name_is_absolute_1_0, 3,13,16,11,20,21,28,30,22,23)
MR_decl_label10(dir__path_name_is_absolute_1_0, 36,38,44,32,33,49,55,89,8,61)
MR_decl_label1(dir__path_name_is_absolute_1_0, 1)
MR_decl_label2(dir__path_name_is_root_directory_1_0, 2,3)
MR_decl_label6(dir__read_entry_4_0, 54,5,2,11,16,14)
MR_decl_label2(dir__recursive_foldl2_7_0, 2,3)
MR_decl_label4(dir__split_name_3_0, 2,3,6,1)
MR_decl_label10(dir__split_name_2_3_0, 4,6,3,8,10,11,14,15,21,18)
MR_decl_label10(dir__split_name_2_3_0, 24,28,25,30,32,38,47,50,43,58)
MR_decl_label10(dir__split_name_2_3_0, 42,40,37,35,62,31,65,68,73,78)
MR_decl_label3(dir__split_name_2_3_0, 80,83,1)
MR_decl_label2(dir__use_windows_paths_0_0, 2,5)
MR_decl_label1(f_100_105_114_95_95_101_120_99_101_112_116_105_111_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_121_95_105_111_95_95_104_111_57_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_55_44_32_56_44_32_57_44_32_49_48_44_32_49_49_44_32_49_50_44_32_49_51_93_95_48_4_0, 2)
MR_decl_label4(dir__list__takewhile__ho10_4_0, 30,8,10,4)
MR_decl_label4(dir__list__takewhile__ho11_4_0, 30,8,10,4)
MR_decl_label4(dir__list__takewhile__ho12_4_0, 30,8,10,4)
MR_decl_label10(fn__f_100_105_114_95_95_47_2_0, 2,3,4,5,6,7,10,8,16,19)
MR_decl_label10(fn__f_100_105_114_95_95_47_2_0, 21,22,24,28,29,31,13,14,39,42)
MR_decl_label10(fn__f_100_105_114_95_95_47_2_0, 43,44,45,46,48,36,52,33,34,56)
MR_decl_label1(fn__f_100_105_114_95_95_47_2_0, 62)
MR_decl_label1(fn__dir__alt_directory_separator_0_0, 2)
MR_decl_label10(fn__dir__basename_1_0, 2,3,6,11,14,20,8,23,25,22)
MR_decl_label8(fn__dir__basename_1_0, 27,29,30,33,34,38,37,1)
MR_decl_label10(fn__dir__canonicalize_path_chars_1_0, 8,11,4,16,19,23,28,33,29,30)
MR_decl_label2(fn__dir__canonicalize_path_chars_1_0, 2,3)
MR_decl_label10(fn__dir__canonicalize_path_chars_2_2_0, 71,3,8,11,14,5,6,18,20,23)
MR_decl_label1(fn__dir__canonicalize_path_chars_2_2_0, 19)
MR_decl_label2(fn__dir__det_basename_1_0, 3,2)
MR_decl_label1(fn__dir__directory_separator_0_0, 2)
MR_decl_label10(fn__dir__dirname_1_0, 2,3,6,4,12,15,21,9,26,24)
MR_decl_label6(fn__dir__dirname_1_0, 30,32,29,35,36,28)
MR_decl_label10(fn__dir__expand_acc_2_0, 31,3,6,7,9,10,11,12,13,4)
MR_decl_label1(fn__dir__expand_acc_2_0, 15)
MR_decl_label2(fn__dir__expand_braces_1_0, 2,4)
MR_decl_label7(fn__dir__fixup_dirname_1_0, 2,3,6,4,9,11,8)
MR_decl_label2(fn__dir__relative_path_name_from_components_1_0, 3,9)
MR_decl_label3(fn__f_100_105_114_95_95_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_112_95_95_104_111_53_95_95_91_50_93_95_48_2_0, 17,4,5)
MR_decl_label3(fn__f_100_105_114_95_95_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_112_95_95_104_111_54_95_95_91_50_93_95_48_2_0, 18,5,6)
MR_decl_label3(fn__f_100_105_114_95_95_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_112_95_95_104_111_55_95_95_91_50_93_95_48_2_0, 17,4,5)
MR_decl_label3(fn__dir__list__map__ho13_2_0, 17,4,5)
MR_decl_label3(fn__dir__list__map__ho8_2_0, 18,5,6)
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
MR_def_extern_entry(dir__path_name_is_absolute_1_0)
MR_def_extern_entry(dir__is_root_directory_1_0)
MR_def_extern_entry(dir__split_name_3_0)
MR_def_extern_entry(fn__dir__basename_1_0)
MR_def_extern_entry(dir__basename_2_0)
MR_def_extern_entry(fn__dir__det_basename_1_0)
MR_def_extern_entry(fn__dir__dirname_1_0)
MR_def_extern_entry(dir__dirname_2_0)
MR_def_extern_entry(dir__path_name_is_root_directory_1_0)
MR_def_extern_entry(fn__f_100_105_114_95_95_47_2_0)
MR_def_extern_entry(fn__dir__make_path_name_2_0)
MR_def_extern_entry(fn__dir__relative_path_name_from_components_1_0)
MR_def_extern_entry(dir__current_directory_3_0)
MR_decl_static(dir__can_implement_make_directory_0_0)
MR_def_extern_entry(dir__make_single_directory_2_5_0)
MR_def_extern_entry(dir__make_directory_4_0)
MR_def_extern_entry(dir__make_single_directory_4_0)
MR_def_extern_entry(fn__dir__fixup_dirname_1_0)
MR_decl_static(dir__check_for_symlink_loop_7_0)
MR_decl_static(dir__can_implement_dir_foldl_0_0)
MR_decl_static(dir__open_2_4_0)
MR_decl_static(dir__close_2_5_0)
MR_decl_static(dir__close_4_0)
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
MR_decl_static(dir__read_entry_2_7_0)
MR_decl_static(dir__read_entry_4_0)
MR_decl_static(dir__foldl2_process_entries_14_0)
MR_decl_static(dir__foldl2_process_dir2_13_0)
MR_decl_static(dir__check_dir_readable_5_0)
MR_decl_static(dir__read_first_entry_4_0)
MR_decl_static(dir__make_win32_dir_open_result_ok_5_0)
MR_decl_static(fn__dir__make_dir_open_result_eof_0_0)
MR_decl_static(dir__make_dir_open_result_error_4_0)
MR_def_extern_entry(__Unify___dir__foldl_pred_1_0)
MR_def_extern_entry(__Compare___dir__foldl_pred_1_0)
MR_def_extern_entry(__Unify___dir__stream_0_0)
MR_def_extern_entry(__Compare___dir__stream_0_0)
MR_decl_static(dir__IntroducedFrom__pred__foldl2_process_dir__1359__1_13_0)
MR_decl_static(fn__dir__list__map__ho8_2_0)
MR_decl_static(dir__list__takewhile__ho10_4_0)
MR_decl_static(dir__list__takewhile__ho11_4_0)
MR_decl_static(dir__list__takewhile__ho12_4_0)
MR_decl_static(fn__dir__list__map__ho13_2_0)
MR_decl_static(fn__f_100_105_114_95_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_0)
MR_decl_static(fn__f_100_105_114_95_95_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_112_95_95_104_111_53_95_95_91_50_93_95_48_2_0)
MR_decl_static(fn__f_100_105_114_95_95_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_112_95_95_104_111_54_95_95_91_50_93_95_48_2_0)
MR_decl_static(fn__f_100_105_114_95_95_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_112_95_95_104_111_55_95_95_91_50_93_95_48_2_0)
MR_decl_static(f_100_105_114_95_95_101_120_99_101_112_116_105_111_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_121_95_105_111_95_95_104_111_57_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_55_44_32_56_44_32_57_44_32_49_48_44_32_49_49_44_32_49_50_44_32_49_51_93_95_48_4_0)

extern const MR_TypeCtorInfo_Struct mercury_data_list__type_ctor_info_list_1;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_character_0;
extern const MR_TypeCtorInfo_Struct mercury_data_io__type_ctor_info_file_id_0;
static const struct mercury_type_0 mercury_common_0[3] =
{
{
{
MR_LIST_CTOR_ADDR,
MR_CHAR_CTOR_ADDR
}
},
{
{
MR_LIST_CTOR_ADDR,
MR_CTOR0_ADDR(io, file_id)
}
},
{
{
MR_tbmkword(0, 0),
MR_tbmkword(0, 0)
}
},
};

extern const MR_BaseTypeclassInfo mercury_data_base_typeclass_info_stream__stream__arity2__io__output_stream__arity0__io__state__arity0__[];
extern const MR_TypeCtorInfo_Struct mercury_data_io__type_ctor_info_output_stream_0;
extern const MR_TypeCtorInfo_Struct mercury_data_io__type_ctor_info_state_0;
static const struct mercury_type_1 mercury_common_1[1] =
{
{
{
(MR_Word *) &mercury_data_base_typeclass_info_stream__stream__arity2__io__output_stream__arity0__io__state__arity0__,
MR_CTOR0_ADDR(io, output_stream),
MR_IO_CTOR_ADDR
}
},
};

extern const MR_BaseTypeclassInfo mercury_data_base_typeclass_info_stream__output__arity2__io__output_stream__arity0__io__state__arity0__[];
static const struct mercury_type_2 mercury_common_2[1] =
{
{
{
(MR_Word *) &mercury_data_base_typeclass_info_stream__output__arity2__io__output_stream__arity0__io__state__arity0__,
MR_TAG_COMMON(0,1,0),
MR_CTOR0_ADDR(io, output_stream),
MR_IO_CTOR_ADDR
}
},
};

extern const MR_BaseTypeclassInfo mercury_data_base_typeclass_info_stream__writer__arity3__io__output_stream__arity0__string__arity0__io__state__arity0__[];
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_string_0;
extern const MR_BaseTypeclassInfo mercury_data_base_typeclass_info_stream__writer__arity3__io__output_stream__arity0__character__arity0__io__state__arity0__[];
static const struct mercury_type_3 mercury_common_3[2] =
{
{
{
(MR_Word *) &mercury_data_base_typeclass_info_stream__writer__arity3__io__output_stream__arity0__string__arity0__io__state__arity0__,
MR_TAG_COMMON(0,2,0),
MR_CTOR0_ADDR(io, output_stream),
MR_STRING_CTOR_ADDR,
MR_IO_CTOR_ADDR
}
},
{
{
(MR_Word *) &mercury_data_base_typeclass_info_stream__writer__arity3__io__output_stream__arity0__character__arity0__io__state__arity0__,
MR_TAG_COMMON(0,2,0),
MR_CTOR0_ADDR(io, output_stream),
MR_CHAR_CTOR_ADDR,
MR_IO_CTOR_ADDR
}
},
};

static const struct mercury_type_4 mercury_common_4[7] =
{
{
2,
MR_tbmkword(0, 0)
},
{
1,
MR_TAG_COMMON(1,4,0)
},
{
0,
MR_TAG_COMMON(1,4,1)
},
{
0,
MR_TAG_COMMON(1,4,0)
},
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
};

static const struct mercury_type_5 mercury_common_5[4] =
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

static const struct mercury_type_6 mercury_common_6[2] =
{
{
1
},
{
0
},
};

extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_pred_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_string_0;
extern const MR_TypeCtorInfo_Struct mercury_data_io__type_ctor_info_file_type_0;
extern const MR_TypeCtorInfo_Struct mercury_data_bool__type_ctor_info_bool_0;
extern const MR_TypeCtorInfo_Struct mercury_data_io__type_ctor_info_state_0;
static const struct mercury_type_7 mercury_common_7[1] =
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

extern const MR_TypeCtorInfo_Struct mercury_data_io__type_ctor_info_maybe_partial_res_1;
static const struct mercury_type_8 mercury_common_8[1] =
{
{
MR_CTOR1_ADDR(io, maybe_partial_res),
1
},
};

extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_tuple_0;
extern const MR_TypeCtorInfo_Struct mercury_data_dir__type_ctor_info_stream_0;
static const struct mercury_type_9 mercury_common_9[1] =
{
{
MR_CTOR0_ADDR(builtin, tuple),
3,
MR_COMMON(8,0),
MR_BOOL_CTOR_ADDR,
MR_CTOR0_ADDR(dir, stream)
},
};

static const struct mercury_type_10 mercury_common_10[1] =
{
{
{
1,
33
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__dir__foldl2_process_dir_11_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_private_builtin__type_ctor_info_type_info_0;
extern const MR_TypeCtorInfo_Struct mercury_data_bool__type_ctor_info_bool_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_string_0;
extern const MR_TypeCtorInfo_Struct mercury_data_dir__type_ctor_info_stream_0;
extern const MR_TypeCtorInfo_Struct mercury_data_io__type_ctor_info_state_0;
static const struct mercury_type_11 mercury_common_11[1] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__dir__foldl2_process_dir_11_0_1,
MR_COMMON(10,0)
},
13,
{
MR_CTOR0_ADDR(private_builtin, type_info),
MR_BOOL_CTOR_ADDR,
MR_COMMON(7,0),
MR_STRING_CTOR_ADDR,
MR_BOOL_CTOR_ADDR,
MR_BOOL_CTOR_ADDR
},
1,
{
MR_COMMON(0,1),
MR_CTOR0_ADDR(dir, stream),
MR_STRING_CTOR_ADDR,
MR_COMMON(9,0),
MR_IO_CTOR_ADDR,
MR_IO_CTOR_ADDR
}
},
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
	15,
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

const MR_TypeCtorInfo_Struct mercury_data_dir__type_ctor_info_stream_0 = {
	0,
	15,
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


static const MR_UserClosureId
mercury_data__closure_layout__dir__foldl2_process_dir_11_0_1 = {
{
MR_PREDICATE,
"dir",
"dir",
"lambda_dir_m_1359",
13,
0
},
"dir",
"dir.m",
1359,
"35"
};



MR_BEGIN_MODULE(dir_module0)
	MR_init_entry1(fn__dir__directory_separator_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__dir__directory_separator_0_0);
	MR_init_label1(fn__dir__directory_separator_0_0,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'directory_separator'/1 mode 0 */
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
#line 895 "io.opt"

#if defined(MR_WIN32)
    SUCCESS_INDICATOR = MR_TRUE;
#else
    SUCCESS_INDICATOR = MR_FALSE;
#endif
;}
#line 782 "dir.c"
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
	MR_INIT_PROC_LAYOUT_ADDR(mercury__dir__directory_separator_1_0);
	MR_init_label1(dir__directory_separator_1_0,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'directory_separator'/1 mode 0 */
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
#line 895 "io.opt"

#if defined(MR_WIN32)
    SUCCESS_INDICATOR = MR_TRUE;
#else
    SUCCESS_INDICATOR = MR_FALSE;
#endif
;}
#line 829 "dir.c"
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
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__dir__alt_directory_separator_0_0);
	MR_init_label1(fn__dir__alt_directory_separator_0_0,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'alt_directory_separator'/1 mode 0 */
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
#line 902 "io.opt"

#if defined(MR_CYGWIN)
    SUCCESS_INDICATOR = MR_TRUE;
#else
    SUCCESS_INDICATOR = MR_FALSE;
#endif
;}
#line 876 "dir.c"
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
	MR_INIT_PROC_LAYOUT_ADDR(mercury__dir__is_directory_separator_1_0);
	MR_init_label7(dir__is_directory_separator_1_0,6,9,13,16,3,18,21)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'is_directory_separator'/1 mode 0 */
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
#line 895 "io.opt"

#if defined(MR_WIN32)
    SUCCESS_INDICATOR = MR_TRUE;
#else
    SUCCESS_INDICATOR = MR_FALSE;
#endif
;}
#line 924 "dir.c"
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
#line 902 "io.opt"

#if defined(MR_CYGWIN)
    SUCCESS_INDICATOR = MR_TRUE;
#else
    SUCCESS_INDICATOR = MR_FALSE;
#endif
;}
#line 956 "dir.c"
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
#line 902 "io.opt"

#if defined(MR_CYGWIN)
    SUCCESS_INDICATOR = MR_TRUE;
#else
    SUCCESS_INDICATOR = MR_FALSE;
#endif
;}
#line 992 "dir.c"
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
	MR_INIT_PROC_LAYOUT_ADDR(mercury__dir__is_directory_separator_1_1);
	MR_init_label7(dir__is_directory_separator_1_1,4,7,11,14,3,15,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'is_directory_separator'/1 mode 1 */
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
#line 895 "io.opt"

#if defined(MR_WIN32)
    SUCCESS_INDICATOR = MR_TRUE;
#else
    SUCCESS_INDICATOR = MR_FALSE;
#endif
;}
#line 1048 "dir.c"
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
#line 902 "io.opt"

#if defined(MR_CYGWIN)
    SUCCESS_INDICATOR = MR_TRUE;
#else
    SUCCESS_INDICATOR = MR_FALSE;
#endif
;}
#line 1075 "dir.c"
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
#line 902 "io.opt"

#if defined(MR_CYGWIN)
    SUCCESS_INDICATOR = MR_TRUE;
#else
    SUCCESS_INDICATOR = MR_FALSE;
#endif
;}
#line 1108 "dir.c"
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
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__dir__this_directory_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'this_directory'/1 mode 0 */
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
	MR_INIT_PROC_LAYOUT_ADDR(mercury__dir__this_directory_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'this_directory'/1 mode 0 */
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
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__dir__parent_directory_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'parent_directory'/1 mode 0 */
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
	MR_INIT_PROC_LAYOUT_ADDR(mercury__dir__parent_directory_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'parent_directory'/1 mode 0 */
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
	MR_INIT_PROC_LAYOUT_ADDR(mercury__dir__use_windows_paths_0_0);
	MR_init_label2(dir__use_windows_paths_0_0,2,5)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'use_windows_paths'/0 mode 0 */
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
#line 895 "io.opt"

#if defined(MR_WIN32)
    SUCCESS_INDICATOR = MR_TRUE;
#else
    SUCCESS_INDICATOR = MR_FALSE;
#endif
;}
#line 1245 "dir.c"
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
MR_decl_entry(builtin__unify_2_0);
MR_decl_entry(string__from_char_list_2_0);
MR_decl_entry(list__reverse_2_0);
MR_decl_entry(char__is_alpha_1_0);
MR_decl_entry(string__from_rev_char_list_2_0);

MR_BEGIN_MODULE(dir_module10)
	MR_init_entry1(dir__split_name_2_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__dir__split_name_2_3_0);
	MR_init_label10(dir__split_name_2_3_0,4,6,3,8,10,11,14,15,21,18)
	MR_init_label10(dir__split_name_2_3_0,24,28,25,30,32,38,47,50,43,58)
	MR_init_label10(dir__split_name_2_3_0,42,40,37,35,62,31,65,68,73,78)
	MR_init_label3(dir__split_name_2_3_0,80,83,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'split_name_2'/3 mode 0 */
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
	MR_sv(2) = MR_r1;
	MR_r1 = (MR_Word) MR_CHAR_CTOR_ADDR;
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(list__split_last_3_0,
		dir__split_name_2_3_0_i4);
MR_def_label(dir__split_name_2_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(dir__split_name_2_3_0_i3);
	}
	MR_sv(3) = MR_r2;
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
	MR_sv(3) = MR_sv(2);
MR_def_label(dir__split_name_2_3_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(".", 1);
	MR_np_call_localret_ent(string__to_char_list_2_0,
		dir__split_name_2_3_0_i10);
MR_def_label(dir__split_name_2_3_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(builtin__unify_2_0,
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
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(builtin__unify_2_0,
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
#line 92 "builtin.opt"

    SUCCESS_INDICATOR = MR_FALSE;
;}
#line 1368 "dir.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(dir__split_name_2_3_0_i18);
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	MR_r1 = MR_sv(3);
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
#line 92 "builtin.opt"

    SUCCESS_INDICATOR = MR_FALSE;
;}
#line 1389 "dir.c"
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
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(list__reverse_2_0,
		dir__split_name_2_3_0_i24);
MR_def_label(dir__split_name_2_3_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(dir__split_name_2_3_0_i30);
	}
	MR_sv(3) = MR_r1;
	MR_sv(1) = MR_tfield(1, MR_r1, 1);
	MR_r1 = MR_tfield(1, MR_r1, 0);
	MR_np_call_localret_ent(dir__is_directory_separator_1_0,
		dir__split_name_2_3_0_i28);
MR_def_label(dir__split_name_2_3_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(dir__split_name_2_3_0_i25);
	}
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(dir__list__takewhile__ho12_4_0,
		dir__split_name_2_3_0_i32);
MR_def_label(dir__split_name_2_3_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
MR_def_label(dir__split_name_2_3_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(dir__list__takewhile__ho12_4_0,
		dir__split_name_2_3_0_i32);
MR_def_label(dir__split_name_2_3_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(dir__split_name_2_3_0_i31);
	}
	if (MR_LTAGS_TEST(MR_r2,0,0)) {
		MR_GOTO_LAB(dir__split_name_2_3_0_i31);
	}
	MR_sv(1) = MR_tfield(1, MR_r2, 1);
	MR_sv(2) = MR_r1;
	MR_sv(3) = MR_r2;
	MR_r1 = MR_tfield(1, MR_r2, 0);
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
#line 895 "io.opt"

#if defined(MR_WIN32)
    SUCCESS_INDICATOR = MR_TRUE;
#else
    SUCCESS_INDICATOR = MR_FALSE;
#endif
;}
#line 1465 "dir.c"
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
#line 902 "io.opt"

#if defined(MR_CYGWIN)
    SUCCESS_INDICATOR = MR_TRUE;
#else
    SUCCESS_INDICATOR = MR_FALSE;
#endif
;}
#line 1495 "dir.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(dir__split_name_2_3_0_i42);
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
MR_def_label(dir__split_name_2_3_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_sv(1),0,0)) {
		MR_GOTO_LAB(dir__split_name_2_3_0_i42);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_sv(1);
	MR_r2 = MR_tfield(1, MR_tempr2, 0);
	if (MR_INT_NE(MR_r2,58)) {
		MR_GOTO_LAB(dir__split_name_2_3_0_i42);
	}
	MR_r2 = MR_tfield(1, MR_tempr2, 1);
	if (MR_LTAGS_TEST(MR_r2,0,0)) {
		MR_GOTO_LAB(dir__split_name_2_3_0_i42);
	}
	MR_tempr1 = MR_tfield(1, MR_r2, 1);
	if (MR_LTAGS_TESTR(MR_tempr1,0,0)) {
		MR_GOTO_LAB(dir__split_name_2_3_0_i42);
	}
	MR_r1 = MR_tfield(1, MR_r2, 0);
	}
	MR_np_call_localret_ent(char__is_alpha_1_0,
		dir__split_name_2_3_0_i58);
MR_def_label(dir__split_name_2_3_0,58)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(dir__split_name_2_3_0_i42);
	}
	MR_r1 = MR_sv(2);
	MR_GOTO_LAB(dir__split_name_2_3_0_i40);
MR_def_label(dir__split_name_2_3_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,0)) {
		MR_GOTO_LAB(dir__split_name_2_3_0_i37);
	}
	MR_r1 = MR_sv(2);
MR_def_label(dir__split_name_2_3_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_GOTO_LAB(dir__split_name_2_3_0_i35);
MR_def_label(dir__split_name_2_3_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_sv(2) = MR_sv(1);
	MR_np_call_localret_ent(string__from_rev_char_list_2_0,
		dir__split_name_2_3_0_i62);
MR_def_label(dir__split_name_2_3_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(3);
	MR_sv(2) = MR_r2;
	MR_np_call_localret_ent(string__from_rev_char_list_2_0,
		dir__split_name_2_3_0_i62);
MR_def_label(dir__split_name_2_3_0,62)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(string__from_rev_char_list_2_0,
		dir__split_name_2_3_0_i83);
MR_def_label(dir__split_name_2_3_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__dir__split_name_2_3_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
{
#line 895 "io.opt"

#if defined(MR_WIN32)
    SUCCESS_INDICATOR = MR_TRUE;
#else
    SUCCESS_INDICATOR = MR_FALSE;
#endif
;}
#line 1578 "dir.c"
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
	if (MR_LTAGS_TEST(MR_sv(2),0,0)) {
		MR_GOTO_LAB(dir__split_name_2_3_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_sv(2);
	MR_r2 = MR_tfield(1, MR_tempr2, 1);
	if (MR_LTAGS_TEST(MR_r2,0,0)) {
		MR_GOTO_LAB(dir__split_name_2_3_0_i1);
	}
	MR_tempr1 = MR_tfield(1, MR_r2, 0);
	if (MR_INT_NE(MR_tempr1,58)) {
		MR_GOTO_LAB(dir__split_name_2_3_0_i1);
	}
	MR_tempr1 = MR_tempr2;
	MR_sv(2) = MR_tfield(1, MR_r2, 1);
	MR_sv(3) = MR_tfield(1, MR_tempr1, 0);
	MR_r1 = MR_sv(3);
	}
	MR_np_call_localret_ent(char__is_alpha_1_0,
		dir__split_name_2_3_0_i73);
MR_def_label(dir__split_name_2_3_0,73)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(dir__split_name_2_3_0_i1);
	}
	if (MR_LTAGS_TEST(MR_sv(2),0,0)) {
		MR_GOTO_LAB(dir__split_name_2_3_0_i1);
	}
	MR_r1 = MR_tfield(1, MR_sv(2), 0);
	MR_np_call_localret_ent(dir__is_directory_separator_1_0,
		dir__split_name_2_3_0_i78);
MR_def_label(dir__split_name_2_3_0,78)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(dir__split_name_2_3_0_i1);
	}
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(string__from_char_list_2_0,
		dir__split_name_2_3_0_i80);
MR_def_label(dir__split_name_2_3_0,80)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(3);
	MR_tfield(1, MR_r2, 1) = (MR_Word) MR_TAG_COMMON(1,4,4);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(string__from_char_list_2_0,
		dir__split_name_2_3_0_i83);
MR_def_label(dir__split_name_2_3_0,83)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r3 = MR_sv(2);
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
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__dir__canonicalize_path_chars_2_2_0);
	MR_init_label10(fn__dir__canonicalize_path_chars_2_2_0,71,3,8,11,14,5,6,18,20,23)
	MR_init_label1(fn__dir__canonicalize_path_chars_2_2_0,19)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'canonicalize_path_chars_2'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__dir__canonicalize_path_chars_2_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
MR_def_label(fn__dir__canonicalize_path_chars_2_2_0,71)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(fn__dir__canonicalize_path_chars_2_2_0_i3);
	}
	MR_r1 = (MR_Word) MR_CHAR_CTOR_ADDR;
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(list__reverse_2_0);
MR_def_label(fn__dir__canonicalize_path_chars_2_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_tfield(1, MR_r1, 1);
	MR_r3 = MR_tfield(1, MR_r1, 0);
	{
#define	MR_PROC_LABEL	mercury__fn__dir__canonicalize_path_chars_2_2_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
{
#line 902 "io.opt"

#if defined(MR_CYGWIN)
    SUCCESS_INDICATOR = MR_TRUE;
#else
    SUCCESS_INDICATOR = MR_FALSE;
#endif
;}
#line 1708 "dir.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(fn__dir__canonicalize_path_chars_2_2_0_i8);
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	MR_GOTO_LAB(fn__dir__canonicalize_path_chars_2_2_0_i6);
MR_def_label(fn__dir__canonicalize_path_chars_2_2_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(3) = MR_tempr1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(dir__is_directory_separator_1_0,
		fn__dir__canonicalize_path_chars_2_2_0_i11);
MR_def_label(fn__dir__canonicalize_path_chars_2_2_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(fn__dir__canonicalize_path_chars_2_2_0_i5);
	}
	{
#define	MR_PROC_LABEL	mercury__fn__dir__canonicalize_path_chars_2_2_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
{
#line 895 "io.opt"

#if defined(MR_WIN32)
    SUCCESS_INDICATOR = MR_TRUE;
#else
    SUCCESS_INDICATOR = MR_FALSE;
#endif
;}
#line 1745 "dir.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(fn__dir__canonicalize_path_chars_2_2_0_i14);
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	MR_r1 = (MR_Integer) 92;
	MR_GOTO_LAB(fn__dir__canonicalize_path_chars_2_2_0_i18);
MR_def_label(fn__dir__canonicalize_path_chars_2_2_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 47;
	MR_GOTO_LAB(fn__dir__canonicalize_path_chars_2_2_0_i18);
MR_def_label(fn__dir__canonicalize_path_chars_2_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(3);
MR_def_label(fn__dir__canonicalize_path_chars_2_2_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_r1 = MR_r3;
MR_def_label(fn__dir__canonicalize_path_chars_2_2_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_np_call_localret_ent(dir__is_directory_separator_1_0,
		fn__dir__canonicalize_path_chars_2_2_0_i20);
MR_def_label(fn__dir__canonicalize_path_chars_2_2_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(fn__dir__canonicalize_path_chars_2_2_0_i19);
	}
	if (MR_LTAGS_TEST(MR_sv(2),0,0)) {
		MR_GOTO_LAB(fn__dir__canonicalize_path_chars_2_2_0_i19);
	}
	MR_r1 = MR_tfield(1, MR_sv(2), 0);
	MR_np_call_localret_ent(dir__is_directory_separator_1_0,
		fn__dir__canonicalize_path_chars_2_2_0_i23);
MR_def_label(fn__dir__canonicalize_path_chars_2_2_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(fn__dir__canonicalize_path_chars_2_2_0_i19);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(1);
	MR_succip_word = MR_sv(4);
	MR_GOTO_LAB(fn__dir__canonicalize_path_chars_2_2_0_i71);
MR_def_label(fn__dir__canonicalize_path_chars_2_2_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(3);
	MR_tfield(1, MR_r2, 1) = MR_sv(1);
	MR_r1 = MR_sv(2);
	MR_succip_word = MR_sv(4);
	MR_GOTO_LAB(fn__dir__canonicalize_path_chars_2_2_0_i71);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(dir_module12)
	MR_init_entry1(fn__dir__canonicalize_path_chars_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__dir__canonicalize_path_chars_1_0);
	MR_init_label10(fn__dir__canonicalize_path_chars_1_0,8,11,4,16,19,23,28,33,29,30)
	MR_init_label2(fn__dir__canonicalize_path_chars_1_0,2,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'canonicalize_path_chars'/2 mode 0 */
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
#line 895 "io.opt"

#if defined(MR_WIN32)
    SUCCESS_INDICATOR = MR_TRUE;
#else
    SUCCESS_INDICATOR = MR_FALSE;
#endif
;}
#line 1836 "dir.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(fn__dir__canonicalize_path_chars_1_0_i8);
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	MR_sv(2) = MR_r1;
	MR_r1 = (MR_Integer) 92;
	MR_GOTO_LAB(fn__dir__canonicalize_path_chars_1_0_i11);
MR_def_label(fn__dir__canonicalize_path_chars_1_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = (MR_Integer) 47;
MR_def_label(fn__dir__canonicalize_path_chars_1_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_EQ(MR_r1,92)) {
		MR_GOTO_LAB(fn__dir__canonicalize_path_chars_1_0_i4);
	}
	MR_r1 = MR_sv(2);
	{
#define	MR_PROC_LABEL	mercury__fn__dir__canonicalize_path_chars_1_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
{
#line 902 "io.opt"

#if defined(MR_CYGWIN)
    SUCCESS_INDICATOR = MR_TRUE;
#else
    SUCCESS_INDICATOR = MR_FALSE;
#endif
;}
#line 1869 "dir.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(fn__dir__canonicalize_path_chars_1_0_i3);
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	MR_sv(2) = MR_r1;
MR_def_label(fn__dir__canonicalize_path_chars_1_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_sv(2),0,0)) {
		MR_GOTO_LAB(fn__dir__canonicalize_path_chars_1_0_i2);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(3) = MR_tfield(1, MR_tempr1, 0);
	MR_sv(1) = MR_tfield(1, MR_tempr1, 1);
	MR_r1 = MR_sv(3);
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
#line 902 "io.opt"

#if defined(MR_CYGWIN)
    SUCCESS_INDICATOR = MR_TRUE;
#else
    SUCCESS_INDICATOR = MR_FALSE;
#endif
;}
#line 1909 "dir.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(fn__dir__canonicalize_path_chars_1_0_i19);
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	MR_r1 = MR_sv(1);
	MR_sv(2) = MR_sv(3);
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
#line 895 "io.opt"

#if defined(MR_WIN32)
    SUCCESS_INDICATOR = MR_TRUE;
#else
    SUCCESS_INDICATOR = MR_FALSE;
#endif
;}
#line 1936 "dir.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(fn__dir__canonicalize_path_chars_1_0_i23);
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	MR_r1 = MR_sv(1);
	MR_sv(2) = (MR_Integer) 92;
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_np_call_localret_ent(fn__dir__canonicalize_path_chars_2_2_0,
		fn__dir__canonicalize_path_chars_1_0_i28);
MR_def_label(fn__dir__canonicalize_path_chars_1_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_sv(2) = (MR_Integer) 47;
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_np_call_localret_ent(fn__dir__canonicalize_path_chars_2_2_0,
		fn__dir__canonicalize_path_chars_1_0_i28);
MR_def_label(fn__dir__canonicalize_path_chars_1_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(fn__dir__canonicalize_path_chars_1_0_i30);
	}
	MR_r2 = MR_tfield(1, MR_r1, 1);
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(fn__dir__canonicalize_path_chars_1_0_i30);
	}
	MR_sv(3) = MR_r1;
	MR_r1 = MR_tfield(1, MR_r1, 0);
	MR_np_call_localret_ent(dir__is_directory_separator_1_0,
		fn__dir__canonicalize_path_chars_1_0_i33);
MR_def_label(fn__dir__canonicalize_path_chars_1_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(fn__dir__canonicalize_path_chars_1_0_i29);
	}
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = MR_sv(2);
	MR_tfield(1, MR_r1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_decr_sp_and_return(4);
MR_def_label(fn__dir__canonicalize_path_chars_1_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
MR_def_label(fn__dir__canonicalize_path_chars_1_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(2);
	MR_tfield(1, MR_r2, 1) = MR_r1;
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(4);
MR_def_label(fn__dir__canonicalize_path_chars_1_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
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

MR_decl_entry(require__error_1_0);
MR_decl_entry(string__unsafe_index_3_0);

MR_BEGIN_MODULE(dir_module13)
	MR_init_entry1(dir__path_name_is_absolute_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__dir__path_name_is_absolute_1_0);
	MR_init_label10(dir__path_name_is_absolute_1_0,3,13,16,11,20,21,28,30,22,23)
	MR_init_label10(dir__path_name_is_absolute_1_0,36,38,44,32,33,49,55,89,8,61)
	MR_init_label1(dir__path_name_is_absolute_1_0,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'path_name_is_absolute'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__dir__path_name_is_absolute_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	{
#define	MR_PROC_LABEL	mercury__dir__path_name_is_absolute_1_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
{
#line 92 "builtin.opt"

    SUCCESS_INDICATOR = MR_FALSE;
;}
#line 2032 "dir.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(dir__path_name_is_absolute_1_0_i3);
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	MR_r1 = (MR_Word) MR_string_const("dir.dotnet_path_name_is_absolute_2 called for non-.NET CLI backend", 66);
	MR_np_call_localret_ent(require__error_1_0,
		dir__path_name_is_absolute_1_0_i89);
MR_def_label(dir__path_name_is_absolute_1_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__dir__path_name_is_absolute_1_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
{
#line 895 "io.opt"

#if defined(MR_WIN32)
    SUCCESS_INDICATOR = MR_TRUE;
#else
    SUCCESS_INDICATOR = MR_FALSE;
#endif
;}
#line 2057 "dir.c"
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
#line 902 "io.opt"

#if defined(MR_CYGWIN)
    SUCCESS_INDICATOR = MR_TRUE;
#else
    SUCCESS_INDICATOR = MR_FALSE;
#endif
;}
#line 2091 "dir.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(dir__path_name_is_absolute_1_0_i8);
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	MR_np_call_localret_ent(string__to_char_list_2_0,
		dir__path_name_is_absolute_1_0_i20);
MR_def_label(dir__path_name_is_absolute_1_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__dir__canonicalize_path_chars_1_0,
		dir__path_name_is_absolute_1_0_i21);
MR_def_label(dir__path_name_is_absolute_1_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(dir__path_name_is_absolute_1_0_i23);
	}
	MR_r2 = MR_tfield(1, MR_r1, 1);
	if (MR_LTAGS_TEST(MR_r2,0,0)) {
		MR_GOTO_LAB(dir__path_name_is_absolute_1_0_i23);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(1, MR_r2, 0);
	if (MR_INT_NE(MR_tempr1,58)) {
		MR_GOTO_LAB(dir__path_name_is_absolute_1_0_i23);
	}
	MR_tempr1 = MR_tfield(1, MR_r2, 1);
	if (MR_LTAGS_TEST(MR_tempr1,0,0)) {
		MR_GOTO_LAB(dir__path_name_is_absolute_1_0_i23);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_tfield(1, MR_tempr1, 0);
	MR_r1 = MR_tfield(1, MR_r1, 0);
	}
	MR_np_call_localret_ent(char__is_alpha_1_0,
		dir__path_name_is_absolute_1_0_i28);
MR_def_label(dir__path_name_is_absolute_1_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(dir__path_name_is_absolute_1_0_i22);
	}
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(dir__is_directory_separator_1_0,
		dir__path_name_is_absolute_1_0_i30);
MR_def_label(dir__path_name_is_absolute_1_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(dir__path_name_is_absolute_1_0_i89);
	}
MR_def_label(dir__path_name_is_absolute_1_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
MR_def_label(dir__path_name_is_absolute_1_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(dir__path_name_is_absolute_1_0_i33);
	}
	MR_r2 = MR_tfield(1, MR_r1, 1);
	if (MR_LTAGS_TEST(MR_r2,0,0)) {
		MR_GOTO_LAB(dir__path_name_is_absolute_1_0_i33);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(1, MR_r1, 0);
	MR_tempr2 = MR_tfield(1, MR_r2, 0);
	if ((MR_tempr1 != MR_tempr2)) {
		MR_GOTO_LAB(dir__path_name_is_absolute_1_0_i33);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_tempr1;
	MR_sv(3) = MR_tfield(1, MR_r2, 1);
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(dir__is_directory_separator_1_0,
		dir__path_name_is_absolute_1_0_i36);
MR_def_label(dir__path_name_is_absolute_1_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(dir__path_name_is_absolute_1_0_i32);
	}
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(dir__list__takewhile__ho11_4_0,
		dir__path_name_is_absolute_1_0_i38);
MR_def_label(dir__path_name_is_absolute_1_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(dir__path_name_is_absolute_1_0_i32);
	}
	if (MR_LTAGS_TEST(MR_r2,0,0)) {
		MR_GOTO_LAB(dir__path_name_is_absolute_1_0_i89);
	}
	MR_r1 = MR_tfield(1, MR_r2, 0);
	if ((MR_sv(2) != MR_r1)) {
		MR_GOTO_LAB(dir__path_name_is_absolute_1_0_i32);
	}
	MR_r1 = MR_tfield(1, MR_r2, 1);
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(dir__path_name_is_absolute_1_0_i89);
	}
	MR_np_call_localret_ent(dir__list__takewhile__ho10_4_0,
		dir__path_name_is_absolute_1_0_i44);
MR_def_label(dir__path_name_is_absolute_1_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(dir__path_name_is_absolute_1_0_i32);
	}
	if (MR_LTAGS_TEST(MR_r2,0,0)) {
		MR_GOTO_LAB(dir__path_name_is_absolute_1_0_i89);
	}
	MR_r1 = MR_tfield(1, MR_r2, 0);
	if ((MR_sv(2) == MR_r1)) {
		MR_GOTO_LAB(dir__path_name_is_absolute_1_0_i89);
	}
MR_def_label(dir__path_name_is_absolute_1_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
MR_def_label(dir__path_name_is_absolute_1_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(dir__path_name_is_absolute_1_0_i1);
	}
	MR_sv(1) = MR_tfield(1, MR_r1, 1);
	MR_r1 = MR_tfield(1, MR_r1, 0);
	MR_np_call_localret_ent(dir__is_directory_separator_1_0,
		dir__path_name_is_absolute_1_0_i49);
MR_def_label(dir__path_name_is_absolute_1_0,49)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(dir__path_name_is_absolute_1_0_i1);
	}
	if (MR_LTAGS_TEST(MR_sv(1),0,0)) {
		MR_GOTO_LAB(dir__path_name_is_absolute_1_0_i89);
	}
	MR_r1 = MR_tfield(1, MR_sv(1), 0);
	MR_np_call_localret_ent(dir__is_directory_separator_1_0,
		dir__path_name_is_absolute_1_0_i55);
MR_def_label(dir__path_name_is_absolute_1_0,55)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(dir__path_name_is_absolute_1_0_i1);
	}
MR_def_label(dir__path_name_is_absolute_1_0,89)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_r1 = MR_TRUE;
	MR_proceed();
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
#line 231 "string.opt"

    Length = strlen(Str);
;}
#line 2253 "dir.c"
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
#line 1004 "string.opt"

    /*
    ** We do not test for negative values of Index because (a) MR_Unsigned
    ** is unsigned and hence a negative argument will appear as a very large
    ** positive one after the cast and (b) anybody dealing with the case
    ** where strlen(Str) > MAXINT is clearly barking mad (and one may well get
    ** an integer overflow error in this case).
    */
    SUCCESS_INDICATOR = ((MR_Unsigned) Index < (MR_Unsigned) Length);
;}
#line 2278 "dir.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(dir__path_name_is_absolute_1_0_i1);
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	MR_r2 = (MR_Integer) 0;
	}
	MR_np_call_localret_ent(string__unsafe_index_3_0,
		dir__path_name_is_absolute_1_0_i61);
MR_def_label(dir__path_name_is_absolute_1_0,61)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(dir__is_directory_separator_1_0);
MR_def_label(dir__path_name_is_absolute_1_0,1)
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


MR_BEGIN_MODULE(dir_module14)
	MR_init_entry1(dir__is_root_directory_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__dir__is_root_directory_1_0);
	MR_init_label10(dir__is_root_directory_1_0,6,7,3,17,20,13,30,32,25,38)
	MR_init_label10(dir__is_root_directory_1_0,40,43,46,49,42,35,51,54,57,95)
	MR_init_label2(dir__is_root_directory_1_0,12,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'is_root_directory'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__dir__is_root_directory_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	{
#define	MR_PROC_LABEL	mercury__dir__is_root_directory_1_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
{
#line 92 "builtin.opt"

    SUCCESS_INDICATOR = MR_FALSE;
;}
#line 2334 "dir.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(dir__is_root_directory_1_0_i3);
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
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
		dir__is_root_directory_1_0_i95);
MR_def_label(dir__is_root_directory_1_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__dir__is_root_directory_1_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
{
#line 895 "io.opt"

#if defined(MR_WIN32)
    SUCCESS_INDICATOR = MR_TRUE;
#else
    SUCCESS_INDICATOR = MR_FALSE;
#endif
;}
#line 2371 "dir.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(dir__is_root_directory_1_0_i17);
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Integer) 92;
	MR_GOTO_LAB(dir__is_root_directory_1_0_i20);
MR_def_label(dir__is_root_directory_1_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Integer) 47;
MR_def_label(dir__is_root_directory_1_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_EQ(MR_r1,92)) {
		MR_GOTO_LAB(dir__is_root_directory_1_0_i13);
	}
	MR_r1 = MR_sv(1);
	{
#define	MR_PROC_LABEL	mercury__dir__is_root_directory_1_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
{
#line 902 "io.opt"

#if defined(MR_CYGWIN)
    SUCCESS_INDICATOR = MR_TRUE;
#else
    SUCCESS_INDICATOR = MR_FALSE;
#endif
;}
#line 2404 "dir.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(dir__is_root_directory_1_0_i12);
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	MR_sv(1) = MR_r1;
MR_def_label(dir__is_root_directory_1_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_sv(1),0,0)) {
		MR_GOTO_LAB(dir__is_root_directory_1_0_i25);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_sv(1);
	MR_r2 = MR_tfield(1, MR_tempr2, 1);
	if (MR_LTAGS_TEST(MR_r2,0,0)) {
		MR_GOTO_LAB(dir__is_root_directory_1_0_i25);
	}
	MR_tempr1 = MR_tfield(1, MR_r2, 0);
	if (MR_INT_NE(MR_tempr1,58)) {
		MR_GOTO_LAB(dir__is_root_directory_1_0_i25);
	}
	MR_tempr1 = MR_tfield(1, MR_r2, 1);
	if (MR_LTAGS_TEST(MR_tempr1,0,0)) {
		MR_GOTO_LAB(dir__is_root_directory_1_0_i25);
	}
	MR_sv(2) = MR_tfield(1, MR_tempr1, 1);
	MR_sv(3) = MR_tfield(1, MR_tempr1, 0);
	MR_r1 = MR_tfield(1, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(char__is_alpha_1_0,
		dir__is_root_directory_1_0_i30);
MR_def_label(dir__is_root_directory_1_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(dir__is_root_directory_1_0_i25);
	}
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(dir__is_directory_separator_1_0,
		dir__is_root_directory_1_0_i32);
MR_def_label(dir__is_root_directory_1_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(dir__is_root_directory_1_0_i25);
	}
	MR_r3 = MR_sv(2);
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(builtin__unify_2_0);
MR_def_label(dir__is_root_directory_1_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_sv(1),0,0)) {
		MR_GOTO_LAB(dir__is_root_directory_1_0_i35);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_sv(1);
	MR_r2 = MR_tfield(1, MR_tempr2, 1);
	if (MR_LTAGS_TEST(MR_r2,0,0)) {
		MR_GOTO_LAB(dir__is_root_directory_1_0_i35);
	}
	MR_r1 = MR_tfield(1, MR_tempr2, 0);
	MR_tempr1 = MR_tfield(1, MR_r2, 0);
	if ((MR_r1 != MR_tempr1)) {
		MR_GOTO_LAB(dir__is_root_directory_1_0_i35);
	}
	MR_sv(2) = MR_r1;
	MR_sv(3) = MR_tfield(1, MR_r2, 1);
	}
	MR_np_call_localret_ent(dir__is_directory_separator_1_0,
		dir__is_root_directory_1_0_i38);
MR_def_label(dir__is_root_directory_1_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(dir__is_root_directory_1_0_i35);
	}
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(dir__list__takewhile__ho11_4_0,
		dir__is_root_directory_1_0_i40);
MR_def_label(dir__is_root_directory_1_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(dir__is_root_directory_1_0_i35);
	}
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(dir__is_root_directory_1_0_i43);
	}
	MR_r3 = MR_r2;
	MR_GOTO_LAB(dir__is_root_directory_1_0_i42);
MR_def_label(dir__is_root_directory_1_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(1, MR_r2, 0);
	if ((MR_sv(2) != MR_tempr1)) {
		MR_GOTO_LAB(dir__is_root_directory_1_0_i35);
	}
	MR_tempr2 = MR_tfield(1, MR_r2, 1);
	MR_r3 = MR_tempr2;
	if (MR_LTAGS_TEST(MR_tempr2,0,0)) {
		MR_GOTO_LAB(dir__is_root_directory_1_0_i42);
	}
	MR_r1 = MR_tempr2;
	}
	MR_np_call_localret_ent(dir__list__takewhile__ho10_4_0,
		dir__is_root_directory_1_0_i46);
MR_def_label(dir__is_root_directory_1_0,46)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(dir__is_root_directory_1_0_i35);
	}
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(dir__is_root_directory_1_0_i49);
	}
	MR_r3 = MR_r2;
	MR_GOTO_LAB(dir__is_root_directory_1_0_i42);
MR_def_label(dir__is_root_directory_1_0,49)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(1, MR_r2, 0);
	if ((MR_sv(2) != MR_tempr1)) {
		MR_GOTO_LAB(dir__is_root_directory_1_0_i35);
	}
	MR_r3 = MR_tfield(1, MR_r2, 1);
	}
MR_def_label(dir__is_root_directory_1_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(builtin__unify_2_0);
MR_def_label(dir__is_root_directory_1_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_sv(1),0,0)) {
		MR_GOTO_LAB(dir__is_root_directory_1_0_i1);
	}
	MR_r2 = MR_sv(1);
	MR_sv(1) = MR_tfield(1, MR_r2, 1);
	MR_r1 = MR_tfield(1, MR_r2, 0);
	MR_np_call_localret_ent(dir__is_directory_separator_1_0,
		dir__is_root_directory_1_0_i51);
MR_def_label(dir__is_root_directory_1_0,51)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(dir__is_root_directory_1_0_i1);
	}
	if (MR_LTAGS_TESTR(MR_sv(1),0,0)) {
		MR_GOTO_LAB(dir__is_root_directory_1_0_i54);
	}
	MR_r3 = MR_sv(1);
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(builtin__unify_2_0);
MR_def_label(dir__is_root_directory_1_0,54)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_sv(1);
	MR_r2 = MR_tfield(1, MR_tempr2, 1);
	MR_tempr1 = MR_tempr2;
	MR_sv(1) = MR_r2;
	MR_r1 = MR_tfield(1, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(dir__is_directory_separator_1_0,
		dir__is_root_directory_1_0_i57);
MR_def_label(dir__is_root_directory_1_0,57)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(dir__is_root_directory_1_0_i1);
	}
	MR_r2 = MR_sv(1);
	MR_r3 = MR_r2;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(builtin__unify_2_0);
MR_def_label(dir__is_root_directory_1_0,95)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(dir__is_root_directory_1_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(dir__is_root_directory_1_0_i1);
	}
	MR_r2 = MR_tfield(1, MR_r1, 1);
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(dir__is_root_directory_1_0_i1);
	}
	MR_r1 = MR_tfield(1, MR_r1, 0);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(dir__is_directory_separator_1_0);
MR_def_label(dir__is_root_directory_1_0,1)
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


MR_BEGIN_MODULE(dir_module15)
	MR_init_entry1(dir__split_name_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__dir__split_name_3_0);
	MR_init_label4(dir__split_name_3_0,2,3,6,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'split_name'/3 mode 0 */
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


MR_BEGIN_MODULE(dir_module16)
	MR_init_entry1(fn__dir__basename_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__dir__basename_1_0);
	MR_init_label10(fn__dir__basename_1_0,2,3,6,11,14,20,8,23,25,22)
	MR_init_label8(fn__dir__basename_1_0,27,29,30,33,34,38,37,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'basename'/2 mode 0 */
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
#line 895 "io.opt"

#if defined(MR_WIN32)
    SUCCESS_INDICATOR = MR_TRUE;
#else
    SUCCESS_INDICATOR = MR_FALSE;
#endif
;}
#line 2718 "dir.c"
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
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_sv(2);
	MR_r2 = MR_tfield(1, MR_tempr2, 1);
	if (MR_LTAGS_TEST(MR_r2,0,0)) {
		MR_GOTO_LAB(fn__dir__basename_1_0_i8);
	}
	MR_tempr1 = MR_tfield(1, MR_r2, 0);
	if (MR_INT_NE(MR_tempr1,58)) {
		MR_GOTO_LAB(fn__dir__basename_1_0_i8);
	}
	MR_tempr1 = MR_tfield(1, MR_r2, 1);
	if (MR_LTAGS_TESTR(MR_tempr1,0,0)) {
		MR_GOTO_LAB(fn__dir__basename_1_0_i8);
	}
	MR_r1 = MR_tfield(1, MR_tempr2, 0);
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
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(builtin__unify_2_0,
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
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(builtin__unify_2_0,
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


MR_BEGIN_MODULE(dir_module17)
	MR_init_entry1(dir__basename_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__dir__basename_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'basename'/2 mode 0 */
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

MR_decl_entry(fn__require__func_error_1_0);

MR_BEGIN_MODULE(dir_module18)
	MR_init_entry1(fn__dir__det_basename_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__dir__det_basename_1_0);
	MR_init_label2(fn__dir__det_basename_1_0,3,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'det_basename'/2 mode 0 */
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
	MR_r2 = (MR_Word) MR_string_const("dir.det_basename: given directory is root directory", 51);
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_np_tailcall_ent(fn__require__func_error_1_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(dir_module19)
	MR_init_entry1(fn__dir__dirname_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__dir__dirname_1_0);
	MR_init_label10(fn__dir__dirname_1_0,2,3,6,4,12,15,21,9,26,24)
	MR_init_label6(fn__dir__dirname_1_0,30,32,29,35,36,28)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'dirname'/2 mode 0 */
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
#line 895 "io.opt"

#if defined(MR_WIN32)
    SUCCESS_INDICATOR = MR_TRUE;
#else
    SUCCESS_INDICATOR = MR_FALSE;
#endif
;}
#line 2975 "dir.c"
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
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_sv(1);
	MR_r2 = MR_tfield(1, MR_tempr2, 1);
	if (MR_LTAGS_TEST(MR_r2,0,0)) {
		MR_GOTO_LAB(fn__dir__dirname_1_0_i9);
	}
	MR_tempr1 = MR_tfield(1, MR_r2, 0);
	if (MR_INT_NE(MR_tempr1,58)) {
		MR_GOTO_LAB(fn__dir__dirname_1_0_i9);
	}
	MR_tempr1 = MR_tfield(1, MR_r2, 1);
	if (MR_LTAGS_TESTR(MR_tempr1,0,0)) {
		MR_GOTO_LAB(fn__dir__dirname_1_0_i9);
	}
	MR_r1 = MR_tfield(1, MR_tempr2, 0);
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
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(builtin__unify_2_0,
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


MR_BEGIN_MODULE(dir_module20)
	MR_init_entry1(dir__dirname_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__dir__dirname_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'dirname'/2 mode 0 */
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


MR_BEGIN_MODULE(dir_module21)
	MR_init_entry1(dir__path_name_is_root_directory_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__dir__path_name_is_root_directory_1_0);
	MR_init_label2(dir__path_name_is_root_directory_1_0,2,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'path_name_is_root_directory'/1 mode 0 */
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
MR_decl_entry(fn__string__append_list_1_0);

MR_BEGIN_MODULE(dir_module22)
	MR_init_entry1(fn__f_100_105_114_95_95_47_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__f_100_105_114_95_95_47_2_0);
	MR_init_label10(fn__f_100_105_114_95_95_47_2_0,2,3,4,5,6,7,10,8,16,19)
	MR_init_label10(fn__f_100_105_114_95_95_47_2_0,21,22,24,28,29,31,13,14,39,42)
	MR_init_label10(fn__f_100_105_114_95_95_47_2_0,43,44,45,46,48,36,52,33,34,56)
	MR_init_label1(fn__f_100_105_114_95_95_47_2_0,62)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '/'/3 mode 0 */
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
	MR_r2 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_r2;
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
#line 895 "io.opt"

#if defined(MR_WIN32)
    SUCCESS_INDICATOR = MR_TRUE;
#else
    SUCCESS_INDICATOR = MR_FALSE;
#endif
;}
#line 3229 "dir.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(fn__f_100_105_114_95_95_47_2_0_i16);
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	MR_r2 = (MR_Integer) 92;
	MR_GOTO_LAB(fn__f_100_105_114_95_95_47_2_0_i19);
MR_def_label(fn__f_100_105_114_95_95_47_2_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 47;
MR_def_label(fn__f_100_105_114_95_95_47_2_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r2,92)) {
		MR_GOTO_LAB(fn__f_100_105_114_95_95_47_2_0_i14);
	}
	{
	MR_Word MR_tempr1;
	{
	MR_String	Str;
	MR_Integer	Length;
#define	MR_PROC_LABEL	mercury__fn__f_100_105_114_95_95_47_2_0
	Str = (MR_String) MR_r1;
{
#line 231 "string.opt"

    Length = strlen(Str);
;}
#line 3257 "dir.c"
	MR_tempr1 = Length;
#undef	MR_PROC_LABEL
	}
	MR_r3 = MR_tempr1;
	if (MR_INT_LT(MR_tempr1,2)) {
		MR_GOTO_LAB(fn__f_100_105_114_95_95_47_2_0_i14);
	}
	MR_sv(2) = MR_r1;
	MR_sv(3) = MR_tempr1;
	MR_r2 = (MR_Integer) 0;
	}
	MR_np_call_localret_ent(string__unsafe_index_3_0,
		fn__f_100_105_114_95_95_47_2_0_i21);
MR_def_label(fn__f_100_105_114_95_95_47_2_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(char__is_alpha_1_0,
		fn__f_100_105_114_95_95_47_2_0_i22);
MR_def_label(fn__f_100_105_114_95_95_47_2_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(fn__f_100_105_114_95_95_47_2_0_i13);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = (MR_Integer) 1;
	MR_np_call_localret_ent(string__unsafe_index_3_0,
		fn__f_100_105_114_95_95_47_2_0_i24);
MR_def_label(fn__f_100_105_114_95_95_47_2_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,58)) {
		MR_GOTO_LAB(fn__f_100_105_114_95_95_47_2_0_i13);
	}
	if (MR_INT_LE(MR_sv(3),2)) {
		MR_GOTO_LAB(fn__f_100_105_114_95_95_47_2_0_i31);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = (MR_Integer) 2;
	MR_np_call_localret_ent(string__unsafe_index_3_0,
		fn__f_100_105_114_95_95_47_2_0_i28);
MR_def_label(fn__f_100_105_114_95_95_47_2_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(dir__is_directory_separator_1_0,
		fn__f_100_105_114_95_95_47_2_0_i29);
MR_def_label(fn__f_100_105_114_95_95_47_2_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(fn__f_100_105_114_95_95_47_2_0_i13);
	}
MR_def_label(fn__f_100_105_114_95_95_47_2_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("dir./: second argument is a current drive relative path", 55);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(require__error_1_0);
MR_def_label(fn__f_100_105_114_95_95_47_2_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
MR_def_label(fn__f_100_105_114_95_95_47_2_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_String	Str;
	MR_Integer	Length;
#define	MR_PROC_LABEL	mercury__fn__f_100_105_114_95_95_47_2_0
	Str = (MR_String) MR_sv(1);
{
#line 231 "string.opt"

    Length = strlen(Str);
;}
#line 3326 "dir.c"
	MR_r3 = Length;
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__fn__f_100_105_114_95_95_47_2_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
{
#line 895 "io.opt"

#if defined(MR_WIN32)
    SUCCESS_INDICATOR = MR_TRUE;
#else
    SUCCESS_INDICATOR = MR_FALSE;
#endif
;}
#line 3344 "dir.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(fn__f_100_105_114_95_95_47_2_0_i39);
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(3) = MR_r3;
	MR_r2 = (MR_Integer) 92;
	MR_GOTO_LAB(fn__f_100_105_114_95_95_47_2_0_i42);
MR_def_label(fn__f_100_105_114_95_95_47_2_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(3) = MR_r3;
	MR_r2 = (MR_Integer) 47;
MR_def_label(fn__f_100_105_114_95_95_47_2_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_EQ(MR_r2,92)) {
		MR_GOTO_LAB(fn__f_100_105_114_95_95_47_2_0_i43);
	}
	MR_sv(1) = MR_r1;
	MR_GOTO_LAB(fn__f_100_105_114_95_95_47_2_0_i36);
MR_def_label(fn__f_100_105_114_95_95_47_2_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_EQ(MR_sv(3),2)) {
		MR_GOTO_LAB(fn__f_100_105_114_95_95_47_2_0_i44);
	}
	MR_sv(1) = MR_r1;
	MR_GOTO_LAB(fn__f_100_105_114_95_95_47_2_0_i36);
MR_def_label(fn__f_100_105_114_95_95_47_2_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r2 = (MR_Integer) 0;
	MR_np_call_localret_ent(string__unsafe_index_3_0,
		fn__f_100_105_114_95_95_47_2_0_i45);
MR_def_label(fn__f_100_105_114_95_95_47_2_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(char__is_alpha_1_0,
		fn__f_100_105_114_95_95_47_2_0_i46);
MR_def_label(fn__f_100_105_114_95_95_47_2_0,46)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(fn__f_100_105_114_95_95_47_2_0_i36);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = (MR_Integer) 1;
	MR_np_call_localret_ent(string__unsafe_index_3_0,
		fn__f_100_105_114_95_95_47_2_0_i48);
MR_def_label(fn__f_100_105_114_95_95_47_2_0,48)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,58)) {
		MR_GOTO_LAB(fn__f_100_105_114_95_95_47_2_0_i36);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(string__append_3_2);
MR_def_label(fn__f_100_105_114_95_95_47_2_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	if (MR_INT_LE(MR_tempr1,0)) {
		MR_GOTO_LAB(fn__f_100_105_114_95_95_47_2_0_i34);
	}
	{
	MR_String	Str;
	MR_Integer	Index;
	MR_Integer	PrevIndex;
	MR_Char	Ch;
#define	MR_PROC_LABEL	mercury__fn__f_100_105_114_95_95_47_2_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
	Str = (MR_String) MR_sv(1);
	Index = MR_tempr1;
{
#line 603 "string.opt"

    if (Index > 0) {
        PrevIndex = Index - 1;
        Ch = Str[PrevIndex];
        if (MR_is_ascii(Ch)) {
            SUCCESS_INDICATOR = (Ch != 0);
        } else {
            Ch = MR_utf8_prev_get(Str, &PrevIndex);
            SUCCESS_INDICATOR = (Ch > 0);
        }
    } else {
        SUCCESS_INDICATOR = MR_FALSE;
    }
;}
#line 3440 "dir.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(fn__f_100_105_114_95_95_47_2_0_i34);
	MR_tempr1 = (MR_UnsignedChar) Ch;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	MR_sv(2) = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(dir__is_directory_separator_1_0,
		fn__f_100_105_114_95_95_47_2_0_i52);
MR_def_label(fn__f_100_105_114_95_95_47_2_0,52)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(fn__f_100_105_114_95_95_47_2_0_i33);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(string__append_3_2);
MR_def_label(fn__f_100_105_114_95_95_47_2_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
MR_def_label(fn__f_100_105_114_95_95_47_2_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__fn__f_100_105_114_95_95_47_2_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
{
#line 895 "io.opt"

#if defined(MR_WIN32)
    SUCCESS_INDICATOR = MR_TRUE;
#else
    SUCCESS_INDICATOR = MR_FALSE;
#endif
;}
#line 3481 "dir.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(fn__f_100_105_114_95_95_47_2_0_i56);
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	MR_sv(2) = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(1,4,5);
	MR_np_call_localret_ent(string__to_char_list_2_1,
		fn__f_100_105_114_95_95_47_2_0_i62);
MR_def_label(fn__f_100_105_114_95_95_47_2_0,56)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(1,4,6);
	MR_np_call_localret_ent(string__to_char_list_2_1,
		fn__f_100_105_114_95_95_47_2_0_i62);
MR_def_label(fn__f_100_105_114_95_95_47_2_0,62)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(2);
	MR_tfield(1, MR_r2, 1) = (MR_Word) MR_tbmkword(0, 0);
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = MR_r2;
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = MR_sv(1);
	MR_tfield(1, MR_r1, 1) = MR_tempr1;
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(fn__string__append_list_1_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(dir_module23)
	MR_init_entry1(fn__dir__make_path_name_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__dir__make_path_name_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'make_path_name'/3 mode 0 */
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

MR_decl_entry(fn__string__join_list_2_0);

MR_BEGIN_MODULE(dir_module24)
	MR_init_entry1(fn__dir__relative_path_name_from_components_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__dir__relative_path_name_from_components_1_0);
	MR_init_label2(fn__dir__relative_path_name_from_components_1_0,3,9)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'relative_path_name_from_components'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__dir__relative_path_name_from_components_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	{
#define	MR_PROC_LABEL	mercury__fn__dir__relative_path_name_from_components_1_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
{
#line 895 "io.opt"

#if defined(MR_WIN32)
    SUCCESS_INDICATOR = MR_TRUE;
#else
    SUCCESS_INDICATOR = MR_FALSE;
#endif
;}
#line 3573 "dir.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(fn__dir__relative_path_name_from_components_1_0_i3);
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(1,4,5);
	MR_np_call_localret_ent(string__to_char_list_2_1,
		fn__dir__relative_path_name_from_components_1_0_i9);
MR_def_label(fn__dir__relative_path_name_from_components_1_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(1,4,6);
	MR_np_call_localret_ent(string__to_char_list_2_1,
		fn__dir__relative_path_name_from_components_1_0_i9);
MR_def_label(fn__dir__relative_path_name_from_components_1_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(fn__string__join_list_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(dir_module25)
	MR_init_entry1(dir__current_directory_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__dir__current_directory_3_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'current_directory'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__dir__current_directory_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	{
	MR_Word	Res;
#define	MR_PROC_LABEL	mercury__dir__current_directory_3_0
	MR_save_registers();
{
#line 861 "dir.m"

    /*
    ** Marked thread_safe because ML_make_io_res_1_error_string will acquire
    ** the global lock.
    */

#ifdef MR_WIN32
    wchar_t     *wbuf;
    MR_String   str;

    wbuf = _wgetcwd(NULL, 1);
    if (wbuf != NULL) {
        str = ML_wide_to_utf8(wbuf, MR_ALLOC_ID);
        Res = ML_make_io_res_1_ok_string(str);
        free(wbuf);
    } else {
        ML_make_io_res_1_error_string(errno,
            MR_make_string_const("dir.current_directory failed: "),
            &Res);
    }
#else
    size_t      size = 256;
    MR_Word     ptr;
    char        *buf;
    MR_String   str;

    while (1) {
        MR_offset_incr_hp_atomic_msg(ptr, 0,
            (size + sizeof(MR_Word) - 1) / sizeof(MR_Word),
            MR_ALLOC_ID, "string.string/0");
        buf = (char *) ptr;
        if (getcwd(buf, size)) {
            MR_make_aligned_string(str, buf);
            Res = ML_make_io_res_1_ok_string(str);
            break;
        }
        if (errno != ERANGE) {
            ML_make_io_res_1_error_string(errno,
                MR_make_string_const("dir.current_directory failed: "),
                &Res);
            break;
        }
        /* Buffer too small.  Resize and try again. */
        size *= 1.5;
    }
#endif
;}
#line 3670 "dir.c"
#ifndef MR_CONSERVATIVE_GC
	MR_restore_registers();
#endif
	MR_r1 = Res;
#undef	MR_PROC_LABEL
	}
	MR_decr_sp_and_return(1);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(dir_module26)
	MR_init_entry1(dir__can_implement_make_directory_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__dir__can_implement_make_directory_0_0);
	MR_init_label1(dir__can_implement_make_directory_0_0,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'can_implement_make_directory'/0 mode 0 */
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
#line 1061 "dir.m"

#if defined(MR_WIN32)
    SUCCESS_INDICATOR = MR_TRUE;
#elif defined(MR_HAVE_MKDIR)
    SUCCESS_INDICATOR = MR_TRUE;
#else
    SUCCESS_INDICATOR = MR_FALSE;
#endif
;}
#line 3715 "dir.c"
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
	MR_INIT_PROC_LAYOUT_ADDR(mercury__dir__make_single_directory_2_5_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'make_single_directory_2'/5 mode 0 */
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
#define	MR_PROC_LABEL	mercury__dir__make_single_directory_2_5_0
	ErrorIfExists = MR_r1;
	DirName = (MR_String) MR_r2;
	MR_save_registers();
{
#line 1107 "dir.m"

#if defined(MR_WIN32)
    if (CreateDirectoryW(ML_utf8_to_wide(DirName), NULL)) {
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
;}
#line 3788 "dir.c"
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

MR_decl_entry(io__check_file_accessibility_dotnet_5_0);

MR_BEGIN_MODULE(dir_module28)
	MR_init_entry1(dir__make_directory_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__dir__make_directory_4_0);
	MR_init_label10(dir__make_directory_4_0,6,7,9,15,12,16,18,20,3,70)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'make_directory'/4 mode 0 */
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
#line 1061 "dir.m"

#if defined(MR_WIN32)
    SUCCESS_INDICATOR = MR_TRUE;
#elif defined(MR_HAVE_MKDIR)
    SUCCESS_INDICATOR = MR_TRUE;
#else
    SUCCESS_INDICATOR = MR_FALSE;
#endif
;}
#line 3834 "dir.c"
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
	if ((strcmp((char *) (MR_Word *) MR_sv(1), (char *) (MR_Word *) MR_r1) != 0)) {
		MR_GOTO_LAB(dir__make_directory_4_0_i7);
	}
	MR_r1 = (MR_Integer) 0;
	MR_r2 = MR_sv(1);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(dir__make_single_directory_2_5_0);
MR_def_label(dir__make_directory_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const(".", 1)) != 0)) {
		MR_GOTO_LAB(dir__make_directory_4_0_i9);
	}
	MR_r1 = (MR_Integer) 0;
	MR_r2 = MR_sv(1);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(dir__make_single_directory_2_5_0);
MR_def_label(dir__make_directory_4_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__dir__make_directory_4_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
{
#line 92 "builtin.opt"

    SUCCESS_INDICATOR = MR_FALSE;
;}
#line 3877 "dir.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(dir__make_directory_4_0_i12);
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	MR_sv(2) = MR_r1;
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_np_call_localret_ent(io__check_file_accessibility_dotnet_5_0,
		dir__make_directory_4_0_i15);
MR_def_label(dir__make_directory_4_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r3 = MR_r4;
	MR_GOTO_LAB(dir__make_directory_4_0_i16);
MR_def_label(dir__make_directory_4_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	{
	MR_String	FileName;
	MR_Word	AccessTypes;
	MR_Word	Result;
#define	MR_PROC_LABEL	mercury__dir__make_directory_4_0
	FileName = (MR_String) MR_r1;
	AccessTypes = (MR_Word) MR_tbmkword(0, 0);
	MR_save_registers();
{
#line 962 "io.opt"

#if defined(MR_HAVE_ACCESS)
  #ifdef F_OK
    int mode = F_OK;
  #else
    int mode = 0;
  #endif
    int access_result;

  #if !defined(MR_WIN32) || defined(MR_CYGWIN)
    /*
    ** Earlier versions of MSVCRT ignored flags it doesn't support,
    ** later versions return an error (e.g. on Vista).
    */
    if (ML_access_types_includes_execute(AccessTypes)) {
      #ifdef X_OK
        mode |= X_OK;
      #else
        mode |= 1;
      #endif
    }
  #endif
    if (ML_access_types_includes_write(AccessTypes)) {
  #ifdef W_OK
        mode |= W_OK;
  #else
        mode |= 2;
  #endif
    }
    if (ML_access_types_includes_read(AccessTypes)) {
  #ifdef R_OK
        mode |= R_OK;
  #else
        mode |= 4;
  #endif
    }

  #ifdef MR_WIN32
    access_result = _waccess(ML_utf8_to_wide(FileName), mode);
  #else
    access_result = access(FileName, mode);
  #endif

    if (access_result == 0) {
        Result = ML_make_io_res_0_ok();
    } else {
        ML_make_io_res_0_error(errno,
            MR_make_string_const("file not accessible: "), &Result);
    }
#else /* !MR_HAVE_ACCESS */
    Result = ML_make_io_res_0_error_msg(
        "io.check_file_accessibility not supported on this platform");
#endif
;}
#line 3960 "dir.c"
#ifndef MR_CONSERVATIVE_GC
	MR_restore_registers();
#endif
	MR_r3 = Result;
#undef	MR_PROC_LABEL
	}
	MR_r1 = MR_sv(2);
MR_def_label(dir__make_directory_4_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r3,0,0)) {
		MR_GOTO_LAB(dir__make_directory_4_0_i18);
	}
	MR_r1 = (MR_Integer) 0;
	MR_r2 = MR_sv(1);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(dir__make_single_directory_2_5_0);
MR_def_label(dir__make_directory_4_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_localcall_lab(dir__make_directory_4_0,
		dir__make_directory_4_0_i20);
MR_def_label(dir__make_directory_4_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(dir__make_directory_4_0_i70);
	}
	MR_r1 = (MR_Integer) 0;
	MR_r2 = MR_sv(1);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(dir__make_single_directory_2_5_0);
MR_def_label(dir__make_directory_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(1,5,0);
	MR_proceed();
MR_def_label(dir__make_directory_4_0,70)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(dir_module29)
	MR_init_entry1(dir__make_single_directory_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__dir__make_single_directory_4_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'make_single_directory'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__dir__make_single_directory_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 1;
	MR_r2 = MR_tempr1;
	MR_np_tailcall_ent(dir__make_single_directory_2_5_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(dir_module30)
	MR_init_entry1(fn__dir__fixup_dirname_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__dir__fixup_dirname_1_0);
	MR_init_label7(fn__dir__fixup_dirname_1_0,2,3,6,4,9,11,8)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'fixup_dirname'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__dir__fixup_dirname_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(2) = MR_r1;
	MR_np_call_localret_ent(string__to_char_list_2_0,
		fn__dir__fixup_dirname_1_0_i2);
MR_def_label(fn__dir__fixup_dirname_1_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__dir__canonicalize_path_chars_1_0,
		fn__dir__fixup_dirname_1_0_i3);
MR_def_label(fn__dir__fixup_dirname_1_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(dir__is_root_directory_1_0,
		fn__dir__fixup_dirname_1_0_i6);
MR_def_label(fn__dir__fixup_dirname_1_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(fn__dir__fixup_dirname_1_0_i4);
	}
	MR_r1 = MR_sv(2);
	MR_decr_sp_and_return(3);
MR_def_label(fn__dir__fixup_dirname_1_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r1 = (MR_Word) MR_CHAR_CTOR_ADDR;
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(list__split_last_3_0,
		fn__dir__fixup_dirname_1_0_i9);
MR_def_label(fn__dir__fixup_dirname_1_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(fn__dir__fixup_dirname_1_0_i8);
	}
	MR_sv(2) = MR_r2;
	MR_r1 = MR_r3;
	MR_np_call_localret_ent(dir__is_directory_separator_1_0,
		fn__dir__fixup_dirname_1_0_i11);
MR_def_label(fn__dir__fixup_dirname_1_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(fn__dir__fixup_dirname_1_0_i8);
	}
	MR_r1 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(string__from_char_list_2_0);
MR_def_label(fn__dir__fixup_dirname_1_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(string__from_char_list_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(io__file_id_4_0);
extern const MR_TypeCtorInfo_Struct mercury_data_io__type_ctor_info_file_id_0;
MR_decl_entry(list__member_2_0);

MR_BEGIN_MODULE(dir_module31)
	MR_init_entry1(dir__check_for_symlink_loop_7_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__dir__check_for_symlink_loop_7_0);
	MR_init_label6(dir__check_for_symlink_loop_7_0,6,8,12,9,10,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'check_for_symlink_loop'/7 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(dir__check_for_symlink_loop_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__dir__check_for_symlink_loop_7_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
{
#line 870 "io.opt"

#if defined(MR_HAVE_SYMLINK) && defined(MR_HAVE_READLINK)
    SUCCESS_INDICATOR = MR_TRUE;
#else
    SUCCESS_INDICATOR = MR_FALSE;
#endif
;}
#line 4137 "dir.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(dir__check_for_symlink_loop_7_0_i3);
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r3;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(io__file_id_4_0,
		dir__check_for_symlink_loop_7_0_i6);
MR_def_label(dir__check_for_symlink_loop_7_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,1)) {
		MR_GOTO_LAB(dir__check_for_symlink_loop_7_0_i8);
	}
	MR_r2 = MR_sv(2);
	MR_decr_sp_and_return(3);
MR_def_label(dir__check_for_symlink_loop_7_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(0, MR_r1, 0);
	MR_r4 = MR_tempr1;
	if (MR_INT_NE(MR_sv(1),1)) {
		MR_GOTO_LAB(dir__check_for_symlink_loop_7_0_i10);
	}
	MR_sv(1) = MR_tempr1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(io, file_id);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(2);
	}
	MR_np_call_localret_ent(list__member_2_0,
		dir__check_for_symlink_loop_7_0_i12);
MR_def_label(dir__check_for_symlink_loop_7_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(dir__check_for_symlink_loop_7_0_i9);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,6,0);
	MR_r2 = MR_sv(2);
	MR_decr_sp_and_return(3);
MR_def_label(dir__check_for_symlink_loop_7_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_sv(1);
MR_def_label(dir__check_for_symlink_loop_7_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r4;
	MR_tfield(1, MR_tempr1, 1) = MR_sv(2);
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,6,1);
	MR_r2 = MR_tempr1;
	MR_decr_sp_and_return(3);
	}
MR_def_label(dir__check_for_symlink_loop_7_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,6,1);
	MR_r2 = MR_r3;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(dir_module32)
	MR_init_entry1(dir__can_implement_dir_foldl_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__dir__can_implement_dir_foldl_0_0);
	MR_init_label1(dir__can_implement_dir_foldl_0_0,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'can_implement_dir_foldl'/0 mode 0 */
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
#line 1593 "dir.m"

#if defined(MR_HAVE_OPENDIR) && defined(MR_HAVE_READDIR) && \
        defined(MR_HAVE_CLOSEDIR)
    SUCCESS_INDICATOR = MR_TRUE;
#elif defined(MR_WIN32)
    SUCCESS_INDICATOR = MR_TRUE;
#else
    SUCCESS_INDICATOR = MR_FALSE;
#endif
;}
#line 4238 "dir.c"
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


MR_BEGIN_MODULE(dir_module33)
	MR_init_entry1(dir__open_2_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__dir__open_2_4_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'open_2'/4 mode 0 */
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
#define	MR_PROC_LABEL	mercury__dir__open_2_4_0
	DirName = (MR_String) MR_r1;
	MR_save_registers();
{
#line 1643 "dir.m"

#if defined(MR_WIN32)
    WIN32_FIND_DATAW    file_data;
    ML_DIR_STREAM       Dir;
    LPTSTR              FirstFileName;
    char                *dir_pattern;
    MR_Integer          is_readable;
    char                *filename;

    ML_check_dir_readable(DirName, &is_readable, &Result);
    if (is_readable) {
        dir_pattern = ML_make_path_name(DirName, MR_make_string_const("*"));
        Dir = FindFirstFileW(ML_utf8_to_wide(dir_pattern), &file_data);
        if (Dir == INVALID_HANDLE_VALUE) {
            int error = GetLastError();
            if (error == ERROR_NO_MORE_FILES) {
                Result = ML_make_dir_open_result_eof();
            } else {
                ML_make_dir_open_result_error(error, &Result);
            }
        } else {
            filename = ML_wide_to_utf8(file_data.cFileName, MR_ALLOC_ID);
            ML_make_win32_dir_open_result_ok(Dir, filename, &Result);
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
;}
#line 4321 "dir.c"
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


MR_BEGIN_MODULE(dir_module34)
	MR_init_entry1(dir__close_2_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__dir__close_2_5_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'close_2'/5 mode 0 */
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
#define	MR_PROC_LABEL	mercury__dir__close_2_5_0
	MR_MAYBE_UNBOX_FOREIGN_TYPE(ML_DIR_STREAM, MR_r1, Dir);
{
#line 1865 "dir.m"

#if defined(MR_WIN32)
    Status = FindClose(Dir);
    Error = GetLastError();
#elif defined(MR_HAVE_CLOSEDIR)
    Status = (closedir(Dir) == 0);
    Error = errno;
#else
    MR_fatal_error("dir.open called but not supported");
#endif
;}
#line 4368 "dir.c"
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


MR_BEGIN_MODULE(dir_module35)
	MR_init_entry1(dir__close_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__dir__close_4_0);
	MR_init_label2(dir__close_4_0,5,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'close'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(dir__close_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	{
	ML_DIR_STREAM	Dir;
	MR_Integer	Status;
	MR_Integer	Error;
#define	MR_PROC_LABEL	mercury__dir__close_4_0
	MR_MAYBE_UNBOX_FOREIGN_TYPE(ML_DIR_STREAM, MR_r1, Dir);
{
#line 1865 "dir.m"

#if defined(MR_WIN32)
    Status = FindClose(Dir);
    Error = GetLastError();
#elif defined(MR_HAVE_CLOSEDIR)
    Status = (closedir(Dir) == 0);
    Error = errno;
#else
    MR_fatal_error("dir.open called but not supported");
#endif
;}
#line 4415 "dir.c"
	MR_r3 = Status;
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_Integer, Error, MR_r4);
#undef	MR_PROC_LABEL
	}
	if (MR_INT_NE(MR_r3,0)) {
		MR_GOTO_LAB(dir__close_4_0_i2);
	}
	{
#define	MR_PROC_LABEL	mercury__dir__close_4_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
{
#line 895 "io.opt"

#if defined(MR_WIN32)
    SUCCESS_INDICATOR = MR_TRUE;
#else
    SUCCESS_INDICATOR = MR_FALSE;
#endif
;}
#line 4437 "dir.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(dir__close_4_0_i5);
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	{
	MR_Word MR_tempr1;
	{
	MR_Integer	Error;
	MR_String	Msg0;
	MR_String	Msg;
#define	MR_PROC_LABEL	mercury__dir__close_4_0
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_Integer, MR_r4, Error);
	Msg0 = (MR_String) (MR_Word) MR_string_const("dir.foldl2: closing directory failed: ", 38);
	MR_OBTAIN_GLOBAL_LOCK("make_win32_err_msg");
{
#line 911 "io.opt"

    ML_maybe_make_win32_err_msg(MR_TRUE, Error, Msg0, MR_ALLOC_ID, Msg);
;}
#line 4458 "dir.c"
	MR_RELEASE_GLOBAL_LOCK("make_win32_err_msg");
	MR_tempr1 = (MR_Word) Msg;
#undef	MR_PROC_LABEL
	}
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r1, 0) = MR_tempr1;
	MR_decr_sp(1);
	MR_proceed();
	}
MR_def_label(dir__close_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	{
	MR_Integer	Error;
	MR_String	Msg0;
	MR_String	Msg;
#define	MR_PROC_LABEL	mercury__dir__close_4_0
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_Integer, MR_r4, Error);
	Msg0 = (MR_String) (MR_Word) MR_string_const("dir.foldl2: closing directory failed: ", 38);
	MR_OBTAIN_GLOBAL_LOCK("make_err_msg");
{
#line 892 "io.opt"

    ML_maybe_make_err_msg(MR_TRUE, Error, Msg0, MR_ALLOC_ID, MR_FALSE, Msg);
;}
#line 4485 "dir.c"
	MR_RELEASE_GLOBAL_LOCK("make_err_msg");
	MR_tempr1 = (MR_Word) Msg;
#undef	MR_PROC_LABEL
	}
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r1, 0) = MR_tempr1;
	MR_decr_sp(1);
	MR_proceed();
	}
MR_def_label(dir__close_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_decr_sp(1);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_tuple_0;
extern const MR_TypeCtorInfo_Struct mercury_data_bool__type_ctor_info_bool_0;
MR_decl_entry(exception__rethrow_1_0);

MR_BEGIN_MODULE(dir_module36)
	MR_init_entry1(dir__foldl2_process_dir_11_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__dir__foldl2_process_dir_11_0);
	MR_init_label10(dir__foldl2_process_dir_11_0,9,6,11,13,18,22,64,24,26,31)
	MR_init_label6(dir__foldl2_process_dir_11_0,35,36,38,33,40,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'foldl2_process_dir'/11 mode 0 */
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
#line 1593 "dir.m"

#if defined(MR_HAVE_OPENDIR) && defined(MR_HAVE_READDIR) && \
        defined(MR_HAVE_CLOSEDIR)
    SUCCESS_INDICATOR = MR_TRUE;
#elif defined(MR_WIN32)
    SUCCESS_INDICATOR = MR_TRUE;
#else
    SUCCESS_INDICATOR = MR_FALSE;
#endif
;}
#line 4542 "dir.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(dir__foldl2_process_dir_11_0_i3);
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
	if (MR_INT_NE(MR_r6,1)) {
		MR_GOTO_LAB(dir__foldl2_process_dir_11_0_i6);
	}
	if (MR_INT_NE(MR_r7,1)) {
		MR_GOTO_LAB(dir__foldl2_process_dir_11_0_i6);
	}
	MR_sv(5) = MR_r2;
	MR_sv(6) = MR_r3;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_sv(7) = MR_tempr1;
	MR_sv(1) = MR_r6;
	MR_sv(2) = MR_r7;
	MR_sv(3) = MR_r8;
	MR_sv(8) = MR_r1;
	MR_r1 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_r5;
	}
	MR_np_call_localret_ent(dir__check_for_symlink_loop_7_0,
		dir__foldl2_process_dir_11_0_i9);
MR_def_label(dir__foldl2_process_dir_11_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r2;
	MR_GOTO_LAB(dir__foldl2_process_dir_11_0_i11);
MR_def_label(dir__foldl2_process_dir_11_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r2;
	MR_sv(6) = MR_r3;
	MR_sv(7) = MR_r4;
	MR_sv(1) = MR_r6;
	MR_sv(2) = MR_r7;
	MR_sv(3) = MR_r8;
	MR_sv(8) = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,6,1);
	MR_sv(4) = MR_r5;
MR_def_label(dir__foldl2_process_dir_11_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,1)) {
		MR_GOTO_LAB(dir__foldl2_process_dir_11_0_i13);
	}
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(3);
	MR_tfield(1, MR_r2, 1) = MR_tfield(1, MR_r1, 0);
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(9);
MR_def_label(dir__foldl2_process_dir_11_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_tfield(0, MR_r1, 0);
	if (MR_INT_NE(MR_r4,0)) {
		MR_GOTO_LAB(dir__foldl2_process_dir_11_0_i64);
	}
	{
#define	MR_PROC_LABEL	mercury__dir__foldl2_process_dir_11_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
{
#line 1593 "dir.m"

#if defined(MR_HAVE_OPENDIR) && defined(MR_HAVE_READDIR) && \
        defined(MR_HAVE_CLOSEDIR)
    SUCCESS_INDICATOR = MR_TRUE;
#elif defined(MR_WIN32)
    SUCCESS_INDICATOR = MR_TRUE;
#else
    SUCCESS_INDICATOR = MR_FALSE;
#endif
;}
#line 4620 "dir.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(dir__foldl2_process_dir_11_0_i18);
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	{
	MR_String	DirName;
	MR_Word	Result;
#define	MR_PROC_LABEL	mercury__dir__foldl2_process_dir_11_0
	DirName = (MR_String) MR_sv(7);
	MR_save_registers();
{
#line 1643 "dir.m"

#if defined(MR_WIN32)
    WIN32_FIND_DATAW    file_data;
    ML_DIR_STREAM       Dir;
    LPTSTR              FirstFileName;
    char                *dir_pattern;
    MR_Integer          is_readable;
    char                *filename;

    ML_check_dir_readable(DirName, &is_readable, &Result);
    if (is_readable) {
        dir_pattern = ML_make_path_name(DirName, MR_make_string_const("*"));
        Dir = FindFirstFileW(ML_utf8_to_wide(dir_pattern), &file_data);
        if (Dir == INVALID_HANDLE_VALUE) {
            int error = GetLastError();
            if (error == ERROR_NO_MORE_FILES) {
                Result = ML_make_dir_open_result_eof();
            } else {
                ML_make_dir_open_result_error(error, &Result);
            }
        } else {
            filename = ML_wide_to_utf8(file_data.cFileName, MR_ALLOC_ID);
            ML_make_win32_dir_open_result_ok(Dir, filename, &Result);
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
;}
#line 4675 "dir.c"
#ifndef MR_CONSERVATIVE_GC
	MR_restore_registers();
#endif
	MR_r4 = Result;
#undef	MR_PROC_LABEL
	}
	MR_r1 = MR_r4;
	MR_GOTO_LAB(dir__foldl2_process_dir_11_0_i22);
MR_def_label(dir__foldl2_process_dir_11_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(2,5,1);
MR_def_label(dir__foldl2_process_dir_11_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(dir__foldl2_process_dir_11_0_i24);
	}
MR_def_label(dir__foldl2_process_dir_11_0,64)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 1);
	MR_tfield(0, MR_r2, 0) = MR_sv(3);
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(9);
MR_def_label(dir__foldl2_process_dir_11_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,2)) {
		MR_GOTO_LAB(dir__foldl2_process_dir_11_0_i26);
	}
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(3);
	MR_tfield(1, MR_r2, 1) = MR_tfield(2, MR_r1, 0);
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(9);
MR_def_label(dir__foldl2_process_dir_11_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 13);
	MR_tfield(0, MR_r2, 0) = (MR_Word) MR_COMMON(11,0);
	MR_tfield(0, MR_r2, 1) = (MR_Word) MR_ENTRY_AP(dir__IntroducedFrom__pred__foldl2_process_dir__1359__1_13_0);
	MR_tfield(0, MR_r2, 2) = (MR_Integer) 10;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_sv(8);
	MR_tfield(0, MR_r2, 3) = MR_tempr2;
	MR_tfield(0, MR_r2, 4) = MR_sv(5);
	MR_tfield(0, MR_r2, 5) = MR_sv(6);
	MR_tfield(0, MR_r2, 6) = MR_sv(7);
	MR_tfield(0, MR_r2, 7) = MR_sv(1);
	MR_tfield(0, MR_r2, 8) = MR_sv(2);
	MR_tfield(0, MR_r2, 9) = MR_sv(3);
	MR_tfield(0, MR_r2, 10) = MR_sv(4);
	MR_tempr1 = MR_tfield(1, MR_r1, 0);
	MR_tfield(0, MR_r2, 11) = MR_tfield(0, MR_tempr1, 0);
	MR_tfield(0, MR_r2, 12) = MR_tfield(0, MR_tempr1, 1);
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_CTOR1_ADDR(io, maybe_partial_res);
	MR_tfield(0, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 5);
	MR_tfield(0, MR_r1, 0) = (MR_Word) MR_CTOR0_ADDR(builtin, tuple);
	MR_tfield(0, MR_r1, 1) = (MR_Integer) 3;
	MR_tfield(0, MR_r1, 2) = MR_tempr1;
	MR_tfield(0, MR_r1, 3) = (MR_Word) MR_BOOL_CTOR_ADDR;
	MR_tfield(0, MR_r1, 4) = (MR_Word) MR_CTOR0_ADDR(dir, stream);
	MR_sv(5) = MR_tfield(0, MR_r2, 11);
	}
	MR_np_call_localret_ent(f_100_105_114_95_95_101_120_99_101_112_116_105_111_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_121_95_105_111_95_95_104_111_57_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_55_44_32_56_44_32_57_44_32_49_48_44_32_49_49_44_32_49_50_44_32_49_51_93_95_48_4_0,
		dir__foldl2_process_dir_11_0_i31);
MR_def_label(dir__foldl2_process_dir_11_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,1)) {
		MR_GOTO_LAB(dir__foldl2_process_dir_11_0_i33);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(1, MR_r1, 0);
	MR_r4 = MR_tempr1;
	MR_tempr2 = MR_tfield(0, MR_tempr1, 0);
	MR_r3 = MR_tempr2;
	if (MR_PTAG_TESTR(MR_tempr2,1)) {
		MR_GOTO_LAB(dir__foldl2_process_dir_11_0_i35);
	}
	MR_r1 = MR_tfield(0, MR_tempr1, 1);
	MR_r2 = MR_tempr2;
	MR_decr_sp_and_return(9);
	}
MR_def_label(dir__foldl2_process_dir_11_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r4;
	MR_sv(5) = MR_tfield(0, MR_tempr1, 1);
	MR_tempr2 = MR_r3;
	MR_sv(6) = MR_tempr2;
	MR_sv(7) = MR_tfield(0, MR_tempr2, 0);
	MR_r1 = MR_tfield(0, MR_tempr1, 2);
	}
	MR_np_call_localret_ent(dir__close_4_0,
		dir__foldl2_process_dir_11_0_i36);
MR_def_label(dir__foldl2_process_dir_11_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(dir__foldl2_process_dir_11_0_i38);
	}
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(6);
	MR_decr_sp_and_return(9);
MR_def_label(dir__foldl2_process_dir_11_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(7);
	MR_tfield(1, MR_tempr1, 1) = MR_tfield(1, MR_r1, 0);
	MR_r1 = MR_sv(5);
	MR_r2 = MR_tempr1;
	MR_decr_sp_and_return(9);
	}
MR_def_label(dir__foldl2_process_dir_11_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(5);
	MR_sv(5) = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(dir__close_4_0,
		dir__foldl2_process_dir_11_0_i40);
MR_def_label(dir__foldl2_process_dir_11_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_CTOR1_ADDR(io, maybe_partial_res);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(8);
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 5);
	MR_tfield(0, MR_r1, 0) = (MR_Word) MR_CTOR0_ADDR(builtin, tuple);
	MR_tfield(0, MR_r1, 1) = (MR_Integer) 3;
	MR_tfield(0, MR_r1, 2) = MR_tempr1;
	MR_tfield(0, MR_r1, 3) = (MR_Word) MR_BOOL_CTOR_ADDR;
	MR_tfield(0, MR_r1, 4) = (MR_Word) MR_CTOR0_ADDR(dir, stream);
	MR_r2 = MR_sv(5);
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_np_tailcall_ent(exception__rethrow_1_0);
	}
MR_def_label(dir__foldl2_process_dir_11_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_r8;
	MR_tfield(1, MR_r2, 1) = (MR_Word) MR_string_const("dir.foldl2 not implemented on this platform", 43);
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(dir_module37)
	MR_init_entry1(dir__foldl2_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__dir__foldl2_6_0);
	MR_init_label2(dir__foldl2_6_0,2,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'foldl2'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__dir__foldl2_6_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r4;
	MR_sv(3) = MR_r1;
	MR_r1 = MR_r3;
	MR_np_call_localret_ent(fn__dir__fixup_dirname_1_0,
		dir__foldl2_6_0_i2);
MR_def_label(dir__foldl2_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = (MR_Integer) 0;
	MR_r3 = MR_sv(1);
	MR_r4 = MR_tempr1;
	MR_r5 = (MR_Word) MR_tbmkword(0, 0);
	MR_r6 = (MR_Integer) 0;
	MR_r7 = (MR_Integer) 0;
	MR_r8 = MR_sv(2);
	}
	MR_np_call_localret_ent(dir__foldl2_process_dir_11_0,
		dir__foldl2_6_0_i3);
MR_def_label(dir__foldl2_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(4);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(dir_module38)
	MR_init_entry1(dir__recursive_foldl2_7_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__dir__recursive_foldl2_7_0);
	MR_init_label2(dir__recursive_foldl2_7_0,2,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'recursive_foldl2'/7 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__dir__recursive_foldl2_7_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r4;
	MR_sv(3) = MR_r5;
	MR_sv(4) = MR_r1;
	MR_r1 = MR_r3;
	MR_np_call_localret_ent(fn__dir__fixup_dirname_1_0,
		dir__recursive_foldl2_7_0_i2);
MR_def_label(dir__recursive_foldl2_7_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = (MR_Integer) 0;
	MR_r3 = MR_sv(1);
	MR_r4 = MR_tempr1;
	MR_r5 = (MR_Word) MR_tbmkword(0, 0);
	MR_r6 = (MR_Integer) 1;
	MR_r7 = MR_sv(2);
	MR_r8 = MR_sv(3);
	}
	MR_np_call_localret_ent(dir__foldl2_process_dir_11_0,
		dir__recursive_foldl2_7_0_i3);
MR_def_label(dir__recursive_foldl2_7_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(list__append_3_1);
MR_decl_entry(exception__throw_1_0);

MR_BEGIN_MODULE(dir_module39)
	MR_init_entry1(dir__find_matching_brace_or_comma_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__dir__find_matching_brace_or_comma_6_0);
	MR_init_label10(dir__find_matching_brace_or_comma_6_0,74,9,6,11,4,17,14,24,21,19)
	MR_init_label2(dir__find_matching_brace_or_comma_6_0,31,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'find_matching_brace_or_comma'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(dir__find_matching_brace_or_comma_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
MR_def_label(dir__find_matching_brace_or_comma_6_0,74)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(dir__find_matching_brace_or_comma_6_0_i3);
	}
	MR_sv(3) = MR_tfield(1, MR_r1, 1);
	MR_r5 = MR_tfield(1, MR_r1, 0);
	if (MR_INT_NE(MR_r5,125)) {
		MR_GOTO_LAB(dir__find_matching_brace_or_comma_6_0_i4);
	}
	if (MR_INT_NE(MR_r4,0)) {
		MR_GOTO_LAB(dir__find_matching_brace_or_comma_6_0_i6);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r3;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__append_3_1,
		dir__find_matching_brace_or_comma_6_0_i9);
MR_def_label(dir__find_matching_brace_or_comma_6_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(3);
	MR_decr_sp_and_return(4);
MR_def_label(dir__find_matching_brace_or_comma_6_0,6)
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
		dir__find_matching_brace_or_comma_6_0_i11);
MR_def_label(dir__find_matching_brace_or_comma_6_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tempr1;
	MR_r4 = ((MR_Integer) MR_sv(2) - (MR_Integer) 1);
	MR_succip_word = MR_sv(4);
	MR_GOTO_LAB(dir__find_matching_brace_or_comma_6_0_i74);
	}
MR_def_label(dir__find_matching_brace_or_comma_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r5,123)) {
		MR_GOTO_LAB(dir__find_matching_brace_or_comma_6_0_i14);
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
		dir__find_matching_brace_or_comma_6_0_i17);
MR_def_label(dir__find_matching_brace_or_comma_6_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tempr1;
	MR_r4 = ((MR_Integer) MR_sv(2) + (MR_Integer) 1);
	MR_succip_word = MR_sv(4);
	MR_GOTO_LAB(dir__find_matching_brace_or_comma_6_0_i74);
	}
MR_def_label(dir__find_matching_brace_or_comma_6_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r5,44)) {
		MR_GOTO_LAB(dir__find_matching_brace_or_comma_6_0_i19);
	}
	if (MR_INT_NE(MR_r4,0)) {
		MR_GOTO_LAB(dir__find_matching_brace_or_comma_6_0_i21);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r3;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_sv(2) = MR_r4;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__append_3_1,
		dir__find_matching_brace_or_comma_6_0_i24);
MR_def_label(dir__find_matching_brace_or_comma_6_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tempr1;
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_r4 = MR_sv(2);
	MR_succip_word = MR_sv(4);
	MR_GOTO_LAB(dir__find_matching_brace_or_comma_6_0_i74);
	}
MR_def_label(dir__find_matching_brace_or_comma_6_0,21)
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
		dir__find_matching_brace_or_comma_6_0_i31);
MR_def_label(dir__find_matching_brace_or_comma_6_0,19)
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
		dir__find_matching_brace_or_comma_6_0_i31);
MR_def_label(dir__find_matching_brace_or_comma_6_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(2);
	MR_succip_word = MR_sv(4);
	MR_GOTO_LAB(dir__find_matching_brace_or_comma_6_0_i74);
	}
MR_def_label(dir__find_matching_brace_or_comma_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = (MR_Word) MR_string_const("no matching brace", 17);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(exception__throw_1_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(list__condense_2_3_0);

MR_BEGIN_MODULE(dir_module40)
	MR_init_entry1(fn__dir__expand_acc_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__dir__expand_acc_2_0);
	MR_init_label10(fn__dir__expand_acc_2_0,31,3,6,7,9,10,11,12,13,4)
	MR_init_label1(fn__dir__expand_acc_2_0,15)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'expand_acc'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__dir__expand_acc_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
MR_def_label(fn__dir__expand_acc_2_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(fn__dir__expand_acc_2_0_i3);
	}
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(4);
MR_def_label(fn__dir__expand_acc_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r5 = MR_tfield(1, MR_r1, 1);
	MR_r6 = MR_tfield(1, MR_r1, 0);
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
	MR_np_call_localret_ent(fn__dir__list__map__ho8_2_0,
		fn__dir__expand_acc_2_0_i7);
MR_def_label(fn__dir__expand_acc_2_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_LIST_CTOR_ADDR;
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_sv(3) = MR_tempr1;
	MR_tempr2 = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_tempr2;
	}
	MR_np_call_localret_ent(list__reverse_2_0,
		fn__dir__expand_acc_2_0_i9);
MR_def_label(fn__dir__expand_acc_2_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r2 = MR_tempr1;
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	}
	MR_np_call_localret_ent(list__condense_2_3_0,
		fn__dir__expand_acc_2_0_i10);
MR_def_label(fn__dir__expand_acc_2_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(fn__f_100_105_114_95_95_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_112_95_95_104_111_55_95_95_91_50_93_95_48_2_0,
		fn__dir__expand_acc_2_0_i11);
MR_def_label(fn__dir__expand_acc_2_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__reverse_2_0,
		fn__dir__expand_acc_2_0_i12);
MR_def_label(fn__dir__expand_acc_2_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r2 = MR_tempr1;
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	}
	MR_np_call_localret_ent(list__condense_2_3_0,
		fn__dir__expand_acc_2_0_i13);
MR_def_label(fn__dir__expand_acc_2_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(4);
	MR_GOTO_LAB(fn__dir__expand_acc_2_0_i31);
	}
MR_def_label(fn__dir__expand_acc_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r5;
	MR_r1 = MR_r6;
	MR_np_call_localret_ent(fn__f_100_105_114_95_95_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_112_95_95_104_111_54_95_95_91_50_93_95_48_2_0,
		fn__dir__expand_acc_2_0_i15);
MR_def_label(fn__dir__expand_acc_2_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(4);
	MR_GOTO_LAB(fn__dir__expand_acc_2_0_i31);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(dir_module41)
	MR_init_entry1(fn__dir__expand_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__dir__expand_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'expand'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__dir__expand_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_TAG_COMMON(1,0,2);
	MR_np_tailcall_ent(fn__dir__expand_acc_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(dir_module42)
	MR_init_entry1(fn__dir__expand_braces_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__dir__expand_braces_1_0);
	MR_init_label2(fn__dir__expand_braces_1_0,2,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'expand_braces'/2 mode 0 */
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
	MR_r2 = (MR_Word) MR_TAG_COMMON(1,0,2);
	MR_np_call_localret_ent(fn__dir__expand_acc_2_0,
		fn__dir__expand_braces_1_0_i4);
MR_def_label(fn__dir__expand_braces_1_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_np_tailcall_ent(fn__dir__list__map__ho13_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(dir_module43)
	MR_init_entry1(fn__dir__make_mkdir_res_ok_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__dir__make_mkdir_res_ok_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'make_mkdir_res_ok'/1 mode 0 */
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


MR_BEGIN_MODULE(dir_module44)
	MR_init_entry1(dir__make_mkdir_res_error_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__dir__make_mkdir_res_error_4_0);
	MR_init_label1(dir__make_mkdir_res_error_4_0,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'make_mkdir_res_error'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(dir__make_mkdir_res_error_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	{
#define	MR_PROC_LABEL	mercury__dir__make_mkdir_res_error_4_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
{
#line 895 "io.opt"

#if defined(MR_WIN32)
    SUCCESS_INDICATOR = MR_TRUE;
#else
    SUCCESS_INDICATOR = MR_FALSE;
#endif
;}
#line 5359 "dir.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(dir__make_mkdir_res_error_4_0_i3);
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	{
	MR_Word MR_tempr1;
	{
	MR_Integer	Error;
	MR_String	Msg0;
	MR_String	Msg;
#define	MR_PROC_LABEL	mercury__dir__make_mkdir_res_error_4_0
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_Integer, MR_r1, Error);
	Msg0 = (MR_String) (MR_Word) MR_string_const("dir.make_directory failed: ", 27);
	MR_OBTAIN_GLOBAL_LOCK("make_win32_err_msg");
{
#line 911 "io.opt"

    ML_maybe_make_win32_err_msg(MR_TRUE, Error, Msg0, MR_ALLOC_ID, Msg);
;}
#line 5380 "dir.c"
	MR_RELEASE_GLOBAL_LOCK("make_win32_err_msg");
	MR_tempr1 = (MR_Word) Msg;
#undef	MR_PROC_LABEL
	}
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r1, 0) = MR_tempr1;
	MR_decr_sp(1);
	MR_proceed();
	}
MR_def_label(dir__make_mkdir_res_error_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	{
	MR_Integer	Error;
	MR_String	Msg0;
	MR_String	Msg;
#define	MR_PROC_LABEL	mercury__dir__make_mkdir_res_error_4_0
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_Integer, MR_r1, Error);
	Msg0 = (MR_String) (MR_Word) MR_string_const("dir.make_directory failed: ", 27);
	MR_OBTAIN_GLOBAL_LOCK("make_err_msg");
{
#line 892 "io.opt"

    ML_maybe_make_err_msg(MR_TRUE, Error, Msg0, MR_ALLOC_ID, MR_FALSE, Msg);
;}
#line 5407 "dir.c"
	MR_RELEASE_GLOBAL_LOCK("make_err_msg");
	MR_tempr1 = (MR_Word) Msg;
#undef	MR_PROC_LABEL
	}
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r1, 0) = MR_tempr1;
	MR_decr_sp(1);
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(dir_module45)
	MR_init_entry1(dir__check_dir_accessibility_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__dir__check_dir_accessibility_4_0);
	MR_init_label1(dir__check_dir_accessibility_4_0,18)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'check_dir_accessibility'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(dir__check_dir_accessibility_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__dir__check_dir_accessibility_4_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
{
#line 92 "builtin.opt"

    SUCCESS_INDICATOR = MR_FALSE;
;}
#line 5448 "dir.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(dir__check_dir_accessibility_4_0_i18);
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	MR_r2 = (MR_Word) MR_TAG_COMMON(1,4,2);
	MR_np_tailcall_ent(io__check_file_accessibility_dotnet_5_0);
MR_def_label(dir__check_dir_accessibility_4_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = (MR_Word) MR_TAG_COMMON(1,4,2);
	{
	MR_String	FileName;
	MR_Word	AccessTypes;
	MR_Word	Result;
#define	MR_PROC_LABEL	mercury__dir__check_dir_accessibility_4_0
	FileName = (MR_String) MR_r1;
	AccessTypes = MR_tempr1;
	MR_save_registers();
{
#line 962 "io.opt"

#if defined(MR_HAVE_ACCESS)
  #ifdef F_OK
    int mode = F_OK;
  #else
    int mode = 0;
  #endif
    int access_result;

  #if !defined(MR_WIN32) || defined(MR_CYGWIN)
    /*
    ** Earlier versions of MSVCRT ignored flags it doesn't support,
    ** later versions return an error (e.g. on Vista).
    */
    if (ML_access_types_includes_execute(AccessTypes)) {
      #ifdef X_OK
        mode |= X_OK;
      #else
        mode |= 1;
      #endif
    }
  #endif
    if (ML_access_types_includes_write(AccessTypes)) {
  #ifdef W_OK
        mode |= W_OK;
  #else
        mode |= 2;
  #endif
    }
    if (ML_access_types_includes_read(AccessTypes)) {
  #ifdef R_OK
        mode |= R_OK;
  #else
        mode |= 4;
  #endif
    }

  #ifdef MR_WIN32
    access_result = _waccess(ML_utf8_to_wide(FileName), mode);
  #else
    access_result = access(FileName, mode);
  #endif

    if (access_result == 0) {
        Result = ML_make_io_res_0_ok();
    } else {
        ML_make_io_res_0_error(errno,
            MR_make_string_const("file not accessible: "), &Result);
    }
#else /* !MR_HAVE_ACCESS */
    Result = ML_make_io_res_0_error_msg(
        "io.check_file_accessibility not supported on this platform");
#endif
;}
#line 5527 "dir.c"
#ifndef MR_CONSERVATIVE_GC
	MR_restore_registers();
#endif
	MR_r1 = Result;
#undef	MR_PROC_LABEL
	}
	MR_decr_sp_and_return(2);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(io__file_type_5_0);

MR_BEGIN_MODULE(dir_module46)
	MR_init_entry1(dir__make_mkdir_res_exists_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__dir__make_mkdir_res_exists_5_0);
	MR_init_label4(dir__make_mkdir_res_exists_5_0,2,7,3,13)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'make_mkdir_res_exists'/5 mode 0 */
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
	MR_r4 = MR_tfield(0, MR_r1, 0);
	if (MR_INT_NE(MR_r4,1)) {
		MR_GOTO_LAB(dir__make_mkdir_res_exists_5_0_i3);
	}
	{
#define	MR_PROC_LABEL	mercury__dir__make_mkdir_res_exists_5_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
{
#line 92 "builtin.opt"

    SUCCESS_INDICATOR = MR_FALSE;
;}
#line 5584 "dir.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(dir__make_mkdir_res_exists_5_0_i7);
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	MR_r1 = MR_sv(2);
	MR_r2 = (MR_Word) MR_TAG_COMMON(1,4,2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(io__check_file_accessibility_dotnet_5_0);
MR_def_label(dir__make_mkdir_res_exists_5_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = (MR_Word) MR_TAG_COMMON(1,4,2);
	{
	MR_String	FileName;
	MR_Word	AccessTypes;
	MR_Word	Result;
#define	MR_PROC_LABEL	mercury__dir__make_mkdir_res_exists_5_0
	FileName = (MR_String) MR_sv(2);
	AccessTypes = MR_tempr1;
	MR_save_registers();
{
#line 962 "io.opt"

#if defined(MR_HAVE_ACCESS)
  #ifdef F_OK
    int mode = F_OK;
  #else
    int mode = 0;
  #endif
    int access_result;

  #if !defined(MR_WIN32) || defined(MR_CYGWIN)
    /*
    ** Earlier versions of MSVCRT ignored flags it doesn't support,
    ** later versions return an error (e.g. on Vista).
    */
    if (ML_access_types_includes_execute(AccessTypes)) {
      #ifdef X_OK
        mode |= X_OK;
      #else
        mode |= 1;
      #endif
    }
  #endif
    if (ML_access_types_includes_write(AccessTypes)) {
  #ifdef W_OK
        mode |= W_OK;
  #else
        mode |= 2;
  #endif
    }
    if (ML_access_types_includes_read(AccessTypes)) {
  #ifdef R_OK
        mode |= R_OK;
  #else
        mode |= 4;
  #endif
    }

  #ifdef MR_WIN32
    access_result = _waccess(ML_utf8_to_wide(FileName), mode);
  #else
    access_result = access(FileName, mode);
  #endif

    if (access_result == 0) {
        Result = ML_make_io_res_0_ok();
    } else {
        ML_make_io_res_0_error(errno,
            MR_make_string_const("file not accessible: "), &Result);
    }
#else /* !MR_HAVE_ACCESS */
    Result = ML_make_io_res_0_error_msg(
        "io.check_file_accessibility not supported on this platform");
#endif
;}
#line 5664 "dir.c"
#ifndef MR_CONSERVATIVE_GC
	MR_restore_registers();
#endif
	MR_r1 = Result;
#undef	MR_PROC_LABEL
	}
	MR_decr_sp_and_return(3);
	}
MR_def_label(dir__make_mkdir_res_exists_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__dir__make_mkdir_res_exists_5_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
{
#line 895 "io.opt"

#if defined(MR_WIN32)
    SUCCESS_INDICATOR = MR_TRUE;
#else
    SUCCESS_INDICATOR = MR_FALSE;
#endif
;}
#line 5689 "dir.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(dir__make_mkdir_res_exists_5_0_i13);
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	{
	MR_Word MR_tempr1;
	{
	MR_Integer	Error;
	MR_String	Msg0;
	MR_String	Msg;
#define	MR_PROC_LABEL	mercury__dir__make_mkdir_res_exists_5_0
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_Integer, MR_sv(1), Error);
	Msg0 = (MR_String) (MR_Word) MR_string_const("dir.make_directory failed: ", 27);
	MR_OBTAIN_GLOBAL_LOCK("make_win32_err_msg");
{
#line 911 "io.opt"

    ML_maybe_make_win32_err_msg(MR_TRUE, Error, Msg0, MR_ALLOC_ID, Msg);
;}
#line 5710 "dir.c"
	MR_RELEASE_GLOBAL_LOCK("make_win32_err_msg");
	MR_tempr1 = (MR_Word) Msg;
#undef	MR_PROC_LABEL
	}
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r1, 0) = MR_tempr1;
	MR_decr_sp_and_return(3);
	}
MR_def_label(dir__make_mkdir_res_exists_5_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	{
	MR_Integer	Error;
	MR_String	Msg0;
	MR_String	Msg;
#define	MR_PROC_LABEL	mercury__dir__make_mkdir_res_exists_5_0
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_Integer, MR_sv(1), Error);
	Msg0 = (MR_String) (MR_Word) MR_string_const("dir.make_directory failed: ", 27);
	MR_OBTAIN_GLOBAL_LOCK("make_err_msg");
{
#line 892 "io.opt"

    ML_maybe_make_err_msg(MR_TRUE, Error, Msg0, MR_ALLOC_ID, MR_FALSE, Msg);
;}
#line 5736 "dir.c"
	MR_RELEASE_GLOBAL_LOCK("make_err_msg");
	MR_tempr1 = (MR_Word) Msg;
#undef	MR_PROC_LABEL
	}
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r1, 0) = MR_tempr1;
	MR_decr_sp_and_return(3);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(dir_module47)
	MR_init_entry1(dir__read_entry_2_7_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__dir__read_entry_2_7_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'read_entry_2'/7 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(dir__read_entry_2_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	ML_DIR_STREAM	Dir0;
	ML_DIR_STREAM	Dir;
	MR_Integer	Status;
	MR_Integer	Error;
	MR_String	FileName;
#define	MR_PROC_LABEL	mercury__dir__read_entry_2_7_0
	MR_MAYBE_UNBOX_FOREIGN_TYPE(ML_DIR_STREAM, MR_r1, Dir0);
{
#line 1940 "dir.m"

#if defined(MR_WIN32)
    WIN32_FIND_DATAW file_data;

    Dir = Dir0;
    if (FindNextFileW(Dir, &file_data)) {
        Status = 1;
        FileName = ML_wide_to_utf8(file_data.cFileName, MR_ALLOC_ID);
    } else {
        Error = GetLastError();
        Status = (Error == ERROR_NO_MORE_FILES ? -1 : 0);
        FileName = NULL;
    }

#elif defined(MR_HAVE_READDIR) && defined(MR_HAVE_CLOSEDIR)
    struct dirent *dir_entry;

    Dir = Dir0;
    errno = 0;
    dir_entry = readdir(Dir);
    if (dir_entry == NULL) {
        Error = errno;
        FileName = NULL;
        Status = (Error == 0 ? -1 : 0);
    } else {
        MR_make_aligned_string_copy_msg(FileName, dir_entry->d_name,
            MR_ALLOC_ID);
        Error = 0;
        Status = 1;
    }

#else /* !MR_WIN32 && !(MR_HAVE_READDIR etc.) */
    MR_fatal_error("dir.read_entry_2 called but not supported");
#endif
;}
#line 5810 "dir.c"
	MR_MAYBE_BOX_FOREIGN_TYPE(ML_DIR_STREAM, Dir, MR_r1);
	MR_r2 = Status;
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_Integer, Error, MR_r3);
	MR_r4 = (MR_Word) FileName;
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(dir_module48)
	MR_init_entry1(dir__read_entry_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__dir__read_entry_4_0);
	MR_init_label6(dir__read_entry_4_0,54,5,2,11,16,14)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'read_entry'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(dir__read_entry_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
MR_def_label(dir__read_entry_4_0,54)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	ML_DIR_STREAM	Dir0;
	ML_DIR_STREAM	Dir;
	MR_Integer	Status;
	MR_Integer	Error;
	MR_String	FileName;
#define	MR_PROC_LABEL	mercury__dir__read_entry_4_0
	MR_MAYBE_UNBOX_FOREIGN_TYPE(ML_DIR_STREAM, MR_r1, Dir0);
{
#line 1940 "dir.m"

#if defined(MR_WIN32)
    WIN32_FIND_DATAW file_data;

    Dir = Dir0;
    if (FindNextFileW(Dir, &file_data)) {
        Status = 1;
        FileName = ML_wide_to_utf8(file_data.cFileName, MR_ALLOC_ID);
    } else {
        Error = GetLastError();
        Status = (Error == ERROR_NO_MORE_FILES ? -1 : 0);
        FileName = NULL;
    }

#elif defined(MR_HAVE_READDIR) && defined(MR_HAVE_CLOSEDIR)
    struct dirent *dir_entry;

    Dir = Dir0;
    errno = 0;
    dir_entry = readdir(Dir);
    if (dir_entry == NULL) {
        Error = errno;
        FileName = NULL;
        Status = (Error == 0 ? -1 : 0);
    } else {
        MR_make_aligned_string_copy_msg(FileName, dir_entry->d_name,
            MR_ALLOC_ID);
        Error = 0;
        Status = 1;
    }

#else /* !MR_WIN32 && !(MR_HAVE_READDIR etc.) */
    MR_fatal_error("dir.read_entry_2 called but not supported");
#endif
;}
#line 5888 "dir.c"
	MR_MAYBE_BOX_FOREIGN_TYPE(ML_DIR_STREAM, Dir, MR_r3);
	MR_r4 = Status;
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_Integer, Error, MR_r5);
	MR_r6 = (MR_Word) FileName;
#undef	MR_PROC_LABEL
	}
	if (MR_INT_NE(MR_r4,0)) {
		MR_GOTO_LAB(dir__read_entry_4_0_i2);
	}
	{
#define	MR_PROC_LABEL	mercury__dir__read_entry_4_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
{
#line 895 "io.opt"

#if defined(MR_WIN32)
    SUCCESS_INDICATOR = MR_TRUE;
#else
    SUCCESS_INDICATOR = MR_FALSE;
#endif
;}
#line 5912 "dir.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(dir__read_entry_4_0_i5);
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	{
	MR_Word MR_tempr1;
	{
	MR_Integer	Error;
	MR_String	Msg0;
	MR_String	Msg;
#define	MR_PROC_LABEL	mercury__dir__read_entry_4_0
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_Integer, MR_r5, Error);
	Msg0 = (MR_String) (MR_Word) MR_string_const("dir.foldl2: reading directory entry failed: ", 44);
	MR_OBTAIN_GLOBAL_LOCK("make_win32_err_msg");
{
#line 911 "io.opt"

    ML_maybe_make_win32_err_msg(MR_TRUE, Error, Msg0, MR_ALLOC_ID, Msg);
;}
#line 5933 "dir.c"
	MR_RELEASE_GLOBAL_LOCK("make_win32_err_msg");
	MR_tempr1 = (MR_Word) Msg;
#undef	MR_PROC_LABEL
	}
	MR_tag_alloc_heap(MR_r1, 2, (MR_Integer) 1);
	MR_tfield(2, MR_r1, 0) = MR_tempr1;
	MR_decr_sp_and_return(3);
	}
MR_def_label(dir__read_entry_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	{
	MR_Integer	Error;
	MR_String	Msg0;
	MR_String	Msg;
#define	MR_PROC_LABEL	mercury__dir__read_entry_4_0
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_Integer, MR_r5, Error);
	Msg0 = (MR_String) (MR_Word) MR_string_const("dir.foldl2: reading directory entry failed: ", 44);
	MR_OBTAIN_GLOBAL_LOCK("make_err_msg");
{
#line 892 "io.opt"

    ML_maybe_make_err_msg(MR_TRUE, Error, Msg0, MR_ALLOC_ID, MR_FALSE, Msg);
;}
#line 5959 "dir.c"
	MR_RELEASE_GLOBAL_LOCK("make_err_msg");
	MR_tempr1 = (MR_Word) Msg;
#undef	MR_PROC_LABEL
	}
	MR_tag_alloc_heap(MR_r1, 2, (MR_Integer) 1);
	MR_tfield(2, MR_r1, 0) = MR_tempr1;
	MR_decr_sp_and_return(3);
	}
MR_def_label(dir__read_entry_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r4,-1)) {
		MR_GOTO_LAB(dir__read_entry_4_0_i11);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_decr_sp_and_return(3);
MR_def_label(dir__read_entry_4_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r6, MR_string_const(".", 1)) != 0)) {
		MR_GOTO_LAB(dir__read_entry_4_0_i16);
	}
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r6;
	MR_GOTO_LAB(dir__read_entry_4_0_i54);
MR_def_label(dir__read_entry_4_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r6, MR_string_const("..", 2)) != 0)) {
		MR_GOTO_LAB(dir__read_entry_4_0_i14);
	}
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r6;
	MR_GOTO_LAB(dir__read_entry_4_0_i54);
MR_def_label(dir__read_entry_4_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_r3;
	MR_tfield(0, MR_tempr1, 1) = MR_r6;
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r1, 0) = MR_tempr1;
	MR_decr_sp_and_return(3);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_declare_entry(mercury__do_call_closure_5);

MR_BEGIN_MODULE(dir_module49)
	MR_init_entry1(dir__foldl2_process_entries_14_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__dir__foldl2_process_entries_14_0);
	MR_init_label10(dir__foldl2_process_entries_14_0,136,3,5,7,8,10,12,14,16,24)
	MR_init_label9(dir__foldl2_process_entries_14_0,26,30,29,20,34,38,40,41,35)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'foldl2_process_entries'/14 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(dir__foldl2_process_entries_14_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(12);
	MR_sv(12) = (MR_Word) MR_succip;
MR_def_label(dir__foldl2_process_entries_14_0,136)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r6,0,0)) {
		MR_GOTO_LAB(dir__foldl2_process_entries_14_0_i3);
	}
	MR_tag_alloc_heap(MR_r3, 0, (MR_Integer) 1);
	MR_tfield(0, MR_r3, 0) = MR_r10;
	MR_r1 = MR_r2;
	MR_r2 = (MR_Integer) 1;
	MR_decr_sp_and_return(12);
MR_def_label(dir__foldl2_process_entries_14_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r6,2)) {
		MR_GOTO_LAB(dir__foldl2_process_entries_14_0_i5);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_r10;
	MR_tfield(1, MR_tempr1, 1) = MR_tfield(2, MR_r6, 0);
	MR_r1 = MR_r2;
	MR_r2 = (MR_Integer) 0;
	MR_decr_sp_and_return(12);
	}
MR_def_label(dir__foldl2_process_entries_14_0,5)
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
	MR_sv(10) = MR_r10;
	MR_sv(8) = MR_tfield(1, MR_r6, 0);
	MR_sv(11) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(8);
	}
	MR_np_call_localret_ent(fn__f_100_105_114_95_95_47_2_0,
		dir__foldl2_process_entries_14_0_i7);
MR_def_label(dir__foldl2_process_entries_14_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_r1;
	MR_r1 = (MR_Integer) 0;
	MR_r2 = MR_sv(9);
	MR_np_call_localret_ent(io__file_type_5_0,
		dir__foldl2_process_entries_14_0_i8);
MR_def_label(dir__foldl2_process_entries_14_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,1)) {
		MR_GOTO_LAB(dir__foldl2_process_entries_14_0_i10);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(10);
	MR_tfield(1, MR_tempr1, 1) = MR_tfield(1, MR_r1, 0);
	MR_r1 = MR_sv(1);
	MR_r2 = (MR_Integer) 0;
	MR_decr_sp_and_return(12);
	}
MR_def_label(dir__foldl2_process_entries_14_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(10);
	MR_sv(10) = MR_tfield(0, MR_r1, 0);
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(8);
	MR_r4 = MR_sv(10);
	MR_r5 = MR_tempr1;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(dir__foldl2_process_entries_14_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_5),
		mercury__dir__foldl2_process_entries_14_0_i12);
MR_def_label(dir__foldl2_process_entries_14_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(dir__foldl2_process_entries_14_0_i14);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr1, 0) = MR_r2;
	MR_r1 = MR_sv(1);
	MR_r2 = (MR_Integer) 0;
	MR_r3 = MR_tempr1;
	MR_decr_sp_and_return(12);
	}
MR_def_label(dir__foldl2_process_entries_14_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(6),1)) {
		MR_GOTO_LAB(dir__foldl2_process_entries_14_0_i16);
	}
	if (MR_INT_NE(MR_sv(10),1)) {
		MR_GOTO_LAB(dir__foldl2_process_entries_14_0_i16);
	}
	MR_r1 = MR_sv(11);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(9);
	MR_r5 = MR_sv(5);
	MR_r6 = MR_sv(6);
	MR_r7 = MR_sv(7);
	MR_r8 = MR_tempr1;
	}
	MR_np_call_localret_ent(dir__foldl2_process_dir_11_0,
		dir__foldl2_process_entries_14_0_i30);
MR_def_label(dir__foldl2_process_entries_14_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(6),1)) {
		MR_GOTO_LAB(dir__foldl2_process_entries_14_0_i20);
	}
	if (MR_INT_NE(MR_sv(10),2)) {
		MR_GOTO_LAB(dir__foldl2_process_entries_14_0_i20);
	}
	if (MR_INT_NE(MR_sv(7),1)) {
		MR_GOTO_LAB(dir__foldl2_process_entries_14_0_i20);
	}
	MR_sv(10) = MR_r2;
	MR_r1 = (MR_Integer) 1;
	MR_r2 = MR_sv(9);
	MR_np_call_localret_ent(io__file_type_5_0,
		dir__foldl2_process_entries_14_0_i24);
MR_def_label(dir__foldl2_process_entries_14_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,1)) {
		MR_GOTO_LAB(dir__foldl2_process_entries_14_0_i26);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(10);
	MR_tfield(1, MR_tempr1, 1) = MR_tfield(1, MR_r1, 0);
	MR_r1 = MR_sv(1);
	MR_r5 = MR_tempr1;
	MR_r3 = (MR_Integer) 0;
	MR_r4 = MR_r5;
	MR_GOTO_LAB(dir__foldl2_process_entries_14_0_i34);
	}
MR_def_label(dir__foldl2_process_entries_14_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_tfield(0, MR_r1, 0);
	if (MR_INT_NE(MR_r3,1)) {
		MR_GOTO_LAB(dir__foldl2_process_entries_14_0_i29);
	}
	MR_r1 = MR_sv(11);
	MR_r2 = (MR_Integer) 1;
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(9);
	MR_r5 = MR_sv(5);
	MR_r6 = MR_sv(6);
	MR_r7 = MR_sv(7);
	MR_r8 = MR_sv(10);
	MR_np_call_localret_ent(dir__foldl2_process_dir_11_0,
		dir__foldl2_process_entries_14_0_i30);
MR_def_label(dir__foldl2_process_entries_14_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r5 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r3 = MR_r5;
	MR_r4 = MR_r2;
	MR_GOTO_LAB(dir__foldl2_process_entries_14_0_i34);
MR_def_label(dir__foldl2_process_entries_14_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 1);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_sv(10);
	MR_r1 = MR_sv(1);
	MR_r5 = MR_tempr1;
	MR_r3 = (MR_Integer) 1;
	MR_r4 = MR_r5;
	MR_GOTO_LAB(dir__foldl2_process_entries_14_0_i34);
	}
MR_def_label(dir__foldl2_process_entries_14_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r4, 0, (MR_Integer) 1);
	MR_tfield(0, MR_r4, 0) = MR_r2;
	MR_r1 = MR_sv(1);
	MR_r3 = (MR_Integer) 1;
MR_def_label(dir__foldl2_process_entries_14_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r3,1)) {
		MR_GOTO_LAB(dir__foldl2_process_entries_14_0_i35);
	}
	if (MR_PTAG_TESTR(MR_r4,0)) {
		MR_GOTO_LAB(dir__foldl2_process_entries_14_0_i35);
	}
	MR_sv(1) = MR_r1;
	MR_sv(10) = MR_tfield(0, MR_r4, 0);
	MR_np_call_localret_ent(dir__read_entry_4_0,
		dir__foldl2_process_entries_14_0_i38);
MR_def_label(dir__foldl2_process_entries_14_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(dir__foldl2_process_entries_14_0_i40);
	}
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(4);
	MR_r7 = MR_sv(5);
	MR_r8 = MR_sv(6);
	MR_r9 = MR_sv(7);
	MR_r10 = MR_sv(10);
	MR_r6 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = MR_sv(1);
	MR_r1 = MR_sv(11);
	MR_succip_word = MR_sv(12);
	MR_GOTO_LAB(dir__foldl2_process_entries_14_0_i136);
MR_def_label(dir__foldl2_process_entries_14_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,2)) {
		MR_GOTO_LAB(dir__foldl2_process_entries_14_0_i41);
	}
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(4);
	MR_r7 = MR_sv(5);
	MR_r8 = MR_sv(6);
	MR_r9 = MR_sv(7);
	MR_r10 = MR_sv(10);
	MR_r6 = MR_r1;
	MR_r2 = MR_sv(1);
	MR_r1 = MR_sv(11);
	MR_succip_word = MR_sv(12);
	MR_GOTO_LAB(dir__foldl2_process_entries_14_0_i136);
MR_def_label(dir__foldl2_process_entries_14_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r6, 1, (MR_Integer) 1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(1, MR_r1, 0);
	MR_tfield(1, MR_r6, 0) = MR_tfield(0, MR_tempr1, 1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(4);
	MR_r7 = MR_sv(5);
	MR_r8 = MR_sv(6);
	MR_r9 = MR_sv(7);
	MR_r10 = MR_sv(10);
	MR_r2 = MR_tfield(0, MR_tempr1, 0);
	MR_r1 = MR_sv(11);
	MR_succip_word = MR_sv(12);
	MR_GOTO_LAB(dir__foldl2_process_entries_14_0_i136);
	}
MR_def_label(dir__foldl2_process_entries_14_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 0;
	MR_r3 = MR_r4;
	MR_decr_sp_and_return(12);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(dir_module50)
	MR_init_entry1(dir__foldl2_process_dir2_13_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__dir__foldl2_process_dir2_13_0);
	MR_init_label1(dir__foldl2_process_dir2_13_0,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'foldl2_process_dir2'/13 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(dir__foldl2_process_dir2_13_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_r7;
	MR_tempr2 = MR_r6;
	MR_r6 = MR_tempr1;
	MR_r7 = MR_tempr2;
	}
	MR_np_call_localret_ent(dir__foldl2_process_entries_14_0,
		dir__foldl2_process_dir2_13_0_i3);
MR_def_label(dir__foldl2_process_dir2_13_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_r3;
	MR_tfield(0, MR_tempr1, 1) = MR_r2;
	MR_r2 = MR_tempr1;
	MR_decr_sp_and_return(1);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(dir_module51)
	MR_init_entry1(dir__check_dir_readable_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__dir__check_dir_readable_5_0);
	MR_init_label6(dir__check_dir_readable_5_0,2,4,9,13,15,7)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'check_dir_readable'/5 mode 0 */
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
	if (MR_PTAG_TESTR(MR_r1,1)) {
		MR_GOTO_LAB(dir__check_dir_readable_5_0_i4);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr1, 0) = MR_tfield(1, MR_r1, 0);
	MR_r1 = (MR_Integer) 0;
	MR_r2 = MR_tempr1;
	MR_decr_sp_and_return(2);
	}
MR_def_label(dir__check_dir_readable_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_tfield(0, MR_r1, 0);
	if (MR_INT_NE(MR_r4,1)) {
		MR_GOTO_LAB(dir__check_dir_readable_5_0_i7);
	}
	{
#define	MR_PROC_LABEL	mercury__dir__check_dir_readable_5_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
{
#line 92 "builtin.opt"

    SUCCESS_INDICATOR = MR_FALSE;
;}
#line 6390 "dir.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(dir__check_dir_readable_5_0_i9);
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	MR_r1 = MR_sv(1);
	MR_r2 = (MR_Word) MR_TAG_COMMON(1,4,3);
	MR_np_call_localret_ent(io__check_file_accessibility_dotnet_5_0,
		dir__check_dir_readable_5_0_i13);
MR_def_label(dir__check_dir_readable_5_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = (MR_Word) MR_TAG_COMMON(1,4,3);
	{
	MR_String	FileName;
	MR_Word	AccessTypes;
	MR_Word	Result;
#define	MR_PROC_LABEL	mercury__dir__check_dir_readable_5_0
	FileName = (MR_String) MR_sv(1);
	AccessTypes = MR_r4;
	MR_save_registers();
{
#line 962 "io.opt"

#if defined(MR_HAVE_ACCESS)
  #ifdef F_OK
    int mode = F_OK;
  #else
    int mode = 0;
  #endif
    int access_result;

  #if !defined(MR_WIN32) || defined(MR_CYGWIN)
    /*
    ** Earlier versions of MSVCRT ignored flags it doesn't support,
    ** later versions return an error (e.g. on Vista).
    */
    if (ML_access_types_includes_execute(AccessTypes)) {
      #ifdef X_OK
        mode |= X_OK;
      #else
        mode |= 1;
      #endif
    }
  #endif
    if (ML_access_types_includes_write(AccessTypes)) {
  #ifdef W_OK
        mode |= W_OK;
  #else
        mode |= 2;
  #endif
    }
    if (ML_access_types_includes_read(AccessTypes)) {
  #ifdef R_OK
        mode |= R_OK;
  #else
        mode |= 4;
  #endif
    }

  #ifdef MR_WIN32
    access_result = _waccess(ML_utf8_to_wide(FileName), mode);
  #else
    access_result = access(FileName, mode);
  #endif

    if (access_result == 0) {
        Result = ML_make_io_res_0_ok();
    } else {
        ML_make_io_res_0_error(errno,
            MR_make_string_const("file not accessible: "), &Result);
    }
#else /* !MR_HAVE_ACCESS */
    Result = ML_make_io_res_0_error_msg(
        "io.check_file_accessibility not supported on this platform");
#endif
;}
#line 6467 "dir.c"
#ifndef MR_CONSERVATIVE_GC
	MR_restore_registers();
#endif
	MR_r4 = Result;
#undef	MR_PROC_LABEL
	}
	MR_r1 = MR_r4;
MR_def_label(dir__check_dir_readable_5_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(dir__check_dir_readable_5_0_i15);
	}
	MR_r1 = (MR_Integer) 1;
	MR_r2 = (MR_Word) MR_TAG_COMMON(2,5,2);
	MR_decr_sp_and_return(2);
MR_def_label(dir__check_dir_readable_5_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 2, (MR_Integer) 1);
	MR_tfield(2, MR_r2, 0) = MR_tfield(1, MR_r1, 0);
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(2);
MR_def_label(dir__check_dir_readable_5_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_r2 = (MR_Word) MR_TAG_COMMON(2,5,3);
	MR_decr_sp_and_return(2);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(dir_module52)
	MR_init_entry1(dir__read_first_entry_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__dir__read_first_entry_4_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'read_first_entry'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(dir__read_first_entry_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(dir__read_entry_4_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(dir_module53)
	MR_init_entry1(dir__make_win32_dir_open_result_ok_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__dir__make_win32_dir_open_result_ok_5_0);
	MR_init_label10(dir__make_win32_dir_open_result_ok_5_0,5,4,6,12,9,18,20,8,26,3)
	MR_init_label1(dir__make_win32_dir_open_result_ok_5_0,94)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'make_win32_dir_open_result_ok'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(dir__make_win32_dir_open_result_ok_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r2, MR_string_const(".", 1)) != 0)) {
		MR_GOTO_LAB(dir__make_win32_dir_open_result_ok_5_0_i5);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(dir__make_win32_dir_open_result_ok_5_0_i4);
MR_def_label(dir__make_win32_dir_open_result_ok_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r2, MR_string_const("..", 2)) != 0)) {
		MR_GOTO_LAB(dir__make_win32_dir_open_result_ok_5_0_i3);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(2) = MR_r2;
MR_def_label(dir__make_win32_dir_open_result_ok_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(dir__read_entry_4_0,
		dir__make_win32_dir_open_result_ok_5_0_i6);
MR_def_label(dir__make_win32_dir_open_result_ok_5_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(dir__make_win32_dir_open_result_ok_5_0_i8);
	}
	{
	ML_DIR_STREAM	Dir;
	MR_Integer	Status;
	MR_Integer	Error;
#define	MR_PROC_LABEL	mercury__dir__make_win32_dir_open_result_ok_5_0
	MR_MAYBE_UNBOX_FOREIGN_TYPE(ML_DIR_STREAM, MR_sv(1), Dir);
{
#line 1865 "dir.m"

#if defined(MR_WIN32)
    Status = FindClose(Dir);
    Error = GetLastError();
#elif defined(MR_HAVE_CLOSEDIR)
    Status = (closedir(Dir) == 0);
    Error = errno;
#else
    MR_fatal_error("dir.open called but not supported");
#endif
;}
#line 6581 "dir.c"
	MR_r3 = Status;
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_Integer, Error, MR_r4);
#undef	MR_PROC_LABEL
	}
	if (MR_INT_NE(MR_r3,0)) {
		MR_GOTO_LAB(dir__make_win32_dir_open_result_ok_5_0_i9);
	}
	{
#define	MR_PROC_LABEL	mercury__dir__make_win32_dir_open_result_ok_5_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
{
#line 895 "io.opt"

#if defined(MR_WIN32)
    SUCCESS_INDICATOR = MR_TRUE;
#else
    SUCCESS_INDICATOR = MR_FALSE;
#endif
;}
#line 6603 "dir.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(dir__make_win32_dir_open_result_ok_5_0_i12);
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	{
	MR_Integer	Error;
	MR_String	Msg0;
	MR_String	Msg;
#define	MR_PROC_LABEL	mercury__dir__make_win32_dir_open_result_ok_5_0
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_Integer, MR_r4, Error);
	Msg0 = (MR_String) (MR_Word) MR_string_const("dir.foldl2: closing directory failed: ", 38);
	MR_OBTAIN_GLOBAL_LOCK("make_win32_err_msg");
{
#line 911 "io.opt"

    ML_maybe_make_win32_err_msg(MR_TRUE, Error, Msg0, MR_ALLOC_ID, Msg);
;}
#line 6622 "dir.c"
	MR_RELEASE_GLOBAL_LOCK("make_win32_err_msg");
	MR_r3 = (MR_Word) Msg;
#undef	MR_PROC_LABEL
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_r4 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_r3;
	MR_r1 = MR_tempr1;
	MR_GOTO_LAB(dir__make_win32_dir_open_result_ok_5_0_i18);
	}
MR_def_label(dir__make_win32_dir_open_result_ok_5_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Integer	Error;
	MR_String	Msg0;
	MR_String	Msg;
#define	MR_PROC_LABEL	mercury__dir__make_win32_dir_open_result_ok_5_0
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_Integer, MR_r4, Error);
	Msg0 = (MR_String) (MR_Word) MR_string_const("dir.foldl2: closing directory failed: ", 38);
	MR_OBTAIN_GLOBAL_LOCK("make_err_msg");
{
#line 892 "io.opt"

    ML_maybe_make_err_msg(MR_TRUE, Error, Msg0, MR_ALLOC_ID, MR_FALSE, Msg);
;}
#line 6650 "dir.c"
	MR_RELEASE_GLOBAL_LOCK("make_err_msg");
	MR_r3 = (MR_Word) Msg;
#undef	MR_PROC_LABEL
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_r4 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_r3;
	MR_r1 = MR_tempr1;
	MR_GOTO_LAB(dir__make_win32_dir_open_result_ok_5_0_i18);
	}
MR_def_label(dir__make_win32_dir_open_result_ok_5_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
MR_def_label(dir__make_win32_dir_open_result_ok_5_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(dir__make_win32_dir_open_result_ok_5_0_i20);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_decr_sp_and_return(3);
MR_def_label(dir__make_win32_dir_open_result_ok_5_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr1, 0) = MR_tfield(1, MR_r1, 0);
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(3);
	}
MR_def_label(dir__make_win32_dir_open_result_ok_5_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,2)) {
		MR_GOTO_LAB(dir__make_win32_dir_open_result_ok_5_0_i94);
	}
	{
	MR_Word MR_tempr1;
	{
	ML_DIR_STREAM	Dir;
	MR_Integer	Status;
	MR_Integer	Error;
#define	MR_PROC_LABEL	mercury__dir__make_win32_dir_open_result_ok_5_0
	MR_MAYBE_UNBOX_FOREIGN_TYPE(ML_DIR_STREAM, MR_sv(1), Dir);
{
#line 1865 "dir.m"

#if defined(MR_WIN32)
    Status = FindClose(Dir);
    Error = GetLastError();
#elif defined(MR_HAVE_CLOSEDIR)
    Status = (closedir(Dir) == 0);
    Error = errno;
#else
    MR_fatal_error("dir.open called but not supported");
#endif
;}
#line 6708 "dir.c"
	MR_tempr1 = Status;
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_Integer, Error, MR_r4);
#undef	MR_PROC_LABEL
	}
	if (MR_INT_NE(MR_tempr1,0)) {
		MR_GOTO_LAB(dir__make_win32_dir_open_result_ok_5_0_i94);
	}
	{
#define	MR_PROC_LABEL	mercury__dir__make_win32_dir_open_result_ok_5_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
{
#line 895 "io.opt"

#if defined(MR_WIN32)
    SUCCESS_INDICATOR = MR_TRUE;
#else
    SUCCESS_INDICATOR = MR_FALSE;
#endif
;}
#line 6730 "dir.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(dir__make_win32_dir_open_result_ok_5_0_i26);
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	{
	MR_Integer	Error;
	MR_String	Msg0;
	MR_String	Msg;
#define	MR_PROC_LABEL	mercury__dir__make_win32_dir_open_result_ok_5_0
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_Integer, MR_r4, Error);
	Msg0 = (MR_String) (MR_Word) MR_string_const("dir.foldl2: closing directory failed: ", 38);
	MR_OBTAIN_GLOBAL_LOCK("make_win32_err_msg");
{
#line 911 "io.opt"

    ML_maybe_make_win32_err_msg(MR_TRUE, Error, Msg0, MR_ALLOC_ID, Msg);
;}
#line 6749 "dir.c"
	MR_RELEASE_GLOBAL_LOCK("make_win32_err_msg");
#undef	MR_PROC_LABEL
	}
	MR_decr_sp_and_return(3);
	}
MR_def_label(dir__make_win32_dir_open_result_ok_5_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Integer	Error;
	MR_String	Msg0;
	MR_String	Msg;
#define	MR_PROC_LABEL	mercury__dir__make_win32_dir_open_result_ok_5_0
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_Integer, MR_r4, Error);
	Msg0 = (MR_String) (MR_Word) MR_string_const("dir.foldl2: closing directory failed: ", 38);
	MR_OBTAIN_GLOBAL_LOCK("make_err_msg");
{
#line 892 "io.opt"

    ML_maybe_make_err_msg(MR_TRUE, Error, Msg0, MR_ALLOC_ID, MR_FALSE, Msg);
;}
#line 6770 "dir.c"
	MR_RELEASE_GLOBAL_LOCK("make_err_msg");
#undef	MR_PROC_LABEL
	}
	MR_decr_sp_and_return(3);
MR_def_label(dir__make_win32_dir_open_result_ok_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tfield(0, MR_tempr1, 1) = MR_r2;
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r1, 0) = MR_tempr1;
	MR_proceed();
	}
MR_def_label(dir__make_win32_dir_open_result_ok_5_0,94)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(dir_module54)
	MR_init_entry1(fn__dir__make_dir_open_result_eof_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__dir__make_dir_open_result_eof_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'make_dir_open_result_eof'/1 mode 0 */
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


MR_BEGIN_MODULE(dir_module55)
	MR_init_entry1(dir__make_dir_open_result_error_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__dir__make_dir_open_result_error_4_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'make_dir_open_result_error'/4 mode 0 */
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
#define	MR_PROC_LABEL	mercury__dir__make_dir_open_result_error_4_0
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_Integer, MR_r1, Error);
	Msg0 = (MR_String) (MR_Word) MR_string_const("dir.foldl2: opening directory failed: ", 38);
	MR_OBTAIN_GLOBAL_LOCK("make_err_msg");
{
#line 892 "io.opt"

    ML_maybe_make_err_msg(MR_TRUE, Error, Msg0, MR_ALLOC_ID, MR_FALSE, Msg);
;}
#line 6846 "dir.c"
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

MR_decl_entry(private_builtin__builtin_unify_pred_2_0);

MR_BEGIN_MODULE(dir_module56)
	MR_init_entry1(__Unify___dir__foldl_pred_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___dir__foldl_pred_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___dir__foldl_pred_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_r2 = MR_r3;
	MR_np_tailcall_ent(private_builtin__builtin_unify_pred_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(private_builtin__builtin_compare_pred_3_0);

MR_BEGIN_MODULE(dir_module57)
	MR_init_entry1(__Compare___dir__foldl_pred_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___dir__foldl_pred_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___dir__foldl_pred_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_r2 = MR_r3;
	MR_np_tailcall_ent(private_builtin__builtin_compare_pred_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___builtin__c_pointer_0_0);

MR_BEGIN_MODULE(dir_module58)
	MR_init_entry1(__Unify___dir__stream_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___dir__stream_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
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
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___dir__stream_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
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
	MR_init_entry1(dir__IntroducedFrom__pred__foldl2_process_dir__1359__1_13_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__dir__IntroducedFrom__pred__foldl2_process_dir__1359__1_13_0);
	MR_init_label1(dir__IntroducedFrom__pred__foldl2_process_dir__1359__1_13_0,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__pred__foldl2_process_dir__1359__1'/13 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(dir__IntroducedFrom__pred__foldl2_process_dir__1359__1_13_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_r9;
	MR_tempr2 = MR_r3;
	MR_r3 = MR_tempr1;
	MR_tempr3 = MR_r4;
	MR_r4 = MR_tempr2;
	MR_tempr4 = MR_r5;
	MR_r5 = MR_tempr3;
	MR_tempr5 = MR_r6;
	MR_r6 = MR_r8;
	MR_tempr6 = MR_r7;
	MR_r7 = MR_r10;
	MR_r8 = MR_tempr4;
	MR_r9 = MR_tempr5;
	MR_r10 = MR_tempr6;
	}
	MR_np_call_localret_ent(dir__foldl2_process_dir2_13_0,
		dir__IntroducedFrom__pred__foldl2_process_dir__1359__1_13_0_i2);
MR_def_label(dir__IntroducedFrom__pred__foldl2_process_dir__1359__1_13_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr1, 0) = MR_tfield(0, MR_r2, 0);
	MR_tfield(0, MR_tempr1, 1) = MR_tfield(0, MR_r2, 1);
	MR_tfield(0, MR_tempr1, 2) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(1);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(dir_module61)
	MR_init_entry1(fn__dir__list__map__ho8_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__dir__list__map__ho8_2_0);
	MR_init_label3(fn__dir__list__map__ho8_2_0,18,5,6)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'map__ho8'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__dir__list__map__ho8_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(fn__dir__list__map__ho8_2_0_i18);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(fn__dir__list__map__ho8_2_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_tfield(1, MR_r1, 1);
	MR_r1 = MR_tfield(1, MR_r1, 0);
	MR_r2 = (MR_Word) MR_TAG_COMMON(1,0,2);
	MR_np_call_localret_ent(fn__dir__expand_acc_2_0,
		fn__dir__list__map__ho8_2_0_i5);
MR_def_label(fn__dir__list__map__ho8_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_localcall_lab(fn__dir__list__map__ho8_2_0,
		fn__dir__list__map__ho8_2_0_i6);
MR_def_label(fn__dir__list__map__ho8_2_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(1);
	MR_tfield(1, MR_r2, 1) = MR_r1;
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(2);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(dir_module62)
	MR_init_entry1(dir__list__takewhile__ho10_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__dir__list__takewhile__ho10_4_0);
	MR_init_label4(dir__list__takewhile__ho10_4_0,30,8,10,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'takewhile__ho10'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(dir__list__takewhile__ho10_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(dir__list__takewhile__ho10_4_0_i30);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(dir__list__takewhile__ho10_4_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(3) = MR_tfield(1, MR_r1, 1);
	MR_r2 = MR_tfield(1, MR_r1, 0);
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(dir__is_directory_separator_1_0,
		dir__list__takewhile__ho10_4_0_i8);
MR_def_label(dir__list__takewhile__ho10_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(dir__list__takewhile__ho10_4_0_i4);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r1 = MR_sv(3);
	MR_np_localcall_lab(dir__list__takewhile__ho10_4_0,
		dir__list__takewhile__ho10_4_0_i10);
MR_def_label(dir__list__takewhile__ho10_4_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(4);
	}
MR_def_label(dir__list__takewhile__ho10_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = MR_tempr1;
	MR_decr_sp_and_return(4);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(dir_module63)
	MR_init_entry1(dir__list__takewhile__ho11_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__dir__list__takewhile__ho11_4_0);
	MR_init_label4(dir__list__takewhile__ho11_4_0,30,8,10,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'takewhile__ho11'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(dir__list__takewhile__ho11_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(dir__list__takewhile__ho11_4_0_i30);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(dir__list__takewhile__ho11_4_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(3) = MR_tfield(1, MR_r1, 1);
	MR_r2 = MR_tfield(1, MR_r1, 0);
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(dir__is_directory_separator_1_0,
		dir__list__takewhile__ho11_4_0_i8);
MR_def_label(dir__list__takewhile__ho11_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(dir__list__takewhile__ho11_4_0_i4);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r1 = MR_sv(3);
	MR_np_localcall_lab(dir__list__takewhile__ho11_4_0,
		dir__list__takewhile__ho11_4_0_i10);
MR_def_label(dir__list__takewhile__ho11_4_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(4);
	}
MR_def_label(dir__list__takewhile__ho11_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = MR_tempr1;
	MR_decr_sp_and_return(4);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(dir_module64)
	MR_init_entry1(dir__list__takewhile__ho12_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__dir__list__takewhile__ho12_4_0);
	MR_init_label4(dir__list__takewhile__ho12_4_0,30,8,10,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'takewhile__ho12'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(dir__list__takewhile__ho12_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(dir__list__takewhile__ho12_4_0_i30);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(dir__list__takewhile__ho12_4_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(3) = MR_tfield(1, MR_r1, 1);
	MR_r2 = MR_tfield(1, MR_r1, 0);
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(dir__is_directory_separator_1_0,
		dir__list__takewhile__ho12_4_0_i8);
MR_def_label(dir__list__takewhile__ho12_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(dir__list__takewhile__ho12_4_0_i4);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r1 = MR_sv(3);
	MR_np_localcall_lab(dir__list__takewhile__ho12_4_0,
		dir__list__takewhile__ho12_4_0_i10);
MR_def_label(dir__list__takewhile__ho12_4_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(4);
	}
MR_def_label(dir__list__takewhile__ho12_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = MR_tempr1;
	MR_decr_sp_and_return(4);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(dir_module65)
	MR_init_entry1(fn__dir__list__map__ho13_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__dir__list__map__ho13_2_0);
	MR_init_label3(fn__dir__list__map__ho13_2_0,17,4,5)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'map__ho13'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__dir__list__map__ho13_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(fn__dir__list__map__ho13_2_0_i17);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(fn__dir__list__map__ho13_2_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_tfield(1, MR_r1, 1);
	MR_r1 = MR_tfield(1, MR_r1, 0);
	MR_np_call_localret_ent(string__from_char_list_2_0,
		fn__dir__list__map__ho13_2_0_i4);
MR_def_label(fn__dir__list__map__ho13_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_localcall_lab(fn__dir__list__map__ho13_2_0,
		fn__dir__list__map__ho13_2_0_i5);
MR_def_label(fn__dir__list__map__ho13_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(1);
	MR_tfield(1, MR_r2, 1) = MR_r1;
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(2);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(dir_module66)
	MR_init_entry1(fn__f_100_105_114_95_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__f_100_105_114_95_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__func__ClassMethod_for_ops__op_table____ops__mercury_op_table__arity0______ops__max_priority_1__[1]_0'/2 mode 0 */
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


MR_BEGIN_MODULE(dir_module67)
	MR_init_entry1(fn__f_100_105_114_95_95_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_112_95_95_104_111_53_95_95_91_50_93_95_48_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__f_100_105_114_95_95_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_112_95_95_104_111_53_95_95_91_50_93_95_48_2_0);
	MR_init_label3(fn__f_100_105_114_95_95_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_112_95_95_104_111_53_95_95_91_50_93_95_48_2_0,17,4,5)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__func__map__ho5__[2]_0'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__f_100_105_114_95_95_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_112_95_95_104_111_53_95_95_91_50_93_95_48_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(fn__f_100_105_114_95_95_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_112_95_95_104_111_53_95_95_91_50_93_95_48_2_0_i17);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(fn__f_100_105_114_95_95_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_112_95_95_104_111_53_95_95_91_50_93_95_48_2_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_tfield(1, MR_r2, 1);
	MR_sv(2) = MR_r1;
	MR_r1 = (MR_Word) MR_CHAR_CTOR_ADDR;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tfield(1, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(list__append_3_1,
		fn__f_100_105_114_95_95_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_112_95_95_104_111_53_95_95_91_50_93_95_48_2_0_i4);
MR_def_label(fn__f_100_105_114_95_95_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_112_95_95_104_111_53_95_95_91_50_93_95_48_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	}
	MR_np_localcall_lab(fn__f_100_105_114_95_95_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_112_95_95_104_111_53_95_95_91_50_93_95_48_2_0,
		fn__f_100_105_114_95_95_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_112_95_95_104_111_53_95_95_91_50_93_95_48_2_0_i5);
MR_def_label(fn__f_100_105_114_95_95_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_112_95_95_104_111_53_95_95_91_50_93_95_48_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(1);
	MR_tfield(1, MR_r2, 1) = MR_r1;
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(dir_module68)
	MR_init_entry1(fn__f_100_105_114_95_95_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_112_95_95_104_111_54_95_95_91_50_93_95_48_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__f_100_105_114_95_95_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_112_95_95_104_111_54_95_95_91_50_93_95_48_2_0);
	MR_init_label3(fn__f_100_105_114_95_95_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_112_95_95_104_111_54_95_95_91_50_93_95_48_2_0,18,5,6)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__func__map__ho6__[2]_0'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__f_100_105_114_95_95_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_112_95_95_104_111_54_95_95_91_50_93_95_48_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(fn__f_100_105_114_95_95_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_112_95_95_104_111_54_95_95_91_50_93_95_48_2_0_i18);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(fn__f_100_105_114_95_95_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_112_95_95_104_111_54_95_95_91_50_93_95_48_2_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_sv(1) = MR_tfield(1, MR_r2, 1);
	MR_sv(2) = MR_r1;
	MR_r1 = (MR_Word) MR_CHAR_CTOR_ADDR;
	MR_r2 = MR_tfield(1, MR_r2, 0);
	}
	MR_np_call_localret_ent(list__append_3_1,
		fn__f_100_105_114_95_95_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_112_95_95_104_111_54_95_95_91_50_93_95_48_2_0_i5);
MR_def_label(fn__f_100_105_114_95_95_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_112_95_95_104_111_54_95_95_91_50_93_95_48_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	}
	MR_np_localcall_lab(fn__f_100_105_114_95_95_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_112_95_95_104_111_54_95_95_91_50_93_95_48_2_0,
		fn__f_100_105_114_95_95_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_112_95_95_104_111_54_95_95_91_50_93_95_48_2_0_i6);
MR_def_label(fn__f_100_105_114_95_95_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_112_95_95_104_111_54_95_95_91_50_93_95_48_2_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(1);
	MR_tfield(1, MR_r2, 1) = MR_r1;
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(dir_module69)
	MR_init_entry1(fn__f_100_105_114_95_95_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_112_95_95_104_111_55_95_95_91_50_93_95_48_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__f_100_105_114_95_95_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_112_95_95_104_111_55_95_95_91_50_93_95_48_2_0);
	MR_init_label3(fn__f_100_105_114_95_95_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_112_95_95_104_111_55_95_95_91_50_93_95_48_2_0,17,4,5)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__func__map__ho7__[2]_0'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__f_100_105_114_95_95_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_112_95_95_104_111_55_95_95_91_50_93_95_48_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(fn__f_100_105_114_95_95_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_112_95_95_104_111_55_95_95_91_50_93_95_48_2_0_i17);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(fn__f_100_105_114_95_95_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_112_95_95_104_111_55_95_95_91_50_93_95_48_2_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_tfield(1, MR_r2, 1);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_tfield(1, MR_r2, 0);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(fn__f_100_105_114_95_95_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_112_95_95_104_111_53_95_95_91_50_93_95_48_2_0,
		fn__f_100_105_114_95_95_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_112_95_95_104_111_55_95_95_91_50_93_95_48_2_0_i4);
MR_def_label(fn__f_100_105_114_95_95_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_112_95_95_104_111_55_95_95_91_50_93_95_48_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	}
	MR_np_localcall_lab(fn__f_100_105_114_95_95_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_112_95_95_104_111_55_95_95_91_50_93_95_48_2_0,
		fn__f_100_105_114_95_95_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_112_95_95_104_111_55_95_95_91_50_93_95_48_2_0_i5);
MR_def_label(fn__f_100_105_114_95_95_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_112_95_95_104_111_55_95_95_91_50_93_95_48_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(1);
	MR_tfield(1, MR_r2, 1) = MR_r1;
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(exception__get_determinism_2_2_0);
MR_decl_entry(exception__try_io_det_5_0);

MR_BEGIN_MODULE(dir_module70)
	MR_init_entry1(f_100_105_114_95_95_101_120_99_101_112_116_105_111_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_121_95_105_111_95_95_104_111_57_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_55_44_32_56_44_32_57_44_32_49_48_44_32_49_49_44_32_49_50_44_32_49_51_93_95_48_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__f_100_105_114_95_95_101_120_99_101_112_116_105_111_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_121_95_105_111_95_95_104_111_57_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_55_44_32_56_44_32_57_44_32_49_48_44_32_49_49_44_32_49_50_44_32_49_51_93_95_48_4_0);
	MR_init_label1(f_100_105_114_95_95_101_120_99_101_112_116_105_111_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_121_95_105_111_95_95_104_111_57_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_55_44_32_56_44_32_57_44_32_49_48_44_32_49_49_44_32_49_50_44_32_49_51_93_95_48_4_0,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__pred__try_io__ho9__[1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13]_0'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(f_100_105_114_95_95_101_120_99_101_112_116_105_111_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_121_95_105_111_95_95_104_111_57_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_55_44_32_56_44_32_57_44_32_49_48_44_32_49_49_44_32_49_50_44_32_49_51_93_95_48_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r1;
	MR_r2 = (MR_Word) MR_IO_CTOR_ADDR;
	MR_r3 = MR_sv(1);
	MR_np_call_localret_ent(exception__get_determinism_2_2_0,
		f_100_105_114_95_95_101_120_99_101_112_116_105_111_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_121_95_105_111_95_95_104_111_57_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_55_44_32_56_44_32_57_44_32_49_48_44_32_49_49_44_32_49_50_44_32_49_51_93_95_48_4_0_i2);
MR_def_label(f_100_105_114_95_95_101_120_99_101_112_116_105_111_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_121_95_105_111_95_95_104_111_57_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_55_44_32_56_44_32_57_44_32_49_48_44_32_49_49_44_32_49_50_44_32_49_51_93_95_48_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(1);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(exception__try_io_det_5_0);
	}
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
ML_make_win32_dir_open_result_ok(ML_DIR_STREAM Mercury__argument1, MR_String Mercury__argument2, MR_Word * Mercury__argument3);

void
ML_make_win32_dir_open_result_ok(ML_DIR_STREAM Mercury__argument1, MR_String Mercury__argument2, MR_Word * Mercury__argument3)
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
	MR_r2 = (MR_Word) Mercury__argument2;
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
}

/* suppress gcc -Wmissing-decls warnings */
void mercury__dir__init(void);
void mercury__dir__init_type_tables(void);
void mercury__dir__init_debugger(void);
#ifdef MR_DEEP_PROFILING
void mercury__dir__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp);
#endif
#ifdef MR_RECORD_TERM_SIZES
void mercury__dir__init_complexity_procs(void);
#endif
#ifdef MR_THREADSCOPE
void mercury__dir__init_threadscope_string_table(void);
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
		mercury_data_dir__type_ctor_info_foldl_pred_1,
		dir__foldl_pred_1_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_dir__type_ctor_info_stream_0,
		dir__stream_0_0);
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
		&mercury_data_dir__type_ctor_info_foldl_pred_1);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_dir__type_ctor_info_stream_0);
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

void mercury__dir__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp)
{
	MR_write_out_module_proc_reps_start(procrep_fp, &mercury_data__module_layout__dir);
	MR_write_out_module_proc_reps_end(procrep_fp);
}

#endif

#ifdef MR_RECORD_TERM_SIZES

void mercury__dir__init_complexity_procs(void)
{
}

#endif

#ifdef MR_THREADSCOPE

void mercury__dir__init_threadscope_string_table(void)
{
}

#endif

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;
