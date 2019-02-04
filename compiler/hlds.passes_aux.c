/*
** Automatically generated from `passes_aux.m'
** by the Mercury compiler,
** version rotd-2009-06-06, configured for i686-pc-linux-gnu.
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
#line 534 "../library/io.int"
#include "io.mh"

#line 27 "hlds.passes_aux.c"
#line 542 "../library/io.int"
#include "string.mh"

#line 31 "hlds.passes_aux.c"
#line 30 "libs.process_util.int"
#include "libs.process_util.mh"

#line 35 "hlds.passes_aux.c"
#line 29 "../library/bitmap.int2"
#include "bitmap.mh"

#line 39 "hlds.passes_aux.c"
#line 28 "../library/time.int2"
#include "time.mh"

#line 43 "hlds.passes_aux.c"
#line 33 "../mdbcomp/mdbcomp.rtti_access.int2"
#include "mdbcomp.rtti_access.mh"

#line 47 "hlds.passes_aux.c"
#line 31 "../library/array.int2"
#include "array.mh"

#line 51 "hlds.passes_aux.c"
#line 52 "hlds.passes_aux.c"
#include "hlds.passes_aux.mh"

#line 55 "hlds.passes_aux.c"
#line 56 "hlds.passes_aux.c"
#ifndef HLDS__PASSES_AUX_DECL_GUARD
#define HLDS__PASSES_AUX_DECL_GUARD

#line 60 "hlds.passes_aux.c"
#line 61 "hlds.passes_aux.c"

#endif
#line 64 "hlds.passes_aux.c"

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

extern const MR_TypeCtorInfo_Struct
	mercury_data_hlds__passes_aux__type_ctor_info_task_0,
	mercury_data_hlds__passes_aux__type_ctor_info_pred_error_task_0;
MR_decl_label4(hlds__passes_aux__handle_errors_6_0, 2,5,8,4)
MR_decl_label8(hlds__passes_aux__maybe_report_sizes_3_0, 2,5,6,7,8,9,10,11)
MR_decl_label8(hlds__passes_aux__maybe_report_sizes_3_0, 12,13,14,15,16,17,19,20)
MR_decl_label3(hlds__passes_aux__maybe_report_sizes_3_0, 21,22,3)
MR_decl_label2(hlds__passes_aux__process_all_nonimported_procs_5_0, 2,4)
MR_decl_label3(hlds__passes_aux__process_all_nonimported_procs_errors_7_0, 2,3,9)
MR_decl_label3(hlds__passes_aux__process_all_nonimported_procs_update_6_0, 2,3,5)
MR_decl_label2(hlds__passes_aux__process_all_nonimported_procs_update_errors_8_0, 2,3)
MR_decl_label2(hlds__passes_aux__process_matching_nonimported_procs_6_0, 2,4)
MR_decl_label3(hlds__passes_aux__process_matching_nonimported_procs_errors_8_0, 2,3,8)
MR_decl_label3(hlds__passes_aux__process_matching_nonimported_procs_update_7_0, 2,3,5)
MR_decl_label2(hlds__passes_aux__process_matching_nonimported_procs_update_errors_9_0, 2,3)
MR_decl_label7(hlds__passes_aux__process_nonimported_pred_9_0, 2,8,6,12,3,14,15)
MR_decl_label8(hlds__passes_aux__process_nonimported_procs_8_0, 46,3,4,5,6,7,18,25)
MR_decl_label8(hlds__passes_aux__process_nonimported_procs_8_0, 27,28,32,9,11,12,14,15)
MR_decl_label8(hlds__passes_aux__process_nonimported_procs_8_0, 16,20,21,22,23,24,8,33)
MR_decl_label6(hlds__passes_aux__process_nonimported_procs_8_0, 34,35,36,37,38,39)
MR_decl_label8(hlds__passes_aux__process_nonimported_procs_in_preds_8_0, 23,3,4,5,8,10,11,7)
MR_decl_label6(hlds__passes_aux__process_nonimported_procs_in_preds__ho3_8_0, 13,3,4,5,6,7)
MR_decl_label6(hlds__passes_aux__process_nonimported_procs_in_preds__ho4_8_0, 13,3,4,5,6,7)
MR_decl_label8(hlds__passes_aux__report_pred_name_mode_5_0, 4,5,6,7,24,9,10,11)
MR_decl_label8(hlds__passes_aux__report_pred_name_mode_5_0, 13,3,15,18,19,20,21,2)
MR_decl_label8(hlds__passes_aux__report_pred_proc_id_7_0, 2,3,4,5,6,7,8,10)
MR_decl_label7(hlds__passes_aux__report_pred_proc_id_7_0, 9,13,15,16,17,18,19)
MR_decl_label4(hlds__passes_aux__write_pred_progress_message_5_0, 2,5,6,3)
MR_decl_label4(hlds__passes_aux__write_proc_progress_message_6_0, 2,5,6,3)
MR_decl_label8(__Unify___hlds__passes_aux__task_0_0, 23,35,39,46,5,9,11,15)
MR_decl_label5(__Unify___hlds__passes_aux__task_0_0, 19,27,31,47,1)
MR_decl_label8(__Compare___hlds__passes_aux__task_0_0, 3,74,122,138,148,157,5,21)
MR_decl_label8(__Compare___hlds__passes_aux__task_0_0, 26,42,58,90,106,117,121,113)
MR_decl_label2(__Compare___hlds__passes_aux__task_0_0, 114,218)
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
MR_decl_static(hlds__passes_aux__process_nonimported_pred_9_0)
MR_def_extern_entry(__Unify___hlds__passes_aux__pred_error_task_0_0)
MR_def_extern_entry(__Compare___hlds__passes_aux__pred_error_task_0_0)
MR_def_extern_entry(__Unify___hlds__passes_aux__task_0_0)
MR_def_extern_entry(__Compare___hlds__passes_aux__task_0_0)
MR_decl_static(hlds__passes_aux__IntroducedFrom__pred__process_all_nonimported_procs_errors__184__1_1_0)
MR_decl_static(hlds__passes_aux__IntroducedFrom__pred__process_all_nonimported_procs__190__1_2_0)
MR_decl_static(hlds__passes_aux__IntroducedFrom__pred__process_all_nonimported_procs_update__201__1_2_0)
MR_decl_static(hlds__passes_aux__IntroducedFrom__pred__process_matching_nonimported_procs__218__1_2_0)
MR_decl_static(hlds__passes_aux__IntroducedFrom__pred__process_matching_nonimported_procs_update__231__1_2_0)
MR_decl_static(hlds__passes_aux__process_nonimported_procs_in_preds__ho3_8_0)
MR_decl_static(hlds__passes_aux__process_nonimported_procs_in_preds__ho4_8_0)
MR_decl_static(f_104_108_100_115_95_95_112_97_115_115_101_115_95_97_117_120_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_97_108_108_95_110_111_110_105_109_112_111_114_116_101_100_95_112_114_111_99_115_95_101_114_114_111_114_115_95_95_49_56_52_95_95_49_95_95_91_49_93_95_48_1_0)

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
MR_ENTRY_AP(hlds__passes_aux__IntroducedFrom__pred__process_all_nonimported_procs_errors__184__1_1_0),
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
MR_ENTRY_AP(hlds__passes_aux__IntroducedFrom__pred__process_all_nonimported_procs_update__201__1_2_0),
2,
MR_tbmkword(0, 0),
MR_tbmkword(0, 0)
},
{
MR_COMMON(6,3),
MR_ENTRY_AP(hlds__passes_aux__IntroducedFrom__pred__process_matching_nonimported_procs_update__231__1_2_0),
2,
MR_tbmkword(0, 0),
MR_tbmkword(0, 0)
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

static const MR_VA_TypeInfo_Struct6 mercury_data___vti_pred_6builtin__type_ctor_info_int_0builtin__type_ctor_info_int_0hlds__hlds_module__type_ctor_info_module_info_0hlds__hlds_pred__type_ctor_info_pred_info_0hlds__hlds_pred__type_ctor_info_proc_info_0hlds__hlds_pred__type_ctor_info_proc_info_0 = {
	&mercury_data_builtin__type_ctor_info_pred_0,
	6,
{	(MR_TypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_TypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_TypeInfo) &mercury_data_hlds__hlds_module__type_ctor_info_module_info_0,
	(MR_TypeInfo) &mercury_data_hlds__hlds_pred__type_ctor_info_pred_info_0,
	(MR_TypeInfo) &mercury_data_hlds__hlds_pred__type_ctor_info_proc_info_0,
	(MR_TypeInfo) &mercury_data_hlds__hlds_pred__type_ctor_info_proc_info_0
}};

const MR_PseudoTypeInfo mercury_data_hlds__passes_aux__field_types_task_0_2[] = {
	(MR_PseudoTypeInfo) &mercury_data___vti_pred_6builtin__type_ctor_info_int_0builtin__type_ctor_info_int_0hlds__hlds_module__type_ctor_info_module_info_0hlds__hlds_pred__type_ctor_info_pred_info_0hlds__hlds_pred__type_ctor_info_proc_info_0hlds__hlds_pred__type_ctor_info_proc_info_0
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
208,
"d1;c10;t;c1;"
};

static const MR_UserClosureId
mercury_data__closure_layout__hlds__passes_aux__process_all_nonimported_procs_errors_7_0_1 = {
{
MR_PREDICATE,
"hlds.passes_aux",
"hlds.passes_aux",
"lambda_passes_aux_m_184",
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
208,
"d1;c10;t;c1;"
};

static const MR_UserClosureId
mercury_data__closure_layout__hlds__passes_aux__process_all_nonimported_procs_5_0_1 = {
{
MR_PREDICATE,
"hlds.passes_aux",
"hlds.passes_aux",
"lambda_passes_aux_m_190",
2,
0
},
"hlds.passes_aux",
"passes_aux.m",
190,
"d1;c8;"
};

static const MR_UserClosureId
mercury_data__closure_layout__hlds__passes_aux__process_all_nonimported_procs_update_6_0_1 = {
{
MR_PREDICATE,
"hlds.passes_aux",
"hlds.passes_aux",
"lambda_passes_aux_m_201",
2,
0
},
"hlds.passes_aux",
"passes_aux.m",
201,
"d1;c9;"
};

static const MR_UserClosureId
mercury_data__closure_layout__hlds__passes_aux__process_matching_nonimported_procs_6_0_1 = {
{
MR_PREDICATE,
"hlds.passes_aux",
"hlds.passes_aux",
"lambda_passes_aux_m_218",
2,
0
},
"hlds.passes_aux",
"passes_aux.m",
218,
"d1;c9;"
};

static const MR_UserClosureId
mercury_data__closure_layout__hlds__passes_aux__process_matching_nonimported_procs_update_7_0_1 = {
{
MR_PREDICATE,
"hlds.passes_aux",
"hlds.passes_aux",
"lambda_passes_aux_m_231",
2,
0
},
"hlds.passes_aux",
"passes_aux.m",
231,
"d1;c10;"
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
MR_declare_entry(mercury__do_call_closure_5);
MR_decl_entry(libs__compiler_util__unexpected_2_0);
MR_decl_entry(map__det_update_4_0);
MR_decl_entry(hlds__hlds_pred__pred_info_set_procedures_3_0);
MR_decl_entry(hlds__hlds_module__module_info_set_preds_3_0);

MR_BEGIN_MODULE(hlds__passes_aux_module1)
	MR_init_entry1(hlds__passes_aux__process_nonimported_procs_8_0);
	MR_init_label8(hlds__passes_aux__process_nonimported_procs_8_0,46,3,4,5,6,7,18,25)
	MR_init_label8(hlds__passes_aux__process_nonimported_procs_8_0,27,28,32,9,11,12,14,15)
	MR_init_label8(hlds__passes_aux__process_nonimported_procs_8_0,16,20,21,22,23,24,8,33)
	MR_init_label6(hlds__passes_aux__process_nonimported_procs_8_0,34,35,36,37,38,39)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__passes_aux__process_nonimported_procs_8_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
MR_def_label(hlds__passes_aux__process_nonimported_procs_8_0,46)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(hlds__passes_aux__process_nonimported_procs_8_0_i3);
	}
	MR_r1 = MR_r3;
	MR_r2 = MR_r4;
	MR_decr_sp_and_return(9);
MR_def_label(hlds__passes_aux__process_nonimported_procs_8_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r4;
	MR_sv(3) = MR_tempr1;
	MR_tempr2 = MR_r1;
	MR_sv(4) = MR_ctfield(1, MR_tempr2, 0);
	MR_sv(5) = MR_ctfield(1, MR_tempr2, 1);
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_module__module_info_preds_2_0,
		hlds__passes_aux__process_nonimported_procs_8_0_i4);
MR_def_label(hlds__passes_aux__process_nonimported_procs_8_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_id);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_info);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(1);
	}
	MR_np_call_localret_ent(map__lookup_3_0,
		hlds__passes_aux__process_nonimported_procs_8_0_i5);
MR_def_label(hlds__passes_aux__process_nonimported_procs_8_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_procedures_2_0,
		hlds__passes_aux__process_nonimported_procs_8_0_i6);
MR_def_label(hlds__passes_aux__process_nonimported_procs_8_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, proc_id);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, proc_info);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(4);
	}
	MR_np_call_localret_ent(map__lookup_3_0,
		hlds__passes_aux__process_nonimported_procs_8_0_i7);
MR_def_label(hlds__passes_aux__process_nonimported_procs_8_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_sv(2)),
		MR_LABEL_AP(hlds__passes_aux__process_nonimported_procs_8_0_i18) MR_AND
		MR_LABEL_AP(hlds__passes_aux__process_nonimported_procs_8_0_i25) MR_AND
		MR_LABEL_AP(hlds__passes_aux__process_nonimported_procs_8_0_i27) MR_AND
		MR_LABEL_AP(hlds__passes_aux__process_nonimported_procs_8_0_i32));
MR_def_label(hlds__passes_aux__process_nonimported_procs_8_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_ctfield(0, MR_sv(2), 0);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_tempr1;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(hlds__passes_aux__process_nonimported_procs_8_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_2),
		mercury__hlds__passes_aux__process_nonimported_procs_8_0_i28);
MR_def_label(hlds__passes_aux__process_nonimported_procs_8_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_ctfield(1, MR_sv(2), 0);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_tempr1;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(hlds__passes_aux__process_nonimported_procs_8_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_3),
		mercury__hlds__passes_aux__process_nonimported_procs_8_0_i28);
MR_def_label(hlds__passes_aux__process_nonimported_procs_8_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_ctfield(2, MR_sv(2), 0);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(6);
	MR_r6 = MR_tempr1;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(hlds__passes_aux__process_nonimported_procs_8_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_5),
		mercury__hlds__passes_aux__process_nonimported_procs_8_0_i28);
MR_def_label(hlds__passes_aux__process_nonimported_procs_8_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_sv(7) = MR_sv(2);
	MR_r1 = MR_r2;
	MR_GOTO_LAB(hlds__passes_aux__process_nonimported_procs_8_0_i8);
MR_def_label(hlds__passes_aux__process_nonimported_procs_8_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_ctfield(3, MR_sv(2), 0),
		MR_LABEL_AP(hlds__passes_aux__process_nonimported_procs_8_0_i23) MR_AND
		MR_LABEL_AP(hlds__passes_aux__process_nonimported_procs_8_0_i20) MR_AND
		MR_LABEL_AP(hlds__passes_aux__process_nonimported_procs_8_0_i16) MR_AND
		MR_LABEL_AP(hlds__passes_aux__process_nonimported_procs_8_0_i9) MR_AND
		MR_LABEL_AP(hlds__passes_aux__process_nonimported_procs_8_0_i14) MR_AND
		MR_LABEL_AP(hlds__passes_aux__process_nonimported_procs_8_0_i11));
MR_def_label(hlds__passes_aux__process_nonimported_procs_8_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_ctfield(3, MR_sv(2), 1);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(6);
	MR_r5 = MR_tempr1;
	MR_r6 = MR_sv(3);
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(hlds__passes_aux__process_nonimported_procs_8_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_5),
		mercury__hlds__passes_aux__process_nonimported_procs_8_0_i15);
MR_def_label(hlds__passes_aux__process_nonimported_procs_8_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_ctfield(3, MR_tempr1, 1);
	MR_tempr2 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_tempr2;
	MR_r5 = MR_ctfield(3, MR_tempr1, 2);
	MR_r6 = MR_sv(3);
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(hlds__passes_aux__process_nonimported_procs_8_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_5),
		mercury__hlds__passes_aux__process_nonimported_procs_8_0_i12);
MR_def_label(hlds__passes_aux__process_nonimported_procs_8_0,12)
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
	MR_GOTO_LAB(hlds__passes_aux__process_nonimported_procs_8_0_i8);
	}
MR_def_label(hlds__passes_aux__process_nonimported_procs_8_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_ctfield(3, MR_sv(2), 1);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_tempr1;
	MR_r5 = MR_sv(3);
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(hlds__passes_aux__process_nonimported_procs_8_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_5),
		mercury__hlds__passes_aux__process_nonimported_procs_8_0_i15);
MR_def_label(hlds__passes_aux__process_nonimported_procs_8_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_sv(7) = MR_sv(2);
	MR_r1 = MR_r2;
	MR_GOTO_LAB(hlds__passes_aux__process_nonimported_procs_8_0_i8);
MR_def_label(hlds__passes_aux__process_nonimported_procs_8_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("passes_aux.m", 12);
	MR_r2 = (MR_Word) MR_string_const("process_non_imported_procs", 26);
	MR_np_call_localret_ent(libs__compiler_util__unexpected_2_0,
		hlds__passes_aux__process_nonimported_procs_8_0_i8);
MR_def_label(hlds__passes_aux__process_nonimported_procs_8_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_ctfield(3, MR_sv(2), 1);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_tempr1;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(hlds__passes_aux__process_nonimported_procs_8_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_5),
		mercury__hlds__passes_aux__process_nonimported_procs_8_0_i21);
MR_def_label(hlds__passes_aux__process_nonimported_procs_8_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_r3;
	MR_r2 = MR_r4;
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__passes_aux__handle_errors_6_0,
		hlds__passes_aux__process_nonimported_procs_8_0_i22);
MR_def_label(hlds__passes_aux__process_nonimported_procs_8_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_sv(2);
	MR_GOTO_LAB(hlds__passes_aux__process_nonimported_procs_8_0_i8);
MR_def_label(hlds__passes_aux__process_nonimported_procs_8_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_ctfield(3, MR_sv(2), 1);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_tempr1;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(hlds__passes_aux__process_nonimported_procs_8_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_5),
		mercury__hlds__passes_aux__process_nonimported_procs_8_0_i24);
MR_def_label(hlds__passes_aux__process_nonimported_procs_8_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_sv(7) = MR_sv(2);
	MR_r1 = MR_tempr1;
	}
MR_def_label(hlds__passes_aux__process_nonimported_procs_8_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_np_call_localret_ent(hlds__hlds_module__module_info_preds_2_0,
		hlds__passes_aux__process_nonimported_procs_8_0_i33);
MR_def_label(hlds__passes_aux__process_nonimported_procs_8_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_id);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_info);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(1);
	MR_np_call_localret_ent(map__lookup_3_0,
		hlds__passes_aux__process_nonimported_procs_8_0_i34);
MR_def_label(hlds__passes_aux__process_nonimported_procs_8_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_procedures_2_0,
		hlds__passes_aux__process_nonimported_procs_8_0_i35);
MR_def_label(hlds__passes_aux__process_nonimported_procs_8_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, proc_id);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, proc_info);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(4);
	MR_r5 = MR_sv(3);
	}
	MR_np_call_localret_ent(map__det_update_4_0,
		hlds__passes_aux__process_nonimported_procs_8_0_i36);
MR_def_label(hlds__passes_aux__process_nonimported_procs_8_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(6);
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_set_procedures_3_0,
		hlds__passes_aux__process_nonimported_procs_8_0_i37);
MR_def_label(hlds__passes_aux__process_nonimported_procs_8_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_id);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_info);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(1);
	MR_r5 = MR_tempr1;
	}
	MR_np_call_localret_ent(map__det_update_4_0,
		hlds__passes_aux__process_nonimported_procs_8_0_i38);
MR_def_label(hlds__passes_aux__process_nonimported_procs_8_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(8);
	MR_np_call_localret_ent(hlds__hlds_module__module_info_set_preds_3_0,
		hlds__passes_aux__process_nonimported_procs_8_0_i39);
MR_def_label(hlds__passes_aux__process_nonimported_procs_8_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(7);
	MR_r4 = MR_tempr1;
	MR_succip_word = MR_sv(9);
	MR_GOTO_LAB(hlds__passes_aux__process_nonimported_procs_8_0_i46);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_declare_entry(mercury__do_call_closure_1);
MR_decl_entry(fn__hlds__hlds_pred__pred_info_non_imported_procids_1_0);

MR_BEGIN_MODULE(hlds__passes_aux_module2)
	MR_init_entry1(hlds__passes_aux__process_nonimported_procs_in_preds_8_0);
	MR_init_label8(hlds__passes_aux__process_nonimported_procs_in_preds_8_0,23,3,4,5,8,10,11,7)
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
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(hlds__passes_aux__process_nonimported_procs_in_preds_8_0_i3);
	}
	MR_r1 = MR_r2;
	MR_r2 = MR_r4;
	MR_decr_sp_and_return(7);
MR_def_label(hlds__passes_aux__process_nonimported_procs_in_preds_8_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r4;
	MR_sv(3) = MR_tempr1;
	MR_tempr2 = MR_r1;
	MR_sv(4) = MR_ctfield(1, MR_tempr2, 0);
	MR_sv(5) = MR_ctfield(1, MR_tempr2, 1);
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_module__module_info_preds_2_0,
		hlds__passes_aux__process_nonimported_procs_in_preds_8_0_i4);
MR_def_label(hlds__passes_aux__process_nonimported_procs_in_preds_8_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_id);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_info);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(4);
	}
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
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r4 = MR_tempr2;
	MR_succip_word = MR_sv(7);
	MR_GOTO_LAB(hlds__passes_aux__process_nonimported_procs_in_preds_8_0_i23);
	}
MR_def_label(hlds__passes_aux__process_nonimported_procs_in_preds_8_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(2);
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(1);
	MR_r4 = MR_sv(3);
	MR_succip_word = MR_sv(7);
	MR_GOTO_LAB(hlds__passes_aux__process_nonimported_procs_in_preds_8_0_i23);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__hlds_module__module_info_predids_3_0);
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_module__type_ctor_info_module_info_0;
extern const MR_TypeCtorInfo_Struct mercury_data_io__type_ctor_info_state_0;
MR_decl_entry(list__foldl3_8_7);

MR_BEGIN_MODULE(hlds__passes_aux_module3)
	MR_init_entry1(hlds__passes_aux__process_matching_nonimported_procs_errors_8_0);
	MR_init_label3(hlds__passes_aux__process_matching_nonimported_procs_errors_8_0,2,3,8)
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
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_r5 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(3,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(hlds__passes_aux__process_nonimported_pred_9_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr1, 3) = MR_ctfield(3, MR_sv(1), 1);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(2);
	MR_tempr2 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_id);
	MR_tempr3 = MR_r2;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_module, module_info);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,0,2);
	MR_r4 = (MR_Word) MR_IO_CTOR_ADDR;
	MR_r6 = MR_tempr2;
	MR_r7 = MR_tempr3;
	MR_r8 = MR_sv(3);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(list__foldl3_8_7);
	}
MR_def_label(hlds__passes_aux__process_matching_nonimported_procs_errors_8_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__passes_aux__process_nonimported_procs_in_preds_8_0,
		hlds__passes_aux__process_matching_nonimported_procs_errors_8_0_i8);
MR_def_label(hlds__passes_aux__process_matching_nonimported_procs_errors_8_0,8)
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
	MR_init_label3(hlds__passes_aux__process_all_nonimported_procs_errors_7_0,2,3,9)
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
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_r5 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(3,1);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(hlds__passes_aux__process_nonimported_pred_9_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr1, 3) = MR_ctfield(3, MR_sv(1), 1);
	MR_tfield(0, MR_tempr1, 4) = (MR_Word) MR_TAG_COMMON(0,5,0);
	MR_tempr2 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_id);
	MR_tempr3 = MR_r2;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_module, module_info);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,0,2);
	MR_r4 = (MR_Word) MR_IO_CTOR_ADDR;
	MR_r6 = MR_tempr2;
	MR_r7 = MR_tempr3;
	MR_r8 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(list__foldl3_8_7);
	}
MR_def_label(hlds__passes_aux__process_all_nonimported_procs_errors_7_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__passes_aux__process_nonimported_procs_in_preds__ho3_8_0,
		hlds__passes_aux__process_all_nonimported_procs_errors_7_0_i9);
MR_def_label(hlds__passes_aux__process_all_nonimported_procs_errors_7_0,9)
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
	MR_init_label2(hlds__passes_aux__process_all_nonimported_procs_5_0,2,4)
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
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(hlds__passes_aux__IntroducedFrom__pred__process_all_nonimported_procs__190__1_2_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr1, 3) = MR_r2;
	MR_tfield(0, MR_tempr1, 4) = (MR_Word) MR_tbmkword(0, 0);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Word) MR_string_const("passes_aux.m", 12);
	MR_r3 = (MR_Word) MR_string_const("process_all_nonimported_procs: Specs", 36);
	}
	MR_np_call_localret_ent(libs__compiler_util__expect_3_0,
		hlds__passes_aux__process_all_nonimported_procs_5_0_i4);
MR_def_label(hlds__passes_aux__process_all_nonimported_procs_5_0,4)
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
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_tempr1;
	}
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
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__passes_aux__process_nonimported_procs_in_preds__ho4_8_0,
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
	MR_init_label3(hlds__passes_aux__process_all_nonimported_procs_update_6_0,2,3,5)
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
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__passes_aux__process_nonimported_procs_in_preds__ho4_8_0,
		hlds__passes_aux__process_all_nonimported_procs_update_6_0_i3);
MR_def_label(hlds__passes_aux__process_all_nonimported_procs_update_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,7,0);
	MR_r2 = (MR_Word) MR_string_const("passes_aux.m", 12);
	MR_r3 = (MR_Word) MR_string_const("process_all_nonimported_procs_update: Specs", 43);
	MR_np_call_localret_ent(libs__compiler_util__expect_3_0,
		hlds__passes_aux__process_all_nonimported_procs_update_6_0_i5);
MR_def_label(hlds__passes_aux__process_all_nonimported_procs_update_6_0,5)
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
	MR_init_label2(hlds__passes_aux__process_matching_nonimported_procs_6_0,2,4)
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
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(hlds__passes_aux__IntroducedFrom__pred__process_matching_nonimported_procs__218__1_2_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr1, 3) = MR_r2;
	MR_tfield(0, MR_tempr1, 4) = (MR_Word) MR_tbmkword(0, 0);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Word) MR_string_const("passes_aux.m", 12);
	MR_r3 = (MR_Word) MR_string_const("process_matching_nonimported_procs: Specs", 41);
	}
	MR_np_call_localret_ent(libs__compiler_util__expect_3_0,
		hlds__passes_aux__process_matching_nonimported_procs_6_0_i4);
MR_def_label(hlds__passes_aux__process_matching_nonimported_procs_6_0,4)
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
	MR_init_label3(hlds__passes_aux__process_matching_nonimported_procs_update_7_0,2,3,5)
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
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_tempr1;
	}
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
		hlds__passes_aux__process_matching_nonimported_procs_update_7_0_i5);
MR_def_label(hlds__passes_aux__process_matching_nonimported_procs_update_7_0,5)
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
	MR_r1 = (MR_Integer) 37;
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
	MR_r1 = (MR_Integer) 37;
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
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_ctfield(0, MR_r2, 0);
	MR_tempr2 = MR_r3;
	MR_r3 = MR_ctfield(0, MR_tempr1, 1);
	MR_r4 = MR_tempr2;
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
	MR_init_label8(hlds__passes_aux__maybe_report_sizes_3_0,12,13,14,15,16,17,19,20)
	MR_init_label3(hlds__passes_aux__maybe_report_sizes_3_0,21,22,3)
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
	MR_r1 = (MR_Integer) 44;
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
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_id);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_info);
	MR_r3 = MR_tempr1;
	}
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
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, type_ctor);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_data, hlds_type_defn);
	MR_r3 = MR_tempr1;
	}
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
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, cons_id);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,3);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(map__count_2_0,
		hlds__passes_aux__maybe_report_sizes_3_0_i19);
MR_def_label(hlds__passes_aux__maybe_report_sizes_3_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("Constructor table", 17);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__passes_aux__maybe_report_sizes_3_0_i20);
MR_def_label(hlds__passes_aux__maybe_report_sizes_3_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(": count = ", 10);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__passes_aux__maybe_report_sizes_3_0_i21);
MR_def_label(hlds__passes_aux__maybe_report_sizes_3_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(io__write_int_3_0,
		hlds__passes_aux__maybe_report_sizes_3_0_i22);
MR_def_label(hlds__passes_aux__maybe_report_sizes_3_0,22)
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
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_mer_mode_0;
MR_decl_entry(parse_tree__prog_util__pred_args_to_func_args_3_0);
MR_decl_entry(parse_tree__mercury_to_mercury__mercury_output_mode_list_4_0);
MR_decl_entry(parse_tree__mercury_to_mercury__mercury_output_mode_4_0);

MR_BEGIN_MODULE(hlds__passes_aux_module15)
	MR_init_entry1(hlds__passes_aux__report_pred_name_mode_5_0);
	MR_init_label8(hlds__passes_aux__report_pred_name_mode_5_0,4,5,6,7,24,9,10,11)
	MR_init_label8(hlds__passes_aux__report_pred_name_mode_5_0,13,3,15,18,19,20,21,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__hlds__passes_aux__report_pred_name_mode_5_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(hlds__passes_aux__report_pred_name_mode_5_0_i3);
	}
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, inst_var_type);
	MR_np_call_localret_ent(varset__init_1_0,
		hlds__passes_aux__report_pred_name_mode_5_0_i4);
MR_def_label(hlds__passes_aux__report_pred_name_mode_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(parse_tree__prog_mode__strip_builtin_qualifiers_from_mode_list_2_0,
		hlds__passes_aux__report_pred_name_mode_5_0_i5);
MR_def_label(hlds__passes_aux__report_pred_name_mode_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_mode);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(parse_tree__prog_util__pred_args_to_func_args_3_0,
		hlds__passes_aux__report_pred_name_mode_5_0_i6);
MR_def_label(hlds__passes_aux__report_pred_name_mode_5_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_sv(3) = MR_r2;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__passes_aux__report_pred_name_mode_5_0_i7);
MR_def_label(hlds__passes_aux__report_pred_name_mode_5_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,0)) {
		MR_GOTO_LAB(hlds__passes_aux__report_pred_name_mode_5_0_i9);
	}
MR_def_label(hlds__passes_aux__report_pred_name_mode_5_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(" = ", 3);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__passes_aux__report_pred_name_mode_5_0_i13);
MR_def_label(hlds__passes_aux__report_pred_name_mode_5_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("(", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__passes_aux__report_pred_name_mode_5_0_i10);
MR_def_label(hlds__passes_aux__report_pred_name_mode_5_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(parse_tree__mercury_to_mercury__mercury_output_mode_list_4_0,
		hlds__passes_aux__report_pred_name_mode_5_0_i11);
MR_def_label(hlds__passes_aux__report_pred_name_mode_5_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(")", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__passes_aux__report_pred_name_mode_5_0_i24);
MR_def_label(hlds__passes_aux__report_pred_name_mode_5_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(parse_tree__mercury_to_mercury__mercury_output_mode_4_0);
MR_def_label(hlds__passes_aux__report_pred_name_mode_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r3;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__passes_aux__report_pred_name_mode_5_0_i15);
MR_def_label(hlds__passes_aux__report_pred_name_mode_5_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_sv(2),0,0)) {
		MR_GOTO_LAB(hlds__passes_aux__report_pred_name_mode_5_0_i2);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, inst_var_type);
	MR_np_call_localret_ent(varset__init_1_0,
		hlds__passes_aux__report_pred_name_mode_5_0_i18);
MR_def_label(hlds__passes_aux__report_pred_name_mode_5_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("(", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__passes_aux__report_pred_name_mode_5_0_i19);
MR_def_label(hlds__passes_aux__report_pred_name_mode_5_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(parse_tree__prog_mode__strip_builtin_qualifiers_from_mode_list_2_0,
		hlds__passes_aux__report_pred_name_mode_5_0_i20);
MR_def_label(hlds__passes_aux__report_pred_name_mode_5_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(parse_tree__mercury_to_mercury__mercury_output_mode_list_4_0,
		hlds__passes_aux__report_pred_name_mode_5_0_i21);
MR_def_label(hlds__passes_aux__report_pred_name_mode_5_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(")", 1);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(io__write_string_3_0);
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

MR_decl_entry(hlds__hlds_module__module_info_pred_info_3_0);
MR_decl_entry(hlds__hlds_pred__pred_info_is_imported_1_0);
MR_decl_entry(hlds__hlds_module__module_info_set_pred_info_4_0);

MR_BEGIN_MODULE(hlds__passes_aux_module17)
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
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(5);
	MR_r4 = MR_tempr1;
	MR_r5 = MR_sv(6);
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(hlds__passes_aux__process_nonimported_pred_9_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_5),
		mercury__hlds__passes_aux__process_nonimported_pred_9_0_i14);
MR_def_label(hlds__passes_aux__process_nonimported_pred_9_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r3;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r3 = MR_tempr1;
	}
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

MR_decl_entry(private_builtin__builtin_unify_pred_2_0);

MR_BEGIN_MODULE(hlds__passes_aux_module18)
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

MR_BEGIN_MODULE(hlds__passes_aux_module19)
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

MR_decl_entry(__Unify___univ__univ_0_0);

MR_BEGIN_MODULE(hlds__passes_aux_module20)
	MR_init_entry1(__Unify___hlds__passes_aux__task_0_0);
	MR_init_label8(__Unify___hlds__passes_aux__task_0_0,23,35,39,46,5,9,11,15)
	MR_init_label5(__Unify___hlds__passes_aux__task_0_0,19,27,31,47,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___hlds__passes_aux__task_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___hlds__passes_aux__task_0_0_i47);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_sv(1)),
		MR_LABEL_AP(__Unify___hlds__passes_aux__task_0_0_i23) MR_AND
		MR_LABEL_AP(__Unify___hlds__passes_aux__task_0_0_i35) MR_AND
		MR_LABEL_AP(__Unify___hlds__passes_aux__task_0_0_i39) MR_AND
		MR_LABEL_AP(__Unify___hlds__passes_aux__task_0_0_i46));
MR_def_label(__Unify___hlds__passes_aux__task_0_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),0)) {
		MR_GOTO_LAB(__Unify___hlds__passes_aux__task_0_0_i1);
	}
	MR_r1 = MR_ctfield(0, MR_sv(1), 0);
	MR_r2 = MR_ctfield(0, MR_sv(2), 0);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(private_builtin__builtin_unify_pred_2_0);
MR_def_label(__Unify___hlds__passes_aux__task_0_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Unify___hlds__passes_aux__task_0_0_i1);
	}
	MR_r1 = MR_ctfield(1, MR_sv(1), 0);
	MR_r2 = MR_ctfield(1, MR_sv(2), 0);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(private_builtin__builtin_unify_pred_2_0);
MR_def_label(__Unify___hlds__passes_aux__task_0_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),2)) {
		MR_GOTO_LAB(__Unify___hlds__passes_aux__task_0_0_i1);
	}
	MR_r1 = MR_ctfield(2, MR_sv(1), 0);
	MR_r2 = MR_ctfield(2, MR_sv(2), 0);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(private_builtin__builtin_unify_pred_2_0);
MR_def_label(__Unify___hlds__passes_aux__task_0_0,46)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_ctfield(3, MR_sv(1), 0),
		MR_LABEL_AP(__Unify___hlds__passes_aux__task_0_0_i31) MR_AND
		MR_LABEL_AP(__Unify___hlds__passes_aux__task_0_0_i27) MR_AND
		MR_LABEL_AP(__Unify___hlds__passes_aux__task_0_0_i19) MR_AND
		MR_LABEL_AP(__Unify___hlds__passes_aux__task_0_0_i5) MR_AND
		MR_LABEL_AP(__Unify___hlds__passes_aux__task_0_0_i15) MR_AND
		MR_LABEL_AP(__Unify___hlds__passes_aux__task_0_0_i9));
MR_def_label(__Unify___hlds__passes_aux__task_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,3)) {
		MR_GOTO_LAB(__Unify___hlds__passes_aux__task_0_0_i1);
	}
	MR_r1 = MR_ctfield(3, MR_sv(1), 1);
	MR_r2 = MR_ctfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(private_builtin__builtin_unify_pred_2_0);
MR_def_label(__Unify___hlds__passes_aux__task_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,5)) {
		MR_GOTO_LAB(__Unify___hlds__passes_aux__task_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_ctfield(3, MR_tempr1, 2);
	MR_tempr2 = MR_sv(2);
	MR_sv(2) = MR_ctfield(3, MR_tempr2, 2);
	MR_r1 = MR_ctfield(3, MR_tempr1, 1);
	MR_r2 = MR_ctfield(3, MR_tempr2, 1);
	}
	MR_np_call_localret_ent(private_builtin__builtin_unify_pred_2_0,
		__Unify___hlds__passes_aux__task_0_0_i11);
MR_def_label(__Unify___hlds__passes_aux__task_0_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___hlds__passes_aux__task_0_0_i1);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Unify___univ__univ_0_0);
MR_def_label(__Unify___hlds__passes_aux__task_0_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,4)) {
		MR_GOTO_LAB(__Unify___hlds__passes_aux__task_0_0_i1);
	}
	MR_r1 = MR_ctfield(3, MR_sv(1), 1);
	MR_r2 = MR_ctfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(private_builtin__builtin_unify_pred_2_0);
MR_def_label(__Unify___hlds__passes_aux__task_0_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,2)) {
		MR_GOTO_LAB(__Unify___hlds__passes_aux__task_0_0_i1);
	}
	MR_r1 = MR_ctfield(3, MR_sv(1), 1);
	MR_r2 = MR_ctfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(private_builtin__builtin_unify_pred_2_0);
MR_def_label(__Unify___hlds__passes_aux__task_0_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,1)) {
		MR_GOTO_LAB(__Unify___hlds__passes_aux__task_0_0_i1);
	}
	MR_r1 = MR_ctfield(3, MR_sv(1), 1);
	MR_r2 = MR_ctfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(private_builtin__builtin_unify_pred_2_0);
MR_def_label(__Unify___hlds__passes_aux__task_0_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,0)) {
		MR_GOTO_LAB(__Unify___hlds__passes_aux__task_0_0_i1);
	}
	MR_r1 = MR_ctfield(3, MR_sv(1), 1);
	MR_r2 = MR_ctfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(private_builtin__builtin_unify_pred_2_0);
MR_def_label(__Unify___hlds__passes_aux__task_0_0,47)
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

MR_BEGIN_MODULE(hlds__passes_aux_module21)
	MR_init_entry1(__Compare___hlds__passes_aux__task_0_0);
	MR_init_label8(__Compare___hlds__passes_aux__task_0_0,3,74,122,138,148,157,5,21)
	MR_init_label8(__Compare___hlds__passes_aux__task_0_0,26,42,58,90,106,117,121,113)
	MR_init_label2(__Compare___hlds__passes_aux__task_0_0,114,218)
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
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_sv(1)),
		MR_LABEL_AP(__Compare___hlds__passes_aux__task_0_0_i74) MR_AND
		MR_LABEL_AP(__Compare___hlds__passes_aux__task_0_0_i122) MR_AND
		MR_LABEL_AP(__Compare___hlds__passes_aux__task_0_0_i138) MR_AND
		MR_LABEL_AP(__Compare___hlds__passes_aux__task_0_0_i157));
MR_def_label(__Compare___hlds__passes_aux__task_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___hlds__passes_aux__task_0_0,74)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_EQ(MR_tag(MR_sv(2)),0)) {
		MR_GOTO_LAB(__Compare___hlds__passes_aux__task_0_0_i148);
	}
	MR_GOTO_LAB(__Compare___hlds__passes_aux__task_0_0_i113);
MR_def_label(__Compare___hlds__passes_aux__task_0_0,122)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_sv(2)),
		MR_LABEL_AP(__Compare___hlds__passes_aux__task_0_0_i117) MR_AND
		MR_LABEL_AP(__Compare___hlds__passes_aux__task_0_0_i148) MR_AND
		MR_LABEL_AP(__Compare___hlds__passes_aux__task_0_0_i113) MR_AND
		MR_LABEL_AP(__Compare___hlds__passes_aux__task_0_0_i113));
MR_def_label(__Compare___hlds__passes_aux__task_0_0,138)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_sv(2)),
		MR_LABEL_AP(__Compare___hlds__passes_aux__task_0_0_i117) MR_AND
		MR_LABEL_AP(__Compare___hlds__passes_aux__task_0_0_i117) MR_AND
		MR_LABEL_AP(__Compare___hlds__passes_aux__task_0_0_i148) MR_AND
		MR_LABEL_AP(__Compare___hlds__passes_aux__task_0_0_i113));
MR_def_label(__Compare___hlds__passes_aux__task_0_0,148)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_const_mask_field(MR_sv(1), 0);
	MR_r2 = MR_const_mask_field(MR_sv(2), 0);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(private_builtin__builtin_compare_pred_3_0);
MR_def_label(__Compare___hlds__passes_aux__task_0_0,157)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_ctfield(3, MR_sv(1), 0),
		MR_LABEL_AP(__Compare___hlds__passes_aux__task_0_0_i106) MR_AND
		MR_LABEL_AP(__Compare___hlds__passes_aux__task_0_0_i90) MR_AND
		MR_LABEL_AP(__Compare___hlds__passes_aux__task_0_0_i58) MR_AND
		MR_LABEL_AP(__Compare___hlds__passes_aux__task_0_0_i5) MR_AND
		MR_LABEL_AP(__Compare___hlds__passes_aux__task_0_0_i42) MR_AND
		MR_LABEL_AP(__Compare___hlds__passes_aux__task_0_0_i21));
MR_def_label(__Compare___hlds__passes_aux__task_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_tag(MR_sv(2)),3)) {
		MR_GOTO_LAB(__Compare___hlds__passes_aux__task_0_0_i117);
	}
	MR_COMPUTED_GOTO((MR_Unsigned) MR_ctfield(3, MR_sv(2), 0),
		MR_LABEL_AP(__Compare___hlds__passes_aux__task_0_0_i117) MR_AND
		MR_LABEL_AP(__Compare___hlds__passes_aux__task_0_0_i117) MR_AND
		MR_LABEL_AP(__Compare___hlds__passes_aux__task_0_0_i117) MR_AND
		MR_LABEL_AP(__Compare___hlds__passes_aux__task_0_0_i114) MR_AND
		MR_LABEL_AP(__Compare___hlds__passes_aux__task_0_0_i113) MR_AND
		MR_LABEL_AP(__Compare___hlds__passes_aux__task_0_0_i113));
MR_def_label(__Compare___hlds__passes_aux__task_0_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_tag(MR_sv(2)),3)) {
		MR_GOTO_LAB(__Compare___hlds__passes_aux__task_0_0_i117);
	}
	if (MR_INT_NE(MR_ctfield(3, MR_sv(2), 0),5)) {
		MR_GOTO_LAB(__Compare___hlds__passes_aux__task_0_0_i117);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(1);
	MR_tempr1 = MR_ctfield(3, MR_tempr5, 2);
	MR_tempr6 = MR_sv(2);
	MR_tempr2 = MR_ctfield(3, MR_tempr6, 2);
	MR_tempr3 = MR_tempr5;
	MR_sv(1) = MR_tempr2;
	MR_tempr4 = MR_tempr6;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_ctfield(3, MR_tempr3, 1);
	MR_r2 = MR_ctfield(3, MR_tempr4, 1);
	}
	MR_np_call_localret_ent(private_builtin__builtin_compare_pred_3_0,
		__Compare___hlds__passes_aux__task_0_0_i26);
MR_def_label(__Compare___hlds__passes_aux__task_0_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___hlds__passes_aux__task_0_0_i218);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(1);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Compare___univ__univ_0_0);
MR_def_label(__Compare___hlds__passes_aux__task_0_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_tag(MR_sv(2)),3)) {
		MR_GOTO_LAB(__Compare___hlds__passes_aux__task_0_0_i117);
	}
	MR_COMPUTED_GOTO((MR_Unsigned) MR_ctfield(3, MR_sv(2), 0),
		MR_LABEL_AP(__Compare___hlds__passes_aux__task_0_0_i117) MR_AND
		MR_LABEL_AP(__Compare___hlds__passes_aux__task_0_0_i117) MR_AND
		MR_LABEL_AP(__Compare___hlds__passes_aux__task_0_0_i117) MR_AND
		MR_LABEL_AP(__Compare___hlds__passes_aux__task_0_0_i117) MR_AND
		MR_LABEL_AP(__Compare___hlds__passes_aux__task_0_0_i114) MR_AND
		MR_LABEL_AP(__Compare___hlds__passes_aux__task_0_0_i113));
MR_def_label(__Compare___hlds__passes_aux__task_0_0,58)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_tag(MR_sv(2)),3)) {
		MR_GOTO_LAB(__Compare___hlds__passes_aux__task_0_0_i117);
	}
	MR_COMPUTED_GOTO((MR_Unsigned) MR_ctfield(3, MR_sv(2), 0),
		MR_LABEL_AP(__Compare___hlds__passes_aux__task_0_0_i117) MR_AND
		MR_LABEL_AP(__Compare___hlds__passes_aux__task_0_0_i117) MR_AND
		MR_LABEL_AP(__Compare___hlds__passes_aux__task_0_0_i114) MR_AND
		MR_LABEL_AP(__Compare___hlds__passes_aux__task_0_0_i113) MR_AND
		MR_LABEL_AP(__Compare___hlds__passes_aux__task_0_0_i113) MR_AND
		MR_LABEL_AP(__Compare___hlds__passes_aux__task_0_0_i113));
MR_def_label(__Compare___hlds__passes_aux__task_0_0,90)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_tag(MR_sv(2)),3)) {
		MR_GOTO_LAB(__Compare___hlds__passes_aux__task_0_0_i117);
	}
	MR_COMPUTED_GOTO((MR_Unsigned) MR_ctfield(3, MR_sv(2), 0),
		MR_LABEL_AP(__Compare___hlds__passes_aux__task_0_0_i117) MR_AND
		MR_LABEL_AP(__Compare___hlds__passes_aux__task_0_0_i114) MR_AND
		MR_LABEL_AP(__Compare___hlds__passes_aux__task_0_0_i113) MR_AND
		MR_LABEL_AP(__Compare___hlds__passes_aux__task_0_0_i113) MR_AND
		MR_LABEL_AP(__Compare___hlds__passes_aux__task_0_0_i113) MR_AND
		MR_LABEL_AP(__Compare___hlds__passes_aux__task_0_0_i113));
MR_def_label(__Compare___hlds__passes_aux__task_0_0,106)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_EQ(MR_tag(MR_sv(2)),3)) {
		MR_GOTO_LAB(__Compare___hlds__passes_aux__task_0_0_i121);
	}
MR_def_label(__Compare___hlds__passes_aux__task_0_0,117)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___hlds__passes_aux__task_0_0,121)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_EQ(MR_ctfield(3, MR_sv(2), 0),0)) {
		MR_GOTO_LAB(__Compare___hlds__passes_aux__task_0_0_i114);
	}
MR_def_label(__Compare___hlds__passes_aux__task_0_0,113)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___hlds__passes_aux__task_0_0,114)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(3, MR_sv(1), 1);
	MR_r2 = MR_ctfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(private_builtin__builtin_compare_pred_3_0);
MR_def_label(__Compare___hlds__passes_aux__task_0_0,218)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__passes_aux_module22)
	MR_init_entry1(hlds__passes_aux__IntroducedFrom__pred__process_all_nonimported_procs_errors__184__1_1_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__passes_aux__IntroducedFrom__pred__process_all_nonimported_procs_errors__184__1_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(f_104_108_100_115_95_95_112_97_115_115_101_115_95_97_117_120_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_97_108_108_95_110_111_110_105_109_112_111_114_116_101_100_95_112_114_111_99_115_95_101_114_114_111_114_115_95_95_49_56_52_95_95_49_95_95_91_49_93_95_48_1_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___list__list_1_0);

MR_BEGIN_MODULE(hlds__passes_aux_module23)
	MR_init_entry1(hlds__passes_aux__IntroducedFrom__pred__process_all_nonimported_procs__190__1_2_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__passes_aux__IntroducedFrom__pred__process_all_nonimported_procs__190__1_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__error_util, error_spec);
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


MR_BEGIN_MODULE(hlds__passes_aux_module24)
	MR_init_entry1(hlds__passes_aux__IntroducedFrom__pred__process_all_nonimported_procs_update__201__1_2_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__passes_aux__IntroducedFrom__pred__process_all_nonimported_procs_update__201__1_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__error_util, error_spec);
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


MR_BEGIN_MODULE(hlds__passes_aux_module25)
	MR_init_entry1(hlds__passes_aux__IntroducedFrom__pred__process_matching_nonimported_procs__218__1_2_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__passes_aux__IntroducedFrom__pred__process_matching_nonimported_procs__218__1_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__error_util, error_spec);
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


MR_BEGIN_MODULE(hlds__passes_aux_module26)
	MR_init_entry1(hlds__passes_aux__IntroducedFrom__pred__process_matching_nonimported_procs_update__231__1_2_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__passes_aux__IntroducedFrom__pred__process_matching_nonimported_procs_update__231__1_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__error_util, error_spec);
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


MR_BEGIN_MODULE(hlds__passes_aux_module27)
	MR_init_entry1(hlds__passes_aux__process_nonimported_procs_in_preds__ho3_8_0);
	MR_init_label6(hlds__passes_aux__process_nonimported_procs_in_preds__ho3_8_0,13,3,4,5,6,7)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__passes_aux__process_nonimported_procs_in_preds__ho3_8_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
MR_def_label(hlds__passes_aux__process_nonimported_procs_in_preds__ho3_8_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(hlds__passes_aux__process_nonimported_procs_in_preds__ho3_8_0_i3);
	}
	MR_r1 = MR_r2;
	MR_r2 = MR_r3;
	MR_decr_sp_and_return(5);
MR_def_label(hlds__passes_aux__process_nonimported_procs_in_preds__ho3_8_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r3;
	MR_sv(2) = MR_tempr1;
	MR_tempr2 = MR_r1;
	MR_sv(3) = MR_ctfield(1, MR_tempr2, 0);
	MR_sv(4) = MR_ctfield(1, MR_tempr2, 1);
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_module__module_info_preds_2_0,
		hlds__passes_aux__process_nonimported_procs_in_preds__ho3_8_0_i4);
MR_def_label(hlds__passes_aux__process_nonimported_procs_in_preds__ho3_8_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_id);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_info);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(3);
	}
	MR_np_call_localret_ent(map__lookup_3_0,
		hlds__passes_aux__process_nonimported_procs_in_preds__ho3_8_0_i5);
MR_def_label(hlds__passes_aux__process_nonimported_procs_in_preds__ho3_8_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__hlds__hlds_pred__pred_info_non_imported_procids_1_0,
		hlds__passes_aux__process_nonimported_procs_in_preds__ho3_8_0_i6);
MR_def_label(hlds__passes_aux__process_nonimported_procs_in_preds__ho3_8_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_np_call_localret_ent(hlds__passes_aux__process_nonimported_procs_8_0,
		hlds__passes_aux__process_nonimported_procs_in_preds__ho3_8_0_i7);
MR_def_label(hlds__passes_aux__process_nonimported_procs_in_preds__ho3_8_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	MR_succip_word = MR_sv(5);
	MR_GOTO_LAB(hlds__passes_aux__process_nonimported_procs_in_preds__ho3_8_0_i13);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__passes_aux_module28)
	MR_init_entry1(hlds__passes_aux__process_nonimported_procs_in_preds__ho4_8_0);
	MR_init_label6(hlds__passes_aux__process_nonimported_procs_in_preds__ho4_8_0,13,3,4,5,6,7)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__passes_aux__process_nonimported_procs_in_preds__ho4_8_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
MR_def_label(hlds__passes_aux__process_nonimported_procs_in_preds__ho4_8_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(hlds__passes_aux__process_nonimported_procs_in_preds__ho4_8_0_i3);
	}
	MR_r1 = MR_r2;
	MR_r2 = MR_r3;
	MR_decr_sp_and_return(5);
MR_def_label(hlds__passes_aux__process_nonimported_procs_in_preds__ho4_8_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r3;
	MR_sv(2) = MR_tempr1;
	MR_tempr2 = MR_r1;
	MR_sv(3) = MR_ctfield(1, MR_tempr2, 0);
	MR_sv(4) = MR_ctfield(1, MR_tempr2, 1);
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_module__module_info_preds_2_0,
		hlds__passes_aux__process_nonimported_procs_in_preds__ho4_8_0_i4);
MR_def_label(hlds__passes_aux__process_nonimported_procs_in_preds__ho4_8_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_id);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_info);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(3);
	}
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
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	MR_succip_word = MR_sv(5);
	MR_GOTO_LAB(hlds__passes_aux__process_nonimported_procs_in_preds__ho4_8_0_i13);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__passes_aux_module29)
	MR_init_entry1(f_104_108_100_115_95_95_112_97_115_115_101_115_95_97_117_120_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_97_108_108_95_110_111_110_105_109_112_111_114_116_101_100_95_112_114_111_99_115_95_101_114_114_111_114_115_95_95_49_56_52_95_95_49_95_95_91_49_93_95_48_1_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(f_104_108_100_115_95_95_112_97_115_115_101_115_95_97_117_120_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_97_108_108_95_110_111_110_105_109_112_111_114_116_101_100_95_112_114_111_99_115_95_101_114_114_111_114_115_95_95_49_56_52_95_95_49_95_95_91_49_93_95_48_1_0)
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
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_hlds__passes_aux__type_ctor_info_task_0,
		hlds__passes_aux__task_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_hlds__passes_aux__type_ctor_info_pred_error_task_0,
		hlds__passes_aux__pred_error_task_0_0);
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
		&mercury_data_hlds__passes_aux__type_ctor_info_pred_error_task_0);
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
