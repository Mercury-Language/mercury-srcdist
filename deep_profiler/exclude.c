/*
** Automatically generated from `exclude.m'
** by the Mercury compiler,
** version rotd-2007-07-12, configured for i686-pc-linux-gnu.
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
INIT mercury__exclude__init
ENDINIT
*/

#define MR_ALLOW_RESET
#include "mercury_imp.h"
#line 530 "../library/io.int"
#include "io.mh"

#line 27 "exclude.c"
#line 538 "../library/io.int"
#include "string.mh"

#line 31 "exclude.c"
#line 30 "../library/array.int2"
#include "array.mh"

#line 35 "exclude.c"
#line 29 "../library/bitmap.int2"
#include "bitmap.mh"

#line 39 "exclude.c"
#line 28 "../library/time.int2"
#include "time.mh"

#line 43 "exclude.c"
#line 44 "exclude.c"
#include "exclude.mh"

#line 47 "exclude.c"
#line 48 "exclude.c"
#ifndef EXCLUDE_DECL_GUARD
#define EXCLUDE_DECL_GUARD

#line 52 "exclude.c"
#line 53 "exclude.c"

#endif
#line 56 "exclude.c"

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
};
MR_STATIC_LINKAGE const struct mercury_type_0 mercury_common_0[];

struct mercury_type_1 {
	MR_Word * f1;
	MR_Code * f2;
	MR_Integer f3;
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
	mercury_data_exclude__type_ctor_info_exclusion_type_0,
	mercury_data_exclude__type_ctor_info_exclude_spec_0,
	mercury_data_exclude__type_ctor_info_exclude_file_0;
MR_decl_label8(exclude__read_exclude_file_5_0, 2,5,6,9,12,11,13,14)
MR_decl_label3(exclude__read_exclude_file_5_0, 8,4,16)
MR_decl_label8(exclude__read_exclude_lines_6_0, 56,2,21,22,5,7,9,11)
MR_decl_label4(exclude__read_exclude_lines_6_0, 16,15,10,19)
MR_decl_label8(fn__exclude__apply_contour_exclusion_3_0, 40,4,6,7,8,13,15,14)
MR_decl_label6(fn__exclude__apply_contour_exclusion_3_0, 12,17,18,19,10,2)
MR_decl_label2(__Unify___exclude__exclude_spec_0_0, 4,1)
MR_decl_label4(__Compare___exclude__exclude_spec_0_0, 3,2,5,21)
MR_decl_static(exclude__read_exclude_lines_6_0)
MR_def_extern_entry(exclude__read_exclude_file_5_0)
MR_def_extern_entry(fn__exclude__apply_contour_exclusion_3_0)
MR_decl_static(fn__exclude__spec_to_module_name_1_0)
MR_decl_static(exclude__has_valid_module_name_2_0)
MR_def_extern_entry(__Unify___exclude__exclude_file_0_0)
MR_def_extern_entry(__Compare___exclude__exclude_file_0_0)
MR_def_extern_entry(__Unify___exclude__exclude_spec_0_0)
MR_def_extern_entry(__Compare___exclude__exclude_spec_0_0)
MR_decl_static(__Unify___exclude__exclusion_type_0_0)
MR_decl_static(__Compare___exclude__exclusion_type_0_0)

static const MR_UserClosureId
mercury_data__closure_layout__exclude__read_exclude_lines_6_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_character_0;
static const struct mercury_type_0 mercury_common_0[1] =
{
{
(MR_Word *) &mercury_data__closure_layout__exclude__read_exclude_lines_6_0_1,
(MR_Word *) (MR_Integer) 0,
1,
MR_CHAR_CTOR_ADDR
},
};

MR_decl_entry(char__is_whitespace_1_0);
static const struct mercury_type_1 mercury_common_1[2] =
{
{
MR_COMMON(0,0),
MR_ENTRY_AP(char__is_whitespace_1_0),
0
},
{
MR_COMMON(2,1),
MR_ENTRY_AP(fn__exclude__spec_to_module_name_1_0),
0
},
};

static const MR_UserClosureId
mercury_data__closure_layout__exclude__read_exclude_file_5_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_profile__type_ctor_info_deep_0;
extern const MR_TypeCtorInfo_Struct mercury_data_exclude__type_ctor_info_exclude_spec_0;
static const MR_UserClosureId
mercury_data__closure_layout__exclude__read_exclude_file_5_0_2;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_string_0;
static const struct mercury_type_2 mercury_common_2[2] =
{
{
(MR_Word *) &mercury_data__closure_layout__exclude__read_exclude_file_5_0_1,
(MR_Word *) (MR_Integer) 0,
2,
MR_CTOR0_ADDR(profile, deep),
MR_CTOR0_ADDR(exclude, exclude_spec)
},
{
(MR_Word *) &mercury_data__closure_layout__exclude__read_exclude_file_5_0_2,
(MR_Word *) (MR_Integer) 0,
2,
MR_CTOR0_ADDR(exclude, exclude_spec),
MR_STRING_CTOR_ADDR
},
};

static const MR_EnumFunctorDesc mercury_data_exclude__enum_functor_desc_exclusion_type_0_0 = {
	"exclude_all_procedures",
	0
};

static const MR_EnumFunctorDesc mercury_data_exclude__enum_functor_desc_exclusion_type_0_1 = {
	"exclude_internal_procedures",
	1
};

const MR_EnumFunctorDescPtr mercury_data_exclude__enum_value_ordered_exclusion_type_0[] = {
	&mercury_data_exclude__enum_functor_desc_exclusion_type_0_0,
	&mercury_data_exclude__enum_functor_desc_exclusion_type_0_1
};

const MR_EnumFunctorDescPtr mercury_data_exclude__enum_name_ordered_exclusion_type_0[] = {
	&mercury_data_exclude__enum_functor_desc_exclusion_type_0_0,
	&mercury_data_exclude__enum_functor_desc_exclusion_type_0_1
};

const MR_Integer mercury_data_exclude__functor_number_map_exclusion_type_0[] = {
	0,
	1 };
	
const MR_TypeCtorInfo_Struct mercury_data_exclude__type_ctor_info_exclusion_type_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_ENUM,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___exclude__exclusion_type_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___exclude__exclusion_type_0_0)),
	"exclude",
	"exclusion_type",
	{ (void *)mercury_data_exclude__enum_name_ordered_exclusion_type_0 },
	{ (void *)mercury_data_exclude__enum_value_ordered_exclusion_type_0 },
	2,
	4,
	mercury_data_exclude__functor_number_map_exclusion_type_0
};
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_string_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_string_0;
extern const MR_TypeCtorInfo_Struct mercury_data_exclude__type_ctor_info_exclusion_type_0;

const MR_PseudoTypeInfo mercury_data_exclude__field_types_exclude_spec_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_string_0,
	(MR_PseudoTypeInfo) &mercury_data_exclude__type_ctor_info_exclusion_type_0
};

static const MR_DuFunctorDesc mercury_data_exclude__du_functor_desc_exclude_spec_0_0 = {
	"exclude_spec",
	2,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_exclude__field_types_exclude_spec_0_0,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_exclude__du_stag_ordered_exclude_spec_0_0[] = {
	&mercury_data_exclude__du_functor_desc_exclude_spec_0_0

};

const MR_DuPtagLayout mercury_data_exclude__du_ptag_ordered_exclude_spec_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_exclude__du_stag_ordered_exclude_spec_0_0 }

};

const MR_DuFunctorDescPtr mercury_data_exclude__du_name_ordered_exclude_spec_0[] = {
	&mercury_data_exclude__du_functor_desc_exclude_spec_0_0
};

const MR_Integer mercury_data_exclude__functor_number_map_exclude_spec_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_exclude__type_ctor_info_exclude_spec_0 = {
	0,
	13,
	1,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___exclude__exclude_spec_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___exclude__exclude_spec_0_0)),
	"exclude",
	"exclude_spec",
	{ (void *)mercury_data_exclude__du_name_ordered_exclude_spec_0 },
	{ (void *)mercury_data_exclude__du_ptag_ordered_exclude_spec_0 },
	1,
	4,
	mercury_data_exclude__functor_number_map_exclude_spec_0
};
extern const MR_TypeCtorInfo_Struct mercury_data_list__type_ctor_info_list_1;
extern const MR_TypeCtorInfo_Struct mercury_data_exclude__type_ctor_info_exclude_spec_0;

static const MR_FA_TypeInfo_Struct1 mercury_data_list__ti_list_1exclude__type_ctor_info_exclude_spec_0 = {
	&mercury_data_list__type_ctor_info_list_1,
{	(MR_TypeInfo) &mercury_data_exclude__type_ctor_info_exclude_spec_0
}};

const MR_TypeCtorInfo_Struct mercury_data_exclude__type_ctor_info_exclude_file_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_EQUIV_GROUND,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___exclude__exclude_file_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___exclude__exclude_file_0_0)),
	"exclude",
	"exclude_file",
	{ 0 },
	{ (void *)&mercury_data_list__ti_list_1exclude__type_ctor_info_exclude_spec_0 },
	-1,
	0,
	NULL
};

static const MR_UserClosureId
mercury_data__closure_layout__exclude__read_exclude_lines_6_0_1 = {
{
MR_PREDICATE,
"char",
"char",
"is_whitespace",
1,
0
},
"exclude",
"exclude.m",
126,
"d1;c8;d1;c3;?;c2;"
};

static const MR_UserClosureId
mercury_data__closure_layout__exclude__read_exclude_file_5_0_1 = {
{
MR_PREDICATE,
"exclude",
"exclude",
"has_valid_module_name",
2,
0
},
"exclude",
"exclude.m",
157,
"d1;c5;"
};

static const MR_UserClosureId
mercury_data__closure_layout__exclude__read_exclude_file_5_0_2 = {
{
MR_FUNCTION,
"exclude",
"exclude",
"spec_to_module_name",
2,
0
},
"exclude",
"exclude.m",
164,
"d1;c7;d2;c3;"
};

MR_decl_entry(io__read_line_as_string_4_0);
MR_decl_entry(io__error_message_2_0);
MR_decl_entry(string__remove_suffix_3_0);
MR_decl_entry(fn__string__words_separator_2_0);
MR_decl_entry(fn__string__format_2_0);

MR_BEGIN_MODULE(exclude_module0)
	MR_init_entry1(exclude__read_exclude_lines_6_0);
	MR_init_label8(exclude__read_exclude_lines_6_0,56,2,21,22,5,7,9,11)
	MR_init_label4(exclude__read_exclude_lines_6_0,16,15,10,19)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(exclude__read_exclude_lines_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
MR_def_label(exclude__read_exclude_lines_6_0,56)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_sv(2) = MR_tempr1;
	MR_sv(3) = MR_r3;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(io__read_line_as_string_4_0,
		exclude__read_exclude_lines_6_0_i2);
MR_def_label(exclude__read_exclude_lines_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TEST(MR_r1,1)) {
		MR_GOTO_LAB(exclude__read_exclude_lines_6_0_i5);
	}
	if (MR_PTAG_TEST(MR_r1,2)) {
		MR_GOTO_LAB(exclude__read_exclude_lines_6_0_i21);
	}
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_r1, 0) = MR_sv(3);
	MR_decr_sp_and_return(5);
MR_def_label(exclude__read_exclude_lines_6_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(2, MR_r1, 0);
	MR_np_call_localret_ent(io__error_message_2_0,
		exclude__read_exclude_lines_6_0_i22);
MR_def_label(exclude__read_exclude_lines_6_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(5);
	}
MR_def_label(exclude__read_exclude_lines_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(1, MR_r1, 0);
	MR_sv(4) = MR_tempr1;
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Word) MR_string_const("\n", 1);
	}
	MR_np_call_localret_ent(string__remove_suffix_3_0,
		exclude__read_exclude_lines_6_0_i7);
MR_def_label(exclude__read_exclude_lines_6_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(exclude__read_exclude_lines_6_0_i9);
	}
	MR_r2 = MR_sv(4);
MR_def_label(exclude__read_exclude_lines_6_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r2;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,1,0);
	MR_np_call_localret_ent(fn__string__words_separator_2_0,
		exclude__read_exclude_lines_6_0_i11);
MR_def_label(exclude__read_exclude_lines_6_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(exclude__read_exclude_lines_6_0_i10);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(1, MR_r1, 1);
	MR_r5 = MR_tempr1;
	if (MR_LTAGS_TEST(MR_tempr1,0,0)) {
		MR_GOTO_LAB(exclude__read_exclude_lines_6_0_i10);
	}
	MR_r6 = MR_ctfield(1, MR_tempr1, 1);
	if (MR_LTAGS_TESTR(MR_r6,0,0)) {
		MR_GOTO_LAB(exclude__read_exclude_lines_6_0_i10);
	}
	MR_r6 = MR_ctfield(1, MR_r1, 0);
	if ((strcmp((char *)MR_r6, (char *)(MR_Word) MR_string_const("all", 3)) != 0)) {
		MR_GOTO_LAB(exclude__read_exclude_lines_6_0_i16);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_ctfield(1, MR_tempr1, 0);
	MR_r5 = (MR_Integer) 0;
	MR_GOTO_LAB(exclude__read_exclude_lines_6_0_i15);
	}
MR_def_label(exclude__read_exclude_lines_6_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *)MR_r6, (char *)(MR_Word) MR_string_const("internal", 8)) != 0)) {
		MR_GOTO_LAB(exclude__read_exclude_lines_6_0_i10);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_ctfield(1, MR_r5, 0);
	MR_r5 = (MR_Integer) 1;
MR_def_label(exclude__read_exclude_lines_6_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_r3;
	MR_tfield(0, MR_tempr1, 1) = MR_r5;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = MR_sv(3);
	MR_succip_word = MR_sv(5);
	MR_GOTO_LAB(exclude__read_exclude_lines_6_0_i56);
	}
MR_def_label(exclude__read_exclude_lines_6_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr1, 0) = MR_sv(1);
	MR_tag_alloc_heap(MR_tempr2, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr2, 0) = MR_sv(4);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr3, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr4;
	MR_tfield(1, MR_tempr4, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr4, 1) = MR_tempr3;
	MR_r1 = (MR_Word) MR_string_const("file %s contains badly formatted line: %s", 41);
	}
	MR_np_call_localret_ent(fn__string__format_2_0,
		exclude__read_exclude_lines_6_0_i19);
MR_def_label(exclude__read_exclude_lines_6_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_r2 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(5);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(io__open_input_4_0);
MR_decl_entry(io__close_input_3_0);
MR_decl_entry(list__filter_4_0);
MR_decl_entry(set__list_to_set_2_0);
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_string_0;
MR_decl_entry(fn__list__map_2_0);
MR_decl_entry(fn__string__join_list_2_0);

MR_BEGIN_MODULE(exclude_module1)
	MR_init_entry1(exclude__read_exclude_file_5_0);
	MR_init_label8(exclude__read_exclude_file_5_0,2,5,6,9,12,11,13,14)
	MR_init_label3(exclude__read_exclude_file_5_0,8,4,16)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__exclude__read_exclude_file_5_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_np_call_localret_ent(io__open_input_4_0,
		exclude__read_exclude_file_5_0_i2);
MR_def_label(exclude__read_exclude_file_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,0)) {
		MR_GOTO_LAB(exclude__read_exclude_file_5_0_i4);
	}
	MR_sv(3) = MR_ctfield(0, MR_r1, 0);
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_np_call_localret_ent(exclude__read_exclude_lines_6_0,
		exclude__read_exclude_file_5_0_i5);
MR_def_label(exclude__read_exclude_file_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_sv(3) = MR_tempr1;
	}
	MR_np_call_localret_ent(io__close_input_3_0,
		exclude__read_exclude_file_5_0_i6);
MR_def_label(exclude__read_exclude_file_5_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(3),0)) {
		MR_GOTO_LAB(exclude__read_exclude_file_5_0_i8);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r2 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(2,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(exclude__has_valid_module_name_2_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(2);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(exclude, exclude_spec);
	MR_r3 = MR_ctfield(0, MR_sv(3), 0);
	}
	MR_np_call_localret_ent(list__filter_4_0,
		exclude__read_exclude_file_5_0_i9);
MR_def_label(exclude__read_exclude_file_5_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(exclude__read_exclude_file_5_0_i11);
	}
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(exclude, exclude_spec);
	MR_np_call_localret_ent(set__list_to_set_2_0,
		exclude__read_exclude_file_5_0_i12);
MR_def_label(exclude__read_exclude_file_5_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 1);
	MR_r2 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(4);
	}
MR_def_label(exclude__read_exclude_file_5_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(exclude, exclude_spec);
	MR_r4 = MR_r2;
	MR_r2 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,1,1);
	MR_np_call_localret_ent(fn__list__map_2_0,
		exclude__read_exclude_file_5_0_i13);
MR_def_label(exclude__read_exclude_file_5_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const(", ", 2);
	MR_np_call_localret_ent(fn__string__join_list_2_0,
		exclude__read_exclude_file_5_0_i14);
MR_def_label(exclude__read_exclude_file_5_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr1, 0) = MR_sv(1);
	MR_tag_alloc_heap(MR_tempr2, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr2, 0) = MR_r1;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr3, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr4;
	MR_tfield(1, MR_tempr4, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr4, 1) = MR_tempr3;
	MR_r1 = (MR_Word) MR_string_const("file %s contains bad module names: %s", 37);
	}
	MR_np_call_localret_ent(fn__string__format_2_0,
		exclude__read_exclude_file_5_0_i16);
MR_def_label(exclude__read_exclude_file_5_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_decr_sp_and_return(4);
MR_def_label(exclude__read_exclude_file_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(1, MR_r1, 0);
	MR_np_call_localret_ent(io__error_message_2_0,
		exclude__read_exclude_file_5_0_i16);
MR_def_label(exclude__read_exclude_file_5_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(4);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(profile__valid_call_site_dynamic_ptr_2_0);
MR_decl_entry(profile__deep_lookup_call_site_dynamics_3_0);
MR_decl_entry(profile__deep_lookup_proc_dynamics_3_0);
MR_decl_entry(profile__deep_lookup_proc_statics_3_0);
MR_decl_entry(set__member_2_1);
MR_declare_entry(MR_do_redo);
MR_decl_entry(profile__deep_lookup_clique_index_3_0);
MR_decl_entry(profile__deep_lookup_clique_parents_3_0);

MR_BEGIN_MODULE(exclude_module2)
	MR_init_entry1(fn__exclude__apply_contour_exclusion_3_0);
	MR_init_label8(fn__exclude__apply_contour_exclusion_3_0,40,4,6,7,8,13,15,14)
	MR_init_label6(fn__exclude__apply_contour_exclusion_3_0,12,17,18,19,10,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__exclude__apply_contour_exclusion_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(10);
	MR_sv(10) = (MR_Word) MR_succip;
MR_def_label(fn__exclude__apply_contour_exclusion_3_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(3) = MR_tempr1;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(profile__valid_call_site_dynamic_ptr_2_0,
		fn__exclude__apply_contour_exclusion_3_0_i4);
MR_def_label(fn__exclude__apply_contour_exclusion_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(fn__exclude__apply_contour_exclusion_3_0_i2);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(profile__deep_lookup_call_site_dynamics_3_0,
		fn__exclude__apply_contour_exclusion_3_0_i6);
MR_def_label(fn__exclude__apply_contour_exclusion_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_ctfield(0, MR_r1, 0);
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(profile__deep_lookup_proc_dynamics_3_0,
		fn__exclude__apply_contour_exclusion_3_0_i7);
MR_def_label(fn__exclude__apply_contour_exclusion_3_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_ctfield(0, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(profile__deep_lookup_proc_statics_3_0,
		fn__exclude__apply_contour_exclusion_3_0_i8);
MR_def_label(fn__exclude__apply_contour_exclusion_3_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = (MR_Word) MR_redoip_slot(MR_maxfr);
	MR_sv(8) = (MR_Word) MR_redofr_slot(MR_maxfr);
	MR_save_maxfr(MR_sv(9));
	MR_redofr_slot_word(MR_maxfr) = (MR_Word) MR_curfr;
	MR_redoip_slot_word(MR_maxfr) = (MR_Word) MR_LABEL_AP(fn__exclude__apply_contour_exclusion_3_0_i12);
	MR_sv(5) = MR_r1;
	MR_sv(6) = MR_ctfield(0, MR_r1, 1);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(exclude, exclude_spec);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(set__member_2_1,
		fn__exclude__apply_contour_exclusion_3_0_i13);
MR_def_label(fn__exclude__apply_contour_exclusion_3_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_ctfield(0, MR_r1, 0);
	if ((strcmp((char *)MR_sv(6), (char *)MR_r3) != 0)) {
		MR_GOTO(MR_ENTRY(MR_do_redo));
	}
	MR_r3 = MR_ctfield(0, MR_r1, 1);
	if (MR_INT_NE(MR_r3,0)) {
		MR_GOTO_LAB(fn__exclude__apply_contour_exclusion_3_0_i15);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(4);
	MR_GOTO_LAB(fn__exclude__apply_contour_exclusion_3_0_i14);
MR_def_label(fn__exclude__apply_contour_exclusion_3_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_ctfield(0, MR_sv(5), 6);
	if (MR_INT_NE(MR_r3,0)) {
		MR_GOTO(MR_ENTRY(MR_do_redo));
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(4);
MR_def_label(fn__exclude__apply_contour_exclusion_3_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_restore_maxfr(MR_sv(9));
	MR_redoip_slot_word(MR_maxfr) = MR_sv(7);
	MR_redofr_slot_word(MR_maxfr) = MR_sv(8);
	MR_GOTO_LAB(fn__exclude__apply_contour_exclusion_3_0_i17);
MR_def_label(fn__exclude__apply_contour_exclusion_3_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_redoip_slot_word(MR_maxfr) = MR_sv(7);
	MR_redofr_slot_word(MR_maxfr) = MR_sv(8);
	MR_GOTO_LAB(fn__exclude__apply_contour_exclusion_3_0_i10);
MR_def_label(fn__exclude__apply_contour_exclusion_3_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(profile__deep_lookup_clique_index_3_0,
		fn__exclude__apply_contour_exclusion_3_0_i18);
MR_def_label(fn__exclude__apply_contour_exclusion_3_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(profile__deep_lookup_clique_parents_3_0,
		fn__exclude__apply_contour_exclusion_3_0_i19);
MR_def_label(fn__exclude__apply_contour_exclusion_3_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(10);
	MR_GOTO_LAB(fn__exclude__apply_contour_exclusion_3_0_i40);
MR_def_label(fn__exclude__apply_contour_exclusion_3_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_decr_sp_and_return(10);
MR_def_label(fn__exclude__apply_contour_exclusion_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(10);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(exclude_module3)
	MR_init_entry1(fn__exclude__spec_to_module_name_1_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__exclude__spec_to_module_name_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(0, MR_r1, 0);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

extern const MR_TypeCtorInfo_Struct mercury_data_profile__type_ctor_info_module_data_0;
MR_decl_entry(map__search_3_0);

MR_BEGIN_MODULE(exclude_module4)
	MR_init_entry1(exclude__has_valid_module_name_2_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(exclude__has_valid_module_name_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_tempr2 = MR_r2;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(profile, module_data);
	MR_r3 = MR_ctfield(0, MR_tempr1, 25);
	MR_r4 = MR_ctfield(0, MR_tempr2, 0);
	MR_np_tailcall_ent(map__search_3_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___list__list_1_0);

MR_BEGIN_MODULE(exclude_module5)
	MR_init_entry1(__Unify___exclude__exclude_file_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___exclude__exclude_file_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(exclude, exclude_spec);
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

MR_BEGIN_MODULE(exclude_module6)
	MR_init_entry1(__Compare___exclude__exclude_file_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___exclude__exclude_file_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(exclude, exclude_spec);
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


MR_BEGIN_MODULE(exclude_module7)
	MR_init_entry1(__Unify___exclude__exclude_spec_0_0);
	MR_init_label2(__Unify___exclude__exclude_spec_0_0,4,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___exclude__exclude_spec_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___exclude__exclude_spec_0_0_i4);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_tempr1;
	MR_tempr2 = MR_r2;
	MR_sv(2) = MR_tempr2;
	MR_r1 = MR_ctfield(0, MR_tempr1, 0);
	MR_tempr3 = MR_ctfield(0, MR_tempr2, 0);
	if ((strcmp((char *)MR_r1, (char *)MR_tempr3) != 0)) {
		MR_GOTO_LAB(__Unify___exclude__exclude_spec_0_0_i1);
	}
	MR_r1 = MR_ctfield(0, MR_tempr1, 1);
	MR_tempr3 = MR_ctfield(0, MR_tempr2, 1);
	MR_r1 = (MR_r1 == MR_tempr3);
	MR_decr_sp(2);
	MR_proceed();
	}
MR_def_label(__Unify___exclude__exclude_spec_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp(2);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___exclude__exclude_spec_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp(2);
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(private_builtin__builtin_compare_string_3_0);
MR_decl_entry(private_builtin__builtin_compare_int_3_0);

MR_BEGIN_MODULE(exclude_module8)
	MR_init_entry1(__Compare___exclude__exclude_spec_0_0);
	MR_init_label4(__Compare___exclude__exclude_spec_0_0,3,2,5,21)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___exclude__exclude_spec_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___exclude__exclude_spec_0_0_i3);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___exclude__exclude_spec_0_0_i2);
MR_def_label(__Compare___exclude__exclude_spec_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___exclude__exclude_spec_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(2);
	MR_tempr1 = MR_ctfield(0, MR_tempr5, 1);
	MR_tempr6 = MR_sv(1);
	MR_tempr2 = MR_ctfield(0, MR_tempr6, 1);
	MR_tempr3 = MR_tempr6;
	MR_sv(1) = MR_tempr2;
	MR_tempr4 = MR_tempr5;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_ctfield(0, MR_tempr3, 0);
	MR_r2 = MR_ctfield(0, MR_tempr4, 0);
	}
	MR_np_call_localret_ent(private_builtin__builtin_compare_string_3_0,
		__Compare___exclude__exclude_spec_0_0_i5);
MR_def_label(__Compare___exclude__exclude_spec_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___exclude__exclude_spec_0_0_i21);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
MR_def_label(__Compare___exclude__exclude_spec_0_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(exclude_module9)
	MR_init_entry1(__Unify___exclude__exclusion_type_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___exclude__exclusion_type_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_r1 == MR_r2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(exclude_module10)
	MR_init_entry1(__Compare___exclude__exclusion_type_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___exclude__exclusion_type_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

static void mercury__exclude_maybe_bunch_0(void)
{
	exclude_module0();
	exclude_module1();
	exclude_module2();
	exclude_module3();
	exclude_module4();
	exclude_module5();
	exclude_module6();
	exclude_module7();
	exclude_module8();
	exclude_module9();
	exclude_module10();
}

/* suppress gcc -Wmissing-decls warnings */
void mercury__exclude__init(void);
void mercury__exclude__init_type_tables(void);
void mercury__exclude__init_debugger(void);
#ifdef MR_DEEP_PROFILING
void mercury__exclude__write_out_proc_statics(FILE *fp);
#endif
#ifdef MR_RECORD_TERM_SIZES
void mercury__exclude__init_complexity_procs(void);
#endif

void mercury__exclude__init(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	mercury__exclude_maybe_bunch_0();
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_exclude__type_ctor_info_exclusion_type_0,
		exclude__exclusion_type_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_exclude__type_ctor_info_exclude_spec_0,
		exclude__exclude_spec_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_exclude__type_ctor_info_exclude_file_0,
		exclude__exclude_file_0_0);
	mercury__exclude__init_debugger();
}

void mercury__exclude__init_type_tables(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	{
		MR_register_type_ctor_info(
		&mercury_data_exclude__type_ctor_info_exclusion_type_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_exclude__type_ctor_info_exclude_spec_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_exclude__type_ctor_info_exclude_file_0);
	}
}


void mercury__exclude__init_debugger(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}

#ifdef MR_DEEP_PROFILING

void mercury__exclude__write_out_proc_statics(FILE *fp)
{
}

#endif

#ifdef MR_RECORD_TERM_SIZES

void mercury__exclude__init_complexity_procs(void)
{
}

#endif

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;
