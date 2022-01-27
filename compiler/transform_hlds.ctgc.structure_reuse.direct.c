/*
** Automatically generated from `structure_reuse.direct.m'
** by the Mercury compiler,
** version rotd-2013-03-18, configured for x86_64-apple-darwin12.2.1.
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
INIT mercury__transform_hlds__ctgc__structure_reuse__direct__init
ENDINIT
*/

#define MR_ALLOW_RESET
#include "mercury_imp.h"
#line 526 "../library/io.int"
#include "io.mh"

#line 28 "transform_hlds.ctgc.structure_reuse.direct.c"
#line 536 "../library/io.int"
#include "time.mh"

#line 32 "transform_hlds.ctgc.structure_reuse.direct.c"
#line 537 "../library/io.int"
#include "string.mh"

#line 36 "transform_hlds.ctgc.structure_reuse.direct.c"
#line 33 "../library/array.int2"
#include "array.mh"

#line 40 "transform_hlds.ctgc.structure_reuse.direct.c"
#line 39 "../mdbcomp/mdbcomp.rtti_access.int2"
#include "mdbcomp.rtti_access.mh"

#line 44 "transform_hlds.ctgc.structure_reuse.direct.c"
#line 31 "../library/bitmap.int2"
#include "bitmap.mh"

#line 48 "transform_hlds.ctgc.structure_reuse.direct.c"
#line 49 "transform_hlds.ctgc.structure_reuse.direct.c"
#include "transform_hlds.ctgc.structure_reuse.direct.mh"

#line 52 "transform_hlds.ctgc.structure_reuse.direct.c"
#line 53 "transform_hlds.ctgc.structure_reuse.direct.c"
#ifndef TRANSFORM_HLDS__CTGC__STRUCTURE_REUSE__DIRECT_DECL_GUARD
#define TRANSFORM_HLDS__CTGC__STRUCTURE_REUSE__DIRECT_DECL_GUARD

#line 57 "transform_hlds.ctgc.structure_reuse.direct.c"
#line 58 "transform_hlds.ctgc.structure_reuse.direct.c"

#endif
#line 61 "transform_hlds.ctgc.structure_reuse.direct.c"

#ifdef _MSC_VER
#define MR_STATIC_LINKAGE extern
#else
#define MR_STATIC_LINKAGE static
#endif


#ifdef MR_MSVC
#pragma pack(push, MR_BYTES_PER_WORD)
#endif
struct mercury_type_0 {
	MR_Word * f1[3];
};
#ifdef MR_MSVC
#pragma pack(pop)
#endif
MR_STATIC_LINKAGE const struct mercury_type_0 mercury_common_0[];


#ifdef MR_MSVC
#pragma pack(push, MR_BYTES_PER_WORD)
#endif
struct mercury_type_1 {
	MR_Word * f1;
	MR_Word * f2;
	MR_Integer f3;
	MR_Word * f4;
	MR_Word * f5;
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
	MR_Integer f2;
	MR_Word * f3[6];
};
#ifdef MR_MSVC
#pragma pack(pop)
#endif
MR_STATIC_LINKAGE const struct mercury_type_2 mercury_common_2[];


#ifdef MR_MSVC
#pragma pack(push, MR_BYTES_PER_WORD)
#endif
struct mercury_type_3 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[7];
};
#ifdef MR_MSVC
#pragma pack(pop)
#endif
MR_STATIC_LINKAGE const struct mercury_type_3 mercury_common_3[];


#ifdef MR_MSVC
#pragma pack(push, MR_BYTES_PER_WORD)
#endif
struct mercury_type_4 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[4];
};
#ifdef MR_MSVC
#pragma pack(pop)
#endif
MR_STATIC_LINKAGE const struct mercury_type_4 mercury_common_4[];


#ifdef MR_MSVC
#pragma pack(push, MR_BYTES_PER_WORD)
#endif
struct mercury_type_5 {
	MR_Word * f1;
	MR_Code * f2;
	MR_Integer f3;
};
#ifdef MR_MSVC
#pragma pack(pop)
#endif
MR_STATIC_LINKAGE const struct mercury_type_5 mercury_common_5[];

extern const MR_TypeCtorInfo_Struct
	mercury_data_transform_hlds__ctgc__structure_reuse__direct__type_ctor_info_dead_cell_table_0;
MR_decl_label4(transform_hlds__ctgc__structure_reuse__direct__dead_cell_entry_dump_4_0, 4,2,7,9)
MR_decl_label2(transform_hlds__ctgc__structure_reuse__direct__dead_cell_table_add_unconditional_4_0, 4,2)
MR_decl_label3(transform_hlds__ctgc__structure_reuse__direct__dead_cell_table_maybe_dump_4_0, 4,6,18)
MR_decl_label1(transform_hlds__ctgc__structure_reuse__direct__dead_cell_table_remove_3_0, 2)
MR_decl_label1(transform_hlds__ctgc__structure_reuse__direct__dead_cell_table_remove_conditionals_2_0, 2)
MR_decl_label2(transform_hlds__ctgc__structure_reuse__direct__direct_reuse_pass_5_0, 2,4)
MR_decl_label9(transform_hlds__ctgc__structure_reuse__direct__direct_reuse_process_pred_6_0, 2,4,3,7,9,11,12,6,13)
MR_decl_label10(transform_hlds__ctgc__structure_reuse__direct__direct_reuse_process_proc_7_0, 2,3,4,5,6,9,10,11,12,13)
MR_decl_label9(transform_hlds__ctgc__structure_reuse__direct__direct_reuse_process_proc_2_8_0, 2,3,4,5,6,7,8,9,10)
MR_def_extern_entry(transform_hlds__ctgc__structure_reuse__direct__direct_reuse_pass_5_0)
MR_def_extern_entry(transform_hlds__ctgc__structure_reuse__direct__direct_reuse_process_specific_procs_6_0)
MR_def_extern_entry(transform_hlds__ctgc__structure_reuse__direct__direct_reuse_process_pred_6_0)
MR_def_extern_entry(transform_hlds__ctgc__structure_reuse__direct__set_external_pred_reuse_as_6_0)
MR_def_extern_entry(transform_hlds__ctgc__structure_reuse__direct__dead_cell_table_maybe_dump_4_0)
MR_def_extern_entry(transform_hlds__ctgc__structure_reuse__direct__direct_reuse_process_proc_2_8_0)
MR_def_extern_entry(transform_hlds__ctgc__structure_reuse__direct__direct_reuse_process_proc_7_0)
MR_def_extern_entry(transform_hlds__ctgc__structure_reuse__direct__direct_reuse_process_ppid_6_0)
MR_def_extern_entry(fn__transform_hlds__ctgc__structure_reuse__direct__dead_cell_table_init_0_0)
MR_def_extern_entry(transform_hlds__ctgc__structure_reuse__direct__dead_cell_table_is_empty_1_0)
MR_def_extern_entry(fn__transform_hlds__ctgc__structure_reuse__direct__dead_cell_table_search_2_0)
MR_def_extern_entry(transform_hlds__ctgc__structure_reuse__direct__dead_cell_table_set_4_0)
MR_def_extern_entry(transform_hlds__ctgc__structure_reuse__direct__dead_cell_table_remove_3_0)
MR_def_extern_entry(transform_hlds__ctgc__structure_reuse__direct__dead_cell_table_remove_conditionals_2_0)
MR_def_extern_entry(transform_hlds__ctgc__structure_reuse__direct__dead_cell_table_add_unconditional_4_0)
MR_def_extern_entry(transform_hlds__ctgc__structure_reuse__direct__dead_cell_entry_dump_4_0)
MR_def_extern_entry(__Unify___transform_hlds__ctgc__structure_reuse__direct__dead_cell_table_0_0)
MR_def_extern_entry(__Compare___transform_hlds__ctgc__structure_reuse__direct__dead_cell_table_0_0)

extern const MR_TypeCtorInfo_Struct mercury_data_tree234__type_ctor_info_tree234_2;
extern const MR_TypeCtorInfo_Struct mercury_data_transform_hlds__smm_common__type_ctor_info_program_point_0;
extern const MR_TypeCtorInfo_Struct mercury_data_transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_reuse_condition_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_pred_proc_id_0;
extern const MR_TypeCtorInfo_Struct mercury_data_transform_hlds__ctgc__structure_sharing__domain__type_ctor_info_sharing_as_and_status_0;
extern const MR_TypeCtorInfo_Struct mercury_data_transform_hlds__smm_common__type_ctor_info_program_point_0;
extern const MR_TypeCtorInfo_Struct mercury_data_transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_reuse_condition_0;
static const struct mercury_type_0 mercury_common_0[3] =
{
{
{
MR_CTOR_ADDR(tree234, tree234, 2),
MR_CTOR0_ADDR(transform_hlds__smm_common, program_point),
MR_CTOR0_ADDR(transform_hlds__ctgc__structure_reuse__domain, reuse_condition)
}
},
{
{
MR_CTOR_ADDR(tree234, tree234, 2),
MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id),
MR_CTOR0_ADDR(transform_hlds__ctgc__structure_sharing__domain, sharing_as_and_status)
}
},
{
{
MR_CTOR_ADDR(tree234, tree234, 2),
MR_CTOR0_ADDR(transform_hlds__smm_common, program_point),
MR_CTOR0_ADDR(transform_hlds__ctgc__structure_reuse__domain, reuse_condition)
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__ctgc__structure_reuse__direct__direct_reuse_pass_5_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_module__type_ctor_info_module_info_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_pred_id_0;
static const struct mercury_type_1 mercury_common_1[1] =
{
{
(MR_Word *) &mercury_data__closure_layout__transform_hlds__ctgc__structure_reuse__direct__direct_reuse_pass_5_0_1,
(MR_Word *) (MR_Integer) 0,
2,
MR_CTOR0_ADDR(hlds__hlds_module, module_info),
MR_CTOR0_ADDR(hlds__hlds_pred, pred_id)
},
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__ctgc__structure_reuse__direct__direct_reuse_pass_5_0_2;
extern const MR_TypeCtorInfo_Struct mercury_data_transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_reuse_as_table_0;
static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__ctgc__structure_reuse__direct__direct_reuse_process_specific_procs_6_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_pred_proc_id_0;
static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__ctgc__structure_reuse__direct__direct_reuse_process_pred_6_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_reuse_as_0;
extern const MR_TypeCtorInfo_Struct mercury_data_analysis__type_ctor_info_analysis_status_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;
static const struct mercury_type_2 mercury_common_2[3] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__transform_hlds__ctgc__structure_reuse__direct__direct_reuse_pass_5_0_2,
(MR_Word *) (MR_Integer) 0
},
6,
{
MR_COMMON(0,1),
MR_CTOR0_ADDR(hlds__hlds_pred, pred_id),
MR_CTOR0_ADDR(hlds__hlds_module, module_info),
MR_CTOR0_ADDR(hlds__hlds_module, module_info),
MR_CTOR0_ADDR(transform_hlds__ctgc__structure_reuse__domain, reuse_as_table),
MR_CTOR0_ADDR(transform_hlds__ctgc__structure_reuse__domain, reuse_as_table)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__transform_hlds__ctgc__structure_reuse__direct__direct_reuse_process_specific_procs_6_0_1,
(MR_Word *) (MR_Integer) 0
},
6,
{
MR_COMMON(0,1),
MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id),
MR_CTOR0_ADDR(hlds__hlds_module, module_info),
MR_CTOR0_ADDR(hlds__hlds_module, module_info),
MR_CTOR0_ADDR(transform_hlds__ctgc__structure_reuse__domain, reuse_as_table),
MR_CTOR0_ADDR(transform_hlds__ctgc__structure_reuse__domain, reuse_as_table)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__transform_hlds__ctgc__structure_reuse__direct__direct_reuse_process_pred_6_0_1,
(MR_Word *) (MR_Integer) 0
},
6,
{
MR_CTOR0_ADDR(hlds__hlds_pred, pred_id),
MR_CTOR0_ADDR(transform_hlds__ctgc__structure_reuse__domain, reuse_as),
MR_CTOR0_ADDR(analysis, analysis_status),
MR_INT_CTOR_ADDR,
MR_CTOR0_ADDR(transform_hlds__ctgc__structure_reuse__domain, reuse_as_table),
MR_CTOR0_ADDR(transform_hlds__ctgc__structure_reuse__domain, reuse_as_table)
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__ctgc__structure_reuse__direct__direct_reuse_process_pred_6_0_2;
static const struct mercury_type_3 mercury_common_3[1] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__transform_hlds__ctgc__structure_reuse__direct__direct_reuse_process_pred_6_0_2,
(MR_Word *) (MR_Integer) 0
},
7,
{
MR_COMMON(0,1),
MR_CTOR0_ADDR(hlds__hlds_pred, pred_id),
MR_INT_CTOR_ADDR,
MR_CTOR0_ADDR(hlds__hlds_module, module_info),
MR_CTOR0_ADDR(hlds__hlds_module, module_info),
MR_CTOR0_ADDR(transform_hlds__ctgc__structure_reuse__domain, reuse_as_table),
MR_CTOR0_ADDR(transform_hlds__ctgc__structure_reuse__domain, reuse_as_table)
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__ctgc__structure_reuse__direct__dead_cell_table_maybe_dump_4_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_transform_hlds__smm_common__type_ctor_info_program_point_0;
extern const MR_TypeCtorInfo_Struct mercury_data_transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_reuse_condition_0;
extern const MR_TypeCtorInfo_Struct mercury_data_io__type_ctor_info_state_0;
static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__ctgc__structure_reuse__direct__dead_cell_table_remove_conditionals_2_0_1;
static const struct mercury_type_4 mercury_common_4[2] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__transform_hlds__ctgc__structure_reuse__direct__dead_cell_table_maybe_dump_4_0_1,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_CTOR0_ADDR(transform_hlds__smm_common, program_point),
MR_CTOR0_ADDR(transform_hlds__ctgc__structure_reuse__domain, reuse_condition),
MR_IO_CTOR_ADDR,
MR_IO_CTOR_ADDR
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__transform_hlds__ctgc__structure_reuse__direct__dead_cell_table_remove_conditionals_2_0_1,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_CTOR0_ADDR(transform_hlds__smm_common, program_point),
MR_CTOR0_ADDR(transform_hlds__ctgc__structure_reuse__domain, reuse_condition),
MR_COMMON(0,2),
MR_COMMON(0,2)
}
},
};

static const struct mercury_type_5 mercury_common_5[2] =
{
{
MR_COMMON(4,0),
MR_ENTRY_AP(transform_hlds__ctgc__structure_reuse__direct__dead_cell_entry_dump_4_0),
0
},
{
MR_COMMON(4,1),
MR_ENTRY_AP(transform_hlds__ctgc__structure_reuse__direct__dead_cell_table_add_unconditional_4_0),
0
},
};

static const MR_FA_TypeInfo_Struct2 mercury_data_tree234__ti_tree234_2transform_hlds__smm_common__type_ctor_info_program_point_0transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_reuse_condition_0 = {
	&mercury_data_tree234__type_ctor_info_tree234_2,
{	(MR_TypeInfo) &mercury_data_transform_hlds__smm_common__type_ctor_info_program_point_0,
	(MR_TypeInfo) &mercury_data_transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_reuse_condition_0
}};

const MR_TypeCtorInfo_Struct mercury_data_transform_hlds__ctgc__structure_reuse__direct__type_ctor_info_dead_cell_table_0 = {
	0,
	15,
	-1,
	MR_TYPECTOR_REP_EQUIV_GROUND,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___transform_hlds__ctgc__structure_reuse__direct__dead_cell_table_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___transform_hlds__ctgc__structure_reuse__direct__dead_cell_table_0_0)),
	"transform_hlds.ctgc.structure_reuse.direct",
	"dead_cell_table",
	{ 0 },
	{ (void *)&mercury_data_tree234__ti_tree234_2transform_hlds__smm_common__type_ctor_info_program_point_0transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_reuse_condition_0 },
	-1,
	0,
	NULL
};


static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__ctgc__structure_reuse__direct__dead_cell_table_remove_conditionals_2_0_1 = {
{
MR_PREDICATE,
"transform_hlds.ctgc.structure_reuse.direct",
"transform_hlds.ctgc.structure_reuse.direct",
"dead_cell_table_add_unconditional",
4,
0
},
"transform_hlds.ctgc.structure_reuse.direct",
"structure_reuse.direct.m",
249,
"4"
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__ctgc__structure_reuse__direct__dead_cell_table_maybe_dump_4_0_1 = {
{
MR_PREDICATE,
"transform_hlds.ctgc.structure_reuse.direct",
"transform_hlds.ctgc.structure_reuse.direct",
"dead_cell_entry_dump",
4,
0
},
"transform_hlds.ctgc.structure_reuse.direct",
"structure_reuse.direct.m",
273,
"14"
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__ctgc__structure_reuse__direct__direct_reuse_process_pred_6_0_2 = {
{
MR_PREDICATE,
"transform_hlds.ctgc.structure_reuse.direct",
"transform_hlds.ctgc.structure_reuse.direct",
"direct_reuse_process_proc",
7,
0
},
"transform_hlds.ctgc.structure_reuse.direct",
"structure_reuse.direct.m",
106,
"29"
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__ctgc__structure_reuse__direct__direct_reuse_process_pred_6_0_1 = {
{
MR_PREDICATE,
"transform_hlds.ctgc.structure_reuse.direct",
"transform_hlds.ctgc.structure_reuse.direct",
"set_external_pred_reuse_as",
6,
0
},
"transform_hlds.ctgc.structure_reuse.direct",
"structure_reuse.direct.m",
101,
"21"
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__ctgc__structure_reuse__direct__direct_reuse_process_specific_procs_6_0_1 = {
{
MR_PREDICATE,
"transform_hlds.ctgc.structure_reuse.direct",
"transform_hlds.ctgc.structure_reuse.direct",
"direct_reuse_process_ppid",
6,
0
},
"transform_hlds.ctgc.structure_reuse.direct",
"structure_reuse.direct.m",
120,
"8"
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__ctgc__structure_reuse__direct__direct_reuse_pass_5_0_2 = {
{
MR_PREDICATE,
"transform_hlds.ctgc.structure_reuse.direct",
"transform_hlds.ctgc.structure_reuse.direct",
"direct_reuse_process_pred",
6,
0
},
"transform_hlds.ctgc.structure_reuse.direct",
"structure_reuse.direct.m",
80,
"10"
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__ctgc__structure_reuse__direct__direct_reuse_pass_5_0_1 = {
{
MR_PREDICATE,
"transform_hlds.ctgc.util",
"transform_hlds.ctgc.util",
"pred_requires_analysis",
2,
0
},
"transform_hlds.ctgc.structure_reuse.direct",
"structure_reuse.direct.m",
76,
"8"
};


MR_decl_entry(hlds__hlds_module__module_info_get_valid_predids_3_0);
MR_decl_entry(transform_hlds__ctgc__util__pred_requires_analysis_2_0);
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_pred_id_0;
MR_decl_entry(list__filter_3_0);
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_module__type_ctor_info_module_info_0;
extern const MR_TypeCtorInfo_Struct mercury_data_transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_reuse_as_table_0;
MR_decl_entry(list__foldl2_6_0);

MR_BEGIN_MODULE(transform_hlds__ctgc__structure_reuse__direct_module0)
	MR_init_entry1(transform_hlds__ctgc__structure_reuse__direct__direct_reuse_pass_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__ctgc__structure_reuse__direct__direct_reuse_pass_5_0);
	MR_init_label2(transform_hlds__ctgc__structure_reuse__direct__direct_reuse_pass_5_0,2,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'direct_reuse_pass'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__transform_hlds__ctgc__structure_reuse__direct__direct_reuse_pass_5_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r3;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_valid_predids_3_0,
		transform_hlds__ctgc__structure_reuse__direct__direct_reuse_pass_5_0_i2);
MR_def_label(transform_hlds__ctgc__structure_reuse__direct__direct_reuse_pass_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(1,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(transform_hlds__ctgc__util__pred_requires_analysis_2_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_r2;
	MR_sv(3) = MR_r2;
	MR_sv(4) = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_id);
	MR_tempr2 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	}
	MR_np_call_localret_ent(list__filter_3_0,
		transform_hlds__ctgc__structure_reuse__direct__direct_reuse_pass_5_0_i4);
MR_def_label(transform_hlds__ctgc__structure_reuse__direct__direct_reuse_pass_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r4 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(2,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(transform_hlds__ctgc__structure_reuse__direct__direct_reuse_process_pred_6_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(1);
	MR_tempr2 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_module, module_info);
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__ctgc__structure_reuse__domain, reuse_as_table);
	MR_r5 = MR_tempr2;
	MR_r6 = MR_sv(3);
	MR_r7 = MR_sv(2);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(list__foldl2_6_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_pred_proc_id_0;

MR_BEGIN_MODULE(transform_hlds__ctgc__structure_reuse__direct_module1)
	MR_init_entry1(transform_hlds__ctgc__structure_reuse__direct__direct_reuse_process_specific_procs_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__ctgc__structure_reuse__direct__direct_reuse_process_specific_procs_6_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'direct_reuse_process_specific_procs'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__transform_hlds__ctgc__structure_reuse__direct__direct_reuse_process_specific_procs_6_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(2,1);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(transform_hlds__ctgc__structure_reuse__direct__direct_reuse_process_ppid_6_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id);
	MR_tempr2 = MR_r2;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_module, module_info);
	MR_tempr3 = MR_r3;
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__ctgc__structure_reuse__domain, reuse_as_table);
	MR_tempr4 = MR_r4;
	MR_r4 = MR_tempr1;
	MR_r5 = MR_tempr2;
	MR_r6 = MR_tempr3;
	MR_r7 = MR_tempr4;
	MR_np_tailcall_ent(list__foldl2_6_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__hlds_module__module_info_pred_info_3_0);
MR_decl_entry(hlds__hlds_pred__pred_info_get_origin_2_0);
MR_decl_entry(hlds__hlds_pred__pred_info_get_import_status_2_0);
MR_decl_entry(fn__transform_hlds__ctgc__structure_reuse__domain__reuse_as_init_0_0);
MR_decl_entry(fn__hlds__hlds_pred__pred_info_procids_1_0);
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_proc_id_0;
MR_decl_entry(list__foldl_4_0);
MR_decl_entry(fn__hlds__hlds_pred__pred_info_non_imported_procids_1_0);

MR_BEGIN_MODULE(transform_hlds__ctgc__structure_reuse__direct_module2)
	MR_init_entry1(transform_hlds__ctgc__structure_reuse__direct__direct_reuse_process_pred_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__ctgc__structure_reuse__direct__direct_reuse_process_pred_6_0);
	MR_init_label9(transform_hlds__ctgc__structure_reuse__direct__direct_reuse_process_pred_6_0,2,4,3,7,9,11,12,6,13)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'direct_reuse_process_pred'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__transform_hlds__ctgc__structure_reuse__direct__direct_reuse_process_pred_6_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(5) = MR_r1;
	MR_sv(1) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(3) = MR_tempr1;
	MR_sv(4) = MR_r4;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_module__module_info_pred_info_3_0,
		transform_hlds__ctgc__structure_reuse__direct__direct_reuse_process_pred_6_0_i2);
MR_def_label(transform_hlds__ctgc__structure_reuse__direct__direct_reuse_process_pred_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_origin_2_0,
		transform_hlds__ctgc__structure_reuse__direct__direct_reuse_process_pred_6_0_i4);
MR_def_label(transform_hlds__ctgc__structure_reuse__direct__direct_reuse_process_pred_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,0)) {
		MR_GOTO_LAB(transform_hlds__ctgc__structure_reuse__direct__direct_reuse_process_pred_6_0_i3);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(4);
	MR_decr_sp_and_return(6);
MR_def_label(transform_hlds__ctgc__structure_reuse__direct__direct_reuse_process_pred_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_import_status_2_0,
		transform_hlds__ctgc__structure_reuse__direct__direct_reuse_process_pred_6_0_i7);
MR_def_label(transform_hlds__ctgc__structure_reuse__direct__direct_reuse_process_pred_6_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,1)) {
		MR_GOTO_LAB(transform_hlds__ctgc__structure_reuse__direct__direct_reuse_process_pred_6_0_i6);
	}
	MR_np_call_localret_ent(fn__transform_hlds__ctgc__structure_reuse__domain__reuse_as_init_0_0,
		transform_hlds__ctgc__structure_reuse__direct__direct_reuse_process_pred_6_0_i9);
MR_def_label(transform_hlds__ctgc__structure_reuse__direct__direct_reuse_process_pred_6_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 6);
	MR_sv(5) = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(2,2);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(transform_hlds__ctgc__structure_reuse__direct__set_external_pred_reuse_as_6_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 3;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 4) = MR_r1;
	MR_tfield(0, MR_tempr1, 5) = (MR_Integer) 2;
	MR_r1 = MR_sv(2);
	}
	MR_np_call_localret_ent(fn__hlds__hlds_pred__pred_info_procids_1_0,
		transform_hlds__ctgc__structure_reuse__direct__direct_reuse_process_pred_6_0_i11);
MR_def_label(transform_hlds__ctgc__structure_reuse__direct__direct_reuse_process_pred_6_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, proc_id);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__ctgc__structure_reuse__domain, reuse_as_table);
	MR_r3 = MR_sv(5);
	MR_r4 = MR_tempr1;
	MR_r5 = MR_sv(4);
	}
	MR_np_call_localret_ent(list__foldl_4_0,
		transform_hlds__ctgc__structure_reuse__direct__direct_reuse_process_pred_6_0_i12);
MR_def_label(transform_hlds__ctgc__structure_reuse__direct__direct_reuse_process_pred_6_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tempr1;
	MR_decr_sp_and_return(6);
	}
MR_def_label(transform_hlds__ctgc__structure_reuse__direct__direct_reuse_process_pred_6_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(fn__hlds__hlds_pred__pred_info_non_imported_procids_1_0,
		transform_hlds__ctgc__structure_reuse__direct__direct_reuse_process_pred_6_0_i13);
MR_def_label(transform_hlds__ctgc__structure_reuse__direct__direct_reuse_process_pred_6_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_r4 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(3,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(transform_hlds__ctgc__structure_reuse__direct__direct_reuse_process_proc_7_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(5);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(1);
	MR_tempr2 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, proc_id);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_module, module_info);
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__ctgc__structure_reuse__domain, reuse_as_table);
	MR_r5 = MR_tempr2;
	MR_r6 = MR_sv(3);
	MR_r7 = MR_sv(4);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(list__foldl2_6_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(transform_hlds__ctgc__structure_reuse__domain__reuse_as_table_set_4_0);

MR_BEGIN_MODULE(transform_hlds__ctgc__structure_reuse__direct_module3)
	MR_init_entry1(transform_hlds__ctgc__structure_reuse__direct__set_external_pred_reuse_as_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__ctgc__structure_reuse__direct__set_external_pred_reuse_as_6_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'set_external_pred_reuse_as'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__transform_hlds__ctgc__structure_reuse__direct__set_external_pred_reuse_as_6_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tfield(0, MR_tempr1, 1) = MR_r4;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = MR_r2;
	MR_tfield(0, MR_tempr2, 1) = MR_r3;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_tempr2;
	MR_r3 = MR_r5;
	MR_np_tailcall_ent(transform_hlds__ctgc__structure_reuse__domain__reuse_as_table_set_4_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(io__write_string_3_0);
extern const MR_TypeCtorInfo_Struct mercury_data_io__type_ctor_info_state_0;
MR_decl_entry(map__foldl_4_2);

MR_BEGIN_MODULE(transform_hlds__ctgc__structure_reuse__direct_module4)
	MR_init_entry1(transform_hlds__ctgc__structure_reuse__direct__dead_cell_table_maybe_dump_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__ctgc__structure_reuse__direct__dead_cell_table_maybe_dump_4_0);
	MR_init_label3(transform_hlds__ctgc__structure_reuse__direct__dead_cell_table_maybe_dump_4_0,4,6,18)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'dead_cell_table_maybe_dump'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__transform_hlds__ctgc__structure_reuse__direct__dead_cell_table_maybe_dump_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_EQ(MR_r1,0)) {
		MR_GOTO_LAB(transform_hlds__ctgc__structure_reuse__direct__dead_cell_table_maybe_dump_4_0_i18);
	}
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_r1 = (MR_Word) MR_string_const("\t\t|--------|\n", 13);
	MR_np_call_localret_ent(io__write_string_3_0,
		transform_hlds__ctgc__structure_reuse__direct__dead_cell_table_maybe_dump_4_0_i4);
MR_def_label(transform_hlds__ctgc__structure_reuse__direct__dead_cell_table_maybe_dump_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__smm_common, program_point);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__ctgc__structure_reuse__domain, reuse_condition);
	MR_r3 = (MR_Word) MR_IO_CTOR_ADDR;
	MR_r4 = (MR_Word) MR_TAG_COMMON(0,5,0);
	MR_r5 = MR_sv(1);
	MR_np_call_localret_ent(map__foldl_4_2,
		transform_hlds__ctgc__structure_reuse__direct__dead_cell_table_maybe_dump_4_0_i6);
MR_def_label(transform_hlds__ctgc__structure_reuse__direct__dead_cell_table_maybe_dump_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("\t\t|--------|\n", 13);
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(io__write_string_3_0);
MR_def_label(transform_hlds__ctgc__structure_reuse__direct__dead_cell_table_maybe_dump_4_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__hlds_module__module_info_get_globals_2_0);
MR_decl_entry(libs__globals__lookup_bool_option_3_0);
MR_decl_entry(hlds__passes_aux__write_proc_progress_message_6_0);
MR_decl_entry(hlds__hlds_pred__proc_info_get_goal_2_0);
MR_decl_entry(transform_hlds__ctgc__structure_reuse__direct__detect_garbage__determine_dead_deconstructions_6_0);
MR_decl_entry(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__determine_reuse_6_0);
MR_decl_entry(hlds__hlds_pred__proc_info_set_goal_3_0);
MR_decl_entry(libs__file_util__maybe_write_string_4_0);

MR_BEGIN_MODULE(transform_hlds__ctgc__structure_reuse__direct_module5)
	MR_init_entry1(transform_hlds__ctgc__structure_reuse__direct__direct_reuse_process_proc_2_8_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__ctgc__structure_reuse__direct__direct_reuse_process_proc_2_8_0);
	MR_init_label9(transform_hlds__ctgc__structure_reuse__direct__direct_reuse_process_proc_2_8_0,2,3,4,5,6,7,8,9,10)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'direct_reuse_process_proc_2'/8 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__transform_hlds__ctgc__structure_reuse__direct__direct_reuse_process_proc_2_8_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(3) = MR_r1;
	MR_sv(6) = MR_r2;
	MR_sv(4) = MR_r3;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_sv(1) = MR_tempr1;
	MR_sv(2) = MR_r5;
	MR_sv(5) = MR_r6;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_globals_2_0,
		transform_hlds__ctgc__structure_reuse__direct__direct_reuse_process_proc_2_8_0_i2);
MR_def_label(transform_hlds__ctgc__structure_reuse__direct__direct_reuse_process_proc_2_8_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 45;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		transform_hlds__ctgc__structure_reuse__direct__direct_reuse_process_proc_2_8_0_i3);
MR_def_label(transform_hlds__ctgc__structure_reuse__direct__direct_reuse_process_proc_2_8_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(6);
	MR_sv(6) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("% Direct reuse analysis of ", 27);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(1);
	}
	MR_np_call_localret_ent(hlds__passes_aux__write_proc_progress_message_6_0,
		transform_hlds__ctgc__structure_reuse__direct__direct_reuse_process_proc_2_8_0_i4);
MR_def_label(transform_hlds__ctgc__structure_reuse__direct__direct_reuse_process_proc_2_8_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_goal_2_0,
		transform_hlds__ctgc__structure_reuse__direct__direct_reuse_process_proc_2_8_0_i5);
MR_def_label(transform_hlds__ctgc__structure_reuse__direct__direct_reuse_process_proc_2_8_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(5);
	MR_r4 = MR_tempr1;
	MR_r5 = MR_sv(3);
	}
	MR_np_call_localret_ent(transform_hlds__ctgc__structure_reuse__direct__detect_garbage__determine_dead_deconstructions_6_0,
		transform_hlds__ctgc__structure_reuse__direct__direct_reuse_process_proc_2_8_0_i6);
MR_def_label(transform_hlds__ctgc__structure_reuse__direct__direct_reuse_process_proc_2_8_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(transform_hlds__ctgc__structure_reuse__direct__dead_cell_table_maybe_dump_4_0,
		transform_hlds__ctgc__structure_reuse__direct__direct_reuse_process_proc_2_8_0_i7);
MR_def_label(transform_hlds__ctgc__structure_reuse__direct__direct_reuse_process_proc_2_8_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(3);
	MR_np_call_localret_ent(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__determine_reuse_6_0,
		transform_hlds__ctgc__structure_reuse__direct__direct_reuse_process_proc_2_8_0_i8);
MR_def_label(transform_hlds__ctgc__structure_reuse__direct__direct_reuse_process_proc_2_8_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r2;
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_set_goal_3_0,
		transform_hlds__ctgc__structure_reuse__direct__direct_reuse_process_proc_2_8_0_i9);
MR_def_label(transform_hlds__ctgc__structure_reuse__direct__direct_reuse_process_proc_2_8_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(6);
	MR_sv(6) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Word) MR_string_const("% reuse analysis done.\n", 23);
	}
	MR_np_call_localret_ent(libs__file_util__maybe_write_string_4_0,
		transform_hlds__ctgc__structure_reuse__direct__direct_reuse_process_proc_2_8_0_i10);
MR_def_label(transform_hlds__ctgc__structure_reuse__direct__direct_reuse_process_proc_2_8_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(3);
	MR_decr_sp_and_return(7);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__hlds_module__module_info_get_preds_2_0);
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_pred_info_0;
MR_decl_entry(map__lookup_3_0);
MR_decl_entry(hlds__hlds_pred__pred_info_get_procedures_2_0);
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_proc_info_0;
MR_decl_entry(map__det_update_4_0);
MR_decl_entry(hlds__hlds_pred__pred_info_set_procedures_3_0);
MR_decl_entry(hlds__hlds_module__module_info_set_preds_3_0);

MR_BEGIN_MODULE(transform_hlds__ctgc__structure_reuse__direct_module6)
	MR_init_entry1(transform_hlds__ctgc__structure_reuse__direct__direct_reuse_process_proc_7_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__ctgc__structure_reuse__direct__direct_reuse_process_proc_7_0);
	MR_init_label10(transform_hlds__ctgc__structure_reuse__direct__direct_reuse_process_proc_7_0,2,3,4,5,6,9,10,11,12,13)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'direct_reuse_process_proc'/7 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__transform_hlds__ctgc__structure_reuse__direct__direct_reuse_process_proc_7_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(13);
	MR_sv(13) = (MR_Word) MR_succip;
	MR_sv(8) = MR_r1;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_sv(6) = MR_tempr1;
	MR_sv(7) = MR_r5;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_preds_2_0,
		transform_hlds__ctgc__structure_reuse__direct__direct_reuse_process_proc_7_0_i2);
MR_def_label(transform_hlds__ctgc__structure_reuse__direct__direct_reuse_process_proc_7_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_sv(9) = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_id);
	MR_sv(10) = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_info);
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(10);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(1);
	MR_np_call_localret_ent(map__lookup_3_0,
		transform_hlds__ctgc__structure_reuse__direct__direct_reuse_process_proc_7_0_i3);
MR_def_label(transform_hlds__ctgc__structure_reuse__direct__direct_reuse_process_proc_7_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_procedures_2_0,
		transform_hlds__ctgc__structure_reuse__direct__direct_reuse_process_proc_7_0_i4);
MR_def_label(transform_hlds__ctgc__structure_reuse__direct__direct_reuse_process_proc_7_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_sv(11) = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, proc_id);
	MR_sv(12) = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, proc_info);
	MR_r1 = MR_sv(11);
	MR_r2 = MR_sv(12);
	MR_r3 = MR_sv(5);
	MR_r4 = MR_sv(2);
	MR_np_call_localret_ent(map__lookup_3_0,
		transform_hlds__ctgc__structure_reuse__direct__direct_reuse_process_proc_7_0_i5);
MR_def_label(transform_hlds__ctgc__structure_reuse__direct__direct_reuse_process_proc_7_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(6);
	MR_r5 = MR_sv(4);
	MR_r6 = MR_tempr1;
	}
	MR_np_call_localret_ent(transform_hlds__ctgc__structure_reuse__direct__direct_reuse_process_proc_2_8_0,
		transform_hlds__ctgc__structure_reuse__direct__direct_reuse_process_proc_7_0_i6);
MR_def_label(transform_hlds__ctgc__structure_reuse__direct__direct_reuse_process_proc_7_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_r2;
	MR_tfield(0, MR_tempr1, 1) = (MR_Integer) 2;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = MR_sv(1);
	MR_tfield(0, MR_tempr2, 1) = MR_sv(2);
	MR_sv(8) = MR_r1;
	MR_r1 = MR_tempr2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(7);
	}
	MR_np_call_localret_ent(transform_hlds__ctgc__structure_reuse__domain__reuse_as_table_set_4_0,
		transform_hlds__ctgc__structure_reuse__direct__direct_reuse_process_proc_7_0_i9);
MR_def_label(transform_hlds__ctgc__structure_reuse__direct__direct_reuse_process_proc_7_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(8);
	MR_sv(8) = MR_r1;
	MR_r1 = MR_sv(11);
	MR_r2 = MR_sv(12);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_tempr1;
	MR_r5 = MR_sv(5);
	}
	MR_np_call_localret_ent(map__det_update_4_0,
		transform_hlds__ctgc__structure_reuse__direct__direct_reuse_process_proc_7_0_i10);
MR_def_label(transform_hlds__ctgc__structure_reuse__direct__direct_reuse_process_proc_7_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_set_procedures_3_0,
		transform_hlds__ctgc__structure_reuse__direct__direct_reuse_process_proc_7_0_i11);
MR_def_label(transform_hlds__ctgc__structure_reuse__direct__direct_reuse_process_proc_7_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(10);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_tempr1;
	MR_r5 = MR_sv(3);
	}
	MR_np_call_localret_ent(map__det_update_4_0,
		transform_hlds__ctgc__structure_reuse__direct__direct_reuse_process_proc_7_0_i12);
MR_def_label(transform_hlds__ctgc__structure_reuse__direct__direct_reuse_process_proc_7_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(6);
	MR_np_call_localret_ent(hlds__hlds_module__module_info_set_preds_3_0,
		transform_hlds__ctgc__structure_reuse__direct__direct_reuse_process_proc_7_0_i13);
MR_def_label(transform_hlds__ctgc__structure_reuse__direct__direct_reuse_process_proc_7_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(8);
	MR_decr_sp_and_return(13);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__ctgc__structure_reuse__direct_module7)
	MR_init_entry1(transform_hlds__ctgc__structure_reuse__direct__direct_reuse_process_ppid_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__ctgc__structure_reuse__direct__direct_reuse_process_ppid_6_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'direct_reuse_process_ppid'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__transform_hlds__ctgc__structure_reuse__direct__direct_reuse_process_ppid_6_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_tfield(0, MR_r2, 0);
	MR_tempr2 = MR_r3;
	MR_r3 = MR_tfield(0, MR_tempr1, 1);
	MR_tempr1 = MR_r4;
	MR_r4 = MR_tempr2;
	MR_r5 = MR_tempr1;
	MR_np_tailcall_ent(transform_hlds__ctgc__structure_reuse__direct__direct_reuse_process_proc_7_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__map__init_0_0);

MR_BEGIN_MODULE(transform_hlds__ctgc__structure_reuse__direct_module8)
	MR_init_entry1(fn__transform_hlds__ctgc__structure_reuse__direct__dead_cell_table_init_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__transform_hlds__ctgc__structure_reuse__direct__dead_cell_table_init_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'dead_cell_table_init'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__transform_hlds__ctgc__structure_reuse__direct__dead_cell_table_init_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__smm_common, program_point);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__ctgc__structure_reuse__domain, reuse_condition);
	MR_np_tailcall_ent(fn__map__init_0_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(map__is_empty_1_0);

MR_BEGIN_MODULE(transform_hlds__ctgc__structure_reuse__direct_module9)
	MR_init_entry1(transform_hlds__ctgc__structure_reuse__direct__dead_cell_table_is_empty_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__ctgc__structure_reuse__direct__dead_cell_table_is_empty_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'dead_cell_table_is_empty'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__transform_hlds__ctgc__structure_reuse__direct__dead_cell_table_is_empty_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__smm_common, program_point);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__ctgc__structure_reuse__domain, reuse_condition);
	MR_r3 = MR_tempr1;
	MR_np_tailcall_ent(map__is_empty_1_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(map__search_3_0);

MR_BEGIN_MODULE(transform_hlds__ctgc__structure_reuse__direct_module10)
	MR_init_entry1(fn__transform_hlds__ctgc__structure_reuse__direct__dead_cell_table_search_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__transform_hlds__ctgc__structure_reuse__direct__dead_cell_table_search_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'dead_cell_table_search'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__transform_hlds__ctgc__structure_reuse__direct__dead_cell_table_search_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__smm_common, program_point);
	MR_tempr2 = MR_r2;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__ctgc__structure_reuse__domain, reuse_condition);
	MR_r3 = MR_tempr2;
	MR_r4 = MR_tempr1;
	MR_np_tailcall_ent(map__search_3_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(map__set_4_0);

MR_BEGIN_MODULE(transform_hlds__ctgc__structure_reuse__direct_module11)
	MR_init_entry1(transform_hlds__ctgc__structure_reuse__direct__dead_cell_table_set_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__ctgc__structure_reuse__direct__dead_cell_table_set_4_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'dead_cell_table_set'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__transform_hlds__ctgc__structure_reuse__direct__dead_cell_table_set_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__smm_common, program_point);
	MR_tempr2 = MR_r2;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__ctgc__structure_reuse__domain, reuse_condition);
	MR_tempr3 = MR_r3;
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tempr2;
	MR_r5 = MR_tempr3;
	MR_np_tailcall_ent(map__set_4_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(map__det_remove_4_0);

MR_BEGIN_MODULE(transform_hlds__ctgc__structure_reuse__direct_module12)
	MR_init_entry1(transform_hlds__ctgc__structure_reuse__direct__dead_cell_table_remove_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__ctgc__structure_reuse__direct__dead_cell_table_remove_3_0);
	MR_init_label1(transform_hlds__ctgc__structure_reuse__direct__dead_cell_table_remove_3_0,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'dead_cell_table_remove'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__transform_hlds__ctgc__structure_reuse__direct__dead_cell_table_remove_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__smm_common, program_point);
	MR_tempr2 = MR_r2;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__ctgc__structure_reuse__domain, reuse_condition);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tempr2;
	}
	MR_np_call_localret_ent(map__det_remove_4_0,
		transform_hlds__ctgc__structure_reuse__direct__dead_cell_table_remove_3_0_i2);
MR_def_label(transform_hlds__ctgc__structure_reuse__direct__dead_cell_table_remove_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(1);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(map__foldl_4_0);

MR_BEGIN_MODULE(transform_hlds__ctgc__structure_reuse__direct_module13)
	MR_init_entry1(transform_hlds__ctgc__structure_reuse__direct__dead_cell_table_remove_conditionals_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__ctgc__structure_reuse__direct__dead_cell_table_remove_conditionals_2_0);
	MR_init_label1(transform_hlds__ctgc__structure_reuse__direct__dead_cell_table_remove_conditionals_2_0,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'dead_cell_table_remove_conditionals'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__transform_hlds__ctgc__structure_reuse__direct__dead_cell_table_remove_conditionals_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__smm_common, program_point);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__ctgc__structure_reuse__domain, reuse_condition);
	MR_np_call_localret_ent(fn__map__init_0_0,
		transform_hlds__ctgc__structure_reuse__direct__dead_cell_table_remove_conditionals_2_0_i2);
MR_def_label(transform_hlds__ctgc__structure_reuse__direct__dead_cell_table_remove_conditionals_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__smm_common, program_point);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__ctgc__structure_reuse__domain, reuse_condition);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r4 = (MR_Word) MR_TAG_COMMON(0,5,1);
	MR_r5 = MR_sv(1);
	MR_r6 = MR_tempr1;
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(map__foldl_4_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(transform_hlds__ctgc__structure_reuse__domain__reuse_condition_is_conditional_1_0);

MR_BEGIN_MODULE(transform_hlds__ctgc__structure_reuse__direct_module14)
	MR_init_entry1(transform_hlds__ctgc__structure_reuse__direct__dead_cell_table_add_unconditional_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__ctgc__structure_reuse__direct__dead_cell_table_add_unconditional_4_0);
	MR_init_label2(transform_hlds__ctgc__structure_reuse__direct__dead_cell_table_add_unconditional_4_0,4,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'dead_cell_table_add_unconditional'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__transform_hlds__ctgc__structure_reuse__direct__dead_cell_table_add_unconditional_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(transform_hlds__ctgc__structure_reuse__domain__reuse_condition_is_conditional_1_0,
		transform_hlds__ctgc__structure_reuse__direct__dead_cell_table_add_unconditional_4_0_i4);
MR_def_label(transform_hlds__ctgc__structure_reuse__direct__dead_cell_table_add_unconditional_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__ctgc__structure_reuse__direct__dead_cell_table_add_unconditional_4_0_i2);
	}
	MR_r1 = MR_sv(3);
	MR_decr_sp_and_return(4);
MR_def_label(transform_hlds__ctgc__structure_reuse__direct__dead_cell_table_add_unconditional_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__smm_common, program_point);
	MR_tempr2 = MR_r2;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__ctgc__structure_reuse__domain, reuse_condition);
	MR_tempr3 = MR_r3;
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tempr2;
	MR_r5 = MR_tempr3;
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(map__set_4_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(transform_hlds__smm_common__dump_program_point_3_0);

MR_BEGIN_MODULE(transform_hlds__ctgc__structure_reuse__direct_module15)
	MR_init_entry1(transform_hlds__ctgc__structure_reuse__direct__dead_cell_entry_dump_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__ctgc__structure_reuse__direct__dead_cell_entry_dump_4_0);
	MR_init_label4(transform_hlds__ctgc__structure_reuse__direct__dead_cell_entry_dump_4_0,4,2,7,9)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'dead_cell_entry_dump'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__transform_hlds__ctgc__structure_reuse__direct__dead_cell_entry_dump_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(transform_hlds__ctgc__structure_reuse__domain__reuse_condition_is_conditional_1_0,
		transform_hlds__ctgc__structure_reuse__direct__dead_cell_entry_dump_4_0_i4);
MR_def_label(transform_hlds__ctgc__structure_reuse__direct__dead_cell_entry_dump_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__ctgc__structure_reuse__direct__dead_cell_entry_dump_4_0_i2);
	}
	MR_r1 = (MR_Word) MR_string_const("\t\t|  cond  |\t", 13);
	MR_np_call_localret_ent(io__write_string_3_0,
		transform_hlds__ctgc__structure_reuse__direct__dead_cell_entry_dump_4_0_i7);
MR_def_label(transform_hlds__ctgc__structure_reuse__direct__dead_cell_entry_dump_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r1 = (MR_Word) MR_string_const("\t\t| always |\t", 13);
	MR_np_call_localret_ent(io__write_string_3_0,
		transform_hlds__ctgc__structure_reuse__direct__dead_cell_entry_dump_4_0_i7);
MR_def_label(transform_hlds__ctgc__structure_reuse__direct__dead_cell_entry_dump_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(transform_hlds__smm_common__dump_program_point_3_0,
		transform_hlds__ctgc__structure_reuse__direct__dead_cell_entry_dump_4_0_i9);
MR_def_label(transform_hlds__ctgc__structure_reuse__direct__dead_cell_entry_dump_4_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("\n", 1);
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(io__write_string_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(builtin__unify_2_0);

MR_BEGIN_MODULE(transform_hlds__ctgc__structure_reuse__direct_module16)
	MR_init_entry1(__Unify___transform_hlds__ctgc__structure_reuse__direct__dead_cell_table_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___transform_hlds__ctgc__structure_reuse__direct__dead_cell_table_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___transform_hlds__ctgc__structure_reuse__direct__dead_cell_table_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	MR_np_tailcall_ent(builtin__unify_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(builtin__compare_3_0);

MR_BEGIN_MODULE(transform_hlds__ctgc__structure_reuse__direct_module17)
	MR_init_entry1(__Compare___transform_hlds__ctgc__structure_reuse__direct__dead_cell_table_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___transform_hlds__ctgc__structure_reuse__direct__dead_cell_table_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___transform_hlds__ctgc__structure_reuse__direct__dead_cell_table_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	MR_np_tailcall_ent(builtin__compare_3_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

static void mercury__transform_hlds__ctgc__structure_reuse__direct_maybe_bunch_0(void)
{
	transform_hlds__ctgc__structure_reuse__direct_module0();
	transform_hlds__ctgc__structure_reuse__direct_module1();
	transform_hlds__ctgc__structure_reuse__direct_module2();
	transform_hlds__ctgc__structure_reuse__direct_module3();
	transform_hlds__ctgc__structure_reuse__direct_module4();
	transform_hlds__ctgc__structure_reuse__direct_module5();
	transform_hlds__ctgc__structure_reuse__direct_module6();
	transform_hlds__ctgc__structure_reuse__direct_module7();
	transform_hlds__ctgc__structure_reuse__direct_module8();
	transform_hlds__ctgc__structure_reuse__direct_module9();
	transform_hlds__ctgc__structure_reuse__direct_module10();
	transform_hlds__ctgc__structure_reuse__direct_module11();
	transform_hlds__ctgc__structure_reuse__direct_module12();
	transform_hlds__ctgc__structure_reuse__direct_module13();
	transform_hlds__ctgc__structure_reuse__direct_module14();
	transform_hlds__ctgc__structure_reuse__direct_module15();
	transform_hlds__ctgc__structure_reuse__direct_module16();
	transform_hlds__ctgc__structure_reuse__direct_module17();
}

/* suppress gcc -Wmissing-decls warnings */
void mercury__transform_hlds__ctgc__structure_reuse__direct__init(void);
void mercury__transform_hlds__ctgc__structure_reuse__direct__init_type_tables(void);
void mercury__transform_hlds__ctgc__structure_reuse__direct__init_debugger(void);
#ifdef MR_DEEP_PROFILING
void mercury__transform_hlds__ctgc__structure_reuse__direct__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp);
#endif
#ifdef MR_RECORD_TERM_SIZES
void mercury__transform_hlds__ctgc__structure_reuse__direct__init_complexity_procs(void);
#endif
#ifdef MR_THREADSCOPE
void mercury__transform_hlds__ctgc__structure_reuse__direct__init_threadscope_string_table(void);
#endif

void mercury__transform_hlds__ctgc__structure_reuse__direct__init(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	mercury__transform_hlds__ctgc__structure_reuse__direct_maybe_bunch_0();
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_transform_hlds__ctgc__structure_reuse__direct__type_ctor_info_dead_cell_table_0,
		transform_hlds__ctgc__structure_reuse__direct__dead_cell_table_0_0);
	mercury__transform_hlds__ctgc__structure_reuse__direct__init_debugger();
}

void mercury__transform_hlds__ctgc__structure_reuse__direct__init_type_tables(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	{
		MR_register_type_ctor_info(
		&mercury_data_transform_hlds__ctgc__structure_reuse__direct__type_ctor_info_dead_cell_table_0);
	}
}


void mercury__transform_hlds__ctgc__structure_reuse__direct__init_debugger(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}

#ifdef MR_DEEP_PROFILING

void mercury__transform_hlds__ctgc__structure_reuse__direct__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp)
{
	MR_write_out_module_proc_reps_start(procrep_fp, &mercury_data__module_layout__transform_hlds__ctgc__structure_reuse__direct);
	MR_write_out_module_proc_reps_end(procrep_fp);
}

#endif

#ifdef MR_RECORD_TERM_SIZES

void mercury__transform_hlds__ctgc__structure_reuse__direct__init_complexity_procs(void)
{
}

#endif

#ifdef MR_THREADSCOPE

void mercury__transform_hlds__ctgc__structure_reuse__direct__init_threadscope_string_table(void)
{
}

#endif

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;
