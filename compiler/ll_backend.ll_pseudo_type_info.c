/*
** Automatically generated from `ll_pseudo_type_info.m'
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
INIT mercury__ll_backend__ll_pseudo_type_info__init
ENDINIT
*/

#define MR_ALLOW_RESET
#include "mercury_imp.h"
#line 134 "../library/io.int2"
#include "io.mh"

#line 27 "ll_backend.ll_pseudo_type_info.c"
#line 142 "../library/io.int2"
#include "string.mh"

#line 31 "ll_backend.ll_pseudo_type_info.c"
#line 87 "../library/table_builtin.int2"
#include "table_builtin.mh"

#line 35 "ll_backend.ll_pseudo_type_info.c"
#line 33 "../mdbcomp/mdbcomp.rtti_access.int2"
#include "mdbcomp.rtti_access.mh"

#line 39 "ll_backend.ll_pseudo_type_info.c"
#line 29 "../library/bitmap.int2"
#include "bitmap.mh"

#line 43 "ll_backend.ll_pseudo_type_info.c"
#line 28 "../library/time.int2"
#include "time.mh"

#line 47 "ll_backend.ll_pseudo_type_info.c"
#line 48 "ll_backend.ll_pseudo_type_info.c"
#include "ll_backend.ll_pseudo_type_info.mh"

#line 51 "ll_backend.ll_pseudo_type_info.c"
#line 52 "ll_backend.ll_pseudo_type_info.c"
#ifndef LL_BACKEND__LL_PSEUDO_TYPE_INFO_DECL_GUARD
#define LL_BACKEND__LL_PSEUDO_TYPE_INFO_DECL_GUARD

#line 56 "ll_backend.ll_pseudo_type_info.c"
#line 57 "ll_backend.ll_pseudo_type_info.c"

#endif
#line 60 "ll_backend.ll_pseudo_type_info.c"

#ifdef _MSC_VER
#define MR_STATIC_LINKAGE extern
#else
#define MR_STATIC_LINKAGE static
#endif

struct mercury_type_0 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[4];
};
MR_STATIC_LINKAGE const struct mercury_type_0 mercury_common_0[];

struct mercury_type_1 {
	MR_Word * f1;
	MR_Code * f2;
	MR_Integer f3;
};
MR_STATIC_LINKAGE const struct mercury_type_1 mercury_common_1[];
MR_decl_label6(ll_backend__ll_pseudo_type_info__IntroducedFrom__pred__convert_compound_pseudo_type_info__149__1_4_0, 3,31,10,11,30,8)
MR_decl_label5(ll_backend__ll_pseudo_type_info__IntroducedFrom__pred__convert_compound_type_info__172__1_4_0, 23,7,8,22,5)
MR_decl_label7(ll_backend__ll_pseudo_type_info__construct_typed_llds_pseudo_type_info_7_0, 2,5,6,8,9,10,12)
MR_decl_label3(ll_backend__ll_pseudo_type_info__convert_compound_pseudo_type_info_7_0, 2,3,4)
MR_decl_label3(ll_backend__ll_pseudo_type_info__convert_compound_type_info_7_0, 2,3,4)
MR_decl_label6(ll_backend__ll_pseudo_type_info__convert_pseudo_type_info_5_0, 4,5,18,8,9,11)
MR_decl_static(ll_backend__ll_pseudo_type_info__convert_compound_pseudo_type_info_7_0)
MR_decl_static(ll_backend__ll_pseudo_type_info__convert_pseudo_type_info_5_0)
MR_def_extern_entry(ll_backend__ll_pseudo_type_info__construct_typed_llds_pseudo_type_info_7_0)
MR_def_extern_entry(ll_backend__ll_pseudo_type_info__construct_llds_pseudo_type_info_6_0)
MR_decl_static(ll_backend__ll_pseudo_type_info__convert_compound_type_info_7_0)
MR_decl_static(ll_backend__ll_pseudo_type_info__IntroducedFrom__pred__convert_compound_pseudo_type_info__149__1_4_0)
MR_decl_static(ll_backend__ll_pseudo_type_info__IntroducedFrom__pred__convert_compound_type_info__172__1_4_0)

static const MR_UserClosureId
mercury_data__closure_layout__ll_backend__ll_pseudo_type_info__convert_compound_pseudo_type_info_7_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_backend_libs__rtti__type_ctor_info_rtti_maybe_pseudo_type_info_0;
extern const MR_TypeCtorInfo_Struct mercury_data_ll_backend__llds__type_ctor_info_rval_0;
extern const MR_TypeCtorInfo_Struct mercury_data_ll_backend__global_data__type_ctor_info_static_cell_info_0;
static const MR_UserClosureId
mercury_data__closure_layout__ll_backend__ll_pseudo_type_info__convert_compound_type_info_7_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_backend_libs__rtti__type_ctor_info_rtti_type_info_0;
static const struct mercury_type_0 mercury_common_0[2] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__ll_backend__ll_pseudo_type_info__convert_compound_pseudo_type_info_7_0_1,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_CTOR0_ADDR(backend_libs__rtti, rtti_maybe_pseudo_type_info),
MR_CTOR0_ADDR(ll_backend__llds, rval),
MR_CTOR0_ADDR(ll_backend__global_data, static_cell_info),
MR_CTOR0_ADDR(ll_backend__global_data, static_cell_info)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__ll_backend__ll_pseudo_type_info__convert_compound_type_info_7_0_1,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_CTOR0_ADDR(backend_libs__rtti, rtti_type_info),
MR_CTOR0_ADDR(ll_backend__llds, rval),
MR_CTOR0_ADDR(ll_backend__global_data, static_cell_info),
MR_CTOR0_ADDR(ll_backend__global_data, static_cell_info)
}
},
};

static const struct mercury_type_1 mercury_common_1[2] =
{
{
MR_COMMON(0,0),
MR_ENTRY_AP(ll_backend__ll_pseudo_type_info__IntroducedFrom__pred__convert_compound_pseudo_type_info__149__1_4_0),
0
},
{
MR_COMMON(0,1),
MR_ENTRY_AP(ll_backend__ll_pseudo_type_info__IntroducedFrom__pred__convert_compound_type_info__172__1_4_0),
0
},
};

static const MR_UserClosureId
mercury_data__closure_layout__ll_backend__ll_pseudo_type_info__convert_compound_pseudo_type_info_7_0_1 = {
{
MR_PREDICATE,
"ll_backend.ll_pseudo_type_info",
"ll_backend.ll_pseudo_type_info",
"lambda_ll_pseudo_type_info_m_149",
4,
0
},
"ll_backend.ll_pseudo_type_info",
"ll_pseudo_type_info.m",
145,
"d1;c15;"
};

static const MR_UserClosureId
mercury_data__closure_layout__ll_backend__ll_pseudo_type_info__convert_compound_type_info_7_0_1 = {
{
MR_PREDICATE,
"ll_backend.ll_pseudo_type_info",
"ll_backend.ll_pseudo_type_info",
"lambda_ll_pseudo_type_info_m_172",
4,
0
},
"ll_backend.ll_pseudo_type_info",
"ll_pseudo_type_info.m",
171,
"d1;c16;"
};

extern const MR_TypeCtorInfo_Struct mercury_data_backend_libs__rtti__type_ctor_info_rtti_maybe_pseudo_type_info_0;
extern const MR_TypeCtorInfo_Struct mercury_data_ll_backend__llds__type_ctor_info_rval_0;
extern const MR_TypeCtorInfo_Struct mercury_data_ll_backend__global_data__type_ctor_info_static_cell_info_0;
MR_decl_entry(list__map_foldl_5_1);
MR_decl_entry(list__append_3_1);
MR_decl_entry(ll_backend__global_data__add_scalar_static_cell_natural_types_4_0);

MR_BEGIN_MODULE(ll_backend__ll_pseudo_type_info_module0)
	MR_init_entry1(ll_backend__ll_pseudo_type_info__convert_compound_pseudo_type_info_7_0);
	MR_init_label3(ll_backend__ll_pseudo_type_info__convert_compound_pseudo_type_info_7_0,2,3,4)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__ll_pseudo_type_info__convert_compound_pseudo_type_info_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 16);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 4;
	MR_tfield(3, MR_tempr1, 1) = MR_tempr2;
	MR_tfield(3, MR_tempr1, 2) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr3, 3, (MR_Integer) 2);
	MR_sv(2) = MR_tempr3;
	MR_tfield(3, MR_tempr3, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr3, 1) = MR_tempr1;
	MR_sv(1) = MR_r2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(backend_libs__rtti, rtti_maybe_pseudo_type_info);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, rval);
	MR_r5 = MR_r3;
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(ll_backend__global_data, static_cell_info);
	MR_r6 = MR_r4;
	MR_r4 = (MR_Word) MR_TAG_COMMON(0,1,0);
	}
	MR_np_call_localret_ent(list__map_foldl_5_1,
		ll_backend__ll_pseudo_type_info__convert_compound_pseudo_type_info_7_0_i2);
MR_def_label(ll_backend__ll_pseudo_type_info__convert_compound_pseudo_type_info_7_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	MR_r3 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, rval);
	}
	MR_np_call_localret_ent(list__append_3_1,
		ll_backend__ll_pseudo_type_info__convert_compound_pseudo_type_info_7_0_i3);
MR_def_label(ll_backend__ll_pseudo_type_info__convert_compound_pseudo_type_info_7_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(1);
	}
	MR_np_call_localret_ent(ll_backend__global_data__add_scalar_static_cell_natural_types_4_0,
		ll_backend__ll_pseudo_type_info__convert_compound_pseudo_type_info_7_0_i4);
MR_def_label(ll_backend__ll_pseudo_type_info__convert_compound_pseudo_type_info_7_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 4;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_tfield(3, MR_tempr1, 2) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr2, 1) = MR_tempr1;
	MR_r1 = MR_r2;
	MR_r2 = MR_tempr2;
	MR_r3 = (MR_Integer) 11;
	MR_decr_sp_and_return(3);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(list__length_2_0);
MR_decl_entry(fn__backend_libs__rtti__var_arity_id_to_rtti_type_ctor_1_0);

MR_BEGIN_MODULE(ll_backend__ll_pseudo_type_info_module1)
	MR_init_entry1(ll_backend__ll_pseudo_type_info__convert_pseudo_type_info_5_0);
	MR_init_label6(ll_backend__ll_pseudo_type_info__convert_pseudo_type_info_5_0,4,5,18,8,9,11)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__ll_pseudo_type_info__convert_pseudo_type_info_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r1),
		MR_LABEL_AP(ll_backend__ll_pseudo_type_info__convert_pseudo_type_info_5_0_i4) MR_AND
		MR_LABEL_AP(ll_backend__ll_pseudo_type_info__convert_pseudo_type_info_5_0_i5) MR_AND
		MR_LABEL_AP(ll_backend__ll_pseudo_type_info__convert_pseudo_type_info_5_0_i18) MR_AND
		MR_LABEL_AP(ll_backend__ll_pseudo_type_info__convert_pseudo_type_info_5_0_i11));
MR_def_label(ll_backend__ll_pseudo_type_info__convert_pseudo_type_info_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 11;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = MR_ctfield(0, MR_r1, 0);
	MR_tfield(0, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 4;
	MR_tfield(3, MR_tempr2, 1) = MR_tempr1;
	MR_tfield(3, MR_tempr2, 2) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr1, 1) = MR_tempr2;
	MR_r1 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r3 = (MR_Integer) 11;
	MR_proceed();
	}
MR_def_label(ll_backend__ll_pseudo_type_info__convert_pseudo_type_info_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_ctfield(1, MR_r1, 0);
	MR_r4 = MR_r2;
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_r3 = MR_ctfield(1, MR_tempr1, 1);
	MR_np_tailcall_ent(ll_backend__ll_pseudo_type_info__convert_compound_pseudo_type_info_7_0);
	}
MR_def_label(ll_backend__ll_pseudo_type_info__convert_pseudo_type_info_5_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_ctfield(2, MR_r1, 0);
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_ctfield(2, MR_r1, 1);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(backend_libs__rtti, rtti_maybe_pseudo_type_info);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(list__length_2_0,
		ll_backend__ll_pseudo_type_info__convert_pseudo_type_info_5_0_i8);
MR_def_label(ll_backend__ll_pseudo_type_info__convert_pseudo_type_info_5_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr2, 1) = MR_tempr1;
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_tempr2;
	}
	MR_np_call_localret_ent(fn__backend_libs__rtti__var_arity_id_to_rtti_type_ctor_1_0,
		ll_backend__ll_pseudo_type_info__convert_pseudo_type_info_5_0_i9);
MR_def_label(ll_backend__ll_pseudo_type_info__convert_pseudo_type_info_5_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(2);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(ll_backend__ll_pseudo_type_info__convert_compound_pseudo_type_info_7_0);
	}
MR_def_label(ll_backend__ll_pseudo_type_info__convert_pseudo_type_info_5_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_ctfield(3, MR_r1, 0);
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr2, 1) = MR_tempr1;
	MR_r1 = MR_r2;
	MR_r2 = MR_tempr2;
	MR_r3 = (MR_Integer) 7;
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(backend_libs__pseudo_type_info__construct_pseudo_type_info_4_0);

MR_BEGIN_MODULE(ll_backend__ll_pseudo_type_info_module2)
	MR_init_entry1(ll_backend__ll_pseudo_type_info__construct_typed_llds_pseudo_type_info_7_0);
	MR_init_label7(ll_backend__ll_pseudo_type_info__construct_typed_llds_pseudo_type_info_7_0,2,5,6,8,9,10,12)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__ll_backend__ll_pseudo_type_info__construct_typed_llds_pseudo_type_info_7_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r4;
	MR_np_call_localret_ent(backend_libs__pseudo_type_info__construct_pseudo_type_info_4_0,
		ll_backend__ll_pseudo_type_info__construct_typed_llds_pseudo_type_info_7_0_i2);
MR_def_label(ll_backend__ll_pseudo_type_info__construct_typed_llds_pseudo_type_info_7_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r1),
		MR_LABEL_AP(ll_backend__ll_pseudo_type_info__construct_typed_llds_pseudo_type_info_7_0_i5) MR_AND
		MR_LABEL_AP(ll_backend__ll_pseudo_type_info__construct_typed_llds_pseudo_type_info_7_0_i6) MR_AND
		MR_LABEL_AP(ll_backend__ll_pseudo_type_info__construct_typed_llds_pseudo_type_info_7_0_i8) MR_AND
		MR_LABEL_AP(ll_backend__ll_pseudo_type_info__construct_typed_llds_pseudo_type_info_7_0_i12));
MR_def_label(ll_backend__ll_pseudo_type_info__construct_typed_llds_pseudo_type_info_7_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 11;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = MR_ctfield(0, MR_r1, 0);
	MR_tfield(0, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 4;
	MR_tfield(3, MR_tempr2, 1) = MR_tempr1;
	MR_tfield(3, MR_tempr2, 2) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr3, 3, (MR_Integer) 2);
	MR_r2 = MR_tempr3;
	MR_tfield(3, MR_tempr3, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr3, 1) = MR_tempr2;
	MR_r3 = (MR_Integer) 11;
	MR_r1 = MR_sv(1);
	MR_decr_sp_and_return(4);
	}
MR_def_label(ll_backend__ll_pseudo_type_info__construct_typed_llds_pseudo_type_info_7_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_ctfield(1, MR_r1, 0);
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_r3 = MR_ctfield(1, MR_tempr1, 1);
	MR_r4 = MR_sv(1);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(ll_backend__ll_pseudo_type_info__convert_compound_pseudo_type_info_7_0);
	}
MR_def_label(ll_backend__ll_pseudo_type_info__construct_typed_llds_pseudo_type_info_7_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_ctfield(2, MR_r1, 0);
	MR_sv(3) = MR_ctfield(2, MR_r1, 1);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(backend_libs__rtti, rtti_maybe_pseudo_type_info);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(list__length_2_0,
		ll_backend__ll_pseudo_type_info__construct_typed_llds_pseudo_type_info_7_0_i9);
MR_def_label(ll_backend__ll_pseudo_type_info__construct_typed_llds_pseudo_type_info_7_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr2, 1) = MR_tempr1;
	MR_r1 = MR_sv(2);
	MR_sv(2) = MR_tempr2;
	}
	MR_np_call_localret_ent(fn__backend_libs__rtti__var_arity_id_to_rtti_type_ctor_1_0,
		ll_backend__ll_pseudo_type_info__construct_typed_llds_pseudo_type_info_7_0_i10);
MR_def_label(ll_backend__ll_pseudo_type_info__construct_typed_llds_pseudo_type_info_7_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(1);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(ll_backend__ll_pseudo_type_info__convert_compound_pseudo_type_info_7_0);
	}
MR_def_label(ll_backend__ll_pseudo_type_info__construct_typed_llds_pseudo_type_info_7_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_ctfield(3, MR_r1, 0);
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 2);
	MR_r2 = MR_tempr2;
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr2, 1) = MR_tempr1;
	MR_r3 = (MR_Integer) 7;
	MR_r1 = MR_sv(1);
	MR_decr_sp_and_return(4);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__ll_pseudo_type_info_module3)
	MR_init_entry1(ll_backend__ll_pseudo_type_info__construct_llds_pseudo_type_info_6_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__ll_backend__ll_pseudo_type_info__construct_llds_pseudo_type_info_6_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(ll_backend__ll_pseudo_type_info__construct_typed_llds_pseudo_type_info_7_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

extern const MR_TypeCtorInfo_Struct mercury_data_backend_libs__rtti__type_ctor_info_rtti_type_info_0;

MR_BEGIN_MODULE(ll_backend__ll_pseudo_type_info_module4)
	MR_init_entry1(ll_backend__ll_pseudo_type_info__convert_compound_type_info_7_0);
	MR_init_label3(ll_backend__ll_pseudo_type_info__convert_compound_type_info_7_0,2,3,4)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__ll_pseudo_type_info__convert_compound_type_info_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 10;
	MR_tfield(3, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr3, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr3, 0) = MR_r1;
	MR_tfield(0, MR_tempr3, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_tempr3;
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 4;
	MR_tfield(3, MR_tempr2, 1) = MR_tempr1;
	MR_tfield(3, MR_tempr2, 2) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr4, 3, (MR_Integer) 2);
	MR_sv(2) = MR_tempr4;
	MR_tfield(3, MR_tempr4, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr4, 1) = MR_tempr2;
	MR_sv(1) = MR_r2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(backend_libs__rtti, rtti_type_info);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, rval);
	MR_r5 = MR_r3;
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(ll_backend__global_data, static_cell_info);
	MR_r6 = MR_r4;
	MR_r4 = (MR_Word) MR_TAG_COMMON(0,1,1);
	}
	MR_np_call_localret_ent(list__map_foldl_5_1,
		ll_backend__ll_pseudo_type_info__convert_compound_type_info_7_0_i2);
MR_def_label(ll_backend__ll_pseudo_type_info__convert_compound_type_info_7_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	MR_r3 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, rval);
	}
	MR_np_call_localret_ent(list__append_3_1,
		ll_backend__ll_pseudo_type_info__convert_compound_type_info_7_0_i3);
MR_def_label(ll_backend__ll_pseudo_type_info__convert_compound_type_info_7_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(1);
	}
	MR_np_call_localret_ent(ll_backend__global_data__add_scalar_static_cell_natural_types_4_0,
		ll_backend__ll_pseudo_type_info__convert_compound_type_info_7_0_i4);
MR_def_label(ll_backend__ll_pseudo_type_info__convert_compound_type_info_7_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 4;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_tfield(3, MR_tempr1, 2) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr2, 1) = MR_tempr1;
	MR_r1 = MR_r2;
	MR_r2 = MR_tempr2;
	MR_r3 = (MR_Integer) 11;
	MR_decr_sp_and_return(3);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__ll_pseudo_type_info_module5)
	MR_init_entry1(ll_backend__ll_pseudo_type_info__IntroducedFrom__pred__convert_compound_pseudo_type_info__149__1_4_0);
	MR_init_label6(ll_backend__ll_pseudo_type_info__IntroducedFrom__pred__convert_compound_pseudo_type_info__149__1_4_0,3,31,10,11,30,8)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__ll_pseudo_type_info__IntroducedFrom__pred__convert_compound_pseudo_type_info__149__1_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,0)) {
		MR_GOTO_LAB(ll_backend__ll_pseudo_type_info__IntroducedFrom__pred__convert_compound_pseudo_type_info__149__1_4_0_i3);
	}
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_r1 = MR_ctfield(0, MR_r1, 0);
	MR_np_call_localret_ent(ll_backend__ll_pseudo_type_info__convert_pseudo_type_info_5_0,
		ll_backend__ll_pseudo_type_info__IntroducedFrom__pred__convert_compound_pseudo_type_info__149__1_4_0_i8);
MR_def_label(ll_backend__ll_pseudo_type_info__IntroducedFrom__pred__convert_compound_pseudo_type_info__149__1_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr1 = MR_ctfield(1, MR_r1, 0);
	MR_r3 = MR_tempr1;
	if (MR_PTAG_TEST(MR_tempr1,1)) {
		MR_GOTO_LAB(ll_backend__ll_pseudo_type_info__IntroducedFrom__pred__convert_compound_pseudo_type_info__149__1_4_0_i30);
	}
	if (MR_PTAG_TEST(MR_tempr1,2)) {
		MR_GOTO_LAB(ll_backend__ll_pseudo_type_info__IntroducedFrom__pred__convert_compound_pseudo_type_info__149__1_4_0_i31);
	}
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 10;
	MR_tfield(3, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr3, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr3, 0) = MR_ctfield(0, MR_tempr1, 0);
	MR_tfield(0, MR_tempr3, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr4, 0) = MR_tempr3;
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 4;
	MR_tfield(3, MR_tempr2, 1) = MR_tempr4;
	MR_tfield(3, MR_tempr2, 2) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_r1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_r1, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_r1, 1) = MR_tempr2;
	MR_proceed();
	}
MR_def_label(ll_backend__ll_pseudo_type_info__IntroducedFrom__pred__convert_compound_pseudo_type_info__149__1_4_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(2) = MR_ctfield(2, MR_tempr1, 0);
	MR_sv(3) = MR_ctfield(2, MR_tempr1, 1);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(backend_libs__rtti, rtti_type_info);
	MR_r2 = MR_sv(3);
	}
	MR_np_call_localret_ent(list__length_2_0,
		ll_backend__ll_pseudo_type_info__IntroducedFrom__pred__convert_compound_pseudo_type_info__149__1_4_0_i10);
MR_def_label(ll_backend__ll_pseudo_type_info__IntroducedFrom__pred__convert_compound_pseudo_type_info__149__1_4_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr2, 1) = MR_tempr1;
	MR_r1 = MR_sv(2);
	MR_sv(2) = MR_tempr2;
	}
	MR_np_call_localret_ent(fn__backend_libs__rtti__var_arity_id_to_rtti_type_ctor_1_0,
		ll_backend__ll_pseudo_type_info__IntroducedFrom__pred__convert_compound_pseudo_type_info__149__1_4_0_i11);
MR_def_label(ll_backend__ll_pseudo_type_info__IntroducedFrom__pred__convert_compound_pseudo_type_info__149__1_4_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(1);
	}
	MR_np_call_localret_ent(ll_backend__ll_pseudo_type_info__convert_compound_type_info_7_0,
		ll_backend__ll_pseudo_type_info__IntroducedFrom__pred__convert_compound_pseudo_type_info__149__1_4_0_i8);
MR_def_label(ll_backend__ll_pseudo_type_info__IntroducedFrom__pred__convert_compound_pseudo_type_info__149__1_4_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_r1 = MR_ctfield(1, MR_r3, 0);
	MR_r4 = MR_r2;
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_r3 = MR_ctfield(1, MR_r3, 1);
	MR_np_call_localret_ent(ll_backend__ll_pseudo_type_info__convert_compound_type_info_7_0,
		ll_backend__ll_pseudo_type_info__IntroducedFrom__pred__convert_compound_pseudo_type_info__149__1_4_0_i8);
MR_def_label(ll_backend__ll_pseudo_type_info__IntroducedFrom__pred__convert_compound_pseudo_type_info__149__1_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_decr_sp_and_return(4);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__ll_pseudo_type_info_module6)
	MR_init_entry1(ll_backend__ll_pseudo_type_info__IntroducedFrom__pred__convert_compound_type_info__172__1_4_0);
	MR_init_label5(ll_backend__ll_pseudo_type_info__IntroducedFrom__pred__convert_compound_type_info__172__1_4_0,23,7,8,22,5)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__ll_pseudo_type_info__IntroducedFrom__pred__convert_compound_type_info__172__1_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TEST(MR_r1,1)) {
		MR_GOTO_LAB(ll_backend__ll_pseudo_type_info__IntroducedFrom__pred__convert_compound_type_info__172__1_4_0_i22);
	}
	if (MR_PTAG_TEST(MR_r1,2)) {
		MR_GOTO_LAB(ll_backend__ll_pseudo_type_info__IntroducedFrom__pred__convert_compound_type_info__172__1_4_0_i23);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 10;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = MR_ctfield(0, MR_r1, 0);
	MR_tfield(0, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 4;
	MR_tfield(3, MR_tempr2, 1) = MR_tempr1;
	MR_tfield(3, MR_tempr2, 2) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_r1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_r1, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_r1, 1) = MR_tempr2;
	MR_proceed();
	}
MR_def_label(ll_backend__ll_pseudo_type_info__IntroducedFrom__pred__convert_compound_type_info__172__1_4_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_ctfield(2, MR_r1, 0);
	MR_sv(3) = MR_ctfield(2, MR_r1, 1);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(backend_libs__rtti, rtti_type_info);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(list__length_2_0,
		ll_backend__ll_pseudo_type_info__IntroducedFrom__pred__convert_compound_type_info__172__1_4_0_i7);
MR_def_label(ll_backend__ll_pseudo_type_info__IntroducedFrom__pred__convert_compound_type_info__172__1_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr2, 1) = MR_tempr1;
	MR_r1 = MR_sv(2);
	MR_sv(2) = MR_tempr2;
	}
	MR_np_call_localret_ent(fn__backend_libs__rtti__var_arity_id_to_rtti_type_ctor_1_0,
		ll_backend__ll_pseudo_type_info__IntroducedFrom__pred__convert_compound_type_info__172__1_4_0_i8);
MR_def_label(ll_backend__ll_pseudo_type_info__IntroducedFrom__pred__convert_compound_type_info__172__1_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(1);
	}
	MR_np_call_localret_ent(ll_backend__ll_pseudo_type_info__convert_compound_type_info_7_0,
		ll_backend__ll_pseudo_type_info__IntroducedFrom__pred__convert_compound_type_info__172__1_4_0_i5);
MR_def_label(ll_backend__ll_pseudo_type_info__IntroducedFrom__pred__convert_compound_type_info__172__1_4_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_ctfield(1, MR_r1, 0);
	MR_r4 = MR_r2;
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_r3 = MR_ctfield(1, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(ll_backend__ll_pseudo_type_info__convert_compound_type_info_7_0,
		ll_backend__ll_pseudo_type_info__IntroducedFrom__pred__convert_compound_type_info__172__1_4_0_i5);
MR_def_label(ll_backend__ll_pseudo_type_info__IntroducedFrom__pred__convert_compound_type_info__172__1_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_decr_sp_and_return(4);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

static void mercury__ll_backend__ll_pseudo_type_info_maybe_bunch_0(void)
{
	ll_backend__ll_pseudo_type_info_module0();
	ll_backend__ll_pseudo_type_info_module1();
	ll_backend__ll_pseudo_type_info_module2();
	ll_backend__ll_pseudo_type_info_module3();
	ll_backend__ll_pseudo_type_info_module4();
	ll_backend__ll_pseudo_type_info_module5();
	ll_backend__ll_pseudo_type_info_module6();
}

/* suppress gcc -Wmissing-decls warnings */
void mercury__ll_backend__ll_pseudo_type_info__init(void);
void mercury__ll_backend__ll_pseudo_type_info__init_type_tables(void);
void mercury__ll_backend__ll_pseudo_type_info__init_debugger(void);
#ifdef MR_DEEP_PROFILING
void mercury__ll_backend__ll_pseudo_type_info__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp);
#endif
#ifdef MR_RECORD_TERM_SIZES
void mercury__ll_backend__ll_pseudo_type_info__init_complexity_procs(void);
#endif

void mercury__ll_backend__ll_pseudo_type_info__init(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	mercury__ll_backend__ll_pseudo_type_info_maybe_bunch_0();
	mercury__ll_backend__ll_pseudo_type_info__init_debugger();
}

void mercury__ll_backend__ll_pseudo_type_info__init_type_tables(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}


void mercury__ll_backend__ll_pseudo_type_info__init_debugger(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}

#ifdef MR_DEEP_PROFILING

void mercury__ll_backend__ll_pseudo_type_info__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp)
{
	MR_write_out_module_proc_reps_start(procrep_fp, &mercury_data__module_common_layout__ll_backend__ll_pseudo_type_info);
	MR_write_out_module_proc_reps_end(procrep_fp);
}

#endif

#ifdef MR_RECORD_TERM_SIZES

void mercury__ll_backend__ll_pseudo_type_info__init_complexity_procs(void)
{
}

#endif

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;
