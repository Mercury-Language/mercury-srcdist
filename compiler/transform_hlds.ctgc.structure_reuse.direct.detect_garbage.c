/*
** Automatically generated from `structure_reuse.direct.detect_garbage.m'
** by the Mercury compiler,
** version rotd-2007-12-21, configured for i686-pc-linux-gnu.
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
INIT mercury__transform_hlds__ctgc__structure_reuse__direct__detect_garbage__init
ENDINIT
*/

#define MR_ALLOW_RESET
#include "mercury_imp.h"
#line 532 "../library/io.int"
#include "io.mh"

#line 27 "transform_hlds.ctgc.structure_reuse.direct.detect_garbage.c"
#line 540 "../library/io.int"
#include "string.mh"

#line 31 "transform_hlds.ctgc.structure_reuse.direct.detect_garbage.c"
#line 145 "../mdbcomp/mdbcomp.program_representation.int"
#include "mdbcomp.program_representation.mh"

#line 35 "transform_hlds.ctgc.structure_reuse.direct.detect_garbage.c"
#line 29 "../library/bitmap.int2"
#include "bitmap.mh"

#line 39 "transform_hlds.ctgc.structure_reuse.direct.detect_garbage.c"
#line 28 "../library/time.int2"
#include "time.mh"

#line 43 "transform_hlds.ctgc.structure_reuse.direct.detect_garbage.c"
#line 87 "../library/table_builtin.int2"
#include "table_builtin.mh"

#line 47 "transform_hlds.ctgc.structure_reuse.direct.detect_garbage.c"
#line 33 "../mdbcomp/mdbcomp.rtti_access.int2"
#include "mdbcomp.rtti_access.mh"

#line 51 "transform_hlds.ctgc.structure_reuse.direct.detect_garbage.c"
#line 52 "transform_hlds.ctgc.structure_reuse.direct.detect_garbage.c"
#include "transform_hlds.ctgc.structure_reuse.direct.detect_garbage.mh"

#line 55 "transform_hlds.ctgc.structure_reuse.direct.detect_garbage.c"
#line 56 "transform_hlds.ctgc.structure_reuse.direct.detect_garbage.c"
#ifndef TRANSFORM_HLDS__CTGC__STRUCTURE_REUSE__DIRECT__DETECT_GARBAGE_DECL_GUARD
#define TRANSFORM_HLDS__CTGC__STRUCTURE_REUSE__DIRECT__DETECT_GARBAGE_DECL_GUARD

#line 60 "transform_hlds.ctgc.structure_reuse.direct.detect_garbage.c"
#line 61 "transform_hlds.ctgc.structure_reuse.direct.detect_garbage.c"

#endif
#line 64 "transform_hlds.ctgc.structure_reuse.direct.detect_garbage.c"

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
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[7];
};
MR_STATIC_LINKAGE const struct mercury_type_1 mercury_common_1[];

struct mercury_type_2 {
	MR_Word * f1[2];
};
MR_STATIC_LINKAGE const struct mercury_type_2 mercury_common_2[];

struct mercury_type_3 {
	MR_Word * f1;
	MR_Word * f2;
	MR_Integer f3;
	MR_Word * f4;
	MR_Word * f5;
};
MR_STATIC_LINKAGE const struct mercury_type_3 mercury_common_3[];

struct mercury_type_4 {
	MR_Word * f1;
	MR_Code * f2;
	MR_Integer f3;
};
MR_STATIC_LINKAGE const struct mercury_type_4 mercury_common_4[];

struct mercury_type_5 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[5];
};
MR_STATIC_LINKAGE const struct mercury_type_5 mercury_common_5[];

struct mercury_type_6 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[6];
};
MR_STATIC_LINKAGE const struct mercury_type_6 mercury_common_6[];

extern const MR_TypeCtorInfo_Struct
	mercury_data_transform_hlds__ctgc__structure_reuse__direct__detect_garbage__type_ctor_info_detect_bg_info_0;
MR_decl_label3(transform_hlds__ctgc__structure_reuse__direct__detect_garbage__determine_dead_deconstructions_6_0, 2,3,4)
MR_decl_label8(transform_hlds__ctgc__structure_reuse__direct__detect_garbage__determine_dead_deconstructions_2_6_0, 39,4,5,6,8,10,11,12)
MR_decl_label8(transform_hlds__ctgc__structure_reuse__direct__detect_garbage__determine_dead_deconstructions_2_6_0, 13,14,16,17,18,19,20,22)
MR_decl_label8(transform_hlds__ctgc__structure_reuse__direct__detect_garbage__determine_dead_deconstructions_2_6_0, 24,25,27,28,30,31,32,33)
MR_decl_label3(transform_hlds__ctgc__structure_reuse__direct__detect_garbage__determine_dead_deconstructions_2_6_0, 34,35,36)
MR_decl_label2(transform_hlds__ctgc__structure_reuse__direct__detect_garbage__determine_dead_deconstructions_2_disj_goal_7_0, 2,3)
MR_decl_label8(transform_hlds__ctgc__structure_reuse__direct__detect_garbage__unification_verify_reuse_8_0, 56,6,7,15,17,18,19,20)
MR_decl_label8(transform_hlds__ctgc__structure_reuse__direct__detect_garbage__unification_verify_reuse_8_0, 21,23,24,26,9,30,37,31)
MR_decl_label5(__Unify___transform_hlds__ctgc__structure_reuse__direct__detect_garbage__detect_bg_info_0_0, 4,6,8,12,1)
MR_decl_label6(__Compare___transform_hlds__ctgc__structure_reuse__direct__detect_garbage__detect_bg_info_0_0, 3,2,5,9,13,37)
MR_decl_static(transform_hlds__ctgc__structure_reuse__direct__detect_garbage__determine_dead_deconstructions_2_disj_6_0)
MR_decl_static(fn__transform_hlds__ctgc__structure_reuse__direct__detect_garbage__this_file_0_0)
MR_decl_static(transform_hlds__ctgc__structure_reuse__direct__detect_garbage__unification_verify_reuse_8_0)
MR_decl_static(transform_hlds__ctgc__structure_reuse__direct__detect_garbage__determine_dead_deconstructions_2_6_0)
MR_def_extern_entry(transform_hlds__ctgc__structure_reuse__direct__detect_garbage__determine_dead_deconstructions_6_0)
MR_decl_static(transform_hlds__ctgc__structure_reuse__direct__detect_garbage__determine_dead_deconstructions_2_disj_goal_7_0)
MR_decl_static(__Unify___transform_hlds__ctgc__structure_reuse__direct__detect_garbage__detect_bg_info_0_0)
MR_decl_static(__Compare___transform_hlds__ctgc__structure_reuse__direct__detect_garbage__detect_bg_info_0_0)
MR_decl_static(fn__transform_hlds__ctgc__structure_reuse__direct__detect_garbage__IntroducedFrom__func__determine_dead_deconstructions_2__122__1_1_0)

extern const MR_TypeCtorInfo_Struct mercury_data_tree234__type_ctor_info_tree234_2;
extern const MR_TypeCtorInfo_Struct mercury_data_transform_hlds__smm_common__type_ctor_info_program_point_0;
extern const MR_TypeCtorInfo_Struct mercury_data_transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_reuse_condition_0;
extern const MR_TypeCtorInfo_Struct mercury_data_transform_hlds__smm_common__type_ctor_info_program_point_0;
extern const MR_TypeCtorInfo_Struct mercury_data_transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_reuse_condition_0;
static const struct mercury_type_0 mercury_common_0[2] =
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
MR_CTOR0_ADDR(transform_hlds__smm_common, program_point),
MR_CTOR0_ADDR(transform_hlds__ctgc__structure_reuse__domain, reuse_condition)
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__ctgc__structure_reuse__direct__detect_garbage__determine_dead_deconstructions_2_disj_6_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_transform_hlds__ctgc__structure_reuse__direct__detect_garbage__type_ctor_info_detect_bg_info_0;
extern const MR_TypeCtorInfo_Struct mercury_data_transform_hlds__ctgc__structure_sharing__domain__type_ctor_info_sharing_as_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_goal__type_ctor_info_hlds_goal_0;
static const struct mercury_type_1 mercury_common_1[1] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__transform_hlds__ctgc__structure_reuse__direct__detect_garbage__determine_dead_deconstructions_2_disj_6_0_1,
(MR_Word *) (MR_Integer) 0
},
7,
{
MR_CTOR0_ADDR(transform_hlds__ctgc__structure_reuse__direct__detect_garbage, detect_bg_info),
MR_CTOR0_ADDR(transform_hlds__ctgc__structure_sharing__domain, sharing_as),
MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal),
MR_CTOR0_ADDR(transform_hlds__ctgc__structure_sharing__domain, sharing_as),
MR_CTOR0_ADDR(transform_hlds__ctgc__structure_sharing__domain, sharing_as),
MR_COMMON(0,0),
MR_COMMON(0,0)
}
},
};

extern const MR_TypeCtorInfo_Struct mercury_data_term__type_ctor_info_var_1;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_prog_var_type_0;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_prog_var_type_0;
extern const MR_TypeCtorInfo_Struct mercury_data_list__type_ctor_info_list_1;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_datastruct_0;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_datastruct_0;
static const struct mercury_type_2 mercury_common_2[4] =
{
{
{
MR_CTOR1_ADDR(term, var),
MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type)
}
},
{
{
MR_CTOR1_ADDR(term, var),
MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type)
}
},
{
{
MR_LIST_CTOR_ADDR,
MR_CTOR0_ADDR(parse_tree__prog_data, datastruct)
}
},
{
{
MR_LIST_CTOR_ADDR,
MR_CTOR0_ADDR(parse_tree__prog_data, datastruct)
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__ctgc__structure_reuse__direct__detect_garbage__unification_verify_reuse_8_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_datastruct_0;
static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__ctgc__structure_reuse__direct__detect_garbage__determine_dead_deconstructions_2_6_0_2;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_goal__type_ctor_info_case_0;
static const struct mercury_type_3 mercury_common_3[2] =
{
{
(MR_Word *) &mercury_data__closure_layout__transform_hlds__ctgc__structure_reuse__direct__detect_garbage__unification_verify_reuse_8_0_1,
(MR_Word *) (MR_Integer) 0,
2,
MR_COMMON(2,1),
MR_CTOR0_ADDR(parse_tree__prog_data, datastruct)
},
{
(MR_Word *) &mercury_data__closure_layout__transform_hlds__ctgc__structure_reuse__direct__detect_garbage__determine_dead_deconstructions_2_6_0_2,
(MR_Word *) (MR_Integer) 0,
2,
MR_CTOR0_ADDR(hlds__hlds_goal, case),
MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal)
},
};

MR_decl_entry(fn__transform_hlds__ctgc__datastruct__datastruct_init_1_0);
static const struct mercury_type_4 mercury_common_4[2] =
{
{
MR_COMMON(3,0),
MR_ENTRY_AP(fn__transform_hlds__ctgc__datastruct__datastruct_init_1_0),
0
},
{
MR_COMMON(3,1),
MR_ENTRY_AP(fn__transform_hlds__ctgc__structure_reuse__direct__detect_garbage__IntroducedFrom__func__determine_dead_deconstructions_2__122__1_1_0),
0
},
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__ctgc__structure_reuse__direct__detect_garbage__unification_verify_reuse_8_0_2;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_module__type_ctor_info_module_info_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_proc_info_0;
static const struct mercury_type_5 mercury_common_5[1] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__transform_hlds__ctgc__structure_reuse__direct__detect_garbage__unification_verify_reuse_8_0_2,
(MR_Word *) (MR_Integer) 0
},
5,
{
MR_CTOR0_ADDR(hlds__hlds_module, module_info),
MR_CTOR0_ADDR(hlds__hlds_pred, proc_info),
MR_CTOR0_ADDR(transform_hlds__ctgc__structure_sharing__domain, sharing_as),
MR_CTOR0_ADDR(parse_tree__prog_data, datastruct),
MR_COMMON(2,3)
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__ctgc__structure_reuse__direct__detect_garbage__determine_dead_deconstructions_2_6_0_1;
static const struct mercury_type_6 mercury_common_6[1] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__transform_hlds__ctgc__structure_reuse__direct__detect_garbage__determine_dead_deconstructions_2_6_0_1,
(MR_Word *) (MR_Integer) 0
},
6,
{
MR_CTOR0_ADDR(transform_hlds__ctgc__structure_reuse__direct__detect_garbage, detect_bg_info),
MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal),
MR_CTOR0_ADDR(transform_hlds__ctgc__structure_sharing__domain, sharing_as),
MR_CTOR0_ADDR(transform_hlds__ctgc__structure_sharing__domain, sharing_as),
MR_COMMON(0,0),
MR_COMMON(0,0)
}
},
};
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_module__type_ctor_info_module_info_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_pred_info_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_proc_info_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_pred_proc_id_0;
extern const MR_TypeCtorInfo_Struct mercury_data_transform_hlds__ctgc__structure_sharing__domain__type_ctor_info_sharing_as_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_pred_proc_id_0;
extern const MR_TypeCtorInfo_Struct mercury_data_transform_hlds__ctgc__structure_sharing__domain__type_ctor_info_sharing_as_0;

static const MR_FA_TypeInfo_Struct2 mercury_data_tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0transform_hlds__ctgc__structure_sharing__domain__type_ctor_info_sharing_as_0 = {
	&mercury_data_tree234__type_ctor_info_tree234_2,
{	(MR_TypeInfo) &mercury_data_hlds__hlds_pred__type_ctor_info_pred_proc_id_0,
	(MR_TypeInfo) &mercury_data_transform_hlds__ctgc__structure_sharing__domain__type_ctor_info_sharing_as_0
}};
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_module__type_ctor_info_module_info_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_pred_info_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_proc_info_0;

const MR_PseudoTypeInfo mercury_data_transform_hlds__ctgc__structure_reuse__direct__detect_garbage__field_types_detect_bg_info_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_hlds__hlds_module__type_ctor_info_module_info_0,
	(MR_PseudoTypeInfo) &mercury_data_hlds__hlds_pred__type_ctor_info_pred_info_0,
	(MR_PseudoTypeInfo) &mercury_data_hlds__hlds_pred__type_ctor_info_proc_info_0,
	(MR_PseudoTypeInfo) &mercury_data_tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0transform_hlds__ctgc__structure_sharing__domain__type_ctor_info_sharing_as_0
};

const MR_ConstString mercury_data_transform_hlds__ctgc__structure_reuse__direct__detect_garbage__field_names_detect_bg_info_0_0[] = {
	"module_info",
	"pred_info",
	"proc_info",
	"sharing_table"
};

static const MR_DuFunctorDesc mercury_data_transform_hlds__ctgc__structure_reuse__direct__detect_garbage__du_functor_desc_detect_bg_info_0_0 = {
	"detect_bg_info",
	4,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_transform_hlds__ctgc__structure_reuse__direct__detect_garbage__field_types_detect_bg_info_0_0,
	mercury_data_transform_hlds__ctgc__structure_reuse__direct__detect_garbage__field_names_detect_bg_info_0_0,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_transform_hlds__ctgc__structure_reuse__direct__detect_garbage__du_stag_ordered_detect_bg_info_0_0[] = {
	&mercury_data_transform_hlds__ctgc__structure_reuse__direct__detect_garbage__du_functor_desc_detect_bg_info_0_0

};

const MR_DuPtagLayout mercury_data_transform_hlds__ctgc__structure_reuse__direct__detect_garbage__du_ptag_ordered_detect_bg_info_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_transform_hlds__ctgc__structure_reuse__direct__detect_garbage__du_stag_ordered_detect_bg_info_0_0 }

};

const MR_DuFunctorDescPtr mercury_data_transform_hlds__ctgc__structure_reuse__direct__detect_garbage__du_name_ordered_detect_bg_info_0[] = {
	&mercury_data_transform_hlds__ctgc__structure_reuse__direct__detect_garbage__du_functor_desc_detect_bg_info_0_0
};

const MR_Integer mercury_data_transform_hlds__ctgc__structure_reuse__direct__detect_garbage__functor_number_map_detect_bg_info_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_transform_hlds__ctgc__structure_reuse__direct__detect_garbage__type_ctor_info_detect_bg_info_0 = {
	0,
	13,
	1,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___transform_hlds__ctgc__structure_reuse__direct__detect_garbage__detect_bg_info_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___transform_hlds__ctgc__structure_reuse__direct__detect_garbage__detect_bg_info_0_0)),
	"transform_hlds.ctgc.structure_reuse.direct.detect_garbage",
	"detect_bg_info",
	{ (void *)mercury_data_transform_hlds__ctgc__structure_reuse__direct__detect_garbage__du_name_ordered_detect_bg_info_0 },
	{ (void *)mercury_data_transform_hlds__ctgc__structure_reuse__direct__detect_garbage__du_ptag_ordered_detect_bg_info_0 },
	1,
	4,
	mercury_data_transform_hlds__ctgc__structure_reuse__direct__detect_garbage__functor_number_map_detect_bg_info_0
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__ctgc__structure_reuse__direct__detect_garbage__determine_dead_deconstructions_2_disj_6_0_1 = {
{
MR_PREDICATE,
"transform_hlds.ctgc.structure_reuse.direct.detect_garbage",
"transform_hlds.ctgc.structure_reuse.direct.detect_garbage",
"determine_dead_deconstructions_2_disj_goal",
7,
0
},
"transform_hlds.ctgc.structure_reuse.direct.detect_garbage",
"structure_reuse.direct.detect_garbage.m",
160,
"d1;c7;"
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__ctgc__structure_reuse__direct__detect_garbage__unification_verify_reuse_8_0_1 = {
{
MR_FUNCTION,
"transform_hlds.ctgc.datastruct",
"transform_hlds.ctgc.datastruct",
"datastruct_init",
2,
0
},
"transform_hlds.ctgc.structure_reuse.direct.detect_garbage",
"structure_reuse.direct.detect_garbage.m",
204,
"d1;c9;d1;c4;?;c7;"
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__ctgc__structure_reuse__direct__detect_garbage__unification_verify_reuse_8_0_2 = {
{
MR_FUNCTION,
"transform_hlds.ctgc.structure_sharing.domain",
"transform_hlds.ctgc.structure_sharing.domain",
"extend_datastruct",
5,
0
},
"transform_hlds.ctgc.structure_reuse.direct.detect_garbage",
"structure_reuse.direct.detect_garbage.m",
206,
"d1;c9;d1;c4;?;c10;"
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__ctgc__structure_reuse__direct__detect_garbage__determine_dead_deconstructions_2_6_0_1 = {
{
MR_PREDICATE,
"transform_hlds.ctgc.structure_reuse.direct.detect_garbage",
"transform_hlds.ctgc.structure_reuse.direct.detect_garbage",
"determine_dead_deconstructions_2",
6,
0
},
"transform_hlds.ctgc.structure_reuse.direct.detect_garbage",
"structure_reuse.direct.detect_garbage.m",
96,
"d1;c12;d1;c2;"
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__ctgc__structure_reuse__direct__detect_garbage__determine_dead_deconstructions_2_6_0_2 = {
{
MR_FUNCTION,
"transform_hlds.ctgc.structure_reuse.direct.detect_garbage",
"transform_hlds.ctgc.structure_reuse.direct.detect_garbage",
"lambda_structure_reuse_direct_detect_garbage_m_122",
2,
0
},
"transform_hlds.ctgc.structure_reuse.direct.detect_garbage",
"structure_reuse.direct.detect_garbage.m",
122,
"d1;c12;d6;c3;"
};

extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_goal__type_ctor_info_hlds_goal_0;
MR_decl_entry(list__foldl2_6_0);

MR_BEGIN_MODULE(transform_hlds__ctgc__structure_reuse__direct__detect_garbage_module0)
	MR_init_entry1(transform_hlds__ctgc__structure_reuse__direct__detect_garbage__determine_dead_deconstructions_2_disj_6_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__ctgc__structure_reuse__direct__detect_garbage__determine_dead_deconstructions_2_disj_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(1,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(transform_hlds__ctgc__structure_reuse__direct__detect_garbage__determine_dead_deconstructions_2_disj_goal_7_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr1, 3) = MR_r1;
	MR_tfield(0, MR_tempr1, 4) = MR_r3;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	MR_r5 = MR_r2;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__ctgc__structure_sharing__domain, sharing_as);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,0,1);
	MR_r7 = MR_r4;
	MR_r4 = MR_tempr1;
	MR_r6 = MR_ctfield(0, MR_r4, 4);
	MR_np_tailcall_ent(list__foldl2_6_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__ctgc__structure_reuse__direct__detect_garbage_module1)
	MR_init_entry1(fn__transform_hlds__ctgc__structure_reuse__direct__detect_garbage__this_file_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__transform_hlds__ctgc__structure_reuse__direct__detect_garbage__this_file_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("structure_sharing.direct.detect_garbage.m", 41);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__hlds__hlds_goal__goal_info_get_lfu_1_0);
MR_decl_entry(fn__hlds__hlds_goal__goal_info_get_lbu_1_0);
MR_decl_entry(transform_hlds__ctgc__structure_sharing__domain__sharing_as_is_top_1_0);
MR_decl_entry(f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_117_110_105_111_110_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0);
MR_decl_entry(fn__set__map_2_0);
MR_decl_entry(fn__set__to_sorted_list_1_0);
MR_decl_entry(fn__transform_hlds__ctgc__structure_sharing__domain__extend_datastruct_4_0);
MR_decl_entry(fn__list__map_2_0);
MR_decl_entry(fn__list__condense_1_0);
MR_decl_entry(list__member_2_0);
MR_decl_entry(fn__transform_hlds__ctgc__structure_reuse__domain__reuse_condition_init_6_0);
MR_decl_entry(transform_hlds__ctgc__structure_reuse__direct__dead_cell_table_set_4_0);
MR_decl_entry(libs__compiler_util__unexpected_2_0);

MR_BEGIN_MODULE(transform_hlds__ctgc__structure_reuse__direct__detect_garbage_module2)
	MR_init_entry1(transform_hlds__ctgc__structure_reuse__direct__detect_garbage__unification_verify_reuse_8_0);
	MR_init_label8(transform_hlds__ctgc__structure_reuse__direct__detect_garbage__unification_verify_reuse_8_0,56,6,7,15,17,18,19,20)
	MR_init_label8(transform_hlds__ctgc__structure_reuse__direct__detect_garbage__unification_verify_reuse_8_0,21,23,24,26,9,30,37,31)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__ctgc__structure_reuse__direct__detect_garbage__unification_verify_reuse_8_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r4),
		MR_LABEL_AP(transform_hlds__ctgc__structure_reuse__direct__detect_garbage__unification_verify_reuse_8_0_i37) MR_AND
		MR_LABEL_AP(transform_hlds__ctgc__structure_reuse__direct__detect_garbage__unification_verify_reuse_8_0_i56) MR_AND
		MR_LABEL_AP(transform_hlds__ctgc__structure_reuse__direct__detect_garbage__unification_verify_reuse_8_0_i37) MR_AND
		MR_LABEL_AP(transform_hlds__ctgc__structure_reuse__direct__detect_garbage__unification_verify_reuse_8_0_i30));
MR_def_label(transform_hlds__ctgc__structure_reuse__direct__detect_garbage__unification_verify_reuse_8_0,56)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(10);
	MR_sv(10) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r3;
	MR_sv(3) = MR_tempr1;
	MR_sv(4) = MR_r5;
	MR_sv(5) = MR_r6;
	MR_tempr2 = MR_r4;
	MR_sv(6) = MR_ctfield(1, MR_tempr2, 0);
	MR_sv(7) = MR_ctfield(1, MR_tempr2, 1);
	MR_sv(9) = MR_r7;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_lfu_1_0,
		transform_hlds__ctgc__structure_reuse__direct__detect_garbage__unification_verify_reuse_8_0_i6);
MR_def_label(transform_hlds__ctgc__structure_reuse__direct__detect_garbage__unification_verify_reuse_8_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_sv(3) = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_lbu_1_0,
		transform_hlds__ctgc__structure_reuse__direct__detect_garbage__unification_verify_reuse_8_0_i7);
MR_def_label(transform_hlds__ctgc__structure_reuse__direct__detect_garbage__unification_verify_reuse_8_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(7),1)) {
		MR_GOTO_LAB(transform_hlds__ctgc__structure_reuse__direct__detect_garbage__unification_verify_reuse_8_0_i9);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(1, MR_sv(7), 1);
	if (MR_INT_EQ(MR_tempr1,0)) {
		MR_GOTO_LAB(transform_hlds__ctgc__structure_reuse__direct__detect_garbage__unification_verify_reuse_8_0_i9);
	}
	MR_sv(7) = MR_r1;
	MR_r1 = MR_sv(5);
	}
	MR_np_call_localret_ent(transform_hlds__ctgc__structure_sharing__domain__sharing_as_is_top_1_0,
		transform_hlds__ctgc__structure_reuse__direct__detect_garbage__unification_verify_reuse_8_0_i15);
MR_def_label(transform_hlds__ctgc__structure_reuse__direct__detect_garbage__unification_verify_reuse_8_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(transform_hlds__ctgc__structure_reuse__direct__detect_garbage__unification_verify_reuse_8_0_i9);
	}
	MR_r1 = MR_sv(7);
	MR_sv(8) = (MR_Word) MR_TAG_COMMON(0,2,0);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_sv(8);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(7);
	MR_np_call_localret_ent(f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_117_110_105_111_110_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		transform_hlds__ctgc__structure_reuse__direct__detect_garbage__unification_verify_reuse_8_0_i17);
MR_def_label(transform_hlds__ctgc__structure_reuse__direct__detect_garbage__unification_verify_reuse_8_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, datastruct);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,4,0);
	MR_np_call_localret_ent(fn__set__map_2_0,
		transform_hlds__ctgc__structure_reuse__direct__detect_garbage__unification_verify_reuse_8_0_i18);
MR_def_label(transform_hlds__ctgc__structure_reuse__direct__detect_garbage__unification_verify_reuse_8_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, datastruct);
	MR_np_call_localret_ent(fn__set__to_sorted_list_1_0,
		transform_hlds__ctgc__structure_reuse__direct__detect_garbage__unification_verify_reuse_8_0_i19);
MR_def_label(transform_hlds__ctgc__structure_reuse__direct__detect_garbage__unification_verify_reuse_8_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 6);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(5,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(fn__transform_hlds__ctgc__structure_sharing__domain__extend_datastruct_4_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 3;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 5) = MR_sv(5);
	MR_r4 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, datastruct);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,2,2);
	}
	MR_np_call_localret_ent(fn__list__map_2_0,
		transform_hlds__ctgc__structure_reuse__direct__detect_garbage__unification_verify_reuse_8_0_i20);
MR_def_label(transform_hlds__ctgc__structure_reuse__direct__detect_garbage__unification_verify_reuse_8_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, datastruct);
	MR_np_call_localret_ent(fn__list__condense_1_0,
		transform_hlds__ctgc__structure_reuse__direct__detect_garbage__unification_verify_reuse_8_0_i21);
MR_def_label(transform_hlds__ctgc__structure_reuse__direct__detect_garbage__unification_verify_reuse_8_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_r1 = MR_sv(6);
	MR_np_call_localret_ent(fn__transform_hlds__ctgc__datastruct__datastruct_init_1_0,
		transform_hlds__ctgc__structure_reuse__direct__detect_garbage__unification_verify_reuse_8_0_i23);
MR_def_label(transform_hlds__ctgc__structure_reuse__direct__detect_garbage__unification_verify_reuse_8_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, datastruct);
	MR_r3 = MR_sv(8);
	MR_np_call_localret_ent(list__member_2_0,
		transform_hlds__ctgc__structure_reuse__direct__detect_garbage__unification_verify_reuse_8_0_i24);
MR_def_label(transform_hlds__ctgc__structure_reuse__direct__detect_garbage__unification_verify_reuse_8_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(transform_hlds__ctgc__structure_reuse__direct__detect_garbage__unification_verify_reuse_8_0_i9);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(6);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(7);
	MR_r6 = MR_sv(5);
	MR_np_call_localret_ent(fn__transform_hlds__ctgc__structure_reuse__domain__reuse_condition_init_6_0,
		transform_hlds__ctgc__structure_reuse__direct__detect_garbage__unification_verify_reuse_8_0_i26);
MR_def_label(transform_hlds__ctgc__structure_reuse__direct__detect_garbage__unification_verify_reuse_8_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r3 = MR_sv(9);
	MR_succip_word = MR_sv(10);
	MR_decr_sp(10);
	MR_np_tailcall_ent(transform_hlds__ctgc__structure_reuse__direct__dead_cell_table_set_4_0);
MR_def_label(transform_hlds__ctgc__structure_reuse__direct__detect_garbage__unification_verify_reuse_8_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(9);
	MR_decr_sp_and_return(10);
MR_def_label(transform_hlds__ctgc__structure_reuse__direct__detect_garbage__unification_verify_reuse_8_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_ctfield(3, MR_r4, 0),0)) {
		MR_GOTO_LAB(transform_hlds__ctgc__structure_reuse__direct__detect_garbage__unification_verify_reuse_8_0_i31);
	}
MR_def_label(transform_hlds__ctgc__structure_reuse__direct__detect_garbage__unification_verify_reuse_8_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r7;
	MR_proceed();
MR_def_label(transform_hlds__ctgc__structure_reuse__direct__detect_garbage__unification_verify_reuse_8_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("structure_sharing.direct.detect_garbage.m", 41);
	MR_r2 = (MR_Word) MR_string_const("unification_verify_reuse: complicated_unify/3 encountered.", 58);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__transform_hlds__smm_common__program_point_init_1_0);
MR_decl_entry(fn__transform_hlds__ctgc__structure_sharing__domain__add_unify_sharing_5_0);
MR_decl_entry(transform_hlds__ctgc__structure_sharing__domain__lookup_sharing_and_comb_9_0);
MR_decl_entry(fn__hlds__hlds_goal__goal_info_get_context_1_0);
MR_decl_entry(parse_tree__prog_out__context_to_string_2_0);
MR_decl_entry(fn__f_115_116_114_105_110_103_95_95_43_43_2_0);
MR_decl_entry(fn__transform_hlds__ctgc__structure_sharing__domain__sharing_as_top_sharing_accumulate_2_0);
MR_decl_entry(fn__transform_hlds__ctgc__structure_sharing__domain__add_foreign_proc_sharing_6_0);
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_goal__type_ctor_info_case_0;
MR_decl_entry(fn__transform_hlds__ctgc__structure_sharing__domain__sharing_as_least_upper_bound_4_0);

MR_BEGIN_MODULE(transform_hlds__ctgc__structure_reuse__direct__detect_garbage_module3)
	MR_init_entry1(transform_hlds__ctgc__structure_reuse__direct__detect_garbage__determine_dead_deconstructions_2_6_0);
	MR_init_label8(transform_hlds__ctgc__structure_reuse__direct__detect_garbage__determine_dead_deconstructions_2_6_0,39,4,5,6,8,10,11,12)
	MR_init_label8(transform_hlds__ctgc__structure_reuse__direct__detect_garbage__determine_dead_deconstructions_2_6_0,13,14,16,17,18,19,20,22)
	MR_init_label8(transform_hlds__ctgc__structure_reuse__direct__detect_garbage__determine_dead_deconstructions_2_6_0,24,25,27,28,30,31,32,33)
	MR_init_label3(transform_hlds__ctgc__structure_reuse__direct__detect_garbage__determine_dead_deconstructions_2_6_0,34,35,36)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__ctgc__structure_reuse__direct__detect_garbage__determine_dead_deconstructions_2_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
MR_def_label(transform_hlds__ctgc__structure_reuse__direct__detect_garbage__determine_dead_deconstructions_2_6_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r5 = MR_ctfield(0, MR_r2, 0);
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r5),
		MR_LABEL_AP(transform_hlds__ctgc__structure_reuse__direct__detect_garbage__determine_dead_deconstructions_2_6_0_i4) MR_AND
		MR_LABEL_AP(transform_hlds__ctgc__structure_reuse__direct__detect_garbage__determine_dead_deconstructions_2_6_0_i8) MR_AND
		MR_LABEL_AP(transform_hlds__ctgc__structure_reuse__direct__detect_garbage__determine_dead_deconstructions_2_6_0_i10) MR_AND
		MR_LABEL_AP(transform_hlds__ctgc__structure_reuse__direct__detect_garbage__determine_dead_deconstructions_2_6_0_i16));
MR_def_label(transform_hlds__ctgc__structure_reuse__direct__detect_garbage__determine_dead_deconstructions_2_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_ctfield(0, MR_r2, 1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_sv(2) = MR_ctfield(0, MR_tempr1, 0);
	MR_sv(3) = MR_ctfield(0, MR_tempr1, 2);
	MR_sv(4) = MR_ctfield(0, MR_r5, 3);
	MR_sv(6) = MR_r3;
	MR_sv(7) = MR_r4;
	MR_r1 = MR_sv(1);
	}
	MR_np_call_localret_ent(fn__transform_hlds__smm_common__program_point_init_1_0,
		transform_hlds__ctgc__structure_reuse__direct__detect_garbage__determine_dead_deconstructions_2_6_0_i5);
MR_def_label(transform_hlds__ctgc__structure_reuse__direct__detect_garbage__determine_dead_deconstructions_2_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r5 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(4);
	MR_r6 = MR_sv(6);
	MR_r7 = MR_sv(7);
	MR_np_call_localret_ent(transform_hlds__ctgc__structure_reuse__direct__detect_garbage__unification_verify_reuse_8_0,
		transform_hlds__ctgc__structure_reuse__direct__detect_garbage__determine_dead_deconstructions_2_6_0_i6);
MR_def_label(transform_hlds__ctgc__structure_reuse__direct__detect_garbage__determine_dead_deconstructions_2_6_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(4);
	MR_r5 = MR_sv(6);
	MR_np_call_localret_ent(fn__transform_hlds__ctgc__structure_sharing__domain__add_unify_sharing_5_0,
		transform_hlds__ctgc__structure_reuse__direct__detect_garbage__determine_dead_deconstructions_2_6_0_i34);
MR_def_label(transform_hlds__ctgc__structure_reuse__direct__detect_garbage__determine_dead_deconstructions_2_6_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r4;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_tempr1;
	MR_r1 = MR_ctfield(0, MR_r1, 0);
	MR_r2 = MR_ctfield(0, MR_tempr1, 1);
	MR_r8 = MR_r3;
	MR_r3 = MR_ctfield(0, MR_tempr1, 2);
	MR_r4 = MR_ctfield(0, MR_tempr1, 3);
	MR_tempr2 = MR_r5;
	MR_r5 = MR_ctfield(1, MR_r5, 0);
	MR_r6 = MR_ctfield(1, MR_tempr2, 1);
	MR_r7 = MR_ctfield(1, MR_tempr2, 2);
	}
	MR_np_call_localret_ent(transform_hlds__ctgc__structure_sharing__domain__lookup_sharing_and_comb_9_0,
		transform_hlds__ctgc__structure_reuse__direct__detect_garbage__determine_dead_deconstructions_2_6_0_i19);
MR_def_label(transform_hlds__ctgc__structure_reuse__direct__detect_garbage__determine_dead_deconstructions_2_6_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r3;
	MR_sv(7) = MR_r4;
	MR_r1 = MR_ctfield(0, MR_r2, 1);
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_context_1_0,
		transform_hlds__ctgc__structure_reuse__direct__detect_garbage__determine_dead_deconstructions_2_6_0_i11);
MR_def_label(transform_hlds__ctgc__structure_reuse__direct__detect_garbage__determine_dead_deconstructions_2_6_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(parse_tree__prog_out__context_to_string_2_0,
		transform_hlds__ctgc__structure_reuse__direct__detect_garbage__determine_dead_deconstructions_2_6_0_i12);
MR_def_label(transform_hlds__ctgc__structure_reuse__direct__detect_garbage__determine_dead_deconstructions_2_6_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const(")", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		transform_hlds__ctgc__structure_reuse__direct__detect_garbage__determine_dead_deconstructions_2_6_0_i13);
MR_def_label(transform_hlds__ctgc__structure_reuse__direct__detect_garbage__determine_dead_deconstructions_2_6_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("generic call (", 14);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		transform_hlds__ctgc__structure_reuse__direct__detect_garbage__determine_dead_deconstructions_2_6_0_i14);
MR_def_label(transform_hlds__ctgc__structure_reuse__direct__detect_garbage__determine_dead_deconstructions_2_6_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(6);
	MR_np_call_localret_ent(fn__transform_hlds__ctgc__structure_sharing__domain__sharing_as_top_sharing_accumulate_2_0,
		transform_hlds__ctgc__structure_reuse__direct__detect_garbage__determine_dead_deconstructions_2_6_0_i19);
MR_def_label(transform_hlds__ctgc__structure_reuse__direct__detect_garbage__determine_dead_deconstructions_2_6_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_ctfield(3, MR_r5, 0),
		MR_LABEL_AP(transform_hlds__ctgc__structure_reuse__direct__detect_garbage__determine_dead_deconstructions_2_6_0_i17) MR_AND
		MR_LABEL_AP(transform_hlds__ctgc__structure_reuse__direct__detect_garbage__determine_dead_deconstructions_2_6_0_i20) MR_AND
		MR_LABEL_AP(transform_hlds__ctgc__structure_reuse__direct__detect_garbage__determine_dead_deconstructions_2_6_0_i22) MR_AND
		MR_LABEL_AP(transform_hlds__ctgc__structure_reuse__direct__detect_garbage__determine_dead_deconstructions_2_6_0_i24) MR_AND
		MR_LABEL_AP(transform_hlds__ctgc__structure_reuse__direct__detect_garbage__determine_dead_deconstructions_2_6_0_i27) MR_AND
		MR_LABEL_AP(transform_hlds__ctgc__structure_reuse__direct__detect_garbage__determine_dead_deconstructions_2_6_0_i28) MR_AND
		MR_LABEL_AP(transform_hlds__ctgc__structure_reuse__direct__detect_garbage__determine_dead_deconstructions_2_6_0_i30) MR_AND
		MR_LABEL_AP(transform_hlds__ctgc__structure_reuse__direct__detect_garbage__determine_dead_deconstructions_2_6_0_i35));
MR_def_label(transform_hlds__ctgc__structure_reuse__direct__detect_garbage__determine_dead_deconstructions_2_6_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_sv(2) = MR_ctfield(0, MR_tempr1, 0);
	MR_sv(3) = MR_ctfield(0, MR_tempr1, 2);
	MR_tempr2 = MR_r5;
	MR_sv(1) = MR_ctfield(3, MR_tempr2, 1);
	MR_sv(4) = MR_ctfield(3, MR_tempr2, 2);
	MR_sv(5) = MR_ctfield(3, MR_tempr2, 3);
	MR_sv(6) = MR_r3;
	MR_sv(7) = MR_r4;
	MR_r1 = MR_ctfield(0, MR_r2, 1);
	}
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_context_1_0,
		transform_hlds__ctgc__structure_reuse__direct__detect_garbage__determine_dead_deconstructions_2_6_0_i18);
MR_def_label(transform_hlds__ctgc__structure_reuse__direct__detect_garbage__determine_dead_deconstructions_2_6_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_sv(4);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(5);
	MR_r5 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(3);
	MR_r4 = MR_sv(1);
	MR_r6 = MR_sv(6);
	}
	MR_np_call_localret_ent(fn__transform_hlds__ctgc__structure_sharing__domain__add_foreign_proc_sharing_6_0,
		transform_hlds__ctgc__structure_reuse__direct__detect_garbage__determine_dead_deconstructions_2_6_0_i19);
MR_def_label(transform_hlds__ctgc__structure_reuse__direct__detect_garbage__determine_dead_deconstructions_2_6_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(7);
	MR_decr_sp_and_return(8);
MR_def_label(transform_hlds__ctgc__structure_reuse__direct__detect_garbage__determine_dead_deconstructions_2_6_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(6,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(transform_hlds__ctgc__structure_reuse__direct__detect_garbage__determine_dead_deconstructions_2_6_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__ctgc__structure_sharing__domain, sharing_as);
	MR_r6 = MR_r3;
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,0,1);
	MR_r7 = MR_r4;
	MR_r4 = MR_tempr1;
	MR_r5 = MR_ctfield(3, MR_r5, 2);
	MR_succip_word = MR_sv(8);
	MR_decr_sp(8);
	MR_np_tailcall_ent(list__foldl2_6_0);
	}
MR_def_label(transform_hlds__ctgc__structure_reuse__direct__detect_garbage__determine_dead_deconstructions_2_6_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_ctfield(3, MR_r5, 1);
	MR_succip_word = MR_sv(8);
	MR_decr_sp(8);
	MR_np_tailcall_ent(transform_hlds__ctgc__structure_reuse__direct__detect_garbage__determine_dead_deconstructions_2_disj_6_0);
MR_def_label(transform_hlds__ctgc__structure_reuse__direct__detect_garbage__determine_dead_deconstructions_2_6_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(6) = MR_r3;
	MR_sv(7) = MR_r4;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, case);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,4,1);
	MR_r4 = MR_ctfield(3, MR_r5, 3);
	MR_np_call_localret_ent(fn__list__map_2_0,
		transform_hlds__ctgc__structure_reuse__direct__detect_garbage__determine_dead_deconstructions_2_6_0_i25);
MR_def_label(transform_hlds__ctgc__structure_reuse__direct__detect_garbage__determine_dead_deconstructions_2_6_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r3 = MR_sv(6);
	MR_r4 = MR_sv(7);
	MR_succip_word = MR_sv(8);
	MR_decr_sp(8);
	MR_np_tailcall_ent(transform_hlds__ctgc__structure_reuse__direct__detect_garbage__determine_dead_deconstructions_2_disj_6_0);
MR_def_label(transform_hlds__ctgc__structure_reuse__direct__detect_garbage__determine_dead_deconstructions_2_6_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r3;
	MR_r2 = MR_r4;
	MR_decr_sp_and_return(8);
MR_def_label(transform_hlds__ctgc__structure_reuse__direct__detect_garbage__determine_dead_deconstructions_2_6_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_ctfield(3, MR_r5, 2);
	MR_succip_word = MR_sv(8);
	MR_GOTO_LAB(transform_hlds__ctgc__structure_reuse__direct__detect_garbage__determine_dead_deconstructions_2_6_0_i39);
MR_def_label(transform_hlds__ctgc__structure_reuse__direct__detect_garbage__determine_dead_deconstructions_2_6_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_tempr1;
	MR_sv(2) = MR_ctfield(0, MR_tempr1, 0);
	MR_sv(3) = MR_ctfield(0, MR_tempr1, 2);
	MR_tempr2 = MR_r5;
	MR_sv(4) = MR_ctfield(3, MR_tempr2, 3);
	MR_sv(5) = MR_ctfield(3, MR_tempr2, 4);
	MR_sv(6) = MR_r3;
	MR_r2 = MR_ctfield(3, MR_tempr2, 2);
	}
	MR_np_localcall_lab(transform_hlds__ctgc__structure_reuse__direct__detect_garbage__determine_dead_deconstructions_2_6_0,
		transform_hlds__ctgc__structure_reuse__direct__detect_garbage__determine_dead_deconstructions_2_6_0_i31);
MR_def_label(transform_hlds__ctgc__structure_reuse__direct__detect_garbage__determine_dead_deconstructions_2_6_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r4 = MR_r2;
	MR_r2 = MR_sv(4);
	MR_np_localcall_lab(transform_hlds__ctgc__structure_reuse__direct__detect_garbage__determine_dead_deconstructions_2_6_0,
		transform_hlds__ctgc__structure_reuse__direct__detect_garbage__determine_dead_deconstructions_2_6_0_i32);
MR_def_label(transform_hlds__ctgc__structure_reuse__direct__detect_garbage__determine_dead_deconstructions_2_6_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	MR_r4 = MR_r2;
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(6);
	}
	MR_np_localcall_lab(transform_hlds__ctgc__structure_reuse__direct__detect_garbage__determine_dead_deconstructions_2_6_0,
		transform_hlds__ctgc__structure_reuse__direct__detect_garbage__determine_dead_deconstructions_2_6_0_i33);
MR_def_label(transform_hlds__ctgc__structure_reuse__direct__detect_garbage__determine_dead_deconstructions_2_6_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(1);
	MR_sv(1) = MR_r2;
	MR_r4 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(fn__transform_hlds__ctgc__structure_sharing__domain__sharing_as_least_upper_bound_4_0,
		transform_hlds__ctgc__structure_reuse__direct__detect_garbage__determine_dead_deconstructions_2_6_0_i34);
MR_def_label(transform_hlds__ctgc__structure_reuse__direct__detect_garbage__determine_dead_deconstructions_2_6_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_decr_sp_and_return(8);
MR_def_label(transform_hlds__ctgc__structure_reuse__direct__detect_garbage__determine_dead_deconstructions_2_6_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__transform_hlds__ctgc__structure_reuse__direct__detect_garbage__this_file_0_0,
		transform_hlds__ctgc__structure_reuse__direct__detect_garbage__determine_dead_deconstructions_2_6_0_i36);
MR_def_label(transform_hlds__ctgc__structure_reuse__direct__detect_garbage__determine_dead_deconstructions_2_6_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("determine_dead_deconstructions_2: shorthand goal.", 49);
	MR_succip_word = MR_sv(8);
	MR_decr_sp(8);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__transform_hlds__ctgc__structure_sharing__domain__sharing_as_init_0_0);
MR_decl_entry(fn__transform_hlds__ctgc__structure_reuse__direct__dead_cell_table_init_0_0);

MR_BEGIN_MODULE(transform_hlds__ctgc__structure_reuse__direct__detect_garbage_module4)
	MR_init_entry1(transform_hlds__ctgc__structure_reuse__direct__detect_garbage__determine_dead_deconstructions_6_0);
	MR_init_label3(transform_hlds__ctgc__structure_reuse__direct__detect_garbage__determine_dead_deconstructions_6_0,2,3,4)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__transform_hlds__ctgc__structure_reuse__direct__detect_garbage__determine_dead_deconstructions_6_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_sv(2) = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tfield(0, MR_tempr1, 1) = MR_r2;
	MR_tfield(0, MR_tempr1, 2) = MR_r3;
	MR_tfield(0, MR_tempr1, 3) = MR_r4;
	MR_sv(1) = MR_r5;
	}
	MR_np_call_localret_ent(fn__transform_hlds__ctgc__structure_sharing__domain__sharing_as_init_0_0,
		transform_hlds__ctgc__structure_reuse__direct__detect_garbage__determine_dead_deconstructions_6_0_i2);
MR_def_label(transform_hlds__ctgc__structure_reuse__direct__detect_garbage__determine_dead_deconstructions_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_np_call_localret_ent(fn__transform_hlds__ctgc__structure_reuse__direct__dead_cell_table_init_0_0,
		transform_hlds__ctgc__structure_reuse__direct__detect_garbage__determine_dead_deconstructions_6_0_i3);
MR_def_label(transform_hlds__ctgc__structure_reuse__direct__detect_garbage__determine_dead_deconstructions_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(3);
	MR_np_call_localret_ent(transform_hlds__ctgc__structure_reuse__direct__detect_garbage__determine_dead_deconstructions_2_6_0,
		transform_hlds__ctgc__structure_reuse__direct__detect_garbage__determine_dead_deconstructions_6_0_i4);
MR_def_label(transform_hlds__ctgc__structure_reuse__direct__detect_garbage__determine_dead_deconstructions_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(4);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__ctgc__structure_reuse__direct__detect_garbage_module5)
	MR_init_entry1(transform_hlds__ctgc__structure_reuse__direct__detect_garbage__determine_dead_deconstructions_2_disj_goal_7_0);
	MR_init_label2(transform_hlds__ctgc__structure_reuse__direct__detect_garbage__determine_dead_deconstructions_2_disj_goal_7_0,2,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__ctgc__structure_reuse__direct__detect_garbage__determine_dead_deconstructions_2_disj_goal_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r4;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_r3 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r4 = MR_r5;
	}
	MR_np_call_localret_ent(transform_hlds__ctgc__structure_reuse__direct__detect_garbage__determine_dead_deconstructions_2_6_0,
		transform_hlds__ctgc__structure_reuse__direct__detect_garbage__determine_dead_deconstructions_2_disj_goal_7_0_i2);
MR_def_label(transform_hlds__ctgc__structure_reuse__direct__detect_garbage__determine_dead_deconstructions_2_disj_goal_7_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r2;
	MR_r4 = MR_r1;
	MR_r1 = MR_ctfield(0, MR_tempr1, 0);
	MR_r2 = MR_ctfield(0, MR_tempr1, 2);
	MR_r3 = MR_sv(2);
	}
	MR_np_call_localret_ent(fn__transform_hlds__ctgc__structure_sharing__domain__sharing_as_least_upper_bound_4_0,
		transform_hlds__ctgc__structure_reuse__direct__detect_garbage__determine_dead_deconstructions_2_disj_goal_7_0_i3);
MR_def_label(transform_hlds__ctgc__structure_reuse__direct__detect_garbage__determine_dead_deconstructions_2_disj_goal_7_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___hlds__hlds_module__module_info_0_0);
MR_decl_entry(__Unify___hlds__hlds_pred__pred_info_0_0);
MR_decl_entry(__Unify___hlds__hlds_pred__proc_info_0_0);
MR_decl_entry(__Unify___tree234__tree234_2_0);

MR_BEGIN_MODULE(transform_hlds__ctgc__structure_reuse__direct__detect_garbage_module6)
	MR_init_entry1(__Unify___transform_hlds__ctgc__structure_reuse__direct__detect_garbage__detect_bg_info_0_0);
	MR_init_label5(__Unify___transform_hlds__ctgc__structure_reuse__direct__detect_garbage__detect_bg_info_0_0,4,6,8,12,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___transform_hlds__ctgc__structure_reuse__direct__detect_garbage__detect_bg_info_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___transform_hlds__ctgc__structure_reuse__direct__detect_garbage__detect_bg_info_0_0_i12);
	}
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_ctfield(0, MR_tempr1, 1);
	MR_tempr2 = MR_sv(2);
	MR_sv(2) = MR_ctfield(0, MR_tempr1, 2);
	MR_sv(3) = MR_ctfield(0, MR_tempr1, 3);
	MR_sv(4) = MR_ctfield(0, MR_tempr2, 1);
	MR_sv(5) = MR_ctfield(0, MR_tempr2, 2);
	MR_sv(6) = MR_ctfield(0, MR_tempr2, 3);
	MR_r1 = MR_ctfield(0, MR_tempr1, 0);
	MR_r2 = MR_ctfield(0, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(__Unify___hlds__hlds_module__module_info_0_0,
		__Unify___transform_hlds__ctgc__structure_reuse__direct__detect_garbage__detect_bg_info_0_0_i4);
MR_def_label(__Unify___transform_hlds__ctgc__structure_reuse__direct__detect_garbage__detect_bg_info_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___transform_hlds__ctgc__structure_reuse__direct__detect_garbage__detect_bg_info_0_0_i1);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(__Unify___hlds__hlds_pred__pred_info_0_0,
		__Unify___transform_hlds__ctgc__structure_reuse__direct__detect_garbage__detect_bg_info_0_0_i6);
MR_def_label(__Unify___transform_hlds__ctgc__structure_reuse__direct__detect_garbage__detect_bg_info_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___transform_hlds__ctgc__structure_reuse__direct__detect_garbage__detect_bg_info_0_0_i1);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(__Unify___hlds__hlds_pred__proc_info_0_0,
		__Unify___transform_hlds__ctgc__structure_reuse__direct__detect_garbage__detect_bg_info_0_0_i8);
MR_def_label(__Unify___transform_hlds__ctgc__structure_reuse__direct__detect_garbage__detect_bg_info_0_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___transform_hlds__ctgc__structure_reuse__direct__detect_garbage__detect_bg_info_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__ctgc__structure_sharing__domain, sharing_as);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(6);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(__Unify___tree234__tree234_2_0);
MR_def_label(__Unify___transform_hlds__ctgc__structure_reuse__direct__detect_garbage__detect_bg_info_0_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___transform_hlds__ctgc__structure_reuse__direct__detect_garbage__detect_bg_info_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(7);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Compare___hlds__hlds_module__module_info_0_0);
MR_decl_entry(__Compare___hlds__hlds_pred__pred_info_0_0);
MR_decl_entry(__Compare___hlds__hlds_pred__proc_info_0_0);
MR_decl_entry(__Compare___tree234__tree234_2_0);

MR_BEGIN_MODULE(transform_hlds__ctgc__structure_reuse__direct__detect_garbage_module7)
	MR_init_entry1(__Compare___transform_hlds__ctgc__structure_reuse__direct__detect_garbage__detect_bg_info_0_0);
	MR_init_label6(__Compare___transform_hlds__ctgc__structure_reuse__direct__detect_garbage__detect_bg_info_0_0,3,2,5,9,13,37)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___transform_hlds__ctgc__structure_reuse__direct__detect_garbage__detect_bg_info_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___transform_hlds__ctgc__structure_reuse__direct__detect_garbage__detect_bg_info_0_0_i3);
	}
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___transform_hlds__ctgc__structure_reuse__direct__detect_garbage__detect_bg_info_0_0_i2);
MR_def_label(__Compare___transform_hlds__ctgc__structure_reuse__direct__detect_garbage__detect_bg_info_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___transform_hlds__ctgc__structure_reuse__direct__detect_garbage__detect_bg_info_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(2);
	MR_sv(6) = MR_ctfield(0, MR_tempr5, 3);
	MR_sv(5) = MR_ctfield(0, MR_tempr5, 2);
	MR_sv(4) = MR_ctfield(0, MR_tempr5, 1);
	MR_tempr6 = MR_sv(1);
	MR_sv(3) = MR_ctfield(0, MR_tempr6, 3);
	MR_tempr1 = MR_ctfield(0, MR_tempr6, 2);
	MR_tempr2 = MR_ctfield(0, MR_tempr6, 1);
	MR_tempr3 = MR_tempr6;
	MR_sv(1) = MR_tempr2;
	MR_tempr4 = MR_tempr5;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_ctfield(0, MR_tempr3, 0);
	MR_r2 = MR_ctfield(0, MR_tempr4, 0);
	}
	MR_np_call_localret_ent(__Compare___hlds__hlds_module__module_info_0_0,
		__Compare___transform_hlds__ctgc__structure_reuse__direct__detect_garbage__detect_bg_info_0_0_i5);
MR_def_label(__Compare___transform_hlds__ctgc__structure_reuse__direct__detect_garbage__detect_bg_info_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___transform_hlds__ctgc__structure_reuse__direct__detect_garbage__detect_bg_info_0_0_i37);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(__Compare___hlds__hlds_pred__pred_info_0_0,
		__Compare___transform_hlds__ctgc__structure_reuse__direct__detect_garbage__detect_bg_info_0_0_i9);
MR_def_label(__Compare___transform_hlds__ctgc__structure_reuse__direct__detect_garbage__detect_bg_info_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___transform_hlds__ctgc__structure_reuse__direct__detect_garbage__detect_bg_info_0_0_i37);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(__Compare___hlds__hlds_pred__proc_info_0_0,
		__Compare___transform_hlds__ctgc__structure_reuse__direct__detect_garbage__detect_bg_info_0_0_i13);
MR_def_label(__Compare___transform_hlds__ctgc__structure_reuse__direct__detect_garbage__detect_bg_info_0_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___transform_hlds__ctgc__structure_reuse__direct__detect_garbage__detect_bg_info_0_0_i37);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__ctgc__structure_sharing__domain, sharing_as);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(6);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(__Compare___tree234__tree234_2_0);
MR_def_label(__Compare___transform_hlds__ctgc__structure_reuse__direct__detect_garbage__detect_bg_info_0_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(7);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__ctgc__structure_reuse__direct__detect_garbage_module8)
	MR_init_entry1(fn__transform_hlds__ctgc__structure_reuse__direct__detect_garbage__IntroducedFrom__func__determine_dead_deconstructions_2__122__1_1_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__transform_hlds__ctgc__structure_reuse__direct__detect_garbage__IntroducedFrom__func__determine_dead_deconstructions_2__122__1_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(0, MR_r1, 1);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

static void mercury__transform_hlds__ctgc__structure_reuse__direct__detect_garbage_maybe_bunch_0(void)
{
	transform_hlds__ctgc__structure_reuse__direct__detect_garbage_module0();
	transform_hlds__ctgc__structure_reuse__direct__detect_garbage_module1();
	transform_hlds__ctgc__structure_reuse__direct__detect_garbage_module2();
	transform_hlds__ctgc__structure_reuse__direct__detect_garbage_module3();
	transform_hlds__ctgc__structure_reuse__direct__detect_garbage_module4();
	transform_hlds__ctgc__structure_reuse__direct__detect_garbage_module5();
	transform_hlds__ctgc__structure_reuse__direct__detect_garbage_module6();
	transform_hlds__ctgc__structure_reuse__direct__detect_garbage_module7();
	transform_hlds__ctgc__structure_reuse__direct__detect_garbage_module8();
}

/* suppress gcc -Wmissing-decls warnings */
void mercury__transform_hlds__ctgc__structure_reuse__direct__detect_garbage__init(void);
void mercury__transform_hlds__ctgc__structure_reuse__direct__detect_garbage__init_type_tables(void);
void mercury__transform_hlds__ctgc__structure_reuse__direct__detect_garbage__init_debugger(void);
#ifdef MR_DEEP_PROFILING
void mercury__transform_hlds__ctgc__structure_reuse__direct__detect_garbage__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp);
#endif
#ifdef MR_RECORD_TERM_SIZES
void mercury__transform_hlds__ctgc__structure_reuse__direct__detect_garbage__init_complexity_procs(void);
#endif

void mercury__transform_hlds__ctgc__structure_reuse__direct__detect_garbage__init(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	mercury__transform_hlds__ctgc__structure_reuse__direct__detect_garbage_maybe_bunch_0();
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_transform_hlds__ctgc__structure_reuse__direct__detect_garbage__type_ctor_info_detect_bg_info_0,
		transform_hlds__ctgc__structure_reuse__direct__detect_garbage__detect_bg_info_0_0);
	mercury__transform_hlds__ctgc__structure_reuse__direct__detect_garbage__init_debugger();
}

void mercury__transform_hlds__ctgc__structure_reuse__direct__detect_garbage__init_type_tables(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	{
		MR_register_type_ctor_info(
		&mercury_data_transform_hlds__ctgc__structure_reuse__direct__detect_garbage__type_ctor_info_detect_bg_info_0);
	}
}


void mercury__transform_hlds__ctgc__structure_reuse__direct__detect_garbage__init_debugger(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}

#ifdef MR_DEEP_PROFILING

void mercury__transform_hlds__ctgc__structure_reuse__direct__detect_garbage__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp)
{
	MR_write_out_module_proc_reps_start(procrep_fp, &mercury_data__module_common_layout__transform_hlds__ctgc__structure_reuse__direct__detect_garbage);
	MR_write_out_module_proc_reps_end(procrep_fp);
}

#endif

#ifdef MR_RECORD_TERM_SIZES

void mercury__transform_hlds__ctgc__structure_reuse__direct__detect_garbage__init_complexity_procs(void)
{
}

#endif

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;
