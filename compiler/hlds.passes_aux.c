/*
** Automatically generated from `passes_aux.m'
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
INIT mercury__hlds__passes_aux__init
ENDINIT
*/

#define MR_ALLOW_RESET
#include "mercury_imp.h"
#line 534 "../library/io.int"
#include "io.mh"

#line 28 "hlds.passes_aux.c"
#line 542 "../library/io.int"
#include "string.mh"

#line 32 "hlds.passes_aux.c"
#line 35 "libs.process_util.int"
#include "libs.process_util.mh"

#line 36 "hlds.passes_aux.c"
#line 29 "../library/bitmap.int2"
#include "bitmap.mh"

#line 40 "hlds.passes_aux.c"
#line 28 "../library/time.int2"
#include "time.mh"

#line 44 "hlds.passes_aux.c"
#line 31 "../library/array.int2"
#include "array.mh"

#line 48 "hlds.passes_aux.c"
#line 33 "../mdbcomp/mdbcomp.rtti_access.int2"
#include "mdbcomp.rtti_access.mh"

#line 52 "hlds.passes_aux.c"
#line 53 "hlds.passes_aux.c"
#include "hlds.passes_aux.mh"

#line 56 "hlds.passes_aux.c"
#line 57 "hlds.passes_aux.c"
#ifndef HLDS__PASSES_AUX_DECL_GUARD
#define HLDS__PASSES_AUX_DECL_GUARD

#line 61 "hlds.passes_aux.c"
#line 62 "hlds.passes_aux.c"

#endif
#line 65 "hlds.passes_aux.c"

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
	MR_Word * f3[7];
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
	MR_Word * f3[7];
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
	MR_Word * f1[3];
};
MR_STATIC_LINKAGE const struct mercury_type_8 mercury_common_8[];

extern const MR_TypeCtorInfo_Struct
	mercury_data_hlds__passes_aux__type_ctor_info_dump_info_0,
	mercury_data_hlds__passes_aux__type_ctor_info_pred_error_task_0,
	mercury_data_hlds__passes_aux__type_ctor_info_task_0;
MR_decl_label10(hlds__passes_aux__dump_hlds_4_0, 2,3,4,5,6,7,8,9,12,13)
MR_decl_label9(hlds__passes_aux__dump_hlds_4_0, 14,15,16,11,18,19,20,21,22)
MR_decl_label5(hlds__passes_aux__handle_errors_6_0, 2,3,6,9,5)
MR_decl_label10(hlds__passes_aux__maybe_dump_hlds_7_0, 2,3,4,5,6,7,10,12,13,14)
MR_decl_label10(hlds__passes_aux__maybe_dump_hlds_7_0, 15,16,17,21,23,26,27,28,29,25)
MR_decl_label10(hlds__passes_aux__maybe_dump_hlds_7_0, 31,34,35,36,37,38,33,41,42,43)
MR_decl_label10(hlds__passes_aux__maybe_dump_hlds_7_0, 44,45,18,19,47,8,52,54,55,56)
MR_decl_label10(hlds__passes_aux__maybe_dump_hlds_7_0, 57,58,59,60,61,64,65,66,63,68)
MR_decl_label3(hlds__passes_aux__maybe_dump_hlds_7_0, 69,70,51)
MR_decl_label10(hlds__passes_aux__maybe_report_sizes_3_0, 2,3,6,7,8,9,10,11,12,13)
MR_decl_label10(hlds__passes_aux__maybe_report_sizes_3_0, 15,16,17,18,19,20,22,23,24,25)
MR_decl_label1(hlds__passes_aux__maybe_report_sizes_3_0, 4)
MR_decl_label2(hlds__passes_aux__process_all_nonimported_procs_5_0, 2,4)
MR_decl_label3(hlds__passes_aux__process_all_nonimported_procs_errors_7_0, 2,3,9)
MR_decl_label3(hlds__passes_aux__process_all_nonimported_procs_update_6_0, 2,3,5)
MR_decl_label2(hlds__passes_aux__process_all_nonimported_procs_update_errors_8_0, 2,3)
MR_decl_label2(hlds__passes_aux__process_matching_nonimported_procs_6_0, 2,4)
MR_decl_label3(hlds__passes_aux__process_matching_nonimported_procs_errors_8_0, 2,3,8)
MR_decl_label3(hlds__passes_aux__process_matching_nonimported_procs_update_7_0, 2,3,5)
MR_decl_label2(hlds__passes_aux__process_matching_nonimported_procs_update_errors_9_0, 2,3)
MR_decl_label7(hlds__passes_aux__process_nonimported_pred_7_0, 2,8,6,12,3,14,15)
MR_decl_label10(hlds__passes_aux__process_nonimported_procs_8_0, 46,3,4,5,6,7,18,25,27,28)
MR_decl_label10(hlds__passes_aux__process_nonimported_procs_8_0, 32,9,11,12,14,15,16,20,21,22)
MR_decl_label10(hlds__passes_aux__process_nonimported_procs_8_0, 23,24,8,33,34,35,36,37,38,39)
MR_decl_label8(hlds__passes_aux__process_nonimported_procs_in_preds_8_0, 23,3,4,5,8,10,11,7)
MR_decl_label6(hlds__passes_aux__process_nonimported_procs_in_preds__ho3_8_0, 13,3,4,5,6,7)
MR_decl_label6(hlds__passes_aux__process_nonimported_procs_in_preds__ho4_8_0, 13,3,4,5,6,7)
MR_decl_label10(hlds__passes_aux__report_pred_name_mode_5_0, 4,5,6,7,24,9,10,11,13,3)
MR_decl_label6(hlds__passes_aux__report_pred_name_mode_5_0, 15,18,19,20,21,2)
MR_decl_label10(hlds__passes_aux__report_pred_proc_id_7_0, 2,3,4,5,6,7,8,11,10,14)
MR_decl_label5(hlds__passes_aux__report_pred_proc_id_7_0, 16,17,18,19,20)
MR_decl_label8(hlds__passes_aux__should_dump_stage_4_0, 3,10,13,16,17,15,4,2)
MR_decl_label5(hlds__passes_aux__write_pred_progress_message_5_0, 2,3,6,7,4)
MR_decl_label5(hlds__passes_aux__write_proc_progress_message_6_0, 2,3,6,7,4)
MR_decl_label5(fn__hlds__passes_aux__stage_num_str_1_0, 2,4,3,7,6)
MR_decl_label3(__Unify___hlds__passes_aux__dump_info_0_0, 12,5,1)
MR_decl_label10(__Unify___hlds__passes_aux__task_0_0, 23,35,39,46,5,9,11,15,19,27)
MR_decl_label3(__Unify___hlds__passes_aux__task_0_0, 31,47,1)
MR_decl_label6(__Compare___hlds__passes_aux__dump_info_0_0, 24,7,5,9,11,16)
MR_decl_label10(__Compare___hlds__passes_aux__task_0_0, 3,74,122,138,148,157,5,21,26,42)
MR_decl_label8(__Compare___hlds__passes_aux__task_0_0, 58,90,106,117,121,113,114,218)
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
MR_def_extern_entry(fn__hlds__passes_aux__stage_num_str_1_0)
MR_def_extern_entry(hlds__passes_aux__should_dump_stage_4_0)
MR_decl_static(hlds__passes_aux__dump_hlds_4_0)
MR_def_extern_entry(hlds__passes_aux__maybe_dump_hlds_7_0)
MR_decl_static(hlds__passes_aux__process_nonimported_pred_7_0)
MR_def_extern_entry(__Unify___hlds__passes_aux__dump_info_0_0)
MR_def_extern_entry(__Compare___hlds__passes_aux__dump_info_0_0)
MR_def_extern_entry(__Unify___hlds__passes_aux__pred_error_task_0_0)
MR_def_extern_entry(__Compare___hlds__passes_aux__pred_error_task_0_0)
MR_def_extern_entry(__Unify___hlds__passes_aux__task_0_0)
MR_def_extern_entry(__Compare___hlds__passes_aux__task_0_0)
MR_decl_static(hlds__passes_aux__IntroducedFrom__pred__process_all_nonimported_procs_errors__211__1_1_0)
MR_decl_static(hlds__passes_aux__IntroducedFrom__pred__process_all_nonimported_procs__217__1_2_0)
MR_decl_static(hlds__passes_aux__IntroducedFrom__pred__process_all_nonimported_procs_update__228__1_2_0)
MR_decl_static(hlds__passes_aux__IntroducedFrom__pred__process_matching_nonimported_procs__245__1_2_0)
MR_decl_static(hlds__passes_aux__IntroducedFrom__pred__process_matching_nonimported_procs_update__258__1_2_0)
MR_decl_static(hlds__passes_aux__process_nonimported_procs_in_preds__ho3_8_0)
MR_decl_static(hlds__passes_aux__process_nonimported_procs_in_preds__ho4_8_0)
MR_decl_static(f_104_108_100_115_95_95_112_97_115_115_101_115_95_97_117_120_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_97_108_108_95_110_111_110_105_109_112_111_114_116_101_100_95_112_114_111_99_115_95_101_114_114_111_114_115_95_95_50_49_49_95_95_49_95_95_91_49_93_95_48_1_0)

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
static const struct mercury_type_1 mercury_common_1[1] =
{
{
MR_CTOR0_ADDR(builtin, pred),
7,
{
MR_INT_CTOR_ADDR,
MR_CTOR0_ADDR(hlds__hlds_module, module_info),
MR_CTOR0_ADDR(hlds__hlds_module, module_info),
MR_CTOR0_ADDR(hlds__hlds_pred, pred_info),
MR_CTOR0_ADDR(hlds__hlds_pred, pred_info),
MR_COMMON(0,0),
MR_COMMON(0,0)
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
static const MR_UserClosureId
mercury_data__closure_layout__hlds__passes_aux__process_all_nonimported_procs_errors_7_0_2;
static const struct mercury_type_3 mercury_common_3[2] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__hlds__passes_aux__process_matching_nonimported_procs_errors_8_0_1,
(MR_Word *) (MR_Integer) 0
},
7,
{
MR_COMMON(1,0),
MR_COMMON(2,0),
MR_INT_CTOR_ADDR,
MR_CTOR0_ADDR(hlds__hlds_module, module_info),
MR_CTOR0_ADDR(hlds__hlds_module, module_info),
MR_COMMON(0,1),
MR_COMMON(0,1)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__hlds__passes_aux__process_all_nonimported_procs_errors_7_0_2,
(MR_Word *) (MR_Integer) 0
},
7,
{
MR_COMMON(1,0),
MR_COMMON(2,0),
MR_INT_CTOR_ADDR,
MR_CTOR0_ADDR(hlds__hlds_module, module_info),
MR_CTOR0_ADDR(hlds__hlds_module, module_info),
MR_COMMON(0,1),
MR_COMMON(0,1)
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
MR_ENTRY_AP(hlds__passes_aux__IntroducedFrom__pred__process_all_nonimported_procs_errors__211__1_1_0),
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
MR_ENTRY_AP(hlds__passes_aux__IntroducedFrom__pred__process_all_nonimported_procs_update__228__1_2_0),
2,
MR_tbmkword(0, 0),
MR_tbmkword(0, 0)
},
{
MR_COMMON(6,3),
MR_ENTRY_AP(hlds__passes_aux__IntroducedFrom__pred__process_matching_nonimported_procs_update__258__1_2_0),
2,
MR_tbmkword(0, 0),
MR_tbmkword(0, 0)
},
};

extern const MR_TypeCtorInfo_Struct mercury_data_pair__type_ctor_info_pair_2;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_type_ctor_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_data__type_ctor_info_hlds_type_defn_0;
static const struct mercury_type_8 mercury_common_8[1] =
{
{
{
MR_CTOR_ADDR(pair, pair, 2),
MR_CTOR0_ADDR(parse_tree__prog_data, type_ctor),
MR_CTOR0_ADDR(hlds__hlds_data, hlds_type_defn)
}
},
};

static const MR_DuFunctorDesc mercury_data_hlds__passes_aux__du_functor_desc_dump_info_0_0 = {
	"no_prev_dump",
	0,
	0,
	MR_SECTAG_LOCAL,
	0,
	0,
	0,
	(MR_PseudoTypeInfo *) NULL,
	NULL,
	NULL
};
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_string_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_string_0;

const MR_PseudoTypeInfo mercury_data_hlds__passes_aux__field_types_dump_info_0_1[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_string_0,
	(MR_PseudoTypeInfo) &mercury_data_hlds__hlds_module__type_ctor_info_module_info_0
};

static const MR_DuFunctorDesc mercury_data_hlds__passes_aux__du_functor_desc_dump_info_0_1 = {
	"prev_dumped_hlds",
	2,
	0,
	MR_SECTAG_NONE,
	1,
	-1,
	1,
	(MR_PseudoTypeInfo *) mercury_data_hlds__passes_aux__field_types_dump_info_0_1,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_hlds__passes_aux__du_stag_ordered_dump_info_0_0[] = {
	&mercury_data_hlds__passes_aux__du_functor_desc_dump_info_0_0

};

const MR_DuFunctorDescPtr mercury_data_hlds__passes_aux__du_stag_ordered_dump_info_0_1[] = {
	&mercury_data_hlds__passes_aux__du_functor_desc_dump_info_0_1

};

const MR_DuPtagLayout mercury_data_hlds__passes_aux__du_ptag_ordered_dump_info_0[] = {
	{ 1, MR_SECTAG_LOCAL,
	mercury_data_hlds__passes_aux__du_stag_ordered_dump_info_0_0 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_hlds__passes_aux__du_stag_ordered_dump_info_0_1 }

};

const MR_DuFunctorDescPtr mercury_data_hlds__passes_aux__du_name_ordered_dump_info_0[] = {
	&mercury_data_hlds__passes_aux__du_functor_desc_dump_info_0_0,
	&mercury_data_hlds__passes_aux__du_functor_desc_dump_info_0_1
};

const MR_Integer mercury_data_hlds__passes_aux__functor_number_map_dump_info_0[] = {
	0,
	1 };
	
const MR_TypeCtorInfo_Struct mercury_data_hlds__passes_aux__type_ctor_info_dump_info_0 = {
	0,
	13,
	2,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___hlds__passes_aux__dump_info_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___hlds__passes_aux__dump_info_0_0)),
	"hlds.passes_aux",
	"dump_info",
	{ (void *)mercury_data_hlds__passes_aux__du_name_ordered_dump_info_0 },
	{ (void *)mercury_data_hlds__passes_aux__du_ptag_ordered_dump_info_0 },
	2,
	4,
	mercury_data_hlds__passes_aux__functor_number_map_dump_info_0
};

static const MR_FA_TypeInfo_Struct1 mercury_data_list__ti_list_1parse_tree__error_util__type_ctor_info_error_spec_0 = {
	&mercury_data_list__type_ctor_info_list_1,
{	(MR_TypeInfo) &mercury_data_parse_tree__error_util__type_ctor_info_error_spec_0
}};

static const MR_VA_TypeInfo_Struct7 mercury_data___vti_pred_7builtin__type_ctor_info_int_0hlds__hlds_module__type_ctor_info_module_info_0hlds__hlds_module__type_ctor_info_module_info_0hlds__hlds_pred__type_ctor_info_pred_info_0hlds__hlds_pred__type_ctor_info_pred_info_0list__ti_list_1parse_tree__error_util__type_ctor_info_error_spec_0list__ti_list_1parse_tree__error_util__type_ctor_info_error_spec_0 = {
	&mercury_data_builtin__type_ctor_info_pred_0,
	7,
{	(MR_TypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_TypeInfo) &mercury_data_hlds__hlds_module__type_ctor_info_module_info_0,
	(MR_TypeInfo) &mercury_data_hlds__hlds_module__type_ctor_info_module_info_0,
	(MR_TypeInfo) &mercury_data_hlds__hlds_pred__type_ctor_info_pred_info_0,
	(MR_TypeInfo) &mercury_data_hlds__hlds_pred__type_ctor_info_pred_info_0,
	(MR_TypeInfo) &mercury_data_list__ti_list_1parse_tree__error_util__type_ctor_info_error_spec_0,
	(MR_TypeInfo) &mercury_data_list__ti_list_1parse_tree__error_util__type_ctor_info_error_spec_0
}};

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
	{ (void *)&mercury_data___vti_pred_7builtin__type_ctor_info_int_0hlds__hlds_module__type_ctor_info_module_info_0hlds__hlds_module__type_ctor_info_module_info_0hlds__hlds_pred__type_ctor_info_pred_info_0hlds__hlds_pred__type_ctor_info_pred_info_0list__ti_list_1parse_tree__error_util__type_ctor_info_error_spec_0list__ti_list_1parse_tree__error_util__type_ctor_info_error_spec_0 },
	-1,
	0,
	NULL
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
extern const MR_TypeCtorInfo_Struct mercury_data_io__type_ctor_info_state_0;
extern const MR_TypeCtorInfo_Struct mercury_data_io__type_ctor_info_state_0;

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

const MR_PseudoTypeInfo mercury_data_hlds__passes_aux__field_types_task_0_5[] = {
	(MR_PseudoTypeInfo) &mercury_data___vti_pred_7builtin__type_ctor_info_int_0hlds__hlds_module__type_ctor_info_module_info_0hlds__hlds_module__type_ctor_info_module_info_0hlds__hlds_pred__type_ctor_info_pred_info_0hlds__hlds_pred__type_ctor_info_pred_info_0list__ti_list_1parse_tree__error_util__type_ctor_info_error_spec_0list__ti_list_1parse_tree__error_util__type_ctor_info_error_spec_0
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


static const MR_UserClosureId
mercury_data__closure_layout__hlds__passes_aux__process_matching_nonimported_procs_update_7_0_1 = {
{
MR_PREDICATE,
"hlds.passes_aux",
"hlds.passes_aux",
"lambda_passes_aux_m_258",
2,
0
},
"hlds.passes_aux",
"passes_aux.m",
258,
"d1;c10;"
};

static const MR_UserClosureId
mercury_data__closure_layout__hlds__passes_aux__process_matching_nonimported_procs_6_0_1 = {
{
MR_PREDICATE,
"hlds.passes_aux",
"hlds.passes_aux",
"lambda_passes_aux_m_245",
2,
0
},
"hlds.passes_aux",
"passes_aux.m",
245,
"d1;c9;"
};

static const MR_UserClosureId
mercury_data__closure_layout__hlds__passes_aux__process_all_nonimported_procs_update_6_0_1 = {
{
MR_PREDICATE,
"hlds.passes_aux",
"hlds.passes_aux",
"lambda_passes_aux_m_228",
2,
0
},
"hlds.passes_aux",
"passes_aux.m",
228,
"d1;c9;"
};

static const MR_UserClosureId
mercury_data__closure_layout__hlds__passes_aux__process_all_nonimported_procs_5_0_1 = {
{
MR_PREDICATE,
"hlds.passes_aux",
"hlds.passes_aux",
"lambda_passes_aux_m_217",
2,
0
},
"hlds.passes_aux",
"passes_aux.m",
217,
"d1;c8;"
};

static const MR_UserClosureId
mercury_data__closure_layout__hlds__passes_aux__process_all_nonimported_procs_errors_7_0_2 = {
{
MR_PREDICATE,
"hlds.passes_aux",
"hlds.passes_aux",
"process_nonimported_pred",
7,
0
},
"hlds.passes_aux",
"passes_aux.m",
235,
"d1;c10;t;c1;"
};

static const MR_UserClosureId
mercury_data__closure_layout__hlds__passes_aux__process_all_nonimported_procs_errors_7_0_1 = {
{
MR_PREDICATE,
"hlds.passes_aux",
"hlds.passes_aux",
"lambda_passes_aux_m_211",
1,
0
},
"hlds.passes_aux",
"",
0,
""
};

static const MR_UserClosureId
mercury_data__closure_layout__hlds__passes_aux__process_matching_nonimported_procs_errors_8_0_1 = {
{
MR_PREDICATE,
"hlds.passes_aux",
"hlds.passes_aux",
"process_nonimported_pred",
7,
0
},
"hlds.passes_aux",
"passes_aux.m",
235,
"d1;c10;t;c1;"
};


MR_decl_entry(hlds__hlds_module__module_info_get_globals_2_0);
MR_decl_entry(libs__globals__lookup_bool_option_3_0);
MR_decl_entry(io__set_exit_status_3_0);
MR_decl_entry(hlds__hlds_module__module_info_incr_errors_2_0);

MR_BEGIN_MODULE(hlds__passes_aux_module0)
	MR_init_entry1(hlds__passes_aux__handle_errors_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__passes_aux__handle_errors_6_0);
	MR_init_label5(hlds__passes_aux__handle_errors_6_0,2,3,6,9,5)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'handle_errors'/6 mode 0 */
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
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(3) = MR_tempr1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_globals_2_0,
		hlds__passes_aux__handle_errors_6_0_i2);
MR_def_label(hlds__passes_aux__handle_errors_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 2;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		hlds__passes_aux__handle_errors_6_0_i3);
MR_def_label(hlds__passes_aux__handle_errors_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_GT(MR_sv(2),0)) {
		MR_GOTO_LAB(hlds__passes_aux__handle_errors_6_0_i6);
	}
	if (MR_INT_LE(MR_sv(1),0)) {
		MR_GOTO_LAB(hlds__passes_aux__handle_errors_6_0_i5);
	}
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(hlds__passes_aux__handle_errors_6_0_i5);
	}
MR_def_label(hlds__passes_aux__handle_errors_6_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_np_call_localret_ent(io__set_exit_status_3_0,
		hlds__passes_aux__handle_errors_6_0_i9);
MR_def_label(hlds__passes_aux__handle_errors_6_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(hlds__hlds_module__module_info_incr_errors_2_0);
MR_def_label(hlds__passes_aux__handle_errors_6_0,5)
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
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__passes_aux__process_nonimported_procs_8_0);
	MR_init_label10(hlds__passes_aux__process_nonimported_procs_8_0,46,3,4,5,6,7,18,25,27,28)
	MR_init_label10(hlds__passes_aux__process_nonimported_procs_8_0,32,9,11,12,14,15,16,20,21,22)
	MR_init_label10(hlds__passes_aux__process_nonimported_procs_8_0,23,24,8,33,34,35,36,37,38,39)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'process_nonimported_procs'/8 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__passes_aux__process_nonimported_procs_8_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(13);
	MR_sv(13) = (MR_Word) MR_succip;
MR_def_label(hlds__passes_aux__process_nonimported_procs_8_0,46)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(hlds__passes_aux__process_nonimported_procs_8_0_i3);
	}
	MR_r1 = MR_r3;
	MR_r2 = MR_r4;
	MR_decr_sp_and_return(13);
MR_def_label(hlds__passes_aux__process_nonimported_procs_8_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_sv(3) = MR_tempr1;
	MR_sv(4) = MR_tfield(1, MR_r1, 0);
	MR_sv(5) = MR_tfield(1, MR_r1, 1);
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_module__module_info_preds_2_0,
		hlds__passes_aux__process_nonimported_procs_8_0_i4);
MR_def_label(hlds__passes_aux__process_nonimported_procs_8_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_id);
	MR_sv(10) = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_info);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(10);
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
	MR_sv(11) = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, proc_id);
	MR_sv(12) = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, proc_info);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(11);
	MR_r2 = MR_sv(12);
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
	MR_r1 = MR_tfield(0, MR_sv(2), 0);
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
	MR_r1 = MR_tfield(1, MR_sv(2), 0);
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
	MR_r1 = MR_tfield(2, MR_sv(2), 0);
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
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tfield(3, MR_sv(2), 0),
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
	MR_r1 = MR_tfield(3, MR_sv(2), 1);
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
	MR_sv(2) = MR_tfield(3, MR_tempr1, 1);
	MR_tempr2 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_tempr2;
	MR_r5 = MR_tfield(3, MR_tempr1, 2);
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
	MR_r1 = MR_tfield(3, MR_sv(2), 1);
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
	MR_r1 = MR_tfield(3, MR_sv(2), 1);
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
	MR_r1 = MR_tfield(3, MR_sv(2), 1);
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
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(10);
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
	MR_r1 = MR_sv(11);
	MR_r2 = MR_sv(12);
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
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(10);
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
	MR_succip_word = MR_sv(13);
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
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__passes_aux__process_nonimported_procs_in_preds_8_0);
	MR_init_label8(hlds__passes_aux__process_nonimported_procs_in_preds_8_0,23,3,4,5,8,10,11,7)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'process_nonimported_procs_in_preds'/8 mode 0 */
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
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_sv(3) = MR_tempr1;
	MR_sv(4) = MR_tfield(1, MR_r1, 0);
	MR_sv(5) = MR_tfield(1, MR_r1, 1);
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
MR_decl_entry(list__foldl2_6_0);

MR_BEGIN_MODULE(hlds__passes_aux_module3)
	MR_init_entry1(hlds__passes_aux__process_matching_nonimported_procs_errors_8_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__passes_aux__process_matching_nonimported_procs_errors_8_0);
	MR_init_label3(hlds__passes_aux__process_matching_nonimported_procs_errors_8_0,2,3,8)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'process_matching_nonimported_procs_errors'/8 mode 0 */
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
	MR_r4 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(3,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(hlds__passes_aux__process_nonimported_pred_7_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr1, 3) = MR_tfield(3, MR_sv(1), 1);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(2);
	MR_tempr2 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_id);
	MR_tempr3 = MR_r2;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_module, module_info);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,0,2);
	MR_r5 = MR_tempr2;
	MR_r6 = MR_tempr3;
	MR_r7 = MR_sv(3);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(list__foldl2_6_0);
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
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__passes_aux__process_all_nonimported_procs_errors_7_0);
	MR_init_label3(hlds__passes_aux__process_all_nonimported_procs_errors_7_0,2,3,9)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'process_all_nonimported_procs_errors'/7 mode 0 */
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
	MR_r4 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(3,1);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(hlds__passes_aux__process_nonimported_pred_7_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr1, 3) = MR_tfield(3, MR_sv(1), 1);
	MR_tfield(0, MR_tempr1, 4) = (MR_Word) MR_TAG_COMMON(0,5,0);
	MR_tempr2 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_id);
	MR_tempr3 = MR_r2;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_module, module_info);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,0,2);
	MR_r5 = MR_tempr2;
	MR_r6 = MR_tempr3;
	MR_r7 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(list__foldl2_6_0);
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
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__passes_aux__process_all_nonimported_procs_5_0);
	MR_init_label2(hlds__passes_aux__process_all_nonimported_procs_5_0,2,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'process_all_nonimported_procs'/5 mode 0 */
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
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(hlds__passes_aux__IntroducedFrom__pred__process_all_nonimported_procs__217__1_2_0);
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
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__passes_aux__process_matching_nonimported_procs_update_errors_9_0);
	MR_init_label2(hlds__passes_aux__process_matching_nonimported_procs_update_errors_9_0,2,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'process_matching_nonimported_procs_update_errors'/9 mode 0 */
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
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__passes_aux__process_all_nonimported_procs_update_errors_8_0);
	MR_init_label2(hlds__passes_aux__process_all_nonimported_procs_update_errors_8_0,2,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'process_all_nonimported_procs_update_errors'/8 mode 0 */
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
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__passes_aux__process_all_nonimported_procs_update_6_0);
	MR_init_label3(hlds__passes_aux__process_all_nonimported_procs_update_6_0,2,3,5)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'process_all_nonimported_procs_update'/6 mode 0 */
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
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__passes_aux__process_matching_nonimported_procs_6_0);
	MR_init_label2(hlds__passes_aux__process_matching_nonimported_procs_6_0,2,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'process_matching_nonimported_procs'/6 mode 0 */
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
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(hlds__passes_aux__IntroducedFrom__pred__process_matching_nonimported_procs__245__1_2_0);
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
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__passes_aux__process_matching_nonimported_procs_update_7_0);
	MR_init_label3(hlds__passes_aux__process_matching_nonimported_procs_update_7_0,2,3,5)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'process_matching_nonimported_procs_update'/7 mode 0 */
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
MR_decl_entry(hlds__hlds_out__hlds_out_util__write_pred_id_4_0);

MR_BEGIN_MODULE(hlds__passes_aux_module11)
	MR_init_entry1(hlds__passes_aux__write_pred_progress_message_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__passes_aux__write_pred_progress_message_5_0);
	MR_init_label5(hlds__passes_aux__write_pred_progress_message_5_0,2,3,6,7,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'write_pred_progress_message'/5 mode 0 */
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
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(3) = MR_tempr1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_globals_2_0,
		hlds__passes_aux__write_pred_progress_message_5_0_i2);
MR_def_label(hlds__passes_aux__write_pred_progress_message_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 40;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		hlds__passes_aux__write_pred_progress_message_5_0_i3);
MR_def_label(hlds__passes_aux__write_pred_progress_message_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_EQ(MR_r1,0)) {
		MR_GOTO_LAB(hlds__passes_aux__write_pred_progress_message_5_0_i4);
	}
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__passes_aux__write_pred_progress_message_5_0_i6);
MR_def_label(hlds__passes_aux__write_pred_progress_message_5_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(hlds__hlds_out__hlds_out_util__write_pred_id_4_0,
		hlds__passes_aux__write_pred_progress_message_5_0_i7);
MR_def_label(hlds__passes_aux__write_pred_progress_message_5_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("\n", 1);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(io__write_string_3_0);
MR_def_label(hlds__passes_aux__write_pred_progress_message_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(4);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__hlds_out__hlds_out_util__write_pred_proc_id_pair_5_0);

MR_BEGIN_MODULE(hlds__passes_aux_module12)
	MR_init_entry1(hlds__passes_aux__write_proc_progress_message_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__passes_aux__write_proc_progress_message_6_0);
	MR_init_label5(hlds__passes_aux__write_proc_progress_message_6_0,2,3,6,7,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'write_proc_progress_message'/6 mode 0 */
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
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_sv(4) = MR_tempr1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_globals_2_0,
		hlds__passes_aux__write_proc_progress_message_6_0_i2);
MR_def_label(hlds__passes_aux__write_proc_progress_message_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 40;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		hlds__passes_aux__write_proc_progress_message_6_0_i3);
MR_def_label(hlds__passes_aux__write_proc_progress_message_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_EQ(MR_r1,0)) {
		MR_GOTO_LAB(hlds__passes_aux__write_proc_progress_message_6_0_i4);
	}
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__passes_aux__write_proc_progress_message_6_0_i6);
MR_def_label(hlds__passes_aux__write_proc_progress_message_6_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_np_call_localret_ent(hlds__hlds_out__hlds_out_util__write_pred_proc_id_pair_5_0,
		hlds__passes_aux__write_proc_progress_message_6_0_i7);
MR_def_label(hlds__passes_aux__write_proc_progress_message_6_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("\n", 1);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(io__write_string_3_0);
MR_def_label(hlds__passes_aux__write_proc_progress_message_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__passes_aux_module13)
	MR_init_entry1(hlds__passes_aux__write_proc_progress_message_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__passes_aux__write_proc_progress_message_5_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'write_proc_progress_message'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__hlds__passes_aux__write_proc_progress_message_5_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_tfield(0, MR_r2, 0);
	MR_tempr2 = MR_r3;
	MR_r3 = MR_tfield(0, MR_tempr1, 1);
	MR_r4 = MR_tempr2;
	MR_np_tailcall_ent(hlds__passes_aux__write_proc_progress_message_6_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__map__count_1_0);
MR_decl_entry(fn__string__int_to_string_1_0);
MR_decl_entry(fn__f_115_116_114_105_110_103_95_95_43_43_2_0);
MR_decl_entry(hlds__hlds_module__module_info_get_type_table_2_0);
MR_decl_entry(hlds__hlds_data__get_all_type_ctor_defns_2_0);
MR_decl_entry(fn__list__length_1_0);
MR_decl_entry(hlds__hlds_module__module_info_get_cons_table_2_0);
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_cons_id_0;

MR_BEGIN_MODULE(hlds__passes_aux_module14)
	MR_init_entry1(hlds__passes_aux__maybe_report_sizes_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__passes_aux__maybe_report_sizes_3_0);
	MR_init_label10(hlds__passes_aux__maybe_report_sizes_3_0,2,3,6,7,8,9,10,11,12,13)
	MR_init_label10(hlds__passes_aux__maybe_report_sizes_3_0,15,16,17,18,19,20,22,23,24,25)
	MR_init_label1(hlds__passes_aux__maybe_report_sizes_3_0,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'maybe_report_sizes'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__hlds__passes_aux__maybe_report_sizes_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_globals_2_0,
		hlds__passes_aux__maybe_report_sizes_3_0_i2);
MR_def_label(hlds__passes_aux__maybe_report_sizes_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 47;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		hlds__passes_aux__maybe_report_sizes_3_0_i3);
MR_def_label(hlds__passes_aux__maybe_report_sizes_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_EQ(MR_r1,0)) {
		MR_GOTO_LAB(hlds__passes_aux__maybe_report_sizes_3_0_i4);
	}
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(hlds__hlds_module__module_info_preds_2_0,
		hlds__passes_aux__maybe_report_sizes_3_0_i6);
MR_def_label(hlds__passes_aux__maybe_report_sizes_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_id);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_info);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__map__count_1_0,
		hlds__passes_aux__maybe_report_sizes_3_0_i7);
MR_def_label(hlds__passes_aux__maybe_report_sizes_3_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		hlds__passes_aux__maybe_report_sizes_3_0_i8);
MR_def_label(hlds__passes_aux__maybe_report_sizes_3_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("\n", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		hlds__passes_aux__maybe_report_sizes_3_0_i9);
MR_def_label(hlds__passes_aux__maybe_report_sizes_3_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("Pred table size = ", 18);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		hlds__passes_aux__maybe_report_sizes_3_0_i10);
MR_def_label(hlds__passes_aux__maybe_report_sizes_3_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__passes_aux__maybe_report_sizes_3_0_i11);
MR_def_label(hlds__passes_aux__maybe_report_sizes_3_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_type_table_2_0,
		hlds__passes_aux__maybe_report_sizes_3_0_i12);
MR_def_label(hlds__passes_aux__maybe_report_sizes_3_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(hlds__hlds_data__get_all_type_ctor_defns_2_0,
		hlds__passes_aux__maybe_report_sizes_3_0_i13);
MR_def_label(hlds__passes_aux__maybe_report_sizes_3_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,8,0);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__list__length_1_0,
		hlds__passes_aux__maybe_report_sizes_3_0_i15);
MR_def_label(hlds__passes_aux__maybe_report_sizes_3_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		hlds__passes_aux__maybe_report_sizes_3_0_i16);
MR_def_label(hlds__passes_aux__maybe_report_sizes_3_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("\n", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		hlds__passes_aux__maybe_report_sizes_3_0_i17);
MR_def_label(hlds__passes_aux__maybe_report_sizes_3_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("Type table size = ", 18);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		hlds__passes_aux__maybe_report_sizes_3_0_i18);
MR_def_label(hlds__passes_aux__maybe_report_sizes_3_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__passes_aux__maybe_report_sizes_3_0_i19);
MR_def_label(hlds__passes_aux__maybe_report_sizes_3_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_cons_table_2_0,
		hlds__passes_aux__maybe_report_sizes_3_0_i20);
MR_def_label(hlds__passes_aux__maybe_report_sizes_3_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, cons_id);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,3);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__map__count_1_0,
		hlds__passes_aux__maybe_report_sizes_3_0_i22);
MR_def_label(hlds__passes_aux__maybe_report_sizes_3_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		hlds__passes_aux__maybe_report_sizes_3_0_i23);
MR_def_label(hlds__passes_aux__maybe_report_sizes_3_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("\n", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		hlds__passes_aux__maybe_report_sizes_3_0_i24);
MR_def_label(hlds__passes_aux__maybe_report_sizes_3_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("Constructor table size = ", 25);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		hlds__passes_aux__maybe_report_sizes_3_0_i25);
MR_def_label(hlds__passes_aux__maybe_report_sizes_3_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(io__write_string_3_0);
MR_def_label(hlds__passes_aux__maybe_report_sizes_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(2);
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
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__passes_aux__report_pred_name_mode_5_0);
	MR_init_label10(hlds__passes_aux__report_pred_name_mode_5_0,4,5,6,7,24,9,10,11,13,3)
	MR_init_label6(hlds__passes_aux__report_pred_name_mode_5_0,15,18,19,20,21,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'report_pred_name_mode'/5 mode 0 */
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
	MR_r2 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_r2;
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
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__passes_aux__report_pred_proc_id_7_0);
	MR_init_label10(hlds__passes_aux__report_pred_proc_id_7_0,2,3,4,5,6,7,8,11,10,14)
	MR_init_label5(hlds__passes_aux__report_pred_proc_id_7_0,16,17,18,19,20)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'report_pred_proc_id'/7 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__hlds__passes_aux__report_pred_proc_id_7_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
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
	MR_sv(7) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_mode);
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(list__length_2_0,
		hlds__passes_aux__report_pred_proc_id_7_0_i8);
MR_def_label(hlds__passes_aux__report_pred_proc_id_7_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = ((MR_Integer) MR_tempr1 - (MR_Integer) MR_sv(5));
	MR_r3 = MR_sv(3);
	}
	MR_np_call_localret_ent(list__drop_3_0,
		hlds__passes_aux__report_pred_proc_id_7_0_i11);
MR_def_label(hlds__passes_aux__report_pred_proc_id_7_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(hlds__passes_aux__report_pred_proc_id_7_0_i10);
	}
	MR_r1 = MR_sv(2);
	MR_r3 = MR_r2;
	MR_GOTO_LAB(hlds__passes_aux__report_pred_proc_id_7_0_i14);
MR_def_label(hlds__passes_aux__report_pred_proc_id_7_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("passes_aux.m", 12);
	MR_r2 = (MR_Word) MR_string_const("report_pred_proc_id: list.drop failed", 37);
	MR_np_call_localret_ent(libs__compiler_util__unexpected_2_0,
		hlds__passes_aux__report_pred_proc_id_7_0_i14);
MR_def_label(hlds__passes_aux__report_pred_proc_id_7_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,0)) {
		MR_GOTO_LAB(hlds__passes_aux__report_pred_proc_id_7_0_i16);
	}
	MR_sv(2) = MR_r1;
	MR_sv(1) = MR_r3;
	MR_np_call_localret_ent(parse_tree__prog_out__write_context_3_0,
		hlds__passes_aux__report_pred_proc_id_7_0_i17);
MR_def_label(hlds__passes_aux__report_pred_proc_id_7_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r3;
	MR_r1 = MR_tfield(1, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(parse_tree__prog_out__write_context_3_0,
		hlds__passes_aux__report_pred_proc_id_7_0_i17);
MR_def_label(hlds__passes_aux__report_pred_proc_id_7_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("In \140", 4);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__passes_aux__report_pred_proc_id_7_0_i18);
MR_def_label(hlds__passes_aux__report_pred_proc_id_7_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(1);
	MR_np_call_localret_ent(hlds__passes_aux__report_pred_name_mode_5_0,
		hlds__passes_aux__report_pred_proc_id_7_0_i19);
MR_def_label(hlds__passes_aux__report_pred_proc_id_7_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("\':\n", 3);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__passes_aux__report_pred_proc_id_7_0_i20);
MR_def_label(hlds__passes_aux__report_pred_proc_id_7_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_decr_sp_and_return(8);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(string__int_to_string_2_0);
MR_decl_entry(string__length_2_1);

MR_BEGIN_MODULE(hlds__passes_aux_module17)
	MR_init_entry1(fn__hlds__passes_aux__stage_num_str_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__hlds__passes_aux__stage_num_str_1_0);
	MR_init_label5(fn__hlds__passes_aux__stage_num_str_1_0,2,4,3,7,6)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'stage_num_str'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__hlds__passes_aux__stage_num_str_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(string__int_to_string_2_0,
		fn__hlds__passes_aux__stage_num_str_1_0_i2);
MR_def_label(fn__hlds__passes_aux__stage_num_str_1_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(string__length_2_1,
		fn__hlds__passes_aux__stage_num_str_1_0_i4);
MR_def_label(fn__hlds__passes_aux__stage_num_str_1_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) 1 != (MR_Integer) MR_r1)) {
		MR_GOTO_LAB(fn__hlds__passes_aux__stage_num_str_1_0_i3);
	}
	MR_r1 = (MR_Word) MR_string_const("00", 2);
	MR_r2 = MR_sv(1);
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0);
MR_def_label(fn__hlds__passes_aux__stage_num_str_1_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(string__length_2_1,
		fn__hlds__passes_aux__stage_num_str_1_0_i7);
MR_def_label(fn__hlds__passes_aux__stage_num_str_1_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) 2 != (MR_Integer) MR_r1)) {
		MR_GOTO_LAB(fn__hlds__passes_aux__stage_num_str_1_0_i6);
	}
	MR_r1 = (MR_Word) MR_string_const("0", 1);
	MR_r2 = MR_sv(1);
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0);
MR_def_label(fn__hlds__passes_aux__stage_num_str_1_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_decr_sp_and_return(2);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_string_0;
MR_decl_entry(list__member_2_1);
MR_decl_entry(string__append_3_0);
MR_decl_entry(string__append_3_3);
MR_declare_entry(MR_do_redo);
MR_decl_entry(string__to_int_2_0);

MR_BEGIN_MODULE(hlds__passes_aux_module18)
	MR_init_entry1(hlds__passes_aux__should_dump_stage_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__passes_aux__should_dump_stage_4_0);
	MR_init_label8(hlds__passes_aux__should_dump_stage_4_0,3,10,13,16,17,15,4,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'should_dump_stage'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__hlds__passes_aux__should_dump_stage_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(11);
	MR_sv(11) = (MR_Word) MR_succip;
	MR_sv(5) = (MR_Word) MR_redoip_slot(MR_maxfr);
	MR_sv(6) = (MR_Word) MR_redofr_slot(MR_maxfr);
	MR_save_maxfr(MR_sv(7));
	MR_redofr_slot_word(MR_maxfr) = (MR_Word) MR_curfr;
	MR_redoip_slot_word(MR_maxfr) = (MR_Word) MR_LABEL_AP(hlds__passes_aux__should_dump_stage_4_0_i2);
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = MR_r4;
	MR_np_call_localret_ent(list__member_2_1,
		hlds__passes_aux__should_dump_stage_4_0_i3);
MR_def_label(hlds__passes_aux__should_dump_stage_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_sv(3), (char *) (MR_Word *) MR_r1) == 0)) {
		MR_GOTO_LAB(hlds__passes_aux__should_dump_stage_4_0_i4);
	}
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("all", 3)) == 0)) {
		MR_GOTO_LAB(hlds__passes_aux__should_dump_stage_4_0_i4);
	}
	if ((strcmp((char *) (MR_Word *) MR_r1, (char *) (MR_Word *) MR_sv(2)) == 0)) {
		MR_GOTO_LAB(hlds__passes_aux__should_dump_stage_4_0_i4);
	}
	MR_sv(4) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("0", 1);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(2);
	MR_np_call_localret_ent(string__append_3_0,
		hlds__passes_aux__should_dump_stage_4_0_i10);
MR_def_label(hlds__passes_aux__should_dump_stage_4_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(hlds__passes_aux__should_dump_stage_4_0_i4);
	}
	MR_r1 = (MR_Word) MR_string_const("00", 2);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(2);
	MR_np_call_localret_ent(string__append_3_0,
		hlds__passes_aux__should_dump_stage_4_0_i13);
MR_def_label(hlds__passes_aux__should_dump_stage_4_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(hlds__passes_aux__should_dump_stage_4_0_i4);
	}
	MR_sv(8) = (MR_Word) MR_redoip_slot(MR_maxfr);
	MR_sv(9) = (MR_Word) MR_redofr_slot(MR_maxfr);
	MR_save_maxfr(MR_sv(10));
	MR_redofr_slot_word(MR_maxfr) = (MR_Word) MR_curfr;
	MR_redoip_slot_word(MR_maxfr) = (MR_Word) MR_LABEL_AP(hlds__passes_aux__should_dump_stage_4_0_i15);
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(string__append_3_3,
		hlds__passes_aux__should_dump_stage_4_0_i16);
MR_def_label(hlds__passes_aux__should_dump_stage_4_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp(MR_string_const("+", 1), (char *) (MR_Word *) MR_r2) != 0)) {
		MR_GOTO(MR_ENTRY(MR_do_redo));
	}
	MR_np_call_localret_ent(string__to_int_2_0,
		hlds__passes_aux__should_dump_stage_4_0_i17);
MR_def_label(hlds__passes_aux__should_dump_stage_4_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO(MR_ENTRY(MR_do_redo));
	}
	if (((MR_Integer) MR_sv(1) < (MR_Integer) MR_r2)) {
		MR_GOTO(MR_ENTRY(MR_do_redo));
	}
	MR_restore_maxfr(MR_sv(10));
	MR_redoip_slot_word(MR_maxfr) = MR_sv(8);
	MR_redofr_slot_word(MR_maxfr) = MR_sv(9);
	MR_GOTO_LAB(hlds__passes_aux__should_dump_stage_4_0_i4);
MR_def_label(hlds__passes_aux__should_dump_stage_4_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_redoip_slot_word(MR_maxfr) = MR_sv(8);
	MR_redofr_slot_word(MR_maxfr) = MR_sv(9);
	MR_GOTO(MR_ENTRY(MR_do_redo));
MR_def_label(hlds__passes_aux__should_dump_stage_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_restore_maxfr(MR_sv(7));
	MR_redoip_slot_word(MR_maxfr) = MR_sv(5);
	MR_redofr_slot_word(MR_maxfr) = MR_sv(6);
	MR_succip_word = MR_sv(11);
	MR_decr_sp(11);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(hlds__passes_aux__should_dump_stage_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_redoip_slot_word(MR_maxfr) = MR_sv(5);
	MR_redofr_slot_word(MR_maxfr) = MR_sv(6);
	MR_succip_word = MR_sv(11);
	MR_decr_sp(11);
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(libs__file_util__maybe_write_string_4_0);
MR_decl_entry(libs__file_util__maybe_flush_output_3_0);
MR_decl_entry(io__open_output_4_0);
MR_decl_entry(fn__io__error_message_1_0);
MR_decl_entry(libs__file_util__report_error_3_0);
MR_decl_entry(io__set_output_stream_4_0);
MR_decl_entry(hlds__hlds_out__hlds_out_module__write_hlds_4_0);
MR_decl_entry(io__close_output_3_0);
MR_decl_entry(libs__file_util__maybe_report_stats_3_0);

MR_BEGIN_MODULE(hlds__passes_aux_module19)
	MR_init_entry1(hlds__passes_aux__dump_hlds_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__passes_aux__dump_hlds_4_0);
	MR_init_label10(hlds__passes_aux__dump_hlds_4_0,2,3,4,5,6,7,8,9,12,13)
	MR_init_label9(hlds__passes_aux__dump_hlds_4_0,14,15,16,11,18,19,20,21,22)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'dump_hlds'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__passes_aux__dump_hlds_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_globals_2_0,
		hlds__passes_aux__dump_hlds_4_0_i2);
MR_def_label(hlds__passes_aux__dump_hlds_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r2 = (MR_Integer) 39;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		hlds__passes_aux__dump_hlds_4_0_i3);
MR_def_label(hlds__passes_aux__dump_hlds_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Integer) 47;
	}
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		hlds__passes_aux__dump_hlds_4_0_i4);
MR_def_label(hlds__passes_aux__dump_hlds_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = (MR_Word) MR_string_const("% Dumping out HLDS to \140", 23);
	MR_np_call_localret_ent(libs__file_util__maybe_write_string_4_0,
		hlds__passes_aux__dump_hlds_4_0_i5);
MR_def_label(hlds__passes_aux__dump_hlds_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(libs__file_util__maybe_write_string_4_0,
		hlds__passes_aux__dump_hlds_4_0_i6);
MR_def_label(hlds__passes_aux__dump_hlds_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_r2 = (MR_Word) MR_string_const("\'...", 4);
	MR_np_call_localret_ent(libs__file_util__maybe_write_string_4_0,
		hlds__passes_aux__dump_hlds_4_0_i7);
MR_def_label(hlds__passes_aux__dump_hlds_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(libs__file_util__maybe_flush_output_3_0,
		hlds__passes_aux__dump_hlds_4_0_i8);
MR_def_label(hlds__passes_aux__dump_hlds_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(io__open_output_4_0,
		hlds__passes_aux__dump_hlds_4_0_i9);
MR_def_label(hlds__passes_aux__dump_hlds_4_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,1)) {
		MR_GOTO_LAB(hlds__passes_aux__dump_hlds_4_0_i11);
	}
	MR_sv(2) = MR_tfield(1, MR_r1, 0);
	MR_r1 = MR_sv(3);
	MR_r2 = (MR_Word) MR_string_const("\n", 1);
	MR_np_call_localret_ent(libs__file_util__maybe_write_string_4_0,
		hlds__passes_aux__dump_hlds_4_0_i12);
MR_def_label(hlds__passes_aux__dump_hlds_4_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(fn__io__error_message_1_0,
		hlds__passes_aux__dump_hlds_4_0_i13);
MR_def_label(hlds__passes_aux__dump_hlds_4_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("\' for output: ", 14);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		hlds__passes_aux__dump_hlds_4_0_i14);
MR_def_label(hlds__passes_aux__dump_hlds_4_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		hlds__passes_aux__dump_hlds_4_0_i15);
MR_def_label(hlds__passes_aux__dump_hlds_4_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("can\'t open file \140", 17);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		hlds__passes_aux__dump_hlds_4_0_i16);
MR_def_label(hlds__passes_aux__dump_hlds_4_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(libs__file_util__report_error_3_0);
MR_def_label(hlds__passes_aux__dump_hlds_4_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_tfield(0, MR_r1, 0);
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(io__set_output_stream_4_0,
		hlds__passes_aux__dump_hlds_4_0_i18);
MR_def_label(hlds__passes_aux__dump_hlds_4_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = (MR_Integer) 0;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_out__hlds_out_module__write_hlds_4_0,
		hlds__passes_aux__dump_hlds_4_0_i19);
MR_def_label(hlds__passes_aux__dump_hlds_4_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(io__set_output_stream_4_0,
		hlds__passes_aux__dump_hlds_4_0_i20);
MR_def_label(hlds__passes_aux__dump_hlds_4_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(io__close_output_3_0,
		hlds__passes_aux__dump_hlds_4_0_i21);
MR_def_label(hlds__passes_aux__dump_hlds_4_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_r2 = (MR_Word) MR_string_const(" done.\n", 7);
	MR_np_call_localret_ent(libs__file_util__maybe_write_string_4_0,
		hlds__passes_aux__dump_hlds_4_0_i22);
MR_def_label(hlds__passes_aux__dump_hlds_4_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(libs__file_util__maybe_report_stats_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(libs__globals__lookup_accumulating_option_3_0);
MR_decl_entry(libs__globals__lookup_string_option_3_0);
MR_decl_entry(hlds__hlds_module__module_info_get_dump_hlds_base_file_name_2_0);
MR_decl_entry(__Unify___hlds__hlds_module__module_info_0_0);
MR_decl_entry(io__remove_file_4_0);
MR_decl_entry(io__write_string_4_0);
MR_decl_entry(fn__string__remove_suffix_det_2_0);
MR_decl_entry(benchmarking__write_out_trace_counts_4_0);
MR_decl_entry(io__nl_2_0);
MR_decl_entry(io__flush_output_2_0);

MR_BEGIN_MODULE(hlds__passes_aux_module20)
	MR_init_entry1(hlds__passes_aux__maybe_dump_hlds_7_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__passes_aux__maybe_dump_hlds_7_0);
	MR_init_label10(hlds__passes_aux__maybe_dump_hlds_7_0,2,3,4,5,6,7,10,12,13,14)
	MR_init_label10(hlds__passes_aux__maybe_dump_hlds_7_0,15,16,17,21,23,26,27,28,29,25)
	MR_init_label10(hlds__passes_aux__maybe_dump_hlds_7_0,31,34,35,36,37,38,33,41,42,43)
	MR_init_label10(hlds__passes_aux__maybe_dump_hlds_7_0,44,45,18,19,47,8,52,54,55,56)
	MR_init_label10(hlds__passes_aux__maybe_dump_hlds_7_0,57,58,59,60,61,64,65,66,63,68)
	MR_init_label3(hlds__passes_aux__maybe_dump_hlds_7_0,69,70,51)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'maybe_dump_hlds'/7 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__hlds__passes_aux__maybe_dump_hlds_7_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(10);
	MR_sv(10) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(9) = MR_r4;
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_globals_2_0,
		hlds__passes_aux__maybe_dump_hlds_7_0_i2);
MR_def_label(hlds__passes_aux__maybe_dump_hlds_7_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r2 = (MR_Integer) 39;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		hlds__passes_aux__maybe_dump_hlds_7_0_i3);
MR_def_label(hlds__passes_aux__maybe_dump_hlds_7_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = (MR_Integer) 126;
	MR_np_call_localret_ent(libs__globals__lookup_accumulating_option_3_0,
		hlds__passes_aux__maybe_dump_hlds_7_0_i4);
MR_def_label(hlds__passes_aux__maybe_dump_hlds_7_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = (MR_Integer) 125;
	MR_np_call_localret_ent(libs__globals__lookup_accumulating_option_3_0,
		hlds__passes_aux__maybe_dump_hlds_7_0_i5);
MR_def_label(hlds__passes_aux__maybe_dump_hlds_7_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = (MR_Integer) 131;
	MR_np_call_localret_ent(libs__globals__lookup_string_option_3_0,
		hlds__passes_aux__maybe_dump_hlds_7_0_i6);
MR_def_label(hlds__passes_aux__maybe_dump_hlds_7_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(fn__hlds__passes_aux__stage_num_str_1_0,
		hlds__passes_aux__maybe_dump_hlds_7_0_i7);
MR_def_label(hlds__passes_aux__maybe_dump_hlds_7_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(6);
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__passes_aux__should_dump_stage_4_0,
		hlds__passes_aux__maybe_dump_hlds_7_0_i10);
MR_def_label(hlds__passes_aux__maybe_dump_hlds_7_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(hlds__passes_aux__maybe_dump_hlds_7_0_i8);
	}
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_dump_hlds_base_file_name_2_0,
		hlds__passes_aux__maybe_dump_hlds_7_0_i12);
MR_def_label(hlds__passes_aux__maybe_dump_hlds_7_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(8);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		hlds__passes_aux__maybe_dump_hlds_7_0_i13);
MR_def_label(hlds__passes_aux__maybe_dump_hlds_7_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("-", 1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		hlds__passes_aux__maybe_dump_hlds_7_0_i14);
MR_def_label(hlds__passes_aux__maybe_dump_hlds_7_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		hlds__passes_aux__maybe_dump_hlds_7_0_i15);
MR_def_label(hlds__passes_aux__maybe_dump_hlds_7_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const(".", 1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		hlds__passes_aux__maybe_dump_hlds_7_0_i16);
MR_def_label(hlds__passes_aux__maybe_dump_hlds_7_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		hlds__passes_aux__maybe_dump_hlds_7_0_i17);
MR_def_label(hlds__passes_aux__maybe_dump_hlds_7_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_sv(9),0,0)) {
		MR_GOTO_LAB(hlds__passes_aux__maybe_dump_hlds_7_0_i19);
	}
	MR_sv(2) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(9);
	MR_sv(3) = MR_tfield(1, MR_tempr1, 0);
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tfield(1, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(__Unify___hlds__hlds_module__module_info_0_0,
		hlds__passes_aux__maybe_dump_hlds_7_0_i21);
MR_def_label(hlds__passes_aux__maybe_dump_hlds_7_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(hlds__passes_aux__maybe_dump_hlds_7_0_i18);
	}
	MR_r1 = MR_sv(4);
	MR_r2 = (MR_Integer) 132;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		hlds__passes_aux__maybe_dump_hlds_7_0_i23);
MR_def_label(hlds__passes_aux__maybe_dump_hlds_7_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(hlds__passes_aux__maybe_dump_hlds_7_0_i25);
	}
	MR_r1 = MR_sv(5);
	MR_r2 = (MR_Word) MR_string_const("% HLDS dump \140", 13);
	MR_np_call_localret_ent(libs__file_util__maybe_write_string_4_0,
		hlds__passes_aux__maybe_dump_hlds_7_0_i26);
MR_def_label(hlds__passes_aux__maybe_dump_hlds_7_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(libs__file_util__maybe_write_string_4_0,
		hlds__passes_aux__maybe_dump_hlds_7_0_i27);
MR_def_label(hlds__passes_aux__maybe_dump_hlds_7_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	MR_r2 = (MR_Word) MR_string_const("\' would be identical ", 21);
	MR_np_call_localret_ent(libs__file_util__maybe_write_string_4_0,
		hlds__passes_aux__maybe_dump_hlds_7_0_i28);
MR_def_label(hlds__passes_aux__maybe_dump_hlds_7_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	MR_r2 = (MR_Word) MR_string_const("to previous dump.\n", 18);
	MR_np_call_localret_ent(libs__file_util__maybe_write_string_4_0,
		hlds__passes_aux__maybe_dump_hlds_7_0_i29);
MR_def_label(hlds__passes_aux__maybe_dump_hlds_7_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(io__remove_file_4_0,
		hlds__passes_aux__maybe_dump_hlds_7_0_i51);
MR_def_label(hlds__passes_aux__maybe_dump_hlds_7_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(io__open_output_4_0,
		hlds__passes_aux__maybe_dump_hlds_7_0_i31);
MR_def_label(hlds__passes_aux__maybe_dump_hlds_7_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,1)) {
		MR_GOTO_LAB(hlds__passes_aux__maybe_dump_hlds_7_0_i33);
	}
	MR_sv(4) = MR_tfield(1, MR_r1, 0);
	MR_r1 = MR_sv(5);
	MR_r2 = (MR_Word) MR_string_const("\n", 1);
	MR_np_call_localret_ent(libs__file_util__maybe_write_string_4_0,
		hlds__passes_aux__maybe_dump_hlds_7_0_i34);
MR_def_label(hlds__passes_aux__maybe_dump_hlds_7_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(fn__io__error_message_1_0,
		hlds__passes_aux__maybe_dump_hlds_7_0_i35);
MR_def_label(hlds__passes_aux__maybe_dump_hlds_7_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("\' for output: ", 14);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		hlds__passes_aux__maybe_dump_hlds_7_0_i36);
MR_def_label(hlds__passes_aux__maybe_dump_hlds_7_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		hlds__passes_aux__maybe_dump_hlds_7_0_i37);
MR_def_label(hlds__passes_aux__maybe_dump_hlds_7_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("can\'t open file \140", 17);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		hlds__passes_aux__maybe_dump_hlds_7_0_i38);
MR_def_label(hlds__passes_aux__maybe_dump_hlds_7_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(libs__file_util__report_error_3_0,
		hlds__passes_aux__maybe_dump_hlds_7_0_i45);
MR_def_label(hlds__passes_aux__maybe_dump_hlds_7_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_tfield(0, MR_r1, 0);
	MR_r1 = MR_sv(3);
	MR_r2 = (MR_Word) MR_string_const(".\n", 2);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		hlds__passes_aux__maybe_dump_hlds_7_0_i41);
MR_def_label(hlds__passes_aux__maybe_dump_hlds_7_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("to the stage in ", 16);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		hlds__passes_aux__maybe_dump_hlds_7_0_i42);
MR_def_label(hlds__passes_aux__maybe_dump_hlds_7_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("This stage is identical ", 24);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		hlds__passes_aux__maybe_dump_hlds_7_0_i43);
MR_def_label(hlds__passes_aux__maybe_dump_hlds_7_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(io__write_string_4_0,
		hlds__passes_aux__maybe_dump_hlds_7_0_i44);
MR_def_label(hlds__passes_aux__maybe_dump_hlds_7_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(io__close_output_3_0,
		hlds__passes_aux__maybe_dump_hlds_7_0_i45);
MR_def_label(hlds__passes_aux__maybe_dump_hlds_7_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(3);
	MR_tfield(1, MR_tempr1, 1) = MR_sv(1);
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(10);
	}
MR_def_label(hlds__passes_aux__maybe_dump_hlds_7_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
MR_def_label(hlds__passes_aux__maybe_dump_hlds_7_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(hlds__passes_aux__dump_hlds_4_0,
		hlds__passes_aux__maybe_dump_hlds_7_0_i47);
MR_def_label(hlds__passes_aux__maybe_dump_hlds_7_0,47)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr1, 1) = MR_sv(1);
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(10);
	}
MR_def_label(hlds__passes_aux__maybe_dump_hlds_7_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(6);
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(7);
	MR_np_call_localret_ent(hlds__passes_aux__should_dump_stage_4_0,
		hlds__passes_aux__maybe_dump_hlds_7_0_i52);
MR_def_label(hlds__passes_aux__maybe_dump_hlds_7_0,52)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(hlds__passes_aux__maybe_dump_hlds_7_0_i51);
	}
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_dump_hlds_base_file_name_2_0,
		hlds__passes_aux__maybe_dump_hlds_7_0_i54);
MR_def_label(hlds__passes_aux__maybe_dump_hlds_7_0,54)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const(".hlds_dump", 10);
	MR_np_call_localret_ent(fn__string__remove_suffix_det_2_0,
		hlds__passes_aux__maybe_dump_hlds_7_0_i55);
MR_def_label(hlds__passes_aux__maybe_dump_hlds_7_0,55)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(8);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		hlds__passes_aux__maybe_dump_hlds_7_0_i56);
MR_def_label(hlds__passes_aux__maybe_dump_hlds_7_0,56)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("-", 1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		hlds__passes_aux__maybe_dump_hlds_7_0_i57);
MR_def_label(hlds__passes_aux__maybe_dump_hlds_7_0,57)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		hlds__passes_aux__maybe_dump_hlds_7_0_i58);
MR_def_label(hlds__passes_aux__maybe_dump_hlds_7_0,58)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const(".trace_counts.", 14);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		hlds__passes_aux__maybe_dump_hlds_7_0_i59);
MR_def_label(hlds__passes_aux__maybe_dump_hlds_7_0,59)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		hlds__passes_aux__maybe_dump_hlds_7_0_i60);
MR_def_label(hlds__passes_aux__maybe_dump_hlds_7_0,60)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(benchmarking__write_out_trace_counts_4_0,
		hlds__passes_aux__maybe_dump_hlds_7_0_i61);
MR_def_label(hlds__passes_aux__maybe_dump_hlds_7_0,61)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(hlds__passes_aux__maybe_dump_hlds_7_0_i63);
	}
	MR_r1 = MR_sv(5);
	MR_r2 = (MR_Word) MR_string_const("% Dumped trace counts to \140", 26);
	MR_np_call_localret_ent(libs__file_util__maybe_write_string_4_0,
		hlds__passes_aux__maybe_dump_hlds_7_0_i64);
MR_def_label(hlds__passes_aux__maybe_dump_hlds_7_0,64)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(libs__file_util__maybe_write_string_4_0,
		hlds__passes_aux__maybe_dump_hlds_7_0_i65);
MR_def_label(hlds__passes_aux__maybe_dump_hlds_7_0,65)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	MR_r2 = (MR_Word) MR_string_const("\'\n", 2);
	MR_np_call_localret_ent(libs__file_util__maybe_write_string_4_0,
		hlds__passes_aux__maybe_dump_hlds_7_0_i66);
MR_def_label(hlds__passes_aux__maybe_dump_hlds_7_0,66)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(libs__file_util__maybe_flush_output_3_0,
		hlds__passes_aux__maybe_dump_hlds_7_0_i51);
MR_def_label(hlds__passes_aux__maybe_dump_hlds_7_0,63)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_tfield(1, MR_r1, 0);
	MR_r1 = (MR_Word) MR_string_const("% ", 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__passes_aux__maybe_dump_hlds_7_0_i68);
MR_def_label(hlds__passes_aux__maybe_dump_hlds_7_0,68)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__passes_aux__maybe_dump_hlds_7_0_i69);
MR_def_label(hlds__passes_aux__maybe_dump_hlds_7_0,69)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__nl_2_0,
		hlds__passes_aux__maybe_dump_hlds_7_0_i70);
MR_def_label(hlds__passes_aux__maybe_dump_hlds_7_0,70)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__flush_output_2_0,
		hlds__passes_aux__maybe_dump_hlds_7_0_i51);
MR_def_label(hlds__passes_aux__maybe_dump_hlds_7_0,51)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(9);
	MR_decr_sp_and_return(10);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__hlds_module__module_info_pred_info_3_0);
MR_decl_entry(hlds__hlds_pred__pred_info_is_imported_1_0);
MR_declare_entry(mercury__do_call_closure_4);
MR_decl_entry(hlds__hlds_module__module_info_set_pred_info_4_0);

MR_BEGIN_MODULE(hlds__passes_aux_module21)
	MR_init_entry1(hlds__passes_aux__process_nonimported_pred_7_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__passes_aux__process_nonimported_pred_7_0);
	MR_init_label7(hlds__passes_aux__process_nonimported_pred_7_0,2,8,6,12,3,14,15)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'process_nonimported_pred'/7 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__passes_aux__process_nonimported_pred_7_0)
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
		hlds__passes_aux__process_nonimported_pred_7_0_i2);
MR_def_label(hlds__passes_aux__process_nonimported_pred_7_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_is_imported_1_0,
		hlds__passes_aux__process_nonimported_pred_7_0_i8);
MR_def_label(hlds__passes_aux__process_nonimported_pred_7_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(hlds__passes_aux__process_nonimported_pred_7_0_i6);
	}
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(6);
	MR_decr_sp_and_return(7);
MR_def_label(hlds__passes_aux__process_nonimported_pred_7_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(4);
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(hlds__passes_aux__process_nonimported_pred_7_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_1),
		mercury__hlds__passes_aux__process_nonimported_pred_7_0_i12);
MR_def_label(hlds__passes_aux__process_nonimported_pred_7_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(hlds__passes_aux__process_nonimported_pred_7_0_i3);
	}
	MR_r1 = MR_sv(4);
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(6);
	MR_decr_sp_and_return(7);
MR_def_label(hlds__passes_aux__process_nonimported_pred_7_0,3)
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
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(hlds__passes_aux__process_nonimported_pred_7_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_4),
		mercury__hlds__passes_aux__process_nonimported_pred_7_0_i14);
MR_def_label(hlds__passes_aux__process_nonimported_pred_7_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r3;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_module__module_info_set_pred_info_4_0,
		hlds__passes_aux__process_nonimported_pred_7_0_i15);
MR_def_label(hlds__passes_aux__process_nonimported_pred_7_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_decr_sp_and_return(7);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__passes_aux_module22)
	MR_init_entry1(__Unify___hlds__passes_aux__dump_info_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___hlds__passes_aux__dump_info_0_0);
	MR_init_label3(__Unify___hlds__passes_aux__dump_info_0_0,12,5,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___hlds__passes_aux__dump_info_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___hlds__passes_aux__dump_info_0_0_i12);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_tempr1;
	MR_sv(2) = MR_r2;
	if (MR_LTAGS_TESTR(MR_tempr1,0,0)) {
		MR_GOTO_LAB(__Unify___hlds__passes_aux__dump_info_0_0_i5);
	}
	MR_r1 = (MR_sv(2) == MR_tempr1);
	MR_decr_sp(3);
	MR_proceed();
	}
MR_def_label(__Unify___hlds__passes_aux__dump_info_0_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___hlds__passes_aux__dump_info_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_sv(2),0,0)) {
		MR_GOTO_LAB(__Unify___hlds__passes_aux__dump_info_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr3 = MR_sv(1);
	MR_tempr1 = MR_tfield(1, MR_tempr3, 0);
	MR_tempr4 = MR_sv(2);
	MR_tempr2 = MR_tfield(1, MR_tempr4, 0);
	if ((strcmp((char *) (MR_Word *) MR_tempr1, (char *) (MR_Word *) MR_tempr2) != 0)) {
		MR_GOTO_LAB(__Unify___hlds__passes_aux__dump_info_0_0_i1);
	}
	MR_r1 = MR_tfield(1, MR_tempr3, 1);
	MR_r2 = MR_tfield(1, MR_tempr4, 1);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Unify___hlds__hlds_module__module_info_0_0);
	}
MR_def_label(__Unify___hlds__passes_aux__dump_info_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(private_builtin__builtin_compare_string_3_0);
MR_decl_entry(__Compare___hlds__hlds_module__module_info_0_0);

MR_BEGIN_MODULE(hlds__passes_aux_module23)
	MR_init_entry1(__Compare___hlds__passes_aux__dump_info_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___hlds__passes_aux__dump_info_0_0);
	MR_init_label6(__Compare___hlds__passes_aux__dump_info_0_0,24,7,5,9,11,16)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___hlds__passes_aux__dump_info_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___hlds__passes_aux__dump_info_0_0_i24);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	if (MR_LTAGS_TESTR(MR_sv(1),0,0)) {
		MR_GOTO_LAB(__Compare___hlds__passes_aux__dump_info_0_0_i5);
	}
	if (MR_LTAGS_TESTR(MR_sv(2),0,0)) {
		MR_GOTO_LAB(__Compare___hlds__passes_aux__dump_info_0_0_i7);
	}
MR_def_label(__Compare___hlds__passes_aux__dump_info_0_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___hlds__passes_aux__dump_info_0_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___hlds__passes_aux__dump_info_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,0)) {
		MR_GOTO_LAB(__Compare___hlds__passes_aux__dump_info_0_0_i9);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___hlds__passes_aux__dump_info_0_0,9)
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
	MR_np_call_localret_ent(private_builtin__builtin_compare_string_3_0,
		__Compare___hlds__passes_aux__dump_info_0_0_i11);
MR_def_label(__Compare___hlds__passes_aux__dump_info_0_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___hlds__passes_aux__dump_info_0_0_i16);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(1);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Compare___hlds__hlds_module__module_info_0_0);
MR_def_label(__Compare___hlds__passes_aux__dump_info_0_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(private_builtin__builtin_unify_pred_2_0);

MR_BEGIN_MODULE(hlds__passes_aux_module24)
	MR_init_entry1(__Unify___hlds__passes_aux__pred_error_task_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___hlds__passes_aux__pred_error_task_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
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

MR_BEGIN_MODULE(hlds__passes_aux_module25)
	MR_init_entry1(__Compare___hlds__passes_aux__pred_error_task_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___hlds__passes_aux__pred_error_task_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
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

MR_BEGIN_MODULE(hlds__passes_aux_module26)
	MR_init_entry1(__Unify___hlds__passes_aux__task_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___hlds__passes_aux__task_0_0);
	MR_init_label10(__Unify___hlds__passes_aux__task_0_0,23,35,39,46,5,9,11,15,19,27)
	MR_init_label3(__Unify___hlds__passes_aux__task_0_0,31,47,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
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
	MR_r1 = MR_tfield(0, MR_sv(1), 0);
	MR_r2 = MR_tfield(0, MR_sv(2), 0);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(private_builtin__builtin_unify_pred_2_0);
MR_def_label(__Unify___hlds__passes_aux__task_0_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Unify___hlds__passes_aux__task_0_0_i1);
	}
	MR_r1 = MR_tfield(1, MR_sv(1), 0);
	MR_r2 = MR_tfield(1, MR_sv(2), 0);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(private_builtin__builtin_unify_pred_2_0);
MR_def_label(__Unify___hlds__passes_aux__task_0_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),2)) {
		MR_GOTO_LAB(__Unify___hlds__passes_aux__task_0_0_i1);
	}
	MR_r1 = MR_tfield(2, MR_sv(1), 0);
	MR_r2 = MR_tfield(2, MR_sv(2), 0);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(private_builtin__builtin_unify_pred_2_0);
MR_def_label(__Unify___hlds__passes_aux__task_0_0,46)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tfield(3, MR_sv(1), 0),
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
	MR_r1 = MR_tfield(3, MR_sv(1), 1);
	MR_r2 = MR_tfield(3, MR_sv(2), 1);
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
	MR_sv(1) = MR_tfield(3, MR_tempr1, 2);
	MR_tempr2 = MR_sv(2);
	MR_sv(2) = MR_tfield(3, MR_tempr2, 2);
	MR_r1 = MR_tfield(3, MR_tempr1, 1);
	MR_r2 = MR_tfield(3, MR_tempr2, 1);
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
	MR_r1 = MR_tfield(3, MR_sv(1), 1);
	MR_r2 = MR_tfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(private_builtin__builtin_unify_pred_2_0);
MR_def_label(__Unify___hlds__passes_aux__task_0_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,2)) {
		MR_GOTO_LAB(__Unify___hlds__passes_aux__task_0_0_i1);
	}
	MR_r1 = MR_tfield(3, MR_sv(1), 1);
	MR_r2 = MR_tfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(private_builtin__builtin_unify_pred_2_0);
MR_def_label(__Unify___hlds__passes_aux__task_0_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,1)) {
		MR_GOTO_LAB(__Unify___hlds__passes_aux__task_0_0_i1);
	}
	MR_r1 = MR_tfield(3, MR_sv(1), 1);
	MR_r2 = MR_tfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(private_builtin__builtin_unify_pred_2_0);
MR_def_label(__Unify___hlds__passes_aux__task_0_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,0)) {
		MR_GOTO_LAB(__Unify___hlds__passes_aux__task_0_0_i1);
	}
	MR_r1 = MR_tfield(3, MR_sv(1), 1);
	MR_r2 = MR_tfield(3, MR_sv(2), 1);
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

MR_BEGIN_MODULE(hlds__passes_aux_module27)
	MR_init_entry1(__Compare___hlds__passes_aux__task_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___hlds__passes_aux__task_0_0);
	MR_init_label10(__Compare___hlds__passes_aux__task_0_0,3,74,122,138,148,157,5,21,26,42)
	MR_init_label8(__Compare___hlds__passes_aux__task_0_0,58,90,106,117,121,113,114,218)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
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
	MR_r1 = MR_mask_field(MR_sv(1), 0);
	MR_r2 = MR_mask_field(MR_sv(2), 0);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(private_builtin__builtin_compare_pred_3_0);
MR_def_label(__Compare___hlds__passes_aux__task_0_0,157)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tfield(3, MR_sv(1), 0),
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
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tfield(3, MR_sv(2), 0),
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
	if (MR_INT_NE(MR_tfield(3, MR_sv(2), 0),5)) {
		MR_GOTO_LAB(__Compare___hlds__passes_aux__task_0_0_i117);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(1);
	MR_tempr1 = MR_tfield(3, MR_tempr5, 2);
	MR_tempr6 = MR_sv(2);
	MR_tempr2 = MR_tfield(3, MR_tempr6, 2);
	MR_tempr3 = MR_tempr5;
	MR_sv(1) = MR_tempr2;
	MR_tempr4 = MR_tempr6;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_tfield(3, MR_tempr3, 1);
	MR_r2 = MR_tfield(3, MR_tempr4, 1);
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
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tfield(3, MR_sv(2), 0),
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
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tfield(3, MR_sv(2), 0),
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
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tfield(3, MR_sv(2), 0),
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
	if (MR_INT_EQ(MR_tfield(3, MR_sv(2), 0),0)) {
		MR_GOTO_LAB(__Compare___hlds__passes_aux__task_0_0_i114);
	}
MR_def_label(__Compare___hlds__passes_aux__task_0_0,113)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___hlds__passes_aux__task_0_0,114)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(3, MR_sv(1), 1);
	MR_r2 = MR_tfield(3, MR_sv(2), 1);
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


MR_BEGIN_MODULE(hlds__passes_aux_module28)
	MR_init_entry1(hlds__passes_aux__IntroducedFrom__pred__process_all_nonimported_procs_errors__211__1_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__passes_aux__IntroducedFrom__pred__process_all_nonimported_procs_errors__211__1_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__pred__process_all_nonimported_procs_errors__211__1'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__passes_aux__IntroducedFrom__pred__process_all_nonimported_procs_errors__211__1_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(f_104_108_100_115_95_95_112_97_115_115_101_115_95_97_117_120_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_97_108_108_95_110_111_110_105_109_112_111_114_116_101_100_95_112_114_111_99_115_95_101_114_114_111_114_115_95_95_50_49_49_95_95_49_95_95_91_49_93_95_48_1_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___list__list_1_0);

MR_BEGIN_MODULE(hlds__passes_aux_module29)
	MR_init_entry1(hlds__passes_aux__IntroducedFrom__pred__process_all_nonimported_procs__217__1_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__passes_aux__IntroducedFrom__pred__process_all_nonimported_procs__217__1_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__pred__process_all_nonimported_procs__217__1'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__passes_aux__IntroducedFrom__pred__process_all_nonimported_procs__217__1_2_0)
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


MR_BEGIN_MODULE(hlds__passes_aux_module30)
	MR_init_entry1(hlds__passes_aux__IntroducedFrom__pred__process_all_nonimported_procs_update__228__1_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__passes_aux__IntroducedFrom__pred__process_all_nonimported_procs_update__228__1_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__pred__process_all_nonimported_procs_update__228__1'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__passes_aux__IntroducedFrom__pred__process_all_nonimported_procs_update__228__1_2_0)
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


MR_BEGIN_MODULE(hlds__passes_aux_module31)
	MR_init_entry1(hlds__passes_aux__IntroducedFrom__pred__process_matching_nonimported_procs__245__1_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__passes_aux__IntroducedFrom__pred__process_matching_nonimported_procs__245__1_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__pred__process_matching_nonimported_procs__245__1'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__passes_aux__IntroducedFrom__pred__process_matching_nonimported_procs__245__1_2_0)
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


MR_BEGIN_MODULE(hlds__passes_aux_module32)
	MR_init_entry1(hlds__passes_aux__IntroducedFrom__pred__process_matching_nonimported_procs_update__258__1_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__passes_aux__IntroducedFrom__pred__process_matching_nonimported_procs_update__258__1_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__pred__process_matching_nonimported_procs_update__258__1'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__passes_aux__IntroducedFrom__pred__process_matching_nonimported_procs_update__258__1_2_0)
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


MR_BEGIN_MODULE(hlds__passes_aux_module33)
	MR_init_entry1(hlds__passes_aux__process_nonimported_procs_in_preds__ho3_8_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__passes_aux__process_nonimported_procs_in_preds__ho3_8_0);
	MR_init_label6(hlds__passes_aux__process_nonimported_procs_in_preds__ho3_8_0,13,3,4,5,6,7)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'process_nonimported_procs_in_preds__ho3'/8 mode 0 */
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
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(2) = MR_tempr1;
	MR_sv(3) = MR_tfield(1, MR_r1, 0);
	MR_sv(4) = MR_tfield(1, MR_r1, 1);
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


MR_BEGIN_MODULE(hlds__passes_aux_module34)
	MR_init_entry1(hlds__passes_aux__process_nonimported_procs_in_preds__ho4_8_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__passes_aux__process_nonimported_procs_in_preds__ho4_8_0);
	MR_init_label6(hlds__passes_aux__process_nonimported_procs_in_preds__ho4_8_0,13,3,4,5,6,7)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'process_nonimported_procs_in_preds__ho4'/8 mode 0 */
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
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(2) = MR_tempr1;
	MR_sv(3) = MR_tfield(1, MR_r1, 0);
	MR_sv(4) = MR_tfield(1, MR_r1, 1);
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


MR_BEGIN_MODULE(hlds__passes_aux_module35)
	MR_init_entry1(f_104_108_100_115_95_95_112_97_115_115_101_115_95_97_117_120_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_97_108_108_95_110_111_110_105_109_112_111_114_116_101_100_95_112_114_111_99_115_95_101_114_114_111_114_115_95_95_50_49_49_95_95_49_95_95_91_49_93_95_48_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__f_104_108_100_115_95_95_112_97_115_115_101_115_95_97_117_120_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_97_108_108_95_110_111_110_105_109_112_111_114_116_101_100_95_112_114_111_99_115_95_101_114_114_111_114_115_95_95_50_49_49_95_95_49_95_95_91_49_93_95_48_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__pred__IntroducedFrom__pred__process_all_nonimported_procs_errors__211__1__[1]_0'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(f_104_108_100_115_95_95_112_97_115_115_101_115_95_97_117_120_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_97_108_108_95_110_111_110_105_109_112_111_114_116_101_100_95_112_114_111_99_115_95_101_114_114_111_114_115_95_95_50_49_49_95_95_49_95_95_91_49_93_95_48_1_0)
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
		mercury_data_hlds__passes_aux__type_ctor_info_dump_info_0,
		hlds__passes_aux__dump_info_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_hlds__passes_aux__type_ctor_info_pred_error_task_0,
		hlds__passes_aux__pred_error_task_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_hlds__passes_aux__type_ctor_info_task_0,
		hlds__passes_aux__task_0_0);
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
		&mercury_data_hlds__passes_aux__type_ctor_info_dump_info_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_hlds__passes_aux__type_ctor_info_pred_error_task_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_hlds__passes_aux__type_ctor_info_task_0);
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
