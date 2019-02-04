/*
** Automatically generated from `c_util.m'
** by the Mercury compiler,
** version rotd-2009-12-12, configured for i686-pc-linux-gnu.
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
INIT mercury__backend_libs__c_util__init
ENDINIT
*/

#define MR_ALLOW_RESET
#include "mercury_imp.h"
#line 24 "backend_libs.c_util.c"
#include "backend_libs.c_util.mh"

#line 27 "backend_libs.c_util.c"
#line 534 "../library/io.int"
#include "io.mh"

#line 31 "backend_libs.c_util.c"
#line 542 "../library/io.int"
#include "string.mh"

#line 35 "backend_libs.c_util.c"
#line 29 "../library/bitmap.int2"
#include "bitmap.mh"

#line 39 "backend_libs.c_util.c"
#line 28 "../library/time.int2"
#include "time.mh"

#line 43 "backend_libs.c_util.c"
#line 31 "../library/array.int2"
#include "array.mh"

#line 47 "backend_libs.c_util.c"
#line 33 "../mdbcomp/mdbcomp.rtti_access.int2"
#include "mdbcomp.rtti_access.mh"

#line 51 "backend_libs.c_util.c"
#line 52 "backend_libs.c_util.c"
#ifndef BACKEND_LIBS__C_UTIL_DECL_GUARD
#define BACKEND_LIBS__C_UTIL_DECL_GUARD

#line 56 "backend_libs.c_util.c"
#line 57 "backend_libs.c_util.c"

#endif
#line 60 "backend_libs.c_util.c"

#ifdef _MSC_VER
#define MR_STATIC_LINKAGE extern
#else
#define MR_STATIC_LINKAGE static
#endif

struct mercury_type_0 {
	MR_Integer f1;
	MR_Word * f2;
};
MR_STATIC_LINKAGE const struct mercury_type_0 mercury_common_0[];

struct mercury_type_1 {
	MR_Integer f1;
};
MR_STATIC_LINKAGE const struct mercury_type_1 mercury_common_1[];

struct mercury_type_2 {
	MR_Word * f1[2];
};
MR_STATIC_LINKAGE const struct mercury_type_2 mercury_common_2[];

struct mercury_type_3 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[4];
};
MR_STATIC_LINKAGE const struct mercury_type_3 mercury_common_3[];

struct mercury_type_4 {
	MR_Word * f1;
	MR_Code * f2;
	MR_Integer f3;
	MR_Integer f4;
};
MR_STATIC_LINKAGE const struct mercury_type_4 mercury_common_4[];

struct mercury_type_6 {
	MR_String f1;
	MR_Word * f2;
};
MR_STATIC_LINKAGE const struct mercury_type_6 mercury_common_6[];

struct mercury_type_5 {
	MR_String f1;
};
MR_STATIC_LINKAGE const struct mercury_type_5 mercury_vector_common_5_0[];

extern const MR_TypeCtorInfo_Struct
	mercury_data_backend_libs__c_util__type_ctor_info_binop_category_0,
	mercury_data_backend_libs__c_util__type_ctor_info_literal_language_0,
	mercury_data_backend_libs__c_util__type_ctor_info_multi_string_0;
MR_decl_label2(f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_99_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_118_101_114_115_101_95_97_112_112_101_110_100_95_95_91_49_93_95_48_3_0, 5,2)
MR_decl_label9(backend_libs__c_util__always_reset_line_num_2_0, 2,3,7,8,9,12,11,14,16)
MR_decl_label7(backend_libs__c_util__always_set_line_num_4_0, 5,6,7,10,9,12,35)
MR_decl_label10(backend_libs__c_util__binop_category_string_3_0, 3,4,5,6,7,8,9,10,11,12)
MR_decl_label10(backend_libs__c_util__binop_category_string_3_0, 13,14,15,16,17,18,19,20,21,22)
MR_decl_label10(backend_libs__c_util__binop_category_string_3_0, 23,24,25,26,27,28,29,30,31,32)
MR_decl_label9(backend_libs__c_util__binop_category_string_3_0, 33,34,35,36,37,38,39,40,41)
MR_decl_label10(backend_libs__c_util__do_output_quoted_string_6_0, 79,8,10,3,4,11,12,13,14,15)
MR_decl_label4(backend_libs__c_util__do_output_quoted_string_6_0, 20,21,16,81)
MR_decl_label3(backend_libs__c_util__is_valid_c_identifier_1_0, 2,4,1)
MR_decl_label4(backend_libs__c_util__output_c_file_intro_and_grade_5_0, 2,3,4,6)
MR_decl_label1(backend_libs__c_util__output_float_literal_3_0, 4)
MR_decl_label2(backend_libs__c_util__output_quoted_char_3_0, 2,3)
MR_decl_label8(backend_libs__c_util__output_quoted_multi_string_lang_4_0, 15,4,5,6,7,8,9,17)
MR_decl_label1(backend_libs__c_util__output_quoted_string_3_0, 2)
MR_decl_label1(backend_libs__c_util__output_quoted_string_lang_4_0, 2)
MR_decl_label10(backend_libs__c_util__quote_one_char_4_0, 6,5,3,11,12,13,14,15,16,17)
MR_decl_label10(backend_libs__c_util__quote_one_char_4_0, 18,19,10,9,28,30,25,23,36,33)
MR_decl_label7(backend_libs__c_util__quote_one_char_4_0, 34,39,38,43,44,45,46)
MR_decl_label2(backend_libs__c_util__reset_line_num_3_0, 2,3)
MR_decl_label2(backend_libs__c_util__set_line_num_5_0, 2,3)
MR_decl_label1(fn__backend_libs__c_util__quote_char_1_0, 2)
MR_decl_label1(fn__backend_libs__c_util__quote_string_1_0, 4)
MR_decl_static(backend_libs__c_util__quote_one_char_4_0)
MR_decl_static(backend_libs__c_util__do_output_quoted_string_6_0)
MR_def_extern_entry(backend_libs__c_util__output_quoted_string_lang_4_0)
MR_def_extern_entry(backend_libs__c_util__output_quoted_string_3_0)
MR_decl_static(backend_libs__c_util__can_print_directly_4_0)
MR_def_extern_entry(backend_libs__c_util__always_reset_line_num_2_0)
MR_def_extern_entry(backend_libs__c_util__always_set_line_num_4_0)
MR_def_extern_entry(backend_libs__c_util__set_line_num_5_0)
MR_def_extern_entry(backend_libs__c_util__reset_line_num_3_0)
MR_def_extern_entry(backend_libs__c_util__output_quoted_multi_string_lang_4_0)
MR_def_extern_entry(backend_libs__c_util__output_quoted_multi_string_3_0)
MR_def_extern_entry(backend_libs__c_util__output_quoted_char_3_0)
MR_def_extern_entry(fn__backend_libs__c_util__quote_string_1_0)
MR_def_extern_entry(fn__backend_libs__c_util__quote_char_1_0)
MR_def_extern_entry(fn__backend_libs__c_util__make_float_literal_1_0)
MR_def_extern_entry(backend_libs__c_util__output_float_literal_3_0)
MR_def_extern_entry(backend_libs__c_util__unary_prefix_op_2_0)
MR_def_extern_entry(backend_libs__c_util__binop_category_string_3_0)
MR_def_extern_entry(backend_libs__c_util__output_c_file_intro_and_grade_5_0)
MR_def_extern_entry(backend_libs__c_util__is_valid_c_identifier_1_0)
MR_def_extern_entry(__Unify___backend_libs__c_util__binop_category_0_0)
MR_def_extern_entry(__Compare___backend_libs__c_util__binop_category_0_0)
MR_def_extern_entry(__Unify___backend_libs__c_util__literal_language_0_0)
MR_def_extern_entry(__Compare___backend_libs__c_util__literal_language_0_0)
MR_def_extern_entry(__Unify___backend_libs__c_util__multi_string_0_0)
MR_def_extern_entry(__Compare___backend_libs__c_util__multi_string_0_0)
MR_decl_static(f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_99_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_118_101_114_115_101_95_97_112_112_101_110_100_95_95_91_49_93_95_48_3_0)

static const struct mercury_type_0 mercury_common_0[6] =
{
{
92,
MR_tbmkword(0, 0)
},
{
48,
MR_TAG_COMMON(1,0,0)
},
{
48,
MR_TAG_COMMON(1,0,1)
},
{
55,
MR_TAG_COMMON(1,0,2)
},
{
49,
MR_TAG_COMMON(1,0,1)
},
{
51,
MR_TAG_COMMON(1,0,4)
},
};

static const struct mercury_type_1 mercury_common_1[1] =
{
{
939545025
},
};

extern const MR_TypeCtorInfo_Struct mercury_data_list__type_ctor_info_list_1;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_character_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_character_0;
static const struct mercury_type_2 mercury_common_2[2] =
{
{
{
MR_LIST_CTOR_ADDR,
MR_CHAR_CTOR_ADDR
}
},
{
{
MR_LIST_CTOR_ADDR,
MR_CHAR_CTOR_ADDR
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__fn__backend_libs__c_util__quote_string_1_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_backend_libs__c_util__type_ctor_info_literal_language_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_character_0;
static const struct mercury_type_3 mercury_common_3[1] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__fn__backend_libs__c_util__quote_string_1_0_1,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_CTOR0_ADDR(backend_libs__c_util, literal_language),
MR_CHAR_CTOR_ADDR,
MR_COMMON(2,0),
MR_COMMON(2,0)
}
},
};

static const struct mercury_type_4 mercury_common_4[1] =
{
{
MR_COMMON(3,0),
MR_ENTRY_AP(backend_libs__c_util__quote_one_char_4_0),
1,
0
},
};

static const struct mercury_type_6 mercury_common_6[11] =
{
{
MR_string_const("\n", 1),
MR_tbmkword(0, 0)
},
{
MR_string_const("*/\n", 3),
MR_TAG_COMMON(1,6,0)
},
{
MR_string_const("** END_OF_C_GRADE_INFO\n", 23),
MR_TAG_COMMON(1,6,1)
},
{
MR_string_const("**\n", 3),
MR_TAG_COMMON(1,6,2)
},
{
MR_string_const("\n", 1),
MR_TAG_COMMON(1,6,3)
},
{
MR_string_const("no", 2),
MR_TAG_COMMON(1,6,4)
},
{
MR_string_const("** UNBOXED_FLOAT=", 17),
MR_TAG_COMMON(1,6,5)
},
{
MR_string_const("\n", 1),
MR_TAG_COMMON(1,6,6)
},
{
MR_string_const("yes", 3),
MR_TAG_COMMON(1,6,4)
},
{
MR_string_const("** UNBOXED_FLOAT=", 17),
MR_TAG_COMMON(1,6,8)
},
{
MR_string_const("\n", 1),
MR_TAG_COMMON(1,6,9)
},
};

static const struct mercury_type_5 mercury_vector_common_5_0[9] =
{
{
MR_string_const("MR_mktag", 8)
},
{
MR_string_const("MR_tag", 6)
},
{
MR_string_const("MR_unmktag", 10)
},
{
MR_string_const("MR_strip_tag", 12)
},
{
MR_string_const("MR_mkbody", 9)
},
{
MR_string_const("MR_unmkbody", 11)
},
{
MR_string_const("MR_hash_string", 14)
},
{
MR_string_const("~", 1)
},
{
MR_string_const("!", 1)
},
};

static const MR_EnumFunctorDesc mercury_data_backend_libs__c_util__enum_functor_desc_binop_category_0_0 = {
	"array_index_binop",
	0
};

static const MR_EnumFunctorDesc mercury_data_backend_libs__c_util__enum_functor_desc_binop_category_0_1 = {
	"compound_compare_binop",
	1
};

static const MR_EnumFunctorDesc mercury_data_backend_libs__c_util__enum_functor_desc_binop_category_0_2 = {
	"string_compare_binop",
	2
};

static const MR_EnumFunctorDesc mercury_data_backend_libs__c_util__enum_functor_desc_binop_category_0_3 = {
	"unsigned_compare_binop",
	3
};

static const MR_EnumFunctorDesc mercury_data_backend_libs__c_util__enum_functor_desc_binop_category_0_4 = {
	"float_compare_binop",
	4
};

static const MR_EnumFunctorDesc mercury_data_backend_libs__c_util__enum_functor_desc_binop_category_0_5 = {
	"float_arith_binop",
	5
};

static const MR_EnumFunctorDesc mercury_data_backend_libs__c_util__enum_functor_desc_binop_category_0_6 = {
	"int_or_bool_binary_infix_binop",
	6
};

static const MR_EnumFunctorDesc mercury_data_backend_libs__c_util__enum_functor_desc_binop_category_0_7 = {
	"macro_binop",
	7
};

const MR_EnumFunctorDescPtr mercury_data_backend_libs__c_util__enum_value_ordered_binop_category_0[] = {
	&mercury_data_backend_libs__c_util__enum_functor_desc_binop_category_0_0,
	&mercury_data_backend_libs__c_util__enum_functor_desc_binop_category_0_1,
	&mercury_data_backend_libs__c_util__enum_functor_desc_binop_category_0_2,
	&mercury_data_backend_libs__c_util__enum_functor_desc_binop_category_0_3,
	&mercury_data_backend_libs__c_util__enum_functor_desc_binop_category_0_4,
	&mercury_data_backend_libs__c_util__enum_functor_desc_binop_category_0_5,
	&mercury_data_backend_libs__c_util__enum_functor_desc_binop_category_0_6,
	&mercury_data_backend_libs__c_util__enum_functor_desc_binop_category_0_7
};

const MR_EnumFunctorDescPtr mercury_data_backend_libs__c_util__enum_name_ordered_binop_category_0[] = {
	&mercury_data_backend_libs__c_util__enum_functor_desc_binop_category_0_0,
	&mercury_data_backend_libs__c_util__enum_functor_desc_binop_category_0_1,
	&mercury_data_backend_libs__c_util__enum_functor_desc_binop_category_0_5,
	&mercury_data_backend_libs__c_util__enum_functor_desc_binop_category_0_4,
	&mercury_data_backend_libs__c_util__enum_functor_desc_binop_category_0_6,
	&mercury_data_backend_libs__c_util__enum_functor_desc_binop_category_0_7,
	&mercury_data_backend_libs__c_util__enum_functor_desc_binop_category_0_2,
	&mercury_data_backend_libs__c_util__enum_functor_desc_binop_category_0_3
};

const MR_Integer mercury_data_backend_libs__c_util__functor_number_map_binop_category_0[] = {
	0,
	1,
	6,
	7,
	3,
	2,
	4,
	5 };
	
const MR_TypeCtorInfo_Struct mercury_data_backend_libs__c_util__type_ctor_info_binop_category_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_ENUM,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___backend_libs__c_util__binop_category_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___backend_libs__c_util__binop_category_0_0)),
	"backend_libs.c_util",
	"binop_category",
	{ (void *)mercury_data_backend_libs__c_util__enum_name_ordered_binop_category_0 },
	{ (void *)mercury_data_backend_libs__c_util__enum_value_ordered_binop_category_0 },
	8,
	4,
	mercury_data_backend_libs__c_util__functor_number_map_binop_category_0
};

static const MR_EnumFunctorDesc mercury_data_backend_libs__c_util__enum_functor_desc_literal_language_0_0 = {
	"literal_c",
	0
};

static const MR_EnumFunctorDesc mercury_data_backend_libs__c_util__enum_functor_desc_literal_language_0_1 = {
	"literal_java",
	1
};

const MR_EnumFunctorDescPtr mercury_data_backend_libs__c_util__enum_value_ordered_literal_language_0[] = {
	&mercury_data_backend_libs__c_util__enum_functor_desc_literal_language_0_0,
	&mercury_data_backend_libs__c_util__enum_functor_desc_literal_language_0_1
};

const MR_EnumFunctorDescPtr mercury_data_backend_libs__c_util__enum_name_ordered_literal_language_0[] = {
	&mercury_data_backend_libs__c_util__enum_functor_desc_literal_language_0_0,
	&mercury_data_backend_libs__c_util__enum_functor_desc_literal_language_0_1
};

const MR_Integer mercury_data_backend_libs__c_util__functor_number_map_literal_language_0[] = {
	0,
	1 };
	
const MR_TypeCtorInfo_Struct mercury_data_backend_libs__c_util__type_ctor_info_literal_language_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_ENUM,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___backend_libs__c_util__literal_language_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___backend_libs__c_util__literal_language_0_0)),
	"backend_libs.c_util",
	"literal_language",
	{ (void *)mercury_data_backend_libs__c_util__enum_name_ordered_literal_language_0 },
	{ (void *)mercury_data_backend_libs__c_util__enum_value_ordered_literal_language_0 },
	2,
	4,
	mercury_data_backend_libs__c_util__functor_number_map_literal_language_0
};
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_string_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_string_0;

static const MR_FA_TypeInfo_Struct1 mercury_data_list__ti_list_1builtin__type_ctor_info_string_0 = {
	&mercury_data_list__type_ctor_info_list_1,
{	(MR_TypeInfo) &mercury_data_builtin__type_ctor_info_string_0
}};

const MR_TypeCtorInfo_Struct mercury_data_backend_libs__c_util__type_ctor_info_multi_string_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_EQUIV_GROUND,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___backend_libs__c_util__multi_string_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___backend_libs__c_util__multi_string_0_0)),
	"backend_libs.c_util",
	"multi_string",
	{ 0 },
	{ (void *)&mercury_data_list__ti_list_1builtin__type_ctor_info_string_0 },
	-1,
	0,
	NULL
};


static const MR_UserClosureId
mercury_data__closure_layout__fn__backend_libs__c_util__quote_string_1_0_1 = {
{
MR_PREDICATE,
"backend_libs.c_util",
"backend_libs.c_util",
"quote_one_char",
4,
0
},
"backend_libs.c_util",
"c_util.m",
388,
"d1;c4;"
};


MR_decl_entry(list__append_3_1);
MR_decl_entry(char__is_alnum_1_0);
MR_decl_entry(string__contains_char_2_0);
MR_decl_entry(fn__char__to_int_1_0);
MR_decl_entry(char__to_int_2_1);
MR_decl_entry(char__to_int_2_0);
MR_decl_entry(string__int_to_base_string_3_0);
MR_decl_entry(string__pad_left_4_0);
MR_decl_entry(fn__string__to_char_list_1_0);

MR_BEGIN_MODULE(backend_libs__c_util_module0)
	MR_init_entry1(backend_libs__c_util__quote_one_char_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__backend_libs__c_util__quote_one_char_4_0);
	MR_init_label10(backend_libs__c_util__quote_one_char_4_0,6,5,3,11,12,13,14,15,16,17)
	MR_init_label10(backend_libs__c_util__quote_one_char_4_0,18,19,10,9,28,30,25,23,36,33)
	MR_init_label7(backend_libs__c_util__quote_one_char_4_0,34,39,38,43,44,45,46)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'quote_one_char'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(backend_libs__c_util__quote_one_char_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(backend_libs__c_util__quote_one_char_4_0_i3);
	}
	if (MR_INT_NE(MR_r2,7)) {
		MR_GOTO_LAB(backend_libs__c_util__quote_one_char_4_0_i6);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_r2 = (MR_Word) MR_TAG_COMMON(1,0,3);
	MR_GOTO_LAB(backend_libs__c_util__quote_one_char_4_0_i5);
MR_def_label(backend_libs__c_util__quote_one_char_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r2,11)) {
		MR_GOTO_LAB(backend_libs__c_util__quote_one_char_4_0_i3);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_r2 = (MR_Word) MR_TAG_COMMON(1,0,5);
MR_def_label(backend_libs__c_util__quote_one_char_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CHAR_CTOR_ADDR;
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(list__append_3_1);
MR_def_label(backend_libs__c_util__quote_one_char_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r2,7)) {
		MR_GOTO_LAB(backend_libs__c_util__quote_one_char_4_0_i11);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_r1 = (MR_Integer) 97;
	MR_GOTO_LAB(backend_libs__c_util__quote_one_char_4_0_i10);
MR_def_label(backend_libs__c_util__quote_one_char_4_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r2,8)) {
		MR_GOTO_LAB(backend_libs__c_util__quote_one_char_4_0_i12);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_r1 = (MR_Integer) 98;
	MR_GOTO_LAB(backend_libs__c_util__quote_one_char_4_0_i10);
MR_def_label(backend_libs__c_util__quote_one_char_4_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r2,9)) {
		MR_GOTO_LAB(backend_libs__c_util__quote_one_char_4_0_i13);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_r1 = (MR_Integer) 116;
	MR_GOTO_LAB(backend_libs__c_util__quote_one_char_4_0_i10);
MR_def_label(backend_libs__c_util__quote_one_char_4_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r2,10)) {
		MR_GOTO_LAB(backend_libs__c_util__quote_one_char_4_0_i14);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_r1 = (MR_Integer) 110;
	MR_GOTO_LAB(backend_libs__c_util__quote_one_char_4_0_i10);
MR_def_label(backend_libs__c_util__quote_one_char_4_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r2,11)) {
		MR_GOTO_LAB(backend_libs__c_util__quote_one_char_4_0_i15);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_r1 = (MR_Integer) 118;
	MR_GOTO_LAB(backend_libs__c_util__quote_one_char_4_0_i10);
MR_def_label(backend_libs__c_util__quote_one_char_4_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r2,12)) {
		MR_GOTO_LAB(backend_libs__c_util__quote_one_char_4_0_i16);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_r1 = (MR_Integer) 102;
	MR_GOTO_LAB(backend_libs__c_util__quote_one_char_4_0_i10);
MR_def_label(backend_libs__c_util__quote_one_char_4_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r2,13)) {
		MR_GOTO_LAB(backend_libs__c_util__quote_one_char_4_0_i17);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_r1 = (MR_Integer) 114;
	MR_GOTO_LAB(backend_libs__c_util__quote_one_char_4_0_i10);
MR_def_label(backend_libs__c_util__quote_one_char_4_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r2,34)) {
		MR_GOTO_LAB(backend_libs__c_util__quote_one_char_4_0_i18);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_r1 = (MR_Integer) 34;
	MR_GOTO_LAB(backend_libs__c_util__quote_one_char_4_0_i10);
MR_def_label(backend_libs__c_util__quote_one_char_4_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r2,39)) {
		MR_GOTO_LAB(backend_libs__c_util__quote_one_char_4_0_i19);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_r1 = (MR_Integer) 39;
	MR_GOTO_LAB(backend_libs__c_util__quote_one_char_4_0_i10);
MR_def_label(backend_libs__c_util__quote_one_char_4_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r2,92)) {
		MR_GOTO_LAB(backend_libs__c_util__quote_one_char_4_0_i9);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_r1 = (MR_Integer) 92;
MR_def_label(backend_libs__c_util__quote_one_char_4_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = (MR_Integer) 92;
	MR_tfield(1, MR_tempr1, 1) = MR_sv(3);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_r1;
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_r1 = MR_tempr2;
	MR_decr_sp_and_return(4);
	}
MR_def_label(backend_libs__c_util__quote_one_char_4_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_sv(2) = MR_tempr1;
	MR_sv(3) = MR_r3;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(char__is_alnum_1_0,
		backend_libs__c_util__quote_one_char_4_0_i28);
MR_def_label(backend_libs__c_util__quote_one_char_4_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(backend_libs__c_util__quote_one_char_4_0_i25);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_r1 = (MR_Word) MR_string_const(" !\"#%&\'()*+,-./:;<=>?[\\]^_{|}~", 30);
	}
	MR_np_call_localret_ent(string__contains_char_2_0,
		backend_libs__c_util__quote_one_char_4_0_i30);
MR_def_label(backend_libs__c_util__quote_one_char_4_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(backend_libs__c_util__quote_one_char_4_0_i23);
	}
MR_def_label(backend_libs__c_util__quote_one_char_4_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r1 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr1, 1) = MR_sv(3);
	MR_decr_sp_and_return(4);
	}
MR_def_label(backend_libs__c_util__quote_one_char_4_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(3);
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(backend_libs__c_util__quote_one_char_4_0_i34);
	}
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__char__to_int_1_0,
		backend_libs__c_util__quote_one_char_4_0_i36);
MR_def_label(backend_libs__c_util__quote_one_char_4_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_LT(MR_r1,128)) {
		MR_GOTO_LAB(backend_libs__c_util__quote_one_char_4_0_i33);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r1 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr1, 1) = MR_sv(3);
	MR_decr_sp_and_return(4);
	}
MR_def_label(backend_libs__c_util__quote_one_char_4_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
MR_def_label(backend_libs__c_util__quote_one_char_4_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_sv(2) = MR_tempr1;
	MR_sv(3) = MR_r3;
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Integer) 0;
	}
	MR_np_call_localret_ent(char__to_int_2_1,
		backend_libs__c_util__quote_one_char_4_0_i39);
MR_def_label(backend_libs__c_util__quote_one_char_4_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(backend_libs__c_util__quote_one_char_4_0_i38);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = (MR_Integer) 92;
	MR_tfield(1, MR_tempr1, 1) = MR_sv(3);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_r1 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = (MR_Integer) 48;
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_decr_sp_and_return(4);
	}
MR_def_label(backend_libs__c_util__quote_one_char_4_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(char__to_int_2_0,
		backend_libs__c_util__quote_one_char_4_0_i43);
MR_def_label(backend_libs__c_util__quote_one_char_4_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 8;
	MR_np_call_localret_ent(string__int_to_base_string_3_0,
		backend_libs__c_util__quote_one_char_4_0_i44);
MR_def_label(backend_libs__c_util__quote_one_char_4_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 48;
	MR_r3 = (MR_Integer) 3;
	MR_np_call_localret_ent(string__pad_left_4_0,
		backend_libs__c_util__quote_one_char_4_0_i45);
MR_def_label(backend_libs__c_util__quote_one_char_4_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__string__to_char_list_1_0,
		backend_libs__c_util__quote_one_char_4_0_i46);
MR_def_label(backend_libs__c_util__quote_one_char_4_0,46)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = (MR_Integer) 92;
	MR_tfield(1, MR_tempr1, 1) = MR_sv(3);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_99_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_118_101_114_115_101_95_97_112_112_101_110_100_95_95_91_49_93_95_48_3_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__int__mod_2_0);
MR_decl_entry(io__write_string_3_0);
MR_decl_entry(string__unsafe_index_3_0);
MR_decl_entry(string__from_rev_char_list_2_0);

MR_BEGIN_MODULE(backend_libs__c_util_module1)
	MR_init_entry1(backend_libs__c_util__do_output_quoted_string_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__backend_libs__c_util__do_output_quoted_string_6_0);
	MR_init_label10(backend_libs__c_util__do_output_quoted_string_6_0,79,8,10,3,4,11,12,13,14,15)
	MR_init_label4(backend_libs__c_util__do_output_quoted_string_6_0,20,21,16,81)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'do_output_quoted_string'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(backend_libs__c_util__do_output_quoted_string_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
MR_def_label(backend_libs__c_util__do_output_quoted_string_6_0,79)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) MR_r2 >= (MR_Integer) MR_r3)) {
		MR_GOTO_LAB(backend_libs__c_util__do_output_quoted_string_6_0_i81);
	}
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(backend_libs__c_util__do_output_quoted_string_6_0_i4);
	}
	if (MR_INT_EQ(MR_r2,0)) {
		MR_GOTO_LAB(backend_libs__c_util__do_output_quoted_string_6_0_i4);
	}
	MR_sv(1) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_sv(2) = MR_tempr1;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Integer) 512;
	}
	MR_np_call_localret_ent(fn__int__mod_2_0,
		backend_libs__c_util__do_output_quoted_string_6_0_i8);
MR_def_label(backend_libs__c_util__do_output_quoted_string_6_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(backend_libs__c_util__do_output_quoted_string_6_0_i3);
	}
	MR_r1 = (MR_Word) MR_string_const("\" \"", 3);
	MR_np_call_localret_ent(io__write_string_3_0,
		backend_libs__c_util__do_output_quoted_string_6_0_i10);
MR_def_label(backend_libs__c_util__do_output_quoted_string_6_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_r1 = MR_sv(4);
	MR_GOTO_LAB(backend_libs__c_util__do_output_quoted_string_6_0_i11);
MR_def_label(backend_libs__c_util__do_output_quoted_string_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(4);
MR_def_label(backend_libs__c_util__do_output_quoted_string_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(3) = MR_r3;
	MR_r1 = MR_r4;
MR_def_label(backend_libs__c_util__do_output_quoted_string_6_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r2;
	MR_sv(4) = MR_r1;
	MR_np_call_localret_ent(string__unsafe_index_3_0,
		backend_libs__c_util__do_output_quoted_string_6_0_i12);
MR_def_label(backend_libs__c_util__do_output_quoted_string_6_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(5);
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_np_call_localret_ent(backend_libs__c_util__quote_one_char_4_0,
		backend_libs__c_util__do_output_quoted_string_6_0_i13);
MR_def_label(backend_libs__c_util__do_output_quoted_string_6_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(string__from_rev_char_list_2_0,
		backend_libs__c_util__do_output_quoted_string_6_0_i14);
MR_def_label(backend_libs__c_util__do_output_quoted_string_6_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__write_string_3_0,
		backend_libs__c_util__do_output_quoted_string_6_0_i15);
MR_def_label(backend_libs__c_util__do_output_quoted_string_6_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(1),0)) {
		MR_GOTO_LAB(backend_libs__c_util__do_output_quoted_string_6_0_i16);
	}
	if (MR_INT_NE(MR_sv(5),63)) {
		MR_GOTO_LAB(backend_libs__c_util__do_output_quoted_string_6_0_i16);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_sv(2);
	MR_tempr1 = ((MR_Integer) MR_tempr2 + (MR_Integer) 2);
	if (((MR_Integer) MR_tempr1 >= (MR_Integer) MR_sv(3))) {
		MR_GOTO_LAB(backend_libs__c_util__do_output_quoted_string_6_0_i16);
	}
	MR_r1 = MR_sv(4);
	MR_r2 = ((MR_Integer) MR_tempr2 + (MR_Integer) 1);
	}
	MR_np_call_localret_ent(string__unsafe_index_3_0,
		backend_libs__c_util__do_output_quoted_string_6_0_i20);
MR_def_label(backend_libs__c_util__do_output_quoted_string_6_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) 63 != (MR_Integer) MR_r1)) {
		MR_GOTO_LAB(backend_libs__c_util__do_output_quoted_string_6_0_i16);
	}
	MR_r1 = MR_sv(4);
	MR_r2 = ((MR_Integer) MR_sv(2) + (MR_Integer) 2);
	MR_np_call_localret_ent(string__unsafe_index_3_0,
		backend_libs__c_util__do_output_quoted_string_6_0_i21);
MR_def_label(backend_libs__c_util__do_output_quoted_string_6_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(((MR_Unsigned) ((MR_Integer) MR_r1 - (MR_Integer) 33) <= 29))) {
		MR_GOTO_LAB(backend_libs__c_util__do_output_quoted_string_6_0_i16);
	}
	if (!((((MR_Integer) 1 << ((MR_Integer) MR_r1 - (MR_Integer) 33)) & (MR_Integer) 939545025))) {
		MR_GOTO_LAB(backend_libs__c_util__do_output_quoted_string_6_0_i16);
	}
	MR_r1 = (MR_Word) MR_string_const("\" \"", 3);
	MR_np_call_localret_ent(io__write_string_3_0,
		backend_libs__c_util__do_output_quoted_string_6_0_i16);
MR_def_label(backend_libs__c_util__do_output_quoted_string_6_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(4);
	MR_r2 = ((MR_Integer) MR_sv(2) + (MR_Integer) 1);
	MR_succip_word = MR_sv(6);
	MR_GOTO_LAB(backend_libs__c_util__do_output_quoted_string_6_0_i79);
MR_def_label(backend_libs__c_util__do_output_quoted_string_6_0,81)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(6);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__string__length_1_0);

MR_BEGIN_MODULE(backend_libs__c_util_module2)
	MR_init_entry1(backend_libs__c_util__output_quoted_string_lang_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__backend_libs__c_util__output_quoted_string_lang_4_0);
	MR_init_label1(backend_libs__c_util__output_quoted_string_lang_4_0,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'output_quoted_string_lang'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__backend_libs__c_util__output_quoted_string_lang_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__string__length_1_0,
		backend_libs__c_util__output_quoted_string_lang_4_0_i2);
MR_def_label(backend_libs__c_util__output_quoted_string_lang_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = (MR_Integer) 0;
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(backend_libs__c_util__do_output_quoted_string_6_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(backend_libs__c_util_module3)
	MR_init_entry1(backend_libs__c_util__output_quoted_string_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__backend_libs__c_util__output_quoted_string_3_0);
	MR_init_label1(backend_libs__c_util__output_quoted_string_3_0,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'output_quoted_string'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__backend_libs__c_util__output_quoted_string_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(fn__string__length_1_0,
		backend_libs__c_util__output_quoted_string_3_0_i2);
MR_def_label(backend_libs__c_util__output_quoted_string_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 0;
	MR_r2 = (MR_Integer) 0;
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(1);
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(backend_libs__c_util__do_output_quoted_string_6_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(backend_libs__c_util_module4)
	MR_init_entry1(backend_libs__c_util__can_print_directly_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__backend_libs__c_util__can_print_directly_4_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'can_print_directly'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(backend_libs__c_util__can_print_directly_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_String	Str;
	MR_Word	CanPrintDirectly;
#define	MR_PROC_LABEL	mercury__backend_libs__c_util__can_print_directly_4_0
	Str = (MR_String) MR_r1;
	MR_OBTAIN_GLOBAL_LOCK("can_print_directly");
{
#line 268 "c_util.m"
{
    static  MR_String   last_string;
    static  MR_bool     last_can_print_directly;
    MR_bool             can_print_directly;
    const char          *s;
    int                 len;

    /* We cache the result of the last decision. */
    if (Str == last_string) {
        CanPrintDirectly = last_can_print_directly;
    } else {
        can_print_directly = MR_TRUE;

        for (s = Str; *s != '\0'; s++) {
            if (! (isalnum(*s) || *s == '_' || *s == '/' || *s == '.')) {
                can_print_directly = MR_FALSE;
                break;
            }
        }

        len = s - Str;
        if (len >= 512) {
            can_print_directly = MR_FALSE;
        }

        CanPrintDirectly = can_print_directly;

        last_string = Str;
        last_can_print_directly = CanPrintDirectly;
    }
};}
#line 1087 "backend_libs.c_util.c"
	MR_RELEASE_GLOBAL_LOCK("can_print_directly");
	MR_r1 = CanPrintDirectly;
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(io__get_output_line_number_3_0);
MR_decl_entry(io__output_stream_name_3_0);
MR_decl_entry(io__write_int_3_0);

MR_BEGIN_MODULE(backend_libs__c_util_module5)
	MR_init_entry1(backend_libs__c_util__always_reset_line_num_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__backend_libs__c_util__always_reset_line_num_2_0);
	MR_init_label9(backend_libs__c_util__always_reset_line_num_2_0,2,3,7,8,9,12,11,14,16)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'always_reset_line_num'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__backend_libs__c_util__always_reset_line_num_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(io__get_output_line_number_3_0,
		backend_libs__c_util__always_reset_line_num_2_0_i2);
MR_def_label(backend_libs__c_util__always_reset_line_num_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(io__output_stream_name_3_0,
		backend_libs__c_util__always_reset_line_num_2_0_i3);
MR_def_label(backend_libs__c_util__always_reset_line_num_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_LE(MR_sv(1),0)) {
		MR_GOTO_LAB(backend_libs__c_util__always_reset_line_num_2_0_i16);
	}
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("", 0)) == 0)) {
		MR_GOTO_LAB(backend_libs__c_util__always_reset_line_num_2_0_i16);
	}
	MR_sv(2) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("#line ", 6);
	MR_np_call_localret_ent(io__write_string_3_0,
		backend_libs__c_util__always_reset_line_num_2_0_i7);
MR_def_label(backend_libs__c_util__always_reset_line_num_2_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = ((MR_Integer) MR_sv(1) + (MR_Integer) 1);
	MR_np_call_localret_ent(io__write_int_3_0,
		backend_libs__c_util__always_reset_line_num_2_0_i8);
MR_def_label(backend_libs__c_util__always_reset_line_num_2_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(" \"", 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		backend_libs__c_util__always_reset_line_num_2_0_i9);
MR_def_label(backend_libs__c_util__always_reset_line_num_2_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_String	Str;
	MR_Word	CanPrintDirectly;
#define	MR_PROC_LABEL	mercury__backend_libs__c_util__always_reset_line_num_2_0
	Str = (MR_String) MR_sv(2);
	MR_OBTAIN_GLOBAL_LOCK("can_print_directly");
{
#line 268 "c_util.m"
{
    static  MR_String   last_string;
    static  MR_bool     last_can_print_directly;
    MR_bool             can_print_directly;
    const char          *s;
    int                 len;

    /* We cache the result of the last decision. */
    if (Str == last_string) {
        CanPrintDirectly = last_can_print_directly;
    } else {
        can_print_directly = MR_TRUE;

        for (s = Str; *s != '\0'; s++) {
            if (! (isalnum(*s) || *s == '_' || *s == '/' || *s == '.')) {
                can_print_directly = MR_FALSE;
                break;
            }
        }

        len = s - Str;
        if (len >= 512) {
            can_print_directly = MR_FALSE;
        }

        CanPrintDirectly = can_print_directly;

        last_string = Str;
        last_can_print_directly = CanPrintDirectly;
    }
};}
#line 1189 "backend_libs.c_util.c"
	MR_RELEASE_GLOBAL_LOCK("can_print_directly");
	MR_r2 = CanPrintDirectly;
#undef	MR_PROC_LABEL
	}
	if (MR_INT_NE(MR_r2,0)) {
		MR_GOTO_LAB(backend_libs__c_util__always_reset_line_num_2_0_i11);
	}
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(fn__string__length_1_0,
		backend_libs__c_util__always_reset_line_num_2_0_i12);
MR_def_label(backend_libs__c_util__always_reset_line_num_2_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 0;
	MR_r2 = (MR_Integer) 0;
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(2);
	}
	MR_np_call_localret_ent(backend_libs__c_util__do_output_quoted_string_6_0,
		backend_libs__c_util__always_reset_line_num_2_0_i14);
MR_def_label(backend_libs__c_util__always_reset_line_num_2_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(io__write_string_3_0,
		backend_libs__c_util__always_reset_line_num_2_0_i14);
MR_def_label(backend_libs__c_util__always_reset_line_num_2_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("\"\n", 2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(io__write_string_3_0);
MR_def_label(backend_libs__c_util__always_reset_line_num_2_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(backend_libs__c_util_module6)
	MR_init_entry1(backend_libs__c_util__always_set_line_num_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__backend_libs__c_util__always_set_line_num_4_0);
	MR_init_label7(backend_libs__c_util__always_set_line_num_4_0,5,6,7,10,9,12,35)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'always_set_line_num'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__backend_libs__c_util__always_set_line_num_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_LE(MR_r2,0)) {
		MR_GOTO_LAB(backend_libs__c_util__always_set_line_num_4_0_i35);
	}
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("", 0)) == 0)) {
		MR_GOTO_LAB(backend_libs__c_util__always_set_line_num_4_0_i35);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_r1 = (MR_Word) MR_string_const("#line ", 6);
	MR_np_call_localret_ent(io__write_string_3_0,
		backend_libs__c_util__always_set_line_num_4_0_i5);
MR_def_label(backend_libs__c_util__always_set_line_num_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(io__write_int_3_0,
		backend_libs__c_util__always_set_line_num_4_0_i6);
MR_def_label(backend_libs__c_util__always_set_line_num_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(" \"", 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		backend_libs__c_util__always_set_line_num_4_0_i7);
MR_def_label(backend_libs__c_util__always_set_line_num_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_String	Str;
	MR_Word	CanPrintDirectly;
#define	MR_PROC_LABEL	mercury__backend_libs__c_util__always_set_line_num_4_0
	Str = (MR_String) MR_sv(1);
	MR_OBTAIN_GLOBAL_LOCK("can_print_directly");
{
#line 268 "c_util.m"
{
    static  MR_String   last_string;
    static  MR_bool     last_can_print_directly;
    MR_bool             can_print_directly;
    const char          *s;
    int                 len;

    /* We cache the result of the last decision. */
    if (Str == last_string) {
        CanPrintDirectly = last_can_print_directly;
    } else {
        can_print_directly = MR_TRUE;

        for (s = Str; *s != '\0'; s++) {
            if (! (isalnum(*s) || *s == '_' || *s == '/' || *s == '.')) {
                can_print_directly = MR_FALSE;
                break;
            }
        }

        len = s - Str;
        if (len >= 512) {
            can_print_directly = MR_FALSE;
        }

        CanPrintDirectly = can_print_directly;

        last_string = Str;
        last_can_print_directly = CanPrintDirectly;
    }
};}
#line 1311 "backend_libs.c_util.c"
	MR_RELEASE_GLOBAL_LOCK("can_print_directly");
	MR_r2 = CanPrintDirectly;
#undef	MR_PROC_LABEL
	}
	if (MR_INT_NE(MR_r2,0)) {
		MR_GOTO_LAB(backend_libs__c_util__always_set_line_num_4_0_i9);
	}
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(fn__string__length_1_0,
		backend_libs__c_util__always_set_line_num_4_0_i10);
MR_def_label(backend_libs__c_util__always_set_line_num_4_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 0;
	MR_r2 = (MR_Integer) 0;
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(1);
	}
	MR_np_call_localret_ent(backend_libs__c_util__do_output_quoted_string_6_0,
		backend_libs__c_util__always_set_line_num_4_0_i12);
MR_def_label(backend_libs__c_util__always_set_line_num_4_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(io__write_string_3_0,
		backend_libs__c_util__always_set_line_num_4_0_i12);
MR_def_label(backend_libs__c_util__always_set_line_num_4_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("\"\n", 2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(io__write_string_3_0);
MR_def_label(backend_libs__c_util__always_set_line_num_4_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(backend_libs__c_util__always_reset_line_num_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(libs__globals__lookup_bool_option_3_0);

MR_BEGIN_MODULE(backend_libs__c_util_module7)
	MR_init_entry1(backend_libs__c_util__set_line_num_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__backend_libs__c_util__set_line_num_5_0);
	MR_init_label2(backend_libs__c_util__set_line_num_5_0,2,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'set_line_num'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__backend_libs__c_util__set_line_num_5_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_r2 = (MR_Integer) 119;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		backend_libs__c_util__set_line_num_5_0_i2);
MR_def_label(backend_libs__c_util__set_line_num_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_EQ(MR_r1,0)) {
		MR_GOTO_LAB(backend_libs__c_util__set_line_num_5_0_i3);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(backend_libs__c_util__always_set_line_num_4_0);
MR_def_label(backend_libs__c_util__set_line_num_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(backend_libs__c_util_module8)
	MR_init_entry1(backend_libs__c_util__reset_line_num_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__backend_libs__c_util__reset_line_num_3_0);
	MR_init_label2(backend_libs__c_util__reset_line_num_3_0,2,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'reset_line_num'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__backend_libs__c_util__reset_line_num_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_r2 = (MR_Integer) 119;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		backend_libs__c_util__reset_line_num_3_0_i2);
MR_def_label(backend_libs__c_util__reset_line_num_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_EQ(MR_r1,0)) {
		MR_GOTO_LAB(backend_libs__c_util__reset_line_num_3_0_i3);
	}
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_np_tailcall_ent(backend_libs__c_util__always_reset_line_num_2_0);
MR_def_label(backend_libs__c_util__reset_line_num_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(1);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__char__det_from_int_1_0);

MR_BEGIN_MODULE(backend_libs__c_util_module9)
	MR_init_entry1(backend_libs__c_util__output_quoted_multi_string_lang_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__backend_libs__c_util__output_quoted_multi_string_lang_4_0);
	MR_init_label8(backend_libs__c_util__output_quoted_multi_string_lang_4_0,15,4,5,6,7,8,9,17)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'output_quoted_multi_string_lang'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__backend_libs__c_util__output_quoted_multi_string_lang_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
MR_def_label(backend_libs__c_util__output_quoted_multi_string_lang_4_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r2,0,0)) {
		MR_GOTO_LAB(backend_libs__c_util__output_quoted_multi_string_lang_4_0_i17);
	}
	MR_sv(1) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_sv(2) = MR_tfield(1, MR_tempr1, 0);
	MR_sv(3) = MR_tfield(1, MR_tempr1, 1);
	MR_r1 = MR_sv(2);
	}
	MR_np_call_localret_ent(fn__string__length_1_0,
		backend_libs__c_util__output_quoted_multi_string_lang_4_0_i4);
MR_def_label(backend_libs__c_util__output_quoted_multi_string_lang_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = (MR_Integer) 0;
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(2);
	}
	MR_np_call_localret_ent(backend_libs__c_util__do_output_quoted_string_6_0,
		backend_libs__c_util__output_quoted_multi_string_lang_4_0_i5);
MR_def_label(backend_libs__c_util__output_quoted_multi_string_lang_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_np_call_localret_ent(fn__char__det_from_int_1_0,
		backend_libs__c_util__output_quoted_multi_string_lang_4_0_i6);
MR_def_label(backend_libs__c_util__output_quoted_multi_string_lang_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	}
	MR_np_call_localret_ent(backend_libs__c_util__quote_one_char_4_0,
		backend_libs__c_util__output_quoted_multi_string_lang_4_0_i7);
MR_def_label(backend_libs__c_util__output_quoted_multi_string_lang_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(string__from_rev_char_list_2_0,
		backend_libs__c_util__output_quoted_multi_string_lang_4_0_i8);
MR_def_label(backend_libs__c_util__output_quoted_multi_string_lang_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__write_string_3_0,
		backend_libs__c_util__output_quoted_multi_string_lang_4_0_i9);
MR_def_label(backend_libs__c_util__output_quoted_multi_string_lang_4_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_succip_word = MR_sv(4);
	MR_GOTO_LAB(backend_libs__c_util__output_quoted_multi_string_lang_4_0_i15);
MR_def_label(backend_libs__c_util__output_quoted_multi_string_lang_4_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(4);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(backend_libs__c_util_module10)
	MR_init_entry1(backend_libs__c_util__output_quoted_multi_string_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__backend_libs__c_util__output_quoted_multi_string_3_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'output_quoted_multi_string'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__backend_libs__c_util__output_quoted_multi_string_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 0;
	MR_r2 = MR_tempr1;
	MR_np_tailcall_ent(backend_libs__c_util__output_quoted_multi_string_lang_4_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(backend_libs__c_util_module11)
	MR_init_entry1(backend_libs__c_util__output_quoted_char_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__backend_libs__c_util__output_quoted_char_3_0);
	MR_init_label2(backend_libs__c_util__output_quoted_char_3_0,2,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'output_quoted_char'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__backend_libs__c_util__output_quoted_char_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 0;
	MR_r2 = MR_tempr1;
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	}
	MR_np_call_localret_ent(backend_libs__c_util__quote_one_char_4_0,
		backend_libs__c_util__output_quoted_char_3_0_i2);
MR_def_label(backend_libs__c_util__output_quoted_char_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(string__from_rev_char_list_2_0,
		backend_libs__c_util__output_quoted_char_3_0_i3);
MR_def_label(backend_libs__c_util__output_quoted_char_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_np_tailcall_ent(io__write_string_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(string__foldl_4_1);

MR_BEGIN_MODULE(backend_libs__c_util_module12)
	MR_init_entry1(fn__backend_libs__c_util__quote_string_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__backend_libs__c_util__quote_string_1_0);
	MR_init_label1(fn__backend_libs__c_util__quote_string_1_0,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'quote_string'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__backend_libs__c_util__quote_string_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,2,1);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,4,0);
	MR_r3 = MR_tempr1;
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	}
	MR_np_call_localret_ent(string__foldl_4_1,
		fn__backend_libs__c_util__quote_string_1_0_i4);
MR_def_label(fn__backend_libs__c_util__quote_string_1_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_np_tailcall_ent(string__from_rev_char_list_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(backend_libs__c_util_module13)
	MR_init_entry1(fn__backend_libs__c_util__quote_char_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__backend_libs__c_util__quote_char_1_0);
	MR_init_label1(fn__backend_libs__c_util__quote_char_1_0,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'quote_char'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__backend_libs__c_util__quote_char_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 0;
	MR_r2 = MR_tempr1;
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	}
	MR_np_call_localret_ent(backend_libs__c_util__quote_one_char_4_0,
		fn__backend_libs__c_util__quote_char_1_0_i2);
MR_def_label(fn__backend_libs__c_util__quote_char_1_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_np_tailcall_ent(string__from_rev_char_list_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__string__format_2_0);

MR_BEGIN_MODULE(backend_libs__c_util_module14)
	MR_init_entry1(fn__backend_libs__c_util__make_float_literal_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__backend_libs__c_util__make_float_literal_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'make_float_literal'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__backend_libs__c_util__make_float_literal_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = (MR_Word) MR_string_const("%#.17g", 6);
	MR_np_tailcall_ent(fn__string__format_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(backend_libs__c_util_module15)
	MR_init_entry1(backend_libs__c_util__output_float_literal_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__backend_libs__c_util__output_float_literal_3_0);
	MR_init_label1(backend_libs__c_util__output_float_literal_3_0,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'output_float_literal'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__backend_libs__c_util__output_float_literal_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = (MR_Word) MR_string_const("%#.17g", 6);
	MR_r2 = MR_tempr2;
	}
	MR_np_call_localret_ent(fn__string__format_2_0,
		backend_libs__c_util__output_float_literal_3_0_i4);
MR_def_label(backend_libs__c_util__output_float_literal_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_np_tailcall_ent(io__write_string_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(backend_libs__c_util_module16)
	MR_init_entry1(backend_libs__c_util__unary_prefix_op_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__backend_libs__c_util__unary_prefix_op_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'unary_prefix_op'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__backend_libs__c_util__unary_prefix_op_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr3 = MR_r1;
	MR_tempr1 = (MR_Word) &MR_tfield(0, (MR_Word *) &mercury_vector_common_5_0, (MR_Integer) MR_tempr3);
	MR_tempr2 = MR_tempr3;
	MR_r1 = MR_tfield(0, MR_tempr1, 0);
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(backend_libs__c_util_module17)
	MR_init_entry1(backend_libs__c_util__binop_category_string_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__backend_libs__c_util__binop_category_string_3_0);
	MR_init_label10(backend_libs__c_util__binop_category_string_3_0,3,4,5,6,7,8,9,10,11,12)
	MR_init_label10(backend_libs__c_util__binop_category_string_3_0,13,14,15,16,17,18,19,20,21,22)
	MR_init_label10(backend_libs__c_util__binop_category_string_3_0,23,24,25,26,27,28,29,30,31,32)
	MR_init_label9(backend_libs__c_util__binop_category_string_3_0,33,34,35,36,37,38,39,40,41)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'binop_category_string'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__backend_libs__c_util__binop_category_string_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r3 = MR_tag(MR_tempr1);
	if ((MR_r3 != MR_mktag((MR_Integer) 0))) {
		MR_GOTO_LAB(backend_libs__c_util__binop_category_string_3_0_i3);
	}
	MR_COMPUTED_GOTO((MR_Unsigned) MR_unmkbody(MR_tempr1),
		MR_LABEL_AP(backend_libs__c_util__binop_category_string_3_0_i21) MR_AND
		MR_LABEL_AP(backend_libs__c_util__binop_category_string_3_0_i29) MR_AND
		MR_LABEL_AP(backend_libs__c_util__binop_category_string_3_0_i28) MR_AND
		MR_LABEL_AP(backend_libs__c_util__binop_category_string_3_0_i22) MR_AND
		MR_LABEL_AP(backend_libs__c_util__binop_category_string_3_0_i27) MR_AND
		MR_LABEL_AP(backend_libs__c_util__binop_category_string_3_0_i39) MR_AND
		MR_LABEL_AP(backend_libs__c_util__binop_category_string_3_0_i40) MR_AND
		MR_LABEL_AP(backend_libs__c_util__binop_category_string_3_0_i4) MR_AND
		MR_LABEL_AP(backend_libs__c_util__binop_category_string_3_0_i5) MR_AND
		MR_LABEL_AP(backend_libs__c_util__binop_category_string_3_0_i6) MR_AND
		MR_LABEL_AP(backend_libs__c_util__binop_category_string_3_0_i30) MR_AND
		MR_LABEL_AP(backend_libs__c_util__binop_category_string_3_0_i31) MR_AND
		MR_LABEL_AP(backend_libs__c_util__binop_category_string_3_0_i10) MR_AND
		MR_LABEL_AP(backend_libs__c_util__binop_category_string_3_0_i32) MR_AND
		MR_LABEL_AP(backend_libs__c_util__binop_category_string_3_0_i7) MR_AND
		MR_LABEL_AP(backend_libs__c_util__binop_category_string_3_0_i33) MR_AND
		MR_LABEL_AP(backend_libs__c_util__binop_category_string_3_0_i38) MR_AND
		MR_LABEL_AP(backend_libs__c_util__binop_category_string_3_0_i37) MR_AND
		MR_LABEL_AP(backend_libs__c_util__binop_category_string_3_0_i35) MR_AND
		MR_LABEL_AP(backend_libs__c_util__binop_category_string_3_0_i36) MR_AND
		MR_LABEL_AP(backend_libs__c_util__binop_category_string_3_0_i34) MR_AND
		MR_LABEL_AP(backend_libs__c_util__binop_category_string_3_0_i26) MR_AND
		MR_LABEL_AP(backend_libs__c_util__binop_category_string_3_0_i24) MR_AND
		MR_LABEL_AP(backend_libs__c_util__binop_category_string_3_0_i25) MR_AND
		MR_LABEL_AP(backend_libs__c_util__binop_category_string_3_0_i23) MR_AND
		MR_LABEL_AP(backend_libs__c_util__binop_category_string_3_0_i41) MR_AND
		MR_LABEL_AP(backend_libs__c_util__binop_category_string_3_0_i19) MR_AND
		MR_LABEL_AP(backend_libs__c_util__binop_category_string_3_0_i17) MR_AND
		MR_LABEL_AP(backend_libs__c_util__binop_category_string_3_0_i20) MR_AND
		MR_LABEL_AP(backend_libs__c_util__binop_category_string_3_0_i11) MR_AND
		MR_LABEL_AP(backend_libs__c_util__binop_category_string_3_0_i12) MR_AND
		MR_LABEL_AP(backend_libs__c_util__binop_category_string_3_0_i18) MR_AND
		MR_LABEL_AP(backend_libs__c_util__binop_category_string_3_0_i16) MR_AND
		MR_LABEL_AP(backend_libs__c_util__binop_category_string_3_0_i14) MR_AND
		MR_LABEL_AP(backend_libs__c_util__binop_category_string_3_0_i15) MR_AND
		MR_LABEL_AP(backend_libs__c_util__binop_category_string_3_0_i13) MR_AND
		MR_LABEL_AP(backend_libs__c_util__binop_category_string_3_0_i8) MR_AND
		MR_LABEL_AP(backend_libs__c_util__binop_category_string_3_0_i9));
	}
MR_def_label(backend_libs__c_util__binop_category_string_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_r2 = (MR_Word) MR_string_const("ARRAY_INDEX", 11);
	MR_proceed();
MR_def_label(backend_libs__c_util__binop_category_string_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 6;
	MR_r2 = (MR_Word) MR_string_const("&", 1);
	MR_proceed();
MR_def_label(backend_libs__c_util__binop_category_string_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 6;
	MR_r2 = (MR_Word) MR_string_const("|", 1);
	MR_proceed();
MR_def_label(backend_libs__c_util__binop_category_string_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 6;
	MR_r2 = (MR_Word) MR_string_const("^", 1);
	MR_proceed();
MR_def_label(backend_libs__c_util__binop_category_string_3_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 7;
	MR_r2 = (MR_Word) MR_string_const("MR_body", 7);
	MR_proceed();
MR_def_label(backend_libs__c_util__binop_category_string_3_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_r2 = (MR_Word) MR_string_const("COMPOUND_EQ", 11);
	MR_proceed();
MR_def_label(backend_libs__c_util__binop_category_string_3_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_r2 = (MR_Word) MR_string_const("COMPOUND_LT", 11);
	MR_proceed();
MR_def_label(backend_libs__c_util__binop_category_string_3_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 6;
	MR_r2 = (MR_Word) MR_string_const("==", 2);
	MR_proceed();
MR_def_label(backend_libs__c_util__binop_category_string_3_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 5;
	MR_r2 = (MR_Word) MR_string_const("/", 1);
	MR_proceed();
MR_def_label(backend_libs__c_util__binop_category_string_3_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 4;
	MR_r2 = (MR_Word) MR_string_const("==", 2);
	MR_proceed();
MR_def_label(backend_libs__c_util__binop_category_string_3_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 4;
	MR_r2 = (MR_Word) MR_string_const(">=", 2);
	MR_proceed();
MR_def_label(backend_libs__c_util__binop_category_string_3_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 4;
	MR_r2 = (MR_Word) MR_string_const(">", 1);
	MR_proceed();
MR_def_label(backend_libs__c_util__binop_category_string_3_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 4;
	MR_r2 = (MR_Word) MR_string_const("<=", 2);
	MR_proceed();
MR_def_label(backend_libs__c_util__binop_category_string_3_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 4;
	MR_r2 = (MR_Word) MR_string_const("<", 1);
	MR_proceed();
MR_def_label(backend_libs__c_util__binop_category_string_3_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 5;
	MR_r2 = (MR_Word) MR_string_const("-", 1);
	MR_proceed();
MR_def_label(backend_libs__c_util__binop_category_string_3_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 4;
	MR_r2 = (MR_Word) MR_string_const("!=", 2);
	MR_proceed();
MR_def_label(backend_libs__c_util__binop_category_string_3_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 5;
	MR_r2 = (MR_Word) MR_string_const("+", 1);
	MR_proceed();
MR_def_label(backend_libs__c_util__binop_category_string_3_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 5;
	MR_r2 = (MR_Word) MR_string_const("*", 1);
	MR_proceed();
MR_def_label(backend_libs__c_util__binop_category_string_3_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 6;
	MR_r2 = (MR_Word) MR_string_const("+", 1);
	MR_proceed();
MR_def_label(backend_libs__c_util__binop_category_string_3_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 6;
	MR_r2 = (MR_Word) MR_string_const("/", 1);
	MR_proceed();
MR_def_label(backend_libs__c_util__binop_category_string_3_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 6;
	MR_r2 = (MR_Word) MR_string_const(">=", 2);
	MR_proceed();
MR_def_label(backend_libs__c_util__binop_category_string_3_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 6;
	MR_r2 = (MR_Word) MR_string_const(">", 1);
	MR_proceed();
MR_def_label(backend_libs__c_util__binop_category_string_3_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 6;
	MR_r2 = (MR_Word) MR_string_const("<=", 2);
	MR_proceed();
MR_def_label(backend_libs__c_util__binop_category_string_3_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 6;
	MR_r2 = (MR_Word) MR_string_const("<", 1);
	MR_proceed();
MR_def_label(backend_libs__c_util__binop_category_string_3_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 6;
	MR_r2 = (MR_Word) MR_string_const("%", 1);
	MR_proceed();
MR_def_label(backend_libs__c_util__binop_category_string_3_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 6;
	MR_r2 = (MR_Word) MR_string_const("*", 1);
	MR_proceed();
MR_def_label(backend_libs__c_util__binop_category_string_3_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 6;
	MR_r2 = (MR_Word) MR_string_const("-", 1);
	MR_proceed();
MR_def_label(backend_libs__c_util__binop_category_string_3_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 6;
	MR_r2 = (MR_Word) MR_string_const("&&", 2);
	MR_proceed();
MR_def_label(backend_libs__c_util__binop_category_string_3_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 6;
	MR_r2 = (MR_Word) MR_string_const("||", 2);
	MR_proceed();
MR_def_label(backend_libs__c_util__binop_category_string_3_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 6;
	MR_r2 = (MR_Word) MR_string_const("!=", 2);
	MR_proceed();
MR_def_label(backend_libs__c_util__binop_category_string_3_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 2;
	MR_r2 = (MR_Word) MR_string_const("==", 2);
	MR_proceed();
MR_def_label(backend_libs__c_util__binop_category_string_3_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 2;
	MR_r2 = (MR_Word) MR_string_const(">=", 2);
	MR_proceed();
MR_def_label(backend_libs__c_util__binop_category_string_3_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 2;
	MR_r2 = (MR_Word) MR_string_const(">", 1);
	MR_proceed();
MR_def_label(backend_libs__c_util__binop_category_string_3_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 2;
	MR_r2 = (MR_Word) MR_string_const("<=", 2);
	MR_proceed();
MR_def_label(backend_libs__c_util__binop_category_string_3_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 2;
	MR_r2 = (MR_Word) MR_string_const("<", 1);
	MR_proceed();
MR_def_label(backend_libs__c_util__binop_category_string_3_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 2;
	MR_r2 = (MR_Word) MR_string_const("!=", 2);
	MR_proceed();
MR_def_label(backend_libs__c_util__binop_category_string_3_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 6;
	MR_r2 = (MR_Word) MR_string_const("<<", 2);
	MR_proceed();
MR_def_label(backend_libs__c_util__binop_category_string_3_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 6;
	MR_r2 = (MR_Word) MR_string_const(">>", 2);
	MR_proceed();
MR_def_label(backend_libs__c_util__binop_category_string_3_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 3;
	MR_r2 = (MR_Word) MR_string_const("<=", 2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(libs__globals__lookup_int_option_3_0);
MR_decl_entry(string__int_to_string_2_0);
MR_decl_entry(io__write_strings_3_0);

MR_BEGIN_MODULE(backend_libs__c_util_module18)
	MR_init_entry1(backend_libs__c_util__output_c_file_intro_and_grade_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__backend_libs__c_util__output_c_file_intro_and_grade_5_0);
	MR_init_label4(backend_libs__c_util__output_c_file_intro_and_grade_5_0,2,3,4,6)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'output_c_file_intro_and_grade'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__backend_libs__c_util__output_c_file_intro_and_grade_5_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_r2 = (MR_Integer) 209;
	MR_np_call_localret_ent(libs__globals__lookup_int_option_3_0,
		backend_libs__c_util__output_c_file_intro_and_grade_5_0_i2);
MR_def_label(backend_libs__c_util__output_c_file_intro_and_grade_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(string__int_to_string_2_0,
		backend_libs__c_util__output_c_file_intro_and_grade_5_0_i3);
MR_def_label(backend_libs__c_util__output_c_file_intro_and_grade_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Integer) 215;
	}
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		backend_libs__c_util__output_c_file_intro_and_grade_5_0_i4);
MR_def_label(backend_libs__c_util__output_c_file_intro_and_grade_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(backend_libs__c_util__output_c_file_intro_and_grade_5_0_i6);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_TAG_COMMON(1,6,7);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = (MR_Word) MR_string_const("** TAG_BITS=", 12);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = (MR_Word) MR_string_const("**\n", 3);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = (MR_Word) MR_string_const("** the generation of this C file were\n", 38);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = (MR_Word) MR_string_const("** The autoconfigured grade settings governing\n", 47);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = (MR_Word) MR_string_const("**\n", 3);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = (MR_Word) MR_string_const("** Do not edit.\n", 16);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = (MR_Word) MR_string_const(".\n", 2);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(3);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = (MR_Word) MR_string_const("** version ", 11);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = (MR_Word) MR_string_const("** by the Mercury compiler,\n", 28);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = (MR_Word) MR_string_const("\'\n", 2);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = (MR_Word) MR_string_const("** Automatically generated from \140", 33);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_r1 = MR_tempr3;
	MR_tfield(1, MR_tempr3, 0) = (MR_Word) MR_string_const("/*\n", 3);
	MR_tfield(1, MR_tempr3, 1) = MR_tempr2;
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(io__write_strings_3_0);
	}
MR_def_label(backend_libs__c_util__output_c_file_intro_and_grade_5_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_TAG_COMMON(1,6,10);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = (MR_Word) MR_string_const("** TAG_BITS=", 12);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = (MR_Word) MR_string_const("**\n", 3);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = (MR_Word) MR_string_const("** the generation of this C file were\n", 38);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = (MR_Word) MR_string_const("** The autoconfigured grade settings governing\n", 47);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = (MR_Word) MR_string_const("**\n", 3);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = (MR_Word) MR_string_const("** Do not edit.\n", 16);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = (MR_Word) MR_string_const(".\n", 2);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(3);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = (MR_Word) MR_string_const("** version ", 11);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = (MR_Word) MR_string_const("** by the Mercury compiler,\n", 28);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = (MR_Word) MR_string_const("\'\n", 2);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = (MR_Word) MR_string_const("** Automatically generated from \140", 33);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_r1 = MR_tempr3;
	MR_tfield(1, MR_tempr3, 0) = (MR_Word) MR_string_const("/*\n", 3);
	MR_tfield(1, MR_tempr3, 1) = MR_tempr2;
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(io__write_strings_3_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(string__index_3_0);
MR_decl_entry(char__is_alpha_or_underscore_1_0);
MR_decl_entry(string__is_all_alnum_or_underscore_1_0);

MR_BEGIN_MODULE(backend_libs__c_util_module19)
	MR_init_entry1(backend_libs__c_util__is_valid_c_identifier_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__backend_libs__c_util__is_valid_c_identifier_1_0);
	MR_init_label3(backend_libs__c_util__is_valid_c_identifier_1_0,2,4,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'is_valid_c_identifier'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__backend_libs__c_util__is_valid_c_identifier_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_r2 = (MR_Integer) 0;
	MR_np_call_localret_ent(string__index_3_0,
		backend_libs__c_util__is_valid_c_identifier_1_0_i2);
MR_def_label(backend_libs__c_util__is_valid_c_identifier_1_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(backend_libs__c_util__is_valid_c_identifier_1_0_i1);
	}
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(char__is_alpha_or_underscore_1_0,
		backend_libs__c_util__is_valid_c_identifier_1_0_i4);
MR_def_label(backend_libs__c_util__is_valid_c_identifier_1_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(backend_libs__c_util__is_valid_c_identifier_1_0_i1);
	}
	MR_r1 = MR_sv(1);
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(string__is_all_alnum_or_underscore_1_0);
MR_def_label(backend_libs__c_util__is_valid_c_identifier_1_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(backend_libs__c_util_module20)
	MR_init_entry1(__Unify___backend_libs__c_util__binop_category_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___backend_libs__c_util__binop_category_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___backend_libs__c_util__binop_category_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_r1 == MR_r2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(private_builtin__builtin_compare_int_3_0);

MR_BEGIN_MODULE(backend_libs__c_util_module21)
	MR_init_entry1(__Compare___backend_libs__c_util__binop_category_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___backend_libs__c_util__binop_category_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___backend_libs__c_util__binop_category_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(backend_libs__c_util_module22)
	MR_init_entry1(__Unify___backend_libs__c_util__literal_language_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___backend_libs__c_util__literal_language_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___backend_libs__c_util__literal_language_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_r1 == MR_r2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(backend_libs__c_util_module23)
	MR_init_entry1(__Compare___backend_libs__c_util__literal_language_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___backend_libs__c_util__literal_language_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___backend_libs__c_util__literal_language_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_string_0;
MR_decl_entry(__Unify___list__list_1_0);

MR_BEGIN_MODULE(backend_libs__c_util_module24)
	MR_init_entry1(__Unify___backend_libs__c_util__multi_string_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___backend_libs__c_util__multi_string_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___backend_libs__c_util__multi_string_0_0);
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

MR_BEGIN_MODULE(backend_libs__c_util_module25)
	MR_init_entry1(__Compare___backend_libs__c_util__multi_string_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___backend_libs__c_util__multi_string_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___backend_libs__c_util__multi_string_0_0);
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


MR_BEGIN_MODULE(backend_libs__c_util_module26)
	MR_init_entry1(f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_99_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_118_101_114_115_101_95_97_112_112_101_110_100_95_95_91_49_93_95_48_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_99_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_118_101_114_115_101_95_97_112_112_101_110_100_95_95_91_49_93_95_48_3_0);
	MR_init_label2(f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_99_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_118_101_114_115_101_95_97_112_112_101_110_100_95_95_91_49_93_95_48_3_0,5,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__pred__reverse_append__[1]_0'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_99_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_118_101_114_115_101_95_97_112_112_101_110_100_95_95_91_49_93_95_48_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_99_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_118_101_114_115_101_95_97_112_112_101_110_100_95_95_91_49_93_95_48_3_0_i2);
	}
MR_def_label(f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_99_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_118_101_114_115_101_95_97_112_112_101_110_100_95_95_91_49_93_95_48_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	while (1) {
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_tfield(1, MR_r1, 0);
	MR_tfield(1, MR_tempr1, 1) = MR_r2;
	MR_r1 = MR_tfield(1, MR_r1, 1);
	MR_r2 = MR_tempr1;
	if (MR_LTAGS_TESTR(MR_r1,0,0))
		continue;
	}
	break; } /* end while */
MR_def_label(f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_99_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_118_101_114_115_101_95_97_112_112_101_110_100_95_95_91_49_93_95_48_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

static void mercury__backend_libs__c_util_maybe_bunch_0(void)
{
	backend_libs__c_util_module0();
	backend_libs__c_util_module1();
	backend_libs__c_util_module2();
	backend_libs__c_util_module3();
	backend_libs__c_util_module4();
	backend_libs__c_util_module5();
	backend_libs__c_util_module6();
	backend_libs__c_util_module7();
	backend_libs__c_util_module8();
	backend_libs__c_util_module9();
	backend_libs__c_util_module10();
	backend_libs__c_util_module11();
	backend_libs__c_util_module12();
	backend_libs__c_util_module13();
	backend_libs__c_util_module14();
	backend_libs__c_util_module15();
	backend_libs__c_util_module16();
	backend_libs__c_util_module17();
	backend_libs__c_util_module18();
	backend_libs__c_util_module19();
	backend_libs__c_util_module20();
	backend_libs__c_util_module21();
	backend_libs__c_util_module22();
	backend_libs__c_util_module23();
	backend_libs__c_util_module24();
	backend_libs__c_util_module25();
	backend_libs__c_util_module26();
}

/* suppress gcc -Wmissing-decls warnings */
void mercury__backend_libs__c_util__init(void);
void mercury__backend_libs__c_util__init_type_tables(void);
void mercury__backend_libs__c_util__init_debugger(void);
#ifdef MR_DEEP_PROFILING
void mercury__backend_libs__c_util__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp);
#endif
#ifdef MR_RECORD_TERM_SIZES
void mercury__backend_libs__c_util__init_complexity_procs(void);
#endif

void mercury__backend_libs__c_util__init(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	mercury__backend_libs__c_util_maybe_bunch_0();
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_backend_libs__c_util__type_ctor_info_binop_category_0,
		backend_libs__c_util__binop_category_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_backend_libs__c_util__type_ctor_info_literal_language_0,
		backend_libs__c_util__literal_language_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_backend_libs__c_util__type_ctor_info_multi_string_0,
		backend_libs__c_util__multi_string_0_0);
	mercury__backend_libs__c_util__init_debugger();
}

void mercury__backend_libs__c_util__init_type_tables(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	{
		MR_register_type_ctor_info(
		&mercury_data_backend_libs__c_util__type_ctor_info_binop_category_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_backend_libs__c_util__type_ctor_info_literal_language_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_backend_libs__c_util__type_ctor_info_multi_string_0);
	}
}


void mercury__backend_libs__c_util__init_debugger(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}

#ifdef MR_DEEP_PROFILING

void mercury__backend_libs__c_util__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp)
{
	MR_write_out_module_proc_reps_start(procrep_fp, &mercury_data__module_common_layout__backend_libs__c_util);
	MR_write_out_module_proc_reps_end(procrep_fp);
}

#endif

#ifdef MR_RECORD_TERM_SIZES

void mercury__backend_libs__c_util__init_complexity_procs(void)
{
}

#endif

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;
