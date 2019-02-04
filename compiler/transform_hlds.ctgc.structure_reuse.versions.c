/*
** Automatically generated from `transform_hlds.ctgc.structure_reuse.versions.m'
** by the Mercury compiler,
** version rotd-2011-09-09, configured for x86_64-unknown-linux-gnu.
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
INIT mercury__transform_hlds__ctgc__structure_reuse__versions__init
ENDINIT
*/

#define MR_ALLOW_RESET
#include "mercury_imp.h"
#line 140 "../library/io.int2"
#include "io.mh"

#line 28 "transform_hlds.ctgc.structure_reuse.versions.c"
#line 150 "../library/io.int2"
#include "string.mh"

#line 32 "transform_hlds.ctgc.structure_reuse.versions.c"
#line 33 "../library/array.int2"
#include "array.mh"

#line 36 "transform_hlds.ctgc.structure_reuse.versions.c"
#line 39 "../mdbcomp/mdbcomp.rtti_access.int2"
#include "mdbcomp.rtti_access.mh"

#line 40 "transform_hlds.ctgc.structure_reuse.versions.c"
#line 31 "../library/bitmap.int2"
#include "bitmap.mh"

#line 44 "transform_hlds.ctgc.structure_reuse.versions.c"
#line 30 "../library/time.int2"
#include "time.mh"

#line 48 "transform_hlds.ctgc.structure_reuse.versions.c"
#line 49 "transform_hlds.ctgc.structure_reuse.versions.c"
#include "transform_hlds.ctgc.structure_reuse.versions.mh"

#line 52 "transform_hlds.ctgc.structure_reuse.versions.c"
#line 53 "transform_hlds.ctgc.structure_reuse.versions.c"
#ifndef TRANSFORM_HLDS__CTGC__STRUCTURE_REUSE__VERSIONS_DECL_GUARD
#define TRANSFORM_HLDS__CTGC__STRUCTURE_REUSE__VERSIONS_DECL_GUARD

#line 57 "transform_hlds.ctgc.structure_reuse.versions.c"
#line 58 "transform_hlds.ctgc.structure_reuse.versions.c"

#endif
#line 61 "transform_hlds.ctgc.structure_reuse.versions.c"

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
	MR_Word * f3[7];
};
MR_STATIC_LINKAGE const struct mercury_type_1 mercury_common_1[];

struct mercury_type_2 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[6];
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

extern const MR_TypeCtorInfo_Struct
	mercury_data_transform_hlds__ctgc__structure_reuse__versions__type_ctor_info_convert_potential_reuse_0,
	mercury_data_transform_hlds__ctgc__structure_reuse__versions__type_ctor_info_reuse_name_0;
MR_decl_label6(transform_hlds__ctgc__structure_reuse__versions__check_cond_process_proc_5_0, 2,3,4,8,20,10)
MR_decl_label10(transform_hlds__ctgc__structure_reuse__versions__create_fake_reuse_procedure_4_0, 2,3,4,5,6,7,8,9,12,14)
MR_decl_label10(transform_hlds__ctgc__structure_reuse__versions__create_fresh_pred_proc_info_copy_5_0, 2,3,4,5,6,7,10,11,12,13)
MR_decl_label10(transform_hlds__ctgc__structure_reuse__versions__create_fresh_pred_proc_info_copy_5_0, 14,15,16,18,19,20,21,22,23,24)
MR_decl_label8(transform_hlds__ctgc__structure_reuse__versions__create_fresh_pred_proc_info_copy_5_0, 25,27,28,29,31,32,33,34)
MR_decl_label8(transform_hlds__ctgc__structure_reuse__versions__create_reuse_procedures_4_0, 2,3,6,8,10,11,13,14)
MR_decl_label5(transform_hlds__ctgc__structure_reuse__versions__determine_reuse_version_9_0, 4,6,7,8,2)
MR_decl_label8(transform_hlds__ctgc__structure_reuse__versions__divide_reuse_procs_7_0, 3,2,7,6,12,11,16,15)
MR_decl_label8(transform_hlds__ctgc__structure_reuse__versions__maybe_create_full_reuse_proc_copy_6_0, 3,2,6,7,10,12,13,8)
MR_decl_label1(transform_hlds__ctgc__structure_reuse__versions__process_case_5_0, 2)
MR_decl_label10(transform_hlds__ctgc__structure_reuse__versions__process_goal_5_0, 180,3,6,4,11,9,14,16,17,18)
MR_decl_label10(transform_hlds__ctgc__structure_reuse__versions__process_goal_5_0, 15,21,23,27,24,34,22,42,45,41)
MR_decl_label10(transform_hlds__ctgc__structure_reuse__versions__process_goal_5_0, 51,49,55,57,58,92,59,64,66,60)
MR_decl_label3(transform_hlds__ctgc__structure_reuse__versions__process_goal_5_0, 68,70,54)
MR_decl_label9(transform_hlds__ctgc__structure_reuse__versions__process_proc_5_0, 2,3,4,5,7,8,9,10,11)
MR_decl_label2(transform_hlds__ctgc__structure_reuse__versions__unification_set_reuse_3_0, 12,6)
MR_def_extern_entry(transform_hlds__ctgc__structure_reuse__versions__create_reuse_procedures_4_0)
MR_def_extern_entry(transform_hlds__ctgc__structure_reuse__versions__create_fresh_pred_proc_info_copy_5_0)
MR_def_extern_entry(transform_hlds__ctgc__structure_reuse__versions__create_fake_reuse_procedure_4_0)
MR_decl_static(transform_hlds__ctgc__structure_reuse__versions__divide_reuse_procs_7_0)
MR_decl_static(transform_hlds__ctgc__structure_reuse__versions__maybe_create_full_reuse_proc_copy_6_0)
MR_decl_static(transform_hlds__ctgc__structure_reuse__versions__unification_set_reuse_3_0)
MR_decl_static(transform_hlds__ctgc__structure_reuse__versions__determine_reuse_version_9_0)
MR_decl_static(transform_hlds__ctgc__structure_reuse__versions__process_goal_5_0)
MR_decl_static(transform_hlds__ctgc__structure_reuse__versions__process_proc_5_0)
MR_decl_static(transform_hlds__ctgc__structure_reuse__versions__check_cond_process_proc_5_0)
MR_decl_static(transform_hlds__ctgc__structure_reuse__versions__process_case_5_0)
MR_decl_static(__Unify___transform_hlds__ctgc__structure_reuse__versions__convert_potential_reuse_0_0)
MR_decl_static(__Compare___transform_hlds__ctgc__structure_reuse__versions__convert_potential_reuse_0_0)
MR_decl_static(__Unify___transform_hlds__ctgc__structure_reuse__versions__reuse_name_0_0)
MR_decl_static(__Compare___transform_hlds__ctgc__structure_reuse__versions__reuse_name_0_0)

extern const MR_TypeCtorInfo_Struct mercury_data_set_ordlist__type_ctor_info_set_ordlist_1;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_pred_proc_id_0;
extern const MR_TypeCtorInfo_Struct mercury_data_list__type_ctor_info_list_1;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_pred_proc_id_0;
static const struct mercury_type_0 mercury_common_0[3] =
{
{
{
MR_CTOR1_ADDR(set_ordlist, set_ordlist),
MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id)
}
},
{
{
MR_LIST_CTOR_ADDR,
MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id)
}
},
{
{
MR_LIST_CTOR_ADDR,
MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id)
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__ctgc__structure_reuse__versions__create_reuse_procedures_4_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_pred_proc_id_0;
extern const MR_TypeCtorInfo_Struct mercury_data_transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_reuse_as_and_status_0;
static const struct mercury_type_1 mercury_common_1[1] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__transform_hlds__ctgc__structure_reuse__versions__create_reuse_procedures_4_0_1,
(MR_Word *) (MR_Integer) 0
},
7,
{
MR_COMMON(0,0),
MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id),
MR_CTOR0_ADDR(transform_hlds__ctgc__structure_reuse__domain, reuse_as_and_status),
MR_COMMON(0,1),
MR_COMMON(0,1),
MR_COMMON(0,1),
MR_COMMON(0,1)
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__ctgc__structure_reuse__versions__create_reuse_procedures_4_0_2;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_module__type_ctor_info_module_info_0;
extern const MR_TypeCtorInfo_Struct mercury_data_transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_reuse_as_table_0;
static const struct mercury_type_2 mercury_common_2[1] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__transform_hlds__ctgc__structure_reuse__versions__create_reuse_procedures_4_0_2,
(MR_Word *) (MR_Integer) 0
},
6,
{
MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id),
MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id),
MR_CTOR0_ADDR(hlds__hlds_module, module_info),
MR_CTOR0_ADDR(hlds__hlds_module, module_info),
MR_CTOR0_ADDR(transform_hlds__ctgc__structure_reuse__domain, reuse_as_table),
MR_CTOR0_ADDR(transform_hlds__ctgc__structure_reuse__domain, reuse_as_table)
}
},
};

static const struct mercury_type_3 mercury_common_3[1] =
{
{
MR_COMMON(2,0),
MR_ENTRY_AP(transform_hlds__ctgc__structure_reuse__versions__maybe_create_full_reuse_proc_copy_6_0),
0
},
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__ctgc__structure_reuse__versions__create_reuse_procedures_4_0_3;
extern const MR_TypeCtorInfo_Struct mercury_data_transform_hlds__ctgc__structure_reuse__versions__type_ctor_info_convert_potential_reuse_0;
static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__ctgc__structure_reuse__versions__create_reuse_procedures_4_0_4;
static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__ctgc__structure_reuse__versions__process_goal_5_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_goal__type_ctor_info_hlds_goal_0;
static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__ctgc__structure_reuse__versions__process_goal_5_0_2;
static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__ctgc__structure_reuse__versions__process_goal_5_0_3;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_goal__type_ctor_info_case_0;
static const struct mercury_type_4 mercury_common_4[5] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__transform_hlds__ctgc__structure_reuse__versions__create_reuse_procedures_4_0_3,
(MR_Word *) (MR_Integer) 0
},
5,
{
MR_CTOR0_ADDR(transform_hlds__ctgc__structure_reuse__versions, convert_potential_reuse),
MR_CTOR0_ADDR(transform_hlds__ctgc__structure_reuse__domain, reuse_as_table),
MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id),
MR_CTOR0_ADDR(hlds__hlds_module, module_info),
MR_CTOR0_ADDR(hlds__hlds_module, module_info)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__transform_hlds__ctgc__structure_reuse__versions__create_reuse_procedures_4_0_4,
(MR_Word *) (MR_Integer) 0
},
5,
{
MR_CTOR0_ADDR(transform_hlds__ctgc__structure_reuse__versions, convert_potential_reuse),
MR_CTOR0_ADDR(transform_hlds__ctgc__structure_reuse__domain, reuse_as_table),
MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id),
MR_CTOR0_ADDR(hlds__hlds_module, module_info),
MR_CTOR0_ADDR(hlds__hlds_module, module_info)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__transform_hlds__ctgc__structure_reuse__versions__process_goal_5_0_1,
(MR_Word *) (MR_Integer) 0
},
5,
{
MR_CTOR0_ADDR(transform_hlds__ctgc__structure_reuse__versions, convert_potential_reuse),
MR_CTOR0_ADDR(transform_hlds__ctgc__structure_reuse__domain, reuse_as_table),
MR_CTOR0_ADDR(hlds__hlds_module, module_info),
MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal),
MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__transform_hlds__ctgc__structure_reuse__versions__process_goal_5_0_2,
(MR_Word *) (MR_Integer) 0
},
5,
{
MR_CTOR0_ADDR(transform_hlds__ctgc__structure_reuse__versions, convert_potential_reuse),
MR_CTOR0_ADDR(transform_hlds__ctgc__structure_reuse__domain, reuse_as_table),
MR_CTOR0_ADDR(hlds__hlds_module, module_info),
MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal),
MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__transform_hlds__ctgc__structure_reuse__versions__process_goal_5_0_3,
(MR_Word *) (MR_Integer) 0
},
5,
{
MR_CTOR0_ADDR(transform_hlds__ctgc__structure_reuse__versions, convert_potential_reuse),
MR_CTOR0_ADDR(transform_hlds__ctgc__structure_reuse__domain, reuse_as_table),
MR_CTOR0_ADDR(hlds__hlds_module, module_info),
MR_CTOR0_ADDR(hlds__hlds_goal, case),
MR_CTOR0_ADDR(hlds__hlds_goal, case)
}
},
};

static const MR_EnumFunctorDesc mercury_data_transform_hlds__ctgc__structure_reuse__versions__enum_functor_desc_convert_potential_reuse_0_0 = {
	"convert_potential_reuse",
	0
};

static const MR_EnumFunctorDesc mercury_data_transform_hlds__ctgc__structure_reuse__versions__enum_functor_desc_convert_potential_reuse_0_1 = {
	"leave_potential_reuse",
	1
};

const MR_EnumFunctorDescPtr mercury_data_transform_hlds__ctgc__structure_reuse__versions__enum_value_ordered_convert_potential_reuse_0[] = {
	&mercury_data_transform_hlds__ctgc__structure_reuse__versions__enum_functor_desc_convert_potential_reuse_0_0,
	&mercury_data_transform_hlds__ctgc__structure_reuse__versions__enum_functor_desc_convert_potential_reuse_0_1
};

const MR_EnumFunctorDescPtr mercury_data_transform_hlds__ctgc__structure_reuse__versions__enum_name_ordered_convert_potential_reuse_0[] = {
	&mercury_data_transform_hlds__ctgc__structure_reuse__versions__enum_functor_desc_convert_potential_reuse_0_0,
	&mercury_data_transform_hlds__ctgc__structure_reuse__versions__enum_functor_desc_convert_potential_reuse_0_1
};

const MR_Integer mercury_data_transform_hlds__ctgc__structure_reuse__versions__functor_number_map_convert_potential_reuse_0[] = {
	0,
	1 };
	
const MR_TypeCtorInfo_Struct mercury_data_transform_hlds__ctgc__structure_reuse__versions__type_ctor_info_convert_potential_reuse_0 = {
	0,
	15,
	-1,
	MR_TYPECTOR_REP_ENUM,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___transform_hlds__ctgc__structure_reuse__versions__convert_potential_reuse_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___transform_hlds__ctgc__structure_reuse__versions__convert_potential_reuse_0_0)),
	"transform_hlds.ctgc.structure_reuse.versions",
	"convert_potential_reuse",
	{ (void *)mercury_data_transform_hlds__ctgc__structure_reuse__versions__enum_name_ordered_convert_potential_reuse_0 },
	{ (void *)mercury_data_transform_hlds__ctgc__structure_reuse__versions__enum_value_ordered_convert_potential_reuse_0 },
	2,
	4,
	mercury_data_transform_hlds__ctgc__structure_reuse__versions__functor_number_map_convert_potential_reuse_0
};
extern const MR_TypeCtorInfo_Struct mercury_data_mdbcomp__prim_data__type_ctor_info_sym_name_0;
extern const MR_TypeCtorInfo_Struct mercury_data_mdbcomp__prim_data__type_ctor_info_sym_name_0;

const MR_TypeCtorInfo_Struct mercury_data_transform_hlds__ctgc__structure_reuse__versions__type_ctor_info_reuse_name_0 = {
	0,
	15,
	-1,
	MR_TYPECTOR_REP_EQUIV_GROUND,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___transform_hlds__ctgc__structure_reuse__versions__reuse_name_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___transform_hlds__ctgc__structure_reuse__versions__reuse_name_0_0)),
	"transform_hlds.ctgc.structure_reuse.versions",
	"reuse_name",
	{ 0 },
	{ (void *)&mercury_data_mdbcomp__prim_data__type_ctor_info_sym_name_0 },
	-1,
	0,
	NULL
};


static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__ctgc__structure_reuse__versions__process_goal_5_0_3 = {
{
MR_PREDICATE,
"transform_hlds.ctgc.structure_reuse.versions",
"transform_hlds.ctgc.structure_reuse.versions",
"process_case",
5,
0
},
"transform_hlds.ctgc.structure_reuse.versions",
"structure_reuse.versions.m",
407,
"79"
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__ctgc__structure_reuse__versions__process_goal_5_0_2 = {
{
MR_PREDICATE,
"transform_hlds.ctgc.structure_reuse.versions",
"transform_hlds.ctgc.structure_reuse.versions",
"process_goal",
5,
0
},
"transform_hlds.ctgc.structure_reuse.versions",
"structure_reuse.versions.m",
401,
"73"
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__ctgc__structure_reuse__versions__process_goal_5_0_1 = {
{
MR_PREDICATE,
"transform_hlds.ctgc.structure_reuse.versions",
"transform_hlds.ctgc.structure_reuse.versions",
"process_goal",
5,
0
},
"transform_hlds.ctgc.structure_reuse.versions",
"structure_reuse.versions.m",
330,
"11"
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__ctgc__structure_reuse__versions__create_reuse_procedures_4_0_4 = {
{
MR_PREDICATE,
"transform_hlds.ctgc.structure_reuse.versions",
"transform_hlds.ctgc.structure_reuse.versions",
"process_proc",
5,
0
},
"transform_hlds.ctgc.structure_reuse.versions",
"structure_reuse.versions.m",
132,
"22"
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__ctgc__structure_reuse__versions__create_reuse_procedures_4_0_3 = {
{
MR_PREDICATE,
"transform_hlds.ctgc.structure_reuse.versions",
"transform_hlds.ctgc.structure_reuse.versions",
"check_cond_process_proc",
5,
0
},
"transform_hlds.ctgc.structure_reuse.versions",
"structure_reuse.versions.m",
125,
"16"
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__ctgc__structure_reuse__versions__create_reuse_procedures_4_0_2 = {
{
MR_PREDICATE,
"transform_hlds.ctgc.structure_reuse.versions",
"transform_hlds.ctgc.structure_reuse.versions",
"maybe_create_full_reuse_proc_copy",
6,
0
},
"transform_hlds.ctgc.structure_reuse.versions",
"structure_reuse.versions.m",
119,
"14"
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__ctgc__structure_reuse__versions__create_reuse_procedures_4_0_1 = {
{
MR_PREDICATE,
"transform_hlds.ctgc.structure_reuse.versions",
"transform_hlds.ctgc.structure_reuse.versions",
"divide_reuse_procs",
7,
0
},
"transform_hlds.ctgc.structure_reuse.versions",
"structure_reuse.versions.m",
112,
"9"
};


extern const MR_TypeCtorInfo_Struct mercury_data_transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_ppid_no_clobbers_0;
MR_decl_entry(fn__bimap__coordinates_1_0);
MR_decl_entry(fn__set__from_list_1_0);
extern const MR_TypeCtorInfo_Struct mercury_data_transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_reuse_as_and_status_0;
MR_decl_entry(map__foldl2_6_0);
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_module__type_ctor_info_module_info_0;
extern const MR_TypeCtorInfo_Struct mercury_data_transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_reuse_as_table_0;
MR_decl_entry(list__map_foldl2_7_0);
MR_decl_entry(list__foldl_4_0);

MR_BEGIN_MODULE(transform_hlds__ctgc__structure_reuse__versions_module0)
	MR_init_entry1(transform_hlds__ctgc__structure_reuse__versions__create_reuse_procedures_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__ctgc__structure_reuse__versions__create_reuse_procedures_4_0);
	MR_init_label8(transform_hlds__ctgc__structure_reuse__versions__create_reuse_procedures_4_0,2,3,6,8,10,11,13,14)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'create_reuse_procedures'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__transform_hlds__ctgc__structure_reuse__versions__create_reuse_procedures_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(3) = MR_r2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__ctgc__structure_reuse__domain, ppid_no_clobbers);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id);
	MR_r3 = MR_tfield(0, MR_sv(1), 1);
	MR_np_call_localret_ent(fn__bimap__coordinates_1_0,
		transform_hlds__ctgc__structure_reuse__versions__create_reuse_procedures_4_0_i2);
MR_def_label(transform_hlds__ctgc__structure_reuse__versions__create_reuse_procedures_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id);
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(fn__set__from_list_1_0,
		transform_hlds__ctgc__structure_reuse__versions__create_reuse_procedures_4_0_i3);
MR_def_label(transform_hlds__ctgc__structure_reuse__versions__create_reuse_procedures_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r5 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(1,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(transform_hlds__ctgc__structure_reuse__versions__divide_reuse_procs_7_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__ctgc__structure_reuse__domain, reuse_as_and_status);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,0,2);
	MR_r4 = MR_r3;
	MR_r6 = MR_tfield(0, MR_sv(1), 0);
	MR_r7 = (MR_Word) MR_tbmkword(0, 0);
	MR_r8 = (MR_Word) MR_tbmkword(0, 0);
	}
	MR_np_call_localret_ent(map__foldl2_6_0,
		transform_hlds__ctgc__structure_reuse__versions__create_reuse_procedures_4_0_i6);
MR_def_label(transform_hlds__ctgc__structure_reuse__versions__create_reuse_procedures_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_tempr2 = MR_sv(3);
	MR_sv(3) = MR_r2;
	MR_sv(6) = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_module, module_info);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id);
	MR_r2 = MR_r1;
	MR_r3 = MR_sv(6);
	MR_r4 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__ctgc__structure_reuse__domain, reuse_as_table);
	MR_r5 = (MR_Word) MR_TAG_COMMON(0,3,0);
	MR_r6 = MR_sv(1);
	MR_r7 = MR_tempr2;
	MR_r8 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__map_foldl2_7_0,
		transform_hlds__ctgc__structure_reuse__versions__create_reuse_procedures_4_0_i8);
MR_def_label(transform_hlds__ctgc__structure_reuse__versions__create_reuse_procedures_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(4,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(transform_hlds__ctgc__structure_reuse__versions__check_cond_process_proc_5_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr1, 3) = (MR_Integer) 0;
	MR_tempr4 = MR_r3;
	MR_tfield(0, MR_tempr1, 4) = MR_tempr4;
	MR_sv(2) = MR_tempr4;
	MR_sv(4) = MR_tempr1;
	MR_tempr2 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id);
	MR_tempr3 = MR_r2;
	MR_r2 = MR_sv(6);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tempr2;
	MR_r5 = MR_tempr3;
	}
	MR_np_call_localret_ent(list__foldl_4_0,
		transform_hlds__ctgc__structure_reuse__versions__create_reuse_procedures_4_0_i10);
MR_def_label(transform_hlds__ctgc__structure_reuse__versions__create_reuse_procedures_4_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(5);
	MR_r5 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__foldl_4_0,
		transform_hlds__ctgc__structure_reuse__versions__create_reuse_procedures_4_0_i11);
MR_def_label(transform_hlds__ctgc__structure_reuse__versions__create_reuse_procedures_4_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(4,1);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(transform_hlds__ctgc__structure_reuse__versions__process_proc_5_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr1, 3) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 4) = MR_sv(2);
	MR_sv(5) = MR_tempr1;
	MR_tempr2 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id);
	MR_r2 = MR_sv(6);
	MR_r4 = MR_sv(1);
	MR_r5 = MR_tempr2;
	}
	MR_np_call_localret_ent(list__foldl_4_0,
		transform_hlds__ctgc__structure_reuse__versions__create_reuse_procedures_4_0_i13);
MR_def_label(transform_hlds__ctgc__structure_reuse__versions__create_reuse_procedures_4_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(5);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__foldl_4_0,
		transform_hlds__ctgc__structure_reuse__versions__create_reuse_procedures_4_0_i14);
MR_def_label(transform_hlds__ctgc__structure_reuse__versions__create_reuse_procedures_4_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	MR_decr_sp_and_return(7);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__hlds_module__module_info_pred_proc_info_4_0);
MR_decl_entry(fn__hlds__hlds_pred__pred_info_module_1_0);
MR_decl_entry(fn__hlds__hlds_pred__pred_info_is_pred_or_func_1_0);
MR_decl_entry(fn__hlds__hlds_pred__pred_info_name_1_0);
MR_decl_entry(hlds__hlds_pred__proc_id_to_int_2_0);
MR_decl_entry(parse_tree__prog_util__make_pred_name_6_0);
MR_decl_entry(hlds__hlds_pred__pred_info_get_context_2_0);
MR_decl_entry(hlds__hlds_pred__pred_info_get_origin_2_0);
MR_decl_entry(hlds__hlds_pred__pred_info_get_import_status_2_0);
MR_decl_entry(hlds__hlds_pred__pred_info_get_markers_2_0);
MR_decl_entry(hlds__hlds_pred__pred_info_get_arg_types_2_0);
MR_decl_entry(hlds__hlds_pred__pred_info_get_typevarset_2_0);
MR_decl_entry(hlds__hlds_pred__pred_info_get_exist_quant_tvars_2_0);
MR_decl_entry(hlds__hlds_pred__pred_info_get_class_context_2_0);
MR_decl_entry(hlds__hlds_pred__pred_info_get_assertions_2_0);
MR_decl_entry(hlds__hlds_pred__pred_info_get_var_name_remap_2_0);
MR_decl_entry(hlds__hlds_pred__pred_info_create_16_0);
MR_decl_entry(hlds__hlds_module__module_info_get_predicate_table_2_0);
MR_decl_entry(hlds__pred_table__predicate_table_insert_4_0);
MR_decl_entry(hlds__hlds_module__module_info_set_predicate_table_3_0);
MR_decl_entry(hlds__hlds_module__module_info_get_structure_reuse_preds_2_0);
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_pred_id_0;
MR_decl_entry(set__insert_3_0);
MR_decl_entry(hlds__hlds_module__module_info_set_structure_reuse_preds_3_0);

MR_BEGIN_MODULE(transform_hlds__ctgc__structure_reuse__versions_module1)
	MR_init_entry1(transform_hlds__ctgc__structure_reuse__versions__create_fresh_pred_proc_info_copy_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__ctgc__structure_reuse__versions__create_fresh_pred_proc_info_copy_5_0);
	MR_init_label10(transform_hlds__ctgc__structure_reuse__versions__create_fresh_pred_proc_info_copy_5_0,2,3,4,5,6,7,10,11,12,13)
	MR_init_label10(transform_hlds__ctgc__structure_reuse__versions__create_fresh_pred_proc_info_copy_5_0,14,15,16,18,19,20,21,22,23,24)
	MR_init_label8(transform_hlds__ctgc__structure_reuse__versions__create_fresh_pred_proc_info_copy_5_0,25,27,28,29,31,32,33,34)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'create_fresh_pred_proc_info_copy'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__transform_hlds__ctgc__structure_reuse__versions__create_fresh_pred_proc_info_copy_5_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(16);
	MR_sv(16) = (MR_Word) MR_succip;
	MR_sv(2) = MR_r1;
	MR_sv(3) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(4) = MR_tempr1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(2);
	}
	MR_np_call_localret_ent(hlds__hlds_module__module_info_pred_proc_info_4_0,
		transform_hlds__ctgc__structure_reuse__versions__create_fresh_pred_proc_info_copy_5_0_i2);
MR_def_label(transform_hlds__ctgc__structure_reuse__versions__create_fresh_pred_proc_info_copy_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(15) = MR_r1;
	MR_sv(1) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(5) = MR_tfield(0, MR_tempr1, 1);
	MR_r1 = MR_sv(4);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_module__module_info_pred_proc_info_4_0,
		transform_hlds__ctgc__structure_reuse__versions__create_fresh_pred_proc_info_copy_5_0_i3);
MR_def_label(transform_hlds__ctgc__structure_reuse__versions__create_fresh_pred_proc_info_copy_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_np_call_localret_ent(fn__hlds__hlds_pred__pred_info_module_1_0,
		transform_hlds__ctgc__structure_reuse__versions__create_fresh_pred_proc_info_copy_5_0_i4);
MR_def_label(transform_hlds__ctgc__structure_reuse__versions__create_fresh_pred_proc_info_copy_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_r1 = MR_sv(6);
	MR_np_call_localret_ent(fn__hlds__hlds_pred__pred_info_is_pred_or_func_1_0,
		transform_hlds__ctgc__structure_reuse__versions__create_fresh_pred_proc_info_copy_5_0_i5);
MR_def_label(transform_hlds__ctgc__structure_reuse__versions__create_fresh_pred_proc_info_copy_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(6);
	MR_sv(6) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__hlds__hlds_pred__pred_info_name_1_0,
		transform_hlds__ctgc__structure_reuse__versions__create_fresh_pred_proc_info_copy_5_0_i6);
MR_def_label(transform_hlds__ctgc__structure_reuse__versions__create_fresh_pred_proc_info_copy_5_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(5);
	MR_sv(5) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(hlds__hlds_pred__proc_id_to_int_2_0,
		transform_hlds__ctgc__structure_reuse__versions__create_fresh_pred_proc_info_copy_5_0_i7);
MR_def_label(transform_hlds__ctgc__structure_reuse__versions__create_fresh_pred_proc_info_copy_5_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r3, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r3, 0) = MR_sv(6);
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_r5 = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_tfield(3, MR_tempr1, 2) = MR_sv(3);
	MR_r1 = MR_sv(7);
	MR_r2 = (MR_Word) MR_string_const("ctgc", 4);
	MR_r4 = MR_sv(5);
	}
	MR_np_call_localret_ent(parse_tree__prog_util__make_pred_name_6_0,
		transform_hlds__ctgc__structure_reuse__versions__create_fresh_pred_proc_info_copy_5_0_i10);
MR_def_label(transform_hlds__ctgc__structure_reuse__versions__create_fresh_pred_proc_info_copy_5_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_sv(3) = MR_tfield(0, MR_r2, 0);
	MR_r1 = MR_sv(15);
	MR_np_call_localret_ent(fn__hlds__hlds_pred__pred_info_module_1_0,
		transform_hlds__ctgc__structure_reuse__versions__create_fresh_pred_proc_info_copy_5_0_i11);
MR_def_label(transform_hlds__ctgc__structure_reuse__versions__create_fresh_pred_proc_info_copy_5_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(15);
	MR_np_call_localret_ent(fn__hlds__hlds_pred__pred_info_is_pred_or_func_1_0,
		transform_hlds__ctgc__structure_reuse__versions__create_fresh_pred_proc_info_copy_5_0_i12);
MR_def_label(transform_hlds__ctgc__structure_reuse__versions__create_fresh_pred_proc_info_copy_5_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(15);
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_context_2_0,
		transform_hlds__ctgc__structure_reuse__versions__create_fresh_pred_proc_info_copy_5_0_i13);
MR_def_label(transform_hlds__ctgc__structure_reuse__versions__create_fresh_pred_proc_info_copy_5_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_r1 = MR_sv(15);
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_origin_2_0,
		transform_hlds__ctgc__structure_reuse__versions__create_fresh_pred_proc_info_copy_5_0_i14);
MR_def_label(transform_hlds__ctgc__structure_reuse__versions__create_fresh_pred_proc_info_copy_5_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_r1 = MR_sv(15);
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_import_status_2_0,
		transform_hlds__ctgc__structure_reuse__versions__create_fresh_pred_proc_info_copy_5_0_i15);
MR_def_label(transform_hlds__ctgc__structure_reuse__versions__create_fresh_pred_proc_info_copy_5_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(transform_hlds__ctgc__structure_reuse__versions__create_fresh_pred_proc_info_copy_5_0_i16);
	}
	MR_r1 = MR_sv(15);
	MR_sv(9) = (MR_Word) MR_tbmkword(0, 8);
	MR_GOTO_LAB(transform_hlds__ctgc__structure_reuse__versions__create_fresh_pred_proc_info_copy_5_0_i18);
MR_def_label(transform_hlds__ctgc__structure_reuse__versions__create_fresh_pred_proc_info_copy_5_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_r1;
	MR_r1 = MR_sv(15);
MR_def_label(transform_hlds__ctgc__structure_reuse__versions__create_fresh_pred_proc_info_copy_5_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(15) = MR_r1;
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_markers_2_0,
		transform_hlds__ctgc__structure_reuse__versions__create_fresh_pred_proc_info_copy_5_0_i19);
MR_def_label(transform_hlds__ctgc__structure_reuse__versions__create_fresh_pred_proc_info_copy_5_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(10) = MR_r1;
	MR_r1 = MR_sv(15);
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_arg_types_2_0,
		transform_hlds__ctgc__structure_reuse__versions__create_fresh_pred_proc_info_copy_5_0_i20);
MR_def_label(transform_hlds__ctgc__structure_reuse__versions__create_fresh_pred_proc_info_copy_5_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(11) = MR_r1;
	MR_r1 = MR_sv(15);
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_typevarset_2_0,
		transform_hlds__ctgc__structure_reuse__versions__create_fresh_pred_proc_info_copy_5_0_i21);
MR_def_label(transform_hlds__ctgc__structure_reuse__versions__create_fresh_pred_proc_info_copy_5_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(12) = MR_r1;
	MR_r1 = MR_sv(15);
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_exist_quant_tvars_2_0,
		transform_hlds__ctgc__structure_reuse__versions__create_fresh_pred_proc_info_copy_5_0_i22);
MR_def_label(transform_hlds__ctgc__structure_reuse__versions__create_fresh_pred_proc_info_copy_5_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(13) = MR_r1;
	MR_r1 = MR_sv(15);
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_class_context_2_0,
		transform_hlds__ctgc__structure_reuse__versions__create_fresh_pred_proc_info_copy_5_0_i23);
MR_def_label(transform_hlds__ctgc__structure_reuse__versions__create_fresh_pred_proc_info_copy_5_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(14) = MR_r1;
	MR_r1 = MR_sv(15);
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_assertions_2_0,
		transform_hlds__ctgc__structure_reuse__versions__create_fresh_pred_proc_info_copy_5_0_i24);
MR_def_label(transform_hlds__ctgc__structure_reuse__versions__create_fresh_pred_proc_info_copy_5_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(15);
	MR_sv(15) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_var_name_remap_2_0,
		transform_hlds__ctgc__structure_reuse__versions__create_fresh_pred_proc_info_copy_5_0_i25);
MR_def_label(transform_hlds__ctgc__structure_reuse__versions__create_fresh_pred_proc_info_copy_5_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 3);
	MR_r5 = MR_tempr1;
	MR_tfield(2, MR_tempr1, 0) = (MR_Word) MR_tbmkword(0, 3);
	MR_tfield(2, MR_tempr1, 1) = MR_sv(8);
	MR_tfield(2, MR_tempr1, 2) = MR_sv(3);
	MR_tempr2 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(6);
	MR_r4 = MR_sv(7);
	MR_r6 = MR_sv(9);
	MR_r7 = MR_sv(10);
	MR_r8 = MR_sv(11);
	MR_r9 = MR_sv(12);
	MR_r10 = MR_sv(13);
	MR_r11 = MR_sv(14);
	MR_r12 = MR_sv(15);
	MR_r13 = MR_tempr2;
	MR_r14 = MR_sv(1);
	}
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_create_16_0,
		transform_hlds__ctgc__structure_reuse__versions__create_fresh_pred_proc_info_copy_5_0_i27);
MR_def_label(transform_hlds__ctgc__structure_reuse__versions__create_fresh_pred_proc_info_copy_5_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_predicate_table_2_0,
		transform_hlds__ctgc__structure_reuse__versions__create_fresh_pred_proc_info_copy_5_0_i28);
MR_def_label(transform_hlds__ctgc__structure_reuse__versions__create_fresh_pred_proc_info_copy_5_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__pred_table__predicate_table_insert_4_0,
		transform_hlds__ctgc__structure_reuse__versions__create_fresh_pred_proc_info_copy_5_0_i29);
MR_def_label(transform_hlds__ctgc__structure_reuse__versions__create_fresh_pred_proc_info_copy_5_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_sv(2) = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tfield(0, MR_tempr1, 1) = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = MR_r2;
	MR_r2 = MR_sv(4);
	}
	MR_np_call_localret_ent(hlds__hlds_module__module_info_set_predicate_table_3_0,
		transform_hlds__ctgc__structure_reuse__versions__create_fresh_pred_proc_info_copy_5_0_i31);
MR_def_label(transform_hlds__ctgc__structure_reuse__versions__create_fresh_pred_proc_info_copy_5_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(15) = MR_r1;
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_structure_reuse_preds_2_0,
		transform_hlds__ctgc__structure_reuse__versions__create_fresh_pred_proc_info_copy_5_0_i32);
MR_def_label(transform_hlds__ctgc__structure_reuse__versions__create_fresh_pred_proc_info_copy_5_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_id);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(set__insert_3_0,
		transform_hlds__ctgc__structure_reuse__versions__create_fresh_pred_proc_info_copy_5_0_i33);
MR_def_label(transform_hlds__ctgc__structure_reuse__versions__create_fresh_pred_proc_info_copy_5_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(15);
	MR_np_call_localret_ent(hlds__hlds_module__module_info_set_structure_reuse_preds_3_0,
		transform_hlds__ctgc__structure_reuse__versions__create_fresh_pred_proc_info_copy_5_0_i34);
MR_def_label(transform_hlds__ctgc__structure_reuse__versions__create_fresh_pred_proc_info_copy_5_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	MR_decr_sp_and_return(16);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__hlds_pred__proc_info_interface_determinism_2_0);
MR_decl_entry(hlds__hlds_pred__proc_info_get_goal_2_0);
MR_decl_entry(hlds__hlds_pred__proc_info_get_headvars_2_0);
MR_decl_entry(hlds__hlds_goal__goal_info_set_determinism_3_0);
MR_decl_entry(hlds__hlds_pred__proc_info_set_goal_3_0);
MR_decl_entry(hlds__hlds_module__module_info_set_pred_proc_info_5_0);

MR_BEGIN_MODULE(transform_hlds__ctgc__structure_reuse__versions_module2)
	MR_init_entry1(transform_hlds__ctgc__structure_reuse__versions__create_fake_reuse_procedure_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__ctgc__structure_reuse__versions__create_fake_reuse_procedure_4_0);
	MR_init_label10(transform_hlds__ctgc__structure_reuse__versions__create_fake_reuse_procedure_4_0,2,3,4,5,6,7,8,9,12,14)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'create_fake_reuse_procedure'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__transform_hlds__ctgc__structure_reuse__versions__create_fake_reuse_procedure_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(11);
	MR_sv(11) = (MR_Word) MR_succip;
	MR_sv(6) = MR_r1;
	MR_sv(5) = MR_r2;
	MR_sv(1) = MR_tfield(0, MR_r1, 0);
	MR_sv(2) = MR_tfield(0, MR_r1, 1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(7) = MR_tempr1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(6);
	}
	MR_np_call_localret_ent(hlds__hlds_module__module_info_pred_proc_info_4_0,
		transform_hlds__ctgc__structure_reuse__versions__create_fake_reuse_procedure_4_0_i2);
MR_def_label(transform_hlds__ctgc__structure_reuse__versions__create_fake_reuse_procedure_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_sv(4) = MR_r2;
	MR_np_call_localret_ent(fn__hlds__hlds_pred__pred_info_module_1_0,
		transform_hlds__ctgc__structure_reuse__versions__create_fake_reuse_procedure_4_0_i3);
MR_def_label(transform_hlds__ctgc__structure_reuse__versions__create_fake_reuse_procedure_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__hlds__hlds_pred__pred_info_name_1_0,
		transform_hlds__ctgc__structure_reuse__versions__create_fake_reuse_procedure_4_0_i4);
MR_def_label(transform_hlds__ctgc__structure_reuse__versions__create_fake_reuse_procedure_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_interface_determinism_2_0,
		transform_hlds__ctgc__structure_reuse__versions__create_fake_reuse_procedure_4_0_i5);
MR_def_label(transform_hlds__ctgc__structure_reuse__versions__create_fake_reuse_procedure_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(6);
	MR_sv(6) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(7);
	}
	MR_np_call_localret_ent(transform_hlds__ctgc__structure_reuse__versions__create_fresh_pred_proc_info_copy_5_0,
		transform_hlds__ctgc__structure_reuse__versions__create_fake_reuse_procedure_4_0_i6);
MR_def_label(transform_hlds__ctgc__structure_reuse__versions__create_fake_reuse_procedure_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_sv(8) = MR_r2;
	MR_r1 = MR_r2;
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(hlds__hlds_module__module_info_pred_proc_info_4_0,
		transform_hlds__ctgc__structure_reuse__versions__create_fake_reuse_procedure_4_0_i7);
MR_def_label(transform_hlds__ctgc__structure_reuse__versions__create_fake_reuse_procedure_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_r1;
	MR_sv(10) = MR_r2;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_goal_2_0,
		transform_hlds__ctgc__structure_reuse__versions__create_fake_reuse_procedure_4_0_i8);
MR_def_label(transform_hlds__ctgc__structure_reuse__versions__create_fake_reuse_procedure_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_tfield(0, MR_r1, 1);
	MR_r1 = MR_sv(10);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_headvars_2_0,
		transform_hlds__ctgc__structure_reuse__versions__create_fake_reuse_procedure_4_0_i9);
MR_def_label(transform_hlds__ctgc__structure_reuse__versions__create_fake_reuse_procedure_4_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(3);
	MR_tfield(1, MR_tempr1, 1) = MR_sv(4);
	MR_tag_alloc_heap(MR_tempr2, 2, (MR_Integer) 6);
	MR_tfield(2, MR_tempr2, 0) = MR_sv(1);
	MR_tfield(2, MR_tempr2, 1) = MR_sv(2);
	MR_tfield(2, MR_tempr2, 2) = MR_r1;
	MR_tfield(2, MR_tempr2, 3) = (MR_Integer) 2;
	MR_tfield(2, MR_tempr2, 4) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(2, MR_tempr2, 5) = MR_tempr1;
	MR_tempr1 = MR_sv(6);
	MR_sv(6) = MR_tempr2;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(7);
	}
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_set_determinism_3_0,
		transform_hlds__ctgc__structure_reuse__versions__create_fake_reuse_procedure_4_0_i12);
MR_def_label(transform_hlds__ctgc__structure_reuse__versions__create_fake_reuse_procedure_4_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(6);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(10);
	}
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_set_goal_3_0,
		transform_hlds__ctgc__structure_reuse__versions__create_fake_reuse_procedure_4_0_i14);
MR_def_label(transform_hlds__ctgc__structure_reuse__versions__create_fake_reuse_procedure_4_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(9);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(8);
	MR_succip_word = MR_sv(11);
	MR_decr_sp(11);
	MR_np_tailcall_ent(hlds__hlds_module__module_info_set_pred_proc_info_5_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(set__contains_2_0);
MR_decl_entry(transform_hlds__ctgc__structure_reuse__domain__reuse_as_conditional_reuses_1_0);
MR_decl_entry(transform_hlds__ctgc__structure_reuse__domain__reuse_as_all_unconditional_reuses_1_0);
MR_decl_entry(transform_hlds__ctgc__structure_reuse__domain__reuse_as_no_reuses_1_0);
MR_decl_entry(require__unexpected_3_0);

MR_BEGIN_MODULE(transform_hlds__ctgc__structure_reuse__versions_module3)
	MR_init_entry1(transform_hlds__ctgc__structure_reuse__versions__divide_reuse_procs_7_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__ctgc__structure_reuse__versions__divide_reuse_procs_7_0);
	MR_init_label8(transform_hlds__ctgc__structure_reuse__versions__divide_reuse_procs_7_0,3,2,7,6,12,11,16,15)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'divide_reuse_procs'/7 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__ctgc__structure_reuse__versions__divide_reuse_procs_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(2) = MR_tfield(0, MR_r3, 0);
	MR_sv(1) = MR_r2;
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_r5;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(1);
	}
	MR_np_call_localret_ent(set__contains_2_0,
		transform_hlds__ctgc__structure_reuse__versions__divide_reuse_procs_7_0_i3);
MR_def_label(transform_hlds__ctgc__structure_reuse__versions__divide_reuse_procs_7_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__ctgc__structure_reuse__versions__divide_reuse_procs_7_0_i2);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(4);
	MR_decr_sp_and_return(5);
MR_def_label(transform_hlds__ctgc__structure_reuse__versions__divide_reuse_procs_7_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(transform_hlds__ctgc__structure_reuse__domain__reuse_as_conditional_reuses_1_0,
		transform_hlds__ctgc__structure_reuse__versions__divide_reuse_procs_7_0_i7);
MR_def_label(transform_hlds__ctgc__structure_reuse__versions__divide_reuse_procs_7_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__ctgc__structure_reuse__versions__divide_reuse_procs_7_0_i6);
	}
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = MR_sv(1);
	MR_tfield(1, MR_r1, 1) = MR_sv(3);
	MR_r2 = MR_sv(4);
	MR_decr_sp_and_return(5);
MR_def_label(transform_hlds__ctgc__structure_reuse__versions__divide_reuse_procs_7_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(transform_hlds__ctgc__structure_reuse__domain__reuse_as_all_unconditional_reuses_1_0,
		transform_hlds__ctgc__structure_reuse__versions__divide_reuse_procs_7_0_i12);
MR_def_label(transform_hlds__ctgc__structure_reuse__versions__divide_reuse_procs_7_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__ctgc__structure_reuse__versions__divide_reuse_procs_7_0_i11);
	}
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(1);
	MR_tfield(1, MR_r2, 1) = MR_sv(4);
	MR_r1 = MR_sv(3);
	MR_decr_sp_and_return(5);
MR_def_label(transform_hlds__ctgc__structure_reuse__versions__divide_reuse_procs_7_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(transform_hlds__ctgc__structure_reuse__domain__reuse_as_no_reuses_1_0,
		transform_hlds__ctgc__structure_reuse__versions__divide_reuse_procs_7_0_i16);
MR_def_label(transform_hlds__ctgc__structure_reuse__versions__divide_reuse_procs_7_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__ctgc__structure_reuse__versions__divide_reuse_procs_7_0_i15);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(4);
	MR_decr_sp_and_return(5);
MR_def_label(transform_hlds__ctgc__structure_reuse__versions__divide_reuse_procs_7_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("transform_hlds.ctgc.structure_reuse.versions", 44);
	MR_r2 = (MR_Word) MR_string_const("predicate \140transform_hlds.ctgc.structure_reuse.versions.divide_reuse_procs\'/7", 77);
	MR_r3 = (MR_Word) MR_string_const("conditions failed", 17);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(require__unexpected_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(transform_hlds__ctgc__structure_reuse__domain__reuse_as_table_search_reuse_version_proc_4_0);
MR_decl_entry(transform_hlds__ctgc__structure_reuse__domain__reuse_as_table_search_3_0);
MR_decl_entry(transform_hlds__ctgc__structure_reuse__domain__reuse_as_table_set_4_0);
MR_decl_entry(transform_hlds__ctgc__structure_reuse__domain__reuse_as_table_insert_reuse_version_proc_5_0);

MR_BEGIN_MODULE(transform_hlds__ctgc__structure_reuse__versions_module4)
	MR_init_entry1(transform_hlds__ctgc__structure_reuse__versions__maybe_create_full_reuse_proc_copy_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__ctgc__structure_reuse__versions__maybe_create_full_reuse_proc_copy_6_0);
	MR_init_label8(transform_hlds__ctgc__structure_reuse__versions__maybe_create_full_reuse_proc_copy_6_0,3,2,6,7,10,12,13,8)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'maybe_create_full_reuse_proc_copy'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__ctgc__structure_reuse__versions__maybe_create_full_reuse_proc_copy_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(4) = MR_tempr1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(1);
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	}
	MR_np_call_localret_ent(transform_hlds__ctgc__structure_reuse__domain__reuse_as_table_search_reuse_version_proc_4_0,
		transform_hlds__ctgc__structure_reuse__versions__maybe_create_full_reuse_proc_copy_6_0_i3);
MR_def_label(transform_hlds__ctgc__structure_reuse__versions__maybe_create_full_reuse_proc_copy_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__ctgc__structure_reuse__versions__maybe_create_full_reuse_proc_copy_6_0_i2);
	}
	MR_r1 = (MR_Word) MR_string_const("transform_hlds.ctgc.structure_reuse.versions", 44);
	MR_r2 = (MR_Word) MR_string_const("predicate \140transform_hlds.ctgc.structure_reuse.versions.maybe_create_full_reuse_proc_copy\'/6", 92);
	MR_r3 = (MR_Word) MR_string_const("procedure already exists", 24);
	MR_np_call_localret_ent(require__unexpected_3_0,
		transform_hlds__ctgc__structure_reuse__versions__maybe_create_full_reuse_proc_copy_6_0_i6);
MR_def_label(transform_hlds__ctgc__structure_reuse__versions__maybe_create_full_reuse_proc_copy_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
MR_def_label(transform_hlds__ctgc__structure_reuse__versions__maybe_create_full_reuse_proc_copy_6_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(transform_hlds__ctgc__structure_reuse__versions__create_fresh_pred_proc_info_copy_5_0,
		transform_hlds__ctgc__structure_reuse__versions__maybe_create_full_reuse_proc_copy_6_0_i7);
MR_def_label(transform_hlds__ctgc__structure_reuse__versions__maybe_create_full_reuse_proc_copy_6_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_sv(3) = MR_r2;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(transform_hlds__ctgc__structure_reuse__domain__reuse_as_table_search_3_0,
		transform_hlds__ctgc__structure_reuse__versions__maybe_create_full_reuse_proc_copy_6_0_i10);
MR_def_label(transform_hlds__ctgc__structure_reuse__versions__maybe_create_full_reuse_proc_copy_6_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__ctgc__structure_reuse__versions__maybe_create_full_reuse_proc_copy_6_0_i8);
	}
	MR_r1 = MR_sv(2);
	MR_r3 = MR_sv(4);
	MR_np_call_localret_ent(transform_hlds__ctgc__structure_reuse__domain__reuse_as_table_set_4_0,
		transform_hlds__ctgc__structure_reuse__versions__maybe_create_full_reuse_proc_copy_6_0_i12);
MR_def_label(transform_hlds__ctgc__structure_reuse__versions__maybe_create_full_reuse_proc_copy_6_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(transform_hlds__ctgc__structure_reuse__domain__reuse_as_table_insert_reuse_version_proc_5_0,
		transform_hlds__ctgc__structure_reuse__versions__maybe_create_full_reuse_proc_copy_6_0_i13);
MR_def_label(transform_hlds__ctgc__structure_reuse__versions__maybe_create_full_reuse_proc_copy_6_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_tempr1;
	MR_decr_sp_and_return(5);
	}
MR_def_label(transform_hlds__ctgc__structure_reuse__versions__maybe_create_full_reuse_proc_copy_6_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(3);
	MR_r1 = (MR_Word) MR_string_const("transform_hlds.ctgc.structure_reuse.versions", 44);
	MR_r2 = (MR_Word) MR_string_const("predicate \140transform_hlds.ctgc.structure_reuse.versions.maybe_create_full_reuse_proc_copy\'/6", 92);
	MR_r3 = (MR_Word) MR_string_const("no reuse information", 20);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(require__unexpected_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__ctgc__structure_reuse__versions_module5)
	MR_init_entry1(transform_hlds__ctgc__structure_reuse__versions__unification_set_reuse_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__ctgc__structure_reuse__versions__unification_set_reuse_3_0);
	MR_init_label2(transform_hlds__ctgc__structure_reuse__versions__unification_set_reuse_3_0,12,6)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'unification_set_reuse'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__ctgc__structure_reuse__versions__unification_set_reuse_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r2,0)) {
		MR_GOTO_LAB(transform_hlds__ctgc__structure_reuse__versions__unification_set_reuse_3_0_i12);
	}
	if (MR_PTAG_TESTR(MR_r1,1)) {
		MR_GOTO_LAB(transform_hlds__ctgc__structure_reuse__versions__unification_set_reuse_3_0_i12);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(0, MR_r2, 4);
	if (MR_LTAGS_TESTR(MR_tempr1,0,0)) {
		MR_GOTO_LAB(transform_hlds__ctgc__structure_reuse__versions__unification_set_reuse_3_0_i6);
	}
	}
MR_def_label(transform_hlds__ctgc__structure_reuse__versions__unification_set_reuse_3_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_proceed();
MR_def_label(transform_hlds__ctgc__structure_reuse__versions__unification_set_reuse_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr1, 0) = MR_tfield(1, MR_r1, 0);
	MR_tfield(0, MR_tempr1, 1) = MR_tfield(1, MR_r1, 2);
	MR_tfield(0, MR_tempr1, 2) = MR_tfield(1, MR_r1, 3);
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 7);
	MR_tfield(0, MR_r1, 0) = MR_tfield(0, MR_r2, 0);
	MR_tfield(0, MR_r1, 1) = MR_tfield(0, MR_r2, 1);
	MR_tfield(0, MR_r1, 2) = MR_tfield(0, MR_r2, 2);
	MR_tfield(0, MR_r1, 3) = MR_tfield(0, MR_r2, 3);
	MR_tfield(0, MR_r1, 4) = (MR_Word) MR_tmkword(1, (MR_Word *) MR_tempr1);
	MR_tfield(0, MR_r1, 5) = MR_tfield(0, MR_r2, 5);
	MR_tfield(0, MR_r1, 6) = MR_tfield(0, MR_r2, 6);
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__hlds_module__module_info_pred_info_3_0);

MR_BEGIN_MODULE(transform_hlds__ctgc__structure_reuse__versions_module6)
	MR_init_entry1(transform_hlds__ctgc__structure_reuse__versions__determine_reuse_version_9_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__ctgc__structure_reuse__versions__determine_reuse_version_9_0);
	MR_init_label5(transform_hlds__ctgc__structure_reuse__versions__determine_reuse_version_9_0,4,6,7,8,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'determine_reuse_version'/9 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__ctgc__structure_reuse__versions__determine_reuse_version_9_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tempr2 = MR_r3;
	MR_tfield(0, MR_tempr1, 0) = MR_tempr2;
	MR_tempr3 = MR_r4;
	MR_tfield(0, MR_tempr1, 1) = MR_tempr3;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_tempr2;
	MR_sv(4) = MR_tempr3;
	MR_sv(1) = MR_r5;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_r6;
	}
	MR_np_call_localret_ent(transform_hlds__ctgc__structure_reuse__domain__reuse_as_table_search_reuse_version_proc_4_0,
		transform_hlds__ctgc__structure_reuse__versions__determine_reuse_version_9_0_i4);
MR_def_label(transform_hlds__ctgc__structure_reuse__versions__determine_reuse_version_9_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__ctgc__structure_reuse__versions__determine_reuse_version_9_0_i2);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_tfield(0, MR_r2, 0);
	MR_sv(3) = MR_tfield(0, MR_r2, 1);
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(2);
	}
	MR_np_call_localret_ent(hlds__hlds_module__module_info_pred_info_3_0,
		transform_hlds__ctgc__structure_reuse__versions__determine_reuse_version_9_0_i6);
MR_def_label(transform_hlds__ctgc__structure_reuse__versions__determine_reuse_version_9_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_np_call_localret_ent(fn__hlds__hlds_pred__pred_info_module_1_0,
		transform_hlds__ctgc__structure_reuse__versions__determine_reuse_version_9_0_i7);
MR_def_label(transform_hlds__ctgc__structure_reuse__versions__determine_reuse_version_9_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__hlds__hlds_pred__pred_info_name_1_0,
		transform_hlds__ctgc__structure_reuse__versions__determine_reuse_version_9_0_i8);
MR_def_label(transform_hlds__ctgc__structure_reuse__versions__determine_reuse_version_9_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(4);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(3);
	MR_decr_sp_and_return(5);
	}
MR_def_label(transform_hlds__ctgc__structure_reuse__versions__determine_reuse_version_9_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(1);
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_goal__type_ctor_info_hlds_goal_0;
MR_decl_entry(list__map_3_0);
MR_decl_entry(fn__hlds__hlds_goal__goal_info_get_reuse_1_0);
MR_decl_entry(hlds__hlds_goal__goal_info_set_reuse_3_0);
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_goal__type_ctor_info_case_0;

MR_BEGIN_MODULE(transform_hlds__ctgc__structure_reuse__versions_module7)
	MR_init_entry1(transform_hlds__ctgc__structure_reuse__versions__process_goal_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__ctgc__structure_reuse__versions__process_goal_5_0);
	MR_init_label10(transform_hlds__ctgc__structure_reuse__versions__process_goal_5_0,180,3,6,4,11,9,14,16,17,18)
	MR_init_label10(transform_hlds__ctgc__structure_reuse__versions__process_goal_5_0,15,21,23,27,24,34,22,42,45,41)
	MR_init_label10(transform_hlds__ctgc__structure_reuse__versions__process_goal_5_0,51,49,55,57,58,92,59,64,66,60)
	MR_init_label3(transform_hlds__ctgc__structure_reuse__versions__process_goal_5_0,68,70,54)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'process_goal'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__ctgc__structure_reuse__versions__process_goal_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
MR_def_label(transform_hlds__ctgc__structure_reuse__versions__process_goal_5_0,180)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r4;
	MR_tempr1 = MR_tfield(0, MR_tempr2, 0);
	MR_r5 = MR_tempr1;
	if (MR_RTAGS_TESTR(MR_tempr1,3,1)) {
		MR_GOTO_LAB(transform_hlds__ctgc__structure_reuse__versions__process_goal_5_0_i3);
	}
	MR_r1 = MR_tempr2;
	MR_proceed();
	}
MR_def_label(transform_hlds__ctgc__structure_reuse__versions__process_goal_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r5,3,2)) {
		MR_GOTO_LAB(transform_hlds__ctgc__structure_reuse__versions__process_goal_5_0_i4);
	}
	MR_incr_sp(12);
	MR_sv(12) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 6);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(4,2);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_LABEL_AP(transform_hlds__ctgc__structure_reuse__versions__process_goal_5_0_i180);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 3;
	MR_tfield(0, MR_tempr1, 3) = MR_r1;
	MR_tfield(0, MR_tempr1, 4) = MR_r2;
	MR_tfield(0, MR_tempr1, 5) = MR_r3;
	MR_sv(1) = MR_tfield(0, MR_r4, 1);
	MR_tempr2 = MR_r5;
	MR_sv(10) = MR_tfield(3, MR_tempr2, 1);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	MR_r2 = MR_r1;
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tfield(3, MR_tempr2, 2);
	}
	MR_np_call_localret_ent(list__map_3_0,
		transform_hlds__ctgc__structure_reuse__versions__process_goal_5_0_i6);
MR_def_label(transform_hlds__ctgc__structure_reuse__versions__process_goal_5_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 3, (MR_Integer) 3);
	MR_tfield(3, MR_r2, 0) = (MR_Integer) 2;
	MR_tfield(3, MR_r2, 1) = MR_sv(10);
	MR_tfield(3, MR_r2, 2) = MR_r1;
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r1, 0) = MR_r2;
	MR_tfield(0, MR_r1, 1) = MR_sv(1);
	MR_decr_sp_and_return(12);
MR_def_label(transform_hlds__ctgc__structure_reuse__versions__process_goal_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r5,3,3)) {
		MR_GOTO_LAB(transform_hlds__ctgc__structure_reuse__versions__process_goal_5_0_i9);
	}
	MR_incr_sp(12);
	MR_sv(12) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 6);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(4,3);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_LABEL_AP(transform_hlds__ctgc__structure_reuse__versions__process_goal_5_0_i180);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 3;
	MR_tfield(0, MR_tempr1, 3) = MR_r1;
	MR_tfield(0, MR_tempr1, 4) = MR_r2;
	MR_tfield(0, MR_tempr1, 5) = MR_r3;
	MR_sv(1) = MR_tfield(0, MR_r4, 1);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	MR_r2 = MR_r1;
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tfield(3, MR_r5, 1);
	}
	MR_np_call_localret_ent(list__map_3_0,
		transform_hlds__ctgc__structure_reuse__versions__process_goal_5_0_i11);
MR_def_label(transform_hlds__ctgc__structure_reuse__versions__process_goal_5_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 3;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r1, 0) = MR_tempr1;
	MR_tfield(0, MR_r1, 1) = MR_sv(1);
	MR_decr_sp_and_return(12);
	}
MR_def_label(transform_hlds__ctgc__structure_reuse__versions__process_goal_5_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r5,3,0)) {
		MR_GOTO_LAB(transform_hlds__ctgc__structure_reuse__versions__process_goal_5_0_i14);
	}
	MR_r1 = MR_r4;
	MR_proceed();
MR_def_label(transform_hlds__ctgc__structure_reuse__versions__process_goal_5_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r5,3,6)) {
		MR_GOTO_LAB(transform_hlds__ctgc__structure_reuse__versions__process_goal_5_0_i15);
	}
	MR_incr_sp(12);
	MR_sv(12) = (MR_Word) MR_succip;
	MR_sv(10) = MR_r1;
	MR_sv(6) = MR_r2;
	MR_sv(5) = MR_r3;
	MR_sv(1) = MR_tfield(0, MR_r4, 1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r5;
	MR_sv(7) = MR_tfield(3, MR_tempr1, 1);
	MR_sv(9) = MR_tfield(3, MR_tempr1, 3);
	MR_sv(8) = MR_tfield(3, MR_tempr1, 4);
	MR_r4 = MR_tfield(3, MR_tempr1, 2);
	}
	MR_np_localcall_lab(transform_hlds__ctgc__structure_reuse__versions__process_goal_5_0,
		transform_hlds__ctgc__structure_reuse__versions__process_goal_5_0_i16);
MR_def_label(transform_hlds__ctgc__structure_reuse__versions__process_goal_5_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(9);
	MR_sv(9) = MR_r1;
	MR_r1 = MR_sv(10);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(5);
	MR_r4 = MR_tempr1;
	}
	MR_np_localcall_lab(transform_hlds__ctgc__structure_reuse__versions__process_goal_5_0,
		transform_hlds__ctgc__structure_reuse__versions__process_goal_5_0_i17);
MR_def_label(transform_hlds__ctgc__structure_reuse__versions__process_goal_5_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(10);
	MR_sv(10) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(5);
	MR_r4 = MR_sv(8);
	}
	MR_np_localcall_lab(transform_hlds__ctgc__structure_reuse__versions__process_goal_5_0,
		transform_hlds__ctgc__structure_reuse__versions__process_goal_5_0_i18);
MR_def_label(transform_hlds__ctgc__structure_reuse__versions__process_goal_5_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 5);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 6;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(7);
	MR_tfield(3, MR_tempr1, 2) = MR_sv(9);
	MR_tfield(3, MR_tempr1, 3) = MR_sv(10);
	MR_tfield(3, MR_tempr1, 4) = MR_r1;
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r1, 0) = MR_tempr1;
	MR_tfield(0, MR_r1, 1) = MR_sv(1);
	MR_decr_sp_and_return(12);
	}
MR_def_label(transform_hlds__ctgc__structure_reuse__versions__process_goal_5_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r5,0)) {
		MR_GOTO_LAB(transform_hlds__ctgc__structure_reuse__versions__process_goal_5_0_i21);
	}
	MR_r1 = MR_r4;
	MR_proceed();
MR_def_label(transform_hlds__ctgc__structure_reuse__versions__process_goal_5_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r5,2)) {
		MR_GOTO_LAB(transform_hlds__ctgc__structure_reuse__versions__process_goal_5_0_i22);
	}
	MR_incr_sp(12);
	MR_sv(12) = (MR_Word) MR_succip;
	MR_sv(10) = MR_r1;
	MR_sv(6) = MR_r2;
	MR_sv(5) = MR_r3;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r4;
	MR_sv(1) = MR_tfield(0, MR_tempr1, 1);
	MR_tempr2 = MR_r5;
	MR_sv(7) = MR_tfield(2, MR_tempr2, 0);
	MR_sv(9) = MR_tfield(2, MR_tempr2, 1);
	MR_sv(8) = MR_tfield(2, MR_tempr2, 2);
	MR_sv(2) = MR_tfield(2, MR_tempr2, 3);
	MR_sv(3) = MR_tfield(2, MR_tempr2, 4);
	MR_sv(4) = MR_tfield(2, MR_tempr2, 5);
	MR_sv(11) = MR_tempr1;
	MR_r1 = MR_sv(1);
	}
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_reuse_1_0,
		transform_hlds__ctgc__structure_reuse__versions__process_goal_5_0_i23);
MR_def_label(transform_hlds__ctgc__structure_reuse__versions__process_goal_5_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,3)) {
		MR_GOTO_LAB(transform_hlds__ctgc__structure_reuse__versions__process_goal_5_0_i24);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(3, MR_r1, 0);
	if (MR_PTAG_TESTR(MR_tempr1,2)) {
		MR_GOTO_LAB(transform_hlds__ctgc__structure_reuse__versions__process_goal_5_0_i24);
	}
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(7);
	MR_r4 = MR_sv(9);
	MR_r5 = MR_sv(4);
	MR_r6 = MR_tfield(2, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(transform_hlds__ctgc__structure_reuse__versions__determine_reuse_version_9_0,
		transform_hlds__ctgc__structure_reuse__versions__process_goal_5_0_i27);
MR_def_label(transform_hlds__ctgc__structure_reuse__versions__process_goal_5_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 6);
	MR_tfield(2, MR_tempr1, 0) = MR_r1;
	MR_tfield(2, MR_tempr1, 1) = MR_r2;
	MR_tfield(2, MR_tempr1, 2) = MR_sv(8);
	MR_tfield(2, MR_tempr1, 3) = MR_sv(2);
	MR_tfield(2, MR_tempr1, 4) = MR_sv(3);
	MR_tfield(2, MR_tempr1, 5) = MR_r3;
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r1, 0) = MR_tempr1;
	MR_tfield(0, MR_r1, 1) = MR_sv(1);
	MR_decr_sp_and_return(12);
	}
MR_def_label(transform_hlds__ctgc__structure_reuse__versions__process_goal_5_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(10),0)) {
		MR_GOTO_LAB(transform_hlds__ctgc__structure_reuse__versions__process_goal_5_0_i92);
	}
	if (MR_PTAG_TESTR(MR_r1,2)) {
		MR_GOTO_LAB(transform_hlds__ctgc__structure_reuse__versions__process_goal_5_0_i92);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(2, MR_r1, 0);
	if (MR_PTAG_TESTR(MR_tempr1,2)) {
		MR_GOTO_LAB(transform_hlds__ctgc__structure_reuse__versions__process_goal_5_0_i92);
	}
	MR_sv(10) = MR_tempr1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(7);
	MR_r4 = MR_sv(9);
	MR_r5 = MR_sv(4);
	MR_r6 = MR_tfield(2, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(transform_hlds__ctgc__structure_reuse__versions__determine_reuse_version_9_0,
		transform_hlds__ctgc__structure_reuse__versions__process_goal_5_0_i34);
MR_def_label(transform_hlds__ctgc__structure_reuse__versions__process_goal_5_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 6);
	MR_tfield(2, MR_tempr1, 0) = MR_r1;
	MR_tfield(2, MR_tempr1, 1) = MR_r2;
	MR_tfield(2, MR_tempr1, 2) = MR_sv(8);
	MR_tfield(2, MR_tempr1, 3) = MR_sv(2);
	MR_tfield(2, MR_tempr1, 4) = MR_sv(3);
	MR_tfield(2, MR_tempr1, 5) = MR_r3;
	MR_tag_alloc_heap(MR_r1, 3, (MR_Integer) 1);
	MR_tfield(3, MR_r1, 0) = MR_sv(10);
	MR_sv(10) = MR_tempr1;
	MR_r2 = MR_sv(1);
	}
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_set_reuse_3_0,
		transform_hlds__ctgc__structure_reuse__versions__process_goal_5_0_i66);
MR_def_label(transform_hlds__ctgc__structure_reuse__versions__process_goal_5_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r5,3,5)) {
		MR_GOTO_LAB(transform_hlds__ctgc__structure_reuse__versions__process_goal_5_0_i41);
	}
	MR_incr_sp(12);
	MR_sv(12) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr3 = MR_r5;
	MR_r6 = MR_tfield(3, MR_tempr3, 2);
	MR_tempr1 = MR_tfield(3, MR_tempr3, 1);
	MR_sv(10) = MR_tempr1;
	MR_tempr4 = MR_r4;
	MR_sv(1) = MR_tfield(0, MR_tempr4, 1);
	if (MR_RTAGS_TESTR(MR_tempr1,3,4)) {
		MR_GOTO_LAB(transform_hlds__ctgc__structure_reuse__versions__process_goal_5_0_i42);
	}
	MR_tempr2 = MR_tfield(3, MR_tempr1, 2);
	if (MR_INT_NE(MR_tempr2,1)) {
		MR_GOTO_LAB(transform_hlds__ctgc__structure_reuse__versions__process_goal_5_0_i42);
	}
	MR_r1 = MR_tempr4;
	MR_decr_sp(12);
	MR_proceed();
	}
MR_def_label(transform_hlds__ctgc__structure_reuse__versions__process_goal_5_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r6;
	MR_np_localcall_lab(transform_hlds__ctgc__structure_reuse__versions__process_goal_5_0,
		transform_hlds__ctgc__structure_reuse__versions__process_goal_5_0_i45);
MR_def_label(transform_hlds__ctgc__structure_reuse__versions__process_goal_5_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 3, (MR_Integer) 3);
	MR_tfield(3, MR_r2, 0) = (MR_Integer) 5;
	MR_tfield(3, MR_r2, 1) = MR_sv(10);
	MR_tfield(3, MR_r2, 2) = MR_r1;
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r1, 0) = MR_r2;
	MR_tfield(0, MR_r1, 1) = MR_sv(1);
	MR_decr_sp_and_return(12);
MR_def_label(transform_hlds__ctgc__structure_reuse__versions__process_goal_5_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r5,3,4)) {
		MR_GOTO_LAB(transform_hlds__ctgc__structure_reuse__versions__process_goal_5_0_i49);
	}
	MR_incr_sp(12);
	MR_sv(12) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 6);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(4,4);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(transform_hlds__ctgc__structure_reuse__versions__process_case_5_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 3;
	MR_tfield(0, MR_tempr1, 3) = MR_r1;
	MR_tfield(0, MR_tempr1, 4) = MR_r2;
	MR_tfield(0, MR_tempr1, 5) = MR_r3;
	MR_sv(1) = MR_tfield(0, MR_r4, 1);
	MR_tempr2 = MR_r5;
	MR_sv(10) = MR_tfield(3, MR_tempr2, 1);
	MR_sv(6) = MR_tfield(3, MR_tempr2, 2);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, case);
	MR_r2 = MR_r1;
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tfield(3, MR_tempr2, 3);
	}
	MR_np_call_localret_ent(list__map_3_0,
		transform_hlds__ctgc__structure_reuse__versions__process_goal_5_0_i51);
MR_def_label(transform_hlds__ctgc__structure_reuse__versions__process_goal_5_0,51)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 4);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 4;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(10);
	MR_tfield(3, MR_tempr1, 2) = MR_sv(6);
	MR_tfield(3, MR_tempr1, 3) = MR_r1;
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r1, 0) = MR_tempr1;
	MR_tfield(0, MR_r1, 1) = MR_sv(1);
	MR_decr_sp_and_return(12);
	}
MR_def_label(transform_hlds__ctgc__structure_reuse__versions__process_goal_5_0,49)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r5,1)) {
		MR_GOTO_LAB(transform_hlds__ctgc__structure_reuse__versions__process_goal_5_0_i54);
	}
	MR_incr_sp(12);
	MR_sv(12) = (MR_Word) MR_succip;
	MR_sv(10) = MR_r1;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r5;
	MR_sv(6) = MR_tempr1;
	MR_tempr2 = MR_r4;
	MR_sv(1) = MR_tfield(0, MR_tempr2, 1);
	MR_sv(5) = MR_tfield(1, MR_tempr1, 3);
	MR_sv(11) = MR_tempr2;
	MR_r1 = MR_sv(1);
	}
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_reuse_1_0,
		transform_hlds__ctgc__structure_reuse__versions__process_goal_5_0_i55);
MR_def_label(transform_hlds__ctgc__structure_reuse__versions__process_goal_5_0,55)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,1)) {
		MR_GOTO_LAB(transform_hlds__ctgc__structure_reuse__versions__process_goal_5_0_i57);
	}
	MR_r1 = MR_sv(11);
	MR_decr_sp_and_return(12);
MR_def_label(transform_hlds__ctgc__structure_reuse__versions__process_goal_5_0,57)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(transform_hlds__ctgc__structure_reuse__versions__process_goal_5_0_i58);
	}
	MR_r1 = MR_sv(11);
	MR_decr_sp_and_return(12);
MR_def_label(transform_hlds__ctgc__structure_reuse__versions__process_goal_5_0,58)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,1)) {
		MR_GOTO_LAB(transform_hlds__ctgc__structure_reuse__versions__process_goal_5_0_i59);
	}
MR_def_label(transform_hlds__ctgc__structure_reuse__versions__process_goal_5_0,92)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(11);
	MR_decr_sp_and_return(12);
MR_def_label(transform_hlds__ctgc__structure_reuse__versions__process_goal_5_0,59)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,2)) {
		MR_GOTO_LAB(transform_hlds__ctgc__structure_reuse__versions__process_goal_5_0_i60);
	}
	if (MR_INT_NE(MR_sv(10),0)) {
		MR_GOTO_LAB(transform_hlds__ctgc__structure_reuse__versions__process_goal_5_0_i92);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 1);
	MR_sv(10) = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = MR_tfield(2, MR_r1, 0);
	MR_r1 = MR_tfield(3, MR_tempr1, 0);
	MR_r2 = MR_sv(5);
	}
	MR_np_call_localret_ent(transform_hlds__ctgc__structure_reuse__versions__unification_set_reuse_3_0,
		transform_hlds__ctgc__structure_reuse__versions__process_goal_5_0_i64);
MR_def_label(transform_hlds__ctgc__structure_reuse__versions__process_goal_5_0,64)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 5);
	MR_tempr3 = MR_sv(6);
	MR_tfield(1, MR_tempr1, 0) = MR_tfield(1, MR_tempr3, 0);
	MR_tfield(1, MR_tempr1, 1) = MR_tfield(1, MR_tempr3, 1);
	MR_tfield(1, MR_tempr1, 2) = MR_tfield(1, MR_tempr3, 2);
	MR_tfield(1, MR_tempr1, 3) = MR_r1;
	MR_tfield(1, MR_tempr1, 4) = MR_tfield(1, MR_tempr3, 4);
	MR_tempr2 = MR_sv(10);
	MR_sv(10) = MR_tempr1;
	MR_r1 = MR_tempr2;
	MR_r2 = MR_sv(1);
	}
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_set_reuse_3_0,
		transform_hlds__ctgc__structure_reuse__versions__process_goal_5_0_i66);
MR_def_label(transform_hlds__ctgc__structure_reuse__versions__process_goal_5_0,66)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(10);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(12);
	}
MR_def_label(transform_hlds__ctgc__structure_reuse__versions__process_goal_5_0,60)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(10) = MR_r1;
	MR_r1 = MR_tfield(3, MR_r1, 0);
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(transform_hlds__ctgc__structure_reuse__versions__unification_set_reuse_3_0,
		transform_hlds__ctgc__structure_reuse__versions__process_goal_5_0_i68);
MR_def_label(transform_hlds__ctgc__structure_reuse__versions__process_goal_5_0,68)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 5);
	MR_tempr3 = MR_sv(6);
	MR_tfield(1, MR_tempr1, 0) = MR_tfield(1, MR_tempr3, 0);
	MR_tfield(1, MR_tempr1, 1) = MR_tfield(1, MR_tempr3, 1);
	MR_tfield(1, MR_tempr1, 2) = MR_tfield(1, MR_tempr3, 2);
	MR_tfield(1, MR_tempr1, 3) = MR_r1;
	MR_tfield(1, MR_tempr1, 4) = MR_tfield(1, MR_tempr3, 4);
	MR_tempr2 = MR_sv(10);
	MR_sv(10) = MR_tempr1;
	MR_r1 = MR_tempr2;
	MR_r2 = MR_sv(1);
	}
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_set_reuse_3_0,
		transform_hlds__ctgc__structure_reuse__versions__process_goal_5_0_i70);
MR_def_label(transform_hlds__ctgc__structure_reuse__versions__process_goal_5_0,70)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(10);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(12);
	}
MR_def_label(transform_hlds__ctgc__structure_reuse__versions__process_goal_5_0,54)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("transform_hlds.ctgc.structure_reuse.versions", 44);
	MR_r2 = (MR_Word) MR_string_const("predicate \140transform_hlds.ctgc.structure_reuse.versions.process_goal\'/5", 71);
	MR_r3 = (MR_Word) MR_string_const("shorthand", 9);
	MR_np_tailcall_ent(require__unexpected_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__passes_aux__write_proc_progress_message_5_0);
MR_decl_entry(hlds__quantification__requantify_proc_general_3_0);
MR_decl_entry(check_hlds__mode_util__recompute_instmap_delta_proc_5_0);

MR_BEGIN_MODULE(transform_hlds__ctgc__structure_reuse__versions_module8)
	MR_init_entry1(transform_hlds__ctgc__structure_reuse__versions__process_proc_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__ctgc__structure_reuse__versions__process_proc_5_0);
	MR_init_label9(transform_hlds__ctgc__structure_reuse__versions__process_proc_5_0,2,3,4,5,7,8,9,10,11)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'process_proc'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__ctgc__structure_reuse__versions__process_proc_5_0)
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
	MR_r1 = (MR_Word) MR_string_const("(reuse version) ", 16);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	}
	MR_np_call_localret_ent(hlds__passes_aux__write_proc_progress_message_5_0,
		transform_hlds__ctgc__structure_reuse__versions__process_proc_5_0_i2);
MR_def_label(transform_hlds__ctgc__structure_reuse__versions__process_proc_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(hlds__hlds_module__module_info_pred_proc_info_4_0,
		transform_hlds__ctgc__structure_reuse__versions__process_proc_5_0_i3);
MR_def_label(transform_hlds__ctgc__structure_reuse__versions__process_proc_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_sv(6) = MR_r2;
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_import_status_2_0,
		transform_hlds__ctgc__structure_reuse__versions__process_proc_5_0_i4);
MR_def_label(transform_hlds__ctgc__structure_reuse__versions__process_proc_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,2)) {
		MR_GOTO_LAB(transform_hlds__ctgc__structure_reuse__versions__process_proc_5_0_i5);
	}
	MR_r1 = MR_sv(5);
	MR_decr_sp_and_return(7);
MR_def_label(transform_hlds__ctgc__structure_reuse__versions__process_proc_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(6);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_goal_2_0,
		transform_hlds__ctgc__structure_reuse__versions__process_proc_5_0_i7);
MR_def_label(transform_hlds__ctgc__structure_reuse__versions__process_proc_5_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(5);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(transform_hlds__ctgc__structure_reuse__versions__process_goal_5_0,
		transform_hlds__ctgc__structure_reuse__versions__process_proc_5_0_i8);
MR_def_label(transform_hlds__ctgc__structure_reuse__versions__process_proc_5_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(6);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_set_goal_3_0,
		transform_hlds__ctgc__structure_reuse__versions__process_proc_5_0_i9);
MR_def_label(transform_hlds__ctgc__structure_reuse__versions__process_proc_5_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 1;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__quantification__requantify_proc_general_3_0,
		transform_hlds__ctgc__structure_reuse__versions__process_proc_5_0_i10);
MR_def_label(transform_hlds__ctgc__structure_reuse__versions__process_proc_5_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 1;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(5);
	}
	MR_np_call_localret_ent(check_hlds__mode_util__recompute_instmap_delta_proc_5_0,
		transform_hlds__ctgc__structure_reuse__versions__process_proc_5_0_i11);
MR_def_label(transform_hlds__ctgc__structure_reuse__versions__process_proc_5_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_sv(4);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tempr2;
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(hlds__hlds_module__module_info_set_pred_proc_info_5_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__hlds_module__module_info_get_globals_2_0);
MR_decl_entry(libs__globals__lookup_bool_option_3_0);
MR_decl_entry(transform_hlds__ctgc__structure_reuse__analysis__structure_reuse_answer_harsher_than_in_analysis_registry_4_0);

MR_BEGIN_MODULE(transform_hlds__ctgc__structure_reuse__versions_module9)
	MR_init_entry1(transform_hlds__ctgc__structure_reuse__versions__check_cond_process_proc_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__ctgc__structure_reuse__versions__check_cond_process_proc_5_0);
	MR_init_label6(transform_hlds__ctgc__structure_reuse__versions__check_cond_process_proc_5_0,2,3,4,8,20,10)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'check_cond_process_proc'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__ctgc__structure_reuse__versions__check_cond_process_proc_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_sv(5) = MR_tempr1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_globals_2_0,
		transform_hlds__ctgc__structure_reuse__versions__check_cond_process_proc_5_0_i2);
MR_def_label(transform_hlds__ctgc__structure_reuse__versions__check_cond_process_proc_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r2 = (MR_Integer) 317;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		transform_hlds__ctgc__structure_reuse__versions__check_cond_process_proc_5_0_i3);
MR_def_label(transform_hlds__ctgc__structure_reuse__versions__check_cond_process_proc_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Integer) 83;
	}
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		transform_hlds__ctgc__structure_reuse__versions__check_cond_process_proc_5_0_i4);
MR_def_label(transform_hlds__ctgc__structure_reuse__versions__check_cond_process_proc_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(4),1)) {
		MR_GOTO_LAB(transform_hlds__ctgc__structure_reuse__versions__check_cond_process_proc_5_0_i20);
	}
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(transform_hlds__ctgc__structure_reuse__versions__check_cond_process_proc_5_0_i20);
	}
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_np_call_localret_ent(transform_hlds__ctgc__structure_reuse__analysis__structure_reuse_answer_harsher_than_in_analysis_registry_4_0,
		transform_hlds__ctgc__structure_reuse__versions__check_cond_process_proc_5_0_i8);
MR_def_label(transform_hlds__ctgc__structure_reuse__versions__check_cond_process_proc_5_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(transform_hlds__ctgc__structure_reuse__versions__check_cond_process_proc_5_0_i10);
	}
MR_def_label(transform_hlds__ctgc__structure_reuse__versions__check_cond_process_proc_5_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(5);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(transform_hlds__ctgc__structure_reuse__versions__process_proc_5_0);
MR_def_label(transform_hlds__ctgc__structure_reuse__versions__check_cond_process_proc_5_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(5);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(transform_hlds__ctgc__structure_reuse__versions__process_proc_5_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__ctgc__structure_reuse__versions_module10)
	MR_init_entry1(transform_hlds__ctgc__structure_reuse__versions__process_case_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__ctgc__structure_reuse__versions__process_case_5_0);
	MR_init_label1(transform_hlds__ctgc__structure_reuse__versions__process_case_5_0,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'process_case'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__ctgc__structure_reuse__versions__process_case_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_sv(1) = MR_tfield(0, MR_tempr1, 0);
	MR_sv(2) = MR_tfield(0, MR_tempr1, 1);
	MR_r4 = MR_tfield(0, MR_r4, 2);
	}
	MR_np_call_localret_ent(transform_hlds__ctgc__structure_reuse__versions__process_goal_5_0,
		transform_hlds__ctgc__structure_reuse__versions__process_case_5_0_i2);
MR_def_label(transform_hlds__ctgc__structure_reuse__versions__process_case_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 3);
	MR_tfield(0, MR_r2, 0) = MR_sv(1);
	MR_tfield(0, MR_r2, 1) = MR_sv(2);
	MR_tfield(0, MR_r2, 2) = MR_r1;
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__ctgc__structure_reuse__versions_module11)
	MR_init_entry1(__Unify___transform_hlds__ctgc__structure_reuse__versions__convert_potential_reuse_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___transform_hlds__ctgc__structure_reuse__versions__convert_potential_reuse_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___transform_hlds__ctgc__structure_reuse__versions__convert_potential_reuse_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_r1 == MR_r2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(private_builtin__builtin_compare_int_3_0);

MR_BEGIN_MODULE(transform_hlds__ctgc__structure_reuse__versions_module12)
	MR_init_entry1(__Compare___transform_hlds__ctgc__structure_reuse__versions__convert_potential_reuse_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___transform_hlds__ctgc__structure_reuse__versions__convert_potential_reuse_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___transform_hlds__ctgc__structure_reuse__versions__convert_potential_reuse_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___mdbcomp__prim_data__sym_name_0_0);

MR_BEGIN_MODULE(transform_hlds__ctgc__structure_reuse__versions_module13)
	MR_init_entry1(__Unify___transform_hlds__ctgc__structure_reuse__versions__reuse_name_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___transform_hlds__ctgc__structure_reuse__versions__reuse_name_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___transform_hlds__ctgc__structure_reuse__versions__reuse_name_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(__Unify___mdbcomp__prim_data__sym_name_0_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Compare___mdbcomp__prim_data__sym_name_0_0);

MR_BEGIN_MODULE(transform_hlds__ctgc__structure_reuse__versions_module14)
	MR_init_entry1(__Compare___transform_hlds__ctgc__structure_reuse__versions__reuse_name_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___transform_hlds__ctgc__structure_reuse__versions__reuse_name_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___transform_hlds__ctgc__structure_reuse__versions__reuse_name_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(__Compare___mdbcomp__prim_data__sym_name_0_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

static void mercury__transform_hlds__ctgc__structure_reuse__versions_maybe_bunch_0(void)
{
	transform_hlds__ctgc__structure_reuse__versions_module0();
	transform_hlds__ctgc__structure_reuse__versions_module1();
	transform_hlds__ctgc__structure_reuse__versions_module2();
	transform_hlds__ctgc__structure_reuse__versions_module3();
	transform_hlds__ctgc__structure_reuse__versions_module4();
	transform_hlds__ctgc__structure_reuse__versions_module5();
	transform_hlds__ctgc__structure_reuse__versions_module6();
	transform_hlds__ctgc__structure_reuse__versions_module7();
	transform_hlds__ctgc__structure_reuse__versions_module8();
	transform_hlds__ctgc__structure_reuse__versions_module9();
	transform_hlds__ctgc__structure_reuse__versions_module10();
	transform_hlds__ctgc__structure_reuse__versions_module11();
	transform_hlds__ctgc__structure_reuse__versions_module12();
	transform_hlds__ctgc__structure_reuse__versions_module13();
	transform_hlds__ctgc__structure_reuse__versions_module14();
}

/* suppress gcc -Wmissing-decls warnings */
void mercury__transform_hlds__ctgc__structure_reuse__versions__init(void);
void mercury__transform_hlds__ctgc__structure_reuse__versions__init_type_tables(void);
void mercury__transform_hlds__ctgc__structure_reuse__versions__init_debugger(void);
#ifdef MR_DEEP_PROFILING
void mercury__transform_hlds__ctgc__structure_reuse__versions__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp);
#endif
#ifdef MR_RECORD_TERM_SIZES
void mercury__transform_hlds__ctgc__structure_reuse__versions__init_complexity_procs(void);
#endif
#ifdef MR_THREADSCOPE
void mercury__transform_hlds__ctgc__structure_reuse__versions__init_threadscope_string_table(void);
#endif

void mercury__transform_hlds__ctgc__structure_reuse__versions__init(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	mercury__transform_hlds__ctgc__structure_reuse__versions_maybe_bunch_0();
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_transform_hlds__ctgc__structure_reuse__versions__type_ctor_info_convert_potential_reuse_0,
		transform_hlds__ctgc__structure_reuse__versions__convert_potential_reuse_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_transform_hlds__ctgc__structure_reuse__versions__type_ctor_info_reuse_name_0,
		transform_hlds__ctgc__structure_reuse__versions__reuse_name_0_0);
	mercury__transform_hlds__ctgc__structure_reuse__versions__init_debugger();
}

void mercury__transform_hlds__ctgc__structure_reuse__versions__init_type_tables(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	{
		MR_register_type_ctor_info(
		&mercury_data_transform_hlds__ctgc__structure_reuse__versions__type_ctor_info_convert_potential_reuse_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_transform_hlds__ctgc__structure_reuse__versions__type_ctor_info_reuse_name_0);
	}
}


void mercury__transform_hlds__ctgc__structure_reuse__versions__init_debugger(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}

#ifdef MR_DEEP_PROFILING

void mercury__transform_hlds__ctgc__structure_reuse__versions__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp)
{
	MR_write_out_module_proc_reps_start(procrep_fp, &mercury_data__module_common_layout__transform_hlds__ctgc__structure_reuse__versions);
	MR_write_out_module_proc_reps_end(procrep_fp);
}

#endif

#ifdef MR_RECORD_TERM_SIZES

void mercury__transform_hlds__ctgc__structure_reuse__versions__init_complexity_procs(void)
{
}

#endif

#ifdef MR_THREADSCOPE

void mercury__transform_hlds__ctgc__structure_reuse__versions__init_threadscope_string_table(void)
{
}

#endif

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;
