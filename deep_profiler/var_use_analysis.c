/*
** Automatically generated from `var_use_analysis.m'
** by the Mercury compiler,
** version rotd-2009-09-15, configured for i686-pc-linux-gnu.
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
INIT mercury__var_use_analysis__init
ENDINIT
*/

#define MR_ALLOW_RESET
#include "mercury_imp.h"
#line 268 "profile.int"
#include "profile.mh"

#line 27 "var_use_analysis.c"
#line 226 "mdbcomp.program_representation.int"
#include "mdbcomp.program_representation.mh"

#line 31 "var_use_analysis.c"
#line 534 "../library/io.int"
#include "io.mh"

#line 35 "var_use_analysis.c"
#line 542 "../library/io.int"
#include "string.mh"

#line 39 "var_use_analysis.c"
#line 31 "../library/array.int2"
#include "array.mh"

#line 43 "var_use_analysis.c"
#line 33 "mdbcomp.rtti_access.int2"
#include "mdbcomp.rtti_access.mh"

#line 47 "var_use_analysis.c"
#line 29 "../library/bitmap.int2"
#include "bitmap.mh"

#line 51 "var_use_analysis.c"
#line 28 "../library/time.int2"
#include "time.mh"

#line 55 "var_use_analysis.c"
#line 56 "var_use_analysis.c"
#include "var_use_analysis.mh"

#line 59 "var_use_analysis.c"
#line 60 "var_use_analysis.c"
#ifndef VAR_USE_ANALYSIS_DECL_GUARD
#define VAR_USE_ANALYSIS_DECL_GUARD

#line 64 "var_use_analysis.c"
#line 65 "var_use_analysis.c"

#endif
#line 68 "var_use_analysis.c"

#ifdef _MSC_VER
#define MR_STATIC_LINKAGE extern
#else
#define MR_STATIC_LINKAGE static
#endif

struct mercury_type_0 {
	MR_Word * f1[3];
};
MR_STATIC_LINKAGE const struct mercury_type_0 mercury_common_0[];

struct mercury_type_1 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[3];
};
MR_STATIC_LINKAGE const struct mercury_type_1 mercury_common_1[];

struct mercury_type_2 {
	MR_Word * f1;
	MR_Code * f2;
	MR_Integer f3;
};
MR_STATIC_LINKAGE const struct mercury_type_2 mercury_common_2[];

struct mercury_type_3 {
	MR_Word * f1[2];
};
MR_STATIC_LINKAGE const struct mercury_type_3 mercury_common_3[];

struct mercury_type_4 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[7];
};
MR_STATIC_LINKAGE const struct mercury_type_4 mercury_common_4[];

struct mercury_type_5 {
	MR_Word * f1;
};
MR_STATIC_LINKAGE const struct mercury_type_5 mercury_common_5[];

struct mercury_type_6 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[6];
};
MR_STATIC_LINKAGE const struct mercury_type_6 mercury_common_6[];

struct mercury_type_7 {
	MR_Word * f1;
	MR_Word * f2;
	MR_Integer f3;
	MR_Word * f4;
	MR_Word * f5;
};
MR_STATIC_LINKAGE const struct mercury_type_7 mercury_common_7[];

struct mercury_type_8 {
	MR_Word * f1;
	MR_Code * f2;
	MR_Integer f3;
	MR_Word * f4;
};
MR_STATIC_LINKAGE const struct mercury_type_8 mercury_common_8[];

extern const MR_TypeCtorInfo_Struct
	mercury_data_var_use_analysis__type_ctor_info_cost_until_var_use_0,
	mercury_data_var_use_analysis__type_ctor_info_found_first_use_0,
	mercury_data_var_use_analysis__type_ctor_info_var_first_use_static_info_0,
	mercury_data_var_use_analysis__type_ctor_info_var_use_info_0,
	mercury_data_var_use_analysis__type_ctor_info_var_use_type_0;
MR_decl_label1(var_use_analysis__IntroducedFrom__pred__head_vars_all__719__1_3_0, 2)
MR_decl_label8(f_118_97_114_95_117_115_101_95_97_110_97_108_121_115_105_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_105_99_95_118_97_114_115_95_102_105_114_115_116_95_117_115_101_95_95_104_111_49_95_95_91_50_93_95_48_5_0, 2,5,8,10,9,11,14,16)
MR_decl_label1(f_118_97_114_95_117_115_101_95_97_110_97_108_121_115_105_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_105_99_95_118_97_114_115_95_102_105_114_115_116_95_117_115_101_95_95_104_111_49_95_95_91_50_93_95_48_5_0, 3)
MR_decl_label5(var_use_analysis__atomic_trivial_var_first_use_5_0, 2,4,9,6,3)
MR_decl_label8(var_use_analysis__call_var_first_use_7_0, 2,4,6,11,9,15,20,18)
MR_decl_label8(var_use_analysis__call_var_first_use_7_0, 24,26,29,30,31,28,36,64)
MR_decl_label7(var_use_analysis__call_var_first_use_7_0, 35,39,40,66,42,67,25)
MR_decl_label8(var_use_analysis__conj_var_first_use_7_0, 27,5,8,9,7,10,6,26)
MR_decl_label3(var_use_analysis__disj_var_first_use_7_0, 2,4,3)
MR_decl_label8(var_use_analysis__disj_var_first_use_2_7_0, 77,5,8,9,7,10,6,13)
MR_decl_label8(var_use_analysis__disj_var_first_use_2_7_0, 21,23,20,25,27,34,36,33)
MR_decl_label3(var_use_analysis__disj_var_first_use_2_7_0, 26,43,76)
MR_decl_label1(var_use_analysis__ffu_to_float_3_0, 2)
MR_decl_label8(var_use_analysis__generic_vars_first_use_5_0, 2,5,8,10,9,11,14,16)
MR_decl_label1(var_use_analysis__generic_vars_first_use_5_0, 3)
MR_decl_label8(var_use_analysis__goal_var_first_use_6_0, 49,13,15,26,31,5,6,12)
MR_decl_label5(var_use_analysis__goal_var_first_use_6_0, 7,17,19,22,24)
MR_decl_label5(var_use_analysis__goal_var_first_use_wrapper_7_0, 2,4,8,6,14)
MR_decl_label2(var_use_analysis__head_var_by_pos_4_0, 2,4)
MR_decl_label8(var_use_analysis__ite_var_first_use_8_0, 3,5,7,8,2,12,13,14)
MR_decl_label8(var_use_analysis__ite_var_first_use_8_0, 15,18,19,20,23,17,24,25)
MR_decl_label8(var_use_analysis__ite_var_first_use_8_0, 28,16,32,36,35,38,39,42)
MR_decl_label1(var_use_analysis__ite_var_first_use_8_0, 30)
MR_decl_label1(var_use_analysis__pessimistic_var_use_info_2_0, 3)
MR_decl_label4(var_use_analysis__proc_var_first_use_6_0, 2,6,4,11)
MR_decl_label8(var_use_analysis__switch_var_first_use_7_0, 2,4,6,7,5,8,9,10)
MR_decl_label5(var_use_analysis__switch_var_first_use_7_0, 14,12,17,20,21)
MR_decl_label7(var_use_analysis__switch_var_first_use_2_8_0, 29,4,6,7,12,14,10)
MR_decl_label2(var_use_analysis__var_mode_to_var_use_2_0, 2,5)
MR_decl_label4(var_use_analysis__weighted_average_3_0, 3,5,6,4)
MR_decl_label1(fn__var_use_analysis__cost_until_to_cost_before_end_2_0, 3)
MR_decl_label1(fn__var_use_analysis__cost_until_to_cost_since_start_2_0, 3)
MR_decl_label3(__Unify___var_use_analysis__cost_until_var_use_0_0, 12,5,1)
MR_decl_label3(__Unify___var_use_analysis__found_first_use_0_0, 10,5,1)
MR_decl_label4(__Unify___var_use_analysis__var_first_use_static_info_0_0, 4,6,10,1)
MR_decl_label3(__Unify___var_use_analysis__var_use_info_0_0, 4,6,1)
MR_decl_label5(__Compare___var_use_analysis__cost_until_var_use_0_0, 3,2,19,7,5)
MR_decl_label4(__Compare___var_use_analysis__found_first_use_0_0, 18,7,5,9)
MR_decl_label7(__Compare___var_use_analysis__var_first_use_static_info_0_0, 3,2,5,9,13,17,45)
MR_decl_label4(__Compare___var_use_analysis__var_use_info_0_0, 3,2,5,21)
MR_def_extern_entry(fn__var_use_analysis__cost_until_to_cost_since_start_2_0)
MR_def_extern_entry(fn__var_use_analysis__cost_until_to_cost_before_end_2_0)
MR_def_extern_entry(var_use_analysis__generic_vars_first_use_5_0)
MR_def_extern_entry(var_use_analysis__head_vars_all_3_0)
MR_def_extern_entry(var_use_analysis__var_mode_to_var_use_2_0)
MR_def_extern_entry(var_use_analysis__pessimistic_var_use_info_2_0)
MR_decl_static(var_use_analysis__proc_var_first_use_6_0)
MR_decl_static(var_use_analysis__call_var_first_use_7_0)
MR_decl_static(var_use_analysis__atomic_trivial_var_first_use_5_0)
MR_decl_static(var_use_analysis__weighted_average_3_0)
MR_decl_static(var_use_analysis__ffu_to_float_3_0)
MR_decl_static(var_use_analysis__goal_var_first_use_6_0)
MR_decl_static(var_use_analysis__conj_var_first_use_7_0)
MR_decl_static(var_use_analysis__disj_var_first_use_7_0)
MR_decl_static(var_use_analysis__disj_var_first_use_2_7_0)
MR_decl_static(var_use_analysis__switch_var_first_use_7_0)
MR_decl_static(var_use_analysis__switch_var_first_use_2_8_0)
MR_decl_static(var_use_analysis__ite_var_first_use_8_0)
MR_decl_static(var_use_analysis__head_var_by_pos_4_0)
MR_decl_static(var_use_analysis__goal_var_first_use_wrapper_7_0)
MR_def_extern_entry(__Unify___var_use_analysis__cost_until_var_use_0_0)
MR_def_extern_entry(__Compare___var_use_analysis__cost_until_var_use_0_0)
MR_decl_static(__Unify___var_use_analysis__found_first_use_0_0)
MR_decl_static(__Compare___var_use_analysis__found_first_use_0_0)
MR_decl_static(__Unify___var_use_analysis__var_first_use_static_info_0_0)
MR_decl_static(__Compare___var_use_analysis__var_first_use_static_info_0_0)
MR_def_extern_entry(__Unify___var_use_analysis__var_use_info_0_0)
MR_def_extern_entry(__Compare___var_use_analysis__var_use_info_0_0)
MR_def_extern_entry(__Unify___var_use_analysis__var_use_type_0_0)
MR_def_extern_entry(__Compare___var_use_analysis__var_use_type_0_0)
MR_decl_static(var_use_analysis__IntroducedFrom__pred__generic_vars_first_use__774__1_3_0)
MR_decl_static(var_use_analysis__IntroducedFrom__pred__head_vars_all__719__1_3_0)
MR_decl_static(var_use_analysis__IntroducedFrom__pred__switch_var_first_use__529__1_2_0)
MR_decl_static(var_use_analysis__IntroducedFrom__pred__weighted_average__658__1_6_0)
MR_decl_static(f_118_97_114_95_117_115_101_95_97_110_97_108_121_115_105_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_105_99_95_118_97_114_115_95_102_105_114_115_116_95_117_115_101_95_95_104_111_49_95_95_91_50_93_95_48_5_0)

extern const MR_TypeCtorInfo_Struct mercury_data_tree234__type_ctor_info_tree234_2;
extern const MR_TypeCtorInfo_Struct mercury_data_mdbcomp__program_representation__type_ctor_info_goal_path_0;
extern const MR_TypeCtorInfo_Struct mercury_data_report__type_ctor_info_call_site_perf_0;
static const struct mercury_type_0 mercury_common_0[1] =
{
{
{
MR_CTOR_ADDR(tree234, tree234, 2),
MR_CTOR0_ADDR(mdbcomp__program_representation, goal_path),
MR_CTOR0_ADDR(report, call_site_perf)
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__var_use_analysis__generic_vars_first_use_5_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_report__type_ctor_info_call_site_perf_0;
static const MR_UserClosureId
mercury_data__closure_layout__var_use_analysis__head_vars_all_3_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_mdbcomp__program_representation__type_ctor_info_head_var_rep_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;
extern const MR_TypeCtorInfo_Struct mercury_data_var_use_analysis__type_ctor_info_var_use_type_0;
static const MR_UserClosureId
mercury_data__closure_layout__var_use_analysis__switch_var_first_use_7_0_3;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_float_0;
extern const MR_TypeCtorInfo_Struct mercury_data_var_use_analysis__type_ctor_info_found_first_use_0;
static const MR_UserClosureId
mercury_data__closure_layout__var_use_analysis__switch_var_first_use_7_0_4;
static const MR_UserClosureId
mercury_data__closure_layout__f_118_97_114_95_117_115_101_95_97_110_97_108_121_115_105_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_105_99_95_118_97_114_115_95_102_105_114_115_116_95_117_115_101_95_95_104_111_49_95_95_91_50_93_95_48_5_0_1;
static const struct mercury_type_1 mercury_common_1[5] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__var_use_analysis__generic_vars_first_use_5_0_1,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_CTOR0_ADDR(report, call_site_perf),
MR_COMMON(0,0),
MR_COMMON(0,0)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__var_use_analysis__head_vars_all_3_0_1,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_CTOR0_ADDR(mdbcomp__program_representation, head_var_rep),
MR_INT_CTOR_ADDR,
MR_CTOR0_ADDR(var_use_analysis, var_use_type)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__var_use_analysis__switch_var_first_use_7_0_3,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_FLOAT_CTOR_ADDR,
MR_CTOR0_ADDR(var_use_analysis, found_first_use),
MR_FLOAT_CTOR_ADDR
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__var_use_analysis__switch_var_first_use_7_0_4,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_FLOAT_CTOR_ADDR,
MR_CTOR0_ADDR(var_use_analysis, found_first_use),
MR_FLOAT_CTOR_ADDR
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__f_118_97_114_95_117_115_101_95_97_110_97_108_121_115_105_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_105_99_95_118_97_114_115_95_102_105_114_115_116_95_117_115_101_95_95_104_111_49_95_95_91_50_93_95_48_5_0_1,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_CTOR0_ADDR(report, call_site_perf),
MR_COMMON(0,0),
MR_COMMON(0,0)
}
},
};

static const struct mercury_type_2 mercury_common_2[5] =
{
{
MR_COMMON(1,0),
MR_ENTRY_AP(var_use_analysis__IntroducedFrom__pred__generic_vars_first_use__774__1_3_0),
0
},
{
MR_COMMON(1,1),
MR_ENTRY_AP(var_use_analysis__IntroducedFrom__pred__head_vars_all__719__1_3_0),
0
},
{
MR_COMMON(6,0),
MR_ENTRY_AP(var_use_analysis__IntroducedFrom__pred__weighted_average__658__1_6_0),
0
},
{
MR_COMMON(6,1),
MR_ENTRY_AP(var_use_analysis__IntroducedFrom__pred__weighted_average__658__1_6_0),
0
},
{
MR_COMMON(1,4),
MR_ENTRY_AP(var_use_analysis__IntroducedFrom__pred__generic_vars_first_use__774__1_3_0),
0
},
};

extern const MR_TypeCtorInfo_Struct mercury_data_set_ordlist__type_ctor_info_set_ordlist_1;
extern const MR_TypeCtorInfo_Struct mercury_data_profile__type_ctor_info_proc_static_ptr_0;
extern const MR_TypeCtorInfo_Struct mercury_data_mdbcomp__program_representation__type_ctor_info_goal_rep_1;
extern const MR_TypeCtorInfo_Struct mercury_data_coverage__type_ctor_info_coverage_info_0;
static const MR_Float mercury_float_const_0pt0000000000000000 = 0.0000000000000000;
static const struct mercury_type_3 mercury_common_3[3] =
{
{
{
MR_CTOR1_ADDR(set_ordlist, set_ordlist),
MR_CTOR0_ADDR(profile, proc_static_ptr)
}
},
{
{
MR_CTOR1_ADDR(mdbcomp__program_representation, goal_rep),
MR_CTOR0_ADDR(coverage, coverage_info)
}
},
{
{
(MR_Word *) &mercury_float_const_0pt0000000000000000,
MR_tbmkword(0, 0)
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__var_use_analysis__generic_vars_first_use_5_0_2;
extern const MR_TypeCtorInfo_Struct mercury_data_profile__type_ctor_info_deep_0;
extern const MR_TypeCtorInfo_Struct mercury_data_var_use_analysis__type_ctor_info_var_use_info_0;
static const MR_UserClosureId
mercury_data__closure_layout__f_118_97_114_95_117_115_101_95_97_110_97_108_121_115_105_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_105_99_95_118_97_114_115_95_102_105_114_115_116_95_117_115_101_95_95_104_111_49_95_95_91_50_93_95_48_5_0_2;
static const struct mercury_type_4 mercury_common_4[2] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__var_use_analysis__generic_vars_first_use_5_0_2,
(MR_Word *) (MR_Integer) 0
},
7,
{
MR_CTOR0_ADDR(profile, deep),
MR_COMMON(3,0),
MR_COMMON(0,0),
MR_COMMON(3,1),
MR_INT_CTOR_ADDR,
MR_CTOR0_ADDR(var_use_analysis, var_use_type),
MR_CTOR0_ADDR(var_use_analysis, var_use_info)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__f_118_97_114_95_117_115_101_95_97_110_97_108_121_115_105_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_105_99_95_118_97_114_115_95_102_105_114_115_116_95_117_115_101_95_95_104_111_49_95_95_91_50_93_95_48_5_0_2,
(MR_Word *) (MR_Integer) 0
},
7,
{
MR_CTOR0_ADDR(profile, deep),
MR_COMMON(3,0),
MR_COMMON(0,0),
MR_COMMON(3,1),
MR_INT_CTOR_ADDR,
MR_CTOR0_ADDR(var_use_analysis, var_use_type),
MR_CTOR0_ADDR(var_use_analysis, var_use_info)
}
},
};

static const struct mercury_type_5 mercury_common_5[1] =
{
{
(MR_Word *) &mercury_float_const_0pt0000000000000000
},
};

static const MR_UserClosureId
mercury_data__closure_layout__var_use_analysis__weighted_average_3_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__var_use_analysis__switch_var_first_use_7_0_1;
static const struct mercury_type_6 mercury_common_6[2] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__var_use_analysis__weighted_average_3_0_1,
(MR_Word *) (MR_Integer) 0
},
6,
{
MR_FLOAT_CTOR_ADDR,
MR_FLOAT_CTOR_ADDR,
MR_FLOAT_CTOR_ADDR,
MR_FLOAT_CTOR_ADDR,
MR_FLOAT_CTOR_ADDR,
MR_FLOAT_CTOR_ADDR
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__var_use_analysis__switch_var_first_use_7_0_1,
(MR_Word *) (MR_Integer) 0
},
6,
{
MR_FLOAT_CTOR_ADDR,
MR_FLOAT_CTOR_ADDR,
MR_FLOAT_CTOR_ADDR,
MR_FLOAT_CTOR_ADDR,
MR_FLOAT_CTOR_ADDR,
MR_FLOAT_CTOR_ADDR
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__var_use_analysis__switch_var_first_use_7_0_2;
static const struct mercury_type_7 mercury_common_7[1] =
{
{
(MR_Word *) &mercury_data__closure_layout__var_use_analysis__switch_var_first_use_7_0_2,
(MR_Word *) (MR_Integer) 0,
2,
MR_CTOR0_ADDR(var_use_analysis, found_first_use),
MR_CTOR0_ADDR(var_use_analysis, found_first_use)
},
};

static const struct mercury_type_8 mercury_common_8[1] =
{
{
MR_COMMON(7,0),
MR_ENTRY_AP(var_use_analysis__IntroducedFrom__pred__switch_var_first_use__529__1_2_0),
1,
MR_tbmkword(0, 0)
},
};
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_float_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_float_0;

const MR_PseudoTypeInfo mercury_data_var_use_analysis__field_types_cost_until_var_use_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_float_0
};

static const MR_DuFunctorDesc mercury_data_var_use_analysis__du_functor_desc_cost_until_var_use_0_0 = {
	"cost_since_proc_start",
	1,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_var_use_analysis__field_types_cost_until_var_use_0_0,
	NULL,
	NULL
};

const MR_PseudoTypeInfo mercury_data_var_use_analysis__field_types_cost_until_var_use_0_1[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_float_0
};

static const MR_DuFunctorDesc mercury_data_var_use_analysis__du_functor_desc_cost_until_var_use_0_1 = {
	"cost_before_proc_end",
	1,
	0,
	MR_SECTAG_NONE,
	1,
	-1,
	1,
	(MR_PseudoTypeInfo *) mercury_data_var_use_analysis__field_types_cost_until_var_use_0_1,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_var_use_analysis__du_stag_ordered_cost_until_var_use_0_0[] = {
	&mercury_data_var_use_analysis__du_functor_desc_cost_until_var_use_0_0

};

const MR_DuFunctorDescPtr mercury_data_var_use_analysis__du_stag_ordered_cost_until_var_use_0_1[] = {
	&mercury_data_var_use_analysis__du_functor_desc_cost_until_var_use_0_1

};

const MR_DuPtagLayout mercury_data_var_use_analysis__du_ptag_ordered_cost_until_var_use_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_var_use_analysis__du_stag_ordered_cost_until_var_use_0_0 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_var_use_analysis__du_stag_ordered_cost_until_var_use_0_1 }

};

const MR_DuFunctorDescPtr mercury_data_var_use_analysis__du_name_ordered_cost_until_var_use_0[] = {
	&mercury_data_var_use_analysis__du_functor_desc_cost_until_var_use_0_1,
	&mercury_data_var_use_analysis__du_functor_desc_cost_until_var_use_0_0
};

const MR_Integer mercury_data_var_use_analysis__functor_number_map_cost_until_var_use_0[] = {
	1,
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_var_use_analysis__type_ctor_info_cost_until_var_use_0 = {
	0,
	13,
	2,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___var_use_analysis__cost_until_var_use_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___var_use_analysis__cost_until_var_use_0_0)),
	"var_use_analysis",
	"cost_until_var_use",
	{ (void *)mercury_data_var_use_analysis__du_name_ordered_cost_until_var_use_0 },
	{ (void *)mercury_data_var_use_analysis__du_ptag_ordered_cost_until_var_use_0 },
	2,
	4,
	mercury_data_var_use_analysis__functor_number_map_cost_until_var_use_0
};

static const MR_DuFunctorDesc mercury_data_var_use_analysis__du_functor_desc_found_first_use_0_0 = {
	"have_not_found_first_use",
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

const MR_PseudoTypeInfo mercury_data_var_use_analysis__field_types_found_first_use_0_1[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_float_0
};

const MR_ConstString mercury_data_var_use_analysis__field_names_found_first_use_0_1[] = {
	"cost_before_use"
};

static const MR_DuFunctorDesc mercury_data_var_use_analysis__du_functor_desc_found_first_use_0_1 = {
	"found_first_use",
	1,
	0,
	MR_SECTAG_NONE,
	1,
	-1,
	1,
	(MR_PseudoTypeInfo *) mercury_data_var_use_analysis__field_types_found_first_use_0_1,
	mercury_data_var_use_analysis__field_names_found_first_use_0_1,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_var_use_analysis__du_stag_ordered_found_first_use_0_0[] = {
	&mercury_data_var_use_analysis__du_functor_desc_found_first_use_0_0

};

const MR_DuFunctorDescPtr mercury_data_var_use_analysis__du_stag_ordered_found_first_use_0_1[] = {
	&mercury_data_var_use_analysis__du_functor_desc_found_first_use_0_1

};

const MR_DuPtagLayout mercury_data_var_use_analysis__du_ptag_ordered_found_first_use_0[] = {
	{ 1, MR_SECTAG_LOCAL,
	mercury_data_var_use_analysis__du_stag_ordered_found_first_use_0_0 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_var_use_analysis__du_stag_ordered_found_first_use_0_1 }

};

const MR_DuFunctorDescPtr mercury_data_var_use_analysis__du_name_ordered_found_first_use_0[] = {
	&mercury_data_var_use_analysis__du_functor_desc_found_first_use_0_1,
	&mercury_data_var_use_analysis__du_functor_desc_found_first_use_0_0
};

const MR_Integer mercury_data_var_use_analysis__functor_number_map_found_first_use_0[] = {
	1,
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_var_use_analysis__type_ctor_info_found_first_use_0 = {
	0,
	13,
	2,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___var_use_analysis__found_first_use_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___var_use_analysis__found_first_use_0_0)),
	"var_use_analysis",
	"found_first_use",
	{ (void *)mercury_data_var_use_analysis__du_name_ordered_found_first_use_0 },
	{ (void *)mercury_data_var_use_analysis__du_ptag_ordered_found_first_use_0 },
	2,
	4,
	mercury_data_var_use_analysis__functor_number_map_found_first_use_0
};
extern const MR_TypeCtorInfo_Struct mercury_data_profile__type_ctor_info_deep_0;

static const MR_FA_TypeInfo_Struct2 mercury_data_tree234__ti_tree234_2mdbcomp__program_representation__type_ctor_info_goal_path_0report__type_ctor_info_call_site_perf_0 = {
	&mercury_data_tree234__type_ctor_info_tree234_2,
{	(MR_TypeInfo) &mercury_data_mdbcomp__program_representation__type_ctor_info_goal_path_0,
	(MR_TypeInfo) &mercury_data_report__type_ctor_info_call_site_perf_0
}};
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;

static const MR_FA_TypeInfo_Struct1 mercury_data_set_ordlist__ti_set_ordlist_1profile__type_ctor_info_proc_static_ptr_0 = {
	&mercury_data_set_ordlist__type_ctor_info_set_ordlist_1,
{	(MR_TypeInfo) &mercury_data_profile__type_ctor_info_proc_static_ptr_0
}};
extern const MR_TypeCtorInfo_Struct mercury_data_profile__type_ctor_info_deep_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;
extern const MR_TypeCtorInfo_Struct mercury_data_var_use_analysis__type_ctor_info_var_use_type_0;

const MR_PseudoTypeInfo mercury_data_var_use_analysis__field_types_var_first_use_static_info_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_profile__type_ctor_info_deep_0,
	(MR_PseudoTypeInfo) &mercury_data_tree234__ti_tree234_2mdbcomp__program_representation__type_ctor_info_goal_path_0report__type_ctor_info_call_site_perf_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_var_use_analysis__type_ctor_info_var_use_type_0,
	(MR_PseudoTypeInfo) &mercury_data_set_ordlist__ti_set_ordlist_1profile__type_ctor_info_proc_static_ptr_0
};

const MR_ConstString mercury_data_var_use_analysis__field_names_var_first_use_static_info_0_0[] = {
	"fui_deep",
	"fui_call_site_map",
	"fui_var",
	"fui_var_use",
	"fui_call_stack"
};

static const MR_DuFunctorDesc mercury_data_var_use_analysis__du_functor_desc_var_first_use_static_info_0_0 = {
	"var_first_use_static_info",
	5,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_var_use_analysis__field_types_var_first_use_static_info_0_0,
	mercury_data_var_use_analysis__field_names_var_first_use_static_info_0_0,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_var_use_analysis__du_stag_ordered_var_first_use_static_info_0_0[] = {
	&mercury_data_var_use_analysis__du_functor_desc_var_first_use_static_info_0_0

};

const MR_DuPtagLayout mercury_data_var_use_analysis__du_ptag_ordered_var_first_use_static_info_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_var_use_analysis__du_stag_ordered_var_first_use_static_info_0_0 }

};

const MR_DuFunctorDescPtr mercury_data_var_use_analysis__du_name_ordered_var_first_use_static_info_0[] = {
	&mercury_data_var_use_analysis__du_functor_desc_var_first_use_static_info_0_0
};

const MR_Integer mercury_data_var_use_analysis__functor_number_map_var_first_use_static_info_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_var_use_analysis__type_ctor_info_var_first_use_static_info_0 = {
	0,
	13,
	1,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___var_use_analysis__var_first_use_static_info_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___var_use_analysis__var_first_use_static_info_0_0)),
	"var_use_analysis",
	"var_first_use_static_info",
	{ (void *)mercury_data_var_use_analysis__du_name_ordered_var_first_use_static_info_0 },
	{ (void *)mercury_data_var_use_analysis__du_ptag_ordered_var_first_use_static_info_0 },
	1,
	4,
	mercury_data_var_use_analysis__functor_number_map_var_first_use_static_info_0
};
extern const MR_TypeCtorInfo_Struct mercury_data_var_use_analysis__type_ctor_info_cost_until_var_use_0;

const MR_PseudoTypeInfo mercury_data_var_use_analysis__field_types_var_use_info_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_var_use_analysis__type_ctor_info_cost_until_var_use_0,
	(MR_PseudoTypeInfo) &mercury_data_var_use_analysis__type_ctor_info_var_use_type_0
};

const MR_ConstString mercury_data_var_use_analysis__field_names_var_use_info_0_0[] = {
	"vui_cost_until_use",
	"vui_use_type"
};

static const MR_DuFunctorDesc mercury_data_var_use_analysis__du_functor_desc_var_use_info_0_0 = {
	"var_use_info",
	2,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_var_use_analysis__field_types_var_use_info_0_0,
	mercury_data_var_use_analysis__field_names_var_use_info_0_0,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_var_use_analysis__du_stag_ordered_var_use_info_0_0[] = {
	&mercury_data_var_use_analysis__du_functor_desc_var_use_info_0_0

};

const MR_DuPtagLayout mercury_data_var_use_analysis__du_ptag_ordered_var_use_info_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_var_use_analysis__du_stag_ordered_var_use_info_0_0 }

};

const MR_DuFunctorDescPtr mercury_data_var_use_analysis__du_name_ordered_var_use_info_0[] = {
	&mercury_data_var_use_analysis__du_functor_desc_var_use_info_0_0
};

const MR_Integer mercury_data_var_use_analysis__functor_number_map_var_use_info_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_var_use_analysis__type_ctor_info_var_use_info_0 = {
	0,
	13,
	1,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___var_use_analysis__var_use_info_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___var_use_analysis__var_use_info_0_0)),
	"var_use_analysis",
	"var_use_info",
	{ (void *)mercury_data_var_use_analysis__du_name_ordered_var_use_info_0 },
	{ (void *)mercury_data_var_use_analysis__du_ptag_ordered_var_use_info_0 },
	1,
	4,
	mercury_data_var_use_analysis__functor_number_map_var_use_info_0
};

static const MR_EnumFunctorDesc mercury_data_var_use_analysis__enum_functor_desc_var_use_type_0_0 = {
	"var_use_production",
	0
};

static const MR_EnumFunctorDesc mercury_data_var_use_analysis__enum_functor_desc_var_use_type_0_1 = {
	"var_use_consumption",
	1
};

static const MR_EnumFunctorDesc mercury_data_var_use_analysis__enum_functor_desc_var_use_type_0_2 = {
	"var_use_other",
	2
};

const MR_EnumFunctorDescPtr mercury_data_var_use_analysis__enum_value_ordered_var_use_type_0[] = {
	&mercury_data_var_use_analysis__enum_functor_desc_var_use_type_0_0,
	&mercury_data_var_use_analysis__enum_functor_desc_var_use_type_0_1,
	&mercury_data_var_use_analysis__enum_functor_desc_var_use_type_0_2
};

const MR_EnumFunctorDescPtr mercury_data_var_use_analysis__enum_name_ordered_var_use_type_0[] = {
	&mercury_data_var_use_analysis__enum_functor_desc_var_use_type_0_1,
	&mercury_data_var_use_analysis__enum_functor_desc_var_use_type_0_2,
	&mercury_data_var_use_analysis__enum_functor_desc_var_use_type_0_0
};

const MR_Integer mercury_data_var_use_analysis__functor_number_map_var_use_type_0[] = {
	2,
	0,
	1 };
	
const MR_TypeCtorInfo_Struct mercury_data_var_use_analysis__type_ctor_info_var_use_type_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_ENUM,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___var_use_analysis__var_use_type_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___var_use_analysis__var_use_type_0_0)),
	"var_use_analysis",
	"var_use_type",
	{ (void *)mercury_data_var_use_analysis__enum_name_ordered_var_use_type_0 },
	{ (void *)mercury_data_var_use_analysis__enum_value_ordered_var_use_type_0 },
	3,
	4,
	mercury_data_var_use_analysis__functor_number_map_var_use_type_0
};

static const MR_UserClosureId
mercury_data__closure_layout__var_use_analysis__generic_vars_first_use_5_0_1 = {
{
MR_PREDICATE,
"var_use_analysis",
"var_use_analysis",
"lambda_var_use_analysis_m_774",
3,
0
},
"var_use_analysis",
"var_use_analysis.m",
774,
"d1;c7;d1;c3;d1;c11;"
};

static const MR_UserClosureId
mercury_data__closure_layout__var_use_analysis__generic_vars_first_use_5_0_2 = {
{
MR_PREDICATE,
"var_use_analysis",
"var_use_analysis",
"goal_var_first_use_wrapper",
7,
0
},
"var_use_analysis",
"var_use_analysis.m",
779,
"d1;c7;d1;c3;d1;c14;"
};

static const MR_UserClosureId
mercury_data__closure_layout__var_use_analysis__head_vars_all_3_0_1 = {
{
MR_PREDICATE,
"var_use_analysis",
"var_use_analysis",
"lambda_var_use_analysis_m_719",
3,
0
},
"var_use_analysis",
"var_use_analysis.m",
719,
"d1;c4;"
};

static const MR_UserClosureId
mercury_data__closure_layout__var_use_analysis__weighted_average_3_0_1 = {
{
MR_PREDICATE,
"var_use_analysis",
"var_use_analysis",
"lambda_var_use_analysis_m_658",
6,
0
},
"var_use_analysis",
"var_use_analysis.m",
658,
"d1;c4;"
};

static const MR_UserClosureId
mercury_data__closure_layout__var_use_analysis__switch_var_first_use_7_0_1 = {
{
MR_PREDICATE,
"var_use_analysis",
"var_use_analysis",
"lambda_var_use_analysis_m_658",
6,
0
},
"var_use_analysis",
"var_use_analysis.m",
658,
"d1;c4;"
};

static const MR_UserClosureId
mercury_data__closure_layout__var_use_analysis__switch_var_first_use_7_0_2 = {
{
MR_PREDICATE,
"var_use_analysis",
"var_use_analysis",
"lambda_var_use_analysis_m_529",
2,
0
},
"var_use_analysis",
"var_use_analysis.m",
529,
"d1;c12;e;?;c1;"
};

static const MR_UserClosureId
mercury_data__closure_layout__var_use_analysis__switch_var_first_use_7_0_3 = {
{
MR_PREDICATE,
"var_use_analysis",
"var_use_analysis",
"ffu_to_float",
3,
0
},
"var_use_analysis",
"var_use_analysis.m",
544,
"d1;c12;e;e;c3;"
};

static const MR_UserClosureId
mercury_data__closure_layout__var_use_analysis__switch_var_first_use_7_0_4 = {
{
MR_PREDICATE,
"var_use_analysis",
"var_use_analysis",
"ffu_to_float",
3,
0
},
"var_use_analysis",
"var_use_analysis.m",
544,
"d1;c12;e;e;c3;"
};

static const MR_UserClosureId
mercury_data__closure_layout__f_118_97_114_95_117_115_101_95_97_110_97_108_121_115_105_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_105_99_95_118_97_114_115_95_102_105_114_115_116_95_117_115_101_95_95_104_111_49_95_95_91_50_93_95_48_5_0_1 = {
{
MR_PREDICATE,
"var_use_analysis",
"var_use_analysis",
"lambda_var_use_analysis_m_774",
3,
0
},
"var_use_analysis",
"var_use_analysis.m",
774,
"d1;c7;d1;c3;d1;c11;"
};

static const MR_UserClosureId
mercury_data__closure_layout__f_118_97_114_95_117_115_101_95_97_110_97_108_121_115_105_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_105_99_95_118_97_114_115_95_102_105_114_115_116_95_117_115_101_95_95_104_111_49_95_95_91_50_93_95_48_5_0_2 = {
{
MR_PREDICATE,
"var_use_analysis",
"var_use_analysis",
"goal_var_first_use_wrapper",
7,
0
},
"var_use_analysis",
"var_use_analysis.m",
779,
"d1;c7;d1;c3;d1;c14;"
};


MR_BEGIN_MODULE(var_use_analysis_module0)
	MR_init_entry1(fn__var_use_analysis__cost_until_to_cost_since_start_2_0);
	MR_init_label1(fn__var_use_analysis__cost_until_to_cost_since_start_2_0,3)
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'cost_until_to_cost_since_start'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__var_use_analysis__cost_until_to_cost_since_start_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,1)) {
		MR_GOTO_LAB(fn__var_use_analysis__cost_until_to_cost_since_start_2_0_i3);
	}
	MR_r1 = MR_float_to_word((MR_word_to_float(MR_r2) - MR_word_to_float(MR_ctfield(1, MR_r1, 0))));
	MR_proceed();
MR_def_label(fn__var_use_analysis__cost_until_to_cost_since_start_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(0, MR_r1, 0);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(var_use_analysis_module1)
	MR_init_entry1(fn__var_use_analysis__cost_until_to_cost_before_end_2_0);
	MR_init_label1(fn__var_use_analysis__cost_until_to_cost_before_end_2_0,3)
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'cost_until_to_cost_before_end'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__var_use_analysis__cost_until_to_cost_before_end_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,1)) {
		MR_GOTO_LAB(fn__var_use_analysis__cost_until_to_cost_before_end_2_0_i3);
	}
	MR_r1 = MR_ctfield(1, MR_r1, 0);
	MR_proceed();
MR_def_label(fn__var_use_analysis__cost_until_to_cost_before_end_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_float_to_word((MR_word_to_float(MR_r2) - MR_word_to_float(MR_ctfield(0, MR_r1, 0))));
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(create_report__create_proc_report_3_0);
MR_decl_entry(create_report__create_procrep_coverage_report_3_0);
MR_declare_entry(mercury__do_call_closure_1);
extern const MR_TypeCtorInfo_Struct mercury_data_mdbcomp__program_representation__type_ctor_info_goal_path_0;
extern const MR_TypeCtorInfo_Struct mercury_data_report__type_ctor_info_call_site_perf_0;
MR_decl_entry(fn__map__init_0_0);
MR_decl_entry(list__foldl_4_0);
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;
MR_decl_entry(list__map_corresponding_4_0);

MR_BEGIN_MODULE(var_use_analysis_module2)
	MR_init_entry1(var_use_analysis__generic_vars_first_use_5_0);
	MR_init_label8(var_use_analysis__generic_vars_first_use_5_0,2,5,8,10,9,11,14,16)
	MR_init_label1(var_use_analysis__generic_vars_first_use_5_0,3)
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'generic_vars_first_use'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__var_use_analysis__generic_vars_first_use_5_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(10);
	MR_sv(10) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r2;
	MR_sv(2) = MR_tempr1;
	MR_tempr2 = MR_r3;
	MR_sv(3) = MR_tempr2;
	MR_sv(4) = MR_r4;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_tempr2;
	}
	MR_np_call_localret_ent(create_report__create_proc_report_3_0,
		var_use_analysis__generic_vars_first_use_5_0_i2);
MR_def_label(var_use_analysis__generic_vars_first_use_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TEST(MR_r1,1)) {
		MR_GOTO_LAB(var_use_analysis__generic_vars_first_use_5_0_i3);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_ctfield(0, MR_r1, 0);
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(create_report__create_procrep_coverage_report_3_0,
		var_use_analysis__generic_vars_first_use_5_0_i5);
MR_def_label(var_use_analysis__generic_vars_first_use_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TEST(MR_r1,1)) {
		MR_GOTO_LAB(var_use_analysis__generic_vars_first_use_5_0_i3);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_ctfield(0, MR_ctfield(0, MR_ctfield(0, MR_r1, 0), 1), 1);
	MR_r1 = MR_tempr1;
	MR_r2 = MR_ctfield(0, MR_sv(1), 0);
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(var_use_analysis__generic_vars_first_use_5_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_1),
		mercury__var_use_analysis__generic_vars_first_use_5_0_i8);
MR_def_label(var_use_analysis__generic_vars_first_use_5_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_sv(3);
	MR_tempr1 = MR_ctfield(0, MR_tempr2, 0);
	MR_r4 = MR_tempr1;
	MR_r3 = MR_ctfield(0, MR_tempr1, 8);
	if (MR_LTAGS_TESTR(MR_r3,0,0)) {
		MR_GOTO_LAB(var_use_analysis__generic_vars_first_use_5_0_i10);
	}
	MR_r3 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r5 = MR_tempr2;
	MR_sv(3) = MR_r2;
	MR_sv(5) = MR_ctfield(0, MR_r5, 1);
	MR_sv(6) = MR_ctfield(0, MR_ctfield(0, MR_tempr1, 7), 6);
	MR_sv(7) = MR_ctfield(0, MR_r3, 1);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__program_representation, goal_path);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(report, call_site_perf);
	MR_GOTO_LAB(var_use_analysis__generic_vars_first_use_5_0_i9);
	}
MR_def_label(var_use_analysis__generic_vars_first_use_5_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_tempr2 = MR_sv(3);
	MR_sv(3) = MR_r2;
	MR_sv(5) = MR_ctfield(0, MR_tempr2, 1);
	MR_sv(6) = MR_ctfield(0, MR_ctfield(1, MR_r3, 0), 6);
	MR_sv(7) = MR_ctfield(0, MR_tempr1, 1);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__program_representation, goal_path);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(report, call_site_perf);
	}
MR_def_label(var_use_analysis__generic_vars_first_use_5_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_sv(9) = MR_r2;
	MR_np_call_localret_ent(fn__map__init_0_0,
		var_use_analysis__generic_vars_first_use_5_0_i11);
MR_def_label(var_use_analysis__generic_vars_first_use_5_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_r2 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_CTOR_ADDR(tree234, tree234, 2);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(8);
	MR_tempr3 = MR_sv(9);
	MR_tfield(0, MR_tempr1, 2) = MR_tempr3;
	MR_tempr2 = MR_r1;
	MR_r1 = MR_tempr3;
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,2,0);
	MR_r4 = MR_sv(5);
	MR_r5 = MR_tempr2;
	}
	MR_np_call_localret_ent(list__foldl_4_0,
		var_use_analysis__generic_vars_first_use_5_0_i14);
MR_def_label(var_use_analysis__generic_vars_first_use_5_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 7);
	MR_r4 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(4,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(var_use_analysis__goal_var_first_use_wrapper_7_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 4;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(4);
	MR_tfield(0, MR_tempr1, 5) = MR_r1;
	MR_tfield(0, MR_tempr1, 6) = MR_sv(7);
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(var_use_analysis, var_use_type);
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(var_use_analysis, var_use_info);
	MR_r5 = MR_sv(1);
	MR_r6 = MR_sv(3);
	}
	MR_np_call_localret_ent(list__map_corresponding_4_0,
		var_use_analysis__generic_vars_first_use_5_0_i16);
MR_def_label(var_use_analysis__generic_vars_first_use_5_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(6);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_r1, 0) = MR_tempr1;
	}
MR_def_label(var_use_analysis__generic_vars_first_use_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(10);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

extern const MR_TypeCtorInfo_Struct mercury_data_mdbcomp__program_representation__type_ctor_info_head_var_rep_0;
MR_decl_entry(list__map2_4_0);

MR_BEGIN_MODULE(var_use_analysis_module3)
	MR_init_entry1(var_use_analysis__head_vars_all_3_0);
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'head_vars_all'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__var_use_analysis__head_vars_all_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__program_representation, head_var_rep);
	MR_r2 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(var_use_analysis, var_use_type);
	MR_r4 = (MR_Word) MR_TAG_COMMON(0,2,1);
	MR_r5 = MR_tempr1;
	MR_np_tailcall_ent(list__map2_4_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(var_use_analysis_module4)
	MR_init_entry1(var_use_analysis__var_mode_to_var_use_2_0);
	MR_init_label2(var_use_analysis__var_mode_to_var_use_2_0,2,5)
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'var_mode_to_var_use'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__var_use_analysis__var_mode_to_var_use_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r2 = MR_ctfield(0, MR_tempr1, 1);
	MR_r3 = MR_ctfield(0, MR_tempr1, 0);
	if (MR_INT_NE(MR_r3,1)) {
		MR_GOTO_LAB(var_use_analysis__var_mode_to_var_use_2_0_i2);
	}
	if (MR_INT_NE(MR_r2,1)) {
		MR_GOTO_LAB(var_use_analysis__var_mode_to_var_use_2_0_i2);
	}
	MR_r1 = (MR_Integer) 1;
	MR_proceed();
	}
MR_def_label(var_use_analysis__var_mode_to_var_use_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r3,0)) {
		MR_GOTO_LAB(var_use_analysis__var_mode_to_var_use_2_0_i5);
	}
	if (MR_INT_NE(MR_r2,1)) {
		MR_GOTO_LAB(var_use_analysis__var_mode_to_var_use_2_0_i5);
	}
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(var_use_analysis__var_mode_to_var_use_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 2;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(var_use_analysis_module5)
	MR_init_entry1(var_use_analysis__pessimistic_var_use_info_2_0);
	MR_init_label1(var_use_analysis__pessimistic_var_use_info_2_0,3)
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'pessimistic_var_use_info'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__var_use_analysis__pessimistic_var_use_info_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(var_use_analysis__pessimistic_var_use_info_2_0_i3);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_TAG_COMMON(0,5,0);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_proceed();
	}
MR_def_label(var_use_analysis__pessimistic_var_use_info_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_TAG_COMMON(1,5,0);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(require__error_1_0);

MR_BEGIN_MODULE(var_use_analysis_module6)
	MR_init_entry1(var_use_analysis__proc_var_first_use_6_0);
	MR_init_label4(var_use_analysis__proc_var_first_use_6_0,2,6,4,11)
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'proc_var_first_use'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(var_use_analysis__proc_var_first_use_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r4;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_r3;
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	MR_r4 = MR_r5;
	}
	MR_np_call_localret_ent(f_118_97_114_95_117_115_101_95_97_110_97_108_121_115_105_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_105_99_95_118_97_114_115_95_102_105_114_115_116_95_117_115_101_95_95_104_111_49_95_95_91_50_93_95_48_5_0,
		var_use_analysis__proc_var_first_use_6_0_i2);
MR_def_label(var_use_analysis__proc_var_first_use_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,1)) {
		MR_GOTO_LAB(var_use_analysis__proc_var_first_use_6_0_i4);
	}
	if (MR_INT_NE(MR_sv(1),1)) {
		MR_GOTO_LAB(var_use_analysis__proc_var_first_use_6_0_i6);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_r1 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_TAG_COMMON(0,5,0);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(1);
	MR_decr_sp_and_return(2);
	}
MR_def_label(var_use_analysis__proc_var_first_use_6_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_r1 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_TAG_COMMON(1,5,0);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(1);
	MR_decr_sp_and_return(2);
	}
MR_def_label(var_use_analysis__proc_var_first_use_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_ctfield(0, MR_ctfield(0, MR_r1, 0), 1);
	if (MR_LTAGS_TEST(MR_tempr1,0,0)) {
		MR_GOTO_LAB(var_use_analysis__proc_var_first_use_6_0_i11);
	}
	MR_tempr2 = MR_ctfield(1, MR_tempr1, 1);
	if (MR_LTAGS_TESTR(MR_tempr2,0,0)) {
		MR_GOTO_LAB(var_use_analysis__proc_var_first_use_6_0_i11);
	}
	MR_r1 = MR_ctfield(1, MR_tempr1, 0);
	MR_decr_sp_and_return(2);
	}
MR_def_label(var_use_analysis__proc_var_first_use_6_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("var_use_analysis.mExpecting exactly one result in proc_var_first_use", 68);
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(require__error_1_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(map__lookup_3_0);
MR_decl_entry(list__member_2_0);
MR_decl_entry(list__nth_member_search_3_0);
extern const MR_TypeCtorInfo_Struct mercury_data_profile__type_ctor_info_proc_static_ptr_0;
MR_decl_entry(set__contains_2_0);
MR_decl_entry(fn__set__insert_2_0);

MR_BEGIN_MODULE(var_use_analysis_module7)
	MR_init_entry1(var_use_analysis__call_var_first_use_7_0);
	MR_init_label8(var_use_analysis__call_var_first_use_7_0,2,4,6,11,9,15,20,18)
	MR_init_label8(var_use_analysis__call_var_first_use_7_0,24,26,29,30,31,28,36,64)
	MR_init_label7(var_use_analysis__call_var_first_use_7_0,35,39,40,66,42,67,25)
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'call_var_first_use'/7 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(var_use_analysis__call_var_first_use_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(10);
	MR_sv(10) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r4;
	MR_sv(3) = MR_tempr2;
	MR_sv(4) = MR_r5;
	MR_sv(5) = MR_ctfield(0, MR_tempr2, 2);
	MR_sv(6) = MR_ctfield(0, MR_tempr2, 3);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__program_representation, goal_path);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(report, call_site_perf);
	MR_tempr1 = MR_r3;
	MR_r3 = MR_ctfield(0, MR_tempr2, 1);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(map__lookup_3_0,
		var_use_analysis__call_var_first_use_7_0_i2);
MR_def_label(var_use_analysis__call_var_first_use_7_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r1;
	MR_tempr1 = MR_ctfield(0, MR_tempr2, 1);
	MR_r4 = MR_tempr1;
	MR_r3 = MR_ctfield(0, MR_tempr1, 8);
	if (MR_LTAGS_TESTR(MR_r3,0,0)) {
		MR_GOTO_LAB(var_use_analysis__call_var_first_use_7_0_i4);
	}
	MR_sv(7) = MR_tempr2;
	MR_r1 = MR_float_to_word((MR_word_to_float(MR_sv(4)) + MR_word_to_float(MR_ctfield(0, MR_ctfield(0, MR_tempr1, 7), 6))));
	MR_sv(8) = MR_ctfield(0, MR_ctfield(0, MR_tempr1, 7), 6);
	MR_COMPUTED_GOTO((MR_Unsigned) MR_ctfield(3, MR_sv(1), 0),
		MR_ENTRY(MR_do_not_reached) MR_AND
		MR_ENTRY(MR_do_not_reached) MR_AND
		MR_ENTRY(MR_do_not_reached) MR_AND
		MR_ENTRY(MR_do_not_reached) MR_AND
		MR_ENTRY(MR_do_not_reached) MR_AND
		MR_LABEL_AP(var_use_analysis__call_var_first_use_7_0_i6) MR_AND
		MR_LABEL_AP(var_use_analysis__call_var_first_use_7_0_i15) MR_AND
		MR_LABEL_AP(var_use_analysis__call_var_first_use_7_0_i24) MR_AND
		MR_ENTRY(MR_do_not_reached) MR_AND
		MR_ENTRY(MR_do_not_reached));
	}
MR_def_label(var_use_analysis__call_var_first_use_7_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_r1 = MR_float_to_word((MR_word_to_float(MR_sv(4)) + MR_word_to_float(MR_ctfield(0, MR_ctfield(1, MR_tempr1, 0), 6))));
	MR_sv(8) = MR_ctfield(0, MR_ctfield(1, MR_tempr1, 0), 6);
	MR_COMPUTED_GOTO((MR_Unsigned) MR_ctfield(3, MR_sv(1), 0),
		MR_ENTRY(MR_do_not_reached) MR_AND
		MR_ENTRY(MR_do_not_reached) MR_AND
		MR_ENTRY(MR_do_not_reached) MR_AND
		MR_ENTRY(MR_do_not_reached) MR_AND
		MR_ENTRY(MR_do_not_reached) MR_AND
		MR_LABEL_AP(var_use_analysis__call_var_first_use_7_0_i6) MR_AND
		MR_LABEL_AP(var_use_analysis__call_var_first_use_7_0_i15) MR_AND
		MR_LABEL_AP(var_use_analysis__call_var_first_use_7_0_i24) MR_AND
		MR_ENTRY(MR_do_not_reached) MR_AND
		MR_ENTRY(MR_do_not_reached));
	}
MR_def_label(var_use_analysis__call_var_first_use_7_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_sv(1);
	MR_r3 = MR_ctfield(3, MR_tempr2, 2);
	MR_tempr1 = MR_ctfield(3, MR_tempr2, 1);
	if ((MR_tempr1 == MR_sv(5))) {
		MR_GOTO_LAB(var_use_analysis__call_var_first_use_7_0_i9);
	}
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = MR_sv(5);
	}
	MR_np_call_localret_ent(list__member_2_0,
		var_use_analysis__call_var_first_use_7_0_i11);
MR_def_label(var_use_analysis__call_var_first_use_7_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(var_use_analysis__call_var_first_use_7_0_i25);
	}
	MR_r1 = MR_sv(1);
MR_def_label(var_use_analysis__call_var_first_use_7_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r2, 0) = MR_sv(4);
	MR_decr_sp_and_return(10);
MR_def_label(var_use_analysis__call_var_first_use_7_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_sv(1);
	MR_r3 = MR_ctfield(3, MR_tempr2, 3);
	MR_tempr1 = MR_ctfield(3, MR_tempr2, 1);
	if ((MR_tempr1 == MR_sv(5))) {
		MR_GOTO_LAB(var_use_analysis__call_var_first_use_7_0_i18);
	}
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = MR_sv(5);
	}
	MR_np_call_localret_ent(list__member_2_0,
		var_use_analysis__call_var_first_use_7_0_i20);
MR_def_label(var_use_analysis__call_var_first_use_7_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(var_use_analysis__call_var_first_use_7_0_i25);
	}
	MR_r1 = MR_sv(1);
MR_def_label(var_use_analysis__call_var_first_use_7_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r2, 0) = MR_sv(4);
	MR_decr_sp_and_return(10);
MR_def_label(var_use_analysis__call_var_first_use_7_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_sv(9) = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r1 = MR_sv(9);
	MR_r2 = MR_ctfield(3, MR_tempr1, 3);
	MR_r3 = MR_sv(5);
	}
	MR_np_call_localret_ent(list__nth_member_search_3_0,
		var_use_analysis__call_var_first_use_7_0_i26);
MR_def_label(var_use_analysis__call_var_first_use_7_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(var_use_analysis__call_var_first_use_7_0_i25);
	}
	if (MR_INT_NE(MR_sv(6),1)) {
		MR_GOTO_LAB(var_use_analysis__call_var_first_use_7_0_i29);
	}
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(var_use_analysis__call_var_first_use_7_0_i28);
MR_def_label(var_use_analysis__call_var_first_use_7_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(6),2)) {
		MR_GOTO_LAB(var_use_analysis__call_var_first_use_7_0_i30);
	}
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(var_use_analysis__call_var_first_use_7_0_i28);
MR_def_label(var_use_analysis__call_var_first_use_7_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r2;
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__member_2_0,
		var_use_analysis__call_var_first_use_7_0_i31);
MR_def_label(var_use_analysis__call_var_first_use_7_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(var_use_analysis__call_var_first_use_7_0_i25);
	}
MR_def_label(var_use_analysis__call_var_first_use_7_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(0, MR_sv(7), 0);
	if (MR_PTAG_TESTR(MR_tempr1,1)) {
		MR_GOTO_LAB(var_use_analysis__call_var_first_use_7_0_i64);
	}
	MR_r2 = MR_ctfield(0, MR_sv(3), 4);
	MR_r3 = MR_ctfield(0, MR_ctfield(0, MR_ctfield(1, MR_tempr1, 0), 0), 0);
	MR_sv(5) = MR_r3;
	MR_sv(7) = MR_r2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(profile, proc_static_ptr);
	}
	MR_np_call_localret_ent(set__contains_2_0,
		var_use_analysis__call_var_first_use_7_0_i36);
MR_def_label(var_use_analysis__call_var_first_use_7_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(var_use_analysis__call_var_first_use_7_0_i35);
	}
MR_def_label(var_use_analysis__call_var_first_use_7_0,64)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r2, 0) = MR_float_to_word((MR_word_to_float(MR_sv(4)) + (MR_Float) 0.0000000000000000));
	MR_r1 = MR_sv(1);
	MR_decr_sp_and_return(10);
MR_def_label(var_use_analysis__call_var_first_use_7_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(profile, proc_static_ptr);
	MR_r2 = MR_sv(7);
	MR_r3 = MR_sv(5);
	MR_np_call_localret_ent(fn__set__insert_2_0,
		var_use_analysis__call_var_first_use_7_0_i39);
MR_def_label(var_use_analysis__call_var_first_use_7_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_ctfield(0, MR_sv(3), 0);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(6);
	MR_r5 = MR_tempr1;
	}
	MR_np_call_localret_ent(var_use_analysis__proc_var_first_use_6_0,
		var_use_analysis__call_var_first_use_7_0_i40);
MR_def_label(var_use_analysis__call_var_first_use_7_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(6),1)) {
		MR_GOTO_LAB(var_use_analysis__call_var_first_use_7_0_i42);
	}
	MR_r3 = MR_ctfield(0, MR_r1, 0);
	if (MR_PTAG_TESTR(MR_r3,1)) {
		MR_GOTO_LAB(var_use_analysis__call_var_first_use_7_0_i67);
	}
MR_def_label(var_use_analysis__call_var_first_use_7_0,66)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r2, 0) = MR_float_to_word((MR_word_to_float(MR_sv(4)) + (MR_word_to_float(MR_sv(8)) - MR_word_to_float(MR_const_mask_field(MR_r3, 0)))));
	MR_r1 = MR_sv(1);
	MR_decr_sp_and_return(10);
MR_def_label(var_use_analysis__call_var_first_use_7_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_ctfield(0, MR_r1, 0);
	if (MR_PTAG_TESTR(MR_r3,1)) {
		MR_GOTO_LAB(var_use_analysis__call_var_first_use_7_0_i66);
	}
MR_def_label(var_use_analysis__call_var_first_use_7_0,67)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r2, 0) = MR_float_to_word((MR_word_to_float(MR_sv(4)) + MR_word_to_float(MR_const_mask_field(MR_r3, 0))));
	MR_r1 = MR_sv(1);
	MR_decr_sp_and_return(10);
MR_def_label(var_use_analysis__call_var_first_use_7_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_decr_sp_and_return(10);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(program_representation_utils__atomic_goal_get_vars_2_0);
MR_decl_entry(set__member_2_0);

MR_BEGIN_MODULE(var_use_analysis_module8)
	MR_init_entry1(var_use_analysis__atomic_trivial_var_first_use_5_0);
	MR_init_label5(var_use_analysis__atomic_trivial_var_first_use_5_0,2,4,9,6,3)
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'atomic_trivial_var_first_use'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(var_use_analysis__atomic_trivial_var_first_use_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_sv(3) = MR_ctfield(0, MR_tempr1, 2);
	MR_sv(4) = MR_ctfield(0, MR_tempr1, 3);
	}
	MR_np_call_localret_ent(program_representation_utils__atomic_goal_get_vars_2_0,
		var_use_analysis__atomic_trivial_var_first_use_5_0_i2);
MR_def_label(var_use_analysis__atomic_trivial_var_first_use_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = (MR_Word) MR_INT_CTOR_ADDR;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(set__member_2_0,
		var_use_analysis__atomic_trivial_var_first_use_5_0_i4);
MR_def_label(var_use_analysis__atomic_trivial_var_first_use_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(var_use_analysis__atomic_trivial_var_first_use_5_0_i3);
	}
	if (MR_INT_EQ(MR_sv(4),1)) {
		MR_GOTO_LAB(var_use_analysis__atomic_trivial_var_first_use_5_0_i6);
	}
	if (MR_INT_EQ(MR_sv(4),2)) {
		MR_GOTO_LAB(var_use_analysis__atomic_trivial_var_first_use_5_0_i6);
	}
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(1);
	MR_np_call_localret_ent(list__member_2_0,
		var_use_analysis__atomic_trivial_var_first_use_5_0_i9);
MR_def_label(var_use_analysis__atomic_trivial_var_first_use_5_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(var_use_analysis__atomic_trivial_var_first_use_5_0_i3);
	}
MR_def_label(var_use_analysis__atomic_trivial_var_first_use_5_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r1, 0) = MR_sv(2);
	MR_decr_sp_and_return(6);
MR_def_label(var_use_analysis__atomic_trivial_var_first_use_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_decr_sp_and_return(6);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_float_0;
MR_decl_entry(list__foldl2_corresponding_7_0);
MR_decl_entry(fn__float__abs_1_0);
MR_decl_entry(fn__float__epsilon_0_0);
MR_decl_entry(fn__f_102_108_111_97_116_95_95_47_2_0);

MR_BEGIN_MODULE(var_use_analysis_module9)
	MR_init_entry1(var_use_analysis__weighted_average_3_0);
	MR_init_label4(var_use_analysis__weighted_average_3_0,3,5,6,4)
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'weighted_average'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(var_use_analysis__weighted_average_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_r1;
	MR_tempr2 = (MR_Word) MR_FLOAT_CTOR_ADDR;
	MR_r1 = MR_tempr2;
	MR_tempr3 = MR_r2;
	MR_r2 = MR_tempr2;
	MR_r3 = MR_tempr2;
	MR_r4 = MR_tempr2;
	MR_r5 = (MR_Word) MR_TAG_COMMON(0,2,2);
	MR_r6 = MR_tempr3;
	MR_r7 = MR_tempr1;
	MR_r8 = (MR_Word) &mercury_float_const_0pt0000000000000000;
	MR_r9 = (MR_Word) &mercury_float_const_0pt0000000000000000;
	}
	MR_np_call_localret_ent(list__foldl2_corresponding_7_0,
		var_use_analysis__weighted_average_3_0_i3);
MR_def_label(var_use_analysis__weighted_average_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__float__abs_1_0,
		var_use_analysis__weighted_average_3_0_i5);
MR_def_label(var_use_analysis__weighted_average_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_np_call_localret_ent(fn__float__epsilon_0_0,
		var_use_analysis__weighted_average_3_0_i6);
MR_def_label(var_use_analysis__weighted_average_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_word_to_float(MR_sv(3)) >= MR_word_to_float(MR_r1))) {
		MR_GOTO_LAB(var_use_analysis__weighted_average_3_0_i4);
	}
	MR_r1 = (MR_Word) &mercury_float_const_0pt0000000000000000;
	MR_decr_sp_and_return(4);
MR_def_label(var_use_analysis__weighted_average_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(fn__f_102_108_111_97_116_95_95_47_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(var_use_analysis_module10)
	MR_init_entry1(var_use_analysis__ffu_to_float_3_0);
	MR_init_label1(var_use_analysis__ffu_to_float_3_0,2)
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'ffu_to_float'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(var_use_analysis__ffu_to_float_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r2,0,0)) {
		MR_GOTO_LAB(var_use_analysis__ffu_to_float_3_0_i2);
	}
	MR_r1 = MR_ctfield(1, MR_r2, 0);
MR_def_label(var_use_analysis__ffu_to_float_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__mdbcomp__program_representation__goal_path_add_at_end_2_0);

MR_BEGIN_MODULE(var_use_analysis_module11)
	MR_init_entry1(var_use_analysis__goal_var_first_use_6_0);
	MR_init_label8(var_use_analysis__goal_var_first_use_6_0,49,13,15,26,31,5,6,12)
	MR_init_label5(var_use_analysis__goal_var_first_use_6_0,7,17,19,22,24)
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'goal_var_first_use'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(var_use_analysis__goal_var_first_use_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
MR_def_label(var_use_analysis__goal_var_first_use_6_0,49)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r5 = MR_ctfield(0, MR_r2, 0);
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r5),
		MR_LABEL_AP(var_use_analysis__goal_var_first_use_6_0_i13) MR_AND
		MR_LABEL_AP(var_use_analysis__goal_var_first_use_6_0_i15) MR_AND
		MR_LABEL_AP(var_use_analysis__goal_var_first_use_6_0_i26) MR_AND
		MR_LABEL_AP(var_use_analysis__goal_var_first_use_6_0_i31));
MR_def_label(var_use_analysis__goal_var_first_use_6_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 1;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r3;
	MR_r3 = MR_ctfield(0, MR_r5, 0);
	MR_tempr2 = MR_r4;
	MR_r4 = MR_tempr1;
	MR_r5 = MR_tempr2;
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(var_use_analysis__conj_var_first_use_7_0);
	}
MR_def_label(var_use_analysis__goal_var_first_use_6_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_ctfield(1, MR_r5, 0);
	MR_tempr2 = MR_r3;
	MR_r3 = MR_ctfield(0, MR_tempr1, 1);
	MR_tempr1 = MR_r4;
	MR_r4 = MR_tempr2;
	MR_r5 = MR_tempr1;
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(var_use_analysis__disj_var_first_use_7_0);
	}
MR_def_label(var_use_analysis__goal_var_first_use_6_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr3 = MR_r5;
	MR_r2 = MR_ctfield(2, MR_tempr3, 0);
	MR_tempr1 = MR_r3;
	MR_r3 = MR_ctfield(2, MR_tempr3, 2);
	MR_tempr2 = MR_r4;
	MR_r4 = MR_tempr1;
	MR_r5 = MR_tempr2;
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(var_use_analysis__switch_var_first_use_7_0);
	}
MR_def_label(var_use_analysis__goal_var_first_use_6_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r5;
	MR_tempr1 = MR_ctfield(3, MR_tempr2, 0);
	if (MR_INT_EQ(MR_tempr1,0)) {
		MR_GOTO_LAB(var_use_analysis__goal_var_first_use_6_0_i17);
	}
	if (MR_INT_EQ(MR_tempr1,1)) {
		MR_GOTO_LAB(var_use_analysis__goal_var_first_use_6_0_i19);
	}
	if (MR_INT_EQ(MR_tempr1,2)) {
		MR_GOTO_LAB(var_use_analysis__goal_var_first_use_6_0_i22);
	}
	MR_r6 = MR_ctfield(3, MR_tempr2, 4);
	if (MR_INT_EQ(MR_tag(MR_r6),3)) {
		MR_GOTO_LAB(var_use_analysis__goal_var_first_use_6_0_i12);
	}
	}
MR_def_label(var_use_analysis__goal_var_first_use_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r4;
	MR_sv(3) = MR_tempr2;
	MR_r1 = MR_r6;
	MR_r2 = MR_ctfield(3, MR_r5, 3);
	MR_tempr1 = MR_r3;
	MR_r3 = MR_tempr2;
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(var_use_analysis__atomic_trivial_var_first_use_5_0,
		var_use_analysis__goal_var_first_use_6_0_i6);
MR_def_label(var_use_analysis__goal_var_first_use_6_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_decr_sp_and_return(4);
MR_def_label(var_use_analysis__goal_var_first_use_6_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_ctfield(3, MR_r6, 0),
		MR_LABEL_AP(var_use_analysis__goal_var_first_use_6_0_i5) MR_AND
		MR_LABEL_AP(var_use_analysis__goal_var_first_use_6_0_i5) MR_AND
		MR_LABEL_AP(var_use_analysis__goal_var_first_use_6_0_i5) MR_AND
		MR_LABEL_AP(var_use_analysis__goal_var_first_use_6_0_i5) MR_AND
		MR_LABEL_AP(var_use_analysis__goal_var_first_use_6_0_i5) MR_AND
		MR_LABEL_AP(var_use_analysis__goal_var_first_use_6_0_i7) MR_AND
		MR_LABEL_AP(var_use_analysis__goal_var_first_use_6_0_i7) MR_AND
		MR_LABEL_AP(var_use_analysis__goal_var_first_use_6_0_i7) MR_AND
		MR_LABEL_AP(var_use_analysis__goal_var_first_use_6_0_i5) MR_AND
		MR_LABEL_AP(var_use_analysis__goal_var_first_use_6_0_i5));
MR_def_label(var_use_analysis__goal_var_first_use_6_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_r6;
	MR_r2 = MR_ctfield(3, MR_r5, 3);
	MR_tempr2 = MR_r3;
	MR_r3 = MR_tempr1;
	MR_tempr3 = MR_r4;
	MR_r4 = MR_tempr2;
	MR_r5 = MR_tempr3;
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(var_use_analysis__call_var_first_use_7_0);
	}
MR_def_label(var_use_analysis__goal_var_first_use_6_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr3 = MR_r5;
	MR_r2 = MR_ctfield(3, MR_tempr3, 1);
	MR_tempr1 = MR_r3;
	MR_r3 = MR_ctfield(3, MR_tempr3, 2);
	MR_tempr2 = MR_r4;
	MR_r4 = MR_ctfield(3, MR_tempr3, 3);
	MR_r5 = MR_tempr1;
	MR_r6 = MR_tempr2;
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(var_use_analysis__ite_var_first_use_8_0);
	}
MR_def_label(var_use_analysis__goal_var_first_use_6_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_ctfield(3, MR_r5, 1);
	MR_sv(3) = MR_r4;
	MR_r2 = (MR_Word) MR_tbmkword(0, 3);
	MR_np_call_localret_ent(fn__mdbcomp__program_representation__goal_path_add_at_end_2_0,
		var_use_analysis__goal_var_first_use_6_0_i24);
MR_def_label(var_use_analysis__goal_var_first_use_6_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_r2 = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 1;
	MR_tempr2 = MR_r5;
	MR_tfield(3, MR_tempr1, 1) = MR_ctfield(3, MR_tempr2, 2);
	MR_sv(1) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_sv(2) = MR_ctfield(3, MR_tempr2, 1);
	}
	MR_np_call_localret_ent(fn__mdbcomp__program_representation__goal_path_add_at_end_2_0,
		var_use_analysis__goal_var_first_use_6_0_i24);
MR_def_label(var_use_analysis__goal_var_first_use_6_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(3);
	MR_succip_word = MR_sv(4);
	MR_GOTO_LAB(var_use_analysis__goal_var_first_use_6_0_i49);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(var_use_analysis_module12)
	MR_init_entry1(var_use_analysis__conj_var_first_use_7_0);
	MR_init_label8(var_use_analysis__conj_var_first_use_7_0,27,5,8,9,7,10,6,26)
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'conj_var_first_use'/7 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(var_use_analysis__conj_var_first_use_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r3,0,0)) {
		MR_GOTO_LAB(var_use_analysis__conj_var_first_use_7_0_i27);
	}
	MR_r1 = MR_r5;
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(var_use_analysis__conj_var_first_use_7_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tempr2 = MR_r2;
	MR_tfield(1, MR_tempr1, 0) = MR_tempr2;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_tempr2;
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_r5;
	MR_tempr3 = MR_r3;
	MR_sv(5) = MR_ctfield(1, MR_tempr3, 0);
	MR_sv(6) = MR_ctfield(1, MR_tempr3, 1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__mdbcomp__program_representation__goal_path_add_at_end_2_0,
		var_use_analysis__conj_var_first_use_7_0_i5);
MR_def_label(var_use_analysis__conj_var_first_use_7_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_sv(3);
	MR_tempr1 = MR_ctfield(0, MR_tempr2, 3);
	if (MR_INT_NE(MR_tempr1,1)) {
		MR_GOTO_LAB(var_use_analysis__conj_var_first_use_7_0_i7);
	}
	MR_r2 = MR_sv(5);
	MR_r3 = MR_tempr2;
	MR_r4 = MR_sv(4);
	}
	MR_np_call_localret_ent(var_use_analysis__goal_var_first_use_6_0,
		var_use_analysis__conj_var_first_use_7_0_i8);
MR_def_label(var_use_analysis__conj_var_first_use_7_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r2;
	MR_tempr2 = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = ((MR_Integer) MR_sv(2) + (MR_Integer) 1);
	MR_r3 = MR_sv(6);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_tempr2;
	}
	MR_np_localcall_lab(var_use_analysis__conj_var_first_use_7_0,
		var_use_analysis__conj_var_first_use_7_0_i9);
MR_def_label(var_use_analysis__conj_var_first_use_7_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r2;
	MR_r2 = MR_sv(1);
	MR_sv(1) = MR_r3;
	MR_GOTO_LAB(var_use_analysis__conj_var_first_use_7_0_i6);
MR_def_label(var_use_analysis__conj_var_first_use_7_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = ((MR_Integer) MR_sv(2) + (MR_Integer) 1);
	MR_r3 = MR_sv(6);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(4);
	}
	MR_np_localcall_lab(var_use_analysis__conj_var_first_use_7_0,
		var_use_analysis__conj_var_first_use_7_0_i10);
MR_def_label(var_use_analysis__conj_var_first_use_7_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r2;
	MR_tempr2 = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_tempr2;
	}
	MR_np_call_localret_ent(var_use_analysis__goal_var_first_use_6_0,
		var_use_analysis__conj_var_first_use_7_0_i6);
MR_def_label(var_use_analysis__conj_var_first_use_7_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(var_use_analysis__conj_var_first_use_7_0_i26);
	}
	MR_r2 = MR_sv(1);
MR_def_label(var_use_analysis__conj_var_first_use_7_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(7);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__mdbcomp__program_representation__detism_get_solutions_1_0);

MR_BEGIN_MODULE(var_use_analysis_module13)
	MR_init_entry1(var_use_analysis__disj_var_first_use_7_0);
	MR_init_label3(var_use_analysis__disj_var_first_use_7_0,2,4,3)
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'disj_var_first_use'/7 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(var_use_analysis__disj_var_first_use_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r4;
	MR_sv(3) = MR_r5;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = (MR_Integer) 1;
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(var_use_analysis__disj_var_first_use_2_7_0,
		var_use_analysis__disj_var_first_use_7_0_i2);
MR_def_label(var_use_analysis__disj_var_first_use_7_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r2;
	MR_sv(4) = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__mdbcomp__program_representation__detism_get_solutions_1_0,
		var_use_analysis__disj_var_first_use_7_0_i4);
MR_def_label(var_use_analysis__disj_var_first_use_7_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,2)) {
		MR_GOTO_LAB(var_use_analysis__disj_var_first_use_7_0_i3);
	}
	if (MR_LTAGS_TEST(MR_sv(1),0,0)) {
		MR_GOTO_LAB(var_use_analysis__disj_var_first_use_7_0_i3);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(0, MR_sv(2), 3);
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r2, 0) = MR_sv(3);
	MR_r1 = MR_sv(4);
	MR_decr_sp_and_return(5);
	}
MR_def_label(var_use_analysis__disj_var_first_use_7_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_r1 = MR_sv(4);
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(coverage__get_coverage_before_2_0);
MR_decl_entry(fn__float__float_1_0);

MR_BEGIN_MODULE(var_use_analysis_module14)
	MR_init_entry1(var_use_analysis__disj_var_first_use_2_7_0);
	MR_init_label8(var_use_analysis__disj_var_first_use_2_7_0,77,5,8,9,7,10,6,13)
	MR_init_label8(var_use_analysis__disj_var_first_use_2_7_0,21,23,20,25,27,34,36,33)
	MR_init_label3(var_use_analysis__disj_var_first_use_2_7_0,26,43,76)
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'disj_var_first_use_2'/7 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(var_use_analysis__disj_var_first_use_2_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r3,0,0)) {
		MR_GOTO_LAB(var_use_analysis__disj_var_first_use_2_7_0_i77);
	}
	MR_r1 = MR_r5;
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(var_use_analysis__disj_var_first_use_2_7_0,77)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 1);
	MR_tempr2 = MR_r2;
	MR_tfield(2, MR_tempr1, 0) = MR_tempr2;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_tempr2;
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_r5;
	MR_tempr3 = MR_r3;
	MR_sv(5) = MR_ctfield(1, MR_tempr3, 0);
	MR_sv(6) = MR_ctfield(1, MR_tempr3, 1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__mdbcomp__program_representation__goal_path_add_at_end_2_0,
		var_use_analysis__disj_var_first_use_2_7_0_i5);
MR_def_label(var_use_analysis__disj_var_first_use_2_7_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr3 = MR_sv(3);
	MR_tempr1 = MR_ctfield(0, MR_tempr3, 3);
	MR_r5 = MR_tempr1;
	if (MR_INT_NE(MR_tempr1,1)) {
		MR_GOTO_LAB(var_use_analysis__disj_var_first_use_2_7_0_i7);
	}
	MR_tempr2 = MR_sv(4);
	MR_sv(4) = MR_tempr1;
	MR_r2 = MR_sv(5);
	MR_r3 = MR_tempr3;
	MR_r4 = MR_tempr2;
	}
	MR_np_call_localret_ent(var_use_analysis__goal_var_first_use_6_0,
		var_use_analysis__disj_var_first_use_2_7_0_i8);
MR_def_label(var_use_analysis__disj_var_first_use_2_7_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r2;
	MR_tempr2 = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = ((MR_Integer) MR_sv(2) + (MR_Integer) 1);
	MR_r3 = MR_sv(6);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_tempr2;
	}
	MR_np_localcall_lab(var_use_analysis__disj_var_first_use_2_7_0,
		var_use_analysis__disj_var_first_use_2_7_0_i9);
MR_def_label(var_use_analysis__disj_var_first_use_2_7_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r2;
	MR_r2 = MR_sv(1);
	MR_sv(1) = MR_r3;
	MR_GOTO_LAB(var_use_analysis__disj_var_first_use_2_7_0_i6);
MR_def_label(var_use_analysis__disj_var_first_use_2_7_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_tempr2 = MR_sv(4);
	MR_sv(4) = MR_r5;
	MR_r1 = MR_tempr1;
	MR_r2 = ((MR_Integer) MR_sv(2) + (MR_Integer) 1);
	MR_r3 = MR_sv(6);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_tempr2;
	}
	MR_np_localcall_lab(var_use_analysis__disj_var_first_use_2_7_0,
		var_use_analysis__disj_var_first_use_2_7_0_i10);
MR_def_label(var_use_analysis__disj_var_first_use_2_7_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r2;
	MR_tempr2 = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_tempr2;
	}
	MR_np_call_localret_ent(var_use_analysis__goal_var_first_use_6_0,
		var_use_analysis__disj_var_first_use_2_7_0_i6);
MR_def_label(var_use_analysis__disj_var_first_use_2_7_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(var_use_analysis__disj_var_first_use_2_7_0_i13);
	}
	if (MR_LTAGS_TEST(MR_sv(1),0,0)) {
		MR_GOTO_LAB(var_use_analysis__disj_var_first_use_2_7_0_i76);
	}
	MR_r2 = MR_sv(1);
	MR_decr_sp_and_return(7);
MR_def_label(var_use_analysis__disj_var_first_use_2_7_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_sv(1),0,0)) {
		MR_GOTO_LAB(var_use_analysis__disj_var_first_use_2_7_0_i76);
	}
	if (MR_INT_EQ(MR_sv(4),1)) {
		MR_GOTO_LAB(var_use_analysis__disj_var_first_use_2_7_0_i76);
	}
	MR_sv(4) = MR_ctfield(1, MR_r2, 0);
	MR_sv(2) = MR_ctfield(1, MR_sv(1), 0);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_ctfield(0, MR_sv(5), 2);
	MR_np_call_localret_ent(coverage__get_coverage_before_2_0,
		var_use_analysis__disj_var_first_use_2_7_0_i21);
MR_def_label(var_use_analysis__disj_var_first_use_2_7_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(var_use_analysis__disj_var_first_use_2_7_0_i20);
	}
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__float__float_1_0,
		var_use_analysis__disj_var_first_use_2_7_0_i23);
MR_def_label(var_use_analysis__disj_var_first_use_2_7_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_GOTO_LAB(var_use_analysis__disj_var_first_use_2_7_0_i25);
MR_def_label(var_use_analysis__disj_var_first_use_2_7_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("var_use_analysis.m unknown coverage before disjunct", 51);
	MR_np_call_localret_ent(require__error_1_0,
		var_use_analysis__disj_var_first_use_2_7_0_i25);
MR_def_label(var_use_analysis__disj_var_first_use_2_7_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(6),0,0)) {
		MR_GOTO_LAB(var_use_analysis__disj_var_first_use_2_7_0_i27);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r1 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(3);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_TAG_COMMON(1,3,2);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr3;
	MR_tfield(1, MR_tempr3, 0) = MR_sv(4);
	MR_tfield(1, MR_tempr3, 1) = MR_tempr2;
	}
	MR_np_call_localret_ent(var_use_analysis__weighted_average_3_0,
		var_use_analysis__disj_var_first_use_2_7_0_i43);
MR_def_label(var_use_analysis__disj_var_first_use_2_7_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(0, MR_ctfield(1, MR_sv(6), 0), 2);
	MR_np_call_localret_ent(coverage__get_coverage_before_2_0,
		var_use_analysis__disj_var_first_use_2_7_0_i34);
MR_def_label(var_use_analysis__disj_var_first_use_2_7_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(var_use_analysis__disj_var_first_use_2_7_0_i33);
	}
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__float__float_1_0,
		var_use_analysis__disj_var_first_use_2_7_0_i36);
MR_def_label(var_use_analysis__disj_var_first_use_2_7_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_r1 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_sv(3);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr3;
	MR_tfield(1, MR_tempr3, 0) = MR_sv(4);
	MR_tfield(1, MR_tempr3, 1) = MR_tempr1;
	}
	MR_np_call_localret_ent(var_use_analysis__weighted_average_3_0,
		var_use_analysis__disj_var_first_use_2_7_0_i43);
MR_def_label(var_use_analysis__disj_var_first_use_2_7_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("var_use_analysis.m unknown coverage before disjunct", 51);
	MR_np_call_localret_ent(require__error_1_0,
		var_use_analysis__disj_var_first_use_2_7_0_i26);
MR_def_label(var_use_analysis__disj_var_first_use_2_7_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(var_use_analysis__weighted_average_3_0,
		var_use_analysis__disj_var_first_use_2_7_0_i43);
MR_def_label(var_use_analysis__disj_var_first_use_2_7_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r2, 0) = MR_r1;
	MR_r1 = MR_sv(1);
MR_def_label(var_use_analysis__disj_var_first_use_2_7_0,76)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(7);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(list__all_true_2_0);
MR_decl_entry(list__map_3_0);

MR_BEGIN_MODULE(var_use_analysis_module15)
	MR_init_entry1(var_use_analysis__switch_var_first_use_7_0);
	MR_init_label8(var_use_analysis__switch_var_first_use_7_0,2,4,6,7,5,8,9,10)
	MR_init_label5(var_use_analysis__switch_var_first_use_7_0,14,12,17,20,21)
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'switch_var_first_use'/7 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(var_use_analysis__switch_var_first_use_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r4;
	MR_sv(2) = MR_tempr2;
	MR_sv(3) = MR_r5;
	MR_r2 = (MR_Integer) 1;
	MR_tempr1 = MR_r3;
	MR_r3 = MR_tempr2;
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(var_use_analysis__switch_var_first_use_2_8_0,
		var_use_analysis__switch_var_first_use_7_0_i2);
MR_def_label(var_use_analysis__switch_var_first_use_7_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_sv(5) = MR_r3;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = (MR_Word) MR_FLOAT_CTOR_ADDR;
	MR_r1 = MR_tempr1;
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tempr1;
	MR_r5 = (MR_Word) MR_TAG_COMMON(0,2,3);
	MR_r6 = MR_tempr2;
	MR_r7 = MR_sv(4);
	MR_r8 = (MR_Word) &mercury_float_const_0pt0000000000000000;
	MR_r9 = (MR_Word) &mercury_float_const_0pt0000000000000000;
	}
	MR_np_call_localret_ent(list__foldl2_corresponding_7_0,
		var_use_analysis__switch_var_first_use_7_0_i4);
MR_def_label(var_use_analysis__switch_var_first_use_7_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_sv(7) = MR_tempr1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__float__abs_1_0,
		var_use_analysis__switch_var_first_use_7_0_i6);
MR_def_label(var_use_analysis__switch_var_first_use_7_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_np_call_localret_ent(fn__float__epsilon_0_0,
		var_use_analysis__switch_var_first_use_7_0_i7);
MR_def_label(var_use_analysis__switch_var_first_use_7_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_word_to_float(MR_sv(8)) >= MR_word_to_float(MR_r1))) {
		MR_GOTO_LAB(var_use_analysis__switch_var_first_use_7_0_i5);
	}
	MR_r1 = (MR_Word) &mercury_float_const_0pt0000000000000000;
	MR_r2 = MR_ctfield(0, MR_sv(2), 2);
	MR_GOTO_LAB(var_use_analysis__switch_var_first_use_7_0_i9);
MR_def_label(var_use_analysis__switch_var_first_use_7_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(7);
	MR_np_call_localret_ent(fn__f_102_108_111_97_116_95_95_47_2_0,
		var_use_analysis__switch_var_first_use_7_0_i8);
MR_def_label(var_use_analysis__switch_var_first_use_7_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_ctfield(0, MR_sv(2), 2);
MR_def_label(var_use_analysis__switch_var_first_use_7_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r2 != MR_sv(1))) {
		MR_GOTO_LAB(var_use_analysis__switch_var_first_use_7_0_i10);
	}
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r2, 0) = MR_sv(3);
	MR_decr_sp_and_return(9);
MR_def_label(var_use_analysis__switch_var_first_use_7_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(var_use_analysis, found_first_use);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,8,0);
	MR_r3 = MR_sv(5);
	MR_np_call_localret_ent(list__all_true_2_0,
		var_use_analysis__switch_var_first_use_7_0_i14);
MR_def_label(var_use_analysis__switch_var_first_use_7_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(var_use_analysis__switch_var_first_use_7_0_i12);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_decr_sp_and_return(9);
MR_def_label(var_use_analysis__switch_var_first_use_7_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_ctfield(0, MR_sv(2), 3);
	if (MR_INT_NE(MR_tempr1,1)) {
		MR_GOTO_LAB(var_use_analysis__switch_var_first_use_7_0_i17);
	}
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 4);
	MR_r3 = MR_tempr2;
	MR_tfield(0, MR_tempr2, 0) = (MR_Word) MR_COMMON(1,2);
	MR_tfield(0, MR_tempr2, 1) = (MR_Word) MR_ENTRY_AP(var_use_analysis__ffu_to_float_3_0);
	MR_tfield(0, MR_tempr2, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr2, 3) = MR_sv(3);
	MR_r4 = MR_sv(5);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(var_use_analysis, found_first_use);
	MR_r2 = (MR_Word) MR_FLOAT_CTOR_ADDR;
	}
	MR_np_call_localret_ent(list__map_3_0,
		var_use_analysis__switch_var_first_use_7_0_i20);
MR_def_label(var_use_analysis__switch_var_first_use_7_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(1,3);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(var_use_analysis__ffu_to_float_3_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(1);
	MR_r4 = MR_sv(5);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(var_use_analysis, found_first_use);
	MR_r2 = (MR_Word) MR_FLOAT_CTOR_ADDR;
	}
	MR_np_call_localret_ent(list__map_3_0,
		var_use_analysis__switch_var_first_use_7_0_i20);
MR_def_label(var_use_analysis__switch_var_first_use_7_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(var_use_analysis__weighted_average_3_0,
		var_use_analysis__switch_var_first_use_7_0_i21);
MR_def_label(var_use_analysis__switch_var_first_use_7_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r2, 0) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_decr_sp_and_return(9);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(var_use_analysis_module16)
	MR_init_entry1(var_use_analysis__switch_var_first_use_2_8_0);
	MR_init_label7(var_use_analysis__switch_var_first_use_2_8_0,29,4,6,7,12,14,10)
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'switch_var_first_use_2'/8 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(var_use_analysis__switch_var_first_use_2_8_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r4,0,0)) {
		MR_GOTO_LAB(var_use_analysis__switch_var_first_use_2_8_0_i29);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(var_use_analysis__switch_var_first_use_2_8_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r5;
	MR_sv(5) = MR_ctfield(1, MR_r4, 0);
	MR_r2 = ((MR_Integer) MR_r2 + (MR_Integer) 1);
	MR_r4 = MR_ctfield(1, MR_r4, 1);
	MR_np_localcall_lab(var_use_analysis__switch_var_first_use_2_8_0,
		var_use_analysis__switch_var_first_use_2_8_0_i4);
MR_def_label(var_use_analysis__switch_var_first_use_2_8_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(2);
	MR_tfield(3, MR_tempr1, 2) = (MR_Word) MR_tbmkword(0, 0);
	MR_sv(6) = MR_r1;
	MR_tempr2 = MR_sv(1);
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_r1 = MR_tempr2;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__mdbcomp__program_representation__goal_path_add_at_end_2_0,
		var_use_analysis__switch_var_first_use_2_8_0_i6);
MR_def_label(var_use_analysis__switch_var_first_use_2_8_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_ctfield(0, MR_sv(5), 2);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(4);
	}
	MR_np_call_localret_ent(var_use_analysis__goal_var_first_use_6_0,
		var_use_analysis__switch_var_first_use_2_8_0_i7);
MR_def_label(var_use_analysis__switch_var_first_use_2_8_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = MR_sv(1);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_r2;
	MR_tfield(1, MR_tempr2, 1) = MR_sv(2);
	MR_sv(1) = MR_tempr1;
	MR_sv(2) = MR_tempr2;
	MR_r1 = MR_ctfield(0, MR_sv(3), 2);
	}
	MR_np_call_localret_ent(coverage__get_coverage_before_2_0,
		var_use_analysis__switch_var_first_use_2_8_0_i12);
MR_def_label(var_use_analysis__switch_var_first_use_2_8_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(var_use_analysis__switch_var_first_use_2_8_0_i10);
	}
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__float__float_1_0,
		var_use_analysis__switch_var_first_use_2_8_0_i14);
MR_def_label(var_use_analysis__switch_var_first_use_2_8_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = MR_sv(6);
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_decr_sp_and_return(7);
	}
MR_def_label(var_use_analysis__switch_var_first_use_2_8_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_tempr2 = MR_sv(2);
	MR_r1 = (MR_Word) MR_string_const("var_use_analysis.munknown coverage before switch case", 53);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(require__error_1_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(var_use_analysis_module17)
	MR_init_entry1(var_use_analysis__ite_var_first_use_8_0);
	MR_init_label8(var_use_analysis__ite_var_first_use_8_0,3,5,7,8,2,12,13,14)
	MR_init_label8(var_use_analysis__ite_var_first_use_8_0,15,18,19,20,23,17,24,25)
	MR_init_label8(var_use_analysis__ite_var_first_use_8_0,28,16,32,36,35,38,39,42)
	MR_init_label1(var_use_analysis__ite_var_first_use_8_0,30)
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'ite_var_first_use'/8 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(var_use_analysis__ite_var_first_use_8_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(11);
	MR_sv(11) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(3) = MR_tempr1;
	MR_sv(4) = MR_r4;
	MR_sv(5) = MR_r5;
	MR_sv(8) = MR_r6;
	MR_r1 = MR_ctfield(0, MR_tempr1, 2);
	}
	MR_np_call_localret_ent(coverage__get_coverage_before_2_0,
		var_use_analysis__ite_var_first_use_8_0_i3);
MR_def_label(var_use_analysis__ite_var_first_use_8_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(var_use_analysis__ite_var_first_use_8_0_i2);
	}
	MR_sv(6) = MR_r2;
	MR_r1 = MR_ctfield(0, MR_sv(4), 2);
	MR_np_call_localret_ent(coverage__get_coverage_before_2_0,
		var_use_analysis__ite_var_first_use_8_0_i5);
MR_def_label(var_use_analysis__ite_var_first_use_8_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(var_use_analysis__ite_var_first_use_8_0_i2);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(6);
	MR_sv(6) = MR_r2;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__float__float_1_0,
		var_use_analysis__ite_var_first_use_8_0_i7);
MR_def_label(var_use_analysis__ite_var_first_use_8_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(6);
	MR_sv(6) = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__float__float_1_0,
		var_use_analysis__ite_var_first_use_8_0_i8);
MR_def_label(var_use_analysis__ite_var_first_use_8_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_r4 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_sv(6);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_r1 = MR_sv(1);
	MR_sv(6) = MR_tempr2;
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_GOTO_LAB(var_use_analysis__ite_var_first_use_8_0_i12);
	}
MR_def_label(var_use_analysis__ite_var_first_use_8_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("var_use_analysis.mincomplete coverage information for if then else branches", 75);
	MR_np_call_localret_ent(require__error_1_0,
		var_use_analysis__ite_var_first_use_8_0_i12);
MR_def_label(var_use_analysis__ite_var_first_use_8_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(fn__mdbcomp__program_representation__goal_path_add_at_end_2_0,
		var_use_analysis__ite_var_first_use_8_0_i13);
MR_def_label(var_use_analysis__ite_var_first_use_8_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = (MR_Word) MR_tbmkword(0, 1);
	MR_np_call_localret_ent(fn__mdbcomp__program_representation__goal_path_add_at_end_2_0,
		var_use_analysis__ite_var_first_use_8_0_i14);
MR_def_label(var_use_analysis__ite_var_first_use_8_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Word) MR_tbmkword(0, 2);
	}
	MR_np_call_localret_ent(fn__mdbcomp__program_representation__goal_path_add_at_end_2_0,
		var_use_analysis__ite_var_first_use_8_0_i15);
MR_def_label(var_use_analysis__ite_var_first_use_8_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr3 = MR_sv(5);
	MR_tempr1 = MR_ctfield(0, MR_tempr3, 3);
	MR_r5 = MR_tempr1;
	if (MR_INT_NE(MR_tempr1,1)) {
		MR_GOTO_LAB(var_use_analysis__ite_var_first_use_8_0_i17);
	}
	MR_tempr2 = MR_sv(8);
	MR_sv(8) = MR_r1;
	MR_sv(9) = MR_tempr1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tempr3;
	MR_r4 = MR_tempr2;
	}
	MR_np_call_localret_ent(var_use_analysis__goal_var_first_use_6_0,
		var_use_analysis__ite_var_first_use_8_0_i18);
MR_def_label(var_use_analysis__ite_var_first_use_8_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(5);
	MR_r4 = MR_sv(1);
	}
	MR_np_call_localret_ent(var_use_analysis__goal_var_first_use_6_0,
		var_use_analysis__ite_var_first_use_8_0_i19);
MR_def_label(var_use_analysis__ite_var_first_use_8_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = MR_r2;
	MR_r1 = MR_sv(8);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(5);
	MR_r4 = MR_sv(1);
	}
	MR_np_call_localret_ent(var_use_analysis__goal_var_first_use_6_0,
		var_use_analysis__ite_var_first_use_8_0_i20);
MR_def_label(var_use_analysis__ite_var_first_use_8_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(3);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_sv(3) = MR_r2;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_tempr2;
	}
	MR_np_call_localret_ent(var_use_analysis__weighted_average_3_0,
		var_use_analysis__ite_var_first_use_8_0_i23);
MR_def_label(var_use_analysis__ite_var_first_use_8_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_sv(10) = MR_r1;
	MR_GOTO_LAB(var_use_analysis__ite_var_first_use_8_0_i16);
MR_def_label(var_use_analysis__ite_var_first_use_8_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(8);
	MR_sv(8) = MR_r1;
	MR_sv(9) = MR_r5;
	MR_sv(10) = MR_tempr1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(5);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(var_use_analysis__goal_var_first_use_6_0,
		var_use_analysis__ite_var_first_use_8_0_i24);
MR_def_label(var_use_analysis__ite_var_first_use_8_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = MR_r2;
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(5);
	MR_r4 = MR_sv(10);
	}
	MR_np_call_localret_ent(var_use_analysis__goal_var_first_use_6_0,
		var_use_analysis__ite_var_first_use_8_0_i25);
MR_def_label(var_use_analysis__ite_var_first_use_8_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_sv(3) = MR_r2;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_tempr2;
	}
	MR_np_call_localret_ent(var_use_analysis__weighted_average_3_0,
		var_use_analysis__ite_var_first_use_8_0_i28);
MR_def_label(var_use_analysis__ite_var_first_use_8_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(5);
	MR_r4 = MR_sv(1);
	MR_np_call_localret_ent(var_use_analysis__goal_var_first_use_6_0,
		var_use_analysis__ite_var_first_use_8_0_i16);
MR_def_label(var_use_analysis__ite_var_first_use_8_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(var_use_analysis__ite_var_first_use_8_0_i30);
	}
	if (MR_LTAGS_TESTR(MR_sv(4),0,0)) {
		MR_GOTO_LAB(var_use_analysis__ite_var_first_use_8_0_i32);
	}
	if (MR_LTAGS_TESTR(MR_sv(3),0,0)) {
		MR_GOTO_LAB(var_use_analysis__ite_var_first_use_8_0_i32);
	}
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_decr_sp_and_return(11);
MR_def_label(var_use_analysis__ite_var_first_use_8_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(9),1)) {
		MR_GOTO_LAB(var_use_analysis__ite_var_first_use_8_0_i36);
	}
	MR_r2 = MR_sv(3);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_GOTO_LAB(var_use_analysis__ite_var_first_use_8_0_i35);
MR_def_label(var_use_analysis__ite_var_first_use_8_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(3);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(10);
MR_def_label(var_use_analysis__ite_var_first_use_8_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(4),0,0)) {
		MR_GOTO_LAB(var_use_analysis__ite_var_first_use_8_0_i38);
	}
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(var_use_analysis__ffu_to_float_3_0,
		var_use_analysis__ite_var_first_use_8_0_i39);
MR_def_label(var_use_analysis__ite_var_first_use_8_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_ctfield(1, MR_sv(4), 0);
	MR_np_call_localret_ent(var_use_analysis__ffu_to_float_3_0,
		var_use_analysis__ite_var_first_use_8_0_i39);
MR_def_label(var_use_analysis__ite_var_first_use_8_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_r1 = MR_sv(6);
	}
	MR_np_call_localret_ent(var_use_analysis__weighted_average_3_0,
		var_use_analysis__ite_var_first_use_8_0_i42);
MR_def_label(var_use_analysis__ite_var_first_use_8_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r2, 0) = MR_r1;
	MR_r1 = MR_sv(2);
MR_def_label(var_use_analysis__ite_var_first_use_8_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(11);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(list__index1_det_3_0);

MR_BEGIN_MODULE(var_use_analysis_module18)
	MR_init_entry1(var_use_analysis__head_var_by_pos_4_0);
	MR_init_label2(var_use_analysis__head_var_by_pos_4_0,2,4)
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'head_var_by_pos'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(var_use_analysis__head_var_by_pos_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__program_representation, head_var_rep);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__index1_det_3_0,
		var_use_analysis__head_var_by_pos_4_0_i2);
MR_def_label(var_use_analysis__head_var_by_pos_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_sv(1) = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_ctfield(0, MR_r1, 0);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_ctfield(0, MR_r1, 1);
	}
	MR_np_call_localret_ent(var_use_analysis__var_mode_to_var_use_2_0,
		var_use_analysis__head_var_by_pos_4_0_i4);
MR_def_label(var_use_analysis__head_var_by_pos_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_sv(1);
	MR_decr_sp_and_return(2);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__mdbcomp__program_representation__empty_goal_path_0_0);

MR_BEGIN_MODULE(var_use_analysis_module19)
	MR_init_entry1(var_use_analysis__goal_var_first_use_wrapper_7_0);
	MR_init_label5(var_use_analysis__goal_var_first_use_wrapper_7_0,2,4,8,6,14)
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'goal_var_first_use_wrapper'/7 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(var_use_analysis__goal_var_first_use_wrapper_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_sv(5) = MR_r5;
	MR_sv(6) = MR_r6;
	MR_np_call_localret_ent(fn__mdbcomp__program_representation__empty_goal_path_0_0,
		var_use_analysis__goal_var_first_use_wrapper_7_0_i2);
MR_def_label(var_use_analysis__goal_var_first_use_wrapper_7_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(3);
	MR_tfield(0, MR_tempr1, 2) = MR_sv(5);
	MR_tfield(0, MR_tempr1, 3) = MR_sv(6);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(2);
	MR_r2 = MR_sv(4);
	MR_r4 = (MR_Word) &mercury_float_const_0pt0000000000000000;
	}
	MR_np_call_localret_ent(var_use_analysis__goal_var_first_use_6_0,
		var_use_analysis__goal_var_first_use_wrapper_7_0_i4);
MR_def_label(var_use_analysis__goal_var_first_use_wrapper_7_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(var_use_analysis__goal_var_first_use_wrapper_7_0_i6);
	}
	if (MR_INT_NE(MR_sv(6),1)) {
		MR_GOTO_LAB(var_use_analysis__goal_var_first_use_wrapper_7_0_i8);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_r1 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_TAG_COMMON(0,5,0);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(6);
	MR_decr_sp_and_return(7);
	}
MR_def_label(var_use_analysis__goal_var_first_use_wrapper_7_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_r1 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_TAG_COMMON(1,5,0);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(6);
	MR_decr_sp_and_return(7);
	}
MR_def_label(var_use_analysis__goal_var_first_use_wrapper_7_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(6),1)) {
		MR_GOTO_LAB(var_use_analysis__goal_var_first_use_wrapper_7_0_i14);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr1, 0) = MR_ctfield(1, MR_r2, 0);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_r1 = MR_tempr2;
	MR_tfield(0, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr2, 1) = MR_sv(6);
	MR_decr_sp_and_return(7);
	}
MR_def_label(var_use_analysis__goal_var_first_use_wrapper_7_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_ctfield(1, MR_r2, 0);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_r1 = MR_tempr2;
	MR_tfield(0, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr2, 1) = MR_sv(6);
	MR_decr_sp_and_return(7);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(var_use_analysis_module20)
	MR_init_entry1(__Unify___var_use_analysis__cost_until_var_use_0_0);
	MR_init_label3(__Unify___var_use_analysis__cost_until_var_use_0_0,12,5,1)
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___var_use_analysis__cost_until_var_use_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___var_use_analysis__cost_until_var_use_0_0_i12);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_tempr1;
	MR_tempr2 = MR_r2;
	MR_sv(2) = MR_tempr2;
	if (MR_PTAG_TESTR(MR_tempr1,1)) {
		MR_GOTO_LAB(__Unify___var_use_analysis__cost_until_var_use_0_0_i5);
	}
	if (MR_PTAG_TESTR(MR_tempr2,1)) {
		MR_GOTO_LAB(__Unify___var_use_analysis__cost_until_var_use_0_0_i1);
	}
	MR_r1 = MR_ctfield(1, MR_tempr1, 0);
	MR_tempr3 = MR_ctfield(1, MR_tempr2, 0);
	MR_r1 = (MR_word_to_float(MR_r1) == MR_word_to_float(MR_tempr3));
	MR_decr_sp(2);
	MR_proceed();
	}
MR_def_label(__Unify___var_use_analysis__cost_until_var_use_0_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp(2);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___var_use_analysis__cost_until_var_use_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),0)) {
		MR_GOTO_LAB(__Unify___var_use_analysis__cost_until_var_use_0_0_i1);
	}
	MR_r1 = MR_ctfield(0, MR_sv(1), 0);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(0, MR_sv(2), 0);
	MR_r1 = (MR_word_to_float(MR_r1) == MR_word_to_float(MR_tempr1));
	MR_decr_sp(2);
	MR_proceed();
	}
MR_def_label(__Unify___var_use_analysis__cost_until_var_use_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp(2);
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(private_builtin__builtin_compare_float_3_0);

MR_BEGIN_MODULE(var_use_analysis_module21)
	MR_init_entry1(__Compare___var_use_analysis__cost_until_var_use_0_0);
	MR_init_label5(__Compare___var_use_analysis__cost_until_var_use_0_0,3,2,19,7,5)
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___var_use_analysis__cost_until_var_use_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___var_use_analysis__cost_until_var_use_0_0_i3);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___var_use_analysis__cost_until_var_use_0_0_i2);
MR_def_label(__Compare___var_use_analysis__cost_until_var_use_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___var_use_analysis__cost_until_var_use_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),1)) {
		MR_GOTO_LAB(__Compare___var_use_analysis__cost_until_var_use_0_0_i5);
	}
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Compare___var_use_analysis__cost_until_var_use_0_0_i7);
	}
MR_def_label(__Compare___var_use_analysis__cost_until_var_use_0_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_const_mask_field(MR_sv(1), 0);
	MR_r2 = MR_const_mask_field(MR_sv(2), 0);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(private_builtin__builtin_compare_float_3_0);
MR_def_label(__Compare___var_use_analysis__cost_until_var_use_0_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___var_use_analysis__cost_until_var_use_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Compare___var_use_analysis__cost_until_var_use_0_0_i19);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(var_use_analysis_module22)
	MR_init_entry1(__Unify___var_use_analysis__found_first_use_0_0);
	MR_init_label3(__Unify___var_use_analysis__found_first_use_0_0,10,5,1)
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___var_use_analysis__found_first_use_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___var_use_analysis__found_first_use_0_0_i10);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_tempr1;
	MR_sv(2) = MR_r2;
	if (MR_LTAGS_TESTR(MR_tempr1,0,0)) {
		MR_GOTO_LAB(__Unify___var_use_analysis__found_first_use_0_0_i5);
	}
	MR_r1 = (MR_sv(2) == MR_tempr1);
	MR_decr_sp(2);
	MR_proceed();
	}
MR_def_label(__Unify___var_use_analysis__found_first_use_0_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp(2);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___var_use_analysis__found_first_use_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_sv(2),0,0)) {
		MR_GOTO_LAB(__Unify___var_use_analysis__found_first_use_0_0_i1);
	}
	MR_r1 = MR_ctfield(1, MR_sv(1), 0);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(1, MR_sv(2), 0);
	MR_r1 = (MR_word_to_float(MR_r1) == MR_word_to_float(MR_tempr1));
	MR_decr_sp(2);
	MR_proceed();
	}
MR_def_label(__Unify___var_use_analysis__found_first_use_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp(2);
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(var_use_analysis_module23)
	MR_init_entry1(__Compare___var_use_analysis__found_first_use_0_0);
	MR_init_label4(__Compare___var_use_analysis__found_first_use_0_0,18,7,5,9)
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___var_use_analysis__found_first_use_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___var_use_analysis__found_first_use_0_0_i18);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	if (MR_LTAGS_TESTR(MR_sv(1),0,0)) {
		MR_GOTO_LAB(__Compare___var_use_analysis__found_first_use_0_0_i5);
	}
	if (MR_LTAGS_TESTR(MR_sv(2),0,0)) {
		MR_GOTO_LAB(__Compare___var_use_analysis__found_first_use_0_0_i7);
	}
MR_def_label(__Compare___var_use_analysis__found_first_use_0_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___var_use_analysis__found_first_use_0_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___var_use_analysis__found_first_use_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,0)) {
		MR_GOTO_LAB(__Compare___var_use_analysis__found_first_use_0_0_i9);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___var_use_analysis__found_first_use_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(1, MR_sv(1), 0);
	MR_r2 = MR_ctfield(1, MR_sv(2), 0);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(private_builtin__builtin_compare_float_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___profile__deep_0_0);
MR_decl_entry(__Unify___tree234__tree234_2_0);
MR_decl_entry(__Unify___set_ordlist__set_ordlist_1_0);

MR_BEGIN_MODULE(var_use_analysis_module24)
	MR_init_entry1(__Unify___var_use_analysis__var_first_use_static_info_0_0);
	MR_init_label4(__Unify___var_use_analysis__var_first_use_static_info_0_0,4,6,10,1)
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___var_use_analysis__var_first_use_static_info_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___var_use_analysis__var_first_use_static_info_0_0_i10);
	}
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_ctfield(0, MR_tempr1, 1);
	MR_tempr2 = MR_sv(2);
	MR_sv(2) = MR_ctfield(0, MR_tempr1, 2);
	MR_sv(3) = MR_ctfield(0, MR_tempr1, 3);
	MR_sv(4) = MR_ctfield(0, MR_tempr1, 4);
	MR_sv(5) = MR_ctfield(0, MR_tempr2, 1);
	MR_sv(6) = MR_ctfield(0, MR_tempr2, 2);
	MR_sv(7) = MR_ctfield(0, MR_tempr2, 3);
	MR_sv(8) = MR_ctfield(0, MR_tempr2, 4);
	MR_r1 = MR_ctfield(0, MR_tempr1, 0);
	MR_r2 = MR_ctfield(0, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(__Unify___profile__deep_0_0,
		__Unify___var_use_analysis__var_first_use_static_info_0_0_i4);
MR_def_label(__Unify___var_use_analysis__var_first_use_static_info_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___var_use_analysis__var_first_use_static_info_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__program_representation, goal_path);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(report, call_site_perf);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(5);
	MR_np_call_localret_ent(__Unify___tree234__tree234_2_0,
		__Unify___var_use_analysis__var_first_use_static_info_0_0_i6);
MR_def_label(__Unify___var_use_analysis__var_first_use_static_info_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___var_use_analysis__var_first_use_static_info_0_0_i1);
	}
	if ((MR_sv(2) != MR_sv(6))) {
		MR_GOTO_LAB(__Unify___var_use_analysis__var_first_use_static_info_0_0_i1);
	}
	if ((MR_sv(3) != MR_sv(7))) {
		MR_GOTO_LAB(__Unify___var_use_analysis__var_first_use_static_info_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(profile, proc_static_ptr);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(8);
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_np_tailcall_ent(__Unify___set_ordlist__set_ordlist_1_0);
MR_def_label(__Unify___var_use_analysis__var_first_use_static_info_0_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___var_use_analysis__var_first_use_static_info_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(9);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Compare___profile__deep_0_0);
MR_decl_entry(__Compare___tree234__tree234_2_0);
MR_decl_entry(private_builtin__builtin_compare_int_3_0);
MR_decl_entry(__Compare___set_ordlist__set_ordlist_1_0);

MR_BEGIN_MODULE(var_use_analysis_module25)
	MR_init_entry1(__Compare___var_use_analysis__var_first_use_static_info_0_0);
	MR_init_label7(__Compare___var_use_analysis__var_first_use_static_info_0_0,3,2,5,9,13,17,45)
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___var_use_analysis__var_first_use_static_info_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___var_use_analysis__var_first_use_static_info_0_0_i3);
	}
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___var_use_analysis__var_first_use_static_info_0_0_i2);
MR_def_label(__Compare___var_use_analysis__var_first_use_static_info_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___var_use_analysis__var_first_use_static_info_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(2);
	MR_sv(8) = MR_ctfield(0, MR_tempr5, 4);
	MR_sv(7) = MR_ctfield(0, MR_tempr5, 3);
	MR_sv(6) = MR_ctfield(0, MR_tempr5, 2);
	MR_sv(5) = MR_ctfield(0, MR_tempr5, 1);
	MR_tempr6 = MR_sv(1);
	MR_sv(4) = MR_ctfield(0, MR_tempr6, 4);
	MR_sv(3) = MR_ctfield(0, MR_tempr6, 3);
	MR_tempr1 = MR_ctfield(0, MR_tempr6, 2);
	MR_tempr2 = MR_ctfield(0, MR_tempr6, 1);
	MR_tempr3 = MR_tempr6;
	MR_sv(1) = MR_tempr2;
	MR_tempr4 = MR_tempr5;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_ctfield(0, MR_tempr3, 0);
	MR_r2 = MR_ctfield(0, MR_tempr4, 0);
	}
	MR_np_call_localret_ent(__Compare___profile__deep_0_0,
		__Compare___var_use_analysis__var_first_use_static_info_0_0_i5);
MR_def_label(__Compare___var_use_analysis__var_first_use_static_info_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___var_use_analysis__var_first_use_static_info_0_0_i45);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__program_representation, goal_path);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(report, call_site_perf);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(5);
	MR_np_call_localret_ent(__Compare___tree234__tree234_2_0,
		__Compare___var_use_analysis__var_first_use_static_info_0_0_i9);
MR_def_label(__Compare___var_use_analysis__var_first_use_static_info_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___var_use_analysis__var_first_use_static_info_0_0_i45);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(6);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___var_use_analysis__var_first_use_static_info_0_0_i13);
MR_def_label(__Compare___var_use_analysis__var_first_use_static_info_0_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___var_use_analysis__var_first_use_static_info_0_0_i45);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(7);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___var_use_analysis__var_first_use_static_info_0_0_i17);
MR_def_label(__Compare___var_use_analysis__var_first_use_static_info_0_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___var_use_analysis__var_first_use_static_info_0_0_i45);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(profile, proc_static_ptr);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(8);
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_np_tailcall_ent(__Compare___set_ordlist__set_ordlist_1_0);
MR_def_label(__Compare___var_use_analysis__var_first_use_static_info_0_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(9);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(var_use_analysis_module26)
	MR_init_entry1(__Unify___var_use_analysis__var_use_info_0_0);
	MR_init_label3(__Unify___var_use_analysis__var_use_info_0_0,4,6,1)
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___var_use_analysis__var_use_info_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___var_use_analysis__var_use_info_0_0_i6);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_ctfield(0, MR_tempr1, 1);
	MR_tempr2 = MR_sv(2);
	MR_sv(2) = MR_ctfield(0, MR_tempr2, 1);
	MR_r1 = MR_ctfield(0, MR_tempr1, 0);
	MR_r2 = MR_ctfield(0, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(__Unify___var_use_analysis__cost_until_var_use_0_0,
		__Unify___var_use_analysis__var_use_info_0_0_i4);
MR_def_label(__Unify___var_use_analysis__var_use_info_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___var_use_analysis__var_use_info_0_0_i1);
	}
	MR_r1 = (MR_sv(1) == MR_sv(2));
	MR_decr_sp_and_return(3);
MR_def_label(__Unify___var_use_analysis__var_use_info_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___var_use_analysis__var_use_info_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(var_use_analysis_module27)
	MR_init_entry1(__Compare___var_use_analysis__var_use_info_0_0);
	MR_init_label4(__Compare___var_use_analysis__var_use_info_0_0,3,2,5,21)
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___var_use_analysis__var_use_info_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___var_use_analysis__var_use_info_0_0_i3);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___var_use_analysis__var_use_info_0_0_i2);
MR_def_label(__Compare___var_use_analysis__var_use_info_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___var_use_analysis__var_use_info_0_0,2)
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
	MR_np_call_localret_ent(__Compare___var_use_analysis__cost_until_var_use_0_0,
		__Compare___var_use_analysis__var_use_info_0_0_i5);
MR_def_label(__Compare___var_use_analysis__var_use_info_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___var_use_analysis__var_use_info_0_0_i21);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
MR_def_label(__Compare___var_use_analysis__var_use_info_0_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(var_use_analysis_module28)
	MR_init_entry1(__Unify___var_use_analysis__var_use_type_0_0);
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___var_use_analysis__var_use_type_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_r1 == MR_r2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(var_use_analysis_module29)
	MR_init_entry1(__Compare___var_use_analysis__var_use_type_0_0);
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___var_use_analysis__var_use_type_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(map__det_insert_4_0);

MR_BEGIN_MODULE(var_use_analysis_module30)
	MR_init_entry1(var_use_analysis__IntroducedFrom__pred__generic_vars_first_use__774__1_3_0);
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__pred__generic_vars_first_use__774__1'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(var_use_analysis__IntroducedFrom__pred__generic_vars_first_use__774__1_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__program_representation, goal_path);
	MR_tempr2 = MR_r2;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(report, call_site_perf);
	MR_r3 = MR_tempr2;
	MR_r4 = MR_ctfield(0, MR_ctfield(0, MR_ctfield(0, MR_tempr1, 1), 0), 8);
	MR_r5 = MR_tempr1;
	MR_np_tailcall_ent(map__det_insert_4_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(var_use_analysis_module31)
	MR_init_entry1(var_use_analysis__IntroducedFrom__pred__head_vars_all__719__1_3_0);
	MR_init_label1(var_use_analysis__IntroducedFrom__pred__head_vars_all__719__1_3_0,2)
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__pred__head_vars_all__719__1'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(var_use_analysis__IntroducedFrom__pred__head_vars_all__719__1_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_ctfield(0, MR_r1, 0);
	MR_r1 = MR_ctfield(0, MR_r1, 1);
	MR_np_call_localret_ent(var_use_analysis__var_mode_to_var_use_2_0,
		var_use_analysis__IntroducedFrom__pred__head_vars_all__719__1_3_0_i2);
MR_def_label(var_use_analysis__IntroducedFrom__pred__head_vars_all__719__1_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_decr_sp_and_return(2);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(var_use_analysis_module32)
	MR_init_entry1(var_use_analysis__IntroducedFrom__pred__switch_var_first_use__529__1_2_0);
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__pred__switch_var_first_use__529__1'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(var_use_analysis__IntroducedFrom__pred__switch_var_first_use__529__1_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(__Unify___var_use_analysis__found_first_use_0_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(var_use_analysis_module33)
	MR_init_entry1(var_use_analysis__IntroducedFrom__pred__weighted_average__658__1_6_0);
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__pred__weighted_average__658__1'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(var_use_analysis__IntroducedFrom__pred__weighted_average__658__1_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_float_to_word((MR_word_to_float(MR_r3) + (MR_word_to_float(MR_r1) * MR_word_to_float(MR_r2))));
	MR_r2 = MR_float_to_word((MR_word_to_float(MR_r4) + MR_word_to_float(MR_r2)));
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(var_use_analysis_module34)
	MR_init_entry1(f_118_97_114_95_117_115_101_95_97_110_97_108_121_115_105_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_105_99_95_118_97_114_115_95_102_105_114_115_116_95_117_115_101_95_95_104_111_49_95_95_91_50_93_95_48_5_0);
	MR_init_label8(f_118_97_114_95_117_115_101_95_97_110_97_108_121_115_105_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_105_99_95_118_97_114_115_95_102_105_114_115_116_95_117_115_101_95_95_104_111_49_95_95_91_50_93_95_48_5_0,2,5,8,10,9,11,14,16)
	MR_init_label1(f_118_97_114_95_117_115_101_95_97_110_97_108_121_115_105_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_105_99_95_118_97_114_115_95_102_105_114_115_116_95_117_115_101_95_95_104_111_49_95_95_91_50_93_95_48_5_0,3)
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__pred__generic_vars_first_use__ho1__[2]_0'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(f_118_97_114_95_117_115_101_95_97_110_97_108_121_115_105_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_105_99_95_118_97_114_115_95_102_105_114_115_116_95_117_115_101_95_95_104_111_49_95_95_91_50_93_95_48_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(10);
	MR_sv(10) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r2;
	MR_sv(1) = MR_tempr1;
	MR_tempr2 = MR_r3;
	MR_sv(2) = MR_tempr2;
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_tempr2;
	}
	MR_np_call_localret_ent(create_report__create_proc_report_3_0,
		f_118_97_114_95_117_115_101_95_97_110_97_108_121_115_105_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_105_99_95_118_97_114_115_95_102_105_114_115_116_95_117_115_101_95_95_104_111_49_95_95_91_50_93_95_48_5_0_i2);
MR_def_label(f_118_97_114_95_117_115_101_95_97_110_97_108_121_115_105_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_105_99_95_118_97_114_115_95_102_105_114_115_116_95_117_115_101_95_95_104_111_49_95_95_91_50_93_95_48_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TEST(MR_r1,1)) {
		MR_GOTO_LAB(f_118_97_114_95_117_115_101_95_97_110_97_108_121_115_105_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_105_99_95_118_97_114_115_95_102_105_114_115_116_95_117_115_101_95_95_104_111_49_95_95_91_50_93_95_48_5_0_i3);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_ctfield(0, MR_r1, 0);
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(create_report__create_procrep_coverage_report_3_0,
		f_118_97_114_95_117_115_101_95_97_110_97_108_121_115_105_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_105_99_95_118_97_114_115_95_102_105_114_115_116_95_117_115_101_95_95_104_111_49_95_95_91_50_93_95_48_5_0_i5);
MR_def_label(f_118_97_114_95_117_115_101_95_97_110_97_108_121_115_105_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_105_99_95_118_97_114_115_95_102_105_114_115_116_95_117_115_101_95_95_104_111_49_95_95_91_50_93_95_48_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TEST(MR_r1,1)) {
		MR_GOTO_LAB(f_118_97_114_95_117_115_101_95_97_110_97_108_121_115_105_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_105_99_95_118_97_114_115_95_102_105_114_115_116_95_117_115_101_95_95_104_111_49_95_95_91_50_93_95_48_5_0_i3);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = MR_ctfield(0, MR_ctfield(0, MR_ctfield(0, MR_r1, 0), 1), 1);
	MR_r1 = MR_tempr1;
	MR_r2 = MR_ctfield(0, MR_sv(4), 0);
	}
	MR_np_call_localret_ent(var_use_analysis__head_var_by_pos_4_0,
		f_118_97_114_95_117_115_101_95_97_110_97_108_121_115_105_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_105_99_95_118_97_114_115_95_102_105_114_115_116_95_117_115_101_95_95_104_111_49_95_95_91_50_93_95_48_5_0_i8);
MR_def_label(f_118_97_114_95_117_115_101_95_97_110_97_108_121_115_105_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_105_99_95_118_97_114_115_95_102_105_114_115_116_95_117_115_101_95_95_104_111_49_95_95_91_50_93_95_48_5_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_sv(2);
	MR_tempr1 = MR_ctfield(0, MR_tempr2, 0);
	MR_r4 = MR_tempr1;
	MR_r3 = MR_ctfield(0, MR_tempr1, 8);
	if (MR_LTAGS_TESTR(MR_r3,0,0)) {
		MR_GOTO_LAB(f_118_97_114_95_117_115_101_95_97_110_97_108_121_115_105_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_105_99_95_118_97_114_115_95_102_105_114_115_116_95_117_115_101_95_95_104_111_49_95_95_91_50_93_95_48_5_0_i10);
	}
	MR_r3 = MR_tempr2;
	MR_sv(2) = MR_r1;
	MR_r5 = MR_sv(4);
	MR_sv(4) = MR_r2;
	MR_sv(5) = MR_ctfield(0, MR_r3, 1);
	MR_sv(6) = MR_ctfield(0, MR_ctfield(0, MR_tempr1, 7), 6);
	MR_sv(7) = MR_ctfield(0, MR_r5, 1);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__program_representation, goal_path);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(report, call_site_perf);
	MR_GOTO_LAB(f_118_97_114_95_117_115_101_95_97_110_97_108_121_115_105_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_105_99_95_118_97_114_115_95_102_105_114_115_116_95_117_115_101_95_95_104_111_49_95_95_91_50_93_95_48_5_0_i9);
	}
MR_def_label(f_118_97_114_95_117_115_101_95_97_110_97_108_121_115_105_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_105_99_95_118_97_114_115_95_102_105_114_115_116_95_117_115_101_95_95_104_111_49_95_95_91_50_93_95_48_5_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_tempr2 = MR_sv(4);
	MR_sv(4) = MR_r2;
	MR_sv(5) = MR_ctfield(0, MR_tempr1, 1);
	MR_sv(6) = MR_ctfield(0, MR_ctfield(1, MR_r3, 0), 6);
	MR_sv(7) = MR_ctfield(0, MR_tempr2, 1);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__program_representation, goal_path);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(report, call_site_perf);
	}
MR_def_label(f_118_97_114_95_117_115_101_95_97_110_97_108_121_115_105_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_105_99_95_118_97_114_115_95_102_105_114_115_116_95_117_115_101_95_95_104_111_49_95_95_91_50_93_95_48_5_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_sv(9) = MR_r2;
	MR_np_call_localret_ent(fn__map__init_0_0,
		f_118_97_114_95_117_115_101_95_97_110_97_108_121_115_105_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_105_99_95_118_97_114_115_95_102_105_114_115_116_95_117_115_101_95_95_104_111_49_95_95_91_50_93_95_48_5_0_i11);
MR_def_label(f_118_97_114_95_117_115_101_95_97_110_97_108_121_115_105_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_105_99_95_118_97_114_115_95_102_105_114_115_116_95_117_115_101_95_95_104_111_49_95_95_91_50_93_95_48_5_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_r2 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_CTOR_ADDR(tree234, tree234, 2);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(8);
	MR_tempr3 = MR_sv(9);
	MR_tfield(0, MR_tempr1, 2) = MR_tempr3;
	MR_tempr2 = MR_r1;
	MR_r1 = MR_tempr3;
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,2,4);
	MR_r4 = MR_sv(5);
	MR_r5 = MR_tempr2;
	}
	MR_np_call_localret_ent(list__foldl_4_0,
		f_118_97_114_95_117_115_101_95_97_110_97_108_121_115_105_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_105_99_95_118_97_114_115_95_102_105_114_115_116_95_117_115_101_95_95_104_111_49_95_95_91_50_93_95_48_5_0_i14);
MR_def_label(f_118_97_114_95_117_115_101_95_97_110_97_108_121_115_105_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_105_99_95_118_97_114_115_95_102_105_114_115_116_95_117_115_101_95_95_104_111_49_95_95_91_50_93_95_48_5_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 7);
	MR_r4 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(4,1);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(var_use_analysis__goal_var_first_use_wrapper_7_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 4;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(3);
	MR_tfield(0, MR_tempr1, 5) = MR_r1;
	MR_tfield(0, MR_tempr1, 6) = MR_sv(7);
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(var_use_analysis, var_use_type);
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(var_use_analysis, var_use_info);
	MR_r5 = MR_sv(2);
	MR_r6 = MR_sv(4);
	}
	MR_np_call_localret_ent(list__map_corresponding_4_0,
		f_118_97_114_95_117_115_101_95_97_110_97_108_121_115_105_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_105_99_95_118_97_114_115_95_102_105_114_115_116_95_117_115_101_95_95_104_111_49_95_95_91_50_93_95_48_5_0_i16);
MR_def_label(f_118_97_114_95_117_115_101_95_97_110_97_108_121_115_105_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_105_99_95_118_97_114_115_95_102_105_114_115_116_95_117_115_101_95_95_104_111_49_95_95_91_50_93_95_48_5_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(6);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_r1, 0) = MR_tempr1;
	}
MR_def_label(f_118_97_114_95_117_115_101_95_97_110_97_108_121_115_105_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_105_99_95_118_97_114_115_95_102_105_114_115_116_95_117_115_101_95_95_104_111_49_95_95_91_50_93_95_48_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(10);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

static void mercury__var_use_analysis_maybe_bunch_0(void)
{
	var_use_analysis_module0();
	var_use_analysis_module1();
	var_use_analysis_module2();
	var_use_analysis_module3();
	var_use_analysis_module4();
	var_use_analysis_module5();
	var_use_analysis_module6();
	var_use_analysis_module7();
	var_use_analysis_module8();
	var_use_analysis_module9();
	var_use_analysis_module10();
	var_use_analysis_module11();
	var_use_analysis_module12();
	var_use_analysis_module13();
	var_use_analysis_module14();
	var_use_analysis_module15();
	var_use_analysis_module16();
	var_use_analysis_module17();
	var_use_analysis_module18();
	var_use_analysis_module19();
	var_use_analysis_module20();
	var_use_analysis_module21();
	var_use_analysis_module22();
	var_use_analysis_module23();
	var_use_analysis_module24();
	var_use_analysis_module25();
	var_use_analysis_module26();
	var_use_analysis_module27();
	var_use_analysis_module28();
	var_use_analysis_module29();
	var_use_analysis_module30();
	var_use_analysis_module31();
	var_use_analysis_module32();
	var_use_analysis_module33();
	var_use_analysis_module34();
}

/* suppress gcc -Wmissing-decls warnings */
void mercury__var_use_analysis__init(void);
void mercury__var_use_analysis__init_type_tables(void);
void mercury__var_use_analysis__init_debugger(void);
#ifdef MR_DEEP_PROFILING
void mercury__var_use_analysis__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp);
#endif
#ifdef MR_RECORD_TERM_SIZES
void mercury__var_use_analysis__init_complexity_procs(void);
#endif

void mercury__var_use_analysis__init(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	mercury__var_use_analysis_maybe_bunch_0();
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_var_use_analysis__type_ctor_info_cost_until_var_use_0,
		var_use_analysis__cost_until_var_use_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_var_use_analysis__type_ctor_info_found_first_use_0,
		var_use_analysis__found_first_use_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_var_use_analysis__type_ctor_info_var_first_use_static_info_0,
		var_use_analysis__var_first_use_static_info_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_var_use_analysis__type_ctor_info_var_use_info_0,
		var_use_analysis__var_use_info_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_var_use_analysis__type_ctor_info_var_use_type_0,
		var_use_analysis__var_use_type_0_0);
	mercury__var_use_analysis__init_debugger();
}

void mercury__var_use_analysis__init_type_tables(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	{
		MR_register_type_ctor_info(
		&mercury_data_var_use_analysis__type_ctor_info_cost_until_var_use_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_var_use_analysis__type_ctor_info_found_first_use_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_var_use_analysis__type_ctor_info_var_first_use_static_info_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_var_use_analysis__type_ctor_info_var_use_info_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_var_use_analysis__type_ctor_info_var_use_type_0);
	}
}


void mercury__var_use_analysis__init_debugger(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}

#ifdef MR_DEEP_PROFILING

void mercury__var_use_analysis__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp)
{
	MR_write_out_module_proc_reps_start(procrep_fp, &mercury_data__module_common_layout__var_use_analysis);
	MR_write_out_module_proc_reps_end(procrep_fp);
}

#endif

#ifdef MR_RECORD_TERM_SIZES

void mercury__var_use_analysis__init_complexity_procs(void)
{
}

#endif

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;
