/*
** Automatically generated from `trace_counts.m'
** by the Mercury compiler,
** version rotd-2010-06-17, configured for x86_64-unknown-linux-gnu.
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
INIT mercury__mdbcomp__trace_counts__init
ENDINIT
*/

#define MR_ALLOW_RESET
#include "mercury_imp.h"
#line 3 "mdbcomp.int0"
#include "mdbcomp.mh"

#line 28 "mdbcomp.trace_counts.c"
#line 534 "../library/io.int"
#include "io.mh"

#line 32 "mdbcomp.trace_counts.c"
#line 542 "../library/io.int"
#include "string.mh"

#line 36 "mdbcomp.trace_counts.c"
#line 231 "mdbcomp.program_representation.int"
#include "mdbcomp.program_representation.mh"

#line 40 "mdbcomp.trace_counts.c"
#line 29 "../library/bitmap.int2"
#include "bitmap.mh"

#line 44 "mdbcomp.trace_counts.c"
#line 28 "../library/time.int2"
#include "time.mh"

#line 48 "mdbcomp.trace_counts.c"
#line 33 "mdbcomp.rtti_access.int2"
#include "mdbcomp.rtti_access.mh"

#line 52 "mdbcomp.trace_counts.c"
#line 21 "../library/stm_builtin.int2"
#include "stm_builtin.mh"

#line 56 "mdbcomp.trace_counts.c"
#line 31 "../library/array.int2"
#include "array.mh"

#line 60 "mdbcomp.trace_counts.c"
#line 61 "mdbcomp.trace_counts.c"
#include "mdbcomp.trace_counts.mh"

#line 64 "mdbcomp.trace_counts.c"
#line 65 "mdbcomp.trace_counts.c"
#ifndef MDBCOMP__TRACE_COUNTS_DECL_GUARD
#define MDBCOMP__TRACE_COUNTS_DECL_GUARD

#line 69 "mdbcomp.trace_counts.c"
#line 70 "mdbcomp.trace_counts.c"

#endif
#line 73 "mdbcomp.trace_counts.c"

#ifdef _MSC_VER
#define MR_STATIC_LINKAGE extern
#else
#define MR_STATIC_LINKAGE static
#endif

struct mercury_type_0 {
	MR_Integer f1;
};
MR_STATIC_LINKAGE const struct mercury_type_0 mercury_common_0[];

struct mercury_type_1 {
	MR_Word * f1[3];
};
MR_STATIC_LINKAGE const struct mercury_type_1 mercury_common_1[];

struct mercury_type_2 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[3];
};
MR_STATIC_LINKAGE const struct mercury_type_2 mercury_common_2[];

struct mercury_type_3 {
	MR_Word * f1;
	MR_Code * f2;
	MR_Integer f3;
};
MR_STATIC_LINKAGE const struct mercury_type_3 mercury_common_3[];

struct mercury_type_4 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[5];
};
MR_STATIC_LINKAGE const struct mercury_type_4 mercury_common_4[];

struct mercury_type_5 {
	MR_String f1;
};
MR_STATIC_LINKAGE const struct mercury_type_5 mercury_common_5[];

struct mercury_type_6 {
	MR_Integer f1;
	MR_Word * f2;
};
MR_STATIC_LINKAGE const struct mercury_type_6 mercury_common_6[];

struct mercury_type_7 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[8];
};
MR_STATIC_LINKAGE const struct mercury_type_7 mercury_common_7[];

struct mercury_type_9 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[4];
};
MR_STATIC_LINKAGE const struct mercury_type_9 mercury_common_9[];

struct mercury_type_10 {
	MR_Word * f1;
	MR_Word * f2;
	MR_Integer f3;
	MR_Word * f4;
	MR_Word * f5;
};
MR_STATIC_LINKAGE const struct mercury_type_10 mercury_common_10[];

struct mercury_type_11 {
	MR_String f1;
	MR_Word * f2;
};
MR_STATIC_LINKAGE const struct mercury_type_11 mercury_common_11[];

MR_STATIC_LINKAGE const struct mercury_type_5 mercury_vector_common_5_0[];

struct mercury_type_8 {
	MR_String f1;
	MR_Integer f2;
};
MR_STATIC_LINKAGE const struct mercury_type_8 mercury_vector_common_8_0[];

extern const MR_TypeCtorInfo_Struct
	mercury_data_mdbcomp__trace_counts__type_ctor_info_all_or_nonzero_0,
	mercury_data_mdbcomp__trace_counts__type_ctor_info_base_count_file_type_0,
	mercury_data_mdbcomp__trace_counts__type_ctor_info_line_no_and_count_0,
	mercury_data_mdbcomp__trace_counts__type_ctor_info_path_port_0,
	mercury_data_mdbcomp__trace_counts__type_ctor_info_proc_label_in_context_0,
	mercury_data_mdbcomp__trace_counts__type_ctor_info_proc_trace_counts_0,
	mercury_data_mdbcomp__trace_counts__type_ctor_info_read_trace_counts_list_result_0,
	mercury_data_mdbcomp__trace_counts__type_ctor_info_read_trace_counts_result_0,
	mercury_data_mdbcomp__trace_counts__type_ctor_info_trace_count_file_type_0,
	mercury_data_mdbcomp__trace_counts__type_ctor_info_trace_count_syntax_error_0;

extern const MR_TypeCtorInfo_Struct
	mercury_data_mdbcomp__trace_counts__type_ctor_info_trace_counts_0;
MR_decl_label2(mdbcomp__trace_counts__diff_proc_counts_acc_5_0, 3,2)
MR_decl_label1(mdbcomp__trace_counts__diff_trace_counts_3_0, 4)
MR_decl_label4(mdbcomp__trace_counts__diff_trace_counts_acc_5_0, 4,7,8,2)
MR_decl_label10(mdbcomp__trace_counts__parse_path_port_line_5_0, 2,9,7,12,14,16,17,18,22,25)
MR_decl_label10(mdbcomp__trace_counts__parse_path_port_line_5_0, 28,27,31,33,3,4,38,40,42,44)
MR_decl_label9(mdbcomp__trace_counts__parse_path_port_line_5_0, 45,46,49,52,55,54,58,60,1)
MR_decl_label5(mdbcomp__trace_counts__read_and_union_trace_counts_8_0, 4,5,9,11,12)
MR_decl_label9(mdbcomp__trace_counts__read_and_union_trace_counts_2_9_0, 27,3,5,6,7,8,10,14,15)
MR_decl_label10(mdbcomp__trace_counts__read_proc_trace_counts_8_0, 270,2,4,13,14,19,20,8,29,34)
MR_decl_label10(mdbcomp__trace_counts__read_proc_trace_counts_8_0, 35,32,24,47,51,60,55,67,46,72)
MR_decl_label6(mdbcomp__trace_counts__read_proc_trace_counts_8_0, 70,74,5,84,85,86)
MR_decl_label9(mdbcomp__trace_counts__read_proc_trace_counts_2_6_0, 37,2,9,12,15,10,18,19,7)
MR_decl_label10(mdbcomp__trace_counts__read_trace_counts_4_0, 3,5,6,7,2,9,11,13,14,18)
MR_decl_label7(mdbcomp__trace_counts__read_trace_counts_4_0, 20,16,23,24,10,27,28)
MR_decl_label10(mdbcomp__trace_counts__read_trace_counts_from_cur_stream_3_0, 2,7,12,15,19,18,23,22,27,26)
MR_decl_label5(mdbcomp__trace_counts__read_trace_counts_from_cur_stream_3_0, 30,31,32,17,4)
MR_decl_label7(mdbcomp__trace_counts__read_trace_counts_list_5_0, 2,5,6,7,8,4,12)
MR_decl_label10(mdbcomp__trace_counts__read_trace_counts_list_stream_8_0, 89,2,13,14,15,20,21,18,22,37)
MR_decl_label10(mdbcomp__trace_counts__read_trace_counts_list_stream_8_0, 40,41,50,51,52,24,25,26,27,58)
MR_decl_label10(mdbcomp__trace_counts__read_trace_counts_list_stream_8_0, 44,45,46,47,48,30,31,32,33,34)
MR_decl_label6(mdbcomp__trace_counts__read_trace_counts_list_stream_8_0, 6,7,8,9,10,11)
MR_decl_label4(mdbcomp__trace_counts__read_trace_counts_setup_4_0, 2,3,8,6)
MR_decl_label10(mdbcomp__trace_counts__read_trace_counts_source_4_0, 2,17,26,27,28,4,5,6,7,34)
MR_decl_label10(mdbcomp__trace_counts__read_trace_counts_source_4_0, 20,21,22,23,24,10,11,12,13,14)
MR_decl_label1(mdbcomp__trace_counts__read_trace_counts_source_4_0, 15)
MR_decl_label3(mdbcomp__trace_counts__restrict_trace_counts_2_5_0, 5,2,3)
MR_decl_label1(mdbcomp__trace_counts__restrict_trace_counts_to_module_3_0, 4)
MR_decl_label10(mdbcomp__trace_counts__string_to_trace_port_2_0, 3,25,5,6,7,8,9,10,11,12)
MR_decl_label10(mdbcomp__trace_counts__string_to_trace_port_2_0, 13,14,15,16,17,18,19,20,21,22)
MR_decl_label1(mdbcomp__trace_counts__string_to_trace_port_2_0, 23)
MR_decl_label2(mdbcomp__trace_counts__summarize_trace_counts_list_2_0, 21,6)
MR_decl_label10(mdbcomp__trace_counts__write_path_port_count_4_0, 19,20,21,22,23,35,36,37,38,39)
MR_decl_label5(mdbcomp__trace_counts__write_path_port_count_4_0, 3,4,5,6,7)
MR_decl_label10(mdbcomp__trace_counts__write_proc_label_3_0, 8,6,11,12,13,5,18,16,21,22)
MR_decl_label8(mdbcomp__trace_counts__write_proc_label_3_0, 23,24,26,27,28,29,51,3)
MR_decl_label10(mdbcomp__trace_counts__write_proc_label_and_file_trace_counts_8_0, 4,6,7,8,9,10,11,12,13,14)
MR_decl_label6(mdbcomp__trace_counts__write_proc_label_and_file_trace_counts_8_0, 15,19,17,16,21,23)
MR_decl_label9(mdbcomp__trace_counts__write_trace_counts_to_file_6_0, 2,5,6,7,8,9,13,14,3)
MR_decl_label6(fn__mdbcomp__trace_counts__calc_num_tests_1_0, 10,5,6,3,11,2)
MR_decl_label2(fn__mdbcomp__trace_counts__insert_into_list_as_set_2_0, 2,3)
MR_decl_label10(fn__mdbcomp__trace_counts__make_path_port_2_0, 3,9,11,13,21,23,25,31,35,37)
MR_decl_label2(fn__mdbcomp__trace_counts__num_tests_for_file_type_1_0, 4,5)
MR_decl_label10(fn__mdbcomp__trace_counts__sum_trace_count_file_type_2_0, 8,10,22,29,32,34,35,36,37,41)
MR_decl_label5(fn__mdbcomp__trace_counts__sum_trace_count_file_type_2_0, 44,46,49,50,51)
MR_decl_label2(__Unify___mdbcomp__trace_counts__base_count_file_type_0_0, 4,1)
MR_decl_label2(__Unify___mdbcomp__trace_counts__line_no_and_count_0_0, 4,1)
MR_decl_label4(__Unify___mdbcomp__trace_counts__path_port_0_0, 13,5,17,1)
MR_decl_label3(__Unify___mdbcomp__trace_counts__proc_label_in_context_0_0, 4,8,1)
MR_decl_label4(__Unify___mdbcomp__trace_counts__read_trace_counts_list_result_0_0, 17,5,8,1)
MR_decl_label8(__Unify___mdbcomp__trace_counts__read_trace_counts_result_0_0, 11,13,22,5,27,7,29,1)
MR_decl_label6(__Unify___mdbcomp__trace_counts__trace_count_file_type_0_0, 57,7,11,15,21,1)
MR_decl_label1(__Unify___mdbcomp__trace_counts__trace_count_syntax_error_0_0, 4)
MR_decl_label4(__Compare___mdbcomp__trace_counts__base_count_file_type_0_0, 3,2,5,21)
MR_decl_label5(__Compare___mdbcomp__trace_counts__line_no_and_count_0_0, 3,2,5,9,29)
MR_decl_label10(__Compare___mdbcomp__trace_counts__path_port_0_0, 3,2,18,26,30,5,56,10,7,93)
MR_decl_label5(__Compare___mdbcomp__trace_counts__proc_label_in_context_0_0, 3,2,5,9,29)
MR_decl_label7(__Compare___mdbcomp__trace_counts__read_trace_counts_list_result_0_0, 3,2,7,5,10,12,46)
MR_decl_label10(__Compare___mdbcomp__trace_counts__read_trace_counts_result_0_0, 3,31,35,37,48,63,107,5,7,79)
MR_decl_label4(__Compare___mdbcomp__trace_counts__read_trace_counts_result_0_0, 88,18,89,131)
MR_decl_label10(__Compare___mdbcomp__trace_counts__trace_count_file_type_0_0, 95,3,2,9,18,21,26,62,29,30)
MR_decl_label2(__Compare___mdbcomp__trace_counts__trace_count_file_type_0_0, 32,103)
MR_decl_label2(__Compare___mdbcomp__trace_counts__trace_count_syntax_error_0_0, 3,2)
MR_decl_static(fn__mdbcomp__trace_counts__insert_into_list_as_set_2_0)
MR_def_extern_entry(fn__mdbcomp__trace_counts__sum_trace_count_file_type_2_0)
MR_def_extern_entry(fn__mdbcomp__trace_counts__make_path_port_2_0)
MR_def_extern_entry(mdbcomp__trace_counts__summarize_trace_counts_list_2_0)
MR_def_extern_entry(mdbcomp__trace_counts__sum_trace_counts_3_0)
MR_def_extern_entry(mdbcomp__trace_counts__diff_trace_counts_3_0)
MR_def_extern_entry(mdbcomp__trace_counts__read_trace_counts_4_0)
MR_decl_static(mdbcomp__trace_counts__read_trace_counts_list_stream_8_0)
MR_def_extern_entry(mdbcomp__trace_counts__read_trace_counts_list_5_0)
MR_def_extern_entry(mdbcomp__trace_counts__read_trace_counts_source_4_0)
MR_decl_static(mdbcomp__trace_counts__read_and_union_trace_counts_2_9_0)
MR_def_extern_entry(mdbcomp__trace_counts__read_and_union_trace_counts_8_0)
MR_def_extern_entry(mdbcomp__trace_counts__write_trace_counts_to_file_6_0)
MR_def_extern_entry(mdbcomp__trace_counts__write_proc_label_3_0)
MR_def_extern_entry(mdbcomp__trace_counts__string_to_trace_port_2_0)
MR_def_extern_entry(mdbcomp__trace_counts__string_to_trace_port_2_1)
MR_def_extern_entry(mdbcomp__trace_counts__restrict_trace_counts_to_module_3_0)
MR_def_extern_entry(fn__mdbcomp__trace_counts__num_tests_for_file_type_1_0)
MR_def_extern_entry(fn__mdbcomp__trace_counts__calc_num_tests_1_0)
MR_decl_static(mdbcomp__trace_counts__sum_proc_trace_counts_3_0)
MR_decl_static(fn__mdbcomp__trace_counts__sum_counts_on_line_2_0)
MR_decl_static(mdbcomp__trace_counts__diff_trace_counts_acc_5_0)
MR_decl_static(mdbcomp__trace_counts__diff_proc_counts_acc_5_0)
MR_decl_static(mdbcomp__trace_counts__read_trace_counts_from_cur_stream_3_0)
MR_decl_static(mdbcomp__trace_counts__parse_path_port_line_5_0)
MR_decl_static(mdbcomp__trace_counts__read_proc_trace_counts_8_0)
MR_decl_static(mdbcomp__trace_counts__read_proc_trace_counts_2_6_0)
MR_decl_static(mdbcomp__trace_counts__read_trace_counts_setup_4_0)
MR_decl_static(mdbcomp__trace_counts__write_proc_label_and_file_trace_counts_8_0)
MR_decl_static(mdbcomp__trace_counts__write_path_port_count_4_0)
MR_decl_static(mdbcomp__trace_counts__restrict_trace_counts_2_5_0)
MR_def_extern_entry(__Unify___mdbcomp__trace_counts__all_or_nonzero_0_0)
MR_def_extern_entry(__Compare___mdbcomp__trace_counts__all_or_nonzero_0_0)
MR_def_extern_entry(__Unify___mdbcomp__trace_counts__base_count_file_type_0_0)
MR_def_extern_entry(__Compare___mdbcomp__trace_counts__base_count_file_type_0_0)
MR_def_extern_entry(__Unify___mdbcomp__trace_counts__line_no_and_count_0_0)
MR_def_extern_entry(__Compare___mdbcomp__trace_counts__line_no_and_count_0_0)
MR_def_extern_entry(__Unify___mdbcomp__trace_counts__path_port_0_0)
MR_def_extern_entry(__Compare___mdbcomp__trace_counts__path_port_0_0)
MR_def_extern_entry(__Unify___mdbcomp__trace_counts__proc_label_in_context_0_0)
MR_def_extern_entry(__Compare___mdbcomp__trace_counts__proc_label_in_context_0_0)
MR_def_extern_entry(__Unify___mdbcomp__trace_counts__proc_trace_counts_0_0)
MR_def_extern_entry(__Compare___mdbcomp__trace_counts__proc_trace_counts_0_0)
MR_def_extern_entry(__Unify___mdbcomp__trace_counts__read_trace_counts_list_result_0_0)
MR_def_extern_entry(__Compare___mdbcomp__trace_counts__read_trace_counts_list_result_0_0)
MR_def_extern_entry(__Unify___mdbcomp__trace_counts__read_trace_counts_result_0_0)
MR_def_extern_entry(__Compare___mdbcomp__trace_counts__read_trace_counts_result_0_0)
MR_def_extern_entry(__Unify___mdbcomp__trace_counts__trace_count_file_type_0_0)
MR_def_extern_entry(__Compare___mdbcomp__trace_counts__trace_count_file_type_0_0)
MR_decl_static(__Unify___mdbcomp__trace_counts__trace_count_syntax_error_0_0)
MR_decl_static(__Compare___mdbcomp__trace_counts__trace_count_syntax_error_0_0)
MR_def_extern_entry(__Unify___mdbcomp__trace_counts__trace_counts_0_0)
MR_def_extern_entry(__Compare___mdbcomp__trace_counts__trace_counts_0_0)
MR_decl_static(mdbcomp__trace_counts__IntroducedFrom__pred__write_proc_label_and_check__847__1_2_0)

static const struct mercury_type_0 mercury_common_0[6] =
{
{
0
},
{
5
},
{
1
},
{
3
},
{
2
},
{
17
},
};

extern const MR_TypeCtorInfo_Struct mercury_data_tree234__type_ctor_info_tree234_2;
extern const MR_TypeCtorInfo_Struct mercury_data_tree234__type_ctor_info_tree234_2;
extern const MR_TypeCtorInfo_Struct mercury_data_mdbcomp__trace_counts__type_ctor_info_path_port_0;
extern const MR_TypeCtorInfo_Struct mercury_data_mdbcomp__trace_counts__type_ctor_info_line_no_and_count_0;
extern const MR_TypeCtorInfo_Struct mercury_data_mdbcomp__trace_counts__type_ctor_info_proc_label_in_context_0;
static const struct mercury_type_1 mercury_common_1[5] =
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
MR_CTOR0_ADDR(mdbcomp__trace_counts, proc_label_in_context),
MR_TAG_COMMON(0,1,0)
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
MR_CTOR_ADDR(tree234, tree234, 2),
MR_CTOR0_ADDR(mdbcomp__trace_counts, proc_label_in_context),
MR_COMMON(1,2)
}
},
{
{
MR_CTOR_ADDR(tree234, tree234, 2),
MR_CTOR0_ADDR(mdbcomp__trace_counts, path_port),
MR_CTOR0_ADDR(mdbcomp__trace_counts, line_no_and_count)
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__mdbcomp__trace_counts__summarize_trace_counts_list_2_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__mdbcomp__trace_counts__sum_trace_counts_3_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__mdbcomp__trace_counts__read_trace_counts_4_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_mdbcomp__trace_counts__type_ctor_info_read_trace_counts_result_0;
extern const MR_TypeCtorInfo_Struct mercury_data_io__type_ctor_info_state_0;
static const MR_UserClosureId
mercury_data__closure_layout__mdbcomp__trace_counts__sum_proc_trace_counts_3_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_mdbcomp__trace_counts__type_ctor_info_line_no_and_count_0;
static const struct mercury_type_2 mercury_common_2[4] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__mdbcomp__trace_counts__summarize_trace_counts_list_2_0_1,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_COMMON(1,3),
MR_COMMON(1,3),
MR_COMMON(1,3)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__mdbcomp__trace_counts__sum_trace_counts_3_0_1,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_COMMON(1,4),
MR_COMMON(1,4),
MR_COMMON(1,4)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__mdbcomp__trace_counts__read_trace_counts_4_0_1,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_CTOR0_ADDR(mdbcomp__trace_counts, read_trace_counts_result),
MR_IO_CTOR_ADDR,
MR_IO_CTOR_ADDR
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__mdbcomp__trace_counts__sum_proc_trace_counts_3_0_1,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_CTOR0_ADDR(mdbcomp__trace_counts, line_no_and_count),
MR_CTOR0_ADDR(mdbcomp__trace_counts, line_no_and_count),
MR_CTOR0_ADDR(mdbcomp__trace_counts, line_no_and_count)
}
},
};

static const struct mercury_type_3 mercury_common_3[6] =
{
{
MR_COMMON(2,0),
MR_ENTRY_AP(mdbcomp__trace_counts__sum_trace_counts_3_0),
0
},
{
MR_COMMON(2,1),
MR_ENTRY_AP(mdbcomp__trace_counts__sum_proc_trace_counts_3_0),
0
},
{
MR_COMMON(2,2),
MR_ENTRY_AP(mdbcomp__trace_counts__read_trace_counts_from_cur_stream_3_0),
0
},
{
MR_COMMON(7,0),
MR_ENTRY_AP(mdbcomp__trace_counts__write_proc_label_and_file_trace_counts_8_0),
0
},
{
MR_COMMON(2,3),
MR_ENTRY_AP(fn__mdbcomp__trace_counts__sum_counts_on_line_2_0),
0
},
{
MR_COMMON(9,1),
MR_ENTRY_AP(mdbcomp__trace_counts__write_path_port_count_4_0),
0
},
};

static const MR_UserClosureId
mercury_data__closure_layout__mdbcomp__trace_counts__diff_trace_counts_3_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_mdbcomp__trace_counts__type_ctor_info_proc_label_in_context_0;
static const MR_UserClosureId
mercury_data__closure_layout__mdbcomp__trace_counts__restrict_trace_counts_to_module_3_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_mdbcomp__prim_data__type_ctor_info_sym_name_0;
static const MR_UserClosureId
mercury_data__closure_layout__mdbcomp__trace_counts__diff_trace_counts_acc_5_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_mdbcomp__trace_counts__type_ctor_info_path_port_0;
static const struct mercury_type_4 mercury_common_4[3] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__mdbcomp__trace_counts__diff_trace_counts_3_0_1,
(MR_Word *) (MR_Integer) 0
},
5,
{
MR_COMMON(1,3),
MR_CTOR0_ADDR(mdbcomp__trace_counts, proc_label_in_context),
MR_COMMON(1,4),
MR_COMMON(1,3),
MR_COMMON(1,3)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__mdbcomp__trace_counts__restrict_trace_counts_to_module_3_0_1,
(MR_Word *) (MR_Integer) 0
},
5,
{
MR_CTOR0_ADDR(mdbcomp__prim_data, sym_name),
MR_CTOR0_ADDR(mdbcomp__trace_counts, proc_label_in_context),
MR_COMMON(1,4),
MR_COMMON(1,3),
MR_COMMON(1,3)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__mdbcomp__trace_counts__diff_trace_counts_acc_5_0_1,
(MR_Word *) (MR_Integer) 0
},
5,
{
MR_COMMON(1,4),
MR_CTOR0_ADDR(mdbcomp__trace_counts, path_port),
MR_CTOR0_ADDR(mdbcomp__trace_counts, line_no_and_count),
MR_COMMON(1,4),
MR_COMMON(1,4)
}
},
};

static const struct mercury_type_5 mercury_common_5[3] =
{
{
MR_string_const("no trace count file id", 22)
},
{
MR_string_const("", 0)
},
{
MR_string_const("no info on trace count file type", 32)
},
};

static const struct mercury_type_6 mercury_common_6[1] =
{
{
0,
MR_tbmkword(0, 0)
},
};

static const MR_UserClosureId
mercury_data__closure_layout__mdbcomp__trace_counts__write_trace_counts_to_file_6_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_string_0;
static const struct mercury_type_7 mercury_common_7[1] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__mdbcomp__trace_counts__write_trace_counts_to_file_6_0_1,
(MR_Word *) (MR_Integer) 0
},
8,
{
MR_CTOR0_ADDR(mdbcomp__trace_counts, proc_label_in_context),
MR_COMMON(1,4),
MR_CTOR0_ADDR(mdbcomp__prim_data, sym_name),
MR_CTOR0_ADDR(mdbcomp__prim_data, sym_name),
MR_STRING_CTOR_ADDR,
MR_STRING_CTOR_ADDR,
MR_IO_CTOR_ADDR,
MR_IO_CTOR_ADDR
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__mdbcomp__trace_counts__read_trace_counts_from_cur_stream_3_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__mdbcomp__trace_counts__write_proc_label_and_file_trace_counts_8_0_2;
static const struct mercury_type_9 mercury_common_9[2] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__mdbcomp__trace_counts__read_trace_counts_from_cur_stream_3_0_1,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_COMMON(1,3),
MR_COMMON(1,3),
MR_IO_CTOR_ADDR,
MR_IO_CTOR_ADDR
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__mdbcomp__trace_counts__write_proc_label_and_file_trace_counts_8_0_2,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_CTOR0_ADDR(mdbcomp__trace_counts, path_port),
MR_CTOR0_ADDR(mdbcomp__trace_counts, line_no_and_count),
MR_IO_CTOR_ADDR,
MR_IO_CTOR_ADDR
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__mdbcomp__trace_counts__write_proc_label_and_file_trace_counts_8_0_1;
static const struct mercury_type_10 mercury_common_10[1] =
{
{
(MR_Word *) &mercury_data__closure_layout__mdbcomp__trace_counts__write_proc_label_and_file_trace_counts_8_0_1,
(MR_Word *) (MR_Integer) 0,
2,
MR_CTOR0_ADDR(mdbcomp__prim_data, sym_name),
MR_CTOR0_ADDR(mdbcomp__prim_data, sym_name)
},
};

static const struct mercury_type_11 mercury_common_11[1] =
{
{
MR_string_const("\n", 1),
MR_tbmkword(0, 0)
},
};

static const struct mercury_type_5 mercury_vector_common_5_0[18] =
{
{
MR_string_const("CALL", 4)
},
{
MR_string_const("EXIT", 4)
},
{
MR_string_const("REDO", 4)
},
{
MR_string_const("FAIL", 4)
},
{
MR_string_const("TAIL", 4)
},
{
MR_string_const("EXCP", 4)
},
{
MR_string_const("COND", 4)
},
{
MR_string_const("THEN", 4)
},
{
MR_string_const("ELSE", 4)
},
{
MR_string_const("NEGE", 4)
},
{
MR_string_const("NEGS", 4)
},
{
MR_string_const("NEGF", 4)
},
{
MR_string_const("DSJF", 4)
},
{
MR_string_const("DSJL", 4)
},
{
MR_string_const("SWTC", 4)
},
{
MR_string_const("FRST", 4)
},
{
MR_string_const("LATR", 4)
},
{
MR_string_const("USER", 4)
},
};

static const struct mercury_type_8 mercury_vector_common_8_0[64] =
{
{
(MR_String) (MR_Integer) 0,
-2
},
{
MR_string_const("DSJL", 4),
-1
},
{
MR_string_const("CALL", 4),
-1
},
{
MR_string_const("FRST", 4),
-1
},
{
MR_string_const("EXIT", 4),
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
MR_string_const("EXCP", 4),
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
MR_string_const("LATR", 4),
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
MR_string_const("USER", 4),
1
},
{
(MR_String) (MR_Integer) 0,
-2
},
{
(MR_String) (MR_Integer) 0,
-2
},
{
MR_string_const("REDO", 4),
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
MR_string_const("ELSE", 4),
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
MR_string_const("DSJF", 4),
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
MR_string_const("COND", 4),
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
MR_string_const("FAIL", 4),
2
},
{
(MR_String) (MR_Integer) 0,
-2
},
{
(MR_String) (MR_Integer) 0,
-2
},
{
(MR_String) (MR_Integer) 0,
-2
},
{
(MR_String) (MR_Integer) 0,
-2
},
{
(MR_String) (MR_Integer) 0,
-2
},
{
(MR_String) (MR_Integer) 0,
-2
},
{
MR_string_const("NEGE", 4),
-1
},
{
MR_string_const("NEGF", 4),
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
MR_string_const("THEN", 4),
-1
},
{
MR_string_const("TAIL", 4),
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
MR_string_const("SWTC", 4),
3
},
{
(MR_String) (MR_Integer) 0,
-2
},
{
(MR_String) (MR_Integer) 0,
-2
},
{
(MR_String) (MR_Integer) 0,
-2
},
{
MR_string_const("NEGS", 4),
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
};

static const MR_EnumFunctorDesc mercury_data_mdbcomp__trace_counts__enum_functor_desc_all_or_nonzero_0_0 = {
	"user_all",
	0
};

static const MR_EnumFunctorDesc mercury_data_mdbcomp__trace_counts__enum_functor_desc_all_or_nonzero_0_1 = {
	"user_nonzero",
	1
};

const MR_EnumFunctorDescPtr mercury_data_mdbcomp__trace_counts__enum_value_ordered_all_or_nonzero_0[] = {
	&mercury_data_mdbcomp__trace_counts__enum_functor_desc_all_or_nonzero_0_0,
	&mercury_data_mdbcomp__trace_counts__enum_functor_desc_all_or_nonzero_0_1
};

const MR_EnumFunctorDescPtr mercury_data_mdbcomp__trace_counts__enum_name_ordered_all_or_nonzero_0[] = {
	&mercury_data_mdbcomp__trace_counts__enum_functor_desc_all_or_nonzero_0_0,
	&mercury_data_mdbcomp__trace_counts__enum_functor_desc_all_or_nonzero_0_1
};

const MR_Integer mercury_data_mdbcomp__trace_counts__functor_number_map_all_or_nonzero_0[] = {
	0,
	1 };
	
const MR_TypeCtorInfo_Struct mercury_data_mdbcomp__trace_counts__type_ctor_info_all_or_nonzero_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_ENUM,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___mdbcomp__trace_counts__all_or_nonzero_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___mdbcomp__trace_counts__all_or_nonzero_0_0)),
	"mdbcomp.trace_counts",
	"all_or_nonzero",
	{ (void *)mercury_data_mdbcomp__trace_counts__enum_name_ordered_all_or_nonzero_0 },
	{ (void *)mercury_data_mdbcomp__trace_counts__enum_value_ordered_all_or_nonzero_0 },
	2,
	4,
	mercury_data_mdbcomp__trace_counts__functor_number_map_all_or_nonzero_0
};
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_string_0;
extern const MR_TypeCtorInfo_Struct mercury_data_mdbcomp__trace_counts__type_ctor_info_all_or_nonzero_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_string_0;

const MR_PseudoTypeInfo mercury_data_mdbcomp__trace_counts__field_types_base_count_file_type_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_mdbcomp__trace_counts__type_ctor_info_all_or_nonzero_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_string_0
};

static const MR_DuFunctorDesc mercury_data_mdbcomp__trace_counts__du_functor_desc_base_count_file_type_0_0 = {
	"base_count_file_type",
	2,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_mdbcomp__trace_counts__field_types_base_count_file_type_0_0,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_mdbcomp__trace_counts__du_stag_ordered_base_count_file_type_0_0[] = {
	&mercury_data_mdbcomp__trace_counts__du_functor_desc_base_count_file_type_0_0

};

const MR_DuPtagLayout mercury_data_mdbcomp__trace_counts__du_ptag_ordered_base_count_file_type_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_mdbcomp__trace_counts__du_stag_ordered_base_count_file_type_0_0 }

};

const MR_DuFunctorDescPtr mercury_data_mdbcomp__trace_counts__du_name_ordered_base_count_file_type_0[] = {
	&mercury_data_mdbcomp__trace_counts__du_functor_desc_base_count_file_type_0_0
};

const MR_Integer mercury_data_mdbcomp__trace_counts__functor_number_map_base_count_file_type_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_mdbcomp__trace_counts__type_ctor_info_base_count_file_type_0 = {
	0,
	13,
	1,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___mdbcomp__trace_counts__base_count_file_type_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___mdbcomp__trace_counts__base_count_file_type_0_0)),
	"mdbcomp.trace_counts",
	"base_count_file_type",
	{ (void *)mercury_data_mdbcomp__trace_counts__du_name_ordered_base_count_file_type_0 },
	{ (void *)mercury_data_mdbcomp__trace_counts__du_ptag_ordered_base_count_file_type_0 },
	1,
	4,
	mercury_data_mdbcomp__trace_counts__functor_number_map_base_count_file_type_0
};
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;

const MR_PseudoTypeInfo mercury_data_mdbcomp__trace_counts__field_types_line_no_and_count_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0
};

const MR_ConstString mercury_data_mdbcomp__trace_counts__field_names_line_no_and_count_0_0[] = {
	"line_number",
	"exec_count",
	"num_tests"
};

static const MR_DuFunctorDesc mercury_data_mdbcomp__trace_counts__du_functor_desc_line_no_and_count_0_0 = {
	"line_no_and_count",
	3,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_mdbcomp__trace_counts__field_types_line_no_and_count_0_0,
	mercury_data_mdbcomp__trace_counts__field_names_line_no_and_count_0_0,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_mdbcomp__trace_counts__du_stag_ordered_line_no_and_count_0_0[] = {
	&mercury_data_mdbcomp__trace_counts__du_functor_desc_line_no_and_count_0_0

};

const MR_DuPtagLayout mercury_data_mdbcomp__trace_counts__du_ptag_ordered_line_no_and_count_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_mdbcomp__trace_counts__du_stag_ordered_line_no_and_count_0_0 }

};

const MR_DuFunctorDescPtr mercury_data_mdbcomp__trace_counts__du_name_ordered_line_no_and_count_0[] = {
	&mercury_data_mdbcomp__trace_counts__du_functor_desc_line_no_and_count_0_0
};

const MR_Integer mercury_data_mdbcomp__trace_counts__functor_number_map_line_no_and_count_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_mdbcomp__trace_counts__type_ctor_info_line_no_and_count_0 = {
	0,
	13,
	1,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___mdbcomp__trace_counts__line_no_and_count_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___mdbcomp__trace_counts__line_no_and_count_0_0)),
	"mdbcomp.trace_counts",
	"line_no_and_count",
	{ (void *)mercury_data_mdbcomp__trace_counts__du_name_ordered_line_no_and_count_0 },
	{ (void *)mercury_data_mdbcomp__trace_counts__du_ptag_ordered_line_no_and_count_0 },
	1,
	4,
	mercury_data_mdbcomp__trace_counts__functor_number_map_line_no_and_count_0
};
extern const MR_TypeCtorInfo_Struct mercury_data_mdbcomp__prim_data__type_ctor_info_trace_port_0;
extern const MR_TypeCtorInfo_Struct mercury_data_mdbcomp__prim_data__type_ctor_info_trace_port_0;

const MR_PseudoTypeInfo mercury_data_mdbcomp__trace_counts__field_types_path_port_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_mdbcomp__prim_data__type_ctor_info_trace_port_0
};

static const MR_DuFunctorDesc mercury_data_mdbcomp__trace_counts__du_functor_desc_path_port_0_0 = {
	"port_only",
	1,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_mdbcomp__trace_counts__field_types_path_port_0_0,
	NULL,
	NULL
};
extern const MR_TypeCtorInfo_Struct mercury_data_mdbcomp__program_representation__type_ctor_info_goal_path_0;
extern const MR_TypeCtorInfo_Struct mercury_data_mdbcomp__program_representation__type_ctor_info_goal_path_0;

const MR_PseudoTypeInfo mercury_data_mdbcomp__trace_counts__field_types_path_port_0_1[] = {
	(MR_PseudoTypeInfo) &mercury_data_mdbcomp__program_representation__type_ctor_info_goal_path_0
};

static const MR_DuFunctorDesc mercury_data_mdbcomp__trace_counts__du_functor_desc_path_port_0_1 = {
	"path_only",
	1,
	0,
	MR_SECTAG_NONE,
	1,
	-1,
	1,
	(MR_PseudoTypeInfo *) mercury_data_mdbcomp__trace_counts__field_types_path_port_0_1,
	NULL,
	NULL
};

const MR_PseudoTypeInfo mercury_data_mdbcomp__trace_counts__field_types_path_port_0_2[] = {
	(MR_PseudoTypeInfo) &mercury_data_mdbcomp__prim_data__type_ctor_info_trace_port_0,
	(MR_PseudoTypeInfo) &mercury_data_mdbcomp__program_representation__type_ctor_info_goal_path_0
};

static const MR_DuFunctorDesc mercury_data_mdbcomp__trace_counts__du_functor_desc_path_port_0_2 = {
	"port_and_path",
	2,
	0,
	MR_SECTAG_NONE,
	2,
	-1,
	2,
	(MR_PseudoTypeInfo *) mercury_data_mdbcomp__trace_counts__field_types_path_port_0_2,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_mdbcomp__trace_counts__du_stag_ordered_path_port_0_0[] = {
	&mercury_data_mdbcomp__trace_counts__du_functor_desc_path_port_0_0

};

const MR_DuFunctorDescPtr mercury_data_mdbcomp__trace_counts__du_stag_ordered_path_port_0_1[] = {
	&mercury_data_mdbcomp__trace_counts__du_functor_desc_path_port_0_1

};

const MR_DuFunctorDescPtr mercury_data_mdbcomp__trace_counts__du_stag_ordered_path_port_0_2[] = {
	&mercury_data_mdbcomp__trace_counts__du_functor_desc_path_port_0_2

};

const MR_DuPtagLayout mercury_data_mdbcomp__trace_counts__du_ptag_ordered_path_port_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_mdbcomp__trace_counts__du_stag_ordered_path_port_0_0 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_mdbcomp__trace_counts__du_stag_ordered_path_port_0_1 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_mdbcomp__trace_counts__du_stag_ordered_path_port_0_2 }

};

const MR_DuFunctorDescPtr mercury_data_mdbcomp__trace_counts__du_name_ordered_path_port_0[] = {
	&mercury_data_mdbcomp__trace_counts__du_functor_desc_path_port_0_1,
	&mercury_data_mdbcomp__trace_counts__du_functor_desc_path_port_0_2,
	&mercury_data_mdbcomp__trace_counts__du_functor_desc_path_port_0_0
};

const MR_Integer mercury_data_mdbcomp__trace_counts__functor_number_map_path_port_0[] = {
	2,
	0,
	1 };
	
const MR_TypeCtorInfo_Struct mercury_data_mdbcomp__trace_counts__type_ctor_info_path_port_0 = {
	0,
	13,
	3,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___mdbcomp__trace_counts__path_port_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___mdbcomp__trace_counts__path_port_0_0)),
	"mdbcomp.trace_counts",
	"path_port",
	{ (void *)mercury_data_mdbcomp__trace_counts__du_name_ordered_path_port_0 },
	{ (void *)mercury_data_mdbcomp__trace_counts__du_ptag_ordered_path_port_0 },
	3,
	4,
	mercury_data_mdbcomp__trace_counts__functor_number_map_path_port_0
};
extern const MR_TypeCtorInfo_Struct mercury_data_mdbcomp__prim_data__type_ctor_info_sym_name_0;
extern const MR_TypeCtorInfo_Struct mercury_data_mdbcomp__prim_data__type_ctor_info_proc_label_0;
extern const MR_TypeCtorInfo_Struct mercury_data_mdbcomp__prim_data__type_ctor_info_sym_name_0;
extern const MR_TypeCtorInfo_Struct mercury_data_mdbcomp__prim_data__type_ctor_info_proc_label_0;

const MR_PseudoTypeInfo mercury_data_mdbcomp__trace_counts__field_types_proc_label_in_context_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_mdbcomp__prim_data__type_ctor_info_sym_name_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_string_0,
	(MR_PseudoTypeInfo) &mercury_data_mdbcomp__prim_data__type_ctor_info_proc_label_0
};

const MR_ConstString mercury_data_mdbcomp__trace_counts__field_names_proc_label_in_context_0_0[] = {
	"context_module_symname",
	"context_filename",
	"proc_label"
};

static const MR_DuFunctorDesc mercury_data_mdbcomp__trace_counts__du_functor_desc_proc_label_in_context_0_0 = {
	"proc_label_in_context",
	3,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_mdbcomp__trace_counts__field_types_proc_label_in_context_0_0,
	mercury_data_mdbcomp__trace_counts__field_names_proc_label_in_context_0_0,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_mdbcomp__trace_counts__du_stag_ordered_proc_label_in_context_0_0[] = {
	&mercury_data_mdbcomp__trace_counts__du_functor_desc_proc_label_in_context_0_0

};

const MR_DuPtagLayout mercury_data_mdbcomp__trace_counts__du_ptag_ordered_proc_label_in_context_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_mdbcomp__trace_counts__du_stag_ordered_proc_label_in_context_0_0 }

};

const MR_DuFunctorDescPtr mercury_data_mdbcomp__trace_counts__du_name_ordered_proc_label_in_context_0[] = {
	&mercury_data_mdbcomp__trace_counts__du_functor_desc_proc_label_in_context_0_0
};

const MR_Integer mercury_data_mdbcomp__trace_counts__functor_number_map_proc_label_in_context_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_mdbcomp__trace_counts__type_ctor_info_proc_label_in_context_0 = {
	0,
	13,
	1,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___mdbcomp__trace_counts__proc_label_in_context_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___mdbcomp__trace_counts__proc_label_in_context_0_0)),
	"mdbcomp.trace_counts",
	"proc_label_in_context",
	{ (void *)mercury_data_mdbcomp__trace_counts__du_name_ordered_proc_label_in_context_0 },
	{ (void *)mercury_data_mdbcomp__trace_counts__du_ptag_ordered_proc_label_in_context_0 },
	1,
	4,
	mercury_data_mdbcomp__trace_counts__functor_number_map_proc_label_in_context_0
};

static const MR_FA_TypeInfo_Struct2 mercury_data_tree234__ti_tree234_2mdbcomp__trace_counts__type_ctor_info_path_port_0mdbcomp__trace_counts__type_ctor_info_line_no_and_count_0 = {
	&mercury_data_tree234__type_ctor_info_tree234_2,
{	(MR_TypeInfo) &mercury_data_mdbcomp__trace_counts__type_ctor_info_path_port_0,
	(MR_TypeInfo) &mercury_data_mdbcomp__trace_counts__type_ctor_info_line_no_and_count_0
}};

const MR_TypeCtorInfo_Struct mercury_data_mdbcomp__trace_counts__type_ctor_info_proc_trace_counts_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_EQUIV_GROUND,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___mdbcomp__trace_counts__proc_trace_counts_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___mdbcomp__trace_counts__proc_trace_counts_0_0)),
	"mdbcomp.trace_counts",
	"proc_trace_counts",
	{ 0 },
	{ (void *)&mercury_data_tree234__ti_tree234_2mdbcomp__trace_counts__type_ctor_info_path_port_0mdbcomp__trace_counts__type_ctor_info_line_no_and_count_0 },
	-1,
	0,
	NULL
};

static const MR_FA_TypeInfo_Struct2 mercury_data_tree234__ti_tree234_2mdbcomp__trace_counts__type_ctor_info_proc_label_in_context_0tree234__ti_tree234_2mdbcomp__trace_counts__type_ctor_info_path_port_0mdbcomp__trace_counts__type_ctor_info_line_no_and_count_0 = {
	&mercury_data_tree234__type_ctor_info_tree234_2,
{	(MR_TypeInfo) &mercury_data_mdbcomp__trace_counts__type_ctor_info_proc_label_in_context_0,
	(MR_TypeInfo) &mercury_data_tree234__ti_tree234_2mdbcomp__trace_counts__type_ctor_info_path_port_0mdbcomp__trace_counts__type_ctor_info_line_no_and_count_0
}};
extern const MR_TypeCtorInfo_Struct mercury_data_mdbcomp__trace_counts__type_ctor_info_trace_count_file_type_0;

const MR_PseudoTypeInfo mercury_data_mdbcomp__trace_counts__field_types_read_trace_counts_list_result_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_mdbcomp__trace_counts__type_ctor_info_trace_count_file_type_0,
	(MR_PseudoTypeInfo) &mercury_data_tree234__ti_tree234_2mdbcomp__trace_counts__type_ctor_info_proc_label_in_context_0tree234__ti_tree234_2mdbcomp__trace_counts__type_ctor_info_path_port_0mdbcomp__trace_counts__type_ctor_info_line_no_and_count_0
};

static const MR_DuFunctorDesc mercury_data_mdbcomp__trace_counts__du_functor_desc_read_trace_counts_list_result_0_0 = {
	"list_ok",
	2,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_mdbcomp__trace_counts__field_types_read_trace_counts_list_result_0_0,
	NULL,
	NULL
};

const MR_PseudoTypeInfo mercury_data_mdbcomp__trace_counts__field_types_read_trace_counts_list_result_0_1[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_string_0
};

static const MR_DuFunctorDesc mercury_data_mdbcomp__trace_counts__du_functor_desc_read_trace_counts_list_result_0_1 = {
	"list_error_message",
	1,
	0,
	MR_SECTAG_NONE,
	1,
	-1,
	1,
	(MR_PseudoTypeInfo *) mercury_data_mdbcomp__trace_counts__field_types_read_trace_counts_list_result_0_1,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_mdbcomp__trace_counts__du_stag_ordered_read_trace_counts_list_result_0_0[] = {
	&mercury_data_mdbcomp__trace_counts__du_functor_desc_read_trace_counts_list_result_0_0

};

const MR_DuFunctorDescPtr mercury_data_mdbcomp__trace_counts__du_stag_ordered_read_trace_counts_list_result_0_1[] = {
	&mercury_data_mdbcomp__trace_counts__du_functor_desc_read_trace_counts_list_result_0_1

};

const MR_DuPtagLayout mercury_data_mdbcomp__trace_counts__du_ptag_ordered_read_trace_counts_list_result_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_mdbcomp__trace_counts__du_stag_ordered_read_trace_counts_list_result_0_0 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_mdbcomp__trace_counts__du_stag_ordered_read_trace_counts_list_result_0_1 }

};

const MR_DuFunctorDescPtr mercury_data_mdbcomp__trace_counts__du_name_ordered_read_trace_counts_list_result_0[] = {
	&mercury_data_mdbcomp__trace_counts__du_functor_desc_read_trace_counts_list_result_0_1,
	&mercury_data_mdbcomp__trace_counts__du_functor_desc_read_trace_counts_list_result_0_0
};

const MR_Integer mercury_data_mdbcomp__trace_counts__functor_number_map_read_trace_counts_list_result_0[] = {
	1,
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_mdbcomp__trace_counts__type_ctor_info_read_trace_counts_list_result_0 = {
	0,
	13,
	2,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___mdbcomp__trace_counts__read_trace_counts_list_result_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___mdbcomp__trace_counts__read_trace_counts_list_result_0_0)),
	"mdbcomp.trace_counts",
	"read_trace_counts_list_result",
	{ (void *)mercury_data_mdbcomp__trace_counts__du_name_ordered_read_trace_counts_list_result_0 },
	{ (void *)mercury_data_mdbcomp__trace_counts__du_ptag_ordered_read_trace_counts_list_result_0 },
	2,
	4,
	mercury_data_mdbcomp__trace_counts__functor_number_map_read_trace_counts_list_result_0
};

const MR_PseudoTypeInfo mercury_data_mdbcomp__trace_counts__field_types_read_trace_counts_result_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_mdbcomp__trace_counts__type_ctor_info_trace_count_file_type_0,
	(MR_PseudoTypeInfo) &mercury_data_tree234__ti_tree234_2mdbcomp__trace_counts__type_ctor_info_proc_label_in_context_0tree234__ti_tree234_2mdbcomp__trace_counts__type_ctor_info_path_port_0mdbcomp__trace_counts__type_ctor_info_line_no_and_count_0
};

static const MR_DuFunctorDesc mercury_data_mdbcomp__trace_counts__du_functor_desc_read_trace_counts_result_0_0 = {
	"ok",
	2,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_mdbcomp__trace_counts__field_types_read_trace_counts_result_0_0,
	NULL,
	NULL
};

const MR_PseudoTypeInfo mercury_data_mdbcomp__trace_counts__field_types_read_trace_counts_result_0_1[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_string_0
};

static const MR_DuFunctorDesc mercury_data_mdbcomp__trace_counts__du_functor_desc_read_trace_counts_result_0_1 = {
	"syntax_error",
	1,
	0,
	MR_SECTAG_NONE,
	1,
	-1,
	1,
	(MR_PseudoTypeInfo *) mercury_data_mdbcomp__trace_counts__field_types_read_trace_counts_result_0_1,
	NULL,
	NULL
};

const MR_PseudoTypeInfo mercury_data_mdbcomp__trace_counts__field_types_read_trace_counts_result_0_2[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_string_0
};

static const MR_DuFunctorDesc mercury_data_mdbcomp__trace_counts__du_functor_desc_read_trace_counts_result_0_2 = {
	"error_message",
	1,
	0,
	MR_SECTAG_NONE,
	2,
	-1,
	2,
	(MR_PseudoTypeInfo *) mercury_data_mdbcomp__trace_counts__field_types_read_trace_counts_result_0_2,
	NULL,
	NULL
};
extern const MR_TypeCtorInfo_Struct mercury_data_io__type_ctor_info_error_0;
extern const MR_TypeCtorInfo_Struct mercury_data_io__type_ctor_info_error_0;

const MR_PseudoTypeInfo mercury_data_mdbcomp__trace_counts__field_types_read_trace_counts_result_0_3[] = {
	(MR_PseudoTypeInfo) &mercury_data_io__type_ctor_info_error_0
};

static const MR_DuFunctorDesc mercury_data_mdbcomp__trace_counts__du_functor_desc_read_trace_counts_result_0_3 = {
	"open_error",
	1,
	0,
	MR_SECTAG_REMOTE,
	3,
	0,
	3,
	(MR_PseudoTypeInfo *) mercury_data_mdbcomp__trace_counts__field_types_read_trace_counts_result_0_3,
	NULL,
	NULL
};

const MR_PseudoTypeInfo mercury_data_mdbcomp__trace_counts__field_types_read_trace_counts_result_0_4[] = {
	(MR_PseudoTypeInfo) &mercury_data_io__type_ctor_info_error_0
};

static const MR_DuFunctorDesc mercury_data_mdbcomp__trace_counts__du_functor_desc_read_trace_counts_result_0_4 = {
	"io_error",
	1,
	0,
	MR_SECTAG_REMOTE,
	3,
	1,
	4,
	(MR_PseudoTypeInfo *) mercury_data_mdbcomp__trace_counts__field_types_read_trace_counts_result_0_4,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_mdbcomp__trace_counts__du_stag_ordered_read_trace_counts_result_0_0[] = {
	&mercury_data_mdbcomp__trace_counts__du_functor_desc_read_trace_counts_result_0_0

};

const MR_DuFunctorDescPtr mercury_data_mdbcomp__trace_counts__du_stag_ordered_read_trace_counts_result_0_1[] = {
	&mercury_data_mdbcomp__trace_counts__du_functor_desc_read_trace_counts_result_0_1

};

const MR_DuFunctorDescPtr mercury_data_mdbcomp__trace_counts__du_stag_ordered_read_trace_counts_result_0_2[] = {
	&mercury_data_mdbcomp__trace_counts__du_functor_desc_read_trace_counts_result_0_2

};

const MR_DuFunctorDescPtr mercury_data_mdbcomp__trace_counts__du_stag_ordered_read_trace_counts_result_0_3[] = {
	&mercury_data_mdbcomp__trace_counts__du_functor_desc_read_trace_counts_result_0_3,
	&mercury_data_mdbcomp__trace_counts__du_functor_desc_read_trace_counts_result_0_4

};

const MR_DuPtagLayout mercury_data_mdbcomp__trace_counts__du_ptag_ordered_read_trace_counts_result_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_mdbcomp__trace_counts__du_stag_ordered_read_trace_counts_result_0_0 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_mdbcomp__trace_counts__du_stag_ordered_read_trace_counts_result_0_1 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_mdbcomp__trace_counts__du_stag_ordered_read_trace_counts_result_0_2 },
	{ 2, MR_SECTAG_REMOTE,
	mercury_data_mdbcomp__trace_counts__du_stag_ordered_read_trace_counts_result_0_3 }

};

const MR_DuFunctorDescPtr mercury_data_mdbcomp__trace_counts__du_name_ordered_read_trace_counts_result_0[] = {
	&mercury_data_mdbcomp__trace_counts__du_functor_desc_read_trace_counts_result_0_2,
	&mercury_data_mdbcomp__trace_counts__du_functor_desc_read_trace_counts_result_0_4,
	&mercury_data_mdbcomp__trace_counts__du_functor_desc_read_trace_counts_result_0_0,
	&mercury_data_mdbcomp__trace_counts__du_functor_desc_read_trace_counts_result_0_3,
	&mercury_data_mdbcomp__trace_counts__du_functor_desc_read_trace_counts_result_0_1
};

const MR_Integer mercury_data_mdbcomp__trace_counts__functor_number_map_read_trace_counts_result_0[] = {
	2,
	4,
	0,
	3,
	1 };
	
const MR_TypeCtorInfo_Struct mercury_data_mdbcomp__trace_counts__type_ctor_info_read_trace_counts_result_0 = {
	0,
	13,
	4,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___mdbcomp__trace_counts__read_trace_counts_result_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___mdbcomp__trace_counts__read_trace_counts_result_0_0)),
	"mdbcomp.trace_counts",
	"read_trace_counts_result",
	{ (void *)mercury_data_mdbcomp__trace_counts__du_name_ordered_read_trace_counts_result_0 },
	{ (void *)mercury_data_mdbcomp__trace_counts__du_ptag_ordered_read_trace_counts_result_0 },
	5,
	4,
	mercury_data_mdbcomp__trace_counts__functor_number_map_read_trace_counts_result_0
};
extern const MR_TypeCtorInfo_Struct mercury_data_mdbcomp__trace_counts__type_ctor_info_base_count_file_type_0;

const MR_PseudoTypeInfo mercury_data_mdbcomp__trace_counts__field_types_trace_count_file_type_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_mdbcomp__trace_counts__type_ctor_info_base_count_file_type_0
};

static const MR_DuFunctorDesc mercury_data_mdbcomp__trace_counts__du_functor_desc_trace_count_file_type_0_0 = {
	"single_file",
	1,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_mdbcomp__trace_counts__field_types_trace_count_file_type_0_0,
	NULL,
	NULL
};
extern const MR_TypeCtorInfo_Struct mercury_data_list__type_ctor_info_list_1;

static const MR_FA_TypeInfo_Struct1 mercury_data_list__ti_list_1mdbcomp__trace_counts__type_ctor_info_trace_count_file_type_0 = {
	&mercury_data_list__type_ctor_info_list_1,
{	(MR_TypeInfo) &mercury_data_mdbcomp__trace_counts__type_ctor_info_trace_count_file_type_0
}};

const MR_PseudoTypeInfo mercury_data_mdbcomp__trace_counts__field_types_trace_count_file_type_0_1[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_list__ti_list_1mdbcomp__trace_counts__type_ctor_info_trace_count_file_type_0
};

static const MR_DuFunctorDesc mercury_data_mdbcomp__trace_counts__du_functor_desc_trace_count_file_type_0_1 = {
	"union_file",
	2,
	0,
	MR_SECTAG_NONE,
	1,
	-1,
	1,
	(MR_PseudoTypeInfo *) mercury_data_mdbcomp__trace_counts__field_types_trace_count_file_type_0_1,
	NULL,
	NULL
};

const MR_PseudoTypeInfo mercury_data_mdbcomp__trace_counts__field_types_trace_count_file_type_0_2[] = {
	(MR_PseudoTypeInfo) &mercury_data_mdbcomp__trace_counts__type_ctor_info_trace_count_file_type_0,
	(MR_PseudoTypeInfo) &mercury_data_mdbcomp__trace_counts__type_ctor_info_trace_count_file_type_0
};

static const MR_DuFunctorDesc mercury_data_mdbcomp__trace_counts__du_functor_desc_trace_count_file_type_0_2 = {
	"diff_file",
	2,
	0,
	MR_SECTAG_NONE,
	2,
	-1,
	2,
	(MR_PseudoTypeInfo *) mercury_data_mdbcomp__trace_counts__field_types_trace_count_file_type_0_2,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_mdbcomp__trace_counts__du_stag_ordered_trace_count_file_type_0_0[] = {
	&mercury_data_mdbcomp__trace_counts__du_functor_desc_trace_count_file_type_0_0

};

const MR_DuFunctorDescPtr mercury_data_mdbcomp__trace_counts__du_stag_ordered_trace_count_file_type_0_1[] = {
	&mercury_data_mdbcomp__trace_counts__du_functor_desc_trace_count_file_type_0_1

};

const MR_DuFunctorDescPtr mercury_data_mdbcomp__trace_counts__du_stag_ordered_trace_count_file_type_0_2[] = {
	&mercury_data_mdbcomp__trace_counts__du_functor_desc_trace_count_file_type_0_2

};

const MR_DuPtagLayout mercury_data_mdbcomp__trace_counts__du_ptag_ordered_trace_count_file_type_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_mdbcomp__trace_counts__du_stag_ordered_trace_count_file_type_0_0 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_mdbcomp__trace_counts__du_stag_ordered_trace_count_file_type_0_1 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_mdbcomp__trace_counts__du_stag_ordered_trace_count_file_type_0_2 }

};

const MR_DuFunctorDescPtr mercury_data_mdbcomp__trace_counts__du_name_ordered_trace_count_file_type_0[] = {
	&mercury_data_mdbcomp__trace_counts__du_functor_desc_trace_count_file_type_0_2,
	&mercury_data_mdbcomp__trace_counts__du_functor_desc_trace_count_file_type_0_0,
	&mercury_data_mdbcomp__trace_counts__du_functor_desc_trace_count_file_type_0_1
};

const MR_Integer mercury_data_mdbcomp__trace_counts__functor_number_map_trace_count_file_type_0[] = {
	1,
	2,
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_mdbcomp__trace_counts__type_ctor_info_trace_count_file_type_0 = {
	0,
	13,
	3,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___mdbcomp__trace_counts__trace_count_file_type_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___mdbcomp__trace_counts__trace_count_file_type_0_0)),
	"mdbcomp.trace_counts",
	"trace_count_file_type",
	{ (void *)mercury_data_mdbcomp__trace_counts__du_name_ordered_trace_count_file_type_0 },
	{ (void *)mercury_data_mdbcomp__trace_counts__du_ptag_ordered_trace_count_file_type_0 },
	3,
	4,
	mercury_data_mdbcomp__trace_counts__functor_number_map_trace_count_file_type_0
};

static const MR_NotagFunctorDesc mercury_data_mdbcomp__trace_counts__notag_functor_desc_trace_count_syntax_error_0 = {
	"trace_count_syntax_error",
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_string_0,
	NULL
};

const MR_Integer mercury_data_mdbcomp__trace_counts__functor_number_map_trace_count_syntax_error_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_mdbcomp__trace_counts__type_ctor_info_trace_count_syntax_error_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_NOTAG_GROUND,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___mdbcomp__trace_counts__trace_count_syntax_error_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___mdbcomp__trace_counts__trace_count_syntax_error_0_0)),
	"mdbcomp.trace_counts",
	"trace_count_syntax_error",
	{ (void *)&mercury_data_mdbcomp__trace_counts__notag_functor_desc_trace_count_syntax_error_0 },
	{ (void *)&mercury_data_mdbcomp__trace_counts__notag_functor_desc_trace_count_syntax_error_0 },
	1,
	4,
	mercury_data_mdbcomp__trace_counts__functor_number_map_trace_count_syntax_error_0
};

const MR_TypeCtorInfo_Struct mercury_data_mdbcomp__trace_counts__type_ctor_info_trace_counts_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_EQUIV_GROUND,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___mdbcomp__trace_counts__trace_counts_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___mdbcomp__trace_counts__trace_counts_0_0)),
	"mdbcomp.trace_counts",
	"trace_counts",
	{ 0 },
	{ (void *)&mercury_data_tree234__ti_tree234_2mdbcomp__trace_counts__type_ctor_info_proc_label_in_context_0tree234__ti_tree234_2mdbcomp__trace_counts__type_ctor_info_path_port_0mdbcomp__trace_counts__type_ctor_info_line_no_and_count_0 },
	-1,
	0,
	NULL
};


static const MR_UserClosureId
mercury_data__closure_layout__mdbcomp__trace_counts__write_proc_label_and_file_trace_counts_8_0_2 = {
{
MR_PREDICATE,
"mdbcomp.trace_counts",
"mdbcomp.trace_counts",
"write_path_port_count",
4,
0
},
"mdbcomp.trace_counts",
"trace_counts.m",
839,
"d1;c13;"
};

static const MR_UserClosureId
mercury_data__closure_layout__mdbcomp__trace_counts__write_proc_label_and_file_trace_counts_8_0_1 = {
{
MR_PREDICATE,
"mdbcomp.trace_counts",
"mdbcomp.trace_counts",
"lambda_trace_counts_m_847",
2,
0
},
"mdbcomp.trace_counts",
"trace_counts.m",
847,
"d1;c5;d1;c2;"
};

static const MR_UserClosureId
mercury_data__closure_layout__mdbcomp__trace_counts__read_trace_counts_from_cur_stream_3_0_1 = {
{
MR_PREDICATE,
"mdbcomp.trace_counts",
"mdbcomp.trace_counts",
"read_trace_counts_setup",
4,
0
},
"mdbcomp.trace_counts",
"trace_counts.m",
444,
"d1;c5;d1;c3;t;c1;"
};

static const MR_UserClosureId
mercury_data__closure_layout__mdbcomp__trace_counts__diff_trace_counts_acc_5_0_1 = {
{
MR_PREDICATE,
"mdbcomp.trace_counts",
"mdbcomp.trace_counts",
"diff_proc_counts_acc",
5,
0
},
"mdbcomp.trace_counts",
"trace_counts.m",
255,
"d1;c4;"
};

static const MR_UserClosureId
mercury_data__closure_layout__mdbcomp__trace_counts__sum_proc_trace_counts_3_0_1 = {
{
MR_FUNCTION,
"mdbcomp.trace_counts",
"mdbcomp.trace_counts",
"sum_counts_on_line",
3,
0
},
"mdbcomp.trace_counts",
"trace_counts.m",
215,
"d1;c5;"
};

static const MR_UserClosureId
mercury_data__closure_layout__mdbcomp__trace_counts__restrict_trace_counts_to_module_3_0_1 = {
{
MR_PREDICATE,
"mdbcomp.trace_counts",
"mdbcomp.trace_counts",
"restrict_trace_counts_2",
5,
0
},
"mdbcomp.trace_counts",
"trace_counts.m",
923,
"d1;c4;"
};

static const MR_UserClosureId
mercury_data__closure_layout__mdbcomp__trace_counts__write_trace_counts_to_file_6_0_1 = {
{
MR_PREDICATE,
"mdbcomp.trace_counts",
"mdbcomp.trace_counts",
"write_proc_label_and_file_trace_counts",
8,
0
},
"mdbcomp.trace_counts",
"trace_counts.m",
810,
"d1;c9;"
};

static const MR_UserClosureId
mercury_data__closure_layout__mdbcomp__trace_counts__read_trace_counts_4_0_1 = {
{
MR_PREDICATE,
"mdbcomp.trace_counts",
"mdbcomp.trace_counts",
"read_trace_counts_from_cur_stream",
3,
0
},
"mdbcomp.trace_counts",
"trace_counts.m",
414,
"d1;c7;d1;c4;t;c1;"
};

static const MR_UserClosureId
mercury_data__closure_layout__mdbcomp__trace_counts__diff_trace_counts_3_0_1 = {
{
MR_PREDICATE,
"mdbcomp.trace_counts",
"mdbcomp.trace_counts",
"diff_trace_counts_acc",
5,
0
},
"mdbcomp.trace_counts",
"trace_counts.m",
235,
"d1;c4;"
};

static const MR_UserClosureId
mercury_data__closure_layout__mdbcomp__trace_counts__sum_trace_counts_3_0_1 = {
{
MR_PREDICATE,
"mdbcomp.trace_counts",
"mdbcomp.trace_counts",
"sum_proc_trace_counts",
3,
0
},
"mdbcomp.trace_counts",
"trace_counts.m",
209,
"d1;c4;"
};

static const MR_UserClosureId
mercury_data__closure_layout__mdbcomp__trace_counts__summarize_trace_counts_list_2_0_1 = {
{
MR_PREDICATE,
"mdbcomp.trace_counts",
"mdbcomp.trace_counts",
"sum_trace_counts",
3,
0
},
"mdbcomp.trace_counts",
"trace_counts.m",
205,
"d1;c3;e;c1;"
};


MR_decl_entry(set__list_to_set_2_0);
MR_decl_entry(set__insert_3_0);
MR_decl_entry(set__to_sorted_list_2_0);

MR_BEGIN_MODULE(mdbcomp__trace_counts_module0)
	MR_init_entry1(fn__mdbcomp__trace_counts__insert_into_list_as_set_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__mdbcomp__trace_counts__insert_into_list_as_set_2_0);
	MR_init_label2(fn__mdbcomp__trace_counts__insert_into_list_as_set_2_0,2,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'insert_into_list_as_set'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__mdbcomp__trace_counts__insert_into_list_as_set_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r1;
	MR_np_call_localret_ent(set__list_to_set_2_0,
		fn__mdbcomp__trace_counts__insert_into_list_as_set_2_0_i2);
MR_def_label(fn__mdbcomp__trace_counts__insert_into_list_as_set_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(1);
	}
	MR_np_call_localret_ent(set__insert_3_0,
		fn__mdbcomp__trace_counts__insert_into_list_as_set_2_0_i3);
MR_def_label(fn__mdbcomp__trace_counts__insert_into_list_as_set_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(set__to_sorted_list_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__list__sort_and_remove_dups_1_0);
MR_decl_entry(fn__f_108_105_115_116_95_95_43_43_2_0);

MR_BEGIN_MODULE(mdbcomp__trace_counts_module1)
	MR_init_entry1(fn__mdbcomp__trace_counts__sum_trace_count_file_type_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__mdbcomp__trace_counts__sum_trace_count_file_type_2_0);
	MR_init_label10(fn__mdbcomp__trace_counts__sum_trace_count_file_type_2_0,8,10,22,29,32,34,35,36,37,41)
	MR_init_label5(fn__mdbcomp__trace_counts__sum_trace_count_file_type_2_0,44,46,49,50,51)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'sum_trace_count_file_type'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__mdbcomp__trace_counts__sum_trace_count_file_type_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	if (MR_PTAG_TEST(MR_r1,1)) {
		MR_GOTO_LAB(fn__mdbcomp__trace_counts__sum_trace_count_file_type_2_0_i41);
	}
	if (MR_PTAG_TEST(MR_r1,0)) {
		MR_GOTO_LAB(fn__mdbcomp__trace_counts__sum_trace_count_file_type_2_0_i22);
	}
	if (MR_PTAG_TEST(MR_r2,1)) {
		MR_GOTO_LAB(fn__mdbcomp__trace_counts__sum_trace_count_file_type_2_0_i34);
	}
	if (MR_PTAG_TEST(MR_r2,0)) {
		MR_GOTO_LAB(fn__mdbcomp__trace_counts__sum_trace_count_file_type_2_0_i10);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r2;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_r1;
	MR_tfield(1, MR_r2, 1) = MR_tempr1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__trace_counts, trace_count_file_type);
	}
	MR_np_call_localret_ent(fn__list__sort_and_remove_dups_1_0,
		fn__mdbcomp__trace_counts__sum_trace_count_file_type_2_0_i8);
MR_def_label(fn__mdbcomp__trace_counts__sum_trace_count_file_type_2_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = (MR_Integer) 2;
	MR_tfield(1, MR_r2, 1) = MR_r1;
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(4);
MR_def_label(fn__mdbcomp__trace_counts__sum_trace_count_file_type_2_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r2;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_r1;
	MR_tfield(1, MR_r2, 1) = MR_tempr1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__trace_counts, trace_count_file_type);
	}
	MR_np_call_localret_ent(fn__list__sort_and_remove_dups_1_0,
		fn__mdbcomp__trace_counts__sum_trace_count_file_type_2_0_i32);
MR_def_label(fn__mdbcomp__trace_counts__sum_trace_count_file_type_2_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TEST(MR_r2,1)) {
		MR_GOTO_LAB(fn__mdbcomp__trace_counts__sum_trace_count_file_type_2_0_i34);
	}
	if (MR_PTAG_TEST(MR_r2,0)) {
		MR_GOTO_LAB(fn__mdbcomp__trace_counts__sum_trace_count_file_type_2_0_i29);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r2;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_r1;
	MR_tfield(1, MR_r2, 1) = MR_tempr1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__trace_counts, trace_count_file_type);
	}
	MR_np_call_localret_ent(fn__list__sort_and_remove_dups_1_0,
		fn__mdbcomp__trace_counts__sum_trace_count_file_type_2_0_i32);
MR_def_label(fn__mdbcomp__trace_counts__sum_trace_count_file_type_2_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r2;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_r1;
	MR_tfield(1, MR_r2, 1) = MR_tempr1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__trace_counts, trace_count_file_type);
	}
	MR_np_call_localret_ent(fn__list__sort_and_remove_dups_1_0,
		fn__mdbcomp__trace_counts__sum_trace_count_file_type_2_0_i32);
MR_def_label(fn__mdbcomp__trace_counts__sum_trace_count_file_type_2_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = (MR_Integer) 2;
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(4);
	}
MR_def_label(fn__mdbcomp__trace_counts__sum_trace_count_file_type_2_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = ((MR_Integer) MR_tfield(1, MR_r2, 0) + (MR_Integer) 1);
	MR_sv(3) = (MR_Word) MR_CTOR0_ADDR(mdbcomp__trace_counts, trace_count_file_type);
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tfield(1, MR_r2, 1);
	MR_np_call_localret_ent(set__list_to_set_2_0,
		fn__mdbcomp__trace_counts__sum_trace_count_file_type_2_0_i35);
MR_def_label(fn__mdbcomp__trace_counts__sum_trace_count_file_type_2_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(1);
	}
	MR_np_call_localret_ent(set__insert_3_0,
		fn__mdbcomp__trace_counts__sum_trace_count_file_type_2_0_i36);
MR_def_label(fn__mdbcomp__trace_counts__sum_trace_count_file_type_2_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(set__to_sorted_list_2_0,
		fn__mdbcomp__trace_counts__sum_trace_count_file_type_2_0_i37);
MR_def_label(fn__mdbcomp__trace_counts__sum_trace_count_file_type_2_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(4);
	}
MR_def_label(fn__mdbcomp__trace_counts__sum_trace_count_file_type_2_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TEST(MR_r2,1)) {
		MR_GOTO_LAB(fn__mdbcomp__trace_counts__sum_trace_count_file_type_2_0_i49);
	}
	if (MR_PTAG_TEST(MR_r2,0)) {
		MR_GOTO_LAB(fn__mdbcomp__trace_counts__sum_trace_count_file_type_2_0_i46);
	}
	MR_sv(1) = ((MR_Integer) MR_tfield(1, MR_r1, 0) + (MR_Integer) 1);
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__trace_counts, trace_count_file_type);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tfield(1, MR_tempr1, 1);
	MR_r3 = MR_tempr2;
	}
	MR_np_call_localret_ent(fn__mdbcomp__trace_counts__insert_into_list_as_set_2_0,
		fn__mdbcomp__trace_counts__sum_trace_count_file_type_2_0_i44);
MR_def_label(fn__mdbcomp__trace_counts__sum_trace_count_file_type_2_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(4);
	}
MR_def_label(fn__mdbcomp__trace_counts__sum_trace_count_file_type_2_0,46)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = ((MR_Integer) MR_tfield(1, MR_r1, 0) + (MR_Integer) 1);
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__trace_counts, trace_count_file_type);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tfield(1, MR_tempr1, 1);
	MR_r3 = MR_tempr2;
	}
	MR_np_call_localret_ent(fn__mdbcomp__trace_counts__insert_into_list_as_set_2_0,
		fn__mdbcomp__trace_counts__sum_trace_count_file_type_2_0_i51);
MR_def_label(fn__mdbcomp__trace_counts__sum_trace_count_file_type_2_0,49)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = ((MR_Integer) MR_tfield(1, MR_r1, 0) + (MR_Integer) MR_tfield(1, MR_r2, 0));
	MR_sv(2) = (MR_Word) MR_CTOR0_ADDR(mdbcomp__trace_counts, trace_count_file_type);
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tfield(1, MR_tempr1, 1);
	MR_r3 = MR_tfield(1, MR_tempr2, 1);
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		fn__mdbcomp__trace_counts__sum_trace_count_file_type_2_0_i50);
MR_def_label(fn__mdbcomp__trace_counts__sum_trace_count_file_type_2_0,50)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__list__sort_and_remove_dups_1_0,
		fn__mdbcomp__trace_counts__sum_trace_count_file_type_2_0_i51);
MR_def_label(fn__mdbcomp__trace_counts__sum_trace_count_file_type_2_0,51)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(4);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdbcomp__trace_counts_module2)
	MR_init_entry1(fn__mdbcomp__trace_counts__make_path_port_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__mdbcomp__trace_counts__make_path_port_2_0);
	MR_init_label10(fn__mdbcomp__trace_counts__make_path_port_2_0,3,9,11,13,21,23,25,31,35,37)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'make_path_port'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__mdbcomp__trace_counts__make_path_port_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_r2,
		MR_LABEL_AP(fn__mdbcomp__trace_counts__make_path_port_2_0_i3) MR_AND
		MR_LABEL_AP(fn__mdbcomp__trace_counts__make_path_port_2_0_i11) MR_AND
		MR_LABEL_AP(fn__mdbcomp__trace_counts__make_path_port_2_0_i31) MR_AND
		MR_LABEL_AP(fn__mdbcomp__trace_counts__make_path_port_2_0_i13) MR_AND
		MR_LABEL_AP(fn__mdbcomp__trace_counts__make_path_port_2_0_i35) MR_AND
		MR_LABEL_AP(fn__mdbcomp__trace_counts__make_path_port_2_0_i9) MR_AND
		MR_LABEL_AP(fn__mdbcomp__trace_counts__make_path_port_2_0_i35) MR_AND
		MR_LABEL_AP(fn__mdbcomp__trace_counts__make_path_port_2_0_i35) MR_AND
		MR_LABEL_AP(fn__mdbcomp__trace_counts__make_path_port_2_0_i35) MR_AND
		MR_LABEL_AP(fn__mdbcomp__trace_counts__make_path_port_2_0_i21) MR_AND
		MR_LABEL_AP(fn__mdbcomp__trace_counts__make_path_port_2_0_i25) MR_AND
		MR_LABEL_AP(fn__mdbcomp__trace_counts__make_path_port_2_0_i23) MR_AND
		MR_LABEL_AP(fn__mdbcomp__trace_counts__make_path_port_2_0_i35) MR_AND
		MR_LABEL_AP(fn__mdbcomp__trace_counts__make_path_port_2_0_i35) MR_AND
		MR_LABEL_AP(fn__mdbcomp__trace_counts__make_path_port_2_0_i35) MR_AND
		MR_LABEL_AP(fn__mdbcomp__trace_counts__make_path_port_2_0_i35) MR_AND
		MR_LABEL_AP(fn__mdbcomp__trace_counts__make_path_port_2_0_i35) MR_AND
		MR_LABEL_AP(fn__mdbcomp__trace_counts__make_path_port_2_0_i37));
MR_def_label(fn__mdbcomp__trace_counts__make_path_port_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_proceed();
MR_def_label(fn__mdbcomp__trace_counts__make_path_port_2_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,1);
	MR_proceed();
MR_def_label(fn__mdbcomp__trace_counts__make_path_port_2_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,2);
	MR_proceed();
MR_def_label(fn__mdbcomp__trace_counts__make_path_port_2_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,3);
	MR_proceed();
MR_def_label(fn__mdbcomp__trace_counts__make_path_port_2_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 2, (MR_Integer) 2);
	MR_tfield(2, MR_r2, 0) = (MR_Integer) 9;
	MR_tfield(2, MR_r2, 1) = MR_r1;
	MR_r1 = MR_r2;
	MR_proceed();
MR_def_label(fn__mdbcomp__trace_counts__make_path_port_2_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 2, (MR_Integer) 2);
	MR_tfield(2, MR_r2, 0) = (MR_Integer) 11;
	MR_tfield(2, MR_r2, 1) = MR_r1;
	MR_r1 = MR_r2;
	MR_proceed();
MR_def_label(fn__mdbcomp__trace_counts__make_path_port_2_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 2, (MR_Integer) 2);
	MR_tfield(2, MR_r2, 0) = (MR_Integer) 10;
	MR_tfield(2, MR_r2, 1) = MR_r1;
	MR_r1 = MR_r2;
	MR_proceed();
MR_def_label(fn__mdbcomp__trace_counts__make_path_port_2_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,4);
	MR_proceed();
MR_def_label(fn__mdbcomp__trace_counts__make_path_port_2_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r2, 0) = MR_r1;
	MR_r1 = MR_r2;
	MR_proceed();
MR_def_label(fn__mdbcomp__trace_counts__make_path_port_2_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,5);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__map__init_0_0);
MR_decl_entry(list__foldl_4_0);

MR_BEGIN_MODULE(mdbcomp__trace_counts_module3)
	MR_init_entry1(mdbcomp__trace_counts__summarize_trace_counts_list_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdbcomp__trace_counts__summarize_trace_counts_list_2_0);
	MR_init_label2(mdbcomp__trace_counts__summarize_trace_counts_list_2_0,21,6)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'summarize_trace_counts_list'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__mdbcomp__trace_counts__summarize_trace_counts_list_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(mdbcomp__trace_counts__summarize_trace_counts_list_2_0_i21);
	}
	MR_r2 = MR_tfield(1, MR_r1, 1);
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(mdbcomp__trace_counts__summarize_trace_counts_list_2_0_i21);
	}
	MR_r1 = MR_tfield(1, MR_r1, 0);
	MR_proceed();
MR_def_label(mdbcomp__trace_counts__summarize_trace_counts_list_2_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = (MR_Word) MR_CTOR_ADDR(tree234, tree234, 2);
	MR_sv(3) = (MR_Word) MR_TAG_COMMON(0,1,0);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__trace_counts, proc_label_in_context);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(fn__map__init_0_0,
		mdbcomp__trace_counts__summarize_trace_counts_list_2_0_i6);
MR_def_label(mdbcomp__trace_counts__summarize_trace_counts_list_2_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,1,1);
	MR_r2 = MR_r1;
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,3,0);
	MR_r4 = MR_sv(1);
	MR_r5 = MR_tempr1;
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(list__foldl_4_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(map__union_4_1);

MR_BEGIN_MODULE(mdbcomp__trace_counts_module4)
	MR_init_entry1(mdbcomp__trace_counts__sum_trace_counts_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdbcomp__trace_counts__sum_trace_counts_3_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'sum_trace_counts'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__mdbcomp__trace_counts__sum_trace_counts_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,1,0);
	MR_tempr2 = MR_r2;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__trace_counts, proc_label_in_context);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,3,1);
	MR_r4 = MR_tempr1;
	MR_r5 = MR_tempr2;
	MR_np_tailcall_ent(map__union_4_1);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(map__foldl_4_0);

MR_BEGIN_MODULE(mdbcomp__trace_counts_module5)
	MR_init_entry1(mdbcomp__trace_counts__diff_trace_counts_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdbcomp__trace_counts__diff_trace_counts_3_0);
	MR_init_label1(mdbcomp__trace_counts__diff_trace_counts_3_0,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'diff_trace_counts'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__mdbcomp__trace_counts__diff_trace_counts_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_sv(2) = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(4,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(mdbcomp__trace_counts__diff_trace_counts_acc_5_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_r2;
	MR_sv(1) = MR_r1;
	MR_sv(3) = (MR_Word) MR_CTOR_ADDR(tree234, tree234, 2);
	MR_sv(4) = (MR_Word) MR_TAG_COMMON(0,1,0);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__trace_counts, proc_label_in_context);
	MR_r2 = MR_sv(4);
	}
	MR_np_call_localret_ent(fn__map__init_0_0,
		mdbcomp__trace_counts__diff_trace_counts_3_0_i4);
MR_def_label(mdbcomp__trace_counts__diff_trace_counts_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__trace_counts, proc_label_in_context);
	MR_r2 = MR_sv(4);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,1,1);
	MR_r4 = MR_sv(2);
	MR_r5 = MR_sv(1);
	MR_r6 = MR_tempr1;
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(map__foldl_4_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(string__remove_suffix_3_0);
MR_decl_entry(fn__f_115_116_114_105_110_103_95_95_43_43_2_0);
MR_decl_entry(io__call_system_4_0);
MR_decl_entry(io__open_input_4_0);
MR_decl_entry(io__set_input_stream_4_0);
MR_decl_entry(io__read_line_as_string_3_0);
MR_decl_entry(fn__string__rstrip_1_0);
extern const MR_TypeCtorInfo_Struct mercury_data_io__type_ctor_info_state_0;
MR_decl_entry(builtin__promise_only_solution_io_4_0);
MR_decl_entry(io__close_input_3_0);

MR_BEGIN_MODULE(mdbcomp__trace_counts_module6)
	MR_init_entry1(mdbcomp__trace_counts__read_trace_counts_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdbcomp__trace_counts__read_trace_counts_4_0);
	MR_init_label10(mdbcomp__trace_counts__read_trace_counts_4_0,3,5,6,7,2,9,11,13,14,18)
	MR_init_label7(mdbcomp__trace_counts__read_trace_counts_4_0,20,16,23,24,10,27,28)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'read_trace_counts'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__mdbcomp__trace_counts__read_trace_counts_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_r2 = (MR_Word) MR_string_const(".gz", 3);
	MR_np_call_localret_ent(string__remove_suffix_3_0,
		mdbcomp__trace_counts__read_trace_counts_4_0_i3);
MR_def_label(mdbcomp__trace_counts__read_trace_counts_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(mdbcomp__trace_counts__read_trace_counts_4_0_i2);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r2;
	MR_r1 = (MR_Word) MR_string_const("gunzip ", 7);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		mdbcomp__trace_counts__read_trace_counts_4_0_i5);
MR_def_label(mdbcomp__trace_counts__read_trace_counts_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__call_system_4_0,
		mdbcomp__trace_counts__read_trace_counts_4_0_i6);
MR_def_label(mdbcomp__trace_counts__read_trace_counts_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("gzip ", 5);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		mdbcomp__trace_counts__read_trace_counts_4_0_i7);
MR_def_label(mdbcomp__trace_counts__read_trace_counts_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(io__open_input_4_0,
		mdbcomp__trace_counts__read_trace_counts_4_0_i9);
MR_def_label(mdbcomp__trace_counts__read_trace_counts_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_sv(2) = (MR_Word) MR_string_const("", 0);
	MR_np_call_localret_ent(io__open_input_4_0,
		mdbcomp__trace_counts__read_trace_counts_4_0_i9);
MR_def_label(mdbcomp__trace_counts__read_trace_counts_4_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,1)) {
		MR_GOTO_LAB(mdbcomp__trace_counts__read_trace_counts_4_0_i11);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_r3 = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr1, 1) = MR_tfield(1, MR_r1, 0);
	MR_r1 = MR_tempr1;
	MR_GOTO_LAB(mdbcomp__trace_counts__read_trace_counts_4_0_i10);
	}
MR_def_label(mdbcomp__trace_counts__read_trace_counts_4_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_tfield(0, MR_r1, 0);
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(io__set_input_stream_4_0,
		mdbcomp__trace_counts__read_trace_counts_4_0_i13);
MR_def_label(mdbcomp__trace_counts__read_trace_counts_4_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(io__read_line_as_string_3_0,
		mdbcomp__trace_counts__read_trace_counts_4_0_i14);
MR_def_label(mdbcomp__trace_counts__read_trace_counts_4_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,1)) {
		MR_GOTO_LAB(mdbcomp__trace_counts__read_trace_counts_4_0_i16);
	}
	MR_r1 = MR_tfield(1, MR_r1, 0);
	MR_np_call_localret_ent(fn__string__rstrip_1_0,
		mdbcomp__trace_counts__read_trace_counts_4_0_i18);
MR_def_label(mdbcomp__trace_counts__read_trace_counts_4_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("Mercury trace counts file", 25)) != 0)) {
		MR_GOTO_LAB(mdbcomp__trace_counts__read_trace_counts_4_0_i16);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__trace_counts, read_trace_counts_result);
	MR_r2 = (MR_Word) MR_IO_CTOR_ADDR;
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,3,2);
	MR_np_call_localret_ent(builtin__promise_only_solution_io_4_0,
		mdbcomp__trace_counts__read_trace_counts_4_0_i20);
MR_def_label(mdbcomp__trace_counts__read_trace_counts_4_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(io__set_input_stream_4_0,
		mdbcomp__trace_counts__read_trace_counts_4_0_i23);
MR_def_label(mdbcomp__trace_counts__read_trace_counts_4_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = (MR_Word) MR_TAG_COMMON(1,5,0);
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(io__set_input_stream_4_0,
		mdbcomp__trace_counts__read_trace_counts_4_0_i23);
MR_def_label(mdbcomp__trace_counts__read_trace_counts_4_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(io__close_input_3_0,
		mdbcomp__trace_counts__read_trace_counts_4_0_i24);
MR_def_label(mdbcomp__trace_counts__read_trace_counts_4_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
MR_def_label(mdbcomp__trace_counts__read_trace_counts_4_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_sv(2), MR_string_const("", 0)) == 0)) {
		MR_GOTO_LAB(mdbcomp__trace_counts__read_trace_counts_4_0_i28);
	}
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(io__call_system_4_0,
		mdbcomp__trace_counts__read_trace_counts_4_0_i27);
MR_def_label(mdbcomp__trace_counts__read_trace_counts_4_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
MR_def_label(mdbcomp__trace_counts__read_trace_counts_4_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(4);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(io__read_line_as_string_4_0);
MR_decl_entry(io__write_string_3_0);
MR_decl_entry(io__nl_2_0);
MR_decl_entry(fn__io__error_message_1_0);
MR_decl_entry(fn__string__string_1_0);

MR_BEGIN_MODULE(mdbcomp__trace_counts_module7)
	MR_init_entry1(mdbcomp__trace_counts__read_trace_counts_list_stream_8_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdbcomp__trace_counts__read_trace_counts_list_stream_8_0);
	MR_init_label10(mdbcomp__trace_counts__read_trace_counts_list_stream_8_0,89,2,13,14,15,20,21,18,22,37)
	MR_init_label10(mdbcomp__trace_counts__read_trace_counts_list_stream_8_0,40,41,50,51,52,24,25,26,27,58)
	MR_init_label10(mdbcomp__trace_counts__read_trace_counts_list_stream_8_0,44,45,46,47,48,30,31,32,33,34)
	MR_init_label6(mdbcomp__trace_counts__read_trace_counts_list_stream_8_0,6,7,8,9,10,11)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'read_trace_counts_list_stream'/8 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mdbcomp__trace_counts__read_trace_counts_list_stream_8_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
MR_def_label(mdbcomp__trace_counts__read_trace_counts_list_stream_8_0,89)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r5;
	MR_sv(5) = MR_tempr1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(io__read_line_as_string_4_0,
		mdbcomp__trace_counts__read_trace_counts_list_stream_8_0_i2);
MR_def_label(mdbcomp__trace_counts__read_trace_counts_list_stream_8_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TEST(MR_r1,2)) {
		MR_GOTO_LAB(mdbcomp__trace_counts__read_trace_counts_list_stream_8_0_i6);
	}
	if (MR_PTAG_TEST(MR_r1,1)) {
		MR_GOTO_LAB(mdbcomp__trace_counts__read_trace_counts_list_stream_8_0_i13);
	}
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r1, 0) = MR_sv(2);
	MR_tfield(0, MR_r1, 1) = MR_sv(3);
	MR_decr_sp_and_return(7);
MR_def_label(mdbcomp__trace_counts__read_trace_counts_list_stream_8_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(1, MR_r1, 0);
	MR_np_call_localret_ent(fn__string__rstrip_1_0,
		mdbcomp__trace_counts__read_trace_counts_list_stream_8_0_i14);
MR_def_label(mdbcomp__trace_counts__read_trace_counts_list_stream_8_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("", 0)) != 0)) {
		MR_GOTO_LAB(mdbcomp__trace_counts__read_trace_counts_list_stream_8_0_i15);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(4);
	MR_r5 = MR_sv(5);
	MR_succip_word = MR_sv(7);
	MR_GOTO_LAB(mdbcomp__trace_counts__read_trace_counts_list_stream_8_0_i89);
MR_def_label(mdbcomp__trace_counts__read_trace_counts_list_stream_8_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_EQ(MR_sv(1),0)) {
		MR_GOTO_LAB(mdbcomp__trace_counts__read_trace_counts_list_stream_8_0_i18);
	}
	MR_sv(6) = MR_r1;
	MR_np_call_localret_ent(io__write_string_3_0,
		mdbcomp__trace_counts__read_trace_counts_list_stream_8_0_i20);
MR_def_label(mdbcomp__trace_counts__read_trace_counts_list_stream_8_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__nl_2_0,
		mdbcomp__trace_counts__read_trace_counts_list_stream_8_0_i21);
MR_def_label(mdbcomp__trace_counts__read_trace_counts_list_stream_8_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(6);
MR_def_label(mdbcomp__trace_counts__read_trace_counts_list_stream_8_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_np_call_localret_ent(mdbcomp__trace_counts__read_trace_counts_4_0,
		mdbcomp__trace_counts__read_trace_counts_list_stream_8_0_i22);
MR_def_label(mdbcomp__trace_counts__read_trace_counts_list_stream_8_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r1),
		MR_LABEL_AP(mdbcomp__trace_counts__read_trace_counts_list_stream_8_0_i37) MR_AND
		MR_LABEL_AP(mdbcomp__trace_counts__read_trace_counts_list_stream_8_0_i50) MR_AND
		MR_LABEL_AP(mdbcomp__trace_counts__read_trace_counts_list_stream_8_0_i24) MR_AND
		MR_LABEL_AP(mdbcomp__trace_counts__read_trace_counts_list_stream_8_0_i58));
MR_def_label(mdbcomp__trace_counts__read_trace_counts_list_stream_8_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_tfield(0, MR_r1, 1);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(3);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_sv(3) = MR_tfield(0, MR_r1, 0);
	MR_r1 = MR_tempr2;
	}
	MR_np_call_localret_ent(mdbcomp__trace_counts__summarize_trace_counts_list_2_0,
		mdbcomp__trace_counts__read_trace_counts_list_stream_8_0_i40);
MR_def_label(mdbcomp__trace_counts__read_trace_counts_list_stream_8_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(3);
	}
	MR_np_call_localret_ent(fn__mdbcomp__trace_counts__sum_trace_count_file_type_2_0,
		mdbcomp__trace_counts__read_trace_counts_list_stream_8_0_i41);
MR_def_label(mdbcomp__trace_counts__read_trace_counts_list_stream_8_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(4);
	MR_r5 = MR_sv(5);
	MR_succip_word = MR_sv(7);
	MR_GOTO_LAB(mdbcomp__trace_counts__read_trace_counts_list_stream_8_0_i89);
	}
MR_def_label(mdbcomp__trace_counts__read_trace_counts_list_stream_8_0,50)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("\': ", 3);
	MR_r2 = MR_tfield(1, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		mdbcomp__trace_counts__read_trace_counts_list_stream_8_0_i51);
MR_def_label(mdbcomp__trace_counts__read_trace_counts_list_stream_8_0,51)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		mdbcomp__trace_counts__read_trace_counts_list_stream_8_0_i52);
MR_def_label(mdbcomp__trace_counts__read_trace_counts_list_stream_8_0,52)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("Syntax error in file \140", 22);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		mdbcomp__trace_counts__read_trace_counts_list_stream_8_0_i48);
MR_def_label(mdbcomp__trace_counts__read_trace_counts_list_stream_8_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("\': ", 3);
	MR_r2 = MR_tfield(2, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		mdbcomp__trace_counts__read_trace_counts_list_stream_8_0_i25);
MR_def_label(mdbcomp__trace_counts__read_trace_counts_list_stream_8_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		mdbcomp__trace_counts__read_trace_counts_list_stream_8_0_i26);
MR_def_label(mdbcomp__trace_counts__read_trace_counts_list_stream_8_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("from file \140", 11);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		mdbcomp__trace_counts__read_trace_counts_list_stream_8_0_i27);
MR_def_label(mdbcomp__trace_counts__read_trace_counts_list_stream_8_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("Error reading trace counts ", 27);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		mdbcomp__trace_counts__read_trace_counts_list_stream_8_0_i11);
MR_def_label(mdbcomp__trace_counts__read_trace_counts_list_stream_8_0,58)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_tfield(3, MR_r1, 0),0)) {
		MR_GOTO_LAB(mdbcomp__trace_counts__read_trace_counts_list_stream_8_0_i30);
	}
	MR_r1 = MR_tfield(3, MR_r1, 1);
	MR_np_call_localret_ent(fn__io__error_message_1_0,
		mdbcomp__trace_counts__read_trace_counts_list_stream_8_0_i44);
MR_def_label(mdbcomp__trace_counts__read_trace_counts_list_stream_8_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("\': ", 3);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		mdbcomp__trace_counts__read_trace_counts_list_stream_8_0_i45);
MR_def_label(mdbcomp__trace_counts__read_trace_counts_list_stream_8_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		mdbcomp__trace_counts__read_trace_counts_list_stream_8_0_i46);
MR_def_label(mdbcomp__trace_counts__read_trace_counts_list_stream_8_0,46)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("\140", 1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		mdbcomp__trace_counts__read_trace_counts_list_stream_8_0_i47);
MR_def_label(mdbcomp__trace_counts__read_trace_counts_list_stream_8_0,47)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("I/O error opening file ", 23);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		mdbcomp__trace_counts__read_trace_counts_list_stream_8_0_i48);
MR_def_label(mdbcomp__trace_counts__read_trace_counts_list_stream_8_0,48)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r2, 0) = MR_r1;
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(7);
MR_def_label(mdbcomp__trace_counts__read_trace_counts_list_stream_8_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(3, MR_r1, 1);
	MR_np_call_localret_ent(fn__io__error_message_1_0,
		mdbcomp__trace_counts__read_trace_counts_list_stream_8_0_i31);
MR_def_label(mdbcomp__trace_counts__read_trace_counts_list_stream_8_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("\': ", 3);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		mdbcomp__trace_counts__read_trace_counts_list_stream_8_0_i32);
MR_def_label(mdbcomp__trace_counts__read_trace_counts_list_stream_8_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		mdbcomp__trace_counts__read_trace_counts_list_stream_8_0_i33);
MR_def_label(mdbcomp__trace_counts__read_trace_counts_list_stream_8_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("\140", 1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		mdbcomp__trace_counts__read_trace_counts_list_stream_8_0_i34);
MR_def_label(mdbcomp__trace_counts__read_trace_counts_list_stream_8_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("I/O error reading file ", 23);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		mdbcomp__trace_counts__read_trace_counts_list_stream_8_0_i11);
MR_def_label(mdbcomp__trace_counts__read_trace_counts_list_stream_8_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(io, error);
	MR_r2 = MR_tfield(2, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(fn__string__string_1_0,
		mdbcomp__trace_counts__read_trace_counts_list_stream_8_0_i7);
MR_def_label(mdbcomp__trace_counts__read_trace_counts_list_stream_8_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("\': ", 3);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		mdbcomp__trace_counts__read_trace_counts_list_stream_8_0_i8);
MR_def_label(mdbcomp__trace_counts__read_trace_counts_list_stream_8_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		mdbcomp__trace_counts__read_trace_counts_list_stream_8_0_i9);
MR_def_label(mdbcomp__trace_counts__read_trace_counts_list_stream_8_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("\140", 1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		mdbcomp__trace_counts__read_trace_counts_list_stream_8_0_i10);
MR_def_label(mdbcomp__trace_counts__read_trace_counts_list_stream_8_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("IO error reading file ", 22);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		mdbcomp__trace_counts__read_trace_counts_list_stream_8_0_i11);
MR_def_label(mdbcomp__trace_counts__read_trace_counts_list_stream_8_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(7);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdbcomp__trace_counts_module8)
	MR_init_entry1(mdbcomp__trace_counts__read_trace_counts_list_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdbcomp__trace_counts__read_trace_counts_list_5_0);
	MR_init_label7(mdbcomp__trace_counts__read_trace_counts_list_5_0,2,5,6,7,8,4,12)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'read_trace_counts_list'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__mdbcomp__trace_counts__read_trace_counts_list_5_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(io__open_input_4_0,
		mdbcomp__trace_counts__read_trace_counts_list_5_0_i2);
MR_def_label(mdbcomp__trace_counts__read_trace_counts_list_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,1)) {
		MR_GOTO_LAB(mdbcomp__trace_counts__read_trace_counts_list_5_0_i4);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(io, error);
	MR_r2 = MR_tfield(1, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(fn__string__string_1_0,
		mdbcomp__trace_counts__read_trace_counts_list_5_0_i5);
MR_def_label(mdbcomp__trace_counts__read_trace_counts_list_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("\': ", 3);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		mdbcomp__trace_counts__read_trace_counts_list_5_0_i6);
MR_def_label(mdbcomp__trace_counts__read_trace_counts_list_5_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		mdbcomp__trace_counts__read_trace_counts_list_5_0_i7);
MR_def_label(mdbcomp__trace_counts__read_trace_counts_list_5_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("Error opening file \140", 20);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		mdbcomp__trace_counts__read_trace_counts_list_5_0_i8);
MR_def_label(mdbcomp__trace_counts__read_trace_counts_list_5_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(5);
	}
MR_def_label(mdbcomp__trace_counts__read_trace_counts_list_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_tfield(0, MR_r1, 0);
	MR_sv(4) = (MR_Word) MR_TAG_COMMON(1,6,0);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__trace_counts, proc_label_in_context);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,0);
	MR_np_call_localret_ent(fn__map__init_0_0,
		mdbcomp__trace_counts__read_trace_counts_list_5_0_i12);
MR_def_label(mdbcomp__trace_counts__read_trace_counts_list_5_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(2);
	MR_r5 = MR_sv(3);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(mdbcomp__trace_counts__read_trace_counts_list_stream_8_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdbcomp__trace_counts_module9)
	MR_init_entry1(mdbcomp__trace_counts__read_trace_counts_source_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdbcomp__trace_counts__read_trace_counts_source_4_0);
	MR_init_label10(mdbcomp__trace_counts__read_trace_counts_source_4_0,2,17,26,27,28,4,5,6,7,34)
	MR_init_label10(mdbcomp__trace_counts__read_trace_counts_source_4_0,20,21,22,23,24,10,11,12,13,14)
	MR_init_label1(mdbcomp__trace_counts__read_trace_counts_source_4_0,15)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'read_trace_counts_source'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__mdbcomp__trace_counts__read_trace_counts_source_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(mdbcomp__trace_counts__read_trace_counts_4_0,
		mdbcomp__trace_counts__read_trace_counts_source_4_0_i2);
MR_def_label(mdbcomp__trace_counts__read_trace_counts_source_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r1),
		MR_LABEL_AP(mdbcomp__trace_counts__read_trace_counts_source_4_0_i17) MR_AND
		MR_LABEL_AP(mdbcomp__trace_counts__read_trace_counts_source_4_0_i26) MR_AND
		MR_LABEL_AP(mdbcomp__trace_counts__read_trace_counts_source_4_0_i4) MR_AND
		MR_LABEL_AP(mdbcomp__trace_counts__read_trace_counts_source_4_0_i34));
MR_def_label(mdbcomp__trace_counts__read_trace_counts_source_4_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_tfield(0, MR_r1, 0);
	MR_tfield(0, MR_tempr1, 1) = MR_tfield(0, MR_r1, 1);
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(2);
	}
MR_def_label(mdbcomp__trace_counts__read_trace_counts_source_4_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("\': ", 3);
	MR_r2 = MR_tfield(1, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		mdbcomp__trace_counts__read_trace_counts_source_4_0_i27);
MR_def_label(mdbcomp__trace_counts__read_trace_counts_source_4_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		mdbcomp__trace_counts__read_trace_counts_source_4_0_i28);
MR_def_label(mdbcomp__trace_counts__read_trace_counts_source_4_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("Syntax error in file \140", 22);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		mdbcomp__trace_counts__read_trace_counts_source_4_0_i24);
MR_def_label(mdbcomp__trace_counts__read_trace_counts_source_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("\': ", 3);
	MR_r2 = MR_tfield(2, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		mdbcomp__trace_counts__read_trace_counts_source_4_0_i5);
MR_def_label(mdbcomp__trace_counts__read_trace_counts_source_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		mdbcomp__trace_counts__read_trace_counts_source_4_0_i6);
MR_def_label(mdbcomp__trace_counts__read_trace_counts_source_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("from file \140", 11);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		mdbcomp__trace_counts__read_trace_counts_source_4_0_i7);
MR_def_label(mdbcomp__trace_counts__read_trace_counts_source_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("Error reading trace counts ", 27);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		mdbcomp__trace_counts__read_trace_counts_source_4_0_i15);
MR_def_label(mdbcomp__trace_counts__read_trace_counts_source_4_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_tfield(3, MR_r1, 0),0)) {
		MR_GOTO_LAB(mdbcomp__trace_counts__read_trace_counts_source_4_0_i10);
	}
	MR_r1 = MR_tfield(3, MR_r1, 1);
	MR_np_call_localret_ent(fn__io__error_message_1_0,
		mdbcomp__trace_counts__read_trace_counts_source_4_0_i20);
MR_def_label(mdbcomp__trace_counts__read_trace_counts_source_4_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("\': ", 3);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		mdbcomp__trace_counts__read_trace_counts_source_4_0_i21);
MR_def_label(mdbcomp__trace_counts__read_trace_counts_source_4_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		mdbcomp__trace_counts__read_trace_counts_source_4_0_i22);
MR_def_label(mdbcomp__trace_counts__read_trace_counts_source_4_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("\140", 1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		mdbcomp__trace_counts__read_trace_counts_source_4_0_i23);
MR_def_label(mdbcomp__trace_counts__read_trace_counts_source_4_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("IO error opening file ", 22);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		mdbcomp__trace_counts__read_trace_counts_source_4_0_i24);
MR_def_label(mdbcomp__trace_counts__read_trace_counts_source_4_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r2, 0) = MR_r1;
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(2);
MR_def_label(mdbcomp__trace_counts__read_trace_counts_source_4_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(3, MR_r1, 1);
	MR_np_call_localret_ent(fn__io__error_message_1_0,
		mdbcomp__trace_counts__read_trace_counts_source_4_0_i11);
MR_def_label(mdbcomp__trace_counts__read_trace_counts_source_4_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("\': ", 3);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		mdbcomp__trace_counts__read_trace_counts_source_4_0_i12);
MR_def_label(mdbcomp__trace_counts__read_trace_counts_source_4_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		mdbcomp__trace_counts__read_trace_counts_source_4_0_i13);
MR_def_label(mdbcomp__trace_counts__read_trace_counts_source_4_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("\140", 1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		mdbcomp__trace_counts__read_trace_counts_source_4_0_i14);
MR_def_label(mdbcomp__trace_counts__read_trace_counts_source_4_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("IO error reading file ", 22);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		mdbcomp__trace_counts__read_trace_counts_source_4_0_i15);
MR_def_label(mdbcomp__trace_counts__read_trace_counts_source_4_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(2);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdbcomp__trace_counts_module10)
	MR_init_entry1(mdbcomp__trace_counts__read_and_union_trace_counts_2_9_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdbcomp__trace_counts__read_and_union_trace_counts_2_9_0);
	MR_init_label9(mdbcomp__trace_counts__read_and_union_trace_counts_2_9_0,27,3,5,6,7,8,10,14,15)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'read_and_union_trace_counts_2'/9 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mdbcomp__trace_counts__read_and_union_trace_counts_2_9_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
MR_def_label(mdbcomp__trace_counts__read_and_union_trace_counts_2_9_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(mdbcomp__trace_counts__read_and_union_trace_counts_2_9_0_i3);
	}
	MR_r1 = MR_r3;
	MR_r2 = MR_r4;
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_decr_sp_and_return(6);
MR_def_label(mdbcomp__trace_counts__read_and_union_trace_counts_2_9_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(mdbcomp__trace_counts__read_and_union_trace_counts_2_9_0_i5);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_r1 = MR_tfield(1, MR_r2, 0);
	MR_sv(5) = MR_tfield(1, MR_r2, 1);
	MR_np_call_localret_ent(mdbcomp__trace_counts__read_trace_counts_source_4_0,
		mdbcomp__trace_counts__read_and_union_trace_counts_2_9_0_i8);
MR_def_label(mdbcomp__trace_counts__read_and_union_trace_counts_2_9_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_tfield(1, MR_r2, 0);
	MR_sv(5) = MR_tfield(1, MR_r2, 1);
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(io__write_string_3_0,
		mdbcomp__trace_counts__read_and_union_trace_counts_2_9_0_i6);
MR_def_label(mdbcomp__trace_counts__read_and_union_trace_counts_2_9_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__nl_2_0,
		mdbcomp__trace_counts__read_and_union_trace_counts_2_9_0_i7);
MR_def_label(mdbcomp__trace_counts__read_and_union_trace_counts_2_9_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(mdbcomp__trace_counts__read_trace_counts_source_4_0,
		mdbcomp__trace_counts__read_and_union_trace_counts_2_9_0_i8);
MR_def_label(mdbcomp__trace_counts__read_and_union_trace_counts_2_9_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,1)) {
		MR_GOTO_LAB(mdbcomp__trace_counts__read_and_union_trace_counts_2_9_0_i10);
	}
	MR_tag_alloc_heap(MR_r3, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r3, 0) = MR_tfield(1, MR_r1, 0);
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(3);
	MR_decr_sp_and_return(6);
MR_def_label(mdbcomp__trace_counts__read_and_union_trace_counts_2_9_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_tfield(0, MR_r1, 1);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(3);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_sv(3) = MR_tfield(0, MR_r1, 0);
	MR_r1 = MR_tempr2;
	}
	MR_np_call_localret_ent(mdbcomp__trace_counts__summarize_trace_counts_list_2_0,
		mdbcomp__trace_counts__read_and_union_trace_counts_2_9_0_i14);
MR_def_label(mdbcomp__trace_counts__read_and_union_trace_counts_2_9_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(3);
	}
	MR_np_call_localret_ent(fn__mdbcomp__trace_counts__sum_trace_count_file_type_2_0,
		mdbcomp__trace_counts__read_and_union_trace_counts_2_9_0_i15);
MR_def_label(mdbcomp__trace_counts__read_and_union_trace_counts_2_9_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(2);
	MR_succip_word = MR_sv(6);
	MR_GOTO_LAB(mdbcomp__trace_counts__read_and_union_trace_counts_2_9_0_i27);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(require__error_1_0);

MR_BEGIN_MODULE(mdbcomp__trace_counts_module11)
	MR_init_entry1(mdbcomp__trace_counts__read_and_union_trace_counts_8_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdbcomp__trace_counts__read_and_union_trace_counts_8_0);
	MR_init_label5(mdbcomp__trace_counts__read_and_union_trace_counts_8_0,4,5,9,11,12)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'read_and_union_trace_counts'/8 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__mdbcomp__trace_counts__read_and_union_trace_counts_8_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = (MR_Word) MR_TAG_COMMON(1,6,0);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__trace_counts, proc_label_in_context);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,0);
	MR_np_call_localret_ent(fn__map__init_0_0,
		mdbcomp__trace_counts__read_and_union_trace_counts_8_0_i4);
MR_def_label(mdbcomp__trace_counts__read_and_union_trace_counts_8_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(mdbcomp__trace_counts__read_and_union_trace_counts_2_9_0,
		mdbcomp__trace_counts__read_and_union_trace_counts_8_0_i5);
MR_def_label(mdbcomp__trace_counts__read_and_union_trace_counts_8_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TEST(MR_r1,1)) {
		MR_GOTO_LAB(mdbcomp__trace_counts__read_and_union_trace_counts_8_0_i11);
	}
	if (MR_PTAG_TEST(MR_r1,0)) {
		MR_GOTO_LAB(mdbcomp__trace_counts__read_and_union_trace_counts_8_0_i9);
	}
	MR_r1 = (MR_Word) MR_string_const("read_and_union_trace_counts: diff_file", 38);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(require__error_1_0);
MR_def_label(mdbcomp__trace_counts__read_and_union_trace_counts_8_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("read_and_union_trace_counts: single_file", 40);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(require__error_1_0);
MR_def_label(mdbcomp__trace_counts__read_and_union_trace_counts_8_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_tfield(1, MR_r1, 0);
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__trace_counts, trace_count_file_type);
	MR_r2 = MR_tfield(1, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(set__list_to_set_2_0,
		mdbcomp__trace_counts__read_and_union_trace_counts_8_0_i12);
MR_def_label(mdbcomp__trace_counts__read_and_union_trace_counts_8_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_decr_sp_and_return(4);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(io__tell_4_0);
MR_decl_entry(io__write_3_0);
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_string_0;
MR_decl_entry(map__foldl3_8_2);
MR_decl_entry(io__told_2_0);

MR_BEGIN_MODULE(mdbcomp__trace_counts_module12)
	MR_init_entry1(mdbcomp__trace_counts__write_trace_counts_to_file_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdbcomp__trace_counts__write_trace_counts_to_file_6_0);
	MR_init_label9(mdbcomp__trace_counts__write_trace_counts_to_file_6_0,2,5,6,7,8,9,13,14,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'write_trace_counts_to_file'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__mdbcomp__trace_counts__write_trace_counts_to_file_6_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_r1 = MR_r3;
	MR_np_call_localret_ent(io__tell_4_0,
		mdbcomp__trace_counts__write_trace_counts_to_file_6_0_i2);
MR_def_label(mdbcomp__trace_counts__write_trace_counts_to_file_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(mdbcomp__trace_counts__write_trace_counts_to_file_6_0_i3);
	}
	MR_r1 = (MR_Word) MR_string_const("Mercury trace counts file", 25);
	MR_np_call_localret_ent(io__write_string_3_0,
		mdbcomp__trace_counts__write_trace_counts_to_file_6_0_i5);
MR_def_label(mdbcomp__trace_counts__write_trace_counts_to_file_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__nl_2_0,
		mdbcomp__trace_counts__write_trace_counts_to_file_6_0_i6);
MR_def_label(mdbcomp__trace_counts__write_trace_counts_to_file_6_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__trace_counts, trace_count_file_type);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(io__write_3_0,
		mdbcomp__trace_counts__write_trace_counts_to_file_6_0_i7);
MR_def_label(mdbcomp__trace_counts__write_trace_counts_to_file_6_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(".", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		mdbcomp__trace_counts__write_trace_counts_to_file_6_0_i8);
MR_def_label(mdbcomp__trace_counts__write_trace_counts_to_file_6_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__nl_2_0,
		mdbcomp__trace_counts__write_trace_counts_to_file_6_0_i9);
MR_def_label(mdbcomp__trace_counts__write_trace_counts_to_file_6_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__trace_counts, proc_label_in_context);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,0);
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__prim_data, sym_name);
	MR_r4 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r5 = (MR_Word) MR_IO_CTOR_ADDR;
	MR_r6 = (MR_Word) MR_TAG_COMMON(0,3,3);
	MR_r7 = MR_sv(2);
	MR_r8 = (MR_Word) MR_TAG_COMMON(0,5,1);
	MR_r9 = (MR_Word) MR_string_const("", 0);
	MR_np_call_localret_ent(map__foldl3_8_2,
		mdbcomp__trace_counts__write_trace_counts_to_file_6_0_i13);
MR_def_label(mdbcomp__trace_counts__write_trace_counts_to_file_6_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__told_2_0,
		mdbcomp__trace_counts__write_trace_counts_to_file_6_0_i14);
MR_def_label(mdbcomp__trace_counts__write_trace_counts_to_file_6_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
MR_def_label(mdbcomp__trace_counts__write_trace_counts_to_file_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___mdbcomp__prim_data__sym_name_0_0);
MR_decl_entry(fn__mdbcomp__prim_data__sym_name_to_string_1_0);
MR_decl_entry(term_io__quote_atom_3_0);
MR_decl_entry(io__write_int_3_0);

MR_BEGIN_MODULE(mdbcomp__trace_counts_module13)
	MR_init_entry1(mdbcomp__trace_counts__write_proc_label_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdbcomp__trace_counts__write_proc_label_3_0);
	MR_init_label10(mdbcomp__trace_counts__write_proc_label_3_0,8,6,11,12,13,5,18,16,21,22)
	MR_init_label8(mdbcomp__trace_counts__write_proc_label_3_0,23,24,26,27,28,29,51,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'write_proc_label'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__mdbcomp__trace_counts__write_proc_label_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,0)) {
		MR_GOTO_LAB(mdbcomp__trace_counts__write_proc_label_3_0_i3);
	}
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(0, MR_r1, 1);
	if (MR_INT_NE(MR_tempr1,1)) {
		MR_GOTO_LAB(mdbcomp__trace_counts__write_proc_label_3_0_i5);
	}
	MR_sv(4) = MR_tfield(0, MR_r1, 5);
	MR_sv(3) = MR_tfield(0, MR_r1, 4);
	MR_sv(2) = MR_tfield(0, MR_r1, 3);
	MR_tempr1 = MR_tfield(0, MR_r1, 2);
	MR_sv(1) = MR_tempr1;
	MR_tempr2 = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_tfield(0, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(__Unify___mdbcomp__prim_data__sym_name_0_0,
		mdbcomp__trace_counts__write_proc_label_3_0_i8);
MR_def_label(mdbcomp__trace_counts__write_proc_label_3_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(mdbcomp__trace_counts__write_proc_label_3_0_i6);
	}
	MR_r1 = (MR_Word) MR_string_const("fproc ", 6);
	MR_np_call_localret_ent(io__write_string_3_0,
		mdbcomp__trace_counts__write_proc_label_3_0_i24);
MR_def_label(mdbcomp__trace_counts__write_proc_label_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__mdbcomp__prim_data__sym_name_to_string_1_0,
		mdbcomp__trace_counts__write_proc_label_3_0_i11);
MR_def_label(mdbcomp__trace_counts__write_proc_label_3_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("fprocdecl ", 10);
	MR_np_call_localret_ent(io__write_string_3_0,
		mdbcomp__trace_counts__write_proc_label_3_0_i12);
MR_def_label(mdbcomp__trace_counts__write_proc_label_3_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(term_io__quote_atom_3_0,
		mdbcomp__trace_counts__write_proc_label_3_0_i13);
MR_def_label(mdbcomp__trace_counts__write_proc_label_3_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(" ", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		mdbcomp__trace_counts__write_proc_label_3_0_i24);
MR_def_label(mdbcomp__trace_counts__write_proc_label_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_tfield(0, MR_r1, 5);
	MR_sv(3) = MR_tfield(0, MR_r1, 4);
	MR_sv(2) = MR_tfield(0, MR_r1, 3);
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(0, MR_r1, 2);
	MR_sv(1) = MR_tempr1;
	MR_tempr2 = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_tfield(0, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(__Unify___mdbcomp__prim_data__sym_name_0_0,
		mdbcomp__trace_counts__write_proc_label_3_0_i18);
MR_def_label(mdbcomp__trace_counts__write_proc_label_3_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(mdbcomp__trace_counts__write_proc_label_3_0_i16);
	}
	MR_r1 = (MR_Word) MR_string_const("pproc ", 6);
	MR_np_call_localret_ent(io__write_string_3_0,
		mdbcomp__trace_counts__write_proc_label_3_0_i24);
MR_def_label(mdbcomp__trace_counts__write_proc_label_3_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__mdbcomp__prim_data__sym_name_to_string_1_0,
		mdbcomp__trace_counts__write_proc_label_3_0_i21);
MR_def_label(mdbcomp__trace_counts__write_proc_label_3_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("pprocdecl ", 10);
	MR_np_call_localret_ent(io__write_string_3_0,
		mdbcomp__trace_counts__write_proc_label_3_0_i22);
MR_def_label(mdbcomp__trace_counts__write_proc_label_3_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(term_io__quote_atom_3_0,
		mdbcomp__trace_counts__write_proc_label_3_0_i23);
MR_def_label(mdbcomp__trace_counts__write_proc_label_3_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(" ", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		mdbcomp__trace_counts__write_proc_label_3_0_i24);
MR_def_label(mdbcomp__trace_counts__write_proc_label_3_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(term_io__quote_atom_3_0,
		mdbcomp__trace_counts__write_proc_label_3_0_i26);
MR_def_label(mdbcomp__trace_counts__write_proc_label_3_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(" ", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		mdbcomp__trace_counts__write_proc_label_3_0_i27);
MR_def_label(mdbcomp__trace_counts__write_proc_label_3_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(io__write_int_3_0,
		mdbcomp__trace_counts__write_proc_label_3_0_i28);
MR_def_label(mdbcomp__trace_counts__write_proc_label_3_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(" ", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		mdbcomp__trace_counts__write_proc_label_3_0_i29);
MR_def_label(mdbcomp__trace_counts__write_proc_label_3_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(io__write_int_3_0,
		mdbcomp__trace_counts__write_proc_label_3_0_i51);
MR_def_label(mdbcomp__trace_counts__write_proc_label_3_0,51)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(io__nl_2_0);
MR_def_label(mdbcomp__trace_counts__write_proc_label_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("write_proc_label: special_pred", 30);
	MR_np_tailcall_ent(require__error_1_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdbcomp__trace_counts_module14)
	MR_init_entry1(mdbcomp__trace_counts__string_to_trace_port_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdbcomp__trace_counts__string_to_trace_port_2_0);
	MR_init_label10(mdbcomp__trace_counts__string_to_trace_port_2_0,3,25,5,6,7,8,9,10,11,12)
	MR_init_label10(mdbcomp__trace_counts__string_to_trace_port_2_0,13,14,15,16,17,18,19,20,21,22)
	MR_init_label1(mdbcomp__trace_counts__string_to_trace_port_2_0,23)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'string_to_trace_port'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__mdbcomp__trace_counts__string_to_trace_port_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = (MR_hash_string((MR_String) MR_r1) & (MR_Integer) 63);
MR_def_label(mdbcomp__trace_counts__string_to_trace_port_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	while (1) {
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = ((MR_Integer) MR_r3 * (MR_Integer) 2);
	MR_tempr2 = ((MR_Word *) &mercury_vector_common_8_0)[(MR_Integer) MR_tempr1];
	if (((MR_Integer) MR_tempr2 && (strcmp((char *) (MR_Word *) MR_tempr2, (char *) (MR_Word *) MR_r1) == 0))) {
		MR_GOTO_LAB(mdbcomp__trace_counts__string_to_trace_port_2_0_i5);
	}
	MR_r3 = ((MR_Word *) &mercury_vector_common_8_0)[((MR_Integer) MR_tempr1 + (MR_Integer) 1)];
	if (MR_INT_GE(MR_r3,0))
		continue;
	}
	break; } /* end while */
MR_def_label(mdbcomp__trace_counts__string_to_trace_port_2_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_proceed();
MR_def_label(mdbcomp__trace_counts__string_to_trace_port_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_r3,
		MR_LABEL_AP(mdbcomp__trace_counts__string_to_trace_port_2_0_i25) MR_AND
		MR_LABEL_AP(mdbcomp__trace_counts__string_to_trace_port_2_0_i20) MR_AND
		MR_LABEL_AP(mdbcomp__trace_counts__string_to_trace_port_2_0_i23) MR_AND
		MR_LABEL_AP(mdbcomp__trace_counts__string_to_trace_port_2_0_i15) MR_AND
		MR_LABEL_AP(mdbcomp__trace_counts__string_to_trace_port_2_0_i17) MR_AND
		MR_LABEL_AP(mdbcomp__trace_counts__string_to_trace_port_2_0_i25) MR_AND
		MR_LABEL_AP(mdbcomp__trace_counts__string_to_trace_port_2_0_i25) MR_AND
		MR_LABEL_AP(mdbcomp__trace_counts__string_to_trace_port_2_0_i25) MR_AND
		MR_LABEL_AP(mdbcomp__trace_counts__string_to_trace_port_2_0_i25) MR_AND
		MR_LABEL_AP(mdbcomp__trace_counts__string_to_trace_port_2_0_i25) MR_AND
		MR_LABEL_AP(mdbcomp__trace_counts__string_to_trace_port_2_0_i18) MR_AND
		MR_LABEL_AP(mdbcomp__trace_counts__string_to_trace_port_2_0_i25) MR_AND
		MR_LABEL_AP(mdbcomp__trace_counts__string_to_trace_port_2_0_i25) MR_AND
		MR_LABEL_AP(mdbcomp__trace_counts__string_to_trace_port_2_0_i25) MR_AND
		MR_LABEL_AP(mdbcomp__trace_counts__string_to_trace_port_2_0_i25) MR_AND
		MR_LABEL_AP(mdbcomp__trace_counts__string_to_trace_port_2_0_i14) MR_AND
		MR_LABEL_AP(mdbcomp__trace_counts__string_to_trace_port_2_0_i25) MR_AND
		MR_LABEL_AP(mdbcomp__trace_counts__string_to_trace_port_2_0_i25) MR_AND
		MR_LABEL_AP(mdbcomp__trace_counts__string_to_trace_port_2_0_i25) MR_AND
		MR_LABEL_AP(mdbcomp__trace_counts__string_to_trace_port_2_0_i25) MR_AND
		MR_LABEL_AP(mdbcomp__trace_counts__string_to_trace_port_2_0_i25) MR_AND
		MR_LABEL_AP(mdbcomp__trace_counts__string_to_trace_port_2_0_i6) MR_AND
		MR_LABEL_AP(mdbcomp__trace_counts__string_to_trace_port_2_0_i25) MR_AND
		MR_LABEL_AP(mdbcomp__trace_counts__string_to_trace_port_2_0_i25) MR_AND
		MR_LABEL_AP(mdbcomp__trace_counts__string_to_trace_port_2_0_i10) MR_AND
		MR_LABEL_AP(mdbcomp__trace_counts__string_to_trace_port_2_0_i25) MR_AND
		MR_LABEL_AP(mdbcomp__trace_counts__string_to_trace_port_2_0_i25) MR_AND
		MR_LABEL_AP(mdbcomp__trace_counts__string_to_trace_port_2_0_i19) MR_AND
		MR_LABEL_AP(mdbcomp__trace_counts__string_to_trace_port_2_0_i25) MR_AND
		MR_LABEL_AP(mdbcomp__trace_counts__string_to_trace_port_2_0_i25) MR_AND
		MR_LABEL_AP(mdbcomp__trace_counts__string_to_trace_port_2_0_i25) MR_AND
		MR_LABEL_AP(mdbcomp__trace_counts__string_to_trace_port_2_0_i21) MR_AND
		MR_LABEL_AP(mdbcomp__trace_counts__string_to_trace_port_2_0_i25) MR_AND
		MR_LABEL_AP(mdbcomp__trace_counts__string_to_trace_port_2_0_i25) MR_AND
		MR_LABEL_AP(mdbcomp__trace_counts__string_to_trace_port_2_0_i22) MR_AND
		MR_LABEL_AP(mdbcomp__trace_counts__string_to_trace_port_2_0_i25) MR_AND
		MR_LABEL_AP(mdbcomp__trace_counts__string_to_trace_port_2_0_i25) MR_AND
		MR_LABEL_AP(mdbcomp__trace_counts__string_to_trace_port_2_0_i25) MR_AND
		MR_LABEL_AP(mdbcomp__trace_counts__string_to_trace_port_2_0_i16) MR_AND
		MR_LABEL_AP(mdbcomp__trace_counts__string_to_trace_port_2_0_i25) MR_AND
		MR_LABEL_AP(mdbcomp__trace_counts__string_to_trace_port_2_0_i25) MR_AND
		MR_LABEL_AP(mdbcomp__trace_counts__string_to_trace_port_2_0_i25) MR_AND
		MR_LABEL_AP(mdbcomp__trace_counts__string_to_trace_port_2_0_i25) MR_AND
		MR_LABEL_AP(mdbcomp__trace_counts__string_to_trace_port_2_0_i25) MR_AND
		MR_LABEL_AP(mdbcomp__trace_counts__string_to_trace_port_2_0_i25) MR_AND
		MR_LABEL_AP(mdbcomp__trace_counts__string_to_trace_port_2_0_i13) MR_AND
		MR_LABEL_AP(mdbcomp__trace_counts__string_to_trace_port_2_0_i12) MR_AND
		MR_LABEL_AP(mdbcomp__trace_counts__string_to_trace_port_2_0_i25) MR_AND
		MR_LABEL_AP(mdbcomp__trace_counts__string_to_trace_port_2_0_i25) MR_AND
		MR_LABEL_AP(mdbcomp__trace_counts__string_to_trace_port_2_0_i25) MR_AND
		MR_LABEL_AP(mdbcomp__trace_counts__string_to_trace_port_2_0_i25) MR_AND
		MR_LABEL_AP(mdbcomp__trace_counts__string_to_trace_port_2_0_i7) MR_AND
		MR_LABEL_AP(mdbcomp__trace_counts__string_to_trace_port_2_0_i8) MR_AND
		MR_LABEL_AP(mdbcomp__trace_counts__string_to_trace_port_2_0_i25) MR_AND
		MR_LABEL_AP(mdbcomp__trace_counts__string_to_trace_port_2_0_i25) MR_AND
		MR_LABEL_AP(mdbcomp__trace_counts__string_to_trace_port_2_0_i9) MR_AND
		MR_LABEL_AP(mdbcomp__trace_counts__string_to_trace_port_2_0_i25) MR_AND
		MR_LABEL_AP(mdbcomp__trace_counts__string_to_trace_port_2_0_i25) MR_AND
		MR_LABEL_AP(mdbcomp__trace_counts__string_to_trace_port_2_0_i25) MR_AND
		MR_LABEL_AP(mdbcomp__trace_counts__string_to_trace_port_2_0_i11) MR_AND
		MR_LABEL_AP(mdbcomp__trace_counts__string_to_trace_port_2_0_i25) MR_AND
		MR_LABEL_AP(mdbcomp__trace_counts__string_to_trace_port_2_0_i25) MR_AND
		MR_LABEL_AP(mdbcomp__trace_counts__string_to_trace_port_2_0_i25) MR_AND
		MR_LABEL_AP(mdbcomp__trace_counts__string_to_trace_port_2_0_i25));
MR_def_label(mdbcomp__trace_counts__string_to_trace_port_2_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 17;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(mdbcomp__trace_counts__string_to_trace_port_2_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 7;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(mdbcomp__trace_counts__string_to_trace_port_2_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 4;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(mdbcomp__trace_counts__string_to_trace_port_2_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 14;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(mdbcomp__trace_counts__string_to_trace_port_2_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 2;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(mdbcomp__trace_counts__string_to_trace_port_2_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 10;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(mdbcomp__trace_counts__string_to_trace_port_2_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 11;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(mdbcomp__trace_counts__string_to_trace_port_2_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 9;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(mdbcomp__trace_counts__string_to_trace_port_2_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 16;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(mdbcomp__trace_counts__string_to_trace_port_2_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 15;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(mdbcomp__trace_counts__string_to_trace_port_2_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 3;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(mdbcomp__trace_counts__string_to_trace_port_2_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 1;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(mdbcomp__trace_counts__string_to_trace_port_2_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 5;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(mdbcomp__trace_counts__string_to_trace_port_2_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 8;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(mdbcomp__trace_counts__string_to_trace_port_2_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 13;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(mdbcomp__trace_counts__string_to_trace_port_2_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 12;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(mdbcomp__trace_counts__string_to_trace_port_2_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 6;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(mdbcomp__trace_counts__string_to_trace_port_2_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 0;
	MR_r1 = MR_TRUE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdbcomp__trace_counts_module15)
	MR_init_entry1(mdbcomp__trace_counts__string_to_trace_port_2_1);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdbcomp__trace_counts__string_to_trace_port_2_1);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'string_to_trace_port'/2 mode 1 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__mdbcomp__trace_counts__string_to_trace_port_2_1);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) &MR_tfield(0, (MR_Word *) &mercury_vector_common_5_0, (MR_Integer) MR_r1);
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


MR_BEGIN_MODULE(mdbcomp__trace_counts_module16)
	MR_init_entry1(mdbcomp__trace_counts__restrict_trace_counts_to_module_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdbcomp__trace_counts__restrict_trace_counts_to_module_3_0);
	MR_init_label1(mdbcomp__trace_counts__restrict_trace_counts_to_module_3_0,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'restrict_trace_counts_to_module'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__mdbcomp__trace_counts__restrict_trace_counts_to_module_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_sv(2) = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(4,1);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(mdbcomp__trace_counts__restrict_trace_counts_2_5_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_r1;
	MR_sv(1) = MR_r2;
	MR_sv(3) = (MR_Word) MR_CTOR_ADDR(tree234, tree234, 2);
	MR_sv(4) = (MR_Word) MR_TAG_COMMON(0,1,0);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__trace_counts, proc_label_in_context);
	MR_r2 = MR_sv(4);
	}
	MR_np_call_localret_ent(fn__map__init_0_0,
		mdbcomp__trace_counts__restrict_trace_counts_to_module_3_0_i4);
MR_def_label(mdbcomp__trace_counts__restrict_trace_counts_to_module_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__trace_counts, proc_label_in_context);
	MR_r2 = MR_sv(4);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,1,1);
	MR_r4 = MR_sv(2);
	MR_r5 = MR_sv(1);
	MR_r6 = MR_tempr1;
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(map__foldl_4_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdbcomp__trace_counts_module17)
	MR_init_entry1(fn__mdbcomp__trace_counts__num_tests_for_file_type_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__mdbcomp__trace_counts__num_tests_for_file_type_1_0);
	MR_init_label2(fn__mdbcomp__trace_counts__num_tests_for_file_type_1_0,4,5)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'num_tests_for_file_type'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__mdbcomp__trace_counts__num_tests_for_file_type_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_tag(MR_r1);
	if ((MR_r2 == MR_mktag((MR_Integer) 1))) {
		MR_GOTO_LAB(fn__mdbcomp__trace_counts__num_tests_for_file_type_1_0_i5);
	}
	if ((MR_r2 == MR_mktag((MR_Integer) 0))) {
		MR_GOTO_LAB(fn__mdbcomp__trace_counts__num_tests_for_file_type_1_0_i4);
	}
	MR_r1 = (MR_Integer) -1;
	MR_proceed();
MR_def_label(fn__mdbcomp__trace_counts__num_tests_for_file_type_1_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_proceed();
MR_def_label(fn__mdbcomp__trace_counts__num_tests_for_file_type_1_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(1, MR_r1, 0);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdbcomp__trace_counts_module18)
	MR_init_entry1(fn__mdbcomp__trace_counts__calc_num_tests_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__mdbcomp__trace_counts__calc_num_tests_1_0);
	MR_init_label6(fn__mdbcomp__trace_counts__calc_num_tests_1_0,10,5,6,3,11,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'calc_num_tests'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__mdbcomp__trace_counts__calc_num_tests_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(fn__mdbcomp__trace_counts__calc_num_tests_1_0_i2);
	}
	MR_r3 = (MR_Word) MR_sp;
MR_def_label(fn__mdbcomp__trace_counts__calc_num_tests_1_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_r2 = MR_tfield(1, MR_r1, 0);
	if (MR_PTAG_TEST(MR_r2,1)) {
		MR_GOTO_LAB(fn__mdbcomp__trace_counts__calc_num_tests_1_0_i6);
	}
	if (MR_PTAG_TEST(MR_r2,0)) {
		MR_GOTO_LAB(fn__mdbcomp__trace_counts__calc_num_tests_1_0_i5);
	}
	MR_r1 = MR_tfield(1, MR_r1, 1);
	MR_sv(1) = (MR_Integer) -1;
	MR_GOTO_LAB(fn__mdbcomp__trace_counts__calc_num_tests_1_0_i3);
MR_def_label(fn__mdbcomp__trace_counts__calc_num_tests_1_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(1, MR_r1, 1);
	MR_sv(1) = (MR_Integer) 1;
	MR_GOTO_LAB(fn__mdbcomp__trace_counts__calc_num_tests_1_0_i3);
MR_def_label(fn__mdbcomp__trace_counts__calc_num_tests_1_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(1, MR_r1, 1);
	MR_sv(1) = MR_tfield(1, MR_r2, 0);
MR_def_label(fn__mdbcomp__trace_counts__calc_num_tests_1_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(fn__mdbcomp__trace_counts__calc_num_tests_1_0_i10);
	}
	MR_r1 = (MR_Integer) 0;
MR_def_label(fn__mdbcomp__trace_counts__calc_num_tests_1_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	while (1) {
	MR_r1 = ((MR_Integer) MR_sv(1) + (MR_Integer) MR_r1);
	MR_decr_sp(1);
	if (((MR_Integer) MR_sp > (MR_Integer) MR_r3))
		continue;
	MR_proceed();
	break; } /* end while */
MR_def_label(fn__mdbcomp__trace_counts__calc_num_tests_1_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__map__union_3_0);

MR_BEGIN_MODULE(mdbcomp__trace_counts_module19)
	MR_init_entry1(mdbcomp__trace_counts__sum_proc_trace_counts_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdbcomp__trace_counts__sum_proc_trace_counts_3_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'sum_proc_trace_counts'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mdbcomp__trace_counts__sum_proc_trace_counts_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__trace_counts, line_no_and_count);
	MR_tempr2 = MR_r2;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__trace_counts, path_port);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,3,4);
	MR_r4 = MR_tempr1;
	MR_r5 = MR_tempr2;
	MR_np_tailcall_ent(fn__map__union_3_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdbcomp__trace_counts_module20)
	MR_init_entry1(fn__mdbcomp__trace_counts__sum_counts_on_line_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__mdbcomp__trace_counts__sum_counts_on_line_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'sum_counts_on_line'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__mdbcomp__trace_counts__sum_counts_on_line_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr1, 0) = MR_tfield(0, MR_r1, 0);
	MR_tfield(0, MR_tempr1, 1) = ((MR_Integer) MR_tfield(0, MR_r1, 1) + (MR_Integer) MR_tfield(0, MR_r2, 1));
	MR_tfield(0, MR_tempr1, 2) = ((MR_Integer) MR_tfield(0, MR_r1, 2) + (MR_Integer) MR_tfield(0, MR_r2, 2));
	MR_r1 = MR_tempr1;
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(map__search_3_0);
MR_decl_entry(svmap__det_insert_4_0);

MR_BEGIN_MODULE(mdbcomp__trace_counts_module21)
	MR_init_entry1(mdbcomp__trace_counts__diff_trace_counts_acc_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdbcomp__trace_counts__diff_trace_counts_acc_5_0);
	MR_init_label4(mdbcomp__trace_counts__diff_trace_counts_acc_5_0,4,7,8,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'diff_trace_counts_acc'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mdbcomp__trace_counts__diff_trace_counts_acc_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_sv(4) = (MR_Word) MR_TAG_COMMON(0,1,0);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__trace_counts, proc_label_in_context);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(1);
	}
	MR_np_call_localret_ent(map__search_3_0,
		mdbcomp__trace_counts__diff_trace_counts_acc_5_0_i4);
MR_def_label(mdbcomp__trace_counts__diff_trace_counts_acc_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(mdbcomp__trace_counts__diff_trace_counts_acc_5_0_i2);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_sv(5) = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(4,2);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(mdbcomp__trace_counts__diff_proc_counts_acc_5_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_r2;
	MR_sv(6) = (MR_Word) MR_CTOR0_ADDR(mdbcomp__trace_counts, path_port);
	MR_sv(7) = (MR_Word) MR_CTOR0_ADDR(mdbcomp__trace_counts, line_no_and_count);
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(7);
	}
	MR_np_call_localret_ent(fn__map__init_0_0,
		mdbcomp__trace_counts__diff_trace_counts_acc_5_0_i7);
MR_def_label(mdbcomp__trace_counts__diff_trace_counts_acc_5_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(7);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(5);
	MR_r5 = MR_sv(2);
	MR_r6 = MR_tempr1;
	}
	MR_np_call_localret_ent(map__foldl_4_0,
		mdbcomp__trace_counts__diff_trace_counts_acc_5_0_i8);
MR_def_label(mdbcomp__trace_counts__diff_trace_counts_acc_5_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__trace_counts, proc_label_in_context);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_tempr1;
	MR_r5 = MR_sv(3);
	MR_succip_word = MR_sv(8);
	MR_decr_sp(8);
	MR_np_tailcall_ent(svmap__det_insert_4_0);
	}
MR_def_label(mdbcomp__trace_counts__diff_trace_counts_acc_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__trace_counts, proc_label_in_context);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,0);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_r5 = MR_sv(3);
	MR_succip_word = MR_sv(8);
	MR_decr_sp(8);
	MR_np_tailcall_ent(svmap__det_insert_4_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdbcomp__trace_counts_module22)
	MR_init_entry1(mdbcomp__trace_counts__diff_proc_counts_acc_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdbcomp__trace_counts__diff_proc_counts_acc_5_0);
	MR_init_label2(mdbcomp__trace_counts__diff_proc_counts_acc_5_0,3,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'diff_proc_counts_acc'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mdbcomp__trace_counts__diff_proc_counts_acc_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__trace_counts, path_port);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__trace_counts, line_no_and_count);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(1);
	}
	MR_np_call_localret_ent(map__search_3_0,
		mdbcomp__trace_counts__diff_proc_counts_acc_5_0_i3);
MR_def_label(mdbcomp__trace_counts__diff_proc_counts_acc_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(mdbcomp__trace_counts__diff_proc_counts_acc_5_0_i2);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_r4 = MR_tempr1;
	MR_tempr2 = MR_sv(2);
	MR_tfield(0, MR_tempr1, 0) = MR_tfield(0, MR_tempr2, 0);
	MR_tfield(0, MR_tempr1, 1) = ((MR_Integer) MR_tfield(0, MR_tempr2, 1) - (MR_Integer) MR_tfield(0, MR_r2, 1));
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) -1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__trace_counts, path_port);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__trace_counts, line_no_and_count);
	MR_r3 = MR_sv(1);
	MR_r5 = MR_sv(3);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(svmap__det_insert_4_0);
	}
MR_def_label(mdbcomp__trace_counts__diff_proc_counts_acc_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__trace_counts, path_port);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__trace_counts, line_no_and_count);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_r5 = MR_sv(3);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(svmap__det_insert_4_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(io__read_3_0);
MR_decl_entry(exception__try_io_4_0);
MR_decl_entry(fn__univ__univ_1_2);
extern const MR_TypeCtorInfo_Struct mercury_data_univ__type_ctor_info_univ_0;

MR_BEGIN_MODULE(mdbcomp__trace_counts_module23)
	MR_init_entry1(mdbcomp__trace_counts__read_trace_counts_from_cur_stream_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdbcomp__trace_counts__read_trace_counts_from_cur_stream_3_0);
	MR_init_label10(mdbcomp__trace_counts__read_trace_counts_from_cur_stream_3_0,2,7,12,15,19,18,23,22,27,26)
	MR_init_label5(mdbcomp__trace_counts__read_trace_counts_from_cur_stream_3_0,30,31,32,17,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'read_trace_counts_from_cur_stream'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mdbcomp__trace_counts__read_trace_counts_from_cur_stream_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__trace_counts, trace_count_file_type);
	MR_np_call_localret_ent(io__read_3_0,
		mdbcomp__trace_counts__read_trace_counts_from_cur_stream_3_0_i2);
MR_def_label(mdbcomp__trace_counts__read_trace_counts_from_cur_stream_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TEST(MR_r1,2)) {
		MR_GOTO_LAB(mdbcomp__trace_counts__read_trace_counts_from_cur_stream_3_0_i4);
	}
	if (MR_PTAG_TESTR(MR_r1,1)) {
		MR_GOTO_LAB(mdbcomp__trace_counts__read_trace_counts_from_cur_stream_3_0_i4);
	}
	MR_sv(1) = MR_tfield(1, MR_r1, 0);
	MR_np_call_localret_ent(io__read_line_as_string_3_0,
		mdbcomp__trace_counts__read_trace_counts_from_cur_stream_3_0_i7);
MR_def_label(mdbcomp__trace_counts__read_trace_counts_from_cur_stream_3_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,1)) {
		MR_GOTO_LAB(mdbcomp__trace_counts__read_trace_counts_from_cur_stream_3_0_i4);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(1, MR_r1, 0);
	if ((strcmp((char *) (MR_Word *) MR_tempr1, MR_string_const("\n", 1)) != 0)) {
		MR_GOTO_LAB(mdbcomp__trace_counts__read_trace_counts_from_cur_stream_3_0_i4);
	}
	MR_sv(2) = (MR_Word) MR_CTOR_ADDR(tree234, tree234, 2);
	MR_sv(3) = (MR_Word) MR_TAG_COMMON(0,1,0);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__trace_counts, proc_label_in_context);
	MR_r2 = MR_sv(3);
	}
	MR_np_call_localret_ent(fn__map__init_0_0,
		mdbcomp__trace_counts__read_trace_counts_from_cur_stream_3_0_i12);
MR_def_label(mdbcomp__trace_counts__read_trace_counts_from_cur_stream_3_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 4);
	MR_tfield(0, MR_r2, 0) = (MR_Word) MR_COMMON(9,0);
	MR_tfield(0, MR_r2, 1) = (MR_Word) MR_ENTRY_AP(mdbcomp__trace_counts__read_trace_counts_setup_4_0);
	MR_tfield(0, MR_r2, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_r2, 3) = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,1,1);
	MR_np_call_localret_ent(exception__try_io_4_0,
		mdbcomp__trace_counts__read_trace_counts_from_cur_stream_3_0_i15);
MR_def_label(mdbcomp__trace_counts__read_trace_counts_from_cur_stream_3_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,2)) {
		MR_GOTO_LAB(mdbcomp__trace_counts__read_trace_counts_from_cur_stream_3_0_i17);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(2, MR_r1, 0);
	MR_sv(1) = MR_tempr1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(io, error);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__univ__univ_1_2,
		mdbcomp__trace_counts__read_trace_counts_from_cur_stream_3_0_i19);
MR_def_label(mdbcomp__trace_counts__read_trace_counts_from_cur_stream_3_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(mdbcomp__trace_counts__read_trace_counts_from_cur_stream_3_0_i18);
	}
	MR_tag_alloc_heap(MR_r1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_r1, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_r1, 1) = MR_r2;
	MR_decr_sp_and_return(4);
MR_def_label(mdbcomp__trace_counts__read_trace_counts_from_cur_stream_3_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(fn__univ__univ_1_2,
		mdbcomp__trace_counts__read_trace_counts_from_cur_stream_3_0_i23);
MR_def_label(mdbcomp__trace_counts__read_trace_counts_from_cur_stream_3_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(mdbcomp__trace_counts__read_trace_counts_from_cur_stream_3_0_i22);
	}
	MR_tag_alloc_heap(MR_r1, 2, (MR_Integer) 1);
	MR_tfield(2, MR_r1, 0) = MR_r2;
	MR_decr_sp_and_return(4);
MR_def_label(mdbcomp__trace_counts__read_trace_counts_from_cur_stream_3_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__trace_counts, trace_count_syntax_error);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(fn__univ__univ_1_2,
		mdbcomp__trace_counts__read_trace_counts_from_cur_stream_3_0_i27);
MR_def_label(mdbcomp__trace_counts__read_trace_counts_from_cur_stream_3_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(mdbcomp__trace_counts__read_trace_counts_from_cur_stream_3_0_i26);
	}
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r1, 0) = MR_r2;
	MR_decr_sp_and_return(4);
MR_def_label(mdbcomp__trace_counts__read_trace_counts_from_cur_stream_3_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(univ, univ);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(fn__string__string_1_0,
		mdbcomp__trace_counts__read_trace_counts_from_cur_stream_3_0_i30);
MR_def_label(mdbcomp__trace_counts__read_trace_counts_from_cur_stream_3_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("unexpected exception type: ", 27);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		mdbcomp__trace_counts__read_trace_counts_from_cur_stream_3_0_i31);
MR_def_label(mdbcomp__trace_counts__read_trace_counts_from_cur_stream_3_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("read_trace_counts_from_cur_stream: ", 35);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		mdbcomp__trace_counts__read_trace_counts_from_cur_stream_3_0_i32);
MR_def_label(mdbcomp__trace_counts__read_trace_counts_from_cur_stream_3_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(require__error_1_0);
MR_def_label(mdbcomp__trace_counts__read_trace_counts_from_cur_stream_3_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 1) = MR_tfield(1, MR_r1, 0);
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(4);
	}
MR_def_label(mdbcomp__trace_counts__read_trace_counts_from_cur_stream_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(1,5,2);
	MR_decr_sp_and_return(4);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__string__words_1_0);
MR_decl_entry(string__to_int_2_0);
MR_decl_entry(string__prefix_2_0);
MR_decl_entry(string__suffix_2_0);
MR_decl_entry(string__length_2_0);
MR_decl_entry(string__substring_4_0);
MR_decl_entry(mdbcomp__program_representation__goal_path_from_string_2_0);

MR_BEGIN_MODULE(mdbcomp__trace_counts_module24)
	MR_init_entry1(mdbcomp__trace_counts__parse_path_port_line_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdbcomp__trace_counts__parse_path_port_line_5_0);
	MR_init_label10(mdbcomp__trace_counts__parse_path_port_line_5_0,2,9,7,12,14,16,17,18,22,25)
	MR_init_label10(mdbcomp__trace_counts__parse_path_port_line_5_0,28,27,31,33,3,4,38,40,42,44)
	MR_init_label9(mdbcomp__trace_counts__parse_path_port_line_5_0,45,46,49,52,55,54,58,60,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'parse_path_port_line'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mdbcomp__trace_counts__parse_path_port_line_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(fn__string__words_1_0,
		mdbcomp__trace_counts__parse_path_port_line_5_0_i2);
MR_def_label(mdbcomp__trace_counts__parse_path_port_line_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(mdbcomp__trace_counts__parse_path_port_line_5_0_i4);
	}
	MR_r2 = MR_tfield(1, MR_r1, 1);
	if (MR_LTAGS_TEST(MR_r2,0,0)) {
		MR_GOTO_LAB(mdbcomp__trace_counts__parse_path_port_line_5_0_i4);
	}
	MR_sv(4) = MR_tfield(1, MR_r2, 1);
	MR_sv(3) = MR_tfield(1, MR_r2, 0);
	MR_r2 = MR_tfield(1, MR_r1, 0);
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(mdbcomp__trace_counts__string_to_trace_port_2_0,
		mdbcomp__trace_counts__parse_path_port_line_5_0_i9);
MR_def_label(mdbcomp__trace_counts__parse_path_port_line_5_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(mdbcomp__trace_counts__parse_path_port_line_5_0_i7);
	}
	MR_tag_alloc_heap(MR_sv(2), 0, (MR_Integer) 1);
	MR_tfield(0, MR_sv(2), 0) = MR_r2;
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(string__to_int_2_0,
		mdbcomp__trace_counts__parse_path_port_line_5_0_i22);
MR_def_label(mdbcomp__trace_counts__parse_path_port_line_5_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r1 = MR_r2;
	MR_r2 = (MR_Word) MR_string_const("<", 1);
	MR_np_call_localret_ent(string__prefix_2_0,
		mdbcomp__trace_counts__parse_path_port_line_5_0_i12);
MR_def_label(mdbcomp__trace_counts__parse_path_port_line_5_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(mdbcomp__trace_counts__parse_path_port_line_5_0_i3);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = (MR_Word) MR_string_const(">", 1);
	MR_np_call_localret_ent(string__suffix_2_0,
		mdbcomp__trace_counts__parse_path_port_line_5_0_i14);
MR_def_label(mdbcomp__trace_counts__parse_path_port_line_5_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(mdbcomp__trace_counts__parse_path_port_line_5_0_i3);
	}
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(string__length_2_0,
		mdbcomp__trace_counts__parse_path_port_line_5_0_i16);
MR_def_label(mdbcomp__trace_counts__parse_path_port_line_5_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = (MR_Integer) 1;
	MR_r3 = ((MR_Integer) MR_tempr1 - (MR_Integer) 2);
	}
	MR_np_call_localret_ent(string__substring_4_0,
		mdbcomp__trace_counts__parse_path_port_line_5_0_i17);
MR_def_label(mdbcomp__trace_counts__parse_path_port_line_5_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(mdbcomp__program_representation__goal_path_from_string_2_0,
		mdbcomp__trace_counts__parse_path_port_line_5_0_i18);
MR_def_label(mdbcomp__trace_counts__parse_path_port_line_5_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(mdbcomp__trace_counts__parse_path_port_line_5_0_i3);
	}
	MR_tag_alloc_heap(MR_sv(2), 1, (MR_Integer) 1);
	MR_tfield(1, MR_sv(2), 0) = MR_r2;
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(string__to_int_2_0,
		mdbcomp__trace_counts__parse_path_port_line_5_0_i22);
MR_def_label(mdbcomp__trace_counts__parse_path_port_line_5_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(mdbcomp__trace_counts__parse_path_port_line_5_0_i3);
	}
	if (MR_LTAGS_TESTR(MR_sv(4),0,0)) {
		MR_GOTO_LAB(mdbcomp__trace_counts__parse_path_port_line_5_0_i25);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tempr1;
	MR_r4 = (MR_Integer) 0;
	MR_r5 = (MR_Integer) 1;
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_r1 = MR_TRUE;
	MR_proceed();
	}
MR_def_label(mdbcomp__trace_counts__parse_path_port_line_5_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_r3 = MR_tfield(1, MR_tempr1, 1);
	if (MR_LTAGS_TESTR(MR_r3,0,0)) {
		MR_GOTO_LAB(mdbcomp__trace_counts__parse_path_port_line_5_0_i27);
	}
	MR_sv(3) = MR_r2;
	MR_r1 = MR_tfield(1, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(string__to_int_2_0,
		mdbcomp__trace_counts__parse_path_port_line_5_0_i28);
MR_def_label(mdbcomp__trace_counts__parse_path_port_line_5_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(mdbcomp__trace_counts__parse_path_port_line_5_0_i3);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_tempr1;
	MR_r5 = (MR_Integer) 1;
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_r1 = MR_TRUE;
	MR_proceed();
	}
MR_def_label(mdbcomp__trace_counts__parse_path_port_line_5_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r3;
	MR_tempr1 = MR_tfield(1, MR_tempr2, 1);
	if (MR_LTAGS_TESTR(MR_tempr1,0,0)) {
		MR_GOTO_LAB(mdbcomp__trace_counts__parse_path_port_line_5_0_i3);
	}
	MR_sv(3) = MR_r2;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = MR_tfield(1, MR_tempr2, 0);
	MR_r1 = MR_tfield(1, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(string__to_int_2_0,
		mdbcomp__trace_counts__parse_path_port_line_5_0_i31);
MR_def_label(mdbcomp__trace_counts__parse_path_port_line_5_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(mdbcomp__trace_counts__parse_path_port_line_5_0_i3);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = MR_r2;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(string__to_int_2_0,
		mdbcomp__trace_counts__parse_path_port_line_5_0_i33);
MR_def_label(mdbcomp__trace_counts__parse_path_port_line_5_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(mdbcomp__trace_counts__parse_path_port_line_5_0_i3);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(4);
	MR_r5 = MR_tempr1;
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_r1 = MR_TRUE;
	MR_proceed();
	}
MR_def_label(mdbcomp__trace_counts__parse_path_port_line_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
MR_def_label(mdbcomp__trace_counts__parse_path_port_line_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(mdbcomp__trace_counts__parse_path_port_line_5_0_i1);
	}
	MR_r2 = MR_tfield(1, MR_r1, 1);
	if (MR_LTAGS_TEST(MR_r2,0,0)) {
		MR_GOTO_LAB(mdbcomp__trace_counts__parse_path_port_line_5_0_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(1, MR_r2, 1);
	if (MR_LTAGS_TEST(MR_tempr1,0,0)) {
		MR_GOTO_LAB(mdbcomp__trace_counts__parse_path_port_line_5_0_i1);
	}
	MR_sv(1) = MR_tfield(1, MR_r2, 0);
	MR_sv(2) = MR_tfield(1, MR_tempr1, 0);
	MR_sv(3) = MR_tfield(1, MR_tempr1, 1);
	MR_r1 = MR_tfield(1, MR_r1, 0);
	}
	MR_np_call_localret_ent(mdbcomp__trace_counts__string_to_trace_port_2_0,
		mdbcomp__trace_counts__parse_path_port_line_5_0_i38);
MR_def_label(mdbcomp__trace_counts__parse_path_port_line_5_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(mdbcomp__trace_counts__parse_path_port_line_5_0_i1);
	}
	MR_sv(4) = MR_r2;
	MR_r1 = MR_sv(1);
	MR_r2 = (MR_Word) MR_string_const("<", 1);
	MR_np_call_localret_ent(string__prefix_2_0,
		mdbcomp__trace_counts__parse_path_port_line_5_0_i40);
MR_def_label(mdbcomp__trace_counts__parse_path_port_line_5_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(mdbcomp__trace_counts__parse_path_port_line_5_0_i1);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = (MR_Word) MR_string_const(">", 1);
	MR_np_call_localret_ent(string__suffix_2_0,
		mdbcomp__trace_counts__parse_path_port_line_5_0_i42);
MR_def_label(mdbcomp__trace_counts__parse_path_port_line_5_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(mdbcomp__trace_counts__parse_path_port_line_5_0_i1);
	}
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(string__length_2_0,
		mdbcomp__trace_counts__parse_path_port_line_5_0_i44);
MR_def_label(mdbcomp__trace_counts__parse_path_port_line_5_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = (MR_Integer) 1;
	MR_r3 = ((MR_Integer) MR_tempr1 - (MR_Integer) 2);
	}
	MR_np_call_localret_ent(string__substring_4_0,
		mdbcomp__trace_counts__parse_path_port_line_5_0_i45);
MR_def_label(mdbcomp__trace_counts__parse_path_port_line_5_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(mdbcomp__program_representation__goal_path_from_string_2_0,
		mdbcomp__trace_counts__parse_path_port_line_5_0_i46);
MR_def_label(mdbcomp__trace_counts__parse_path_port_line_5_0,46)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(mdbcomp__trace_counts__parse_path_port_line_5_0_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 2);
	MR_sv(1) = MR_tempr1;
	MR_tfield(2, MR_tempr1, 0) = MR_sv(4);
	MR_tfield(2, MR_tempr1, 1) = MR_r2;
	MR_r1 = MR_sv(2);
	}
	MR_np_call_localret_ent(string__to_int_2_0,
		mdbcomp__trace_counts__parse_path_port_line_5_0_i49);
MR_def_label(mdbcomp__trace_counts__parse_path_port_line_5_0,49)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(mdbcomp__trace_counts__parse_path_port_line_5_0_i1);
	}
	if (MR_LTAGS_TESTR(MR_sv(3),0,0)) {
		MR_GOTO_LAB(mdbcomp__trace_counts__parse_path_port_line_5_0_i52);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tempr1;
	MR_r4 = (MR_Integer) 0;
	MR_r5 = (MR_Integer) 1;
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_r1 = MR_TRUE;
	MR_proceed();
	}
MR_def_label(mdbcomp__trace_counts__parse_path_port_line_5_0,52)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_r3 = MR_tfield(1, MR_tempr1, 1);
	if (MR_LTAGS_TESTR(MR_r3,0,0)) {
		MR_GOTO_LAB(mdbcomp__trace_counts__parse_path_port_line_5_0_i54);
	}
	MR_sv(2) = MR_r2;
	MR_r1 = MR_tfield(1, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(string__to_int_2_0,
		mdbcomp__trace_counts__parse_path_port_line_5_0_i55);
MR_def_label(mdbcomp__trace_counts__parse_path_port_line_5_0,55)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(mdbcomp__trace_counts__parse_path_port_line_5_0_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_tempr1;
	MR_r5 = (MR_Integer) 1;
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_r1 = MR_TRUE;
	MR_proceed();
	}
MR_def_label(mdbcomp__trace_counts__parse_path_port_line_5_0,54)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r3;
	MR_tempr1 = MR_tfield(1, MR_tempr2, 1);
	if (MR_LTAGS_TESTR(MR_tempr1,0,0)) {
		MR_GOTO_LAB(mdbcomp__trace_counts__parse_path_port_line_5_0_i1);
	}
	MR_sv(2) = MR_r2;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_tfield(1, MR_tempr2, 0);
	MR_r1 = MR_tfield(1, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(string__to_int_2_0,
		mdbcomp__trace_counts__parse_path_port_line_5_0_i58);
MR_def_label(mdbcomp__trace_counts__parse_path_port_line_5_0,58)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(mdbcomp__trace_counts__parse_path_port_line_5_0_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r2;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(string__to_int_2_0,
		mdbcomp__trace_counts__parse_path_port_line_5_0_i60);
MR_def_label(mdbcomp__trace_counts__parse_path_port_line_5_0,60)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(mdbcomp__trace_counts__parse_path_port_line_5_0_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_tempr1;
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_r1 = MR_TRUE;
	MR_proceed();
	}
MR_def_label(mdbcomp__trace_counts__parse_path_port_line_5_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__string__length_1_0);
MR_decl_entry(lexer__string_get_token_list_max_5_0);
MR_decl_entry(fn__mdbcomp__prim_data__string_to_sym_name_1_0);
MR_decl_entry(io__get_line_number_3_0);
MR_decl_entry(exception__throw_1_0);
MR_decl_entry(svmap__remove_4_0);
MR_decl_entry(fn__string__int_to_string_1_0);

MR_BEGIN_MODULE(mdbcomp__trace_counts_module25)
	MR_init_entry1(mdbcomp__trace_counts__read_proc_trace_counts_8_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdbcomp__trace_counts__read_proc_trace_counts_8_0);
	MR_init_label10(mdbcomp__trace_counts__read_proc_trace_counts_8_0,270,2,4,13,14,19,20,8,29,34)
	MR_init_label10(mdbcomp__trace_counts__read_proc_trace_counts_8_0,35,32,24,47,51,60,55,67,46,72)
	MR_init_label6(mdbcomp__trace_counts__read_proc_trace_counts_8_0,70,74,5,84,85,86)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'read_proc_trace_counts'/8 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mdbcomp__trace_counts__read_proc_trace_counts_8_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
MR_def_label(mdbcomp__trace_counts__read_proc_trace_counts_8_0,270)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_sv(5) = MR_r5;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__string__length_1_0,
		mdbcomp__trace_counts__read_proc_trace_counts_8_0_i2);
MR_def_label(mdbcomp__trace_counts__read_proc_trace_counts_8_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 1) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 0;
	MR_tempr2 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr2;
	}
	MR_np_call_localret_ent(lexer__string_get_token_list_max_5_0,
		mdbcomp__trace_counts__read_proc_trace_counts_8_0_i4);
MR_def_label(mdbcomp__trace_counts__read_proc_trace_counts_8_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(mdbcomp__trace_counts__read_proc_trace_counts_8_0_i5);
	}
	MR_r2 = MR_tfield(1, MR_r1, 0);
	if (MR_PTAG_TESTR(MR_r2,1)) {
		MR_GOTO_LAB(mdbcomp__trace_counts__read_proc_trace_counts_8_0_i5);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(1, MR_r1, 2);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tfield(1, MR_r2, 0);
	if ((strcmp((char *) (MR_Word *) MR_r4, MR_string_const("module", 6)) != 0)) {
		MR_GOTO_LAB(mdbcomp__trace_counts__read_proc_trace_counts_8_0_i8);
	}
	if (MR_LTAGS_TEST(MR_tempr1,0,0)) {
		MR_GOTO_LAB(mdbcomp__trace_counts__read_proc_trace_counts_8_0_i8);
	}
	MR_r2 = MR_tfield(1, MR_tempr1, 2);
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(mdbcomp__trace_counts__read_proc_trace_counts_8_0_i8);
	}
	MR_r2 = MR_tfield(1, MR_tempr1, 0);
	if (MR_PTAG_TESTR(MR_r2,1)) {
		MR_GOTO_LAB(mdbcomp__trace_counts__read_proc_trace_counts_8_0_i8);
	}
	MR_r1 = MR_tfield(1, MR_r2, 0);
	}
	MR_np_call_localret_ent(fn__mdbcomp__prim_data__string_to_sym_name_1_0,
		mdbcomp__trace_counts__read_proc_trace_counts_8_0_i13);
MR_def_label(mdbcomp__trace_counts__read_proc_trace_counts_8_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(io__read_line_as_string_3_0,
		mdbcomp__trace_counts__read_proc_trace_counts_8_0_i14);
MR_def_label(mdbcomp__trace_counts__read_proc_trace_counts_8_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TEST(MR_r1,2)) {
		MR_GOTO_LAB(mdbcomp__trace_counts__read_proc_trace_counts_8_0_i32);
	}
	if (MR_PTAG_TEST(MR_r1,1)) {
		MR_GOTO_LAB(mdbcomp__trace_counts__read_proc_trace_counts_8_0_i19);
	}
	MR_r1 = MR_sv(5);
	MR_decr_sp_and_return(8);
MR_def_label(mdbcomp__trace_counts__read_proc_trace_counts_8_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_tfield(1, MR_r1, 0);
	MR_np_call_localret_ent(io__get_line_number_3_0,
		mdbcomp__trace_counts__read_proc_trace_counts_8_0_i20);
MR_def_label(mdbcomp__trace_counts__read_proc_trace_counts_8_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(4);
	MR_r5 = MR_sv(5);
	MR_succip_word = MR_sv(8);
	MR_GOTO_LAB(mdbcomp__trace_counts__read_proc_trace_counts_8_0_i270);
MR_def_label(mdbcomp__trace_counts__read_proc_trace_counts_8_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r4, MR_string_const("file", 4)) != 0)) {
		MR_GOTO_LAB(mdbcomp__trace_counts__read_proc_trace_counts_8_0_i24);
	}
	if (MR_LTAGS_TEST(MR_r3,0,0)) {
		MR_GOTO_LAB(mdbcomp__trace_counts__read_proc_trace_counts_8_0_i24);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_r2 = MR_tfield(1, MR_tempr1, 2);
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(mdbcomp__trace_counts__read_proc_trace_counts_8_0_i24);
	}
	MR_r2 = MR_tfield(1, MR_tempr1, 0);
	if (MR_PTAG_TESTR(MR_r2,1)) {
		MR_GOTO_LAB(mdbcomp__trace_counts__read_proc_trace_counts_8_0_i24);
	}
	MR_sv(1) = MR_tfield(1, MR_r2, 0);
	}
	MR_np_call_localret_ent(io__read_line_as_string_3_0,
		mdbcomp__trace_counts__read_proc_trace_counts_8_0_i29);
MR_def_label(mdbcomp__trace_counts__read_proc_trace_counts_8_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TEST(MR_r1,2)) {
		MR_GOTO_LAB(mdbcomp__trace_counts__read_proc_trace_counts_8_0_i32);
	}
	if (MR_PTAG_TEST(MR_r1,1)) {
		MR_GOTO_LAB(mdbcomp__trace_counts__read_proc_trace_counts_8_0_i34);
	}
	MR_r1 = MR_sv(5);
	MR_decr_sp_and_return(8);
MR_def_label(mdbcomp__trace_counts__read_proc_trace_counts_8_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_tfield(1, MR_r1, 0);
	MR_np_call_localret_ent(io__get_line_number_3_0,
		mdbcomp__trace_counts__read_proc_trace_counts_8_0_i35);
MR_def_label(mdbcomp__trace_counts__read_proc_trace_counts_8_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(1);
	MR_r5 = MR_sv(5);
	MR_succip_word = MR_sv(8);
	MR_GOTO_LAB(mdbcomp__trace_counts__read_proc_trace_counts_8_0_i270);
MR_def_label(mdbcomp__trace_counts__read_proc_trace_counts_8_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(io, error);
	MR_r2 = MR_tfield(2, MR_tempr1, 0);
	MR_succip_word = MR_sv(8);
	MR_decr_sp(8);
	MR_np_tailcall_ent(exception__throw_1_0);
	}
MR_def_label(mdbcomp__trace_counts__read_proc_trace_counts_8_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r3,0,0)) {
		MR_GOTO_LAB(mdbcomp__trace_counts__read_proc_trace_counts_8_0_i5);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6, MR_tempr7, MR_tempr8;
	MR_tempr7 = MR_r3;
	MR_tempr1 = MR_tfield(1, MR_tempr7, 2);
	MR_r5 = MR_tempr1;
	if (MR_LTAGS_TEST(MR_tempr1,0,0)) {
		MR_GOTO_LAB(mdbcomp__trace_counts__read_proc_trace_counts_8_0_i5);
	}
	MR_tempr2 = MR_tfield(1, MR_tempr7, 0);
	MR_r6 = MR_tempr2;
	if (MR_PTAG_TESTR(MR_tempr2,1)) {
		MR_GOTO_LAB(mdbcomp__trace_counts__read_proc_trace_counts_8_0_i5);
	}
	MR_tempr3 = MR_tfield(1, MR_tempr1, 2);
	MR_r7 = MR_tempr3;
	if (MR_LTAGS_TEST(MR_tempr3,0,0)) {
		MR_GOTO_LAB(mdbcomp__trace_counts__read_proc_trace_counts_8_0_i5);
	}
	MR_tempr4 = MR_tfield(1, MR_tempr3, 0);
	MR_r8 = MR_tempr4;
	if (MR_RTAGS_TESTR(MR_tempr4,3,0)) {
		MR_GOTO_LAB(mdbcomp__trace_counts__read_proc_trace_counts_8_0_i5);
	}
	if ((strcmp((char *) (MR_Word *) MR_r4, MR_string_const("fproc", 5)) != 0)) {
		MR_GOTO_LAB(mdbcomp__trace_counts__read_proc_trace_counts_8_0_i47);
	}
	MR_r9 = MR_tfield(1, MR_tempr3, 2);
	if (MR_LTAGS_TESTR(MR_r9,0,0)) {
		MR_GOTO_LAB(mdbcomp__trace_counts__read_proc_trace_counts_8_0_i5);
	}
	MR_tempr5 = MR_tfield(1, MR_tempr1, 0);
	MR_r7 = MR_tempr5;
	if (MR_RTAGS_TESTR(MR_tempr5,3,0)) {
		MR_GOTO_LAB(mdbcomp__trace_counts__read_proc_trace_counts_8_0_i5);
	}
	MR_tag_alloc_heap(MR_tempr6, 0, (MR_Integer) 6);
	MR_r5 = MR_tempr6;
	MR_tempr8 = MR_sv(3);
	MR_tfield(0, MR_tempr6, 0) = MR_tempr8;
	MR_tfield(0, MR_tempr6, 1) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr6, 2) = MR_tempr8;
	MR_tfield(0, MR_tempr6, 3) = MR_tfield(1, MR_tempr2, 0);
	MR_tfield(0, MR_tempr6, 4) = MR_tfield(3, MR_tempr5, 1);
	MR_tfield(0, MR_tempr6, 5) = MR_tfield(3, MR_tempr4, 1);
	MR_r1 = MR_tempr6;
	MR_r4 = MR_sv(5);
	MR_GOTO_LAB(mdbcomp__trace_counts__read_proc_trace_counts_8_0_i46);
	}
MR_def_label(mdbcomp__trace_counts__read_proc_trace_counts_8_0,47)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r4, MR_string_const("pproc", 5)) != 0)) {
		MR_GOTO_LAB(mdbcomp__trace_counts__read_proc_trace_counts_8_0_i51);
	}
	MR_r2 = MR_tfield(1, MR_r7, 2);
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(mdbcomp__trace_counts__read_proc_trace_counts_8_0_i5);
	}
	MR_r2 = MR_tfield(1, MR_r5, 0);
	if (MR_RTAGS_TESTR(MR_r2,3,0)) {
		MR_GOTO_LAB(mdbcomp__trace_counts__read_proc_trace_counts_8_0_i5);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 6);
	MR_r3 = MR_tempr1;
	MR_tempr2 = MR_sv(3);
	MR_tfield(0, MR_tempr1, 0) = MR_tempr2;
	MR_tfield(0, MR_tempr1, 1) = (MR_Integer) 0;
	MR_tfield(0, MR_tempr1, 2) = MR_tempr2;
	MR_tfield(0, MR_tempr1, 3) = MR_tfield(1, MR_r6, 0);
	MR_tfield(0, MR_tempr1, 4) = MR_tfield(3, MR_r2, 1);
	MR_tfield(0, MR_tempr1, 5) = MR_tfield(3, MR_r8, 1);
	MR_r1 = MR_tempr1;
	MR_r4 = MR_sv(5);
	MR_GOTO_LAB(mdbcomp__trace_counts__read_proc_trace_counts_8_0_i46);
	}
MR_def_label(mdbcomp__trace_counts__read_proc_trace_counts_8_0,51)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r4, MR_string_const("fprocdecl", 9)) != 0)) {
		MR_GOTO_LAB(mdbcomp__trace_counts__read_proc_trace_counts_8_0_i55);
	}
	MR_r2 = MR_tfield(1, MR_r5, 0);
	if (MR_PTAG_TESTR(MR_r2,1)) {
		MR_GOTO_LAB(mdbcomp__trace_counts__read_proc_trace_counts_8_0_i5);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(1, MR_r7, 2);
	if (MR_LTAGS_TEST(MR_tempr1,0,0)) {
		MR_GOTO_LAB(mdbcomp__trace_counts__read_proc_trace_counts_8_0_i5);
	}
	MR_tempr2 = MR_tfield(1, MR_tempr1, 2);
	if (MR_LTAGS_TESTR(MR_tempr2,0,0)) {
		MR_GOTO_LAB(mdbcomp__trace_counts__read_proc_trace_counts_8_0_i5);
	}
	MR_tempr2 = MR_tfield(1, MR_tempr1, 0);
	if (MR_RTAGS_TESTR(MR_tempr2,3,0)) {
		MR_GOTO_LAB(mdbcomp__trace_counts__read_proc_trace_counts_8_0_i5);
	}
	MR_sv(2) = MR_tfield(1, MR_r2, 0);
	MR_sv(6) = MR_tfield(3, MR_tempr2, 1);
	MR_sv(7) = MR_tfield(3, MR_r8, 1);
	MR_r1 = MR_tfield(1, MR_r6, 0);
	}
	MR_np_call_localret_ent(fn__mdbcomp__prim_data__string_to_sym_name_1_0,
		mdbcomp__trace_counts__read_proc_trace_counts_8_0_i60);
MR_def_label(mdbcomp__trace_counts__read_proc_trace_counts_8_0,60)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 6);
	MR_r5 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_sv(3);
	MR_tfield(0, MR_tempr1, 1) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 2) = MR_r1;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(7);
	MR_tfield(0, MR_tempr1, 5) = MR_sv(6);
	MR_r1 = MR_tempr1;
	MR_r4 = MR_sv(5);
	MR_GOTO_LAB(mdbcomp__trace_counts__read_proc_trace_counts_8_0_i46);
	}
MR_def_label(mdbcomp__trace_counts__read_proc_trace_counts_8_0,55)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r4, MR_string_const("pprocdecl", 9)) != 0)) {
		MR_GOTO_LAB(mdbcomp__trace_counts__read_proc_trace_counts_8_0_i5);
	}
	MR_r2 = MR_tfield(1, MR_r5, 0);
	if (MR_PTAG_TESTR(MR_r2,1)) {
		MR_GOTO_LAB(mdbcomp__trace_counts__read_proc_trace_counts_8_0_i5);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(1, MR_r7, 2);
	if (MR_LTAGS_TEST(MR_tempr1,0,0)) {
		MR_GOTO_LAB(mdbcomp__trace_counts__read_proc_trace_counts_8_0_i5);
	}
	MR_tempr2 = MR_tfield(1, MR_tempr1, 2);
	if (MR_LTAGS_TESTR(MR_tempr2,0,0)) {
		MR_GOTO_LAB(mdbcomp__trace_counts__read_proc_trace_counts_8_0_i5);
	}
	MR_tempr2 = MR_tfield(1, MR_tempr1, 0);
	if (MR_RTAGS_TESTR(MR_tempr2,3,0)) {
		MR_GOTO_LAB(mdbcomp__trace_counts__read_proc_trace_counts_8_0_i5);
	}
	MR_sv(2) = MR_tfield(1, MR_r2, 0);
	MR_sv(6) = MR_tfield(3, MR_tempr2, 1);
	MR_sv(7) = MR_tfield(3, MR_r8, 1);
	MR_r1 = MR_tfield(1, MR_r6, 0);
	}
	MR_np_call_localret_ent(fn__mdbcomp__prim_data__string_to_sym_name_1_0,
		mdbcomp__trace_counts__read_proc_trace_counts_8_0_i67);
MR_def_label(mdbcomp__trace_counts__read_proc_trace_counts_8_0,67)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 6);
	MR_tfield(0, MR_r2, 0) = MR_sv(3);
	MR_tfield(0, MR_r2, 1) = (MR_Integer) 0;
	MR_tfield(0, MR_r2, 2) = MR_r1;
	MR_tfield(0, MR_r2, 3) = MR_sv(2);
	MR_tfield(0, MR_r2, 4) = MR_sv(7);
	MR_tfield(0, MR_r2, 5) = MR_sv(6);
	MR_r1 = MR_r2;
	MR_r4 = MR_sv(5);
MR_def_label(mdbcomp__trace_counts__read_proc_trace_counts_8_0,46)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_sv(3);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(4);
	MR_tfield(0, MR_tempr1, 2) = MR_r1;
	MR_sv(1) = MR_tempr1;
	MR_sv(5) = MR_r4;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__trace_counts, proc_label_in_context);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,0);
	}
	MR_np_call_localret_ent(svmap__remove_4_0,
		mdbcomp__trace_counts__read_proc_trace_counts_8_0_i72);
MR_def_label(mdbcomp__trace_counts__read_proc_trace_counts_8_0,72)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(mdbcomp__trace_counts__read_proc_trace_counts_8_0_i70);
	}
	MR_r1 = MR_sv(1);
	MR_succip_word = MR_sv(8);
	MR_decr_sp(8);
	MR_np_tailcall_ent(mdbcomp__trace_counts__read_proc_trace_counts_2_6_0);
MR_def_label(mdbcomp__trace_counts__read_proc_trace_counts_8_0,70)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__trace_counts, path_port);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__trace_counts, line_no_and_count);
	MR_np_call_localret_ent(fn__map__init_0_0,
		mdbcomp__trace_counts__read_proc_trace_counts_8_0_i74);
MR_def_label(mdbcomp__trace_counts__read_proc_trace_counts_8_0,74)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(5);
	MR_succip_word = MR_sv(8);
	MR_decr_sp(8);
	MR_np_tailcall_ent(mdbcomp__trace_counts__read_proc_trace_counts_2_6_0);
	}
MR_def_label(mdbcomp__trace_counts__read_proc_trace_counts_8_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		mdbcomp__trace_counts__read_proc_trace_counts_8_0_i84);
MR_def_label(mdbcomp__trace_counts__read_proc_trace_counts_8_0,84)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const(" of execution trace", 19);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		mdbcomp__trace_counts__read_proc_trace_counts_8_0_i85);
MR_def_label(mdbcomp__trace_counts__read_proc_trace_counts_8_0,85)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("parse error on line ", 20);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		mdbcomp__trace_counts__read_proc_trace_counts_8_0_i86);
MR_def_label(mdbcomp__trace_counts__read_proc_trace_counts_8_0,86)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__trace_counts, trace_count_syntax_error);
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(8);
	MR_decr_sp(8);
	MR_np_tailcall_ent(exception__throw_1_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(map__det_insert_4_0);

MR_BEGIN_MODULE(mdbcomp__trace_counts_module26)
	MR_init_entry1(mdbcomp__trace_counts__read_proc_trace_counts_2_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdbcomp__trace_counts__read_proc_trace_counts_2_6_0);
	MR_init_label9(mdbcomp__trace_counts__read_proc_trace_counts_2_6_0,37,2,9,12,15,10,18,19,7)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'read_proc_trace_counts_2'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mdbcomp__trace_counts__read_proc_trace_counts_2_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
MR_def_label(mdbcomp__trace_counts__read_proc_trace_counts_2_6_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(4) = MR_r3;
	MR_np_call_localret_ent(io__read_line_as_string_3_0,
		mdbcomp__trace_counts__read_proc_trace_counts_2_6_0_i2);
MR_def_label(mdbcomp__trace_counts__read_proc_trace_counts_2_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TEST(MR_r1,2)) {
		MR_GOTO_LAB(mdbcomp__trace_counts__read_proc_trace_counts_2_6_0_i7);
	}
	if (MR_PTAG_TEST(MR_r1,1)) {
		MR_GOTO_LAB(mdbcomp__trace_counts__read_proc_trace_counts_2_6_0_i9);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__trace_counts, proc_label_in_context);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,0);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_r5 = MR_sv(4);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(svmap__det_insert_4_0);
MR_def_label(mdbcomp__trace_counts__read_proc_trace_counts_2_6_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(1, MR_r1, 0);
	MR_sv(3) = MR_tempr1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(mdbcomp__trace_counts__parse_path_port_line_5_0,
		mdbcomp__trace_counts__read_proc_trace_counts_2_6_0_i12);
MR_def_label(mdbcomp__trace_counts__read_proc_trace_counts_2_6_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(mdbcomp__trace_counts__read_proc_trace_counts_2_6_0_i10);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr1, 0) = MR_r3;
	MR_tfield(0, MR_tempr1, 1) = MR_r4;
	MR_tfield(0, MR_tempr1, 2) = MR_r5;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__trace_counts, path_port);
	MR_tempr2 = MR_r2;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__trace_counts, line_no_and_count);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_tempr2;
	MR_r5 = MR_tempr1;
	}
	MR_np_call_localret_ent(map__det_insert_4_0,
		mdbcomp__trace_counts__read_proc_trace_counts_2_6_0_i15);
MR_def_label(mdbcomp__trace_counts__read_proc_trace_counts_2_6_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(4);
	MR_succip_word = MR_sv(5);
	MR_GOTO_LAB(mdbcomp__trace_counts__read_proc_trace_counts_2_6_0_i37);
	}
MR_def_label(mdbcomp__trace_counts__read_proc_trace_counts_2_6_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(3);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__trace_counts, proc_label_in_context);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,0);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_r5 = MR_sv(4);
	MR_np_call_localret_ent(svmap__det_insert_4_0,
		mdbcomp__trace_counts__read_proc_trace_counts_2_6_0_i18);
MR_def_label(mdbcomp__trace_counts__read_proc_trace_counts_2_6_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_np_call_localret_ent(io__get_line_number_3_0,
		mdbcomp__trace_counts__read_proc_trace_counts_2_6_0_i19);
MR_def_label(mdbcomp__trace_counts__read_proc_trace_counts_2_6_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(3);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_r3 = MR_tfield(0, MR_tempr1, 0);
	MR_r4 = MR_tfield(0, MR_tempr1, 1);
	MR_r5 = MR_sv(2);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(mdbcomp__trace_counts__read_proc_trace_counts_8_0);
	}
MR_def_label(mdbcomp__trace_counts__read_proc_trace_counts_2_6_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(io, error);
	MR_r2 = MR_tfield(2, MR_tempr1, 0);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(exception__throw_1_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdbcomp__trace_counts_module27)
	MR_init_entry1(mdbcomp__trace_counts__read_trace_counts_setup_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdbcomp__trace_counts__read_trace_counts_setup_4_0);
	MR_init_label4(mdbcomp__trace_counts__read_trace_counts_setup_4_0,2,3,8,6)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'read_trace_counts_setup'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mdbcomp__trace_counts__read_trace_counts_setup_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(2) = MR_r1;
	MR_np_call_localret_ent(io__get_line_number_3_0,
		mdbcomp__trace_counts__read_trace_counts_setup_4_0_i2);
MR_def_label(mdbcomp__trace_counts__read_trace_counts_setup_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(io__read_line_as_string_3_0,
		mdbcomp__trace_counts__read_trace_counts_setup_4_0_i3);
MR_def_label(mdbcomp__trace_counts__read_trace_counts_setup_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TEST(MR_r1,2)) {
		MR_GOTO_LAB(mdbcomp__trace_counts__read_trace_counts_setup_4_0_i6);
	}
	if (MR_PTAG_TEST(MR_r1,1)) {
		MR_GOTO_LAB(mdbcomp__trace_counts__read_trace_counts_setup_4_0_i8);
	}
	MR_r1 = MR_sv(2);
	MR_decr_sp_and_return(3);
MR_def_label(mdbcomp__trace_counts__read_trace_counts_setup_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tfield(1, MR_tempr1, 0);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,5,1);
	MR_r4 = (MR_Word) MR_string_const("", 0);
	MR_r5 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(mdbcomp__trace_counts__read_proc_trace_counts_8_0);
	}
MR_def_label(mdbcomp__trace_counts__read_trace_counts_setup_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(io, error);
	MR_r2 = MR_tfield(2, MR_tempr1, 0);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(exception__throw_1_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(require__require_2_0);
MR_decl_entry(map__foldl_4_2);

MR_BEGIN_MODULE(mdbcomp__trace_counts_module28)
	MR_init_entry1(mdbcomp__trace_counts__write_proc_label_and_file_trace_counts_8_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdbcomp__trace_counts__write_proc_label_and_file_trace_counts_8_0);
	MR_init_label10(mdbcomp__trace_counts__write_proc_label_and_file_trace_counts_8_0,4,6,7,8,9,10,11,12,13,14)
	MR_init_label6(mdbcomp__trace_counts__write_proc_label_and_file_trace_counts_8_0,15,19,17,16,21,23)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'write_proc_label_and_file_trace_counts'/8 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mdbcomp__trace_counts__write_proc_label_and_file_trace_counts_8_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(4) = MR_tfield(0, MR_r1, 2);
	MR_sv(3) = MR_tfield(0, MR_r1, 1);
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(0, MR_r1, 0);
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_tempr1;
	MR_tempr2 = MR_r3;
	MR_sv(5) = MR_tempr2;
	MR_sv(6) = MR_r4;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_tempr2;
	}
	MR_np_call_localret_ent(__Unify___mdbcomp__prim_data__sym_name_0_0,
		mdbcomp__trace_counts__write_proc_label_and_file_trace_counts_8_0_i4);
MR_def_label(mdbcomp__trace_counts__write_proc_label_and_file_trace_counts_8_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(mdbcomp__trace_counts__write_proc_label_and_file_trace_counts_8_0_i10);
	}
	MR_r2 = MR_sv(1);
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(2);
	MR_tempr2 = MR_sv(6);
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__mdbcomp__prim_data__sym_name_to_string_1_0,
		mdbcomp__trace_counts__write_proc_label_and_file_trace_counts_8_0_i6);
MR_def_label(mdbcomp__trace_counts__write_proc_label_and_file_trace_counts_8_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("module ", 7);
	MR_np_call_localret_ent(io__write_string_3_0,
		mdbcomp__trace_counts__write_proc_label_and_file_trace_counts_8_0_i7);
MR_def_label(mdbcomp__trace_counts__write_proc_label_and_file_trace_counts_8_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(term_io__quote_atom_3_0,
		mdbcomp__trace_counts__write_proc_label_and_file_trace_counts_8_0_i8);
MR_def_label(mdbcomp__trace_counts__write_proc_label_and_file_trace_counts_8_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("\n", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		mdbcomp__trace_counts__write_proc_label_and_file_trace_counts_8_0_i9);
MR_def_label(mdbcomp__trace_counts__write_proc_label_and_file_trace_counts_8_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_sv(2);
MR_def_label(mdbcomp__trace_counts__write_proc_label_and_file_trace_counts_8_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_sv(3), (char *) (MR_Word *) MR_sv(6)) != 0)) {
		MR_GOTO_LAB(mdbcomp__trace_counts__write_proc_label_and_file_trace_counts_8_0_i11);
	}
	MR_r1 = MR_sv(6);
	MR_GOTO_LAB(mdbcomp__trace_counts__write_proc_label_and_file_trace_counts_8_0_i15);
MR_def_label(mdbcomp__trace_counts__write_proc_label_and_file_trace_counts_8_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("file ", 5);
	MR_np_call_localret_ent(io__write_string_3_0,
		mdbcomp__trace_counts__write_proc_label_and_file_trace_counts_8_0_i12);
MR_def_label(mdbcomp__trace_counts__write_proc_label_and_file_trace_counts_8_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(term_io__quote_atom_3_0,
		mdbcomp__trace_counts__write_proc_label_and_file_trace_counts_8_0_i13);
MR_def_label(mdbcomp__trace_counts__write_proc_label_and_file_trace_counts_8_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("\n", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		mdbcomp__trace_counts__write_proc_label_and_file_trace_counts_8_0_i14);
MR_def_label(mdbcomp__trace_counts__write_proc_label_and_file_trace_counts_8_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
MR_def_label(mdbcomp__trace_counts__write_proc_label_and_file_trace_counts_8_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(4),0)) {
		MR_GOTO_LAB(mdbcomp__trace_counts__write_proc_label_and_file_trace_counts_8_0_i17);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(10,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(mdbcomp__trace_counts__IntroducedFrom__pred__write_proc_label_and_check__847__1_2_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 4) = MR_tfield(0, MR_sv(4), 0);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Word) MR_string_const("write_proc_label_and_check: module mismatch", 43);
	}
	MR_np_call_localret_ent(require__require_2_0,
		mdbcomp__trace_counts__write_proc_label_and_file_trace_counts_8_0_i19);
MR_def_label(mdbcomp__trace_counts__write_proc_label_and_file_trace_counts_8_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(mdbcomp__trace_counts__write_proc_label_3_0,
		mdbcomp__trace_counts__write_proc_label_and_file_trace_counts_8_0_i21);
MR_def_label(mdbcomp__trace_counts__write_proc_label_and_file_trace_counts_8_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("write_proc_label: special_pred", 30);
	MR_np_call_localret_ent(require__error_1_0,
		mdbcomp__trace_counts__write_proc_label_and_file_trace_counts_8_0_i16);
MR_def_label(mdbcomp__trace_counts__write_proc_label_and_file_trace_counts_8_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(mdbcomp__trace_counts__write_proc_label_3_0,
		mdbcomp__trace_counts__write_proc_label_and_file_trace_counts_8_0_i21);
MR_def_label(mdbcomp__trace_counts__write_proc_label_and_file_trace_counts_8_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__trace_counts, path_port);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__trace_counts, line_no_and_count);
	MR_r3 = (MR_Word) MR_IO_CTOR_ADDR;
	MR_r4 = (MR_Word) MR_TAG_COMMON(0,3,5);
	MR_r5 = MR_sv(1);
	MR_np_call_localret_ent(map__foldl_4_2,
		mdbcomp__trace_counts__write_proc_label_and_file_trace_counts_8_0_i23);
MR_def_label(mdbcomp__trace_counts__write_proc_label_and_file_trace_counts_8_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(2);
	MR_decr_sp_and_return(7);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__mdbcomp__program_representation__goal_path_to_string_1_0);
MR_decl_entry(io__write_strings_3_0);

MR_BEGIN_MODULE(mdbcomp__trace_counts_module29)
	MR_init_entry1(mdbcomp__trace_counts__write_path_port_count_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdbcomp__trace_counts__write_path_port_count_4_0);
	MR_init_label10(mdbcomp__trace_counts__write_path_port_count_4_0,19,20,21,22,23,35,36,37,38,39)
	MR_init_label5(mdbcomp__trace_counts__write_path_port_count_4_0,3,4,5,6,7)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'write_path_port_count'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mdbcomp__trace_counts__write_path_port_count_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	if (MR_PTAG_TEST(MR_r1,1)) {
		MR_GOTO_LAB(mdbcomp__trace_counts__write_path_port_count_4_0_i3);
	}
	if (MR_PTAG_TEST(MR_r1,0)) {
		MR_GOTO_LAB(mdbcomp__trace_counts__write_path_port_count_4_0_i35);
	}
	MR_sv(1) = MR_tfield(2, MR_r1, 1);
	MR_sv(4) = MR_tfield(0, MR_r2, 2);
	MR_sv(3) = MR_tfield(0, MR_r2, 1);
	MR_sv(2) = MR_tfield(0, MR_r2, 0);
	MR_r1 = MR_tfield(2, MR_r1, 0);
	MR_np_call_localret_ent(mdbcomp__trace_counts__string_to_trace_port_2_1,
		mdbcomp__trace_counts__write_path_port_count_4_0_i19);
MR_def_label(mdbcomp__trace_counts__write_path_port_count_4_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__mdbcomp__program_representation__goal_path_to_string_1_0,
		mdbcomp__trace_counts__write_path_port_count_4_0_i20);
MR_def_label(mdbcomp__trace_counts__write_path_port_count_4_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		mdbcomp__trace_counts__write_path_port_count_4_0_i21);
MR_def_label(mdbcomp__trace_counts__write_path_port_count_4_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		mdbcomp__trace_counts__write_path_port_count_4_0_i22);
MR_def_label(mdbcomp__trace_counts__write_path_port_count_4_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		mdbcomp__trace_counts__write_path_port_count_4_0_i23);
MR_def_label(mdbcomp__trace_counts__write_path_port_count_4_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_TAG_COMMON(1,11,0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = (MR_Word) MR_string_const(" ", 1);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(4);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = (MR_Word) MR_string_const(" ", 1);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(3);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = (MR_Word) MR_string_const("> ", 2);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = (MR_Word) MR_string_const(" <", 2);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = MR_sv(1);
	MR_tfield(1, MR_r1, 1) = MR_tempr2;
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(io__write_strings_3_0);
	}
MR_def_label(mdbcomp__trace_counts__write_path_port_count_4_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_tfield(0, MR_r2, 2);
	MR_sv(3) = MR_tfield(0, MR_r2, 1);
	MR_sv(2) = MR_tfield(0, MR_r2, 0);
	MR_r1 = MR_tfield(0, MR_r1, 0);
	MR_np_call_localret_ent(mdbcomp__trace_counts__string_to_trace_port_2_1,
		mdbcomp__trace_counts__write_path_port_count_4_0_i36);
MR_def_label(mdbcomp__trace_counts__write_path_port_count_4_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		mdbcomp__trace_counts__write_path_port_count_4_0_i37);
MR_def_label(mdbcomp__trace_counts__write_path_port_count_4_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		mdbcomp__trace_counts__write_path_port_count_4_0_i38);
MR_def_label(mdbcomp__trace_counts__write_path_port_count_4_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		mdbcomp__trace_counts__write_path_port_count_4_0_i39);
MR_def_label(mdbcomp__trace_counts__write_path_port_count_4_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_TAG_COMMON(1,11,0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = (MR_Word) MR_string_const(" ", 1);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(3);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = (MR_Word) MR_string_const(" ", 1);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = (MR_Word) MR_string_const(" ", 1);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = MR_sv(1);
	MR_tfield(1, MR_r1, 1) = MR_tempr2;
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(io__write_strings_3_0);
	}
MR_def_label(mdbcomp__trace_counts__write_path_port_count_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_tfield(0, MR_r2, 2);
	MR_sv(3) = MR_tfield(0, MR_r2, 1);
	MR_sv(2) = MR_tfield(0, MR_r2, 0);
	MR_r1 = MR_tfield(1, MR_r1, 0);
	MR_np_call_localret_ent(fn__mdbcomp__program_representation__goal_path_to_string_1_0,
		mdbcomp__trace_counts__write_path_port_count_4_0_i4);
MR_def_label(mdbcomp__trace_counts__write_path_port_count_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		mdbcomp__trace_counts__write_path_port_count_4_0_i5);
MR_def_label(mdbcomp__trace_counts__write_path_port_count_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		mdbcomp__trace_counts__write_path_port_count_4_0_i6);
MR_def_label(mdbcomp__trace_counts__write_path_port_count_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		mdbcomp__trace_counts__write_path_port_count_4_0_i7);
MR_def_label(mdbcomp__trace_counts__write_path_port_count_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_TAG_COMMON(1,11,0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = (MR_Word) MR_string_const(" ", 1);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(3);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = (MR_Word) MR_string_const(" ", 1);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = (MR_Word) MR_string_const("> ", 2);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = (MR_Word) MR_string_const("<", 1);
	MR_tfield(1, MR_r1, 1) = MR_tempr1;
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(io__write_strings_3_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdbcomp__trace_counts_module30)
	MR_init_entry1(mdbcomp__trace_counts__restrict_trace_counts_2_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdbcomp__trace_counts__restrict_trace_counts_2_5_0);
	MR_init_label3(mdbcomp__trace_counts__restrict_trace_counts_2_5_0,5,2,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'restrict_trace_counts_2'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mdbcomp__trace_counts__restrict_trace_counts_2_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(0, MR_r2, 2);
	if (MR_PTAG_TESTR(MR_tempr1,0)) {
		MR_GOTO_LAB(mdbcomp__trace_counts__restrict_trace_counts_2_5_0_i3);
	}
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_r2 = MR_tfield(0, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(__Unify___mdbcomp__prim_data__sym_name_0_0,
		mdbcomp__trace_counts__restrict_trace_counts_2_5_0_i5);
MR_def_label(mdbcomp__trace_counts__restrict_trace_counts_2_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(mdbcomp__trace_counts__restrict_trace_counts_2_5_0_i2);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__trace_counts, proc_label_in_context);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,0);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_r5 = MR_sv(3);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(svmap__det_insert_4_0);
MR_def_label(mdbcomp__trace_counts__restrict_trace_counts_2_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_sv(3);
MR_def_label(mdbcomp__trace_counts__restrict_trace_counts_2_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r4;
	MR_decr_sp_and_return(4);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdbcomp__trace_counts_module31)
	MR_init_entry1(__Unify___mdbcomp__trace_counts__all_or_nonzero_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___mdbcomp__trace_counts__all_or_nonzero_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___mdbcomp__trace_counts__all_or_nonzero_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_r1 == MR_r2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(private_builtin__builtin_compare_int_3_0);

MR_BEGIN_MODULE(mdbcomp__trace_counts_module32)
	MR_init_entry1(__Compare___mdbcomp__trace_counts__all_or_nonzero_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___mdbcomp__trace_counts__all_or_nonzero_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___mdbcomp__trace_counts__all_or_nonzero_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdbcomp__trace_counts_module33)
	MR_init_entry1(__Unify___mdbcomp__trace_counts__base_count_file_type_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___mdbcomp__trace_counts__base_count_file_type_0_0);
	MR_init_label2(__Unify___mdbcomp__trace_counts__base_count_file_type_0_0,4,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___mdbcomp__trace_counts__base_count_file_type_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___mdbcomp__trace_counts__base_count_file_type_0_0_i4);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_tempr1;
	MR_tempr2 = MR_r2;
	MR_sv(2) = MR_tempr2;
	MR_r1 = MR_tfield(0, MR_tempr1, 0);
	MR_r2 = MR_tfield(0, MR_tempr2, 0);
	if ((MR_r1 != MR_r2)) {
		MR_GOTO_LAB(__Unify___mdbcomp__trace_counts__base_count_file_type_0_0_i1);
	}
	MR_r1 = MR_tfield(0, MR_tempr1, 1);
	MR_r2 = MR_tfield(0, MR_tempr2, 1);
	MR_r1 = (strcmp((char *) (MR_Word *) MR_r1, (char *) (MR_Word *) MR_r2) == 0);
	MR_decr_sp(2);
	MR_proceed();
	}
MR_def_label(__Unify___mdbcomp__trace_counts__base_count_file_type_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp(2);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___mdbcomp__trace_counts__base_count_file_type_0_0,1)
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

MR_BEGIN_MODULE(mdbcomp__trace_counts_module34)
	MR_init_entry1(__Compare___mdbcomp__trace_counts__base_count_file_type_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___mdbcomp__trace_counts__base_count_file_type_0_0);
	MR_init_label4(__Compare___mdbcomp__trace_counts__base_count_file_type_0_0,3,2,5,21)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___mdbcomp__trace_counts__base_count_file_type_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___mdbcomp__trace_counts__base_count_file_type_0_0_i3);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___mdbcomp__trace_counts__base_count_file_type_0_0_i2);
MR_def_label(__Compare___mdbcomp__trace_counts__base_count_file_type_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___mdbcomp__trace_counts__base_count_file_type_0_0,2)
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
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___mdbcomp__trace_counts__base_count_file_type_0_0_i5);
MR_def_label(__Compare___mdbcomp__trace_counts__base_count_file_type_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___mdbcomp__trace_counts__base_count_file_type_0_0_i21);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(private_builtin__builtin_compare_string_3_0);
MR_def_label(__Compare___mdbcomp__trace_counts__base_count_file_type_0_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdbcomp__trace_counts_module35)
	MR_init_entry1(__Unify___mdbcomp__trace_counts__line_no_and_count_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___mdbcomp__trace_counts__line_no_and_count_0_0);
	MR_init_label2(__Unify___mdbcomp__trace_counts__line_no_and_count_0_0,4,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___mdbcomp__trace_counts__line_no_and_count_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___mdbcomp__trace_counts__line_no_and_count_0_0_i4);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_tempr1;
	MR_tempr2 = MR_r2;
	MR_sv(2) = MR_tempr2;
	MR_r1 = MR_tfield(0, MR_tempr1, 0);
	MR_r2 = MR_tfield(0, MR_tempr2, 0);
	if ((MR_r1 != MR_r2)) {
		MR_GOTO_LAB(__Unify___mdbcomp__trace_counts__line_no_and_count_0_0_i1);
	}
	MR_r1 = MR_tfield(0, MR_tempr1, 1);
	MR_r2 = MR_tfield(0, MR_tempr2, 1);
	if ((MR_r1 != MR_r2)) {
		MR_GOTO_LAB(__Unify___mdbcomp__trace_counts__line_no_and_count_0_0_i1);
	}
	MR_r1 = MR_tfield(0, MR_tempr1, 2);
	MR_r2 = MR_tfield(0, MR_tempr2, 2);
	MR_r1 = (MR_r1 == MR_r2);
	MR_decr_sp(2);
	MR_proceed();
	}
MR_def_label(__Unify___mdbcomp__trace_counts__line_no_and_count_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp(2);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___mdbcomp__trace_counts__line_no_and_count_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp(2);
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdbcomp__trace_counts_module36)
	MR_init_entry1(__Compare___mdbcomp__trace_counts__line_no_and_count_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___mdbcomp__trace_counts__line_no_and_count_0_0);
	MR_init_label5(__Compare___mdbcomp__trace_counts__line_no_and_count_0_0,3,2,5,9,29)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___mdbcomp__trace_counts__line_no_and_count_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___mdbcomp__trace_counts__line_no_and_count_0_0_i3);
	}
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___mdbcomp__trace_counts__line_no_and_count_0_0_i2);
MR_def_label(__Compare___mdbcomp__trace_counts__line_no_and_count_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___mdbcomp__trace_counts__line_no_and_count_0_0,2)
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
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___mdbcomp__trace_counts__line_no_and_count_0_0_i5);
MR_def_label(__Compare___mdbcomp__trace_counts__line_no_and_count_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___mdbcomp__trace_counts__line_no_and_count_0_0_i29);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___mdbcomp__trace_counts__line_no_and_count_0_0_i9);
MR_def_label(__Compare___mdbcomp__trace_counts__line_no_and_count_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___mdbcomp__trace_counts__line_no_and_count_0_0_i29);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(4);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
MR_def_label(__Compare___mdbcomp__trace_counts__line_no_and_count_0_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___mdbcomp__program_representation__goal_path_0_0);

MR_BEGIN_MODULE(mdbcomp__trace_counts_module37)
	MR_init_entry1(__Unify___mdbcomp__trace_counts__path_port_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___mdbcomp__trace_counts__path_port_0_0);
	MR_init_label4(__Unify___mdbcomp__trace_counts__path_port_0_0,13,5,17,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___mdbcomp__trace_counts__path_port_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___mdbcomp__trace_counts__path_port_0_0_i17);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_tempr1;
	MR_tempr2 = MR_r2;
	MR_sv(2) = MR_tempr2;
	if (MR_PTAG_TEST(MR_tempr1,1)) {
		MR_GOTO_LAB(__Unify___mdbcomp__trace_counts__path_port_0_0_i5);
	}
	if (MR_PTAG_TEST(MR_tempr1,0)) {
		MR_GOTO_LAB(__Unify___mdbcomp__trace_counts__path_port_0_0_i13);
	}
	if (MR_PTAG_TESTR(MR_tempr2,2)) {
		MR_GOTO_LAB(__Unify___mdbcomp__trace_counts__path_port_0_0_i1);
	}
	MR_tempr3 = MR_tfield(2, MR_tempr1, 0);
	MR_tempr4 = MR_tfield(2, MR_tempr2, 0);
	if ((MR_tempr3 != MR_tempr4)) {
		MR_GOTO_LAB(__Unify___mdbcomp__trace_counts__path_port_0_0_i1);
	}
	MR_r1 = MR_tfield(2, MR_tempr1, 1);
	MR_r2 = MR_tfield(2, MR_tempr2, 1);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Unify___mdbcomp__program_representation__goal_path_0_0);
	}
MR_def_label(__Unify___mdbcomp__trace_counts__path_port_0_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),0)) {
		MR_GOTO_LAB(__Unify___mdbcomp__trace_counts__path_port_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(0, MR_sv(1), 0);
	MR_tempr2 = MR_tfield(0, MR_sv(2), 0);
	MR_r1 = (MR_tempr1 == MR_tempr2);
	MR_decr_sp_and_return(3);
	}
MR_def_label(__Unify___mdbcomp__trace_counts__path_port_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Unify___mdbcomp__trace_counts__path_port_0_0_i1);
	}
	MR_r1 = MR_tfield(1, MR_sv(1), 0);
	MR_r2 = MR_tfield(1, MR_sv(2), 0);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Unify___mdbcomp__program_representation__goal_path_0_0);
MR_def_label(__Unify___mdbcomp__trace_counts__path_port_0_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___mdbcomp__trace_counts__path_port_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Compare___mdbcomp__program_representation__goal_path_0_0);

MR_BEGIN_MODULE(mdbcomp__trace_counts_module38)
	MR_init_entry1(__Compare___mdbcomp__trace_counts__path_port_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___mdbcomp__trace_counts__path_port_0_0);
	MR_init_label10(__Compare___mdbcomp__trace_counts__path_port_0_0,3,2,18,26,30,5,56,10,7,93)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___mdbcomp__trace_counts__path_port_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___mdbcomp__trace_counts__path_port_0_0_i3);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___mdbcomp__trace_counts__path_port_0_0_i2);
MR_def_label(__Compare___mdbcomp__trace_counts__path_port_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___mdbcomp__trace_counts__path_port_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TEST(MR_sv(1),1)) {
		MR_GOTO_LAB(__Compare___mdbcomp__trace_counts__path_port_0_0_i5);
	}
	if (MR_PTAG_TEST(MR_sv(1),0)) {
		MR_GOTO_LAB(__Compare___mdbcomp__trace_counts__path_port_0_0_i26);
	}
	if (MR_PTAG_TEST(MR_sv(2),1)) {
		MR_GOTO_LAB(__Compare___mdbcomp__trace_counts__path_port_0_0_i10);
	}
	if (MR_PTAG_TEST(MR_sv(2),0)) {
		MR_GOTO_LAB(__Compare___mdbcomp__trace_counts__path_port_0_0_i10);
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
		__Compare___mdbcomp__trace_counts__path_port_0_0_i18);
MR_def_label(__Compare___mdbcomp__trace_counts__path_port_0_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___mdbcomp__trace_counts__path_port_0_0_i93);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(1);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Compare___mdbcomp__program_representation__goal_path_0_0);
MR_def_label(__Compare___mdbcomp__trace_counts__path_port_0_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TEST(MR_sv(2),1)) {
		MR_GOTO_LAB(__Compare___mdbcomp__trace_counts__path_port_0_0_i56);
	}
	if (MR_PTAG_TEST(MR_sv(2),0)) {
		MR_GOTO_LAB(__Compare___mdbcomp__trace_counts__path_port_0_0_i30);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___mdbcomp__trace_counts__path_port_0_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(0, MR_sv(1), 0);
	MR_r2 = MR_tfield(0, MR_sv(2), 0);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
MR_def_label(__Compare___mdbcomp__trace_counts__path_port_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TEST(MR_sv(2),1)) {
		MR_GOTO_LAB(__Compare___mdbcomp__trace_counts__path_port_0_0_i7);
	}
	if (MR_PTAG_TEST(MR_sv(2),0)) {
		MR_GOTO_LAB(__Compare___mdbcomp__trace_counts__path_port_0_0_i10);
	}
MR_def_label(__Compare___mdbcomp__trace_counts__path_port_0_0,56)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___mdbcomp__trace_counts__path_port_0_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___mdbcomp__trace_counts__path_port_0_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(1, MR_sv(1), 0);
	MR_r2 = MR_tfield(1, MR_sv(2), 0);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Compare___mdbcomp__program_representation__goal_path_0_0);
MR_def_label(__Compare___mdbcomp__trace_counts__path_port_0_0,93)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___mdbcomp__prim_data__proc_label_0_0);

MR_BEGIN_MODULE(mdbcomp__trace_counts_module39)
	MR_init_entry1(__Unify___mdbcomp__trace_counts__proc_label_in_context_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___mdbcomp__trace_counts__proc_label_in_context_0_0);
	MR_init_label3(__Unify___mdbcomp__trace_counts__proc_label_in_context_0_0,4,8,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___mdbcomp__trace_counts__proc_label_in_context_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___mdbcomp__trace_counts__proc_label_in_context_0_0_i8);
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
	MR_r1 = MR_tfield(0, MR_tempr1, 0);
	MR_r2 = MR_tfield(0, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(__Unify___mdbcomp__prim_data__sym_name_0_0,
		__Unify___mdbcomp__trace_counts__proc_label_in_context_0_0_i4);
MR_def_label(__Unify___mdbcomp__trace_counts__proc_label_in_context_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___mdbcomp__trace_counts__proc_label_in_context_0_0_i1);
	}
	if ((strcmp((char *) (MR_Word *) MR_sv(1), (char *) (MR_Word *) MR_sv(3)) != 0)) {
		MR_GOTO_LAB(__Unify___mdbcomp__trace_counts__proc_label_in_context_0_0_i1);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(4);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(__Unify___mdbcomp__prim_data__proc_label_0_0);
MR_def_label(__Unify___mdbcomp__trace_counts__proc_label_in_context_0_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___mdbcomp__trace_counts__proc_label_in_context_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Compare___mdbcomp__prim_data__sym_name_0_0);
MR_decl_entry(__Compare___mdbcomp__prim_data__proc_label_0_0);

MR_BEGIN_MODULE(mdbcomp__trace_counts_module40)
	MR_init_entry1(__Compare___mdbcomp__trace_counts__proc_label_in_context_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___mdbcomp__trace_counts__proc_label_in_context_0_0);
	MR_init_label5(__Compare___mdbcomp__trace_counts__proc_label_in_context_0_0,3,2,5,9,29)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___mdbcomp__trace_counts__proc_label_in_context_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___mdbcomp__trace_counts__proc_label_in_context_0_0_i3);
	}
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___mdbcomp__trace_counts__proc_label_in_context_0_0_i2);
MR_def_label(__Compare___mdbcomp__trace_counts__proc_label_in_context_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___mdbcomp__trace_counts__proc_label_in_context_0_0,2)
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
	MR_np_call_localret_ent(__Compare___mdbcomp__prim_data__sym_name_0_0,
		__Compare___mdbcomp__trace_counts__proc_label_in_context_0_0_i5);
MR_def_label(__Compare___mdbcomp__trace_counts__proc_label_in_context_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___mdbcomp__trace_counts__proc_label_in_context_0_0_i29);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(private_builtin__builtin_compare_string_3_0,
		__Compare___mdbcomp__trace_counts__proc_label_in_context_0_0_i9);
MR_def_label(__Compare___mdbcomp__trace_counts__proc_label_in_context_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___mdbcomp__trace_counts__proc_label_in_context_0_0_i29);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(4);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(__Compare___mdbcomp__prim_data__proc_label_0_0);
MR_def_label(__Compare___mdbcomp__trace_counts__proc_label_in_context_0_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___tree234__tree234_2_0);

MR_BEGIN_MODULE(mdbcomp__trace_counts_module41)
	MR_init_entry1(__Unify___mdbcomp__trace_counts__proc_trace_counts_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___mdbcomp__trace_counts__proc_trace_counts_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___mdbcomp__trace_counts__proc_trace_counts_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__trace_counts, path_port);
	MR_tempr2 = MR_r2;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__trace_counts, line_no_and_count);
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

MR_BEGIN_MODULE(mdbcomp__trace_counts_module42)
	MR_init_entry1(__Compare___mdbcomp__trace_counts__proc_trace_counts_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___mdbcomp__trace_counts__proc_trace_counts_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___mdbcomp__trace_counts__proc_trace_counts_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__trace_counts, path_port);
	MR_tempr2 = MR_r2;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__trace_counts, line_no_and_count);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tempr2;
	MR_np_tailcall_ent(__Compare___tree234__tree234_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdbcomp__trace_counts_module43)
	MR_init_entry1(__Unify___mdbcomp__trace_counts__read_trace_counts_list_result_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___mdbcomp__trace_counts__read_trace_counts_list_result_0_0);
	MR_init_label4(__Unify___mdbcomp__trace_counts__read_trace_counts_list_result_0_0,17,5,8,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___mdbcomp__trace_counts__read_trace_counts_list_result_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___mdbcomp__trace_counts__read_trace_counts_list_result_0_0_i17);
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
		MR_GOTO_LAB(__Unify___mdbcomp__trace_counts__read_trace_counts_list_result_0_0_i5);
	}
	if (MR_PTAG_TESTR(MR_tempr2,1)) {
		MR_GOTO_LAB(__Unify___mdbcomp__trace_counts__read_trace_counts_list_result_0_0_i1);
	}
	MR_r1 = MR_tfield(1, MR_tempr1, 0);
	MR_r2 = MR_tfield(1, MR_tempr2, 0);
	MR_r1 = (strcmp((char *) (MR_Word *) MR_r1, (char *) (MR_Word *) MR_r2) == 0);
	MR_decr_sp(3);
	MR_proceed();
	}
MR_def_label(__Unify___mdbcomp__trace_counts__read_trace_counts_list_result_0_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___mdbcomp__trace_counts__read_trace_counts_list_result_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),0)) {
		MR_GOTO_LAB(__Unify___mdbcomp__trace_counts__read_trace_counts_list_result_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_tfield(0, MR_tempr1, 1);
	MR_tempr2 = MR_sv(2);
	MR_sv(2) = MR_tfield(0, MR_tempr2, 1);
	MR_r1 = MR_tfield(0, MR_tempr1, 0);
	MR_r2 = MR_tfield(0, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(__Unify___mdbcomp__trace_counts__trace_count_file_type_0_0,
		__Unify___mdbcomp__trace_counts__read_trace_counts_list_result_0_0_i8);
MR_def_label(__Unify___mdbcomp__trace_counts__read_trace_counts_list_result_0_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___mdbcomp__trace_counts__read_trace_counts_list_result_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__trace_counts, proc_label_in_context);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,0);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Unify___tree234__tree234_2_0);
MR_def_label(__Unify___mdbcomp__trace_counts__read_trace_counts_list_result_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdbcomp__trace_counts_module44)
	MR_init_entry1(__Compare___mdbcomp__trace_counts__read_trace_counts_list_result_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___mdbcomp__trace_counts__read_trace_counts_list_result_0_0);
	MR_init_label7(__Compare___mdbcomp__trace_counts__read_trace_counts_list_result_0_0,3,2,7,5,10,12,46)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___mdbcomp__trace_counts__read_trace_counts_list_result_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___mdbcomp__trace_counts__read_trace_counts_list_result_0_0_i3);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___mdbcomp__trace_counts__read_trace_counts_list_result_0_0_i2);
MR_def_label(__Compare___mdbcomp__trace_counts__read_trace_counts_list_result_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___mdbcomp__trace_counts__read_trace_counts_list_result_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),1)) {
		MR_GOTO_LAB(__Compare___mdbcomp__trace_counts__read_trace_counts_list_result_0_0_i5);
	}
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Compare___mdbcomp__trace_counts__read_trace_counts_list_result_0_0_i7);
	}
	MR_r1 = MR_tfield(1, MR_sv(1), 0);
	MR_r2 = MR_tfield(1, MR_sv(2), 0);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(private_builtin__builtin_compare_string_3_0);
MR_def_label(__Compare___mdbcomp__trace_counts__read_trace_counts_list_result_0_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___mdbcomp__trace_counts__read_trace_counts_list_result_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Compare___mdbcomp__trace_counts__read_trace_counts_list_result_0_0_i10);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___mdbcomp__trace_counts__read_trace_counts_list_result_0_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(1);
	MR_tempr1 = MR_tfield(0, MR_tempr5, 1);
	MR_tempr6 = MR_sv(2);
	MR_tempr2 = MR_tfield(0, MR_tempr6, 1);
	MR_tempr3 = MR_tempr5;
	MR_sv(1) = MR_tempr2;
	MR_tempr4 = MR_tempr6;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_tfield(0, MR_tempr3, 0);
	MR_r2 = MR_tfield(0, MR_tempr4, 0);
	}
	MR_np_call_localret_ent(__Compare___mdbcomp__trace_counts__trace_count_file_type_0_0,
		__Compare___mdbcomp__trace_counts__read_trace_counts_list_result_0_0_i12);
MR_def_label(__Compare___mdbcomp__trace_counts__read_trace_counts_list_result_0_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___mdbcomp__trace_counts__read_trace_counts_list_result_0_0_i46);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__trace_counts, proc_label_in_context);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,0);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(1);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Compare___tree234__tree234_2_0);
MR_def_label(__Compare___mdbcomp__trace_counts__read_trace_counts_list_result_0_0,46)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___io__error_0_0);

MR_BEGIN_MODULE(mdbcomp__trace_counts_module45)
	MR_init_entry1(__Unify___mdbcomp__trace_counts__read_trace_counts_result_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___mdbcomp__trace_counts__read_trace_counts_result_0_0);
	MR_init_label8(__Unify___mdbcomp__trace_counts__read_trace_counts_result_0_0,11,13,22,5,27,7,29,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___mdbcomp__trace_counts__read_trace_counts_result_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___mdbcomp__trace_counts__read_trace_counts_result_0_0_i29);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_sv(1)),
		MR_LABEL_AP(__Unify___mdbcomp__trace_counts__read_trace_counts_result_0_0_i11) MR_AND
		MR_LABEL_AP(__Unify___mdbcomp__trace_counts__read_trace_counts_result_0_0_i22) MR_AND
		MR_LABEL_AP(__Unify___mdbcomp__trace_counts__read_trace_counts_result_0_0_i5) MR_AND
		MR_LABEL_AP(__Unify___mdbcomp__trace_counts__read_trace_counts_result_0_0_i27));
MR_def_label(__Unify___mdbcomp__trace_counts__read_trace_counts_result_0_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),0)) {
		MR_GOTO_LAB(__Unify___mdbcomp__trace_counts__read_trace_counts_result_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_tfield(0, MR_tempr1, 1);
	MR_tempr2 = MR_sv(2);
	MR_sv(2) = MR_tfield(0, MR_tempr2, 1);
	MR_r1 = MR_tfield(0, MR_tempr1, 0);
	MR_r2 = MR_tfield(0, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(__Unify___mdbcomp__trace_counts__trace_count_file_type_0_0,
		__Unify___mdbcomp__trace_counts__read_trace_counts_result_0_0_i13);
MR_def_label(__Unify___mdbcomp__trace_counts__read_trace_counts_result_0_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___mdbcomp__trace_counts__read_trace_counts_result_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__trace_counts, proc_label_in_context);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,0);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Unify___tree234__tree234_2_0);
MR_def_label(__Unify___mdbcomp__trace_counts__read_trace_counts_result_0_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Unify___mdbcomp__trace_counts__read_trace_counts_result_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(1, MR_sv(1), 0);
	MR_tempr2 = MR_tfield(1, MR_sv(2), 0);
	MR_r1 = (strcmp((char *) (MR_Word *) MR_tempr1, (char *) (MR_Word *) MR_tempr2) == 0);
	MR_decr_sp_and_return(3);
	}
MR_def_label(__Unify___mdbcomp__trace_counts__read_trace_counts_result_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),2)) {
		MR_GOTO_LAB(__Unify___mdbcomp__trace_counts__read_trace_counts_result_0_0_i1);
	}
	MR_r1 = MR_tfield(2, MR_sv(1), 0);
	MR_r2 = MR_tfield(2, MR_sv(2), 0);
	MR_r1 = (strcmp((char *) (MR_Word *) MR_r1, (char *) (MR_Word *) MR_r2) == 0);
	MR_decr_sp_and_return(3);
MR_def_label(__Unify___mdbcomp__trace_counts__read_trace_counts_result_0_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_tfield(3, MR_sv(1), 0),0)) {
		MR_GOTO_LAB(__Unify___mdbcomp__trace_counts__read_trace_counts_result_0_0_i7);
	}
	if (MR_RTAGS_TESTR(MR_sv(2),3,0)) {
		MR_GOTO_LAB(__Unify___mdbcomp__trace_counts__read_trace_counts_result_0_0_i1);
	}
	MR_r1 = MR_tfield(3, MR_sv(1), 1);
	MR_r2 = MR_tfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Unify___io__error_0_0);
MR_def_label(__Unify___mdbcomp__trace_counts__read_trace_counts_result_0_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,1)) {
		MR_GOTO_LAB(__Unify___mdbcomp__trace_counts__read_trace_counts_result_0_0_i1);
	}
	MR_r1 = MR_tfield(3, MR_sv(1), 1);
	MR_r2 = MR_tfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Unify___io__error_0_0);
MR_def_label(__Unify___mdbcomp__trace_counts__read_trace_counts_result_0_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___mdbcomp__trace_counts__read_trace_counts_result_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Compare___io__error_0_0);

MR_BEGIN_MODULE(mdbcomp__trace_counts_module46)
	MR_init_entry1(__Compare___mdbcomp__trace_counts__read_trace_counts_result_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___mdbcomp__trace_counts__read_trace_counts_result_0_0);
	MR_init_label10(__Compare___mdbcomp__trace_counts__read_trace_counts_result_0_0,3,31,35,37,48,63,107,5,7,79)
	MR_init_label4(__Compare___mdbcomp__trace_counts__read_trace_counts_result_0_0,88,18,89,131)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___mdbcomp__trace_counts__read_trace_counts_result_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___mdbcomp__trace_counts__read_trace_counts_result_0_0_i3);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_sv(1)),
		MR_LABEL_AP(__Compare___mdbcomp__trace_counts__read_trace_counts_result_0_0_i31) MR_AND
		MR_LABEL_AP(__Compare___mdbcomp__trace_counts__read_trace_counts_result_0_0_i63) MR_AND
		MR_LABEL_AP(__Compare___mdbcomp__trace_counts__read_trace_counts_result_0_0_i5) MR_AND
		MR_LABEL_AP(__Compare___mdbcomp__trace_counts__read_trace_counts_result_0_0_i79));
MR_def_label(__Compare___mdbcomp__trace_counts__read_trace_counts_result_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___mdbcomp__trace_counts__read_trace_counts_result_0_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_sv(2)),
		MR_LABEL_AP(__Compare___mdbcomp__trace_counts__read_trace_counts_result_0_0_i35) MR_AND
		MR_LABEL_AP(__Compare___mdbcomp__trace_counts__read_trace_counts_result_0_0_i107) MR_AND
		MR_LABEL_AP(__Compare___mdbcomp__trace_counts__read_trace_counts_result_0_0_i107) MR_AND
		MR_LABEL_AP(__Compare___mdbcomp__trace_counts__read_trace_counts_result_0_0_i48));
MR_def_label(__Compare___mdbcomp__trace_counts__read_trace_counts_result_0_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(1);
	MR_tempr1 = MR_tfield(0, MR_tempr5, 1);
	MR_tempr6 = MR_sv(2);
	MR_tempr2 = MR_tfield(0, MR_tempr6, 1);
	MR_tempr3 = MR_tempr5;
	MR_sv(1) = MR_tempr2;
	MR_tempr4 = MR_tempr6;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_tfield(0, MR_tempr3, 0);
	MR_r2 = MR_tfield(0, MR_tempr4, 0);
	}
	MR_np_call_localret_ent(__Compare___mdbcomp__trace_counts__trace_count_file_type_0_0,
		__Compare___mdbcomp__trace_counts__read_trace_counts_result_0_0_i37);
MR_def_label(__Compare___mdbcomp__trace_counts__read_trace_counts_result_0_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___mdbcomp__trace_counts__read_trace_counts_result_0_0_i131);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__trace_counts, proc_label_in_context);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,0);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(1);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Compare___tree234__tree234_2_0);
MR_def_label(__Compare___mdbcomp__trace_counts__read_trace_counts_result_0_0,48)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_tfield(3, MR_sv(2), 0),0)) {
		MR_GOTO_LAB(__Compare___mdbcomp__trace_counts__read_trace_counts_result_0_0_i107);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___mdbcomp__trace_counts__read_trace_counts_result_0_0,63)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_sv(2)),
		MR_LABEL_AP(__Compare___mdbcomp__trace_counts__read_trace_counts_result_0_0_i89) MR_AND
		MR_LABEL_AP(__Compare___mdbcomp__trace_counts__read_trace_counts_result_0_0_i7) MR_AND
		MR_LABEL_AP(__Compare___mdbcomp__trace_counts__read_trace_counts_result_0_0_i107) MR_AND
		MR_LABEL_AP(__Compare___mdbcomp__trace_counts__read_trace_counts_result_0_0_i107));
MR_def_label(__Compare___mdbcomp__trace_counts__read_trace_counts_result_0_0,107)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___mdbcomp__trace_counts__read_trace_counts_result_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_sv(2)),
		MR_LABEL_AP(__Compare___mdbcomp__trace_counts__read_trace_counts_result_0_0_i89) MR_AND
		MR_LABEL_AP(__Compare___mdbcomp__trace_counts__read_trace_counts_result_0_0_i89) MR_AND
		MR_LABEL_AP(__Compare___mdbcomp__trace_counts__read_trace_counts_result_0_0_i7) MR_AND
		MR_LABEL_AP(__Compare___mdbcomp__trace_counts__read_trace_counts_result_0_0_i107));
MR_def_label(__Compare___mdbcomp__trace_counts__read_trace_counts_result_0_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_mask_field(MR_sv(1), 0);
	MR_r2 = MR_mask_field(MR_sv(2), 0);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(private_builtin__builtin_compare_string_3_0);
MR_def_label(__Compare___mdbcomp__trace_counts__read_trace_counts_result_0_0,79)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_tfield(3, MR_sv(1), 0),0)) {
		MR_GOTO_LAB(__Compare___mdbcomp__trace_counts__read_trace_counts_result_0_0_i18);
	}
	if (MR_INT_NE(MR_tag(MR_sv(2)),3)) {
		MR_GOTO_LAB(__Compare___mdbcomp__trace_counts__read_trace_counts_result_0_0_i89);
	}
	if (MR_INT_NE(MR_tfield(3, MR_sv(2), 0),0)) {
		MR_GOTO_LAB(__Compare___mdbcomp__trace_counts__read_trace_counts_result_0_0_i107);
	}
MR_def_label(__Compare___mdbcomp__trace_counts__read_trace_counts_result_0_0,88)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(3, MR_sv(1), 1);
	MR_r2 = MR_tfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Compare___io__error_0_0);
MR_def_label(__Compare___mdbcomp__trace_counts__read_trace_counts_result_0_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_tag(MR_sv(2)),3)) {
		MR_GOTO_LAB(__Compare___mdbcomp__trace_counts__read_trace_counts_result_0_0_i89);
	}
	if (MR_INT_NE(MR_tfield(3, MR_sv(2), 0),0)) {
		MR_GOTO_LAB(__Compare___mdbcomp__trace_counts__read_trace_counts_result_0_0_i88);
	}
MR_def_label(__Compare___mdbcomp__trace_counts__read_trace_counts_result_0_0,89)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 2;
MR_def_label(__Compare___mdbcomp__trace_counts__read_trace_counts_result_0_0,131)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___list__list_1_0);

MR_BEGIN_MODULE(mdbcomp__trace_counts_module47)
	MR_init_entry1(__Unify___mdbcomp__trace_counts__trace_count_file_type_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___mdbcomp__trace_counts__trace_count_file_type_0_0);
	MR_init_label6(__Unify___mdbcomp__trace_counts__trace_count_file_type_0_0,57,7,11,15,21,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___mdbcomp__trace_counts__trace_count_file_type_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
MR_def_label(__Unify___mdbcomp__trace_counts__trace_count_file_type_0_0,57)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___mdbcomp__trace_counts__trace_count_file_type_0_0_i21);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_tempr1;
	MR_tempr2 = MR_r2;
	MR_sv(2) = MR_tempr2;
	if (MR_PTAG_TEST(MR_tempr1,1)) {
		MR_GOTO_LAB(__Unify___mdbcomp__trace_counts__trace_count_file_type_0_0_i15);
	}
	if (MR_PTAG_TEST(MR_tempr1,0)) {
		MR_GOTO_LAB(__Unify___mdbcomp__trace_counts__trace_count_file_type_0_0_i11);
	}
	if (MR_PTAG_TESTR(MR_tempr2,2)) {
		MR_GOTO_LAB(__Unify___mdbcomp__trace_counts__trace_count_file_type_0_0_i1);
	}
	MR_tempr3 = MR_tempr1;
	MR_sv(1) = MR_tfield(2, MR_tempr3, 1);
	MR_tempr4 = MR_tempr2;
	MR_sv(2) = MR_tfield(2, MR_tempr4, 1);
	MR_r1 = MR_tfield(2, MR_tempr3, 0);
	MR_r2 = MR_tfield(2, MR_tempr4, 0);
	}
	MR_np_localcall_lab(__Unify___mdbcomp__trace_counts__trace_count_file_type_0_0,
		__Unify___mdbcomp__trace_counts__trace_count_file_type_0_0_i7);
MR_def_label(__Unify___mdbcomp__trace_counts__trace_count_file_type_0_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___mdbcomp__trace_counts__trace_count_file_type_0_0_i1);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_GOTO_LAB(__Unify___mdbcomp__trace_counts__trace_count_file_type_0_0_i57);
MR_def_label(__Unify___mdbcomp__trace_counts__trace_count_file_type_0_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),0)) {
		MR_GOTO_LAB(__Unify___mdbcomp__trace_counts__trace_count_file_type_0_0_i1);
	}
	MR_r1 = MR_tfield(0, MR_sv(1), 0);
	MR_r2 = MR_tfield(0, MR_sv(2), 0);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Unify___mdbcomp__trace_counts__base_count_file_type_0_0);
MR_def_label(__Unify___mdbcomp__trace_counts__trace_count_file_type_0_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Unify___mdbcomp__trace_counts__trace_count_file_type_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr3 = MR_sv(1);
	MR_tempr1 = MR_tfield(1, MR_tempr3, 0);
	MR_tempr4 = MR_sv(2);
	MR_tempr2 = MR_tfield(1, MR_tempr4, 0);
	if ((MR_tempr1 != MR_tempr2)) {
		MR_GOTO_LAB(__Unify___mdbcomp__trace_counts__trace_count_file_type_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__trace_counts, trace_count_file_type);
	MR_r2 = MR_tfield(1, MR_tempr3, 1);
	MR_r3 = MR_tfield(1, MR_tempr4, 1);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Unify___list__list_1_0);
	}
MR_def_label(__Unify___mdbcomp__trace_counts__trace_count_file_type_0_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(3);
MR_def_label(__Unify___mdbcomp__trace_counts__trace_count_file_type_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Compare___list__list_1_0);

MR_BEGIN_MODULE(mdbcomp__trace_counts_module48)
	MR_init_entry1(__Compare___mdbcomp__trace_counts__trace_count_file_type_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___mdbcomp__trace_counts__trace_count_file_type_0_0);
	MR_init_label10(__Compare___mdbcomp__trace_counts__trace_count_file_type_0_0,95,3,2,9,18,21,26,62,29,30)
	MR_init_label2(__Compare___mdbcomp__trace_counts__trace_count_file_type_0_0,32,103)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___mdbcomp__trace_counts__trace_count_file_type_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
MR_def_label(__Compare___mdbcomp__trace_counts__trace_count_file_type_0_0,95)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___mdbcomp__trace_counts__trace_count_file_type_0_0_i3);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___mdbcomp__trace_counts__trace_count_file_type_0_0_i2);
MR_def_label(__Compare___mdbcomp__trace_counts__trace_count_file_type_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___mdbcomp__trace_counts__trace_count_file_type_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TEST(MR_sv(1),1)) {
		MR_GOTO_LAB(__Compare___mdbcomp__trace_counts__trace_count_file_type_0_0_i26);
	}
	if (MR_PTAG_TEST(MR_sv(1),0)) {
		MR_GOTO_LAB(__Compare___mdbcomp__trace_counts__trace_count_file_type_0_0_i18);
	}
	if (MR_PTAG_TEST(MR_sv(2),1)) {
		MR_GOTO_LAB(__Compare___mdbcomp__trace_counts__trace_count_file_type_0_0_i29);
	}
	if (MR_PTAG_TEST(MR_sv(2),0)) {
		MR_GOTO_LAB(__Compare___mdbcomp__trace_counts__trace_count_file_type_0_0_i29);
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
	MR_np_localcall_lab(__Compare___mdbcomp__trace_counts__trace_count_file_type_0_0,
		__Compare___mdbcomp__trace_counts__trace_count_file_type_0_0_i9);
MR_def_label(__Compare___mdbcomp__trace_counts__trace_count_file_type_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___mdbcomp__trace_counts__trace_count_file_type_0_0_i103);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(1);
	MR_succip_word = MR_sv(3);
	MR_GOTO_LAB(__Compare___mdbcomp__trace_counts__trace_count_file_type_0_0_i95);
MR_def_label(__Compare___mdbcomp__trace_counts__trace_count_file_type_0_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TEST(MR_sv(2),1)) {
		MR_GOTO_LAB(__Compare___mdbcomp__trace_counts__trace_count_file_type_0_0_i62);
	}
	if (MR_PTAG_TEST(MR_sv(2),0)) {
		MR_GOTO_LAB(__Compare___mdbcomp__trace_counts__trace_count_file_type_0_0_i21);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___mdbcomp__trace_counts__trace_count_file_type_0_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(0, MR_sv(1), 0);
	MR_r2 = MR_tfield(0, MR_sv(2), 0);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Compare___mdbcomp__trace_counts__base_count_file_type_0_0);
MR_def_label(__Compare___mdbcomp__trace_counts__trace_count_file_type_0_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TEST(MR_sv(2),1)) {
		MR_GOTO_LAB(__Compare___mdbcomp__trace_counts__trace_count_file_type_0_0_i30);
	}
	if (MR_PTAG_TEST(MR_sv(2),0)) {
		MR_GOTO_LAB(__Compare___mdbcomp__trace_counts__trace_count_file_type_0_0_i29);
	}
MR_def_label(__Compare___mdbcomp__trace_counts__trace_count_file_type_0_0,62)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___mdbcomp__trace_counts__trace_count_file_type_0_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___mdbcomp__trace_counts__trace_count_file_type_0_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(1);
	MR_tempr1 = MR_tfield(1, MR_tempr5, 1);
	MR_tempr6 = MR_sv(2);
	MR_tempr2 = MR_tfield(1, MR_tempr6, 1);
	MR_tempr3 = MR_tempr5;
	MR_sv(1) = MR_tempr2;
	MR_tempr4 = MR_tempr6;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_tfield(1, MR_tempr3, 0);
	MR_r2 = MR_tfield(1, MR_tempr4, 0);
	}
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___mdbcomp__trace_counts__trace_count_file_type_0_0_i32);
MR_def_label(__Compare___mdbcomp__trace_counts__trace_count_file_type_0_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___mdbcomp__trace_counts__trace_count_file_type_0_0_i103);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__trace_counts, trace_count_file_type);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(1);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Compare___list__list_1_0);
MR_def_label(__Compare___mdbcomp__trace_counts__trace_count_file_type_0_0,103)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdbcomp__trace_counts_module49)
	MR_init_entry1(__Unify___mdbcomp__trace_counts__trace_count_syntax_error_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___mdbcomp__trace_counts__trace_count_syntax_error_0_0);
	MR_init_label1(__Unify___mdbcomp__trace_counts__trace_count_syntax_error_0_0,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___mdbcomp__trace_counts__trace_count_syntax_error_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___mdbcomp__trace_counts__trace_count_syntax_error_0_0_i4);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_r1 = (strcmp((char *) (MR_Word *) MR_sv(1), (char *) (MR_Word *) MR_sv(2)) == 0);
	MR_decr_sp(2);
	MR_proceed();
MR_def_label(__Unify___mdbcomp__trace_counts__trace_count_syntax_error_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp(2);
	MR_r1 = MR_TRUE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdbcomp__trace_counts_module50)
	MR_init_entry1(__Compare___mdbcomp__trace_counts__trace_count_syntax_error_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___mdbcomp__trace_counts__trace_count_syntax_error_0_0);
	MR_init_label2(__Compare___mdbcomp__trace_counts__trace_count_syntax_error_0_0,3,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___mdbcomp__trace_counts__trace_count_syntax_error_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___mdbcomp__trace_counts__trace_count_syntax_error_0_0_i3);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___mdbcomp__trace_counts__trace_count_syntax_error_0_0_i2);
MR_def_label(__Compare___mdbcomp__trace_counts__trace_count_syntax_error_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___mdbcomp__trace_counts__trace_count_syntax_error_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(private_builtin__builtin_compare_string_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdbcomp__trace_counts_module51)
	MR_init_entry1(__Unify___mdbcomp__trace_counts__trace_counts_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___mdbcomp__trace_counts__trace_counts_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___mdbcomp__trace_counts__trace_counts_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__trace_counts, proc_label_in_context);
	MR_tempr2 = MR_r2;
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,0);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tempr2;
	MR_np_tailcall_ent(__Unify___tree234__tree234_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdbcomp__trace_counts_module52)
	MR_init_entry1(__Compare___mdbcomp__trace_counts__trace_counts_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___mdbcomp__trace_counts__trace_counts_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___mdbcomp__trace_counts__trace_counts_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__trace_counts, proc_label_in_context);
	MR_tempr2 = MR_r2;
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,0);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tempr2;
	MR_np_tailcall_ent(__Compare___tree234__tree234_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdbcomp__trace_counts_module53)
	MR_init_entry1(mdbcomp__trace_counts__IntroducedFrom__pred__write_proc_label_and_check__847__1_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdbcomp__trace_counts__IntroducedFrom__pred__write_proc_label_and_check__847__1_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__pred__write_proc_label_and_check__847__1'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mdbcomp__trace_counts__IntroducedFrom__pred__write_proc_label_and_check__847__1_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(__Unify___mdbcomp__prim_data__sym_name_0_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

static void mercury__mdbcomp__trace_counts_maybe_bunch_0(void)
{
	mdbcomp__trace_counts_module0();
	mdbcomp__trace_counts_module1();
	mdbcomp__trace_counts_module2();
	mdbcomp__trace_counts_module3();
	mdbcomp__trace_counts_module4();
	mdbcomp__trace_counts_module5();
	mdbcomp__trace_counts_module6();
	mdbcomp__trace_counts_module7();
	mdbcomp__trace_counts_module8();
	mdbcomp__trace_counts_module9();
	mdbcomp__trace_counts_module10();
	mdbcomp__trace_counts_module11();
	mdbcomp__trace_counts_module12();
	mdbcomp__trace_counts_module13();
	mdbcomp__trace_counts_module14();
	mdbcomp__trace_counts_module15();
	mdbcomp__trace_counts_module16();
	mdbcomp__trace_counts_module17();
	mdbcomp__trace_counts_module18();
	mdbcomp__trace_counts_module19();
	mdbcomp__trace_counts_module20();
	mdbcomp__trace_counts_module21();
	mdbcomp__trace_counts_module22();
	mdbcomp__trace_counts_module23();
	mdbcomp__trace_counts_module24();
	mdbcomp__trace_counts_module25();
	mdbcomp__trace_counts_module26();
	mdbcomp__trace_counts_module27();
	mdbcomp__trace_counts_module28();
	mdbcomp__trace_counts_module29();
	mdbcomp__trace_counts_module30();
	mdbcomp__trace_counts_module31();
	mdbcomp__trace_counts_module32();
	mdbcomp__trace_counts_module33();
	mdbcomp__trace_counts_module34();
	mdbcomp__trace_counts_module35();
	mdbcomp__trace_counts_module36();
	mdbcomp__trace_counts_module37();
	mdbcomp__trace_counts_module38();
	mdbcomp__trace_counts_module39();
}

static void mercury__mdbcomp__trace_counts_maybe_bunch_1(void)
{
	mdbcomp__trace_counts_module40();
	mdbcomp__trace_counts_module41();
	mdbcomp__trace_counts_module42();
	mdbcomp__trace_counts_module43();
	mdbcomp__trace_counts_module44();
	mdbcomp__trace_counts_module45();
	mdbcomp__trace_counts_module46();
	mdbcomp__trace_counts_module47();
	mdbcomp__trace_counts_module48();
	mdbcomp__trace_counts_module49();
	mdbcomp__trace_counts_module50();
	mdbcomp__trace_counts_module51();
	mdbcomp__trace_counts_module52();
	mdbcomp__trace_counts_module53();
}

/* suppress gcc -Wmissing-decls warnings */
void mercury__mdbcomp__trace_counts__init(void);
void mercury__mdbcomp__trace_counts__init_type_tables(void);
void mercury__mdbcomp__trace_counts__init_debugger(void);
#ifdef MR_DEEP_PROFILING
void mercury__mdbcomp__trace_counts__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp);
#endif
#ifdef MR_RECORD_TERM_SIZES
void mercury__mdbcomp__trace_counts__init_complexity_procs(void);
#endif

void mercury__mdbcomp__trace_counts__init(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	mercury__mdbcomp__trace_counts_maybe_bunch_0();
	mercury__mdbcomp__trace_counts_maybe_bunch_1();
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_mdbcomp__trace_counts__type_ctor_info_all_or_nonzero_0,
		mdbcomp__trace_counts__all_or_nonzero_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_mdbcomp__trace_counts__type_ctor_info_base_count_file_type_0,
		mdbcomp__trace_counts__base_count_file_type_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_mdbcomp__trace_counts__type_ctor_info_line_no_and_count_0,
		mdbcomp__trace_counts__line_no_and_count_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_mdbcomp__trace_counts__type_ctor_info_path_port_0,
		mdbcomp__trace_counts__path_port_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_mdbcomp__trace_counts__type_ctor_info_proc_label_in_context_0,
		mdbcomp__trace_counts__proc_label_in_context_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_mdbcomp__trace_counts__type_ctor_info_proc_trace_counts_0,
		mdbcomp__trace_counts__proc_trace_counts_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_mdbcomp__trace_counts__type_ctor_info_read_trace_counts_list_result_0,
		mdbcomp__trace_counts__read_trace_counts_list_result_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_mdbcomp__trace_counts__type_ctor_info_read_trace_counts_result_0,
		mdbcomp__trace_counts__read_trace_counts_result_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_mdbcomp__trace_counts__type_ctor_info_trace_count_file_type_0,
		mdbcomp__trace_counts__trace_count_file_type_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_mdbcomp__trace_counts__type_ctor_info_trace_count_syntax_error_0,
		mdbcomp__trace_counts__trace_count_syntax_error_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_mdbcomp__trace_counts__type_ctor_info_trace_counts_0,
		mdbcomp__trace_counts__trace_counts_0_0);
	mercury__mdbcomp__trace_counts__init_debugger();
}

void mercury__mdbcomp__trace_counts__init_type_tables(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	{
		MR_register_type_ctor_info(
		&mercury_data_mdbcomp__trace_counts__type_ctor_info_all_or_nonzero_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_mdbcomp__trace_counts__type_ctor_info_base_count_file_type_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_mdbcomp__trace_counts__type_ctor_info_line_no_and_count_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_mdbcomp__trace_counts__type_ctor_info_path_port_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_mdbcomp__trace_counts__type_ctor_info_proc_label_in_context_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_mdbcomp__trace_counts__type_ctor_info_proc_trace_counts_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_mdbcomp__trace_counts__type_ctor_info_read_trace_counts_list_result_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_mdbcomp__trace_counts__type_ctor_info_read_trace_counts_result_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_mdbcomp__trace_counts__type_ctor_info_trace_count_file_type_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_mdbcomp__trace_counts__type_ctor_info_trace_count_syntax_error_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_mdbcomp__trace_counts__type_ctor_info_trace_counts_0);
	}
}


void mercury__mdbcomp__trace_counts__init_debugger(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}

#ifdef MR_DEEP_PROFILING

void mercury__mdbcomp__trace_counts__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp)
{
	MR_write_out_module_proc_reps_start(procrep_fp, &mercury_data__module_common_layout__mdbcomp__trace_counts);
	MR_write_out_module_proc_reps_end(procrep_fp);
}

#endif

#ifdef MR_RECORD_TERM_SIZES

void mercury__mdbcomp__trace_counts__init_complexity_procs(void)
{
}

#endif

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;
