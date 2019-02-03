/*
** Automatically generated from `mcov.m'
** by the Mercury compiler,
** version 11.07-beta-2011-11-14, configured for x86_64-unknown-linux-gnu.
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
INIT mercury__mcov__init
ENDINIT
*/

#define MR_ALLOW_RESET
#include "mercury_imp.h"
#line 526 "../library/io.int"
#include "io.mh"

#line 28 "mcov.c"
#line 536 "../library/io.int"
#include "time.mh"

#line 32 "mcov.c"
#line 537 "../library/io.int"
#include "string.mh"

#line 36 "mcov.c"
#line 31 "../library/bitmap.int2"
#include "bitmap.mh"

#line 40 "mcov.c"
#line 33 "../library/array.int2"
#include "array.mh"

#line 44 "mcov.c"
#line 45 "mcov.c"
#include "mcov.mh"

#line 48 "mcov.c"
#line 49 "mcov.c"
#ifndef MCOV_DECL_GUARD
#define MCOV_DECL_GUARD

#line 53 "mcov.c"
#line 54 "mcov.c"

#endif
#line 57 "mcov.c"

#ifdef _MSC_VER
#define MR_STATIC_LINKAGE extern
#else
#define MR_STATIC_LINKAGE static
#endif

struct mercury_type_0 {
	MR_Word * f1[2];
};
MR_STATIC_LINKAGE const struct mercury_type_0 mercury_common_0[];

struct mercury_type_1 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[6];
};
MR_STATIC_LINKAGE const struct mercury_type_1 mercury_common_1[];

struct mercury_type_2 {
	MR_Word * f1;
	MR_Code * f2;
	MR_Integer f3;
};
MR_STATIC_LINKAGE const struct mercury_type_2 mercury_common_2[];

struct mercury_type_3 {
	MR_Word * f1[3];
};
MR_STATIC_LINKAGE const struct mercury_type_3 mercury_common_3[];

struct mercury_type_4 {
	MR_Word * f1;
	MR_Word * f2;
	MR_Integer f3;
	MR_Word * f4;
	MR_Word * f5;
};
MR_STATIC_LINKAGE const struct mercury_type_4 mercury_common_4[];

struct mercury_type_5 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[3];
};
MR_STATIC_LINKAGE const struct mercury_type_5 mercury_common_5[];

struct mercury_type_6 {
	MR_String f1;
	MR_Word * f2;
};
MR_STATIC_LINKAGE const struct mercury_type_6 mercury_common_6[];

struct mercury_type_7 {
	MR_Integer f1;
};
MR_STATIC_LINKAGE const struct mercury_type_7 mercury_common_7[];

struct mercury_type_8 {
	MR_Integer f1;
	MR_Word * f2;
};
MR_STATIC_LINKAGE const struct mercury_type_8 mercury_common_8[];

struct mercury_type_9 {
	MR_Integer f1;
	MR_String f2;
};
MR_STATIC_LINKAGE const struct mercury_type_9 mercury_common_9[];

MR_STATIC_LINKAGE const struct mercury_type_8 mercury_vector_common_8_0[];

extern const MR_TypeCtorInfo_Struct
	mercury_data_mcov__type_ctor_info_label_info_0,
	mercury_data_mcov__type_ctor_info_option_0,
	mercury_data_mcov__type_ctor_info_option_table_0,
	mercury_data_mcov__type_ctor_info_proc_info_0,
	mercury_data_mcov__type_ctor_info_trace_counts_list_0;
MR_decl_label8(mcov__collect_proc_infos_counts_5_0, 37,3,6,8,7,11,16,39)
MR_decl_label3(mcov__collect_zero_count_local_labels_3_0, 15,3,6)
MR_decl_label5(mcov__is_zero_count_local_proc_3_0, 5,4,7,9,1)
MR_decl_label6(mcov__label_process_path_port_count_6_0, 7,6,9,5,2,3)
MR_decl_label4(mcov__long_option_2_0, 3,4,5,1)
MR_decl_label10(main_2_0, 2,7,10,9,13,15,16,17,20,63)
MR_decl_label10(main_2_0, 26,21,29,30,31,33,35,36,38,39)
MR_decl_label10(main_2_0, 42,44,46,47,48,49,50,51,19,55)
MR_decl_label3(mcov__option_default_2_0, 6,7,8)
MR_decl_label2(mcov__proc_process_path_port_count_6_0, 6,2)
MR_decl_label4(mcov__short_option_2_0, 3,4,5,1)
MR_decl_label10(mcov__write_coverage_test_5_0, 3,4,11,12,13,14,17,18,19,10)
MR_decl_label3(mcov__write_coverage_test_5_0, 22,23,24)
MR_decl_label10(mcov__write_label_info_3_0, 2,3,4,5,9,11,12,13,14,15)
MR_decl_label9(mcov__write_label_info_3_0, 7,6,20,19,26,27,25,33,18)
MR_decl_label10(mcov__write_proc_info_3_0, 2,3,4,5,9,11,12,13,14,15)
MR_decl_label2(mcov__write_proc_info_3_0, 7,6)
MR_decl_label3(__Unify___mcov__label_info_0_0, 4,8,1)
MR_decl_label2(__Unify___mcov__proc_info_0_0, 6,1)
MR_decl_label6(__Compare___mcov__label_info_0_0, 3,2,5,9,13,37)
MR_decl_label5(__Compare___mcov__proc_info_0_0, 3,2,5,9,29)
MR_decl_static(mcov__collect_proc_infos_counts_5_0)
MR_decl_static(mcov__collect_zero_count_local_labels_3_0)
MR_decl_static(mcov__write_coverage_test_5_0)
MR_decl_static(mcov__usage_2_0)
MR_def_extern_entry(main_2_0)
MR_decl_static(mcov__proc_process_path_port_count_6_0)
MR_decl_static(mcov__is_zero_count_local_proc_3_0)
MR_decl_static(mcov__label_process_path_port_count_6_0)
MR_decl_static(mcov__write_proc_info_3_0)
MR_decl_static(mcov__write_label_info_3_0)
MR_decl_static(mcov__short_option_2_0)
MR_decl_static(mcov__long_option_2_0)
MR_decl_static(mcov__option_default_2_0)
MR_decl_static(__Unify___mcov__label_info_0_0)
MR_decl_static(__Compare___mcov__label_info_0_0)
MR_decl_static(__Unify___mcov__option_0_0)
MR_decl_static(__Compare___mcov__option_0_0)
MR_decl_static(__Unify___mcov__option_table_0_0)
MR_decl_static(__Compare___mcov__option_table_0_0)
MR_decl_static(__Unify___mcov__proc_info_0_0)
MR_decl_static(__Compare___mcov__proc_info_0_0)
MR_decl_static(__Unify___mcov__trace_counts_list_0_0)
MR_decl_static(__Compare___mcov__trace_counts_list_0_0)
MR_decl_static(mcov__IntroducedFrom__pred__write_coverage_test__155__1_2_0)
MR_decl_static(mcov__IntroducedFrom__pred__proc_process_path_port_count__222__1_2_0)

extern const MR_TypeCtorInfo_Struct mercury_data_maybe__type_ctor_info_maybe_1;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;
extern const MR_TypeCtorInfo_Struct mercury_data_list__type_ctor_info_list_1;
extern const MR_TypeCtorInfo_Struct mercury_data_mcov__type_ctor_info_label_info_0;
extern const MR_TypeCtorInfo_Struct mercury_data_set_ordlist__type_ctor_info_set_ordlist_1;
extern const MR_TypeCtorInfo_Struct mercury_data_mdbcomp__prim_data__type_ctor_info_sym_name_0;
static const struct mercury_type_0 mercury_common_0[5] =
{
{
{
MR_CTOR1_ADDR(maybe, maybe),
MR_INT_CTOR_ADDR
}
},
{
{
MR_CTOR1_ADDR(maybe, maybe),
MR_INT_CTOR_ADDR
}
},
{
{
MR_LIST_CTOR_ADDR,
MR_CTOR0_ADDR(mcov, label_info)
}
},
{
{
MR_LIST_CTOR_ADDR,
MR_CTOR0_ADDR(mcov, label_info)
}
},
{
{
MR_CTOR1_ADDR(set_ordlist, set_ordlist),
MR_CTOR0_ADDR(mdbcomp__prim_data, sym_name)
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__mcov__collect_proc_infos_counts_5_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_mdbcomp__trace_counts__type_ctor_info_path_port_0;
extern const MR_TypeCtorInfo_Struct mercury_data_mdbcomp__trace_counts__type_ctor_info_line_no_and_count_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;
static const MR_UserClosureId
mercury_data__closure_layout__mcov__collect_zero_count_local_labels_3_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_mdbcomp__prim_data__type_ctor_info_proc_label_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_string_0;
static const struct mercury_type_1 mercury_common_1[2] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__mcov__collect_proc_infos_counts_5_0_1,
(MR_Word *) (MR_Integer) 0
},
6,
{
MR_CTOR0_ADDR(mdbcomp__trace_counts, path_port),
MR_CTOR0_ADDR(mdbcomp__trace_counts, line_no_and_count),
MR_COMMON(0,1),
MR_COMMON(0,1),
MR_INT_CTOR_ADDR,
MR_INT_CTOR_ADDR
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__mcov__collect_zero_count_local_labels_3_0_1,
(MR_Word *) (MR_Integer) 0
},
6,
{
MR_CTOR0_ADDR(mdbcomp__prim_data, proc_label),
MR_STRING_CTOR_ADDR,
MR_CTOR0_ADDR(mdbcomp__trace_counts, path_port),
MR_CTOR0_ADDR(mdbcomp__trace_counts, line_no_and_count),
MR_COMMON(0,2),
MR_COMMON(0,2)
}
},
};

MR_decl_entry(fn__mdbcomp__prim_data__string_to_sym_name_1_0);
static const struct mercury_type_2 mercury_common_2[7] =
{
{
MR_COMMON(1,0),
MR_ENTRY_AP(mcov__proc_process_path_port_count_6_0),
0
},
{
MR_COMMON(5,1),
MR_ENTRY_AP(mcov__write_proc_info_3_0),
0
},
{
MR_COMMON(5,2),
MR_ENTRY_AP(mcov__write_label_info_3_0),
0
},
{
MR_COMMON(4,1),
MR_ENTRY_AP(mcov__short_option_2_0),
0
},
{
MR_COMMON(4,2),
MR_ENTRY_AP(mcov__long_option_2_0),
0
},
{
MR_COMMON(4,3),
MR_ENTRY_AP(mcov__option_default_2_0),
0
},
{
MR_COMMON(4,4),
MR_ENTRY_AP(fn__mdbcomp__prim_data__string_to_sym_name_1_0),
0
},
};

extern const MR_TypeCtorInfo_Struct mercury_data_tree234__type_ctor_info_tree234_2;
extern const MR_TypeCtorInfo_Struct mercury_data_mdbcomp__trace_counts__type_ctor_info_path_port_0;
extern const MR_TypeCtorInfo_Struct mercury_data_mdbcomp__trace_counts__type_ctor_info_line_no_and_count_0;
extern const MR_TypeCtorInfo_Struct mercury_data_tree234__type_ctor_info_tree234_2;
extern const MR_TypeCtorInfo_Struct mercury_data_mdbcomp__trace_counts__type_ctor_info_path_port_0;
extern const MR_TypeCtorInfo_Struct mercury_data_mdbcomp__trace_counts__type_ctor_info_line_no_and_count_0;
extern const MR_TypeCtorInfo_Struct mercury_data_pair__type_ctor_info_pair_2;
extern const MR_TypeCtorInfo_Struct mercury_data_mdbcomp__trace_counts__type_ctor_info_proc_label_in_context_0;
extern const MR_TypeCtorInfo_Struct mercury_data_mdbcomp__trace_counts__type_ctor_info_proc_label_in_context_0;
extern const MR_TypeCtorInfo_Struct mercury_data_mdbcomp__prim_data__type_ctor_info_proc_label_0;
extern const MR_TypeCtorInfo_Struct mercury_data_mcov__type_ctor_info_proc_info_0;
extern const MR_TypeCtorInfo_Struct mercury_data_mdbcomp__prim_data__type_ctor_info_proc_label_0;
static const struct mercury_type_3 mercury_common_3[8] =
{
{
{
MR_CTOR_ADDR(tree234, tree234, 2),
MR_CTOR0_ADDR(mdbcomp__trace_counts, path_port),
MR_CTOR0_ADDR(mdbcomp__trace_counts, line_no_and_count)
}
},
{
{
MR_CTOR_ADDR(tree234, tree234, 2),
MR_CTOR0_ADDR(mdbcomp__trace_counts, path_port),
MR_CTOR0_ADDR(mdbcomp__trace_counts, line_no_and_count)
}
},
{
{
MR_CTOR_ADDR(pair, pair, 2),
MR_CTOR0_ADDR(mdbcomp__trace_counts, proc_label_in_context),
MR_COMMON(3,1)
}
},
{
{
MR_CTOR_ADDR(pair, pair, 2),
MR_CTOR0_ADDR(mdbcomp__trace_counts, proc_label_in_context),
MR_TAG_COMMON(0,3,0)
}
},
{
{
MR_CTOR_ADDR(tree234, tree234, 2),
MR_CTOR0_ADDR(mdbcomp__prim_data, proc_label),
MR_CTOR0_ADDR(mcov, proc_info)
}
},
{
{
MR_CTOR_ADDR(pair, pair, 2),
MR_CTOR0_ADDR(mdbcomp__prim_data, proc_label),
MR_INT_CTOR_ADDR
}
},
{
{
MR_CTOR_ADDR(pair, pair, 2),
MR_CTOR0_ADDR(mdbcomp__prim_data, proc_label),
MR_INT_CTOR_ADDR
}
},
{
{
MR_TAG_COMMON(0,2,3),
MR_TAG_COMMON(0,2,4),
MR_TAG_COMMON(0,2,5)
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__mcov__write_coverage_test_5_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__main_2_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_character_0;
extern const MR_TypeCtorInfo_Struct mercury_data_mcov__type_ctor_info_option_0;
static const MR_UserClosureId
mercury_data__closure_layout__main_2_0_2;
static const MR_UserClosureId
mercury_data__closure_layout__main_2_0_3;
extern const MR_TypeCtorInfo_Struct mercury_data_getopt__type_ctor_info_option_data_0;
static const MR_UserClosureId
mercury_data__closure_layout__main_2_0_4;
extern const MR_TypeCtorInfo_Struct mercury_data_mdbcomp__prim_data__type_ctor_info_sym_name_0;
static const MR_UserClosureId
mercury_data__closure_layout__mcov__proc_process_path_port_count_6_0_1;
static const struct mercury_type_4 mercury_common_4[6] =
{
{
(MR_Word *) &mercury_data__closure_layout__mcov__write_coverage_test_5_0_1,
(MR_Word *) (MR_Integer) 0,
2,
MR_COMMON(0,4),
MR_COMMON(3,2)
},
{
(MR_Word *) &mercury_data__closure_layout__main_2_0_1,
(MR_Word *) (MR_Integer) 0,
2,
MR_CHAR_CTOR_ADDR,
MR_CTOR0_ADDR(mcov, option)
},
{
(MR_Word *) &mercury_data__closure_layout__main_2_0_2,
(MR_Word *) (MR_Integer) 0,
2,
MR_STRING_CTOR_ADDR,
MR_CTOR0_ADDR(mcov, option)
},
{
(MR_Word *) &mercury_data__closure_layout__main_2_0_3,
(MR_Word *) (MR_Integer) 0,
2,
MR_CTOR0_ADDR(mcov, option),
MR_CTOR0_ADDR(getopt, option_data)
},
{
(MR_Word *) &mercury_data__closure_layout__main_2_0_4,
(MR_Word *) (MR_Integer) 0,
2,
MR_STRING_CTOR_ADDR,
MR_CTOR0_ADDR(mdbcomp__prim_data, sym_name)
},
{
(MR_Word *) &mercury_data__closure_layout__mcov__proc_process_path_port_count_6_0_1,
(MR_Word *) (MR_Integer) 0,
2,
MR_COMMON(0,1),
MR_COMMON(0,1)
},
};

static const MR_UserClosureId
mercury_data__closure_layout__mcov__write_coverage_test_5_0_2;
extern const MR_TypeCtorInfo_Struct mercury_data_mcov__type_ctor_info_proc_info_0;
static const MR_UserClosureId
mercury_data__closure_layout__mcov__write_coverage_test_5_0_3;
extern const MR_TypeCtorInfo_Struct mercury_data_io__type_ctor_info_state_0;
static const MR_UserClosureId
mercury_data__closure_layout__mcov__write_coverage_test_5_0_4;
extern const MR_TypeCtorInfo_Struct mercury_data_mcov__type_ctor_info_label_info_0;
static const struct mercury_type_5 mercury_common_5[3] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__mcov__write_coverage_test_5_0_2,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_COMMON(3,4),
MR_COMMON(3,5),
MR_CTOR0_ADDR(mcov, proc_info)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__mcov__write_coverage_test_5_0_3,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_CTOR0_ADDR(mcov, proc_info),
MR_IO_CTOR_ADDR,
MR_IO_CTOR_ADDR
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__mcov__write_coverage_test_5_0_4,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_CTOR0_ADDR(mcov, label_info),
MR_IO_CTOR_ADDR,
MR_IO_CTOR_ADDR
}
},
};

static const struct mercury_type_6 mercury_common_6[12] =
{
{
MR_string_const("of the output file.\n", 20),
MR_tbmkword(0, 0)
},
{
MR_string_const("The argument of the -o or --output-file option gives the name\n", 62),
MR_TAG_COMMON(1,6,0)
},
{
MR_string_const("will be restricted to the modules named by their arguments.\n", 60),
MR_TAG_COMMON(1,6,1)
},
{
MR_string_const("If one or more -m or --module options are given, then the output\n", 65),
MR_TAG_COMMON(1,6,2)
},
{
MR_string_const("file1, file2, etc should be trace count files.\n", 47),
MR_TAG_COMMON(1,6,3)
},
{
MR_string_const("to be printed as it is added to the union.\n", 43),
MR_TAG_COMMON(1,6,4)
},
{
MR_string_const("The -v or --verbose option causes each trace count file name\n", 61),
MR_TAG_COMMON(1,6,5)
},
{
MR_string_const("has been executed in the same procedure.\n", 41),
MR_TAG_COMMON(1,6,6)
},
{
MR_string_const("each label that has not been executed, even if some other code\n", 63),
MR_TAG_COMMON(1,6,7)
},
{
MR_string_const("The -d or --detailed option causes the printing of a report for\n", 64),
MR_TAG_COMMON(1,6,8)
},
{
MR_string_const("Usage: mcov [-d] [-v] [-m module] [-o output_file] file1 file2 ...\n", 67),
MR_TAG_COMMON(1,6,9)
},
{
MR_string_const(">", 1),
MR_tbmkword(0, 0)
},
};

static const struct mercury_type_7 mercury_common_7[1] =
{
{
0
},
};

static const struct mercury_type_8 mercury_common_8[1] =
{
{
3,
MR_tbmkword(0, 0)
},
};

static const struct mercury_type_9 mercury_common_9[1] =
{
{
0,
MR_string_const("", 0)
},
};

static const struct mercury_type_8 mercury_vector_common_8_0[4] =
{
{
0,
MR_TAG_COMMON(1,7,0)
},
{
1,
MR_TAG_COMMON(3,8,0)
},
{
2,
MR_TAG_COMMON(3,9,0)
},
{
3,
MR_TAG_COMMON(1,7,0)
},
};
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_string_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_string_0;

const MR_PseudoTypeInfo mercury_data_mcov__field_types_label_info_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_string_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_mdbcomp__prim_data__type_ctor_info_proc_label_0,
	(MR_PseudoTypeInfo) &mercury_data_mdbcomp__trace_counts__type_ctor_info_path_port_0
};

const MR_ConstString mercury_data_mcov__field_names_label_info_0_0[] = {
	"label_source_file",
	"label_line_number",
	"label_proc",
	"label_path_port"
};

static const MR_DuFunctorDesc mercury_data_mcov__du_functor_desc_label_info_0_0 = {
	"label_info",
	4,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_mcov__field_types_label_info_0_0,
	mercury_data_mcov__field_names_label_info_0_0,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_mcov__du_stag_ordered_label_info_0_0[] = {
	&mercury_data_mcov__du_functor_desc_label_info_0_0

};

const MR_DuPtagLayout mercury_data_mcov__du_ptag_ordered_label_info_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_mcov__du_stag_ordered_label_info_0_0 }

};

const MR_DuFunctorDescPtr mercury_data_mcov__du_name_ordered_label_info_0[] = {
	&mercury_data_mcov__du_functor_desc_label_info_0_0
};

const MR_Integer mercury_data_mcov__functor_number_map_label_info_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_mcov__type_ctor_info_label_info_0 = {
	0,
	14,
	1,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___mcov__label_info_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___mcov__label_info_0_0)),
	"mcov",
	"label_info",
	{ (void *)mercury_data_mcov__du_name_ordered_label_info_0 },
	{ (void *)mercury_data_mcov__du_ptag_ordered_label_info_0 },
	1,
	4,
	mercury_data_mcov__functor_number_map_label_info_0
};

static const MR_EnumFunctorDesc mercury_data_mcov__enum_functor_desc_option_0_0 = {
	"detailed",
	0
};

static const MR_EnumFunctorDesc mercury_data_mcov__enum_functor_desc_option_0_1 = {
	"modules",
	1
};

static const MR_EnumFunctorDesc mercury_data_mcov__enum_functor_desc_option_0_2 = {
	"output_filename",
	2
};

static const MR_EnumFunctorDesc mercury_data_mcov__enum_functor_desc_option_0_3 = {
	"verbose",
	3
};

const MR_EnumFunctorDescPtr mercury_data_mcov__enum_value_ordered_option_0[] = {
	&mercury_data_mcov__enum_functor_desc_option_0_0,
	&mercury_data_mcov__enum_functor_desc_option_0_1,
	&mercury_data_mcov__enum_functor_desc_option_0_2,
	&mercury_data_mcov__enum_functor_desc_option_0_3
};

const MR_EnumFunctorDescPtr mercury_data_mcov__enum_name_ordered_option_0[] = {
	&mercury_data_mcov__enum_functor_desc_option_0_0,
	&mercury_data_mcov__enum_functor_desc_option_0_1,
	&mercury_data_mcov__enum_functor_desc_option_0_2,
	&mercury_data_mcov__enum_functor_desc_option_0_3
};

const MR_Integer mercury_data_mcov__functor_number_map_option_0[] = {
	0,
	1,
	2,
	3 };
	
const MR_TypeCtorInfo_Struct mercury_data_mcov__type_ctor_info_option_0 = {
	0,
	14,
	-1,
	MR_TYPECTOR_REP_ENUM,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___mcov__option_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___mcov__option_0_0)),
	"mcov",
	"option",
	{ (void *)mercury_data_mcov__enum_name_ordered_option_0 },
	{ (void *)mercury_data_mcov__enum_value_ordered_option_0 },
	4,
	4,
	mercury_data_mcov__functor_number_map_option_0
};
extern const MR_TypeCtorInfo_Struct mercury_data_getopt__type_ctor_info_option_data_0;
extern const MR_TypeCtorInfo_Struct mercury_data_mcov__type_ctor_info_option_0;
extern const MR_TypeCtorInfo_Struct mercury_data_getopt__type_ctor_info_option_data_0;

static const MR_FA_TypeInfo_Struct2 mercury_data_tree234__ti_tree234_2mcov__type_ctor_info_option_0getopt__type_ctor_info_option_data_0 = {
	&mercury_data_tree234__type_ctor_info_tree234_2,
{	(MR_TypeInfo) &mercury_data_mcov__type_ctor_info_option_0,
	(MR_TypeInfo) &mercury_data_getopt__type_ctor_info_option_data_0
}};

const MR_TypeCtorInfo_Struct mercury_data_mcov__type_ctor_info_option_table_0 = {
	0,
	14,
	-1,
	MR_TYPECTOR_REP_EQUIV_GROUND,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___mcov__option_table_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___mcov__option_table_0_0)),
	"mcov",
	"option_table",
	{ 0 },
	{ (void *)&mercury_data_tree234__ti_tree234_2mcov__type_ctor_info_option_0getopt__type_ctor_info_option_data_0 },
	-1,
	0,
	NULL
};

const MR_PseudoTypeInfo mercury_data_mcov__field_types_proc_info_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_string_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_mdbcomp__prim_data__type_ctor_info_proc_label_0
};

const MR_ConstString mercury_data_mcov__field_names_proc_info_0_0[] = {
	"proc_source_file",
	"proc_line_number",
	"proc_proc"
};

static const MR_DuFunctorDesc mercury_data_mcov__du_functor_desc_proc_info_0_0 = {
	"proc_info",
	3,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_mcov__field_types_proc_info_0_0,
	mercury_data_mcov__field_names_proc_info_0_0,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_mcov__du_stag_ordered_proc_info_0_0[] = {
	&mercury_data_mcov__du_functor_desc_proc_info_0_0

};

const MR_DuPtagLayout mercury_data_mcov__du_ptag_ordered_proc_info_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_mcov__du_stag_ordered_proc_info_0_0 }

};

const MR_DuFunctorDescPtr mercury_data_mcov__du_name_ordered_proc_info_0[] = {
	&mercury_data_mcov__du_functor_desc_proc_info_0_0
};

const MR_Integer mercury_data_mcov__functor_number_map_proc_info_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_mcov__type_ctor_info_proc_info_0 = {
	0,
	14,
	1,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___mcov__proc_info_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___mcov__proc_info_0_0)),
	"mcov",
	"proc_info",
	{ (void *)mercury_data_mcov__du_name_ordered_proc_info_0 },
	{ (void *)mercury_data_mcov__du_ptag_ordered_proc_info_0 },
	1,
	4,
	mercury_data_mcov__functor_number_map_proc_info_0
};

static const MR_FA_TypeInfo_Struct2 mercury_data_tree234__ti_tree234_2mdbcomp__trace_counts__type_ctor_info_path_port_0mdbcomp__trace_counts__type_ctor_info_line_no_and_count_0 = {
	&mercury_data_tree234__type_ctor_info_tree234_2,
{	(MR_TypeInfo) &mercury_data_mdbcomp__trace_counts__type_ctor_info_path_port_0,
	(MR_TypeInfo) &mercury_data_mdbcomp__trace_counts__type_ctor_info_line_no_and_count_0
}};

static const MR_FA_TypeInfo_Struct2 mercury_data_pair__ti_pair_2mdbcomp__trace_counts__type_ctor_info_proc_label_in_context_0tree234__ti_tree234_2mdbcomp__trace_counts__type_ctor_info_path_port_0mdbcomp__trace_counts__type_ctor_info_line_no_and_count_0 = {
	&mercury_data_pair__type_ctor_info_pair_2,
{	(MR_TypeInfo) &mercury_data_mdbcomp__trace_counts__type_ctor_info_proc_label_in_context_0,
	(MR_TypeInfo) &mercury_data_tree234__ti_tree234_2mdbcomp__trace_counts__type_ctor_info_path_port_0mdbcomp__trace_counts__type_ctor_info_line_no_and_count_0
}};

static const MR_FA_TypeInfo_Struct1 mercury_data_list__ti_list_1pair__ti_pair_2mdbcomp__trace_counts__type_ctor_info_proc_label_in_context_0tree234__ti_tree234_2mdbcomp__trace_counts__type_ctor_info_path_port_0mdbcomp__trace_counts__type_ctor_info_line_no_and_count_0 = {
	&mercury_data_list__type_ctor_info_list_1,
{	(MR_TypeInfo) &mercury_data_pair__ti_pair_2mdbcomp__trace_counts__type_ctor_info_proc_label_in_context_0tree234__ti_tree234_2mdbcomp__trace_counts__type_ctor_info_path_port_0mdbcomp__trace_counts__type_ctor_info_line_no_and_count_0
}};

const MR_TypeCtorInfo_Struct mercury_data_mcov__type_ctor_info_trace_counts_list_0 = {
	0,
	14,
	-1,
	MR_TYPECTOR_REP_EQUIV_GROUND,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___mcov__trace_counts_list_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___mcov__trace_counts_list_0_0)),
	"mcov",
	"trace_counts_list",
	{ 0 },
	{ (void *)&mercury_data_list__ti_list_1pair__ti_pair_2mdbcomp__trace_counts__type_ctor_info_proc_label_in_context_0tree234__ti_tree234_2mdbcomp__trace_counts__type_ctor_info_path_port_0mdbcomp__trace_counts__type_ctor_info_line_no_and_count_0 },
	-1,
	0,
	NULL
};


static const MR_UserClosureId
mercury_data__closure_layout__mcov__proc_process_path_port_count_6_0_1 = {
{
MR_PREDICATE,
"mcov",
"mcov",
"lambda_mcov_m_222",
2,
0
},
"mcov",
"mcov.m",
222,
"15"
};

static const MR_UserClosureId
mercury_data__closure_layout__main_2_0_4 = {
{
MR_FUNCTION,
"mdbcomp.prim_data",
"mdbcomp.prim_data",
"string_to_sym_name",
2,
0
},
"mcov",
"mcov.m",
83,
"57"
};

static const MR_UserClosureId
mercury_data__closure_layout__main_2_0_3 = {
{
MR_PREDICATE,
"mcov",
"mcov",
"option_default",
2,
0
},
"mcov",
"mcov.m",
48,
"8"
};

static const MR_UserClosureId
mercury_data__closure_layout__main_2_0_2 = {
{
MR_PREDICATE,
"mcov",
"mcov",
"long_option",
2,
0
},
"mcov",
"mcov.m",
48,
"7"
};

static const MR_UserClosureId
mercury_data__closure_layout__main_2_0_1 = {
{
MR_PREDICATE,
"mcov",
"mcov",
"short_option",
2,
0
},
"mcov",
"mcov.m",
48,
"6"
};

static const MR_UserClosureId
mercury_data__closure_layout__mcov__write_coverage_test_5_0_4 = {
{
MR_PREDICATE,
"mcov",
"mcov",
"write_label_info",
3,
0
},
"mcov",
"mcov.m",
168,
"32"
};

static const MR_UserClosureId
mercury_data__closure_layout__mcov__write_coverage_test_5_0_3 = {
{
MR_PREDICATE,
"mcov",
"mcov",
"write_proc_info",
3,
0
},
"mcov",
"mcov.m",
162,
"23"
};

static const MR_UserClosureId
mercury_data__closure_layout__mcov__write_coverage_test_5_0_2 = {
{
MR_PREDICATE,
"mcov",
"mcov",
"is_zero_count_local_proc",
3,
0
},
"mcov",
"mcov.m",
187,
"8"
};

static const MR_UserClosureId
mercury_data__closure_layout__mcov__write_coverage_test_5_0_1 = {
{
MR_PREDICATE,
"mcov",
"mcov",
"lambda_mcov_m_155",
2,
0
},
"mcov",
"mcov.m",
155,
"14"
};

static const MR_UserClosureId
mercury_data__closure_layout__mcov__collect_zero_count_local_labels_3_0_1 = {
{
MR_PREDICATE,
"mcov",
"mcov",
"label_process_path_port_count",
6,
0
},
"mcov",
"mcov.m",
246,
"12"
};

static const MR_UserClosureId
mercury_data__closure_layout__mcov__collect_proc_infos_counts_5_0_1 = {
{
MR_PREDICATE,
"mcov",
"mcov",
"proc_process_path_port_count",
6,
0
},
"mcov",
"mcov.m",
198,
"17"
};


MR_decl_entry(map__foldl2_6_0);
MR_decl_entry(map__search_3_0);
MR_decl_entry(map__det_update_4_0);
MR_decl_entry(map__det_insert_4_0);

MR_BEGIN_MODULE(mcov_module0)
	MR_init_entry1(mcov__collect_proc_infos_counts_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mcov__collect_proc_infos_counts_5_0);
	MR_init_label8(mcov__collect_proc_infos_counts_5_0,37,3,6,8,7,11,16,39)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'collect_proc_infos_counts'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mcov__collect_proc_infos_counts_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
MR_def_label(mcov__collect_proc_infos_counts_5_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(mcov__collect_proc_infos_counts_5_0_i3);
	}
	MR_r1 = MR_r2;
	MR_r2 = MR_r3;
	MR_decr_sp_and_return(9);
MR_def_label(mcov__collect_proc_infos_counts_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_tfield(1, MR_r1, 1);
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(1, MR_r1, 0);
	MR_tempr2 = MR_tfield(0, MR_tempr1, 0);
	MR_sv(4) = MR_tfield(0, MR_tempr2, 1);
	MR_sv(5) = MR_tfield(0, MR_tempr2, 2);
	MR_sv(8) = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__trace_counts, path_port);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__trace_counts, line_no_and_count);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r4 = MR_sv(8);
	MR_r5 = (MR_Word) MR_TAG_COMMON(0,2,0);
	MR_r6 = MR_tfield(0, MR_tempr1, 1);
	MR_r7 = (MR_Word) MR_tbmkword(0, 0);
	MR_r8 = (MR_Integer) 0;
	}
	MR_np_call_localret_ent(map__foldl2_6_0,
		mcov__collect_proc_infos_counts_5_0_i6);
MR_def_label(mcov__collect_proc_infos_counts_5_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_sv(7) = MR_r2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__prim_data, proc_label);
	MR_r2 = MR_sv(8);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(5);
	MR_np_call_localret_ent(map__search_3_0,
		mcov__collect_proc_infos_counts_5_0_i8);
MR_def_label(mcov__collect_proc_infos_counts_5_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(mcov__collect_proc_infos_counts_5_0_i7);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__prim_data, proc_label);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(8);
	MR_r3 = MR_sv(5);
	MR_r4 = ((MR_Integer) MR_tempr1 + (MR_Integer) MR_sv(7));
	MR_r5 = MR_sv(2);
	}
	MR_np_call_localret_ent(map__det_update_4_0,
		mcov__collect_proc_infos_counts_5_0_i11);
MR_def_label(mcov__collect_proc_infos_counts_5_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__prim_data, proc_label);
	MR_r2 = MR_sv(8);
	MR_r3 = MR_sv(5);
	MR_r4 = MR_sv(7);
	MR_r5 = MR_sv(2);
	MR_np_call_localret_ent(map__det_insert_4_0,
		mcov__collect_proc_infos_counts_5_0_i11);
MR_def_label(mcov__collect_proc_infos_counts_5_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_r4 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r3 = MR_r4;
	if (MR_LTAGS_TEST(MR_sv(6),0,0)) {
		MR_GOTO_LAB(mcov__collect_proc_infos_counts_5_0_i39);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_r4 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_sv(4);
	MR_tfield(0, MR_tempr1, 1) = MR_tfield(1, MR_sv(6), 0);
	MR_tempr3 = MR_sv(5);
	MR_tfield(0, MR_tempr1, 2) = MR_tempr3;
	MR_sv(1) = MR_r3;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__prim_data, proc_label);
	MR_tempr2 = MR_r2;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(mcov, proc_info);
	MR_r3 = MR_tempr3;
	MR_r5 = MR_tempr2;
	}
	MR_np_call_localret_ent(map__det_insert_4_0,
		mcov__collect_proc_infos_counts_5_0_i16);
MR_def_label(mcov__collect_proc_infos_counts_5_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r3 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
MR_def_label(mcov__collect_proc_infos_counts_5_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(9);
	MR_GOTO_LAB(mcov__collect_proc_infos_counts_5_0_i37);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(map__foldl_4_0);

MR_BEGIN_MODULE(mcov_module1)
	MR_init_entry1(mcov__collect_zero_count_local_labels_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mcov__collect_zero_count_local_labels_3_0);
	MR_init_label3(mcov__collect_zero_count_local_labels_3_0,15,3,6)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'collect_zero_count_local_labels'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mcov__collect_zero_count_local_labels_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
MR_def_label(mcov__collect_zero_count_local_labels_3_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(mcov__collect_zero_count_local_labels_3_0_i3);
	}
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(2);
MR_def_label(mcov__collect_zero_count_local_labels_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_r4 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(1,1);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(mcov__label_process_path_port_count_6_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tempr2 = MR_tfield(1, MR_r1, 0);
	MR_tempr3 = MR_tfield(0, MR_tempr2, 0);
	MR_tfield(0, MR_tempr1, 3) = MR_tfield(0, MR_tempr3, 2);
	MR_tfield(0, MR_tempr1, 4) = MR_tfield(0, MR_tempr3, 1);
	MR_sv(1) = MR_tfield(1, MR_r1, 1);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__trace_counts, path_port);
	MR_tempr3 = MR_r2;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__trace_counts, line_no_and_count);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,0,3);
	MR_r5 = MR_tfield(0, MR_tempr2, 1);
	MR_r6 = MR_tempr3;
	}
	MR_np_call_localret_ent(map__foldl_4_0,
		mcov__collect_zero_count_local_labels_3_0_i6);
MR_def_label(mcov__collect_zero_count_local_labels_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(2);
	MR_GOTO_LAB(mcov__collect_zero_count_local_labels_3_0_i15);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(map__to_assoc_list_2_0);
MR_decl_entry(list__filter_3_0);
MR_decl_entry(fn__map__init_0_0);
MR_decl_entry(list__filter_map_3_0);
MR_decl_entry(list__sort_2_0);
MR_decl_entry(io__write_string_3_0);
extern const MR_TypeCtorInfo_Struct mercury_data_io__type_ctor_info_state_0;
MR_decl_entry(list__foldl_4_2);

MR_BEGIN_MODULE(mcov_module2)
	MR_init_entry1(mcov__write_coverage_test_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mcov__write_coverage_test_5_0);
	MR_init_label10(mcov__write_coverage_test_5_0,3,4,11,12,13,14,17,18,19,10)
	MR_init_label3(mcov__write_coverage_test_5_0,22,23,24)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'write_coverage_test'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mcov__write_coverage_test_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = (MR_Word) MR_TAG_COMMON(0,3,0);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__trace_counts, proc_label_in_context);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(map__to_assoc_list_2_0,
		mcov__write_coverage_test_5_0_i3);
MR_def_label(mcov__write_coverage_test_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_sv(2),0,0)) {
		MR_GOTO_LAB(mcov__write_coverage_test_5_0_i4);
	}
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 4);
	MR_tfield(0, MR_r2, 0) = (MR_Word) MR_COMMON(4,0);
	MR_tfield(0, MR_r2, 1) = (MR_Word) MR_ENTRY_AP(mcov__IntroducedFrom__pred__write_coverage_test__155__1_2_0);
	MR_tfield(0, MR_r2, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_r2, 3) = MR_tfield(1, MR_sv(2), 0);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,3,3);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__filter_3_0,
		mcov__write_coverage_test_5_0_i4);
MR_def_label(mcov__write_coverage_test_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(1),0)) {
		MR_GOTO_LAB(mcov__write_coverage_test_5_0_i10);
	}
	MR_sv(1) = MR_r1;
	MR_sv(3) = (MR_Word) MR_CTOR0_ADDR(mdbcomp__prim_data, proc_label);
	MR_sv(4) = (MR_Word) MR_CTOR0_ADDR(mcov, proc_info);
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(fn__map__init_0_0,
		mcov__write_coverage_test_5_0_i11);
MR_def_label(mcov__write_coverage_test_5_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_sv(5) = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(fn__map__init_0_0,
		mcov__write_coverage_test_5_0_i12);
MR_def_label(mcov__write_coverage_test_5_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(mcov__collect_proc_infos_counts_5_0,
		mcov__write_coverage_test_5_0_i13);
MR_def_label(mcov__write_coverage_test_5_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(3);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(5);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(map__to_assoc_list_2_0,
		mcov__write_coverage_test_5_0_i14);
MR_def_label(mcov__write_coverage_test_5_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(5,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(mcov__is_zero_count_local_proc_3_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(1);
	MR_tempr2 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,3,6);
	MR_r2 = MR_sv(4);
	MR_r4 = MR_tempr2;
	}
	MR_np_call_localret_ent(list__filter_map_3_0,
		mcov__write_coverage_test_5_0_i17);
MR_def_label(mcov__write_coverage_test_5_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = (MR_Word) MR_CTOR0_ADDR(mcov, proc_info);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__sort_2_0,
		mcov__write_coverage_test_5_0_i18);
MR_def_label(mcov__write_coverage_test_5_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("Unexecuted procedures:\n\n", 24);
	MR_np_call_localret_ent(io__write_string_3_0,
		mcov__write_coverage_test_5_0_i19);
MR_def_label(mcov__write_coverage_test_5_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_r2 = (MR_Word) MR_IO_CTOR_ADDR;
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,2,1);
	MR_r4 = MR_sv(1);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(list__foldl_4_2);
MR_def_label(mcov__write_coverage_test_5_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_np_call_localret_ent(mcov__collect_zero_count_local_labels_3_0,
		mcov__write_coverage_test_5_0_i22);
MR_def_label(mcov__write_coverage_test_5_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = (MR_Word) MR_CTOR0_ADDR(mcov, label_info);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__sort_2_0,
		mcov__write_coverage_test_5_0_i23);
MR_def_label(mcov__write_coverage_test_5_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("Unexecuted labels:\n\n", 20);
	MR_np_call_localret_ent(io__write_string_3_0,
		mcov__write_coverage_test_5_0_i24);
MR_def_label(mcov__write_coverage_test_5_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_r2 = (MR_Word) MR_IO_CTOR_ADDR;
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,2,2);
	MR_r4 = MR_sv(1);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(list__foldl_4_2);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(io__write_strings_3_0);

MR_BEGIN_MODULE(mcov_module3)
	MR_init_entry1(mcov__usage_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mcov__usage_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'usage'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mcov__usage_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(1,6,10);
	MR_np_tailcall_ent(io__write_strings_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(io__command_line_arguments_3_0);
MR_decl_entry(getopt__process_options_4_0);
MR_decl_entry(io__nl_2_0);
MR_decl_entry(getopt__lookup_bool_option_3_0);
MR_decl_entry(mdbcomp__trace_counts__read_and_union_trace_counts_8_0);
MR_decl_entry(io__stderr_stream_3_0);
extern const MR_TypeCtorInfo_Struct mercury_data_mdbcomp__trace_counts__type_ctor_info_trace_count_file_type_0;
MR_decl_entry(set__to_sorted_list_2_0);
MR_decl_entry(io__write_string_4_0);
MR_decl_entry(getopt__lookup_accumulating_option_3_0);
MR_decl_entry(getopt__lookup_string_option_3_0);
extern const MR_TypeCtorInfo_Struct mercury_data_mdbcomp__prim_data__type_ctor_info_sym_name_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_string_0;
MR_decl_entry(fn__list__map_2_0);
MR_decl_entry(fn__set__list_to_set_1_0);
MR_decl_entry(io__tell_4_0);
extern const MR_TypeCtorInfo_Struct mercury_data_io__type_ctor_info_error_0;
MR_decl_entry(fn__string__string_1_0);
MR_decl_entry(fn__f_115_116_114_105_110_103_95_95_43_43_2_0);
MR_decl_entry(io__nl_3_0);

MR_BEGIN_MODULE(mcov_module4)
	MR_init_entry1(main_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__main_2_0);
	MR_init_label10(main_2_0,2,7,10,9,13,15,16,17,20,63)
	MR_init_label10(main_2_0,26,21,29,30,31,33,35,36,38,39)
	MR_init_label10(main_2_0,42,44,46,47,48,49,50,51,19,55)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'main'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__main_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(io__command_line_arguments_3_0,
		main_2_0_i2);
MR_def_label(main_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = (MR_Word) MR_CTOR0_ADDR(mcov, option);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = (MR_Word) MR_TAG_COMMON(2,3,7);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(getopt__process_options_4_0,
		main_2_0_i7);
MR_def_label(main_2_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r2,1)) {
		MR_GOTO_LAB(main_2_0_i9);
	}
	MR_r1 = MR_tfield(1, MR_r2, 0);
	MR_np_call_localret_ent(io__write_string_3_0,
		main_2_0_i10);
MR_def_label(main_2_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(io__nl_2_0);
MR_def_label(main_2_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(main_2_0_i13);
	}
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(mcov__usage_2_0);
MR_def_label(main_2_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_tfield(0, MR_r2, 0);
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(2);
	MR_r3 = (MR_Integer) 3;
	MR_np_call_localret_ent(getopt__lookup_bool_option_3_0,
		main_2_0_i15);
MR_def_label(main_2_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(mdbcomp__trace_counts__read_and_union_trace_counts_8_0,
		main_2_0_i16);
MR_def_label(main_2_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_np_call_localret_ent(io__stderr_stream_3_0,
		main_2_0_i17);
MR_def_label(main_2_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(4),0,0)) {
		MR_GOTO_LAB(main_2_0_i19);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__trace_counts, trace_count_file_type);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(set__to_sorted_list_2_0,
		main_2_0_i20);
MR_def_label(main_2_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(main_2_0_i21);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(1, MR_r1, 1);
	if (MR_LTAGS_TESTR(MR_tempr1,0,0)) {
		MR_GOTO_LAB(main_2_0_i21);
	}
	MR_tempr1 = MR_tfield(1, MR_r1, 0);
	if (MR_PTAG_TESTR(MR_tempr1,0)) {
		MR_GOTO_LAB(main_2_0_i21);
	}
	MR_tempr2 = MR_tfield(0, MR_body((MR_Integer) MR_tempr1, (MR_Integer) 0), 0);
	if (MR_INT_NE(MR_tempr2,0)) {
		MR_GOTO_LAB(main_2_0_i26);
	}
	}
MR_def_label(main_2_0,63)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_r3 = (MR_Integer) 0;
	MR_r1 = MR_sv(5);
	MR_GOTO_LAB(main_2_0_i29);
MR_def_label(main_2_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = (MR_Word) MR_string_const("Warning: the original trace count files did not include all labels.\n", 68);
	MR_np_call_localret_ent(io__write_string_4_0,
		main_2_0_i63);
MR_def_label(main_2_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = (MR_Word) MR_string_const("Warning: reporting on a mixture of trace file types and/or programs.\n", 69);
	MR_np_call_localret_ent(io__write_string_4_0,
		main_2_0_i63);
MR_def_label(main_2_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r2;
	MR_sv(5) = MR_r1;
	MR_np_call_localret_ent(getopt__lookup_bool_option_3_0,
		main_2_0_i30);
MR_def_label(main_2_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(2);
	MR_r3 = (MR_Integer) 1;
	MR_np_call_localret_ent(getopt__lookup_accumulating_option_3_0,
		main_2_0_i31);
MR_def_label(main_2_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(main_2_0_i33);
	}
	MR_r2 = MR_sv(2);
	MR_sv(2) = (MR_Word) MR_tbmkword(0, 0);
	MR_r3 = (MR_Integer) 2;
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(getopt__lookup_string_option_3_0,
		main_2_0_i38);
MR_def_label(main_2_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = (MR_Word) MR_CTOR0_ADDR(mdbcomp__prim_data, sym_name);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = MR_sv(6);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,2,6);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__list__map_2_0,
		main_2_0_i35);
MR_def_label(main_2_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__set__list_to_set_1_0,
		main_2_0_i36);
MR_def_label(main_2_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_r2 = MR_sv(2);
	MR_sv(2) = MR_tempr1;
	MR_r3 = (MR_Integer) 2;
	MR_r1 = MR_sv(5);
	}
	MR_np_call_localret_ent(getopt__lookup_string_option_3_0,
		main_2_0_i38);
MR_def_label(main_2_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("", 0)) != 0)) {
		MR_GOTO_LAB(main_2_0_i39);
	}
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(mcov__write_coverage_test_5_0);
MR_def_label(main_2_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_np_call_localret_ent(io__tell_4_0,
		main_2_0_i42);
MR_def_label(main_2_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(main_2_0_i44);
	}
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(mcov__write_coverage_test_5_0);
MR_def_label(main_2_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(io, error);
	MR_r2 = MR_tfield(1, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(fn__string__string_1_0,
		main_2_0_i46);
MR_def_label(main_2_0,46)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const(": ", 2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		main_2_0_i47);
MR_def_label(main_2_0,47)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("\'", 1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		main_2_0_i48);
MR_def_label(main_2_0,48)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		main_2_0_i49);
MR_def_label(main_2_0,49)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("file \140", 6);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		main_2_0_i50);
MR_def_label(main_2_0,50)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("Error opening ", 14);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		main_2_0_i51);
MR_def_label(main_2_0,51)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(io__write_string_4_0,
		main_2_0_i55);
MR_def_label(main_2_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r2 = MR_tfield(1, MR_sv(4), 0);
	MR_np_call_localret_ent(io__write_string_4_0,
		main_2_0_i55);
MR_def_label(main_2_0,55)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(io__nl_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(require__require_2_0);

MR_BEGIN_MODULE(mcov_module5)
	MR_init_entry1(mcov__proc_process_path_port_count_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mcov__proc_process_path_port_count_6_0);
	MR_init_label2(mcov__proc_process_path_port_count_6_0,6,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'proc_process_path_port_count'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mcov__proc_process_path_port_count_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(2) = ((MR_Integer) MR_r4 + (MR_Integer) MR_tfield(0, MR_r2, 1));
	if (MR_PTAG_TESTR(MR_r1,0)) {
		MR_GOTO_LAB(mcov__proc_process_path_port_count_6_0_i2);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(0, MR_r1, 0);
	if (MR_INT_NE(MR_tempr1,0)) {
		MR_GOTO_LAB(mcov__proc_process_path_port_count_6_0_i2);
	}
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 5);
	MR_tfield(0, MR_r1, 0) = (MR_Word) MR_COMMON(4,5);
	MR_tfield(0, MR_r1, 1) = (MR_Word) MR_ENTRY_AP(mcov__IntroducedFrom__pred__proc_process_path_port_count__222__1_2_0);
	MR_tfield(0, MR_r1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_r1, 3) = MR_r3;
	MR_tfield(0, MR_r1, 4) = (MR_Word) MR_tbmkword(0, 0);
	MR_sv(1) = MR_tfield(0, MR_r2, 0);
	MR_r2 = (MR_Word) MR_string_const("proc_process_path_port_count: duplicate call port:", 50);
	}
	MR_np_call_localret_ent(require__require_2_0,
		mcov__proc_process_path_port_count_6_0_i6);
MR_def_label(mcov__proc_process_path_port_count_6_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r1, 0) = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_decr_sp_and_return(3);
MR_def_label(mcov__proc_process_path_port_count_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r3;
	MR_r2 = MR_sv(2);
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___mdbcomp__prim_data__sym_name_0_0);
MR_decl_entry(map__lookup_3_0);

MR_BEGIN_MODULE(mcov_module6)
	MR_init_entry1(mcov__is_zero_count_local_proc_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mcov__is_zero_count_local_proc_3_0);
	MR_init_label5(mcov__is_zero_count_local_proc_3_0,5,4,7,9,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'is_zero_count_local_proc'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mcov__is_zero_count_local_proc_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_r3 = MR_tfield(0, MR_r2, 1);
	if (MR_INT_NE(MR_r3,0)) {
		MR_GOTO_LAB(mcov__is_zero_count_local_proc_3_0_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(0, MR_r2, 0);
	MR_r3 = MR_tempr1;
	if (MR_PTAG_TESTR(MR_tempr1,0)) {
		MR_GOTO_LAB(mcov__is_zero_count_local_proc_3_0_i4);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_tfield(0, MR_tempr1, 0);
	MR_r2 = MR_tfield(0, MR_tempr1, 2);
	}
	MR_np_call_localret_ent(__Unify___mdbcomp__prim_data__sym_name_0_0,
		mcov__is_zero_count_local_proc_3_0_i5);
MR_def_label(mcov__is_zero_count_local_proc_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(mcov__is_zero_count_local_proc_3_0_i1);
	}
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__prim_data, proc_label);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(mcov, proc_info);
	MR_np_call_localret_ent(map__lookup_3_0,
		mcov__is_zero_count_local_proc_3_0_i9);
MR_def_label(mcov__is_zero_count_local_proc_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_tfield(1, MR_tempr1, 0);
	MR_r2 = MR_tfield(1, MR_tempr1, 2);
	}
	MR_np_call_localret_ent(__Unify___mdbcomp__prim_data__sym_name_0_0,
		mcov__is_zero_count_local_proc_3_0_i7);
MR_def_label(mcov__is_zero_count_local_proc_3_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(mcov__is_zero_count_local_proc_3_0_i1);
	}
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__prim_data, proc_label);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(mcov, proc_info);
	MR_np_call_localret_ent(map__lookup_3_0,
		mcov__is_zero_count_local_proc_3_0_i9);
MR_def_label(mcov__is_zero_count_local_proc_3_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(mcov__is_zero_count_local_proc_3_0,1)
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


MR_BEGIN_MODULE(mcov_module7)
	MR_init_entry1(mcov__label_process_path_port_count_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mcov__label_process_path_port_count_6_0);
	MR_init_label6(mcov__label_process_path_port_count_6_0,7,6,9,5,2,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'label_process_path_port_count'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mcov__label_process_path_port_count_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r4;
	MR_tempr1 = MR_tfield(0, MR_tempr2, 1);
	if (MR_INT_NE(MR_tempr1,0)) {
		MR_GOTO_LAB(mcov__label_process_path_port_count_6_0_i3);
	}
	if (MR_PTAG_TESTR(MR_r1,0)) {
		MR_GOTO_LAB(mcov__label_process_path_port_count_6_0_i6);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_tfield(0, MR_tempr2, 0);
	MR_sv(5) = MR_r5;
	MR_r1 = MR_tfield(0, MR_r1, 0);
	MR_r2 = MR_tfield(0, MR_sv(1), 2);
	}
	MR_np_call_localret_ent(__Unify___mdbcomp__prim_data__sym_name_0_0,
		mcov__label_process_path_port_count_6_0_i7);
MR_def_label(mcov__label_process_path_port_count_6_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(mcov__label_process_path_port_count_6_0_i2);
	}
	MR_GOTO_LAB(mcov__label_process_path_port_count_6_0_i5);
MR_def_label(mcov__label_process_path_port_count_6_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_tfield(0, MR_r4, 0);
	MR_sv(5) = MR_r5;
	MR_r1 = MR_tfield(1, MR_r1, 0);
	MR_r2 = MR_tfield(1, MR_sv(1), 2);
	MR_np_call_localret_ent(__Unify___mdbcomp__prim_data__sym_name_0_0,
		mcov__label_process_path_port_count_6_0_i9);
MR_def_label(mcov__label_process_path_port_count_6_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(mcov__label_process_path_port_count_6_0_i2);
	}
MR_def_label(mcov__label_process_path_port_count_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 4);
	MR_tfield(0, MR_r2, 0) = MR_sv(2);
	MR_tfield(0, MR_r2, 1) = MR_sv(4);
	MR_tfield(0, MR_r2, 2) = MR_sv(1);
	MR_tfield(0, MR_r2, 3) = MR_sv(3);
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = MR_r2;
	MR_tfield(1, MR_r1, 1) = MR_sv(5);
	MR_decr_sp_and_return(6);
MR_def_label(mcov__label_process_path_port_count_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r5 = MR_sv(5);
MR_def_label(mcov__label_process_path_port_count_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r5;
	MR_decr_sp_and_return(6);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(io__write_char_3_0);
MR_decl_entry(io__write_int_3_0);
MR_decl_entry(term_io__quote_atom_3_0);
MR_decl_entry(require__error_1_0);

MR_BEGIN_MODULE(mcov_module8)
	MR_init_entry1(mcov__write_proc_info_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mcov__write_proc_info_3_0);
	MR_init_label10(mcov__write_proc_info_3_0,2,3,4,5,9,11,12,13,14,15)
	MR_init_label2(mcov__write_proc_info_3_0,7,6)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'write_proc_info'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mcov__write_proc_info_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_tfield(0, MR_r1, 1);
	MR_sv(2) = MR_tfield(0, MR_r1, 2);
	MR_r1 = MR_tfield(0, MR_r1, 0);
	MR_np_call_localret_ent(io__write_string_3_0,
		mcov__write_proc_info_3_0_i2);
MR_def_label(mcov__write_proc_info_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 58;
	MR_np_call_localret_ent(io__write_char_3_0,
		mcov__write_proc_info_3_0_i3);
MR_def_label(mcov__write_proc_info_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(io__write_int_3_0,
		mcov__write_proc_info_3_0_i4);
MR_def_label(mcov__write_proc_info_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(": ", 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		mcov__write_proc_info_3_0_i5);
MR_def_label(mcov__write_proc_info_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),0)) {
		MR_GOTO_LAB(mcov__write_proc_info_3_0_i7);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_sv(2);
	MR_tempr1 = MR_tfield(0, MR_tempr2, 1);
	if (MR_INT_NE(MR_tempr1,1)) {
		MR_GOTO_LAB(mcov__write_proc_info_3_0_i9);
	}
	MR_sv(1) = MR_tfield(0, MR_tempr2, 3);
	MR_tempr1 = MR_tempr2;
	MR_sv(2) = MR_tfield(0, MR_tempr1, 4);
	MR_sv(3) = MR_tfield(0, MR_tempr1, 5);
	MR_r1 = (MR_Word) MR_string_const("func ", 5);
	}
	MR_np_call_localret_ent(io__write_string_3_0,
		mcov__write_proc_info_3_0_i11);
MR_def_label(mcov__write_proc_info_3_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_sv(2);
	MR_sv(1) = MR_tfield(0, MR_tempr2, 3);
	MR_tempr1 = MR_tempr2;
	MR_sv(2) = MR_tfield(0, MR_tempr1, 4);
	MR_sv(3) = MR_tfield(0, MR_tempr1, 5);
	MR_r1 = (MR_Word) MR_string_const("pred ", 5);
	}
	MR_np_call_localret_ent(io__write_string_3_0,
		mcov__write_proc_info_3_0_i11);
MR_def_label(mcov__write_proc_info_3_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(term_io__quote_atom_3_0,
		mcov__write_proc_info_3_0_i12);
MR_def_label(mcov__write_proc_info_3_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("/", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		mcov__write_proc_info_3_0_i13);
MR_def_label(mcov__write_proc_info_3_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(io__write_int_3_0,
		mcov__write_proc_info_3_0_i14);
MR_def_label(mcov__write_proc_info_3_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("-", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		mcov__write_proc_info_3_0_i15);
MR_def_label(mcov__write_proc_info_3_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(io__write_int_3_0,
		mcov__write_proc_info_3_0_i6);
MR_def_label(mcov__write_proc_info_3_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("write_proc_label_for_user: special_pred", 39);
	MR_np_call_localret_ent(require__error_1_0,
		mcov__write_proc_info_3_0_i6);
MR_def_label(mcov__write_proc_info_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(io__nl_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__mdbcomp__goal_path__rev_goal_path_to_string_1_0);
MR_decl_entry(mdbcomp__trace_counts__string_to_trace_port_2_1);

MR_BEGIN_MODULE(mcov_module9)
	MR_init_entry1(mcov__write_label_info_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mcov__write_label_info_3_0);
	MR_init_label10(mcov__write_label_info_3_0,2,3,4,5,9,11,12,13,14,15)
	MR_init_label9(mcov__write_label_info_3_0,7,6,20,19,26,27,25,33,18)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'write_label_info'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mcov__write_label_info_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_tfield(0, MR_r1, 1);
	MR_sv(2) = MR_tfield(0, MR_r1, 2);
	MR_sv(3) = MR_tfield(0, MR_r1, 3);
	MR_r1 = MR_tfield(0, MR_r1, 0);
	MR_np_call_localret_ent(io__write_string_3_0,
		mcov__write_label_info_3_0_i2);
MR_def_label(mcov__write_label_info_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 58;
	MR_np_call_localret_ent(io__write_char_3_0,
		mcov__write_label_info_3_0_i3);
MR_def_label(mcov__write_label_info_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(io__write_int_3_0,
		mcov__write_label_info_3_0_i4);
MR_def_label(mcov__write_label_info_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(": ", 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		mcov__write_label_info_3_0_i5);
MR_def_label(mcov__write_label_info_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),0)) {
		MR_GOTO_LAB(mcov__write_label_info_3_0_i7);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_sv(2);
	MR_tempr1 = MR_tfield(0, MR_tempr2, 1);
	if (MR_INT_NE(MR_tempr1,1)) {
		MR_GOTO_LAB(mcov__write_label_info_3_0_i9);
	}
	MR_sv(1) = MR_tfield(0, MR_tempr2, 3);
	MR_tempr1 = MR_tempr2;
	MR_sv(2) = MR_tfield(0, MR_tempr1, 4);
	MR_sv(4) = MR_tfield(0, MR_tempr1, 5);
	MR_r1 = (MR_Word) MR_string_const("func ", 5);
	}
	MR_np_call_localret_ent(io__write_string_3_0,
		mcov__write_label_info_3_0_i11);
MR_def_label(mcov__write_label_info_3_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_sv(2);
	MR_sv(1) = MR_tfield(0, MR_tempr2, 3);
	MR_tempr1 = MR_tempr2;
	MR_sv(2) = MR_tfield(0, MR_tempr1, 4);
	MR_sv(4) = MR_tfield(0, MR_tempr1, 5);
	MR_r1 = (MR_Word) MR_string_const("pred ", 5);
	}
	MR_np_call_localret_ent(io__write_string_3_0,
		mcov__write_label_info_3_0_i11);
MR_def_label(mcov__write_label_info_3_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(term_io__quote_atom_3_0,
		mcov__write_label_info_3_0_i12);
MR_def_label(mcov__write_label_info_3_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("/", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		mcov__write_label_info_3_0_i13);
MR_def_label(mcov__write_label_info_3_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(io__write_int_3_0,
		mcov__write_label_info_3_0_i14);
MR_def_label(mcov__write_label_info_3_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("-", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		mcov__write_label_info_3_0_i15);
MR_def_label(mcov__write_label_info_3_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(io__write_int_3_0,
		mcov__write_label_info_3_0_i6);
MR_def_label(mcov__write_label_info_3_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("write_proc_label_for_user: special_pred", 39);
	MR_np_call_localret_ent(require__error_1_0,
		mcov__write_label_info_3_0_i6);
MR_def_label(mcov__write_label_info_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(3),1)) {
		MR_GOTO_LAB(mcov__write_label_info_3_0_i19);
	}
	MR_r1 = MR_tfield(1, MR_sv(3), 0);
	MR_np_call_localret_ent(fn__mdbcomp__goal_path__rev_goal_path_to_string_1_0,
		mcov__write_label_info_3_0_i20);
MR_def_label(mcov__write_label_info_3_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_TAG_COMMON(1,6,11);
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = (MR_Word) MR_string_const("<", 1);
	MR_tfield(1, MR_r1, 1) = MR_tempr1;
	}
	MR_np_call_localret_ent(io__write_strings_3_0,
		mcov__write_label_info_3_0_i18);
MR_def_label(mcov__write_label_info_3_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(3),2)) {
		MR_GOTO_LAB(mcov__write_label_info_3_0_i25);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(1) = MR_tfield(2, MR_tempr1, 1);
	MR_r1 = MR_tfield(2, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(mdbcomp__trace_counts__string_to_trace_port_2_1,
		mcov__write_label_info_3_0_i26);
MR_def_label(mcov__write_label_info_3_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__mdbcomp__goal_path__rev_goal_path_to_string_1_0,
		mcov__write_label_info_3_0_i27);
MR_def_label(mcov__write_label_info_3_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_TAG_COMMON(1,6,11);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = (MR_Word) MR_string_const(" <", 2);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = MR_sv(1);
	MR_tfield(1, MR_r1, 1) = MR_tempr2;
	}
	MR_np_call_localret_ent(io__write_strings_3_0,
		mcov__write_label_info_3_0_i18);
MR_def_label(mcov__write_label_info_3_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(0, MR_sv(3), 0);
	MR_np_call_localret_ent(mdbcomp__trace_counts__string_to_trace_port_2_1,
		mcov__write_label_info_3_0_i33);
MR_def_label(mcov__write_label_info_3_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__write_string_3_0,
		mcov__write_label_info_3_0_i18);
MR_def_label(mcov__write_label_info_3_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(io__nl_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mcov_module10)
	MR_init_entry1(mcov__short_option_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mcov__short_option_2_0);
	MR_init_label4(mcov__short_option_2_0,3,4,5,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'short_option'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mcov__short_option_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,100)) {
		MR_GOTO_LAB(mcov__short_option_2_0_i3);
	}
	MR_r2 = (MR_Integer) 0;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(mcov__short_option_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,109)) {
		MR_GOTO_LAB(mcov__short_option_2_0_i4);
	}
	MR_r2 = (MR_Integer) 1;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(mcov__short_option_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,111)) {
		MR_GOTO_LAB(mcov__short_option_2_0_i5);
	}
	MR_r2 = (MR_Integer) 2;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(mcov__short_option_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,118)) {
		MR_GOTO_LAB(mcov__short_option_2_0_i1);
	}
	MR_r2 = (MR_Integer) 3;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(mcov__short_option_2_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mcov_module11)
	MR_init_entry1(mcov__long_option_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mcov__long_option_2_0);
	MR_init_label4(mcov__long_option_2_0,3,4,5,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'long_option'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mcov__long_option_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("module", 6)) != 0)) {
		MR_GOTO_LAB(mcov__long_option_2_0_i3);
	}
	MR_r2 = (MR_Integer) 1;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(mcov__long_option_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("verbose", 7)) != 0)) {
		MR_GOTO_LAB(mcov__long_option_2_0_i4);
	}
	MR_r2 = (MR_Integer) 3;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(mcov__long_option_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("detailed", 8)) != 0)) {
		MR_GOTO_LAB(mcov__long_option_2_0_i5);
	}
	MR_r2 = (MR_Integer) 0;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(mcov__long_option_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("output-file", 11)) != 0)) {
		MR_GOTO_LAB(mcov__long_option_2_0_i1);
	}
	MR_r2 = (MR_Integer) 2;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(mcov__long_option_2_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_declare_entry(MR_do_fail);

MR_BEGIN_MODULE(mcov_module12)
	MR_init_entry1(mcov__option_default_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mcov__option_default_2_0);
	MR_init_label3(mcov__option_default_2_0,6,7,8)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'option_default'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mcov__option_default_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_mkframe("pred mcov.option_default/2-0", 1,
		MR_LABEL_AP(mcov__option_default_2_0_i6));
	{
	MR_Word MR_tempr1;
	MR_tempr1 = (MR_Word) &MR_tfield(0, (MR_Word *) &mercury_vector_common_8_0, 0);
	MR_fv(1) = (MR_Integer) 2;
	MR_r1 = MR_tfield(0, MR_tempr1, 0);
	MR_r2 = MR_tfield(0, MR_tempr1, 1);
	MR_succeed();
	}
MR_def_label(mcov__option_default_2_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_fv(1);
	if (MR_INT_GE(MR_r3,6)) {
		MR_GOTO_LAB(mcov__option_default_2_0_i7);
	}
	MR_fv(1) = ((MR_Integer) MR_fv(1) + (MR_Integer) 2);
	MR_GOTO_LAB(mcov__option_default_2_0_i8);
MR_def_label(mcov__option_default_2_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_redoip_slot_word(MR_curfr) = (MR_Word) MR_ENTRY(MR_do_fail);
MR_def_label(mcov__option_default_2_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = (MR_Word) &MR_tfield(0, (MR_Word *) &mercury_vector_common_8_0, (MR_Integer) MR_r3);
	MR_r1 = MR_tfield(0, MR_tempr1, 0);
	MR_r2 = MR_tfield(0, MR_tempr1, 1);
	MR_succeed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___mdbcomp__prim_data__proc_label_0_0);
MR_decl_entry(__Unify___mdbcomp__trace_counts__path_port_0_0);

MR_BEGIN_MODULE(mcov_module13)
	MR_init_entry1(__Unify___mcov__label_info_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___mcov__label_info_0_0);
	MR_init_label3(__Unify___mcov__label_info_0_0,4,8,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___mcov__label_info_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___mcov__label_info_0_0_i8);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_tempr1;
	MR_tempr2 = MR_r2;
	MR_sv(2) = MR_tempr2;
	MR_tempr3 = MR_tfield(0, MR_tempr1, 0);
	MR_tempr4 = MR_tfield(0, MR_tempr2, 0);
	if ((strcmp((char *) (MR_Word *) MR_tempr3, (char *) (MR_Word *) MR_tempr4) != 0)) {
		MR_GOTO_LAB(__Unify___mcov__label_info_0_0_i1);
	}
	MR_tempr3 = MR_tfield(0, MR_tempr1, 1);
	MR_tempr4 = MR_tfield(0, MR_tempr2, 1);
	if ((MR_tempr3 != MR_tempr4)) {
		MR_GOTO_LAB(__Unify___mcov__label_info_0_0_i1);
	}
	MR_tempr3 = MR_tempr1;
	MR_sv(1) = MR_tfield(0, MR_tempr3, 3);
	MR_tempr4 = MR_tempr2;
	MR_sv(2) = MR_tfield(0, MR_tempr4, 3);
	MR_r1 = MR_tfield(0, MR_tempr3, 2);
	MR_r2 = MR_tfield(0, MR_tempr4, 2);
	}
	MR_np_call_localret_ent(__Unify___mdbcomp__prim_data__proc_label_0_0,
		__Unify___mcov__label_info_0_0_i4);
MR_def_label(__Unify___mcov__label_info_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___mcov__label_info_0_0_i1);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Unify___mdbcomp__trace_counts__path_port_0_0);
MR_def_label(__Unify___mcov__label_info_0_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___mcov__label_info_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(private_builtin__builtin_compare_string_3_0);
MR_decl_entry(private_builtin__builtin_compare_int_3_0);
MR_decl_entry(__Compare___mdbcomp__prim_data__proc_label_0_0);
MR_decl_entry(__Compare___mdbcomp__trace_counts__path_port_0_0);

MR_BEGIN_MODULE(mcov_module14)
	MR_init_entry1(__Compare___mcov__label_info_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___mcov__label_info_0_0);
	MR_init_label6(__Compare___mcov__label_info_0_0,3,2,5,9,13,37)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___mcov__label_info_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___mcov__label_info_0_0_i3);
	}
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___mcov__label_info_0_0_i2);
MR_def_label(__Compare___mcov__label_info_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___mcov__label_info_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(2);
	MR_sv(6) = MR_tfield(0, MR_tempr5, 3);
	MR_sv(5) = MR_tfield(0, MR_tempr5, 2);
	MR_sv(4) = MR_tfield(0, MR_tempr5, 1);
	MR_tempr6 = MR_sv(1);
	MR_sv(3) = MR_tfield(0, MR_tempr6, 3);
	MR_tempr1 = MR_tfield(0, MR_tempr6, 2);
	MR_tempr2 = MR_tfield(0, MR_tempr6, 1);
	MR_tempr3 = MR_tempr6;
	MR_sv(1) = MR_tempr2;
	MR_tempr4 = MR_tempr5;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_tfield(0, MR_tempr3, 0);
	MR_r2 = MR_tfield(0, MR_tempr4, 0);
	}
	MR_np_call_localret_ent(private_builtin__builtin_compare_string_3_0,
		__Compare___mcov__label_info_0_0_i5);
MR_def_label(__Compare___mcov__label_info_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___mcov__label_info_0_0_i37);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___mcov__label_info_0_0_i9);
MR_def_label(__Compare___mcov__label_info_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___mcov__label_info_0_0_i37);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(__Compare___mdbcomp__prim_data__proc_label_0_0,
		__Compare___mcov__label_info_0_0_i13);
MR_def_label(__Compare___mcov__label_info_0_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___mcov__label_info_0_0_i37);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(6);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(__Compare___mdbcomp__trace_counts__path_port_0_0);
MR_def_label(__Compare___mcov__label_info_0_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(7);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mcov_module15)
	MR_init_entry1(__Unify___mcov__option_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___mcov__option_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___mcov__option_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_r1 == MR_r2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mcov_module16)
	MR_init_entry1(__Compare___mcov__option_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___mcov__option_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___mcov__option_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___tree234__tree234_2_0);

MR_BEGIN_MODULE(mcov_module17)
	MR_init_entry1(__Unify___mcov__option_table_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___mcov__option_table_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___mcov__option_table_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mcov, option);
	MR_tempr2 = MR_r2;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(getopt, option_data);
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

MR_BEGIN_MODULE(mcov_module18)
	MR_init_entry1(__Compare___mcov__option_table_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___mcov__option_table_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___mcov__option_table_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mcov, option);
	MR_tempr2 = MR_r2;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(getopt, option_data);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tempr2;
	MR_np_tailcall_ent(__Compare___tree234__tree234_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mcov_module19)
	MR_init_entry1(__Unify___mcov__proc_info_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___mcov__proc_info_0_0);
	MR_init_label2(__Unify___mcov__proc_info_0_0,6,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___mcov__proc_info_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___mcov__proc_info_0_0_i6);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_tempr1;
	MR_tempr2 = MR_r2;
	MR_sv(2) = MR_tempr2;
	MR_tempr3 = MR_tfield(0, MR_tempr1, 0);
	MR_tempr4 = MR_tfield(0, MR_tempr2, 0);
	if ((strcmp((char *) (MR_Word *) MR_tempr3, (char *) (MR_Word *) MR_tempr4) != 0)) {
		MR_GOTO_LAB(__Unify___mcov__proc_info_0_0_i1);
	}
	MR_tempr3 = MR_tfield(0, MR_tempr1, 1);
	MR_tempr4 = MR_tfield(0, MR_tempr2, 1);
	if ((MR_tempr3 != MR_tempr4)) {
		MR_GOTO_LAB(__Unify___mcov__proc_info_0_0_i1);
	}
	MR_r1 = MR_tfield(0, MR_tempr1, 2);
	MR_r2 = MR_tfield(0, MR_tempr2, 2);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Unify___mdbcomp__prim_data__proc_label_0_0);
	}
MR_def_label(__Unify___mcov__proc_info_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___mcov__proc_info_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mcov_module20)
	MR_init_entry1(__Compare___mcov__proc_info_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___mcov__proc_info_0_0);
	MR_init_label5(__Compare___mcov__proc_info_0_0,3,2,5,9,29)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___mcov__proc_info_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___mcov__proc_info_0_0_i3);
	}
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___mcov__proc_info_0_0_i2);
MR_def_label(__Compare___mcov__proc_info_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___mcov__proc_info_0_0,2)
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
	MR_r1 = MR_tfield(0, MR_tempr3, 0);
	MR_r2 = MR_tfield(0, MR_tempr4, 0);
	}
	MR_np_call_localret_ent(private_builtin__builtin_compare_string_3_0,
		__Compare___mcov__proc_info_0_0_i5);
MR_def_label(__Compare___mcov__proc_info_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___mcov__proc_info_0_0_i29);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___mcov__proc_info_0_0_i9);
MR_def_label(__Compare___mcov__proc_info_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___mcov__proc_info_0_0_i29);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(4);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(__Compare___mdbcomp__prim_data__proc_label_0_0);
MR_def_label(__Compare___mcov__proc_info_0_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___list__list_1_0);

MR_BEGIN_MODULE(mcov_module21)
	MR_init_entry1(__Unify___mcov__trace_counts_list_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___mcov__trace_counts_list_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___mcov__trace_counts_list_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,3,3);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	MR_np_tailcall_ent(__Unify___list__list_1_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Compare___list__list_1_0);

MR_BEGIN_MODULE(mcov_module22)
	MR_init_entry1(__Compare___mcov__trace_counts_list_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___mcov__trace_counts_list_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___mcov__trace_counts_list_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,3,3);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	MR_np_tailcall_ent(__Compare___list__list_1_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(set__member_2_0);

MR_BEGIN_MODULE(mcov_module23)
	MR_init_entry1(mcov__IntroducedFrom__pred__write_coverage_test__155__1_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mcov__IntroducedFrom__pred__write_coverage_test__155__1_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__pred__write_coverage_test__155__1'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mcov__IntroducedFrom__pred__write_coverage_test__155__1_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__prim_data, sym_name);
	MR_r2 = MR_tfield(0, MR_tfield(0, MR_r2, 0), 0);
	MR_r3 = MR_tempr1;
	MR_np_tailcall_ent(set__member_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___maybe__maybe_1_0);

MR_BEGIN_MODULE(mcov_module24)
	MR_init_entry1(mcov__IntroducedFrom__pred__proc_process_path_port_count__222__1_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mcov__IntroducedFrom__pred__proc_process_path_port_count__222__1_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__pred__proc_process_path_port_count__222__1'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mcov__IntroducedFrom__pred__proc_process_path_port_count__222__1_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	MR_np_tailcall_ent(__Unify___maybe__maybe_1_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

static void mercury__mcov_maybe_bunch_0(void)
{
	mcov_module0();
	mcov_module1();
	mcov_module2();
	mcov_module3();
	mcov_module4();
	mcov_module5();
	mcov_module6();
	mcov_module7();
	mcov_module8();
	mcov_module9();
	mcov_module10();
	mcov_module11();
	mcov_module12();
	mcov_module13();
	mcov_module14();
	mcov_module15();
	mcov_module16();
	mcov_module17();
	mcov_module18();
	mcov_module19();
	mcov_module20();
	mcov_module21();
	mcov_module22();
	mcov_module23();
	mcov_module24();
}

/* suppress gcc -Wmissing-decls warnings */
void mercury__mcov__init(void);
void mercury__mcov__init_type_tables(void);
void mercury__mcov__init_debugger(void);
#ifdef MR_DEEP_PROFILING
void mercury__mcov__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp);
#endif
#ifdef MR_RECORD_TERM_SIZES
void mercury__mcov__init_complexity_procs(void);
#endif
#ifdef MR_THREADSCOPE
void mercury__mcov__init_threadscope_string_table(void);
#endif

void mercury__mcov__init(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	mercury__mcov_maybe_bunch_0();
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_mcov__type_ctor_info_label_info_0,
		mcov__label_info_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_mcov__type_ctor_info_option_0,
		mcov__option_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_mcov__type_ctor_info_option_table_0,
		mcov__option_table_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_mcov__type_ctor_info_proc_info_0,
		mcov__proc_info_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_mcov__type_ctor_info_trace_counts_list_0,
		mcov__trace_counts_list_0_0);
	mercury__mcov__init_debugger();
}

void mercury__mcov__init_type_tables(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	{
		MR_register_type_ctor_info(
		&mercury_data_mcov__type_ctor_info_label_info_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_mcov__type_ctor_info_option_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_mcov__type_ctor_info_option_table_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_mcov__type_ctor_info_proc_info_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_mcov__type_ctor_info_trace_counts_list_0);
	}
}


void mercury__mcov__init_debugger(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}

#ifdef MR_DEEP_PROFILING

void mercury__mcov__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp)
{
	MR_write_out_module_proc_reps_start(procrep_fp, &mercury_data__module_common_layout__mcov);
	MR_write_out_module_proc_reps_end(procrep_fp);
}

#endif

#ifdef MR_RECORD_TERM_SIZES

void mercury__mcov__init_complexity_procs(void)
{
}

#endif

#ifdef MR_THREADSCOPE

void mercury__mcov__init_threadscope_string_table(void)
{
}

#endif

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;
