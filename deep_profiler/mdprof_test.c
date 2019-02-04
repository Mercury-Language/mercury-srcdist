/*
** Automatically generated from `mdprof_test.m'
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
INIT mercury__mdprof_test__init
ENDINIT
*/

#define MR_ALLOW_RESET
#include "mercury_imp.h"
#line 534 "../library/io.int"
#include "io.mh"

#line 27 "mdprof_test.c"
#line 542 "../library/io.int"
#include "string.mh"

#line 31 "mdprof_test.c"
#line 149 "../library/array.int"
#include "array.mh"

#line 35 "mdprof_test.c"
#line 268 "profile.int"
#include "profile.mh"

#line 39 "mdprof_test.c"
#line 226 "mdbcomp.program_representation.int"
#include "mdbcomp.program_representation.mh"

#line 43 "mdprof_test.c"
#line 29 "../library/bitmap.int2"
#include "bitmap.mh"

#line 47 "mdprof_test.c"
#line 28 "../library/time.int2"
#include "time.mh"

#line 51 "mdprof_test.c"
#line 21 "../library/stm_builtin.int2"
#include "stm_builtin.mh"

#line 55 "mdprof_test.c"
#line 33 "mdbcomp.rtti_access.int2"
#include "mdbcomp.rtti_access.mh"

#line 59 "mdprof_test.c"
#line 60 "mdprof_test.c"
#include "mdprof_test.mh"

#line 63 "mdprof_test.c"
#line 64 "mdprof_test.c"
#ifndef MDPROF_TEST_DECL_GUARD
#define MDPROF_TEST_DECL_GUARD

#line 68 "mdprof_test.c"
#line 69 "mdprof_test.c"

#endif
#line 72 "mdprof_test.c"

#ifdef _MSC_VER
#define MR_STATIC_LINKAGE extern
#else
#define MR_STATIC_LINKAGE static
#endif

struct mercury_type_0 {
	MR_String f1;
};
MR_STATIC_LINKAGE const struct mercury_type_0 mercury_common_0[];

struct mercury_type_1 {
	MR_String f1;
	MR_Word * f2;
};
MR_STATIC_LINKAGE const struct mercury_type_1 mercury_common_1[];

struct mercury_type_2 {
	MR_Word * f1[3];
};
MR_STATIC_LINKAGE const struct mercury_type_2 mercury_common_2[];

struct mercury_type_3 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[5];
};
MR_STATIC_LINKAGE const struct mercury_type_3 mercury_common_3[];

struct mercury_type_4 {
	MR_Word * f1;
	MR_Word * f2;
	MR_Integer f3;
	MR_Word * f4;
	MR_Word * f5;
};
MR_STATIC_LINKAGE const struct mercury_type_4 mercury_common_4[];

struct mercury_type_5 {
	MR_Word * f1;
	MR_Code * f2;
	MR_Integer f3;
};
MR_STATIC_LINKAGE const struct mercury_type_5 mercury_common_5[];

struct mercury_type_7 {
	MR_Integer f1;
};
MR_STATIC_LINKAGE const struct mercury_type_7 mercury_common_7[];

struct mercury_type_8 {
	MR_Integer f1;
	MR_Word * f2;
};
MR_STATIC_LINKAGE const struct mercury_type_8 mercury_common_8[];

struct mercury_type_9 {
	MR_Integer f1;
	MR_String f2;
};
MR_STATIC_LINKAGE const struct mercury_type_9 mercury_common_9[];

struct mercury_type_6 {
	MR_String f1;
	MR_Integer f2;
};
MR_STATIC_LINKAGE const struct mercury_type_6 mercury_vector_common_6_0[];

MR_STATIC_LINKAGE const struct mercury_type_8 mercury_vector_common_8_0[];

extern const MR_TypeCtorInfo_Struct
	mercury_data_mdprof_test__type_ctor_info_option_0,
	mercury_data_mdprof_test__type_ctor_info_option_table_0,
	mercury_data_mdprof_test__type_ctor_info_options_0;
MR_decl_label3(mdprof_test__defaults_2_0, 12,13,14)
MR_decl_label10(mdprof_test__long_2_0, 3,17,5,6,7,8,9,10,11,12)
MR_decl_label3(mdprof_test__long_2_0, 13,14,15)
MR_decl_label10(main_2_0, 2,3,8,11,12,13,14,10,16,17)
MR_decl_label10(main_2_0, 18,20,21,22,23,24,19,27,25,32)
MR_decl_label1(main_2_0, 9)
MR_decl_label10(mdprof_test__main2_5_0, 5,6,7,8,9,10,11,13,14,12)
MR_decl_label10(mdprof_test__main2_5_0, 16,19,20,21,22,23,24,18,26,29)
MR_decl_label3(mdprof_test__main2_5_0, 2,31,33)
MR_decl_label5(mdprof_test__short_2_0, 3,4,5,6,1)
MR_decl_label10(mdprof_test__test_procrep_coverages_7_0, 61,4,5,6,13,15,17,18,19,20)
MR_decl_label10(mdprof_test__test_procrep_coverages_7_0, 14,32,33,36,37,38,50,40,41,35)
MR_decl_label3(mdprof_test__test_procrep_coverages_7_0, 43,63,64)
MR_decl_label6(mdprof_test__test_server_5_0, 2,3,4,5,6,7)
MR_decl_label1(mdprof_test__verify_profile_5_0, 3)
MR_decl_label10(mdprof_test__verify_profile_2_5_0, 2,3,4,5,8,9,10,11,12,13)
MR_decl_label1(mdprof_test__verify_profile_2_5_0, 6)
MR_decl_label3(mdprof_test__write_help_message_3_0, 2,3,4)
MR_decl_label5(mdprof_test__write_version_message_3_0, 2,3,4,5,6)
MR_decl_static(mdprof_test__write_help_message_3_0)
MR_decl_static(mdprof_test__test_procrep_coverages_7_0)
MR_decl_static(mdprof_test__test_server_5_0)
MR_decl_static(mdprof_test__main2_5_0)
MR_decl_static(mdprof_test__verify_profile_5_0)
MR_decl_static(mdprof_test__write_version_message_3_0)
MR_def_extern_entry(main_2_0)
MR_decl_static(mdprof_test__verify_profile_2_5_0)
MR_decl_static(mdprof_test__short_2_0)
MR_decl_static(mdprof_test__long_2_0)
MR_decl_static(mdprof_test__defaults_2_0)
MR_decl_static(__Unify___mdprof_test__option_0_0)
MR_decl_static(__Compare___mdprof_test__option_0_0)
MR_decl_static(__Unify___mdprof_test__option_table_0_0)
MR_decl_static(__Compare___mdprof_test__option_table_0_0)
MR_decl_static(__Unify___mdprof_test__options_0_0)
MR_decl_static(__Compare___mdprof_test__options_0_0)
MR_decl_static(f_109_100_112_114_111_102_95_116_101_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_85_110_105_102_121_95_95_95_109_100_112_114_111_102_95_116_101_115_116_95_95_111_112_116_105_111_110_115_95_48_95_95_91_49_44_32_50_93_95_48_2_0)
MR_decl_static(f_109_100_112_114_111_102_95_116_101_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_67_111_109_112_97_114_101_95_95_95_109_100_112_114_111_102_95_116_101_115_116_95_95_111_112_116_105_111_110_115_95_48_95_95_91_50_44_32_51_93_95_48_3_0)

static const struct mercury_type_0 mercury_common_0[1] =
{
{
MR_string_const("procrep_coverage", 16)
},
};

static const struct mercury_type_1 mercury_common_1[1] =
{
{
MR_string_const("Deep.data", 9),
MR_tbmkword(0, 0)
},
};

extern const MR_TypeCtorInfo_Struct mercury_data_tree234__type_ctor_info_tree234_2;
extern const MR_TypeCtorInfo_Struct mercury_data_mdprof_test__type_ctor_info_option_0;
extern const MR_TypeCtorInfo_Struct mercury_data_getopt__type_ctor_info_option_data_0;
static const struct mercury_type_2 mercury_common_2[2] =
{
{
{
MR_CTOR_ADDR(tree234, tree234, 2),
MR_CTOR0_ADDR(mdprof_test, option),
MR_CTOR0_ADDR(getopt, option_data)
}
},
{
{
MR_TAG_COMMON(0,5,0),
MR_TAG_COMMON(0,5,1),
MR_TAG_COMMON(0,5,2)
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__mdprof_test__verify_profile_5_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_string_0;
extern const MR_TypeCtorInfo_Struct mercury_data_io__type_ctor_info_state_0;
static const MR_UserClosureId
mercury_data__closure_layout__mdprof_test__verify_profile_5_0_2;
static const struct mercury_type_3 mercury_common_3[2] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__mdprof_test__verify_profile_5_0_1,
(MR_Word *) (MR_Integer) 0
},
5,
{
MR_STRING_CTOR_ADDR,
MR_COMMON(2,0),
MR_STRING_CTOR_ADDR,
MR_IO_CTOR_ADDR,
MR_IO_CTOR_ADDR
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__mdprof_test__verify_profile_5_0_2,
(MR_Word *) (MR_Integer) 0
},
5,
{
MR_STRING_CTOR_ADDR,
MR_COMMON(2,0),
MR_STRING_CTOR_ADDR,
MR_IO_CTOR_ADDR,
MR_IO_CTOR_ADDR
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__main_2_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_character_0;
extern const MR_TypeCtorInfo_Struct mercury_data_mdprof_test__type_ctor_info_option_0;
static const MR_UserClosureId
mercury_data__closure_layout__main_2_0_2;
static const MR_UserClosureId
mercury_data__closure_layout__main_2_0_3;
extern const MR_TypeCtorInfo_Struct mercury_data_getopt__type_ctor_info_option_data_0;
static const struct mercury_type_4 mercury_common_4[3] =
{
{
(MR_Word *) &mercury_data__closure_layout__main_2_0_1,
(MR_Word *) (MR_Integer) 0,
2,
MR_CHAR_CTOR_ADDR,
MR_CTOR0_ADDR(mdprof_test, option)
},
{
(MR_Word *) &mercury_data__closure_layout__main_2_0_2,
(MR_Word *) (MR_Integer) 0,
2,
MR_STRING_CTOR_ADDR,
MR_CTOR0_ADDR(mdprof_test, option)
},
{
(MR_Word *) &mercury_data__closure_layout__main_2_0_3,
(MR_Word *) (MR_Integer) 0,
2,
MR_CTOR0_ADDR(mdprof_test, option),
MR_CTOR0_ADDR(getopt, option_data)
},
};

static const struct mercury_type_5 mercury_common_5[3] =
{
{
MR_COMMON(4,0),
MR_ENTRY_AP(mdprof_test__short_2_0),
0
},
{
MR_COMMON(4,1),
MR_ENTRY_AP(mdprof_test__long_2_0),
0
},
{
MR_COMMON(4,2),
MR_ENTRY_AP(mdprof_test__defaults_2_0),
0
},
};

static const struct mercury_type_7 mercury_common_7[2] =
{
{
0
},
{
1
},
};

static const struct mercury_type_8 mercury_common_8[1] =
{
{
3,
MR_tbmkword(0, 0)
},
};

static const struct mercury_type_9 mercury_common_9[1] =
{
{
0,
MR_string_const("deep_test", 9)
},
};

static const struct mercury_type_6 mercury_vector_common_6_0[32] =
{
{
(MR_String) (MR_Integer) 0,
-2
},
{
MR_string_const("verbose", 7),
2
},
{
MR_string_const("dump-options", 12),
-1
},
{
(MR_String) (MR_Integer) 0,
-2
},
{
(MR_String) (MR_Integer) 0,
-2
},
{
(MR_String) (MR_Integer) 0,
-2
},
{
(MR_String) (MR_Integer) 0,
-2
},
{
(MR_String) (MR_Integer) 0,
-2
},
{
MR_string_const("dump", 4),
-1
},
{
(MR_String) (MR_Integer) 0,
-2
},
{
(MR_String) (MR_Integer) 0,
-2
},
{
(MR_String) (MR_Integer) 0,
-2
},
{
MR_string_const("test-dir", 8),
-1
},
{
(MR_String) (MR_Integer) 0,
-2
},
{
MR_string_const("compress", 8),
-1
},
{
(MR_String) (MR_Integer) 0,
-2
},
{
MR_string_const("canonical-clique", 16),
-1
},
{
(MR_String) (MR_Integer) 0,
-2
},
{
MR_string_const("test", 4),
-1
},
{
(MR_String) (MR_Integer) 0,
-2
},
{
(MR_String) (MR_Integer) 0,
-2
},
{
MR_string_const("help", 4),
-1
},
{
(MR_String) (MR_Integer) 0,
-2
},
{
(MR_String) (MR_Integer) 0,
-2
},
{
(MR_String) (MR_Integer) 0,
-2
},
{
(MR_String) (MR_Integer) 0,
-2
},
{
(MR_String) (MR_Integer) 0,
-2
},
{
(MR_String) (MR_Integer) 0,
-2
},
{
(MR_String) (MR_Integer) 0,
-2
},
{
MR_string_const("version", 7),
1
},
{
(MR_String) (MR_Integer) 0,
-2
},
{
MR_string_const("verify-profile", 14),
-1
},
};

static const struct mercury_type_8 mercury_vector_common_8_0[10] =
{
{
0,
MR_TAG_COMMON(1,7,0)
},
{
3,
MR_TAG_COMMON(1,7,1)
},
{
1,
MR_TAG_COMMON(3,8,0)
},
{
2,
MR_TAG_COMMON(3,8,0)
},
{
4,
MR_TAG_COMMON(1,7,0)
},
{
5,
MR_TAG_COMMON(1,7,0)
},
{
6,
MR_TAG_COMMON(3,9,0)
},
{
7,
MR_TAG_COMMON(1,7,0)
},
{
8,
MR_TAG_COMMON(1,7,0)
},
{
9,
MR_TAG_COMMON(1,7,0)
},
};

static const MR_EnumFunctorDesc mercury_data_mdprof_test__enum_functor_desc_option_0_0 = {
	"canonical_clique",
	0
};

static const MR_EnumFunctorDesc mercury_data_mdprof_test__enum_functor_desc_option_0_1 = {
	"dump",
	1
};

static const MR_EnumFunctorDesc mercury_data_mdprof_test__enum_functor_desc_option_0_2 = {
	"dump_options",
	2
};

static const MR_EnumFunctorDesc mercury_data_mdprof_test__enum_functor_desc_option_0_3 = {
	"compress",
	3
};

static const MR_EnumFunctorDesc mercury_data_mdprof_test__enum_functor_desc_option_0_4 = {
	"help",
	4
};

static const MR_EnumFunctorDesc mercury_data_mdprof_test__enum_functor_desc_option_0_5 = {
	"test",
	5
};

static const MR_EnumFunctorDesc mercury_data_mdprof_test__enum_functor_desc_option_0_6 = {
	"test_dir",
	6
};

static const MR_EnumFunctorDesc mercury_data_mdprof_test__enum_functor_desc_option_0_7 = {
	"verbose",
	7
};

static const MR_EnumFunctorDesc mercury_data_mdprof_test__enum_functor_desc_option_0_8 = {
	"version",
	8
};

static const MR_EnumFunctorDesc mercury_data_mdprof_test__enum_functor_desc_option_0_9 = {
	"verify_profile",
	9
};

const MR_EnumFunctorDescPtr mercury_data_mdprof_test__enum_value_ordered_option_0[] = {
	&mercury_data_mdprof_test__enum_functor_desc_option_0_0,
	&mercury_data_mdprof_test__enum_functor_desc_option_0_1,
	&mercury_data_mdprof_test__enum_functor_desc_option_0_2,
	&mercury_data_mdprof_test__enum_functor_desc_option_0_3,
	&mercury_data_mdprof_test__enum_functor_desc_option_0_4,
	&mercury_data_mdprof_test__enum_functor_desc_option_0_5,
	&mercury_data_mdprof_test__enum_functor_desc_option_0_6,
	&mercury_data_mdprof_test__enum_functor_desc_option_0_7,
	&mercury_data_mdprof_test__enum_functor_desc_option_0_8,
	&mercury_data_mdprof_test__enum_functor_desc_option_0_9
};

const MR_EnumFunctorDescPtr mercury_data_mdprof_test__enum_name_ordered_option_0[] = {
	&mercury_data_mdprof_test__enum_functor_desc_option_0_0,
	&mercury_data_mdprof_test__enum_functor_desc_option_0_3,
	&mercury_data_mdprof_test__enum_functor_desc_option_0_1,
	&mercury_data_mdprof_test__enum_functor_desc_option_0_2,
	&mercury_data_mdprof_test__enum_functor_desc_option_0_4,
	&mercury_data_mdprof_test__enum_functor_desc_option_0_5,
	&mercury_data_mdprof_test__enum_functor_desc_option_0_6,
	&mercury_data_mdprof_test__enum_functor_desc_option_0_7,
	&mercury_data_mdprof_test__enum_functor_desc_option_0_9,
	&mercury_data_mdprof_test__enum_functor_desc_option_0_8
};

const MR_Integer mercury_data_mdprof_test__functor_number_map_option_0[] = {
	0,
	2,
	3,
	1,
	4,
	5,
	6,
	7,
	9,
	8 };
	
const MR_TypeCtorInfo_Struct mercury_data_mdprof_test__type_ctor_info_option_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_ENUM,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___mdprof_test__option_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___mdprof_test__option_0_0)),
	"mdprof_test",
	"option",
	{ (void *)mercury_data_mdprof_test__enum_name_ordered_option_0 },
	{ (void *)mercury_data_mdprof_test__enum_value_ordered_option_0 },
	10,
	4,
	mercury_data_mdprof_test__functor_number_map_option_0
};

static const MR_FA_TypeInfo_Struct2 mercury_data_tree234__ti_tree234_2mdprof_test__type_ctor_info_option_0getopt__type_ctor_info_option_data_0 = {
	&mercury_data_tree234__type_ctor_info_tree234_2,
{	(MR_TypeInfo) &mercury_data_mdprof_test__type_ctor_info_option_0,
	(MR_TypeInfo) &mercury_data_getopt__type_ctor_info_option_data_0
}};

const MR_TypeCtorInfo_Struct mercury_data_mdprof_test__type_ctor_info_option_table_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_EQUIV_GROUND,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___mdprof_test__option_table_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___mdprof_test__option_table_0_0)),
	"mdprof_test",
	"option_table",
	{ 0 },
	{ (void *)&mercury_data_tree234__ti_tree234_2mdprof_test__type_ctor_info_option_0getopt__type_ctor_info_option_data_0 },
	-1,
	0,
	NULL
};

static const MR_EnumFunctorDesc mercury_data_mdprof_test__enum_functor_desc_options_0_0 = {
	"options",
	0
};

const MR_EnumFunctorDescPtr mercury_data_mdprof_test__enum_value_ordered_options_0[] = {
	&mercury_data_mdprof_test__enum_functor_desc_options_0_0
};

const MR_EnumFunctorDescPtr mercury_data_mdprof_test__enum_name_ordered_options_0[] = {
	&mercury_data_mdprof_test__enum_functor_desc_options_0_0
};

const MR_Integer mercury_data_mdprof_test__functor_number_map_options_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_mdprof_test__type_ctor_info_options_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_DUMMY,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___mdprof_test__options_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___mdprof_test__options_0_0)),
	"mdprof_test",
	"options",
	{ (void *)mercury_data_mdprof_test__enum_name_ordered_options_0 },
	{ (void *)mercury_data_mdprof_test__enum_value_ordered_options_0 },
	1,
	4,
	mercury_data_mdprof_test__functor_number_map_options_0
};


static const MR_UserClosureId
mercury_data__closure_layout__main_2_0_3 = {
{
MR_PREDICATE,
"mdprof_test",
"mdprof_test",
"defaults",
2,
0
},
"mdprof_test",
"mdprof_test.m",
58,
"c6;"
};

static const MR_UserClosureId
mercury_data__closure_layout__main_2_0_2 = {
{
MR_PREDICATE,
"mdprof_test",
"mdprof_test",
"long",
2,
0
},
"mdprof_test",
"mdprof_test.m",
58,
"c5;"
};

static const MR_UserClosureId
mercury_data__closure_layout__main_2_0_1 = {
{
MR_PREDICATE,
"mdprof_test",
"mdprof_test",
"short",
2,
0
},
"mdprof_test",
"mdprof_test.m",
58,
"c4;"
};

static const MR_UserClosureId
mercury_data__closure_layout__mdprof_test__verify_profile_5_0_2 = {
{
MR_PREDICATE,
"mdprof_test",
"mdprof_test",
"verify_profile_2",
5,
0
},
"mdprof_test",
"mdprof_test.m",
164,
"d1;c7;"
};

static const MR_UserClosureId
mercury_data__closure_layout__mdprof_test__verify_profile_5_0_1 = {
{
MR_PREDICATE,
"mdprof_test",
"mdprof_test",
"verify_profile_2",
5,
0
},
"mdprof_test",
"mdprof_test.m",
164,
"d1;c7;"
};


MR_decl_entry(fn__f_115_116_114_105_110_103_95_95_43_43_2_0);
MR_decl_entry(io__write_string_3_0);

MR_BEGIN_MODULE(mdprof_test_module0)
	MR_init_entry1(mdprof_test__write_help_message_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdprof_test__write_help_message_3_0);
	MR_init_label3(mdprof_test__write_help_message_3_0,2,3,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'write_help_message'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mdprof_test__write_help_message_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_r2 = (MR_Word) MR_string_const(" [<options>] <filename>\n", 24);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		mdprof_test__write_help_message_3_0_i2);
MR_def_label(mdprof_test__write_help_message_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("Usage: ", 7);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		mdprof_test__write_help_message_3_0_i3);
MR_def_label(mdprof_test__write_help_message_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__write_string_3_0,
		mdprof_test__write_help_message_3_0_i4);
MR_def_label(mdprof_test__write_help_message_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("<filename> must name a deep profiling data file.\nYou should specify one of the following options:\n--help      Generate this help message.\n--version   Report the program\'s version number.\n--verbose   Generate progress messages during startup.\n--test      Test the deep profiler, generating all\n\t\t\tpossible web pages of the popular types.\n--verify-profile\n\t\t\tVerify that <filename> is a well-formed deep profiling\n\t\t\tdata file.\n\nYou may also specify the following options:.\n--test-dir <dirname>\n\t\t\tPut the generate" "d web pages into <dirname>.\n--no-compress\n\t\t\tDon\'t compress the resulting files, this speeds the test.", 614);
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_np_tailcall_ent(io__write_string_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(query__try_exec_6_0);
MR_decl_entry(fn__f_105_110_116_95_95_47_47_2_0);
MR_decl_entry(getopt__lookup_string_option_3_0);
MR_decl_entry(string__format_3_0);
MR_decl_entry(fn__int__rem_2_0);
MR_decl_entry(io__call_system_4_0);
MR_decl_entry(io__open_output_4_0);
MR_decl_entry(io__write_string_4_0);
MR_decl_entry(io__close_output_3_0);
MR_decl_entry(getopt__lookup_bool_option_3_0);
MR_decl_entry(io__error_message_2_0);
MR_decl_entry(require__error_1_0);

MR_BEGIN_MODULE(mdprof_test_module1)
	MR_init_entry1(mdprof_test__test_procrep_coverages_7_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdprof_test__test_procrep_coverages_7_0);
	MR_init_label10(mdprof_test__test_procrep_coverages_7_0,61,4,5,6,13,15,17,18,19,20)
	MR_init_label10(mdprof_test__test_procrep_coverages_7_0,14,32,33,36,37,38,50,40,41,35)
	MR_init_label3(mdprof_test__test_procrep_coverages_7_0,43,63,64)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'test_procrep_coverages'/7 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mdprof_test__test_procrep_coverages_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(10);
	MR_sv(10) = (MR_Word) MR_succip;
MR_def_label(mdprof_test__test_procrep_coverages_7_0,61)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) MR_r1 > (MR_Integer) MR_r2)) {
		MR_GOTO_LAB(mdprof_test__test_procrep_coverages_7_0_i64);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 5;
	MR_tempr2 = MR_r1;
	MR_tfield(3, MR_tempr1, 1) = MR_tempr2;
	MR_sv(1) = MR_tempr2;
	MR_sv(2) = MR_r2;
	MR_tempr3 = MR_r3;
	MR_sv(3) = MR_tempr3;
	MR_tempr4 = MR_r4;
	MR_sv(4) = MR_tempr4;
	MR_sv(5) = MR_r5;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_tempr3;
	MR_r3 = MR_tempr4;
	}
	MR_np_call_localret_ent(query__try_exec_6_0,
		mdprof_test__test_procrep_coverages_7_0_i4);
MR_def_label(mdprof_test__test_procrep_coverages_7_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = ((MR_Integer) MR_sv(1) - (MR_Integer) 1);
	MR_r2 = (MR_Integer) 1000;
	MR_np_call_localret_ent(fn__f_105_110_116_95_95_47_47_2_0,
		mdprof_test__test_procrep_coverages_7_0_i5);
MR_def_label(mdprof_test__test_procrep_coverages_7_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_sv(9) = (MR_Word) MR_CTOR0_ADDR(mdprof_test, option);
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(5);
	MR_r3 = (MR_Integer) 6;
	MR_np_call_localret_ent(getopt__lookup_string_option_3_0,
		mdprof_test__test_procrep_coverages_7_0_i6);
MR_def_label(mdprof_test__test_procrep_coverages_7_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr1, 0) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(7);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr3, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = (MR_Word) MR_TAG_COMMON(2,0,0);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr3;
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr4;
	MR_tfield(1, MR_tempr4, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr4, 1) = MR_tempr2;
	MR_sv(8) = (MR_Word) MR_TAG_COMMON(2,0,0);
	MR_r1 = (MR_Word) MR_string_const("%s/%s_%04d", 10);
	}
	MR_np_call_localret_ent(string__format_3_0,
		mdprof_test__test_procrep_coverages_7_0_i13);
MR_def_label(mdprof_test__test_procrep_coverages_7_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_r1 = ((MR_Integer) MR_sv(1) - (MR_Integer) 1);
	MR_r2 = (MR_Integer) 1000;
	MR_np_call_localret_ent(fn__int__rem_2_0,
		mdprof_test__test_procrep_coverages_7_0_i15);
MR_def_label(mdprof_test__test_procrep_coverages_7_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(mdprof_test__test_procrep_coverages_7_0_i14);
	}
	MR_r1 = (MR_Word) MR_string_const(" || mkdir -p ", 13);
	MR_r2 = MR_sv(7);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		mdprof_test__test_procrep_coverages_7_0_i17);
MR_def_label(mdprof_test__test_procrep_coverages_7_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		mdprof_test__test_procrep_coverages_7_0_i18);
MR_def_label(mdprof_test__test_procrep_coverages_7_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("test -d ", 8);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		mdprof_test__test_procrep_coverages_7_0_i19);
MR_def_label(mdprof_test__test_procrep_coverages_7_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__call_system_4_0,
		mdprof_test__test_procrep_coverages_7_0_i20);
MR_def_label(mdprof_test__test_procrep_coverages_7_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr1, 0) = MR_sv(7);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(1);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr3, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr4, 0) = MR_sv(8);
	MR_tfield(1, MR_tempr4, 1) = MR_tempr3;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr3, 1) = MR_tempr4;
	MR_r2 = MR_tempr3;
	MR_r1 = (MR_Word) MR_string_const("%s/%s_%06d.html", 15);
	}
	MR_np_call_localret_ent(string__format_3_0,
		mdprof_test__test_procrep_coverages_7_0_i32);
MR_def_label(mdprof_test__test_procrep_coverages_7_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr1, 0) = MR_sv(7);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(1);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr3, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr4, 0) = MR_sv(8);
	MR_tfield(1, MR_tempr4, 1) = MR_tempr3;
	MR_tag_alloc_heap(MR_tempr5, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr5;
	MR_tfield(1, MR_tempr5, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr5, 1) = MR_tempr4;
	MR_r1 = (MR_Word) MR_string_const("%s/%s_%06d.html", 15);
	}
	MR_np_call_localret_ent(string__format_3_0,
		mdprof_test__test_procrep_coverages_7_0_i32);
MR_def_label(mdprof_test__test_procrep_coverages_7_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_np_call_localret_ent(io__open_output_4_0,
		mdprof_test__test_procrep_coverages_7_0_i33);
MR_def_label(mdprof_test__test_procrep_coverages_7_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,0)) {
		MR_GOTO_LAB(mdprof_test__test_procrep_coverages_7_0_i35);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(6);
	MR_sv(6) = MR_tfield(0, MR_r1, 0);
	MR_r1 = MR_sv(6);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(io__write_string_4_0,
		mdprof_test__test_procrep_coverages_7_0_i36);
MR_def_label(mdprof_test__test_procrep_coverages_7_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(6);
	MR_np_call_localret_ent(io__close_output_3_0,
		mdprof_test__test_procrep_coverages_7_0_i37);
MR_def_label(mdprof_test__test_procrep_coverages_7_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(5);
	MR_r3 = (MR_Integer) 3;
	MR_np_call_localret_ent(getopt__lookup_bool_option_3_0,
		mdprof_test__test_procrep_coverages_7_0_i38);
MR_def_label(mdprof_test__test_procrep_coverages_7_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(mdprof_test__test_procrep_coverages_7_0_i40);
	}
MR_def_label(mdprof_test__test_procrep_coverages_7_0,50)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(4);
	MR_r5 = MR_sv(5);
	MR_r1 = ((MR_Integer) MR_sv(1) + (MR_Integer) 1);
	MR_succip_word = MR_sv(10);
	MR_GOTO_LAB(mdprof_test__test_procrep_coverages_7_0_i61);
MR_def_label(mdprof_test__test_procrep_coverages_7_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("gzip ", 5);
	MR_r2 = MR_sv(7);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		mdprof_test__test_procrep_coverages_7_0_i41);
MR_def_label(mdprof_test__test_procrep_coverages_7_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__call_system_4_0,
		mdprof_test__test_procrep_coverages_7_0_i50);
MR_def_label(mdprof_test__test_procrep_coverages_7_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(1, MR_r1, 0);
	MR_np_call_localret_ent(io__error_message_2_0,
		mdprof_test__test_procrep_coverages_7_0_i43);
MR_def_label(mdprof_test__test_procrep_coverages_7_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(require__error_1_0,
		mdprof_test__test_procrep_coverages_7_0_i63);
MR_def_label(mdprof_test__test_procrep_coverages_7_0,63)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(10);
	MR_GOTO_LAB(mdprof_test__test_procrep_coverages_7_0_i61);
MR_def_label(mdprof_test__test_procrep_coverages_7_0,64)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(10);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

extern const MR_TypeCtorInfo_Struct mercury_data_profile__type_ctor_info_proc_static_0;
MR_decl_entry(array__max_2_0);

MR_BEGIN_MODULE(mdprof_test_module2)
	MR_init_entry1(mdprof_test__test_server_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdprof_test__test_server_5_0);
	MR_init_label6(mdprof_test__test_server_5_0,2,3,4,5,6,7)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'test_server'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mdprof_test__test_server_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(3) = MR_tempr1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdprof_test, option);
	MR_r2 = MR_tempr1;
	MR_r3 = (MR_Integer) 6;
	}
	MR_np_call_localret_ent(getopt__lookup_string_option_3_0,
		mdprof_test__test_server_5_0_i2);
MR_def_label(mdprof_test__test_server_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const(" || mkdir -p ", 13);
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		mdprof_test__test_server_5_0_i3);
MR_def_label(mdprof_test__test_server_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		mdprof_test__test_server_5_0_i4);
MR_def_label(mdprof_test__test_server_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("test -d ", 8);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		mdprof_test__test_server_5_0_i5);
MR_def_label(mdprof_test__test_server_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__call_system_4_0,
		mdprof_test__test_server_5_0_i6);
MR_def_label(mdprof_test__test_server_5_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(profile, proc_static);
	MR_r2 = MR_tfield(0, MR_sv(2), 8);
	MR_np_call_localret_ent(array__max_2_0,
		mdprof_test__test_server_5_0_i7);
MR_def_label(mdprof_test__test_server_5_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 1;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_r5 = MR_sv(3);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(mdprof_test__test_procrep_coverages_7_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(getopt__lookup_accumulating_option_3_0);
MR_decl_entry(dump__dump_array_options_to_dump_options_2_0);
MR_decl_entry(conf__server_name_port_3_0);
MR_decl_entry(conf__script_name_3_0);
MR_decl_entry(io__stdout_stream_3_0);
MR_decl_entry(startup__read_and_startup_10_0);
MR_decl_entry(io__set_exit_status_3_0);
MR_decl_entry(fn__query__default_preferences_1_0);

MR_BEGIN_MODULE(mdprof_test_module3)
	MR_init_entry1(mdprof_test__main2_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdprof_test__main2_5_0);
	MR_init_label10(mdprof_test__main2_5_0,5,6,7,8,9,10,11,13,14,12)
	MR_init_label10(mdprof_test__main2_5_0,16,19,20,21,22,23,24,18,26,29)
	MR_init_label3(mdprof_test__main2_5_0,2,31,33)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'main2'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mdprof_test__main2_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(10);
	MR_sv(10) = (MR_Word) MR_succip;
	if (MR_LTAGS_TEST(MR_r2,0,0)) {
		MR_GOTO_LAB(mdprof_test__main2_5_0_i2);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr2 = MR_r2;
	MR_tempr1 = MR_tfield(1, MR_tempr2, 1);
	if (MR_LTAGS_TESTR(MR_tempr1,0,0)) {
		MR_GOTO_LAB(mdprof_test__main2_5_0_i2);
	}
	MR_sv(1) = MR_r1;
	MR_tempr3 = MR_r3;
	MR_sv(2) = MR_tempr3;
	MR_sv(3) = MR_tfield(1, MR_tempr2, 0);
	MR_sv(9) = (MR_Word) MR_CTOR0_ADDR(mdprof_test, option);
	MR_r1 = MR_sv(9);
	MR_r2 = MR_tempr3;
	MR_r3 = (MR_Integer) 0;
	}
	MR_np_call_localret_ent(getopt__lookup_bool_option_3_0,
		mdprof_test__main2_5_0_i5);
MR_def_label(mdprof_test__main2_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(2);
	MR_r3 = (MR_Integer) 7;
	MR_np_call_localret_ent(getopt__lookup_bool_option_3_0,
		mdprof_test__main2_5_0_i6);
MR_def_label(mdprof_test__main2_5_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(2);
	MR_r3 = (MR_Integer) 1;
	MR_np_call_localret_ent(getopt__lookup_accumulating_option_3_0,
		mdprof_test__main2_5_0_i7);
MR_def_label(mdprof_test__main2_5_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(2);
	MR_r3 = (MR_Integer) 2;
	MR_np_call_localret_ent(getopt__lookup_accumulating_option_3_0,
		mdprof_test__main2_5_0_i8);
MR_def_label(mdprof_test__main2_5_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(dump__dump_array_options_to_dump_options_2_0,
		mdprof_test__main2_5_0_i9);
MR_def_label(mdprof_test__main2_5_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_np_call_localret_ent(conf__server_name_port_3_0,
		mdprof_test__main2_5_0_i10);
MR_def_label(mdprof_test__main2_5_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_np_call_localret_ent(conf__script_name_3_0,
		mdprof_test__main2_5_0_i11);
MR_def_label(mdprof_test__main2_5_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(5),0)) {
		MR_GOTO_LAB(mdprof_test__main2_5_0_i13);
	}
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(4);
	MR_r6 = MR_sv(6);
	MR_r7 = MR_sv(7);
	MR_r9 = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r2 = MR_r9;
	MR_r5 = (MR_Word) MR_tbmkword(0, 0);
	MR_GOTO_LAB(mdprof_test__main2_5_0_i12);
MR_def_label(mdprof_test__main2_5_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_np_call_localret_ent(io__stdout_stream_3_0,
		mdprof_test__main2_5_0_i14);
MR_def_label(mdprof_test__main2_5_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r5, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r5, 0) = MR_r1;
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(4);
	MR_r6 = MR_sv(6);
	MR_r7 = MR_sv(7);
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(5);
MR_def_label(mdprof_test__main2_5_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r3;
	MR_np_call_localret_ent(startup__read_and_startup_10_0,
		mdprof_test__main2_5_0_i16);
MR_def_label(mdprof_test__main2_5_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,1)) {
		MR_GOTO_LAB(mdprof_test__main2_5_0_i18);
	}
	MR_sv(2) = MR_tfield(1, MR_r1, 0);
	MR_r1 = (MR_Integer) 1;
	MR_np_call_localret_ent(io__set_exit_status_3_0,
		mdprof_test__main2_5_0_i19);
MR_def_label(mdprof_test__main2_5_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_r2 = (MR_Word) MR_string_const("\n", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		mdprof_test__main2_5_0_i20);
MR_def_label(mdprof_test__main2_5_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const(": ", 2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		mdprof_test__main2_5_0_i21);
MR_def_label(mdprof_test__main2_5_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		mdprof_test__main2_5_0_i22);
MR_def_label(mdprof_test__main2_5_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const(": error reading ", 16);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		mdprof_test__main2_5_0_i23);
MR_def_label(mdprof_test__main2_5_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		mdprof_test__main2_5_0_i24);
MR_def_label(mdprof_test__main2_5_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(10);
	MR_decr_sp(10);
	MR_np_tailcall_ent(io__write_string_3_0);
MR_def_label(mdprof_test__main2_5_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_tfield(0, MR_r1, 0);
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(2);
	MR_r3 = (MR_Integer) 5;
	MR_np_call_localret_ent(getopt__lookup_bool_option_3_0,
		mdprof_test__main2_5_0_i26);
MR_def_label(mdprof_test__main2_5_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_EQ(MR_r1,0)) {
		MR_GOTO_LAB(mdprof_test__main2_5_0_i33);
	}
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(fn__query__default_preferences_1_0,
		mdprof_test__main2_5_0_i29);
MR_def_label(mdprof_test__main2_5_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_succip_word = MR_sv(10);
	MR_decr_sp(10);
	MR_np_tailcall_ent(mdprof_test__test_server_5_0);
MR_def_label(mdprof_test__main2_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Integer) 1;
	MR_np_call_localret_ent(io__set_exit_status_3_0,
		mdprof_test__main2_5_0_i31);
MR_def_label(mdprof_test__main2_5_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_succip_word = MR_sv(10);
	MR_decr_sp(10);
	MR_np_tailcall_ent(mdprof_test__write_help_message_3_0);
MR_def_label(mdprof_test__main2_5_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(10);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_string_0;
extern const MR_TypeCtorInfo_Struct mercury_data_io__type_ctor_info_state_0;
MR_decl_entry(list__foldl_4_2);

MR_BEGIN_MODULE(mdprof_test_module4)
	MR_init_entry1(mdprof_test__verify_profile_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdprof_test__verify_profile_5_0);
	MR_init_label1(mdprof_test__verify_profile_5_0,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'verify_profile'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mdprof_test__verify_profile_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(mdprof_test__verify_profile_5_0_i3);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(3,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(mdprof_test__verify_profile_2_5_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr1, 3) = MR_r1;
	MR_tfield(0, MR_tempr1, 4) = MR_r3;
	MR_r4 = (MR_Word) MR_TAG_COMMON(1,1,0);
	MR_r3 = MR_tempr1;
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = (MR_Word) MR_IO_CTOR_ADDR;
	MR_np_tailcall_ent(list__foldl_4_2);
	}
MR_def_label(mdprof_test__verify_profile_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(3,1);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(mdprof_test__verify_profile_2_5_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr1, 3) = MR_r1;
	MR_tfield(0, MR_tempr1, 4) = MR_r3;
	MR_r4 = MR_r2;
	MR_r3 = MR_tempr1;
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = (MR_Word) MR_IO_CTOR_ADDR;
	MR_np_tailcall_ent(list__foldl_4_2);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(library__version_1_0);
MR_decl_entry(io__nl_2_0);

MR_BEGIN_MODULE(mdprof_test_module5)
	MR_init_entry1(mdprof_test__write_version_message_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdprof_test__write_version_message_3_0);
	MR_init_label5(mdprof_test__write_version_message_3_0,2,3,4,5,6)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'write_version_message'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mdprof_test__write_version_message_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(library__version_1_0,
		mdprof_test__write_version_message_3_0_i2);
MR_def_label(mdprof_test__write_version_message_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(io__write_string_3_0,
		mdprof_test__write_version_message_3_0_i3);
MR_def_label(mdprof_test__write_version_message_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(": Mercury deep profiler", 23);
	MR_np_call_localret_ent(io__write_string_3_0,
		mdprof_test__write_version_message_3_0_i4);
MR_def_label(mdprof_test__write_version_message_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__nl_2_0,
		mdprof_test__write_version_message_3_0_i5);
MR_def_label(mdprof_test__write_version_message_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(io__write_string_3_0,
		mdprof_test__write_version_message_3_0_i6);
MR_def_label(mdprof_test__write_version_message_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(io__nl_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(io__progname_base_4_0);
MR_decl_entry(io__command_line_arguments_3_0);
MR_decl_entry(getopt__process_options_4_0);

MR_BEGIN_MODULE(mdprof_test_module6)
	MR_init_entry1(main_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__main_2_0);
	MR_init_label10(main_2_0,2,3,8,11,12,13,14,10,16,17)
	MR_init_label10(main_2_0,18,20,21,22,23,24,19,27,25,32)
	MR_init_label1(main_2_0,9)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'main'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__main_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_r1 = (MR_Word) MR_string_const("mdprof_test", 11);
	MR_np_call_localret_ent(io__progname_base_4_0,
		main_2_0_i2);
MR_def_label(main_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(io__command_line_arguments_3_0,
		main_2_0_i3);
MR_def_label(main_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = (MR_Word) MR_CTOR0_ADDR(mdprof_test, option);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = (MR_Word) MR_TAG_COMMON(2,2,1);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(getopt__process_options_4_0,
		main_2_0_i8);
MR_def_label(main_2_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r2,1)) {
		MR_GOTO_LAB(main_2_0_i10);
	}
	MR_sv(2) = MR_tfield(1, MR_r2, 0);
	MR_r1 = (MR_Integer) 1;
	MR_np_call_localret_ent(io__set_exit_status_3_0,
		main_2_0_i11);
MR_def_label(main_2_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_r2 = (MR_Word) MR_string_const("\n", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		main_2_0_i12);
MR_def_label(main_2_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const(": error parsing options: ", 25);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		main_2_0_i13);
MR_def_label(main_2_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		main_2_0_i14);
MR_def_label(main_2_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(io__write_string_3_0);
MR_def_label(main_2_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_sv(3) = MR_tfield(0, MR_r2, 0);
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(3);
	MR_r3 = (MR_Integer) 4;
	MR_np_call_localret_ent(getopt__lookup_bool_option_3_0,
		main_2_0_i16);
MR_def_label(main_2_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(3);
	MR_r3 = (MR_Integer) 8;
	MR_np_call_localret_ent(getopt__lookup_bool_option_3_0,
		main_2_0_i17);
MR_def_label(main_2_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdprof_test, option);
	MR_r2 = MR_sv(3);
	MR_r3 = (MR_Integer) 9;
	MR_np_call_localret_ent(getopt__lookup_bool_option_3_0,
		main_2_0_i18);
MR_def_label(main_2_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(4),0)) {
		MR_GOTO_LAB(main_2_0_i20);
	}
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_GOTO_LAB(main_2_0_i19);
MR_def_label(main_2_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = (MR_Word) MR_string_const(" [<options>] <filename>\n", 24);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		main_2_0_i21);
MR_def_label(main_2_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("Usage: ", 7);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		main_2_0_i22);
MR_def_label(main_2_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__write_string_3_0,
		main_2_0_i23);
MR_def_label(main_2_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("<filename> must name a deep profiling data file.\nYou should specify one of the following options:\n--help      Generate this help message.\n--version   Report the program\'s version number.\n--verbose   Generate progress messages during startup.\n--test      Test the deep profiler, generating all\n\t\t\tpossible web pages of the popular types.\n--verify-profile\n\t\t\tVerify that <filename> is a well-formed deep profiling\n\t\t\tdata file.\n\nYou may also specify the following options:.\n--test-dir <dirname>\n\t\t\tPut the generate" "d web pages into <dirname>.\n--no-compress\n\t\t\tDon\'t compress the resulting files, this speeds the test.", 614);
	MR_np_call_localret_ent(io__write_string_3_0,
		main_2_0_i24);
MR_def_label(main_2_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
MR_def_label(main_2_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_EQ(MR_sv(5),0)) {
		MR_GOTO_LAB(main_2_0_i25);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_np_call_localret_ent(mdprof_test__write_version_message_3_0,
		main_2_0_i27);
MR_def_label(main_2_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
MR_def_label(main_2_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(4),0)) {
		MR_GOTO_LAB(main_2_0_i9);
	}
	if (MR_INT_NE(MR_sv(5),0)) {
		MR_GOTO_LAB(main_2_0_i9);
	}
	if (MR_INT_NE(MR_sv(6),0)) {
		MR_GOTO_LAB(main_2_0_i32);
	}
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(mdprof_test__main2_5_0);
MR_def_label(main_2_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(mdprof_test__verify_profile_5_0);
MR_def_label(main_2_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(7);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__dump__default_dump_options_0_0);

MR_BEGIN_MODULE(mdprof_test_module7)
	MR_init_entry1(mdprof_test__verify_profile_2_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdprof_test__verify_profile_2_5_0);
	MR_init_label10(mdprof_test__verify_profile_2_5_0,2,3,4,5,8,9,10,11,12,13)
	MR_init_label1(mdprof_test__verify_profile_2_5_0,6)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'verify_profile_2'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mdprof_test__verify_profile_2_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r3;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdprof_test, option);
	MR_r3 = (MR_Integer) 0;
	MR_np_call_localret_ent(getopt__lookup_bool_option_3_0,
		mdprof_test__verify_profile_2_5_0_i2);
MR_def_label(mdprof_test__verify_profile_2_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_np_call_localret_ent(conf__script_name_3_0,
		mdprof_test__verify_profile_2_5_0_i3);
MR_def_label(mdprof_test__verify_profile_2_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_np_call_localret_ent(fn__dump__default_dump_options_0_0,
		mdprof_test__verify_profile_2_5_0_i4);
MR_def_label(mdprof_test__verify_profile_2_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("dummy_server", 12);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_r5 = (MR_Word) MR_tbmkword(0, 0);
	MR_r6 = (MR_Word) MR_tbmkword(0, 0);
	MR_r7 = MR_tempr1;
	}
	MR_np_call_localret_ent(startup__read_and_startup_10_0,
		mdprof_test__verify_profile_2_5_0_i5);
MR_def_label(mdprof_test__verify_profile_2_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,1)) {
		MR_GOTO_LAB(mdprof_test__verify_profile_2_5_0_i6);
	}
	MR_sv(3) = MR_tfield(1, MR_r1, 0);
	MR_r1 = (MR_Integer) 1;
	MR_np_call_localret_ent(io__set_exit_status_3_0,
		mdprof_test__verify_profile_2_5_0_i8);
MR_def_label(mdprof_test__verify_profile_2_5_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_r2 = (MR_Word) MR_string_const("\n", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		mdprof_test__verify_profile_2_5_0_i9);
MR_def_label(mdprof_test__verify_profile_2_5_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const(": ", 2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		mdprof_test__verify_profile_2_5_0_i10);
MR_def_label(mdprof_test__verify_profile_2_5_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		mdprof_test__verify_profile_2_5_0_i11);
MR_def_label(mdprof_test__verify_profile_2_5_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const(": error reading ", 16);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		mdprof_test__verify_profile_2_5_0_i12);
MR_def_label(mdprof_test__verify_profile_2_5_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		mdprof_test__verify_profile_2_5_0_i13);
MR_def_label(mdprof_test__verify_profile_2_5_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(io__write_string_3_0);
MR_def_label(mdprof_test__verify_profile_2_5_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdprof_test_module8)
	MR_init_entry1(mdprof_test__short_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdprof_test__short_2_0);
	MR_init_label5(mdprof_test__short_2_0,3,4,5,6,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'short'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mdprof_test__short_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,68)) {
		MR_GOTO_LAB(mdprof_test__short_2_0_i3);
	}
	MR_r2 = (MR_Integer) 2;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(mdprof_test__short_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,84)) {
		MR_GOTO_LAB(mdprof_test__short_2_0_i4);
	}
	MR_r2 = (MR_Integer) 5;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(mdprof_test__short_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,99)) {
		MR_GOTO_LAB(mdprof_test__short_2_0_i5);
	}
	MR_r2 = (MR_Integer) 0;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(mdprof_test__short_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,100)) {
		MR_GOTO_LAB(mdprof_test__short_2_0_i6);
	}
	MR_r2 = (MR_Integer) 1;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(mdprof_test__short_2_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,118)) {
		MR_GOTO_LAB(mdprof_test__short_2_0_i1);
	}
	MR_r2 = (MR_Integer) 7;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(mdprof_test__short_2_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdprof_test_module9)
	MR_init_entry1(mdprof_test__long_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdprof_test__long_2_0);
	MR_init_label10(mdprof_test__long_2_0,3,17,5,6,7,8,9,10,11,12)
	MR_init_label3(mdprof_test__long_2_0,13,14,15)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'long'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mdprof_test__long_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = (MR_hash_string((MR_String) MR_r1) & (MR_Integer) 31);
MR_def_label(mdprof_test__long_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	while (1) {
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = ((MR_Integer) MR_r3 * (MR_Integer) 2);
	MR_tempr2 = ((MR_Word *) &mercury_vector_common_6_0)[(MR_Integer) MR_tempr1];
	if (((MR_Integer) MR_tempr2 && (strcmp((char *) (MR_Word *) MR_tempr2, (char *) (MR_Word *) MR_r1) == 0))) {
		MR_GOTO_LAB(mdprof_test__long_2_0_i5);
	}
	MR_r3 = ((MR_Word *) &mercury_vector_common_6_0)[((MR_Integer) MR_tempr1 + (MR_Integer) 1)];
	if (MR_INT_GE(MR_r3,0))
		continue;
	}
	break; } /* end while */
MR_def_label(mdprof_test__long_2_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_proceed();
MR_def_label(mdprof_test__long_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_r3,
		MR_LABEL_AP(mdprof_test__long_2_0_i17) MR_AND
		MR_LABEL_AP(mdprof_test__long_2_0_i8) MR_AND
		MR_LABEL_AP(mdprof_test__long_2_0_i12) MR_AND
		MR_LABEL_AP(mdprof_test__long_2_0_i17) MR_AND
		MR_LABEL_AP(mdprof_test__long_2_0_i17) MR_AND
		MR_LABEL_AP(mdprof_test__long_2_0_i17) MR_AND
		MR_LABEL_AP(mdprof_test__long_2_0_i17) MR_AND
		MR_LABEL_AP(mdprof_test__long_2_0_i17) MR_AND
		MR_LABEL_AP(mdprof_test__long_2_0_i13) MR_AND
		MR_LABEL_AP(mdprof_test__long_2_0_i17) MR_AND
		MR_LABEL_AP(mdprof_test__long_2_0_i17) MR_AND
		MR_LABEL_AP(mdprof_test__long_2_0_i17) MR_AND
		MR_LABEL_AP(mdprof_test__long_2_0_i9) MR_AND
		MR_LABEL_AP(mdprof_test__long_2_0_i17) MR_AND
		MR_LABEL_AP(mdprof_test__long_2_0_i14) MR_AND
		MR_LABEL_AP(mdprof_test__long_2_0_i17) MR_AND
		MR_LABEL_AP(mdprof_test__long_2_0_i15) MR_AND
		MR_LABEL_AP(mdprof_test__long_2_0_i17) MR_AND
		MR_LABEL_AP(mdprof_test__long_2_0_i10) MR_AND
		MR_LABEL_AP(mdprof_test__long_2_0_i17) MR_AND
		MR_LABEL_AP(mdprof_test__long_2_0_i17) MR_AND
		MR_LABEL_AP(mdprof_test__long_2_0_i11) MR_AND
		MR_LABEL_AP(mdprof_test__long_2_0_i17) MR_AND
		MR_LABEL_AP(mdprof_test__long_2_0_i17) MR_AND
		MR_LABEL_AP(mdprof_test__long_2_0_i17) MR_AND
		MR_LABEL_AP(mdprof_test__long_2_0_i17) MR_AND
		MR_LABEL_AP(mdprof_test__long_2_0_i17) MR_AND
		MR_LABEL_AP(mdprof_test__long_2_0_i17) MR_AND
		MR_LABEL_AP(mdprof_test__long_2_0_i17) MR_AND
		MR_LABEL_AP(mdprof_test__long_2_0_i6) MR_AND
		MR_LABEL_AP(mdprof_test__long_2_0_i17) MR_AND
		MR_LABEL_AP(mdprof_test__long_2_0_i7));
MR_def_label(mdprof_test__long_2_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 8;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(mdprof_test__long_2_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 9;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(mdprof_test__long_2_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 7;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(mdprof_test__long_2_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 6;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(mdprof_test__long_2_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 5;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(mdprof_test__long_2_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 4;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(mdprof_test__long_2_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 2;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(mdprof_test__long_2_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 1;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(mdprof_test__long_2_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 3;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(mdprof_test__long_2_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 0;
	MR_r1 = MR_TRUE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_declare_entry(MR_do_fail);

MR_BEGIN_MODULE(mdprof_test_module10)
	MR_init_entry1(mdprof_test__defaults_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdprof_test__defaults_2_0);
	MR_init_label3(mdprof_test__defaults_2_0,12,13,14)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'defaults'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mdprof_test__defaults_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_mkframe("pred mdprof_test.defaults/2-0", 1,
		MR_LABEL_AP(mdprof_test__defaults_2_0_i12));
	{
	MR_Word MR_tempr1;
	MR_tempr1 = (MR_Word) &MR_tfield(0, (MR_Word *) &mercury_vector_common_8_0, 0);
	MR_fv(1) = (MR_Integer) 2;
	MR_r1 = MR_tfield(0, MR_tempr1, 0);
	MR_r2 = MR_tfield(0, MR_tempr1, 1);
	MR_succeed();
	}
MR_def_label(mdprof_test__defaults_2_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_fv(1);
	if (MR_INT_GE(MR_r3,18)) {
		MR_GOTO_LAB(mdprof_test__defaults_2_0_i13);
	}
	MR_fv(1) = ((MR_Integer) MR_fv(1) + (MR_Integer) 2);
	MR_GOTO_LAB(mdprof_test__defaults_2_0_i14);
MR_def_label(mdprof_test__defaults_2_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_redoip_slot_word(MR_curfr) = (MR_Word) MR_ENTRY(MR_do_fail);
MR_def_label(mdprof_test__defaults_2_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = (MR_Word) &MR_tfield(0, (MR_Word *) &mercury_vector_common_8_0, (MR_Integer) MR_r3);
	MR_r1 = MR_tfield(0, MR_tempr1, 0);
	MR_r2 = MR_tfield(0, MR_tempr1, 1);
	MR_succeed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdprof_test_module11)
	MR_init_entry1(__Unify___mdprof_test__option_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___mdprof_test__option_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___mdprof_test__option_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_r1 == MR_r2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(private_builtin__builtin_compare_int_3_0);

MR_BEGIN_MODULE(mdprof_test_module12)
	MR_init_entry1(__Compare___mdprof_test__option_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___mdprof_test__option_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___mdprof_test__option_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

extern const MR_TypeCtorInfo_Struct mercury_data_getopt__type_ctor_info_option_data_0;
MR_decl_entry(__Unify___tree234__tree234_2_0);

MR_BEGIN_MODULE(mdprof_test_module13)
	MR_init_entry1(__Unify___mdprof_test__option_table_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___mdprof_test__option_table_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___mdprof_test__option_table_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdprof_test, option);
	MR_tempr2 = MR_r2;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(getopt, option_data);
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

MR_BEGIN_MODULE(mdprof_test_module14)
	MR_init_entry1(__Compare___mdprof_test__option_table_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___mdprof_test__option_table_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___mdprof_test__option_table_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdprof_test, option);
	MR_tempr2 = MR_r2;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(getopt, option_data);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tempr2;
	MR_np_tailcall_ent(__Compare___tree234__tree234_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdprof_test_module15)
	MR_init_entry1(__Unify___mdprof_test__options_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___mdprof_test__options_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___mdprof_test__options_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(f_109_100_112_114_111_102_95_116_101_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_85_110_105_102_121_95_95_95_109_100_112_114_111_102_95_116_101_115_116_95_95_111_112_116_105_111_110_115_95_48_95_95_91_49_44_32_50_93_95_48_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdprof_test_module16)
	MR_init_entry1(__Compare___mdprof_test__options_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___mdprof_test__options_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___mdprof_test__options_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(f_109_100_112_114_111_102_95_116_101_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_67_111_109_112_97_114_101_95_95_95_109_100_112_114_111_102_95_116_101_115_116_95_95_111_112_116_105_111_110_115_95_48_95_95_91_50_44_32_51_93_95_48_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdprof_test_module17)
	MR_init_entry1(f_109_100_112_114_111_102_95_116_101_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_85_110_105_102_121_95_95_95_109_100_112_114_111_102_95_116_101_115_116_95_95_111_112_116_105_111_110_115_95_48_95_95_91_49_44_32_50_93_95_48_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__f_109_100_112_114_111_102_95_116_101_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_85_110_105_102_121_95_95_95_109_100_112_114_111_102_95_116_101_115_116_95_95_111_112_116_105_111_110_115_95_48_95_95_91_49_44_32_50_93_95_48_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__pred____Unify___mdprof_test__options_0__[1, 2]_0'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(f_109_100_112_114_111_102_95_116_101_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_85_110_105_102_121_95_95_95_109_100_112_114_111_102_95_116_101_115_116_95_95_111_112_116_105_111_110_115_95_48_95_95_91_49_44_32_50_93_95_48_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdprof_test_module18)
	MR_init_entry1(f_109_100_112_114_111_102_95_116_101_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_67_111_109_112_97_114_101_95_95_95_109_100_112_114_111_102_95_116_101_115_116_95_95_111_112_116_105_111_110_115_95_48_95_95_91_50_44_32_51_93_95_48_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__f_109_100_112_114_111_102_95_116_101_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_67_111_109_112_97_114_101_95_95_95_109_100_112_114_111_102_95_116_101_115_116_95_95_111_112_116_105_111_110_115_95_48_95_95_91_50_44_32_51_93_95_48_3_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__pred____Compare___mdprof_test__options_0__[2, 3]_0'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(f_109_100_112_114_111_102_95_116_101_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_67_111_109_112_97_114_101_95_95_95_109_100_112_114_111_102_95_116_101_115_116_95_95_111_112_116_105_111_110_115_95_48_95_95_91_50_44_32_51_93_95_48_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

static void mercury__mdprof_test_maybe_bunch_0(void)
{
	mdprof_test_module0();
	mdprof_test_module1();
	mdprof_test_module2();
	mdprof_test_module3();
	mdprof_test_module4();
	mdprof_test_module5();
	mdprof_test_module6();
	mdprof_test_module7();
	mdprof_test_module8();
	mdprof_test_module9();
	mdprof_test_module10();
	mdprof_test_module11();
	mdprof_test_module12();
	mdprof_test_module13();
	mdprof_test_module14();
	mdprof_test_module15();
	mdprof_test_module16();
	mdprof_test_module17();
	mdprof_test_module18();
}

/* suppress gcc -Wmissing-decls warnings */
void mercury__mdprof_test__init(void);
void mercury__mdprof_test__init_type_tables(void);
void mercury__mdprof_test__init_debugger(void);
#ifdef MR_DEEP_PROFILING
void mercury__mdprof_test__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp);
#endif
#ifdef MR_RECORD_TERM_SIZES
void mercury__mdprof_test__init_complexity_procs(void);
#endif

void mercury__mdprof_test__init(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	mercury__mdprof_test_maybe_bunch_0();
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_mdprof_test__type_ctor_info_option_0,
		mdprof_test__option_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_mdprof_test__type_ctor_info_option_table_0,
		mdprof_test__option_table_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_mdprof_test__type_ctor_info_options_0,
		mdprof_test__options_0_0);
	mercury__mdprof_test__init_debugger();
}

void mercury__mdprof_test__init_type_tables(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	{
		MR_register_type_ctor_info(
		&mercury_data_mdprof_test__type_ctor_info_option_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_mdprof_test__type_ctor_info_option_table_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_mdprof_test__type_ctor_info_options_0);
	}
}


void mercury__mdprof_test__init_debugger(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}

#ifdef MR_DEEP_PROFILING

void mercury__mdprof_test__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp)
{
	MR_write_out_module_proc_reps_start(procrep_fp, &mercury_data__module_common_layout__mdprof_test);
	MR_write_out_module_proc_reps_end(procrep_fp);
}

#endif

#ifdef MR_RECORD_TERM_SIZES

void mercury__mdprof_test__init_complexity_procs(void)
{
}

#endif

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;
