/*
** Automatically generated from `getopt.m'
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
INIT mercury__getopt__init
ENDINIT
*/

#define MR_ALLOW_RESET
#include "mercury_imp.h"
#line 140 "io.int2"
#include "io.mh"

#line 28 "getopt.c"
#line 150 "io.int2"
#include "string.mh"

#line 32 "getopt.c"
#line 31 "bitmap.int2"
#include "bitmap.mh"

#line 36 "getopt.c"
#line 30 "time.int2"
#include "time.mh"

#line 40 "getopt.c"
#line 4 "builtin.opt"
#include "builtin.mh"

#line 44 "getopt.c"
#line 45 "builtin.opt"
#include "array.mh"

#line 48 "getopt.c"
#line 59 "array.opt"
#include "stm_builtin.mh"

#line 52 "getopt.c"
#line 61 "array.opt"
#include "store.mh"

#line 56 "getopt.c"
#line 14 "exception.opt"
#include "exception.mh"

#line 60 "getopt.c"
#line 156 "io.opt"
#include "dir.mh"

#line 64 "getopt.c"
#line 170 "io.opt"
#include "table_builtin.mh"

#line 68 "getopt.c"
#line 6 "benchmarking.opt"
#include "benchmarking.mh"

#line 72 "getopt.c"
#line 3 "float.opt"
#include "float.mh"

#line 76 "getopt.c"
#line 3 "math.opt"
#include "math.mh"

#line 80 "getopt.c"
#line 14 "version_array.opt"
#include "version_array.mh"

#line 84 "getopt.c"
#line 12 "pretty_printer.opt"
#include "pretty_printer.mh"

#line 88 "getopt.c"
#line 3 "construct.opt"
#include "construct.mh"

#line 92 "getopt.c"
#line 6 "type_desc.opt"
#include "type_desc.mh"

#line 96 "getopt.c"
#line 4 "int.opt"
#include "int.mh"

#line 100 "getopt.c"
#line 130 "rtti_implementation.opt"
#include "rtti_implementation.mh"

#line 104 "getopt.c"
#line 4 "char.opt"
#include "char.mh"

#line 108 "getopt.c"
#line 9 "private_builtin.opt"
#include "private_builtin.mh"

#line 112 "getopt.c"
#line 113 "getopt.c"
#include "getopt.mh"

#line 116 "getopt.c"
#line 117 "getopt.c"
#ifndef GETOPT_DECL_GUARD
#define GETOPT_DECL_GUARD

#line 121 "getopt.c"
#line 122 "getopt.c"

#endif
#line 125 "getopt.c"

#ifdef _MSC_VER
#define MR_STATIC_LINKAGE extern
#else
#define MR_STATIC_LINKAGE static
#endif

struct mercury_type_0 {
	MR_Word * f1;
	MR_Integer f2;
	MR_Integer f3;
	MR_Word * f4;
};
MR_STATIC_LINKAGE const struct mercury_type_0 mercury_common_0[];

struct mercury_type_1 {
	MR_Word * f1;
	MR_Integer f2;
	MR_Word * f3;
};
MR_STATIC_LINKAGE const struct mercury_type_1 mercury_common_1[];

struct mercury_type_2 {
	MR_Unsigned f1[2];
};
MR_STATIC_LINKAGE const struct mercury_type_2 mercury_common_2[];

struct mercury_type_3 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[3];
};
MR_STATIC_LINKAGE const struct mercury_type_3 mercury_common_3[];

struct mercury_type_4 {
	MR_Word * f1;
	MR_Integer f2;
};
MR_STATIC_LINKAGE const struct mercury_type_4 mercury_common_4[];

struct mercury_type_5 {
	MR_Word * f1;
	MR_Word * f2;
	MR_Integer f3;
	MR_Word * f4;
	MR_Integer f5;
	MR_Word * f6;
	MR_Word * f7;
};
MR_STATIC_LINKAGE const struct mercury_type_5 mercury_common_5[];

struct mercury_type_6 {
	MR_String f1;
	MR_Word * f2;
};
MR_STATIC_LINKAGE const struct mercury_type_6 mercury_common_6[];

struct mercury_type_7 {
	MR_Integer f1;
};
MR_STATIC_LINKAGE const struct mercury_type_7 mercury_common_7[];

struct mercury_type_8 {
	MR_Integer f1;
	MR_Word * f2;
};
MR_STATIC_LINKAGE const struct mercury_type_8 mercury_common_8[];

extern const MR_TypeCtorInfo_Struct
	mercury_data_getopt__type_ctor_info_maybe_option_table_1,
	mercury_data_getopt__type_ctor_info_option_data_0,
	mercury_data_getopt__type_ctor_info_option_ops_1,
	mercury_data_getopt__type_ctor_info_option_ops_internal_1,
	mercury_data_getopt__type_ctor_info_option_ops_special_1,
	mercury_data_getopt__type_ctor_info_option_ops_track_1,
	mercury_data_getopt__type_ctor_info_option_table_1,
	mercury_data_getopt__type_ctor_info_special_data_0;
MR_decl_label1(getopt__IntroducedFrom__pred__init_option_table__341__1_3_0, 1)
MR_decl_label1(getopt__IntroducedFrom__pred__init_option_table_multi__348__1_3_0, 1)
MR_decl_label5(f_103_101_116_111_112_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_110_117_109_101_114_105_99_95_97_114_103_117_109_101_110_116_95_95_91_49_93_95_48_3_0, 2,3,4,5,6)
MR_decl_label10(getopt__handle_long_option_13_0, 4,5,6,7,8,9,10,11,12,13)
MR_decl_label10(getopt__handle_long_option_13_0, 3,14,15,17,2,20,25,26,27,28)
MR_decl_label10(getopt__handle_long_option_13_0, 168,29,24,35,36,37,23,40,42,22)
MR_decl_label2(getopt__handle_long_option_13_0, 45,46)
MR_decl_label10(getopt__handle_short_options_10_0, 131,3,7,10,14,15,16,17,124,18)
MR_decl_label10(getopt__handle_short_options_10_0, 13,24,25,31,12,39,40,42,9,45)
MR_decl_label6(getopt__handle_short_options_10_0, 46,47,5,50,51,52)
MR_decl_label3(getopt__init_option_table_2_0, 6,7,8)
MR_decl_label3(getopt__init_option_table_multi_2_0, 6,7,8)
MR_decl_label2(getopt__lookup_accumulating_option_3_0, 3,2)
MR_decl_label2(getopt__lookup_bool_option_3_0, 3,2)
MR_decl_label2(getopt__lookup_int_option_3_0, 3,2)
MR_decl_label2(getopt__lookup_maybe_int_option_3_0, 3,2)
MR_decl_label2(getopt__lookup_maybe_string_option_3_0, 3,2)
MR_decl_label2(getopt__lookup_string_option_3_0, 3,2)
MR_decl_label10(getopt__process_arguments_9_0, 211,3,5,9,13,15,16,18,12,21)
MR_decl_label10(getopt__process_arguments_9_0, 8,26,29,31,33,32,28,38,39,42)
MR_decl_label10(getopt__process_arguments_9_0, 45,44,49,40,53,25,58,62,70,74)
MR_decl_label10(getopt__process_arguments_9_0, 75,77,69,80,81,63,85,87,57,90)
MR_decl_label10(getopt__process_negated_option_7_0, 3,7,6,10,18,17,21,28,36,35)
MR_decl_label10(getopt__process_negated_option_7_0, 45,40,48,50,47,53,55,52,58,60)
MR_decl_label4(getopt__process_negated_option_7_0, 57,66,2,71)
MR_decl_label10(getopt__process_option_9_0, 4,6,3,12,17,15,21,14,11,26)
MR_decl_label10(getopt__process_option_9_0, 273,31,33,30,37,39,36,44,48,46)
MR_decl_label10(getopt__process_option_9_0, 51,43,54,59,57,53,68,72,70,67)
MR_decl_label10(getopt__process_option_9_0, 78,83,81,89,80,77,93,92,100,104)
MR_decl_label1(getopt__process_option_9_0, 102)
MR_decl_label1(getopt__process_options_4_0, 2)
MR_decl_label9(getopt__process_options_5_0, 4,3,8,6,11,10,14,16,17)
MR_decl_label2(getopt__process_options_track_7_0, 4,5)
MR_decl_label10(getopt__process_special_8_0, 7,3,12,10,17,9,22,24,20,28)
MR_decl_label2(fn__getopt__lookup_accumulating_option_2_0, 3,2)
MR_decl_label2(fn__getopt__lookup_bool_option_2_0, 3,2)
MR_decl_label2(fn__getopt__lookup_int_option_2_0, 3,2)
MR_decl_label2(fn__getopt__lookup_maybe_int_option_2_0, 3,2)
MR_decl_label2(fn__getopt__lookup_maybe_string_option_2_0, 3,2)
MR_decl_label2(fn__getopt__lookup_string_option_2_0, 3,2)
MR_decl_label3(__Unify___getopt__maybe_option_table_1_0, 14,5,1)
MR_decl_label10(__Unify___getopt__option_data_0_0, 5,6,7,8,9,10,12,14,18,53)
MR_decl_label2(__Unify___getopt__option_data_0_0, 22,1)
MR_decl_label10(__Unify___getopt__option_ops_1_0, 7,9,5,15,17,19,13,25,27,57)
MR_decl_label5(__Unify___getopt__option_ops_1_0, 23,32,34,36,1)
MR_decl_label4(__Unify___getopt__option_ops_internal_1_0, 4,6,10,1)
MR_decl_label4(__Unify___getopt__option_ops_special_1_0, 5,19,6,1)
MR_decl_label4(__Unify___getopt__option_ops_track_1_0, 4,6,10,1)
MR_decl_label6(__Unify___getopt__special_data_0_0, 5,6,8,27,10,1)
MR_decl_label5(__Compare___getopt__maybe_option_table_1_0, 8,27,7,5,14)
MR_decl_label10(__Compare___getopt__option_data_0_0, 7,8,9,10,11,12,13,14,15,5)
MR_decl_label10(__Compare___getopt__option_data_0_0, 19,20,21,22,23,24,25,26,27,17)
MR_decl_label10(__Compare___getopt__option_data_0_0, 31,32,33,34,35,36,37,38,39,29)
MR_decl_label10(__Compare___getopt__option_data_0_0, 43,44,45,46,47,48,49,50,51,41)
MR_decl_label10(__Compare___getopt__option_data_0_0, 55,56,57,58,59,60,61,62,63,53)
MR_decl_label10(__Compare___getopt__option_data_0_0, 67,68,69,70,71,73,72,77,78,79)
MR_decl_label10(__Compare___getopt__option_data_0_0, 65,83,84,85,86,87,88,90,89,94)
MR_decl_label10(__Compare___getopt__option_data_0_0, 95,81,99,100,101,102,103,104,105,106)
MR_decl_label10(__Compare___getopt__option_data_0_0, 108,97,112,113,114,115,116,117,118,119)
MR_decl_label10(__Compare___getopt__option_data_0_0, 120,110,125,126,127,128,129,130,131,132)
MR_decl_label10(__Compare___getopt__option_data_0_0, 266,133,123,137,138,139,140,141,142,274)
MR_decl_label7(__Compare___getopt__option_data_0_0, 143,144,145,146,278,147,279)
MR_decl_label10(__Compare___getopt__option_ops_1_0, 3,2,9,13,7,162,5,23,26,30)
MR_decl_label10(__Compare___getopt__option_ops_1_0, 34,21,44,45,48,52,42,59,60,61)
MR_decl_label4(__Compare___getopt__option_ops_1_0, 63,67,71,244)
MR_decl_label5(__Compare___getopt__option_ops_internal_1_0, 3,2,5,9,29)
MR_decl_label7(__Compare___getopt__option_ops_special_1_0, 30,31,5,11,34,9,15)
MR_decl_label5(__Compare___getopt__option_ops_track_1_0, 3,2,5,9,29)
MR_decl_label10(__Compare___getopt__special_data_0_0, 7,8,9,5,13,15,14,19,11,23)
MR_decl_label10(__Compare___getopt__special_data_0_0, 24,26,25,21,33,34,72,35,31,39)
MR_decl_label7(__Compare___getopt__special_data_0_0, 40,76,41,42,78,43,79)
MR_def_extern_entry(getopt__init_option_table_2_0)
MR_def_extern_entry(getopt__init_option_table_multi_2_0)
MR_decl_static(getopt__process_special_8_0)
MR_decl_static(getopt__process_option_9_0)
MR_decl_static(getopt__handle_short_options_10_0)
MR_decl_static(getopt__process_negated_option_7_0)
MR_def_extern_entry(getopt__process_arguments_9_0)
MR_decl_static(getopt__handle_long_option_13_0)
MR_def_extern_entry(getopt__process_options_5_0)
MR_def_extern_entry(getopt__process_options_4_0)
MR_def_extern_entry(getopt__process_options_track_7_0)
MR_def_extern_entry(getopt__lookup_bool_option_3_0)
MR_def_extern_entry(fn__getopt__lookup_bool_option_2_0)
MR_def_extern_entry(getopt__lookup_int_option_3_0)
MR_def_extern_entry(fn__getopt__lookup_int_option_2_0)
MR_def_extern_entry(getopt__lookup_string_option_3_0)
MR_def_extern_entry(fn__getopt__lookup_string_option_2_0)
MR_def_extern_entry(getopt__lookup_maybe_int_option_3_0)
MR_def_extern_entry(fn__getopt__lookup_maybe_int_option_2_0)
MR_def_extern_entry(getopt__lookup_maybe_string_option_3_0)
MR_def_extern_entry(fn__getopt__lookup_maybe_string_option_2_0)
MR_def_extern_entry(getopt__lookup_accumulating_option_3_0)
MR_def_extern_entry(fn__getopt__lookup_accumulating_option_2_0)
MR_def_extern_entry(__Unify___getopt__maybe_option_table_1_0)
MR_def_extern_entry(__Compare___getopt__maybe_option_table_1_0)
MR_def_extern_entry(__Unify___getopt__option_data_0_0)
MR_def_extern_entry(__Compare___getopt__option_data_0_0)
MR_def_extern_entry(__Unify___getopt__option_ops_1_0)
MR_def_extern_entry(__Compare___getopt__option_ops_1_0)
MR_def_extern_entry(__Unify___getopt__option_ops_internal_1_0)
MR_def_extern_entry(__Compare___getopt__option_ops_internal_1_0)
MR_def_extern_entry(__Unify___getopt__option_ops_special_1_0)
MR_def_extern_entry(__Compare___getopt__option_ops_special_1_0)
MR_def_extern_entry(__Unify___getopt__option_ops_track_1_0)
MR_def_extern_entry(__Compare___getopt__option_ops_track_1_0)
MR_def_extern_entry(__Unify___getopt__option_table_1_0)
MR_def_extern_entry(__Compare___getopt__option_table_1_0)
MR_def_extern_entry(__Unify___getopt__special_data_0_0)
MR_def_extern_entry(__Compare___getopt__special_data_0_0)
MR_decl_static(getopt__IntroducedFrom__pred__init_option_table__341__1_3_0)
MR_decl_static(getopt__IntroducedFrom__pred__init_option_table_multi__348__1_3_0)
MR_decl_static(f_103_101_116_111_112_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_110_117_109_101_114_105_99_95_97_114_103_117_109_101_110_116_95_95_91_49_93_95_48_3_0)
MR_decl_static(fn__f_103_101_116_111_112_116_95_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_0)

extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_pred_0;
extern const MR_TypeCtorInfo_Struct mercury_data_getopt__type_ctor_info_option_data_0;
static const struct mercury_type_0 mercury_common_0[1] =
{
{
MR_CTOR0_ADDR(builtin, pred),
2,
1,
MR_CTOR0_ADDR(getopt, option_data)
},
};

extern const MR_TypeCtorInfo_Struct mercury_data_pair__type_ctor_info_pair_2;
static const struct mercury_type_1 mercury_common_1[1] =
{
{
MR_CTOR_ADDR(pair, pair, 2),
1,
MR_CTOR0_ADDR(getopt, option_data)
},
};

static const struct mercury_type_2 mercury_common_2[1] =
{
{
{
1,
17
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__getopt__init_option_table_2_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_private_builtin__type_ctor_info_type_info_0;
static const MR_UserClosureId
mercury_data__closure_layout__getopt__init_option_table_multi_2_0_1;
static const struct mercury_type_3 mercury_common_3[2] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__getopt__init_option_table_2_0_1,
MR_COMMON(2,0)
},
3,
{
MR_CTOR0_ADDR(private_builtin, type_info),
MR_COMMON(0,0),
MR_COMMON(1,0)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__getopt__init_option_table_multi_2_0_1,
MR_COMMON(2,0)
},
3,
{
MR_CTOR0_ADDR(private_builtin, type_info),
MR_COMMON(0,0),
MR_COMMON(1,0)
}
},
};

extern const MR_TypeCtorInfo_Struct mercury_data_list__type_ctor_info_list_1;
static const struct mercury_type_4 mercury_common_4[1] =
{
{
MR_LIST_CTOR_ADDR,
1
},
};

static const MR_UserClosureId
mercury_data__closure_layout__getopt__init_option_table_2_0_2;
static const MR_UserClosureId
mercury_data__closure_layout__getopt__init_option_table_multi_2_0_2;
static const struct mercury_type_5 mercury_common_5[2] =
{
{
(MR_Word *) &mercury_data__closure_layout__getopt__init_option_table_2_0_2,
MR_COMMON(2,0),
4,
MR_CTOR0_ADDR(private_builtin, type_info),
1,
MR_COMMON(4,0),
MR_COMMON(4,0)
},
{
(MR_Word *) &mercury_data__closure_layout__getopt__init_option_table_multi_2_0_2,
MR_COMMON(2,0),
4,
MR_CTOR0_ADDR(private_builtin, type_info),
1,
MR_COMMON(4,0),
MR_COMMON(4,0)
},
};

static const struct mercury_type_6 mercury_common_6[5] =
{
{
MR_string_const("\' has no handler", 16),
MR_tbmkword(0, 0)
},
{
MR_string_const("\' failed", 8),
MR_tbmkword(0, 0)
},
{
MR_string_const("only boolean, maybe and accumulating options can be negated", 59),
MR_tbmkword(0, 0)
},
{
MR_string_const("\' --", 4),
MR_TAG_COMMON(1,6,2)
},
{
MR_string_const("\'", 1),
MR_tbmkword(0, 0)
},
};

static const struct mercury_type_7 mercury_common_7[2] =
{
{
1
},
{
0
},
};

static const struct mercury_type_8 mercury_common_8[3] =
{
{
1,
MR_tbmkword(0, 0)
},
{
3,
MR_tbmkword(0, 0)
},
{
2,
MR_tbmkword(0, 0)
},
};
extern const MR_TypeCtorInfo_Struct mercury_data_tree234__type_ctor_info_tree234_2;

static const MR_FA_PseudoTypeInfo_Struct2 mercury_data_tree234__pti_tree234_2__pseudo_1__plain_getopt__type_ctor_info_option_data_0 = {
	&mercury_data_tree234__type_ctor_info_tree234_2,
{	(MR_PseudoTypeInfo) 1,
	(MR_PseudoTypeInfo) &mercury_data_getopt__type_ctor_info_option_data_0
}};

const MR_PseudoTypeInfo mercury_data_getopt__field_types_maybe_option_table_1_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_tree234__pti_tree234_2__pseudo_1__plain_getopt__type_ctor_info_option_data_0
};

static const MR_DuFunctorDesc mercury_data_getopt__du_functor_desc_maybe_option_table_1_0 = {
	"ok",
	1,
	1,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_getopt__field_types_maybe_option_table_1_0,
	NULL,
	NULL,
	NULL
};
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_string_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_string_0;

const MR_PseudoTypeInfo mercury_data_getopt__field_types_maybe_option_table_1_1[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_string_0
};

static const MR_DuFunctorDesc mercury_data_getopt__du_functor_desc_maybe_option_table_1_1 = {
	"error",
	1,
	0,
	MR_SECTAG_NONE,
	1,
	-1,
	1,
	(MR_PseudoTypeInfo *) mercury_data_getopt__field_types_maybe_option_table_1_1,
	NULL,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_getopt__du_stag_ordered_maybe_option_table_1_0[] = {
	&mercury_data_getopt__du_functor_desc_maybe_option_table_1_0

};

const MR_DuFunctorDescPtr mercury_data_getopt__du_stag_ordered_maybe_option_table_1_1[] = {
	&mercury_data_getopt__du_functor_desc_maybe_option_table_1_1

};

const MR_DuPtagLayout mercury_data_getopt__du_ptag_ordered_maybe_option_table_1[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_getopt__du_stag_ordered_maybe_option_table_1_0 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_getopt__du_stag_ordered_maybe_option_table_1_1 }

};

const MR_DuFunctorDescPtr mercury_data_getopt__du_name_ordered_maybe_option_table_1[] = {
	&mercury_data_getopt__du_functor_desc_maybe_option_table_1_1,
	&mercury_data_getopt__du_functor_desc_maybe_option_table_1_0
};

const MR_Integer mercury_data_getopt__functor_number_map_maybe_option_table_1[] = {
	1,
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_getopt__type_ctor_info_maybe_option_table_1 = {
	1,
	15,
	2,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___getopt__maybe_option_table_1_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___getopt__maybe_option_table_1_0)),
	"getopt",
	"maybe_option_table",
	{ (void *)mercury_data_getopt__du_name_ordered_maybe_option_table_1 },
	{ (void *)mercury_data_getopt__du_ptag_ordered_maybe_option_table_1 },
	2,
	4,
	mercury_data_getopt__functor_number_map_maybe_option_table_1
};
extern const MR_TypeCtorInfo_Struct mercury_data_bool__type_ctor_info_bool_0;
extern const MR_TypeCtorInfo_Struct mercury_data_bool__type_ctor_info_bool_0;

const MR_PseudoTypeInfo mercury_data_getopt__field_types_option_data_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_bool__type_ctor_info_bool_0
};

static const MR_DuFunctorDesc mercury_data_getopt__du_functor_desc_option_data_0_0 = {
	"bool",
	1,
	0,
	MR_SECTAG_NONE,
	1,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_getopt__field_types_option_data_0_0,
	NULL,
	NULL,
	NULL
};
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;

const MR_PseudoTypeInfo mercury_data_getopt__field_types_option_data_0_1[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0
};

static const MR_DuFunctorDesc mercury_data_getopt__du_functor_desc_option_data_0_1 = {
	"int",
	1,
	0,
	MR_SECTAG_NONE,
	2,
	-1,
	1,
	(MR_PseudoTypeInfo *) mercury_data_getopt__field_types_option_data_0_1,
	NULL,
	NULL,
	NULL
};

const MR_PseudoTypeInfo mercury_data_getopt__field_types_option_data_0_2[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_string_0
};

static const MR_DuFunctorDesc mercury_data_getopt__du_functor_desc_option_data_0_2 = {
	"string",
	1,
	0,
	MR_SECTAG_REMOTE,
	3,
	0,
	2,
	(MR_PseudoTypeInfo *) mercury_data_getopt__field_types_option_data_0_2,
	NULL,
	NULL,
	NULL
};
extern const MR_TypeCtorInfo_Struct mercury_data_maybe__type_ctor_info_maybe_1;

static const MR_FA_TypeInfo_Struct1 mercury_data_maybe__ti_maybe_1builtin__type_ctor_info_int_0 = {
	&mercury_data_maybe__type_ctor_info_maybe_1,
{	(MR_TypeInfo) &mercury_data_builtin__type_ctor_info_int_0
}};

const MR_PseudoTypeInfo mercury_data_getopt__field_types_option_data_0_3[] = {
	(MR_PseudoTypeInfo) &mercury_data_maybe__ti_maybe_1builtin__type_ctor_info_int_0
};

static const MR_DuFunctorDesc mercury_data_getopt__du_functor_desc_option_data_0_3 = {
	"maybe_int",
	1,
	0,
	MR_SECTAG_REMOTE,
	3,
	1,
	3,
	(MR_PseudoTypeInfo *) mercury_data_getopt__field_types_option_data_0_3,
	NULL,
	NULL,
	NULL
};

static const MR_FA_TypeInfo_Struct1 mercury_data_maybe__ti_maybe_1builtin__type_ctor_info_string_0 = {
	&mercury_data_maybe__type_ctor_info_maybe_1,
{	(MR_TypeInfo) &mercury_data_builtin__type_ctor_info_string_0
}};

const MR_PseudoTypeInfo mercury_data_getopt__field_types_option_data_0_4[] = {
	(MR_PseudoTypeInfo) &mercury_data_maybe__ti_maybe_1builtin__type_ctor_info_string_0
};

static const MR_DuFunctorDesc mercury_data_getopt__du_functor_desc_option_data_0_4 = {
	"maybe_string",
	1,
	0,
	MR_SECTAG_REMOTE,
	3,
	2,
	4,
	(MR_PseudoTypeInfo *) mercury_data_getopt__field_types_option_data_0_4,
	NULL,
	NULL,
	NULL
};

static const MR_FA_TypeInfo_Struct1 mercury_data_list__ti_list_1builtin__type_ctor_info_string_0 = {
	&mercury_data_list__type_ctor_info_list_1,
{	(MR_TypeInfo) &mercury_data_builtin__type_ctor_info_string_0
}};

const MR_PseudoTypeInfo mercury_data_getopt__field_types_option_data_0_5[] = {
	(MR_PseudoTypeInfo) &mercury_data_list__ti_list_1builtin__type_ctor_info_string_0
};

static const MR_DuFunctorDesc mercury_data_getopt__du_functor_desc_option_data_0_5 = {
	"accumulating",
	1,
	0,
	MR_SECTAG_REMOTE,
	3,
	3,
	5,
	(MR_PseudoTypeInfo *) mercury_data_getopt__field_types_option_data_0_5,
	NULL,
	NULL,
	NULL
};

static const MR_DuFunctorDesc mercury_data_getopt__du_functor_desc_option_data_0_6 = {
	"special",
	0,
	0,
	MR_SECTAG_LOCAL,
	0,
	0,
	6,
	(MR_PseudoTypeInfo *) NULL,
	NULL,
	NULL,
	NULL
};

static const MR_DuFunctorDesc mercury_data_getopt__du_functor_desc_option_data_0_7 = {
	"bool_special",
	0,
	0,
	MR_SECTAG_LOCAL,
	0,
	1,
	7,
	(MR_PseudoTypeInfo *) NULL,
	NULL,
	NULL,
	NULL
};

static const MR_DuFunctorDesc mercury_data_getopt__du_functor_desc_option_data_0_8 = {
	"int_special",
	0,
	0,
	MR_SECTAG_LOCAL,
	0,
	2,
	8,
	(MR_PseudoTypeInfo *) NULL,
	NULL,
	NULL,
	NULL
};

static const MR_DuFunctorDesc mercury_data_getopt__du_functor_desc_option_data_0_9 = {
	"string_special",
	0,
	0,
	MR_SECTAG_LOCAL,
	0,
	3,
	9,
	(MR_PseudoTypeInfo *) NULL,
	NULL,
	NULL,
	NULL
};

static const MR_DuFunctorDesc mercury_data_getopt__du_functor_desc_option_data_0_10 = {
	"maybe_string_special",
	0,
	0,
	MR_SECTAG_LOCAL,
	0,
	4,
	10,
	(MR_PseudoTypeInfo *) NULL,
	NULL,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_getopt__du_stag_ordered_option_data_0_0[] = {
	&mercury_data_getopt__du_functor_desc_option_data_0_6,
	&mercury_data_getopt__du_functor_desc_option_data_0_7,
	&mercury_data_getopt__du_functor_desc_option_data_0_8,
	&mercury_data_getopt__du_functor_desc_option_data_0_9,
	&mercury_data_getopt__du_functor_desc_option_data_0_10

};

const MR_DuFunctorDescPtr mercury_data_getopt__du_stag_ordered_option_data_0_1[] = {
	&mercury_data_getopt__du_functor_desc_option_data_0_0

};

const MR_DuFunctorDescPtr mercury_data_getopt__du_stag_ordered_option_data_0_2[] = {
	&mercury_data_getopt__du_functor_desc_option_data_0_1

};

const MR_DuFunctorDescPtr mercury_data_getopt__du_stag_ordered_option_data_0_3[] = {
	&mercury_data_getopt__du_functor_desc_option_data_0_2,
	&mercury_data_getopt__du_functor_desc_option_data_0_3,
	&mercury_data_getopt__du_functor_desc_option_data_0_4,
	&mercury_data_getopt__du_functor_desc_option_data_0_5

};

const MR_DuPtagLayout mercury_data_getopt__du_ptag_ordered_option_data_0[] = {
	{ 5, MR_SECTAG_LOCAL,
	mercury_data_getopt__du_stag_ordered_option_data_0_0 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_getopt__du_stag_ordered_option_data_0_1 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_getopt__du_stag_ordered_option_data_0_2 },
	{ 4, MR_SECTAG_REMOTE,
	mercury_data_getopt__du_stag_ordered_option_data_0_3 }

};

const MR_DuFunctorDescPtr mercury_data_getopt__du_name_ordered_option_data_0[] = {
	&mercury_data_getopt__du_functor_desc_option_data_0_5,
	&mercury_data_getopt__du_functor_desc_option_data_0_0,
	&mercury_data_getopt__du_functor_desc_option_data_0_7,
	&mercury_data_getopt__du_functor_desc_option_data_0_1,
	&mercury_data_getopt__du_functor_desc_option_data_0_8,
	&mercury_data_getopt__du_functor_desc_option_data_0_3,
	&mercury_data_getopt__du_functor_desc_option_data_0_4,
	&mercury_data_getopt__du_functor_desc_option_data_0_10,
	&mercury_data_getopt__du_functor_desc_option_data_0_6,
	&mercury_data_getopt__du_functor_desc_option_data_0_2,
	&mercury_data_getopt__du_functor_desc_option_data_0_9
};

const MR_Integer mercury_data_getopt__functor_number_map_option_data_0[] = {
	1,
	3,
	9,
	5,
	6,
	0,
	8,
	2,
	4,
	10,
	7 };
	
const MR_TypeCtorInfo_Struct mercury_data_getopt__type_ctor_info_option_data_0 = {
	0,
	15,
	4,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___getopt__option_data_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___getopt__option_data_0_0)),
	"getopt",
	"option_data",
	{ (void *)mercury_data_getopt__du_name_ordered_option_data_0 },
	{ (void *)mercury_data_getopt__du_ptag_ordered_option_data_0 },
	11,
	4,
	mercury_data_getopt__functor_number_map_option_data_0
};
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_character_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_character_0;

static const MR_VA_PseudoTypeInfo_Struct2 mercury_data___vpti_pred_2__plain_builtin__type_ctor_info_character_0__pseudo_1 = {
	&mercury_data_builtin__type_ctor_info_pred_0,
	2,
{	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_character_0,
	(MR_PseudoTypeInfo) 1
}};

static const MR_VA_PseudoTypeInfo_Struct2 mercury_data___vpti_pred_2__plain_builtin__type_ctor_info_string_0__pseudo_1 = {
	&mercury_data_builtin__type_ctor_info_pred_0,
	2,
{	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_string_0,
	(MR_PseudoTypeInfo) 1
}};

static const MR_VA_PseudoTypeInfo_Struct2 mercury_data___vpti_pred_2__pseudo_1__plain_getopt__type_ctor_info_option_data_0 = {
	&mercury_data_builtin__type_ctor_info_pred_0,
	2,
{	(MR_PseudoTypeInfo) 1,
	(MR_PseudoTypeInfo) &mercury_data_getopt__type_ctor_info_option_data_0
}};

const MR_PseudoTypeInfo mercury_data_getopt__field_types_option_ops_1_0[] = {
	(MR_PseudoTypeInfo) &mercury_data___vpti_pred_2__plain_builtin__type_ctor_info_character_0__pseudo_1,
	(MR_PseudoTypeInfo) &mercury_data___vpti_pred_2__plain_builtin__type_ctor_info_string_0__pseudo_1,
	(MR_PseudoTypeInfo) &mercury_data___vpti_pred_2__pseudo_1__plain_getopt__type_ctor_info_option_data_0
};

static const MR_DuFunctorDesc mercury_data_getopt__du_functor_desc_option_ops_1_0 = {
	"option_ops",
	3,
	7,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_getopt__field_types_option_ops_1_0,
	NULL,
	NULL,
	NULL
};

static const MR_FA_PseudoTypeInfo_Struct1 mercury_data_getopt__pti_maybe_option_table_1__pseudo_1 = {
	&mercury_data_getopt__type_ctor_info_maybe_option_table_1,
{	(MR_PseudoTypeInfo) 1
}};
extern const MR_TypeCtorInfo_Struct mercury_data_getopt__type_ctor_info_special_data_0;

static const MR_VA_PseudoTypeInfo_Struct4 mercury_data___vpti_pred_4__pseudo_1__plain_getopt__type_ctor_info_special_data_0__pseudo_tree234__pti_tree234_2__pseudo_1__plain_getopt__type_ctor_info_option_data_0__pseudo_getopt__pti_maybe_option_table_1__pseudo_1 = {
	&mercury_data_builtin__type_ctor_info_pred_0,
	4,
{	(MR_PseudoTypeInfo) 1,
	(MR_PseudoTypeInfo) &mercury_data_getopt__type_ctor_info_special_data_0,
	(MR_PseudoTypeInfo) &mercury_data_tree234__pti_tree234_2__pseudo_1__plain_getopt__type_ctor_info_option_data_0,
	(MR_PseudoTypeInfo) &mercury_data_getopt__pti_maybe_option_table_1__pseudo_1
}};

const MR_PseudoTypeInfo mercury_data_getopt__field_types_option_ops_1_1[] = {
	(MR_PseudoTypeInfo) &mercury_data___vpti_pred_2__plain_builtin__type_ctor_info_character_0__pseudo_1,
	(MR_PseudoTypeInfo) &mercury_data___vpti_pred_2__plain_builtin__type_ctor_info_string_0__pseudo_1,
	(MR_PseudoTypeInfo) &mercury_data___vpti_pred_2__pseudo_1__plain_getopt__type_ctor_info_option_data_0,
	(MR_PseudoTypeInfo) &mercury_data___vpti_pred_4__pseudo_1__plain_getopt__type_ctor_info_special_data_0__pseudo_tree234__pti_tree234_2__pseudo_1__plain_getopt__type_ctor_info_option_data_0__pseudo_getopt__pti_maybe_option_table_1__pseudo_1
};

static const MR_DuFunctorDesc mercury_data_getopt__du_functor_desc_option_ops_1_1 = {
	"option_ops",
	4,
	15,
	MR_SECTAG_NONE,
	1,
	-1,
	1,
	(MR_PseudoTypeInfo *) mercury_data_getopt__field_types_option_ops_1_1,
	NULL,
	NULL,
	NULL
};

const MR_PseudoTypeInfo mercury_data_getopt__field_types_option_ops_1_2[] = {
	(MR_PseudoTypeInfo) &mercury_data___vpti_pred_2__plain_builtin__type_ctor_info_character_0__pseudo_1,
	(MR_PseudoTypeInfo) &mercury_data___vpti_pred_2__plain_builtin__type_ctor_info_string_0__pseudo_1,
	(MR_PseudoTypeInfo) &mercury_data___vpti_pred_2__pseudo_1__plain_getopt__type_ctor_info_option_data_0
};

static const MR_DuFunctorDesc mercury_data_getopt__du_functor_desc_option_ops_1_2 = {
	"option_ops_multi",
	3,
	7,
	MR_SECTAG_NONE,
	2,
	-1,
	2,
	(MR_PseudoTypeInfo *) mercury_data_getopt__field_types_option_ops_1_2,
	NULL,
	NULL,
	NULL
};

const MR_PseudoTypeInfo mercury_data_getopt__field_types_option_ops_1_3[] = {
	(MR_PseudoTypeInfo) &mercury_data___vpti_pred_2__plain_builtin__type_ctor_info_character_0__pseudo_1,
	(MR_PseudoTypeInfo) &mercury_data___vpti_pred_2__plain_builtin__type_ctor_info_string_0__pseudo_1,
	(MR_PseudoTypeInfo) &mercury_data___vpti_pred_2__pseudo_1__plain_getopt__type_ctor_info_option_data_0,
	(MR_PseudoTypeInfo) &mercury_data___vpti_pred_4__pseudo_1__plain_getopt__type_ctor_info_special_data_0__pseudo_tree234__pti_tree234_2__pseudo_1__plain_getopt__type_ctor_info_option_data_0__pseudo_getopt__pti_maybe_option_table_1__pseudo_1
};

static const MR_DuFunctorDesc mercury_data_getopt__du_functor_desc_option_ops_1_3 = {
	"option_ops_multi",
	4,
	15,
	MR_SECTAG_NONE,
	3,
	-1,
	3,
	(MR_PseudoTypeInfo *) mercury_data_getopt__field_types_option_ops_1_3,
	NULL,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_getopt__du_stag_ordered_option_ops_1_0[] = {
	&mercury_data_getopt__du_functor_desc_option_ops_1_0

};

const MR_DuFunctorDescPtr mercury_data_getopt__du_stag_ordered_option_ops_1_1[] = {
	&mercury_data_getopt__du_functor_desc_option_ops_1_1

};

const MR_DuFunctorDescPtr mercury_data_getopt__du_stag_ordered_option_ops_1_2[] = {
	&mercury_data_getopt__du_functor_desc_option_ops_1_2

};

const MR_DuFunctorDescPtr mercury_data_getopt__du_stag_ordered_option_ops_1_3[] = {
	&mercury_data_getopt__du_functor_desc_option_ops_1_3

};

const MR_DuPtagLayout mercury_data_getopt__du_ptag_ordered_option_ops_1[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_getopt__du_stag_ordered_option_ops_1_0 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_getopt__du_stag_ordered_option_ops_1_1 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_getopt__du_stag_ordered_option_ops_1_2 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_getopt__du_stag_ordered_option_ops_1_3 }

};

const MR_DuFunctorDescPtr mercury_data_getopt__du_name_ordered_option_ops_1[] = {
	&mercury_data_getopt__du_functor_desc_option_ops_1_0,
	&mercury_data_getopt__du_functor_desc_option_ops_1_1,
	&mercury_data_getopt__du_functor_desc_option_ops_1_2,
	&mercury_data_getopt__du_functor_desc_option_ops_1_3
};

const MR_Integer mercury_data_getopt__functor_number_map_option_ops_1[] = {
	0,
	1,
	2,
	3 };
	
const MR_TypeCtorInfo_Struct mercury_data_getopt__type_ctor_info_option_ops_1 = {
	1,
	15,
	4,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___getopt__option_ops_1_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___getopt__option_ops_1_0)),
	"getopt",
	"option_ops",
	{ (void *)mercury_data_getopt__du_name_ordered_option_ops_1 },
	{ (void *)mercury_data_getopt__du_ptag_ordered_option_ops_1 },
	4,
	4,
	mercury_data_getopt__functor_number_map_option_ops_1
};

static const MR_FA_PseudoTypeInfo_Struct1 mercury_data_getopt__pti_option_ops_special_1__pseudo_1 = {
	&mercury_data_getopt__type_ctor_info_option_ops_special_1,
{	(MR_PseudoTypeInfo) 1
}};

const MR_PseudoTypeInfo mercury_data_getopt__field_types_option_ops_internal_1_0[] = {
	(MR_PseudoTypeInfo) &mercury_data___vpti_pred_2__plain_builtin__type_ctor_info_character_0__pseudo_1,
	(MR_PseudoTypeInfo) &mercury_data___vpti_pred_2__plain_builtin__type_ctor_info_string_0__pseudo_1,
	(MR_PseudoTypeInfo) &mercury_data_getopt__pti_option_ops_special_1__pseudo_1
};

const MR_ConstString mercury_data_getopt__field_names_option_ops_internal_1_0[] = {
	"short_option",
	"long_option",
	"special_handler"
};

static const MR_DuFunctorDesc mercury_data_getopt__du_functor_desc_option_ops_internal_1_0 = {
	"option_ops_internal",
	3,
	7,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_getopt__field_types_option_ops_internal_1_0,
	mercury_data_getopt__field_names_option_ops_internal_1_0,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_getopt__du_stag_ordered_option_ops_internal_1_0[] = {
	&mercury_data_getopt__du_functor_desc_option_ops_internal_1_0

};

const MR_DuPtagLayout mercury_data_getopt__du_ptag_ordered_option_ops_internal_1[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_getopt__du_stag_ordered_option_ops_internal_1_0 }

};

const MR_DuFunctorDescPtr mercury_data_getopt__du_name_ordered_option_ops_internal_1[] = {
	&mercury_data_getopt__du_functor_desc_option_ops_internal_1_0
};

const MR_Integer mercury_data_getopt__functor_number_map_option_ops_internal_1[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_getopt__type_ctor_info_option_ops_internal_1 = {
	1,
	15,
	1,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___getopt__option_ops_internal_1_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___getopt__option_ops_internal_1_0)),
	"getopt",
	"option_ops_internal",
	{ (void *)mercury_data_getopt__du_name_ordered_option_ops_internal_1 },
	{ (void *)mercury_data_getopt__du_ptag_ordered_option_ops_internal_1 },
	1,
	4,
	mercury_data_getopt__functor_number_map_option_ops_internal_1
};

static const MR_DuFunctorDesc mercury_data_getopt__du_functor_desc_option_ops_special_1_0 = {
	"none",
	0,
	0,
	MR_SECTAG_LOCAL,
	0,
	0,
	0,
	(MR_PseudoTypeInfo *) NULL,
	NULL,
	NULL,
	NULL
};

const MR_PseudoTypeInfo mercury_data_getopt__field_types_option_ops_special_1_1[] = {
	(MR_PseudoTypeInfo) &mercury_data___vpti_pred_4__pseudo_1__plain_getopt__type_ctor_info_special_data_0__pseudo_tree234__pti_tree234_2__pseudo_1__plain_getopt__type_ctor_info_option_data_0__pseudo_getopt__pti_maybe_option_table_1__pseudo_1
};

static const MR_DuFunctorDesc mercury_data_getopt__du_functor_desc_option_ops_special_1_1 = {
	"notrack",
	1,
	1,
	MR_SECTAG_NONE,
	1,
	-1,
	1,
	(MR_PseudoTypeInfo *) mercury_data_getopt__field_types_option_ops_special_1_1,
	NULL,
	NULL,
	NULL
};
extern const MR_TypeCtorInfo_Struct mercury_data_set_ordlist__type_ctor_info_set_ordlist_1;

static const MR_FA_PseudoTypeInfo_Struct1 mercury_data_set_ordlist__pti_set_ordlist_1__pseudo_1 = {
	&mercury_data_set_ordlist__type_ctor_info_set_ordlist_1,
{	(MR_PseudoTypeInfo) 1
}};

static const MR_VA_PseudoTypeInfo_Struct5 mercury_data___vpti_pred_5__pseudo_1__plain_getopt__type_ctor_info_special_data_0__pseudo_tree234__pti_tree234_2__pseudo_1__plain_getopt__type_ctor_info_option_data_0__pseudo_getopt__pti_maybe_option_table_1__pseudo_1__pseudo_set_ordlist__pti_set_ordlist_1__pseudo_1 = {
	&mercury_data_builtin__type_ctor_info_pred_0,
	5,
{	(MR_PseudoTypeInfo) 1,
	(MR_PseudoTypeInfo) &mercury_data_getopt__type_ctor_info_special_data_0,
	(MR_PseudoTypeInfo) &mercury_data_tree234__pti_tree234_2__pseudo_1__plain_getopt__type_ctor_info_option_data_0,
	(MR_PseudoTypeInfo) &mercury_data_getopt__pti_maybe_option_table_1__pseudo_1,
	(MR_PseudoTypeInfo) &mercury_data_set_ordlist__pti_set_ordlist_1__pseudo_1
}};

const MR_PseudoTypeInfo mercury_data_getopt__field_types_option_ops_special_1_2[] = {
	(MR_PseudoTypeInfo) &mercury_data___vpti_pred_5__pseudo_1__plain_getopt__type_ctor_info_special_data_0__pseudo_tree234__pti_tree234_2__pseudo_1__plain_getopt__type_ctor_info_option_data_0__pseudo_getopt__pti_maybe_option_table_1__pseudo_1__pseudo_set_ordlist__pti_set_ordlist_1__pseudo_1
};

static const MR_DuFunctorDesc mercury_data_getopt__du_functor_desc_option_ops_special_1_2 = {
	"track",
	1,
	1,
	MR_SECTAG_NONE,
	2,
	-1,
	2,
	(MR_PseudoTypeInfo *) mercury_data_getopt__field_types_option_ops_special_1_2,
	NULL,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_getopt__du_stag_ordered_option_ops_special_1_0[] = {
	&mercury_data_getopt__du_functor_desc_option_ops_special_1_0

};

const MR_DuFunctorDescPtr mercury_data_getopt__du_stag_ordered_option_ops_special_1_1[] = {
	&mercury_data_getopt__du_functor_desc_option_ops_special_1_1

};

const MR_DuFunctorDescPtr mercury_data_getopt__du_stag_ordered_option_ops_special_1_2[] = {
	&mercury_data_getopt__du_functor_desc_option_ops_special_1_2

};

const MR_DuPtagLayout mercury_data_getopt__du_ptag_ordered_option_ops_special_1[] = {
	{ 1, MR_SECTAG_LOCAL,
	mercury_data_getopt__du_stag_ordered_option_ops_special_1_0 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_getopt__du_stag_ordered_option_ops_special_1_1 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_getopt__du_stag_ordered_option_ops_special_1_2 }

};

const MR_DuFunctorDescPtr mercury_data_getopt__du_name_ordered_option_ops_special_1[] = {
	&mercury_data_getopt__du_functor_desc_option_ops_special_1_0,
	&mercury_data_getopt__du_functor_desc_option_ops_special_1_1,
	&mercury_data_getopt__du_functor_desc_option_ops_special_1_2
};

const MR_Integer mercury_data_getopt__functor_number_map_option_ops_special_1[] = {
	0,
	1,
	2 };
	
const MR_TypeCtorInfo_Struct mercury_data_getopt__type_ctor_info_option_ops_special_1 = {
	1,
	15,
	3,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___getopt__option_ops_special_1_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___getopt__option_ops_special_1_0)),
	"getopt",
	"option_ops_special",
	{ (void *)mercury_data_getopt__du_name_ordered_option_ops_special_1 },
	{ (void *)mercury_data_getopt__du_ptag_ordered_option_ops_special_1 },
	3,
	4,
	mercury_data_getopt__functor_number_map_option_ops_special_1
};

const MR_PseudoTypeInfo mercury_data_getopt__field_types_option_ops_track_1_0[] = {
	(MR_PseudoTypeInfo) &mercury_data___vpti_pred_2__plain_builtin__type_ctor_info_character_0__pseudo_1,
	(MR_PseudoTypeInfo) &mercury_data___vpti_pred_2__plain_builtin__type_ctor_info_string_0__pseudo_1,
	(MR_PseudoTypeInfo) &mercury_data___vpti_pred_5__pseudo_1__plain_getopt__type_ctor_info_special_data_0__pseudo_tree234__pti_tree234_2__pseudo_1__plain_getopt__type_ctor_info_option_data_0__pseudo_getopt__pti_maybe_option_table_1__pseudo_1__pseudo_set_ordlist__pti_set_ordlist_1__pseudo_1
};

static const MR_DuFunctorDesc mercury_data_getopt__du_functor_desc_option_ops_track_1_0 = {
	"option_ops_track",
	3,
	7,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_getopt__field_types_option_ops_track_1_0,
	NULL,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_getopt__du_stag_ordered_option_ops_track_1_0[] = {
	&mercury_data_getopt__du_functor_desc_option_ops_track_1_0

};

const MR_DuPtagLayout mercury_data_getopt__du_ptag_ordered_option_ops_track_1[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_getopt__du_stag_ordered_option_ops_track_1_0 }

};

const MR_DuFunctorDescPtr mercury_data_getopt__du_name_ordered_option_ops_track_1[] = {
	&mercury_data_getopt__du_functor_desc_option_ops_track_1_0
};

const MR_Integer mercury_data_getopt__functor_number_map_option_ops_track_1[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_getopt__type_ctor_info_option_ops_track_1 = {
	1,
	15,
	1,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___getopt__option_ops_track_1_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___getopt__option_ops_track_1_0)),
	"getopt",
	"option_ops_track",
	{ (void *)mercury_data_getopt__du_name_ordered_option_ops_track_1 },
	{ (void *)mercury_data_getopt__du_ptag_ordered_option_ops_track_1 },
	1,
	4,
	mercury_data_getopt__functor_number_map_option_ops_track_1
};

const MR_TypeCtorInfo_Struct mercury_data_getopt__type_ctor_info_option_table_1 = {
	1,
	15,
	-1,
	MR_TYPECTOR_REP_EQUIV,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___getopt__option_table_1_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___getopt__option_table_1_0)),
	"getopt",
	"option_table",
	{ 0 },
	{ (void *)&mercury_data_tree234__pti_tree234_2__pseudo_1__plain_getopt__type_ctor_info_option_data_0 },
	-1,
	0,
	NULL
};

static const MR_DuFunctorDesc mercury_data_getopt__du_functor_desc_special_data_0_0 = {
	"none",
	0,
	0,
	MR_SECTAG_LOCAL,
	0,
	0,
	0,
	(MR_PseudoTypeInfo *) NULL,
	NULL,
	NULL,
	NULL
};

const MR_PseudoTypeInfo mercury_data_getopt__field_types_special_data_0_1[] = {
	(MR_PseudoTypeInfo) &mercury_data_bool__type_ctor_info_bool_0
};

static const MR_DuFunctorDesc mercury_data_getopt__du_functor_desc_special_data_0_1 = {
	"bool",
	1,
	0,
	MR_SECTAG_NONE,
	1,
	-1,
	1,
	(MR_PseudoTypeInfo *) mercury_data_getopt__field_types_special_data_0_1,
	NULL,
	NULL,
	NULL
};

const MR_PseudoTypeInfo mercury_data_getopt__field_types_special_data_0_2[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0
};

static const MR_DuFunctorDesc mercury_data_getopt__du_functor_desc_special_data_0_2 = {
	"int",
	1,
	0,
	MR_SECTAG_NONE,
	2,
	-1,
	2,
	(MR_PseudoTypeInfo *) mercury_data_getopt__field_types_special_data_0_2,
	NULL,
	NULL,
	NULL
};

const MR_PseudoTypeInfo mercury_data_getopt__field_types_special_data_0_3[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_string_0
};

static const MR_DuFunctorDesc mercury_data_getopt__du_functor_desc_special_data_0_3 = {
	"string",
	1,
	0,
	MR_SECTAG_REMOTE,
	3,
	0,
	3,
	(MR_PseudoTypeInfo *) mercury_data_getopt__field_types_special_data_0_3,
	NULL,
	NULL,
	NULL
};

const MR_PseudoTypeInfo mercury_data_getopt__field_types_special_data_0_4[] = {
	(MR_PseudoTypeInfo) &mercury_data_maybe__ti_maybe_1builtin__type_ctor_info_string_0
};

static const MR_DuFunctorDesc mercury_data_getopt__du_functor_desc_special_data_0_4 = {
	"maybe_string",
	1,
	0,
	MR_SECTAG_REMOTE,
	3,
	1,
	4,
	(MR_PseudoTypeInfo *) mercury_data_getopt__field_types_special_data_0_4,
	NULL,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_getopt__du_stag_ordered_special_data_0_0[] = {
	&mercury_data_getopt__du_functor_desc_special_data_0_0

};

const MR_DuFunctorDescPtr mercury_data_getopt__du_stag_ordered_special_data_0_1[] = {
	&mercury_data_getopt__du_functor_desc_special_data_0_1

};

const MR_DuFunctorDescPtr mercury_data_getopt__du_stag_ordered_special_data_0_2[] = {
	&mercury_data_getopt__du_functor_desc_special_data_0_2

};

const MR_DuFunctorDescPtr mercury_data_getopt__du_stag_ordered_special_data_0_3[] = {
	&mercury_data_getopt__du_functor_desc_special_data_0_3,
	&mercury_data_getopt__du_functor_desc_special_data_0_4

};

const MR_DuPtagLayout mercury_data_getopt__du_ptag_ordered_special_data_0[] = {
	{ 1, MR_SECTAG_LOCAL,
	mercury_data_getopt__du_stag_ordered_special_data_0_0 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_getopt__du_stag_ordered_special_data_0_1 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_getopt__du_stag_ordered_special_data_0_2 },
	{ 2, MR_SECTAG_REMOTE,
	mercury_data_getopt__du_stag_ordered_special_data_0_3 }

};

const MR_DuFunctorDescPtr mercury_data_getopt__du_name_ordered_special_data_0[] = {
	&mercury_data_getopt__du_functor_desc_special_data_0_1,
	&mercury_data_getopt__du_functor_desc_special_data_0_2,
	&mercury_data_getopt__du_functor_desc_special_data_0_4,
	&mercury_data_getopt__du_functor_desc_special_data_0_0,
	&mercury_data_getopt__du_functor_desc_special_data_0_3
};

const MR_Integer mercury_data_getopt__functor_number_map_special_data_0[] = {
	3,
	0,
	1,
	4,
	2 };
	
const MR_TypeCtorInfo_Struct mercury_data_getopt__type_ctor_info_special_data_0 = {
	0,
	15,
	4,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___getopt__special_data_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___getopt__special_data_0_0)),
	"getopt",
	"special_data",
	{ (void *)mercury_data_getopt__du_name_ordered_special_data_0 },
	{ (void *)mercury_data_getopt__du_ptag_ordered_special_data_0 },
	5,
	4,
	mercury_data_getopt__functor_number_map_special_data_0
};


static const MR_UserClosureId
mercury_data__closure_layout__getopt__init_option_table_multi_2_0_2 = {
{
MR_PREDICATE,
"list",
"list",
"cons",
3,
0
},
"getopt",
"solutions.opt",
68,
"4"
};

static const MR_UserClosureId
mercury_data__closure_layout__getopt__init_option_table_multi_2_0_1 = {
{
MR_PREDICATE,
"getopt",
"getopt",
"lambda_getopt_m_348",
3,
0
},
"getopt",
"getopt.m",
348,
"4"
};

static const MR_UserClosureId
mercury_data__closure_layout__getopt__init_option_table_2_0_2 = {
{
MR_PREDICATE,
"list",
"list",
"cons",
3,
0
},
"getopt",
"solutions.opt",
68,
"4"
};

static const MR_UserClosureId
mercury_data__closure_layout__getopt__init_option_table_2_0_1 = {
{
MR_PREDICATE,
"getopt",
"getopt",
"lambda_getopt_m_341",
3,
0
},
"getopt",
"getopt.m",
341,
"4"
};


MR_decl_entry(list__cons_3_0);
MR_decl_entry(solutions__builtin_aggregate_4_7);
MR_decl_entry(list__length_2_3_0);
MR_decl_entry(list__merge_sort_and_remove_dups_2_3_0);
MR_decl_entry(tree234__assoc_list_to_tree234_2_3_0);

MR_BEGIN_MODULE(getopt_module0)
	MR_init_entry1(getopt__init_option_table_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__getopt__init_option_table_2_0);
	MR_init_label3(getopt__init_option_table_2_0,6,7,8)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'init_option_table'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__getopt__init_option_table_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(3,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(getopt__IntroducedFrom__pred__init_option_table__341__1_3_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr1, 3) = MR_r1;
	MR_tfield(0, MR_tempr1, 4) = MR_r2;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr2, 0) = (MR_Word) MR_CTOR_ADDR(pair, pair, 2);
	MR_tfield(0, MR_tempr2, 1) = MR_r1;
	MR_tfield(0, MR_tempr2, 2) = (MR_Word) MR_CTOR0_ADDR(getopt, option_data);
	MR_tag_alloc_heap(MR_tempr3, 0, (MR_Integer) 4);
	MR_r4 = MR_tempr3;
	MR_tfield(0, MR_tempr3, 0) = (MR_Word) MR_COMMON(5,0);
	MR_tfield(0, MR_tempr3, 1) = (MR_Word) MR_ENTRY_AP(list__cons_3_0);
	MR_tfield(0, MR_tempr3, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr3, 3) = MR_tempr2;
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 0) = (MR_Word) MR_LIST_CTOR_ADDR;
	MR_tfield(0, MR_r2, 1) = MR_tempr2;
	MR_sv(1) = MR_r1;
	MR_sv(2) = (MR_Word) MR_CTOR0_ADDR(getopt, option_data);
	MR_sv(3) = MR_tempr2;
	MR_r1 = MR_tempr2;
	MR_r5 = (MR_Word) MR_tbmkword(0, 0);
	}
	MR_np_call_localret_ent(solutions__builtin_aggregate_4_7,
		getopt__init_option_table_2_0_i6);
MR_def_label(getopt__init_option_table_2_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(4);
	MR_r3 = (MR_Integer) 0;
	MR_np_call_localret_ent(list__length_2_3_0,
		getopt__init_option_table_2_0_i7);
MR_def_label(getopt__init_option_table_2_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(4);
	}
	MR_np_call_localret_ent(list__merge_sort_and_remove_dups_2_3_0,
		getopt__init_option_table_2_0_i8);
MR_def_label(getopt__init_option_table_2_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tempr1;
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(tree234__assoc_list_to_tree234_2_3_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(solutions__builtin_aggregate_4_0);

MR_BEGIN_MODULE(getopt_module1)
	MR_init_entry1(getopt__init_option_table_multi_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__getopt__init_option_table_multi_2_0);
	MR_init_label3(getopt__init_option_table_multi_2_0,6,7,8)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'init_option_table_multi'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__getopt__init_option_table_multi_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(3,1);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(getopt__IntroducedFrom__pred__init_option_table_multi__348__1_3_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr1, 3) = MR_r1;
	MR_tfield(0, MR_tempr1, 4) = MR_r2;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr2, 0) = (MR_Word) MR_CTOR_ADDR(pair, pair, 2);
	MR_tfield(0, MR_tempr2, 1) = MR_r1;
	MR_tfield(0, MR_tempr2, 2) = (MR_Word) MR_CTOR0_ADDR(getopt, option_data);
	MR_tag_alloc_heap(MR_tempr3, 0, (MR_Integer) 4);
	MR_r4 = MR_tempr3;
	MR_tfield(0, MR_tempr3, 0) = (MR_Word) MR_COMMON(5,1);
	MR_tfield(0, MR_tempr3, 1) = (MR_Word) MR_ENTRY_AP(list__cons_3_0);
	MR_tfield(0, MR_tempr3, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr3, 3) = MR_tempr2;
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 0) = (MR_Word) MR_LIST_CTOR_ADDR;
	MR_tfield(0, MR_r2, 1) = MR_tempr2;
	MR_sv(1) = MR_r1;
	MR_sv(2) = (MR_Word) MR_CTOR0_ADDR(getopt, option_data);
	MR_sv(3) = MR_tempr2;
	MR_r1 = MR_tempr2;
	MR_r5 = (MR_Word) MR_tbmkword(0, 0);
	}
	MR_np_call_localret_ent(solutions__builtin_aggregate_4_0,
		getopt__init_option_table_multi_2_0_i6);
MR_def_label(getopt__init_option_table_multi_2_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(4);
	MR_r3 = (MR_Integer) 0;
	MR_np_call_localret_ent(list__length_2_3_0,
		getopt__init_option_table_multi_2_0_i7);
MR_def_label(getopt__init_option_table_multi_2_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(4);
	}
	MR_np_call_localret_ent(list__merge_sort_and_remove_dups_2_3_0,
		getopt__init_option_table_multi_2_0_i8);
MR_def_label(getopt__init_option_table_multi_2_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tempr1;
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(tree234__assoc_list_to_tree234_2_3_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__string__append_list_1_0);
MR_declare_entry(mercury__do_call_closure_3);
MR_decl_entry(list__merge_and_remove_dups_3_0);

MR_BEGIN_MODULE(getopt_module2)
	MR_init_entry1(getopt__process_special_8_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__getopt__process_special_8_0);
	MR_init_label10(getopt__process_special_8_0,7,3,12,10,17,9,22,24,20,28)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'process_special'/8 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(getopt__process_special_8_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_r8 = MR_tfield(0, MR_r5, 2);
	if (MR_LTAGS_TESTR(MR_r8,0,0)) {
		MR_GOTO_LAB(getopt__process_special_8_0_i3);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r2;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_TAG_COMMON(1,6,0);
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = (MR_Word) MR_string_const("option \140", 8);
	MR_tfield(1, MR_r1, 1) = MR_tempr1;
	MR_sv(1) = MR_r7;
	}
	MR_np_call_localret_ent(fn__string__append_list_1_0,
		getopt__process_special_8_0_i7);
MR_def_label(getopt__process_special_8_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(1);
	MR_decr_sp_and_return(4);
	}
MR_def_label(getopt__process_special_8_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r8,1)) {
		MR_GOTO_LAB(getopt__process_special_8_0_i9);
	}
	MR_sv(2) = MR_r2;
	MR_sv(1) = MR_r7;
	MR_r1 = MR_tfield(1, MR_r8, 0);
	MR_r2 = MR_r3;
	MR_r3 = MR_r4;
	MR_r4 = MR_r6;
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(getopt__process_special_8_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_3),
		mercury__getopt__process_special_8_0_i12);
MR_def_label(getopt__process_special_8_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(getopt__process_special_8_0_i10);
	}
	MR_r1 = MR_r2;
	MR_r2 = MR_sv(1);
	MR_decr_sp_and_return(4);
MR_def_label(getopt__process_special_8_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_r2;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_TAG_COMMON(1,6,1);
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = (MR_Word) MR_string_const("the handler of option \140", 23);
	MR_tfield(1, MR_r1, 1) = MR_tempr2;
	}
	MR_np_call_localret_ent(fn__string__append_list_1_0,
		getopt__process_special_8_0_i17);
MR_def_label(getopt__process_special_8_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r2, 0) = MR_r1;
	MR_r1 = MR_r2;
	MR_r2 = MR_sv(1);
	MR_decr_sp_and_return(4);
MR_def_label(getopt__process_special_8_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r2;
	MR_sv(1) = MR_r7;
	MR_sv(3) = MR_r1;
	MR_r1 = MR_tfield(2, MR_r8, 0);
	MR_r2 = MR_r3;
	MR_r3 = MR_r4;
	MR_r4 = MR_r6;
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(getopt__process_special_8_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_3),
		mercury__getopt__process_special_8_0_i22);
MR_def_label(getopt__process_special_8_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(getopt__process_special_8_0_i20);
	}
	MR_sv(2) = MR_r2;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_r3;
	MR_r3 = MR_sv(1);
	MR_np_call_localret_ent(list__merge_and_remove_dups_3_0,
		getopt__process_special_8_0_i24);
MR_def_label(getopt__process_special_8_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	MR_decr_sp_and_return(4);
	}
MR_def_label(getopt__process_special_8_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_r2;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_TAG_COMMON(1,6,1);
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = (MR_Word) MR_string_const("the handler of option \140", 23);
	MR_tfield(1, MR_r1, 1) = MR_tempr2;
	}
	MR_np_call_localret_ent(fn__string__append_list_1_0,
		getopt__process_special_8_0_i28);
MR_def_label(getopt__process_special_8_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(1);
	MR_decr_sp_and_return(4);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(set__insert_3_0);
MR_decl_entry(string__to_int_2_0);
MR_decl_entry(require__error_1_0);
MR_decl_entry(map__set_4_0);
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_string_0;
MR_decl_entry(list__append_3_1);

MR_BEGIN_MODULE(getopt_module3)
	MR_init_entry1(getopt__process_option_9_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__getopt__process_option_9_0);
	MR_init_label10(getopt__process_option_9_0,4,6,3,12,17,15,21,14,11,26)
	MR_init_label10(getopt__process_option_9_0,273,31,33,30,37,39,36,44,48,46)
	MR_init_label10(getopt__process_option_9_0,51,43,54,59,57,53,68,72,70,67)
	MR_init_label10(getopt__process_option_9_0,78,83,81,89,80,77,93,92,100,104)
	MR_init_label1(getopt__process_option_9_0,102)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'process_option'/9 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(getopt__process_option_9_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,1)) {
		MR_GOTO_LAB(getopt__process_option_9_0_i3);
	}
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r3;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_sv(2) = MR_tempr1;
	MR_sv(4) = MR_r5;
	MR_sv(5) = MR_r6;
	MR_sv(3) = MR_r7;
	MR_sv(7) = MR_r1;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_r8;
	}
	MR_np_call_localret_ent(set__insert_3_0,
		getopt__process_option_9_0_i4);
MR_def_label(getopt__process_option_9_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(4),0,0)) {
		MR_GOTO_LAB(getopt__process_option_9_0_i6);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = (MR_Word) MR_TAG_COMMON(1,7,0);
	MR_r5 = MR_sv(5);
	MR_r6 = MR_sv(3);
	MR_r7 = MR_tempr1;
	MR_succip_word = MR_sv(8);
	MR_decr_sp(8);
	MR_np_tailcall_ent(getopt__process_special_8_0);
	}
MR_def_label(getopt__process_option_9_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = (MR_Word) MR_TAG_COMMON(1,7,1);
	MR_r5 = MR_sv(5);
	MR_r6 = MR_sv(3);
	MR_r7 = MR_tempr1;
	MR_succip_word = MR_sv(8);
	MR_decr_sp(8);
	MR_np_tailcall_ent(getopt__process_special_8_0);
	}
MR_def_label(getopt__process_option_9_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,2)) {
		MR_GOTO_LAB(getopt__process_option_9_0_i11);
	}
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r3;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_sv(2) = MR_tempr1;
	MR_sv(4) = MR_r5;
	MR_sv(5) = MR_r6;
	MR_sv(3) = MR_r7;
	MR_sv(7) = MR_r1;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_r8;
	}
	MR_np_call_localret_ent(set__insert_3_0,
		getopt__process_option_9_0_i12);
MR_def_label(getopt__process_option_9_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_sv(4),0,0)) {
		MR_GOTO_LAB(getopt__process_option_9_0_i14);
	}
	MR_r2 = MR_tfield(1, MR_sv(4), 0);
	MR_sv(4) = MR_r2;
	MR_sv(6) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(string__to_int_2_0,
		getopt__process_option_9_0_i17);
MR_def_label(getopt__process_option_9_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(getopt__process_option_9_0_i15);
	}
	MR_tag_alloc_heap(MR_r4, 2, (MR_Integer) 1);
	MR_tfield(2, MR_r4, 0) = MR_r2;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r5 = MR_sv(5);
	MR_r6 = MR_sv(3);
	MR_r7 = MR_sv(6);
	MR_succip_word = MR_sv(8);
	MR_decr_sp(8);
	MR_np_tailcall_ent(getopt__process_special_8_0);
MR_def_label(getopt__process_option_9_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(4);
	MR_r1 = MR_sv(6);
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(f_103_101_116_111_112_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_110_117_109_101_114_105_99_95_97_114_103_117_109_101_110_116_95_95_91_49_93_95_48_3_0,
		getopt__process_option_9_0_i21);
MR_def_label(getopt__process_option_9_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(6);
	MR_decr_sp_and_return(8);
MR_def_label(getopt__process_option_9_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("int_special argument expected in getopt.process_option", 54);
	MR_succip_word = MR_sv(8);
	MR_decr_sp(8);
	MR_np_tailcall_ent(require__error_1_0);
MR_def_label(getopt__process_option_9_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,4)) {
		MR_GOTO_LAB(getopt__process_option_9_0_i273);
	}
	if (MR_LTAGS_TEST(MR_r5,0,0)) {
		MR_GOTO_LAB(getopt__process_option_9_0_i26);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr1, 1) = MR_r5;
	MR_r2 = MR_r3;
	MR_r3 = MR_r4;
	MR_r4 = MR_tempr1;
	MR_r5 = MR_r6;
	MR_r6 = MR_r7;
	MR_r7 = MR_r8;
	MR_np_tailcall_ent(getopt__process_special_8_0);
	}
MR_def_label(getopt__process_option_9_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("maybe_string_special argument expected in getopt.process_option", 63);
	MR_np_tailcall_ent(require__error_1_0);
MR_def_label(getopt__process_option_9_0,273)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(getopt__process_option_9_0_i30);
	}
	MR_sv(1) = MR_r3;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_sv(2) = MR_tempr1;
	MR_sv(4) = MR_r5;
	MR_sv(5) = MR_r6;
	MR_sv(3) = MR_r7;
	MR_sv(7) = MR_r1;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_r8;
	}
	MR_np_call_localret_ent(set__insert_3_0,
		getopt__process_option_9_0_i31);
MR_def_label(getopt__process_option_9_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(4),0,0)) {
		MR_GOTO_LAB(getopt__process_option_9_0_i33);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	MR_r5 = MR_sv(5);
	MR_r6 = MR_sv(3);
	MR_r7 = MR_tempr1;
	MR_succip_word = MR_sv(8);
	MR_decr_sp(8);
	MR_np_tailcall_ent(getopt__process_special_8_0);
	}
MR_def_label(getopt__process_option_9_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("no special argument expected in getopt.process_option", 53);
	MR_succip_word = MR_sv(8);
	MR_decr_sp(8);
	MR_np_tailcall_ent(require__error_1_0);
MR_def_label(getopt__process_option_9_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,3)) {
		MR_GOTO_LAB(getopt__process_option_9_0_i36);
	}
	MR_sv(1) = MR_r3;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_sv(2) = MR_tempr1;
	MR_sv(4) = MR_r5;
	MR_sv(5) = MR_r6;
	MR_sv(3) = MR_r7;
	MR_sv(7) = MR_r1;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_r8;
	}
	MR_np_call_localret_ent(set__insert_3_0,
		getopt__process_option_9_0_i37);
MR_def_label(getopt__process_option_9_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_sv(4),0,0)) {
		MR_GOTO_LAB(getopt__process_option_9_0_i39);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_r4 = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr1, 1) = MR_tfield(1, MR_sv(4), 0);
	MR_tempr2 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r5 = MR_sv(5);
	MR_r6 = MR_sv(3);
	MR_r7 = MR_tempr2;
	MR_succip_word = MR_sv(8);
	MR_decr_sp(8);
	MR_np_tailcall_ent(getopt__process_special_8_0);
	}
MR_def_label(getopt__process_option_9_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("string_special argument expected in getopt.process_option", 57);
	MR_succip_word = MR_sv(8);
	MR_decr_sp(8);
	MR_np_tailcall_ent(require__error_1_0);
MR_def_label(getopt__process_option_9_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r2,1)) {
		MR_GOTO_LAB(getopt__process_option_9_0_i43);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_sv(2) = MR_tempr1;
	MR_sv(4) = MR_r5;
	MR_sv(3) = MR_r7;
	MR_sv(7) = MR_r1;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_r8;
	}
	MR_np_call_localret_ent(set__insert_3_0,
		getopt__process_option_9_0_i44);
MR_def_label(getopt__process_option_9_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(4),0,0)) {
		MR_GOTO_LAB(getopt__process_option_9_0_i46);
	}
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(getopt, option_data);
	MR_r3 = MR_sv(2);
	MR_r4 = (MR_Word) MR_TAG_COMMON(1,7,0);
	MR_r5 = MR_sv(3);
	MR_np_call_localret_ent(map__set_4_0,
		getopt__process_option_9_0_i48);
MR_def_label(getopt__process_option_9_0,48)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(4);
	MR_decr_sp_and_return(8);
	}
MR_def_label(getopt__process_option_9_0,46)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(getopt, option_data);
	MR_r3 = MR_sv(2);
	MR_r4 = (MR_Word) MR_TAG_COMMON(1,7,1);
	MR_r5 = MR_sv(3);
	MR_np_call_localret_ent(map__set_4_0,
		getopt__process_option_9_0_i51);
MR_def_label(getopt__process_option_9_0,51)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(4);
	MR_decr_sp_and_return(8);
	}
MR_def_label(getopt__process_option_9_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r2,2)) {
		MR_GOTO_LAB(getopt__process_option_9_0_i53);
	}
	MR_sv(1) = MR_r3;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_sv(2) = MR_tempr1;
	MR_sv(4) = MR_r5;
	MR_sv(3) = MR_r7;
	MR_sv(7) = MR_r1;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_r8;
	}
	MR_np_call_localret_ent(set__insert_3_0,
		getopt__process_option_9_0_i54);
MR_def_label(getopt__process_option_9_0,54)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_sv(4),0,0)) {
		MR_GOTO_LAB(getopt__process_option_9_0_i80);
	}
	MR_r2 = MR_tfield(1, MR_sv(4), 0);
	MR_sv(4) = MR_r1;
	MR_sv(5) = MR_r2;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(string__to_int_2_0,
		getopt__process_option_9_0_i59);
MR_def_label(getopt__process_option_9_0,59)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(getopt__process_option_9_0_i57);
	}
	MR_tag_alloc_heap(MR_r4, 2, (MR_Integer) 1);
	MR_tfield(2, MR_r4, 0) = MR_r2;
	MR_r1 = MR_sv(7);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(getopt, option_data);
	MR_r3 = MR_sv(2);
	MR_r5 = MR_sv(3);
	MR_np_call_localret_ent(map__set_4_0,
		getopt__process_option_9_0_i104);
MR_def_label(getopt__process_option_9_0,57)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(5);
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(f_103_101_116_111_112_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_110_117_109_101_114_105_99_95_97_114_103_117_109_101_110_116_95_95_91_49_93_95_48_3_0,
		getopt__process_option_9_0_i89);
MR_def_label(getopt__process_option_9_0,53)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r2,3,3)) {
		MR_GOTO_LAB(getopt__process_option_9_0_i67);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_sv(2) = MR_tempr1;
	MR_sv(4) = MR_r5;
	MR_sv(3) = MR_r7;
	MR_sv(1) = MR_tfield(3, MR_r2, 1);
	MR_sv(7) = MR_r1;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_r8;
	}
	MR_np_call_localret_ent(set__insert_3_0,
		getopt__process_option_9_0_i68);
MR_def_label(getopt__process_option_9_0,68)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_sv(4),0,0)) {
		MR_GOTO_LAB(getopt__process_option_9_0_i70);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_tfield(1, MR_sv(4), 0);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_sv(4) = MR_r1;
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = MR_sv(1);
	}
	MR_np_call_localret_ent(list__append_3_1,
		getopt__process_option_9_0_i72);
MR_def_label(getopt__process_option_9_0,72)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_r4 = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 3;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(getopt, option_data);
	MR_r3 = MR_sv(2);
	MR_r5 = MR_sv(3);
	}
	MR_np_call_localret_ent(map__set_4_0,
		getopt__process_option_9_0_i104);
MR_def_label(getopt__process_option_9_0,70)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("acumulating argument expected in getopt.process_option", 54);
	MR_succip_word = MR_sv(8);
	MR_decr_sp(8);
	MR_np_tailcall_ent(require__error_1_0);
MR_def_label(getopt__process_option_9_0,67)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r2,3,1)) {
		MR_GOTO_LAB(getopt__process_option_9_0_i77);
	}
	MR_sv(1) = MR_r3;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_sv(2) = MR_tempr1;
	MR_sv(4) = MR_r5;
	MR_sv(3) = MR_r7;
	MR_sv(7) = MR_r1;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_r8;
	}
	MR_np_call_localret_ent(set__insert_3_0,
		getopt__process_option_9_0_i78);
MR_def_label(getopt__process_option_9_0,78)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_sv(4),0,0)) {
		MR_GOTO_LAB(getopt__process_option_9_0_i80);
	}
	MR_r2 = MR_tfield(1, MR_sv(4), 0);
	MR_sv(4) = MR_r1;
	MR_sv(5) = MR_r2;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(string__to_int_2_0,
		getopt__process_option_9_0_i83);
MR_def_label(getopt__process_option_9_0,83)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(getopt__process_option_9_0_i81);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_r2;
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 2);
	MR_r4 = MR_tempr2;
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr2, 1) = MR_tempr1;
	MR_r1 = MR_sv(7);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(getopt, option_data);
	MR_r3 = MR_sv(2);
	MR_r5 = MR_sv(3);
	}
	MR_np_call_localret_ent(map__set_4_0,
		getopt__process_option_9_0_i104);
MR_def_label(getopt__process_option_9_0,81)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(5);
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(f_103_101_116_111_112_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_110_117_109_101_114_105_99_95_97_114_103_117_109_101_110_116_95_95_91_49_93_95_48_3_0,
		getopt__process_option_9_0_i89);
MR_def_label(getopt__process_option_9_0,89)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(4);
	MR_decr_sp_and_return(8);
MR_def_label(getopt__process_option_9_0,80)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("integer argument expected in getopt.process_option", 50);
	MR_succip_word = MR_sv(8);
	MR_decr_sp(8);
	MR_np_tailcall_ent(require__error_1_0);
MR_def_label(getopt__process_option_9_0,77)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r2,3,2)) {
		MR_GOTO_LAB(getopt__process_option_9_0_i92);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_sv(2) = MR_tempr1;
	MR_sv(4) = MR_r5;
	MR_sv(3) = MR_r7;
	MR_sv(7) = MR_r1;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_r8;
	}
	MR_np_call_localret_ent(set__insert_3_0,
		getopt__process_option_9_0_i93);
MR_def_label(getopt__process_option_9_0,93)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_sv(4),0,0)) {
		MR_GOTO_LAB(getopt__process_option_9_0_i102);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_r4 = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 2;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(getopt, option_data);
	MR_r3 = MR_sv(2);
	MR_r5 = MR_sv(3);
	}
	MR_np_call_localret_ent(map__set_4_0,
		getopt__process_option_9_0_i104);
MR_def_label(getopt__process_option_9_0,92)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_sv(2) = MR_tempr1;
	MR_sv(4) = MR_r5;
	MR_sv(3) = MR_r7;
	MR_sv(7) = MR_r1;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_r8;
	}
	MR_np_call_localret_ent(set__insert_3_0,
		getopt__process_option_9_0_i100);
MR_def_label(getopt__process_option_9_0,100)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_sv(4),0,0)) {
		MR_GOTO_LAB(getopt__process_option_9_0_i102);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_r4 = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr1, 1) = MR_tfield(1, MR_sv(4), 0);
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(getopt, option_data);
	MR_r3 = MR_sv(2);
	MR_r5 = MR_sv(3);
	}
	MR_np_call_localret_ent(map__set_4_0,
		getopt__process_option_9_0_i104);
MR_def_label(getopt__process_option_9_0,104)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 1);
	MR_tfield(0, MR_r2, 0) = MR_r1;
	MR_r1 = MR_r2;
	MR_r2 = MR_sv(4);
	MR_decr_sp_and_return(8);
MR_def_label(getopt__process_option_9_0,102)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("string argument expected in getopt.process_option", 49);
	MR_succip_word = MR_sv(8);
	MR_decr_sp(8);
	MR_np_tailcall_ent(require__error_1_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_declare_entry(mercury__do_call_closure_1);
MR_decl_entry(tree234__search_3_0);
MR_decl_entry(string__from_char_list_2_0);
MR_decl_entry(string__to_char_list_2_1);
MR_decl_entry(string__append_3_2);
MR_decl_entry(string__char_to_string_2_0);
MR_decl_entry(fn__f_115_116_114_105_110_103_95_95_43_43_2_0);

MR_BEGIN_MODULE(getopt_module4)
	MR_init_entry1(getopt__handle_short_options_10_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__getopt__handle_short_options_10_0);
	MR_init_label10(getopt__handle_short_options_10_0,131,3,7,10,14,15,16,17,124,18)
	MR_init_label10(getopt__handle_short_options_10_0,13,24,25,31,12,39,40,42,9,45)
	MR_init_label6(getopt__handle_short_options_10_0,46,47,5,50,51,52)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'handle_short_options'/10 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(getopt__handle_short_options_10_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(11);
	MR_sv(11) = (MR_Word) MR_succip;
MR_def_label(getopt__handle_short_options_10_0,131)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(getopt__handle_short_options_10_0_i3);
	}
	MR_tag_alloc_heap(MR_r3, 0, (MR_Integer) 1);
	MR_tfield(0, MR_r3, 0) = MR_r6;
	MR_r1 = MR_r4;
	MR_r2 = MR_r5;
	MR_r4 = MR_r7;
	MR_decr_sp_and_return(11);
MR_def_label(getopt__handle_short_options_10_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(1, MR_r2, 0);
	MR_sv(5) = MR_r2;
	MR_tempr2 = MR_r3;
	MR_sv(1) = MR_tempr2;
	MR_sv(6) = MR_r4;
	MR_sv(7) = MR_r5;
	MR_sv(2) = MR_r6;
	MR_sv(3) = MR_r7;
	MR_sv(8) = MR_tempr1;
	MR_sv(9) = MR_tfield(1, MR_r2, 1);
	MR_sv(10) = MR_r1;
	MR_r1 = MR_tfield(0, MR_tempr2, 0);
	MR_r2 = MR_tempr1;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(getopt__handle_short_options_10_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_1),
		mercury__getopt__handle_short_options_10_0_i7);
MR_def_label(getopt__handle_short_options_10_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(getopt__handle_short_options_10_0_i5);
	}
	MR_sv(4) = MR_r2;
	MR_r1 = MR_sv(10);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(getopt, option_data);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(4);
	MR_np_call_localret_ent(tree234__search_3_0,
		getopt__handle_short_options_10_0_i10);
MR_def_label(getopt__handle_short_options_10_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(getopt__handle_short_options_10_0_i9);
	}
	if (MR_LTAGS_TESTR(MR_r2,0,1)) {
		MR_GOTO_LAB(getopt__handle_short_options_10_0_i14);
	}
	MR_r1 = MR_r2;
	MR_r2 = (MR_Integer) 0;
	MR_GOTO_LAB(getopt__handle_short_options_10_0_i13);
MR_def_label(getopt__handle_short_options_10_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,2)) {
		MR_GOTO_LAB(getopt__handle_short_options_10_0_i15);
	}
	MR_r1 = MR_r2;
	MR_r2 = (MR_Integer) 1;
	MR_GOTO_LAB(getopt__handle_short_options_10_0_i13);
MR_def_label(getopt__handle_short_options_10_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,4)) {
		MR_GOTO_LAB(getopt__handle_short_options_10_0_i16);
	}
	MR_r1 = MR_r2;
	MR_r2 = (MR_Integer) 1;
	MR_GOTO_LAB(getopt__handle_short_options_10_0_i13);
MR_def_label(getopt__handle_short_options_10_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(getopt__handle_short_options_10_0_i17);
	}
	MR_r1 = MR_r2;
	MR_r2 = (MR_Integer) 0;
	MR_GOTO_LAB(getopt__handle_short_options_10_0_i13);
MR_def_label(getopt__handle_short_options_10_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,3)) {
		MR_GOTO_LAB(getopt__handle_short_options_10_0_i18);
	}
MR_def_label(getopt__handle_short_options_10_0,124)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_r2 = (MR_Integer) 1;
	MR_GOTO_LAB(getopt__handle_short_options_10_0_i13);
MR_def_label(getopt__handle_short_options_10_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r2,1)) {
		MR_GOTO_LAB(getopt__handle_short_options_10_0_i124);
	}
	MR_r1 = MR_r2;
	MR_r2 = (MR_Integer) 0;
MR_def_label(getopt__handle_short_options_10_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) 1 == (MR_Integer) MR_r2)) {
		MR_GOTO_LAB(getopt__handle_short_options_10_0_i24);
	}
	MR_r3 = MR_r2;
	MR_r2 = MR_r1;
	MR_GOTO_LAB(getopt__handle_short_options_10_0_i12);
MR_def_label(getopt__handle_short_options_10_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(9),0,0)) {
		MR_GOTO_LAB(getopt__handle_short_options_10_0_i25);
	}
	if (MR_LTAGS_TEST(MR_sv(6),0,0)) {
		MR_GOTO_LAB(getopt__handle_short_options_10_0_i25);
	}
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_tfield(1, MR_sv(6), 0);
	MR_tfield(1, MR_r2, 1) = MR_sv(7);
	MR_tag_alloc_heap(MR_sv(8), 1, (MR_Integer) 1);
	MR_tfield(1, MR_sv(8), 0) = MR_tfield(1, MR_r2, 0);
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = (MR_Integer) 45;
	MR_tfield(1, MR_tempr1, 1) = MR_sv(5);
	MR_sv(5) = MR_r1;
	MR_sv(6) = MR_tfield(1, MR_sv(6), 1);
	MR_sv(7) = MR_r2;
	MR_sv(9) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(string__from_char_list_2_0,
		getopt__handle_short_options_10_0_i39);
MR_def_label(getopt__handle_short_options_10_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(9);
	MR_np_call_localret_ent(string__from_char_list_2_0,
		getopt__handle_short_options_10_0_i31);
MR_def_label(getopt__handle_short_options_10_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r2, 0) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(8);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = (MR_Integer) 45;
	MR_tfield(1, MR_r1, 1) = MR_tempr1;
	MR_sv(8) = MR_r2;
	MR_sv(9) = (MR_Word) MR_tbmkword(0, 0);
	}
	MR_np_call_localret_ent(string__from_char_list_2_0,
		getopt__handle_short_options_10_0_i39);
MR_def_label(getopt__handle_short_options_10_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(8);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = (MR_Integer) 45;
	MR_tfield(1, MR_r1, 1) = MR_tempr1;
	MR_sv(5) = MR_r2;
	MR_sv(8) = (MR_Word) MR_tbmkword(0, 0);
	}
	MR_np_call_localret_ent(string__from_char_list_2_0,
		getopt__handle_short_options_10_0_i39);
MR_def_label(getopt__handle_short_options_10_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(10);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(4);
	MR_r5 = MR_sv(8);
	MR_r6 = MR_sv(1);
	MR_r7 = MR_sv(2);
	MR_r8 = MR_sv(3);
	}
	MR_np_call_localret_ent(getopt__process_option_9_0,
		getopt__handle_short_options_10_0_i40);
MR_def_label(getopt__handle_short_options_10_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,1)) {
		MR_GOTO_LAB(getopt__handle_short_options_10_0_i42);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_sv(7);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tempr2;
	MR_decr_sp_and_return(11);
	}
MR_def_label(getopt__handle_short_options_10_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(10);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_sv(9);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(6);
	MR_r5 = MR_sv(7);
	MR_r6 = MR_tfield(0, MR_tempr1, 0);
	MR_r7 = MR_tempr2;
	MR_succip_word = MR_sv(11);
	MR_GOTO_LAB(getopt__handle_short_options_10_0_i131);
	}
MR_def_label(getopt__handle_short_options_10_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = MR_sv(8);
	MR_tfield(1, MR_r1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_np_call_localret_ent(string__to_char_list_2_1,
		getopt__handle_short_options_10_0_i45);
MR_def_label(getopt__handle_short_options_10_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("\'", 1);
	MR_np_call_localret_ent(string__append_3_2,
		getopt__handle_short_options_10_0_i46);
MR_def_label(getopt__handle_short_options_10_0,46)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("unknown type for option \140-", 26);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(string__append_3_2,
		getopt__handle_short_options_10_0_i47);
MR_def_label(getopt__handle_short_options_10_0,47)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r3, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r3, 0) = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(7);
	MR_r4 = MR_sv(3);
	MR_decr_sp_and_return(11);
MR_def_label(getopt__handle_short_options_10_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr1 = MR_sv(6);
	MR_tempr2 = MR_sv(7);
	MR_tempr3 = MR_sv(3);
	MR_tempr4 = MR_sv(8);
	MR_r1 = MR_tempr4;
	}
	MR_np_call_localret_ent(string__char_to_string_2_0,
		getopt__handle_short_options_10_0_i50);
MR_def_label(getopt__handle_short_options_10_0,50)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("\'", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		getopt__handle_short_options_10_0_i51);
MR_def_label(getopt__handle_short_options_10_0,51)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("unrecognized option \140-", 22);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		getopt__handle_short_options_10_0_i52);
MR_def_label(getopt__handle_short_options_10_0,52)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r3, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r3, 0) = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(7);
	MR_r4 = MR_sv(3);
	MR_decr_sp_and_return(11);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(map__search_3_0);
MR_decl_entry(string__append_list_2_0);

MR_BEGIN_MODULE(getopt_module5)
	MR_init_entry1(getopt__process_negated_option_7_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__getopt__process_negated_option_7_0);
	MR_init_label10(getopt__process_negated_option_7_0,3,7,6,10,18,17,21,28,36,35)
	MR_init_label10(getopt__process_negated_option_7_0,45,40,48,50,47,53,55,52,58,60)
	MR_init_label4(getopt__process_negated_option_7_0,57,66,2,71)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'process_negated_option'/7 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(getopt__process_negated_option_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(5) = MR_r2;
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r4;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r5;
	MR_sv(3) = MR_tempr1;
	MR_sv(4) = MR_r6;
	MR_sv(6) = MR_r1;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(getopt, option_data);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(1);
	}
	MR_np_call_localret_ent(map__search_3_0,
		getopt__process_negated_option_7_0_i3);
MR_def_label(getopt__process_negated_option_7_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(getopt__process_negated_option_7_0_i2);
	}
	if (MR_LTAGS_TESTR(MR_r2,0,1)) {
		MR_GOTO_LAB(getopt__process_negated_option_7_0_i6);
	}
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(4);
	MR_np_call_localret_ent(set__insert_3_0,
		getopt__process_negated_option_7_0_i7);
MR_def_label(getopt__process_negated_option_7_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(1);
	MR_r4 = (MR_Word) MR_TAG_COMMON(1,7,1);
	MR_r5 = MR_sv(2);
	MR_r6 = MR_sv(3);
	MR_r7 = MR_tempr1;
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(getopt__process_special_8_0);
	}
MR_def_label(getopt__process_negated_option_7_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,2)) {
		MR_GOTO_LAB(getopt__process_negated_option_7_0_i10);
	}
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(5);
	MR_tfield(1, MR_r2, 1) = (MR_Word) MR_TAG_COMMON(1,6,3);
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = (MR_Word) MR_string_const("cannot negate option \140", 22);
	MR_tfield(1, MR_r1, 1) = MR_r2;
	MR_np_call_localret_ent(string__append_list_2_0,
		getopt__process_negated_option_7_0_i66);
MR_def_label(getopt__process_negated_option_7_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,4)) {
		MR_GOTO_LAB(getopt__process_negated_option_7_0_i17);
	}
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(4);
	MR_np_call_localret_ent(set__insert_3_0,
		getopt__process_negated_option_7_0_i18);
MR_def_label(getopt__process_negated_option_7_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(1);
	MR_r4 = (MR_Word) MR_TAG_COMMON(3,8,0);
	MR_r5 = MR_sv(2);
	MR_r6 = MR_sv(3);
	MR_r7 = MR_tempr1;
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(getopt__process_special_8_0);
	}
MR_def_label(getopt__process_negated_option_7_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(getopt__process_negated_option_7_0_i21);
	}
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(5);
	MR_tfield(1, MR_r2, 1) = (MR_Word) MR_TAG_COMMON(1,6,3);
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = (MR_Word) MR_string_const("cannot negate option \140", 22);
	MR_tfield(1, MR_r1, 1) = MR_r2;
	MR_np_call_localret_ent(string__append_list_2_0,
		getopt__process_negated_option_7_0_i45);
MR_def_label(getopt__process_negated_option_7_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,3)) {
		MR_GOTO_LAB(getopt__process_negated_option_7_0_i28);
	}
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(5);
	MR_tfield(1, MR_r2, 1) = (MR_Word) MR_TAG_COMMON(1,6,3);
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = (MR_Word) MR_string_const("cannot negate option \140", 22);
	MR_tfield(1, MR_r1, 1) = MR_r2;
	MR_np_call_localret_ent(string__append_list_2_0,
		getopt__process_negated_option_7_0_i66);
MR_def_label(getopt__process_negated_option_7_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r2,1)) {
		MR_GOTO_LAB(getopt__process_negated_option_7_0_i35);
	}
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(4);
	MR_np_call_localret_ent(set__insert_3_0,
		getopt__process_negated_option_7_0_i36);
MR_def_label(getopt__process_negated_option_7_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(getopt, option_data);
	MR_r3 = MR_sv(1);
	MR_r4 = (MR_Word) MR_TAG_COMMON(1,7,1);
	MR_r5 = MR_sv(3);
	MR_np_call_localret_ent(map__set_4_0,
		getopt__process_negated_option_7_0_i60);
MR_def_label(getopt__process_negated_option_7_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r2,2)) {
		MR_GOTO_LAB(getopt__process_negated_option_7_0_i40);
	}
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(5);
	MR_tfield(1, MR_r2, 1) = (MR_Word) MR_TAG_COMMON(1,6,3);
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = (MR_Word) MR_string_const("cannot negate option \140", 22);
	MR_tfield(1, MR_r1, 1) = MR_r2;
	MR_np_call_localret_ent(string__append_list_2_0,
		getopt__process_negated_option_7_0_i45);
MR_def_label(getopt__process_negated_option_7_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(4);
	MR_decr_sp_and_return(7);
	}
MR_def_label(getopt__process_negated_option_7_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r2,3,3)) {
		MR_GOTO_LAB(getopt__process_negated_option_7_0_i47);
	}
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(4);
	MR_np_call_localret_ent(set__insert_3_0,
		getopt__process_negated_option_7_0_i48);
MR_def_label(getopt__process_negated_option_7_0,48)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(getopt, option_data);
	MR_r3 = MR_sv(1);
	MR_r4 = (MR_Word) MR_TAG_COMMON(3,8,1);
	MR_r5 = MR_sv(3);
	MR_np_call_localret_ent(map__set_4_0,
		getopt__process_negated_option_7_0_i50);
MR_def_label(getopt__process_negated_option_7_0,50)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(5);
	MR_decr_sp_and_return(7);
	}
MR_def_label(getopt__process_negated_option_7_0,47)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r2,3,1)) {
		MR_GOTO_LAB(getopt__process_negated_option_7_0_i52);
	}
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(4);
	MR_np_call_localret_ent(set__insert_3_0,
		getopt__process_negated_option_7_0_i53);
MR_def_label(getopt__process_negated_option_7_0,53)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(getopt, option_data);
	MR_r3 = MR_sv(1);
	MR_r4 = (MR_Word) MR_TAG_COMMON(3,8,0);
	MR_r5 = MR_sv(3);
	MR_np_call_localret_ent(map__set_4_0,
		getopt__process_negated_option_7_0_i55);
MR_def_label(getopt__process_negated_option_7_0,55)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 1);
	MR_tfield(0, MR_r2, 0) = MR_r1;
	MR_r1 = MR_r2;
	MR_r2 = MR_sv(5);
	MR_decr_sp_and_return(7);
MR_def_label(getopt__process_negated_option_7_0,52)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r2,3,2)) {
		MR_GOTO_LAB(getopt__process_negated_option_7_0_i57);
	}
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(4);
	MR_np_call_localret_ent(set__insert_3_0,
		getopt__process_negated_option_7_0_i58);
MR_def_label(getopt__process_negated_option_7_0,58)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(getopt, option_data);
	MR_r3 = MR_sv(1);
	MR_r4 = (MR_Word) MR_TAG_COMMON(3,8,2);
	MR_r5 = MR_sv(3);
	MR_np_call_localret_ent(map__set_4_0,
		getopt__process_negated_option_7_0_i60);
MR_def_label(getopt__process_negated_option_7_0,60)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(5);
	MR_decr_sp_and_return(7);
	}
MR_def_label(getopt__process_negated_option_7_0,57)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(5);
	MR_tfield(1, MR_r2, 1) = (MR_Word) MR_TAG_COMMON(1,6,3);
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = (MR_Word) MR_string_const("cannot negate option \140", 22);
	MR_tfield(1, MR_r1, 1) = MR_r2;
	MR_np_call_localret_ent(string__append_list_2_0,
		getopt__process_negated_option_7_0_i66);
MR_def_label(getopt__process_negated_option_7_0,66)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r2, 0) = MR_r1;
	MR_r1 = MR_r2;
	MR_r2 = MR_sv(4);
	MR_decr_sp_and_return(7);
MR_def_label(getopt__process_negated_option_7_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(5);
	MR_tfield(1, MR_r2, 1) = (MR_Word) MR_TAG_COMMON(1,6,4);
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = (MR_Word) MR_string_const("unknown type for option \140", 25);
	MR_tfield(1, MR_r1, 1) = MR_r2;
	MR_np_call_localret_ent(string__append_list_2_0,
		getopt__process_negated_option_7_0_i71);
MR_def_label(getopt__process_negated_option_7_0,71)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(4);
	MR_decr_sp_and_return(7);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(string__append_3_1);
MR_decl_entry(string__sub_string_search_3_0);
MR_decl_entry(string__split_4_0);
MR_decl_entry(string__first_char_3_2);
MR_decl_entry(string__to_char_list_2_0);

MR_BEGIN_MODULE(getopt_module6)
	MR_init_entry1(getopt__process_arguments_9_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__getopt__process_arguments_9_0);
	MR_init_label10(getopt__process_arguments_9_0,211,3,5,9,13,15,16,18,12,21)
	MR_init_label10(getopt__process_arguments_9_0,8,26,29,31,33,32,28,38,39,42)
	MR_init_label10(getopt__process_arguments_9_0,45,44,49,40,53,25,58,62,70,74)
	MR_init_label10(getopt__process_arguments_9_0,75,77,69,80,81,63,85,87,57,90)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'process_arguments'/9 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__getopt__process_arguments_9_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(11);
	MR_sv(11) = (MR_Word) MR_succip;
MR_def_label(getopt__process_arguments_9_0,211)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(getopt__process_arguments_9_0_i3);
	}
	MR_tag_alloc_heap(MR_r3, 0, (MR_Integer) 1);
	MR_tfield(0, MR_r3, 0) = MR_r5;
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = MR_r4;
	MR_r4 = MR_r6;
	MR_decr_sp_and_return(11);
MR_def_label(getopt__process_arguments_9_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r7 = MR_tfield(1, MR_r2, 1);
	MR_sv(5) = MR_tfield(1, MR_r2, 0);
	if ((strcmp((char *) (MR_Word *) MR_sv(5), MR_string_const("--", 2)) != 0)) {
		MR_GOTO_LAB(getopt__process_arguments_9_0_i5);
	}
	MR_tag_alloc_heap(MR_r3, 0, (MR_Integer) 1);
	MR_tfield(0, MR_r3, 0) = MR_r5;
	MR_r1 = MR_r7;
	MR_r2 = MR_r4;
	MR_r4 = MR_r6;
	MR_decr_sp_and_return(11);
MR_def_label(getopt__process_arguments_9_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r4;
	MR_sv(3) = MR_r5;
	MR_sv(4) = MR_r6;
	MR_sv(6) = MR_r7;
	MR_sv(10) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("--no-", 5);
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(string__append_3_1,
		getopt__process_arguments_9_0_i9);
MR_def_label(getopt__process_arguments_9_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(getopt__process_arguments_9_0_i8);
	}
	MR_sv(7) = MR_r2;
	MR_r1 = MR_tfield(0, MR_sv(1), 1);
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(getopt__process_arguments_9_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_1),
		mercury__getopt__process_arguments_9_0_i13);
MR_def_label(getopt__process_arguments_9_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(getopt__process_arguments_9_0_i12);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(7);
	MR_sv(7) = MR_r2;
	MR_r1 = (MR_Word) MR_string_const("--", 2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		getopt__process_arguments_9_0_i15);
MR_def_label(getopt__process_arguments_9_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(10);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(7);
	MR_r4 = MR_sv(1);
	MR_r5 = MR_sv(3);
	MR_r6 = MR_sv(4);
	}
	MR_np_call_localret_ent(getopt__process_negated_option_7_0,
		getopt__process_arguments_9_0_i16);
MR_def_label(getopt__process_arguments_9_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,1)) {
		MR_GOTO_LAB(getopt__process_arguments_9_0_i18);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tempr2;
	MR_decr_sp_and_return(11);
	}
MR_def_label(getopt__process_arguments_9_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r4 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(5);
	MR_tfield(1, MR_tempr1, 1) = MR_sv(2);
	MR_tempr2 = MR_r1;
	MR_r1 = MR_sv(10);
	MR_tempr3 = MR_r2;
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(1);
	MR_r5 = MR_tfield(0, MR_tempr2, 0);
	MR_r6 = MR_tempr3;
	MR_succip_word = MR_sv(11);
	MR_GOTO_LAB(getopt__process_arguments_9_0_i211);
	}
MR_def_label(getopt__process_arguments_9_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	MR_r2 = (MR_Word) MR_string_const("\'", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		getopt__process_arguments_9_0_i21);
MR_def_label(getopt__process_arguments_9_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("unrecognized option \140", 21);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		getopt__process_arguments_9_0_i81);
MR_def_label(getopt__process_arguments_9_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("--", 2);
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(string__append_3_1,
		getopt__process_arguments_9_0_i26);
MR_def_label(getopt__process_arguments_9_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(getopt__process_arguments_9_0_i25);
	}
	MR_sv(9) = MR_tfield(0, MR_sv(1), 1);
	MR_sv(7) = MR_r2;
	MR_r1 = MR_r2;
	MR_r2 = (MR_Word) MR_string_const("=", 1);
	MR_np_call_localret_ent(string__sub_string_search_3_0,
		getopt__process_arguments_9_0_i29);
MR_def_label(getopt__process_arguments_9_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(getopt__process_arguments_9_0_i28);
	}
	MR_r1 = MR_sv(7);
	MR_np_call_localret_ent(string__split_4_0,
		getopt__process_arguments_9_0_i31);
MR_def_label(getopt__process_arguments_9_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_r1 = MR_r2;
	MR_r2 = (MR_Integer) 61;
	MR_np_call_localret_ent(string__first_char_3_2,
		getopt__process_arguments_9_0_i33);
MR_def_label(getopt__process_arguments_9_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(getopt__process_arguments_9_0_i32);
	}
	MR_tag_alloc_heap(MR_sv(7), 1, (MR_Integer) 1);
	MR_tfield(1, MR_sv(7), 0) = MR_r2;
	MR_r1 = (MR_Word) MR_string_const("--", 2);
	MR_r2 = MR_sv(8);
	MR_GOTO_LAB(getopt__process_arguments_9_0_i38);
MR_def_label(getopt__process_arguments_9_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("bad split of --longoption=arg", 29);
	MR_np_call_localret_ent(require__error_1_0,
		getopt__process_arguments_9_0_i38);
MR_def_label(getopt__process_arguments_9_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(7);
	MR_sv(7) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = (MR_Word) MR_string_const("--", 2);
	MR_r2 = MR_tempr1;
	}
MR_def_label(getopt__process_arguments_9_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r2;
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		getopt__process_arguments_9_0_i39);
MR_def_label(getopt__process_arguments_9_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(8);
	MR_sv(8) = MR_r1;
	MR_r1 = MR_sv(9);
	MR_r2 = MR_tempr1;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(getopt__process_arguments_9_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_1),
		mercury__getopt__process_arguments_9_0_i42);
MR_def_label(getopt__process_arguments_9_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(getopt__process_arguments_9_0_i40);
	}
	MR_sv(9) = MR_r2;
	MR_r1 = MR_sv(10);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(getopt, option_data);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(9);
	MR_np_call_localret_ent(map__search_3_0,
		getopt__process_arguments_9_0_i45);
MR_def_label(getopt__process_arguments_9_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(getopt__process_arguments_9_0_i44);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r8 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(5);
	MR_tfield(1, MR_tempr1, 1) = MR_sv(2);
	MR_r1 = MR_sv(10);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_sv(8);
	MR_r3 = MR_sv(9);
	MR_r4 = MR_tempr2;
	MR_r5 = MR_sv(7);
	MR_r6 = MR_sv(6);
	MR_r7 = MR_sv(1);
	MR_r9 = MR_sv(3);
	MR_r10 = MR_sv(4);
	MR_succip_word = MR_sv(11);
	MR_decr_sp(11);
	MR_np_tailcall_ent(getopt__handle_long_option_13_0);
	}
MR_def_label(getopt__process_arguments_9_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	MR_r2 = (MR_Word) MR_string_const("\'", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		getopt__process_arguments_9_0_i49);
MR_def_label(getopt__process_arguments_9_0,49)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("unknown type for option \140", 25);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		getopt__process_arguments_9_0_i81);
MR_def_label(getopt__process_arguments_9_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(8);
	MR_r2 = (MR_Word) MR_string_const("\'", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		getopt__process_arguments_9_0_i53);
MR_def_label(getopt__process_arguments_9_0,53)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("unrecognized option \140", 21);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		getopt__process_arguments_9_0_i81);
MR_def_label(getopt__process_arguments_9_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	MR_r2 = (MR_Integer) 45;
	MR_np_call_localret_ent(string__first_char_3_2,
		getopt__process_arguments_9_0_i58);
MR_def_label(getopt__process_arguments_9_0,58)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(getopt__process_arguments_9_0_i57);
	}
	if ((strcmp((char *) (MR_Word *) MR_r2, MR_string_const("", 0)) == 0)) {
		MR_GOTO_LAB(getopt__process_arguments_9_0_i57);
	}
	MR_sv(7) = MR_r2;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(string__to_char_list_2_0,
		getopt__process_arguments_9_0_i62);
MR_def_label(getopt__process_arguments_9_0,62)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(getopt__process_arguments_9_0_i63);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(1, MR_r1, 1);
	if (MR_LTAGS_TEST(MR_tempr1,0,0)) {
		MR_GOTO_LAB(getopt__process_arguments_9_0_i63);
	}
	MR_tempr2 = MR_tfield(1, MR_tempr1, 0);
	if (MR_INT_NE(MR_tempr2,45)) {
		MR_GOTO_LAB(getopt__process_arguments_9_0_i63);
	}
	MR_tempr2 = MR_tfield(1, MR_tempr1, 1);
	if (MR_LTAGS_TESTR(MR_tempr2,0,0)) {
		MR_GOTO_LAB(getopt__process_arguments_9_0_i63);
	}
	MR_sv(8) = MR_tfield(1, MR_r1, 0);
	MR_r1 = MR_tfield(0, MR_sv(1), 0);
	MR_r2 = MR_sv(8);
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(getopt__process_arguments_9_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_1),
		mercury__getopt__process_arguments_9_0_i70);
MR_def_label(getopt__process_arguments_9_0,70)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(getopt__process_arguments_9_0_i69);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(8);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = (MR_Integer) 45;
	MR_tfield(1, MR_r1, 1) = MR_tempr1;
	MR_sv(7) = MR_r2;
	}
	MR_np_call_localret_ent(string__from_char_list_2_0,
		getopt__process_arguments_9_0_i74);
MR_def_label(getopt__process_arguments_9_0,74)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(10);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(7);
	MR_r4 = MR_sv(1);
	MR_r5 = MR_sv(3);
	MR_r6 = MR_sv(4);
	}
	MR_np_call_localret_ent(getopt__process_negated_option_7_0,
		getopt__process_arguments_9_0_i75);
MR_def_label(getopt__process_arguments_9_0,75)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,1)) {
		MR_GOTO_LAB(getopt__process_arguments_9_0_i77);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tempr2;
	MR_decr_sp_and_return(11);
	}
MR_def_label(getopt__process_arguments_9_0,77)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r4 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(5);
	MR_tfield(1, MR_tempr1, 1) = MR_sv(2);
	MR_tempr2 = MR_r1;
	MR_r1 = MR_sv(10);
	MR_tempr3 = MR_r2;
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(1);
	MR_r5 = MR_tfield(0, MR_tempr2, 0);
	MR_r6 = MR_tempr3;
	MR_succip_word = MR_sv(11);
	MR_GOTO_LAB(getopt__process_arguments_9_0_i211);
	}
MR_def_label(getopt__process_arguments_9_0,69)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(7);
	MR_r2 = (MR_Word) MR_string_const("\'", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		getopt__process_arguments_9_0_i80);
MR_def_label(getopt__process_arguments_9_0,80)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("unrecognized option \140-", 22);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		getopt__process_arguments_9_0_i81);
MR_def_label(getopt__process_arguments_9_0,81)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r3, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r3, 0) = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(2);
	MR_r4 = MR_sv(4);
	MR_decr_sp_and_return(11);
MR_def_label(getopt__process_arguments_9_0,63)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r5 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(5);
	MR_tfield(1, MR_tempr1, 1) = MR_sv(2);
	MR_tempr2 = MR_r1;
	MR_r1 = MR_sv(10);
	MR_r2 = MR_tempr2;
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(6);
	MR_r6 = MR_sv(3);
	MR_r7 = MR_sv(4);
	}
	MR_np_call_localret_ent(getopt__handle_short_options_10_0,
		getopt__process_arguments_9_0_i85);
MR_def_label(getopt__process_arguments_9_0,85)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r3,1)) {
		MR_GOTO_LAB(getopt__process_arguments_9_0_i87);
	}
	MR_r1 = MR_sv(6);
	MR_decr_sp_and_return(11);
MR_def_label(getopt__process_arguments_9_0,87)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(10);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_tempr3 = MR_r3;
	MR_r3 = MR_sv(1);
	MR_tempr4 = MR_r4;
	MR_r4 = MR_tempr2;
	MR_r5 = MR_tfield(0, MR_tempr3, 0);
	MR_r6 = MR_tempr4;
	MR_succip_word = MR_sv(11);
	MR_GOTO_LAB(getopt__process_arguments_9_0_i211);
	}
MR_def_label(getopt__process_arguments_9_0,57)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(10);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_r5 = MR_sv(3);
	MR_r6 = MR_sv(4);
	MR_np_localcall_lab(getopt__process_arguments_9_0,
		getopt__process_arguments_9_0_i90);
MR_def_label(getopt__process_arguments_9_0,90)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(5);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(11);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(getopt_module7)
	MR_init_entry1(getopt__handle_long_option_13_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__getopt__handle_long_option_13_0);
	MR_init_label10(getopt__handle_long_option_13_0,4,5,6,7,8,9,10,11,12,13)
	MR_init_label10(getopt__handle_long_option_13_0,3,14,15,17,2,20,25,26,27,28)
	MR_init_label10(getopt__handle_long_option_13_0,168,29,24,35,36,37,23,40,42,22)
	MR_init_label2(getopt__handle_long_option_13_0,45,46)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'handle_long_option'/13 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(getopt__handle_long_option_13_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	if (MR_LTAGS_TESTR(MR_r4,0,1)) {
		MR_GOTO_LAB(getopt__handle_long_option_13_0_i4);
	}
	MR_sv(4) = MR_r1;
	MR_r1 = MR_r2;
	MR_r2 = MR_r3;
	MR_r3 = MR_r4;
	MR_r4 = MR_r5;
	MR_r5 = MR_r6;
	MR_sv(1) = MR_r7;
	MR_r6 = MR_r8;
	MR_r7 = MR_r9;
	MR_sv(3) = MR_r10;
	MR_r8 = (MR_Integer) 0;
	MR_GOTO_LAB(getopt__handle_long_option_13_0_i3);
MR_def_label(getopt__handle_long_option_13_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r4,0,2)) {
		MR_GOTO_LAB(getopt__handle_long_option_13_0_i5);
	}
	MR_sv(4) = MR_r1;
	MR_r1 = MR_r2;
	MR_r2 = MR_r3;
	MR_r3 = MR_r4;
	MR_r4 = MR_r5;
	MR_r5 = MR_r6;
	MR_sv(1) = MR_r7;
	MR_r6 = MR_r8;
	MR_r7 = MR_r9;
	MR_sv(3) = MR_r10;
	MR_r8 = (MR_Integer) 1;
	MR_GOTO_LAB(getopt__handle_long_option_13_0_i3);
MR_def_label(getopt__handle_long_option_13_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r4,0,4)) {
		MR_GOTO_LAB(getopt__handle_long_option_13_0_i6);
	}
	MR_sv(4) = MR_r1;
	MR_r1 = MR_r2;
	MR_r2 = MR_r3;
	MR_r3 = MR_r4;
	MR_r4 = MR_r5;
	MR_r5 = MR_r6;
	MR_sv(1) = MR_r7;
	MR_r6 = MR_r8;
	MR_r7 = MR_r9;
	MR_sv(3) = MR_r10;
	MR_r8 = (MR_Integer) 1;
	MR_GOTO_LAB(getopt__handle_long_option_13_0_i3);
MR_def_label(getopt__handle_long_option_13_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r4,0,0)) {
		MR_GOTO_LAB(getopt__handle_long_option_13_0_i7);
	}
	MR_sv(4) = MR_r1;
	MR_r1 = MR_r2;
	MR_r2 = MR_r3;
	MR_r3 = MR_r4;
	MR_r4 = MR_r5;
	MR_r5 = MR_r6;
	MR_sv(1) = MR_r7;
	MR_r6 = MR_r8;
	MR_r7 = MR_r9;
	MR_sv(3) = MR_r10;
	MR_r8 = (MR_Integer) 0;
	MR_GOTO_LAB(getopt__handle_long_option_13_0_i3);
MR_def_label(getopt__handle_long_option_13_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r4,0,3)) {
		MR_GOTO_LAB(getopt__handle_long_option_13_0_i8);
	}
	MR_sv(4) = MR_r1;
	MR_r1 = MR_r2;
	MR_r2 = MR_r3;
	MR_r3 = MR_r4;
	MR_r4 = MR_r5;
	MR_r5 = MR_r6;
	MR_sv(1) = MR_r7;
	MR_r6 = MR_r8;
	MR_r7 = MR_r9;
	MR_sv(3) = MR_r10;
	MR_r8 = (MR_Integer) 1;
	MR_GOTO_LAB(getopt__handle_long_option_13_0_i3);
MR_def_label(getopt__handle_long_option_13_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r4,1)) {
		MR_GOTO_LAB(getopt__handle_long_option_13_0_i9);
	}
	MR_sv(4) = MR_r1;
	MR_r1 = MR_r2;
	MR_r2 = MR_r3;
	MR_r3 = MR_r4;
	MR_r4 = MR_r5;
	MR_r5 = MR_r6;
	MR_sv(1) = MR_r7;
	MR_r6 = MR_r8;
	MR_r7 = MR_r9;
	MR_sv(3) = MR_r10;
	MR_r8 = (MR_Integer) 0;
	MR_GOTO_LAB(getopt__handle_long_option_13_0_i3);
MR_def_label(getopt__handle_long_option_13_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r4,2)) {
		MR_GOTO_LAB(getopt__handle_long_option_13_0_i10);
	}
	MR_sv(4) = MR_r1;
	MR_r1 = MR_r2;
	MR_r2 = MR_r3;
	MR_r3 = MR_r4;
	MR_r4 = MR_r5;
	MR_r5 = MR_r6;
	MR_sv(1) = MR_r7;
	MR_r6 = MR_r8;
	MR_r7 = MR_r9;
	MR_sv(3) = MR_r10;
	MR_r8 = (MR_Integer) 1;
	MR_GOTO_LAB(getopt__handle_long_option_13_0_i3);
MR_def_label(getopt__handle_long_option_13_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r4,3,3)) {
		MR_GOTO_LAB(getopt__handle_long_option_13_0_i11);
	}
	MR_sv(4) = MR_r1;
	MR_r1 = MR_r2;
	MR_r2 = MR_r3;
	MR_r3 = MR_r4;
	MR_r4 = MR_r5;
	MR_r5 = MR_r6;
	MR_sv(1) = MR_r7;
	MR_r6 = MR_r8;
	MR_r7 = MR_r9;
	MR_sv(3) = MR_r10;
	MR_r8 = (MR_Integer) 1;
	MR_GOTO_LAB(getopt__handle_long_option_13_0_i3);
MR_def_label(getopt__handle_long_option_13_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r4,3,1)) {
		MR_GOTO_LAB(getopt__handle_long_option_13_0_i12);
	}
	MR_sv(4) = MR_r1;
	MR_r1 = MR_r2;
	MR_r2 = MR_r3;
	MR_r3 = MR_r4;
	MR_r4 = MR_r5;
	MR_r5 = MR_r6;
	MR_sv(1) = MR_r7;
	MR_r6 = MR_r8;
	MR_r7 = MR_r9;
	MR_sv(3) = MR_r10;
	MR_r8 = (MR_Integer) 1;
	MR_GOTO_LAB(getopt__handle_long_option_13_0_i3);
MR_def_label(getopt__handle_long_option_13_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r4,3,2)) {
		MR_GOTO_LAB(getopt__handle_long_option_13_0_i13);
	}
	MR_sv(4) = MR_r1;
	MR_r1 = MR_r2;
	MR_r2 = MR_r3;
	MR_r3 = MR_r4;
	MR_r4 = MR_r5;
	MR_r5 = MR_r6;
	MR_sv(1) = MR_r7;
	MR_r6 = MR_r8;
	MR_r7 = MR_r9;
	MR_sv(3) = MR_r10;
	MR_r8 = (MR_Integer) 1;
	MR_GOTO_LAB(getopt__handle_long_option_13_0_i3);
MR_def_label(getopt__handle_long_option_13_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_r2;
	MR_r2 = MR_r3;
	MR_r3 = MR_r4;
	MR_r4 = MR_r5;
	MR_r5 = MR_r6;
	MR_sv(1) = MR_r7;
	MR_r6 = MR_r8;
	MR_r7 = MR_r9;
	MR_sv(3) = MR_r10;
	MR_r8 = (MR_Integer) 1;
MR_def_label(getopt__handle_long_option_13_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) 1 == (MR_Integer) MR_r8)) {
		MR_GOTO_LAB(getopt__handle_long_option_13_0_i14);
	}
	MR_r11 = MR_r2;
	MR_r2 = MR_r1;
	MR_r12 = MR_r3;
	MR_r3 = MR_r11;
	MR_r13 = MR_r4;
	MR_r4 = MR_r12;
	MR_r14 = MR_r5;
	MR_r5 = MR_r13;
	MR_r15 = MR_r6;
	MR_r6 = MR_r14;
	MR_r16 = MR_r7;
	MR_r7 = MR_sv(1);
	MR_r17 = MR_r8;
	MR_r8 = MR_r15;
	MR_r9 = MR_r16;
	MR_r10 = MR_sv(3);
	MR_r1 = MR_sv(4);
	MR_GOTO_LAB(getopt__handle_long_option_13_0_i2);
MR_def_label(getopt__handle_long_option_13_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r4,0,0)) {
		MR_GOTO_LAB(getopt__handle_long_option_13_0_i15);
	}
	MR_r11 = MR_r2;
	MR_r2 = MR_r1;
	MR_r12 = MR_r3;
	MR_r3 = MR_r11;
	MR_r13 = MR_r4;
	MR_r4 = MR_r12;
	MR_r14 = MR_r5;
	MR_r5 = MR_r13;
	MR_r15 = MR_r6;
	MR_r6 = MR_r14;
	MR_r16 = MR_r7;
	MR_r7 = MR_sv(1);
	MR_r8 = MR_r15;
	MR_r9 = MR_r16;
	MR_r10 = MR_sv(3);
	MR_r1 = MR_sv(4);
	MR_GOTO_LAB(getopt__handle_long_option_13_0_i2);
MR_def_label(getopt__handle_long_option_13_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r5,0,0)) {
		MR_GOTO_LAB(getopt__handle_long_option_13_0_i17);
	}
	MR_r4 = MR_r5;
	MR_r5 = MR_r7;
	MR_r9 = MR_r6;
	MR_r6 = (MR_Word) MR_tbmkword(0, 0);
	MR_sv(2) = MR_r4;
	MR_r7 = (MR_Integer) 1;
	MR_r10 = MR_sv(3);
	MR_sv(3) = MR_r9;
	MR_r8 = MR_r10;
	MR_GOTO_LAB(getopt__handle_long_option_13_0_i20);
MR_def_label(getopt__handle_long_option_13_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_r4 = MR_tempr1;
	MR_tempr3 = MR_r5;
	MR_tfield(1, MR_tempr1, 0) = MR_tfield(1, MR_tempr3, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_r8 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_tfield(1, MR_tempr1, 0);
	MR_tfield(1, MR_tempr2, 1) = MR_r6;
	MR_r9 = MR_tempr1;
	MR_r4 = MR_tempr3;
	MR_r5 = MR_r7;
	MR_r6 = MR_r9;
	MR_sv(2) = MR_tfield(1, MR_r4, 1);
	MR_r7 = (MR_Integer) 0;
	MR_r10 = MR_sv(3);
	MR_sv(3) = MR_tempr2;
	MR_r8 = MR_r10;
	MR_GOTO_LAB(getopt__handle_long_option_13_0_i20);
	}
MR_def_label(getopt__handle_long_option_13_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_r2;
	MR_r2 = MR_r3;
	MR_r3 = MR_r4;
	MR_r4 = MR_r6;
	MR_sv(1) = MR_r7;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r5;
	MR_r5 = MR_r9;
	MR_r6 = MR_tempr1;
	MR_sv(2) = MR_r4;
	MR_r7 = (MR_Integer) 0;
	MR_sv(3) = MR_r8;
	MR_r8 = MR_r10;
	}
MR_def_label(getopt__handle_long_option_13_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r7,0)) {
		MR_GOTO_LAB(getopt__handle_long_option_13_0_i22);
	}
	if (MR_LTAGS_TESTR(MR_r3,0,1)) {
		MR_GOTO_LAB(getopt__handle_long_option_13_0_i25);
	}
	MR_r7 = MR_r8;
	MR_r8 = (MR_Integer) 0;
	MR_GOTO_LAB(getopt__handle_long_option_13_0_i24);
MR_def_label(getopt__handle_long_option_13_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r3,0,2)) {
		MR_GOTO_LAB(getopt__handle_long_option_13_0_i26);
	}
	MR_r7 = MR_r8;
	MR_r8 = (MR_Integer) 1;
	MR_GOTO_LAB(getopt__handle_long_option_13_0_i24);
MR_def_label(getopt__handle_long_option_13_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r3,0,4)) {
		MR_GOTO_LAB(getopt__handle_long_option_13_0_i27);
	}
	MR_r7 = MR_r8;
	MR_r8 = (MR_Integer) 1;
	MR_GOTO_LAB(getopt__handle_long_option_13_0_i24);
MR_def_label(getopt__handle_long_option_13_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r3,0,0)) {
		MR_GOTO_LAB(getopt__handle_long_option_13_0_i28);
	}
	MR_r7 = MR_r8;
	MR_r8 = (MR_Integer) 0;
	MR_GOTO_LAB(getopt__handle_long_option_13_0_i24);
MR_def_label(getopt__handle_long_option_13_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r3,0,3)) {
		MR_GOTO_LAB(getopt__handle_long_option_13_0_i29);
	}
MR_def_label(getopt__handle_long_option_13_0,168)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r7 = MR_r8;
	MR_r8 = (MR_Integer) 1;
	MR_GOTO_LAB(getopt__handle_long_option_13_0_i24);
MR_def_label(getopt__handle_long_option_13_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r3,1)) {
		MR_GOTO_LAB(getopt__handle_long_option_13_0_i168);
	}
	MR_r7 = MR_r8;
	MR_r8 = (MR_Integer) 0;
	MR_GOTO_LAB(getopt__handle_long_option_13_0_i24);
MR_def_label(getopt__handle_long_option_13_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) 0 == (MR_Integer) MR_r8)) {
		MR_GOTO_LAB(getopt__handle_long_option_13_0_i35);
	}
	MR_r9 = MR_r8;
	MR_r8 = MR_r7;
	MR_GOTO_LAB(getopt__handle_long_option_13_0_i23);
MR_def_label(getopt__handle_long_option_13_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r6,0,0)) {
		MR_GOTO_LAB(getopt__handle_long_option_13_0_i36);
	}
	MR_r8 = MR_r7;
	MR_GOTO_LAB(getopt__handle_long_option_13_0_i23);
MR_def_label(getopt__handle_long_option_13_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r4;
	MR_sv(2) = MR_sv(3);
	MR_sv(3) = MR_r7;
	MR_r2 = (MR_Word) MR_string_const("\' does not allow an argument", 28);
	MR_np_call_localret_ent(string__append_3_2,
		getopt__handle_long_option_13_0_i37);
MR_def_label(getopt__handle_long_option_13_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("option \140", 8);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(string__append_3_2,
		getopt__handle_long_option_13_0_i46);
MR_def_label(getopt__handle_long_option_13_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_r3;
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tempr2;
	MR_tempr3 = MR_r5;
	MR_r5 = MR_r6;
	MR_r6 = MR_sv(1);
	MR_r7 = MR_tempr3;
	}
	MR_np_call_localret_ent(getopt__process_option_9_0,
		getopt__handle_long_option_13_0_i40);
MR_def_label(getopt__handle_long_option_13_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,1)) {
		MR_GOTO_LAB(getopt__handle_long_option_13_0_i42);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_sv(3);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tempr2;
	MR_decr_sp_and_return(5);
	}
MR_def_label(getopt__handle_long_option_13_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_tfield(0, MR_tempr1, 0);
	MR_r6 = MR_tempr2;
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(getopt__process_arguments_9_0);
	}
MR_def_label(getopt__handle_long_option_13_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r4;
	MR_sv(2) = MR_sv(3);
	MR_sv(3) = MR_r8;
	MR_r2 = (MR_Word) MR_string_const("\' needs an argument", 19);
	MR_np_call_localret_ent(string__append_3_2,
		getopt__handle_long_option_13_0_i45);
MR_def_label(getopt__handle_long_option_13_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("option \140", 8);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(string__append_3_2,
		getopt__handle_long_option_13_0_i46);
MR_def_label(getopt__handle_long_option_13_0,46)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r3, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r3, 0) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(list__reverse_2_0);

MR_BEGIN_MODULE(getopt_module8)
	MR_init_entry1(getopt__process_options_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__getopt__process_options_5_0);
	MR_init_label9(getopt__process_options_5_0,4,3,8,6,11,10,14,16,17)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'process_options'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__getopt__process_options_5_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	if (MR_PTAG_TESTR(MR_r2,0)) {
		MR_GOTO_LAB(getopt__process_options_5_0_i3);
	}
	MR_sv(1) = MR_r3;
	MR_sv(3) = MR_tfield(0, MR_r2, 0);
	MR_sv(4) = MR_tfield(0, MR_r2, 1);
	MR_sv(2) = MR_r1;
	MR_r2 = MR_tfield(0, MR_r2, 2);
	MR_np_call_localret_ent(getopt__init_option_table_2_0,
		getopt__process_options_5_0_i4);
MR_def_label(getopt__process_options_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_sv(3);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(4);
	MR_tfield(0, MR_tempr1, 2) = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = MR_sv(1);
	MR_r5 = MR_r1;
	MR_r6 = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_sv(2);
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	}
	MR_np_call_localret_ent(getopt__process_arguments_9_0,
		getopt__process_options_5_0_i16);
MR_def_label(getopt__process_options_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r2,1)) {
		MR_GOTO_LAB(getopt__process_options_5_0_i6);
	}
	MR_tag_alloc_heap(MR_sv(5), 1, (MR_Integer) 1);
	MR_tfield(1, MR_sv(5), 0) = MR_tfield(1, MR_r2, 3);
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r1;
	MR_sv(3) = MR_tfield(1, MR_r2, 0);
	MR_sv(4) = MR_tfield(1, MR_r2, 1);
	MR_r2 = MR_tfield(1, MR_r2, 2);
	MR_np_call_localret_ent(getopt__init_option_table_2_0,
		getopt__process_options_5_0_i8);
MR_def_label(getopt__process_options_5_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_sv(3);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(4);
	MR_tfield(0, MR_tempr1, 2) = MR_sv(5);
	MR_r2 = MR_sv(1);
	MR_r5 = MR_r1;
	MR_r6 = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_sv(2);
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	}
	MR_np_call_localret_ent(getopt__process_arguments_9_0,
		getopt__process_options_5_0_i16);
MR_def_label(getopt__process_options_5_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r2,2)) {
		MR_GOTO_LAB(getopt__process_options_5_0_i10);
	}
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r1;
	MR_sv(3) = MR_tfield(2, MR_r2, 0);
	MR_sv(4) = MR_tfield(2, MR_r2, 1);
	MR_r2 = MR_tfield(2, MR_r2, 2);
	MR_np_call_localret_ent(getopt__init_option_table_multi_2_0,
		getopt__process_options_5_0_i11);
MR_def_label(getopt__process_options_5_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_sv(3);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(4);
	MR_tfield(0, MR_tempr1, 2) = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = MR_sv(1);
	MR_r5 = MR_r1;
	MR_r6 = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_sv(2);
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	}
	MR_np_call_localret_ent(getopt__process_arguments_9_0,
		getopt__process_options_5_0_i16);
MR_def_label(getopt__process_options_5_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_sv(5), 1, (MR_Integer) 1);
	MR_tfield(1, MR_sv(5), 0) = MR_tfield(3, MR_r2, 3);
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r1;
	MR_sv(3) = MR_tfield(3, MR_r2, 0);
	MR_sv(4) = MR_tfield(3, MR_r2, 1);
	MR_r2 = MR_tfield(3, MR_r2, 2);
	MR_np_call_localret_ent(getopt__init_option_table_multi_2_0,
		getopt__process_options_5_0_i14);
MR_def_label(getopt__process_options_5_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_sv(3);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(4);
	MR_tfield(0, MR_tempr1, 2) = MR_sv(5);
	MR_r2 = MR_sv(1);
	MR_r5 = MR_r1;
	MR_r6 = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_sv(2);
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	}
	MR_np_call_localret_ent(getopt__process_arguments_9_0,
		getopt__process_options_5_0_i16);
MR_def_label(getopt__process_options_5_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(3) = MR_r3;
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_np_call_localret_ent(list__reverse_2_0,
		getopt__process_options_5_0_i17);
MR_def_label(getopt__process_options_5_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(3);
	MR_decr_sp_and_return(6);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(getopt_module9)
	MR_init_entry1(getopt__process_options_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__getopt__process_options_4_0);
	MR_init_label1(getopt__process_options_4_0,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'process_options'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__getopt__process_options_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(getopt__process_options_5_0,
		getopt__process_options_4_0_i2);
MR_def_label(getopt__process_options_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_r2 = MR_r3;
	MR_decr_sp_and_return(1);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(getopt_module10)
	MR_init_entry1(getopt__process_options_track_7_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__getopt__process_options_track_7_0);
	MR_init_label2(getopt__process_options_track_7_0,4,5)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'process_options_track'/7 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__getopt__process_options_track_7_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr1, 0) = MR_tfield(0, MR_r2, 2);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr2, 0) = MR_tfield(0, MR_r2, 0);
	MR_tfield(0, MR_tempr2, 1) = MR_tfield(0, MR_r2, 1);
	MR_tfield(0, MR_tempr2, 2) = MR_tempr1;
	MR_r2 = MR_r3;
	MR_r3 = MR_tempr2;
	MR_tempr1 = MR_r4;
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	MR_r5 = MR_tempr1;
	MR_r6 = (MR_Word) MR_tbmkword(0, 0);
	}
	MR_np_call_localret_ent(getopt__process_arguments_9_0,
		getopt__process_options_track_7_0_i4);
MR_def_label(getopt__process_options_track_7_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_np_call_localret_ent(list__reverse_2_0,
		getopt__process_options_track_7_0_i5);
MR_def_label(getopt__process_options_track_7_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_decr_sp_and_return(4);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(map__lookup_3_0);

MR_BEGIN_MODULE(getopt_module11)
	MR_init_entry1(getopt__lookup_bool_option_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__getopt__lookup_bool_option_3_0);
	MR_init_label2(getopt__lookup_bool_option_3_0,3,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'lookup_bool_option'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__getopt__lookup_bool_option_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r2;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(getopt, option_data);
	MR_tempr2 = MR_r3;
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tempr2;
	}
	MR_np_call_localret_ent(map__lookup_3_0,
		getopt__lookup_bool_option_3_0_i3);
MR_def_label(getopt__lookup_bool_option_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,1)) {
		MR_GOTO_LAB(getopt__lookup_bool_option_3_0_i2);
	}
	MR_r1 = MR_tfield(1, MR_r1, 0);
	MR_decr_sp_and_return(1);
MR_def_label(getopt__lookup_bool_option_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("Expected bool option and didn\'t get one.", 40);
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_np_tailcall_ent(require__error_1_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(getopt_module12)
	MR_init_entry1(fn__getopt__lookup_bool_option_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__getopt__lookup_bool_option_2_0);
	MR_init_label2(fn__getopt__lookup_bool_option_2_0,3,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'lookup_bool_option'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__getopt__lookup_bool_option_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r2;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(getopt, option_data);
	MR_tempr2 = MR_r3;
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tempr2;
	}
	MR_np_call_localret_ent(map__lookup_3_0,
		fn__getopt__lookup_bool_option_2_0_i3);
MR_def_label(fn__getopt__lookup_bool_option_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,1)) {
		MR_GOTO_LAB(fn__getopt__lookup_bool_option_2_0_i2);
	}
	MR_r1 = MR_tfield(1, MR_r1, 0);
	MR_decr_sp_and_return(1);
MR_def_label(fn__getopt__lookup_bool_option_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("Expected bool option and didn\'t get one.", 40);
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_np_tailcall_ent(require__error_1_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(getopt_module13)
	MR_init_entry1(getopt__lookup_int_option_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__getopt__lookup_int_option_3_0);
	MR_init_label2(getopt__lookup_int_option_3_0,3,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'lookup_int_option'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__getopt__lookup_int_option_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r2;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(getopt, option_data);
	MR_tempr2 = MR_r3;
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tempr2;
	}
	MR_np_call_localret_ent(map__lookup_3_0,
		getopt__lookup_int_option_3_0_i3);
MR_def_label(getopt__lookup_int_option_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,2)) {
		MR_GOTO_LAB(getopt__lookup_int_option_3_0_i2);
	}
	MR_r1 = MR_tfield(2, MR_r1, 0);
	MR_decr_sp_and_return(1);
MR_def_label(getopt__lookup_int_option_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("Expected int option and didn\'t get one.", 39);
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_np_tailcall_ent(require__error_1_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(getopt_module14)
	MR_init_entry1(fn__getopt__lookup_int_option_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__getopt__lookup_int_option_2_0);
	MR_init_label2(fn__getopt__lookup_int_option_2_0,3,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'lookup_int_option'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__getopt__lookup_int_option_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r2;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(getopt, option_data);
	MR_tempr2 = MR_r3;
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tempr2;
	}
	MR_np_call_localret_ent(map__lookup_3_0,
		fn__getopt__lookup_int_option_2_0_i3);
MR_def_label(fn__getopt__lookup_int_option_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,2)) {
		MR_GOTO_LAB(fn__getopt__lookup_int_option_2_0_i2);
	}
	MR_r1 = MR_tfield(2, MR_r1, 0);
	MR_decr_sp_and_return(1);
MR_def_label(fn__getopt__lookup_int_option_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("Expected int option and didn\'t get one.", 39);
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_np_tailcall_ent(require__error_1_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(getopt_module15)
	MR_init_entry1(getopt__lookup_string_option_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__getopt__lookup_string_option_3_0);
	MR_init_label2(getopt__lookup_string_option_3_0,3,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'lookup_string_option'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__getopt__lookup_string_option_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r2;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(getopt, option_data);
	MR_tempr2 = MR_r3;
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tempr2;
	}
	MR_np_call_localret_ent(map__lookup_3_0,
		getopt__lookup_string_option_3_0_i3);
MR_def_label(getopt__lookup_string_option_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,0)) {
		MR_GOTO_LAB(getopt__lookup_string_option_3_0_i2);
	}
	MR_r1 = MR_tfield(3, MR_r1, 1);
	MR_decr_sp_and_return(1);
MR_def_label(getopt__lookup_string_option_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("Expected string option and didn\'t get one.", 42);
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_np_tailcall_ent(require__error_1_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(getopt_module16)
	MR_init_entry1(fn__getopt__lookup_string_option_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__getopt__lookup_string_option_2_0);
	MR_init_label2(fn__getopt__lookup_string_option_2_0,3,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'lookup_string_option'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__getopt__lookup_string_option_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r2;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(getopt, option_data);
	MR_tempr2 = MR_r3;
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tempr2;
	}
	MR_np_call_localret_ent(map__lookup_3_0,
		fn__getopt__lookup_string_option_2_0_i3);
MR_def_label(fn__getopt__lookup_string_option_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,0)) {
		MR_GOTO_LAB(fn__getopt__lookup_string_option_2_0_i2);
	}
	MR_r1 = MR_tfield(3, MR_r1, 1);
	MR_decr_sp_and_return(1);
MR_def_label(fn__getopt__lookup_string_option_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("Expected string option and didn\'t get one.", 42);
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_np_tailcall_ent(require__error_1_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(getopt_module17)
	MR_init_entry1(getopt__lookup_maybe_int_option_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__getopt__lookup_maybe_int_option_3_0);
	MR_init_label2(getopt__lookup_maybe_int_option_3_0,3,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'lookup_maybe_int_option'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__getopt__lookup_maybe_int_option_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r2;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(getopt, option_data);
	MR_tempr2 = MR_r3;
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tempr2;
	}
	MR_np_call_localret_ent(map__lookup_3_0,
		getopt__lookup_maybe_int_option_3_0_i3);
MR_def_label(getopt__lookup_maybe_int_option_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,1)) {
		MR_GOTO_LAB(getopt__lookup_maybe_int_option_3_0_i2);
	}
	MR_r1 = MR_tfield(3, MR_r1, 1);
	MR_decr_sp_and_return(1);
MR_def_label(getopt__lookup_maybe_int_option_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("Expected maybe_int option and didn\'t get one.", 45);
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_np_tailcall_ent(require__error_1_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(getopt_module18)
	MR_init_entry1(fn__getopt__lookup_maybe_int_option_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__getopt__lookup_maybe_int_option_2_0);
	MR_init_label2(fn__getopt__lookup_maybe_int_option_2_0,3,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'lookup_maybe_int_option'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__getopt__lookup_maybe_int_option_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r2;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(getopt, option_data);
	MR_tempr2 = MR_r3;
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tempr2;
	}
	MR_np_call_localret_ent(map__lookup_3_0,
		fn__getopt__lookup_maybe_int_option_2_0_i3);
MR_def_label(fn__getopt__lookup_maybe_int_option_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,1)) {
		MR_GOTO_LAB(fn__getopt__lookup_maybe_int_option_2_0_i2);
	}
	MR_r1 = MR_tfield(3, MR_r1, 1);
	MR_decr_sp_and_return(1);
MR_def_label(fn__getopt__lookup_maybe_int_option_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("Expected maybe_int option and didn\'t get one.", 45);
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_np_tailcall_ent(require__error_1_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(getopt_module19)
	MR_init_entry1(getopt__lookup_maybe_string_option_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__getopt__lookup_maybe_string_option_3_0);
	MR_init_label2(getopt__lookup_maybe_string_option_3_0,3,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'lookup_maybe_string_option'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__getopt__lookup_maybe_string_option_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r2;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(getopt, option_data);
	MR_tempr2 = MR_r3;
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tempr2;
	}
	MR_np_call_localret_ent(map__lookup_3_0,
		getopt__lookup_maybe_string_option_3_0_i3);
MR_def_label(getopt__lookup_maybe_string_option_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,2)) {
		MR_GOTO_LAB(getopt__lookup_maybe_string_option_3_0_i2);
	}
	MR_r1 = MR_tfield(3, MR_r1, 1);
	MR_decr_sp_and_return(1);
MR_def_label(getopt__lookup_maybe_string_option_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("Expected maybe_string option and didn\'t get one.", 48);
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_np_tailcall_ent(require__error_1_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(getopt_module20)
	MR_init_entry1(fn__getopt__lookup_maybe_string_option_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__getopt__lookup_maybe_string_option_2_0);
	MR_init_label2(fn__getopt__lookup_maybe_string_option_2_0,3,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'lookup_maybe_string_option'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__getopt__lookup_maybe_string_option_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r2;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(getopt, option_data);
	MR_tempr2 = MR_r3;
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tempr2;
	}
	MR_np_call_localret_ent(map__lookup_3_0,
		fn__getopt__lookup_maybe_string_option_2_0_i3);
MR_def_label(fn__getopt__lookup_maybe_string_option_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,2)) {
		MR_GOTO_LAB(fn__getopt__lookup_maybe_string_option_2_0_i2);
	}
	MR_r1 = MR_tfield(3, MR_r1, 1);
	MR_decr_sp_and_return(1);
MR_def_label(fn__getopt__lookup_maybe_string_option_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("Expected maybe_string option and didn\'t get one.", 48);
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_np_tailcall_ent(require__error_1_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(getopt_module21)
	MR_init_entry1(getopt__lookup_accumulating_option_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__getopt__lookup_accumulating_option_3_0);
	MR_init_label2(getopt__lookup_accumulating_option_3_0,3,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'lookup_accumulating_option'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__getopt__lookup_accumulating_option_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r2;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(getopt, option_data);
	MR_tempr2 = MR_r3;
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tempr2;
	}
	MR_np_call_localret_ent(map__lookup_3_0,
		getopt__lookup_accumulating_option_3_0_i3);
MR_def_label(getopt__lookup_accumulating_option_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,3)) {
		MR_GOTO_LAB(getopt__lookup_accumulating_option_3_0_i2);
	}
	MR_r1 = MR_tfield(3, MR_r1, 1);
	MR_decr_sp_and_return(1);
MR_def_label(getopt__lookup_accumulating_option_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("Expected accumulating option and didn\'t get one.", 48);
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_np_tailcall_ent(require__error_1_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(getopt_module22)
	MR_init_entry1(fn__getopt__lookup_accumulating_option_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__getopt__lookup_accumulating_option_2_0);
	MR_init_label2(fn__getopt__lookup_accumulating_option_2_0,3,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'lookup_accumulating_option'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__getopt__lookup_accumulating_option_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r2;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(getopt, option_data);
	MR_tempr2 = MR_r3;
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tempr2;
	}
	MR_np_call_localret_ent(map__lookup_3_0,
		fn__getopt__lookup_accumulating_option_2_0_i3);
MR_def_label(fn__getopt__lookup_accumulating_option_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,3)) {
		MR_GOTO_LAB(fn__getopt__lookup_accumulating_option_2_0_i2);
	}
	MR_r1 = MR_tfield(3, MR_r1, 1);
	MR_decr_sp_and_return(1);
MR_def_label(fn__getopt__lookup_accumulating_option_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("Expected accumulating option and didn\'t get one.", 48);
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_np_tailcall_ent(require__error_1_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___tree234__tree234_2_0);

MR_BEGIN_MODULE(getopt_module23)
	MR_init_entry1(__Unify___getopt__maybe_option_table_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___getopt__maybe_option_table_1_0);
	MR_init_label3(__Unify___getopt__maybe_option_table_1_0,14,5,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___getopt__maybe_option_table_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r2 == MR_r3)) {
		MR_GOTO_LAB(__Unify___getopt__maybe_option_table_1_0_i14);
	}
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r2;
	MR_sv(1) = MR_tempr1;
	MR_tempr2 = MR_r3;
	MR_sv(2) = MR_tempr2;
	MR_sv(3) = MR_r1;
	if (MR_PTAG_TESTR(MR_tempr1,1)) {
		MR_GOTO_LAB(__Unify___getopt__maybe_option_table_1_0_i5);
	}
	if (MR_PTAG_TESTR(MR_tempr2,1)) {
		MR_GOTO_LAB(__Unify___getopt__maybe_option_table_1_0_i1);
	}
	MR_r1 = MR_tfield(1, MR_tempr1, 0);
	MR_r2 = MR_tfield(1, MR_tempr2, 0);
	MR_r1 = (strcmp((char *) (MR_Word *) MR_r1, (char *) (MR_Word *) MR_r2) == 0);
	MR_decr_sp(4);
	MR_proceed();
	}
MR_def_label(__Unify___getopt__maybe_option_table_1_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___getopt__maybe_option_table_1_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),0)) {
		MR_GOTO_LAB(__Unify___getopt__maybe_option_table_1_0_i1);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(getopt, option_data);
	MR_r3 = MR_tfield(0, MR_sv(1), 0);
	MR_r4 = MR_tfield(0, MR_sv(2), 0);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(__Unify___tree234__tree234_2_0);
MR_def_label(__Unify___getopt__maybe_option_table_1_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(4);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Compare___tree234__tree234_2_0);

MR_BEGIN_MODULE(getopt_module24)
	MR_init_entry1(__Compare___getopt__maybe_option_table_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___getopt__maybe_option_table_1_0);
	MR_init_label5(__Compare___getopt__maybe_option_table_1_0,8,27,7,5,14)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___getopt__maybe_option_table_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	if ((MR_r2 == MR_r3)) {
		MR_GOTO_LAB(__Compare___getopt__maybe_option_table_1_0_i27);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_r2;
	MR_sv(1) = MR_tempr1;
	MR_tempr2 = MR_r3;
	MR_sv(2) = MR_tempr2;
	MR_sv(3) = MR_r1;
	if (MR_PTAG_TESTR(MR_tempr1,1)) {
		MR_GOTO_LAB(__Compare___getopt__maybe_option_table_1_0_i5);
	}
	if (MR_PTAG_TESTR(MR_tempr2,1)) {
		MR_GOTO_LAB(__Compare___getopt__maybe_option_table_1_0_i7);
	}
	MR_r2 = MR_tfield(1, MR_tempr1, 0);
	MR_tempr3 = MR_tfield(1, MR_tempr2, 0);
	{
	MR_Integer	Res;
	MR_String	S1;
	MR_String	S2;
#define	MR_PROC_LABEL	mercury____Compare___getopt__maybe_option_table_1_0
	S1 = (MR_String) MR_r2;
	S2 = (MR_String) MR_tempr3;
{
#line 129 "private_builtin.opt"

    Res = strcmp(S1, S2);
;}
#line 4874 "getopt.c"
	MR_r2 = Res;
#undef	MR_PROC_LABEL
	}
	if (MR_INT_GE(MR_r2,0)) {
		MR_GOTO_LAB(__Compare___getopt__maybe_option_table_1_0_i8);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(4);
	}
MR_def_label(__Compare___getopt__maybe_option_table_1_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r2,0)) {
		MR_GOTO_LAB(__Compare___getopt__maybe_option_table_1_0_i7);
	}
MR_def_label(__Compare___getopt__maybe_option_table_1_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(4);
MR_def_label(__Compare___getopt__maybe_option_table_1_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(4);
MR_def_label(__Compare___getopt__maybe_option_table_1_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Compare___getopt__maybe_option_table_1_0_i14);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(4);
MR_def_label(__Compare___getopt__maybe_option_table_1_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(getopt, option_data);
	MR_r3 = MR_tfield(0, MR_sv(1), 0);
	MR_r4 = MR_tfield(0, MR_sv(2), 0);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(__Compare___tree234__tree234_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___list__list_1_0);
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;
MR_decl_entry(__Unify___maybe__maybe_1_0);

MR_BEGIN_MODULE(getopt_module25)
	MR_init_entry1(__Unify___getopt__option_data_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___getopt__option_data_0_0);
	MR_init_label10(__Unify___getopt__option_data_0_0,5,6,7,8,9,10,12,14,18,53)
	MR_init_label2(__Unify___getopt__option_data_0_0,22,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___getopt__option_data_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___getopt__option_data_0_0_i53);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_tempr1;
	MR_sv(2) = MR_r2;
	if (MR_LTAGS_TESTR(MR_tempr1,0,1)) {
		MR_GOTO_LAB(__Unify___getopt__option_data_0_0_i5);
	}
	MR_r1 = (MR_sv(2) == MR_tempr1);
	MR_decr_sp(3);
	MR_proceed();
	}
MR_def_label(__Unify___getopt__option_data_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,2)) {
		MR_GOTO_LAB(__Unify___getopt__option_data_0_0_i6);
	}
	MR_r1 = (MR_sv(2) == MR_sv(1));
	MR_decr_sp_and_return(3);
MR_def_label(__Unify___getopt__option_data_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,4)) {
		MR_GOTO_LAB(__Unify___getopt__option_data_0_0_i7);
	}
	MR_r1 = (MR_sv(2) == MR_sv(1));
	MR_decr_sp_and_return(3);
MR_def_label(__Unify___getopt__option_data_0_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,0)) {
		MR_GOTO_LAB(__Unify___getopt__option_data_0_0_i8);
	}
	MR_r1 = (MR_sv(2) == MR_sv(1));
	MR_decr_sp_and_return(3);
MR_def_label(__Unify___getopt__option_data_0_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,3)) {
		MR_GOTO_LAB(__Unify___getopt__option_data_0_0_i9);
	}
	MR_r1 = (MR_sv(2) == MR_sv(1));
	MR_decr_sp_and_return(3);
MR_def_label(__Unify___getopt__option_data_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),1)) {
		MR_GOTO_LAB(__Unify___getopt__option_data_0_0_i10);
	}
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Unify___getopt__option_data_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(1, MR_sv(1), 0);
	MR_tempr2 = MR_tfield(1, MR_sv(2), 0);
	MR_r1 = (MR_tempr1 == MR_tempr2);
	MR_decr_sp_and_return(3);
	}
MR_def_label(__Unify___getopt__option_data_0_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),2)) {
		MR_GOTO_LAB(__Unify___getopt__option_data_0_0_i12);
	}
	if (MR_PTAG_TESTR(MR_sv(2),2)) {
		MR_GOTO_LAB(__Unify___getopt__option_data_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(2, MR_sv(1), 0);
	MR_tempr2 = MR_tfield(2, MR_sv(2), 0);
	MR_r1 = (MR_tempr1 == MR_tempr2);
	MR_decr_sp_and_return(3);
	}
MR_def_label(__Unify___getopt__option_data_0_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,3)) {
		MR_GOTO_LAB(__Unify___getopt__option_data_0_0_i14);
	}
	if (MR_RTAGS_TESTR(MR_sv(2),3,3)) {
		MR_GOTO_LAB(__Unify___getopt__option_data_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = MR_tfield(3, MR_sv(1), 1);
	MR_r3 = MR_tfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Unify___list__list_1_0);
MR_def_label(__Unify___getopt__option_data_0_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,1)) {
		MR_GOTO_LAB(__Unify___getopt__option_data_0_0_i18);
	}
	if (MR_RTAGS_TESTR(MR_sv(2),3,1)) {
		MR_GOTO_LAB(__Unify___getopt__option_data_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = MR_tfield(3, MR_sv(1), 1);
	MR_r3 = MR_tfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Unify___maybe__maybe_1_0);
MR_def_label(__Unify___getopt__option_data_0_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,2)) {
		MR_GOTO_LAB(__Unify___getopt__option_data_0_0_i22);
	}
	if (MR_RTAGS_TESTR(MR_sv(2),3,2)) {
		MR_GOTO_LAB(__Unify___getopt__option_data_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = MR_tfield(3, MR_sv(1), 1);
	MR_r3 = MR_tfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Unify___maybe__maybe_1_0);
MR_def_label(__Unify___getopt__option_data_0_0,53)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___getopt__option_data_0_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,0)) {
		MR_GOTO_LAB(__Unify___getopt__option_data_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(3, MR_sv(1), 1);
	MR_tempr2 = MR_tfield(3, MR_sv(2), 1);
	MR_r1 = (strcmp((char *) (MR_Word *) MR_tempr1, (char *) (MR_Word *) MR_tempr2) == 0);
	MR_decr_sp_and_return(3);
	}
MR_def_label(__Unify___getopt__option_data_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Compare___list__list_1_0);
MR_decl_entry(__Compare___maybe__maybe_1_0);

MR_BEGIN_MODULE(getopt_module26)
	MR_init_entry1(__Compare___getopt__option_data_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___getopt__option_data_0_0);
	MR_init_label10(__Compare___getopt__option_data_0_0,7,8,9,10,11,12,13,14,15,5)
	MR_init_label10(__Compare___getopt__option_data_0_0,19,20,21,22,23,24,25,26,27,17)
	MR_init_label10(__Compare___getopt__option_data_0_0,31,32,33,34,35,36,37,38,39,29)
	MR_init_label10(__Compare___getopt__option_data_0_0,43,44,45,46,47,48,49,50,51,41)
	MR_init_label10(__Compare___getopt__option_data_0_0,55,56,57,58,59,60,61,62,63,53)
	MR_init_label10(__Compare___getopt__option_data_0_0,67,68,69,70,71,73,72,77,78,79)
	MR_init_label10(__Compare___getopt__option_data_0_0,65,83,84,85,86,87,88,90,89,94)
	MR_init_label10(__Compare___getopt__option_data_0_0,95,81,99,100,101,102,103,104,105,106)
	MR_init_label10(__Compare___getopt__option_data_0_0,108,97,112,113,114,115,116,117,118,119)
	MR_init_label10(__Compare___getopt__option_data_0_0,120,110,125,126,127,128,129,130,131,132)
	MR_init_label10(__Compare___getopt__option_data_0_0,266,133,123,137,138,139,140,141,142,274)
	MR_init_label7(__Compare___getopt__option_data_0_0,143,144,145,146,278,147,279)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___getopt__option_data_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___getopt__option_data_0_0_i279);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	if (MR_LTAGS_TESTR(MR_sv(1),0,1)) {
		MR_GOTO_LAB(__Compare___getopt__option_data_0_0_i5);
	}
	if (MR_LTAGS_TESTR(MR_sv(2),0,1)) {
		MR_GOTO_LAB(__Compare___getopt__option_data_0_0_i7);
	}
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp(3);
	MR_proceed();
MR_def_label(__Compare___getopt__option_data_0_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,2)) {
		MR_GOTO_LAB(__Compare___getopt__option_data_0_0_i8);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___getopt__option_data_0_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,4)) {
		MR_GOTO_LAB(__Compare___getopt__option_data_0_0_i9);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___getopt__option_data_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,0)) {
		MR_GOTO_LAB(__Compare___getopt__option_data_0_0_i10);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___getopt__option_data_0_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,3)) {
		MR_GOTO_LAB(__Compare___getopt__option_data_0_0_i11);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___getopt__option_data_0_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Compare___getopt__option_data_0_0_i12);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___getopt__option_data_0_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),2)) {
		MR_GOTO_LAB(__Compare___getopt__option_data_0_0_i13);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___getopt__option_data_0_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,3)) {
		MR_GOTO_LAB(__Compare___getopt__option_data_0_0_i14);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___getopt__option_data_0_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,1)) {
		MR_GOTO_LAB(__Compare___getopt__option_data_0_0_i15);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___getopt__option_data_0_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,2)) {
		MR_GOTO_LAB(__Compare___getopt__option_data_0_0_i274);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___getopt__option_data_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,2)) {
		MR_GOTO_LAB(__Compare___getopt__option_data_0_0_i17);
	}
	if (MR_LTAGS_TESTR(MR_sv(2),0,1)) {
		MR_GOTO_LAB(__Compare___getopt__option_data_0_0_i19);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___getopt__option_data_0_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,2)) {
		MR_GOTO_LAB(__Compare___getopt__option_data_0_0_i20);
	}
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___getopt__option_data_0_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,4)) {
		MR_GOTO_LAB(__Compare___getopt__option_data_0_0_i21);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___getopt__option_data_0_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,0)) {
		MR_GOTO_LAB(__Compare___getopt__option_data_0_0_i22);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___getopt__option_data_0_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,3)) {
		MR_GOTO_LAB(__Compare___getopt__option_data_0_0_i23);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___getopt__option_data_0_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Compare___getopt__option_data_0_0_i24);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___getopt__option_data_0_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),2)) {
		MR_GOTO_LAB(__Compare___getopt__option_data_0_0_i25);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___getopt__option_data_0_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,3)) {
		MR_GOTO_LAB(__Compare___getopt__option_data_0_0_i26);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___getopt__option_data_0_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,1)) {
		MR_GOTO_LAB(__Compare___getopt__option_data_0_0_i27);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___getopt__option_data_0_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,2)) {
		MR_GOTO_LAB(__Compare___getopt__option_data_0_0_i274);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___getopt__option_data_0_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,4)) {
		MR_GOTO_LAB(__Compare___getopt__option_data_0_0_i29);
	}
	if (MR_LTAGS_TESTR(MR_sv(2),0,1)) {
		MR_GOTO_LAB(__Compare___getopt__option_data_0_0_i31);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___getopt__option_data_0_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,2)) {
		MR_GOTO_LAB(__Compare___getopt__option_data_0_0_i32);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___getopt__option_data_0_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,4)) {
		MR_GOTO_LAB(__Compare___getopt__option_data_0_0_i33);
	}
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___getopt__option_data_0_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,0)) {
		MR_GOTO_LAB(__Compare___getopt__option_data_0_0_i34);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___getopt__option_data_0_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,3)) {
		MR_GOTO_LAB(__Compare___getopt__option_data_0_0_i35);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___getopt__option_data_0_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Compare___getopt__option_data_0_0_i36);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___getopt__option_data_0_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),2)) {
		MR_GOTO_LAB(__Compare___getopt__option_data_0_0_i37);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___getopt__option_data_0_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,3)) {
		MR_GOTO_LAB(__Compare___getopt__option_data_0_0_i38);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___getopt__option_data_0_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,1)) {
		MR_GOTO_LAB(__Compare___getopt__option_data_0_0_i39);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___getopt__option_data_0_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,2)) {
		MR_GOTO_LAB(__Compare___getopt__option_data_0_0_i274);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___getopt__option_data_0_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,0)) {
		MR_GOTO_LAB(__Compare___getopt__option_data_0_0_i41);
	}
	if (MR_LTAGS_TESTR(MR_sv(2),0,1)) {
		MR_GOTO_LAB(__Compare___getopt__option_data_0_0_i43);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___getopt__option_data_0_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,2)) {
		MR_GOTO_LAB(__Compare___getopt__option_data_0_0_i44);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___getopt__option_data_0_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,4)) {
		MR_GOTO_LAB(__Compare___getopt__option_data_0_0_i45);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___getopt__option_data_0_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,0)) {
		MR_GOTO_LAB(__Compare___getopt__option_data_0_0_i46);
	}
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___getopt__option_data_0_0,46)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,3)) {
		MR_GOTO_LAB(__Compare___getopt__option_data_0_0_i47);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___getopt__option_data_0_0,47)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Compare___getopt__option_data_0_0_i48);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___getopt__option_data_0_0,48)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),2)) {
		MR_GOTO_LAB(__Compare___getopt__option_data_0_0_i49);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___getopt__option_data_0_0,49)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,3)) {
		MR_GOTO_LAB(__Compare___getopt__option_data_0_0_i50);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___getopt__option_data_0_0,50)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,1)) {
		MR_GOTO_LAB(__Compare___getopt__option_data_0_0_i51);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___getopt__option_data_0_0,51)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,2)) {
		MR_GOTO_LAB(__Compare___getopt__option_data_0_0_i274);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___getopt__option_data_0_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,3)) {
		MR_GOTO_LAB(__Compare___getopt__option_data_0_0_i53);
	}
	if (MR_LTAGS_TESTR(MR_sv(2),0,1)) {
		MR_GOTO_LAB(__Compare___getopt__option_data_0_0_i55);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___getopt__option_data_0_0,55)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,2)) {
		MR_GOTO_LAB(__Compare___getopt__option_data_0_0_i56);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___getopt__option_data_0_0,56)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,4)) {
		MR_GOTO_LAB(__Compare___getopt__option_data_0_0_i57);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___getopt__option_data_0_0,57)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,0)) {
		MR_GOTO_LAB(__Compare___getopt__option_data_0_0_i58);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___getopt__option_data_0_0,58)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,3)) {
		MR_GOTO_LAB(__Compare___getopt__option_data_0_0_i59);
	}
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___getopt__option_data_0_0,59)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Compare___getopt__option_data_0_0_i60);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___getopt__option_data_0_0,60)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),2)) {
		MR_GOTO_LAB(__Compare___getopt__option_data_0_0_i61);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___getopt__option_data_0_0,61)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,3)) {
		MR_GOTO_LAB(__Compare___getopt__option_data_0_0_i62);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___getopt__option_data_0_0,62)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,1)) {
		MR_GOTO_LAB(__Compare___getopt__option_data_0_0_i63);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___getopt__option_data_0_0,63)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,2)) {
		MR_GOTO_LAB(__Compare___getopt__option_data_0_0_i274);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___getopt__option_data_0_0,53)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),1)) {
		MR_GOTO_LAB(__Compare___getopt__option_data_0_0_i65);
	}
	if (MR_LTAGS_TESTR(MR_sv(2),0,1)) {
		MR_GOTO_LAB(__Compare___getopt__option_data_0_0_i67);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___getopt__option_data_0_0,67)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,2)) {
		MR_GOTO_LAB(__Compare___getopt__option_data_0_0_i68);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___getopt__option_data_0_0,68)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,4)) {
		MR_GOTO_LAB(__Compare___getopt__option_data_0_0_i69);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___getopt__option_data_0_0,69)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,0)) {
		MR_GOTO_LAB(__Compare___getopt__option_data_0_0_i70);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___getopt__option_data_0_0,70)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,3)) {
		MR_GOTO_LAB(__Compare___getopt__option_data_0_0_i71);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___getopt__option_data_0_0,71)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Compare___getopt__option_data_0_0_i72);
	}
	MR_r4 = MR_tfield(1, MR_sv(2), 0);
	MR_r5 = MR_tfield(1, MR_sv(1), 0);
	if (((MR_Integer) MR_r5 >= (MR_Integer) MR_r4)) {
		MR_GOTO_LAB(__Compare___getopt__option_data_0_0_i73);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___getopt__option_data_0_0,73)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r5 != MR_r4)) {
		MR_GOTO_LAB(__Compare___getopt__option_data_0_0_i266);
	}
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___getopt__option_data_0_0,72)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),2)) {
		MR_GOTO_LAB(__Compare___getopt__option_data_0_0_i77);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___getopt__option_data_0_0,77)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,3)) {
		MR_GOTO_LAB(__Compare___getopt__option_data_0_0_i78);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___getopt__option_data_0_0,78)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,1)) {
		MR_GOTO_LAB(__Compare___getopt__option_data_0_0_i79);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___getopt__option_data_0_0,79)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,2)) {
		MR_GOTO_LAB(__Compare___getopt__option_data_0_0_i278);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___getopt__option_data_0_0,65)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),2)) {
		MR_GOTO_LAB(__Compare___getopt__option_data_0_0_i81);
	}
	if (MR_LTAGS_TESTR(MR_sv(2),0,1)) {
		MR_GOTO_LAB(__Compare___getopt__option_data_0_0_i83);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___getopt__option_data_0_0,83)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,2)) {
		MR_GOTO_LAB(__Compare___getopt__option_data_0_0_i84);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___getopt__option_data_0_0,84)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,4)) {
		MR_GOTO_LAB(__Compare___getopt__option_data_0_0_i85);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___getopt__option_data_0_0,85)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,0)) {
		MR_GOTO_LAB(__Compare___getopt__option_data_0_0_i86);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___getopt__option_data_0_0,86)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,3)) {
		MR_GOTO_LAB(__Compare___getopt__option_data_0_0_i87);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___getopt__option_data_0_0,87)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Compare___getopt__option_data_0_0_i88);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___getopt__option_data_0_0,88)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),2)) {
		MR_GOTO_LAB(__Compare___getopt__option_data_0_0_i89);
	}
	MR_r4 = MR_tfield(2, MR_sv(1), 0);
	MR_r5 = MR_tfield(2, MR_sv(2), 0);
	if (((MR_Integer) MR_r4 >= (MR_Integer) MR_r5)) {
		MR_GOTO_LAB(__Compare___getopt__option_data_0_0_i90);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___getopt__option_data_0_0,90)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r4 != MR_r5)) {
		MR_GOTO_LAB(__Compare___getopt__option_data_0_0_i266);
	}
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___getopt__option_data_0_0,89)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,3)) {
		MR_GOTO_LAB(__Compare___getopt__option_data_0_0_i94);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___getopt__option_data_0_0,94)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,1)) {
		MR_GOTO_LAB(__Compare___getopt__option_data_0_0_i95);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___getopt__option_data_0_0,95)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,2)) {
		MR_GOTO_LAB(__Compare___getopt__option_data_0_0_i278);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___getopt__option_data_0_0,81)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,3)) {
		MR_GOTO_LAB(__Compare___getopt__option_data_0_0_i97);
	}
	if (MR_LTAGS_TESTR(MR_sv(2),0,1)) {
		MR_GOTO_LAB(__Compare___getopt__option_data_0_0_i99);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___getopt__option_data_0_0,99)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,2)) {
		MR_GOTO_LAB(__Compare___getopt__option_data_0_0_i100);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___getopt__option_data_0_0,100)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,4)) {
		MR_GOTO_LAB(__Compare___getopt__option_data_0_0_i101);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___getopt__option_data_0_0,101)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,0)) {
		MR_GOTO_LAB(__Compare___getopt__option_data_0_0_i102);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___getopt__option_data_0_0,102)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,3)) {
		MR_GOTO_LAB(__Compare___getopt__option_data_0_0_i103);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___getopt__option_data_0_0,103)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Compare___getopt__option_data_0_0_i104);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___getopt__option_data_0_0,104)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),2)) {
		MR_GOTO_LAB(__Compare___getopt__option_data_0_0_i105);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___getopt__option_data_0_0,105)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,3)) {
		MR_GOTO_LAB(__Compare___getopt__option_data_0_0_i106);
	}
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = MR_tfield(3, MR_sv(1), 1);
	MR_r3 = MR_tfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Compare___list__list_1_0);
MR_def_label(__Compare___getopt__option_data_0_0,106)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,1)) {
		MR_GOTO_LAB(__Compare___getopt__option_data_0_0_i108);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___getopt__option_data_0_0,108)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,2)) {
		MR_GOTO_LAB(__Compare___getopt__option_data_0_0_i274);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___getopt__option_data_0_0,97)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,1)) {
		MR_GOTO_LAB(__Compare___getopt__option_data_0_0_i110);
	}
	if (MR_LTAGS_TESTR(MR_sv(2),0,1)) {
		MR_GOTO_LAB(__Compare___getopt__option_data_0_0_i112);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___getopt__option_data_0_0,112)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,2)) {
		MR_GOTO_LAB(__Compare___getopt__option_data_0_0_i113);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___getopt__option_data_0_0,113)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,4)) {
		MR_GOTO_LAB(__Compare___getopt__option_data_0_0_i114);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___getopt__option_data_0_0,114)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,0)) {
		MR_GOTO_LAB(__Compare___getopt__option_data_0_0_i115);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___getopt__option_data_0_0,115)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,3)) {
		MR_GOTO_LAB(__Compare___getopt__option_data_0_0_i116);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___getopt__option_data_0_0,116)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Compare___getopt__option_data_0_0_i117);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___getopt__option_data_0_0,117)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),2)) {
		MR_GOTO_LAB(__Compare___getopt__option_data_0_0_i118);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___getopt__option_data_0_0,118)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,3)) {
		MR_GOTO_LAB(__Compare___getopt__option_data_0_0_i119);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___getopt__option_data_0_0,119)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,1)) {
		MR_GOTO_LAB(__Compare___getopt__option_data_0_0_i120);
	}
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = MR_tfield(3, MR_sv(1), 1);
	MR_r3 = MR_tfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Compare___maybe__maybe_1_0);
MR_def_label(__Compare___getopt__option_data_0_0,120)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,2)) {
		MR_GOTO_LAB(__Compare___getopt__option_data_0_0_i274);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___getopt__option_data_0_0,110)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,2)) {
		MR_GOTO_LAB(__Compare___getopt__option_data_0_0_i123);
	}
	if (MR_LTAGS_TESTR(MR_sv(2),0,1)) {
		MR_GOTO_LAB(__Compare___getopt__option_data_0_0_i125);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___getopt__option_data_0_0,125)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,2)) {
		MR_GOTO_LAB(__Compare___getopt__option_data_0_0_i126);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___getopt__option_data_0_0,126)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,4)) {
		MR_GOTO_LAB(__Compare___getopt__option_data_0_0_i127);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___getopt__option_data_0_0,127)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,0)) {
		MR_GOTO_LAB(__Compare___getopt__option_data_0_0_i128);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___getopt__option_data_0_0,128)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,3)) {
		MR_GOTO_LAB(__Compare___getopt__option_data_0_0_i129);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___getopt__option_data_0_0,129)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Compare___getopt__option_data_0_0_i130);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___getopt__option_data_0_0,130)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),2)) {
		MR_GOTO_LAB(__Compare___getopt__option_data_0_0_i131);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___getopt__option_data_0_0,131)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,3)) {
		MR_GOTO_LAB(__Compare___getopt__option_data_0_0_i132);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___getopt__option_data_0_0,132)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,1)) {
		MR_GOTO_LAB(__Compare___getopt__option_data_0_0_i133);
	}
MR_def_label(__Compare___getopt__option_data_0_0,266)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___getopt__option_data_0_0,133)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,2)) {
		MR_GOTO_LAB(__Compare___getopt__option_data_0_0_i274);
	}
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = MR_tfield(3, MR_sv(1), 1);
	MR_r3 = MR_tfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Compare___maybe__maybe_1_0);
MR_def_label(__Compare___getopt__option_data_0_0,123)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,1)) {
		MR_GOTO_LAB(__Compare___getopt__option_data_0_0_i137);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___getopt__option_data_0_0,137)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,2)) {
		MR_GOTO_LAB(__Compare___getopt__option_data_0_0_i138);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___getopt__option_data_0_0,138)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,4)) {
		MR_GOTO_LAB(__Compare___getopt__option_data_0_0_i139);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___getopt__option_data_0_0,139)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,0)) {
		MR_GOTO_LAB(__Compare___getopt__option_data_0_0_i140);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___getopt__option_data_0_0,140)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,3)) {
		MR_GOTO_LAB(__Compare___getopt__option_data_0_0_i141);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___getopt__option_data_0_0,141)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Compare___getopt__option_data_0_0_i142);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___getopt__option_data_0_0,142)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),2)) {
		MR_GOTO_LAB(__Compare___getopt__option_data_0_0_i143);
	}
MR_def_label(__Compare___getopt__option_data_0_0,274)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___getopt__option_data_0_0,143)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,3)) {
		MR_GOTO_LAB(__Compare___getopt__option_data_0_0_i144);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___getopt__option_data_0_0,144)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,1)) {
		MR_GOTO_LAB(__Compare___getopt__option_data_0_0_i145);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___getopt__option_data_0_0,145)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,2)) {
		MR_GOTO_LAB(__Compare___getopt__option_data_0_0_i146);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___getopt__option_data_0_0,146)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_tfield(3, MR_sv(1), 1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(3, MR_sv(2), 1);
	{
	MR_Integer	Res;
	MR_String	S1;
	MR_String	S2;
#define	MR_PROC_LABEL	mercury____Compare___getopt__option_data_0_0
	S1 = (MR_String) MR_r4;
	S2 = (MR_String) MR_tempr1;
{
#line 129 "private_builtin.opt"

    Res = strcmp(S1, S2);
;}
#line 5973 "getopt.c"
	MR_r4 = Res;
#undef	MR_PROC_LABEL
	}
	if (MR_INT_GE(MR_r4,0)) {
		MR_GOTO_LAB(__Compare___getopt__option_data_0_0_i147);
	}
	}
MR_def_label(__Compare___getopt__option_data_0_0,278)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___getopt__option_data_0_0,147)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r4,0)) {
		MR_GOTO_LAB(__Compare___getopt__option_data_0_0_i266);
	}
MR_def_label(__Compare___getopt__option_data_0_0,279)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(private_builtin__builtin_unify_pred_2_0);

MR_BEGIN_MODULE(getopt_module27)
	MR_init_entry1(__Unify___getopt__option_ops_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___getopt__option_ops_1_0);
	MR_init_label10(__Unify___getopt__option_ops_1_0,7,9,5,15,17,19,13,25,27,57)
	MR_init_label5(__Unify___getopt__option_ops_1_0,23,32,34,36,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___getopt__option_ops_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r2 == MR_r3)) {
		MR_GOTO_LAB(__Unify___getopt__option_ops_1_0_i57);
	}
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr1 = MR_r2;
	MR_sv(1) = MR_tempr1;
	MR_tempr2 = MR_r3;
	MR_sv(2) = MR_tempr2;
	if (MR_PTAG_TESTR(MR_tempr1,0)) {
		MR_GOTO_LAB(__Unify___getopt__option_ops_1_0_i5);
	}
	if (MR_PTAG_TESTR(MR_tempr2,0)) {
		MR_GOTO_LAB(__Unify___getopt__option_ops_1_0_i1);
	}
	MR_tempr3 = MR_tempr1;
	MR_sv(1) = MR_tfield(0, MR_tempr3, 1);
	MR_tempr4 = MR_tempr2;
	MR_sv(2) = MR_tfield(0, MR_tempr3, 2);
	MR_sv(3) = MR_tfield(0, MR_tempr4, 1);
	MR_sv(4) = MR_tfield(0, MR_tempr4, 2);
	MR_r1 = MR_tfield(0, MR_tempr3, 0);
	MR_r2 = MR_tfield(0, MR_tempr4, 0);
	}
	MR_np_call_localret_ent(private_builtin__builtin_unify_pred_2_0,
		__Unify___getopt__option_ops_1_0_i7);
MR_def_label(__Unify___getopt__option_ops_1_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___getopt__option_ops_1_0_i1);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(private_builtin__builtin_unify_pred_2_0,
		__Unify___getopt__option_ops_1_0_i9);
MR_def_label(__Unify___getopt__option_ops_1_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___getopt__option_ops_1_0_i1);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(4);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(private_builtin__builtin_unify_pred_2_0);
MR_def_label(__Unify___getopt__option_ops_1_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),1)) {
		MR_GOTO_LAB(__Unify___getopt__option_ops_1_0_i13);
	}
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Unify___getopt__option_ops_1_0_i1);
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
	MR_np_call_localret_ent(private_builtin__builtin_unify_pred_2_0,
		__Unify___getopt__option_ops_1_0_i15);
MR_def_label(__Unify___getopt__option_ops_1_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___getopt__option_ops_1_0_i1);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(private_builtin__builtin_unify_pred_2_0,
		__Unify___getopt__option_ops_1_0_i17);
MR_def_label(__Unify___getopt__option_ops_1_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___getopt__option_ops_1_0_i1);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(private_builtin__builtin_unify_pred_2_0,
		__Unify___getopt__option_ops_1_0_i19);
MR_def_label(__Unify___getopt__option_ops_1_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___getopt__option_ops_1_0_i1);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(6);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(private_builtin__builtin_unify_pred_2_0);
MR_def_label(__Unify___getopt__option_ops_1_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),2)) {
		MR_GOTO_LAB(__Unify___getopt__option_ops_1_0_i23);
	}
	if (MR_PTAG_TESTR(MR_sv(2),2)) {
		MR_GOTO_LAB(__Unify___getopt__option_ops_1_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_tfield(2, MR_tempr1, 1);
	MR_tempr2 = MR_sv(2);
	MR_sv(2) = MR_tfield(2, MR_tempr1, 2);
	MR_sv(3) = MR_tfield(2, MR_tempr2, 1);
	MR_sv(4) = MR_tfield(2, MR_tempr2, 2);
	MR_r1 = MR_tfield(2, MR_tempr1, 0);
	MR_r2 = MR_tfield(2, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(private_builtin__builtin_unify_pred_2_0,
		__Unify___getopt__option_ops_1_0_i25);
MR_def_label(__Unify___getopt__option_ops_1_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___getopt__option_ops_1_0_i1);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(private_builtin__builtin_unify_pred_2_0,
		__Unify___getopt__option_ops_1_0_i27);
MR_def_label(__Unify___getopt__option_ops_1_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___getopt__option_ops_1_0_i1);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(4);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(private_builtin__builtin_unify_pred_2_0);
MR_def_label(__Unify___getopt__option_ops_1_0,57)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___getopt__option_ops_1_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),3)) {
		MR_GOTO_LAB(__Unify___getopt__option_ops_1_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_tfield(3, MR_tempr1, 1);
	MR_tempr2 = MR_sv(2);
	MR_sv(2) = MR_tfield(3, MR_tempr1, 2);
	MR_sv(3) = MR_tfield(3, MR_tempr1, 3);
	MR_sv(4) = MR_tfield(3, MR_tempr2, 1);
	MR_sv(5) = MR_tfield(3, MR_tempr2, 2);
	MR_sv(6) = MR_tfield(3, MR_tempr2, 3);
	MR_r1 = MR_tfield(3, MR_tempr1, 0);
	MR_r2 = MR_tfield(3, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(private_builtin__builtin_unify_pred_2_0,
		__Unify___getopt__option_ops_1_0_i32);
MR_def_label(__Unify___getopt__option_ops_1_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___getopt__option_ops_1_0_i1);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(private_builtin__builtin_unify_pred_2_0,
		__Unify___getopt__option_ops_1_0_i34);
MR_def_label(__Unify___getopt__option_ops_1_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___getopt__option_ops_1_0_i1);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(private_builtin__builtin_unify_pred_2_0,
		__Unify___getopt__option_ops_1_0_i36);
MR_def_label(__Unify___getopt__option_ops_1_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___getopt__option_ops_1_0_i1);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(6);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(private_builtin__builtin_unify_pred_2_0);
MR_def_label(__Unify___getopt__option_ops_1_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(7);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(private_builtin__builtin_compare_pred_3_0);

MR_BEGIN_MODULE(getopt_module28)
	MR_init_entry1(__Compare___getopt__option_ops_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___getopt__option_ops_1_0);
	MR_init_label10(__Compare___getopt__option_ops_1_0,3,2,9,13,7,162,5,23,26,30)
	MR_init_label10(__Compare___getopt__option_ops_1_0,34,21,44,45,48,52,42,59,60,61)
	MR_init_label4(__Compare___getopt__option_ops_1_0,63,67,71,244)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___getopt__option_ops_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r2 == MR_r3)) {
		MR_GOTO_LAB(__Compare___getopt__option_ops_1_0_i3);
	}
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_GOTO_LAB(__Compare___getopt__option_ops_1_0_i2);
MR_def_label(__Compare___getopt__option_ops_1_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___getopt__option_ops_1_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),0)) {
		MR_GOTO_LAB(__Compare___getopt__option_ops_1_0_i5);
	}
	if (MR_PTAG_TESTR(MR_sv(2),0)) {
		MR_GOTO_LAB(__Compare___getopt__option_ops_1_0_i7);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(1);
	MR_sv(4) = MR_tfield(0, MR_tempr5, 1);
	MR_sv(3) = MR_tfield(0, MR_tempr5, 2);
	MR_tempr6 = MR_sv(2);
	MR_tempr1 = MR_tfield(0, MR_tempr6, 2);
	MR_tempr2 = MR_tfield(0, MR_tempr6, 1);
	MR_tempr3 = MR_tempr5;
	MR_sv(1) = MR_tempr2;
	MR_tempr4 = MR_tempr6;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_tfield(0, MR_tempr3, 0);
	MR_r2 = MR_tfield(0, MR_tempr4, 0);
	}
	MR_np_call_localret_ent(private_builtin__builtin_compare_pred_3_0,
		__Compare___getopt__option_ops_1_0_i9);
MR_def_label(__Compare___getopt__option_ops_1_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___getopt__option_ops_1_0_i244);
	}
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(private_builtin__builtin_compare_pred_3_0,
		__Compare___getopt__option_ops_1_0_i13);
MR_def_label(__Compare___getopt__option_ops_1_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___getopt__option_ops_1_0_i244);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(private_builtin__builtin_compare_pred_3_0);
MR_def_label(__Compare___getopt__option_ops_1_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Compare___getopt__option_ops_1_0_i162);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(7);
MR_def_label(__Compare___getopt__option_ops_1_0,162)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(7);
MR_def_label(__Compare___getopt__option_ops_1_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),1)) {
		MR_GOTO_LAB(__Compare___getopt__option_ops_1_0_i21);
	}
	if (MR_PTAG_TESTR(MR_sv(2),0)) {
		MR_GOTO_LAB(__Compare___getopt__option_ops_1_0_i23);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(7);
MR_def_label(__Compare___getopt__option_ops_1_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Compare___getopt__option_ops_1_0_i162);
	}
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
	MR_np_call_localret_ent(private_builtin__builtin_compare_pred_3_0,
		__Compare___getopt__option_ops_1_0_i26);
MR_def_label(__Compare___getopt__option_ops_1_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___getopt__option_ops_1_0_i244);
	}
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(private_builtin__builtin_compare_pred_3_0,
		__Compare___getopt__option_ops_1_0_i30);
MR_def_label(__Compare___getopt__option_ops_1_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___getopt__option_ops_1_0_i244);
	}
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(private_builtin__builtin_compare_pred_3_0,
		__Compare___getopt__option_ops_1_0_i34);
MR_def_label(__Compare___getopt__option_ops_1_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___getopt__option_ops_1_0_i244);
	}
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(3);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(private_builtin__builtin_compare_pred_3_0);
MR_def_label(__Compare___getopt__option_ops_1_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),2)) {
		MR_GOTO_LAB(__Compare___getopt__option_ops_1_0_i42);
	}
	if (MR_PTAG_TESTR(MR_sv(2),0)) {
		MR_GOTO_LAB(__Compare___getopt__option_ops_1_0_i44);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(7);
MR_def_label(__Compare___getopt__option_ops_1_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Compare___getopt__option_ops_1_0_i45);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(7);
MR_def_label(__Compare___getopt__option_ops_1_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),2)) {
		MR_GOTO_LAB(__Compare___getopt__option_ops_1_0_i162);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(1);
	MR_sv(4) = MR_tfield(2, MR_tempr5, 1);
	MR_sv(3) = MR_tfield(2, MR_tempr5, 2);
	MR_tempr6 = MR_sv(2);
	MR_tempr1 = MR_tfield(2, MR_tempr6, 2);
	MR_tempr2 = MR_tfield(2, MR_tempr6, 1);
	MR_tempr3 = MR_tempr5;
	MR_sv(1) = MR_tempr2;
	MR_tempr4 = MR_tempr6;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_tfield(2, MR_tempr3, 0);
	MR_r2 = MR_tfield(2, MR_tempr4, 0);
	}
	MR_np_call_localret_ent(private_builtin__builtin_compare_pred_3_0,
		__Compare___getopt__option_ops_1_0_i48);
MR_def_label(__Compare___getopt__option_ops_1_0,48)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___getopt__option_ops_1_0_i244);
	}
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(private_builtin__builtin_compare_pred_3_0,
		__Compare___getopt__option_ops_1_0_i52);
MR_def_label(__Compare___getopt__option_ops_1_0,52)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___getopt__option_ops_1_0_i244);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(private_builtin__builtin_compare_pred_3_0);
MR_def_label(__Compare___getopt__option_ops_1_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),0)) {
		MR_GOTO_LAB(__Compare___getopt__option_ops_1_0_i59);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(7);
MR_def_label(__Compare___getopt__option_ops_1_0,59)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Compare___getopt__option_ops_1_0_i60);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(7);
MR_def_label(__Compare___getopt__option_ops_1_0,60)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),2)) {
		MR_GOTO_LAB(__Compare___getopt__option_ops_1_0_i61);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(7);
MR_def_label(__Compare___getopt__option_ops_1_0,61)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(1);
	MR_sv(6) = MR_tfield(3, MR_tempr5, 1);
	MR_sv(5) = MR_tfield(3, MR_tempr5, 2);
	MR_sv(4) = MR_tfield(3, MR_tempr5, 3);
	MR_tempr6 = MR_sv(2);
	MR_sv(3) = MR_tfield(3, MR_tempr6, 3);
	MR_tempr1 = MR_tfield(3, MR_tempr6, 2);
	MR_tempr2 = MR_tfield(3, MR_tempr6, 1);
	MR_tempr3 = MR_tempr5;
	MR_sv(1) = MR_tempr2;
	MR_tempr4 = MR_tempr6;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_tfield(3, MR_tempr3, 0);
	MR_r2 = MR_tfield(3, MR_tempr4, 0);
	}
	MR_np_call_localret_ent(private_builtin__builtin_compare_pred_3_0,
		__Compare___getopt__option_ops_1_0_i63);
MR_def_label(__Compare___getopt__option_ops_1_0,63)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___getopt__option_ops_1_0_i244);
	}
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(private_builtin__builtin_compare_pred_3_0,
		__Compare___getopt__option_ops_1_0_i67);
MR_def_label(__Compare___getopt__option_ops_1_0,67)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___getopt__option_ops_1_0_i244);
	}
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(private_builtin__builtin_compare_pred_3_0,
		__Compare___getopt__option_ops_1_0_i71);
MR_def_label(__Compare___getopt__option_ops_1_0,71)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___getopt__option_ops_1_0_i244);
	}
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(3);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(private_builtin__builtin_compare_pred_3_0);
MR_def_label(__Compare___getopt__option_ops_1_0,244)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(7);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(getopt_module29)
	MR_init_entry1(__Unify___getopt__option_ops_internal_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___getopt__option_ops_internal_1_0);
	MR_init_label4(__Unify___getopt__option_ops_internal_1_0,4,6,10,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___getopt__option_ops_internal_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r2 == MR_r3)) {
		MR_GOTO_LAB(__Unify___getopt__option_ops_internal_1_0_i10);
	}
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(5) = MR_r1;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_tfield(0, MR_tempr1, 1);
	MR_tempr2 = MR_sv(2);
	MR_sv(2) = MR_tfield(0, MR_tempr1, 2);
	MR_sv(3) = MR_tfield(0, MR_tempr2, 1);
	MR_sv(4) = MR_tfield(0, MR_tempr2, 2);
	MR_r1 = MR_tfield(0, MR_tempr1, 0);
	MR_r2 = MR_tfield(0, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(private_builtin__builtin_unify_pred_2_0,
		__Unify___getopt__option_ops_internal_1_0_i4);
MR_def_label(__Unify___getopt__option_ops_internal_1_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___getopt__option_ops_internal_1_0_i1);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(private_builtin__builtin_unify_pred_2_0,
		__Unify___getopt__option_ops_internal_1_0_i6);
MR_def_label(__Unify___getopt__option_ops_internal_1_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___getopt__option_ops_internal_1_0_i1);
	}
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(4);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(__Unify___getopt__option_ops_special_1_0);
MR_def_label(__Unify___getopt__option_ops_internal_1_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___getopt__option_ops_internal_1_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(6);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(getopt_module30)
	MR_init_entry1(__Compare___getopt__option_ops_internal_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___getopt__option_ops_internal_1_0);
	MR_init_label5(__Compare___getopt__option_ops_internal_1_0,3,2,5,9,29)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___getopt__option_ops_internal_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r2 == MR_r3)) {
		MR_GOTO_LAB(__Compare___getopt__option_ops_internal_1_0_i3);
	}
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(5) = MR_r1;
	MR_GOTO_LAB(__Compare___getopt__option_ops_internal_1_0_i2);
MR_def_label(__Compare___getopt__option_ops_internal_1_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___getopt__option_ops_internal_1_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(2);
	MR_sv(4) = MR_tfield(0, MR_tempr5, 2);
	MR_sv(3) = MR_tfield(0, MR_tempr5, 1);
	MR_tempr6 = MR_sv(1);
	MR_tempr1 = MR_tfield(0, MR_tempr6, 2);
	MR_tempr2 = MR_tfield(0, MR_tempr6, 1);
	MR_tempr3 = MR_tempr6;
	MR_sv(1) = MR_tempr2;
	MR_tempr4 = MR_tempr5;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_tfield(0, MR_tempr3, 0);
	MR_r2 = MR_tfield(0, MR_tempr4, 0);
	}
	MR_np_call_localret_ent(private_builtin__builtin_compare_pred_3_0,
		__Compare___getopt__option_ops_internal_1_0_i5);
MR_def_label(__Compare___getopt__option_ops_internal_1_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___getopt__option_ops_internal_1_0_i29);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(private_builtin__builtin_compare_pred_3_0,
		__Compare___getopt__option_ops_internal_1_0_i9);
MR_def_label(__Compare___getopt__option_ops_internal_1_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___getopt__option_ops_internal_1_0_i29);
	}
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(4);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(__Compare___getopt__option_ops_special_1_0);
MR_def_label(__Compare___getopt__option_ops_internal_1_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(6);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(getopt_module31)
	MR_init_entry1(__Unify___getopt__option_ops_special_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___getopt__option_ops_special_1_0);
	MR_init_label4(__Unify___getopt__option_ops_special_1_0,5,19,6,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___getopt__option_ops_special_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r2 == MR_r3)) {
		MR_GOTO_LAB(__Unify___getopt__option_ops_special_1_0_i19);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_sv(1) = MR_tempr1;
	MR_sv(2) = MR_r3;
	if (MR_LTAGS_TESTR(MR_tempr1,0,0)) {
		MR_GOTO_LAB(__Unify___getopt__option_ops_special_1_0_i5);
	}
	MR_r1 = (MR_sv(2) == MR_tempr1);
	MR_decr_sp(3);
	MR_proceed();
	}
MR_def_label(__Unify___getopt__option_ops_special_1_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),1)) {
		MR_GOTO_LAB(__Unify___getopt__option_ops_special_1_0_i6);
	}
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Unify___getopt__option_ops_special_1_0_i1);
	}
	MR_r1 = MR_tfield(1, MR_sv(1), 0);
	MR_r2 = MR_tfield(1, MR_sv(2), 0);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(private_builtin__builtin_unify_pred_2_0);
MR_def_label(__Unify___getopt__option_ops_special_1_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___getopt__option_ops_special_1_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),2)) {
		MR_GOTO_LAB(__Unify___getopt__option_ops_special_1_0_i1);
	}
	MR_r1 = MR_tfield(2, MR_sv(1), 0);
	MR_r2 = MR_tfield(2, MR_sv(2), 0);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(private_builtin__builtin_unify_pred_2_0);
MR_def_label(__Unify___getopt__option_ops_special_1_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(getopt_module32)
	MR_init_entry1(__Compare___getopt__option_ops_special_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___getopt__option_ops_special_1_0);
	MR_init_label7(__Compare___getopt__option_ops_special_1_0,30,31,5,11,34,9,15)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___getopt__option_ops_special_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	if ((MR_r2 == MR_r3)) {
		MR_GOTO_LAB(__Compare___getopt__option_ops_special_1_0_i30);
	}
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	if (MR_LTAGS_TESTR(MR_sv(1),0,0)) {
		MR_GOTO_LAB(__Compare___getopt__option_ops_special_1_0_i5);
	}
	if (MR_LTAGS_TESTR(MR_sv(2),0,0)) {
		MR_GOTO_LAB(__Compare___getopt__option_ops_special_1_0_i31);
	}
MR_def_label(__Compare___getopt__option_ops_special_1_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___getopt__option_ops_special_1_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___getopt__option_ops_special_1_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),1)) {
		MR_GOTO_LAB(__Compare___getopt__option_ops_special_1_0_i9);
	}
	if (MR_LTAGS_TESTR(MR_sv(2),0,0)) {
		MR_GOTO_LAB(__Compare___getopt__option_ops_special_1_0_i11);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___getopt__option_ops_special_1_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Compare___getopt__option_ops_special_1_0_i31);
	}
MR_def_label(__Compare___getopt__option_ops_special_1_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_mask_field(MR_sv(1), 0);
	MR_r2 = MR_mask_field(MR_sv(2), 0);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(private_builtin__builtin_compare_pred_3_0);
MR_def_label(__Compare___getopt__option_ops_special_1_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,0)) {
		MR_GOTO_LAB(__Compare___getopt__option_ops_special_1_0_i15);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___getopt__option_ops_special_1_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Compare___getopt__option_ops_special_1_0_i34);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(getopt_module33)
	MR_init_entry1(__Unify___getopt__option_ops_track_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___getopt__option_ops_track_1_0);
	MR_init_label4(__Unify___getopt__option_ops_track_1_0,4,6,10,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___getopt__option_ops_track_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r2 == MR_r3)) {
		MR_GOTO_LAB(__Unify___getopt__option_ops_track_1_0_i10);
	}
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_tfield(0, MR_tempr1, 1);
	MR_tempr2 = MR_sv(2);
	MR_sv(2) = MR_tfield(0, MR_tempr1, 2);
	MR_sv(3) = MR_tfield(0, MR_tempr2, 1);
	MR_sv(4) = MR_tfield(0, MR_tempr2, 2);
	MR_r1 = MR_tfield(0, MR_tempr1, 0);
	MR_r2 = MR_tfield(0, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(private_builtin__builtin_unify_pred_2_0,
		__Unify___getopt__option_ops_track_1_0_i4);
MR_def_label(__Unify___getopt__option_ops_track_1_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___getopt__option_ops_track_1_0_i1);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(private_builtin__builtin_unify_pred_2_0,
		__Unify___getopt__option_ops_track_1_0_i6);
MR_def_label(__Unify___getopt__option_ops_track_1_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___getopt__option_ops_track_1_0_i1);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(4);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(private_builtin__builtin_unify_pred_2_0);
MR_def_label(__Unify___getopt__option_ops_track_1_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___getopt__option_ops_track_1_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(getopt_module34)
	MR_init_entry1(__Compare___getopt__option_ops_track_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___getopt__option_ops_track_1_0);
	MR_init_label5(__Compare___getopt__option_ops_track_1_0,3,2,5,9,29)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___getopt__option_ops_track_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r2 == MR_r3)) {
		MR_GOTO_LAB(__Compare___getopt__option_ops_track_1_0_i3);
	}
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_GOTO_LAB(__Compare___getopt__option_ops_track_1_0_i2);
MR_def_label(__Compare___getopt__option_ops_track_1_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___getopt__option_ops_track_1_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(2);
	MR_sv(4) = MR_tfield(0, MR_tempr5, 2);
	MR_sv(3) = MR_tfield(0, MR_tempr5, 1);
	MR_tempr6 = MR_sv(1);
	MR_tempr1 = MR_tfield(0, MR_tempr6, 2);
	MR_tempr2 = MR_tfield(0, MR_tempr6, 1);
	MR_tempr3 = MR_tempr6;
	MR_sv(1) = MR_tempr2;
	MR_tempr4 = MR_tempr5;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_tfield(0, MR_tempr3, 0);
	MR_r2 = MR_tfield(0, MR_tempr4, 0);
	}
	MR_np_call_localret_ent(private_builtin__builtin_compare_pred_3_0,
		__Compare___getopt__option_ops_track_1_0_i5);
MR_def_label(__Compare___getopt__option_ops_track_1_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___getopt__option_ops_track_1_0_i29);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(private_builtin__builtin_compare_pred_3_0,
		__Compare___getopt__option_ops_track_1_0_i9);
MR_def_label(__Compare___getopt__option_ops_track_1_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___getopt__option_ops_track_1_0_i29);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(4);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(private_builtin__builtin_compare_pred_3_0);
MR_def_label(__Compare___getopt__option_ops_track_1_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(getopt_module35)
	MR_init_entry1(__Unify___getopt__option_table_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___getopt__option_table_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___getopt__option_table_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r2;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(getopt, option_data);
	MR_tempr2 = MR_r3;
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tempr2;
	MR_np_tailcall_ent(__Unify___tree234__tree234_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(getopt_module36)
	MR_init_entry1(__Compare___getopt__option_table_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___getopt__option_table_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___getopt__option_table_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r2;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(getopt, option_data);
	MR_tempr2 = MR_r3;
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tempr2;
	MR_np_tailcall_ent(__Compare___tree234__tree234_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(getopt_module37)
	MR_init_entry1(__Unify___getopt__special_data_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___getopt__special_data_0_0);
	MR_init_label6(__Unify___getopt__special_data_0_0,5,6,8,27,10,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___getopt__special_data_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___getopt__special_data_0_0_i27);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_tempr1;
	MR_sv(2) = MR_r2;
	if (MR_LTAGS_TESTR(MR_tempr1,0,0)) {
		MR_GOTO_LAB(__Unify___getopt__special_data_0_0_i5);
	}
	MR_r1 = (MR_sv(2) == MR_tempr1);
	MR_decr_sp(3);
	MR_proceed();
	}
MR_def_label(__Unify___getopt__special_data_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),1)) {
		MR_GOTO_LAB(__Unify___getopt__special_data_0_0_i6);
	}
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Unify___getopt__special_data_0_0_i1);
	}
	MR_r1 = MR_tfield(1, MR_sv(1), 0);
	MR_r2 = MR_tfield(1, MR_sv(2), 0);
	MR_r1 = (MR_r1 == MR_r2);
	MR_decr_sp_and_return(3);
MR_def_label(__Unify___getopt__special_data_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),2)) {
		MR_GOTO_LAB(__Unify___getopt__special_data_0_0_i8);
	}
	if (MR_PTAG_TESTR(MR_sv(2),2)) {
		MR_GOTO_LAB(__Unify___getopt__special_data_0_0_i1);
	}
	MR_r1 = MR_tfield(2, MR_sv(1), 0);
	MR_r2 = MR_tfield(2, MR_sv(2), 0);
	MR_r1 = (MR_r1 == MR_r2);
	MR_decr_sp_and_return(3);
MR_def_label(__Unify___getopt__special_data_0_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,1)) {
		MR_GOTO_LAB(__Unify___getopt__special_data_0_0_i10);
	}
	if (MR_RTAGS_TESTR(MR_sv(2),3,1)) {
		MR_GOTO_LAB(__Unify___getopt__special_data_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = MR_tfield(3, MR_sv(1), 1);
	MR_r3 = MR_tfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Unify___maybe__maybe_1_0);
MR_def_label(__Unify___getopt__special_data_0_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___getopt__special_data_0_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,0)) {
		MR_GOTO_LAB(__Unify___getopt__special_data_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(3, MR_sv(1), 1);
	MR_tempr2 = MR_tfield(3, MR_sv(2), 1);
	MR_r1 = (strcmp((char *) (MR_Word *) MR_tempr1, (char *) (MR_Word *) MR_tempr2) == 0);
	MR_decr_sp_and_return(3);
	}
MR_def_label(__Unify___getopt__special_data_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(getopt_module38)
	MR_init_entry1(__Compare___getopt__special_data_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___getopt__special_data_0_0);
	MR_init_label10(__Compare___getopt__special_data_0_0,7,8,9,5,13,15,14,19,11,23)
	MR_init_label10(__Compare___getopt__special_data_0_0,24,26,25,21,33,34,72,35,31,39)
	MR_init_label7(__Compare___getopt__special_data_0_0,40,76,41,42,78,43,79)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___getopt__special_data_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___getopt__special_data_0_0_i79);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	if (MR_LTAGS_TESTR(MR_sv(1),0,0)) {
		MR_GOTO_LAB(__Compare___getopt__special_data_0_0_i5);
	}
	if (MR_LTAGS_TESTR(MR_sv(2),0,0)) {
		MR_GOTO_LAB(__Compare___getopt__special_data_0_0_i7);
	}
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp(3);
	MR_proceed();
MR_def_label(__Compare___getopt__special_data_0_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Compare___getopt__special_data_0_0_i8);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___getopt__special_data_0_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),2)) {
		MR_GOTO_LAB(__Compare___getopt__special_data_0_0_i9);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___getopt__special_data_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,1)) {
		MR_GOTO_LAB(__Compare___getopt__special_data_0_0_i78);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___getopt__special_data_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),1)) {
		MR_GOTO_LAB(__Compare___getopt__special_data_0_0_i11);
	}
	if (MR_LTAGS_TESTR(MR_sv(2),0,0)) {
		MR_GOTO_LAB(__Compare___getopt__special_data_0_0_i13);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___getopt__special_data_0_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Compare___getopt__special_data_0_0_i14);
	}
	MR_r2 = MR_tfield(1, MR_sv(2), 0);
	MR_r3 = MR_tfield(1, MR_sv(1), 0);
	if (((MR_Integer) MR_r3 >= (MR_Integer) MR_r2)) {
		MR_GOTO_LAB(__Compare___getopt__special_data_0_0_i15);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___getopt__special_data_0_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r3 != MR_r2)) {
		MR_GOTO_LAB(__Compare___getopt__special_data_0_0_i72);
	}
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___getopt__special_data_0_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),2)) {
		MR_GOTO_LAB(__Compare___getopt__special_data_0_0_i19);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___getopt__special_data_0_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,1)) {
		MR_GOTO_LAB(__Compare___getopt__special_data_0_0_i78);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___getopt__special_data_0_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),2)) {
		MR_GOTO_LAB(__Compare___getopt__special_data_0_0_i21);
	}
	if (MR_LTAGS_TESTR(MR_sv(2),0,0)) {
		MR_GOTO_LAB(__Compare___getopt__special_data_0_0_i23);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___getopt__special_data_0_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Compare___getopt__special_data_0_0_i24);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___getopt__special_data_0_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),2)) {
		MR_GOTO_LAB(__Compare___getopt__special_data_0_0_i25);
	}
	MR_r2 = MR_tfield(2, MR_sv(1), 0);
	MR_r3 = MR_tfield(2, MR_sv(2), 0);
	if (((MR_Integer) MR_r2 >= (MR_Integer) MR_r3)) {
		MR_GOTO_LAB(__Compare___getopt__special_data_0_0_i26);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___getopt__special_data_0_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r2 != MR_r3)) {
		MR_GOTO_LAB(__Compare___getopt__special_data_0_0_i72);
	}
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___getopt__special_data_0_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,1)) {
		MR_GOTO_LAB(__Compare___getopt__special_data_0_0_i78);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___getopt__special_data_0_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,1)) {
		MR_GOTO_LAB(__Compare___getopt__special_data_0_0_i31);
	}
	if (MR_LTAGS_TESTR(MR_sv(2),0,0)) {
		MR_GOTO_LAB(__Compare___getopt__special_data_0_0_i33);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___getopt__special_data_0_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Compare___getopt__special_data_0_0_i34);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___getopt__special_data_0_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),2)) {
		MR_GOTO_LAB(__Compare___getopt__special_data_0_0_i35);
	}
MR_def_label(__Compare___getopt__special_data_0_0,72)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___getopt__special_data_0_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,1)) {
		MR_GOTO_LAB(__Compare___getopt__special_data_0_0_i76);
	}
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = MR_tfield(3, MR_sv(1), 1);
	MR_r3 = MR_tfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Compare___maybe__maybe_1_0);
MR_def_label(__Compare___getopt__special_data_0_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,0)) {
		MR_GOTO_LAB(__Compare___getopt__special_data_0_0_i39);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___getopt__special_data_0_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Compare___getopt__special_data_0_0_i40);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___getopt__special_data_0_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),2)) {
		MR_GOTO_LAB(__Compare___getopt__special_data_0_0_i41);
	}
MR_def_label(__Compare___getopt__special_data_0_0,76)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___getopt__special_data_0_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,1)) {
		MR_GOTO_LAB(__Compare___getopt__special_data_0_0_i42);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___getopt__special_data_0_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_tfield(3, MR_sv(1), 1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(3, MR_sv(2), 1);
	{
	MR_Integer	Res;
	MR_String	S1;
	MR_String	S2;
#define	MR_PROC_LABEL	mercury____Compare___getopt__special_data_0_0
	S1 = (MR_String) MR_r2;
	S2 = (MR_String) MR_tempr1;
{
#line 129 "private_builtin.opt"

    Res = strcmp(S1, S2);
;}
#line 7315 "getopt.c"
	MR_r2 = Res;
#undef	MR_PROC_LABEL
	}
	if (MR_INT_GE(MR_r2,0)) {
		MR_GOTO_LAB(__Compare___getopt__special_data_0_0_i43);
	}
	}
MR_def_label(__Compare___getopt__special_data_0_0,78)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___getopt__special_data_0_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r2,0)) {
		MR_GOTO_LAB(__Compare___getopt__special_data_0_0_i72);
	}
MR_def_label(__Compare___getopt__special_data_0_0,79)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_declare_entry(MR_do_fail);
MR_declare_entry(mercury__do_call_closure_0);

MR_BEGIN_MODULE(getopt_module39)
	MR_init_entry1(getopt__IntroducedFrom__pred__init_option_table__341__1_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__getopt__IntroducedFrom__pred__init_option_table__341__1_3_0);
	MR_init_label1(getopt__IntroducedFrom__pred__init_option_table__341__1_3_0,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__pred__init_option_table__341__1'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(getopt__IntroducedFrom__pred__init_option_table__341__1_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_mkframe("pred getopt.IntroducedFrom__pred__init_option_table__341__1/3-0", 0,
		MR_ENTRY(MR_do_fail));
	MR_r1 = MR_r2;
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(getopt__IntroducedFrom__pred__init_option_table__341__1_3_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_0),
		mercury__getopt__IntroducedFrom__pred__init_option_table__341__1_3_0_i1);
MR_def_label(getopt__IntroducedFrom__pred__init_option_table__341__1_3_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tfield(0, MR_tempr1, 1) = MR_r2;
	MR_r1 = MR_tempr1;
	MR_succeed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(getopt_module40)
	MR_init_entry1(getopt__IntroducedFrom__pred__init_option_table_multi__348__1_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__getopt__IntroducedFrom__pred__init_option_table_multi__348__1_3_0);
	MR_init_label1(getopt__IntroducedFrom__pred__init_option_table_multi__348__1_3_0,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__pred__init_option_table_multi__348__1'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(getopt__IntroducedFrom__pred__init_option_table_multi__348__1_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_mkframe("pred getopt.IntroducedFrom__pred__init_option_table_multi__348__1/3-0", 0,
		MR_ENTRY(MR_do_fail));
	MR_r1 = MR_r2;
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(getopt__IntroducedFrom__pred__init_option_table_multi__348__1_3_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_0),
		mercury__getopt__IntroducedFrom__pred__init_option_table_multi__348__1_3_0_i1);
MR_def_label(getopt__IntroducedFrom__pred__init_option_table_multi__348__1_3_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tfield(0, MR_tempr1, 1) = MR_r2;
	MR_r1 = MR_tempr1;
	MR_succeed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(getopt_module41)
	MR_init_entry1(f_103_101_116_111_112_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_110_117_109_101_114_105_99_95_97_114_103_117_109_101_110_116_95_95_91_49_93_95_48_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__f_103_101_116_111_112_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_110_117_109_101_114_105_99_95_97_114_103_117_109_101_110_116_95_95_91_49_93_95_48_3_0);
	MR_init_label5(f_103_101_116_111_112_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_110_117_109_101_114_105_99_95_97_114_103_117_109_101_110_116_95_95_91_49_93_95_48_3_0,2,3,4,5,6)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__pred__numeric_argument__[1]_0'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(f_103_101_116_111_112_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_110_117_109_101_114_105_99_95_97_114_103_117_109_101_110_116_95_95_91_49_93_95_48_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_r1 = MR_r2;
	MR_r2 = (MR_Word) MR_string_const("\' is not numeric", 16);
	MR_np_call_localret_ent(string__append_3_2,
		f_103_101_116_111_112_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_110_117_109_101_114_105_99_95_97_114_103_117_109_101_110_116_95_95_91_49_93_95_48_3_0_i2);
MR_def_label(f_103_101_116_111_112_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_110_117_109_101_114_105_99_95_97_114_103_117_109_101_110_116_95_95_91_49_93_95_48_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("requires a numeric argument; \140", 30);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(string__append_3_2,
		f_103_101_116_111_112_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_110_117_109_101_114_105_99_95_97_114_103_117_109_101_110_116_95_95_91_49_93_95_48_3_0_i3);
MR_def_label(f_103_101_116_111_112_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_110_117_109_101_114_105_99_95_97_114_103_117_109_101_110_116_95_95_91_49_93_95_48_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("\'", 1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(string__append_3_2,
		f_103_101_116_111_112_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_110_117_109_101_114_105_99_95_97_114_103_117_109_101_110_116_95_95_91_49_93_95_48_3_0_i4);
MR_def_label(f_103_101_116_111_112_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_110_117_109_101_114_105_99_95_97_114_103_117_109_101_110_116_95_95_91_49_93_95_48_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(string__append_3_2,
		f_103_101_116_111_112_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_110_117_109_101_114_105_99_95_97_114_103_117_109_101_110_116_95_95_91_49_93_95_48_3_0_i5);
MR_def_label(f_103_101_116_111_112_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_110_117_109_101_114_105_99_95_97_114_103_117_109_101_110_116_95_95_91_49_93_95_48_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("option \140", 8);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(string__append_3_2,
		f_103_101_116_111_112_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_110_117_109_101_114_105_99_95_97_114_103_117_109_101_110_116_95_95_91_49_93_95_48_3_0_i6);
MR_def_label(f_103_101_116_111_112_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_110_117_109_101_114_105_99_95_97_114_103_117_109_101_110_116_95_95_91_49_93_95_48_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r2, 0) = MR_r1;
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(2);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(getopt_module42)
	MR_init_entry1(fn__f_103_101_116_111_112_116_95_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__f_103_101_116_111_112_116_95_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__func__ClassMethod_for_ops__op_table____ops__mercury_op_table__arity0______ops__max_priority_1__[1]_0'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__f_103_101_116_111_112_116_95_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1200;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

static void mercury__getopt_maybe_bunch_0(void)
{
	getopt_module0();
	getopt_module1();
	getopt_module2();
	getopt_module3();
	getopt_module4();
	getopt_module5();
	getopt_module6();
	getopt_module7();
	getopt_module8();
	getopt_module9();
	getopt_module10();
	getopt_module11();
	getopt_module12();
	getopt_module13();
	getopt_module14();
	getopt_module15();
	getopt_module16();
	getopt_module17();
	getopt_module18();
	getopt_module19();
	getopt_module20();
	getopt_module21();
	getopt_module22();
	getopt_module23();
	getopt_module24();
	getopt_module25();
	getopt_module26();
	getopt_module27();
	getopt_module28();
	getopt_module29();
	getopt_module30();
	getopt_module31();
	getopt_module32();
	getopt_module33();
	getopt_module34();
	getopt_module35();
	getopt_module36();
	getopt_module37();
	getopt_module38();
	getopt_module39();
}

static void mercury__getopt_maybe_bunch_1(void)
{
	getopt_module40();
	getopt_module41();
	getopt_module42();
}

/* suppress gcc -Wmissing-decls warnings */
void mercury__getopt__init(void);
void mercury__getopt__init_type_tables(void);
void mercury__getopt__init_debugger(void);
#ifdef MR_DEEP_PROFILING
void mercury__getopt__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp);
#endif
#ifdef MR_RECORD_TERM_SIZES
void mercury__getopt__init_complexity_procs(void);
#endif
#ifdef MR_THREADSCOPE
void mercury__getopt__init_threadscope_string_table(void);
#endif

void mercury__getopt__init(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	mercury__getopt_maybe_bunch_0();
	mercury__getopt_maybe_bunch_1();
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_getopt__type_ctor_info_maybe_option_table_1,
		getopt__maybe_option_table_1_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_getopt__type_ctor_info_option_data_0,
		getopt__option_data_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_getopt__type_ctor_info_option_ops_1,
		getopt__option_ops_1_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_getopt__type_ctor_info_option_ops_internal_1,
		getopt__option_ops_internal_1_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_getopt__type_ctor_info_option_ops_special_1,
		getopt__option_ops_special_1_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_getopt__type_ctor_info_option_ops_track_1,
		getopt__option_ops_track_1_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_getopt__type_ctor_info_option_table_1,
		getopt__option_table_1_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_getopt__type_ctor_info_special_data_0,
		getopt__special_data_0_0);
	mercury__getopt__init_debugger();
}

void mercury__getopt__init_type_tables(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	{
		MR_register_type_ctor_info(
		&mercury_data_getopt__type_ctor_info_maybe_option_table_1);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_getopt__type_ctor_info_option_data_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_getopt__type_ctor_info_option_ops_1);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_getopt__type_ctor_info_option_ops_internal_1);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_getopt__type_ctor_info_option_ops_special_1);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_getopt__type_ctor_info_option_ops_track_1);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_getopt__type_ctor_info_option_table_1);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_getopt__type_ctor_info_special_data_0);
	}
}


void mercury__getopt__init_debugger(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}

#ifdef MR_DEEP_PROFILING

void mercury__getopt__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp)
{
	MR_write_out_module_proc_reps_start(procrep_fp, &mercury_data__module_common_layout__getopt);
	MR_write_out_module_proc_reps_end(procrep_fp);
}

#endif

#ifdef MR_RECORD_TERM_SIZES

void mercury__getopt__init_complexity_procs(void)
{
}

#endif

#ifdef MR_THREADSCOPE

void mercury__getopt__init_threadscope_string_table(void)
{
}

#endif

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;
