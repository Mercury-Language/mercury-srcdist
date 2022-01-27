/*
** Automatically generated from `dense_switch.m'
** by the Mercury compiler,
** version DEV, configured for x86_64-apple-darwin12.2.1.
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
INIT mercury__ll_backend__dense_switch__init
ENDINIT
*/

#define MR_ALLOW_RESET
#include "mercury_imp.h"
#line 140 "../library/io.int2"
#include "io.mh"

#line 28 "ll_backend.dense_switch.c"
#line 150 "../library/io.int2"
#include "time.mh"

#line 32 "ll_backend.dense_switch.c"
#line 151 "../library/io.int2"
#include "string.mh"

#line 36 "ll_backend.dense_switch.c"
#line 33 "../library/array.int2"
#include "array.mh"

#line 40 "ll_backend.dense_switch.c"
#line 31 "../library/bitmap.int2"
#include "bitmap.mh"

#line 44 "ll_backend.dense_switch.c"
#line 39 "../mdbcomp/mdbcomp.rtti_access.int2"
#include "mdbcomp.rtti_access.mh"

#line 48 "ll_backend.dense_switch.c"
#line 49 "ll_backend.dense_switch.c"
#include "ll_backend.dense_switch.mh"

#line 52 "ll_backend.dense_switch.c"
#line 53 "ll_backend.dense_switch.c"
#ifndef LL_BACKEND__DENSE_SWITCH_DECL_GUARD
#define LL_BACKEND__DENSE_SWITCH_DECL_GUARD

#line 57 "ll_backend.dense_switch.c"
#line 58 "ll_backend.dense_switch.c"

#endif
#line 61 "ll_backend.dense_switch.c"

#ifdef _MSC_VER
#define MR_STATIC_LINKAGE extern
#else
#define MR_STATIC_LINKAGE static
#endif


#ifdef MR_MSVC
#pragma pack(push, MR_BYTES_PER_WORD)
#endif
struct mercury_type_0 {
	MR_Word * f1[2];
};
#ifdef MR_MSVC
#pragma pack(pop)
#endif
MR_STATIC_LINKAGE const struct mercury_type_0 mercury_common_0[];


#ifdef MR_MSVC
#pragma pack(push, MR_BYTES_PER_WORD)
#endif
struct mercury_type_1 {
	MR_Word * f1[3];
};
#ifdef MR_MSVC
#pragma pack(pop)
#endif
MR_STATIC_LINKAGE const struct mercury_type_1 mercury_common_1[];


#ifdef MR_MSVC
#pragma pack(push, MR_BYTES_PER_WORD)
#endif
struct mercury_type_2 {
	MR_Word * f1;
	MR_Word * f2;
	MR_Integer f3;
	MR_Word * f4;
	MR_Word * f5;
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
	MR_Word * f3[12];
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
	MR_Word * f3[3];
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


#ifdef MR_MSVC
#pragma pack(push, MR_BYTES_PER_WORD)
#endif
struct mercury_type_6 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[4];
};
#ifdef MR_MSVC
#pragma pack(pop)
#endif
MR_STATIC_LINKAGE const struct mercury_type_6 mercury_common_6[];

extern const MR_TypeCtorInfo_Struct
	mercury_data_ll_backend__dense_switch__type_ctor_info_dense_switch_info_0;
MR_decl_label10(ll_backend__dense_switch__generate_dense_case_12_0, 2,4,5,6,7,9,12,13,14,15)
MR_decl_label8(ll_backend__dense_switch__generate_dense_case_12_0, 19,20,21,22,23,24,25,26)
MR_decl_label10(ll_backend__dense_switch__generate_dense_jump_table_8_0, 4,2,9,8,11,6,15,14,20,19)
MR_decl_label1(ll_backend__dense_switch__generate_dense_jump_table_8_0, 22)
MR_decl_label10(ll_backend__dense_switch__generate_dense_switch_12_0, 2,7,13,9,15,8,17,18,19,20)
MR_decl_label10(ll_backend__dense_switch__generate_dense_switch_12_0, 21,24,27,26,32,33,34,25,37,38)
MR_decl_label3(ll_backend__dense_switch__generate_dense_switch_12_0, 39,40,41)
MR_decl_label1(ll_backend__dense_switch__record_dense_label_for_cons_tag_4_0, 2)
MR_decl_label9(ll_backend__dense_switch__tagged_case_list_is_dense_switch_9_0, 2,3,6,7,9,11,8,5,1)
MR_decl_label2(__Unify___ll_backend__dense_switch__dense_switch_info_0_0, 4,1)
MR_decl_label5(__Compare___ll_backend__dense_switch__dense_switch_info_0_0, 3,2,5,9,29)
MR_def_extern_entry(ll_backend__dense_switch__tagged_case_list_is_dense_switch_9_0)
MR_decl_static(ll_backend__dense_switch__generate_dense_jump_table_8_0)
MR_def_extern_entry(ll_backend__dense_switch__generate_dense_switch_12_0)
MR_decl_static(ll_backend__dense_switch__record_dense_label_for_cons_tag_4_0)
MR_decl_static(ll_backend__dense_switch__generate_dense_case_12_0)
MR_def_extern_entry(__Unify___ll_backend__dense_switch__dense_switch_info_0_0)
MR_def_extern_entry(__Compare___ll_backend__dense_switch__dense_switch_info_0_0)
MR_decl_static(ll_backend__dense_switch__IntroducedFrom__pred__generate_dense_jump_table__244__1_2_0)

extern const MR_TypeCtorInfo_Struct mercury_data_cord__type_ctor_info_cord_1;
extern const MR_TypeCtorInfo_Struct mercury_data_ll_backend__llds__type_ctor_info_instruction_0;
extern const MR_TypeCtorInfo_Struct mercury_data_maybe__type_ctor_info_maybe_1;
extern const MR_TypeCtorInfo_Struct mercury_data_ll_backend__code_info__type_ctor_info_branch_end_info_0;
extern const MR_TypeCtorInfo_Struct mercury_data_list__type_ctor_info_list_1;
extern const MR_TypeCtorInfo_Struct mercury_data_ll_backend__llds__type_ctor_info_instruction_0;
extern const MR_TypeCtorInfo_Struct mercury_data_ll_backend__code_info__type_ctor_info_branch_end_info_0;
static const struct mercury_type_0 mercury_common_0[6] =
{
{
{
MR_CTOR1_ADDR(cord, cord),
MR_CTOR0_ADDR(ll_backend__llds, instruction)
}
},
{
{
MR_CTOR1_ADDR(maybe, maybe),
MR_CTOR0_ADDR(ll_backend__code_info, branch_end_info)
}
},
{
{
MR_LIST_CTOR_ADDR,
MR_TAG_COMMON(0,1,1)
}
},
{
{
MR_LIST_CTOR_ADDR,
MR_COMMON(1,2)
}
},
{
{
MR_CTOR1_ADDR(cord, cord),
MR_CTOR0_ADDR(ll_backend__llds, instruction)
}
},
{
{
MR_CTOR1_ADDR(maybe, maybe),
MR_CTOR0_ADDR(ll_backend__code_info, branch_end_info)
}
},
};

extern const MR_TypeCtorInfo_Struct mercury_data_tree234__type_ctor_info_tree234_2;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;
extern const MR_TypeCtorInfo_Struct mercury_data_ll_backend__llds__type_ctor_info_label_0;
extern const MR_TypeCtorInfo_Struct mercury_data_pair__type_ctor_info_pair_2;
extern const MR_TypeCtorInfo_Struct mercury_data_pair__type_ctor_info_pair_2;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;
extern const MR_TypeCtorInfo_Struct mercury_data_ll_backend__llds__type_ctor_info_label_0;
static const struct mercury_type_1 mercury_common_1[4] =
{
{
{
MR_CTOR_ADDR(tree234, tree234, 2),
MR_INT_CTOR_ADDR,
MR_CTOR0_ADDR(ll_backend__llds, label)
}
},
{
{
MR_CTOR_ADDR(pair, pair, 2),
MR_INT_CTOR_ADDR,
MR_CTOR0_ADDR(ll_backend__llds, label)
}
},
{
{
MR_CTOR_ADDR(pair, pair, 2),
MR_INT_CTOR_ADDR,
MR_CTOR0_ADDR(ll_backend__llds, label)
}
},
{
{
MR_CTOR_ADDR(tree234, tree234, 2),
MR_INT_CTOR_ADDR,
MR_CTOR0_ADDR(ll_backend__llds, label)
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__ll_backend__dense_switch__generate_dense_jump_table_8_0_1;
static const struct mercury_type_2 mercury_common_2[1] =
{
{
(MR_Word *) &mercury_data__closure_layout__ll_backend__dense_switch__generate_dense_jump_table_8_0_1,
(MR_Word *) (MR_Integer) 0,
2,
MR_COMMON(0,3),
MR_COMMON(0,3)
},
};

static const MR_UserClosureId
mercury_data__closure_layout__ll_backend__dense_switch__generate_dense_switch_12_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_string_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__code_model__type_ctor_info_code_model_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_goal__type_ctor_info_hlds_goal_info_0;
extern const MR_TypeCtorInfo_Struct mercury_data_ll_backend__llds__type_ctor_info_label_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_goal__type_ctor_info_tagged_case_0;
extern const MR_TypeCtorInfo_Struct mercury_data_ll_backend__code_info__type_ctor_info_code_info_0;
static const MR_UserClosureId
mercury_data__closure_layout__ll_backend__dense_switch__generate_dense_switch_12_0_2;
static const struct mercury_type_3 mercury_common_3[2] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__ll_backend__dense_switch__generate_dense_switch_12_0_1,
(MR_Word *) (MR_Integer) 0
},
12,
{
MR_STRING_CTOR_ADDR,
MR_CTOR0_ADDR(hlds__code_model, code_model),
MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal_info),
MR_CTOR0_ADDR(ll_backend__llds, label),
MR_CTOR0_ADDR(hlds__hlds_goal, tagged_case),
MR_COMMON(0,4),
MR_COMMON(1,3),
MR_COMMON(1,3),
MR_COMMON(0,5),
MR_COMMON(0,5),
MR_CTOR0_ADDR(ll_backend__code_info, code_info),
MR_CTOR0_ADDR(ll_backend__code_info, code_info)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__ll_backend__dense_switch__generate_dense_switch_12_0_2,
(MR_Word *) (MR_Integer) 0
},
12,
{
MR_STRING_CTOR_ADDR,
MR_CTOR0_ADDR(hlds__code_model, code_model),
MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal_info),
MR_CTOR0_ADDR(ll_backend__llds, label),
MR_CTOR0_ADDR(hlds__hlds_goal, tagged_case),
MR_COMMON(0,4),
MR_COMMON(1,3),
MR_COMMON(1,3),
MR_COMMON(0,5),
MR_COMMON(0,5),
MR_CTOR0_ADDR(ll_backend__code_info, code_info),
MR_CTOR0_ADDR(ll_backend__code_info, code_info)
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__ll_backend__dense_switch__generate_dense_case_12_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_data__type_ctor_info_tagged_cons_id_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_data__type_ctor_info_cons_tag_0;
static const struct mercury_type_4 mercury_common_4[1] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__ll_backend__dense_switch__generate_dense_case_12_0_1,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_CTOR0_ADDR(hlds__hlds_data, tagged_cons_id),
MR_STRING_CTOR_ADDR,
MR_CTOR0_ADDR(hlds__hlds_data, cons_tag)
}
},
};

MR_decl_entry(hlds__hlds_out__hlds_out_goal__project_cons_name_and_tag_3_0);
static const struct mercury_type_5 mercury_common_5[1] =
{
{
MR_COMMON(4,0),
MR_ENTRY_AP(hlds__hlds_out__hlds_out_goal__project_cons_name_and_tag_3_0),
0
},
};

static const MR_UserClosureId
mercury_data__closure_layout__ll_backend__dense_switch__generate_dense_case_12_0_2;
static const struct mercury_type_6 mercury_common_6[1] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__ll_backend__dense_switch__generate_dense_case_12_0_2,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_CTOR0_ADDR(ll_backend__llds, label),
MR_CTOR0_ADDR(hlds__hlds_data, cons_tag),
MR_COMMON(1,3),
MR_COMMON(1,3)
}
},
};
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_can_fail_0;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_can_fail_0;

const MR_PseudoTypeInfo mercury_data_ll_backend__dense_switch__field_types_dense_switch_info_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_parse_tree__prog_data__type_ctor_info_can_fail_0
};

const MR_ConstString mercury_data_ll_backend__dense_switch__field_names_dense_switch_info_0_0[] = {
	"first_value",
	"last_value",
	"new_can_fail"
};

static const MR_DuFunctorDesc mercury_data_ll_backend__dense_switch__du_functor_desc_dense_switch_info_0_0 = {
	"dense_switch_info",
	3,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_ll_backend__dense_switch__field_types_dense_switch_info_0_0,
	mercury_data_ll_backend__dense_switch__field_names_dense_switch_info_0_0,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_ll_backend__dense_switch__du_stag_ordered_dense_switch_info_0_0[] = {
	&mercury_data_ll_backend__dense_switch__du_functor_desc_dense_switch_info_0_0

};

const MR_DuPtagLayout mercury_data_ll_backend__dense_switch__du_ptag_ordered_dense_switch_info_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_ll_backend__dense_switch__du_stag_ordered_dense_switch_info_0_0 }

};

const MR_DuFunctorDescPtr mercury_data_ll_backend__dense_switch__du_name_ordered_dense_switch_info_0[] = {
	&mercury_data_ll_backend__dense_switch__du_functor_desc_dense_switch_info_0_0
};

const MR_Integer mercury_data_ll_backend__dense_switch__functor_number_map_dense_switch_info_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_ll_backend__dense_switch__type_ctor_info_dense_switch_info_0 = {
	0,
	15,
	1,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___ll_backend__dense_switch__dense_switch_info_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___ll_backend__dense_switch__dense_switch_info_0_0)),
	"ll_backend.dense_switch",
	"dense_switch_info",
	{ (void *)mercury_data_ll_backend__dense_switch__du_name_ordered_dense_switch_info_0 },
	{ (void *)mercury_data_ll_backend__dense_switch__du_ptag_ordered_dense_switch_info_0 },
	1,
	4,
	mercury_data_ll_backend__dense_switch__functor_number_map_dense_switch_info_0
};


static const MR_UserClosureId
mercury_data__closure_layout__ll_backend__dense_switch__generate_dense_case_12_0_2 = {
{
MR_PREDICATE,
"ll_backend.dense_switch",
"ll_backend.dense_switch",
"record_dense_label_for_cons_tag",
4,
0
},
"ll_backend.dense_switch",
"dense_switch.m",
205,
"21"
};

static const MR_UserClosureId
mercury_data__closure_layout__ll_backend__dense_switch__generate_dense_case_12_0_1 = {
{
MR_PREDICATE,
"hlds.hlds_out.hlds_out_goal",
"hlds.hlds_out.hlds_out_goal",
"project_cons_name_and_tag",
3,
0
},
"ll_backend.dense_switch",
"dense_switch.m",
200,
"16"
};

static const MR_UserClosureId
mercury_data__closure_layout__ll_backend__dense_switch__generate_dense_switch_12_0_2 = {
{
MR_PREDICATE,
"ll_backend.dense_switch",
"ll_backend.dense_switch",
"generate_dense_case",
12,
0
},
"ll_backend.dense_switch",
"dense_switch.m",
152,
"36"
};

static const MR_UserClosureId
mercury_data__closure_layout__ll_backend__dense_switch__generate_dense_switch_12_0_1 = {
{
MR_PREDICATE,
"ll_backend.dense_switch",
"ll_backend.dense_switch",
"generate_dense_case",
12,
0
},
"ll_backend.dense_switch",
"dense_switch.m",
152,
"36"
};

static const MR_UserClosureId
mercury_data__closure_layout__ll_backend__dense_switch__generate_dense_jump_table_8_0_1 = {
{
MR_PREDICATE,
"ll_backend.dense_switch",
"ll_backend.dense_switch",
"lambda_dense_switch_m_244",
2,
0
},
"ll_backend.dense_switch",
"dense_switch.m",
244,
"13"
};


extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_goal__type_ctor_info_tagged_case_0;
MR_decl_entry(list__length_2_0);
MR_decl_entry(fn__backend_libs__switch_util__switch_density_2_0);
MR_decl_entry(ll_backend__code_info__get_module_info_2_0);
MR_decl_entry(fn__check_hlds__type_util__classify_type_2_0);
MR_decl_entry(backend_libs__switch_util__type_range_6_0);

MR_BEGIN_MODULE(ll_backend__dense_switch_module0)
	MR_init_entry1(ll_backend__dense_switch__tagged_case_list_is_dense_switch_9_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__dense_switch__tagged_case_list_is_dense_switch_9_0);
	MR_init_label9(ll_backend__dense_switch__tagged_case_list_is_dense_switch_9_0,2,3,6,7,9,11,8,5,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'tagged_case_list_is_dense_switch'/9 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__ll_backend__dense_switch__tagged_case_list_is_dense_switch_9_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	MR_sv(7) = MR_r1;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r4;
	MR_sv(3) = MR_r5;
	MR_sv(4) = MR_r6;
	MR_sv(5) = MR_r7;
	MR_sv(6) = MR_r8;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, tagged_case);
	MR_r2 = MR_r3;
	MR_np_call_localret_ent(list__length_2_0,
		ll_backend__dense_switch__tagged_case_list_is_dense_switch_9_0_i2);
MR_def_label(ll_backend__dense_switch__tagged_case_list_is_dense_switch_9_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_LE(MR_r1,2)) {
		MR_GOTO_LAB(ll_backend__dense_switch__tagged_case_list_is_dense_switch_9_0_i1);
	}
	MR_r1 = MR_sv(4);
	MR_r2 = (((MR_Integer) MR_sv(3) - (MR_Integer) MR_sv(2)) + (MR_Integer) 1);
	MR_np_call_localret_ent(fn__backend_libs__switch_util__switch_density_2_0,
		ll_backend__dense_switch__tagged_case_list_is_dense_switch_9_0_i3);
MR_def_label(ll_backend__dense_switch__tagged_case_list_is_dense_switch_9_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) MR_r1 <= (MR_Integer) MR_sv(5))) {
		MR_GOTO_LAB(ll_backend__dense_switch__tagged_case_list_is_dense_switch_9_0_i1);
	}
	if (MR_INT_NE(MR_sv(6),0)) {
		MR_GOTO_LAB(ll_backend__dense_switch__tagged_case_list_is_dense_switch_9_0_i5);
	}
	MR_r1 = MR_sv(7);
	MR_np_call_localret_ent(ll_backend__code_info__get_module_info_2_0,
		ll_backend__dense_switch__tagged_case_list_is_dense_switch_9_0_i6);
MR_def_label(ll_backend__dense_switch__tagged_case_list_is_dense_switch_9_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(fn__check_hlds__type_util__classify_type_2_0,
		ll_backend__dense_switch__tagged_case_list_is_dense_switch_9_0_i7);
MR_def_label(ll_backend__dense_switch__tagged_case_list_is_dense_switch_9_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(1);
	}
	MR_np_call_localret_ent(backend_libs__switch_util__type_range_6_0,
		ll_backend__dense_switch__tagged_case_list_is_dense_switch_9_0_i9);
MR_def_label(ll_backend__dense_switch__tagged_case_list_is_dense_switch_9_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__dense_switch__tagged_case_list_is_dense_switch_9_0_i8);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_sv(7) = MR_tempr1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__backend_libs__switch_util__switch_density_2_0,
		ll_backend__dense_switch__tagged_case_list_is_dense_switch_9_0_i11);
MR_def_label(ll_backend__dense_switch__tagged_case_list_is_dense_switch_9_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) MR_r1 <= (MR_Integer) MR_sv(5))) {
		MR_GOTO_LAB(ll_backend__dense_switch__tagged_case_list_is_dense_switch_9_0_i8);
	}
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 3);
	MR_tfield(0, MR_r2, 0) = (MR_Integer) 0;
	MR_tfield(0, MR_r2, 1) = ((MR_Integer) MR_sv(7) - (MR_Integer) 1);
	MR_tfield(0, MR_r2, 2) = (MR_Integer) 1;
	MR_succip_word = MR_sv(8);
	MR_decr_sp(8);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(ll_backend__dense_switch__tagged_case_list_is_dense_switch_9_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 3);
	MR_tfield(0, MR_r2, 0) = MR_sv(2);
	MR_tfield(0, MR_r2, 1) = MR_sv(3);
	MR_tfield(0, MR_r2, 2) = MR_sv(6);
	MR_succip_word = MR_sv(8);
	MR_decr_sp(8);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(ll_backend__dense_switch__tagged_case_list_is_dense_switch_9_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 3);
	MR_tfield(0, MR_r2, 0) = MR_sv(2);
	MR_tfield(0, MR_r2, 1) = MR_sv(3);
	MR_tfield(0, MR_r2, 2) = (MR_Integer) 1;
	MR_succip_word = MR_sv(8);
	MR_decr_sp(8);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(ll_backend__dense_switch__tagged_case_list_is_dense_switch_9_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(8);
	MR_decr_sp(8);
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(require__expect_4_0);
MR_decl_entry(ll_backend__code_info__get_next_label_3_0);

MR_BEGIN_MODULE(ll_backend__dense_switch_module1)
	MR_init_entry1(ll_backend__dense_switch__generate_dense_jump_table_8_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__dense_switch__generate_dense_jump_table_8_0);
	MR_init_label10(ll_backend__dense_switch__generate_dense_jump_table_8_0,4,2,9,8,11,6,15,14,20,19)
	MR_init_label1(ll_backend__dense_switch__generate_dense_jump_table_8_0,22)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'generate_dense_jump_table'/8 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__dense_switch__generate_dense_jump_table_8_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	if (((MR_Integer) MR_r1 <= (MR_Integer) MR_r2)) {
		MR_GOTO_LAB(ll_backend__dense_switch__generate_dense_jump_table_8_0_i2);
	}
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 5);
	MR_tfield(0, MR_r1, 0) = (MR_Word) MR_COMMON(2,0);
	MR_tfield(0, MR_r1, 1) = (MR_Word) MR_ENTRY_AP(ll_backend__dense_switch__IntroducedFrom__pred__generate_dense_jump_table__244__1_2_0);
	MR_tfield(0, MR_r1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_r1, 3) = MR_r3;
	MR_tfield(0, MR_r1, 4) = (MR_Word) MR_tbmkword(0, 0);
	MR_sv(3) = MR_r4;
	MR_sv(2) = MR_r5;
	MR_r2 = (MR_Word) MR_string_const("ll_backend.dense_switch", 23);
	MR_r3 = (MR_Word) MR_string_const("predicate \140ll_backend.dense_switch.generate_dense_jump_table\'/8", 63);
	MR_r4 = (MR_Word) MR_string_const("NextVal > LastVal, IndexList not []", 35);
	MR_np_call_localret_ent(require__expect_4_0,
		ll_backend__dense_switch__generate_dense_jump_table_8_0_i4);
MR_def_label(ll_backend__dense_switch__generate_dense_jump_table_8_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(2);
	MR_decr_sp_and_return(4);
MR_def_label(ll_backend__dense_switch__generate_dense_jump_table_8_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r3,0,0)) {
		MR_GOTO_LAB(ll_backend__dense_switch__generate_dense_jump_table_8_0_i6);
	}
	if (MR_LTAGS_TESTR(MR_r4,0,0)) {
		MR_GOTO_LAB(ll_backend__dense_switch__generate_dense_jump_table_8_0_i8);
	}
	MR_sv(3) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(1) = ((MR_Integer) MR_r1 + (MR_Integer) 1);
	MR_r1 = MR_r5;
	MR_np_call_localret_ent(ll_backend__code_info__get_next_label_3_0,
		ll_backend__dense_switch__generate_dense_jump_table_8_0_i9);
MR_def_label(ll_backend__dense_switch__generate_dense_jump_table_8_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_r4 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tempr2 = MR_r2;
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(2);
	MR_r1 = MR_sv(1);
	MR_sv(3) = MR_tfield(1, MR_tempr1, 0);
	MR_r5 = MR_tempr2;
	}
	MR_np_localcall_lab(ll_backend__dense_switch__generate_dense_jump_table_8_0,
		ll_backend__dense_switch__generate_dense_jump_table_8_0_i11);
MR_def_label(ll_backend__dense_switch__generate_dense_jump_table_8_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = ((MR_Integer) MR_r1 + (MR_Integer) 1);
	MR_sv(3) = MR_tfield(1, MR_r4, 0);
	MR_np_localcall_lab(ll_backend__dense_switch__generate_dense_jump_table_8_0,
		ll_backend__dense_switch__generate_dense_jump_table_8_0_i11);
MR_def_label(ll_backend__dense_switch__generate_dense_jump_table_8_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(3);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = MR_r1;
	MR_r1 = MR_tempr2;
	MR_decr_sp_and_return(4);
	}
MR_def_label(ll_backend__dense_switch__generate_dense_jump_table_8_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r6 = ((MR_Integer) MR_r1 + (MR_Integer) 1);
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(1, MR_r3, 0);
	MR_tempr2 = MR_tfield(0, MR_tempr1, 0);
	if ((MR_tempr2 != MR_r1)) {
		MR_GOTO_LAB(ll_backend__dense_switch__generate_dense_jump_table_8_0_i14);
	}
	MR_sv(3) = MR_tfield(0, MR_tempr1, 1);
	MR_r1 = MR_r6;
	MR_r3 = MR_tfield(1, MR_r3, 1);
	}
	MR_np_localcall_lab(ll_backend__dense_switch__generate_dense_jump_table_8_0,
		ll_backend__dense_switch__generate_dense_jump_table_8_0_i15);
MR_def_label(ll_backend__dense_switch__generate_dense_jump_table_8_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(3);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = MR_r1;
	MR_r1 = MR_tempr2;
	MR_decr_sp_and_return(4);
	}
MR_def_label(ll_backend__dense_switch__generate_dense_jump_table_8_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r4,0,0)) {
		MR_GOTO_LAB(ll_backend__dense_switch__generate_dense_jump_table_8_0_i19);
	}
	MR_sv(3) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(1) = MR_r6;
	MR_r1 = MR_r5;
	MR_np_call_localret_ent(ll_backend__code_info__get_next_label_3_0,
		ll_backend__dense_switch__generate_dense_jump_table_8_0_i20);
MR_def_label(ll_backend__dense_switch__generate_dense_jump_table_8_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_r4 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tempr2 = MR_r2;
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(2);
	MR_r1 = MR_sv(1);
	MR_r5 = MR_tempr2;
	MR_sv(3) = MR_tfield(1, MR_tempr1, 0);
	}
	MR_np_localcall_lab(ll_backend__dense_switch__generate_dense_jump_table_8_0,
		ll_backend__dense_switch__generate_dense_jump_table_8_0_i22);
MR_def_label(ll_backend__dense_switch__generate_dense_jump_table_8_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r6;
	MR_sv(3) = MR_tfield(1, MR_r4, 0);
	MR_np_localcall_lab(ll_backend__dense_switch__generate_dense_jump_table_8_0,
		ll_backend__dense_switch__generate_dense_jump_table_8_0_i22);
MR_def_label(ll_backend__dense_switch__generate_dense_jump_table_8_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(3);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = MR_r1;
	MR_r1 = MR_tempr2;
	MR_decr_sp_and_return(4);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(ll_backend__code_info__fail_if_rval_is_false_4_0);
MR_decl_entry(fn__cord__empty_0_0);
MR_decl_entry(fn__map__init_0_0);
extern const MR_TypeCtorInfo_Struct mercury_data_ll_backend__code_info__type_ctor_info_code_info_0;
MR_decl_entry(list__map_foldl3_9_1);
MR_decl_entry(fn__cord__cord_list_to_cord_1_0);
MR_decl_entry(map__to_assoc_list_2_0);
MR_decl_entry(fn__cord__singleton_1_0);
MR_decl_entry(ll_backend__code_info__generate_failure_3_0);
MR_decl_entry(fn__f_99_111_114_100_95_95_43_43_2_0);

MR_BEGIN_MODULE(ll_backend__dense_switch_module2)
	MR_init_entry1(ll_backend__dense_switch__generate_dense_switch_12_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__dense_switch__generate_dense_switch_12_0);
	MR_init_label10(ll_backend__dense_switch__generate_dense_switch_12_0,2,7,13,9,15,8,17,18,19,20)
	MR_init_label10(ll_backend__dense_switch__generate_dense_switch_12_0,21,24,27,26,32,33,34,25,37,38)
	MR_init_label3(ll_backend__dense_switch__generate_dense_switch_12_0,39,40,41)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'generate_dense_switch'/12 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__ll_backend__dense_switch__generate_dense_switch_12_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(13);
	MR_sv(13) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r6;
	MR_r10 = MR_tfield(0, MR_tempr1, 2);
	MR_sv(3) = MR_tfield(0, MR_tempr1, 1);
	MR_sv(2) = MR_tfield(0, MR_tempr1, 0);
	if (MR_INT_NE(MR_sv(2),0)) {
		MR_GOTO_LAB(ll_backend__dense_switch__generate_dense_switch_12_0_i2);
	}
	MR_sv(1) = MR_r1;
	MR_sv(5) = MR_r3;
	MR_sv(8) = MR_r4;
	MR_sv(9) = MR_r5;
	MR_sv(6) = MR_r7;
	MR_sv(10) = MR_r8;
	MR_r1 = MR_r10;
	MR_sv(4) = MR_r2;
	MR_r2 = MR_r9;
	MR_GOTO_LAB(ll_backend__dense_switch__generate_dense_switch_12_0_i7);
	}
MR_def_label(ll_backend__dense_switch__generate_dense_switch_12_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(2);
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr3, 3, (MR_Integer) 4);
	MR_sv(4) = MR_tempr3;
	MR_tfield(3, MR_tempr3, 0) = (MR_Integer) 2;
	MR_tfield(3, MR_tempr3, 1) = (MR_Word) MR_tbmkword(0, 1);
	MR_tfield(3, MR_tempr3, 2) = MR_r2;
	MR_tfield(3, MR_tempr3, 3) = MR_tempr2;
	MR_sv(1) = MR_r1;
	MR_sv(5) = MR_r3;
	MR_sv(8) = MR_r4;
	MR_sv(9) = MR_r5;
	MR_sv(6) = MR_r7;
	MR_sv(10) = MR_r8;
	MR_r1 = MR_r10;
	MR_r2 = MR_r9;
	}
MR_def_label(ll_backend__dense_switch__generate_dense_switch_12_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(ll_backend__dense_switch__generate_dense_switch_12_0_i9);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = ((MR_Integer) MR_sv(3) - (MR_Integer) MR_sv(2));
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_r1, 3, (MR_Integer) 4);
	MR_tfield(3, MR_r1, 0) = (MR_Integer) 2;
	MR_tfield(3, MR_r1, 1) = (MR_Word) MR_tbmkword(0, 26);
	MR_tfield(3, MR_r1, 2) = MR_sv(4);
	MR_tfield(3, MR_r1, 3) = MR_tempr2;
	}
	MR_np_call_localret_ent(ll_backend__code_info__fail_if_rval_is_false_4_0,
		ll_backend__dense_switch__generate_dense_switch_12_0_i13);
MR_def_label(ll_backend__dense_switch__generate_dense_switch_12_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 7);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(3,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(ll_backend__dense_switch__generate_dense_case_12_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 4;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(5);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(8);
	MR_tfield(0, MR_tempr1, 5) = MR_sv(9);
	MR_tfield(0, MR_tempr1, 6) = MR_sv(6);
	MR_sv(5) = MR_r1;
	MR_sv(8) = MR_r2;
	MR_sv(9) = MR_tempr1;
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, label);
	MR_GOTO_LAB(ll_backend__dense_switch__generate_dense_switch_12_0_i8);
	}
MR_def_label(ll_backend__dense_switch__generate_dense_switch_12_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	MR_np_call_localret_ent(fn__cord__empty_0_0,
		ll_backend__dense_switch__generate_dense_switch_12_0_i15);
MR_def_label(ll_backend__dense_switch__generate_dense_switch_12_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 7);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(3,1);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(ll_backend__dense_switch__generate_dense_case_12_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 4;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(5);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(8);
	MR_tfield(0, MR_tempr1, 5) = MR_sv(9);
	MR_tfield(0, MR_tempr1, 6) = MR_sv(6);
	MR_sv(5) = MR_r1;
	MR_sv(8) = MR_sv(7);
	MR_sv(9) = MR_tempr1;
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, label);
	}
MR_def_label(ll_backend__dense_switch__generate_dense_switch_12_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_sv(11) = MR_r2;
	MR_np_call_localret_ent(fn__map__init_0_0,
		ll_backend__dense_switch__generate_dense_switch_12_0_i17);
MR_def_label(ll_backend__dense_switch__generate_dense_switch_12_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, tagged_case);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,1,0);
	MR_r4 = (MR_Word) MR_TAG_COMMON(0,0,1);
	MR_r5 = (MR_Word) MR_CTOR0_ADDR(ll_backend__code_info, code_info);
	MR_r6 = MR_sv(9);
	MR_r7 = MR_sv(1);
	MR_r8 = MR_tempr1;
	MR_r9 = MR_sv(10);
	MR_r10 = MR_sv(8);
	}
	MR_np_call_localret_ent(list__map_foldl3_9_1,
		ll_backend__dense_switch__generate_dense_switch_12_0_i18);
MR_def_label(ll_backend__dense_switch__generate_dense_switch_12_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r3;
	MR_sv(8) = MR_r2;
	MR_sv(9) = MR_r4;
	MR_sv(12) = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(12);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__cord__cord_list_to_cord_1_0,
		ll_backend__dense_switch__generate_dense_switch_12_0_i19);
MR_def_label(ll_backend__dense_switch__generate_dense_switch_12_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(8);
	MR_sv(8) = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(11);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(map__to_assoc_list_2_0,
		ll_backend__dense_switch__generate_dense_switch_12_0_i20);
MR_def_label(ll_backend__dense_switch__generate_dense_switch_12_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_tempr1;
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	MR_r5 = MR_sv(9);
	}
	MR_np_call_localret_ent(ll_backend__dense_switch__generate_dense_jump_table_8_0,
		ll_backend__dense_switch__generate_dense_switch_12_0_i21);
MR_def_label(ll_backend__dense_switch__generate_dense_switch_12_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 7;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(4);
	MR_tfield(3, MR_tempr1, 2) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr2, 1) = (MR_Word) MR_string_const("switch (using dense jump table)", 31);
	MR_sv(9) = MR_r2;
	MR_sv(10) = MR_r3;
	MR_r1 = MR_sv(12);
	MR_r2 = MR_tempr2;
	}
	MR_np_call_localret_ent(fn__cord__singleton_1_0,
		ll_backend__dense_switch__generate_dense_switch_12_0_i24);
MR_def_label(ll_backend__dense_switch__generate_dense_switch_12_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(9),0,0)) {
		MR_GOTO_LAB(ll_backend__dense_switch__generate_dense_switch_12_0_i26);
	}
	MR_sv(9) = MR_r1;
	MR_r1 = MR_sv(12);
	MR_np_call_localret_ent(fn__cord__empty_0_0,
		ll_backend__dense_switch__generate_dense_switch_12_0_i27);
MR_def_label(ll_backend__dense_switch__generate_dense_switch_12_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_r3 = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 5;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(6);
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 0) = MR_tempr1;
	MR_tfield(0, MR_r2, 1) = (MR_Word) MR_string_const("end of dense switch", 19);
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(12);
	MR_GOTO_LAB(ll_backend__dense_switch__generate_dense_switch_12_0_i25);
	}
MR_def_label(ll_backend__dense_switch__generate_dense_switch_12_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 5;
	MR_tfield(3, MR_tempr1, 1) = MR_tfield(1, MR_sv(9), 0);
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 0) = MR_tempr1;
	MR_tfield(0, MR_r2, 1) = (MR_Word) MR_string_const("compiler-introduced \140fail\' case of dense switch", 47);
	MR_sv(9) = MR_r1;
	MR_r1 = MR_sv(12);
	}
	MR_np_call_localret_ent(fn__cord__singleton_1_0,
		ll_backend__dense_switch__generate_dense_switch_12_0_i32);
MR_def_label(ll_backend__dense_switch__generate_dense_switch_12_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(10);
	MR_sv(10) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(ll_backend__code_info__generate_failure_3_0,
		ll_backend__dense_switch__generate_dense_switch_12_0_i33);
MR_def_label(ll_backend__dense_switch__generate_dense_switch_12_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(10);
	MR_sv(10) = MR_r2;
	MR_tempr2 = MR_r1;
	MR_r1 = MR_sv(12);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	}
	MR_np_call_localret_ent(fn__f_99_111_114_100_95_95_43_43_2_0,
		ll_backend__dense_switch__generate_dense_switch_12_0_i34);
MR_def_label(ll_backend__dense_switch__generate_dense_switch_12_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 3, (MR_Integer) 2);
	MR_tfield(3, MR_r2, 0) = (MR_Integer) 5;
	MR_tfield(3, MR_r2, 1) = MR_sv(6);
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_r2;
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_string_const("end of dense switch", 19);
	MR_sv(6) = MR_r1;
	MR_r2 = MR_tempr1;
	MR_r1 = MR_sv(12);
	}
MR_def_label(ll_backend__dense_switch__generate_dense_switch_12_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(12) = MR_r1;
	MR_np_call_localret_ent(fn__cord__singleton_1_0,
		ll_backend__dense_switch__generate_dense_switch_12_0_i37);
MR_def_label(ll_backend__dense_switch__generate_dense_switch_12_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(12);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_99_111_114_100_95_95_43_43_2_0,
		ll_backend__dense_switch__generate_dense_switch_12_0_i38);
MR_def_label(ll_backend__dense_switch__generate_dense_switch_12_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(12);
	MR_r2 = MR_sv(8);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_99_111_114_100_95_95_43_43_2_0,
		ll_backend__dense_switch__generate_dense_switch_12_0_i39);
MR_def_label(ll_backend__dense_switch__generate_dense_switch_12_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(12);
	MR_r2 = MR_sv(9);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_99_111_114_100_95_95_43_43_2_0,
		ll_backend__dense_switch__generate_dense_switch_12_0_i40);
MR_def_label(ll_backend__dense_switch__generate_dense_switch_12_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(12);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_99_111_114_100_95_95_43_43_2_0,
		ll_backend__dense_switch__generate_dense_switch_12_0_i41);
MR_def_label(ll_backend__dense_switch__generate_dense_switch_12_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(10);
	MR_decr_sp_and_return(13);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_0);
MR_decl_entry(require__unexpected_3_0);

MR_BEGIN_MODULE(ll_backend__dense_switch_module3)
	MR_init_entry1(ll_backend__dense_switch__record_dense_label_for_cons_tag_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__dense_switch__record_dense_label_for_cons_tag_4_0);
	MR_init_label1(ll_backend__dense_switch__record_dense_label_for_cons_tag_4_0,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'record_dense_label_for_cons_tag'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__dense_switch__record_dense_label_for_cons_tag_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r2,3,0)) {
		MR_GOTO_LAB(ll_backend__dense_switch__record_dense_label_for_cons_tag_4_0_i2);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, label);
	MR_r2 = MR_tfield(3, MR_r2, 1);
	MR_tempr2 = MR_r3;
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tempr2;
	MR_np_tailcall_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_0);
	}
MR_def_label(ll_backend__dense_switch__record_dense_label_for_cons_tag_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("ll_backend.dense_switch", 23);
	MR_r2 = (MR_Word) MR_string_const("predicate \140ll_backend.dense_switch.record_dense_label_for_cons_tag\'/4", 69);
	MR_r3 = (MR_Word) MR_string_const("not int_tag", 11);
	MR_np_tailcall_ent(require__unexpected_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_data__type_ctor_info_cons_tag_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_data__type_ctor_info_tagged_cons_id_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_string_0;
MR_decl_entry(list__map2_4_0);
MR_decl_entry(fn__hlds__hlds_out__hlds_out_goal__case_comment_3_0);
MR_decl_entry(list__foldl_4_0);
MR_decl_entry(ll_backend__code_info__remember_position_2_0);
MR_decl_entry(ll_backend__trace_gen__maybe_generate_internal_event_code_5_0);
MR_decl_entry(ll_backend__code_gen__generate_goal_5_0);
MR_decl_entry(hlds__hlds_llds__goal_info_get_store_map_2_0);
MR_decl_entry(ll_backend__code_info__generate_branch_end_6_0);
MR_decl_entry(ll_backend__code_info__reset_to_position_3_0);

MR_BEGIN_MODULE(ll_backend__dense_switch_module4)
	MR_init_entry1(ll_backend__dense_switch__generate_dense_case_12_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__dense_switch__generate_dense_case_12_0);
	MR_init_label10(ll_backend__dense_switch__generate_dense_case_12_0,2,4,5,6,7,9,12,13,14,15)
	MR_init_label8(ll_backend__dense_switch__generate_dense_case_12_0,19,20,21,22,23,24,25,26)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'generate_dense_case'/12 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__dense_switch__generate_dense_case_12_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(12);
	MR_sv(12) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(3) = MR_r2;
	MR_sv(7) = MR_r3;
	MR_sv(4) = MR_r4;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r5;
	MR_sv(2) = MR_tfield(0, MR_tempr1, 1);
	MR_sv(10) = MR_tfield(0, MR_tempr1, 3);
	MR_sv(9) = MR_r6;
	MR_sv(6) = MR_r7;
	MR_sv(8) = MR_r8;
	MR_r1 = MR_tfield(0, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(hlds__hlds_out__hlds_out_goal__project_cons_name_and_tag_3_0,
		ll_backend__dense_switch__generate_dense_case_12_0_i2);
MR_def_label(ll_backend__dense_switch__generate_dense_case_12_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_sv(5) = MR_r2;
	MR_sv(11) = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_data, cons_tag);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_data, tagged_cons_id);
	MR_r2 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r3 = MR_sv(11);
	MR_r4 = (MR_Word) MR_TAG_COMMON(0,5,0);
	MR_r5 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__map2_4_0,
		ll_backend__dense_switch__generate_dense_case_12_0_i4);
MR_def_label(ll_backend__dense_switch__generate_dense_case_12_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r2;
	MR_tempr2 = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tempr2;
	}
	MR_np_call_localret_ent(fn__hlds__hlds_out__hlds_out_goal__case_comment_3_0,
		ll_backend__dense_switch__generate_dense_case_12_0_i5);
MR_def_label(ll_backend__dense_switch__generate_dense_case_12_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(8);
	MR_np_call_localret_ent(ll_backend__code_info__get_next_label_3_0,
		ll_backend__dense_switch__generate_dense_case_12_0_i6);
MR_def_label(ll_backend__dense_switch__generate_dense_case_12_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(5);
	MR_sv(5) = MR_r1;
	MR_tempr2 = MR_sv(9);
	MR_sv(9) = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	}
	MR_np_call_localret_ent(ll_backend__dense_switch__record_dense_label_for_cons_tag_4_0,
		ll_backend__dense_switch__generate_dense_case_12_0_i7);
MR_def_label(ll_backend__dense_switch__generate_dense_case_12_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(6,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(ll_backend__dense_switch__record_dense_label_for_cons_tag_4_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(5);
	MR_tempr2 = MR_r1;
	MR_r1 = MR_sv(11);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,0);
	MR_r4 = MR_sv(1);
	MR_r5 = MR_tempr2;
	}
	MR_np_call_localret_ent(list__foldl_4_0,
		ll_backend__dense_switch__generate_dense_case_12_0_i9);
MR_def_label(ll_backend__dense_switch__generate_dense_case_12_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 5;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(5);
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 0) = MR_tempr1;
	MR_tfield(0, MR_r2, 1) = MR_sv(2);
	MR_sv(5) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	}
	MR_np_call_localret_ent(fn__cord__singleton_1_0,
		ll_backend__dense_switch__generate_dense_case_12_0_i12);
MR_def_label(ll_backend__dense_switch__generate_dense_case_12_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(9);
	MR_np_call_localret_ent(ll_backend__code_info__remember_position_2_0,
		ll_backend__dense_switch__generate_dense_case_12_0_i13);
MR_def_label(ll_backend__dense_switch__generate_dense_case_12_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(10);
	MR_r2 = MR_sv(7);
	MR_r3 = MR_sv(9);
	MR_np_call_localret_ent(ll_backend__trace_gen__maybe_generate_internal_event_code_5_0,
		ll_backend__dense_switch__generate_dense_case_12_0_i14);
MR_def_label(ll_backend__dense_switch__generate_dense_case_12_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_tempr2 = MR_r2;
	MR_r2 = MR_sv(10);
	MR_r3 = MR_tempr2;
	}
	MR_np_call_localret_ent(ll_backend__code_gen__generate_goal_5_0,
		ll_backend__dense_switch__generate_dense_case_12_0_i15);
MR_def_label(ll_backend__dense_switch__generate_dense_case_12_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(4);
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 6;
	MR_tfield(3, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_tempr2;
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_string_const("branch to end of dense switch", 29);
	MR_sv(4) = MR_r1;
	MR_sv(10) = MR_r2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__cord__singleton_1_0,
		ll_backend__dense_switch__generate_dense_case_12_0_i19);
MR_def_label(ll_backend__dense_switch__generate_dense_case_12_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(7);
	MR_sv(7) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(hlds__hlds_llds__goal_info_get_store_map_2_0,
		ll_backend__dense_switch__generate_dense_case_12_0_i20);
MR_def_label(ll_backend__dense_switch__generate_dense_case_12_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(10);
	MR_np_call_localret_ent(ll_backend__code_info__generate_branch_end_6_0,
		ll_backend__dense_switch__generate_dense_case_12_0_i21);
MR_def_label(ll_backend__dense_switch__generate_dense_case_12_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(7);
	MR_sv(7) = MR_r1;
	MR_sv(10) = MR_r3;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_99_111_114_100_95_95_43_43_2_0,
		ll_backend__dense_switch__generate_dense_case_12_0_i22);
MR_def_label(ll_backend__dense_switch__generate_dense_case_12_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_99_111_114_100_95_95_43_43_2_0,
		ll_backend__dense_switch__generate_dense_case_12_0_i23);
MR_def_label(ll_backend__dense_switch__generate_dense_case_12_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_99_111_114_100_95_95_43_43_2_0,
		ll_backend__dense_switch__generate_dense_case_12_0_i24);
MR_def_label(ll_backend__dense_switch__generate_dense_case_12_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_99_111_114_100_95_95_43_43_2_0,
		ll_backend__dense_switch__generate_dense_case_12_0_i25);
MR_def_label(ll_backend__dense_switch__generate_dense_case_12_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(10);
	MR_np_call_localret_ent(ll_backend__code_info__reset_to_position_3_0,
		ll_backend__dense_switch__generate_dense_case_12_0_i26);
MR_def_label(ll_backend__dense_switch__generate_dense_case_12_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(7);
	MR_r4 = MR_tempr1;
	MR_decr_sp_and_return(12);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__dense_switch_module5)
	MR_init_entry1(__Unify___ll_backend__dense_switch__dense_switch_info_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___ll_backend__dense_switch__dense_switch_info_0_0);
	MR_init_label2(__Unify___ll_backend__dense_switch__dense_switch_info_0_0,4,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___ll_backend__dense_switch__dense_switch_info_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___ll_backend__dense_switch__dense_switch_info_0_0_i4);
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
		MR_GOTO_LAB(__Unify___ll_backend__dense_switch__dense_switch_info_0_0_i1);
	}
	MR_r1 = MR_tfield(0, MR_tempr1, 1);
	MR_r2 = MR_tfield(0, MR_tempr2, 1);
	if ((MR_r1 != MR_r2)) {
		MR_GOTO_LAB(__Unify___ll_backend__dense_switch__dense_switch_info_0_0_i1);
	}
	MR_r1 = MR_tfield(0, MR_tempr1, 2);
	MR_r2 = MR_tfield(0, MR_tempr2, 2);
	MR_r1 = (MR_r1 == MR_r2);
	MR_decr_sp(2);
	MR_proceed();
	}
MR_def_label(__Unify___ll_backend__dense_switch__dense_switch_info_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp(2);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___ll_backend__dense_switch__dense_switch_info_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp(2);
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(private_builtin__builtin_compare_int_3_0);

MR_BEGIN_MODULE(ll_backend__dense_switch_module6)
	MR_init_entry1(__Compare___ll_backend__dense_switch__dense_switch_info_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___ll_backend__dense_switch__dense_switch_info_0_0);
	MR_init_label5(__Compare___ll_backend__dense_switch__dense_switch_info_0_0,3,2,5,9,29)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___ll_backend__dense_switch__dense_switch_info_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___ll_backend__dense_switch__dense_switch_info_0_0_i3);
	}
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___ll_backend__dense_switch__dense_switch_info_0_0_i2);
MR_def_label(__Compare___ll_backend__dense_switch__dense_switch_info_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___ll_backend__dense_switch__dense_switch_info_0_0,2)
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
		__Compare___ll_backend__dense_switch__dense_switch_info_0_0_i5);
MR_def_label(__Compare___ll_backend__dense_switch__dense_switch_info_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__dense_switch__dense_switch_info_0_0_i29);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___ll_backend__dense_switch__dense_switch_info_0_0_i9);
MR_def_label(__Compare___ll_backend__dense_switch__dense_switch_info_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__dense_switch__dense_switch_info_0_0_i29);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(4);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
MR_def_label(__Compare___ll_backend__dense_switch__dense_switch_info_0_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(builtin__unify_2_0);

MR_BEGIN_MODULE(ll_backend__dense_switch_module7)
	MR_init_entry1(ll_backend__dense_switch__IntroducedFrom__pred__generate_dense_jump_table__244__1_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__dense_switch__IntroducedFrom__pred__generate_dense_jump_table__244__1_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__pred__generate_dense_jump_table__244__1'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__dense_switch__IntroducedFrom__pred__generate_dense_jump_table__244__1_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,2);
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

static void mercury__ll_backend__dense_switch_maybe_bunch_0(void)
{
	ll_backend__dense_switch_module0();
	ll_backend__dense_switch_module1();
	ll_backend__dense_switch_module2();
	ll_backend__dense_switch_module3();
	ll_backend__dense_switch_module4();
	ll_backend__dense_switch_module5();
	ll_backend__dense_switch_module6();
	ll_backend__dense_switch_module7();
}

/* suppress gcc -Wmissing-decls warnings */
void mercury__ll_backend__dense_switch__init(void);
void mercury__ll_backend__dense_switch__init_type_tables(void);
void mercury__ll_backend__dense_switch__init_debugger(void);
#ifdef MR_DEEP_PROFILING
void mercury__ll_backend__dense_switch__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp);
#endif
#ifdef MR_RECORD_TERM_SIZES
void mercury__ll_backend__dense_switch__init_complexity_procs(void);
#endif
#ifdef MR_THREADSCOPE
void mercury__ll_backend__dense_switch__init_threadscope_string_table(void);
#endif

void mercury__ll_backend__dense_switch__init(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	mercury__ll_backend__dense_switch_maybe_bunch_0();
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_ll_backend__dense_switch__type_ctor_info_dense_switch_info_0,
		ll_backend__dense_switch__dense_switch_info_0_0);
	mercury__ll_backend__dense_switch__init_debugger();
}

void mercury__ll_backend__dense_switch__init_type_tables(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	{
		MR_register_type_ctor_info(
		&mercury_data_ll_backend__dense_switch__type_ctor_info_dense_switch_info_0);
	}
}


void mercury__ll_backend__dense_switch__init_debugger(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}

#ifdef MR_DEEP_PROFILING

void mercury__ll_backend__dense_switch__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp)
{
	MR_write_out_module_proc_reps_start(procrep_fp, &mercury_data__module_layout__ll_backend__dense_switch);
	MR_write_out_module_proc_reps_end(procrep_fp);
}

#endif

#ifdef MR_RECORD_TERM_SIZES

void mercury__ll_backend__dense_switch__init_complexity_procs(void)
{
}

#endif

#ifdef MR_THREADSCOPE

void mercury__ll_backend__dense_switch__init_threadscope_string_table(void)
{
}

#endif

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;
