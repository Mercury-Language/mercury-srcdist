/*
** Automatically generated from `hlds_args.m'
** by the Mercury compiler,
** version rotd-2012-03-21, configured for x86_64-unknown-linux-gnu.
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
INIT mercury__hlds__hlds_args__init
ENDINIT
*/

#define MR_ALLOW_RESET
#include "mercury_imp.h"
#line 140 "../library/io.int2"
#include "io.mh"

#line 28 "hlds.hlds_args.c"
#line 150 "../library/io.int2"
#include "time.mh"

#line 32 "hlds.hlds_args.c"
#line 151 "../library/io.int2"
#include "string.mh"

#line 36 "hlds.hlds_args.c"
#line 31 "../library/bitmap.int2"
#include "bitmap.mh"

#line 40 "hlds.hlds_args.c"
#line 39 "../mdbcomp/mdbcomp.rtti_access.int2"
#include "mdbcomp.rtti_access.mh"

#line 44 "hlds.hlds_args.c"
#line 33 "../library/array.int2"
#include "array.mh"

#line 48 "hlds.hlds_args.c"
#line 49 "hlds.hlds_args.c"
#include "hlds.hlds_args.mh"

#line 52 "hlds.hlds_args.c"
#line 53 "hlds.hlds_args.c"
#ifndef HLDS__HLDS_ARGS_DECL_GUARD
#define HLDS__HLDS_ARGS_DECL_GUARD

#line 57 "hlds.hlds_args.c"
#line 58 "hlds.hlds_args.c"

#endif
#line 61 "hlds.hlds_args.c"

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
	MR_Word * f1[8];
};
#ifdef MR_MSVC
#pragma pack(pop)
#endif
MR_STATIC_LINKAGE const struct mercury_type_1 mercury_common_1[];

extern const MR_TypeCtorInfo_Struct
	mercury_data_hlds__hlds_args__type_ctor_info_poly_arg_vector_1,
	mercury_data_hlds__hlds_args__type_ctor_info_proc_arg_vector_1;
MR_decl_label10(hlds__hlds_args__apply_renaming_to_proc_arg_vector_3_0, 2,3,4,5,6,7,8,10,14,12)
MR_decl_label9(hlds__hlds_args__proc_arg_vector_all_true_2_0, 2,4,6,8,10,12,14,16,1)
MR_decl_label10(hlds__hlds_args__proc_arg_vector_foldl2_corresponding3_8_0, 2,3,4,5,6,7,8,9,14,20)
MR_decl_label10(hlds__hlds_args__proc_arg_vector_foldl3_corresponding_9_0, 2,3,4,5,6,7,8,9,13,18)
MR_decl_label10(hlds__hlds_args__proc_arg_vector_foldl3_corresponding3_10_0, 2,3,4,5,6,7,8,9,14,20)
MR_decl_label10(hlds__hlds_args__proc_arg_vector_foldl4_corresponding3_12_0, 2,3,4,5,6,7,8,9,14,20)
MR_decl_label9(hlds__hlds_args__proc_arg_vector_map_3_0, 2,3,4,5,6,7,8,10,12)
MR_decl_label10(hlds__hlds_args__proc_arg_vector_map_corresponding_4_0, 2,3,4,5,6,7,8,12,9,15)
MR_decl_label10(hlds__hlds_args__proc_arg_vector_map_corresponding_foldl2_8_0, 2,3,4,5,6,7,8,12,9,15)
MR_decl_label1(hlds__hlds_args__proc_arg_vector_member_2_0, 2)
MR_decl_label3(hlds__hlds_args__proc_arg_vector_partition_poly_args_3_0, 8,10,12)
MR_decl_label2(hlds__hlds_args__proc_arg_vector_to_func_args_3_0, 9,11)
MR_decl_label2(fn__hlds__hlds_args__proc_arg_vector_init_2_0, 4,3)
MR_decl_label9(fn__hlds__hlds_args__proc_arg_vector_map_2_0, 2,3,4,5,6,7,8,10,12)
MR_decl_label1(fn__hlds__hlds_args__proc_arg_vector_to_list_1_0, 3)
MR_decl_label1(fn__hlds__hlds_args__proc_arg_vector_to_set_1_0, 2)
MR_decl_label9(__Unify___hlds__hlds_args__proc_arg_vector_1_0, 4,6,8,10,12,14,16,20,1)
MR_decl_label10(__Compare___hlds__hlds_args__proc_arg_vector_1_0, 3,2,5,9,13,17,21,25,29,69)
MR_def_extern_entry(fn__hlds__hlds_args__proc_arg_vector_init_2_0)
MR_def_extern_entry(fn__hlds__hlds_args__proc_arg_vector_get_instance_type_infos_1_0)
MR_def_extern_entry(fn__hlds__hlds_args__proc_arg_vector_get_instance_typeclass_infos_1_0)
MR_def_extern_entry(fn__hlds__hlds_args__proc_arg_vector_get_univ_type_infos_1_0)
MR_def_extern_entry(fn__hlds__hlds_args__proc_arg_vector_get_exist_type_infos_1_0)
MR_def_extern_entry(fn__hlds__hlds_args__proc_arg_vector_get_univ_typeclass_infos_1_0)
MR_def_extern_entry(fn__hlds__hlds_args__proc_arg_vector_get_exist_typeclass_infos_1_0)
MR_def_extern_entry(fn__hlds__hlds_args__proc_arg_vector_get_user_args_1_0)
MR_def_extern_entry(fn__hlds__hlds_args__proc_arg_vector_get_maybe_ret_value_1_0)
MR_def_extern_entry(hlds__hlds_args__proc_arg_vector_set_instance_type_infos_3_0)
MR_def_extern_entry(hlds__hlds_args__proc_arg_vector_set_instance_typeclass_infos_3_0)
MR_def_extern_entry(hlds__hlds_args__proc_arg_vector_set_univ_type_infos_3_0)
MR_def_extern_entry(hlds__hlds_args__proc_arg_vector_set_exist_type_infos_3_0)
MR_def_extern_entry(hlds__hlds_args__proc_arg_vector_set_univ_typeclass_infos_3_0)
MR_def_extern_entry(hlds__hlds_args__proc_arg_vector_set_exist_typeclass_infos_3_0)
MR_def_extern_entry(hlds__hlds_args__proc_arg_vector_set_user_args_3_0)
MR_def_extern_entry(hlds__hlds_args__proc_arg_vector_set_maybe_ret_value_3_0)
MR_def_extern_entry(fn__hlds__hlds_args__proc_arg_vector_to_list_1_0)
MR_def_extern_entry(fn__hlds__hlds_args__proc_arg_vector_to_set_1_0)
MR_def_extern_entry(hlds__hlds_args__apply_renaming_to_proc_arg_vector_3_0)
MR_def_extern_entry(hlds__hlds_args__proc_arg_vector_partition_poly_args_3_0)
MR_def_extern_entry(hlds__hlds_args__proc_arg_vector_member_2_0)
MR_def_extern_entry(hlds__hlds_args__proc_arg_vector_to_func_args_3_0)
MR_def_extern_entry(fn__hlds__hlds_args__proc_arg_vector_map_2_0)
MR_def_extern_entry(hlds__hlds_args__proc_arg_vector_map_3_0)
MR_def_extern_entry(hlds__hlds_args__proc_arg_vector_map_corresponding_4_0)
MR_def_extern_entry(hlds__hlds_args__proc_arg_vector_all_true_2_0)
MR_def_extern_entry(hlds__hlds_args__proc_arg_vector_map_corresponding_foldl2_8_0)
MR_def_extern_entry(hlds__hlds_args__proc_arg_vector_foldl3_corresponding_9_0)
MR_def_extern_entry(hlds__hlds_args__proc_arg_vector_foldl2_corresponding3_8_0)
MR_def_extern_entry(hlds__hlds_args__proc_arg_vector_foldl3_corresponding3_10_0)
MR_def_extern_entry(hlds__hlds_args__proc_arg_vector_foldl4_corresponding3_12_0)
MR_def_extern_entry(fn__hlds__hlds_args__poly_arg_vector_init_0_0)
MR_def_extern_entry(hlds__hlds_args__poly_arg_vector_set_instance_type_infos_3_0)
MR_def_extern_entry(hlds__hlds_args__poly_arg_vector_set_instance_typeclass_infos_3_0)
MR_def_extern_entry(hlds__hlds_args__poly_arg_vector_set_univ_type_infos_3_0)
MR_def_extern_entry(hlds__hlds_args__poly_arg_vector_set_exist_type_infos_3_0)
MR_def_extern_entry(hlds__hlds_args__poly_arg_vector_set_univ_typeclass_infos_3_0)
MR_def_extern_entry(hlds__hlds_args__poly_arg_vector_set_exist_typeclass_infos_3_0)
MR_def_extern_entry(fn__hlds__hlds_args__poly_arg_vector_to_list_1_0)
MR_def_extern_entry(__Unify___hlds__hlds_args__poly_arg_vector_1_0)
MR_def_extern_entry(__Compare___hlds__hlds_args__poly_arg_vector_1_0)
MR_def_extern_entry(__Unify___hlds__hlds_args__proc_arg_vector_1_0)
MR_def_extern_entry(__Compare___hlds__hlds_args__proc_arg_vector_1_0)

static const struct mercury_type_0 mercury_common_0[1] =
{
{
{
MR_tbmkword(0, 0),
MR_tbmkword(0, 0)
}
},
};

static const struct mercury_type_1 mercury_common_1[1] =
{
{
{
MR_tbmkword(0, 0),
MR_tbmkword(0, 0),
MR_tbmkword(0, 0),
MR_tbmkword(0, 0),
MR_tbmkword(0, 0),
MR_tbmkword(0, 0),
MR_tbmkword(0, 0),
MR_tbmkword(0, 0)
}
},
};

static const MR_FA_PseudoTypeInfo_Struct1 mercury_data_hlds__hlds_args__pti_proc_arg_vector_1__pseudo_1 = {
	&mercury_data_hlds__hlds_args__type_ctor_info_proc_arg_vector_1,
{	(MR_PseudoTypeInfo) 1
}};

const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_args__type_ctor_info_poly_arg_vector_1 = {
	1,
	15,
	-1,
	MR_TYPECTOR_REP_EQUIV,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___hlds__hlds_args__poly_arg_vector_1_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___hlds__hlds_args__poly_arg_vector_1_0)),
	"hlds.hlds_args",
	"poly_arg_vector",
	{ 0 },
	{ (void *)&mercury_data_hlds__hlds_args__pti_proc_arg_vector_1__pseudo_1 },
	-1,
	0,
	NULL
};
extern const MR_TypeCtorInfo_Struct mercury_data_list__type_ctor_info_list_1;

static const MR_FA_PseudoTypeInfo_Struct1 mercury_data_list__pti_list_1__pseudo_1 = {
	&mercury_data_list__type_ctor_info_list_1,
{	(MR_PseudoTypeInfo) 1
}};
extern const MR_TypeCtorInfo_Struct mercury_data_maybe__type_ctor_info_maybe_1;

static const MR_FA_PseudoTypeInfo_Struct1 mercury_data_maybe__pti_maybe_1__pseudo_1 = {
	&mercury_data_maybe__type_ctor_info_maybe_1,
{	(MR_PseudoTypeInfo) 1
}};

const MR_PseudoTypeInfo mercury_data_hlds__hlds_args__field_types_proc_arg_vector_1_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_list__pti_list_1__pseudo_1,
	(MR_PseudoTypeInfo) &mercury_data_list__pti_list_1__pseudo_1,
	(MR_PseudoTypeInfo) &mercury_data_list__pti_list_1__pseudo_1,
	(MR_PseudoTypeInfo) &mercury_data_list__pti_list_1__pseudo_1,
	(MR_PseudoTypeInfo) &mercury_data_list__pti_list_1__pseudo_1,
	(MR_PseudoTypeInfo) &mercury_data_list__pti_list_1__pseudo_1,
	(MR_PseudoTypeInfo) &mercury_data_list__pti_list_1__pseudo_1,
	(MR_PseudoTypeInfo) &mercury_data_maybe__pti_maybe_1__pseudo_1
};

const MR_ConstString mercury_data_hlds__hlds_args__field_names_proc_arg_vector_1_0[] = {
	"pav_instance_type_infos",
	"pav_instance_typeclass_infos",
	"pav_univ_type_infos",
	"pav_exist_type_infos",
	"pav_univ_typeclass_infos",
	"pav_exist_typeclass_infos",
	"pav_user_args",
	"pav_maybe_ret_value"
};

static const MR_DuFunctorDesc mercury_data_hlds__hlds_args__du_functor_desc_proc_arg_vector_1_0 = {
	"proc_arg_vector",
	8,
	255,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_hlds__hlds_args__field_types_proc_arg_vector_1_0,
	mercury_data_hlds__hlds_args__field_names_proc_arg_vector_1_0,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_hlds__hlds_args__du_stag_ordered_proc_arg_vector_1_0[] = {
	&mercury_data_hlds__hlds_args__du_functor_desc_proc_arg_vector_1_0

};

const MR_DuPtagLayout mercury_data_hlds__hlds_args__du_ptag_ordered_proc_arg_vector_1[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_hlds__hlds_args__du_stag_ordered_proc_arg_vector_1_0 }

};

const MR_DuFunctorDescPtr mercury_data_hlds__hlds_args__du_name_ordered_proc_arg_vector_1[] = {
	&mercury_data_hlds__hlds_args__du_functor_desc_proc_arg_vector_1_0
};

const MR_Integer mercury_data_hlds__hlds_args__functor_number_map_proc_arg_vector_1[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_args__type_ctor_info_proc_arg_vector_1 = {
	1,
	15,
	1,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___hlds__hlds_args__proc_arg_vector_1_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___hlds__hlds_args__proc_arg_vector_1_0)),
	"hlds.hlds_args",
	"proc_arg_vector",
	{ (void *)mercury_data_hlds__hlds_args__du_name_ordered_proc_arg_vector_1 },
	{ (void *)mercury_data_hlds__hlds_args__du_ptag_ordered_proc_arg_vector_1 },
	1,
	4,
	mercury_data_hlds__hlds_args__functor_number_map_proc_arg_vector_1
};



MR_decl_entry(list__det_split_last_3_0);

MR_BEGIN_MODULE(hlds__hlds_args_module0)
	MR_init_entry1(fn__hlds__hlds_args__proc_arg_vector_init_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__hlds__hlds_args__proc_arg_vector_init_2_0);
	MR_init_label2(fn__hlds__hlds_args__proc_arg_vector_init_2_0,4,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'proc_arg_vector_init'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__hlds__hlds_args__proc_arg_vector_init_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r2,1)) {
		MR_GOTO_LAB(fn__hlds__hlds_args__proc_arg_vector_init_2_0_i3);
	}
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_r2 = MR_r3;
	MR_np_call_localret_ent(list__det_split_last_3_0,
		fn__hlds__hlds_args__proc_arg_vector_init_2_0_i4);
MR_def_label(fn__hlds__hlds_args__proc_arg_vector_init_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_r2;
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 8);
	MR_tfield(0, MR_r2, 0) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_r2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_r2, 2) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_r2, 3) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_r2, 4) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_r2, 5) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_r2, 6) = MR_r1;
	MR_tfield(0, MR_r2, 7) = MR_tempr1;
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(1);
	}
MR_def_label(fn__hlds__hlds_args__proc_arg_vector_init_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 8);
	MR_tfield(0, MR_r1, 0) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_r1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_r1, 2) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_r1, 3) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_r1, 4) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_r1, 5) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_r1, 6) = MR_r3;
	MR_tfield(0, MR_r1, 7) = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__hlds_args_module1)
	MR_init_entry1(fn__hlds__hlds_args__proc_arg_vector_get_instance_type_infos_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__hlds__hlds_args__proc_arg_vector_get_instance_type_infos_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'proc_arg_vector_get_instance_type_infos'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__hlds__hlds_args__proc_arg_vector_get_instance_type_infos_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(0, MR_r2, 0);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__hlds_args_module2)
	MR_init_entry1(fn__hlds__hlds_args__proc_arg_vector_get_instance_typeclass_infos_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__hlds__hlds_args__proc_arg_vector_get_instance_typeclass_infos_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'proc_arg_vector_get_instance_typeclass_infos'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__hlds__hlds_args__proc_arg_vector_get_instance_typeclass_infos_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(0, MR_r2, 1);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__hlds_args_module3)
	MR_init_entry1(fn__hlds__hlds_args__proc_arg_vector_get_univ_type_infos_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__hlds__hlds_args__proc_arg_vector_get_univ_type_infos_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'proc_arg_vector_get_univ_type_infos'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__hlds__hlds_args__proc_arg_vector_get_univ_type_infos_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(0, MR_r2, 2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__hlds_args_module4)
	MR_init_entry1(fn__hlds__hlds_args__proc_arg_vector_get_exist_type_infos_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__hlds__hlds_args__proc_arg_vector_get_exist_type_infos_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'proc_arg_vector_get_exist_type_infos'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__hlds__hlds_args__proc_arg_vector_get_exist_type_infos_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(0, MR_r2, 3);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__hlds_args_module5)
	MR_init_entry1(fn__hlds__hlds_args__proc_arg_vector_get_univ_typeclass_infos_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__hlds__hlds_args__proc_arg_vector_get_univ_typeclass_infos_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'proc_arg_vector_get_univ_typeclass_infos'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__hlds__hlds_args__proc_arg_vector_get_univ_typeclass_infos_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(0, MR_r2, 4);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__hlds_args_module6)
	MR_init_entry1(fn__hlds__hlds_args__proc_arg_vector_get_exist_typeclass_infos_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__hlds__hlds_args__proc_arg_vector_get_exist_typeclass_infos_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'proc_arg_vector_get_exist_typeclass_infos'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__hlds__hlds_args__proc_arg_vector_get_exist_typeclass_infos_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(0, MR_r2, 5);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__hlds_args_module7)
	MR_init_entry1(fn__hlds__hlds_args__proc_arg_vector_get_user_args_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__hlds__hlds_args__proc_arg_vector_get_user_args_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'proc_arg_vector_get_user_args'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__hlds__hlds_args__proc_arg_vector_get_user_args_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(0, MR_r2, 6);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__hlds_args_module8)
	MR_init_entry1(fn__hlds__hlds_args__proc_arg_vector_get_maybe_ret_value_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__hlds__hlds_args__proc_arg_vector_get_maybe_ret_value_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'proc_arg_vector_get_maybe_ret_value'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__hlds__hlds_args__proc_arg_vector_get_maybe_ret_value_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(0, MR_r2, 7);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__hlds_args_module9)
	MR_init_entry1(hlds__hlds_args__proc_arg_vector_set_instance_type_infos_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__hlds_args__proc_arg_vector_set_instance_type_infos_3_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'proc_arg_vector_set_instance_type_infos'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__hlds__hlds_args__proc_arg_vector_set_instance_type_infos_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 8);
	MR_tfield(0, MR_r1, 0) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_tfield(0, MR_r1, 1) = MR_tfield(0, MR_tempr1, 1);
	MR_tfield(0, MR_r1, 2) = MR_tfield(0, MR_tempr1, 2);
	MR_tfield(0, MR_r1, 3) = MR_tfield(0, MR_tempr1, 3);
	MR_tfield(0, MR_r1, 4) = MR_tfield(0, MR_tempr1, 4);
	MR_tfield(0, MR_r1, 5) = MR_tfield(0, MR_tempr1, 5);
	MR_tfield(0, MR_r1, 6) = MR_tfield(0, MR_tempr1, 6);
	MR_tfield(0, MR_r1, 7) = MR_tfield(0, MR_tempr1, 7);
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__hlds_args_module10)
	MR_init_entry1(hlds__hlds_args__proc_arg_vector_set_instance_typeclass_infos_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__hlds_args__proc_arg_vector_set_instance_typeclass_infos_3_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'proc_arg_vector_set_instance_typeclass_infos'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__hlds__hlds_args__proc_arg_vector_set_instance_typeclass_infos_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 8);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_tfield(0, MR_r1, 0) = MR_tfield(0, MR_tempr1, 0);
	MR_tfield(0, MR_r1, 1) = MR_r2;
	MR_tfield(0, MR_r1, 2) = MR_tfield(0, MR_tempr1, 2);
	MR_tfield(0, MR_r1, 3) = MR_tfield(0, MR_tempr1, 3);
	MR_tfield(0, MR_r1, 4) = MR_tfield(0, MR_tempr1, 4);
	MR_tfield(0, MR_r1, 5) = MR_tfield(0, MR_tempr1, 5);
	MR_tfield(0, MR_r1, 6) = MR_tfield(0, MR_tempr1, 6);
	MR_tfield(0, MR_r1, 7) = MR_tfield(0, MR_tempr1, 7);
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__hlds_args_module11)
	MR_init_entry1(hlds__hlds_args__proc_arg_vector_set_univ_type_infos_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__hlds_args__proc_arg_vector_set_univ_type_infos_3_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'proc_arg_vector_set_univ_type_infos'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__hlds__hlds_args__proc_arg_vector_set_univ_type_infos_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 8);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_tfield(0, MR_r1, 0) = MR_tfield(0, MR_tempr1, 0);
	MR_tfield(0, MR_r1, 1) = MR_tfield(0, MR_tempr1, 1);
	MR_tfield(0, MR_r1, 2) = MR_r2;
	MR_tfield(0, MR_r1, 3) = MR_tfield(0, MR_tempr1, 3);
	MR_tfield(0, MR_r1, 4) = MR_tfield(0, MR_tempr1, 4);
	MR_tfield(0, MR_r1, 5) = MR_tfield(0, MR_tempr1, 5);
	MR_tfield(0, MR_r1, 6) = MR_tfield(0, MR_tempr1, 6);
	MR_tfield(0, MR_r1, 7) = MR_tfield(0, MR_tempr1, 7);
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__hlds_args_module12)
	MR_init_entry1(hlds__hlds_args__proc_arg_vector_set_exist_type_infos_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__hlds_args__proc_arg_vector_set_exist_type_infos_3_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'proc_arg_vector_set_exist_type_infos'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__hlds__hlds_args__proc_arg_vector_set_exist_type_infos_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 8);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_tfield(0, MR_r1, 0) = MR_tfield(0, MR_tempr1, 0);
	MR_tfield(0, MR_r1, 1) = MR_tfield(0, MR_tempr1, 1);
	MR_tfield(0, MR_r1, 2) = MR_tfield(0, MR_tempr1, 2);
	MR_tfield(0, MR_r1, 3) = MR_r2;
	MR_tfield(0, MR_r1, 4) = MR_tfield(0, MR_tempr1, 4);
	MR_tfield(0, MR_r1, 5) = MR_tfield(0, MR_tempr1, 5);
	MR_tfield(0, MR_r1, 6) = MR_tfield(0, MR_tempr1, 6);
	MR_tfield(0, MR_r1, 7) = MR_tfield(0, MR_tempr1, 7);
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__hlds_args_module13)
	MR_init_entry1(hlds__hlds_args__proc_arg_vector_set_univ_typeclass_infos_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__hlds_args__proc_arg_vector_set_univ_typeclass_infos_3_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'proc_arg_vector_set_univ_typeclass_infos'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__hlds__hlds_args__proc_arg_vector_set_univ_typeclass_infos_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 8);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_tfield(0, MR_r1, 0) = MR_tfield(0, MR_tempr1, 0);
	MR_tfield(0, MR_r1, 1) = MR_tfield(0, MR_tempr1, 1);
	MR_tfield(0, MR_r1, 2) = MR_tfield(0, MR_tempr1, 2);
	MR_tfield(0, MR_r1, 3) = MR_tfield(0, MR_tempr1, 3);
	MR_tfield(0, MR_r1, 4) = MR_r2;
	MR_tfield(0, MR_r1, 5) = MR_tfield(0, MR_tempr1, 5);
	MR_tfield(0, MR_r1, 6) = MR_tfield(0, MR_tempr1, 6);
	MR_tfield(0, MR_r1, 7) = MR_tfield(0, MR_tempr1, 7);
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__hlds_args_module14)
	MR_init_entry1(hlds__hlds_args__proc_arg_vector_set_exist_typeclass_infos_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__hlds_args__proc_arg_vector_set_exist_typeclass_infos_3_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'proc_arg_vector_set_exist_typeclass_infos'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__hlds__hlds_args__proc_arg_vector_set_exist_typeclass_infos_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 8);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_tfield(0, MR_r1, 0) = MR_tfield(0, MR_tempr1, 0);
	MR_tfield(0, MR_r1, 1) = MR_tfield(0, MR_tempr1, 1);
	MR_tfield(0, MR_r1, 2) = MR_tfield(0, MR_tempr1, 2);
	MR_tfield(0, MR_r1, 3) = MR_tfield(0, MR_tempr1, 3);
	MR_tfield(0, MR_r1, 4) = MR_tfield(0, MR_tempr1, 4);
	MR_tfield(0, MR_r1, 5) = MR_r2;
	MR_tfield(0, MR_r1, 6) = MR_tfield(0, MR_tempr1, 6);
	MR_tfield(0, MR_r1, 7) = MR_tfield(0, MR_tempr1, 7);
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__hlds_args_module15)
	MR_init_entry1(hlds__hlds_args__proc_arg_vector_set_user_args_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__hlds_args__proc_arg_vector_set_user_args_3_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'proc_arg_vector_set_user_args'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__hlds__hlds_args__proc_arg_vector_set_user_args_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 8);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_tfield(0, MR_r1, 0) = MR_tfield(0, MR_tempr1, 0);
	MR_tfield(0, MR_r1, 1) = MR_tfield(0, MR_tempr1, 1);
	MR_tfield(0, MR_r1, 2) = MR_tfield(0, MR_tempr1, 2);
	MR_tfield(0, MR_r1, 3) = MR_tfield(0, MR_tempr1, 3);
	MR_tfield(0, MR_r1, 4) = MR_tfield(0, MR_tempr1, 4);
	MR_tfield(0, MR_r1, 5) = MR_tfield(0, MR_tempr1, 5);
	MR_tfield(0, MR_r1, 6) = MR_r2;
	MR_tfield(0, MR_r1, 7) = MR_tfield(0, MR_tempr1, 7);
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__hlds_args_module16)
	MR_init_entry1(hlds__hlds_args__proc_arg_vector_set_maybe_ret_value_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__hlds_args__proc_arg_vector_set_maybe_ret_value_3_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'proc_arg_vector_set_maybe_ret_value'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__hlds__hlds_args__proc_arg_vector_set_maybe_ret_value_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 8);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_tfield(0, MR_r1, 0) = MR_tfield(0, MR_tempr1, 0);
	MR_tfield(0, MR_r1, 1) = MR_tfield(0, MR_tempr1, 1);
	MR_tfield(0, MR_r1, 2) = MR_tfield(0, MR_tempr1, 2);
	MR_tfield(0, MR_r1, 3) = MR_tfield(0, MR_tempr1, 3);
	MR_tfield(0, MR_r1, 4) = MR_tfield(0, MR_tempr1, 4);
	MR_tfield(0, MR_r1, 5) = MR_tfield(0, MR_tempr1, 5);
	MR_tfield(0, MR_r1, 6) = MR_tfield(0, MR_tempr1, 6);
	MR_tfield(0, MR_r1, 7) = MR_r2;
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(list__condense_2_0);

MR_BEGIN_MODULE(hlds__hlds_args_module17)
	MR_init_entry1(fn__hlds__hlds_args__proc_arg_vector_to_list_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__hlds__hlds_args__proc_arg_vector_to_list_1_0);
	MR_init_label1(fn__hlds__hlds_args__proc_arg_vector_to_list_1_0,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'proc_arg_vector_to_list'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__hlds__hlds_args__proc_arg_vector_to_list_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_tfield(0, MR_r2, 7);
	if (MR_LTAGS_TESTR(MR_r3,0,0)) {
		MR_GOTO_LAB(fn__hlds__hlds_args__proc_arg_vector_to_list_1_0_i3);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_tfield(0, MR_r2, 6);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_TAG_COMMON(1,0,0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tfield(0, MR_r2, 5);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_tfield(0, MR_r2, 4);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tfield(0, MR_r2, 3);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_tfield(0, MR_r2, 2);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tfield(0, MR_r2, 1);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_tfield(0, MR_r2, 0);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr2;
	MR_r2 = MR_tempr1;
	MR_np_tailcall_ent(list__condense_2_0);
	}
MR_def_label(fn__hlds__hlds_args__proc_arg_vector_to_list_1_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_tfield(1, MR_r3, 0);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_tfield(0, MR_r2, 6);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tfield(0, MR_r2, 5);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_tfield(0, MR_r2, 4);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tfield(0, MR_r2, 3);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_tfield(0, MR_r2, 2);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tfield(0, MR_r2, 1);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_tfield(0, MR_r2, 0);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr2;
	MR_r2 = MR_tempr1;
	MR_np_tailcall_ent(list__condense_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__set__from_list_1_0);

MR_BEGIN_MODULE(hlds__hlds_args_module18)
	MR_init_entry1(fn__hlds__hlds_args__proc_arg_vector_to_set_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__hlds__hlds_args__proc_arg_vector_to_set_1_0);
	MR_init_label1(fn__hlds__hlds_args__proc_arg_vector_to_set_1_0,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'proc_arg_vector_to_set'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__hlds__hlds_args__proc_arg_vector_to_set_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(fn__hlds__hlds_args__proc_arg_vector_to_list_1_0,
		fn__hlds__hlds_args__proc_arg_vector_to_set_1_0_i2);
MR_def_label(fn__hlds__hlds_args__proc_arg_vector_to_set_1_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(fn__set__from_list_1_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(parse_tree__prog_type__apply_partial_map_to_list_3_0);
MR_decl_entry(map__search_3_0);

MR_BEGIN_MODULE(hlds__hlds_args_module19)
	MR_init_entry1(hlds__hlds_args__apply_renaming_to_proc_arg_vector_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__hlds_args__apply_renaming_to_proc_arg_vector_3_0);
	MR_init_label10(hlds__hlds_args__apply_renaming_to_proc_arg_vector_3_0,2,3,4,5,6,7,8,10,14,12)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'apply_renaming_to_proc_arg_vector'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__hlds__hlds_args__apply_renaming_to_proc_arg_vector_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(10);
	MR_sv(10) = (MR_Word) MR_succip;
	MR_sv(8) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(2) = MR_tfield(0, MR_tempr1, 1);
	MR_sv(3) = MR_tfield(0, MR_tempr1, 2);
	MR_sv(4) = MR_tfield(0, MR_tempr1, 3);
	MR_sv(5) = MR_tfield(0, MR_tempr1, 4);
	MR_sv(6) = MR_tfield(0, MR_tempr1, 5);
	MR_sv(7) = MR_tfield(0, MR_tempr1, 6);
	MR_sv(1) = MR_tfield(0, MR_tempr1, 7);
	MR_sv(9) = MR_r1;
	MR_r3 = MR_tfield(0, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(parse_tree__prog_type__apply_partial_map_to_list_3_0,
		hlds__hlds_args__apply_renaming_to_proc_arg_vector_3_0_i2);
MR_def_label(hlds__hlds_args__apply_renaming_to_proc_arg_vector_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(8);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(parse_tree__prog_type__apply_partial_map_to_list_3_0,
		hlds__hlds_args__apply_renaming_to_proc_arg_vector_3_0_i3);
MR_def_label(hlds__hlds_args__apply_renaming_to_proc_arg_vector_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(8);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(parse_tree__prog_type__apply_partial_map_to_list_3_0,
		hlds__hlds_args__apply_renaming_to_proc_arg_vector_3_0_i4);
MR_def_label(hlds__hlds_args__apply_renaming_to_proc_arg_vector_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(8);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(parse_tree__prog_type__apply_partial_map_to_list_3_0,
		hlds__hlds_args__apply_renaming_to_proc_arg_vector_3_0_i5);
MR_def_label(hlds__hlds_args__apply_renaming_to_proc_arg_vector_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(5);
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(8);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(parse_tree__prog_type__apply_partial_map_to_list_3_0,
		hlds__hlds_args__apply_renaming_to_proc_arg_vector_3_0_i6);
MR_def_label(hlds__hlds_args__apply_renaming_to_proc_arg_vector_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(6);
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(8);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(parse_tree__prog_type__apply_partial_map_to_list_3_0,
		hlds__hlds_args__apply_renaming_to_proc_arg_vector_3_0_i7);
MR_def_label(hlds__hlds_args__apply_renaming_to_proc_arg_vector_3_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(7);
	MR_sv(7) = MR_r1;
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(8);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(parse_tree__prog_type__apply_partial_map_to_list_3_0,
		hlds__hlds_args__apply_renaming_to_proc_arg_vector_3_0_i8);
MR_def_label(hlds__hlds_args__apply_renaming_to_proc_arg_vector_3_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,0)) {
		MR_GOTO_LAB(hlds__hlds_args__apply_renaming_to_proc_arg_vector_3_0_i10);
	}
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 8);
	MR_tfield(0, MR_r2, 0) = MR_sv(2);
	MR_tfield(0, MR_r2, 1) = MR_sv(3);
	MR_tfield(0, MR_r2, 2) = MR_sv(4);
	MR_tfield(0, MR_r2, 3) = MR_sv(5);
	MR_tfield(0, MR_r2, 4) = MR_sv(6);
	MR_tfield(0, MR_r2, 5) = MR_sv(7);
	MR_tfield(0, MR_r2, 6) = MR_r1;
	MR_tfield(0, MR_r2, 7) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(10);
MR_def_label(hlds__hlds_args__apply_renaming_to_proc_arg_vector_3_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(8);
	MR_sv(8) = MR_r1;
	MR_r1 = MR_sv(9);
	MR_r2 = MR_r1;
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tfield(1, MR_sv(1), 0);
	}
	MR_np_call_localret_ent(map__search_3_0,
		hlds__hlds_args__apply_renaming_to_proc_arg_vector_3_0_i14);
MR_def_label(hlds__hlds_args__apply_renaming_to_proc_arg_vector_3_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(hlds__hlds_args__apply_renaming_to_proc_arg_vector_3_0_i12);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_r2;
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 8);
	MR_tfield(0, MR_r1, 0) = MR_sv(2);
	MR_tfield(0, MR_r1, 1) = MR_sv(3);
	MR_tfield(0, MR_r1, 2) = MR_sv(4);
	MR_tfield(0, MR_r1, 3) = MR_sv(5);
	MR_tfield(0, MR_r1, 4) = MR_sv(6);
	MR_tfield(0, MR_r1, 5) = MR_sv(7);
	MR_tfield(0, MR_r1, 6) = MR_sv(8);
	MR_tfield(0, MR_r1, 7) = MR_tempr1;
	MR_decr_sp_and_return(10);
	}
MR_def_label(hlds__hlds_args__apply_renaming_to_proc_arg_vector_3_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(8);
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 8);
	MR_tfield(0, MR_r2, 0) = MR_sv(2);
	MR_tfield(0, MR_r2, 1) = MR_sv(3);
	MR_tfield(0, MR_r2, 2) = MR_sv(4);
	MR_tfield(0, MR_r2, 3) = MR_sv(5);
	MR_tfield(0, MR_r2, 4) = MR_sv(6);
	MR_tfield(0, MR_r2, 5) = MR_sv(7);
	MR_tfield(0, MR_r2, 6) = MR_r1;
	MR_tfield(0, MR_r2, 7) = MR_sv(1);
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(10);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__f_108_105_115_116_95_95_43_43_2_0);

MR_BEGIN_MODULE(hlds__hlds_args_module20)
	MR_init_entry1(hlds__hlds_args__proc_arg_vector_partition_poly_args_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__hlds_args__proc_arg_vector_partition_poly_args_3_0);
	MR_init_label3(hlds__hlds_args__proc_arg_vector_partition_poly_args_3_0,8,10,12)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'proc_arg_vector_partition_poly_args'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__hlds__hlds_args__proc_arg_vector_partition_poly_args_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_tfield(0, MR_r2, 5);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tfield(0, MR_r2, 4);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_tfield(0, MR_r2, 3);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tfield(0, MR_r2, 2);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_tfield(0, MR_r2, 1);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tfield(0, MR_r2, 0);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_sv(1) = MR_tfield(0, MR_r2, 6);
	MR_sv(2) = MR_tfield(0, MR_r2, 7);
	MR_sv(3) = MR_r1;
	MR_r2 = MR_tempr2;
	}
	MR_np_call_localret_ent(list__condense_2_0,
		hlds__hlds_args__proc_arg_vector_partition_poly_args_3_0_i8);
MR_def_label(hlds__hlds_args__proc_arg_vector_partition_poly_args_3_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,0)) {
		MR_GOTO_LAB(hlds__hlds_args__proc_arg_vector_partition_poly_args_3_0_i10);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r2 = MR_tempr1;
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_sv(3);
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		hlds__hlds_args__proc_arg_vector_partition_poly_args_3_0_i12);
MR_def_label(hlds__hlds_args__proc_arg_vector_partition_poly_args_3_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_tfield(1, MR_sv(2), 0);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tempr2 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r2 = MR_tempr2;
	MR_r1 = MR_sv(3);
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		hlds__hlds_args__proc_arg_vector_partition_poly_args_3_0_i12);
MR_def_label(hlds__hlds_args__proc_arg_vector_partition_poly_args_3_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_decr_sp_and_return(4);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(list__member_2_0);

MR_BEGIN_MODULE(hlds__hlds_args_module21)
	MR_init_entry1(hlds__hlds_args__proc_arg_vector_member_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__hlds_args__proc_arg_vector_member_2_0);
	MR_init_label1(hlds__hlds_args__proc_arg_vector_member_2_0,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'proc_arg_vector_member'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__hlds__hlds_args__proc_arg_vector_member_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r1;
	MR_np_call_localret_ent(fn__hlds__hlds_args__proc_arg_vector_to_list_1_0,
		hlds__hlds_args__proc_arg_vector_member_2_0_i2);
MR_def_label(hlds__hlds_args__proc_arg_vector_member_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tempr1;
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(list__member_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__list__condense_1_0);
MR_decl_entry(require__unexpected_3_0);

MR_BEGIN_MODULE(hlds__hlds_args_module22)
	MR_init_entry1(hlds__hlds_args__proc_arg_vector_to_func_args_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__hlds_args__proc_arg_vector_to_func_args_3_0);
	MR_init_label2(hlds__hlds_args__proc_arg_vector_to_func_args_3_0,9,11)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'proc_arg_vector_to_func_args'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__hlds__hlds_args__proc_arg_vector_to_func_args_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_tfield(0, MR_r2, 6);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tfield(0, MR_r2, 5);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_tfield(0, MR_r2, 4);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tfield(0, MR_r2, 3);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_tfield(0, MR_r2, 2);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tfield(0, MR_r2, 1);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_tfield(0, MR_r2, 0);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr2;
	MR_sv(1) = MR_tfield(0, MR_r2, 7);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__list__condense_1_0,
		hlds__hlds_args__proc_arg_vector_to_func_args_3_0_i9);
MR_def_label(hlds__hlds_args__proc_arg_vector_to_func_args_3_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_sv(1),0,0)) {
		MR_GOTO_LAB(hlds__hlds_args__proc_arg_vector_to_func_args_3_0_i11);
	}
	MR_r2 = MR_tfield(1, MR_sv(1), 0);
	MR_decr_sp_and_return(2);
MR_def_label(hlds__hlds_args__proc_arg_vector_to_func_args_3_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("hlds.hlds_args", 14);
	MR_r2 = (MR_Word) MR_string_const("predicate \140hlds.hlds_args.proc_arg_vector_to_func_args\'/3", 57);
	MR_r3 = (MR_Word) MR_string_const("predicate", 9);
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(require__unexpected_3_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__list__map_2_0);
MR_declare_entry(mercury__do_call_closure_1);

MR_BEGIN_MODULE(hlds__hlds_args_module23)
	MR_init_entry1(fn__hlds__hlds_args__proc_arg_vector_map_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__hlds__hlds_args__proc_arg_vector_map_2_0);
	MR_init_label9(fn__hlds__hlds_args__proc_arg_vector_map_2_0,2,3,4,5,6,7,8,10,12)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'proc_arg_vector_map'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__hlds__hlds_args__proc_arg_vector_map_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(11);
	MR_sv(11) = (MR_Word) MR_succip;
	MR_sv(8) = MR_r3;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_sv(2) = MR_tfield(0, MR_tempr1, 1);
	MR_sv(3) = MR_tfield(0, MR_tempr1, 2);
	MR_sv(4) = MR_tfield(0, MR_tempr1, 3);
	MR_sv(5) = MR_tfield(0, MR_tempr1, 4);
	MR_sv(6) = MR_tfield(0, MR_tempr1, 5);
	MR_sv(7) = MR_tfield(0, MR_tempr1, 6);
	MR_sv(1) = MR_tfield(0, MR_tempr1, 7);
	MR_sv(9) = MR_r1;
	MR_sv(10) = MR_r2;
	MR_r4 = MR_tfield(0, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(fn__list__map_2_0,
		fn__hlds__hlds_args__proc_arg_vector_map_2_0_i2);
MR_def_label(fn__hlds__hlds_args__proc_arg_vector_map_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(10);
	MR_r3 = MR_sv(8);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__list__map_2_0,
		fn__hlds__hlds_args__proc_arg_vector_map_2_0_i3);
MR_def_label(fn__hlds__hlds_args__proc_arg_vector_map_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(10);
	MR_r3 = MR_sv(8);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__list__map_2_0,
		fn__hlds__hlds_args__proc_arg_vector_map_2_0_i4);
MR_def_label(fn__hlds__hlds_args__proc_arg_vector_map_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(10);
	MR_r3 = MR_sv(8);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__list__map_2_0,
		fn__hlds__hlds_args__proc_arg_vector_map_2_0_i5);
MR_def_label(fn__hlds__hlds_args__proc_arg_vector_map_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(5);
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(10);
	MR_r3 = MR_sv(8);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__list__map_2_0,
		fn__hlds__hlds_args__proc_arg_vector_map_2_0_i6);
MR_def_label(fn__hlds__hlds_args__proc_arg_vector_map_2_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(6);
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(10);
	MR_r3 = MR_sv(8);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__list__map_2_0,
		fn__hlds__hlds_args__proc_arg_vector_map_2_0_i7);
MR_def_label(fn__hlds__hlds_args__proc_arg_vector_map_2_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(7);
	MR_sv(7) = MR_r1;
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(10);
	MR_r3 = MR_sv(8);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__list__map_2_0,
		fn__hlds__hlds_args__proc_arg_vector_map_2_0_i8);
MR_def_label(fn__hlds__hlds_args__proc_arg_vector_map_2_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,0)) {
		MR_GOTO_LAB(fn__hlds__hlds_args__proc_arg_vector_map_2_0_i10);
	}
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 8);
	MR_tfield(0, MR_r2, 0) = MR_sv(2);
	MR_tfield(0, MR_r2, 1) = MR_sv(3);
	MR_tfield(0, MR_r2, 2) = MR_sv(4);
	MR_tfield(0, MR_r2, 3) = MR_sv(5);
	MR_tfield(0, MR_r2, 4) = MR_sv(6);
	MR_tfield(0, MR_r2, 5) = MR_sv(7);
	MR_tfield(0, MR_r2, 6) = MR_r1;
	MR_tfield(0, MR_r2, 7) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(11);
MR_def_label(fn__hlds__hlds_args__proc_arg_vector_map_2_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(8);
	MR_sv(8) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_tfield(1, MR_sv(1), 0);
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(fn__hlds__hlds_args__proc_arg_vector_map_2_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_1),
		mercury__fn__hlds__hlds_args__proc_arg_vector_map_2_0_i12);
MR_def_label(fn__hlds__hlds_args__proc_arg_vector_map_2_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r2, 0) = MR_r1;
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 8);
	MR_tfield(0, MR_r1, 0) = MR_sv(2);
	MR_tfield(0, MR_r1, 1) = MR_sv(3);
	MR_tfield(0, MR_r1, 2) = MR_sv(4);
	MR_tfield(0, MR_r1, 3) = MR_sv(5);
	MR_tfield(0, MR_r1, 4) = MR_sv(6);
	MR_tfield(0, MR_r1, 5) = MR_sv(7);
	MR_tfield(0, MR_r1, 6) = MR_sv(8);
	MR_tfield(0, MR_r1, 7) = MR_r2;
	MR_decr_sp_and_return(11);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(list__map_3_0);

MR_BEGIN_MODULE(hlds__hlds_args_module24)
	MR_init_entry1(hlds__hlds_args__proc_arg_vector_map_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__hlds_args__proc_arg_vector_map_3_0);
	MR_init_label9(hlds__hlds_args__proc_arg_vector_map_3_0,2,3,4,5,6,7,8,10,12)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'proc_arg_vector_map'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__hlds__hlds_args__proc_arg_vector_map_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(11);
	MR_sv(11) = (MR_Word) MR_succip;
	MR_sv(8) = MR_r3;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_sv(2) = MR_tfield(0, MR_tempr1, 1);
	MR_sv(3) = MR_tfield(0, MR_tempr1, 2);
	MR_sv(4) = MR_tfield(0, MR_tempr1, 3);
	MR_sv(5) = MR_tfield(0, MR_tempr1, 4);
	MR_sv(6) = MR_tfield(0, MR_tempr1, 5);
	MR_sv(7) = MR_tfield(0, MR_tempr1, 6);
	MR_sv(1) = MR_tfield(0, MR_tempr1, 7);
	MR_sv(9) = MR_r1;
	MR_sv(10) = MR_r2;
	MR_r4 = MR_tfield(0, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(list__map_3_0,
		hlds__hlds_args__proc_arg_vector_map_3_0_i2);
MR_def_label(hlds__hlds_args__proc_arg_vector_map_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(10);
	MR_r3 = MR_sv(8);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__map_3_0,
		hlds__hlds_args__proc_arg_vector_map_3_0_i3);
MR_def_label(hlds__hlds_args__proc_arg_vector_map_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(10);
	MR_r3 = MR_sv(8);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__map_3_0,
		hlds__hlds_args__proc_arg_vector_map_3_0_i4);
MR_def_label(hlds__hlds_args__proc_arg_vector_map_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(10);
	MR_r3 = MR_sv(8);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__map_3_0,
		hlds__hlds_args__proc_arg_vector_map_3_0_i5);
MR_def_label(hlds__hlds_args__proc_arg_vector_map_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(5);
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(10);
	MR_r3 = MR_sv(8);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__map_3_0,
		hlds__hlds_args__proc_arg_vector_map_3_0_i6);
MR_def_label(hlds__hlds_args__proc_arg_vector_map_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(6);
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(10);
	MR_r3 = MR_sv(8);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__map_3_0,
		hlds__hlds_args__proc_arg_vector_map_3_0_i7);
MR_def_label(hlds__hlds_args__proc_arg_vector_map_3_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(7);
	MR_sv(7) = MR_r1;
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(10);
	MR_r3 = MR_sv(8);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__map_3_0,
		hlds__hlds_args__proc_arg_vector_map_3_0_i8);
MR_def_label(hlds__hlds_args__proc_arg_vector_map_3_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,0)) {
		MR_GOTO_LAB(hlds__hlds_args__proc_arg_vector_map_3_0_i10);
	}
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 8);
	MR_tfield(0, MR_r2, 0) = MR_sv(2);
	MR_tfield(0, MR_r2, 1) = MR_sv(3);
	MR_tfield(0, MR_r2, 2) = MR_sv(4);
	MR_tfield(0, MR_r2, 3) = MR_sv(5);
	MR_tfield(0, MR_r2, 4) = MR_sv(6);
	MR_tfield(0, MR_r2, 5) = MR_sv(7);
	MR_tfield(0, MR_r2, 6) = MR_r1;
	MR_tfield(0, MR_r2, 7) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(11);
MR_def_label(hlds__hlds_args__proc_arg_vector_map_3_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(8);
	MR_sv(8) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_tfield(1, MR_sv(1), 0);
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(hlds__hlds_args__proc_arg_vector_map_3_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_1),
		mercury__hlds__hlds_args__proc_arg_vector_map_3_0_i12);
MR_def_label(hlds__hlds_args__proc_arg_vector_map_3_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r2, 0) = MR_r1;
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 8);
	MR_tfield(0, MR_r1, 0) = MR_sv(2);
	MR_tfield(0, MR_r1, 1) = MR_sv(3);
	MR_tfield(0, MR_r1, 2) = MR_sv(4);
	MR_tfield(0, MR_r1, 3) = MR_sv(5);
	MR_tfield(0, MR_r1, 4) = MR_sv(6);
	MR_tfield(0, MR_r1, 5) = MR_sv(7);
	MR_tfield(0, MR_r1, 6) = MR_sv(8);
	MR_tfield(0, MR_r1, 7) = MR_r2;
	MR_decr_sp_and_return(11);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(list__map_corresponding_4_0);
MR_declare_entry(mercury__do_call_closure_2);

MR_BEGIN_MODULE(hlds__hlds_args_module25)
	MR_init_entry1(hlds__hlds_args__proc_arg_vector_map_corresponding_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__hlds_args__proc_arg_vector_map_corresponding_4_0);
	MR_init_label10(hlds__hlds_args__proc_arg_vector_map_corresponding_4_0,2,3,4,5,6,7,8,12,9,15)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'proc_arg_vector_map_corresponding'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__hlds__hlds_args__proc_arg_vector_map_corresponding_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(19);
	MR_sv(19) = (MR_Word) MR_succip;
	MR_sv(15) = MR_r4;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r5;
	MR_sv(9) = MR_tfield(0, MR_tempr1, 1);
	MR_sv(10) = MR_tfield(0, MR_tempr1, 2);
	MR_sv(11) = MR_tfield(0, MR_tempr1, 3);
	MR_sv(12) = MR_tfield(0, MR_tempr1, 4);
	MR_sv(13) = MR_tfield(0, MR_tempr1, 5);
	MR_sv(14) = MR_tfield(0, MR_tempr1, 6);
	MR_sv(1) = MR_tfield(0, MR_tempr1, 7);
	MR_tempr2 = MR_r6;
	MR_sv(2) = MR_tfield(0, MR_tempr2, 1);
	MR_sv(3) = MR_tfield(0, MR_tempr2, 2);
	MR_sv(4) = MR_tfield(0, MR_tempr2, 3);
	MR_sv(5) = MR_tfield(0, MR_tempr2, 4);
	MR_sv(6) = MR_tfield(0, MR_tempr2, 5);
	MR_sv(7) = MR_tfield(0, MR_tempr2, 6);
	MR_sv(8) = MR_tfield(0, MR_tempr2, 7);
	MR_sv(16) = MR_r1;
	MR_sv(17) = MR_r2;
	MR_sv(18) = MR_r3;
	MR_r5 = MR_tfield(0, MR_tempr1, 0);
	MR_r6 = MR_tfield(0, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(list__map_corresponding_4_0,
		hlds__hlds_args__proc_arg_vector_map_corresponding_4_0_i2);
MR_def_label(hlds__hlds_args__proc_arg_vector_map_corresponding_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(9);
	MR_sv(9) = MR_r1;
	MR_r1 = MR_sv(16);
	MR_r2 = MR_sv(17);
	MR_r3 = MR_sv(18);
	MR_r4 = MR_sv(15);
	MR_r5 = MR_tempr1;
	MR_r6 = MR_sv(2);
	}
	MR_np_call_localret_ent(list__map_corresponding_4_0,
		hlds__hlds_args__proc_arg_vector_map_corresponding_4_0_i3);
MR_def_label(hlds__hlds_args__proc_arg_vector_map_corresponding_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(10);
	MR_sv(10) = MR_r1;
	MR_r1 = MR_sv(16);
	MR_r2 = MR_sv(17);
	MR_r3 = MR_sv(18);
	MR_r4 = MR_sv(15);
	MR_r5 = MR_tempr1;
	MR_r6 = MR_sv(3);
	}
	MR_np_call_localret_ent(list__map_corresponding_4_0,
		hlds__hlds_args__proc_arg_vector_map_corresponding_4_0_i4);
MR_def_label(hlds__hlds_args__proc_arg_vector_map_corresponding_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(11);
	MR_sv(11) = MR_r1;
	MR_r1 = MR_sv(16);
	MR_r2 = MR_sv(17);
	MR_r3 = MR_sv(18);
	MR_r4 = MR_sv(15);
	MR_r5 = MR_tempr1;
	MR_r6 = MR_sv(4);
	}
	MR_np_call_localret_ent(list__map_corresponding_4_0,
		hlds__hlds_args__proc_arg_vector_map_corresponding_4_0_i5);
MR_def_label(hlds__hlds_args__proc_arg_vector_map_corresponding_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(12);
	MR_sv(12) = MR_r1;
	MR_r1 = MR_sv(16);
	MR_r2 = MR_sv(17);
	MR_r3 = MR_sv(18);
	MR_r4 = MR_sv(15);
	MR_r5 = MR_tempr1;
	MR_r6 = MR_sv(5);
	}
	MR_np_call_localret_ent(list__map_corresponding_4_0,
		hlds__hlds_args__proc_arg_vector_map_corresponding_4_0_i6);
MR_def_label(hlds__hlds_args__proc_arg_vector_map_corresponding_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(13);
	MR_sv(13) = MR_r1;
	MR_r1 = MR_sv(16);
	MR_r2 = MR_sv(17);
	MR_r3 = MR_sv(18);
	MR_r4 = MR_sv(15);
	MR_r5 = MR_tempr1;
	MR_r6 = MR_sv(6);
	}
	MR_np_call_localret_ent(list__map_corresponding_4_0,
		hlds__hlds_args__proc_arg_vector_map_corresponding_4_0_i7);
MR_def_label(hlds__hlds_args__proc_arg_vector_map_corresponding_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(14);
	MR_sv(14) = MR_r1;
	MR_r1 = MR_sv(16);
	MR_r2 = MR_sv(17);
	MR_r3 = MR_sv(18);
	MR_r4 = MR_sv(15);
	MR_r5 = MR_tempr1;
	MR_r6 = MR_sv(7);
	}
	MR_np_call_localret_ent(list__map_corresponding_4_0,
		hlds__hlds_args__proc_arg_vector_map_corresponding_4_0_i8);
MR_def_label(hlds__hlds_args__proc_arg_vector_map_corresponding_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_sv(1),0,0)) {
		MR_GOTO_LAB(hlds__hlds_args__proc_arg_vector_map_corresponding_4_0_i9);
	}
	if (MR_LTAGS_TEST(MR_sv(8),0,0)) {
		MR_GOTO_LAB(hlds__hlds_args__proc_arg_vector_map_corresponding_4_0_i9);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(15);
	MR_sv(15) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_tfield(1, MR_sv(1), 0);
	MR_r3 = MR_tfield(1, MR_sv(8), 0);
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(hlds__hlds_args__proc_arg_vector_map_corresponding_4_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_2),
		mercury__hlds__hlds_args__proc_arg_vector_map_corresponding_4_0_i12);
MR_def_label(hlds__hlds_args__proc_arg_vector_map_corresponding_4_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r2, 0) = MR_r1;
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 8);
	MR_tfield(0, MR_r1, 0) = MR_sv(9);
	MR_tfield(0, MR_r1, 1) = MR_sv(10);
	MR_tfield(0, MR_r1, 2) = MR_sv(11);
	MR_tfield(0, MR_r1, 3) = MR_sv(12);
	MR_tfield(0, MR_r1, 4) = MR_sv(13);
	MR_tfield(0, MR_r1, 5) = MR_sv(14);
	MR_tfield(0, MR_r1, 6) = MR_sv(15);
	MR_tfield(0, MR_r1, 7) = MR_r2;
	MR_decr_sp_and_return(19);
MR_def_label(hlds__hlds_args__proc_arg_vector_map_corresponding_4_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,0)) {
		MR_GOTO_LAB(hlds__hlds_args__proc_arg_vector_map_corresponding_4_0_i15);
	}
	if (MR_LTAGS_TESTR(MR_sv(8),0,0)) {
		MR_GOTO_LAB(hlds__hlds_args__proc_arg_vector_map_corresponding_4_0_i15);
	}
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 8);
	MR_tfield(0, MR_r2, 0) = MR_sv(9);
	MR_tfield(0, MR_r2, 1) = MR_sv(10);
	MR_tfield(0, MR_r2, 2) = MR_sv(11);
	MR_tfield(0, MR_r2, 3) = MR_sv(12);
	MR_tfield(0, MR_r2, 4) = MR_sv(13);
	MR_tfield(0, MR_r2, 5) = MR_sv(14);
	MR_tfield(0, MR_r2, 6) = MR_r1;
	MR_tfield(0, MR_r2, 7) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(19);
MR_def_label(hlds__hlds_args__proc_arg_vector_map_corresponding_4_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("hlds.hlds_args", 14);
	MR_r2 = (MR_Word) MR_string_const("predicate \140hlds.hlds_args.proc_arg_vector_map_corresponding\'/4", 62);
	MR_r3 = (MR_Word) MR_string_const("mismatched proc_arg_vectors", 27);
	MR_succip_word = MR_sv(19);
	MR_decr_sp(19);
	MR_np_tailcall_ent(require__unexpected_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(list__all_true_2_0);

MR_BEGIN_MODULE(hlds__hlds_args_module26)
	MR_init_entry1(hlds__hlds_args__proc_arg_vector_all_true_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__hlds_args__proc_arg_vector_all_true_2_0);
	MR_init_label9(hlds__hlds_args__proc_arg_vector_all_true_2_0,2,4,6,8,10,12,14,16,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'proc_arg_vector_all_true'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__hlds__hlds_args__proc_arg_vector_all_true_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(10);
	MR_sv(10) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(2) = MR_tfield(0, MR_tempr1, 1);
	MR_sv(3) = MR_tfield(0, MR_tempr1, 2);
	MR_sv(4) = MR_tfield(0, MR_tempr1, 3);
	MR_sv(5) = MR_tfield(0, MR_tempr1, 4);
	MR_sv(6) = MR_tfield(0, MR_tempr1, 5);
	MR_sv(7) = MR_tfield(0, MR_tempr1, 6);
	MR_sv(8) = MR_tfield(0, MR_tempr1, 7);
	MR_sv(9) = MR_r1;
	MR_r3 = MR_tfield(0, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(list__all_true_2_0,
		hlds__hlds_args__proc_arg_vector_all_true_2_0_i2);
MR_def_label(hlds__hlds_args__proc_arg_vector_all_true_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(hlds__hlds_args__proc_arg_vector_all_true_2_0_i1);
	}
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_np_call_localret_ent(list__all_true_2_0,
		hlds__hlds_args__proc_arg_vector_all_true_2_0_i4);
MR_def_label(hlds__hlds_args__proc_arg_vector_all_true_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(hlds__hlds_args__proc_arg_vector_all_true_2_0_i1);
	}
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(3);
	MR_np_call_localret_ent(list__all_true_2_0,
		hlds__hlds_args__proc_arg_vector_all_true_2_0_i6);
MR_def_label(hlds__hlds_args__proc_arg_vector_all_true_2_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(hlds__hlds_args__proc_arg_vector_all_true_2_0_i1);
	}
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(4);
	MR_np_call_localret_ent(list__all_true_2_0,
		hlds__hlds_args__proc_arg_vector_all_true_2_0_i8);
MR_def_label(hlds__hlds_args__proc_arg_vector_all_true_2_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(hlds__hlds_args__proc_arg_vector_all_true_2_0_i1);
	}
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(5);
	MR_np_call_localret_ent(list__all_true_2_0,
		hlds__hlds_args__proc_arg_vector_all_true_2_0_i10);
MR_def_label(hlds__hlds_args__proc_arg_vector_all_true_2_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(hlds__hlds_args__proc_arg_vector_all_true_2_0_i1);
	}
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(6);
	MR_np_call_localret_ent(list__all_true_2_0,
		hlds__hlds_args__proc_arg_vector_all_true_2_0_i12);
MR_def_label(hlds__hlds_args__proc_arg_vector_all_true_2_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(hlds__hlds_args__proc_arg_vector_all_true_2_0_i1);
	}
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(7);
	MR_np_call_localret_ent(list__all_true_2_0,
		hlds__hlds_args__proc_arg_vector_all_true_2_0_i14);
MR_def_label(hlds__hlds_args__proc_arg_vector_all_true_2_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(hlds__hlds_args__proc_arg_vector_all_true_2_0_i1);
	}
	if (MR_LTAGS_TEST(MR_sv(8),0,0)) {
		MR_GOTO_LAB(hlds__hlds_args__proc_arg_vector_all_true_2_0_i16);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tfield(1, MR_sv(8), 0);
	MR_succip_word = MR_sv(10);
	MR_decr_sp(10);
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(hlds__hlds_args__proc_arg_vector_all_true_2_0));
	MR_np_tailcall_ent(do_call_closure_1);
MR_def_label(hlds__hlds_args__proc_arg_vector_all_true_2_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(10);
	MR_decr_sp(10);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(hlds__hlds_args__proc_arg_vector_all_true_2_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(10);
	MR_decr_sp(10);
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(list__map_corresponding_foldl2_8_0);
MR_declare_entry(mercury__do_call_closure_4);

MR_BEGIN_MODULE(hlds__hlds_args_module27)
	MR_init_entry1(hlds__hlds_args__proc_arg_vector_map_corresponding_foldl2_8_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__hlds_args__proc_arg_vector_map_corresponding_foldl2_8_0);
	MR_init_label10(hlds__hlds_args__proc_arg_vector_map_corresponding_foldl2_8_0,2,3,4,5,6,7,8,12,9,15)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'proc_arg_vector_map_corresponding_foldl2'/8 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__hlds__hlds_args__proc_arg_vector_map_corresponding_foldl2_8_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(21);
	MR_sv(21) = (MR_Word) MR_succip;
	MR_sv(15) = MR_r6;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r7;
	MR_sv(9) = MR_tfield(0, MR_tempr1, 1);
	MR_sv(10) = MR_tfield(0, MR_tempr1, 2);
	MR_sv(11) = MR_tfield(0, MR_tempr1, 3);
	MR_sv(12) = MR_tfield(0, MR_tempr1, 4);
	MR_sv(13) = MR_tfield(0, MR_tempr1, 5);
	MR_sv(14) = MR_tfield(0, MR_tempr1, 6);
	MR_sv(1) = MR_tfield(0, MR_tempr1, 7);
	MR_tempr2 = MR_r8;
	MR_sv(2) = MR_tfield(0, MR_tempr2, 1);
	MR_sv(3) = MR_tfield(0, MR_tempr2, 2);
	MR_sv(4) = MR_tfield(0, MR_tempr2, 3);
	MR_sv(5) = MR_tfield(0, MR_tempr2, 4);
	MR_sv(6) = MR_tfield(0, MR_tempr2, 5);
	MR_sv(7) = MR_tfield(0, MR_tempr2, 6);
	MR_sv(8) = MR_tfield(0, MR_tempr2, 7);
	MR_sv(16) = MR_r1;
	MR_sv(17) = MR_r2;
	MR_sv(18) = MR_r3;
	MR_sv(19) = MR_r4;
	MR_sv(20) = MR_r5;
	MR_r7 = MR_tfield(0, MR_tempr1, 0);
	MR_r8 = MR_tfield(0, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(list__map_corresponding_foldl2_8_0,
		hlds__hlds_args__proc_arg_vector_map_corresponding_foldl2_8_0_i2);
MR_def_label(hlds__hlds_args__proc_arg_vector_map_corresponding_foldl2_8_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_sv(9);
	MR_sv(9) = MR_r1;
	MR_r1 = MR_sv(16);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_sv(17);
	MR_tempr3 = MR_r3;
	MR_r3 = MR_sv(18);
	MR_r4 = MR_sv(19);
	MR_r5 = MR_sv(20);
	MR_r6 = MR_sv(15);
	MR_r7 = MR_tempr1;
	MR_r8 = MR_sv(2);
	MR_r9 = MR_tempr2;
	MR_r10 = MR_tempr3;
	}
	MR_np_call_localret_ent(list__map_corresponding_foldl2_8_0,
		hlds__hlds_args__proc_arg_vector_map_corresponding_foldl2_8_0_i3);
MR_def_label(hlds__hlds_args__proc_arg_vector_map_corresponding_foldl2_8_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_sv(10);
	MR_sv(10) = MR_r1;
	MR_r1 = MR_sv(16);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_sv(17);
	MR_tempr3 = MR_r3;
	MR_r3 = MR_sv(18);
	MR_r4 = MR_sv(19);
	MR_r5 = MR_sv(20);
	MR_r6 = MR_sv(15);
	MR_r7 = MR_tempr1;
	MR_r8 = MR_sv(3);
	MR_r9 = MR_tempr2;
	MR_r10 = MR_tempr3;
	}
	MR_np_call_localret_ent(list__map_corresponding_foldl2_8_0,
		hlds__hlds_args__proc_arg_vector_map_corresponding_foldl2_8_0_i4);
MR_def_label(hlds__hlds_args__proc_arg_vector_map_corresponding_foldl2_8_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_sv(11);
	MR_sv(11) = MR_r1;
	MR_r1 = MR_sv(16);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_sv(17);
	MR_tempr3 = MR_r3;
	MR_r3 = MR_sv(18);
	MR_r4 = MR_sv(19);
	MR_r5 = MR_sv(20);
	MR_r6 = MR_sv(15);
	MR_r7 = MR_tempr1;
	MR_r8 = MR_sv(4);
	MR_r9 = MR_tempr2;
	MR_r10 = MR_tempr3;
	}
	MR_np_call_localret_ent(list__map_corresponding_foldl2_8_0,
		hlds__hlds_args__proc_arg_vector_map_corresponding_foldl2_8_0_i5);
MR_def_label(hlds__hlds_args__proc_arg_vector_map_corresponding_foldl2_8_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_sv(12);
	MR_sv(12) = MR_r1;
	MR_r1 = MR_sv(16);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_sv(17);
	MR_tempr3 = MR_r3;
	MR_r3 = MR_sv(18);
	MR_r4 = MR_sv(19);
	MR_r5 = MR_sv(20);
	MR_r6 = MR_sv(15);
	MR_r7 = MR_tempr1;
	MR_r8 = MR_sv(5);
	MR_r9 = MR_tempr2;
	MR_r10 = MR_tempr3;
	}
	MR_np_call_localret_ent(list__map_corresponding_foldl2_8_0,
		hlds__hlds_args__proc_arg_vector_map_corresponding_foldl2_8_0_i6);
MR_def_label(hlds__hlds_args__proc_arg_vector_map_corresponding_foldl2_8_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_sv(13);
	MR_sv(13) = MR_r1;
	MR_r1 = MR_sv(16);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_sv(17);
	MR_tempr3 = MR_r3;
	MR_r3 = MR_sv(18);
	MR_r4 = MR_sv(19);
	MR_r5 = MR_sv(20);
	MR_r6 = MR_sv(15);
	MR_r7 = MR_tempr1;
	MR_r8 = MR_sv(6);
	MR_r9 = MR_tempr2;
	MR_r10 = MR_tempr3;
	}
	MR_np_call_localret_ent(list__map_corresponding_foldl2_8_0,
		hlds__hlds_args__proc_arg_vector_map_corresponding_foldl2_8_0_i7);
MR_def_label(hlds__hlds_args__proc_arg_vector_map_corresponding_foldl2_8_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_sv(14);
	MR_sv(14) = MR_r1;
	MR_r1 = MR_sv(16);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_sv(17);
	MR_tempr3 = MR_r3;
	MR_r3 = MR_sv(18);
	MR_r4 = MR_sv(19);
	MR_r5 = MR_sv(20);
	MR_r6 = MR_sv(15);
	MR_r7 = MR_tempr1;
	MR_r8 = MR_sv(7);
	MR_r9 = MR_tempr2;
	MR_r10 = MR_tempr3;
	}
	MR_np_call_localret_ent(list__map_corresponding_foldl2_8_0,
		hlds__hlds_args__proc_arg_vector_map_corresponding_foldl2_8_0_i8);
MR_def_label(hlds__hlds_args__proc_arg_vector_map_corresponding_foldl2_8_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_sv(1),0,0)) {
		MR_GOTO_LAB(hlds__hlds_args__proc_arg_vector_map_corresponding_foldl2_8_0_i9);
	}
	if (MR_LTAGS_TEST(MR_sv(8),0,0)) {
		MR_GOTO_LAB(hlds__hlds_args__proc_arg_vector_map_corresponding_foldl2_8_0_i9);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_sv(15);
	MR_sv(15) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tfield(1, MR_sv(1), 0);
	MR_tempr3 = MR_r3;
	MR_r3 = MR_tfield(1, MR_sv(8), 0);
	MR_r4 = MR_tempr2;
	MR_r5 = MR_tempr3;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(hlds__hlds_args__proc_arg_vector_map_corresponding_foldl2_8_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_4),
		mercury__hlds__hlds_args__proc_arg_vector_map_corresponding_foldl2_8_0_i12);
MR_def_label(hlds__hlds_args__proc_arg_vector_map_corresponding_foldl2_8_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 8);
	MR_tfield(0, MR_r1, 0) = MR_sv(9);
	MR_tfield(0, MR_r1, 1) = MR_sv(10);
	MR_tfield(0, MR_r1, 2) = MR_sv(11);
	MR_tfield(0, MR_r1, 3) = MR_sv(12);
	MR_tfield(0, MR_r1, 4) = MR_sv(13);
	MR_tfield(0, MR_r1, 5) = MR_sv(14);
	MR_tfield(0, MR_r1, 6) = MR_sv(15);
	MR_tfield(0, MR_r1, 7) = MR_tempr1;
	MR_decr_sp_and_return(21);
	}
MR_def_label(hlds__hlds_args__proc_arg_vector_map_corresponding_foldl2_8_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,0)) {
		MR_GOTO_LAB(hlds__hlds_args__proc_arg_vector_map_corresponding_foldl2_8_0_i15);
	}
	if (MR_LTAGS_TESTR(MR_sv(8),0,0)) {
		MR_GOTO_LAB(hlds__hlds_args__proc_arg_vector_map_corresponding_foldl2_8_0_i15);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 8);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(9);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(10);
	MR_tfield(0, MR_tempr1, 2) = MR_sv(11);
	MR_tfield(0, MR_tempr1, 3) = MR_sv(12);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(13);
	MR_tfield(0, MR_tempr1, 5) = MR_sv(14);
	MR_tfield(0, MR_tempr1, 6) = MR_r1;
	MR_tfield(0, MR_tempr1, 7) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(21);
	}
MR_def_label(hlds__hlds_args__proc_arg_vector_map_corresponding_foldl2_8_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("hlds.hlds_args", 14);
	MR_r2 = (MR_Word) MR_string_const("predicate \140hlds.hlds_args.proc_arg_vector_map_corresponding_foldl2\'/8", 69);
	MR_r3 = (MR_Word) MR_string_const("mismatched proc_arg_vectors", 27);
	MR_succip_word = MR_sv(21);
	MR_decr_sp(21);
	MR_np_tailcall_ent(require__unexpected_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(list__foldl3_corresponding_9_0);
MR_declare_entry(mercury__do_call_closure_5);

MR_BEGIN_MODULE(hlds__hlds_args_module28)
	MR_init_entry1(hlds__hlds_args__proc_arg_vector_foldl3_corresponding_9_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__hlds_args__proc_arg_vector_foldl3_corresponding_9_0);
	MR_init_label10(hlds__hlds_args__proc_arg_vector_foldl3_corresponding_9_0,2,3,4,5,6,7,8,9,13,18)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'proc_arg_vector_foldl3_corresponding'/9 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__hlds__hlds_args__proc_arg_vector_foldl3_corresponding_9_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(21);
	MR_sv(21) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r6;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r7;
	MR_sv(2) = MR_tfield(0, MR_tempr1, 1);
	MR_sv(3) = MR_tfield(0, MR_tempr1, 2);
	MR_sv(4) = MR_tfield(0, MR_tempr1, 3);
	MR_sv(5) = MR_tfield(0, MR_tempr1, 4);
	MR_sv(6) = MR_tfield(0, MR_tempr1, 5);
	MR_sv(7) = MR_tfield(0, MR_tempr1, 6);
	MR_sv(8) = MR_tfield(0, MR_tempr1, 7);
	MR_tempr2 = MR_r8;
	MR_sv(9) = MR_tfield(0, MR_tempr2, 1);
	MR_sv(10) = MR_tfield(0, MR_tempr2, 2);
	MR_sv(11) = MR_tfield(0, MR_tempr2, 3);
	MR_sv(12) = MR_tfield(0, MR_tempr2, 4);
	MR_sv(13) = MR_tfield(0, MR_tempr2, 5);
	MR_sv(14) = MR_tfield(0, MR_tempr2, 6);
	MR_sv(15) = MR_tfield(0, MR_tempr2, 7);
	MR_sv(16) = MR_r1;
	MR_sv(17) = MR_r2;
	MR_sv(18) = MR_r3;
	MR_sv(19) = MR_r4;
	MR_sv(20) = MR_r5;
	MR_r7 = MR_tfield(0, MR_tempr1, 0);
	MR_r8 = MR_tfield(0, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(list__foldl3_corresponding_9_0,
		hlds__hlds_args__proc_arg_vector_foldl3_corresponding_9_0_i2);
MR_def_label(hlds__hlds_args__proc_arg_vector_foldl3_corresponding_9_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(16);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_sv(17);
	MR_tempr3 = MR_r3;
	MR_r3 = MR_sv(18);
	MR_r4 = MR_sv(19);
	MR_r5 = MR_sv(20);
	MR_r6 = MR_sv(1);
	MR_r7 = MR_sv(2);
	MR_r8 = MR_sv(9);
	MR_r9 = MR_tempr1;
	MR_r10 = MR_tempr2;
	MR_r11 = MR_tempr3;
	}
	MR_np_call_localret_ent(list__foldl3_corresponding_9_0,
		hlds__hlds_args__proc_arg_vector_foldl3_corresponding_9_0_i3);
MR_def_label(hlds__hlds_args__proc_arg_vector_foldl3_corresponding_9_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(16);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_sv(17);
	MR_tempr3 = MR_r3;
	MR_r3 = MR_sv(18);
	MR_r4 = MR_sv(19);
	MR_r5 = MR_sv(20);
	MR_r6 = MR_sv(1);
	MR_r7 = MR_sv(3);
	MR_r8 = MR_sv(10);
	MR_r9 = MR_tempr1;
	MR_r10 = MR_tempr2;
	MR_r11 = MR_tempr3;
	}
	MR_np_call_localret_ent(list__foldl3_corresponding_9_0,
		hlds__hlds_args__proc_arg_vector_foldl3_corresponding_9_0_i4);
MR_def_label(hlds__hlds_args__proc_arg_vector_foldl3_corresponding_9_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(16);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_sv(17);
	MR_tempr3 = MR_r3;
	MR_r3 = MR_sv(18);
	MR_r4 = MR_sv(19);
	MR_r5 = MR_sv(20);
	MR_r6 = MR_sv(1);
	MR_r7 = MR_sv(4);
	MR_r8 = MR_sv(11);
	MR_r9 = MR_tempr1;
	MR_r10 = MR_tempr2;
	MR_r11 = MR_tempr3;
	}
	MR_np_call_localret_ent(list__foldl3_corresponding_9_0,
		hlds__hlds_args__proc_arg_vector_foldl3_corresponding_9_0_i5);
MR_def_label(hlds__hlds_args__proc_arg_vector_foldl3_corresponding_9_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(16);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_sv(17);
	MR_tempr3 = MR_r3;
	MR_r3 = MR_sv(18);
	MR_r4 = MR_sv(19);
	MR_r5 = MR_sv(20);
	MR_r6 = MR_sv(1);
	MR_r7 = MR_sv(5);
	MR_r8 = MR_sv(12);
	MR_r9 = MR_tempr1;
	MR_r10 = MR_tempr2;
	MR_r11 = MR_tempr3;
	}
	MR_np_call_localret_ent(list__foldl3_corresponding_9_0,
		hlds__hlds_args__proc_arg_vector_foldl3_corresponding_9_0_i6);
MR_def_label(hlds__hlds_args__proc_arg_vector_foldl3_corresponding_9_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(16);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_sv(17);
	MR_tempr3 = MR_r3;
	MR_r3 = MR_sv(18);
	MR_r4 = MR_sv(19);
	MR_r5 = MR_sv(20);
	MR_r6 = MR_sv(1);
	MR_r7 = MR_sv(6);
	MR_r8 = MR_sv(13);
	MR_r9 = MR_tempr1;
	MR_r10 = MR_tempr2;
	MR_r11 = MR_tempr3;
	}
	MR_np_call_localret_ent(list__foldl3_corresponding_9_0,
		hlds__hlds_args__proc_arg_vector_foldl3_corresponding_9_0_i7);
MR_def_label(hlds__hlds_args__proc_arg_vector_foldl3_corresponding_9_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(16);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_sv(17);
	MR_tempr3 = MR_r3;
	MR_r3 = MR_sv(18);
	MR_r4 = MR_sv(19);
	MR_r5 = MR_sv(20);
	MR_r6 = MR_sv(1);
	MR_r7 = MR_sv(7);
	MR_r8 = MR_sv(14);
	MR_r9 = MR_tempr1;
	MR_r10 = MR_tempr2;
	MR_r11 = MR_tempr3;
	}
	MR_np_call_localret_ent(list__foldl3_corresponding_9_0,
		hlds__hlds_args__proc_arg_vector_foldl3_corresponding_9_0_i8);
MR_def_label(hlds__hlds_args__proc_arg_vector_foldl3_corresponding_9_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_sv(8),0,0)) {
		MR_GOTO_LAB(hlds__hlds_args__proc_arg_vector_foldl3_corresponding_9_0_i9);
	}
	if (MR_LTAGS_TEST(MR_sv(15),0,0)) {
		MR_GOTO_LAB(hlds__hlds_args__proc_arg_vector_foldl3_corresponding_9_0_i9);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tfield(1, MR_sv(8), 0);
	MR_tempr3 = MR_r3;
	MR_r3 = MR_tfield(1, MR_sv(15), 0);
	MR_r4 = MR_tempr1;
	MR_r5 = MR_tempr2;
	MR_r6 = MR_tempr3;
	MR_succip_word = MR_sv(21);
	MR_decr_sp(21);
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(hlds__hlds_args__proc_arg_vector_foldl3_corresponding_9_0));
	MR_np_tailcall_ent(do_call_closure_5);
	}
MR_def_label(hlds__hlds_args__proc_arg_vector_foldl3_corresponding_9_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(8),0,0)) {
		MR_GOTO_LAB(hlds__hlds_args__proc_arg_vector_foldl3_corresponding_9_0_i13);
	}
	if (MR_LTAGS_TEST(MR_sv(15),0,0)) {
		MR_GOTO_LAB(hlds__hlds_args__proc_arg_vector_foldl3_corresponding_9_0_i18);
	}
MR_def_label(hlds__hlds_args__proc_arg_vector_foldl3_corresponding_9_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("hlds.hlds_args", 14);
	MR_r2 = (MR_Word) MR_string_const("predicate \140hlds.hlds_args.proc_arg_vector_foldl3_corresponding\'/9", 65);
	MR_r3 = (MR_Word) MR_string_const("mismatched proc_arg_vectors", 27);
	MR_succip_word = MR_sv(21);
	MR_decr_sp(21);
	MR_np_tailcall_ent(require__unexpected_3_0);
MR_def_label(hlds__hlds_args__proc_arg_vector_foldl3_corresponding_9_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(21);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(list__foldl2_corresponding3_8_0);

MR_BEGIN_MODULE(hlds__hlds_args_module29)
	MR_init_entry1(hlds__hlds_args__proc_arg_vector_foldl2_corresponding3_8_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__hlds_args__proc_arg_vector_foldl2_corresponding3_8_0);
	MR_init_label10(hlds__hlds_args__proc_arg_vector_foldl2_corresponding3_8_0,2,3,4,5,6,7,8,9,14,20)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'proc_arg_vector_foldl2_corresponding3'/8 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__hlds__hlds_args__proc_arg_vector_foldl2_corresponding3_8_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(28);
	MR_sv(28) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r6;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_r7;
	MR_sv(2) = MR_tfield(0, MR_tempr1, 1);
	MR_sv(3) = MR_tfield(0, MR_tempr1, 2);
	MR_sv(4) = MR_tfield(0, MR_tempr1, 3);
	MR_sv(5) = MR_tfield(0, MR_tempr1, 4);
	MR_sv(6) = MR_tfield(0, MR_tempr1, 5);
	MR_sv(7) = MR_tfield(0, MR_tempr1, 6);
	MR_sv(8) = MR_tfield(0, MR_tempr1, 7);
	MR_tempr2 = MR_r8;
	MR_sv(9) = MR_tfield(0, MR_tempr2, 1);
	MR_sv(10) = MR_tfield(0, MR_tempr2, 2);
	MR_sv(11) = MR_tfield(0, MR_tempr2, 3);
	MR_sv(12) = MR_tfield(0, MR_tempr2, 4);
	MR_sv(13) = MR_tfield(0, MR_tempr2, 5);
	MR_sv(14) = MR_tfield(0, MR_tempr2, 6);
	MR_sv(15) = MR_tfield(0, MR_tempr2, 7);
	MR_tempr3 = MR_r9;
	MR_sv(16) = MR_tfield(0, MR_tempr3, 1);
	MR_sv(17) = MR_tfield(0, MR_tempr3, 2);
	MR_sv(18) = MR_tfield(0, MR_tempr3, 3);
	MR_sv(19) = MR_tfield(0, MR_tempr3, 4);
	MR_sv(20) = MR_tfield(0, MR_tempr3, 5);
	MR_sv(21) = MR_tfield(0, MR_tempr3, 6);
	MR_sv(22) = MR_tfield(0, MR_tempr3, 7);
	MR_sv(23) = MR_r1;
	MR_sv(24) = MR_r2;
	MR_sv(25) = MR_r3;
	MR_sv(26) = MR_r4;
	MR_sv(27) = MR_r5;
	MR_r7 = MR_tfield(0, MR_tempr1, 0);
	MR_r8 = MR_tfield(0, MR_tempr2, 0);
	MR_r9 = MR_tfield(0, MR_tempr3, 0);
	}
	MR_np_call_localret_ent(list__foldl2_corresponding3_8_0,
		hlds__hlds_args__proc_arg_vector_foldl2_corresponding3_8_0_i2);
MR_def_label(hlds__hlds_args__proc_arg_vector_foldl2_corresponding3_8_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(23);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_sv(24);
	MR_r3 = MR_sv(25);
	MR_r4 = MR_sv(26);
	MR_r5 = MR_sv(27);
	MR_r6 = MR_sv(1);
	MR_r7 = MR_sv(2);
	MR_r8 = MR_sv(9);
	MR_r9 = MR_sv(16);
	MR_r10 = MR_tempr1;
	MR_r11 = MR_tempr2;
	}
	MR_np_call_localret_ent(list__foldl2_corresponding3_8_0,
		hlds__hlds_args__proc_arg_vector_foldl2_corresponding3_8_0_i3);
MR_def_label(hlds__hlds_args__proc_arg_vector_foldl2_corresponding3_8_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(23);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_sv(24);
	MR_r3 = MR_sv(25);
	MR_r4 = MR_sv(26);
	MR_r5 = MR_sv(27);
	MR_r6 = MR_sv(1);
	MR_r7 = MR_sv(3);
	MR_r8 = MR_sv(10);
	MR_r9 = MR_sv(17);
	MR_r10 = MR_tempr1;
	MR_r11 = MR_tempr2;
	}
	MR_np_call_localret_ent(list__foldl2_corresponding3_8_0,
		hlds__hlds_args__proc_arg_vector_foldl2_corresponding3_8_0_i4);
MR_def_label(hlds__hlds_args__proc_arg_vector_foldl2_corresponding3_8_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(23);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_sv(24);
	MR_r3 = MR_sv(25);
	MR_r4 = MR_sv(26);
	MR_r5 = MR_sv(27);
	MR_r6 = MR_sv(1);
	MR_r7 = MR_sv(4);
	MR_r8 = MR_sv(11);
	MR_r9 = MR_sv(18);
	MR_r10 = MR_tempr1;
	MR_r11 = MR_tempr2;
	}
	MR_np_call_localret_ent(list__foldl2_corresponding3_8_0,
		hlds__hlds_args__proc_arg_vector_foldl2_corresponding3_8_0_i5);
MR_def_label(hlds__hlds_args__proc_arg_vector_foldl2_corresponding3_8_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(23);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_sv(24);
	MR_r3 = MR_sv(25);
	MR_r4 = MR_sv(26);
	MR_r5 = MR_sv(27);
	MR_r6 = MR_sv(1);
	MR_r7 = MR_sv(5);
	MR_r8 = MR_sv(12);
	MR_r9 = MR_sv(19);
	MR_r10 = MR_tempr1;
	MR_r11 = MR_tempr2;
	}
	MR_np_call_localret_ent(list__foldl2_corresponding3_8_0,
		hlds__hlds_args__proc_arg_vector_foldl2_corresponding3_8_0_i6);
MR_def_label(hlds__hlds_args__proc_arg_vector_foldl2_corresponding3_8_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(23);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_sv(24);
	MR_r3 = MR_sv(25);
	MR_r4 = MR_sv(26);
	MR_r5 = MR_sv(27);
	MR_r6 = MR_sv(1);
	MR_r7 = MR_sv(6);
	MR_r8 = MR_sv(13);
	MR_r9 = MR_sv(20);
	MR_r10 = MR_tempr1;
	MR_r11 = MR_tempr2;
	}
	MR_np_call_localret_ent(list__foldl2_corresponding3_8_0,
		hlds__hlds_args__proc_arg_vector_foldl2_corresponding3_8_0_i7);
MR_def_label(hlds__hlds_args__proc_arg_vector_foldl2_corresponding3_8_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(23);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_sv(24);
	MR_r3 = MR_sv(25);
	MR_r4 = MR_sv(26);
	MR_r5 = MR_sv(27);
	MR_r6 = MR_sv(1);
	MR_r7 = MR_sv(7);
	MR_r8 = MR_sv(14);
	MR_r9 = MR_sv(21);
	MR_r10 = MR_tempr1;
	MR_r11 = MR_tempr2;
	}
	MR_np_call_localret_ent(list__foldl2_corresponding3_8_0,
		hlds__hlds_args__proc_arg_vector_foldl2_corresponding3_8_0_i8);
MR_def_label(hlds__hlds_args__proc_arg_vector_foldl2_corresponding3_8_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_sv(8),0,0)) {
		MR_GOTO_LAB(hlds__hlds_args__proc_arg_vector_foldl2_corresponding3_8_0_i9);
	}
	if (MR_LTAGS_TEST(MR_sv(15),0,0)) {
		MR_GOTO_LAB(hlds__hlds_args__proc_arg_vector_foldl2_corresponding3_8_0_i9);
	}
	if (MR_LTAGS_TEST(MR_sv(22),0,0)) {
		MR_GOTO_LAB(hlds__hlds_args__proc_arg_vector_foldl2_corresponding3_8_0_i9);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tfield(1, MR_sv(8), 0);
	MR_r3 = MR_tfield(1, MR_sv(15), 0);
	MR_r4 = MR_tfield(1, MR_sv(22), 0);
	MR_r5 = MR_tempr1;
	MR_r6 = MR_tempr2;
	MR_succip_word = MR_sv(28);
	MR_decr_sp(28);
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(hlds__hlds_args__proc_arg_vector_foldl2_corresponding3_8_0));
	MR_np_tailcall_ent(do_call_closure_5);
	}
MR_def_label(hlds__hlds_args__proc_arg_vector_foldl2_corresponding3_8_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(8),0,0)) {
		MR_GOTO_LAB(hlds__hlds_args__proc_arg_vector_foldl2_corresponding3_8_0_i14);
	}
	if (MR_LTAGS_TESTR(MR_sv(15),0,0)) {
		MR_GOTO_LAB(hlds__hlds_args__proc_arg_vector_foldl2_corresponding3_8_0_i14);
	}
	if (MR_LTAGS_TEST(MR_sv(22),0,0)) {
		MR_GOTO_LAB(hlds__hlds_args__proc_arg_vector_foldl2_corresponding3_8_0_i20);
	}
MR_def_label(hlds__hlds_args__proc_arg_vector_foldl2_corresponding3_8_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("hlds.hlds_args", 14);
	MR_r2 = (MR_Word) MR_string_const("predicate \140hlds.hlds_args.proc_arg_vector_foldl2_corresponding3\'/8", 66);
	MR_r3 = (MR_Word) MR_string_const("mismatched proc_arg_vectors", 27);
	MR_succip_word = MR_sv(28);
	MR_decr_sp(28);
	MR_np_tailcall_ent(require__unexpected_3_0);
MR_def_label(hlds__hlds_args__proc_arg_vector_foldl2_corresponding3_8_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(28);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(list__foldl3_corresponding3_10_0);
MR_declare_entry(mercury__do_call_closure_compact);

MR_BEGIN_MODULE(hlds__hlds_args_module30)
	MR_init_entry1(hlds__hlds_args__proc_arg_vector_foldl3_corresponding3_10_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__hlds_args__proc_arg_vector_foldl3_corresponding3_10_0);
	MR_init_label10(hlds__hlds_args__proc_arg_vector_foldl3_corresponding3_10_0,2,3,4,5,6,7,8,9,14,20)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'proc_arg_vector_foldl3_corresponding3'/10 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__hlds__hlds_args__proc_arg_vector_foldl3_corresponding3_10_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(29);
	MR_sv(29) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r7;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_r8;
	MR_sv(2) = MR_tfield(0, MR_tempr1, 1);
	MR_sv(3) = MR_tfield(0, MR_tempr1, 2);
	MR_sv(4) = MR_tfield(0, MR_tempr1, 3);
	MR_sv(5) = MR_tfield(0, MR_tempr1, 4);
	MR_sv(6) = MR_tfield(0, MR_tempr1, 5);
	MR_sv(7) = MR_tfield(0, MR_tempr1, 6);
	MR_sv(8) = MR_tfield(0, MR_tempr1, 7);
	MR_tempr2 = MR_r9;
	MR_sv(9) = MR_tfield(0, MR_tempr2, 1);
	MR_sv(10) = MR_tfield(0, MR_tempr2, 2);
	MR_sv(11) = MR_tfield(0, MR_tempr2, 3);
	MR_sv(12) = MR_tfield(0, MR_tempr2, 4);
	MR_sv(13) = MR_tfield(0, MR_tempr2, 5);
	MR_sv(14) = MR_tfield(0, MR_tempr2, 6);
	MR_sv(15) = MR_tfield(0, MR_tempr2, 7);
	MR_tempr3 = MR_r10;
	MR_sv(16) = MR_tfield(0, MR_tempr3, 1);
	MR_sv(17) = MR_tfield(0, MR_tempr3, 2);
	MR_sv(18) = MR_tfield(0, MR_tempr3, 3);
	MR_sv(19) = MR_tfield(0, MR_tempr3, 4);
	MR_sv(20) = MR_tfield(0, MR_tempr3, 5);
	MR_sv(21) = MR_tfield(0, MR_tempr3, 6);
	MR_sv(22) = MR_tfield(0, MR_tempr3, 7);
	MR_sv(23) = MR_r1;
	MR_sv(24) = MR_r2;
	MR_sv(25) = MR_r3;
	MR_sv(26) = MR_r4;
	MR_sv(27) = MR_r5;
	MR_sv(28) = MR_r6;
	MR_r8 = MR_tfield(0, MR_tempr1, 0);
	MR_r9 = MR_tfield(0, MR_tempr2, 0);
	MR_r10 = MR_tfield(0, MR_tempr3, 0);
	}
	MR_np_call_localret_ent(list__foldl3_corresponding3_10_0,
		hlds__hlds_args__proc_arg_vector_foldl3_corresponding3_10_0_i2);
MR_def_label(hlds__hlds_args__proc_arg_vector_foldl3_corresponding3_10_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(23);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_sv(24);
	MR_tempr3 = MR_r3;
	MR_r3 = MR_sv(25);
	MR_r4 = MR_sv(26);
	MR_r5 = MR_sv(27);
	MR_r6 = MR_sv(28);
	MR_r7 = MR_sv(1);
	MR_r8 = MR_sv(2);
	MR_r9 = MR_sv(9);
	MR_r10 = MR_sv(16);
	MR_r11 = MR_tempr1;
	MR_r12 = MR_tempr2;
	MR_r13 = MR_tempr3;
	}
	MR_np_call_localret_ent(list__foldl3_corresponding3_10_0,
		hlds__hlds_args__proc_arg_vector_foldl3_corresponding3_10_0_i3);
MR_def_label(hlds__hlds_args__proc_arg_vector_foldl3_corresponding3_10_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(23);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_sv(24);
	MR_tempr3 = MR_r3;
	MR_r3 = MR_sv(25);
	MR_r4 = MR_sv(26);
	MR_r5 = MR_sv(27);
	MR_r6 = MR_sv(28);
	MR_r7 = MR_sv(1);
	MR_r8 = MR_sv(3);
	MR_r9 = MR_sv(10);
	MR_r10 = MR_sv(17);
	MR_r11 = MR_tempr1;
	MR_r12 = MR_tempr2;
	MR_r13 = MR_tempr3;
	}
	MR_np_call_localret_ent(list__foldl3_corresponding3_10_0,
		hlds__hlds_args__proc_arg_vector_foldl3_corresponding3_10_0_i4);
MR_def_label(hlds__hlds_args__proc_arg_vector_foldl3_corresponding3_10_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(23);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_sv(24);
	MR_tempr3 = MR_r3;
	MR_r3 = MR_sv(25);
	MR_r4 = MR_sv(26);
	MR_r5 = MR_sv(27);
	MR_r6 = MR_sv(28);
	MR_r7 = MR_sv(1);
	MR_r8 = MR_sv(4);
	MR_r9 = MR_sv(11);
	MR_r10 = MR_sv(18);
	MR_r11 = MR_tempr1;
	MR_r12 = MR_tempr2;
	MR_r13 = MR_tempr3;
	}
	MR_np_call_localret_ent(list__foldl3_corresponding3_10_0,
		hlds__hlds_args__proc_arg_vector_foldl3_corresponding3_10_0_i5);
MR_def_label(hlds__hlds_args__proc_arg_vector_foldl3_corresponding3_10_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(23);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_sv(24);
	MR_tempr3 = MR_r3;
	MR_r3 = MR_sv(25);
	MR_r4 = MR_sv(26);
	MR_r5 = MR_sv(27);
	MR_r6 = MR_sv(28);
	MR_r7 = MR_sv(1);
	MR_r8 = MR_sv(5);
	MR_r9 = MR_sv(12);
	MR_r10 = MR_sv(19);
	MR_r11 = MR_tempr1;
	MR_r12 = MR_tempr2;
	MR_r13 = MR_tempr3;
	}
	MR_np_call_localret_ent(list__foldl3_corresponding3_10_0,
		hlds__hlds_args__proc_arg_vector_foldl3_corresponding3_10_0_i6);
MR_def_label(hlds__hlds_args__proc_arg_vector_foldl3_corresponding3_10_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(23);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_sv(24);
	MR_tempr3 = MR_r3;
	MR_r3 = MR_sv(25);
	MR_r4 = MR_sv(26);
	MR_r5 = MR_sv(27);
	MR_r6 = MR_sv(28);
	MR_r7 = MR_sv(1);
	MR_r8 = MR_sv(6);
	MR_r9 = MR_sv(13);
	MR_r10 = MR_sv(20);
	MR_r11 = MR_tempr1;
	MR_r12 = MR_tempr2;
	MR_r13 = MR_tempr3;
	}
	MR_np_call_localret_ent(list__foldl3_corresponding3_10_0,
		hlds__hlds_args__proc_arg_vector_foldl3_corresponding3_10_0_i7);
MR_def_label(hlds__hlds_args__proc_arg_vector_foldl3_corresponding3_10_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(23);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_sv(24);
	MR_tempr3 = MR_r3;
	MR_r3 = MR_sv(25);
	MR_r4 = MR_sv(26);
	MR_r5 = MR_sv(27);
	MR_r6 = MR_sv(28);
	MR_r7 = MR_sv(1);
	MR_r8 = MR_sv(7);
	MR_r9 = MR_sv(14);
	MR_r10 = MR_sv(21);
	MR_r11 = MR_tempr1;
	MR_r12 = MR_tempr2;
	MR_r13 = MR_tempr3;
	}
	MR_np_call_localret_ent(list__foldl3_corresponding3_10_0,
		hlds__hlds_args__proc_arg_vector_foldl3_corresponding3_10_0_i8);
MR_def_label(hlds__hlds_args__proc_arg_vector_foldl3_corresponding3_10_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_sv(8),0,0)) {
		MR_GOTO_LAB(hlds__hlds_args__proc_arg_vector_foldl3_corresponding3_10_0_i9);
	}
	if (MR_LTAGS_TEST(MR_sv(15),0,0)) {
		MR_GOTO_LAB(hlds__hlds_args__proc_arg_vector_foldl3_corresponding3_10_0_i9);
	}
	if (MR_LTAGS_TEST(MR_sv(22),0,0)) {
		MR_GOTO_LAB(hlds__hlds_args__proc_arg_vector_foldl3_corresponding3_10_0_i9);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_tempr2 = MR_r3;
	MR_r3 = MR_tfield(1, MR_sv(8), 0);
	MR_r4 = MR_tfield(1, MR_sv(15), 0);
	MR_r5 = MR_tfield(1, MR_sv(22), 0);
	MR_r6 = MR_tempr1;
	MR_r7 = MR_r2;
	MR_r8 = MR_tempr2;
	MR_r2 = (MR_Integer) 6;
	MR_succip_word = MR_sv(29);
	MR_decr_sp(29);
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(hlds__hlds_args__proc_arg_vector_foldl3_corresponding3_10_0));
	MR_np_tailcall_ent(do_call_closure_compact);
	}
MR_def_label(hlds__hlds_args__proc_arg_vector_foldl3_corresponding3_10_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(8),0,0)) {
		MR_GOTO_LAB(hlds__hlds_args__proc_arg_vector_foldl3_corresponding3_10_0_i14);
	}
	if (MR_LTAGS_TESTR(MR_sv(15),0,0)) {
		MR_GOTO_LAB(hlds__hlds_args__proc_arg_vector_foldl3_corresponding3_10_0_i14);
	}
	if (MR_LTAGS_TEST(MR_sv(22),0,0)) {
		MR_GOTO_LAB(hlds__hlds_args__proc_arg_vector_foldl3_corresponding3_10_0_i20);
	}
MR_def_label(hlds__hlds_args__proc_arg_vector_foldl3_corresponding3_10_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("hlds.hlds_args", 14);
	MR_r2 = (MR_Word) MR_string_const("predicate \140hlds.hlds_args.proc_arg_vector_foldl3_corresponding3\'/10", 67);
	MR_r3 = (MR_Word) MR_string_const("mismatched proc_arg_vectors", 27);
	MR_succip_word = MR_sv(29);
	MR_decr_sp(29);
	MR_np_tailcall_ent(require__unexpected_3_0);
MR_def_label(hlds__hlds_args__proc_arg_vector_foldl3_corresponding3_10_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(29);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(list__foldl4_corresponding3_12_0);

MR_BEGIN_MODULE(hlds__hlds_args_module31)
	MR_init_entry1(hlds__hlds_args__proc_arg_vector_foldl4_corresponding3_12_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__hlds_args__proc_arg_vector_foldl4_corresponding3_12_0);
	MR_init_label10(hlds__hlds_args__proc_arg_vector_foldl4_corresponding3_12_0,2,3,4,5,6,7,8,9,14,20)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'proc_arg_vector_foldl4_corresponding3'/12 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__hlds__hlds_args__proc_arg_vector_foldl4_corresponding3_12_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(30);
	MR_sv(30) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r8;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_r9;
	MR_sv(2) = MR_tfield(0, MR_tempr1, 1);
	MR_sv(3) = MR_tfield(0, MR_tempr1, 2);
	MR_sv(4) = MR_tfield(0, MR_tempr1, 3);
	MR_sv(5) = MR_tfield(0, MR_tempr1, 4);
	MR_sv(6) = MR_tfield(0, MR_tempr1, 5);
	MR_sv(7) = MR_tfield(0, MR_tempr1, 6);
	MR_sv(8) = MR_tfield(0, MR_tempr1, 7);
	MR_tempr2 = MR_r10;
	MR_sv(9) = MR_tfield(0, MR_tempr2, 1);
	MR_sv(10) = MR_tfield(0, MR_tempr2, 2);
	MR_sv(11) = MR_tfield(0, MR_tempr2, 3);
	MR_sv(12) = MR_tfield(0, MR_tempr2, 4);
	MR_sv(13) = MR_tfield(0, MR_tempr2, 5);
	MR_sv(14) = MR_tfield(0, MR_tempr2, 6);
	MR_sv(15) = MR_tfield(0, MR_tempr2, 7);
	MR_tempr3 = MR_r11;
	MR_sv(16) = MR_tfield(0, MR_tempr3, 1);
	MR_sv(17) = MR_tfield(0, MR_tempr3, 2);
	MR_sv(18) = MR_tfield(0, MR_tempr3, 3);
	MR_sv(19) = MR_tfield(0, MR_tempr3, 4);
	MR_sv(20) = MR_tfield(0, MR_tempr3, 5);
	MR_sv(21) = MR_tfield(0, MR_tempr3, 6);
	MR_sv(22) = MR_tfield(0, MR_tempr3, 7);
	MR_sv(23) = MR_r1;
	MR_sv(24) = MR_r2;
	MR_sv(25) = MR_r3;
	MR_sv(26) = MR_r4;
	MR_sv(27) = MR_r5;
	MR_sv(28) = MR_r6;
	MR_sv(29) = MR_r7;
	MR_r9 = MR_tfield(0, MR_tempr1, 0);
	MR_r10 = MR_tfield(0, MR_tempr2, 0);
	MR_r11 = MR_tfield(0, MR_tempr3, 0);
	}
	MR_np_call_localret_ent(list__foldl4_corresponding3_12_0,
		hlds__hlds_args__proc_arg_vector_foldl4_corresponding3_12_0_i2);
MR_def_label(hlds__hlds_args__proc_arg_vector_foldl4_corresponding3_12_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(23);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_sv(24);
	MR_tempr3 = MR_r3;
	MR_r3 = MR_sv(25);
	MR_tempr4 = MR_r4;
	MR_r4 = MR_sv(26);
	MR_r5 = MR_sv(27);
	MR_r6 = MR_sv(28);
	MR_r7 = MR_sv(29);
	MR_r8 = MR_sv(1);
	MR_r9 = MR_sv(2);
	MR_r10 = MR_sv(9);
	MR_r11 = MR_sv(16);
	MR_r12 = MR_tempr1;
	MR_r13 = MR_tempr2;
	MR_r14 = MR_tempr3;
	MR_r15 = MR_tempr4;
	}
	MR_np_call_localret_ent(list__foldl4_corresponding3_12_0,
		hlds__hlds_args__proc_arg_vector_foldl4_corresponding3_12_0_i3);
MR_def_label(hlds__hlds_args__proc_arg_vector_foldl4_corresponding3_12_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(23);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_sv(24);
	MR_tempr3 = MR_r3;
	MR_r3 = MR_sv(25);
	MR_tempr4 = MR_r4;
	MR_r4 = MR_sv(26);
	MR_r5 = MR_sv(27);
	MR_r6 = MR_sv(28);
	MR_r7 = MR_sv(29);
	MR_r8 = MR_sv(1);
	MR_r9 = MR_sv(3);
	MR_r10 = MR_sv(10);
	MR_r11 = MR_sv(17);
	MR_r12 = MR_tempr1;
	MR_r13 = MR_tempr2;
	MR_r14 = MR_tempr3;
	MR_r15 = MR_tempr4;
	}
	MR_np_call_localret_ent(list__foldl4_corresponding3_12_0,
		hlds__hlds_args__proc_arg_vector_foldl4_corresponding3_12_0_i4);
MR_def_label(hlds__hlds_args__proc_arg_vector_foldl4_corresponding3_12_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(23);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_sv(24);
	MR_tempr3 = MR_r3;
	MR_r3 = MR_sv(25);
	MR_tempr4 = MR_r4;
	MR_r4 = MR_sv(26);
	MR_r5 = MR_sv(27);
	MR_r6 = MR_sv(28);
	MR_r7 = MR_sv(29);
	MR_r8 = MR_sv(1);
	MR_r9 = MR_sv(4);
	MR_r10 = MR_sv(11);
	MR_r11 = MR_sv(18);
	MR_r12 = MR_tempr1;
	MR_r13 = MR_tempr2;
	MR_r14 = MR_tempr3;
	MR_r15 = MR_tempr4;
	}
	MR_np_call_localret_ent(list__foldl4_corresponding3_12_0,
		hlds__hlds_args__proc_arg_vector_foldl4_corresponding3_12_0_i5);
MR_def_label(hlds__hlds_args__proc_arg_vector_foldl4_corresponding3_12_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(23);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_sv(24);
	MR_tempr3 = MR_r3;
	MR_r3 = MR_sv(25);
	MR_tempr4 = MR_r4;
	MR_r4 = MR_sv(26);
	MR_r5 = MR_sv(27);
	MR_r6 = MR_sv(28);
	MR_r7 = MR_sv(29);
	MR_r8 = MR_sv(1);
	MR_r9 = MR_sv(5);
	MR_r10 = MR_sv(12);
	MR_r11 = MR_sv(19);
	MR_r12 = MR_tempr1;
	MR_r13 = MR_tempr2;
	MR_r14 = MR_tempr3;
	MR_r15 = MR_tempr4;
	}
	MR_np_call_localret_ent(list__foldl4_corresponding3_12_0,
		hlds__hlds_args__proc_arg_vector_foldl4_corresponding3_12_0_i6);
MR_def_label(hlds__hlds_args__proc_arg_vector_foldl4_corresponding3_12_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(23);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_sv(24);
	MR_tempr3 = MR_r3;
	MR_r3 = MR_sv(25);
	MR_tempr4 = MR_r4;
	MR_r4 = MR_sv(26);
	MR_r5 = MR_sv(27);
	MR_r6 = MR_sv(28);
	MR_r7 = MR_sv(29);
	MR_r8 = MR_sv(1);
	MR_r9 = MR_sv(6);
	MR_r10 = MR_sv(13);
	MR_r11 = MR_sv(20);
	MR_r12 = MR_tempr1;
	MR_r13 = MR_tempr2;
	MR_r14 = MR_tempr3;
	MR_r15 = MR_tempr4;
	}
	MR_np_call_localret_ent(list__foldl4_corresponding3_12_0,
		hlds__hlds_args__proc_arg_vector_foldl4_corresponding3_12_0_i7);
MR_def_label(hlds__hlds_args__proc_arg_vector_foldl4_corresponding3_12_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(23);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_sv(24);
	MR_tempr3 = MR_r3;
	MR_r3 = MR_sv(25);
	MR_tempr4 = MR_r4;
	MR_r4 = MR_sv(26);
	MR_r5 = MR_sv(27);
	MR_r6 = MR_sv(28);
	MR_r7 = MR_sv(29);
	MR_r8 = MR_sv(1);
	MR_r9 = MR_sv(7);
	MR_r10 = MR_sv(14);
	MR_r11 = MR_sv(21);
	MR_r12 = MR_tempr1;
	MR_r13 = MR_tempr2;
	MR_r14 = MR_tempr3;
	MR_r15 = MR_tempr4;
	}
	MR_np_call_localret_ent(list__foldl4_corresponding3_12_0,
		hlds__hlds_args__proc_arg_vector_foldl4_corresponding3_12_0_i8);
MR_def_label(hlds__hlds_args__proc_arg_vector_foldl4_corresponding3_12_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_sv(8),0,0)) {
		MR_GOTO_LAB(hlds__hlds_args__proc_arg_vector_foldl4_corresponding3_12_0_i9);
	}
	if (MR_LTAGS_TEST(MR_sv(15),0,0)) {
		MR_GOTO_LAB(hlds__hlds_args__proc_arg_vector_foldl4_corresponding3_12_0_i9);
	}
	if (MR_LTAGS_TEST(MR_sv(22),0,0)) {
		MR_GOTO_LAB(hlds__hlds_args__proc_arg_vector_foldl4_corresponding3_12_0_i9);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_tempr2 = MR_r3;
	MR_r3 = MR_tfield(1, MR_sv(8), 0);
	MR_tempr3 = MR_r4;
	MR_r4 = MR_tfield(1, MR_sv(15), 0);
	MR_r5 = MR_tfield(1, MR_sv(22), 0);
	MR_r6 = MR_tempr1;
	MR_r7 = MR_r2;
	MR_r8 = MR_tempr2;
	MR_r9 = MR_tempr3;
	MR_r2 = (MR_Integer) 7;
	MR_succip_word = MR_sv(30);
	MR_decr_sp(30);
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(hlds__hlds_args__proc_arg_vector_foldl4_corresponding3_12_0));
	MR_np_tailcall_ent(do_call_closure_compact);
	}
MR_def_label(hlds__hlds_args__proc_arg_vector_foldl4_corresponding3_12_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(8),0,0)) {
		MR_GOTO_LAB(hlds__hlds_args__proc_arg_vector_foldl4_corresponding3_12_0_i14);
	}
	if (MR_LTAGS_TESTR(MR_sv(15),0,0)) {
		MR_GOTO_LAB(hlds__hlds_args__proc_arg_vector_foldl4_corresponding3_12_0_i14);
	}
	if (MR_LTAGS_TEST(MR_sv(22),0,0)) {
		MR_GOTO_LAB(hlds__hlds_args__proc_arg_vector_foldl4_corresponding3_12_0_i20);
	}
MR_def_label(hlds__hlds_args__proc_arg_vector_foldl4_corresponding3_12_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("hlds.hlds_args", 14);
	MR_r2 = (MR_Word) MR_string_const("predicate \140hlds.hlds_args.proc_arg_vector_foldl4_corresponding3\'/12", 67);
	MR_r3 = (MR_Word) MR_string_const("mismatched proc_arg_vectors", 27);
	MR_succip_word = MR_sv(30);
	MR_decr_sp(30);
	MR_np_tailcall_ent(require__unexpected_3_0);
MR_def_label(hlds__hlds_args__proc_arg_vector_foldl4_corresponding3_12_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(30);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__hlds_args_module32)
	MR_init_entry1(fn__hlds__hlds_args__poly_arg_vector_init_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__hlds__hlds_args__poly_arg_vector_init_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'poly_arg_vector_init'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__hlds__hlds_args__poly_arg_vector_init_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,1,0);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__hlds_args_module33)
	MR_init_entry1(hlds__hlds_args__poly_arg_vector_set_instance_type_infos_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__hlds_args__poly_arg_vector_set_instance_type_infos_3_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'poly_arg_vector_set_instance_type_infos'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__hlds__hlds_args__poly_arg_vector_set_instance_type_infos_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 8);
	MR_tfield(0, MR_r1, 0) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_tfield(0, MR_r1, 1) = MR_tfield(0, MR_tempr1, 1);
	MR_tfield(0, MR_r1, 2) = MR_tfield(0, MR_tempr1, 2);
	MR_tfield(0, MR_r1, 3) = MR_tfield(0, MR_tempr1, 3);
	MR_tfield(0, MR_r1, 4) = MR_tfield(0, MR_tempr1, 4);
	MR_tfield(0, MR_r1, 5) = MR_tfield(0, MR_tempr1, 5);
	MR_tfield(0, MR_r1, 6) = MR_tfield(0, MR_tempr1, 6);
	MR_tfield(0, MR_r1, 7) = MR_tfield(0, MR_tempr1, 7);
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__hlds_args_module34)
	MR_init_entry1(hlds__hlds_args__poly_arg_vector_set_instance_typeclass_infos_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__hlds_args__poly_arg_vector_set_instance_typeclass_infos_3_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'poly_arg_vector_set_instance_typeclass_infos'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__hlds__hlds_args__poly_arg_vector_set_instance_typeclass_infos_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 8);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_tfield(0, MR_r1, 0) = MR_tfield(0, MR_tempr1, 0);
	MR_tfield(0, MR_r1, 1) = MR_r2;
	MR_tfield(0, MR_r1, 2) = MR_tfield(0, MR_tempr1, 2);
	MR_tfield(0, MR_r1, 3) = MR_tfield(0, MR_tempr1, 3);
	MR_tfield(0, MR_r1, 4) = MR_tfield(0, MR_tempr1, 4);
	MR_tfield(0, MR_r1, 5) = MR_tfield(0, MR_tempr1, 5);
	MR_tfield(0, MR_r1, 6) = MR_tfield(0, MR_tempr1, 6);
	MR_tfield(0, MR_r1, 7) = MR_tfield(0, MR_tempr1, 7);
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__hlds_args_module35)
	MR_init_entry1(hlds__hlds_args__poly_arg_vector_set_univ_type_infos_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__hlds_args__poly_arg_vector_set_univ_type_infos_3_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'poly_arg_vector_set_univ_type_infos'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__hlds__hlds_args__poly_arg_vector_set_univ_type_infos_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 8);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_tfield(0, MR_r1, 0) = MR_tfield(0, MR_tempr1, 0);
	MR_tfield(0, MR_r1, 1) = MR_tfield(0, MR_tempr1, 1);
	MR_tfield(0, MR_r1, 2) = MR_r2;
	MR_tfield(0, MR_r1, 3) = MR_tfield(0, MR_tempr1, 3);
	MR_tfield(0, MR_r1, 4) = MR_tfield(0, MR_tempr1, 4);
	MR_tfield(0, MR_r1, 5) = MR_tfield(0, MR_tempr1, 5);
	MR_tfield(0, MR_r1, 6) = MR_tfield(0, MR_tempr1, 6);
	MR_tfield(0, MR_r1, 7) = MR_tfield(0, MR_tempr1, 7);
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__hlds_args_module36)
	MR_init_entry1(hlds__hlds_args__poly_arg_vector_set_exist_type_infos_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__hlds_args__poly_arg_vector_set_exist_type_infos_3_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'poly_arg_vector_set_exist_type_infos'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__hlds__hlds_args__poly_arg_vector_set_exist_type_infos_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 8);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_tfield(0, MR_r1, 0) = MR_tfield(0, MR_tempr1, 0);
	MR_tfield(0, MR_r1, 1) = MR_tfield(0, MR_tempr1, 1);
	MR_tfield(0, MR_r1, 2) = MR_tfield(0, MR_tempr1, 2);
	MR_tfield(0, MR_r1, 3) = MR_r2;
	MR_tfield(0, MR_r1, 4) = MR_tfield(0, MR_tempr1, 4);
	MR_tfield(0, MR_r1, 5) = MR_tfield(0, MR_tempr1, 5);
	MR_tfield(0, MR_r1, 6) = MR_tfield(0, MR_tempr1, 6);
	MR_tfield(0, MR_r1, 7) = MR_tfield(0, MR_tempr1, 7);
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__hlds_args_module37)
	MR_init_entry1(hlds__hlds_args__poly_arg_vector_set_univ_typeclass_infos_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__hlds_args__poly_arg_vector_set_univ_typeclass_infos_3_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'poly_arg_vector_set_univ_typeclass_infos'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__hlds__hlds_args__poly_arg_vector_set_univ_typeclass_infos_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 8);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_tfield(0, MR_r1, 0) = MR_tfield(0, MR_tempr1, 0);
	MR_tfield(0, MR_r1, 1) = MR_tfield(0, MR_tempr1, 1);
	MR_tfield(0, MR_r1, 2) = MR_tfield(0, MR_tempr1, 2);
	MR_tfield(0, MR_r1, 3) = MR_tfield(0, MR_tempr1, 3);
	MR_tfield(0, MR_r1, 4) = MR_r2;
	MR_tfield(0, MR_r1, 5) = MR_tfield(0, MR_tempr1, 5);
	MR_tfield(0, MR_r1, 6) = MR_tfield(0, MR_tempr1, 6);
	MR_tfield(0, MR_r1, 7) = MR_tfield(0, MR_tempr1, 7);
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__hlds_args_module38)
	MR_init_entry1(hlds__hlds_args__poly_arg_vector_set_exist_typeclass_infos_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__hlds_args__poly_arg_vector_set_exist_typeclass_infos_3_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'poly_arg_vector_set_exist_typeclass_infos'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__hlds__hlds_args__poly_arg_vector_set_exist_typeclass_infos_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 8);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_tfield(0, MR_r1, 0) = MR_tfield(0, MR_tempr1, 0);
	MR_tfield(0, MR_r1, 1) = MR_tfield(0, MR_tempr1, 1);
	MR_tfield(0, MR_r1, 2) = MR_tfield(0, MR_tempr1, 2);
	MR_tfield(0, MR_r1, 3) = MR_tfield(0, MR_tempr1, 3);
	MR_tfield(0, MR_r1, 4) = MR_tfield(0, MR_tempr1, 4);
	MR_tfield(0, MR_r1, 5) = MR_r2;
	MR_tfield(0, MR_r1, 6) = MR_tfield(0, MR_tempr1, 6);
	MR_tfield(0, MR_r1, 7) = MR_tfield(0, MR_tempr1, 7);
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__hlds_args_module39)
	MR_init_entry1(fn__hlds__hlds_args__poly_arg_vector_to_list_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__hlds__hlds_args__poly_arg_vector_to_list_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'poly_arg_vector_to_list'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__hlds__hlds_args__poly_arg_vector_to_list_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(fn__hlds__hlds_args__proc_arg_vector_to_list_1_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__hlds_args_module40)
	MR_init_entry1(__Unify___hlds__hlds_args__poly_arg_vector_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___hlds__hlds_args__poly_arg_vector_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___hlds__hlds_args__poly_arg_vector_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(__Unify___hlds__hlds_args__proc_arg_vector_1_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__hlds_args_module41)
	MR_init_entry1(__Compare___hlds__hlds_args__poly_arg_vector_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___hlds__hlds_args__poly_arg_vector_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___hlds__hlds_args__poly_arg_vector_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(__Compare___hlds__hlds_args__proc_arg_vector_1_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___list__list_1_0);
MR_decl_entry(__Unify___maybe__maybe_1_0);

MR_BEGIN_MODULE(hlds__hlds_args_module42)
	MR_init_entry1(__Unify___hlds__hlds_args__proc_arg_vector_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___hlds__hlds_args__proc_arg_vector_1_0);
	MR_init_label9(__Unify___hlds__hlds_args__proc_arg_vector_1_0,4,6,8,10,12,14,16,20,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___hlds__hlds_args__proc_arg_vector_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r2 == MR_r3)) {
		MR_GOTO_LAB(__Unify___hlds__hlds_args__proc_arg_vector_1_0_i20);
	}
	MR_incr_sp(16);
	MR_sv(16) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(15) = MR_r1;
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
	MR_r2 = MR_tfield(0, MR_tempr1, 0);
	MR_r3 = MR_tfield(0, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(__Unify___list__list_1_0,
		__Unify___hlds__hlds_args__proc_arg_vector_1_0_i4);
MR_def_label(__Unify___hlds__hlds_args__proc_arg_vector_1_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___hlds__hlds_args__proc_arg_vector_1_0_i1);
	}
	MR_r1 = MR_sv(15);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(8);
	MR_np_call_localret_ent(__Unify___list__list_1_0,
		__Unify___hlds__hlds_args__proc_arg_vector_1_0_i6);
MR_def_label(__Unify___hlds__hlds_args__proc_arg_vector_1_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___hlds__hlds_args__proc_arg_vector_1_0_i1);
	}
	MR_r1 = MR_sv(15);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(9);
	MR_np_call_localret_ent(__Unify___list__list_1_0,
		__Unify___hlds__hlds_args__proc_arg_vector_1_0_i8);
MR_def_label(__Unify___hlds__hlds_args__proc_arg_vector_1_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___hlds__hlds_args__proc_arg_vector_1_0_i1);
	}
	MR_r1 = MR_sv(15);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(10);
	MR_np_call_localret_ent(__Unify___list__list_1_0,
		__Unify___hlds__hlds_args__proc_arg_vector_1_0_i10);
MR_def_label(__Unify___hlds__hlds_args__proc_arg_vector_1_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___hlds__hlds_args__proc_arg_vector_1_0_i1);
	}
	MR_r1 = MR_sv(15);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(11);
	MR_np_call_localret_ent(__Unify___list__list_1_0,
		__Unify___hlds__hlds_args__proc_arg_vector_1_0_i12);
MR_def_label(__Unify___hlds__hlds_args__proc_arg_vector_1_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___hlds__hlds_args__proc_arg_vector_1_0_i1);
	}
	MR_r1 = MR_sv(15);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(12);
	MR_np_call_localret_ent(__Unify___list__list_1_0,
		__Unify___hlds__hlds_args__proc_arg_vector_1_0_i14);
MR_def_label(__Unify___hlds__hlds_args__proc_arg_vector_1_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___hlds__hlds_args__proc_arg_vector_1_0_i1);
	}
	MR_r1 = MR_sv(15);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(13);
	MR_np_call_localret_ent(__Unify___list__list_1_0,
		__Unify___hlds__hlds_args__proc_arg_vector_1_0_i16);
MR_def_label(__Unify___hlds__hlds_args__proc_arg_vector_1_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___hlds__hlds_args__proc_arg_vector_1_0_i1);
	}
	MR_r1 = MR_sv(15);
	MR_r2 = MR_sv(7);
	MR_r3 = MR_sv(14);
	MR_succip_word = MR_sv(16);
	MR_decr_sp(16);
	MR_np_tailcall_ent(__Unify___maybe__maybe_1_0);
MR_def_label(__Unify___hlds__hlds_args__proc_arg_vector_1_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___hlds__hlds_args__proc_arg_vector_1_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(16);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Compare___list__list_1_0);
MR_decl_entry(__Compare___maybe__maybe_1_0);

MR_BEGIN_MODULE(hlds__hlds_args_module43)
	MR_init_entry1(__Compare___hlds__hlds_args__proc_arg_vector_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___hlds__hlds_args__proc_arg_vector_1_0);
	MR_init_label10(__Compare___hlds__hlds_args__proc_arg_vector_1_0,3,2,5,9,13,17,21,25,29,69)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___hlds__hlds_args__proc_arg_vector_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r2 == MR_r3)) {
		MR_GOTO_LAB(__Compare___hlds__hlds_args__proc_arg_vector_1_0_i3);
	}
	MR_incr_sp(16);
	MR_sv(16) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(15) = MR_r1;
	MR_GOTO_LAB(__Compare___hlds__hlds_args__proc_arg_vector_1_0_i2);
MR_def_label(__Compare___hlds__hlds_args__proc_arg_vector_1_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___hlds__hlds_args__proc_arg_vector_1_0,2)
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
	MR_r1 = MR_sv(15);
	MR_r2 = MR_tfield(0, MR_tempr3, 0);
	MR_r3 = MR_tfield(0, MR_tempr4, 0);
	}
	MR_np_call_localret_ent(__Compare___list__list_1_0,
		__Compare___hlds__hlds_args__proc_arg_vector_1_0_i5);
MR_def_label(__Compare___hlds__hlds_args__proc_arg_vector_1_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___hlds__hlds_args__proc_arg_vector_1_0_i69);
	}
	MR_r1 = MR_sv(15);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(8);
	MR_np_call_localret_ent(__Compare___list__list_1_0,
		__Compare___hlds__hlds_args__proc_arg_vector_1_0_i9);
MR_def_label(__Compare___hlds__hlds_args__proc_arg_vector_1_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___hlds__hlds_args__proc_arg_vector_1_0_i69);
	}
	MR_r1 = MR_sv(15);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(9);
	MR_np_call_localret_ent(__Compare___list__list_1_0,
		__Compare___hlds__hlds_args__proc_arg_vector_1_0_i13);
MR_def_label(__Compare___hlds__hlds_args__proc_arg_vector_1_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___hlds__hlds_args__proc_arg_vector_1_0_i69);
	}
	MR_r1 = MR_sv(15);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(10);
	MR_np_call_localret_ent(__Compare___list__list_1_0,
		__Compare___hlds__hlds_args__proc_arg_vector_1_0_i17);
MR_def_label(__Compare___hlds__hlds_args__proc_arg_vector_1_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___hlds__hlds_args__proc_arg_vector_1_0_i69);
	}
	MR_r1 = MR_sv(15);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(11);
	MR_np_call_localret_ent(__Compare___list__list_1_0,
		__Compare___hlds__hlds_args__proc_arg_vector_1_0_i21);
MR_def_label(__Compare___hlds__hlds_args__proc_arg_vector_1_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___hlds__hlds_args__proc_arg_vector_1_0_i69);
	}
	MR_r1 = MR_sv(15);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(12);
	MR_np_call_localret_ent(__Compare___list__list_1_0,
		__Compare___hlds__hlds_args__proc_arg_vector_1_0_i25);
MR_def_label(__Compare___hlds__hlds_args__proc_arg_vector_1_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___hlds__hlds_args__proc_arg_vector_1_0_i69);
	}
	MR_r1 = MR_sv(15);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(13);
	MR_np_call_localret_ent(__Compare___list__list_1_0,
		__Compare___hlds__hlds_args__proc_arg_vector_1_0_i29);
MR_def_label(__Compare___hlds__hlds_args__proc_arg_vector_1_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___hlds__hlds_args__proc_arg_vector_1_0_i69);
	}
	MR_r1 = MR_sv(15);
	MR_r2 = MR_sv(7);
	MR_r3 = MR_sv(14);
	MR_succip_word = MR_sv(16);
	MR_decr_sp(16);
	MR_np_tailcall_ent(__Compare___maybe__maybe_1_0);
MR_def_label(__Compare___hlds__hlds_args__proc_arg_vector_1_0,69)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(16);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

static void mercury__hlds__hlds_args_maybe_bunch_0(void)
{
	hlds__hlds_args_module0();
	hlds__hlds_args_module1();
	hlds__hlds_args_module2();
	hlds__hlds_args_module3();
	hlds__hlds_args_module4();
	hlds__hlds_args_module5();
	hlds__hlds_args_module6();
	hlds__hlds_args_module7();
	hlds__hlds_args_module8();
	hlds__hlds_args_module9();
	hlds__hlds_args_module10();
	hlds__hlds_args_module11();
	hlds__hlds_args_module12();
	hlds__hlds_args_module13();
	hlds__hlds_args_module14();
	hlds__hlds_args_module15();
	hlds__hlds_args_module16();
	hlds__hlds_args_module17();
	hlds__hlds_args_module18();
	hlds__hlds_args_module19();
	hlds__hlds_args_module20();
	hlds__hlds_args_module21();
	hlds__hlds_args_module22();
	hlds__hlds_args_module23();
	hlds__hlds_args_module24();
	hlds__hlds_args_module25();
	hlds__hlds_args_module26();
	hlds__hlds_args_module27();
	hlds__hlds_args_module28();
	hlds__hlds_args_module29();
	hlds__hlds_args_module30();
	hlds__hlds_args_module31();
	hlds__hlds_args_module32();
	hlds__hlds_args_module33();
	hlds__hlds_args_module34();
	hlds__hlds_args_module35();
	hlds__hlds_args_module36();
	hlds__hlds_args_module37();
	hlds__hlds_args_module38();
	hlds__hlds_args_module39();
}

static void mercury__hlds__hlds_args_maybe_bunch_1(void)
{
	hlds__hlds_args_module40();
	hlds__hlds_args_module41();
	hlds__hlds_args_module42();
	hlds__hlds_args_module43();
}

/* suppress gcc -Wmissing-decls warnings */
void mercury__hlds__hlds_args__init(void);
void mercury__hlds__hlds_args__init_type_tables(void);
void mercury__hlds__hlds_args__init_debugger(void);
#ifdef MR_DEEP_PROFILING
void mercury__hlds__hlds_args__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp);
#endif
#ifdef MR_RECORD_TERM_SIZES
void mercury__hlds__hlds_args__init_complexity_procs(void);
#endif
#ifdef MR_THREADSCOPE
void mercury__hlds__hlds_args__init_threadscope_string_table(void);
#endif

void mercury__hlds__hlds_args__init(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	mercury__hlds__hlds_args_maybe_bunch_0();
	mercury__hlds__hlds_args_maybe_bunch_1();
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_hlds__hlds_args__type_ctor_info_poly_arg_vector_1,
		hlds__hlds_args__poly_arg_vector_1_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_hlds__hlds_args__type_ctor_info_proc_arg_vector_1,
		hlds__hlds_args__proc_arg_vector_1_0);
	mercury__hlds__hlds_args__init_debugger();
}

void mercury__hlds__hlds_args__init_type_tables(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	{
		MR_register_type_ctor_info(
		&mercury_data_hlds__hlds_args__type_ctor_info_poly_arg_vector_1);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_hlds__hlds_args__type_ctor_info_proc_arg_vector_1);
	}
}


void mercury__hlds__hlds_args__init_debugger(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}

#ifdef MR_DEEP_PROFILING

void mercury__hlds__hlds_args__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp)
{
	MR_write_out_module_proc_reps_start(procrep_fp, &mercury_data__module_common_layout__hlds__hlds_args);
	MR_write_out_module_proc_reps_end(procrep_fp);
}

#endif

#ifdef MR_RECORD_TERM_SIZES

void mercury__hlds__hlds_args__init_complexity_procs(void)
{
}

#endif

#ifdef MR_THREADSCOPE

void mercury__hlds__hlds_args__init_threadscope_string_table(void)
{
}

#endif

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;
