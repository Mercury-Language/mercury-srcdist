/*
** Automatically generated from `getopt_io.m'
** by the Mercury compiler,
** version rotd-2010-01-31, configured for x86_64-unknown-linux-gnu.
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
INIT mercury__getopt_io__init
ENDINIT
*/

#define MR_ALLOW_RESET
#include "mercury_imp.h"
#line 534 "io.int"
#include "io.mh"

#line 28 "getopt_io.c"
#line 542 "io.int"
#include "string.mh"

#line 32 "getopt_io.c"
#line 29 "bitmap.int2"
#include "bitmap.mh"

#line 36 "getopt_io.c"
#line 28 "time.int2"
#include "time.mh"

#line 40 "getopt_io.c"
#line 4 "builtin.opt"
#include "builtin.mh"

#line 44 "getopt_io.c"
#line 37 "builtin.opt"
#include "array.mh"

#line 48 "getopt_io.c"
#line 48 "array.opt"
#include "stm_builtin.mh"

#line 52 "getopt_io.c"
#line 14 "exception.opt"
#include "exception.mh"

#line 56 "getopt_io.c"
#line 20 "store.opt"
#include "store.mh"

#line 60 "getopt_io.c"
#line 12 "pretty_printer.opt"
#include "pretty_printer.mh"

#line 64 "getopt_io.c"
#line 3 "float.opt"
#include "float.mh"

#line 68 "getopt_io.c"
#line 3 "math.opt"
#include "math.mh"

#line 72 "getopt_io.c"
#line 3 "construct.opt"
#include "construct.mh"

#line 76 "getopt_io.c"
#line 6 "type_desc.opt"
#include "type_desc.mh"

#line 80 "getopt_io.c"
#line 4 "int.opt"
#include "int.mh"

#line 84 "getopt_io.c"
#line 112 "rtti_implementation.opt"
#include "rtti_implementation.mh"

#line 88 "getopt_io.c"
#line 4 "char.opt"
#include "char.mh"

#line 92 "getopt_io.c"
#line 150 "io.opt"
#include "dir.mh"

#line 96 "getopt_io.c"
#line 160 "io.opt"
#include "table_builtin.mh"

#line 100 "getopt_io.c"
#line 9 "private_builtin.opt"
#include "private_builtin.mh"

#line 104 "getopt_io.c"
#line 105 "getopt_io.c"
#include "getopt_io.mh"

#line 108 "getopt_io.c"
#line 109 "getopt_io.c"
#ifndef GETOPT_IO_DECL_GUARD
#define GETOPT_IO_DECL_GUARD

#line 113 "getopt_io.c"
#line 114 "getopt_io.c"

#endif
#line 117 "getopt_io.c"

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
	MR_Word * f2;
};
MR_STATIC_LINKAGE const struct mercury_type_7 mercury_common_7[];

struct mercury_type_8 {
	MR_Integer f1;
};
MR_STATIC_LINKAGE const struct mercury_type_8 mercury_common_8[];

extern const MR_TypeCtorInfo_Struct
	mercury_data_getopt_io__type_ctor_info_maybe_option_table_1,
	mercury_data_getopt_io__type_ctor_info_option_data_0,
	mercury_data_getopt_io__type_ctor_info_option_ops_1,
	mercury_data_getopt_io__type_ctor_info_option_ops_internal_1,
	mercury_data_getopt_io__type_ctor_info_option_ops_special_1,
	mercury_data_getopt_io__type_ctor_info_option_ops_track_1,
	mercury_data_getopt_io__type_ctor_info_option_table_1,
	mercury_data_getopt_io__type_ctor_info_special_data_0;
MR_decl_label1(getopt_io__IntroducedFrom__pred__init_option_table__348__1_3_0, 1)
MR_decl_label1(getopt_io__IntroducedFrom__pred__init_option_table_multi__355__1_3_0, 1)
MR_decl_label4(f_103_101_116_111_112_116_95_105_111_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_110_117_109_101_114_105_99_95_97_114_103_117_109_101_110_116_95_95_91_49_93_95_48_3_0, 2,3,4,5)
MR_decl_label10(getopt_io__handle_long_option_15_0, 16,63,13,3,20,21,23,2,26,29)
MR_decl_label10(getopt_io__handle_long_option_15_0, 27,46,70,43,33,50,51,52,53,32)
MR_decl_label2(getopt_io__handle_long_option_15_0, 55,57)
MR_decl_label10(getopt_io__handle_short_options_12_0, 100,3,7,10,26,66,23,13,30,31)
MR_decl_label10(getopt_io__handle_short_options_12_0, 37,12,45,46,48,9,51,52,5,56)
MR_decl_label2(getopt_io__handle_short_options_12_0, 57,58)
MR_decl_label3(getopt_io__init_option_table_2_0, 6,7,8)
MR_decl_label3(getopt_io__init_option_table_multi_2_0, 6,7,8)
MR_decl_label2(getopt_io__lookup_accumulating_option_3_0, 3,2)
MR_decl_label2(getopt_io__lookup_bool_option_3_0, 3,2)
MR_decl_label2(getopt_io__lookup_int_option_3_0, 3,2)
MR_decl_label2(getopt_io__lookup_maybe_int_option_3_0, 3,2)
MR_decl_label2(getopt_io__lookup_maybe_string_option_3_0, 3,2)
MR_decl_label2(getopt_io__lookup_string_option_3_0, 3,2)
MR_decl_label10(getopt_io__process_arguments_11_0, 192,3,5,9,13,15,16,12,21,8)
MR_decl_label10(getopt_io__process_arguments_11_0, 26,29,31,33,32,28,38,39,42,45)
MR_decl_label10(getopt_io__process_arguments_11_0, 44,49,40,53,25,58,62,70,74,75)
MR_decl_label9(getopt_io__process_arguments_11_0, 77,69,80,81,63,85,87,57,90)
MR_decl_label10(getopt_io__process_negated_option_7_0, 3,58,11,12,24,25,61,7,16,17)
MR_decl_label10(getopt_io__process_negated_option_7_0, 20,21,28,29,32,33,35,37,38,40)
MR_decl_label10(getopt_io__process_negated_option_7_0, 42,43,46,47,48,50,51,54,55,2)
MR_decl_label1(getopt_io__process_negated_option_7_0, 65)
MR_decl_label10(getopt_io__process_option_11_0, 135,267,14,18,16,21,268,59,64,62)
MR_decl_label10(getopt_io__process_option_11_0, 269,4,8,6,271,24,26,31,34,37)
MR_decl_label10(getopt_io__process_option_11_0, 40,41,42,43,39,45,46,48,49,51)
MR_decl_label10(getopt_io__process_option_11_0, 36,52,53,54,55,33,272,73,78,76)
MR_decl_label10(getopt_io__process_option_11_0, 82,75,85,86,91,89,97,88,100,101)
MR_decl_label10(getopt_io__process_option_11_0, 108,110,270,115,117,120,121,125,123,273)
MR_decl_label2(getopt_io__process_option_11_0, 129,131)
MR_decl_label1(getopt_io__process_options_6_0, 2)
MR_decl_label8(getopt_io__process_options_7_0, 3,6,10,11,13,15,21,22)
MR_decl_label2(getopt_io__process_options_track_9_0, 4,5)
MR_decl_label10(getopt_io__process_special_8_0, 4,7,10,8,15,18,21,23,19,27)
MR_decl_label1(f_103_101_116_111_112_116_95_105_111_95_95_112_114_105_118_97_116_101_95_98_117_105_108_116_105_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_99_111_109_112_97_114_101_95_112_114_101_100_95_95_91_50_44_32_51_93_95_48_3_0, 2)
MR_decl_label3(f_103_101_116_111_112_116_95_105_111_95_95_112_114_105_118_97_116_101_95_98_117_105_108_116_105_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_117_110_105_102_121_95_112_114_101_100_95_95_91_49_44_32_50_93_95_48_2_0, 2,10,1)
MR_decl_label2(fn__getopt_io__lookup_accumulating_option_2_0, 3,2)
MR_decl_label2(fn__getopt_io__lookup_bool_option_2_0, 3,2)
MR_decl_label2(fn__getopt_io__lookup_int_option_2_0, 3,2)
MR_decl_label2(fn__getopt_io__lookup_maybe_int_option_2_0, 3,2)
MR_decl_label2(fn__getopt_io__lookup_maybe_string_option_2_0, 3,2)
MR_decl_label2(fn__getopt_io__lookup_string_option_2_0, 3,2)
MR_decl_label4(fn__getopt_io__string__preceding_boundary__ho18_3_0, 19,2,7,3)
MR_decl_label4(fn__getopt_io__string__preceding_boundary__ho1__ho22_3_0, 19,2,7,3)
MR_decl_label4(fn__getopt_io__string__preceding_boundary__ho23_3_0, 16,2,4,3)
MR_decl_label4(fn__getopt_io__string__words_2__ho19_4_0, 12,2,3,4)
MR_decl_label3(__Unify___getopt_io__maybe_option_table_1_0, 14,5,1)
MR_decl_label9(__Unify___getopt_io__option_data_0_0, 9,13,32,16,20,26,28,33,1)
MR_decl_label10(__Unify___getopt_io__option_ops_1_0, 5,7,9,13,15,17,19,23,25,27)
MR_decl_label6(__Unify___getopt_io__option_ops_1_0, 31,33,35,37,45,1)
MR_decl_label4(__Unify___getopt_io__option_ops_internal_1_0, 4,6,10,1)
MR_decl_label4(__Unify___getopt_io__option_ops_special_1_0, 6,10,16,1)
MR_decl_label4(__Unify___getopt_io__option_ops_track_1_0, 3,5,9,1)
MR_decl_label7(__Unify___getopt_io__special_data_0_0, 13,5,7,19,9,21,1)
MR_decl_label5(__Compare___getopt_io__maybe_option_table_1_0, 8,27,7,5,14)
MR_decl_label10(__Compare___getopt_io__option_data_0_0, 237,24,42,27,28,45,82,100,88,89)
MR_decl_label10(__Compare___getopt_io__option_data_0_0, 103,240,20,23,46,60,63,64,78,81)
MR_decl_label10(__Compare___getopt_io__option_data_0_0, 104,118,121,122,137,140,130,141,156,159)
MR_decl_label10(__Compare___getopt_io__option_data_0_0, 150,160,174,177,472,178,192,196,215,218)
MR_decl_label5(__Compare___getopt_io__option_data_0_0, 208,283,209,284,219)
MR_decl_label10(__Compare___getopt_io__option_ops_1_0, 3,5,9,13,26,29,31,35,39,52)
MR_decl_label10(__Compare___getopt_io__option_ops_1_0, 56,58,62,68,73,77,78,80,84,88)
MR_decl_label1(__Compare___getopt_io__option_ops_1_0, 184)
MR_decl_label5(__Compare___getopt_io__option_ops_internal_1_0, 3,2,5,9,29)
MR_decl_label5(__Compare___getopt_io__option_ops_special_1_0, 44,12,17,20,24)
MR_decl_label4(__Compare___getopt_io__option_ops_track_1_0, 29,4,8,28)
MR_decl_label10(__Compare___getopt_io__special_data_0_0, 50,60,5,7,8,19,21,24,25,35)
MR_decl_label7(__Compare___getopt_io__special_data_0_0, 82,95,69,96,37,97,41)
MR_def_extern_entry(getopt_io__init_option_table_2_0)
MR_def_extern_entry(getopt_io__init_option_table_multi_2_0)
MR_decl_static(getopt_io__process_special_8_0)
MR_decl_static(getopt_io__process_negated_option_7_0)
MR_def_extern_entry(getopt_io__process_arguments_11_0)
MR_decl_static(getopt_io__handle_long_option_15_0)
MR_decl_static(getopt_io__handle_short_options_12_0)
MR_decl_static(getopt_io__process_option_11_0)
MR_def_extern_entry(getopt_io__process_options_7_0)
MR_def_extern_entry(getopt_io__process_options_6_0)
MR_def_extern_entry(getopt_io__process_options_track_9_0)
MR_def_extern_entry(getopt_io__lookup_bool_option_3_0)
MR_def_extern_entry(fn__getopt_io__lookup_bool_option_2_0)
MR_def_extern_entry(getopt_io__lookup_int_option_3_0)
MR_def_extern_entry(fn__getopt_io__lookup_int_option_2_0)
MR_def_extern_entry(getopt_io__lookup_string_option_3_0)
MR_def_extern_entry(fn__getopt_io__lookup_string_option_2_0)
MR_def_extern_entry(getopt_io__lookup_maybe_int_option_3_0)
MR_def_extern_entry(fn__getopt_io__lookup_maybe_int_option_2_0)
MR_def_extern_entry(getopt_io__lookup_maybe_string_option_3_0)
MR_def_extern_entry(fn__getopt_io__lookup_maybe_string_option_2_0)
MR_def_extern_entry(getopt_io__lookup_accumulating_option_3_0)
MR_def_extern_entry(fn__getopt_io__lookup_accumulating_option_2_0)
MR_def_extern_entry(__Unify___getopt_io__maybe_option_table_1_0)
MR_def_extern_entry(__Compare___getopt_io__maybe_option_table_1_0)
MR_def_extern_entry(__Unify___getopt_io__option_data_0_0)
MR_def_extern_entry(__Compare___getopt_io__option_data_0_0)
MR_def_extern_entry(__Unify___getopt_io__option_ops_1_0)
MR_def_extern_entry(__Compare___getopt_io__option_ops_1_0)
MR_def_extern_entry(__Unify___getopt_io__option_ops_internal_1_0)
MR_def_extern_entry(__Compare___getopt_io__option_ops_internal_1_0)
MR_def_extern_entry(__Unify___getopt_io__option_ops_special_1_0)
MR_def_extern_entry(__Compare___getopt_io__option_ops_special_1_0)
MR_def_extern_entry(__Unify___getopt_io__option_ops_track_1_0)
MR_def_extern_entry(__Compare___getopt_io__option_ops_track_1_0)
MR_def_extern_entry(__Unify___getopt_io__option_table_1_0)
MR_def_extern_entry(__Compare___getopt_io__option_table_1_0)
MR_def_extern_entry(__Unify___getopt_io__special_data_0_0)
MR_def_extern_entry(__Compare___getopt_io__special_data_0_0)
MR_decl_static(getopt_io__IntroducedFrom__pred__init_option_table__348__1_3_0)
MR_decl_static(getopt_io__IntroducedFrom__pred__init_option_table_multi__355__1_3_0)
MR_decl_static(fn__getopt_io__string__preceding_boundary__ho18_3_0)
MR_decl_static(fn__getopt_io__string__words_2__ho19_4_0)
MR_decl_static(fn__getopt_io__string__preceding_boundary__ho1__ho22_3_0)
MR_decl_static(fn__getopt_io__string__preceding_boundary__ho23_3_0)
MR_decl_static(f_103_101_116_111_112_116_95_105_111_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_110_117_109_101_114_105_99_95_97_114_103_117_109_101_110_116_95_95_91_49_93_95_48_3_0)
MR_decl_static(f_103_101_116_111_112_116_95_105_111_95_95_112_114_105_118_97_116_101_95_98_117_105_108_116_105_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_99_111_109_112_97_114_101_95_112_114_101_100_95_95_91_50_44_32_51_93_95_48_3_0)
MR_decl_static(f_103_101_116_111_112_116_95_105_111_95_95_112_114_105_118_97_116_101_95_98_117_105_108_116_105_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_117_110_105_102_121_95_112_114_101_100_95_95_91_49_44_32_50_93_95_48_2_0)
MR_decl_static(fn__f_103_101_116_111_112_116_95_105_111_95_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_0)

extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_pred_0;
extern const MR_TypeCtorInfo_Struct mercury_data_getopt_io__type_ctor_info_option_data_0;
static const struct mercury_type_0 mercury_common_0[1] =
{
{
MR_CTOR0_ADDR(builtin, pred),
2,
1,
MR_CTOR0_ADDR(getopt_io, option_data)
},
};

extern const MR_TypeCtorInfo_Struct mercury_data_pair__type_ctor_info_pair_2;
static const struct mercury_type_1 mercury_common_1[1] =
{
{
MR_CTOR_ADDR(pair, pair, 2),
1,
MR_CTOR0_ADDR(getopt_io, option_data)
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
mercury_data__closure_layout__getopt_io__init_option_table_2_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_private_builtin__type_ctor_info_type_info_0;
static const MR_UserClosureId
mercury_data__closure_layout__getopt_io__init_option_table_multi_2_0_1;
static const struct mercury_type_3 mercury_common_3[2] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__getopt_io__init_option_table_2_0_1,
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
(MR_Word *) &mercury_data__closure_layout__getopt_io__init_option_table_multi_2_0_1,
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
mercury_data__closure_layout__getopt_io__init_option_table_2_0_2;
static const MR_UserClosureId
mercury_data__closure_layout__getopt_io__init_option_table_multi_2_0_2;
static const struct mercury_type_5 mercury_common_5[2] =
{
{
(MR_Word *) &mercury_data__closure_layout__getopt_io__init_option_table_2_0_2,
MR_COMMON(2,0),
4,
MR_CTOR0_ADDR(private_builtin, type_info),
1,
MR_COMMON(4,0),
MR_COMMON(4,0)
},
{
(MR_Word *) &mercury_data__closure_layout__getopt_io__init_option_table_multi_2_0_2,
MR_COMMON(2,0),
4,
MR_CTOR0_ADDR(private_builtin, type_info),
1,
MR_COMMON(4,0),
MR_COMMON(4,0)
},
};

static const struct mercury_type_6 mercury_common_6[2] =
{
{
MR_string_const("\' failed", 8),
MR_tbmkword(0, 0)
},
{
MR_string_const("\'", 1),
MR_tbmkword(0, 0)
},
};

static const struct mercury_type_7 mercury_common_7[3] =
{
{
3,
MR_tbmkword(0, 0)
},
{
1,
MR_tbmkword(0, 0)
},
{
2,
MR_tbmkword(0, 0)
},
};

static const struct mercury_type_8 mercury_common_8[2] =
{
{
0
},
{
1
},
};
extern const MR_TypeCtorInfo_Struct mercury_data_tree234__type_ctor_info_tree234_2;

static const MR_FA_PseudoTypeInfo_Struct2 mercury_data_tree234__pti_tree234_2__pseudo_1__plain_getopt_io__type_ctor_info_option_data_0 = {
	&mercury_data_tree234__type_ctor_info_tree234_2,
{	(MR_PseudoTypeInfo) 1,
	(MR_PseudoTypeInfo) &mercury_data_getopt_io__type_ctor_info_option_data_0
}};

const MR_PseudoTypeInfo mercury_data_getopt_io__field_types_maybe_option_table_1_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_tree234__pti_tree234_2__pseudo_1__plain_getopt_io__type_ctor_info_option_data_0
};

static const MR_DuFunctorDesc mercury_data_getopt_io__du_functor_desc_maybe_option_table_1_0 = {
	"ok",
	1,
	1,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_getopt_io__field_types_maybe_option_table_1_0,
	NULL,
	NULL
};
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_string_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_string_0;

const MR_PseudoTypeInfo mercury_data_getopt_io__field_types_maybe_option_table_1_1[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_string_0
};

static const MR_DuFunctorDesc mercury_data_getopt_io__du_functor_desc_maybe_option_table_1_1 = {
	"error",
	1,
	0,
	MR_SECTAG_NONE,
	1,
	-1,
	1,
	(MR_PseudoTypeInfo *) mercury_data_getopt_io__field_types_maybe_option_table_1_1,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_getopt_io__du_stag_ordered_maybe_option_table_1_0[] = {
	&mercury_data_getopt_io__du_functor_desc_maybe_option_table_1_0

};

const MR_DuFunctorDescPtr mercury_data_getopt_io__du_stag_ordered_maybe_option_table_1_1[] = {
	&mercury_data_getopt_io__du_functor_desc_maybe_option_table_1_1

};

const MR_DuPtagLayout mercury_data_getopt_io__du_ptag_ordered_maybe_option_table_1[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_getopt_io__du_stag_ordered_maybe_option_table_1_0 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_getopt_io__du_stag_ordered_maybe_option_table_1_1 }

};

const MR_DuFunctorDescPtr mercury_data_getopt_io__du_name_ordered_maybe_option_table_1[] = {
	&mercury_data_getopt_io__du_functor_desc_maybe_option_table_1_1,
	&mercury_data_getopt_io__du_functor_desc_maybe_option_table_1_0
};

const MR_Integer mercury_data_getopt_io__functor_number_map_maybe_option_table_1[] = {
	1,
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_getopt_io__type_ctor_info_maybe_option_table_1 = {
	1,
	13,
	2,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___getopt_io__maybe_option_table_1_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___getopt_io__maybe_option_table_1_0)),
	"getopt_io",
	"maybe_option_table",
	{ (void *)mercury_data_getopt_io__du_name_ordered_maybe_option_table_1 },
	{ (void *)mercury_data_getopt_io__du_ptag_ordered_maybe_option_table_1 },
	2,
	4,
	mercury_data_getopt_io__functor_number_map_maybe_option_table_1
};
extern const MR_TypeCtorInfo_Struct mercury_data_bool__type_ctor_info_bool_0;
extern const MR_TypeCtorInfo_Struct mercury_data_bool__type_ctor_info_bool_0;

const MR_PseudoTypeInfo mercury_data_getopt_io__field_types_option_data_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_bool__type_ctor_info_bool_0
};

static const MR_DuFunctorDesc mercury_data_getopt_io__du_functor_desc_option_data_0_0 = {
	"bool",
	1,
	0,
	MR_SECTAG_NONE,
	1,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_getopt_io__field_types_option_data_0_0,
	NULL,
	NULL
};
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;

const MR_PseudoTypeInfo mercury_data_getopt_io__field_types_option_data_0_1[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0
};

static const MR_DuFunctorDesc mercury_data_getopt_io__du_functor_desc_option_data_0_1 = {
	"int",
	1,
	0,
	MR_SECTAG_NONE,
	2,
	-1,
	1,
	(MR_PseudoTypeInfo *) mercury_data_getopt_io__field_types_option_data_0_1,
	NULL,
	NULL
};

const MR_PseudoTypeInfo mercury_data_getopt_io__field_types_option_data_0_2[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_string_0
};

static const MR_DuFunctorDesc mercury_data_getopt_io__du_functor_desc_option_data_0_2 = {
	"string",
	1,
	0,
	MR_SECTAG_REMOTE,
	3,
	0,
	2,
	(MR_PseudoTypeInfo *) mercury_data_getopt_io__field_types_option_data_0_2,
	NULL,
	NULL
};
extern const MR_TypeCtorInfo_Struct mercury_data_maybe__type_ctor_info_maybe_1;

static const MR_FA_TypeInfo_Struct1 mercury_data_maybe__ti_maybe_1builtin__type_ctor_info_int_0 = {
	&mercury_data_maybe__type_ctor_info_maybe_1,
{	(MR_TypeInfo) &mercury_data_builtin__type_ctor_info_int_0
}};

const MR_PseudoTypeInfo mercury_data_getopt_io__field_types_option_data_0_3[] = {
	(MR_PseudoTypeInfo) &mercury_data_maybe__ti_maybe_1builtin__type_ctor_info_int_0
};

static const MR_DuFunctorDesc mercury_data_getopt_io__du_functor_desc_option_data_0_3 = {
	"maybe_int",
	1,
	0,
	MR_SECTAG_REMOTE,
	3,
	1,
	3,
	(MR_PseudoTypeInfo *) mercury_data_getopt_io__field_types_option_data_0_3,
	NULL,
	NULL
};

static const MR_FA_TypeInfo_Struct1 mercury_data_maybe__ti_maybe_1builtin__type_ctor_info_string_0 = {
	&mercury_data_maybe__type_ctor_info_maybe_1,
{	(MR_TypeInfo) &mercury_data_builtin__type_ctor_info_string_0
}};

const MR_PseudoTypeInfo mercury_data_getopt_io__field_types_option_data_0_4[] = {
	(MR_PseudoTypeInfo) &mercury_data_maybe__ti_maybe_1builtin__type_ctor_info_string_0
};

static const MR_DuFunctorDesc mercury_data_getopt_io__du_functor_desc_option_data_0_4 = {
	"maybe_string",
	1,
	0,
	MR_SECTAG_REMOTE,
	3,
	2,
	4,
	(MR_PseudoTypeInfo *) mercury_data_getopt_io__field_types_option_data_0_4,
	NULL,
	NULL
};

static const MR_FA_TypeInfo_Struct1 mercury_data_list__ti_list_1builtin__type_ctor_info_string_0 = {
	&mercury_data_list__type_ctor_info_list_1,
{	(MR_TypeInfo) &mercury_data_builtin__type_ctor_info_string_0
}};

const MR_PseudoTypeInfo mercury_data_getopt_io__field_types_option_data_0_5[] = {
	(MR_PseudoTypeInfo) &mercury_data_list__ti_list_1builtin__type_ctor_info_string_0
};

static const MR_DuFunctorDesc mercury_data_getopt_io__du_functor_desc_option_data_0_5 = {
	"accumulating",
	1,
	0,
	MR_SECTAG_REMOTE,
	3,
	3,
	5,
	(MR_PseudoTypeInfo *) mercury_data_getopt_io__field_types_option_data_0_5,
	NULL,
	NULL
};

static const MR_DuFunctorDesc mercury_data_getopt_io__du_functor_desc_option_data_0_6 = {
	"special",
	0,
	0,
	MR_SECTAG_LOCAL,
	0,
	0,
	6,
	(MR_PseudoTypeInfo *) NULL,
	NULL,
	NULL
};

static const MR_DuFunctorDesc mercury_data_getopt_io__du_functor_desc_option_data_0_7 = {
	"bool_special",
	0,
	0,
	MR_SECTAG_LOCAL,
	0,
	1,
	7,
	(MR_PseudoTypeInfo *) NULL,
	NULL,
	NULL
};

static const MR_DuFunctorDesc mercury_data_getopt_io__du_functor_desc_option_data_0_8 = {
	"int_special",
	0,
	0,
	MR_SECTAG_LOCAL,
	0,
	2,
	8,
	(MR_PseudoTypeInfo *) NULL,
	NULL,
	NULL
};

static const MR_DuFunctorDesc mercury_data_getopt_io__du_functor_desc_option_data_0_9 = {
	"string_special",
	0,
	0,
	MR_SECTAG_LOCAL,
	0,
	3,
	9,
	(MR_PseudoTypeInfo *) NULL,
	NULL,
	NULL
};

static const MR_DuFunctorDesc mercury_data_getopt_io__du_functor_desc_option_data_0_10 = {
	"maybe_string_special",
	0,
	0,
	MR_SECTAG_LOCAL,
	0,
	4,
	10,
	(MR_PseudoTypeInfo *) NULL,
	NULL,
	NULL
};

static const MR_DuFunctorDesc mercury_data_getopt_io__du_functor_desc_option_data_0_11 = {
	"file_special",
	0,
	0,
	MR_SECTAG_LOCAL,
	0,
	5,
	11,
	(MR_PseudoTypeInfo *) NULL,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_getopt_io__du_stag_ordered_option_data_0_0[] = {
	&mercury_data_getopt_io__du_functor_desc_option_data_0_6,
	&mercury_data_getopt_io__du_functor_desc_option_data_0_7,
	&mercury_data_getopt_io__du_functor_desc_option_data_0_8,
	&mercury_data_getopt_io__du_functor_desc_option_data_0_9,
	&mercury_data_getopt_io__du_functor_desc_option_data_0_10,
	&mercury_data_getopt_io__du_functor_desc_option_data_0_11

};

const MR_DuFunctorDescPtr mercury_data_getopt_io__du_stag_ordered_option_data_0_1[] = {
	&mercury_data_getopt_io__du_functor_desc_option_data_0_0

};

const MR_DuFunctorDescPtr mercury_data_getopt_io__du_stag_ordered_option_data_0_2[] = {
	&mercury_data_getopt_io__du_functor_desc_option_data_0_1

};

const MR_DuFunctorDescPtr mercury_data_getopt_io__du_stag_ordered_option_data_0_3[] = {
	&mercury_data_getopt_io__du_functor_desc_option_data_0_2,
	&mercury_data_getopt_io__du_functor_desc_option_data_0_3,
	&mercury_data_getopt_io__du_functor_desc_option_data_0_4,
	&mercury_data_getopt_io__du_functor_desc_option_data_0_5

};

const MR_DuPtagLayout mercury_data_getopt_io__du_ptag_ordered_option_data_0[] = {
	{ 6, MR_SECTAG_LOCAL,
	mercury_data_getopt_io__du_stag_ordered_option_data_0_0 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_getopt_io__du_stag_ordered_option_data_0_1 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_getopt_io__du_stag_ordered_option_data_0_2 },
	{ 4, MR_SECTAG_REMOTE,
	mercury_data_getopt_io__du_stag_ordered_option_data_0_3 }

};

const MR_DuFunctorDescPtr mercury_data_getopt_io__du_name_ordered_option_data_0[] = {
	&mercury_data_getopt_io__du_functor_desc_option_data_0_5,
	&mercury_data_getopt_io__du_functor_desc_option_data_0_0,
	&mercury_data_getopt_io__du_functor_desc_option_data_0_7,
	&mercury_data_getopt_io__du_functor_desc_option_data_0_11,
	&mercury_data_getopt_io__du_functor_desc_option_data_0_1,
	&mercury_data_getopt_io__du_functor_desc_option_data_0_8,
	&mercury_data_getopt_io__du_functor_desc_option_data_0_3,
	&mercury_data_getopt_io__du_functor_desc_option_data_0_4,
	&mercury_data_getopt_io__du_functor_desc_option_data_0_10,
	&mercury_data_getopt_io__du_functor_desc_option_data_0_6,
	&mercury_data_getopt_io__du_functor_desc_option_data_0_2,
	&mercury_data_getopt_io__du_functor_desc_option_data_0_9
};

const MR_Integer mercury_data_getopt_io__functor_number_map_option_data_0[] = {
	1,
	4,
	10,
	6,
	7,
	0,
	9,
	2,
	5,
	11,
	8,
	3 };
	
const MR_TypeCtorInfo_Struct mercury_data_getopt_io__type_ctor_info_option_data_0 = {
	0,
	13,
	4,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___getopt_io__option_data_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___getopt_io__option_data_0_0)),
	"getopt_io",
	"option_data",
	{ (void *)mercury_data_getopt_io__du_name_ordered_option_data_0 },
	{ (void *)mercury_data_getopt_io__du_ptag_ordered_option_data_0 },
	12,
	4,
	mercury_data_getopt_io__functor_number_map_option_data_0
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

static const MR_VA_PseudoTypeInfo_Struct2 mercury_data___vpti_pred_2__pseudo_1__plain_getopt_io__type_ctor_info_option_data_0 = {
	&mercury_data_builtin__type_ctor_info_pred_0,
	2,
{	(MR_PseudoTypeInfo) 1,
	(MR_PseudoTypeInfo) &mercury_data_getopt_io__type_ctor_info_option_data_0
}};

const MR_PseudoTypeInfo mercury_data_getopt_io__field_types_option_ops_1_0[] = {
	(MR_PseudoTypeInfo) &mercury_data___vpti_pred_2__plain_builtin__type_ctor_info_character_0__pseudo_1,
	(MR_PseudoTypeInfo) &mercury_data___vpti_pred_2__plain_builtin__type_ctor_info_string_0__pseudo_1,
	(MR_PseudoTypeInfo) &mercury_data___vpti_pred_2__pseudo_1__plain_getopt_io__type_ctor_info_option_data_0
};

static const MR_DuFunctorDesc mercury_data_getopt_io__du_functor_desc_option_ops_1_0 = {
	"option_ops",
	3,
	7,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_getopt_io__field_types_option_ops_1_0,
	NULL,
	NULL
};

static const MR_FA_PseudoTypeInfo_Struct1 mercury_data_getopt_io__pti_maybe_option_table_1__pseudo_1 = {
	&mercury_data_getopt_io__type_ctor_info_maybe_option_table_1,
{	(MR_PseudoTypeInfo) 1
}};
extern const MR_TypeCtorInfo_Struct mercury_data_getopt_io__type_ctor_info_special_data_0;

static const MR_VA_PseudoTypeInfo_Struct4 mercury_data___vpti_pred_4__pseudo_1__plain_getopt_io__type_ctor_info_special_data_0__pseudo_tree234__pti_tree234_2__pseudo_1__plain_getopt_io__type_ctor_info_option_data_0__pseudo_getopt_io__pti_maybe_option_table_1__pseudo_1 = {
	&mercury_data_builtin__type_ctor_info_pred_0,
	4,
{	(MR_PseudoTypeInfo) 1,
	(MR_PseudoTypeInfo) &mercury_data_getopt_io__type_ctor_info_special_data_0,
	(MR_PseudoTypeInfo) &mercury_data_tree234__pti_tree234_2__pseudo_1__plain_getopt_io__type_ctor_info_option_data_0,
	(MR_PseudoTypeInfo) &mercury_data_getopt_io__pti_maybe_option_table_1__pseudo_1
}};

const MR_PseudoTypeInfo mercury_data_getopt_io__field_types_option_ops_1_1[] = {
	(MR_PseudoTypeInfo) &mercury_data___vpti_pred_2__plain_builtin__type_ctor_info_character_0__pseudo_1,
	(MR_PseudoTypeInfo) &mercury_data___vpti_pred_2__plain_builtin__type_ctor_info_string_0__pseudo_1,
	(MR_PseudoTypeInfo) &mercury_data___vpti_pred_2__pseudo_1__plain_getopt_io__type_ctor_info_option_data_0,
	(MR_PseudoTypeInfo) &mercury_data___vpti_pred_4__pseudo_1__plain_getopt_io__type_ctor_info_special_data_0__pseudo_tree234__pti_tree234_2__pseudo_1__plain_getopt_io__type_ctor_info_option_data_0__pseudo_getopt_io__pti_maybe_option_table_1__pseudo_1
};

static const MR_DuFunctorDesc mercury_data_getopt_io__du_functor_desc_option_ops_1_1 = {
	"option_ops",
	4,
	15,
	MR_SECTAG_NONE,
	1,
	-1,
	1,
	(MR_PseudoTypeInfo *) mercury_data_getopt_io__field_types_option_ops_1_1,
	NULL,
	NULL
};

const MR_PseudoTypeInfo mercury_data_getopt_io__field_types_option_ops_1_2[] = {
	(MR_PseudoTypeInfo) &mercury_data___vpti_pred_2__plain_builtin__type_ctor_info_character_0__pseudo_1,
	(MR_PseudoTypeInfo) &mercury_data___vpti_pred_2__plain_builtin__type_ctor_info_string_0__pseudo_1,
	(MR_PseudoTypeInfo) &mercury_data___vpti_pred_2__pseudo_1__plain_getopt_io__type_ctor_info_option_data_0
};

static const MR_DuFunctorDesc mercury_data_getopt_io__du_functor_desc_option_ops_1_2 = {
	"option_ops_multi",
	3,
	7,
	MR_SECTAG_NONE,
	2,
	-1,
	2,
	(MR_PseudoTypeInfo *) mercury_data_getopt_io__field_types_option_ops_1_2,
	NULL,
	NULL
};

const MR_PseudoTypeInfo mercury_data_getopt_io__field_types_option_ops_1_3[] = {
	(MR_PseudoTypeInfo) &mercury_data___vpti_pred_2__plain_builtin__type_ctor_info_character_0__pseudo_1,
	(MR_PseudoTypeInfo) &mercury_data___vpti_pred_2__plain_builtin__type_ctor_info_string_0__pseudo_1,
	(MR_PseudoTypeInfo) &mercury_data___vpti_pred_2__pseudo_1__plain_getopt_io__type_ctor_info_option_data_0,
	(MR_PseudoTypeInfo) &mercury_data___vpti_pred_4__pseudo_1__plain_getopt_io__type_ctor_info_special_data_0__pseudo_tree234__pti_tree234_2__pseudo_1__plain_getopt_io__type_ctor_info_option_data_0__pseudo_getopt_io__pti_maybe_option_table_1__pseudo_1
};

static const MR_DuFunctorDesc mercury_data_getopt_io__du_functor_desc_option_ops_1_3 = {
	"option_ops_multi",
	4,
	15,
	MR_SECTAG_NONE,
	3,
	-1,
	3,
	(MR_PseudoTypeInfo *) mercury_data_getopt_io__field_types_option_ops_1_3,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_getopt_io__du_stag_ordered_option_ops_1_0[] = {
	&mercury_data_getopt_io__du_functor_desc_option_ops_1_0

};

const MR_DuFunctorDescPtr mercury_data_getopt_io__du_stag_ordered_option_ops_1_1[] = {
	&mercury_data_getopt_io__du_functor_desc_option_ops_1_1

};

const MR_DuFunctorDescPtr mercury_data_getopt_io__du_stag_ordered_option_ops_1_2[] = {
	&mercury_data_getopt_io__du_functor_desc_option_ops_1_2

};

const MR_DuFunctorDescPtr mercury_data_getopt_io__du_stag_ordered_option_ops_1_3[] = {
	&mercury_data_getopt_io__du_functor_desc_option_ops_1_3

};

const MR_DuPtagLayout mercury_data_getopt_io__du_ptag_ordered_option_ops_1[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_getopt_io__du_stag_ordered_option_ops_1_0 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_getopt_io__du_stag_ordered_option_ops_1_1 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_getopt_io__du_stag_ordered_option_ops_1_2 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_getopt_io__du_stag_ordered_option_ops_1_3 }

};

const MR_DuFunctorDescPtr mercury_data_getopt_io__du_name_ordered_option_ops_1[] = {
	&mercury_data_getopt_io__du_functor_desc_option_ops_1_0,
	&mercury_data_getopt_io__du_functor_desc_option_ops_1_1,
	&mercury_data_getopt_io__du_functor_desc_option_ops_1_2,
	&mercury_data_getopt_io__du_functor_desc_option_ops_1_3
};

const MR_Integer mercury_data_getopt_io__functor_number_map_option_ops_1[] = {
	0,
	1,
	2,
	3 };
	
const MR_TypeCtorInfo_Struct mercury_data_getopt_io__type_ctor_info_option_ops_1 = {
	1,
	13,
	4,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___getopt_io__option_ops_1_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___getopt_io__option_ops_1_0)),
	"getopt_io",
	"option_ops",
	{ (void *)mercury_data_getopt_io__du_name_ordered_option_ops_1 },
	{ (void *)mercury_data_getopt_io__du_ptag_ordered_option_ops_1 },
	4,
	4,
	mercury_data_getopt_io__functor_number_map_option_ops_1
};

static const MR_FA_PseudoTypeInfo_Struct1 mercury_data_getopt_io__pti_option_ops_special_1__pseudo_1 = {
	&mercury_data_getopt_io__type_ctor_info_option_ops_special_1,
{	(MR_PseudoTypeInfo) 1
}};

const MR_PseudoTypeInfo mercury_data_getopt_io__field_types_option_ops_internal_1_0[] = {
	(MR_PseudoTypeInfo) &mercury_data___vpti_pred_2__plain_builtin__type_ctor_info_character_0__pseudo_1,
	(MR_PseudoTypeInfo) &mercury_data___vpti_pred_2__plain_builtin__type_ctor_info_string_0__pseudo_1,
	(MR_PseudoTypeInfo) &mercury_data_getopt_io__pti_option_ops_special_1__pseudo_1
};

const MR_ConstString mercury_data_getopt_io__field_names_option_ops_internal_1_0[] = {
	"short_option",
	"long_option",
	"special_handler"
};

static const MR_DuFunctorDesc mercury_data_getopt_io__du_functor_desc_option_ops_internal_1_0 = {
	"option_ops_internal",
	3,
	7,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_getopt_io__field_types_option_ops_internal_1_0,
	mercury_data_getopt_io__field_names_option_ops_internal_1_0,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_getopt_io__du_stag_ordered_option_ops_internal_1_0[] = {
	&mercury_data_getopt_io__du_functor_desc_option_ops_internal_1_0

};

const MR_DuPtagLayout mercury_data_getopt_io__du_ptag_ordered_option_ops_internal_1[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_getopt_io__du_stag_ordered_option_ops_internal_1_0 }

};

const MR_DuFunctorDescPtr mercury_data_getopt_io__du_name_ordered_option_ops_internal_1[] = {
	&mercury_data_getopt_io__du_functor_desc_option_ops_internal_1_0
};

const MR_Integer mercury_data_getopt_io__functor_number_map_option_ops_internal_1[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_getopt_io__type_ctor_info_option_ops_internal_1 = {
	1,
	13,
	1,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___getopt_io__option_ops_internal_1_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___getopt_io__option_ops_internal_1_0)),
	"getopt_io",
	"option_ops_internal",
	{ (void *)mercury_data_getopt_io__du_name_ordered_option_ops_internal_1 },
	{ (void *)mercury_data_getopt_io__du_ptag_ordered_option_ops_internal_1 },
	1,
	4,
	mercury_data_getopt_io__functor_number_map_option_ops_internal_1
};

static const MR_DuFunctorDesc mercury_data_getopt_io__du_functor_desc_option_ops_special_1_0 = {
	"none",
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

const MR_PseudoTypeInfo mercury_data_getopt_io__field_types_option_ops_special_1_1[] = {
	(MR_PseudoTypeInfo) &mercury_data___vpti_pred_4__pseudo_1__plain_getopt_io__type_ctor_info_special_data_0__pseudo_tree234__pti_tree234_2__pseudo_1__plain_getopt_io__type_ctor_info_option_data_0__pseudo_getopt_io__pti_maybe_option_table_1__pseudo_1
};

static const MR_DuFunctorDesc mercury_data_getopt_io__du_functor_desc_option_ops_special_1_1 = {
	"notrack",
	1,
	1,
	MR_SECTAG_NONE,
	1,
	-1,
	1,
	(MR_PseudoTypeInfo *) mercury_data_getopt_io__field_types_option_ops_special_1_1,
	NULL,
	NULL
};
extern const MR_TypeCtorInfo_Struct mercury_data_set_ordlist__type_ctor_info_set_ordlist_1;

static const MR_FA_PseudoTypeInfo_Struct1 mercury_data_set_ordlist__pti_set_ordlist_1__pseudo_1 = {
	&mercury_data_set_ordlist__type_ctor_info_set_ordlist_1,
{	(MR_PseudoTypeInfo) 1
}};

static const MR_VA_PseudoTypeInfo_Struct5 mercury_data___vpti_pred_5__pseudo_1__plain_getopt_io__type_ctor_info_special_data_0__pseudo_tree234__pti_tree234_2__pseudo_1__plain_getopt_io__type_ctor_info_option_data_0__pseudo_getopt_io__pti_maybe_option_table_1__pseudo_1__pseudo_set_ordlist__pti_set_ordlist_1__pseudo_1 = {
	&mercury_data_builtin__type_ctor_info_pred_0,
	5,
{	(MR_PseudoTypeInfo) 1,
	(MR_PseudoTypeInfo) &mercury_data_getopt_io__type_ctor_info_special_data_0,
	(MR_PseudoTypeInfo) &mercury_data_tree234__pti_tree234_2__pseudo_1__plain_getopt_io__type_ctor_info_option_data_0,
	(MR_PseudoTypeInfo) &mercury_data_getopt_io__pti_maybe_option_table_1__pseudo_1,
	(MR_PseudoTypeInfo) &mercury_data_set_ordlist__pti_set_ordlist_1__pseudo_1
}};

const MR_PseudoTypeInfo mercury_data_getopt_io__field_types_option_ops_special_1_2[] = {
	(MR_PseudoTypeInfo) &mercury_data___vpti_pred_5__pseudo_1__plain_getopt_io__type_ctor_info_special_data_0__pseudo_tree234__pti_tree234_2__pseudo_1__plain_getopt_io__type_ctor_info_option_data_0__pseudo_getopt_io__pti_maybe_option_table_1__pseudo_1__pseudo_set_ordlist__pti_set_ordlist_1__pseudo_1
};

static const MR_DuFunctorDesc mercury_data_getopt_io__du_functor_desc_option_ops_special_1_2 = {
	"track",
	1,
	1,
	MR_SECTAG_NONE,
	2,
	-1,
	2,
	(MR_PseudoTypeInfo *) mercury_data_getopt_io__field_types_option_ops_special_1_2,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_getopt_io__du_stag_ordered_option_ops_special_1_0[] = {
	&mercury_data_getopt_io__du_functor_desc_option_ops_special_1_0

};

const MR_DuFunctorDescPtr mercury_data_getopt_io__du_stag_ordered_option_ops_special_1_1[] = {
	&mercury_data_getopt_io__du_functor_desc_option_ops_special_1_1

};

const MR_DuFunctorDescPtr mercury_data_getopt_io__du_stag_ordered_option_ops_special_1_2[] = {
	&mercury_data_getopt_io__du_functor_desc_option_ops_special_1_2

};

const MR_DuPtagLayout mercury_data_getopt_io__du_ptag_ordered_option_ops_special_1[] = {
	{ 1, MR_SECTAG_LOCAL,
	mercury_data_getopt_io__du_stag_ordered_option_ops_special_1_0 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_getopt_io__du_stag_ordered_option_ops_special_1_1 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_getopt_io__du_stag_ordered_option_ops_special_1_2 }

};

const MR_DuFunctorDescPtr mercury_data_getopt_io__du_name_ordered_option_ops_special_1[] = {
	&mercury_data_getopt_io__du_functor_desc_option_ops_special_1_0,
	&mercury_data_getopt_io__du_functor_desc_option_ops_special_1_1,
	&mercury_data_getopt_io__du_functor_desc_option_ops_special_1_2
};

const MR_Integer mercury_data_getopt_io__functor_number_map_option_ops_special_1[] = {
	0,
	1,
	2 };
	
const MR_TypeCtorInfo_Struct mercury_data_getopt_io__type_ctor_info_option_ops_special_1 = {
	1,
	13,
	3,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___getopt_io__option_ops_special_1_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___getopt_io__option_ops_special_1_0)),
	"getopt_io",
	"option_ops_special",
	{ (void *)mercury_data_getopt_io__du_name_ordered_option_ops_special_1 },
	{ (void *)mercury_data_getopt_io__du_ptag_ordered_option_ops_special_1 },
	3,
	4,
	mercury_data_getopt_io__functor_number_map_option_ops_special_1
};

const MR_PseudoTypeInfo mercury_data_getopt_io__field_types_option_ops_track_1_0[] = {
	(MR_PseudoTypeInfo) &mercury_data___vpti_pred_2__plain_builtin__type_ctor_info_character_0__pseudo_1,
	(MR_PseudoTypeInfo) &mercury_data___vpti_pred_2__plain_builtin__type_ctor_info_string_0__pseudo_1,
	(MR_PseudoTypeInfo) &mercury_data___vpti_pred_5__pseudo_1__plain_getopt_io__type_ctor_info_special_data_0__pseudo_tree234__pti_tree234_2__pseudo_1__plain_getopt_io__type_ctor_info_option_data_0__pseudo_getopt_io__pti_maybe_option_table_1__pseudo_1__pseudo_set_ordlist__pti_set_ordlist_1__pseudo_1
};

static const MR_DuFunctorDesc mercury_data_getopt_io__du_functor_desc_option_ops_track_1_0 = {
	"option_ops_track",
	3,
	7,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_getopt_io__field_types_option_ops_track_1_0,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_getopt_io__du_stag_ordered_option_ops_track_1_0[] = {
	&mercury_data_getopt_io__du_functor_desc_option_ops_track_1_0

};

const MR_DuPtagLayout mercury_data_getopt_io__du_ptag_ordered_option_ops_track_1[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_getopt_io__du_stag_ordered_option_ops_track_1_0 }

};

const MR_DuFunctorDescPtr mercury_data_getopt_io__du_name_ordered_option_ops_track_1[] = {
	&mercury_data_getopt_io__du_functor_desc_option_ops_track_1_0
};

const MR_Integer mercury_data_getopt_io__functor_number_map_option_ops_track_1[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_getopt_io__type_ctor_info_option_ops_track_1 = {
	1,
	13,
	1,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___getopt_io__option_ops_track_1_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___getopt_io__option_ops_track_1_0)),
	"getopt_io",
	"option_ops_track",
	{ (void *)mercury_data_getopt_io__du_name_ordered_option_ops_track_1 },
	{ (void *)mercury_data_getopt_io__du_ptag_ordered_option_ops_track_1 },
	1,
	4,
	mercury_data_getopt_io__functor_number_map_option_ops_track_1
};

const MR_TypeCtorInfo_Struct mercury_data_getopt_io__type_ctor_info_option_table_1 = {
	1,
	13,
	-1,
	MR_TYPECTOR_REP_EQUIV,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___getopt_io__option_table_1_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___getopt_io__option_table_1_0)),
	"getopt_io",
	"option_table",
	{ 0 },
	{ (void *)&mercury_data_tree234__pti_tree234_2__pseudo_1__plain_getopt_io__type_ctor_info_option_data_0 },
	-1,
	0,
	NULL
};

static const MR_DuFunctorDesc mercury_data_getopt_io__du_functor_desc_special_data_0_0 = {
	"none",
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

const MR_PseudoTypeInfo mercury_data_getopt_io__field_types_special_data_0_1[] = {
	(MR_PseudoTypeInfo) &mercury_data_bool__type_ctor_info_bool_0
};

static const MR_DuFunctorDesc mercury_data_getopt_io__du_functor_desc_special_data_0_1 = {
	"bool",
	1,
	0,
	MR_SECTAG_NONE,
	1,
	-1,
	1,
	(MR_PseudoTypeInfo *) mercury_data_getopt_io__field_types_special_data_0_1,
	NULL,
	NULL
};

const MR_PseudoTypeInfo mercury_data_getopt_io__field_types_special_data_0_2[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0
};

static const MR_DuFunctorDesc mercury_data_getopt_io__du_functor_desc_special_data_0_2 = {
	"int",
	1,
	0,
	MR_SECTAG_NONE,
	2,
	-1,
	2,
	(MR_PseudoTypeInfo *) mercury_data_getopt_io__field_types_special_data_0_2,
	NULL,
	NULL
};

const MR_PseudoTypeInfo mercury_data_getopt_io__field_types_special_data_0_3[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_string_0
};

static const MR_DuFunctorDesc mercury_data_getopt_io__du_functor_desc_special_data_0_3 = {
	"string",
	1,
	0,
	MR_SECTAG_REMOTE,
	3,
	0,
	3,
	(MR_PseudoTypeInfo *) mercury_data_getopt_io__field_types_special_data_0_3,
	NULL,
	NULL
};

const MR_PseudoTypeInfo mercury_data_getopt_io__field_types_special_data_0_4[] = {
	(MR_PseudoTypeInfo) &mercury_data_maybe__ti_maybe_1builtin__type_ctor_info_string_0
};

static const MR_DuFunctorDesc mercury_data_getopt_io__du_functor_desc_special_data_0_4 = {
	"maybe_string",
	1,
	0,
	MR_SECTAG_REMOTE,
	3,
	1,
	4,
	(MR_PseudoTypeInfo *) mercury_data_getopt_io__field_types_special_data_0_4,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_getopt_io__du_stag_ordered_special_data_0_0[] = {
	&mercury_data_getopt_io__du_functor_desc_special_data_0_0

};

const MR_DuFunctorDescPtr mercury_data_getopt_io__du_stag_ordered_special_data_0_1[] = {
	&mercury_data_getopt_io__du_functor_desc_special_data_0_1

};

const MR_DuFunctorDescPtr mercury_data_getopt_io__du_stag_ordered_special_data_0_2[] = {
	&mercury_data_getopt_io__du_functor_desc_special_data_0_2

};

const MR_DuFunctorDescPtr mercury_data_getopt_io__du_stag_ordered_special_data_0_3[] = {
	&mercury_data_getopt_io__du_functor_desc_special_data_0_3,
	&mercury_data_getopt_io__du_functor_desc_special_data_0_4

};

const MR_DuPtagLayout mercury_data_getopt_io__du_ptag_ordered_special_data_0[] = {
	{ 1, MR_SECTAG_LOCAL,
	mercury_data_getopt_io__du_stag_ordered_special_data_0_0 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_getopt_io__du_stag_ordered_special_data_0_1 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_getopt_io__du_stag_ordered_special_data_0_2 },
	{ 2, MR_SECTAG_REMOTE,
	mercury_data_getopt_io__du_stag_ordered_special_data_0_3 }

};

const MR_DuFunctorDescPtr mercury_data_getopt_io__du_name_ordered_special_data_0[] = {
	&mercury_data_getopt_io__du_functor_desc_special_data_0_1,
	&mercury_data_getopt_io__du_functor_desc_special_data_0_2,
	&mercury_data_getopt_io__du_functor_desc_special_data_0_4,
	&mercury_data_getopt_io__du_functor_desc_special_data_0_0,
	&mercury_data_getopt_io__du_functor_desc_special_data_0_3
};

const MR_Integer mercury_data_getopt_io__functor_number_map_special_data_0[] = {
	3,
	0,
	1,
	4,
	2 };
	
const MR_TypeCtorInfo_Struct mercury_data_getopt_io__type_ctor_info_special_data_0 = {
	0,
	13,
	4,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___getopt_io__special_data_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___getopt_io__special_data_0_0)),
	"getopt_io",
	"special_data",
	{ (void *)mercury_data_getopt_io__du_name_ordered_special_data_0 },
	{ (void *)mercury_data_getopt_io__du_ptag_ordered_special_data_0 },
	5,
	4,
	mercury_data_getopt_io__functor_number_map_special_data_0
};


static const MR_UserClosureId
mercury_data__closure_layout__getopt_io__init_option_table_multi_2_0_2 = {
{
MR_PREDICATE,
"list",
"list",
"cons",
3,
0
},
"getopt_io",
"solutions.opt",
58,
"d1;c3;"
};

static const MR_UserClosureId
mercury_data__closure_layout__getopt_io__init_option_table_multi_2_0_1 = {
{
MR_PREDICATE,
"getopt_io",
"getopt_io",
"lambda_getopt_io_m_355",
3,
0
},
"getopt_io",
"getopt_io.m",
355,
"d1;c3;"
};

static const MR_UserClosureId
mercury_data__closure_layout__getopt_io__init_option_table_2_0_2 = {
{
MR_PREDICATE,
"list",
"list",
"cons",
3,
0
},
"getopt_io",
"solutions.opt",
58,
"d1;c3;"
};

static const MR_UserClosureId
mercury_data__closure_layout__getopt_io__init_option_table_2_0_1 = {
{
MR_PREDICATE,
"getopt_io",
"getopt_io",
"lambda_getopt_io_m_348",
3,
0
},
"getopt_io",
"getopt_io.m",
348,
"d1;c3;"
};


MR_decl_entry(list__cons_3_0);
MR_decl_entry(solutions__builtin_aggregate_4_7);
MR_decl_entry(list__length_2_3_0);
MR_decl_entry(list__merge_sort_and_remove_dups_2_3_0);
MR_decl_entry(tree234__assoc_list_to_tree234_2_3_0);

MR_BEGIN_MODULE(getopt_io_module0)
	MR_init_entry1(getopt_io__init_option_table_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__getopt_io__init_option_table_2_0);
	MR_init_label3(getopt_io__init_option_table_2_0,6,7,8)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'init_option_table'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__getopt_io__init_option_table_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(3,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(getopt_io__IntroducedFrom__pred__init_option_table__348__1_3_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr1, 3) = MR_r1;
	MR_tfield(0, MR_tempr1, 4) = MR_r2;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr2, 0) = (MR_Word) MR_CTOR_ADDR(pair, pair, 2);
	MR_tfield(0, MR_tempr2, 1) = MR_r1;
	MR_tfield(0, MR_tempr2, 2) = (MR_Word) MR_CTOR0_ADDR(getopt_io, option_data);
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
	MR_sv(2) = (MR_Word) MR_CTOR0_ADDR(getopt_io, option_data);
	MR_sv(3) = MR_tempr2;
	MR_r1 = MR_tempr2;
	MR_r5 = (MR_Word) MR_tbmkword(0, 0);
	}
	MR_np_call_localret_ent(solutions__builtin_aggregate_4_7,
		getopt_io__init_option_table_2_0_i6);
MR_def_label(getopt_io__init_option_table_2_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(4);
	MR_r3 = (MR_Integer) 0;
	MR_np_call_localret_ent(list__length_2_3_0,
		getopt_io__init_option_table_2_0_i7);
MR_def_label(getopt_io__init_option_table_2_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(4);
	}
	MR_np_call_localret_ent(list__merge_sort_and_remove_dups_2_3_0,
		getopt_io__init_option_table_2_0_i8);
MR_def_label(getopt_io__init_option_table_2_0,8)
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

MR_BEGIN_MODULE(getopt_io_module1)
	MR_init_entry1(getopt_io__init_option_table_multi_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__getopt_io__init_option_table_multi_2_0);
	MR_init_label3(getopt_io__init_option_table_multi_2_0,6,7,8)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'init_option_table_multi'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__getopt_io__init_option_table_multi_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(3,1);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(getopt_io__IntroducedFrom__pred__init_option_table_multi__355__1_3_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr1, 3) = MR_r1;
	MR_tfield(0, MR_tempr1, 4) = MR_r2;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr2, 0) = (MR_Word) MR_CTOR_ADDR(pair, pair, 2);
	MR_tfield(0, MR_tempr2, 1) = MR_r1;
	MR_tfield(0, MR_tempr2, 2) = (MR_Word) MR_CTOR0_ADDR(getopt_io, option_data);
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
	MR_sv(2) = (MR_Word) MR_CTOR0_ADDR(getopt_io, option_data);
	MR_sv(3) = MR_tempr2;
	MR_r1 = MR_tempr2;
	MR_r5 = (MR_Word) MR_tbmkword(0, 0);
	}
	MR_np_call_localret_ent(solutions__builtin_aggregate_4_0,
		getopt_io__init_option_table_multi_2_0_i6);
MR_def_label(getopt_io__init_option_table_multi_2_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(4);
	MR_r3 = (MR_Integer) 0;
	MR_np_call_localret_ent(list__length_2_3_0,
		getopt_io__init_option_table_multi_2_0_i7);
MR_def_label(getopt_io__init_option_table_multi_2_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(4);
	}
	MR_np_call_localret_ent(list__merge_sort_and_remove_dups_2_3_0,
		getopt_io__init_option_table_multi_2_0_i8);
MR_def_label(getopt_io__init_option_table_multi_2_0,8)
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

MR_decl_entry(string__append_3_2);
MR_declare_entry(mercury__do_call_closure_3);
MR_decl_entry(fn__string__append_list_1_0);
MR_decl_entry(list__merge_and_remove_dups_3_0);

MR_BEGIN_MODULE(getopt_io_module2)
	MR_init_entry1(getopt_io__process_special_8_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__getopt_io__process_special_8_0);
	MR_init_label10(getopt_io__process_special_8_0,4,7,10,8,15,18,21,23,19,27)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'process_special'/8 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(getopt_io__process_special_8_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(0, MR_r5, 2);
	MR_r8 = MR_tempr1;
	if (MR_PTAG_TEST(MR_tempr1,2)) {
		MR_GOTO_LAB(getopt_io__process_special_8_0_i18);
	}
	if (MR_PTAG_TEST(MR_tempr1,1)) {
		MR_GOTO_LAB(getopt_io__process_special_8_0_i7);
	}
	MR_sv(2) = MR_r7;
	MR_r1 = MR_r2;
	MR_r2 = (MR_Word) MR_string_const("\' has no handler", 16);
	}
	MR_np_call_localret_ent(string__append_3_2,
		getopt_io__process_special_8_0_i4);
MR_def_label(getopt_io__process_special_8_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("option \140", 8);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(string__append_3_2,
		getopt_io__process_special_8_0_i15);
MR_def_label(getopt_io__process_special_8_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r7;
	MR_r1 = MR_tfield(1, MR_r8, 0);
	MR_r2 = MR_r3;
	MR_r3 = MR_r4;
	MR_r4 = MR_r6;
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(getopt_io__process_special_8_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_3),
		mercury__getopt_io__process_special_8_0_i10);
MR_def_label(getopt_io__process_special_8_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(getopt_io__process_special_8_0_i8);
	}
	MR_r1 = MR_r2;
	MR_r2 = MR_sv(2);
	MR_decr_sp_and_return(4);
MR_def_label(getopt_io__process_special_8_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(2);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_r2;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_TAG_COMMON(1,6,0);
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = (MR_Word) MR_string_const("the handler of option \140", 23);
	MR_tfield(1, MR_r1, 1) = MR_tempr2;
	}
	MR_np_call_localret_ent(fn__string__append_list_1_0,
		getopt_io__process_special_8_0_i15);
MR_def_label(getopt_io__process_special_8_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(2);
	MR_decr_sp_and_return(4);
	}
MR_def_label(getopt_io__process_special_8_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r7;
	MR_sv(3) = MR_r1;
	MR_r1 = MR_tfield(2, MR_r8, 0);
	MR_r2 = MR_r3;
	MR_r3 = MR_r4;
	MR_r4 = MR_r6;
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(getopt_io__process_special_8_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_3),
		mercury__getopt_io__process_special_8_0_i21);
MR_def_label(getopt_io__process_special_8_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(getopt_io__process_special_8_0_i19);
	}
	MR_sv(1) = MR_r2;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_r3;
	MR_r3 = MR_sv(2);
	MR_np_call_localret_ent(list__merge_and_remove_dups_3_0,
		getopt_io__process_special_8_0_i23);
MR_def_label(getopt_io__process_special_8_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_decr_sp_and_return(4);
	}
MR_def_label(getopt_io__process_special_8_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(2);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_r2;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_TAG_COMMON(1,6,0);
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = (MR_Word) MR_string_const("the handler of option \140", 23);
	MR_tfield(1, MR_r1, 1) = MR_tempr2;
	}
	MR_np_call_localret_ent(fn__string__append_list_1_0,
		getopt_io__process_special_8_0_i27);
MR_def_label(getopt_io__process_special_8_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(2);
	MR_decr_sp_and_return(4);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(map__search_3_0);
MR_decl_entry(svset__insert_3_0);
MR_decl_entry(map__set_4_0);
MR_decl_entry(fn__f_115_116_114_105_110_103_95_95_43_43_2_0);
MR_decl_entry(string__append_list_2_0);

MR_BEGIN_MODULE(getopt_io_module3)
	MR_init_entry1(getopt_io__process_negated_option_7_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__getopt_io__process_negated_option_7_0);
	MR_init_label10(getopt_io__process_negated_option_7_0,3,58,11,12,24,25,61,7,16,17)
	MR_init_label10(getopt_io__process_negated_option_7_0,20,21,28,29,32,33,35,37,38,40)
	MR_init_label10(getopt_io__process_negated_option_7_0,42,43,46,47,48,50,51,54,55,2)
	MR_init_label1(getopt_io__process_negated_option_7_0,65)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'process_negated_option'/7 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(getopt_io__process_negated_option_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r5;
	MR_sv(4) = MR_tempr1;
	MR_sv(5) = MR_r6;
	MR_sv(6) = MR_r1;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(getopt_io, option_data);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(2);
	}
	MR_np_call_localret_ent(map__search_3_0,
		getopt_io__process_negated_option_7_0_i3);
MR_def_label(getopt_io__process_negated_option_7_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(getopt_io__process_negated_option_7_0_i2);
	}
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r2),
		MR_LABEL_AP(getopt_io__process_negated_option_7_0_i58) MR_AND
		MR_LABEL_AP(getopt_io__process_negated_option_7_0_i11) MR_AND
		MR_LABEL_AP(getopt_io__process_negated_option_7_0_i24) MR_AND
		MR_LABEL_AP(getopt_io__process_negated_option_7_0_i61));
MR_def_label(getopt_io__process_negated_option_7_0,58)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_unmkbody(MR_r2),
		MR_LABEL_AP(getopt_io__process_negated_option_7_0_i46) MR_AND
		MR_LABEL_AP(getopt_io__process_negated_option_7_0_i16) MR_AND
		MR_LABEL_AP(getopt_io__process_negated_option_7_0_i28) MR_AND
		MR_LABEL_AP(getopt_io__process_negated_option_7_0_i54) MR_AND
		MR_LABEL_AP(getopt_io__process_negated_option_7_0_i42) MR_AND
		MR_LABEL_AP(getopt_io__process_negated_option_7_0_i20));
MR_def_label(getopt_io__process_negated_option_7_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(5);
	MR_np_call_localret_ent(svset__insert_3_0,
		getopt_io__process_negated_option_7_0_i12);
MR_def_label(getopt_io__process_negated_option_7_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(getopt_io, option_data);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(2);
	MR_r5 = (MR_Word) MR_TAG_COMMON(1,8,0);
	MR_np_call_localret_ent(map__set_4_0,
		getopt_io__process_negated_option_7_0_i40);
MR_def_label(getopt_io__process_negated_option_7_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = (MR_Word) MR_string_const("\' --only boolean, maybe and accumulating options can be negated", 63);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		getopt_io__process_negated_option_7_0_i25);
MR_def_label(getopt_io__process_negated_option_7_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("cannot negate option \140", 22);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		getopt_io__process_negated_option_7_0_i65);
MR_def_label(getopt_io__process_negated_option_7_0,61)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_EQ(MR_tfield(3, MR_r2, 0),0)) {
		MR_GOTO_LAB(getopt_io__process_negated_option_7_0_i50);
	}
	if (MR_INT_EQ(MR_tfield(3, MR_r2, 0),1)) {
		MR_GOTO_LAB(getopt_io__process_negated_option_7_0_i32);
	}
	if (MR_INT_EQ(MR_tfield(3, MR_r2, 0),2)) {
		MR_GOTO_LAB(getopt_io__process_negated_option_7_0_i37);
	}
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(5);
	MR_np_call_localret_ent(svset__insert_3_0,
		getopt_io__process_negated_option_7_0_i7);
MR_def_label(getopt_io__process_negated_option_7_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(getopt_io, option_data);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(2);
	MR_r5 = (MR_Word) MR_TAG_COMMON(3,7,0);
	MR_np_call_localret_ent(map__set_4_0,
		getopt_io__process_negated_option_7_0_i35);
MR_def_label(getopt_io__process_negated_option_7_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(5);
	MR_np_call_localret_ent(svset__insert_3_0,
		getopt_io__process_negated_option_7_0_i17);
MR_def_label(getopt_io__process_negated_option_7_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = (MR_Word) MR_TAG_COMMON(1,8,0);
	MR_r5 = MR_sv(3);
	MR_r6 = MR_sv(4);
	MR_r7 = MR_tempr1;
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(getopt_io__process_special_8_0);
	}
MR_def_label(getopt_io__process_negated_option_7_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = (MR_Word) MR_string_const("\' --only boolean, maybe and accumulating options can be negated", 63);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		getopt_io__process_negated_option_7_0_i21);
MR_def_label(getopt_io__process_negated_option_7_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("cannot negate option \140", 22);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		getopt_io__process_negated_option_7_0_i48);
MR_def_label(getopt_io__process_negated_option_7_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = (MR_Word) MR_string_const("\' --only boolean, maybe and accumulating options can be negated", 63);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		getopt_io__process_negated_option_7_0_i29);
MR_def_label(getopt_io__process_negated_option_7_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("cannot negate option \140", 22);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		getopt_io__process_negated_option_7_0_i65);
MR_def_label(getopt_io__process_negated_option_7_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(5);
	MR_np_call_localret_ent(svset__insert_3_0,
		getopt_io__process_negated_option_7_0_i33);
MR_def_label(getopt_io__process_negated_option_7_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(getopt_io, option_data);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(2);
	MR_r5 = (MR_Word) MR_TAG_COMMON(3,7,1);
	MR_np_call_localret_ent(map__set_4_0,
		getopt_io__process_negated_option_7_0_i35);
MR_def_label(getopt_io__process_negated_option_7_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(1);
	MR_decr_sp_and_return(7);
	}
MR_def_label(getopt_io__process_negated_option_7_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(5);
	MR_np_call_localret_ent(svset__insert_3_0,
		getopt_io__process_negated_option_7_0_i38);
MR_def_label(getopt_io__process_negated_option_7_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(getopt_io, option_data);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(2);
	MR_r5 = (MR_Word) MR_TAG_COMMON(3,7,2);
	MR_np_call_localret_ent(map__set_4_0,
		getopt_io__process_negated_option_7_0_i40);
MR_def_label(getopt_io__process_negated_option_7_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(1);
	MR_decr_sp_and_return(7);
	}
MR_def_label(getopt_io__process_negated_option_7_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(5);
	MR_np_call_localret_ent(svset__insert_3_0,
		getopt_io__process_negated_option_7_0_i43);
MR_def_label(getopt_io__process_negated_option_7_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = (MR_Word) MR_TAG_COMMON(3,7,1);
	MR_r5 = MR_sv(3);
	MR_r6 = MR_sv(4);
	MR_r7 = MR_tempr1;
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(getopt_io__process_special_8_0);
	}
MR_def_label(getopt_io__process_negated_option_7_0,46)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = (MR_Word) MR_string_const("\' --only boolean, maybe and accumulating options can be negated", 63);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		getopt_io__process_negated_option_7_0_i47);
MR_def_label(getopt_io__process_negated_option_7_0,47)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("cannot negate option \140", 22);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		getopt_io__process_negated_option_7_0_i48);
MR_def_label(getopt_io__process_negated_option_7_0,48)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(5);
	MR_decr_sp_and_return(7);
	}
MR_def_label(getopt_io__process_negated_option_7_0,50)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = (MR_Word) MR_string_const("\' --only boolean, maybe and accumulating options can be negated", 63);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		getopt_io__process_negated_option_7_0_i51);
MR_def_label(getopt_io__process_negated_option_7_0,51)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("cannot negate option \140", 22);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		getopt_io__process_negated_option_7_0_i65);
MR_def_label(getopt_io__process_negated_option_7_0,54)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = (MR_Word) MR_string_const("\' --only boolean, maybe and accumulating options can be negated", 63);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		getopt_io__process_negated_option_7_0_i55);
MR_def_label(getopt_io__process_negated_option_7_0,55)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("cannot negate option \140", 22);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		getopt_io__process_negated_option_7_0_i65);
MR_def_label(getopt_io__process_negated_option_7_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(1);
	MR_tfield(1, MR_r2, 1) = (MR_Word) MR_TAG_COMMON(1,6,1);
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = (MR_Word) MR_string_const("unknown type for option \140", 25);
	MR_tfield(1, MR_r1, 1) = MR_r2;
	MR_np_call_localret_ent(string__append_list_2_0,
		getopt_io__process_negated_option_7_0_i65);
MR_def_label(getopt_io__process_negated_option_7_0,65)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(5);
	MR_decr_sp_and_return(7);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(string__append_3_1);
MR_declare_entry(mercury__do_call_closure_1);
MR_decl_entry(string__sub_string_search_3_0);
MR_decl_entry(string__split_4_0);
MR_decl_entry(string__first_char_3_2);
MR_decl_entry(require__error_1_0);
MR_decl_entry(string__to_char_list_2_0);
MR_decl_entry(string__from_char_list_2_0);

MR_BEGIN_MODULE(getopt_io_module4)
	MR_init_entry1(getopt_io__process_arguments_11_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__getopt_io__process_arguments_11_0);
	MR_init_label10(getopt_io__process_arguments_11_0,192,3,5,9,13,15,16,12,21,8)
	MR_init_label10(getopt_io__process_arguments_11_0,26,29,31,33,32,28,38,39,42,45)
	MR_init_label10(getopt_io__process_arguments_11_0,44,49,40,53,25,58,62,70,74,75)
	MR_init_label9(getopt_io__process_arguments_11_0,77,69,80,81,63,85,87,57,90)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'process_arguments'/11 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__getopt_io__process_arguments_11_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(11);
	MR_sv(11) = (MR_Word) MR_succip;
MR_def_label(getopt_io__process_arguments_11_0,192)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(getopt_io__process_arguments_11_0_i3);
	}
	MR_tag_alloc_heap(MR_r3, 0, (MR_Integer) 1);
	MR_tfield(0, MR_r3, 0) = MR_r5;
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = MR_r4;
	MR_r4 = MR_r6;
	MR_decr_sp_and_return(11);
MR_def_label(getopt_io__process_arguments_11_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r8 = MR_tfield(1, MR_r2, 1);
	MR_sv(5) = MR_tfield(1, MR_r2, 0);
	if ((strcmp((char *) (MR_Word *) MR_sv(5), MR_string_const("--", 2)) != 0)) {
		MR_GOTO_LAB(getopt_io__process_arguments_11_0_i5);
	}
	MR_tag_alloc_heap(MR_r3, 0, (MR_Integer) 1);
	MR_tfield(0, MR_r3, 0) = MR_r5;
	MR_r1 = MR_r8;
	MR_r2 = MR_r4;
	MR_r4 = MR_r6;
	MR_decr_sp_and_return(11);
MR_def_label(getopt_io__process_arguments_11_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r4;
	MR_sv(3) = MR_r5;
	MR_sv(4) = MR_r6;
	MR_sv(6) = MR_r8;
	MR_sv(10) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("--no-", 5);
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(string__append_3_1,
		getopt_io__process_arguments_11_0_i9);
MR_def_label(getopt_io__process_arguments_11_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(getopt_io__process_arguments_11_0_i8);
	}
	MR_sv(7) = MR_r2;
	MR_r1 = MR_tfield(0, MR_sv(1), 1);
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(getopt_io__process_arguments_11_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_1),
		mercury__getopt_io__process_arguments_11_0_i13);
MR_def_label(getopt_io__process_arguments_11_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(getopt_io__process_arguments_11_0_i12);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(7);
	MR_sv(7) = MR_r2;
	MR_r1 = (MR_Word) MR_string_const("--", 2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(string__append_3_2,
		getopt_io__process_arguments_11_0_i15);
MR_def_label(getopt_io__process_arguments_11_0,15)
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
	MR_np_call_localret_ent(getopt_io__process_negated_option_7_0,
		getopt_io__process_arguments_11_0_i16);
MR_def_label(getopt_io__process_arguments_11_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,1)) {
		MR_GOTO_LAB(getopt_io__process_arguments_11_0_i77);
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
MR_def_label(getopt_io__process_arguments_11_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	MR_r2 = (MR_Word) MR_string_const("\'", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		getopt_io__process_arguments_11_0_i21);
MR_def_label(getopt_io__process_arguments_11_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("unrecognized option \140-", 22);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		getopt_io__process_arguments_11_0_i81);
MR_def_label(getopt_io__process_arguments_11_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("--", 2);
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(string__append_3_1,
		getopt_io__process_arguments_11_0_i26);
MR_def_label(getopt_io__process_arguments_11_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(getopt_io__process_arguments_11_0_i25);
	}
	MR_sv(9) = MR_tfield(0, MR_sv(1), 1);
	MR_sv(7) = MR_r2;
	MR_r1 = MR_r2;
	MR_r2 = (MR_Word) MR_string_const("=", 1);
	MR_np_call_localret_ent(string__sub_string_search_3_0,
		getopt_io__process_arguments_11_0_i29);
MR_def_label(getopt_io__process_arguments_11_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(getopt_io__process_arguments_11_0_i28);
	}
	MR_r1 = MR_sv(7);
	MR_np_call_localret_ent(string__split_4_0,
		getopt_io__process_arguments_11_0_i31);
MR_def_label(getopt_io__process_arguments_11_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_r1 = MR_r2;
	MR_r2 = (MR_Integer) 61;
	MR_np_call_localret_ent(string__first_char_3_2,
		getopt_io__process_arguments_11_0_i33);
MR_def_label(getopt_io__process_arguments_11_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(getopt_io__process_arguments_11_0_i32);
	}
	MR_tag_alloc_heap(MR_sv(7), 1, (MR_Integer) 1);
	MR_tfield(1, MR_sv(7), 0) = MR_r2;
	MR_r1 = (MR_Word) MR_string_const("--", 2);
	MR_r2 = MR_sv(8);
	MR_GOTO_LAB(getopt_io__process_arguments_11_0_i38);
MR_def_label(getopt_io__process_arguments_11_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("bad split of --longoption=arg", 29);
	MR_np_call_localret_ent(require__error_1_0,
		getopt_io__process_arguments_11_0_i38);
MR_def_label(getopt_io__process_arguments_11_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(7);
	MR_sv(7) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = (MR_Word) MR_string_const("--", 2);
	MR_r2 = MR_tempr1;
	}
MR_def_label(getopt_io__process_arguments_11_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r2;
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		getopt_io__process_arguments_11_0_i39);
MR_def_label(getopt_io__process_arguments_11_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(8);
	MR_sv(8) = MR_r1;
	MR_r1 = MR_sv(9);
	MR_r2 = MR_tempr1;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(getopt_io__process_arguments_11_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_1),
		mercury__getopt_io__process_arguments_11_0_i42);
MR_def_label(getopt_io__process_arguments_11_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(getopt_io__process_arguments_11_0_i40);
	}
	MR_sv(9) = MR_r2;
	MR_r1 = MR_sv(10);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(getopt_io, option_data);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(9);
	MR_np_call_localret_ent(map__search_3_0,
		getopt_io__process_arguments_11_0_i45);
MR_def_label(getopt_io__process_arguments_11_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(getopt_io__process_arguments_11_0_i44);
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
	MR_np_tailcall_ent(getopt_io__handle_long_option_15_0);
	}
MR_def_label(getopt_io__process_arguments_11_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	MR_r2 = (MR_Word) MR_string_const("\'", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		getopt_io__process_arguments_11_0_i49);
MR_def_label(getopt_io__process_arguments_11_0,49)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("unknown type for option \140", 25);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		getopt_io__process_arguments_11_0_i81);
MR_def_label(getopt_io__process_arguments_11_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(8);
	MR_r2 = (MR_Word) MR_string_const("\'", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		getopt_io__process_arguments_11_0_i53);
MR_def_label(getopt_io__process_arguments_11_0,53)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("unrecognized option \140", 21);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		getopt_io__process_arguments_11_0_i81);
MR_def_label(getopt_io__process_arguments_11_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	MR_r2 = (MR_Integer) 45;
	MR_np_call_localret_ent(string__first_char_3_2,
		getopt_io__process_arguments_11_0_i58);
MR_def_label(getopt_io__process_arguments_11_0,58)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(getopt_io__process_arguments_11_0_i57);
	}
	if ((strcmp((char *) (MR_Word *) MR_r2, MR_string_const("", 0)) == 0)) {
		MR_GOTO_LAB(getopt_io__process_arguments_11_0_i57);
	}
	MR_sv(7) = MR_r2;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(string__to_char_list_2_0,
		getopt_io__process_arguments_11_0_i62);
MR_def_label(getopt_io__process_arguments_11_0,62)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(getopt_io__process_arguments_11_0_i63);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(1, MR_r1, 1);
	if (MR_LTAGS_TEST(MR_tempr1,0,0)) {
		MR_GOTO_LAB(getopt_io__process_arguments_11_0_i63);
	}
	MR_tempr2 = MR_tfield(1, MR_tempr1, 0);
	if (MR_INT_NE(MR_tempr2,45)) {
		MR_GOTO_LAB(getopt_io__process_arguments_11_0_i63);
	}
	MR_tempr2 = MR_tfield(1, MR_tempr1, 1);
	if (MR_LTAGS_TESTR(MR_tempr2,0,0)) {
		MR_GOTO_LAB(getopt_io__process_arguments_11_0_i63);
	}
	MR_sv(8) = MR_tfield(1, MR_r1, 0);
	MR_r1 = MR_tfield(0, MR_sv(1), 0);
	MR_r2 = MR_sv(8);
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(getopt_io__process_arguments_11_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_1),
		mercury__getopt_io__process_arguments_11_0_i70);
MR_def_label(getopt_io__process_arguments_11_0,70)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(getopt_io__process_arguments_11_0_i69);
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
		getopt_io__process_arguments_11_0_i74);
MR_def_label(getopt_io__process_arguments_11_0,74)
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
	MR_np_call_localret_ent(getopt_io__process_negated_option_7_0,
		getopt_io__process_arguments_11_0_i75);
MR_def_label(getopt_io__process_arguments_11_0,75)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,1)) {
		MR_GOTO_LAB(getopt_io__process_arguments_11_0_i77);
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
MR_def_label(getopt_io__process_arguments_11_0,77)
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
	MR_GOTO_LAB(getopt_io__process_arguments_11_0_i192);
	}
MR_def_label(getopt_io__process_arguments_11_0,69)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(7);
	MR_r2 = (MR_Word) MR_string_const("\'", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		getopt_io__process_arguments_11_0_i80);
MR_def_label(getopt_io__process_arguments_11_0,80)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("unrecognized option \140-", 22);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		getopt_io__process_arguments_11_0_i81);
MR_def_label(getopt_io__process_arguments_11_0,81)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r3, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r3, 0) = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(2);
	MR_r4 = MR_sv(4);
	MR_decr_sp_and_return(11);
MR_def_label(getopt_io__process_arguments_11_0,63)
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
	MR_np_call_localret_ent(getopt_io__handle_short_options_12_0,
		getopt_io__process_arguments_11_0_i85);
MR_def_label(getopt_io__process_arguments_11_0,85)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r3,1)) {
		MR_GOTO_LAB(getopt_io__process_arguments_11_0_i87);
	}
	MR_r1 = MR_sv(6);
	MR_decr_sp_and_return(11);
MR_def_label(getopt_io__process_arguments_11_0,87)
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
	MR_GOTO_LAB(getopt_io__process_arguments_11_0_i192);
	}
MR_def_label(getopt_io__process_arguments_11_0,57)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(10);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_r5 = MR_sv(3);
	MR_r6 = MR_sv(4);
	MR_np_localcall_lab(getopt_io__process_arguments_11_0,
		getopt_io__process_arguments_11_0_i90);
MR_def_label(getopt_io__process_arguments_11_0,90)
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


MR_BEGIN_MODULE(getopt_io_module5)
	MR_init_entry1(getopt_io__handle_long_option_15_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__getopt_io__handle_long_option_15_0);
	MR_init_label10(getopt_io__handle_long_option_15_0,16,63,13,3,20,21,23,2,26,29)
	MR_init_label10(getopt_io__handle_long_option_15_0,27,46,70,43,33,50,51,52,53,32)
	MR_init_label2(getopt_io__handle_long_option_15_0,55,57)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'handle_long_option'/15 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(getopt_io__handle_long_option_15_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r4),
		MR_LABEL_AP(getopt_io__handle_long_option_15_0_i16) MR_AND
		MR_LABEL_AP(getopt_io__handle_long_option_15_0_i13) MR_AND
		MR_LABEL_AP(getopt_io__handle_long_option_15_0_i63) MR_AND
		MR_LABEL_AP(getopt_io__handle_long_option_15_0_i63));
MR_def_label(getopt_io__handle_long_option_15_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_unmkbody(MR_r4),
		MR_LABEL_AP(getopt_io__handle_long_option_15_0_i13) MR_AND
		MR_LABEL_AP(getopt_io__handle_long_option_15_0_i13) MR_AND
		MR_LABEL_AP(getopt_io__handle_long_option_15_0_i63) MR_AND
		MR_LABEL_AP(getopt_io__handle_long_option_15_0_i63) MR_AND
		MR_LABEL_AP(getopt_io__handle_long_option_15_0_i63) MR_AND
		MR_LABEL_AP(getopt_io__handle_long_option_15_0_i63));
MR_def_label(getopt_io__handle_long_option_15_0,63)
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
	MR_GOTO_LAB(getopt_io__handle_long_option_15_0_i3);
MR_def_label(getopt_io__handle_long_option_15_0,13)
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
	MR_r8 = (MR_Integer) 0;
MR_def_label(getopt_io__handle_long_option_15_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) 1 == (MR_Integer) MR_r8)) {
		MR_GOTO_LAB(getopt_io__handle_long_option_15_0_i20);
	}
	MR_r12 = MR_r2;
	MR_r2 = MR_r1;
	MR_r13 = MR_r3;
	MR_r3 = MR_r12;
	MR_r14 = MR_r4;
	MR_r4 = MR_r13;
	MR_r15 = MR_r5;
	MR_r5 = MR_r14;
	MR_r16 = MR_r6;
	MR_r6 = MR_r15;
	MR_r17 = MR_r7;
	MR_r7 = MR_sv(1);
	MR_r18 = MR_r8;
	MR_r8 = MR_r16;
	MR_r9 = MR_r17;
	MR_r10 = MR_sv(3);
	MR_r1 = MR_sv(4);
	MR_GOTO_LAB(getopt_io__handle_long_option_15_0_i2);
MR_def_label(getopt_io__handle_long_option_15_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r4,0,0)) {
		MR_GOTO_LAB(getopt_io__handle_long_option_15_0_i21);
	}
	MR_r12 = MR_r2;
	MR_r2 = MR_r1;
	MR_r13 = MR_r3;
	MR_r3 = MR_r12;
	MR_r14 = MR_r4;
	MR_r4 = MR_r13;
	MR_r15 = MR_r5;
	MR_r5 = MR_r14;
	MR_r16 = MR_r6;
	MR_r6 = MR_r15;
	MR_r17 = MR_r7;
	MR_r7 = MR_sv(1);
	MR_r8 = MR_r16;
	MR_r9 = MR_r17;
	MR_r10 = MR_sv(3);
	MR_r1 = MR_sv(4);
	MR_GOTO_LAB(getopt_io__handle_long_option_15_0_i2);
MR_def_label(getopt_io__handle_long_option_15_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r5,0,0)) {
		MR_GOTO_LAB(getopt_io__handle_long_option_15_0_i23);
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
	MR_GOTO_LAB(getopt_io__handle_long_option_15_0_i26);
MR_def_label(getopt_io__handle_long_option_15_0,23)
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
	MR_GOTO_LAB(getopt_io__handle_long_option_15_0_i26);
	}
MR_def_label(getopt_io__handle_long_option_15_0,2)
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
MR_def_label(getopt_io__handle_long_option_15_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r7,1)) {
		MR_GOTO_LAB(getopt_io__handle_long_option_15_0_i27);
	}
	MR_sv(1) = MR_r4;
	MR_sv(2) = MR_sv(3);
	MR_sv(3) = MR_r8;
	MR_r2 = (MR_Word) MR_string_const("\' needs an argument", 19);
	MR_np_call_localret_ent(string__append_3_2,
		getopt_io__handle_long_option_15_0_i29);
MR_def_label(getopt_io__handle_long_option_15_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("option \140", 8);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(string__append_3_2,
		getopt_io__handle_long_option_15_0_i53);
MR_def_label(getopt_io__handle_long_option_15_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r3),
		MR_LABEL_AP(getopt_io__handle_long_option_15_0_i46) MR_AND
		MR_LABEL_AP(getopt_io__handle_long_option_15_0_i43) MR_AND
		MR_LABEL_AP(getopt_io__handle_long_option_15_0_i70) MR_AND
		MR_LABEL_AP(getopt_io__handle_long_option_15_0_i70));
MR_def_label(getopt_io__handle_long_option_15_0,46)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_unmkbody(MR_r3),
		MR_LABEL_AP(getopt_io__handle_long_option_15_0_i43) MR_AND
		MR_LABEL_AP(getopt_io__handle_long_option_15_0_i43) MR_AND
		MR_LABEL_AP(getopt_io__handle_long_option_15_0_i70) MR_AND
		MR_LABEL_AP(getopt_io__handle_long_option_15_0_i70) MR_AND
		MR_LABEL_AP(getopt_io__handle_long_option_15_0_i70) MR_AND
		MR_LABEL_AP(getopt_io__handle_long_option_15_0_i70));
MR_def_label(getopt_io__handle_long_option_15_0,70)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r7 = MR_r8;
	MR_r8 = (MR_Integer) 1;
	MR_GOTO_LAB(getopt_io__handle_long_option_15_0_i33);
MR_def_label(getopt_io__handle_long_option_15_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r7 = MR_r8;
	MR_r8 = (MR_Integer) 0;
MR_def_label(getopt_io__handle_long_option_15_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) 0 == (MR_Integer) MR_r8)) {
		MR_GOTO_LAB(getopt_io__handle_long_option_15_0_i50);
	}
	MR_r9 = MR_r8;
	MR_r8 = MR_r7;
	MR_GOTO_LAB(getopt_io__handle_long_option_15_0_i32);
MR_def_label(getopt_io__handle_long_option_15_0,50)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r6,0,0)) {
		MR_GOTO_LAB(getopt_io__handle_long_option_15_0_i51);
	}
	MR_r8 = MR_r7;
	MR_GOTO_LAB(getopt_io__handle_long_option_15_0_i32);
MR_def_label(getopt_io__handle_long_option_15_0,51)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r4;
	MR_sv(2) = MR_sv(3);
	MR_sv(3) = MR_r7;
	MR_r2 = (MR_Word) MR_string_const("\' does not allow an argument", 28);
	MR_np_call_localret_ent(string__append_3_2,
		getopt_io__handle_long_option_15_0_i52);
MR_def_label(getopt_io__handle_long_option_15_0,52)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("option \140", 8);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		getopt_io__handle_long_option_15_0_i53);
MR_def_label(getopt_io__handle_long_option_15_0,53)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r3, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r3, 0) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_decr_sp_and_return(5);
MR_def_label(getopt_io__handle_long_option_15_0,32)
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
	MR_np_call_localret_ent(getopt_io__process_option_11_0,
		getopt_io__handle_long_option_15_0_i55);
MR_def_label(getopt_io__handle_long_option_15_0,55)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,1)) {
		MR_GOTO_LAB(getopt_io__handle_long_option_15_0_i57);
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
MR_def_label(getopt_io__handle_long_option_15_0,57)
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
	MR_np_tailcall_ent(getopt_io__process_arguments_11_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(tree234__search_3_0);
MR_decl_entry(string__to_char_list_2_1);
MR_decl_entry(string__char_to_string_2_0);

MR_BEGIN_MODULE(getopt_io_module6)
	MR_init_entry1(getopt_io__handle_short_options_12_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__getopt_io__handle_short_options_12_0);
	MR_init_label10(getopt_io__handle_short_options_12_0,100,3,7,10,26,66,23,13,30,31)
	MR_init_label10(getopt_io__handle_short_options_12_0,37,12,45,46,48,9,51,52,5,56)
	MR_init_label2(getopt_io__handle_short_options_12_0,57,58)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'handle_short_options'/12 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(getopt_io__handle_short_options_12_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(11);
	MR_sv(11) = (MR_Word) MR_succip;
MR_def_label(getopt_io__handle_short_options_12_0,100)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(getopt_io__handle_short_options_12_0_i3);
	}
	MR_tag_alloc_heap(MR_r3, 0, (MR_Integer) 1);
	MR_tfield(0, MR_r3, 0) = MR_r6;
	MR_r1 = MR_r4;
	MR_r2 = MR_r5;
	MR_r4 = MR_r7;
	MR_decr_sp_and_return(11);
MR_def_label(getopt_io__handle_short_options_12_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(1, MR_r2, 0);
	MR_sv(1) = MR_r2;
	MR_tempr2 = MR_r3;
	MR_sv(2) = MR_tempr2;
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_r5;
	MR_sv(5) = MR_r6;
	MR_sv(6) = MR_r7;
	MR_sv(7) = MR_tempr1;
	MR_sv(8) = MR_tfield(1, MR_r2, 1);
	MR_sv(10) = MR_r1;
	MR_r1 = MR_tfield(0, MR_tempr2, 0);
	MR_r2 = MR_tempr1;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(getopt_io__handle_short_options_12_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_1),
		mercury__getopt_io__handle_short_options_12_0_i7);
MR_def_label(getopt_io__handle_short_options_12_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(getopt_io__handle_short_options_12_0_i5);
	}
	MR_sv(9) = MR_r2;
	MR_r1 = MR_sv(10);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(getopt_io, option_data);
	MR_r3 = MR_sv(5);
	MR_r4 = MR_sv(9);
	MR_np_call_localret_ent(tree234__search_3_0,
		getopt_io__handle_short_options_12_0_i10);
MR_def_label(getopt_io__handle_short_options_12_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(getopt_io__handle_short_options_12_0_i9);
	}
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r2),
		MR_LABEL_AP(getopt_io__handle_short_options_12_0_i26) MR_AND
		MR_LABEL_AP(getopt_io__handle_short_options_12_0_i23) MR_AND
		MR_LABEL_AP(getopt_io__handle_short_options_12_0_i66) MR_AND
		MR_LABEL_AP(getopt_io__handle_short_options_12_0_i66));
MR_def_label(getopt_io__handle_short_options_12_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_unmkbody(MR_r2),
		MR_LABEL_AP(getopt_io__handle_short_options_12_0_i23) MR_AND
		MR_LABEL_AP(getopt_io__handle_short_options_12_0_i23) MR_AND
		MR_LABEL_AP(getopt_io__handle_short_options_12_0_i66) MR_AND
		MR_LABEL_AP(getopt_io__handle_short_options_12_0_i66) MR_AND
		MR_LABEL_AP(getopt_io__handle_short_options_12_0_i66) MR_AND
		MR_LABEL_AP(getopt_io__handle_short_options_12_0_i66));
MR_def_label(getopt_io__handle_short_options_12_0,66)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_r2 = (MR_Integer) 1;
	MR_GOTO_LAB(getopt_io__handle_short_options_12_0_i13);
MR_def_label(getopt_io__handle_short_options_12_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_r2 = (MR_Integer) 0;
MR_def_label(getopt_io__handle_short_options_12_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) 1 == (MR_Integer) MR_r2)) {
		MR_GOTO_LAB(getopt_io__handle_short_options_12_0_i30);
	}
	MR_r3 = MR_r2;
	MR_r2 = MR_r1;
	MR_GOTO_LAB(getopt_io__handle_short_options_12_0_i12);
MR_def_label(getopt_io__handle_short_options_12_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(8),0,0)) {
		MR_GOTO_LAB(getopt_io__handle_short_options_12_0_i31);
	}
	if (MR_LTAGS_TEST(MR_sv(3),0,0)) {
		MR_GOTO_LAB(getopt_io__handle_short_options_12_0_i31);
	}
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_tfield(1, MR_sv(3), 0);
	MR_tfield(1, MR_r2, 1) = MR_sv(4);
	MR_tag_alloc_heap(MR_sv(7), 1, (MR_Integer) 1);
	MR_tfield(1, MR_sv(7), 0) = MR_tfield(1, MR_r2, 0);
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = (MR_Integer) 45;
	MR_tfield(1, MR_tempr1, 1) = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_sv(3) = MR_tfield(1, MR_sv(3), 1);
	MR_sv(4) = MR_r2;
	MR_sv(8) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(string__from_char_list_2_0,
		getopt_io__handle_short_options_12_0_i45);
MR_def_label(getopt_io__handle_short_options_12_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(8);
	MR_np_call_localret_ent(string__from_char_list_2_0,
		getopt_io__handle_short_options_12_0_i37);
MR_def_label(getopt_io__handle_short_options_12_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r2, 0) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(7);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = (MR_Integer) 45;
	MR_tfield(1, MR_r1, 1) = MR_tempr1;
	MR_sv(7) = MR_r2;
	MR_sv(8) = (MR_Word) MR_tbmkword(0, 0);
	}
	MR_np_call_localret_ent(string__from_char_list_2_0,
		getopt_io__handle_short_options_12_0_i45);
MR_def_label(getopt_io__handle_short_options_12_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(7);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = (MR_Integer) 45;
	MR_tfield(1, MR_r1, 1) = MR_tempr1;
	MR_sv(1) = MR_r2;
	MR_sv(7) = (MR_Word) MR_tbmkword(0, 0);
	}
	MR_np_call_localret_ent(string__from_char_list_2_0,
		getopt_io__handle_short_options_12_0_i45);
MR_def_label(getopt_io__handle_short_options_12_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(10);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(9);
	MR_r5 = MR_sv(7);
	MR_r6 = MR_sv(2);
	MR_r7 = MR_sv(5);
	MR_r8 = MR_sv(6);
	}
	MR_np_call_localret_ent(getopt_io__process_option_11_0,
		getopt_io__handle_short_options_12_0_i46);
MR_def_label(getopt_io__handle_short_options_12_0,46)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,1)) {
		MR_GOTO_LAB(getopt_io__handle_short_options_12_0_i48);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_sv(4);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tempr2;
	MR_decr_sp_and_return(11);
	}
MR_def_label(getopt_io__handle_short_options_12_0,48)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(10);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_sv(8);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(4);
	MR_r6 = MR_tfield(0, MR_tempr1, 0);
	MR_r7 = MR_tempr2;
	MR_succip_word = MR_sv(11);
	MR_GOTO_LAB(getopt_io__handle_short_options_12_0_i100);
	}
MR_def_label(getopt_io__handle_short_options_12_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = MR_sv(7);
	MR_tfield(1, MR_r1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_np_call_localret_ent(string__to_char_list_2_1,
		getopt_io__handle_short_options_12_0_i51);
MR_def_label(getopt_io__handle_short_options_12_0,51)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("\'", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		getopt_io__handle_short_options_12_0_i52);
MR_def_label(getopt_io__handle_short_options_12_0,52)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("unknown type for option \140-", 26);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		getopt_io__handle_short_options_12_0_i58);
MR_def_label(getopt_io__handle_short_options_12_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr1 = MR_sv(3);
	MR_tempr2 = MR_sv(4);
	MR_tempr3 = MR_sv(6);
	MR_tempr4 = MR_sv(7);
	MR_r1 = MR_tempr4;
	}
	MR_np_call_localret_ent(string__char_to_string_2_0,
		getopt_io__handle_short_options_12_0_i56);
MR_def_label(getopt_io__handle_short_options_12_0,56)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("\'", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		getopt_io__handle_short_options_12_0_i57);
MR_def_label(getopt_io__handle_short_options_12_0,57)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("unrecognized option \140-", 22);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		getopt_io__handle_short_options_12_0_i58);
MR_def_label(getopt_io__handle_short_options_12_0,58)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r3, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r3, 0) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(4);
	MR_r4 = MR_sv(6);
	MR_decr_sp_and_return(11);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(string__to_int_2_0);
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_string_0;
MR_decl_entry(list__append_3_1);
MR_decl_entry(io__see_4_0);
MR_decl_entry(io__read_file_as_string_3_0);
MR_decl_entry(io__error_message_2_0);
MR_decl_entry(io__seen_2_0);
MR_decl_entry(fn__string__words_1_0);

MR_BEGIN_MODULE(getopt_io_module7)
	MR_init_entry1(getopt_io__process_option_11_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__getopt_io__process_option_11_0);
	MR_init_label10(getopt_io__process_option_11_0,135,267,14,18,16,21,268,59,64,62)
	MR_init_label10(getopt_io__process_option_11_0,269,4,8,6,271,24,26,31,34,37)
	MR_init_label10(getopt_io__process_option_11_0,40,41,42,43,39,45,46,48,49,51)
	MR_init_label10(getopt_io__process_option_11_0,36,52,53,54,55,33,272,73,78,76)
	MR_init_label10(getopt_io__process_option_11_0,82,75,85,86,91,89,97,88,100,101)
	MR_init_label10(getopt_io__process_option_11_0,108,110,270,115,117,120,121,125,123,273)
	MR_init_label2(getopt_io__process_option_11_0,129,131)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'process_option'/11 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(getopt_io__process_option_11_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r2),
		MR_LABEL_AP(getopt_io__process_option_11_0_i135) MR_AND
		MR_LABEL_AP(getopt_io__process_option_11_0_i267) MR_AND
		MR_LABEL_AP(getopt_io__process_option_11_0_i268) MR_AND
		MR_LABEL_AP(getopt_io__process_option_11_0_i269));
MR_def_label(getopt_io__process_option_11_0,135)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_unmkbody(MR_r2),
		MR_LABEL_AP(getopt_io__process_option_11_0_i270) MR_AND
		MR_LABEL_AP(getopt_io__process_option_11_0_i271) MR_AND
		MR_LABEL_AP(getopt_io__process_option_11_0_i272) MR_AND
		MR_LABEL_AP(getopt_io__process_option_11_0_i273) MR_AND
		MR_LABEL_AP(getopt_io__process_option_11_0_i108) MR_AND
		MR_LABEL_AP(getopt_io__process_option_11_0_i31));
MR_def_label(getopt_io__process_option_11_0,267)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_sv(2) = MR_tempr1;
	MR_sv(3) = MR_r5;
	MR_sv(5) = MR_r7;
	MR_sv(7) = MR_r1;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_r8;
	}
	MR_np_call_localret_ent(svset__insert_3_0,
		getopt_io__process_option_11_0_i14);
MR_def_label(getopt_io__process_option_11_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(3),0,0)) {
		MR_GOTO_LAB(getopt_io__process_option_11_0_i16);
	}
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(getopt_io, option_data);
	MR_r3 = MR_sv(5);
	MR_r4 = MR_sv(2);
	MR_r5 = (MR_Word) MR_TAG_COMMON(1,8,1);
	MR_np_call_localret_ent(map__set_4_0,
		getopt_io__process_option_11_0_i18);
MR_def_label(getopt_io__process_option_11_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(3);
	MR_decr_sp_and_return(8);
	}
MR_def_label(getopt_io__process_option_11_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(getopt_io, option_data);
	MR_r3 = MR_sv(5);
	MR_r4 = MR_sv(2);
	MR_r5 = (MR_Word) MR_TAG_COMMON(1,8,0);
	MR_np_call_localret_ent(map__set_4_0,
		getopt_io__process_option_11_0_i21);
MR_def_label(getopt_io__process_option_11_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(3);
	MR_decr_sp_and_return(8);
	}
MR_def_label(getopt_io__process_option_11_0,268)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r3;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_sv(2) = MR_tempr1;
	MR_sv(3) = MR_r5;
	MR_sv(5) = MR_r7;
	MR_sv(7) = MR_r1;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_r8;
	}
	MR_np_call_localret_ent(svset__insert_3_0,
		getopt_io__process_option_11_0_i59);
MR_def_label(getopt_io__process_option_11_0,59)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_sv(3),0,0)) {
		MR_GOTO_LAB(getopt_io__process_option_11_0_i88);
	}
	MR_r2 = MR_tfield(1, MR_sv(3), 0);
	MR_sv(3) = MR_r1;
	MR_sv(4) = MR_r2;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(string__to_int_2_0,
		getopt_io__process_option_11_0_i64);
MR_def_label(getopt_io__process_option_11_0,64)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(getopt_io__process_option_11_0_i62);
	}
	MR_tag_alloc_heap(MR_r5, 2, (MR_Integer) 1);
	MR_tfield(2, MR_r5, 0) = MR_r2;
	MR_r1 = MR_sv(7);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(getopt_io, option_data);
	MR_r3 = MR_sv(5);
	MR_r4 = MR_sv(2);
	MR_np_call_localret_ent(map__set_4_0,
		getopt_io__process_option_11_0_i125);
MR_def_label(getopt_io__process_option_11_0,62)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(4);
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(f_103_101_116_111_112_116_95_105_111_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_110_117_109_101_114_105_99_95_97_114_103_117_109_101_110_116_95_95_91_49_93_95_48_3_0,
		getopt_io__process_option_11_0_i97);
MR_def_label(getopt_io__process_option_11_0,269)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	if (MR_INT_EQ(MR_tfield(3, MR_r2, 0),0)) {
		MR_GOTO_LAB(getopt_io__process_option_11_0_i120);
	}
	if (MR_INT_EQ(MR_tfield(3, MR_r2, 0),1)) {
		MR_GOTO_LAB(getopt_io__process_option_11_0_i85);
	}
	if (MR_INT_EQ(MR_tfield(3, MR_r2, 0),2)) {
		MR_GOTO_LAB(getopt_io__process_option_11_0_i100);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_sv(2) = MR_tempr1;
	MR_sv(3) = MR_r5;
	MR_sv(5) = MR_r7;
	MR_sv(1) = MR_tfield(3, MR_r2, 1);
	MR_sv(7) = MR_r1;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_r8;
	}
	MR_np_call_localret_ent(svset__insert_3_0,
		getopt_io__process_option_11_0_i4);
MR_def_label(getopt_io__process_option_11_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_sv(3),0,0)) {
		MR_GOTO_LAB(getopt_io__process_option_11_0_i6);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_tfield(1, MR_sv(3), 0);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_sv(3) = MR_r1;
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = MR_sv(1);
	}
	MR_np_call_localret_ent(list__append_3_1,
		getopt_io__process_option_11_0_i8);
MR_def_label(getopt_io__process_option_11_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_r5 = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 3;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(getopt_io, option_data);
	MR_r3 = MR_sv(5);
	MR_r4 = MR_sv(2);
	}
	MR_np_call_localret_ent(map__set_4_0,
		getopt_io__process_option_11_0_i125);
MR_def_label(getopt_io__process_option_11_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("acumulating argument expected in getopt_io.process_option", 57);
	MR_succip_word = MR_sv(8);
	MR_decr_sp(8);
	MR_np_tailcall_ent(require__error_1_0);
MR_def_label(getopt_io__process_option_11_0,271)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r3;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_sv(2) = MR_tempr1;
	MR_sv(3) = MR_r5;
	MR_sv(4) = MR_r6;
	MR_sv(5) = MR_r7;
	MR_sv(7) = MR_r1;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_r8;
	}
	MR_np_call_localret_ent(svset__insert_3_0,
		getopt_io__process_option_11_0_i24);
MR_def_label(getopt_io__process_option_11_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(3),0,0)) {
		MR_GOTO_LAB(getopt_io__process_option_11_0_i26);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = (MR_Word) MR_TAG_COMMON(1,8,1);
	MR_r5 = MR_sv(4);
	MR_r6 = MR_sv(5);
	MR_r7 = MR_tempr1;
	MR_succip_word = MR_sv(8);
	MR_decr_sp(8);
	MR_np_tailcall_ent(getopt_io__process_special_8_0);
	}
MR_def_label(getopt_io__process_option_11_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = (MR_Word) MR_TAG_COMMON(1,8,0);
	MR_r5 = MR_sv(4);
	MR_r6 = MR_sv(5);
	MR_r7 = MR_tempr1;
	MR_succip_word = MR_sv(8);
	MR_decr_sp(8);
	MR_np_tailcall_ent(getopt_io__process_special_8_0);
	}
MR_def_label(getopt_io__process_option_11_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r5,0,0)) {
		MR_GOTO_LAB(getopt_io__process_option_11_0_i33);
	}
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	MR_sv(4) = MR_r6;
	MR_sv(5) = MR_r7;
	MR_sv(1) = MR_r8;
	MR_sv(2) = MR_tfield(1, MR_r5, 0);
	MR_sv(7) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(io__see_4_0,
		getopt_io__process_option_11_0_i34);
MR_def_label(getopt_io__process_option_11_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(getopt_io__process_option_11_0_i36);
	}
	MR_np_call_localret_ent(io__read_file_as_string_3_0,
		getopt_io__process_option_11_0_i37);
MR_def_label(getopt_io__process_option_11_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,1)) {
		MR_GOTO_LAB(getopt_io__process_option_11_0_i39);
	}
	MR_r1 = MR_tfield(1, MR_r1, 1);
	MR_np_call_localret_ent(io__error_message_2_0,
		getopt_io__process_option_11_0_i40);
MR_def_label(getopt_io__process_option_11_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const(": ", 2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		getopt_io__process_option_11_0_i41);
MR_def_label(getopt_io__process_option_11_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		getopt_io__process_option_11_0_i42);
MR_def_label(getopt_io__process_option_11_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("cannot read ", 12);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		getopt_io__process_option_11_0_i43);
MR_def_label(getopt_io__process_option_11_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r2, 0) = MR_r1;
	MR_sv(3) = MR_sv(1);
	MR_sv(1) = MR_r2;
	MR_np_call_localret_ent(io__seen_2_0,
		getopt_io__process_option_11_0_i51);
MR_def_label(getopt_io__process_option_11_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(0, MR_r1, 0);
	MR_np_call_localret_ent(fn__string__words_1_0,
		getopt_io__process_option_11_0_i45);
MR_def_label(getopt_io__process_option_11_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(4);
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	MR_r5 = MR_sv(5);
	MR_r6 = MR_sv(1);
	}
	MR_np_call_localret_ent(getopt_io__process_arguments_11_0,
		getopt_io__process_option_11_0_i46);
MR_def_label(getopt_io__process_option_11_0,46)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(getopt_io__process_option_11_0_i48);
	}
	MR_sv(1) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_np_call_localret_ent(io__seen_2_0,
		getopt_io__process_option_11_0_i51);
MR_def_label(getopt_io__process_option_11_0,48)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r4;
	MR_r1 = MR_sv(2);
	MR_r2 = (MR_Word) MR_string_const(" contains non-option arguments", 30);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		getopt_io__process_option_11_0_i49);
MR_def_label(getopt_io__process_option_11_0,49)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_sv(1), 1, (MR_Integer) 1);
	MR_tfield(1, MR_sv(1), 0) = MR_r1;
	MR_np_call_localret_ent(io__seen_2_0,
		getopt_io__process_option_11_0_i51);
MR_def_label(getopt_io__process_option_11_0,51)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_decr_sp_and_return(8);
MR_def_label(getopt_io__process_option_11_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(1, MR_r1, 0);
	MR_np_call_localret_ent(io__error_message_2_0,
		getopt_io__process_option_11_0_i52);
MR_def_label(getopt_io__process_option_11_0,52)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const(": ", 2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		getopt_io__process_option_11_0_i53);
MR_def_label(getopt_io__process_option_11_0,53)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		getopt_io__process_option_11_0_i54);
MR_def_label(getopt_io__process_option_11_0,54)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("cannot open ", 12);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		getopt_io__process_option_11_0_i55);
MR_def_label(getopt_io__process_option_11_0,55)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r2, 0) = MR_r1;
	MR_r1 = MR_r2;
	MR_r2 = MR_sv(1);
	MR_decr_sp_and_return(8);
MR_def_label(getopt_io__process_option_11_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("file_special argument expected in getopt_io.process_option", 58);
	MR_np_tailcall_ent(require__error_1_0);
MR_def_label(getopt_io__process_option_11_0,272)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r3;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_sv(2) = MR_tempr1;
	MR_sv(3) = MR_r5;
	MR_sv(4) = MR_r6;
	MR_sv(5) = MR_r7;
	MR_sv(7) = MR_r1;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_r8;
	}
	MR_np_call_localret_ent(svset__insert_3_0,
		getopt_io__process_option_11_0_i73);
MR_def_label(getopt_io__process_option_11_0,73)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_sv(3),0,0)) {
		MR_GOTO_LAB(getopt_io__process_option_11_0_i75);
	}
	MR_r2 = MR_tfield(1, MR_sv(3), 0);
	MR_sv(3) = MR_r2;
	MR_sv(6) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(string__to_int_2_0,
		getopt_io__process_option_11_0_i78);
MR_def_label(getopt_io__process_option_11_0,78)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(getopt_io__process_option_11_0_i76);
	}
	MR_tag_alloc_heap(MR_r4, 2, (MR_Integer) 1);
	MR_tfield(2, MR_r4, 0) = MR_r2;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r5 = MR_sv(4);
	MR_r6 = MR_sv(5);
	MR_r7 = MR_sv(6);
	MR_succip_word = MR_sv(8);
	MR_decr_sp(8);
	MR_np_tailcall_ent(getopt_io__process_special_8_0);
MR_def_label(getopt_io__process_option_11_0,76)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(3);
	MR_r1 = MR_sv(6);
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(f_103_101_116_111_112_116_95_105_111_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_110_117_109_101_114_105_99_95_97_114_103_117_109_101_110_116_95_95_91_49_93_95_48_3_0,
		getopt_io__process_option_11_0_i82);
MR_def_label(getopt_io__process_option_11_0,82)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(6);
	MR_decr_sp_and_return(8);
MR_def_label(getopt_io__process_option_11_0,75)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("int_special argument expected in getopt_io.process_option", 57);
	MR_succip_word = MR_sv(8);
	MR_decr_sp(8);
	MR_np_tailcall_ent(require__error_1_0);
MR_def_label(getopt_io__process_option_11_0,85)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r3;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_sv(2) = MR_tempr1;
	MR_sv(3) = MR_r5;
	MR_sv(5) = MR_r7;
	MR_sv(7) = MR_r1;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_r8;
	}
	MR_np_call_localret_ent(svset__insert_3_0,
		getopt_io__process_option_11_0_i86);
MR_def_label(getopt_io__process_option_11_0,86)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_sv(3),0,0)) {
		MR_GOTO_LAB(getopt_io__process_option_11_0_i88);
	}
	MR_r2 = MR_tfield(1, MR_sv(3), 0);
	MR_sv(3) = MR_r1;
	MR_sv(4) = MR_r2;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(string__to_int_2_0,
		getopt_io__process_option_11_0_i91);
MR_def_label(getopt_io__process_option_11_0,91)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(getopt_io__process_option_11_0_i89);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_r2;
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 2);
	MR_r5 = MR_tempr2;
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr2, 1) = MR_tempr1;
	MR_r1 = MR_sv(7);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(getopt_io, option_data);
	MR_r3 = MR_sv(5);
	MR_r4 = MR_sv(2);
	}
	MR_np_call_localret_ent(map__set_4_0,
		getopt_io__process_option_11_0_i125);
MR_def_label(getopt_io__process_option_11_0,89)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(4);
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(f_103_101_116_111_112_116_95_105_111_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_110_117_109_101_114_105_99_95_97_114_103_117_109_101_110_116_95_95_91_49_93_95_48_3_0,
		getopt_io__process_option_11_0_i97);
MR_def_label(getopt_io__process_option_11_0,97)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(3);
	MR_decr_sp_and_return(8);
MR_def_label(getopt_io__process_option_11_0,88)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("integer argument expected in getopt_io.process_option", 53);
	MR_succip_word = MR_sv(8);
	MR_decr_sp(8);
	MR_np_tailcall_ent(require__error_1_0);
MR_def_label(getopt_io__process_option_11_0,100)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_sv(2) = MR_tempr1;
	MR_sv(3) = MR_r5;
	MR_sv(5) = MR_r7;
	MR_sv(7) = MR_r1;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_r8;
	}
	MR_np_call_localret_ent(svset__insert_3_0,
		getopt_io__process_option_11_0_i101);
MR_def_label(getopt_io__process_option_11_0,101)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_sv(3),0,0)) {
		MR_GOTO_LAB(getopt_io__process_option_11_0_i123);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_r5 = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 2;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(getopt_io, option_data);
	MR_r3 = MR_sv(5);
	MR_r4 = MR_sv(2);
	}
	MR_np_call_localret_ent(map__set_4_0,
		getopt_io__process_option_11_0_i125);
MR_def_label(getopt_io__process_option_11_0,108)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r5,0,0)) {
		MR_GOTO_LAB(getopt_io__process_option_11_0_i110);
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
	MR_np_tailcall_ent(getopt_io__process_special_8_0);
	}
MR_def_label(getopt_io__process_option_11_0,110)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("maybe_string_special argument expected in getopt_io.process_option", 66);
	MR_np_tailcall_ent(require__error_1_0);
MR_def_label(getopt_io__process_option_11_0,270)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r3;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_sv(2) = MR_tempr1;
	MR_sv(3) = MR_r5;
	MR_sv(4) = MR_r6;
	MR_sv(5) = MR_r7;
	MR_sv(7) = MR_r1;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_r8;
	}
	MR_np_call_localret_ent(svset__insert_3_0,
		getopt_io__process_option_11_0_i115);
MR_def_label(getopt_io__process_option_11_0,115)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(3),0,0)) {
		MR_GOTO_LAB(getopt_io__process_option_11_0_i117);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	MR_r5 = MR_sv(4);
	MR_r6 = MR_sv(5);
	MR_r7 = MR_tempr1;
	MR_succip_word = MR_sv(8);
	MR_decr_sp(8);
	MR_np_tailcall_ent(getopt_io__process_special_8_0);
	}
MR_def_label(getopt_io__process_option_11_0,117)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("no special argument expected in getopt_io.process_option", 56);
	MR_succip_word = MR_sv(8);
	MR_decr_sp(8);
	MR_np_tailcall_ent(require__error_1_0);
MR_def_label(getopt_io__process_option_11_0,120)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_sv(2) = MR_tempr1;
	MR_sv(3) = MR_r5;
	MR_sv(5) = MR_r7;
	MR_sv(7) = MR_r1;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_r8;
	}
	MR_np_call_localret_ent(svset__insert_3_0,
		getopt_io__process_option_11_0_i121);
MR_def_label(getopt_io__process_option_11_0,121)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_sv(3),0,0)) {
		MR_GOTO_LAB(getopt_io__process_option_11_0_i123);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_r5 = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr1, 1) = MR_tfield(1, MR_sv(3), 0);
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(getopt_io, option_data);
	MR_r3 = MR_sv(5);
	MR_r4 = MR_sv(2);
	}
	MR_np_call_localret_ent(map__set_4_0,
		getopt_io__process_option_11_0_i125);
MR_def_label(getopt_io__process_option_11_0,125)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 1);
	MR_tfield(0, MR_r2, 0) = MR_r1;
	MR_r1 = MR_r2;
	MR_r2 = MR_sv(3);
	MR_decr_sp_and_return(8);
MR_def_label(getopt_io__process_option_11_0,123)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("string argument expected in getopt_io.process_option", 52);
	MR_succip_word = MR_sv(8);
	MR_decr_sp(8);
	MR_np_tailcall_ent(require__error_1_0);
MR_def_label(getopt_io__process_option_11_0,273)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r3;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_sv(2) = MR_tempr1;
	MR_sv(3) = MR_r5;
	MR_sv(4) = MR_r6;
	MR_sv(5) = MR_r7;
	MR_sv(7) = MR_r1;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_r8;
	}
	MR_np_call_localret_ent(svset__insert_3_0,
		getopt_io__process_option_11_0_i129);
MR_def_label(getopt_io__process_option_11_0,129)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_sv(3),0,0)) {
		MR_GOTO_LAB(getopt_io__process_option_11_0_i131);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_r4 = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr1, 1) = MR_tfield(1, MR_sv(3), 0);
	MR_tempr2 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r5 = MR_sv(4);
	MR_r6 = MR_sv(5);
	MR_r7 = MR_tempr2;
	MR_succip_word = MR_sv(8);
	MR_decr_sp(8);
	MR_np_tailcall_ent(getopt_io__process_special_8_0);
	}
MR_def_label(getopt_io__process_option_11_0,131)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("string_special argument expected in getopt_io.process_option", 60);
	MR_succip_word = MR_sv(8);
	MR_decr_sp(8);
	MR_np_tailcall_ent(require__error_1_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(list__reverse_2_0);

MR_BEGIN_MODULE(getopt_io_module8)
	MR_init_entry1(getopt_io__process_options_7_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__getopt_io__process_options_7_0);
	MR_init_label8(getopt_io__process_options_7_0,3,6,10,11,13,15,21,22)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'process_options'/7 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__getopt_io__process_options_7_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r2),
		MR_LABEL_AP(getopt_io__process_options_7_0_i3) MR_AND
		MR_LABEL_AP(getopt_io__process_options_7_0_i6) MR_AND
		MR_LABEL_AP(getopt_io__process_options_7_0_i10) MR_AND
		MR_LABEL_AP(getopt_io__process_options_7_0_i13));
MR_def_label(getopt_io__process_options_7_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_tfield(0, MR_r2, 0);
	MR_sv(3) = MR_tfield(0, MR_r2, 1);
	MR_sv(4) = MR_r1;
	MR_r2 = MR_tfield(0, MR_r2, 2);
	MR_np_call_localret_ent(getopt_io__init_option_table_2_0,
		getopt_io__process_options_7_0_i11);
MR_def_label(getopt_io__process_options_7_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_sv(5), 1, (MR_Integer) 1);
	MR_tfield(1, MR_sv(5), 0) = MR_tfield(1, MR_r2, 3);
	MR_sv(1) = MR_r3;
	MR_sv(4) = MR_r1;
	MR_sv(2) = MR_tfield(1, MR_r2, 0);
	MR_sv(3) = MR_tfield(1, MR_r2, 1);
	MR_r2 = MR_tfield(1, MR_r2, 2);
	MR_np_call_localret_ent(getopt_io__init_option_table_2_0,
		getopt_io__process_options_7_0_i15);
MR_def_label(getopt_io__process_options_7_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r3;
	MR_sv(4) = MR_r1;
	MR_sv(2) = MR_tfield(2, MR_r2, 0);
	MR_sv(3) = MR_tfield(2, MR_r2, 1);
	MR_r2 = MR_tfield(2, MR_r2, 2);
	MR_np_call_localret_ent(getopt_io__init_option_table_multi_2_0,
		getopt_io__process_options_7_0_i11);
MR_def_label(getopt_io__process_options_7_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(3);
	MR_tfield(0, MR_tempr1, 2) = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = MR_sv(1);
	MR_r5 = MR_r1;
	MR_r6 = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_sv(4);
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	}
	MR_np_call_localret_ent(getopt_io__process_arguments_11_0,
		getopt_io__process_options_7_0_i21);
MR_def_label(getopt_io__process_options_7_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_sv(5), 1, (MR_Integer) 1);
	MR_tfield(1, MR_sv(5), 0) = MR_tfield(3, MR_r2, 3);
	MR_sv(1) = MR_r3;
	MR_sv(4) = MR_r1;
	MR_sv(2) = MR_tfield(3, MR_r2, 0);
	MR_sv(3) = MR_tfield(3, MR_r2, 1);
	MR_r2 = MR_tfield(3, MR_r2, 2);
	MR_np_call_localret_ent(getopt_io__init_option_table_multi_2_0,
		getopt_io__process_options_7_0_i15);
MR_def_label(getopt_io__process_options_7_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(3);
	MR_tfield(0, MR_tempr1, 2) = MR_sv(5);
	MR_r2 = MR_sv(1);
	MR_r5 = MR_r1;
	MR_r6 = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_sv(4);
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	}
	MR_np_call_localret_ent(getopt_io__process_arguments_11_0,
		getopt_io__process_options_7_0_i21);
MR_def_label(getopt_io__process_options_7_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r3;
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_np_call_localret_ent(list__reverse_2_0,
		getopt_io__process_options_7_0_i22);
MR_def_label(getopt_io__process_options_7_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_decr_sp_and_return(6);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(getopt_io_module9)
	MR_init_entry1(getopt_io__process_options_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__getopt_io__process_options_6_0);
	MR_init_label1(getopt_io__process_options_6_0,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'process_options'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__getopt_io__process_options_6_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(getopt_io__process_options_7_0,
		getopt_io__process_options_6_0_i2);
MR_def_label(getopt_io__process_options_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_r2 = MR_r3;
	MR_decr_sp_and_return(1);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(getopt_io_module10)
	MR_init_entry1(getopt_io__process_options_track_9_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__getopt_io__process_options_track_9_0);
	MR_init_label2(getopt_io__process_options_track_9_0,4,5)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'process_options_track'/9 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__getopt_io__process_options_track_9_0);
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
	MR_np_call_localret_ent(getopt_io__process_arguments_11_0,
		getopt_io__process_options_track_9_0_i4);
MR_def_label(getopt_io__process_options_track_9_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_np_call_localret_ent(list__reverse_2_0,
		getopt_io__process_options_track_9_0_i5);
MR_def_label(getopt_io__process_options_track_9_0,5)
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

MR_BEGIN_MODULE(getopt_io_module11)
	MR_init_entry1(getopt_io__lookup_bool_option_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__getopt_io__lookup_bool_option_3_0);
	MR_init_label2(getopt_io__lookup_bool_option_3_0,3,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'lookup_bool_option'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__getopt_io__lookup_bool_option_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r2;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(getopt_io, option_data);
	MR_tempr2 = MR_r3;
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tempr2;
	}
	MR_np_call_localret_ent(map__lookup_3_0,
		getopt_io__lookup_bool_option_3_0_i3);
MR_def_label(getopt_io__lookup_bool_option_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,1)) {
		MR_GOTO_LAB(getopt_io__lookup_bool_option_3_0_i2);
	}
	MR_r1 = MR_tfield(1, MR_r1, 0);
	MR_decr_sp_and_return(1);
MR_def_label(getopt_io__lookup_bool_option_3_0,2)
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


MR_BEGIN_MODULE(getopt_io_module12)
	MR_init_entry1(fn__getopt_io__lookup_bool_option_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__getopt_io__lookup_bool_option_2_0);
	MR_init_label2(fn__getopt_io__lookup_bool_option_2_0,3,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'lookup_bool_option'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__getopt_io__lookup_bool_option_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r2;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(getopt_io, option_data);
	MR_tempr2 = MR_r3;
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tempr2;
	}
	MR_np_call_localret_ent(map__lookup_3_0,
		fn__getopt_io__lookup_bool_option_2_0_i3);
MR_def_label(fn__getopt_io__lookup_bool_option_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,1)) {
		MR_GOTO_LAB(fn__getopt_io__lookup_bool_option_2_0_i2);
	}
	MR_r1 = MR_tfield(1, MR_r1, 0);
	MR_decr_sp_and_return(1);
MR_def_label(fn__getopt_io__lookup_bool_option_2_0,2)
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


MR_BEGIN_MODULE(getopt_io_module13)
	MR_init_entry1(getopt_io__lookup_int_option_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__getopt_io__lookup_int_option_3_0);
	MR_init_label2(getopt_io__lookup_int_option_3_0,3,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'lookup_int_option'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__getopt_io__lookup_int_option_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r2;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(getopt_io, option_data);
	MR_tempr2 = MR_r3;
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tempr2;
	}
	MR_np_call_localret_ent(map__lookup_3_0,
		getopt_io__lookup_int_option_3_0_i3);
MR_def_label(getopt_io__lookup_int_option_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,2)) {
		MR_GOTO_LAB(getopt_io__lookup_int_option_3_0_i2);
	}
	MR_r1 = MR_tfield(2, MR_r1, 0);
	MR_decr_sp_and_return(1);
MR_def_label(getopt_io__lookup_int_option_3_0,2)
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


MR_BEGIN_MODULE(getopt_io_module14)
	MR_init_entry1(fn__getopt_io__lookup_int_option_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__getopt_io__lookup_int_option_2_0);
	MR_init_label2(fn__getopt_io__lookup_int_option_2_0,3,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'lookup_int_option'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__getopt_io__lookup_int_option_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r2;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(getopt_io, option_data);
	MR_tempr2 = MR_r3;
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tempr2;
	}
	MR_np_call_localret_ent(map__lookup_3_0,
		fn__getopt_io__lookup_int_option_2_0_i3);
MR_def_label(fn__getopt_io__lookup_int_option_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,2)) {
		MR_GOTO_LAB(fn__getopt_io__lookup_int_option_2_0_i2);
	}
	MR_r1 = MR_tfield(2, MR_r1, 0);
	MR_decr_sp_and_return(1);
MR_def_label(fn__getopt_io__lookup_int_option_2_0,2)
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


MR_BEGIN_MODULE(getopt_io_module15)
	MR_init_entry1(getopt_io__lookup_string_option_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__getopt_io__lookup_string_option_3_0);
	MR_init_label2(getopt_io__lookup_string_option_3_0,3,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'lookup_string_option'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__getopt_io__lookup_string_option_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r2;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(getopt_io, option_data);
	MR_tempr2 = MR_r3;
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tempr2;
	}
	MR_np_call_localret_ent(map__lookup_3_0,
		getopt_io__lookup_string_option_3_0_i3);
MR_def_label(getopt_io__lookup_string_option_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,0)) {
		MR_GOTO_LAB(getopt_io__lookup_string_option_3_0_i2);
	}
	MR_r1 = MR_tfield(3, MR_r1, 1);
	MR_decr_sp_and_return(1);
MR_def_label(getopt_io__lookup_string_option_3_0,2)
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


MR_BEGIN_MODULE(getopt_io_module16)
	MR_init_entry1(fn__getopt_io__lookup_string_option_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__getopt_io__lookup_string_option_2_0);
	MR_init_label2(fn__getopt_io__lookup_string_option_2_0,3,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'lookup_string_option'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__getopt_io__lookup_string_option_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r2;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(getopt_io, option_data);
	MR_tempr2 = MR_r3;
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tempr2;
	}
	MR_np_call_localret_ent(map__lookup_3_0,
		fn__getopt_io__lookup_string_option_2_0_i3);
MR_def_label(fn__getopt_io__lookup_string_option_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,0)) {
		MR_GOTO_LAB(fn__getopt_io__lookup_string_option_2_0_i2);
	}
	MR_r1 = MR_tfield(3, MR_r1, 1);
	MR_decr_sp_and_return(1);
MR_def_label(fn__getopt_io__lookup_string_option_2_0,2)
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


MR_BEGIN_MODULE(getopt_io_module17)
	MR_init_entry1(getopt_io__lookup_maybe_int_option_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__getopt_io__lookup_maybe_int_option_3_0);
	MR_init_label2(getopt_io__lookup_maybe_int_option_3_0,3,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'lookup_maybe_int_option'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__getopt_io__lookup_maybe_int_option_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r2;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(getopt_io, option_data);
	MR_tempr2 = MR_r3;
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tempr2;
	}
	MR_np_call_localret_ent(map__lookup_3_0,
		getopt_io__lookup_maybe_int_option_3_0_i3);
MR_def_label(getopt_io__lookup_maybe_int_option_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,1)) {
		MR_GOTO_LAB(getopt_io__lookup_maybe_int_option_3_0_i2);
	}
	MR_r1 = MR_tfield(3, MR_r1, 1);
	MR_decr_sp_and_return(1);
MR_def_label(getopt_io__lookup_maybe_int_option_3_0,2)
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


MR_BEGIN_MODULE(getopt_io_module18)
	MR_init_entry1(fn__getopt_io__lookup_maybe_int_option_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__getopt_io__lookup_maybe_int_option_2_0);
	MR_init_label2(fn__getopt_io__lookup_maybe_int_option_2_0,3,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'lookup_maybe_int_option'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__getopt_io__lookup_maybe_int_option_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r2;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(getopt_io, option_data);
	MR_tempr2 = MR_r3;
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tempr2;
	}
	MR_np_call_localret_ent(map__lookup_3_0,
		fn__getopt_io__lookup_maybe_int_option_2_0_i3);
MR_def_label(fn__getopt_io__lookup_maybe_int_option_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,1)) {
		MR_GOTO_LAB(fn__getopt_io__lookup_maybe_int_option_2_0_i2);
	}
	MR_r1 = MR_tfield(3, MR_r1, 1);
	MR_decr_sp_and_return(1);
MR_def_label(fn__getopt_io__lookup_maybe_int_option_2_0,2)
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


MR_BEGIN_MODULE(getopt_io_module19)
	MR_init_entry1(getopt_io__lookup_maybe_string_option_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__getopt_io__lookup_maybe_string_option_3_0);
	MR_init_label2(getopt_io__lookup_maybe_string_option_3_0,3,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'lookup_maybe_string_option'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__getopt_io__lookup_maybe_string_option_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r2;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(getopt_io, option_data);
	MR_tempr2 = MR_r3;
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tempr2;
	}
	MR_np_call_localret_ent(map__lookup_3_0,
		getopt_io__lookup_maybe_string_option_3_0_i3);
MR_def_label(getopt_io__lookup_maybe_string_option_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,2)) {
		MR_GOTO_LAB(getopt_io__lookup_maybe_string_option_3_0_i2);
	}
	MR_r1 = MR_tfield(3, MR_r1, 1);
	MR_decr_sp_and_return(1);
MR_def_label(getopt_io__lookup_maybe_string_option_3_0,2)
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


MR_BEGIN_MODULE(getopt_io_module20)
	MR_init_entry1(fn__getopt_io__lookup_maybe_string_option_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__getopt_io__lookup_maybe_string_option_2_0);
	MR_init_label2(fn__getopt_io__lookup_maybe_string_option_2_0,3,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'lookup_maybe_string_option'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__getopt_io__lookup_maybe_string_option_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r2;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(getopt_io, option_data);
	MR_tempr2 = MR_r3;
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tempr2;
	}
	MR_np_call_localret_ent(map__lookup_3_0,
		fn__getopt_io__lookup_maybe_string_option_2_0_i3);
MR_def_label(fn__getopt_io__lookup_maybe_string_option_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,2)) {
		MR_GOTO_LAB(fn__getopt_io__lookup_maybe_string_option_2_0_i2);
	}
	MR_r1 = MR_tfield(3, MR_r1, 1);
	MR_decr_sp_and_return(1);
MR_def_label(fn__getopt_io__lookup_maybe_string_option_2_0,2)
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


MR_BEGIN_MODULE(getopt_io_module21)
	MR_init_entry1(getopt_io__lookup_accumulating_option_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__getopt_io__lookup_accumulating_option_3_0);
	MR_init_label2(getopt_io__lookup_accumulating_option_3_0,3,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'lookup_accumulating_option'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__getopt_io__lookup_accumulating_option_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r2;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(getopt_io, option_data);
	MR_tempr2 = MR_r3;
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tempr2;
	}
	MR_np_call_localret_ent(map__lookup_3_0,
		getopt_io__lookup_accumulating_option_3_0_i3);
MR_def_label(getopt_io__lookup_accumulating_option_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,3)) {
		MR_GOTO_LAB(getopt_io__lookup_accumulating_option_3_0_i2);
	}
	MR_r1 = MR_tfield(3, MR_r1, 1);
	MR_decr_sp_and_return(1);
MR_def_label(getopt_io__lookup_accumulating_option_3_0,2)
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


MR_BEGIN_MODULE(getopt_io_module22)
	MR_init_entry1(fn__getopt_io__lookup_accumulating_option_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__getopt_io__lookup_accumulating_option_2_0);
	MR_init_label2(fn__getopt_io__lookup_accumulating_option_2_0,3,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'lookup_accumulating_option'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__getopt_io__lookup_accumulating_option_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r2;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(getopt_io, option_data);
	MR_tempr2 = MR_r3;
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tempr2;
	}
	MR_np_call_localret_ent(map__lookup_3_0,
		fn__getopt_io__lookup_accumulating_option_2_0_i3);
MR_def_label(fn__getopt_io__lookup_accumulating_option_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,3)) {
		MR_GOTO_LAB(fn__getopt_io__lookup_accumulating_option_2_0_i2);
	}
	MR_r1 = MR_tfield(3, MR_r1, 1);
	MR_decr_sp_and_return(1);
MR_def_label(fn__getopt_io__lookup_accumulating_option_2_0,2)
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

MR_BEGIN_MODULE(getopt_io_module23)
	MR_init_entry1(__Unify___getopt_io__maybe_option_table_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___getopt_io__maybe_option_table_1_0);
	MR_init_label3(__Unify___getopt_io__maybe_option_table_1_0,14,5,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___getopt_io__maybe_option_table_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r2 == MR_r3)) {
		MR_GOTO_LAB(__Unify___getopt_io__maybe_option_table_1_0_i14);
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
		MR_GOTO_LAB(__Unify___getopt_io__maybe_option_table_1_0_i5);
	}
	if (MR_PTAG_TESTR(MR_tempr2,1)) {
		MR_GOTO_LAB(__Unify___getopt_io__maybe_option_table_1_0_i1);
	}
	MR_r1 = MR_tfield(1, MR_tempr1, 0);
	MR_r2 = MR_tfield(1, MR_tempr2, 0);
	MR_r1 = (strcmp((char *) (MR_Word *) MR_r1, (char *) (MR_Word *) MR_r2) == 0);
	MR_decr_sp(4);
	MR_proceed();
	}
MR_def_label(__Unify___getopt_io__maybe_option_table_1_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___getopt_io__maybe_option_table_1_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),0)) {
		MR_GOTO_LAB(__Unify___getopt_io__maybe_option_table_1_0_i1);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(getopt_io, option_data);
	MR_r3 = MR_tfield(0, MR_sv(1), 0);
	MR_r4 = MR_tfield(0, MR_sv(2), 0);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(__Unify___tree234__tree234_2_0);
MR_def_label(__Unify___getopt_io__maybe_option_table_1_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(4);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Compare___tree234__tree234_2_0);

MR_BEGIN_MODULE(getopt_io_module24)
	MR_init_entry1(__Compare___getopt_io__maybe_option_table_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___getopt_io__maybe_option_table_1_0);
	MR_init_label5(__Compare___getopt_io__maybe_option_table_1_0,8,27,7,5,14)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___getopt_io__maybe_option_table_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	if ((MR_r2 == MR_r3)) {
		MR_GOTO_LAB(__Compare___getopt_io__maybe_option_table_1_0_i27);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_r2;
	MR_sv(1) = MR_tempr1;
	MR_tempr2 = MR_r3;
	MR_sv(2) = MR_tempr2;
	MR_sv(3) = MR_r1;
	if (MR_PTAG_TESTR(MR_tempr1,1)) {
		MR_GOTO_LAB(__Compare___getopt_io__maybe_option_table_1_0_i5);
	}
	if (MR_PTAG_TESTR(MR_tempr2,1)) {
		MR_GOTO_LAB(__Compare___getopt_io__maybe_option_table_1_0_i7);
	}
	MR_r2 = MR_tfield(1, MR_tempr1, 0);
	MR_tempr3 = MR_tfield(1, MR_tempr2, 0);
	{
	MR_Integer	Res;
	MR_String	S1;
	MR_String	S2;
#define	MR_PROC_LABEL	mercury____Compare___getopt_io__maybe_option_table_1_0
	S1 = (MR_String) MR_r2;
	S2 = (MR_String) MR_tempr3;
{
#line 139 "private_builtin.opt"

    Res = strcmp(S1, S2);
;}
#line 4794 "getopt_io.c"
	MR_r2 = Res;
#undef	MR_PROC_LABEL
	}
	if (MR_INT_GE(MR_r2,0)) {
		MR_GOTO_LAB(__Compare___getopt_io__maybe_option_table_1_0_i8);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(4);
	}
MR_def_label(__Compare___getopt_io__maybe_option_table_1_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r2,0)) {
		MR_GOTO_LAB(__Compare___getopt_io__maybe_option_table_1_0_i7);
	}
MR_def_label(__Compare___getopt_io__maybe_option_table_1_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(4);
MR_def_label(__Compare___getopt_io__maybe_option_table_1_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(4);
MR_def_label(__Compare___getopt_io__maybe_option_table_1_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Compare___getopt_io__maybe_option_table_1_0_i14);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(4);
MR_def_label(__Compare___getopt_io__maybe_option_table_1_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(getopt_io, option_data);
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

MR_BEGIN_MODULE(getopt_io_module25)
	MR_init_entry1(__Unify___getopt_io__option_data_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___getopt_io__option_data_0_0);
	MR_init_label9(__Unify___getopt_io__option_data_0_0,9,13,32,16,20,26,28,33,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___getopt_io__option_data_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___getopt_io__option_data_0_0_i33);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_sv(1)),
		MR_LABEL_AP(__Unify___getopt_io__option_data_0_0_i28) MR_AND
		MR_LABEL_AP(__Unify___getopt_io__option_data_0_0_i9) MR_AND
		MR_LABEL_AP(__Unify___getopt_io__option_data_0_0_i13) MR_AND
		MR_LABEL_AP(__Unify___getopt_io__option_data_0_0_i32));
MR_def_label(__Unify___getopt_io__option_data_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Unify___getopt_io__option_data_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(1, MR_sv(1), 0);
	MR_tempr2 = MR_tfield(1, MR_sv(2), 0);
	MR_r1 = (MR_tempr1 == MR_tempr2);
	MR_decr_sp_and_return(3);
	}
MR_def_label(__Unify___getopt_io__option_data_0_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),2)) {
		MR_GOTO_LAB(__Unify___getopt_io__option_data_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(2, MR_sv(1), 0);
	MR_tempr2 = MR_tfield(2, MR_sv(2), 0);
	MR_r1 = (MR_tempr1 == MR_tempr2);
	MR_decr_sp_and_return(3);
	}
MR_def_label(__Unify___getopt_io__option_data_0_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_EQ(MR_tfield(3, MR_sv(1), 0),0)) {
		MR_GOTO_LAB(__Unify___getopt_io__option_data_0_0_i26);
	}
	if (MR_INT_EQ(MR_tfield(3, MR_sv(1), 0),1)) {
		MR_GOTO_LAB(__Unify___getopt_io__option_data_0_0_i16);
	}
	if (MR_INT_EQ(MR_tfield(3, MR_sv(1), 0),2)) {
		MR_GOTO_LAB(__Unify___getopt_io__option_data_0_0_i20);
	}
	if (MR_RTAGS_TESTR(MR_sv(2),3,3)) {
		MR_GOTO_LAB(__Unify___getopt_io__option_data_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = MR_tfield(3, MR_sv(1), 1);
	MR_r3 = MR_tfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Unify___list__list_1_0);
MR_def_label(__Unify___getopt_io__option_data_0_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,1)) {
		MR_GOTO_LAB(__Unify___getopt_io__option_data_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = MR_tfield(3, MR_sv(1), 1);
	MR_r3 = MR_tfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Unify___maybe__maybe_1_0);
MR_def_label(__Unify___getopt_io__option_data_0_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,2)) {
		MR_GOTO_LAB(__Unify___getopt_io__option_data_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = MR_tfield(3, MR_sv(1), 1);
	MR_r3 = MR_tfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Unify___maybe__maybe_1_0);
MR_def_label(__Unify___getopt_io__option_data_0_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,0)) {
		MR_GOTO_LAB(__Unify___getopt_io__option_data_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(3, MR_sv(1), 1);
	MR_tempr2 = MR_tfield(3, MR_sv(2), 1);
	MR_r1 = (strcmp((char *) (MR_Word *) MR_tempr1, (char *) (MR_Word *) MR_tempr2) == 0);
	MR_decr_sp_and_return(3);
	}
MR_def_label(__Unify___getopt_io__option_data_0_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_sv(2) == MR_sv(1));
	MR_decr_sp_and_return(3);
MR_def_label(__Unify___getopt_io__option_data_0_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___getopt_io__option_data_0_0,1)
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

MR_BEGIN_MODULE(getopt_io_module26)
	MR_init_entry1(__Compare___getopt_io__option_data_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___getopt_io__option_data_0_0);
	MR_init_label10(__Compare___getopt_io__option_data_0_0,237,24,42,27,28,45,82,100,88,89)
	MR_init_label10(__Compare___getopt_io__option_data_0_0,103,240,20,23,46,60,63,64,78,81)
	MR_init_label10(__Compare___getopt_io__option_data_0_0,104,118,121,122,137,140,130,141,156,159)
	MR_init_label10(__Compare___getopt_io__option_data_0_0,150,160,174,177,472,178,192,196,215,218)
	MR_init_label5(__Compare___getopt_io__option_data_0_0,208,283,209,284,219)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___getopt_io__option_data_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___getopt_io__option_data_0_0_i284);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_sv(1)),
		MR_LABEL_AP(__Compare___getopt_io__option_data_0_0_i237) MR_AND
		MR_LABEL_AP(__Compare___getopt_io__option_data_0_0_i24) MR_AND
		MR_LABEL_AP(__Compare___getopt_io__option_data_0_0_i82) MR_AND
		MR_LABEL_AP(__Compare___getopt_io__option_data_0_0_i240));
MR_def_label(__Compare___getopt_io__option_data_0_0,237)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_unmkbody(MR_sv(1)),
		MR_LABEL_AP(__Compare___getopt_io__option_data_0_0_i178) MR_AND
		MR_LABEL_AP(__Compare___getopt_io__option_data_0_0_i46) MR_AND
		MR_LABEL_AP(__Compare___getopt_io__option_data_0_0_i104) MR_AND
		MR_LABEL_AP(__Compare___getopt_io__option_data_0_0_i219) MR_AND
		MR_LABEL_AP(__Compare___getopt_io__option_data_0_0_i160) MR_AND
		MR_LABEL_AP(__Compare___getopt_io__option_data_0_0_i64));
MR_def_label(__Compare___getopt_io__option_data_0_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_sv(2)),
		MR_LABEL_AP(__Compare___getopt_io__option_data_0_0_i42) MR_AND
		MR_LABEL_AP(__Compare___getopt_io__option_data_0_0_i27) MR_AND
		MR_LABEL_AP(__Compare___getopt_io__option_data_0_0_i283) MR_AND
		MR_LABEL_AP(__Compare___getopt_io__option_data_0_0_i45));
MR_def_label(__Compare___getopt_io__option_data_0_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_EQ(MR_unmkbody(MR_sv(2)),3)) {
		MR_GOTO_LAB(__Compare___getopt_io__option_data_0_0_i283);
	}
	MR_GOTO_LAB(__Compare___getopt_io__option_data_0_0_i283);
MR_def_label(__Compare___getopt_io__option_data_0_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_tfield(1, MR_sv(2), 0);
	MR_r5 = MR_tfield(1, MR_sv(1), 0);
	if (((MR_Integer) MR_r5 >= (MR_Integer) MR_r4)) {
		MR_GOTO_LAB(__Compare___getopt_io__option_data_0_0_i28);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___getopt_io__option_data_0_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r5 != MR_r4)) {
		MR_GOTO_LAB(__Compare___getopt_io__option_data_0_0_i472);
	}
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___getopt_io__option_data_0_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_EQ(MR_tfield(3, MR_sv(2), 0),0)) {
		MR_GOTO_LAB(__Compare___getopt_io__option_data_0_0_i283);
	}
	if (MR_INT_EQ(MR_tfield(3, MR_sv(2), 0),1)) {
		MR_GOTO_LAB(__Compare___getopt_io__option_data_0_0_i283);
	}
	if (MR_INT_EQ(MR_tfield(3, MR_sv(2), 0),2)) {
		MR_GOTO_LAB(__Compare___getopt_io__option_data_0_0_i283);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___getopt_io__option_data_0_0,82)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_sv(2)),
		MR_LABEL_AP(__Compare___getopt_io__option_data_0_0_i100) MR_AND
		MR_LABEL_AP(__Compare___getopt_io__option_data_0_0_i472) MR_AND
		MR_LABEL_AP(__Compare___getopt_io__option_data_0_0_i88) MR_AND
		MR_LABEL_AP(__Compare___getopt_io__option_data_0_0_i103));
MR_def_label(__Compare___getopt_io__option_data_0_0,100)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_EQ(MR_unmkbody(MR_sv(2)),3)) {
		MR_GOTO_LAB(__Compare___getopt_io__option_data_0_0_i283);
	}
	MR_GOTO_LAB(__Compare___getopt_io__option_data_0_0_i283);
MR_def_label(__Compare___getopt_io__option_data_0_0,88)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_tfield(2, MR_sv(1), 0);
	MR_r5 = MR_tfield(2, MR_sv(2), 0);
	if (((MR_Integer) MR_r4 >= (MR_Integer) MR_r5)) {
		MR_GOTO_LAB(__Compare___getopt_io__option_data_0_0_i89);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___getopt_io__option_data_0_0,89)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r4 != MR_r5)) {
		MR_GOTO_LAB(__Compare___getopt_io__option_data_0_0_i472);
	}
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___getopt_io__option_data_0_0,103)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_EQ(MR_tfield(3, MR_sv(2), 0),0)) {
		MR_GOTO_LAB(__Compare___getopt_io__option_data_0_0_i283);
	}
	if (MR_INT_EQ(MR_tfield(3, MR_sv(2), 0),1)) {
		MR_GOTO_LAB(__Compare___getopt_io__option_data_0_0_i283);
	}
	if (MR_INT_EQ(MR_tfield(3, MR_sv(2), 0),2)) {
		MR_GOTO_LAB(__Compare___getopt_io__option_data_0_0_i283);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___getopt_io__option_data_0_0,240)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_EQ(MR_tfield(3, MR_sv(1), 0),0)) {
		MR_GOTO_LAB(__Compare___getopt_io__option_data_0_0_i196);
	}
	if (MR_INT_EQ(MR_tfield(3, MR_sv(1), 0),1)) {
		MR_GOTO_LAB(__Compare___getopt_io__option_data_0_0_i122);
	}
	if (MR_INT_EQ(MR_tfield(3, MR_sv(1), 0),2)) {
		MR_GOTO_LAB(__Compare___getopt_io__option_data_0_0_i141);
	}
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_sv(2)),
		MR_LABEL_AP(__Compare___getopt_io__option_data_0_0_i20) MR_AND
		MR_LABEL_AP(__Compare___getopt_io__option_data_0_0_i472) MR_AND
		MR_LABEL_AP(__Compare___getopt_io__option_data_0_0_i472) MR_AND
		MR_LABEL_AP(__Compare___getopt_io__option_data_0_0_i23));
MR_def_label(__Compare___getopt_io__option_data_0_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_EQ(MR_unmkbody(MR_sv(2)),3)) {
		MR_GOTO_LAB(__Compare___getopt_io__option_data_0_0_i283);
	}
	MR_GOTO_LAB(__Compare___getopt_io__option_data_0_0_i283);
MR_def_label(__Compare___getopt_io__option_data_0_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_EQ(MR_tfield(3, MR_sv(2), 0),0)) {
		MR_GOTO_LAB(__Compare___getopt_io__option_data_0_0_i472);
	}
	if (MR_INT_EQ(MR_tfield(3, MR_sv(2), 0),1)) {
		MR_GOTO_LAB(__Compare___getopt_io__option_data_0_0_i472);
	}
	if (MR_INT_EQ(MR_tfield(3, MR_sv(2), 0),2)) {
		MR_GOTO_LAB(__Compare___getopt_io__option_data_0_0_i472);
	}
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = MR_tfield(3, MR_sv(1), 1);
	MR_r3 = MR_tfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Compare___list__list_1_0);
MR_def_label(__Compare___getopt_io__option_data_0_0,46)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_sv(2)),
		MR_LABEL_AP(__Compare___getopt_io__option_data_0_0_i60) MR_AND
		MR_LABEL_AP(__Compare___getopt_io__option_data_0_0_i472) MR_AND
		MR_LABEL_AP(__Compare___getopt_io__option_data_0_0_i472) MR_AND
		MR_LABEL_AP(__Compare___getopt_io__option_data_0_0_i63));
MR_def_label(__Compare___getopt_io__option_data_0_0,60)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_unmkbody(MR_sv(2)),
		MR_LABEL_AP(__Compare___getopt_io__option_data_0_0_i472) MR_AND
		MR_LABEL_AP(__Compare___getopt_io__option_data_0_0_i284) MR_AND
		MR_LABEL_AP(__Compare___getopt_io__option_data_0_0_i283) MR_AND
		MR_LABEL_AP(__Compare___getopt_io__option_data_0_0_i283) MR_AND
		MR_LABEL_AP(__Compare___getopt_io__option_data_0_0_i283) MR_AND
		MR_LABEL_AP(__Compare___getopt_io__option_data_0_0_i283));
MR_def_label(__Compare___getopt_io__option_data_0_0,63)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_EQ(MR_tfield(3, MR_sv(2), 0),0)) {
		MR_GOTO_LAB(__Compare___getopt_io__option_data_0_0_i472);
	}
	if (MR_INT_EQ(MR_tfield(3, MR_sv(2), 0),1)) {
		MR_GOTO_LAB(__Compare___getopt_io__option_data_0_0_i472);
	}
	if (MR_INT_EQ(MR_tfield(3, MR_sv(2), 0),2)) {
		MR_GOTO_LAB(__Compare___getopt_io__option_data_0_0_i472);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___getopt_io__option_data_0_0,64)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_sv(2)),
		MR_LABEL_AP(__Compare___getopt_io__option_data_0_0_i78) MR_AND
		MR_LABEL_AP(__Compare___getopt_io__option_data_0_0_i472) MR_AND
		MR_LABEL_AP(__Compare___getopt_io__option_data_0_0_i472) MR_AND
		MR_LABEL_AP(__Compare___getopt_io__option_data_0_0_i81));
MR_def_label(__Compare___getopt_io__option_data_0_0,78)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_EQ(MR_unmkbody(MR_sv(2)),5)) {
		MR_GOTO_LAB(__Compare___getopt_io__option_data_0_0_i284);
	}
	MR_GOTO_LAB(__Compare___getopt_io__option_data_0_0_i472);
MR_def_label(__Compare___getopt_io__option_data_0_0,81)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_EQ(MR_tfield(3, MR_sv(2), 0),0)) {
		MR_GOTO_LAB(__Compare___getopt_io__option_data_0_0_i472);
	}
	if (MR_INT_EQ(MR_tfield(3, MR_sv(2), 0),1)) {
		MR_GOTO_LAB(__Compare___getopt_io__option_data_0_0_i472);
	}
	if (MR_INT_EQ(MR_tfield(3, MR_sv(2), 0),2)) {
		MR_GOTO_LAB(__Compare___getopt_io__option_data_0_0_i472);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___getopt_io__option_data_0_0,104)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_sv(2)),
		MR_LABEL_AP(__Compare___getopt_io__option_data_0_0_i118) MR_AND
		MR_LABEL_AP(__Compare___getopt_io__option_data_0_0_i472) MR_AND
		MR_LABEL_AP(__Compare___getopt_io__option_data_0_0_i472) MR_AND
		MR_LABEL_AP(__Compare___getopt_io__option_data_0_0_i121));
MR_def_label(__Compare___getopt_io__option_data_0_0,118)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_unmkbody(MR_sv(2)),
		MR_LABEL_AP(__Compare___getopt_io__option_data_0_0_i472) MR_AND
		MR_LABEL_AP(__Compare___getopt_io__option_data_0_0_i472) MR_AND
		MR_LABEL_AP(__Compare___getopt_io__option_data_0_0_i284) MR_AND
		MR_LABEL_AP(__Compare___getopt_io__option_data_0_0_i283) MR_AND
		MR_LABEL_AP(__Compare___getopt_io__option_data_0_0_i283) MR_AND
		MR_LABEL_AP(__Compare___getopt_io__option_data_0_0_i283));
MR_def_label(__Compare___getopt_io__option_data_0_0,121)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_EQ(MR_tfield(3, MR_sv(2), 0),0)) {
		MR_GOTO_LAB(__Compare___getopt_io__option_data_0_0_i472);
	}
	if (MR_INT_EQ(MR_tfield(3, MR_sv(2), 0),1)) {
		MR_GOTO_LAB(__Compare___getopt_io__option_data_0_0_i472);
	}
	if (MR_INT_EQ(MR_tfield(3, MR_sv(2), 0),2)) {
		MR_GOTO_LAB(__Compare___getopt_io__option_data_0_0_i472);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___getopt_io__option_data_0_0,122)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_sv(2)),
		MR_LABEL_AP(__Compare___getopt_io__option_data_0_0_i137) MR_AND
		MR_LABEL_AP(__Compare___getopt_io__option_data_0_0_i472) MR_AND
		MR_LABEL_AP(__Compare___getopt_io__option_data_0_0_i472) MR_AND
		MR_LABEL_AP(__Compare___getopt_io__option_data_0_0_i140));
MR_def_label(__Compare___getopt_io__option_data_0_0,137)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_EQ(MR_unmkbody(MR_sv(2)),3)) {
		MR_GOTO_LAB(__Compare___getopt_io__option_data_0_0_i283);
	}
	MR_GOTO_LAB(__Compare___getopt_io__option_data_0_0_i283);
MR_def_label(__Compare___getopt_io__option_data_0_0,140)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_EQ(MR_tfield(3, MR_sv(2), 0),0)) {
		MR_GOTO_LAB(__Compare___getopt_io__option_data_0_0_i472);
	}
	if (MR_INT_EQ(MR_tfield(3, MR_sv(2), 0),1)) {
		MR_GOTO_LAB(__Compare___getopt_io__option_data_0_0_i130);
	}
	if (MR_INT_EQ(MR_tfield(3, MR_sv(2), 0),2)) {
		MR_GOTO_LAB(__Compare___getopt_io__option_data_0_0_i283);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___getopt_io__option_data_0_0,130)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = MR_tfield(3, MR_sv(1), 1);
	MR_r3 = MR_tfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Compare___maybe__maybe_1_0);
MR_def_label(__Compare___getopt_io__option_data_0_0,141)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_sv(2)),
		MR_LABEL_AP(__Compare___getopt_io__option_data_0_0_i156) MR_AND
		MR_LABEL_AP(__Compare___getopt_io__option_data_0_0_i472) MR_AND
		MR_LABEL_AP(__Compare___getopt_io__option_data_0_0_i472) MR_AND
		MR_LABEL_AP(__Compare___getopt_io__option_data_0_0_i159));
MR_def_label(__Compare___getopt_io__option_data_0_0,156)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_EQ(MR_unmkbody(MR_sv(2)),3)) {
		MR_GOTO_LAB(__Compare___getopt_io__option_data_0_0_i283);
	}
	MR_GOTO_LAB(__Compare___getopt_io__option_data_0_0_i283);
MR_def_label(__Compare___getopt_io__option_data_0_0,159)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_EQ(MR_tfield(3, MR_sv(2), 0),0)) {
		MR_GOTO_LAB(__Compare___getopt_io__option_data_0_0_i472);
	}
	if (MR_INT_EQ(MR_tfield(3, MR_sv(2), 0),1)) {
		MR_GOTO_LAB(__Compare___getopt_io__option_data_0_0_i472);
	}
	if (MR_INT_EQ(MR_tfield(3, MR_sv(2), 0),2)) {
		MR_GOTO_LAB(__Compare___getopt_io__option_data_0_0_i150);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___getopt_io__option_data_0_0,150)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = MR_tfield(3, MR_sv(1), 1);
	MR_r3 = MR_tfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Compare___maybe__maybe_1_0);
MR_def_label(__Compare___getopt_io__option_data_0_0,160)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_sv(2)),
		MR_LABEL_AP(__Compare___getopt_io__option_data_0_0_i174) MR_AND
		MR_LABEL_AP(__Compare___getopt_io__option_data_0_0_i472) MR_AND
		MR_LABEL_AP(__Compare___getopt_io__option_data_0_0_i472) MR_AND
		MR_LABEL_AP(__Compare___getopt_io__option_data_0_0_i177));
MR_def_label(__Compare___getopt_io__option_data_0_0,174)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_unmkbody(MR_sv(2)),
		MR_LABEL_AP(__Compare___getopt_io__option_data_0_0_i472) MR_AND
		MR_LABEL_AP(__Compare___getopt_io__option_data_0_0_i472) MR_AND
		MR_LABEL_AP(__Compare___getopt_io__option_data_0_0_i472) MR_AND
		MR_LABEL_AP(__Compare___getopt_io__option_data_0_0_i472) MR_AND
		MR_LABEL_AP(__Compare___getopt_io__option_data_0_0_i284) MR_AND
		MR_LABEL_AP(__Compare___getopt_io__option_data_0_0_i283));
MR_def_label(__Compare___getopt_io__option_data_0_0,177)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_EQ(MR_tfield(3, MR_sv(2), 0),0)) {
		MR_GOTO_LAB(__Compare___getopt_io__option_data_0_0_i472);
	}
	if (MR_INT_EQ(MR_tfield(3, MR_sv(2), 0),1)) {
		MR_GOTO_LAB(__Compare___getopt_io__option_data_0_0_i472);
	}
	if (MR_INT_EQ(MR_tfield(3, MR_sv(2), 0),2)) {
		MR_GOTO_LAB(__Compare___getopt_io__option_data_0_0_i472);
	}
MR_def_label(__Compare___getopt_io__option_data_0_0,472)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___getopt_io__option_data_0_0,178)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_EQ(MR_tag(MR_sv(2)),0)) {
		MR_GOTO_LAB(__Compare___getopt_io__option_data_0_0_i192);
	}
	MR_GOTO_LAB(__Compare___getopt_io__option_data_0_0_i472);
MR_def_label(__Compare___getopt_io__option_data_0_0,192)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_EQ(MR_unmkbody(MR_sv(2)),0)) {
		MR_GOTO_LAB(__Compare___getopt_io__option_data_0_0_i284);
	}
	MR_GOTO_LAB(__Compare___getopt_io__option_data_0_0_i283);
MR_def_label(__Compare___getopt_io__option_data_0_0,196)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_sv(2)),
		MR_LABEL_AP(__Compare___getopt_io__option_data_0_0_i215) MR_AND
		MR_LABEL_AP(__Compare___getopt_io__option_data_0_0_i472) MR_AND
		MR_LABEL_AP(__Compare___getopt_io__option_data_0_0_i472) MR_AND
		MR_LABEL_AP(__Compare___getopt_io__option_data_0_0_i218));
MR_def_label(__Compare___getopt_io__option_data_0_0,215)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_EQ(MR_unmkbody(MR_sv(2)),3)) {
		MR_GOTO_LAB(__Compare___getopt_io__option_data_0_0_i283);
	}
	MR_GOTO_LAB(__Compare___getopt_io__option_data_0_0_i283);
MR_def_label(__Compare___getopt_io__option_data_0_0,218)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_EQ(MR_tfield(3, MR_sv(2), 0),0)) {
		MR_GOTO_LAB(__Compare___getopt_io__option_data_0_0_i208);
	}
	if (MR_INT_EQ(MR_tfield(3, MR_sv(2), 0),1)) {
		MR_GOTO_LAB(__Compare___getopt_io__option_data_0_0_i283);
	}
	if (MR_INT_EQ(MR_tfield(3, MR_sv(2), 0),2)) {
		MR_GOTO_LAB(__Compare___getopt_io__option_data_0_0_i283);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___getopt_io__option_data_0_0,208)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_tfield(3, MR_sv(1), 1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(3, MR_sv(2), 1);
	{
	MR_Integer	Res;
	MR_String	S1;
	MR_String	S2;
#define	MR_PROC_LABEL	mercury____Compare___getopt_io__option_data_0_0
	S1 = (MR_String) MR_r4;
	S2 = (MR_String) MR_tempr1;
{
#line 139 "private_builtin.opt"

    Res = strcmp(S1, S2);
;}
#line 5369 "getopt_io.c"
	MR_r4 = Res;
#undef	MR_PROC_LABEL
	}
	if (MR_INT_GE(MR_r4,0)) {
		MR_GOTO_LAB(__Compare___getopt_io__option_data_0_0_i209);
	}
	}
MR_def_label(__Compare___getopt_io__option_data_0_0,283)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___getopt_io__option_data_0_0,209)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r4,0)) {
		MR_GOTO_LAB(__Compare___getopt_io__option_data_0_0_i472);
	}
MR_def_label(__Compare___getopt_io__option_data_0_0,284)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___getopt_io__option_data_0_0,219)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_tag(MR_sv(2)),0)) {
		MR_GOTO_LAB(__Compare___getopt_io__option_data_0_0_i472);
	}
	MR_COMPUTED_GOTO((MR_Unsigned) MR_unmkbody(MR_sv(2)),
		MR_LABEL_AP(__Compare___getopt_io__option_data_0_0_i472) MR_AND
		MR_LABEL_AP(__Compare___getopt_io__option_data_0_0_i472) MR_AND
		MR_LABEL_AP(__Compare___getopt_io__option_data_0_0_i472) MR_AND
		MR_LABEL_AP(__Compare___getopt_io__option_data_0_0_i284) MR_AND
		MR_LABEL_AP(__Compare___getopt_io__option_data_0_0_i283) MR_AND
		MR_LABEL_AP(__Compare___getopt_io__option_data_0_0_i283));
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(getopt_io_module27)
	MR_init_entry1(__Unify___getopt_io__option_ops_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___getopt_io__option_ops_1_0);
	MR_init_label10(__Unify___getopt_io__option_ops_1_0,5,7,9,13,15,17,19,23,25,27)
	MR_init_label6(__Unify___getopt_io__option_ops_1_0,31,33,35,37,45,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___getopt_io__option_ops_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r2 == MR_r3)) {
		MR_GOTO_LAB(__Unify___getopt_io__option_ops_1_0_i45);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_sv(1)),
		MR_LABEL_AP(__Unify___getopt_io__option_ops_1_0_i5) MR_AND
		MR_LABEL_AP(__Unify___getopt_io__option_ops_1_0_i13) MR_AND
		MR_LABEL_AP(__Unify___getopt_io__option_ops_1_0_i23) MR_AND
		MR_LABEL_AP(__Unify___getopt_io__option_ops_1_0_i31));
MR_def_label(__Unify___getopt_io__option_ops_1_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),0)) {
		MR_GOTO_LAB(__Unify___getopt_io__option_ops_1_0_i1);
	}
	MR_np_call_localret_ent(f_103_101_116_111_112_116_95_105_111_95_95_112_114_105_118_97_116_101_95_98_117_105_108_116_105_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_117_110_105_102_121_95_112_114_101_100_95_95_91_49_44_32_50_93_95_48_2_0,
		__Unify___getopt_io__option_ops_1_0_i7);
MR_def_label(__Unify___getopt_io__option_ops_1_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___getopt_io__option_ops_1_0_i1);
	}
	MR_np_call_localret_ent(f_103_101_116_111_112_116_95_105_111_95_95_112_114_105_118_97_116_101_95_98_117_105_108_116_105_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_117_110_105_102_121_95_112_114_101_100_95_95_91_49_44_32_50_93_95_48_2_0,
		__Unify___getopt_io__option_ops_1_0_i9);
MR_def_label(__Unify___getopt_io__option_ops_1_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___getopt_io__option_ops_1_0_i1);
	}
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(f_103_101_116_111_112_116_95_105_111_95_95_112_114_105_118_97_116_101_95_98_117_105_108_116_105_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_117_110_105_102_121_95_112_114_101_100_95_95_91_49_44_32_50_93_95_48_2_0);
MR_def_label(__Unify___getopt_io__option_ops_1_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Unify___getopt_io__option_ops_1_0_i1);
	}
	MR_np_call_localret_ent(f_103_101_116_111_112_116_95_105_111_95_95_112_114_105_118_97_116_101_95_98_117_105_108_116_105_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_117_110_105_102_121_95_112_114_101_100_95_95_91_49_44_32_50_93_95_48_2_0,
		__Unify___getopt_io__option_ops_1_0_i15);
MR_def_label(__Unify___getopt_io__option_ops_1_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___getopt_io__option_ops_1_0_i1);
	}
	MR_np_call_localret_ent(f_103_101_116_111_112_116_95_105_111_95_95_112_114_105_118_97_116_101_95_98_117_105_108_116_105_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_117_110_105_102_121_95_112_114_101_100_95_95_91_49_44_32_50_93_95_48_2_0,
		__Unify___getopt_io__option_ops_1_0_i17);
MR_def_label(__Unify___getopt_io__option_ops_1_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___getopt_io__option_ops_1_0_i1);
	}
	MR_np_call_localret_ent(f_103_101_116_111_112_116_95_105_111_95_95_112_114_105_118_97_116_101_95_98_117_105_108_116_105_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_117_110_105_102_121_95_112_114_101_100_95_95_91_49_44_32_50_93_95_48_2_0,
		__Unify___getopt_io__option_ops_1_0_i19);
MR_def_label(__Unify___getopt_io__option_ops_1_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___getopt_io__option_ops_1_0_i1);
	}
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(f_103_101_116_111_112_116_95_105_111_95_95_112_114_105_118_97_116_101_95_98_117_105_108_116_105_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_117_110_105_102_121_95_112_114_101_100_95_95_91_49_44_32_50_93_95_48_2_0);
MR_def_label(__Unify___getopt_io__option_ops_1_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),2)) {
		MR_GOTO_LAB(__Unify___getopt_io__option_ops_1_0_i1);
	}
	MR_np_call_localret_ent(f_103_101_116_111_112_116_95_105_111_95_95_112_114_105_118_97_116_101_95_98_117_105_108_116_105_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_117_110_105_102_121_95_112_114_101_100_95_95_91_49_44_32_50_93_95_48_2_0,
		__Unify___getopt_io__option_ops_1_0_i25);
MR_def_label(__Unify___getopt_io__option_ops_1_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___getopt_io__option_ops_1_0_i1);
	}
	MR_np_call_localret_ent(f_103_101_116_111_112_116_95_105_111_95_95_112_114_105_118_97_116_101_95_98_117_105_108_116_105_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_117_110_105_102_121_95_112_114_101_100_95_95_91_49_44_32_50_93_95_48_2_0,
		__Unify___getopt_io__option_ops_1_0_i27);
MR_def_label(__Unify___getopt_io__option_ops_1_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___getopt_io__option_ops_1_0_i1);
	}
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(f_103_101_116_111_112_116_95_105_111_95_95_112_114_105_118_97_116_101_95_98_117_105_108_116_105_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_117_110_105_102_121_95_112_114_101_100_95_95_91_49_44_32_50_93_95_48_2_0);
MR_def_label(__Unify___getopt_io__option_ops_1_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),3)) {
		MR_GOTO_LAB(__Unify___getopt_io__option_ops_1_0_i1);
	}
	MR_np_call_localret_ent(f_103_101_116_111_112_116_95_105_111_95_95_112_114_105_118_97_116_101_95_98_117_105_108_116_105_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_117_110_105_102_121_95_112_114_101_100_95_95_91_49_44_32_50_93_95_48_2_0,
		__Unify___getopt_io__option_ops_1_0_i33);
MR_def_label(__Unify___getopt_io__option_ops_1_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___getopt_io__option_ops_1_0_i1);
	}
	MR_np_call_localret_ent(f_103_101_116_111_112_116_95_105_111_95_95_112_114_105_118_97_116_101_95_98_117_105_108_116_105_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_117_110_105_102_121_95_112_114_101_100_95_95_91_49_44_32_50_93_95_48_2_0,
		__Unify___getopt_io__option_ops_1_0_i35);
MR_def_label(__Unify___getopt_io__option_ops_1_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___getopt_io__option_ops_1_0_i1);
	}
	MR_np_call_localret_ent(f_103_101_116_111_112_116_95_105_111_95_95_112_114_105_118_97_116_101_95_98_117_105_108_116_105_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_117_110_105_102_121_95_112_114_101_100_95_95_91_49_44_32_50_93_95_48_2_0,
		__Unify___getopt_io__option_ops_1_0_i37);
MR_def_label(__Unify___getopt_io__option_ops_1_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___getopt_io__option_ops_1_0_i1);
	}
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(f_103_101_116_111_112_116_95_105_111_95_95_112_114_105_118_97_116_101_95_98_117_105_108_116_105_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_117_110_105_102_121_95_112_114_101_100_95_95_91_49_44_32_50_93_95_48_2_0);
MR_def_label(__Unify___getopt_io__option_ops_1_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___getopt_io__option_ops_1_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(getopt_io_module28)
	MR_init_entry1(__Compare___getopt_io__option_ops_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___getopt_io__option_ops_1_0);
	MR_init_label10(__Compare___getopt_io__option_ops_1_0,3,5,9,13,26,29,31,35,39,52)
	MR_init_label10(__Compare___getopt_io__option_ops_1_0,56,58,62,68,73,77,78,80,84,88)
	MR_init_label1(__Compare___getopt_io__option_ops_1_0,184)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___getopt_io__option_ops_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r2 == MR_r3)) {
		MR_GOTO_LAB(__Compare___getopt_io__option_ops_1_0_i3);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_sv(1)),
		MR_LABEL_AP(__Compare___getopt_io__option_ops_1_0_i5) MR_AND
		MR_LABEL_AP(__Compare___getopt_io__option_ops_1_0_i26) MR_AND
		MR_LABEL_AP(__Compare___getopt_io__option_ops_1_0_i52) MR_AND
		MR_LABEL_AP(__Compare___getopt_io__option_ops_1_0_i73));
MR_def_label(__Compare___getopt_io__option_ops_1_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___getopt_io__option_ops_1_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_tag(MR_sv(2)),0)) {
		MR_GOTO_LAB(__Compare___getopt_io__option_ops_1_0_i68);
	}
	MR_np_call_localret_ent(f_103_101_116_111_112_116_95_105_111_95_95_112_114_105_118_97_116_101_95_98_117_105_108_116_105_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_99_111_109_112_97_114_101_95_112_114_101_100_95_95_91_50_44_32_51_93_95_48_3_0,
		__Compare___getopt_io__option_ops_1_0_i9);
MR_def_label(__Compare___getopt_io__option_ops_1_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___getopt_io__option_ops_1_0_i184);
	}
	MR_np_call_localret_ent(f_103_101_116_111_112_116_95_105_111_95_95_112_114_105_118_97_116_101_95_98_117_105_108_116_105_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_99_111_109_112_97_114_101_95_112_114_101_100_95_95_91_50_44_32_51_93_95_48_3_0,
		__Compare___getopt_io__option_ops_1_0_i13);
MR_def_label(__Compare___getopt_io__option_ops_1_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___getopt_io__option_ops_1_0_i184);
	}
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(f_103_101_116_111_112_116_95_105_111_95_95_112_114_105_118_97_116_101_95_98_117_105_108_116_105_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_99_111_109_112_97_114_101_95_112_114_101_100_95_95_91_50_44_32_51_93_95_48_3_0);
MR_def_label(__Compare___getopt_io__option_ops_1_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_sv(2)),
		MR_LABEL_AP(__Compare___getopt_io__option_ops_1_0_i77) MR_AND
		MR_LABEL_AP(__Compare___getopt_io__option_ops_1_0_i29) MR_AND
		MR_LABEL_AP(__Compare___getopt_io__option_ops_1_0_i68) MR_AND
		MR_LABEL_AP(__Compare___getopt_io__option_ops_1_0_i68));
MR_def_label(__Compare___getopt_io__option_ops_1_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(f_103_101_116_111_112_116_95_105_111_95_95_112_114_105_118_97_116_101_95_98_117_105_108_116_105_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_99_111_109_112_97_114_101_95_112_114_101_100_95_95_91_50_44_32_51_93_95_48_3_0,
		__Compare___getopt_io__option_ops_1_0_i31);
MR_def_label(__Compare___getopt_io__option_ops_1_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___getopt_io__option_ops_1_0_i184);
	}
	MR_np_call_localret_ent(f_103_101_116_111_112_116_95_105_111_95_95_112_114_105_118_97_116_101_95_98_117_105_108_116_105_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_99_111_109_112_97_114_101_95_112_114_101_100_95_95_91_50_44_32_51_93_95_48_3_0,
		__Compare___getopt_io__option_ops_1_0_i35);
MR_def_label(__Compare___getopt_io__option_ops_1_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___getopt_io__option_ops_1_0_i184);
	}
	MR_np_call_localret_ent(f_103_101_116_111_112_116_95_105_111_95_95_112_114_105_118_97_116_101_95_98_117_105_108_116_105_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_99_111_109_112_97_114_101_95_112_114_101_100_95_95_91_50_44_32_51_93_95_48_3_0,
		__Compare___getopt_io__option_ops_1_0_i39);
MR_def_label(__Compare___getopt_io__option_ops_1_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___getopt_io__option_ops_1_0_i184);
	}
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(f_103_101_116_111_112_116_95_105_111_95_95_112_114_105_118_97_116_101_95_98_117_105_108_116_105_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_99_111_109_112_97_114_101_95_112_114_101_100_95_95_91_50_44_32_51_93_95_48_3_0);
MR_def_label(__Compare___getopt_io__option_ops_1_0,52)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_sv(2)),
		MR_LABEL_AP(__Compare___getopt_io__option_ops_1_0_i77) MR_AND
		MR_LABEL_AP(__Compare___getopt_io__option_ops_1_0_i77) MR_AND
		MR_LABEL_AP(__Compare___getopt_io__option_ops_1_0_i56) MR_AND
		MR_LABEL_AP(__Compare___getopt_io__option_ops_1_0_i68));
MR_def_label(__Compare___getopt_io__option_ops_1_0,56)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(f_103_101_116_111_112_116_95_105_111_95_95_112_114_105_118_97_116_101_95_98_117_105_108_116_105_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_99_111_109_112_97_114_101_95_112_114_101_100_95_95_91_50_44_32_51_93_95_48_3_0,
		__Compare___getopt_io__option_ops_1_0_i58);
MR_def_label(__Compare___getopt_io__option_ops_1_0,58)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___getopt_io__option_ops_1_0_i184);
	}
	MR_np_call_localret_ent(f_103_101_116_111_112_116_95_105_111_95_95_112_114_105_118_97_116_101_95_98_117_105_108_116_105_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_99_111_109_112_97_114_101_95_112_114_101_100_95_95_91_50_44_32_51_93_95_48_3_0,
		__Compare___getopt_io__option_ops_1_0_i62);
MR_def_label(__Compare___getopt_io__option_ops_1_0,62)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___getopt_io__option_ops_1_0_i184);
	}
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(f_103_101_116_111_112_116_95_105_111_95_95_112_114_105_118_97_116_101_95_98_117_105_108_116_105_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_99_111_109_112_97_114_101_95_112_114_101_100_95_95_91_50_44_32_51_93_95_48_3_0);
MR_def_label(__Compare___getopt_io__option_ops_1_0,68)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___getopt_io__option_ops_1_0,73)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_EQ(MR_tag(MR_sv(2)),3)) {
		MR_GOTO_LAB(__Compare___getopt_io__option_ops_1_0_i78);
	}
MR_def_label(__Compare___getopt_io__option_ops_1_0,77)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___getopt_io__option_ops_1_0,78)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(f_103_101_116_111_112_116_95_105_111_95_95_112_114_105_118_97_116_101_95_98_117_105_108_116_105_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_99_111_109_112_97_114_101_95_112_114_101_100_95_95_91_50_44_32_51_93_95_48_3_0,
		__Compare___getopt_io__option_ops_1_0_i80);
MR_def_label(__Compare___getopt_io__option_ops_1_0,80)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___getopt_io__option_ops_1_0_i184);
	}
	MR_np_call_localret_ent(f_103_101_116_111_112_116_95_105_111_95_95_112_114_105_118_97_116_101_95_98_117_105_108_116_105_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_99_111_109_112_97_114_101_95_112_114_101_100_95_95_91_50_44_32_51_93_95_48_3_0,
		__Compare___getopt_io__option_ops_1_0_i84);
MR_def_label(__Compare___getopt_io__option_ops_1_0,84)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___getopt_io__option_ops_1_0_i184);
	}
	MR_np_call_localret_ent(f_103_101_116_111_112_116_95_105_111_95_95_112_114_105_118_97_116_101_95_98_117_105_108_116_105_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_99_111_109_112_97_114_101_95_112_114_101_100_95_95_91_50_44_32_51_93_95_48_3_0,
		__Compare___getopt_io__option_ops_1_0_i88);
MR_def_label(__Compare___getopt_io__option_ops_1_0,88)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___getopt_io__option_ops_1_0_i184);
	}
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(f_103_101_116_111_112_116_95_105_111_95_95_112_114_105_118_97_116_101_95_98_117_105_108_116_105_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_99_111_109_112_97_114_101_95_112_114_101_100_95_95_91_50_44_32_51_93_95_48_3_0);
MR_def_label(__Compare___getopt_io__option_ops_1_0,184)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(getopt_io_module29)
	MR_init_entry1(__Unify___getopt_io__option_ops_internal_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___getopt_io__option_ops_internal_1_0);
	MR_init_label4(__Unify___getopt_io__option_ops_internal_1_0,4,6,10,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___getopt_io__option_ops_internal_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r2 == MR_r3)) {
		MR_GOTO_LAB(__Unify___getopt_io__option_ops_internal_1_0_i10);
	}
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r1;
	MR_sv(1) = MR_tfield(0, MR_sv(1), 2);
	MR_sv(2) = MR_tfield(0, MR_sv(2), 2);
	MR_np_call_localret_ent(f_103_101_116_111_112_116_95_105_111_95_95_112_114_105_118_97_116_101_95_98_117_105_108_116_105_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_117_110_105_102_121_95_112_114_101_100_95_95_91_49_44_32_50_93_95_48_2_0,
		__Unify___getopt_io__option_ops_internal_1_0_i4);
MR_def_label(__Unify___getopt_io__option_ops_internal_1_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___getopt_io__option_ops_internal_1_0_i1);
	}
	MR_np_call_localret_ent(f_103_101_116_111_112_116_95_105_111_95_95_112_114_105_118_97_116_101_95_98_117_105_108_116_105_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_117_110_105_102_121_95_112_114_101_100_95_95_91_49_44_32_50_93_95_48_2_0,
		__Unify___getopt_io__option_ops_internal_1_0_i6);
MR_def_label(__Unify___getopt_io__option_ops_internal_1_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___getopt_io__option_ops_internal_1_0_i1);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(__Unify___getopt_io__option_ops_special_1_0);
MR_def_label(__Unify___getopt_io__option_ops_internal_1_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___getopt_io__option_ops_internal_1_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(4);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(getopt_io_module30)
	MR_init_entry1(__Compare___getopt_io__option_ops_internal_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___getopt_io__option_ops_internal_1_0);
	MR_init_label5(__Compare___getopt_io__option_ops_internal_1_0,3,2,5,9,29)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___getopt_io__option_ops_internal_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r2 == MR_r3)) {
		MR_GOTO_LAB(__Compare___getopt_io__option_ops_internal_1_0_i3);
	}
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r1;
	MR_GOTO_LAB(__Compare___getopt_io__option_ops_internal_1_0_i2);
MR_def_label(__Compare___getopt_io__option_ops_internal_1_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___getopt_io__option_ops_internal_1_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(0, MR_sv(2), 2);
	MR_r2 = MR_tfield(0, MR_sv(1), 2);
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r1;
	MR_np_call_localret_ent(f_103_101_116_111_112_116_95_105_111_95_95_112_114_105_118_97_116_101_95_98_117_105_108_116_105_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_99_111_109_112_97_114_101_95_112_114_101_100_95_95_91_50_44_32_51_93_95_48_3_0,
		__Compare___getopt_io__option_ops_internal_1_0_i5);
MR_def_label(__Compare___getopt_io__option_ops_internal_1_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___getopt_io__option_ops_internal_1_0_i29);
	}
	MR_np_call_localret_ent(f_103_101_116_111_112_116_95_105_111_95_95_112_114_105_118_97_116_101_95_98_117_105_108_116_105_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_99_111_109_112_97_114_101_95_112_114_101_100_95_95_91_50_44_32_51_93_95_48_3_0,
		__Compare___getopt_io__option_ops_internal_1_0_i9);
MR_def_label(__Compare___getopt_io__option_ops_internal_1_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___getopt_io__option_ops_internal_1_0_i29);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(__Compare___getopt_io__option_ops_special_1_0);
MR_def_label(__Compare___getopt_io__option_ops_internal_1_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(4);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(getopt_io_module31)
	MR_init_entry1(__Unify___getopt_io__option_ops_special_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___getopt_io__option_ops_special_1_0);
	MR_init_label4(__Unify___getopt_io__option_ops_special_1_0,6,10,16,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___getopt_io__option_ops_special_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r2 == MR_r3)) {
		MR_GOTO_LAB(__Unify___getopt_io__option_ops_special_1_0_i16);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_sv(1) = MR_tempr1;
	MR_sv(2) = MR_r3;
	MR_r1 = MR_tag(MR_tempr1);
	if ((MR_r1 == MR_mktag((MR_Integer) 2))) {
		MR_GOTO_LAB(__Unify___getopt_io__option_ops_special_1_0_i10);
	}
	if ((MR_r1 == MR_mktag((MR_Integer) 1))) {
		MR_GOTO_LAB(__Unify___getopt_io__option_ops_special_1_0_i6);
	}
	MR_r1 = (MR_sv(2) == MR_tempr1);
	MR_decr_sp(3);
	MR_proceed();
	}
MR_def_label(__Unify___getopt_io__option_ops_special_1_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Unify___getopt_io__option_ops_special_1_0_i1);
	}
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(f_103_101_116_111_112_116_95_105_111_95_95_112_114_105_118_97_116_101_95_98_117_105_108_116_105_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_117_110_105_102_121_95_112_114_101_100_95_95_91_49_44_32_50_93_95_48_2_0);
MR_def_label(__Unify___getopt_io__option_ops_special_1_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),2)) {
		MR_GOTO_LAB(__Unify___getopt_io__option_ops_special_1_0_i1);
	}
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(f_103_101_116_111_112_116_95_105_111_95_95_112_114_105_118_97_116_101_95_98_117_105_108_116_105_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_117_110_105_102_121_95_112_114_101_100_95_95_91_49_44_32_50_93_95_48_2_0);
MR_def_label(__Unify___getopt_io__option_ops_special_1_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___getopt_io__option_ops_special_1_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(getopt_io_module32)
	MR_init_entry1(__Compare___getopt_io__option_ops_special_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___getopt_io__option_ops_special_1_0);
	MR_init_label5(__Compare___getopt_io__option_ops_special_1_0,44,12,17,20,24)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___getopt_io__option_ops_special_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	if ((MR_r2 == MR_r3)) {
		MR_GOTO_LAB(__Compare___getopt_io__option_ops_special_1_0_i44);
	}
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_r2 = MR_tag(MR_sv(1));
	if ((MR_r2 == MR_mktag((MR_Integer) 2))) {
		MR_GOTO_LAB(__Compare___getopt_io__option_ops_special_1_0_i20);
	}
	if ((MR_r2 == MR_mktag((MR_Integer) 1))) {
		MR_GOTO_LAB(__Compare___getopt_io__option_ops_special_1_0_i12);
	}
	MR_r2 = MR_tag(MR_sv(2));
	if ((MR_r2 == MR_mktag((MR_Integer) 2))) {
		MR_GOTO_LAB(__Compare___getopt_io__option_ops_special_1_0_i17);
	}
	if ((MR_r2 == MR_mktag((MR_Integer) 1))) {
		MR_GOTO_LAB(__Compare___getopt_io__option_ops_special_1_0_i17);
	}
MR_def_label(__Compare___getopt_io__option_ops_special_1_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___getopt_io__option_ops_special_1_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_tag(MR_sv(2));
	if ((MR_r2 == MR_mktag((MR_Integer) 2))) {
		MR_GOTO_LAB(__Compare___getopt_io__option_ops_special_1_0_i17);
	}
	if ((MR_r2 == MR_mktag((MR_Integer) 1))) {
		MR_GOTO_LAB(__Compare___getopt_io__option_ops_special_1_0_i24);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___getopt_io__option_ops_special_1_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___getopt_io__option_ops_special_1_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_tag(MR_sv(2));
	if ((MR_r2 == MR_mktag((MR_Integer) 2))) {
		MR_GOTO_LAB(__Compare___getopt_io__option_ops_special_1_0_i24);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___getopt_io__option_ops_special_1_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(f_103_101_116_111_112_116_95_105_111_95_95_112_114_105_118_97_116_101_95_98_117_105_108_116_105_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_99_111_109_112_97_114_101_95_112_114_101_100_95_95_91_50_44_32_51_93_95_48_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(getopt_io_module33)
	MR_init_entry1(__Unify___getopt_io__option_ops_track_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___getopt_io__option_ops_track_1_0);
	MR_init_label4(__Unify___getopt_io__option_ops_track_1_0,3,5,9,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___getopt_io__option_ops_track_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r2 == MR_r3)) {
		MR_GOTO_LAB(__Unify___getopt_io__option_ops_track_1_0_i9);
	}
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(f_103_101_116_111_112_116_95_105_111_95_95_112_114_105_118_97_116_101_95_98_117_105_108_116_105_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_117_110_105_102_121_95_112_114_101_100_95_95_91_49_44_32_50_93_95_48_2_0,
		__Unify___getopt_io__option_ops_track_1_0_i3);
MR_def_label(__Unify___getopt_io__option_ops_track_1_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___getopt_io__option_ops_track_1_0_i1);
	}
	MR_np_call_localret_ent(f_103_101_116_111_112_116_95_105_111_95_95_112_114_105_118_97_116_101_95_98_117_105_108_116_105_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_117_110_105_102_121_95_112_114_101_100_95_95_91_49_44_32_50_93_95_48_2_0,
		__Unify___getopt_io__option_ops_track_1_0_i5);
MR_def_label(__Unify___getopt_io__option_ops_track_1_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___getopt_io__option_ops_track_1_0_i1);
	}
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_np_tailcall_ent(f_103_101_116_111_112_116_95_105_111_95_95_112_114_105_118_97_116_101_95_98_117_105_108_116_105_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_117_110_105_102_121_95_112_114_101_100_95_95_91_49_44_32_50_93_95_48_2_0);
MR_def_label(__Unify___getopt_io__option_ops_track_1_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___getopt_io__option_ops_track_1_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(1);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(getopt_io_module34)
	MR_init_entry1(__Compare___getopt_io__option_ops_track_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___getopt_io__option_ops_track_1_0);
	MR_init_label4(__Compare___getopt_io__option_ops_track_1_0,29,4,8,28)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___getopt_io__option_ops_track_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r2 != MR_r3)) {
		MR_GOTO_LAB(__Compare___getopt_io__option_ops_track_1_0_i29);
	}
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___getopt_io__option_ops_track_1_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(f_103_101_116_111_112_116_95_105_111_95_95_112_114_105_118_97_116_101_95_98_117_105_108_116_105_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_99_111_109_112_97_114_101_95_112_114_101_100_95_95_91_50_44_32_51_93_95_48_3_0,
		__Compare___getopt_io__option_ops_track_1_0_i4);
MR_def_label(__Compare___getopt_io__option_ops_track_1_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___getopt_io__option_ops_track_1_0_i28);
	}
	MR_np_call_localret_ent(f_103_101_116_111_112_116_95_105_111_95_95_112_114_105_118_97_116_101_95_98_117_105_108_116_105_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_99_111_109_112_97_114_101_95_112_114_101_100_95_95_91_50_44_32_51_93_95_48_3_0,
		__Compare___getopt_io__option_ops_track_1_0_i8);
MR_def_label(__Compare___getopt_io__option_ops_track_1_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___getopt_io__option_ops_track_1_0_i28);
	}
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_np_tailcall_ent(f_103_101_116_111_112_116_95_105_111_95_95_112_114_105_118_97_116_101_95_98_117_105_108_116_105_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_99_111_109_112_97_114_101_95_112_114_101_100_95_95_91_50_44_32_51_93_95_48_3_0);
MR_def_label(__Compare___getopt_io__option_ops_track_1_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(1);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(getopt_io_module35)
	MR_init_entry1(__Unify___getopt_io__option_table_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___getopt_io__option_table_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___getopt_io__option_table_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r2;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(getopt_io, option_data);
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


MR_BEGIN_MODULE(getopt_io_module36)
	MR_init_entry1(__Compare___getopt_io__option_table_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___getopt_io__option_table_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___getopt_io__option_table_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r2;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(getopt_io, option_data);
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


MR_BEGIN_MODULE(getopt_io_module37)
	MR_init_entry1(__Unify___getopt_io__special_data_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___getopt_io__special_data_0_0);
	MR_init_label7(__Unify___getopt_io__special_data_0_0,13,5,7,19,9,21,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___getopt_io__special_data_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___getopt_io__special_data_0_0_i21);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_sv(1)),
		MR_LABEL_AP(__Unify___getopt_io__special_data_0_0_i13) MR_AND
		MR_LABEL_AP(__Unify___getopt_io__special_data_0_0_i5) MR_AND
		MR_LABEL_AP(__Unify___getopt_io__special_data_0_0_i7) MR_AND
		MR_LABEL_AP(__Unify___getopt_io__special_data_0_0_i19));
MR_def_label(__Unify___getopt_io__special_data_0_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_sv(2) == MR_sv(1));
	MR_decr_sp_and_return(3);
MR_def_label(__Unify___getopt_io__special_data_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Unify___getopt_io__special_data_0_0_i1);
	}
	MR_r1 = MR_tfield(1, MR_sv(1), 0);
	MR_r2 = MR_tfield(1, MR_sv(2), 0);
	MR_r1 = (MR_r1 == MR_r2);
	MR_decr_sp_and_return(3);
MR_def_label(__Unify___getopt_io__special_data_0_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),2)) {
		MR_GOTO_LAB(__Unify___getopt_io__special_data_0_0_i1);
	}
	MR_r1 = MR_tfield(2, MR_sv(1), 0);
	MR_r2 = MR_tfield(2, MR_sv(2), 0);
	MR_r1 = (MR_r1 == MR_r2);
	MR_decr_sp_and_return(3);
MR_def_label(__Unify___getopt_io__special_data_0_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_tfield(3, MR_sv(1), 0),0)) {
		MR_GOTO_LAB(__Unify___getopt_io__special_data_0_0_i9);
	}
	if (MR_RTAGS_TESTR(MR_sv(2),3,0)) {
		MR_GOTO_LAB(__Unify___getopt_io__special_data_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(3, MR_sv(1), 1);
	MR_tempr2 = MR_tfield(3, MR_sv(2), 1);
	MR_r1 = (strcmp((char *) (MR_Word *) MR_tempr1, (char *) (MR_Word *) MR_tempr2) == 0);
	MR_decr_sp_and_return(3);
	}
MR_def_label(__Unify___getopt_io__special_data_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,1)) {
		MR_GOTO_LAB(__Unify___getopt_io__special_data_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = MR_tfield(3, MR_sv(1), 1);
	MR_r3 = MR_tfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Unify___maybe__maybe_1_0);
MR_def_label(__Unify___getopt_io__special_data_0_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___getopt_io__special_data_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(getopt_io_module38)
	MR_init_entry1(__Compare___getopt_io__special_data_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___getopt_io__special_data_0_0);
	MR_init_label10(__Compare___getopt_io__special_data_0_0,50,60,5,7,8,19,21,24,25,35)
	MR_init_label7(__Compare___getopt_io__special_data_0_0,82,95,69,96,37,97,41)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___getopt_io__special_data_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___getopt_io__special_data_0_0_i96);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_sv(1)),
		MR_LABEL_AP(__Compare___getopt_io__special_data_0_0_i50) MR_AND
		MR_LABEL_AP(__Compare___getopt_io__special_data_0_0_i5) MR_AND
		MR_LABEL_AP(__Compare___getopt_io__special_data_0_0_i21) MR_AND
		MR_LABEL_AP(__Compare___getopt_io__special_data_0_0_i82));
MR_def_label(__Compare___getopt_io__special_data_0_0,50)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_sv(2)),
		MR_LABEL_AP(__Compare___getopt_io__special_data_0_0_i96) MR_AND
		MR_LABEL_AP(__Compare___getopt_io__special_data_0_0_i95) MR_AND
		MR_LABEL_AP(__Compare___getopt_io__special_data_0_0_i95) MR_AND
		MR_LABEL_AP(__Compare___getopt_io__special_data_0_0_i60));
MR_def_label(__Compare___getopt_io__special_data_0_0,60)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_tfield(3, MR_sv(2), 0),0)) {
		MR_GOTO_LAB(__Compare___getopt_io__special_data_0_0_i95);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___getopt_io__special_data_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_sv(2)),
		MR_LABEL_AP(__Compare___getopt_io__special_data_0_0_i97) MR_AND
		MR_LABEL_AP(__Compare___getopt_io__special_data_0_0_i7) MR_AND
		MR_LABEL_AP(__Compare___getopt_io__special_data_0_0_i95) MR_AND
		MR_LABEL_AP(__Compare___getopt_io__special_data_0_0_i19));
MR_def_label(__Compare___getopt_io__special_data_0_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_tfield(1, MR_sv(2), 0);
	MR_r3 = MR_tfield(1, MR_sv(1), 0);
	if (((MR_Integer) MR_r3 >= (MR_Integer) MR_r2)) {
		MR_GOTO_LAB(__Compare___getopt_io__special_data_0_0_i8);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___getopt_io__special_data_0_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r3 != MR_r2)) {
		MR_GOTO_LAB(__Compare___getopt_io__special_data_0_0_i97);
	}
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___getopt_io__special_data_0_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_tfield(3, MR_sv(2), 0),0)) {
		MR_GOTO_LAB(__Compare___getopt_io__special_data_0_0_i95);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___getopt_io__special_data_0_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_sv(2)),
		MR_LABEL_AP(__Compare___getopt_io__special_data_0_0_i97) MR_AND
		MR_LABEL_AP(__Compare___getopt_io__special_data_0_0_i97) MR_AND
		MR_LABEL_AP(__Compare___getopt_io__special_data_0_0_i24) MR_AND
		MR_LABEL_AP(__Compare___getopt_io__special_data_0_0_i35));
MR_def_label(__Compare___getopt_io__special_data_0_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_tfield(2, MR_sv(1), 0);
	MR_r3 = MR_tfield(2, MR_sv(2), 0);
	if (((MR_Integer) MR_r2 >= (MR_Integer) MR_r3)) {
		MR_GOTO_LAB(__Compare___getopt_io__special_data_0_0_i25);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___getopt_io__special_data_0_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r2 != MR_r3)) {
		MR_GOTO_LAB(__Compare___getopt_io__special_data_0_0_i97);
	}
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___getopt_io__special_data_0_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_tfield(3, MR_sv(2), 0),0)) {
		MR_GOTO_LAB(__Compare___getopt_io__special_data_0_0_i95);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___getopt_io__special_data_0_0,82)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_tfield(3, MR_sv(1), 0),0)) {
		MR_GOTO_LAB(__Compare___getopt_io__special_data_0_0_i37);
	}
	if (MR_INT_NE(MR_tag(MR_sv(2)),3)) {
		MR_GOTO_LAB(__Compare___getopt_io__special_data_0_0_i97);
	}
	if (MR_INT_NE(MR_tfield(3, MR_sv(2), 0),0)) {
		MR_GOTO_LAB(__Compare___getopt_io__special_data_0_0_i95);
	}
	MR_r2 = MR_tfield(3, MR_sv(1), 1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(3, MR_sv(2), 1);
	{
	MR_Integer	Res;
	MR_String	S1;
	MR_String	S2;
#define	MR_PROC_LABEL	mercury____Compare___getopt_io__special_data_0_0
	S1 = (MR_String) MR_r2;
	S2 = (MR_String) MR_tempr1;
{
#line 139 "private_builtin.opt"

    Res = strcmp(S1, S2);
;}
#line 6353 "getopt_io.c"
	MR_r2 = Res;
#undef	MR_PROC_LABEL
	}
	if (MR_INT_GE(MR_r2,0)) {
		MR_GOTO_LAB(__Compare___getopt_io__special_data_0_0_i69);
	}
	}
MR_def_label(__Compare___getopt_io__special_data_0_0,95)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___getopt_io__special_data_0_0,69)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r2,0)) {
		MR_GOTO_LAB(__Compare___getopt_io__special_data_0_0_i97);
	}
MR_def_label(__Compare___getopt_io__special_data_0_0,96)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___getopt_io__special_data_0_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_tag(MR_sv(2)),3)) {
		MR_GOTO_LAB(__Compare___getopt_io__special_data_0_0_i97);
	}
	if (MR_INT_NE(MR_tfield(3, MR_sv(2), 0),0)) {
		MR_GOTO_LAB(__Compare___getopt_io__special_data_0_0_i41);
	}
MR_def_label(__Compare___getopt_io__special_data_0_0,97)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___getopt_io__special_data_0_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = MR_tfield(3, MR_sv(1), 1);
	MR_r3 = MR_tfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Compare___maybe__maybe_1_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_declare_entry(MR_do_fail);
MR_declare_entry(mercury__do_call_closure_0);

MR_BEGIN_MODULE(getopt_io_module39)
	MR_init_entry1(getopt_io__IntroducedFrom__pred__init_option_table__348__1_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__getopt_io__IntroducedFrom__pred__init_option_table__348__1_3_0);
	MR_init_label1(getopt_io__IntroducedFrom__pred__init_option_table__348__1_3_0,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__pred__init_option_table__348__1'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(getopt_io__IntroducedFrom__pred__init_option_table__348__1_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_mkframe("pred getopt_io.IntroducedFrom__pred__init_option_table__348__1/3-0", 0,
		MR_ENTRY(MR_do_fail));
	MR_r1 = MR_r2;
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(getopt_io__IntroducedFrom__pred__init_option_table__348__1_3_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_0),
		mercury__getopt_io__IntroducedFrom__pred__init_option_table__348__1_3_0_i1);
MR_def_label(getopt_io__IntroducedFrom__pred__init_option_table__348__1_3_0,1)
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


MR_BEGIN_MODULE(getopt_io_module40)
	MR_init_entry1(getopt_io__IntroducedFrom__pred__init_option_table_multi__355__1_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__getopt_io__IntroducedFrom__pred__init_option_table_multi__355__1_3_0);
	MR_init_label1(getopt_io__IntroducedFrom__pred__init_option_table_multi__355__1_3_0,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__pred__init_option_table_multi__355__1'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(getopt_io__IntroducedFrom__pred__init_option_table_multi__355__1_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_mkframe("pred getopt_io.IntroducedFrom__pred__init_option_table_multi__355__1/3-0", 0,
		MR_ENTRY(MR_do_fail));
	MR_r1 = MR_r2;
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(getopt_io__IntroducedFrom__pred__init_option_table_multi__355__1_3_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_0),
		mercury__getopt_io__IntroducedFrom__pred__init_option_table_multi__355__1_3_0_i1);
MR_def_label(getopt_io__IntroducedFrom__pred__init_option_table_multi__355__1_3_0,1)
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

MR_decl_entry(char__is_whitespace_1_0);

MR_BEGIN_MODULE(getopt_io_module41)
	MR_init_entry1(fn__getopt_io__string__preceding_boundary__ho18_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__getopt_io__string__preceding_boundary__ho18_3_0);
	MR_init_label4(fn__getopt_io__string__preceding_boundary__ho18_3_0,19,2,7,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'preceding_boundary__ho18'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__getopt_io__string__preceding_boundary__ho18_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
MR_def_label(fn__getopt_io__string__preceding_boundary__ho18_3_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_GE(MR_r2,0)) {
		MR_GOTO_LAB(fn__getopt_io__string__preceding_boundary__ho18_3_0_i2);
	}
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(3);
MR_def_label(fn__getopt_io__string__preceding_boundary__ho18_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	{
	MR_String	Str;
	MR_Integer	Index;
	MR_Char	Ch;
#define	MR_PROC_LABEL	mercury__fn__getopt_io__string__preceding_boundary__ho18_3_0
	Str = (MR_String) MR_r1;
	Index = MR_r2;
{
#line 515 "string.opt"

    Ch = Str[Index];
;}
#line 6517 "getopt_io.c"
	MR_tempr1 = Ch;
#undef	MR_PROC_LABEL
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(char__is_whitespace_1_0,
		fn__getopt_io__string__preceding_boundary__ho18_3_0_i7);
MR_def_label(fn__getopt_io__string__preceding_boundary__ho18_3_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(fn__getopt_io__string__preceding_boundary__ho18_3_0_i3);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(3);
MR_def_label(fn__getopt_io__string__preceding_boundary__ho18_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r2 = ((MR_Integer) MR_r2 - (MR_Integer) 1);
	MR_succip_word = MR_sv(3);
	MR_GOTO_LAB(fn__getopt_io__string__preceding_boundary__ho18_3_0_i19);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(getopt_io_module42)
	MR_init_entry1(fn__getopt_io__string__words_2__ho19_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__getopt_io__string__words_2__ho19_4_0);
	MR_init_label4(fn__getopt_io__string__words_2__ho19_4_0,12,2,3,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'words_2__ho19'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__getopt_io__string__words_2__ho19_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
MR_def_label(fn__getopt_io__string__words_2__ho19_4_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_GE(MR_r2,0)) {
		MR_GOTO_LAB(fn__getopt_io__string__words_2__ho19_4_0_i2);
	}
	MR_r1 = MR_r3;
	MR_decr_sp_and_return(4);
MR_def_label(fn__getopt_io__string__words_2__ho19_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_np_call_localret_ent(fn__getopt_io__string__preceding_boundary__ho23_3_0,
		fn__getopt_io__string__words_2__ho19_4_0_i3);
MR_def_label(fn__getopt_io__string__words_2__ho19_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = ((MR_Integer) MR_r1 + (MR_Integer) 1);
	MR_tempr2 = ((MR_Integer) MR_sv(2) - (MR_Integer) MR_r1);
	{
	MR_String	Str;
	MR_Integer	Start;
	MR_Integer	Count;
	MR_String	SubString;
#define	MR_PROC_LABEL	mercury__fn__getopt_io__string__words_2__ho19_4_0
	Str = (MR_String) MR_sv(1);
	Start = MR_tempr1;
	Count = MR_tempr2;
{
#line 667 "string.opt"
{
    MR_Integer len;

    MR_allocate_aligned_string_msg(SubString, Count, MR_PROC_LABEL);
    MR_memcpy(SubString, Str + Start, Count);
    SubString[Count] = '\0';
};}
#line 6604 "getopt_io.c"
	MR_tempr1 = (MR_Word) SubString;
#undef	MR_PROC_LABEL
	}
	MR_sv(2) = MR_tempr1;
	MR_tempr2 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr2;
	}
	MR_np_call_localret_ent(fn__getopt_io__string__preceding_boundary__ho1__ho22_3_0,
		fn__getopt_io__string__words_2__ho19_4_0_i4);
MR_def_label(fn__getopt_io__string__words_2__ho19_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr1, 1) = MR_sv(3);
	MR_tempr2 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr2;
	MR_succip_word = MR_sv(4);
	MR_GOTO_LAB(fn__getopt_io__string__words_2__ho19_4_0_i12);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(getopt_io_module43)
	MR_init_entry1(fn__getopt_io__string__preceding_boundary__ho1__ho22_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__getopt_io__string__preceding_boundary__ho1__ho22_3_0);
	MR_init_label4(fn__getopt_io__string__preceding_boundary__ho1__ho22_3_0,19,2,7,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'preceding_boundary__ho1__ho22'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__getopt_io__string__preceding_boundary__ho1__ho22_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
MR_def_label(fn__getopt_io__string__preceding_boundary__ho1__ho22_3_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_GE(MR_r2,0)) {
		MR_GOTO_LAB(fn__getopt_io__string__preceding_boundary__ho1__ho22_3_0_i2);
	}
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(3);
MR_def_label(fn__getopt_io__string__preceding_boundary__ho1__ho22_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	{
	MR_String	Str;
	MR_Integer	Index;
	MR_Char	Ch;
#define	MR_PROC_LABEL	mercury__fn__getopt_io__string__preceding_boundary__ho1__ho22_3_0
	Str = (MR_String) MR_r1;
	Index = MR_r2;
{
#line 515 "string.opt"

    Ch = Str[Index];
;}
#line 6675 "getopt_io.c"
	MR_tempr1 = Ch;
#undef	MR_PROC_LABEL
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(char__is_whitespace_1_0,
		fn__getopt_io__string__preceding_boundary__ho1__ho22_3_0_i7);
MR_def_label(fn__getopt_io__string__preceding_boundary__ho1__ho22_3_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(fn__getopt_io__string__preceding_boundary__ho1__ho22_3_0_i3);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(3);
MR_def_label(fn__getopt_io__string__preceding_boundary__ho1__ho22_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r2 = ((MR_Integer) MR_r2 - (MR_Integer) 1);
	MR_succip_word = MR_sv(3);
	MR_GOTO_LAB(fn__getopt_io__string__preceding_boundary__ho1__ho22_3_0_i19);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(getopt_io_module44)
	MR_init_entry1(fn__getopt_io__string__preceding_boundary__ho23_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__getopt_io__string__preceding_boundary__ho23_3_0);
	MR_init_label4(fn__getopt_io__string__preceding_boundary__ho23_3_0,16,2,4,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'preceding_boundary__ho23'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__getopt_io__string__preceding_boundary__ho23_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
MR_def_label(fn__getopt_io__string__preceding_boundary__ho23_3_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_GE(MR_r2,0)) {
		MR_GOTO_LAB(fn__getopt_io__string__preceding_boundary__ho23_3_0_i2);
	}
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(3);
MR_def_label(fn__getopt_io__string__preceding_boundary__ho23_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	{
	MR_String	Str;
	MR_Integer	Index;
	MR_Char	Ch;
#define	MR_PROC_LABEL	mercury__fn__getopt_io__string__preceding_boundary__ho23_3_0
	Str = (MR_String) MR_r1;
	Index = MR_r2;
{
#line 515 "string.opt"

    Ch = Str[Index];
;}
#line 6747 "getopt_io.c"
	MR_tempr1 = Ch;
#undef	MR_PROC_LABEL
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(char__is_whitespace_1_0,
		fn__getopt_io__string__preceding_boundary__ho23_3_0_i4);
MR_def_label(fn__getopt_io__string__preceding_boundary__ho23_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(fn__getopt_io__string__preceding_boundary__ho23_3_0_i3);
	}
	MR_r1 = MR_sv(2);
	MR_decr_sp_and_return(3);
MR_def_label(fn__getopt_io__string__preceding_boundary__ho23_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = ((MR_Integer) MR_sv(2) - (MR_Integer) 1);
	MR_succip_word = MR_sv(3);
	MR_GOTO_LAB(fn__getopt_io__string__preceding_boundary__ho23_3_0_i16);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(getopt_io_module45)
	MR_init_entry1(f_103_101_116_111_112_116_95_105_111_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_110_117_109_101_114_105_99_95_97_114_103_117_109_101_110_116_95_95_91_49_93_95_48_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__f_103_101_116_111_112_116_95_105_111_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_110_117_109_101_114_105_99_95_97_114_103_117_109_101_110_116_95_95_91_49_93_95_48_3_0);
	MR_init_label4(f_103_101_116_111_112_116_95_105_111_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_110_117_109_101_114_105_99_95_97_114_103_117_109_101_110_116_95_95_91_49_93_95_48_3_0,2,3,4,5)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__pred__numeric_argument__[1]_0'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(f_103_101_116_111_112_116_95_105_111_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_110_117_109_101_114_105_99_95_97_114_103_117_109_101_110_116_95_95_91_49_93_95_48_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_r1 = MR_r2;
	MR_r2 = (MR_Word) MR_string_const("\' is not numeric", 16);
	MR_np_call_localret_ent(string__append_3_2,
		f_103_101_116_111_112_116_95_105_111_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_110_117_109_101_114_105_99_95_97_114_103_117_109_101_110_116_95_95_91_49_93_95_48_3_0_i2);
MR_def_label(f_103_101_116_111_112_116_95_105_111_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_110_117_109_101_114_105_99_95_97_114_103_117_109_101_110_116_95_95_91_49_93_95_48_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("\' requires a numeric argument; \140", 32);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(string__append_3_2,
		f_103_101_116_111_112_116_95_105_111_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_110_117_109_101_114_105_99_95_97_114_103_117_109_101_110_116_95_95_91_49_93_95_48_3_0_i3);
MR_def_label(f_103_101_116_111_112_116_95_105_111_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_110_117_109_101_114_105_99_95_97_114_103_117_109_101_110_116_95_95_91_49_93_95_48_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(string__append_3_2,
		f_103_101_116_111_112_116_95_105_111_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_110_117_109_101_114_105_99_95_97_114_103_117_109_101_110_116_95_95_91_49_93_95_48_3_0_i4);
MR_def_label(f_103_101_116_111_112_116_95_105_111_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_110_117_109_101_114_105_99_95_97_114_103_117_109_101_110_116_95_95_91_49_93_95_48_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("option \140", 8);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(string__append_3_2,
		f_103_101_116_111_112_116_95_105_111_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_110_117_109_101_114_105_99_95_97_114_103_117_109_101_110_116_95_95_91_49_93_95_48_3_0_i5);
MR_def_label(f_103_101_116_111_112_116_95_105_111_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_110_117_109_101_114_105_99_95_97_114_103_117_109_101_110_116_95_95_91_49_93_95_48_3_0,5)
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


MR_BEGIN_MODULE(getopt_io_module46)
	MR_init_entry1(f_103_101_116_111_112_116_95_105_111_95_95_112_114_105_118_97_116_101_95_98_117_105_108_116_105_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_99_111_109_112_97_114_101_95_112_114_101_100_95_95_91_50_44_32_51_93_95_48_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__f_103_101_116_111_112_116_95_105_111_95_95_112_114_105_118_97_116_101_95_98_117_105_108_116_105_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_99_111_109_112_97_114_101_95_112_114_101_100_95_95_91_50_44_32_51_93_95_48_3_0);
	MR_init_label1(f_103_101_116_111_112_116_95_105_111_95_95_112_114_105_118_97_116_101_95_98_117_105_108_116_105_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_99_111_109_112_97_114_101_95_112_114_101_100_95_95_91_50_44_32_51_93_95_48_3_0,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__pred__builtin_compare_pred__[2, 3]_0'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(f_103_101_116_111_112_116_95_105_111_95_95_112_114_105_118_97_116_101_95_98_117_105_108_116_105_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_99_111_109_112_97_114_101_95_112_114_101_100_95_95_91_50_44_32_51_93_95_48_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__f_103_101_116_111_112_116_95_105_111_95_95_112_114_105_118_97_116_101_95_98_117_105_108_116_105_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_99_111_109_112_97_114_101_95_112_114_101_100_95_95_91_50_44_32_51_93_95_48_3_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
{
#line 78 "builtin.opt"

    SUCCESS_INDICATOR = MR_TRUE;
;}
#line 6865 "getopt_io.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(f_103_101_116_111_112_116_95_105_111_95_95_112_114_105_118_97_116_101_95_98_117_105_108_116_105_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_99_111_109_112_97_114_101_95_112_114_101_100_95_95_91_50_44_32_51_93_95_48_3_0_i2);
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	MR_r1 = (MR_Word) MR_string_const("attempted higher-order comparison", 33);
	MR_np_tailcall_ent(require__error_1_0);
MR_def_label(f_103_101_116_111_112_116_95_105_111_95_95_112_114_105_118_97_116_101_95_98_117_105_108_116_105_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_99_111_109_112_97_114_101_95_112_114_101_100_95_95_91_50_44_32_51_93_95_48_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(getopt_io_module47)
	MR_init_entry1(f_103_101_116_111_112_116_95_105_111_95_95_112_114_105_118_97_116_101_95_98_117_105_108_116_105_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_117_110_105_102_121_95_112_114_101_100_95_95_91_49_44_32_50_93_95_48_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__f_103_101_116_111_112_116_95_105_111_95_95_112_114_105_118_97_116_101_95_98_117_105_108_116_105_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_117_110_105_102_121_95_112_114_101_100_95_95_91_49_44_32_50_93_95_48_2_0);
	MR_init_label3(f_103_101_116_111_112_116_95_105_111_95_95_112_114_105_118_97_116_101_95_98_117_105_108_116_105_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_117_110_105_102_121_95_112_114_101_100_95_95_91_49_44_32_50_93_95_48_2_0,2,10,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__pred__builtin_unify_pred__[1, 2]_0'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(f_103_101_116_111_112_116_95_105_111_95_95_112_114_105_118_97_116_101_95_98_117_105_108_116_105_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_117_110_105_102_121_95_112_114_101_100_95_95_91_49_44_32_50_93_95_48_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__f_103_101_116_111_112_116_95_105_111_95_95_112_114_105_118_97_116_101_95_98_117_105_108_116_105_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_117_110_105_102_121_95_112_114_101_100_95_95_91_49_44_32_50_93_95_48_2_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
{
#line 78 "builtin.opt"

    SUCCESS_INDICATOR = MR_TRUE;
;}
#line 6908 "getopt_io.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(f_103_101_116_111_112_116_95_105_111_95_95_112_114_105_118_97_116_101_95_98_117_105_108_116_105_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_117_110_105_102_121_95_112_114_101_100_95_95_91_49_44_32_50_93_95_48_2_0_i2);
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_r1 = (MR_Word) MR_string_const("attempted higher-order unification", 34);
	MR_np_call_localret_ent(require__error_1_0,
		f_103_101_116_111_112_116_95_105_111_95_95_112_114_105_118_97_116_101_95_98_117_105_108_116_105_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_117_110_105_102_121_95_112_114_101_100_95_95_91_49_44_32_50_93_95_48_2_0_i10);
MR_def_label(f_103_101_116_111_112_116_95_105_111_95_95_112_114_105_118_97_116_101_95_98_117_105_108_116_105_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_117_110_105_102_121_95_112_114_101_100_95_95_91_49_44_32_50_93_95_48_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__f_103_101_116_111_112_116_95_105_111_95_95_112_114_105_118_97_116_101_95_98_117_105_108_116_105_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_117_110_105_102_121_95_112_114_101_100_95_95_91_49_44_32_50_93_95_48_2_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
{
#line 78 "builtin.opt"

    SUCCESS_INDICATOR = MR_TRUE;
;}
#line 6931 "getopt_io.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(f_103_101_116_111_112_116_95_105_111_95_95_112_114_105_118_97_116_101_95_98_117_105_108_116_105_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_117_110_105_102_121_95_112_114_101_100_95_95_91_49_44_32_50_93_95_48_2_0_i1);
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
MR_def_label(f_103_101_116_111_112_116_95_105_111_95_95_112_114_105_118_97_116_101_95_98_117_105_108_116_105_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_117_110_105_102_121_95_112_114_101_100_95_95_91_49_44_32_50_93_95_48_2_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(1);
MR_def_label(f_103_101_116_111_112_116_95_105_111_95_95_112_114_105_118_97_116_101_95_98_117_105_108_116_105_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_117_110_105_102_121_95_112_114_101_100_95_95_91_49_44_32_50_93_95_48_2_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(getopt_io_module48)
	MR_init_entry1(fn__f_103_101_116_111_112_116_95_105_111_95_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__f_103_101_116_111_112_116_95_105_111_95_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__func__ClassMethod_for_ops__op_table____ops__mercury_op_table__arity0______ops__max_priority_1__[1]_0'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__f_103_101_116_111_112_116_95_105_111_95_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1200;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

static void mercury__getopt_io_maybe_bunch_0(void)
{
	getopt_io_module0();
	getopt_io_module1();
	getopt_io_module2();
	getopt_io_module3();
	getopt_io_module4();
	getopt_io_module5();
	getopt_io_module6();
	getopt_io_module7();
	getopt_io_module8();
	getopt_io_module9();
	getopt_io_module10();
	getopt_io_module11();
	getopt_io_module12();
	getopt_io_module13();
	getopt_io_module14();
	getopt_io_module15();
	getopt_io_module16();
	getopt_io_module17();
	getopt_io_module18();
	getopt_io_module19();
	getopt_io_module20();
	getopt_io_module21();
	getopt_io_module22();
	getopt_io_module23();
	getopt_io_module24();
	getopt_io_module25();
	getopt_io_module26();
	getopt_io_module27();
	getopt_io_module28();
	getopt_io_module29();
	getopt_io_module30();
	getopt_io_module31();
	getopt_io_module32();
	getopt_io_module33();
	getopt_io_module34();
	getopt_io_module35();
	getopt_io_module36();
	getopt_io_module37();
	getopt_io_module38();
	getopt_io_module39();
}

static void mercury__getopt_io_maybe_bunch_1(void)
{
	getopt_io_module40();
	getopt_io_module41();
	getopt_io_module42();
	getopt_io_module43();
	getopt_io_module44();
	getopt_io_module45();
	getopt_io_module46();
	getopt_io_module47();
	getopt_io_module48();
}

/* suppress gcc -Wmissing-decls warnings */
void mercury__getopt_io__init(void);
void mercury__getopt_io__init_type_tables(void);
void mercury__getopt_io__init_debugger(void);
#ifdef MR_DEEP_PROFILING
void mercury__getopt_io__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp);
#endif
#ifdef MR_RECORD_TERM_SIZES
void mercury__getopt_io__init_complexity_procs(void);
#endif

void mercury__getopt_io__init(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	mercury__getopt_io_maybe_bunch_0();
	mercury__getopt_io_maybe_bunch_1();
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_getopt_io__type_ctor_info_maybe_option_table_1,
		getopt_io__maybe_option_table_1_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_getopt_io__type_ctor_info_option_data_0,
		getopt_io__option_data_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_getopt_io__type_ctor_info_option_ops_1,
		getopt_io__option_ops_1_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_getopt_io__type_ctor_info_option_ops_internal_1,
		getopt_io__option_ops_internal_1_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_getopt_io__type_ctor_info_option_ops_special_1,
		getopt_io__option_ops_special_1_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_getopt_io__type_ctor_info_option_ops_track_1,
		getopt_io__option_ops_track_1_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_getopt_io__type_ctor_info_option_table_1,
		getopt_io__option_table_1_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_getopt_io__type_ctor_info_special_data_0,
		getopt_io__special_data_0_0);
	mercury__getopt_io__init_debugger();
}

void mercury__getopt_io__init_type_tables(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	{
		MR_register_type_ctor_info(
		&mercury_data_getopt_io__type_ctor_info_maybe_option_table_1);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_getopt_io__type_ctor_info_option_data_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_getopt_io__type_ctor_info_option_ops_1);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_getopt_io__type_ctor_info_option_ops_internal_1);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_getopt_io__type_ctor_info_option_ops_special_1);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_getopt_io__type_ctor_info_option_ops_track_1);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_getopt_io__type_ctor_info_option_table_1);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_getopt_io__type_ctor_info_special_data_0);
	}
}


void mercury__getopt_io__init_debugger(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}

#ifdef MR_DEEP_PROFILING

void mercury__getopt_io__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp)
{
	MR_write_out_module_proc_reps_start(procrep_fp, &mercury_data__module_common_layout__getopt_io);
	MR_write_out_module_proc_reps_end(procrep_fp);
}

#endif

#ifdef MR_RECORD_TERM_SIZES

void mercury__getopt_io__init_complexity_procs(void)
{
}

#endif

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;
