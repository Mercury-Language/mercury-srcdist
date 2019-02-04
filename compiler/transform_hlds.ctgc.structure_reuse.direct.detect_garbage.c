/*
** Automatically generated from `structure_reuse.direct.detect_garbage.m'
** by the Mercury compiler,
** version rotd-2011-08-13, configured for x86_64-unknown-linux-gnu.
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
INIT mercury__transform_hlds__ctgc__structure_reuse__direct__detect_garbage__init
ENDINIT
*/

#define MR_ALLOW_RESET
#include "mercury_imp.h"
#line 526 "../library/io.int"
#include "io.mh"

#line 28 "transform_hlds.ctgc.structure_reuse.direct.detect_garbage.c"
#line 536 "../library/io.int"
#include "string.mh"

#line 32 "transform_hlds.ctgc.structure_reuse.direct.detect_garbage.c"
#line 31 "../library/bitmap.int2"
#include "bitmap.mh"

#line 36 "transform_hlds.ctgc.structure_reuse.direct.detect_garbage.c"
#line 30 "../library/time.int2"
#include "time.mh"

#line 40 "transform_hlds.ctgc.structure_reuse.direct.detect_garbage.c"
#line 33 "../library/array.int2"
#include "array.mh"

#line 44 "transform_hlds.ctgc.structure_reuse.direct.detect_garbage.c"
#line 39 "../mdbcomp/mdbcomp.rtti_access.int2"
#include "mdbcomp.rtti_access.mh"

#line 48 "transform_hlds.ctgc.structure_reuse.direct.detect_garbage.c"
#line 49 "transform_hlds.ctgc.structure_reuse.direct.detect_garbage.c"
#include "transform_hlds.ctgc.structure_reuse.direct.detect_garbage.mh"

#line 52 "transform_hlds.ctgc.structure_reuse.direct.detect_garbage.c"
#line 53 "transform_hlds.ctgc.structure_reuse.direct.detect_garbage.c"
#ifndef TRANSFORM_HLDS__CTGC__STRUCTURE_REUSE__DIRECT__DETECT_GARBAGE_DECL_GUARD
#define TRANSFORM_HLDS__CTGC__STRUCTURE_REUSE__DIRECT__DETECT_GARBAGE_DECL_GUARD

#line 57 "transform_hlds.ctgc.structure_reuse.direct.detect_garbage.c"
#line 58 "transform_hlds.ctgc.structure_reuse.direct.detect_garbage.c"

#endif
#line 61 "transform_hlds.ctgc.structure_reuse.direct.detect_garbage.c"

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
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[6];
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
	MR_Word * f1;
	MR_Code * f2;
	MR_Integer f3;
};
MR_STATIC_LINKAGE const struct mercury_type_5 mercury_common_5[];

extern const MR_TypeCtorInfo_Struct
	mercury_data_transform_hlds__ctgc__structure_reuse__direct__detect_garbage__type_ctor_info_detect_bg_info_0;
MR_decl_label7(transform_hlds__ctgc__structure_reuse__direct__detect_garbage__determine_dead_deconstructions_6_0, 2,3,5,6,7,9,10)
MR_decl_label10(transform_hlds__ctgc__structure_reuse__direct__detect_garbage__determine_dead_deconstructions_2_6_0, 111,5,3,7,11,13,16,17,18,15)
MR_decl_label10(transform_hlds__ctgc__structure_reuse__direct__detect_garbage__determine_dead_deconstructions_2_6_0, 20,22,21,24,23,31,29,34,35,36)
MR_decl_label1(transform_hlds__ctgc__structure_reuse__direct__detect_garbage__determine_dead_deconstructions_2_6_0, 33)
MR_decl_label2(transform_hlds__ctgc__structure_reuse__direct__detect_garbage__determine_dead_deconstructions_2_disj_goal_7_0, 2,3)
MR_decl_label3(transform_hlds__ctgc__structure_reuse__direct__detect_garbage__determine_dead_deconstructions_2_with_progress_6_0, 4,5,13)
MR_decl_label10(transform_hlds__ctgc__structure_reuse__direct__detect_garbage__determine_dead_deconstructions_generic_call_8_0, 4,3,10,12,15,14,17,18,19,20)
MR_decl_label10(transform_hlds__ctgc__structure_reuse__direct__detect_garbage__unification_verify_reuse_8_0, 3,4,6,7,13,15,18,22,24,25)
MR_decl_label5(transform_hlds__ctgc__structure_reuse__direct__detect_garbage__unification_verify_reuse_8_0, 27,30,9,5,33)
MR_decl_label6(__Unify___transform_hlds__ctgc__structure_reuse__direct__detect_garbage__detect_bg_info_0_0, 4,6,8,10,12,1)
MR_decl_label7(__Compare___transform_hlds__ctgc__structure_reuse__direct__detect_garbage__detect_bg_info_0_0, 3,2,5,9,13,17,45)
MR_decl_static(transform_hlds__ctgc__structure_reuse__direct__detect_garbage__determine_dead_deconstructions_2_disj_6_0)
MR_decl_static(transform_hlds__ctgc__structure_reuse__direct__detect_garbage__determine_dead_deconstructions_generic_call_8_0)
MR_decl_static(transform_hlds__ctgc__structure_reuse__direct__detect_garbage__unification_verify_reuse_8_0)
MR_decl_static(transform_hlds__ctgc__structure_reuse__direct__detect_garbage__determine_dead_deconstructions_2_6_0)
MR_def_extern_entry(transform_hlds__ctgc__structure_reuse__direct__detect_garbage__determine_dead_deconstructions_6_0)
MR_decl_static(transform_hlds__ctgc__structure_reuse__direct__detect_garbage__determine_dead_deconstructions_2_with_progress_6_0)
MR_decl_static(transform_hlds__ctgc__structure_reuse__direct__detect_garbage__determine_dead_deconstructions_2_disj_goal_7_0)
MR_decl_static(__Unify___transform_hlds__ctgc__structure_reuse__direct__detect_garbage__detect_bg_info_0_0)
MR_decl_static(__Compare___transform_hlds__ctgc__structure_reuse__direct__detect_garbage__detect_bg_info_0_0)
MR_decl_static(fn__transform_hlds__ctgc__structure_reuse__direct__detect_garbage__IntroducedFrom__func__determine_dead_deconstructions_2__134__1_1_0)

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
static const struct mercury_type_2 mercury_common_2[1] =
{
{
{
MR_CTOR1_ADDR(term, var),
MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type)
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__ctgc__structure_reuse__direct__detect_garbage__determine_dead_deconstructions_2_6_0_1;
static const struct mercury_type_3 mercury_common_3[1] =
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

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__ctgc__structure_reuse__direct__detect_garbage__determine_dead_deconstructions_2_6_0_2;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_goal__type_ctor_info_case_0;
static const struct mercury_type_4 mercury_common_4[1] =
{
{
(MR_Word *) &mercury_data__closure_layout__transform_hlds__ctgc__structure_reuse__direct__detect_garbage__determine_dead_deconstructions_2_6_0_2,
(MR_Word *) (MR_Integer) 0,
2,
MR_CTOR0_ADDR(hlds__hlds_goal, case),
MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal)
},
};

static const struct mercury_type_5 mercury_common_5[1] =
{
{
MR_COMMON(4,0),
MR_ENTRY_AP(fn__transform_hlds__ctgc__structure_reuse__direct__detect_garbage__IntroducedFrom__func__determine_dead_deconstructions_2__134__1_1_0),
0
},
};
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_module__type_ctor_info_module_info_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_pred_info_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_proc_info_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_pred_proc_id_0;
extern const MR_TypeCtorInfo_Struct mercury_data_transform_hlds__ctgc__structure_sharing__domain__type_ctor_info_sharing_as_and_status_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_pred_proc_id_0;
extern const MR_TypeCtorInfo_Struct mercury_data_transform_hlds__ctgc__structure_sharing__domain__type_ctor_info_sharing_as_and_status_0;

static const MR_FA_TypeInfo_Struct2 mercury_data_tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0transform_hlds__ctgc__structure_sharing__domain__type_ctor_info_sharing_as_and_status_0 = {
	&mercury_data_tree234__type_ctor_info_tree234_2,
{	(MR_TypeInfo) &mercury_data_hlds__hlds_pred__type_ctor_info_pred_proc_id_0,
	(MR_TypeInfo) &mercury_data_transform_hlds__ctgc__structure_sharing__domain__type_ctor_info_sharing_as_and_status_0
}};
extern const MR_TypeCtorInfo_Struct mercury_data_bool__type_ctor_info_bool_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_module__type_ctor_info_module_info_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_pred_info_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_proc_info_0;
extern const MR_TypeCtorInfo_Struct mercury_data_bool__type_ctor_info_bool_0;

const MR_PseudoTypeInfo mercury_data_transform_hlds__ctgc__structure_reuse__direct__detect_garbage__field_types_detect_bg_info_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_hlds__hlds_module__type_ctor_info_module_info_0,
	(MR_PseudoTypeInfo) &mercury_data_hlds__hlds_pred__type_ctor_info_pred_info_0,
	(MR_PseudoTypeInfo) &mercury_data_hlds__hlds_pred__type_ctor_info_proc_info_0,
	(MR_PseudoTypeInfo) &mercury_data_tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0transform_hlds__ctgc__structure_sharing__domain__type_ctor_info_sharing_as_and_status_0,
	(MR_PseudoTypeInfo) &mercury_data_bool__type_ctor_info_bool_0
};

const MR_ConstString mercury_data_transform_hlds__ctgc__structure_reuse__direct__detect_garbage__field_names_detect_bg_info_0_0[] = {
	"module_info",
	"pred_info",
	"proc_info",
	"sharing_table",
	"very_verbose"
};

static const MR_DuFunctorDesc mercury_data_transform_hlds__ctgc__structure_reuse__direct__detect_garbage__du_functor_desc_detect_bg_info_0_0 = {
	"detect_bg_info",
	5,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_transform_hlds__ctgc__structure_reuse__direct__detect_garbage__field_types_detect_bg_info_0_0,
	mercury_data_transform_hlds__ctgc__structure_reuse__direct__detect_garbage__field_names_detect_bg_info_0_0,
	NULL,
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
	15,
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
mercury_data__closure_layout__transform_hlds__ctgc__structure_reuse__direct__detect_garbage__determine_dead_deconstructions_2_6_0_2 = {
{
MR_FUNCTION,
"transform_hlds.ctgc.structure_reuse.direct.detect_garbage",
"transform_hlds.ctgc.structure_reuse.direct.detect_garbage",
"lambda_structure_reuse_direct_detect_garbage_m_134",
2,
0
},
"transform_hlds.ctgc.structure_reuse.direct.detect_garbage",
"structure_reuse.direct.detect_garbage.m",
134,
"37"
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__ctgc__structure_reuse__direct__detect_garbage__determine_dead_deconstructions_2_6_0_1 = {
{
MR_PREDICATE,
"transform_hlds.ctgc.structure_reuse.direct.detect_garbage",
"transform_hlds.ctgc.structure_reuse.direct.detect_garbage",
"determine_dead_deconstructions_2_with_progress",
6,
0
},
"transform_hlds.ctgc.structure_reuse.direct.detect_garbage",
"structure_reuse.direct.detect_garbage.m",
111,
"16"
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
195,
"8"
};


extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_goal__type_ctor_info_hlds_goal_0;
extern const MR_TypeCtorInfo_Struct mercury_data_transform_hlds__ctgc__structure_sharing__domain__type_ctor_info_sharing_as_0;
MR_decl_entry(list__foldl2_6_0);

MR_BEGIN_MODULE(transform_hlds__ctgc__structure_reuse__direct__detect_garbage_module0)
	MR_init_entry1(transform_hlds__ctgc__structure_reuse__direct__detect_garbage__determine_dead_deconstructions_2_disj_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__ctgc__structure_reuse__direct__detect_garbage__determine_dead_deconstructions_2_disj_6_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'determine_dead_deconstructions_2_disj'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__ctgc__structure_reuse__direct__detect_garbage__determine_dead_deconstructions_2_disj_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(1,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(transform_hlds__ctgc__structure_reuse__direct__detect_garbage__determine_dead_deconstructions_2_disj_goal_7_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr1, 3) = MR_r1;
	MR_tfield(0, MR_tempr1, 4) = MR_r3;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	MR_tempr2 = MR_r2;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__ctgc__structure_sharing__domain, sharing_as);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,0,1);
	MR_tempr3 = MR_r4;
	MR_r4 = MR_tempr1;
	MR_r5 = MR_tempr2;
	MR_r6 = MR_tfield(0, MR_r4, 4);
	MR_r7 = MR_tempr3;
	MR_np_tailcall_ent(list__foldl2_6_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__hlds__hlds_goal__goal_info_get_context_1_0);
MR_decl_entry(parse_tree__prog_out__context_to_string_2_0);
MR_decl_entry(hlds__hlds_pred__proc_info_get_vartypes_2_0);
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_mer_type_0;
MR_decl_entry(map__apply_to_list_3_0);
MR_decl_entry(transform_hlds__ctgc__structure_sharing__domain__bottom_sharing_is_safe_approximation_by_args_3_0);
MR_decl_entry(fn__f_115_116_114_105_110_103_95_95_43_43_2_0);
MR_decl_entry(fn__transform_hlds__ctgc__structure_sharing__domain__sharing_as_top_sharing_accumulate_2_0);

MR_BEGIN_MODULE(transform_hlds__ctgc__structure_reuse__direct__detect_garbage_module1)
	MR_init_entry1(transform_hlds__ctgc__structure_reuse__direct__detect_garbage__determine_dead_deconstructions_generic_call_8_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__ctgc__structure_reuse__direct__detect_garbage__determine_dead_deconstructions_generic_call_8_0);
	MR_init_label10(transform_hlds__ctgc__structure_reuse__direct__detect_garbage__determine_dead_deconstructions_generic_call_8_0,4,3,10,12,15,14,17,18,19,20)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'determine_dead_deconstructions_generic_call'/8 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__ctgc__structure_reuse__direct__detect_garbage__determine_dead_deconstructions_generic_call_8_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	if (!(((MR_tag(MR_r3) == MR_mktag((MR_Integer) 3)) || (MR_tag(MR_r3) == MR_mktag((MR_Integer) 2))))) {
		MR_GOTO_LAB(transform_hlds__ctgc__structure_reuse__direct__detect_garbage__determine_dead_deconstructions_generic_call_8_0_i3);
	}
	MR_sv(5) = MR_r7;
	MR_r1 = MR_r6;
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_context_1_0,
		transform_hlds__ctgc__structure_reuse__direct__detect_garbage__determine_dead_deconstructions_generic_call_8_0_i4);
MR_def_label(transform_hlds__ctgc__structure_reuse__direct__detect_garbage__determine_dead_deconstructions_generic_call_8_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(parse_tree__prog_out__context_to_string_2_0,
		transform_hlds__ctgc__structure_reuse__direct__detect_garbage__determine_dead_deconstructions_generic_call_8_0_i18);
MR_def_label(transform_hlds__ctgc__structure_reuse__direct__detect_garbage__determine_dead_deconstructions_generic_call_8_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r4;
	MR_sv(3) = MR_r5;
	MR_sv(4) = MR_r6;
	MR_sv(5) = MR_r7;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_vartypes_2_0,
		transform_hlds__ctgc__structure_reuse__direct__detect_garbage__determine_dead_deconstructions_generic_call_8_0_i10);
MR_def_label(transform_hlds__ctgc__structure_reuse__direct__detect_garbage__determine_dead_deconstructions_generic_call_8_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,2,0);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(map__apply_to_list_3_0,
		transform_hlds__ctgc__structure_reuse__direct__detect_garbage__determine_dead_deconstructions_generic_call_8_0_i12);
MR_def_label(transform_hlds__ctgc__structure_reuse__direct__detect_garbage__determine_dead_deconstructions_generic_call_8_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(transform_hlds__ctgc__structure_sharing__domain__bottom_sharing_is_safe_approximation_by_args_3_0,
		transform_hlds__ctgc__structure_reuse__direct__detect_garbage__determine_dead_deconstructions_generic_call_8_0_i15);
MR_def_label(transform_hlds__ctgc__structure_reuse__direct__detect_garbage__determine_dead_deconstructions_generic_call_8_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__ctgc__structure_reuse__direct__detect_garbage__determine_dead_deconstructions_generic_call_8_0_i14);
	}
	MR_r1 = MR_sv(5);
	MR_decr_sp_and_return(6);
MR_def_label(transform_hlds__ctgc__structure_reuse__direct__detect_garbage__determine_dead_deconstructions_generic_call_8_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_context_1_0,
		transform_hlds__ctgc__structure_reuse__direct__detect_garbage__determine_dead_deconstructions_generic_call_8_0_i17);
MR_def_label(transform_hlds__ctgc__structure_reuse__direct__detect_garbage__determine_dead_deconstructions_generic_call_8_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(parse_tree__prog_out__context_to_string_2_0,
		transform_hlds__ctgc__structure_reuse__direct__detect_garbage__determine_dead_deconstructions_generic_call_8_0_i18);
MR_def_label(transform_hlds__ctgc__structure_reuse__direct__detect_garbage__determine_dead_deconstructions_generic_call_8_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const(")", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		transform_hlds__ctgc__structure_reuse__direct__detect_garbage__determine_dead_deconstructions_generic_call_8_0_i19);
MR_def_label(transform_hlds__ctgc__structure_reuse__direct__detect_garbage__determine_dead_deconstructions_generic_call_8_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("generic call (", 14);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		transform_hlds__ctgc__structure_reuse__direct__detect_garbage__determine_dead_deconstructions_generic_call_8_0_i20);
MR_def_label(transform_hlds__ctgc__structure_reuse__direct__detect_garbage__determine_dead_deconstructions_generic_call_8_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr1, 0) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(5);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(fn__transform_hlds__ctgc__structure_sharing__domain__sharing_as_top_sharing_accumulate_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__hlds__hlds_goal__goal_info_get_lfu_1_0);
MR_decl_entry(fn__hlds__hlds_goal__goal_info_get_lbu_1_0);
MR_decl_entry(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0);
MR_decl_entry(check_hlds__type_util__type_is_no_tag_type_2_0);
MR_decl_entry(transform_hlds__ctgc__structure_sharing__domain__sharing_as_is_top_1_0);
MR_decl_entry(fn__transform_hlds__ctgc__livedata__livedata_init_at_goal_4_0);
MR_decl_entry(fn__transform_hlds__ctgc__datastruct__datastruct_init_1_0);
MR_decl_entry(transform_hlds__ctgc__livedata__nodes_are_not_live_5_0);
MR_decl_entry(fn__transform_hlds__ctgc__structure_reuse__domain__reuse_condition_init_6_0);
MR_decl_entry(transform_hlds__ctgc__structure_reuse__direct__dead_cell_table_set_4_0);
MR_decl_entry(require__unexpected_3_0);

MR_BEGIN_MODULE(transform_hlds__ctgc__structure_reuse__direct__detect_garbage_module2)
	MR_init_entry1(transform_hlds__ctgc__structure_reuse__direct__detect_garbage__unification_verify_reuse_8_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__ctgc__structure_reuse__direct__detect_garbage__unification_verify_reuse_8_0);
	MR_init_label10(transform_hlds__ctgc__structure_reuse__direct__detect_garbage__unification_verify_reuse_8_0,3,4,6,7,13,15,18,22,24,25)
	MR_init_label5(transform_hlds__ctgc__structure_reuse__direct__detect_garbage__unification_verify_reuse_8_0,27,30,9,5,33)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'unification_verify_reuse'/8 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__ctgc__structure_reuse__direct__detect_garbage__unification_verify_reuse_8_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r4,2)) {
		MR_GOTO_LAB(transform_hlds__ctgc__structure_reuse__direct__detect_garbage__unification_verify_reuse_8_0_i3);
	}
	MR_r1 = MR_r7;
	MR_proceed();
MR_def_label(transform_hlds__ctgc__structure_reuse__direct__detect_garbage__unification_verify_reuse_8_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r4,0)) {
		MR_GOTO_LAB(transform_hlds__ctgc__structure_reuse__direct__detect_garbage__unification_verify_reuse_8_0_i4);
	}
	MR_r1 = MR_r7;
	MR_proceed();
MR_def_label(transform_hlds__ctgc__structure_reuse__direct__detect_garbage__unification_verify_reuse_8_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r4,1)) {
		MR_GOTO_LAB(transform_hlds__ctgc__structure_reuse__direct__detect_garbage__unification_verify_reuse_8_0_i5);
	}
	MR_incr_sp(10);
	MR_sv(10) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r3;
	MR_sv(9) = MR_tempr1;
	MR_sv(3) = MR_r5;
	MR_sv(4) = MR_r6;
	MR_tempr2 = MR_r4;
	MR_sv(5) = MR_tfield(1, MR_tempr2, 0);
	MR_sv(7) = MR_tfield(1, MR_tempr2, 1);
	MR_sv(8) = MR_r7;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_lfu_1_0,
		transform_hlds__ctgc__structure_reuse__direct__detect_garbage__unification_verify_reuse_8_0_i6);
MR_def_label(transform_hlds__ctgc__structure_reuse__direct__detect_garbage__unification_verify_reuse_8_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(9);
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_lbu_1_0,
		transform_hlds__ctgc__structure_reuse__direct__detect_garbage__unification_verify_reuse_8_0_i7);
MR_def_label(transform_hlds__ctgc__structure_reuse__direct__detect_garbage__unification_verify_reuse_8_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(7),3,2)) {
		MR_GOTO_LAB(transform_hlds__ctgc__structure_reuse__direct__detect_garbage__unification_verify_reuse_8_0_i9);
	}
	MR_r2 = MR_tfield(3, MR_sv(7), 2);
	if (MR_INT_EQ(MR_r2,0)) {
		MR_GOTO_LAB(transform_hlds__ctgc__structure_reuse__direct__detect_garbage__unification_verify_reuse_8_0_i9);
	}
	MR_sv(7) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_vartypes_2_0,
		transform_hlds__ctgc__structure_reuse__direct__detect_garbage__unification_verify_reuse_8_0_i13);
MR_def_label(transform_hlds__ctgc__structure_reuse__direct__detect_garbage__unification_verify_reuse_8_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,2,0);
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r4 = MR_tempr1;
	MR_r5 = MR_sv(5);
	}
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		transform_hlds__ctgc__structure_reuse__direct__detect_garbage__unification_verify_reuse_8_0_i15);
MR_def_label(transform_hlds__ctgc__structure_reuse__direct__detect_garbage__unification_verify_reuse_8_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__type_util__type_is_no_tag_type_2_0,
		transform_hlds__ctgc__structure_reuse__direct__detect_garbage__unification_verify_reuse_8_0_i18);
MR_def_label(transform_hlds__ctgc__structure_reuse__direct__detect_garbage__unification_verify_reuse_8_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(transform_hlds__ctgc__structure_reuse__direct__detect_garbage__unification_verify_reuse_8_0_i9);
	}
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(transform_hlds__ctgc__structure_sharing__domain__sharing_as_is_top_1_0,
		transform_hlds__ctgc__structure_reuse__direct__detect_garbage__unification_verify_reuse_8_0_i22);
MR_def_label(transform_hlds__ctgc__structure_reuse__direct__detect_garbage__unification_verify_reuse_8_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(transform_hlds__ctgc__structure_reuse__direct__detect_garbage__unification_verify_reuse_8_0_i9);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(9);
	MR_r4 = MR_sv(4);
	MR_np_call_localret_ent(fn__transform_hlds__ctgc__livedata__livedata_init_at_goal_4_0,
		transform_hlds__ctgc__structure_reuse__direct__detect_garbage__unification_verify_reuse_8_0_i24);
MR_def_label(transform_hlds__ctgc__structure_reuse__direct__detect_garbage__unification_verify_reuse_8_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_r1;
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(fn__transform_hlds__ctgc__datastruct__datastruct_init_1_0,
		transform_hlds__ctgc__structure_reuse__direct__detect_garbage__unification_verify_reuse_8_0_i25);
MR_def_label(transform_hlds__ctgc__structure_reuse__direct__detect_garbage__unification_verify_reuse_8_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r4 = MR_sv(9);
	}
	MR_np_call_localret_ent(transform_hlds__ctgc__livedata__nodes_are_not_live_5_0,
		transform_hlds__ctgc__structure_reuse__direct__detect_garbage__unification_verify_reuse_8_0_i27);
MR_def_label(transform_hlds__ctgc__structure_reuse__direct__detect_garbage__unification_verify_reuse_8_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(transform_hlds__ctgc__structure_reuse__direct__detect_garbage__unification_verify_reuse_8_0_i9);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(1, MR_r1, 0);
	if (MR_LTAGS_TESTR(MR_tempr1,0,0)) {
		MR_GOTO_LAB(transform_hlds__ctgc__structure_reuse__direct__detect_garbage__unification_verify_reuse_8_0_i9);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(5);
	MR_r4 = MR_sv(6);
	MR_r5 = MR_sv(7);
	MR_r6 = MR_sv(4);
	}
	MR_np_call_localret_ent(fn__transform_hlds__ctgc__structure_reuse__domain__reuse_condition_init_6_0,
		transform_hlds__ctgc__structure_reuse__direct__detect_garbage__unification_verify_reuse_8_0_i30);
MR_def_label(transform_hlds__ctgc__structure_reuse__direct__detect_garbage__unification_verify_reuse_8_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(8);
	MR_succip_word = MR_sv(10);
	MR_decr_sp(10);
	MR_np_tailcall_ent(transform_hlds__ctgc__structure_reuse__direct__dead_cell_table_set_4_0);
	}
MR_def_label(transform_hlds__ctgc__structure_reuse__direct__detect_garbage__unification_verify_reuse_8_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(8);
	MR_decr_sp_and_return(10);
MR_def_label(transform_hlds__ctgc__structure_reuse__direct__detect_garbage__unification_verify_reuse_8_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r4,3,0)) {
		MR_GOTO_LAB(transform_hlds__ctgc__structure_reuse__direct__detect_garbage__unification_verify_reuse_8_0_i33);
	}
	MR_r1 = MR_r7;
	MR_proceed();
MR_def_label(transform_hlds__ctgc__structure_reuse__direct__detect_garbage__unification_verify_reuse_8_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("transform_hlds.ctgc.structure_reuse.direct.detect_garbage", 57);
	MR_r2 = (MR_Word) MR_string_const("predicate \140transform_hlds.ctgc.structure_reuse.direct.detect_garbage.unification_verify_reuse\'/8", 96);
	MR_r3 = (MR_Word) MR_string_const("complicated_unify", 17);
	MR_np_tailcall_ent(require__unexpected_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(transform_hlds__ctgc__structure_sharing__domain__add_foreign_proc_sharing_9_0);
MR_decl_entry(fn__transform_hlds__ctgc__structure_sharing__domain__sharing_as_least_upper_bound_4_0);
MR_decl_entry(transform_hlds__ctgc__structure_sharing__domain__lookup_sharing_and_comb_9_0);
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_goal__type_ctor_info_case_0;
MR_decl_entry(fn__list__map_2_0);
MR_decl_entry(fn__transform_hlds__smm_common__program_point_init_1_0);
MR_decl_entry(fn__transform_hlds__ctgc__structure_sharing__domain__add_unify_sharing_5_0);

MR_BEGIN_MODULE(transform_hlds__ctgc__structure_reuse__direct__detect_garbage_module3)
	MR_init_entry1(transform_hlds__ctgc__structure_reuse__direct__detect_garbage__determine_dead_deconstructions_2_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__ctgc__structure_reuse__direct__detect_garbage__determine_dead_deconstructions_2_6_0);
	MR_init_label10(transform_hlds__ctgc__structure_reuse__direct__detect_garbage__determine_dead_deconstructions_2_6_0,111,5,3,7,11,13,16,17,18,15)
	MR_init_label10(transform_hlds__ctgc__structure_reuse__direct__detect_garbage__determine_dead_deconstructions_2_6_0,20,22,21,24,23,31,29,34,35,36)
	MR_init_label1(transform_hlds__ctgc__structure_reuse__direct__detect_garbage__determine_dead_deconstructions_2_6_0,33)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'determine_dead_deconstructions_2'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__ctgc__structure_reuse__direct__detect_garbage__determine_dead_deconstructions_2_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
MR_def_label(transform_hlds__ctgc__structure_reuse__direct__detect_garbage__determine_dead_deconstructions_2_6_0,111)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(0, MR_r2, 0);
	MR_r5 = MR_tempr1;
	if (MR_RTAGS_TESTR(MR_tempr1,3,1)) {
		MR_GOTO_LAB(transform_hlds__ctgc__structure_reuse__direct__detect_garbage__determine_dead_deconstructions_2_6_0_i3);
	}
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_sv(6) = MR_tempr2;
	MR_tfield(0, MR_tempr2, 0) = MR_tfield(3, MR_tempr1, 2);
	MR_tfield(0, MR_tempr2, 1) = MR_tfield(3, MR_tempr1, 3);
	MR_sv(2) = MR_tfield(0, MR_r1, 0);
	MR_sv(1) = MR_tfield(0, MR_r1, 1);
	MR_sv(3) = MR_tfield(0, MR_r1, 2);
	MR_sv(4) = MR_tfield(3, MR_tempr1, 1);
	MR_sv(5) = MR_tfield(3, MR_tempr1, 4);
	MR_sv(7) = MR_r3;
	MR_sv(8) = MR_r4;
	MR_r1 = MR_tfield(0, MR_r2, 1);
	}
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_context_1_0,
		transform_hlds__ctgc__structure_reuse__direct__detect_garbage__determine_dead_deconstructions_2_6_0_i5);
MR_def_label(transform_hlds__ctgc__structure_reuse__direct__detect_garbage__determine_dead_deconstructions_2_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(6);
	MR_r5 = MR_sv(4);
	MR_r6 = MR_sv(5);
	MR_r7 = MR_tempr1;
	MR_r8 = MR_sv(7);
	}
	MR_np_call_localret_ent(transform_hlds__ctgc__structure_sharing__domain__add_foreign_proc_sharing_9_0,
		transform_hlds__ctgc__structure_reuse__direct__detect_garbage__determine_dead_deconstructions_2_6_0_i22);
MR_def_label(transform_hlds__ctgc__structure_reuse__direct__detect_garbage__determine_dead_deconstructions_2_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r5,3,2)) {
		MR_GOTO_LAB(transform_hlds__ctgc__structure_reuse__direct__detect_garbage__determine_dead_deconstructions_2_6_0_i7);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(3,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(transform_hlds__ctgc__structure_reuse__direct__detect_garbage__determine_dead_deconstructions_2_with_progress_6_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__ctgc__structure_sharing__domain, sharing_as);
	MR_tempr2 = MR_r3;
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,0,1);
	MR_tempr3 = MR_r4;
	MR_r4 = MR_tempr1;
	MR_r5 = MR_tfield(3, MR_r5, 2);
	MR_r6 = MR_tempr2;
	MR_r7 = MR_tempr3;
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_np_tailcall_ent(list__foldl2_6_0);
	}
MR_def_label(transform_hlds__ctgc__structure_reuse__direct__detect_garbage__determine_dead_deconstructions_2_6_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r5,3,3)) {
		MR_GOTO_LAB(transform_hlds__ctgc__structure_reuse__direct__detect_garbage__determine_dead_deconstructions_2_6_0_i11);
	}
	MR_r2 = MR_tfield(3, MR_r5, 1);
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_np_tailcall_ent(transform_hlds__ctgc__structure_reuse__direct__detect_garbage__determine_dead_deconstructions_2_disj_6_0);
MR_def_label(transform_hlds__ctgc__structure_reuse__direct__detect_garbage__determine_dead_deconstructions_2_6_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r5,3,0)) {
		MR_GOTO_LAB(transform_hlds__ctgc__structure_reuse__direct__detect_garbage__determine_dead_deconstructions_2_6_0_i13);
	}
	MR_sv(8) = MR_r4;
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tfield(0, MR_r1, 0);
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_tfield(0, MR_sv(1), 2);
	MR_tempr2 = MR_r3;
	MR_tempr3 = MR_r5;
	MR_r3 = MR_tfield(3, MR_tempr3, 1);
	MR_r4 = MR_tfield(3, MR_tempr3, 2);
	MR_r5 = MR_tfield(3, MR_r5, 3);
	MR_r6 = MR_tfield(0, MR_tempr1, 1);
	MR_r7 = MR_tempr2;
	}
	MR_np_call_localret_ent(transform_hlds__ctgc__structure_reuse__direct__detect_garbage__determine_dead_deconstructions_generic_call_8_0,
		transform_hlds__ctgc__structure_reuse__direct__detect_garbage__determine_dead_deconstructions_2_6_0_i22);
MR_def_label(transform_hlds__ctgc__structure_reuse__direct__detect_garbage__determine_dead_deconstructions_2_6_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r5,3,6)) {
		MR_GOTO_LAB(transform_hlds__ctgc__structure_reuse__direct__detect_garbage__determine_dead_deconstructions_2_6_0_i15);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_tfield(0, MR_r1, 0);
	MR_sv(3) = MR_tfield(0, MR_r1, 2);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r5;
	MR_sv(4) = MR_tfield(3, MR_tempr1, 3);
	MR_sv(5) = MR_tfield(3, MR_tempr1, 4);
	MR_sv(7) = MR_r3;
	MR_r2 = MR_tfield(3, MR_tempr1, 2);
	}
	MR_np_localcall_lab(transform_hlds__ctgc__structure_reuse__direct__detect_garbage__determine_dead_deconstructions_2_6_0,
		transform_hlds__ctgc__structure_reuse__direct__detect_garbage__determine_dead_deconstructions_2_6_0_i16);
MR_def_label(transform_hlds__ctgc__structure_reuse__direct__detect_garbage__determine_dead_deconstructions_2_6_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_sv(4);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tempr2;
	}
	MR_np_localcall_lab(transform_hlds__ctgc__structure_reuse__direct__detect_garbage__determine_dead_deconstructions_2_6_0,
		transform_hlds__ctgc__structure_reuse__direct__detect_garbage__determine_dead_deconstructions_2_6_0_i17);
MR_def_label(transform_hlds__ctgc__structure_reuse__direct__detect_garbage__determine_dead_deconstructions_2_6_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_tempr2 = MR_r2;
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(7);
	MR_r4 = MR_tempr2;
	}
	MR_np_localcall_lab(transform_hlds__ctgc__structure_reuse__direct__detect_garbage__determine_dead_deconstructions_2_6_0,
		transform_hlds__ctgc__structure_reuse__direct__detect_garbage__determine_dead_deconstructions_2_6_0_i18);
MR_def_label(transform_hlds__ctgc__structure_reuse__direct__detect_garbage__determine_dead_deconstructions_2_6_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r2;
	MR_tempr2 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tempr2;
	}
	MR_np_call_localret_ent(fn__transform_hlds__ctgc__structure_sharing__domain__sharing_as_least_upper_bound_4_0,
		transform_hlds__ctgc__structure_reuse__direct__detect_garbage__determine_dead_deconstructions_2_6_0_i36);
MR_def_label(transform_hlds__ctgc__structure_reuse__direct__detect_garbage__determine_dead_deconstructions_2_6_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r5,0)) {
		MR_GOTO_LAB(transform_hlds__ctgc__structure_reuse__direct__detect_garbage__determine_dead_deconstructions_2_6_0_i20);
	}
	MR_r1 = MR_r3;
	MR_r2 = MR_r4;
	MR_decr_sp_and_return(9);
MR_def_label(transform_hlds__ctgc__structure_reuse__direct__detect_garbage__determine_dead_deconstructions_2_6_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r5,2)) {
		MR_GOTO_LAB(transform_hlds__ctgc__structure_reuse__direct__detect_garbage__determine_dead_deconstructions_2_6_0_i21);
	}
	MR_sv(8) = MR_r4;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_tempr1;
	MR_r1 = MR_tfield(0, MR_r1, 0);
	MR_r2 = MR_tfield(0, MR_tempr1, 1);
	MR_tempr2 = MR_r3;
	MR_r3 = MR_tfield(0, MR_tempr1, 2);
	MR_r4 = MR_tfield(0, MR_tempr1, 3);
	MR_tempr3 = MR_r5;
	MR_r5 = MR_tfield(2, MR_r5, 0);
	MR_r6 = MR_tfield(2, MR_tempr3, 1);
	MR_r7 = MR_tfield(2, MR_tempr3, 2);
	MR_r8 = MR_tempr2;
	}
	MR_np_call_localret_ent(transform_hlds__ctgc__structure_sharing__domain__lookup_sharing_and_comb_9_0,
		transform_hlds__ctgc__structure_reuse__direct__detect_garbage__determine_dead_deconstructions_2_6_0_i22);
MR_def_label(transform_hlds__ctgc__structure_reuse__direct__detect_garbage__determine_dead_deconstructions_2_6_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(8);
	MR_decr_sp_and_return(9);
MR_def_label(transform_hlds__ctgc__structure_reuse__direct__detect_garbage__determine_dead_deconstructions_2_6_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r5,3,5)) {
		MR_GOTO_LAB(transform_hlds__ctgc__structure_reuse__direct__detect_garbage__determine_dead_deconstructions_2_6_0_i23);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr3 = MR_r5;
	MR_r9 = MR_tfield(3, MR_tempr3, 2);
	MR_tempr1 = MR_tfield(3, MR_tempr3, 1);
	if (MR_RTAGS_TESTR(MR_tempr1,3,4)) {
		MR_GOTO_LAB(transform_hlds__ctgc__structure_reuse__direct__detect_garbage__determine_dead_deconstructions_2_6_0_i24);
	}
	MR_tempr2 = MR_tfield(3, MR_tempr1, 2);
	if (MR_INT_NE(MR_tempr2,0)) {
		MR_GOTO_LAB(transform_hlds__ctgc__structure_reuse__direct__detect_garbage__determine_dead_deconstructions_2_6_0_i24);
	}
	MR_r1 = MR_r3;
	MR_r2 = MR_r4;
	MR_decr_sp_and_return(9);
	}
MR_def_label(transform_hlds__ctgc__structure_reuse__direct__detect_garbage__determine_dead_deconstructions_2_6_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r9;
	MR_succip_word = MR_sv(9);
	MR_GOTO_LAB(transform_hlds__ctgc__structure_reuse__direct__detect_garbage__determine_dead_deconstructions_2_6_0_i111);
MR_def_label(transform_hlds__ctgc__structure_reuse__direct__detect_garbage__determine_dead_deconstructions_2_6_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r5,3,4)) {
		MR_GOTO_LAB(transform_hlds__ctgc__structure_reuse__direct__detect_garbage__determine_dead_deconstructions_2_6_0_i29);
	}
	MR_sv(1) = MR_r1;
	MR_sv(7) = MR_r3;
	MR_sv(8) = MR_r4;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, case);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,5,0);
	MR_r4 = MR_tfield(3, MR_r5, 3);
	MR_np_call_localret_ent(fn__list__map_2_0,
		transform_hlds__ctgc__structure_reuse__direct__detect_garbage__determine_dead_deconstructions_2_6_0_i31);
MR_def_label(transform_hlds__ctgc__structure_reuse__direct__detect_garbage__determine_dead_deconstructions_2_6_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(7);
	MR_r4 = MR_sv(8);
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_np_tailcall_ent(transform_hlds__ctgc__structure_reuse__direct__detect_garbage__determine_dead_deconstructions_2_disj_6_0);
	}
MR_def_label(transform_hlds__ctgc__structure_reuse__direct__detect_garbage__determine_dead_deconstructions_2_6_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r5,1)) {
		MR_GOTO_LAB(transform_hlds__ctgc__structure_reuse__direct__detect_garbage__determine_dead_deconstructions_2_6_0_i33);
	}
	MR_sv(1) = MR_tfield(0, MR_r2, 1);
	MR_sv(2) = MR_tfield(0, MR_r1, 0);
	MR_sv(3) = MR_tfield(0, MR_r1, 2);
	MR_sv(4) = MR_tfield(1, MR_r5, 3);
	MR_sv(7) = MR_r3;
	MR_sv(8) = MR_r4;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(fn__transform_hlds__smm_common__program_point_init_1_0,
		transform_hlds__ctgc__structure_reuse__direct__detect_garbage__determine_dead_deconstructions_2_6_0_i34);
MR_def_label(transform_hlds__ctgc__structure_reuse__direct__detect_garbage__determine_dead_deconstructions_2_6_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(4);
	MR_r5 = MR_tempr1;
	MR_r6 = MR_sv(7);
	MR_r7 = MR_sv(8);
	}
	MR_np_call_localret_ent(transform_hlds__ctgc__structure_reuse__direct__detect_garbage__unification_verify_reuse_8_0,
		transform_hlds__ctgc__structure_reuse__direct__detect_garbage__determine_dead_deconstructions_2_6_0_i35);
MR_def_label(transform_hlds__ctgc__structure_reuse__direct__detect_garbage__determine_dead_deconstructions_2_6_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_tempr1;
	MR_r5 = MR_sv(7);
	}
	MR_np_call_localret_ent(fn__transform_hlds__ctgc__structure_sharing__domain__add_unify_sharing_5_0,
		transform_hlds__ctgc__structure_reuse__direct__detect_garbage__determine_dead_deconstructions_2_6_0_i36);
MR_def_label(transform_hlds__ctgc__structure_reuse__direct__detect_garbage__determine_dead_deconstructions_2_6_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_decr_sp_and_return(9);
MR_def_label(transform_hlds__ctgc__structure_reuse__direct__detect_garbage__determine_dead_deconstructions_2_6_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("transform_hlds.ctgc.structure_reuse.direct.detect_garbage", 57);
	MR_r2 = (MR_Word) MR_string_const("predicate \140transform_hlds.ctgc.structure_reuse.direct.detect_garbage.determine_dead_deconstructions_2\'/6", 104);
	MR_r3 = (MR_Word) MR_string_const("shorthand", 9);
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_np_tailcall_ent(require__unexpected_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__hlds_module__module_info_get_globals_2_0);
MR_decl_entry(libs__globals__lookup_bool_option_3_0);
MR_decl_entry(fn__transform_hlds__ctgc__structure_sharing__domain__sharing_as_init_0_0);
MR_decl_entry(fn__transform_hlds__ctgc__structure_reuse__direct__dead_cell_table_init_0_0);
MR_decl_entry(io__nl_2_0);

MR_BEGIN_MODULE(transform_hlds__ctgc__structure_reuse__direct__detect_garbage_module4)
	MR_init_entry1(transform_hlds__ctgc__structure_reuse__direct__detect_garbage__determine_dead_deconstructions_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__ctgc__structure_reuse__direct__detect_garbage__determine_dead_deconstructions_6_0);
	MR_init_label7(transform_hlds__ctgc__structure_reuse__direct__detect_garbage__determine_dead_deconstructions_6_0,2,3,5,6,7,9,10)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'determine_dead_deconstructions'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__transform_hlds__ctgc__structure_reuse__direct__detect_garbage__determine_dead_deconstructions_6_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(4) = MR_r1;
	MR_sv(5) = MR_r2;
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r4;
	MR_sv(3) = MR_r5;
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_globals_2_0,
		transform_hlds__ctgc__structure_reuse__direct__detect_garbage__determine_dead_deconstructions_6_0_i2);
MR_def_label(transform_hlds__ctgc__structure_reuse__direct__detect_garbage__determine_dead_deconstructions_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 42;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		transform_hlds__ctgc__structure_reuse__direct__detect_garbage__determine_dead_deconstructions_6_0_i3);
MR_def_label(transform_hlds__ctgc__structure_reuse__direct__detect_garbage__determine_dead_deconstructions_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 5);
	MR_tfield(0, MR_r2, 0) = MR_sv(4);
	MR_tfield(0, MR_r2, 1) = MR_sv(5);
	MR_tfield(0, MR_r2, 2) = MR_sv(1);
	MR_tfield(0, MR_r2, 3) = MR_sv(2);
	MR_tfield(0, MR_r2, 4) = MR_r1;
	MR_sv(4) = MR_r2;
	MR_np_call_localret_ent(fn__transform_hlds__ctgc__structure_sharing__domain__sharing_as_init_0_0,
		transform_hlds__ctgc__structure_reuse__direct__detect_garbage__determine_dead_deconstructions_6_0_i5);
MR_def_label(transform_hlds__ctgc__structure_reuse__direct__detect_garbage__determine_dead_deconstructions_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_np_call_localret_ent(fn__transform_hlds__ctgc__structure_reuse__direct__dead_cell_table_init_0_0,
		transform_hlds__ctgc__structure_reuse__direct__detect_garbage__determine_dead_deconstructions_6_0_i6);
MR_def_label(transform_hlds__ctgc__structure_reuse__direct__detect_garbage__determine_dead_deconstructions_6_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(5);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(transform_hlds__ctgc__structure_reuse__direct__detect_garbage__determine_dead_deconstructions_2_6_0,
		transform_hlds__ctgc__structure_reuse__direct__detect_garbage__determine_dead_deconstructions_6_0_i7);
MR_def_label(transform_hlds__ctgc__structure_reuse__direct__detect_garbage__determine_dead_deconstructions_6_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(0, MR_sv(4), 4);
	if (MR_INT_NE(MR_tempr1,0)) {
		MR_GOTO_LAB(transform_hlds__ctgc__structure_reuse__direct__detect_garbage__determine_dead_deconstructions_6_0_i9);
	}
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(6);
	}
MR_def_label(transform_hlds__ctgc__structure_reuse__direct__detect_garbage__determine_dead_deconstructions_6_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r2;
	MR_np_call_localret_ent(io__nl_2_0,
		transform_hlds__ctgc__structure_reuse__direct__detect_garbage__determine_dead_deconstructions_6_0_i10);
MR_def_label(transform_hlds__ctgc__structure_reuse__direct__detect_garbage__determine_dead_deconstructions_6_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	MR_decr_sp_and_return(6);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(io__write_char_3_0);
MR_decl_entry(io__flush_output_2_0);

MR_BEGIN_MODULE(transform_hlds__ctgc__structure_reuse__direct__detect_garbage_module5)
	MR_init_entry1(transform_hlds__ctgc__structure_reuse__direct__detect_garbage__determine_dead_deconstructions_2_with_progress_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__ctgc__structure_reuse__direct__detect_garbage__determine_dead_deconstructions_2_with_progress_6_0);
	MR_init_label3(transform_hlds__ctgc__structure_reuse__direct__detect_garbage__determine_dead_deconstructions_2_with_progress_6_0,4,5,13)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'determine_dead_deconstructions_2_with_progress'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__ctgc__structure_reuse__direct__detect_garbage__determine_dead_deconstructions_2_with_progress_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(0, MR_r1, 4);
	if (MR_INT_EQ(MR_tempr1,0)) {
		MR_GOTO_LAB(transform_hlds__ctgc__structure_reuse__direct__detect_garbage__determine_dead_deconstructions_2_with_progress_6_0_i13);
	}
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_r1 = (MR_Integer) 46;
	}
	MR_np_call_localret_ent(io__write_char_3_0,
		transform_hlds__ctgc__structure_reuse__direct__detect_garbage__determine_dead_deconstructions_2_with_progress_6_0_i4);
MR_def_label(transform_hlds__ctgc__structure_reuse__direct__detect_garbage__determine_dead_deconstructions_2_with_progress_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__flush_output_2_0,
		transform_hlds__ctgc__structure_reuse__direct__detect_garbage__determine_dead_deconstructions_2_with_progress_6_0_i5);
MR_def_label(transform_hlds__ctgc__structure_reuse__direct__detect_garbage__determine_dead_deconstructions_2_with_progress_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(4);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(transform_hlds__ctgc__structure_reuse__direct__detect_garbage__determine_dead_deconstructions_2_6_0);
MR_def_label(transform_hlds__ctgc__structure_reuse__direct__detect_garbage__determine_dead_deconstructions_2_with_progress_6_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(transform_hlds__ctgc__structure_reuse__direct__detect_garbage__determine_dead_deconstructions_2_6_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__ctgc__structure_reuse__direct__detect_garbage_module6)
	MR_init_entry1(transform_hlds__ctgc__structure_reuse__direct__detect_garbage__determine_dead_deconstructions_2_disj_goal_7_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__ctgc__structure_reuse__direct__detect_garbage__determine_dead_deconstructions_2_disj_goal_7_0);
	MR_init_label2(transform_hlds__ctgc__structure_reuse__direct__detect_garbage__determine_dead_deconstructions_2_disj_goal_7_0,2,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'determine_dead_deconstructions_2_disj_goal'/7 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__ctgc__structure_reuse__direct__detect_garbage__determine_dead_deconstructions_2_disj_goal_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(2) = MR_r1;
	MR_sv(1) = MR_r4;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_r3;
	MR_r3 = MR_tempr1;
	MR_r4 = MR_r5;
	}
	MR_np_call_localret_ent(transform_hlds__ctgc__structure_reuse__direct__detect_garbage__determine_dead_deconstructions_2_6_0,
		transform_hlds__ctgc__structure_reuse__direct__detect_garbage__determine_dead_deconstructions_2_disj_goal_7_0_i2);
MR_def_label(transform_hlds__ctgc__structure_reuse__direct__detect_garbage__determine_dead_deconstructions_2_disj_goal_7_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r2;
	MR_tempr2 = MR_r1;
	MR_r1 = MR_tfield(0, MR_tempr1, 0);
	MR_r2 = MR_tfield(0, MR_tempr1, 2);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_tempr2;
	}
	MR_np_call_localret_ent(fn__transform_hlds__ctgc__structure_sharing__domain__sharing_as_least_upper_bound_4_0,
		transform_hlds__ctgc__structure_reuse__direct__detect_garbage__determine_dead_deconstructions_2_disj_goal_7_0_i3);
MR_def_label(transform_hlds__ctgc__structure_reuse__direct__detect_garbage__determine_dead_deconstructions_2_disj_goal_7_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
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

MR_BEGIN_MODULE(transform_hlds__ctgc__structure_reuse__direct__detect_garbage_module7)
	MR_init_entry1(__Unify___transform_hlds__ctgc__structure_reuse__direct__detect_garbage__detect_bg_info_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___transform_hlds__ctgc__structure_reuse__direct__detect_garbage__detect_bg_info_0_0);
	MR_init_label6(__Unify___transform_hlds__ctgc__structure_reuse__direct__detect_garbage__detect_bg_info_0_0,4,6,8,10,12,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___transform_hlds__ctgc__structure_reuse__direct__detect_garbage__detect_bg_info_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___transform_hlds__ctgc__structure_reuse__direct__detect_garbage__detect_bg_info_0_0_i12);
	}
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
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
	MR_sv(5) = MR_tfield(0, MR_tempr2, 1);
	MR_sv(6) = MR_tfield(0, MR_tempr2, 2);
	MR_sv(7) = MR_tfield(0, MR_tempr2, 3);
	MR_sv(8) = MR_tfield(0, MR_tempr2, 4);
	MR_r1 = MR_tfield(0, MR_tempr1, 0);
	MR_r2 = MR_tfield(0, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(__Unify___hlds__hlds_module__module_info_0_0,
		__Unify___transform_hlds__ctgc__structure_reuse__direct__detect_garbage__detect_bg_info_0_0_i4);
MR_def_label(__Unify___transform_hlds__ctgc__structure_reuse__direct__detect_garbage__detect_bg_info_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___transform_hlds__ctgc__structure_reuse__direct__detect_garbage__detect_bg_info_0_0_i1);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(__Unify___hlds__hlds_pred__pred_info_0_0,
		__Unify___transform_hlds__ctgc__structure_reuse__direct__detect_garbage__detect_bg_info_0_0_i6);
MR_def_label(__Unify___transform_hlds__ctgc__structure_reuse__direct__detect_garbage__detect_bg_info_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___transform_hlds__ctgc__structure_reuse__direct__detect_garbage__detect_bg_info_0_0_i1);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(6);
	MR_np_call_localret_ent(__Unify___hlds__hlds_pred__proc_info_0_0,
		__Unify___transform_hlds__ctgc__structure_reuse__direct__detect_garbage__detect_bg_info_0_0_i8);
MR_def_label(__Unify___transform_hlds__ctgc__structure_reuse__direct__detect_garbage__detect_bg_info_0_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___transform_hlds__ctgc__structure_reuse__direct__detect_garbage__detect_bg_info_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__ctgc__structure_sharing__domain, sharing_as_and_status);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(7);
	MR_np_call_localret_ent(__Unify___tree234__tree234_2_0,
		__Unify___transform_hlds__ctgc__structure_reuse__direct__detect_garbage__detect_bg_info_0_0_i10);
MR_def_label(__Unify___transform_hlds__ctgc__structure_reuse__direct__detect_garbage__detect_bg_info_0_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___transform_hlds__ctgc__structure_reuse__direct__detect_garbage__detect_bg_info_0_0_i1);
	}
	MR_r1 = (MR_sv(4) == MR_sv(8));
	MR_decr_sp_and_return(9);
MR_def_label(__Unify___transform_hlds__ctgc__structure_reuse__direct__detect_garbage__detect_bg_info_0_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___transform_hlds__ctgc__structure_reuse__direct__detect_garbage__detect_bg_info_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(9);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Compare___hlds__hlds_module__module_info_0_0);
MR_decl_entry(__Compare___hlds__hlds_pred__pred_info_0_0);
MR_decl_entry(__Compare___hlds__hlds_pred__proc_info_0_0);
MR_decl_entry(__Compare___tree234__tree234_2_0);
MR_decl_entry(private_builtin__builtin_compare_int_3_0);

MR_BEGIN_MODULE(transform_hlds__ctgc__structure_reuse__direct__detect_garbage_module8)
	MR_init_entry1(__Compare___transform_hlds__ctgc__structure_reuse__direct__detect_garbage__detect_bg_info_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___transform_hlds__ctgc__structure_reuse__direct__detect_garbage__detect_bg_info_0_0);
	MR_init_label7(__Compare___transform_hlds__ctgc__structure_reuse__direct__detect_garbage__detect_bg_info_0_0,3,2,5,9,13,17,45)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___transform_hlds__ctgc__structure_reuse__direct__detect_garbage__detect_bg_info_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___transform_hlds__ctgc__structure_reuse__direct__detect_garbage__detect_bg_info_0_0_i3);
	}
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
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
	MR_sv(8) = MR_tfield(0, MR_tempr5, 4);
	MR_sv(7) = MR_tfield(0, MR_tempr5, 3);
	MR_sv(6) = MR_tfield(0, MR_tempr5, 2);
	MR_sv(5) = MR_tfield(0, MR_tempr5, 1);
	MR_tempr6 = MR_sv(1);
	MR_sv(4) = MR_tfield(0, MR_tempr6, 4);
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
	MR_np_call_localret_ent(__Compare___hlds__hlds_module__module_info_0_0,
		__Compare___transform_hlds__ctgc__structure_reuse__direct__detect_garbage__detect_bg_info_0_0_i5);
MR_def_label(__Compare___transform_hlds__ctgc__structure_reuse__direct__detect_garbage__detect_bg_info_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___transform_hlds__ctgc__structure_reuse__direct__detect_garbage__detect_bg_info_0_0_i45);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(__Compare___hlds__hlds_pred__pred_info_0_0,
		__Compare___transform_hlds__ctgc__structure_reuse__direct__detect_garbage__detect_bg_info_0_0_i9);
MR_def_label(__Compare___transform_hlds__ctgc__structure_reuse__direct__detect_garbage__detect_bg_info_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___transform_hlds__ctgc__structure_reuse__direct__detect_garbage__detect_bg_info_0_0_i45);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(6);
	MR_np_call_localret_ent(__Compare___hlds__hlds_pred__proc_info_0_0,
		__Compare___transform_hlds__ctgc__structure_reuse__direct__detect_garbage__detect_bg_info_0_0_i13);
MR_def_label(__Compare___transform_hlds__ctgc__structure_reuse__direct__detect_garbage__detect_bg_info_0_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___transform_hlds__ctgc__structure_reuse__direct__detect_garbage__detect_bg_info_0_0_i45);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__ctgc__structure_sharing__domain, sharing_as_and_status);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(7);
	MR_np_call_localret_ent(__Compare___tree234__tree234_2_0,
		__Compare___transform_hlds__ctgc__structure_reuse__direct__detect_garbage__detect_bg_info_0_0_i17);
MR_def_label(__Compare___transform_hlds__ctgc__structure_reuse__direct__detect_garbage__detect_bg_info_0_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___transform_hlds__ctgc__structure_reuse__direct__detect_garbage__detect_bg_info_0_0_i45);
	}
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(8);
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
MR_def_label(__Compare___transform_hlds__ctgc__structure_reuse__direct__detect_garbage__detect_bg_info_0_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(9);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__ctgc__structure_reuse__direct__detect_garbage_module9)
	MR_init_entry1(fn__transform_hlds__ctgc__structure_reuse__direct__detect_garbage__IntroducedFrom__func__determine_dead_deconstructions_2__134__1_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__transform_hlds__ctgc__structure_reuse__direct__detect_garbage__IntroducedFrom__func__determine_dead_deconstructions_2__134__1_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__func__determine_dead_deconstructions_2__134__1'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__transform_hlds__ctgc__structure_reuse__direct__detect_garbage__IntroducedFrom__func__determine_dead_deconstructions_2__134__1_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(0, MR_r1, 2);
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
	transform_hlds__ctgc__structure_reuse__direct__detect_garbage_module9();
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
#ifdef MR_THREADSCOPE
void mercury__transform_hlds__ctgc__structure_reuse__direct__detect_garbage__init_threadscope_string_table(void);
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

#ifdef MR_THREADSCOPE

void mercury__transform_hlds__ctgc__structure_reuse__direct__detect_garbage__init_threadscope_string_table(void)
{
}

#endif

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;
