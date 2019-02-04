/*
** Automatically generated from `make.m'
** by the Mercury compiler,
** version rotd-2011-09-03, configured for x86_64-unknown-linux-gnu.
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
INIT mercury__make__init
ENDINIT
*/

#define MR_ALLOW_RESET
#include "mercury_imp.h"
#line 526 "../library/io.int"
#include "io.mh"

#line 28 "make.c"
#line 536 "../library/io.int"
#include "string.mh"

#line 32 "make.c"
#line 58 "../library/dir.int"
#include "dir.mh"

#line 36 "make.c"
#line 70 "../library/version_array.int"
#include "version_array.mh"

#line 40 "make.c"
#line 102 "make.util.int"
#include "make.util.mh"

#line 44 "make.c"
#line 31 "../library/bitmap.int2"
#include "bitmap.mh"

#line 48 "make.c"
#line 30 "../library/time.int2"
#include "time.mh"

#line 52 "make.c"
#line 39 "../mdbcomp/mdbcomp.rtti_access.int2"
#include "mdbcomp.rtti_access.mh"

#line 56 "make.c"
#line 33 "../library/array.int2"
#include "array.mh"

#line 60 "make.c"
#line 61 "make.c"
#include "make.mh"

#line 64 "make.c"
#line 65 "make.c"
#ifndef MAKE_DECL_GUARD
#define MAKE_DECL_GUARD

#line 69 "make.c"
#line 70 "make.c"

#endif
#line 73 "make.c"

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
	MR_Word * f1[3];
};
MR_STATIC_LINKAGE const struct mercury_type_3 mercury_common_3[];

struct mercury_type_4 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[3];
};
MR_STATIC_LINKAGE const struct mercury_type_4 mercury_common_4[];

struct mercury_type_5 {
	MR_Word * f1[2];
};
MR_STATIC_LINKAGE const struct mercury_type_5 mercury_common_5[];

struct mercury_type_6 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[7];
};
MR_STATIC_LINKAGE const struct mercury_type_6 mercury_common_6[];

struct mercury_type_7 {
	MR_Word * f1;
	MR_String f2;
};
MR_STATIC_LINKAGE const struct mercury_type_7 mercury_common_7[];

struct mercury_type_8 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[9];
};
MR_STATIC_LINKAGE const struct mercury_type_8 mercury_common_8[];

struct mercury_type_9 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[4];
};
MR_STATIC_LINKAGE const struct mercury_type_9 mercury_common_9[];

struct mercury_type_10 {
	MR_Word * f1;
};
MR_STATIC_LINKAGE const struct mercury_type_10 mercury_common_10[];

struct mercury_type_11 {
	MR_Integer f1;
};
MR_STATIC_LINKAGE const struct mercury_type_11 mercury_common_11[];

extern const MR_TypeCtorInfo_Struct
	mercury_data_make__type_ctor_info_c_header_type_0,
	mercury_data_make__type_ctor_info_compilation_task_type_0,
	mercury_data_make__type_ctor_info_dependency_file_index_map_0,
	mercury_data_make__type_ctor_info_dependency_status_0,
	mercury_data_make__type_ctor_info_file_timestamps_0,
	mercury_data_make__type_ctor_info_last_hash_0,
	mercury_data_make__type_ctor_info_linked_target_file_0,
	mercury_data_make__type_ctor_info_make_error_0,
	mercury_data_make__type_ctor_info_make_info_0,
	mercury_data_make__type_ctor_info_misc_target_type_0;

extern const MR_TypeCtorInfo_Struct
	mercury_data_make__type_ctor_info_module_compilation_task_type_0,
	mercury_data_make__type_ctor_info_module_index_map_0,
	mercury_data_make__type_ctor_info_module_target_type_0,
	mercury_data_make__type_ctor_info_rebuild_module_deps_0,
	mercury_data_make__type_ctor_info_target_file_0,
	mercury_data_make__type_ctor_info_target_type_0;
MR_decl_label1(make__IntroducedFrom__pred__make_process_args__309__1_1_0, 2)
MR_decl_label2(make__IntroducedFrom__pred__make_process_args__345__1_1_0, 3,1)
MR_decl_label10(make__classify_target_3_0, 3,4,6,9,2,13,12,18,20,22)
MR_decl_label2(make__classify_target_3_0, 24,27)
MR_decl_label10(make__classify_target_2_4_0, 3,1,9,8,13,14,12,18,19,17)
MR_decl_label10(make__classify_target_2_4_0, 23,24,26,28,30,22,36,34,43,45)
MR_decl_label10(make__classify_target_2_4_0, 42,47,109,51,49,54,48,40,60,64)
MR_decl_label5(make__classify_target_2_4_0, 67,70,76,74,93)
MR_decl_label10(make__compare_hash_file_6_0, 2,4,5,7,23,8,11,12,25,14)
MR_decl_label3(make__compare_hash_file_6_0, 15,16,18)
MR_decl_label2(make__is_consequential_option_2_0, 3,1)
MR_decl_label10(make__make_process_args_6_0, 4,6,10,9,3,2,14,18,20,22)
MR_decl_label10(make__make_process_args_6_0, 23,26,27,30,32,35,36,38,40,42)
MR_decl_label10(make__make_process_args_6_0, 43,44,45,46,47,48,51,69,16,15)
MR_decl_label6(make__make_target_7_0, 2,4,3,7,9,12)
MR_decl_label4(make__make_track_flags_files_7_0, 2,4,6,8)
MR_decl_label10(make__make_track_flags_files_2_9_0, 2,4,7,9,8,11,13,14,15,18)
MR_decl_label1(make__make_track_flags_files_2_9_0, 17)
MR_decl_label8(make__option_table_hash_4_0, 2,4,3,6,7,8,11,13)
MR_decl_label4(make__search_backwards_for_dot_3_0, 18,2,8,1)
MR_decl_label10(make__write_hash_file_5_0, 2,5,6,7,8,9,10,4,11,12)
MR_decl_label4(fn__make__get_executable_type_1_0, 2,4,5,6)
MR_decl_label5(__Unify___make__compilation_task_type_0_0, 5,7,24,9,1)
MR_decl_label4(__Unify___make__dependency_file_index_map_0_0, 4,6,8,1)
MR_decl_label3(__Unify___make__last_hash_0_0, 4,6,1)
MR_decl_label3(__Unify___make__linked_target_file_0_0, 4,6,1)
MR_decl_label4(__Unify___make__make_error_0_0, 5,21,9,1)
MR_decl_label10(__Unify___make__make_info_0_0, 5,8,11,13,15,17,19,21,23,25)
MR_decl_label7(__Unify___make__make_info_0_0, 27,29,31,33,36,38,1)
MR_decl_label8(__Unify___make__misc_target_type_0_0, 5,6,7,8,9,27,10,1)
MR_decl_label4(__Unify___make__module_index_map_0_0, 4,6,8,1)
MR_decl_label10(__Unify___make__module_target_type_0_0, 5,6,7,8,9,10,11,12,13,14)
MR_decl_label10(__Unify___make__module_target_type_0_0, 15,16,17,18,19,20,21,22,23,24)
MR_decl_label6(__Unify___make__module_target_type_0_0, 26,28,30,91,32,1)
MR_decl_label3(__Unify___make__target_file_0_0, 4,8,1)
MR_decl_label4(__Unify___make__target_type_0_0, 5,21,7,1)
MR_decl_label10(__Index___make__module_target_type_0_0, 3,4,5,6,7,8,9,10,11,12)
MR_decl_label10(__Index___make__module_target_type_0_0, 13,14,15,16,17,18,19,20,21,22)
MR_decl_label4(__Index___make__module_target_type_0_0, 23,24,25,26)
MR_decl_label10(__Compare___make__compilation_task_type_0_0, 3,2,9,7,14,5,18,21,19,16)
MR_decl_label9(__Compare___make__compilation_task_type_0_0, 29,30,71,27,34,55,35,56,133)
MR_decl_label5(__Compare___make__dependency_file_index_map_0_0, 3,2,5,9,29)
MR_decl_label4(__Compare___make__last_hash_0_0, 3,2,5,21)
MR_decl_label4(__Compare___make__linked_target_file_0_0, 3,2,5,21)
MR_decl_label9(__Compare___make__make_error_0_0, 3,2,7,5,34,12,10,16,17)
MR_decl_label10(__Compare___make__make_info_0_0, 3,2,6,11,16,20,24,28,32,36)
MR_decl_label10(__Compare___make__make_info_0_0, 40,44,48,52,56,60,64,68,73,207)
MR_decl_label10(__Compare___make__misc_target_type_0_0, 7,8,9,10,11,5,15,16,17,18)
MR_decl_label10(__Compare___make__misc_target_type_0_0, 19,13,23,24,25,26,27,21,31,32)
MR_decl_label10(__Compare___make__misc_target_type_0_0, 33,34,35,29,39,40,41,42,43,37)
MR_decl_label10(__Compare___make__misc_target_type_0_0, 47,48,49,50,51,153,45,54,55,56)
MR_decl_label5(__Compare___make__misc_target_type_0_0, 57,109,58,110,59)
MR_decl_label5(__Compare___make__module_index_map_0_0, 3,2,5,9,29)
MR_decl_label10(__Compare___make__module_target_type_0_0, 4,5,6,7,10,11,12,13,14,15)
MR_decl_label10(__Compare___make__module_target_type_0_0, 16,17,18,19,20,21,22,23,24,25)
MR_decl_label10(__Compare___make__module_target_type_0_0, 26,27,117,28,29,32,38,35,43,49)
MR_decl_label3(__Compare___make__module_target_type_0_0, 46,8,60)
MR_decl_label4(__Compare___make__target_file_0_0, 3,2,5,21)
MR_decl_label9(__Compare___make__target_type_0_0, 3,2,7,5,34,12,10,16,17)
MR_def_extern_entry(make__make_process_args_6_0)
MR_def_extern_entry(make__make_write_module_dep_file_4_0)
MR_def_extern_entry(fn__make__make_module_dep_file_extension_0_0)
MR_def_extern_entry(make__make_track_flags_files_7_0)
MR_def_extern_entry(make__make_target_7_0)
MR_def_extern_entry(make__search_backwards_for_dot_3_0)
MR_def_extern_entry(fn__make__get_executable_type_1_0)
MR_def_extern_entry(make__classify_target_3_0)
MR_def_extern_entry(make__classify_target_2_4_0)
MR_def_extern_entry(make__option_table_hash_4_0)
MR_def_extern_entry(make__compare_hash_file_6_0)
MR_def_extern_entry(make__write_hash_file_5_0)
MR_def_extern_entry(make__make_track_flags_files_2_9_0)
MR_def_extern_entry(make__is_consequential_option_2_0)
MR_def_extern_entry(__Unify___make__c_header_type_0_0)
MR_def_extern_entry(__Compare___make__c_header_type_0_0)
MR_def_extern_entry(__Unify___make__compilation_task_type_0_0)
MR_def_extern_entry(__Compare___make__compilation_task_type_0_0)
MR_def_extern_entry(__Unify___make__dependency_file_index_map_0_0)
MR_def_extern_entry(__Compare___make__dependency_file_index_map_0_0)
MR_def_extern_entry(__Unify___make__dependency_status_0_0)
MR_def_extern_entry(__Compare___make__dependency_status_0_0)
MR_def_extern_entry(__Unify___make__file_timestamps_0_0)
MR_def_extern_entry(__Compare___make__file_timestamps_0_0)
MR_def_extern_entry(__Unify___make__last_hash_0_0)
MR_def_extern_entry(__Compare___make__last_hash_0_0)
MR_def_extern_entry(__Unify___make__linked_target_file_0_0)
MR_def_extern_entry(__Compare___make__linked_target_file_0_0)
MR_def_extern_entry(__Unify___make__make_error_0_0)
MR_def_extern_entry(__Compare___make__make_error_0_0)
MR_def_extern_entry(__Unify___make__make_info_0_0)
MR_def_extern_entry(__Compare___make__make_info_0_0)
MR_def_extern_entry(__Unify___make__misc_target_type_0_0)
MR_def_extern_entry(__Compare___make__misc_target_type_0_0)
MR_def_extern_entry(__Unify___make__module_compilation_task_type_0_0)
MR_def_extern_entry(__Compare___make__module_compilation_task_type_0_0)
MR_def_extern_entry(__Unify___make__module_index_map_0_0)
MR_def_extern_entry(__Compare___make__module_index_map_0_0)
MR_def_extern_entry(__Unify___make__module_target_type_0_0)
MR_def_extern_entry(__Index___make__module_target_type_0_0)
MR_def_extern_entry(__Compare___make__module_target_type_0_0)
MR_def_extern_entry(__Unify___make__rebuild_module_deps_0_0)
MR_def_extern_entry(__Compare___make__rebuild_module_deps_0_0)
MR_def_extern_entry(__Unify___make__target_file_0_0)
MR_def_extern_entry(__Compare___make__target_file_0_0)
MR_def_extern_entry(__Unify___make__target_type_0_0)
MR_def_extern_entry(__Compare___make__target_type_0_0)
MR_decl_static(make__IntroducedFrom__pred__make_process_args__309__1_1_0)
MR_decl_static(make__IntroducedFrom__pred__make_process_args__319__1_3_0)
MR_decl_static(make__IntroducedFrom__pred__make_process_args__345__1_1_0)

static const MR_UserClosureId
mercury_data__closure_layout__make__make_process_args_6_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_string_0;
static const MR_UserClosureId
mercury_data__closure_layout__make__make_process_args_6_0_2;
static const MR_UserClosureId
mercury_data__closure_layout__make__make_process_args_6_0_3;
static const MR_UserClosureId
mercury_data__closure_layout__make__make_process_args_6_0_4;
static const MR_UserClosureId
mercury_data__closure_layout__make__make_process_args_6_0_8;
static const struct mercury_type_0 mercury_common_0[5] =
{
{
(MR_Word *) &mercury_data__closure_layout__make__make_process_args_6_0_1,
(MR_Word *) (MR_Integer) 0,
1,
MR_STRING_CTOR_ADDR
},
{
(MR_Word *) &mercury_data__closure_layout__make__make_process_args_6_0_2,
(MR_Word *) (MR_Integer) 0,
1,
MR_STRING_CTOR_ADDR
},
{
(MR_Word *) &mercury_data__closure_layout__make__make_process_args_6_0_3,
(MR_Word *) (MR_Integer) 0,
1,
MR_STRING_CTOR_ADDR
},
{
(MR_Word *) &mercury_data__closure_layout__make__make_process_args_6_0_4,
(MR_Word *) (MR_Integer) 0,
1,
MR_STRING_CTOR_ADDR
},
{
(MR_Word *) &mercury_data__closure_layout__make__make_process_args_6_0_8,
(MR_Word *) (MR_Integer) 0,
1,
MR_STRING_CTOR_ADDR
},
};

MR_decl_entry(make__util__module_name_hash_2_0);
MR_decl_entry(make__util__dependency_file_hash_2_0);
static const struct mercury_type_1 mercury_common_1[11] =
{
{
MR_COMMON(0,0),
MR_ENTRY_AP(make__IntroducedFrom__pred__make_process_args__309__1_1_0),
0
},
{
MR_COMMON(0,1),
MR_ENTRY_AP(make__IntroducedFrom__pred__make_process_args__309__1_1_0),
0
},
{
MR_COMMON(0,2),
MR_ENTRY_AP(make__IntroducedFrom__pred__make_process_args__309__1_1_0),
0
},
{
MR_COMMON(0,3),
MR_ENTRY_AP(make__IntroducedFrom__pred__make_process_args__309__1_1_0),
0
},
{
MR_COMMON(2,0),
MR_ENTRY_AP(make__util__module_name_hash_2_0),
0
},
{
MR_COMMON(2,1),
MR_ENTRY_AP(make__util__dependency_file_hash_2_0),
0
},
{
MR_COMMON(2,2),
MR_ENTRY_AP(make__util__dependency_file_hash_2_0),
0
},
{
MR_COMMON(0,4),
MR_ENTRY_AP(make__IntroducedFrom__pred__make_process_args__345__1_1_0),
0
},
{
MR_COMMON(6,0),
MR_ENTRY_AP(make__make_target_7_0),
0
},
{
MR_COMMON(4,1),
MR_ENTRY_AP(make__IntroducedFrom__pred__make_process_args__319__1_3_0),
0
},
{
MR_COMMON(8,0),
MR_ENTRY_AP(make__make_track_flags_files_2_9_0),
0
},
};

static const MR_UserClosureId
mercury_data__closure_layout__make__make_process_args_6_0_5;
extern const MR_TypeCtorInfo_Struct mercury_data_mdbcomp__prim_data__type_ctor_info_sym_name_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;
static const MR_UserClosureId
mercury_data__closure_layout__make__make_process_args_6_0_6;
extern const MR_TypeCtorInfo_Struct mercury_data_make__dependencies__type_ctor_info_dependency_file_0;
static const MR_UserClosureId
mercury_data__closure_layout__make__make_process_args_6_0_7;
static const MR_UserClosureId
mercury_data__closure_layout__make__option_table_hash_4_0_1;
static const struct mercury_type_2 mercury_common_2[4] =
{
{
(MR_Word *) &mercury_data__closure_layout__make__make_process_args_6_0_5,
(MR_Word *) (MR_Integer) 0,
2,
MR_CTOR0_ADDR(mdbcomp__prim_data, sym_name),
MR_INT_CTOR_ADDR
},
{
(MR_Word *) &mercury_data__closure_layout__make__make_process_args_6_0_6,
(MR_Word *) (MR_Integer) 0,
2,
MR_CTOR0_ADDR(make__dependencies, dependency_file),
MR_INT_CTOR_ADDR
},
{
(MR_Word *) &mercury_data__closure_layout__make__make_process_args_6_0_7,
(MR_Word *) (MR_Integer) 0,
2,
MR_CTOR0_ADDR(make__dependencies, dependency_file),
MR_INT_CTOR_ADDR
},
{
(MR_Word *) &mercury_data__closure_layout__make__option_table_hash_4_0_1,
(MR_Word *) (MR_Integer) 0,
2,
MR_COMMON(5,2),
MR_COMMON(3,2)
},
};

extern const MR_TypeCtorInfo_Struct mercury_data_pair__type_ctor_info_pair_2;
extern const MR_TypeCtorInfo_Struct mercury_data_mdbcomp__prim_data__type_ctor_info_sym_name_0;
extern const MR_TypeCtorInfo_Struct mercury_data_make__type_ctor_info_target_type_0;
extern const MR_TypeCtorInfo_Struct mercury_data_mdbcomp__prim_data__type_ctor_info_sym_name_0;
extern const MR_TypeCtorInfo_Struct mercury_data_libs__options__type_ctor_info_option_0;
extern const MR_TypeCtorInfo_Struct mercury_data_getopt_io__type_ctor_info_option_data_0;
extern const MR_TypeCtorInfo_Struct mercury_data_libs__options__type_ctor_info_option_0;
extern const MR_TypeCtorInfo_Struct mercury_data_getopt_io__type_ctor_info_option_data_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_string_0;
static const struct mercury_type_3 mercury_common_3[5] =
{
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
MR_CTOR0_ADDR(mdbcomp__prim_data, sym_name),
MR_CTOR0_ADDR(make, target_type)
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
MR_CTOR0_ADDR(libs__options, option),
MR_CTOR0_ADDR(getopt_io, option_data)
}
},
{
{
MR_CTOR_ADDR(pair, pair, 2),
MR_CTOR0_ADDR(mdbcomp__prim_data, sym_name),
MR_STRING_CTOR_ADDR
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__make__make_process_args_6_0_9;
extern const MR_TypeCtorInfo_Struct mercury_data_libs__globals__type_ctor_info_globals_0;
static const MR_UserClosureId
mercury_data__closure_layout__make__make_process_args_6_0_11;
extern const MR_TypeCtorInfo_Struct mercury_data_io__type_ctor_info_state_0;
static const struct mercury_type_4 mercury_common_4[2] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__make__make_process_args_6_0_9,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_CTOR0_ADDR(libs__globals, globals),
MR_STRING_CTOR_ADDR,
MR_COMMON(3,0)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__make__make_process_args_6_0_11,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_STRING_CTOR_ADDR,
MR_IO_CTOR_ADDR,
MR_IO_CTOR_ADDR
}
},
};

extern const MR_TypeCtorInfo_Struct mercury_data_maybe__type_ctor_info_maybe_1;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__module_imports__type_ctor_info_module_and_imports_0;
extern const MR_TypeCtorInfo_Struct mercury_data_maybe__type_ctor_info_maybe_error_1;
extern const MR_TypeCtorInfo_Struct mercury_data_libs__timestamp__type_ctor_info_timestamp_0;
extern const MR_TypeCtorInfo_Struct mercury_data_set_ordlist__type_ctor_info_set_ordlist_1;
extern const MR_TypeCtorInfo_Struct mercury_data_list__type_ctor_info_list_1;
static const struct mercury_type_5 mercury_common_5[4] =
{
{
{
MR_CTOR1_ADDR(maybe, maybe),
MR_CTOR0_ADDR(parse_tree__module_imports, module_and_imports)
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
MR_CTOR1_ADDR(set_ordlist, set_ordlist),
MR_CTOR0_ADDR(libs__options, option)
}
},
{
{
MR_LIST_CTOR_ADDR,
MR_TAG_COMMON(0,3,3)
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__make__make_process_args_6_0_10;
extern const MR_TypeCtorInfo_Struct mercury_data_bool__type_ctor_info_bool_0;
extern const MR_TypeCtorInfo_Struct mercury_data_make__type_ctor_info_make_info_0;
static const struct mercury_type_6 mercury_common_6[1] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__make__make_process_args_6_0_10,
(MR_Word *) (MR_Integer) 0
},
7,
{
MR_CTOR0_ADDR(libs__globals, globals),
MR_COMMON(3,0),
MR_BOOL_CTOR_ADDR,
MR_CTOR0_ADDR(make, make_info),
MR_CTOR0_ADDR(make, make_info),
MR_IO_CTOR_ADDR,
MR_IO_CTOR_ADDR
}
},
};

static const struct mercury_type_7 mercury_common_7[1] =
{
{
MR_tbmkword(0, 0),
MR_string_const("", 0)
},
};

static const MR_UserClosureId
mercury_data__closure_layout__make__make_track_flags_files_7_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_make__type_ctor_info_last_hash_0;
static const struct mercury_type_8 mercury_common_8[1] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__make__make_track_flags_files_7_0_1,
(MR_Word *) (MR_Integer) 0
},
9,
{
MR_CTOR0_ADDR(libs__globals, globals),
MR_CTOR0_ADDR(mdbcomp__prim_data, sym_name),
MR_BOOL_CTOR_ADDR,
MR_CTOR0_ADDR(make, last_hash),
MR_CTOR0_ADDR(make, last_hash),
MR_CTOR0_ADDR(make, make_info),
MR_CTOR0_ADDR(make, make_info),
MR_IO_CTOR_ADDR,
MR_IO_CTOR_ADDR
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__make__classify_target_3_0_1;
static const struct mercury_type_9 mercury_common_9[1] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__make__classify_target_3_0_1,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_CTOR0_ADDR(libs__globals, globals),
MR_STRING_CTOR_ADDR,
MR_STRING_CTOR_ADDR,
MR_COMMON(3,0)
}
},
};

static const struct mercury_type_10 mercury_common_10[7] =
{
{
MR_tbmkword(0, 3)
},
{
MR_tbmkword(0, 1)
},
{
MR_TAG_COMMON(1,10,1)
},
{
MR_tbmkword(0, 2)
},
{
MR_tbmkword(0, 0)
},
{
MR_tbmkword(0, 4)
},
{
MR_tbmkword(0, 5)
},
};

static const struct mercury_type_11 mercury_common_11[7] =
{
{
3
},
{
7
},
{
5
},
{
0
},
{
1
},
{
2
},
{
8
},
};

static const MR_EnumFunctorDesc mercury_data_make__enum_functor_desc_c_header_type_0_0 = {
	"header_mh",
	0
};

static const MR_EnumFunctorDesc mercury_data_make__enum_functor_desc_c_header_type_0_1 = {
	"header_mih",
	1
};

const MR_EnumFunctorDescPtr mercury_data_make__enum_value_ordered_c_header_type_0[] = {
	&mercury_data_make__enum_functor_desc_c_header_type_0_0,
	&mercury_data_make__enum_functor_desc_c_header_type_0_1
};

const MR_EnumFunctorDescPtr mercury_data_make__enum_name_ordered_c_header_type_0[] = {
	&mercury_data_make__enum_functor_desc_c_header_type_0_0,
	&mercury_data_make__enum_functor_desc_c_header_type_0_1
};

const MR_Integer mercury_data_make__functor_number_map_c_header_type_0[] = {
	0,
	1 };
	
const MR_TypeCtorInfo_Struct mercury_data_make__type_ctor_info_c_header_type_0 = {
	0,
	15,
	-1,
	MR_TYPECTOR_REP_ENUM,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___make__c_header_type_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___make__c_header_type_0_0)),
	"make",
	"c_header_type",
	{ (void *)mercury_data_make__enum_name_ordered_c_header_type_0 },
	{ (void *)mercury_data_make__enum_value_ordered_c_header_type_0 },
	2,
	4,
	mercury_data_make__functor_number_map_c_header_type_0
};
extern const MR_TypeCtorInfo_Struct mercury_data_make__type_ctor_info_module_compilation_task_type_0;

const MR_PseudoTypeInfo mercury_data_make__field_types_compilation_task_type_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_make__type_ctor_info_module_compilation_task_type_0
};

static const MR_DuFunctorDesc mercury_data_make__du_functor_desc_compilation_task_type_0_0 = {
	"process_module",
	1,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_make__field_types_compilation_task_type_0_0,
	NULL,
	NULL,
	NULL
};
extern const MR_TypeCtorInfo_Struct mercury_data_backend_libs__compile_target_code__type_ctor_info_pic_0;
extern const MR_TypeCtorInfo_Struct mercury_data_backend_libs__compile_target_code__type_ctor_info_pic_0;

const MR_PseudoTypeInfo mercury_data_make__field_types_compilation_task_type_0_1[] = {
	(MR_PseudoTypeInfo) &mercury_data_backend_libs__compile_target_code__type_ctor_info_pic_0
};

static const MR_DuFunctorDesc mercury_data_make__du_functor_desc_compilation_task_type_0_1 = {
	"target_code_to_object_code",
	1,
	0,
	MR_SECTAG_NONE,
	1,
	-1,
	1,
	(MR_PseudoTypeInfo *) mercury_data_make__field_types_compilation_task_type_0_1,
	NULL,
	NULL,
	NULL
};
extern const MR_TypeCtorInfo_Struct mercury_data_libs__globals__type_ctor_info_foreign_language_0;
extern const MR_TypeCtorInfo_Struct mercury_data_libs__globals__type_ctor_info_foreign_language_0;

const MR_PseudoTypeInfo mercury_data_make__field_types_compilation_task_type_0_2[] = {
	(MR_PseudoTypeInfo) &mercury_data_backend_libs__compile_target_code__type_ctor_info_pic_0,
	(MR_PseudoTypeInfo) &mercury_data_libs__globals__type_ctor_info_foreign_language_0
};

static const MR_DuFunctorDesc mercury_data_make__du_functor_desc_compilation_task_type_0_2 = {
	"foreign_code_to_object_code",
	2,
	0,
	MR_SECTAG_NONE,
	2,
	-1,
	2,
	(MR_PseudoTypeInfo *) mercury_data_make__field_types_compilation_task_type_0_2,
	NULL,
	NULL,
	NULL
};
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_string_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_string_0;

const MR_PseudoTypeInfo mercury_data_make__field_types_compilation_task_type_0_3[] = {
	(MR_PseudoTypeInfo) &mercury_data_backend_libs__compile_target_code__type_ctor_info_pic_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_string_0
};

static const MR_DuFunctorDesc mercury_data_make__du_functor_desc_compilation_task_type_0_3 = {
	"fact_table_code_to_object_code",
	2,
	0,
	MR_SECTAG_NONE,
	3,
	-1,
	3,
	(MR_PseudoTypeInfo *) mercury_data_make__field_types_compilation_task_type_0_3,
	NULL,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_make__du_stag_ordered_compilation_task_type_0_0[] = {
	&mercury_data_make__du_functor_desc_compilation_task_type_0_0

};

const MR_DuFunctorDescPtr mercury_data_make__du_stag_ordered_compilation_task_type_0_1[] = {
	&mercury_data_make__du_functor_desc_compilation_task_type_0_1

};

const MR_DuFunctorDescPtr mercury_data_make__du_stag_ordered_compilation_task_type_0_2[] = {
	&mercury_data_make__du_functor_desc_compilation_task_type_0_2

};

const MR_DuFunctorDescPtr mercury_data_make__du_stag_ordered_compilation_task_type_0_3[] = {
	&mercury_data_make__du_functor_desc_compilation_task_type_0_3

};

const MR_DuPtagLayout mercury_data_make__du_ptag_ordered_compilation_task_type_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_make__du_stag_ordered_compilation_task_type_0_0 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_make__du_stag_ordered_compilation_task_type_0_1 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_make__du_stag_ordered_compilation_task_type_0_2 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_make__du_stag_ordered_compilation_task_type_0_3 }

};

const MR_DuFunctorDescPtr mercury_data_make__du_name_ordered_compilation_task_type_0[] = {
	&mercury_data_make__du_functor_desc_compilation_task_type_0_3,
	&mercury_data_make__du_functor_desc_compilation_task_type_0_2,
	&mercury_data_make__du_functor_desc_compilation_task_type_0_0,
	&mercury_data_make__du_functor_desc_compilation_task_type_0_1
};

const MR_Integer mercury_data_make__functor_number_map_compilation_task_type_0[] = {
	2,
	3,
	1,
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_make__type_ctor_info_compilation_task_type_0 = {
	0,
	15,
	4,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___make__compilation_task_type_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___make__compilation_task_type_0_0)),
	"make",
	"compilation_task_type",
	{ (void *)mercury_data_make__du_name_ordered_compilation_task_type_0 },
	{ (void *)mercury_data_make__du_ptag_ordered_compilation_task_type_0 },
	4,
	4,
	mercury_data_make__functor_number_map_compilation_task_type_0
};
extern const MR_TypeCtorInfo_Struct mercury_data_version_hash_table__type_ctor_info_version_hash_table_2;
extern const MR_TypeCtorInfo_Struct mercury_data_make__dependencies__type_ctor_info_dependency_file_0;
extern const MR_TypeCtorInfo_Struct mercury_data_make__dependencies__type_ctor_info_dependency_file_index_0;
extern const MR_TypeCtorInfo_Struct mercury_data_make__dependencies__type_ctor_info_dependency_file_0;
extern const MR_TypeCtorInfo_Struct mercury_data_make__dependencies__type_ctor_info_dependency_file_index_0;

static const MR_FA_TypeInfo_Struct2 mercury_data_version_hash_table__ti_version_hash_table_2make__dependencies__type_ctor_info_dependency_file_0make__dependencies__type_ctor_info_dependency_file_index_0 = {
	&mercury_data_version_hash_table__type_ctor_info_version_hash_table_2,
{	(MR_TypeInfo) &mercury_data_make__dependencies__type_ctor_info_dependency_file_0,
	(MR_TypeInfo) &mercury_data_make__dependencies__type_ctor_info_dependency_file_index_0
}};
extern const MR_TypeCtorInfo_Struct mercury_data_version_array__type_ctor_info_version_array_1;

static const MR_FA_TypeInfo_Struct1 mercury_data_version_array__ti_version_array_1make__dependencies__type_ctor_info_dependency_file_0 = {
	&mercury_data_version_array__type_ctor_info_version_array_1,
{	(MR_TypeInfo) &mercury_data_make__dependencies__type_ctor_info_dependency_file_0
}};
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;

const MR_PseudoTypeInfo mercury_data_make__field_types_dependency_file_index_map_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_version_hash_table__ti_version_hash_table_2make__dependencies__type_ctor_info_dependency_file_0make__dependencies__type_ctor_info_dependency_file_index_0,
	(MR_PseudoTypeInfo) &mercury_data_version_array__ti_version_array_1make__dependencies__type_ctor_info_dependency_file_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0
};

const MR_ConstString mercury_data_make__field_names_dependency_file_index_map_0_0[] = {
	"dfim_forward_map",
	"dfim_reverse_map",
	"dfim_counter"
};

static const MR_DuFunctorDesc mercury_data_make__du_functor_desc_dependency_file_index_map_0_0 = {
	"dependency_file_index_map",
	3,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_make__field_types_dependency_file_index_map_0_0,
	mercury_data_make__field_names_dependency_file_index_map_0_0,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_make__du_stag_ordered_dependency_file_index_map_0_0[] = {
	&mercury_data_make__du_functor_desc_dependency_file_index_map_0_0

};

const MR_DuPtagLayout mercury_data_make__du_ptag_ordered_dependency_file_index_map_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_make__du_stag_ordered_dependency_file_index_map_0_0 }

};

const MR_DuFunctorDescPtr mercury_data_make__du_name_ordered_dependency_file_index_map_0[] = {
	&mercury_data_make__du_functor_desc_dependency_file_index_map_0_0
};

const MR_Integer mercury_data_make__functor_number_map_dependency_file_index_map_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_make__type_ctor_info_dependency_file_index_map_0 = {
	0,
	15,
	1,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___make__dependency_file_index_map_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___make__dependency_file_index_map_0_0)),
	"make",
	"dependency_file_index_map",
	{ (void *)mercury_data_make__du_name_ordered_dependency_file_index_map_0 },
	{ (void *)mercury_data_make__du_ptag_ordered_dependency_file_index_map_0 },
	1,
	4,
	mercury_data_make__functor_number_map_dependency_file_index_map_0
};

static const MR_EnumFunctorDesc mercury_data_make__enum_functor_desc_dependency_status_0_0 = {
	"deps_status_not_considered",
	0
};

static const MR_EnumFunctorDesc mercury_data_make__enum_functor_desc_dependency_status_0_1 = {
	"deps_status_being_built",
	1
};

static const MR_EnumFunctorDesc mercury_data_make__enum_functor_desc_dependency_status_0_2 = {
	"deps_status_up_to_date",
	2
};

static const MR_EnumFunctorDesc mercury_data_make__enum_functor_desc_dependency_status_0_3 = {
	"deps_status_error",
	3
};

const MR_EnumFunctorDescPtr mercury_data_make__enum_value_ordered_dependency_status_0[] = {
	&mercury_data_make__enum_functor_desc_dependency_status_0_0,
	&mercury_data_make__enum_functor_desc_dependency_status_0_1,
	&mercury_data_make__enum_functor_desc_dependency_status_0_2,
	&mercury_data_make__enum_functor_desc_dependency_status_0_3
};

const MR_EnumFunctorDescPtr mercury_data_make__enum_name_ordered_dependency_status_0[] = {
	&mercury_data_make__enum_functor_desc_dependency_status_0_1,
	&mercury_data_make__enum_functor_desc_dependency_status_0_3,
	&mercury_data_make__enum_functor_desc_dependency_status_0_0,
	&mercury_data_make__enum_functor_desc_dependency_status_0_2
};

const MR_Integer mercury_data_make__functor_number_map_dependency_status_0[] = {
	2,
	0,
	3,
	1 };
	
const MR_TypeCtorInfo_Struct mercury_data_make__type_ctor_info_dependency_status_0 = {
	0,
	15,
	-1,
	MR_TYPECTOR_REP_ENUM,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___make__dependency_status_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___make__dependency_status_0_0)),
	"make",
	"dependency_status",
	{ (void *)mercury_data_make__enum_name_ordered_dependency_status_0 },
	{ (void *)mercury_data_make__enum_value_ordered_dependency_status_0 },
	4,
	4,
	mercury_data_make__functor_number_map_dependency_status_0
};
extern const MR_TypeCtorInfo_Struct mercury_data_tree234__type_ctor_info_tree234_2;
extern const MR_TypeCtorInfo_Struct mercury_data_libs__timestamp__type_ctor_info_timestamp_0;

static const MR_FA_TypeInfo_Struct1 mercury_data_maybe__ti_maybe_error_1libs__timestamp__type_ctor_info_timestamp_0 = {
	&mercury_data_maybe__type_ctor_info_maybe_error_1,
{	(MR_TypeInfo) &mercury_data_libs__timestamp__type_ctor_info_timestamp_0
}};

static const MR_FA_TypeInfo_Struct2 mercury_data_tree234__ti_tree234_2builtin__type_ctor_info_string_0maybe__ti_maybe_error_1libs__timestamp__type_ctor_info_timestamp_0 = {
	&mercury_data_tree234__type_ctor_info_tree234_2,
{	(MR_TypeInfo) &mercury_data_builtin__type_ctor_info_string_0,
	(MR_TypeInfo) &mercury_data_maybe__ti_maybe_error_1libs__timestamp__type_ctor_info_timestamp_0
}};

const MR_TypeCtorInfo_Struct mercury_data_make__type_ctor_info_file_timestamps_0 = {
	0,
	15,
	-1,
	MR_TYPECTOR_REP_EQUIV_GROUND,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___make__file_timestamps_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___make__file_timestamps_0_0)),
	"make",
	"file_timestamps",
	{ 0 },
	{ (void *)&mercury_data_tree234__ti_tree234_2builtin__type_ctor_info_string_0maybe__ti_maybe_error_1libs__timestamp__type_ctor_info_timestamp_0 },
	-1,
	0,
	NULL
};

static const MR_FA_TypeInfo_Struct1 mercury_data_list__ti_list_1builtin__type_ctor_info_string_0 = {
	&mercury_data_list__type_ctor_info_list_1,
{	(MR_TypeInfo) &mercury_data_builtin__type_ctor_info_string_0
}};

const MR_PseudoTypeInfo mercury_data_make__field_types_last_hash_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_list__ti_list_1builtin__type_ctor_info_string_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_string_0
};

const MR_ConstString mercury_data_make__field_names_last_hash_0_0[] = {
	"lh_options",
	"lh_hash"
};

static const MR_DuFunctorDesc mercury_data_make__du_functor_desc_last_hash_0_0 = {
	"last_hash",
	2,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_make__field_types_last_hash_0_0,
	mercury_data_make__field_names_last_hash_0_0,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_make__du_stag_ordered_last_hash_0_0[] = {
	&mercury_data_make__du_functor_desc_last_hash_0_0

};

const MR_DuPtagLayout mercury_data_make__du_ptag_ordered_last_hash_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_make__du_stag_ordered_last_hash_0_0 }

};

const MR_DuFunctorDescPtr mercury_data_make__du_name_ordered_last_hash_0[] = {
	&mercury_data_make__du_functor_desc_last_hash_0_0
};

const MR_Integer mercury_data_make__functor_number_map_last_hash_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_make__type_ctor_info_last_hash_0 = {
	0,
	15,
	1,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___make__last_hash_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___make__last_hash_0_0)),
	"make",
	"last_hash",
	{ (void *)mercury_data_make__du_name_ordered_last_hash_0 },
	{ (void *)mercury_data_make__du_ptag_ordered_last_hash_0 },
	1,
	4,
	mercury_data_make__functor_number_map_last_hash_0
};
extern const MR_TypeCtorInfo_Struct mercury_data_backend_libs__compile_target_code__type_ctor_info_linked_target_type_0;
extern const MR_TypeCtorInfo_Struct mercury_data_backend_libs__compile_target_code__type_ctor_info_linked_target_type_0;

const MR_PseudoTypeInfo mercury_data_make__field_types_linked_target_file_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_mdbcomp__prim_data__type_ctor_info_sym_name_0,
	(MR_PseudoTypeInfo) &mercury_data_backend_libs__compile_target_code__type_ctor_info_linked_target_type_0
};

const MR_ConstString mercury_data_make__field_names_linked_target_file_0_0[] = {
	"linked_tf_name",
	"linked_tf_type"
};

static const MR_DuFunctorDesc mercury_data_make__du_functor_desc_linked_target_file_0_0 = {
	"linked_target_file",
	2,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_make__field_types_linked_target_file_0_0,
	mercury_data_make__field_names_linked_target_file_0_0,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_make__du_stag_ordered_linked_target_file_0_0[] = {
	&mercury_data_make__du_functor_desc_linked_target_file_0_0

};

const MR_DuPtagLayout mercury_data_make__du_ptag_ordered_linked_target_file_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_make__du_stag_ordered_linked_target_file_0_0 }

};

const MR_DuFunctorDescPtr mercury_data_make__du_name_ordered_linked_target_file_0[] = {
	&mercury_data_make__du_functor_desc_linked_target_file_0_0
};

const MR_Integer mercury_data_make__functor_number_map_linked_target_file_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_make__type_ctor_info_linked_target_file_0 = {
	0,
	15,
	1,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___make__linked_target_file_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___make__linked_target_file_0_0)),
	"make",
	"linked_target_file",
	{ (void *)mercury_data_make__du_name_ordered_linked_target_file_0 },
	{ (void *)mercury_data_make__du_ptag_ordered_linked_target_file_0 },
	1,
	4,
	mercury_data_make__functor_number_map_linked_target_file_0
};
extern const MR_TypeCtorInfo_Struct mercury_data_make__type_ctor_info_target_file_0;

const MR_PseudoTypeInfo mercury_data_make__field_types_make_error_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_make__type_ctor_info_target_file_0
};

static const MR_DuFunctorDesc mercury_data_make__du_functor_desc_make_error_0_0 = {
	"make_error_target",
	1,
	0,
	MR_SECTAG_NONE_DIRECT_ARG,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_make__field_types_make_error_0_0,
	NULL,
	NULL,
	NULL
};

const MR_PseudoTypeInfo mercury_data_make__field_types_make_error_0_1[] = {
	(MR_PseudoTypeInfo) &mercury_data_mdbcomp__prim_data__type_ctor_info_sym_name_0
};

static const MR_DuFunctorDesc mercury_data_make__du_functor_desc_make_error_0_1 = {
	"make_error_dependencies",
	1,
	0,
	MR_SECTAG_NONE,
	1,
	-1,
	1,
	(MR_PseudoTypeInfo *) mercury_data_make__field_types_make_error_0_1,
	NULL,
	NULL,
	NULL
};

const MR_PseudoTypeInfo mercury_data_make__field_types_make_error_0_2[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_string_0
};

static const MR_DuFunctorDesc mercury_data_make__du_functor_desc_make_error_0_2 = {
	"make_error_other",
	1,
	0,
	MR_SECTAG_NONE,
	2,
	-1,
	2,
	(MR_PseudoTypeInfo *) mercury_data_make__field_types_make_error_0_2,
	NULL,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_make__du_stag_ordered_make_error_0_0[] = {
	&mercury_data_make__du_functor_desc_make_error_0_0

};

const MR_DuFunctorDescPtr mercury_data_make__du_stag_ordered_make_error_0_1[] = {
	&mercury_data_make__du_functor_desc_make_error_0_1

};

const MR_DuFunctorDescPtr mercury_data_make__du_stag_ordered_make_error_0_2[] = {
	&mercury_data_make__du_functor_desc_make_error_0_2

};

const MR_DuPtagLayout mercury_data_make__du_ptag_ordered_make_error_0[] = {
	{ 1, MR_SECTAG_NONE_DIRECT_ARG,
	mercury_data_make__du_stag_ordered_make_error_0_0 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_make__du_stag_ordered_make_error_0_1 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_make__du_stag_ordered_make_error_0_2 }

};

const MR_DuFunctorDescPtr mercury_data_make__du_name_ordered_make_error_0[] = {
	&mercury_data_make__du_functor_desc_make_error_0_1,
	&mercury_data_make__du_functor_desc_make_error_0_2,
	&mercury_data_make__du_functor_desc_make_error_0_0
};

const MR_Integer mercury_data_make__functor_number_map_make_error_0[] = {
	2,
	0,
	1 };
	
const MR_TypeCtorInfo_Struct mercury_data_make__type_ctor_info_make_error_0 = {
	0,
	15,
	3,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___make__make_error_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___make__make_error_0_0)),
	"make",
	"make_error",
	{ (void *)mercury_data_make__du_name_ordered_make_error_0 },
	{ (void *)mercury_data_make__du_ptag_ordered_make_error_0 },
	3,
	4,
	mercury_data_make__functor_number_map_make_error_0
};
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__module_imports__type_ctor_info_module_and_imports_0;

static const MR_FA_TypeInfo_Struct1 mercury_data_maybe__ti_maybe_1parse_tree__module_imports__type_ctor_info_module_and_imports_0 = {
	&mercury_data_maybe__type_ctor_info_maybe_1,
{	(MR_TypeInfo) &mercury_data_parse_tree__module_imports__type_ctor_info_module_and_imports_0
}};

static const MR_FA_TypeInfo_Struct2 mercury_data_tree234__ti_tree234_2mdbcomp__prim_data__type_ctor_info_sym_name_0maybe__ti_maybe_1parse_tree__module_imports__type_ctor_info_module_and_imports_0 = {
	&mercury_data_tree234__type_ctor_info_tree234_2,
{	(MR_TypeInfo) &mercury_data_mdbcomp__prim_data__type_ctor_info_sym_name_0,
	(MR_TypeInfo) &mercury_data_maybe__ti_maybe_1parse_tree__module_imports__type_ctor_info_module_and_imports_0
}};

static const MR_FA_TypeInfo_Struct2 mercury_data_pair__ti_pair_2mdbcomp__prim_data__type_ctor_info_sym_name_0builtin__type_ctor_info_string_0 = {
	&mercury_data_pair__type_ctor_info_pair_2,
{	(MR_TypeInfo) &mercury_data_mdbcomp__prim_data__type_ctor_info_sym_name_0,
	(MR_TypeInfo) &mercury_data_builtin__type_ctor_info_string_0
}};

static const MR_FA_TypeInfo_Struct2 mercury_data_tree234__ti_tree234_2pair__ti_pair_2mdbcomp__prim_data__type_ctor_info_sym_name_0builtin__type_ctor_info_string_0builtin__type_ctor_info_string_0 = {
	&mercury_data_tree234__type_ctor_info_tree234_2,
{	(MR_TypeInfo) &mercury_data_pair__ti_pair_2mdbcomp__prim_data__type_ctor_info_sym_name_0builtin__type_ctor_info_string_0,
	(MR_TypeInfo) &mercury_data_builtin__type_ctor_info_string_0
}};
extern const MR_TypeCtorInfo_Struct mercury_data_make__options_file__type_ctor_info_options_variable_value_0;
extern const MR_TypeCtorInfo_Struct mercury_data_make__options_file__type_ctor_info_options_variable_value_0;

static const MR_FA_TypeInfo_Struct2 mercury_data_tree234__ti_tree234_2builtin__type_ctor_info_string_0make__options_file__type_ctor_info_options_variable_value_0 = {
	&mercury_data_tree234__type_ctor_info_tree234_2,
{	(MR_TypeInfo) &mercury_data_builtin__type_ctor_info_string_0,
	(MR_TypeInfo) &mercury_data_make__options_file__type_ctor_info_options_variable_value_0
}};
extern const MR_TypeCtorInfo_Struct mercury_data_make__type_ctor_info_dependency_status_0;

static const MR_FA_TypeInfo_Struct2 mercury_data_version_hash_table__ti_version_hash_table_2make__dependencies__type_ctor_info_dependency_file_0make__type_ctor_info_dependency_status_0 = {
	&mercury_data_version_hash_table__type_ctor_info_version_hash_table_2,
{	(MR_TypeInfo) &mercury_data_make__dependencies__type_ctor_info_dependency_file_0,
	(MR_TypeInfo) &mercury_data_make__type_ctor_info_dependency_status_0
}};
extern const MR_TypeCtorInfo_Struct mercury_data_make__dependencies__type_ctor_info_module_index_0;
extern const MR_TypeCtorInfo_Struct mercury_data_make__dependencies__type_ctor_info_deps_result_1;
extern const MR_TypeCtorInfo_Struct mercury_data_make__dependencies__type_ctor_info_module_index_0;

static const MR_FA_TypeInfo_Struct1 mercury_data_make__dependencies__ti_deps_result_1make__dependencies__type_ctor_info_module_index_0 = {
	&mercury_data_make__dependencies__type_ctor_info_deps_result_1,
{	(MR_TypeInfo) &mercury_data_make__dependencies__type_ctor_info_module_index_0
}};

static const MR_FA_TypeInfo_Struct2 mercury_data_tree234__ti_tree234_2make__dependencies__type_ctor_info_module_index_0make__dependencies__ti_deps_result_1make__dependencies__type_ctor_info_module_index_0 = {
	&mercury_data_tree234__type_ctor_info_tree234_2,
{	(MR_TypeInfo) &mercury_data_make__dependencies__type_ctor_info_module_index_0,
	(MR_TypeInfo) &mercury_data_make__dependencies__ti_deps_result_1make__dependencies__type_ctor_info_module_index_0
}};
extern const MR_TypeCtorInfo_Struct mercury_data_make__dependencies__type_ctor_info_transitive_dependencies_root_0;
extern const MR_TypeCtorInfo_Struct mercury_data_make__dependencies__type_ctor_info_transitive_dependencies_root_0;

static const MR_FA_TypeInfo_Struct2 mercury_data_tree234__ti_tree234_2make__dependencies__type_ctor_info_transitive_dependencies_root_0make__dependencies__ti_deps_result_1make__dependencies__type_ctor_info_module_index_0 = {
	&mercury_data_tree234__type_ctor_info_tree234_2,
{	(MR_TypeInfo) &mercury_data_make__dependencies__type_ctor_info_transitive_dependencies_root_0,
	(MR_TypeInfo) &mercury_data_make__dependencies__ti_deps_result_1make__dependencies__type_ctor_info_module_index_0
}};
extern const MR_TypeCtorInfo_Struct mercury_data_bool__type_ctor_info_bool_0;

static const MR_FA_TypeInfo_Struct1 mercury_data_set_ordlist__ti_set_ordlist_1mdbcomp__prim_data__type_ctor_info_sym_name_0 = {
	&mercury_data_set_ordlist__type_ctor_info_set_ordlist_1,
{	(MR_TypeInfo) &mercury_data_mdbcomp__prim_data__type_ctor_info_sym_name_0
}};

static const MR_FA_TypeInfo_Struct1 mercury_data_maybe__ti_maybe_1mdbcomp__prim_data__type_ctor_info_sym_name_0 = {
	&mercury_data_maybe__type_ctor_info_maybe_1,
{	(MR_TypeInfo) &mercury_data_mdbcomp__prim_data__type_ctor_info_sym_name_0
}};

static const MR_FA_TypeInfo_Struct2 mercury_data_pair__ti_pair_2mdbcomp__prim_data__type_ctor_info_sym_name_0make__type_ctor_info_target_type_0 = {
	&mercury_data_pair__type_ctor_info_pair_2,
{	(MR_TypeInfo) &mercury_data_mdbcomp__prim_data__type_ctor_info_sym_name_0,
	(MR_TypeInfo) &mercury_data_make__type_ctor_info_target_type_0
}};

static const MR_FA_TypeInfo_Struct1 mercury_data_set_ordlist__ti_set_ordlist_1pair__ti_pair_2mdbcomp__prim_data__type_ctor_info_sym_name_0make__type_ctor_info_target_type_0 = {
	&mercury_data_set_ordlist__type_ctor_info_set_ordlist_1,
{	(MR_TypeInfo) &mercury_data_pair__ti_pair_2mdbcomp__prim_data__type_ctor_info_sym_name_0make__type_ctor_info_target_type_0
}};
extern const MR_TypeCtorInfo_Struct mercury_data_make__type_ctor_info_module_index_map_0;
extern const MR_TypeCtorInfo_Struct mercury_data_make__type_ctor_info_dependency_file_index_map_0;
extern const MR_TypeCtorInfo_Struct mercury_data_make__type_ctor_info_rebuild_module_deps_0;
extern const MR_TypeCtorInfo_Struct mercury_data_bool__type_ctor_info_bool_0;

const MR_PseudoTypeInfo mercury_data_make__field_types_make_info_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_tree234__ti_tree234_2mdbcomp__prim_data__type_ctor_info_sym_name_0maybe__ti_maybe_1parse_tree__module_imports__type_ctor_info_module_and_imports_0,
	(MR_PseudoTypeInfo) &mercury_data_tree234__ti_tree234_2builtin__type_ctor_info_string_0maybe__ti_maybe_error_1libs__timestamp__type_ctor_info_timestamp_0,
	(MR_PseudoTypeInfo) &mercury_data_tree234__ti_tree234_2pair__ti_pair_2mdbcomp__prim_data__type_ctor_info_sym_name_0builtin__type_ctor_info_string_0builtin__type_ctor_info_string_0,
	(MR_PseudoTypeInfo) &mercury_data_list__ti_list_1builtin__type_ctor_info_string_0,
	(MR_PseudoTypeInfo) &mercury_data_tree234__ti_tree234_2builtin__type_ctor_info_string_0make__options_file__type_ctor_info_options_variable_value_0,
	(MR_PseudoTypeInfo) &mercury_data_make__type_ctor_info_module_index_map_0,
	(MR_PseudoTypeInfo) &mercury_data_make__type_ctor_info_dependency_file_index_map_0,
	(MR_PseudoTypeInfo) &mercury_data_version_hash_table__ti_version_hash_table_2make__dependencies__type_ctor_info_dependency_file_0make__type_ctor_info_dependency_status_0,
	(MR_PseudoTypeInfo) &mercury_data_tree234__ti_tree234_2make__dependencies__type_ctor_info_module_index_0make__dependencies__ti_deps_result_1make__dependencies__type_ctor_info_module_index_0,
	(MR_PseudoTypeInfo) &mercury_data_tree234__ti_tree234_2make__dependencies__type_ctor_info_module_index_0make__dependencies__ti_deps_result_1make__dependencies__type_ctor_info_module_index_0,
	(MR_PseudoTypeInfo) &mercury_data_tree234__ti_tree234_2make__dependencies__type_ctor_info_transitive_dependencies_root_0make__dependencies__ti_deps_result_1make__dependencies__type_ctor_info_module_index_0,
	(MR_PseudoTypeInfo) &mercury_data_tree234__ti_tree234_2make__dependencies__type_ctor_info_module_index_0make__dependencies__ti_deps_result_1make__dependencies__type_ctor_info_module_index_0,
	(MR_PseudoTypeInfo) &mercury_data_make__type_ctor_info_rebuild_module_deps_0,
	(MR_PseudoTypeInfo) &mercury_data_bool__type_ctor_info_bool_0,
	(MR_PseudoTypeInfo) &mercury_data_set_ordlist__ti_set_ordlist_1mdbcomp__prim_data__type_ctor_info_sym_name_0,
	(MR_PseudoTypeInfo) &mercury_data_maybe__ti_maybe_1mdbcomp__prim_data__type_ctor_info_sym_name_0,
	(MR_PseudoTypeInfo) &mercury_data_set_ordlist__ti_set_ordlist_1pair__ti_pair_2mdbcomp__prim_data__type_ctor_info_sym_name_0make__type_ctor_info_target_type_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0
};

const MR_ConstString mercury_data_make__field_names_make_info_0_0[] = {
	"module_dependencies",
	"file_timestamps",
	"search_file_name_cache",
	"option_args",
	"options_variables",
	"module_index_map",
	"dep_file_index_map",
	"dependency_status",
	"cached_direct_imports",
	"cached_non_intermod_direct_imports",
	"cached_transitive_dependencies",
	"cached_foreign_imports",
	"rebuild_module_deps",
	"keep_going",
	"error_file_modules",
	"importing_module",
	"command_line_targets",
	"reanalysis_passes"
};

static const MR_DuFunctorDesc mercury_data_make__du_functor_desc_make_info_0_0 = {
	"make_info",
	18,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_make__field_types_make_info_0_0,
	mercury_data_make__field_names_make_info_0_0,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_make__du_stag_ordered_make_info_0_0[] = {
	&mercury_data_make__du_functor_desc_make_info_0_0

};

const MR_DuPtagLayout mercury_data_make__du_ptag_ordered_make_info_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_make__du_stag_ordered_make_info_0_0 }

};

const MR_DuFunctorDescPtr mercury_data_make__du_name_ordered_make_info_0[] = {
	&mercury_data_make__du_functor_desc_make_info_0_0
};

const MR_Integer mercury_data_make__functor_number_map_make_info_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_make__type_ctor_info_make_info_0 = {
	0,
	15,
	1,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___make__make_info_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___make__make_info_0_0)),
	"make",
	"make_info",
	{ (void *)mercury_data_make__du_name_ordered_make_info_0 },
	{ (void *)mercury_data_make__du_ptag_ordered_make_info_0 },
	1,
	4,
	mercury_data_make__functor_number_map_make_info_0
};

static const MR_DuFunctorDesc mercury_data_make__du_functor_desc_misc_target_type_0_0 = {
	"misc_target_clean",
	0,
	0,
	MR_SECTAG_LOCAL,
	0,
	0,
	0,
	(MR_PseudoTypeInfo *) NULL,
	NULL,
	NULL,
	NULL
};

static const MR_DuFunctorDesc mercury_data_make__du_functor_desc_misc_target_type_0_1 = {
	"misc_target_realclean",
	0,
	0,
	MR_SECTAG_LOCAL,
	0,
	1,
	1,
	(MR_PseudoTypeInfo *) NULL,
	NULL,
	NULL,
	NULL
};
extern const MR_TypeCtorInfo_Struct mercury_data_make__type_ctor_info_module_target_type_0;

const MR_PseudoTypeInfo mercury_data_make__field_types_misc_target_type_0_2[] = {
	(MR_PseudoTypeInfo) &mercury_data_make__type_ctor_info_module_target_type_0
};

static const MR_DuFunctorDesc mercury_data_make__du_functor_desc_misc_target_type_0_2 = {
	"misc_target_build_all",
	1,
	0,
	MR_SECTAG_NONE,
	1,
	-1,
	2,
	(MR_PseudoTypeInfo *) mercury_data_make__field_types_misc_target_type_0_2,
	NULL,
	NULL,
	NULL
};

static const MR_DuFunctorDesc mercury_data_make__du_functor_desc_misc_target_type_0_3 = {
	"misc_target_build_analyses",
	0,
	0,
	MR_SECTAG_LOCAL,
	0,
	2,
	3,
	(MR_PseudoTypeInfo *) NULL,
	NULL,
	NULL,
	NULL
};

static const MR_DuFunctorDesc mercury_data_make__du_functor_desc_misc_target_type_0_4 = {
	"misc_target_build_library",
	0,
	0,
	MR_SECTAG_LOCAL,
	0,
	3,
	4,
	(MR_PseudoTypeInfo *) NULL,
	NULL,
	NULL,
	NULL
};

static const MR_DuFunctorDesc mercury_data_make__du_functor_desc_misc_target_type_0_5 = {
	"misc_target_install_library",
	0,
	0,
	MR_SECTAG_LOCAL,
	0,
	4,
	5,
	(MR_PseudoTypeInfo *) NULL,
	NULL,
	NULL,
	NULL
};

static const MR_DuFunctorDesc mercury_data_make__du_functor_desc_misc_target_type_0_6 = {
	"misc_target_build_xml_docs",
	0,
	0,
	MR_SECTAG_LOCAL,
	0,
	5,
	6,
	(MR_PseudoTypeInfo *) NULL,
	NULL,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_make__du_stag_ordered_misc_target_type_0_0[] = {
	&mercury_data_make__du_functor_desc_misc_target_type_0_0,
	&mercury_data_make__du_functor_desc_misc_target_type_0_1,
	&mercury_data_make__du_functor_desc_misc_target_type_0_3,
	&mercury_data_make__du_functor_desc_misc_target_type_0_4,
	&mercury_data_make__du_functor_desc_misc_target_type_0_5,
	&mercury_data_make__du_functor_desc_misc_target_type_0_6

};

const MR_DuFunctorDescPtr mercury_data_make__du_stag_ordered_misc_target_type_0_1[] = {
	&mercury_data_make__du_functor_desc_misc_target_type_0_2

};

const MR_DuPtagLayout mercury_data_make__du_ptag_ordered_misc_target_type_0[] = {
	{ 6, MR_SECTAG_LOCAL,
	mercury_data_make__du_stag_ordered_misc_target_type_0_0 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_make__du_stag_ordered_misc_target_type_0_1 }

};

const MR_DuFunctorDescPtr mercury_data_make__du_name_ordered_misc_target_type_0[] = {
	&mercury_data_make__du_functor_desc_misc_target_type_0_2,
	&mercury_data_make__du_functor_desc_misc_target_type_0_3,
	&mercury_data_make__du_functor_desc_misc_target_type_0_4,
	&mercury_data_make__du_functor_desc_misc_target_type_0_6,
	&mercury_data_make__du_functor_desc_misc_target_type_0_0,
	&mercury_data_make__du_functor_desc_misc_target_type_0_5,
	&mercury_data_make__du_functor_desc_misc_target_type_0_1
};

const MR_Integer mercury_data_make__functor_number_map_misc_target_type_0[] = {
	4,
	6,
	0,
	1,
	2,
	5,
	3 };
	
const MR_TypeCtorInfo_Struct mercury_data_make__type_ctor_info_misc_target_type_0 = {
	0,
	15,
	2,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___make__misc_target_type_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___make__misc_target_type_0_0)),
	"make",
	"misc_target_type",
	{ (void *)mercury_data_make__du_name_ordered_misc_target_type_0 },
	{ (void *)mercury_data_make__du_ptag_ordered_misc_target_type_0 },
	7,
	4,
	mercury_data_make__functor_number_map_misc_target_type_0
};

static const MR_EnumFunctorDesc mercury_data_make__enum_functor_desc_module_compilation_task_type_0_0 = {
	"task_errorcheck",
	0
};

static const MR_EnumFunctorDesc mercury_data_make__enum_functor_desc_module_compilation_task_type_0_1 = {
	"task_make_short_interface",
	1
};

static const MR_EnumFunctorDesc mercury_data_make__enum_functor_desc_module_compilation_task_type_0_2 = {
	"task_make_interface",
	2
};

static const MR_EnumFunctorDesc mercury_data_make__enum_functor_desc_module_compilation_task_type_0_3 = {
	"task_make_private_interface",
	3
};

static const MR_EnumFunctorDesc mercury_data_make__enum_functor_desc_module_compilation_task_type_0_4 = {
	"task_make_optimization_interface",
	4
};

static const MR_EnumFunctorDesc mercury_data_make__enum_functor_desc_module_compilation_task_type_0_5 = {
	"task_make_analysis_registry",
	5
};

static const MR_EnumFunctorDesc mercury_data_make__enum_functor_desc_module_compilation_task_type_0_6 = {
	"task_compile_to_target_code",
	6
};

static const MR_EnumFunctorDesc mercury_data_make__enum_functor_desc_module_compilation_task_type_0_7 = {
	"task_make_xml_doc",
	7
};

const MR_EnumFunctorDescPtr mercury_data_make__enum_value_ordered_module_compilation_task_type_0[] = {
	&mercury_data_make__enum_functor_desc_module_compilation_task_type_0_0,
	&mercury_data_make__enum_functor_desc_module_compilation_task_type_0_1,
	&mercury_data_make__enum_functor_desc_module_compilation_task_type_0_2,
	&mercury_data_make__enum_functor_desc_module_compilation_task_type_0_3,
	&mercury_data_make__enum_functor_desc_module_compilation_task_type_0_4,
	&mercury_data_make__enum_functor_desc_module_compilation_task_type_0_5,
	&mercury_data_make__enum_functor_desc_module_compilation_task_type_0_6,
	&mercury_data_make__enum_functor_desc_module_compilation_task_type_0_7
};

const MR_EnumFunctorDescPtr mercury_data_make__enum_name_ordered_module_compilation_task_type_0[] = {
	&mercury_data_make__enum_functor_desc_module_compilation_task_type_0_6,
	&mercury_data_make__enum_functor_desc_module_compilation_task_type_0_0,
	&mercury_data_make__enum_functor_desc_module_compilation_task_type_0_5,
	&mercury_data_make__enum_functor_desc_module_compilation_task_type_0_2,
	&mercury_data_make__enum_functor_desc_module_compilation_task_type_0_4,
	&mercury_data_make__enum_functor_desc_module_compilation_task_type_0_3,
	&mercury_data_make__enum_functor_desc_module_compilation_task_type_0_1,
	&mercury_data_make__enum_functor_desc_module_compilation_task_type_0_7
};

const MR_Integer mercury_data_make__functor_number_map_module_compilation_task_type_0[] = {
	1,
	6,
	3,
	5,
	4,
	2,
	0,
	7 };
	
const MR_TypeCtorInfo_Struct mercury_data_make__type_ctor_info_module_compilation_task_type_0 = {
	0,
	15,
	-1,
	MR_TYPECTOR_REP_ENUM,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___make__module_compilation_task_type_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___make__module_compilation_task_type_0_0)),
	"make",
	"module_compilation_task_type",
	{ (void *)mercury_data_make__enum_name_ordered_module_compilation_task_type_0 },
	{ (void *)mercury_data_make__enum_value_ordered_module_compilation_task_type_0 },
	8,
	4,
	mercury_data_make__functor_number_map_module_compilation_task_type_0
};

static const MR_FA_TypeInfo_Struct2 mercury_data_version_hash_table__ti_version_hash_table_2mdbcomp__prim_data__type_ctor_info_sym_name_0make__dependencies__type_ctor_info_module_index_0 = {
	&mercury_data_version_hash_table__type_ctor_info_version_hash_table_2,
{	(MR_TypeInfo) &mercury_data_mdbcomp__prim_data__type_ctor_info_sym_name_0,
	(MR_TypeInfo) &mercury_data_make__dependencies__type_ctor_info_module_index_0
}};

static const MR_FA_TypeInfo_Struct1 mercury_data_version_array__ti_version_array_1mdbcomp__prim_data__type_ctor_info_sym_name_0 = {
	&mercury_data_version_array__type_ctor_info_version_array_1,
{	(MR_TypeInfo) &mercury_data_mdbcomp__prim_data__type_ctor_info_sym_name_0
}};

const MR_PseudoTypeInfo mercury_data_make__field_types_module_index_map_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_version_hash_table__ti_version_hash_table_2mdbcomp__prim_data__type_ctor_info_sym_name_0make__dependencies__type_ctor_info_module_index_0,
	(MR_PseudoTypeInfo) &mercury_data_version_array__ti_version_array_1mdbcomp__prim_data__type_ctor_info_sym_name_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0
};

const MR_ConstString mercury_data_make__field_names_module_index_map_0_0[] = {
	"mim_forward_map",
	"mim_reverse_map",
	"mim_counter"
};

static const MR_DuFunctorDesc mercury_data_make__du_functor_desc_module_index_map_0_0 = {
	"module_index_map",
	3,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_make__field_types_module_index_map_0_0,
	mercury_data_make__field_names_module_index_map_0_0,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_make__du_stag_ordered_module_index_map_0_0[] = {
	&mercury_data_make__du_functor_desc_module_index_map_0_0

};

const MR_DuPtagLayout mercury_data_make__du_ptag_ordered_module_index_map_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_make__du_stag_ordered_module_index_map_0_0 }

};

const MR_DuFunctorDescPtr mercury_data_make__du_name_ordered_module_index_map_0[] = {
	&mercury_data_make__du_functor_desc_module_index_map_0_0
};

const MR_Integer mercury_data_make__functor_number_map_module_index_map_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_make__type_ctor_info_module_index_map_0 = {
	0,
	15,
	1,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___make__module_index_map_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___make__module_index_map_0_0)),
	"make",
	"module_index_map",
	{ (void *)mercury_data_make__du_name_ordered_module_index_map_0 },
	{ (void *)mercury_data_make__du_ptag_ordered_module_index_map_0 },
	1,
	4,
	mercury_data_make__functor_number_map_module_index_map_0
};

static const MR_DuFunctorDesc mercury_data_make__du_functor_desc_module_target_type_0_0 = {
	"module_target_source",
	0,
	0,
	MR_SECTAG_LOCAL,
	0,
	0,
	0,
	(MR_PseudoTypeInfo *) NULL,
	NULL,
	NULL,
	NULL
};

static const MR_DuFunctorDesc mercury_data_make__du_functor_desc_module_target_type_0_1 = {
	"module_target_errors",
	0,
	0,
	MR_SECTAG_LOCAL,
	0,
	1,
	1,
	(MR_PseudoTypeInfo *) NULL,
	NULL,
	NULL,
	NULL
};

static const MR_DuFunctorDesc mercury_data_make__du_functor_desc_module_target_type_0_2 = {
	"module_target_private_interface",
	0,
	0,
	MR_SECTAG_LOCAL,
	0,
	2,
	2,
	(MR_PseudoTypeInfo *) NULL,
	NULL,
	NULL,
	NULL
};

static const MR_DuFunctorDesc mercury_data_make__du_functor_desc_module_target_type_0_3 = {
	"module_target_long_interface",
	0,
	0,
	MR_SECTAG_LOCAL,
	0,
	3,
	3,
	(MR_PseudoTypeInfo *) NULL,
	NULL,
	NULL,
	NULL
};

static const MR_DuFunctorDesc mercury_data_make__du_functor_desc_module_target_type_0_4 = {
	"module_target_short_interface",
	0,
	0,
	MR_SECTAG_LOCAL,
	0,
	4,
	4,
	(MR_PseudoTypeInfo *) NULL,
	NULL,
	NULL,
	NULL
};

static const MR_DuFunctorDesc mercury_data_make__du_functor_desc_module_target_type_0_5 = {
	"module_target_unqualified_short_interface",
	0,
	0,
	MR_SECTAG_LOCAL,
	0,
	5,
	5,
	(MR_PseudoTypeInfo *) NULL,
	NULL,
	NULL,
	NULL
};

static const MR_DuFunctorDesc mercury_data_make__du_functor_desc_module_target_type_0_6 = {
	"module_target_intermodule_interface",
	0,
	0,
	MR_SECTAG_LOCAL,
	0,
	6,
	6,
	(MR_PseudoTypeInfo *) NULL,
	NULL,
	NULL,
	NULL
};

static const MR_DuFunctorDesc mercury_data_make__du_functor_desc_module_target_type_0_7 = {
	"module_target_analysis_registry",
	0,
	0,
	MR_SECTAG_LOCAL,
	0,
	7,
	7,
	(MR_PseudoTypeInfo *) NULL,
	NULL,
	NULL,
	NULL
};

static const MR_DuFunctorDesc mercury_data_make__du_functor_desc_module_target_type_0_8 = {
	"module_target_track_flags",
	0,
	0,
	MR_SECTAG_LOCAL,
	0,
	8,
	8,
	(MR_PseudoTypeInfo *) NULL,
	NULL,
	NULL,
	NULL
};
extern const MR_TypeCtorInfo_Struct mercury_data_make__type_ctor_info_c_header_type_0;

const MR_PseudoTypeInfo mercury_data_make__field_types_module_target_type_0_9[] = {
	(MR_PseudoTypeInfo) &mercury_data_make__type_ctor_info_c_header_type_0
};

static const MR_DuFunctorDesc mercury_data_make__du_functor_desc_module_target_type_0_9 = {
	"module_target_c_header",
	1,
	0,
	MR_SECTAG_NONE,
	1,
	-1,
	9,
	(MR_PseudoTypeInfo *) mercury_data_make__field_types_module_target_type_0_9,
	NULL,
	NULL,
	NULL
};

static const MR_DuFunctorDesc mercury_data_make__du_functor_desc_module_target_type_0_10 = {
	"module_target_c_code",
	0,
	0,
	MR_SECTAG_LOCAL,
	0,
	9,
	10,
	(MR_PseudoTypeInfo *) NULL,
	NULL,
	NULL,
	NULL
};

static const MR_DuFunctorDesc mercury_data_make__du_functor_desc_module_target_type_0_11 = {
	"module_target_il_code",
	0,
	0,
	MR_SECTAG_LOCAL,
	0,
	10,
	11,
	(MR_PseudoTypeInfo *) NULL,
	NULL,
	NULL,
	NULL
};

static const MR_DuFunctorDesc mercury_data_make__du_functor_desc_module_target_type_0_12 = {
	"module_target_il_asm",
	0,
	0,
	MR_SECTAG_LOCAL,
	0,
	11,
	12,
	(MR_PseudoTypeInfo *) NULL,
	NULL,
	NULL,
	NULL
};

static const MR_DuFunctorDesc mercury_data_make__du_functor_desc_module_target_type_0_13 = {
	"module_target_csharp_code",
	0,
	0,
	MR_SECTAG_LOCAL,
	0,
	12,
	13,
	(MR_PseudoTypeInfo *) NULL,
	NULL,
	NULL,
	NULL
};

static const MR_DuFunctorDesc mercury_data_make__du_functor_desc_module_target_type_0_14 = {
	"module_target_java_code",
	0,
	0,
	MR_SECTAG_LOCAL,
	0,
	13,
	14,
	(MR_PseudoTypeInfo *) NULL,
	NULL,
	NULL,
	NULL
};

static const MR_DuFunctorDesc mercury_data_make__du_functor_desc_module_target_type_0_15 = {
	"module_target_java_class_code",
	0,
	0,
	MR_SECTAG_LOCAL,
	0,
	14,
	15,
	(MR_PseudoTypeInfo *) NULL,
	NULL,
	NULL,
	NULL
};

static const MR_DuFunctorDesc mercury_data_make__du_functor_desc_module_target_type_0_16 = {
	"module_target_erlang_header",
	0,
	0,
	MR_SECTAG_LOCAL,
	0,
	15,
	16,
	(MR_PseudoTypeInfo *) NULL,
	NULL,
	NULL,
	NULL
};

static const MR_DuFunctorDesc mercury_data_make__du_functor_desc_module_target_type_0_17 = {
	"module_target_erlang_code",
	0,
	0,
	MR_SECTAG_LOCAL,
	0,
	16,
	17,
	(MR_PseudoTypeInfo *) NULL,
	NULL,
	NULL,
	NULL
};

static const MR_DuFunctorDesc mercury_data_make__du_functor_desc_module_target_type_0_18 = {
	"module_target_erlang_beam_code",
	0,
	0,
	MR_SECTAG_LOCAL,
	0,
	17,
	18,
	(MR_PseudoTypeInfo *) NULL,
	NULL,
	NULL,
	NULL
};

const MR_PseudoTypeInfo mercury_data_make__field_types_module_target_type_0_19[] = {
	(MR_PseudoTypeInfo) &mercury_data_backend_libs__compile_target_code__type_ctor_info_pic_0
};

static const MR_DuFunctorDesc mercury_data_make__du_functor_desc_module_target_type_0_19 = {
	"module_target_asm_code",
	1,
	0,
	MR_SECTAG_NONE,
	2,
	-1,
	19,
	(MR_PseudoTypeInfo *) mercury_data_make__field_types_module_target_type_0_19,
	NULL,
	NULL,
	NULL
};

const MR_PseudoTypeInfo mercury_data_make__field_types_module_target_type_0_20[] = {
	(MR_PseudoTypeInfo) &mercury_data_backend_libs__compile_target_code__type_ctor_info_pic_0
};

static const MR_DuFunctorDesc mercury_data_make__du_functor_desc_module_target_type_0_20 = {
	"module_target_object_code",
	1,
	0,
	MR_SECTAG_REMOTE,
	3,
	0,
	20,
	(MR_PseudoTypeInfo *) mercury_data_make__field_types_module_target_type_0_20,
	NULL,
	NULL,
	NULL
};

const MR_PseudoTypeInfo mercury_data_make__field_types_module_target_type_0_21[] = {
	(MR_PseudoTypeInfo) &mercury_data_libs__globals__type_ctor_info_foreign_language_0
};

static const MR_DuFunctorDesc mercury_data_make__du_functor_desc_module_target_type_0_21 = {
	"module_target_foreign_il_asm",
	1,
	0,
	MR_SECTAG_REMOTE,
	3,
	1,
	21,
	(MR_PseudoTypeInfo *) mercury_data_make__field_types_module_target_type_0_21,
	NULL,
	NULL,
	NULL
};

const MR_PseudoTypeInfo mercury_data_make__field_types_module_target_type_0_22[] = {
	(MR_PseudoTypeInfo) &mercury_data_backend_libs__compile_target_code__type_ctor_info_pic_0,
	(MR_PseudoTypeInfo) &mercury_data_libs__globals__type_ctor_info_foreign_language_0
};

static const MR_DuFunctorDesc mercury_data_make__du_functor_desc_module_target_type_0_22 = {
	"module_target_foreign_object",
	2,
	0,
	MR_SECTAG_REMOTE,
	3,
	2,
	22,
	(MR_PseudoTypeInfo *) mercury_data_make__field_types_module_target_type_0_22,
	NULL,
	NULL,
	NULL
};

const MR_PseudoTypeInfo mercury_data_make__field_types_module_target_type_0_23[] = {
	(MR_PseudoTypeInfo) &mercury_data_backend_libs__compile_target_code__type_ctor_info_pic_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_string_0
};

static const MR_DuFunctorDesc mercury_data_make__du_functor_desc_module_target_type_0_23 = {
	"module_target_fact_table_object",
	2,
	0,
	MR_SECTAG_REMOTE,
	3,
	3,
	23,
	(MR_PseudoTypeInfo *) mercury_data_make__field_types_module_target_type_0_23,
	NULL,
	NULL,
	NULL
};

static const MR_DuFunctorDesc mercury_data_make__du_functor_desc_module_target_type_0_24 = {
	"module_target_xml_doc",
	0,
	0,
	MR_SECTAG_LOCAL,
	0,
	18,
	24,
	(MR_PseudoTypeInfo *) NULL,
	NULL,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_make__du_stag_ordered_module_target_type_0_0[] = {
	&mercury_data_make__du_functor_desc_module_target_type_0_0,
	&mercury_data_make__du_functor_desc_module_target_type_0_1,
	&mercury_data_make__du_functor_desc_module_target_type_0_2,
	&mercury_data_make__du_functor_desc_module_target_type_0_3,
	&mercury_data_make__du_functor_desc_module_target_type_0_4,
	&mercury_data_make__du_functor_desc_module_target_type_0_5,
	&mercury_data_make__du_functor_desc_module_target_type_0_6,
	&mercury_data_make__du_functor_desc_module_target_type_0_7,
	&mercury_data_make__du_functor_desc_module_target_type_0_8,
	&mercury_data_make__du_functor_desc_module_target_type_0_10,
	&mercury_data_make__du_functor_desc_module_target_type_0_11,
	&mercury_data_make__du_functor_desc_module_target_type_0_12,
	&mercury_data_make__du_functor_desc_module_target_type_0_13,
	&mercury_data_make__du_functor_desc_module_target_type_0_14,
	&mercury_data_make__du_functor_desc_module_target_type_0_15,
	&mercury_data_make__du_functor_desc_module_target_type_0_16,
	&mercury_data_make__du_functor_desc_module_target_type_0_17,
	&mercury_data_make__du_functor_desc_module_target_type_0_18,
	&mercury_data_make__du_functor_desc_module_target_type_0_24

};

const MR_DuFunctorDescPtr mercury_data_make__du_stag_ordered_module_target_type_0_1[] = {
	&mercury_data_make__du_functor_desc_module_target_type_0_9

};

const MR_DuFunctorDescPtr mercury_data_make__du_stag_ordered_module_target_type_0_2[] = {
	&mercury_data_make__du_functor_desc_module_target_type_0_19

};

const MR_DuFunctorDescPtr mercury_data_make__du_stag_ordered_module_target_type_0_3[] = {
	&mercury_data_make__du_functor_desc_module_target_type_0_20,
	&mercury_data_make__du_functor_desc_module_target_type_0_21,
	&mercury_data_make__du_functor_desc_module_target_type_0_22,
	&mercury_data_make__du_functor_desc_module_target_type_0_23

};

const MR_DuPtagLayout mercury_data_make__du_ptag_ordered_module_target_type_0[] = {
	{ 19, MR_SECTAG_LOCAL,
	mercury_data_make__du_stag_ordered_module_target_type_0_0 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_make__du_stag_ordered_module_target_type_0_1 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_make__du_stag_ordered_module_target_type_0_2 },
	{ 4, MR_SECTAG_REMOTE,
	mercury_data_make__du_stag_ordered_module_target_type_0_3 }

};

const MR_DuFunctorDescPtr mercury_data_make__du_name_ordered_module_target_type_0[] = {
	&mercury_data_make__du_functor_desc_module_target_type_0_7,
	&mercury_data_make__du_functor_desc_module_target_type_0_19,
	&mercury_data_make__du_functor_desc_module_target_type_0_10,
	&mercury_data_make__du_functor_desc_module_target_type_0_9,
	&mercury_data_make__du_functor_desc_module_target_type_0_13,
	&mercury_data_make__du_functor_desc_module_target_type_0_18,
	&mercury_data_make__du_functor_desc_module_target_type_0_17,
	&mercury_data_make__du_functor_desc_module_target_type_0_16,
	&mercury_data_make__du_functor_desc_module_target_type_0_1,
	&mercury_data_make__du_functor_desc_module_target_type_0_23,
	&mercury_data_make__du_functor_desc_module_target_type_0_21,
	&mercury_data_make__du_functor_desc_module_target_type_0_22,
	&mercury_data_make__du_functor_desc_module_target_type_0_12,
	&mercury_data_make__du_functor_desc_module_target_type_0_11,
	&mercury_data_make__du_functor_desc_module_target_type_0_6,
	&mercury_data_make__du_functor_desc_module_target_type_0_15,
	&mercury_data_make__du_functor_desc_module_target_type_0_14,
	&mercury_data_make__du_functor_desc_module_target_type_0_3,
	&mercury_data_make__du_functor_desc_module_target_type_0_20,
	&mercury_data_make__du_functor_desc_module_target_type_0_2,
	&mercury_data_make__du_functor_desc_module_target_type_0_4,
	&mercury_data_make__du_functor_desc_module_target_type_0_0,
	&mercury_data_make__du_functor_desc_module_target_type_0_8,
	&mercury_data_make__du_functor_desc_module_target_type_0_5,
	&mercury_data_make__du_functor_desc_module_target_type_0_24
};

const MR_Integer mercury_data_make__functor_number_map_module_target_type_0[] = {
	21,
	8,
	19,
	17,
	20,
	23,
	14,
	0,
	22,
	3,
	2,
	13,
	12,
	4,
	16,
	15,
	7,
	6,
	5,
	1,
	18,
	10,
	11,
	9,
	24 };
	
const MR_TypeCtorInfo_Struct mercury_data_make__type_ctor_info_module_target_type_0 = {
	0,
	15,
	4,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___make__module_target_type_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___make__module_target_type_0_0)),
	"make",
	"module_target_type",
	{ (void *)mercury_data_make__du_name_ordered_module_target_type_0 },
	{ (void *)mercury_data_make__du_ptag_ordered_module_target_type_0 },
	25,
	4,
	mercury_data_make__functor_number_map_module_target_type_0
};

static const MR_EnumFunctorDesc mercury_data_make__enum_functor_desc_rebuild_module_deps_0_0 = {
	"do_rebuild_module_deps",
	0
};

static const MR_EnumFunctorDesc mercury_data_make__enum_functor_desc_rebuild_module_deps_0_1 = {
	"do_not_rebuild_module_deps",
	1
};

const MR_EnumFunctorDescPtr mercury_data_make__enum_value_ordered_rebuild_module_deps_0[] = {
	&mercury_data_make__enum_functor_desc_rebuild_module_deps_0_0,
	&mercury_data_make__enum_functor_desc_rebuild_module_deps_0_1
};

const MR_EnumFunctorDescPtr mercury_data_make__enum_name_ordered_rebuild_module_deps_0[] = {
	&mercury_data_make__enum_functor_desc_rebuild_module_deps_0_1,
	&mercury_data_make__enum_functor_desc_rebuild_module_deps_0_0
};

const MR_Integer mercury_data_make__functor_number_map_rebuild_module_deps_0[] = {
	1,
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_make__type_ctor_info_rebuild_module_deps_0 = {
	0,
	15,
	-1,
	MR_TYPECTOR_REP_ENUM,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___make__rebuild_module_deps_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___make__rebuild_module_deps_0_0)),
	"make",
	"rebuild_module_deps",
	{ (void *)mercury_data_make__enum_name_ordered_rebuild_module_deps_0 },
	{ (void *)mercury_data_make__enum_value_ordered_rebuild_module_deps_0 },
	2,
	4,
	mercury_data_make__functor_number_map_rebuild_module_deps_0
};

const MR_PseudoTypeInfo mercury_data_make__field_types_target_file_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_mdbcomp__prim_data__type_ctor_info_sym_name_0,
	(MR_PseudoTypeInfo) &mercury_data_make__type_ctor_info_module_target_type_0
};

const MR_ConstString mercury_data_make__field_names_target_file_0_0[] = {
	"target_file_name",
	"target_file_type"
};

static const MR_DuFunctorDesc mercury_data_make__du_functor_desc_target_file_0_0 = {
	"target_file",
	2,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_make__field_types_target_file_0_0,
	mercury_data_make__field_names_target_file_0_0,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_make__du_stag_ordered_target_file_0_0[] = {
	&mercury_data_make__du_functor_desc_target_file_0_0

};

const MR_DuPtagLayout mercury_data_make__du_ptag_ordered_target_file_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_make__du_stag_ordered_target_file_0_0 }

};

const MR_DuFunctorDescPtr mercury_data_make__du_name_ordered_target_file_0[] = {
	&mercury_data_make__du_functor_desc_target_file_0_0
};

const MR_Integer mercury_data_make__functor_number_map_target_file_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_make__type_ctor_info_target_file_0 = {
	0,
	15,
	1,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___make__target_file_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___make__target_file_0_0)),
	"make",
	"target_file",
	{ (void *)mercury_data_make__du_name_ordered_target_file_0 },
	{ (void *)mercury_data_make__du_ptag_ordered_target_file_0 },
	1,
	4,
	mercury_data_make__functor_number_map_target_file_0
};

const MR_PseudoTypeInfo mercury_data_make__field_types_target_type_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_make__type_ctor_info_module_target_type_0
};

static const MR_DuFunctorDesc mercury_data_make__du_functor_desc_target_type_0_0 = {
	"module_target",
	1,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_make__field_types_target_type_0_0,
	NULL,
	NULL,
	NULL
};

const MR_PseudoTypeInfo mercury_data_make__field_types_target_type_0_1[] = {
	(MR_PseudoTypeInfo) &mercury_data_backend_libs__compile_target_code__type_ctor_info_linked_target_type_0
};

static const MR_DuFunctorDesc mercury_data_make__du_functor_desc_target_type_0_1 = {
	"linked_target",
	1,
	0,
	MR_SECTAG_NONE,
	1,
	-1,
	1,
	(MR_PseudoTypeInfo *) mercury_data_make__field_types_target_type_0_1,
	NULL,
	NULL,
	NULL
};
extern const MR_TypeCtorInfo_Struct mercury_data_make__type_ctor_info_misc_target_type_0;

const MR_PseudoTypeInfo mercury_data_make__field_types_target_type_0_2[] = {
	(MR_PseudoTypeInfo) &mercury_data_make__type_ctor_info_misc_target_type_0
};

static const MR_DuFunctorDesc mercury_data_make__du_functor_desc_target_type_0_2 = {
	"misc_target",
	1,
	0,
	MR_SECTAG_NONE,
	2,
	-1,
	2,
	(MR_PseudoTypeInfo *) mercury_data_make__field_types_target_type_0_2,
	NULL,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_make__du_stag_ordered_target_type_0_0[] = {
	&mercury_data_make__du_functor_desc_target_type_0_0

};

const MR_DuFunctorDescPtr mercury_data_make__du_stag_ordered_target_type_0_1[] = {
	&mercury_data_make__du_functor_desc_target_type_0_1

};

const MR_DuFunctorDescPtr mercury_data_make__du_stag_ordered_target_type_0_2[] = {
	&mercury_data_make__du_functor_desc_target_type_0_2

};

const MR_DuPtagLayout mercury_data_make__du_ptag_ordered_target_type_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_make__du_stag_ordered_target_type_0_0 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_make__du_stag_ordered_target_type_0_1 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_make__du_stag_ordered_target_type_0_2 }

};

const MR_DuFunctorDescPtr mercury_data_make__du_name_ordered_target_type_0[] = {
	&mercury_data_make__du_functor_desc_target_type_0_1,
	&mercury_data_make__du_functor_desc_target_type_0_2,
	&mercury_data_make__du_functor_desc_target_type_0_0
};

const MR_Integer mercury_data_make__functor_number_map_target_type_0[] = {
	2,
	0,
	1 };
	
const MR_TypeCtorInfo_Struct mercury_data_make__type_ctor_info_target_type_0 = {
	0,
	15,
	3,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___make__target_type_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___make__target_type_0_0)),
	"make",
	"target_type",
	{ (void *)mercury_data_make__du_name_ordered_target_type_0 },
	{ (void *)mercury_data_make__du_ptag_ordered_target_type_0 },
	3,
	4,
	mercury_data_make__functor_number_map_target_type_0
};


static const MR_UserClosureId
mercury_data__closure_layout__make__option_table_hash_4_0_1 = {
{
MR_PREDICATE,
"make",
"make",
"is_consequential_option",
2,
0
},
"make",
"make.m",
675,
"21"
};

static const MR_UserClosureId
mercury_data__closure_layout__make__classify_target_3_0_1 = {
{
MR_PREDICATE,
"make",
"make",
"classify_target_2",
4,
0
},
"make",
"make.m",
433,
"10"
};

static const MR_UserClosureId
mercury_data__closure_layout__make__make_track_flags_files_7_0_1 = {
{
MR_PREDICATE,
"make",
"make",
"make_track_flags_files_2",
9,
0
},
"make",
"make.m",
605,
"17"
};

static const MR_UserClosureId
mercury_data__closure_layout__make__make_process_args_6_0_11 = {
{
MR_PREDICATE,
"make",
"make",
"lambda_make_m_319",
3,
0
},
"make",
"make.m",
319,
"52"
};

static const MR_UserClosureId
mercury_data__closure_layout__make__make_process_args_6_0_10 = {
{
MR_PREDICATE,
"make",
"make",
"make_target",
7,
0
},
"make",
"make.m",
371,
"107"
};

static const MR_UserClosureId
mercury_data__closure_layout__make__make_process_args_6_0_9 = {
{
MR_PREDICATE,
"make",
"make",
"classify_target",
3,
0
},
"make",
"make.m",
349,
"91"
};

static const MR_UserClosureId
mercury_data__closure_layout__make__make_process_args_6_0_8 = {
{
MR_PREDICATE,
"make",
"make",
"lambda_make_m_345",
1,
0
},
"make",
"make.m",
343,
"83"
};

static const MR_UserClosureId
mercury_data__closure_layout__make__make_process_args_6_0_7 = {
{
MR_PREDICATE,
"make.util",
"make.util",
"dependency_file_hash",
2,
0
},
"make",
"make.m",
338,
"81"
};

static const MR_UserClosureId
mercury_data__closure_layout__make__make_process_args_6_0_6 = {
{
MR_PREDICATE,
"make.util",
"make.util",
"dependency_file_hash",
2,
0
},
"make",
"make.m",
336,
"77"
};

static const MR_UserClosureId
mercury_data__closure_layout__make__make_process_args_6_0_5 = {
{
MR_PREDICATE,
"make.util",
"make.util",
"module_name_hash",
2,
0
},
"make",
"make.m",
333,
"72"
};

static const MR_UserClosureId
mercury_data__closure_layout__make__make_process_args_6_0_4 = {
{
MR_PREDICATE,
"make",
"make",
"lambda_make_m_309",
1,
0
},
"make",
"make.m",
309,
"37"
};

static const MR_UserClosureId
mercury_data__closure_layout__make__make_process_args_6_0_3 = {
{
MR_PREDICATE,
"make",
"make",
"lambda_make_m_309",
1,
0
},
"make",
"make.m",
309,
"37"
};

static const MR_UserClosureId
mercury_data__closure_layout__make__make_process_args_6_0_2 = {
{
MR_PREDICATE,
"make",
"make",
"lambda_make_m_309",
1,
0
},
"make",
"make.m",
309,
"37"
};

static const MR_UserClosureId
mercury_data__closure_layout__make__make_process_args_6_0_1 = {
{
MR_PREDICATE,
"make",
"make",
"lambda_make_m_309",
1,
0
},
"make",
"make.m",
309,
"37"
};


MR_decl_entry(make__options_file__lookup_main_target_5_0);
MR_decl_entry(io__write_string_3_0);
MR_decl_entry(list__filter_3_0);
MR_decl_entry(io__set_exit_status_3_0);
MR_decl_entry(libs__globals__lookup_bool_option_3_0);
MR_decl_entry(fn__version_hash_table__init_default_1_0);
MR_decl_entry(fn__version_array__empty_0_0);
MR_decl_entry(fn__list__filter_2_0);
MR_decl_entry(list__map_3_0);
MR_decl_entry(libs__globals__lookup_int_option_3_0);
MR_decl_entry(fn__map__init_0_0);
MR_decl_entry(fn__make__dependencies__init_cached_direct_imports_0_0);
MR_decl_entry(fn__make__dependencies__init_cached_transitive_dependencies_0_0);
MR_decl_entry(fn__make__dependencies__init_cached_foreign_imports_0_0);
MR_decl_entry(fn__set__init_0_0);
MR_decl_entry(fn__set__list_to_set_1_0);
extern const MR_TypeCtorInfo_Struct mercury_data_io__type_ctor_info_state_0;
MR_decl_entry(make__util__foldl2_maybe_stop_at_error_9_0);
MR_decl_entry(list__foldl_4_2);

MR_BEGIN_MODULE(make_module0)
	MR_init_entry1(make__make_process_args_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__make__make_process_args_6_0);
	MR_init_label10(make__make_process_args_6_0,4,6,10,9,3,2,14,18,20,22)
	MR_init_label10(make__make_process_args_6_0,23,26,27,30,32,35,36,38,40,42)
	MR_init_label10(make__make_process_args_6_0,43,44,45,46,47,48,51,69,16,15)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'make_process_args'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__make__make_process_args_6_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(19);
	MR_sv(19) = (MR_Word) MR_succip;
	if (MR_LTAGS_TESTR(MR_r4,0,0)) {
		MR_GOTO_LAB(make__make_process_args_6_0_i3);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_np_call_localret_ent(make__options_file__lookup_main_target_5_0,
		make__make_process_args_6_0_i4);
MR_def_label(make__make_process_args_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(make__make_process_args_6_0_i6);
	}
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_sv(4) = (MR_Integer) 0;
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,0);
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_GOTO_LAB(make__make_process_args_6_0_i2);
MR_def_label(make__make_process_args_6_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(1, MR_r1, 0);
	MR_r3 = MR_tempr1;
	if (MR_LTAGS_TESTR(MR_tempr1,0,0)) {
		MR_GOTO_LAB(make__make_process_args_6_0_i9);
	}
	MR_sv(5) = MR_tempr1;
	MR_r1 = (MR_Word) MR_string_const("** Error: no targets specified and \140MAIN_TARGET\' not defined.\n", 62);
	}
	MR_np_call_localret_ent(io__write_string_3_0,
		make__make_process_args_6_0_i10);
MR_def_label(make__make_process_args_6_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(5);
	MR_sv(4) = (MR_Integer) 0;
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,1);
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_GOTO_LAB(make__make_process_args_6_0_i2);
MR_def_label(make__make_process_args_6_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = (MR_Integer) 1;
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,2);
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_GOTO_LAB(make__make_process_args_6_0_i2);
MR_def_label(make__make_process_args_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_r3 = MR_r4;
	MR_sv(4) = (MR_Integer) 1;
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,3);
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
MR_def_label(make__make_process_args_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r3;
	MR_sv(15) = MR_r1;
	MR_np_call_localret_ent(list__filter_3_0,
		make__make_process_args_6_0_i14);
MR_def_label(make__make_process_args_6_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(make__make_process_args_6_0_i16);
	}
	if (MR_INT_NE(MR_sv(4),0)) {
		MR_GOTO_LAB(make__make_process_args_6_0_i18);
	}
	MR_r1 = (MR_Integer) 1;
	MR_succip_word = MR_sv(19);
	MR_decr_sp(19);
	MR_np_tailcall_ent(io__set_exit_status_3_0);
MR_def_label(make__make_process_args_6_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = (MR_Integer) 594;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		make__make_process_args_6_0_i20);
MR_def_label(make__make_process_args_6_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_sv(16) = (MR_Word) MR_CTOR0_ADDR(mdbcomp__prim_data, sym_name);
	MR_r1 = MR_sv(16);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(make__dependencies, module_index);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,1,4);
	MR_np_call_localret_ent(fn__version_hash_table__init_default_1_0,
		make__make_process_args_6_0_i22);
MR_def_label(make__make_process_args_6_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_r1 = MR_sv(16);
	MR_np_call_localret_ent(fn__version_array__empty_0_0,
		make__make_process_args_6_0_i23);
MR_def_label(make__make_process_args_6_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(8);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 0;
	MR_sv(8) = MR_tempr1;
	MR_sv(6) = (MR_Word) MR_CTOR0_ADDR(make__dependencies, dependency_file);
	MR_r1 = MR_sv(6);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(make__dependencies, dependency_file_index);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,1,5);
	}
	MR_np_call_localret_ent(fn__version_hash_table__init_default_1_0,
		make__make_process_args_6_0_i26);
MR_def_label(make__make_process_args_6_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_r1;
	MR_r1 = MR_sv(6);
	MR_np_call_localret_ent(fn__version_array__empty_0_0,
		make__make_process_args_6_0_i27);
MR_def_label(make__make_process_args_6_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(9);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 0;
	MR_sv(9) = MR_tempr1;
	MR_r1 = MR_sv(6);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(make, dependency_status);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,1,6);
	}
	MR_np_call_localret_ent(fn__version_hash_table__init_default_1_0,
		make__make_process_args_6_0_i30);
MR_def_label(make__make_process_args_6_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(5);
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(15);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,7);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__list__filter_2_0,
		make__make_process_args_6_0_i32);
MR_def_label(make__make_process_args_6_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(4,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(make__classify_target_3_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(1);
	MR_sv(17) = (MR_Word) MR_CTOR_ADDR(pair, pair, 2);
	MR_sv(18) = (MR_Word) MR_TAG_COMMON(0,3,1);
	MR_tempr2 = MR_r1;
	MR_r1 = MR_sv(15);
	MR_r2 = MR_sv(18);
	MR_r4 = MR_tempr2;
	}
	MR_np_call_localret_ent(list__map_3_0,
		make__make_process_args_6_0_i35);
MR_def_label(make__make_process_args_6_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = (MR_Integer) 318;
	MR_np_call_localret_ent(libs__globals__lookup_int_option_3_0,
		make__make_process_args_6_0_i36);
MR_def_label(make__make_process_args_6_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_r1 = MR_sv(16);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,5,0);
	MR_np_call_localret_ent(fn__map__init_0_0,
		make__make_process_args_6_0_i38);
MR_def_label(make__make_process_args_6_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(10) = MR_r1;
	MR_r1 = MR_sv(15);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,5,1);
	MR_np_call_localret_ent(fn__map__init_0_0,
		make__make_process_args_6_0_i40);
MR_def_label(make__make_process_args_6_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(17);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(16);
	MR_tfield(0, MR_tempr1, 2) = MR_sv(15);
	MR_sv(15) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_tfield(0, MR_r1, 2);
	}
	MR_np_call_localret_ent(fn__map__init_0_0,
		make__make_process_args_6_0_i42);
MR_def_label(make__make_process_args_6_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(17) = MR_r1;
	MR_np_call_localret_ent(fn__make__dependencies__init_cached_direct_imports_0_0,
		make__make_process_args_6_0_i43);
MR_def_label(make__make_process_args_6_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(11) = MR_r1;
	MR_np_call_localret_ent(fn__make__dependencies__init_cached_direct_imports_0_0,
		make__make_process_args_6_0_i44);
MR_def_label(make__make_process_args_6_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(12) = MR_r1;
	MR_np_call_localret_ent(fn__make__dependencies__init_cached_transitive_dependencies_0_0,
		make__make_process_args_6_0_i45);
MR_def_label(make__make_process_args_6_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(13) = MR_r1;
	MR_np_call_localret_ent(fn__make__dependencies__init_cached_foreign_imports_0_0,
		make__make_process_args_6_0_i46);
MR_def_label(make__make_process_args_6_0,46)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(16) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__prim_data, sym_name);
	MR_np_call_localret_ent(fn__set__init_0_0,
		make__make_process_args_6_0_i47);
MR_def_label(make__make_process_args_6_0,47)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(14) = MR_r1;
	MR_r1 = MR_sv(18);
	MR_r2 = MR_sv(6);
	MR_np_call_localret_ent(fn__set__list_to_set_1_0,
		make__make_process_args_6_0_i48);
MR_def_label(make__make_process_args_6_0,48)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 18);
	MR_r8 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_sv(10);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(15);
	MR_tfield(0, MR_tempr1, 2) = MR_sv(17);
	MR_tfield(0, MR_tempr1, 3) = MR_sv(3);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 5) = MR_sv(8);
	MR_tfield(0, MR_tempr1, 6) = MR_sv(9);
	MR_tfield(0, MR_tempr1, 7) = MR_sv(5);
	MR_tfield(0, MR_tempr1, 8) = MR_sv(11);
	MR_tfield(0, MR_tempr1, 9) = MR_sv(12);
	MR_tfield(0, MR_tempr1, 10) = MR_sv(13);
	MR_tfield(0, MR_tempr1, 11) = MR_sv(16);
	MR_tfield(0, MR_tempr1, 12) = (MR_Integer) 0;
	MR_tempr2 = MR_sv(4);
	MR_tfield(0, MR_tempr1, 13) = MR_tempr2;
	MR_tfield(0, MR_tempr1, 14) = MR_sv(14);
	MR_tfield(0, MR_tempr1, 15) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_tempr1, 16) = MR_r1;
	MR_tfield(0, MR_tempr1, 17) = MR_sv(7);
	MR_r1 = MR_sv(18);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(make, make_info);
	MR_r3 = (MR_Word) MR_IO_CTOR_ADDR;
	MR_r4 = MR_tempr2;
	MR_r5 = (MR_Word) MR_TAG_COMMON(0,1,8);
	MR_r6 = MR_sv(1);
	MR_r7 = MR_sv(6);
	}
	MR_np_call_localret_ent(make__util__foldl2_maybe_stop_at_error_9_0,
		make__make_process_args_6_0_i51);
MR_def_label(make__make_process_args_6_0,51)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(make__make_process_args_6_0_i15);
	}
MR_def_label(make__make_process_args_6_0,69)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_succip_word = MR_sv(19);
	MR_decr_sp(19);
	MR_np_tailcall_ent(io__set_exit_status_3_0);
MR_def_label(make__make_process_args_6_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(15);
	MR_r2 = (MR_Word) MR_IO_CTOR_ADDR;
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,1,9);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__foldl_4_2,
		make__make_process_args_6_0_i69);
MR_def_label(make__make_process_args_6_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(19);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(make__module_dep_file__write_module_dep_file_4_0);

MR_BEGIN_MODULE(make_module1)
	MR_init_entry1(make__make_write_module_dep_file_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__make__make_write_module_dep_file_4_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'make_write_module_dep_file'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__make__make_write_module_dep_file_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(make__module_dep_file__write_module_dep_file_4_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(make_module2)
	MR_init_entry1(fn__make__make_module_dep_file_extension_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__make__make_module_dep_file_extension_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'make_module_dep_file_extension'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__make__make_module_dep_file_extension_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(".module_dep", 11);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(make__dependencies__find_reachable_local_modules_8_0);
MR_decl_entry(fn__set__to_sorted_list_1_0);
MR_decl_entry(make__util__foldl3_maybe_stop_at_error_11_0);

MR_BEGIN_MODULE(make_module3)
	MR_init_entry1(make__make_track_flags_files_7_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__make__make_track_flags_files_7_0);
	MR_init_label4(make__make_track_flags_files_7_0,2,4,6,8)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'make_track_flags_files'/7 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__make__make_track_flags_files_7_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(make__dependencies__find_reachable_local_modules_8_0,
		make__make_track_flags_files_7_0_i2);
MR_def_label(make__make_track_flags_files_7_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(make__make_track_flags_files_7_0_i4);
	}
	MR_r1 = (MR_Integer) 0;
	MR_r2 = MR_r3;
	MR_decr_sp_and_return(5);
MR_def_label(make__make_track_flags_files_7_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = (MR_Word) MR_TAG_COMMON(0,7,0);
	MR_sv(3) = MR_r3;
	MR_sv(4) = (MR_Word) MR_CTOR0_ADDR(mdbcomp__prim_data, sym_name);
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(fn__set__to_sorted_list_1_0,
		make__make_track_flags_files_7_0_i6);
MR_def_label(make__make_track_flags_files_7_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(make, last_hash);
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(make, make_info);
	MR_r4 = (MR_Word) MR_IO_CTOR_ADDR;
	MR_r5 = (MR_Integer) 0;
	MR_r6 = (MR_Word) MR_TAG_COMMON(0,1,10);
	MR_r7 = MR_sv(1);
	MR_r8 = MR_tempr1;
	MR_r9 = MR_sv(2);
	MR_r10 = MR_sv(3);
	}
	MR_np_call_localret_ent(make__util__foldl3_maybe_stop_at_error_11_0,
		make__make_track_flags_files_7_0_i8);
MR_def_label(make__make_track_flags_files_7_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r3;
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(make__program_target__make_linked_target_7_0);
MR_decl_entry(make__program_target__make_misc_target_7_0);
MR_decl_entry(make__module_target__make_module_target_7_0);

MR_BEGIN_MODULE(make_module4)
	MR_init_entry1(make__make_target_7_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__make__make_target_7_0);
	MR_init_label6(make__make_target_7_0,2,4,3,7,9,12)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'make_target'/7 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__make__make_target_7_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_tfield(0, MR_r2, 0);
	MR_sv(3) = MR_tfield(0, MR_r2, 1);
	MR_sv(4) = MR_r3;
	MR_r2 = (MR_Integer) 597;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		make__make_target_7_0_i2);
MR_def_label(make__make_target_7_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(make__make_target_7_0_i4);
	}
	MR_r1 = (MR_Integer) 1;
	MR_r2 = MR_sv(4);
	MR_GOTO_LAB(make__make_target_7_0_i3);
MR_def_label(make__make_target_7_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(4);
	MR_np_call_localret_ent(make__make_track_flags_files_7_0,
		make__make_target_7_0_i3);
MR_def_label(make__make_target_7_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(make__make_target_7_0_i7);
	}
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(5);
MR_def_label(make__make_target_7_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(3),1)) {
		MR_GOTO_LAB(make__make_target_7_0_i9);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 1) = MR_tfield(1, MR_sv(3), 0);
	MR_r1 = MR_sv(1);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(make__program_target__make_linked_target_7_0);
	}
MR_def_label(make__make_target_7_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(3),2)) {
		MR_GOTO_LAB(make__make_target_7_0_i12);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 1) = MR_tfield(2, MR_sv(3), 0);
	MR_r1 = MR_sv(1);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(make__program_target__make_misc_target_7_0);
	}
MR_def_label(make__make_target_7_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 1) = MR_tfield(0, MR_sv(3), 0);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr2, 0) = MR_tempr1;
	MR_r1 = MR_sv(1);
	MR_tempr1 = MR_r2;
	MR_r2 = MR_tempr2;
	MR_r3 = MR_tempr1;
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(make__module_target__make_module_target_7_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(string__unsafe_prev_index_4_0);

MR_BEGIN_MODULE(make_module5)
	MR_init_entry1(make__search_backwards_for_dot_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__make__search_backwards_for_dot_3_0);
	MR_init_label4(make__search_backwards_for_dot_3_0,18,2,8,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'search_backwards_for_dot'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__make__search_backwards_for_dot_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
MR_def_label(make__search_backwards_for_dot_3_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(string__unsafe_prev_index_4_0,
		make__search_backwards_for_dot_3_0_i2);
MR_def_label(make__search_backwards_for_dot_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(make__search_backwards_for_dot_3_0_i1);
	}
	if (MR_INT_EQ(MR_r3,46)) {
		MR_GOTO_LAB(make__search_backwards_for_dot_3_0_i8);
	}
	MR_r1 = MR_sv(1);
	MR_succip_word = MR_sv(2);
	MR_GOTO_LAB(make__search_backwards_for_dot_3_0_i18);
MR_def_label(make__search_backwards_for_dot_3_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(2);
MR_def_label(make__search_backwards_for_dot_3_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(2);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(libs__globals__get_target_2_0);

MR_BEGIN_MODULE(make_module6)
	MR_init_entry1(fn__make__get_executable_type_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__make__get_executable_type_1_0);
	MR_init_label4(fn__make__get_executable_type_1_0,2,4,5,6)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'get_executable_type'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__make__get_executable_type_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(libs__globals__get_target_2_0,
		fn__make__get_executable_type_1_0_i2);
MR_def_label(fn__make__get_executable_type_1_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,2)) {
		MR_GOTO_LAB(fn__make__get_executable_type_1_0_i4);
	}
	MR_r1 = (MR_Integer) 3;
	MR_decr_sp_and_return(1);
MR_def_label(fn__make__get_executable_type_1_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,6)) {
		MR_GOTO_LAB(fn__make__get_executable_type_1_0_i5);
	}
	MR_r1 = (MR_Integer) 7;
	MR_decr_sp_and_return(1);
MR_def_label(fn__make__get_executable_type_1_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,3)) {
		MR_GOTO_LAB(fn__make__get_executable_type_1_0_i6);
	}
	MR_r1 = (MR_Integer) 5;
	MR_decr_sp_and_return(1);
MR_def_label(fn__make__get_executable_type_1_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(1);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(string__length_2_0);
MR_decl_entry(string__split_4_0);
MR_decl_entry(solutions__solutions_2_1);
MR_decl_entry(string__append_3_1);
MR_decl_entry(parse_tree__file_names__file_name_to_module_name_2_0);

MR_BEGIN_MODULE(make_module7)
	MR_init_entry1(make__classify_target_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__make__classify_target_3_0);
	MR_init_label10(make__classify_target_3_0,3,4,6,9,2,13,12,18,20,22)
	MR_init_label2(make__classify_target_3_0,24,27)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'classify_target'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__make__classify_target_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(2) = MR_r1;
	MR_sv(1) = MR_r2;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(string__length_2_0,
		make__classify_target_3_0_i3);
MR_def_label(make__classify_target_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(make__search_backwards_for_dot_3_0,
		make__classify_target_3_0_i4);
MR_def_label(make__classify_target_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(make__classify_target_3_0_i2);
	}
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(string__split_4_0,
		make__classify_target_3_0_i6);
MR_def_label(make__classify_target_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 6);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(9,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(make__classify_target_2_4_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 3;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 4) = MR_r1;
	MR_tfield(0, MR_tempr1, 5) = MR_r2;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,3,1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(solutions__solutions_2_1,
		make__classify_target_3_0_i9);
MR_def_label(make__classify_target_3_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(make__classify_target_3_0_i2);
	}
	MR_r2 = MR_tfield(1, MR_r1, 1);
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(make__classify_target_3_0_i2);
	}
	MR_r1 = MR_tfield(1, MR_r1, 0);
	MR_decr_sp_and_return(3);
MR_def_label(make__classify_target_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("lib", 3);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(string__append_3_1,
		make__classify_target_3_0_i13);
MR_def_label(make__classify_target_3_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(make__classify_target_3_0_i12);
	}
	MR_sv(2) = (MR_Word) MR_TAG_COMMON(2,10,0);
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(parse_tree__file_names__file_name_to_module_name_2_0,
		make__classify_target_3_0_i27);
MR_def_label(make__classify_target_3_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(libs__globals__get_target_2_0,
		make__classify_target_3_0_i18);
MR_def_label(make__classify_target_3_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,2)) {
		MR_GOTO_LAB(make__classify_target_3_0_i20);
	}
	MR_r1 = MR_sv(1);
	MR_sv(2) = (MR_Word) MR_TAG_COMMON(1,11,0);
	MR_np_call_localret_ent(parse_tree__file_names__file_name_to_module_name_2_0,
		make__classify_target_3_0_i27);
MR_def_label(make__classify_target_3_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,6)) {
		MR_GOTO_LAB(make__classify_target_3_0_i22);
	}
	MR_r1 = MR_sv(1);
	MR_sv(2) = (MR_Word) MR_TAG_COMMON(1,11,1);
	MR_np_call_localret_ent(parse_tree__file_names__file_name_to_module_name_2_0,
		make__classify_target_3_0_i27);
MR_def_label(make__classify_target_3_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,3)) {
		MR_GOTO_LAB(make__classify_target_3_0_i24);
	}
	MR_r1 = MR_sv(1);
	MR_sv(2) = (MR_Word) MR_TAG_COMMON(1,11,2);
	MR_np_call_localret_ent(parse_tree__file_names__file_name_to_module_name_2_0,
		make__classify_target_3_0_i27);
MR_def_label(make__classify_target_3_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_sv(2) = (MR_Word) MR_TAG_COMMON(1,11,3);
	MR_np_call_localret_ent(parse_tree__file_names__file_name_to_module_name_2_0,
		make__classify_target_3_0_i27);
MR_def_label(make__classify_target_3_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 0) = MR_r1;
	MR_tfield(0, MR_r2, 1) = MR_sv(2);
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__make__util__target_extension_2_1);
MR_declare_entry(MR_do_redo);
MR_declare_entry(MR_do_fail);
MR_decl_entry(make__util__target_extension_synonym_2_0);
MR_decl_entry(libs__globals__lookup_string_option_3_0);
MR_decl_entry(string__append_3_3);
MR_decl_entry(fn__f_115_116_114_105_110_103_95_95_43_43_2_0);

MR_BEGIN_MODULE(make_module8)
	MR_init_entry1(make__classify_target_2_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__make__classify_target_2_4_0);
	MR_init_label10(make__classify_target_2_4_0,3,1,9,8,13,14,12,18,19,17)
	MR_init_label10(make__classify_target_2_4_0,23,24,26,28,30,22,36,34,43,45)
	MR_init_label10(make__classify_target_2_4_0,42,47,109,51,49,54,48,40,60,64)
	MR_init_label5(make__classify_target_2_4_0,67,70,76,74,93)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'classify_target_2'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__make__classify_target_2_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_mkframe("pred make.classify_target_2/4-0", 5,
		MR_LABEL_AP(make__classify_target_2_4_0_i1));
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tempr2 = MR_r3;
	MR_tfield(1, MR_tempr1, 0) = MR_tempr2;
	MR_fv(4) = MR_r1;
	MR_fv(1) = MR_r2;
	MR_fv(2) = MR_tempr2;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__make__util__target_extension_2_1,
		make__classify_target_2_4_0_i3);
MR_def_label(make__classify_target_2_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_fv(2), MR_string_const(".cs", 3)) == 0)) {
		MR_GOTO(MR_ENTRY(MR_do_redo));
	}
	MR_redoip_slot_word(MR_curfr) = (MR_Word) MR_ENTRY(MR_do_fail);
	MR_tag_alloc_heap(MR_fv(3), 0, (MR_Integer) 1);
	MR_tfield(0, MR_fv(3), 0) = MR_r1;
	MR_r1 = MR_fv(1);
	MR_np_call_localret_ent(parse_tree__file_names__file_name_to_module_name_2_0,
		make__classify_target_2_4_0_i93);
MR_def_label(make__classify_target_2_4_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_redoip_slot_word(MR_curfr) = (MR_Word) MR_ENTRY(MR_do_fail);
	MR_r1 = MR_fv(2);
	MR_np_call_localret_ent(make__util__target_extension_synonym_2_0,
		make__classify_target_2_4_0_i9);
MR_def_label(make__classify_target_2_4_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(make__classify_target_2_4_0_i8);
	}
	MR_tag_alloc_heap(MR_fv(3), 0, (MR_Integer) 1);
	MR_tfield(0, MR_fv(3), 0) = MR_r2;
	MR_r1 = MR_fv(1);
	MR_np_call_localret_ent(parse_tree__file_names__file_name_to_module_name_2_0,
		make__classify_target_2_4_0_i93);
MR_def_label(make__classify_target_2_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_fv(4);
	MR_r2 = (MR_Integer) 551;
	MR_np_call_localret_ent(libs__globals__lookup_string_option_3_0,
		make__classify_target_2_4_0_i13);
MR_def_label(make__classify_target_2_4_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_fv(2), (char *) (MR_Word *) MR_r1) != 0)) {
		MR_GOTO_LAB(make__classify_target_2_4_0_i12);
	}
	MR_r1 = (MR_Word) MR_string_const("lib", 3);
	MR_r2 = MR_fv(1);
	MR_np_call_localret_ent(string__append_3_1,
		make__classify_target_2_4_0_i14);
MR_def_label(make__classify_target_2_4_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(make__classify_target_2_4_0_i12);
	}
	MR_fv(3) = (MR_Word) MR_TAG_COMMON(1,11,4);
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(parse_tree__file_names__file_name_to_module_name_2_0,
		make__classify_target_2_4_0_i93);
MR_def_label(make__classify_target_2_4_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_fv(4);
	MR_r2 = (MR_Integer) 550;
	MR_np_call_localret_ent(libs__globals__lookup_string_option_3_0,
		make__classify_target_2_4_0_i18);
MR_def_label(make__classify_target_2_4_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_fv(2), (char *) (MR_Word *) MR_r1) != 0)) {
		MR_GOTO_LAB(make__classify_target_2_4_0_i17);
	}
	MR_r1 = (MR_Word) MR_string_const("lib", 3);
	MR_r2 = MR_fv(1);
	MR_np_call_localret_ent(string__append_3_1,
		make__classify_target_2_4_0_i19);
MR_def_label(make__classify_target_2_4_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(make__classify_target_2_4_0_i17);
	}
	MR_fv(3) = (MR_Word) MR_TAG_COMMON(1,11,5);
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(parse_tree__file_names__file_name_to_module_name_2_0,
		make__classify_target_2_4_0_i93);
MR_def_label(make__classify_target_2_4_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_fv(4);
	MR_r2 = (MR_Integer) 552;
	MR_np_call_localret_ent(libs__globals__lookup_string_option_3_0,
		make__classify_target_2_4_0_i23);
MR_def_label(make__classify_target_2_4_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_fv(2), (char *) (MR_Word *) MR_r1) != 0)) {
		MR_GOTO_LAB(make__classify_target_2_4_0_i22);
	}
	MR_r2 = MR_fv(4);
	MR_fv(4) = MR_fv(1);
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(libs__globals__get_target_2_0,
		make__classify_target_2_4_0_i24);
MR_def_label(make__classify_target_2_4_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,2)) {
		MR_GOTO_LAB(make__classify_target_2_4_0_i26);
	}
	MR_fv(3) = (MR_Word) MR_TAG_COMMON(1,11,0);
	MR_r1 = MR_fv(1);
	MR_np_call_localret_ent(parse_tree__file_names__file_name_to_module_name_2_0,
		make__classify_target_2_4_0_i93);
MR_def_label(make__classify_target_2_4_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,6)) {
		MR_GOTO_LAB(make__classify_target_2_4_0_i28);
	}
	MR_fv(3) = (MR_Word) MR_TAG_COMMON(1,11,1);
	MR_r1 = MR_fv(1);
	MR_np_call_localret_ent(parse_tree__file_names__file_name_to_module_name_2_0,
		make__classify_target_2_4_0_i93);
MR_def_label(make__classify_target_2_4_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,3)) {
		MR_GOTO_LAB(make__classify_target_2_4_0_i30);
	}
	MR_fv(3) = (MR_Word) MR_TAG_COMMON(1,11,2);
	MR_r1 = MR_fv(1);
	MR_np_call_localret_ent(parse_tree__file_names__file_name_to_module_name_2_0,
		make__classify_target_2_4_0_i93);
MR_def_label(make__classify_target_2_4_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_fv(3) = (MR_Word) MR_TAG_COMMON(1,11,3);
	MR_r1 = MR_fv(1);
	MR_np_call_localret_ent(parse_tree__file_names__file_name_to_module_name_2_0,
		make__classify_target_2_4_0_i93);
MR_def_label(make__classify_target_2_4_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_fv(2), MR_string_const(".beams", 6)) != 0)) {
		MR_GOTO_LAB(make__classify_target_2_4_0_i34);
	}
	MR_r1 = (MR_Word) MR_string_const("lib", 3);
	MR_r2 = MR_fv(1);
	MR_np_call_localret_ent(string__append_3_1,
		make__classify_target_2_4_0_i36);
MR_def_label(make__classify_target_2_4_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(make__classify_target_2_4_0_i34);
	}
	MR_fv(3) = (MR_Word) MR_TAG_COMMON(1,11,6);
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(parse_tree__file_names__file_name_to_module_name_2_0,
		make__classify_target_2_4_0_i93);
MR_def_label(make__classify_target_2_4_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_redoip_slot_word(MR_maxfr) = (MR_Word) MR_LABEL_AP(make__classify_target_2_4_0_i40);
	MR_mktempframe(MR_LABEL_AP(make__classify_target_2_4_0_i42));
	MR_r1 = (MR_Word) MR_string_const(".all_", 5);
	MR_r2 = MR_fv(2);
	MR_np_call_localret_ent(string__append_3_1,
		make__classify_target_2_4_0_i43);
MR_def_label(make__classify_target_2_4_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(make__classify_target_2_4_0_i42);
	}
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(string__append_3_3,
		make__classify_target_2_4_0_i45);
MR_def_label(make__classify_target_2_4_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp(MR_string_const("s", 1), (char *) (MR_Word *) MR_r2) != 0)) {
		MR_GOTO(MR_ENTRY(MR_do_redo));
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const(".", 1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		make__classify_target_2_4_0_i109);
MR_def_label(make__classify_target_2_4_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_maxfr_word = (MR_Word) MR_prevfr_slot(MR_maxfr);
	MR_r1 = MR_fv(2);
	MR_np_call_localret_ent(string__append_3_3,
		make__classify_target_2_4_0_i47);
MR_def_label(make__classify_target_2_4_0,47)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp(MR_string_const("s", 1), (char *) (MR_Word *) MR_r2) != 0)) {
		MR_GOTO(MR_ENTRY(MR_do_redo));
	}
MR_def_label(make__classify_target_2_4_0,109)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_fv(5) = MR_r1;
	MR_r1 = MR_fv(4);
	MR_mktempframe(MR_LABEL_AP(make__classify_target_2_4_0_i49));
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r2, 0) = MR_fv(5);
	MR_np_call_localret_ent(fn__make__util__target_extension_2_1,
		make__classify_target_2_4_0_i51);
MR_def_label(make__classify_target_2_4_0,51)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TEST(MR_r1,1)) {
		MR_GOTO(MR_ENTRY(MR_do_redo));
	}
	MR_r3 = MR_r1;
	MR_r1 = MR_fv(1);
	MR_r2 = MR_r3;
	MR_GOTO_LAB(make__classify_target_2_4_0_i48);
MR_def_label(make__classify_target_2_4_0,49)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_maxfr_word = (MR_Word) MR_prevfr_slot(MR_maxfr);
	MR_r1 = MR_fv(5);
	MR_np_call_localret_ent(make__util__target_extension_synonym_2_0,
		make__classify_target_2_4_0_i54);
MR_def_label(make__classify_target_2_4_0,54)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO(MR_ENTRY(MR_do_redo));
	}
	if (MR_PTAG_TEST(MR_r2,1)) {
		MR_GOTO(MR_ENTRY(MR_do_redo));
	}
	MR_r1 = MR_fv(1);
MR_def_label(make__classify_target_2_4_0,48)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_redoip_slot_word(MR_curfr) = (MR_Word) MR_ENTRY(MR_do_fail);
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_r2;
	MR_tag_alloc_heap(MR_fv(3), 2, (MR_Integer) 1);
	MR_tfield(2, MR_fv(3), 0) = MR_tempr1;
	}
	MR_np_call_localret_ent(parse_tree__file_names__file_name_to_module_name_2_0,
		make__classify_target_2_4_0_i93);
MR_def_label(make__classify_target_2_4_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_redoip_slot_word(MR_curfr) = (MR_Word) MR_ENTRY(MR_do_fail);
	if ((strcmp((char *) (MR_Word *) MR_fv(2), MR_string_const(".check", 6)) != 0)) {
		MR_GOTO_LAB(make__classify_target_2_4_0_i60);
	}
	MR_fv(3) = (MR_Word) MR_TAG_COMMON(2,10,2);
	MR_r1 = MR_fv(1);
	MR_np_call_localret_ent(parse_tree__file_names__file_name_to_module_name_2_0,
		make__classify_target_2_4_0_i93);
MR_def_label(make__classify_target_2_4_0,60)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_fv(2), MR_string_const(".analyse", 8)) != 0)) {
		MR_GOTO_LAB(make__classify_target_2_4_0_i64);
	}
	MR_fv(3) = (MR_Word) MR_TAG_COMMON(2,10,3);
	MR_r1 = MR_fv(1);
	MR_np_call_localret_ent(parse_tree__file_names__file_name_to_module_name_2_0,
		make__classify_target_2_4_0_i93);
MR_def_label(make__classify_target_2_4_0,64)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_fv(2), MR_string_const(".clean", 6)) != 0)) {
		MR_GOTO_LAB(make__classify_target_2_4_0_i67);
	}
	MR_fv(3) = (MR_Word) MR_TAG_COMMON(2,10,4);
	MR_r1 = MR_fv(1);
	MR_np_call_localret_ent(parse_tree__file_names__file_name_to_module_name_2_0,
		make__classify_target_2_4_0_i93);
MR_def_label(make__classify_target_2_4_0,67)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_fv(2), MR_string_const(".realclean", 10)) != 0)) {
		MR_GOTO_LAB(make__classify_target_2_4_0_i70);
	}
	MR_fv(3) = (MR_Word) MR_TAG_COMMON(2,10,1);
	MR_r1 = MR_fv(1);
	MR_np_call_localret_ent(parse_tree__file_names__file_name_to_module_name_2_0,
		make__classify_target_2_4_0_i93);
MR_def_label(make__classify_target_2_4_0,70)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_fv(2), MR_string_const(".install", 8)) != 0)) {
		MR_GOTO_LAB(make__classify_target_2_4_0_i74);
	}
	MR_r1 = (MR_Word) MR_string_const("lib", 3);
	MR_r2 = MR_fv(1);
	MR_np_call_localret_ent(string__append_3_1,
		make__classify_target_2_4_0_i76);
MR_def_label(make__classify_target_2_4_0,76)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(make__classify_target_2_4_0_i74);
	}
	MR_fv(3) = (MR_Word) MR_TAG_COMMON(2,10,5);
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(parse_tree__file_names__file_name_to_module_name_2_0,
		make__classify_target_2_4_0_i93);
MR_def_label(make__classify_target_2_4_0,74)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_fv(2), MR_string_const(".doc", 4)) != 0)) {
		MR_GOTO(MR_ENTRY(MR_do_fail));
	}
	MR_fv(3) = (MR_Word) MR_TAG_COMMON(2,10,6);
	MR_r1 = MR_fv(1);
	MR_np_call_localret_ent(parse_tree__file_names__file_name_to_module_name_2_0,
		make__classify_target_2_4_0_i93);
MR_def_label(make__classify_target_2_4_0,93)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 0) = MR_r1;
	MR_tfield(0, MR_r2, 1) = MR_fv(3);
	MR_r1 = MR_r2;
	MR_succeed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(libs__handle_options__handle_given_options_8_0);
MR_decl_entry(libs__globals__get_options_2_0);
MR_decl_entry(require__unexpected_2_0);
MR_decl_entry(map__to_sorted_assoc_list_2_0);
MR_decl_entry(libs__options__inconsequential_options_1_0);
MR_decl_entry(fn__string__string_1_0);
MR_decl_entry(fn__libs__md4__md4sum_1_0);

MR_BEGIN_MODULE(make_module9)
	MR_init_entry1(make__option_table_hash_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__make__option_table_hash_4_0);
	MR_init_label8(make__option_table_hash_4_0,2,4,3,6,7,8,11,13)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'option_table_hash'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__make__option_table_hash_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(libs__handle_options__handle_given_options_8_0,
		make__option_table_hash_4_0_i2);
MR_def_label(make__option_table_hash_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r4,0,0)) {
		MR_GOTO_LAB(make__option_table_hash_4_0_i4);
	}
	MR_r1 = MR_r5;
	MR_np_call_localret_ent(libs__globals__get_options_2_0,
		make__option_table_hash_4_0_i6);
MR_def_label(make__option_table_hash_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("make.m", 6);
	MR_r2 = (MR_Word) MR_string_const("predicate \140make.option_table_hash\'/4: handle_options returned with errors", 73);
	MR_np_call_localret_ent(require__unexpected_2_0,
		make__option_table_hash_4_0_i3);
MR_def_label(make__option_table_hash_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(libs__globals__get_options_2_0,
		make__option_table_hash_4_0_i6);
MR_def_label(make__option_table_hash_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = (MR_Word) MR_CTOR0_ADDR(libs__options, option);
	MR_sv(2) = (MR_Word) MR_CTOR0_ADDR(getopt_io, option_data);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(map__to_sorted_assoc_list_2_0,
		make__option_table_hash_4_0_i7);
MR_def_label(make__option_table_hash_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_np_call_localret_ent(libs__options__inconsequential_options_1_0,
		make__option_table_hash_4_0_i8);
MR_def_label(make__option_table_hash_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 4);
	MR_tfield(0, MR_r2, 0) = (MR_Word) MR_COMMON(2,3);
	MR_tfield(0, MR_r2, 1) = (MR_Word) MR_ENTRY_AP(make__is_consequential_option_2_0);
	MR_tfield(0, MR_r2, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_r2, 3) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = (MR_Word) MR_TAG_COMMON(0,3,3);
	MR_r1 = MR_sv(3);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__filter_3_0,
		make__option_table_hash_4_0_i11);
MR_def_label(make__option_table_hash_4_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,5,3);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__string__string_1_0,
		make__option_table_hash_4_0_i13);
MR_def_label(make__option_table_hash_4_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(fn__libs__md4__md4sum_1_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(io__open_input_4_0);
MR_decl_entry(io__read_line_as_string_4_0);
MR_decl_entry(io__close_input_3_0);

MR_BEGIN_MODULE(make_module10)
	MR_init_entry1(make__compare_hash_file_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__make__compare_hash_file_6_0);
	MR_init_label10(make__compare_hash_file_6_0,2,4,5,7,23,8,11,12,25,14)
	MR_init_label3(make__compare_hash_file_6_0,15,16,18)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'compare_hash_file'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__make__compare_hash_file_6_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(io__open_input_4_0,
		make__compare_hash_file_6_0_i2);
MR_def_label(make__compare_hash_file_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,1)) {
		MR_GOTO_LAB(make__compare_hash_file_6_0_i4);
	}
	MR_r1 = MR_sv(1);
	MR_sv(3) = (MR_Integer) 0;
	MR_r2 = (MR_Integer) 41;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		make__compare_hash_file_6_0_i12);
MR_def_label(make__compare_hash_file_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_tfield(0, MR_r1, 0);
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(io__read_line_as_string_4_0,
		make__compare_hash_file_6_0_i5);
MR_def_label(make__compare_hash_file_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(make__compare_hash_file_6_0_i7);
	}
	MR_sv(3) = (MR_Integer) 0;
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(io__close_input_3_0,
		make__compare_hash_file_6_0_i11);
MR_def_label(make__compare_hash_file_6_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,2)) {
		MR_GOTO_LAB(make__compare_hash_file_6_0_i8);
	}
MR_def_label(make__compare_hash_file_6_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = (MR_Integer) 0;
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(io__close_input_3_0,
		make__compare_hash_file_6_0_i11);
MR_def_label(make__compare_hash_file_6_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(1, MR_r1, 0);
	if ((strcmp((char *) (MR_Word *) MR_tempr1, (char *) (MR_Word *) MR_sv(3)) != 0)) {
		MR_GOTO_LAB(make__compare_hash_file_6_0_i23);
	}
	MR_sv(3) = (MR_Integer) 1;
	MR_r1 = MR_sv(4);
	}
	MR_np_call_localret_ent(io__close_input_3_0,
		make__compare_hash_file_6_0_i11);
MR_def_label(make__compare_hash_file_6_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = (MR_Integer) 41;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		make__compare_hash_file_6_0_i12);
MR_def_label(make__compare_hash_file_6_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(make__compare_hash_file_6_0_i14);
	}
MR_def_label(make__compare_hash_file_6_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_decr_sp_and_return(5);
MR_def_label(make__compare_hash_file_6_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("% ", 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		make__compare_hash_file_6_0_i15);
MR_def_label(make__compare_hash_file_6_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(io__write_string_3_0,
		make__compare_hash_file_6_0_i16);
MR_def_label(make__compare_hash_file_6_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(3),0)) {
		MR_GOTO_LAB(make__compare_hash_file_6_0_i18);
	}
	MR_r1 = (MR_Word) MR_string_const(" will be UPDATED.\n", 18);
	MR_np_call_localret_ent(io__write_string_3_0,
		make__compare_hash_file_6_0_i25);
MR_def_label(make__compare_hash_file_6_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(" does not need updating.\n", 25);
	MR_np_call_localret_ent(io__write_string_3_0,
		make__compare_hash_file_6_0_i25);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(io__open_output_4_0);
MR_decl_entry(fn__io__error_message_1_0);
MR_decl_entry(io__nl_2_0);
MR_decl_entry(io__write_string_4_0);
MR_decl_entry(io__close_output_3_0);

MR_BEGIN_MODULE(make_module11)
	MR_init_entry1(make__write_hash_file_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__make__write_hash_file_5_0);
	MR_init_label10(make__write_hash_file_5_0,2,5,6,7,8,9,10,4,11,12)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'write_hash_file'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__make__write_hash_file_5_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_np_call_localret_ent(io__open_output_4_0,
		make__write_hash_file_5_0_i2);
MR_def_label(make__write_hash_file_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,1)) {
		MR_GOTO_LAB(make__write_hash_file_5_0_i4);
	}
	MR_sv(2) = MR_tfield(1, MR_r1, 0);
	MR_r1 = (MR_Word) MR_string_const("Error creating \140", 16);
	MR_np_call_localret_ent(io__write_string_3_0,
		make__write_hash_file_5_0_i5);
MR_def_label(make__write_hash_file_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(io__write_string_3_0,
		make__write_hash_file_5_0_i6);
MR_def_label(make__write_hash_file_5_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("\': ", 3);
	MR_np_call_localret_ent(io__write_string_3_0,
		make__write_hash_file_5_0_i7);
MR_def_label(make__write_hash_file_5_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(fn__io__error_message_1_0,
		make__write_hash_file_5_0_i8);
MR_def_label(make__write_hash_file_5_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__write_string_3_0,
		make__write_hash_file_5_0_i9);
MR_def_label(make__write_hash_file_5_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__nl_2_0,
		make__write_hash_file_5_0_i10);
MR_def_label(make__write_hash_file_5_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(3);
MR_def_label(make__write_hash_file_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_tfield(0, MR_r1, 0);
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(io__write_string_4_0,
		make__write_hash_file_5_0_i11);
MR_def_label(make__write_hash_file_5_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(io__close_output_3_0,
		make__write_hash_file_5_0_i12);
MR_def_label(make__write_hash_file_5_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(make__options_file__lookup_mmc_module_options_6_0);
MR_decl_entry(fn__list__condense_1_0);
MR_decl_entry(__Unify___list__list_1_0);
MR_decl_entry(parse_tree__file_names__module_name_to_file_name_7_0);

MR_BEGIN_MODULE(make_module12)
	MR_init_entry1(make__make_track_flags_files_2_9_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__make__make_track_flags_files_2_9_0);
	MR_init_label10(make__make_track_flags_files_2_9_0,2,4,7,9,8,11,13,14,15,18)
	MR_init_label1(make__make_track_flags_files_2_9_0,17)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'make_track_flags_files_2'/9 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__make__make_track_flags_files_2_9_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(3) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(4) = MR_r3;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_sv(6) = MR_tempr1;
	MR_r2 = MR_tfield(0, MR_tempr1, 4);
	MR_r3 = MR_sv(2);
	}
	MR_np_call_localret_ent(make__options_file__lookup_mmc_module_options_6_0,
		make__make_track_flags_files_2_9_0_i2);
MR_def_label(make__make_track_flags_files_2_9_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(make__make_track_flags_files_2_9_0_i4);
	}
	MR_r1 = (MR_Integer) 0;
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(6);
	MR_decr_sp_and_return(7);
MR_def_label(make__make_track_flags_files_2_9_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_tfield(0, MR_sv(6), 3);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tfield(1, MR_r1, 0);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = MR_tempr2;
	}
	MR_np_call_localret_ent(fn__list__condense_1_0,
		make__make_track_flags_files_2_9_0_i7);
MR_def_label(make__make_track_flags_files_2_9_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_sv(1) = MR_tfield(0, MR_tempr1, 1);
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = MR_sv(5);
	MR_r3 = MR_tfield(0, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(__Unify___list__list_1_0,
		make__make_track_flags_files_2_9_0_i9);
MR_def_label(make__make_track_flags_files_2_9_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(make__make_track_flags_files_2_9_0_i8);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(2);
	MR_sv(2) = MR_sv(1);
	MR_sv(5) = MR_sv(4);
	MR_r3 = (MR_Word) MR_string_const(".track_flags", 12);
	MR_r4 = (MR_Integer) 0;
	MR_GOTO_LAB(make__make_track_flags_files_2_9_0_i13);
MR_def_label(make__make_track_flags_files_2_9_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(make__option_table_hash_4_0,
		make__make_track_flags_files_2_9_0_i11);
MR_def_label(make__make_track_flags_files_2_9_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(5);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(2);
	MR_sv(2) = MR_tfield(0, MR_tempr1, 1);
	MR_sv(5) = MR_tempr1;
	MR_r3 = (MR_Word) MR_string_const(".track_flags", 12);
	MR_r4 = (MR_Integer) 0;
	}
MR_def_label(make__make_track_flags_files_2_9_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_np_call_localret_ent(parse_tree__file_names__module_name_to_file_name_7_0,
		make__make_track_flags_files_2_9_0_i14);
MR_def_label(make__make_track_flags_files_2_9_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(2);
	}
	MR_np_call_localret_ent(make__compare_hash_file_6_0,
		make__make_track_flags_files_2_9_0_i15);
MR_def_label(make__make_track_flags_files_2_9_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(make__make_track_flags_files_2_9_0_i17);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(make__write_hash_file_5_0,
		make__make_track_flags_files_2_9_0_i18);
MR_def_label(make__make_track_flags_files_2_9_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(6);
	MR_decr_sp_and_return(7);
MR_def_label(make__make_track_flags_files_2_9_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(6);
	MR_decr_sp_and_return(7);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(set__contains_2_0);

MR_BEGIN_MODULE(make_module13)
	MR_init_entry1(make__is_consequential_option_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__make__is_consequential_option_2_0);
	MR_init_label2(make__is_consequential_option_2_0,3,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'is_consequential_option'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__make__is_consequential_option_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(libs__options, option);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tfield(0, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(set__contains_2_0,
		make__is_consequential_option_2_0_i3);
MR_def_label(make__is_consequential_option_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(make__is_consequential_option_2_0_i1);
	}
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(make__is_consequential_option_2_0,1)
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


MR_BEGIN_MODULE(make_module14)
	MR_init_entry1(__Unify___make__c_header_type_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___make__c_header_type_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___make__c_header_type_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_r1 == MR_r2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(private_builtin__builtin_compare_int_3_0);

MR_BEGIN_MODULE(make_module15)
	MR_init_entry1(__Compare___make__c_header_type_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___make__c_header_type_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___make__c_header_type_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(make_module16)
	MR_init_entry1(__Unify___make__compilation_task_type_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___make__compilation_task_type_0_0);
	MR_init_label5(__Unify___make__compilation_task_type_0_0,5,7,24,9,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___make__compilation_task_type_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___make__compilation_task_type_0_0_i24);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_tempr1;
	MR_tempr2 = MR_r2;
	MR_sv(2) = MR_tempr2;
	if (MR_PTAG_TESTR(MR_tempr1,3)) {
		MR_GOTO_LAB(__Unify___make__compilation_task_type_0_0_i5);
	}
	if (MR_PTAG_TESTR(MR_tempr2,3)) {
		MR_GOTO_LAB(__Unify___make__compilation_task_type_0_0_i1);
	}
	MR_r1 = MR_tfield(3, MR_tempr1, 0);
	MR_r2 = MR_tfield(3, MR_tempr2, 0);
	if ((MR_r1 != MR_r2)) {
		MR_GOTO_LAB(__Unify___make__compilation_task_type_0_0_i1);
	}
	MR_r1 = MR_tfield(3, MR_tempr1, 1);
	MR_r2 = MR_tfield(3, MR_tempr2, 1);
	MR_r1 = (strcmp((char *) (MR_Word *) MR_r1, (char *) (MR_Word *) MR_r2) == 0);
	MR_decr_sp(2);
	MR_proceed();
	}
MR_def_label(__Unify___make__compilation_task_type_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),2)) {
		MR_GOTO_LAB(__Unify___make__compilation_task_type_0_0_i7);
	}
	if (MR_PTAG_TESTR(MR_sv(2),2)) {
		MR_GOTO_LAB(__Unify___make__compilation_task_type_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_r1 = MR_tfield(2, MR_tempr1, 0);
	MR_tempr2 = MR_sv(2);
	MR_r2 = MR_tfield(2, MR_tempr2, 0);
	if ((MR_r1 != MR_r2)) {
		MR_GOTO_LAB(__Unify___make__compilation_task_type_0_0_i1);
	}
	MR_r1 = MR_tfield(2, MR_tempr1, 1);
	MR_r2 = MR_tfield(2, MR_tempr2, 1);
	MR_r1 = (MR_r1 == MR_r2);
	MR_decr_sp(2);
	MR_proceed();
	}
MR_def_label(__Unify___make__compilation_task_type_0_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),0)) {
		MR_GOTO_LAB(__Unify___make__compilation_task_type_0_0_i9);
	}
	if (MR_PTAG_TESTR(MR_sv(2),0)) {
		MR_GOTO_LAB(__Unify___make__compilation_task_type_0_0_i1);
	}
	MR_r1 = MR_tfield(0, MR_sv(1), 0);
	MR_r2 = MR_tfield(0, MR_sv(2), 0);
	MR_r1 = (MR_r1 == MR_r2);
	MR_decr_sp(2);
	MR_proceed();
MR_def_label(__Unify___make__compilation_task_type_0_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp(2);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___make__compilation_task_type_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Unify___make__compilation_task_type_0_0_i1);
	}
	MR_r1 = MR_tfield(1, MR_sv(1), 0);
	MR_r2 = MR_tfield(1, MR_sv(2), 0);
	MR_r1 = (MR_r1 == MR_r2);
	MR_decr_sp(2);
	MR_proceed();
MR_def_label(__Unify___make__compilation_task_type_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp(2);
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(private_builtin__builtin_compare_string_3_0);

MR_BEGIN_MODULE(make_module17)
	MR_init_entry1(__Compare___make__compilation_task_type_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___make__compilation_task_type_0_0);
	MR_init_label10(__Compare___make__compilation_task_type_0_0,3,2,9,7,14,5,18,21,19,16)
	MR_init_label9(__Compare___make__compilation_task_type_0_0,29,30,71,27,34,55,35,56,133)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___make__compilation_task_type_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___make__compilation_task_type_0_0_i3);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___make__compilation_task_type_0_0_i2);
MR_def_label(__Compare___make__compilation_task_type_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___make__compilation_task_type_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),3)) {
		MR_GOTO_LAB(__Compare___make__compilation_task_type_0_0_i5);
	}
	if (MR_PTAG_TESTR(MR_sv(2),3)) {
		MR_GOTO_LAB(__Compare___make__compilation_task_type_0_0_i7);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(1);
	MR_tempr1 = MR_tfield(3, MR_tempr5, 1);
	MR_tempr6 = MR_sv(2);
	MR_tempr2 = MR_tfield(3, MR_tempr6, 1);
	MR_tempr3 = MR_tempr5;
	MR_sv(1) = MR_tempr2;
	MR_tempr4 = MR_tempr6;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_tfield(3, MR_tempr3, 0);
	MR_r2 = MR_tfield(3, MR_tempr4, 0);
	}
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___make__compilation_task_type_0_0_i9);
MR_def_label(__Compare___make__compilation_task_type_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___make__compilation_task_type_0_0_i133);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(1);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(private_builtin__builtin_compare_string_3_0);
MR_def_label(__Compare___make__compilation_task_type_0_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),2)) {
		MR_GOTO_LAB(__Compare___make__compilation_task_type_0_0_i14);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___make__compilation_task_type_0_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),0)) {
		MR_GOTO_LAB(__Compare___make__compilation_task_type_0_0_i56);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___make__compilation_task_type_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),2)) {
		MR_GOTO_LAB(__Compare___make__compilation_task_type_0_0_i16);
	}
	if (MR_PTAG_TESTR(MR_sv(2),3)) {
		MR_GOTO_LAB(__Compare___make__compilation_task_type_0_0_i18);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___make__compilation_task_type_0_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),2)) {
		MR_GOTO_LAB(__Compare___make__compilation_task_type_0_0_i19);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(1);
	MR_tempr1 = MR_tfield(2, MR_tempr5, 1);
	MR_tempr6 = MR_sv(2);
	MR_tempr2 = MR_tfield(2, MR_tempr6, 1);
	MR_tempr3 = MR_tempr5;
	MR_sv(1) = MR_tempr2;
	MR_tempr4 = MR_tempr6;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_tfield(2, MR_tempr3, 0);
	MR_r2 = MR_tfield(2, MR_tempr4, 0);
	}
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___make__compilation_task_type_0_0_i21);
MR_def_label(__Compare___make__compilation_task_type_0_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___make__compilation_task_type_0_0_i133);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(1);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
MR_def_label(__Compare___make__compilation_task_type_0_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),0)) {
		MR_GOTO_LAB(__Compare___make__compilation_task_type_0_0_i56);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___make__compilation_task_type_0_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),0)) {
		MR_GOTO_LAB(__Compare___make__compilation_task_type_0_0_i27);
	}
	if (MR_PTAG_TESTR(MR_sv(2),3)) {
		MR_GOTO_LAB(__Compare___make__compilation_task_type_0_0_i29);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___make__compilation_task_type_0_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),2)) {
		MR_GOTO_LAB(__Compare___make__compilation_task_type_0_0_i30);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___make__compilation_task_type_0_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),0)) {
		MR_GOTO_LAB(__Compare___make__compilation_task_type_0_0_i55);
	}
MR_def_label(__Compare___make__compilation_task_type_0_0,71)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_mask_field(MR_sv(1), 0);
	MR_r2 = MR_mask_field(MR_sv(2), 0);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
MR_def_label(__Compare___make__compilation_task_type_0_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),3)) {
		MR_GOTO_LAB(__Compare___make__compilation_task_type_0_0_i34);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___make__compilation_task_type_0_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),2)) {
		MR_GOTO_LAB(__Compare___make__compilation_task_type_0_0_i35);
	}
MR_def_label(__Compare___make__compilation_task_type_0_0,55)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___make__compilation_task_type_0_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),0)) {
		MR_GOTO_LAB(__Compare___make__compilation_task_type_0_0_i71);
	}
MR_def_label(__Compare___make__compilation_task_type_0_0,56)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___make__compilation_task_type_0_0,133)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___version_hash_table__version_hash_table_2_0);
MR_decl_entry(__Unify___version_array__version_array_1_0);

MR_BEGIN_MODULE(make_module18)
	MR_init_entry1(__Unify___make__dependency_file_index_map_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___make__dependency_file_index_map_0_0);
	MR_init_label4(__Unify___make__dependency_file_index_map_0_0,4,6,8,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___make__dependency_file_index_map_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___make__dependency_file_index_map_0_0_i8);
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
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(make__dependencies, dependency_file);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(make__dependencies, dependency_file_index);
	MR_r3 = MR_tfield(0, MR_tempr1, 0);
	MR_r4 = MR_tfield(0, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(__Unify___version_hash_table__version_hash_table_2_0,
		__Unify___make__dependency_file_index_map_0_0_i4);
MR_def_label(__Unify___make__dependency_file_index_map_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___make__dependency_file_index_map_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(make__dependencies, dependency_file);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(3);
	MR_np_call_localret_ent(__Unify___version_array__version_array_1_0,
		__Unify___make__dependency_file_index_map_0_0_i6);
MR_def_label(__Unify___make__dependency_file_index_map_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___make__dependency_file_index_map_0_0_i1);
	}
	MR_r1 = (MR_sv(2) == MR_sv(4));
	MR_decr_sp_and_return(5);
MR_def_label(__Unify___make__dependency_file_index_map_0_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___make__dependency_file_index_map_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Compare___version_hash_table__version_hash_table_2_0);
MR_decl_entry(__Compare___version_array__version_array_1_0);

MR_BEGIN_MODULE(make_module19)
	MR_init_entry1(__Compare___make__dependency_file_index_map_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___make__dependency_file_index_map_0_0);
	MR_init_label5(__Compare___make__dependency_file_index_map_0_0,3,2,5,9,29)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___make__dependency_file_index_map_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___make__dependency_file_index_map_0_0_i3);
	}
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___make__dependency_file_index_map_0_0_i2);
MR_def_label(__Compare___make__dependency_file_index_map_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___make__dependency_file_index_map_0_0,2)
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
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(make__dependencies, dependency_file);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(make__dependencies, dependency_file_index);
	MR_r3 = MR_tfield(0, MR_tempr3, 0);
	MR_r4 = MR_tfield(0, MR_tempr4, 0);
	}
	MR_np_call_localret_ent(__Compare___version_hash_table__version_hash_table_2_0,
		__Compare___make__dependency_file_index_map_0_0_i5);
MR_def_label(__Compare___make__dependency_file_index_map_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___make__dependency_file_index_map_0_0_i29);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(make__dependencies, dependency_file);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(3);
	MR_np_call_localret_ent(__Compare___version_array__version_array_1_0,
		__Compare___make__dependency_file_index_map_0_0_i9);
MR_def_label(__Compare___make__dependency_file_index_map_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___make__dependency_file_index_map_0_0_i29);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(4);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
MR_def_label(__Compare___make__dependency_file_index_map_0_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(make_module20)
	MR_init_entry1(__Unify___make__dependency_status_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___make__dependency_status_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___make__dependency_status_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_r1 == MR_r2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(make_module21)
	MR_init_entry1(__Compare___make__dependency_status_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___make__dependency_status_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___make__dependency_status_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___tree234__tree234_2_0);

MR_BEGIN_MODULE(make_module22)
	MR_init_entry1(__Unify___make__file_timestamps_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___make__file_timestamps_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___make__file_timestamps_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_tempr2 = MR_r2;
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,5,1);
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

MR_BEGIN_MODULE(make_module23)
	MR_init_entry1(__Compare___make__file_timestamps_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___make__file_timestamps_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___make__file_timestamps_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_tempr2 = MR_r2;
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,5,1);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tempr2;
	MR_np_tailcall_ent(__Compare___tree234__tree234_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(make_module24)
	MR_init_entry1(__Unify___make__last_hash_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___make__last_hash_0_0);
	MR_init_label3(__Unify___make__last_hash_0_0,4,6,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___make__last_hash_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___make__last_hash_0_0_i6);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_tfield(0, MR_tempr1, 1);
	MR_tempr2 = MR_sv(2);
	MR_sv(2) = MR_tfield(0, MR_tempr2, 1);
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = MR_tfield(0, MR_tempr1, 0);
	MR_r3 = MR_tfield(0, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(__Unify___list__list_1_0,
		__Unify___make__last_hash_0_0_i4);
MR_def_label(__Unify___make__last_hash_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___make__last_hash_0_0_i1);
	}
	MR_r1 = (strcmp((char *) (MR_Word *) MR_sv(1), (char *) (MR_Word *) MR_sv(2)) == 0);
	MR_decr_sp_and_return(3);
MR_def_label(__Unify___make__last_hash_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___make__last_hash_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Compare___list__list_1_0);

MR_BEGIN_MODULE(make_module25)
	MR_init_entry1(__Compare___make__last_hash_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___make__last_hash_0_0);
	MR_init_label4(__Compare___make__last_hash_0_0,3,2,5,21)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___make__last_hash_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___make__last_hash_0_0_i3);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___make__last_hash_0_0_i2);
MR_def_label(__Compare___make__last_hash_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___make__last_hash_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(2);
	MR_tempr1 = MR_tfield(0, MR_tempr5, 1);
	MR_tempr6 = MR_sv(1);
	MR_tempr2 = MR_tfield(0, MR_tempr6, 1);
	MR_tempr3 = MR_tempr6;
	MR_sv(1) = MR_tempr2;
	MR_tempr4 = MR_tempr5;
	MR_sv(2) = MR_tempr1;
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = MR_tfield(0, MR_tempr3, 0);
	MR_r3 = MR_tfield(0, MR_tempr4, 0);
	}
	MR_np_call_localret_ent(__Compare___list__list_1_0,
		__Compare___make__last_hash_0_0_i5);
MR_def_label(__Compare___make__last_hash_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___make__last_hash_0_0_i21);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(private_builtin__builtin_compare_string_3_0);
MR_def_label(__Compare___make__last_hash_0_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___mdbcomp__prim_data__sym_name_0_0);

MR_BEGIN_MODULE(make_module26)
	MR_init_entry1(__Unify___make__linked_target_file_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___make__linked_target_file_0_0);
	MR_init_label3(__Unify___make__linked_target_file_0_0,4,6,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___make__linked_target_file_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___make__linked_target_file_0_0_i6);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_tfield(0, MR_tempr1, 1);
	MR_tempr2 = MR_sv(2);
	MR_sv(2) = MR_tfield(0, MR_tempr2, 1);
	MR_r1 = MR_tfield(0, MR_tempr1, 0);
	MR_r2 = MR_tfield(0, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(__Unify___mdbcomp__prim_data__sym_name_0_0,
		__Unify___make__linked_target_file_0_0_i4);
MR_def_label(__Unify___make__linked_target_file_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___make__linked_target_file_0_0_i1);
	}
	MR_r1 = (MR_sv(1) == MR_sv(2));
	MR_decr_sp_and_return(3);
MR_def_label(__Unify___make__linked_target_file_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___make__linked_target_file_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Compare___mdbcomp__prim_data__sym_name_0_0);

MR_BEGIN_MODULE(make_module27)
	MR_init_entry1(__Compare___make__linked_target_file_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___make__linked_target_file_0_0);
	MR_init_label4(__Compare___make__linked_target_file_0_0,3,2,5,21)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___make__linked_target_file_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___make__linked_target_file_0_0_i3);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___make__linked_target_file_0_0_i2);
MR_def_label(__Compare___make__linked_target_file_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___make__linked_target_file_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(2);
	MR_tempr1 = MR_tfield(0, MR_tempr5, 1);
	MR_tempr6 = MR_sv(1);
	MR_tempr2 = MR_tfield(0, MR_tempr6, 1);
	MR_tempr3 = MR_tempr6;
	MR_sv(1) = MR_tempr2;
	MR_tempr4 = MR_tempr5;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_tfield(0, MR_tempr3, 0);
	MR_r2 = MR_tfield(0, MR_tempr4, 0);
	}
	MR_np_call_localret_ent(__Compare___mdbcomp__prim_data__sym_name_0_0,
		__Compare___make__linked_target_file_0_0_i5);
MR_def_label(__Compare___make__linked_target_file_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___make__linked_target_file_0_0_i21);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
MR_def_label(__Compare___make__linked_target_file_0_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(make_module28)
	MR_init_entry1(__Unify___make__make_error_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___make__make_error_0_0);
	MR_init_label4(__Unify___make__make_error_0_0,5,21,9,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___make__make_error_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___make__make_error_0_0_i21);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_tempr1;
	MR_tempr2 = MR_r2;
	MR_sv(2) = MR_tempr2;
	if (MR_PTAG_TESTR(MR_tempr1,1)) {
		MR_GOTO_LAB(__Unify___make__make_error_0_0_i5);
	}
	if (MR_PTAG_TESTR(MR_tempr2,1)) {
		MR_GOTO_LAB(__Unify___make__make_error_0_0_i1);
	}
	MR_r1 = MR_tfield(1, MR_tempr1, 0);
	MR_r2 = MR_tfield(1, MR_tempr2, 0);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Unify___mdbcomp__prim_data__sym_name_0_0);
	}
MR_def_label(__Unify___make__make_error_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),2)) {
		MR_GOTO_LAB(__Unify___make__make_error_0_0_i9);
	}
	if (MR_PTAG_TESTR(MR_sv(2),2)) {
		MR_GOTO_LAB(__Unify___make__make_error_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(2, MR_sv(1), 0);
	MR_tempr2 = MR_tfield(2, MR_sv(2), 0);
	MR_r1 = (strcmp((char *) (MR_Word *) MR_tempr1, (char *) (MR_Word *) MR_tempr2) == 0);
	MR_decr_sp_and_return(3);
	}
MR_def_label(__Unify___make__make_error_0_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___make__make_error_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),0)) {
		MR_GOTO_LAB(__Unify___make__make_error_0_0_i1);
	}
	MR_r1 = MR_body((MR_Integer) MR_sv(1), (MR_Integer) 0);
	MR_r2 = MR_body((MR_Integer) MR_sv(2), (MR_Integer) 0);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Unify___make__target_file_0_0);
MR_def_label(__Unify___make__make_error_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(make_module29)
	MR_init_entry1(__Compare___make__make_error_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___make__make_error_0_0);
	MR_init_label9(__Compare___make__make_error_0_0,3,2,7,5,34,12,10,16,17)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___make__make_error_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___make__make_error_0_0_i3);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___make__make_error_0_0_i2);
MR_def_label(__Compare___make__make_error_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___make__make_error_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),1)) {
		MR_GOTO_LAB(__Compare___make__make_error_0_0_i5);
	}
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Compare___make__make_error_0_0_i7);
	}
	MR_r1 = MR_tfield(1, MR_sv(1), 0);
	MR_r2 = MR_tfield(1, MR_sv(2), 0);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Compare___mdbcomp__prim_data__sym_name_0_0);
MR_def_label(__Compare___make__make_error_0_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),2)) {
		MR_GOTO_LAB(__Compare___make__make_error_0_0_i34);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___make__make_error_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),2)) {
		MR_GOTO_LAB(__Compare___make__make_error_0_0_i10);
	}
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Compare___make__make_error_0_0_i12);
	}
MR_def_label(__Compare___make__make_error_0_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___make__make_error_0_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),2)) {
		MR_GOTO_LAB(__Compare___make__make_error_0_0_i34);
	}
	MR_r1 = MR_tfield(2, MR_sv(1), 0);
	MR_r2 = MR_tfield(2, MR_sv(2), 0);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(private_builtin__builtin_compare_string_3_0);
MR_def_label(__Compare___make__make_error_0_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Compare___make__make_error_0_0_i16);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___make__make_error_0_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),2)) {
		MR_GOTO_LAB(__Compare___make__make_error_0_0_i17);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___make__make_error_0_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_body((MR_Integer) MR_sv(1), (MR_Integer) 0);
	MR_r2 = MR_body((MR_Integer) MR_sv(2), (MR_Integer) 0);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Compare___make__target_file_0_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

extern const MR_TypeCtorInfo_Struct mercury_data_make__options_file__type_ctor_info_options_variables_0;
MR_decl_entry(builtin__unify_2_0);
extern const MR_TypeCtorInfo_Struct mercury_data_make__dependencies__type_ctor_info_cached_direct_imports_0;
extern const MR_TypeCtorInfo_Struct mercury_data_make__dependencies__type_ctor_info_cached_transitive_dependencies_0;
extern const MR_TypeCtorInfo_Struct mercury_data_make__dependencies__type_ctor_info_cached_foreign_imports_0;
MR_decl_entry(__Unify___set_ordlist__set_ordlist_1_0);
MR_decl_entry(__Unify___maybe__maybe_1_0);

MR_BEGIN_MODULE(make_module30)
	MR_init_entry1(__Unify___make__make_info_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___make__make_info_0_0);
	MR_init_label10(__Unify___make__make_info_0_0,5,8,11,13,15,17,19,21,23,25)
	MR_init_label7(__Unify___make__make_info_0_0,27,29,31,33,36,38,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___make__make_info_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___make__make_info_0_0_i38);
	}
	MR_incr_sp(35);
	MR_sv(35) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_tfield(0, MR_tempr1, 1);
	MR_tempr2 = MR_sv(2);
	MR_sv(2) = MR_tfield(0, MR_tempr1, 2);
	MR_sv(3) = MR_tfield(0, MR_tempr1, 3);
	MR_sv(4) = MR_tfield(0, MR_tempr1, 4);
	MR_sv(5) = MR_tfield(0, MR_tempr1, 5);
	MR_sv(6) = MR_tfield(0, MR_tempr1, 6);
	MR_sv(7) = MR_tfield(0, MR_tempr1, 7);
	MR_sv(8) = MR_tfield(0, MR_tempr1, 8);
	MR_sv(9) = MR_tfield(0, MR_tempr1, 9);
	MR_sv(10) = MR_tfield(0, MR_tempr1, 10);
	MR_sv(11) = MR_tfield(0, MR_tempr1, 11);
	MR_sv(12) = MR_tfield(0, MR_tempr1, 12);
	MR_sv(13) = MR_tfield(0, MR_tempr1, 13);
	MR_sv(14) = MR_tfield(0, MR_tempr1, 14);
	MR_sv(15) = MR_tfield(0, MR_tempr1, 15);
	MR_sv(16) = MR_tfield(0, MR_tempr1, 16);
	MR_sv(17) = MR_tfield(0, MR_tempr1, 17);
	MR_sv(18) = MR_tfield(0, MR_tempr2, 1);
	MR_sv(19) = MR_tfield(0, MR_tempr2, 2);
	MR_sv(20) = MR_tfield(0, MR_tempr2, 3);
	MR_sv(21) = MR_tfield(0, MR_tempr2, 4);
	MR_sv(22) = MR_tfield(0, MR_tempr2, 5);
	MR_sv(23) = MR_tfield(0, MR_tempr2, 6);
	MR_sv(24) = MR_tfield(0, MR_tempr2, 7);
	MR_sv(25) = MR_tfield(0, MR_tempr2, 8);
	MR_sv(26) = MR_tfield(0, MR_tempr2, 9);
	MR_sv(27) = MR_tfield(0, MR_tempr2, 10);
	MR_sv(28) = MR_tfield(0, MR_tempr2, 11);
	MR_sv(29) = MR_tfield(0, MR_tempr2, 12);
	MR_sv(30) = MR_tfield(0, MR_tempr2, 13);
	MR_sv(31) = MR_tfield(0, MR_tempr2, 14);
	MR_sv(32) = MR_tfield(0, MR_tempr2, 15);
	MR_sv(33) = MR_tfield(0, MR_tempr2, 16);
	MR_sv(34) = MR_tfield(0, MR_tempr2, 17);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__prim_data, sym_name);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,5,0);
	MR_r3 = MR_tfield(0, MR_tempr1, 0);
	MR_r4 = MR_tfield(0, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(__Unify___tree234__tree234_2_0,
		__Unify___make__make_info_0_0_i5);
MR_def_label(__Unify___make__make_info_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___make__make_info_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,5,1);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(18);
	MR_np_call_localret_ent(__Unify___tree234__tree234_2_0,
		__Unify___make__make_info_0_0_i8);
MR_def_label(__Unify___make__make_info_0_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___make__make_info_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,3,4);
	MR_r2 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(19);
	MR_np_call_localret_ent(__Unify___tree234__tree234_2_0,
		__Unify___make__make_info_0_0_i11);
MR_def_label(__Unify___make__make_info_0_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___make__make_info_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(20);
	MR_np_call_localret_ent(__Unify___list__list_1_0,
		__Unify___make__make_info_0_0_i13);
MR_def_label(__Unify___make__make_info_0_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___make__make_info_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(make__options_file, options_variables);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(21);
	MR_np_call_localret_ent(builtin__unify_2_0,
		__Unify___make__make_info_0_0_i15);
MR_def_label(__Unify___make__make_info_0_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___make__make_info_0_0_i1);
	}
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(22);
	MR_np_call_localret_ent(__Unify___make__module_index_map_0_0,
		__Unify___make__make_info_0_0_i17);
MR_def_label(__Unify___make__make_info_0_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___make__make_info_0_0_i1);
	}
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(23);
	MR_np_call_localret_ent(__Unify___make__dependency_file_index_map_0_0,
		__Unify___make__make_info_0_0_i19);
MR_def_label(__Unify___make__make_info_0_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___make__make_info_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(make__dependencies, dependency_file);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(make, dependency_status);
	MR_r3 = MR_sv(7);
	MR_r4 = MR_sv(24);
	MR_np_call_localret_ent(__Unify___version_hash_table__version_hash_table_2_0,
		__Unify___make__make_info_0_0_i21);
MR_def_label(__Unify___make__make_info_0_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___make__make_info_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(make__dependencies, cached_direct_imports);
	MR_r2 = MR_sv(8);
	MR_r3 = MR_sv(25);
	MR_np_call_localret_ent(builtin__unify_2_0,
		__Unify___make__make_info_0_0_i23);
MR_def_label(__Unify___make__make_info_0_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___make__make_info_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(make__dependencies, cached_direct_imports);
	MR_r2 = MR_sv(9);
	MR_r3 = MR_sv(26);
	MR_np_call_localret_ent(builtin__unify_2_0,
		__Unify___make__make_info_0_0_i25);
MR_def_label(__Unify___make__make_info_0_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___make__make_info_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(make__dependencies, cached_transitive_dependencies);
	MR_r2 = MR_sv(10);
	MR_r3 = MR_sv(27);
	MR_np_call_localret_ent(builtin__unify_2_0,
		__Unify___make__make_info_0_0_i27);
MR_def_label(__Unify___make__make_info_0_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___make__make_info_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(make__dependencies, cached_foreign_imports);
	MR_r2 = MR_sv(11);
	MR_r3 = MR_sv(28);
	MR_np_call_localret_ent(builtin__unify_2_0,
		__Unify___make__make_info_0_0_i29);
MR_def_label(__Unify___make__make_info_0_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___make__make_info_0_0_i1);
	}
	if ((MR_sv(12) != MR_sv(29))) {
		MR_GOTO_LAB(__Unify___make__make_info_0_0_i1);
	}
	if ((MR_sv(13) != MR_sv(30))) {
		MR_GOTO_LAB(__Unify___make__make_info_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__prim_data, sym_name);
	MR_r2 = MR_sv(14);
	MR_r3 = MR_sv(31);
	MR_np_call_localret_ent(__Unify___set_ordlist__set_ordlist_1_0,
		__Unify___make__make_info_0_0_i31);
MR_def_label(__Unify___make__make_info_0_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___make__make_info_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__prim_data, sym_name);
	MR_r2 = MR_sv(15);
	MR_r3 = MR_sv(32);
	MR_np_call_localret_ent(__Unify___maybe__maybe_1_0,
		__Unify___make__make_info_0_0_i33);
MR_def_label(__Unify___make__make_info_0_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___make__make_info_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,3,1);
	MR_r2 = MR_sv(16);
	MR_r3 = MR_sv(33);
	MR_np_call_localret_ent(__Unify___set_ordlist__set_ordlist_1_0,
		__Unify___make__make_info_0_0_i36);
MR_def_label(__Unify___make__make_info_0_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___make__make_info_0_0_i1);
	}
	MR_r1 = (MR_sv(17) == MR_sv(34));
	MR_decr_sp_and_return(35);
MR_def_label(__Unify___make__make_info_0_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___make__make_info_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(35);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(builtin__compare_3_0);
MR_decl_entry(__Compare___set_ordlist__set_ordlist_1_0);
MR_decl_entry(__Compare___maybe__maybe_1_0);

MR_BEGIN_MODULE(make_module31)
	MR_init_entry1(__Compare___make__make_info_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___make__make_info_0_0);
	MR_init_label10(__Compare___make__make_info_0_0,3,2,6,11,16,20,24,28,32,36)
	MR_init_label10(__Compare___make__make_info_0_0,40,44,48,52,56,60,64,68,73,207)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___make__make_info_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___make__make_info_0_0_i3);
	}
	MR_incr_sp(35);
	MR_sv(35) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___make__make_info_0_0_i2);
MR_def_label(__Compare___make__make_info_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___make__make_info_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(2);
	MR_sv(34) = MR_tfield(0, MR_tempr5, 17);
	MR_sv(33) = MR_tfield(0, MR_tempr5, 16);
	MR_sv(32) = MR_tfield(0, MR_tempr5, 15);
	MR_sv(31) = MR_tfield(0, MR_tempr5, 14);
	MR_sv(30) = MR_tfield(0, MR_tempr5, 13);
	MR_sv(29) = MR_tfield(0, MR_tempr5, 12);
	MR_sv(28) = MR_tfield(0, MR_tempr5, 11);
	MR_sv(27) = MR_tfield(0, MR_tempr5, 10);
	MR_sv(26) = MR_tfield(0, MR_tempr5, 9);
	MR_sv(25) = MR_tfield(0, MR_tempr5, 8);
	MR_sv(24) = MR_tfield(0, MR_tempr5, 7);
	MR_sv(23) = MR_tfield(0, MR_tempr5, 6);
	MR_sv(22) = MR_tfield(0, MR_tempr5, 5);
	MR_sv(21) = MR_tfield(0, MR_tempr5, 4);
	MR_sv(20) = MR_tfield(0, MR_tempr5, 3);
	MR_sv(19) = MR_tfield(0, MR_tempr5, 2);
	MR_sv(18) = MR_tfield(0, MR_tempr5, 1);
	MR_tempr6 = MR_sv(1);
	MR_sv(17) = MR_tfield(0, MR_tempr6, 17);
	MR_sv(16) = MR_tfield(0, MR_tempr6, 16);
	MR_sv(15) = MR_tfield(0, MR_tempr6, 15);
	MR_sv(14) = MR_tfield(0, MR_tempr6, 14);
	MR_sv(13) = MR_tfield(0, MR_tempr6, 13);
	MR_sv(12) = MR_tfield(0, MR_tempr6, 12);
	MR_sv(11) = MR_tfield(0, MR_tempr6, 11);
	MR_sv(10) = MR_tfield(0, MR_tempr6, 10);
	MR_sv(9) = MR_tfield(0, MR_tempr6, 9);
	MR_sv(8) = MR_tfield(0, MR_tempr6, 8);
	MR_sv(7) = MR_tfield(0, MR_tempr6, 7);
	MR_sv(6) = MR_tfield(0, MR_tempr6, 6);
	MR_sv(5) = MR_tfield(0, MR_tempr6, 5);
	MR_sv(4) = MR_tfield(0, MR_tempr6, 4);
	MR_sv(3) = MR_tfield(0, MR_tempr6, 3);
	MR_tempr1 = MR_tfield(0, MR_tempr6, 2);
	MR_tempr2 = MR_tfield(0, MR_tempr6, 1);
	MR_tempr3 = MR_tempr6;
	MR_sv(1) = MR_tempr2;
	MR_tempr4 = MR_tempr5;
	MR_sv(2) = MR_tempr1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__prim_data, sym_name);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,5,0);
	MR_r3 = MR_tfield(0, MR_tempr3, 0);
	MR_r4 = MR_tfield(0, MR_tempr4, 0);
	}
	MR_np_call_localret_ent(__Compare___tree234__tree234_2_0,
		__Compare___make__make_info_0_0_i6);
MR_def_label(__Compare___make__make_info_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___make__make_info_0_0_i207);
	}
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,5,1);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(18);
	MR_np_call_localret_ent(__Compare___tree234__tree234_2_0,
		__Compare___make__make_info_0_0_i11);
MR_def_label(__Compare___make__make_info_0_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___make__make_info_0_0_i207);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,3,4);
	MR_r2 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(19);
	MR_np_call_localret_ent(__Compare___tree234__tree234_2_0,
		__Compare___make__make_info_0_0_i16);
MR_def_label(__Compare___make__make_info_0_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___make__make_info_0_0_i207);
	}
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(20);
	MR_np_call_localret_ent(__Compare___list__list_1_0,
		__Compare___make__make_info_0_0_i20);
MR_def_label(__Compare___make__make_info_0_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___make__make_info_0_0_i207);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(make__options_file, options_variables);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(21);
	MR_np_call_localret_ent(builtin__compare_3_0,
		__Compare___make__make_info_0_0_i24);
MR_def_label(__Compare___make__make_info_0_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___make__make_info_0_0_i207);
	}
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(22);
	MR_np_call_localret_ent(__Compare___make__module_index_map_0_0,
		__Compare___make__make_info_0_0_i28);
MR_def_label(__Compare___make__make_info_0_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___make__make_info_0_0_i207);
	}
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(23);
	MR_np_call_localret_ent(__Compare___make__dependency_file_index_map_0_0,
		__Compare___make__make_info_0_0_i32);
MR_def_label(__Compare___make__make_info_0_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___make__make_info_0_0_i207);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(make__dependencies, dependency_file);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(make, dependency_status);
	MR_r3 = MR_sv(7);
	MR_r4 = MR_sv(24);
	MR_np_call_localret_ent(__Compare___version_hash_table__version_hash_table_2_0,
		__Compare___make__make_info_0_0_i36);
MR_def_label(__Compare___make__make_info_0_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___make__make_info_0_0_i207);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(make__dependencies, cached_direct_imports);
	MR_r2 = MR_sv(8);
	MR_r3 = MR_sv(25);
	MR_np_call_localret_ent(builtin__compare_3_0,
		__Compare___make__make_info_0_0_i40);
MR_def_label(__Compare___make__make_info_0_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___make__make_info_0_0_i207);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(make__dependencies, cached_direct_imports);
	MR_r2 = MR_sv(9);
	MR_r3 = MR_sv(26);
	MR_np_call_localret_ent(builtin__compare_3_0,
		__Compare___make__make_info_0_0_i44);
MR_def_label(__Compare___make__make_info_0_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___make__make_info_0_0_i207);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(make__dependencies, cached_transitive_dependencies);
	MR_r2 = MR_sv(10);
	MR_r3 = MR_sv(27);
	MR_np_call_localret_ent(builtin__compare_3_0,
		__Compare___make__make_info_0_0_i48);
MR_def_label(__Compare___make__make_info_0_0,48)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___make__make_info_0_0_i207);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(make__dependencies, cached_foreign_imports);
	MR_r2 = MR_sv(11);
	MR_r3 = MR_sv(28);
	MR_np_call_localret_ent(builtin__compare_3_0,
		__Compare___make__make_info_0_0_i52);
MR_def_label(__Compare___make__make_info_0_0,52)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___make__make_info_0_0_i207);
	}
	MR_r1 = MR_sv(12);
	MR_r2 = MR_sv(29);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___make__make_info_0_0_i56);
MR_def_label(__Compare___make__make_info_0_0,56)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___make__make_info_0_0_i207);
	}
	MR_r1 = MR_sv(13);
	MR_r2 = MR_sv(30);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___make__make_info_0_0_i60);
MR_def_label(__Compare___make__make_info_0_0,60)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___make__make_info_0_0_i207);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__prim_data, sym_name);
	MR_r2 = MR_sv(14);
	MR_r3 = MR_sv(31);
	MR_np_call_localret_ent(__Compare___set_ordlist__set_ordlist_1_0,
		__Compare___make__make_info_0_0_i64);
MR_def_label(__Compare___make__make_info_0_0,64)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___make__make_info_0_0_i207);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__prim_data, sym_name);
	MR_r2 = MR_sv(15);
	MR_r3 = MR_sv(32);
	MR_np_call_localret_ent(__Compare___maybe__maybe_1_0,
		__Compare___make__make_info_0_0_i68);
MR_def_label(__Compare___make__make_info_0_0,68)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___make__make_info_0_0_i207);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,3,1);
	MR_r2 = MR_sv(16);
	MR_r3 = MR_sv(33);
	MR_np_call_localret_ent(__Compare___set_ordlist__set_ordlist_1_0,
		__Compare___make__make_info_0_0_i73);
MR_def_label(__Compare___make__make_info_0_0,73)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___make__make_info_0_0_i207);
	}
	MR_r1 = MR_sv(17);
	MR_r2 = MR_sv(34);
	MR_succip_word = MR_sv(35);
	MR_decr_sp(35);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
MR_def_label(__Compare___make__make_info_0_0,207)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(35);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(make_module32)
	MR_init_entry1(__Unify___make__misc_target_type_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___make__misc_target_type_0_0);
	MR_init_label8(__Unify___make__misc_target_type_0_0,5,6,7,8,9,27,10,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___make__misc_target_type_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___make__misc_target_type_0_0_i27);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_tempr1;
	MR_sv(2) = MR_r2;
	if (MR_LTAGS_TESTR(MR_tempr1,0,2)) {
		MR_GOTO_LAB(__Unify___make__misc_target_type_0_0_i5);
	}
	MR_r1 = (MR_sv(2) == MR_tempr1);
	MR_decr_sp(3);
	MR_proceed();
	}
MR_def_label(__Unify___make__misc_target_type_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,3)) {
		MR_GOTO_LAB(__Unify___make__misc_target_type_0_0_i6);
	}
	MR_r1 = (MR_sv(2) == MR_sv(1));
	MR_decr_sp_and_return(3);
MR_def_label(__Unify___make__misc_target_type_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,5)) {
		MR_GOTO_LAB(__Unify___make__misc_target_type_0_0_i7);
	}
	MR_r1 = (MR_sv(2) == MR_sv(1));
	MR_decr_sp_and_return(3);
MR_def_label(__Unify___make__misc_target_type_0_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,0)) {
		MR_GOTO_LAB(__Unify___make__misc_target_type_0_0_i8);
	}
	MR_r1 = (MR_sv(2) == MR_sv(1));
	MR_decr_sp_and_return(3);
MR_def_label(__Unify___make__misc_target_type_0_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,4)) {
		MR_GOTO_LAB(__Unify___make__misc_target_type_0_0_i9);
	}
	MR_r1 = (MR_sv(2) == MR_sv(1));
	MR_decr_sp_and_return(3);
MR_def_label(__Unify___make__misc_target_type_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,1)) {
		MR_GOTO_LAB(__Unify___make__misc_target_type_0_0_i10);
	}
	MR_r1 = (MR_sv(2) == MR_sv(1));
	MR_decr_sp_and_return(3);
MR_def_label(__Unify___make__misc_target_type_0_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___make__misc_target_type_0_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Unify___make__misc_target_type_0_0_i1);
	}
	MR_r1 = MR_tfield(1, MR_sv(1), 0);
	MR_r2 = MR_tfield(1, MR_sv(2), 0);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Unify___make__module_target_type_0_0);
MR_def_label(__Unify___make__misc_target_type_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(make_module33)
	MR_init_entry1(__Compare___make__misc_target_type_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___make__misc_target_type_0_0);
	MR_init_label10(__Compare___make__misc_target_type_0_0,7,8,9,10,11,5,15,16,17,18)
	MR_init_label10(__Compare___make__misc_target_type_0_0,19,13,23,24,25,26,27,21,31,32)
	MR_init_label10(__Compare___make__misc_target_type_0_0,33,34,35,29,39,40,41,42,43,37)
	MR_init_label10(__Compare___make__misc_target_type_0_0,47,48,49,50,51,153,45,54,55,56)
	MR_init_label5(__Compare___make__misc_target_type_0_0,57,109,58,110,59)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___make__misc_target_type_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___make__misc_target_type_0_0_i153);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	if (MR_LTAGS_TESTR(MR_sv(1),0,2)) {
		MR_GOTO_LAB(__Compare___make__misc_target_type_0_0_i5);
	}
	if (MR_LTAGS_TESTR(MR_sv(2),0,2)) {
		MR_GOTO_LAB(__Compare___make__misc_target_type_0_0_i7);
	}
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp(3);
	MR_proceed();
MR_def_label(__Compare___make__misc_target_type_0_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,3)) {
		MR_GOTO_LAB(__Compare___make__misc_target_type_0_0_i8);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___make__misc_target_type_0_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,5)) {
		MR_GOTO_LAB(__Compare___make__misc_target_type_0_0_i9);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___make__misc_target_type_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,0)) {
		MR_GOTO_LAB(__Compare___make__misc_target_type_0_0_i10);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___make__misc_target_type_0_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,4)) {
		MR_GOTO_LAB(__Compare___make__misc_target_type_0_0_i11);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___make__misc_target_type_0_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,1)) {
		MR_GOTO_LAB(__Compare___make__misc_target_type_0_0_i110);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___make__misc_target_type_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,3)) {
		MR_GOTO_LAB(__Compare___make__misc_target_type_0_0_i13);
	}
	if (MR_LTAGS_TESTR(MR_sv(2),0,2)) {
		MR_GOTO_LAB(__Compare___make__misc_target_type_0_0_i15);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___make__misc_target_type_0_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,3)) {
		MR_GOTO_LAB(__Compare___make__misc_target_type_0_0_i16);
	}
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___make__misc_target_type_0_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,5)) {
		MR_GOTO_LAB(__Compare___make__misc_target_type_0_0_i17);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___make__misc_target_type_0_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,0)) {
		MR_GOTO_LAB(__Compare___make__misc_target_type_0_0_i18);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___make__misc_target_type_0_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,4)) {
		MR_GOTO_LAB(__Compare___make__misc_target_type_0_0_i19);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___make__misc_target_type_0_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,1)) {
		MR_GOTO_LAB(__Compare___make__misc_target_type_0_0_i110);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___make__misc_target_type_0_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,5)) {
		MR_GOTO_LAB(__Compare___make__misc_target_type_0_0_i21);
	}
	if (MR_LTAGS_TESTR(MR_sv(2),0,2)) {
		MR_GOTO_LAB(__Compare___make__misc_target_type_0_0_i23);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___make__misc_target_type_0_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,3)) {
		MR_GOTO_LAB(__Compare___make__misc_target_type_0_0_i24);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___make__misc_target_type_0_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,5)) {
		MR_GOTO_LAB(__Compare___make__misc_target_type_0_0_i25);
	}
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___make__misc_target_type_0_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,0)) {
		MR_GOTO_LAB(__Compare___make__misc_target_type_0_0_i26);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___make__misc_target_type_0_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,4)) {
		MR_GOTO_LAB(__Compare___make__misc_target_type_0_0_i27);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___make__misc_target_type_0_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,1)) {
		MR_GOTO_LAB(__Compare___make__misc_target_type_0_0_i110);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___make__misc_target_type_0_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,0)) {
		MR_GOTO_LAB(__Compare___make__misc_target_type_0_0_i29);
	}
	if (MR_LTAGS_TESTR(MR_sv(2),0,2)) {
		MR_GOTO_LAB(__Compare___make__misc_target_type_0_0_i31);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___make__misc_target_type_0_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,3)) {
		MR_GOTO_LAB(__Compare___make__misc_target_type_0_0_i32);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___make__misc_target_type_0_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,5)) {
		MR_GOTO_LAB(__Compare___make__misc_target_type_0_0_i33);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___make__misc_target_type_0_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,0)) {
		MR_GOTO_LAB(__Compare___make__misc_target_type_0_0_i34);
	}
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___make__misc_target_type_0_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,4)) {
		MR_GOTO_LAB(__Compare___make__misc_target_type_0_0_i35);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___make__misc_target_type_0_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,1)) {
		MR_GOTO_LAB(__Compare___make__misc_target_type_0_0_i109);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___make__misc_target_type_0_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,4)) {
		MR_GOTO_LAB(__Compare___make__misc_target_type_0_0_i37);
	}
	if (MR_LTAGS_TESTR(MR_sv(2),0,2)) {
		MR_GOTO_LAB(__Compare___make__misc_target_type_0_0_i39);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___make__misc_target_type_0_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,3)) {
		MR_GOTO_LAB(__Compare___make__misc_target_type_0_0_i40);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___make__misc_target_type_0_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,5)) {
		MR_GOTO_LAB(__Compare___make__misc_target_type_0_0_i41);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___make__misc_target_type_0_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,0)) {
		MR_GOTO_LAB(__Compare___make__misc_target_type_0_0_i42);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___make__misc_target_type_0_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,4)) {
		MR_GOTO_LAB(__Compare___make__misc_target_type_0_0_i43);
	}
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___make__misc_target_type_0_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,1)) {
		MR_GOTO_LAB(__Compare___make__misc_target_type_0_0_i110);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___make__misc_target_type_0_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,1)) {
		MR_GOTO_LAB(__Compare___make__misc_target_type_0_0_i45);
	}
	if (MR_LTAGS_TESTR(MR_sv(2),0,2)) {
		MR_GOTO_LAB(__Compare___make__misc_target_type_0_0_i47);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___make__misc_target_type_0_0,47)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,3)) {
		MR_GOTO_LAB(__Compare___make__misc_target_type_0_0_i48);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___make__misc_target_type_0_0,48)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,5)) {
		MR_GOTO_LAB(__Compare___make__misc_target_type_0_0_i49);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___make__misc_target_type_0_0,49)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,0)) {
		MR_GOTO_LAB(__Compare___make__misc_target_type_0_0_i50);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___make__misc_target_type_0_0,50)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,4)) {
		MR_GOTO_LAB(__Compare___make__misc_target_type_0_0_i51);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___make__misc_target_type_0_0,51)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,1)) {
		MR_GOTO_LAB(__Compare___make__misc_target_type_0_0_i109);
	}
MR_def_label(__Compare___make__misc_target_type_0_0,153)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___make__misc_target_type_0_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,2)) {
		MR_GOTO_LAB(__Compare___make__misc_target_type_0_0_i54);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___make__misc_target_type_0_0,54)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,3)) {
		MR_GOTO_LAB(__Compare___make__misc_target_type_0_0_i55);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___make__misc_target_type_0_0,55)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,5)) {
		MR_GOTO_LAB(__Compare___make__misc_target_type_0_0_i56);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___make__misc_target_type_0_0,56)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,0)) {
		MR_GOTO_LAB(__Compare___make__misc_target_type_0_0_i57);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___make__misc_target_type_0_0,57)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,4)) {
		MR_GOTO_LAB(__Compare___make__misc_target_type_0_0_i58);
	}
MR_def_label(__Compare___make__misc_target_type_0_0,109)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___make__misc_target_type_0_0,58)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,1)) {
		MR_GOTO_LAB(__Compare___make__misc_target_type_0_0_i59);
	}
MR_def_label(__Compare___make__misc_target_type_0_0,110)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___make__misc_target_type_0_0,59)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(1, MR_sv(1), 0);
	MR_r2 = MR_tfield(1, MR_sv(2), 0);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Compare___make__module_target_type_0_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(make_module34)
	MR_init_entry1(__Unify___make__module_compilation_task_type_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___make__module_compilation_task_type_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___make__module_compilation_task_type_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_r1 == MR_r2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(make_module35)
	MR_init_entry1(__Compare___make__module_compilation_task_type_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___make__module_compilation_task_type_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___make__module_compilation_task_type_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(make_module36)
	MR_init_entry1(__Unify___make__module_index_map_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___make__module_index_map_0_0);
	MR_init_label4(__Unify___make__module_index_map_0_0,4,6,8,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___make__module_index_map_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___make__module_index_map_0_0_i8);
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
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__prim_data, sym_name);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(make__dependencies, module_index);
	MR_r3 = MR_tfield(0, MR_tempr1, 0);
	MR_r4 = MR_tfield(0, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(__Unify___version_hash_table__version_hash_table_2_0,
		__Unify___make__module_index_map_0_0_i4);
MR_def_label(__Unify___make__module_index_map_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___make__module_index_map_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__prim_data, sym_name);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(3);
	MR_np_call_localret_ent(__Unify___version_array__version_array_1_0,
		__Unify___make__module_index_map_0_0_i6);
MR_def_label(__Unify___make__module_index_map_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___make__module_index_map_0_0_i1);
	}
	MR_r1 = (MR_sv(2) == MR_sv(4));
	MR_decr_sp_and_return(5);
MR_def_label(__Unify___make__module_index_map_0_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___make__module_index_map_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(make_module37)
	MR_init_entry1(__Compare___make__module_index_map_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___make__module_index_map_0_0);
	MR_init_label5(__Compare___make__module_index_map_0_0,3,2,5,9,29)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___make__module_index_map_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___make__module_index_map_0_0_i3);
	}
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___make__module_index_map_0_0_i2);
MR_def_label(__Compare___make__module_index_map_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___make__module_index_map_0_0,2)
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
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__prim_data, sym_name);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(make__dependencies, module_index);
	MR_r3 = MR_tfield(0, MR_tempr3, 0);
	MR_r4 = MR_tfield(0, MR_tempr4, 0);
	}
	MR_np_call_localret_ent(__Compare___version_hash_table__version_hash_table_2_0,
		__Compare___make__module_index_map_0_0_i5);
MR_def_label(__Compare___make__module_index_map_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___make__module_index_map_0_0_i29);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__prim_data, sym_name);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(3);
	MR_np_call_localret_ent(__Compare___version_array__version_array_1_0,
		__Compare___make__module_index_map_0_0_i9);
MR_def_label(__Compare___make__module_index_map_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___make__module_index_map_0_0_i29);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(4);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
MR_def_label(__Compare___make__module_index_map_0_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(make_module38)
	MR_init_entry1(__Unify___make__module_target_type_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___make__module_target_type_0_0);
	MR_init_label10(__Unify___make__module_target_type_0_0,5,6,7,8,9,10,11,12,13,14)
	MR_init_label10(__Unify___make__module_target_type_0_0,15,16,17,18,19,20,21,22,23,24)
	MR_init_label6(__Unify___make__module_target_type_0_0,26,28,30,91,32,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___make__module_target_type_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___make__module_target_type_0_0_i91);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_tempr1;
	MR_sv(2) = MR_r2;
	if (MR_LTAGS_TESTR(MR_tempr1,0,7)) {
		MR_GOTO_LAB(__Unify___make__module_target_type_0_0_i5);
	}
	MR_r1 = (MR_sv(2) == MR_tempr1);
	MR_decr_sp(2);
	MR_proceed();
	}
MR_def_label(__Unify___make__module_target_type_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,9)) {
		MR_GOTO_LAB(__Unify___make__module_target_type_0_0_i6);
	}
	MR_r1 = (MR_sv(2) == MR_sv(1));
	MR_decr_sp(2);
	MR_proceed();
MR_def_label(__Unify___make__module_target_type_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,12)) {
		MR_GOTO_LAB(__Unify___make__module_target_type_0_0_i7);
	}
	MR_r1 = (MR_sv(2) == MR_sv(1));
	MR_decr_sp(2);
	MR_proceed();
MR_def_label(__Unify___make__module_target_type_0_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,17)) {
		MR_GOTO_LAB(__Unify___make__module_target_type_0_0_i8);
	}
	MR_r1 = (MR_sv(2) == MR_sv(1));
	MR_decr_sp(2);
	MR_proceed();
MR_def_label(__Unify___make__module_target_type_0_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,16)) {
		MR_GOTO_LAB(__Unify___make__module_target_type_0_0_i9);
	}
	MR_r1 = (MR_sv(2) == MR_sv(1));
	MR_decr_sp(2);
	MR_proceed();
MR_def_label(__Unify___make__module_target_type_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,15)) {
		MR_GOTO_LAB(__Unify___make__module_target_type_0_0_i10);
	}
	MR_r1 = (MR_sv(2) == MR_sv(1));
	MR_decr_sp(2);
	MR_proceed();
MR_def_label(__Unify___make__module_target_type_0_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,1)) {
		MR_GOTO_LAB(__Unify___make__module_target_type_0_0_i11);
	}
	MR_r1 = (MR_sv(2) == MR_sv(1));
	MR_decr_sp(2);
	MR_proceed();
MR_def_label(__Unify___make__module_target_type_0_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,11)) {
		MR_GOTO_LAB(__Unify___make__module_target_type_0_0_i12);
	}
	MR_r1 = (MR_sv(2) == MR_sv(1));
	MR_decr_sp(2);
	MR_proceed();
MR_def_label(__Unify___make__module_target_type_0_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,10)) {
		MR_GOTO_LAB(__Unify___make__module_target_type_0_0_i13);
	}
	MR_r1 = (MR_sv(2) == MR_sv(1));
	MR_decr_sp(2);
	MR_proceed();
MR_def_label(__Unify___make__module_target_type_0_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,6)) {
		MR_GOTO_LAB(__Unify___make__module_target_type_0_0_i14);
	}
	MR_r1 = (MR_sv(2) == MR_sv(1));
	MR_decr_sp(2);
	MR_proceed();
MR_def_label(__Unify___make__module_target_type_0_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,14)) {
		MR_GOTO_LAB(__Unify___make__module_target_type_0_0_i15);
	}
	MR_r1 = (MR_sv(2) == MR_sv(1));
	MR_decr_sp(2);
	MR_proceed();
MR_def_label(__Unify___make__module_target_type_0_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,13)) {
		MR_GOTO_LAB(__Unify___make__module_target_type_0_0_i16);
	}
	MR_r1 = (MR_sv(2) == MR_sv(1));
	MR_decr_sp(2);
	MR_proceed();
MR_def_label(__Unify___make__module_target_type_0_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,3)) {
		MR_GOTO_LAB(__Unify___make__module_target_type_0_0_i17);
	}
	MR_r1 = (MR_sv(2) == MR_sv(1));
	MR_decr_sp(2);
	MR_proceed();
MR_def_label(__Unify___make__module_target_type_0_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,2)) {
		MR_GOTO_LAB(__Unify___make__module_target_type_0_0_i18);
	}
	MR_r1 = (MR_sv(2) == MR_sv(1));
	MR_decr_sp(2);
	MR_proceed();
MR_def_label(__Unify___make__module_target_type_0_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,4)) {
		MR_GOTO_LAB(__Unify___make__module_target_type_0_0_i19);
	}
	MR_r1 = (MR_sv(2) == MR_sv(1));
	MR_decr_sp(2);
	MR_proceed();
MR_def_label(__Unify___make__module_target_type_0_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,0)) {
		MR_GOTO_LAB(__Unify___make__module_target_type_0_0_i20);
	}
	MR_r1 = (MR_sv(2) == MR_sv(1));
	MR_decr_sp(2);
	MR_proceed();
MR_def_label(__Unify___make__module_target_type_0_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,8)) {
		MR_GOTO_LAB(__Unify___make__module_target_type_0_0_i21);
	}
	MR_r1 = (MR_sv(2) == MR_sv(1));
	MR_decr_sp(2);
	MR_proceed();
MR_def_label(__Unify___make__module_target_type_0_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,5)) {
		MR_GOTO_LAB(__Unify___make__module_target_type_0_0_i22);
	}
	MR_r1 = (MR_sv(2) == MR_sv(1));
	MR_decr_sp(2);
	MR_proceed();
MR_def_label(__Unify___make__module_target_type_0_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,18)) {
		MR_GOTO_LAB(__Unify___make__module_target_type_0_0_i23);
	}
	MR_r1 = (MR_sv(2) == MR_sv(1));
	MR_decr_sp(2);
	MR_proceed();
MR_def_label(__Unify___make__module_target_type_0_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),2)) {
		MR_GOTO_LAB(__Unify___make__module_target_type_0_0_i24);
	}
	if (MR_PTAG_TESTR(MR_sv(2),2)) {
		MR_GOTO_LAB(__Unify___make__module_target_type_0_0_i1);
	}
	MR_r1 = MR_tfield(2, MR_sv(1), 0);
	MR_r2 = MR_tfield(2, MR_sv(2), 0);
	MR_r1 = (MR_r1 == MR_r2);
	MR_decr_sp(2);
	MR_proceed();
MR_def_label(__Unify___make__module_target_type_0_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),1)) {
		MR_GOTO_LAB(__Unify___make__module_target_type_0_0_i26);
	}
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Unify___make__module_target_type_0_0_i1);
	}
	MR_r1 = MR_tfield(1, MR_sv(1), 0);
	MR_r2 = MR_tfield(1, MR_sv(2), 0);
	MR_r1 = (MR_r1 == MR_r2);
	MR_decr_sp(2);
	MR_proceed();
MR_def_label(__Unify___make__module_target_type_0_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,3)) {
		MR_GOTO_LAB(__Unify___make__module_target_type_0_0_i28);
	}
	if (MR_RTAGS_TESTR(MR_sv(2),3,3)) {
		MR_GOTO_LAB(__Unify___make__module_target_type_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_r1 = MR_tfield(3, MR_tempr1, 1);
	MR_tempr2 = MR_sv(2);
	MR_r2 = MR_tfield(3, MR_tempr2, 1);
	if ((MR_r1 != MR_r2)) {
		MR_GOTO_LAB(__Unify___make__module_target_type_0_0_i1);
	}
	MR_r1 = MR_tfield(3, MR_tempr1, 2);
	MR_r2 = MR_tfield(3, MR_tempr2, 2);
	MR_r1 = (strcmp((char *) (MR_Word *) MR_r1, (char *) (MR_Word *) MR_r2) == 0);
	MR_decr_sp(2);
	MR_proceed();
	}
MR_def_label(__Unify___make__module_target_type_0_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,1)) {
		MR_GOTO_LAB(__Unify___make__module_target_type_0_0_i30);
	}
	if (MR_RTAGS_TESTR(MR_sv(2),3,1)) {
		MR_GOTO_LAB(__Unify___make__module_target_type_0_0_i1);
	}
	MR_r1 = MR_tfield(3, MR_sv(1), 1);
	MR_r2 = MR_tfield(3, MR_sv(2), 1);
	MR_r1 = (MR_r1 == MR_r2);
	MR_decr_sp(2);
	MR_proceed();
MR_def_label(__Unify___make__module_target_type_0_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,2)) {
		MR_GOTO_LAB(__Unify___make__module_target_type_0_0_i32);
	}
	if (MR_RTAGS_TESTR(MR_sv(2),3,2)) {
		MR_GOTO_LAB(__Unify___make__module_target_type_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_r1 = MR_tfield(3, MR_tempr1, 1);
	MR_tempr2 = MR_sv(2);
	MR_r2 = MR_tfield(3, MR_tempr2, 1);
	if ((MR_r1 != MR_r2)) {
		MR_GOTO_LAB(__Unify___make__module_target_type_0_0_i1);
	}
	MR_r1 = MR_tfield(3, MR_tempr1, 2);
	MR_r2 = MR_tfield(3, MR_tempr2, 2);
	MR_r1 = (MR_r1 == MR_r2);
	MR_decr_sp(2);
	MR_proceed();
	}
MR_def_label(__Unify___make__module_target_type_0_0,91)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp(2);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___make__module_target_type_0_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,0)) {
		MR_GOTO_LAB(__Unify___make__module_target_type_0_0_i1);
	}
	MR_r1 = MR_tfield(3, MR_sv(1), 1);
	MR_r2 = MR_tfield(3, MR_sv(2), 1);
	MR_r1 = (MR_r1 == MR_r2);
	MR_decr_sp(2);
	MR_proceed();
MR_def_label(__Unify___make__module_target_type_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp(2);
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(make_module39)
	MR_init_entry1(__Index___make__module_target_type_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Index___make__module_target_type_0_0);
	MR_init_label10(__Index___make__module_target_type_0_0,3,4,5,6,7,8,9,10,11,12)
	MR_init_label10(__Index___make__module_target_type_0_0,13,14,15,16,17,18,19,20,21,22)
	MR_init_label4(__Index___make__module_target_type_0_0,23,24,25,26)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Index__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Index___make__module_target_type_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,7)) {
		MR_GOTO_LAB(__Index___make__module_target_type_0_0_i3);
	}
	MR_r1 = (MR_Integer) 7;
	MR_proceed();
MR_def_label(__Index___make__module_target_type_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,9)) {
		MR_GOTO_LAB(__Index___make__module_target_type_0_0_i4);
	}
	MR_r1 = (MR_Integer) 10;
	MR_proceed();
MR_def_label(__Index___make__module_target_type_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,12)) {
		MR_GOTO_LAB(__Index___make__module_target_type_0_0_i5);
	}
	MR_r1 = (MR_Integer) 13;
	MR_proceed();
MR_def_label(__Index___make__module_target_type_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,17)) {
		MR_GOTO_LAB(__Index___make__module_target_type_0_0_i6);
	}
	MR_r1 = (MR_Integer) 18;
	MR_proceed();
MR_def_label(__Index___make__module_target_type_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,16)) {
		MR_GOTO_LAB(__Index___make__module_target_type_0_0_i7);
	}
	MR_r1 = (MR_Integer) 17;
	MR_proceed();
MR_def_label(__Index___make__module_target_type_0_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,15)) {
		MR_GOTO_LAB(__Index___make__module_target_type_0_0_i8);
	}
	MR_r1 = (MR_Integer) 16;
	MR_proceed();
MR_def_label(__Index___make__module_target_type_0_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,1)) {
		MR_GOTO_LAB(__Index___make__module_target_type_0_0_i9);
	}
	MR_r1 = (MR_Integer) 1;
	MR_proceed();
MR_def_label(__Index___make__module_target_type_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,11)) {
		MR_GOTO_LAB(__Index___make__module_target_type_0_0_i10);
	}
	MR_r1 = (MR_Integer) 12;
	MR_proceed();
MR_def_label(__Index___make__module_target_type_0_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,10)) {
		MR_GOTO_LAB(__Index___make__module_target_type_0_0_i11);
	}
	MR_r1 = (MR_Integer) 11;
	MR_proceed();
MR_def_label(__Index___make__module_target_type_0_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,6)) {
		MR_GOTO_LAB(__Index___make__module_target_type_0_0_i12);
	}
	MR_r1 = (MR_Integer) 6;
	MR_proceed();
MR_def_label(__Index___make__module_target_type_0_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,14)) {
		MR_GOTO_LAB(__Index___make__module_target_type_0_0_i13);
	}
	MR_r1 = (MR_Integer) 15;
	MR_proceed();
MR_def_label(__Index___make__module_target_type_0_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,13)) {
		MR_GOTO_LAB(__Index___make__module_target_type_0_0_i14);
	}
	MR_r1 = (MR_Integer) 14;
	MR_proceed();
MR_def_label(__Index___make__module_target_type_0_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,3)) {
		MR_GOTO_LAB(__Index___make__module_target_type_0_0_i15);
	}
	MR_r1 = (MR_Integer) 3;
	MR_proceed();
MR_def_label(__Index___make__module_target_type_0_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,2)) {
		MR_GOTO_LAB(__Index___make__module_target_type_0_0_i16);
	}
	MR_r1 = (MR_Integer) 2;
	MR_proceed();
MR_def_label(__Index___make__module_target_type_0_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,4)) {
		MR_GOTO_LAB(__Index___make__module_target_type_0_0_i17);
	}
	MR_r1 = (MR_Integer) 4;
	MR_proceed();
MR_def_label(__Index___make__module_target_type_0_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(__Index___make__module_target_type_0_0_i18);
	}
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Index___make__module_target_type_0_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,8)) {
		MR_GOTO_LAB(__Index___make__module_target_type_0_0_i19);
	}
	MR_r1 = (MR_Integer) 8;
	MR_proceed();
MR_def_label(__Index___make__module_target_type_0_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,5)) {
		MR_GOTO_LAB(__Index___make__module_target_type_0_0_i20);
	}
	MR_r1 = (MR_Integer) 5;
	MR_proceed();
MR_def_label(__Index___make__module_target_type_0_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,18)) {
		MR_GOTO_LAB(__Index___make__module_target_type_0_0_i21);
	}
	MR_r1 = (MR_Integer) 24;
	MR_proceed();
MR_def_label(__Index___make__module_target_type_0_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,2)) {
		MR_GOTO_LAB(__Index___make__module_target_type_0_0_i22);
	}
	MR_r1 = (MR_Integer) 19;
	MR_proceed();
MR_def_label(__Index___make__module_target_type_0_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,1)) {
		MR_GOTO_LAB(__Index___make__module_target_type_0_0_i23);
	}
	MR_r1 = (MR_Integer) 9;
	MR_proceed();
MR_def_label(__Index___make__module_target_type_0_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,3)) {
		MR_GOTO_LAB(__Index___make__module_target_type_0_0_i24);
	}
	MR_r1 = (MR_Integer) 23;
	MR_proceed();
MR_def_label(__Index___make__module_target_type_0_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,1)) {
		MR_GOTO_LAB(__Index___make__module_target_type_0_0_i25);
	}
	MR_r1 = (MR_Integer) 21;
	MR_proceed();
MR_def_label(__Index___make__module_target_type_0_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,2)) {
		MR_GOTO_LAB(__Index___make__module_target_type_0_0_i26);
	}
	MR_r1 = (MR_Integer) 22;
	MR_proceed();
MR_def_label(__Index___make__module_target_type_0_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 20;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(private_builtin__compare_error_0_0);

MR_BEGIN_MODULE(make_module40)
	MR_init_entry1(__Compare___make__module_target_type_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___make__module_target_type_0_0);
	MR_init_label10(__Compare___make__module_target_type_0_0,4,5,6,7,10,11,12,13,14,15)
	MR_init_label10(__Compare___make__module_target_type_0_0,16,17,18,19,20,21,22,23,24,25)
	MR_init_label10(__Compare___make__module_target_type_0_0,26,27,117,28,29,32,38,35,43,49)
	MR_init_label3(__Compare___make__module_target_type_0_0,46,8,60)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___make__module_target_type_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___make__module_target_type_0_0_i117);
	}
	MR_sv(2) = MR_r1;
	MR_sv(3) = MR_r2;
	MR_np_call_localret_ent(__Index___make__module_target_type_0_0,
		__Compare___make__module_target_type_0_0_i4);
MR_def_label(__Compare___make__module_target_type_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(__Index___make__module_target_type_0_0,
		__Compare___make__module_target_type_0_0_i5);
MR_def_label(__Compare___make__module_target_type_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) MR_sv(1) >= (MR_Integer) MR_r1)) {
		MR_GOTO_LAB(__Compare___make__module_target_type_0_0_i6);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(4);
MR_def_label(__Compare___make__module_target_type_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) MR_sv(1) <= (MR_Integer) MR_r1)) {
		MR_GOTO_LAB(__Compare___make__module_target_type_0_0_i7);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(4);
MR_def_label(__Compare___make__module_target_type_0_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,7)) {
		MR_GOTO_LAB(__Compare___make__module_target_type_0_0_i10);
	}
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(4);
MR_def_label(__Compare___make__module_target_type_0_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,9)) {
		MR_GOTO_LAB(__Compare___make__module_target_type_0_0_i11);
	}
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(4);
MR_def_label(__Compare___make__module_target_type_0_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,12)) {
		MR_GOTO_LAB(__Compare___make__module_target_type_0_0_i12);
	}
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(4);
MR_def_label(__Compare___make__module_target_type_0_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,17)) {
		MR_GOTO_LAB(__Compare___make__module_target_type_0_0_i13);
	}
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(4);
MR_def_label(__Compare___make__module_target_type_0_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,16)) {
		MR_GOTO_LAB(__Compare___make__module_target_type_0_0_i14);
	}
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(4);
MR_def_label(__Compare___make__module_target_type_0_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,15)) {
		MR_GOTO_LAB(__Compare___make__module_target_type_0_0_i15);
	}
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(4);
MR_def_label(__Compare___make__module_target_type_0_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,1)) {
		MR_GOTO_LAB(__Compare___make__module_target_type_0_0_i16);
	}
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(4);
MR_def_label(__Compare___make__module_target_type_0_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,11)) {
		MR_GOTO_LAB(__Compare___make__module_target_type_0_0_i17);
	}
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(4);
MR_def_label(__Compare___make__module_target_type_0_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,10)) {
		MR_GOTO_LAB(__Compare___make__module_target_type_0_0_i18);
	}
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(4);
MR_def_label(__Compare___make__module_target_type_0_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,6)) {
		MR_GOTO_LAB(__Compare___make__module_target_type_0_0_i19);
	}
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(4);
MR_def_label(__Compare___make__module_target_type_0_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,14)) {
		MR_GOTO_LAB(__Compare___make__module_target_type_0_0_i20);
	}
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(4);
MR_def_label(__Compare___make__module_target_type_0_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,13)) {
		MR_GOTO_LAB(__Compare___make__module_target_type_0_0_i21);
	}
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(4);
MR_def_label(__Compare___make__module_target_type_0_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,3)) {
		MR_GOTO_LAB(__Compare___make__module_target_type_0_0_i22);
	}
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(4);
MR_def_label(__Compare___make__module_target_type_0_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,2)) {
		MR_GOTO_LAB(__Compare___make__module_target_type_0_0_i23);
	}
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(4);
MR_def_label(__Compare___make__module_target_type_0_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,4)) {
		MR_GOTO_LAB(__Compare___make__module_target_type_0_0_i24);
	}
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(4);
MR_def_label(__Compare___make__module_target_type_0_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,0)) {
		MR_GOTO_LAB(__Compare___make__module_target_type_0_0_i25);
	}
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(4);
MR_def_label(__Compare___make__module_target_type_0_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,8)) {
		MR_GOTO_LAB(__Compare___make__module_target_type_0_0_i26);
	}
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(4);
MR_def_label(__Compare___make__module_target_type_0_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,5)) {
		MR_GOTO_LAB(__Compare___make__module_target_type_0_0_i27);
	}
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(4);
MR_def_label(__Compare___make__module_target_type_0_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,18)) {
		MR_GOTO_LAB(__Compare___make__module_target_type_0_0_i28);
	}
MR_def_label(__Compare___make__module_target_type_0_0,117)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(4);
MR_def_label(__Compare___make__module_target_type_0_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),2)) {
		MR_GOTO_LAB(__Compare___make__module_target_type_0_0_i29);
	}
	if (MR_PTAG_TESTR(MR_sv(3),2)) {
		MR_GOTO_LAB(__Compare___make__module_target_type_0_0_i8);
	}
	MR_r1 = MR_tfield(2, MR_sv(2), 0);
	MR_r2 = MR_tfield(2, MR_sv(3), 0);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
MR_def_label(__Compare___make__module_target_type_0_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Compare___make__module_target_type_0_0_i32);
	}
	if (MR_PTAG_TESTR(MR_sv(3),1)) {
		MR_GOTO_LAB(__Compare___make__module_target_type_0_0_i8);
	}
	MR_r1 = MR_tfield(1, MR_sv(2), 0);
	MR_r2 = MR_tfield(1, MR_sv(3), 0);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
MR_def_label(__Compare___make__module_target_type_0_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,3)) {
		MR_GOTO_LAB(__Compare___make__module_target_type_0_0_i35);
	}
	if (MR_RTAGS_TESTR(MR_sv(3),3,3)) {
		MR_GOTO_LAB(__Compare___make__module_target_type_0_0_i8);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(3);
	MR_tempr1 = MR_tfield(3, MR_tempr5, 2);
	MR_tempr6 = MR_sv(2);
	MR_tempr2 = MR_tfield(3, MR_tempr6, 2);
	MR_tempr3 = MR_tempr6;
	MR_sv(2) = MR_tempr2;
	MR_tempr4 = MR_tempr5;
	MR_sv(3) = MR_tempr1;
	MR_r1 = MR_tfield(3, MR_tempr3, 1);
	MR_r2 = MR_tfield(3, MR_tempr4, 1);
	}
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___make__module_target_type_0_0_i38);
MR_def_label(__Compare___make__module_target_type_0_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___make__module_target_type_0_0_i60);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(3);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(private_builtin__builtin_compare_string_3_0);
MR_def_label(__Compare___make__module_target_type_0_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,1)) {
		MR_GOTO_LAB(__Compare___make__module_target_type_0_0_i43);
	}
	if (MR_RTAGS_TESTR(MR_sv(3),3,1)) {
		MR_GOTO_LAB(__Compare___make__module_target_type_0_0_i8);
	}
	MR_r1 = MR_tfield(3, MR_sv(2), 1);
	MR_r2 = MR_tfield(3, MR_sv(3), 1);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
MR_def_label(__Compare___make__module_target_type_0_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,2)) {
		MR_GOTO_LAB(__Compare___make__module_target_type_0_0_i46);
	}
	if (MR_RTAGS_TESTR(MR_sv(3),3,2)) {
		MR_GOTO_LAB(__Compare___make__module_target_type_0_0_i8);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(3);
	MR_tempr1 = MR_tfield(3, MR_tempr5, 2);
	MR_tempr6 = MR_sv(2);
	MR_tempr2 = MR_tfield(3, MR_tempr6, 2);
	MR_tempr3 = MR_tempr6;
	MR_sv(2) = MR_tempr2;
	MR_tempr4 = MR_tempr5;
	MR_sv(3) = MR_tempr1;
	MR_r1 = MR_tfield(3, MR_tempr3, 1);
	MR_r2 = MR_tfield(3, MR_tempr4, 1);
	}
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___make__module_target_type_0_0_i49);
MR_def_label(__Compare___make__module_target_type_0_0,49)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___make__module_target_type_0_0_i60);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(3);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
MR_def_label(__Compare___make__module_target_type_0_0,46)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(3),3,0)) {
		MR_GOTO_LAB(__Compare___make__module_target_type_0_0_i8);
	}
	MR_r1 = MR_tfield(3, MR_sv(2), 1);
	MR_r2 = MR_tfield(3, MR_sv(3), 1);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
MR_def_label(__Compare___make__module_target_type_0_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(private_builtin__compare_error_0_0);
MR_def_label(__Compare___make__module_target_type_0_0,60)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(4);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(make_module41)
	MR_init_entry1(__Unify___make__rebuild_module_deps_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___make__rebuild_module_deps_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___make__rebuild_module_deps_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_r1 == MR_r2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(make_module42)
	MR_init_entry1(__Compare___make__rebuild_module_deps_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___make__rebuild_module_deps_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___make__rebuild_module_deps_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(make_module43)
	MR_init_entry1(__Unify___make__target_file_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___make__target_file_0_0);
	MR_init_label3(__Unify___make__target_file_0_0,4,8,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___make__target_file_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___make__target_file_0_0_i8);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_tfield(0, MR_tempr1, 1);
	MR_tempr2 = MR_sv(2);
	MR_sv(2) = MR_tfield(0, MR_tempr2, 1);
	MR_r1 = MR_tfield(0, MR_tempr1, 0);
	MR_r2 = MR_tfield(0, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(__Unify___mdbcomp__prim_data__sym_name_0_0,
		__Unify___make__target_file_0_0_i4);
MR_def_label(__Unify___make__target_file_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___make__target_file_0_0_i1);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Unify___make__module_target_type_0_0);
MR_def_label(__Unify___make__target_file_0_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___make__target_file_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(make_module44)
	MR_init_entry1(__Compare___make__target_file_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___make__target_file_0_0);
	MR_init_label4(__Compare___make__target_file_0_0,3,2,5,21)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___make__target_file_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___make__target_file_0_0_i3);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___make__target_file_0_0_i2);
MR_def_label(__Compare___make__target_file_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___make__target_file_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(2);
	MR_tempr1 = MR_tfield(0, MR_tempr5, 1);
	MR_tempr6 = MR_sv(1);
	MR_tempr2 = MR_tfield(0, MR_tempr6, 1);
	MR_tempr3 = MR_tempr6;
	MR_sv(1) = MR_tempr2;
	MR_tempr4 = MR_tempr5;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_tfield(0, MR_tempr3, 0);
	MR_r2 = MR_tfield(0, MR_tempr4, 0);
	}
	MR_np_call_localret_ent(__Compare___mdbcomp__prim_data__sym_name_0_0,
		__Compare___make__target_file_0_0_i5);
MR_def_label(__Compare___make__target_file_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___make__target_file_0_0_i21);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Compare___make__module_target_type_0_0);
MR_def_label(__Compare___make__target_file_0_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(make_module45)
	MR_init_entry1(__Unify___make__target_type_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___make__target_type_0_0);
	MR_init_label4(__Unify___make__target_type_0_0,5,21,7,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___make__target_type_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___make__target_type_0_0_i21);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_tempr1;
	MR_tempr2 = MR_r2;
	MR_sv(2) = MR_tempr2;
	if (MR_PTAG_TESTR(MR_tempr1,1)) {
		MR_GOTO_LAB(__Unify___make__target_type_0_0_i5);
	}
	if (MR_PTAG_TESTR(MR_tempr2,1)) {
		MR_GOTO_LAB(__Unify___make__target_type_0_0_i1);
	}
	MR_r1 = MR_tfield(1, MR_tempr1, 0);
	MR_r2 = MR_tfield(1, MR_tempr2, 0);
	MR_r1 = (MR_r1 == MR_r2);
	MR_decr_sp(3);
	MR_proceed();
	}
MR_def_label(__Unify___make__target_type_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),2)) {
		MR_GOTO_LAB(__Unify___make__target_type_0_0_i7);
	}
	if (MR_PTAG_TESTR(MR_sv(2),2)) {
		MR_GOTO_LAB(__Unify___make__target_type_0_0_i1);
	}
	MR_r1 = MR_tfield(2, MR_sv(1), 0);
	MR_r2 = MR_tfield(2, MR_sv(2), 0);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Unify___make__misc_target_type_0_0);
MR_def_label(__Unify___make__target_type_0_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___make__target_type_0_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),0)) {
		MR_GOTO_LAB(__Unify___make__target_type_0_0_i1);
	}
	MR_r1 = MR_tfield(0, MR_sv(1), 0);
	MR_r2 = MR_tfield(0, MR_sv(2), 0);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Unify___make__module_target_type_0_0);
MR_def_label(__Unify___make__target_type_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(make_module46)
	MR_init_entry1(__Compare___make__target_type_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___make__target_type_0_0);
	MR_init_label9(__Compare___make__target_type_0_0,3,2,7,5,34,12,10,16,17)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___make__target_type_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___make__target_type_0_0_i3);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___make__target_type_0_0_i2);
MR_def_label(__Compare___make__target_type_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___make__target_type_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),1)) {
		MR_GOTO_LAB(__Compare___make__target_type_0_0_i5);
	}
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Compare___make__target_type_0_0_i7);
	}
	MR_r1 = MR_tfield(1, MR_sv(1), 0);
	MR_r2 = MR_tfield(1, MR_sv(2), 0);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
MR_def_label(__Compare___make__target_type_0_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),2)) {
		MR_GOTO_LAB(__Compare___make__target_type_0_0_i34);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___make__target_type_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),2)) {
		MR_GOTO_LAB(__Compare___make__target_type_0_0_i10);
	}
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Compare___make__target_type_0_0_i12);
	}
MR_def_label(__Compare___make__target_type_0_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___make__target_type_0_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),2)) {
		MR_GOTO_LAB(__Compare___make__target_type_0_0_i34);
	}
	MR_r1 = MR_tfield(2, MR_sv(1), 0);
	MR_r2 = MR_tfield(2, MR_sv(2), 0);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Compare___make__misc_target_type_0_0);
MR_def_label(__Compare___make__target_type_0_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Compare___make__target_type_0_0_i16);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___make__target_type_0_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),2)) {
		MR_GOTO_LAB(__Compare___make__target_type_0_0_i17);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___make__target_type_0_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(0, MR_sv(1), 0);
	MR_r2 = MR_tfield(0, MR_sv(2), 0);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Compare___make__module_target_type_0_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__dir__directory_separator_0_0);
MR_decl_entry(string__contains_char_2_0);

MR_BEGIN_MODULE(make_module47)
	MR_init_entry1(make__IntroducedFrom__pred__make_process_args__309__1_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__make__IntroducedFrom__pred__make_process_args__309__1_1_0);
	MR_init_label1(make__IntroducedFrom__pred__make_process_args__309__1_1_0,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__pred__make_process_args__309__1'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(make__IntroducedFrom__pred__make_process_args__309__1_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(fn__dir__directory_separator_0_0,
		make__IntroducedFrom__pred__make_process_args__309__1_1_0_i2);
MR_def_label(make__IntroducedFrom__pred__make_process_args__309__1_1_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(string__contains_char_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(parse_tree__error_util__write_error_plain_with_progname_4_0);

MR_BEGIN_MODULE(make_module48)
	MR_init_entry1(make__IntroducedFrom__pred__make_process_args__319__1_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__make__IntroducedFrom__pred__make_process_args__319__1_3_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__pred__make_process_args__319__1'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(make__IntroducedFrom__pred__make_process_args__319__1_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("Make target must not contain any directory component.", 53);
	MR_np_tailcall_ent(parse_tree__error_util__write_error_plain_with_progname_4_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(string__suffix_2_0);

MR_BEGIN_MODULE(make_module49)
	MR_init_entry1(make__IntroducedFrom__pred__make_process_args__345__1_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__make__IntroducedFrom__pred__make_process_args__345__1_1_0);
	MR_init_label2(make__IntroducedFrom__pred__make_process_args__345__1_1_0,3,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__pred__make_process_args__345__1'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(make__IntroducedFrom__pred__make_process_args__345__1_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_r2 = (MR_Word) MR_string_const(".depend", 7);
	MR_np_call_localret_ent(string__suffix_2_0,
		make__IntroducedFrom__pred__make_process_args__345__1_1_0_i3);
MR_def_label(make__IntroducedFrom__pred__make_process_args__345__1_1_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(make__IntroducedFrom__pred__make_process_args__345__1_1_0_i1);
	}
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(make__IntroducedFrom__pred__make_process_args__345__1_1_0,1)
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

static void mercury__make_maybe_bunch_0(void)
{
	make_module0();
	make_module1();
	make_module2();
	make_module3();
	make_module4();
	make_module5();
	make_module6();
	make_module7();
	make_module8();
	make_module9();
	make_module10();
	make_module11();
	make_module12();
	make_module13();
	make_module14();
	make_module15();
	make_module16();
	make_module17();
	make_module18();
	make_module19();
	make_module20();
	make_module21();
	make_module22();
	make_module23();
	make_module24();
	make_module25();
	make_module26();
	make_module27();
	make_module28();
	make_module29();
	make_module30();
	make_module31();
	make_module32();
	make_module33();
	make_module34();
	make_module35();
	make_module36();
	make_module37();
	make_module38();
	make_module39();
}

static void mercury__make_maybe_bunch_1(void)
{
	make_module40();
	make_module41();
	make_module42();
	make_module43();
	make_module44();
	make_module45();
	make_module46();
	make_module47();
	make_module48();
	make_module49();
}

/* suppress gcc -Wmissing-decls warnings */
void mercury__make__init(void);
void mercury__make__init_type_tables(void);
void mercury__make__init_debugger(void);
#ifdef MR_DEEP_PROFILING
void mercury__make__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp);
#endif
#ifdef MR_RECORD_TERM_SIZES
void mercury__make__init_complexity_procs(void);
#endif
#ifdef MR_THREADSCOPE
void mercury__make__init_threadscope_string_table(void);
#endif

void mercury__make__init(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	mercury__make_maybe_bunch_0();
	mercury__make_maybe_bunch_1();
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_make__type_ctor_info_c_header_type_0,
		make__c_header_type_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_make__type_ctor_info_compilation_task_type_0,
		make__compilation_task_type_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_make__type_ctor_info_dependency_file_index_map_0,
		make__dependency_file_index_map_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_make__type_ctor_info_dependency_status_0,
		make__dependency_status_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_make__type_ctor_info_file_timestamps_0,
		make__file_timestamps_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_make__type_ctor_info_last_hash_0,
		make__last_hash_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_make__type_ctor_info_linked_target_file_0,
		make__linked_target_file_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_make__type_ctor_info_make_error_0,
		make__make_error_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_make__type_ctor_info_make_info_0,
		make__make_info_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_make__type_ctor_info_misc_target_type_0,
		make__misc_target_type_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_make__type_ctor_info_module_compilation_task_type_0,
		make__module_compilation_task_type_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_make__type_ctor_info_module_index_map_0,
		make__module_index_map_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_make__type_ctor_info_module_target_type_0,
		make__module_target_type_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_make__type_ctor_info_rebuild_module_deps_0,
		make__rebuild_module_deps_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_make__type_ctor_info_target_file_0,
		make__target_file_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_make__type_ctor_info_target_type_0,
		make__target_type_0_0);
	mercury__make__init_debugger();
}

void mercury__make__init_type_tables(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	{
		MR_register_type_ctor_info(
		&mercury_data_make__type_ctor_info_c_header_type_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_make__type_ctor_info_compilation_task_type_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_make__type_ctor_info_dependency_file_index_map_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_make__type_ctor_info_dependency_status_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_make__type_ctor_info_file_timestamps_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_make__type_ctor_info_last_hash_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_make__type_ctor_info_linked_target_file_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_make__type_ctor_info_make_error_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_make__type_ctor_info_make_info_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_make__type_ctor_info_misc_target_type_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_make__type_ctor_info_module_compilation_task_type_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_make__type_ctor_info_module_index_map_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_make__type_ctor_info_module_target_type_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_make__type_ctor_info_rebuild_module_deps_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_make__type_ctor_info_target_file_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_make__type_ctor_info_target_type_0);
	}
}


void mercury__make__init_debugger(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}

#ifdef MR_DEEP_PROFILING

void mercury__make__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp)
{
	MR_write_out_module_proc_reps_start(procrep_fp, &mercury_data__module_common_layout__make);
	MR_write_out_module_proc_reps_end(procrep_fp);
}

#endif

#ifdef MR_RECORD_TERM_SIZES

void mercury__make__init_complexity_procs(void)
{
}

#endif

#ifdef MR_THREADSCOPE

void mercury__make__init_threadscope_string_table(void)
{
}

#endif

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;
