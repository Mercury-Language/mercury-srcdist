/*
** Automatically generated from `smm_common.m'
** by the Mercury compiler,
** version rotd-2011-09-23, configured for x86_64-unknown-linux-gnu.
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
INIT mercury__transform_hlds__smm_common__init
ENDINIT
*/

#define MR_ALLOW_RESET
#include "mercury_imp.h"
#line 526 "../library/io.int"
#include "io.mh"

#line 28 "transform_hlds.smm_common.c"
#line 536 "../library/io.int"
#include "string.mh"

#line 32 "transform_hlds.smm_common.c"
#line 31 "../library/bitmap.int2"
#include "bitmap.mh"

#line 36 "transform_hlds.smm_common.c"
#line 30 "../library/time.int2"
#include "time.mh"

#line 40 "transform_hlds.smm_common.c"
#line 33 "../library/array.int2"
#include "array.mh"

#line 44 "transform_hlds.smm_common.c"
#line 39 "../mdbcomp/mdbcomp.rtti_access.int2"
#include "mdbcomp.rtti_access.mh"

#line 48 "transform_hlds.smm_common.c"
#line 49 "transform_hlds.smm_common.c"
#include "transform_hlds.smm_common.mh"

#line 52 "transform_hlds.smm_common.c"
#line 53 "transform_hlds.smm_common.c"
#ifndef TRANSFORM_HLDS__SMM_COMMON_DECL_GUARD
#define TRANSFORM_HLDS__SMM_COMMON_DECL_GUARD

#line 57 "transform_hlds.smm_common.c"
#line 58 "transform_hlds.smm_common.c"

#endif
#line 61 "transform_hlds.smm_common.c"

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
};
MR_STATIC_LINKAGE const struct mercury_type_1 mercury_common_1[];

struct mercury_type_2 {
	MR_Word * f1;
	MR_Word * f2;
	MR_Integer f3;
	MR_Word * f4;
	MR_Word * f5;
};
MR_STATIC_LINKAGE const struct mercury_type_2 mercury_common_2[];

extern const MR_TypeCtorInfo_Struct
	mercury_data_transform_hlds__smm_common__type_ctor_info_program_point_0;
MR_decl_label6(transform_hlds__smm_common__check_type_of_node_3_0, 29,6,8,5,2,1)
MR_decl_label3(transform_hlds__smm_common__dump_program_point_3_0, 2,3,4)
MR_decl_label4(transform_hlds__smm_common__proc_not_defined_in_module_2_0, 2,3,4,1)
MR_decl_label6(transform_hlds__smm_common__some_are_special_preds_2_0, 2,4,8,11,5,1)
MR_decl_label2(fn__transform_hlds__smm_common__program_point_init_1_0, 2,3)
MR_decl_label3(__Unify___transform_hlds__smm_common__program_point_0_0, 4,8,1)
MR_decl_label4(__Compare___transform_hlds__smm_common__program_point_0_0, 3,2,5,21)
MR_def_extern_entry(transform_hlds__smm_common__check_type_of_node_3_0)
MR_def_extern_entry(transform_hlds__smm_common__some_are_special_preds_2_0)
MR_def_extern_entry(fn__transform_hlds__smm_common__program_point_init_1_0)
MR_def_extern_entry(transform_hlds__smm_common__dump_program_point_3_0)
MR_decl_static(transform_hlds__smm_common__proc_not_defined_in_module_2_0)
MR_def_extern_entry(__Unify___transform_hlds__smm_common__program_point_0_0)
MR_def_extern_entry(__Compare___transform_hlds__smm_common__program_point_0_0)
MR_decl_static(transform_hlds__smm_common__IntroducedFrom__pred__some_are_special_preds__115__1_2_0)

extern const MR_TypeCtorInfo_Struct mercury_data_pair__type_ctor_info_pair_2;
extern const MR_TypeCtorInfo_Struct mercury_data_mdbcomp__prim_data__type_ctor_info_special_pred_id_0;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_type_ctor_0;
static const struct mercury_type_0 mercury_common_0[1] =
{
{
{
MR_CTOR_ADDR(pair, pair, 2),
MR_CTOR0_ADDR(mdbcomp__prim_data, special_pred_id),
MR_CTOR0_ADDR(parse_tree__prog_data, type_ctor)
}
},
};

extern const MR_TypeCtorInfo_Struct mercury_data_list__type_ctor_info_list_1;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;
static const struct mercury_type_1 mercury_common_1[1] =
{
{
{
MR_LIST_CTOR_ADDR,
MR_INT_CTOR_ADDR
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__smm_common__some_are_special_preds_2_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_pred_proc_id_0;
static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__smm_common__some_are_special_preds_2_0_2;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_module__type_ctor_info_module_info_0;
static const struct mercury_type_2 mercury_common_2[2] =
{
{
(MR_Word *) &mercury_data__closure_layout__transform_hlds__smm_common__some_are_special_preds_2_0_1,
(MR_Word *) (MR_Integer) 0,
2,
MR_COMMON(1,0),
MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id)
},
{
(MR_Word *) &mercury_data__closure_layout__transform_hlds__smm_common__some_are_special_preds_2_0_2,
(MR_Word *) (MR_Integer) 0,
2,
MR_CTOR0_ADDR(hlds__hlds_module, module_info),
MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id)
},
};
extern const MR_TypeCtorInfo_Struct mercury_data_term__type_ctor_info_context_0;
extern const MR_TypeCtorInfo_Struct mercury_data_mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0;
extern const MR_TypeCtorInfo_Struct mercury_data_term__type_ctor_info_context_0;
extern const MR_TypeCtorInfo_Struct mercury_data_mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0;

const MR_PseudoTypeInfo mercury_data_transform_hlds__smm_common__field_types_program_point_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_term__type_ctor_info_context_0,
	(MR_PseudoTypeInfo) &mercury_data_mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0
};

const MR_ConstString mercury_data_transform_hlds__smm_common__field_names_program_point_0_0[] = {
	"pp_context",
	"pp_id"
};

static const MR_DuFunctorDesc mercury_data_transform_hlds__smm_common__du_functor_desc_program_point_0_0 = {
	"pp",
	2,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_transform_hlds__smm_common__field_types_program_point_0_0,
	mercury_data_transform_hlds__smm_common__field_names_program_point_0_0,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_transform_hlds__smm_common__du_stag_ordered_program_point_0_0[] = {
	&mercury_data_transform_hlds__smm_common__du_functor_desc_program_point_0_0

};

const MR_DuPtagLayout mercury_data_transform_hlds__smm_common__du_ptag_ordered_program_point_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_transform_hlds__smm_common__du_stag_ordered_program_point_0_0 }

};

const MR_DuFunctorDescPtr mercury_data_transform_hlds__smm_common__du_name_ordered_program_point_0[] = {
	&mercury_data_transform_hlds__smm_common__du_functor_desc_program_point_0_0
};

const MR_Integer mercury_data_transform_hlds__smm_common__functor_number_map_program_point_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_transform_hlds__smm_common__type_ctor_info_program_point_0 = {
	0,
	15,
	1,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___transform_hlds__smm_common__program_point_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___transform_hlds__smm_common__program_point_0_0)),
	"transform_hlds.smm_common",
	"program_point",
	{ (void *)mercury_data_transform_hlds__smm_common__du_name_ordered_program_point_0 },
	{ (void *)mercury_data_transform_hlds__smm_common__du_ptag_ordered_program_point_0 },
	1,
	4,
	mercury_data_transform_hlds__smm_common__functor_number_map_program_point_0
};


static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__smm_common__some_are_special_preds_2_0_2 = {
{
MR_PREDICATE,
"transform_hlds.smm_common",
"transform_hlds.smm_common",
"proc_not_defined_in_module",
2,
0
},
"transform_hlds.smm_common",
"smm_common.m",
123,
"17"
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__smm_common__some_are_special_preds_2_0_1 = {
{
MR_PREDICATE,
"transform_hlds.smm_common",
"transform_hlds.smm_common",
"lambda_smm_common_m_115",
2,
0
},
"transform_hlds.smm_common",
"smm_common.m",
115,
"8"
};


MR_decl_entry(check_hlds__type_util__get_cons_id_non_existential_arg_types_4_0);
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_mer_type_0;
MR_decl_entry(list__index1_3_0);

MR_BEGIN_MODULE(transform_hlds__smm_common_module0)
	MR_init_entry1(transform_hlds__smm_common__check_type_of_node_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__smm_common__check_type_of_node_3_0);
	MR_init_label6(transform_hlds__smm_common__check_type_of_node_3_0,29,6,8,5,2,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'check_type_of_node'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__transform_hlds__smm_common__check_type_of_node_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
MR_def_label(transform_hlds__smm_common__check_type_of_node_3_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r3,0,0)) {
		MR_GOTO_LAB(transform_hlds__smm_common__check_type_of_node_3_0_i2);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r3;
	MR_tempr1 = MR_tfield(1, MR_tempr2, 0);
	MR_r4 = MR_tempr1;
	if (MR_PTAG_TESTR(MR_tempr1,0)) {
		MR_GOTO_LAB(transform_hlds__smm_common__check_type_of_node_3_0_i5);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_tfield(1, MR_tempr2, 1);
	MR_sv(3) = MR_tfield(0, MR_tempr1, 1);
	MR_r3 = MR_tfield(0, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(check_hlds__type_util__get_cons_id_non_existential_arg_types_4_0,
		transform_hlds__smm_common__check_type_of_node_3_0_i6);
MR_def_label(transform_hlds__smm_common__check_type_of_node_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__smm_common__check_type_of_node_3_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r3 = MR_sv(3);
	MR_np_call_localret_ent(list__index1_3_0,
		transform_hlds__smm_common__check_type_of_node_3_0_i8);
MR_def_label(transform_hlds__smm_common__check_type_of_node_3_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__smm_common__check_type_of_node_3_0_i1);
	}
	MR_r1 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_succip_word = MR_sv(4);
	MR_GOTO_LAB(transform_hlds__smm_common__check_type_of_node_3_0_i29);
MR_def_label(transform_hlds__smm_common__check_type_of_node_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_tfield(1, MR_r3, 1);
	MR_r2 = MR_tfield(1, MR_r4, 0);
	MR_succip_word = MR_sv(4);
	MR_GOTO_LAB(transform_hlds__smm_common__check_type_of_node_3_0_i29);
MR_def_label(transform_hlds__smm_common__check_type_of_node_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(4);
MR_def_label(transform_hlds__smm_common__check_type_of_node_3_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(4);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__hlds_module__module_info_get_special_pred_map_2_0);
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_pred_id_0;
MR_decl_entry(map__values_2_0);
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_pred_proc_id_0;
MR_decl_entry(list__filter_3_0);

MR_BEGIN_MODULE(transform_hlds__smm_common_module1)
	MR_init_entry1(transform_hlds__smm_common__some_are_special_preds_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__smm_common__some_are_special_preds_2_0);
	MR_init_label6(transform_hlds__smm_common__some_are_special_preds_2_0,2,4,8,11,5,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'some_are_special_preds'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__transform_hlds__smm_common__some_are_special_preds_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_special_pred_map_2_0,
		transform_hlds__smm_common__some_are_special_preds_2_0_i2);
MR_def_label(transform_hlds__smm_common__some_are_special_preds_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_id);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(map__values_2_0,
		transform_hlds__smm_common__some_are_special_preds_2_0_i4);
MR_def_label(transform_hlds__smm_common__some_are_special_preds_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 4);
	MR_tfield(0, MR_r2, 0) = (MR_Word) MR_COMMON(2,0);
	MR_tfield(0, MR_r2, 1) = (MR_Word) MR_ENTRY_AP(transform_hlds__smm_common__IntroducedFrom__pred__some_are_special_preds__115__1_2_0);
	MR_tfield(0, MR_r2, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_r2, 3) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id);
	MR_r3 = MR_sv(1);
	MR_np_call_localret_ent(list__filter_3_0,
		transform_hlds__smm_common__some_are_special_preds_2_0_i8);
MR_def_label(transform_hlds__smm_common__some_are_special_preds_2_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(transform_hlds__smm_common__some_are_special_preds_2_0_i5);
	}
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 4);
	MR_tfield(0, MR_r2, 0) = (MR_Word) MR_COMMON(2,1);
	MR_tfield(0, MR_r2, 1) = (MR_Word) MR_ENTRY_AP(transform_hlds__smm_common__proc_not_defined_in_module_2_0);
	MR_tfield(0, MR_r2, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_r2, 3) = MR_sv(2);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id);
	MR_r3 = MR_sv(1);
	MR_np_call_localret_ent(list__filter_3_0,
		transform_hlds__smm_common__some_are_special_preds_2_0_i11);
MR_def_label(transform_hlds__smm_common__some_are_special_preds_2_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(transform_hlds__smm_common__some_are_special_preds_2_0_i1);
	}
MR_def_label(transform_hlds__smm_common__some_are_special_preds_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(transform_hlds__smm_common__some_are_special_preds_2_0,1)
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

MR_decl_entry(fn__hlds__hlds_goal__goal_info_get_context_1_0);
MR_decl_entry(fn__hlds__hlds_goal__goal_info_get_reverse_goal_path_1_0);

MR_BEGIN_MODULE(transform_hlds__smm_common_module2)
	MR_init_entry1(fn__transform_hlds__smm_common__program_point_init_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__transform_hlds__smm_common__program_point_init_1_0);
	MR_init_label2(fn__transform_hlds__smm_common__program_point_init_1_0,2,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'program_point_init'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__transform_hlds__smm_common__program_point_init_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_context_1_0,
		fn__transform_hlds__smm_common__program_point_init_1_0_i2);
MR_def_label(fn__transform_hlds__smm_common__program_point_init_1_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_reverse_goal_path_1_0,
		fn__transform_hlds__smm_common__program_point_init_1_0_i3);
MR_def_label(fn__transform_hlds__smm_common__program_point_init_1_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 0) = MR_sv(1);
	MR_tfield(0, MR_r2, 1) = MR_r1;
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(2);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(parse_tree__prog_out__write_context_3_0);
MR_decl_entry(io__write_string_3_0);
MR_decl_entry(fn__mdbcomp__goal_path__rev_goal_path_to_string_1_0);

MR_BEGIN_MODULE(transform_hlds__smm_common_module3)
	MR_init_entry1(transform_hlds__smm_common__dump_program_point_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__smm_common__dump_program_point_3_0);
	MR_init_label3(transform_hlds__smm_common__dump_program_point_3_0,2,3,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'dump_program_point'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__transform_hlds__smm_common__dump_program_point_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_tfield(0, MR_r1, 1);
	MR_r1 = MR_tfield(0, MR_r1, 0);
	MR_np_call_localret_ent(parse_tree__prog_out__write_context_3_0,
		transform_hlds__smm_common__dump_program_point_3_0_i2);
MR_def_label(transform_hlds__smm_common__dump_program_point_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("--", 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		transform_hlds__smm_common__dump_program_point_3_0_i3);
MR_def_label(transform_hlds__smm_common__dump_program_point_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(fn__mdbcomp__goal_path__rev_goal_path_to_string_1_0,
		transform_hlds__smm_common__dump_program_point_3_0_i4);
MR_def_label(transform_hlds__smm_common__dump_program_point_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(io__write_string_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__hlds_module__module_info_pred_info_3_0);
MR_decl_entry(hlds__hlds_pred__pred_info_get_import_status_2_0);
MR_decl_entry(fn__hlds__hlds_pred__status_defined_in_this_module_1_0);

MR_BEGIN_MODULE(transform_hlds__smm_common_module4)
	MR_init_entry1(transform_hlds__smm_common__proc_not_defined_in_module_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__smm_common__proc_not_defined_in_module_2_0);
	MR_init_label4(transform_hlds__smm_common__proc_not_defined_in_module_2_0,2,3,4,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'proc_not_defined_in_module'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__smm_common__proc_not_defined_in_module_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_r2 = MR_tfield(0, MR_r2, 0);
	MR_np_call_localret_ent(hlds__hlds_module__module_info_pred_info_3_0,
		transform_hlds__smm_common__proc_not_defined_in_module_2_0_i2);
MR_def_label(transform_hlds__smm_common__proc_not_defined_in_module_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_import_status_2_0,
		transform_hlds__smm_common__proc_not_defined_in_module_2_0_i3);
MR_def_label(transform_hlds__smm_common__proc_not_defined_in_module_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__hlds__hlds_pred__status_defined_in_this_module_1_0,
		transform_hlds__smm_common__proc_not_defined_in_module_2_0_i4);
MR_def_label(transform_hlds__smm_common__proc_not_defined_in_module_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(transform_hlds__smm_common__proc_not_defined_in_module_2_0_i1);
	}
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(transform_hlds__smm_common__proc_not_defined_in_module_2_0,1)
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

MR_decl_entry(__Unify___term__context_0_0);
MR_decl_entry(__Unify___mdbcomp__goal_path__reverse_goal_path_0_0);

MR_BEGIN_MODULE(transform_hlds__smm_common_module5)
	MR_init_entry1(__Unify___transform_hlds__smm_common__program_point_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___transform_hlds__smm_common__program_point_0_0);
	MR_init_label3(__Unify___transform_hlds__smm_common__program_point_0_0,4,8,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___transform_hlds__smm_common__program_point_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___transform_hlds__smm_common__program_point_0_0_i8);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_tfield(0, MR_tempr1, 1);
	MR_tempr2 = MR_sv(2);
	MR_sv(2) = MR_tfield(0, MR_tempr2, 1);
	MR_r1 = MR_tfield(0, MR_tempr1, 0);
	MR_r2 = MR_tfield(0, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(__Unify___term__context_0_0,
		__Unify___transform_hlds__smm_common__program_point_0_0_i4);
MR_def_label(__Unify___transform_hlds__smm_common__program_point_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___transform_hlds__smm_common__program_point_0_0_i1);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Unify___mdbcomp__goal_path__reverse_goal_path_0_0);
MR_def_label(__Unify___transform_hlds__smm_common__program_point_0_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___transform_hlds__smm_common__program_point_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Compare___term__context_0_0);
MR_decl_entry(__Compare___mdbcomp__goal_path__reverse_goal_path_0_0);

MR_BEGIN_MODULE(transform_hlds__smm_common_module6)
	MR_init_entry1(__Compare___transform_hlds__smm_common__program_point_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___transform_hlds__smm_common__program_point_0_0);
	MR_init_label4(__Compare___transform_hlds__smm_common__program_point_0_0,3,2,5,21)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___transform_hlds__smm_common__program_point_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___transform_hlds__smm_common__program_point_0_0_i3);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___transform_hlds__smm_common__program_point_0_0_i2);
MR_def_label(__Compare___transform_hlds__smm_common__program_point_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___transform_hlds__smm_common__program_point_0_0,2)
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
	MR_np_call_localret_ent(__Compare___term__context_0_0,
		__Compare___transform_hlds__smm_common__program_point_0_0_i5);
MR_def_label(__Compare___transform_hlds__smm_common__program_point_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___transform_hlds__smm_common__program_point_0_0_i21);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Compare___mdbcomp__goal_path__reverse_goal_path_0_0);
MR_def_label(__Compare___transform_hlds__smm_common__program_point_0_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(list__member_2_0);

MR_BEGIN_MODULE(transform_hlds__smm_common_module7)
	MR_init_entry1(transform_hlds__smm_common__IntroducedFrom__pred__some_are_special_preds__115__1_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__smm_common__IntroducedFrom__pred__some_are_special_preds__115__1_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__pred__some_are_special_preds__115__1'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__smm_common__IntroducedFrom__pred__some_are_special_preds__115__1_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_id);
	MR_r2 = MR_tfield(0, MR_r2, 0);
	MR_r3 = MR_tempr1;
	MR_np_tailcall_ent(list__member_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

static void mercury__transform_hlds__smm_common_maybe_bunch_0(void)
{
	transform_hlds__smm_common_module0();
	transform_hlds__smm_common_module1();
	transform_hlds__smm_common_module2();
	transform_hlds__smm_common_module3();
	transform_hlds__smm_common_module4();
	transform_hlds__smm_common_module5();
	transform_hlds__smm_common_module6();
	transform_hlds__smm_common_module7();
}

/* suppress gcc -Wmissing-decls warnings */
void mercury__transform_hlds__smm_common__init(void);
void mercury__transform_hlds__smm_common__init_type_tables(void);
void mercury__transform_hlds__smm_common__init_debugger(void);
#ifdef MR_DEEP_PROFILING
void mercury__transform_hlds__smm_common__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp);
#endif
#ifdef MR_RECORD_TERM_SIZES
void mercury__transform_hlds__smm_common__init_complexity_procs(void);
#endif
#ifdef MR_THREADSCOPE
void mercury__transform_hlds__smm_common__init_threadscope_string_table(void);
#endif

void mercury__transform_hlds__smm_common__init(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	mercury__transform_hlds__smm_common_maybe_bunch_0();
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_transform_hlds__smm_common__type_ctor_info_program_point_0,
		transform_hlds__smm_common__program_point_0_0);
	mercury__transform_hlds__smm_common__init_debugger();
}

void mercury__transform_hlds__smm_common__init_type_tables(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	{
		MR_register_type_ctor_info(
		&mercury_data_transform_hlds__smm_common__type_ctor_info_program_point_0);
	}
}


void mercury__transform_hlds__smm_common__init_debugger(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}

#ifdef MR_DEEP_PROFILING

void mercury__transform_hlds__smm_common__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp)
{
	MR_write_out_module_proc_reps_start(procrep_fp, &mercury_data__module_common_layout__transform_hlds__smm_common);
	MR_write_out_module_proc_reps_end(procrep_fp);
}

#endif

#ifdef MR_RECORD_TERM_SIZES

void mercury__transform_hlds__smm_common__init_complexity_procs(void)
{
}

#endif

#ifdef MR_THREADSCOPE

void mercury__transform_hlds__smm_common__init_threadscope_string_table(void)
{
}

#endif

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;
