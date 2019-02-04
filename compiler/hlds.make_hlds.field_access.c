/*
** Automatically generated from `field_access.m'
** by the Mercury compiler,
** version rotd-2011-08-03, configured for x86_64-unknown-linux-gnu.
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
INIT mercury__hlds__make_hlds__field_access__init
ENDINIT
*/

#define MR_ALLOW_RESET
#include "mercury_imp.h"
#line 140 "../library/io.int2"
#include "io.mh"

#line 28 "hlds.make_hlds.field_access.c"
#line 150 "../library/io.int2"
#include "string.mh"

#line 32 "hlds.make_hlds.field_access.c"
#line 33 "../library/array.int2"
#include "array.mh"

#line 36 "hlds.make_hlds.field_access.c"
#line 31 "../library/bitmap.int2"
#include "bitmap.mh"

#line 40 "hlds.make_hlds.field_access.c"
#line 30 "../library/time.int2"
#include "time.mh"

#line 44 "hlds.make_hlds.field_access.c"
#line 39 "../mdbcomp/mdbcomp.rtti_access.int2"
#include "mdbcomp.rtti_access.mh"

#line 48 "hlds.make_hlds.field_access.c"
#line 49 "hlds.make_hlds.field_access.c"
#include "hlds.make_hlds.field_access.mh"

#line 52 "hlds.make_hlds.field_access.c"
#line 53 "hlds.make_hlds.field_access.c"
#ifndef HLDS__MAKE_HLDS__FIELD_ACCESS_DECL_GUARD
#define HLDS__MAKE_HLDS__FIELD_ACCESS_DECL_GUARD

#line 57 "hlds.make_hlds.field_access.c"
#line 58 "hlds.make_hlds.field_access.c"

#endif
#line 61 "hlds.make_hlds.field_access.c"

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
	MR_Integer f1;
	MR_String f2;
};
MR_STATIC_LINKAGE const struct mercury_type_1 mercury_common_1[];

struct mercury_type_2 {
	MR_Word * f1[3];
};
MR_STATIC_LINKAGE const struct mercury_type_2 mercury_common_2[];

extern const MR_TypeCtorInfo_Struct
	mercury_data_hlds__make_hlds__field_access__type_ctor_info_field_list_0;
MR_decl_label4(hlds__make_hlds__field_access__construct_field_access_function_call_12_0, 2,4,5,8)
MR_decl_label4(hlds__make_hlds__field_access__expand_dcg_field_extraction_goal_23_0, 3,4,6,7)
MR_decl_label3(hlds__make_hlds__field_access__expand_get_field_function_call_23_0, 2,3,4)
MR_decl_label10(hlds__make_hlds__field_access__expand_get_field_function_call_2_23_0, 4,7,10,9,14,15,16,19,8,22)
MR_decl_label4(hlds__make_hlds__field_access__expand_get_field_function_call_2_23_0, 23,24,25,3)
MR_decl_label3(hlds__make_hlds__field_access__expand_set_field_function_call_23_0, 2,3,4)
MR_decl_label10(hlds__make_hlds__field_access__expand_set_field_function_call_2_23_0, 4,10,11,6,15,16,20,21,23,24)
MR_decl_label9(hlds__make_hlds__field_access__expand_set_field_function_call_2_23_0, 26,29,32,5,34,35,36,37,3)
MR_decl_label2(hlds__make_hlds__field_access__maybe_parse_field_list_3_0, 2,1)
MR_decl_label10(hlds__make_hlds__field_access__parse_field_list_4_0, 10,12,9,18,19,28,2,38,37,43)
MR_decl_label2(hlds__make_hlds__field_access__parse_field_list_4_0, 44,48)
MR_decl_label2(fn__hlds__make_hlds__field_access__make_field_list_error_4_0, 2,11)
MR_decl_static(hlds__make_hlds__field_access__construct_field_access_function_call_12_0)
MR_decl_static(hlds__make_hlds__field_access__expand_set_field_function_call_2_23_0)
MR_def_extern_entry(hlds__make_hlds__field_access__expand_set_field_function_call_23_0)
MR_decl_static(hlds__make_hlds__field_access__expand_get_field_function_call_2_23_0)
MR_def_extern_entry(hlds__make_hlds__field_access__expand_dcg_field_extraction_goal_23_0)
MR_def_extern_entry(hlds__make_hlds__field_access__expand_get_field_function_call_23_0)
MR_decl_static(fn__hlds__make_hlds__field_access__make_field_list_error_4_0)
MR_def_extern_entry(hlds__make_hlds__field_access__parse_field_list_4_0)
MR_def_extern_entry(hlds__make_hlds__field_access__maybe_parse_field_list_3_0)
MR_def_extern_entry(__Unify___hlds__make_hlds__field_access__field_list_0_0)
MR_def_extern_entry(__Compare___hlds__make_hlds__field_access__field_list_0_0)

extern const MR_TypeCtorInfo_Struct mercury_data_term__type_ctor_info_var_1;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_prog_var_type_0;
extern const MR_TypeCtorInfo_Struct mercury_data_term__type_ctor_info_term_1;
extern const MR_TypeCtorInfo_Struct mercury_data_list__type_ctor_info_list_1;
static const struct mercury_type_0 mercury_common_0[5] =
{
{
{
MR_CTOR1_ADDR(term, var),
MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type)
}
},
{
{
MR_CTOR1_ADDR(term, term),
MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type)
}
},
{
{
MR_tbmkword(0, 1),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(3,1,1),
MR_TAG_COMMON(1,0,2)
}
},
{
{
MR_LIST_CTOR_ADDR,
MR_TAG_COMMON(0,0,1)
}
},
};

static const struct mercury_type_1 mercury_common_1[2] =
{
{
4,
MR_string_const("Error: expected field name at term", 34)
},
{
3,
MR_string_const(".", 1)
},
};

extern const MR_TypeCtorInfo_Struct mercury_data_pair__type_ctor_info_pair_2;
extern const MR_TypeCtorInfo_Struct mercury_data_mdbcomp__prim_data__type_ctor_info_sym_name_0;
static const struct mercury_type_2 mercury_common_2[1] =
{
{
{
MR_CTOR_ADDR(pair, pair, 2),
MR_CTOR0_ADDR(mdbcomp__prim_data, sym_name),
MR_TAG_COMMON(0,0,4)
}
},
};
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_TypeInfo_Struct1 mercury_data_term__ti_term_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
	&mercury_data_term__type_ctor_info_term_1,
{	(MR_TypeInfo) &mercury_data_parse_tree__prog_data__type_ctor_info_prog_var_type_0
}};

static const MR_FA_TypeInfo_Struct1 mercury_data_list__ti_list_1term__ti_term_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
	&mercury_data_list__type_ctor_info_list_1,
{	(MR_TypeInfo) &mercury_data_term__ti_term_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
}};
extern const MR_TypeCtorInfo_Struct mercury_data_mdbcomp__prim_data__type_ctor_info_sym_name_0;

static const MR_FA_TypeInfo_Struct2 mercury_data_pair__ti_pair_2mdbcomp__prim_data__type_ctor_info_sym_name_0list__ti_list_1term__ti_term_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
	&mercury_data_pair__type_ctor_info_pair_2,
{	(MR_TypeInfo) &mercury_data_mdbcomp__prim_data__type_ctor_info_sym_name_0,
	(MR_TypeInfo) &mercury_data_list__ti_list_1term__ti_term_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
}};

static const MR_FA_TypeInfo_Struct1 mercury_data_list__ti_list_1pair__ti_pair_2mdbcomp__prim_data__type_ctor_info_sym_name_0list__ti_list_1term__ti_term_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
	&mercury_data_list__type_ctor_info_list_1,
{	(MR_TypeInfo) &mercury_data_pair__ti_pair_2mdbcomp__prim_data__type_ctor_info_sym_name_0list__ti_list_1term__ti_term_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
}};

const MR_TypeCtorInfo_Struct mercury_data_hlds__make_hlds__field_access__type_ctor_info_field_list_0 = {
	0,
	15,
	-1,
	MR_TYPECTOR_REP_EQUIV_GROUND,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___hlds__make_hlds__field_access__field_list_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___hlds__make_hlds__field_access__field_list_0_0)),
	"hlds.make_hlds.field_access",
	"field_list",
	{ 0 },
	{ (void *)&mercury_data_list__ti_list_1pair__ti_pair_2mdbcomp__prim_data__type_ctor_info_sym_name_0list__ti_list_1term__ti_term_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 },
	-1,
	0,
	NULL
};



MR_decl_entry(hlds__hlds_pred__field_access_function_name_3_0);
MR_decl_entry(list__length_2_0);
MR_decl_entry(fn__parse_tree__prog_data__cons_id_dummy_type_ctor_0_0);
MR_decl_entry(hlds__make_hlds__qual_info__make_atomic_unification_9_0);

MR_BEGIN_MODULE(hlds__make_hlds__field_access_module0)
	MR_init_entry1(hlds__make_hlds__field_access__construct_field_access_function_call_12_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__make_hlds__field_access__construct_field_access_function_call_12_0);
	MR_init_label4(hlds__make_hlds__field_access__construct_field_access_function_call_12_0,2,4,5,8)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'construct_field_access_function_call'/12 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__make_hlds__field_access__construct_field_access_function_call_12_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(10);
	MR_sv(10) = (MR_Word) MR_succip;
	MR_sv(6) = MR_r2;
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r4;
	MR_sv(3) = MR_r6;
	MR_sv(4) = MR_r7;
	MR_sv(5) = MR_r8;
	MR_sv(9) = MR_r9;
	MR_r2 = MR_r5;
	MR_np_call_localret_ent(hlds__hlds_pred__field_access_function_name_3_0,
		hlds__make_hlds__field_access__construct_field_access_function_call_12_0_i2);
MR_def_label(hlds__make_hlds__field_access__construct_field_access_function_call_12_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(list__length_2_0,
		hlds__make_hlds__field_access__construct_field_access_function_call_12_0_i4);
MR_def_label(hlds__make_hlds__field_access__construct_field_access_function_call_12_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_np_call_localret_ent(fn__parse_tree__prog_data__cons_id_dummy_type_ctor_0_0,
		hlds__make_hlds__field_access__construct_field_access_function_call_12_0_i5);
MR_def_label(hlds__make_hlds__field_access__construct_field_access_function_call_12_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 4);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 2;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(7);
	MR_tfield(3, MR_tempr1, 2) = MR_sv(8);
	MR_tfield(3, MR_tempr1, 3) = MR_r1;
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 3);
	MR_tfield(1, MR_r2, 0) = MR_tempr1;
	MR_tfield(1, MR_r2, 1) = (MR_Integer) 0;
	MR_tfield(1, MR_r2, 2) = MR_sv(4);
	MR_tempr2 = MR_sv(6);
	MR_sv(6) = MR_tempr1;
	MR_r1 = MR_sv(3);
	MR_r3 = MR_tempr2;
	MR_r4 = MR_sv(1);
	MR_r5 = MR_sv(2);
	MR_r6 = MR_sv(5);
	MR_r7 = MR_sv(9);
	}
	MR_np_call_localret_ent(hlds__make_hlds__qual_info__make_atomic_unification_9_0,
		hlds__make_hlds__field_access__construct_field_access_function_call_12_0_i8);
MR_def_label(hlds__make_hlds__field_access__construct_field_access_function_call_12_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	MR_decr_sp_and_return(10);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__make_hlds__superhomogeneous__make_fresh_arg_vars_8_0);
MR_decl_entry(fn__f_108_105_115_116_95_95_43_43_2_0);
MR_decl_entry(varset__new_var_3_0);
MR_decl_entry(fn__list__length_1_0);
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_goal__type_ctor_info_hlds_goal_0;
MR_decl_entry(hlds__hlds_goal__goal_info_init_2_0);
MR_decl_entry(hlds__hlds_goal__conj_list_to_goal_3_0);
MR_decl_entry(hlds__make_hlds__superhomogeneous__insert_arg_unifications_19_0);
MR_decl_entry(hlds__make_hlds__state_var__svar_goal_to_conj_list_4_0);
MR_decl_entry(require__unexpected_3_0);

MR_BEGIN_MODULE(hlds__make_hlds__field_access_module1)
	MR_init_entry1(hlds__make_hlds__field_access__expand_set_field_function_call_2_23_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__make_hlds__field_access__expand_set_field_function_call_2_23_0);
	MR_init_label10(hlds__make_hlds__field_access__expand_set_field_function_call_2_23_0,4,10,11,6,15,16,20,21,23,24)
	MR_init_label9(hlds__make_hlds__field_access__expand_set_field_function_call_2_23_0,26,29,32,5,34,35,36,37,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'expand_set_field_function_call_2'/23 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__make_hlds__field_access__expand_set_field_function_call_2_23_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r4,0,0)) {
		MR_GOTO_LAB(hlds__make_hlds__field_access__expand_set_field_function_call_2_23_0_i3);
	}
	MR_incr_sp(21);
	MR_sv(21) = (MR_Word) MR_succip;
	MR_sv(3) = MR_r1;
	MR_sv(4) = MR_r2;
	MR_sv(5) = MR_r3;
	MR_sv(2) = MR_r5;
	MR_sv(1) = MR_r6;
	MR_sv(6) = MR_r7;
	MR_sv(8) = MR_r9;
	MR_sv(9) = MR_r11;
	MR_sv(7) = MR_r12;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r4;
	MR_tempr1 = MR_tfield(1, MR_tempr2, 0);
	MR_sv(10) = MR_tfield(0, MR_tempr1, 0);
	MR_sv(11) = MR_tfield(0, MR_tempr1, 1);
	MR_sv(12) = MR_tfield(1, MR_tempr2, 1);
	MR_r1 = MR_sv(11);
	MR_r2 = MR_r10;
	MR_r3 = MR_r8;
	MR_r4 = MR_r13;
	}
	MR_np_call_localret_ent(hlds__make_hlds__superhomogeneous__make_fresh_arg_vars_8_0,
		hlds__make_hlds__field_access__expand_set_field_function_call_2_23_0_i4);
MR_def_label(hlds__make_hlds__field_access__expand_set_field_function_call_2_23_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(12),0,0)) {
		MR_GOTO_LAB(hlds__make_hlds__field_access__expand_set_field_function_call_2_23_0_i6);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_sv(13) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(16) = MR_r3;
	MR_sv(17) = MR_r4;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r2 = MR_sv(13);
	MR_r3 = MR_tempr2;
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		hlds__make_hlds__field_access__expand_set_field_function_call_2_23_0_i10);
MR_def_label(hlds__make_hlds__field_access__expand_set_field_function_call_2_23_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 1;
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(5);
	MR_r5 = MR_sv(10);
	MR_r6 = MR_sv(6);
	MR_r7 = MR_tempr1;
	MR_r8 = (MR_Integer) 0;
	MR_r9 = MR_sv(7);
	}
	MR_np_call_localret_ent(hlds__make_hlds__field_access__construct_field_access_function_call_12_0,
		hlds__make_hlds__field_access__expand_set_field_function_call_2_23_0_i11);
MR_def_label(hlds__make_hlds__field_access__expand_set_field_function_call_2_23_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_r4 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tempr3 = MR_sv(5);
	MR_tfield(0, MR_tempr1, 1) = MR_tempr3;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_r5 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_r2;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_r2, 2, (MR_Integer) 3);
	MR_tfield(2, MR_r2, 0) = MR_r1;
	MR_tfield(2, MR_r2, 1) = MR_sv(4);
	MR_tfield(2, MR_r2, 2) = MR_tempr3;
	MR_r1 = MR_sv(3);
	MR_sv(1) = MR_tfield(0, MR_tempr1, 0);
	MR_sv(7) = MR_sv(2);
	MR_sv(2) = MR_tempr1;
	MR_sv(6) = (MR_Integer) 1;
	MR_sv(4) = MR_tempr2;
	MR_sv(5) = MR_r2;
	MR_r6 = MR_sv(8);
	MR_sv(8) = MR_sv(16);
	MR_sv(10) = MR_sv(9);
	MR_sv(9) = MR_r6;
	MR_sv(12) = MR_r3;
	MR_sv(14) = MR_sv(17);
	MR_GOTO_LAB(hlds__make_hlds__field_access__expand_set_field_function_call_2_23_0_i5);
	}
MR_def_label(hlds__make_hlds__field_access__expand_set_field_function_call_2_23_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(13) = MR_r1;
	MR_sv(16) = MR_r3;
	MR_sv(17) = MR_r4;
	MR_sv(19) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r1 = MR_sv(19);
	MR_np_call_localret_ent(varset__new_var_3_0,
		hlds__make_hlds__field_access__expand_set_field_function_call_2_23_0_i15);
MR_def_label(hlds__make_hlds__field_access__expand_set_field_function_call_2_23_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(14) = MR_r1;
	MR_r1 = MR_sv(19);
	MR_np_call_localret_ent(varset__new_var_3_0,
		hlds__make_hlds__field_access__expand_set_field_function_call_2_23_0_i16);
MR_def_label(hlds__make_hlds__field_access__expand_set_field_function_call_2_23_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_sv(15) = MR_r1;
	MR_sv(18) = MR_r2;
	MR_sv(20) = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r1 = MR_sv(20);
	MR_r2 = MR_sv(13);
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		hlds__make_hlds__field_access__expand_set_field_function_call_2_23_0_i20);
MR_def_label(hlds__make_hlds__field_access__expand_set_field_function_call_2_23_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 1;
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(5);
	MR_r5 = MR_sv(10);
	MR_r6 = MR_sv(6);
	MR_r7 = MR_tempr1;
	MR_r8 = (MR_Integer) 0;
	MR_r9 = MR_sv(7);
	}
	MR_np_call_localret_ent(hlds__make_hlds__field_access__construct_field_access_function_call_12_0,
		hlds__make_hlds__field_access__expand_set_field_function_call_2_23_0_i21);
MR_def_label(hlds__make_hlds__field_access__expand_set_field_function_call_2_23_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_sv(1) = MR_r1;
	MR_sv(6) = MR_r2;
	MR_sv(7) = MR_r3;
	MR_r1 = MR_sv(20);
	MR_r2 = MR_sv(13);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		hlds__make_hlds__field_access__expand_set_field_function_call_2_23_0_i23);
MR_def_label(hlds__make_hlds__field_access__expand_set_field_function_call_2_23_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 0;
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(5);
	MR_r5 = MR_sv(10);
	MR_r6 = MR_sv(14);
	MR_r7 = MR_tempr1;
	MR_r8 = (MR_Integer) 0;
	MR_r9 = MR_sv(7);
	}
	MR_np_call_localret_ent(hlds__make_hlds__field_access__construct_field_access_function_call_12_0,
		hlds__make_hlds__field_access__expand_set_field_function_call_2_23_0_i24);
MR_def_label(hlds__make_hlds__field_access__expand_set_field_function_call_2_23_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r2;
	MR_sv(10) = MR_r3;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,1);
	MR_r2 = MR_sv(11);
	MR_np_call_localret_ent(fn__list__length_1_0,
		hlds__make_hlds__field_access__expand_set_field_function_call_2_23_0_i26);
MR_def_label(hlds__make_hlds__field_access__expand_set_field_function_call_2_23_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 1) = ((MR_Integer) 2 + (MR_Integer) MR_r1);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = MR_sv(5);
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(4);
	MR_r4 = MR_sv(12);
	MR_r5 = MR_sv(2);
	MR_r6 = MR_sv(14);
	MR_r7 = MR_sv(15);
	MR_r8 = MR_sv(16);
	MR_r9 = MR_sv(8);
	MR_r10 = MR_sv(18);
	MR_r11 = MR_sv(9);
	MR_r12 = MR_sv(10);
	MR_r13 = MR_sv(17);
	}
	MR_np_localcall_lab(hlds__make_hlds__field_access__expand_set_field_function_call_2_23_0,
		hlds__make_hlds__field_access__expand_set_field_function_call_2_23_0_i29);
MR_def_label(hlds__make_hlds__field_access__expand_set_field_function_call_2_23_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(7);
	MR_tfield(1, MR_tempr1, 1) = MR_r3;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_sv(6);
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_sv(2) = MR_r2;
	MR_sv(6) = (((MR_Integer) 1 + (MR_Integer) MR_r4) + (MR_Integer) 1);
	MR_sv(8) = MR_r5;
	MR_sv(9) = MR_r6;
	MR_sv(7) = MR_r7;
	MR_sv(10) = MR_r8;
	MR_sv(12) = MR_r9;
	MR_sv(14) = MR_r10;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		hlds__make_hlds__field_access__expand_set_field_function_call_2_23_0_i32);
MR_def_label(hlds__make_hlds__field_access__expand_set_field_function_call_2_23_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 3);
	MR_tfield(2, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(2, MR_tempr1, 1) = MR_sv(4);
	MR_tfield(2, MR_tempr1, 2) = MR_sv(5);
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_sv(5) = MR_tempr1;
	}
MR_def_label(hlds__make_hlds__field_access__expand_set_field_function_call_2_23_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_init_2_0,
		hlds__make_hlds__field_access__expand_set_field_function_call_2_23_0_i34);
MR_def_label(hlds__make_hlds__field_access__expand_set_field_function_call_2_23_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_goal__conj_list_to_goal_3_0,
		hlds__make_hlds__field_access__expand_set_field_function_call_2_23_0_i35);
MR_def_label(hlds__make_hlds__field_access__expand_set_field_function_call_2_23_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(13);
	MR_r2 = MR_sv(11);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(5);
	MR_r5 = MR_tempr1;
	MR_r6 = MR_sv(8);
	MR_r7 = MR_sv(9);
	MR_r8 = MR_sv(7);
	MR_r9 = MR_sv(10);
	MR_r10 = MR_sv(12);
	MR_r11 = MR_sv(14);
	}
	MR_np_call_localret_ent(hlds__make_hlds__superhomogeneous__insert_arg_unifications_19_0,
		hlds__make_hlds__field_access__expand_set_field_function_call_2_23_0_i36);
MR_def_label(hlds__make_hlds__field_access__expand_set_field_function_call_2_23_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = ((MR_Integer) MR_sv(6) + (MR_Integer) MR_r2);
	MR_sv(4) = MR_r3;
	MR_sv(5) = MR_r5;
	MR_sv(6) = MR_r6;
	MR_sv(8) = MR_r7;
	MR_sv(9) = MR_r8;
	MR_r2 = MR_r4;
	MR_np_call_localret_ent(hlds__make_hlds__state_var__svar_goal_to_conj_list_4_0,
		hlds__make_hlds__field_access__expand_set_field_function_call_2_23_0_i37);
MR_def_label(hlds__make_hlds__field_access__expand_set_field_function_call_2_23_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(4);
	MR_r6 = MR_tempr2;
	MR_r7 = MR_sv(5);
	MR_r8 = MR_sv(6);
	MR_r9 = MR_sv(8);
	MR_r10 = MR_sv(9);
	MR_decr_sp_and_return(21);
	}
MR_def_label(hlds__make_hlds__field_access__expand_set_field_function_call_2_23_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("hlds.make_hlds.field_access", 27);
	MR_r2 = (MR_Word) MR_string_const("predicate \140hlds.make_hlds.field_access.expand_set_field_function_call_2\'/23", 75);
	MR_r3 = (MR_Word) MR_string_const("empty list of field names", 25);
	MR_np_tailcall_ent(require__unexpected_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__make_hlds__field_access_module2)
	MR_init_entry1(hlds__make_hlds__field_access__expand_set_field_function_call_23_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__make_hlds__field_access__expand_set_field_function_call_23_0);
	MR_init_label3(hlds__make_hlds__field_access__expand_set_field_function_call_23_0,2,3,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'expand_set_field_function_call'/23 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__hlds__make_hlds__field_access__expand_set_field_function_call_23_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(11);
	MR_sv(11) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(hlds__make_hlds__field_access__expand_set_field_function_call_2_23_0,
		hlds__make_hlds__field_access__expand_set_field_function_call_23_0_i2);
MR_def_label(hlds__make_hlds__field_access__expand_set_field_function_call_23_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_r3;
	MR_sv(5) = MR_r5;
	MR_sv(6) = MR_r6;
	MR_sv(7) = MR_r7;
	MR_sv(8) = MR_r8;
	MR_sv(9) = MR_r9;
	MR_sv(10) = MR_r10;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_init_2_0,
		hlds__make_hlds__field_access__expand_set_field_function_call_23_0_i3);
MR_def_label(hlds__make_hlds__field_access__expand_set_field_function_call_23_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_goal__conj_list_to_goal_3_0,
		hlds__make_hlds__field_access__expand_set_field_function_call_23_0_i4);
MR_def_label(hlds__make_hlds__field_access__expand_set_field_function_call_23_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(5);
	MR_r6 = MR_sv(6);
	MR_r7 = MR_sv(7);
	MR_r8 = MR_sv(8);
	MR_r9 = MR_sv(9);
	MR_r10 = MR_sv(10);
	MR_decr_sp_and_return(11);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__make_hlds__field_access_module3)
	MR_init_entry1(hlds__make_hlds__field_access__expand_get_field_function_call_2_23_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__make_hlds__field_access__expand_get_field_function_call_2_23_0);
	MR_init_label10(hlds__make_hlds__field_access__expand_get_field_function_call_2_23_0,4,7,10,9,14,15,16,19,8,22)
	MR_init_label4(hlds__make_hlds__field_access__expand_get_field_function_call_2_23_0,23,24,25,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'expand_get_field_function_call_2'/23 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__make_hlds__field_access__expand_get_field_function_call_2_23_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r4,0,0)) {
		MR_GOTO_LAB(hlds__make_hlds__field_access__expand_get_field_function_call_2_23_0_i3);
	}
	MR_incr_sp(18);
	MR_sv(18) = (MR_Word) MR_succip;
	MR_sv(3) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(4) = MR_r3;
	MR_sv(5) = MR_r5;
	MR_sv(1) = MR_r6;
	MR_sv(6) = MR_r7;
	MR_sv(8) = MR_r9;
	MR_sv(9) = MR_r11;
	MR_sv(7) = MR_r12;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r4;
	MR_tempr1 = MR_tfield(1, MR_tempr2, 0);
	MR_sv(10) = MR_tfield(0, MR_tempr1, 0);
	MR_sv(11) = MR_tfield(0, MR_tempr1, 1);
	MR_sv(12) = MR_tfield(1, MR_tempr2, 1);
	MR_r1 = MR_sv(11);
	MR_r2 = MR_r10;
	MR_r3 = MR_r8;
	MR_r4 = MR_r13;
	}
	MR_np_call_localret_ent(hlds__make_hlds__superhomogeneous__make_fresh_arg_vars_8_0,
		hlds__make_hlds__field_access__expand_get_field_function_call_2_23_0_i4);
MR_def_label(hlds__make_hlds__field_access__expand_get_field_function_call_2_23_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_sv(13) = MR_r1;
	MR_sv(1) = MR_r2;
	MR_sv(17) = MR_r3;
	MR_sv(14) = MR_r4;
	MR_sv(15) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_sv(16) = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r1 = MR_sv(16);
	MR_r2 = MR_sv(13);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		hlds__make_hlds__field_access__expand_get_field_function_call_2_23_0_i7);
MR_def_label(hlds__make_hlds__field_access__expand_get_field_function_call_2_23_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(12),0,0)) {
		MR_GOTO_LAB(hlds__make_hlds__field_access__expand_get_field_function_call_2_23_0_i9);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 0;
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(4);
	MR_r5 = MR_sv(10);
	MR_r6 = MR_sv(5);
	MR_r7 = MR_tempr1;
	MR_r8 = MR_sv(6);
	MR_r9 = MR_sv(7);
	}
	MR_np_call_localret_ent(hlds__make_hlds__field_access__construct_field_access_function_call_12_0,
		hlds__make_hlds__field_access__expand_get_field_function_call_2_23_0_i10);
MR_def_label(hlds__make_hlds__field_access__expand_get_field_function_call_2_23_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_r4 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tempr4 = MR_sv(4);
	MR_tfield(0, MR_tempr1, 1) = MR_tempr4;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_r5 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_r2;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr3, 2, (MR_Integer) 3);
	MR_sv(6) = MR_tempr3;
	MR_tfield(2, MR_tempr3, 0) = MR_r1;
	MR_tfield(2, MR_tempr3, 1) = MR_sv(2);
	MR_tfield(2, MR_tempr3, 2) = MR_tempr4;
	MR_r1 = MR_sv(3);
	MR_sv(7) = MR_sv(1);
	MR_sv(1) = MR_tfield(0, MR_tempr1, 0);
	MR_sv(2) = MR_tempr1;
	MR_sv(4) = MR_tempr2;
	MR_sv(5) = (MR_Integer) 1;
	MR_r2 = MR_sv(8);
	MR_sv(8) = MR_sv(17);
	MR_sv(10) = MR_sv(9);
	MR_sv(9) = MR_r2;
	MR_sv(12) = MR_r3;
	MR_sv(17) = MR_sv(14);
	MR_GOTO_LAB(hlds__make_hlds__field_access__expand_get_field_function_call_2_23_0_i8);
	}
MR_def_label(hlds__make_hlds__field_access__expand_get_field_function_call_2_23_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(15);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(varset__new_var_3_0,
		hlds__make_hlds__field_access__expand_get_field_function_call_2_23_0_i14);
MR_def_label(hlds__make_hlds__field_access__expand_get_field_function_call_2_23_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(7);
	MR_sv(7) = MR_r1;
	MR_sv(15) = MR_r2;
	MR_r1 = (MR_Integer) 0;
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(4);
	MR_r5 = MR_sv(10);
	MR_r6 = MR_sv(7);
	MR_r7 = MR_sv(1);
	MR_r8 = MR_sv(6);
	MR_r9 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__make_hlds__field_access__construct_field_access_function_call_12_0,
		hlds__make_hlds__field_access__expand_get_field_function_call_2_23_0_i15);
MR_def_label(hlds__make_hlds__field_access__expand_get_field_function_call_2_23_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(10) = MR_r2;
	MR_sv(16) = MR_r3;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r2 = MR_sv(13);
	MR_np_call_localret_ent(fn__list__length_1_0,
		hlds__make_hlds__field_access__expand_get_field_function_call_2_23_0_i16);
MR_def_label(hlds__make_hlds__field_access__expand_get_field_function_call_2_23_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 1) = ((MR_Integer) 1 + (MR_Integer) MR_r1);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = MR_sv(4);
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(2);
	MR_r4 = MR_sv(12);
	MR_r5 = MR_sv(5);
	MR_r6 = MR_sv(7);
	MR_r7 = MR_sv(6);
	MR_r8 = MR_sv(17);
	MR_r9 = MR_sv(8);
	MR_r10 = MR_sv(15);
	MR_r11 = MR_sv(9);
	MR_r12 = MR_sv(16);
	MR_r13 = MR_sv(14);
	}
	MR_np_localcall_lab(hlds__make_hlds__field_access__expand_get_field_function_call_2_23_0,
		hlds__make_hlds__field_access__expand_get_field_function_call_2_23_0_i19);
MR_def_label(hlds__make_hlds__field_access__expand_get_field_function_call_2_23_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(10);
	MR_tfield(1, MR_tempr1, 1) = MR_r3;
	MR_tag_alloc_heap(MR_tempr2, 2, (MR_Integer) 3);
	MR_sv(6) = MR_tempr2;
	MR_tfield(2, MR_tempr2, 0) = MR_sv(1);
	MR_tfield(2, MR_tempr2, 1) = MR_sv(2);
	MR_tfield(2, MR_tempr2, 2) = MR_sv(4);
	MR_r1 = MR_sv(3);
	MR_sv(2) = MR_r2;
	MR_sv(4) = MR_tempr1;
	MR_sv(5) = ((MR_Integer) 1 + (MR_Integer) MR_r4);
	MR_sv(8) = MR_r5;
	MR_sv(9) = MR_r6;
	MR_sv(7) = MR_r7;
	MR_sv(10) = MR_r8;
	MR_sv(12) = MR_r9;
	MR_sv(17) = MR_r10;
	}
MR_def_label(hlds__make_hlds__field_access__expand_get_field_function_call_2_23_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_init_2_0,
		hlds__make_hlds__field_access__expand_get_field_function_call_2_23_0_i22);
MR_def_label(hlds__make_hlds__field_access__expand_get_field_function_call_2_23_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_goal__conj_list_to_goal_3_0,
		hlds__make_hlds__field_access__expand_get_field_function_call_2_23_0_i23);
MR_def_label(hlds__make_hlds__field_access__expand_get_field_function_call_2_23_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(13);
	MR_r2 = MR_sv(11);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(6);
	MR_r5 = MR_tempr1;
	MR_r6 = MR_sv(8);
	MR_r7 = MR_sv(9);
	MR_r8 = MR_sv(7);
	MR_r9 = MR_sv(10);
	MR_r10 = MR_sv(12);
	MR_r11 = MR_sv(17);
	}
	MR_np_call_localret_ent(hlds__make_hlds__superhomogeneous__insert_arg_unifications_19_0,
		hlds__make_hlds__field_access__expand_get_field_function_call_2_23_0_i24);
MR_def_label(hlds__make_hlds__field_access__expand_get_field_function_call_2_23_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = ((MR_Integer) MR_sv(5) + (MR_Integer) MR_r2);
	MR_sv(4) = MR_r3;
	MR_sv(5) = MR_r5;
	MR_sv(6) = MR_r6;
	MR_sv(8) = MR_r7;
	MR_sv(9) = MR_r8;
	MR_r2 = MR_r4;
	MR_np_call_localret_ent(hlds__make_hlds__state_var__svar_goal_to_conj_list_4_0,
		hlds__make_hlds__field_access__expand_get_field_function_call_2_23_0_i25);
MR_def_label(hlds__make_hlds__field_access__expand_get_field_function_call_2_23_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(4);
	MR_r6 = MR_tempr2;
	MR_r7 = MR_sv(5);
	MR_r8 = MR_sv(6);
	MR_r9 = MR_sv(8);
	MR_r10 = MR_sv(9);
	MR_decr_sp_and_return(18);
	}
MR_def_label(hlds__make_hlds__field_access__expand_get_field_function_call_2_23_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("hlds.make_hlds.field_access", 27);
	MR_r2 = (MR_Word) MR_string_const("predicate \140hlds.make_hlds.field_access.expand_get_field_function_call_2\'/23", 75);
	MR_r3 = (MR_Word) MR_string_const("empty list of field names", 25);
	MR_np_tailcall_ent(require__unexpected_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__make_hlds__qual_info__make_atomic_unification_8_0);

MR_BEGIN_MODULE(hlds__make_hlds__field_access_module4)
	MR_init_entry1(hlds__make_hlds__field_access__expand_dcg_field_extraction_goal_23_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__make_hlds__field_access__expand_dcg_field_extraction_goal_23_0);
	MR_init_label4(hlds__make_hlds__field_access__expand_dcg_field_extraction_goal_23_0,3,4,6,7)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'expand_dcg_field_extraction_goal'/23 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__hlds__make_hlds__field_access__expand_dcg_field_extraction_goal_23_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(12);
	MR_sv(12) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr1, 0) = MR_r6;
	MR_sv(1) = MR_r1;
	MR_sv(3) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_sv(5) = MR_r5;
	MR_tempr2 = MR_r7;
	MR_sv(6) = MR_tempr2;
	MR_sv(7) = MR_r8;
	MR_sv(8) = MR_r9;
	MR_sv(9) = MR_r10;
	MR_sv(11) = MR_r11;
	MR_sv(10) = MR_r13;
	MR_r1 = MR_tempr2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(2);
	MR_r6 = MR_r12;
	}
	MR_np_call_localret_ent(hlds__make_hlds__qual_info__make_atomic_unification_8_0,
		hlds__make_hlds__field_access__expand_dcg_field_extraction_goal_23_0_i3);
MR_def_label(hlds__make_hlds__field_access__expand_dcg_field_extraction_goal_23_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(4);
	MR_r5 = MR_sv(5);
	MR_r6 = MR_sv(6);
	MR_r7 = (MR_Integer) 0;
	MR_r8 = MR_sv(7);
	MR_r9 = MR_sv(8);
	MR_r10 = MR_sv(9);
	MR_r11 = MR_sv(11);
	MR_r12 = MR_tempr2;
	MR_r13 = MR_sv(10);
	}
	MR_np_call_localret_ent(hlds__make_hlds__field_access__expand_get_field_function_call_2_23_0,
		hlds__make_hlds__field_access__expand_dcg_field_extraction_goal_23_0_i4);
MR_def_label(hlds__make_hlds__field_access__expand_dcg_field_extraction_goal_23_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_sv(4) = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(3);
	MR_tfield(1, MR_tempr1, 1) = MR_r3;
	MR_tempr2 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_sv(3) = MR_r2;
	MR_sv(2) = ((MR_Integer) 1 + (MR_Integer) MR_r4);
	MR_sv(5) = MR_r5;
	MR_sv(6) = MR_r6;
	MR_sv(7) = MR_r7;
	MR_sv(8) = MR_r8;
	MR_sv(9) = MR_r9;
	MR_sv(11) = MR_r10;
	MR_r1 = MR_tempr2;
	}
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_init_2_0,
		hlds__make_hlds__field_access__expand_dcg_field_extraction_goal_23_0_i6);
MR_def_label(hlds__make_hlds__field_access__expand_dcg_field_extraction_goal_23_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_goal__conj_list_to_goal_3_0,
		hlds__make_hlds__field_access__expand_dcg_field_extraction_goal_23_0_i7);
MR_def_label(hlds__make_hlds__field_access__expand_dcg_field_extraction_goal_23_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(2);
	MR_r5 = MR_sv(5);
	MR_r6 = MR_sv(6);
	MR_r7 = MR_sv(7);
	MR_r8 = MR_sv(8);
	MR_r9 = MR_sv(9);
	MR_r10 = MR_sv(11);
	MR_decr_sp_and_return(12);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__make_hlds__field_access_module5)
	MR_init_entry1(hlds__make_hlds__field_access__expand_get_field_function_call_23_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__make_hlds__field_access__expand_get_field_function_call_23_0);
	MR_init_label3(hlds__make_hlds__field_access__expand_get_field_function_call_23_0,2,3,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'expand_get_field_function_call'/23 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__hlds__make_hlds__field_access__expand_get_field_function_call_23_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(11);
	MR_sv(11) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(hlds__make_hlds__field_access__expand_get_field_function_call_2_23_0,
		hlds__make_hlds__field_access__expand_get_field_function_call_23_0_i2);
MR_def_label(hlds__make_hlds__field_access__expand_get_field_function_call_23_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_r3;
	MR_sv(5) = MR_r5;
	MR_sv(6) = MR_r6;
	MR_sv(7) = MR_r7;
	MR_sv(8) = MR_r8;
	MR_sv(9) = MR_r9;
	MR_sv(10) = MR_r10;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_init_2_0,
		hlds__make_hlds__field_access__expand_get_field_function_call_23_0_i3);
MR_def_label(hlds__make_hlds__field_access__expand_get_field_function_call_23_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_goal__conj_list_to_goal_3_0,
		hlds__make_hlds__field_access__expand_get_field_function_call_23_0_i4);
MR_def_label(hlds__make_hlds__field_access__expand_get_field_function_call_23_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(5);
	MR_r6 = MR_sv(6);
	MR_r7 = MR_sv(7);
	MR_r8 = MR_sv(8);
	MR_r9 = MR_sv(9);
	MR_r10 = MR_sv(10);
	MR_decr_sp_and_return(11);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__parse_tree__mercury_to_mercury__mercury_term_to_string_3_0);
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__error_util__type_ctor_info_format_component_0;

MR_BEGIN_MODULE(hlds__make_hlds__field_access_module6)
	MR_init_entry1(fn__hlds__make_hlds__field_access__make_field_list_error_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__hlds__make_hlds__field_access__make_field_list_error_4_0);
	MR_init_label2(fn__hlds__make_hlds__field_access__make_field_list_error_4_0,2,11)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'make_field_list_error'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__hlds__make_hlds__field_access__make_field_list_error_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r4;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_tempr1;
	MR_tempr2 = MR_r3;
	MR_r3 = (MR_Integer) 0;
	MR_r4 = MR_tempr2;
	}
	MR_np_call_localret_ent(fn__parse_tree__mercury_to_mercury__mercury_term_to_string_3_0,
		fn__hlds__make_hlds__field_access__make_field_list_error_4_0_i2);
MR_def_label(fn__hlds__make_hlds__field_access__make_field_list_error_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr1, 0) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_TAG_COMMON(1,0,3);
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = (MR_Word) MR_TAG_COMMON(3,1,0);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr3;
	MR_tfield(1, MR_tempr3, 0) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(1, MR_tempr3, 1) = MR_tempr1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__error_util, format_component);
	MR_r2 = MR_sv(2);
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		fn__hlds__make_hlds__field_access__make_field_list_error_4_0_i11);
MR_def_label(fn__hlds__make_hlds__field_access__make_field_list_error_4_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 1);
	MR_tfield(0, MR_r2, 0) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r2;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 0) = MR_sv(1);
	MR_tfield(0, MR_r2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r2;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_r1, 0) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_r1, 1) = (MR_Word) MR_tbmkword(0, 1);
	MR_tfield(0, MR_r1, 2) = MR_tempr1;
	MR_decr_sp_and_return(3);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(parse_tree__prog_io_sym_name__try_parse_sym_name_and_args_3_0);
MR_decl_entry(fn__term__get_term_context_1_0);

MR_BEGIN_MODULE(hlds__make_hlds__field_access_module7)
	MR_init_entry1(hlds__make_hlds__field_access__parse_field_list_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__make_hlds__field_access__parse_field_list_4_0);
	MR_init_label10(hlds__make_hlds__field_access__parse_field_list_4_0,10,12,9,18,19,28,2,38,37,43)
	MR_init_label2(hlds__make_hlds__field_access__parse_field_list_4_0,44,48)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'parse_field_list'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__hlds__make_hlds__field_access__parse_field_list_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	if (MR_PTAG_TESTR(MR_r1,0)) {
		MR_GOTO_LAB(hlds__make_hlds__field_access__parse_field_list_4_0_i2);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_tfield(0, MR_r1, 0);
	if (MR_PTAG_TESTR(MR_tempr1,0)) {
		MR_GOTO_LAB(hlds__make_hlds__field_access__parse_field_list_4_0_i2);
	}
	MR_tempr2 = MR_tfield(0, MR_tempr1, 0);
	if ((strcmp((char *) (MR_Word *) MR_tempr2, MR_string_const("^", 1)) != 0)) {
		MR_GOTO_LAB(hlds__make_hlds__field_access__parse_field_list_4_0_i2);
	}
	MR_tempr1 = MR_tfield(0, MR_r1, 1);
	if (MR_LTAGS_TEST(MR_tempr1,0,0)) {
		MR_GOTO_LAB(hlds__make_hlds__field_access__parse_field_list_4_0_i2);
	}
	MR_tempr2 = MR_tfield(1, MR_tempr1, 1);
	if (MR_LTAGS_TEST(MR_tempr2,0,0)) {
		MR_GOTO_LAB(hlds__make_hlds__field_access__parse_field_list_4_0_i2);
	}
	MR_tempr3 = MR_tfield(1, MR_tempr2, 1);
	if (MR_LTAGS_TESTR(MR_tempr3,0,0)) {
		MR_GOTO_LAB(hlds__make_hlds__field_access__parse_field_list_4_0_i2);
	}
	MR_tempr3 = MR_tfield(1, MR_tempr1, 0);
	MR_sv(5) = MR_r1;
	MR_sv(4) = MR_r2;
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_tempr3;
	MR_sv(3) = MR_tfield(1, MR_tempr2, 0);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_tempr3;
	}
	MR_np_call_localret_ent(parse_tree__prog_io_sym_name__try_parse_sym_name_and_args_3_0,
		hlds__make_hlds__field_access__parse_field_list_4_0_i10);
MR_def_label(hlds__make_hlds__field_access__parse_field_list_4_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(hlds__make_hlds__field_access__parse_field_list_4_0_i9);
	}
	MR_sv(5) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = MR_r3;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(1);
	}
	MR_np_localcall_lab(hlds__make_hlds__field_access__parse_field_list_4_0,
		hlds__make_hlds__field_access__parse_field_list_4_0_i12);
MR_def_label(hlds__make_hlds__field_access__parse_field_list_4_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TEST(MR_r1,0)) {
		MR_GOTO_LAB(hlds__make_hlds__field_access__parse_field_list_4_0_i48);
	}
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 0) = MR_sv(5);
	MR_tfield(0, MR_r2, 1) = MR_sv(4);
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r2;
	MR_tfield(1, MR_tempr1, 1) = MR_tfield(1, MR_r1, 0);
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r1, 0) = MR_tempr1;
	MR_decr_sp_and_return(6);
	}
MR_def_label(hlds__make_hlds__field_access__parse_field_list_4_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(fn__term__get_term_context_1_0,
		hlds__make_hlds__field_access__parse_field_list_4_0_i18);
MR_def_label(hlds__make_hlds__field_access__parse_field_list_4_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(5);
	MR_sv(5) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_sv(4);
	MR_r3 = (MR_Integer) 0;
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__parse_tree__mercury_to_mercury__mercury_term_to_string_3_0,
		hlds__make_hlds__field_access__parse_field_list_4_0_i19);
MR_def_label(hlds__make_hlds__field_access__parse_field_list_4_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr1, 0) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_TAG_COMMON(1,0,3);
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = (MR_Word) MR_TAG_COMMON(3,1,0);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr3;
	MR_tfield(1, MR_tempr3, 0) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(1, MR_tempr3, 1) = MR_tempr1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__error_util, format_component);
	MR_r2 = MR_sv(1);
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		hlds__make_hlds__field_access__parse_field_list_4_0_i28);
MR_def_label(hlds__make_hlds__field_access__parse_field_list_4_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 1);
	MR_tfield(0, MR_r2, 0) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r2;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 0) = MR_sv(5);
	MR_tfield(0, MR_r2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r2;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 3);
	MR_tfield(0, MR_r2, 0) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_r2, 1) = (MR_Word) MR_tbmkword(0, 1);
	MR_tfield(0, MR_r2, 2) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r2;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_r1, 0) = MR_tempr1;
	MR_decr_sp_and_return(6);
	}
MR_def_label(hlds__make_hlds__field_access__parse_field_list_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_sv(4) = MR_r2;
	MR_sv(1) = MR_r3;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(parse_tree__prog_io_sym_name__try_parse_sym_name_and_args_3_0,
		hlds__make_hlds__field_access__parse_field_list_4_0_i38);
MR_def_label(hlds__make_hlds__field_access__parse_field_list_4_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(hlds__make_hlds__field_access__parse_field_list_4_0_i37);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_r2;
	MR_tfield(0, MR_tempr1, 1) = MR_r3;
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_tempr1;
	MR_tfield(1, MR_r2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r1, 0) = MR_r2;
	MR_decr_sp_and_return(6);
	}
MR_def_label(hlds__make_hlds__field_access__parse_field_list_4_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(fn__term__get_term_context_1_0,
		hlds__make_hlds__field_access__parse_field_list_4_0_i43);
MR_def_label(hlds__make_hlds__field_access__parse_field_list_4_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(5);
	MR_r4 = MR_sv(1);
	}
	MR_np_call_localret_ent(fn__hlds__make_hlds__field_access__make_field_list_error_4_0,
		hlds__make_hlds__field_access__parse_field_list_4_0_i44);
MR_def_label(hlds__make_hlds__field_access__parse_field_list_4_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_r1;
	MR_tfield(1, MR_r2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_r1, 0) = MR_r2;
MR_def_label(hlds__make_hlds__field_access__parse_field_list_4_0,48)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(6);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__make_hlds__field_access_module8)
	MR_init_entry1(hlds__make_hlds__field_access__maybe_parse_field_list_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__make_hlds__field_access__maybe_parse_field_list_3_0);
	MR_init_label2(hlds__make_hlds__field_access__maybe_parse_field_list_3_0,2,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'maybe_parse_field_list'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__hlds__make_hlds__field_access__maybe_parse_field_list_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_np_call_localret_ent(hlds__make_hlds__field_access__parse_field_list_4_0,
		hlds__make_hlds__field_access__maybe_parse_field_list_3_0_i2);
MR_def_label(hlds__make_hlds__field_access__maybe_parse_field_list_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,1)) {
		MR_GOTO_LAB(hlds__make_hlds__field_access__maybe_parse_field_list_3_0_i1);
	}
	MR_r2 = MR_tfield(1, MR_r1, 0);
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(hlds__make_hlds__field_access__maybe_parse_field_list_3_0,1)
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

MR_decl_entry(__Unify___list__list_1_0);

MR_BEGIN_MODULE(hlds__make_hlds__field_access_module9)
	MR_init_entry1(__Unify___hlds__make_hlds__field_access__field_list_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___hlds__make_hlds__field_access__field_list_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___hlds__make_hlds__field_access__field_list_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,2,0);
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

MR_decl_entry(__Compare___list__list_1_0);

MR_BEGIN_MODULE(hlds__make_hlds__field_access_module10)
	MR_init_entry1(__Compare___hlds__make_hlds__field_access__field_list_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___hlds__make_hlds__field_access__field_list_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___hlds__make_hlds__field_access__field_list_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,2,0);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	MR_np_tailcall_ent(__Compare___list__list_1_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

static void mercury__hlds__make_hlds__field_access_maybe_bunch_0(void)
{
	hlds__make_hlds__field_access_module0();
	hlds__make_hlds__field_access_module1();
	hlds__make_hlds__field_access_module2();
	hlds__make_hlds__field_access_module3();
	hlds__make_hlds__field_access_module4();
	hlds__make_hlds__field_access_module5();
	hlds__make_hlds__field_access_module6();
	hlds__make_hlds__field_access_module7();
	hlds__make_hlds__field_access_module8();
	hlds__make_hlds__field_access_module9();
	hlds__make_hlds__field_access_module10();
}

/* suppress gcc -Wmissing-decls warnings */
void mercury__hlds__make_hlds__field_access__init(void);
void mercury__hlds__make_hlds__field_access__init_type_tables(void);
void mercury__hlds__make_hlds__field_access__init_debugger(void);
#ifdef MR_DEEP_PROFILING
void mercury__hlds__make_hlds__field_access__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp);
#endif
#ifdef MR_RECORD_TERM_SIZES
void mercury__hlds__make_hlds__field_access__init_complexity_procs(void);
#endif
#ifdef MR_THREADSCOPE
void mercury__hlds__make_hlds__field_access__init_threadscope_string_table(void);
#endif

void mercury__hlds__make_hlds__field_access__init(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	mercury__hlds__make_hlds__field_access_maybe_bunch_0();
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_hlds__make_hlds__field_access__type_ctor_info_field_list_0,
		hlds__make_hlds__field_access__field_list_0_0);
	mercury__hlds__make_hlds__field_access__init_debugger();
}

void mercury__hlds__make_hlds__field_access__init_type_tables(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	{
		MR_register_type_ctor_info(
		&mercury_data_hlds__make_hlds__field_access__type_ctor_info_field_list_0);
	}
}


void mercury__hlds__make_hlds__field_access__init_debugger(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}

#ifdef MR_DEEP_PROFILING

void mercury__hlds__make_hlds__field_access__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp)
{
	MR_write_out_module_proc_reps_start(procrep_fp, &mercury_data__module_common_layout__hlds__make_hlds__field_access);
	MR_write_out_module_proc_reps_end(procrep_fp);
}

#endif

#ifdef MR_RECORD_TERM_SIZES

void mercury__hlds__make_hlds__field_access__init_complexity_procs(void)
{
}

#endif

#ifdef MR_THREADSCOPE

void mercury__hlds__make_hlds__field_access__init_threadscope_string_table(void)
{
}

#endif

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;
