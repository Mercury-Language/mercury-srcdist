/*
** Automatically generated from `transform_hlds.ctgc.structure_reuse.versions.m'
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
INIT mercury__transform_hlds__ctgc__structure_reuse__versions__init
ENDINIT
*/

#define MR_ALLOW_RESET
#include "mercury_imp.h"
#line 530 "../library/io.int"
#include "io.mh"

#line 27 "transform_hlds.ctgc.structure_reuse.versions.c"
#line 538 "../library/io.int"
#include "string.mh"

#line 31 "transform_hlds.ctgc.structure_reuse.versions.c"
#line 87 "../library/table_builtin.int2"
#include "table_builtin.mh"

#line 35 "transform_hlds.ctgc.structure_reuse.versions.c"
#line 29 "../library/bitmap.int2"
#include "bitmap.mh"

#line 39 "transform_hlds.ctgc.structure_reuse.versions.c"
#line 28 "../library/time.int2"
#include "time.mh"

#line 43 "transform_hlds.ctgc.structure_reuse.versions.c"
#line 33 "../mdbcomp/mdbcomp.rtti_access.int2"
#include "mdbcomp.rtti_access.mh"

#line 47 "transform_hlds.ctgc.structure_reuse.versions.c"
#line 48 "transform_hlds.ctgc.structure_reuse.versions.c"
#include "transform_hlds.ctgc.structure_reuse.versions.mh"

#line 51 "transform_hlds.ctgc.structure_reuse.versions.c"
#line 52 "transform_hlds.ctgc.structure_reuse.versions.c"
#ifndef TRANSFORM_HLDS__CTGC__STRUCTURE_REUSE__VERSIONS_DECL_GUARD
#define TRANSFORM_HLDS__CTGC__STRUCTURE_REUSE__VERSIONS_DECL_GUARD

#line 56 "transform_hlds.ctgc.structure_reuse.versions.c"
#line 57 "transform_hlds.ctgc.structure_reuse.versions.c"

#endif
#line 60 "transform_hlds.ctgc.structure_reuse.versions.c"

#ifdef _MSC_VER
#define MR_STATIC_LINKAGE extern
#else
#define MR_STATIC_LINKAGE static
#endif

struct mercury_type_0 {
	MR_Word * f1[3];
};
MR_STATIC_LINKAGE const struct mercury_type_0 mercury_common_0[];

struct mercury_type_1 {
	MR_Word * f1;
	MR_Word * f2;
	MR_Integer f3;
	MR_Word * f4;
	MR_Word * f5;
};
MR_STATIC_LINKAGE const struct mercury_type_1 mercury_common_1[];

struct mercury_type_2 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[4];
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
	MR_Word * f3[6];
};
MR_STATIC_LINKAGE const struct mercury_type_4 mercury_common_4[];

struct mercury_type_5 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[5];
};
MR_STATIC_LINKAGE const struct mercury_type_5 mercury_common_5[];

extern const MR_TypeCtorInfo_Struct
	mercury_data_transform_hlds__ctgc__structure_reuse__versions__type_ctor_info_reuse_name_0;
MR_decl_label8(transform_hlds__ctgc__structure_reuse__versions__create_fresh_pred_proc_info_copy_4_0, 2,3,4,5,6,7,8,9)
MR_decl_label8(transform_hlds__ctgc__structure_reuse__versions__create_fresh_pred_proc_info_copy_4_0, 10,11,12,13,14,15,16,17)
MR_decl_label8(transform_hlds__ctgc__structure_reuse__versions__create_fresh_pred_proc_info_copy_4_0, 18,19,20,21,22,23,24,25)
MR_decl_label2(transform_hlds__ctgc__structure_reuse__versions__create_fresh_pred_proc_info_copy_4_0, 26,27)
MR_decl_label6(transform_hlds__ctgc__structure_reuse__versions__create_reuse_procedures_5_0, 2,3,4,5,6,7)
MR_decl_label2(transform_hlds__ctgc__structure_reuse__versions__determine_reuse_version_7_0, 3,2)
MR_decl_label2(transform_hlds__ctgc__structure_reuse__versions__has_conditional_reuse_2_0, 2,1)
MR_decl_label2(transform_hlds__ctgc__structure_reuse__versions__has_unconditional_reuse_2_0, 2,1)
MR_decl_label1(transform_hlds__ctgc__structure_reuse__versions__process_case_5_0, 2)
MR_decl_label8(transform_hlds__ctgc__structure_reuse__versions__process_goal_5_0, 64,76,5,8,9,77,12,16)
MR_decl_label8(transform_hlds__ctgc__structure_reuse__versions__process_goal_5_0, 13,20,21,17,25,78,28,79)
MR_decl_label8(transform_hlds__ctgc__structure_reuse__versions__process_goal_5_0, 30,80,32,33,81,35,82,37)
MR_decl_label4(transform_hlds__ctgc__structure_reuse__versions__process_goal_5_0, 38,39,83,41)
MR_decl_label5(transform_hlds__ctgc__structure_reuse__versions__process_proc_6_0, 2,3,4,5,6)
MR_decl_label2(transform_hlds__ctgc__structure_reuse__versions__unification_set_reuse_3_0, 5,2)
MR_decl_label1(fn__transform_hlds__ctgc__structure_reuse__versions__needs_update_to_bool_1_0, 3)
MR_def_extern_entry(transform_hlds__ctgc__structure_reuse__versions__create_reuse_procedures_5_0)
MR_def_extern_entry(transform_hlds__ctgc__structure_reuse__versions__create_fresh_pred_proc_info_copy_4_0)
MR_decl_static(transform_hlds__ctgc__structure_reuse__versions__has_conditional_reuse_2_0)
MR_decl_static(transform_hlds__ctgc__structure_reuse__versions__has_unconditional_reuse_2_0)
MR_decl_static(transform_hlds__ctgc__structure_reuse__versions__unification_set_reuse_3_0)
MR_decl_static(transform_hlds__ctgc__structure_reuse__versions__determine_reuse_version_7_0)
MR_decl_static(fn__transform_hlds__ctgc__structure_reuse__versions__this_file_0_0)
MR_decl_static(transform_hlds__ctgc__structure_reuse__versions__process_goal_5_0)
MR_decl_static(transform_hlds__ctgc__structure_reuse__versions__process_proc_6_0)
MR_decl_static(fn__transform_hlds__ctgc__structure_reuse__versions__needs_update_to_bool_1_0)
MR_decl_static(transform_hlds__ctgc__structure_reuse__versions__process_case_5_0)
MR_decl_static(__Unify___transform_hlds__ctgc__structure_reuse__versions__reuse_name_0_0)
MR_decl_static(__Compare___transform_hlds__ctgc__structure_reuse__versions__reuse_name_0_0)

extern const MR_TypeCtorInfo_Struct mercury_data_tree234__type_ctor_info_tree234_2;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_pred_proc_id_0;
extern const MR_TypeCtorInfo_Struct mercury_data_transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_reuse_as_0;
extern const MR_TypeCtorInfo_Struct mercury_data_pair__type_ctor_info_pair_2;
extern const MR_TypeCtorInfo_Struct mercury_data_mdbcomp__prim_data__type_ctor_info_sym_name_0;
extern const MR_TypeCtorInfo_Struct mercury_data_pair__type_ctor_info_pair_2;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_pred_proc_id_0;
extern const MR_TypeCtorInfo_Struct mercury_data_mdbcomp__prim_data__type_ctor_info_sym_name_0;
static const struct mercury_type_0 mercury_common_0[4] =
{
{
{
MR_CTOR_ADDR(tree234, tree234, 2),
MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id),
MR_CTOR0_ADDR(transform_hlds__ctgc__structure_reuse__domain, reuse_as)
}
},
{
{
MR_CTOR_ADDR(pair, pair, 2),
MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id),
MR_CTOR0_ADDR(mdbcomp__prim_data, sym_name)
}
},
{
{
MR_CTOR_ADDR(tree234, tree234, 2),
MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id),
MR_COMMON(0,1)
}
},
{
{
MR_CTOR_ADDR(pair, pair, 2),
MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id),
MR_CTOR0_ADDR(mdbcomp__prim_data, sym_name)
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__ctgc__structure_reuse__versions__create_reuse_procedures_5_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_pred_proc_id_0;
static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__ctgc__structure_reuse__versions__create_reuse_procedures_5_0_2;
static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__ctgc__structure_reuse__versions__unification_set_reuse_3_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_goal__type_ctor_info_needs_update_0;
extern const MR_TypeCtorInfo_Struct mercury_data_bool__type_ctor_info_bool_0;
static const struct mercury_type_1 mercury_common_1[3] =
{
{
(MR_Word *) &mercury_data__closure_layout__transform_hlds__ctgc__structure_reuse__versions__create_reuse_procedures_5_0_1,
(MR_Word *) (MR_Integer) 0,
2,
MR_COMMON(0,0),
MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id)
},
{
(MR_Word *) &mercury_data__closure_layout__transform_hlds__ctgc__structure_reuse__versions__create_reuse_procedures_5_0_2,
(MR_Word *) (MR_Integer) 0,
2,
MR_COMMON(0,0),
MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id)
},
{
(MR_Word *) &mercury_data__closure_layout__transform_hlds__ctgc__structure_reuse__versions__unification_set_reuse_3_0_1,
(MR_Word *) (MR_Integer) 0,
2,
MR_CTOR0_ADDR(hlds__hlds_goal, needs_update),
MR_BOOL_CTOR_ADDR
},
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__ctgc__structure_reuse__versions__create_reuse_procedures_5_0_3;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_module__type_ctor_info_module_info_0;
static const struct mercury_type_2 mercury_common_2[1] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__transform_hlds__ctgc__structure_reuse__versions__create_reuse_procedures_5_0_3,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id),
MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id),
MR_CTOR0_ADDR(hlds__hlds_module, module_info),
MR_CTOR0_ADDR(hlds__hlds_module, module_info)
}
},
};

static const struct mercury_type_3 mercury_common_3[2] =
{
{
MR_COMMON(2,0),
MR_ENTRY_AP(transform_hlds__ctgc__structure_reuse__versions__create_fresh_pred_proc_info_copy_4_0),
0
},
{
MR_COMMON(1,2),
MR_ENTRY_AP(fn__transform_hlds__ctgc__structure_reuse__versions__needs_update_to_bool_1_0),
0
},
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__ctgc__structure_reuse__versions__create_reuse_procedures_5_0_4;
extern const MR_TypeCtorInfo_Struct mercury_data_io__type_ctor_info_state_0;
static const struct mercury_type_4 mercury_common_4[1] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__transform_hlds__ctgc__structure_reuse__versions__create_reuse_procedures_5_0_4,
(MR_Word *) (MR_Integer) 0
},
6,
{
MR_COMMON(0,2),
MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id),
MR_CTOR0_ADDR(hlds__hlds_module, module_info),
MR_CTOR0_ADDR(hlds__hlds_module, module_info),
MR_IO_CTOR_ADDR,
MR_IO_CTOR_ADDR
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__ctgc__structure_reuse__versions__process_goal_5_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_goal__type_ctor_info_hlds_goal_0;
static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__ctgc__structure_reuse__versions__process_goal_5_0_2;
static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__ctgc__structure_reuse__versions__process_goal_5_0_3;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_goal__type_ctor_info_case_0;
static const struct mercury_type_5 mercury_common_5[3] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__transform_hlds__ctgc__structure_reuse__versions__process_goal_5_0_1,
(MR_Word *) (MR_Integer) 0
},
5,
{
MR_COMMON(0,2),
MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal),
MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal),
MR_IO_CTOR_ADDR,
MR_IO_CTOR_ADDR
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__transform_hlds__ctgc__structure_reuse__versions__process_goal_5_0_2,
(MR_Word *) (MR_Integer) 0
},
5,
{
MR_COMMON(0,2),
MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal),
MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal),
MR_IO_CTOR_ADDR,
MR_IO_CTOR_ADDR
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__transform_hlds__ctgc__structure_reuse__versions__process_goal_5_0_3,
(MR_Word *) (MR_Integer) 0
},
5,
{
MR_COMMON(0,2),
MR_CTOR0_ADDR(hlds__hlds_goal, case),
MR_CTOR0_ADDR(hlds__hlds_goal, case),
MR_IO_CTOR_ADDR,
MR_IO_CTOR_ADDR
}
},
};

const MR_TypeCtorInfo_Struct mercury_data_transform_hlds__ctgc__structure_reuse__versions__type_ctor_info_reuse_name_0 = {
	0,
	13,
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
mercury_data__closure_layout__transform_hlds__ctgc__structure_reuse__versions__create_reuse_procedures_5_0_1 = {
{
MR_PREDICATE,
"transform_hlds.ctgc.structure_reuse.versions",
"transform_hlds.ctgc.structure_reuse.versions",
"has_conditional_reuse",
2,
0
},
"transform_hlds.ctgc.structure_reuse.versions",
"structure_reuse.versions.m",
98,
"d1;c8;"
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__ctgc__structure_reuse__versions__create_reuse_procedures_5_0_2 = {
{
MR_PREDICATE,
"transform_hlds.ctgc.structure_reuse.versions",
"transform_hlds.ctgc.structure_reuse.versions",
"has_unconditional_reuse",
2,
0
},
"transform_hlds.ctgc.structure_reuse.versions",
"structure_reuse.versions.m",
99,
"d1;c10;"
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__ctgc__structure_reuse__versions__create_reuse_procedures_5_0_3 = {
{
MR_PREDICATE,
"transform_hlds.ctgc.structure_reuse.versions",
"transform_hlds.ctgc.structure_reuse.versions",
"create_fresh_pred_proc_info_copy",
4,
0
},
"transform_hlds.ctgc.structure_reuse.versions",
"structure_reuse.versions.m",
102,
"d1;c11;"
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__ctgc__structure_reuse__versions__create_reuse_procedures_5_0_4 = {
{
MR_PREDICATE,
"transform_hlds.ctgc.structure_reuse.versions",
"transform_hlds.ctgc.structure_reuse.versions",
"process_proc",
6,
0
},
"transform_hlds.ctgc.structure_reuse.versions",
"structure_reuse.versions.m",
107,
"d1;c14;"
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__ctgc__structure_reuse__versions__unification_set_reuse_3_0_1 = {
{
MR_FUNCTION,
"transform_hlds.ctgc.structure_reuse.versions",
"transform_hlds.ctgc.structure_reuse.versions",
"needs_update_to_bool",
2,
0
},
"transform_hlds.ctgc.structure_reuse.versions",
"structure_reuse.versions.m",
287,
"d1;c4;t;c3;"
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
189,
"d1;c7;d1;c2;"
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
246,
"d1;c7;d5;c2;"
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
251,
"d1;c7;d6;c2;"
};

extern const MR_TypeCtorInfo_Struct mercury_data_transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_reuse_as_0;
MR_decl_entry(fn__map__keys_1_0);
MR_decl_entry(fn__list__filter_2_0);
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_module__type_ctor_info_module_info_0;
MR_decl_entry(list__map_foldl_5_1);
MR_decl_entry(hlds__hlds_module__module_info_get_structure_reuse_map_2_0);
MR_decl_entry(fn__list__append_2_0);
extern const MR_TypeCtorInfo_Struct mercury_data_io__type_ctor_info_state_0;
MR_decl_entry(list__foldl2_6_5);

MR_BEGIN_MODULE(transform_hlds__ctgc__structure_reuse__versions_module0)
	MR_init_entry1(transform_hlds__ctgc__structure_reuse__versions__create_reuse_procedures_5_0);
	MR_init_label6(transform_hlds__ctgc__structure_reuse__versions__create_reuse_procedures_5_0,2,3,4,5,6,7)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__transform_hlds__ctgc__structure_reuse__versions__create_reuse_procedures_5_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(3) = MR_r2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__ctgc__structure_reuse__domain, reuse_as);
	MR_r3 = MR_sv(1);
	MR_np_call_localret_ent(fn__map__keys_1_0,
		transform_hlds__ctgc__structure_reuse__versions__create_reuse_procedures_5_0_i2);
MR_def_label(transform_hlds__ctgc__structure_reuse__versions__create_reuse_procedures_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r2 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(1,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(transform_hlds__ctgc__structure_reuse__versions__has_conditional_reuse_2_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(1);
	MR_sv(2) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id);
	MR_r3 = MR_sv(2);
	}
	MR_np_call_localret_ent(fn__list__filter_2_0,
		transform_hlds__ctgc__structure_reuse__versions__create_reuse_procedures_5_0_i3);
MR_def_label(transform_hlds__ctgc__structure_reuse__versions__create_reuse_procedures_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r2 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(1,1);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(transform_hlds__ctgc__structure_reuse__versions__has_unconditional_reuse_2_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id);
	MR_r3 = MR_sv(2);
	}
	MR_np_call_localret_ent(fn__list__filter_2_0,
		transform_hlds__ctgc__structure_reuse__versions__create_reuse_procedures_5_0_i4);
MR_def_label(transform_hlds__ctgc__structure_reuse__versions__create_reuse_procedures_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r5 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id);
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_module, module_info);
	MR_r4 = (MR_Word) MR_TAG_COMMON(0,3,0);
	MR_r6 = MR_sv(3);
	MR_np_call_localret_ent(list__map_foldl_5_1,
		transform_hlds__ctgc__structure_reuse__versions__create_reuse_procedures_5_0_i5);
MR_def_label(transform_hlds__ctgc__structure_reuse__versions__create_reuse_procedures_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_sv(3) = MR_tempr1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_structure_reuse_map_2_0,
		transform_hlds__ctgc__structure_reuse__versions__create_reuse_procedures_5_0_i6);
MR_def_label(transform_hlds__ctgc__structure_reuse__versions__create_reuse_procedures_5_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(4,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(transform_hlds__ctgc__structure_reuse__versions__process_proc_6_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_r1;
	MR_r3 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id);
	MR_r2 = MR_sv(2);
	}
	MR_np_call_localret_ent(fn__list__append_2_0,
		transform_hlds__ctgc__structure_reuse__versions__create_reuse_procedures_5_0_i7);
MR_def_label(transform_hlds__ctgc__structure_reuse__versions__create_reuse_procedures_5_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r5 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_module, module_info);
	MR_r3 = (MR_Word) MR_IO_CTOR_ADDR;
	MR_r4 = MR_sv(1);
	MR_r6 = MR_sv(3);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(list__foldl2_6_5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__hlds_module__module_info_pred_proc_info_4_0);
MR_decl_entry(fn__hlds__hlds_pred__proc_id_to_int_1_0);
MR_decl_entry(fn__hlds__hlds_pred__pred_info_module_1_0);
MR_decl_entry(fn__hlds__hlds_pred__pred_info_is_pred_or_func_1_0);
MR_decl_entry(fn__hlds__hlds_pred__pred_info_name_1_0);
MR_decl_entry(parse_tree__prog_util__make_pred_name_with_context_7_0);
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
MR_decl_entry(map__det_insert_4_0);
MR_decl_entry(hlds__hlds_module__module_info_set_structure_reuse_map_3_0);

MR_BEGIN_MODULE(transform_hlds__ctgc__structure_reuse__versions_module1)
	MR_init_entry1(transform_hlds__ctgc__structure_reuse__versions__create_fresh_pred_proc_info_copy_4_0);
	MR_init_label8(transform_hlds__ctgc__structure_reuse__versions__create_fresh_pred_proc_info_copy_4_0,2,3,4,5,6,7,8,9)
	MR_init_label8(transform_hlds__ctgc__structure_reuse__versions__create_fresh_pred_proc_info_copy_4_0,10,11,12,13,14,15,16,17)
	MR_init_label8(transform_hlds__ctgc__structure_reuse__versions__create_fresh_pred_proc_info_copy_4_0,18,19,20,21,22,23,24,25)
	MR_init_label2(transform_hlds__ctgc__structure_reuse__versions__create_fresh_pred_proc_info_copy_4_0,26,27)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__transform_hlds__ctgc__structure_reuse__versions__create_fresh_pred_proc_info_copy_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(16);
	MR_sv(16) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_sv(5) = MR_tempr1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(1);
	}
	MR_np_call_localret_ent(hlds__hlds_module__module_info_pred_proc_info_4_0,
		transform_hlds__ctgc__structure_reuse__versions__create_fresh_pred_proc_info_copy_4_0_i2);
MR_def_label(transform_hlds__ctgc__structure_reuse__versions__create_fresh_pred_proc_info_copy_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_sv(3) = MR_r2;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(hlds__hlds_module__module_info_pred_proc_info_4_0,
		transform_hlds__ctgc__structure_reuse__versions__create_fresh_pred_proc_info_copy_4_0_i3);
MR_def_label(transform_hlds__ctgc__structure_reuse__versions__create_fresh_pred_proc_info_copy_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_ctfield(0, MR_sv(1), 1);
	MR_np_call_localret_ent(fn__hlds__hlds_pred__proc_id_to_int_1_0,
		transform_hlds__ctgc__structure_reuse__versions__create_fresh_pred_proc_info_copy_4_0_i4);
MR_def_label(transform_hlds__ctgc__structure_reuse__versions__create_fresh_pred_proc_info_copy_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(fn__hlds__hlds_pred__pred_info_module_1_0,
		transform_hlds__ctgc__structure_reuse__versions__create_fresh_pred_proc_info_copy_4_0_i5);
MR_def_label(transform_hlds__ctgc__structure_reuse__versions__create_fresh_pred_proc_info_copy_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(fn__hlds__hlds_pred__pred_info_is_pred_or_func_1_0,
		transform_hlds__ctgc__structure_reuse__versions__create_fresh_pred_proc_info_copy_4_0_i6);
MR_def_label(transform_hlds__ctgc__structure_reuse__versions__create_fresh_pred_proc_info_copy_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_sv(4) = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__hlds__hlds_pred__pred_info_name_1_0,
		transform_hlds__ctgc__structure_reuse__versions__create_fresh_pred_proc_info_copy_4_0_i7);
MR_def_label(transform_hlds__ctgc__structure_reuse__versions__create_fresh_pred_proc_info_copy_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = (MR_Word) MR_string_const("ctgc", 4);
	MR_r3 = MR_sv(4);
	MR_r5 = (MR_Integer) 0;
	MR_r6 = MR_sv(6);
	MR_np_call_localret_ent(parse_tree__prog_util__make_pred_name_with_context_7_0,
		transform_hlds__ctgc__structure_reuse__versions__create_fresh_pred_proc_info_copy_4_0_i8);
MR_def_label(transform_hlds__ctgc__structure_reuse__versions__create_fresh_pred_proc_info_copy_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(fn__hlds__hlds_pred__pred_info_module_1_0,
		transform_hlds__ctgc__structure_reuse__versions__create_fresh_pred_proc_info_copy_4_0_i9);
MR_def_label(transform_hlds__ctgc__structure_reuse__versions__create_fresh_pred_proc_info_copy_4_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(fn__hlds__hlds_pred__pred_info_is_pred_or_func_1_0,
		transform_hlds__ctgc__structure_reuse__versions__create_fresh_pred_proc_info_copy_4_0_i10);
MR_def_label(transform_hlds__ctgc__structure_reuse__versions__create_fresh_pred_proc_info_copy_4_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_context_2_0,
		transform_hlds__ctgc__structure_reuse__versions__create_fresh_pred_proc_info_copy_4_0_i11);
MR_def_label(transform_hlds__ctgc__structure_reuse__versions__create_fresh_pred_proc_info_copy_4_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_origin_2_0,
		transform_hlds__ctgc__structure_reuse__versions__create_fresh_pred_proc_info_copy_4_0_i12);
MR_def_label(transform_hlds__ctgc__structure_reuse__versions__create_fresh_pred_proc_info_copy_4_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_import_status_2_0,
		transform_hlds__ctgc__structure_reuse__versions__create_fresh_pred_proc_info_copy_4_0_i13);
MR_def_label(transform_hlds__ctgc__structure_reuse__versions__create_fresh_pred_proc_info_copy_4_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(10) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_markers_2_0,
		transform_hlds__ctgc__structure_reuse__versions__create_fresh_pred_proc_info_copy_4_0_i14);
MR_def_label(transform_hlds__ctgc__structure_reuse__versions__create_fresh_pred_proc_info_copy_4_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(11) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_arg_types_2_0,
		transform_hlds__ctgc__structure_reuse__versions__create_fresh_pred_proc_info_copy_4_0_i15);
MR_def_label(transform_hlds__ctgc__structure_reuse__versions__create_fresh_pred_proc_info_copy_4_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(12) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_typevarset_2_0,
		transform_hlds__ctgc__structure_reuse__versions__create_fresh_pred_proc_info_copy_4_0_i16);
MR_def_label(transform_hlds__ctgc__structure_reuse__versions__create_fresh_pred_proc_info_copy_4_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(13) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_exist_quant_tvars_2_0,
		transform_hlds__ctgc__structure_reuse__versions__create_fresh_pred_proc_info_copy_4_0_i17);
MR_def_label(transform_hlds__ctgc__structure_reuse__versions__create_fresh_pred_proc_info_copy_4_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(14) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_class_context_2_0,
		transform_hlds__ctgc__structure_reuse__versions__create_fresh_pred_proc_info_copy_4_0_i18);
MR_def_label(transform_hlds__ctgc__structure_reuse__versions__create_fresh_pred_proc_info_copy_4_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(15) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_assertions_2_0,
		transform_hlds__ctgc__structure_reuse__versions__create_fresh_pred_proc_info_copy_4_0_i19);
MR_def_label(transform_hlds__ctgc__structure_reuse__versions__create_fresh_pred_proc_info_copy_4_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_sv(2) = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_var_name_remap_2_0,
		transform_hlds__ctgc__structure_reuse__versions__create_fresh_pred_proc_info_copy_4_0_i20);
MR_def_label(transform_hlds__ctgc__structure_reuse__versions__create_fresh_pred_proc_info_copy_4_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r13 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(7);
	MR_r4 = MR_sv(8);
	MR_r5 = MR_sv(9);
	MR_r6 = MR_sv(10);
	MR_r7 = MR_sv(11);
	MR_r8 = MR_sv(12);
	MR_r9 = MR_sv(13);
	MR_r10 = MR_sv(14);
	MR_r11 = MR_sv(15);
	MR_r12 = MR_sv(2);
	MR_r14 = MR_sv(3);
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_create_16_0,
		transform_hlds__ctgc__structure_reuse__versions__create_fresh_pred_proc_info_copy_4_0_i21);
MR_def_label(transform_hlds__ctgc__structure_reuse__versions__create_fresh_pred_proc_info_copy_4_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_predicate_table_2_0,
		transform_hlds__ctgc__structure_reuse__versions__create_fresh_pred_proc_info_copy_4_0_i22);
MR_def_label(transform_hlds__ctgc__structure_reuse__versions__create_fresh_pred_proc_info_copy_4_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(hlds__pred_table__predicate_table_insert_4_0,
		transform_hlds__ctgc__structure_reuse__versions__create_fresh_pred_proc_info_copy_4_0_i23);
MR_def_label(transform_hlds__ctgc__structure_reuse__versions__create_fresh_pred_proc_info_copy_4_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_sv(2) = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tfield(0, MR_tempr1, 1) = MR_sv(3);
	MR_r1 = MR_r2;
	MR_r2 = MR_sv(5);
	}
	MR_np_call_localret_ent(hlds__hlds_module__module_info_set_predicate_table_3_0,
		transform_hlds__ctgc__structure_reuse__versions__create_fresh_pred_proc_info_copy_4_0_i24);
MR_def_label(transform_hlds__ctgc__structure_reuse__versions__create_fresh_pred_proc_info_copy_4_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_structure_reuse_map_2_0,
		transform_hlds__ctgc__structure_reuse__versions__create_fresh_pred_proc_info_copy_4_0_i25);
MR_def_label(transform_hlds__ctgc__structure_reuse__versions__create_fresh_pred_proc_info_copy_4_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_r5 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(4);
	MR_r3 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,3);
	MR_r4 = MR_sv(1);
	}
	MR_np_call_localret_ent(map__det_insert_4_0,
		transform_hlds__ctgc__structure_reuse__versions__create_fresh_pred_proc_info_copy_4_0_i26);
MR_def_label(transform_hlds__ctgc__structure_reuse__versions__create_fresh_pred_proc_info_copy_4_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(hlds__hlds_module__module_info_set_structure_reuse_map_3_0,
		transform_hlds__ctgc__structure_reuse__versions__create_fresh_pred_proc_info_copy_4_0_i27);
MR_def_label(transform_hlds__ctgc__structure_reuse__versions__create_fresh_pred_proc_info_copy_4_0,27)
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

MR_decl_entry(fn__transform_hlds__ctgc__structure_reuse__domain__reuse_as_table_search_2_0);
MR_decl_entry(transform_hlds__ctgc__structure_reuse__domain__reuse_as_conditional_reuses_1_0);

MR_BEGIN_MODULE(transform_hlds__ctgc__structure_reuse__versions_module2)
	MR_init_entry1(transform_hlds__ctgc__structure_reuse__versions__has_conditional_reuse_2_0);
	MR_init_label2(transform_hlds__ctgc__structure_reuse__versions__has_conditional_reuse_2_0,2,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__ctgc__structure_reuse__versions__has_conditional_reuse_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__transform_hlds__ctgc__structure_reuse__domain__reuse_as_table_search_2_0,
		transform_hlds__ctgc__structure_reuse__versions__has_conditional_reuse_2_0_i2);
MR_def_label(transform_hlds__ctgc__structure_reuse__versions__has_conditional_reuse_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__ctgc__structure_reuse__versions__has_conditional_reuse_2_0_i1);
	}
	MR_r1 = MR_r2;
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_np_tailcall_ent(transform_hlds__ctgc__structure_reuse__domain__reuse_as_conditional_reuses_1_0);
MR_def_label(transform_hlds__ctgc__structure_reuse__versions__has_conditional_reuse_2_0,1)
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

MR_decl_entry(transform_hlds__ctgc__structure_reuse__domain__reuse_as_all_unconditional_reuses_1_0);

MR_BEGIN_MODULE(transform_hlds__ctgc__structure_reuse__versions_module3)
	MR_init_entry1(transform_hlds__ctgc__structure_reuse__versions__has_unconditional_reuse_2_0);
	MR_init_label2(transform_hlds__ctgc__structure_reuse__versions__has_unconditional_reuse_2_0,2,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__ctgc__structure_reuse__versions__has_unconditional_reuse_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__transform_hlds__ctgc__structure_reuse__domain__reuse_as_table_search_2_0,
		transform_hlds__ctgc__structure_reuse__versions__has_unconditional_reuse_2_0_i2);
MR_def_label(transform_hlds__ctgc__structure_reuse__versions__has_unconditional_reuse_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__ctgc__structure_reuse__versions__has_unconditional_reuse_2_0_i1);
	}
	MR_r1 = MR_r2;
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_np_tailcall_ent(transform_hlds__ctgc__structure_reuse__domain__reuse_as_all_unconditional_reuses_1_0);
MR_def_label(transform_hlds__ctgc__structure_reuse__versions__has_unconditional_reuse_2_0,1)
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

extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_goal__type_ctor_info_needs_update_0;
extern const MR_TypeCtorInfo_Struct mercury_data_bool__type_ctor_info_bool_0;
MR_decl_entry(fn__list__map_2_0);

MR_BEGIN_MODULE(transform_hlds__ctgc__structure_reuse__versions_module4)
	MR_init_entry1(transform_hlds__ctgc__structure_reuse__versions__unification_set_reuse_3_0);
	MR_init_label2(transform_hlds__ctgc__structure_reuse__versions__unification_set_reuse_3_0,5,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__ctgc__structure_reuse__versions__unification_set_reuse_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r2,0)) {
		MR_GOTO_LAB(transform_hlds__ctgc__structure_reuse__versions__unification_set_reuse_3_0_i2);
	}
	if (MR_PTAG_TESTR(MR_r1,1)) {
		MR_GOTO_LAB(transform_hlds__ctgc__structure_reuse__versions__unification_set_reuse_3_0_i2);
	}
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r2;
	MR_sv(1) = MR_ctfield(0, MR_tempr2, 0);
	MR_sv(2) = MR_ctfield(0, MR_tempr2, 1);
	MR_sv(3) = MR_ctfield(0, MR_tempr2, 2);
	MR_sv(4) = MR_ctfield(0, MR_tempr2, 3);
	MR_sv(5) = MR_ctfield(0, MR_tempr2, 5);
	MR_sv(6) = MR_ctfield(0, MR_tempr2, 6);
	MR_sv(7) = MR_ctfield(1, MR_r1, 0);
	MR_sv(8) = MR_ctfield(1, MR_r1, 2);
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, needs_update);
	MR_r2 = (MR_Word) MR_BOOL_CTOR_ADDR;
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,3,1);
	MR_r4 = MR_ctfield(1, MR_tempr1, 3);
	}
	MR_np_call_localret_ent(fn__list__map_2_0,
		transform_hlds__ctgc__structure_reuse__versions__unification_set_reuse_3_0_i5);
MR_def_label(transform_hlds__ctgc__structure_reuse__versions__unification_set_reuse_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(7);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(8);
	MR_tfield(0, MR_tempr1, 2) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 1);
	MR_tfield(3, MR_tempr2, 0) = MR_tempr1;
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 7);
	MR_tfield(0, MR_r1, 0) = MR_sv(1);
	MR_tfield(0, MR_r1, 1) = MR_sv(2);
	MR_tfield(0, MR_r1, 2) = MR_sv(3);
	MR_tfield(0, MR_r1, 3) = MR_sv(4);
	MR_tfield(0, MR_r1, 4) = MR_tempr2;
	MR_tfield(0, MR_r1, 5) = MR_sv(5);
	MR_tfield(0, MR_r1, 6) = MR_sv(6);
	MR_decr_sp_and_return(9);
	}
MR_def_label(transform_hlds__ctgc__structure_reuse__versions__unification_set_reuse_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(map__search_3_0);

MR_BEGIN_MODULE(transform_hlds__ctgc__structure_reuse__versions_module5)
	MR_init_entry1(transform_hlds__ctgc__structure_reuse__versions__determine_reuse_version_7_0);
	MR_init_label2(transform_hlds__ctgc__structure_reuse__versions__determine_reuse_version_7_0,3,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__ctgc__structure_reuse__versions__determine_reuse_version_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tempr2 = MR_r2;
	MR_tfield(0, MR_tempr1, 0) = MR_tempr2;
	MR_tempr3 = MR_r3;
	MR_tfield(0, MR_tempr1, 1) = MR_tempr3;
	MR_sv(1) = MR_tempr2;
	MR_sv(2) = MR_tempr3;
	MR_sv(3) = MR_r4;
	MR_r3 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,3);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(map__search_3_0,
		transform_hlds__ctgc__structure_reuse__versions__determine_reuse_version_7_0_i3);
MR_def_label(transform_hlds__ctgc__structure_reuse__versions__determine_reuse_version_7_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__ctgc__structure_reuse__versions__determine_reuse_version_7_0_i2);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr3 = MR_r2;
	MR_tempr1 = MR_ctfield(0, MR_tempr3, 0);
	MR_r1 = MR_ctfield(0, MR_tempr1, 0);
	MR_tempr2 = MR_tempr3;
	MR_r2 = MR_ctfield(0, MR_tempr1, 1);
	MR_r3 = MR_ctfield(0, MR_tempr2, 1);
	MR_decr_sp_and_return(4);
	}
MR_def_label(transform_hlds__ctgc__structure_reuse__versions__determine_reuse_version_7_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_decr_sp_and_return(4);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__ctgc__structure_reuse__versions_module6)
	MR_init_entry1(fn__transform_hlds__ctgc__structure_reuse__versions__this_file_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__transform_hlds__ctgc__structure_reuse__versions__this_file_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("structure_reuse.versions.m", 26);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__hlds__hlds_goal__goal_info_get_reuse_1_0);
MR_decl_entry(hlds__hlds_goal__goal_info_set_reuse_3_0);
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_goal__type_ctor_info_hlds_goal_0;
MR_decl_entry(list__map_foldl_5_0);
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_goal__type_ctor_info_case_0;
MR_decl_entry(libs__compiler_util__unexpected_2_0);

MR_BEGIN_MODULE(transform_hlds__ctgc__structure_reuse__versions_module7)
	MR_init_entry1(transform_hlds__ctgc__structure_reuse__versions__process_goal_5_0);
	MR_init_label8(transform_hlds__ctgc__structure_reuse__versions__process_goal_5_0,64,76,5,8,9,77,12,16)
	MR_init_label8(transform_hlds__ctgc__structure_reuse__versions__process_goal_5_0,13,20,21,17,25,78,28,79)
	MR_init_label8(transform_hlds__ctgc__structure_reuse__versions__process_goal_5_0,30,80,32,33,81,35,82,37)
	MR_init_label4(transform_hlds__ctgc__structure_reuse__versions__process_goal_5_0,38,39,83,41)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__ctgc__structure_reuse__versions__process_goal_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
MR_def_label(transform_hlds__ctgc__structure_reuse__versions__process_goal_5_0,64)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_ctfield(0, MR_r2, 0);
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r4),
		MR_LABEL_AP(transform_hlds__ctgc__structure_reuse__versions__process_goal_5_0_i76) MR_AND
		MR_LABEL_AP(transform_hlds__ctgc__structure_reuse__versions__process_goal_5_0_i77) MR_AND
		MR_LABEL_AP(transform_hlds__ctgc__structure_reuse__versions__process_goal_5_0_i33) MR_AND
		MR_LABEL_AP(transform_hlds__ctgc__structure_reuse__versions__process_goal_5_0_i25));
MR_def_label(transform_hlds__ctgc__structure_reuse__versions__process_goal_5_0,76)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(10);
	MR_sv(10) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r4;
	MR_sv(1) = MR_tempr1;
	MR_tempr2 = MR_r2;
	MR_sv(2) = MR_ctfield(0, MR_tempr2, 1);
	MR_sv(3) = MR_ctfield(0, MR_tempr1, 3);
	MR_sv(9) = MR_tempr2;
	MR_r1 = MR_sv(2);
	}
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_reuse_1_0,
		transform_hlds__ctgc__structure_reuse__versions__process_goal_5_0_i5);
MR_def_label(transform_hlds__ctgc__structure_reuse__versions__process_goal_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,2)) {
		MR_GOTO_LAB(transform_hlds__ctgc__structure_reuse__versions__process_goal_5_0_i17);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 1);
	MR_tfield(3, MR_tempr1, 0) = MR_ctfield(2, MR_r1, 0);
	MR_r2 = MR_sv(3);
	MR_sv(3) = MR_tempr1;
	MR_r1 = MR_ctfield(3, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(transform_hlds__ctgc__structure_reuse__versions__unification_set_reuse_3_0,
		transform_hlds__ctgc__structure_reuse__versions__process_goal_5_0_i8);
MR_def_label(transform_hlds__ctgc__structure_reuse__versions__process_goal_5_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_tempr2 = MR_sv(1);
	MR_tfield(0, MR_tempr1, 0) = MR_ctfield(0, MR_tempr2, 0);
	MR_tfield(0, MR_tempr1, 1) = MR_ctfield(0, MR_tempr2, 1);
	MR_tfield(0, MR_tempr1, 2) = MR_ctfield(0, MR_tempr2, 2);
	MR_tfield(0, MR_tempr1, 3) = MR_r1;
	MR_tfield(0, MR_tempr1, 4) = MR_ctfield(0, MR_tempr2, 4);
	MR_sv(1) = MR_tempr1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(2);
	}
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_set_reuse_3_0,
		transform_hlds__ctgc__structure_reuse__versions__process_goal_5_0_i9);
MR_def_label(transform_hlds__ctgc__structure_reuse__versions__process_goal_5_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(10);
	}
MR_def_label(transform_hlds__ctgc__structure_reuse__versions__process_goal_5_0,77)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(10);
	MR_sv(10) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r2;
	MR_sv(2) = MR_ctfield(0, MR_tempr1, 1);
	MR_tempr2 = MR_r4;
	MR_sv(3) = MR_ctfield(1, MR_tempr2, 0);
	MR_sv(4) = MR_ctfield(1, MR_tempr2, 1);
	MR_sv(5) = MR_ctfield(1, MR_tempr2, 2);
	MR_sv(6) = MR_ctfield(1, MR_tempr2, 3);
	MR_sv(7) = MR_ctfield(1, MR_tempr2, 4);
	MR_sv(8) = MR_ctfield(1, MR_tempr2, 5);
	MR_sv(9) = MR_tempr1;
	MR_r1 = MR_sv(2);
	}
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_reuse_1_0,
		transform_hlds__ctgc__structure_reuse__versions__process_goal_5_0_i12);
MR_def_label(transform_hlds__ctgc__structure_reuse__versions__process_goal_5_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,3)) {
		MR_GOTO_LAB(transform_hlds__ctgc__structure_reuse__versions__process_goal_5_0_i13);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(3, MR_r1, 0);
	if (MR_PTAG_TESTR(MR_tempr1,2)) {
		MR_GOTO_LAB(transform_hlds__ctgc__structure_reuse__versions__process_goal_5_0_i13);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(8);
	}
	MR_np_call_localret_ent(transform_hlds__ctgc__structure_reuse__versions__determine_reuse_version_7_0,
		transform_hlds__ctgc__structure_reuse__versions__process_goal_5_0_i16);
MR_def_label(transform_hlds__ctgc__structure_reuse__versions__process_goal_5_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 6);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = MR_r2;
	MR_tfield(1, MR_tempr1, 2) = MR_sv(5);
	MR_tfield(1, MR_tempr1, 3) = MR_sv(6);
	MR_tfield(1, MR_tempr1, 4) = MR_sv(7);
	MR_tfield(1, MR_tempr1, 5) = MR_r3;
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r1, 0) = MR_tempr1;
	MR_tfield(0, MR_r1, 1) = MR_sv(2);
	MR_decr_sp_and_return(10);
	}
MR_def_label(transform_hlds__ctgc__structure_reuse__versions__process_goal_5_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,2)) {
		MR_GOTO_LAB(transform_hlds__ctgc__structure_reuse__versions__process_goal_5_0_i17);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(2, MR_r1, 0);
	if (MR_PTAG_TESTR(MR_tempr1,2)) {
		MR_GOTO_LAB(transform_hlds__ctgc__structure_reuse__versions__process_goal_5_0_i17);
	}
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(8);
	}
	MR_np_call_localret_ent(transform_hlds__ctgc__structure_reuse__versions__determine_reuse_version_7_0,
		transform_hlds__ctgc__structure_reuse__versions__process_goal_5_0_i20);
MR_def_label(transform_hlds__ctgc__structure_reuse__versions__process_goal_5_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 6);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = MR_r2;
	MR_tfield(1, MR_tempr1, 2) = MR_sv(5);
	MR_tfield(1, MR_tempr1, 3) = MR_sv(6);
	MR_tfield(1, MR_tempr1, 4) = MR_sv(7);
	MR_tfield(1, MR_tempr1, 5) = MR_r3;
	MR_tag_alloc_heap(MR_r1, 3, (MR_Integer) 1);
	MR_tfield(3, MR_r1, 0) = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	MR_r2 = MR_sv(2);
	}
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_set_reuse_3_0,
		transform_hlds__ctgc__structure_reuse__versions__process_goal_5_0_i21);
MR_def_label(transform_hlds__ctgc__structure_reuse__versions__process_goal_5_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(10);
	}
MR_def_label(transform_hlds__ctgc__structure_reuse__versions__process_goal_5_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(9);
	MR_decr_sp_and_return(10);
MR_def_label(transform_hlds__ctgc__structure_reuse__versions__process_goal_5_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_ctfield(3, MR_r4, 0),
		MR_LABEL_AP(transform_hlds__ctgc__structure_reuse__versions__process_goal_5_0_i33) MR_AND
		MR_LABEL_AP(transform_hlds__ctgc__structure_reuse__versions__process_goal_5_0_i78) MR_AND
		MR_LABEL_AP(transform_hlds__ctgc__structure_reuse__versions__process_goal_5_0_i79) MR_AND
		MR_LABEL_AP(transform_hlds__ctgc__structure_reuse__versions__process_goal_5_0_i80) MR_AND
		MR_LABEL_AP(transform_hlds__ctgc__structure_reuse__versions__process_goal_5_0_i33) MR_AND
		MR_LABEL_AP(transform_hlds__ctgc__structure_reuse__versions__process_goal_5_0_i81) MR_AND
		MR_LABEL_AP(transform_hlds__ctgc__structure_reuse__versions__process_goal_5_0_i82) MR_AND
		MR_LABEL_AP(transform_hlds__ctgc__structure_reuse__versions__process_goal_5_0_i83));
MR_def_label(transform_hlds__ctgc__structure_reuse__versions__process_goal_5_0,78)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(10);
	MR_sv(10) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(5,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_LABEL_AP(transform_hlds__ctgc__structure_reuse__versions__process_goal_5_0_i64);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_r1;
	MR_sv(2) = MR_ctfield(0, MR_r2, 1);
	MR_tempr3 = MR_r4;
	MR_sv(1) = MR_ctfield(3, MR_tempr3, 1);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	MR_r3 = (MR_Word) MR_IO_CTOR_ADDR;
	MR_tempr2 = MR_tempr3;
	MR_r4 = MR_tempr1;
	MR_r5 = MR_ctfield(3, MR_tempr2, 2);
	}
	MR_np_call_localret_ent(list__map_foldl_5_0,
		transform_hlds__ctgc__structure_reuse__versions__process_goal_5_0_i28);
MR_def_label(transform_hlds__ctgc__structure_reuse__versions__process_goal_5_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(1);
	MR_tfield(3, MR_tempr1, 2) = MR_r1;
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r1, 0) = MR_tempr1;
	MR_tfield(0, MR_r1, 1) = MR_sv(2);
	MR_decr_sp_and_return(10);
	}
MR_def_label(transform_hlds__ctgc__structure_reuse__versions__process_goal_5_0,79)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(10);
	MR_sv(10) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(5,1);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_LABEL_AP(transform_hlds__ctgc__structure_reuse__versions__process_goal_5_0_i64);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_r1;
	MR_sv(2) = MR_ctfield(0, MR_r2, 1);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	MR_r3 = (MR_Word) MR_IO_CTOR_ADDR;
	MR_sv(1) = MR_r4;
	MR_r4 = MR_tempr1;
	MR_r5 = MR_ctfield(3, MR_sv(1), 1);
	}
	MR_np_call_localret_ent(list__map_foldl_5_0,
		transform_hlds__ctgc__structure_reuse__versions__process_goal_5_0_i30);
MR_def_label(transform_hlds__ctgc__structure_reuse__versions__process_goal_5_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 2;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r1, 0) = MR_tempr1;
	MR_tfield(0, MR_r1, 1) = MR_sv(2);
	MR_decr_sp_and_return(10);
	}
MR_def_label(transform_hlds__ctgc__structure_reuse__versions__process_goal_5_0,80)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(10);
	MR_sv(10) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(5,2);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(transform_hlds__ctgc__structure_reuse__versions__process_case_5_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_r1;
	MR_sv(2) = MR_ctfield(0, MR_r2, 1);
	MR_tempr3 = MR_r4;
	MR_sv(1) = MR_ctfield(3, MR_tempr3, 1);
	MR_sv(3) = MR_ctfield(3, MR_tempr3, 2);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, case);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, case);
	MR_r3 = (MR_Word) MR_IO_CTOR_ADDR;
	MR_tempr2 = MR_tempr3;
	MR_r4 = MR_tempr1;
	MR_r5 = MR_ctfield(3, MR_tempr2, 3);
	}
	MR_np_call_localret_ent(list__map_foldl_5_0,
		transform_hlds__ctgc__structure_reuse__versions__process_goal_5_0_i32);
MR_def_label(transform_hlds__ctgc__structure_reuse__versions__process_goal_5_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 4);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 3;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(1);
	MR_tfield(3, MR_tempr1, 2) = MR_sv(3);
	MR_tfield(3, MR_tempr1, 3) = MR_r1;
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r1, 0) = MR_tempr1;
	MR_tfield(0, MR_r1, 1) = MR_sv(2);
	MR_decr_sp_and_return(10);
	}
MR_def_label(transform_hlds__ctgc__structure_reuse__versions__process_goal_5_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_proceed();
MR_def_label(transform_hlds__ctgc__structure_reuse__versions__process_goal_5_0,81)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(10);
	MR_sv(10) = (MR_Word) MR_succip;
	MR_sv(2) = MR_ctfield(0, MR_r2, 1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_sv(1) = MR_ctfield(3, MR_tempr1, 1);
	MR_r2 = MR_ctfield(3, MR_tempr1, 2);
	}
	MR_np_localcall_lab(transform_hlds__ctgc__structure_reuse__versions__process_goal_5_0,
		transform_hlds__ctgc__structure_reuse__versions__process_goal_5_0_i35);
MR_def_label(transform_hlds__ctgc__structure_reuse__versions__process_goal_5_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 5;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(1);
	MR_tfield(3, MR_tempr1, 2) = MR_r1;
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r1, 0) = MR_tempr1;
	MR_tfield(0, MR_r1, 1) = MR_sv(2);
	MR_decr_sp_and_return(10);
	}
MR_def_label(transform_hlds__ctgc__structure_reuse__versions__process_goal_5_0,82)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(10);
	MR_sv(10) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_ctfield(0, MR_r2, 1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_sv(3) = MR_ctfield(3, MR_tempr1, 3);
	MR_sv(4) = MR_ctfield(3, MR_tempr1, 4);
	MR_sv(5) = MR_ctfield(3, MR_tempr1, 1);
	MR_r2 = MR_ctfield(3, MR_tempr1, 2);
	}
	MR_np_localcall_lab(transform_hlds__ctgc__structure_reuse__versions__process_goal_5_0,
		transform_hlds__ctgc__structure_reuse__versions__process_goal_5_0_i37);
MR_def_label(transform_hlds__ctgc__structure_reuse__versions__process_goal_5_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_np_localcall_lab(transform_hlds__ctgc__structure_reuse__versions__process_goal_5_0,
		transform_hlds__ctgc__structure_reuse__versions__process_goal_5_0_i38);
MR_def_label(transform_hlds__ctgc__structure_reuse__versions__process_goal_5_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	MR_r2 = MR_sv(4);
	}
	MR_np_localcall_lab(transform_hlds__ctgc__structure_reuse__versions__process_goal_5_0,
		transform_hlds__ctgc__structure_reuse__versions__process_goal_5_0_i39);
MR_def_label(transform_hlds__ctgc__structure_reuse__versions__process_goal_5_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 5);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 6;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(5);
	MR_tfield(3, MR_tempr1, 2) = MR_sv(3);
	MR_tfield(3, MR_tempr1, 3) = MR_sv(1);
	MR_tfield(3, MR_tempr1, 4) = MR_r1;
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r1, 0) = MR_tempr1;
	MR_tfield(0, MR_r1, 1) = MR_sv(2);
	MR_decr_sp_and_return(10);
	}
MR_def_label(transform_hlds__ctgc__structure_reuse__versions__process_goal_5_0,83)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(10);
	MR_sv(10) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(fn__transform_hlds__ctgc__structure_reuse__versions__this_file_0_0,
		transform_hlds__ctgc__structure_reuse__versions__process_goal_5_0_i41);
MR_def_label(transform_hlds__ctgc__structure_reuse__versions__process_goal_5_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("process_goal: shorthand goal.", 29);
	MR_succip_word = MR_sv(10);
	MR_decr_sp(10);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__passes_aux__write_proc_progress_message_5_0);
MR_decl_entry(hlds__hlds_pred__proc_info_get_goal_2_0);
MR_decl_entry(hlds__hlds_pred__proc_info_set_goal_3_0);
MR_decl_entry(hlds__hlds_module__module_info_set_pred_proc_info_5_0);

MR_BEGIN_MODULE(transform_hlds__ctgc__structure_reuse__versions_module8)
	MR_init_entry1(transform_hlds__ctgc__structure_reuse__versions__process_proc_6_0);
	MR_init_label5(transform_hlds__ctgc__structure_reuse__versions__process_proc_6_0,2,3,4,5,6)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__ctgc__structure_reuse__versions__process_proc_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(5) = MR_r3;
	MR_r1 = (MR_Word) MR_string_const("(reuse version) ", 16);
	MR_np_call_localret_ent(hlds__passes_aux__write_proc_progress_message_5_0,
		transform_hlds__ctgc__structure_reuse__versions__process_proc_6_0_i2);
MR_def_label(transform_hlds__ctgc__structure_reuse__versions__process_proc_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(hlds__hlds_module__module_info_pred_proc_info_4_0,
		transform_hlds__ctgc__structure_reuse__versions__process_proc_6_0_i3);
MR_def_label(transform_hlds__ctgc__structure_reuse__versions__process_proc_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_sv(4) = MR_tempr1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_goal_2_0,
		transform_hlds__ctgc__structure_reuse__versions__process_proc_6_0_i4);
MR_def_label(transform_hlds__ctgc__structure_reuse__versions__process_proc_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(transform_hlds__ctgc__structure_reuse__versions__process_goal_5_0,
		transform_hlds__ctgc__structure_reuse__versions__process_proc_6_0_i5);
MR_def_label(transform_hlds__ctgc__structure_reuse__versions__process_proc_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_set_goal_3_0,
		transform_hlds__ctgc__structure_reuse__versions__process_proc_6_0_i6);
MR_def_label(transform_hlds__ctgc__structure_reuse__versions__process_proc_6_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(3);
	MR_r4 = MR_sv(5);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(hlds__hlds_module__module_info_set_pred_proc_info_5_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__ctgc__structure_reuse__versions_module9)
	MR_init_entry1(fn__transform_hlds__ctgc__structure_reuse__versions__needs_update_to_bool_1_0);
	MR_init_label1(fn__transform_hlds__ctgc__structure_reuse__versions__needs_update_to_bool_1_0,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__transform_hlds__ctgc__structure_reuse__versions__needs_update_to_bool_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(fn__transform_hlds__ctgc__structure_reuse__versions__needs_update_to_bool_1_0_i3);
	}
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(fn__transform_hlds__ctgc__structure_reuse__versions__needs_update_to_bool_1_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__ctgc__structure_reuse__versions_module10)
	MR_init_entry1(transform_hlds__ctgc__structure_reuse__versions__process_case_5_0);
	MR_init_label1(transform_hlds__ctgc__structure_reuse__versions__process_case_5_0,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__ctgc__structure_reuse__versions__process_case_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_ctfield(0, MR_r2, 0);
	MR_r2 = MR_ctfield(0, MR_r2, 1);
	MR_np_call_localret_ent(transform_hlds__ctgc__structure_reuse__versions__process_goal_5_0,
		transform_hlds__ctgc__structure_reuse__versions__process_case_5_0_i2);
MR_def_label(transform_hlds__ctgc__structure_reuse__versions__process_case_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(2);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___mdbcomp__prim_data__sym_name_0_0);

MR_BEGIN_MODULE(transform_hlds__ctgc__structure_reuse__versions_module11)
	MR_init_entry1(__Unify___transform_hlds__ctgc__structure_reuse__versions__reuse_name_0_0);
MR_BEGIN_CODE

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

MR_BEGIN_MODULE(transform_hlds__ctgc__structure_reuse__versions_module12)
	MR_init_entry1(__Compare___transform_hlds__ctgc__structure_reuse__versions__reuse_name_0_0);
MR_BEGIN_CODE

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

void mercury__transform_hlds__ctgc__structure_reuse__versions__init(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	mercury__transform_hlds__ctgc__structure_reuse__versions_maybe_bunch_0();
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

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;
