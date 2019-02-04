/*
** Automatically generated from `demangle.m'
** by the Mercury compiler,
** version rotd-2010-06-17, configured for x86_64-unknown-linux-gnu.
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
INIT mercury__demangle__init
ENDINIT
*/

#define MR_ALLOW_RESET
#include "mercury_imp.h"
#line 136 "../library/io.int2"
#include "io.mh"

#line 28 "demangle.c"
#line 144 "../library/io.int2"
#include "string.mh"

#line 32 "demangle.c"
#line 29 "../library/bitmap.int2"
#include "bitmap.mh"

#line 36 "demangle.c"
#line 28 "../library/time.int2"
#include "time.mh"

#line 40 "demangle.c"
#line 31 "../library/array.int2"
#include "array.mh"

#line 44 "demangle.c"
#line 45 "demangle.c"
#include "demangle.mh"

#line 48 "demangle.c"
#line 49 "demangle.c"
#ifndef DEMANGLE_DECL_GUARD
#define DEMANGLE_DECL_GUARD

#line 53 "demangle.c"
#line 54 "demangle.c"

#endif
#line 57 "demangle.c"

#ifdef _MSC_VER
#define MR_STATIC_LINKAGE extern
#else
#define MR_STATIC_LINKAGE static
#endif

struct mercury_type_1 {
	MR_String f1;
};
MR_STATIC_LINKAGE const struct mercury_type_1 mercury_common_1[];

struct mercury_type_2 {
	MR_String f1;
	MR_Word * f2;
};
MR_STATIC_LINKAGE const struct mercury_type_2 mercury_common_2[];

struct mercury_type_0 {
	MR_Integer f1;
};
MR_STATIC_LINKAGE const struct mercury_type_0 mercury_vector_common_0_0[];

MR_STATIC_LINKAGE const struct mercury_type_0 mercury_vector_common_0_1[];

MR_STATIC_LINKAGE const struct mercury_type_0 mercury_vector_common_0_2[];

MR_STATIC_LINKAGE const struct mercury_type_0 mercury_vector_common_0_3[];

MR_STATIC_LINKAGE const struct mercury_type_0 mercury_vector_common_0_4[];

MR_STATIC_LINKAGE const struct mercury_type_0 mercury_vector_common_0_5[];

MR_STATIC_LINKAGE const struct mercury_type_0 mercury_vector_common_0_6[];

extern const MR_TypeCtorInfo_Struct
	mercury_data_demangle__type_ctor_info_data_category_0,
	mercury_data_demangle__type_ctor_info_introduced_pred_type_0,
	mercury_data_demangle__type_ctor_info_pred_category_0;
MR_decl_label8(demangle__demangle_2_0, 4,3,7,9,11,10,15,2)
MR_decl_label10(demangle__demangle_class_args_4_0, 3,7,9,12,14,17,16,20,21,22)
MR_decl_label3(demangle__demangle_class_args_4_0, 23,24,1)
MR_decl_label10(demangle__demangle_from_c_2_0, 4,8,12,11,15,14,18,19,20,26)
MR_decl_label10(demangle__demangle_from_c_2_0, 27,28,29,30,31,23,34,36,38,40)
MR_decl_label10(demangle__demangle_from_c_2_0, 35,43,45,47,42,50,52,54,49,56)
MR_decl_label5(demangle__demangle_from_c_2_0, 58,63,65,10,71)
MR_decl_label3(demangle__demangle_higher_order_5_0, 3,5,2)
MR_decl_label10(demangle__demangle_proc_hl_2_0, 3,2,6,9,11,8,14,16,18,20)
MR_decl_label10(demangle__demangle_proc_hl_2_0, 22,24,25,26,27,32,29,34,15,37)
MR_decl_label10(demangle__demangle_proc_hl_2_0, 39,41,43,45,46,47,48,53,50,55)
MR_decl_label10(demangle__demangle_proc_hl_2_0, 36,58,60,57,64,66,67,70,68,73)
MR_decl_label10(demangle__demangle_proc_hl_2_0, 74,79,76,81,86,89,90,93,95,96)
MR_decl_label1(demangle__demangle_proc_hl_2_0, 1)
MR_decl_label10(demangle__demangle_proc_ll_2_0, 2,5,4,8,11,14,16,10,19,21)
MR_decl_label10(demangle__demangle_proc_ll_2_0, 23,26,25,29,28,33,32,39,41,42)
MR_decl_label10(demangle__demangle_proc_ll_2_0, 47,43,49,53,55,56,50,61,63,64)
MR_decl_label2(demangle__demangle_proc_ll_2_0, 65,1)
MR_decl_label10(demangle__demangle_typeclass_info_2_0, 3,2,6,9,13,15,18,20,22,24)
MR_decl_label5(demangle__demangle_typeclass_info_2_0, 26,27,28,29,1)
MR_decl_label7(demangle__demangle_unused_args_5_0, 3,5,2,11,13,17,10)
MR_decl_label6(demangle__find_matching_close_bracket_5_0, 37,2,3,6,8,1)
MR_decl_label10(demangle__fix_mangled_ascii_2_0, 3,2,7,6,11,10,15,14,19,18)
MR_decl_label10(demangle__fix_mangled_ascii_2_0, 23,22,27,26,31,30,35,34,39,38)
MR_decl_label10(demangle__fix_mangled_ascii_2_0, 43,42,47,46,51,50,55,54,59,58)
MR_decl_label7(demangle__fix_mangled_ascii_2_0, 63,62,67,69,66,71,70)
MR_decl_label8(demangle__fix_mangled_ascii_chars_2_0, 2,5,8,10,7,13,15,1)
MR_decl_label10(demangle__format_data_5_0, 3,5,6,7,8,88,13,14,15,16)
MR_decl_label10(demangle__format_data_5_0, 17,11,20,21,22,23,86,29,30,31)
MR_decl_label10(demangle__format_data_5_0, 32,33,27,36,37,38,39,87,45,46)
MR_decl_label10(demangle__format_data_5_0, 47,48,49,43,52,53,54,55,56,1)
MR_decl_label2(demangle__format_maybe_module_3_0, 13,4)
MR_decl_label10(demangle__format_proc_11_0, 2,62,63,64,18,36,37,38,39,40)
MR_decl_label10(demangle__format_proc_11_0, 41,42,59,27,28,29,30,31,32,20)
MR_decl_label10(demangle__format_proc_11_0, 21,22,23,45,46,47,48,49,50,51)
MR_decl_label10(demangle__format_proc_11_0, 52,53,54,55,4,5,6,7,8,11)
MR_decl_label10(demangle__format_proc_11_0, 12,13,14,15,71,72,73,74,75,76)
MR_decl_label10(demangle__format_proc_11_0, 77,78,83,84,86,91,89,95,100,103)
MR_decl_label1(demangle__format_proc_11_0, 101)
MR_decl_label10(demangle__handle_category_etc_5_0, 5,4,8,7,11,10,13,18,20,19)
MR_decl_label10(demangle__handle_category_etc_5_0, 23,22,26,29,33,35,36,37,32,39)
MR_decl_label10(demangle__handle_category_etc_5_0, 43,44,45,47,41,49,52,54,56,59)
MR_decl_label4(demangle__handle_category_etc_5_0, 61,30,2,1)
MR_decl_label7(demangle__handle_compiler_generated_pred_4_0, 3,2,6,5,10,9,1)
MR_decl_label3(demangle__remove_int_2_4_0, 21,3,2)
MR_decl_label10(demangle__remove_maybe_module_prefix_4_0, 6,7,4,11,13,14,15,17,22,16)
MR_decl_label1(demangle__remove_maybe_module_prefix_4_0, 10)
MR_decl_label6(demangle__remove_trailing_int_3_0, 2,3,5,9,7,1)
MR_decl_label3(__Unify___demangle__introduced_pred_type_0_0, 8,13,1)
MR_decl_label4(__Unify___demangle__pred_category_0_0, 7,9,14,1)
MR_decl_label8(__Compare___demangle__introduced_pred_type_0_0, 51,43,21,55,5,12,32,37)
MR_decl_label10(__Compare___demangle__pred_category_0_0, 71,21,75,25,27,31,35,5,13,111)
MR_decl_label3(__Compare___demangle__pred_category_0_0, 53,90,62)
MR_decl_static(demangle__remove_trailing_int_3_0)
MR_decl_static(demangle__demangle_unused_args_5_0)
MR_decl_static(demangle__demangle_higher_order_5_0)
MR_decl_static(demangle__handle_compiler_generated_pred_4_0)
MR_decl_static(demangle__remove_int_2_4_0)
MR_decl_static(demangle__find_matching_close_bracket_5_0)
MR_decl_static(demangle__handle_category_etc_5_0)
MR_decl_static(demangle__format_maybe_module_3_0)
MR_decl_static(demangle__format_proc_11_0)
MR_decl_static(demangle__fix_mangled_ascii_chars_2_0)
MR_decl_static(demangle__insert_prefix_3_0)
MR_decl_static(demangle__fix_mangled_ascii_2_0)
MR_decl_static(demangle__remove_maybe_module_prefix_4_0)
MR_decl_static(demangle__demangle_proc_ll_2_0)
MR_decl_static(demangle__demangle_proc_hl_2_0)
MR_decl_static(demangle__format_data_5_0)
MR_decl_static(demangle__demangle_class_args_4_0)
MR_decl_static(demangle__demangle_typeclass_info_2_0)
MR_decl_static(demangle__demangle_from_c_2_0)
MR_def_extern_entry(demangle__demangle_2_0)
MR_decl_static(__Unify___demangle__data_category_0_0)
MR_decl_static(__Compare___demangle__data_category_0_0)
MR_decl_static(__Unify___demangle__introduced_pred_type_0_0)
MR_decl_static(__Compare___demangle__introduced_pred_type_0_0)
MR_decl_static(__Unify___demangle__pred_category_0_0)
MR_decl_static(__Compare___demangle__pred_category_0_0)
MR_decl_static(f_100_101_109_97_110_103_108_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_99_103_95_115_101_116_95_95_91_49_44_32_50_44_32_52_93_95_48_3_0)

static const struct mercury_type_1 mercury_common_1[1] =
{
{
MR_string_const("", 0)
},
};

static const struct mercury_type_2 mercury_common_2[16] =
{
{
MR_string_const("UnusedArgs__", 12),
MR_tbmkword(0, 0)
},
{
MR_string_const("TypeSpecOf__", 12),
MR_TAG_COMMON(1,2,0)
},
{
MR_string_const("AccFrom__", 9),
MR_TAG_COMMON(1,2,1)
},
{
MR_string_const("DeforestationIn__", 17),
MR_TAG_COMMON(1,2,2)
},
{
MR_string_const("IntroducedFrom__", 16),
MR_TAG_COMMON(1,2,3)
},
{
MR_string_const("__", 2),
MR_tbmkword(0, 0)
},
{
MR_string_const("UnusedArgs__", 12),
MR_TAG_COMMON(1,2,5)
},
{
MR_string_const("TypeSpecOf__", 12),
MR_TAG_COMMON(1,2,6)
},
{
MR_string_const("AccFrom__", 9),
MR_TAG_COMMON(1,2,7)
},
{
MR_string_const("DeforestationIn__", 17),
MR_TAG_COMMON(1,2,8)
},
{
MR_string_const("IntroducedFrom__", 16),
MR_TAG_COMMON(1,2,9)
},
{
MR_string_const("arity", 5),
MR_tbmkword(0, 0)
},
{
MR_string_const("common_", 7),
MR_tbmkword(0, 0)
},
{
MR_string_const("type_ctor_functors_", 19),
MR_TAG_COMMON(1,2,12)
},
{
MR_string_const("type_ctor_layout_", 17),
MR_TAG_COMMON(1,2,13)
},
{
MR_string_const("type_ctor_info_", 15),
MR_TAG_COMMON(1,2,14)
},
};

static const struct mercury_type_0 mercury_vector_common_0_0[10] =
{
{
0
},
{
1
},
{
2
},
{
3
},
{
4
},
{
5
},
{
6
},
{
7
},
{
8
},
{
9
},
};

static const struct mercury_type_0 mercury_vector_common_0_1[10] =
{
{
0
},
{
1
},
{
2
},
{
3
},
{
4
},
{
5
},
{
6
},
{
7
},
{
8
},
{
9
},
};

static const struct mercury_type_0 mercury_vector_common_0_2[10] =
{
{
0
},
{
1
},
{
2
},
{
3
},
{
4
},
{
5
},
{
6
},
{
7
},
{
8
},
{
9
},
};

static const struct mercury_type_0 mercury_vector_common_0_3[10] =
{
{
0
},
{
1
},
{
2
},
{
3
},
{
4
},
{
5
},
{
6
},
{
7
},
{
8
},
{
9
},
};

static const struct mercury_type_0 mercury_vector_common_0_4[10] =
{
{
0
},
{
1
},
{
2
},
{
3
},
{
4
},
{
5
},
{
6
},
{
7
},
{
8
},
{
9
},
};

static const struct mercury_type_0 mercury_vector_common_0_5[10] =
{
{
0
},
{
1
},
{
2
},
{
3
},
{
4
},
{
5
},
{
6
},
{
7
},
{
8
},
{
9
},
};

static const struct mercury_type_0 mercury_vector_common_0_6[10] =
{
{
0
},
{
1
},
{
2
},
{
3
},
{
4
},
{
5
},
{
6
},
{
7
},
{
8
},
{
9
},
};

static const MR_EnumFunctorDesc mercury_data_demangle__enum_functor_desc_data_category_0_0 = {
	"common",
	0
};

static const MR_EnumFunctorDesc mercury_data_demangle__enum_functor_desc_data_category_0_1 = {
	"info",
	1
};

static const MR_EnumFunctorDesc mercury_data_demangle__enum_functor_desc_data_category_0_2 = {
	"layout",
	2
};

static const MR_EnumFunctorDesc mercury_data_demangle__enum_functor_desc_data_category_0_3 = {
	"functors",
	3
};

const MR_EnumFunctorDescPtr mercury_data_demangle__enum_value_ordered_data_category_0[] = {
	&mercury_data_demangle__enum_functor_desc_data_category_0_0,
	&mercury_data_demangle__enum_functor_desc_data_category_0_1,
	&mercury_data_demangle__enum_functor_desc_data_category_0_2,
	&mercury_data_demangle__enum_functor_desc_data_category_0_3
};

const MR_EnumFunctorDescPtr mercury_data_demangle__enum_name_ordered_data_category_0[] = {
	&mercury_data_demangle__enum_functor_desc_data_category_0_0,
	&mercury_data_demangle__enum_functor_desc_data_category_0_3,
	&mercury_data_demangle__enum_functor_desc_data_category_0_1,
	&mercury_data_demangle__enum_functor_desc_data_category_0_2
};

const MR_Integer mercury_data_demangle__functor_number_map_data_category_0[] = {
	0,
	2,
	3,
	1 };
	
const MR_TypeCtorInfo_Struct mercury_data_demangle__type_ctor_info_data_category_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_ENUM,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___demangle__data_category_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___demangle__data_category_0_0)),
	"demangle",
	"data_category",
	{ (void *)mercury_data_demangle__enum_name_ordered_data_category_0 },
	{ (void *)mercury_data_demangle__enum_value_ordered_data_category_0 },
	4,
	4,
	mercury_data_demangle__functor_number_map_data_category_0
};

static const MR_DuFunctorDesc mercury_data_demangle__du_functor_desc_introduced_pred_type_0_0 = {
	"lambda",
	0,
	0,
	MR_SECTAG_LOCAL,
	0,
	0,
	0,
	(MR_PseudoTypeInfo *) NULL,
	NULL,
	NULL
};

static const MR_DuFunctorDesc mercury_data_demangle__du_functor_desc_introduced_pred_type_0_1 = {
	"deforestation",
	0,
	0,
	MR_SECTAG_LOCAL,
	0,
	1,
	1,
	(MR_PseudoTypeInfo *) NULL,
	NULL,
	NULL
};

static const MR_DuFunctorDesc mercury_data_demangle__du_functor_desc_introduced_pred_type_0_2 = {
	"accumulator",
	0,
	0,
	MR_SECTAG_LOCAL,
	0,
	2,
	2,
	(MR_PseudoTypeInfo *) NULL,
	NULL,
	NULL
};
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_string_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_string_0;

const MR_PseudoTypeInfo mercury_data_demangle__field_types_introduced_pred_type_0_3[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_string_0
};

static const MR_DuFunctorDesc mercury_data_demangle__du_functor_desc_introduced_pred_type_0_3 = {
	"type_spec",
	1,
	0,
	MR_SECTAG_NONE,
	1,
	-1,
	3,
	(MR_PseudoTypeInfo *) mercury_data_demangle__field_types_introduced_pred_type_0_3,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_demangle__du_stag_ordered_introduced_pred_type_0_0[] = {
	&mercury_data_demangle__du_functor_desc_introduced_pred_type_0_0,
	&mercury_data_demangle__du_functor_desc_introduced_pred_type_0_1,
	&mercury_data_demangle__du_functor_desc_introduced_pred_type_0_2

};

const MR_DuFunctorDescPtr mercury_data_demangle__du_stag_ordered_introduced_pred_type_0_1[] = {
	&mercury_data_demangle__du_functor_desc_introduced_pred_type_0_3

};

const MR_DuPtagLayout mercury_data_demangle__du_ptag_ordered_introduced_pred_type_0[] = {
	{ 3, MR_SECTAG_LOCAL,
	mercury_data_demangle__du_stag_ordered_introduced_pred_type_0_0 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_demangle__du_stag_ordered_introduced_pred_type_0_1 }

};

const MR_DuFunctorDescPtr mercury_data_demangle__du_name_ordered_introduced_pred_type_0[] = {
	&mercury_data_demangle__du_functor_desc_introduced_pred_type_0_2,
	&mercury_data_demangle__du_functor_desc_introduced_pred_type_0_1,
	&mercury_data_demangle__du_functor_desc_introduced_pred_type_0_0,
	&mercury_data_demangle__du_functor_desc_introduced_pred_type_0_3
};

const MR_Integer mercury_data_demangle__functor_number_map_introduced_pred_type_0[] = {
	2,
	1,
	0,
	3 };
	
const MR_TypeCtorInfo_Struct mercury_data_demangle__type_ctor_info_introduced_pred_type_0 = {
	0,
	13,
	2,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___demangle__introduced_pred_type_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___demangle__introduced_pred_type_0_0)),
	"demangle",
	"introduced_pred_type",
	{ (void *)mercury_data_demangle__du_name_ordered_introduced_pred_type_0 },
	{ (void *)mercury_data_demangle__du_ptag_ordered_introduced_pred_type_0 },
	4,
	4,
	mercury_data_demangle__functor_number_map_introduced_pred_type_0
};

static const MR_DuFunctorDesc mercury_data_demangle__du_functor_desc_pred_category_0_0 = {
	"index",
	0,
	0,
	MR_SECTAG_LOCAL,
	0,
	0,
	0,
	(MR_PseudoTypeInfo *) NULL,
	NULL,
	NULL
};

static const MR_DuFunctorDesc mercury_data_demangle__du_functor_desc_pred_category_0_1 = {
	"unify",
	0,
	0,
	MR_SECTAG_LOCAL,
	0,
	1,
	1,
	(MR_PseudoTypeInfo *) NULL,
	NULL,
	NULL
};

static const MR_DuFunctorDesc mercury_data_demangle__du_functor_desc_pred_category_0_2 = {
	"compare",
	0,
	0,
	MR_SECTAG_LOCAL,
	0,
	2,
	2,
	(MR_PseudoTypeInfo *) NULL,
	NULL,
	NULL
};

static const MR_DuFunctorDesc mercury_data_demangle__du_functor_desc_pred_category_0_3 = {
	"ordinary",
	0,
	0,
	MR_SECTAG_LOCAL,
	0,
	3,
	3,
	(MR_PseudoTypeInfo *) NULL,
	NULL,
	NULL
};
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;
extern const MR_TypeCtorInfo_Struct mercury_data_demangle__type_ctor_info_introduced_pred_type_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;

const MR_PseudoTypeInfo mercury_data_demangle__field_types_pred_category_0_4[] = {
	(MR_PseudoTypeInfo) &mercury_data_demangle__type_ctor_info_introduced_pred_type_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_string_0
};

static const MR_DuFunctorDesc mercury_data_demangle__du_functor_desc_pred_category_0_4 = {
	"introduced",
	4,
	0,
	MR_SECTAG_NONE,
	1,
	-1,
	4,
	(MR_PseudoTypeInfo *) mercury_data_demangle__field_types_pred_category_0_4,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_demangle__du_stag_ordered_pred_category_0_0[] = {
	&mercury_data_demangle__du_functor_desc_pred_category_0_0,
	&mercury_data_demangle__du_functor_desc_pred_category_0_1,
	&mercury_data_demangle__du_functor_desc_pred_category_0_2,
	&mercury_data_demangle__du_functor_desc_pred_category_0_3

};

const MR_DuFunctorDescPtr mercury_data_demangle__du_stag_ordered_pred_category_0_1[] = {
	&mercury_data_demangle__du_functor_desc_pred_category_0_4

};

const MR_DuPtagLayout mercury_data_demangle__du_ptag_ordered_pred_category_0[] = {
	{ 4, MR_SECTAG_LOCAL,
	mercury_data_demangle__du_stag_ordered_pred_category_0_0 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_demangle__du_stag_ordered_pred_category_0_1 }

};

const MR_DuFunctorDescPtr mercury_data_demangle__du_name_ordered_pred_category_0[] = {
	&mercury_data_demangle__du_functor_desc_pred_category_0_2,
	&mercury_data_demangle__du_functor_desc_pred_category_0_0,
	&mercury_data_demangle__du_functor_desc_pred_category_0_4,
	&mercury_data_demangle__du_functor_desc_pred_category_0_3,
	&mercury_data_demangle__du_functor_desc_pred_category_0_1
};

const MR_Integer mercury_data_demangle__functor_number_map_pred_category_0[] = {
	1,
	4,
	0,
	3,
	2 };
	
const MR_TypeCtorInfo_Struct mercury_data_demangle__type_ctor_info_pred_category_0 = {
	0,
	13,
	2,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___demangle__pred_category_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___demangle__pred_category_0_0)),
	"demangle",
	"pred_category",
	{ (void *)mercury_data_demangle__du_name_ordered_pred_category_0 },
	{ (void *)mercury_data_demangle__du_ptag_ordered_pred_category_0 },
	5,
	4,
	mercury_data_demangle__functor_number_map_pred_category_0
};



MR_decl_entry(string__length_2_0);
MR_decl_entry(string__index_3_0);
MR_decl_entry(string__left_3_0);

MR_BEGIN_MODULE(demangle_module0)
	MR_init_entry1(demangle__remove_trailing_int_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__demangle__remove_trailing_int_3_0);
	MR_init_label6(demangle__remove_trailing_int_3_0,2,3,5,9,7,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'remove_trailing_int'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(demangle__remove_trailing_int_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(string__length_2_0,
		demangle__remove_trailing_int_3_0_i2);
MR_def_label(demangle__remove_trailing_int_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = ((MR_Integer) MR_r1 - (MR_Integer) 1);
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(string__index_3_0,
		demangle__remove_trailing_int_3_0_i3);
MR_def_label(demangle__remove_trailing_int_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(demangle__remove_trailing_int_3_0_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r2;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(2);
	}
	MR_np_call_localret_ent(string__left_3_0,
		demangle__remove_trailing_int_3_0_i5);
MR_def_label(demangle__remove_trailing_int_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(((MR_Unsigned) ((MR_Integer) MR_sv(1) - (MR_Integer) 48) <= 9))) {
		MR_GOTO_LAB(demangle__remove_trailing_int_3_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_sv(1);
	MR_r2 = (MR_Word) &MR_tfield(0, (MR_Word *) &mercury_vector_common_0_0, ((MR_Integer) MR_tempr2 - (MR_Integer) 48));
	MR_tempr1 = MR_tempr2;
	MR_sv(1) = MR_tfield(0, MR_r2, 0);
	MR_sv(2) = MR_r1;
	}
	MR_np_localcall_lab(demangle__remove_trailing_int_3_0,
		demangle__remove_trailing_int_3_0_i9);
MR_def_label(demangle__remove_trailing_int_3_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(demangle__remove_trailing_int_3_0_i7);
	}
	MR_r2 = (((MR_Integer) MR_r2 * (MR_Integer) 10) + (MR_Integer) MR_sv(1));
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(demangle__remove_trailing_int_3_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_r1;
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(demangle__remove_trailing_int_3_0,1)
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

MR_decl_entry(string__remove_suffix_3_0);
MR_decl_entry(fn__int__mod_2_0);

MR_BEGIN_MODULE(demangle_module1)
	MR_init_entry1(demangle__demangle_unused_args_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__demangle__demangle_unused_args_5_0);
	MR_init_label7(demangle__demangle_unused_args_5_0,3,5,2,11,13,17,10)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'demangle_unused_args'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(demangle__demangle_unused_args_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(3) = MR_r2;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(demangle__remove_trailing_int_3_0,
		demangle__demangle_unused_args_5_0_i3);
MR_def_label(demangle__demangle_unused_args_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(demangle__demangle_unused_args_5_0_i2);
	}
	MR_sv(2) = MR_r2;
	MR_r1 = MR_r3;
	MR_r2 = (MR_Word) MR_string_const("__ua", 4);
	MR_np_call_localret_ent(string__remove_suffix_3_0,
		demangle__demangle_unused_args_5_0_i5);
MR_def_label(demangle__demangle_unused_args_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(demangle__demangle_unused_args_5_0_i2);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 1) = (MR_Integer) 0;
	MR_tag_alloc_heap(MR_sv(1), 1, (MR_Integer) 1);
	MR_tfield(1, MR_sv(1), 0) = MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r2;
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Integer) 10000;
	}
	MR_np_call_localret_ent(fn__int__mod_2_0,
		demangle__demangle_unused_args_5_0_i17);
MR_def_label(demangle__demangle_unused_args_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(demangle__remove_trailing_int_3_0,
		demangle__demangle_unused_args_5_0_i11);
MR_def_label(demangle__demangle_unused_args_5_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(demangle__demangle_unused_args_5_0_i10);
	}
	MR_sv(2) = MR_r2;
	MR_r1 = MR_r3;
	MR_r2 = (MR_Word) MR_string_const("__uab", 5);
	MR_np_call_localret_ent(string__remove_suffix_3_0,
		demangle__demangle_unused_args_5_0_i13);
MR_def_label(demangle__demangle_unused_args_5_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(demangle__demangle_unused_args_5_0_i10);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 1) = (MR_Integer) 1;
	MR_tag_alloc_heap(MR_sv(1), 1, (MR_Integer) 1);
	MR_tfield(1, MR_sv(1), 0) = MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r2;
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Integer) 10000;
	}
	MR_np_call_localret_ent(fn__int__mod_2_0,
		demangle__demangle_unused_args_5_0_i17);
MR_def_label(demangle__demangle_unused_args_5_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(2);
	MR_decr_sp_and_return(4);
	}
MR_def_label(demangle__demangle_unused_args_5_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(3);
	MR_decr_sp_and_return(4);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(demangle_module2)
	MR_init_entry1(demangle__demangle_higher_order_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__demangle__demangle_higher_order_5_0);
	MR_init_label3(demangle__demangle_higher_order_5_0,3,5,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'demangle_higher_order'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(demangle__demangle_higher_order_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(3) = MR_r2;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(demangle__remove_trailing_int_3_0,
		demangle__demangle_higher_order_5_0_i3);
MR_def_label(demangle__demangle_higher_order_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(demangle__demangle_higher_order_5_0_i2);
	}
	MR_sv(2) = MR_r2;
	MR_r1 = MR_r3;
	MR_r2 = (MR_Word) MR_string_const("__ho", 4);
	MR_np_call_localret_ent(string__remove_suffix_3_0,
		demangle__demangle_higher_order_5_0_i5);
MR_def_label(demangle__demangle_higher_order_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(demangle__demangle_higher_order_5_0_i2);
	}
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r1, 0) = MR_sv(2);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tempr1;
	MR_decr_sp_and_return(4);
	}
MR_def_label(demangle__demangle_higher_order_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(3);
	MR_decr_sp_and_return(4);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(string__remove_prefix_3_0);

MR_BEGIN_MODULE(demangle_module3)
	MR_init_entry1(demangle__handle_compiler_generated_pred_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__demangle__handle_compiler_generated_pred_4_0);
	MR_init_label7(demangle__handle_compiler_generated_pred_4_0,3,2,6,5,10,9,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'handle_compiler_generated_pred'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(demangle__handle_compiler_generated_pred_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_r1 = (MR_Word) MR_string_const("__Unify__", 9);
	MR_np_call_localret_ent(string__remove_prefix_3_0,
		demangle__handle_compiler_generated_pred_4_0_i3);
MR_def_label(demangle__handle_compiler_generated_pred_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(demangle__handle_compiler_generated_pred_4_0_i2);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = (MR_Word) MR_tbmkword(0, 1);
	MR_r3 = MR_tempr1;
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_r1 = MR_TRUE;
	MR_proceed();
	}
MR_def_label(demangle__handle_compiler_generated_pred_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("__Compare__", 11);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(string__remove_prefix_3_0,
		demangle__handle_compiler_generated_pred_4_0_i6);
MR_def_label(demangle__handle_compiler_generated_pred_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(demangle__handle_compiler_generated_pred_4_0_i5);
	}
	if (MR_INT_NE(MR_sv(1),0)) {
		MR_GOTO_LAB(demangle__handle_compiler_generated_pred_4_0_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = (MR_Word) MR_tbmkword(0, 2);
	MR_r3 = MR_tempr1;
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_r1 = MR_TRUE;
	MR_proceed();
	}
MR_def_label(demangle__handle_compiler_generated_pred_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("__Index__", 9);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(string__remove_prefix_3_0,
		demangle__handle_compiler_generated_pred_4_0_i10);
MR_def_label(demangle__handle_compiler_generated_pred_4_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(demangle__handle_compiler_generated_pred_4_0_i9);
	}
	if (MR_INT_NE(MR_sv(1),0)) {
		MR_GOTO_LAB(demangle__handle_compiler_generated_pred_4_0_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_r3 = MR_tempr1;
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_r1 = MR_TRUE;
	MR_proceed();
	}
MR_def_label(demangle__handle_compiler_generated_pred_4_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_tbmkword(0, 3);
	MR_r3 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(demangle__handle_compiler_generated_pred_4_0,1)
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

MR_decl_entry(string__first_char_3_3);

MR_BEGIN_MODULE(demangle_module4)
	MR_init_entry1(demangle__remove_int_2_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__demangle__remove_int_2_4_0);
	MR_init_label3(demangle__remove_int_2_4_0,21,3,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'remove_int_2'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(demangle__remove_int_2_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
MR_def_label(demangle__remove_int_2_4_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(string__first_char_3_3,
		demangle__remove_int_2_4_0_i3);
MR_def_label(demangle__remove_int_2_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(demangle__remove_int_2_4_0_i2);
	}
	if (!(((MR_Unsigned) ((MR_Integer) MR_r2 - (MR_Integer) 48) <= 9))) {
		MR_GOTO_LAB(demangle__remove_int_2_4_0_i2);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = (MR_Word) &MR_tfield(0, (MR_Word *) &mercury_vector_common_0_1, ((MR_Integer) MR_r2 - (MR_Integer) 48));
	MR_r1 = MR_tfield(0, MR_tempr1, 0);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_r3;
	MR_r1 = (((MR_Integer) MR_sv(1) * (MR_Integer) 10) + (MR_Integer) MR_r1);
	MR_succip_word = MR_sv(3);
	MR_GOTO_LAB(demangle__remove_int_2_4_0_i21);
	}
MR_def_label(demangle__remove_int_2_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(string__unsafe_index_3_0);

MR_BEGIN_MODULE(demangle_module5)
	MR_init_entry1(demangle__find_matching_close_bracket_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__demangle__find_matching_close_bracket_5_0);
	MR_init_label6(demangle__find_matching_close_bracket_5_0,37,2,3,6,8,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'find_matching_close_bracket'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(demangle__find_matching_close_bracket_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
MR_def_label(demangle__find_matching_close_bracket_5_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) MR_r4 >= (MR_Integer) MR_r2)) {
		MR_GOTO_LAB(demangle__find_matching_close_bracket_5_0_i1);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r3;
	MR_sv(3) = MR_tempr1;
	MR_tempr2 = MR_r4;
	MR_sv(4) = MR_tempr2;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_tempr2;
	}
	MR_np_call_localret_ent(string__unsafe_index_3_0,
		demangle__find_matching_close_bracket_5_0_i2);
MR_def_label(demangle__find_matching_close_bracket_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,93)) {
		MR_GOTO_LAB(demangle__find_matching_close_bracket_5_0_i3);
	}
	if (MR_INT_NE(MR_sv(1),0)) {
		MR_GOTO_LAB(demangle__find_matching_close_bracket_5_0_i3);
	}
	MR_r2 = MR_sv(4);
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(5);
MR_def_label(demangle__find_matching_close_bracket_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,91)) {
		MR_GOTO_LAB(demangle__find_matching_close_bracket_5_0_i6);
	}
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r1 = ((MR_Integer) MR_sv(1) + (MR_Integer) 1);
	MR_r4 = ((MR_Integer) MR_sv(4) + (MR_Integer) 1);
	MR_succip_word = MR_sv(5);
	MR_GOTO_LAB(demangle__find_matching_close_bracket_5_0_i37);
MR_def_label(demangle__find_matching_close_bracket_5_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,93)) {
		MR_GOTO_LAB(demangle__find_matching_close_bracket_5_0_i8);
	}
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r1 = ((MR_Integer) MR_sv(1) - (MR_Integer) 1);
	MR_r4 = ((MR_Integer) MR_sv(4) + (MR_Integer) 1);
	MR_succip_word = MR_sv(5);
	MR_GOTO_LAB(demangle__find_matching_close_bracket_5_0_i37);
MR_def_label(demangle__find_matching_close_bracket_5_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r1 = MR_sv(1);
	MR_r4 = ((MR_Integer) MR_sv(4) + (MR_Integer) 1);
	MR_succip_word = MR_sv(5);
	MR_GOTO_LAB(demangle__find_matching_close_bracket_5_0_i37);
MR_def_label(demangle__find_matching_close_bracket_5_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(string__sub_string_search_3_0);
MR_decl_entry(string__substring_4_0);
MR_decl_entry(string__split_4_0);

MR_BEGIN_MODULE(demangle_module6)
	MR_init_entry1(demangle__handle_category_etc_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__demangle__handle_category_etc_5_0);
	MR_init_label10(demangle__handle_category_etc_5_0,5,4,8,7,11,10,13,18,20,19)
	MR_init_label10(demangle__handle_category_etc_5_0,23,22,26,29,33,35,36,37,32,39)
	MR_init_label10(demangle__handle_category_etc_5_0,43,44,45,47,41,49,52,54,56,59)
	MR_init_label4(demangle__handle_category_etc_5_0,61,30,2,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'handle_category_etc'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(demangle__handle_category_etc_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(5) = MR_r2;
	MR_r1 = (MR_Word) MR_string_const("IntroducedFrom__", 16);
	MR_np_call_localret_ent(string__remove_prefix_3_0,
		demangle__handle_category_etc_5_0_i5);
MR_def_label(demangle__handle_category_etc_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(demangle__handle_category_etc_5_0_i4);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_GOTO_LAB(demangle__handle_category_etc_5_0_i18);
MR_def_label(demangle__handle_category_etc_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("DeforestationIn__", 17);
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(string__remove_prefix_3_0,
		demangle__handle_category_etc_5_0_i8);
MR_def_label(demangle__handle_category_etc_5_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(demangle__handle_category_etc_5_0_i7);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 1);
	MR_GOTO_LAB(demangle__handle_category_etc_5_0_i18);
MR_def_label(demangle__handle_category_etc_5_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("AccFrom__", 9);
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(string__remove_prefix_3_0,
		demangle__handle_category_etc_5_0_i11);
MR_def_label(demangle__handle_category_etc_5_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(demangle__handle_category_etc_5_0_i10);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 2);
	MR_GOTO_LAB(demangle__handle_category_etc_5_0_i18);
MR_def_label(demangle__handle_category_etc_5_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("TypeSpecOf__", 12);
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(string__remove_prefix_3_0,
		demangle__handle_category_etc_5_0_i13);
MR_def_label(demangle__handle_category_etc_5_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(demangle__handle_category_etc_5_0_i2);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(1,1,0);
MR_def_label(demangle__handle_category_etc_5_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_r1 = (MR_Word) MR_string_const("pred__", 6);
	MR_np_call_localret_ent(string__remove_prefix_3_0,
		demangle__handle_category_etc_5_0_i20);
MR_def_label(demangle__handle_category_etc_5_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(demangle__handle_category_etc_5_0_i19);
	}
	MR_sv(2) = (MR_Word) MR_string_const("pred", 4);
	MR_r1 = MR_r2;
	MR_GOTO_LAB(demangle__handle_category_etc_5_0_i29);
MR_def_label(demangle__handle_category_etc_5_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("func__", 6);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(string__remove_prefix_3_0,
		demangle__handle_category_etc_5_0_i23);
MR_def_label(demangle__handle_category_etc_5_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(demangle__handle_category_etc_5_0_i22);
	}
	MR_sv(2) = (MR_Word) MR_string_const("func", 4);
	MR_r1 = MR_r2;
	MR_GOTO_LAB(demangle__handle_category_etc_5_0_i29);
MR_def_label(demangle__handle_category_etc_5_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),1)) {
		MR_GOTO_LAB(demangle__handle_category_etc_5_0_i1);
	}
	MR_r1 = (MR_Word) MR_string_const("pred_or_func__", 14);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(string__remove_prefix_3_0,
		demangle__handle_category_etc_5_0_i26);
MR_def_label(demangle__handle_category_etc_5_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(demangle__handle_category_etc_5_0_i1);
	}
	MR_sv(2) = (MR_Word) MR_string_const("", 0);
	MR_r1 = MR_r2;
MR_def_label(demangle__handle_category_etc_5_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r2 = (MR_Word) MR_string_const("__", 2);
	MR_np_call_localret_ent(string__sub_string_search_3_0,
		demangle__handle_category_etc_5_0_i33);
MR_def_label(demangle__handle_category_etc_5_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(demangle__handle_category_etc_5_0_i32);
	}
	MR_sv(3) = MR_r2;
	MR_r1 = MR_sv(6);
	MR_np_call_localret_ent(string__left_3_0,
		demangle__handle_category_etc_5_0_i35);
MR_def_label(demangle__handle_category_etc_5_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(6);
	MR_np_call_localret_ent(string__length_2_0,
		demangle__handle_category_etc_5_0_i36);
MR_def_label(demangle__handle_category_etc_5_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = ((MR_Integer) MR_sv(3) + (MR_Integer) 2);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(string__substring_4_0,
		demangle__handle_category_etc_5_0_i37);
MR_def_label(demangle__handle_category_etc_5_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r2, 0) = MR_sv(4);
	MR_GOTO_LAB(demangle__handle_category_etc_5_0_i39);
MR_def_label(demangle__handle_category_etc_5_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_sv(6);
MR_def_label(demangle__handle_category_etc_5_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r2,0,0)) {
		MR_GOTO_LAB(demangle__handle_category_etc_5_0_i30);
	}
	MR_r3 = MR_tfield(1, MR_r2, 0);
	if (MR_PTAG_TESTR(MR_sv(1),1)) {
		MR_GOTO_LAB(demangle__handle_category_etc_5_0_i41);
	}
	MR_sv(1) = MR_r3;
	MR_sv(3) = MR_r1;
	MR_np_call_localret_ent(string__length_2_0,
		demangle__handle_category_etc_5_0_i43);
MR_def_label(demangle__handle_category_etc_5_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_LE(MR_r1,2)) {
		MR_GOTO_LAB(demangle__handle_category_etc_5_0_i30);
	}
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = (MR_Integer) 0;
	MR_np_call_localret_ent(string__unsafe_index_3_0,
		demangle__handle_category_etc_5_0_i44);
MR_def_label(demangle__handle_category_etc_5_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) 91 != (MR_Integer) MR_r1)) {
		MR_GOTO_LAB(demangle__handle_category_etc_5_0_i30);
	}
	MR_r1 = (MR_Integer) 0;
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(3);
	MR_r4 = (MR_Integer) 1;
	MR_np_call_localret_ent(demangle__find_matching_close_bracket_5_0,
		demangle__handle_category_etc_5_0_i45);
MR_def_label(demangle__handle_category_etc_5_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(demangle__handle_category_etc_5_0_i30);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = ((MR_Integer) MR_r2 + (MR_Integer) 1);
	MR_np_call_localret_ent(string__split_4_0,
		demangle__handle_category_etc_5_0_i47);
MR_def_label(demangle__handle_category_etc_5_0,47)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_sv(3), 1, (MR_Integer) 1);
	MR_tfield(1, MR_sv(3), 0) = MR_r1;
	MR_r5 = MR_r2;
	MR_r2 = MR_sv(1);
	MR_r1 = (MR_Integer) 0;
	MR_sv(4) = (MR_Integer) 0;
	MR_r4 = MR_r5;
	MR_GOTO_LAB(demangle__handle_category_etc_5_0_i61);
MR_def_label(demangle__handle_category_etc_5_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_sv(1);
	MR_sv(1) = MR_r3;
	MR_np_call_localret_ent(string__first_char_3_3,
		demangle__handle_category_etc_5_0_i49);
MR_def_label(demangle__handle_category_etc_5_0,49)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(demangle__handle_category_etc_5_0_i30);
	}
	if (!(((MR_Unsigned) ((MR_Integer) MR_r2 - (MR_Integer) 48) <= 9))) {
		MR_GOTO_LAB(demangle__handle_category_etc_5_0_i30);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = (MR_Word) &MR_tfield(0, (MR_Word *) &mercury_vector_common_0_2, ((MR_Integer) MR_r2 - (MR_Integer) 48));
	MR_r1 = MR_tfield(0, MR_tempr1, 0);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_r3;
	}
	MR_np_call_localret_ent(demangle__remove_int_2_4_0,
		demangle__handle_category_etc_5_0_i52);
MR_def_label(demangle__handle_category_etc_5_0,52)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(demangle__handle_category_etc_5_0_i30);
	}
	MR_sv(4) = MR_r2;
	MR_r1 = (MR_Word) MR_string_const("__", 2);
	MR_r2 = MR_r3;
	MR_np_call_localret_ent(string__remove_prefix_3_0,
		demangle__handle_category_etc_5_0_i54);
MR_def_label(demangle__handle_category_etc_5_0,54)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(demangle__handle_category_etc_5_0_i30);
	}
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(string__first_char_3_3,
		demangle__handle_category_etc_5_0_i56);
MR_def_label(demangle__handle_category_etc_5_0,56)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(demangle__handle_category_etc_5_0_i30);
	}
	if (!(((MR_Unsigned) ((MR_Integer) MR_r2 - (MR_Integer) 48) <= 9))) {
		MR_GOTO_LAB(demangle__handle_category_etc_5_0_i30);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = (MR_Word) &MR_tfield(0, (MR_Word *) &mercury_vector_common_0_3, ((MR_Integer) MR_r2 - (MR_Integer) 48));
	MR_r1 = MR_tfield(0, MR_tempr1, 0);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_r3;
	}
	MR_np_call_localret_ent(demangle__remove_int_2_4_0,
		demangle__handle_category_etc_5_0_i59);
MR_def_label(demangle__handle_category_etc_5_0,59)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(demangle__handle_category_etc_5_0_i30);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(1);
	MR_r1 = MR_tempr1;
	MR_r4 = MR_r3;
	}
MR_def_label(demangle__handle_category_etc_5_0,61)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 4);
	MR_r3 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(3);
	MR_tfield(1, MR_tempr1, 1) = MR_sv(4);
	MR_tfield(1, MR_tempr1, 2) = MR_r1;
	MR_tfield(1, MR_tempr1, 3) = MR_sv(2);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_r1 = MR_TRUE;
	MR_proceed();
	}
MR_def_label(demangle__handle_category_etc_5_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(5);
	MR_r3 = (MR_Word) MR_tbmkword(0, 3);
	MR_r4 = MR_r1;
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(demangle__handle_category_etc_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_r1;
	MR_r4 = MR_r2;
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(demangle__handle_category_etc_5_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__f_115_116_114_105_110_103_95_95_43_43_2_0);

MR_BEGIN_MODULE(demangle_module7)
	MR_init_entry1(demangle__format_maybe_module_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__demangle__format_maybe_module_3_0);
	MR_init_label2(demangle__format_maybe_module_3_0,13,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'format_maybe_module'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(demangle__format_maybe_module_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(demangle__format_maybe_module_3_0_i13);
	}
	MR_r1 = MR_r2;
	MR_proceed();
MR_def_label(demangle__format_maybe_module_3_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_tfield(1, MR_r1, 0);
	MR_r1 = (MR_Word) MR_string_const(".", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		demangle__format_maybe_module_3_0_i4);
MR_def_label(demangle__format_maybe_module_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__string__int_to_string_1_0);

MR_BEGIN_MODULE(demangle_module8)
	MR_init_entry1(demangle__format_proc_11_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__demangle__format_proc_11_0);
	MR_init_label10(demangle__format_proc_11_0,2,62,63,64,18,36,37,38,39,40)
	MR_init_label10(demangle__format_proc_11_0,41,42,59,27,28,29,30,31,32,20)
	MR_init_label10(demangle__format_proc_11_0,21,22,23,45,46,47,48,49,50,51)
	MR_init_label10(demangle__format_proc_11_0,52,53,54,55,4,5,6,7,8,11)
	MR_init_label10(demangle__format_proc_11_0,12,13,14,15,71,72,73,74,75,76)
	MR_init_label10(demangle__format_proc_11_0,77,78,83,84,86,91,89,95,100,103)
	MR_init_label1(demangle__format_proc_11_0,101)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'format_proc'/11 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(demangle__format_proc_11_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r5;
	MR_sv(4) = MR_r6;
	MR_sv(5) = MR_r7;
	MR_sv(6) = MR_r8;
	MR_sv(7) = MR_r9;
	MR_sv(8) = MR_r10;
	MR_r1 = MR_r2;
	MR_r2 = MR_r4;
	MR_np_call_localret_ent(demangle__format_maybe_module_3_0,
		demangle__format_proc_11_0_i2);
MR_def_label(demangle__format_proc_11_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_tag(MR_sv(1));
	if ((MR_r2 != MR_mktag((MR_Integer) 0))) {
		MR_GOTO_LAB(demangle__format_proc_11_0_i18);
	}
	if (MR_INT_EQ(MR_unmkbody(MR_sv(1)),0)) {
		MR_GOTO_LAB(demangle__format_proc_11_0_i11);
	}
	if (MR_INT_EQ(MR_unmkbody(MR_sv(1)),1)) {
		MR_GOTO_LAB(demangle__format_proc_11_0_i71);
	}
	if (MR_INT_EQ(MR_unmkbody(MR_sv(1)),2)) {
		MR_GOTO_LAB(demangle__format_proc_11_0_i4);
	}
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		demangle__format_proc_11_0_i62);
MR_def_label(demangle__format_proc_11_0,62)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("\' mode ", 7);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		demangle__format_proc_11_0_i63);
MR_def_label(demangle__format_proc_11_0,63)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		demangle__format_proc_11_0_i64);
MR_def_label(demangle__format_proc_11_0,64)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		demangle__format_proc_11_0_i52);
MR_def_label(demangle__format_proc_11_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_tfield(1, MR_sv(1), 0);
	if (MR_PTAG_TESTR(MR_r2,0)) {
		MR_GOTO_LAB(demangle__format_proc_11_0_i45);
	}
	if (MR_INT_NE(MR_unmkbody(MR_r2),0)) {
		MR_GOTO_LAB(demangle__format_proc_11_0_i59);
	}
	MR_r2 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_tfield(1, MR_r2, 2);
	MR_sv(3) = MR_tfield(1, MR_r2, 3);
	MR_r1 = MR_tfield(1, MR_r2, 1);
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		demangle__format_proc_11_0_i36);
MR_def_label(demangle__format_proc_11_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("\' line ", 7);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		demangle__format_proc_11_0_i37);
MR_def_label(demangle__format_proc_11_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		demangle__format_proc_11_0_i38);
MR_def_label(demangle__format_proc_11_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const(") from \140", 8);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		demangle__format_proc_11_0_i39);
MR_def_label(demangle__format_proc_11_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		demangle__format_proc_11_0_i40);
MR_def_label(demangle__format_proc_11_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		demangle__format_proc_11_0_i41);
MR_def_label(demangle__format_proc_11_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const(" goal (#", 8);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		demangle__format_proc_11_0_i42);
MR_def_label(demangle__format_proc_11_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		demangle__format_proc_11_0_i78);
MR_def_label(demangle__format_proc_11_0,59)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_unmkbody(MR_r2),1)) {
		MR_GOTO_LAB(demangle__format_proc_11_0_i20);
	}
	MR_r2 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_tfield(1, MR_r2, 2);
	MR_r1 = MR_tfield(1, MR_r2, 1);
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		demangle__format_proc_11_0_i27);
MR_def_label(demangle__format_proc_11_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("\' line ", 7);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		demangle__format_proc_11_0_i28);
MR_def_label(demangle__format_proc_11_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		demangle__format_proc_11_0_i29);
MR_def_label(demangle__format_proc_11_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const(") from \140", 8);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		demangle__format_proc_11_0_i30);
MR_def_label(demangle__format_proc_11_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		demangle__format_proc_11_0_i31);
MR_def_label(demangle__format_proc_11_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		demangle__format_proc_11_0_i32);
MR_def_label(demangle__format_proc_11_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("deforestation procedure (#", 26);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		demangle__format_proc_11_0_i78);
MR_def_label(demangle__format_proc_11_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tfield(1, MR_r2, 1);
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		demangle__format_proc_11_0_i21);
MR_def_label(demangle__format_proc_11_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("\' line ", 7);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		demangle__format_proc_11_0_i22);
MR_def_label(demangle__format_proc_11_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		demangle__format_proc_11_0_i23);
MR_def_label(demangle__format_proc_11_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("accumulator procedure from \140", 28);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		demangle__format_proc_11_0_i78);
MR_def_label(demangle__format_proc_11_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tfield(1, MR_r2, 0);
	MR_r2 = (MR_Word) MR_string_const(")", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		demangle__format_proc_11_0_i46);
MR_def_label(demangle__format_proc_11_0,46)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const(" (type specialized ", 19);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		demangle__format_proc_11_0_i47);
MR_def_label(demangle__format_proc_11_0,47)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		demangle__format_proc_11_0_i48);
MR_def_label(demangle__format_proc_11_0,48)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		demangle__format_proc_11_0_i49);
MR_def_label(demangle__format_proc_11_0,49)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("\' mode ", 7);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		demangle__format_proc_11_0_i50);
MR_def_label(demangle__format_proc_11_0,50)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		demangle__format_proc_11_0_i51);
MR_def_label(demangle__format_proc_11_0,51)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		demangle__format_proc_11_0_i52);
MR_def_label(demangle__format_proc_11_0,52)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("/", 1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		demangle__format_proc_11_0_i53);
MR_def_label(demangle__format_proc_11_0,53)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		demangle__format_proc_11_0_i54);
MR_def_label(demangle__format_proc_11_0,54)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const(" \140", 2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		demangle__format_proc_11_0_i55);
MR_def_label(demangle__format_proc_11_0,55)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		demangle__format_proc_11_0_i78);
MR_def_label(demangle__format_proc_11_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		demangle__format_proc_11_0_i5);
MR_def_label(demangle__format_proc_11_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("\'", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		demangle__format_proc_11_0_i6);
MR_def_label(demangle__format_proc_11_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("/", 1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		demangle__format_proc_11_0_i7);
MR_def_label(demangle__format_proc_11_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		demangle__format_proc_11_0_i8);
MR_def_label(demangle__format_proc_11_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("compare/3 predicate for type \140", 30);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		demangle__format_proc_11_0_i78);
MR_def_label(demangle__format_proc_11_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		demangle__format_proc_11_0_i12);
MR_def_label(demangle__format_proc_11_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("\'", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		demangle__format_proc_11_0_i13);
MR_def_label(demangle__format_proc_11_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("/", 1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		demangle__format_proc_11_0_i14);
MR_def_label(demangle__format_proc_11_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		demangle__format_proc_11_0_i15);
MR_def_label(demangle__format_proc_11_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("index/2 predicate for type \140", 28);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		demangle__format_proc_11_0_i78);
MR_def_label(demangle__format_proc_11_0,71)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		demangle__format_proc_11_0_i72);
MR_def_label(demangle__format_proc_11_0,72)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("\' mode ", 7);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		demangle__format_proc_11_0_i73);
MR_def_label(demangle__format_proc_11_0,73)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		demangle__format_proc_11_0_i74);
MR_def_label(demangle__format_proc_11_0,74)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		demangle__format_proc_11_0_i75);
MR_def_label(demangle__format_proc_11_0,75)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("/", 1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		demangle__format_proc_11_0_i76);
MR_def_label(demangle__format_proc_11_0,76)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		demangle__format_proc_11_0_i77);
MR_def_label(demangle__format_proc_11_0,77)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("unification predicate for type \140", 32);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		demangle__format_proc_11_0_i78);
MR_def_label(demangle__format_proc_11_0,78)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_sv(2) = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = (MR_Word) MR_string_const(">", 1);
	MR_tfield(1, MR_tempr1, 1) = MR_sv(8);
	MR_sv(1) = MR_r1;
	if (MR_LTAGS_TEST(MR_sv(7),0,0)) {
		MR_GOTO_LAB(demangle__format_proc_11_0_i86);
	}
	MR_r1 = MR_tfield(1, MR_sv(7), 0);
	}
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		demangle__format_proc_11_0_i83);
MR_def_label(demangle__format_proc_11_0,83)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const(" label ", 7);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		demangle__format_proc_11_0_i84);
MR_def_label(demangle__format_proc_11_0,84)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_r1;
	MR_tfield(1, MR_r2, 1) = MR_sv(2);
	MR_sv(2) = MR_r2;
MR_def_label(demangle__format_proc_11_0,86)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_sv(6),0,0)) {
		MR_GOTO_LAB(demangle__format_proc_11_0_i100);
	}
	MR_r2 = MR_tfield(1, MR_sv(6), 0);
	MR_r1 = MR_tfield(0, MR_r2, 0);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(0, MR_r2, 1);
	if (MR_INT_NE(MR_tempr1,1)) {
		MR_GOTO_LAB(demangle__format_proc_11_0_i89);
	}
	}
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		demangle__format_proc_11_0_i91);
MR_def_label(demangle__format_proc_11_0,91)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = (MR_Word) MR_string_const("])", 2);
	MR_tfield(1, MR_r2, 1) = MR_sv(2);
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = MR_r2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_sv(2) = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = (MR_Word) MR_string_const(" (minus extra unused args [#", 28);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_GOTO_LAB(demangle__format_proc_11_0_i100);
	}
MR_def_label(demangle__format_proc_11_0,89)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		demangle__format_proc_11_0_i95);
MR_def_label(demangle__format_proc_11_0,95)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = (MR_Word) MR_string_const("])", 2);
	MR_tfield(1, MR_r2, 1) = MR_sv(2);
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = MR_r2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_sv(2) = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = (MR_Word) MR_string_const(" (minus unused args [#", 22);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	}
MR_def_label(demangle__format_proc_11_0,100)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_sv(5),0,0)) {
		MR_GOTO_LAB(demangle__format_proc_11_0_i101);
	}
	MR_r1 = MR_tfield(1, MR_sv(5), 0);
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		demangle__format_proc_11_0_i103);
MR_def_label(demangle__format_proc_11_0,103)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = (MR_Word) MR_string_const("])", 2);
	MR_tfield(1, MR_r2, 1) = MR_sv(2);
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = MR_r2;
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = (MR_Word) MR_string_const(" (specialized [#", 16);
	MR_tfield(1, MR_r2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = MR_r2;
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = (MR_Word) MR_string_const("<", 1);
	MR_tfield(1, MR_r1, 1) = MR_tempr1;
	MR_decr_sp_and_return(9);
	}
MR_def_label(demangle__format_proc_11_0,101)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(1);
	MR_tfield(1, MR_r2, 1) = MR_sv(2);
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = (MR_Word) MR_string_const("<", 1);
	MR_tfield(1, MR_r1, 1) = MR_r2;
	MR_decr_sp_and_return(9);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(char__to_int_2_2);
MR_decl_entry(string__first_char_3_4);

MR_BEGIN_MODULE(demangle_module9)
	MR_init_entry1(demangle__fix_mangled_ascii_chars_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__demangle__fix_mangled_ascii_chars_2_0);
	MR_init_label8(demangle__fix_mangled_ascii_chars_2_0,2,5,8,10,7,13,15,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'fix_mangled_ascii_chars'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(demangle__fix_mangled_ascii_chars_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(string__first_char_3_3,
		demangle__fix_mangled_ascii_chars_2_0_i2);
MR_def_label(demangle__fix_mangled_ascii_chars_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(demangle__fix_mangled_ascii_chars_2_0_i1);
	}
	if (!(((MR_Unsigned) ((MR_Integer) MR_r2 - (MR_Integer) 48) <= 9))) {
		MR_GOTO_LAB(demangle__fix_mangled_ascii_chars_2_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = (MR_Word) &MR_tfield(0, (MR_Word *) &mercury_vector_common_0_4, ((MR_Integer) MR_r2 - (MR_Integer) 48));
	MR_r1 = MR_tfield(0, MR_tempr1, 0);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_r3;
	}
	MR_np_call_localret_ent(demangle__remove_int_2_4_0,
		demangle__fix_mangled_ascii_chars_2_0_i5);
MR_def_label(demangle__fix_mangled_ascii_chars_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(demangle__fix_mangled_ascii_chars_2_0_i1);
	}
	MR_sv(1) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(2) = MR_tempr1;
	MR_r1 = (MR_Word) MR_string_const("_", 1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(string__remove_prefix_3_0,
		demangle__fix_mangled_ascii_chars_2_0_i8);
MR_def_label(demangle__fix_mangled_ascii_chars_2_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(demangle__fix_mangled_ascii_chars_2_0_i7);
	}
	MR_r1 = MR_r2;
	MR_np_localcall_lab(demangle__fix_mangled_ascii_chars_2_0,
		demangle__fix_mangled_ascii_chars_2_0_i10);
MR_def_label(demangle__fix_mangled_ascii_chars_2_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(demangle__fix_mangled_ascii_chars_2_0_i1);
	}
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_r2;
	MR_np_call_localret_ent(char__to_int_2_2,
		demangle__fix_mangled_ascii_chars_2_0_i13);
MR_def_label(demangle__fix_mangled_ascii_chars_2_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_sv(2);
	MR_np_call_localret_ent(char__to_int_2_2,
		demangle__fix_mangled_ascii_chars_2_0_i13);
MR_def_label(demangle__fix_mangled_ascii_chars_2_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(demangle__fix_mangled_ascii_chars_2_0_i1);
	}
	MR_r1 = MR_r2;
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(string__first_char_3_4,
		demangle__fix_mangled_ascii_chars_2_0_i15);
MR_def_label(demangle__fix_mangled_ascii_chars_2_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(demangle__fix_mangled_ascii_chars_2_0,1)
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

MR_decl_entry(string__append_3_2);

MR_BEGIN_MODULE(demangle_module10)
	MR_init_entry1(demangle__insert_prefix_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__demangle__insert_prefix_3_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'insert_prefix'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(demangle__insert_prefix_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(string__append_3_2);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(demangle_module11)
	MR_init_entry1(demangle__fix_mangled_ascii_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__demangle__fix_mangled_ascii_2_0);
	MR_init_label10(demangle__fix_mangled_ascii_2_0,3,2,7,6,11,10,15,14,19,18)
	MR_init_label10(demangle__fix_mangled_ascii_2_0,23,22,27,26,31,30,35,34,39,38)
	MR_init_label10(demangle__fix_mangled_ascii_2_0,43,42,47,46,51,50,55,54,59,58)
	MR_init_label7(demangle__fix_mangled_ascii_2_0,63,62,67,69,66,71,70)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'fix_mangled_ascii'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(demangle__fix_mangled_ascii_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("f__", 3);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(string__remove_prefix_3_0,
		demangle__fix_mangled_ascii_2_0_i3);
MR_def_label(demangle__fix_mangled_ascii_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(demangle__fix_mangled_ascii_2_0_i2);
	}
	MR_r1 = (MR_Word) MR_string_const("f_", 2);
	MR_np_call_localret_ent(string__append_3_2,
		demangle__fix_mangled_ascii_2_0_i69);
MR_def_label(demangle__fix_mangled_ascii_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("f_not_equal", 11);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(string__remove_prefix_3_0,
		demangle__fix_mangled_ascii_2_0_i7);
MR_def_label(demangle__fix_mangled_ascii_2_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(demangle__fix_mangled_ascii_2_0_i6);
	}
	MR_r1 = (MR_Word) MR_string_const("\\=", 2);
	MR_np_call_localret_ent(string__append_3_2,
		demangle__fix_mangled_ascii_2_0_i69);
MR_def_label(demangle__fix_mangled_ascii_2_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("f_greater_or_equal", 18);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(string__remove_prefix_3_0,
		demangle__fix_mangled_ascii_2_0_i11);
MR_def_label(demangle__fix_mangled_ascii_2_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(demangle__fix_mangled_ascii_2_0_i10);
	}
	MR_r1 = (MR_Word) MR_string_const(">=", 2);
	MR_np_call_localret_ent(string__append_3_2,
		demangle__fix_mangled_ascii_2_0_i69);
MR_def_label(demangle__fix_mangled_ascii_2_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("f_less_or_equal", 15);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(string__remove_prefix_3_0,
		demangle__fix_mangled_ascii_2_0_i15);
MR_def_label(demangle__fix_mangled_ascii_2_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(demangle__fix_mangled_ascii_2_0_i14);
	}
	MR_r1 = (MR_Word) MR_string_const("=<", 2);
	MR_np_call_localret_ent(string__append_3_2,
		demangle__fix_mangled_ascii_2_0_i69);
MR_def_label(demangle__fix_mangled_ascii_2_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("f_equal", 7);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(string__remove_prefix_3_0,
		demangle__fix_mangled_ascii_2_0_i19);
MR_def_label(demangle__fix_mangled_ascii_2_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(demangle__fix_mangled_ascii_2_0_i18);
	}
	MR_r1 = (MR_Word) MR_string_const("=", 1);
	MR_np_call_localret_ent(string__append_3_2,
		demangle__fix_mangled_ascii_2_0_i69);
MR_def_label(demangle__fix_mangled_ascii_2_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("f_less_than", 11);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(string__remove_prefix_3_0,
		demangle__fix_mangled_ascii_2_0_i23);
MR_def_label(demangle__fix_mangled_ascii_2_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(demangle__fix_mangled_ascii_2_0_i22);
	}
	MR_r1 = (MR_Word) MR_string_const("<", 1);
	MR_np_call_localret_ent(string__append_3_2,
		demangle__fix_mangled_ascii_2_0_i69);
MR_def_label(demangle__fix_mangled_ascii_2_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("f_greater_than", 14);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(string__remove_prefix_3_0,
		demangle__fix_mangled_ascii_2_0_i27);
MR_def_label(demangle__fix_mangled_ascii_2_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(demangle__fix_mangled_ascii_2_0_i26);
	}
	MR_r1 = (MR_Word) MR_string_const(">", 1);
	MR_np_call_localret_ent(string__append_3_2,
		demangle__fix_mangled_ascii_2_0_i69);
MR_def_label(demangle__fix_mangled_ascii_2_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("f_minus", 7);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(string__remove_prefix_3_0,
		demangle__fix_mangled_ascii_2_0_i31);
MR_def_label(demangle__fix_mangled_ascii_2_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(demangle__fix_mangled_ascii_2_0_i30);
	}
	MR_r1 = (MR_Word) MR_string_const("-", 1);
	MR_np_call_localret_ent(demangle__insert_prefix_3_0,
		demangle__fix_mangled_ascii_2_0_i69);
MR_def_label(demangle__fix_mangled_ascii_2_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("f_plus", 6);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(string__remove_prefix_3_0,
		demangle__fix_mangled_ascii_2_0_i35);
MR_def_label(demangle__fix_mangled_ascii_2_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(demangle__fix_mangled_ascii_2_0_i34);
	}
	MR_r1 = (MR_Word) MR_string_const("+", 1);
	MR_np_call_localret_ent(demangle__insert_prefix_3_0,
		demangle__fix_mangled_ascii_2_0_i69);
MR_def_label(demangle__fix_mangled_ascii_2_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("f_times", 7);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(string__remove_prefix_3_0,
		demangle__fix_mangled_ascii_2_0_i39);
MR_def_label(demangle__fix_mangled_ascii_2_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(demangle__fix_mangled_ascii_2_0_i38);
	}
	MR_r1 = (MR_Word) MR_string_const("*", 1);
	MR_np_call_localret_ent(demangle__insert_prefix_3_0,
		demangle__fix_mangled_ascii_2_0_i69);
MR_def_label(demangle__fix_mangled_ascii_2_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("f_slash", 7);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(string__remove_prefix_3_0,
		demangle__fix_mangled_ascii_2_0_i43);
MR_def_label(demangle__fix_mangled_ascii_2_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(demangle__fix_mangled_ascii_2_0_i42);
	}
	MR_r1 = (MR_Word) MR_string_const("/", 1);
	MR_np_call_localret_ent(demangle__insert_prefix_3_0,
		demangle__fix_mangled_ascii_2_0_i69);
MR_def_label(demangle__fix_mangled_ascii_2_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("f_comma", 7);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(string__remove_prefix_3_0,
		demangle__fix_mangled_ascii_2_0_i47);
MR_def_label(demangle__fix_mangled_ascii_2_0,47)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(demangle__fix_mangled_ascii_2_0_i46);
	}
	MR_r1 = (MR_Word) MR_string_const(",", 1);
	MR_np_call_localret_ent(demangle__insert_prefix_3_0,
		demangle__fix_mangled_ascii_2_0_i69);
MR_def_label(demangle__fix_mangled_ascii_2_0,46)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("f_semicolon", 11);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(string__remove_prefix_3_0,
		demangle__fix_mangled_ascii_2_0_i51);
MR_def_label(demangle__fix_mangled_ascii_2_0,51)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(demangle__fix_mangled_ascii_2_0_i50);
	}
	MR_r1 = (MR_Word) MR_string_const(";", 1);
	MR_np_call_localret_ent(demangle__insert_prefix_3_0,
		demangle__fix_mangled_ascii_2_0_i69);
MR_def_label(demangle__fix_mangled_ascii_2_0,50)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("f_cut", 5);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(string__remove_prefix_3_0,
		demangle__fix_mangled_ascii_2_0_i55);
MR_def_label(demangle__fix_mangled_ascii_2_0,55)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(demangle__fix_mangled_ascii_2_0_i54);
	}
	MR_r1 = (MR_Word) MR_string_const("!", 1);
	MR_np_call_localret_ent(demangle__insert_prefix_3_0,
		demangle__fix_mangled_ascii_2_0_i69);
MR_def_label(demangle__fix_mangled_ascii_2_0,54)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("f_tuple", 7);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(string__remove_prefix_3_0,
		demangle__fix_mangled_ascii_2_0_i59);
MR_def_label(demangle__fix_mangled_ascii_2_0,59)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(demangle__fix_mangled_ascii_2_0_i58);
	}
	MR_r1 = (MR_Word) MR_string_const("{}", 2);
	MR_np_call_localret_ent(demangle__insert_prefix_3_0,
		demangle__fix_mangled_ascii_2_0_i69);
MR_def_label(demangle__fix_mangled_ascii_2_0,58)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("f_cons", 6);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(string__remove_prefix_3_0,
		demangle__fix_mangled_ascii_2_0_i63);
MR_def_label(demangle__fix_mangled_ascii_2_0,63)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(demangle__fix_mangled_ascii_2_0_i62);
	}
	MR_r1 = (MR_Word) MR_string_const("[|]", 3);
	MR_np_call_localret_ent(demangle__insert_prefix_3_0,
		demangle__fix_mangled_ascii_2_0_i69);
MR_def_label(demangle__fix_mangled_ascii_2_0,62)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("f_nil", 5);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(string__remove_prefix_3_0,
		demangle__fix_mangled_ascii_2_0_i67);
MR_def_label(demangle__fix_mangled_ascii_2_0,67)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(demangle__fix_mangled_ascii_2_0_i66);
	}
	MR_r1 = (MR_Word) MR_string_const("[]", 2);
	MR_np_call_localret_ent(demangle__insert_prefix_3_0,
		demangle__fix_mangled_ascii_2_0_i69);
MR_def_label(demangle__fix_mangled_ascii_2_0,69)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(demangle__fix_mangled_ascii_2_0,66)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("f_", 2);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(string__remove_prefix_3_0,
		demangle__fix_mangled_ascii_2_0_i71);
MR_def_label(demangle__fix_mangled_ascii_2_0,71)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(demangle__fix_mangled_ascii_2_0_i70);
	}
	MR_r1 = MR_r2;
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(demangle__fix_mangled_ascii_chars_2_0);
MR_def_label(demangle__fix_mangled_ascii_2_0,70)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_r1 = MR_TRUE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_string_0;
MR_decl_entry(list__member_2_1);
MR_decl_entry(string__prefix_2_0);
MR_declare_entry(MR_do_redo);
MR_decl_entry(string__append_list_2_0);

MR_BEGIN_MODULE(demangle_module12)
	MR_init_entry1(demangle__remove_maybe_module_prefix_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__demangle__remove_maybe_module_prefix_4_0);
	MR_init_label10(demangle__remove_maybe_module_prefix_4_0,6,7,4,11,13,14,15,17,22,16)
	MR_init_label1(demangle__remove_maybe_module_prefix_4_0,10)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'remove_maybe_module_prefix'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(demangle__remove_maybe_module_prefix_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	MR_sv(5) = (MR_Word) MR_redoip_slot(MR_maxfr);
	MR_sv(6) = (MR_Word) MR_redofr_slot(MR_maxfr);
	MR_save_maxfr(MR_sv(7));
	MR_redofr_slot_word(MR_maxfr) = (MR_Word) MR_curfr;
	MR_redoip_slot_word(MR_maxfr) = (MR_Word) MR_LABEL_AP(demangle__remove_maybe_module_prefix_4_0_i4);
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(list__member_2_1,
		demangle__remove_maybe_module_prefix_4_0_i6);
MR_def_label(demangle__remove_maybe_module_prefix_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(string__prefix_2_0,
		demangle__remove_maybe_module_prefix_4_0_i7);
MR_def_label(demangle__remove_maybe_module_prefix_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO(MR_ENTRY(MR_do_redo));
	}
	MR_restore_maxfr(MR_sv(7));
	MR_redoip_slot_word(MR_maxfr) = MR_sv(5);
	MR_redofr_slot_word(MR_maxfr) = MR_sv(6);
	MR_GOTO_LAB(demangle__remove_maybe_module_prefix_4_0_i10);
MR_def_label(demangle__remove_maybe_module_prefix_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_redoip_slot_word(MR_maxfr) = MR_sv(5);
	MR_redofr_slot_word(MR_maxfr) = MR_sv(6);
	MR_r1 = MR_r2;
	MR_r2 = (MR_Word) MR_string_const("__", 2);
	MR_np_call_localret_ent(string__sub_string_search_3_0,
		demangle__remove_maybe_module_prefix_4_0_i11);
MR_def_label(demangle__remove_maybe_module_prefix_4_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(demangle__remove_maybe_module_prefix_4_0_i10);
	}
	MR_sv(3) = MR_r2;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(string__left_3_0,
		demangle__remove_maybe_module_prefix_4_0_i13);
MR_def_label(demangle__remove_maybe_module_prefix_4_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(string__length_2_0,
		demangle__remove_maybe_module_prefix_4_0_i14);
MR_def_label(demangle__remove_maybe_module_prefix_4_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = ((MR_Integer) MR_sv(3) + (MR_Integer) 2);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(string__substring_4_0,
		demangle__remove_maybe_module_prefix_4_0_i15);
MR_def_label(demangle__remove_maybe_module_prefix_4_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(1);
	}
	MR_np_localcall_lab(demangle__remove_maybe_module_prefix_4_0,
		demangle__remove_maybe_module_prefix_4_0_i17);
MR_def_label(demangle__remove_maybe_module_prefix_4_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(demangle__remove_maybe_module_prefix_4_0_i16);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_tfield(1, MR_r1, 0);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = (MR_Word) MR_string_const(".", 1);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = MR_sv(4);
	MR_tfield(1, MR_r1, 1) = MR_tempr2;
	MR_sv(1) = MR_r2;
	}
	MR_np_call_localret_ent(string__append_list_2_0,
		demangle__remove_maybe_module_prefix_4_0_i22);
MR_def_label(demangle__remove_maybe_module_prefix_4_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(1);
	MR_decr_sp_and_return(8);
	}
MR_def_label(demangle__remove_maybe_module_prefix_4_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r1, 0) = MR_sv(4);
	MR_r2 = MR_sv(1);
	MR_decr_sp_and_return(8);
MR_def_label(demangle__remove_maybe_module_prefix_4_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = MR_sv(2);
	MR_decr_sp_and_return(8);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(demangle_module13)
	MR_init_entry1(demangle__demangle_proc_ll_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__demangle__demangle_proc_ll_2_0);
	MR_init_label10(demangle__demangle_proc_ll_2_0,2,5,4,8,11,14,16,10,19,21)
	MR_init_label10(demangle__demangle_proc_ll_2_0,23,26,25,29,28,33,32,39,41,42)
	MR_init_label10(demangle__demangle_proc_ll_2_0,47,43,49,53,55,56,50,61,63,64)
	MR_init_label2(demangle__demangle_proc_ll_2_0,65,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'demangle_proc_ll'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(demangle__demangle_proc_ll_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("mercury__", 9);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(string__remove_prefix_3_0,
		demangle__demangle_proc_ll_2_0_i2);
MR_def_label(demangle__demangle_proc_ll_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(demangle__demangle_proc_ll_2_0_i1);
	}
	MR_sv(1) = MR_r2;
	MR_r1 = (MR_Word) MR_string_const("fn__", 4);
	MR_np_call_localret_ent(string__remove_prefix_3_0,
		demangle__demangle_proc_ll_2_0_i5);
MR_def_label(demangle__demangle_proc_ll_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(demangle__demangle_proc_ll_2_0_i4);
	}
	MR_sv(1) = (MR_Word) MR_string_const("function", 8);
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(demangle__remove_trailing_int_3_0,
		demangle__demangle_proc_ll_2_0_i8);
MR_def_label(demangle__demangle_proc_ll_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_sv(1) = (MR_Word) MR_string_const("predicate", 9);
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(demangle__remove_trailing_int_3_0,
		demangle__demangle_proc_ll_2_0_i8);
MR_def_label(demangle__demangle_proc_ll_2_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(demangle__demangle_proc_ll_2_0_i1);
	}
	MR_sv(2) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(3) = MR_tempr1;
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Word) MR_string_const("i", 1);
	}
	MR_np_call_localret_ent(string__remove_suffix_3_0,
		demangle__demangle_proc_ll_2_0_i11);
MR_def_label(demangle__demangle_proc_ll_2_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(demangle__demangle_proc_ll_2_0_i10);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(2);
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_r2;
	MR_r2 = (MR_Word) MR_string_const("_", 1);
	}
	MR_np_call_localret_ent(string__remove_suffix_3_0,
		demangle__demangle_proc_ll_2_0_i14);
MR_def_label(demangle__demangle_proc_ll_2_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(demangle__demangle_proc_ll_2_0_i1);
	}
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(demangle__remove_trailing_int_3_0,
		demangle__demangle_proc_ll_2_0_i16);
MR_def_label(demangle__demangle_proc_ll_2_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(demangle__demangle_proc_ll_2_0_i1);
	}
	MR_sv(3) = MR_r2;
	MR_r1 = MR_r3;
	MR_r2 = (MR_Word) MR_string_const("_", 1);
	MR_np_call_localret_ent(string__remove_suffix_3_0,
		demangle__demangle_proc_ll_2_0_i19);
MR_def_label(demangle__demangle_proc_ll_2_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = (MR_Word) MR_tbmkword(0, 0);
	MR_tempr2 = MR_sv(3);
	MR_sv(3) = MR_tempr1;
	MR_r1 = MR_tempr2;
	MR_r2 = (MR_Word) MR_string_const("_", 1);
	}
	MR_np_call_localret_ent(string__remove_suffix_3_0,
		demangle__demangle_proc_ll_2_0_i19);
MR_def_label(demangle__demangle_proc_ll_2_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(demangle__demangle_proc_ll_2_0_i1);
	}
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(demangle__remove_trailing_int_3_0,
		demangle__demangle_proc_ll_2_0_i21);
MR_def_label(demangle__demangle_proc_ll_2_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(demangle__demangle_proc_ll_2_0_i1);
	}
	MR_sv(4) = MR_r2;
	MR_r1 = MR_r3;
	MR_r2 = (MR_Word) MR_string_const("_", 1);
	MR_np_call_localret_ent(string__remove_suffix_3_0,
		demangle__demangle_proc_ll_2_0_i23);
MR_def_label(demangle__demangle_proc_ll_2_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(demangle__demangle_proc_ll_2_0_i1);
	}
	MR_sv(5) = MR_r2;
	MR_r1 = (MR_Word) MR_string_const("__Unify__", 9);
	MR_np_call_localret_ent(string__remove_prefix_3_0,
		demangle__demangle_proc_ll_2_0_i26);
MR_def_label(demangle__demangle_proc_ll_2_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(demangle__demangle_proc_ll_2_0_i25);
	}
	MR_sv(5) = (MR_Word) MR_tbmkword(0, 1);
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(demangle__fix_mangled_ascii_2_0,
		demangle__demangle_proc_ll_2_0_i39);
MR_def_label(demangle__demangle_proc_ll_2_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("__Compare__", 11);
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(string__remove_prefix_3_0,
		demangle__demangle_proc_ll_2_0_i29);
MR_def_label(demangle__demangle_proc_ll_2_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(demangle__demangle_proc_ll_2_0_i28);
	}
	if (MR_INT_NE(MR_sv(3),0)) {
		MR_GOTO_LAB(demangle__demangle_proc_ll_2_0_i1);
	}
	MR_sv(5) = (MR_Word) MR_tbmkword(0, 2);
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(demangle__fix_mangled_ascii_2_0,
		demangle__demangle_proc_ll_2_0_i39);
MR_def_label(demangle__demangle_proc_ll_2_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("__Index__", 9);
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(string__remove_prefix_3_0,
		demangle__demangle_proc_ll_2_0_i33);
MR_def_label(demangle__demangle_proc_ll_2_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(demangle__demangle_proc_ll_2_0_i32);
	}
	if (MR_INT_NE(MR_sv(3),0)) {
		MR_GOTO_LAB(demangle__demangle_proc_ll_2_0_i1);
	}
	MR_sv(5) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(demangle__fix_mangled_ascii_2_0,
		demangle__demangle_proc_ll_2_0_i39);
MR_def_label(demangle__demangle_proc_ll_2_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(5);
	MR_sv(5) = (MR_Word) MR_tbmkword(0, 3);
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(demangle__fix_mangled_ascii_2_0,
		demangle__demangle_proc_ll_2_0_i39);
MR_def_label(demangle__demangle_proc_ll_2_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(demangle__demangle_proc_ll_2_0_i1);
	}
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(demangle__demangle_unused_args_5_0,
		demangle__demangle_proc_ll_2_0_i41);
MR_def_label(demangle__demangle_proc_ll_2_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = MR_r2;
	MR_r2 = MR_r3;
	MR_np_call_localret_ent(demangle__demangle_higher_order_5_0,
		demangle__demangle_proc_ll_2_0_i42);
MR_def_label(demangle__demangle_proc_ll_2_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_sv(3),0,0)) {
		MR_GOTO_LAB(demangle__demangle_proc_ll_2_0_i43);
	}
	if (MR_LTAGS_TEST(MR_sv(5),0,3)) {
		MR_GOTO_LAB(demangle__demangle_proc_ll_2_0_i43);
	}
	MR_sv(6) = MR_r1;
	MR_sv(7) = MR_r2;
	MR_r1 = MR_r3;
	MR_np_call_localret_ent(demangle__remove_trailing_int_3_0,
		demangle__demangle_proc_ll_2_0_i47);
MR_def_label(demangle__demangle_proc_ll_2_0,47)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(demangle__demangle_proc_ll_2_0_i1);
	}
	if ((MR_sv(4) != MR_r2)) {
		MR_GOTO_LAB(demangle__demangle_proc_ll_2_0_i1);
	}
	MR_r2 = MR_r3;
	MR_GOTO_LAB(demangle__demangle_proc_ll_2_0_i49);
MR_def_label(demangle__demangle_proc_ll_2_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_sv(7) = MR_r2;
	MR_r2 = MR_r3;
MR_def_label(demangle__demangle_proc_ll_2_0,49)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_sv(5),0,3)) {
		MR_GOTO_LAB(demangle__demangle_proc_ll_2_0_i50);
	}
	MR_r1 = (MR_Word) MR_string_const("_", 1);
	MR_np_call_localret_ent(string__remove_prefix_3_0,
		demangle__demangle_proc_ll_2_0_i53);
MR_def_label(demangle__demangle_proc_ll_2_0,53)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(demangle__demangle_proc_ll_2_0_i1);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(1,2,4);
	MR_np_call_localret_ent(demangle__remove_maybe_module_prefix_4_0,
		demangle__demangle_proc_ll_2_0_i55);
MR_def_label(demangle__demangle_proc_ll_2_0,55)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(demangle__demangle_proc_ll_2_0_i56);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(1, MR_r1, 0);
	if ((strcmp((char *) (MR_Word *) MR_tempr1, MR_string_const("", 0)) == 0)) {
		MR_GOTO_LAB(demangle__demangle_proc_ll_2_0_i1);
	}
	}
MR_def_label(demangle__demangle_proc_ll_2_0,56)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_sv(5) = MR_tempr1;
	}
	MR_np_call_localret_ent(demangle__handle_category_etc_5_0,
		demangle__demangle_proc_ll_2_0_i61);
MR_def_label(demangle__demangle_proc_ll_2_0,50)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(1,2,4);
	MR_np_call_localret_ent(demangle__remove_maybe_module_prefix_4_0,
		demangle__demangle_proc_ll_2_0_i56);
MR_def_label(demangle__demangle_proc_ll_2_0,61)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(demangle__demangle_proc_ll_2_0_i1);
	}
	MR_r1 = MR_r3;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_tempr1;
	MR_r5 = MR_sv(4);
	MR_r6 = MR_sv(7);
	MR_r7 = MR_sv(6);
	MR_r8 = MR_sv(3);
	MR_r9 = MR_sv(2);
	MR_r10 = (MR_Word) MR_tbmkword(0, 0);
	}
	MR_np_call_localret_ent(demangle__format_proc_11_0,
		demangle__demangle_proc_ll_2_0_i63);
MR_def_label(demangle__demangle_proc_ll_2_0,63)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(string__append_list_2_0,
		demangle__demangle_proc_ll_2_0_i64);
MR_def_label(demangle__demangle_proc_ll_2_0,64)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(f_100_101_109_97_110_103_108_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_99_103_95_115_101_116_95_95_91_49_44_32_50_44_32_52_93_95_48_3_0,
		demangle__demangle_proc_ll_2_0_i65);
MR_def_label(demangle__demangle_proc_ll_2_0,65)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_succip_word = MR_sv(8);
	MR_decr_sp(8);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(demangle__demangle_proc_ll_2_0,1)
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


MR_BEGIN_MODULE(demangle_module14)
	MR_init_entry1(demangle__demangle_proc_hl_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__demangle__demangle_proc_hl_2_0);
	MR_init_label10(demangle__demangle_proc_hl_2_0,3,2,6,9,11,8,14,16,18,20)
	MR_init_label10(demangle__demangle_proc_hl_2_0,22,24,25,26,27,32,29,34,15,37)
	MR_init_label10(demangle__demangle_proc_hl_2_0,39,41,43,45,46,47,48,53,50,55)
	MR_init_label10(demangle__demangle_proc_hl_2_0,36,58,60,57,64,66,67,70,68,73)
	MR_init_label10(demangle__demangle_proc_hl_2_0,74,79,76,81,86,89,90,93,95,96)
	MR_init_label1(demangle__demangle_proc_hl_2_0,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'demangle_proc_hl'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(demangle__demangle_proc_hl_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("mercury__", 9);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(string__remove_prefix_3_0,
		demangle__demangle_proc_hl_2_0_i3);
MR_def_label(demangle__demangle_proc_hl_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(demangle__demangle_proc_hl_2_0_i2);
	}
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(demangle__remove_trailing_int_3_0,
		demangle__demangle_proc_hl_2_0_i6);
MR_def_label(demangle__demangle_proc_hl_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(demangle__remove_trailing_int_3_0,
		demangle__demangle_proc_hl_2_0_i6);
MR_def_label(demangle__demangle_proc_hl_2_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(demangle__demangle_proc_hl_2_0_i1);
	}
	MR_sv(1) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Word) MR_string_const("_", 1);
	}
	MR_np_call_localret_ent(string__remove_suffix_3_0,
		demangle__demangle_proc_hl_2_0_i9);
MR_def_label(demangle__demangle_proc_hl_2_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(demangle__demangle_proc_hl_2_0_i8);
	}
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(demangle__remove_trailing_int_3_0,
		demangle__demangle_proc_hl_2_0_i11);
MR_def_label(demangle__demangle_proc_hl_2_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(demangle__demangle_proc_hl_2_0_i8);
	}
	MR_tag_alloc_heap(MR_sv(2), 1, (MR_Integer) 1);
	MR_tfield(1, MR_sv(2), 0) = MR_sv(1);
	MR_sv(1) = MR_r2;
	MR_r1 = MR_r3;
	MR_GOTO_LAB(demangle__demangle_proc_hl_2_0_i14);
MR_def_label(demangle__demangle_proc_hl_2_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_sv(2) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_r2;
MR_def_label(demangle__demangle_proc_hl_2_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = (MR_Word) MR_TAG_COMMON(1,2,10);
	MR_sv(3) = MR_r1;
	MR_r2 = (MR_Word) MR_string_const("f_", 2);
	MR_np_call_localret_ent(string__remove_suffix_3_0,
		demangle__demangle_proc_hl_2_0_i16);
MR_def_label(demangle__demangle_proc_hl_2_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(demangle__demangle_proc_hl_2_0_i15);
	}
	MR_r1 = MR_r2;
	MR_r2 = (MR_Word) MR_string_const("_", 1);
	MR_np_call_localret_ent(string__remove_suffix_3_0,
		demangle__demangle_proc_hl_2_0_i18);
MR_def_label(demangle__demangle_proc_hl_2_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(demangle__demangle_proc_hl_2_0_i1);
	}
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(demangle__remove_trailing_int_3_0,
		demangle__demangle_proc_hl_2_0_i20);
MR_def_label(demangle__demangle_proc_hl_2_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(demangle__demangle_proc_hl_2_0_i1);
	}
	MR_sv(3) = MR_sv(2);
	MR_sv(2) = MR_r2;
	MR_r1 = MR_r3;
	MR_r2 = (MR_Word) MR_string_const("_", 1);
	MR_np_call_localret_ent(string__remove_suffix_3_0,
		demangle__demangle_proc_hl_2_0_i22);
MR_def_label(demangle__demangle_proc_hl_2_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(demangle__demangle_proc_hl_2_0_i1);
	}
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(demangle__demangle_unused_args_5_0,
		demangle__demangle_proc_hl_2_0_i24);
MR_def_label(demangle__demangle_proc_hl_2_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_r2;
	MR_r2 = MR_r3;
	MR_np_call_localret_ent(demangle__demangle_higher_order_5_0,
		demangle__demangle_proc_hl_2_0_i25);
MR_def_label(demangle__demangle_proc_hl_2_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_sv(6) = MR_r2;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_r3;
	MR_np_call_localret_ent(demangle__remove_maybe_module_prefix_4_0,
		demangle__demangle_proc_hl_2_0_i26);
MR_def_label(demangle__demangle_proc_hl_2_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_r1 = MR_sv(6);
	MR_np_call_localret_ent(demangle__handle_compiler_generated_pred_4_0,
		demangle__demangle_proc_hl_2_0_i27);
MR_def_label(demangle__demangle_proc_hl_2_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(demangle__demangle_proc_hl_2_0_i1);
	}
	if (MR_LTAGS_TEST(MR_r2,0,3)) {
		MR_GOTO_LAB(demangle__demangle_proc_hl_2_0_i29);
	}
	MR_sv(8) = MR_r2;
	MR_r1 = (MR_Word) MR_string_const("__", 2);
	MR_r2 = MR_r3;
	MR_np_call_localret_ent(string__remove_prefix_3_0,
		demangle__demangle_proc_hl_2_0_i32);
MR_def_label(demangle__demangle_proc_hl_2_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(demangle__demangle_proc_hl_2_0_i1);
	}
	MR_r1 = MR_r2;
	MR_GOTO_LAB(demangle__demangle_proc_hl_2_0_i34);
MR_def_label(demangle__demangle_proc_hl_2_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r2;
	MR_r1 = MR_r3;
MR_def_label(demangle__demangle_proc_hl_2_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(8),0,3)) {
		MR_GOTO_LAB(demangle__demangle_proc_hl_2_0_i1);
	}
	MR_sv(1) = (MR_Word) MR_string_const("function", 8);
	MR_np_call_localret_ent(demangle__fix_mangled_ascii_2_0,
		demangle__demangle_proc_hl_2_0_i86);
MR_def_label(demangle__demangle_proc_hl_2_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_r2 = (MR_Word) MR_string_const("p_", 2);
	MR_np_call_localret_ent(string__remove_suffix_3_0,
		demangle__demangle_proc_hl_2_0_i37);
MR_def_label(demangle__demangle_proc_hl_2_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(demangle__demangle_proc_hl_2_0_i36);
	}
	MR_r1 = MR_r2;
	MR_r2 = (MR_Word) MR_string_const("_", 1);
	MR_np_call_localret_ent(string__remove_suffix_3_0,
		demangle__demangle_proc_hl_2_0_i39);
MR_def_label(demangle__demangle_proc_hl_2_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(demangle__demangle_proc_hl_2_0_i1);
	}
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(demangle__remove_trailing_int_3_0,
		demangle__demangle_proc_hl_2_0_i41);
MR_def_label(demangle__demangle_proc_hl_2_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(demangle__demangle_proc_hl_2_0_i1);
	}
	MR_sv(3) = MR_sv(2);
	MR_sv(2) = MR_r2;
	MR_r1 = MR_r3;
	MR_r2 = (MR_Word) MR_string_const("_", 1);
	MR_np_call_localret_ent(string__remove_suffix_3_0,
		demangle__demangle_proc_hl_2_0_i43);
MR_def_label(demangle__demangle_proc_hl_2_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(demangle__demangle_proc_hl_2_0_i1);
	}
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(demangle__demangle_unused_args_5_0,
		demangle__demangle_proc_hl_2_0_i45);
MR_def_label(demangle__demangle_proc_hl_2_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_r2;
	MR_r2 = MR_r3;
	MR_np_call_localret_ent(demangle__demangle_higher_order_5_0,
		demangle__demangle_proc_hl_2_0_i46);
MR_def_label(demangle__demangle_proc_hl_2_0,46)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_sv(6) = MR_r2;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_r3;
	MR_np_call_localret_ent(demangle__remove_maybe_module_prefix_4_0,
		demangle__demangle_proc_hl_2_0_i47);
MR_def_label(demangle__demangle_proc_hl_2_0,47)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_r1 = MR_sv(6);
	MR_np_call_localret_ent(demangle__handle_compiler_generated_pred_4_0,
		demangle__demangle_proc_hl_2_0_i48);
MR_def_label(demangle__demangle_proc_hl_2_0,48)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(demangle__demangle_proc_hl_2_0_i1);
	}
	if (MR_LTAGS_TEST(MR_r2,0,3)) {
		MR_GOTO_LAB(demangle__demangle_proc_hl_2_0_i50);
	}
	MR_sv(8) = MR_r2;
	MR_r1 = (MR_Word) MR_string_const("__", 2);
	MR_r2 = MR_r3;
	MR_np_call_localret_ent(string__remove_prefix_3_0,
		demangle__demangle_proc_hl_2_0_i53);
MR_def_label(demangle__demangle_proc_hl_2_0,53)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(demangle__demangle_proc_hl_2_0_i1);
	}
	MR_r1 = MR_r2;
	MR_GOTO_LAB(demangle__demangle_proc_hl_2_0_i55);
MR_def_label(demangle__demangle_proc_hl_2_0,50)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r2;
	MR_r1 = MR_r3;
MR_def_label(demangle__demangle_proc_hl_2_0,55)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(8),0,3)) {
		MR_GOTO_LAB(demangle__demangle_proc_hl_2_0_i1);
	}
	MR_sv(1) = (MR_Word) MR_string_const("predicate", 9);
	MR_np_call_localret_ent(demangle__fix_mangled_ascii_2_0,
		demangle__demangle_proc_hl_2_0_i86);
MR_def_label(demangle__demangle_proc_hl_2_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_r2 = (MR_Word) MR_string_const("_", 1);
	MR_np_call_localret_ent(string__remove_suffix_3_0,
		demangle__demangle_proc_hl_2_0_i58);
MR_def_label(demangle__demangle_proc_hl_2_0,58)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(demangle__demangle_proc_hl_2_0_i57);
	}
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(demangle__remove_trailing_int_3_0,
		demangle__demangle_proc_hl_2_0_i60);
MR_def_label(demangle__demangle_proc_hl_2_0,60)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(demangle__demangle_proc_hl_2_0_i57);
	}
	MR_sv(3) = MR_sv(2);
	MR_sv(2) = MR_r2;
	MR_r1 = MR_r3;
	MR_r2 = (MR_Word) MR_string_const("_", 1);
	MR_np_call_localret_ent(string__remove_suffix_3_0,
		demangle__demangle_proc_hl_2_0_i64);
MR_def_label(demangle__demangle_proc_hl_2_0,57)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_sv(2),0,0)) {
		MR_GOTO_LAB(demangle__demangle_proc_hl_2_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_sv(1);
	MR_tempr2 = MR_sv(3);
	MR_sv(3) = (MR_Word) MR_tbmkword(0, 0);
	MR_sv(1) = MR_tfield(1, MR_tempr1, 0);
	MR_r1 = MR_tempr2;
	MR_r2 = (MR_Word) MR_string_const("_", 1);
	}
	MR_np_call_localret_ent(string__remove_suffix_3_0,
		demangle__demangle_proc_hl_2_0_i64);
MR_def_label(demangle__demangle_proc_hl_2_0,64)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(demangle__demangle_proc_hl_2_0_i1);
	}
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(demangle__demangle_unused_args_5_0,
		demangle__demangle_proc_hl_2_0_i66);
MR_def_label(demangle__demangle_proc_hl_2_0,66)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_r2;
	MR_r2 = MR_r3;
	MR_np_call_localret_ent(demangle__demangle_higher_order_5_0,
		demangle__demangle_proc_hl_2_0_i67);
MR_def_label(demangle__demangle_proc_hl_2_0,67)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_sv(4),0,0)) {
		MR_GOTO_LAB(demangle__demangle_proc_hl_2_0_i68);
	}
	MR_sv(5) = MR_r1;
	MR_sv(6) = MR_r2;
	MR_r1 = MR_r3;
	MR_np_call_localret_ent(demangle__remove_trailing_int_3_0,
		demangle__demangle_proc_hl_2_0_i70);
MR_def_label(demangle__demangle_proc_hl_2_0,70)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(demangle__demangle_proc_hl_2_0_i1);
	}
	if ((MR_sv(2) != MR_r2)) {
		MR_GOTO_LAB(demangle__demangle_proc_hl_2_0_i1);
	}
	MR_r1 = MR_sv(7);
	MR_r2 = MR_r3;
	MR_np_call_localret_ent(demangle__remove_maybe_module_prefix_4_0,
		demangle__demangle_proc_hl_2_0_i73);
MR_def_label(demangle__demangle_proc_hl_2_0,68)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_sv(6) = MR_r2;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_r3;
	MR_np_call_localret_ent(demangle__remove_maybe_module_prefix_4_0,
		demangle__demangle_proc_hl_2_0_i73);
MR_def_label(demangle__demangle_proc_hl_2_0,73)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_r1 = MR_sv(6);
	MR_np_call_localret_ent(demangle__handle_compiler_generated_pred_4_0,
		demangle__demangle_proc_hl_2_0_i74);
MR_def_label(demangle__demangle_proc_hl_2_0,74)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(demangle__demangle_proc_hl_2_0_i1);
	}
	if (MR_LTAGS_TEST(MR_r2,0,3)) {
		MR_GOTO_LAB(demangle__demangle_proc_hl_2_0_i76);
	}
	MR_sv(8) = MR_r2;
	MR_r1 = (MR_Word) MR_string_const("__", 2);
	MR_r2 = MR_r3;
	MR_np_call_localret_ent(string__remove_prefix_3_0,
		demangle__demangle_proc_hl_2_0_i79);
MR_def_label(demangle__demangle_proc_hl_2_0,79)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(demangle__demangle_proc_hl_2_0_i1);
	}
	MR_r1 = MR_r2;
	MR_GOTO_LAB(demangle__demangle_proc_hl_2_0_i81);
MR_def_label(demangle__demangle_proc_hl_2_0,76)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r2;
	MR_r1 = MR_r3;
MR_def_label(demangle__demangle_proc_hl_2_0,81)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_sv(8),0,3)) {
		MR_GOTO_LAB(demangle__demangle_proc_hl_2_0_i1);
	}
	MR_sv(1) = (MR_Word) MR_string_const("predicate", 9);
	MR_np_call_localret_ent(demangle__fix_mangled_ascii_2_0,
		demangle__demangle_proc_hl_2_0_i86);
MR_def_label(demangle__demangle_proc_hl_2_0,86)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(demangle__demangle_proc_hl_2_0_i1);
	}
	if (MR_LTAGS_TESTR(MR_sv(7),0,0)) {
		MR_GOTO_LAB(demangle__demangle_proc_hl_2_0_i89);
	}
	MR_r1 = MR_sv(8);
	MR_sv(7) = (MR_Word) MR_tbmkword(0, 0);
	MR_np_call_localret_ent(demangle__handle_category_etc_5_0,
		demangle__demangle_proc_hl_2_0_i93);
MR_def_label(demangle__demangle_proc_hl_2_0,89)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(7);
	MR_sv(7) = MR_r2;
	MR_r1 = MR_tfield(1, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(demangle__fix_mangled_ascii_2_0,
		demangle__demangle_proc_hl_2_0_i90);
MR_def_label(demangle__demangle_proc_hl_2_0,90)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(demangle__demangle_proc_hl_2_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_r2;
	MR_r1 = MR_sv(8);
	MR_tempr2 = MR_sv(7);
	MR_sv(7) = MR_tempr1;
	MR_r2 = MR_tempr2;
	}
	MR_np_call_localret_ent(demangle__handle_category_etc_5_0,
		demangle__demangle_proc_hl_2_0_i93);
MR_def_label(demangle__demangle_proc_hl_2_0,93)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(demangle__demangle_proc_hl_2_0_i1);
	}
	MR_r1 = MR_r3;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(7);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_tempr1;
	MR_r5 = MR_sv(2);
	MR_r6 = MR_sv(6);
	MR_r7 = MR_sv(5);
	MR_r8 = MR_sv(4);
	MR_r9 = MR_sv(3);
	MR_r10 = (MR_Word) MR_tbmkword(0, 0);
	}
	MR_np_call_localret_ent(demangle__format_proc_11_0,
		demangle__demangle_proc_hl_2_0_i95);
MR_def_label(demangle__demangle_proc_hl_2_0,95)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(string__append_list_2_0,
		demangle__demangle_proc_hl_2_0_i96);
MR_def_label(demangle__demangle_proc_hl_2_0,96)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(demangle__demangle_proc_hl_2_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(demangle_module15)
	MR_init_entry1(demangle__format_data_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__demangle__format_data_5_0);
	MR_init_label10(demangle__format_data_5_0,3,5,6,7,8,88,13,14,15,16)
	MR_init_label10(demangle__format_data_5_0,17,11,20,21,22,23,86,29,30,31)
	MR_init_label10(demangle__format_data_5_0,32,33,27,36,37,38,39,87,45,46)
	MR_init_label10(demangle__format_data_5_0,47,48,49,43,52,53,54,55,56,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'format_data'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(demangle__format_data_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_r1,
		MR_LABEL_AP(demangle__format_data_5_0_i3) MR_AND
		MR_LABEL_AP(demangle__format_data_5_0_i86) MR_AND
		MR_LABEL_AP(demangle__format_data_5_0_i87) MR_AND
		MR_LABEL_AP(demangle__format_data_5_0_i88));
MR_def_label(demangle__format_data_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r2,0,0)) {
		MR_GOTO_LAB(demangle__format_data_5_0_i1);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r4;
	MR_r1 = MR_tfield(1, MR_r2, 0);
	MR_r2 = (MR_Word) MR_string_const(">", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		demangle__format_data_5_0_i5);
MR_def_label(demangle__format_data_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const(" for module ", 12);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		demangle__format_data_5_0_i6);
MR_def_label(demangle__format_data_5_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		demangle__format_data_5_0_i7);
MR_def_label(demangle__format_data_5_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		demangle__format_data_5_0_i8);
MR_def_label(demangle__format_data_5_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("<shared constant number ", 24);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		demangle__format_data_5_0_i56);
MR_def_label(demangle__format_data_5_0,88)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	if (MR_LTAGS_TEST(MR_r2,0,0)) {
		MR_GOTO_LAB(demangle__format_data_5_0_i11);
	}
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_tfield(1, MR_r2, 0);
	MR_r1 = MR_r4;
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		demangle__format_data_5_0_i13);
MR_def_label(demangle__format_data_5_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("\'>", 2);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		demangle__format_data_5_0_i14);
MR_def_label(demangle__format_data_5_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("/", 1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		demangle__format_data_5_0_i15);
MR_def_label(demangle__format_data_5_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		demangle__format_data_5_0_i16);
MR_def_label(demangle__format_data_5_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const(".", 1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		demangle__format_data_5_0_i17);
MR_def_label(demangle__format_data_5_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		demangle__format_data_5_0_i23);
MR_def_label(demangle__format_data_5_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r3;
	MR_r1 = MR_r4;
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		demangle__format_data_5_0_i20);
MR_def_label(demangle__format_data_5_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("\'>", 2);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		demangle__format_data_5_0_i21);
MR_def_label(demangle__format_data_5_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("/", 1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		demangle__format_data_5_0_i22);
MR_def_label(demangle__format_data_5_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		demangle__format_data_5_0_i23);
MR_def_label(demangle__format_data_5_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("<type_ctor_functors for type \140", 30);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		demangle__format_data_5_0_i56);
MR_def_label(demangle__format_data_5_0,86)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	if (MR_LTAGS_TEST(MR_r2,0,0)) {
		MR_GOTO_LAB(demangle__format_data_5_0_i27);
	}
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_tfield(1, MR_r2, 0);
	MR_r1 = MR_r4;
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		demangle__format_data_5_0_i29);
MR_def_label(demangle__format_data_5_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("\'>", 2);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		demangle__format_data_5_0_i30);
MR_def_label(demangle__format_data_5_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("/", 1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		demangle__format_data_5_0_i31);
MR_def_label(demangle__format_data_5_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		demangle__format_data_5_0_i32);
MR_def_label(demangle__format_data_5_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const(".", 1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		demangle__format_data_5_0_i33);
MR_def_label(demangle__format_data_5_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		demangle__format_data_5_0_i39);
MR_def_label(demangle__format_data_5_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r3;
	MR_r1 = MR_r4;
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		demangle__format_data_5_0_i36);
MR_def_label(demangle__format_data_5_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("\'>", 2);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		demangle__format_data_5_0_i37);
MR_def_label(demangle__format_data_5_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("/", 1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		demangle__format_data_5_0_i38);
MR_def_label(demangle__format_data_5_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		demangle__format_data_5_0_i39);
MR_def_label(demangle__format_data_5_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("<type_ctor_info for type \140", 26);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		demangle__format_data_5_0_i56);
MR_def_label(demangle__format_data_5_0,87)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	if (MR_LTAGS_TEST(MR_r2,0,0)) {
		MR_GOTO_LAB(demangle__format_data_5_0_i43);
	}
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_tfield(1, MR_r2, 0);
	MR_r1 = MR_r4;
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		demangle__format_data_5_0_i45);
MR_def_label(demangle__format_data_5_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("\'>", 2);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		demangle__format_data_5_0_i46);
MR_def_label(demangle__format_data_5_0,46)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("/", 1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		demangle__format_data_5_0_i47);
MR_def_label(demangle__format_data_5_0,47)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		demangle__format_data_5_0_i48);
MR_def_label(demangle__format_data_5_0,48)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const(".", 1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		demangle__format_data_5_0_i49);
MR_def_label(demangle__format_data_5_0,49)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		demangle__format_data_5_0_i55);
MR_def_label(demangle__format_data_5_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r3;
	MR_r1 = MR_r4;
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		demangle__format_data_5_0_i52);
MR_def_label(demangle__format_data_5_0,52)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("\'>", 2);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		demangle__format_data_5_0_i53);
MR_def_label(demangle__format_data_5_0,53)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("/", 1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		demangle__format_data_5_0_i54);
MR_def_label(demangle__format_data_5_0,54)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		demangle__format_data_5_0_i55);
MR_def_label(demangle__format_data_5_0,55)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("<type_ctor_layout for type \140", 28);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		demangle__format_data_5_0_i56);
MR_def_label(demangle__format_data_5_0,56)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(3);
MR_def_label(demangle__format_data_5_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(demangle_module16)
	MR_init_entry1(demangle__demangle_class_args_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__demangle__demangle_class_args_4_0);
	MR_init_label10(demangle__demangle_class_args_4_0,3,7,9,12,14,17,16,20,21,22)
	MR_init_label3(demangle__demangle_class_args_4_0,23,24,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'demangle_class_args'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(demangle__demangle_class_args_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(1,2,11);
	MR_np_call_localret_ent(demangle__remove_maybe_module_prefix_4_0,
		demangle__demangle_class_args_4_0_i3);
MR_def_label(demangle__demangle_class_args_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(demangle__demangle_class_args_4_0_i1);
	}
	MR_sv(2) = MR_tfield(1, MR_r1, 0);
	if ((strcmp((char *) (MR_Word *) MR_sv(2), MR_string_const("", 0)) == 0)) {
		MR_GOTO_LAB(demangle__demangle_class_args_4_0_i1);
	}
	MR_r1 = (MR_Word) MR_string_const("arity", 5);
	MR_np_call_localret_ent(string__remove_prefix_3_0,
		demangle__demangle_class_args_4_0_i7);
MR_def_label(demangle__demangle_class_args_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(demangle__demangle_class_args_4_0_i1);
	}
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(string__first_char_3_3,
		demangle__demangle_class_args_4_0_i9);
MR_def_label(demangle__demangle_class_args_4_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(demangle__demangle_class_args_4_0_i1);
	}
	if (!(((MR_Unsigned) ((MR_Integer) MR_r2 - (MR_Integer) 48) <= 9))) {
		MR_GOTO_LAB(demangle__demangle_class_args_4_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = (MR_Word) &MR_tfield(0, (MR_Word *) &mercury_vector_common_0_5, ((MR_Integer) MR_r2 - (MR_Integer) 48));
	MR_r1 = MR_tfield(0, MR_tempr1, 0);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_r3;
	}
	MR_np_call_localret_ent(demangle__remove_int_2_4_0,
		demangle__demangle_class_args_4_0_i12);
MR_def_label(demangle__demangle_class_args_4_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(demangle__demangle_class_args_4_0_i1);
	}
	MR_sv(3) = MR_r2;
	MR_r1 = (MR_Word) MR_string_const("__", 2);
	MR_r2 = MR_r3;
	MR_np_call_localret_ent(string__remove_prefix_3_0,
		demangle__demangle_class_args_4_0_i14);
MR_def_label(demangle__demangle_class_args_4_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(demangle__demangle_class_args_4_0_i1);
	}
	if (MR_INT_LE(MR_sv(1),1)) {
		MR_GOTO_LAB(demangle__demangle_class_args_4_0_i16);
	}
	MR_r1 = ((MR_Integer) MR_sv(1) - (MR_Integer) 1);
	MR_np_localcall_lab(demangle__demangle_class_args_4_0,
		demangle__demangle_class_args_4_0_i17);
MR_def_label(demangle__demangle_class_args_4_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(demangle__demangle_class_args_4_0_i1);
	}
	MR_r1 = (MR_Word) MR_string_const(", ", 2);
	MR_sv(1) = MR_r3;
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		demangle__demangle_class_args_4_0_i20);
MR_def_label(demangle__demangle_class_args_4_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("", 0);
	MR_sv(1) = MR_r2;
	MR_r2 = (MR_Word) MR_string_const("", 0);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		demangle__demangle_class_args_4_0_i20);
MR_def_label(demangle__demangle_class_args_4_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		demangle__demangle_class_args_4_0_i21);
MR_def_label(demangle__demangle_class_args_4_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		demangle__demangle_class_args_4_0_i22);
MR_def_label(demangle__demangle_class_args_4_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("/", 1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		demangle__demangle_class_args_4_0_i23);
MR_def_label(demangle__demangle_class_args_4_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		demangle__demangle_class_args_4_0_i24);
MR_def_label(demangle__demangle_class_args_4_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r3 = MR_sv(1);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(demangle__demangle_class_args_4_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(demangle_module17)
	MR_init_entry1(demangle__demangle_typeclass_info_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__demangle__demangle_typeclass_info_2_0);
	MR_init_label10(demangle__demangle_typeclass_info_2_0,3,2,6,9,13,15,18,20,22,24)
	MR_init_label5(demangle__demangle_typeclass_info_2_0,26,27,28,29,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'demangle_typeclass_info'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(demangle__demangle_typeclass_info_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("mercury_data___", 15);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(string__remove_prefix_3_0,
		demangle__demangle_typeclass_info_2_0_i3);
MR_def_label(demangle__demangle_typeclass_info_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(demangle__demangle_typeclass_info_2_0_i2);
	}
	MR_r1 = (MR_Word) MR_string_const("base_typeclass_info_", 20);
	MR_np_call_localret_ent(string__remove_prefix_3_0,
		demangle__demangle_typeclass_info_2_0_i6);
MR_def_label(demangle__demangle_typeclass_info_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_r1 = (MR_Word) MR_string_const("base_typeclass_info_", 20);
	MR_np_call_localret_ent(string__remove_prefix_3_0,
		demangle__demangle_typeclass_info_2_0_i6);
MR_def_label(demangle__demangle_typeclass_info_2_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(demangle__demangle_typeclass_info_2_0_i1);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(1,2,11);
	MR_np_call_localret_ent(demangle__remove_maybe_module_prefix_4_0,
		demangle__demangle_typeclass_info_2_0_i9);
MR_def_label(demangle__demangle_typeclass_info_2_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(demangle__demangle_typeclass_info_2_0_i1);
	}
	MR_sv(1) = MR_tfield(1, MR_r1, 0);
	if ((strcmp((char *) (MR_Word *) MR_sv(1), MR_string_const("", 0)) == 0)) {
		MR_GOTO_LAB(demangle__demangle_typeclass_info_2_0_i1);
	}
	MR_r1 = (MR_Word) MR_string_const("arity", 5);
	MR_np_call_localret_ent(string__remove_prefix_3_0,
		demangle__demangle_typeclass_info_2_0_i13);
MR_def_label(demangle__demangle_typeclass_info_2_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(demangle__demangle_typeclass_info_2_0_i1);
	}
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(string__first_char_3_3,
		demangle__demangle_typeclass_info_2_0_i15);
MR_def_label(demangle__demangle_typeclass_info_2_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(demangle__demangle_typeclass_info_2_0_i1);
	}
	if (!(((MR_Unsigned) ((MR_Integer) MR_r2 - (MR_Integer) 48) <= 9))) {
		MR_GOTO_LAB(demangle__demangle_typeclass_info_2_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = (MR_Word) &MR_tfield(0, (MR_Word *) &mercury_vector_common_0_6, ((MR_Integer) MR_r2 - (MR_Integer) 48));
	MR_r1 = MR_tfield(0, MR_tempr1, 0);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_r3;
	}
	MR_np_call_localret_ent(demangle__remove_int_2_4_0,
		demangle__demangle_typeclass_info_2_0_i18);
MR_def_label(demangle__demangle_typeclass_info_2_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(demangle__demangle_typeclass_info_2_0_i1);
	}
	MR_sv(2) = MR_r2;
	MR_r1 = (MR_Word) MR_string_const("__", 2);
	MR_r2 = MR_r3;
	MR_np_call_localret_ent(string__remove_prefix_3_0,
		demangle__demangle_typeclass_info_2_0_i20);
MR_def_label(demangle__demangle_typeclass_info_2_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(demangle__demangle_typeclass_info_2_0_i1);
	}
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(demangle__fix_mangled_ascii_2_0,
		demangle__demangle_typeclass_info_2_0_i22);
MR_def_label(demangle__demangle_typeclass_info_2_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(demangle__demangle_typeclass_info_2_0_i1);
	}
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(demangle__demangle_class_args_4_0,
		demangle__demangle_typeclass_info_2_0_i24);
MR_def_label(demangle__demangle_typeclass_info_2_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(demangle__demangle_typeclass_info_2_0_i1);
	}
	MR_r1 = MR_r2;
	MR_r2 = (MR_Word) MR_string_const(")>", 2);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		demangle__demangle_typeclass_info_2_0_i26);
MR_def_label(demangle__demangle_typeclass_info_2_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("(", 1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		demangle__demangle_typeclass_info_2_0_i27);
MR_def_label(demangle__demangle_typeclass_info_2_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		demangle__demangle_typeclass_info_2_0_i28);
MR_def_label(demangle__demangle_typeclass_info_2_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("<instance declaration for ", 26);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		demangle__demangle_typeclass_info_2_0_i29);
MR_def_label(demangle__demangle_typeclass_info_2_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(demangle__demangle_typeclass_info_2_0,1)
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

MR_decl_entry(fn__string__length_1_0);
MR_decl_entry(fn__f_105_110_116_95_95_47_47_2_0);
MR_decl_entry(fn__string__left_2_0);
MR_decl_entry(fn__string__right_2_0);

MR_BEGIN_MODULE(demangle_module18)
	MR_init_entry1(demangle__demangle_from_c_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__demangle__demangle_from_c_2_0);
	MR_init_label10(demangle__demangle_from_c_2_0,4,8,12,11,15,14,18,19,20,26)
	MR_init_label10(demangle__demangle_from_c_2_0,27,28,29,30,31,23,34,36,38,40)
	MR_init_label10(demangle__demangle_from_c_2_0,35,43,45,47,42,50,52,54,49,56)
	MR_init_label5(demangle__demangle_from_c_2_0,58,63,65,10,71)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'demangle_from_c'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(demangle__demangle_from_c_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(demangle__demangle_proc_hl_2_0,
		demangle__demangle_from_c_2_0_i4);
MR_def_label(demangle__demangle_from_c_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(demangle__demangle_from_c_2_0_i71);
	}
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(demangle__demangle_proc_ll_2_0,
		demangle__demangle_from_c_2_0_i8);
MR_def_label(demangle__demangle_from_c_2_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(demangle__demangle_from_c_2_0_i71);
	}
	MR_r1 = MR_sv(1);
	MR_r1 = (MR_Word) MR_string_const("mercury_data_", 13);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(string__remove_prefix_3_0,
		demangle__demangle_from_c_2_0_i12);
MR_def_label(demangle__demangle_from_c_2_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(demangle__demangle_from_c_2_0_i11);
	}
	MR_sv(2) = (MR_Integer) 0;
	MR_GOTO_LAB(demangle__demangle_from_c_2_0_i18);
MR_def_label(demangle__demangle_from_c_2_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("mercury__", 9);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(string__remove_prefix_3_0,
		demangle__demangle_from_c_2_0_i15);
MR_def_label(demangle__demangle_from_c_2_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(demangle__demangle_from_c_2_0_i14);
	}
	MR_sv(2) = (MR_Integer) 1;
	MR_GOTO_LAB(demangle__demangle_from_c_2_0_i18);
MR_def_label(demangle__demangle_from_c_2_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = (MR_Integer) 1;
	MR_r2 = MR_sv(1);
MR_def_label(demangle__demangle_from_c_2_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(1,2,15);
	MR_np_call_localret_ent(demangle__remove_maybe_module_prefix_4_0,
		demangle__demangle_from_c_2_0_i19);
MR_def_label(demangle__demangle_from_c_2_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(demangle__demangle_from_c_2_0_i20);
	}
	MR_r3 = MR_tfield(1, MR_r1, 0);
	if ((strcmp((char *) (MR_Word *) MR_r3, MR_string_const("", 0)) != 0)) {
		MR_GOTO_LAB(demangle__demangle_from_c_2_0_i20);
	}
	MR_sv(2) = (MR_Word) MR_tbmkword(0, 0);
	MR_GOTO_LAB(demangle__demangle_from_c_2_0_i34);
MR_def_label(demangle__demangle_from_c_2_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(2),1)) {
		MR_GOTO_LAB(demangle__demangle_from_c_2_0_i23);
	}
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(demangle__demangle_from_c_2_0_i23);
	}
	MR_sv(2) = MR_tfield(1, MR_r1, 0);
	MR_sv(4) = MR_r2;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(fn__string__length_1_0,
		demangle__demangle_from_c_2_0_i26);
MR_def_label(demangle__demangle_from_c_2_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 2;
	MR_np_call_localret_ent(fn__f_105_110_116_95_95_47_47_2_0,
		demangle__demangle_from_c_2_0_i27);
MR_def_label(demangle__demangle_from_c_2_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__string__left_2_0,
		demangle__demangle_from_c_2_0_i28);
MR_def_label(demangle__demangle_from_c_2_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(fn__string__length_1_0,
		demangle__demangle_from_c_2_0_i29);
MR_def_label(demangle__demangle_from_c_2_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 2;
	MR_np_call_localret_ent(fn__f_105_110_116_95_95_47_47_2_0,
		demangle__demangle_from_c_2_0_i30);
MR_def_label(demangle__demangle_from_c_2_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__string__right_2_0,
		demangle__demangle_from_c_2_0_i31);
MR_def_label(demangle__demangle_from_c_2_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_sv(3), (char *) (MR_Word *) MR_r1) != 0)) {
		MR_GOTO_LAB(demangle__demangle_from_c_2_0_i10);
	}
	MR_tag_alloc_heap(MR_sv(2), 1, (MR_Integer) 1);
	MR_tfield(1, MR_sv(2), 0) = MR_sv(3);
	MR_r2 = MR_sv(4);
	MR_GOTO_LAB(demangle__demangle_from_c_2_0_i34);
MR_def_label(demangle__demangle_from_c_2_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
MR_def_label(demangle__demangle_from_c_2_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r2;
	MR_r1 = (MR_Word) MR_string_const("type_ctor_info_", 15);
	MR_np_call_localret_ent(string__remove_prefix_3_0,
		demangle__demangle_from_c_2_0_i36);
MR_def_label(demangle__demangle_from_c_2_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(demangle__demangle_from_c_2_0_i35);
	}
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(demangle__remove_trailing_int_3_0,
		demangle__demangle_from_c_2_0_i38);
MR_def_label(demangle__demangle_from_c_2_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(demangle__demangle_from_c_2_0_i10);
	}
	MR_sv(4) = MR_r2;
	MR_r1 = MR_r3;
	MR_r2 = (MR_Word) MR_string_const("_", 1);
	MR_np_call_localret_ent(string__remove_suffix_3_0,
		demangle__demangle_from_c_2_0_i40);
MR_def_label(demangle__demangle_from_c_2_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(demangle__demangle_from_c_2_0_i10);
	}
	MR_sv(3) = (MR_Integer) 1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(demangle__fix_mangled_ascii_2_0,
		demangle__demangle_from_c_2_0_i63);
MR_def_label(demangle__demangle_from_c_2_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("type_ctor_layout_", 17);
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(string__remove_prefix_3_0,
		demangle__demangle_from_c_2_0_i43);
MR_def_label(demangle__demangle_from_c_2_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(demangle__demangle_from_c_2_0_i42);
	}
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(demangle__remove_trailing_int_3_0,
		demangle__demangle_from_c_2_0_i45);
MR_def_label(demangle__demangle_from_c_2_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(demangle__demangle_from_c_2_0_i10);
	}
	MR_sv(4) = MR_r2;
	MR_r1 = MR_r3;
	MR_r2 = (MR_Word) MR_string_const("_", 1);
	MR_np_call_localret_ent(string__remove_suffix_3_0,
		demangle__demangle_from_c_2_0_i47);
MR_def_label(demangle__demangle_from_c_2_0,47)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(demangle__demangle_from_c_2_0_i10);
	}
	MR_sv(3) = (MR_Integer) 2;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(demangle__fix_mangled_ascii_2_0,
		demangle__demangle_from_c_2_0_i63);
MR_def_label(demangle__demangle_from_c_2_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("type_ctor_functors_", 19);
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(string__remove_prefix_3_0,
		demangle__demangle_from_c_2_0_i50);
MR_def_label(demangle__demangle_from_c_2_0,50)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(demangle__demangle_from_c_2_0_i49);
	}
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(demangle__remove_trailing_int_3_0,
		demangle__demangle_from_c_2_0_i52);
MR_def_label(demangle__demangle_from_c_2_0,52)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(demangle__demangle_from_c_2_0_i10);
	}
	MR_sv(4) = MR_r2;
	MR_r1 = MR_r3;
	MR_r2 = (MR_Word) MR_string_const("_", 1);
	MR_np_call_localret_ent(string__remove_suffix_3_0,
		demangle__demangle_from_c_2_0_i54);
MR_def_label(demangle__demangle_from_c_2_0,54)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(demangle__demangle_from_c_2_0_i10);
	}
	MR_sv(3) = (MR_Integer) 3;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(demangle__fix_mangled_ascii_2_0,
		demangle__demangle_from_c_2_0_i63);
MR_def_label(demangle__demangle_from_c_2_0,49)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("common_", 7);
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(string__remove_prefix_3_0,
		demangle__demangle_from_c_2_0_i56);
MR_def_label(demangle__demangle_from_c_2_0,56)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(demangle__demangle_from_c_2_0_i10);
	}
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(demangle__remove_trailing_int_3_0,
		demangle__demangle_from_c_2_0_i58);
MR_def_label(demangle__demangle_from_c_2_0,58)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(demangle__demangle_from_c_2_0_i10);
	}
	MR_sv(3) = (MR_Integer) 0;
	MR_sv(4) = MR_r2;
	MR_r1 = MR_r3;
	MR_np_call_localret_ent(demangle__fix_mangled_ascii_2_0,
		demangle__demangle_from_c_2_0_i63);
MR_def_label(demangle__demangle_from_c_2_0,63)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(demangle__demangle_from_c_2_0_i10);
	}
	MR_r1 = MR_sv(3);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(4);
	}
	MR_np_call_localret_ent(demangle__format_data_5_0,
		demangle__demangle_from_c_2_0_i65);
MR_def_label(demangle__demangle_from_c_2_0,65)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(demangle__demangle_from_c_2_0_i71);
	}
MR_def_label(demangle__demangle_from_c_2_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(demangle__demangle_typeclass_info_2_0);
MR_def_label(demangle__demangle_from_c_2_0,71)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_r1 = MR_TRUE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(demangle_module19)
	MR_init_entry1(demangle__demangle_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__demangle__demangle_2_0);
	MR_init_label8(demangle__demangle_2_0,4,3,7,9,11,10,15,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'demangle'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__demangle__demangle_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("_entry_", 7);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(string__remove_prefix_3_0,
		demangle__demangle_2_0_i4);
MR_def_label(demangle__demangle_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(demangle__demangle_2_0_i3);
	}
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(demangle__demangle_from_c_2_0,
		demangle__demangle_2_0_i15);
MR_def_label(demangle__demangle_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("_", 1);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(string__remove_prefix_3_0,
		demangle__demangle_2_0_i7);
MR_def_label(demangle__demangle_2_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(demangle__demangle_2_0_i9);
	}
	MR_r2 = MR_sv(1);
MR_def_label(demangle__demangle_2_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r2;
	MR_r1 = (MR_Word) MR_string_const("_entry_", 7);
	MR_np_call_localret_ent(string__remove_prefix_3_0,
		demangle__demangle_2_0_i11);
MR_def_label(demangle__demangle_2_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(demangle__demangle_2_0_i10);
	}
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(demangle__demangle_from_c_2_0,
		demangle__demangle_2_0_i15);
MR_def_label(demangle__demangle_2_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(demangle__demangle_from_c_2_0,
		demangle__demangle_2_0_i15);
MR_def_label(demangle__demangle_2_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(demangle__demangle_2_0_i2);
	}
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(3);
MR_def_label(demangle__demangle_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(demangle_module20)
	MR_init_entry1(__Unify___demangle__data_category_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___demangle__data_category_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___demangle__data_category_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_r1 == MR_r2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(private_builtin__builtin_compare_int_3_0);

MR_BEGIN_MODULE(demangle_module21)
	MR_init_entry1(__Compare___demangle__data_category_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___demangle__data_category_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___demangle__data_category_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(demangle_module22)
	MR_init_entry1(__Unify___demangle__introduced_pred_type_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___demangle__introduced_pred_type_0_0);
	MR_init_label3(__Unify___demangle__introduced_pred_type_0_0,8,13,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___demangle__introduced_pred_type_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___demangle__introduced_pred_type_0_0_i13);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_tempr1;
	MR_sv(2) = MR_r2;
	MR_r1 = MR_tag(MR_tempr1);
	if ((MR_r1 != MR_mktag((MR_Integer) 0))) {
		MR_GOTO_LAB(__Unify___demangle__introduced_pred_type_0_0_i8);
	}
	MR_r2 = MR_unmkbody(MR_tempr1);
	MR_r1 = (MR_sv(2) == MR_tempr1);
	MR_decr_sp(2);
	MR_proceed();
	}
MR_def_label(__Unify___demangle__introduced_pred_type_0_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Unify___demangle__introduced_pred_type_0_0_i1);
	}
	MR_r1 = MR_tfield(1, MR_sv(1), 0);
	MR_r2 = MR_tfield(1, MR_sv(2), 0);
	MR_r1 = (strcmp((char *) (MR_Word *) MR_r1, (char *) (MR_Word *) MR_r2) == 0);
	MR_decr_sp(2);
	MR_proceed();
MR_def_label(__Unify___demangle__introduced_pred_type_0_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp(2);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___demangle__introduced_pred_type_0_0,1)
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

MR_BEGIN_MODULE(demangle_module23)
	MR_init_entry1(__Compare___demangle__introduced_pred_type_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___demangle__introduced_pred_type_0_0);
	MR_init_label8(__Compare___demangle__introduced_pred_type_0_0,51,43,21,55,5,12,32,37)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___demangle__introduced_pred_type_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___demangle__introduced_pred_type_0_0_i55);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_tempr1;
	MR_tempr2 = MR_r2;
	MR_sv(2) = MR_tempr2;
	MR_r2 = MR_tag(MR_tempr1);
	if ((MR_r2 != MR_mktag((MR_Integer) 0))) {
		MR_GOTO_LAB(__Compare___demangle__introduced_pred_type_0_0_i32);
	}
	if (MR_INT_NE(MR_unmkbody(MR_tempr1),0)) {
		MR_GOTO_LAB(__Compare___demangle__introduced_pred_type_0_0_i43);
	}
	MR_r2 = MR_tag(MR_tempr2);
	if ((MR_r2 != MR_mktag((MR_Integer) 0))) {
		MR_GOTO_LAB(__Compare___demangle__introduced_pred_type_0_0_i51);
	}
	if (MR_INT_NE(MR_unmkbody(MR_tempr2),0)) {
		MR_GOTO_LAB(__Compare___demangle__introduced_pred_type_0_0_i51);
	}
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp(3);
	MR_proceed();
	}
MR_def_label(__Compare___demangle__introduced_pred_type_0_0,51)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___demangle__introduced_pred_type_0_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_unmkbody(MR_sv(1)),1)) {
		MR_GOTO_LAB(__Compare___demangle__introduced_pred_type_0_0_i5);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_r2 = MR_tag(MR_tempr1);
	if ((MR_r2 != MR_mktag((MR_Integer) 0))) {
		MR_GOTO_LAB(__Compare___demangle__introduced_pred_type_0_0_i51);
	}
	if (MR_INT_NE(MR_unmkbody(MR_tempr1),0)) {
		MR_GOTO_LAB(__Compare___demangle__introduced_pred_type_0_0_i21);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
	}
MR_def_label(__Compare___demangle__introduced_pred_type_0_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_unmkbody(MR_sv(2)),1)) {
		MR_GOTO_LAB(__Compare___demangle__introduced_pred_type_0_0_i51);
	}
MR_def_label(__Compare___demangle__introduced_pred_type_0_0,55)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___demangle__introduced_pred_type_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_r2 = MR_tag(MR_tempr1);
	if ((MR_r2 != MR_mktag((MR_Integer) 0))) {
		MR_GOTO_LAB(__Compare___demangle__introduced_pred_type_0_0_i51);
	}
	if (MR_INT_NE(MR_unmkbody(MR_tempr1),0)) {
		MR_GOTO_LAB(__Compare___demangle__introduced_pred_type_0_0_i12);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
	}
MR_def_label(__Compare___demangle__introduced_pred_type_0_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_unmkbody(MR_sv(2)),1)) {
		MR_GOTO_LAB(__Compare___demangle__introduced_pred_type_0_0_i55);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___demangle__introduced_pred_type_0_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_tag(MR_sv(2));
	if ((MR_r2 != MR_mktag((MR_Integer) 0))) {
		MR_GOTO_LAB(__Compare___demangle__introduced_pred_type_0_0_i37);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___demangle__introduced_pred_type_0_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(1, MR_sv(1), 0);
	MR_r2 = MR_tfield(1, MR_sv(2), 0);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(private_builtin__builtin_compare_string_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(demangle_module24)
	MR_init_entry1(__Unify___demangle__pred_category_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___demangle__pred_category_0_0);
	MR_init_label4(__Unify___demangle__pred_category_0_0,7,9,14,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___demangle__pred_category_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___demangle__pred_category_0_0_i14);
	}
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_tempr1;
	MR_sv(2) = MR_r2;
	MR_r1 = MR_tag(MR_tempr1);
	if ((MR_r1 != MR_mktag((MR_Integer) 0))) {
		MR_GOTO_LAB(__Unify___demangle__pred_category_0_0_i7);
	}
	MR_r2 = MR_unmkbody(MR_tempr1);
	MR_r1 = (MR_sv(2) == MR_tempr1);
	MR_decr_sp(7);
	MR_proceed();
	}
MR_def_label(__Unify___demangle__pred_category_0_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Unify___demangle__pred_category_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_tfield(1, MR_tempr1, 1);
	MR_tempr2 = MR_sv(2);
	MR_sv(2) = MR_tfield(1, MR_tempr1, 2);
	MR_sv(3) = MR_tfield(1, MR_tempr1, 3);
	MR_sv(4) = MR_tfield(1, MR_tempr2, 1);
	MR_sv(5) = MR_tfield(1, MR_tempr2, 2);
	MR_sv(6) = MR_tfield(1, MR_tempr2, 3);
	MR_r1 = MR_tfield(1, MR_tempr1, 0);
	MR_r2 = MR_tfield(1, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(__Unify___demangle__introduced_pred_type_0_0,
		__Unify___demangle__pred_category_0_0_i9);
MR_def_label(__Unify___demangle__pred_category_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___demangle__pred_category_0_0_i1);
	}
	if ((MR_sv(1) != MR_sv(4))) {
		MR_GOTO_LAB(__Unify___demangle__pred_category_0_0_i1);
	}
	if ((MR_sv(2) != MR_sv(5))) {
		MR_GOTO_LAB(__Unify___demangle__pred_category_0_0_i1);
	}
	MR_r1 = (strcmp((char *) (MR_Word *) MR_sv(3), (char *) (MR_Word *) MR_sv(6)) == 0);
	MR_decr_sp_and_return(7);
MR_def_label(__Unify___demangle__pred_category_0_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___demangle__pred_category_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(7);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(demangle_module25)
	MR_init_entry1(__Compare___demangle__pred_category_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___demangle__pred_category_0_0);
	MR_init_label10(__Compare___demangle__pred_category_0_0,71,21,75,25,27,31,35,5,13,111)
	MR_init_label3(__Compare___demangle__pred_category_0_0,53,90,62)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___demangle__pred_category_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___demangle__pred_category_0_0_i71);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_tempr1;
	MR_tempr2 = MR_r2;
	MR_sv(2) = MR_tempr2;
	MR_r2 = MR_tag(MR_tempr1);
	if ((MR_r2 != MR_mktag((MR_Integer) 0))) {
		MR_GOTO_LAB(__Compare___demangle__pred_category_0_0_i21);
	}
	if (MR_INT_EQ(MR_unmkbody(MR_tempr1),0)) {
		MR_GOTO_LAB(__Compare___demangle__pred_category_0_0_i13);
	}
	if (MR_INT_EQ(MR_unmkbody(MR_tempr1),1)) {
		MR_GOTO_LAB(__Compare___demangle__pred_category_0_0_i53);
	}
	if (MR_INT_EQ(MR_unmkbody(MR_tempr1),2)) {
		MR_GOTO_LAB(__Compare___demangle__pred_category_0_0_i5);
	}
	MR_r2 = MR_tag(MR_tempr2);
	if ((MR_r2 != MR_mktag((MR_Integer) 0))) {
		MR_GOTO_LAB(__Compare___demangle__pred_category_0_0_i90);
	}
	if (MR_INT_EQ(MR_unmkbody(MR_tempr2),0)) {
		MR_GOTO_LAB(__Compare___demangle__pred_category_0_0_i75);
	}
	if (MR_INT_EQ(MR_unmkbody(MR_tempr2),1)) {
		MR_GOTO_LAB(__Compare___demangle__pred_category_0_0_i75);
	}
	if (MR_INT_EQ(MR_unmkbody(MR_tempr2),2)) {
		MR_GOTO_LAB(__Compare___demangle__pred_category_0_0_i75);
	}
	}
MR_def_label(__Compare___demangle__pred_category_0_0,71)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(7);
MR_def_label(__Compare___demangle__pred_category_0_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_tag(MR_sv(2));
	if ((MR_r2 != MR_mktag((MR_Integer) 0))) {
		MR_GOTO_LAB(__Compare___demangle__pred_category_0_0_i25);
	}
MR_def_label(__Compare___demangle__pred_category_0_0,75)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(7);
MR_def_label(__Compare___demangle__pred_category_0_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(1);
	MR_sv(6) = MR_tfield(1, MR_tempr5, 1);
	MR_sv(5) = MR_tfield(1, MR_tempr5, 2);
	MR_sv(4) = MR_tfield(1, MR_tempr5, 3);
	MR_tempr6 = MR_sv(2);
	MR_sv(3) = MR_tfield(1, MR_tempr6, 3);
	MR_tempr1 = MR_tfield(1, MR_tempr6, 2);
	MR_tempr2 = MR_tfield(1, MR_tempr6, 1);
	MR_tempr3 = MR_tempr5;
	MR_sv(1) = MR_tempr2;
	MR_tempr4 = MR_tempr6;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_tfield(1, MR_tempr3, 0);
	MR_r2 = MR_tfield(1, MR_tempr4, 0);
	}
	MR_np_call_localret_ent(__Compare___demangle__introduced_pred_type_0_0,
		__Compare___demangle__pred_category_0_0_i27);
MR_def_label(__Compare___demangle__pred_category_0_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___demangle__pred_category_0_0_i62);
	}
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___demangle__pred_category_0_0_i31);
MR_def_label(__Compare___demangle__pred_category_0_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___demangle__pred_category_0_0_i62);
	}
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___demangle__pred_category_0_0_i35);
MR_def_label(__Compare___demangle__pred_category_0_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___demangle__pred_category_0_0_i62);
	}
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(3);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(private_builtin__builtin_compare_string_3_0);
MR_def_label(__Compare___demangle__pred_category_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_r2 = MR_tag(MR_tempr1);
	if ((MR_r2 != MR_mktag((MR_Integer) 0))) {
		MR_GOTO_LAB(__Compare___demangle__pred_category_0_0_i90);
	}
	if (MR_INT_EQ(MR_unmkbody(MR_tempr1),0)) {
		MR_GOTO_LAB(__Compare___demangle__pred_category_0_0_i75);
	}
	if (MR_INT_EQ(MR_unmkbody(MR_tempr1),1)) {
		MR_GOTO_LAB(__Compare___demangle__pred_category_0_0_i75);
	}
	if (MR_INT_EQ(MR_unmkbody(MR_tempr1),2)) {
		MR_GOTO_LAB(__Compare___demangle__pred_category_0_0_i71);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(7);
	}
MR_def_label(__Compare___demangle__pred_category_0_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_r2 = MR_tag(MR_tempr1);
	if ((MR_r2 != MR_mktag((MR_Integer) 0))) {
		MR_GOTO_LAB(__Compare___demangle__pred_category_0_0_i90);
	}
	if (MR_INT_EQ(MR_unmkbody(MR_tempr1),0)) {
		MR_GOTO_LAB(__Compare___demangle__pred_category_0_0_i71);
	}
	if (MR_INT_EQ(MR_unmkbody(MR_tempr1),1)) {
		MR_GOTO_LAB(__Compare___demangle__pred_category_0_0_i111);
	}
	if (MR_INT_EQ(MR_unmkbody(MR_tempr1),2)) {
		MR_GOTO_LAB(__Compare___demangle__pred_category_0_0_i90);
	}
	}
MR_def_label(__Compare___demangle__pred_category_0_0,111)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(7);
MR_def_label(__Compare___demangle__pred_category_0_0,53)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_r2 = MR_tag(MR_tempr1);
	if ((MR_r2 != MR_mktag((MR_Integer) 0))) {
		MR_GOTO_LAB(__Compare___demangle__pred_category_0_0_i90);
	}
	if (MR_INT_EQ(MR_unmkbody(MR_tempr1),0)) {
		MR_GOTO_LAB(__Compare___demangle__pred_category_0_0_i75);
	}
	if (MR_INT_EQ(MR_unmkbody(MR_tempr1),1)) {
		MR_GOTO_LAB(__Compare___demangle__pred_category_0_0_i71);
	}
	}
MR_def_label(__Compare___demangle__pred_category_0_0,90)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
MR_def_label(__Compare___demangle__pred_category_0_0,62)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(7);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(demangle_module26)
	MR_init_entry1(f_100_101_109_97_110_103_108_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_99_103_95_115_101_116_95_95_91_49_44_32_50_44_32_52_93_95_48_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__f_100_101_109_97_110_103_108_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_99_103_95_115_101_116_95_95_91_49_44_32_50_44_32_52_93_95_48_3_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__pred__dcg_set__[1, 2, 4]_0'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(f_100_101_109_97_110_103_108_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_99_103_95_115_101_116_95_95_91_49_44_32_50_44_32_52_93_95_48_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

static void mercury__demangle_maybe_bunch_0(void)
{
	demangle_module0();
	demangle_module1();
	demangle_module2();
	demangle_module3();
	demangle_module4();
	demangle_module5();
	demangle_module6();
	demangle_module7();
	demangle_module8();
	demangle_module9();
	demangle_module10();
	demangle_module11();
	demangle_module12();
	demangle_module13();
	demangle_module14();
	demangle_module15();
	demangle_module16();
	demangle_module17();
	demangle_module18();
	demangle_module19();
	demangle_module20();
	demangle_module21();
	demangle_module22();
	demangle_module23();
	demangle_module24();
	demangle_module25();
	demangle_module26();
}

/* suppress gcc -Wmissing-decls warnings */
void mercury__demangle__init(void);
void mercury__demangle__init_type_tables(void);
void mercury__demangle__init_debugger(void);
#ifdef MR_DEEP_PROFILING
void mercury__demangle__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp);
#endif
#ifdef MR_RECORD_TERM_SIZES
void mercury__demangle__init_complexity_procs(void);
#endif

void mercury__demangle__init(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	mercury__demangle_maybe_bunch_0();
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_demangle__type_ctor_info_data_category_0,
		demangle__data_category_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_demangle__type_ctor_info_introduced_pred_type_0,
		demangle__introduced_pred_type_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_demangle__type_ctor_info_pred_category_0,
		demangle__pred_category_0_0);
	mercury__demangle__init_debugger();
}

void mercury__demangle__init_type_tables(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	{
		MR_register_type_ctor_info(
		&mercury_data_demangle__type_ctor_info_data_category_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_demangle__type_ctor_info_introduced_pred_type_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_demangle__type_ctor_info_pred_category_0);
	}
}


void mercury__demangle__init_debugger(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}

#ifdef MR_DEEP_PROFILING

void mercury__demangle__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp)
{
	MR_write_out_module_proc_reps_start(procrep_fp, &mercury_data__module_common_layout__demangle);
	MR_write_out_module_proc_reps_end(procrep_fp);
}

#endif

#ifdef MR_RECORD_TERM_SIZES

void mercury__demangle__init_complexity_procs(void)
{
}

#endif

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;
