/*
** Automatically generated from `modecheck_call.m'
** by the Mercury compiler,
** version 11.07-beta-2011-07-20, configured for x86_64-unknown-linux-gnu.
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
INIT mercury__check_hlds__modecheck_call__init
ENDINIT
*/

#define MR_ALLOW_RESET
#include "mercury_imp.h"
#line 140 "../library/io.int2"
#include "io.mh"

#line 28 "check_hlds.modecheck_call.c"
#line 150 "../library/io.int2"
#include "string.mh"

#line 32 "check_hlds.modecheck_call.c"
#line 33 "../library/array.int2"
#include "array.mh"

#line 36 "check_hlds.modecheck_call.c"
#line 39 "../mdbcomp/mdbcomp.rtti_access.int2"
#include "mdbcomp.rtti_access.mh"

#line 40 "check_hlds.modecheck_call.c"
#line 31 "../library/bitmap.int2"
#include "bitmap.mh"

#line 44 "check_hlds.modecheck_call.c"
#line 30 "../library/time.int2"
#include "time.mh"

#line 48 "check_hlds.modecheck_call.c"
#line 49 "check_hlds.modecheck_call.c"
#include "check_hlds.modecheck_call.mh"

#line 52 "check_hlds.modecheck_call.c"
#line 53 "check_hlds.modecheck_call.c"
#ifndef CHECK_HLDS__MODECHECK_CALL_DECL_GUARD
#define CHECK_HLDS__MODECHECK_CALL_DECL_GUARD

#line 57 "check_hlds.modecheck_call.c"
#line 58 "check_hlds.modecheck_call.c"

#endif
#line 61 "check_hlds.modecheck_call.c"

#ifdef _MSC_VER
#define MR_STATIC_LINKAGE extern
#else
#define MR_STATIC_LINKAGE static
#endif

struct mercury_type_0 {
	MR_Word * f1[2];
};
MR_STATIC_LINKAGE const struct mercury_type_0 mercury_common_0[];

struct mercury_type_1 {
	MR_Word * f1;
	MR_Word * f2;
	MR_Integer f3;
	MR_Word * f4;
	MR_Word * f5;
};
MR_STATIC_LINKAGE const struct mercury_type_1 mercury_common_1[];

struct mercury_type_2 {
	MR_Word * f1[3];
};
MR_STATIC_LINKAGE const struct mercury_type_2 mercury_common_2[];

struct mercury_type_3 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[3];
};
MR_STATIC_LINKAGE const struct mercury_type_3 mercury_common_3[];

extern const MR_TypeCtorInfo_Struct
	mercury_data_check_hlds__modecheck_call__type_ctor_info_match_0,
	mercury_data_check_hlds__modecheck_call__type_ctor_info_proc_mode_0;
MR_decl_label10(f_99_104_101_99_107_95_104_108_100_115_95_95_109_111_100_101_99_104_101_99_107_95_99_97_108_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_8_0, 228,10,11,12,13,14,15,16,19,20)
MR_decl_label10(f_99_104_101_99_107_95_104_108_100_115_95_95_109_111_100_101_99_104_101_99_107_95_99_97_108_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_8_0, 21,22,26,25,29,30,31,32,33,34)
MR_decl_label10(f_99_104_101_99_107_95_104_108_100_115_95_95_109_111_100_101_99_104_101_99_107_95_99_97_108_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_8_0, 35,37,38,36,42,43,44,40,45,48)
MR_decl_label10(f_99_104_101_99_107_95_104_108_100_115_95_95_109_111_100_101_99_104_101_99_107_95_99_97_108_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_8_0, 49,50,46,52,53,54,39,8,4,3)
MR_decl_label10(f_99_104_101_99_107_95_104_108_100_115_95_95_109_111_100_101_99_104_101_99_107_95_99_97_108_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_101_99_104_101_99_107_95_99_97_108_108_95_112_114_101_100_95_95_91_55_93_95_48_10_0, 2,3,4,5,6,7,10,9,12,11)
MR_decl_label10(f_99_104_101_99_107_95_104_108_100_115_95_95_109_111_100_101_99_104_101_99_107_95_99_97_108_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_101_99_104_101_99_107_95_99_97_108_108_95_112_114_101_100_95_95_91_55_93_95_48_10_0, 8,16,17,18,23,26,27,28,19,20)
MR_decl_label10(f_99_104_101_99_107_95_104_108_100_115_95_95_109_111_100_101_99_104_101_99_107_95_99_97_108_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_101_99_104_101_99_107_95_99_97_108_108_95_112_114_101_100_95_95_91_55_93_95_48_10_0, 37,34,33,40,41,42,43,44,45,46)
MR_decl_label10(f_99_104_101_99_107_95_104_108_100_115_95_95_109_111_100_101_99_104_101_99_107_95_99_97_108_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_101_99_104_101_99_107_95_99_97_108_108_95_112_114_101_100_95_95_91_55_93_95_48_10_0, 47,48,49,30,50,51,53,54,57,56)
MR_decl_label10(f_99_104_101_99_107_95_104_108_100_115_95_95_109_111_100_101_99_104_101_99_107_95_99_97_108_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_101_99_104_101_99_107_95_99_97_108_108_95_112_114_101_100_95_95_91_55_93_95_48_10_0, 58,59,60,61,64,63,65,66,67,69)
MR_decl_label4(f_99_104_101_99_107_95_104_108_100_115_95_95_109_111_100_101_99_104_101_99_107_95_99_97_108_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_101_99_104_101_99_107_95_99_97_108_108_95_112_114_101_100_95_95_91_55_93_95_48_10_0, 55,70,71,72)
MR_decl_label10(f_99_104_101_99_107_95_104_108_100_115_95_95_109_111_100_101_99_104_101_99_107_95_99_97_108_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_101_99_104_101_99_107_95_102_105_110_100_95_109_97_116_99_104_105_110_103_95_109_111_100_101_115_95_95_91_50_93_95_48_10_0, 48,3,4,5,6,7,8,9,10,11)
MR_decl_label8(f_99_104_101_99_107_95_104_108_100_115_95_95_109_111_100_101_99_104_101_99_107_95_99_97_108_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_101_99_104_101_99_107_95_102_105_110_100_95_109_97_116_99_104_105_110_103_95_109_111_100_101_115_95_95_91_50_93_95_48_10_0, 12,15,13,18,20,22,25,27)
MR_decl_label10(check_hlds__modecheck_call__compare_inst_list_2_6_0, 3,12,10,14,17,20,23,22,25,28)
MR_decl_label10(check_hlds__modecheck_call__compare_inst_list_2_6_0, 31,26,33,35,40,41,38,43,46,47)
MR_decl_label10(check_hlds__modecheck_call__compare_inst_list_2_6_0, 15,49,52,54,55,9,62,60,66,69)
MR_decl_label10(check_hlds__modecheck_call__compare_inst_list_2_6_0, 72,75,73,77,80,83,86,85,88,91)
MR_decl_label10(check_hlds__modecheck_call__compare_inst_list_2_6_0, 89,78,102,100,104,107,110,105,99,115)
MR_decl_label10(check_hlds__modecheck_call__compare_inst_list_2_6_0, 120,121,118,123,126,190,127,191,67,129)
MR_decl_label6(check_hlds__modecheck_call__compare_inst_list_2_6_0, 132,134,135,196,2,1)
MR_decl_label10(check_hlds__modecheck_call__compare_liveness_list_3_0, 3,9,15,16,11,21,35,22,8,88)
MR_decl_label10(check_hlds__modecheck_call__get_var_insts_and_lives_4_0, 51,4,5,6,7,9,10,11,15,17)
MR_decl_label2(check_hlds__modecheck_call__get_var_insts_and_lives_4_0, 13,20)
MR_decl_label8(check_hlds__modecheck_call__modecheck_builtin_cast_7_0, 2,3,4,5,6,7,8,9)
MR_decl_label10(check_hlds__modecheck_call__modecheck_end_of_call_10_0, 2,3,7,9,4,5,10,11,12,13)
MR_decl_label7(check_hlds__modecheck_call__modecheck_end_of_call_10_0, 14,15,16,18,19,20,21)
MR_decl_label9(check_hlds__modecheck_call__modecheck_event_call_5_0, 2,3,4,5,6,7,8,9,11)
MR_decl_label10(check_hlds__modecheck_call__modecheck_higher_order_call_9_0, 2,3,4,5,7,11,10,15,16,17)
MR_decl_label10(check_hlds__modecheck_call__modecheck_higher_order_call_9_0, 19,14,13,21,25,28,23,31,32,33)
MR_decl_label10(check_hlds__modecheck_call__modecheck_higher_order_call_9_0, 34,35,36,37,38,40,41,42,39,8)
MR_decl_label4(check_hlds__modecheck_call__modecheck_higher_order_call_9_0, 9,45,46,48)
MR_decl_label10(check_hlds__modecheck_call__modes_are_identical_bar_cc_4_0, 2,3,4,5,6,7,8,9,11,10)
MR_decl_label10(check_hlds__modecheck_call__modes_are_identical_bar_cc_4_0, 15,16,17,19,18,23,24,25,26,28)
MR_decl_label6(check_hlds__modecheck_call__modes_are_identical_bar_cc_4_0, 29,30,31,35,33,1)
MR_decl_label10(check_hlds__modecheck_call__modes_are_indistinguishable_4_0, 2,3,4,5,6,7,8,9,11,10)
MR_decl_label10(check_hlds__modecheck_call__modes_are_indistinguishable_4_0, 15,16,17,18,20,21,22,23,25,24)
MR_decl_label1(check_hlds__modecheck_call__modes_are_indistinguishable_4_0, 1)
MR_decl_label10(check_hlds__modecheck_call__no_matching_modes_7_0, 2,3,4,6,8,9,10,11,12,14)
MR_decl_label10(check_hlds__modecheck_call__no_matching_modes_7_0, 15,16,17,19,20,21,22,5,24,25)
MR_decl_label3(check_hlds__modecheck_call__no_matching_modes_7_0, 26,27,29)
MR_decl_label3(__Unify___check_hlds__modecheck_call__proc_mode_0_0, 5,9,1)
MR_decl_label5(__Compare___check_hlds__modecheck_call__proc_mode_0_0, 3,2,5,10,39)
MR_decl_static(check_hlds__modecheck_call__get_var_insts_and_lives_4_0)
MR_decl_static(check_hlds__modecheck_call__no_matching_modes_7_0)
MR_decl_static(check_hlds__modecheck_call__modecheck_end_of_call_10_0)
MR_decl_static(check_hlds__modecheck_call__compare_inst_list_2_6_0)
MR_decl_static(check_hlds__modecheck_call__compare_liveness_list_3_0)
MR_def_extern_entry(check_hlds__modecheck_call__modecheck_call_pred_10_0)
MR_def_extern_entry(check_hlds__modecheck_call__modecheck_higher_order_call_9_0)
MR_def_extern_entry(check_hlds__modecheck_call__modecheck_event_call_5_0)
MR_def_extern_entry(check_hlds__modecheck_call__modecheck_builtin_cast_7_0)
MR_def_extern_entry(check_hlds__modecheck_call__modes_are_indistinguishable_4_0)
MR_def_extern_entry(check_hlds__modecheck_call__modes_are_identical_bar_cc_4_0)
MR_decl_static(__Unify___check_hlds__modecheck_call__match_0_0)
MR_decl_static(__Compare___check_hlds__modecheck_call__match_0_0)
MR_decl_static(__Unify___check_hlds__modecheck_call__proc_mode_0_0)
MR_decl_static(__Compare___check_hlds__modecheck_call__proc_mode_0_0)
MR_decl_static(check_hlds__modecheck_call__IntroducedFrom__pred__modecheck_event_call__292__1_2_0)
MR_decl_static(check_hlds__modecheck_call__IntroducedFrom__pred__compare_proc__729__1_3_0)
MR_def_extern_entry(f_99_104_101_99_107_95_104_108_100_115_95_95_109_111_100_101_99_104_101_99_107_95_99_97_108_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_101_99_104_101_99_107_95_99_97_108_108_95_112_114_101_100_95_95_91_55_93_95_48_10_0)
MR_decl_static(f_99_104_101_99_107_95_104_108_100_115_95_95_109_111_100_101_99_104_101_99_107_95_99_97_108_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_101_99_104_101_99_107_95_102_105_110_100_95_109_97_116_99_104_105_110_103_95_109_111_100_101_115_95_95_91_50_93_95_48_10_0)
MR_decl_static(f_99_104_101_99_107_95_104_108_100_115_95_95_109_111_100_101_99_104_101_99_107_95_99_97_108_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_8_0)

extern const MR_TypeCtorInfo_Struct mercury_data_term__type_ctor_info_var_1;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_prog_var_type_0;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_inst_var_type_0;
extern const MR_TypeCtorInfo_Struct mercury_data_term__type_ctor_info_var_1;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_prog_var_type_0;
static const struct mercury_type_0 mercury_common_0[4] =
{
{
{
MR_CTOR1_ADDR(term, var),
MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type)
}
},
{
{
MR_CTOR1_ADDR(term, var),
MR_CTOR0_ADDR(parse_tree__prog_data, inst_var_type)
}
},
{
{
MR_CTOR1_ADDR(term, var),
MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type)
}
},
{
{
MR_CTOR1_ADDR(term, var),
MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type)
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__modecheck_call__modecheck_event_call_5_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_check_hlds__modecheck_util__type_ctor_info_extra_goals_0;
static const struct mercury_type_1 mercury_common_1[1] =
{
{
(MR_Word *) &mercury_data__closure_layout__check_hlds__modecheck_call__modecheck_event_call_5_0_1,
(MR_Word *) (MR_Integer) 0,
2,
MR_CTOR0_ADDR(check_hlds__modecheck_util, extra_goals),
MR_CTOR0_ADDR(check_hlds__modecheck_util, extra_goals)
},
};

extern const MR_TypeCtorInfo_Struct mercury_data_tree234__type_ctor_info_tree234_2;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_mer_type_0;
static const struct mercury_type_2 mercury_common_2[1] =
{
{
{
MR_CTOR_ADDR(tree234, tree234, 2),
MR_COMMON(0,2),
MR_CTOR0_ADDR(parse_tree__prog_data, mer_type)
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__f_99_104_101_99_107_95_104_108_100_115_95_95_109_111_100_101_99_104_101_99_107_95_99_97_108_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_8_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_mer_type_0;
static const struct mercury_type_3 mercury_common_3[1] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__f_99_104_101_99_107_95_104_108_100_115_95_95_109_111_100_101_99_104_101_99_107_95_99_97_108_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_8_0_1,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_COMMON(2,0),
MR_COMMON(0,3),
MR_CTOR0_ADDR(parse_tree__prog_data, mer_type)
}
},
};

static const MR_EnumFunctorDesc mercury_data_check_hlds__modecheck_call__enum_functor_desc_match_0_0 = {
	"better",
	0
};

static const MR_EnumFunctorDesc mercury_data_check_hlds__modecheck_call__enum_functor_desc_match_0_1 = {
	"worse",
	1
};

static const MR_EnumFunctorDesc mercury_data_check_hlds__modecheck_call__enum_functor_desc_match_0_2 = {
	"same",
	2
};

static const MR_EnumFunctorDesc mercury_data_check_hlds__modecheck_call__enum_functor_desc_match_0_3 = {
	"incomparable",
	3
};

const MR_EnumFunctorDescPtr mercury_data_check_hlds__modecheck_call__enum_value_ordered_match_0[] = {
	&mercury_data_check_hlds__modecheck_call__enum_functor_desc_match_0_0,
	&mercury_data_check_hlds__modecheck_call__enum_functor_desc_match_0_1,
	&mercury_data_check_hlds__modecheck_call__enum_functor_desc_match_0_2,
	&mercury_data_check_hlds__modecheck_call__enum_functor_desc_match_0_3
};

const MR_EnumFunctorDescPtr mercury_data_check_hlds__modecheck_call__enum_name_ordered_match_0[] = {
	&mercury_data_check_hlds__modecheck_call__enum_functor_desc_match_0_0,
	&mercury_data_check_hlds__modecheck_call__enum_functor_desc_match_0_3,
	&mercury_data_check_hlds__modecheck_call__enum_functor_desc_match_0_2,
	&mercury_data_check_hlds__modecheck_call__enum_functor_desc_match_0_1
};

const MR_Integer mercury_data_check_hlds__modecheck_call__functor_number_map_match_0[] = {
	0,
	3,
	2,
	1 };
	
const MR_TypeCtorInfo_Struct mercury_data_check_hlds__modecheck_call__type_ctor_info_match_0 = {
	0,
	14,
	-1,
	MR_TYPECTOR_REP_ENUM,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___check_hlds__modecheck_call__match_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___check_hlds__modecheck_call__match_0_0)),
	"check_hlds.modecheck_call",
	"match",
	{ (void *)mercury_data_check_hlds__modecheck_call__enum_name_ordered_match_0 },
	{ (void *)mercury_data_check_hlds__modecheck_call__enum_value_ordered_match_0 },
	4,
	4,
	mercury_data_check_hlds__modecheck_call__functor_number_map_match_0
};
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_inst_var_type_0;

static const MR_FA_TypeInfo_Struct1 mercury_data_term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0 = {
	&mercury_data_term__type_ctor_info_var_1,
{	(MR_TypeInfo) &mercury_data_parse_tree__prog_data__type_ctor_info_inst_var_type_0
}};
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_mer_inst_0;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_mer_inst_0;

static const MR_FA_TypeInfo_Struct2 mercury_data_tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0parse_tree__prog_data__type_ctor_info_mer_inst_0 = {
	&mercury_data_tree234__type_ctor_info_tree234_2,
{	(MR_TypeInfo) &mercury_data_term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0,
	(MR_TypeInfo) &mercury_data_parse_tree__prog_data__type_ctor_info_mer_inst_0
}};
extern const MR_TypeCtorInfo_Struct mercury_data_list__type_ctor_info_list_1;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_mer_mode_0;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_mer_mode_0;

static const MR_FA_TypeInfo_Struct1 mercury_data_list__ti_list_1parse_tree__prog_data__type_ctor_info_mer_mode_0 = {
	&mercury_data_list__type_ctor_info_list_1,
{	(MR_TypeInfo) &mercury_data_parse_tree__prog_data__type_ctor_info_mer_mode_0
}};
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;

const MR_PseudoTypeInfo mercury_data_check_hlds__modecheck_call__field_types_proc_mode_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0parse_tree__prog_data__type_ctor_info_mer_inst_0,
	(MR_PseudoTypeInfo) &mercury_data_list__ti_list_1parse_tree__prog_data__type_ctor_info_mer_mode_0
};

static const MR_DuFunctorDesc mercury_data_check_hlds__modecheck_call__du_functor_desc_proc_mode_0_0 = {
	"proc_mode",
	3,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_check_hlds__modecheck_call__field_types_proc_mode_0_0,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_check_hlds__modecheck_call__du_stag_ordered_proc_mode_0_0[] = {
	&mercury_data_check_hlds__modecheck_call__du_functor_desc_proc_mode_0_0

};

const MR_DuPtagLayout mercury_data_check_hlds__modecheck_call__du_ptag_ordered_proc_mode_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_check_hlds__modecheck_call__du_stag_ordered_proc_mode_0_0 }

};

const MR_DuFunctorDescPtr mercury_data_check_hlds__modecheck_call__du_name_ordered_proc_mode_0[] = {
	&mercury_data_check_hlds__modecheck_call__du_functor_desc_proc_mode_0_0
};

const MR_Integer mercury_data_check_hlds__modecheck_call__functor_number_map_proc_mode_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_check_hlds__modecheck_call__type_ctor_info_proc_mode_0 = {
	0,
	14,
	1,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___check_hlds__modecheck_call__proc_mode_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___check_hlds__modecheck_call__proc_mode_0_0)),
	"check_hlds.modecheck_call",
	"proc_mode",
	{ (void *)mercury_data_check_hlds__modecheck_call__du_name_ordered_proc_mode_0 },
	{ (void *)mercury_data_check_hlds__modecheck_call__du_ptag_ordered_proc_mode_0 },
	1,
	4,
	mercury_data_check_hlds__modecheck_call__functor_number_map_proc_mode_0
};


static const MR_UserClosureId
mercury_data__closure_layout__f_99_104_101_99_107_95_104_108_100_115_95_95_109_111_100_101_99_104_101_99_107_95_99_97_108_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_8_0_1 = {
{
MR_PREDICATE,
"check_hlds.modecheck_call",
"check_hlds.modecheck_call",
"lambda_modecheck_call_m_729",
3,
0
},
"check_hlds.modecheck_call",
"modecheck_call.m",
729,
"14"
};

static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__modecheck_call__modecheck_event_call_5_0_1 = {
{
MR_PREDICATE,
"check_hlds.modecheck_call",
"check_hlds.modecheck_call",
"lambda_modecheck_call_m_292",
2,
0
},
"check_hlds.modecheck_call",
"modecheck_call.m",
292,
"9"
};


MR_decl_entry(check_hlds__mode_info__mode_info_get_module_info_2_0);
MR_decl_entry(check_hlds__mode_info__mode_info_get_instmap_2_0);
MR_decl_entry(check_hlds__mode_info__mode_info_get_var_types_2_0);
MR_decl_entry(hlds__instmap__instmap_lookup_var_3_0);
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_mer_type_0;
MR_decl_entry(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0);
MR_decl_entry(check_hlds__mode_util__normalise_inst_4_0);
MR_decl_entry(check_hlds__mode_info__mode_info_var_is_live_3_0);
MR_decl_entry(check_hlds__inst_match__inst_is_ground_2_0);
MR_decl_entry(check_hlds__inst_match__inst_is_mostly_unique_2_0);

MR_BEGIN_MODULE(check_hlds__modecheck_call_module0)
	MR_init_entry1(check_hlds__modecheck_call__get_var_insts_and_lives_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__modecheck_call__get_var_insts_and_lives_4_0);
	MR_init_label10(check_hlds__modecheck_call__get_var_insts_and_lives_4_0,51,4,5,6,7,9,10,11,15,17)
	MR_init_label2(check_hlds__modecheck_call__get_var_insts_and_lives_4_0,13,20)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'get_var_insts_and_lives'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__modecheck_call__get_var_insts_and_lives_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(check_hlds__modecheck_call__get_var_insts_and_lives_4_0_i51);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(check_hlds__modecheck_call__get_var_insts_and_lives_4_0,51)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_tfield(1, MR_r1, 0);
	MR_sv(3) = MR_tfield(1, MR_r1, 1);
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_get_module_info_2_0,
		check_hlds__modecheck_call__get_var_insts_and_lives_4_0_i4);
MR_def_label(check_hlds__modecheck_call__get_var_insts_and_lives_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_get_instmap_2_0,
		check_hlds__modecheck_call__get_var_insts_and_lives_4_0_i5);
MR_def_label(check_hlds__modecheck_call__get_var_insts_and_lives_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_get_var_types_2_0,
		check_hlds__modecheck_call__get_var_insts_and_lives_4_0_i6);
MR_def_label(check_hlds__modecheck_call__get_var_insts_and_lives_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(5);
	MR_sv(5) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(2);
	}
	MR_np_call_localret_ent(hlds__instmap__instmap_lookup_var_3_0,
		check_hlds__modecheck_call__get_var_insts_and_lives_4_0_i7);
MR_def_label(check_hlds__modecheck_call__get_var_insts_and_lives_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(5);
	MR_sv(5) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r4 = MR_tempr1;
	MR_r5 = MR_sv(2);
	}
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		check_hlds__modecheck_call__get_var_insts_and_lives_4_0_i9);
MR_def_label(check_hlds__modecheck_call__get_var_insts_and_lives_4_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(5);
	}
	MR_np_call_localret_ent(check_hlds__mode_util__normalise_inst_4_0,
		check_hlds__modecheck_call__get_var_insts_and_lives_4_0_i10);
MR_def_label(check_hlds__modecheck_call__get_var_insts_and_lives_4_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_var_is_live_3_0,
		check_hlds__modecheck_call__get_var_insts_and_lives_4_0_i11);
MR_def_label(check_hlds__modecheck_call__get_var_insts_and_lives_4_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(check_hlds__modecheck_call__get_var_insts_and_lives_4_0_i13);
	}
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(check_hlds__inst_match__inst_is_ground_2_0,
		check_hlds__modecheck_call__get_var_insts_and_lives_4_0_i15);
MR_def_label(check_hlds__modecheck_call__get_var_insts_and_lives_4_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__modecheck_call__get_var_insts_and_lives_4_0_i13);
	}
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(check_hlds__inst_match__inst_is_mostly_unique_2_0,
		check_hlds__modecheck_call__get_var_insts_and_lives_4_0_i17);
MR_def_label(check_hlds__modecheck_call__get_var_insts_and_lives_4_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__modecheck_call__get_var_insts_and_lives_4_0_i13);
	}
	MR_r2 = MR_sv(1);
	MR_r1 = MR_sv(3);
	MR_sv(1) = (MR_Integer) 1;
	MR_np_localcall_lab(check_hlds__modecheck_call__get_var_insts_and_lives_4_0,
		check_hlds__modecheck_call__get_var_insts_and_lives_4_0_i20);
MR_def_label(check_hlds__modecheck_call__get_var_insts_and_lives_4_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_r1 = MR_sv(3);
	MR_sv(1) = (MR_Integer) 0;
	MR_np_localcall_lab(check_hlds__modecheck_call__get_var_insts_and_lives_4_0,
		check_hlds__modecheck_call__get_var_insts_and_lives_4_0_i20);
MR_def_label(check_hlds__modecheck_call__get_var_insts_and_lives_4_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr2, 1) = MR_r2;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_tempr2;
	MR_decr_sp_and_return(6);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(check_hlds__mode_info__mode_info_get_preds_2_0);
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_pred_id_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_pred_info_0;
MR_decl_entry(map__lookup_3_0);
MR_decl_entry(hlds__hlds_pred__pred_info_get_markers_2_0);
MR_decl_entry(hlds__hlds_pred__check_marker_2_0);
MR_decl_entry(hlds__hlds_module__module_info_get_preds_2_0);
MR_decl_entry(hlds__hlds_pred__pred_info_get_context_2_0);
MR_decl_entry(list__length_2_0);
MR_decl_entry(list__duplicate_3_0);
MR_decl_entry(parse_tree__prog_mode__inst_lists_to_mode_list_3_0);
MR_decl_entry(check_hlds__mode_info__mode_info_get_instvarset_2_0);
MR_decl_entry(check_hlds__unify_proc__request_proc_9_0);
MR_decl_entry(check_hlds__mode_info__mode_info_set_module_info_3_0);
MR_decl_entry(check_hlds__mode_info__mode_info_set_changed_flag_3_0);
MR_decl_entry(hlds__instmap__init_unreachable_1_0);
MR_decl_entry(check_hlds__mode_info__mode_info_set_instmap_3_0);
MR_decl_entry(fn__hlds__hlds_pred__invalid_proc_id_0_0);
MR_decl_entry(hlds__instmap__instmap_lookup_vars_3_0);
MR_decl_entry(check_hlds__mode_info__mode_info_set_call_arg_context_3_0);
MR_decl_entry(check_hlds__mode_info__mode_info_error_4_0);

MR_BEGIN_MODULE(check_hlds__modecheck_call_module1)
	MR_init_entry1(check_hlds__modecheck_call__no_matching_modes_7_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__modecheck_call__no_matching_modes_7_0);
	MR_init_label10(check_hlds__modecheck_call__no_matching_modes_7_0,2,3,4,6,8,9,10,11,12,14)
	MR_init_label10(check_hlds__modecheck_call__no_matching_modes_7_0,15,16,17,19,20,21,22,5,24,25)
	MR_init_label3(check_hlds__modecheck_call__no_matching_modes_7_0,26,27,29)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'no_matching_modes'/7 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__modecheck_call__no_matching_modes_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r5;
	MR_sv(5) = MR_tempr1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_get_preds_2_0,
		check_hlds__modecheck_call__no_matching_modes_7_0_i2);
MR_def_label(check_hlds__modecheck_call__no_matching_modes_7_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_id);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_info);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(1);
	}
	MR_np_call_localret_ent(map__lookup_3_0,
		check_hlds__modecheck_call__no_matching_modes_7_0_i3);
MR_def_label(check_hlds__modecheck_call__no_matching_modes_7_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_markers_2_0,
		check_hlds__modecheck_call__no_matching_modes_7_0_i4);
MR_def_label(check_hlds__modecheck_call__no_matching_modes_7_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 3;
	MR_np_call_localret_ent(hlds__hlds_pred__check_marker_2_0,
		check_hlds__modecheck_call__no_matching_modes_7_0_i6);
MR_def_label(check_hlds__modecheck_call__no_matching_modes_7_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__modecheck_call__no_matching_modes_7_0_i5);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(check_hlds__modecheck_call__get_var_insts_and_lives_4_0,
		check_hlds__modecheck_call__no_matching_modes_7_0_i8);
MR_def_label(check_hlds__modecheck_call__no_matching_modes_7_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_sv(6) = MR_r2;
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_get_module_info_2_0,
		check_hlds__modecheck_call__no_matching_modes_7_0_i9);
MR_def_label(check_hlds__modecheck_call__no_matching_modes_7_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_preds_2_0,
		check_hlds__modecheck_call__no_matching_modes_7_0_i10);
MR_def_label(check_hlds__modecheck_call__no_matching_modes_7_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_id);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_info);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(1);
	}
	MR_np_call_localret_ent(map__lookup_3_0,
		check_hlds__modecheck_call__no_matching_modes_7_0_i11);
MR_def_label(check_hlds__modecheck_call__no_matching_modes_7_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_context_2_0,
		check_hlds__modecheck_call__no_matching_modes_7_0_i12);
MR_def_label(check_hlds__modecheck_call__no_matching_modes_7_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__length_2_0,
		check_hlds__modecheck_call__no_matching_modes_7_0_i14);
MR_def_label(check_hlds__modecheck_call__no_matching_modes_7_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_inst);
	MR_r2 = MR_tempr1;
	MR_r3 = (MR_Word) MR_tbmkword(0, 1);
	}
	MR_np_call_localret_ent(list__duplicate_3_0,
		check_hlds__modecheck_call__no_matching_modes_7_0_i15);
MR_def_label(check_hlds__modecheck_call__no_matching_modes_7_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(parse_tree__prog_mode__inst_lists_to_mode_list_3_0,
		check_hlds__modecheck_call__no_matching_modes_7_0_i16);
MR_def_label(check_hlds__modecheck_call__no_matching_modes_7_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_get_instvarset_2_0,
		check_hlds__modecheck_call__no_matching_modes_7_0_i17);
MR_def_label(check_hlds__modecheck_call__no_matching_modes_7_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r4, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r4, 0) = MR_sv(6);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_tempr1;
	MR_r5 = MR_sv(3);
	MR_r6 = MR_sv(2);
	MR_r7 = MR_sv(7);
	}
	MR_np_call_localret_ent(check_hlds__unify_proc__request_proc_9_0,
		check_hlds__modecheck_call__no_matching_modes_7_0_i19);
MR_def_label(check_hlds__modecheck_call__no_matching_modes_7_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = MR_r2;
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_set_module_info_3_0,
		check_hlds__modecheck_call__no_matching_modes_7_0_i20);
MR_def_label(check_hlds__modecheck_call__no_matching_modes_7_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 1;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_set_changed_flag_3_0,
		check_hlds__modecheck_call__no_matching_modes_7_0_i21);
MR_def_label(check_hlds__modecheck_call__no_matching_modes_7_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_np_call_localret_ent(hlds__instmap__init_unreachable_1_0,
		check_hlds__modecheck_call__no_matching_modes_7_0_i22);
MR_def_label(check_hlds__modecheck_call__no_matching_modes_7_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_set_instmap_3_0,
		check_hlds__modecheck_call__no_matching_modes_7_0_i29);
MR_def_label(check_hlds__modecheck_call__no_matching_modes_7_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__hlds__hlds_pred__invalid_proc_id_0_0,
		check_hlds__modecheck_call__no_matching_modes_7_0_i24);
MR_def_label(check_hlds__modecheck_call__no_matching_modes_7_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_get_instmap_2_0,
		check_hlds__modecheck_call__no_matching_modes_7_0_i25);
MR_def_label(check_hlds__modecheck_call__no_matching_modes_7_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(hlds__instmap__instmap_lookup_vars_3_0,
		check_hlds__modecheck_call__no_matching_modes_7_0_i26);
MR_def_label(check_hlds__modecheck_call__no_matching_modes_7_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = (MR_Integer) 0;
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_set_call_arg_context_3_0,
		check_hlds__modecheck_call__no_matching_modes_7_0_i27);
MR_def_label(check_hlds__modecheck_call__no_matching_modes_7_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 3, (MR_Integer) 3);
	MR_tfield(3, MR_r2, 0) = (MR_Integer) 6;
	MR_tfield(3, MR_r2, 1) = MR_sv(2);
	MR_tfield(3, MR_r2, 2) = MR_sv(3);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_error_4_0,
		check_hlds__modecheck_call__no_matching_modes_7_0_i29);
MR_def_label(check_hlds__modecheck_call__no_matching_modes_7_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_decr_sp_and_return(8);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(check_hlds__mode_info__mode_info_get_may_init_solver_vars_2_0);
MR_decl_entry(check_hlds__mode_info__mode_info_solver_init_is_supported_1_0);
MR_decl_entry(check_hlds__mode_info__mode_info_set_may_init_solver_vars_3_0);
MR_decl_entry(check_hlds__mode_util__mode_list_get_initial_insts_3_0);
MR_decl_entry(parse_tree__prog_mode__inst_list_apply_substitution_3_0);
MR_decl_entry(check_hlds__mode_util__mode_list_get_final_insts_3_0);
MR_decl_entry(check_hlds__modecheck_util__modecheck_set_var_inst_list_8_0);
MR_decl_entry(hlds__hlds_pred__proc_info_never_succeeds_2_0);

MR_BEGIN_MODULE(check_hlds__modecheck_call_module2)
	MR_init_entry1(check_hlds__modecheck_call__modecheck_end_of_call_10_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__modecheck_call__modecheck_end_of_call_10_0);
	MR_init_label10(check_hlds__modecheck_call__modecheck_end_of_call_10_0,2,3,7,9,4,5,10,11,12,13)
	MR_init_label7(check_hlds__modecheck_call__modecheck_end_of_call_10_0,14,15,16,18,19,20,21)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'modecheck_end_of_call'/10 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__modecheck_call__modecheck_end_of_call_10_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(10);
	MR_sv(10) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_sv(5) = MR_r5;
	MR_sv(6) = MR_r6;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r7;
	MR_sv(9) = MR_tempr1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_get_module_info_2_0,
		check_hlds__modecheck_call__modecheck_end_of_call_10_0_i2);
MR_def_label(check_hlds__modecheck_call__modecheck_end_of_call_10_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_r1 = MR_sv(9);
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_get_may_init_solver_vars_2_0,
		check_hlds__modecheck_call__modecheck_end_of_call_10_0_i3);
MR_def_label(check_hlds__modecheck_call__modecheck_end_of_call_10_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(2),2)) {
		MR_GOTO_LAB(check_hlds__modecheck_call__modecheck_end_of_call_10_0_i5);
	}
	MR_sv(8) = MR_r1;
	MR_r1 = MR_sv(9);
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_solver_init_is_supported_1_0,
		check_hlds__modecheck_call__modecheck_end_of_call_10_0_i7);
MR_def_label(check_hlds__modecheck_call__modecheck_end_of_call_10_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__modecheck_call__modecheck_end_of_call_10_0_i4);
	}
	MR_r1 = (MR_Integer) 0;
	MR_r2 = MR_sv(9);
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_set_may_init_solver_vars_3_0,
		check_hlds__modecheck_call__modecheck_end_of_call_10_0_i9);
MR_def_label(check_hlds__modecheck_call__modecheck_end_of_call_10_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(3);
	MR_sv(9) = MR_r1;
	MR_r1 = MR_sv(7);
	MR_GOTO_LAB(check_hlds__modecheck_call__modecheck_end_of_call_10_0_i10);
MR_def_label(check_hlds__modecheck_call__modecheck_end_of_call_10_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(8);
MR_def_label(check_hlds__modecheck_call__modecheck_end_of_call_10_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(3);
	MR_sv(8) = MR_r1;
	MR_r1 = MR_sv(7);
MR_def_label(check_hlds__modecheck_call__modecheck_end_of_call_10_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r2;
	MR_sv(7) = MR_r1;
	MR_np_call_localret_ent(check_hlds__mode_util__mode_list_get_initial_insts_3_0,
		check_hlds__modecheck_call__modecheck_end_of_call_10_0_i11);
MR_def_label(check_hlds__modecheck_call__modecheck_end_of_call_10_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(parse_tree__prog_mode__inst_list_apply_substitution_3_0,
		check_hlds__modecheck_call__modecheck_end_of_call_10_0_i12);
MR_def_label(check_hlds__modecheck_call__modecheck_end_of_call_10_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(check_hlds__mode_util__mode_list_get_final_insts_3_0,
		check_hlds__modecheck_call__modecheck_end_of_call_10_0_i13);
MR_def_label(check_hlds__modecheck_call__modecheck_end_of_call_10_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(parse_tree__prog_mode__inst_list_apply_substitution_3_0,
		check_hlds__modecheck_call__modecheck_end_of_call_10_0_i14);
MR_def_label(check_hlds__modecheck_call__modecheck_end_of_call_10_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(5);
	MR_r5 = MR_sv(9);
	}
	MR_np_call_localret_ent(check_hlds__modecheck_util__modecheck_set_var_inst_list_8_0,
		check_hlds__modecheck_call__modecheck_end_of_call_10_0_i15);
MR_def_label(check_hlds__modecheck_call__modecheck_end_of_call_10_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_never_succeeds_2_0,
		check_hlds__modecheck_call__modecheck_end_of_call_10_0_i16);
MR_def_label(check_hlds__modecheck_call__modecheck_end_of_call_10_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(check_hlds__modecheck_call__modecheck_end_of_call_10_0_i18);
	}
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_set_may_init_solver_vars_3_0,
		check_hlds__modecheck_call__modecheck_end_of_call_10_0_i21);
MR_def_label(check_hlds__modecheck_call__modecheck_end_of_call_10_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(hlds__instmap__init_unreachable_1_0,
		check_hlds__modecheck_call__modecheck_end_of_call_10_0_i19);
MR_def_label(check_hlds__modecheck_call__modecheck_end_of_call_10_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_set_instmap_3_0,
		check_hlds__modecheck_call__modecheck_end_of_call_10_0_i20);
MR_def_label(check_hlds__modecheck_call__modecheck_end_of_call_10_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_set_may_init_solver_vars_3_0,
		check_hlds__modecheck_call__modecheck_end_of_call_10_0_i21);
MR_def_label(check_hlds__modecheck_call__modecheck_end_of_call_10_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tempr1;
	MR_decr_sp_and_return(10);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(check_hlds__inst_match__inst_matches_initial_4_0);
MR_decl_entry(check_hlds__inst_match__inst_matches_initial_no_implied_modes_4_0);

MR_BEGIN_MODULE(check_hlds__modecheck_call_module3)
	MR_init_entry1(check_hlds__modecheck_call__compare_inst_list_2_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__modecheck_call__compare_inst_list_2_6_0);
	MR_init_label10(check_hlds__modecheck_call__compare_inst_list_2_6_0,3,12,10,14,17,20,23,22,25,28)
	MR_init_label10(check_hlds__modecheck_call__compare_inst_list_2_6_0,31,26,33,35,40,41,38,43,46,47)
	MR_init_label10(check_hlds__modecheck_call__compare_inst_list_2_6_0,15,49,52,54,55,9,62,60,66,69)
	MR_init_label10(check_hlds__modecheck_call__compare_inst_list_2_6_0,72,75,73,77,80,83,86,85,88,91)
	MR_init_label10(check_hlds__modecheck_call__compare_inst_list_2_6_0,89,78,102,100,104,107,110,105,99,115)
	MR_init_label10(check_hlds__modecheck_call__compare_inst_list_2_6_0,120,121,118,123,126,190,127,191,67,129)
	MR_init_label6(check_hlds__modecheck_call__compare_inst_list_2_6_0,132,134,135,196,2,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'compare_inst_list_2'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__modecheck_call__compare_inst_list_2_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(11);
	MR_sv(11) = (MR_Word) MR_succip;
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(check_hlds__modecheck_call__compare_inst_list_2_6_0_i3);
	}
	if (MR_LTAGS_TESTR(MR_r3,0,0)) {
		MR_GOTO_LAB(check_hlds__modecheck_call__compare_inst_list_2_6_0_i1);
	}
	if (MR_LTAGS_TESTR(MR_r5,0,0)) {
		MR_GOTO_LAB(check_hlds__modecheck_call__compare_inst_list_2_6_0_i1);
	}
	MR_r2 = (MR_Integer) 2;
	MR_decr_sp(11);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(check_hlds__modecheck_call__compare_inst_list_2_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r3,0,0)) {
		MR_GOTO_LAB(check_hlds__modecheck_call__compare_inst_list_2_6_0_i1);
	}
	if (MR_LTAGS_TEST(MR_r5,0,0)) {
		MR_GOTO_LAB(check_hlds__modecheck_call__compare_inst_list_2_6_0_i1);
	}
	if (MR_LTAGS_TESTR(MR_r4,0,0)) {
		MR_GOTO_LAB(check_hlds__modecheck_call__compare_inst_list_2_6_0_i9);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tempr4 = MR_r5;
	MR_tempr1 = MR_tfield(1, MR_tempr4, 0);
	MR_sv(8) = MR_tfield(1, MR_tempr4, 1);
	MR_tempr5 = MR_r3;
	MR_tempr2 = MR_tfield(1, MR_tempr5, 0);
	MR_sv(6) = MR_tfield(1, MR_tempr5, 1);
	MR_tempr3 = MR_tfield(1, MR_r2, 0);
	MR_sv(4) = MR_tfield(1, MR_r2, 1);
	MR_sv(1) = MR_r1;
	MR_sv(5) = MR_tempr3;
	MR_sv(7) = MR_tempr2;
	MR_sv(9) = MR_tempr1;
	MR_r1 = MR_tempr2;
	MR_r2 = MR_tempr3;
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(1);
	}
	MR_np_call_localret_ent(check_hlds__inst_match__inst_matches_initial_4_0,
		check_hlds__modecheck_call__compare_inst_list_2_6_0_i12);
MR_def_label(check_hlds__modecheck_call__compare_inst_list_2_6_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__modecheck_call__compare_inst_list_2_6_0_i10);
	}
	MR_r4 = MR_sv(1);
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(7);
	MR_r3 = MR_sv(9);
	MR_sv(2) = (MR_Integer) 1;
	MR_GOTO_LAB(check_hlds__modecheck_call__compare_inst_list_2_6_0_i14);
MR_def_label(check_hlds__modecheck_call__compare_inst_list_2_6_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_sv(5);
	MR_tempr2 = MR_sv(7);
	MR_tempr3 = MR_sv(9);
	MR_r4 = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_tempr2;
	MR_r3 = MR_tempr3;
	MR_sv(2) = (MR_Integer) 0;
	}
MR_def_label(check_hlds__modecheck_call__compare_inst_list_2_6_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r4;
	MR_sv(5) = MR_r1;
	MR_sv(7) = MR_r2;
	MR_sv(9) = MR_r3;
	MR_np_call_localret_ent(check_hlds__inst_match__inst_matches_initial_4_0,
		check_hlds__modecheck_call__compare_inst_list_2_6_0_i17);
MR_def_label(check_hlds__modecheck_call__compare_inst_list_2_6_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__modecheck_call__compare_inst_list_2_6_0_i15);
	}
	if (MR_INT_NE(MR_sv(2),0)) {
		MR_GOTO_LAB(check_hlds__modecheck_call__compare_inst_list_2_6_0_i20);
	}
	MR_r1 = MR_sv(1);
	MR_sv(1) = (MR_Integer) 0;
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(6);
	MR_r5 = MR_sv(8);
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	MR_np_localcall_lab(check_hlds__modecheck_call__compare_inst_list_2_6_0,
		check_hlds__modecheck_call__compare_inst_list_2_6_0_i35);
MR_def_label(check_hlds__modecheck_call__compare_inst_list_2_6_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(9);
	MR_r4 = MR_sv(1);
	MR_np_call_localret_ent(check_hlds__inst_match__inst_matches_initial_no_implied_modes_4_0,
		check_hlds__modecheck_call__compare_inst_list_2_6_0_i23);
MR_def_label(check_hlds__modecheck_call__compare_inst_list_2_6_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__modecheck_call__compare_inst_list_2_6_0_i22);
	}
	MR_r4 = MR_sv(1);
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(7);
	MR_r3 = MR_sv(9);
	MR_sv(2) = (MR_Integer) 1;
	MR_GOTO_LAB(check_hlds__modecheck_call__compare_inst_list_2_6_0_i25);
MR_def_label(check_hlds__modecheck_call__compare_inst_list_2_6_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_sv(1);
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(7);
	MR_r3 = MR_sv(9);
	MR_sv(2) = (MR_Integer) 0;
MR_def_label(check_hlds__modecheck_call__compare_inst_list_2_6_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r4;
	MR_np_call_localret_ent(check_hlds__inst_match__inst_matches_initial_no_implied_modes_4_0,
		check_hlds__modecheck_call__compare_inst_list_2_6_0_i28);
MR_def_label(check_hlds__modecheck_call__compare_inst_list_2_6_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__modecheck_call__compare_inst_list_2_6_0_i26);
	}
	if (MR_INT_NE(MR_sv(2),0)) {
		MR_GOTO_LAB(check_hlds__modecheck_call__compare_inst_list_2_6_0_i31);
	}
	MR_r1 = MR_sv(1);
	MR_sv(1) = (MR_Integer) 0;
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(6);
	MR_r5 = MR_sv(8);
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	MR_np_localcall_lab(check_hlds__modecheck_call__compare_inst_list_2_6_0,
		check_hlds__modecheck_call__compare_inst_list_2_6_0_i35);
MR_def_label(check_hlds__modecheck_call__compare_inst_list_2_6_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_sv(1) = (MR_Integer) 2;
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(6);
	MR_r5 = MR_sv(8);
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	MR_np_localcall_lab(check_hlds__modecheck_call__compare_inst_list_2_6_0,
		check_hlds__modecheck_call__compare_inst_list_2_6_0_i35);
MR_def_label(check_hlds__modecheck_call__compare_inst_list_2_6_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_sv(1);
	if (MR_INT_NE(MR_sv(2),0)) {
		MR_GOTO_LAB(check_hlds__modecheck_call__compare_inst_list_2_6_0_i33);
	}
	MR_r1 = MR_r4;
	MR_sv(1) = (MR_Integer) 3;
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(6);
	MR_r5 = MR_sv(8);
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	MR_np_localcall_lab(check_hlds__modecheck_call__compare_inst_list_2_6_0,
		check_hlds__modecheck_call__compare_inst_list_2_6_0_i35);
MR_def_label(check_hlds__modecheck_call__compare_inst_list_2_6_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r4;
	MR_sv(1) = (MR_Integer) 1;
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(6);
	MR_r5 = MR_sv(8);
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	MR_np_localcall_lab(check_hlds__modecheck_call__compare_inst_list_2_6_0,
		check_hlds__modecheck_call__compare_inst_list_2_6_0_i35);
MR_def_label(check_hlds__modecheck_call__compare_inst_list_2_6_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__modecheck_call__compare_inst_list_2_6_0_i1);
	}
	if (MR_INT_NE(MR_sv(1),0)) {
		MR_GOTO_LAB(check_hlds__modecheck_call__compare_inst_list_2_6_0_i38);
	}
	if (MR_INT_NE(MR_r2,0)) {
		MR_GOTO_LAB(check_hlds__modecheck_call__compare_inst_list_2_6_0_i40);
	}
	MR_r2 = (MR_Integer) 0;
	MR_succip_word = MR_sv(11);
	MR_decr_sp(11);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(check_hlds__modecheck_call__compare_inst_list_2_6_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r2,3)) {
		MR_GOTO_LAB(check_hlds__modecheck_call__compare_inst_list_2_6_0_i41);
	}
	MR_r2 = (MR_Integer) 3;
	MR_succip_word = MR_sv(11);
	MR_decr_sp(11);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(check_hlds__modecheck_call__compare_inst_list_2_6_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r2,2)) {
		MR_GOTO_LAB(check_hlds__modecheck_call__compare_inst_list_2_6_0_i190);
	}
	MR_r2 = (MR_Integer) 0;
	MR_succip_word = MR_sv(11);
	MR_decr_sp(11);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(check_hlds__modecheck_call__compare_inst_list_2_6_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(1),3)) {
		MR_GOTO_LAB(check_hlds__modecheck_call__compare_inst_list_2_6_0_i43);
	}
	MR_r2 = (MR_Integer) 3;
	MR_succip_word = MR_sv(11);
	MR_decr_sp(11);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(check_hlds__modecheck_call__compare_inst_list_2_6_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_EQ(MR_sv(1),2)) {
		MR_GOTO_LAB(check_hlds__modecheck_call__compare_inst_list_2_6_0_i2);
	}
	if (MR_INT_NE(MR_r2,0)) {
		MR_GOTO_LAB(check_hlds__modecheck_call__compare_inst_list_2_6_0_i46);
	}
	MR_r2 = (MR_Integer) 3;
	MR_succip_word = MR_sv(11);
	MR_decr_sp(11);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(check_hlds__modecheck_call__compare_inst_list_2_6_0,46)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r2,3)) {
		MR_GOTO_LAB(check_hlds__modecheck_call__compare_inst_list_2_6_0_i47);
	}
	MR_r2 = (MR_Integer) 3;
	MR_succip_word = MR_sv(11);
	MR_decr_sp(11);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(check_hlds__modecheck_call__compare_inst_list_2_6_0,47)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r2,2)) {
		MR_GOTO_LAB(check_hlds__modecheck_call__compare_inst_list_2_6_0_i191);
	}
	MR_r2 = (MR_Integer) 1;
	MR_succip_word = MR_sv(11);
	MR_decr_sp(11);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(check_hlds__modecheck_call__compare_inst_list_2_6_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_sv(1);
	MR_r1 = MR_r4;
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(6);
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	MR_r5 = MR_sv(8);
	MR_np_localcall_lab(check_hlds__modecheck_call__compare_inst_list_2_6_0,
		check_hlds__modecheck_call__compare_inst_list_2_6_0_i49);
MR_def_label(check_hlds__modecheck_call__compare_inst_list_2_6_0,49)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__modecheck_call__compare_inst_list_2_6_0_i1);
	}
	if (MR_INT_NE(MR_sv(2),0)) {
		MR_GOTO_LAB(check_hlds__modecheck_call__compare_inst_list_2_6_0_i52);
	}
	MR_r2 = (MR_Integer) 3;
	MR_succip_word = MR_sv(11);
	MR_decr_sp(11);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(check_hlds__modecheck_call__compare_inst_list_2_6_0,52)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r2,0)) {
		MR_GOTO_LAB(check_hlds__modecheck_call__compare_inst_list_2_6_0_i54);
	}
	MR_r2 = (MR_Integer) 3;
	MR_succip_word = MR_sv(11);
	MR_decr_sp(11);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(check_hlds__modecheck_call__compare_inst_list_2_6_0,54)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r2,3)) {
		MR_GOTO_LAB(check_hlds__modecheck_call__compare_inst_list_2_6_0_i55);
	}
	MR_r2 = (MR_Integer) 3;
	MR_succip_word = MR_sv(11);
	MR_decr_sp(11);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(check_hlds__modecheck_call__compare_inst_list_2_6_0,55)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r2,2)) {
		MR_GOTO_LAB(check_hlds__modecheck_call__compare_inst_list_2_6_0_i196);
	}
	MR_r2 = (MR_Integer) 1;
	MR_succip_word = MR_sv(11);
	MR_decr_sp(11);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(check_hlds__modecheck_call__compare_inst_list_2_6_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr1 = MR_tfield(1, MR_r4, 0);
	if (MR_LTAGS_TEST(MR_tempr1,0,0)) {
		MR_GOTO_LAB(check_hlds__modecheck_call__compare_inst_list_2_6_0_i1);
	}
	MR_tag_alloc_heap(MR_sv(3), 1, (MR_Integer) 1);
	MR_tfield(1, MR_sv(3), 0) = MR_tfield(1, MR_tempr1, 0);
	MR_tempr5 = MR_r5;
	MR_tempr2 = MR_tfield(1, MR_tempr5, 0);
	MR_sv(8) = MR_tfield(1, MR_tempr5, 1);
	MR_tempr6 = MR_r3;
	MR_tempr3 = MR_tfield(1, MR_tempr6, 0);
	MR_sv(6) = MR_tfield(1, MR_tempr6, 1);
	MR_tempr4 = MR_tfield(1, MR_r2, 0);
	MR_sv(4) = MR_tfield(1, MR_r2, 1);
	MR_sv(2) = MR_tfield(1, MR_tempr1, 1);
	MR_sv(1) = MR_r1;
	MR_sv(5) = MR_tempr4;
	MR_sv(7) = MR_tempr3;
	MR_sv(9) = MR_tempr2;
	MR_r1 = MR_tempr3;
	MR_r2 = MR_tempr4;
	MR_r3 = MR_tempr2;
	MR_r4 = MR_sv(1);
	}
	MR_np_call_localret_ent(check_hlds__inst_match__inst_matches_initial_4_0,
		check_hlds__modecheck_call__compare_inst_list_2_6_0_i62);
MR_def_label(check_hlds__modecheck_call__compare_inst_list_2_6_0,62)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__modecheck_call__compare_inst_list_2_6_0_i60);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_r5 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(2);
	MR_r4 = MR_sv(1);
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(7);
	MR_r3 = MR_sv(9);
	MR_sv(10) = (MR_Integer) 1;
	MR_GOTO_LAB(check_hlds__modecheck_call__compare_inst_list_2_6_0_i66);
	}
MR_def_label(check_hlds__modecheck_call__compare_inst_list_2_6_0,60)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr1 = MR_sv(5);
	MR_tempr2 = MR_sv(7);
	MR_tempr3 = MR_sv(9);
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr4, 0) = MR_sv(2);
	MR_r4 = MR_r1;
	MR_sv(2) = MR_tempr4;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_tempr2;
	MR_r3 = MR_tempr3;
	MR_sv(10) = (MR_Integer) 0;
	}
MR_def_label(check_hlds__modecheck_call__compare_inst_list_2_6_0,66)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r4;
	MR_sv(5) = MR_r1;
	MR_sv(7) = MR_r2;
	MR_sv(9) = MR_r3;
	MR_np_call_localret_ent(check_hlds__inst_match__inst_matches_initial_4_0,
		check_hlds__modecheck_call__compare_inst_list_2_6_0_i69);
MR_def_label(check_hlds__modecheck_call__compare_inst_list_2_6_0,69)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__modecheck_call__compare_inst_list_2_6_0_i67);
	}
	if (MR_INT_NE(MR_sv(10),0)) {
		MR_GOTO_LAB(check_hlds__modecheck_call__compare_inst_list_2_6_0_i72);
	}
	MR_r1 = MR_sv(1);
	MR_sv(1) = (MR_Integer) 0;
	MR_r4 = MR_sv(2);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(6);
	MR_r5 = MR_sv(8);
	MR_np_localcall_lab(check_hlds__modecheck_call__compare_inst_list_2_6_0,
		check_hlds__modecheck_call__compare_inst_list_2_6_0_i115);
MR_def_label(check_hlds__modecheck_call__compare_inst_list_2_6_0,72)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(1, MR_sv(3), 0);
	MR_sv(3) = MR_r1;
	MR_r2 = MR_sv(7);
	MR_r3 = MR_sv(9);
	MR_r4 = MR_sv(1);
	MR_np_call_localret_ent(check_hlds__inst_match__inst_matches_initial_no_implied_modes_4_0,
		check_hlds__modecheck_call__compare_inst_list_2_6_0_i75);
MR_def_label(check_hlds__modecheck_call__compare_inst_list_2_6_0,75)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__modecheck_call__compare_inst_list_2_6_0_i73);
	}
	MR_r4 = MR_sv(1);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(9);
	MR_r1 = MR_sv(3);
	MR_sv(3) = (MR_Integer) 1;
	MR_GOTO_LAB(check_hlds__modecheck_call__compare_inst_list_2_6_0_i77);
MR_def_label(check_hlds__modecheck_call__compare_inst_list_2_6_0,73)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_r4 = MR_sv(1);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(9);
	MR_sv(3) = (MR_Integer) 0;
MR_def_label(check_hlds__modecheck_call__compare_inst_list_2_6_0,77)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r4;
	MR_sv(5) = MR_r2;
	MR_sv(9) = MR_r3;
	MR_np_call_localret_ent(check_hlds__inst_match__inst_matches_initial_no_implied_modes_4_0,
		check_hlds__modecheck_call__compare_inst_list_2_6_0_i80);
MR_def_label(check_hlds__modecheck_call__compare_inst_list_2_6_0,80)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__modecheck_call__compare_inst_list_2_6_0_i78);
	}
	if (MR_INT_NE(MR_sv(3),0)) {
		MR_GOTO_LAB(check_hlds__modecheck_call__compare_inst_list_2_6_0_i83);
	}
	MR_r1 = MR_sv(1);
	MR_sv(1) = (MR_Integer) 0;
	MR_r4 = MR_sv(2);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(6);
	MR_r5 = MR_sv(8);
	MR_np_localcall_lab(check_hlds__modecheck_call__compare_inst_list_2_6_0,
		check_hlds__modecheck_call__compare_inst_list_2_6_0_i115);
MR_def_label(check_hlds__modecheck_call__compare_inst_list_2_6_0,83)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(9);
	MR_r4 = MR_sv(1);
	MR_np_call_localret_ent(check_hlds__inst_match__inst_matches_initial_no_implied_modes_4_0,
		check_hlds__modecheck_call__compare_inst_list_2_6_0_i86);
MR_def_label(check_hlds__modecheck_call__compare_inst_list_2_6_0,86)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__modecheck_call__compare_inst_list_2_6_0_i85);
	}
	MR_r4 = MR_sv(1);
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(7);
	MR_r3 = MR_sv(9);
	MR_sv(3) = (MR_Integer) 1;
	MR_GOTO_LAB(check_hlds__modecheck_call__compare_inst_list_2_6_0_i88);
MR_def_label(check_hlds__modecheck_call__compare_inst_list_2_6_0,85)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_sv(1);
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(7);
	MR_r3 = MR_sv(9);
	MR_sv(3) = (MR_Integer) 0;
MR_def_label(check_hlds__modecheck_call__compare_inst_list_2_6_0,88)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r4;
	MR_np_call_localret_ent(check_hlds__inst_match__inst_matches_initial_no_implied_modes_4_0,
		check_hlds__modecheck_call__compare_inst_list_2_6_0_i91);
MR_def_label(check_hlds__modecheck_call__compare_inst_list_2_6_0,91)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__modecheck_call__compare_inst_list_2_6_0_i89);
	}
	if (MR_INT_NE(MR_sv(3),0)) {
		MR_GOTO_LAB(check_hlds__modecheck_call__compare_inst_list_2_6_0_i110);
	}
	MR_r1 = MR_sv(1);
	MR_sv(1) = (MR_Integer) 0;
	MR_r4 = MR_sv(2);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(6);
	MR_r5 = MR_sv(8);
	MR_np_localcall_lab(check_hlds__modecheck_call__compare_inst_list_2_6_0,
		check_hlds__modecheck_call__compare_inst_list_2_6_0_i115);
MR_def_label(check_hlds__modecheck_call__compare_inst_list_2_6_0,89)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_sv(1);
	if (MR_INT_NE(MR_sv(3),0)) {
		MR_GOTO_LAB(check_hlds__modecheck_call__compare_inst_list_2_6_0_i99);
	}
	MR_r1 = MR_r4;
	MR_sv(1) = (MR_Integer) 3;
	MR_r4 = MR_sv(2);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(6);
	MR_r5 = MR_sv(8);
	MR_np_localcall_lab(check_hlds__modecheck_call__compare_inst_list_2_6_0,
		check_hlds__modecheck_call__compare_inst_list_2_6_0_i115);
MR_def_label(check_hlds__modecheck_call__compare_inst_list_2_6_0,78)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_sv(1);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(9);
	if (MR_INT_NE(MR_sv(3),0)) {
		MR_GOTO_LAB(check_hlds__modecheck_call__compare_inst_list_2_6_0_i99);
	}
	MR_r1 = MR_sv(7);
	MR_np_call_localret_ent(check_hlds__inst_match__inst_matches_initial_no_implied_modes_4_0,
		check_hlds__modecheck_call__compare_inst_list_2_6_0_i102);
MR_def_label(check_hlds__modecheck_call__compare_inst_list_2_6_0,102)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__modecheck_call__compare_inst_list_2_6_0_i100);
	}
	MR_r4 = MR_sv(1);
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(7);
	MR_r3 = MR_sv(9);
	MR_sv(3) = (MR_Integer) 1;
	MR_GOTO_LAB(check_hlds__modecheck_call__compare_inst_list_2_6_0_i104);
MR_def_label(check_hlds__modecheck_call__compare_inst_list_2_6_0,100)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_sv(1);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(9);
	MR_r1 = MR_r2;
	MR_r2 = MR_sv(7);
	MR_sv(3) = (MR_Integer) 0;
MR_def_label(check_hlds__modecheck_call__compare_inst_list_2_6_0,104)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r4;
	MR_np_call_localret_ent(check_hlds__inst_match__inst_matches_initial_no_implied_modes_4_0,
		check_hlds__modecheck_call__compare_inst_list_2_6_0_i107);
MR_def_label(check_hlds__modecheck_call__compare_inst_list_2_6_0,107)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__modecheck_call__compare_inst_list_2_6_0_i105);
	}
	if (MR_INT_NE(MR_sv(3),0)) {
		MR_GOTO_LAB(check_hlds__modecheck_call__compare_inst_list_2_6_0_i110);
	}
	MR_r1 = MR_sv(1);
	MR_sv(1) = (MR_Integer) 0;
	MR_r4 = MR_sv(2);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(6);
	MR_r5 = MR_sv(8);
	MR_np_localcall_lab(check_hlds__modecheck_call__compare_inst_list_2_6_0,
		check_hlds__modecheck_call__compare_inst_list_2_6_0_i115);
MR_def_label(check_hlds__modecheck_call__compare_inst_list_2_6_0,110)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_sv(1) = (MR_Integer) 2;
	MR_r4 = MR_sv(2);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(6);
	MR_r5 = MR_sv(8);
	MR_np_localcall_lab(check_hlds__modecheck_call__compare_inst_list_2_6_0,
		check_hlds__modecheck_call__compare_inst_list_2_6_0_i115);
MR_def_label(check_hlds__modecheck_call__compare_inst_list_2_6_0,105)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_sv(1);
	if (MR_INT_NE(MR_sv(3),0)) {
		MR_GOTO_LAB(check_hlds__modecheck_call__compare_inst_list_2_6_0_i99);
	}
	MR_r1 = MR_r4;
	MR_sv(1) = (MR_Integer) 3;
	MR_r4 = MR_sv(2);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(6);
	MR_r5 = MR_sv(8);
	MR_np_localcall_lab(check_hlds__modecheck_call__compare_inst_list_2_6_0,
		check_hlds__modecheck_call__compare_inst_list_2_6_0_i115);
MR_def_label(check_hlds__modecheck_call__compare_inst_list_2_6_0,99)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r4;
	MR_sv(1) = (MR_Integer) 1;
	MR_r4 = MR_sv(2);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(6);
	MR_r5 = MR_sv(8);
	MR_np_localcall_lab(check_hlds__modecheck_call__compare_inst_list_2_6_0,
		check_hlds__modecheck_call__compare_inst_list_2_6_0_i115);
MR_def_label(check_hlds__modecheck_call__compare_inst_list_2_6_0,115)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__modecheck_call__compare_inst_list_2_6_0_i1);
	}
	if (MR_INT_NE(MR_sv(1),0)) {
		MR_GOTO_LAB(check_hlds__modecheck_call__compare_inst_list_2_6_0_i118);
	}
	if (MR_INT_NE(MR_r2,0)) {
		MR_GOTO_LAB(check_hlds__modecheck_call__compare_inst_list_2_6_0_i120);
	}
	MR_r2 = (MR_Integer) 0;
	MR_succip_word = MR_sv(11);
	MR_decr_sp(11);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(check_hlds__modecheck_call__compare_inst_list_2_6_0,120)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r2,3)) {
		MR_GOTO_LAB(check_hlds__modecheck_call__compare_inst_list_2_6_0_i121);
	}
	MR_r2 = (MR_Integer) 3;
	MR_succip_word = MR_sv(11);
	MR_decr_sp(11);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(check_hlds__modecheck_call__compare_inst_list_2_6_0,121)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r2,2)) {
		MR_GOTO_LAB(check_hlds__modecheck_call__compare_inst_list_2_6_0_i190);
	}
	MR_r2 = (MR_Integer) 0;
	MR_succip_word = MR_sv(11);
	MR_decr_sp(11);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(check_hlds__modecheck_call__compare_inst_list_2_6_0,118)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(1),3)) {
		MR_GOTO_LAB(check_hlds__modecheck_call__compare_inst_list_2_6_0_i123);
	}
	MR_r2 = (MR_Integer) 3;
	MR_succip_word = MR_sv(11);
	MR_decr_sp(11);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(check_hlds__modecheck_call__compare_inst_list_2_6_0,123)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_EQ(MR_sv(1),2)) {
		MR_GOTO_LAB(check_hlds__modecheck_call__compare_inst_list_2_6_0_i2);
	}
	if (MR_INT_NE(MR_r2,0)) {
		MR_GOTO_LAB(check_hlds__modecheck_call__compare_inst_list_2_6_0_i126);
	}
	MR_r2 = (MR_Integer) 3;
	MR_succip_word = MR_sv(11);
	MR_decr_sp(11);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(check_hlds__modecheck_call__compare_inst_list_2_6_0,126)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r2,3)) {
		MR_GOTO_LAB(check_hlds__modecheck_call__compare_inst_list_2_6_0_i127);
	}
MR_def_label(check_hlds__modecheck_call__compare_inst_list_2_6_0,190)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 3;
	MR_succip_word = MR_sv(11);
	MR_decr_sp(11);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(check_hlds__modecheck_call__compare_inst_list_2_6_0,127)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r2,2)) {
		MR_GOTO_LAB(check_hlds__modecheck_call__compare_inst_list_2_6_0_i196);
	}
MR_def_label(check_hlds__modecheck_call__compare_inst_list_2_6_0,191)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 1;
	MR_succip_word = MR_sv(11);
	MR_decr_sp(11);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(check_hlds__modecheck_call__compare_inst_list_2_6_0,67)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_sv(1);
	MR_r1 = MR_r4;
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(6);
	MR_r4 = MR_sv(2);
	MR_r5 = MR_sv(8);
	MR_np_localcall_lab(check_hlds__modecheck_call__compare_inst_list_2_6_0,
		check_hlds__modecheck_call__compare_inst_list_2_6_0_i129);
MR_def_label(check_hlds__modecheck_call__compare_inst_list_2_6_0,129)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__modecheck_call__compare_inst_list_2_6_0_i1);
	}
	if (MR_INT_NE(MR_sv(10),0)) {
		MR_GOTO_LAB(check_hlds__modecheck_call__compare_inst_list_2_6_0_i132);
	}
	MR_r2 = (MR_Integer) 3;
	MR_succip_word = MR_sv(11);
	MR_decr_sp(11);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(check_hlds__modecheck_call__compare_inst_list_2_6_0,132)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r2,0)) {
		MR_GOTO_LAB(check_hlds__modecheck_call__compare_inst_list_2_6_0_i134);
	}
	MR_r2 = (MR_Integer) 3;
	MR_succip_word = MR_sv(11);
	MR_decr_sp(11);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(check_hlds__modecheck_call__compare_inst_list_2_6_0,134)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r2,3)) {
		MR_GOTO_LAB(check_hlds__modecheck_call__compare_inst_list_2_6_0_i135);
	}
	MR_r2 = (MR_Integer) 3;
	MR_succip_word = MR_sv(11);
	MR_decr_sp(11);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(check_hlds__modecheck_call__compare_inst_list_2_6_0,135)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r2,2)) {
		MR_GOTO_LAB(check_hlds__modecheck_call__compare_inst_list_2_6_0_i191);
	}
MR_def_label(check_hlds__modecheck_call__compare_inst_list_2_6_0,196)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 1;
	MR_succip_word = MR_sv(11);
	MR_decr_sp(11);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(check_hlds__modecheck_call__compare_inst_list_2_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(11);
	MR_decr_sp(11);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(check_hlds__modecheck_call__compare_inst_list_2_6_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(11);
	MR_decr_sp(11);
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(require__unexpected_3_0);

MR_BEGIN_MODULE(check_hlds__modecheck_call_module4)
	MR_init_entry1(check_hlds__modecheck_call__compare_liveness_list_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__modecheck_call__compare_liveness_list_3_0);
	MR_init_label10(check_hlds__modecheck_call__compare_liveness_list_3_0,3,9,15,16,11,21,35,22,8,88)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'compare_liveness_list'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__modecheck_call__compare_liveness_list_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(check_hlds__modecheck_call__compare_liveness_list_3_0_i3);
	}
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(check_hlds__modecheck_call__compare_liveness_list_3_0_i8);
	}
	MR_r1 = (MR_Integer) 2;
	MR_proceed();
MR_def_label(check_hlds__modecheck_call__compare_liveness_list_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r2,0,0)) {
		MR_GOTO_LAB(check_hlds__modecheck_call__compare_liveness_list_3_0_i8);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_tfield(1, MR_r2, 0);
	MR_sv(2) = MR_tfield(1, MR_r1, 0);
	MR_r1 = MR_tfield(1, MR_r1, 1);
	MR_r2 = MR_tfield(1, MR_r2, 1);
	MR_np_localcall_lab(check_hlds__modecheck_call__compare_liveness_list_3_0,
		check_hlds__modecheck_call__compare_liveness_list_3_0_i9);
MR_def_label(check_hlds__modecheck_call__compare_liveness_list_3_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(2),1)) {
		MR_GOTO_LAB(check_hlds__modecheck_call__compare_liveness_list_3_0_i11);
	}
	if (MR_INT_EQ(MR_sv(1),1)) {
		MR_GOTO_LAB(check_hlds__modecheck_call__compare_liveness_list_3_0_i88);
	}
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(check_hlds__modecheck_call__compare_liveness_list_3_0_i15);
	}
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(3);
MR_def_label(check_hlds__modecheck_call__compare_liveness_list_3_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,3)) {
		MR_GOTO_LAB(check_hlds__modecheck_call__compare_liveness_list_3_0_i16);
	}
	MR_r1 = (MR_Integer) 3;
	MR_decr_sp_and_return(3);
MR_def_label(check_hlds__modecheck_call__compare_liveness_list_3_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,2)) {
		MR_GOTO_LAB(check_hlds__modecheck_call__compare_liveness_list_3_0_i35);
	}
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(3);
MR_def_label(check_hlds__modecheck_call__compare_liveness_list_3_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(1),1)) {
		MR_GOTO_LAB(check_hlds__modecheck_call__compare_liveness_list_3_0_i88);
	}
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(check_hlds__modecheck_call__compare_liveness_list_3_0_i21);
	}
	MR_r1 = (MR_Integer) 3;
	MR_decr_sp_and_return(3);
MR_def_label(check_hlds__modecheck_call__compare_liveness_list_3_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,3)) {
		MR_GOTO_LAB(check_hlds__modecheck_call__compare_liveness_list_3_0_i22);
	}
MR_def_label(check_hlds__modecheck_call__compare_liveness_list_3_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 3;
	MR_decr_sp_and_return(3);
MR_def_label(check_hlds__modecheck_call__compare_liveness_list_3_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(check_hlds__modecheck_call__compare_liveness_list_3_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("check_hlds.modecheck_call", 25);
	MR_r2 = (MR_Word) MR_string_const("predicate \140check_hlds.modecheck_call.compare_liveness_list\'/3", 61);
	MR_r3 = (MR_Word) MR_string_const("length mismatch", 15);
	MR_np_tailcall_ent(require__unexpected_3_0);
MR_def_label(check_hlds__modecheck_call__compare_liveness_list_3_0,88)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__modecheck_call_module5)
	MR_init_entry1(check_hlds__modecheck_call__modecheck_call_pred_10_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__modecheck_call__modecheck_call_pred_10_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'modecheck_call_pred'/10 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__check_hlds__modecheck_call__modecheck_call_pred_10_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r5 = MR_r6;
	MR_np_tailcall_ent(f_99_104_101_99_107_95_104_108_100_115_95_95_109_111_100_101_99_104_101_99_107_95_99_97_108_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_101_99_104_101_99_107_95_99_97_108_108_95_112_114_101_100_95_95_91_55_93_95_48_10_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(check_hlds__inst_match__inst_expand_3_0);
MR_decl_entry(parse_tree__prog_type__type_is_higher_order_details_5_0);
MR_decl_entry(fn__list__length_1_0);
MR_decl_entry(fn__check_hlds__inst_util__pred_inst_info_standard_func_mode_1_0);
MR_decl_entry(check_hlds__mode_info__mode_info_var_is_locked_3_0);
MR_decl_entry(set__singleton_set_2_1);
MR_decl_entry(check_hlds__mode_util__get_arg_lives_3_0);
MR_decl_entry(check_hlds__modecheck_util__modecheck_var_list_is_live_no_exact_match_5_0);
MR_decl_entry(check_hlds__modecheck_util__modecheck_var_has_inst_list_no_exact_match_6_0);
MR_decl_entry(parse_tree__prog_data__determinism_components_3_0);

MR_BEGIN_MODULE(check_hlds__modecheck_call_module6)
	MR_init_entry1(check_hlds__modecheck_call__modecheck_higher_order_call_9_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__modecheck_call__modecheck_higher_order_call_9_0);
	MR_init_label10(check_hlds__modecheck_call__modecheck_higher_order_call_9_0,2,3,4,5,7,11,10,15,16,17)
	MR_init_label10(check_hlds__modecheck_call__modecheck_higher_order_call_9_0,19,14,13,21,25,28,23,31,32,33)
	MR_init_label10(check_hlds__modecheck_call__modecheck_higher_order_call_9_0,34,35,36,37,38,40,41,42,39,8)
	MR_init_label4(check_hlds__modecheck_call__modecheck_higher_order_call_9_0,9,45,46,48)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'modecheck_higher_order_call'/9 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__check_hlds__modecheck_call__modecheck_higher_order_call_9_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(10);
	MR_sv(10) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_sv(8) = MR_tempr1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_get_instmap_2_0,
		check_hlds__modecheck_call__modecheck_higher_order_call_9_0_i2);
MR_def_label(check_hlds__modecheck_call__modecheck_higher_order_call_9_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(hlds__instmap__instmap_lookup_var_3_0,
		check_hlds__modecheck_call__modecheck_higher_order_call_9_0_i3);
MR_def_label(check_hlds__modecheck_call__modecheck_higher_order_call_9_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(8);
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_get_module_info_2_0,
		check_hlds__modecheck_call__modecheck_higher_order_call_9_0_i4);
MR_def_label(check_hlds__modecheck_call__modecheck_higher_order_call_9_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(check_hlds__inst_match__inst_expand_3_0,
		check_hlds__modecheck_call__modecheck_higher_order_call_9_0_i5);
MR_def_label(check_hlds__modecheck_call__modecheck_higher_order_call_9_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_sv(6) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_sv(9) = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(list__length_2_0,
		check_hlds__modecheck_call__modecheck_higher_order_call_9_0_i7);
MR_def_label(check_hlds__modecheck_call__modecheck_higher_order_call_9_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(4),2)) {
		MR_GOTO_LAB(check_hlds__modecheck_call__modecheck_higher_order_call_9_0_i11);
	}
	MR_sv(5) = MR_r1;
	MR_r1 = MR_tfield(2, MR_sv(4), 1);
	MR_GOTO_LAB(check_hlds__modecheck_call__modecheck_higher_order_call_9_0_i10);
MR_def_label(check_hlds__modecheck_call__modecheck_higher_order_call_9_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(4),3,1)) {
		MR_GOTO_LAB(check_hlds__modecheck_call__modecheck_higher_order_call_9_0_i9);
	}
	MR_sv(5) = MR_r1;
	MR_r1 = MR_tfield(3, MR_sv(4), 2);
MR_def_label(check_hlds__modecheck_call__modecheck_higher_order_call_9_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(check_hlds__modecheck_call__modecheck_higher_order_call_9_0_i14);
	}
	MR_r1 = MR_sv(8);
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_get_var_types_2_0,
		check_hlds__modecheck_call__modecheck_higher_order_call_9_0_i15);
MR_def_label(check_hlds__modecheck_call__modecheck_higher_order_call_9_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(6);
	MR_sv(6) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_tempr2 = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(9);
	MR_r3 = MR_sv(6);
	MR_r4 = MR_tempr2;
	MR_r5 = MR_sv(2);
	}
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		check_hlds__modecheck_call__modecheck_higher_order_call_9_0_i16);
MR_def_label(check_hlds__modecheck_call__modecheck_higher_order_call_9_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(parse_tree__prog_type__type_is_higher_order_details_5_0,
		check_hlds__modecheck_call__modecheck_higher_order_call_9_0_i17);
MR_def_label(check_hlds__modecheck_call__modecheck_higher_order_call_9_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__modecheck_call__modecheck_higher_order_call_9_0_i8);
	}
	if (((MR_Integer) 1 != (MR_Integer) MR_r3)) {
		MR_GOTO_LAB(check_hlds__modecheck_call__modecheck_higher_order_call_9_0_i8);
	}
	MR_r1 = MR_sv(6);
	MR_r2 = MR_r5;
	MR_np_call_localret_ent(fn__list__length_1_0,
		check_hlds__modecheck_call__modecheck_higher_order_call_9_0_i19);
MR_def_label(check_hlds__modecheck_call__modecheck_higher_order_call_9_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__check_hlds__inst_util__pred_inst_info_standard_func_mode_1_0,
		check_hlds__modecheck_call__modecheck_higher_order_call_9_0_i13);
MR_def_label(check_hlds__modecheck_call__modecheck_higher_order_call_9_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_body((MR_Integer) MR_r1, (MR_Integer) 1);
MR_def_label(check_hlds__modecheck_call__modecheck_higher_order_call_9_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(0, MR_r1, 0);
	if ((MR_sv(1) != MR_tempr1)) {
		MR_GOTO_LAB(check_hlds__modecheck_call__modecheck_higher_order_call_9_0_i8);
	}
	MR_sv(6) = MR_tfield(0, MR_r1, 1);
	MR_sv(7) = MR_tfield(0, MR_r1, 2);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_mode);
	MR_r2 = MR_sv(6);
	}
	MR_np_call_localret_ent(list__length_2_0,
		check_hlds__modecheck_call__modecheck_higher_order_call_9_0_i21);
MR_def_label(check_hlds__modecheck_call__modecheck_higher_order_call_9_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_sv(5) != MR_r1)) {
		MR_GOTO_LAB(check_hlds__modecheck_call__modecheck_higher_order_call_9_0_i8);
	}
	if (MR_PTAG_TESTR(MR_sv(4),2)) {
		MR_GOTO_LAB(check_hlds__modecheck_call__modecheck_higher_order_call_9_0_i23);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_sv(1) = MR_tfield(2, MR_tempr1, 0);
	MR_sv(5) = MR_tfield(2, MR_tempr1, 1);
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(2);
	}
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_var_is_locked_3_0,
		check_hlds__modecheck_call__modecheck_higher_order_call_9_0_i25);
MR_def_label(check_hlds__modecheck_call__modecheck_higher_order_call_9_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__modecheck_call__modecheck_higher_order_call_9_0_i23);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(1);
	MR_tfield(3, MR_tempr1, 2) = MR_sv(5);
	MR_sv(1) = MR_r2;
	MR_sv(5) = MR_tempr1;
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(2);
	}
	MR_np_call_localret_ent(set__singleton_set_2_1,
		check_hlds__modecheck_call__modecheck_higher_order_call_9_0_i28);
MR_def_label(check_hlds__modecheck_call__modecheck_higher_order_call_9_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 3, (MR_Integer) 5);
	MR_tfield(3, MR_r2, 0) = (MR_Integer) 8;
	MR_tfield(3, MR_r2, 1) = MR_sv(1);
	MR_tfield(3, MR_r2, 2) = MR_sv(2);
	MR_tfield(3, MR_r2, 3) = MR_sv(4);
	MR_tfield(3, MR_r2, 4) = MR_sv(5);
	MR_r3 = MR_sv(8);
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_error_4_0,
		check_hlds__modecheck_call__modecheck_higher_order_call_9_0_i48);
MR_def_label(check_hlds__modecheck_call__modecheck_higher_order_call_9_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_sv(6);
	MR_sv(4) = MR_sv(7);
	MR_r1 = MR_sv(8);
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_get_module_info_2_0,
		check_hlds__modecheck_call__modecheck_higher_order_call_9_0_i31);
MR_def_label(check_hlds__modecheck_call__modecheck_higher_order_call_9_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(check_hlds__mode_util__get_arg_lives_3_0,
		check_hlds__modecheck_call__modecheck_higher_order_call_9_0_i32);
MR_def_label(check_hlds__modecheck_call__modecheck_higher_order_call_9_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tempr1;
	MR_r3 = (MR_Integer) 1;
	MR_r4 = MR_sv(8);
	}
	MR_np_call_localret_ent(check_hlds__modecheck_util__modecheck_var_list_is_live_no_exact_match_5_0,
		check_hlds__modecheck_call__modecheck_higher_order_call_9_0_i33);
MR_def_label(check_hlds__modecheck_call__modecheck_higher_order_call_9_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(check_hlds__mode_util__mode_list_get_initial_insts_3_0,
		check_hlds__modecheck_call__modecheck_higher_order_call_9_0_i34);
MR_def_label(check_hlds__modecheck_call__modecheck_higher_order_call_9_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(5);
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(5);
	MR_r3 = (MR_Integer) 1;
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__modecheck_util__modecheck_var_has_inst_list_no_exact_match_6_0,
		check_hlds__modecheck_call__modecheck_higher_order_call_9_0_i35);
MR_def_label(check_hlds__modecheck_call__modecheck_higher_order_call_9_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_sv(6) = MR_r2;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(2);
	}
	MR_np_call_localret_ent(check_hlds__mode_util__mode_list_get_final_insts_3_0,
		check_hlds__modecheck_call__modecheck_higher_order_call_9_0_i36);
MR_def_label(check_hlds__modecheck_call__modecheck_higher_order_call_9_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(parse_tree__prog_mode__inst_list_apply_substitution_3_0,
		check_hlds__modecheck_call__modecheck_higher_order_call_9_0_i37);
MR_def_label(check_hlds__modecheck_call__modecheck_higher_order_call_9_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_tempr1;
	MR_r4 = (MR_Integer) 1;
	MR_r5 = MR_sv(6);
	}
	MR_np_call_localret_ent(check_hlds__modecheck_util__modecheck_set_var_inst_list_8_0,
		check_hlds__modecheck_call__modecheck_higher_order_call_9_0_i38);
MR_def_label(check_hlds__modecheck_call__modecheck_higher_order_call_9_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(3) = MR_r2;
	MR_sv(5) = MR_r3;
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(parse_tree__prog_data__determinism_components_3_0,
		check_hlds__modecheck_call__modecheck_higher_order_call_9_0_i40);
MR_def_label(check_hlds__modecheck_call__modecheck_higher_order_call_9_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) 0 != (MR_Integer) MR_r2)) {
		MR_GOTO_LAB(check_hlds__modecheck_call__modecheck_higher_order_call_9_0_i39);
	}
	MR_np_call_localret_ent(hlds__instmap__init_unreachable_1_0,
		check_hlds__modecheck_call__modecheck_higher_order_call_9_0_i41);
MR_def_label(check_hlds__modecheck_call__modecheck_higher_order_call_9_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_set_instmap_3_0,
		check_hlds__modecheck_call__modecheck_higher_order_call_9_0_i42);
MR_def_label(check_hlds__modecheck_call__modecheck_higher_order_call_9_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_tempr1;
	MR_decr_sp_and_return(10);
	}
MR_def_label(check_hlds__modecheck_call__modecheck_higher_order_call_9_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(5);
	MR_decr_sp_and_return(10);
MR_def_label(check_hlds__modecheck_call__modecheck_higher_order_call_9_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
MR_def_label(check_hlds__modecheck_call__modecheck_higher_order_call_9_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = (MR_Integer) 1;
	MR_r2 = MR_sv(8);
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_set_call_arg_context_3_0,
		check_hlds__modecheck_call__modecheck_higher_order_call_9_0_i45);
MR_def_label(check_hlds__modecheck_call__modecheck_higher_order_call_9_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(set__singleton_set_2_1,
		check_hlds__modecheck_call__modecheck_higher_order_call_9_0_i46);
MR_def_label(check_hlds__modecheck_call__modecheck_higher_order_call_9_0,46)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 3, (MR_Integer) 5);
	MR_tfield(3, MR_r2, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_r2, 1) = MR_sv(1);
	MR_tfield(3, MR_r2, 2) = MR_sv(2);
	MR_tfield(3, MR_r2, 3) = MR_sv(4);
	MR_tfield(3, MR_r2, 4) = MR_sv(5);
	MR_r3 = MR_sv(6);
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_error_4_0,
		check_hlds__modecheck_call__modecheck_higher_order_call_9_0_i48);
MR_def_label(check_hlds__modecheck_call__modecheck_higher_order_call_9_0,48)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_r3 = (MR_Integer) 6;
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	MR_r5 = MR_tempr1;
	MR_decr_sp_and_return(10);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(require__expect_4_0);

MR_BEGIN_MODULE(check_hlds__modecheck_call_module7)
	MR_init_entry1(check_hlds__modecheck_call__modecheck_event_call_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__modecheck_call__modecheck_event_call_5_0);
	MR_init_label9(check_hlds__modecheck_call__modecheck_event_call_5_0,2,3,4,5,6,7,8,9,11)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'modecheck_event_call'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__check_hlds__modecheck_call__modecheck_event_call_5_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(3) = MR_tempr1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_get_module_info_2_0,
		check_hlds__modecheck_call__modecheck_event_call_5_0_i2);
MR_def_label(check_hlds__modecheck_call__modecheck_event_call_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(check_hlds__mode_util__get_arg_lives_3_0,
		check_hlds__modecheck_call__modecheck_event_call_5_0_i3);
MR_def_label(check_hlds__modecheck_call__modecheck_event_call_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	MR_r3 = (MR_Integer) 0;
	MR_r4 = MR_sv(3);
	}
	MR_np_call_localret_ent(check_hlds__modecheck_util__modecheck_var_list_is_live_no_exact_match_5_0,
		check_hlds__modecheck_call__modecheck_event_call_5_0_i4);
MR_def_label(check_hlds__modecheck_call__modecheck_event_call_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(check_hlds__mode_util__mode_list_get_initial_insts_3_0,
		check_hlds__modecheck_call__modecheck_event_call_5_0_i5);
MR_def_label(check_hlds__modecheck_call__modecheck_event_call_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(3);
	MR_r3 = (MR_Integer) 0;
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__modecheck_util__modecheck_var_has_inst_list_no_exact_match_6_0,
		check_hlds__modecheck_call__modecheck_event_call_5_0_i6);
MR_def_label(check_hlds__modecheck_call__modecheck_event_call_5_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_tempr2 = MR_sv(4);
	MR_sv(4) = MR_r2;
	MR_r1 = MR_tempr2;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__mode_util__mode_list_get_final_insts_3_0,
		check_hlds__modecheck_call__modecheck_event_call_5_0_i7);
MR_def_label(check_hlds__modecheck_call__modecheck_event_call_5_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(parse_tree__prog_mode__inst_list_apply_substitution_3_0,
		check_hlds__modecheck_call__modecheck_event_call_5_0_i8);
MR_def_label(check_hlds__modecheck_call__modecheck_event_call_5_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_tempr1;
	MR_r4 = (MR_Integer) 0;
	MR_r5 = MR_sv(4);
	}
	MR_np_call_localret_ent(check_hlds__modecheck_util__modecheck_set_var_inst_list_8_0,
		check_hlds__modecheck_call__modecheck_event_call_5_0_i9);
MR_def_label(check_hlds__modecheck_call__modecheck_event_call_5_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(1,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(check_hlds__modecheck_call__IntroducedFrom__pred__modecheck_event_call__292__1_2_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr1, 3) = MR_r2;
	MR_tfield(0, MR_tempr1, 4) = (MR_Word) MR_tbmkword(0, 0);
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r3;
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Word) MR_string_const("check_hlds.modecheck_call", 25);
	MR_r3 = (MR_Word) MR_string_const("predicate \140check_hlds.modecheck_call.modecheck_event_call\'/5", 60);
	MR_r4 = (MR_Word) MR_string_const("ExtraGoals", 10);
	}
	MR_np_call_localret_ent(require__expect_4_0,
		check_hlds__modecheck_call__modecheck_event_call_5_0_i11);
MR_def_label(check_hlds__modecheck_call__modecheck_event_call_5_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__modecheck_call_module8)
	MR_init_entry1(check_hlds__modecheck_call__modecheck_builtin_cast_7_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__modecheck_call__modecheck_builtin_cast_7_0);
	MR_init_label8(check_hlds__modecheck_call__modecheck_builtin_cast_7_0,2,3,4,5,6,7,8,9)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'modecheck_builtin_cast'/7 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__check_hlds__modecheck_call__modecheck_builtin_cast_7_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(3) = MR_tempr1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_get_module_info_2_0,
		check_hlds__modecheck_call__modecheck_builtin_cast_7_0_i2);
MR_def_label(check_hlds__modecheck_call__modecheck_builtin_cast_7_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(check_hlds__mode_util__get_arg_lives_3_0,
		check_hlds__modecheck_call__modecheck_builtin_cast_7_0_i3);
MR_def_label(check_hlds__modecheck_call__modecheck_builtin_cast_7_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	MR_r3 = (MR_Integer) 0;
	MR_r4 = MR_sv(3);
	}
	MR_np_call_localret_ent(check_hlds__modecheck_util__modecheck_var_list_is_live_no_exact_match_5_0,
		check_hlds__modecheck_call__modecheck_builtin_cast_7_0_i4);
MR_def_label(check_hlds__modecheck_call__modecheck_builtin_cast_7_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(check_hlds__mode_util__mode_list_get_initial_insts_3_0,
		check_hlds__modecheck_call__modecheck_builtin_cast_7_0_i5);
MR_def_label(check_hlds__modecheck_call__modecheck_builtin_cast_7_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(3);
	MR_r3 = (MR_Integer) 0;
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__modecheck_util__modecheck_var_has_inst_list_no_exact_match_6_0,
		check_hlds__modecheck_call__modecheck_builtin_cast_7_0_i6);
MR_def_label(check_hlds__modecheck_call__modecheck_builtin_cast_7_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_tempr2 = MR_sv(4);
	MR_sv(4) = MR_r2;
	MR_r1 = MR_tempr2;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__mode_util__mode_list_get_final_insts_3_0,
		check_hlds__modecheck_call__modecheck_builtin_cast_7_0_i7);
MR_def_label(check_hlds__modecheck_call__modecheck_builtin_cast_7_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(parse_tree__prog_mode__inst_list_apply_substitution_3_0,
		check_hlds__modecheck_call__modecheck_builtin_cast_7_0_i8);
MR_def_label(check_hlds__modecheck_call__modecheck_builtin_cast_7_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_tempr1;
	MR_r4 = (MR_Integer) 0;
	MR_r5 = MR_sv(4);
	}
	MR_np_call_localret_ent(check_hlds__modecheck_util__modecheck_set_var_inst_list_8_0,
		check_hlds__modecheck_call__modecheck_builtin_cast_7_0_i9);
MR_def_label(check_hlds__modecheck_call__modecheck_builtin_cast_7_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r2;
	MR_r2 = (MR_Integer) 0;
	MR_tempr2 = MR_r3;
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tempr2;
	MR_decr_sp_and_return(5);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__hlds_pred__pred_info_get_procedures_2_0);
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_proc_id_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_proc_info_0;
MR_decl_entry(hlds__hlds_pred__proc_info_get_argmodes_2_0);
MR_decl_entry(hlds__hlds_pred__pred_info_get_arg_types_2_0);
MR_decl_entry(hlds__hlds_pred__proc_info_interface_determinism_2_0);

MR_BEGIN_MODULE(check_hlds__modecheck_call_module9)
	MR_init_entry1(check_hlds__modecheck_call__modes_are_indistinguishable_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__modecheck_call__modes_are_indistinguishable_4_0);
	MR_init_label10(check_hlds__modecheck_call__modes_are_indistinguishable_4_0,2,3,4,5,6,7,8,9,11,10)
	MR_init_label10(check_hlds__modecheck_call__modes_are_indistinguishable_4_0,15,16,17,18,20,21,22,23,25,24)
	MR_init_label1(check_hlds__modecheck_call__modes_are_indistinguishable_4_0,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'modes_are_indistinguishable'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__check_hlds__modecheck_call__modes_are_indistinguishable_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(3) = MR_tempr1;
	MR_sv(4) = MR_r4;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_procedures_2_0,
		check_hlds__modecheck_call__modes_are_indistinguishable_4_0_i2);
MR_def_label(check_hlds__modecheck_call__modes_are_indistinguishable_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_sv(5) = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, proc_id);
	MR_sv(6) = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, proc_info);
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(map__lookup_3_0,
		check_hlds__modecheck_call__modes_are_indistinguishable_4_0_i3);
MR_def_label(check_hlds__modecheck_call__modes_are_indistinguishable_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(2);
	}
	MR_np_call_localret_ent(map__lookup_3_0,
		check_hlds__modecheck_call__modes_are_indistinguishable_4_0_i4);
MR_def_label(check_hlds__modecheck_call__modes_are_indistinguishable_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_argmodes_2_0,
		check_hlds__modecheck_call__modes_are_indistinguishable_4_0_i5);
MR_def_label(check_hlds__modecheck_call__modes_are_indistinguishable_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_argmodes_2_0,
		check_hlds__modecheck_call__modes_are_indistinguishable_4_0_i6);
MR_def_label(check_hlds__modecheck_call__modes_are_indistinguishable_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(check_hlds__mode_util__mode_list_get_initial_insts_3_0,
		check_hlds__modecheck_call__modes_are_indistinguishable_4_0_i7);
MR_def_label(check_hlds__modecheck_call__modes_are_indistinguishable_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(6);
	MR_np_call_localret_ent(check_hlds__mode_util__mode_list_get_initial_insts_3_0,
		check_hlds__modecheck_call__modes_are_indistinguishable_4_0_i8);
MR_def_label(check_hlds__modecheck_call__modes_are_indistinguishable_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_arg_types_2_0,
		check_hlds__modecheck_call__modes_are_indistinguishable_4_0_i9);
MR_def_label(check_hlds__modecheck_call__modes_are_indistinguishable_4_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(7);
	MR_r3 = MR_sv(3);
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	MR_r5 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__modecheck_call__compare_inst_list_2_6_0,
		check_hlds__modecheck_call__modes_are_indistinguishable_4_0_i11);
MR_def_label(check_hlds__modecheck_call__modes_are_indistinguishable_4_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__modecheck_call__modes_are_indistinguishable_4_0_i10);
	}
	if (MR_INT_NE(MR_r2,2)) {
		MR_GOTO_LAB(check_hlds__modecheck_call__modes_are_indistinguishable_4_0_i1);
	}
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(5);
	MR_GOTO_LAB(check_hlds__modecheck_call__modes_are_indistinguishable_4_0_i15);
MR_def_label(check_hlds__modecheck_call__modes_are_indistinguishable_4_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("check_hlds.modecheck_call", 25);
	MR_r2 = (MR_Word) MR_string_const("predicate \140check_hlds.modecheck_call.compare_inst_list\'/6", 57);
	MR_r3 = (MR_Word) MR_string_const("length mismatch", 15);
	MR_np_call_localret_ent(require__unexpected_3_0,
		check_hlds__modecheck_call__modes_are_indistinguishable_4_0_i15);
MR_def_label(check_hlds__modecheck_call__modes_are_indistinguishable_4_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_np_call_localret_ent(check_hlds__mode_util__get_arg_lives_3_0,
		check_hlds__modecheck_call__modes_are_indistinguishable_4_0_i16);
MR_def_label(check_hlds__modecheck_call__modes_are_indistinguishable_4_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(6);
	MR_np_call_localret_ent(check_hlds__mode_util__get_arg_lives_3_0,
		check_hlds__modecheck_call__modes_are_indistinguishable_4_0_i17);
MR_def_label(check_hlds__modecheck_call__modes_are_indistinguishable_4_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__modecheck_call__compare_liveness_list_3_0,
		check_hlds__modecheck_call__modes_are_indistinguishable_4_0_i18);
MR_def_label(check_hlds__modecheck_call__modes_are_indistinguishable_4_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,2)) {
		MR_GOTO_LAB(check_hlds__modecheck_call__modes_are_indistinguishable_4_0_i1);
	}
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_interface_determinism_2_0,
		check_hlds__modecheck_call__modes_are_indistinguishable_4_0_i20);
MR_def_label(check_hlds__modecheck_call__modes_are_indistinguishable_4_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_interface_determinism_2_0,
		check_hlds__modecheck_call__modes_are_indistinguishable_4_0_i21);
MR_def_label(check_hlds__modecheck_call__modes_are_indistinguishable_4_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(parse_tree__prog_data__determinism_components_3_0,
		check_hlds__modecheck_call__modes_are_indistinguishable_4_0_i22);
MR_def_label(check_hlds__modecheck_call__modes_are_indistinguishable_4_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r2;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(parse_tree__prog_data__determinism_components_3_0,
		check_hlds__modecheck_call__modes_are_indistinguishable_4_0_i23);
MR_def_label(check_hlds__modecheck_call__modes_are_indistinguishable_4_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(1),2)) {
		MR_GOTO_LAB(check_hlds__modecheck_call__modes_are_indistinguishable_4_0_i25);
	}
	if (MR_INT_EQ(MR_r2,2)) {
		MR_GOTO_LAB(check_hlds__modecheck_call__modes_are_indistinguishable_4_0_i24);
	}
MR_def_label(check_hlds__modecheck_call__modes_are_indistinguishable_4_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_EQ(MR_sv(1),2)) {
		MR_GOTO_LAB(check_hlds__modecheck_call__modes_are_indistinguishable_4_0_i1);
	}
	MR_r1 = ((MR_Integer) MR_r2 != (MR_Integer) 2);
	MR_decr_sp_and_return(8);
MR_def_label(check_hlds__modecheck_call__modes_are_indistinguishable_4_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(8);
	MR_decr_sp(8);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(check_hlds__modecheck_call__modes_are_indistinguishable_4_0,1)
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


MR_BEGIN_MODULE(check_hlds__modecheck_call_module10)
	MR_init_entry1(check_hlds__modecheck_call__modes_are_identical_bar_cc_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__modecheck_call__modes_are_identical_bar_cc_4_0);
	MR_init_label10(check_hlds__modecheck_call__modes_are_identical_bar_cc_4_0,2,3,4,5,6,7,8,9,11,10)
	MR_init_label10(check_hlds__modecheck_call__modes_are_identical_bar_cc_4_0,15,16,17,19,18,23,24,25,26,28)
	MR_init_label6(check_hlds__modecheck_call__modes_are_identical_bar_cc_4_0,29,30,31,35,33,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'modes_are_identical_bar_cc'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__check_hlds__modecheck_call__modes_are_identical_bar_cc_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(3) = MR_tempr1;
	MR_sv(4) = MR_r4;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_procedures_2_0,
		check_hlds__modecheck_call__modes_are_identical_bar_cc_4_0_i2);
MR_def_label(check_hlds__modecheck_call__modes_are_identical_bar_cc_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_sv(5) = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, proc_id);
	MR_sv(6) = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, proc_info);
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(map__lookup_3_0,
		check_hlds__modecheck_call__modes_are_identical_bar_cc_4_0_i3);
MR_def_label(check_hlds__modecheck_call__modes_are_identical_bar_cc_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(2);
	}
	MR_np_call_localret_ent(map__lookup_3_0,
		check_hlds__modecheck_call__modes_are_identical_bar_cc_4_0_i4);
MR_def_label(check_hlds__modecheck_call__modes_are_identical_bar_cc_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_argmodes_2_0,
		check_hlds__modecheck_call__modes_are_identical_bar_cc_4_0_i5);
MR_def_label(check_hlds__modecheck_call__modes_are_identical_bar_cc_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_argmodes_2_0,
		check_hlds__modecheck_call__modes_are_identical_bar_cc_4_0_i6);
MR_def_label(check_hlds__modecheck_call__modes_are_identical_bar_cc_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(check_hlds__mode_util__mode_list_get_initial_insts_3_0,
		check_hlds__modecheck_call__modes_are_identical_bar_cc_4_0_i7);
MR_def_label(check_hlds__modecheck_call__modes_are_identical_bar_cc_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(6);
	MR_np_call_localret_ent(check_hlds__mode_util__mode_list_get_initial_insts_3_0,
		check_hlds__modecheck_call__modes_are_identical_bar_cc_4_0_i8);
MR_def_label(check_hlds__modecheck_call__modes_are_identical_bar_cc_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_arg_types_2_0,
		check_hlds__modecheck_call__modes_are_identical_bar_cc_4_0_i9);
MR_def_label(check_hlds__modecheck_call__modes_are_identical_bar_cc_4_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(7);
	MR_r3 = MR_tempr1;
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	MR_r5 = MR_sv(3);
	}
	MR_np_call_localret_ent(check_hlds__modecheck_call__compare_inst_list_2_6_0,
		check_hlds__modecheck_call__modes_are_identical_bar_cc_4_0_i11);
MR_def_label(check_hlds__modecheck_call__modes_are_identical_bar_cc_4_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__modecheck_call__modes_are_identical_bar_cc_4_0_i10);
	}
	if (MR_INT_NE(MR_r2,2)) {
		MR_GOTO_LAB(check_hlds__modecheck_call__modes_are_identical_bar_cc_4_0_i1);
	}
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(5);
	MR_GOTO_LAB(check_hlds__modecheck_call__modes_are_identical_bar_cc_4_0_i15);
MR_def_label(check_hlds__modecheck_call__modes_are_identical_bar_cc_4_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("check_hlds.modecheck_call", 25);
	MR_r2 = (MR_Word) MR_string_const("predicate \140check_hlds.modecheck_call.compare_inst_list\'/6", 57);
	MR_r3 = (MR_Word) MR_string_const("length mismatch", 15);
	MR_np_call_localret_ent(require__unexpected_3_0,
		check_hlds__modecheck_call__modes_are_identical_bar_cc_4_0_i15);
MR_def_label(check_hlds__modecheck_call__modes_are_identical_bar_cc_4_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_sv(5) = MR_r2;
	MR_np_call_localret_ent(check_hlds__mode_util__mode_list_get_final_insts_3_0,
		check_hlds__modecheck_call__modes_are_identical_bar_cc_4_0_i16);
MR_def_label(check_hlds__modecheck_call__modes_are_identical_bar_cc_4_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(6);
	MR_np_call_localret_ent(check_hlds__mode_util__mode_list_get_final_insts_3_0,
		check_hlds__modecheck_call__modes_are_identical_bar_cc_4_0_i17);
MR_def_label(check_hlds__modecheck_call__modes_are_identical_bar_cc_4_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(7);
	MR_r3 = MR_tempr1;
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	MR_r5 = MR_sv(3);
	}
	MR_np_call_localret_ent(check_hlds__modecheck_call__compare_inst_list_2_6_0,
		check_hlds__modecheck_call__modes_are_identical_bar_cc_4_0_i19);
MR_def_label(check_hlds__modecheck_call__modes_are_identical_bar_cc_4_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__modecheck_call__modes_are_identical_bar_cc_4_0_i18);
	}
	if (MR_INT_NE(MR_r2,2)) {
		MR_GOTO_LAB(check_hlds__modecheck_call__modes_are_identical_bar_cc_4_0_i1);
	}
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(5);
	MR_GOTO_LAB(check_hlds__modecheck_call__modes_are_identical_bar_cc_4_0_i23);
MR_def_label(check_hlds__modecheck_call__modes_are_identical_bar_cc_4_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("check_hlds.modecheck_call", 25);
	MR_r2 = (MR_Word) MR_string_const("predicate \140check_hlds.modecheck_call.compare_inst_list\'/6", 57);
	MR_r3 = (MR_Word) MR_string_const("length mismatch", 15);
	MR_np_call_localret_ent(require__unexpected_3_0,
		check_hlds__modecheck_call__modes_are_identical_bar_cc_4_0_i23);
MR_def_label(check_hlds__modecheck_call__modes_are_identical_bar_cc_4_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_np_call_localret_ent(check_hlds__mode_util__get_arg_lives_3_0,
		check_hlds__modecheck_call__modes_are_identical_bar_cc_4_0_i24);
MR_def_label(check_hlds__modecheck_call__modes_are_identical_bar_cc_4_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(6);
	MR_np_call_localret_ent(check_hlds__mode_util__get_arg_lives_3_0,
		check_hlds__modecheck_call__modes_are_identical_bar_cc_4_0_i25);
MR_def_label(check_hlds__modecheck_call__modes_are_identical_bar_cc_4_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__modecheck_call__compare_liveness_list_3_0,
		check_hlds__modecheck_call__modes_are_identical_bar_cc_4_0_i26);
MR_def_label(check_hlds__modecheck_call__modes_are_identical_bar_cc_4_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,2)) {
		MR_GOTO_LAB(check_hlds__modecheck_call__modes_are_identical_bar_cc_4_0_i1);
	}
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_interface_determinism_2_0,
		check_hlds__modecheck_call__modes_are_identical_bar_cc_4_0_i28);
MR_def_label(check_hlds__modecheck_call__modes_are_identical_bar_cc_4_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_interface_determinism_2_0,
		check_hlds__modecheck_call__modes_are_identical_bar_cc_4_0_i29);
MR_def_label(check_hlds__modecheck_call__modes_are_identical_bar_cc_4_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(parse_tree__prog_data__determinism_components_3_0,
		check_hlds__modecheck_call__modes_are_identical_bar_cc_4_0_i30);
MR_def_label(check_hlds__modecheck_call__modes_are_identical_bar_cc_4_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(parse_tree__prog_data__determinism_components_3_0,
		check_hlds__modecheck_call__modes_are_identical_bar_cc_4_0_i31);
MR_def_label(check_hlds__modecheck_call__modes_are_identical_bar_cc_4_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_sv(1) != MR_r1)) {
		MR_GOTO_LAB(check_hlds__modecheck_call__modes_are_identical_bar_cc_4_0_i1);
	}
	if (MR_INT_NE(MR_sv(2),3)) {
		MR_GOTO_LAB(check_hlds__modecheck_call__modes_are_identical_bar_cc_4_0_i35);
	}
	if (MR_INT_NE(MR_r2,2)) {
		MR_GOTO_LAB(check_hlds__modecheck_call__modes_are_identical_bar_cc_4_0_i33);
	}
	MR_r1 = MR_r2;
	MR_succip_word = MR_sv(8);
	MR_decr_sp(8);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(check_hlds__modecheck_call__modes_are_identical_bar_cc_4_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(2),2)) {
		MR_GOTO_LAB(check_hlds__modecheck_call__modes_are_identical_bar_cc_4_0_i33);
	}
	if (MR_INT_NE(MR_r2,3)) {
		MR_GOTO_LAB(check_hlds__modecheck_call__modes_are_identical_bar_cc_4_0_i33);
	}
	MR_r1 = MR_r2;
	MR_succip_word = MR_sv(8);
	MR_decr_sp(8);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(check_hlds__modecheck_call__modes_are_identical_bar_cc_4_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_sv(2) == MR_r2);
	MR_decr_sp_and_return(8);
MR_def_label(check_hlds__modecheck_call__modes_are_identical_bar_cc_4_0,1)
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


MR_BEGIN_MODULE(check_hlds__modecheck_call_module11)
	MR_init_entry1(__Unify___check_hlds__modecheck_call__match_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___check_hlds__modecheck_call__match_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___check_hlds__modecheck_call__match_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_r1 == MR_r2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(private_builtin__builtin_compare_int_3_0);

MR_BEGIN_MODULE(check_hlds__modecheck_call_module12)
	MR_init_entry1(__Compare___check_hlds__modecheck_call__match_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___check_hlds__modecheck_call__match_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___check_hlds__modecheck_call__match_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___tree234__tree234_2_0);
MR_decl_entry(__Unify___list__list_1_0);

MR_BEGIN_MODULE(check_hlds__modecheck_call_module13)
	MR_init_entry1(__Unify___check_hlds__modecheck_call__proc_mode_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___check_hlds__modecheck_call__proc_mode_0_0);
	MR_init_label3(__Unify___check_hlds__modecheck_call__proc_mode_0_0,5,9,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___check_hlds__modecheck_call__proc_mode_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___check_hlds__modecheck_call__proc_mode_0_0_i9);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_tempr1;
	MR_tempr2 = MR_r2;
	MR_sv(2) = MR_tempr2;
	MR_tempr3 = MR_tfield(0, MR_tempr1, 0);
	MR_tempr4 = MR_tfield(0, MR_tempr2, 0);
	if ((MR_tempr3 != MR_tempr4)) {
		MR_GOTO_LAB(__Unify___check_hlds__modecheck_call__proc_mode_0_0_i1);
	}
	MR_tempr3 = MR_tempr1;
	MR_sv(1) = MR_tfield(0, MR_tempr3, 2);
	MR_tempr4 = MR_tempr2;
	MR_sv(2) = MR_tfield(0, MR_tempr4, 2);
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,1);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_inst);
	MR_r3 = MR_tfield(0, MR_tempr3, 1);
	MR_r4 = MR_tfield(0, MR_tempr4, 1);
	}
	MR_np_call_localret_ent(__Unify___tree234__tree234_2_0,
		__Unify___check_hlds__modecheck_call__proc_mode_0_0_i5);
MR_def_label(__Unify___check_hlds__modecheck_call__proc_mode_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___check_hlds__modecheck_call__proc_mode_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_mode);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Unify___list__list_1_0);
MR_def_label(__Unify___check_hlds__modecheck_call__proc_mode_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___check_hlds__modecheck_call__proc_mode_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Compare___tree234__tree234_2_0);
MR_decl_entry(__Compare___list__list_1_0);

MR_BEGIN_MODULE(check_hlds__modecheck_call_module14)
	MR_init_entry1(__Compare___check_hlds__modecheck_call__proc_mode_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___check_hlds__modecheck_call__proc_mode_0_0);
	MR_init_label5(__Compare___check_hlds__modecheck_call__proc_mode_0_0,3,2,5,10,39)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___check_hlds__modecheck_call__proc_mode_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___check_hlds__modecheck_call__proc_mode_0_0_i3);
	}
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___check_hlds__modecheck_call__proc_mode_0_0_i2);
MR_def_label(__Compare___check_hlds__modecheck_call__proc_mode_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___check_hlds__modecheck_call__proc_mode_0_0,2)
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
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___check_hlds__modecheck_call__proc_mode_0_0_i5);
MR_def_label(__Compare___check_hlds__modecheck_call__proc_mode_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___check_hlds__modecheck_call__proc_mode_0_0_i39);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,1);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_inst);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(3);
	MR_np_call_localret_ent(__Compare___tree234__tree234_2_0,
		__Compare___check_hlds__modecheck_call__proc_mode_0_0_i10);
MR_def_label(__Compare___check_hlds__modecheck_call__proc_mode_0_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___check_hlds__modecheck_call__proc_mode_0_0_i39);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_mode);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(4);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(__Compare___list__list_1_0);
MR_def_label(__Compare___check_hlds__modecheck_call__proc_mode_0_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___check_hlds__modecheck_util__extra_goals_0_0);

MR_BEGIN_MODULE(check_hlds__modecheck_call_module15)
	MR_init_entry1(check_hlds__modecheck_call__IntroducedFrom__pred__modecheck_event_call__292__1_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__modecheck_call__IntroducedFrom__pred__modecheck_event_call__292__1_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__pred__modecheck_event_call__292__1'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__modecheck_call__IntroducedFrom__pred__modecheck_event_call__292__1_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(__Unify___check_hlds__modecheck_util__extra_goals_0_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__modecheck_call_module16)
	MR_init_entry1(check_hlds__modecheck_call__IntroducedFrom__pred__compare_proc__729__1_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__modecheck_call__IntroducedFrom__pred__compare_proc__729__1_3_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__pred__compare_proc__729__1'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__modecheck_call__IntroducedFrom__pred__compare_proc__729__1_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_tempr2 = MR_r2;
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r4 = MR_tempr1;
	MR_r5 = MR_tempr2;
	MR_np_tailcall_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(check_hlds__mode_info__mode_info_get_may_change_called_proc_2_0);
MR_decl_entry(hlds__hlds_pred__pred_info_get_purity_2_0);
MR_decl_entry(fn__hlds__hlds_pred__pred_info_all_procids_1_0);
MR_decl_entry(check_hlds__modecheck_util__compute_arg_offset_2_0);
MR_decl_entry(set__init_1_0);
MR_decl_entry(hlds__hlds_pred__proc_info_arglives_3_0);
MR_decl_entry(hlds__hlds_pred__proc_info_get_inst_varset_2_0);
MR_decl_entry(parse_tree__prog_mode__rename_apart_inst_vars_4_0);
MR_decl_entry(check_hlds__mode_info__mode_info_get_errors_2_0);
MR_decl_entry(check_hlds__mode_info__mode_info_set_errors_3_0);
MR_decl_entry(list__reverse_2_0);
MR_decl_entry(fn__hlds__hlds_pred__mode_errors_1_0);
MR_decl_entry(fn__f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_105_115_116_95_116_111_95_115_101_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_1_0);
extern const MR_TypeCtorInfo_Struct mercury_data_check_hlds__mode_errors__type_ctor_info_mode_error_info_0;
MR_decl_entry(list__append_3_1);

MR_BEGIN_MODULE(check_hlds__modecheck_call_module17)
	MR_init_entry1(f_99_104_101_99_107_95_104_108_100_115_95_95_109_111_100_101_99_104_101_99_107_95_99_97_108_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_101_99_104_101_99_107_95_99_97_108_108_95_112_114_101_100_95_95_91_55_93_95_48_10_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__f_99_104_101_99_107_95_104_108_100_115_95_95_109_111_100_101_99_104_101_99_107_95_99_97_108_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_101_99_104_101_99_107_95_99_97_108_108_95_112_114_101_100_95_95_91_55_93_95_48_10_0);
	MR_init_label10(f_99_104_101_99_107_95_104_108_100_115_95_95_109_111_100_101_99_104_101_99_107_95_99_97_108_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_101_99_104_101_99_107_95_99_97_108_108_95_112_114_101_100_95_95_91_55_93_95_48_10_0,2,3,4,5,6,7,10,9,12,11)
	MR_init_label10(f_99_104_101_99_107_95_104_108_100_115_95_95_109_111_100_101_99_104_101_99_107_95_99_97_108_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_101_99_104_101_99_107_95_99_97_108_108_95_112_114_101_100_95_95_91_55_93_95_48_10_0,8,16,17,18,23,26,27,28,19,20)
	MR_init_label10(f_99_104_101_99_107_95_104_108_100_115_95_95_109_111_100_101_99_104_101_99_107_95_99_97_108_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_101_99_104_101_99_107_95_99_97_108_108_95_112_114_101_100_95_95_91_55_93_95_48_10_0,37,34,33,40,41,42,43,44,45,46)
	MR_init_label10(f_99_104_101_99_107_95_104_108_100_115_95_95_109_111_100_101_99_104_101_99_107_95_99_97_108_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_101_99_104_101_99_107_95_99_97_108_108_95_112_114_101_100_95_95_91_55_93_95_48_10_0,47,48,49,30,50,51,53,54,57,56)
	MR_init_label10(f_99_104_101_99_107_95_104_108_100_115_95_95_109_111_100_101_99_104_101_99_107_95_99_97_108_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_101_99_104_101_99_107_95_99_97_108_108_95_112_114_101_100_95_95_91_55_93_95_48_10_0,58,59,60,61,64,63,65,66,67,69)
	MR_init_label4(f_99_104_101_99_107_95_104_108_100_115_95_95_109_111_100_101_99_104_101_99_107_95_99_97_108_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_101_99_104_101_99_107_95_99_97_108_108_95_112_114_101_100_95_95_91_55_93_95_48_10_0,55,70,71,72)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__pred__modecheck_call_pred__[7]_0'/10 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__f_99_104_101_99_107_95_104_108_100_115_95_95_109_111_100_101_99_104_101_99_107_95_99_97_108_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_101_99_104_101_99_107_95_99_97_108_108_95_112_114_101_100_95_95_91_55_93_95_48_10_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(14);
	MR_sv(14) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r5;
	MR_sv(12) = MR_tempr1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_get_may_change_called_proc_2_0,
		f_99_104_101_99_107_95_104_108_100_115_95_95_109_111_100_101_99_104_101_99_107_95_99_97_108_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_101_99_104_101_99_107_95_99_97_108_108_95_112_114_101_100_95_95_91_55_93_95_48_10_0_i2);
MR_def_label(f_99_104_101_99_107_95_104_108_100_115_95_95_109_111_100_101_99_104_101_99_107_95_99_97_108_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_101_99_104_101_99_107_95_99_97_108_108_95_112_114_101_100_95_95_91_55_93_95_48_10_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(12);
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_get_preds_2_0,
		f_99_104_101_99_107_95_104_108_100_115_95_95_109_111_100_101_99_104_101_99_107_95_99_97_108_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_101_99_104_101_99_107_95_99_97_108_108_95_112_114_101_100_95_95_91_55_93_95_48_10_0_i3);
MR_def_label(f_99_104_101_99_107_95_104_108_100_115_95_95_109_111_100_101_99_104_101_99_107_95_99_97_108_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_101_99_104_101_99_107_95_99_97_108_108_95_112_114_101_100_95_95_91_55_93_95_48_10_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(12);
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_get_module_info_2_0,
		f_99_104_101_99_107_95_104_108_100_115_95_95_109_111_100_101_99_104_101_99_107_95_99_97_108_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_101_99_104_101_99_107_95_99_97_108_108_95_112_114_101_100_95_95_91_55_93_95_48_10_0_i4);
MR_def_label(f_99_104_101_99_107_95_104_108_100_115_95_95_109_111_100_101_99_104_101_99_107_95_99_97_108_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_101_99_104_101_99_107_95_99_97_108_108_95_112_114_101_100_95_95_91_55_93_95_48_10_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(6);
	MR_sv(6) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_id);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_info);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(1);
	}
	MR_np_call_localret_ent(map__lookup_3_0,
		f_99_104_101_99_107_95_104_108_100_115_95_95_109_111_100_101_99_104_101_99_107_95_99_97_108_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_101_99_104_101_99_107_95_99_97_108_108_95_112_114_101_100_95_95_91_55_93_95_48_10_0_i5);
MR_def_label(f_99_104_101_99_107_95_104_108_100_115_95_95_109_111_100_101_99_104_101_99_107_95_99_97_108_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_101_99_104_101_99_107_95_99_97_108_108_95_112_114_101_100_95_95_91_55_93_95_48_10_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_purity_2_0,
		f_99_104_101_99_107_95_104_108_100_115_95_95_109_111_100_101_99_104_101_99_107_95_99_97_108_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_101_99_104_101_99_107_95_99_97_108_108_95_112_114_101_100_95_95_91_55_93_95_48_10_0_i6);
MR_def_label(f_99_104_101_99_107_95_104_108_100_115_95_95_109_111_100_101_99_104_101_99_107_95_99_97_108_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_101_99_104_101_99_107_95_99_97_108_108_95_112_114_101_100_95_95_91_55_93_95_48_10_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_r1 = MR_sv(7);
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_procedures_2_0,
		f_99_104_101_99_107_95_104_108_100_115_95_95_109_111_100_101_99_104_101_99_107_95_99_97_108_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_101_99_104_101_99_107_95_99_97_108_108_95_112_114_101_100_95_95_91_55_93_95_48_10_0_i7);
MR_def_label(f_99_104_101_99_107_95_104_108_100_115_95_95_109_111_100_101_99_104_101_99_107_95_99_97_108_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_101_99_104_101_99_107_95_99_97_108_108_95_112_114_101_100_95_95_91_55_93_95_48_10_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(5),0)) {
		MR_GOTO_LAB(f_99_104_101_99_107_95_104_108_100_115_95_95_109_111_100_101_99_104_101_99_107_95_99_97_108_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_101_99_104_101_99_107_95_99_97_108_108_95_112_114_101_100_95_95_91_55_93_95_48_10_0_i9);
	}
	MR_sv(9) = MR_r1;
	MR_r1 = MR_sv(7);
	MR_np_call_localret_ent(fn__hlds__hlds_pred__pred_info_all_procids_1_0,
		f_99_104_101_99_107_95_104_108_100_115_95_95_109_111_100_101_99_104_101_99_107_95_99_97_108_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_101_99_104_101_99_107_95_99_97_108_108_95_112_114_101_100_95_95_91_55_93_95_48_10_0_i10);
MR_def_label(f_99_104_101_99_107_95_104_108_100_115_95_95_109_111_100_101_99_104_101_99_107_95_99_97_108_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_101_99_104_101_99_107_95_99_97_108_108_95_112_114_101_100_95_95_91_55_93_95_48_10_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(7);
	MR_GOTO_LAB(f_99_104_101_99_107_95_104_108_100_115_95_95_109_111_100_101_99_104_101_99_107_95_99_97_108_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_101_99_104_101_99_107_95_99_97_108_108_95_112_114_101_100_95_95_91_55_93_95_48_10_0_i8);
MR_def_label(f_99_104_101_99_107_95_104_108_100_115_95_95_109_111_100_101_99_104_101_99_107_95_99_97_108_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_101_99_104_101_99_107_95_99_97_108_108_95_112_114_101_100_95_95_91_55_93_95_48_10_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_r1;
	MR_np_call_localret_ent(fn__hlds__hlds_pred__invalid_proc_id_0_0,
		f_99_104_101_99_107_95_104_108_100_115_95_95_109_111_100_101_99_104_101_99_107_95_99_97_108_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_101_99_104_101_99_107_95_99_97_108_108_95_112_114_101_100_95_95_91_55_93_95_48_10_0_i12);
MR_def_label(f_99_104_101_99_107_95_104_108_100_115_95_95_109_111_100_101_99_104_101_99_107_95_99_97_108_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_101_99_104_101_99_107_95_99_97_108_108_95_112_114_101_100_95_95_91_55_93_95_48_10_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_sv(3) != MR_r1)) {
		MR_GOTO_LAB(f_99_104_101_99_107_95_104_108_100_115_95_95_109_111_100_101_99_104_101_99_107_95_99_97_108_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_101_99_104_101_99_107_95_99_97_108_108_95_112_114_101_100_95_95_91_55_93_95_48_10_0_i11);
	}
	MR_r1 = (MR_Word) MR_string_const("check_hlds.modecheck_call", 25);
	MR_r2 = (MR_Word) MR_string_const("predicate \140check_hlds.modecheck_call.modecheck_call_pred\'/10", 60);
	MR_r3 = (MR_Word) MR_string_const("invalid proc_id", 15);
	MR_np_call_localret_ent(require__unexpected_3_0,
		f_99_104_101_99_107_95_104_108_100_115_95_95_109_111_100_101_99_104_101_99_107_95_99_97_108_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_101_99_104_101_99_107_95_99_97_108_108_95_112_114_101_100_95_95_91_55_93_95_48_10_0_i8);
MR_def_label(f_99_104_101_99_107_95_104_108_100_115_95_95_109_111_100_101_99_104_101_99_107_95_99_97_108_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_101_99_104_101_99_107_95_99_97_108_108_95_112_114_101_100_95_95_91_55_93_95_48_10_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(3);
	MR_tfield(1, MR_r2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_sv(7);
	MR_sv(3) = MR_r2;
MR_def_label(f_99_104_101_99_107_95_104_108_100_115_95_95_109_111_100_101_99_104_101_99_107_95_99_97_108_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_101_99_104_101_99_107_95_99_97_108_108_95_112_114_101_100_95_95_91_55_93_95_48_10_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_np_call_localret_ent(check_hlds__modecheck_util__compute_arg_offset_2_0,
		f_99_104_101_99_107_95_104_108_100_115_95_95_109_111_100_101_99_104_101_99_107_95_99_97_108_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_101_99_104_101_99_107_95_99_97_108_108_95_112_114_101_100_95_95_91_55_93_95_48_10_0_i16);
MR_def_label(f_99_104_101_99_107_95_104_108_100_115_95_95_109_111_100_101_99_104_101_99_107_95_99_97_108_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_101_99_104_101_99_107_95_99_97_108_108_95_112_114_101_100_95_95_91_55_93_95_48_10_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(7);
	MR_sv(7) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_markers_2_0,
		f_99_104_101_99_107_95_104_108_100_115_95_95_109_111_100_101_99_104_101_99_107_95_99_97_108_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_101_99_104_101_99_107_95_99_97_108_108_95_112_114_101_100_95_95_91_55_93_95_48_10_0_i17);
MR_def_label(f_99_104_101_99_107_95_104_108_100_115_95_95_109_111_100_101_99_104_101_99_107_95_99_97_108_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_101_99_104_101_99_107_95_99_97_108_108_95_112_114_101_100_95_95_91_55_93_95_48_10_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(10) = MR_r1;
	MR_r1 = MR_sv(12);
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_get_instmap_2_0,
		f_99_104_101_99_107_95_104_108_100_115_95_95_109_111_100_101_99_104_101_99_107_95_99_97_108_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_101_99_104_101_99_107_95_99_97_108_108_95_112_114_101_100_95_95_91_55_93_95_48_10_0_i18);
MR_def_label(f_99_104_101_99_107_95_104_108_100_115_95_95_109_111_100_101_99_104_101_99_107_95_99_97_108_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_101_99_104_101_99_107_95_99_97_108_108_95_112_114_101_100_95_95_91_55_93_95_48_10_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(3),0,0)) {
		MR_GOTO_LAB(f_99_104_101_99_107_95_104_108_100_115_95_95_109_111_100_101_99_104_101_99_107_95_99_97_108_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_101_99_104_101_99_107_95_99_97_108_108_95_112_114_101_100_95_95_91_55_93_95_48_10_0_i20);
	}
	MR_sv(11) = MR_r1;
	MR_r1 = MR_sv(10);
	MR_r2 = (MR_Integer) 3;
	MR_np_call_localret_ent(hlds__hlds_pred__check_marker_2_0,
		f_99_104_101_99_107_95_104_108_100_115_95_95_109_111_100_101_99_104_101_99_107_95_99_97_108_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_101_99_104_101_99_107_95_99_97_108_108_95_112_114_101_100_95_95_91_55_93_95_48_10_0_i23);
MR_def_label(f_99_104_101_99_107_95_104_108_100_115_95_95_109_111_100_101_99_104_101_99_107_95_99_97_108_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_101_99_104_101_99_107_95_99_97_108_108_95_112_114_101_100_95_95_91_55_93_95_48_10_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(f_99_104_101_99_107_95_104_108_100_115_95_95_109_111_100_101_99_104_101_99_107_95_99_97_108_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_101_99_104_101_99_107_95_99_97_108_108_95_112_114_101_100_95_95_91_55_93_95_48_10_0_i19);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_np_call_localret_ent(set__init_1_0,
		f_99_104_101_99_107_95_104_108_100_115_95_95_109_111_100_101_99_104_101_99_107_95_99_97_108_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_101_99_104_101_99_107_95_99_97_108_108_95_112_114_101_100_95_95_91_55_93_95_48_10_0_i26);
MR_def_label(f_99_104_101_99_107_95_104_108_100_115_95_95_109_111_100_101_99_104_101_99_107_95_99_97_108_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_101_99_104_101_99_107_95_99_97_108_108_95_112_114_101_100_95_95_91_55_93_95_48_10_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_r3 = MR_sv(12);
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_error_4_0,
		f_99_104_101_99_107_95_104_108_100_115_95_95_109_111_100_101_99_104_101_99_107_95_99_97_108_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_101_99_104_101_99_107_95_99_97_108_108_95_112_114_101_100_95_95_91_55_93_95_48_10_0_i27);
MR_def_label(f_99_104_101_99_107_95_104_108_100_115_95_95_109_111_100_101_99_104_101_99_107_95_99_97_108_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_101_99_104_101_99_107_95_99_97_108_108_95_112_114_101_100_95_95_91_55_93_95_48_10_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(fn__hlds__hlds_pred__invalid_proc_id_0_0,
		f_99_104_101_99_107_95_104_108_100_115_95_95_109_111_100_101_99_104_101_99_107_95_99_97_108_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_101_99_104_101_99_107_95_99_97_108_108_95_112_114_101_100_95_95_91_55_93_95_48_10_0_i28);
MR_def_label(f_99_104_101_99_107_95_104_108_100_115_95_95_109_111_100_101_99_104_101_99_107_95_99_97_108_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_101_99_104_101_99_107_95_99_97_108_108_95_112_114_101_100_95_95_91_55_93_95_48_10_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(4);
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_r4 = MR_sv(1);
	MR_decr_sp_and_return(14);
MR_def_label(f_99_104_101_99_107_95_104_108_100_115_95_95_109_111_100_101_99_104_101_99_107_95_99_97_108_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_101_99_104_101_99_107_95_99_97_108_108_95_112_114_101_100_95_95_91_55_93_95_48_10_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(11);
MR_def_label(f_99_104_101_99_107_95_104_108_100_115_95_95_109_111_100_101_99_104_101_99_107_95_99_97_108_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_101_99_104_101_99_107_95_99_97_108_108_95_112_114_101_100_95_95_91_55_93_95_48_10_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_sv(3),0,0)) {
		MR_GOTO_LAB(f_99_104_101_99_107_95_104_108_100_115_95_95_109_111_100_101_99_104_101_99_107_95_99_97_108_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_101_99_104_101_99_107_95_99_97_108_108_95_112_114_101_100_95_95_91_55_93_95_48_10_0_i30);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr3 = MR_sv(3);
	MR_tempr1 = MR_tfield(1, MR_tempr3, 1);
	if (MR_LTAGS_TESTR(MR_tempr1,0,0)) {
		MR_GOTO_LAB(f_99_104_101_99_107_95_104_108_100_115_95_95_109_111_100_101_99_104_101_99_107_95_99_97_108_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_101_99_104_101_99_107_95_99_97_108_108_95_112_114_101_100_95_95_91_55_93_95_48_10_0_i30);
	}
	MR_tempr1 = MR_tfield(1, MR_tempr3, 0);
	MR_sv(11) = MR_r1;
	MR_tempr2 = MR_sv(10);
	MR_sv(10) = MR_tempr1;
	MR_r1 = MR_tempr2;
	MR_r2 = (MR_Integer) 3;
	}
	MR_np_call_localret_ent(hlds__hlds_pred__check_marker_2_0,
		f_99_104_101_99_107_95_104_108_100_115_95_95_109_111_100_101_99_104_101_99_107_95_99_97_108_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_101_99_104_101_99_107_95_99_97_108_108_95_112_114_101_100_95_95_91_55_93_95_48_10_0_i37);
MR_def_label(f_99_104_101_99_107_95_104_108_100_115_95_95_109_111_100_101_99_104_101_99_107_95_99_97_108_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_101_99_104_101_99_107_95_99_97_108_108_95_112_114_101_100_95_95_91_55_93_95_48_10_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(f_99_104_101_99_107_95_104_108_100_115_95_95_109_111_100_101_99_104_101_99_107_95_99_97_108_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_101_99_104_101_99_107_95_99_97_108_108_95_112_114_101_100_95_95_91_55_93_95_48_10_0_i34);
	}
	MR_r3 = MR_sv(9);
	MR_r4 = MR_sv(10);
	MR_GOTO_LAB(f_99_104_101_99_107_95_104_108_100_115_95_95_109_111_100_101_99_104_101_99_107_95_99_97_108_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_101_99_104_101_99_107_95_99_97_108_108_95_112_114_101_100_95_95_91_55_93_95_48_10_0_i33);
MR_def_label(f_99_104_101_99_107_95_104_108_100_115_95_95_109_111_100_101_99_104_101_99_107_95_99_97_108_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_101_99_104_101_99_107_95_99_97_108_108_95_112_114_101_100_95_95_91_55_93_95_48_10_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(11);
	MR_r3 = MR_sv(10);
	if (MR_INT_NE(MR_sv(5),1)) {
		MR_GOTO_LAB(f_99_104_101_99_107_95_104_108_100_115_95_95_109_111_100_101_99_104_101_99_107_95_99_97_108_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_101_99_104_101_99_107_95_99_97_108_108_95_112_114_101_100_95_95_91_55_93_95_48_10_0_i30);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_r3 = MR_sv(9);
	MR_r4 = MR_tempr1;
	}
MR_def_label(f_99_104_101_99_107_95_104_108_100_115_95_95_109_111_100_101_99_104_101_99_107_95_99_97_108_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_101_99_104_101_99_107_95_99_97_108_108_95_112_114_101_100_95_95_91_55_93_95_48_10_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r4;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, proc_id);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, proc_info);
	MR_np_call_localret_ent(map__lookup_3_0,
		f_99_104_101_99_107_95_104_108_100_115_95_95_109_111_100_101_99_104_101_99_107_95_99_97_108_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_101_99_104_101_99_107_95_99_97_108_108_95_112_114_101_100_95_95_91_55_93_95_48_10_0_i40);
MR_def_label(f_99_104_101_99_107_95_104_108_100_115_95_95_109_111_100_101_99_104_101_99_107_95_99_97_108_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_101_99_104_101_99_107_95_99_97_108_108_95_112_114_101_100_95_95_91_55_93_95_48_10_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r2 = MR_sv(6);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_arglives_3_0,
		f_99_104_101_99_107_95_104_108_100_115_95_95_109_111_100_101_99_104_101_99_107_95_99_97_108_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_101_99_104_101_99_107_95_99_97_108_108_95_112_114_101_100_95_95_91_55_93_95_48_10_0_i41);
MR_def_label(f_99_104_101_99_107_95_104_108_100_115_95_95_109_111_100_101_99_104_101_99_107_95_99_97_108_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_101_99_104_101_99_107_95_99_97_108_108_95_112_114_101_100_95_95_91_55_93_95_48_10_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(7);
	MR_r4 = MR_sv(12);
	}
	MR_np_call_localret_ent(check_hlds__modecheck_util__modecheck_var_list_is_live_no_exact_match_5_0,
		f_99_104_101_99_107_95_104_108_100_115_95_95_109_111_100_101_99_104_101_99_107_95_99_97_108_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_101_99_104_101_99_107_95_99_97_108_108_95_112_114_101_100_95_95_91_55_93_95_48_10_0_i42);
MR_def_label(f_99_104_101_99_107_95_104_108_100_115_95_95_109_111_100_101_99_104_101_99_107_95_99_97_108_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_101_99_104_101_99_107_95_99_97_108_108_95_112_114_101_100_95_95_91_55_93_95_48_10_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_argmodes_2_0,
		f_99_104_101_99_107_95_104_108_100_115_95_95_109_111_100_101_99_104_101_99_107_95_99_97_108_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_101_99_104_101_99_107_95_99_97_108_108_95_112_114_101_100_95_95_91_55_93_95_48_10_0_i43);
MR_def_label(f_99_104_101_99_107_95_104_108_100_115_95_95_109_111_100_101_99_104_101_99_107_95_99_97_108_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_101_99_104_101_99_107_95_99_97_108_108_95_112_114_101_100_95_95_91_55_93_95_48_10_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_inst_varset_2_0,
		f_99_104_101_99_107_95_104_108_100_115_95_95_109_111_100_101_99_104_101_99_107_95_99_97_108_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_101_99_104_101_99_107_95_99_97_108_108_95_112_114_101_100_95_95_91_55_93_95_48_10_0_i44);
MR_def_label(f_99_104_101_99_107_95_104_108_100_115_95_95_109_111_100_101_99_104_101_99_107_95_99_97_108_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_101_99_104_101_99_107_95_99_97_108_108_95_112_114_101_100_95_95_91_55_93_95_48_10_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(9);
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_get_instvarset_2_0,
		f_99_104_101_99_107_95_104_108_100_115_95_95_109_111_100_101_99_104_101_99_107_95_99_97_108_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_101_99_104_101_99_107_95_99_97_108_108_95_112_114_101_100_95_95_91_55_93_95_48_10_0_i45);
MR_def_label(f_99_104_101_99_107_95_104_108_100_115_95_95_109_111_100_101_99_104_101_99_107_95_99_97_108_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_101_99_104_101_99_107_95_99_97_108_108_95_112_114_101_100_95_95_91_55_93_95_48_10_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(3);
	MR_np_call_localret_ent(parse_tree__prog_mode__rename_apart_inst_vars_4_0,
		f_99_104_101_99_107_95_104_108_100_115_95_95_109_111_100_101_99_104_101_99_107_95_99_97_108_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_101_99_104_101_99_107_95_99_97_108_108_95_112_114_101_100_95_95_91_55_93_95_48_10_0_i46);
MR_def_label(f_99_104_101_99_107_95_104_108_100_115_95_95_109_111_100_101_99_104_101_99_107_95_99_97_108_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_101_99_104_101_99_107_95_99_97_108_108_95_112_114_101_100_95_95_91_55_93_95_48_10_0,46)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(check_hlds__mode_util__mode_list_get_initial_insts_3_0,
		f_99_104_101_99_107_95_104_108_100_115_95_95_109_111_100_101_99_104_101_99_107_95_99_97_108_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_101_99_104_101_99_107_95_99_97_108_108_95_112_114_101_100_95_95_91_55_93_95_48_10_0_i47);
MR_def_label(f_99_104_101_99_107_95_104_108_100_115_95_95_109_111_100_101_99_104_101_99_107_95_99_97_108_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_101_99_104_101_99_107_95_99_97_108_108_95_112_114_101_100_95_95_91_55_93_95_48_10_0,47)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(7);
	MR_r4 = MR_sv(9);
	}
	MR_np_call_localret_ent(check_hlds__modecheck_util__modecheck_var_has_inst_list_no_exact_match_6_0,
		f_99_104_101_99_107_95_104_108_100_115_95_95_109_111_100_101_99_104_101_99_107_95_99_97_108_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_101_99_104_101_99_107_95_99_97_108_108_95_112_114_101_100_95_95_91_55_93_95_48_10_0_i48);
MR_def_label(f_99_104_101_99_107_95_104_108_100_115_95_95_109_111_100_101_99_104_101_99_107_95_99_97_108_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_101_99_104_101_99_107_95_99_97_108_108_95_112_114_101_100_95_95_91_55_93_95_48_10_0,48)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_sv(8);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(4);
	MR_r5 = MR_sv(7);
	MR_r6 = MR_tempr1;
	MR_r7 = MR_tempr2;
	}
	MR_np_call_localret_ent(check_hlds__modecheck_call__modecheck_end_of_call_10_0,
		f_99_104_101_99_107_95_104_108_100_115_95_95_109_111_100_101_99_104_101_99_107_95_99_97_108_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_101_99_104_101_99_107_95_99_97_108_108_95_112_114_101_100_95_95_91_55_93_95_48_10_0_i49);
MR_def_label(f_99_104_101_99_107_95_104_108_100_115_95_95_109_111_100_101_99_104_101_99_107_95_99_97_108_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_101_99_104_101_99_107_95_99_97_108_108_95_112_114_101_100_95_95_91_55_93_95_48_10_0,49)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_tempr3 = MR_r3;
	MR_r3 = MR_tempr2;
	MR_r4 = MR_tempr3;
	MR_decr_sp_and_return(14);
	}
MR_def_label(f_99_104_101_99_107_95_104_108_100_115_95_95_109_111_100_101_99_104_101_99_107_95_99_97_108_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_101_99_104_101_99_107_95_99_97_108_108_95_112_114_101_100_95_95_91_55_93_95_48_10_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(11) = MR_r1;
	MR_r1 = MR_sv(12);
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_get_errors_2_0,
		f_99_104_101_99_107_95_104_108_100_115_95_95_109_111_100_101_99_104_101_99_107_95_99_97_108_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_101_99_104_101_99_107_95_99_97_108_108_95_112_114_101_100_95_95_91_55_93_95_48_10_0_i50);
MR_def_label(f_99_104_101_99_107_95_104_108_100_115_95_95_109_111_100_101_99_104_101_99_107_95_99_97_108_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_101_99_104_101_99_107_95_99_97_108_108_95_112_114_101_100_95_95_91_55_93_95_48_10_0,50)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = MR_sv(12);
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_set_errors_3_0,
		f_99_104_101_99_107_95_104_108_100_115_95_95_109_111_100_101_99_104_101_99_107_95_99_97_108_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_101_99_104_101_99_107_95_99_97_108_108_95_112_114_101_100_95_95_91_55_93_95_48_10_0_i51);
MR_def_label(f_99_104_101_99_107_95_104_108_100_115_95_95_109_111_100_101_99_104_101_99_107_95_99_97_108_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_101_99_104_101_99_107_95_99_97_108_108_95_112_114_101_100_95_95_91_55_93_95_48_10_0,51)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_sv(12) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_sv(13) = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r1 = MR_sv(13);
	MR_np_call_localret_ent(set__init_1_0,
		f_99_104_101_99_107_95_104_108_100_115_95_95_109_111_100_101_99_104_101_99_107_95_99_97_108_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_101_99_104_101_99_107_95_99_97_108_108_95_112_114_101_100_95_95_91_55_93_95_48_10_0_i53);
MR_def_label(f_99_104_101_99_107_95_104_108_100_115_95_95_109_111_100_101_99_104_101_99_107_95_99_97_108_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_101_99_104_101_99_107_95_99_97_108_108_95_112_114_101_100_95_95_91_55_93_95_48_10_0,53)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(9);
	MR_r3 = MR_sv(4);
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	MR_r5 = MR_tempr1;
	MR_r6 = MR_sv(6);
	}
	MR_np_call_localret_ent(f_99_104_101_99_107_95_104_108_100_115_95_95_109_111_100_101_99_104_101_99_107_95_99_97_108_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_101_99_104_101_99_107_95_102_105_110_100_95_109_97_116_99_104_105_110_103_95_109_111_100_101_115_95_95_91_50_93_95_48_10_0,
		f_99_104_101_99_107_95_104_108_100_115_95_95_109_111_100_101_99_104_101_99_107_95_99_97_108_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_101_99_104_101_99_107_95_99_97_108_108_95_112_114_101_100_95_95_91_55_93_95_48_10_0_i54);
MR_def_label(f_99_104_101_99_107_95_104_108_100_115_95_95_109_111_100_101_99_104_101_99_107_95_99_97_108_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_101_99_104_101_99_107_95_99_97_108_108_95_112_114_101_100_95_95_91_55_93_95_48_10_0,54)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(f_99_104_101_99_107_95_104_108_100_115_95_95_109_111_100_101_99_104_101_99_107_95_99_97_108_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_101_99_104_101_99_107_95_99_97_108_108_95_112_114_101_100_95_95_91_55_93_95_48_10_0_i56);
	}
	MR_r1 = MR_sv(1);
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(4);
	MR_tempr2 = MR_r3;
	MR_r3 = MR_sv(2);
	MR_r4 = MR_tempr1;
	MR_r5 = MR_tempr2;
	}
	MR_np_call_localret_ent(check_hlds__modecheck_call__no_matching_modes_7_0,
		f_99_104_101_99_107_95_104_108_100_115_95_95_109_111_100_101_99_104_101_99_107_95_99_97_108_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_101_99_104_101_99_107_95_99_97_108_108_95_112_114_101_100_95_95_91_55_93_95_48_10_0_i57);
MR_def_label(f_99_104_101_99_107_95_104_108_100_115_95_95_109_111_100_101_99_104_101_99_107_95_99_97_108_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_101_99_104_101_99_107_95_99_97_108_108_95_112_114_101_100_95_95_91_55_93_95_48_10_0,57)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_sv(3) = MR_sv(4);
	MR_sv(1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_r2;
	MR_GOTO_LAB(f_99_104_101_99_107_95_104_108_100_115_95_95_109_111_100_101_99_104_101_99_107_95_99_97_108_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_101_99_104_101_99_107_95_99_97_108_108_95_112_114_101_100_95_95_91_55_93_95_48_10_0_i55);
MR_def_label(f_99_104_101_99_107_95_104_108_100_115_95_95_109_111_100_101_99_104_101_99_107_95_99_97_108_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_101_99_104_101_99_107_95_99_97_108_108_95_112_114_101_100_95_95_91_55_93_95_48_10_0,56)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r3;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(check_hlds__modecheck_call, proc_mode);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__reverse_2_0,
		f_99_104_101_99_107_95_104_108_100_115_95_95_109_111_100_101_99_104_101_99_107_95_99_97_108_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_101_99_104_101_99_107_95_99_97_108_108_95_112_114_101_100_95_95_91_55_93_95_48_10_0_i58);
MR_def_label(f_99_104_101_99_107_95_104_108_100_115_95_95_109_111_100_101_99_104_101_99_107_95_99_97_108_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_101_99_104_101_99_107_95_99_97_108_108_95_112_114_101_100_95_95_91_55_93_95_48_10_0,58)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(9);
	MR_r4 = MR_sv(4);
	}
	MR_np_call_localret_ent(f_99_104_101_99_107_95_104_108_100_115_95_95_109_111_100_101_99_104_101_99_107_95_99_97_108_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_8_0,
		f_99_104_101_99_107_95_104_108_100_115_95_95_109_111_100_101_99_104_101_99_107_95_99_97_108_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_101_99_104_101_99_107_95_99_97_108_108_95_112_114_101_100_95_95_91_55_93_95_48_10_0_i59);
MR_def_label(f_99_104_101_99_107_95_104_108_100_115_95_95_109_111_100_101_99_104_101_99_107_95_99_97_108_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_101_99_104_101_99_107_95_99_97_108_108_95_112_114_101_100_95_95_91_55_93_95_48_10_0,59)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(9);
	MR_sv(9) = MR_r3;
	MR_sv(10) = MR_r2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, proc_id);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, proc_info);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(2);
	}
	MR_np_call_localret_ent(map__lookup_3_0,
		f_99_104_101_99_107_95_104_108_100_115_95_95_109_111_100_101_99_104_101_99_107_95_99_97_108_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_101_99_104_101_99_107_95_99_97_108_108_95_112_114_101_100_95_95_91_55_93_95_48_10_0_i60);
MR_def_label(f_99_104_101_99_107_95_104_108_100_115_95_95_109_111_100_101_99_104_101_99_107_95_99_97_108_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_101_99_104_101_99_107_95_99_97_108_108_95_112_114_101_100_95_95_91_55_93_95_48_10_0,60)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_np_call_localret_ent(fn__hlds__hlds_pred__mode_errors_1_0,
		f_99_104_101_99_107_95_104_108_100_115_95_95_109_111_100_101_99_104_101_99_107_95_99_97_108_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_101_99_104_101_99_107_95_99_97_108_108_95_112_114_101_100_95_95_91_55_93_95_48_10_0_i61);
MR_def_label(f_99_104_101_99_107_95_104_108_100_115_95_95_109_111_100_101_99_104_101_99_107_95_99_97_108_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_101_99_104_101_99_107_95_99_97_108_108_95_112_114_101_100_95_95_91_55_93_95_48_10_0,61)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(f_99_104_101_99_107_95_104_108_100_115_95_95_109_111_100_101_99_104_101_99_107_95_99_97_108_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_101_99_104_101_99_107_95_99_97_108_108_95_112_114_101_100_95_95_91_55_93_95_48_10_0_i63);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(8);
	MR_r3 = MR_sv(9);
	MR_r4 = MR_sv(4);
	MR_r5 = MR_sv(7);
	MR_r6 = MR_sv(10);
	MR_r7 = MR_sv(6);
	MR_np_call_localret_ent(check_hlds__modecheck_call__modecheck_end_of_call_10_0,
		f_99_104_101_99_107_95_104_108_100_115_95_95_109_111_100_101_99_104_101_99_107_95_99_97_108_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_101_99_104_101_99_107_95_99_97_108_108_95_112_114_101_100_95_95_91_55_93_95_48_10_0_i64);
MR_def_label(f_99_104_101_99_107_95_104_108_100_115_95_95_109_111_100_101_99_104_101_99_107_95_99_97_108_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_101_99_104_101_99_107_95_99_97_108_108_95_112_114_101_100_95_95_91_55_93_95_48_10_0,64)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_sv(1) = MR_r2;
	MR_r1 = MR_r3;
	MR_GOTO_LAB(f_99_104_101_99_107_95_104_108_100_115_95_95_109_111_100_101_99_104_101_99_107_95_99_97_108_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_101_99_104_101_99_107_95_99_97_108_108_95_112_114_101_100_95_95_91_55_93_95_48_10_0_i55);
MR_def_label(f_99_104_101_99_107_95_104_108_100_115_95_95_109_111_100_101_99_104_101_99_107_95_99_97_108_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_101_99_104_101_99_107_95_99_97_108_108_95_112_114_101_100_95_95_91_55_93_95_48_10_0,63)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(12);
	MR_r2 = MR_sv(13);
	MR_r3 = MR_sv(3);
	MR_np_call_localret_ent(fn__f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_105_115_116_95_116_111_95_115_101_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_1_0,
		f_99_104_101_99_107_95_104_108_100_115_95_95_109_111_100_101_99_104_101_99_107_95_99_97_108_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_101_99_104_101_99_107_95_99_97_108_108_95_112_114_101_100_95_95_91_55_93_95_48_10_0_i65);
MR_def_label(f_99_104_101_99_107_95_104_108_100_115_95_95_109_111_100_101_99_104_101_99_107_95_99_97_108_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_101_99_104_101_99_107_95_99_97_108_108_95_112_114_101_100_95_95_91_55_93_95_48_10_0,65)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_r1 = MR_sv(11);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(hlds__instmap__instmap_lookup_vars_3_0,
		f_99_104_101_99_107_95_104_108_100_115_95_95_109_111_100_101_99_104_101_99_107_95_99_97_108_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_101_99_104_101_99_107_95_99_97_108_108_95_112_114_101_100_95_95_91_55_93_95_48_10_0_i66);
MR_def_label(f_99_104_101_99_107_95_104_108_100_115_95_95_109_111_100_101_99_104_101_99_107_95_99_97_108_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_101_99_104_101_99_107_95_99_97_108_108_95_112_114_101_100_95_95_91_55_93_95_48_10_0,66)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(6);
	MR_sv(6) = MR_r1;
	MR_r1 = (MR_Integer) 0;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_set_call_arg_context_3_0,
		f_99_104_101_99_107_95_104_108_100_115_95_95_109_111_100_101_99_104_101_99_107_95_99_97_108_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_101_99_104_101_99_107_95_99_97_108_108_95_112_114_101_100_95_95_91_55_93_95_48_10_0_i67);
MR_def_label(f_99_104_101_99_107_95_104_108_100_115_95_95_109_111_100_101_99_104_101_99_107_95_99_97_108_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_101_99_104_101_99_107_95_99_97_108_108_95_112_114_101_100_95_95_91_55_93_95_48_10_0,67)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 3, (MR_Integer) 6);
	MR_tfield(3, MR_r2, 0) = (MR_Integer) 7;
	MR_tfield(3, MR_r2, 1) = MR_sv(3);
	MR_tfield(3, MR_r2, 2) = MR_sv(6);
	MR_tfield(3, MR_r2, 3) = MR_sv(1);
	MR_tfield(3, MR_r2, 4) = MR_sv(2);
	MR_tfield(3, MR_r2, 5) = MR_sv(4);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_error_4_0,
		f_99_104_101_99_107_95_104_108_100_115_95_95_109_111_100_101_99_104_101_99_107_95_99_97_108_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_101_99_104_101_99_107_95_99_97_108_108_95_112_114_101_100_95_95_91_55_93_95_48_10_0_i69);
MR_def_label(f_99_104_101_99_107_95_104_108_100_115_95_95_109_111_100_101_99_104_101_99_107_95_99_97_108_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_101_99_104_101_99_107_95_99_97_108_108_95_112_114_101_100_95_95_91_55_93_95_48_10_0,69)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = (MR_Word) MR_tbmkword(0, 0);
MR_def_label(f_99_104_101_99_107_95_104_108_100_115_95_95_109_111_100_101_99_104_101_99_107_95_99_97_108_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_101_99_104_101_99_107_95_99_97_108_108_95_112_114_101_100_95_95_91_55_93_95_48_10_0,55)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_get_errors_2_0,
		f_99_104_101_99_107_95_104_108_100_115_95_95_109_111_100_101_99_104_101_99_107_95_99_97_108_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_101_99_104_101_99_107_95_99_97_108_108_95_112_114_101_100_95_95_91_55_93_95_48_10_0_i70);
MR_def_label(f_99_104_101_99_107_95_104_108_100_115_95_95_109_111_100_101_99_104_101_99_107_95_99_97_108_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_101_99_104_101_99_107_95_99_97_108_108_95_112_114_101_100_95_95_91_55_93_95_48_10_0,70)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(check_hlds__mode_errors, mode_error_info);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__append_3_1,
		f_99_104_101_99_107_95_104_108_100_115_95_95_109_111_100_101_99_104_101_99_107_95_99_97_108_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_101_99_104_101_99_107_95_99_97_108_108_95_112_114_101_100_95_95_91_55_93_95_48_10_0_i71);
MR_def_label(f_99_104_101_99_107_95_104_108_100_115_95_95_109_111_100_101_99_104_101_99_107_95_99_97_108_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_101_99_104_101_99_107_95_99_97_108_108_95_112_114_101_100_95_95_91_55_93_95_48_10_0,71)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_set_errors_3_0,
		f_99_104_101_99_107_95_104_108_100_115_95_95_109_111_100_101_99_104_101_99_107_95_99_97_108_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_101_99_104_101_99_107_95_99_97_108_108_95_112_114_101_100_95_95_91_55_93_95_48_10_0_i72);
MR_def_label(f_99_104_101_99_107_95_104_108_100_115_95_95_109_111_100_101_99_104_101_99_107_95_99_97_108_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_101_99_104_101_99_107_95_99_97_108_108_95_112_114_101_100_95_95_91_55_93_95_48_10_0,72)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_tempr1;
	MR_decr_sp_and_return(14);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__hlds_pred__proc_info_is_valid_mode_1_0);
MR_decl_entry(check_hlds__modecheck_util__modecheck_var_has_inst_list_exact_match_6_0);
MR_decl_entry(f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_117_110_105_111_110_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0);

MR_BEGIN_MODULE(check_hlds__modecheck_call_module18)
	MR_init_entry1(f_99_104_101_99_107_95_104_108_100_115_95_95_109_111_100_101_99_104_101_99_107_95_99_97_108_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_101_99_104_101_99_107_95_102_105_110_100_95_109_97_116_99_104_105_110_103_95_109_111_100_101_115_95_95_91_50_93_95_48_10_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__f_99_104_101_99_107_95_104_108_100_115_95_95_109_111_100_101_99_104_101_99_107_95_99_97_108_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_101_99_104_101_99_107_95_102_105_110_100_95_109_97_116_99_104_105_110_103_95_109_111_100_101_115_95_95_91_50_93_95_48_10_0);
	MR_init_label10(f_99_104_101_99_107_95_104_108_100_115_95_95_109_111_100_101_99_104_101_99_107_95_99_97_108_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_101_99_104_101_99_107_95_102_105_110_100_95_109_97_116_99_104_105_110_103_95_109_111_100_101_115_95_95_91_50_93_95_48_10_0,48,3,4,5,6,7,8,9,10,11)
	MR_init_label8(f_99_104_101_99_107_95_104_108_100_115_95_95_109_111_100_101_99_104_101_99_107_95_99_97_108_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_101_99_104_101_99_107_95_102_105_110_100_95_109_97_116_99_104_105_110_103_95_109_111_100_101_115_95_95_91_50_93_95_48_10_0,12,15,13,18,20,22,25,27)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__pred__modecheck_find_matching_modes__[2]_0'/10 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(f_99_104_101_99_107_95_104_108_100_115_95_95_109_111_100_101_99_104_101_99_107_95_99_97_108_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_101_99_104_101_99_107_95_102_105_110_100_95_109_97_116_99_104_105_110_103_95_109_111_100_101_115_95_95_91_50_93_95_48_10_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(11);
	MR_sv(11) = (MR_Word) MR_succip;
MR_def_label(f_99_104_101_99_107_95_104_108_100_115_95_95_109_111_100_101_99_104_101_99_107_95_99_97_108_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_101_99_104_101_99_107_95_102_105_110_100_95_109_97_116_99_104_105_110_103_95_109_111_100_101_115_95_95_91_50_93_95_48_10_0,48)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(f_99_104_101_99_107_95_104_108_100_115_95_95_109_111_100_101_99_104_101_99_107_95_99_97_108_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_101_99_104_101_99_107_95_102_105_110_100_95_109_97_116_99_104_105_110_103_95_109_111_100_101_115_95_95_91_50_93_95_48_10_0_i3);
	}
	MR_r1 = MR_r4;
	MR_r2 = MR_r5;
	MR_r3 = MR_r6;
	MR_decr_sp_and_return(11);
MR_def_label(f_99_104_101_99_107_95_104_108_100_115_95_95_109_111_100_101_99_104_101_99_107_95_99_97_108_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_101_99_104_101_99_107_95_102_105_110_100_95_109_97_116_99_104_105_110_103_95_109_111_100_101_115_95_95_91_50_93_95_48_10_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_r5;
	MR_sv(5) = MR_r6;
	MR_sv(6) = MR_tfield(1, MR_r1, 0);
	MR_sv(7) = MR_tfield(1, MR_r1, 1);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, proc_id);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, proc_info);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(6);
	MR_np_call_localret_ent(map__lookup_3_0,
		f_99_104_101_99_107_95_104_108_100_115_95_95_109_111_100_101_99_104_101_99_107_95_99_97_108_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_101_99_104_101_99_107_95_102_105_110_100_95_109_97_116_99_104_105_110_103_95_109_111_100_101_115_95_95_91_50_93_95_48_10_0_i4);
MR_def_label(f_99_104_101_99_107_95_104_108_100_115_95_95_109_111_100_101_99_104_101_99_107_95_99_97_108_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_101_99_104_101_99_107_95_102_105_110_100_95_109_97_116_99_104_105_110_103_95_109_111_100_101_115_95_95_91_50_93_95_48_10_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_argmodes_2_0,
		f_99_104_101_99_107_95_104_108_100_115_95_95_109_111_100_101_99_104_101_99_107_95_99_97_108_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_101_99_104_101_99_107_95_102_105_110_100_95_109_97_116_99_104_105_110_103_95_109_111_100_101_115_95_95_91_50_93_95_48_10_0_i5);
MR_def_label(f_99_104_101_99_107_95_104_108_100_115_95_95_109_111_100_101_99_104_101_99_107_95_99_97_108_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_101_99_104_101_99_107_95_102_105_110_100_95_109_97_116_99_104_105_110_103_95_109_111_100_101_115_95_95_91_50_93_95_48_10_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_r1;
	MR_r1 = MR_sv(8);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_inst_varset_2_0,
		f_99_104_101_99_107_95_104_108_100_115_95_95_109_111_100_101_99_104_101_99_107_95_99_97_108_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_101_99_104_101_99_107_95_102_105_110_100_95_109_97_116_99_104_105_110_103_95_109_111_100_101_115_95_95_91_50_93_95_48_10_0_i6);
MR_def_label(f_99_104_101_99_107_95_104_108_100_115_95_95_109_111_100_101_99_104_101_99_107_95_99_97_108_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_101_99_104_101_99_107_95_102_105_110_100_95_109_97_116_99_104_105_110_103_95_109_111_100_101_115_95_95_91_50_93_95_48_10_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(10) = MR_r1;
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_get_instvarset_2_0,
		f_99_104_101_99_107_95_104_108_100_115_95_95_109_111_100_101_99_104_101_99_107_95_99_97_108_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_101_99_104_101_99_107_95_102_105_110_100_95_109_97_116_99_104_105_110_103_95_109_111_100_101_115_95_95_91_50_93_95_48_10_0_i7);
MR_def_label(f_99_104_101_99_107_95_104_108_100_115_95_95_109_111_100_101_99_104_101_99_107_95_99_97_108_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_101_99_104_101_99_107_95_102_105_110_100_95_109_97_116_99_104_105_110_103_95_109_111_100_101_115_95_95_91_50_93_95_48_10_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(10);
	MR_r3 = MR_sv(9);
	MR_np_call_localret_ent(parse_tree__prog_mode__rename_apart_inst_vars_4_0,
		f_99_104_101_99_107_95_104_108_100_115_95_95_109_111_100_101_99_104_101_99_107_95_99_97_108_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_101_99_104_101_99_107_95_102_105_110_100_95_109_97_116_99_104_105_110_103_95_109_111_100_101_115_95_95_91_50_93_95_48_10_0_i8);
MR_def_label(f_99_104_101_99_107_95_104_108_100_115_95_95_109_111_100_101_99_104_101_99_107_95_99_97_108_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_101_99_104_101_99_107_95_102_105_110_100_95_109_97_116_99_104_105_110_103_95_109_111_100_101_115_95_95_91_50_93_95_48_10_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_r1;
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_get_module_info_2_0,
		f_99_104_101_99_107_95_104_108_100_115_95_95_109_111_100_101_99_104_101_99_107_95_99_97_108_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_101_99_104_101_99_107_95_102_105_110_100_95_109_97_116_99_104_105_110_103_95_109_111_100_101_115_95_95_91_50_93_95_48_10_0_i9);
MR_def_label(f_99_104_101_99_107_95_104_108_100_115_95_95_109_111_100_101_99_104_101_99_107_95_99_97_108_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_101_99_104_101_99_107_95_102_105_110_100_95_109_97_116_99_104_105_110_103_95_109_111_100_101_115_95_95_91_50_93_95_48_10_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(10) = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(10);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_arglives_3_0,
		f_99_104_101_99_107_95_104_108_100_115_95_95_109_111_100_101_99_104_101_99_107_95_99_97_108_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_101_99_104_101_99_107_95_102_105_110_100_95_109_97_116_99_104_105_110_103_95_109_111_100_101_115_95_95_91_50_93_95_48_10_0_i10);
MR_def_label(f_99_104_101_99_107_95_104_108_100_115_95_95_109_111_100_101_99_104_101_99_107_95_99_97_108_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_101_99_104_101_99_107_95_102_105_110_100_95_109_97_116_99_104_105_110_103_95_109_111_100_101_115_95_95_91_50_93_95_48_10_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	MR_r3 = (MR_Integer) 0;
	MR_r4 = MR_sv(5);
	}
	MR_np_call_localret_ent(check_hlds__modecheck_util__modecheck_var_list_is_live_no_exact_match_5_0,
		f_99_104_101_99_107_95_104_108_100_115_95_95_109_111_100_101_99_104_101_99_107_95_99_97_108_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_101_99_104_101_99_107_95_102_105_110_100_95_109_97_116_99_104_105_110_103_95_109_111_100_101_115_95_95_91_50_93_95_48_10_0_i11);
MR_def_label(f_99_104_101_99_107_95_104_108_100_115_95_95_109_111_100_101_99_104_101_99_107_95_99_97_108_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_101_99_104_101_99_107_95_102_105_110_100_95_109_97_116_99_104_105_110_103_95_109_111_100_101_115_95_95_91_50_93_95_48_10_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(10);
	MR_sv(10) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(9);
	}
	MR_np_call_localret_ent(check_hlds__mode_util__mode_list_get_initial_insts_3_0,
		f_99_104_101_99_107_95_104_108_100_115_95_95_109_111_100_101_99_104_101_99_107_95_99_97_108_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_101_99_104_101_99_107_95_102_105_110_100_95_109_97_116_99_104_105_110_103_95_109_111_100_101_115_95_95_91_50_93_95_48_10_0_i12);
MR_def_label(f_99_104_101_99_107_95_104_108_100_115_95_95_109_111_100_101_99_104_101_99_107_95_99_97_108_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_101_99_104_101_99_107_95_102_105_110_100_95_109_97_116_99_104_105_110_103_95_109_111_100_101_115_95_95_91_50_93_95_48_10_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(8);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_is_valid_mode_1_0,
		f_99_104_101_99_107_95_104_108_100_115_95_95_109_111_100_101_99_104_101_99_107_95_99_97_108_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_101_99_104_101_99_107_95_102_105_110_100_95_109_97_116_99_104_105_110_103_95_109_111_100_101_115_95_95_91_50_93_95_48_10_0_i15);
MR_def_label(f_99_104_101_99_107_95_104_108_100_115_95_95_109_111_100_101_99_104_101_99_107_95_99_97_108_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_101_99_104_101_99_107_95_102_105_110_100_95_109_97_116_99_104_105_110_103_95_109_111_100_101_115_95_95_91_50_93_95_48_10_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(f_99_104_101_99_107_95_104_108_100_115_95_95_109_111_100_101_99_104_101_99_107_95_99_97_108_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_101_99_104_101_99_107_95_102_105_110_100_95_109_97_116_99_104_105_110_103_95_109_111_100_101_115_95_95_91_50_93_95_48_10_0_i13);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(5);
	MR_r3 = (MR_Integer) 0;
	MR_r4 = MR_sv(10);
	MR_np_call_localret_ent(check_hlds__modecheck_util__modecheck_var_has_inst_list_no_exact_match_6_0,
		f_99_104_101_99_107_95_104_108_100_115_95_95_109_111_100_101_99_104_101_99_107_95_99_97_108_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_101_99_104_101_99_107_95_102_105_110_100_95_109_97_116_99_104_105_110_103_95_109_111_100_101_115_95_95_91_50_93_95_48_10_0_i18);
MR_def_label(f_99_104_101_99_107_95_104_108_100_115_95_95_109_111_100_101_99_104_101_99_107_95_99_97_108_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_101_99_104_101_99_107_95_102_105_110_100_95_109_97_116_99_104_105_110_103_95_109_111_100_101_115_95_95_91_50_93_95_48_10_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	MR_r3 = (MR_Integer) 0;
	MR_r4 = MR_sv(10);
	}
	MR_np_call_localret_ent(check_hlds__modecheck_util__modecheck_var_has_inst_list_exact_match_6_0,
		f_99_104_101_99_107_95_104_108_100_115_95_95_109_111_100_101_99_104_101_99_107_95_99_97_108_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_101_99_104_101_99_107_95_102_105_110_100_95_109_97_116_99_104_105_110_103_95_109_111_100_101_115_95_95_91_50_93_95_48_10_0_i18);
MR_def_label(f_99_104_101_99_107_95_104_108_100_115_95_95_109_111_100_101_99_104_101_99_107_95_99_97_108_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_101_99_104_101_99_107_95_102_105_110_100_95_109_97_116_99_104_105_110_103_95_109_111_100_101_115_95_95_91_50_93_95_48_10_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = MR_r2;
	MR_sv(8) = MR_r1;
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_get_errors_2_0,
		f_99_104_101_99_107_95_104_108_100_115_95_95_109_111_100_101_99_104_101_99_107_95_99_97_108_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_101_99_104_101_99_107_95_102_105_110_100_95_109_97_116_99_104_105_110_103_95_109_111_100_101_115_95_95_91_50_93_95_48_10_0_i20);
MR_def_label(f_99_104_101_99_107_95_104_108_100_115_95_95_109_111_100_101_99_104_101_99_107_95_99_97_108_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_101_99_104_101_99_107_95_102_105_110_100_95_109_97_116_99_104_105_110_103_95_109_111_100_101_115_95_95_91_50_93_95_48_10_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(f_99_104_101_99_107_95_104_108_100_115_95_95_109_111_100_101_99_104_101_99_107_95_99_97_108_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_101_99_104_101_99_107_95_102_105_110_100_95_109_97_116_99_104_105_110_103_95_109_111_100_101_115_95_95_91_50_93_95_48_10_0_i22);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(6);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(5);
	MR_tfield(0, MR_tempr1, 2) = MR_sv(9);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_r4 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = MR_sv(3);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r1 = MR_sv(7);
	MR_r6 = MR_sv(8);
	MR_r5 = MR_sv(4);
	MR_succip_word = MR_sv(11);
	MR_GOTO_LAB(f_99_104_101_99_107_95_104_108_100_115_95_95_109_111_100_101_99_104_101_99_107_95_99_97_108_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_101_99_104_101_99_107_95_102_105_110_100_95_109_97_116_99_104_105_110_103_95_109_111_100_101_115_95_95_91_50_93_95_48_10_0_i48);
	}
MR_def_label(f_99_104_101_99_107_95_104_108_100_115_95_95_109_111_100_101_99_104_101_99_107_95_99_97_108_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_101_99_104_101_99_107_95_102_105_110_100_95_109_97_116_99_104_105_110_103_95_109_111_100_101_115_95_95_91_50_93_95_48_10_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_tfield(1, MR_r1, 0);
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = MR_sv(8);
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_set_errors_3_0,
		f_99_104_101_99_107_95_104_108_100_115_95_95_109_111_100_101_99_104_101_99_107_95_99_97_108_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_101_99_104_101_99_107_95_102_105_110_100_95_109_97_116_99_104_105_110_103_95_109_111_100_101_115_95_95_91_50_93_95_48_10_0_i25);
MR_def_label(f_99_104_101_99_107_95_104_108_100_115_95_95_109_111_100_101_99_104_101_99_107_95_99_97_108_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_101_99_104_101_99_107_95_102_105_110_100_95_109_97_116_99_104_105_110_103_95_109_111_100_101_115_95_95_91_50_93_95_48_10_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tfield(0, MR_sv(5), 0);
	}
	MR_np_call_localret_ent(f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_117_110_105_111_110_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		f_99_104_101_99_107_95_104_108_100_115_95_95_109_111_100_101_99_104_101_99_107_95_99_97_108_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_101_99_104_101_99_107_95_102_105_110_100_95_109_97_116_99_104_105_110_103_95_109_111_100_101_115_95_95_91_50_93_95_48_10_0_i27);
MR_def_label(f_99_104_101_99_107_95_104_108_100_115_95_95_109_111_100_101_99_104_101_99_107_95_99_97_108_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_101_99_104_101_99_107_95_102_105_110_100_95_109_97_116_99_104_105_110_103_95_109_111_100_101_115_95_95_91_50_93_95_48_10_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r4 = MR_sv(3);
	MR_r6 = MR_sv(4);
	MR_r5 = MR_tempr1;
	MR_succip_word = MR_sv(11);
	MR_GOTO_LAB(f_99_104_101_99_107_95_104_108_100_115_95_95_109_111_100_101_99_104_101_99_107_95_99_97_108_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_101_99_104_101_99_107_95_102_105_110_100_95_109_97_116_99_104_105_110_103_95_109_111_100_101_115_95_95_91_50_93_95_48_10_0_i48);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(list__member_2_1);
MR_decl_entry(list__map_3_0);
MR_decl_entry(check_hlds__det_report__compare_determinisms_3_0);
MR_declare_entry(MR_do_redo);

MR_BEGIN_MODULE(check_hlds__modecheck_call_module19)
	MR_init_entry1(f_99_104_101_99_107_95_104_108_100_115_95_95_109_111_100_101_99_104_101_99_107_95_99_97_108_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_8_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__f_99_104_101_99_107_95_104_108_100_115_95_95_109_111_100_101_99_104_101_99_107_95_99_97_108_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_8_0);
	MR_init_label10(f_99_104_101_99_107_95_104_108_100_115_95_95_109_111_100_101_99_104_101_99_107_95_99_97_108_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_8_0,228,10,11,12,13,14,15,16,19,20)
	MR_init_label10(f_99_104_101_99_107_95_104_108_100_115_95_95_109_111_100_101_99_104_101_99_107_95_99_97_108_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_8_0,21,22,26,25,29,30,31,32,33,34)
	MR_init_label10(f_99_104_101_99_107_95_104_108_100_115_95_95_109_111_100_101_99_104_101_99_107_95_99_97_108_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_8_0,35,37,38,36,42,43,44,40,45,48)
	MR_init_label10(f_99_104_101_99_107_95_104_108_100_115_95_95_109_111_100_101_99_104_101_99_107_95_99_97_108_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_8_0,49,50,46,52,53,54,39,8,4,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__pred__choose_best_match__[3]_0'/8 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(f_99_104_101_99_107_95_104_108_100_115_95_95_109_111_100_101_99_104_101_99_107_95_99_97_108_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_8_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(19);
	MR_sv(19) = (MR_Word) MR_succip;
MR_def_label(f_99_104_101_99_107_95_104_108_100_115_95_95_109_111_100_101_99_104_101_99_107_95_99_97_108_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_8_0,228)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r2,0,0)) {
		MR_GOTO_LAB(f_99_104_101_99_107_95_104_108_100_115_95_95_109_111_100_101_99_104_101_99_107_95_99_97_108_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_8_0_i3);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(1, MR_r2, 1);
	MR_tempr2 = MR_tfield(1, MR_r2, 0);
	MR_sv(6) = MR_tfield(0, MR_tempr2, 2);
	MR_sv(5) = MR_tfield(0, MR_tempr2, 1);
	MR_sv(4) = MR_tfield(0, MR_tempr2, 0);
	MR_sv(16) = (MR_Word) MR_redoip_slot(MR_maxfr);
	MR_sv(17) = (MR_Word) MR_redofr_slot(MR_maxfr);
	MR_save_maxfr(MR_sv(18));
	MR_redofr_slot_word(MR_maxfr) = (MR_Word) MR_curfr;
	MR_redoip_slot_word(MR_maxfr) = (MR_Word) MR_LABEL_AP(f_99_104_101_99_107_95_104_108_100_115_95_95_109_111_100_101_99_104_101_99_107_95_99_97_108_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_8_0_i8);
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_sv(7) = MR_tempr1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(check_hlds__modecheck_call, proc_mode);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__member_2_1,
		f_99_104_101_99_107_95_104_108_100_115_95_95_109_111_100_101_99_104_101_99_107_95_99_97_108_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_8_0_i10);
MR_def_label(f_99_104_101_99_107_95_104_108_100_115_95_95_109_111_100_101_99_104_101_99_107_95_99_97_108_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_8_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, proc_id);
	MR_sv(9) = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, proc_info);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(9);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_tfield(0, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(map__lookup_3_0,
		f_99_104_101_99_107_95_104_108_100_115_95_95_109_111_100_101_99_104_101_99_107_95_99_97_108_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_8_0_i11);
MR_def_label(f_99_104_101_99_107_95_104_108_100_115_95_95_109_111_100_101_99_104_101_99_107_95_99_97_108_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_8_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, proc_id);
	MR_r2 = MR_sv(9);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(4);
	MR_np_call_localret_ent(map__lookup_3_0,
		f_99_104_101_99_107_95_104_108_100_115_95_95_109_111_100_101_99_104_101_99_107_95_99_97_108_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_8_0_i12);
MR_def_label(f_99_104_101_99_107_95_104_108_100_115_95_95_109_111_100_101_99_104_101_99_107_95_99_97_108_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_8_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_r1;
	MR_r1 = MR_sv(8);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_argmodes_2_0,
		f_99_104_101_99_107_95_104_108_100_115_95_95_109_111_100_101_99_104_101_99_107_95_99_97_108_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_8_0_i13);
MR_def_label(f_99_104_101_99_107_95_104_108_100_115_95_95_109_111_100_101_99_104_101_99_107_95_99_97_108_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_8_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(10) = MR_r1;
	MR_r1 = MR_sv(9);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_argmodes_2_0,
		f_99_104_101_99_107_95_104_108_100_115_95_95_109_111_100_101_99_104_101_99_107_95_99_97_108_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_8_0_i14);
MR_def_label(f_99_104_101_99_107_95_104_108_100_115_95_95_109_111_100_101_99_104_101_99_107_95_99_97_108_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_8_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(11) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_get_module_info_2_0,
		f_99_104_101_99_107_95_104_108_100_115_95_95_109_111_100_101_99_104_101_99_107_95_99_97_108_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_8_0_i15);
MR_def_label(f_99_104_101_99_107_95_104_108_100_115_95_95_109_111_100_101_99_104_101_99_107_95_99_97_108_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_8_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(12) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_get_var_types_2_0,
		f_99_104_101_99_107_95_104_108_100_115_95_95_109_111_100_101_99_104_101_99_107_95_99_97_108_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_8_0_i16);
MR_def_label(f_99_104_101_99_107_95_104_108_100_115_95_95_109_111_100_101_99_104_101_99_107_95_99_97_108_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_8_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(3,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(check_hlds__modecheck_call__IntroducedFrom__pred__compare_proc__729__1_3_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r4 = MR_sv(3);
	}
	MR_np_call_localret_ent(list__map_3_0,
		f_99_104_101_99_107_95_104_108_100_115_95_95_109_111_100_101_99_104_101_99_107_95_99_97_108_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_8_0_i19);
MR_def_label(f_99_104_101_99_107_95_104_108_100_115_95_95_109_111_100_101_99_104_101_99_107_95_99_97_108_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_8_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(13) = MR_r1;
	MR_r1 = MR_sv(12);
	MR_r2 = MR_sv(10);
	MR_np_call_localret_ent(check_hlds__mode_util__mode_list_get_initial_insts_3_0,
		f_99_104_101_99_107_95_104_108_100_115_95_95_109_111_100_101_99_104_101_99_107_95_99_97_108_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_8_0_i20);
MR_def_label(f_99_104_101_99_107_95_104_108_100_115_95_95_109_111_100_101_99_104_101_99_107_95_99_97_108_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_8_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(14) = MR_r1;
	MR_r1 = MR_sv(12);
	MR_r2 = MR_sv(11);
	MR_np_call_localret_ent(check_hlds__mode_util__mode_list_get_initial_insts_3_0,
		f_99_104_101_99_107_95_104_108_100_115_95_95_109_111_100_101_99_104_101_99_107_95_99_97_108_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_8_0_i21);
MR_def_label(f_99_104_101_99_107_95_104_108_100_115_95_95_109_111_100_101_99_104_101_99_107_95_99_97_108_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_8_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(15) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(check_hlds__modecheck_call__get_var_insts_and_lives_4_0,
		f_99_104_101_99_107_95_104_108_100_115_95_95_109_111_100_101_99_104_101_99_107_95_99_97_108_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_8_0_i22);
MR_def_label(f_99_104_101_99_107_95_104_108_100_115_95_95_109_111_100_101_99_104_101_99_107_95_99_97_108_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_8_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r4, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r4, 0) = MR_r1;
	MR_r1 = MR_sv(12);
	MR_r2 = MR_sv(14);
	MR_r3 = MR_sv(15);
	MR_r5 = MR_sv(13);
	MR_np_call_localret_ent(check_hlds__modecheck_call__compare_inst_list_2_6_0,
		f_99_104_101_99_107_95_104_108_100_115_95_95_109_111_100_101_99_104_101_99_107_95_99_97_108_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_8_0_i26);
MR_def_label(f_99_104_101_99_107_95_104_108_100_115_95_95_109_111_100_101_99_104_101_99_107_95_99_97_108_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_8_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(f_99_104_101_99_107_95_104_108_100_115_95_95_109_111_100_101_99_104_101_99_107_95_99_97_108_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_8_0_i25);
	}
	MR_r3 = MR_r2;
	MR_r2 = MR_sv(10);
	MR_r1 = MR_sv(12);
	MR_sv(10) = MR_r3;
	MR_GOTO_LAB(f_99_104_101_99_107_95_104_108_100_115_95_95_109_111_100_101_99_104_101_99_107_95_99_97_108_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_8_0_i29);
MR_def_label(f_99_104_101_99_107_95_104_108_100_115_95_95_109_111_100_101_99_104_101_99_107_95_99_97_108_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_8_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("check_hlds.modecheck_call", 25);
	MR_r2 = (MR_Word) MR_string_const("predicate \140check_hlds.modecheck_call.compare_inst_list\'/6", 57);
	MR_r3 = (MR_Word) MR_string_const("length mismatch", 15);
	MR_np_call_localret_ent(require__unexpected_3_0,
		f_99_104_101_99_107_95_104_108_100_115_95_95_109_111_100_101_99_104_101_99_107_95_99_97_108_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_8_0_i29);
MR_def_label(f_99_104_101_99_107_95_104_108_100_115_95_95_109_111_100_101_99_104_101_99_107_95_99_97_108_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_8_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(12) = MR_r1;
	MR_np_call_localret_ent(check_hlds__mode_util__get_arg_lives_3_0,
		f_99_104_101_99_107_95_104_108_100_115_95_95_109_111_100_101_99_104_101_99_107_95_99_97_108_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_8_0_i30);
MR_def_label(f_99_104_101_99_107_95_104_108_100_115_95_95_109_111_100_101_99_104_101_99_107_95_99_97_108_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_8_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(11);
	MR_sv(11) = MR_r1;
	MR_r1 = MR_sv(12);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__mode_util__get_arg_lives_3_0,
		f_99_104_101_99_107_95_104_108_100_115_95_95_109_111_100_101_99_104_101_99_107_95_99_97_108_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_8_0_i31);
MR_def_label(f_99_104_101_99_107_95_104_108_100_115_95_95_109_111_100_101_99_104_101_99_107_95_99_97_108_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_8_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(11);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__modecheck_call__compare_liveness_list_3_0,
		f_99_104_101_99_107_95_104_108_100_115_95_95_109_111_100_101_99_104_101_99_107_95_99_97_108_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_8_0_i32);
MR_def_label(f_99_104_101_99_107_95_104_108_100_115_95_95_109_111_100_101_99_104_101_99_107_95_99_97_108_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_8_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(8);
	MR_sv(8) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_interface_determinism_2_0,
		f_99_104_101_99_107_95_104_108_100_115_95_95_109_111_100_101_99_104_101_99_107_95_99_97_108_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_8_0_i33);
MR_def_label(f_99_104_101_99_107_95_104_108_100_115_95_95_109_111_100_101_99_104_101_99_107_95_99_97_108_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_8_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(9);
	MR_sv(9) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_interface_determinism_2_0,
		f_99_104_101_99_107_95_104_108_100_115_95_95_109_111_100_101_99_104_101_99_107_95_99_97_108_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_8_0_i34);
MR_def_label(f_99_104_101_99_107_95_104_108_100_115_95_95_109_111_100_101_99_104_101_99_107_95_99_97_108_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_8_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(9);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__det_report__compare_determinisms_3_0,
		f_99_104_101_99_107_95_104_108_100_115_95_95_109_111_100_101_99_104_101_99_107_95_99_97_108_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_8_0_i35);
MR_def_label(f_99_104_101_99_107_95_104_108_100_115_95_95_109_111_100_101_99_104_101_99_107_95_99_97_108_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_8_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,2)) {
		MR_GOTO_LAB(f_99_104_101_99_107_95_104_108_100_115_95_95_109_111_100_101_99_104_101_99_107_95_99_97_108_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_8_0_i37);
	}
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(6);
	MR_r4 = (MR_Integer) 1;
	MR_GOTO_LAB(f_99_104_101_99_107_95_104_108_100_115_95_95_109_111_100_101_99_104_101_99_107_95_99_97_108_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_8_0_i36);
MR_def_label(f_99_104_101_99_107_95_104_108_100_115_95_95_109_111_100_101_99_104_101_99_107_95_99_97_108_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_8_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(f_99_104_101_99_107_95_104_108_100_115_95_95_109_111_100_101_99_104_101_99_107_95_99_97_108_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_8_0_i38);
	}
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(6);
	MR_r4 = (MR_Integer) 2;
	MR_GOTO_LAB(f_99_104_101_99_107_95_104_108_100_115_95_95_109_111_100_101_99_104_101_99_107_95_99_97_108_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_8_0_i36);
MR_def_label(f_99_104_101_99_107_95_104_108_100_115_95_95_109_111_100_101_99_104_101_99_107_95_99_97_108_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_8_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(5);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(6);
	MR_r4 = (MR_Integer) 0;
	}
MR_def_label(f_99_104_101_99_107_95_104_108_100_115_95_95_109_111_100_101_99_104_101_99_107_95_99_97_108_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_8_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(10),0)) {
		MR_GOTO_LAB(f_99_104_101_99_107_95_104_108_100_115_95_95_109_111_100_101_99_104_101_99_107_95_99_97_108_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_8_0_i40);
	}
	if (MR_INT_NE(MR_sv(8),0)) {
		MR_GOTO_LAB(f_99_104_101_99_107_95_104_108_100_115_95_95_109_111_100_101_99_104_101_99_107_95_99_97_108_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_8_0_i42);
	}
	if (MR_INT_NE((MR_Integer) 0,0)) {
		MR_GOTO(MR_ENTRY(MR_do_redo));
	}
	MR_GOTO_LAB(f_99_104_101_99_107_95_104_108_100_115_95_95_109_111_100_101_99_104_101_99_107_95_99_97_108_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_8_0_i39);
MR_def_label(f_99_104_101_99_107_95_104_108_100_115_95_95_109_111_100_101_99_104_101_99_107_95_99_97_108_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_8_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(8),3)) {
		MR_GOTO_LAB(f_99_104_101_99_107_95_104_108_100_115_95_95_109_111_100_101_99_104_101_99_107_95_99_97_108_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_8_0_i43);
	}
	if (MR_INT_NE((MR_Integer) 0,3)) {
		MR_GOTO(MR_ENTRY(MR_do_redo));
	}
	MR_GOTO_LAB(f_99_104_101_99_107_95_104_108_100_115_95_95_109_111_100_101_99_104_101_99_107_95_99_97_108_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_8_0_i39);
MR_def_label(f_99_104_101_99_107_95_104_108_100_115_95_95_109_111_100_101_99_104_101_99_107_95_99_97_108_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_8_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(8),2)) {
		MR_GOTO_LAB(f_99_104_101_99_107_95_104_108_100_115_95_95_109_111_100_101_99_104_101_99_107_95_99_97_108_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_8_0_i44);
	}
	if (MR_INT_NE((MR_Integer) 0,0)) {
		MR_GOTO(MR_ENTRY(MR_do_redo));
	}
	MR_GOTO_LAB(f_99_104_101_99_107_95_104_108_100_115_95_95_109_111_100_101_99_104_101_99_107_95_99_97_108_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_8_0_i39);
MR_def_label(f_99_104_101_99_107_95_104_108_100_115_95_95_109_111_100_101_99_104_101_99_107_95_99_97_108_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_8_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE((MR_Integer) 0,3)) {
		MR_GOTO(MR_ENTRY(MR_do_redo));
	}
	MR_GOTO_LAB(f_99_104_101_99_107_95_104_108_100_115_95_95_109_111_100_101_99_104_101_99_107_95_99_97_108_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_8_0_i39);
MR_def_label(f_99_104_101_99_107_95_104_108_100_115_95_95_109_111_100_101_99_104_101_99_107_95_99_97_108_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_8_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(10),3)) {
		MR_GOTO_LAB(f_99_104_101_99_107_95_104_108_100_115_95_95_109_111_100_101_99_104_101_99_107_95_99_97_108_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_8_0_i45);
	}
	if (MR_INT_NE((MR_Integer) 0,3)) {
		MR_GOTO(MR_ENTRY(MR_do_redo));
	}
	MR_GOTO_LAB(f_99_104_101_99_107_95_104_108_100_115_95_95_109_111_100_101_99_104_101_99_107_95_99_97_108_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_8_0_i39);
MR_def_label(f_99_104_101_99_107_95_104_108_100_115_95_95_109_111_100_101_99_104_101_99_107_95_99_97_108_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_8_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(10),2)) {
		MR_GOTO_LAB(f_99_104_101_99_107_95_104_108_100_115_95_95_109_111_100_101_99_104_101_99_107_95_99_97_108_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_8_0_i46);
	}
	if (MR_INT_NE(MR_sv(8),0)) {
		MR_GOTO_LAB(f_99_104_101_99_107_95_104_108_100_115_95_95_109_111_100_101_99_104_101_99_107_95_99_97_108_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_8_0_i48);
	}
	if (MR_INT_NE((MR_Integer) 0,0)) {
		MR_GOTO(MR_ENTRY(MR_do_redo));
	}
	MR_GOTO_LAB(f_99_104_101_99_107_95_104_108_100_115_95_95_109_111_100_101_99_104_101_99_107_95_99_97_108_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_8_0_i39);
MR_def_label(f_99_104_101_99_107_95_104_108_100_115_95_95_109_111_100_101_99_104_101_99_107_95_99_97_108_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_8_0,48)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(8),3)) {
		MR_GOTO_LAB(f_99_104_101_99_107_95_104_108_100_115_95_95_109_111_100_101_99_104_101_99_107_95_99_97_108_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_8_0_i49);
	}
	if (MR_INT_NE((MR_Integer) 0,3)) {
		MR_GOTO(MR_ENTRY(MR_do_redo));
	}
	MR_GOTO_LAB(f_99_104_101_99_107_95_104_108_100_115_95_95_109_111_100_101_99_104_101_99_107_95_99_97_108_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_8_0_i39);
MR_def_label(f_99_104_101_99_107_95_104_108_100_115_95_95_109_111_100_101_99_104_101_99_107_95_99_97_108_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_8_0,49)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(8),2)) {
		MR_GOTO_LAB(f_99_104_101_99_107_95_104_108_100_115_95_95_109_111_100_101_99_104_101_99_107_95_99_97_108_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_8_0_i50);
	}
	if (((MR_Integer) 0 != (MR_Integer) MR_r4)) {
		MR_GOTO(MR_ENTRY(MR_do_redo));
	}
	MR_GOTO_LAB(f_99_104_101_99_107_95_104_108_100_115_95_95_109_111_100_101_99_104_101_99_107_95_99_97_108_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_8_0_i39);
MR_def_label(f_99_104_101_99_107_95_104_108_100_115_95_95_109_111_100_101_99_104_101_99_107_95_99_97_108_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_8_0,50)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE((MR_Integer) 0,1)) {
		MR_GOTO(MR_ENTRY(MR_do_redo));
	}
	MR_GOTO_LAB(f_99_104_101_99_107_95_104_108_100_115_95_95_109_111_100_101_99_104_101_99_107_95_99_97_108_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_8_0_i39);
MR_def_label(f_99_104_101_99_107_95_104_108_100_115_95_95_109_111_100_101_99_104_101_99_107_95_99_97_108_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_8_0,46)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(8),0)) {
		MR_GOTO_LAB(f_99_104_101_99_107_95_104_108_100_115_95_95_109_111_100_101_99_104_101_99_107_95_99_97_108_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_8_0_i52);
	}
	if (MR_INT_NE((MR_Integer) 0,3)) {
		MR_GOTO(MR_ENTRY(MR_do_redo));
	}
	MR_GOTO_LAB(f_99_104_101_99_107_95_104_108_100_115_95_95_109_111_100_101_99_104_101_99_107_95_99_97_108_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_8_0_i39);
MR_def_label(f_99_104_101_99_107_95_104_108_100_115_95_95_109_111_100_101_99_104_101_99_107_95_99_97_108_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_8_0,52)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(8),3)) {
		MR_GOTO_LAB(f_99_104_101_99_107_95_104_108_100_115_95_95_109_111_100_101_99_104_101_99_107_95_99_97_108_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_8_0_i53);
	}
	if (MR_INT_NE((MR_Integer) 0,3)) {
		MR_GOTO(MR_ENTRY(MR_do_redo));
	}
	MR_GOTO_LAB(f_99_104_101_99_107_95_104_108_100_115_95_95_109_111_100_101_99_104_101_99_107_95_99_97_108_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_8_0_i39);
MR_def_label(f_99_104_101_99_107_95_104_108_100_115_95_95_109_111_100_101_99_104_101_99_107_95_99_97_108_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_8_0,53)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(8),2)) {
		MR_GOTO_LAB(f_99_104_101_99_107_95_104_108_100_115_95_95_109_111_100_101_99_104_101_99_107_95_99_97_108_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_8_0_i54);
	}
	if (MR_INT_NE((MR_Integer) 0,1)) {
		MR_GOTO(MR_ENTRY(MR_do_redo));
	}
	MR_GOTO_LAB(f_99_104_101_99_107_95_104_108_100_115_95_95_109_111_100_101_99_104_101_99_107_95_99_97_108_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_8_0_i39);
MR_def_label(f_99_104_101_99_107_95_104_108_100_115_95_95_109_111_100_101_99_104_101_99_107_95_99_97_108_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_8_0,54)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE((MR_Integer) 0,1)) {
		MR_GOTO(MR_ENTRY(MR_do_redo));
	}
MR_def_label(f_99_104_101_99_107_95_104_108_100_115_95_95_109_111_100_101_99_104_101_99_107_95_99_97_108_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_8_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_restore_maxfr(MR_sv(18));
	MR_redoip_slot_word(MR_maxfr) = MR_sv(16);
	MR_redofr_slot_word(MR_maxfr) = MR_sv(17);
	MR_GOTO_LAB(f_99_104_101_99_107_95_104_108_100_115_95_95_109_111_100_101_99_104_101_99_107_95_99_97_108_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_8_0_i4);
MR_def_label(f_99_104_101_99_107_95_104_108_100_115_95_95_109_111_100_101_99_104_101_99_107_95_99_97_108_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_8_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r3 = MR_sv(2);
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(3);
	MR_tempr2 = MR_sv(7);
	MR_redoip_slot_word(MR_maxfr) = MR_sv(16);
	MR_redofr_slot_word(MR_maxfr) = MR_sv(17);
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(6);
	MR_decr_sp_and_return(19);
	}
MR_def_label(f_99_104_101_99_107_95_104_108_100_115_95_95_109_111_100_101_99_104_101_99_107_95_99_97_108_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_8_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(7);
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(19);
	MR_GOTO_LAB(f_99_104_101_99_107_95_104_108_100_115_95_95_109_111_100_101_99_104_101_99_107_95_99_97_108_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_8_0_i228);
	}
MR_def_label(f_99_104_101_99_107_95_104_108_100_115_95_95_109_111_100_101_99_104_101_99_107_95_99_97_108_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_8_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("check_hlds.modecheck_call", 25);
	MR_r2 = (MR_Word) MR_string_const("predicate \140check_hlds.modecheck_call.choose_best_match\'/8", 57);
	MR_r3 = (MR_Word) MR_string_const("no best match", 13);
	MR_succip_word = MR_sv(19);
	MR_decr_sp(19);
	MR_np_tailcall_ent(require__unexpected_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

static void mercury__check_hlds__modecheck_call_maybe_bunch_0(void)
{
	check_hlds__modecheck_call_module0();
	check_hlds__modecheck_call_module1();
	check_hlds__modecheck_call_module2();
	check_hlds__modecheck_call_module3();
	check_hlds__modecheck_call_module4();
	check_hlds__modecheck_call_module5();
	check_hlds__modecheck_call_module6();
	check_hlds__modecheck_call_module7();
	check_hlds__modecheck_call_module8();
	check_hlds__modecheck_call_module9();
	check_hlds__modecheck_call_module10();
	check_hlds__modecheck_call_module11();
	check_hlds__modecheck_call_module12();
	check_hlds__modecheck_call_module13();
	check_hlds__modecheck_call_module14();
	check_hlds__modecheck_call_module15();
	check_hlds__modecheck_call_module16();
	check_hlds__modecheck_call_module17();
	check_hlds__modecheck_call_module18();
	check_hlds__modecheck_call_module19();
}

/* suppress gcc -Wmissing-decls warnings */
void mercury__check_hlds__modecheck_call__init(void);
void mercury__check_hlds__modecheck_call__init_type_tables(void);
void mercury__check_hlds__modecheck_call__init_debugger(void);
#ifdef MR_DEEP_PROFILING
void mercury__check_hlds__modecheck_call__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp);
#endif
#ifdef MR_RECORD_TERM_SIZES
void mercury__check_hlds__modecheck_call__init_complexity_procs(void);
#endif
#ifdef MR_THREADSCOPE
void mercury__check_hlds__modecheck_call__init_threadscope_string_table(void);
#endif

void mercury__check_hlds__modecheck_call__init(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	mercury__check_hlds__modecheck_call_maybe_bunch_0();
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_check_hlds__modecheck_call__type_ctor_info_match_0,
		check_hlds__modecheck_call__match_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_check_hlds__modecheck_call__type_ctor_info_proc_mode_0,
		check_hlds__modecheck_call__proc_mode_0_0);
	mercury__check_hlds__modecheck_call__init_debugger();
}

void mercury__check_hlds__modecheck_call__init_type_tables(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	{
		MR_register_type_ctor_info(
		&mercury_data_check_hlds__modecheck_call__type_ctor_info_match_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_check_hlds__modecheck_call__type_ctor_info_proc_mode_0);
	}
}


void mercury__check_hlds__modecheck_call__init_debugger(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}

#ifdef MR_DEEP_PROFILING

void mercury__check_hlds__modecheck_call__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp)
{
	MR_write_out_module_proc_reps_start(procrep_fp, &mercury_data__module_common_layout__check_hlds__modecheck_call);
	MR_write_out_module_proc_reps_end(procrep_fp);
}

#endif

#ifdef MR_RECORD_TERM_SIZES

void mercury__check_hlds__modecheck_call__init_complexity_procs(void)
{
}

#endif

#ifdef MR_THREADSCOPE

void mercury__check_hlds__modecheck_call__init_threadscope_string_table(void)
{
}

#endif

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;
