/*
** Automatically generated from `frame.m'
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
INIT mercury__mdb__frame__init
ENDINIT
*/

#define MR_ALLOW_RESET
#include "mercury_imp.h"
#line 3 "mdb.int0"
#include "mdb.mh"

#line 27 "mdb.frame.c"
#line 136 "../library/io.int2"
#include "io.mh"

#line 31 "mdb.frame.c"
#line 144 "../library/io.int2"
#include "string.mh"

#line 35 "mdb.frame.c"
#line 29 "../library/bitmap.int2"
#include "bitmap.mh"

#line 39 "mdb.frame.c"
#line 28 "../library/time.int2"
#include "time.mh"

#line 43 "mdb.frame.c"
#line 31 "../library/array.int2"
#include "array.mh"

#line 47 "mdb.frame.c"
#line 48 "mdb.frame.c"
#include "mdb.frame.mh"

#line 51 "mdb.frame.c"
#line 52 "mdb.frame.c"
#ifndef MDB__FRAME_DECL_GUARD
#define MDB__FRAME_DECL_GUARD

#line 56 "mdb.frame.c"
#line 57 "mdb.frame.c"

#endif
#line 60 "mdb.frame.c"

#ifdef _MSC_VER
#define MR_STATIC_LINKAGE extern
#else
#define MR_STATIC_LINKAGE static
#endif

struct mercury_type_0 {
	MR_Word * f1;
	MR_Word * f2;
	MR_Integer f3;
	MR_Word * f4;
	MR_Word * f5;
};
MR_STATIC_LINKAGE const struct mercury_type_0 mercury_common_0[];

struct mercury_type_1 {
	MR_Word * f1;
	MR_Code * f2;
	MR_Integer f3;
};
MR_STATIC_LINKAGE const struct mercury_type_1 mercury_common_1[];

struct mercury_type_2 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[3];
};
MR_STATIC_LINKAGE const struct mercury_type_2 mercury_common_2[];

struct mercury_type_3 {
	MR_Word * f1[3];
};
MR_STATIC_LINKAGE const struct mercury_type_3 mercury_common_3[];

extern const MR_TypeCtorInfo_Struct
	mercury_data_mdb__frame__type_ctor_info_frame_0,
	mercury_data_mdb__frame__type_ctor_info_clip_rect_0;
MR_decl_label2(mdb__frame__add_right_padding_2_0, 2,3)
MR_decl_label1(fn__mdb__frame__clip_2_0, 2)
MR_decl_label8(fn__mdb__frame__hglue_2_0, 2,3,5,6,4,8,9,7)
MR_decl_label6(fn__mdb__frame__hglue_2_0, 11,12,13,14,15,16)
MR_decl_label1(fn__mdb__frame__hsize_1_0, 2)
MR_def_extern_entry(fn__mdb__frame__hsize_1_0)
MR_def_extern_entry(fn__mdb__frame__vsize_1_0)
MR_def_extern_entry(fn__mdb__frame__from_string_1_0)
MR_def_extern_entry(fn__mdb__frame__vglue_2_0)
MR_def_extern_entry(fn__mdb__frame__hglue_2_0)
MR_def_extern_entry(fn__mdb__frame__clip_2_0)
MR_decl_static(mdb__frame__add_right_padding_2_0)
MR_decl_static(mdb__frame__subtract_3_0)
MR_decl_static(mdb__frame__left_3_0)
MR_def_extern_entry(__Unify___mdb__frame__clip_rect_0_0)
MR_def_extern_entry(__Compare___mdb__frame__clip_rect_0_0)
MR_def_extern_entry(__Unify___mdb__frame__frame_0_0)
MR_def_extern_entry(__Compare___mdb__frame__frame_0_0)

static const MR_UserClosureId
mercury_data__closure_layout__fn__mdb__frame__hsize_1_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_string_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;
static const MR_UserClosureId
mercury_data__closure_layout__fn__mdb__frame__hglue_2_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__fn__mdb__frame__hglue_2_0_2;
static const MR_UserClosureId
mercury_data__closure_layout__fn__mdb__frame__hglue_2_0_3;
static const MR_UserClosureId
mercury_data__closure_layout__fn__mdb__frame__hglue_2_0_6;
static const struct mercury_type_0 mercury_common_0[5] =
{
{
(MR_Word *) &mercury_data__closure_layout__fn__mdb__frame__hsize_1_0_1,
(MR_Word *) (MR_Integer) 0,
2,
MR_STRING_CTOR_ADDR,
MR_INT_CTOR_ADDR
},
{
(MR_Word *) &mercury_data__closure_layout__fn__mdb__frame__hglue_2_0_1,
(MR_Word *) (MR_Integer) 0,
2,
MR_STRING_CTOR_ADDR,
MR_INT_CTOR_ADDR
},
{
(MR_Word *) &mercury_data__closure_layout__fn__mdb__frame__hglue_2_0_2,
(MR_Word *) (MR_Integer) 0,
2,
MR_STRING_CTOR_ADDR,
MR_INT_CTOR_ADDR
},
{
(MR_Word *) &mercury_data__closure_layout__fn__mdb__frame__hglue_2_0_3,
(MR_Word *) (MR_Integer) 0,
2,
MR_STRING_CTOR_ADDR,
MR_INT_CTOR_ADDR
},
{
(MR_Word *) &mercury_data__closure_layout__fn__mdb__frame__hglue_2_0_6,
(MR_Word *) (MR_Integer) 0,
2,
MR_COMMON(3,1),
MR_STRING_CTOR_ADDR
},
};

MR_decl_entry(fn__string__length_1_0);
MR_decl_entry(int__max_3_0);
MR_decl_entry(string__append_3_2);
static const struct mercury_type_1 mercury_common_1[8] =
{
{
MR_COMMON(0,0),
MR_ENTRY_AP(fn__string__length_1_0),
0
},
{
MR_COMMON(2,0),
MR_ENTRY_AP(int__max_3_0),
0
},
{
MR_COMMON(0,1),
MR_ENTRY_AP(fn__string__length_1_0),
0
},
{
MR_COMMON(0,2),
MR_ENTRY_AP(fn__string__length_1_0),
0
},
{
MR_COMMON(0,3),
MR_ENTRY_AP(fn__string__length_1_0),
0
},
{
MR_COMMON(2,1),
MR_ENTRY_AP(int__max_3_0),
0
},
{
MR_COMMON(0,4),
MR_ENTRY_AP(mdb__frame__add_right_padding_2_0),
0
},
{
MR_COMMON(2,3),
MR_ENTRY_AP(string__append_3_2),
0
},
};

static const MR_UserClosureId
mercury_data__closure_layout__fn__mdb__frame__hsize_1_0_2;
static const MR_UserClosureId
mercury_data__closure_layout__fn__mdb__frame__hglue_2_0_4;
static const MR_UserClosureId
mercury_data__closure_layout__fn__mdb__frame__hglue_2_0_5;
static const MR_UserClosureId
mercury_data__closure_layout__fn__mdb__frame__hglue_2_0_7;
static const MR_UserClosureId
mercury_data__closure_layout__fn__mdb__frame__clip_2_0_1;
static const struct mercury_type_2 mercury_common_2[5] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__fn__mdb__frame__hsize_1_0_2,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_INT_CTOR_ADDR,
MR_INT_CTOR_ADDR,
MR_INT_CTOR_ADDR
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__fn__mdb__frame__hglue_2_0_4,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_INT_CTOR_ADDR,
MR_INT_CTOR_ADDR,
MR_INT_CTOR_ADDR
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__fn__mdb__frame__hglue_2_0_5,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_INT_CTOR_ADDR,
MR_INT_CTOR_ADDR,
MR_INT_CTOR_ADDR
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__fn__mdb__frame__hglue_2_0_7,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_STRING_CTOR_ADDR,
MR_STRING_CTOR_ADDR,
MR_STRING_CTOR_ADDR
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__fn__mdb__frame__clip_2_0_1,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_INT_CTOR_ADDR,
MR_STRING_CTOR_ADDR,
MR_STRING_CTOR_ADDR
}
},
};

extern const MR_TypeCtorInfo_Struct mercury_data_pair__type_ctor_info_pair_2;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_string_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_string_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;
static const struct mercury_type_3 mercury_common_3[2] =
{
{
{
MR_CTOR_ADDR(pair, pair, 2),
MR_STRING_CTOR_ADDR,
MR_INT_CTOR_ADDR
}
},
{
{
MR_CTOR_ADDR(pair, pair, 2),
MR_STRING_CTOR_ADDR,
MR_INT_CTOR_ADDR
}
},
};
extern const MR_TypeCtorInfo_Struct mercury_data_list__type_ctor_info_list_1;

static const MR_FA_TypeInfo_Struct1 mercury_data_list__ti_list_1builtin__type_ctor_info_string_0 = {
	&mercury_data_list__type_ctor_info_list_1,
{	(MR_TypeInfo) &mercury_data_builtin__type_ctor_info_string_0
}};

const MR_TypeCtorInfo_Struct mercury_data_mdb__frame__type_ctor_info_frame_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_EQUIV_GROUND,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___mdb__frame__frame_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___mdb__frame__frame_0_0)),
	"mdb.frame",
	"frame",
	{ 0 },
	{ (void *)&mercury_data_list__ti_list_1builtin__type_ctor_info_string_0 },
	-1,
	0,
	NULL
};

static const MR_FA_TypeInfo_Struct2 mercury_data_pair__ti_pair_2builtin__type_ctor_info_int_0builtin__type_ctor_info_int_0 = {
	&mercury_data_pair__type_ctor_info_pair_2,
{	(MR_TypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_TypeInfo) &mercury_data_builtin__type_ctor_info_int_0
}};

const MR_TypeCtorInfo_Struct mercury_data_mdb__frame__type_ctor_info_clip_rect_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_EQUIV_GROUND,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___mdb__frame__clip_rect_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___mdb__frame__clip_rect_0_0)),
	"mdb.frame",
	"clip_rect",
	{ 0 },
	{ (void *)&mercury_data_pair__ti_pair_2builtin__type_ctor_info_int_0builtin__type_ctor_info_int_0 },
	-1,
	0,
	NULL
};

static const MR_UserClosureId
mercury_data__closure_layout__fn__mdb__frame__hsize_1_0_1 = {
{
MR_FUNCTION,
"string",
"string",
"length",
2,
0
},
"mdb.frame",
"frame.m",
138,
"d1;c4;"
};

static const MR_UserClosureId
mercury_data__closure_layout__fn__mdb__frame__hsize_1_0_2 = {
{
MR_PREDICATE,
"int",
"int",
"max",
3,
0
},
"mdb.frame",
"frame.m",
139,
"d1;c5;"
};

static const MR_UserClosureId
mercury_data__closure_layout__fn__mdb__frame__hglue_2_0_1 = {
{
MR_FUNCTION,
"string",
"string",
"length",
2,
0
},
"mdb.frame",
"frame.m",
109,
"d1;c4;"
};

static const MR_UserClosureId
mercury_data__closure_layout__fn__mdb__frame__hglue_2_0_2 = {
{
MR_FUNCTION,
"string",
"string",
"length",
2,
0
},
"mdb.frame",
"frame.m",
109,
"d1;c4;"
};

static const MR_UserClosureId
mercury_data__closure_layout__fn__mdb__frame__hglue_2_0_3 = {
{
MR_FUNCTION,
"string",
"string",
"length",
2,
0
},
"mdb.frame",
"frame.m",
109,
"d1;c4;"
};

static const MR_UserClosureId
mercury_data__closure_layout__fn__mdb__frame__hglue_2_0_4 = {
{
MR_PREDICATE,
"int",
"int",
"max",
3,
0
},
"mdb.frame",
"frame.m",
110,
"d1;c5;"
};

static const MR_UserClosureId
mercury_data__closure_layout__fn__mdb__frame__hglue_2_0_5 = {
{
MR_PREDICATE,
"mdb.frame",
"mdb.frame",
"subtract",
3,
0
},
"mdb.frame",
"frame.m",
111,
"d1;c8;"
};

static const MR_UserClosureId
mercury_data__closure_layout__fn__mdb__frame__hglue_2_0_6 = {
{
MR_PREDICATE,
"mdb.frame",
"mdb.frame",
"add_right_padding",
2,
0
},
"mdb.frame",
"frame.m",
112,
"d1;c10;"
};

static const MR_UserClosureId
mercury_data__closure_layout__fn__mdb__frame__hglue_2_0_7 = {
{
MR_PREDICATE,
"string",
"string",
"append",
3,
2
},
"mdb.frame",
"frame.m",
99,
"d1;c8;"
};

static const MR_UserClosureId
mercury_data__closure_layout__fn__mdb__frame__clip_2_0_1 = {
{
MR_PREDICATE,
"mdb.frame",
"mdb.frame",
"left",
3,
0
},
"mdb.frame",
"frame.m",
147,
"d1;c5;"
};

MR_decl_entry(fn__list__map_2_0);
MR_decl_entry(list__foldl_4_1);

MR_BEGIN_MODULE(mdb__frame_module0)
	MR_init_entry1(fn__mdb__frame__hsize_1_0);
	MR_init_label1(fn__mdb__frame__hsize_1_0,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__mdb__frame__hsize_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_r4 = MR_r1;
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,1,0);
	MR_np_call_localret_ent(fn__list__map_2_0,
		fn__mdb__frame__hsize_1_0_i2);
MR_def_label(fn__mdb__frame__hsize_1_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r1;
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,1,1);
	MR_r5 = (MR_Integer) 0;
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_np_tailcall_ent(list__foldl_4_1);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(list__length_2_0);

MR_BEGIN_MODULE(mdb__frame_module1)
	MR_init_entry1(fn__mdb__frame__vsize_1_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__mdb__frame__vsize_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_np_tailcall_ent(list__length_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdb__frame_module2)
	MR_init_entry1(fn__mdb__frame__from_string_1_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__mdb__frame__from_string_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_tempr1;
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(list__append_3_1);

MR_BEGIN_MODULE(mdb__frame_module3)
	MR_init_entry1(fn__mdb__frame__vglue_2_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__mdb__frame__vglue_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r2;
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_np_tailcall_ent(list__append_3_1);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(list__duplicate_3_0);
MR_decl_entry(list__map_3_0);
MR_decl_entry(fn__assoc_list__from_corresponding_lists_2_0);
MR_decl_entry(mdb__util__zip_with_4_0);

MR_BEGIN_MODULE(mdb__frame_module4)
	MR_init_entry1(fn__mdb__frame__hglue_2_0);
	MR_init_label8(fn__mdb__frame__hglue_2_0,2,3,5,6,4,8,9,7)
	MR_init_label6(fn__mdb__frame__hglue_2_0,11,12,13,14,15,16)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__mdb__frame__hglue_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_np_call_localret_ent(list__length_2_0,
		fn__mdb__frame__hglue_2_0_i2);
MR_def_label(fn__mdb__frame__hglue_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(list__length_2_0,
		fn__mdb__frame__hglue_2_0_i3);
MR_def_label(fn__mdb__frame__hglue_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) MR_sv(3) >= (MR_Integer) MR_r1)) {
		MR_GOTO_LAB(fn__mdb__frame__hglue_2_0_i4);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = ((MR_Integer) MR_tempr1 - (MR_Integer) MR_sv(3));
	MR_r3 = (MR_Word) MR_string_const("", 0);
	}
	MR_np_call_localret_ent(list__duplicate_3_0,
		fn__mdb__frame__hglue_2_0_i5);
MR_def_label(fn__mdb__frame__hglue_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(list__append_3_1,
		fn__mdb__frame__hglue_2_0_i6);
MR_def_label(fn__mdb__frame__hglue_2_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,1,2);
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_GOTO_LAB(fn__mdb__frame__hglue_2_0_i11);
MR_def_label(fn__mdb__frame__hglue_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) MR_r1 >= (MR_Integer) MR_sv(3))) {
		MR_GOTO_LAB(fn__mdb__frame__hglue_2_0_i7);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = ((MR_Integer) MR_sv(3) - (MR_Integer) MR_tempr1);
	MR_r3 = (MR_Word) MR_string_const("", 0);
	}
	MR_np_call_localret_ent(list__duplicate_3_0,
		fn__mdb__frame__hglue_2_0_i8);
MR_def_label(fn__mdb__frame__hglue_2_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(list__append_3_1,
		fn__mdb__frame__hglue_2_0_i9);
MR_def_label(fn__mdb__frame__hglue_2_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_sv(2);
	MR_r4 = MR_r1;
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,1,3);
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_GOTO_LAB(fn__mdb__frame__hglue_2_0_i11);
MR_def_label(fn__mdb__frame__hglue_2_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_sv(1);
	MR_sv(1) = MR_sv(2);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,1,4);
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = (MR_Word) MR_INT_CTOR_ADDR;
MR_def_label(fn__mdb__frame__hglue_2_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r4;
	MR_np_call_localret_ent(fn__list__map_2_0,
		fn__mdb__frame__hglue_2_0_i12);
MR_def_label(fn__mdb__frame__hglue_2_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,1,5);
	MR_r4 = MR_sv(3);
	MR_r5 = (MR_Integer) 0;
	MR_np_call_localret_ent(list__foldl_4_1,
		fn__mdb__frame__hglue_2_0_i13);
MR_def_label(fn__mdb__frame__hglue_2_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(2,2);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(mdb__frame__subtract_3_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_r1;
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r4 = MR_sv(3);
	}
	MR_np_call_localret_ent(list__map_3_0,
		fn__mdb__frame__hglue_2_0_i14);
MR_def_label(fn__mdb__frame__hglue_2_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r1;
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r3 = MR_sv(2);
	MR_np_call_localret_ent(fn__assoc_list__from_corresponding_lists_2_0,
		fn__mdb__frame__hglue_2_0_i15);
MR_def_label(fn__mdb__frame__hglue_2_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,3,0);
	MR_r2 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,1,6);
	MR_np_call_localret_ent(list__map_3_0,
		fn__mdb__frame__hglue_2_0_i16);
MR_def_label(fn__mdb__frame__hglue_2_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r5 = MR_r1;
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r3 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r4 = (MR_Word) MR_TAG_COMMON(0,1,7);
	MR_r6 = MR_sv(1);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(mdb__util__zip_with_4_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(list__take_upto_3_0);

MR_BEGIN_MODULE(mdb__frame_module5)
	MR_init_entry1(fn__mdb__frame__clip_2_0);
	MR_init_label1(fn__mdb__frame__clip_2_0,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__mdb__frame__clip_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r1;
	MR_sv(1) = MR_ctfield(0, MR_tempr2, 0);
	MR_tempr1 = MR_tempr2;
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r3 = MR_r2;
	MR_r2 = MR_ctfield(0, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(list__take_upto_3_0,
		fn__mdb__frame__clip_2_0_i2);
MR_def_label(fn__mdb__frame__clip_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(2,4);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(mdb__frame__left_3_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(1);
	MR_r4 = MR_r1;
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(list__map_3_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_character_0;
MR_decl_entry(string__from_char_list_2_0);

MR_BEGIN_MODULE(mdb__frame_module6)
	MR_init_entry1(mdb__frame__add_right_padding_2_0);
	MR_init_label2(mdb__frame__add_right_padding_2_0,2,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mdb__frame__add_right_padding_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r1;
	MR_sv(1) = MR_ctfield(0, MR_tempr2, 0);
	MR_tempr1 = MR_tempr2;
	MR_r1 = (MR_Word) MR_CHAR_CTOR_ADDR;
	MR_r2 = MR_ctfield(0, MR_tempr1, 1);
	MR_r3 = (MR_Integer) 32;
	}
	MR_np_call_localret_ent(list__duplicate_3_0,
		mdb__frame__add_right_padding_2_0_i2);
MR_def_label(mdb__frame__add_right_padding_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(string__from_char_list_2_0,
		mdb__frame__add_right_padding_2_0_i3);
MR_def_label(mdb__frame__add_right_padding_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(string__append_3_2);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdb__frame_module7)
	MR_init_entry1(mdb__frame__subtract_3_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mdb__frame__subtract_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = ((MR_Integer) MR_r1 - (MR_Integer) MR_r2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(string__left_3_0);

MR_BEGIN_MODULE(mdb__frame_module8)
	MR_init_entry1(mdb__frame__left_3_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mdb__frame__left_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_r1;
	MR_r1 = MR_tempr1;
	MR_np_tailcall_ent(string__left_3_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___pair__pair_2_0);

MR_BEGIN_MODULE(mdb__frame_module9)
	MR_init_entry1(__Unify___mdb__frame__clip_rect_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___mdb__frame__clip_rect_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_tempr2 = MR_r2;
	MR_r2 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tempr2;
	MR_np_tailcall_ent(__Unify___pair__pair_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Compare___pair__pair_2_0);

MR_BEGIN_MODULE(mdb__frame_module10)
	MR_init_entry1(__Compare___mdb__frame__clip_rect_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___mdb__frame__clip_rect_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_tempr2 = MR_r2;
	MR_r2 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tempr2;
	MR_np_tailcall_ent(__Compare___pair__pair_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___list__list_1_0);

MR_BEGIN_MODULE(mdb__frame_module11)
	MR_init_entry1(__Unify___mdb__frame__frame_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___mdb__frame__frame_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
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

MR_BEGIN_MODULE(mdb__frame_module12)
	MR_init_entry1(__Compare___mdb__frame__frame_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___mdb__frame__frame_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
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

static void mercury__mdb__frame_maybe_bunch_0(void)
{
	mdb__frame_module0();
	mdb__frame_module1();
	mdb__frame_module2();
	mdb__frame_module3();
	mdb__frame_module4();
	mdb__frame_module5();
	mdb__frame_module6();
	mdb__frame_module7();
	mdb__frame_module8();
	mdb__frame_module9();
	mdb__frame_module10();
	mdb__frame_module11();
	mdb__frame_module12();
}

/* suppress gcc -Wmissing-decls warnings */
void mercury__mdb__frame__init(void);
void mercury__mdb__frame__init_type_tables(void);
void mercury__mdb__frame__init_debugger(void);
#ifdef MR_DEEP_PROFILING
void mercury__mdb__frame__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp);
#endif
#ifdef MR_RECORD_TERM_SIZES
void mercury__mdb__frame__init_complexity_procs(void);
#endif

void mercury__mdb__frame__init(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	mercury__mdb__frame_maybe_bunch_0();
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_mdb__frame__type_ctor_info_frame_0,
		mdb__frame__frame_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_mdb__frame__type_ctor_info_clip_rect_0,
		mdb__frame__clip_rect_0_0);
	mercury__mdb__frame__init_debugger();
}

void mercury__mdb__frame__init_type_tables(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	{
		MR_register_type_ctor_info(
		&mercury_data_mdb__frame__type_ctor_info_frame_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_mdb__frame__type_ctor_info_clip_rect_0);
	}
}


void mercury__mdb__frame__init_debugger(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}

#ifdef MR_DEEP_PROFILING

void mercury__mdb__frame__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp)
{
	MR_write_out_module_proc_reps_start(procrep_fp, &mercury_data__module_common_layout__mdb__frame);
	MR_write_out_module_proc_reps_end(procrep_fp);
}

#endif

#ifdef MR_RECORD_TERM_SIZES

void mercury__mdb__frame__init_complexity_procs(void)
{
}

#endif

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;
