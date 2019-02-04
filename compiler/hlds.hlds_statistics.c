/*
** Automatically generated from `hlds_statistics.m'
** by the Mercury compiler,
** version rotd-2011-03-13, configured for x86_64-unknown-linux-gnu.
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
INIT mercury__hlds__hlds_statistics__init
ENDINIT
*/

#define MR_ALLOW_RESET
#include "mercury_imp.h"
#line 526 "../library/io.int"
#include "io.mh"

#line 28 "hlds.hlds_statistics.c"
#line 536 "../library/io.int"
#include "string.mh"

#line 32 "hlds.hlds_statistics.c"
#line 31 "../library/bitmap.int2"
#include "bitmap.mh"

#line 36 "hlds.hlds_statistics.c"
#line 30 "../library/time.int2"
#include "time.mh"

#line 40 "hlds.hlds_statistics.c"
#line 33 "../library/array.int2"
#include "array.mh"

#line 44 "hlds.hlds_statistics.c"
#line 39 "../mdbcomp/mdbcomp.rtti_access.int2"
#include "mdbcomp.rtti_access.mh"

#line 48 "hlds.hlds_statistics.c"
#line 49 "hlds.hlds_statistics.c"
#include "hlds.hlds_statistics.mh"

#line 52 "hlds.hlds_statistics.c"
#line 53 "hlds.hlds_statistics.c"
#ifndef HLDS__HLDS_STATISTICS_DECL_GUARD
#define HLDS__HLDS_STATISTICS_DECL_GUARD

#line 57 "hlds.hlds_statistics.c"
#line 58 "hlds.hlds_statistics.c"

#endif
#line 61 "hlds.hlds_statistics.c"

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
	MR_Word * f3[6];
};
MR_STATIC_LINKAGE const struct mercury_type_1 mercury_common_1[];

struct mercury_type_2 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[7];
};
MR_STATIC_LINKAGE const struct mercury_type_2 mercury_common_2[];

struct mercury_type_3 {
	MR_Word * f1[2];
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

struct mercury_type_6 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[5];
};
MR_STATIC_LINKAGE const struct mercury_type_6 mercury_common_6[];

struct mercury_type_7 {
	MR_Integer f1[25];
};
MR_STATIC_LINKAGE const struct mercury_type_7 mercury_common_7[];

extern const MR_TypeCtorInfo_Struct
	mercury_data_hlds__hlds_statistics__type_ctor_info_proc_stats_0;
MR_decl_label10(f_104_108_100_115_95_95_104_108_100_115_95_115_116_97_116_105_115_116_105_99_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_119_114_105_116_101_95_112_114_111_99_95_115_116_97_116_115_95_95_91_50_93_95_48_10_0, 2,3,4,5,6,7,8,9,10,11)
MR_decl_label10(f_104_108_100_115_95_95_104_108_100_115_95_115_116_97_116_105_115_116_105_99_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_119_114_105_116_101_95_112_114_111_99_95_115_116_97_116_115_95_95_91_50_93_95_48_10_0, 12,13,14,15,17,18,19,20,21,22)
MR_decl_label1(f_104_108_100_115_95_95_104_108_100_115_95_115_116_97_116_105_115_116_105_99_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_119_114_105_116_101_95_112_114_111_99_95_115_116_97_116_115_95_95_91_50_93_95_48_10_0, 23)
MR_decl_label6(f_104_108_100_115_95_95_104_108_100_115_95_115_116_97_116_105_115_116_105_99_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_112_114_111_99_95_115_116_97_116_95_99_111_109_112_111_110_101_110_116_95_95_91_50_44_32_51_44_32_52_44_32_53_93_95_48_9_0, 3,4,5,6,7,18)
MR_decl_label10(f_104_108_100_115_95_95_104_108_100_115_95_115_116_97_116_105_115_116_105_99_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_112_114_111_99_95_115_116_97_116_95_99_111_109_112_111_110_101_110_116_115_95_95_91_50_44_32_51_44_32_52_44_32_53_93_95_48_8_0, 2,3,4,5,6,7,8,9,10,11)
MR_decl_label10(f_104_108_100_115_95_95_104_108_100_115_95_115_116_97_116_105_115_116_105_99_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_112_114_111_99_95_115_116_97_116_95_99_111_109_112_111_110_101_110_116_115_95_95_91_50_44_32_51_44_32_52_44_32_53_93_95_48_8_0, 12,13,14,15,16,17,18,19,20,21)
MR_decl_label5(f_104_108_100_115_95_95_104_108_100_115_95_115_116_97_116_105_115_116_105_99_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_112_114_111_99_95_115_116_97_116_95_99_111_109_112_111_110_101_110_116_115_95_95_91_50_44_32_51_44_32_52_44_32_53_93_95_48_8_0, 22,23,24,25,26)
MR_decl_label6(f_104_108_100_115_95_95_104_108_100_115_95_115_116_97_116_105_115_116_105_99_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_112_114_111_99_95_115_116_97_116_115_95_102_111_114_95_112_114_111_99_95_95_91_50_93_95_48_7_0, 3,4,5,7,8,9)
MR_decl_label3(hlds__hlds_statistics__accumulate_proc_stats_in_disj_5_0, 11,3,5)
MR_decl_label10(hlds__hlds_statistics__accumulate_proc_stats_in_goal_5_0, 237,5,7,10,9,12,14,3,18,16)
MR_decl_label10(hlds__hlds_statistics__accumulate_proc_stats_in_goal_5_0, 24,25,22,29,30,27,34,35,32,39)
MR_decl_label10(hlds__hlds_statistics__accumulate_proc_stats_in_goal_5_0, 41,45,46,44,49,37,52,53,20,58)
MR_decl_label10(hlds__hlds_statistics__accumulate_proc_stats_in_goal_5_0, 60,61,62,55,66,64,71,76,77,74)
MR_decl_label8(hlds__hlds_statistics__accumulate_proc_stats_in_goal_5_0, 79,82,89,87,96,94,85,101)
MR_decl_label3(hlds__hlds_statistics__accumulate_proc_stats_in_parallel_conj_5_0, 11,3,5)
MR_decl_label3(hlds__hlds_statistics__accumulate_proc_stats_in_plain_conj_5_0, 11,3,5)
MR_decl_label3(hlds__hlds_statistics__accumulate_proc_stats_in_switch_5_0, 11,3,5)
MR_decl_label7(hlds__hlds_statistics__write_proc_stats_for_module_5_0, 2,3,4,5,6,7,8)
MR_decl_label6(hlds__hlds_statistics__write_proc_stats_for_pred_6_0, 7,9,18,2,11,12)
MR_decl_label2(__Unify___hlds__hlds_statistics__proc_stats_0_0, 4,1)
MR_decl_label10(__Compare___hlds__hlds_statistics__proc_stats_0_0, 3,2,5,9,13,17,21,25,29,33)
MR_decl_label10(__Compare___hlds__hlds_statistics__proc_stats_0_0, 37,41,45,49,53,57,61,65,69,73)
MR_decl_label7(__Compare___hlds__hlds_statistics__proc_stats_0_0, 77,81,85,89,93,97,205)
MR_def_extern_entry(hlds__hlds_statistics__write_proc_stats_for_module_5_0)
MR_decl_static(hlds__hlds_statistics__write_proc_stats_for_pred_6_0)
MR_decl_static(hlds__hlds_statistics__accumulate_proc_stats_in_goal_5_0)
MR_decl_static(hlds__hlds_statistics__accumulate_proc_stats_in_plain_conj_5_0)
MR_decl_static(hlds__hlds_statistics__accumulate_proc_stats_in_parallel_conj_5_0)
MR_decl_static(hlds__hlds_statistics__accumulate_proc_stats_in_disj_5_0)
MR_decl_static(hlds__hlds_statistics__accumulate_proc_stats_in_switch_5_0)
MR_decl_static(hlds__hlds_statistics__write_proc_stats_for_proc_7_0)
MR_decl_static(__Unify___hlds__hlds_statistics__proc_stats_0_0)
MR_decl_static(__Compare___hlds__hlds_statistics__proc_stats_0_0)
MR_decl_static(f_104_108_100_115_95_95_104_108_100_115_95_115_116_97_116_105_115_116_105_99_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_112_114_111_99_95_115_116_97_116_115_95_102_111_114_95_112_114_111_99_95_95_91_50_93_95_48_7_0)
MR_decl_static(f_104_108_100_115_95_95_104_108_100_115_95_115_116_97_116_105_115_116_105_99_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_112_114_111_99_95_115_116_97_116_95_99_111_109_112_111_110_101_110_116_115_95_95_91_50_44_32_51_44_32_52_44_32_53_93_95_48_8_0)
MR_decl_static(f_104_108_100_115_95_95_104_108_100_115_95_115_116_97_116_105_115_116_105_99_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_119_114_105_116_101_95_112_114_111_99_95_115_116_97_116_115_95_95_91_50_93_95_48_10_0)
MR_decl_static(f_104_108_100_115_95_95_104_108_100_115_95_115_116_97_116_105_115_116_105_99_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_112_114_111_99_95_115_116_97_116_95_99_111_109_112_111_110_101_110_116_95_95_91_50_44_32_51_44_32_52_44_32_53_93_95_48_9_0)

extern const MR_TypeCtorInfo_Struct mercury_data_pair__type_ctor_info_pair_2;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_pred_info_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_pred_id_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_pred_info_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_proc_info_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_proc_id_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_proc_info_0;
static const struct mercury_type_0 mercury_common_0[4] =
{
{
{
MR_CTOR_ADDR(pair, pair, 2),
MR_INT_CTOR_ADDR,
MR_CTOR0_ADDR(hlds__hlds_pred, pred_info)
}
},
{
{
MR_CTOR_ADDR(pair, pair, 2),
MR_CTOR0_ADDR(hlds__hlds_pred, pred_id),
MR_CTOR0_ADDR(hlds__hlds_pred, pred_info)
}
},
{
{
MR_CTOR_ADDR(pair, pair, 2),
MR_INT_CTOR_ADDR,
MR_CTOR0_ADDR(hlds__hlds_pred, proc_info)
}
},
{
{
MR_CTOR_ADDR(pair, pair, 2),
MR_CTOR0_ADDR(hlds__hlds_pred, proc_id),
MR_CTOR0_ADDR(hlds__hlds_pred, proc_info)
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__hlds__hlds_statistics__write_proc_stats_for_module_5_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_io__type_ctor_info_output_stream_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_string_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_module__type_ctor_info_module_info_0;
extern const MR_TypeCtorInfo_Struct mercury_data_io__type_ctor_info_state_0;
static const struct mercury_type_1 mercury_common_1[1] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__hlds__hlds_statistics__write_proc_stats_for_module_5_0_1,
(MR_Word *) (MR_Integer) 0
},
6,
{
MR_CTOR0_ADDR(io, output_stream),
MR_STRING_CTOR_ADDR,
MR_CTOR0_ADDR(hlds__hlds_module, module_info),
MR_COMMON(0,0),
MR_IO_CTOR_ADDR,
MR_IO_CTOR_ADDR
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__hlds__hlds_statistics__write_proc_stats_for_pred_6_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;
static const struct mercury_type_2 mercury_common_2[1] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__hlds__hlds_statistics__write_proc_stats_for_pred_6_0_1,
(MR_Word *) (MR_Integer) 0
},
7,
{
MR_CTOR0_ADDR(io, output_stream),
MR_STRING_CTOR_ADDR,
MR_CTOR0_ADDR(hlds__hlds_module, module_info),
MR_INT_CTOR_ADDR,
MR_COMMON(0,2),
MR_IO_CTOR_ADDR,
MR_IO_CTOR_ADDR
}
},
};

extern const MR_TypeCtorInfo_Struct mercury_data_term__type_ctor_info_var_1;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_prog_var_type_0;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_prog_var_type_0;
extern const MR_TypeCtorInfo_Struct mercury_data_set_tree234__type_ctor_info_set_tree234_1;
extern const MR_TypeCtorInfo_Struct mercury_data_term__type_ctor_info_var_1;
static const struct mercury_type_3 mercury_common_3[5] =
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
MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type)
}
},
{
{
MR_CTOR1_ADDR(set_tree234, set_tree234),
MR_TAG_COMMON(0,3,0)
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
MR_CTOR1_ADDR(set_tree234, set_tree234),
MR_COMMON(3,3)
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__hlds__hlds_statistics__accumulate_proc_stats_in_goal_5_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_goal__type_ctor_info_foreign_arg_0;
static const MR_UserClosureId
mercury_data__closure_layout__hlds__hlds_statistics__accumulate_proc_stats_in_goal_5_0_2;
static const struct mercury_type_4 mercury_common_4[2] =
{
{
(MR_Word *) &mercury_data__closure_layout__hlds__hlds_statistics__accumulate_proc_stats_in_goal_5_0_1,
(MR_Word *) (MR_Integer) 0,
2,
MR_CTOR0_ADDR(hlds__hlds_goal, foreign_arg),
MR_COMMON(3,1)
},
{
(MR_Word *) &mercury_data__closure_layout__hlds__hlds_statistics__accumulate_proc_stats_in_goal_5_0_2,
(MR_Word *) (MR_Integer) 0,
2,
MR_CTOR0_ADDR(hlds__hlds_goal, foreign_arg),
MR_COMMON(3,1)
},
};

MR_decl_entry(fn__hlds__hlds_goal__foreign_arg_var_1_0);
static const struct mercury_type_5 mercury_common_5[3] =
{
{
MR_COMMON(4,0),
MR_ENTRY_AP(fn__hlds__hlds_goal__foreign_arg_var_1_0),
0
},
{
MR_COMMON(4,1),
MR_ENTRY_AP(fn__hlds__hlds_goal__foreign_arg_var_1_0),
0
},
{
MR_COMMON(6,0),
MR_ENTRY_AP(hlds__hlds_statistics__accumulate_proc_stats_in_goal_5_0),
0
},
};

static const MR_UserClosureId
mercury_data__closure_layout__hlds__hlds_statistics__accumulate_proc_stats_in_goal_5_0_3;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_goal__type_ctor_info_hlds_goal_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_statistics__type_ctor_info_proc_stats_0;
static const struct mercury_type_6 mercury_common_6[1] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__hlds__hlds_statistics__accumulate_proc_stats_in_goal_5_0_3,
(MR_Word *) (MR_Integer) 0
},
5,
{
MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal),
MR_COMMON(3,4),
MR_COMMON(3,4),
MR_CTOR0_ADDR(hlds__hlds_statistics, proc_stats),
MR_CTOR0_ADDR(hlds__hlds_statistics, proc_stats)
}
},
};

static const struct mercury_type_7 mercury_common_7[1] =
{
{
{
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0
}
},
};

const MR_PseudoTypeInfo mercury_data_hlds__hlds_statistics__field_types_proc_stats_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0
};

const MR_ConstString mercury_data_hlds__hlds_statistics__field_names_proc_stats_0_0[] = {
	"ps_unify_constructs",
	"ps_unify_deconstructs",
	"ps_unify_assigns",
	"ps_unify_tests",
	"ps_unify_complicateds",
	"ps_plain_calls",
	"ps_foreign_calls",
	"ps_ho_calls",
	"ps_method_calls",
	"ps_event_calls",
	"ps_casts",
	"ps_plain_conjs",
	"ps_plain_conjuncts",
	"ps_parallel_conjs",
	"ps_parallel_conjuncts",
	"ps_disjs",
	"ps_disjuncts",
	"ps_switches",
	"ps_switch_arms",
	"ps_ites",
	"ps_negations",
	"ps_scopes",
	"ps_bi_implications",
	"ps_atomic_goals",
	"ps_try_goals"
};

static const MR_DuFunctorDesc mercury_data_hlds__hlds_statistics__du_functor_desc_proc_stats_0_0 = {
	"proc_stats",
	25,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_hlds__hlds_statistics__field_types_proc_stats_0_0,
	mercury_data_hlds__hlds_statistics__field_names_proc_stats_0_0,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_hlds__hlds_statistics__du_stag_ordered_proc_stats_0_0[] = {
	&mercury_data_hlds__hlds_statistics__du_functor_desc_proc_stats_0_0

};

const MR_DuPtagLayout mercury_data_hlds__hlds_statistics__du_ptag_ordered_proc_stats_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_hlds__hlds_statistics__du_stag_ordered_proc_stats_0_0 }

};

const MR_DuFunctorDescPtr mercury_data_hlds__hlds_statistics__du_name_ordered_proc_stats_0[] = {
	&mercury_data_hlds__hlds_statistics__du_functor_desc_proc_stats_0_0
};

const MR_Integer mercury_data_hlds__hlds_statistics__functor_number_map_proc_stats_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_statistics__type_ctor_info_proc_stats_0 = {
	0,
	13,
	1,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___hlds__hlds_statistics__proc_stats_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___hlds__hlds_statistics__proc_stats_0_0)),
	"hlds.hlds_statistics",
	"proc_stats",
	{ (void *)mercury_data_hlds__hlds_statistics__du_name_ordered_proc_stats_0 },
	{ (void *)mercury_data_hlds__hlds_statistics__du_ptag_ordered_proc_stats_0 },
	1,
	4,
	mercury_data_hlds__hlds_statistics__functor_number_map_proc_stats_0
};


static const MR_UserClosureId
mercury_data__closure_layout__hlds__hlds_statistics__accumulate_proc_stats_in_goal_5_0_3 = {
{
MR_PREDICATE,
"hlds.hlds_statistics",
"hlds.hlds_statistics",
"accumulate_proc_stats_in_goal",
5,
0
},
"hlds.hlds_statistics",
"hlds_statistics.m",
228,
"195"
};

static const MR_UserClosureId
mercury_data__closure_layout__hlds__hlds_statistics__accumulate_proc_stats_in_goal_5_0_2 = {
{
MR_FUNCTION,
"hlds.hlds_goal",
"hlds.hlds_goal",
"foreign_arg_var",
2,
0
},
"hlds.hlds_statistics",
"hlds_statistics.m",
161,
"83"
};

static const MR_UserClosureId
mercury_data__closure_layout__hlds__hlds_statistics__accumulate_proc_stats_in_goal_5_0_1 = {
{
MR_FUNCTION,
"hlds.hlds_goal",
"hlds.hlds_goal",
"foreign_arg_var",
2,
0
},
"hlds.hlds_statistics",
"hlds_statistics.m",
160,
"81"
};

static const MR_UserClosureId
mercury_data__closure_layout__hlds__hlds_statistics__write_proc_stats_for_pred_6_0_1 = {
{
MR_PREDICATE,
"hlds.hlds_statistics",
"hlds.hlds_statistics",
"write_proc_stats_for_proc",
7,
0
},
"hlds.hlds_statistics",
"hlds_statistics.m",
76,
"16"
};

static const MR_UserClosureId
mercury_data__closure_layout__hlds__hlds_statistics__write_proc_stats_for_module_5_0_1 = {
{
MR_PREDICATE,
"hlds.hlds_statistics",
"hlds.hlds_statistics",
"write_proc_stats_for_pred",
6,
0
},
"hlds.hlds_statistics",
"hlds_statistics.m",
60,
"12"
};


MR_decl_entry(hlds__hlds_module__module_info_get_name_2_0);
MR_decl_entry(fn__mdbcomp__prim_data__sym_name_to_string_1_0);
MR_decl_entry(fn__f_115_116_114_105_110_103_95_95_43_43_2_0);
MR_decl_entry(io__write_string_4_0);
MR_decl_entry(hlds__hlds_module__module_info_get_preds_2_0);
MR_decl_entry(map__to_assoc_list_2_0);
extern const MR_TypeCtorInfo_Struct mercury_data_io__type_ctor_info_state_0;
MR_decl_entry(list__foldl_4_2);

MR_BEGIN_MODULE(hlds__hlds_statistics_module0)
	MR_init_entry1(hlds__hlds_statistics__write_proc_stats_for_module_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__hlds_statistics__write_proc_stats_for_module_5_0);
	MR_init_label7(hlds__hlds_statistics__write_proc_stats_for_module_5_0,2,3,4,5,6,7,8)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'write_proc_stats_for_module'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__hlds__hlds_statistics__write_proc_stats_for_module_5_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(3) = MR_tempr1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_name_2_0,
		hlds__hlds_statistics__write_proc_stats_for_module_5_0_i2);
MR_def_label(hlds__hlds_statistics__write_proc_stats_for_module_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__mdbcomp__prim_data__sym_name_to_string_1_0,
		hlds__hlds_statistics__write_proc_stats_for_module_5_0_i3);
MR_def_label(hlds__hlds_statistics__write_proc_stats_for_module_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("\n", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		hlds__hlds_statistics__write_proc_stats_for_module_5_0_i4);
MR_def_label(hlds__hlds_statistics__write_proc_stats_for_module_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("MODULE ", 7);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		hlds__hlds_statistics__write_proc_stats_for_module_5_0_i5);
MR_def_label(hlds__hlds_statistics__write_proc_stats_for_module_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(io__write_string_4_0,
		hlds__hlds_statistics__write_proc_stats_for_module_5_0_i6);
MR_def_label(hlds__hlds_statistics__write_proc_stats_for_module_5_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_preds_2_0,
		hlds__hlds_statistics__write_proc_stats_for_module_5_0_i7);
MR_def_label(hlds__hlds_statistics__write_proc_stats_for_module_5_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_id);
	MR_sv(5) = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_info);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(map__to_assoc_list_2_0,
		hlds__hlds_statistics__write_proc_stats_for_module_5_0_i8);
MR_def_label(hlds__hlds_statistics__write_proc_stats_for_module_5_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 6);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(1,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(hlds__hlds_statistics__write_proc_stats_for_pred_6_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 3;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 5) = MR_sv(3);
	MR_tempr2 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,1);
	MR_r2 = (MR_Word) MR_IO_CTOR_ADDR;
	MR_r4 = MR_tempr2;
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(list__foldl_4_2);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__hlds_pred__pred_info_is_imported_1_0);
MR_decl_entry(hlds__hlds_pred__is_unify_or_compare_pred_1_0);
MR_decl_entry(hlds__hlds_pred__pred_info_get_procedures_2_0);

MR_BEGIN_MODULE(hlds__hlds_statistics_module1)
	MR_init_entry1(hlds__hlds_statistics__write_proc_stats_for_pred_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__hlds_statistics__write_proc_stats_for_pred_6_0);
	MR_init_label6(hlds__hlds_statistics__write_proc_stats_for_pred_6_0,7,9,18,2,11,12)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'write_proc_stats_for_pred'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__hlds_statistics__write_proc_stats_for_pred_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r4;
	MR_tempr1 = MR_tfield(0, MR_tempr2, 1);
	MR_sv(4) = MR_tfield(0, MR_tempr2, 0);
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(5) = MR_tempr1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_is_imported_1_0,
		hlds__hlds_statistics__write_proc_stats_for_pred_6_0_i7);
MR_def_label(hlds__hlds_statistics__write_proc_stats_for_pred_6_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(hlds__hlds_statistics__write_proc_stats_for_pred_6_0_i18);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(3);
	MR_tempr2 = MR_sv(5);
	MR_r1 = MR_tempr2;
	}
	MR_np_call_localret_ent(hlds__hlds_pred__is_unify_or_compare_pred_1_0,
		hlds__hlds_statistics__write_proc_stats_for_pred_6_0_i9);
MR_def_label(hlds__hlds_statistics__write_proc_stats_for_pred_6_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(hlds__hlds_statistics__write_proc_stats_for_pred_6_0_i2);
	}
MR_def_label(hlds__hlds_statistics__write_proc_stats_for_pred_6_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(7);
MR_def_label(hlds__hlds_statistics__write_proc_stats_for_pred_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(3);
	MR_tempr2 = MR_sv(5);
	MR_r1 = MR_tempr2;
	}
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_procedures_2_0,
		hlds__hlds_statistics__write_proc_stats_for_pred_6_0_i11);
MR_def_label(hlds__hlds_statistics__write_proc_stats_for_pred_6_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, proc_id);
	MR_sv(6) = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, proc_info);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(map__to_assoc_list_2_0,
		hlds__hlds_statistics__write_proc_stats_for_pred_6_0_i12);
MR_def_label(hlds__hlds_statistics__write_proc_stats_for_pred_6_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 7);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(2,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(hlds__hlds_statistics__write_proc_stats_for_proc_7_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 4;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 5) = MR_sv(3);
	MR_tfield(0, MR_tempr1, 6) = MR_sv(4);
	MR_tempr2 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,3);
	MR_r2 = (MR_Word) MR_IO_CTOR_ADDR;
	MR_r4 = MR_tempr2;
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(list__foldl_4_2);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(set_tree234__insert_list_3_0);
MR_decl_entry(set_tree234__insert_3_0);
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_goal__type_ctor_info_foreign_arg_0;
MR_decl_entry(fn__list__map_2_0);
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_goal__type_ctor_info_hlds_goal_0;
MR_decl_entry(list__foldl2_6_0);

MR_BEGIN_MODULE(hlds__hlds_statistics_module2)
	MR_init_entry1(hlds__hlds_statistics__accumulate_proc_stats_in_goal_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__hlds_statistics__accumulate_proc_stats_in_goal_5_0);
	MR_init_label10(hlds__hlds_statistics__accumulate_proc_stats_in_goal_5_0,237,5,7,10,9,12,14,3,18,16)
	MR_init_label10(hlds__hlds_statistics__accumulate_proc_stats_in_goal_5_0,24,25,22,29,30,27,34,35,32,39)
	MR_init_label10(hlds__hlds_statistics__accumulate_proc_stats_in_goal_5_0,41,45,46,44,49,37,52,53,20,58)
	MR_init_label10(hlds__hlds_statistics__accumulate_proc_stats_in_goal_5_0,60,61,62,55,66,64,71,76,77,74)
	MR_init_label8(hlds__hlds_statistics__accumulate_proc_stats_in_goal_5_0,79,82,89,87,96,94,85,101)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'accumulate_proc_stats_in_goal'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__hlds_statistics__accumulate_proc_stats_in_goal_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
MR_def_label(hlds__hlds_statistics__accumulate_proc_stats_in_goal_5_0,237)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(0, MR_r1, 0);
	MR_r5 = MR_tempr1;
	if (MR_PTAG_TESTR(MR_tempr1,2)) {
		MR_GOTO_LAB(hlds__hlds_statistics__accumulate_proc_stats_in_goal_5_0_i3);
	}
	MR_sv(1) = MR_tfield(2, MR_tempr1, 0);
	MR_sv(3) = MR_r3;
	MR_sv(2) = (MR_Word) MR_TAG_COMMON(0,3,0);
	MR_r1 = MR_sv(2);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tfield(2, MR_tempr1, 1);
	MR_r3 = MR_tempr2;
	}
	MR_np_call_localret_ent(set_tree234__insert_list_3_0,
		hlds__hlds_statistics__accumulate_proc_stats_in_goal_5_0_i5);
MR_def_label(hlds__hlds_statistics__accumulate_proc_stats_in_goal_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),3)) {
		MR_GOTO_LAB(hlds__hlds_statistics__accumulate_proc_stats_in_goal_5_0_i7);
	}
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 25);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_tfield(0, MR_r2, 0) = MR_tfield(0, MR_tempr1, 0);
	MR_tfield(0, MR_r2, 1) = MR_tfield(0, MR_tempr1, 1);
	MR_tfield(0, MR_r2, 2) = MR_tfield(0, MR_tempr1, 2);
	MR_tfield(0, MR_r2, 3) = MR_tfield(0, MR_tempr1, 3);
	MR_tfield(0, MR_r2, 4) = MR_tfield(0, MR_tempr1, 4);
	MR_tfield(0, MR_r2, 5) = MR_tfield(0, MR_tempr1, 5);
	MR_tfield(0, MR_r2, 6) = MR_tfield(0, MR_tempr1, 6);
	MR_tfield(0, MR_r2, 7) = MR_tfield(0, MR_tempr1, 7);
	MR_tfield(0, MR_r2, 8) = MR_tfield(0, MR_tempr1, 8);
	MR_tfield(0, MR_r2, 9) = MR_tfield(0, MR_tempr1, 9);
	MR_tfield(0, MR_r2, 10) = ((MR_Integer) MR_tfield(0, MR_tempr1, 10) + (MR_Integer) 1);
	MR_tfield(0, MR_r2, 11) = MR_tfield(0, MR_tempr1, 11);
	MR_tfield(0, MR_r2, 12) = MR_tfield(0, MR_tempr1, 12);
	MR_tfield(0, MR_r2, 13) = MR_tfield(0, MR_tempr1, 13);
	MR_tfield(0, MR_r2, 14) = MR_tfield(0, MR_tempr1, 14);
	MR_tfield(0, MR_r2, 15) = MR_tfield(0, MR_tempr1, 15);
	MR_tfield(0, MR_r2, 16) = MR_tfield(0, MR_tempr1, 16);
	MR_tfield(0, MR_r2, 17) = MR_tfield(0, MR_tempr1, 17);
	MR_tfield(0, MR_r2, 18) = MR_tfield(0, MR_tempr1, 18);
	MR_tfield(0, MR_r2, 19) = MR_tfield(0, MR_tempr1, 19);
	MR_tfield(0, MR_r2, 20) = MR_tfield(0, MR_tempr1, 20);
	MR_tfield(0, MR_r2, 21) = MR_tfield(0, MR_tempr1, 21);
	MR_tfield(0, MR_r2, 22) = MR_tfield(0, MR_tempr1, 22);
	MR_tfield(0, MR_r2, 23) = MR_tfield(0, MR_tempr1, 23);
	MR_tfield(0, MR_r2, 24) = MR_tfield(0, MR_tempr1, 24);
	MR_decr_sp_and_return(5);
	}
MR_def_label(hlds__hlds_statistics__accumulate_proc_stats_in_goal_5_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),1)) {
		MR_GOTO_LAB(hlds__hlds_statistics__accumulate_proc_stats_in_goal_5_0_i9);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tfield(1, MR_sv(1), 0);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(set_tree234__insert_3_0,
		hlds__hlds_statistics__accumulate_proc_stats_in_goal_5_0_i10);
MR_def_label(hlds__hlds_statistics__accumulate_proc_stats_in_goal_5_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 25);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_tfield(0, MR_r2, 0) = MR_tfield(0, MR_tempr1, 0);
	MR_tfield(0, MR_r2, 1) = MR_tfield(0, MR_tempr1, 1);
	MR_tfield(0, MR_r2, 2) = MR_tfield(0, MR_tempr1, 2);
	MR_tfield(0, MR_r2, 3) = MR_tfield(0, MR_tempr1, 3);
	MR_tfield(0, MR_r2, 4) = MR_tfield(0, MR_tempr1, 4);
	MR_tfield(0, MR_r2, 5) = MR_tfield(0, MR_tempr1, 5);
	MR_tfield(0, MR_r2, 6) = MR_tfield(0, MR_tempr1, 6);
	MR_tfield(0, MR_r2, 7) = MR_tfield(0, MR_tempr1, 7);
	MR_tfield(0, MR_r2, 8) = ((MR_Integer) MR_tfield(0, MR_tempr1, 8) + (MR_Integer) 1);
	MR_tfield(0, MR_r2, 9) = MR_tfield(0, MR_tempr1, 9);
	MR_tfield(0, MR_r2, 10) = MR_tfield(0, MR_tempr1, 10);
	MR_tfield(0, MR_r2, 11) = MR_tfield(0, MR_tempr1, 11);
	MR_tfield(0, MR_r2, 12) = MR_tfield(0, MR_tempr1, 12);
	MR_tfield(0, MR_r2, 13) = MR_tfield(0, MR_tempr1, 13);
	MR_tfield(0, MR_r2, 14) = MR_tfield(0, MR_tempr1, 14);
	MR_tfield(0, MR_r2, 15) = MR_tfield(0, MR_tempr1, 15);
	MR_tfield(0, MR_r2, 16) = MR_tfield(0, MR_tempr1, 16);
	MR_tfield(0, MR_r2, 17) = MR_tfield(0, MR_tempr1, 17);
	MR_tfield(0, MR_r2, 18) = MR_tfield(0, MR_tempr1, 18);
	MR_tfield(0, MR_r2, 19) = MR_tfield(0, MR_tempr1, 19);
	MR_tfield(0, MR_r2, 20) = MR_tfield(0, MR_tempr1, 20);
	MR_tfield(0, MR_r2, 21) = MR_tfield(0, MR_tempr1, 21);
	MR_tfield(0, MR_r2, 22) = MR_tfield(0, MR_tempr1, 22);
	MR_tfield(0, MR_r2, 23) = MR_tfield(0, MR_tempr1, 23);
	MR_tfield(0, MR_r2, 24) = MR_tfield(0, MR_tempr1, 24);
	MR_decr_sp_and_return(5);
	}
MR_def_label(hlds__hlds_statistics__accumulate_proc_stats_in_goal_5_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),2)) {
		MR_GOTO_LAB(hlds__hlds_statistics__accumulate_proc_stats_in_goal_5_0_i12);
	}
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 25);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_tfield(0, MR_r2, 0) = MR_tfield(0, MR_tempr1, 0);
	MR_tfield(0, MR_r2, 1) = MR_tfield(0, MR_tempr1, 1);
	MR_tfield(0, MR_r2, 2) = MR_tfield(0, MR_tempr1, 2);
	MR_tfield(0, MR_r2, 3) = MR_tfield(0, MR_tempr1, 3);
	MR_tfield(0, MR_r2, 4) = MR_tfield(0, MR_tempr1, 4);
	MR_tfield(0, MR_r2, 5) = MR_tfield(0, MR_tempr1, 5);
	MR_tfield(0, MR_r2, 6) = MR_tfield(0, MR_tempr1, 6);
	MR_tfield(0, MR_r2, 7) = MR_tfield(0, MR_tempr1, 7);
	MR_tfield(0, MR_r2, 8) = MR_tfield(0, MR_tempr1, 8);
	MR_tfield(0, MR_r2, 9) = ((MR_Integer) MR_tfield(0, MR_tempr1, 9) + (MR_Integer) 1);
	MR_tfield(0, MR_r2, 10) = MR_tfield(0, MR_tempr1, 10);
	MR_tfield(0, MR_r2, 11) = MR_tfield(0, MR_tempr1, 11);
	MR_tfield(0, MR_r2, 12) = MR_tfield(0, MR_tempr1, 12);
	MR_tfield(0, MR_r2, 13) = MR_tfield(0, MR_tempr1, 13);
	MR_tfield(0, MR_r2, 14) = MR_tfield(0, MR_tempr1, 14);
	MR_tfield(0, MR_r2, 15) = MR_tfield(0, MR_tempr1, 15);
	MR_tfield(0, MR_r2, 16) = MR_tfield(0, MR_tempr1, 16);
	MR_tfield(0, MR_r2, 17) = MR_tfield(0, MR_tempr1, 17);
	MR_tfield(0, MR_r2, 18) = MR_tfield(0, MR_tempr1, 18);
	MR_tfield(0, MR_r2, 19) = MR_tfield(0, MR_tempr1, 19);
	MR_tfield(0, MR_r2, 20) = MR_tfield(0, MR_tempr1, 20);
	MR_tfield(0, MR_r2, 21) = MR_tfield(0, MR_tempr1, 21);
	MR_tfield(0, MR_r2, 22) = MR_tfield(0, MR_tempr1, 22);
	MR_tfield(0, MR_r2, 23) = MR_tfield(0, MR_tempr1, 23);
	MR_tfield(0, MR_r2, 24) = MR_tfield(0, MR_tempr1, 24);
	MR_decr_sp_and_return(5);
	}
MR_def_label(hlds__hlds_statistics__accumulate_proc_stats_in_goal_5_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tfield(0, MR_sv(1), 0);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(set_tree234__insert_3_0,
		hlds__hlds_statistics__accumulate_proc_stats_in_goal_5_0_i14);
MR_def_label(hlds__hlds_statistics__accumulate_proc_stats_in_goal_5_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 25);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_tfield(0, MR_r2, 0) = MR_tfield(0, MR_tempr1, 0);
	MR_tfield(0, MR_r2, 1) = MR_tfield(0, MR_tempr1, 1);
	MR_tfield(0, MR_r2, 2) = MR_tfield(0, MR_tempr1, 2);
	MR_tfield(0, MR_r2, 3) = MR_tfield(0, MR_tempr1, 3);
	MR_tfield(0, MR_r2, 4) = MR_tfield(0, MR_tempr1, 4);
	MR_tfield(0, MR_r2, 5) = MR_tfield(0, MR_tempr1, 5);
	MR_tfield(0, MR_r2, 6) = MR_tfield(0, MR_tempr1, 6);
	MR_tfield(0, MR_r2, 7) = ((MR_Integer) MR_tfield(0, MR_tempr1, 7) + (MR_Integer) 1);
	MR_tfield(0, MR_r2, 8) = MR_tfield(0, MR_tempr1, 8);
	MR_tfield(0, MR_r2, 9) = MR_tfield(0, MR_tempr1, 9);
	MR_tfield(0, MR_r2, 10) = MR_tfield(0, MR_tempr1, 10);
	MR_tfield(0, MR_r2, 11) = MR_tfield(0, MR_tempr1, 11);
	MR_tfield(0, MR_r2, 12) = MR_tfield(0, MR_tempr1, 12);
	MR_tfield(0, MR_r2, 13) = MR_tfield(0, MR_tempr1, 13);
	MR_tfield(0, MR_r2, 14) = MR_tfield(0, MR_tempr1, 14);
	MR_tfield(0, MR_r2, 15) = MR_tfield(0, MR_tempr1, 15);
	MR_tfield(0, MR_r2, 16) = MR_tfield(0, MR_tempr1, 16);
	MR_tfield(0, MR_r2, 17) = MR_tfield(0, MR_tempr1, 17);
	MR_tfield(0, MR_r2, 18) = MR_tfield(0, MR_tempr1, 18);
	MR_tfield(0, MR_r2, 19) = MR_tfield(0, MR_tempr1, 19);
	MR_tfield(0, MR_r2, 20) = MR_tfield(0, MR_tempr1, 20);
	MR_tfield(0, MR_r2, 21) = MR_tfield(0, MR_tempr1, 21);
	MR_tfield(0, MR_r2, 22) = MR_tfield(0, MR_tempr1, 22);
	MR_tfield(0, MR_r2, 23) = MR_tfield(0, MR_tempr1, 23);
	MR_tfield(0, MR_r2, 24) = MR_tfield(0, MR_tempr1, 24);
	MR_decr_sp_and_return(5);
	}
MR_def_label(hlds__hlds_statistics__accumulate_proc_stats_in_goal_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r5,1)) {
		MR_GOTO_LAB(hlds__hlds_statistics__accumulate_proc_stats_in_goal_5_0_i16);
	}
	MR_sv(3) = MR_r3;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,3,0);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_tfield(1, MR_r5, 2);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(set_tree234__insert_list_3_0,
		hlds__hlds_statistics__accumulate_proc_stats_in_goal_5_0_i18);
MR_def_label(hlds__hlds_statistics__accumulate_proc_stats_in_goal_5_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 25);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_tfield(0, MR_r2, 0) = MR_tfield(0, MR_tempr1, 0);
	MR_tfield(0, MR_r2, 1) = MR_tfield(0, MR_tempr1, 1);
	MR_tfield(0, MR_r2, 2) = MR_tfield(0, MR_tempr1, 2);
	MR_tfield(0, MR_r2, 3) = MR_tfield(0, MR_tempr1, 3);
	MR_tfield(0, MR_r2, 4) = MR_tfield(0, MR_tempr1, 4);
	MR_tfield(0, MR_r2, 5) = ((MR_Integer) MR_tfield(0, MR_tempr1, 5) + (MR_Integer) 1);
	MR_tfield(0, MR_r2, 6) = MR_tfield(0, MR_tempr1, 6);
	MR_tfield(0, MR_r2, 7) = MR_tfield(0, MR_tempr1, 7);
	MR_tfield(0, MR_r2, 8) = MR_tfield(0, MR_tempr1, 8);
	MR_tfield(0, MR_r2, 9) = MR_tfield(0, MR_tempr1, 9);
	MR_tfield(0, MR_r2, 10) = MR_tfield(0, MR_tempr1, 10);
	MR_tfield(0, MR_r2, 11) = MR_tfield(0, MR_tempr1, 11);
	MR_tfield(0, MR_r2, 12) = MR_tfield(0, MR_tempr1, 12);
	MR_tfield(0, MR_r2, 13) = MR_tfield(0, MR_tempr1, 13);
	MR_tfield(0, MR_r2, 14) = MR_tfield(0, MR_tempr1, 14);
	MR_tfield(0, MR_r2, 15) = MR_tfield(0, MR_tempr1, 15);
	MR_tfield(0, MR_r2, 16) = MR_tfield(0, MR_tempr1, 16);
	MR_tfield(0, MR_r2, 17) = MR_tfield(0, MR_tempr1, 17);
	MR_tfield(0, MR_r2, 18) = MR_tfield(0, MR_tempr1, 18);
	MR_tfield(0, MR_r2, 19) = MR_tfield(0, MR_tempr1, 19);
	MR_tfield(0, MR_r2, 20) = MR_tfield(0, MR_tempr1, 20);
	MR_tfield(0, MR_r2, 21) = MR_tfield(0, MR_tempr1, 21);
	MR_tfield(0, MR_r2, 22) = MR_tfield(0, MR_tempr1, 22);
	MR_tfield(0, MR_r2, 23) = MR_tfield(0, MR_tempr1, 23);
	MR_tfield(0, MR_r2, 24) = MR_tfield(0, MR_tempr1, 24);
	MR_decr_sp_and_return(5);
	}
MR_def_label(hlds__hlds_statistics__accumulate_proc_stats_in_goal_5_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r5,0)) {
		MR_GOTO_LAB(hlds__hlds_statistics__accumulate_proc_stats_in_goal_5_0_i20);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(0, MR_r5, 3);
	MR_r4 = MR_tempr1;
	if (MR_PTAG_TESTR(MR_tempr1,2)) {
		MR_GOTO_LAB(hlds__hlds_statistics__accumulate_proc_stats_in_goal_5_0_i22);
	}
	MR_sv(1) = MR_tfield(2, MR_tempr1, 1);
	MR_sv(3) = MR_r3;
	MR_sv(2) = (MR_Word) MR_TAG_COMMON(0,3,0);
	MR_r1 = MR_sv(2);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tfield(2, MR_tempr1, 0);
	MR_r3 = MR_tempr2;
	}
	MR_np_call_localret_ent(set_tree234__insert_3_0,
		hlds__hlds_statistics__accumulate_proc_stats_in_goal_5_0_i24);
MR_def_label(hlds__hlds_statistics__accumulate_proc_stats_in_goal_5_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(set_tree234__insert_3_0,
		hlds__hlds_statistics__accumulate_proc_stats_in_goal_5_0_i25);
MR_def_label(hlds__hlds_statistics__accumulate_proc_stats_in_goal_5_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 25);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_tfield(0, MR_r2, 0) = MR_tfield(0, MR_tempr1, 0);
	MR_tfield(0, MR_r2, 1) = MR_tfield(0, MR_tempr1, 1);
	MR_tfield(0, MR_r2, 2) = ((MR_Integer) MR_tfield(0, MR_tempr1, 2) + (MR_Integer) 1);
	MR_tfield(0, MR_r2, 3) = MR_tfield(0, MR_tempr1, 3);
	MR_tfield(0, MR_r2, 4) = MR_tfield(0, MR_tempr1, 4);
	MR_tfield(0, MR_r2, 5) = MR_tfield(0, MR_tempr1, 5);
	MR_tfield(0, MR_r2, 6) = MR_tfield(0, MR_tempr1, 6);
	MR_tfield(0, MR_r2, 7) = MR_tfield(0, MR_tempr1, 7);
	MR_tfield(0, MR_r2, 8) = MR_tfield(0, MR_tempr1, 8);
	MR_tfield(0, MR_r2, 9) = MR_tfield(0, MR_tempr1, 9);
	MR_tfield(0, MR_r2, 10) = MR_tfield(0, MR_tempr1, 10);
	MR_tfield(0, MR_r2, 11) = MR_tfield(0, MR_tempr1, 11);
	MR_tfield(0, MR_r2, 12) = MR_tfield(0, MR_tempr1, 12);
	MR_tfield(0, MR_r2, 13) = MR_tfield(0, MR_tempr1, 13);
	MR_tfield(0, MR_r2, 14) = MR_tfield(0, MR_tempr1, 14);
	MR_tfield(0, MR_r2, 15) = MR_tfield(0, MR_tempr1, 15);
	MR_tfield(0, MR_r2, 16) = MR_tfield(0, MR_tempr1, 16);
	MR_tfield(0, MR_r2, 17) = MR_tfield(0, MR_tempr1, 17);
	MR_tfield(0, MR_r2, 18) = MR_tfield(0, MR_tempr1, 18);
	MR_tfield(0, MR_r2, 19) = MR_tfield(0, MR_tempr1, 19);
	MR_tfield(0, MR_r2, 20) = MR_tfield(0, MR_tempr1, 20);
	MR_tfield(0, MR_r2, 21) = MR_tfield(0, MR_tempr1, 21);
	MR_tfield(0, MR_r2, 22) = MR_tfield(0, MR_tempr1, 22);
	MR_tfield(0, MR_r2, 23) = MR_tfield(0, MR_tempr1, 23);
	MR_tfield(0, MR_r2, 24) = MR_tfield(0, MR_tempr1, 24);
	MR_decr_sp_and_return(5);
	}
MR_def_label(hlds__hlds_statistics__accumulate_proc_stats_in_goal_5_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r4,0)) {
		MR_GOTO_LAB(hlds__hlds_statistics__accumulate_proc_stats_in_goal_5_0_i27);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r4;
	MR_sv(1) = MR_tfield(0, MR_tempr2, 2);
	MR_sv(3) = MR_r3;
	MR_sv(2) = (MR_Word) MR_TAG_COMMON(0,3,0);
	MR_r1 = MR_sv(2);
	MR_tempr1 = MR_r2;
	MR_r2 = MR_tfield(0, MR_tempr2, 0);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(set_tree234__insert_3_0,
		hlds__hlds_statistics__accumulate_proc_stats_in_goal_5_0_i29);
MR_def_label(hlds__hlds_statistics__accumulate_proc_stats_in_goal_5_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(set_tree234__insert_list_3_0,
		hlds__hlds_statistics__accumulate_proc_stats_in_goal_5_0_i30);
MR_def_label(hlds__hlds_statistics__accumulate_proc_stats_in_goal_5_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 25);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_tfield(0, MR_r2, 0) = ((MR_Integer) MR_tfield(0, MR_tempr1, 0) + (MR_Integer) 1);
	MR_tfield(0, MR_r2, 1) = MR_tfield(0, MR_tempr1, 1);
	MR_tfield(0, MR_r2, 2) = MR_tfield(0, MR_tempr1, 2);
	MR_tfield(0, MR_r2, 3) = MR_tfield(0, MR_tempr1, 3);
	MR_tfield(0, MR_r2, 4) = MR_tfield(0, MR_tempr1, 4);
	MR_tfield(0, MR_r2, 5) = MR_tfield(0, MR_tempr1, 5);
	MR_tfield(0, MR_r2, 6) = MR_tfield(0, MR_tempr1, 6);
	MR_tfield(0, MR_r2, 7) = MR_tfield(0, MR_tempr1, 7);
	MR_tfield(0, MR_r2, 8) = MR_tfield(0, MR_tempr1, 8);
	MR_tfield(0, MR_r2, 9) = MR_tfield(0, MR_tempr1, 9);
	MR_tfield(0, MR_r2, 10) = MR_tfield(0, MR_tempr1, 10);
	MR_tfield(0, MR_r2, 11) = MR_tfield(0, MR_tempr1, 11);
	MR_tfield(0, MR_r2, 12) = MR_tfield(0, MR_tempr1, 12);
	MR_tfield(0, MR_r2, 13) = MR_tfield(0, MR_tempr1, 13);
	MR_tfield(0, MR_r2, 14) = MR_tfield(0, MR_tempr1, 14);
	MR_tfield(0, MR_r2, 15) = MR_tfield(0, MR_tempr1, 15);
	MR_tfield(0, MR_r2, 16) = MR_tfield(0, MR_tempr1, 16);
	MR_tfield(0, MR_r2, 17) = MR_tfield(0, MR_tempr1, 17);
	MR_tfield(0, MR_r2, 18) = MR_tfield(0, MR_tempr1, 18);
	MR_tfield(0, MR_r2, 19) = MR_tfield(0, MR_tempr1, 19);
	MR_tfield(0, MR_r2, 20) = MR_tfield(0, MR_tempr1, 20);
	MR_tfield(0, MR_r2, 21) = MR_tfield(0, MR_tempr1, 21);
	MR_tfield(0, MR_r2, 22) = MR_tfield(0, MR_tempr1, 22);
	MR_tfield(0, MR_r2, 23) = MR_tfield(0, MR_tempr1, 23);
	MR_tfield(0, MR_r2, 24) = MR_tfield(0, MR_tempr1, 24);
	MR_decr_sp_and_return(5);
	}
MR_def_label(hlds__hlds_statistics__accumulate_proc_stats_in_goal_5_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r4,1)) {
		MR_GOTO_LAB(hlds__hlds_statistics__accumulate_proc_stats_in_goal_5_0_i32);
	}
	MR_sv(3) = MR_r3;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r4;
	MR_sv(1) = MR_tfield(1, MR_tempr2, 2);
	MR_sv(2) = (MR_Word) MR_TAG_COMMON(0,3,0);
	MR_r1 = MR_sv(2);
	MR_tempr1 = MR_r2;
	MR_r2 = MR_tfield(1, MR_tempr2, 0);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(set_tree234__insert_3_0,
		hlds__hlds_statistics__accumulate_proc_stats_in_goal_5_0_i34);
MR_def_label(hlds__hlds_statistics__accumulate_proc_stats_in_goal_5_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(set_tree234__insert_list_3_0,
		hlds__hlds_statistics__accumulate_proc_stats_in_goal_5_0_i35);
MR_def_label(hlds__hlds_statistics__accumulate_proc_stats_in_goal_5_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 25);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_tfield(0, MR_r2, 0) = MR_tfield(0, MR_tempr1, 0);
	MR_tfield(0, MR_r2, 1) = ((MR_Integer) MR_tfield(0, MR_tempr1, 1) + (MR_Integer) 1);
	MR_tfield(0, MR_r2, 2) = MR_tfield(0, MR_tempr1, 2);
	MR_tfield(0, MR_r2, 3) = MR_tfield(0, MR_tempr1, 3);
	MR_tfield(0, MR_r2, 4) = MR_tfield(0, MR_tempr1, 4);
	MR_tfield(0, MR_r2, 5) = MR_tfield(0, MR_tempr1, 5);
	MR_tfield(0, MR_r2, 6) = MR_tfield(0, MR_tempr1, 6);
	MR_tfield(0, MR_r2, 7) = MR_tfield(0, MR_tempr1, 7);
	MR_tfield(0, MR_r2, 8) = MR_tfield(0, MR_tempr1, 8);
	MR_tfield(0, MR_r2, 9) = MR_tfield(0, MR_tempr1, 9);
	MR_tfield(0, MR_r2, 10) = MR_tfield(0, MR_tempr1, 10);
	MR_tfield(0, MR_r2, 11) = MR_tfield(0, MR_tempr1, 11);
	MR_tfield(0, MR_r2, 12) = MR_tfield(0, MR_tempr1, 12);
	MR_tfield(0, MR_r2, 13) = MR_tfield(0, MR_tempr1, 13);
	MR_tfield(0, MR_r2, 14) = MR_tfield(0, MR_tempr1, 14);
	MR_tfield(0, MR_r2, 15) = MR_tfield(0, MR_tempr1, 15);
	MR_tfield(0, MR_r2, 16) = MR_tfield(0, MR_tempr1, 16);
	MR_tfield(0, MR_r2, 17) = MR_tfield(0, MR_tempr1, 17);
	MR_tfield(0, MR_r2, 18) = MR_tfield(0, MR_tempr1, 18);
	MR_tfield(0, MR_r2, 19) = MR_tfield(0, MR_tempr1, 19);
	MR_tfield(0, MR_r2, 20) = MR_tfield(0, MR_tempr1, 20);
	MR_tfield(0, MR_r2, 21) = MR_tfield(0, MR_tempr1, 21);
	MR_tfield(0, MR_r2, 22) = MR_tfield(0, MR_tempr1, 22);
	MR_tfield(0, MR_r2, 23) = MR_tfield(0, MR_tempr1, 23);
	MR_tfield(0, MR_r2, 24) = MR_tfield(0, MR_tempr1, 24);
	MR_decr_sp_and_return(5);
	}
MR_def_label(hlds__hlds_statistics__accumulate_proc_stats_in_goal_5_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r4,3,1)) {
		MR_GOTO_LAB(hlds__hlds_statistics__accumulate_proc_stats_in_goal_5_0_i37);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r5;
	MR_sv(1) = MR_tfield(0, MR_tempr2, 1);
	MR_sv(3) = MR_r3;
	MR_sv(4) = (MR_Word) MR_TAG_COMMON(0,3,0);
	MR_r1 = MR_sv(4);
	MR_tempr1 = MR_r2;
	MR_r2 = MR_tfield(0, MR_tempr2, 0);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(set_tree234__insert_3_0,
		hlds__hlds_statistics__accumulate_proc_stats_in_goal_5_0_i39);
MR_def_label(hlds__hlds_statistics__accumulate_proc_stats_in_goal_5_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),1)) {
		MR_GOTO_LAB(hlds__hlds_statistics__accumulate_proc_stats_in_goal_5_0_i41);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_tfield(1, MR_sv(1), 2);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(set_tree234__insert_list_3_0,
		hlds__hlds_statistics__accumulate_proc_stats_in_goal_5_0_i49);
MR_def_label(hlds__hlds_statistics__accumulate_proc_stats_in_goal_5_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),2)) {
		MR_GOTO_LAB(hlds__hlds_statistics__accumulate_proc_stats_in_goal_5_0_i44);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_tfield(2, MR_tempr1, 5);
	MR_sv(2) = MR_tfield(2, MR_tempr1, 8);
	MR_tempr2 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_tfield(2, MR_tempr1, 4);
	MR_r3 = MR_tempr2;
	}
	MR_np_call_localret_ent(set_tree234__insert_list_3_0,
		hlds__hlds_statistics__accumulate_proc_stats_in_goal_5_0_i45);
MR_def_label(hlds__hlds_statistics__accumulate_proc_stats_in_goal_5_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(set_tree234__insert_list_3_0,
		hlds__hlds_statistics__accumulate_proc_stats_in_goal_5_0_i46);
MR_def_label(hlds__hlds_statistics__accumulate_proc_stats_in_goal_5_0,46)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 25);
	MR_r3 = MR_tempr1;
	MR_tempr3 = MR_sv(3);
	MR_tfield(0, MR_tempr1, 0) = MR_tfield(0, MR_tempr3, 0);
	MR_tfield(0, MR_tempr1, 1) = MR_tfield(0, MR_tempr3, 1);
	MR_tfield(0, MR_tempr1, 2) = MR_tfield(0, MR_tempr3, 2);
	MR_tfield(0, MR_tempr1, 3) = MR_tfield(0, MR_tempr3, 3);
	MR_tfield(0, MR_tempr1, 4) = ((MR_Integer) MR_tfield(0, MR_tempr3, 4) + (MR_Integer) 1);
	MR_tfield(0, MR_tempr1, 5) = MR_tfield(0, MR_tempr3, 5);
	MR_tfield(0, MR_tempr1, 6) = MR_tfield(0, MR_tempr3, 6);
	MR_tfield(0, MR_tempr1, 7) = MR_tfield(0, MR_tempr3, 7);
	MR_tfield(0, MR_tempr1, 8) = MR_tfield(0, MR_tempr3, 8);
	MR_tfield(0, MR_tempr1, 9) = MR_tfield(0, MR_tempr3, 9);
	MR_tfield(0, MR_tempr1, 10) = MR_tfield(0, MR_tempr3, 10);
	MR_tfield(0, MR_tempr1, 11) = MR_tfield(0, MR_tempr3, 11);
	MR_tfield(0, MR_tempr1, 12) = MR_tfield(0, MR_tempr3, 12);
	MR_tfield(0, MR_tempr1, 13) = MR_tfield(0, MR_tempr3, 13);
	MR_tfield(0, MR_tempr1, 14) = MR_tfield(0, MR_tempr3, 14);
	MR_tfield(0, MR_tempr1, 15) = MR_tfield(0, MR_tempr3, 15);
	MR_tfield(0, MR_tempr1, 16) = MR_tfield(0, MR_tempr3, 16);
	MR_tfield(0, MR_tempr1, 17) = MR_tfield(0, MR_tempr3, 17);
	MR_tfield(0, MR_tempr1, 18) = MR_tfield(0, MR_tempr3, 18);
	MR_tfield(0, MR_tempr1, 19) = MR_tfield(0, MR_tempr3, 19);
	MR_tfield(0, MR_tempr1, 20) = MR_tfield(0, MR_tempr3, 20);
	MR_tfield(0, MR_tempr1, 21) = MR_tfield(0, MR_tempr3, 21);
	MR_tfield(0, MR_tempr1, 22) = MR_tfield(0, MR_tempr3, 22);
	MR_tfield(0, MR_tempr1, 23) = MR_tfield(0, MR_tempr3, 23);
	MR_tfield(0, MR_tempr1, 24) = MR_tfield(0, MR_tempr3, 24);
	MR_tempr2 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr2;
	MR_succip_word = MR_sv(5);
	MR_GOTO_LAB(hlds__hlds_statistics__accumulate_proc_stats_in_goal_5_0_i237);
	}
MR_def_label(hlds__hlds_statistics__accumulate_proc_stats_in_goal_5_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_tfield(0, MR_sv(1), 0);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(set_tree234__insert_3_0,
		hlds__hlds_statistics__accumulate_proc_stats_in_goal_5_0_i49);
MR_def_label(hlds__hlds_statistics__accumulate_proc_stats_in_goal_5_0,49)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 25);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_tfield(0, MR_r2, 0) = MR_tfield(0, MR_tempr1, 0);
	MR_tfield(0, MR_r2, 1) = MR_tfield(0, MR_tempr1, 1);
	MR_tfield(0, MR_r2, 2) = MR_tfield(0, MR_tempr1, 2);
	MR_tfield(0, MR_r2, 3) = MR_tfield(0, MR_tempr1, 3);
	MR_tfield(0, MR_r2, 4) = ((MR_Integer) MR_tfield(0, MR_tempr1, 4) + (MR_Integer) 1);
	MR_tfield(0, MR_r2, 5) = MR_tfield(0, MR_tempr1, 5);
	MR_tfield(0, MR_r2, 6) = MR_tfield(0, MR_tempr1, 6);
	MR_tfield(0, MR_r2, 7) = MR_tfield(0, MR_tempr1, 7);
	MR_tfield(0, MR_r2, 8) = MR_tfield(0, MR_tempr1, 8);
	MR_tfield(0, MR_r2, 9) = MR_tfield(0, MR_tempr1, 9);
	MR_tfield(0, MR_r2, 10) = MR_tfield(0, MR_tempr1, 10);
	MR_tfield(0, MR_r2, 11) = MR_tfield(0, MR_tempr1, 11);
	MR_tfield(0, MR_r2, 12) = MR_tfield(0, MR_tempr1, 12);
	MR_tfield(0, MR_r2, 13) = MR_tfield(0, MR_tempr1, 13);
	MR_tfield(0, MR_r2, 14) = MR_tfield(0, MR_tempr1, 14);
	MR_tfield(0, MR_r2, 15) = MR_tfield(0, MR_tempr1, 15);
	MR_tfield(0, MR_r2, 16) = MR_tfield(0, MR_tempr1, 16);
	MR_tfield(0, MR_r2, 17) = MR_tfield(0, MR_tempr1, 17);
	MR_tfield(0, MR_r2, 18) = MR_tfield(0, MR_tempr1, 18);
	MR_tfield(0, MR_r2, 19) = MR_tfield(0, MR_tempr1, 19);
	MR_tfield(0, MR_r2, 20) = MR_tfield(0, MR_tempr1, 20);
	MR_tfield(0, MR_r2, 21) = MR_tfield(0, MR_tempr1, 21);
	MR_tfield(0, MR_r2, 22) = MR_tfield(0, MR_tempr1, 22);
	MR_tfield(0, MR_r2, 23) = MR_tfield(0, MR_tempr1, 23);
	MR_tfield(0, MR_r2, 24) = MR_tfield(0, MR_tempr1, 24);
	MR_decr_sp_and_return(5);
	}
MR_def_label(hlds__hlds_statistics__accumulate_proc_stats_in_goal_5_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r4;
	MR_sv(1) = MR_tfield(3, MR_tempr2, 2);
	MR_sv(3) = MR_r3;
	MR_sv(2) = (MR_Word) MR_TAG_COMMON(0,3,0);
	MR_r1 = MR_sv(2);
	MR_tempr1 = MR_r2;
	MR_r2 = MR_tfield(3, MR_tempr2, 1);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(set_tree234__insert_3_0,
		hlds__hlds_statistics__accumulate_proc_stats_in_goal_5_0_i52);
MR_def_label(hlds__hlds_statistics__accumulate_proc_stats_in_goal_5_0,52)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(set_tree234__insert_3_0,
		hlds__hlds_statistics__accumulate_proc_stats_in_goal_5_0_i53);
MR_def_label(hlds__hlds_statistics__accumulate_proc_stats_in_goal_5_0,53)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 25);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_tfield(0, MR_r2, 0) = MR_tfield(0, MR_tempr1, 0);
	MR_tfield(0, MR_r2, 1) = MR_tfield(0, MR_tempr1, 1);
	MR_tfield(0, MR_r2, 2) = MR_tfield(0, MR_tempr1, 2);
	MR_tfield(0, MR_r2, 3) = ((MR_Integer) MR_tfield(0, MR_tempr1, 3) + (MR_Integer) 1);
	MR_tfield(0, MR_r2, 4) = MR_tfield(0, MR_tempr1, 4);
	MR_tfield(0, MR_r2, 5) = MR_tfield(0, MR_tempr1, 5);
	MR_tfield(0, MR_r2, 6) = MR_tfield(0, MR_tempr1, 6);
	MR_tfield(0, MR_r2, 7) = MR_tfield(0, MR_tempr1, 7);
	MR_tfield(0, MR_r2, 8) = MR_tfield(0, MR_tempr1, 8);
	MR_tfield(0, MR_r2, 9) = MR_tfield(0, MR_tempr1, 9);
	MR_tfield(0, MR_r2, 10) = MR_tfield(0, MR_tempr1, 10);
	MR_tfield(0, MR_r2, 11) = MR_tfield(0, MR_tempr1, 11);
	MR_tfield(0, MR_r2, 12) = MR_tfield(0, MR_tempr1, 12);
	MR_tfield(0, MR_r2, 13) = MR_tfield(0, MR_tempr1, 13);
	MR_tfield(0, MR_r2, 14) = MR_tfield(0, MR_tempr1, 14);
	MR_tfield(0, MR_r2, 15) = MR_tfield(0, MR_tempr1, 15);
	MR_tfield(0, MR_r2, 16) = MR_tfield(0, MR_tempr1, 16);
	MR_tfield(0, MR_r2, 17) = MR_tfield(0, MR_tempr1, 17);
	MR_tfield(0, MR_r2, 18) = MR_tfield(0, MR_tempr1, 18);
	MR_tfield(0, MR_r2, 19) = MR_tfield(0, MR_tempr1, 19);
	MR_tfield(0, MR_r2, 20) = MR_tfield(0, MR_tempr1, 20);
	MR_tfield(0, MR_r2, 21) = MR_tfield(0, MR_tempr1, 21);
	MR_tfield(0, MR_r2, 22) = MR_tfield(0, MR_tempr1, 22);
	MR_tfield(0, MR_r2, 23) = MR_tfield(0, MR_tempr1, 23);
	MR_tfield(0, MR_r2, 24) = MR_tfield(0, MR_tempr1, 24);
	MR_decr_sp_and_return(5);
	}
MR_def_label(hlds__hlds_statistics__accumulate_proc_stats_in_goal_5_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r5,3,0)) {
		MR_GOTO_LAB(hlds__hlds_statistics__accumulate_proc_stats_in_goal_5_0_i55);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r5;
	MR_sv(1) = MR_tfield(3, MR_tempr1, 5);
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = (MR_Word) MR_TAG_COMMON(0,3,0);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, foreign_arg);
	MR_r2 = MR_sv(4);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,5,0);
	MR_r4 = MR_tfield(3, MR_tempr1, 4);
	}
	MR_np_call_localret_ent(fn__list__map_2_0,
		hlds__hlds_statistics__accumulate_proc_stats_in_goal_5_0_i58);
MR_def_label(hlds__hlds_statistics__accumulate_proc_stats_in_goal_5_0,58)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, foreign_arg);
	MR_r2 = MR_sv(4);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,5,1);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__list__map_2_0,
		hlds__hlds_statistics__accumulate_proc_stats_in_goal_5_0_i60);
MR_def_label(hlds__hlds_statistics__accumulate_proc_stats_in_goal_5_0,60)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(2);
	}
	MR_np_call_localret_ent(set_tree234__insert_list_3_0,
		hlds__hlds_statistics__accumulate_proc_stats_in_goal_5_0_i61);
MR_def_label(hlds__hlds_statistics__accumulate_proc_stats_in_goal_5_0,61)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(set_tree234__insert_list_3_0,
		hlds__hlds_statistics__accumulate_proc_stats_in_goal_5_0_i62);
MR_def_label(hlds__hlds_statistics__accumulate_proc_stats_in_goal_5_0,62)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 25);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_tfield(0, MR_r2, 0) = MR_tfield(0, MR_tempr1, 0);
	MR_tfield(0, MR_r2, 1) = MR_tfield(0, MR_tempr1, 1);
	MR_tfield(0, MR_r2, 2) = MR_tfield(0, MR_tempr1, 2);
	MR_tfield(0, MR_r2, 3) = MR_tfield(0, MR_tempr1, 3);
	MR_tfield(0, MR_r2, 4) = MR_tfield(0, MR_tempr1, 4);
	MR_tfield(0, MR_r2, 5) = MR_tfield(0, MR_tempr1, 5);
	MR_tfield(0, MR_r2, 6) = ((MR_Integer) MR_tfield(0, MR_tempr1, 6) + (MR_Integer) 1);
	MR_tfield(0, MR_r2, 7) = MR_tfield(0, MR_tempr1, 7);
	MR_tfield(0, MR_r2, 8) = MR_tfield(0, MR_tempr1, 8);
	MR_tfield(0, MR_r2, 9) = MR_tfield(0, MR_tempr1, 9);
	MR_tfield(0, MR_r2, 10) = MR_tfield(0, MR_tempr1, 10);
	MR_tfield(0, MR_r2, 11) = MR_tfield(0, MR_tempr1, 11);
	MR_tfield(0, MR_r2, 12) = MR_tfield(0, MR_tempr1, 12);
	MR_tfield(0, MR_r2, 13) = MR_tfield(0, MR_tempr1, 13);
	MR_tfield(0, MR_r2, 14) = MR_tfield(0, MR_tempr1, 14);
	MR_tfield(0, MR_r2, 15) = MR_tfield(0, MR_tempr1, 15);
	MR_tfield(0, MR_r2, 16) = MR_tfield(0, MR_tempr1, 16);
	MR_tfield(0, MR_r2, 17) = MR_tfield(0, MR_tempr1, 17);
	MR_tfield(0, MR_r2, 18) = MR_tfield(0, MR_tempr1, 18);
	MR_tfield(0, MR_r2, 19) = MR_tfield(0, MR_tempr1, 19);
	MR_tfield(0, MR_r2, 20) = MR_tfield(0, MR_tempr1, 20);
	MR_tfield(0, MR_r2, 21) = MR_tfield(0, MR_tempr1, 21);
	MR_tfield(0, MR_r2, 22) = MR_tfield(0, MR_tempr1, 22);
	MR_tfield(0, MR_r2, 23) = MR_tfield(0, MR_tempr1, 23);
	MR_tfield(0, MR_r2, 24) = MR_tfield(0, MR_tempr1, 24);
	MR_decr_sp_and_return(5);
	}
MR_def_label(hlds__hlds_statistics__accumulate_proc_stats_in_goal_5_0,55)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r5,3,1)) {
		MR_GOTO_LAB(hlds__hlds_statistics__accumulate_proc_stats_in_goal_5_0_i64);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr2 = MR_r5;
	MR_tempr1 = MR_tfield(3, MR_tempr2, 1);
	if (MR_INT_NE(MR_tempr1,1)) {
		MR_GOTO_LAB(hlds__hlds_statistics__accumulate_proc_stats_in_goal_5_0_i66);
	}
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 25);
	MR_tempr3 = MR_r3;
	MR_tfield(0, MR_tempr1, 0) = MR_tfield(0, MR_tempr3, 0);
	MR_tfield(0, MR_tempr1, 1) = MR_tfield(0, MR_tempr3, 1);
	MR_tfield(0, MR_tempr1, 2) = MR_tfield(0, MR_tempr3, 2);
	MR_tfield(0, MR_tempr1, 3) = MR_tfield(0, MR_tempr3, 3);
	MR_tfield(0, MR_tempr1, 4) = MR_tfield(0, MR_tempr3, 4);
	MR_tfield(0, MR_tempr1, 5) = MR_tfield(0, MR_tempr3, 5);
	MR_tfield(0, MR_tempr1, 6) = MR_tfield(0, MR_tempr3, 6);
	MR_tfield(0, MR_tempr1, 7) = MR_tfield(0, MR_tempr3, 7);
	MR_tfield(0, MR_tempr1, 8) = MR_tfield(0, MR_tempr3, 8);
	MR_tfield(0, MR_tempr1, 9) = MR_tfield(0, MR_tempr3, 9);
	MR_tfield(0, MR_tempr1, 10) = MR_tfield(0, MR_tempr3, 10);
	MR_tfield(0, MR_tempr1, 11) = MR_tfield(0, MR_tempr3, 11);
	MR_tfield(0, MR_tempr1, 12) = MR_tfield(0, MR_tempr3, 12);
	MR_tfield(0, MR_tempr1, 13) = ((MR_Integer) MR_tfield(0, MR_tempr3, 13) + (MR_Integer) 1);
	MR_tfield(0, MR_tempr1, 14) = MR_tfield(0, MR_tempr3, 14);
	MR_tfield(0, MR_tempr1, 15) = MR_tfield(0, MR_tempr3, 15);
	MR_tfield(0, MR_tempr1, 16) = MR_tfield(0, MR_tempr3, 16);
	MR_tfield(0, MR_tempr1, 17) = MR_tfield(0, MR_tempr3, 17);
	MR_tfield(0, MR_tempr1, 18) = MR_tfield(0, MR_tempr3, 18);
	MR_tfield(0, MR_tempr1, 19) = MR_tfield(0, MR_tempr3, 19);
	MR_tfield(0, MR_tempr1, 20) = MR_tfield(0, MR_tempr3, 20);
	MR_tfield(0, MR_tempr1, 21) = MR_tfield(0, MR_tempr3, 21);
	MR_tfield(0, MR_tempr1, 22) = MR_tfield(0, MR_tempr3, 22);
	MR_tfield(0, MR_tempr1, 23) = MR_tfield(0, MR_tempr3, 23);
	MR_tfield(0, MR_tempr1, 24) = MR_tfield(0, MR_tempr3, 24);
	MR_r1 = MR_tfield(3, MR_tempr2, 2);
	MR_r3 = MR_tempr1;
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(hlds__hlds_statistics__accumulate_proc_stats_in_parallel_conj_5_0);
	}
MR_def_label(hlds__hlds_statistics__accumulate_proc_stats_in_goal_5_0,66)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 25);
	MR_tempr2 = MR_r3;
	MR_tfield(0, MR_tempr1, 0) = MR_tfield(0, MR_tempr2, 0);
	MR_tfield(0, MR_tempr1, 1) = MR_tfield(0, MR_tempr2, 1);
	MR_tfield(0, MR_tempr1, 2) = MR_tfield(0, MR_tempr2, 2);
	MR_tfield(0, MR_tempr1, 3) = MR_tfield(0, MR_tempr2, 3);
	MR_tfield(0, MR_tempr1, 4) = MR_tfield(0, MR_tempr2, 4);
	MR_tfield(0, MR_tempr1, 5) = MR_tfield(0, MR_tempr2, 5);
	MR_tfield(0, MR_tempr1, 6) = MR_tfield(0, MR_tempr2, 6);
	MR_tfield(0, MR_tempr1, 7) = MR_tfield(0, MR_tempr2, 7);
	MR_tfield(0, MR_tempr1, 8) = MR_tfield(0, MR_tempr2, 8);
	MR_tfield(0, MR_tempr1, 9) = MR_tfield(0, MR_tempr2, 9);
	MR_tfield(0, MR_tempr1, 10) = MR_tfield(0, MR_tempr2, 10);
	MR_tfield(0, MR_tempr1, 11) = ((MR_Integer) MR_tfield(0, MR_tempr2, 11) + (MR_Integer) 1);
	MR_tfield(0, MR_tempr1, 12) = MR_tfield(0, MR_tempr2, 12);
	MR_tfield(0, MR_tempr1, 13) = MR_tfield(0, MR_tempr2, 13);
	MR_tfield(0, MR_tempr1, 14) = MR_tfield(0, MR_tempr2, 14);
	MR_tfield(0, MR_tempr1, 15) = MR_tfield(0, MR_tempr2, 15);
	MR_tfield(0, MR_tempr1, 16) = MR_tfield(0, MR_tempr2, 16);
	MR_tfield(0, MR_tempr1, 17) = MR_tfield(0, MR_tempr2, 17);
	MR_tfield(0, MR_tempr1, 18) = MR_tfield(0, MR_tempr2, 18);
	MR_tfield(0, MR_tempr1, 19) = MR_tfield(0, MR_tempr2, 19);
	MR_tfield(0, MR_tempr1, 20) = MR_tfield(0, MR_tempr2, 20);
	MR_tfield(0, MR_tempr1, 21) = MR_tfield(0, MR_tempr2, 21);
	MR_tfield(0, MR_tempr1, 22) = MR_tfield(0, MR_tempr2, 22);
	MR_tfield(0, MR_tempr1, 23) = MR_tfield(0, MR_tempr2, 23);
	MR_tfield(0, MR_tempr1, 24) = MR_tfield(0, MR_tempr2, 24);
	MR_r1 = MR_tfield(3, MR_r5, 2);
	MR_r3 = MR_tempr1;
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(hlds__hlds_statistics__accumulate_proc_stats_in_plain_conj_5_0);
	}
MR_def_label(hlds__hlds_statistics__accumulate_proc_stats_in_goal_5_0,64)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r5,3,2)) {
		MR_GOTO_LAB(hlds__hlds_statistics__accumulate_proc_stats_in_goal_5_0_i71);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 25);
	MR_tempr2 = MR_r3;
	MR_tfield(0, MR_tempr1, 0) = MR_tfield(0, MR_tempr2, 0);
	MR_tfield(0, MR_tempr1, 1) = MR_tfield(0, MR_tempr2, 1);
	MR_tfield(0, MR_tempr1, 2) = MR_tfield(0, MR_tempr2, 2);
	MR_tfield(0, MR_tempr1, 3) = MR_tfield(0, MR_tempr2, 3);
	MR_tfield(0, MR_tempr1, 4) = MR_tfield(0, MR_tempr2, 4);
	MR_tfield(0, MR_tempr1, 5) = MR_tfield(0, MR_tempr2, 5);
	MR_tfield(0, MR_tempr1, 6) = MR_tfield(0, MR_tempr2, 6);
	MR_tfield(0, MR_tempr1, 7) = MR_tfield(0, MR_tempr2, 7);
	MR_tfield(0, MR_tempr1, 8) = MR_tfield(0, MR_tempr2, 8);
	MR_tfield(0, MR_tempr1, 9) = MR_tfield(0, MR_tempr2, 9);
	MR_tfield(0, MR_tempr1, 10) = MR_tfield(0, MR_tempr2, 10);
	MR_tfield(0, MR_tempr1, 11) = MR_tfield(0, MR_tempr2, 11);
	MR_tfield(0, MR_tempr1, 12) = MR_tfield(0, MR_tempr2, 12);
	MR_tfield(0, MR_tempr1, 13) = MR_tfield(0, MR_tempr2, 13);
	MR_tfield(0, MR_tempr1, 14) = MR_tfield(0, MR_tempr2, 14);
	MR_tfield(0, MR_tempr1, 15) = ((MR_Integer) MR_tfield(0, MR_tempr2, 15) + (MR_Integer) 1);
	MR_tfield(0, MR_tempr1, 16) = MR_tfield(0, MR_tempr2, 16);
	MR_tfield(0, MR_tempr1, 17) = MR_tfield(0, MR_tempr2, 17);
	MR_tfield(0, MR_tempr1, 18) = MR_tfield(0, MR_tempr2, 18);
	MR_tfield(0, MR_tempr1, 19) = MR_tfield(0, MR_tempr2, 19);
	MR_tfield(0, MR_tempr1, 20) = MR_tfield(0, MR_tempr2, 20);
	MR_tfield(0, MR_tempr1, 21) = MR_tfield(0, MR_tempr2, 21);
	MR_tfield(0, MR_tempr1, 22) = MR_tfield(0, MR_tempr2, 22);
	MR_tfield(0, MR_tempr1, 23) = MR_tfield(0, MR_tempr2, 23);
	MR_tfield(0, MR_tempr1, 24) = MR_tfield(0, MR_tempr2, 24);
	MR_r1 = MR_tfield(3, MR_r5, 1);
	MR_r3 = MR_tempr1;
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(hlds__hlds_statistics__accumulate_proc_stats_in_disj_5_0);
	}
MR_def_label(hlds__hlds_statistics__accumulate_proc_stats_in_goal_5_0,71)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r5,3,6)) {
		MR_GOTO_LAB(hlds__hlds_statistics__accumulate_proc_stats_in_goal_5_0_i74);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 25);
	MR_tempr2 = MR_r3;
	MR_tfield(0, MR_tempr1, 0) = MR_tfield(0, MR_tempr2, 0);
	MR_tfield(0, MR_tempr1, 1) = MR_tfield(0, MR_tempr2, 1);
	MR_tfield(0, MR_tempr1, 2) = MR_tfield(0, MR_tempr2, 2);
	MR_tfield(0, MR_tempr1, 3) = MR_tfield(0, MR_tempr2, 3);
	MR_tfield(0, MR_tempr1, 4) = MR_tfield(0, MR_tempr2, 4);
	MR_tfield(0, MR_tempr1, 5) = MR_tfield(0, MR_tempr2, 5);
	MR_tfield(0, MR_tempr1, 6) = MR_tfield(0, MR_tempr2, 6);
	MR_tfield(0, MR_tempr1, 7) = MR_tfield(0, MR_tempr2, 7);
	MR_tfield(0, MR_tempr1, 8) = MR_tfield(0, MR_tempr2, 8);
	MR_tfield(0, MR_tempr1, 9) = MR_tfield(0, MR_tempr2, 9);
	MR_tfield(0, MR_tempr1, 10) = MR_tfield(0, MR_tempr2, 10);
	MR_tfield(0, MR_tempr1, 11) = MR_tfield(0, MR_tempr2, 11);
	MR_tfield(0, MR_tempr1, 12) = MR_tfield(0, MR_tempr2, 12);
	MR_tfield(0, MR_tempr1, 13) = MR_tfield(0, MR_tempr2, 13);
	MR_tfield(0, MR_tempr1, 14) = MR_tfield(0, MR_tempr2, 14);
	MR_tfield(0, MR_tempr1, 15) = MR_tfield(0, MR_tempr2, 15);
	MR_tfield(0, MR_tempr1, 16) = MR_tfield(0, MR_tempr2, 16);
	MR_tfield(0, MR_tempr1, 17) = MR_tfield(0, MR_tempr2, 17);
	MR_tfield(0, MR_tempr1, 18) = MR_tfield(0, MR_tempr2, 18);
	MR_tfield(0, MR_tempr1, 19) = ((MR_Integer) MR_tfield(0, MR_tempr2, 19) + (MR_Integer) 1);
	MR_tfield(0, MR_tempr1, 20) = MR_tfield(0, MR_tempr2, 20);
	MR_tfield(0, MR_tempr1, 21) = MR_tfield(0, MR_tempr2, 21);
	MR_tfield(0, MR_tempr1, 22) = MR_tfield(0, MR_tempr2, 22);
	MR_tfield(0, MR_tempr1, 23) = MR_tfield(0, MR_tempr2, 23);
	MR_tfield(0, MR_tempr1, 24) = MR_tfield(0, MR_tempr2, 24);
	MR_tempr3 = MR_r5;
	MR_sv(1) = MR_tfield(3, MR_tempr3, 3);
	MR_sv(2) = MR_tfield(3, MR_tempr3, 4);
	MR_r1 = MR_tfield(3, MR_tempr3, 2);
	MR_r3 = MR_tempr1;
	}
	MR_np_localcall_lab(hlds__hlds_statistics__accumulate_proc_stats_in_goal_5_0,
		hlds__hlds_statistics__accumulate_proc_stats_in_goal_5_0_i76);
MR_def_label(hlds__hlds_statistics__accumulate_proc_stats_in_goal_5_0,76)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	}
	MR_np_localcall_lab(hlds__hlds_statistics__accumulate_proc_stats_in_goal_5_0,
		hlds__hlds_statistics__accumulate_proc_stats_in_goal_5_0_i77);
MR_def_label(hlds__hlds_statistics__accumulate_proc_stats_in_goal_5_0,77)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	MR_succip_word = MR_sv(5);
	MR_GOTO_LAB(hlds__hlds_statistics__accumulate_proc_stats_in_goal_5_0_i237);
	}
MR_def_label(hlds__hlds_statistics__accumulate_proc_stats_in_goal_5_0,74)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r5,3,4)) {
		MR_GOTO_LAB(hlds__hlds_statistics__accumulate_proc_stats_in_goal_5_0_i79);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 25);
	MR_tempr2 = MR_r3;
	MR_tfield(0, MR_tempr1, 0) = MR_tfield(0, MR_tempr2, 0);
	MR_tfield(0, MR_tempr1, 1) = MR_tfield(0, MR_tempr2, 1);
	MR_tfield(0, MR_tempr1, 2) = MR_tfield(0, MR_tempr2, 2);
	MR_tfield(0, MR_tempr1, 3) = MR_tfield(0, MR_tempr2, 3);
	MR_tfield(0, MR_tempr1, 4) = MR_tfield(0, MR_tempr2, 4);
	MR_tfield(0, MR_tempr1, 5) = MR_tfield(0, MR_tempr2, 5);
	MR_tfield(0, MR_tempr1, 6) = MR_tfield(0, MR_tempr2, 6);
	MR_tfield(0, MR_tempr1, 7) = MR_tfield(0, MR_tempr2, 7);
	MR_tfield(0, MR_tempr1, 8) = MR_tfield(0, MR_tempr2, 8);
	MR_tfield(0, MR_tempr1, 9) = MR_tfield(0, MR_tempr2, 9);
	MR_tfield(0, MR_tempr1, 10) = MR_tfield(0, MR_tempr2, 10);
	MR_tfield(0, MR_tempr1, 11) = MR_tfield(0, MR_tempr2, 11);
	MR_tfield(0, MR_tempr1, 12) = MR_tfield(0, MR_tempr2, 12);
	MR_tfield(0, MR_tempr1, 13) = MR_tfield(0, MR_tempr2, 13);
	MR_tfield(0, MR_tempr1, 14) = MR_tfield(0, MR_tempr2, 14);
	MR_tfield(0, MR_tempr1, 15) = MR_tfield(0, MR_tempr2, 15);
	MR_tfield(0, MR_tempr1, 16) = MR_tfield(0, MR_tempr2, 16);
	MR_tfield(0, MR_tempr1, 17) = MR_tfield(0, MR_tempr2, 17);
	MR_tfield(0, MR_tempr1, 18) = MR_tfield(0, MR_tempr2, 18);
	MR_tfield(0, MR_tempr1, 19) = MR_tfield(0, MR_tempr2, 19);
	MR_tfield(0, MR_tempr1, 20) = ((MR_Integer) MR_tfield(0, MR_tempr2, 20) + (MR_Integer) 1);
	MR_tfield(0, MR_tempr1, 21) = MR_tfield(0, MR_tempr2, 21);
	MR_tfield(0, MR_tempr1, 22) = MR_tfield(0, MR_tempr2, 22);
	MR_tfield(0, MR_tempr1, 23) = MR_tfield(0, MR_tempr2, 23);
	MR_tfield(0, MR_tempr1, 24) = MR_tfield(0, MR_tempr2, 24);
	MR_r1 = MR_tfield(3, MR_r5, 1);
	MR_r3 = MR_tempr1;
	MR_succip_word = MR_sv(5);
	MR_GOTO_LAB(hlds__hlds_statistics__accumulate_proc_stats_in_goal_5_0_i237);
	}
MR_def_label(hlds__hlds_statistics__accumulate_proc_stats_in_goal_5_0,79)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r5,3,5)) {
		MR_GOTO_LAB(hlds__hlds_statistics__accumulate_proc_stats_in_goal_5_0_i82);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 25);
	MR_tempr2 = MR_r3;
	MR_tfield(0, MR_tempr1, 0) = MR_tfield(0, MR_tempr2, 0);
	MR_tfield(0, MR_tempr1, 1) = MR_tfield(0, MR_tempr2, 1);
	MR_tfield(0, MR_tempr1, 2) = MR_tfield(0, MR_tempr2, 2);
	MR_tfield(0, MR_tempr1, 3) = MR_tfield(0, MR_tempr2, 3);
	MR_tfield(0, MR_tempr1, 4) = MR_tfield(0, MR_tempr2, 4);
	MR_tfield(0, MR_tempr1, 5) = MR_tfield(0, MR_tempr2, 5);
	MR_tfield(0, MR_tempr1, 6) = MR_tfield(0, MR_tempr2, 6);
	MR_tfield(0, MR_tempr1, 7) = MR_tfield(0, MR_tempr2, 7);
	MR_tfield(0, MR_tempr1, 8) = MR_tfield(0, MR_tempr2, 8);
	MR_tfield(0, MR_tempr1, 9) = MR_tfield(0, MR_tempr2, 9);
	MR_tfield(0, MR_tempr1, 10) = MR_tfield(0, MR_tempr2, 10);
	MR_tfield(0, MR_tempr1, 11) = MR_tfield(0, MR_tempr2, 11);
	MR_tfield(0, MR_tempr1, 12) = MR_tfield(0, MR_tempr2, 12);
	MR_tfield(0, MR_tempr1, 13) = MR_tfield(0, MR_tempr2, 13);
	MR_tfield(0, MR_tempr1, 14) = MR_tfield(0, MR_tempr2, 14);
	MR_tfield(0, MR_tempr1, 15) = MR_tfield(0, MR_tempr2, 15);
	MR_tfield(0, MR_tempr1, 16) = MR_tfield(0, MR_tempr2, 16);
	MR_tfield(0, MR_tempr1, 17) = MR_tfield(0, MR_tempr2, 17);
	MR_tfield(0, MR_tempr1, 18) = MR_tfield(0, MR_tempr2, 18);
	MR_tfield(0, MR_tempr1, 19) = MR_tfield(0, MR_tempr2, 19);
	MR_tfield(0, MR_tempr1, 20) = MR_tfield(0, MR_tempr2, 20);
	MR_tfield(0, MR_tempr1, 21) = ((MR_Integer) MR_tfield(0, MR_tempr2, 21) + (MR_Integer) 1);
	MR_tfield(0, MR_tempr1, 22) = MR_tfield(0, MR_tempr2, 22);
	MR_tfield(0, MR_tempr1, 23) = MR_tfield(0, MR_tempr2, 23);
	MR_tfield(0, MR_tempr1, 24) = MR_tfield(0, MR_tempr2, 24);
	MR_r1 = MR_tfield(3, MR_r5, 2);
	MR_r3 = MR_tempr1;
	MR_succip_word = MR_sv(5);
	MR_GOTO_LAB(hlds__hlds_statistics__accumulate_proc_stats_in_goal_5_0_i237);
	}
MR_def_label(hlds__hlds_statistics__accumulate_proc_stats_in_goal_5_0,82)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r5,3,7)) {
		MR_GOTO_LAB(hlds__hlds_statistics__accumulate_proc_stats_in_goal_5_0_i85);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_tfield(3, MR_r5, 1);
	MR_r4 = MR_tempr1;
	if (MR_PTAG_TESTR(MR_tempr1,1)) {
		MR_GOTO_LAB(hlds__hlds_statistics__accumulate_proc_stats_in_goal_5_0_i87);
	}
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 25);
	MR_tempr3 = MR_r3;
	MR_tfield(0, MR_tempr2, 0) = MR_tfield(0, MR_tempr3, 0);
	MR_tfield(0, MR_tempr2, 1) = MR_tfield(0, MR_tempr3, 1);
	MR_tfield(0, MR_tempr2, 2) = MR_tfield(0, MR_tempr3, 2);
	MR_tfield(0, MR_tempr2, 3) = MR_tfield(0, MR_tempr3, 3);
	MR_tfield(0, MR_tempr2, 4) = MR_tfield(0, MR_tempr3, 4);
	MR_tfield(0, MR_tempr2, 5) = MR_tfield(0, MR_tempr3, 5);
	MR_tfield(0, MR_tempr2, 6) = MR_tfield(0, MR_tempr3, 6);
	MR_tfield(0, MR_tempr2, 7) = MR_tfield(0, MR_tempr3, 7);
	MR_tfield(0, MR_tempr2, 8) = MR_tfield(0, MR_tempr3, 8);
	MR_tfield(0, MR_tempr2, 9) = MR_tfield(0, MR_tempr3, 9);
	MR_tfield(0, MR_tempr2, 10) = MR_tfield(0, MR_tempr3, 10);
	MR_tfield(0, MR_tempr2, 11) = MR_tfield(0, MR_tempr3, 11);
	MR_tfield(0, MR_tempr2, 12) = MR_tfield(0, MR_tempr3, 12);
	MR_tfield(0, MR_tempr2, 13) = MR_tfield(0, MR_tempr3, 13);
	MR_tfield(0, MR_tempr2, 14) = MR_tfield(0, MR_tempr3, 14);
	MR_tfield(0, MR_tempr2, 15) = MR_tfield(0, MR_tempr3, 15);
	MR_tfield(0, MR_tempr2, 16) = MR_tfield(0, MR_tempr3, 16);
	MR_tfield(0, MR_tempr2, 17) = MR_tfield(0, MR_tempr3, 17);
	MR_tfield(0, MR_tempr2, 18) = MR_tfield(0, MR_tempr3, 18);
	MR_tfield(0, MR_tempr2, 19) = MR_tfield(0, MR_tempr3, 19);
	MR_tfield(0, MR_tempr2, 20) = MR_tfield(0, MR_tempr3, 20);
	MR_tfield(0, MR_tempr2, 21) = MR_tfield(0, MR_tempr3, 21);
	MR_tfield(0, MR_tempr2, 22) = MR_tfield(0, MR_tempr3, 22);
	MR_tfield(0, MR_tempr2, 23) = ((MR_Integer) MR_tfield(0, MR_tempr3, 23) + (MR_Integer) 1);
	MR_tfield(0, MR_tempr2, 24) = MR_tfield(0, MR_tempr3, 24);
	MR_sv(1) = MR_tfield(1, MR_tempr1, 5);
	MR_r1 = MR_tfield(1, MR_tempr1, 4);
	MR_r3 = MR_tempr2;
	}
	MR_np_localcall_lab(hlds__hlds_statistics__accumulate_proc_stats_in_goal_5_0,
		hlds__hlds_statistics__accumulate_proc_stats_in_goal_5_0_i89);
MR_def_label(hlds__hlds_statistics__accumulate_proc_stats_in_goal_5_0,89)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	MR_tempr2 = MR_r2;
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,3,2);
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_statistics, proc_stats);
	MR_r4 = (MR_Word) MR_TAG_COMMON(0,5,2);
	MR_r5 = MR_sv(1);
	MR_r6 = MR_tempr1;
	MR_r7 = MR_tempr2;
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(list__foldl2_6_0);
	}
MR_def_label(hlds__hlds_statistics__accumulate_proc_stats_in_goal_5_0,87)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r4,0)) {
		MR_GOTO_LAB(hlds__hlds_statistics__accumulate_proc_stats_in_goal_5_0_i94);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 25);
	MR_tempr2 = MR_r3;
	MR_tfield(0, MR_tempr1, 0) = MR_tfield(0, MR_tempr2, 0);
	MR_tfield(0, MR_tempr1, 1) = MR_tfield(0, MR_tempr2, 1);
	MR_tfield(0, MR_tempr1, 2) = MR_tfield(0, MR_tempr2, 2);
	MR_tfield(0, MR_tempr1, 3) = MR_tfield(0, MR_tempr2, 3);
	MR_tfield(0, MR_tempr1, 4) = MR_tfield(0, MR_tempr2, 4);
	MR_tfield(0, MR_tempr1, 5) = MR_tfield(0, MR_tempr2, 5);
	MR_tfield(0, MR_tempr1, 6) = MR_tfield(0, MR_tempr2, 6);
	MR_tfield(0, MR_tempr1, 7) = MR_tfield(0, MR_tempr2, 7);
	MR_tfield(0, MR_tempr1, 8) = MR_tfield(0, MR_tempr2, 8);
	MR_tfield(0, MR_tempr1, 9) = MR_tfield(0, MR_tempr2, 9);
	MR_tfield(0, MR_tempr1, 10) = MR_tfield(0, MR_tempr2, 10);
	MR_tfield(0, MR_tempr1, 11) = MR_tfield(0, MR_tempr2, 11);
	MR_tfield(0, MR_tempr1, 12) = MR_tfield(0, MR_tempr2, 12);
	MR_tfield(0, MR_tempr1, 13) = MR_tfield(0, MR_tempr2, 13);
	MR_tfield(0, MR_tempr1, 14) = MR_tfield(0, MR_tempr2, 14);
	MR_tfield(0, MR_tempr1, 15) = MR_tfield(0, MR_tempr2, 15);
	MR_tfield(0, MR_tempr1, 16) = MR_tfield(0, MR_tempr2, 16);
	MR_tfield(0, MR_tempr1, 17) = MR_tfield(0, MR_tempr2, 17);
	MR_tfield(0, MR_tempr1, 18) = MR_tfield(0, MR_tempr2, 18);
	MR_tfield(0, MR_tempr1, 19) = MR_tfield(0, MR_tempr2, 19);
	MR_tfield(0, MR_tempr1, 20) = MR_tfield(0, MR_tempr2, 20);
	MR_tfield(0, MR_tempr1, 21) = MR_tfield(0, MR_tempr2, 21);
	MR_tfield(0, MR_tempr1, 22) = ((MR_Integer) MR_tfield(0, MR_tempr2, 22) + (MR_Integer) 1);
	MR_tfield(0, MR_tempr1, 23) = MR_tfield(0, MR_tempr2, 23);
	MR_tfield(0, MR_tempr1, 24) = MR_tfield(0, MR_tempr2, 24);
	MR_tempr3 = MR_r4;
	MR_sv(1) = MR_tfield(0, MR_tempr3, 1);
	MR_r1 = MR_tfield(0, MR_tempr3, 0);
	MR_r3 = MR_tempr1;
	}
	MR_np_localcall_lab(hlds__hlds_statistics__accumulate_proc_stats_in_goal_5_0,
		hlds__hlds_statistics__accumulate_proc_stats_in_goal_5_0_i96);
MR_def_label(hlds__hlds_statistics__accumulate_proc_stats_in_goal_5_0,96)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	MR_succip_word = MR_sv(5);
	MR_GOTO_LAB(hlds__hlds_statistics__accumulate_proc_stats_in_goal_5_0_i237);
	}
MR_def_label(hlds__hlds_statistics__accumulate_proc_stats_in_goal_5_0,94)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 25);
	MR_tempr2 = MR_r3;
	MR_tfield(0, MR_tempr1, 0) = MR_tfield(0, MR_tempr2, 0);
	MR_tfield(0, MR_tempr1, 1) = MR_tfield(0, MR_tempr2, 1);
	MR_tfield(0, MR_tempr1, 2) = MR_tfield(0, MR_tempr2, 2);
	MR_tfield(0, MR_tempr1, 3) = MR_tfield(0, MR_tempr2, 3);
	MR_tfield(0, MR_tempr1, 4) = MR_tfield(0, MR_tempr2, 4);
	MR_tfield(0, MR_tempr1, 5) = MR_tfield(0, MR_tempr2, 5);
	MR_tfield(0, MR_tempr1, 6) = MR_tfield(0, MR_tempr2, 6);
	MR_tfield(0, MR_tempr1, 7) = MR_tfield(0, MR_tempr2, 7);
	MR_tfield(0, MR_tempr1, 8) = MR_tfield(0, MR_tempr2, 8);
	MR_tfield(0, MR_tempr1, 9) = MR_tfield(0, MR_tempr2, 9);
	MR_tfield(0, MR_tempr1, 10) = MR_tfield(0, MR_tempr2, 10);
	MR_tfield(0, MR_tempr1, 11) = MR_tfield(0, MR_tempr2, 11);
	MR_tfield(0, MR_tempr1, 12) = MR_tfield(0, MR_tempr2, 12);
	MR_tfield(0, MR_tempr1, 13) = MR_tfield(0, MR_tempr2, 13);
	MR_tfield(0, MR_tempr1, 14) = MR_tfield(0, MR_tempr2, 14);
	MR_tfield(0, MR_tempr1, 15) = MR_tfield(0, MR_tempr2, 15);
	MR_tfield(0, MR_tempr1, 16) = MR_tfield(0, MR_tempr2, 16);
	MR_tfield(0, MR_tempr1, 17) = MR_tfield(0, MR_tempr2, 17);
	MR_tfield(0, MR_tempr1, 18) = MR_tfield(0, MR_tempr2, 18);
	MR_tfield(0, MR_tempr1, 19) = MR_tfield(0, MR_tempr2, 19);
	MR_tfield(0, MR_tempr1, 20) = MR_tfield(0, MR_tempr2, 20);
	MR_tfield(0, MR_tempr1, 21) = MR_tfield(0, MR_tempr2, 21);
	MR_tfield(0, MR_tempr1, 22) = MR_tfield(0, MR_tempr2, 22);
	MR_tfield(0, MR_tempr1, 23) = MR_tfield(0, MR_tempr2, 23);
	MR_tfield(0, MR_tempr1, 24) = ((MR_Integer) MR_tfield(0, MR_tempr2, 24) + (MR_Integer) 1);
	MR_r1 = MR_tfield(2, MR_r4, 2);
	MR_r3 = MR_tempr1;
	MR_succip_word = MR_sv(5);
	MR_GOTO_LAB(hlds__hlds_statistics__accumulate_proc_stats_in_goal_5_0_i237);
	}
MR_def_label(hlds__hlds_statistics__accumulate_proc_stats_in_goal_5_0,85)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r5;
	MR_sv(1) = MR_tfield(3, MR_tempr2, 3);
	MR_sv(3) = MR_r3;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,3,0);
	MR_tempr1 = MR_r2;
	MR_r2 = MR_tfield(3, MR_tempr2, 1);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(set_tree234__insert_3_0,
		hlds__hlds_statistics__accumulate_proc_stats_in_goal_5_0_i101);
MR_def_label(hlds__hlds_statistics__accumulate_proc_stats_in_goal_5_0,101)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 25);
	MR_r3 = MR_tempr1;
	MR_tempr3 = MR_sv(3);
	MR_tfield(0, MR_tempr1, 0) = MR_tfield(0, MR_tempr3, 0);
	MR_tfield(0, MR_tempr1, 1) = MR_tfield(0, MR_tempr3, 1);
	MR_tfield(0, MR_tempr1, 2) = MR_tfield(0, MR_tempr3, 2);
	MR_tfield(0, MR_tempr1, 3) = MR_tfield(0, MR_tempr3, 3);
	MR_tfield(0, MR_tempr1, 4) = MR_tfield(0, MR_tempr3, 4);
	MR_tfield(0, MR_tempr1, 5) = MR_tfield(0, MR_tempr3, 5);
	MR_tfield(0, MR_tempr1, 6) = MR_tfield(0, MR_tempr3, 6);
	MR_tfield(0, MR_tempr1, 7) = MR_tfield(0, MR_tempr3, 7);
	MR_tfield(0, MR_tempr1, 8) = MR_tfield(0, MR_tempr3, 8);
	MR_tfield(0, MR_tempr1, 9) = MR_tfield(0, MR_tempr3, 9);
	MR_tfield(0, MR_tempr1, 10) = MR_tfield(0, MR_tempr3, 10);
	MR_tfield(0, MR_tempr1, 11) = MR_tfield(0, MR_tempr3, 11);
	MR_tfield(0, MR_tempr1, 12) = MR_tfield(0, MR_tempr3, 12);
	MR_tfield(0, MR_tempr1, 13) = MR_tfield(0, MR_tempr3, 13);
	MR_tfield(0, MR_tempr1, 14) = MR_tfield(0, MR_tempr3, 14);
	MR_tfield(0, MR_tempr1, 15) = MR_tfield(0, MR_tempr3, 15);
	MR_tfield(0, MR_tempr1, 16) = MR_tfield(0, MR_tempr3, 16);
	MR_tfield(0, MR_tempr1, 17) = ((MR_Integer) MR_tfield(0, MR_tempr3, 17) + (MR_Integer) 1);
	MR_tfield(0, MR_tempr1, 18) = MR_tfield(0, MR_tempr3, 18);
	MR_tfield(0, MR_tempr1, 19) = MR_tfield(0, MR_tempr3, 19);
	MR_tfield(0, MR_tempr1, 20) = MR_tfield(0, MR_tempr3, 20);
	MR_tfield(0, MR_tempr1, 21) = MR_tfield(0, MR_tempr3, 21);
	MR_tfield(0, MR_tempr1, 22) = MR_tfield(0, MR_tempr3, 22);
	MR_tfield(0, MR_tempr1, 23) = MR_tfield(0, MR_tempr3, 23);
	MR_tfield(0, MR_tempr1, 24) = MR_tfield(0, MR_tempr3, 24);
	MR_tempr2 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr2;
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(hlds__hlds_statistics__accumulate_proc_stats_in_switch_5_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__hlds_statistics_module3)
	MR_init_entry1(hlds__hlds_statistics__accumulate_proc_stats_in_plain_conj_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__hlds_statistics__accumulate_proc_stats_in_plain_conj_5_0);
	MR_init_label3(hlds__hlds_statistics__accumulate_proc_stats_in_plain_conj_5_0,11,3,5)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'accumulate_proc_stats_in_plain_conj'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__hlds_statistics__accumulate_proc_stats_in_plain_conj_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
MR_def_label(hlds__hlds_statistics__accumulate_proc_stats_in_plain_conj_5_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(hlds__hlds_statistics__accumulate_proc_stats_in_plain_conj_5_0_i3);
	}
	MR_r1 = MR_r2;
	MR_r2 = MR_r3;
	MR_decr_sp_and_return(2);
MR_def_label(hlds__hlds_statistics__accumulate_proc_stats_in_plain_conj_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 25);
	MR_tempr2 = MR_r3;
	MR_tfield(0, MR_tempr1, 0) = MR_tfield(0, MR_tempr2, 0);
	MR_tfield(0, MR_tempr1, 1) = MR_tfield(0, MR_tempr2, 1);
	MR_tfield(0, MR_tempr1, 2) = MR_tfield(0, MR_tempr2, 2);
	MR_tfield(0, MR_tempr1, 3) = MR_tfield(0, MR_tempr2, 3);
	MR_tfield(0, MR_tempr1, 4) = MR_tfield(0, MR_tempr2, 4);
	MR_tfield(0, MR_tempr1, 5) = MR_tfield(0, MR_tempr2, 5);
	MR_tfield(0, MR_tempr1, 6) = MR_tfield(0, MR_tempr2, 6);
	MR_tfield(0, MR_tempr1, 7) = MR_tfield(0, MR_tempr2, 7);
	MR_tfield(0, MR_tempr1, 8) = MR_tfield(0, MR_tempr2, 8);
	MR_tfield(0, MR_tempr1, 9) = MR_tfield(0, MR_tempr2, 9);
	MR_tfield(0, MR_tempr1, 10) = MR_tfield(0, MR_tempr2, 10);
	MR_tfield(0, MR_tempr1, 11) = MR_tfield(0, MR_tempr2, 11);
	MR_tfield(0, MR_tempr1, 12) = ((MR_Integer) MR_tfield(0, MR_tempr2, 12) + (MR_Integer) 1);
	MR_tfield(0, MR_tempr1, 13) = MR_tfield(0, MR_tempr2, 13);
	MR_tfield(0, MR_tempr1, 14) = MR_tfield(0, MR_tempr2, 14);
	MR_tfield(0, MR_tempr1, 15) = MR_tfield(0, MR_tempr2, 15);
	MR_tfield(0, MR_tempr1, 16) = MR_tfield(0, MR_tempr2, 16);
	MR_tfield(0, MR_tempr1, 17) = MR_tfield(0, MR_tempr2, 17);
	MR_tfield(0, MR_tempr1, 18) = MR_tfield(0, MR_tempr2, 18);
	MR_tfield(0, MR_tempr1, 19) = MR_tfield(0, MR_tempr2, 19);
	MR_tfield(0, MR_tempr1, 20) = MR_tfield(0, MR_tempr2, 20);
	MR_tfield(0, MR_tempr1, 21) = MR_tfield(0, MR_tempr2, 21);
	MR_tfield(0, MR_tempr1, 22) = MR_tfield(0, MR_tempr2, 22);
	MR_tfield(0, MR_tempr1, 23) = MR_tfield(0, MR_tempr2, 23);
	MR_tfield(0, MR_tempr1, 24) = MR_tfield(0, MR_tempr2, 24);
	MR_sv(1) = MR_tfield(1, MR_r1, 1);
	MR_r1 = MR_tfield(1, MR_r1, 0);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_statistics__accumulate_proc_stats_in_goal_5_0,
		hlds__hlds_statistics__accumulate_proc_stats_in_plain_conj_5_0_i5);
MR_def_label(hlds__hlds_statistics__accumulate_proc_stats_in_plain_conj_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	MR_succip_word = MR_sv(2);
	MR_GOTO_LAB(hlds__hlds_statistics__accumulate_proc_stats_in_plain_conj_5_0_i11);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__hlds_statistics_module4)
	MR_init_entry1(hlds__hlds_statistics__accumulate_proc_stats_in_parallel_conj_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__hlds_statistics__accumulate_proc_stats_in_parallel_conj_5_0);
	MR_init_label3(hlds__hlds_statistics__accumulate_proc_stats_in_parallel_conj_5_0,11,3,5)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'accumulate_proc_stats_in_parallel_conj'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__hlds_statistics__accumulate_proc_stats_in_parallel_conj_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
MR_def_label(hlds__hlds_statistics__accumulate_proc_stats_in_parallel_conj_5_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(hlds__hlds_statistics__accumulate_proc_stats_in_parallel_conj_5_0_i3);
	}
	MR_r1 = MR_r2;
	MR_r2 = MR_r3;
	MR_decr_sp_and_return(2);
MR_def_label(hlds__hlds_statistics__accumulate_proc_stats_in_parallel_conj_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 25);
	MR_tempr2 = MR_r3;
	MR_tfield(0, MR_tempr1, 0) = MR_tfield(0, MR_tempr2, 0);
	MR_tfield(0, MR_tempr1, 1) = MR_tfield(0, MR_tempr2, 1);
	MR_tfield(0, MR_tempr1, 2) = MR_tfield(0, MR_tempr2, 2);
	MR_tfield(0, MR_tempr1, 3) = MR_tfield(0, MR_tempr2, 3);
	MR_tfield(0, MR_tempr1, 4) = MR_tfield(0, MR_tempr2, 4);
	MR_tfield(0, MR_tempr1, 5) = MR_tfield(0, MR_tempr2, 5);
	MR_tfield(0, MR_tempr1, 6) = MR_tfield(0, MR_tempr2, 6);
	MR_tfield(0, MR_tempr1, 7) = MR_tfield(0, MR_tempr2, 7);
	MR_tfield(0, MR_tempr1, 8) = MR_tfield(0, MR_tempr2, 8);
	MR_tfield(0, MR_tempr1, 9) = MR_tfield(0, MR_tempr2, 9);
	MR_tfield(0, MR_tempr1, 10) = MR_tfield(0, MR_tempr2, 10);
	MR_tfield(0, MR_tempr1, 11) = MR_tfield(0, MR_tempr2, 11);
	MR_tfield(0, MR_tempr1, 12) = MR_tfield(0, MR_tempr2, 12);
	MR_tfield(0, MR_tempr1, 13) = MR_tfield(0, MR_tempr2, 13);
	MR_tfield(0, MR_tempr1, 14) = ((MR_Integer) MR_tfield(0, MR_tempr2, 14) + (MR_Integer) 1);
	MR_tfield(0, MR_tempr1, 15) = MR_tfield(0, MR_tempr2, 15);
	MR_tfield(0, MR_tempr1, 16) = MR_tfield(0, MR_tempr2, 16);
	MR_tfield(0, MR_tempr1, 17) = MR_tfield(0, MR_tempr2, 17);
	MR_tfield(0, MR_tempr1, 18) = MR_tfield(0, MR_tempr2, 18);
	MR_tfield(0, MR_tempr1, 19) = MR_tfield(0, MR_tempr2, 19);
	MR_tfield(0, MR_tempr1, 20) = MR_tfield(0, MR_tempr2, 20);
	MR_tfield(0, MR_tempr1, 21) = MR_tfield(0, MR_tempr2, 21);
	MR_tfield(0, MR_tempr1, 22) = MR_tfield(0, MR_tempr2, 22);
	MR_tfield(0, MR_tempr1, 23) = MR_tfield(0, MR_tempr2, 23);
	MR_tfield(0, MR_tempr1, 24) = MR_tfield(0, MR_tempr2, 24);
	MR_sv(1) = MR_tfield(1, MR_r1, 1);
	MR_r1 = MR_tfield(1, MR_r1, 0);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_statistics__accumulate_proc_stats_in_goal_5_0,
		hlds__hlds_statistics__accumulate_proc_stats_in_parallel_conj_5_0_i5);
MR_def_label(hlds__hlds_statistics__accumulate_proc_stats_in_parallel_conj_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	MR_succip_word = MR_sv(2);
	MR_GOTO_LAB(hlds__hlds_statistics__accumulate_proc_stats_in_parallel_conj_5_0_i11);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__hlds_statistics_module5)
	MR_init_entry1(hlds__hlds_statistics__accumulate_proc_stats_in_disj_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__hlds_statistics__accumulate_proc_stats_in_disj_5_0);
	MR_init_label3(hlds__hlds_statistics__accumulate_proc_stats_in_disj_5_0,11,3,5)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'accumulate_proc_stats_in_disj'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__hlds_statistics__accumulate_proc_stats_in_disj_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
MR_def_label(hlds__hlds_statistics__accumulate_proc_stats_in_disj_5_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(hlds__hlds_statistics__accumulate_proc_stats_in_disj_5_0_i3);
	}
	MR_r1 = MR_r2;
	MR_r2 = MR_r3;
	MR_decr_sp_and_return(2);
MR_def_label(hlds__hlds_statistics__accumulate_proc_stats_in_disj_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 25);
	MR_tempr2 = MR_r3;
	MR_tfield(0, MR_tempr1, 0) = MR_tfield(0, MR_tempr2, 0);
	MR_tfield(0, MR_tempr1, 1) = MR_tfield(0, MR_tempr2, 1);
	MR_tfield(0, MR_tempr1, 2) = MR_tfield(0, MR_tempr2, 2);
	MR_tfield(0, MR_tempr1, 3) = MR_tfield(0, MR_tempr2, 3);
	MR_tfield(0, MR_tempr1, 4) = MR_tfield(0, MR_tempr2, 4);
	MR_tfield(0, MR_tempr1, 5) = MR_tfield(0, MR_tempr2, 5);
	MR_tfield(0, MR_tempr1, 6) = MR_tfield(0, MR_tempr2, 6);
	MR_tfield(0, MR_tempr1, 7) = MR_tfield(0, MR_tempr2, 7);
	MR_tfield(0, MR_tempr1, 8) = MR_tfield(0, MR_tempr2, 8);
	MR_tfield(0, MR_tempr1, 9) = MR_tfield(0, MR_tempr2, 9);
	MR_tfield(0, MR_tempr1, 10) = MR_tfield(0, MR_tempr2, 10);
	MR_tfield(0, MR_tempr1, 11) = MR_tfield(0, MR_tempr2, 11);
	MR_tfield(0, MR_tempr1, 12) = MR_tfield(0, MR_tempr2, 12);
	MR_tfield(0, MR_tempr1, 13) = MR_tfield(0, MR_tempr2, 13);
	MR_tfield(0, MR_tempr1, 14) = MR_tfield(0, MR_tempr2, 14);
	MR_tfield(0, MR_tempr1, 15) = MR_tfield(0, MR_tempr2, 15);
	MR_tfield(0, MR_tempr1, 16) = ((MR_Integer) MR_tfield(0, MR_tempr2, 16) + (MR_Integer) 1);
	MR_tfield(0, MR_tempr1, 17) = MR_tfield(0, MR_tempr2, 17);
	MR_tfield(0, MR_tempr1, 18) = MR_tfield(0, MR_tempr2, 18);
	MR_tfield(0, MR_tempr1, 19) = MR_tfield(0, MR_tempr2, 19);
	MR_tfield(0, MR_tempr1, 20) = MR_tfield(0, MR_tempr2, 20);
	MR_tfield(0, MR_tempr1, 21) = MR_tfield(0, MR_tempr2, 21);
	MR_tfield(0, MR_tempr1, 22) = MR_tfield(0, MR_tempr2, 22);
	MR_tfield(0, MR_tempr1, 23) = MR_tfield(0, MR_tempr2, 23);
	MR_tfield(0, MR_tempr1, 24) = MR_tfield(0, MR_tempr2, 24);
	MR_sv(1) = MR_tfield(1, MR_r1, 1);
	MR_r1 = MR_tfield(1, MR_r1, 0);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_statistics__accumulate_proc_stats_in_goal_5_0,
		hlds__hlds_statistics__accumulate_proc_stats_in_disj_5_0_i5);
MR_def_label(hlds__hlds_statistics__accumulate_proc_stats_in_disj_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	MR_succip_word = MR_sv(2);
	MR_GOTO_LAB(hlds__hlds_statistics__accumulate_proc_stats_in_disj_5_0_i11);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__hlds_statistics_module6)
	MR_init_entry1(hlds__hlds_statistics__accumulate_proc_stats_in_switch_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__hlds_statistics__accumulate_proc_stats_in_switch_5_0);
	MR_init_label3(hlds__hlds_statistics__accumulate_proc_stats_in_switch_5_0,11,3,5)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'accumulate_proc_stats_in_switch'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__hlds_statistics__accumulate_proc_stats_in_switch_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
MR_def_label(hlds__hlds_statistics__accumulate_proc_stats_in_switch_5_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(hlds__hlds_statistics__accumulate_proc_stats_in_switch_5_0_i3);
	}
	MR_r1 = MR_r2;
	MR_r2 = MR_r3;
	MR_decr_sp_and_return(2);
MR_def_label(hlds__hlds_statistics__accumulate_proc_stats_in_switch_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 25);
	MR_tempr2 = MR_r3;
	MR_tfield(0, MR_tempr1, 0) = MR_tfield(0, MR_tempr2, 0);
	MR_tfield(0, MR_tempr1, 1) = MR_tfield(0, MR_tempr2, 1);
	MR_tfield(0, MR_tempr1, 2) = MR_tfield(0, MR_tempr2, 2);
	MR_tfield(0, MR_tempr1, 3) = MR_tfield(0, MR_tempr2, 3);
	MR_tfield(0, MR_tempr1, 4) = MR_tfield(0, MR_tempr2, 4);
	MR_tfield(0, MR_tempr1, 5) = MR_tfield(0, MR_tempr2, 5);
	MR_tfield(0, MR_tempr1, 6) = MR_tfield(0, MR_tempr2, 6);
	MR_tfield(0, MR_tempr1, 7) = MR_tfield(0, MR_tempr2, 7);
	MR_tfield(0, MR_tempr1, 8) = MR_tfield(0, MR_tempr2, 8);
	MR_tfield(0, MR_tempr1, 9) = MR_tfield(0, MR_tempr2, 9);
	MR_tfield(0, MR_tempr1, 10) = MR_tfield(0, MR_tempr2, 10);
	MR_tfield(0, MR_tempr1, 11) = MR_tfield(0, MR_tempr2, 11);
	MR_tfield(0, MR_tempr1, 12) = MR_tfield(0, MR_tempr2, 12);
	MR_tfield(0, MR_tempr1, 13) = MR_tfield(0, MR_tempr2, 13);
	MR_tfield(0, MR_tempr1, 14) = MR_tfield(0, MR_tempr2, 14);
	MR_tfield(0, MR_tempr1, 15) = MR_tfield(0, MR_tempr2, 15);
	MR_tfield(0, MR_tempr1, 16) = MR_tfield(0, MR_tempr2, 16);
	MR_tfield(0, MR_tempr1, 17) = MR_tfield(0, MR_tempr2, 17);
	MR_tfield(0, MR_tempr1, 18) = ((MR_Integer) MR_tfield(0, MR_tempr2, 18) + (MR_Integer) 1);
	MR_tfield(0, MR_tempr1, 19) = MR_tfield(0, MR_tempr2, 19);
	MR_tfield(0, MR_tempr1, 20) = MR_tfield(0, MR_tempr2, 20);
	MR_tfield(0, MR_tempr1, 21) = MR_tfield(0, MR_tempr2, 21);
	MR_tfield(0, MR_tempr1, 22) = MR_tfield(0, MR_tempr2, 22);
	MR_tfield(0, MR_tempr1, 23) = MR_tfield(0, MR_tempr2, 23);
	MR_tfield(0, MR_tempr1, 24) = MR_tfield(0, MR_tempr2, 24);
	MR_sv(1) = MR_tfield(1, MR_r1, 1);
	MR_r1 = MR_tfield(0, MR_tfield(1, MR_r1, 0), 2);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_statistics__accumulate_proc_stats_in_goal_5_0,
		hlds__hlds_statistics__accumulate_proc_stats_in_switch_5_0_i5);
MR_def_label(hlds__hlds_statistics__accumulate_proc_stats_in_switch_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	MR_succip_word = MR_sv(2);
	MR_GOTO_LAB(hlds__hlds_statistics__accumulate_proc_stats_in_switch_5_0_i11);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__hlds_statistics_module7)
	MR_init_entry1(hlds__hlds_statistics__write_proc_stats_for_proc_7_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__hlds_statistics__write_proc_stats_for_proc_7_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'write_proc_stats_for_proc'/7 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__hlds_statistics__write_proc_stats_for_proc_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r3;
	MR_r3 = MR_r4;
	MR_r4 = MR_r5;
	MR_np_tailcall_ent(f_104_108_100_115_95_95_104_108_100_115_95_115_116_97_116_105_115_116_105_99_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_112_114_111_99_95_115_116_97_116_115_95_102_111_114_95_112_114_111_99_95_95_91_50_93_95_48_7_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__hlds_statistics_module8)
	MR_init_entry1(__Unify___hlds__hlds_statistics__proc_stats_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___hlds__hlds_statistics__proc_stats_0_0);
	MR_init_label2(__Unify___hlds__hlds_statistics__proc_stats_0_0,4,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___hlds__hlds_statistics__proc_stats_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___hlds__hlds_statistics__proc_stats_0_0_i4);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_tempr1;
	MR_tempr2 = MR_r2;
	MR_sv(2) = MR_tempr2;
	MR_r1 = MR_tfield(0, MR_tempr1, 0);
	MR_r2 = MR_tfield(0, MR_tempr2, 0);
	if ((MR_r1 != MR_r2)) {
		MR_GOTO_LAB(__Unify___hlds__hlds_statistics__proc_stats_0_0_i1);
	}
	MR_r1 = MR_tfield(0, MR_tempr1, 1);
	MR_r2 = MR_tfield(0, MR_tempr2, 1);
	if ((MR_r1 != MR_r2)) {
		MR_GOTO_LAB(__Unify___hlds__hlds_statistics__proc_stats_0_0_i1);
	}
	MR_r1 = MR_tfield(0, MR_tempr1, 2);
	MR_r2 = MR_tfield(0, MR_tempr2, 2);
	if ((MR_r1 != MR_r2)) {
		MR_GOTO_LAB(__Unify___hlds__hlds_statistics__proc_stats_0_0_i1);
	}
	MR_r1 = MR_tfield(0, MR_tempr1, 3);
	MR_r2 = MR_tfield(0, MR_tempr2, 3);
	if ((MR_r1 != MR_r2)) {
		MR_GOTO_LAB(__Unify___hlds__hlds_statistics__proc_stats_0_0_i1);
	}
	MR_r1 = MR_tfield(0, MR_tempr1, 4);
	MR_r2 = MR_tfield(0, MR_tempr2, 4);
	if ((MR_r1 != MR_r2)) {
		MR_GOTO_LAB(__Unify___hlds__hlds_statistics__proc_stats_0_0_i1);
	}
	MR_r1 = MR_tfield(0, MR_tempr1, 5);
	MR_r2 = MR_tfield(0, MR_tempr2, 5);
	if ((MR_r1 != MR_r2)) {
		MR_GOTO_LAB(__Unify___hlds__hlds_statistics__proc_stats_0_0_i1);
	}
	MR_r1 = MR_tfield(0, MR_tempr1, 6);
	MR_r2 = MR_tfield(0, MR_tempr2, 6);
	if ((MR_r1 != MR_r2)) {
		MR_GOTO_LAB(__Unify___hlds__hlds_statistics__proc_stats_0_0_i1);
	}
	MR_r1 = MR_tfield(0, MR_tempr1, 7);
	MR_r2 = MR_tfield(0, MR_tempr2, 7);
	if ((MR_r1 != MR_r2)) {
		MR_GOTO_LAB(__Unify___hlds__hlds_statistics__proc_stats_0_0_i1);
	}
	MR_r1 = MR_tfield(0, MR_tempr1, 8);
	MR_r2 = MR_tfield(0, MR_tempr2, 8);
	if ((MR_r1 != MR_r2)) {
		MR_GOTO_LAB(__Unify___hlds__hlds_statistics__proc_stats_0_0_i1);
	}
	MR_r1 = MR_tfield(0, MR_tempr1, 9);
	MR_r2 = MR_tfield(0, MR_tempr2, 9);
	if ((MR_r1 != MR_r2)) {
		MR_GOTO_LAB(__Unify___hlds__hlds_statistics__proc_stats_0_0_i1);
	}
	MR_r1 = MR_tfield(0, MR_tempr1, 10);
	MR_r2 = MR_tfield(0, MR_tempr2, 10);
	if ((MR_r1 != MR_r2)) {
		MR_GOTO_LAB(__Unify___hlds__hlds_statistics__proc_stats_0_0_i1);
	}
	MR_r1 = MR_tfield(0, MR_tempr1, 11);
	MR_r2 = MR_tfield(0, MR_tempr2, 11);
	if ((MR_r1 != MR_r2)) {
		MR_GOTO_LAB(__Unify___hlds__hlds_statistics__proc_stats_0_0_i1);
	}
	MR_r1 = MR_tfield(0, MR_tempr1, 12);
	MR_r2 = MR_tfield(0, MR_tempr2, 12);
	if ((MR_r1 != MR_r2)) {
		MR_GOTO_LAB(__Unify___hlds__hlds_statistics__proc_stats_0_0_i1);
	}
	MR_r1 = MR_tfield(0, MR_tempr1, 13);
	MR_r2 = MR_tfield(0, MR_tempr2, 13);
	if ((MR_r1 != MR_r2)) {
		MR_GOTO_LAB(__Unify___hlds__hlds_statistics__proc_stats_0_0_i1);
	}
	MR_r1 = MR_tfield(0, MR_tempr1, 14);
	MR_r2 = MR_tfield(0, MR_tempr2, 14);
	if ((MR_r1 != MR_r2)) {
		MR_GOTO_LAB(__Unify___hlds__hlds_statistics__proc_stats_0_0_i1);
	}
	MR_r1 = MR_tfield(0, MR_tempr1, 15);
	MR_r2 = MR_tfield(0, MR_tempr2, 15);
	if ((MR_r1 != MR_r2)) {
		MR_GOTO_LAB(__Unify___hlds__hlds_statistics__proc_stats_0_0_i1);
	}
	MR_r1 = MR_tfield(0, MR_tempr1, 16);
	MR_r2 = MR_tfield(0, MR_tempr2, 16);
	if ((MR_r1 != MR_r2)) {
		MR_GOTO_LAB(__Unify___hlds__hlds_statistics__proc_stats_0_0_i1);
	}
	MR_r1 = MR_tfield(0, MR_tempr1, 17);
	MR_r2 = MR_tfield(0, MR_tempr2, 17);
	if ((MR_r1 != MR_r2)) {
		MR_GOTO_LAB(__Unify___hlds__hlds_statistics__proc_stats_0_0_i1);
	}
	MR_r1 = MR_tfield(0, MR_tempr1, 18);
	MR_r2 = MR_tfield(0, MR_tempr2, 18);
	if ((MR_r1 != MR_r2)) {
		MR_GOTO_LAB(__Unify___hlds__hlds_statistics__proc_stats_0_0_i1);
	}
	MR_r1 = MR_tfield(0, MR_tempr1, 19);
	MR_r2 = MR_tfield(0, MR_tempr2, 19);
	if ((MR_r1 != MR_r2)) {
		MR_GOTO_LAB(__Unify___hlds__hlds_statistics__proc_stats_0_0_i1);
	}
	MR_r1 = MR_tfield(0, MR_tempr1, 20);
	MR_r2 = MR_tfield(0, MR_tempr2, 20);
	if ((MR_r1 != MR_r2)) {
		MR_GOTO_LAB(__Unify___hlds__hlds_statistics__proc_stats_0_0_i1);
	}
	MR_r1 = MR_tfield(0, MR_tempr1, 21);
	MR_r2 = MR_tfield(0, MR_tempr2, 21);
	if ((MR_r1 != MR_r2)) {
		MR_GOTO_LAB(__Unify___hlds__hlds_statistics__proc_stats_0_0_i1);
	}
	MR_r1 = MR_tfield(0, MR_tempr1, 22);
	MR_r2 = MR_tfield(0, MR_tempr2, 22);
	if ((MR_r1 != MR_r2)) {
		MR_GOTO_LAB(__Unify___hlds__hlds_statistics__proc_stats_0_0_i1);
	}
	MR_r1 = MR_tfield(0, MR_tempr1, 23);
	MR_r2 = MR_tfield(0, MR_tempr2, 23);
	if ((MR_r1 != MR_r2)) {
		MR_GOTO_LAB(__Unify___hlds__hlds_statistics__proc_stats_0_0_i1);
	}
	MR_r1 = MR_tfield(0, MR_tempr1, 24);
	MR_r2 = MR_tfield(0, MR_tempr2, 24);
	MR_r1 = (MR_r1 == MR_r2);
	MR_decr_sp(2);
	MR_proceed();
	}
MR_def_label(__Unify___hlds__hlds_statistics__proc_stats_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp(2);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___hlds__hlds_statistics__proc_stats_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp(2);
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(private_builtin__builtin_compare_int_3_0);

MR_BEGIN_MODULE(hlds__hlds_statistics_module9)
	MR_init_entry1(__Compare___hlds__hlds_statistics__proc_stats_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___hlds__hlds_statistics__proc_stats_0_0);
	MR_init_label10(__Compare___hlds__hlds_statistics__proc_stats_0_0,3,2,5,9,13,17,21,25,29,33)
	MR_init_label10(__Compare___hlds__hlds_statistics__proc_stats_0_0,37,41,45,49,53,57,61,65,69,73)
	MR_init_label7(__Compare___hlds__hlds_statistics__proc_stats_0_0,77,81,85,89,93,97,205)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___hlds__hlds_statistics__proc_stats_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___hlds__hlds_statistics__proc_stats_0_0_i3);
	}
	MR_incr_sp(49);
	MR_sv(49) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___hlds__hlds_statistics__proc_stats_0_0_i2);
MR_def_label(__Compare___hlds__hlds_statistics__proc_stats_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___hlds__hlds_statistics__proc_stats_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(2);
	MR_sv(48) = MR_tfield(0, MR_tempr5, 24);
	MR_sv(47) = MR_tfield(0, MR_tempr5, 23);
	MR_sv(46) = MR_tfield(0, MR_tempr5, 22);
	MR_sv(45) = MR_tfield(0, MR_tempr5, 21);
	MR_sv(44) = MR_tfield(0, MR_tempr5, 20);
	MR_sv(43) = MR_tfield(0, MR_tempr5, 19);
	MR_sv(42) = MR_tfield(0, MR_tempr5, 18);
	MR_sv(41) = MR_tfield(0, MR_tempr5, 17);
	MR_sv(40) = MR_tfield(0, MR_tempr5, 16);
	MR_sv(39) = MR_tfield(0, MR_tempr5, 15);
	MR_sv(38) = MR_tfield(0, MR_tempr5, 14);
	MR_sv(37) = MR_tfield(0, MR_tempr5, 13);
	MR_sv(36) = MR_tfield(0, MR_tempr5, 12);
	MR_sv(35) = MR_tfield(0, MR_tempr5, 11);
	MR_sv(34) = MR_tfield(0, MR_tempr5, 10);
	MR_sv(33) = MR_tfield(0, MR_tempr5, 9);
	MR_sv(32) = MR_tfield(0, MR_tempr5, 8);
	MR_sv(31) = MR_tfield(0, MR_tempr5, 7);
	MR_sv(30) = MR_tfield(0, MR_tempr5, 6);
	MR_sv(29) = MR_tfield(0, MR_tempr5, 5);
	MR_sv(28) = MR_tfield(0, MR_tempr5, 4);
	MR_sv(27) = MR_tfield(0, MR_tempr5, 3);
	MR_sv(26) = MR_tfield(0, MR_tempr5, 2);
	MR_sv(25) = MR_tfield(0, MR_tempr5, 1);
	MR_tempr6 = MR_sv(1);
	MR_sv(24) = MR_tfield(0, MR_tempr6, 24);
	MR_sv(23) = MR_tfield(0, MR_tempr6, 23);
	MR_sv(22) = MR_tfield(0, MR_tempr6, 22);
	MR_sv(21) = MR_tfield(0, MR_tempr6, 21);
	MR_sv(20) = MR_tfield(0, MR_tempr6, 20);
	MR_sv(19) = MR_tfield(0, MR_tempr6, 19);
	MR_sv(18) = MR_tfield(0, MR_tempr6, 18);
	MR_sv(17) = MR_tfield(0, MR_tempr6, 17);
	MR_sv(16) = MR_tfield(0, MR_tempr6, 16);
	MR_sv(15) = MR_tfield(0, MR_tempr6, 15);
	MR_sv(14) = MR_tfield(0, MR_tempr6, 14);
	MR_sv(13) = MR_tfield(0, MR_tempr6, 13);
	MR_sv(12) = MR_tfield(0, MR_tempr6, 12);
	MR_sv(11) = MR_tfield(0, MR_tempr6, 11);
	MR_sv(10) = MR_tfield(0, MR_tempr6, 10);
	MR_sv(9) = MR_tfield(0, MR_tempr6, 9);
	MR_sv(8) = MR_tfield(0, MR_tempr6, 8);
	MR_sv(7) = MR_tfield(0, MR_tempr6, 7);
	MR_sv(6) = MR_tfield(0, MR_tempr6, 6);
	MR_sv(5) = MR_tfield(0, MR_tempr6, 5);
	MR_sv(4) = MR_tfield(0, MR_tempr6, 4);
	MR_sv(3) = MR_tfield(0, MR_tempr6, 3);
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
		__Compare___hlds__hlds_statistics__proc_stats_0_0_i5);
MR_def_label(__Compare___hlds__hlds_statistics__proc_stats_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___hlds__hlds_statistics__proc_stats_0_0_i205);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(25);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___hlds__hlds_statistics__proc_stats_0_0_i9);
MR_def_label(__Compare___hlds__hlds_statistics__proc_stats_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___hlds__hlds_statistics__proc_stats_0_0_i205);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(26);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___hlds__hlds_statistics__proc_stats_0_0_i13);
MR_def_label(__Compare___hlds__hlds_statistics__proc_stats_0_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___hlds__hlds_statistics__proc_stats_0_0_i205);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(27);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___hlds__hlds_statistics__proc_stats_0_0_i17);
MR_def_label(__Compare___hlds__hlds_statistics__proc_stats_0_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___hlds__hlds_statistics__proc_stats_0_0_i205);
	}
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(28);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___hlds__hlds_statistics__proc_stats_0_0_i21);
MR_def_label(__Compare___hlds__hlds_statistics__proc_stats_0_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___hlds__hlds_statistics__proc_stats_0_0_i205);
	}
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(29);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___hlds__hlds_statistics__proc_stats_0_0_i25);
MR_def_label(__Compare___hlds__hlds_statistics__proc_stats_0_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___hlds__hlds_statistics__proc_stats_0_0_i205);
	}
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(30);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___hlds__hlds_statistics__proc_stats_0_0_i29);
MR_def_label(__Compare___hlds__hlds_statistics__proc_stats_0_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___hlds__hlds_statistics__proc_stats_0_0_i205);
	}
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(31);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___hlds__hlds_statistics__proc_stats_0_0_i33);
MR_def_label(__Compare___hlds__hlds_statistics__proc_stats_0_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___hlds__hlds_statistics__proc_stats_0_0_i205);
	}
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(32);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___hlds__hlds_statistics__proc_stats_0_0_i37);
MR_def_label(__Compare___hlds__hlds_statistics__proc_stats_0_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___hlds__hlds_statistics__proc_stats_0_0_i205);
	}
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(33);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___hlds__hlds_statistics__proc_stats_0_0_i41);
MR_def_label(__Compare___hlds__hlds_statistics__proc_stats_0_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___hlds__hlds_statistics__proc_stats_0_0_i205);
	}
	MR_r1 = MR_sv(10);
	MR_r2 = MR_sv(34);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___hlds__hlds_statistics__proc_stats_0_0_i45);
MR_def_label(__Compare___hlds__hlds_statistics__proc_stats_0_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___hlds__hlds_statistics__proc_stats_0_0_i205);
	}
	MR_r1 = MR_sv(11);
	MR_r2 = MR_sv(35);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___hlds__hlds_statistics__proc_stats_0_0_i49);
MR_def_label(__Compare___hlds__hlds_statistics__proc_stats_0_0,49)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___hlds__hlds_statistics__proc_stats_0_0_i205);
	}
	MR_r1 = MR_sv(12);
	MR_r2 = MR_sv(36);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___hlds__hlds_statistics__proc_stats_0_0_i53);
MR_def_label(__Compare___hlds__hlds_statistics__proc_stats_0_0,53)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___hlds__hlds_statistics__proc_stats_0_0_i205);
	}
	MR_r1 = MR_sv(13);
	MR_r2 = MR_sv(37);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___hlds__hlds_statistics__proc_stats_0_0_i57);
MR_def_label(__Compare___hlds__hlds_statistics__proc_stats_0_0,57)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___hlds__hlds_statistics__proc_stats_0_0_i205);
	}
	MR_r1 = MR_sv(14);
	MR_r2 = MR_sv(38);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___hlds__hlds_statistics__proc_stats_0_0_i61);
MR_def_label(__Compare___hlds__hlds_statistics__proc_stats_0_0,61)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___hlds__hlds_statistics__proc_stats_0_0_i205);
	}
	MR_r1 = MR_sv(15);
	MR_r2 = MR_sv(39);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___hlds__hlds_statistics__proc_stats_0_0_i65);
MR_def_label(__Compare___hlds__hlds_statistics__proc_stats_0_0,65)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___hlds__hlds_statistics__proc_stats_0_0_i205);
	}
	MR_r1 = MR_sv(16);
	MR_r2 = MR_sv(40);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___hlds__hlds_statistics__proc_stats_0_0_i69);
MR_def_label(__Compare___hlds__hlds_statistics__proc_stats_0_0,69)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___hlds__hlds_statistics__proc_stats_0_0_i205);
	}
	MR_r1 = MR_sv(17);
	MR_r2 = MR_sv(41);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___hlds__hlds_statistics__proc_stats_0_0_i73);
MR_def_label(__Compare___hlds__hlds_statistics__proc_stats_0_0,73)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___hlds__hlds_statistics__proc_stats_0_0_i205);
	}
	MR_r1 = MR_sv(18);
	MR_r2 = MR_sv(42);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___hlds__hlds_statistics__proc_stats_0_0_i77);
MR_def_label(__Compare___hlds__hlds_statistics__proc_stats_0_0,77)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___hlds__hlds_statistics__proc_stats_0_0_i205);
	}
	MR_r1 = MR_sv(19);
	MR_r2 = MR_sv(43);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___hlds__hlds_statistics__proc_stats_0_0_i81);
MR_def_label(__Compare___hlds__hlds_statistics__proc_stats_0_0,81)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___hlds__hlds_statistics__proc_stats_0_0_i205);
	}
	MR_r1 = MR_sv(20);
	MR_r2 = MR_sv(44);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___hlds__hlds_statistics__proc_stats_0_0_i85);
MR_def_label(__Compare___hlds__hlds_statistics__proc_stats_0_0,85)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___hlds__hlds_statistics__proc_stats_0_0_i205);
	}
	MR_r1 = MR_sv(21);
	MR_r2 = MR_sv(45);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___hlds__hlds_statistics__proc_stats_0_0_i89);
MR_def_label(__Compare___hlds__hlds_statistics__proc_stats_0_0,89)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___hlds__hlds_statistics__proc_stats_0_0_i205);
	}
	MR_r1 = MR_sv(22);
	MR_r2 = MR_sv(46);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___hlds__hlds_statistics__proc_stats_0_0_i93);
MR_def_label(__Compare___hlds__hlds_statistics__proc_stats_0_0,93)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___hlds__hlds_statistics__proc_stats_0_0_i205);
	}
	MR_r1 = MR_sv(23);
	MR_r2 = MR_sv(47);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___hlds__hlds_statistics__proc_stats_0_0_i97);
MR_def_label(__Compare___hlds__hlds_statistics__proc_stats_0_0,97)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___hlds__hlds_statistics__proc_stats_0_0_i205);
	}
	MR_r1 = MR_sv(24);
	MR_r2 = MR_sv(48);
	MR_succip_word = MR_sv(49);
	MR_decr_sp(49);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
MR_def_label(__Compare___hlds__hlds_statistics__proc_stats_0_0,205)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(49);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__hlds__hlds_error_util__describe_one_proc_name_3_0);
MR_decl_entry(fn__parse_tree__error_util__error_pieces_to_string_1_0);
MR_decl_entry(hlds__hlds_pred__proc_info_get_goal_2_0);
MR_decl_entry(fn__set_tree234__init_0_0);
MR_decl_entry(hlds__hlds_pred__proc_info_get_varset_2_0);

MR_BEGIN_MODULE(hlds__hlds_statistics_module10)
	MR_init_entry1(f_104_108_100_115_95_95_104_108_100_115_95_115_116_97_116_105_115_116_105_99_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_112_114_111_99_95_115_116_97_116_115_95_102_111_114_95_112_114_111_99_95_95_91_50_93_95_48_7_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__f_104_108_100_115_95_95_104_108_100_115_95_115_116_97_116_105_115_116_105_99_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_112_114_111_99_95_115_116_97_116_115_95_102_111_114_95_112_114_111_99_95_95_91_50_93_95_48_7_0);
	MR_init_label6(f_104_108_100_115_95_95_104_108_100_115_95_115_116_97_116_105_115_116_105_99_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_112_114_111_99_95_115_116_97_116_115_95_102_111_114_95_112_114_111_99_95_95_91_50_93_95_48_7_0,3,4,5,7,8,9)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__pred__write_proc_stats_for_proc__[2]_0'/7 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(f_104_108_100_115_95_95_104_108_100_115_95_115_116_97_116_105_115_116_105_99_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_112_114_111_99_95_115_116_97_116_115_95_102_111_114_95_112_114_111_99_95_95_91_50_93_95_48_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tempr2 = MR_r3;
	MR_tfield(0, MR_tempr1, 0) = MR_tempr2;
	MR_tempr3 = MR_r4;
	MR_tfield(0, MR_tempr1, 1) = MR_tfield(0, MR_tempr3, 0);
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_tempr2;
	MR_sv(3) = MR_tfield(0, MR_tempr1, 1);
	MR_sv(4) = MR_tfield(0, MR_tempr3, 1);
	MR_r1 = MR_r2;
	MR_r2 = (MR_Integer) 1;
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__hlds__hlds_error_util__describe_one_proc_name_3_0,
		f_104_108_100_115_95_95_104_108_100_115_95_115_116_97_116_105_115_116_105_99_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_112_114_111_99_95_115_116_97_116_115_95_102_111_114_95_112_114_111_99_95_95_91_50_93_95_48_7_0_i3);
MR_def_label(f_104_108_100_115_95_95_104_108_100_115_95_115_116_97_116_105_115_116_105_99_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_112_114_111_99_95_115_116_97_116_115_95_102_111_114_95_112_114_111_99_95_95_91_50_93_95_48_7_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__parse_tree__error_util__error_pieces_to_string_1_0,
		f_104_108_100_115_95_95_104_108_100_115_95_115_116_97_116_105_115_116_105_99_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_112_114_111_99_95_115_116_97_116_115_95_102_111_114_95_112_114_111_99_95_95_91_50_93_95_48_7_0_i4);
MR_def_label(f_104_108_100_115_95_95_104_108_100_115_95_115_116_97_116_105_115_116_105_99_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_112_114_111_99_95_115_116_97_116_115_95_102_111_114_95_112_114_111_99_95_95_91_50_93_95_48_7_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_goal_2_0,
		f_104_108_100_115_95_95_104_108_100_115_95_115_116_97_116_105_115_116_105_99_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_112_114_111_99_95_115_116_97_116_115_95_102_111_114_95_112_114_111_99_95_95_91_50_93_95_48_7_0_i5);
MR_def_label(f_104_108_100_115_95_95_104_108_100_115_95_115_116_97_116_105_115_116_105_99_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_112_114_111_99_95_115_116_97_116_115_95_102_111_114_95_112_114_111_99_95_95_91_50_93_95_48_7_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,3,0);
	MR_np_call_localret_ent(fn__set_tree234__init_0_0,
		f_104_108_100_115_95_95_104_108_100_115_95_115_116_97_116_105_115_116_105_99_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_112_114_111_99_95_115_116_97_116_115_95_102_111_114_95_112_114_111_99_95_95_91_50_93_95_48_7_0_i7);
MR_def_label(f_104_108_100_115_95_95_104_108_100_115_95_115_116_97_116_105_115_116_105_99_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_112_114_111_99_95_115_116_97_116_115_95_102_111_114_95_112_114_111_99_95_95_91_50_93_95_48_7_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_tempr1;
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,7,0);
	}
	MR_np_call_localret_ent(hlds__hlds_statistics__accumulate_proc_stats_in_goal_5_0,
		f_104_108_100_115_95_95_104_108_100_115_95_115_116_97_116_105_115_116_105_99_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_112_114_111_99_95_115_116_97_116_115_95_102_111_114_95_112_114_111_99_95_95_91_50_93_95_48_7_0_i8);
MR_def_label(f_104_108_100_115_95_95_104_108_100_115_95_115_116_97_116_105_115_116_105_99_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_112_114_111_99_95_115_116_97_116_115_95_102_111_114_95_112_114_111_99_95_95_91_50_93_95_48_7_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_sv(6) = MR_r2;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_varset_2_0,
		f_104_108_100_115_95_95_104_108_100_115_95_115_116_97_116_105_115_116_105_99_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_112_114_111_99_95_115_116_97_116_115_95_102_111_114_95_112_114_111_99_95_95_91_50_93_95_48_7_0_i9);
MR_def_label(f_104_108_100_115_95_95_104_108_100_115_95_115_116_97_116_105_115_116_105_99_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_112_114_111_99_95_115_116_97_116_115_95_102_111_114_95_112_114_111_99_95_95_91_50_93_95_48_7_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(6);
	MR_r6 = MR_sv(4);
	MR_r7 = MR_tempr1;
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(f_104_108_100_115_95_95_104_108_100_115_95_115_116_97_116_105_115_116_105_99_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_119_114_105_116_101_95_112_114_111_99_95_115_116_97_116_115_95_95_91_50_93_95_48_10_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__hlds_statistics_module11)
	MR_init_entry1(f_104_108_100_115_95_95_104_108_100_115_95_115_116_97_116_105_115_116_105_99_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_112_114_111_99_95_115_116_97_116_95_99_111_109_112_111_110_101_110_116_115_95_95_91_50_44_32_51_44_32_52_44_32_53_93_95_48_8_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__f_104_108_100_115_95_95_104_108_100_115_95_115_116_97_116_105_115_116_105_99_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_112_114_111_99_95_115_116_97_116_95_99_111_109_112_111_110_101_110_116_115_95_95_91_50_44_32_51_44_32_52_44_32_53_93_95_48_8_0);
	MR_init_label10(f_104_108_100_115_95_95_104_108_100_115_95_115_116_97_116_105_115_116_105_99_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_112_114_111_99_95_115_116_97_116_95_99_111_109_112_111_110_101_110_116_115_95_95_91_50_44_32_51_44_32_52_44_32_53_93_95_48_8_0,2,3,4,5,6,7,8,9,10,11)
	MR_init_label10(f_104_108_100_115_95_95_104_108_100_115_95_115_116_97_116_105_115_116_105_99_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_112_114_111_99_95_115_116_97_116_95_99_111_109_112_111_110_101_110_116_115_95_95_91_50_44_32_51_44_32_52_44_32_53_93_95_48_8_0,12,13,14,15,16,17,18,19,20,21)
	MR_init_label5(f_104_108_100_115_95_95_104_108_100_115_95_115_116_97_116_105_115_116_105_99_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_112_114_111_99_95_115_116_97_116_95_99_111_109_112_111_110_101_110_116_115_95_95_91_50_44_32_51_44_32_52_44_32_53_93_95_48_8_0,22,23,24,25,26)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__pred__write_proc_stat_components__[2, 3, 4, 5]_0'/8 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(f_104_108_100_115_95_95_104_108_100_115_95_115_116_97_116_105_115_116_105_99_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_112_114_111_99_95_115_116_97_116_95_99_111_109_112_111_110_101_110_116_115_95_95_91_50_44_32_51_44_32_52_44_32_53_93_95_48_8_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(27);
	MR_sv(27) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_tfield(0, MR_r2, 1);
	MR_sv(3) = MR_tfield(0, MR_r2, 2);
	MR_sv(4) = MR_tfield(0, MR_r2, 3);
	MR_sv(5) = MR_tfield(0, MR_r2, 4);
	MR_sv(6) = MR_tfield(0, MR_r2, 5);
	MR_sv(7) = MR_tfield(0, MR_r2, 6);
	MR_sv(8) = MR_tfield(0, MR_r2, 7);
	MR_sv(9) = MR_tfield(0, MR_r2, 8);
	MR_sv(10) = MR_tfield(0, MR_r2, 9);
	MR_sv(11) = MR_tfield(0, MR_r2, 10);
	MR_sv(12) = MR_tfield(0, MR_r2, 11);
	MR_sv(13) = MR_tfield(0, MR_r2, 12);
	MR_sv(14) = MR_tfield(0, MR_r2, 13);
	MR_sv(15) = MR_tfield(0, MR_r2, 14);
	MR_sv(16) = MR_tfield(0, MR_r2, 15);
	MR_sv(17) = MR_tfield(0, MR_r2, 16);
	MR_sv(18) = MR_tfield(0, MR_r2, 17);
	MR_sv(19) = MR_tfield(0, MR_r2, 18);
	MR_sv(20) = MR_tfield(0, MR_r2, 19);
	MR_sv(21) = MR_tfield(0, MR_r2, 20);
	MR_sv(22) = MR_tfield(0, MR_r2, 21);
	MR_sv(23) = MR_tfield(0, MR_r2, 22);
	MR_sv(24) = MR_tfield(0, MR_r2, 23);
	MR_sv(25) = MR_tfield(0, MR_r2, 24);
	MR_sv(26) = (((((((((((((((((((((MR_Integer) MR_tfield(0, MR_r2, 0) + (MR_Integer) MR_sv(2)) + (MR_Integer) MR_sv(3)) + (MR_Integer) MR_sv(4)) + (MR_Integer) MR_sv(5)) + (MR_Integer) MR_sv(6)) + (MR_Integer) MR_sv(7)) + (MR_Integer) MR_sv(8)) + (MR_Integer) MR_sv(9)) + (MR_Integer) MR_sv(10)) + (MR_Integer) MR_sv(11)) + (MR_Integer) MR_sv(12)) + (MR_Integer) MR_sv(14)) + (MR_Integer) MR_sv(16)) + (MR_Integer) MR_sv(18)) + (MR_Integer) MR_sv(20)) + (MR_Integer) MR_sv(21)) + (MR_Integer) MR_sv(22)) + (MR_Integer) MR_sv(23)) + (MR_Integer) MR_sv(24)) + (MR_Integer) MR_sv(25));
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = (MR_Word) MR_string_const("unify_contructs", 15);
	MR_r3 = MR_tfield(0, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(f_104_108_100_115_95_95_104_108_100_115_95_115_116_97_116_105_115_116_105_99_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_112_114_111_99_95_115_116_97_116_95_99_111_109_112_111_110_101_110_116_95_95_91_50_44_32_51_44_32_52_44_32_53_93_95_48_9_0,
		f_104_108_100_115_95_95_104_108_100_115_95_115_116_97_116_105_115_116_105_99_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_112_114_111_99_95_115_116_97_116_95_99_111_109_112_111_110_101_110_116_115_95_95_91_50_44_32_51_44_32_52_44_32_53_93_95_48_8_0_i2);
MR_def_label(f_104_108_100_115_95_95_104_108_100_115_95_115_116_97_116_105_115_116_105_99_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_112_114_111_99_95_115_116_97_116_95_99_111_109_112_111_110_101_110_116_115_95_95_91_50_44_32_51_44_32_52_44_32_53_93_95_48_8_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = (MR_Word) MR_string_const("unify_decontructs", 17);
	MR_r3 = MR_sv(2);
	MR_np_call_localret_ent(f_104_108_100_115_95_95_104_108_100_115_95_115_116_97_116_105_115_116_105_99_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_112_114_111_99_95_115_116_97_116_95_99_111_109_112_111_110_101_110_116_95_95_91_50_44_32_51_44_32_52_44_32_53_93_95_48_9_0,
		f_104_108_100_115_95_95_104_108_100_115_95_115_116_97_116_105_115_116_105_99_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_112_114_111_99_95_115_116_97_116_95_99_111_109_112_111_110_101_110_116_115_95_95_91_50_44_32_51_44_32_52_44_32_53_93_95_48_8_0_i3);
MR_def_label(f_104_108_100_115_95_95_104_108_100_115_95_115_116_97_116_105_115_116_105_99_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_112_114_111_99_95_115_116_97_116_95_99_111_109_112_111_110_101_110_116_115_95_95_91_50_44_32_51_44_32_52_44_32_53_93_95_48_8_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = (MR_Word) MR_string_const("unify_assigns", 13);
	MR_r3 = MR_sv(3);
	MR_np_call_localret_ent(f_104_108_100_115_95_95_104_108_100_115_95_115_116_97_116_105_115_116_105_99_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_112_114_111_99_95_115_116_97_116_95_99_111_109_112_111_110_101_110_116_95_95_91_50_44_32_51_44_32_52_44_32_53_93_95_48_9_0,
		f_104_108_100_115_95_95_104_108_100_115_95_115_116_97_116_105_115_116_105_99_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_112_114_111_99_95_115_116_97_116_95_99_111_109_112_111_110_101_110_116_115_95_95_91_50_44_32_51_44_32_52_44_32_53_93_95_48_8_0_i4);
MR_def_label(f_104_108_100_115_95_95_104_108_100_115_95_115_116_97_116_105_115_116_105_99_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_112_114_111_99_95_115_116_97_116_95_99_111_109_112_111_110_101_110_116_115_95_95_91_50_44_32_51_44_32_52_44_32_53_93_95_48_8_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = (MR_Word) MR_string_const("unify_tests", 11);
	MR_r3 = MR_sv(4);
	MR_np_call_localret_ent(f_104_108_100_115_95_95_104_108_100_115_95_115_116_97_116_105_115_116_105_99_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_112_114_111_99_95_115_116_97_116_95_99_111_109_112_111_110_101_110_116_95_95_91_50_44_32_51_44_32_52_44_32_53_93_95_48_9_0,
		f_104_108_100_115_95_95_104_108_100_115_95_115_116_97_116_105_115_116_105_99_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_112_114_111_99_95_115_116_97_116_95_99_111_109_112_111_110_101_110_116_115_95_95_91_50_44_32_51_44_32_52_44_32_53_93_95_48_8_0_i5);
MR_def_label(f_104_108_100_115_95_95_104_108_100_115_95_115_116_97_116_105_115_116_105_99_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_112_114_111_99_95_115_116_97_116_95_99_111_109_112_111_110_101_110_116_115_95_95_91_50_44_32_51_44_32_52_44_32_53_93_95_48_8_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = (MR_Word) MR_string_const("unify_complicateds", 18);
	MR_r3 = MR_sv(5);
	MR_np_call_localret_ent(f_104_108_100_115_95_95_104_108_100_115_95_115_116_97_116_105_115_116_105_99_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_112_114_111_99_95_115_116_97_116_95_99_111_109_112_111_110_101_110_116_95_95_91_50_44_32_51_44_32_52_44_32_53_93_95_48_9_0,
		f_104_108_100_115_95_95_104_108_100_115_95_115_116_97_116_105_115_116_105_99_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_112_114_111_99_95_115_116_97_116_95_99_111_109_112_111_110_101_110_116_115_95_95_91_50_44_32_51_44_32_52_44_32_53_93_95_48_8_0_i6);
MR_def_label(f_104_108_100_115_95_95_104_108_100_115_95_115_116_97_116_105_115_116_105_99_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_112_114_111_99_95_115_116_97_116_95_99_111_109_112_111_110_101_110_116_115_95_95_91_50_44_32_51_44_32_52_44_32_53_93_95_48_8_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = (MR_Word) MR_string_const("plain_calls", 11);
	MR_r3 = MR_sv(6);
	MR_np_call_localret_ent(f_104_108_100_115_95_95_104_108_100_115_95_115_116_97_116_105_115_116_105_99_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_112_114_111_99_95_115_116_97_116_95_99_111_109_112_111_110_101_110_116_95_95_91_50_44_32_51_44_32_52_44_32_53_93_95_48_9_0,
		f_104_108_100_115_95_95_104_108_100_115_95_115_116_97_116_105_115_116_105_99_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_112_114_111_99_95_115_116_97_116_95_99_111_109_112_111_110_101_110_116_115_95_95_91_50_44_32_51_44_32_52_44_32_53_93_95_48_8_0_i7);
MR_def_label(f_104_108_100_115_95_95_104_108_100_115_95_115_116_97_116_105_115_116_105_99_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_112_114_111_99_95_115_116_97_116_95_99_111_109_112_111_110_101_110_116_115_95_95_91_50_44_32_51_44_32_52_44_32_53_93_95_48_8_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = (MR_Word) MR_string_const("foreign_calls", 13);
	MR_r3 = MR_sv(7);
	MR_np_call_localret_ent(f_104_108_100_115_95_95_104_108_100_115_95_115_116_97_116_105_115_116_105_99_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_112_114_111_99_95_115_116_97_116_95_99_111_109_112_111_110_101_110_116_95_95_91_50_44_32_51_44_32_52_44_32_53_93_95_48_9_0,
		f_104_108_100_115_95_95_104_108_100_115_95_115_116_97_116_105_115_116_105_99_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_112_114_111_99_95_115_116_97_116_95_99_111_109_112_111_110_101_110_116_115_95_95_91_50_44_32_51_44_32_52_44_32_53_93_95_48_8_0_i8);
MR_def_label(f_104_108_100_115_95_95_104_108_100_115_95_115_116_97_116_105_115_116_105_99_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_112_114_111_99_95_115_116_97_116_95_99_111_109_112_111_110_101_110_116_115_95_95_91_50_44_32_51_44_32_52_44_32_53_93_95_48_8_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = (MR_Word) MR_string_const("ho_calls", 8);
	MR_r3 = MR_sv(8);
	MR_np_call_localret_ent(f_104_108_100_115_95_95_104_108_100_115_95_115_116_97_116_105_115_116_105_99_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_112_114_111_99_95_115_116_97_116_95_99_111_109_112_111_110_101_110_116_95_95_91_50_44_32_51_44_32_52_44_32_53_93_95_48_9_0,
		f_104_108_100_115_95_95_104_108_100_115_95_115_116_97_116_105_115_116_105_99_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_112_114_111_99_95_115_116_97_116_95_99_111_109_112_111_110_101_110_116_115_95_95_91_50_44_32_51_44_32_52_44_32_53_93_95_48_8_0_i9);
MR_def_label(f_104_108_100_115_95_95_104_108_100_115_95_115_116_97_116_105_115_116_105_99_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_112_114_111_99_95_115_116_97_116_95_99_111_109_112_111_110_101_110_116_115_95_95_91_50_44_32_51_44_32_52_44_32_53_93_95_48_8_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = (MR_Word) MR_string_const("method_calls", 12);
	MR_r3 = MR_sv(9);
	MR_np_call_localret_ent(f_104_108_100_115_95_95_104_108_100_115_95_115_116_97_116_105_115_116_105_99_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_112_114_111_99_95_115_116_97_116_95_99_111_109_112_111_110_101_110_116_95_95_91_50_44_32_51_44_32_52_44_32_53_93_95_48_9_0,
		f_104_108_100_115_95_95_104_108_100_115_95_115_116_97_116_105_115_116_105_99_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_112_114_111_99_95_115_116_97_116_95_99_111_109_112_111_110_101_110_116_115_95_95_91_50_44_32_51_44_32_52_44_32_53_93_95_48_8_0_i10);
MR_def_label(f_104_108_100_115_95_95_104_108_100_115_95_115_116_97_116_105_115_116_105_99_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_112_114_111_99_95_115_116_97_116_95_99_111_109_112_111_110_101_110_116_115_95_95_91_50_44_32_51_44_32_52_44_32_53_93_95_48_8_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = (MR_Word) MR_string_const("event_calls", 11);
	MR_r3 = MR_sv(10);
	MR_np_call_localret_ent(f_104_108_100_115_95_95_104_108_100_115_95_115_116_97_116_105_115_116_105_99_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_112_114_111_99_95_115_116_97_116_95_99_111_109_112_111_110_101_110_116_95_95_91_50_44_32_51_44_32_52_44_32_53_93_95_48_9_0,
		f_104_108_100_115_95_95_104_108_100_115_95_115_116_97_116_105_115_116_105_99_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_112_114_111_99_95_115_116_97_116_95_99_111_109_112_111_110_101_110_116_115_95_95_91_50_44_32_51_44_32_52_44_32_53_93_95_48_8_0_i11);
MR_def_label(f_104_108_100_115_95_95_104_108_100_115_95_115_116_97_116_105_115_116_105_99_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_112_114_111_99_95_115_116_97_116_95_99_111_109_112_111_110_101_110_116_115_95_95_91_50_44_32_51_44_32_52_44_32_53_93_95_48_8_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = (MR_Word) MR_string_const("casts", 5);
	MR_r3 = MR_sv(11);
	MR_np_call_localret_ent(f_104_108_100_115_95_95_104_108_100_115_95_115_116_97_116_105_115_116_105_99_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_112_114_111_99_95_115_116_97_116_95_99_111_109_112_111_110_101_110_116_95_95_91_50_44_32_51_44_32_52_44_32_53_93_95_48_9_0,
		f_104_108_100_115_95_95_104_108_100_115_95_115_116_97_116_105_115_116_105_99_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_112_114_111_99_95_115_116_97_116_95_99_111_109_112_111_110_101_110_116_115_95_95_91_50_44_32_51_44_32_52_44_32_53_93_95_48_8_0_i12);
MR_def_label(f_104_108_100_115_95_95_104_108_100_115_95_115_116_97_116_105_115_116_105_99_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_112_114_111_99_95_115_116_97_116_95_99_111_109_112_111_110_101_110_116_115_95_95_91_50_44_32_51_44_32_52_44_32_53_93_95_48_8_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = (MR_Word) MR_string_const("plain_conjs", 11);
	MR_r3 = MR_sv(12);
	MR_np_call_localret_ent(f_104_108_100_115_95_95_104_108_100_115_95_115_116_97_116_105_115_116_105_99_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_112_114_111_99_95_115_116_97_116_95_99_111_109_112_111_110_101_110_116_95_95_91_50_44_32_51_44_32_52_44_32_53_93_95_48_9_0,
		f_104_108_100_115_95_95_104_108_100_115_95_115_116_97_116_105_115_116_105_99_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_112_114_111_99_95_115_116_97_116_95_99_111_109_112_111_110_101_110_116_115_95_95_91_50_44_32_51_44_32_52_44_32_53_93_95_48_8_0_i13);
MR_def_label(f_104_108_100_115_95_95_104_108_100_115_95_115_116_97_116_105_115_116_105_99_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_112_114_111_99_95_115_116_97_116_95_99_111_109_112_111_110_101_110_116_115_95_95_91_50_44_32_51_44_32_52_44_32_53_93_95_48_8_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = (MR_Word) MR_string_const("plain_conjuncts", 15);
	MR_r3 = MR_sv(13);
	MR_np_call_localret_ent(f_104_108_100_115_95_95_104_108_100_115_95_115_116_97_116_105_115_116_105_99_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_112_114_111_99_95_115_116_97_116_95_99_111_109_112_111_110_101_110_116_95_95_91_50_44_32_51_44_32_52_44_32_53_93_95_48_9_0,
		f_104_108_100_115_95_95_104_108_100_115_95_115_116_97_116_105_115_116_105_99_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_112_114_111_99_95_115_116_97_116_95_99_111_109_112_111_110_101_110_116_115_95_95_91_50_44_32_51_44_32_52_44_32_53_93_95_48_8_0_i14);
MR_def_label(f_104_108_100_115_95_95_104_108_100_115_95_115_116_97_116_105_115_116_105_99_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_112_114_111_99_95_115_116_97_116_95_99_111_109_112_111_110_101_110_116_115_95_95_91_50_44_32_51_44_32_52_44_32_53_93_95_48_8_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = (MR_Word) MR_string_const("parallel_conjs", 14);
	MR_r3 = MR_sv(14);
	MR_np_call_localret_ent(f_104_108_100_115_95_95_104_108_100_115_95_115_116_97_116_105_115_116_105_99_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_112_114_111_99_95_115_116_97_116_95_99_111_109_112_111_110_101_110_116_95_95_91_50_44_32_51_44_32_52_44_32_53_93_95_48_9_0,
		f_104_108_100_115_95_95_104_108_100_115_95_115_116_97_116_105_115_116_105_99_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_112_114_111_99_95_115_116_97_116_95_99_111_109_112_111_110_101_110_116_115_95_95_91_50_44_32_51_44_32_52_44_32_53_93_95_48_8_0_i15);
MR_def_label(f_104_108_100_115_95_95_104_108_100_115_95_115_116_97_116_105_115_116_105_99_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_112_114_111_99_95_115_116_97_116_95_99_111_109_112_111_110_101_110_116_115_95_95_91_50_44_32_51_44_32_52_44_32_53_93_95_48_8_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = (MR_Word) MR_string_const("parallel_conjuncts", 18);
	MR_r3 = MR_sv(15);
	MR_np_call_localret_ent(f_104_108_100_115_95_95_104_108_100_115_95_115_116_97_116_105_115_116_105_99_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_112_114_111_99_95_115_116_97_116_95_99_111_109_112_111_110_101_110_116_95_95_91_50_44_32_51_44_32_52_44_32_53_93_95_48_9_0,
		f_104_108_100_115_95_95_104_108_100_115_95_115_116_97_116_105_115_116_105_99_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_112_114_111_99_95_115_116_97_116_95_99_111_109_112_111_110_101_110_116_115_95_95_91_50_44_32_51_44_32_52_44_32_53_93_95_48_8_0_i16);
MR_def_label(f_104_108_100_115_95_95_104_108_100_115_95_115_116_97_116_105_115_116_105_99_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_112_114_111_99_95_115_116_97_116_95_99_111_109_112_111_110_101_110_116_115_95_95_91_50_44_32_51_44_32_52_44_32_53_93_95_48_8_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = (MR_Word) MR_string_const("disjs", 5);
	MR_r3 = MR_sv(16);
	MR_np_call_localret_ent(f_104_108_100_115_95_95_104_108_100_115_95_115_116_97_116_105_115_116_105_99_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_112_114_111_99_95_115_116_97_116_95_99_111_109_112_111_110_101_110_116_95_95_91_50_44_32_51_44_32_52_44_32_53_93_95_48_9_0,
		f_104_108_100_115_95_95_104_108_100_115_95_115_116_97_116_105_115_116_105_99_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_112_114_111_99_95_115_116_97_116_95_99_111_109_112_111_110_101_110_116_115_95_95_91_50_44_32_51_44_32_52_44_32_53_93_95_48_8_0_i17);
MR_def_label(f_104_108_100_115_95_95_104_108_100_115_95_115_116_97_116_105_115_116_105_99_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_112_114_111_99_95_115_116_97_116_95_99_111_109_112_111_110_101_110_116_115_95_95_91_50_44_32_51_44_32_52_44_32_53_93_95_48_8_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = (MR_Word) MR_string_const("disjunctions", 12);
	MR_r3 = MR_sv(17);
	MR_np_call_localret_ent(f_104_108_100_115_95_95_104_108_100_115_95_115_116_97_116_105_115_116_105_99_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_112_114_111_99_95_115_116_97_116_95_99_111_109_112_111_110_101_110_116_95_95_91_50_44_32_51_44_32_52_44_32_53_93_95_48_9_0,
		f_104_108_100_115_95_95_104_108_100_115_95_115_116_97_116_105_115_116_105_99_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_112_114_111_99_95_115_116_97_116_95_99_111_109_112_111_110_101_110_116_115_95_95_91_50_44_32_51_44_32_52_44_32_53_93_95_48_8_0_i18);
MR_def_label(f_104_108_100_115_95_95_104_108_100_115_95_115_116_97_116_105_115_116_105_99_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_112_114_111_99_95_115_116_97_116_95_99_111_109_112_111_110_101_110_116_115_95_95_91_50_44_32_51_44_32_52_44_32_53_93_95_48_8_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = (MR_Word) MR_string_const("switches", 8);
	MR_r3 = MR_sv(18);
	MR_np_call_localret_ent(f_104_108_100_115_95_95_104_108_100_115_95_115_116_97_116_105_115_116_105_99_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_112_114_111_99_95_115_116_97_116_95_99_111_109_112_111_110_101_110_116_95_95_91_50_44_32_51_44_32_52_44_32_53_93_95_48_9_0,
		f_104_108_100_115_95_95_104_108_100_115_95_115_116_97_116_105_115_116_105_99_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_112_114_111_99_95_115_116_97_116_95_99_111_109_112_111_110_101_110_116_115_95_95_91_50_44_32_51_44_32_52_44_32_53_93_95_48_8_0_i19);
MR_def_label(f_104_108_100_115_95_95_104_108_100_115_95_115_116_97_116_105_115_116_105_99_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_112_114_111_99_95_115_116_97_116_95_99_111_109_112_111_110_101_110_116_115_95_95_91_50_44_32_51_44_32_52_44_32_53_93_95_48_8_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = (MR_Word) MR_string_const("switch_arms", 11);
	MR_r3 = MR_sv(19);
	MR_np_call_localret_ent(f_104_108_100_115_95_95_104_108_100_115_95_115_116_97_116_105_115_116_105_99_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_112_114_111_99_95_115_116_97_116_95_99_111_109_112_111_110_101_110_116_95_95_91_50_44_32_51_44_32_52_44_32_53_93_95_48_9_0,
		f_104_108_100_115_95_95_104_108_100_115_95_115_116_97_116_105_115_116_105_99_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_112_114_111_99_95_115_116_97_116_95_99_111_109_112_111_110_101_110_116_115_95_95_91_50_44_32_51_44_32_52_44_32_53_93_95_48_8_0_i20);
MR_def_label(f_104_108_100_115_95_95_104_108_100_115_95_115_116_97_116_105_115_116_105_99_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_112_114_111_99_95_115_116_97_116_95_99_111_109_112_111_110_101_110_116_115_95_95_91_50_44_32_51_44_32_52_44_32_53_93_95_48_8_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = (MR_Word) MR_string_const("if_then_elses", 13);
	MR_r3 = MR_sv(20);
	MR_np_call_localret_ent(f_104_108_100_115_95_95_104_108_100_115_95_115_116_97_116_105_115_116_105_99_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_112_114_111_99_95_115_116_97_116_95_99_111_109_112_111_110_101_110_116_95_95_91_50_44_32_51_44_32_52_44_32_53_93_95_48_9_0,
		f_104_108_100_115_95_95_104_108_100_115_95_115_116_97_116_105_115_116_105_99_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_112_114_111_99_95_115_116_97_116_95_99_111_109_112_111_110_101_110_116_115_95_95_91_50_44_32_51_44_32_52_44_32_53_93_95_48_8_0_i21);
MR_def_label(f_104_108_100_115_95_95_104_108_100_115_95_115_116_97_116_105_115_116_105_99_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_112_114_111_99_95_115_116_97_116_95_99_111_109_112_111_110_101_110_116_115_95_95_91_50_44_32_51_44_32_52_44_32_53_93_95_48_8_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = (MR_Word) MR_string_const("negations", 9);
	MR_r3 = MR_sv(21);
	MR_np_call_localret_ent(f_104_108_100_115_95_95_104_108_100_115_95_115_116_97_116_105_115_116_105_99_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_112_114_111_99_95_115_116_97_116_95_99_111_109_112_111_110_101_110_116_95_95_91_50_44_32_51_44_32_52_44_32_53_93_95_48_9_0,
		f_104_108_100_115_95_95_104_108_100_115_95_115_116_97_116_105_115_116_105_99_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_112_114_111_99_95_115_116_97_116_95_99_111_109_112_111_110_101_110_116_115_95_95_91_50_44_32_51_44_32_52_44_32_53_93_95_48_8_0_i22);
MR_def_label(f_104_108_100_115_95_95_104_108_100_115_95_115_116_97_116_105_115_116_105_99_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_112_114_111_99_95_115_116_97_116_95_99_111_109_112_111_110_101_110_116_115_95_95_91_50_44_32_51_44_32_52_44_32_53_93_95_48_8_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = (MR_Word) MR_string_const("scopes", 6);
	MR_r3 = MR_sv(22);
	MR_np_call_localret_ent(f_104_108_100_115_95_95_104_108_100_115_95_115_116_97_116_105_115_116_105_99_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_112_114_111_99_95_115_116_97_116_95_99_111_109_112_111_110_101_110_116_95_95_91_50_44_32_51_44_32_52_44_32_53_93_95_48_9_0,
		f_104_108_100_115_95_95_104_108_100_115_95_115_116_97_116_105_115_116_105_99_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_112_114_111_99_95_115_116_97_116_95_99_111_109_112_111_110_101_110_116_115_95_95_91_50_44_32_51_44_32_52_44_32_53_93_95_48_8_0_i23);
MR_def_label(f_104_108_100_115_95_95_104_108_100_115_95_115_116_97_116_105_115_116_105_99_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_112_114_111_99_95_115_116_97_116_95_99_111_109_112_111_110_101_110_116_115_95_95_91_50_44_32_51_44_32_52_44_32_53_93_95_48_8_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = (MR_Word) MR_string_const("bi_implications", 15);
	MR_r3 = MR_sv(23);
	MR_np_call_localret_ent(f_104_108_100_115_95_95_104_108_100_115_95_115_116_97_116_105_115_116_105_99_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_112_114_111_99_95_115_116_97_116_95_99_111_109_112_111_110_101_110_116_95_95_91_50_44_32_51_44_32_52_44_32_53_93_95_48_9_0,
		f_104_108_100_115_95_95_104_108_100_115_95_115_116_97_116_105_115_116_105_99_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_112_114_111_99_95_115_116_97_116_95_99_111_109_112_111_110_101_110_116_115_95_95_91_50_44_32_51_44_32_52_44_32_53_93_95_48_8_0_i24);
MR_def_label(f_104_108_100_115_95_95_104_108_100_115_95_115_116_97_116_105_115_116_105_99_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_112_114_111_99_95_115_116_97_116_95_99_111_109_112_111_110_101_110_116_115_95_95_91_50_44_32_51_44_32_52_44_32_53_93_95_48_8_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = (MR_Word) MR_string_const("atomic_goals", 12);
	MR_r3 = MR_sv(24);
	MR_np_call_localret_ent(f_104_108_100_115_95_95_104_108_100_115_95_115_116_97_116_105_115_116_105_99_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_112_114_111_99_95_115_116_97_116_95_99_111_109_112_111_110_101_110_116_95_95_91_50_44_32_51_44_32_52_44_32_53_93_95_48_9_0,
		f_104_108_100_115_95_95_104_108_100_115_95_115_116_97_116_105_115_116_105_99_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_112_114_111_99_95_115_116_97_116_95_99_111_109_112_111_110_101_110_116_115_95_95_91_50_44_32_51_44_32_52_44_32_53_93_95_48_8_0_i25);
MR_def_label(f_104_108_100_115_95_95_104_108_100_115_95_115_116_97_116_105_115_116_105_99_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_112_114_111_99_95_115_116_97_116_95_99_111_109_112_111_110_101_110_116_115_95_95_91_50_44_32_51_44_32_52_44_32_53_93_95_48_8_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = (MR_Word) MR_string_const("try_goals", 9);
	MR_r3 = MR_sv(25);
	MR_np_call_localret_ent(f_104_108_100_115_95_95_104_108_100_115_95_115_116_97_116_105_115_116_105_99_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_112_114_111_99_95_115_116_97_116_95_99_111_109_112_111_110_101_110_116_95_95_91_50_44_32_51_44_32_52_44_32_53_93_95_48_9_0,
		f_104_108_100_115_95_95_104_108_100_115_95_115_116_97_116_105_115_116_105_99_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_112_114_111_99_95_115_116_97_116_95_99_111_109_112_111_110_101_110_116_115_95_95_91_50_44_32_51_44_32_52_44_32_53_93_95_48_8_0_i26);
MR_def_label(f_104_108_100_115_95_95_104_108_100_115_95_115_116_97_116_105_115_116_105_99_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_112_114_111_99_95_115_116_97_116_95_99_111_109_112_111_110_101_110_116_115_95_95_91_50_44_32_51_44_32_52_44_32_53_93_95_48_8_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = (MR_Word) MR_string_const("total_size", 10);
	MR_r3 = MR_sv(26);
	MR_succip_word = MR_sv(27);
	MR_decr_sp(27);
	MR_np_tailcall_ent(f_104_108_100_115_95_95_104_108_100_115_95_115_116_97_116_105_115_116_105_99_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_112_114_111_99_95_115_116_97_116_95_99_111_109_112_111_110_101_110_116_95_95_91_50_44_32_51_44_32_52_44_32_53_93_95_48_9_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__hlds__hlds_pred__pred_id_to_int_1_0);
MR_decl_entry(fn__hlds__hlds_pred__proc_id_to_int_1_0);
MR_decl_entry(fn__string__int_to_string_1_0);
MR_decl_entry(varset__new_var_3_0);
MR_decl_entry(term__var_to_int_2_0);
MR_decl_entry(fn__set_tree234__count_1_0);

MR_BEGIN_MODULE(hlds__hlds_statistics_module12)
	MR_init_entry1(f_104_108_100_115_95_95_104_108_100_115_95_115_116_97_116_105_115_116_105_99_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_119_114_105_116_101_95_112_114_111_99_95_115_116_97_116_115_95_95_91_50_93_95_48_10_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__f_104_108_100_115_95_95_104_108_100_115_95_115_116_97_116_105_115_116_105_99_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_119_114_105_116_101_95_112_114_111_99_95_115_116_97_116_115_95_95_91_50_93_95_48_10_0);
	MR_init_label10(f_104_108_100_115_95_95_104_108_100_115_95_115_116_97_116_105_115_116_105_99_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_119_114_105_116_101_95_112_114_111_99_95_115_116_97_116_115_95_95_91_50_93_95_48_10_0,2,3,4,5,6,7,8,9,10,11)
	MR_init_label10(f_104_108_100_115_95_95_104_108_100_115_95_115_116_97_116_105_115_116_105_99_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_119_114_105_116_101_95_112_114_111_99_95_115_116_97_116_115_95_95_91_50_93_95_48_10_0,12,13,14,15,17,18,19,20,21,22)
	MR_init_label1(f_104_108_100_115_95_95_104_108_100_115_95_115_116_97_116_105_115_116_105_99_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_119_114_105_116_101_95_112_114_111_99_95_115_116_97_116_115_95_95_91_50_93_95_48_10_0,23)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__pred__do_write_proc_stats__[2]_0'/10 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(f_104_108_100_115_95_95_104_108_100_115_95_115_116_97_116_105_115_116_105_99_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_119_114_105_116_101_95_112_114_111_99_95_115_116_97_116_115_95_95_91_50_93_95_48_10_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_r5;
	MR_sv(5) = MR_r6;
	MR_sv(6) = MR_r7;
	MR_r1 = MR_r3;
	MR_np_call_localret_ent(fn__hlds__hlds_pred__pred_id_to_int_1_0,
		f_104_108_100_115_95_95_104_108_100_115_95_115_116_97_116_105_115_116_105_99_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_119_114_105_116_101_95_112_114_111_99_95_115_116_97_116_115_95_95_91_50_93_95_48_10_0_i2);
MR_def_label(f_104_108_100_115_95_95_104_108_100_115_95_115_116_97_116_105_115_116_105_99_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_119_114_105_116_101_95_112_114_111_99_95_115_116_97_116_115_95_95_91_50_93_95_48_10_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__hlds__hlds_pred__proc_id_to_int_1_0,
		f_104_108_100_115_95_95_104_108_100_115_95_115_116_97_116_105_115_116_105_99_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_119_114_105_116_101_95_112_114_111_99_95_115_116_97_116_115_95_95_91_50_93_95_48_10_0_i3);
MR_def_label(f_104_108_100_115_95_95_104_108_100_115_95_115_116_97_116_105_115_116_105_99_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_119_114_105_116_101_95_112_114_111_99_95_115_116_97_116_115_95_95_91_50_93_95_48_10_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Word) MR_string_const("\n", 1);
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		f_104_108_100_115_95_95_104_108_100_115_95_115_116_97_116_105_115_116_105_99_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_119_114_105_116_101_95_112_114_111_99_95_115_116_97_116_115_95_95_91_50_93_95_48_10_0_i4);
MR_def_label(f_104_108_100_115_95_95_104_108_100_115_95_115_116_97_116_105_115_116_105_99_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_119_114_105_116_101_95_112_114_111_99_95_115_116_97_116_115_95_95_91_50_93_95_48_10_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const(" ", 1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		f_104_108_100_115_95_95_104_108_100_115_95_115_116_97_116_105_115_116_105_99_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_119_114_105_116_101_95_112_114_111_99_95_115_116_97_116_115_95_95_91_50_93_95_48_10_0_i5);
MR_def_label(f_104_108_100_115_95_95_104_108_100_115_95_115_116_97_116_105_115_116_105_99_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_119_114_105_116_101_95_112_114_111_99_95_115_116_97_116_115_95_95_91_50_93_95_48_10_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		f_104_108_100_115_95_95_104_108_100_115_95_115_116_97_116_105_115_116_105_99_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_119_114_105_116_101_95_112_114_111_99_95_115_116_97_116_115_95_95_91_50_93_95_48_10_0_i6);
MR_def_label(f_104_108_100_115_95_95_104_108_100_115_95_115_116_97_116_105_115_116_105_99_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_119_114_105_116_101_95_112_114_111_99_95_115_116_97_116_115_95_95_91_50_93_95_48_10_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		f_104_108_100_115_95_95_104_108_100_115_95_115_116_97_116_105_115_116_105_99_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_119_114_105_116_101_95_112_114_111_99_95_115_116_97_116_115_95_95_91_50_93_95_48_10_0_i7);
MR_def_label(f_104_108_100_115_95_95_104_108_100_115_95_115_116_97_116_105_115_116_105_99_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_119_114_105_116_101_95_112_114_111_99_95_115_116_97_116_115_95_95_91_50_93_95_48_10_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const(" ", 1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		f_104_108_100_115_95_95_104_108_100_115_95_115_116_97_116_105_115_116_105_99_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_119_114_105_116_101_95_112_114_111_99_95_115_116_97_116_115_95_95_91_50_93_95_48_10_0_i8);
MR_def_label(f_104_108_100_115_95_95_104_108_100_115_95_115_116_97_116_105_115_116_105_99_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_119_114_105_116_101_95_112_114_111_99_95_115_116_97_116_115_95_95_91_50_93_95_48_10_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		f_104_108_100_115_95_95_104_108_100_115_95_115_116_97_116_105_115_116_105_99_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_119_114_105_116_101_95_112_114_111_99_95_115_116_97_116_115_95_95_91_50_93_95_48_10_0_i9);
MR_def_label(f_104_108_100_115_95_95_104_108_100_115_95_115_116_97_116_105_115_116_105_99_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_119_114_105_116_101_95_112_114_111_99_95_115_116_97_116_115_95_95_91_50_93_95_48_10_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		f_104_108_100_115_95_95_104_108_100_115_95_115_116_97_116_105_115_116_105_99_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_119_114_105_116_101_95_112_114_111_99_95_115_116_97_116_115_95_95_91_50_93_95_48_10_0_i10);
MR_def_label(f_104_108_100_115_95_95_104_108_100_115_95_115_116_97_116_105_115_116_105_99_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_119_114_105_116_101_95_112_114_111_99_95_115_116_97_116_115_95_95_91_50_93_95_48_10_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("PROC ", 5);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		f_104_108_100_115_95_95_104_108_100_115_95_115_116_97_116_105_115_116_105_99_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_119_114_105_116_101_95_112_114_111_99_95_115_116_97_116_115_95_95_91_50_93_95_48_10_0_i11);
MR_def_label(f_104_108_100_115_95_95_104_108_100_115_95_115_116_97_116_105_115_116_105_99_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_119_114_105_116_101_95_112_114_111_99_95_115_116_97_116_115_95_95_91_50_93_95_48_10_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(io__write_string_4_0,
		f_104_108_100_115_95_95_104_108_100_115_95_115_116_97_116_105_115_116_105_99_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_119_114_105_116_101_95_112_114_111_99_95_115_116_97_116_115_95_95_91_50_93_95_48_10_0_i12);
MR_def_label(f_104_108_100_115_95_95_104_108_100_115_95_115_116_97_116_105_115_116_105_99_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_119_114_105_116_101_95_112_114_111_99_95_115_116_97_116_115_95_95_91_50_93_95_48_10_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(f_104_108_100_115_95_95_104_108_100_115_95_115_116_97_116_105_115_116_105_99_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_112_114_111_99_95_115_116_97_116_95_99_111_109_112_111_110_101_110_116_115_95_95_91_50_44_32_51_44_32_52_44_32_53_93_95_48_8_0,
		f_104_108_100_115_95_95_104_108_100_115_95_115_116_97_116_105_115_116_105_99_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_119_114_105_116_101_95_112_114_111_99_95_115_116_97_116_115_95_95_91_50_93_95_48_10_0_i13);
MR_def_label(f_104_108_100_115_95_95_104_108_100_115_95_115_116_97_116_105_115_116_105_99_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_119_114_105_116_101_95_112_114_111_99_95_115_116_97_116_115_95_95_91_50_93_95_48_10_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(6);
	MR_np_call_localret_ent(varset__new_var_3_0,
		f_104_108_100_115_95_95_104_108_100_115_95_115_116_97_116_105_115_116_105_99_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_119_114_105_116_101_95_112_114_111_99_95_115_116_97_116_115_95_95_91_50_93_95_48_10_0_i14);
MR_def_label(f_104_108_100_115_95_95_104_108_100_115_95_115_116_97_116_105_115_116_105_99_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_119_114_105_116_101_95_112_114_111_99_95_115_116_97_116_115_95_95_91_50_93_95_48_10_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(term__var_to_int_2_0,
		f_104_108_100_115_95_95_104_108_100_115_95_115_116_97_116_105_115_116_105_99_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_119_114_105_116_101_95_112_114_111_99_95_115_116_97_116_115_95_95_91_50_93_95_48_10_0_i15);
MR_def_label(f_104_108_100_115_95_95_104_108_100_115_95_115_116_97_116_105_115_116_105_99_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_119_114_105_116_101_95_112_114_111_99_95_115_116_97_116_115_95_95_91_50_93_95_48_10_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,3,0);
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(fn__set_tree234__count_1_0,
		f_104_108_100_115_95_95_104_108_100_115_95_115_116_97_116_105_115_116_105_99_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_119_114_105_116_101_95_112_114_111_99_95_115_116_97_116_115_95_95_91_50_93_95_48_10_0_i17);
MR_def_label(f_104_108_100_115_95_95_104_108_100_115_95_115_116_97_116_105_115_116_105_99_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_119_114_105_116_101_95_112_114_111_99_95_115_116_97_116_115_95_95_91_50_93_95_48_10_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		f_104_108_100_115_95_95_104_108_100_115_95_115_116_97_116_105_115_116_105_99_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_119_114_105_116_101_95_112_114_111_99_95_115_116_97_116_115_95_95_91_50_93_95_48_10_0_i18);
MR_def_label(f_104_108_100_115_95_95_104_108_100_115_95_115_116_97_116_105_115_116_105_99_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_119_114_105_116_101_95_112_114_111_99_95_115_116_97_116_115_95_95_91_50_93_95_48_10_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("\n", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		f_104_108_100_115_95_95_104_108_100_115_95_115_116_97_116_105_115_116_105_99_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_119_114_105_116_101_95_112_114_111_99_95_115_116_97_116_115_95_95_91_50_93_95_48_10_0_i19);
MR_def_label(f_104_108_100_115_95_95_104_108_100_115_95_115_116_97_116_105_115_116_105_99_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_119_114_105_116_101_95_112_114_111_99_95_115_116_97_116_115_95_95_91_50_93_95_48_10_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const(" ", 1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		f_104_108_100_115_95_95_104_108_100_115_95_115_116_97_116_105_115_116_105_99_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_119_114_105_116_101_95_112_114_111_99_95_115_116_97_116_115_95_95_91_50_93_95_48_10_0_i20);
MR_def_label(f_104_108_100_115_95_95_104_108_100_115_95_115_116_97_116_105_115_116_105_99_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_119_114_105_116_101_95_112_114_111_99_95_115_116_97_116_115_95_95_91_50_93_95_48_10_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		f_104_108_100_115_95_95_104_108_100_115_95_115_116_97_116_105_115_116_105_99_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_119_114_105_116_101_95_112_114_111_99_95_115_116_97_116_115_95_95_91_50_93_95_48_10_0_i21);
MR_def_label(f_104_108_100_115_95_95_104_108_100_115_95_115_116_97_116_105_115_116_105_99_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_119_114_105_116_101_95_112_114_111_99_95_115_116_97_116_115_95_95_91_50_93_95_48_10_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		f_104_108_100_115_95_95_104_108_100_115_95_115_116_97_116_105_115_116_105_99_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_119_114_105_116_101_95_112_114_111_99_95_115_116_97_116_115_95_95_91_50_93_95_48_10_0_i22);
MR_def_label(f_104_108_100_115_95_95_104_108_100_115_95_115_116_97_116_105_115_116_105_99_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_119_114_105_116_101_95_112_114_111_99_95_115_116_97_116_115_95_95_91_50_93_95_48_10_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("VARS ", 5);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		f_104_108_100_115_95_95_104_108_100_115_95_115_116_97_116_105_115_116_105_99_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_119_114_105_116_101_95_112_114_111_99_95_115_116_97_116_115_95_95_91_50_93_95_48_10_0_i23);
MR_def_label(f_104_108_100_115_95_95_104_108_100_115_95_115_116_97_116_105_115_116_105_99_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_119_114_105_116_101_95_112_114_111_99_95_115_116_97_116_115_95_95_91_50_93_95_48_10_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(io__write_string_4_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__hlds_statistics_module13)
	MR_init_entry1(f_104_108_100_115_95_95_104_108_100_115_95_115_116_97_116_105_115_116_105_99_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_112_114_111_99_95_115_116_97_116_95_99_111_109_112_111_110_101_110_116_95_95_91_50_44_32_51_44_32_52_44_32_53_93_95_48_9_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__f_104_108_100_115_95_95_104_108_100_115_95_115_116_97_116_105_115_116_105_99_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_112_114_111_99_95_115_116_97_116_95_99_111_109_112_111_110_101_110_116_95_95_91_50_44_32_51_44_32_52_44_32_53_93_95_48_9_0);
	MR_init_label6(f_104_108_100_115_95_95_104_108_100_115_95_115_116_97_116_105_115_116_105_99_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_112_114_111_99_95_115_116_97_116_95_99_111_109_112_111_110_101_110_116_95_95_91_50_44_32_51_44_32_52_44_32_53_93_95_48_9_0,3,4,5,6,7,18)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__pred__output_proc_stat_component__[2, 3, 4, 5]_0'/9 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(f_104_108_100_115_95_95_104_108_100_115_95_115_116_97_116_105_115_116_105_99_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_112_114_111_99_95_115_116_97_116_95_99_111_109_112_111_110_101_110_116_95_95_91_50_44_32_51_44_32_52_44_32_53_93_95_48_9_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_LE(MR_r3,0)) {
		MR_GOTO_LAB(f_104_108_100_115_95_95_104_108_100_115_95_115_116_97_116_105_115_116_105_99_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_112_114_111_99_95_115_116_97_116_95_99_111_109_112_111_110_101_110_116_95_95_91_50_44_32_51_44_32_52_44_32_53_93_95_48_9_0_i18);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_r1 = MR_r3;
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		f_104_108_100_115_95_95_104_108_100_115_95_115_116_97_116_105_115_116_105_99_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_112_114_111_99_95_115_116_97_116_95_99_111_109_112_111_110_101_110_116_95_95_91_50_44_32_51_44_32_52_44_32_53_93_95_48_9_0_i3);
MR_def_label(f_104_108_100_115_95_95_104_108_100_115_95_115_116_97_116_105_115_116_105_99_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_112_114_111_99_95_115_116_97_116_95_99_111_109_112_111_110_101_110_116_95_95_91_50_44_32_51_44_32_52_44_32_53_93_95_48_9_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("\n", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		f_104_108_100_115_95_95_104_108_100_115_95_115_116_97_116_105_115_116_105_99_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_112_114_111_99_95_115_116_97_116_95_99_111_109_112_111_110_101_110_116_95_95_91_50_44_32_51_44_32_52_44_32_53_93_95_48_9_0_i4);
MR_def_label(f_104_108_100_115_95_95_104_108_100_115_95_115_116_97_116_105_115_116_105_99_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_112_114_111_99_95_115_116_97_116_95_99_111_109_112_111_110_101_110_116_95_95_91_50_44_32_51_44_32_52_44_32_53_93_95_48_9_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const(": ", 2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		f_104_108_100_115_95_95_104_108_100_115_95_115_116_97_116_105_115_116_105_99_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_112_114_111_99_95_115_116_97_116_95_99_111_109_112_111_110_101_110_116_95_95_91_50_44_32_51_44_32_52_44_32_53_93_95_48_9_0_i5);
MR_def_label(f_104_108_100_115_95_95_104_108_100_115_95_115_116_97_116_105_115_116_105_99_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_112_114_111_99_95_115_116_97_116_95_99_111_109_112_111_110_101_110_116_95_95_91_50_44_32_51_44_32_52_44_32_53_93_95_48_9_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		f_104_108_100_115_95_95_104_108_100_115_95_115_116_97_116_105_115_116_105_99_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_112_114_111_99_95_115_116_97_116_95_99_111_109_112_111_110_101_110_116_95_95_91_50_44_32_51_44_32_52_44_32_53_93_95_48_9_0_i6);
MR_def_label(f_104_108_100_115_95_95_104_108_100_115_95_115_116_97_116_105_115_116_105_99_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_112_114_111_99_95_115_116_97_116_95_99_111_109_112_111_110_101_110_116_95_95_91_50_44_32_51_44_32_52_44_32_53_93_95_48_9_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("GOAL ", 5);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		f_104_108_100_115_95_95_104_108_100_115_95_115_116_97_116_105_115_116_105_99_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_112_114_111_99_95_115_116_97_116_95_99_111_109_112_111_110_101_110_116_95_95_91_50_44_32_51_44_32_52_44_32_53_93_95_48_9_0_i7);
MR_def_label(f_104_108_100_115_95_95_104_108_100_115_95_115_116_97_116_105_115_116_105_99_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_112_114_111_99_95_115_116_97_116_95_99_111_109_112_111_110_101_110_116_95_95_91_50_44_32_51_44_32_52_44_32_53_93_95_48_9_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(io__write_string_4_0);
	}
MR_def_label(f_104_108_100_115_95_95_104_108_100_115_95_115_116_97_116_105_115_116_105_99_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_112_114_111_99_95_115_116_97_116_95_99_111_109_112_111_110_101_110_116_95_95_91_50_44_32_51_44_32_52_44_32_53_93_95_48_9_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

static void mercury__hlds__hlds_statistics_maybe_bunch_0(void)
{
	hlds__hlds_statistics_module0();
	hlds__hlds_statistics_module1();
	hlds__hlds_statistics_module2();
	hlds__hlds_statistics_module3();
	hlds__hlds_statistics_module4();
	hlds__hlds_statistics_module5();
	hlds__hlds_statistics_module6();
	hlds__hlds_statistics_module7();
	hlds__hlds_statistics_module8();
	hlds__hlds_statistics_module9();
	hlds__hlds_statistics_module10();
	hlds__hlds_statistics_module11();
	hlds__hlds_statistics_module12();
	hlds__hlds_statistics_module13();
}

/* suppress gcc -Wmissing-decls warnings */
void mercury__hlds__hlds_statistics__init(void);
void mercury__hlds__hlds_statistics__init_type_tables(void);
void mercury__hlds__hlds_statistics__init_debugger(void);
#ifdef MR_DEEP_PROFILING
void mercury__hlds__hlds_statistics__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp);
#endif
#ifdef MR_RECORD_TERM_SIZES
void mercury__hlds__hlds_statistics__init_complexity_procs(void);
#endif

void mercury__hlds__hlds_statistics__init(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	mercury__hlds__hlds_statistics_maybe_bunch_0();
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_hlds__hlds_statistics__type_ctor_info_proc_stats_0,
		hlds__hlds_statistics__proc_stats_0_0);
	mercury__hlds__hlds_statistics__init_debugger();
}

void mercury__hlds__hlds_statistics__init_type_tables(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	{
		MR_register_type_ctor_info(
		&mercury_data_hlds__hlds_statistics__type_ctor_info_proc_stats_0);
	}
}


void mercury__hlds__hlds_statistics__init_debugger(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}

#ifdef MR_DEEP_PROFILING

void mercury__hlds__hlds_statistics__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp)
{
	MR_write_out_module_proc_reps_start(procrep_fp, &mercury_data__module_common_layout__hlds__hlds_statistics);
	MR_write_out_module_proc_reps_end(procrep_fp);
}

#endif

#ifdef MR_RECORD_TERM_SIZES

void mercury__hlds__hlds_statistics__init_complexity_procs(void)
{
}

#endif

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;
