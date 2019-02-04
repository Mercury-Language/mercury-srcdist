/*
** Automatically generated from `qual_info.m'
** by the Mercury compiler,
** version rotd-2009-11-10, configured for i686-pc-linux-gnu.
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
INIT mercury__hlds__make_hlds__qual_info__init
ENDINIT
*/

#define MR_ALLOW_RESET
#include "mercury_imp.h"
#line 136 "../library/io.int2"
#include "io.mh"

#line 27 "hlds.make_hlds.qual_info.c"
#line 144 "../library/io.int2"
#include "string.mh"

#line 31 "hlds.make_hlds.qual_info.c"
#line 29 "../library/bitmap.int2"
#include "bitmap.mh"

#line 35 "hlds.make_hlds.qual_info.c"
#line 28 "../library/time.int2"
#include "time.mh"

#line 39 "hlds.make_hlds.qual_info.c"
#line 33 "../mdbcomp/mdbcomp.rtti_access.int2"
#include "mdbcomp.rtti_access.mh"

#line 43 "hlds.make_hlds.qual_info.c"
#line 31 "../library/array.int2"
#include "array.mh"

#line 47 "hlds.make_hlds.qual_info.c"
#line 48 "hlds.make_hlds.qual_info.c"
#include "hlds.make_hlds.qual_info.mh"

#line 51 "hlds.make_hlds.qual_info.c"
#line 52 "hlds.make_hlds.qual_info.c"
#ifndef HLDS__MAKE_HLDS__QUAL_INFO_DECL_GUARD
#define HLDS__MAKE_HLDS__QUAL_INFO_DECL_GUARD

#line 56 "hlds.make_hlds.qual_info.c"
#line 57 "hlds.make_hlds.qual_info.c"

#endif
#line 60 "hlds.make_hlds.qual_info.c"

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
	MR_Word * f1;
};
MR_STATIC_LINKAGE const struct mercury_type_2 mercury_common_2[];

extern const MR_TypeCtorInfo_Struct
	mercury_data_hlds__make_hlds__qual_info__type_ctor_info_qual_info_0;
MR_decl_label4(hlds__make_hlds__qual_info__apply_to_recompilation_info_3_0, 2,4,5,7)
MR_decl_label4(hlds__make_hlds__qual_info__construct_pred_or_func_call_8_0, 2,4,5,6)
MR_decl_label7(hlds__make_hlds__qual_info__do_construct_pred_or_func_call_6_0, 5,6,7,9,11,3,13)
MR_decl_label5(hlds__make_hlds__qual_info__init_qual_info_3_0, 2,3,5,6,8)
MR_decl_label7(hlds__make_hlds__qual_info__make_atomic_unification_9_0, 21,3,7,9,10,12,19)
MR_decl_label10(hlds__make_hlds__qual_info__process_type_qualification_10_0, 2,4,5,6,7,8,9,12,16,15)
MR_decl_label2(hlds__make_hlds__qual_info__process_type_qualification_10_0, 10,28)
MR_decl_label5(hlds__make_hlds__qual_info__record_called_pred_or_func_5_0, 3,4,6,7,9)
MR_decl_label1(hlds__make_hlds__qual_info__set_module_recompilation_info_3_0, 2)
MR_decl_label1(hlds__make_hlds__qual_info__update_qual_info_6_0, 3)
MR_decl_label9(__Unify___hlds__make_hlds__qual_info__qual_info_0_0, 4,6,9,11,14,16,18,20,1)
MR_decl_label10(__Compare___hlds__make_hlds__qual_info__qual_info_0_0, 3,2,5,9,14,19,24,28,32,72)
MR_def_extern_entry(hlds__make_hlds__qual_info__init_qual_info_3_0)
MR_def_extern_entry(hlds__make_hlds__qual_info__update_qual_info_6_0)
MR_def_extern_entry(hlds__make_hlds__qual_info__qual_info_get_tvarset_2_0)
MR_def_extern_entry(hlds__make_hlds__qual_info__qual_info_get_var_types_2_0)
MR_def_extern_entry(hlds__make_hlds__qual_info__qual_info_get_mq_info_2_0)
MR_def_extern_entry(hlds__make_hlds__qual_info__qual_info_get_import_status_2_0)
MR_def_extern_entry(hlds__make_hlds__qual_info__qual_info_get_found_syntax_error_2_0)
MR_def_extern_entry(hlds__make_hlds__qual_info__qual_info_set_mq_info_3_0)
MR_def_extern_entry(hlds__make_hlds__qual_info__qual_info_set_var_types_3_0)
MR_def_extern_entry(hlds__make_hlds__qual_info__qual_info_set_found_syntax_error_3_0)
MR_def_extern_entry(hlds__make_hlds__qual_info__apply_to_recompilation_info_3_0)
MR_def_extern_entry(hlds__make_hlds__qual_info__set_module_recompilation_info_3_0)
MR_def_extern_entry(hlds__make_hlds__qual_info__process_type_qualification_10_0)
MR_def_extern_entry(hlds__make_hlds__qual_info__make_atomic_unification_9_0)
MR_def_extern_entry(hlds__make_hlds__qual_info__make_atomic_unification_8_0)
MR_def_extern_entry(hlds__make_hlds__qual_info__record_called_pred_or_func_5_0)
MR_def_extern_entry(hlds__make_hlds__qual_info__do_construct_pred_or_func_call_6_0)
MR_def_extern_entry(hlds__make_hlds__qual_info__construct_pred_or_func_call_8_0)
MR_def_extern_entry(__Unify___hlds__make_hlds__qual_info__qual_info_0_0)
MR_def_extern_entry(__Compare___hlds__make_hlds__qual_info__qual_info_0_0)

extern const MR_TypeCtorInfo_Struct mercury_data_term__type_ctor_info_var_1;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_tvar_type_0;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_prog_var_type_0;
static const struct mercury_type_0 mercury_common_0[6] =
{
{
{
MR_CTOR1_ADDR(term, var),
MR_CTOR0_ADDR(parse_tree__prog_data, tvar_type)
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
MR_tbmkword(0, 1),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(3,1,0),
MR_TAG_COMMON(1,0,2)
}
},
{
{
MR_TAG_COMMON(3,1,1),
MR_TAG_COMMON(1,0,3)
}
},
{
{
MR_TAG_COMMON(0,2,0),
MR_tbmkword(0, 0)
}
},
};

static const struct mercury_type_1 mercury_common_1[2] =
{
{
4,
MR_string_const("does not match prior qualification.", 35)
},
{
4,
MR_string_const("Error: explicit type qualification", 34)
},
};

static const struct mercury_type_2 mercury_common_2[1] =
{
{
MR_TAG_COMMON(1,0,4)
},
};
extern const MR_TypeCtorInfo_Struct mercury_data_tree234__type_ctor_info_tree234_2;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_type_ctor_0;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__equiv_type__type_ctor_info_eqv_type_body_0;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_type_ctor_0;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__equiv_type__type_ctor_info_eqv_type_body_0;

static const MR_FA_TypeInfo_Struct2 mercury_data_tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_type_ctor_0parse_tree__equiv_type__type_ctor_info_eqv_type_body_0 = {
	&mercury_data_tree234__type_ctor_info_tree234_2,
{	(MR_TypeInfo) &mercury_data_parse_tree__prog_data__type_ctor_info_type_ctor_0,
	(MR_TypeInfo) &mercury_data_parse_tree__equiv_type__type_ctor_info_eqv_type_body_0
}};
extern const MR_TypeCtorInfo_Struct mercury_data_varset__type_ctor_info_varset_1;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_tvar_type_0;

static const MR_FA_TypeInfo_Struct1 mercury_data_varset__ti_varset_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
	&mercury_data_varset__type_ctor_info_varset_1,
{	(MR_TypeInfo) &mercury_data_parse_tree__prog_data__type_ctor_info_tvar_type_0
}};

static const MR_FA_TypeInfo_Struct1 mercury_data_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
	&mercury_data_term__type_ctor_info_var_1,
{	(MR_TypeInfo) &mercury_data_parse_tree__prog_data__type_ctor_info_tvar_type_0
}};

static const MR_FA_TypeInfo_Struct2 mercury_data_tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
	&mercury_data_tree234__type_ctor_info_tree234_2,
{	(MR_TypeInfo) &mercury_data_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0,
	(MR_TypeInfo) &mercury_data_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0
}};
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_string_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_string_0;

static const MR_FA_TypeInfo_Struct2 mercury_data_tree234__ti_tree234_2builtin__type_ctor_info_string_0term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
	&mercury_data_tree234__type_ctor_info_tree234_2,
{	(MR_TypeInfo) &mercury_data_builtin__type_ctor_info_string_0,
	(MR_TypeInfo) &mercury_data_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0
}};
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_TypeInfo_Struct1 mercury_data_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
	&mercury_data_term__type_ctor_info_var_1,
{	(MR_TypeInfo) &mercury_data_parse_tree__prog_data__type_ctor_info_prog_var_type_0
}};
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_mer_type_0;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_mer_type_0;

static const MR_FA_TypeInfo_Struct2 mercury_data_tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0 = {
	&mercury_data_tree234__type_ctor_info_tree234_2,
{	(MR_TypeInfo) &mercury_data_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
	(MR_TypeInfo) &mercury_data_parse_tree__prog_data__type_ctor_info_mer_type_0
}};
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__module_qual__type_ctor_info_mq_info_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_import_status_0;
extern const MR_TypeCtorInfo_Struct mercury_data_bool__type_ctor_info_bool_0;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__module_qual__type_ctor_info_mq_info_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_import_status_0;
extern const MR_TypeCtorInfo_Struct mercury_data_bool__type_ctor_info_bool_0;

const MR_PseudoTypeInfo mercury_data_hlds__make_hlds__qual_info__field_types_qual_info_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_type_ctor_0parse_tree__equiv_type__type_ctor_info_eqv_type_body_0,
	(MR_PseudoTypeInfo) &mercury_data_varset__ti_varset_1parse_tree__prog_data__type_ctor_info_tvar_type_0,
	(MR_PseudoTypeInfo) &mercury_data_tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0,
	(MR_PseudoTypeInfo) &mercury_data_tree234__ti_tree234_2builtin__type_ctor_info_string_0term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0,
	(MR_PseudoTypeInfo) &mercury_data_tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0,
	(MR_PseudoTypeInfo) &mercury_data_parse_tree__module_qual__type_ctor_info_mq_info_0,
	(MR_PseudoTypeInfo) &mercury_data_hlds__hlds_pred__type_ctor_info_import_status_0,
	(MR_PseudoTypeInfo) &mercury_data_bool__type_ctor_info_bool_0
};

const MR_ConstString mercury_data_hlds__make_hlds__qual_info__field_names_qual_info_0_0[] = {
	"qual_eqv_map",
	"qual_tvarset",
	"qual_tvar_renaming",
	"qual_tvar_name_map",
	"qual_vartypes",
	"qual_mq_info",
	"qual_import_status",
	"qual_found_syntax_error"
};

static const MR_DuFunctorDesc mercury_data_hlds__make_hlds__qual_info__du_functor_desc_qual_info_0_0 = {
	"qual_info",
	8,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_hlds__make_hlds__qual_info__field_types_qual_info_0_0,
	mercury_data_hlds__make_hlds__qual_info__field_names_qual_info_0_0,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_hlds__make_hlds__qual_info__du_stag_ordered_qual_info_0_0[] = {
	&mercury_data_hlds__make_hlds__qual_info__du_functor_desc_qual_info_0_0

};

const MR_DuPtagLayout mercury_data_hlds__make_hlds__qual_info__du_ptag_ordered_qual_info_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_hlds__make_hlds__qual_info__du_stag_ordered_qual_info_0_0 }

};

const MR_DuFunctorDescPtr mercury_data_hlds__make_hlds__qual_info__du_name_ordered_qual_info_0[] = {
	&mercury_data_hlds__make_hlds__qual_info__du_functor_desc_qual_info_0_0
};

const MR_Integer mercury_data_hlds__make_hlds__qual_info__functor_number_map_qual_info_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_hlds__make_hlds__qual_info__type_ctor_info_qual_info_0 = {
	0,
	13,
	1,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___hlds__make_hlds__qual_info__qual_info_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___hlds__make_hlds__qual_info__qual_info_0_0)),
	"hlds.make_hlds.qual_info",
	"qual_info",
	{ (void *)mercury_data_hlds__make_hlds__qual_info__du_name_ordered_qual_info_0 },
	{ (void *)mercury_data_hlds__make_hlds__qual_info__du_ptag_ordered_qual_info_0 },
	1,
	4,
	mercury_data_hlds__make_hlds__qual_info__functor_number_map_qual_info_0
};



MR_decl_entry(parse_tree__module_qual__mq_info_set_need_qual_flag_3_0);
MR_decl_entry(varset__init_1_0);
MR_decl_entry(map__init_1_0);
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_string_0;

MR_BEGIN_MODULE(hlds__make_hlds__qual_info_module0)
	MR_init_entry1(hlds__make_hlds__qual_info__init_qual_info_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__make_hlds__qual_info__init_qual_info_3_0);
	MR_init_label5(hlds__make_hlds__qual_info__init_qual_info_3_0,2,3,5,6,8)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'init_qual_info'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__hlds__make_hlds__qual_info__init_qual_info_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 1;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(parse_tree__module_qual__mq_info_set_need_qual_flag_3_0,
		hlds__make_hlds__qual_info__init_qual_info_3_0_i2);
MR_def_label(hlds__make_hlds__qual_info__init_qual_info_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_sv(3) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, tvar_type);
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(varset__init_1_0,
		hlds__make_hlds__qual_info__init_qual_info_3_0_i3);
MR_def_label(hlds__make_hlds__qual_info__init_qual_info_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_sv(5) = (MR_Word) MR_CTOR1_ADDR(term, var);
	MR_sv(4) = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r1 = MR_sv(4);
	MR_r2 = MR_r1;
	MR_np_call_localret_ent(map__init_1_0,
		hlds__make_hlds__qual_info__init_qual_info_3_0_i5);
MR_def_label(hlds__make_hlds__qual_info__init_qual_info_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_np_call_localret_ent(map__init_1_0,
		hlds__make_hlds__qual_info__init_qual_info_3_0_i6);
MR_def_label(hlds__make_hlds__qual_info__init_qual_info_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,1);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_np_call_localret_ent(map__init_1_0,
		hlds__make_hlds__qual_info__init_qual_info_3_0_i8);
MR_def_label(hlds__make_hlds__qual_info__init_qual_info_3_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 8);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(3);
	MR_tfield(0, MR_tempr1, 2) = MR_sv(4);
	MR_tfield(0, MR_tempr1, 3) = MR_sv(5);
	MR_tfield(0, MR_tempr1, 4) = MR_r1;
	MR_tfield(0, MR_tempr1, 5) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 6) = (MR_Word) MR_tbmkword(0, 8);
	MR_tfield(0, MR_tempr1, 7) = (MR_Integer) 0;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(6);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__make_hlds__qual_info_module1)
	MR_init_entry1(hlds__make_hlds__qual_info__update_qual_info_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__make_hlds__qual_info__update_qual_info_6_0);
	MR_init_label1(hlds__make_hlds__qual_info__update_qual_info_6_0,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'update_qual_info'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__hlds__make_hlds__qual_info__update_qual_info_6_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r5;
	MR_sv(5) = MR_tfield(0, MR_tempr1, 0);
	MR_sv(6) = MR_tfield(0, MR_tempr1, 5);
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r2 = MR_r1;
	}
	MR_np_call_localret_ent(map__init_1_0,
		hlds__make_hlds__qual_info__update_qual_info_6_0_i3);
MR_def_label(hlds__make_hlds__qual_info__update_qual_info_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 8);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(5);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 2) = MR_r1;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(3);
	MR_tfield(0, MR_tempr1, 5) = MR_sv(6);
	MR_tfield(0, MR_tempr1, 6) = MR_sv(4);
	MR_tfield(0, MR_tempr1, 7) = (MR_Integer) 0;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(7);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__make_hlds__qual_info_module2)
	MR_init_entry1(hlds__make_hlds__qual_info__qual_info_get_tvarset_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__make_hlds__qual_info__qual_info_get_tvarset_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'qual_info_get_tvarset'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__hlds__make_hlds__qual_info__qual_info_get_tvarset_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(0, MR_r1, 1);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__make_hlds__qual_info_module3)
	MR_init_entry1(hlds__make_hlds__qual_info__qual_info_get_var_types_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__make_hlds__qual_info__qual_info_get_var_types_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'qual_info_get_var_types'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__hlds__make_hlds__qual_info__qual_info_get_var_types_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(0, MR_r1, 4);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__make_hlds__qual_info_module4)
	MR_init_entry1(hlds__make_hlds__qual_info__qual_info_get_mq_info_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__make_hlds__qual_info__qual_info_get_mq_info_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'qual_info_get_mq_info'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__hlds__make_hlds__qual_info__qual_info_get_mq_info_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(0, MR_r1, 5);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__make_hlds__qual_info_module5)
	MR_init_entry1(hlds__make_hlds__qual_info__qual_info_get_import_status_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__make_hlds__qual_info__qual_info_get_import_status_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'qual_info_get_import_status'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__hlds__make_hlds__qual_info__qual_info_get_import_status_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(0, MR_r1, 6);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__make_hlds__qual_info_module6)
	MR_init_entry1(hlds__make_hlds__qual_info__qual_info_get_found_syntax_error_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__make_hlds__qual_info__qual_info_get_found_syntax_error_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'qual_info_get_found_syntax_error'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__hlds__make_hlds__qual_info__qual_info_get_found_syntax_error_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(0, MR_r1, 7);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__make_hlds__qual_info_module7)
	MR_init_entry1(hlds__make_hlds__qual_info__qual_info_set_mq_info_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__make_hlds__qual_info__qual_info_set_mq_info_3_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'qual_info_set_mq_info'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__hlds__make_hlds__qual_info__qual_info_set_mq_info_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 8);
	MR_tempr2 = MR_r2;
	MR_tfield(0, MR_tempr1, 0) = MR_tfield(0, MR_tempr2, 0);
	MR_tfield(0, MR_tempr1, 1) = MR_tfield(0, MR_tempr2, 1);
	MR_tfield(0, MR_tempr1, 2) = MR_tfield(0, MR_tempr2, 2);
	MR_tfield(0, MR_tempr1, 3) = MR_tfield(0, MR_tempr2, 3);
	MR_tfield(0, MR_tempr1, 4) = MR_tfield(0, MR_tempr2, 4);
	MR_tfield(0, MR_tempr1, 5) = MR_r1;
	MR_tfield(0, MR_tempr1, 6) = MR_tfield(0, MR_tempr2, 6);
	MR_tfield(0, MR_tempr1, 7) = MR_tfield(0, MR_tempr2, 7);
	MR_r1 = MR_tempr1;
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__make_hlds__qual_info_module8)
	MR_init_entry1(hlds__make_hlds__qual_info__qual_info_set_var_types_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__make_hlds__qual_info__qual_info_set_var_types_3_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'qual_info_set_var_types'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__hlds__make_hlds__qual_info__qual_info_set_var_types_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 8);
	MR_tempr2 = MR_r2;
	MR_tfield(0, MR_tempr1, 0) = MR_tfield(0, MR_tempr2, 0);
	MR_tfield(0, MR_tempr1, 1) = MR_tfield(0, MR_tempr2, 1);
	MR_tfield(0, MR_tempr1, 2) = MR_tfield(0, MR_tempr2, 2);
	MR_tfield(0, MR_tempr1, 3) = MR_tfield(0, MR_tempr2, 3);
	MR_tfield(0, MR_tempr1, 4) = MR_r1;
	MR_tfield(0, MR_tempr1, 5) = MR_tfield(0, MR_tempr2, 5);
	MR_tfield(0, MR_tempr1, 6) = MR_tfield(0, MR_tempr2, 6);
	MR_tfield(0, MR_tempr1, 7) = MR_tfield(0, MR_tempr2, 7);
	MR_r1 = MR_tempr1;
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__make_hlds__qual_info_module9)
	MR_init_entry1(hlds__make_hlds__qual_info__qual_info_set_found_syntax_error_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__make_hlds__qual_info__qual_info_set_found_syntax_error_3_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'qual_info_set_found_syntax_error'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__hlds__make_hlds__qual_info__qual_info_set_found_syntax_error_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 8);
	MR_tempr2 = MR_r2;
	MR_tfield(0, MR_tempr1, 0) = MR_tfield(0, MR_tempr2, 0);
	MR_tfield(0, MR_tempr1, 1) = MR_tfield(0, MR_tempr2, 1);
	MR_tfield(0, MR_tempr1, 2) = MR_tfield(0, MR_tempr2, 2);
	MR_tfield(0, MR_tempr1, 3) = MR_tfield(0, MR_tempr2, 3);
	MR_tfield(0, MR_tempr1, 4) = MR_tfield(0, MR_tempr2, 4);
	MR_tfield(0, MR_tempr1, 5) = MR_tfield(0, MR_tempr2, 5);
	MR_tfield(0, MR_tempr1, 6) = MR_tfield(0, MR_tempr2, 6);
	MR_tfield(0, MR_tempr1, 7) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(parse_tree__module_qual__mq_info_get_recompilation_info_2_0);
MR_declare_entry(mercury__do_call_closure_1);
MR_decl_entry(parse_tree__module_qual__mq_info_set_recompilation_info_3_0);

MR_BEGIN_MODULE(hlds__make_hlds__qual_info_module10)
	MR_init_entry1(hlds__make_hlds__qual_info__apply_to_recompilation_info_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__make_hlds__qual_info__apply_to_recompilation_info_3_0);
	MR_init_label4(hlds__make_hlds__qual_info__apply_to_recompilation_info_3_0,2,4,5,7)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'apply_to_recompilation_info'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__hlds__make_hlds__qual_info__apply_to_recompilation_info_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_sv(2) = MR_tfield(0, MR_tempr1, 5);
	MR_sv(3) = MR_tempr1;
	MR_r1 = MR_sv(2);
	}
	MR_np_call_localret_ent(parse_tree__module_qual__mq_info_get_recompilation_info_2_0,
		hlds__make_hlds__qual_info__apply_to_recompilation_info_3_0_i2);
MR_def_label(hlds__make_hlds__qual_info__apply_to_recompilation_info_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(hlds__make_hlds__qual_info__apply_to_recompilation_info_3_0_i4);
	}
	MR_r1 = MR_sv(3);
	MR_decr_sp_and_return(4);
MR_def_label(hlds__make_hlds__qual_info__apply_to_recompilation_info_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tfield(1, MR_tempr1, 0);
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(hlds__make_hlds__qual_info__apply_to_recompilation_info_3_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_1),
		mercury__hlds__make_hlds__qual_info__apply_to_recompilation_info_3_0_i5);
MR_def_label(hlds__make_hlds__qual_info__apply_to_recompilation_info_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(2);
	}
	MR_np_call_localret_ent(parse_tree__module_qual__mq_info_set_recompilation_info_3_0,
		hlds__make_hlds__qual_info__apply_to_recompilation_info_3_0_i7);
MR_def_label(hlds__make_hlds__qual_info__apply_to_recompilation_info_3_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 8);
	MR_tempr2 = MR_sv(3);
	MR_tfield(0, MR_tempr1, 0) = MR_tfield(0, MR_tempr2, 0);
	MR_tfield(0, MR_tempr1, 1) = MR_tfield(0, MR_tempr2, 1);
	MR_tfield(0, MR_tempr1, 2) = MR_tfield(0, MR_tempr2, 2);
	MR_tfield(0, MR_tempr1, 3) = MR_tfield(0, MR_tempr2, 3);
	MR_tfield(0, MR_tempr1, 4) = MR_tfield(0, MR_tempr2, 4);
	MR_tfield(0, MR_tempr1, 5) = MR_r1;
	MR_tfield(0, MR_tempr1, 6) = MR_tfield(0, MR_tempr2, 6);
	MR_tfield(0, MR_tempr1, 7) = MR_tfield(0, MR_tempr2, 7);
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(4);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__hlds_module__module_info_set_maybe_recompilation_info_3_0);

MR_BEGIN_MODULE(hlds__make_hlds__qual_info_module11)
	MR_init_entry1(hlds__make_hlds__qual_info__set_module_recompilation_info_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__make_hlds__qual_info__set_module_recompilation_info_3_0);
	MR_init_label1(hlds__make_hlds__qual_info__set_module_recompilation_info_3_0,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'set_module_recompilation_info'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__hlds__make_hlds__qual_info__set_module_recompilation_info_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_r1 = MR_tfield(0, MR_r1, 5);
	MR_np_call_localret_ent(parse_tree__module_qual__mq_info_get_recompilation_info_2_0,
		hlds__make_hlds__qual_info__set_module_recompilation_info_3_0_i2);
MR_def_label(hlds__make_hlds__qual_info__set_module_recompilation_info_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(hlds__hlds_module__module_info_set_maybe_recompilation_info_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(parse_tree__module_qual__qualify_type_qualification_7_0);
MR_decl_entry(parse_tree__prog_type__type_vars_2_0);
MR_decl_entry(parse_tree__prog_util__get_new_tvars_8_0);
MR_decl_entry(parse_tree__prog_type_subst__apply_variable_renaming_to_type_3_0);
MR_decl_entry(parse_tree__equiv_type__replace_in_type_8_0);
MR_decl_entry(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0);
MR_decl_entry(__Unify___parse_tree__prog_data__mer_type_0_0);
MR_decl_entry(f_115_118_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_0);

MR_BEGIN_MODULE(hlds__make_hlds__qual_info_module12)
	MR_init_entry1(hlds__make_hlds__qual_info__process_type_qualification_10_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__make_hlds__qual_info__process_type_qualification_10_0);
	MR_init_label10(hlds__make_hlds__qual_info__process_type_qualification_10_0,2,4,5,6,7,8,9,12,16,15)
	MR_init_label2(hlds__make_hlds__qual_info__process_type_qualification_10_0,10,28)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'process_type_qualification'/10 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__hlds__make_hlds__qual_info__process_type_qualification_10_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(15);
	MR_sv(15) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r6;
	MR_sv(10) = MR_tfield(0, MR_tempr1, 7);
	MR_sv(9) = MR_tfield(0, MR_tempr1, 6);
	MR_r8 = MR_tfield(0, MR_tempr1, 5);
	MR_sv(8) = MR_tfield(0, MR_tempr1, 4);
	MR_sv(7) = MR_tfield(0, MR_tempr1, 3);
	MR_sv(6) = MR_tfield(0, MR_tempr1, 2);
	MR_sv(5) = MR_tfield(0, MR_tempr1, 1);
	MR_sv(4) = MR_tfield(0, MR_tempr1, 0);
	if (MR_LTAGS_TESTR(MR_sv(9),0,0)) {
		MR_GOTO_LAB(hlds__make_hlds__qual_info__process_type_qualification_10_0_i2);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_r1 = MR_r2;
	MR_sv(12) = MR_r8;
	MR_sv(13) = MR_r5;
	MR_sv(14) = MR_r7;
	MR_GOTO_LAB(hlds__make_hlds__qual_info__process_type_qualification_10_0_i5);
	}
MR_def_label(hlds__make_hlds__qual_info__process_type_qualification_10_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r3;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_sv(3) = MR_tempr1;
	MR_sv(13) = MR_r5;
	MR_r1 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_r8;
	MR_r4 = MR_r7;
	}
	MR_np_call_localret_ent(parse_tree__module_qual__qualify_type_qualification_7_0,
		hlds__make_hlds__qual_info__process_type_qualification_10_0_i4);
MR_def_label(hlds__make_hlds__qual_info__process_type_qualification_10_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(12) = MR_r2;
	MR_sv(14) = MR_r3;
MR_def_label(hlds__make_hlds__qual_info__process_type_qualification_10_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(11) = MR_r1;
	MR_np_call_localret_ent(parse_tree__prog_type__type_vars_2_0,
		hlds__make_hlds__qual_info__process_type_qualification_10_0_i6);
MR_def_label(hlds__make_hlds__qual_info__process_type_qualification_10_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(5);
	MR_r4 = MR_sv(7);
	MR_r5 = MR_sv(6);
	MR_np_call_localret_ent(parse_tree__prog_util__get_new_tvars_8_0,
		hlds__make_hlds__qual_info__process_type_qualification_10_0_i7);
MR_def_label(hlds__make_hlds__qual_info__process_type_qualification_10_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_sv(5) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(6) = MR_tempr1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(11);
	}
	MR_np_call_localret_ent(parse_tree__prog_type_subst__apply_variable_renaming_to_type_3_0,
		hlds__make_hlds__qual_info__process_type_qualification_10_0_i8);
MR_def_label(hlds__make_hlds__qual_info__process_type_qualification_10_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(2);
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	}
	MR_np_call_localret_ent(parse_tree__equiv_type__replace_in_type_8_0,
		hlds__make_hlds__qual_info__process_type_qualification_10_0_i9);
MR_def_label(hlds__make_hlds__qual_info__process_type_qualification_10_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_sv(7) = MR_r3;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,1);
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r4 = MR_sv(8);
	MR_r5 = MR_sv(1);
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		hlds__make_hlds__qual_info__process_type_qualification_10_0_i12);
MR_def_label(hlds__make_hlds__qual_info__process_type_qualification_10_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(hlds__make_hlds__qual_info__process_type_qualification_10_0_i10);
	}
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(__Unify___parse_tree__prog_data__mer_type_0_0,
		hlds__make_hlds__qual_info__process_type_qualification_10_0_i16);
MR_def_label(hlds__make_hlds__qual_info__process_type_qualification_10_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(hlds__make_hlds__qual_info__process_type_qualification_10_0_i15);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 8);
	MR_r2 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_sv(4);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(7);
	MR_tfield(0, MR_tempr1, 2) = MR_sv(6);
	MR_tfield(0, MR_tempr1, 3) = MR_sv(5);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(8);
	MR_tfield(0, MR_tempr1, 5) = MR_sv(12);
	MR_tfield(0, MR_tempr1, 6) = MR_sv(9);
	MR_tfield(0, MR_tempr1, 7) = MR_sv(10);
	MR_r1 = MR_sv(13);
	MR_r3 = MR_sv(14);
	MR_decr_sp_and_return(15);
	}
MR_def_label(hlds__make_hlds__qual_info__process_type_qualification_10_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(3);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_TAG_COMMON(1,0,5);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 2);
	MR_tfield(0, MR_tempr1, 2) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr3;
	MR_tfield(1, MR_tempr3, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr3, 1) = MR_sv(14);
	MR_tag_alloc_heap(MR_tempr4, 0, (MR_Integer) 8);
	MR_r2 = MR_tempr4;
	MR_tfield(0, MR_tempr4, 0) = MR_sv(4);
	MR_tfield(0, MR_tempr4, 1) = MR_sv(7);
	MR_tfield(0, MR_tempr4, 2) = MR_sv(6);
	MR_tfield(0, MR_tempr4, 3) = MR_sv(5);
	MR_tfield(0, MR_tempr4, 4) = MR_sv(8);
	MR_tfield(0, MR_tempr4, 5) = MR_sv(12);
	MR_tfield(0, MR_tempr4, 6) = MR_sv(9);
	MR_tfield(0, MR_tempr4, 7) = MR_sv(10);
	MR_r1 = MR_sv(13);
	MR_decr_sp_and_return(15);
	}
MR_def_label(hlds__make_hlds__qual_info__process_type_qualification_10_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,1);
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r4 = MR_sv(1);
	MR_r5 = MR_sv(2);
	MR_r6 = MR_sv(8);
	MR_np_call_localret_ent(f_115_118_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_0,
		hlds__make_hlds__qual_info__process_type_qualification_10_0_i28);
MR_def_label(hlds__make_hlds__qual_info__process_type_qualification_10_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 8);
	MR_r2 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_sv(4);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(7);
	MR_tfield(0, MR_tempr1, 2) = MR_sv(6);
	MR_tfield(0, MR_tempr1, 3) = MR_sv(5);
	MR_tfield(0, MR_tempr1, 4) = MR_r1;
	MR_tfield(0, MR_tempr1, 5) = MR_sv(12);
	MR_tfield(0, MR_tempr1, 6) = MR_sv(9);
	MR_tfield(0, MR_tempr1, 7) = MR_sv(10);
	MR_r1 = MR_sv(13);
	MR_r3 = MR_sv(14);
	MR_decr_sp_and_return(15);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__hlds_goal__create_atomic_complicated_unification_7_0);
MR_decl_entry(recompilation__record_used_item_5_0);

MR_BEGIN_MODULE(hlds__make_hlds__qual_info_module13)
	MR_init_entry1(hlds__make_hlds__qual_info__make_atomic_unification_9_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__make_hlds__qual_info__make_atomic_unification_9_0);
	MR_init_label7(hlds__make_hlds__qual_info__make_atomic_unification_9_0,21,3,7,9,10,12,19)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'make_atomic_unification'/9 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__hlds__make_hlds__qual_info__make_atomic_unification_9_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(10);
	MR_sv(10) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tag(MR_r2);
	if ((MR_tempr1 == MR_mktag((MR_Integer) 1))) {
		MR_GOTO_LAB(hlds__make_hlds__qual_info__make_atomic_unification_9_0_i3);
	}
	}
MR_def_label(hlds__make_hlds__qual_info__make_atomic_unification_9_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r7;
	MR_np_call_localret_ent(hlds__hlds_goal__create_atomic_complicated_unification_7_0,
		hlds__make_hlds__qual_info__make_atomic_unification_9_0_i19);
MR_def_label(hlds__make_hlds__qual_info__make_atomic_unification_9_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr3 = MR_r2;
	MR_tempr1 = MR_tfield(1, MR_tempr3, 0);
	if (MR_PTAG_TESTR(MR_tempr1,1)) {
		MR_GOTO_LAB(hlds__make_hlds__qual_info__make_atomic_unification_9_0_i21);
	}
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_sv(8) = MR_tempr2;
	MR_tfield(0, MR_tempr2, 0) = MR_tfield(1, MR_tempr1, 0);
	MR_tfield(0, MR_tempr2, 1) = MR_tfield(1, MR_tempr1, 1);
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_tempr3;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_sv(5) = MR_r5;
	MR_sv(6) = MR_r6;
	MR_tempr4 = MR_r7;
	MR_sv(7) = MR_tempr4;
	MR_sv(9) = MR_tfield(0, MR_tempr4, 5);
	MR_r1 = MR_sv(9);
	}
	MR_np_call_localret_ent(parse_tree__module_qual__mq_info_get_recompilation_info_2_0,
		hlds__make_hlds__qual_info__make_atomic_unification_9_0_i7);
MR_def_label(hlds__make_hlds__qual_info__make_atomic_unification_9_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(hlds__make_hlds__qual_info__make_atomic_unification_9_0_i9);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(4);
	MR_r5 = MR_sv(5);
	MR_r6 = MR_sv(6);
	MR_sv(1) = MR_sv(7);
	MR_np_call_localret_ent(hlds__hlds_goal__create_atomic_complicated_unification_7_0,
		hlds__make_hlds__qual_info__make_atomic_unification_9_0_i19);
MR_def_label(hlds__make_hlds__qual_info__make_atomic_unification_9_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 5;
	MR_r2 = MR_sv(8);
	MR_r3 = MR_r2;
	MR_r4 = MR_tfield(1, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(recompilation__record_used_item_5_0,
		hlds__make_hlds__qual_info__make_atomic_unification_9_0_i10);
MR_def_label(hlds__make_hlds__qual_info__make_atomic_unification_9_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(9);
	}
	MR_np_call_localret_ent(parse_tree__module_qual__mq_info_set_recompilation_info_3_0,
		hlds__make_hlds__qual_info__make_atomic_unification_9_0_i12);
MR_def_label(hlds__make_hlds__qual_info__make_atomic_unification_9_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 8);
	MR_tempr2 = MR_sv(7);
	MR_tfield(0, MR_tempr1, 0) = MR_tfield(0, MR_tempr2, 0);
	MR_tfield(0, MR_tempr1, 1) = MR_tfield(0, MR_tempr2, 1);
	MR_tfield(0, MR_tempr1, 2) = MR_tfield(0, MR_tempr2, 2);
	MR_tfield(0, MR_tempr1, 3) = MR_tfield(0, MR_tempr2, 3);
	MR_tfield(0, MR_tempr1, 4) = MR_tfield(0, MR_tempr2, 4);
	MR_tfield(0, MR_tempr1, 5) = MR_r1;
	MR_tfield(0, MR_tempr1, 6) = MR_tfield(0, MR_tempr2, 6);
	MR_tfield(0, MR_tempr1, 7) = MR_tfield(0, MR_tempr2, 7);
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(4);
	MR_r5 = MR_sv(5);
	MR_r6 = MR_sv(6);
	MR_sv(1) = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_goal__create_atomic_complicated_unification_7_0,
		hlds__make_hlds__qual_info__make_atomic_unification_9_0_i19);
MR_def_label(hlds__make_hlds__qual_info__make_atomic_unification_9_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_decr_sp_and_return(10);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__make_hlds__qual_info_module14)
	MR_init_entry1(hlds__make_hlds__qual_info__make_atomic_unification_8_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__make_hlds__qual_info__make_atomic_unification_8_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'make_atomic_unification'/8 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__hlds__make_hlds__qual_info__make_atomic_unification_8_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r6;
	MR_r6 = (MR_Integer) 0;
	MR_r7 = MR_tempr1;
	MR_np_tailcall_ent(hlds__make_hlds__qual_info__make_atomic_unification_9_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__recompilation__pred_or_func_to_item_type_1_0);

MR_BEGIN_MODULE(hlds__make_hlds__qual_info_module15)
	MR_init_entry1(hlds__make_hlds__qual_info__record_called_pred_or_func_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__make_hlds__qual_info__record_called_pred_or_func_5_0);
	MR_init_label5(hlds__make_hlds__qual_info__record_called_pred_or_func_5_0,3,4,6,7,9)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'record_called_pred_or_func'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__hlds__make_hlds__qual_info__record_called_pred_or_func_5_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_sv(1) = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_r2;
	MR_tfield(0, MR_tempr1, 1) = MR_r3;
	MR_sv(2) = MR_r4;
	}
	MR_np_call_localret_ent(fn__recompilation__pred_or_func_to_item_type_1_0,
		hlds__make_hlds__qual_info__record_called_pred_or_func_5_0_i3);
MR_def_label(hlds__make_hlds__qual_info__record_called_pred_or_func_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_sv(4) = MR_tfield(0, MR_sv(2), 5);
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(parse_tree__module_qual__mq_info_get_recompilation_info_2_0,
		hlds__make_hlds__qual_info__record_called_pred_or_func_5_0_i4);
MR_def_label(hlds__make_hlds__qual_info__record_called_pred_or_func_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(hlds__make_hlds__qual_info__record_called_pred_or_func_5_0_i6);
	}
	MR_r1 = MR_sv(2);
	MR_decr_sp_and_return(5);
MR_def_label(hlds__make_hlds__qual_info__record_called_pred_or_func_5_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_r2;
	MR_r4 = MR_tfield(1, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(recompilation__record_used_item_5_0,
		hlds__make_hlds__qual_info__record_called_pred_or_func_5_0_i7);
MR_def_label(hlds__make_hlds__qual_info__record_called_pred_or_func_5_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(4);
	}
	MR_np_call_localret_ent(parse_tree__module_qual__mq_info_set_recompilation_info_3_0,
		hlds__make_hlds__qual_info__record_called_pred_or_func_5_0_i9);
MR_def_label(hlds__make_hlds__qual_info__record_called_pred_or_func_5_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 8);
	MR_tempr2 = MR_sv(2);
	MR_tfield(0, MR_tempr1, 0) = MR_tfield(0, MR_tempr2, 0);
	MR_tfield(0, MR_tempr1, 1) = MR_tfield(0, MR_tempr2, 1);
	MR_tfield(0, MR_tempr1, 2) = MR_tfield(0, MR_tempr2, 2);
	MR_tfield(0, MR_tempr1, 3) = MR_tfield(0, MR_tempr2, 3);
	MR_tfield(0, MR_tempr1, 4) = MR_tfield(0, MR_tempr2, 4);
	MR_tfield(0, MR_tempr1, 5) = MR_r1;
	MR_tfield(0, MR_tempr1, 6) = MR_tfield(0, MR_tempr2, 6);
	MR_tfield(0, MR_tempr1, 7) = MR_tfield(0, MR_tempr2, 7);
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(5);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(parse_tree__prog_util__pred_args_to_func_args_3_0);
MR_decl_entry(list__length_2_0);
MR_decl_entry(fn__parse_tree__prog_data__cons_id_dummy_type_ctor_0_0);
MR_decl_entry(fn__hlds__hlds_goal__goal_info_get_context_1_0);
MR_decl_entry(hlds__hlds_goal__create_pure_atomic_complicated_unification_6_0);
MR_decl_entry(fn__hlds__hlds_pred__invalid_proc_id_0_0);

MR_BEGIN_MODULE(hlds__make_hlds__qual_info_module16)
	MR_init_entry1(hlds__make_hlds__qual_info__do_construct_pred_or_func_call_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__make_hlds__qual_info__do_construct_pred_or_func_call_6_0);
	MR_init_label7(hlds__make_hlds__qual_info__do_construct_pred_or_func_call_6_0,5,6,7,9,11,3,13)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'do_construct_pred_or_func_call'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__hlds__make_hlds__qual_info__do_construct_pred_or_func_call_6_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	if (MR_INT_NE(MR_r2,1)) {
		MR_GOTO_LAB(hlds__make_hlds__qual_info__do_construct_pred_or_func_call_6_0_i3);
	}
	MR_sv(2) = MR_r3;
	MR_sv(4) = MR_r5;
	MR_sv(1) = (MR_Word) MR_TAG_COMMON(0,0,1);
	MR_r1 = MR_sv(1);
	MR_r2 = MR_r4;
	MR_np_call_localret_ent(parse_tree__prog_util__pred_args_to_func_args_3_0,
		hlds__make_hlds__qual_info__do_construct_pred_or_func_call_6_0_i5);
MR_def_label(hlds__make_hlds__qual_info__do_construct_pred_or_func_call_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(3) = MR_r2;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,1);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(list__length_2_0,
		hlds__make_hlds__qual_info__do_construct_pred_or_func_call_6_0_i6);
MR_def_label(hlds__make_hlds__qual_info__do_construct_pred_or_func_call_6_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_np_call_localret_ent(fn__parse_tree__prog_data__cons_id_dummy_type_ctor_0_0,
		hlds__make_hlds__qual_info__do_construct_pred_or_func_call_6_0_i7);
MR_def_label(hlds__make_hlds__qual_info__do_construct_pred_or_func_call_6_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 3);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr1, 1) = MR_sv(5);
	MR_tfield(1, MR_tempr1, 2) = MR_r1;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_sv(4);
	}
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_context_1_0,
		hlds__make_hlds__qual_info__do_construct_pred_or_func_call_6_0_i9);
MR_def_label(hlds__make_hlds__qual_info__do_construct_pred_or_func_call_6_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 3);
	MR_r2 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr1, 1) = (MR_Integer) 0;
	MR_tfield(1, MR_tempr1, 2) = MR_sv(1);
	MR_tempr2 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r3 = MR_tempr2;
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	MR_r5 = (MR_Word) MR_tbmkword(0, 0);
	}
	MR_np_call_localret_ent(hlds__hlds_goal__create_pure_atomic_complicated_unification_6_0,
		hlds__make_hlds__qual_info__do_construct_pred_or_func_call_6_0_i11);
MR_def_label(hlds__make_hlds__qual_info__do_construct_pred_or_func_call_6_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_tfield(0, MR_r1, 0);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(4);
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(6);
	}
MR_def_label(hlds__make_hlds__qual_info__do_construct_pred_or_func_call_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_r5;
	MR_np_call_localret_ent(fn__hlds__hlds_pred__invalid_proc_id_0_0,
		hlds__make_hlds__qual_info__do_construct_pred_or_func_call_6_0_i13);
MR_def_label(hlds__make_hlds__qual_info__do_construct_pred_or_func_call_6_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 6);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_tfield(1, MR_tempr1, 2) = MR_sv(3);
	MR_tfield(1, MR_tempr1, 3) = (MR_Integer) 2;
	MR_tfield(1, MR_tempr1, 4) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(1, MR_tempr1, 5) = MR_sv(2);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_r1 = MR_tempr2;
	MR_tfield(0, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr2, 1) = MR_sv(4);
	MR_decr_sp_and_return(6);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(parse_tree__prog_util__adjust_func_arity_3_1);

MR_BEGIN_MODULE(hlds__make_hlds__qual_info_module17)
	MR_init_entry1(hlds__make_hlds__qual_info__construct_pred_or_func_call_8_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__make_hlds__qual_info__construct_pred_or_func_call_8_0);
	MR_init_label4(hlds__make_hlds__qual_info__construct_pred_or_func_call_8_0,2,4,5,6)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'construct_pred_or_func_call'/8 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__hlds__make_hlds__qual_info__construct_pred_or_func_call_8_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_r6;
	MR_np_call_localret_ent(hlds__make_hlds__qual_info__do_construct_pred_or_func_call_6_0,
		hlds__make_hlds__qual_info__construct_pred_or_func_call_8_0_i2);
MR_def_label(hlds__make_hlds__qual_info__construct_pred_or_func_call_8_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__length_2_0,
		hlds__make_hlds__qual_info__construct_pred_or_func_call_8_0_i4);
MR_def_label(hlds__make_hlds__qual_info__construct_pred_or_func_call_8_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(parse_tree__prog_util__adjust_func_arity_3_1,
		hlds__make_hlds__qual_info__construct_pred_or_func_call_8_0_i5);
MR_def_label(hlds__make_hlds__qual_info__construct_pred_or_func_call_8_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(4);
	}
	MR_np_call_localret_ent(hlds__make_hlds__qual_info__record_called_pred_or_func_5_0,
		hlds__make_hlds__qual_info__construct_pred_or_func_call_8_0_i6);
MR_def_label(hlds__make_hlds__qual_info__construct_pred_or_func_call_8_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tempr1;
	MR_decr_sp_and_return(5);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___tree234__tree234_2_0);
MR_decl_entry(__Unify___varset__varset_1_0);
MR_decl_entry(__Unify___parse_tree__module_qual__mq_info_0_0);
MR_decl_entry(__Unify___hlds__hlds_pred__import_status_0_0);

MR_BEGIN_MODULE(hlds__make_hlds__qual_info_module18)
	MR_init_entry1(__Unify___hlds__make_hlds__qual_info__qual_info_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___hlds__make_hlds__qual_info__qual_info_0_0);
	MR_init_label9(__Unify___hlds__make_hlds__qual_info__qual_info_0_0,4,6,9,11,14,16,18,20,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___hlds__make_hlds__qual_info__qual_info_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___hlds__make_hlds__qual_info__qual_info_0_0_i20);
	}
	MR_incr_sp(15);
	MR_sv(15) = (MR_Word) MR_succip;
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
	MR_sv(5) = MR_tfield(0, MR_tempr1, 5);
	MR_sv(6) = MR_tfield(0, MR_tempr1, 6);
	MR_sv(7) = MR_tfield(0, MR_tempr1, 7);
	MR_sv(8) = MR_tfield(0, MR_tempr2, 1);
	MR_sv(9) = MR_tfield(0, MR_tempr2, 2);
	MR_sv(10) = MR_tfield(0, MR_tempr2, 3);
	MR_sv(11) = MR_tfield(0, MR_tempr2, 4);
	MR_sv(12) = MR_tfield(0, MR_tempr2, 5);
	MR_sv(13) = MR_tfield(0, MR_tempr2, 6);
	MR_sv(14) = MR_tfield(0, MR_tempr2, 7);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, type_ctor);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(parse_tree__equiv_type, eqv_type_body);
	MR_r3 = MR_tfield(0, MR_tempr1, 0);
	MR_r4 = MR_tfield(0, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(__Unify___tree234__tree234_2_0,
		__Unify___hlds__make_hlds__qual_info__qual_info_0_0_i4);
MR_def_label(__Unify___hlds__make_hlds__qual_info__qual_info_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___hlds__make_hlds__qual_info__qual_info_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, tvar_type);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(8);
	MR_np_call_localret_ent(__Unify___varset__varset_1_0,
		__Unify___hlds__make_hlds__qual_info__qual_info_0_0_i6);
MR_def_label(__Unify___hlds__make_hlds__qual_info__qual_info_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___hlds__make_hlds__qual_info__qual_info_0_0_i1);
	}
	MR_sv(1) = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r1 = MR_sv(1);
	MR_r2 = MR_r1;
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(9);
	MR_np_call_localret_ent(__Unify___tree234__tree234_2_0,
		__Unify___hlds__make_hlds__qual_info__qual_info_0_0_i9);
MR_def_label(__Unify___hlds__make_hlds__qual_info__qual_info_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___hlds__make_hlds__qual_info__qual_info_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(10);
	MR_np_call_localret_ent(__Unify___tree234__tree234_2_0,
		__Unify___hlds__make_hlds__qual_info__qual_info_0_0_i11);
MR_def_label(__Unify___hlds__make_hlds__qual_info__qual_info_0_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___hlds__make_hlds__qual_info__qual_info_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,1);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(11);
	MR_np_call_localret_ent(__Unify___tree234__tree234_2_0,
		__Unify___hlds__make_hlds__qual_info__qual_info_0_0_i14);
MR_def_label(__Unify___hlds__make_hlds__qual_info__qual_info_0_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___hlds__make_hlds__qual_info__qual_info_0_0_i1);
	}
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(12);
	MR_np_call_localret_ent(__Unify___parse_tree__module_qual__mq_info_0_0,
		__Unify___hlds__make_hlds__qual_info__qual_info_0_0_i16);
MR_def_label(__Unify___hlds__make_hlds__qual_info__qual_info_0_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___hlds__make_hlds__qual_info__qual_info_0_0_i1);
	}
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(13);
	MR_np_call_localret_ent(__Unify___hlds__hlds_pred__import_status_0_0,
		__Unify___hlds__make_hlds__qual_info__qual_info_0_0_i18);
MR_def_label(__Unify___hlds__make_hlds__qual_info__qual_info_0_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___hlds__make_hlds__qual_info__qual_info_0_0_i1);
	}
	MR_r1 = (MR_sv(7) == MR_sv(14));
	MR_decr_sp_and_return(15);
MR_def_label(__Unify___hlds__make_hlds__qual_info__qual_info_0_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___hlds__make_hlds__qual_info__qual_info_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(15);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Compare___tree234__tree234_2_0);
MR_decl_entry(__Compare___varset__varset_1_0);
MR_decl_entry(__Compare___parse_tree__module_qual__mq_info_0_0);
MR_decl_entry(__Compare___hlds__hlds_pred__import_status_0_0);
MR_decl_entry(private_builtin__builtin_compare_int_3_0);

MR_BEGIN_MODULE(hlds__make_hlds__qual_info_module19)
	MR_init_entry1(__Compare___hlds__make_hlds__qual_info__qual_info_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___hlds__make_hlds__qual_info__qual_info_0_0);
	MR_init_label10(__Compare___hlds__make_hlds__qual_info__qual_info_0_0,3,2,5,9,14,19,24,28,32,72)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___hlds__make_hlds__qual_info__qual_info_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___hlds__make_hlds__qual_info__qual_info_0_0_i3);
	}
	MR_incr_sp(15);
	MR_sv(15) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___hlds__make_hlds__qual_info__qual_info_0_0_i2);
MR_def_label(__Compare___hlds__make_hlds__qual_info__qual_info_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___hlds__make_hlds__qual_info__qual_info_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(2);
	MR_sv(14) = MR_tfield(0, MR_tempr5, 7);
	MR_sv(13) = MR_tfield(0, MR_tempr5, 6);
	MR_sv(12) = MR_tfield(0, MR_tempr5, 5);
	MR_sv(11) = MR_tfield(0, MR_tempr5, 4);
	MR_sv(10) = MR_tfield(0, MR_tempr5, 3);
	MR_sv(9) = MR_tfield(0, MR_tempr5, 2);
	MR_sv(8) = MR_tfield(0, MR_tempr5, 1);
	MR_tempr6 = MR_sv(1);
	MR_sv(7) = MR_tfield(0, MR_tempr6, 7);
	MR_sv(6) = MR_tfield(0, MR_tempr6, 6);
	MR_sv(5) = MR_tfield(0, MR_tempr6, 5);
	MR_sv(4) = MR_tfield(0, MR_tempr6, 4);
	MR_sv(3) = MR_tfield(0, MR_tempr6, 3);
	MR_tempr1 = MR_tfield(0, MR_tempr6, 2);
	MR_tempr2 = MR_tfield(0, MR_tempr6, 1);
	MR_tempr3 = MR_tempr6;
	MR_sv(1) = MR_tempr2;
	MR_tempr4 = MR_tempr5;
	MR_sv(2) = MR_tempr1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, type_ctor);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(parse_tree__equiv_type, eqv_type_body);
	MR_r3 = MR_tfield(0, MR_tempr3, 0);
	MR_r4 = MR_tfield(0, MR_tempr4, 0);
	}
	MR_np_call_localret_ent(__Compare___tree234__tree234_2_0,
		__Compare___hlds__make_hlds__qual_info__qual_info_0_0_i5);
MR_def_label(__Compare___hlds__make_hlds__qual_info__qual_info_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___hlds__make_hlds__qual_info__qual_info_0_0_i72);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, tvar_type);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(8);
	MR_np_call_localret_ent(__Compare___varset__varset_1_0,
		__Compare___hlds__make_hlds__qual_info__qual_info_0_0_i9);
MR_def_label(__Compare___hlds__make_hlds__qual_info__qual_info_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___hlds__make_hlds__qual_info__qual_info_0_0_i72);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r2 = MR_r1;
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(9);
	MR_np_call_localret_ent(__Compare___tree234__tree234_2_0,
		__Compare___hlds__make_hlds__qual_info__qual_info_0_0_i14);
MR_def_label(__Compare___hlds__make_hlds__qual_info__qual_info_0_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___hlds__make_hlds__qual_info__qual_info_0_0_i72);
	}
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(10);
	MR_np_call_localret_ent(__Compare___tree234__tree234_2_0,
		__Compare___hlds__make_hlds__qual_info__qual_info_0_0_i19);
MR_def_label(__Compare___hlds__make_hlds__qual_info__qual_info_0_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___hlds__make_hlds__qual_info__qual_info_0_0_i72);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,1);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(11);
	MR_np_call_localret_ent(__Compare___tree234__tree234_2_0,
		__Compare___hlds__make_hlds__qual_info__qual_info_0_0_i24);
MR_def_label(__Compare___hlds__make_hlds__qual_info__qual_info_0_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___hlds__make_hlds__qual_info__qual_info_0_0_i72);
	}
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(12);
	MR_np_call_localret_ent(__Compare___parse_tree__module_qual__mq_info_0_0,
		__Compare___hlds__make_hlds__qual_info__qual_info_0_0_i28);
MR_def_label(__Compare___hlds__make_hlds__qual_info__qual_info_0_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___hlds__make_hlds__qual_info__qual_info_0_0_i72);
	}
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(13);
	MR_np_call_localret_ent(__Compare___hlds__hlds_pred__import_status_0_0,
		__Compare___hlds__make_hlds__qual_info__qual_info_0_0_i32);
MR_def_label(__Compare___hlds__make_hlds__qual_info__qual_info_0_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___hlds__make_hlds__qual_info__qual_info_0_0_i72);
	}
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(14);
	MR_succip_word = MR_sv(15);
	MR_decr_sp(15);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
MR_def_label(__Compare___hlds__make_hlds__qual_info__qual_info_0_0,72)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(15);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

static void mercury__hlds__make_hlds__qual_info_maybe_bunch_0(void)
{
	hlds__make_hlds__qual_info_module0();
	hlds__make_hlds__qual_info_module1();
	hlds__make_hlds__qual_info_module2();
	hlds__make_hlds__qual_info_module3();
	hlds__make_hlds__qual_info_module4();
	hlds__make_hlds__qual_info_module5();
	hlds__make_hlds__qual_info_module6();
	hlds__make_hlds__qual_info_module7();
	hlds__make_hlds__qual_info_module8();
	hlds__make_hlds__qual_info_module9();
	hlds__make_hlds__qual_info_module10();
	hlds__make_hlds__qual_info_module11();
	hlds__make_hlds__qual_info_module12();
	hlds__make_hlds__qual_info_module13();
	hlds__make_hlds__qual_info_module14();
	hlds__make_hlds__qual_info_module15();
	hlds__make_hlds__qual_info_module16();
	hlds__make_hlds__qual_info_module17();
	hlds__make_hlds__qual_info_module18();
	hlds__make_hlds__qual_info_module19();
}

/* suppress gcc -Wmissing-decls warnings */
void mercury__hlds__make_hlds__qual_info__init(void);
void mercury__hlds__make_hlds__qual_info__init_type_tables(void);
void mercury__hlds__make_hlds__qual_info__init_debugger(void);
#ifdef MR_DEEP_PROFILING
void mercury__hlds__make_hlds__qual_info__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp);
#endif
#ifdef MR_RECORD_TERM_SIZES
void mercury__hlds__make_hlds__qual_info__init_complexity_procs(void);
#endif

void mercury__hlds__make_hlds__qual_info__init(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	mercury__hlds__make_hlds__qual_info_maybe_bunch_0();
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_hlds__make_hlds__qual_info__type_ctor_info_qual_info_0,
		hlds__make_hlds__qual_info__qual_info_0_0);
	mercury__hlds__make_hlds__qual_info__init_debugger();
}

void mercury__hlds__make_hlds__qual_info__init_type_tables(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	{
		MR_register_type_ctor_info(
		&mercury_data_hlds__make_hlds__qual_info__type_ctor_info_qual_info_0);
	}
}


void mercury__hlds__make_hlds__qual_info__init_debugger(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}

#ifdef MR_DEEP_PROFILING

void mercury__hlds__make_hlds__qual_info__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp)
{
	MR_write_out_module_proc_reps_start(procrep_fp, &mercury_data__module_common_layout__hlds__make_hlds__qual_info);
	MR_write_out_module_proc_reps_end(procrep_fp);
}

#endif

#ifdef MR_RECORD_TERM_SIZES

void mercury__hlds__make_hlds__qual_info__init_complexity_procs(void)
{
}

#endif

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;
