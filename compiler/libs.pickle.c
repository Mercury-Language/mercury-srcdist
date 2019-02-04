/*
** Automatically generated from `pickle.m'
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
INIT mercury__libs__pickle__init
ENDINIT
*/

#define MR_ALLOW_RESET
#include "mercury_imp.h"
#line 25 "libs.pickle.c"
#include "libs.pickle.mh"

#line 28 "libs.pickle.c"
#line 526 "../library/io.int"
#include "io.mh"

#line 32 "libs.pickle.c"
#line 536 "../library/io.int"
#include "time.mh"

#line 36 "libs.pickle.c"
#line 537 "../library/io.int"
#include "string.mh"

#line 40 "libs.pickle.c"
#line 151 "../library/bitmap.int"
#include "bitmap.mh"

#line 44 "libs.pickle.c"
#line 21 "../library/stm_builtin.int2"
#include "stm_builtin.mh"

#line 48 "libs.pickle.c"
#line 35 "../library/store.int2"
#include "store.mh"

#line 52 "libs.pickle.c"
#line 33 "../library/array.int2"
#include "array.mh"

#line 56 "libs.pickle.c"
#line 57 "libs.pickle.c"
#ifndef LIBS__PICKLE_DECL_GUARD
#define LIBS__PICKLE_DECL_GUARD

#line 61 "libs.pickle.c"
#line 62 "libs.pickle.c"

#endif
#line 65 "libs.pickle.c"

#ifdef _MSC_VER
#define MR_STATIC_LINKAGE extern
#else
#define MR_STATIC_LINKAGE static
#endif


#ifdef MR_MSVC
#pragma pack(push, MR_BYTES_PER_WORD)
#endif
struct mercury_type_0 {
	MR_Word * f1;
	MR_Integer f2;
	MR_Word * f3[4];
};
#ifdef MR_MSVC
#pragma pack(pop)
#endif
MR_STATIC_LINKAGE const struct mercury_type_0 mercury_common_0[];


#ifdef MR_MSVC
#pragma pack(push, MR_BYTES_PER_WORD)
#endif
struct mercury_type_1 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[3];
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
	MR_Code * f2;
	MR_Integer f3;
};
#ifdef MR_MSVC
#pragma pack(pop)
#endif
MR_STATIC_LINKAGE const struct mercury_type_2 mercury_common_2[];


#ifdef MR_MSVC
#pragma pack(push, MR_BYTES_PER_WORD)
#endif
struct mercury_type_3 {
	MR_Word * f1;
	MR_Integer f2;
	MR_Word * f3[6];
};
#ifdef MR_MSVC
#pragma pack(pop)
#endif
MR_STATIC_LINKAGE const struct mercury_type_3 mercury_common_3[];


#ifdef MR_MSVC
#pragma pack(push, MR_BYTES_PER_WORD)
#endif
struct mercury_type_4 {
	MR_Unsigned f1[2];
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
	MR_Word * f2;
	MR_Integer f3;
	MR_Word * f4;
	MR_Word * f5;
	MR_Word * f6;
	MR_Integer f7;
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
	MR_Word * f3[6];
};
#ifdef MR_MSVC
#pragma pack(pop)
#endif
MR_STATIC_LINKAGE const struct mercury_type_6 mercury_common_6[];

extern const MR_TypeCtorInfo_Struct
	mercury_data_libs__pickle__type_ctor_info_get_byte_out_of_range_0,
	mercury_data_libs__pickle__type_ctor_info_pickler_pred_0,
	mercury_data_libs__pickle__type_ctor_info_picklers_0,
	mercury_data_libs__pickle__type_ctor_info_unpickle_handle_0,
	mercury_data_libs__pickle__type_ctor_info_unpickle_state_0,
	mercury_data_libs__pickle__type_ctor_info_unpickler_pred_0,
	mercury_data_libs__pickle__type_ctor_info_unpicklers_0;
MR_decl_label2(libs__pickle__IntroducedFrom__pred__unpickle_from_file__238__1_4_0, 2,3)
MR_decl_label10(libs__pickle__pickle_4_0, 3,5,6,7,8,9,10,11,12,13)
MR_decl_label10(libs__pickle__pickle_4_0, 2,17,19,20,21,22,23,24,25,16)
MR_decl_label10(libs__pickle__pickle_4_0, 28,27,32,31,36,37,38,40,35,42)
MR_decl_label2(libs__pickle__pickle_4_0, 43,44)
MR_decl_label5(libs__pickle__pickle_args_6_0, 20,4,6,3,23)
MR_decl_label1(libs__pickle__pickle_char_3_0, 2)
MR_decl_label10(libs__pickle__pickle_float_3_0, 2,3,4,5,6,7,8,9,10,11)
MR_decl_label5(libs__pickle__pickle_float_3_0, 12,13,14,15,16)
MR_decl_label7(libs__pickle__pickle_int32_3_0, 2,3,4,5,6,7,8)
MR_decl_label9(libs__pickle__pickle_string_3_0, 2,3,4,5,6,7,8,9,10)
MR_decl_label3(libs__pickle__unpickle_5_0, 2,3,4)
MR_decl_label10(libs__pickle__unpickle_2_6_0, 3,4,6,7,2,10,11,13,9,16)
MR_decl_label10(libs__pickle__unpickle_2_6_0, 17,19,15,22,23,25,21,28,29,27)
MR_decl_label10(libs__pickle__unpickle_2_6_0, 32,33,37,35,38,40,42,47,45,44)
MR_decl_label2(libs__pickle__unpickle_2_6_0, 51,34)
MR_decl_label7(libs__pickle__unpickle_char_4_0, 4,2,7,8,9,11,12)
MR_decl_label2(libs__pickle__unpickle_float_4_0, 2,3)
MR_decl_label10(libs__pickle__unpickle_from_file_5_0, 2,5,6,8,10,14,16,13,12,4)
MR_decl_label10(libs__pickle__unpickle_int32_4_0, 4,6,2,7,8,9,11,14,16,12)
MR_decl_label10(libs__pickle__unpickle_int32_4_0, 17,18,19,21,24,26,22,27,28,29)
MR_decl_label7(libs__pickle__unpickle_int32_4_0, 31,34,36,32,37,38,39)
MR_decl_label1(libs__pickle__unpickle_string_4_0, 2)
MR_decl_label9(libs__pickle__unpickle_string_2_7_0, 23,2,5,3,8,9,10,12,13)
MR_decl_label2(libs__pickle__user_defined_pickler_3_0, 3,1)
MR_decl_label2(libs__pickle__user_defined_unpickler_3_0, 3,1)
MR_decl_label1(__Unify___libs__pickle__get_byte_out_of_range_0_0, 4)
MR_decl_label1(__Unify___libs__pickle__picklers_0_0, 7)
MR_decl_label1(__Unify___libs__pickle__unpicklers_0_0, 7)
MR_decl_label2(__Compare___libs__pickle__get_byte_out_of_range_0_0, 3,2)
MR_decl_label2(__Compare___libs__pickle__picklers_0_0, 3,2)
MR_decl_label2(__Compare___libs__pickle__unpicklers_0_0, 3,2)
MR_def_extern_entry(fn__libs__pickle__init_picklers_0_0)
MR_def_extern_entry(libs__pickle__register_pickler_4_0)
MR_decl_static(libs__pickle__pickler_inst_cast_2_0)
MR_decl_static(libs__pickle__user_defined_pickler_3_0)
MR_decl_static(libs__pickle__pickle_int32_3_0)
MR_decl_static(libs__pickle__pickle_char_3_0)
MR_decl_static(libs__pickle__pickle_string_3_0)
MR_decl_static(libs__pickle__reinterpret_float_as_ints_3_0)
MR_decl_static(libs__pickle__pickle_float_3_0)
MR_def_extern_entry(libs__pickle__pickle_4_0)
MR_decl_static(libs__pickle__pickle_args_6_0)
MR_def_extern_entry(fn__libs__pickle__init_unpicklers_0_0)
MR_def_extern_entry(libs__pickle__register_unpickler_4_0)
MR_def_extern_entry(libs__pickle__unpickle_from_file_5_0)
MR_decl_static(libs__pickle__unpickler_inst_cast_2_0)
MR_decl_static(libs__pickle__user_defined_unpickler_3_0)
MR_decl_static(libs__pickle__unpickle_int32_4_0)
MR_decl_static(libs__pickle__unpickle_char_4_0)
MR_decl_static(libs__pickle__local_unsafe_set_char_4_0)
MR_decl_static(libs__pickle__unpickle_string_2_7_0)
MR_decl_static(libs__pickle__allocate_string_2_0)
MR_decl_static(libs__pickle__unpickle_string_4_0)
MR_decl_static(libs__pickle__reinterpret_ints_as_float_3_0)
MR_decl_static(libs__pickle__unpickle_float_4_0)
MR_decl_static(libs__pickle__unpickle_2_6_0)
MR_def_extern_entry(libs__pickle__unpickle_5_0)
MR_decl_static(__Unify___libs__pickle__get_byte_out_of_range_0_0)
MR_decl_static(__Compare___libs__pickle__get_byte_out_of_range_0_0)
MR_def_extern_entry(__Unify___libs__pickle__pickler_pred_0_0)
MR_def_extern_entry(__Compare___libs__pickle__pickler_pred_0_0)
MR_def_extern_entry(__Unify___libs__pickle__picklers_0_0)
MR_def_extern_entry(__Compare___libs__pickle__picklers_0_0)
MR_def_extern_entry(__Unify___libs__pickle__unpickle_handle_0_0)
MR_def_extern_entry(__Compare___libs__pickle__unpickle_handle_0_0)
MR_def_extern_entry(__Unify___libs__pickle__unpickle_state_0_0)
MR_def_extern_entry(__Compare___libs__pickle__unpickle_state_0_0)
MR_def_extern_entry(__Unify___libs__pickle__unpickler_pred_0_0)
MR_def_extern_entry(__Compare___libs__pickle__unpickler_pred_0_0)
MR_def_extern_entry(__Unify___libs__pickle__unpicklers_0_0)
MR_def_extern_entry(__Compare___libs__pickle__unpicklers_0_0)
MR_decl_static(libs__pickle__IntroducedFrom__pred__unpickle_from_file__238__1_4_0)

extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_pred_0;
extern const MR_TypeCtorInfo_Struct mercury_data_univ__type_ctor_info_univ_0;
extern const MR_TypeCtorInfo_Struct mercury_data_io__type_ctor_info_state_0;
static const struct mercury_type_0 mercury_common_0[1] =
{
{
MR_CTOR0_ADDR(builtin, pred),
4,
{
MR_CTOR0_ADDR(libs__pickle, picklers),
MR_CTOR0_ADDR(univ, univ),
MR_IO_CTOR_ADDR,
MR_IO_CTOR_ADDR
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__libs__pickle__pickle_string_3_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_character_0;
extern const MR_TypeCtorInfo_Struct mercury_data_io__type_ctor_info_state_0;
static const MR_UserClosureId
mercury_data__closure_layout__libs__pickle__pickle_4_0_1;
static const struct mercury_type_1 mercury_common_1[2] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__libs__pickle__pickle_string_3_0_1,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_CHAR_CTOR_ADDR,
MR_IO_CTOR_ADDR,
MR_IO_CTOR_ADDR
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__libs__pickle__pickle_4_0_1,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_CHAR_CTOR_ADDR,
MR_IO_CTOR_ADDR,
MR_IO_CTOR_ADDR
}
},
};

static const struct mercury_type_2 mercury_common_2[2] =
{
{
MR_COMMON(1,0),
MR_ENTRY_AP(libs__pickle__pickle_char_3_0),
0
},
{
MR_COMMON(1,1),
MR_ENTRY_AP(libs__pickle__pickle_char_3_0),
0
},
};

extern const MR_TypeCtorInfo_Struct mercury_data_bitmap__type_ctor_info_bitmap_0;
extern const MR_TypeCtorInfo_Struct mercury_data_type_desc__type_ctor_info_type_desc_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;
static const struct mercury_type_3 mercury_common_3[1] =
{
{
MR_CTOR0_ADDR(builtin, pred),
6,
{
MR_CTOR0_ADDR(libs__pickle, unpicklers),
MR_CTOR0_ADDR(bitmap, bitmap),
MR_CTOR0_ADDR(type_desc, type_desc),
MR_CTOR0_ADDR(univ, univ),
MR_INT_CTOR_ADDR,
MR_INT_CTOR_ADDR
}
},
};

static const struct mercury_type_4 mercury_common_4[1] =
{
{
{
1,
33
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__libs__pickle__unpickle_from_file_5_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_private_builtin__type_ctor_info_type_info_0;
extern const MR_TypeCtorInfo_Struct mercury_data_libs__pickle__type_ctor_info_unpicklers_0;
extern const MR_TypeCtorInfo_Struct mercury_data_bitmap__type_ctor_info_bitmap_0;
static const struct mercury_type_5 mercury_common_5[1] =
{
{
(MR_Word *) &mercury_data__closure_layout__libs__pickle__unpickle_from_file_5_0_1,
MR_COMMON(4,0),
4,
MR_CTOR0_ADDR(private_builtin, type_info),
MR_CTOR0_ADDR(libs__pickle, unpicklers),
MR_CTOR0_ADDR(bitmap, bitmap),
1
},
};

static const MR_UserClosureId
mercury_data__closure_layout__libs__pickle__unpickle_2_6_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_type_desc__type_ctor_info_type_desc_0;
extern const MR_TypeCtorInfo_Struct mercury_data_univ__type_ctor_info_univ_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;
static const struct mercury_type_6 mercury_common_6[1] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__libs__pickle__unpickle_2_6_0_1,
(MR_Word *) (MR_Integer) 0
},
6,
{
MR_CTOR0_ADDR(libs__pickle, unpicklers),
MR_CTOR0_ADDR(bitmap, bitmap),
MR_CTOR0_ADDR(type_desc, type_desc),
MR_CTOR0_ADDR(univ, univ),
MR_INT_CTOR_ADDR,
MR_INT_CTOR_ADDR
}
},
};
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_string_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_string_0;

static const MR_NotagFunctorDesc mercury_data_libs__pickle__notag_functor_desc_get_byte_out_of_range_0 = {
	"get_byte_out_of_range",
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_string_0,
	NULL
};

const MR_Integer mercury_data_libs__pickle__functor_number_map_get_byte_out_of_range_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_libs__pickle__type_ctor_info_get_byte_out_of_range_0 = {
	0,
	15,
	-1,
	MR_TYPECTOR_REP_NOTAG_GROUND,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___libs__pickle__get_byte_out_of_range_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___libs__pickle__get_byte_out_of_range_0_0)),
	"libs.pickle",
	"get_byte_out_of_range",
	{ (void *)&mercury_data_libs__pickle__notag_functor_desc_get_byte_out_of_range_0 },
	{ (void *)&mercury_data_libs__pickle__notag_functor_desc_get_byte_out_of_range_0 },
	1,
	4,
	mercury_data_libs__pickle__functor_number_map_get_byte_out_of_range_0
};
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_pred_0;
extern const MR_TypeCtorInfo_Struct mercury_data_libs__pickle__type_ctor_info_picklers_0;
extern const MR_TypeCtorInfo_Struct mercury_data_univ__type_ctor_info_univ_0;
extern const MR_TypeCtorInfo_Struct mercury_data_io__type_ctor_info_state_0;

static const MR_VA_TypeInfo_Struct4 mercury_data___vti_pred_4libs__pickle__type_ctor_info_picklers_0univ__type_ctor_info_univ_0io__type_ctor_info_state_0io__type_ctor_info_state_0 = {
	&mercury_data_builtin__type_ctor_info_pred_0,
	4,
{	(MR_TypeInfo) &mercury_data_libs__pickle__type_ctor_info_picklers_0,
	(MR_TypeInfo) &mercury_data_univ__type_ctor_info_univ_0,
	(MR_TypeInfo) &mercury_data_io__type_ctor_info_state_0,
	(MR_TypeInfo) &mercury_data_io__type_ctor_info_state_0
}};

const MR_TypeCtorInfo_Struct mercury_data_libs__pickle__type_ctor_info_pickler_pred_0 = {
	0,
	15,
	-1,
	MR_TYPECTOR_REP_EQUIV_GROUND,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___libs__pickle__pickler_pred_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___libs__pickle__pickler_pred_0_0)),
	"libs.pickle",
	"pickler_pred",
	{ 0 },
	{ (void *)&mercury_data___vti_pred_4libs__pickle__type_ctor_info_picklers_0univ__type_ctor_info_univ_0io__type_ctor_info_state_0io__type_ctor_info_state_0 },
	-1,
	0,
	NULL
};
extern const MR_TypeCtorInfo_Struct mercury_data_tree234__type_ctor_info_tree234_2;
extern const MR_TypeCtorInfo_Struct mercury_data_type_desc__type_ctor_info_type_ctor_desc_0;
extern const MR_TypeCtorInfo_Struct mercury_data_type_desc__type_ctor_info_type_ctor_desc_0;

static const MR_FA_TypeInfo_Struct2 mercury_data_tree234__ti_tree234_2type_desc__type_ctor_info_type_ctor_desc_0__vti_pred_4libs__pickle__type_ctor_info_picklers_0univ__type_ctor_info_univ_0io__type_ctor_info_state_0io__type_ctor_info_state_0 = {
	&mercury_data_tree234__type_ctor_info_tree234_2,
{	(MR_TypeInfo) &mercury_data_type_desc__type_ctor_info_type_ctor_desc_0,
	(MR_TypeInfo) &mercury_data___vti_pred_4libs__pickle__type_ctor_info_picklers_0univ__type_ctor_info_univ_0io__type_ctor_info_state_0io__type_ctor_info_state_0
}};

static const MR_NotagFunctorDesc mercury_data_libs__pickle__notag_functor_desc_picklers_0 = {
	"picklers",
	(MR_PseudoTypeInfo) &mercury_data_tree234__ti_tree234_2type_desc__type_ctor_info_type_ctor_desc_0__vti_pred_4libs__pickle__type_ctor_info_picklers_0univ__type_ctor_info_univ_0io__type_ctor_info_state_0io__type_ctor_info_state_0,
	NULL
};

const MR_Integer mercury_data_libs__pickle__functor_number_map_picklers_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_libs__pickle__type_ctor_info_picklers_0 = {
	0,
	15,
	-1,
	MR_TYPECTOR_REP_NOTAG_GROUND,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___libs__pickle__picklers_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___libs__pickle__picklers_0_0)),
	"libs.pickle",
	"picklers",
	{ (void *)&mercury_data_libs__pickle__notag_functor_desc_picklers_0 },
	{ (void *)&mercury_data_libs__pickle__notag_functor_desc_picklers_0 },
	1,
	4,
	mercury_data_libs__pickle__functor_number_map_picklers_0
};
extern const MR_TypeCtorInfo_Struct mercury_data_bitmap__type_ctor_info_bitmap_0;

const MR_TypeCtorInfo_Struct mercury_data_libs__pickle__type_ctor_info_unpickle_handle_0 = {
	0,
	15,
	-1,
	MR_TYPECTOR_REP_EQUIV_GROUND,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___libs__pickle__unpickle_handle_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___libs__pickle__unpickle_handle_0_0)),
	"libs.pickle",
	"unpickle_handle",
	{ 0 },
	{ (void *)&mercury_data_bitmap__type_ctor_info_bitmap_0 },
	-1,
	0,
	NULL
};
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;

const MR_TypeCtorInfo_Struct mercury_data_libs__pickle__type_ctor_info_unpickle_state_0 = {
	0,
	15,
	-1,
	MR_TYPECTOR_REP_EQUIV_GROUND,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___libs__pickle__unpickle_state_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___libs__pickle__unpickle_state_0_0)),
	"libs.pickle",
	"unpickle_state",
	{ 0 },
	{ (void *)&mercury_data_builtin__type_ctor_info_int_0 },
	-1,
	0,
	NULL
};
extern const MR_TypeCtorInfo_Struct mercury_data_libs__pickle__type_ctor_info_unpicklers_0;
extern const MR_TypeCtorInfo_Struct mercury_data_type_desc__type_ctor_info_type_desc_0;

static const MR_VA_TypeInfo_Struct6 mercury_data___vti_pred_6libs__pickle__type_ctor_info_unpicklers_0bitmap__type_ctor_info_bitmap_0type_desc__type_ctor_info_type_desc_0univ__type_ctor_info_univ_0builtin__type_ctor_info_int_0builtin__type_ctor_info_int_0 = {
	&mercury_data_builtin__type_ctor_info_pred_0,
	6,
{	(MR_TypeInfo) &mercury_data_libs__pickle__type_ctor_info_unpicklers_0,
	(MR_TypeInfo) &mercury_data_bitmap__type_ctor_info_bitmap_0,
	(MR_TypeInfo) &mercury_data_type_desc__type_ctor_info_type_desc_0,
	(MR_TypeInfo) &mercury_data_univ__type_ctor_info_univ_0,
	(MR_TypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_TypeInfo) &mercury_data_builtin__type_ctor_info_int_0
}};

const MR_TypeCtorInfo_Struct mercury_data_libs__pickle__type_ctor_info_unpickler_pred_0 = {
	0,
	15,
	-1,
	MR_TYPECTOR_REP_EQUIV_GROUND,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___libs__pickle__unpickler_pred_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___libs__pickle__unpickler_pred_0_0)),
	"libs.pickle",
	"unpickler_pred",
	{ 0 },
	{ (void *)&mercury_data___vti_pred_6libs__pickle__type_ctor_info_unpicklers_0bitmap__type_ctor_info_bitmap_0type_desc__type_ctor_info_type_desc_0univ__type_ctor_info_univ_0builtin__type_ctor_info_int_0builtin__type_ctor_info_int_0 },
	-1,
	0,
	NULL
};

static const MR_FA_TypeInfo_Struct2 mercury_data_tree234__ti_tree234_2type_desc__type_ctor_info_type_ctor_desc_0__vti_pred_6libs__pickle__type_ctor_info_unpicklers_0bitmap__type_ctor_info_bitmap_0type_desc__type_ctor_info_type_desc_0univ__type_ctor_info_univ_0builtin__type_ctor_info_int_0builtin__type_ctor_info_int_0 = {
	&mercury_data_tree234__type_ctor_info_tree234_2,
{	(MR_TypeInfo) &mercury_data_type_desc__type_ctor_info_type_ctor_desc_0,
	(MR_TypeInfo) &mercury_data___vti_pred_6libs__pickle__type_ctor_info_unpicklers_0bitmap__type_ctor_info_bitmap_0type_desc__type_ctor_info_type_desc_0univ__type_ctor_info_univ_0builtin__type_ctor_info_int_0builtin__type_ctor_info_int_0
}};

static const MR_NotagFunctorDesc mercury_data_libs__pickle__notag_functor_desc_unpicklers_0 = {
	"unpicklers",
	(MR_PseudoTypeInfo) &mercury_data_tree234__ti_tree234_2type_desc__type_ctor_info_type_ctor_desc_0__vti_pred_6libs__pickle__type_ctor_info_unpicklers_0bitmap__type_ctor_info_bitmap_0type_desc__type_ctor_info_type_desc_0univ__type_ctor_info_univ_0builtin__type_ctor_info_int_0builtin__type_ctor_info_int_0,
	NULL
};

const MR_Integer mercury_data_libs__pickle__functor_number_map_unpicklers_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_libs__pickle__type_ctor_info_unpicklers_0 = {
	0,
	15,
	-1,
	MR_TYPECTOR_REP_NOTAG_GROUND,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___libs__pickle__unpicklers_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___libs__pickle__unpicklers_0_0)),
	"libs.pickle",
	"unpicklers",
	{ (void *)&mercury_data_libs__pickle__notag_functor_desc_unpicklers_0 },
	{ (void *)&mercury_data_libs__pickle__notag_functor_desc_unpicklers_0 },
	1,
	4,
	mercury_data_libs__pickle__functor_number_map_unpicklers_0
};


static const MR_UserClosureId
mercury_data__closure_layout__libs__pickle__unpickle_2_6_0_1 = {
{
MR_PREDICATE,
"libs.pickle",
"libs.pickle",
"unpickle_2",
6,
0
},
"libs.pickle",
"pickle.m",
299,
"55"
};

static const MR_UserClosureId
mercury_data__closure_layout__libs__pickle__unpickle_from_file_5_0_1 = {
{
MR_PREDICATE,
"libs.pickle",
"libs.pickle",
"lambda_pickle_m_238",
4,
0
},
"libs.pickle",
"pickle.m",
238,
"18"
};

static const MR_UserClosureId
mercury_data__closure_layout__libs__pickle__pickle_4_0_1 = {
{
MR_PREDICATE,
"libs.pickle",
"libs.pickle",
"pickle_char",
3,
0
},
"libs.pickle",
"pickle.m",
412,
"7"
};

static const MR_UserClosureId
mercury_data__closure_layout__libs__pickle__pickle_string_3_0_1 = {
{
MR_PREDICATE,
"libs.pickle",
"libs.pickle",
"pickle_char",
3,
0
},
"libs.pickle",
"pickle.m",
412,
"7"
};


MR_decl_entry(fn__map__init_0_0);

MR_BEGIN_MODULE(libs__pickle_module0)
	MR_init_entry1(fn__libs__pickle__init_picklers_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__libs__pickle__init_picklers_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'init_picklers'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__libs__pickle__init_picklers_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(type_desc, type_ctor_desc);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_np_tailcall_ent(fn__map__init_0_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(map__det_insert_4_0);

MR_BEGIN_MODULE(libs__pickle_module1)
	MR_init_entry1(libs__pickle__register_pickler_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__libs__pickle__register_pickler_4_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'register_pickler'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__libs__pickle__register_pickler_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(type_desc, type_ctor_desc);
	MR_tempr2 = MR_r2;
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_tempr3 = MR_r3;
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tempr2;
	MR_r5 = MR_tempr3;
	MR_np_tailcall_ent(map__det_insert_4_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(libs__pickle_module2)
	MR_init_entry1(libs__pickle__pickler_inst_cast_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__libs__pickle__pickler_inst_cast_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'pickler_inst_cast'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(libs__pickle__pickler_inst_cast_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word	A;
	MR_Word	B;
#define	MR_PROC_LABEL	mercury__libs__pickle__pickler_inst_cast_2_0
	A = MR_r1;
{
#line 190 "pickle.m"

    B = A;
;}
#line 723 "libs.pickle.c"
	MR_r1 = B;
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(map__search_3_0);

MR_BEGIN_MODULE(libs__pickle_module3)
	MR_init_entry1(libs__pickle__user_defined_pickler_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__libs__pickle__user_defined_pickler_3_0);
	MR_init_label2(libs__pickle__user_defined_pickler_3_0,3,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'user_defined_pickler'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(libs__pickle__user_defined_pickler_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(type_desc, type_ctor_desc);
	MR_tempr2 = MR_r2;
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tempr2;
	}
	MR_np_call_localret_ent(map__search_3_0,
		libs__pickle__user_defined_pickler_3_0_i3);
MR_def_label(libs__pickle__user_defined_pickler_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(libs__pickle__user_defined_pickler_3_0_i1);
	}
	{
	MR_Word	A;
	MR_Word	B;
#define	MR_PROC_LABEL	mercury__libs__pickle__user_defined_pickler_3_0
	A = MR_r2;
{
#line 190 "pickle.m"

    B = A;
;}
#line 778 "libs.pickle.c"
	MR_r2 = B;
#undef	MR_PROC_LABEL
	}
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__pickle__user_defined_pickler_3_0,1)
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

MR_decl_entry(fn__f_105_110_116_95_95_62_62_2_0);
MR_decl_entry(io__write_byte_3_0);

MR_BEGIN_MODULE(libs__pickle_module4)
	MR_init_entry1(libs__pickle__pickle_int32_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__libs__pickle__pickle_int32_3_0);
	MR_init_label7(libs__pickle__pickle_int32_3_0,2,3,4,5,6,7,8)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'pickle_int32'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(libs__pickle__pickle_int32_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(2) = MR_r1;
	MR_r2 = (MR_Integer) 24;
	MR_np_call_localret_ent(fn__f_105_110_116_95_95_62_62_2_0,
		libs__pickle__pickle_int32_3_0_i2);
MR_def_label(libs__pickle__pickle_int32_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = ((MR_Integer) MR_r1 & (MR_Integer) 255);
	MR_r1 = MR_sv(2);
	MR_r2 = (MR_Integer) 16;
	MR_np_call_localret_ent(fn__f_105_110_116_95_95_62_62_2_0,
		libs__pickle__pickle_int32_3_0_i3);
MR_def_label(libs__pickle__pickle_int32_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = ((MR_Integer) MR_r1 & (MR_Integer) 255);
	MR_r1 = MR_sv(2);
	MR_r2 = (MR_Integer) 8;
	MR_np_call_localret_ent(fn__f_105_110_116_95_95_62_62_2_0,
		libs__pickle__pickle_int32_3_0_i4);
MR_def_label(libs__pickle__pickle_int32_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = ((MR_Integer) MR_r1 & (MR_Integer) 255);
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Integer) 0;
	}
	MR_np_call_localret_ent(fn__f_105_110_116_95_95_62_62_2_0,
		libs__pickle__pickle_int32_3_0_i5);
MR_def_label(libs__pickle__pickle_int32_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = ((MR_Integer) MR_r1 & (MR_Integer) 255);
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(io__write_byte_3_0,
		libs__pickle__pickle_int32_3_0_i6);
MR_def_label(libs__pickle__pickle_int32_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(io__write_byte_3_0,
		libs__pickle__pickle_int32_3_0_i7);
MR_def_label(libs__pickle__pickle_int32_3_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(io__write_byte_3_0,
		libs__pickle__pickle_int32_3_0_i8);
MR_def_label(libs__pickle__pickle_int32_3_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(io__write_byte_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(char__to_int_2_0);

MR_BEGIN_MODULE(libs__pickle_module5)
	MR_init_entry1(libs__pickle__pickle_char_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__libs__pickle__pickle_char_3_0);
	MR_init_label1(libs__pickle__pickle_char_3_0,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'pickle_char'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(libs__pickle__pickle_char_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(char__to_int_2_0,
		libs__pickle__pickle_char_3_0_i2);
MR_def_label(libs__pickle__pickle_char_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_np_tailcall_ent(io__write_byte_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__string__length_1_0);
MR_decl_entry(string__foldl_4_0);

MR_BEGIN_MODULE(libs__pickle_module6)
	MR_init_entry1(libs__pickle__pickle_string_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__libs__pickle__pickle_string_3_0);
	MR_init_label9(libs__pickle__pickle_string_3_0,2,3,4,5,6,7,8,9,10)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'pickle_string'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(libs__pickle__pickle_string_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(fn__string__length_1_0,
		libs__pickle__pickle_string_3_0_i2);
MR_def_label(libs__pickle__pickle_string_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r2 = (MR_Integer) 24;
	MR_np_call_localret_ent(fn__f_105_110_116_95_95_62_62_2_0,
		libs__pickle__pickle_string_3_0_i3);
MR_def_label(libs__pickle__pickle_string_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = ((MR_Integer) MR_r1 & (MR_Integer) 255);
	MR_r1 = MR_sv(3);
	MR_r2 = (MR_Integer) 16;
	MR_np_call_localret_ent(fn__f_105_110_116_95_95_62_62_2_0,
		libs__pickle__pickle_string_3_0_i4);
MR_def_label(libs__pickle__pickle_string_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = ((MR_Integer) MR_r1 & (MR_Integer) 255);
	MR_r1 = MR_sv(3);
	MR_r2 = (MR_Integer) 8;
	MR_np_call_localret_ent(fn__f_105_110_116_95_95_62_62_2_0,
		libs__pickle__pickle_string_3_0_i5);
MR_def_label(libs__pickle__pickle_string_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = ((MR_Integer) MR_r1 & (MR_Integer) 255);
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Integer) 0;
	}
	MR_np_call_localret_ent(fn__f_105_110_116_95_95_62_62_2_0,
		libs__pickle__pickle_string_3_0_i6);
MR_def_label(libs__pickle__pickle_string_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = ((MR_Integer) MR_r1 & (MR_Integer) 255);
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(io__write_byte_3_0,
		libs__pickle__pickle_string_3_0_i7);
MR_def_label(libs__pickle__pickle_string_3_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(io__write_byte_3_0,
		libs__pickle__pickle_string_3_0_i8);
MR_def_label(libs__pickle__pickle_string_3_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(io__write_byte_3_0,
		libs__pickle__pickle_string_3_0_i9);
MR_def_label(libs__pickle__pickle_string_3_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(io__write_byte_3_0,
		libs__pickle__pickle_string_3_0_i10);
MR_def_label(libs__pickle__pickle_string_3_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_IO_CTOR_ADDR;
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,2,0);
	MR_r3 = MR_sv(1);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(string__foldl_4_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(libs__pickle_module7)
	MR_init_entry1(libs__pickle__reinterpret_float_as_ints_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__libs__pickle__reinterpret_float_as_ints_3_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'reinterpret_float_as_ints'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(libs__pickle__reinterpret_float_as_ints_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Float	Flt;
	MR_Integer	A;
	MR_Integer	B;
#define	MR_PROC_LABEL	mercury__libs__pickle__reinterpret_float_as_ints_3_0
	Flt = MR_f(1);
{
#line 478 "pickle.m"

    if (sizeof(MR_Float) == sizeof(float)) {
        MR_uint_least32_t   *p;

        p = (MR_uint_least32_t *) &Flt;
        A = *p;
        B = 0;
    } else {
        MR_uint_least64_t   *p;

        p = (MR_uint_least64_t *) &Flt;
        A = (*p >> 32) & 0xffffffff;
        B = (*p >>  0) & 0xffffffff;
    }
;}
#line 1038 "libs.pickle.c"
	MR_r1 = A;
	MR_r2 = B;
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(libs__pickle_module8)
	MR_init_entry1(libs__pickle__pickle_float_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__libs__pickle__pickle_float_3_0);
	MR_init_label10(libs__pickle__pickle_float_3_0,2,3,4,5,6,7,8,9,10,11)
	MR_init_label5(libs__pickle__pickle_float_3_0,12,13,14,15,16)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'pickle_float'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(libs__pickle__pickle_float_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	{
	MR_Float	Flt;
	MR_Integer	A;
	MR_Integer	B;
#define	MR_PROC_LABEL	mercury__libs__pickle__pickle_float_3_0
	Flt = MR_f(1);
{
#line 478 "pickle.m"

    if (sizeof(MR_Float) == sizeof(float)) {
        MR_uint_least32_t   *p;

        p = (MR_uint_least32_t *) &Flt;
        A = *p;
        B = 0;
    } else {
        MR_uint_least64_t   *p;

        p = (MR_uint_least64_t *) &Flt;
        A = (*p >> 32) & 0xffffffff;
        B = (*p >>  0) & 0xffffffff;
    }
;}
#line 1093 "libs.pickle.c"
	MR_tempr1 = A;
	MR_tempr2 = B;
#undef	MR_PROC_LABEL
	}
	MR_sv(4) = MR_tempr1;
	MR_sv(3) = MR_tempr2;
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Integer) 24;
	}
	MR_np_call_localret_ent(fn__f_105_110_116_95_95_62_62_2_0,
		libs__pickle__pickle_float_3_0_i2);
MR_def_label(libs__pickle__pickle_float_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = ((MR_Integer) MR_r1 & (MR_Integer) 255);
	MR_r1 = MR_sv(4);
	MR_r2 = (MR_Integer) 16;
	MR_np_call_localret_ent(fn__f_105_110_116_95_95_62_62_2_0,
		libs__pickle__pickle_float_3_0_i3);
MR_def_label(libs__pickle__pickle_float_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = ((MR_Integer) MR_r1 & (MR_Integer) 255);
	MR_r1 = MR_sv(4);
	MR_r2 = (MR_Integer) 8;
	MR_np_call_localret_ent(fn__f_105_110_116_95_95_62_62_2_0,
		libs__pickle__pickle_float_3_0_i4);
MR_def_label(libs__pickle__pickle_float_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = ((MR_Integer) MR_r1 & (MR_Integer) 255);
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Integer) 0;
	}
	MR_np_call_localret_ent(fn__f_105_110_116_95_95_62_62_2_0,
		libs__pickle__pickle_float_3_0_i5);
MR_def_label(libs__pickle__pickle_float_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = ((MR_Integer) MR_r1 & (MR_Integer) 255);
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(io__write_byte_3_0,
		libs__pickle__pickle_float_3_0_i6);
MR_def_label(libs__pickle__pickle_float_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(io__write_byte_3_0,
		libs__pickle__pickle_float_3_0_i7);
MR_def_label(libs__pickle__pickle_float_3_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(io__write_byte_3_0,
		libs__pickle__pickle_float_3_0_i8);
MR_def_label(libs__pickle__pickle_float_3_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(io__write_byte_3_0,
		libs__pickle__pickle_float_3_0_i9);
MR_def_label(libs__pickle__pickle_float_3_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_r2 = (MR_Integer) 24;
	MR_np_call_localret_ent(fn__f_105_110_116_95_95_62_62_2_0,
		libs__pickle__pickle_float_3_0_i10);
MR_def_label(libs__pickle__pickle_float_3_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = ((MR_Integer) MR_r1 & (MR_Integer) 255);
	MR_r1 = MR_sv(3);
	MR_r2 = (MR_Integer) 16;
	MR_np_call_localret_ent(fn__f_105_110_116_95_95_62_62_2_0,
		libs__pickle__pickle_float_3_0_i11);
MR_def_label(libs__pickle__pickle_float_3_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = ((MR_Integer) MR_r1 & (MR_Integer) 255);
	MR_r1 = MR_sv(3);
	MR_r2 = (MR_Integer) 8;
	MR_np_call_localret_ent(fn__f_105_110_116_95_95_62_62_2_0,
		libs__pickle__pickle_float_3_0_i12);
MR_def_label(libs__pickle__pickle_float_3_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = ((MR_Integer) MR_r1 & (MR_Integer) 255);
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Integer) 0;
	}
	MR_np_call_localret_ent(fn__f_105_110_116_95_95_62_62_2_0,
		libs__pickle__pickle_float_3_0_i13);
MR_def_label(libs__pickle__pickle_float_3_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = ((MR_Integer) MR_r1 & (MR_Integer) 255);
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(io__write_byte_3_0,
		libs__pickle__pickle_float_3_0_i14);
MR_def_label(libs__pickle__pickle_float_3_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(io__write_byte_3_0,
		libs__pickle__pickle_float_3_0_i15);
MR_def_label(libs__pickle__pickle_float_3_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(io__write_byte_3_0,
		libs__pickle__pickle_float_3_0_i16);
MR_def_label(libs__pickle__pickle_float_3_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(io__write_byte_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_string_0;
MR_decl_entry(builtin__dynamic_cast_2_0);
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_float_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_character_0;
MR_decl_entry(fn__type_desc__type_of_1_0);
MR_decl_entry(fn__type_desc__type_ctor_1_0);
MR_decl_entry(fn__univ__univ_1_0);
MR_declare_entry(mercury__do_call_closure_3);
MR_decl_entry(deconstruct__functor_4_0);

MR_BEGIN_MODULE(libs__pickle_module9)
	MR_init_entry1(libs__pickle__pickle_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__libs__pickle__pickle_4_0);
	MR_init_label10(libs__pickle__pickle_4_0,3,5,6,7,8,9,10,11,12,13)
	MR_init_label10(libs__pickle__pickle_4_0,2,17,19,20,21,22,23,24,25,16)
	MR_init_label10(libs__pickle__pickle_4_0,28,27,32,31,36,37,38,40,35,42)
	MR_init_label2(libs__pickle__pickle_4_0,43,44)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'pickle'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__libs__pickle__pickle_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(2) = MR_r1;
	MR_r2 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_np_call_localret_ent(builtin__dynamic_cast_2_0,
		libs__pickle__pickle_4_0_i3);
MR_def_label(libs__pickle__pickle_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(libs__pickle__pickle_4_0_i2);
	}
	MR_sv(1) = MR_r2;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__string__length_1_0,
		libs__pickle__pickle_4_0_i5);
MR_def_label(libs__pickle__pickle_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r2 = (MR_Integer) 24;
	MR_np_call_localret_ent(fn__f_105_110_116_95_95_62_62_2_0,
		libs__pickle__pickle_4_0_i6);
MR_def_label(libs__pickle__pickle_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = ((MR_Integer) MR_r1 & (MR_Integer) 255);
	MR_r1 = MR_sv(3);
	MR_r2 = (MR_Integer) 16;
	MR_np_call_localret_ent(fn__f_105_110_116_95_95_62_62_2_0,
		libs__pickle__pickle_4_0_i7);
MR_def_label(libs__pickle__pickle_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = ((MR_Integer) MR_r1 & (MR_Integer) 255);
	MR_r1 = MR_sv(3);
	MR_r2 = (MR_Integer) 8;
	MR_np_call_localret_ent(fn__f_105_110_116_95_95_62_62_2_0,
		libs__pickle__pickle_4_0_i8);
MR_def_label(libs__pickle__pickle_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = ((MR_Integer) MR_r1 & (MR_Integer) 255);
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Integer) 0;
	}
	MR_np_call_localret_ent(fn__f_105_110_116_95_95_62_62_2_0,
		libs__pickle__pickle_4_0_i9);
MR_def_label(libs__pickle__pickle_4_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = ((MR_Integer) MR_r1 & (MR_Integer) 255);
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(io__write_byte_3_0,
		libs__pickle__pickle_4_0_i10);
MR_def_label(libs__pickle__pickle_4_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(io__write_byte_3_0,
		libs__pickle__pickle_4_0_i11);
MR_def_label(libs__pickle__pickle_4_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(io__write_byte_3_0,
		libs__pickle__pickle_4_0_i12);
MR_def_label(libs__pickle__pickle_4_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(io__write_byte_3_0,
		libs__pickle__pickle_4_0_i13);
MR_def_label(libs__pickle__pickle_4_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_IO_CTOR_ADDR;
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,2,1);
	MR_r3 = MR_sv(1);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(string__foldl_4_0);
MR_def_label(libs__pickle__pickle_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_r2 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r3 = MR_sv(3);
	MR_np_call_localret_ent(builtin__dynamic_cast_2_0,
		libs__pickle__pickle_4_0_i17);
MR_def_label(libs__pickle__pickle_4_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(libs__pickle__pickle_4_0_i16);
	}
	MR_sv(1) = MR_r2;
	MR_r1 = MR_r2;
	MR_r2 = (MR_Integer) 24;
	MR_np_call_localret_ent(fn__f_105_110_116_95_95_62_62_2_0,
		libs__pickle__pickle_4_0_i19);
MR_def_label(libs__pickle__pickle_4_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = ((MR_Integer) MR_r1 & (MR_Integer) 255);
	MR_r1 = MR_sv(1);
	MR_r2 = (MR_Integer) 16;
	MR_np_call_localret_ent(fn__f_105_110_116_95_95_62_62_2_0,
		libs__pickle__pickle_4_0_i20);
MR_def_label(libs__pickle__pickle_4_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = ((MR_Integer) MR_r1 & (MR_Integer) 255);
	MR_r1 = MR_sv(1);
	MR_r2 = (MR_Integer) 8;
	MR_np_call_localret_ent(fn__f_105_110_116_95_95_62_62_2_0,
		libs__pickle__pickle_4_0_i21);
MR_def_label(libs__pickle__pickle_4_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = ((MR_Integer) MR_r1 & (MR_Integer) 255);
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Integer) 0;
	}
	MR_np_call_localret_ent(fn__f_105_110_116_95_95_62_62_2_0,
		libs__pickle__pickle_4_0_i22);
MR_def_label(libs__pickle__pickle_4_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = ((MR_Integer) MR_r1 & (MR_Integer) 255);
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(io__write_byte_3_0,
		libs__pickle__pickle_4_0_i23);
MR_def_label(libs__pickle__pickle_4_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(io__write_byte_3_0,
		libs__pickle__pickle_4_0_i24);
MR_def_label(libs__pickle__pickle_4_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(io__write_byte_3_0,
		libs__pickle__pickle_4_0_i25);
MR_def_label(libs__pickle__pickle_4_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(io__write_byte_3_0);
MR_def_label(libs__pickle__pickle_4_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_r2 = (MR_Word) MR_FLOAT_CTOR_ADDR;
	MR_r3 = MR_sv(3);
	MR_np_call_localret_ent(builtin__dynamic_cast_2_0,
		libs__pickle__pickle_4_0_i28);
MR_def_label(libs__pickle__pickle_4_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(libs__pickle__pickle_4_0_i27);
	}
	MR_f(1) = MR_word_to_float(MR_r2);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(libs__pickle__pickle_float_3_0);
MR_def_label(libs__pickle__pickle_4_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_r2 = (MR_Word) MR_CHAR_CTOR_ADDR;
	MR_r3 = MR_sv(3);
	MR_np_call_localret_ent(builtin__dynamic_cast_2_0,
		libs__pickle__pickle_4_0_i32);
MR_def_label(libs__pickle__pickle_4_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(libs__pickle__pickle_4_0_i31);
	}
	MR_r1 = MR_r2;
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(libs__pickle__pickle_char_3_0);
MR_def_label(libs__pickle__pickle_4_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(fn__type_desc__type_of_1_0,
		libs__pickle__pickle_4_0_i36);
MR_def_label(libs__pickle__pickle_4_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__type_desc__type_ctor_1_0,
		libs__pickle__pickle_4_0_i37);
MR_def_label(libs__pickle__pickle_4_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(libs__pickle__user_defined_pickler_3_0,
		libs__pickle__pickle_4_0_i38);
MR_def_label(libs__pickle__pickle_4_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(libs__pickle__pickle_4_0_i35);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r2;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__univ__univ_1_0,
		libs__pickle__pickle_4_0_i40);
MR_def_label(libs__pickle__pickle_4_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tempr1;
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(libs__pickle__pickle_4_0));
	MR_np_tailcall_ent(do_call_closure_3);
	}
MR_def_label(libs__pickle__pickle_4_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(3);
	MR_r3 = (MR_Integer) 0;
	MR_np_call_localret_ent(deconstruct__functor_4_0,
		libs__pickle__pickle_4_0_i42);
MR_def_label(libs__pickle__pickle_4_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r2;
	MR_np_call_localret_ent(libs__pickle__pickle_string_3_0,
		libs__pickle__pickle_4_0_i43);
MR_def_label(libs__pickle__pickle_4_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(libs__pickle__pickle_int32_3_0,
		libs__pickle__pickle_4_0_i44);
MR_def_label(libs__pickle__pickle_4_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(1);
	MR_r3 = (MR_Integer) 0;
	MR_r4 = MR_sv(4);
	MR_r5 = MR_sv(3);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(libs__pickle__pickle_args_6_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(deconstruct__arg_4_0);
MR_decl_entry(require__unexpected_3_0);

MR_BEGIN_MODULE(libs__pickle_module10)
	MR_init_entry1(libs__pickle__pickle_args_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__libs__pickle__pickle_args_6_0);
	MR_init_label5(libs__pickle__pickle_args_6_0,20,4,6,3,23)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'pickle_args'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(libs__pickle__pickle_args_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
MR_def_label(libs__pickle__pickle_args_6_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r3 == MR_r4)) {
		MR_GOTO_LAB(libs__pickle__pickle_args_6_0_i23);
	}
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r5;
	MR_sv(4) = MR_tempr1;
	MR_sv(5) = MR_r1;
	MR_r2 = MR_tempr1;
	MR_r3 = (MR_Integer) 0;
	MR_r4 = MR_sv(2);
	}
	MR_np_call_localret_ent(deconstruct__arg_4_0,
		libs__pickle__pickle_args_6_0_i4);
MR_def_label(libs__pickle__pickle_args_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(libs__pickle__pickle_args_6_0_i3);
	}
	MR_r1 = MR_r2;
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(libs__pickle__pickle_4_0,
		libs__pickle__pickle_args_6_0_i6);
MR_def_label(libs__pickle__pickle_args_6_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(1);
	MR_r3 = ((MR_Integer) MR_sv(2) + (MR_Integer) 1);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(4);
	MR_succip_word = MR_sv(6);
	MR_GOTO_LAB(libs__pickle__pickle_args_6_0_i20);
MR_def_label(libs__pickle__pickle_args_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("libs.pickle", 11);
	MR_r2 = (MR_Word) MR_string_const("predicate \140libs.pickle.pickle_args\'/6", 37);
	MR_r3 = (MR_Word) MR_string_const("unable to deconstruct arg", 25);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(require__unexpected_3_0);
MR_def_label(libs__pickle__pickle_args_6_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(6);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(libs__pickle_module11)
	MR_init_entry1(fn__libs__pickle__init_unpicklers_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__libs__pickle__init_unpicklers_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'init_unpicklers'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__libs__pickle__init_unpicklers_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(type_desc, type_ctor_desc);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,3,0);
	MR_np_tailcall_ent(fn__map__init_0_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(libs__pickle_module12)
	MR_init_entry1(libs__pickle__register_unpickler_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__libs__pickle__register_unpickler_4_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'register_unpickler'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__libs__pickle__register_unpickler_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(type_desc, type_ctor_desc);
	MR_tempr2 = MR_r2;
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,3,0);
	MR_tempr3 = MR_r3;
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tempr2;
	MR_r5 = MR_tempr3;
	MR_np_tailcall_ent(map__det_insert_4_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(io__see_binary_4_0);
MR_decl_entry(io__read_binary_file_as_bitmap_3_0);
MR_decl_entry(io__seen_binary_2_0);
MR_decl_entry(exception__try_2_0);
MR_decl_entry(univ__univ_to_type_2_0);
MR_decl_entry(fn__io__make_io_error_1_0);
MR_decl_entry(exception__rethrow_1_0);

MR_BEGIN_MODULE(libs__pickle_module13)
	MR_init_entry1(libs__pickle__unpickle_from_file_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__libs__pickle__unpickle_from_file_5_0);
	MR_init_label10(libs__pickle__unpickle_from_file_5_0,2,5,6,8,10,14,16,13,12,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'unpickle_from_file'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__libs__pickle__unpickle_from_file_5_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r1;
	MR_r1 = MR_r3;
	MR_np_call_localret_ent(io__see_binary_4_0,
		libs__pickle__unpickle_from_file_5_0_i2);
MR_def_label(libs__pickle__unpickle_from_file_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(libs__pickle__unpickle_from_file_5_0_i4);
	}
	MR_np_call_localret_ent(io__read_binary_file_as_bitmap_3_0,
		libs__pickle__unpickle_from_file_5_0_i5);
MR_def_label(libs__pickle__unpickle_from_file_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(io__seen_binary_2_0,
		libs__pickle__unpickle_from_file_5_0_i6);
MR_def_label(libs__pickle__unpickle_from_file_5_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),1)) {
		MR_GOTO_LAB(libs__pickle__unpickle_from_file_5_0_i8);
	}
	MR_r1 = MR_sv(1);
	MR_decr_sp_and_return(4);
MR_def_label(libs__pickle__unpickle_from_file_5_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 6);
	MR_tfield(0, MR_r2, 0) = (MR_Word) MR_COMMON(5,0);
	MR_tfield(0, MR_r2, 1) = (MR_Word) MR_ENTRY_AP(libs__pickle__IntroducedFrom__pred__unpickle_from_file__238__1_4_0);
	MR_tfield(0, MR_r2, 2) = (MR_Integer) 3;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_tfield(0, MR_r2, 3) = MR_tempr1;
	MR_tfield(0, MR_r2, 4) = MR_sv(2);
	MR_tfield(0, MR_r2, 5) = MR_tfield(0, MR_sv(1), 0);
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(exception__try_2_0,
		libs__pickle__unpickle_from_file_5_0_i10);
MR_def_label(libs__pickle__unpickle_from_file_5_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,2)) {
		MR_GOTO_LAB(libs__pickle__unpickle_from_file_5_0_i12);
	}
	MR_sv(2) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(libs__pickle, get_byte_out_of_range);
	MR_r2 = MR_tfield(2, MR_sv(2), 0);
	MR_np_call_localret_ent(univ__univ_to_type_2_0,
		libs__pickle__unpickle_from_file_5_0_i14);
MR_def_label(libs__pickle__unpickle_from_file_5_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(libs__pickle__unpickle_from_file_5_0_i13);
	}
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__io__make_io_error_1_0,
		libs__pickle__unpickle_from_file_5_0_i16);
MR_def_label(libs__pickle__unpickle_from_file_5_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(4);
	}
MR_def_label(libs__pickle__unpickle_from_file_5_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(exception__rethrow_1_0);
MR_def_label(libs__pickle__unpickle_from_file_5_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr1, 0) = MR_tfield(1, MR_r1, 0);
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(4);
	}
MR_def_label(libs__pickle__unpickle_from_file_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_tfield(1, MR_r1, 0);
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(4);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(libs__pickle_module14)
	MR_init_entry1(libs__pickle__unpickler_inst_cast_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__libs__pickle__unpickler_inst_cast_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'unpickler_inst_cast'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(libs__pickle__unpickler_inst_cast_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word	A;
	MR_Word	B;
#define	MR_PROC_LABEL	mercury__libs__pickle__unpickler_inst_cast_2_0
	A = MR_r1;
{
#line 330 "pickle.m"

    B = A;
;}
#line 1780 "libs.pickle.c"
	MR_r1 = B;
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(libs__pickle_module15)
	MR_init_entry1(libs__pickle__user_defined_unpickler_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__libs__pickle__user_defined_unpickler_3_0);
	MR_init_label2(libs__pickle__user_defined_unpickler_3_0,3,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'user_defined_unpickler'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(libs__pickle__user_defined_unpickler_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(type_desc, type_ctor_desc);
	MR_tempr2 = MR_r2;
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,3,0);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tempr2;
	}
	MR_np_call_localret_ent(map__search_3_0,
		libs__pickle__user_defined_unpickler_3_0_i3);
MR_def_label(libs__pickle__user_defined_unpickler_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(libs__pickle__user_defined_unpickler_3_0_i1);
	}
	{
	MR_Word	A;
	MR_Word	B;
#define	MR_PROC_LABEL	mercury__libs__pickle__user_defined_unpickler_3_0
	A = MR_r2;
{
#line 330 "pickle.m"

    B = A;
;}
#line 1834 "libs.pickle.c"
	MR_r2 = B;
#undef	MR_PROC_LABEL
	}
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__pickle__user_defined_unpickler_3_0,1)
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

MR_decl_entry(bitmap__byte_in_range_2_0);
MR_decl_entry(fn__bitmap__unsafe_byte_2_0);
MR_decl_entry(fn__string__from_int_1_0);
MR_decl_entry(fn__f_115_116_114_105_110_103_95_95_43_43_2_0);
MR_decl_entry(exception__throw_1_0);

MR_BEGIN_MODULE(libs__pickle_module16)
	MR_init_entry1(libs__pickle__unpickle_int32_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__libs__pickle__unpickle_int32_4_0);
	MR_init_label10(libs__pickle__unpickle_int32_4_0,4,6,2,7,8,9,11,14,16,12)
	MR_init_label10(libs__pickle__unpickle_int32_4_0,17,18,19,21,24,26,22,27,28,29)
	MR_init_label7(libs__pickle__unpickle_int32_4_0,31,34,36,32,37,38,39)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'unpickle_int32'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(libs__pickle__unpickle_int32_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(4) = ((MR_Integer) MR_r2 + (MR_Integer) 1);
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_np_call_localret_ent(bitmap__byte_in_range_2_0,
		libs__pickle__unpickle_int32_4_0_i4);
MR_def_label(libs__pickle__unpickle_int32_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(libs__pickle__unpickle_int32_4_0_i2);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(fn__bitmap__unsafe_byte_2_0,
		libs__pickle__unpickle_int32_4_0_i6);
MR_def_label(libs__pickle__unpickle_int32_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(4);
	MR_sv(5) = ((MR_Integer) MR_r2 + (MR_Integer) 1);
	MR_GOTO_LAB(libs__pickle__unpickle_int32_4_0_i11);
MR_def_label(libs__pickle__unpickle_int32_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__string__from_int_1_0,
		libs__pickle__unpickle_int32_4_0_i7);
MR_def_label(libs__pickle__unpickle_int32_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const(" is out of range", 16);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		libs__pickle__unpickle_int32_4_0_i8);
MR_def_label(libs__pickle__unpickle_int32_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("byte ", 5);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		libs__pickle__unpickle_int32_4_0_i9);
MR_def_label(libs__pickle__unpickle_int32_4_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(libs__pickle, get_byte_out_of_range);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(exception__throw_1_0,
		libs__pickle__unpickle_int32_4_0_i11);
MR_def_label(libs__pickle__unpickle_int32_4_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(4) = MR_r2;
	MR_np_call_localret_ent(bitmap__byte_in_range_2_0,
		libs__pickle__unpickle_int32_4_0_i14);
MR_def_label(libs__pickle__unpickle_int32_4_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(libs__pickle__unpickle_int32_4_0_i12);
	}
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(fn__bitmap__unsafe_byte_2_0,
		libs__pickle__unpickle_int32_4_0_i16);
MR_def_label(libs__pickle__unpickle_int32_4_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(5);
	MR_sv(6) = ((MR_Integer) MR_r2 + (MR_Integer) 1);
	MR_GOTO_LAB(libs__pickle__unpickle_int32_4_0_i21);
MR_def_label(libs__pickle__unpickle_int32_4_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(4);
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__string__from_int_1_0,
		libs__pickle__unpickle_int32_4_0_i17);
MR_def_label(libs__pickle__unpickle_int32_4_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const(" is out of range", 16);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		libs__pickle__unpickle_int32_4_0_i18);
MR_def_label(libs__pickle__unpickle_int32_4_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("byte ", 5);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		libs__pickle__unpickle_int32_4_0_i19);
MR_def_label(libs__pickle__unpickle_int32_4_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(libs__pickle, get_byte_out_of_range);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(exception__throw_1_0,
		libs__pickle__unpickle_int32_4_0_i21);
MR_def_label(libs__pickle__unpickle_int32_4_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(5) = MR_r2;
	MR_np_call_localret_ent(bitmap__byte_in_range_2_0,
		libs__pickle__unpickle_int32_4_0_i24);
MR_def_label(libs__pickle__unpickle_int32_4_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(libs__pickle__unpickle_int32_4_0_i22);
	}
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(fn__bitmap__unsafe_byte_2_0,
		libs__pickle__unpickle_int32_4_0_i26);
MR_def_label(libs__pickle__unpickle_int32_4_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(6);
	MR_sv(3) = ((MR_Integer) MR_tempr1 + (MR_Integer) 1);
	MR_r2 = MR_tempr1;
	MR_GOTO_LAB(libs__pickle__unpickle_int32_4_0_i31);
	}
MR_def_label(libs__pickle__unpickle_int32_4_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(5);
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__string__from_int_1_0,
		libs__pickle__unpickle_int32_4_0_i27);
MR_def_label(libs__pickle__unpickle_int32_4_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const(" is out of range", 16);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		libs__pickle__unpickle_int32_4_0_i28);
MR_def_label(libs__pickle__unpickle_int32_4_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("byte ", 5);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		libs__pickle__unpickle_int32_4_0_i29);
MR_def_label(libs__pickle__unpickle_int32_4_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(libs__pickle, get_byte_out_of_range);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(exception__throw_1_0,
		libs__pickle__unpickle_int32_4_0_i31);
MR_def_label(libs__pickle__unpickle_int32_4_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(6) = MR_r2;
	MR_np_call_localret_ent(bitmap__byte_in_range_2_0,
		libs__pickle__unpickle_int32_4_0_i34);
MR_def_label(libs__pickle__unpickle_int32_4_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(libs__pickle__unpickle_int32_4_0_i32);
	}
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(fn__bitmap__unsafe_byte_2_0,
		libs__pickle__unpickle_int32_4_0_i36);
MR_def_label(libs__pickle__unpickle_int32_4_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (((((((MR_Integer) MR_sv(2) << (MR_Integer) 24) | ((MR_Integer) MR_sv(4) << (MR_Integer) 16)) | ((MR_Integer) MR_sv(5) << (MR_Integer) 8)) | ((MR_Integer) MR_r1 << (MR_Integer) 0)) ^ (MR_Integer) 2147483648) - (MR_Integer) 2147483648);
	MR_r2 = MR_sv(3);
	MR_decr_sp_and_return(7);
MR_def_label(libs__pickle__unpickle_int32_4_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(6);
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__string__from_int_1_0,
		libs__pickle__unpickle_int32_4_0_i37);
MR_def_label(libs__pickle__unpickle_int32_4_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const(" is out of range", 16);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		libs__pickle__unpickle_int32_4_0_i38);
MR_def_label(libs__pickle__unpickle_int32_4_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("byte ", 5);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		libs__pickle__unpickle_int32_4_0_i39);
MR_def_label(libs__pickle__unpickle_int32_4_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(libs__pickle, get_byte_out_of_range);
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(exception__throw_1_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(char__det_from_int_2_0);

MR_BEGIN_MODULE(libs__pickle_module17)
	MR_init_entry1(libs__pickle__unpickle_char_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__libs__pickle__unpickle_char_4_0);
	MR_init_label7(libs__pickle__unpickle_char_4_0,4,2,7,8,9,11,12)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'unpickle_char'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(libs__pickle__unpickle_char_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(3) = ((MR_Integer) MR_r2 + (MR_Integer) 1);
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_np_call_localret_ent(bitmap__byte_in_range_2_0,
		libs__pickle__unpickle_char_4_0_i4);
MR_def_label(libs__pickle__unpickle_char_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(libs__pickle__unpickle_char_4_0_i2);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(fn__bitmap__unsafe_byte_2_0,
		libs__pickle__unpickle_char_4_0_i11);
MR_def_label(libs__pickle__unpickle_char_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__string__from_int_1_0,
		libs__pickle__unpickle_char_4_0_i7);
MR_def_label(libs__pickle__unpickle_char_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const(" is out of range", 16);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		libs__pickle__unpickle_char_4_0_i8);
MR_def_label(libs__pickle__unpickle_char_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("byte ", 5);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		libs__pickle__unpickle_char_4_0_i9);
MR_def_label(libs__pickle__unpickle_char_4_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(libs__pickle, get_byte_out_of_range);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(exception__throw_1_0,
		libs__pickle__unpickle_char_4_0_i11);
MR_def_label(libs__pickle__unpickle_char_4_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(char__det_from_int_2_0,
		libs__pickle__unpickle_char_4_0_i12);
MR_def_label(libs__pickle__unpickle_char_4_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(3);
	MR_decr_sp_and_return(4);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(libs__pickle_module18)
	MR_init_entry1(libs__pickle__local_unsafe_set_char_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__libs__pickle__local_unsafe_set_char_4_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'local_unsafe_set_char'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(libs__pickle__local_unsafe_set_char_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Char	Chr;
	MR_Integer	Index;
	MR_String	Str0;
	MR_String	Str;
#define	MR_PROC_LABEL	mercury__libs__pickle__local_unsafe_set_char_4_0
	Chr = MR_r1;
	Index = MR_r2;
	Str0 = (MR_String) MR_r3;
{
#line 455 "pickle.m"

    Str0[Index] = Chr;
    Str = Str0;
;}
#line 2207 "libs.pickle.c"
	MR_r1 = (MR_Word) Str;
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(libs__pickle_module19)
	MR_init_entry1(libs__pickle__unpickle_string_2_7_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__libs__pickle__unpickle_string_2_7_0);
	MR_init_label9(libs__pickle__unpickle_string_2_7_0,23,2,5,3,8,9,10,12,13)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'unpickle_string_2'/7 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(libs__pickle__unpickle_string_2_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
MR_def_label(libs__pickle__unpickle_string_2_7_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r2 != MR_r3)) {
		MR_GOTO_LAB(libs__pickle__unpickle_string_2_7_0_i2);
	}
	MR_r1 = MR_r4;
	MR_r2 = MR_r5;
	MR_decr_sp_and_return(7);
MR_def_label(libs__pickle__unpickle_string_2_7_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r5;
	MR_sv(6) = ((MR_Integer) MR_tempr1 + (MR_Integer) 1);
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_sv(5) = MR_tempr1;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(bitmap__byte_in_range_2_0,
		libs__pickle__unpickle_string_2_7_0_i5);
MR_def_label(libs__pickle__unpickle_string_2_7_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(libs__pickle__unpickle_string_2_7_0_i3);
	}
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(fn__bitmap__unsafe_byte_2_0,
		libs__pickle__unpickle_string_2_7_0_i12);
MR_def_label(libs__pickle__unpickle_string_2_7_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_sv(3);
	MR_tempr2 = MR_sv(4);
	MR_tempr3 = MR_sv(5);
	MR_r1 = MR_tempr3;
	}
	MR_np_call_localret_ent(fn__string__from_int_1_0,
		libs__pickle__unpickle_string_2_7_0_i8);
MR_def_label(libs__pickle__unpickle_string_2_7_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const(" is out of range", 16);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		libs__pickle__unpickle_string_2_7_0_i9);
MR_def_label(libs__pickle__unpickle_string_2_7_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("byte ", 5);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		libs__pickle__unpickle_string_2_7_0_i10);
MR_def_label(libs__pickle__unpickle_string_2_7_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(libs__pickle, get_byte_out_of_range);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(exception__throw_1_0,
		libs__pickle__unpickle_string_2_7_0_i12);
MR_def_label(libs__pickle__unpickle_string_2_7_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(char__det_from_int_2_0,
		libs__pickle__unpickle_string_2_7_0_i13);
MR_def_label(libs__pickle__unpickle_string_2_7_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Char	Chr;
	MR_Integer	Index;
	MR_String	Str0;
	MR_String	Str;
#define	MR_PROC_LABEL	mercury__libs__pickle__unpickle_string_2_7_0
	Chr = MR_r1;
	Index = MR_sv(2);
	Str0 = (MR_String) MR_sv(4);
{
#line 455 "pickle.m"

    Str0[Index] = Chr;
    Str = Str0;
;}
#line 2326 "libs.pickle.c"
	MR_r4 = (MR_Word) Str;
#undef	MR_PROC_LABEL
	}
	MR_r1 = MR_sv(1);
	MR_r2 = ((MR_Integer) MR_sv(2) + (MR_Integer) 1);
	MR_r3 = MR_sv(3);
	MR_r5 = MR_sv(6);
	MR_succip_word = MR_sv(7);
	MR_GOTO_LAB(libs__pickle__unpickle_string_2_7_0_i23);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(libs__pickle_module20)
	MR_init_entry1(libs__pickle__allocate_string_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__libs__pickle__allocate_string_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'allocate_string'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(libs__pickle__allocate_string_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Integer	Length;
	MR_String	Str;
#define	MR_PROC_LABEL	mercury__libs__pickle__allocate_string_2_0
	Length = MR_r1;
{
#line 439 "pickle.m"

    MR_allocate_aligned_string_msg(Str, Length, MR_ALLOC_ID);
    Str[Length] = '\0';
;}
#line 2367 "libs.pickle.c"
	MR_r1 = (MR_Word) Str;
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(libs__pickle_module21)
	MR_init_entry1(libs__pickle__unpickle_string_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__libs__pickle__unpickle_string_4_0);
	MR_init_label1(libs__pickle__unpickle_string_4_0,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'unpickle_string'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(libs__pickle__unpickle_string_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(libs__pickle__unpickle_int32_4_0,
		libs__pickle__unpickle_string_4_0_i2);
MR_def_label(libs__pickle__unpickle_string_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Integer	Length;
	MR_String	Str;
#define	MR_PROC_LABEL	mercury__libs__pickle__unpickle_string_4_0
	Length = MR_r1;
{
#line 439 "pickle.m"

    MR_allocate_aligned_string_msg(Str, Length, MR_ALLOC_ID);
    Str[Length] = '\0';
;}
#line 2411 "libs.pickle.c"
	MR_r4 = (MR_Word) Str;
#undef	MR_PROC_LABEL
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_tempr2 = MR_r2;
	MR_r2 = (MR_Integer) 0;
	MR_r3 = MR_tempr1;
	MR_r5 = MR_tempr2;
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(libs__pickle__unpickle_string_2_7_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(libs__pickle_module22)
	MR_init_entry1(libs__pickle__reinterpret_ints_as_float_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__libs__pickle__reinterpret_ints_as_float_3_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'reinterpret_ints_as_float'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(libs__pickle__reinterpret_ints_as_float_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Integer	A;
	MR_Integer	B;
	MR_Float	Flt;
#define	MR_PROC_LABEL	mercury__libs__pickle__reinterpret_ints_as_float_3_0
	A = MR_r1;
	B = MR_r2;
{
#line 510 "pickle.m"

    if (sizeof(MR_Float) == sizeof(float)) {
        MR_Float    *p;

        p = (MR_Float *) &A;
        Flt = *p;
        (void) B;
    } else {
        MR_uint_least64_t   tmp;
        MR_Float            *p;

        tmp = (((MR_uint_least64_t) A) << 32) |
            (((MR_uint_least64_t) B) & 0xffffffff);
        p = (MR_Float *) &tmp;
        Flt = *p;
    }
;}
#line 2473 "libs.pickle.c"
	MR_f(1) = Flt;
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(libs__pickle_module23)
	MR_init_entry1(libs__pickle__unpickle_float_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__libs__pickle__unpickle_float_4_0);
	MR_init_label2(libs__pickle__unpickle_float_4_0,2,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'unpickle_float'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(libs__pickle__unpickle_float_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(libs__pickle__unpickle_int32_4_0,
		libs__pickle__unpickle_float_4_0_i2);
MR_def_label(libs__pickle__unpickle_float_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(libs__pickle__unpickle_int32_4_0,
		libs__pickle__unpickle_float_4_0_i3);
MR_def_label(libs__pickle__unpickle_float_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Integer	A;
	MR_Integer	B;
	MR_Float	Flt;
#define	MR_PROC_LABEL	mercury__libs__pickle__unpickle_float_4_0
	A = MR_sv(1);
	B = MR_r1;
{
#line 510 "pickle.m"

    if (sizeof(MR_Float) == sizeof(float)) {
        MR_Float    *p;

        p = (MR_Float *) &A;
        Flt = *p;
        (void) B;
    } else {
        MR_uint_least64_t   tmp;
        MR_Float            *p;

        tmp = (((MR_uint_least64_t) A) << 32) |
            (((MR_uint_least64_t) B) & 0xffffffff);
        p = (MR_Float *) &tmp;
        Flt = *p;
    }
;}
#line 2542 "libs.pickle.c"
	MR_f(1) = Flt;
#undef	MR_PROC_LABEL
	}
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(2);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___type_desc__type_desc_0_0);
MR_decl_entry(fn__univ__univ_1_1);
MR_declare_entry(mercury__do_call_closure_4);
MR_decl_entry(type_desc__type_ctor_and_args_3_0);
MR_decl_entry(construct__find_functor_5_0);
MR_decl_entry(list__map_foldl_5_0);
MR_decl_entry(fn__construct__construct_3_0);
MR_decl_entry(fn__construct__construct_tuple_1_0);

MR_BEGIN_MODULE(libs__pickle_module24)
	MR_init_entry1(libs__pickle__unpickle_2_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__libs__pickle__unpickle_2_6_0);
	MR_init_label10(libs__pickle__unpickle_2_6_0,3,4,6,7,2,10,11,13,9,16)
	MR_init_label10(libs__pickle__unpickle_2_6_0,17,19,15,22,23,25,21,28,29,27)
	MR_init_label10(libs__pickle__unpickle_2_6_0,32,33,37,35,38,40,42,47,45,44)
	MR_init_label2(libs__pickle__unpickle_2_6_0,51,34)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'unpickle_2'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(libs__pickle__unpickle_2_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(3) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(1) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_np_call_localret_ent(fn__type_desc__type_of_1_0,
		libs__pickle__unpickle_2_6_0_i3);
MR_def_label(libs__pickle__unpickle_2_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(__Unify___type_desc__type_desc_0_0,
		libs__pickle__unpickle_2_6_0_i4);
MR_def_label(libs__pickle__unpickle_2_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(libs__pickle__unpickle_2_6_0_i2);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(libs__pickle__unpickle_int32_4_0,
		libs__pickle__unpickle_2_6_0_i6);
MR_def_label(libs__pickle__unpickle_2_6_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Integer	Length;
	MR_String	Str;
#define	MR_PROC_LABEL	mercury__libs__pickle__unpickle_2_6_0
	Length = MR_r1;
{
#line 439 "pickle.m"

    MR_allocate_aligned_string_msg(Str, Length, MR_ALLOC_ID);
    Str[Length] = '\0';
;}
#line 2616 "libs.pickle.c"
	MR_r4 = (MR_Word) Str;
#undef	MR_PROC_LABEL
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_tempr2 = MR_r2;
	MR_r2 = (MR_Integer) 0;
	MR_r3 = MR_tempr1;
	MR_r5 = MR_tempr2;
	}
	MR_np_call_localret_ent(libs__pickle__unpickle_string_2_7_0,
		libs__pickle__unpickle_2_6_0_i7);
MR_def_label(libs__pickle__unpickle_2_6_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__univ__univ_1_1,
		libs__pickle__unpickle_2_6_0_i51);
MR_def_label(libs__pickle__unpickle_2_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_np_call_localret_ent(fn__type_desc__type_of_1_0,
		libs__pickle__unpickle_2_6_0_i10);
MR_def_label(libs__pickle__unpickle_2_6_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(__Unify___type_desc__type_desc_0_0,
		libs__pickle__unpickle_2_6_0_i11);
MR_def_label(libs__pickle__unpickle_2_6_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(libs__pickle__unpickle_2_6_0_i9);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(libs__pickle__unpickle_int32_4_0,
		libs__pickle__unpickle_2_6_0_i13);
MR_def_label(libs__pickle__unpickle_2_6_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__univ__univ_1_0,
		libs__pickle__unpickle_2_6_0_i51);
MR_def_label(libs__pickle__unpickle_2_6_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_FLOAT_CTOR_ADDR;
	MR_np_call_localret_ent(fn__type_desc__type_of_1_0,
		libs__pickle__unpickle_2_6_0_i16);
MR_def_label(libs__pickle__unpickle_2_6_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(__Unify___type_desc__type_desc_0_0,
		libs__pickle__unpickle_2_6_0_i17);
MR_def_label(libs__pickle__unpickle_2_6_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(libs__pickle__unpickle_2_6_0_i15);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(libs__pickle__unpickle_float_4_0,
		libs__pickle__unpickle_2_6_0_i19);
MR_def_label(libs__pickle__unpickle_2_6_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = (MR_Word) MR_FLOAT_CTOR_ADDR;
	MR_r2 = MR_float_to_word(MR_f(1));
	MR_np_call_localret_ent(fn__univ__univ_1_0,
		libs__pickle__unpickle_2_6_0_i51);
MR_def_label(libs__pickle__unpickle_2_6_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CHAR_CTOR_ADDR;
	MR_np_call_localret_ent(fn__type_desc__type_of_1_0,
		libs__pickle__unpickle_2_6_0_i22);
MR_def_label(libs__pickle__unpickle_2_6_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(__Unify___type_desc__type_desc_0_0,
		libs__pickle__unpickle_2_6_0_i23);
MR_def_label(libs__pickle__unpickle_2_6_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(libs__pickle__unpickle_2_6_0_i21);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(libs__pickle__unpickle_char_4_0,
		libs__pickle__unpickle_2_6_0_i25);
MR_def_label(libs__pickle__unpickle_2_6_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CHAR_CTOR_ADDR;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__univ__univ_1_0,
		libs__pickle__unpickle_2_6_0_i51);
MR_def_label(libs__pickle__unpickle_2_6_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(fn__type_desc__type_ctor_1_0,
		libs__pickle__unpickle_2_6_0_i28);
MR_def_label(libs__pickle__unpickle_2_6_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(libs__pickle__user_defined_unpickler_3_0,
		libs__pickle__unpickle_2_6_0_i29);
MR_def_label(libs__pickle__unpickle_2_6_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(libs__pickle__unpickle_2_6_0_i27);
	}
	MR_r1 = MR_r2;
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(1);
	MR_r5 = MR_sv(4);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(libs__pickle__unpickle_2_6_0));
	MR_np_tailcall_ent(do_call_closure_4);
MR_def_label(libs__pickle__unpickle_2_6_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(libs__pickle__unpickle_string_4_0,
		libs__pickle__unpickle_2_6_0_i32);
MR_def_label(libs__pickle__unpickle_2_6_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(libs__pickle__unpickle_int32_4_0,
		libs__pickle__unpickle_2_6_0_i33);
MR_def_label(libs__pickle__unpickle_2_6_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_sv(4), MR_string_const("{}", 2)) != 0)) {
		MR_GOTO_LAB(libs__pickle__unpickle_2_6_0_i35);
	}
	MR_sv(4) = MR_r2;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(type_desc__type_ctor_and_args_3_0,
		libs__pickle__unpickle_2_6_0_i37);
MR_def_label(libs__pickle__unpickle_2_6_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_r5 = MR_r2;
	MR_r2 = (MR_Integer) 0;
	MR_r6 = MR_sv(4);
	MR_GOTO_LAB(libs__pickle__unpickle_2_6_0_i40);
MR_def_label(libs__pickle__unpickle_2_6_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = MR_r2;
	MR_tempr2 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	}
	MR_np_call_localret_ent(construct__find_functor_5_0,
		libs__pickle__unpickle_2_6_0_i38);
MR_def_label(libs__pickle__unpickle_2_6_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(libs__pickle__unpickle_2_6_0_i34);
	}
	MR_r1 = (MR_Integer) 0;
	MR_r5 = MR_r3;
	MR_r6 = MR_sv(4);
MR_def_label(libs__pickle__unpickle_2_6_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_r4 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(6,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(libs__pickle__unpickle_2_6_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(3);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(2);
	MR_sv(3) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(type_desc, type_desc);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(univ, univ);
	MR_r3 = (MR_Word) MR_INT_CTOR_ADDR;
	}
	MR_np_call_localret_ent(list__map_foldl_5_0,
		libs__pickle__unpickle_2_6_0_i42);
MR_def_label(libs__pickle__unpickle_2_6_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(3),0)) {
		MR_GOTO_LAB(libs__pickle__unpickle_2_6_0_i44);
	}
	MR_sv(3) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__construct__construct_3_0,
		libs__pickle__unpickle_2_6_0_i47);
MR_def_label(libs__pickle__unpickle_2_6_0,47)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(libs__pickle__unpickle_2_6_0_i45);
	}
	MR_r1 = MR_r2;
	MR_r2 = MR_sv(3);
	MR_decr_sp_and_return(5);
MR_def_label(libs__pickle__unpickle_2_6_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(3);
	MR_r1 = (MR_Word) MR_string_const("libs.pickle", 11);
	MR_r2 = (MR_Word) MR_string_const("predicate \140libs.pickle.unpickle_2\'/6", 36);
	MR_r3 = (MR_Word) MR_string_const("unable to construct", 19);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(require__unexpected_3_0);
MR_def_label(libs__pickle__unpickle_2_6_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r2;
	MR_np_call_localret_ent(fn__construct__construct_tuple_1_0,
		libs__pickle__unpickle_2_6_0_i51);
MR_def_label(libs__pickle__unpickle_2_6_0,51)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(3);
	MR_decr_sp_and_return(5);
MR_def_label(libs__pickle__unpickle_2_6_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("libs.pickle", 11);
	MR_r2 = (MR_Word) MR_string_const("predicate \140libs.pickle.unpickle_2\'/6", 36);
	MR_r3 = (MR_Word) MR_string_const("unable to unpickle", 18);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(require__unexpected_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(univ__det_univ_to_type_2_0);

MR_BEGIN_MODULE(libs__pickle_module25)
	MR_init_entry1(libs__pickle__unpickle_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__libs__pickle__unpickle_5_0);
	MR_init_label3(libs__pickle__unpickle_5_0,2,3,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'unpickle'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__libs__pickle__unpickle_5_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(3) = MR_r2;
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r4;
	MR_sv(4) = MR_r1;
	MR_np_call_localret_ent(fn__type_desc__type_of_1_0,
		libs__pickle__unpickle_5_0_i2);
MR_def_label(libs__pickle__unpickle_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(2);
	}
	MR_np_call_localret_ent(libs__pickle__unpickle_2_6_0,
		libs__pickle__unpickle_5_0_i3);
MR_def_label(libs__pickle__unpickle_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(univ__det_univ_to_type_2_0,
		libs__pickle__unpickle_5_0_i4);
MR_def_label(libs__pickle__unpickle_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(3);
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(libs__pickle_module26)
	MR_init_entry1(__Unify___libs__pickle__get_byte_out_of_range_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___libs__pickle__get_byte_out_of_range_0_0);
	MR_init_label1(__Unify___libs__pickle__get_byte_out_of_range_0_0,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___libs__pickle__get_byte_out_of_range_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___libs__pickle__get_byte_out_of_range_0_0_i4);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_r1 = (strcmp((char *) (MR_Word *) MR_sv(1), (char *) (MR_Word *) MR_sv(2)) == 0);
	MR_decr_sp(2);
	MR_proceed();
MR_def_label(__Unify___libs__pickle__get_byte_out_of_range_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp(2);
	MR_r1 = MR_TRUE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(private_builtin__builtin_compare_string_3_0);

MR_BEGIN_MODULE(libs__pickle_module27)
	MR_init_entry1(__Compare___libs__pickle__get_byte_out_of_range_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___libs__pickle__get_byte_out_of_range_0_0);
	MR_init_label2(__Compare___libs__pickle__get_byte_out_of_range_0_0,3,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___libs__pickle__get_byte_out_of_range_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___libs__pickle__get_byte_out_of_range_0_0_i3);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___libs__pickle__get_byte_out_of_range_0_0_i2);
MR_def_label(__Compare___libs__pickle__get_byte_out_of_range_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___libs__pickle__get_byte_out_of_range_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(private_builtin__builtin_compare_string_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(private_builtin__builtin_unify_pred_2_0);

MR_BEGIN_MODULE(libs__pickle_module28)
	MR_init_entry1(__Unify___libs__pickle__pickler_pred_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___libs__pickle__pickler_pred_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___libs__pickle__pickler_pred_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(private_builtin__builtin_unify_pred_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(private_builtin__builtin_compare_pred_3_0);

MR_BEGIN_MODULE(libs__pickle_module29)
	MR_init_entry1(__Compare___libs__pickle__pickler_pred_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___libs__pickle__pickler_pred_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___libs__pickle__pickler_pred_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(private_builtin__builtin_compare_pred_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___tree234__tree234_2_0);

MR_BEGIN_MODULE(libs__pickle_module30)
	MR_init_entry1(__Unify___libs__pickle__picklers_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___libs__pickle__picklers_0_0);
	MR_init_label1(__Unify___libs__pickle__picklers_0_0,7)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___libs__pickle__picklers_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___libs__pickle__picklers_0_0_i7);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(type_desc, type_ctor_desc);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Unify___tree234__tree234_2_0);
MR_def_label(__Unify___libs__pickle__picklers_0_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Compare___tree234__tree234_2_0);

MR_BEGIN_MODULE(libs__pickle_module31)
	MR_init_entry1(__Compare___libs__pickle__picklers_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___libs__pickle__picklers_0_0);
	MR_init_label2(__Compare___libs__pickle__picklers_0_0,3,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___libs__pickle__picklers_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___libs__pickle__picklers_0_0_i3);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___libs__pickle__picklers_0_0_i2);
MR_def_label(__Compare___libs__pickle__picklers_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___libs__pickle__picklers_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(type_desc, type_ctor_desc);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Compare___tree234__tree234_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___bitmap__bitmap_0_0);

MR_BEGIN_MODULE(libs__pickle_module32)
	MR_init_entry1(__Unify___libs__pickle__unpickle_handle_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___libs__pickle__unpickle_handle_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___libs__pickle__unpickle_handle_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(__Unify___bitmap__bitmap_0_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Compare___bitmap__bitmap_0_0);

MR_BEGIN_MODULE(libs__pickle_module33)
	MR_init_entry1(__Compare___libs__pickle__unpickle_handle_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___libs__pickle__unpickle_handle_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___libs__pickle__unpickle_handle_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(__Compare___bitmap__bitmap_0_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(libs__pickle_module34)
	MR_init_entry1(__Unify___libs__pickle__unpickle_state_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___libs__pickle__unpickle_state_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___libs__pickle__unpickle_state_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_r1 == MR_r2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(private_builtin__builtin_compare_int_3_0);

MR_BEGIN_MODULE(libs__pickle_module35)
	MR_init_entry1(__Compare___libs__pickle__unpickle_state_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___libs__pickle__unpickle_state_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___libs__pickle__unpickle_state_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(libs__pickle_module36)
	MR_init_entry1(__Unify___libs__pickle__unpickler_pred_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___libs__pickle__unpickler_pred_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___libs__pickle__unpickler_pred_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(private_builtin__builtin_unify_pred_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(libs__pickle_module37)
	MR_init_entry1(__Compare___libs__pickle__unpickler_pred_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___libs__pickle__unpickler_pred_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___libs__pickle__unpickler_pred_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(private_builtin__builtin_compare_pred_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(libs__pickle_module38)
	MR_init_entry1(__Unify___libs__pickle__unpicklers_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___libs__pickle__unpicklers_0_0);
	MR_init_label1(__Unify___libs__pickle__unpicklers_0_0,7)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___libs__pickle__unpicklers_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___libs__pickle__unpicklers_0_0_i7);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(type_desc, type_ctor_desc);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,3,0);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Unify___tree234__tree234_2_0);
MR_def_label(__Unify___libs__pickle__unpicklers_0_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(libs__pickle_module39)
	MR_init_entry1(__Compare___libs__pickle__unpicklers_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___libs__pickle__unpicklers_0_0);
	MR_init_label2(__Compare___libs__pickle__unpicklers_0_0,3,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___libs__pickle__unpicklers_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___libs__pickle__unpicklers_0_0_i3);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___libs__pickle__unpicklers_0_0_i2);
MR_def_label(__Compare___libs__pickle__unpicklers_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___libs__pickle__unpicklers_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(type_desc, type_ctor_desc);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,3,0);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Compare___tree234__tree234_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(libs__pickle_module40)
	MR_init_entry1(libs__pickle__IntroducedFrom__pred__unpickle_from_file__238__1_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__libs__pickle__IntroducedFrom__pred__unpickle_from_file__238__1_4_0);
	MR_init_label2(libs__pickle__IntroducedFrom__pred__unpickle_from_file__238__1_4_0,2,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__pred__unpickle_from_file__238__1'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(libs__pickle__IntroducedFrom__pred__unpickle_from_file__238__1_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r1;
	MR_np_call_localret_ent(fn__type_desc__type_of_1_0,
		libs__pickle__IntroducedFrom__pred__unpickle_from_file__238__1_4_0_i2);
MR_def_label(libs__pickle__IntroducedFrom__pred__unpickle_from_file__238__1_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tempr1;
	MR_r4 = (MR_Integer) 0;
	}
	MR_np_call_localret_ent(libs__pickle__unpickle_2_6_0,
		libs__pickle__IntroducedFrom__pred__unpickle_from_file__238__1_4_0_i3);
MR_def_label(libs__pickle__IntroducedFrom__pred__unpickle_from_file__238__1_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(univ__det_univ_to_type_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

static void mercury__libs__pickle_maybe_bunch_0(void)
{
	libs__pickle_module0();
	libs__pickle_module1();
	libs__pickle_module2();
	libs__pickle_module3();
	libs__pickle_module4();
	libs__pickle_module5();
	libs__pickle_module6();
	libs__pickle_module7();
	libs__pickle_module8();
	libs__pickle_module9();
	libs__pickle_module10();
	libs__pickle_module11();
	libs__pickle_module12();
	libs__pickle_module13();
	libs__pickle_module14();
	libs__pickle_module15();
	libs__pickle_module16();
	libs__pickle_module17();
	libs__pickle_module18();
	libs__pickle_module19();
	libs__pickle_module20();
	libs__pickle_module21();
	libs__pickle_module22();
	libs__pickle_module23();
	libs__pickle_module24();
	libs__pickle_module25();
	libs__pickle_module26();
	libs__pickle_module27();
	libs__pickle_module28();
	libs__pickle_module29();
	libs__pickle_module30();
	libs__pickle_module31();
	libs__pickle_module32();
	libs__pickle_module33();
	libs__pickle_module34();
	libs__pickle_module35();
	libs__pickle_module36();
	libs__pickle_module37();
	libs__pickle_module38();
	libs__pickle_module39();
}

static void mercury__libs__pickle_maybe_bunch_1(void)
{
	libs__pickle_module40();
}

/* suppress gcc -Wmissing-decls warnings */
void mercury__libs__pickle__init(void);
void mercury__libs__pickle__init_type_tables(void);
void mercury__libs__pickle__init_debugger(void);
#ifdef MR_DEEP_PROFILING
void mercury__libs__pickle__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp);
#endif
#ifdef MR_RECORD_TERM_SIZES
void mercury__libs__pickle__init_complexity_procs(void);
#endif
#ifdef MR_THREADSCOPE
void mercury__libs__pickle__init_threadscope_string_table(void);
#endif

void mercury__libs__pickle__init(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	mercury__libs__pickle_maybe_bunch_0();
	mercury__libs__pickle_maybe_bunch_1();
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_libs__pickle__type_ctor_info_get_byte_out_of_range_0,
		libs__pickle__get_byte_out_of_range_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_libs__pickle__type_ctor_info_pickler_pred_0,
		libs__pickle__pickler_pred_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_libs__pickle__type_ctor_info_picklers_0,
		libs__pickle__picklers_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_libs__pickle__type_ctor_info_unpickle_handle_0,
		libs__pickle__unpickle_handle_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_libs__pickle__type_ctor_info_unpickle_state_0,
		libs__pickle__unpickle_state_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_libs__pickle__type_ctor_info_unpickler_pred_0,
		libs__pickle__unpickler_pred_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_libs__pickle__type_ctor_info_unpicklers_0,
		libs__pickle__unpicklers_0_0);
	mercury__libs__pickle__init_debugger();
}

void mercury__libs__pickle__init_type_tables(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	{
		MR_register_type_ctor_info(
		&mercury_data_libs__pickle__type_ctor_info_get_byte_out_of_range_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_libs__pickle__type_ctor_info_pickler_pred_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_libs__pickle__type_ctor_info_picklers_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_libs__pickle__type_ctor_info_unpickle_handle_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_libs__pickle__type_ctor_info_unpickle_state_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_libs__pickle__type_ctor_info_unpickler_pred_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_libs__pickle__type_ctor_info_unpicklers_0);
	}
}


void mercury__libs__pickle__init_debugger(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}

#ifdef MR_DEEP_PROFILING

void mercury__libs__pickle__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp)
{
	MR_write_out_module_proc_reps_start(procrep_fp, &mercury_data__module_common_layout__libs__pickle);
	MR_write_out_module_proc_reps_end(procrep_fp);
}

#endif

#ifdef MR_RECORD_TERM_SIZES

void mercury__libs__pickle__init_complexity_procs(void)
{
}

#endif

#ifdef MR_THREADSCOPE

void mercury__libs__pickle__init_threadscope_string_table(void)
{
}

#endif

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;
