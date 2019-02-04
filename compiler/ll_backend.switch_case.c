/*
** Automatically generated from `switch_case.m'
** by the Mercury compiler,
** version rotd-2012-02-09, configured for x86_64-unknown-linux-gnu.
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
INIT mercury__ll_backend__switch_case__init
ENDINIT
*/

#define MR_ALLOW_RESET
#include "mercury_imp.h"
#line 140 "../library/io.int2"
#include "io.mh"

#line 28 "ll_backend.switch_case.c"
#line 150 "../library/io.int2"
#include "time.mh"

#line 32 "ll_backend.switch_case.c"
#line 151 "../library/io.int2"
#include "string.mh"

#line 36 "ll_backend.switch_case.c"
#line 33 "../library/array.int2"
#include "array.mh"

#line 40 "ll_backend.switch_case.c"
#line 31 "../library/bitmap.int2"
#include "bitmap.mh"

#line 44 "ll_backend.switch_case.c"
#line 39 "../mdbcomp/mdbcomp.rtti_access.int2"
#include "mdbcomp.rtti_access.mh"

#line 48 "ll_backend.switch_case.c"
#line 49 "ll_backend.switch_case.c"
#include "ll_backend.switch_case.mh"

#line 52 "ll_backend.switch_case.c"
#line 53 "ll_backend.switch_case.c"
#ifndef LL_BACKEND__SWITCH_CASE_DECL_GUARD
#define LL_BACKEND__SWITCH_CASE_DECL_GUARD

#line 57 "ll_backend.switch_case.c"
#line 58 "ll_backend.switch_case.c"

#endif
#line 61 "ll_backend.switch_case.c"

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
	MR_Integer f2;
	MR_Word * f3[3];
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
	MR_Code * f2;
	MR_Integer f3;
};
#ifdef MR_MSVC
#pragma pack(pop)
#endif
MR_STATIC_LINKAGE const struct mercury_type_1 mercury_common_1[];

extern const MR_TypeCtorInfo_Struct
	mercury_data_ll_backend__switch_case__type_ctor_info_case_code_included_0,
	mercury_data_ll_backend__switch_case__type_ctor_info_case_label_info_0,
	mercury_data_ll_backend__switch_case__type_ctor_info_case_label_map_0,
	mercury_data_ll_backend__switch_case__type_ctor_info_represent_params_0;
MR_decl_label1(f_108_108_95_98_97_99_107_101_110_100_95_95_115_119_105_116_99_104_95_99_97_115_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_100_100_95_114_101_109_97_105_110_105_110_103_95_99_97_115_101_95_95_91_49_93_95_48_4_0, 3)
MR_decl_label5(ll_backend__switch_case__generate_case_code_or_jump_4_0, 2,7,9,4,11)
MR_decl_label10(ll_backend__switch_case__represent_tagged_case_for_llds_9_0, 2,4,5,6,7,10,11,12,13,14)
MR_decl_label7(ll_backend__switch_case__represent_tagged_case_for_llds_9_0, 17,19,20,21,22,23,25)
MR_decl_label3(__Unify___ll_backend__switch_case__case_label_info_0_0, 4,6,1)
MR_decl_label4(__Unify___ll_backend__switch_case__represent_params_0_0, 4,6,10,1)
MR_decl_label5(__Compare___ll_backend__switch_case__case_label_info_0_0, 3,2,5,9,29)
MR_decl_label7(__Compare___ll_backend__switch_case__represent_params_0_0, 3,2,5,9,13,17,45)
MR_def_extern_entry(ll_backend__switch_case__represent_tagged_case_for_llds_9_0)
MR_def_extern_entry(ll_backend__switch_case__generate_case_code_or_jump_4_0)
MR_def_extern_entry(ll_backend__switch_case__add_remaining_case_4_0)
MR_def_extern_entry(__Unify___ll_backend__switch_case__case_code_included_0_0)
MR_def_extern_entry(__Compare___ll_backend__switch_case__case_code_included_0_0)
MR_def_extern_entry(__Unify___ll_backend__switch_case__case_label_info_0_0)
MR_def_extern_entry(__Compare___ll_backend__switch_case__case_label_info_0_0)
MR_def_extern_entry(__Unify___ll_backend__switch_case__case_label_map_0_0)
MR_def_extern_entry(__Compare___ll_backend__switch_case__case_label_map_0_0)
MR_def_extern_entry(__Unify___ll_backend__switch_case__represent_params_0_0)
MR_def_extern_entry(__Compare___ll_backend__switch_case__represent_params_0_0)
MR_def_extern_entry(f_108_108_95_98_97_99_107_101_110_100_95_95_115_119_105_116_99_104_95_99_97_115_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_100_100_95_114_101_109_97_105_110_105_110_103_95_99_97_115_101_95_95_91_49_93_95_48_4_0)

static const MR_UserClosureId
mercury_data__closure_layout__ll_backend__switch_case__represent_tagged_case_for_llds_9_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_data__type_ctor_info_tagged_cons_id_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_string_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_data__type_ctor_info_cons_tag_0;
static const struct mercury_type_0 mercury_common_0[1] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__ll_backend__switch_case__represent_tagged_case_for_llds_9_0_1,
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
static const struct mercury_type_1 mercury_common_1[1] =
{
{
MR_COMMON(0,0),
MR_ENTRY_AP(hlds__hlds_out__hlds_out_goal__project_cons_name_and_tag_3_0),
0
},
};

static const MR_EnumFunctorDesc mercury_data_ll_backend__switch_case__enum_functor_desc_case_code_included_0_0 = {
	"case_code_not_yet_included",
	0
};

static const MR_EnumFunctorDesc mercury_data_ll_backend__switch_case__enum_functor_desc_case_code_included_0_1 = {
	"case_code_already_included",
	1
};

const MR_EnumFunctorDescPtr mercury_data_ll_backend__switch_case__enum_value_ordered_case_code_included_0[] = {
	&mercury_data_ll_backend__switch_case__enum_functor_desc_case_code_included_0_0,
	&mercury_data_ll_backend__switch_case__enum_functor_desc_case_code_included_0_1
};

const MR_EnumFunctorDescPtr mercury_data_ll_backend__switch_case__enum_name_ordered_case_code_included_0[] = {
	&mercury_data_ll_backend__switch_case__enum_functor_desc_case_code_included_0_1,
	&mercury_data_ll_backend__switch_case__enum_functor_desc_case_code_included_0_0
};

const MR_Integer mercury_data_ll_backend__switch_case__functor_number_map_case_code_included_0[] = {
	1,
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_ll_backend__switch_case__type_ctor_info_case_code_included_0 = {
	0,
	15,
	-1,
	MR_TYPECTOR_REP_ENUM,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___ll_backend__switch_case__case_code_included_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___ll_backend__switch_case__case_code_included_0_0)),
	"ll_backend.switch_case",
	"case_code_included",
	{ (void *)mercury_data_ll_backend__switch_case__enum_name_ordered_case_code_included_0 },
	{ (void *)mercury_data_ll_backend__switch_case__enum_value_ordered_case_code_included_0 },
	2,
	4,
	mercury_data_ll_backend__switch_case__functor_number_map_case_code_included_0
};
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_string_0;
extern const MR_TypeCtorInfo_Struct mercury_data_cord__type_ctor_info_cord_1;
extern const MR_TypeCtorInfo_Struct mercury_data_ll_backend__llds__type_ctor_info_instruction_0;
extern const MR_TypeCtorInfo_Struct mercury_data_ll_backend__llds__type_ctor_info_instruction_0;

static const MR_FA_TypeInfo_Struct1 mercury_data_cord__ti_cord_1ll_backend__llds__type_ctor_info_instruction_0 = {
	&mercury_data_cord__type_ctor_info_cord_1,
{	(MR_TypeInfo) &mercury_data_ll_backend__llds__type_ctor_info_instruction_0
}};
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_string_0;
extern const MR_TypeCtorInfo_Struct mercury_data_ll_backend__switch_case__type_ctor_info_case_code_included_0;

const MR_PseudoTypeInfo mercury_data_ll_backend__switch_case__field_types_case_label_info_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_string_0,
	(MR_PseudoTypeInfo) &mercury_data_cord__ti_cord_1ll_backend__llds__type_ctor_info_instruction_0,
	(MR_PseudoTypeInfo) &mercury_data_ll_backend__switch_case__type_ctor_info_case_code_included_0
};

const MR_ConstString mercury_data_ll_backend__switch_case__field_names_case_label_info_0_0[] = {
	"case_description",
	"case_code",
	"case_code_included"
};

static const MR_DuFunctorDesc mercury_data_ll_backend__switch_case__du_functor_desc_case_label_info_0_0 = {
	"case_label_info",
	3,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_ll_backend__switch_case__field_types_case_label_info_0_0,
	mercury_data_ll_backend__switch_case__field_names_case_label_info_0_0,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_ll_backend__switch_case__du_stag_ordered_case_label_info_0_0[] = {
	&mercury_data_ll_backend__switch_case__du_functor_desc_case_label_info_0_0

};

const MR_DuPtagLayout mercury_data_ll_backend__switch_case__du_ptag_ordered_case_label_info_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_ll_backend__switch_case__du_stag_ordered_case_label_info_0_0 }

};

const MR_DuFunctorDescPtr mercury_data_ll_backend__switch_case__du_name_ordered_case_label_info_0[] = {
	&mercury_data_ll_backend__switch_case__du_functor_desc_case_label_info_0_0
};

const MR_Integer mercury_data_ll_backend__switch_case__functor_number_map_case_label_info_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_ll_backend__switch_case__type_ctor_info_case_label_info_0 = {
	0,
	15,
	1,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___ll_backend__switch_case__case_label_info_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___ll_backend__switch_case__case_label_info_0_0)),
	"ll_backend.switch_case",
	"case_label_info",
	{ (void *)mercury_data_ll_backend__switch_case__du_name_ordered_case_label_info_0 },
	{ (void *)mercury_data_ll_backend__switch_case__du_ptag_ordered_case_label_info_0 },
	1,
	4,
	mercury_data_ll_backend__switch_case__functor_number_map_case_label_info_0
};
extern const MR_TypeCtorInfo_Struct mercury_data_tree234__type_ctor_info_tree234_2;
extern const MR_TypeCtorInfo_Struct mercury_data_ll_backend__llds__type_ctor_info_label_0;
extern const MR_TypeCtorInfo_Struct mercury_data_ll_backend__llds__type_ctor_info_label_0;
extern const MR_TypeCtorInfo_Struct mercury_data_ll_backend__switch_case__type_ctor_info_case_label_info_0;

static const MR_FA_TypeInfo_Struct2 mercury_data_tree234__ti_tree234_2ll_backend__llds__type_ctor_info_label_0ll_backend__switch_case__type_ctor_info_case_label_info_0 = {
	&mercury_data_tree234__type_ctor_info_tree234_2,
{	(MR_TypeInfo) &mercury_data_ll_backend__llds__type_ctor_info_label_0,
	(MR_TypeInfo) &mercury_data_ll_backend__switch_case__type_ctor_info_case_label_info_0
}};

const MR_TypeCtorInfo_Struct mercury_data_ll_backend__switch_case__type_ctor_info_case_label_map_0 = {
	0,
	15,
	-1,
	MR_TYPECTOR_REP_EQUIV_GROUND,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___ll_backend__switch_case__case_label_map_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___ll_backend__switch_case__case_label_map_0_0)),
	"ll_backend.switch_case",
	"case_label_map",
	{ 0 },
	{ (void *)&mercury_data_tree234__ti_tree234_2ll_backend__llds__type_ctor_info_label_0ll_backend__switch_case__type_ctor_info_case_label_info_0 },
	-1,
	0,
	NULL
};
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_goal__type_ctor_info_hlds_goal_info_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__code_model__type_ctor_info_code_model_0;
extern const MR_TypeCtorInfo_Struct mercury_data_ll_backend__code_info__type_ctor_info_position_info_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_goal__type_ctor_info_hlds_goal_info_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__code_model__type_ctor_info_code_model_0;
extern const MR_TypeCtorInfo_Struct mercury_data_ll_backend__code_info__type_ctor_info_position_info_0;

const MR_PseudoTypeInfo mercury_data_ll_backend__switch_case__field_types_represent_params_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_string_0,
	(MR_PseudoTypeInfo) &mercury_data_hlds__hlds_goal__type_ctor_info_hlds_goal_info_0,
	(MR_PseudoTypeInfo) &mercury_data_hlds__code_model__type_ctor_info_code_model_0,
	(MR_PseudoTypeInfo) &mercury_data_ll_backend__code_info__type_ctor_info_position_info_0,
	(MR_PseudoTypeInfo) &mercury_data_ll_backend__llds__type_ctor_info_label_0
};

const MR_ConstString mercury_data_ll_backend__switch_case__field_names_represent_params_0_0[] = {
	"switch_var_name",
	"switch_goal_info",
	"switch_code_model",
	"starting_position",
	"switch_end_label"
};

static const MR_DuFunctorDesc mercury_data_ll_backend__switch_case__du_functor_desc_represent_params_0_0 = {
	"represent_params",
	5,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_ll_backend__switch_case__field_types_represent_params_0_0,
	mercury_data_ll_backend__switch_case__field_names_represent_params_0_0,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_ll_backend__switch_case__du_stag_ordered_represent_params_0_0[] = {
	&mercury_data_ll_backend__switch_case__du_functor_desc_represent_params_0_0

};

const MR_DuPtagLayout mercury_data_ll_backend__switch_case__du_ptag_ordered_represent_params_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_ll_backend__switch_case__du_stag_ordered_represent_params_0_0 }

};

const MR_DuFunctorDescPtr mercury_data_ll_backend__switch_case__du_name_ordered_represent_params_0[] = {
	&mercury_data_ll_backend__switch_case__du_functor_desc_represent_params_0_0
};

const MR_Integer mercury_data_ll_backend__switch_case__functor_number_map_represent_params_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_ll_backend__switch_case__type_ctor_info_represent_params_0 = {
	0,
	15,
	1,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___ll_backend__switch_case__represent_params_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___ll_backend__switch_case__represent_params_0_0)),
	"ll_backend.switch_case",
	"represent_params",
	{ (void *)mercury_data_ll_backend__switch_case__du_name_ordered_represent_params_0 },
	{ (void *)mercury_data_ll_backend__switch_case__du_ptag_ordered_represent_params_0 },
	1,
	4,
	mercury_data_ll_backend__switch_case__functor_number_map_represent_params_0
};


static const MR_UserClosureId
mercury_data__closure_layout__ll_backend__switch_case__represent_tagged_case_for_llds_9_0_1 = {
{
MR_PREDICATE,
"hlds.hlds_out.hlds_out_goal",
"hlds.hlds_out.hlds_out_goal",
"project_cons_name_and_tag",
3,
0
},
"ll_backend.switch_case",
"switch_case.m",
95,
"14"
};


extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_data__type_ctor_info_tagged_cons_id_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_string_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_data__type_ctor_info_cons_tag_0;
MR_decl_entry(list__map2_4_0);
MR_decl_entry(fn__hlds__hlds_out__hlds_out_goal__case_comment_3_0);
MR_decl_entry(ll_backend__code_info__reset_to_position_3_0);
MR_decl_entry(ll_backend__code_info__get_next_label_3_0);
MR_decl_entry(fn__cord__singleton_1_0);
MR_decl_entry(ll_backend__trace_gen__maybe_generate_internal_event_code_5_0);
MR_decl_entry(ll_backend__code_gen__generate_goal_5_0);
MR_decl_entry(hlds__hlds_llds__goal_info_get_store_map_2_0);
MR_decl_entry(ll_backend__code_info__generate_branch_end_6_0);
MR_decl_entry(fn__f_115_116_114_105_110_103_95_95_43_43_2_0);
MR_decl_entry(fn__f_99_111_114_100_95_95_43_43_2_0);
MR_decl_entry(map__det_insert_4_0);

MR_BEGIN_MODULE(ll_backend__switch_case_module0)
	MR_init_entry1(ll_backend__switch_case__represent_tagged_case_for_llds_9_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__switch_case__represent_tagged_case_for_llds_9_0);
	MR_init_label10(ll_backend__switch_case__represent_tagged_case_for_llds_9_0,2,4,5,6,7,10,11,12,13,14)
	MR_init_label7(ll_backend__switch_case__represent_tagged_case_for_llds_9_0,17,19,20,21,22,23,25)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'represent_tagged_case_for_llds'/9 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__ll_backend__switch_case__represent_tagged_case_for_llds_9_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(11);
	MR_sv(11) = (MR_Word) MR_succip;
	MR_sv(5) = MR_tfield(0, MR_r1, 0);
	MR_sv(4) = MR_tfield(0, MR_r1, 1);
	MR_sv(3) = MR_tfield(0, MR_r1, 2);
	MR_sv(1) = MR_tfield(0, MR_r1, 3);
	MR_sv(7) = MR_tfield(0, MR_r1, 4);
	MR_sv(2) = MR_tfield(0, MR_r2, 1);
	MR_sv(9) = MR_tfield(0, MR_r2, 3);
	MR_sv(6) = MR_r3;
	MR_sv(10) = MR_r4;
	MR_sv(8) = MR_r5;
	MR_r1 = MR_tfield(0, MR_r2, 0);
	MR_np_call_localret_ent(hlds__hlds_out__hlds_out_goal__project_cons_name_and_tag_3_0,
		ll_backend__switch_case__represent_tagged_case_for_llds_9_0_i2);
MR_def_label(ll_backend__switch_case__represent_tagged_case_for_llds_9_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_data, tagged_cons_id);
	MR_r2 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_data, cons_tag);
	MR_r4 = (MR_Word) MR_TAG_COMMON(0,1,0);
	MR_r5 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__map2_4_0,
		ll_backend__switch_case__represent_tagged_case_for_llds_9_0_i4);
MR_def_label(ll_backend__switch_case__represent_tagged_case_for_llds_9_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__hlds__hlds_out__hlds_out_goal__case_comment_3_0,
		ll_backend__switch_case__represent_tagged_case_for_llds_9_0_i5);
MR_def_label(ll_backend__switch_case__represent_tagged_case_for_llds_9_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(8);
	MR_np_call_localret_ent(ll_backend__code_info__reset_to_position_3_0,
		ll_backend__switch_case__represent_tagged_case_for_llds_9_0_i6);
MR_def_label(ll_backend__switch_case__represent_tagged_case_for_llds_9_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(ll_backend__code_info__get_next_label_3_0,
		ll_backend__switch_case__represent_tagged_case_for_llds_9_0_i7);
MR_def_label(ll_backend__switch_case__represent_tagged_case_for_llds_9_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 5;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr2, 1) = MR_sv(2);
	MR_sv(1) = MR_r1;
	MR_sv(8) = MR_r2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	MR_r2 = MR_tempr2;
	}
	MR_np_call_localret_ent(fn__cord__singleton_1_0,
		ll_backend__switch_case__represent_tagged_case_for_llds_9_0_i10);
MR_def_label(ll_backend__switch_case__represent_tagged_case_for_llds_9_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(8);
	MR_sv(8) = MR_r1;
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(ll_backend__trace_gen__maybe_generate_internal_event_code_5_0,
		ll_backend__switch_case__represent_tagged_case_for_llds_9_0_i11);
MR_def_label(ll_backend__switch_case__represent_tagged_case_for_llds_9_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_tempr2 = MR_r2;
	MR_r2 = MR_sv(9);
	MR_r3 = MR_tempr2;
	}
	MR_np_call_localret_ent(ll_backend__code_gen__generate_goal_5_0,
		ll_backend__switch_case__represent_tagged_case_for_llds_9_0_i12);
MR_def_label(ll_backend__switch_case__represent_tagged_case_for_llds_9_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_sv(9) = MR_r2;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_llds__goal_info_get_store_map_2_0,
		ll_backend__switch_case__represent_tagged_case_for_llds_9_0_i13);
MR_def_label(ll_backend__switch_case__represent_tagged_case_for_llds_9_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(10);
	MR_r3 = MR_sv(9);
	MR_np_call_localret_ent(ll_backend__code_info__generate_branch_end_6_0,
		ll_backend__switch_case__represent_tagged_case_for_llds_9_0_i14);
MR_def_label(ll_backend__switch_case__represent_tagged_case_for_llds_9_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(7);
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 2);
	MR_sv(10) = MR_tempr2;
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 6;
	MR_tfield(3, MR_tempr2, 1) = MR_tempr1;
	MR_tempr1 = MR_sv(5);
	MR_sv(5) = MR_r2;
	MR_sv(7) = MR_r1;
	MR_sv(9) = MR_r3;
	MR_r1 = (MR_Word) MR_string_const("goto end of switch on ", 22);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__switch_case__represent_tagged_case_for_llds_9_0_i17);
MR_def_label(ll_backend__switch_case__represent_tagged_case_for_llds_9_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 0) = MR_sv(10);
	MR_tfield(0, MR_r2, 1) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	MR_np_call_localret_ent(fn__cord__singleton_1_0,
		ll_backend__switch_case__represent_tagged_case_for_llds_9_0_i19);
MR_def_label(ll_backend__switch_case__represent_tagged_case_for_llds_9_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_99_111_114_100_95_95_43_43_2_0,
		ll_backend__switch_case__represent_tagged_case_for_llds_9_0_i20);
MR_def_label(ll_backend__switch_case__represent_tagged_case_for_llds_9_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_99_111_114_100_95_95_43_43_2_0,
		ll_backend__switch_case__represent_tagged_case_for_llds_9_0_i21);
MR_def_label(ll_backend__switch_case__represent_tagged_case_for_llds_9_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_99_111_114_100_95_95_43_43_2_0,
		ll_backend__switch_case__represent_tagged_case_for_llds_9_0_i22);
MR_def_label(ll_backend__switch_case__represent_tagged_case_for_llds_9_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	MR_r2 = MR_sv(8);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_99_111_114_100_95_95_43_43_2_0,
		ll_backend__switch_case__represent_tagged_case_for_llds_9_0_i23);
MR_def_label(ll_backend__switch_case__represent_tagged_case_for_llds_9_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_r4 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 0;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, label);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(ll_backend__switch_case, case_label_info);
	MR_r3 = MR_sv(1);
	MR_r5 = MR_sv(6);
	}
	MR_np_call_localret_ent(map__det_insert_4_0,
		ll_backend__switch_case__represent_tagged_case_for_llds_9_0_i25);
MR_def_label(ll_backend__switch_case__represent_tagged_case_for_llds_9_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(7);
	MR_r4 = MR_sv(9);
	MR_decr_sp_and_return(11);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(map__lookup_3_0);
MR_decl_entry(map__det_update_4_0);

MR_BEGIN_MODULE(ll_backend__switch_case_module1)
	MR_init_entry1(ll_backend__switch_case__generate_case_code_or_jump_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__switch_case__generate_case_code_or_jump_4_0);
	MR_init_label5(ll_backend__switch_case__generate_case_code_or_jump_4_0,2,7,9,4,11)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'generate_case_code_or_jump'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__ll_backend__switch_case__generate_case_code_or_jump_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(2) = MR_r1;
	MR_sv(1) = MR_r2;
	MR_sv(3) = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, label);
	MR_sv(4) = (MR_Word) MR_CTOR0_ADDR(ll_backend__switch_case, case_label_info);
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_np_call_localret_ent(map__lookup_3_0,
		ll_backend__switch_case__generate_case_code_or_jump_4_0_i2);
MR_def_label(ll_backend__switch_case__generate_case_code_or_jump_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(0, MR_r1, 2);
	if (MR_INT_NE(MR_tempr1,1)) {
		MR_GOTO_LAB(ll_backend__switch_case__generate_case_code_or_jump_4_0_i4);
	}
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(2);
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 2);
	MR_sv(2) = MR_tempr2;
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 6;
	MR_tfield(3, MR_tempr2, 1) = MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("goto ", 5);
	MR_r2 = MR_tfield(0, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__switch_case__generate_case_code_or_jump_4_0_i7);
MR_def_label(ll_backend__switch_case__generate_case_code_or_jump_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 0) = MR_sv(2);
	MR_tfield(0, MR_r2, 1) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	MR_np_call_localret_ent(fn__cord__singleton_1_0,
		ll_backend__switch_case__generate_case_code_or_jump_4_0_i9);
MR_def_label(ll_backend__switch_case__generate_case_code_or_jump_4_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_decr_sp_and_return(5);
MR_def_label(ll_backend__switch_case__generate_case_code_or_jump_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_r4 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_tfield(0, MR_r1, 0);
	MR_tfield(0, MR_tempr1, 1) = MR_tfield(0, MR_r1, 1);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tempr2 = MR_sv(2);
	MR_sv(2) = MR_tfield(0, MR_tempr1, 1);
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_tempr2;
	MR_r5 = MR_sv(1);
	}
	MR_np_call_localret_ent(map__det_update_4_0,
		ll_backend__switch_case__generate_case_code_or_jump_4_0_i11);
MR_def_label(ll_backend__switch_case__generate_case_code_or_jump_4_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	MR_decr_sp_and_return(5);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__switch_case_module2)
	MR_init_entry1(ll_backend__switch_case__add_remaining_case_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__switch_case__add_remaining_case_4_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'add_remaining_case'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__ll_backend__switch_case__add_remaining_case_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_r2 = MR_r3;
	MR_np_tailcall_ent(f_108_108_95_98_97_99_107_101_110_100_95_95_115_119_105_116_99_104_95_99_97_115_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_100_100_95_114_101_109_97_105_110_105_110_103_95_99_97_115_101_95_95_91_49_93_95_48_4_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__switch_case_module3)
	MR_init_entry1(__Unify___ll_backend__switch_case__case_code_included_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___ll_backend__switch_case__case_code_included_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___ll_backend__switch_case__case_code_included_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_r1 == MR_r2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(private_builtin__builtin_compare_int_3_0);

MR_BEGIN_MODULE(ll_backend__switch_case_module4)
	MR_init_entry1(__Compare___ll_backend__switch_case__case_code_included_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___ll_backend__switch_case__case_code_included_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___ll_backend__switch_case__case_code_included_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___cord__cord_1_0);

MR_BEGIN_MODULE(ll_backend__switch_case_module5)
	MR_init_entry1(__Unify___ll_backend__switch_case__case_label_info_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___ll_backend__switch_case__case_label_info_0_0);
	MR_init_label3(__Unify___ll_backend__switch_case__case_label_info_0_0,4,6,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___ll_backend__switch_case__case_label_info_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___ll_backend__switch_case__case_label_info_0_0_i6);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_tempr1;
	MR_tempr2 = MR_r2;
	MR_sv(2) = MR_tempr2;
	MR_tempr3 = MR_tfield(0, MR_tempr1, 0);
	MR_tempr4 = MR_tfield(0, MR_tempr2, 0);
	if ((strcmp((char *) (MR_Word *) MR_tempr3, (char *) (MR_Word *) MR_tempr4) != 0)) {
		MR_GOTO_LAB(__Unify___ll_backend__switch_case__case_label_info_0_0_i1);
	}
	MR_tempr3 = MR_tempr1;
	MR_sv(1) = MR_tfield(0, MR_tempr3, 2);
	MR_tempr4 = MR_tempr2;
	MR_sv(2) = MR_tfield(0, MR_tempr4, 2);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	MR_r2 = MR_tfield(0, MR_tempr3, 1);
	MR_r3 = MR_tfield(0, MR_tempr4, 1);
	}
	MR_np_call_localret_ent(__Unify___cord__cord_1_0,
		__Unify___ll_backend__switch_case__case_label_info_0_0_i4);
MR_def_label(__Unify___ll_backend__switch_case__case_label_info_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___ll_backend__switch_case__case_label_info_0_0_i1);
	}
	MR_r1 = (MR_sv(1) == MR_sv(2));
	MR_decr_sp_and_return(3);
MR_def_label(__Unify___ll_backend__switch_case__case_label_info_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___ll_backend__switch_case__case_label_info_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(private_builtin__builtin_compare_string_3_0);
MR_decl_entry(__Compare___cord__cord_1_0);

MR_BEGIN_MODULE(ll_backend__switch_case_module6)
	MR_init_entry1(__Compare___ll_backend__switch_case__case_label_info_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___ll_backend__switch_case__case_label_info_0_0);
	MR_init_label5(__Compare___ll_backend__switch_case__case_label_info_0_0,3,2,5,9,29)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___ll_backend__switch_case__case_label_info_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___ll_backend__switch_case__case_label_info_0_0_i3);
	}
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___ll_backend__switch_case__case_label_info_0_0_i2);
MR_def_label(__Compare___ll_backend__switch_case__case_label_info_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___ll_backend__switch_case__case_label_info_0_0,2)
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
	MR_np_call_localret_ent(private_builtin__builtin_compare_string_3_0,
		__Compare___ll_backend__switch_case__case_label_info_0_0_i5);
MR_def_label(__Compare___ll_backend__switch_case__case_label_info_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__switch_case__case_label_info_0_0_i29);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(3);
	MR_np_call_localret_ent(__Compare___cord__cord_1_0,
		__Compare___ll_backend__switch_case__case_label_info_0_0_i9);
MR_def_label(__Compare___ll_backend__switch_case__case_label_info_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__switch_case__case_label_info_0_0_i29);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(4);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
MR_def_label(__Compare___ll_backend__switch_case__case_label_info_0_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___tree234__tree234_2_0);

MR_BEGIN_MODULE(ll_backend__switch_case_module7)
	MR_init_entry1(__Unify___ll_backend__switch_case__case_label_map_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___ll_backend__switch_case__case_label_map_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___ll_backend__switch_case__case_label_map_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, label);
	MR_tempr2 = MR_r2;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(ll_backend__switch_case, case_label_info);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tempr2;
	MR_np_tailcall_ent(__Unify___tree234__tree234_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Compare___tree234__tree234_2_0);

MR_BEGIN_MODULE(ll_backend__switch_case_module8)
	MR_init_entry1(__Compare___ll_backend__switch_case__case_label_map_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___ll_backend__switch_case__case_label_map_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___ll_backend__switch_case__case_label_map_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, label);
	MR_tempr2 = MR_r2;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(ll_backend__switch_case, case_label_info);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tempr2;
	MR_np_tailcall_ent(__Compare___tree234__tree234_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___hlds__hlds_goal__hlds_goal_info_0_0);
MR_decl_entry(__Unify___ll_backend__code_info__position_info_0_0);
MR_decl_entry(__Unify___ll_backend__llds__label_0_0);

MR_BEGIN_MODULE(ll_backend__switch_case_module9)
	MR_init_entry1(__Unify___ll_backend__switch_case__represent_params_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___ll_backend__switch_case__represent_params_0_0);
	MR_init_label4(__Unify___ll_backend__switch_case__represent_params_0_0,4,6,10,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___ll_backend__switch_case__represent_params_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___ll_backend__switch_case__represent_params_0_0_i10);
	}
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_tempr1;
	MR_tempr2 = MR_r2;
	MR_sv(2) = MR_tempr2;
	MR_tempr3 = MR_tfield(0, MR_tempr1, 0);
	MR_tempr4 = MR_tfield(0, MR_tempr2, 0);
	if ((strcmp((char *) (MR_Word *) MR_tempr3, (char *) (MR_Word *) MR_tempr4) != 0)) {
		MR_GOTO_LAB(__Unify___ll_backend__switch_case__represent_params_0_0_i1);
	}
	MR_tempr3 = MR_tempr1;
	MR_sv(1) = MR_tfield(0, MR_tempr3, 2);
	MR_tempr4 = MR_tempr2;
	MR_sv(2) = MR_tfield(0, MR_tempr3, 3);
	MR_sv(3) = MR_tfield(0, MR_tempr3, 4);
	MR_sv(4) = MR_tfield(0, MR_tempr4, 2);
	MR_sv(5) = MR_tfield(0, MR_tempr4, 3);
	MR_sv(6) = MR_tfield(0, MR_tempr4, 4);
	MR_r1 = MR_tfield(0, MR_tempr3, 1);
	MR_r2 = MR_tfield(0, MR_tempr4, 1);
	}
	MR_np_call_localret_ent(__Unify___hlds__hlds_goal__hlds_goal_info_0_0,
		__Unify___ll_backend__switch_case__represent_params_0_0_i4);
MR_def_label(__Unify___ll_backend__switch_case__represent_params_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___ll_backend__switch_case__represent_params_0_0_i1);
	}
	if ((MR_sv(1) != MR_sv(4))) {
		MR_GOTO_LAB(__Unify___ll_backend__switch_case__represent_params_0_0_i1);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(__Unify___ll_backend__code_info__position_info_0_0,
		__Unify___ll_backend__switch_case__represent_params_0_0_i6);
MR_def_label(__Unify___ll_backend__switch_case__represent_params_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___ll_backend__switch_case__represent_params_0_0_i1);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(6);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(__Unify___ll_backend__llds__label_0_0);
MR_def_label(__Unify___ll_backend__switch_case__represent_params_0_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___ll_backend__switch_case__represent_params_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(7);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Compare___hlds__hlds_goal__hlds_goal_info_0_0);
MR_decl_entry(__Compare___ll_backend__code_info__position_info_0_0);
MR_decl_entry(__Compare___ll_backend__llds__label_0_0);

MR_BEGIN_MODULE(ll_backend__switch_case_module10)
	MR_init_entry1(__Compare___ll_backend__switch_case__represent_params_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___ll_backend__switch_case__represent_params_0_0);
	MR_init_label7(__Compare___ll_backend__switch_case__represent_params_0_0,3,2,5,9,13,17,45)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___ll_backend__switch_case__represent_params_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___ll_backend__switch_case__represent_params_0_0_i3);
	}
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___ll_backend__switch_case__represent_params_0_0_i2);
MR_def_label(__Compare___ll_backend__switch_case__represent_params_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___ll_backend__switch_case__represent_params_0_0,2)
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
	MR_np_call_localret_ent(private_builtin__builtin_compare_string_3_0,
		__Compare___ll_backend__switch_case__represent_params_0_0_i5);
MR_def_label(__Compare___ll_backend__switch_case__represent_params_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__switch_case__represent_params_0_0_i45);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(__Compare___hlds__hlds_goal__hlds_goal_info_0_0,
		__Compare___ll_backend__switch_case__represent_params_0_0_i9);
MR_def_label(__Compare___ll_backend__switch_case__represent_params_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__switch_case__represent_params_0_0_i45);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(6);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___ll_backend__switch_case__represent_params_0_0_i13);
MR_def_label(__Compare___ll_backend__switch_case__represent_params_0_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__switch_case__represent_params_0_0_i45);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(7);
	MR_np_call_localret_ent(__Compare___ll_backend__code_info__position_info_0_0,
		__Compare___ll_backend__switch_case__represent_params_0_0_i17);
MR_def_label(__Compare___ll_backend__switch_case__represent_params_0_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__switch_case__represent_params_0_0_i45);
	}
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(8);
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_np_tailcall_ent(__Compare___ll_backend__llds__label_0_0);
MR_def_label(__Compare___ll_backend__switch_case__represent_params_0_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(9);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__switch_case_module11)
	MR_init_entry1(f_108_108_95_98_97_99_107_101_110_100_95_95_115_119_105_116_99_104_95_99_97_115_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_100_100_95_114_101_109_97_105_110_105_110_103_95_99_97_115_101_95_95_91_49_93_95_48_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__f_108_108_95_98_97_99_107_101_110_100_95_95_115_119_105_116_99_104_95_99_97_115_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_100_100_95_114_101_109_97_105_110_105_110_103_95_99_97_115_101_95_95_91_49_93_95_48_4_0);
	MR_init_label1(f_108_108_95_98_97_99_107_101_110_100_95_95_115_119_105_116_99_104_95_99_97_115_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_100_100_95_114_101_109_97_105_110_105_110_103_95_99_97_115_101_95_95_91_49_93_95_48_4_0,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__pred__add_remaining_case__[1]_0'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__f_108_108_95_98_97_99_107_101_110_100_95_95_115_119_105_116_99_104_95_99_97_115_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_100_100_95_114_101_109_97_105_110_105_110_103_95_99_97_115_101_95_95_91_49_93_95_48_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(0, MR_r1, 2);
	if (MR_INT_NE(MR_tempr1,1)) {
		MR_GOTO_LAB(f_108_108_95_98_97_99_107_101_110_100_95_95_115_119_105_116_99_104_95_99_97_115_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_100_100_95_114_101_109_97_105_110_105_110_103_95_99_97_115_101_95_95_91_49_93_95_48_4_0_i3);
	}
	MR_r1 = MR_r2;
	MR_proceed();
	}
MR_def_label(f_108_108_95_98_97_99_107_101_110_100_95_95_115_119_105_116_99_104_95_99_97_115_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_100_100_95_114_101_109_97_105_110_105_110_103_95_99_97_115_101_95_95_91_49_93_95_48_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	MR_r3 = MR_tfield(0, MR_tempr1, 1);
	MR_np_tailcall_ent(fn__f_99_111_114_100_95_95_43_43_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

static void mercury__ll_backend__switch_case_maybe_bunch_0(void)
{
	ll_backend__switch_case_module0();
	ll_backend__switch_case_module1();
	ll_backend__switch_case_module2();
	ll_backend__switch_case_module3();
	ll_backend__switch_case_module4();
	ll_backend__switch_case_module5();
	ll_backend__switch_case_module6();
	ll_backend__switch_case_module7();
	ll_backend__switch_case_module8();
	ll_backend__switch_case_module9();
	ll_backend__switch_case_module10();
	ll_backend__switch_case_module11();
}

/* suppress gcc -Wmissing-decls warnings */
void mercury__ll_backend__switch_case__init(void);
void mercury__ll_backend__switch_case__init_type_tables(void);
void mercury__ll_backend__switch_case__init_debugger(void);
#ifdef MR_DEEP_PROFILING
void mercury__ll_backend__switch_case__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp);
#endif
#ifdef MR_RECORD_TERM_SIZES
void mercury__ll_backend__switch_case__init_complexity_procs(void);
#endif
#ifdef MR_THREADSCOPE
void mercury__ll_backend__switch_case__init_threadscope_string_table(void);
#endif

void mercury__ll_backend__switch_case__init(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	mercury__ll_backend__switch_case_maybe_bunch_0();
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_ll_backend__switch_case__type_ctor_info_case_code_included_0,
		ll_backend__switch_case__case_code_included_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_ll_backend__switch_case__type_ctor_info_case_label_info_0,
		ll_backend__switch_case__case_label_info_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_ll_backend__switch_case__type_ctor_info_case_label_map_0,
		ll_backend__switch_case__case_label_map_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_ll_backend__switch_case__type_ctor_info_represent_params_0,
		ll_backend__switch_case__represent_params_0_0);
	mercury__ll_backend__switch_case__init_debugger();
}

void mercury__ll_backend__switch_case__init_type_tables(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	{
		MR_register_type_ctor_info(
		&mercury_data_ll_backend__switch_case__type_ctor_info_case_code_included_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_ll_backend__switch_case__type_ctor_info_case_label_info_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_ll_backend__switch_case__type_ctor_info_case_label_map_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_ll_backend__switch_case__type_ctor_info_represent_params_0);
	}
}


void mercury__ll_backend__switch_case__init_debugger(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}

#ifdef MR_DEEP_PROFILING

void mercury__ll_backend__switch_case__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp)
{
	MR_write_out_module_proc_reps_start(procrep_fp, &mercury_data__module_common_layout__ll_backend__switch_case);
	MR_write_out_module_proc_reps_end(procrep_fp);
}

#endif

#ifdef MR_RECORD_TERM_SIZES

void mercury__ll_backend__switch_case__init_complexity_procs(void)
{
}

#endif

#ifdef MR_THREADSCOPE

void mercury__ll_backend__switch_case__init_threadscope_string_table(void)
{
}

#endif

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;
