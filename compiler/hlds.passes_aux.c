/*
** Automatically generated from `passes_aux.m'
** by the Mercury compiler,
** version rotd-2007-09-21, configured for i686-pc-linux-gnu.
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
INIT mercury__hlds__passes_aux__init
ENDINIT
*/

#define MR_ALLOW_RESET
#include "mercury_imp.h"
#line 24 "hlds.passes_aux.c"
#include "hlds.passes_aux.mh"

#line 27 "hlds.passes_aux.c"
#line 530 "../library/io.int"
#include "io.mh"

#line 31 "hlds.passes_aux.c"
#line 538 "../library/io.int"
#include "string.mh"

#line 35 "hlds.passes_aux.c"
#line 30 "libs.process_util.int"
#include "libs.process_util.mh"

#line 39 "hlds.passes_aux.c"
#line 87 "../library/table_builtin.int2"
#include "table_builtin.mh"

#line 43 "hlds.passes_aux.c"
#line 29 "../library/bitmap.int2"
#include "bitmap.mh"

#line 47 "hlds.passes_aux.c"
#line 28 "../library/time.int2"
#include "time.mh"

#line 51 "hlds.passes_aux.c"
#line 33 "../mdbcomp/mdbcomp.rtti_access.int2"
#include "mdbcomp.rtti_access.mh"

#line 55 "hlds.passes_aux.c"
#line 31 "../library/array.int2"
#include "array.mh"

#line 59 "hlds.passes_aux.c"
#line 60 "hlds.passes_aux.c"
#ifndef HLDS__PASSES_AUX_DECL_GUARD
#define HLDS__PASSES_AUX_DECL_GUARD

#line 64 "hlds.passes_aux.c"
#line 65 "hlds.passes_aux.c"

#endif
#line 68 "hlds.passes_aux.c"

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
	MR_Word * f1;
	MR_Integer f2;
	MR_Word * f3[9];
};
MR_STATIC_LINKAGE const struct mercury_type_1 mercury_common_1[];

struct mercury_type_2 {
	MR_Word * f1;
	MR_Integer f2;
	MR_Word * f3;
};
MR_STATIC_LINKAGE const struct mercury_type_2 mercury_common_2[];

struct mercury_type_3 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[9];
};
MR_STATIC_LINKAGE const struct mercury_type_3 mercury_common_3[];

struct mercury_type_4 {
	MR_Word * f1;
	MR_Word * f2;
	MR_Integer f3;
	MR_Word * f4;
};
MR_STATIC_LINKAGE const struct mercury_type_4 mercury_common_4[];

struct mercury_type_5 {
	MR_Word * f1;
	MR_Code * f2;
	MR_Integer f3;
};
MR_STATIC_LINKAGE const struct mercury_type_5 mercury_common_5[];

struct mercury_type_6 {
	MR_Word * f1;
	MR_Word * f2;
	MR_Integer f3;
	MR_Word * f4;
	MR_Word * f5;
};
MR_STATIC_LINKAGE const struct mercury_type_6 mercury_common_6[];

struct mercury_type_7 {
	MR_Word * f1;
	MR_Code * f2;
	MR_Integer f3;
	MR_Word * f4;
	MR_Word * f5;
};
MR_STATIC_LINKAGE const struct mercury_type_7 mercury_common_7[];

struct mercury_type_8 {
	MR_String f1;
	MR_Word * f2;
};
MR_STATIC_LINKAGE const struct mercury_type_8 mercury_common_8[];

struct mercury_type_9 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[4];
};
MR_STATIC_LINKAGE const struct mercury_type_9 mercury_common_9[];

extern const MR_TypeCtorInfo_Struct
	mercury_data_hlds__passes_aux__type_ctor_info_task_0,
	mercury_data_hlds__passes_aux__type_ctor_info_quote_char_0,
	mercury_data_hlds__passes_aux__type_ctor_info_pred_error_task_0,
	mercury_data_hlds__passes_aux__type_ctor_info_command_verbosity_0;
MR_decl_label4(hlds__passes_aux__handle_errors_6_0, 2,5,8,4)
MR_decl_label8(hlds__passes_aux__invoke_system_command_maybe_filter_output_7_0, 2,3,92,5,4,9,10,11)
MR_decl_label8(hlds__passes_aux__invoke_system_command_maybe_filter_output_7_0, 7,13,16,14,20,22,18,26)
MR_decl_label8(hlds__passes_aux__invoke_system_command_maybe_filter_output_7_0, 27,32,31,36,37,38,39,29)
MR_decl_label8(hlds__passes_aux__invoke_system_command_maybe_filter_output_7_0, 41,42,47,50,53,51,57,58)
MR_decl_label8(hlds__passes_aux__invoke_system_command_maybe_filter_output_7_0, 59,64,63,68,69,70,71,61)
MR_decl_label8(hlds__passes_aux__invoke_system_command_maybe_filter_output_7_0, 73,74,44,76,77,80,106,82)
MR_decl_label8(hlds__passes_aux__invoke_system_command_maybe_filter_output_7_0, 83,84,79,87,88,89,90,91)
MR_decl_label2(hlds__passes_aux__make_command_string_3_0, 7,27)
MR_decl_label8(hlds__passes_aux__maybe_report_sizes_3_0, 2,5,6,7,8,9,10,11)
MR_decl_label8(hlds__passes_aux__maybe_report_sizes_3_0, 12,13,14,15,16,17,18,19)
MR_decl_label3(hlds__passes_aux__maybe_report_sizes_3_0, 20,21,3)
MR_decl_label1(hlds__passes_aux__maybe_set_exit_status_3_0, 13)
MR_decl_label8(hlds__passes_aux__output_to_file_4_0, 2,3,4,5,6,7,8,11)
MR_decl_label7(hlds__passes_aux__output_to_file_4_0, 12,13,14,15,10,17,18)
MR_decl_label8(hlds__passes_aux__output_to_file_5_0, 2,3,4,5,6,7,8,11)
MR_decl_label8(hlds__passes_aux__output_to_file_5_0, 12,13,14,15,16,10,17,18)
MR_decl_label1(hlds__passes_aux__output_to_file_5_0, 19)
MR_decl_label2(hlds__passes_aux__process_all_nonimported_procs_5_0, 2,3)
MR_decl_label3(hlds__passes_aux__process_all_nonimported_procs_errors_7_0, 2,3,6)
MR_decl_label3(hlds__passes_aux__process_all_nonimported_procs_update_6_0, 2,3,4)
MR_decl_label2(hlds__passes_aux__process_all_nonimported_procs_update_errors_8_0, 2,3)
MR_decl_label2(hlds__passes_aux__process_matching_nonimported_procs_6_0, 2,3)
MR_decl_label3(hlds__passes_aux__process_matching_nonimported_procs_errors_8_0, 2,3,6)
MR_decl_label3(hlds__passes_aux__process_matching_nonimported_procs_update_7_0, 2,3,4)
MR_decl_label2(hlds__passes_aux__process_matching_nonimported_procs_update_errors_9_0, 2,3)
MR_decl_label7(hlds__passes_aux__process_nonimported_pred_9_0, 2,8,6,12,3,14,15)
MR_decl_label8(hlds__passes_aux__process_nonimported_procs_8_0, 43,4,5,6,7,10,12,14)
MR_decl_label8(hlds__passes_aux__process_nonimported_procs_8_0, 15,16,17,18,19,20,21,22)
MR_decl_label8(hlds__passes_aux__process_nonimported_procs_8_0, 24,26,27,28,29,8,30,31)
MR_decl_label6(hlds__passes_aux__process_nonimported_procs_8_0, 32,33,34,35,36,3)
MR_decl_label8(hlds__passes_aux__process_nonimported_procs_in_preds_8_0, 23,4,5,8,10,11,7,3)
MR_decl_label6(hlds__passes_aux__process_nonimported_procs_in_preds__ho4_8_0, 14,4,5,6,7,3)
MR_decl_label6(hlds__passes_aux__process_nonimported_procs_in_preds__ho5_8_0, 14,4,5,6,7,3)
MR_decl_label8(hlds__passes_aux__report_pred_name_mode_5_0, 4,7,8,9,10,3,12,13)
MR_decl_label8(hlds__passes_aux__report_pred_name_mode_5_0, 14,15,25,17,18,19,21,2)
MR_decl_label8(hlds__passes_aux__report_pred_proc_id_7_0, 2,3,4,5,6,7,8,10)
MR_decl_label7(hlds__passes_aux__report_pred_proc_id_7_0, 9,13,15,16,17,18,19)
MR_decl_label1(hlds__passes_aux__use_win32_0_0, 1)
MR_decl_label4(hlds__passes_aux__write_pred_progress_message_5_0, 2,5,6,3)
MR_decl_label4(hlds__passes_aux__write_proc_progress_message_6_0, 2,5,6,3)
MR_decl_label8(__Unify___hlds__passes_aux__task_0_0, 6,10,14,18,19,23,27,31)
MR_decl_label5(__Unify___hlds__passes_aux__task_0_0, 35,39,41,65,1)
MR_decl_label8(__Compare___hlds__passes_aux__task_0_0, 3,2,6,20,34,39,48,49)
MR_decl_label8(__Compare___hlds__passes_aux__task_0_0, 63,77,91,105,116,118,119,130)
MR_decl_label3(__Compare___hlds__passes_aux__task_0_0, 131,133,189)
MR_decl_static(hlds__passes_aux__handle_errors_6_0)
MR_decl_static(hlds__passes_aux__process_nonimported_procs_8_0)
MR_decl_static(hlds__passes_aux__process_nonimported_procs_in_preds_8_0)
MR_def_extern_entry(hlds__passes_aux__process_matching_nonimported_procs_errors_8_0)
MR_def_extern_entry(hlds__passes_aux__process_all_nonimported_procs_errors_7_0)
MR_def_extern_entry(hlds__passes_aux__process_all_nonimported_procs_5_0)
MR_def_extern_entry(hlds__passes_aux__process_matching_nonimported_procs_update_errors_9_0)
MR_def_extern_entry(hlds__passes_aux__process_all_nonimported_procs_update_errors_8_0)
MR_def_extern_entry(hlds__passes_aux__process_all_nonimported_procs_update_6_0)
MR_def_extern_entry(hlds__passes_aux__process_matching_nonimported_procs_6_0)
MR_def_extern_entry(hlds__passes_aux__process_matching_nonimported_procs_update_7_0)
MR_def_extern_entry(hlds__passes_aux__write_pred_progress_message_5_0)
MR_def_extern_entry(hlds__passes_aux__write_proc_progress_message_6_0)
MR_def_extern_entry(hlds__passes_aux__write_proc_progress_message_5_0)
MR_def_extern_entry(hlds__passes_aux__maybe_report_sizes_3_0)
MR_def_extern_entry(hlds__passes_aux__report_pred_name_mode_5_0)
MR_def_extern_entry(hlds__passes_aux__report_pred_proc_id_7_0)
MR_def_extern_entry(hlds__passes_aux__output_to_file_5_0)
MR_def_extern_entry(hlds__passes_aux__output_to_file_4_0)
MR_decl_static(hlds__passes_aux__use_dotnet_0_0)
MR_decl_static(hlds__passes_aux__use_win32_0_0)
MR_def_extern_entry(hlds__passes_aux__invoke_system_command_maybe_filter_output_7_0)
MR_def_extern_entry(hlds__passes_aux__invoke_system_command_6_0)
MR_def_extern_entry(hlds__passes_aux__make_command_string_3_0)
MR_def_extern_entry(hlds__passes_aux__maybe_set_exit_status_3_0)
MR_decl_static(hlds__passes_aux__process_nonimported_pred_9_0)
MR_def_extern_entry(__Unify___hlds__passes_aux__command_verbosity_0_0)
MR_def_extern_entry(__Compare___hlds__passes_aux__command_verbosity_0_0)
MR_def_extern_entry(__Unify___hlds__passes_aux__pred_error_task_0_0)
MR_def_extern_entry(__Compare___hlds__passes_aux__pred_error_task_0_0)
MR_def_extern_entry(__Unify___hlds__passes_aux__quote_char_0_0)
MR_def_extern_entry(__Compare___hlds__passes_aux__quote_char_0_0)
MR_def_extern_entry(__Unify___hlds__passes_aux__task_0_0)
MR_def_extern_entry(__Compare___hlds__passes_aux__task_0_0)
MR_decl_static(hlds__passes_aux__IntroducedFrom__pred__process_all_nonimported_procs_errors__237__1_1_0)
MR_decl_static(hlds__passes_aux__IntroducedFrom__pred__process_all_nonimported_procs__243__1_2_0)
MR_decl_static(hlds__passes_aux__IntroducedFrom__pred__process_all_nonimported_procs_update__254__1_2_0)
MR_decl_static(hlds__passes_aux__IntroducedFrom__pred__process_matching_nonimported_procs__271__1_2_0)
MR_decl_static(hlds__passes_aux__IntroducedFrom__pred__process_matching_nonimported_procs_update__284__1_2_0)
MR_decl_static(hlds__passes_aux__process_nonimported_procs_in_preds__ho4_8_0)
MR_decl_static(hlds__passes_aux__process_nonimported_procs_in_preds__ho5_8_0)
MR_decl_static(f_104_108_100_115_95_95_112_97_115_115_101_115_95_97_117_120_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_97_108_108_95_110_111_110_105_109_112_111_114_116_101_100_95_112_114_111_99_115_95_101_114_114_111_114_115_95_95_50_51_55_95_95_49_95_95_91_49_93_95_48_1_0)

extern const MR_TypeCtorInfo_Struct mercury_data_list__type_ctor_info_list_1;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__error_util__type_ctor_info_error_spec_0;
extern const MR_TypeCtorInfo_Struct mercury_data_list__type_ctor_info_list_1;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__error_util__type_ctor_info_error_spec_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_data__type_ctor_info_hlds_cons_defn_0;
static const struct mercury_type_0 mercury_common_0[4] =
{
{
{
MR_LIST_CTOR_ADDR,
MR_CTOR0_ADDR(parse_tree__error_util, error_spec)
}
},
{
{
MR_LIST_CTOR_ADDR,
MR_CTOR0_ADDR(parse_tree__error_util, error_spec)
}
},
{
{
MR_LIST_CTOR_ADDR,
MR_CTOR0_ADDR(parse_tree__error_util, error_spec)
}
},
{
{
MR_LIST_CTOR_ADDR,
MR_CTOR0_ADDR(hlds__hlds_data, hlds_cons_defn)
}
},
};

extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_pred_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_module__type_ctor_info_module_info_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_pred_info_0;
extern const MR_TypeCtorInfo_Struct mercury_data_io__type_ctor_info_state_0;
static const struct mercury_type_1 mercury_common_1[1] =
{
{
MR_CTOR0_ADDR(builtin, pred),
9,
{
MR_INT_CTOR_ADDR,
MR_CTOR0_ADDR(hlds__hlds_module, module_info),
MR_CTOR0_ADDR(hlds__hlds_module, module_info),
MR_CTOR0_ADDR(hlds__hlds_pred, pred_info),
MR_CTOR0_ADDR(hlds__hlds_pred, pred_info),
MR_COMMON(0,0),
MR_COMMON(0,0),
MR_IO_CTOR_ADDR,
MR_IO_CTOR_ADDR
}
},
};

static const struct mercury_type_2 mercury_common_2[1] =
{
{
MR_CTOR0_ADDR(builtin, pred),
1,
MR_CTOR0_ADDR(hlds__hlds_pred, pred_info)
},
};

static const MR_UserClosureId
mercury_data__closure_layout__hlds__passes_aux__process_matching_nonimported_procs_errors_8_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_module__type_ctor_info_module_info_0;
extern const MR_TypeCtorInfo_Struct mercury_data_io__type_ctor_info_state_0;
static const MR_UserClosureId
mercury_data__closure_layout__hlds__passes_aux__process_all_nonimported_procs_errors_7_0_2;
static const struct mercury_type_3 mercury_common_3[2] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__hlds__passes_aux__process_matching_nonimported_procs_errors_8_0_1,
(MR_Word *) (MR_Integer) 0
},
9,
{
MR_COMMON(1,0),
MR_COMMON(2,0),
MR_INT_CTOR_ADDR,
MR_CTOR0_ADDR(hlds__hlds_module, module_info),
MR_CTOR0_ADDR(hlds__hlds_module, module_info),
MR_COMMON(0,1),
MR_COMMON(0,1),
MR_IO_CTOR_ADDR,
MR_IO_CTOR_ADDR
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__hlds__passes_aux__process_all_nonimported_procs_errors_7_0_2,
(MR_Word *) (MR_Integer) 0
},
9,
{
MR_COMMON(1,0),
MR_COMMON(2,0),
MR_INT_CTOR_ADDR,
MR_CTOR0_ADDR(hlds__hlds_module, module_info),
MR_CTOR0_ADDR(hlds__hlds_module, module_info),
MR_COMMON(0,1),
MR_COMMON(0,1),
MR_IO_CTOR_ADDR,
MR_IO_CTOR_ADDR
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__hlds__passes_aux__process_all_nonimported_procs_errors_7_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_pred_info_0;
static const struct mercury_type_4 mercury_common_4[1] =
{
{
(MR_Word *) &mercury_data__closure_layout__hlds__passes_aux__process_all_nonimported_procs_errors_7_0_1,
(MR_Word *) (MR_Integer) 0,
1,
MR_CTOR0_ADDR(hlds__hlds_pred, pred_info)
},
};

static const struct mercury_type_5 mercury_common_5[1] =
{
{
MR_COMMON(4,0),
MR_ENTRY_AP(hlds__passes_aux__IntroducedFrom__pred__process_all_nonimported_procs_errors__237__1_1_0),
0
},
};

static const MR_UserClosureId
mercury_data__closure_layout__hlds__passes_aux__process_all_nonimported_procs_5_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__hlds__passes_aux__process_all_nonimported_procs_update_6_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__hlds__passes_aux__process_matching_nonimported_procs_6_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__hlds__passes_aux__process_matching_nonimported_procs_update_7_0_1;
static const struct mercury_type_6 mercury_common_6[4] =
{
{
(MR_Word *) &mercury_data__closure_layout__hlds__passes_aux__process_all_nonimported_procs_5_0_1,
(MR_Word *) (MR_Integer) 0,
2,
MR_COMMON(0,1),
MR_COMMON(0,1)
},
{
(MR_Word *) &mercury_data__closure_layout__hlds__passes_aux__process_all_nonimported_procs_update_6_0_1,
(MR_Word *) (MR_Integer) 0,
2,
MR_COMMON(0,1),
MR_COMMON(0,1)
},
{
(MR_Word *) &mercury_data__closure_layout__hlds__passes_aux__process_matching_nonimported_procs_6_0_1,
(MR_Word *) (MR_Integer) 0,
2,
MR_COMMON(0,1),
MR_COMMON(0,1)
},
{
(MR_Word *) &mercury_data__closure_layout__hlds__passes_aux__process_matching_nonimported_procs_update_7_0_1,
(MR_Word *) (MR_Integer) 0,
2,
MR_COMMON(0,1),
MR_COMMON(0,1)
},
};

static const struct mercury_type_7 mercury_common_7[2] =
{
{
MR_COMMON(6,1),
MR_ENTRY_AP(hlds__passes_aux__IntroducedFrom__pred__process_all_nonimported_procs_update__254__1_2_0),
2,
MR_tbmkword(0, 0),
MR_tbmkword(0, 0)
},
{
MR_COMMON(6,3),
MR_ENTRY_AP(hlds__passes_aux__IntroducedFrom__pred__process_matching_nonimported_procs_update__284__1_2_0),
2,
MR_tbmkword(0, 0),
MR_tbmkword(0, 0)
},
};

static const struct mercury_type_8 mercury_common_8[4] =
{
{
MR_string_const("\' for output.", 13),
MR_tbmkword(0, 0)
},
{
MR_string_const(" 2>&1", 5),
MR_tbmkword(0, 0)
},
{
MR_string_const(" \'", 2),
MR_tbmkword(0, 0)
},
{
MR_string_const(" \"", 2),
MR_tbmkword(0, 0)
},
};

static const MR_UserClosureId
mercury_data__closure_layout__hlds__passes_aux__invoke_system_command_maybe_filter_output_7_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_io__type_ctor_info_output_stream_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_character_0;
static const struct mercury_type_9 mercury_common_9[1] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__hlds__passes_aux__invoke_system_command_maybe_filter_output_7_0_1,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_CTOR0_ADDR(io, output_stream),
MR_CHAR_CTOR_ADDR,
MR_IO_CTOR_ADDR,
MR_IO_CTOR_ADDR
}
},
};
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_proc_info_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_proc_info_0;

static const MR_VA_TypeInfo_Struct3 mercury_data___vti_pred_3hlds__hlds_module__type_ctor_info_module_info_0hlds__hlds_pred__type_ctor_info_proc_info_0hlds__hlds_pred__type_ctor_info_proc_info_0 = {
	&mercury_data_builtin__type_ctor_info_pred_0,
	3,
{	(MR_TypeInfo) &mercury_data_hlds__hlds_module__type_ctor_info_module_info_0,
	(MR_TypeInfo) &mercury_data_hlds__hlds_pred__type_ctor_info_proc_info_0,
	(MR_TypeInfo) &mercury_data_hlds__hlds_pred__type_ctor_info_proc_info_0
}};

const MR_PseudoTypeInfo mercury_data_hlds__passes_aux__field_types_task_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data___vti_pred_3hlds__hlds_module__type_ctor_info_module_info_0hlds__hlds_pred__type_ctor_info_proc_info_0hlds__hlds_pred__type_ctor_info_proc_info_0
};

static const MR_DuFunctorDesc mercury_data_hlds__passes_aux__du_functor_desc_task_0_0 = {
	"update_proc",
	1,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_hlds__passes_aux__field_types_task_0_0,
	NULL,
	NULL
};

static const MR_VA_TypeInfo_Struct4 mercury_data___vti_pred_4builtin__type_ctor_info_int_0hlds__hlds_module__type_ctor_info_module_info_0hlds__hlds_pred__type_ctor_info_proc_info_0hlds__hlds_pred__type_ctor_info_proc_info_0 = {
	&mercury_data_builtin__type_ctor_info_pred_0,
	4,
{	(MR_TypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_TypeInfo) &mercury_data_hlds__hlds_module__type_ctor_info_module_info_0,
	(MR_TypeInfo) &mercury_data_hlds__hlds_pred__type_ctor_info_proc_info_0,
	(MR_TypeInfo) &mercury_data_hlds__hlds_pred__type_ctor_info_proc_info_0
}};

const MR_PseudoTypeInfo mercury_data_hlds__passes_aux__field_types_task_0_1[] = {
	(MR_PseudoTypeInfo) &mercury_data___vti_pred_4builtin__type_ctor_info_int_0hlds__hlds_module__type_ctor_info_module_info_0hlds__hlds_pred__type_ctor_info_proc_info_0hlds__hlds_pred__type_ctor_info_proc_info_0
};

static const MR_DuFunctorDesc mercury_data_hlds__passes_aux__du_functor_desc_task_0_1 = {
	"update_proc_predid",
	1,
	0,
	MR_SECTAG_NONE,
	1,
	-1,
	1,
	(MR_PseudoTypeInfo *) mercury_data_hlds__passes_aux__field_types_task_0_1,
	NULL,
	NULL
};

static const MR_VA_TypeInfo_Struct5 mercury_data___vti_pred_5builtin__type_ctor_info_int_0builtin__type_ctor_info_int_0hlds__hlds_module__type_ctor_info_module_info_0hlds__hlds_pred__type_ctor_info_proc_info_0hlds__hlds_pred__type_ctor_info_proc_info_0 = {
	&mercury_data_builtin__type_ctor_info_pred_0,
	5,
{	(MR_TypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_TypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_TypeInfo) &mercury_data_hlds__hlds_module__type_ctor_info_module_info_0,
	(MR_TypeInfo) &mercury_data_hlds__hlds_pred__type_ctor_info_proc_info_0,
	(MR_TypeInfo) &mercury_data_hlds__hlds_pred__type_ctor_info_proc_info_0
}};

const MR_PseudoTypeInfo mercury_data_hlds__passes_aux__field_types_task_0_2[] = {
	(MR_PseudoTypeInfo) &mercury_data___vti_pred_5builtin__type_ctor_info_int_0builtin__type_ctor_info_int_0hlds__hlds_module__type_ctor_info_module_info_0hlds__hlds_pred__type_ctor_info_proc_info_0hlds__hlds_pred__type_ctor_info_proc_info_0
};

static const MR_DuFunctorDesc mercury_data_hlds__passes_aux__du_functor_desc_task_0_2 = {
	"update_proc_predprocid",
	1,
	0,
	MR_SECTAG_NONE,
	2,
	-1,
	2,
	(MR_PseudoTypeInfo *) mercury_data_hlds__passes_aux__field_types_task_0_2,
	NULL,
	NULL
};

static const MR_VA_TypeInfo_Struct7 mercury_data___vti_pred_7builtin__type_ctor_info_int_0builtin__type_ctor_info_int_0hlds__hlds_module__type_ctor_info_module_info_0hlds__hlds_pred__type_ctor_info_proc_info_0hlds__hlds_pred__type_ctor_info_proc_info_0io__type_ctor_info_state_0io__type_ctor_info_state_0 = {
	&mercury_data_builtin__type_ctor_info_pred_0,
	7,
{	(MR_TypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_TypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_TypeInfo) &mercury_data_hlds__hlds_module__type_ctor_info_module_info_0,
	(MR_TypeInfo) &mercury_data_hlds__hlds_pred__type_ctor_info_proc_info_0,
	(MR_TypeInfo) &mercury_data_hlds__hlds_pred__type_ctor_info_proc_info_0,
	(MR_TypeInfo) &mercury_data_io__type_ctor_info_state_0,
	(MR_TypeInfo) &mercury_data_io__type_ctor_info_state_0
}};

const MR_PseudoTypeInfo mercury_data_hlds__passes_aux__field_types_task_0_3[] = {
	(MR_PseudoTypeInfo) &mercury_data___vti_pred_7builtin__type_ctor_info_int_0builtin__type_ctor_info_int_0hlds__hlds_module__type_ctor_info_module_info_0hlds__hlds_pred__type_ctor_info_proc_info_0hlds__hlds_pred__type_ctor_info_proc_info_0io__type_ctor_info_state_0io__type_ctor_info_state_0
};

static const MR_DuFunctorDesc mercury_data_hlds__passes_aux__du_functor_desc_task_0_3 = {
	"update_proc_io",
	1,
	0,
	MR_SECTAG_REMOTE,
	3,
	0,
	3,
	(MR_PseudoTypeInfo *) mercury_data_hlds__passes_aux__field_types_task_0_3,
	NULL,
	NULL
};

static const MR_VA_TypeInfo_Struct10 mercury_data___vti_pred_10builtin__type_ctor_info_int_0builtin__type_ctor_info_int_0hlds__hlds_module__type_ctor_info_module_info_0hlds__hlds_module__type_ctor_info_module_info_0hlds__hlds_pred__type_ctor_info_proc_info_0hlds__hlds_pred__type_ctor_info_proc_info_0builtin__type_ctor_info_int_0builtin__type_ctor_info_int_0io__type_ctor_info_state_0io__type_ctor_info_state_0 = {
	&mercury_data_builtin__type_ctor_info_pred_0,
	10,
{	(MR_TypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_TypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_TypeInfo) &mercury_data_hlds__hlds_module__type_ctor_info_module_info_0,
	(MR_TypeInfo) &mercury_data_hlds__hlds_module__type_ctor_info_module_info_0,
	(MR_TypeInfo) &mercury_data_hlds__hlds_pred__type_ctor_info_proc_info_0,
	(MR_TypeInfo) &mercury_data_hlds__hlds_pred__type_ctor_info_proc_info_0,
	(MR_TypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_TypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_TypeInfo) &mercury_data_io__type_ctor_info_state_0,
	(MR_TypeInfo) &mercury_data_io__type_ctor_info_state_0
}};

const MR_PseudoTypeInfo mercury_data_hlds__passes_aux__field_types_task_0_4[] = {
	(MR_PseudoTypeInfo) &mercury_data___vti_pred_10builtin__type_ctor_info_int_0builtin__type_ctor_info_int_0hlds__hlds_module__type_ctor_info_module_info_0hlds__hlds_module__type_ctor_info_module_info_0hlds__hlds_pred__type_ctor_info_proc_info_0hlds__hlds_pred__type_ctor_info_proc_info_0builtin__type_ctor_info_int_0builtin__type_ctor_info_int_0io__type_ctor_info_state_0io__type_ctor_info_state_0
};

static const MR_DuFunctorDesc mercury_data_hlds__passes_aux__du_functor_desc_task_0_4 = {
	"update_proc_error",
	1,
	0,
	MR_SECTAG_REMOTE,
	3,
	1,
	4,
	(MR_PseudoTypeInfo *) mercury_data_hlds__passes_aux__field_types_task_0_4,
	NULL,
	NULL
};

static const MR_FA_TypeInfo_Struct1 mercury_data_list__ti_list_1parse_tree__error_util__type_ctor_info_error_spec_0 = {
	&mercury_data_list__type_ctor_info_list_1,
{	(MR_TypeInfo) &mercury_data_parse_tree__error_util__type_ctor_info_error_spec_0
}};

static const MR_VA_TypeInfo_Struct9 mercury_data___vti_pred_9builtin__type_ctor_info_int_0hlds__hlds_module__type_ctor_info_module_info_0hlds__hlds_module__type_ctor_info_module_info_0hlds__hlds_pred__type_ctor_info_pred_info_0hlds__hlds_pred__type_ctor_info_pred_info_0list__ti_list_1parse_tree__error_util__type_ctor_info_error_spec_0list__ti_list_1parse_tree__error_util__type_ctor_info_error_spec_0io__type_ctor_info_state_0io__type_ctor_info_state_0 = {
	&mercury_data_builtin__type_ctor_info_pred_0,
	9,
{	(MR_TypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_TypeInfo) &mercury_data_hlds__hlds_module__type_ctor_info_module_info_0,
	(MR_TypeInfo) &mercury_data_hlds__hlds_module__type_ctor_info_module_info_0,
	(MR_TypeInfo) &mercury_data_hlds__hlds_pred__type_ctor_info_pred_info_0,
	(MR_TypeInfo) &mercury_data_hlds__hlds_pred__type_ctor_info_pred_info_0,
	(MR_TypeInfo) &mercury_data_list__ti_list_1parse_tree__error_util__type_ctor_info_error_spec_0,
	(MR_TypeInfo) &mercury_data_list__ti_list_1parse_tree__error_util__type_ctor_info_error_spec_0,
	(MR_TypeInfo) &mercury_data_io__type_ctor_info_state_0,
	(MR_TypeInfo) &mercury_data_io__type_ctor_info_state_0
}};

const MR_PseudoTypeInfo mercury_data_hlds__passes_aux__field_types_task_0_5[] = {
	(MR_PseudoTypeInfo) &mercury_data___vti_pred_9builtin__type_ctor_info_int_0hlds__hlds_module__type_ctor_info_module_info_0hlds__hlds_module__type_ctor_info_module_info_0hlds__hlds_pred__type_ctor_info_pred_info_0hlds__hlds_pred__type_ctor_info_pred_info_0list__ti_list_1parse_tree__error_util__type_ctor_info_error_spec_0list__ti_list_1parse_tree__error_util__type_ctor_info_error_spec_0io__type_ctor_info_state_0io__type_ctor_info_state_0
};

static const MR_DuFunctorDesc mercury_data_hlds__passes_aux__du_functor_desc_task_0_5 = {
	"update_pred_error",
	1,
	0,
	MR_SECTAG_REMOTE,
	3,
	2,
	5,
	(MR_PseudoTypeInfo *) mercury_data_hlds__passes_aux__field_types_task_0_5,
	NULL,
	NULL
};

static const MR_VA_TypeInfo_Struct7 mercury_data___vti_pred_7builtin__type_ctor_info_int_0builtin__type_ctor_info_int_0hlds__hlds_pred__type_ctor_info_pred_info_0hlds__hlds_pred__type_ctor_info_proc_info_0hlds__hlds_pred__type_ctor_info_proc_info_0hlds__hlds_module__type_ctor_info_module_info_0hlds__hlds_module__type_ctor_info_module_info_0 = {
	&mercury_data_builtin__type_ctor_info_pred_0,
	7,
{	(MR_TypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_TypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_TypeInfo) &mercury_data_hlds__hlds_pred__type_ctor_info_pred_info_0,
	(MR_TypeInfo) &mercury_data_hlds__hlds_pred__type_ctor_info_proc_info_0,
	(MR_TypeInfo) &mercury_data_hlds__hlds_pred__type_ctor_info_proc_info_0,
	(MR_TypeInfo) &mercury_data_hlds__hlds_module__type_ctor_info_module_info_0,
	(MR_TypeInfo) &mercury_data_hlds__hlds_module__type_ctor_info_module_info_0
}};

const MR_PseudoTypeInfo mercury_data_hlds__passes_aux__field_types_task_0_6[] = {
	(MR_PseudoTypeInfo) &mercury_data___vti_pred_7builtin__type_ctor_info_int_0builtin__type_ctor_info_int_0hlds__hlds_pred__type_ctor_info_pred_info_0hlds__hlds_pred__type_ctor_info_proc_info_0hlds__hlds_pred__type_ctor_info_proc_info_0hlds__hlds_module__type_ctor_info_module_info_0hlds__hlds_module__type_ctor_info_module_info_0
};

static const MR_DuFunctorDesc mercury_data_hlds__passes_aux__du_functor_desc_task_0_6 = {
	"update_module",
	1,
	0,
	MR_SECTAG_REMOTE,
	3,
	3,
	6,
	(MR_PseudoTypeInfo *) mercury_data_hlds__passes_aux__field_types_task_0_6,
	NULL,
	NULL
};

static const MR_VA_TypeInfo_Struct8 mercury_data___vti_pred_8builtin__type_ctor_info_int_0builtin__type_ctor_info_int_0hlds__hlds_pred__type_ctor_info_proc_info_0hlds__hlds_pred__type_ctor_info_proc_info_0hlds__hlds_module__type_ctor_info_module_info_0hlds__hlds_module__type_ctor_info_module_info_0io__type_ctor_info_state_0io__type_ctor_info_state_0 = {
	&mercury_data_builtin__type_ctor_info_pred_0,
	8,
{	(MR_TypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_TypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_TypeInfo) &mercury_data_hlds__hlds_pred__type_ctor_info_proc_info_0,
	(MR_TypeInfo) &mercury_data_hlds__hlds_pred__type_ctor_info_proc_info_0,
	(MR_TypeInfo) &mercury_data_hlds__hlds_module__type_ctor_info_module_info_0,
	(MR_TypeInfo) &mercury_data_hlds__hlds_module__type_ctor_info_module_info_0,
	(MR_TypeInfo) &mercury_data_io__type_ctor_info_state_0,
	(MR_TypeInfo) &mercury_data_io__type_ctor_info_state_0
}};

const MR_PseudoTypeInfo mercury_data_hlds__passes_aux__field_types_task_0_7[] = {
	(MR_PseudoTypeInfo) &mercury_data___vti_pred_8builtin__type_ctor_info_int_0builtin__type_ctor_info_int_0hlds__hlds_pred__type_ctor_info_proc_info_0hlds__hlds_pred__type_ctor_info_proc_info_0hlds__hlds_module__type_ctor_info_module_info_0hlds__hlds_module__type_ctor_info_module_info_0io__type_ctor_info_state_0io__type_ctor_info_state_0
};

static const MR_DuFunctorDesc mercury_data_hlds__passes_aux__du_functor_desc_task_0_7 = {
	"update_module_io",
	1,
	0,
	MR_SECTAG_REMOTE,
	3,
	4,
	7,
	(MR_PseudoTypeInfo *) mercury_data_hlds__passes_aux__field_types_task_0_7,
	NULL,
	NULL
};
extern const MR_TypeCtorInfo_Struct mercury_data_univ__type_ctor_info_univ_0;
extern const MR_TypeCtorInfo_Struct mercury_data_univ__type_ctor_info_univ_0;

static const MR_VA_TypeInfo_Struct8 mercury_data___vti_pred_8builtin__type_ctor_info_int_0builtin__type_ctor_info_int_0hlds__hlds_pred__type_ctor_info_proc_info_0hlds__hlds_pred__type_ctor_info_proc_info_0univ__type_ctor_info_univ_0univ__type_ctor_info_univ_0hlds__hlds_module__type_ctor_info_module_info_0hlds__hlds_module__type_ctor_info_module_info_0 = {
	&mercury_data_builtin__type_ctor_info_pred_0,
	8,
{	(MR_TypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_TypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_TypeInfo) &mercury_data_hlds__hlds_pred__type_ctor_info_proc_info_0,
	(MR_TypeInfo) &mercury_data_hlds__hlds_pred__type_ctor_info_proc_info_0,
	(MR_TypeInfo) &mercury_data_univ__type_ctor_info_univ_0,
	(MR_TypeInfo) &mercury_data_univ__type_ctor_info_univ_0,
	(MR_TypeInfo) &mercury_data_hlds__hlds_module__type_ctor_info_module_info_0,
	(MR_TypeInfo) &mercury_data_hlds__hlds_module__type_ctor_info_module_info_0
}};

const MR_PseudoTypeInfo mercury_data_hlds__passes_aux__field_types_task_0_8[] = {
	(MR_PseudoTypeInfo) &mercury_data___vti_pred_8builtin__type_ctor_info_int_0builtin__type_ctor_info_int_0hlds__hlds_pred__type_ctor_info_proc_info_0hlds__hlds_pred__type_ctor_info_proc_info_0univ__type_ctor_info_univ_0univ__type_ctor_info_univ_0hlds__hlds_module__type_ctor_info_module_info_0hlds__hlds_module__type_ctor_info_module_info_0,
	(MR_PseudoTypeInfo) &mercury_data_univ__type_ctor_info_univ_0
};

static const MR_DuFunctorDesc mercury_data_hlds__passes_aux__du_functor_desc_task_0_8 = {
	"update_module_cookie",
	2,
	0,
	MR_SECTAG_REMOTE,
	3,
	5,
	8,
	(MR_PseudoTypeInfo *) mercury_data_hlds__passes_aux__field_types_task_0_8,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_hlds__passes_aux__du_stag_ordered_task_0_0[] = {
	&mercury_data_hlds__passes_aux__du_functor_desc_task_0_0

};

const MR_DuFunctorDescPtr mercury_data_hlds__passes_aux__du_stag_ordered_task_0_1[] = {
	&mercury_data_hlds__passes_aux__du_functor_desc_task_0_1

};

const MR_DuFunctorDescPtr mercury_data_hlds__passes_aux__du_stag_ordered_task_0_2[] = {
	&mercury_data_hlds__passes_aux__du_functor_desc_task_0_2

};

const MR_DuFunctorDescPtr mercury_data_hlds__passes_aux__du_stag_ordered_task_0_3[] = {
	&mercury_data_hlds__passes_aux__du_functor_desc_task_0_3,
	&mercury_data_hlds__passes_aux__du_functor_desc_task_0_4,
	&mercury_data_hlds__passes_aux__du_functor_desc_task_0_5,
	&mercury_data_hlds__passes_aux__du_functor_desc_task_0_6,
	&mercury_data_hlds__passes_aux__du_functor_desc_task_0_7,
	&mercury_data_hlds__passes_aux__du_functor_desc_task_0_8

};

const MR_DuPtagLayout mercury_data_hlds__passes_aux__du_ptag_ordered_task_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_hlds__passes_aux__du_stag_ordered_task_0_0 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_hlds__passes_aux__du_stag_ordered_task_0_1 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_hlds__passes_aux__du_stag_ordered_task_0_2 },
	{ 6, MR_SECTAG_REMOTE,
	mercury_data_hlds__passes_aux__du_stag_ordered_task_0_3 }

};

const MR_DuFunctorDescPtr mercury_data_hlds__passes_aux__du_name_ordered_task_0[] = {
	&mercury_data_hlds__passes_aux__du_functor_desc_task_0_6,
	&mercury_data_hlds__passes_aux__du_functor_desc_task_0_8,
	&mercury_data_hlds__passes_aux__du_functor_desc_task_0_7,
	&mercury_data_hlds__passes_aux__du_functor_desc_task_0_5,
	&mercury_data_hlds__passes_aux__du_functor_desc_task_0_0,
	&mercury_data_hlds__passes_aux__du_functor_desc_task_0_4,
	&mercury_data_hlds__passes_aux__du_functor_desc_task_0_3,
	&mercury_data_hlds__passes_aux__du_functor_desc_task_0_1,
	&mercury_data_hlds__passes_aux__du_functor_desc_task_0_2
};

const MR_Integer mercury_data_hlds__passes_aux__functor_number_map_task_0[] = {
	4,
	7,
	8,
	6,
	5,
	3,
	0,
	2,
	1 };
	
const MR_TypeCtorInfo_Struct mercury_data_hlds__passes_aux__type_ctor_info_task_0 = {
	0,
	13,
	4,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___hlds__passes_aux__task_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___hlds__passes_aux__task_0_0)),
	"hlds.passes_aux",
	"task",
	{ (void *)mercury_data_hlds__passes_aux__du_name_ordered_task_0 },
	{ (void *)mercury_data_hlds__passes_aux__du_ptag_ordered_task_0 },
	9,
	4,
	mercury_data_hlds__passes_aux__functor_number_map_task_0
};

static const MR_EnumFunctorDesc mercury_data_hlds__passes_aux__enum_functor_desc_quote_char_0_0 = {
	"forward",
	0
};

static const MR_EnumFunctorDesc mercury_data_hlds__passes_aux__enum_functor_desc_quote_char_0_1 = {
	"double",
	1
};

const MR_EnumFunctorDescPtr mercury_data_hlds__passes_aux__enum_value_ordered_quote_char_0[] = {
	&mercury_data_hlds__passes_aux__enum_functor_desc_quote_char_0_0,
	&mercury_data_hlds__passes_aux__enum_functor_desc_quote_char_0_1
};

const MR_EnumFunctorDescPtr mercury_data_hlds__passes_aux__enum_name_ordered_quote_char_0[] = {
	&mercury_data_hlds__passes_aux__enum_functor_desc_quote_char_0_1,
	&mercury_data_hlds__passes_aux__enum_functor_desc_quote_char_0_0
};

const MR_Integer mercury_data_hlds__passes_aux__functor_number_map_quote_char_0[] = {
	1,
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_hlds__passes_aux__type_ctor_info_quote_char_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_ENUM,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___hlds__passes_aux__quote_char_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___hlds__passes_aux__quote_char_0_0)),
	"hlds.passes_aux",
	"quote_char",
	{ (void *)mercury_data_hlds__passes_aux__enum_name_ordered_quote_char_0 },
	{ (void *)mercury_data_hlds__passes_aux__enum_value_ordered_quote_char_0 },
	2,
	4,
	mercury_data_hlds__passes_aux__functor_number_map_quote_char_0
};

const MR_TypeCtorInfo_Struct mercury_data_hlds__passes_aux__type_ctor_info_pred_error_task_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_EQUIV_GROUND,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___hlds__passes_aux__pred_error_task_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___hlds__passes_aux__pred_error_task_0_0)),
	"hlds.passes_aux",
	"pred_error_task",
	{ 0 },
	{ (void *)&mercury_data___vti_pred_9builtin__type_ctor_info_int_0hlds__hlds_module__type_ctor_info_module_info_0hlds__hlds_module__type_ctor_info_module_info_0hlds__hlds_pred__type_ctor_info_pred_info_0hlds__hlds_pred__type_ctor_info_pred_info_0list__ti_list_1parse_tree__error_util__type_ctor_info_error_spec_0list__ti_list_1parse_tree__error_util__type_ctor_info_error_spec_0io__type_ctor_info_state_0io__type_ctor_info_state_0 },
	-1,
	0,
	NULL
};

static const MR_EnumFunctorDesc mercury_data_hlds__passes_aux__enum_functor_desc_command_verbosity_0_0 = {
	"cmd_verbose",
	0
};

static const MR_EnumFunctorDesc mercury_data_hlds__passes_aux__enum_functor_desc_command_verbosity_0_1 = {
	"cmd_verbose_commands",
	1
};

const MR_EnumFunctorDescPtr mercury_data_hlds__passes_aux__enum_value_ordered_command_verbosity_0[] = {
	&mercury_data_hlds__passes_aux__enum_functor_desc_command_verbosity_0_0,
	&mercury_data_hlds__passes_aux__enum_functor_desc_command_verbosity_0_1
};

const MR_EnumFunctorDescPtr mercury_data_hlds__passes_aux__enum_name_ordered_command_verbosity_0[] = {
	&mercury_data_hlds__passes_aux__enum_functor_desc_command_verbosity_0_0,
	&mercury_data_hlds__passes_aux__enum_functor_desc_command_verbosity_0_1
};

const MR_Integer mercury_data_hlds__passes_aux__functor_number_map_command_verbosity_0[] = {
	0,
	1 };
	
const MR_TypeCtorInfo_Struct mercury_data_hlds__passes_aux__type_ctor_info_command_verbosity_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_ENUM,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___hlds__passes_aux__command_verbosity_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___hlds__passes_aux__command_verbosity_0_0)),
	"hlds.passes_aux",
	"command_verbosity",
	{ (void *)mercury_data_hlds__passes_aux__enum_name_ordered_command_verbosity_0 },
	{ (void *)mercury_data_hlds__passes_aux__enum_value_ordered_command_verbosity_0 },
	2,
	4,
	mercury_data_hlds__passes_aux__functor_number_map_command_verbosity_0
};

static const MR_UserClosureId
mercury_data__closure_layout__hlds__passes_aux__process_matching_nonimported_procs_errors_8_0_1 = {
{
MR_PREDICATE,
"hlds.passes_aux",
"hlds.passes_aux",
"process_nonimported_pred",
9,
0
},
"hlds.passes_aux",
"passes_aux.m",
261,
"d1;c10;t;c1;"
};

static const MR_UserClosureId
mercury_data__closure_layout__hlds__passes_aux__process_all_nonimported_procs_errors_7_0_1 = {
{
MR_PREDICATE,
"hlds.passes_aux",
"hlds.passes_aux",
"lambda_passes_aux_m_237",
1,
0
},
"hlds.passes_aux",
"",
0,
""
};

static const MR_UserClosureId
mercury_data__closure_layout__hlds__passes_aux__process_all_nonimported_procs_errors_7_0_2 = {
{
MR_PREDICATE,
"hlds.passes_aux",
"hlds.passes_aux",
"process_nonimported_pred",
9,
0
},
"hlds.passes_aux",
"passes_aux.m",
261,
"d1;c10;t;c1;"
};

static const MR_UserClosureId
mercury_data__closure_layout__hlds__passes_aux__process_all_nonimported_procs_5_0_1 = {
{
MR_PREDICATE,
"hlds.passes_aux",
"hlds.passes_aux",
"lambda_passes_aux_m_243",
2,
0
},
"hlds.passes_aux",
"passes_aux.m",
243,
"d1;c8;"
};

static const MR_UserClosureId
mercury_data__closure_layout__hlds__passes_aux__process_all_nonimported_procs_update_6_0_1 = {
{
MR_PREDICATE,
"hlds.passes_aux",
"hlds.passes_aux",
"lambda_passes_aux_m_254",
2,
0
},
"hlds.passes_aux",
"passes_aux.m",
254,
"d1;c9;"
};

static const MR_UserClosureId
mercury_data__closure_layout__hlds__passes_aux__process_matching_nonimported_procs_6_0_1 = {
{
MR_PREDICATE,
"hlds.passes_aux",
"hlds.passes_aux",
"lambda_passes_aux_m_271",
2,
0
},
"hlds.passes_aux",
"passes_aux.m",
271,
"d1;c9;"
};

static const MR_UserClosureId
mercury_data__closure_layout__hlds__passes_aux__process_matching_nonimported_procs_update_7_0_1 = {
{
MR_PREDICATE,
"hlds.passes_aux",
"hlds.passes_aux",
"lambda_passes_aux_m_284",
2,
0
},
"hlds.passes_aux",
"passes_aux.m",
284,
"d1;c10;"
};

static const MR_UserClosureId
mercury_data__closure_layout__hlds__passes_aux__invoke_system_command_maybe_filter_output_7_0_1 = {
{
MR_PREDICATE,
"io",
"io",
"write_char",
4,
0
},
"hlds.passes_aux",
"passes_aux.m",
555,
"d1;c20;d1;c2;"
};

MR_decl_entry(libs__globals__io_lookup_bool_option_4_0);
MR_decl_entry(io__set_exit_status_3_0);
MR_decl_entry(hlds__hlds_module__module_info_incr_errors_2_0);

MR_BEGIN_MODULE(hlds__passes_aux_module0)
	MR_init_entry1(hlds__passes_aux__handle_errors_6_0);
	MR_init_label4(hlds__passes_aux__handle_errors_6_0,2,5,8,4)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__passes_aux__handle_errors_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_r1 = (MR_Integer) 2;
	MR_np_call_localret_ent(libs__globals__io_lookup_bool_option_4_0,
		hlds__passes_aux__handle_errors_6_0_i2);
MR_def_label(hlds__passes_aux__handle_errors_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_GT(MR_sv(2),0)) {
		MR_GOTO_LAB(hlds__passes_aux__handle_errors_6_0_i5);
	}
	if (MR_INT_LE(MR_sv(1),0)) {
		MR_GOTO_LAB(hlds__passes_aux__handle_errors_6_0_i4);
	}
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(hlds__passes_aux__handle_errors_6_0_i4);
	}
MR_def_label(hlds__passes_aux__handle_errors_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_np_call_localret_ent(io__set_exit_status_3_0,
		hlds__passes_aux__handle_errors_6_0_i8);
MR_def_label(hlds__passes_aux__handle_errors_6_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(hlds__hlds_module__module_info_incr_errors_2_0);
MR_def_label(hlds__passes_aux__handle_errors_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_decr_sp_and_return(4);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__hlds_module__module_info_preds_2_0);
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_pred_id_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_pred_info_0;
MR_decl_entry(map__lookup_3_0);
MR_decl_entry(hlds__hlds_pred__pred_info_get_procedures_2_0);
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_proc_id_0;
MR_declare_entry(mercury__do_call_closure_2);
MR_declare_entry(mercury__do_call_closure_3);
MR_declare_entry(mercury__do_call_closure_4);
MR_declare_entry(mercury__do_call_closure_5);
MR_decl_entry(libs__compiler_util__unexpected_2_0);
MR_decl_entry(map__det_update_4_0);
MR_decl_entry(hlds__hlds_pred__pred_info_set_procedures_3_0);
MR_decl_entry(hlds__hlds_module__module_info_set_preds_3_0);

MR_BEGIN_MODULE(hlds__passes_aux_module1)
	MR_init_entry1(hlds__passes_aux__process_nonimported_procs_8_0);
	MR_init_label8(hlds__passes_aux__process_nonimported_procs_8_0,43,4,5,6,7,10,12,14)
	MR_init_label8(hlds__passes_aux__process_nonimported_procs_8_0,15,16,17,18,19,20,21,22)
	MR_init_label8(hlds__passes_aux__process_nonimported_procs_8_0,24,26,27,28,29,8,30,31)
	MR_init_label6(hlds__passes_aux__process_nonimported_procs_8_0,32,33,34,35,36,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__passes_aux__process_nonimported_procs_8_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
MR_def_label(hlds__passes_aux__process_nonimported_procs_8_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(hlds__passes_aux__process_nonimported_procs_8_0_i3);
	}
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_sv(3) = MR_tempr1;
	MR_sv(4) = MR_ctfield(1, MR_r1, 0);
	MR_sv(5) = MR_ctfield(1, MR_r1, 1);
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_module__module_info_preds_2_0,
		hlds__passes_aux__process_nonimported_procs_8_0_i4);
MR_def_label(hlds__passes_aux__process_nonimported_procs_8_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_id);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_info);
	MR_r4 = MR_sv(1);
	MR_np_call_localret_ent(map__lookup_3_0,
		hlds__passes_aux__process_nonimported_procs_8_0_i5);
MR_def_label(hlds__passes_aux__process_nonimported_procs_8_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_procedures_2_0,
		hlds__passes_aux__process_nonimported_procs_8_0_i6);
MR_def_label(hlds__passes_aux__process_nonimported_procs_8_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, proc_id);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, proc_info);
	MR_r4 = MR_sv(4);
	MR_np_call_localret_ent(map__lookup_3_0,
		hlds__passes_aux__process_nonimported_procs_8_0_i7);
MR_def_label(hlds__passes_aux__process_nonimported_procs_8_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r7 = MR_sv(2);
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r7),
		MR_LABEL_AP(hlds__passes_aux__process_nonimported_procs_8_0_i10) MR_AND
		MR_LABEL_AP(hlds__passes_aux__process_nonimported_procs_8_0_i12) MR_AND
		MR_LABEL_AP(hlds__passes_aux__process_nonimported_procs_8_0_i14) MR_AND
		MR_LABEL_AP(hlds__passes_aux__process_nonimported_procs_8_0_i16));
MR_def_label(hlds__passes_aux__process_nonimported_procs_8_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = MR_ctfield(0, MR_r7, 0);
	MR_r2 = MR_sv(3);
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(hlds__passes_aux__process_nonimported_procs_8_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_2),
		mercury__hlds__passes_aux__process_nonimported_procs_8_0_i15);
MR_def_label(hlds__passes_aux__process_nonimported_procs_8_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r1;
	MR_r1 = MR_ctfield(1, MR_r7, 0);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(3);
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(hlds__passes_aux__process_nonimported_procs_8_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_3),
		mercury__hlds__passes_aux__process_nonimported_procs_8_0_i15);
MR_def_label(hlds__passes_aux__process_nonimported_procs_8_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r5 = MR_r1;
	MR_r1 = MR_ctfield(2, MR_r7, 0);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(3);
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(hlds__passes_aux__process_nonimported_procs_8_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_4),
		mercury__hlds__passes_aux__process_nonimported_procs_8_0_i15);
MR_def_label(hlds__passes_aux__process_nonimported_procs_8_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_sv(3) = MR_r2;
	MR_sv(7) = MR_sv(2);
	MR_GOTO_LAB(hlds__passes_aux__process_nonimported_procs_8_0_i8);
MR_def_label(hlds__passes_aux__process_nonimported_procs_8_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_ctfield(3, MR_r7, 0),
		MR_LABEL_AP(hlds__passes_aux__process_nonimported_procs_8_0_i17) MR_AND
		MR_LABEL_AP(hlds__passes_aux__process_nonimported_procs_8_0_i19) MR_AND
		MR_LABEL_AP(hlds__passes_aux__process_nonimported_procs_8_0_i22) MR_AND
		MR_LABEL_AP(hlds__passes_aux__process_nonimported_procs_8_0_i24) MR_AND
		MR_LABEL_AP(hlds__passes_aux__process_nonimported_procs_8_0_i26) MR_AND
		MR_LABEL_AP(hlds__passes_aux__process_nonimported_procs_8_0_i28));
MR_def_label(hlds__passes_aux__process_nonimported_procs_8_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r5 = MR_r1;
	MR_r1 = MR_ctfield(3, MR_r7, 1);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(3);
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(hlds__passes_aux__process_nonimported_procs_8_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_5),
		mercury__hlds__passes_aux__process_nonimported_procs_8_0_i18);
MR_def_label(hlds__passes_aux__process_nonimported_procs_8_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_sv(3) = MR_r3;
	MR_sv(7) = MR_sv(2);
	MR_GOTO_LAB(hlds__passes_aux__process_nonimported_procs_8_0_i8);
MR_def_label(hlds__passes_aux__process_nonimported_procs_8_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r5 = MR_r1;
	MR_r1 = MR_ctfield(3, MR_r7, 1);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(3);
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(hlds__passes_aux__process_nonimported_procs_8_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_5),
		mercury__hlds__passes_aux__process_nonimported_procs_8_0_i20);
MR_def_label(hlds__passes_aux__process_nonimported_procs_8_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_r3 = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_r4;
	}
	MR_np_call_localret_ent(hlds__passes_aux__handle_errors_6_0,
		hlds__passes_aux__process_nonimported_procs_8_0_i21);
MR_def_label(hlds__passes_aux__process_nonimported_procs_8_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_sv(2);
	MR_GOTO_LAB(hlds__passes_aux__process_nonimported_procs_8_0_i8);
MR_def_label(hlds__passes_aux__process_nonimported_procs_8_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("passes_aux.m", 12);
	MR_r2 = (MR_Word) MR_string_const("process_non_imported_procs", 26);
	MR_np_call_localret_ent(libs__compiler_util__unexpected_2_0,
		hlds__passes_aux__process_nonimported_procs_8_0_i8);
MR_def_label(hlds__passes_aux__process_nonimported_procs_8_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r5 = MR_r1;
	MR_r1 = MR_ctfield(3, MR_r7, 1);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(6);
	MR_r6 = MR_sv(3);
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(hlds__passes_aux__process_nonimported_procs_8_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_5),
		mercury__hlds__passes_aux__process_nonimported_procs_8_0_i27);
MR_def_label(hlds__passes_aux__process_nonimported_procs_8_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r1;
	MR_r1 = MR_ctfield(3, MR_r7, 1);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(4);
	MR_r5 = MR_sv(3);
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(hlds__passes_aux__process_nonimported_procs_8_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_5),
		mercury__hlds__passes_aux__process_nonimported_procs_8_0_i27);
MR_def_label(hlds__passes_aux__process_nonimported_procs_8_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_sv(7) = MR_sv(2);
	MR_r1 = MR_r2;
	MR_GOTO_LAB(hlds__passes_aux__process_nonimported_procs_8_0_i8);
MR_def_label(hlds__passes_aux__process_nonimported_procs_8_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r7;
	MR_sv(2) = MR_ctfield(3, MR_tempr1, 1);
	MR_r4 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(4);
	MR_r5 = MR_ctfield(3, MR_tempr1, 2);
	MR_r6 = MR_sv(3);
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(hlds__passes_aux__process_nonimported_procs_8_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_5),
		mercury__hlds__passes_aux__process_nonimported_procs_8_0_i29);
MR_def_label(hlds__passes_aux__process_nonimported_procs_8_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_sv(7) = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 5;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(2);
	MR_tfield(3, MR_tempr1, 2) = MR_r2;
	MR_sv(3) = MR_r1;
	MR_r1 = MR_r3;
	}
MR_def_label(hlds__passes_aux__process_nonimported_procs_8_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_np_call_localret_ent(hlds__hlds_module__module_info_preds_2_0,
		hlds__passes_aux__process_nonimported_procs_8_0_i30);
MR_def_label(hlds__passes_aux__process_nonimported_procs_8_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_id);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_info);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(1);
	MR_np_call_localret_ent(map__lookup_3_0,
		hlds__passes_aux__process_nonimported_procs_8_0_i31);
MR_def_label(hlds__passes_aux__process_nonimported_procs_8_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_procedures_2_0,
		hlds__passes_aux__process_nonimported_procs_8_0_i32);
MR_def_label(hlds__passes_aux__process_nonimported_procs_8_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, proc_id);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, proc_info);
	MR_r4 = MR_sv(4);
	MR_r5 = MR_sv(3);
	MR_np_call_localret_ent(map__det_update_4_0,
		hlds__passes_aux__process_nonimported_procs_8_0_i33);
MR_def_label(hlds__passes_aux__process_nonimported_procs_8_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(6);
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_set_procedures_3_0,
		hlds__passes_aux__process_nonimported_procs_8_0_i34);
MR_def_label(hlds__passes_aux__process_nonimported_procs_8_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r5 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_id);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_info);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(1);
	MR_np_call_localret_ent(map__det_update_4_0,
		hlds__passes_aux__process_nonimported_procs_8_0_i35);
MR_def_label(hlds__passes_aux__process_nonimported_procs_8_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(8);
	MR_np_call_localret_ent(hlds__hlds_module__module_info_set_preds_3_0,
		hlds__passes_aux__process_nonimported_procs_8_0_i36);
MR_def_label(hlds__passes_aux__process_nonimported_procs_8_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(7);
	MR_succip_word = MR_sv(9);
	MR_GOTO_LAB(hlds__passes_aux__process_nonimported_procs_8_0_i43);
MR_def_label(hlds__passes_aux__process_nonimported_procs_8_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r3;
	MR_r2 = MR_r4;
	MR_decr_sp_and_return(9);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_declare_entry(mercury__do_call_closure_1);
MR_decl_entry(fn__hlds__hlds_pred__pred_info_non_imported_procids_1_0);

MR_BEGIN_MODULE(hlds__passes_aux_module2)
	MR_init_entry1(hlds__passes_aux__process_nonimported_procs_in_preds_8_0);
	MR_init_label8(hlds__passes_aux__process_nonimported_procs_in_preds_8_0,23,4,5,8,10,11,7,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__passes_aux__process_nonimported_procs_in_preds_8_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
MR_def_label(hlds__passes_aux__process_nonimported_procs_in_preds_8_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(hlds__passes_aux__process_nonimported_procs_in_preds_8_0_i3);
	}
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_sv(3) = MR_tempr1;
	MR_sv(4) = MR_ctfield(1, MR_r1, 0);
	MR_sv(5) = MR_ctfield(1, MR_r1, 1);
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_module__module_info_preds_2_0,
		hlds__passes_aux__process_nonimported_procs_in_preds_8_0_i4);
MR_def_label(hlds__passes_aux__process_nonimported_procs_in_preds_8_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_id);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_info);
	MR_r4 = MR_sv(4);
	MR_np_call_localret_ent(map__lookup_3_0,
		hlds__passes_aux__process_nonimported_procs_in_preds_8_0_i5);
MR_def_label(hlds__passes_aux__process_nonimported_procs_in_preds_8_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(6);
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(hlds__passes_aux__process_nonimported_procs_in_preds_8_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_1),
		mercury__hlds__passes_aux__process_nonimported_procs_in_preds_8_0_i8);
MR_def_label(hlds__passes_aux__process_nonimported_procs_in_preds_8_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(hlds__passes_aux__process_nonimported_procs_in_preds_8_0_i7);
	}
	MR_r1 = MR_sv(6);
	MR_np_call_localret_ent(fn__hlds__hlds_pred__pred_info_non_imported_procids_1_0,
		hlds__passes_aux__process_nonimported_procs_in_preds_8_0_i10);
MR_def_label(hlds__passes_aux__process_nonimported_procs_in_preds_8_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(3);
	MR_np_call_localret_ent(hlds__passes_aux__process_nonimported_procs_8_0,
		hlds__passes_aux__process_nonimported_procs_in_preds_8_0_i11);
MR_def_label(hlds__passes_aux__process_nonimported_procs_in_preds_8_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(2);
	MR_r4 = MR_r2;
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_succip_word = MR_sv(7);
	MR_GOTO_LAB(hlds__passes_aux__process_nonimported_procs_in_preds_8_0_i23);
MR_def_label(hlds__passes_aux__process_nonimported_procs_in_preds_8_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(2);
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(1);
	MR_r4 = MR_sv(3);
	MR_succip_word = MR_sv(7);
	MR_GOTO_LAB(hlds__passes_aux__process_nonimported_procs_in_preds_8_0_i23);
MR_def_label(hlds__passes_aux__process_nonimported_procs_in_preds_8_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_r2 = MR_r4;
	MR_decr_sp_and_return(7);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__hlds_module__module_info_predids_3_0);
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_module__type_ctor_info_module_info_0;
extern const MR_TypeCtorInfo_Struct mercury_data_io__type_ctor_info_state_0;
MR_decl_entry(list__foldl3_8_4);

MR_BEGIN_MODULE(hlds__passes_aux_module3)
	MR_init_entry1(hlds__passes_aux__process_matching_nonimported_procs_errors_8_0);
	MR_init_label3(hlds__passes_aux__process_matching_nonimported_procs_errors_8_0,2,3,6)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__hlds__passes_aux__process_matching_nonimported_procs_errors_8_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r4;
	MR_r1 = MR_r3;
	MR_np_call_localret_ent(hlds__hlds_module__module_info_predids_3_0,
		hlds__passes_aux__process_matching_nonimported_procs_errors_8_0_i2);
MR_def_label(hlds__passes_aux__process_matching_nonimported_procs_errors_8_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,2)) {
		MR_GOTO_LAB(hlds__passes_aux__process_matching_nonimported_procs_errors_8_0_i3);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_r5 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(3,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(hlds__passes_aux__process_nonimported_pred_9_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr1, 3) = MR_ctfield(3, MR_sv(1), 1);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(2);
	MR_r6 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_id);
	MR_r7 = MR_r2;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_module, module_info);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,0,2);
	MR_r4 = (MR_Word) MR_IO_CTOR_ADDR;
	MR_r8 = MR_sv(3);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(list__foldl3_8_4);
	}
MR_def_label(hlds__passes_aux__process_matching_nonimported_procs_errors_8_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r2;
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_np_call_localret_ent(hlds__passes_aux__process_nonimported_procs_in_preds_8_0,
		hlds__passes_aux__process_matching_nonimported_procs_errors_8_0_i6);
MR_def_label(hlds__passes_aux__process_matching_nonimported_procs_errors_8_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_r2 = MR_sv(3);
	MR_decr_sp_and_return(4);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__passes_aux_module4)
	MR_init_entry1(hlds__passes_aux__process_all_nonimported_procs_errors_7_0);
	MR_init_label3(hlds__passes_aux__process_all_nonimported_procs_errors_7_0,2,3,6)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__hlds__passes_aux__process_all_nonimported_procs_errors_7_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r3;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(hlds__hlds_module__module_info_predids_3_0,
		hlds__passes_aux__process_all_nonimported_procs_errors_7_0_i2);
MR_def_label(hlds__passes_aux__process_all_nonimported_procs_errors_7_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,2)) {
		MR_GOTO_LAB(hlds__passes_aux__process_all_nonimported_procs_errors_7_0_i3);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_r5 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(3,1);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(hlds__passes_aux__process_nonimported_pred_9_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr1, 3) = MR_ctfield(3, MR_sv(1), 1);
	MR_tfield(0, MR_tempr1, 4) = (MR_Word) MR_TAG_COMMON(0,5,0);
	MR_r6 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_id);
	MR_r7 = MR_r2;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_module, module_info);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,0,2);
	MR_r4 = (MR_Word) MR_IO_CTOR_ADDR;
	MR_r8 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(list__foldl3_8_4);
	}
MR_def_label(hlds__passes_aux__process_all_nonimported_procs_errors_7_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r2;
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(hlds__passes_aux__process_nonimported_procs_in_preds__ho4_8_0,
		hlds__passes_aux__process_all_nonimported_procs_errors_7_0_i6);
MR_def_label(hlds__passes_aux__process_all_nonimported_procs_errors_7_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_r2 = MR_sv(2);
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(libs__compiler_util__expect_3_0);

MR_BEGIN_MODULE(hlds__passes_aux_module5)
	MR_init_entry1(hlds__passes_aux__process_all_nonimported_procs_5_0);
	MR_init_label2(hlds__passes_aux__process_all_nonimported_procs_5_0,2,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__hlds__passes_aux__process_all_nonimported_procs_5_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_np_call_localret_ent(hlds__passes_aux__process_all_nonimported_procs_errors_7_0,
		hlds__passes_aux__process_all_nonimported_procs_5_0_i2);
MR_def_label(hlds__passes_aux__process_all_nonimported_procs_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(6,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(hlds__passes_aux__IntroducedFrom__pred__process_all_nonimported_procs__243__1_2_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr1, 3) = MR_r2;
	MR_tfield(0, MR_tempr1, 4) = (MR_Word) MR_tbmkword(0, 0);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Word) MR_string_const("passes_aux.m", 12);
	MR_r3 = (MR_Word) MR_string_const("process_all_nonimported_procs: Specs", 36);
	}
	MR_np_call_localret_ent(libs__compiler_util__expect_3_0,
		hlds__passes_aux__process_all_nonimported_procs_5_0_i3);
MR_def_label(hlds__passes_aux__process_all_nonimported_procs_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_decr_sp_and_return(2);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__passes_aux_module6)
	MR_init_entry1(hlds__passes_aux__process_matching_nonimported_procs_update_errors_9_0);
	MR_init_label2(hlds__passes_aux__process_matching_nonimported_procs_update_errors_9_0,2,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__hlds__passes_aux__process_matching_nonimported_procs_update_errors_9_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r4;
	MR_r1 = MR_r3;
	MR_np_call_localret_ent(hlds__hlds_module__module_info_predids_3_0,
		hlds__passes_aux__process_matching_nonimported_procs_update_errors_9_0_i2);
MR_def_label(hlds__passes_aux__process_matching_nonimported_procs_update_errors_9_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r2;
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_np_call_localret_ent(hlds__passes_aux__process_nonimported_procs_in_preds_8_0,
		hlds__passes_aux__process_matching_nonimported_procs_update_errors_9_0_i3);
MR_def_label(hlds__passes_aux__process_matching_nonimported_procs_update_errors_9_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(3);
	MR_decr_sp_and_return(4);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__passes_aux_module7)
	MR_init_entry1(hlds__passes_aux__process_all_nonimported_procs_update_errors_8_0);
	MR_init_label2(hlds__passes_aux__process_all_nonimported_procs_update_errors_8_0,2,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__hlds__passes_aux__process_all_nonimported_procs_update_errors_8_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r3;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(hlds__hlds_module__module_info_predids_3_0,
		hlds__passes_aux__process_all_nonimported_procs_update_errors_8_0_i2);
MR_def_label(hlds__passes_aux__process_all_nonimported_procs_update_errors_8_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r2;
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(hlds__passes_aux__process_nonimported_procs_in_preds__ho5_8_0,
		hlds__passes_aux__process_all_nonimported_procs_update_errors_8_0_i3);
MR_def_label(hlds__passes_aux__process_all_nonimported_procs_update_errors_8_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(2);
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__passes_aux_module8)
	MR_init_entry1(hlds__passes_aux__process_all_nonimported_procs_update_6_0);
	MR_init_label3(hlds__passes_aux__process_all_nonimported_procs_update_6_0,2,3,4)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__hlds__passes_aux__process_all_nonimported_procs_update_6_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(hlds__hlds_module__module_info_predids_3_0,
		hlds__passes_aux__process_all_nonimported_procs_update_6_0_i2);
MR_def_label(hlds__passes_aux__process_all_nonimported_procs_update_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r2;
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(hlds__passes_aux__process_nonimported_procs_in_preds__ho5_8_0,
		hlds__passes_aux__process_all_nonimported_procs_update_6_0_i3);
MR_def_label(hlds__passes_aux__process_all_nonimported_procs_update_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,7,0);
	MR_r2 = (MR_Word) MR_string_const("passes_aux.m", 12);
	MR_r3 = (MR_Word) MR_string_const("process_all_nonimported_procs_update: Specs", 43);
	MR_np_call_localret_ent(libs__compiler_util__expect_3_0,
		hlds__passes_aux__process_all_nonimported_procs_update_6_0_i4);
MR_def_label(hlds__passes_aux__process_all_nonimported_procs_update_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__passes_aux_module9)
	MR_init_entry1(hlds__passes_aux__process_matching_nonimported_procs_6_0);
	MR_init_label2(hlds__passes_aux__process_matching_nonimported_procs_6_0,2,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__hlds__passes_aux__process_matching_nonimported_procs_6_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	MR_np_call_localret_ent(hlds__passes_aux__process_matching_nonimported_procs_errors_8_0,
		hlds__passes_aux__process_matching_nonimported_procs_6_0_i2);
MR_def_label(hlds__passes_aux__process_matching_nonimported_procs_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(6,2);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(hlds__passes_aux__IntroducedFrom__pred__process_matching_nonimported_procs__271__1_2_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr1, 3) = MR_r2;
	MR_tfield(0, MR_tempr1, 4) = (MR_Word) MR_tbmkword(0, 0);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Word) MR_string_const("passes_aux.m", 12);
	MR_r3 = (MR_Word) MR_string_const("process_matching_nonimported_procs: Specs", 41);
	}
	MR_np_call_localret_ent(libs__compiler_util__expect_3_0,
		hlds__passes_aux__process_matching_nonimported_procs_6_0_i3);
MR_def_label(hlds__passes_aux__process_matching_nonimported_procs_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_decr_sp_and_return(2);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__passes_aux_module10)
	MR_init_entry1(hlds__passes_aux__process_matching_nonimported_procs_update_7_0);
	MR_init_label3(hlds__passes_aux__process_matching_nonimported_procs_update_7_0,2,3,4)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__hlds__passes_aux__process_matching_nonimported_procs_update_7_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_r1 = MR_r3;
	MR_np_call_localret_ent(hlds__hlds_module__module_info_predids_3_0,
		hlds__passes_aux__process_matching_nonimported_procs_update_7_0_i2);
MR_def_label(hlds__passes_aux__process_matching_nonimported_procs_update_7_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r2;
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_np_call_localret_ent(hlds__passes_aux__process_nonimported_procs_in_preds_8_0,
		hlds__passes_aux__process_matching_nonimported_procs_update_7_0_i3);
MR_def_label(hlds__passes_aux__process_matching_nonimported_procs_update_7_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,7,1);
	MR_r2 = (MR_Word) MR_string_const("passes_aux.m", 12);
	MR_r3 = (MR_Word) MR_string_const("process_matching_nonimported_procs_update_errors: Specs", 55);
	MR_np_call_localret_ent(libs__compiler_util__expect_3_0,
		hlds__passes_aux__process_matching_nonimported_procs_update_7_0_i4);
MR_def_label(hlds__passes_aux__process_matching_nonimported_procs_update_7_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(io__write_string_3_0);
MR_decl_entry(hlds__hlds_out__write_pred_id_4_0);

MR_BEGIN_MODULE(hlds__passes_aux_module11)
	MR_init_entry1(hlds__passes_aux__write_pred_progress_message_5_0);
	MR_init_label4(hlds__passes_aux__write_pred_progress_message_5_0,2,5,6,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__hlds__passes_aux__write_pred_progress_message_5_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_r1 = (MR_Integer) 35;
	MR_np_call_localret_ent(libs__globals__io_lookup_bool_option_4_0,
		hlds__passes_aux__write_pred_progress_message_5_0_i2);
MR_def_label(hlds__passes_aux__write_pred_progress_message_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_EQ(MR_r1,0)) {
		MR_GOTO_LAB(hlds__passes_aux__write_pred_progress_message_5_0_i3);
	}
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__passes_aux__write_pred_progress_message_5_0_i5);
MR_def_label(hlds__passes_aux__write_pred_progress_message_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(hlds__hlds_out__write_pred_id_4_0,
		hlds__passes_aux__write_pred_progress_message_5_0_i6);
MR_def_label(hlds__passes_aux__write_pred_progress_message_5_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("\n", 1);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(io__write_string_3_0);
MR_def_label(hlds__passes_aux__write_pred_progress_message_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(4);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__hlds_out__write_pred_proc_id_pair_5_0);

MR_BEGIN_MODULE(hlds__passes_aux_module12)
	MR_init_entry1(hlds__passes_aux__write_proc_progress_message_6_0);
	MR_init_label4(hlds__passes_aux__write_proc_progress_message_6_0,2,5,6,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__hlds__passes_aux__write_proc_progress_message_6_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_r1 = (MR_Integer) 35;
	MR_np_call_localret_ent(libs__globals__io_lookup_bool_option_4_0,
		hlds__passes_aux__write_proc_progress_message_6_0_i2);
MR_def_label(hlds__passes_aux__write_proc_progress_message_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_EQ(MR_r1,0)) {
		MR_GOTO_LAB(hlds__passes_aux__write_proc_progress_message_6_0_i3);
	}
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__passes_aux__write_proc_progress_message_6_0_i5);
MR_def_label(hlds__passes_aux__write_proc_progress_message_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_np_call_localret_ent(hlds__hlds_out__write_pred_proc_id_pair_5_0,
		hlds__passes_aux__write_proc_progress_message_6_0_i6);
MR_def_label(hlds__passes_aux__write_proc_progress_message_6_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("\n", 1);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(io__write_string_3_0);
MR_def_label(hlds__passes_aux__write_proc_progress_message_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__passes_aux_module13)
	MR_init_entry1(hlds__passes_aux__write_proc_progress_message_5_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__hlds__passes_aux__write_proc_progress_message_5_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_ctfield(0, MR_r2, 0);
	MR_r4 = MR_r3;
	MR_r3 = MR_ctfield(0, MR_tempr1, 1);
	MR_np_tailcall_ent(hlds__passes_aux__write_proc_progress_message_6_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(map__count_2_0);
MR_decl_entry(io__write_int_3_0);
MR_decl_entry(hlds__hlds_module__module_info_get_type_table_2_0);
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_type_ctor_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_data__type_ctor_info_hlds_type_defn_0;
MR_decl_entry(hlds__hlds_module__module_info_get_cons_table_2_0);
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_cons_id_0;

MR_BEGIN_MODULE(hlds__passes_aux_module14)
	MR_init_entry1(hlds__passes_aux__maybe_report_sizes_3_0);
	MR_init_label8(hlds__passes_aux__maybe_report_sizes_3_0,2,5,6,7,8,9,10,11)
	MR_init_label8(hlds__passes_aux__maybe_report_sizes_3_0,12,13,14,15,16,17,18,19)
	MR_init_label3(hlds__passes_aux__maybe_report_sizes_3_0,20,21,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__hlds__passes_aux__maybe_report_sizes_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Integer) 42;
	MR_np_call_localret_ent(libs__globals__io_lookup_bool_option_4_0,
		hlds__passes_aux__maybe_report_sizes_3_0_i2);
MR_def_label(hlds__passes_aux__maybe_report_sizes_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_EQ(MR_r1,0)) {
		MR_GOTO_LAB(hlds__passes_aux__maybe_report_sizes_3_0_i3);
	}
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(hlds__hlds_module__module_info_preds_2_0,
		hlds__passes_aux__maybe_report_sizes_3_0_i5);
MR_def_label(hlds__passes_aux__maybe_report_sizes_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_id);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_info);
	MR_np_call_localret_ent(map__count_2_0,
		hlds__passes_aux__maybe_report_sizes_3_0_i6);
MR_def_label(hlds__passes_aux__maybe_report_sizes_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("Pred table", 10);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__passes_aux__maybe_report_sizes_3_0_i7);
MR_def_label(hlds__passes_aux__maybe_report_sizes_3_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(": count = ", 10);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__passes_aux__maybe_report_sizes_3_0_i8);
MR_def_label(hlds__passes_aux__maybe_report_sizes_3_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(io__write_int_3_0,
		hlds__passes_aux__maybe_report_sizes_3_0_i9);
MR_def_label(hlds__passes_aux__maybe_report_sizes_3_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("\n", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__passes_aux__maybe_report_sizes_3_0_i10);
MR_def_label(hlds__passes_aux__maybe_report_sizes_3_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_type_table_2_0,
		hlds__passes_aux__maybe_report_sizes_3_0_i11);
MR_def_label(hlds__passes_aux__maybe_report_sizes_3_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, type_ctor);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_data, hlds_type_defn);
	MR_np_call_localret_ent(map__count_2_0,
		hlds__passes_aux__maybe_report_sizes_3_0_i12);
MR_def_label(hlds__passes_aux__maybe_report_sizes_3_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("Type table", 10);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__passes_aux__maybe_report_sizes_3_0_i13);
MR_def_label(hlds__passes_aux__maybe_report_sizes_3_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(": count = ", 10);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__passes_aux__maybe_report_sizes_3_0_i14);
MR_def_label(hlds__passes_aux__maybe_report_sizes_3_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(io__write_int_3_0,
		hlds__passes_aux__maybe_report_sizes_3_0_i15);
MR_def_label(hlds__passes_aux__maybe_report_sizes_3_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("\n", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__passes_aux__maybe_report_sizes_3_0_i16);
MR_def_label(hlds__passes_aux__maybe_report_sizes_3_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_cons_table_2_0,
		hlds__passes_aux__maybe_report_sizes_3_0_i17);
MR_def_label(hlds__passes_aux__maybe_report_sizes_3_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, cons_id);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,3);
	MR_np_call_localret_ent(map__count_2_0,
		hlds__passes_aux__maybe_report_sizes_3_0_i18);
MR_def_label(hlds__passes_aux__maybe_report_sizes_3_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("Constructor table", 17);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__passes_aux__maybe_report_sizes_3_0_i19);
MR_def_label(hlds__passes_aux__maybe_report_sizes_3_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(": count = ", 10);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__passes_aux__maybe_report_sizes_3_0_i20);
MR_def_label(hlds__passes_aux__maybe_report_sizes_3_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(io__write_int_3_0,
		hlds__passes_aux__maybe_report_sizes_3_0_i21);
MR_def_label(hlds__passes_aux__maybe_report_sizes_3_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("\n", 1);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(io__write_string_3_0);
MR_def_label(hlds__passes_aux__maybe_report_sizes_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_inst_var_type_0;
MR_decl_entry(varset__init_1_0);
MR_decl_entry(parse_tree__prog_mode__strip_builtin_qualifiers_from_mode_list_2_0);
MR_decl_entry(parse_tree__mercury_to_mercury__mercury_output_mode_list_4_0);
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_mer_mode_0;
MR_decl_entry(parse_tree__prog_util__pred_args_to_func_args_3_0);
MR_decl_entry(parse_tree__mercury_to_mercury__mercury_output_mode_4_0);

MR_BEGIN_MODULE(hlds__passes_aux_module15)
	MR_init_entry1(hlds__passes_aux__report_pred_name_mode_5_0);
	MR_init_label8(hlds__passes_aux__report_pred_name_mode_5_0,4,7,8,9,10,3,12,13)
	MR_init_label8(hlds__passes_aux__report_pred_name_mode_5_0,14,15,25,17,18,19,21,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__hlds__passes_aux__report_pred_name_mode_5_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(hlds__passes_aux__report_pred_name_mode_5_0_i3);
	}
	MR_sv(2) = MR_r3;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__passes_aux__report_pred_name_mode_5_0_i4);
MR_def_label(hlds__passes_aux__report_pred_name_mode_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_sv(2),0,0)) {
		MR_GOTO_LAB(hlds__passes_aux__report_pred_name_mode_5_0_i2);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, inst_var_type);
	MR_np_call_localret_ent(varset__init_1_0,
		hlds__passes_aux__report_pred_name_mode_5_0_i7);
MR_def_label(hlds__passes_aux__report_pred_name_mode_5_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("(", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__passes_aux__report_pred_name_mode_5_0_i8);
MR_def_label(hlds__passes_aux__report_pred_name_mode_5_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(parse_tree__prog_mode__strip_builtin_qualifiers_from_mode_list_2_0,
		hlds__passes_aux__report_pred_name_mode_5_0_i9);
MR_def_label(hlds__passes_aux__report_pred_name_mode_5_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(parse_tree__mercury_to_mercury__mercury_output_mode_list_4_0,
		hlds__passes_aux__report_pred_name_mode_5_0_i10);
MR_def_label(hlds__passes_aux__report_pred_name_mode_5_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(")", 1);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(io__write_string_3_0);
MR_def_label(hlds__passes_aux__report_pred_name_mode_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, inst_var_type);
	MR_np_call_localret_ent(varset__init_1_0,
		hlds__passes_aux__report_pred_name_mode_5_0_i12);
MR_def_label(hlds__passes_aux__report_pred_name_mode_5_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_sv(2) = MR_tempr1;
	}
	MR_np_call_localret_ent(parse_tree__prog_mode__strip_builtin_qualifiers_from_mode_list_2_0,
		hlds__passes_aux__report_pred_name_mode_5_0_i13);
MR_def_label(hlds__passes_aux__report_pred_name_mode_5_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_mode);
	MR_np_call_localret_ent(parse_tree__prog_util__pred_args_to_func_args_3_0,
		hlds__passes_aux__report_pred_name_mode_5_0_i14);
MR_def_label(hlds__passes_aux__report_pred_name_mode_5_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	MR_sv(3) = MR_r2;
	}
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__passes_aux__report_pred_name_mode_5_0_i15);
MR_def_label(hlds__passes_aux__report_pred_name_mode_5_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,0)) {
		MR_GOTO_LAB(hlds__passes_aux__report_pred_name_mode_5_0_i17);
	}
MR_def_label(hlds__passes_aux__report_pred_name_mode_5_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(" = ", 3);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__passes_aux__report_pred_name_mode_5_0_i21);
MR_def_label(hlds__passes_aux__report_pred_name_mode_5_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("(", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__passes_aux__report_pred_name_mode_5_0_i18);
MR_def_label(hlds__passes_aux__report_pred_name_mode_5_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(parse_tree__mercury_to_mercury__mercury_output_mode_list_4_0,
		hlds__passes_aux__report_pred_name_mode_5_0_i19);
MR_def_label(hlds__passes_aux__report_pred_name_mode_5_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(")", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__passes_aux__report_pred_name_mode_5_0_i25);
MR_def_label(hlds__passes_aux__report_pred_name_mode_5_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(parse_tree__mercury_to_mercury__mercury_output_mode_4_0);
MR_def_label(hlds__passes_aux__report_pred_name_mode_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(4);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__hlds_module__module_info_pred_proc_info_5_0);
MR_decl_entry(fn__hlds__hlds_pred__pred_info_name_1_0);
MR_decl_entry(fn__hlds__hlds_pred__pred_info_orig_arity_1_0);
MR_decl_entry(fn__hlds__hlds_pred__pred_info_is_pred_or_func_1_0);
MR_decl_entry(hlds__hlds_pred__proc_info_get_context_2_0);
MR_decl_entry(hlds__hlds_pred__proc_info_get_argmodes_2_0);
MR_decl_entry(list__length_2_0);
MR_decl_entry(list__drop_3_0);
MR_decl_entry(parse_tree__prog_out__write_context_3_0);

MR_BEGIN_MODULE(hlds__passes_aux_module16)
	MR_init_entry1(hlds__passes_aux__report_pred_proc_id_7_0);
	MR_init_label8(hlds__passes_aux__report_pred_proc_id_7_0,2,3,4,5,6,7,8,10)
	MR_init_label7(hlds__passes_aux__report_pred_proc_id_7_0,9,13,15,16,17,18,19)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__hlds__passes_aux__report_pred_proc_id_7_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r4;
	MR_np_call_localret_ent(hlds__hlds_module__module_info_pred_proc_info_5_0,
		hlds__passes_aux__report_pred_proc_id_7_0_i2);
MR_def_label(hlds__passes_aux__report_pred_proc_id_7_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_sv(3) = MR_r2;
	MR_np_call_localret_ent(fn__hlds__hlds_pred__pred_info_name_1_0,
		hlds__passes_aux__report_pred_proc_id_7_0_i3);
MR_def_label(hlds__passes_aux__report_pred_proc_id_7_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(fn__hlds__hlds_pred__pred_info_orig_arity_1_0,
		hlds__passes_aux__report_pred_proc_id_7_0_i4);
MR_def_label(hlds__passes_aux__report_pred_proc_id_7_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(fn__hlds__hlds_pred__pred_info_is_pred_or_func_1_0,
		hlds__passes_aux__report_pred_proc_id_7_0_i5);
MR_def_label(hlds__passes_aux__report_pred_proc_id_7_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_context_2_0,
		hlds__passes_aux__report_pred_proc_id_7_0_i6);
MR_def_label(hlds__passes_aux__report_pred_proc_id_7_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_argmodes_2_0,
		hlds__passes_aux__report_pred_proc_id_7_0_i7);
MR_def_label(hlds__passes_aux__report_pred_proc_id_7_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_mode);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(list__length_2_0,
		hlds__passes_aux__report_pred_proc_id_7_0_i8);
MR_def_label(hlds__passes_aux__report_pred_proc_id_7_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_mode);
	MR_r2 = ((MR_Integer) MR_tempr1 - (MR_Integer) MR_sv(5));
	MR_r3 = MR_sv(3);
	}
	MR_np_call_localret_ent(list__drop_3_0,
		hlds__passes_aux__report_pred_proc_id_7_0_i10);
MR_def_label(hlds__passes_aux__report_pred_proc_id_7_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(hlds__passes_aux__report_pred_proc_id_7_0_i9);
	}
	MR_r1 = MR_sv(2);
	MR_r3 = MR_r2;
	MR_GOTO_LAB(hlds__passes_aux__report_pred_proc_id_7_0_i13);
MR_def_label(hlds__passes_aux__report_pred_proc_id_7_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("passes_aux.m", 12);
	MR_r2 = (MR_Word) MR_string_const("report_pred_proc_id: list.drop failed", 37);
	MR_np_call_localret_ent(libs__compiler_util__unexpected_2_0,
		hlds__passes_aux__report_pred_proc_id_7_0_i13);
MR_def_label(hlds__passes_aux__report_pred_proc_id_7_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,0)) {
		MR_GOTO_LAB(hlds__passes_aux__report_pred_proc_id_7_0_i15);
	}
	MR_sv(2) = MR_r1;
	MR_sv(1) = MR_r3;
	MR_np_call_localret_ent(parse_tree__prog_out__write_context_3_0,
		hlds__passes_aux__report_pred_proc_id_7_0_i16);
MR_def_label(hlds__passes_aux__report_pred_proc_id_7_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r3;
	MR_r1 = MR_ctfield(1, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(parse_tree__prog_out__write_context_3_0,
		hlds__passes_aux__report_pred_proc_id_7_0_i16);
MR_def_label(hlds__passes_aux__report_pred_proc_id_7_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("In \140", 4);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__passes_aux__report_pred_proc_id_7_0_i17);
MR_def_label(hlds__passes_aux__report_pred_proc_id_7_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(1);
	MR_np_call_localret_ent(hlds__passes_aux__report_pred_name_mode_5_0,
		hlds__passes_aux__report_pred_proc_id_7_0_i18);
MR_def_label(hlds__passes_aux__report_pred_proc_id_7_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("\':\n", 3);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__passes_aux__report_pred_proc_id_7_0_i19);
MR_def_label(hlds__passes_aux__report_pred_proc_id_7_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_decr_sp_and_return(7);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(parse_tree__prog_out__maybe_write_string_4_0);
MR_decl_entry(parse_tree__prog_out__maybe_flush_output_3_0);
MR_decl_entry(io__open_output_4_0);
MR_decl_entry(io__set_output_stream_4_0);
MR_decl_entry(io__close_output_3_0);
MR_decl_entry(parse_tree__prog_out__maybe_report_stats_3_0);
MR_decl_entry(string__append_list_2_0);
MR_decl_entry(parse_tree__prog_out__report_error_3_0);

MR_BEGIN_MODULE(hlds__passes_aux_module17)
	MR_init_entry1(hlds__passes_aux__output_to_file_5_0);
	MR_init_label8(hlds__passes_aux__output_to_file_5_0,2,3,4,5,6,7,8,11)
	MR_init_label8(hlds__passes_aux__output_to_file_5_0,12,13,14,15,16,10,17,18)
	MR_init_label1(hlds__passes_aux__output_to_file_5_0,19)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__hlds__passes_aux__output_to_file_5_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_r1 = (MR_Integer) 34;
	MR_np_call_localret_ent(libs__globals__io_lookup_bool_option_4_0,
		hlds__passes_aux__output_to_file_5_0_i2);
MR_def_label(hlds__passes_aux__output_to_file_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = (MR_Integer) 42;
	MR_np_call_localret_ent(libs__globals__io_lookup_bool_option_4_0,
		hlds__passes_aux__output_to_file_5_0_i3);
MR_def_label(hlds__passes_aux__output_to_file_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = (MR_Word) MR_string_const("% Writing to file \140", 19);
	MR_np_call_localret_ent(parse_tree__prog_out__maybe_write_string_4_0,
		hlds__passes_aux__output_to_file_5_0_i4);
MR_def_label(hlds__passes_aux__output_to_file_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(parse_tree__prog_out__maybe_write_string_4_0,
		hlds__passes_aux__output_to_file_5_0_i5);
MR_def_label(hlds__passes_aux__output_to_file_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_r2 = (MR_Word) MR_string_const("\'...\n", 5);
	MR_np_call_localret_ent(parse_tree__prog_out__maybe_write_string_4_0,
		hlds__passes_aux__output_to_file_5_0_i6);
MR_def_label(hlds__passes_aux__output_to_file_5_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(parse_tree__prog_out__maybe_flush_output_3_0,
		hlds__passes_aux__output_to_file_5_0_i7);
MR_def_label(hlds__passes_aux__output_to_file_5_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(io__open_output_4_0,
		hlds__passes_aux__output_to_file_5_0_i8);
MR_def_label(hlds__passes_aux__output_to_file_5_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,0)) {
		MR_GOTO_LAB(hlds__passes_aux__output_to_file_5_0_i10);
	}
	MR_sv(1) = MR_ctfield(0, MR_r1, 0);
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(io__set_output_stream_4_0,
		hlds__passes_aux__output_to_file_5_0_i11);
MR_def_label(hlds__passes_aux__output_to_file_5_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_sv(2) = MR_tempr1;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(hlds__passes_aux__output_to_file_5_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_1),
		mercury__hlds__passes_aux__output_to_file_5_0_i12);
MR_def_label(hlds__passes_aux__output_to_file_5_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_sv(2) = MR_tempr1;
	}
	MR_np_call_localret_ent(io__set_output_stream_4_0,
		hlds__passes_aux__output_to_file_5_0_i13);
MR_def_label(hlds__passes_aux__output_to_file_5_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(io__close_output_3_0,
		hlds__passes_aux__output_to_file_5_0_i14);
MR_def_label(hlds__passes_aux__output_to_file_5_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_r2 = (MR_Word) MR_string_const("% done.\n", 8);
	MR_np_call_localret_ent(parse_tree__prog_out__maybe_write_string_4_0,
		hlds__passes_aux__output_to_file_5_0_i15);
MR_def_label(hlds__passes_aux__output_to_file_5_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(parse_tree__prog_out__maybe_report_stats_3_0,
		hlds__passes_aux__output_to_file_5_0_i16);
MR_def_label(hlds__passes_aux__output_to_file_5_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(2);
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(5);
	}
MR_def_label(hlds__passes_aux__output_to_file_5_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_r2 = (MR_Word) MR_string_const("\n", 1);
	MR_np_call_localret_ent(parse_tree__prog_out__maybe_write_string_4_0,
		hlds__passes_aux__output_to_file_5_0_i17);
MR_def_label(hlds__passes_aux__output_to_file_5_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_TAG_COMMON(1,8,0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = (MR_Word) MR_string_const("can\'t open file \140", 17);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_r1 = MR_tempr2;
	}
	MR_np_call_localret_ent(string__append_list_2_0,
		hlds__passes_aux__output_to_file_5_0_i18);
MR_def_label(hlds__passes_aux__output_to_file_5_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(parse_tree__prog_out__report_error_3_0,
		hlds__passes_aux__output_to_file_5_0_i19);
MR_def_label(hlds__passes_aux__output_to_file_5_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__passes_aux_module18)
	MR_init_entry1(hlds__passes_aux__output_to_file_4_0);
	MR_init_label8(hlds__passes_aux__output_to_file_4_0,2,3,4,5,6,7,8,11)
	MR_init_label7(hlds__passes_aux__output_to_file_4_0,12,13,14,15,10,17,18)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__hlds__passes_aux__output_to_file_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_r1 = (MR_Integer) 34;
	MR_np_call_localret_ent(libs__globals__io_lookup_bool_option_4_0,
		hlds__passes_aux__output_to_file_4_0_i2);
MR_def_label(hlds__passes_aux__output_to_file_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = (MR_Integer) 42;
	MR_np_call_localret_ent(libs__globals__io_lookup_bool_option_4_0,
		hlds__passes_aux__output_to_file_4_0_i3);
MR_def_label(hlds__passes_aux__output_to_file_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = (MR_Word) MR_string_const("% Writing to file \140", 19);
	MR_np_call_localret_ent(parse_tree__prog_out__maybe_write_string_4_0,
		hlds__passes_aux__output_to_file_4_0_i4);
MR_def_label(hlds__passes_aux__output_to_file_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(parse_tree__prog_out__maybe_write_string_4_0,
		hlds__passes_aux__output_to_file_4_0_i5);
MR_def_label(hlds__passes_aux__output_to_file_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_r2 = (MR_Word) MR_string_const("\'...\n", 5);
	MR_np_call_localret_ent(parse_tree__prog_out__maybe_write_string_4_0,
		hlds__passes_aux__output_to_file_4_0_i6);
MR_def_label(hlds__passes_aux__output_to_file_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(parse_tree__prog_out__maybe_flush_output_3_0,
		hlds__passes_aux__output_to_file_4_0_i7);
MR_def_label(hlds__passes_aux__output_to_file_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(io__open_output_4_0,
		hlds__passes_aux__output_to_file_4_0_i8);
MR_def_label(hlds__passes_aux__output_to_file_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,0)) {
		MR_GOTO_LAB(hlds__passes_aux__output_to_file_4_0_i10);
	}
	MR_sv(1) = MR_ctfield(0, MR_r1, 0);
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(io__set_output_stream_4_0,
		hlds__passes_aux__output_to_file_4_0_i11);
MR_def_label(hlds__passes_aux__output_to_file_4_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_sv(2) = MR_tempr1;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(hlds__passes_aux__output_to_file_4_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_1),
		mercury__hlds__passes_aux__output_to_file_4_0_i12);
MR_def_label(hlds__passes_aux__output_to_file_4_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(io__set_output_stream_4_0,
		hlds__passes_aux__output_to_file_4_0_i13);
MR_def_label(hlds__passes_aux__output_to_file_4_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(io__close_output_3_0,
		hlds__passes_aux__output_to_file_4_0_i14);
MR_def_label(hlds__passes_aux__output_to_file_4_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_r2 = (MR_Word) MR_string_const("% done.\n", 8);
	MR_np_call_localret_ent(parse_tree__prog_out__maybe_write_string_4_0,
		hlds__passes_aux__output_to_file_4_0_i15);
MR_def_label(hlds__passes_aux__output_to_file_4_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(parse_tree__prog_out__maybe_report_stats_3_0);
MR_def_label(hlds__passes_aux__output_to_file_4_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_r2 = (MR_Word) MR_string_const("\n", 1);
	MR_np_call_localret_ent(parse_tree__prog_out__maybe_write_string_4_0,
		hlds__passes_aux__output_to_file_4_0_i17);
MR_def_label(hlds__passes_aux__output_to_file_4_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_TAG_COMMON(1,8,0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = (MR_Word) MR_string_const("can\'t open file \140", 17);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_r1 = MR_tempr2;
	}
	MR_np_call_localret_ent(string__append_list_2_0,
		hlds__passes_aux__output_to_file_4_0_i18);
MR_def_label(hlds__passes_aux__output_to_file_4_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(parse_tree__prog_out__report_error_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(builtin__semidet_fail_0_0);

MR_BEGIN_MODULE(hlds__passes_aux_module19)
	MR_init_entry1(hlds__passes_aux__use_dotnet_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__passes_aux__use_dotnet_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(builtin__semidet_fail_0_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__passes_aux_module20)
	MR_init_entry1(hlds__passes_aux__use_win32_0_0);
	MR_init_label1(hlds__passes_aux__use_win32_0_0,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__passes_aux__use_win32_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__hlds__passes_aux__use_win32_0_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
{
#line 611 "passes_aux.m"

#ifdef MR_WIN32
    SUCCESS_INDICATOR = 1;
#else
    SUCCESS_INDICATOR = 0;
#endif
;}
#line 2724 "hlds.passes_aux.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(hlds__passes_aux__use_win32_0_0_i1);
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(hlds__passes_aux__use_win32_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(io__get_exit_status_3_0);
MR_decl_entry(io__flush_output_2_0);
MR_decl_entry(io__make_temp_3_0);
MR_decl_entry(io__call_system_return_signal_4_0);
MR_decl_entry(fn__f_115_116_114_105_110_103_95_95_43_43_2_0);
MR_decl_entry(fn__string__append_list_1_0);
MR_decl_entry(libs__process_util__raise_signal_3_0);
MR_decl_entry(fn__string__int_to_string_1_0);
MR_decl_entry(parse_tree__prog_out__report_error_4_0);
MR_decl_entry(fn__io__error_message_1_0);
MR_decl_entry(io__remove_file_4_0);
MR_decl_entry(fn__bool__and_2_0);
MR_decl_entry(io__open_input_4_0);
MR_decl_entry(io__write_char_4_0);
MR_decl_entry(io__input_stream_foldl_io_5_0);
MR_decl_entry(io__close_input_3_0);

MR_BEGIN_MODULE(hlds__passes_aux_module21)
	MR_init_entry1(hlds__passes_aux__invoke_system_command_maybe_filter_output_7_0);
	MR_init_label8(hlds__passes_aux__invoke_system_command_maybe_filter_output_7_0,2,3,92,5,4,9,10,11)
	MR_init_label8(hlds__passes_aux__invoke_system_command_maybe_filter_output_7_0,7,13,16,14,20,22,18,26)
	MR_init_label8(hlds__passes_aux__invoke_system_command_maybe_filter_output_7_0,27,32,31,36,37,38,39,29)
	MR_init_label8(hlds__passes_aux__invoke_system_command_maybe_filter_output_7_0,41,42,47,50,53,51,57,58)
	MR_init_label8(hlds__passes_aux__invoke_system_command_maybe_filter_output_7_0,59,64,63,68,69,70,71,61)
	MR_init_label8(hlds__passes_aux__invoke_system_command_maybe_filter_output_7_0,73,74,44,76,77,80,106,82)
	MR_init_label8(hlds__passes_aux__invoke_system_command_maybe_filter_output_7_0,83,84,79,87,88,89,90,91)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__hlds__passes_aux__invoke_system_command_maybe_filter_output_7_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_np_call_localret_ent(io__get_exit_status_3_0,
		hlds__passes_aux__invoke_system_command_maybe_filter_output_7_0_i2);
MR_def_label(hlds__passes_aux__invoke_system_command_maybe_filter_output_7_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = (MR_Integer) 34;
	MR_np_call_localret_ent(libs__globals__io_lookup_bool_option_4_0,
		hlds__passes_aux__invoke_system_command_maybe_filter_output_7_0_i3);
MR_def_label(hlds__passes_aux__invoke_system_command_maybe_filter_output_7_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(2),0)) {
		MR_GOTO_LAB(hlds__passes_aux__invoke_system_command_maybe_filter_output_7_0_i5);
	}
MR_def_label(hlds__passes_aux__invoke_system_command_maybe_filter_output_7_0,92)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_GOTO_LAB(hlds__passes_aux__invoke_system_command_maybe_filter_output_7_0_i4);
MR_def_label(hlds__passes_aux__invoke_system_command_maybe_filter_output_7_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 40;
	MR_np_call_localret_ent(libs__globals__io_lookup_bool_option_4_0,
		hlds__passes_aux__invoke_system_command_maybe_filter_output_7_0_i92);
MR_def_label(hlds__passes_aux__invoke_system_command_maybe_filter_output_7_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_EQ(MR_sv(2),0)) {
		MR_GOTO_LAB(hlds__passes_aux__invoke_system_command_maybe_filter_output_7_0_i7);
	}
	MR_r1 = (MR_Word) MR_string_const("% Invoking system command \140", 27);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__passes_aux__invoke_system_command_maybe_filter_output_7_0_i9);
MR_def_label(hlds__passes_aux__invoke_system_command_maybe_filter_output_7_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__passes_aux__invoke_system_command_maybe_filter_output_7_0_i10);
MR_def_label(hlds__passes_aux__invoke_system_command_maybe_filter_output_7_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("\'...\n", 5);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__passes_aux__invoke_system_command_maybe_filter_output_7_0_i11);
MR_def_label(hlds__passes_aux__invoke_system_command_maybe_filter_output_7_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__flush_output_2_0,
		hlds__passes_aux__invoke_system_command_maybe_filter_output_7_0_i7);
MR_def_label(hlds__passes_aux__invoke_system_command_maybe_filter_output_7_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__make_temp_3_0,
		hlds__passes_aux__invoke_system_command_maybe_filter_output_7_0_i13);
MR_def_label(hlds__passes_aux__invoke_system_command_maybe_filter_output_7_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_np_call_localret_ent(hlds__passes_aux__use_dotnet_0_0,
		hlds__passes_aux__invoke_system_command_maybe_filter_output_7_0_i16);
MR_def_label(hlds__passes_aux__invoke_system_command_maybe_filter_output_7_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(hlds__passes_aux__invoke_system_command_maybe_filter_output_7_0_i14);
	}
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(io__call_system_return_signal_4_0,
		hlds__passes_aux__invoke_system_command_maybe_filter_output_7_0_i27);
MR_def_label(hlds__passes_aux__invoke_system_command_maybe_filter_output_7_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(6);
	MR_np_call_localret_ent(hlds__passes_aux__use_win32_0_0,
		hlds__passes_aux__invoke_system_command_maybe_filter_output_7_0_i20);
MR_def_label(hlds__passes_aux__invoke_system_command_maybe_filter_output_7_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(hlds__passes_aux__invoke_system_command_maybe_filter_output_7_0_i18);
	}
	MR_r1 = (MR_Word) MR_string_const(" > ", 3);
	MR_r2 = MR_sv(6);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		hlds__passes_aux__invoke_system_command_maybe_filter_output_7_0_i22);
MR_def_label(hlds__passes_aux__invoke_system_command_maybe_filter_output_7_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		hlds__passes_aux__invoke_system_command_maybe_filter_output_7_0_i26);
MR_def_label(hlds__passes_aux__invoke_system_command_maybe_filter_output_7_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(6);
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_TAG_COMMON(1,8,1);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = (MR_Word) MR_string_const(" > ", 3);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_sv(3);
	MR_tfield(1, MR_tempr3, 1) = MR_tempr2;
	MR_r1 = MR_tempr3;
	}
	MR_np_call_localret_ent(fn__string__append_list_1_0,
		hlds__passes_aux__invoke_system_command_maybe_filter_output_7_0_i26);
MR_def_label(hlds__passes_aux__invoke_system_command_maybe_filter_output_7_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__call_system_return_signal_4_0,
		hlds__passes_aux__invoke_system_command_maybe_filter_output_7_0_i27);
MR_def_label(hlds__passes_aux__invoke_system_command_maybe_filter_output_7_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,0)) {
		MR_GOTO_LAB(hlds__passes_aux__invoke_system_command_maybe_filter_output_7_0_i29);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(0, MR_r1, 0);
	MR_r4 = MR_tempr1;
	if (MR_PTAG_TESTR(MR_tempr1,0)) {
		MR_GOTO_LAB(hlds__passes_aux__invoke_system_command_maybe_filter_output_7_0_i31);
	}
	MR_sv(3) = MR_ctfield(0, MR_tempr1, 0);
	MR_r1 = MR_sv(2);
	MR_r2 = (MR_Word) MR_string_const("% done.\n", 8);
	}
	MR_np_call_localret_ent(parse_tree__prog_out__maybe_write_string_4_0,
		hlds__passes_aux__invoke_system_command_maybe_filter_output_7_0_i32);
MR_def_label(hlds__passes_aux__invoke_system_command_maybe_filter_output_7_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(3),0)) {
		MR_GOTO_LAB(hlds__passes_aux__invoke_system_command_maybe_filter_output_7_0_i42);
	}
	MR_sv(3) = (MR_Integer) 1;
	MR_np_call_localret_ent(hlds__passes_aux__use_dotnet_0_0,
		hlds__passes_aux__invoke_system_command_maybe_filter_output_7_0_i47);
MR_def_label(hlds__passes_aux__invoke_system_command_maybe_filter_output_7_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_ctfield(1, MR_r4, 0);
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(libs__process_util__raise_signal_3_0,
		hlds__passes_aux__invoke_system_command_maybe_filter_output_7_0_i36);
MR_def_label(hlds__passes_aux__invoke_system_command_maybe_filter_output_7_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		hlds__passes_aux__invoke_system_command_maybe_filter_output_7_0_i37);
MR_def_label(hlds__passes_aux__invoke_system_command_maybe_filter_output_7_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const(".", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		hlds__passes_aux__invoke_system_command_maybe_filter_output_7_0_i38);
MR_def_label(hlds__passes_aux__invoke_system_command_maybe_filter_output_7_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("system command received signal ", 31);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		hlds__passes_aux__invoke_system_command_maybe_filter_output_7_0_i39);
MR_def_label(hlds__passes_aux__invoke_system_command_maybe_filter_output_7_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(parse_tree__prog_out__report_error_4_0,
		hlds__passes_aux__invoke_system_command_maybe_filter_output_7_0_i42);
MR_def_label(hlds__passes_aux__invoke_system_command_maybe_filter_output_7_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(1, MR_r1, 0);
	MR_np_call_localret_ent(fn__io__error_message_1_0,
		hlds__passes_aux__invoke_system_command_maybe_filter_output_7_0_i41);
MR_def_label(hlds__passes_aux__invoke_system_command_maybe_filter_output_7_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(parse_tree__prog_out__report_error_4_0,
		hlds__passes_aux__invoke_system_command_maybe_filter_output_7_0_i42);
MR_def_label(hlds__passes_aux__invoke_system_command_maybe_filter_output_7_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = (MR_Integer) 0;
	MR_np_call_localret_ent(hlds__passes_aux__use_dotnet_0_0,
		hlds__passes_aux__invoke_system_command_maybe_filter_output_7_0_i47);
MR_def_label(hlds__passes_aux__invoke_system_command_maybe_filter_output_7_0,47)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(hlds__passes_aux__invoke_system_command_maybe_filter_output_7_0_i44);
	}
	if (MR_LTAGS_TEST(MR_sv(4),0,0)) {
		MR_GOTO_LAB(hlds__passes_aux__invoke_system_command_maybe_filter_output_7_0_i44);
	}
	MR_sv(4) = MR_ctfield(1, MR_sv(4), 0);
	MR_np_call_localret_ent(io__make_temp_3_0,
		hlds__passes_aux__invoke_system_command_maybe_filter_output_7_0_i50);
MR_def_label(hlds__passes_aux__invoke_system_command_maybe_filter_output_7_0,50)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_np_call_localret_ent(hlds__passes_aux__use_win32_0_0,
		hlds__passes_aux__invoke_system_command_maybe_filter_output_7_0_i53);
MR_def_label(hlds__passes_aux__invoke_system_command_maybe_filter_output_7_0,53)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(hlds__passes_aux__invoke_system_command_maybe_filter_output_7_0_i51);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(7);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = (MR_Word) MR_string_const(" > ", 3);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_sv(6);
	MR_tfield(1, MR_tempr3, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = (MR_Word) MR_string_const(" < ", 3);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr3;
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = MR_sv(4);
	MR_tfield(1, MR_r1, 1) = MR_tempr2;
	}
	MR_np_call_localret_ent(fn__string__append_list_1_0,
		hlds__passes_aux__invoke_system_command_maybe_filter_output_7_0_i57);
MR_def_label(hlds__passes_aux__invoke_system_command_maybe_filter_output_7_0,51)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(7);
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_TAG_COMMON(1,8,1);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = (MR_Word) MR_string_const(" > ", 3);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_sv(6);
	MR_tfield(1, MR_tempr3, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = (MR_Word) MR_string_const(" < ", 3);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr3;
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr4, 0) = MR_sv(4);
	MR_tfield(1, MR_tempr4, 1) = MR_tempr2;
	MR_r1 = MR_tempr4;
	}
	MR_np_call_localret_ent(fn__string__append_list_1_0,
		hlds__passes_aux__invoke_system_command_maybe_filter_output_7_0_i57);
MR_def_label(hlds__passes_aux__invoke_system_command_maybe_filter_output_7_0,57)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__call_system_return_signal_4_0,
		hlds__passes_aux__invoke_system_command_maybe_filter_output_7_0_i58);
MR_def_label(hlds__passes_aux__invoke_system_command_maybe_filter_output_7_0,58)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(6);
	MR_np_call_localret_ent(io__remove_file_4_0,
		hlds__passes_aux__invoke_system_command_maybe_filter_output_7_0_i59);
MR_def_label(hlds__passes_aux__invoke_system_command_maybe_filter_output_7_0,59)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(4),0)) {
		MR_GOTO_LAB(hlds__passes_aux__invoke_system_command_maybe_filter_output_7_0_i61);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(0, MR_sv(4), 0);
	MR_r4 = MR_tempr1;
	if (MR_PTAG_TESTR(MR_tempr1,0)) {
		MR_GOTO_LAB(hlds__passes_aux__invoke_system_command_maybe_filter_output_7_0_i63);
	}
	MR_r1 = MR_sv(2);
	MR_sv(2) = MR_ctfield(0, MR_tempr1, 0);
	MR_r2 = (MR_Word) MR_string_const("% done.\n", 8);
	}
	MR_np_call_localret_ent(parse_tree__prog_out__maybe_write_string_4_0,
		hlds__passes_aux__invoke_system_command_maybe_filter_output_7_0_i64);
MR_def_label(hlds__passes_aux__invoke_system_command_maybe_filter_output_7_0,64)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(2),0)) {
		MR_GOTO_LAB(hlds__passes_aux__invoke_system_command_maybe_filter_output_7_0_i74);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = (MR_Integer) 1;
	MR_np_call_localret_ent(fn__bool__and_2_0,
		hlds__passes_aux__invoke_system_command_maybe_filter_output_7_0_i76);
MR_def_label(hlds__passes_aux__invoke_system_command_maybe_filter_output_7_0,63)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_ctfield(1, MR_r4, 0);
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(libs__process_util__raise_signal_3_0,
		hlds__passes_aux__invoke_system_command_maybe_filter_output_7_0_i68);
MR_def_label(hlds__passes_aux__invoke_system_command_maybe_filter_output_7_0,68)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		hlds__passes_aux__invoke_system_command_maybe_filter_output_7_0_i69);
MR_def_label(hlds__passes_aux__invoke_system_command_maybe_filter_output_7_0,69)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const(".", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		hlds__passes_aux__invoke_system_command_maybe_filter_output_7_0_i70);
MR_def_label(hlds__passes_aux__invoke_system_command_maybe_filter_output_7_0,70)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("system command received signal ", 31);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		hlds__passes_aux__invoke_system_command_maybe_filter_output_7_0_i71);
MR_def_label(hlds__passes_aux__invoke_system_command_maybe_filter_output_7_0,71)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(parse_tree__prog_out__report_error_4_0,
		hlds__passes_aux__invoke_system_command_maybe_filter_output_7_0_i74);
MR_def_label(hlds__passes_aux__invoke_system_command_maybe_filter_output_7_0,61)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(1, MR_sv(4), 0);
	MR_np_call_localret_ent(fn__io__error_message_1_0,
		hlds__passes_aux__invoke_system_command_maybe_filter_output_7_0_i73);
MR_def_label(hlds__passes_aux__invoke_system_command_maybe_filter_output_7_0,73)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(parse_tree__prog_out__report_error_4_0,
		hlds__passes_aux__invoke_system_command_maybe_filter_output_7_0_i74);
MR_def_label(hlds__passes_aux__invoke_system_command_maybe_filter_output_7_0,74)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_r2 = (MR_Integer) 0;
	MR_np_call_localret_ent(fn__bool__and_2_0,
		hlds__passes_aux__invoke_system_command_maybe_filter_output_7_0_i76);
MR_def_label(hlds__passes_aux__invoke_system_command_maybe_filter_output_7_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_sv(7) = MR_sv(6);
	MR_r2 = (MR_Integer) 1;
	MR_np_call_localret_ent(fn__bool__and_2_0,
		hlds__passes_aux__invoke_system_command_maybe_filter_output_7_0_i76);
MR_def_label(hlds__passes_aux__invoke_system_command_maybe_filter_output_7_0,76)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(7);
	MR_np_call_localret_ent(io__open_input_4_0,
		hlds__passes_aux__invoke_system_command_maybe_filter_output_7_0_i77);
MR_def_label(hlds__passes_aux__invoke_system_command_maybe_filter_output_7_0,77)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,0)) {
		MR_GOTO_LAB(hlds__passes_aux__invoke_system_command_maybe_filter_output_7_0_i79);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(9,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(io__write_char_4_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(1);
	MR_sv(3) = MR_ctfield(0, MR_r1, 0);
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(io__input_stream_foldl_io_5_0,
		hlds__passes_aux__invoke_system_command_maybe_filter_output_7_0_i80);
MR_def_label(hlds__passes_aux__invoke_system_command_maybe_filter_output_7_0,80)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(hlds__passes_aux__invoke_system_command_maybe_filter_output_7_0_i82);
	}
MR_def_label(hlds__passes_aux__invoke_system_command_maybe_filter_output_7_0,106)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(io__close_input_3_0,
		hlds__passes_aux__invoke_system_command_maybe_filter_output_7_0_i89);
MR_def_label(hlds__passes_aux__invoke_system_command_maybe_filter_output_7_0,82)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(1, MR_r1, 0);
	MR_np_call_localret_ent(fn__io__error_message_1_0,
		hlds__passes_aux__invoke_system_command_maybe_filter_output_7_0_i83);
MR_def_label(hlds__passes_aux__invoke_system_command_maybe_filter_output_7_0,83)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("error reading command output: ", 30);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		hlds__passes_aux__invoke_system_command_maybe_filter_output_7_0_i84);
MR_def_label(hlds__passes_aux__invoke_system_command_maybe_filter_output_7_0,84)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(parse_tree__prog_out__report_error_4_0,
		hlds__passes_aux__invoke_system_command_maybe_filter_output_7_0_i106);
MR_def_label(hlds__passes_aux__invoke_system_command_maybe_filter_output_7_0,79)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(1, MR_r1, 0);
	MR_np_call_localret_ent(fn__io__error_message_1_0,
		hlds__passes_aux__invoke_system_command_maybe_filter_output_7_0_i87);
MR_def_label(hlds__passes_aux__invoke_system_command_maybe_filter_output_7_0,87)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("error opening command output: ", 30);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		hlds__passes_aux__invoke_system_command_maybe_filter_output_7_0_i88);
MR_def_label(hlds__passes_aux__invoke_system_command_maybe_filter_output_7_0,88)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(parse_tree__prog_out__report_error_4_0,
		hlds__passes_aux__invoke_system_command_maybe_filter_output_7_0_i89);
MR_def_label(hlds__passes_aux__invoke_system_command_maybe_filter_output_7_0,89)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(7);
	MR_np_call_localret_ent(io__remove_file_4_0,
		hlds__passes_aux__invoke_system_command_maybe_filter_output_7_0_i90);
MR_def_label(hlds__passes_aux__invoke_system_command_maybe_filter_output_7_0,90)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(io__set_exit_status_3_0,
		hlds__passes_aux__invoke_system_command_maybe_filter_output_7_0_i91);
MR_def_label(hlds__passes_aux__invoke_system_command_maybe_filter_output_7_0,91)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_decr_sp_and_return(8);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__passes_aux_module22)
	MR_init_entry1(hlds__passes_aux__invoke_system_command_6_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__hlds__passes_aux__invoke_system_command_6_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	MR_np_tailcall_ent(hlds__passes_aux__invoke_system_command_maybe_filter_output_7_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__passes_aux_module23)
	MR_init_entry1(hlds__passes_aux__make_command_string_3_0);
	MR_init_label2(hlds__passes_aux__make_command_string_3_0,7,27)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__hlds__passes_aux__make_command_string_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__hlds__passes_aux__make_command_string_3_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
{
#line 611 "passes_aux.m"

#ifdef MR_WIN32
    SUCCESS_INDICATOR = 1;
#else
    SUCCESS_INDICATOR = 0;
#endif
;}
#line 3242 "hlds.passes_aux.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(hlds__passes_aux__make_command_string_3_0_i27);
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	if (MR_INT_NE(MR_r2,0)) {
		MR_GOTO_LAB(hlds__passes_aux__make_command_string_3_0_i7);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_TAG_COMMON(1,8,2);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = (MR_Word) MR_string_const(" \'", 2);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = (MR_Word) MR_string_const("sh -c ", 6);
	MR_tfield(1, MR_r1, 1) = MR_tempr2;
	MR_np_tailcall_ent(string__append_list_2_0);
	}
MR_def_label(hlds__passes_aux__make_command_string_3_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_TAG_COMMON(1,8,3);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = (MR_Word) MR_string_const(" \"", 2);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = (MR_Word) MR_string_const("sh -c ", 6);
	MR_tfield(1, MR_r1, 1) = MR_tempr2;
	MR_np_tailcall_ent(string__append_list_2_0);
	}
MR_def_label(hlds__passes_aux__make_command_string_3_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__passes_aux_module24)
	MR_init_entry1(hlds__passes_aux__maybe_set_exit_status_3_0);
	MR_init_label1(hlds__passes_aux__maybe_set_exit_status_3_0,13)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__hlds__passes_aux__maybe_set_exit_status_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(hlds__passes_aux__maybe_set_exit_status_3_0_i13);
	}
	MR_r1 = (MR_Integer) 1;
	MR_np_tailcall_ent(io__set_exit_status_3_0);
MR_def_label(hlds__passes_aux__maybe_set_exit_status_3_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__hlds_module__module_info_pred_info_3_0);
MR_decl_entry(hlds__hlds_pred__pred_info_is_imported_1_0);
MR_decl_entry(hlds__hlds_module__module_info_set_pred_info_4_0);

MR_BEGIN_MODULE(hlds__passes_aux_module25)
	MR_init_entry1(hlds__passes_aux__process_nonimported_pred_9_0);
	MR_init_label7(hlds__passes_aux__process_nonimported_pred_9_0,2,8,6,12,3,14,15)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__passes_aux__process_nonimported_pred_9_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r3;
	MR_sv(3) = MR_tempr1;
	MR_tempr2 = MR_r4;
	MR_sv(5) = MR_tempr2;
	MR_sv(6) = MR_r5;
	MR_r1 = MR_tempr2;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_module__module_info_pred_info_3_0,
		hlds__passes_aux__process_nonimported_pred_9_0_i2);
MR_def_label(hlds__passes_aux__process_nonimported_pred_9_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_is_imported_1_0,
		hlds__passes_aux__process_nonimported_pred_9_0_i8);
MR_def_label(hlds__passes_aux__process_nonimported_pred_9_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(hlds__passes_aux__process_nonimported_pred_9_0_i6);
	}
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(6);
	MR_decr_sp_and_return(7);
MR_def_label(hlds__passes_aux__process_nonimported_pred_9_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(4);
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(hlds__passes_aux__process_nonimported_pred_9_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_1),
		mercury__hlds__passes_aux__process_nonimported_pred_9_0_i12);
MR_def_label(hlds__passes_aux__process_nonimported_pred_9_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(hlds__passes_aux__process_nonimported_pred_9_0_i3);
	}
	MR_r1 = MR_sv(4);
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(6);
	MR_decr_sp_and_return(7);
MR_def_label(hlds__passes_aux__process_nonimported_pred_9_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	MR_r4 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(5);
	MR_r5 = MR_sv(6);
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(hlds__passes_aux__process_nonimported_pred_9_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_5),
		mercury__hlds__passes_aux__process_nonimported_pred_9_0_i14);
MR_def_label(hlds__passes_aux__process_nonimported_pred_9_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r3;
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(hlds__hlds_module__module_info_set_pred_info_4_0,
		hlds__passes_aux__process_nonimported_pred_9_0_i15);
MR_def_label(hlds__passes_aux__process_nonimported_pred_9_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_decr_sp_and_return(7);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__passes_aux_module26)
	MR_init_entry1(__Unify___hlds__passes_aux__command_verbosity_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___hlds__passes_aux__command_verbosity_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_r1 == MR_r2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(private_builtin__builtin_compare_int_3_0);

MR_BEGIN_MODULE(hlds__passes_aux_module27)
	MR_init_entry1(__Compare___hlds__passes_aux__command_verbosity_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___hlds__passes_aux__command_verbosity_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(private_builtin__builtin_unify_pred_2_0);

MR_BEGIN_MODULE(hlds__passes_aux_module28)
	MR_init_entry1(__Unify___hlds__passes_aux__pred_error_task_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___hlds__passes_aux__pred_error_task_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(private_builtin__builtin_unify_pred_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(private_builtin__builtin_compare_pred_3_0);

MR_BEGIN_MODULE(hlds__passes_aux_module29)
	MR_init_entry1(__Compare___hlds__passes_aux__pred_error_task_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___hlds__passes_aux__pred_error_task_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(private_builtin__builtin_compare_pred_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__passes_aux_module30)
	MR_init_entry1(__Unify___hlds__passes_aux__quote_char_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___hlds__passes_aux__quote_char_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_r1 == MR_r2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__passes_aux_module31)
	MR_init_entry1(__Compare___hlds__passes_aux__quote_char_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___hlds__passes_aux__quote_char_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___univ__univ_0_0);

MR_BEGIN_MODULE(hlds__passes_aux_module32)
	MR_init_entry1(__Unify___hlds__passes_aux__task_0_0);
	MR_init_label8(__Unify___hlds__passes_aux__task_0_0,6,10,14,18,19,23,27,31)
	MR_init_label5(__Unify___hlds__passes_aux__task_0_0,35,39,41,65,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___hlds__passes_aux__task_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___hlds__passes_aux__task_0_0_i65);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_r3 = MR_sv(1);
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r3),
		MR_LABEL_AP(__Unify___hlds__passes_aux__task_0_0_i6) MR_AND
		MR_LABEL_AP(__Unify___hlds__passes_aux__task_0_0_i10) MR_AND
		MR_LABEL_AP(__Unify___hlds__passes_aux__task_0_0_i14) MR_AND
		MR_LABEL_AP(__Unify___hlds__passes_aux__task_0_0_i18));
MR_def_label(__Unify___hlds__passes_aux__task_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),0)) {
		MR_GOTO_LAB(__Unify___hlds__passes_aux__task_0_0_i1);
	}
	MR_r1 = MR_ctfield(0, MR_r3, 0);
	MR_r2 = MR_ctfield(0, MR_sv(2), 0);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(private_builtin__builtin_unify_pred_2_0);
MR_def_label(__Unify___hlds__passes_aux__task_0_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Unify___hlds__passes_aux__task_0_0_i1);
	}
	MR_r1 = MR_ctfield(1, MR_r3, 0);
	MR_r2 = MR_ctfield(1, MR_sv(2), 0);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(private_builtin__builtin_unify_pred_2_0);
MR_def_label(__Unify___hlds__passes_aux__task_0_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),2)) {
		MR_GOTO_LAB(__Unify___hlds__passes_aux__task_0_0_i1);
	}
	MR_r1 = MR_ctfield(2, MR_r3, 0);
	MR_r2 = MR_ctfield(2, MR_sv(2), 0);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(private_builtin__builtin_unify_pred_2_0);
MR_def_label(__Unify___hlds__passes_aux__task_0_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_ctfield(3, MR_r3, 0),
		MR_LABEL_AP(__Unify___hlds__passes_aux__task_0_0_i19) MR_AND
		MR_LABEL_AP(__Unify___hlds__passes_aux__task_0_0_i23) MR_AND
		MR_LABEL_AP(__Unify___hlds__passes_aux__task_0_0_i27) MR_AND
		MR_LABEL_AP(__Unify___hlds__passes_aux__task_0_0_i31) MR_AND
		MR_LABEL_AP(__Unify___hlds__passes_aux__task_0_0_i35) MR_AND
		MR_LABEL_AP(__Unify___hlds__passes_aux__task_0_0_i39));
MR_def_label(__Unify___hlds__passes_aux__task_0_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,0)) {
		MR_GOTO_LAB(__Unify___hlds__passes_aux__task_0_0_i1);
	}
	MR_r1 = MR_ctfield(3, MR_r3, 1);
	MR_r2 = MR_ctfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(private_builtin__builtin_unify_pred_2_0);
MR_def_label(__Unify___hlds__passes_aux__task_0_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,1)) {
		MR_GOTO_LAB(__Unify___hlds__passes_aux__task_0_0_i1);
	}
	MR_r1 = MR_ctfield(3, MR_r3, 1);
	MR_r2 = MR_ctfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(private_builtin__builtin_unify_pred_2_0);
MR_def_label(__Unify___hlds__passes_aux__task_0_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,2)) {
		MR_GOTO_LAB(__Unify___hlds__passes_aux__task_0_0_i1);
	}
	MR_r1 = MR_ctfield(3, MR_r3, 1);
	MR_r2 = MR_ctfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(private_builtin__builtin_unify_pred_2_0);
MR_def_label(__Unify___hlds__passes_aux__task_0_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,3)) {
		MR_GOTO_LAB(__Unify___hlds__passes_aux__task_0_0_i1);
	}
	MR_r1 = MR_ctfield(3, MR_r3, 1);
	MR_r2 = MR_ctfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(private_builtin__builtin_unify_pred_2_0);
MR_def_label(__Unify___hlds__passes_aux__task_0_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,4)) {
		MR_GOTO_LAB(__Unify___hlds__passes_aux__task_0_0_i1);
	}
	MR_r1 = MR_ctfield(3, MR_r3, 1);
	MR_r2 = MR_ctfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(private_builtin__builtin_unify_pred_2_0);
MR_def_label(__Unify___hlds__passes_aux__task_0_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,5)) {
		MR_GOTO_LAB(__Unify___hlds__passes_aux__task_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r3;
	MR_sv(1) = MR_ctfield(3, MR_tempr2, 2);
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_ctfield(3, MR_tempr1, 2);
	MR_r1 = MR_ctfield(3, MR_tempr2, 1);
	MR_r2 = MR_ctfield(3, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(private_builtin__builtin_unify_pred_2_0,
		__Unify___hlds__passes_aux__task_0_0_i41);
MR_def_label(__Unify___hlds__passes_aux__task_0_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___hlds__passes_aux__task_0_0_i1);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Unify___univ__univ_0_0);
MR_def_label(__Unify___hlds__passes_aux__task_0_0,65)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___hlds__passes_aux__task_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Compare___univ__univ_0_0);

MR_BEGIN_MODULE(hlds__passes_aux_module33)
	MR_init_entry1(__Compare___hlds__passes_aux__task_0_0);
	MR_init_label8(__Compare___hlds__passes_aux__task_0_0,3,2,6,20,34,39,48,49)
	MR_init_label8(__Compare___hlds__passes_aux__task_0_0,63,77,91,105,116,118,119,130)
	MR_init_label3(__Compare___hlds__passes_aux__task_0_0,131,133,189)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___hlds__passes_aux__task_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___hlds__passes_aux__task_0_0_i3);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___hlds__passes_aux__task_0_0_i2);
MR_def_label(__Compare___hlds__passes_aux__task_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___hlds__passes_aux__task_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(1);
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r3),
		MR_LABEL_AP(__Compare___hlds__passes_aux__task_0_0_i6) MR_AND
		MR_LABEL_AP(__Compare___hlds__passes_aux__task_0_0_i20) MR_AND
		MR_LABEL_AP(__Compare___hlds__passes_aux__task_0_0_i34) MR_AND
		MR_LABEL_AP(__Compare___hlds__passes_aux__task_0_0_i48));
MR_def_label(__Compare___hlds__passes_aux__task_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_sv(2);
	if (MR_INT_EQ(MR_tag(MR_r4),0)) {
		MR_GOTO_LAB(__Compare___hlds__passes_aux__task_0_0_i39);
	}
	MR_GOTO_LAB(__Compare___hlds__passes_aux__task_0_0_i118);
MR_def_label(__Compare___hlds__passes_aux__task_0_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_sv(2);
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r4),
		MR_LABEL_AP(__Compare___hlds__passes_aux__task_0_0_i130) MR_AND
		MR_LABEL_AP(__Compare___hlds__passes_aux__task_0_0_i39) MR_AND
		MR_LABEL_AP(__Compare___hlds__passes_aux__task_0_0_i118) MR_AND
		MR_LABEL_AP(__Compare___hlds__passes_aux__task_0_0_i118));
MR_def_label(__Compare___hlds__passes_aux__task_0_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_sv(2);
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r4),
		MR_LABEL_AP(__Compare___hlds__passes_aux__task_0_0_i130) MR_AND
		MR_LABEL_AP(__Compare___hlds__passes_aux__task_0_0_i130) MR_AND
		MR_LABEL_AP(__Compare___hlds__passes_aux__task_0_0_i39) MR_AND
		MR_LABEL_AP(__Compare___hlds__passes_aux__task_0_0_i118));
MR_def_label(__Compare___hlds__passes_aux__task_0_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_const_mask_field(MR_r3, 0);
	MR_r2 = MR_const_mask_field(MR_r4, 0);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(private_builtin__builtin_compare_pred_3_0);
MR_def_label(__Compare___hlds__passes_aux__task_0_0,48)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_ctfield(3, MR_r3, 0),
		MR_LABEL_AP(__Compare___hlds__passes_aux__task_0_0_i49) MR_AND
		MR_LABEL_AP(__Compare___hlds__passes_aux__task_0_0_i63) MR_AND
		MR_LABEL_AP(__Compare___hlds__passes_aux__task_0_0_i77) MR_AND
		MR_LABEL_AP(__Compare___hlds__passes_aux__task_0_0_i91) MR_AND
		MR_LABEL_AP(__Compare___hlds__passes_aux__task_0_0_i105) MR_AND
		MR_LABEL_AP(__Compare___hlds__passes_aux__task_0_0_i119));
MR_def_label(__Compare___hlds__passes_aux__task_0_0,49)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_r4 = MR_tempr1;
	if (MR_INT_NE(MR_tag(MR_tempr1),3)) {
		MR_GOTO_LAB(__Compare___hlds__passes_aux__task_0_0_i130);
	}
	if (MR_INT_EQ(MR_ctfield(3, MR_tempr1, 0),0)) {
		MR_GOTO_LAB(__Compare___hlds__passes_aux__task_0_0_i116);
	}
	MR_GOTO_LAB(__Compare___hlds__passes_aux__task_0_0_i118);
	}
MR_def_label(__Compare___hlds__passes_aux__task_0_0,63)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_r4 = MR_tempr1;
	if (MR_INT_NE(MR_tag(MR_tempr1),3)) {
		MR_GOTO_LAB(__Compare___hlds__passes_aux__task_0_0_i130);
	}
	MR_COMPUTED_GOTO((MR_Unsigned) MR_ctfield(3, MR_tempr1, 0),
		MR_LABEL_AP(__Compare___hlds__passes_aux__task_0_0_i130) MR_AND
		MR_LABEL_AP(__Compare___hlds__passes_aux__task_0_0_i116) MR_AND
		MR_LABEL_AP(__Compare___hlds__passes_aux__task_0_0_i118) MR_AND
		MR_LABEL_AP(__Compare___hlds__passes_aux__task_0_0_i118) MR_AND
		MR_LABEL_AP(__Compare___hlds__passes_aux__task_0_0_i118) MR_AND
		MR_LABEL_AP(__Compare___hlds__passes_aux__task_0_0_i118));
	}
MR_def_label(__Compare___hlds__passes_aux__task_0_0,77)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_r4 = MR_tempr1;
	if (MR_INT_NE(MR_tag(MR_tempr1),3)) {
		MR_GOTO_LAB(__Compare___hlds__passes_aux__task_0_0_i130);
	}
	MR_COMPUTED_GOTO((MR_Unsigned) MR_ctfield(3, MR_tempr1, 0),
		MR_LABEL_AP(__Compare___hlds__passes_aux__task_0_0_i130) MR_AND
		MR_LABEL_AP(__Compare___hlds__passes_aux__task_0_0_i130) MR_AND
		MR_LABEL_AP(__Compare___hlds__passes_aux__task_0_0_i116) MR_AND
		MR_LABEL_AP(__Compare___hlds__passes_aux__task_0_0_i118) MR_AND
		MR_LABEL_AP(__Compare___hlds__passes_aux__task_0_0_i118) MR_AND
		MR_LABEL_AP(__Compare___hlds__passes_aux__task_0_0_i118));
	}
MR_def_label(__Compare___hlds__passes_aux__task_0_0,91)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_r4 = MR_tempr1;
	if (MR_INT_NE(MR_tag(MR_tempr1),3)) {
		MR_GOTO_LAB(__Compare___hlds__passes_aux__task_0_0_i130);
	}
	MR_COMPUTED_GOTO((MR_Unsigned) MR_ctfield(3, MR_tempr1, 0),
		MR_LABEL_AP(__Compare___hlds__passes_aux__task_0_0_i130) MR_AND
		MR_LABEL_AP(__Compare___hlds__passes_aux__task_0_0_i130) MR_AND
		MR_LABEL_AP(__Compare___hlds__passes_aux__task_0_0_i130) MR_AND
		MR_LABEL_AP(__Compare___hlds__passes_aux__task_0_0_i116) MR_AND
		MR_LABEL_AP(__Compare___hlds__passes_aux__task_0_0_i118) MR_AND
		MR_LABEL_AP(__Compare___hlds__passes_aux__task_0_0_i118));
	}
MR_def_label(__Compare___hlds__passes_aux__task_0_0,105)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_r4 = MR_tempr1;
	if (MR_INT_NE(MR_tag(MR_tempr1),3)) {
		MR_GOTO_LAB(__Compare___hlds__passes_aux__task_0_0_i130);
	}
	MR_COMPUTED_GOTO((MR_Unsigned) MR_ctfield(3, MR_tempr1, 0),
		MR_LABEL_AP(__Compare___hlds__passes_aux__task_0_0_i130) MR_AND
		MR_LABEL_AP(__Compare___hlds__passes_aux__task_0_0_i130) MR_AND
		MR_LABEL_AP(__Compare___hlds__passes_aux__task_0_0_i130) MR_AND
		MR_LABEL_AP(__Compare___hlds__passes_aux__task_0_0_i130) MR_AND
		MR_LABEL_AP(__Compare___hlds__passes_aux__task_0_0_i116) MR_AND
		MR_LABEL_AP(__Compare___hlds__passes_aux__task_0_0_i118));
	}
MR_def_label(__Compare___hlds__passes_aux__task_0_0,116)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(3, MR_r3, 1);
	MR_r2 = MR_ctfield(3, MR_r4, 1);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(private_builtin__builtin_compare_pred_3_0);
MR_def_label(__Compare___hlds__passes_aux__task_0_0,118)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___hlds__passes_aux__task_0_0,119)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_r4 = MR_tempr1;
	if (MR_INT_NE(MR_tag(MR_tempr1),3)) {
		MR_GOTO_LAB(__Compare___hlds__passes_aux__task_0_0_i130);
	}
	if (MR_INT_EQ(MR_ctfield(3, MR_tempr1, 0),5)) {
		MR_GOTO_LAB(__Compare___hlds__passes_aux__task_0_0_i131);
	}
	}
MR_def_label(__Compare___hlds__passes_aux__task_0_0,130)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___hlds__passes_aux__task_0_0,131)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr3 = MR_r3;
	MR_tempr1 = MR_ctfield(3, MR_tempr3, 2);
	MR_tempr4 = MR_r4;
	MR_tempr2 = MR_ctfield(3, MR_tempr4, 2);
	MR_sv(1) = MR_tempr2;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_ctfield(3, MR_tempr3, 1);
	MR_r2 = MR_ctfield(3, MR_tempr4, 1);
	}
	MR_np_call_localret_ent(private_builtin__builtin_compare_pred_3_0,
		__Compare___hlds__passes_aux__task_0_0_i133);
MR_def_label(__Compare___hlds__passes_aux__task_0_0,133)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___hlds__passes_aux__task_0_0_i189);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(1);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Compare___univ__univ_0_0);
MR_def_label(__Compare___hlds__passes_aux__task_0_0,189)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__passes_aux_module34)
	MR_init_entry1(hlds__passes_aux__IntroducedFrom__pred__process_all_nonimported_procs_errors__237__1_1_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__passes_aux__IntroducedFrom__pred__process_all_nonimported_procs_errors__237__1_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(f_104_108_100_115_95_95_112_97_115_115_101_115_95_97_117_120_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_97_108_108_95_110_111_110_105_109_112_111_114_116_101_100_95_112_114_111_99_115_95_101_114_114_111_114_115_95_95_50_51_55_95_95_49_95_95_91_49_93_95_48_1_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___list__list_1_0);

MR_BEGIN_MODULE(hlds__passes_aux_module35)
	MR_init_entry1(hlds__passes_aux__IntroducedFrom__pred__process_all_nonimported_procs__243__1_2_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__passes_aux__IntroducedFrom__pred__process_all_nonimported_procs__243__1_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r2;
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__error_util, error_spec);
	MR_np_tailcall_ent(__Unify___list__list_1_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__passes_aux_module36)
	MR_init_entry1(hlds__passes_aux__IntroducedFrom__pred__process_all_nonimported_procs_update__254__1_2_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__passes_aux__IntroducedFrom__pred__process_all_nonimported_procs_update__254__1_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r2;
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__error_util, error_spec);
	MR_np_tailcall_ent(__Unify___list__list_1_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__passes_aux_module37)
	MR_init_entry1(hlds__passes_aux__IntroducedFrom__pred__process_matching_nonimported_procs__271__1_2_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__passes_aux__IntroducedFrom__pred__process_matching_nonimported_procs__271__1_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r2;
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__error_util, error_spec);
	MR_np_tailcall_ent(__Unify___list__list_1_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__passes_aux_module38)
	MR_init_entry1(hlds__passes_aux__IntroducedFrom__pred__process_matching_nonimported_procs_update__284__1_2_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__passes_aux__IntroducedFrom__pred__process_matching_nonimported_procs_update__284__1_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r2;
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__error_util, error_spec);
	MR_np_tailcall_ent(__Unify___list__list_1_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__passes_aux_module39)
	MR_init_entry1(hlds__passes_aux__process_nonimported_procs_in_preds__ho4_8_0);
	MR_init_label6(hlds__passes_aux__process_nonimported_procs_in_preds__ho4_8_0,14,4,5,6,7,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__passes_aux__process_nonimported_procs_in_preds__ho4_8_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
MR_def_label(hlds__passes_aux__process_nonimported_procs_in_preds__ho4_8_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(hlds__passes_aux__process_nonimported_procs_in_preds__ho4_8_0_i3);
	}
	MR_sv(1) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(2) = MR_tempr1;
	MR_sv(3) = MR_ctfield(1, MR_r1, 0);
	MR_sv(4) = MR_ctfield(1, MR_r1, 1);
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_module__module_info_preds_2_0,
		hlds__passes_aux__process_nonimported_procs_in_preds__ho4_8_0_i4);
MR_def_label(hlds__passes_aux__process_nonimported_procs_in_preds__ho4_8_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_id);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_info);
	MR_r4 = MR_sv(3);
	MR_np_call_localret_ent(map__lookup_3_0,
		hlds__passes_aux__process_nonimported_procs_in_preds__ho4_8_0_i5);
MR_def_label(hlds__passes_aux__process_nonimported_procs_in_preds__ho4_8_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__hlds__hlds_pred__pred_info_non_imported_procids_1_0,
		hlds__passes_aux__process_nonimported_procs_in_preds__ho4_8_0_i6);
MR_def_label(hlds__passes_aux__process_nonimported_procs_in_preds__ho4_8_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_np_call_localret_ent(hlds__passes_aux__process_nonimported_procs_8_0,
		hlds__passes_aux__process_nonimported_procs_in_preds__ho4_8_0_i7);
MR_def_label(hlds__passes_aux__process_nonimported_procs_in_preds__ho4_8_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r2;
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_succip_word = MR_sv(5);
	MR_GOTO_LAB(hlds__passes_aux__process_nonimported_procs_in_preds__ho4_8_0_i14);
MR_def_label(hlds__passes_aux__process_nonimported_procs_in_preds__ho4_8_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_r2 = MR_r3;
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__passes_aux_module40)
	MR_init_entry1(hlds__passes_aux__process_nonimported_procs_in_preds__ho5_8_0);
	MR_init_label6(hlds__passes_aux__process_nonimported_procs_in_preds__ho5_8_0,14,4,5,6,7,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__passes_aux__process_nonimported_procs_in_preds__ho5_8_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
MR_def_label(hlds__passes_aux__process_nonimported_procs_in_preds__ho5_8_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(hlds__passes_aux__process_nonimported_procs_in_preds__ho5_8_0_i3);
	}
	MR_sv(1) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(2) = MR_tempr1;
	MR_sv(3) = MR_ctfield(1, MR_r1, 0);
	MR_sv(4) = MR_ctfield(1, MR_r1, 1);
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_module__module_info_preds_2_0,
		hlds__passes_aux__process_nonimported_procs_in_preds__ho5_8_0_i4);
MR_def_label(hlds__passes_aux__process_nonimported_procs_in_preds__ho5_8_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_id);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_info);
	MR_r4 = MR_sv(3);
	MR_np_call_localret_ent(map__lookup_3_0,
		hlds__passes_aux__process_nonimported_procs_in_preds__ho5_8_0_i5);
MR_def_label(hlds__passes_aux__process_nonimported_procs_in_preds__ho5_8_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__hlds__hlds_pred__pred_info_non_imported_procids_1_0,
		hlds__passes_aux__process_nonimported_procs_in_preds__ho5_8_0_i6);
MR_def_label(hlds__passes_aux__process_nonimported_procs_in_preds__ho5_8_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_np_call_localret_ent(hlds__passes_aux__process_nonimported_procs_8_0,
		hlds__passes_aux__process_nonimported_procs_in_preds__ho5_8_0_i7);
MR_def_label(hlds__passes_aux__process_nonimported_procs_in_preds__ho5_8_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r2;
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_succip_word = MR_sv(5);
	MR_GOTO_LAB(hlds__passes_aux__process_nonimported_procs_in_preds__ho5_8_0_i14);
MR_def_label(hlds__passes_aux__process_nonimported_procs_in_preds__ho5_8_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_r2 = MR_r3;
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__passes_aux_module41)
	MR_init_entry1(f_104_108_100_115_95_95_112_97_115_115_101_115_95_97_117_120_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_97_108_108_95_110_111_110_105_109_112_111_114_116_101_100_95_112_114_111_99_115_95_101_114_114_111_114_115_95_95_50_51_55_95_95_49_95_95_91_49_93_95_48_1_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(f_104_108_100_115_95_95_112_97_115_115_101_115_95_97_117_120_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_97_108_108_95_110_111_110_105_109_112_111_114_116_101_100_95_112_114_111_99_115_95_101_114_114_111_114_115_95_95_50_51_55_95_95_49_95_95_91_49_93_95_48_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

static void mercury__hlds__passes_aux_maybe_bunch_0(void)
{
	hlds__passes_aux_module0();
	hlds__passes_aux_module1();
	hlds__passes_aux_module2();
	hlds__passes_aux_module3();
	hlds__passes_aux_module4();
	hlds__passes_aux_module5();
	hlds__passes_aux_module6();
	hlds__passes_aux_module7();
	hlds__passes_aux_module8();
	hlds__passes_aux_module9();
	hlds__passes_aux_module10();
	hlds__passes_aux_module11();
	hlds__passes_aux_module12();
	hlds__passes_aux_module13();
	hlds__passes_aux_module14();
	hlds__passes_aux_module15();
	hlds__passes_aux_module16();
	hlds__passes_aux_module17();
	hlds__passes_aux_module18();
	hlds__passes_aux_module19();
	hlds__passes_aux_module20();
	hlds__passes_aux_module21();
	hlds__passes_aux_module22();
	hlds__passes_aux_module23();
	hlds__passes_aux_module24();
	hlds__passes_aux_module25();
	hlds__passes_aux_module26();
	hlds__passes_aux_module27();
	hlds__passes_aux_module28();
	hlds__passes_aux_module29();
	hlds__passes_aux_module30();
	hlds__passes_aux_module31();
	hlds__passes_aux_module32();
	hlds__passes_aux_module33();
	hlds__passes_aux_module34();
	hlds__passes_aux_module35();
	hlds__passes_aux_module36();
	hlds__passes_aux_module37();
	hlds__passes_aux_module38();
	hlds__passes_aux_module39();
}

static void mercury__hlds__passes_aux_maybe_bunch_1(void)
{
	hlds__passes_aux_module40();
	hlds__passes_aux_module41();
}

/* suppress gcc -Wmissing-decls warnings */
void mercury__hlds__passes_aux__init(void);
void mercury__hlds__passes_aux__init_type_tables(void);
void mercury__hlds__passes_aux__init_debugger(void);
#ifdef MR_DEEP_PROFILING
void mercury__hlds__passes_aux__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp);
#endif
#ifdef MR_RECORD_TERM_SIZES
void mercury__hlds__passes_aux__init_complexity_procs(void);
#endif

void mercury__hlds__passes_aux__init(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	mercury__hlds__passes_aux_maybe_bunch_0();
	mercury__hlds__passes_aux_maybe_bunch_1();
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_hlds__passes_aux__type_ctor_info_task_0,
		hlds__passes_aux__task_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_hlds__passes_aux__type_ctor_info_quote_char_0,
		hlds__passes_aux__quote_char_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_hlds__passes_aux__type_ctor_info_pred_error_task_0,
		hlds__passes_aux__pred_error_task_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_hlds__passes_aux__type_ctor_info_command_verbosity_0,
		hlds__passes_aux__command_verbosity_0_0);
	mercury__hlds__passes_aux__init_debugger();
}

void mercury__hlds__passes_aux__init_type_tables(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	{
		MR_register_type_ctor_info(
		&mercury_data_hlds__passes_aux__type_ctor_info_task_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_hlds__passes_aux__type_ctor_info_quote_char_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_hlds__passes_aux__type_ctor_info_pred_error_task_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_hlds__passes_aux__type_ctor_info_command_verbosity_0);
	}
}


void mercury__hlds__passes_aux__init_debugger(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}

#ifdef MR_DEEP_PROFILING

void mercury__hlds__passes_aux__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp)
{
	MR_write_out_module_proc_reps_start(procrep_fp, &mercury_data__module_common_layout__hlds__passes_aux);
	MR_write_out_module_proc_reps_end(procrep_fp);
}

#endif

#ifdef MR_RECORD_TERM_SIZES

void mercury__hlds__passes_aux__init_complexity_procs(void)
{
}

#endif

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;
