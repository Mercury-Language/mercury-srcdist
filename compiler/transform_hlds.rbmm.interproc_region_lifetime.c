/*
** Automatically generated from `rbmm.interproc_region_lifetime.m'
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
INIT mercury__transform_hlds__rbmm__interproc_region_lifetime__init
ENDINIT
*/

#define MR_ALLOW_RESET
#include "mercury_imp.h"
#line 530 "../library/io.int"
#include "io.mh"

#line 27 "transform_hlds.rbmm.interproc_region_lifetime.c"
#line 538 "../library/io.int"
#include "string.mh"

#line 31 "transform_hlds.rbmm.interproc_region_lifetime.c"
#line 29 "../library/bitmap.int2"
#include "bitmap.mh"

#line 35 "transform_hlds.rbmm.interproc_region_lifetime.c"
#line 28 "../library/time.int2"
#include "time.mh"

#line 39 "transform_hlds.rbmm.interproc_region_lifetime.c"
#line 30 "../library/array.int2"
#include "array.mh"

#line 43 "transform_hlds.rbmm.interproc_region_lifetime.c"
#line 44 "transform_hlds.rbmm.interproc_region_lifetime.c"
#include "transform_hlds.rbmm.interproc_region_lifetime.mh"

#line 47 "transform_hlds.rbmm.interproc_region_lifetime.c"
#line 48 "transform_hlds.rbmm.interproc_region_lifetime.c"
#ifndef TRANSFORM_HLDS__RBMM__INTERPROC_REGION_LIFETIME_DECL_GUARD
#define TRANSFORM_HLDS__RBMM__INTERPROC_REGION_LIFETIME_DECL_GUARD

#line 52 "transform_hlds.rbmm.interproc_region_lifetime.c"
#line 53 "transform_hlds.rbmm.interproc_region_lifetime.c"

#endif
#line 56 "transform_hlds.rbmm.interproc_region_lifetime.c"

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
	MR_Word * f1[3];
};
MR_STATIC_LINKAGE const struct mercury_type_1 mercury_common_1[];

struct mercury_type_2 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[6];
};
MR_STATIC_LINKAGE const struct mercury_type_2 mercury_common_2[];

struct mercury_type_3 {
	MR_Word * f1;
	MR_Code * f2;
	MR_Integer f3;
};
MR_STATIC_LINKAGE const struct mercury_type_3 mercury_common_3[];

struct mercury_type_4 {
	MR_Word * f1;
	MR_Integer f2;
	MR_Word * f3[6];
};
MR_STATIC_LINKAGE const struct mercury_type_4 mercury_common_4[];

struct mercury_type_5 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[9];
};
MR_STATIC_LINKAGE const struct mercury_type_5 mercury_common_5[];

struct mercury_type_6 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[7];
};
MR_STATIC_LINKAGE const struct mercury_type_6 mercury_common_6[];

struct mercury_type_7 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[4];
};
MR_STATIC_LINKAGE const struct mercury_type_7 mercury_common_7[];

struct mercury_type_8 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[3];
};
MR_STATIC_LINKAGE const struct mercury_type_8 mercury_common_8[];

struct mercury_type_9 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[5];
};
MR_STATIC_LINKAGE const struct mercury_type_9 mercury_common_9[];

extern const MR_TypeCtorInfo_Struct
	mercury_data_transform_hlds__rbmm__interproc_region_lifetime__type_ctor_info_rule_pred_0;
MR_decl_label8(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_114_98_109_109_95_95_105_110_116_101_114_112_114_111_99_95_114_101_103_105_111_110_95_108_105_102_101_116_105_109_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_112_112_108_121_95_108_105_118_101_95_114_101_103_105_111_110_95_114_117_108_101_115_95_101_120_101_99_95_112_97_116_104_95_95_91_53_93_95_48_11_0, 42,7,6,9,10,11,12,13)
MR_decl_label8(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_114_98_109_109_95_95_105_110_116_101_114_112_114_111_99_95_114_101_103_105_111_110_95_108_105_102_101_116_105_109_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_112_112_108_121_95_108_105_118_101_95_114_101_103_105_111_110_95_114_117_108_101_115_95_101_120_101_99_95_112_97_116_104_95_95_91_53_93_95_48_11_0, 15,14,17,18,19,20,4,3)
MR_decl_label3(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_114_98_109_109_95_95_105_110_116_101_114_112_114_111_99_95_114_101_103_105_111_110_95_108_105_102_101_116_105_109_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_112_112_108_121_95_108_105_118_101_95_114_101_103_105_111_110_95_114_117_108_101_115_95_101_120_101_99_95_112_97_116_104_115_95_95_91_53_93_95_48_11_0, 11,4,3)
MR_decl_label5(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_114_98_109_109_95_95_105_110_116_101_114_112_114_111_99_95_114_101_103_105_111_110_95_108_105_102_101_116_105_109_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_111_114_110_95_114_101_109_111_118_97_108_95_114_117_108_101_115_95_95_91_51_93_95_48_6_0, 2,3,4,5,6)
MR_decl_label4(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_114_98_109_109_95_95_105_110_116_101_114_112_114_111_99_95_114_101_103_105_111_110_95_108_105_102_101_116_105_109_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_111_110_101_95_109_97_112_112_105_110_103_95_95_91_49_93_95_48_6_0, 3,5,2,6)
MR_decl_label5(transform_hlds__rbmm__interproc_region_lifetime__apply_live_region_born_removal_rules_7_0, 2,3,6,7,4)
MR_decl_label5(transform_hlds__rbmm__interproc_region_lifetime__apply_live_region_dead_removal_rules_7_0, 2,3,6,7,4)
MR_decl_label4(transform_hlds__rbmm__interproc_region_lifetime__apply_rule_pred_proc_9_0, 2,3,4,5)
MR_decl_label2(transform_hlds__rbmm__interproc_region_lifetime__born_removal_rule_1_4_0, 2,3)
MR_decl_label2(transform_hlds__rbmm__interproc_region_lifetime__born_removal_rule_2_4_0, 2,3)
MR_decl_label6(transform_hlds__rbmm__interproc_region_lifetime__compute_constantR_7_0, 2,3,4,5,6,7)
MR_decl_label4(transform_hlds__rbmm__interproc_region_lifetime__compute_interproc_region_lifetime_12_0, 2,3,4,5)
MR_decl_label2(transform_hlds__rbmm__interproc_region_lifetime__dead_removal_rule_1_4_0, 2,3)
MR_decl_label2(transform_hlds__rbmm__interproc_region_lifetime__dead_removal_rule_2_4_0, 2,3)
MR_decl_label6(transform_hlds__rbmm__interproc_region_lifetime__dead_removal_rules_6_0, 2,3,4,5,6,7)
MR_decl_label3(transform_hlds__rbmm__interproc_region_lifetime__eliminate_primitive_regions_6_0, 2,3,4)
MR_decl_label3(transform_hlds__rbmm__interproc_region_lifetime__eliminate_primitive_regions_2_6_0, 2,3,4)
MR_decl_label1(transform_hlds__rbmm__interproc_region_lifetime__find_alpha_source_5_0, 2)
MR_decl_label7(transform_hlds__rbmm__interproc_region_lifetime__ignore_primitive_regions_16_0, 2,3,4,5,6,7,8)
MR_decl_label8(transform_hlds__rbmm__interproc_region_lifetime__remove_this_from_ep_8_0, 43,7,6,9,10,11,12,13)
MR_decl_label8(transform_hlds__rbmm__interproc_region_lifetime__remove_this_from_ep_8_0, 14,16,15,18,19,20,21,4)
MR_decl_label1(transform_hlds__rbmm__interproc_region_lifetime__remove_this_from_ep_8_0, 3)
MR_decl_label3(transform_hlds__rbmm__interproc_region_lifetime__remove_this_from_eps_8_0, 11,4,3)
MR_decl_label1(transform_hlds__rbmm__interproc_region_lifetime__remove_this_region_from_callees_of_proc_7_0, 2)
MR_decl_label5(transform_hlds__rbmm__interproc_region_lifetime__retain_non_primitive_regions_5_0, 2,8,6,10,4)
MR_decl_label2(transform_hlds__rbmm__interproc_region_lifetime__retain_non_primitive_regions_at_pp_6_0, 2,3)
MR_decl_label2(transform_hlds__rbmm__interproc_region_lifetime__run_with_dependency_9_0, 4,2)
MR_decl_label4(transform_hlds__rbmm__interproc_region_lifetime__run_with_dependency_until_fixpoint_9_0, 13,2,5,3)
MR_decl_static(transform_hlds__rbmm__interproc_region_lifetime__apply_live_region_dead_removal_rules_7_0)
MR_decl_static(transform_hlds__rbmm__interproc_region_lifetime__apply_live_region_born_removal_rules_7_0)
MR_def_extern_entry(transform_hlds__rbmm__interproc_region_lifetime__compute_interproc_region_lifetime_12_0)
MR_def_extern_entry(transform_hlds__rbmm__interproc_region_lifetime__ignore_primitive_regions_16_0)
MR_decl_static(transform_hlds__rbmm__interproc_region_lifetime__compute_constantR_7_0)
MR_decl_static(transform_hlds__rbmm__interproc_region_lifetime__run_with_dependency_until_fixpoint_9_0)
MR_decl_static(transform_hlds__rbmm__interproc_region_lifetime__run_with_dependency_9_0)
MR_decl_static(transform_hlds__rbmm__interproc_region_lifetime__apply_rule_pred_proc_9_0)
MR_decl_static(transform_hlds__rbmm__interproc_region_lifetime__dead_removal_rules_6_0)
MR_decl_static(transform_hlds__rbmm__interproc_region_lifetime__dead_removal_rule_1_4_0)
MR_decl_static(transform_hlds__rbmm__interproc_region_lifetime__dead_removal_rule_2_4_0)
MR_decl_static(transform_hlds__rbmm__interproc_region_lifetime__born_removal_rules_6_0)
MR_decl_static(transform_hlds__rbmm__interproc_region_lifetime__born_removal_rule_1_4_0)
MR_decl_static(transform_hlds__rbmm__interproc_region_lifetime__born_removal_rule_2_4_0)
MR_decl_static(transform_hlds__rbmm__interproc_region_lifetime__process_one_mapping_6_0)
MR_decl_static(transform_hlds__rbmm__interproc_region_lifetime__remove_this_from_ep_8_0)
MR_decl_static(transform_hlds__rbmm__interproc_region_lifetime__remove_this_from_eps_8_0)
MR_decl_static(transform_hlds__rbmm__interproc_region_lifetime__remove_this_region_from_callees_of_proc_7_0)
MR_decl_static(transform_hlds__rbmm__interproc_region_lifetime__find_alpha_source_5_0)
MR_decl_static(transform_hlds__rbmm__interproc_region_lifetime__eliminate_primitive_regions_6_0)
MR_decl_static(transform_hlds__rbmm__interproc_region_lifetime__retain_non_primitive_regions_5_0)
MR_decl_static(transform_hlds__rbmm__interproc_region_lifetime__eliminate_primitive_regions_2_6_0)
MR_decl_static(transform_hlds__rbmm__interproc_region_lifetime__retain_non_primitive_regions_at_pp_6_0)
MR_decl_static(__Unify___transform_hlds__rbmm__interproc_region_lifetime__rule_pred_0_0)
MR_decl_static(__Compare___transform_hlds__rbmm__interproc_region_lifetime__rule_pred_0_0)
MR_decl_static(transform_hlds__rbmm__interproc_region_lifetime__IntroducedFrom__pred__dead_removal_rule_1__377__1_3_0)
MR_decl_static(transform_hlds__rbmm__interproc_region_lifetime__IntroducedFrom__pred__dead_removal_rule_2__387__1_3_0)
MR_decl_static(transform_hlds__rbmm__interproc_region_lifetime__IntroducedFrom__pred__born_removal_rule_1__415__1_3_0)
MR_decl_static(transform_hlds__rbmm__interproc_region_lifetime__IntroducedFrom__pred__born_removal_rule_2__426__1_3_0)
MR_decl_static(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_114_98_109_109_95_95_105_110_116_101_114_112_114_111_99_95_114_101_103_105_111_110_95_108_105_102_101_116_105_109_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_112_112_108_121_95_108_105_118_101_95_114_101_103_105_111_110_95_114_117_108_101_115_95_101_120_101_99_95_112_97_116_104_115_95_95_91_53_93_95_48_11_0)
MR_decl_static(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_114_98_109_109_95_95_105_110_116_101_114_112_114_111_99_95_114_101_103_105_111_110_95_108_105_102_101_116_105_109_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_112_112_108_121_95_108_105_118_101_95_114_101_103_105_111_110_95_114_117_108_101_115_95_101_120_101_99_95_112_97_116_104_95_95_91_53_93_95_48_11_0)
MR_decl_static(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_114_98_109_109_95_95_105_110_116_101_114_112_114_111_99_95_114_101_103_105_111_110_95_108_105_102_101_116_105_109_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_111_114_110_95_114_101_109_111_118_97_108_95_114_117_108_101_115_95_95_91_51_93_95_48_6_0)
MR_decl_static(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_114_98_109_109_95_95_105_110_116_101_114_112_114_111_99_95_114_101_103_105_111_110_95_108_105_102_101_116_105_109_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_111_110_101_95_109_97_112_112_105_110_103_95_95_91_49_93_95_48_6_0)

extern const MR_TypeCtorInfo_Struct mercury_data_list__type_ctor_info_list_1;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_pred_proc_id_0;
extern const MR_TypeCtorInfo_Struct mercury_data_transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0;
extern const MR_TypeCtorInfo_Struct mercury_data_list__type_ctor_info_list_1;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_pred_proc_id_0;
extern const MR_TypeCtorInfo_Struct mercury_data_transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0;
static const struct mercury_type_0 mercury_common_0[9] =
{
{
{
MR_LIST_CTOR_ADDR,
MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id)
}
},
{
{
MR_LIST_CTOR_ADDR,
MR_CTOR0_ADDR(transform_hlds__rbmm__points_to_graph, rptg_node)
}
},
{
{
MR_LIST_CTOR_ADDR,
MR_CTOR0_ADDR(transform_hlds__rbmm__points_to_graph, rptg_node)
}
},
{
{
MR_LIST_CTOR_ADDR,
MR_COMMON(1,5)
}
},
{
{
MR_LIST_CTOR_ADDR,
MR_COMMON(0,3)
}
},
{
{
MR_LIST_CTOR_ADDR,
MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id)
}
},
{
{
MR_LIST_CTOR_ADDR,
MR_CTOR0_ADDR(transform_hlds__rbmm__points_to_graph, rptg_node)
}
},
{
{
MR_LIST_CTOR_ADDR,
MR_TAG_COMMON(0,1,13)
}
},
{
{
MR_LIST_CTOR_ADDR,
MR_TAG_COMMON(0,0,7)
}
},
};

extern const MR_TypeCtorInfo_Struct mercury_data_tree234__type_ctor_info_tree234_2;
extern const MR_TypeCtorInfo_Struct mercury_data_tree234__type_ctor_info_tree234_2;
extern const MR_TypeCtorInfo_Struct mercury_data_transform_hlds__rbmm__points_to_info__type_ctor_info_rpta_info_0;
extern const MR_TypeCtorInfo_Struct mercury_data_pair__type_ctor_info_pair_2;
extern const MR_TypeCtorInfo_Struct mercury_data_transform_hlds__smm_common__type_ctor_info_program_point_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_goal__type_ctor_info_hlds_goal_0;
extern const MR_TypeCtorInfo_Struct mercury_data_transform_hlds__smm_common__type_ctor_info_program_point_0;
extern const MR_TypeCtorInfo_Struct mercury_data_pair__type_ctor_info_pair_2;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_goal__type_ctor_info_hlds_goal_0;
static const struct mercury_type_1 mercury_common_1[15] =
{
{
{
MR_CTOR_ADDR(tree234, tree234, 2),
MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id),
MR_COMMON(0,2)
}
},
{
{
MR_CTOR_ADDR(tree234, tree234, 2),
MR_CTOR0_ADDR(transform_hlds__rbmm__points_to_graph, rptg_node),
MR_CTOR0_ADDR(transform_hlds__rbmm__points_to_graph, rptg_node)
}
},
{
{
MR_CTOR_ADDR(tree234, tree234, 2),
MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id),
MR_COMMON(0,2)
}
},
{
{
MR_CTOR_ADDR(tree234, tree234, 2),
MR_CTOR0_ADDR(transform_hlds__rbmm__points_to_graph, rptg_node),
MR_CTOR0_ADDR(transform_hlds__rbmm__points_to_graph, rptg_node)
}
},
{
{
MR_CTOR_ADDR(tree234, tree234, 2),
MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id),
MR_CTOR0_ADDR(transform_hlds__rbmm__points_to_info, rpta_info)
}
},
{
{
MR_CTOR_ADDR(pair, pair, 2),
MR_CTOR0_ADDR(transform_hlds__smm_common, program_point),
MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal)
}
},
{
{
MR_CTOR_ADDR(tree234, tree234, 2),
MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id),
MR_COMMON(0,4)
}
},
{
{
MR_CTOR_ADDR(tree234, tree234, 2),
MR_CTOR0_ADDR(transform_hlds__smm_common, program_point),
MR_COMMON(0,2)
}
},
{
{
MR_CTOR_ADDR(tree234, tree234, 2),
MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id),
MR_COMMON(1,7)
}
},
{
{
MR_CTOR_ADDR(tree234, tree234, 2),
MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id),
MR_TAG_COMMON(0,0,6)
}
},
{
{
MR_CTOR_ADDR(tree234, tree234, 2),
MR_CTOR0_ADDR(transform_hlds__smm_common, program_point),
MR_COMMON(0,2)
}
},
{
{
MR_CTOR_ADDR(tree234, tree234, 2),
MR_CTOR0_ADDR(transform_hlds__smm_common, program_point),
MR_TAG_COMMON(0,0,6)
}
},
{
{
MR_CTOR_ADDR(tree234, tree234, 2),
MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id),
MR_TAG_COMMON(0,1,11)
}
},
{
{
MR_CTOR_ADDR(pair, pair, 2),
MR_CTOR0_ADDR(transform_hlds__smm_common, program_point),
MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal)
}
},
{
{
MR_CTOR_ADDR(tree234, tree234, 2),
MR_CTOR0_ADDR(transform_hlds__rbmm__points_to_graph, rptg_node),
MR_CTOR0_ADDR(transform_hlds__rbmm__points_to_graph, rptg_node)
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__rbmm__interproc_region_lifetime__apply_live_region_dead_removal_rules_7_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_pred_proc_id_0;
static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__rbmm__interproc_region_lifetime__apply_live_region_born_removal_rules_7_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__rbmm__interproc_region_lifetime__ignore_primitive_regions_16_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_module__type_ctor_info_module_info_0;
static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__rbmm__interproc_region_lifetime__ignore_primitive_regions_16_0_2;
static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__rbmm__interproc_region_lifetime__dead_removal_rules_6_0_2;
extern const MR_TypeCtorInfo_Struct mercury_data_transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0;
static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__rbmm__interproc_region_lifetime__eliminate_primitive_regions_2_6_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_transform_hlds__rbmm__points_to_graph__type_ctor_info_rpt_graph_0;
extern const MR_TypeCtorInfo_Struct mercury_data_transform_hlds__smm_common__type_ctor_info_program_point_0;
static const MR_UserClosureId
mercury_data__closure_layout__f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_114_98_109_109_95_95_105_110_116_101_114_112_114_111_99_95_114_101_103_105_111_110_95_108_105_102_101_116_105_109_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_111_114_110_95_114_101_109_111_118_97_108_95_114_117_108_101_115_95_95_91_51_93_95_48_6_0_2;
static const struct mercury_type_2 mercury_common_2[7] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__transform_hlds__rbmm__interproc_region_lifetime__apply_live_region_dead_removal_rules_7_0_1,
(MR_Word *) (MR_Integer) 0
},
6,
{
MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id),
MR_COMMON(0,1),
MR_COMMON(0,1),
MR_COMMON(1,0),
MR_COMMON(1,1),
MR_COMMON(0,1)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__transform_hlds__rbmm__interproc_region_lifetime__apply_live_region_born_removal_rules_7_0_1,
(MR_Word *) (MR_Integer) 0
},
6,
{
MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id),
MR_COMMON(0,1),
MR_COMMON(0,1),
MR_COMMON(1,0),
MR_COMMON(1,1),
MR_COMMON(0,1)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__transform_hlds__rbmm__interproc_region_lifetime__ignore_primitive_regions_16_0_1,
(MR_Word *) (MR_Integer) 0
},
6,
{
MR_CTOR0_ADDR(hlds__hlds_module, module_info),
MR_COMMON(1,4),
MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id),
MR_COMMON(0,1),
MR_COMMON(1,0),
MR_COMMON(1,0)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__transform_hlds__rbmm__interproc_region_lifetime__ignore_primitive_regions_16_0_2,
(MR_Word *) (MR_Integer) 0
},
6,
{
MR_CTOR0_ADDR(hlds__hlds_module, module_info),
MR_COMMON(1,4),
MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id),
MR_COMMON(1,10),
MR_COMMON(1,8),
MR_COMMON(1,8)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__transform_hlds__rbmm__interproc_region_lifetime__dead_removal_rules_6_0_2,
(MR_Word *) (MR_Integer) 0
},
6,
{
MR_CTOR0_ADDR(transform_hlds__rbmm__points_to_graph, rptg_node),
MR_CTOR0_ADDR(transform_hlds__rbmm__points_to_graph, rptg_node),
MR_COMMON(0,1),
MR_COMMON(0,1),
MR_COMMON(0,1),
MR_COMMON(0,1)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__transform_hlds__rbmm__interproc_region_lifetime__eliminate_primitive_regions_2_6_0_1,
(MR_Word *) (MR_Integer) 0
},
6,
{
MR_CTOR0_ADDR(hlds__hlds_module, module_info),
MR_CTOR0_ADDR(transform_hlds__rbmm__points_to_graph, rpt_graph),
MR_CTOR0_ADDR(transform_hlds__smm_common, program_point),
MR_COMMON(0,1),
MR_COMMON(1,10),
MR_COMMON(1,10)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_114_98_109_109_95_95_105_110_116_101_114_112_114_111_99_95_114_101_103_105_111_110_95_108_105_102_101_116_105_109_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_111_114_110_95_114_101_109_111_118_97_108_95_114_117_108_101_115_95_95_91_51_93_95_48_6_0_2,
(MR_Word *) (MR_Integer) 0
},
6,
{
MR_CTOR0_ADDR(transform_hlds__rbmm__points_to_graph, rptg_node),
MR_CTOR0_ADDR(transform_hlds__rbmm__points_to_graph, rptg_node),
MR_COMMON(0,1),
MR_COMMON(0,1),
MR_COMMON(0,1),
MR_COMMON(0,1)
}
},
};

static const struct mercury_type_3 mercury_common_3[4] =
{
{
MR_COMMON(2,0),
MR_ENTRY_AP(transform_hlds__rbmm__interproc_region_lifetime__dead_removal_rules_6_0),
0
},
{
MR_COMMON(2,1),
MR_ENTRY_AP(transform_hlds__rbmm__interproc_region_lifetime__born_removal_rules_6_0),
0
},
{
MR_COMMON(2,4),
MR_ENTRY_AP(transform_hlds__rbmm__interproc_region_lifetime__process_one_mapping_6_0),
0
},
{
MR_COMMON(2,6),
MR_ENTRY_AP(transform_hlds__rbmm__interproc_region_lifetime__process_one_mapping_6_0),
0
},
};

extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_pred_0;
static const struct mercury_type_4 mercury_common_4[1] =
{
{
MR_CTOR0_ADDR(builtin, pred),
6,
{
MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id),
MR_COMMON(0,2),
MR_COMMON(0,2),
MR_COMMON(1,2),
MR_COMMON(1,3),
MR_COMMON(0,2)
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__rbmm__interproc_region_lifetime__apply_live_region_dead_removal_rules_7_0_2;
static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__rbmm__interproc_region_lifetime__apply_live_region_born_removal_rules_7_0_2;
static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__rbmm__interproc_region_lifetime__run_with_dependency_until_fixpoint_9_0_1;
static const struct mercury_type_5 mercury_common_5[3] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__transform_hlds__rbmm__interproc_region_lifetime__apply_live_region_dead_removal_rules_7_0_2,
(MR_Word *) (MR_Integer) 0
},
9,
{
MR_COMMON(4,0),
MR_CTOR0_ADDR(hlds__hlds_module, module_info),
MR_COMMON(1,4),
MR_COMMON(1,6),
MR_COMMON(1,8),
MR_COMMON(1,8),
MR_COMMON(0,5),
MR_COMMON(1,0),
MR_COMMON(1,0)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__transform_hlds__rbmm__interproc_region_lifetime__apply_live_region_born_removal_rules_7_0_2,
(MR_Word *) (MR_Integer) 0
},
9,
{
MR_COMMON(4,0),
MR_CTOR0_ADDR(hlds__hlds_module, module_info),
MR_COMMON(1,4),
MR_COMMON(1,6),
MR_COMMON(1,8),
MR_COMMON(1,8),
MR_COMMON(0,5),
MR_COMMON(1,0),
MR_COMMON(1,0)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__transform_hlds__rbmm__interproc_region_lifetime__run_with_dependency_until_fixpoint_9_0_1,
(MR_Word *) (MR_Integer) 0
},
9,
{
MR_COMMON(4,0),
MR_CTOR0_ADDR(hlds__hlds_module, module_info),
MR_COMMON(1,4),
MR_COMMON(1,6),
MR_COMMON(1,8),
MR_COMMON(1,8),
MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id),
MR_COMMON(1,0),
MR_COMMON(1,0)
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__rbmm__interproc_region_lifetime__compute_interproc_region_lifetime_12_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__rbmm__interproc_region_lifetime__remove_this_from_ep_8_0_2;
static const MR_UserClosureId
mercury_data__closure_layout__f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_114_98_109_109_95_95_105_110_116_101_114_112_114_111_99_95_114_101_103_105_111_110_95_108_105_102_101_116_105_109_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_112_112_108_121_95_108_105_118_101_95_114_101_103_105_111_110_95_114_117_108_101_115_95_101_120_101_99_95_112_97_116_104_95_95_91_53_93_95_48_11_0_1;
static const struct mercury_type_6 mercury_common_6[3] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__transform_hlds__rbmm__interproc_region_lifetime__compute_interproc_region_lifetime_12_0_1,
(MR_Word *) (MR_Integer) 0
},
7,
{
MR_COMMON(1,0),
MR_COMMON(1,0),
MR_COMMON(1,0),
MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id),
MR_COMMON(0,1),
MR_COMMON(1,0),
MR_COMMON(1,0)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__transform_hlds__rbmm__interproc_region_lifetime__remove_this_from_ep_8_0_2,
(MR_Word *) (MR_Integer) 0
},
7,
{
MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id),
MR_COMMON(1,6),
MR_CTOR0_ADDR(hlds__hlds_module, module_info),
MR_COMMON(1,4),
MR_CTOR0_ADDR(transform_hlds__rbmm__points_to_graph, rptg_node),
MR_COMMON(1,0),
MR_COMMON(1,0)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_114_98_109_109_95_95_105_110_116_101_114_112_114_111_99_95_114_101_103_105_111_110_95_108_105_102_101_116_105_109_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_112_112_108_121_95_108_105_118_101_95_114_101_103_105_111_110_95_114_117_108_101_115_95_101_120_101_99_95_112_97_116_104_95_95_91_53_93_95_48_11_0_1,
(MR_Word *) (MR_Integer) 0
},
7,
{
MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id),
MR_COMMON(1,6),
MR_CTOR0_ADDR(hlds__hlds_module, module_info),
MR_COMMON(1,4),
MR_CTOR0_ADDR(transform_hlds__rbmm__points_to_graph, rptg_node),
MR_COMMON(1,0),
MR_COMMON(1,0)
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__rbmm__interproc_region_lifetime__dead_removal_rules_6_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__rbmm__interproc_region_lifetime__dead_removal_rules_6_0_3;
static const MR_UserClosureId
mercury_data__closure_layout__f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_114_98_109_109_95_95_105_110_116_101_114_112_114_111_99_95_114_101_103_105_111_110_95_108_105_102_101_116_105_109_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_111_114_110_95_114_101_109_111_118_97_108_95_114_117_108_101_115_95_95_91_51_93_95_48_6_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_114_98_109_109_95_95_105_110_116_101_114_112_114_111_99_95_114_101_103_105_111_110_95_108_105_102_101_116_105_109_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_111_114_110_95_114_101_109_111_118_97_108_95_114_117_108_101_115_95_95_91_51_93_95_48_6_0_3;
static const struct mercury_type_7 mercury_common_7[4] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__transform_hlds__rbmm__interproc_region_lifetime__dead_removal_rules_6_0_1,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_COMMON(1,1),
MR_CTOR0_ADDR(transform_hlds__rbmm__points_to_graph, rptg_node),
MR_COMMON(0,1),
MR_COMMON(0,1)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__transform_hlds__rbmm__interproc_region_lifetime__dead_removal_rules_6_0_3,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_COMMON(1,1),
MR_CTOR0_ADDR(transform_hlds__rbmm__points_to_graph, rptg_node),
MR_COMMON(0,1),
MR_COMMON(0,1)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_114_98_109_109_95_95_105_110_116_101_114_112_114_111_99_95_114_101_103_105_111_110_95_108_105_102_101_116_105_109_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_111_114_110_95_114_101_109_111_118_97_108_95_114_117_108_101_115_95_95_91_51_93_95_48_6_0_1,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_COMMON(1,1),
MR_CTOR0_ADDR(transform_hlds__rbmm__points_to_graph, rptg_node),
MR_COMMON(0,1),
MR_COMMON(0,1)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_114_98_109_109_95_95_105_110_116_101_114_112_114_111_99_95_114_101_103_105_111_110_95_108_105_102_101_116_105_109_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_111_114_110_95_114_101_109_111_118_97_108_95_114_117_108_101_115_95_95_91_51_93_95_48_6_0_3,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_COMMON(1,1),
MR_CTOR0_ADDR(transform_hlds__rbmm__points_to_graph, rptg_node),
MR_COMMON(0,1),
MR_COMMON(0,1)
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__rbmm__interproc_region_lifetime__dead_removal_rule_1_4_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__rbmm__interproc_region_lifetime__dead_removal_rule_2_4_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__rbmm__interproc_region_lifetime__born_removal_rule_1_4_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__rbmm__interproc_region_lifetime__born_removal_rule_2_4_0_1;
static const struct mercury_type_8 mercury_common_8[4] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__transform_hlds__rbmm__interproc_region_lifetime__dead_removal_rule_1_4_0_1,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_COMMON(1,1),
MR_CTOR0_ADDR(transform_hlds__rbmm__points_to_graph, rptg_node),
MR_CTOR0_ADDR(transform_hlds__rbmm__points_to_graph, rptg_node)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__transform_hlds__rbmm__interproc_region_lifetime__dead_removal_rule_2_4_0_1,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_COMMON(1,1),
MR_CTOR0_ADDR(transform_hlds__rbmm__points_to_graph, rptg_node),
MR_CTOR0_ADDR(transform_hlds__rbmm__points_to_graph, rptg_node)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__transform_hlds__rbmm__interproc_region_lifetime__born_removal_rule_1_4_0_1,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_COMMON(1,1),
MR_CTOR0_ADDR(transform_hlds__rbmm__points_to_graph, rptg_node),
MR_CTOR0_ADDR(transform_hlds__rbmm__points_to_graph, rptg_node)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__transform_hlds__rbmm__interproc_region_lifetime__born_removal_rule_2_4_0_1,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_COMMON(1,1),
MR_CTOR0_ADDR(transform_hlds__rbmm__points_to_graph, rptg_node),
MR_CTOR0_ADDR(transform_hlds__rbmm__points_to_graph, rptg_node)
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__rbmm__interproc_region_lifetime__remove_this_from_ep_8_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__rbmm__interproc_region_lifetime__eliminate_primitive_regions_6_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__rbmm__interproc_region_lifetime__retain_non_primitive_regions_at_pp_6_0_1;
static const struct mercury_type_9 mercury_common_9[3] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__transform_hlds__rbmm__interproc_region_lifetime__remove_this_from_ep_8_0_1,
(MR_Word *) (MR_Integer) 0
},
5,
{
MR_CTOR0_ADDR(transform_hlds__rbmm__points_to_graph, rptg_node),
MR_CTOR0_ADDR(transform_hlds__rbmm__points_to_graph, rptg_node),
MR_CTOR0_ADDR(transform_hlds__rbmm__points_to_graph, rptg_node),
MR_COMMON(0,1),
MR_COMMON(0,1)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__transform_hlds__rbmm__interproc_region_lifetime__eliminate_primitive_regions_6_0_1,
(MR_Word *) (MR_Integer) 0
},
5,
{
MR_CTOR0_ADDR(hlds__hlds_module, module_info),
MR_CTOR0_ADDR(transform_hlds__rbmm__points_to_graph, rpt_graph),
MR_CTOR0_ADDR(transform_hlds__rbmm__points_to_graph, rptg_node),
MR_COMMON(0,1),
MR_COMMON(0,1)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__transform_hlds__rbmm__interproc_region_lifetime__retain_non_primitive_regions_at_pp_6_0_1,
(MR_Word *) (MR_Integer) 0
},
5,
{
MR_CTOR0_ADDR(hlds__hlds_module, module_info),
MR_CTOR0_ADDR(transform_hlds__rbmm__points_to_graph, rpt_graph),
MR_CTOR0_ADDR(transform_hlds__rbmm__points_to_graph, rptg_node),
MR_COMMON(0,1),
MR_COMMON(0,1)
}
},
};

static const MR_FA_TypeInfo_Struct1 mercury_data_list__ti_list_1transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0 = {
	&mercury_data_list__type_ctor_info_list_1,
{	(MR_TypeInfo) &mercury_data_transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0
}};

static const MR_FA_TypeInfo_Struct2 mercury_data_tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0list__ti_list_1transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0 = {
	&mercury_data_tree234__type_ctor_info_tree234_2,
{	(MR_TypeInfo) &mercury_data_hlds__hlds_pred__type_ctor_info_pred_proc_id_0,
	(MR_TypeInfo) &mercury_data_list__ti_list_1transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0
}};

static const MR_FA_TypeInfo_Struct2 mercury_data_tree234__ti_tree234_2transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0 = {
	&mercury_data_tree234__type_ctor_info_tree234_2,
{	(MR_TypeInfo) &mercury_data_transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0,
	(MR_TypeInfo) &mercury_data_transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0
}};

static const MR_VA_TypeInfo_Struct6 mercury_data___vti_pred_6hlds__hlds_pred__type_ctor_info_pred_proc_id_0list__ti_list_1transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0list__ti_list_1transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0list__ti_list_1transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0tree234__ti_tree234_2transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0list__ti_list_1transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0 = {
	&mercury_data_builtin__type_ctor_info_pred_0,
	6,
{	(MR_TypeInfo) &mercury_data_hlds__hlds_pred__type_ctor_info_pred_proc_id_0,
	(MR_TypeInfo) &mercury_data_list__ti_list_1transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0,
	(MR_TypeInfo) &mercury_data_list__ti_list_1transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0,
	(MR_TypeInfo) &mercury_data_tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0list__ti_list_1transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0,
	(MR_TypeInfo) &mercury_data_tree234__ti_tree234_2transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0,
	(MR_TypeInfo) &mercury_data_list__ti_list_1transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0
}};

const MR_TypeCtorInfo_Struct mercury_data_transform_hlds__rbmm__interproc_region_lifetime__type_ctor_info_rule_pred_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_EQUIV_GROUND,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___transform_hlds__rbmm__interproc_region_lifetime__rule_pred_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___transform_hlds__rbmm__interproc_region_lifetime__rule_pred_0_0)),
	"transform_hlds.rbmm.interproc_region_lifetime",
	"rule_pred",
	{ 0 },
	{ (void *)&mercury_data___vti_pred_6hlds__hlds_pred__type_ctor_info_pred_proc_id_0list__ti_list_1transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0list__ti_list_1transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0list__ti_list_1transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0tree234__ti_tree234_2transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0list__ti_list_1transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0 },
	-1,
	0,
	NULL
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__rbmm__interproc_region_lifetime__apply_live_region_dead_removal_rules_7_0_1 = {
{
MR_PREDICATE,
"transform_hlds.rbmm.interproc_region_lifetime",
"transform_hlds.rbmm.interproc_region_lifetime",
"dead_removal_rules",
6,
0
},
"transform_hlds.rbmm.interproc_region_lifetime",
"",
0,
""
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__rbmm__interproc_region_lifetime__apply_live_region_dead_removal_rules_7_0_2 = {
{
MR_PREDICATE,
"transform_hlds.rbmm.interproc_region_lifetime",
"transform_hlds.rbmm.interproc_region_lifetime",
"run_with_dependency",
9,
0
},
"transform_hlds.rbmm.interproc_region_lifetime",
"rbmm.interproc_region_lifetime.m",
183,
"d1;c11;"
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__rbmm__interproc_region_lifetime__apply_live_region_born_removal_rules_7_0_1 = {
{
MR_PREDICATE,
"transform_hlds.rbmm.interproc_region_lifetime",
"transform_hlds.rbmm.interproc_region_lifetime",
"born_removal_rules",
6,
0
},
"transform_hlds.rbmm.interproc_region_lifetime",
"",
0,
""
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__rbmm__interproc_region_lifetime__apply_live_region_born_removal_rules_7_0_2 = {
{
MR_PREDICATE,
"transform_hlds.rbmm.interproc_region_lifetime",
"transform_hlds.rbmm.interproc_region_lifetime",
"run_with_dependency",
9,
0
},
"transform_hlds.rbmm.interproc_region_lifetime",
"rbmm.interproc_region_lifetime.m",
183,
"d1;c11;"
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__rbmm__interproc_region_lifetime__compute_interproc_region_lifetime_12_0_1 = {
{
MR_PREDICATE,
"transform_hlds.rbmm.interproc_region_lifetime",
"transform_hlds.rbmm.interproc_region_lifetime",
"compute_constantR",
7,
0
},
"transform_hlds.rbmm.interproc_region_lifetime",
"rbmm.interproc_region_lifetime.m",
103,
"d1;c15;"
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__rbmm__interproc_region_lifetime__ignore_primitive_regions_16_0_1 = {
{
MR_PREDICATE,
"transform_hlds.rbmm.interproc_region_lifetime",
"transform_hlds.rbmm.interproc_region_lifetime",
"eliminate_primitive_regions",
6,
0
},
"transform_hlds.rbmm.interproc_region_lifetime",
"rbmm.interproc_region_lifetime.m",
566,
"d1;c17;"
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__rbmm__interproc_region_lifetime__ignore_primitive_regions_16_0_2 = {
{
MR_PREDICATE,
"transform_hlds.rbmm.interproc_region_lifetime",
"transform_hlds.rbmm.interproc_region_lifetime",
"eliminate_primitive_regions_2",
6,
0
},
"transform_hlds.rbmm.interproc_region_lifetime",
"rbmm.interproc_region_lifetime.m",
575,
"d1;c29;"
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__rbmm__interproc_region_lifetime__run_with_dependency_until_fixpoint_9_0_1 = {
{
MR_PREDICATE,
"transform_hlds.rbmm.interproc_region_lifetime",
"transform_hlds.rbmm.interproc_region_lifetime",
"apply_rule_pred_proc",
9,
0
},
"transform_hlds.rbmm.interproc_region_lifetime",
"rbmm.interproc_region_lifetime.m",
217,
"d1;c10;"
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__rbmm__interproc_region_lifetime__dead_removal_rules_6_0_1 = {
{
MR_PREDICATE,
"transform_hlds.rbmm.interproc_region_lifetime",
"transform_hlds.rbmm.interproc_region_lifetime",
"dead_removal_rule_1",
4,
0
},
"transform_hlds.rbmm.interproc_region_lifetime",
"rbmm.interproc_region_lifetime.m",
365,
"d1;c9;"
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__rbmm__interproc_region_lifetime__dead_removal_rules_6_0_2 = {
{
MR_PREDICATE,
"transform_hlds.rbmm.interproc_region_lifetime",
"transform_hlds.rbmm.interproc_region_lifetime",
"process_one_mapping",
6,
0
},
"transform_hlds.rbmm.interproc_region_lifetime",
"rbmm.interproc_region_lifetime.m",
437,
"d1;c3;"
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__rbmm__interproc_region_lifetime__dead_removal_rules_6_0_3 = {
{
MR_PREDICATE,
"transform_hlds.rbmm.interproc_region_lifetime",
"transform_hlds.rbmm.interproc_region_lifetime",
"dead_removal_rule_2",
4,
0
},
"transform_hlds.rbmm.interproc_region_lifetime",
"rbmm.interproc_region_lifetime.m",
370,
"d1;c12;"
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__rbmm__interproc_region_lifetime__dead_removal_rule_1_4_0_1 = {
{
MR_PREDICATE,
"transform_hlds.rbmm.interproc_region_lifetime",
"transform_hlds.rbmm.interproc_region_lifetime",
"lambda_rbmm_interproc_region_lifetime_m_377",
3,
0
},
"transform_hlds.rbmm.interproc_region_lifetime",
"rbmm.interproc_region_lifetime.m",
377,
"d1;c5;"
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__rbmm__interproc_region_lifetime__dead_removal_rule_2_4_0_1 = {
{
MR_PREDICATE,
"transform_hlds.rbmm.interproc_region_lifetime",
"transform_hlds.rbmm.interproc_region_lifetime",
"lambda_rbmm_interproc_region_lifetime_m_387",
3,
0
},
"transform_hlds.rbmm.interproc_region_lifetime",
"rbmm.interproc_region_lifetime.m",
387,
"d1;c5;"
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__rbmm__interproc_region_lifetime__born_removal_rule_1_4_0_1 = {
{
MR_PREDICATE,
"transform_hlds.rbmm.interproc_region_lifetime",
"transform_hlds.rbmm.interproc_region_lifetime",
"lambda_rbmm_interproc_region_lifetime_m_415",
3,
0
},
"transform_hlds.rbmm.interproc_region_lifetime",
"rbmm.interproc_region_lifetime.m",
415,
"d1;c5;"
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__rbmm__interproc_region_lifetime__born_removal_rule_2_4_0_1 = {
{
MR_PREDICATE,
"transform_hlds.rbmm.interproc_region_lifetime",
"transform_hlds.rbmm.interproc_region_lifetime",
"lambda_rbmm_interproc_region_lifetime_m_426",
3,
0
},
"transform_hlds.rbmm.interproc_region_lifetime",
"rbmm.interproc_region_lifetime.m",
426,
"d1;c5;"
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__rbmm__interproc_region_lifetime__remove_this_from_ep_8_0_1 = {
{
MR_PREDICATE,
"transform_hlds.rbmm.interproc_region_lifetime",
"transform_hlds.rbmm.interproc_region_lifetime",
"find_alpha_source",
5,
0
},
"transform_hlds.rbmm.interproc_region_lifetime",
"rbmm.interproc_region_lifetime.m",
509,
"d2;c11;t;c2;e;c4;"
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__rbmm__interproc_region_lifetime__remove_this_from_ep_8_0_2 = {
{
MR_PREDICATE,
"transform_hlds.rbmm.interproc_region_lifetime",
"transform_hlds.rbmm.interproc_region_lifetime",
"remove_this_region_from_callees_of_proc",
7,
0
},
"transform_hlds.rbmm.interproc_region_lifetime",
"rbmm.interproc_region_lifetime.m",
533,
"d2;c11;t;c2;e;c9;e;c3;"
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__rbmm__interproc_region_lifetime__eliminate_primitive_regions_6_0_1 = {
{
MR_PREDICATE,
"transform_hlds.rbmm.interproc_region_lifetime",
"transform_hlds.rbmm.interproc_region_lifetime",
"retain_non_primitive_regions",
5,
0
},
"transform_hlds.rbmm.interproc_region_lifetime",
"rbmm.interproc_region_lifetime.m",
592,
"d1;c9;"
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__rbmm__interproc_region_lifetime__eliminate_primitive_regions_2_6_0_1 = {
{
MR_PREDICATE,
"transform_hlds.rbmm.interproc_region_lifetime",
"transform_hlds.rbmm.interproc_region_lifetime",
"retain_non_primitive_regions_at_pp",
6,
0
},
"transform_hlds.rbmm.interproc_region_lifetime",
"rbmm.interproc_region_lifetime.m",
619,
"d1;c9;"
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__rbmm__interproc_region_lifetime__retain_non_primitive_regions_at_pp_6_0_1 = {
{
MR_PREDICATE,
"transform_hlds.rbmm.interproc_region_lifetime",
"transform_hlds.rbmm.interproc_region_lifetime",
"retain_non_primitive_regions",
5,
0
},
"transform_hlds.rbmm.interproc_region_lifetime",
"rbmm.interproc_region_lifetime.m",
629,
"d1;c7;"
};

static const MR_UserClosureId
mercury_data__closure_layout__f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_114_98_109_109_95_95_105_110_116_101_114_112_114_111_99_95_114_101_103_105_111_110_95_108_105_102_101_116_105_109_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_112_112_108_121_95_108_105_118_101_95_114_101_103_105_111_110_95_114_117_108_101_115_95_101_120_101_99_95_112_97_116_104_95_95_91_53_93_95_48_11_0_1 = {
{
MR_PREDICATE,
"transform_hlds.rbmm.interproc_region_lifetime",
"transform_hlds.rbmm.interproc_region_lifetime",
"remove_this_region_from_callees_of_proc",
7,
0
},
"transform_hlds.rbmm.interproc_region_lifetime",
"rbmm.interproc_region_lifetime.m",
326,
"d2;c14;t;c2;e;c7;e;c3;"
};

static const MR_UserClosureId
mercury_data__closure_layout__f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_114_98_109_109_95_95_105_110_116_101_114_112_114_111_99_95_114_101_103_105_111_110_95_108_105_102_101_116_105_109_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_111_114_110_95_114_101_109_111_118_97_108_95_114_117_108_101_115_95_95_91_51_93_95_48_6_0_1 = {
{
MR_PREDICATE,
"transform_hlds.rbmm.interproc_region_lifetime",
"transform_hlds.rbmm.interproc_region_lifetime",
"born_removal_rule_1",
4,
0
},
"transform_hlds.rbmm.interproc_region_lifetime",
"rbmm.interproc_region_lifetime.m",
403,
"d1;c8;"
};

static const MR_UserClosureId
mercury_data__closure_layout__f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_114_98_109_109_95_95_105_110_116_101_114_112_114_111_99_95_114_101_103_105_111_110_95_108_105_102_101_116_105_109_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_111_114_110_95_114_101_109_111_118_97_108_95_114_117_108_101_115_95_95_91_51_93_95_48_6_0_2 = {
{
MR_PREDICATE,
"transform_hlds.rbmm.interproc_region_lifetime",
"transform_hlds.rbmm.interproc_region_lifetime",
"process_one_mapping",
6,
0
},
"transform_hlds.rbmm.interproc_region_lifetime",
"rbmm.interproc_region_lifetime.m",
437,
"d1;c3;"
};

static const MR_UserClosureId
mercury_data__closure_layout__f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_114_98_109_109_95_95_105_110_116_101_114_112_114_111_99_95_114_101_103_105_111_110_95_108_105_102_101_116_105_109_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_111_114_110_95_114_101_109_111_118_97_108_95_114_117_108_101_115_95_95_91_51_93_95_48_6_0_3 = {
{
MR_PREDICATE,
"transform_hlds.rbmm.interproc_region_lifetime",
"transform_hlds.rbmm.interproc_region_lifetime",
"born_removal_rule_2",
4,
0
},
"transform_hlds.rbmm.interproc_region_lifetime",
"rbmm.interproc_region_lifetime.m",
408,
"d1;c11;"
};

MR_decl_entry(transform_hlds__dependency_graph__module_info_ensure_dependency_info_2_0);
MR_decl_entry(hlds__hlds_module__module_info_get_maybe_dependency_info_2_0);
MR_decl_entry(hlds__hlds_module__hlds_dependency_info_get_dependency_ordering_2_0);
MR_decl_entry(list__reverse_2_0);
MR_decl_entry(list__foldl_4_1);
MR_decl_entry(libs__compiler_util__unexpected_2_0);

MR_BEGIN_MODULE(transform_hlds__rbmm__interproc_region_lifetime_module0)
	MR_init_entry1(transform_hlds__rbmm__interproc_region_lifetime__apply_live_region_dead_removal_rules_7_0);
	MR_init_label5(transform_hlds__rbmm__interproc_region_lifetime__apply_live_region_dead_removal_rules_7_0,2,3,6,7,4)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__rbmm__interproc_region_lifetime__apply_live_region_dead_removal_rules_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_r5;
	MR_sv(5) = MR_r6;
	MR_np_call_localret_ent(transform_hlds__dependency_graph__module_info_ensure_dependency_info_2_0,
		transform_hlds__rbmm__interproc_region_lifetime__apply_live_region_dead_removal_rules_7_0_i2);
MR_def_label(transform_hlds__rbmm__interproc_region_lifetime__apply_live_region_dead_removal_rules_7_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_maybe_dependency_info_2_0,
		transform_hlds__rbmm__interproc_region_lifetime__apply_live_region_dead_removal_rules_7_0_i3);
MR_def_label(transform_hlds__rbmm__interproc_region_lifetime__apply_live_region_dead_removal_rules_7_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(transform_hlds__rbmm__interproc_region_lifetime__apply_live_region_dead_removal_rules_7_0_i4);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id);
	MR_r2 = MR_ctfield(1, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(hlds__hlds_module__hlds_dependency_info_get_dependency_ordering_2_0,
		transform_hlds__rbmm__interproc_region_lifetime__apply_live_region_dead_removal_rules_7_0_i6);
MR_def_label(transform_hlds__rbmm__interproc_region_lifetime__apply_live_region_dead_removal_rules_7_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_np_call_localret_ent(list__reverse_2_0,
		transform_hlds__rbmm__interproc_region_lifetime__apply_live_region_dead_removal_rules_7_0_i7);
MR_def_label(transform_hlds__rbmm__interproc_region_lifetime__apply_live_region_dead_removal_rules_7_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 9);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(5,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(transform_hlds__rbmm__interproc_region_lifetime__run_with_dependency_9_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 6;
	MR_tfield(0, MR_tempr1, 3) = (MR_Word) MR_TAG_COMMON(0,3,0);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(6);
	MR_tfield(0, MR_tempr1, 5) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 6) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 7) = MR_sv(3);
	MR_tfield(0, MR_tempr1, 8) = MR_sv(4);
	MR_r4 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,9);
	MR_r5 = MR_sv(5);
	MR_succip_word = MR_sv(8);
	MR_decr_sp(8);
	MR_np_tailcall_ent(list__foldl_4_1);
	}
MR_def_label(transform_hlds__rbmm__interproc_region_lifetime__apply_live_region_dead_removal_rules_7_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("rbmm.interproc_region_lifetime.m", 32);
	MR_r2 = (MR_Word) MR_string_const("apply_live_region_rule: no dependency info", 42);
	MR_succip_word = MR_sv(8);
	MR_decr_sp(8);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__rbmm__interproc_region_lifetime_module1)
	MR_init_entry1(transform_hlds__rbmm__interproc_region_lifetime__apply_live_region_born_removal_rules_7_0);
	MR_init_label5(transform_hlds__rbmm__interproc_region_lifetime__apply_live_region_born_removal_rules_7_0,2,3,6,7,4)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__rbmm__interproc_region_lifetime__apply_live_region_born_removal_rules_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_r5;
	MR_sv(5) = MR_r6;
	MR_np_call_localret_ent(transform_hlds__dependency_graph__module_info_ensure_dependency_info_2_0,
		transform_hlds__rbmm__interproc_region_lifetime__apply_live_region_born_removal_rules_7_0_i2);
MR_def_label(transform_hlds__rbmm__interproc_region_lifetime__apply_live_region_born_removal_rules_7_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_maybe_dependency_info_2_0,
		transform_hlds__rbmm__interproc_region_lifetime__apply_live_region_born_removal_rules_7_0_i3);
MR_def_label(transform_hlds__rbmm__interproc_region_lifetime__apply_live_region_born_removal_rules_7_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(transform_hlds__rbmm__interproc_region_lifetime__apply_live_region_born_removal_rules_7_0_i4);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id);
	MR_r2 = MR_ctfield(1, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(hlds__hlds_module__hlds_dependency_info_get_dependency_ordering_2_0,
		transform_hlds__rbmm__interproc_region_lifetime__apply_live_region_born_removal_rules_7_0_i6);
MR_def_label(transform_hlds__rbmm__interproc_region_lifetime__apply_live_region_born_removal_rules_7_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_np_call_localret_ent(list__reverse_2_0,
		transform_hlds__rbmm__interproc_region_lifetime__apply_live_region_born_removal_rules_7_0_i7);
MR_def_label(transform_hlds__rbmm__interproc_region_lifetime__apply_live_region_born_removal_rules_7_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 9);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(5,1);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(transform_hlds__rbmm__interproc_region_lifetime__run_with_dependency_9_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 6;
	MR_tfield(0, MR_tempr1, 3) = (MR_Word) MR_TAG_COMMON(0,3,1);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(6);
	MR_tfield(0, MR_tempr1, 5) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 6) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 7) = MR_sv(3);
	MR_tfield(0, MR_tempr1, 8) = MR_sv(4);
	MR_r4 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,9);
	MR_r5 = MR_sv(5);
	MR_succip_word = MR_sv(8);
	MR_decr_sp(8);
	MR_np_tailcall_ent(list__foldl_4_1);
	}
MR_def_label(transform_hlds__rbmm__interproc_region_lifetime__apply_live_region_born_removal_rules_7_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("rbmm.interproc_region_lifetime.m", 32);
	MR_r2 = (MR_Word) MR_string_const("apply_live_region_rule: no dependency info", 42);
	MR_succip_word = MR_sv(8);
	MR_decr_sp(8);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__map__init_0_0);
MR_decl_entry(map__foldl_4_0);

MR_BEGIN_MODULE(transform_hlds__rbmm__interproc_region_lifetime_module2)
	MR_init_entry1(transform_hlds__rbmm__interproc_region_lifetime__compute_interproc_region_lifetime_12_0);
	MR_init_label4(transform_hlds__rbmm__interproc_region_lifetime__compute_interproc_region_lifetime_12_0,2,3,4,5)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__transform_hlds__rbmm__interproc_region_lifetime__compute_interproc_region_lifetime_12_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_sv(5) = MR_r5;
	MR_sv(6) = MR_r6;
	MR_sv(7) = MR_r7;
	MR_sv(8) = MR_r9;
	MR_r6 = MR_r8;
	MR_np_call_localret_ent(transform_hlds__rbmm__interproc_region_lifetime__apply_live_region_born_removal_rules_7_0,
		transform_hlds__rbmm__interproc_region_lifetime__compute_interproc_region_lifetime_12_0_i2);
MR_def_label(transform_hlds__rbmm__interproc_region_lifetime__compute_interproc_region_lifetime_12_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(4);
	MR_r5 = MR_sv(5);
	MR_r6 = MR_sv(8);
	}
	MR_np_call_localret_ent(transform_hlds__rbmm__interproc_region_lifetime__apply_live_region_dead_removal_rules_7_0,
		transform_hlds__rbmm__interproc_region_lifetime__compute_interproc_region_lifetime_12_0_i3);
MR_def_label(transform_hlds__rbmm__interproc_region_lifetime__compute_interproc_region_lifetime_12_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 6);
	MR_sv(3) = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(6,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(transform_hlds__rbmm__interproc_region_lifetime__compute_constantR_7_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 3;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(6);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(7);
	MR_tfield(0, MR_tempr1, 5) = MR_sv(1);
	MR_sv(2) = MR_r1;
	MR_sv(4) = (MR_Word) MR_TAG_COMMON(0,0,6);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id);
	MR_r2 = MR_sv(4);
	}
	MR_np_call_localret_ent(fn__map__init_0_0,
		transform_hlds__rbmm__interproc_region_lifetime__compute_interproc_region_lifetime_12_0_i4);
MR_def_label(transform_hlds__rbmm__interproc_region_lifetime__compute_interproc_region_lifetime_12_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r6 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id);
	MR_r2 = MR_sv(4);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,1,9);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(2);
	MR_np_call_localret_ent(map__foldl_4_0,
		transform_hlds__rbmm__interproc_region_lifetime__compute_interproc_region_lifetime_12_0_i5);
MR_def_label(transform_hlds__rbmm__interproc_region_lifetime__compute_interproc_region_lifetime_12_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_decr_sp_and_return(9);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__rbmm__interproc_region_lifetime_module3)
	MR_init_entry1(transform_hlds__rbmm__interproc_region_lifetime__ignore_primitive_regions_16_0);
	MR_init_label7(transform_hlds__rbmm__interproc_region_lifetime__ignore_primitive_regions_16_0,2,3,4,5,6,7,8)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__transform_hlds__rbmm__interproc_region_lifetime__ignore_primitive_regions_16_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(12);
	MR_sv(12) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(2,2);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(transform_hlds__rbmm__interproc_region_lifetime__eliminate_primitive_regions_6_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr1, 3) = MR_r1;
	MR_tempr2 = MR_r2;
	MR_tfield(0, MR_tempr1, 4) = MR_tempr2;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_tempr2;
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_r5;
	MR_sv(5) = MR_r6;
	MR_sv(6) = MR_r7;
	MR_sv(7) = MR_r8;
	MR_sv(8) = MR_r9;
	MR_sv(9) = MR_tempr1;
	MR_sv(10) = (MR_Word) MR_TAG_COMMON(0,1,9);
	MR_sv(11) = (MR_Word) MR_TAG_COMMON(0,0,6);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id);
	MR_r2 = MR_sv(11);
	MR_r5 = MR_r3;
	MR_r3 = MR_sv(10);
	MR_r4 = MR_tempr1;
	MR_r6 = MR_r5;
	}
	MR_np_call_localret_ent(map__foldl_4_0,
		transform_hlds__rbmm__interproc_region_lifetime__ignore_primitive_regions_16_0_i2);
MR_def_label(transform_hlds__rbmm__interproc_region_lifetime__ignore_primitive_regions_16_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r5 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id);
	MR_r2 = MR_sv(11);
	MR_r3 = MR_sv(10);
	MR_r4 = MR_sv(9);
	MR_r6 = MR_r5;
	MR_np_call_localret_ent(map__foldl_4_0,
		transform_hlds__rbmm__interproc_region_lifetime__ignore_primitive_regions_16_0_i3);
MR_def_label(transform_hlds__rbmm__interproc_region_lifetime__ignore_primitive_regions_16_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r5 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id);
	MR_r2 = MR_sv(11);
	MR_r3 = MR_sv(10);
	MR_r4 = MR_sv(9);
	MR_r6 = MR_r5;
	MR_np_call_localret_ent(map__foldl_4_0,
		transform_hlds__rbmm__interproc_region_lifetime__ignore_primitive_regions_16_0_i4);
MR_def_label(transform_hlds__rbmm__interproc_region_lifetime__ignore_primitive_regions_16_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r5 = MR_sv(5);
	MR_sv(5) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id);
	MR_r2 = MR_sv(11);
	MR_r3 = MR_sv(10);
	MR_r4 = MR_sv(9);
	MR_r6 = MR_r5;
	MR_np_call_localret_ent(map__foldl_4_0,
		transform_hlds__rbmm__interproc_region_lifetime__ignore_primitive_regions_16_0_i5);
MR_def_label(transform_hlds__rbmm__interproc_region_lifetime__ignore_primitive_regions_16_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_r4 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(2,3);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(transform_hlds__rbmm__interproc_region_lifetime__eliminate_primitive_regions_2_6_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(2);
	MR_sv(1) = MR_r1;
	MR_r5 = MR_sv(6);
	MR_sv(6) = MR_tempr1;
	MR_sv(9) = (MR_Word) MR_TAG_COMMON(0,1,11);
	MR_sv(10) = (MR_Word) MR_TAG_COMMON(0,1,12);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id);
	MR_r2 = MR_sv(9);
	MR_r3 = MR_sv(10);
	MR_r6 = MR_r5;
	}
	MR_np_call_localret_ent(map__foldl_4_0,
		transform_hlds__rbmm__interproc_region_lifetime__ignore_primitive_regions_16_0_i6);
MR_def_label(transform_hlds__rbmm__interproc_region_lifetime__ignore_primitive_regions_16_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id);
	MR_r2 = MR_sv(9);
	MR_r3 = MR_sv(10);
	MR_r4 = MR_sv(6);
	MR_r5 = MR_sv(7);
	MR_r6 = MR_r5;
	MR_np_call_localret_ent(map__foldl_4_0,
		transform_hlds__rbmm__interproc_region_lifetime__ignore_primitive_regions_16_0_i7);
MR_def_label(transform_hlds__rbmm__interproc_region_lifetime__ignore_primitive_regions_16_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_sv(6);
	MR_sv(6) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id);
	MR_r2 = MR_sv(9);
	MR_r3 = MR_sv(10);
	MR_r5 = MR_sv(8);
	MR_r6 = MR_r5;
	MR_np_call_localret_ent(map__foldl_4_0,
		transform_hlds__rbmm__interproc_region_lifetime__ignore_primitive_regions_16_0_i8);
MR_def_label(transform_hlds__rbmm__interproc_region_lifetime__ignore_primitive_regions_16_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(5);
	MR_r4 = MR_sv(1);
	MR_r5 = MR_sv(2);
	MR_r6 = MR_sv(6);
	MR_r7 = MR_tempr1;
	MR_decr_sp_and_return(12);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(map__lookup_3_0);
MR_decl_entry(set__union_3_0);
MR_decl_entry(set__difference_3_0);
MR_decl_entry(svmap__set_4_0);

MR_BEGIN_MODULE(transform_hlds__rbmm__interproc_region_lifetime_module4)
	MR_init_entry1(transform_hlds__rbmm__interproc_region_lifetime__compute_constantR_7_0);
	MR_init_label6(transform_hlds__rbmm__interproc_region_lifetime__compute_constantR_7_0,2,3,4,5,6,7)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__rbmm__interproc_region_lifetime__compute_constantR_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_r5;
	MR_sv(5) = MR_r6;
	MR_sv(6) = (MR_Word) MR_TAG_COMMON(0,0,6);
	MR_r3 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id);
	MR_r2 = MR_sv(6);
	MR_np_call_localret_ent(map__lookup_3_0,
		transform_hlds__rbmm__interproc_region_lifetime__compute_constantR_7_0_i2);
MR_def_label(transform_hlds__rbmm__interproc_region_lifetime__compute_constantR_7_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id);
	MR_r2 = MR_sv(6);
	MR_r4 = MR_sv(3);
	MR_np_call_localret_ent(map__lookup_3_0,
		transform_hlds__rbmm__interproc_region_lifetime__compute_constantR_7_0_i3);
MR_def_label(transform_hlds__rbmm__interproc_region_lifetime__compute_constantR_7_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id);
	MR_r2 = MR_sv(6);
	MR_r4 = MR_sv(3);
	MR_np_call_localret_ent(map__lookup_3_0,
		transform_hlds__rbmm__interproc_region_lifetime__compute_constantR_7_0_i4);
MR_def_label(transform_hlds__rbmm__interproc_region_lifetime__compute_constantR_7_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__rbmm__points_to_graph, rptg_node);
	MR_r3 = MR_sv(2);
	MR_np_call_localret_ent(set__union_3_0,
		transform_hlds__rbmm__interproc_region_lifetime__compute_constantR_7_0_i5);
MR_def_label(transform_hlds__rbmm__interproc_region_lifetime__compute_constantR_7_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__rbmm__points_to_graph, rptg_node);
	MR_r3 = MR_sv(1);
	MR_np_call_localret_ent(set__difference_3_0,
		transform_hlds__rbmm__interproc_region_lifetime__compute_constantR_7_0_i6);
MR_def_label(transform_hlds__rbmm__interproc_region_lifetime__compute_constantR_7_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__rbmm__points_to_graph, rptg_node);
	MR_r3 = MR_sv(4);
	MR_np_call_localret_ent(set__difference_3_0,
		transform_hlds__rbmm__interproc_region_lifetime__compute_constantR_7_0_i7);
MR_def_label(transform_hlds__rbmm__interproc_region_lifetime__compute_constantR_7_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(3);
	MR_r5 = MR_sv(5);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(svmap__set_4_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(transform_hlds__rbmm__region_liveness_info__proc_region_set_table_equal_2_0);

MR_BEGIN_MODULE(transform_hlds__rbmm__interproc_region_lifetime_module5)
	MR_init_entry1(transform_hlds__rbmm__interproc_region_lifetime__run_with_dependency_until_fixpoint_9_0);
	MR_init_label4(transform_hlds__rbmm__interproc_region_lifetime__run_with_dependency_until_fixpoint_9_0,13,2,5,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__rbmm__interproc_region_lifetime__run_with_dependency_until_fixpoint_9_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
MR_def_label(transform_hlds__rbmm__interproc_region_lifetime__run_with_dependency_until_fixpoint_9_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6, MR_tempr7;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 9);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(5,2);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(transform_hlds__rbmm__interproc_region_lifetime__apply_rule_pred_proc_9_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 6;
	MR_tfield(0, MR_tempr1, 3) = MR_r1;
	MR_tempr2 = MR_r3;
	MR_tfield(0, MR_tempr1, 4) = MR_tempr2;
	MR_tempr3 = MR_r4;
	MR_tfield(0, MR_tempr1, 5) = MR_tempr3;
	MR_tempr4 = MR_r5;
	MR_tfield(0, MR_tempr1, 6) = MR_tempr4;
	MR_tempr5 = MR_r6;
	MR_tfield(0, MR_tempr1, 7) = MR_tempr5;
	MR_tempr6 = MR_r7;
	MR_tfield(0, MR_tempr1, 8) = MR_tempr6;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_tempr2;
	MR_sv(4) = MR_tempr3;
	MR_sv(5) = MR_tempr4;
	MR_sv(6) = MR_tempr5;
	MR_sv(7) = MR_tempr6;
	MR_tempr7 = MR_r8;
	MR_sv(8) = MR_tempr7;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,9);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(2);
	MR_r5 = MR_tempr7;
	}
	MR_np_call_localret_ent(list__foldl_4_1,
		transform_hlds__rbmm__interproc_region_lifetime__run_with_dependency_until_fixpoint_9_0_i2);
MR_def_label(transform_hlds__rbmm__interproc_region_lifetime__run_with_dependency_until_fixpoint_9_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(8);
	MR_sv(8) = MR_r1;
	MR_np_call_localret_ent(transform_hlds__rbmm__region_liveness_info__proc_region_set_table_equal_2_0,
		transform_hlds__rbmm__interproc_region_lifetime__run_with_dependency_until_fixpoint_9_0_i5);
MR_def_label(transform_hlds__rbmm__interproc_region_lifetime__run_with_dependency_until_fixpoint_9_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__rbmm__interproc_region_lifetime__run_with_dependency_until_fixpoint_9_0_i3);
	}
	MR_r1 = MR_sv(8);
	MR_decr_sp_and_return(9);
MR_def_label(transform_hlds__rbmm__interproc_region_lifetime__run_with_dependency_until_fixpoint_9_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(8);
	MR_r8 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(4);
	MR_r5 = MR_sv(5);
	MR_r6 = MR_sv(6);
	MR_r7 = MR_sv(7);
	MR_succip_word = MR_sv(9);
	MR_GOTO_LAB(transform_hlds__rbmm__interproc_region_lifetime__run_with_dependency_until_fixpoint_9_0_i13);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(transform_hlds__smm_common__some_are_special_preds_2_0);

MR_BEGIN_MODULE(transform_hlds__rbmm__interproc_region_lifetime_module6)
	MR_init_entry1(transform_hlds__rbmm__interproc_region_lifetime__run_with_dependency_9_0);
	MR_init_label2(transform_hlds__rbmm__interproc_region_lifetime__run_with_dependency_9_0,4,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__rbmm__interproc_region_lifetime__run_with_dependency_9_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_sv(5) = MR_r5;
	MR_sv(6) = MR_r6;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r7;
	MR_sv(7) = MR_tempr1;
	MR_sv(8) = MR_r8;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(transform_hlds__smm_common__some_are_special_preds_2_0,
		transform_hlds__rbmm__interproc_region_lifetime__run_with_dependency_9_0_i4);
MR_def_label(transform_hlds__rbmm__interproc_region_lifetime__run_with_dependency_9_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__rbmm__interproc_region_lifetime__run_with_dependency_9_0_i2);
	}
	MR_r1 = MR_sv(8);
	MR_decr_sp_and_return(9);
MR_def_label(transform_hlds__rbmm__interproc_region_lifetime__run_with_dependency_9_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(4);
	MR_r5 = MR_sv(5);
	MR_r6 = MR_sv(6);
	MR_r7 = MR_sv(7);
	MR_r8 = MR_sv(8);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r7;
	MR_r7 = MR_r6;
	MR_r6 = MR_r5;
	MR_r5 = MR_r4;
	MR_r4 = MR_r3;
	MR_r3 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_np_tailcall_ent(transform_hlds__rbmm__interproc_region_lifetime__run_with_dependency_until_fixpoint_9_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

extern const MR_TypeCtorInfo_Struct mercury_data_transform_hlds__rbmm__points_to_info__type_ctor_info_rpta_info_0;

MR_BEGIN_MODULE(transform_hlds__rbmm__interproc_region_lifetime_module7)
	MR_init_entry1(transform_hlds__rbmm__interproc_region_lifetime__apply_rule_pred_proc_9_0);
	MR_init_label4(transform_hlds__rbmm__interproc_region_lifetime__apply_rule_pred_proc_9_0,2,3,4,5)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__rbmm__interproc_region_lifetime__apply_rule_pred_proc_9_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(11);
	MR_sv(11) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_sv(5) = MR_r5;
	MR_sv(6) = MR_r6;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r7;
	MR_sv(7) = MR_tempr1;
	MR_sv(9) = MR_r8;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__rbmm__points_to_info, rpta_info);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(map__lookup_3_0,
		transform_hlds__rbmm__interproc_region_lifetime__apply_rule_pred_proc_9_0_i2);
MR_def_label(transform_hlds__rbmm__interproc_region_lifetime__apply_rule_pred_proc_9_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,8);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(7);
	MR_np_call_localret_ent(map__lookup_3_0,
		transform_hlds__rbmm__interproc_region_lifetime__apply_rule_pred_proc_9_0_i3);
MR_def_label(transform_hlds__rbmm__interproc_region_lifetime__apply_rule_pred_proc_9_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(5);
	MR_sv(5) = MR_r1;
	MR_sv(10) = (MR_Word) MR_TAG_COMMON(0,1,11);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id);
	MR_r2 = MR_sv(10);
	MR_r4 = MR_sv(7);
	MR_np_call_localret_ent(map__lookup_3_0,
		transform_hlds__rbmm__interproc_region_lifetime__apply_rule_pred_proc_9_0_i4);
MR_def_label(transform_hlds__rbmm__interproc_region_lifetime__apply_rule_pred_proc_9_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(6);
	MR_sv(6) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id);
	MR_r2 = MR_sv(10);
	MR_r4 = MR_sv(7);
	MR_np_call_localret_ent(map__lookup_3_0,
		transform_hlds__rbmm__interproc_region_lifetime__apply_rule_pred_proc_9_0_i5);
MR_def_label(transform_hlds__rbmm__interproc_region_lifetime__apply_rule_pred_proc_9_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r8 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(2);
	MR_r5 = MR_sv(8);
	MR_r6 = MR_sv(3);
	MR_r7 = MR_sv(6);
	MR_r9 = MR_sv(9);
	MR_succip_word = MR_sv(11);
	MR_decr_sp(11);
	MR_np_tailcall_ent(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_114_98_109_109_95_95_105_110_116_101_114_112_114_111_99_95_114_101_103_105_111_110_95_108_105_102_101_116_105_109_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_112_112_108_121_95_108_105_118_101_95_114_101_103_105_111_110_95_114_117_108_101_115_95_101_120_101_99_95_112_97_116_104_115_95_95_91_53_93_95_48_11_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(set__intersect_3_0);
MR_decl_entry(set__fold_4_1);
MR_decl_entry(fn__set__init_0_0);
MR_decl_entry(map__foldl2_6_0);

MR_BEGIN_MODULE(transform_hlds__rbmm__interproc_region_lifetime_module8)
	MR_init_entry1(transform_hlds__rbmm__interproc_region_lifetime__dead_removal_rules_6_0);
	MR_init_label6(transform_hlds__rbmm__interproc_region_lifetime__dead_removal_rules_6_0,2,3,4,5,6,7)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__rbmm__interproc_region_lifetime__dead_removal_rules_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r5;
	MR_sv(4) = (MR_Word) MR_TAG_COMMON(0,0,6);
	MR_r3 = MR_r4;
	MR_r4 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id);
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(map__lookup_3_0,
		transform_hlds__rbmm__interproc_region_lifetime__dead_removal_rules_6_0_i2);
MR_def_label(transform_hlds__rbmm__interproc_region_lifetime__dead_removal_rules_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__rbmm__points_to_graph, rptg_node);
	MR_r3 = MR_sv(2);
	MR_np_call_localret_ent(set__intersect_3_0,
		transform_hlds__rbmm__interproc_region_lifetime__dead_removal_rules_6_0_i3);
MR_def_label(transform_hlds__rbmm__interproc_region_lifetime__dead_removal_rules_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(7,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(transform_hlds__rbmm__interproc_region_lifetime__dead_removal_rule_1_4_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(3);
	MR_r4 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__rbmm__points_to_graph, rptg_node);
	MR_r2 = MR_sv(4);
	MR_r5 = MR_sv(1);
	}
	MR_np_call_localret_ent(set__fold_4_1,
		transform_hlds__rbmm__interproc_region_lifetime__dead_removal_rules_6_0_i4);
MR_def_label(transform_hlds__rbmm__interproc_region_lifetime__dead_removal_rules_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__rbmm__points_to_graph, rptg_node);
	MR_np_call_localret_ent(fn__set__init_0_0,
		transform_hlds__rbmm__interproc_region_lifetime__dead_removal_rules_6_0_i5);
MR_def_label(transform_hlds__rbmm__interproc_region_lifetime__dead_removal_rules_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__rbmm__points_to_graph, rptg_node);
	MR_np_call_localret_ent(fn__set__init_0_0,
		transform_hlds__rbmm__interproc_region_lifetime__dead_removal_rules_6_0_i6);
MR_def_label(transform_hlds__rbmm__interproc_region_lifetime__dead_removal_rules_6_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r8 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__rbmm__points_to_graph, rptg_node);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__rbmm__points_to_graph, rptg_node);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_r3;
	MR_r5 = (MR_Word) MR_TAG_COMMON(0,3,2);
	MR_r6 = MR_sv(3);
	MR_r7 = MR_sv(2);
	MR_np_call_localret_ent(map__foldl2_6_0,
		transform_hlds__rbmm__interproc_region_lifetime__dead_removal_rules_6_0_i7);
MR_def_label(transform_hlds__rbmm__interproc_region_lifetime__dead_removal_rules_6_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(7,1);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(transform_hlds__rbmm__interproc_region_lifetime__dead_removal_rule_2_4_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(3);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__rbmm__points_to_graph, rptg_node);
	MR_r4 = MR_r2;
	MR_r2 = MR_sv(4);
	MR_r5 = MR_sv(1);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(set__fold_4_1);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(solutions__solutions_2_1);
MR_decl_entry(set__list_to_set_2_0);

MR_BEGIN_MODULE(transform_hlds__rbmm__interproc_region_lifetime_module9)
	MR_init_entry1(transform_hlds__rbmm__interproc_region_lifetime__dead_removal_rule_1_4_0);
	MR_init_label2(transform_hlds__rbmm__interproc_region_lifetime__dead_removal_rule_1_4_0,2,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__rbmm__interproc_region_lifetime__dead_removal_rule_1_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(8,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(transform_hlds__rbmm__interproc_region_lifetime__IntroducedFrom__pred__dead_removal_rule_1__377__1_3_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr1, 3) = MR_r1;
	MR_tfield(0, MR_tempr1, 4) = MR_r2;
	MR_sv(1) = MR_r3;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__rbmm__points_to_graph, rptg_node);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(solutions__solutions_2_1,
		transform_hlds__rbmm__interproc_region_lifetime__dead_removal_rule_1_4_0_i2);
MR_def_label(transform_hlds__rbmm__interproc_region_lifetime__dead_removal_rule_1_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__rbmm__points_to_graph, rptg_node);
	MR_np_call_localret_ent(set__list_to_set_2_0,
		transform_hlds__rbmm__interproc_region_lifetime__dead_removal_rule_1_4_0_i3);
MR_def_label(transform_hlds__rbmm__interproc_region_lifetime__dead_removal_rule_1_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__rbmm__points_to_graph, rptg_node);
	MR_r2 = MR_sv(1);
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(set__difference_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__rbmm__interproc_region_lifetime_module10)
	MR_init_entry1(transform_hlds__rbmm__interproc_region_lifetime__dead_removal_rule_2_4_0);
	MR_init_label2(transform_hlds__rbmm__interproc_region_lifetime__dead_removal_rule_2_4_0,2,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__rbmm__interproc_region_lifetime__dead_removal_rule_2_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(8,1);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(transform_hlds__rbmm__interproc_region_lifetime__IntroducedFrom__pred__dead_removal_rule_2__387__1_3_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr1, 3) = MR_r1;
	MR_tfield(0, MR_tempr1, 4) = MR_r2;
	MR_sv(1) = MR_r3;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__rbmm__points_to_graph, rptg_node);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(solutions__solutions_2_1,
		transform_hlds__rbmm__interproc_region_lifetime__dead_removal_rule_2_4_0_i2);
MR_def_label(transform_hlds__rbmm__interproc_region_lifetime__dead_removal_rule_2_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__rbmm__points_to_graph, rptg_node);
	MR_np_call_localret_ent(set__list_to_set_2_0,
		transform_hlds__rbmm__interproc_region_lifetime__dead_removal_rule_2_4_0_i3);
MR_def_label(transform_hlds__rbmm__interproc_region_lifetime__dead_removal_rule_2_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__rbmm__points_to_graph, rptg_node);
	MR_r2 = MR_sv(1);
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(set__difference_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__rbmm__interproc_region_lifetime_module11)
	MR_init_entry1(transform_hlds__rbmm__interproc_region_lifetime__born_removal_rules_6_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__rbmm__interproc_region_lifetime__born_removal_rules_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r4;
	MR_r4 = MR_r5;
	MR_np_tailcall_ent(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_114_98_109_109_95_95_105_110_116_101_114_112_114_111_99_95_114_101_103_105_111_110_95_108_105_102_101_116_105_109_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_111_114_110_95_114_101_109_111_118_97_108_95_114_117_108_101_115_95_95_91_51_93_95_48_6_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__rbmm__interproc_region_lifetime_module12)
	MR_init_entry1(transform_hlds__rbmm__interproc_region_lifetime__born_removal_rule_1_4_0);
	MR_init_label2(transform_hlds__rbmm__interproc_region_lifetime__born_removal_rule_1_4_0,2,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__rbmm__interproc_region_lifetime__born_removal_rule_1_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(8,2);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(transform_hlds__rbmm__interproc_region_lifetime__IntroducedFrom__pred__born_removal_rule_1__415__1_3_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr1, 3) = MR_r1;
	MR_tfield(0, MR_tempr1, 4) = MR_r2;
	MR_sv(1) = MR_r3;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__rbmm__points_to_graph, rptg_node);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(solutions__solutions_2_1,
		transform_hlds__rbmm__interproc_region_lifetime__born_removal_rule_1_4_0_i2);
MR_def_label(transform_hlds__rbmm__interproc_region_lifetime__born_removal_rule_1_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__rbmm__points_to_graph, rptg_node);
	MR_np_call_localret_ent(set__list_to_set_2_0,
		transform_hlds__rbmm__interproc_region_lifetime__born_removal_rule_1_4_0_i3);
MR_def_label(transform_hlds__rbmm__interproc_region_lifetime__born_removal_rule_1_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__rbmm__points_to_graph, rptg_node);
	MR_r2 = MR_sv(1);
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(set__difference_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__rbmm__interproc_region_lifetime_module13)
	MR_init_entry1(transform_hlds__rbmm__interproc_region_lifetime__born_removal_rule_2_4_0);
	MR_init_label2(transform_hlds__rbmm__interproc_region_lifetime__born_removal_rule_2_4_0,2,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__rbmm__interproc_region_lifetime__born_removal_rule_2_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(8,3);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(transform_hlds__rbmm__interproc_region_lifetime__IntroducedFrom__pred__born_removal_rule_2__426__1_3_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr1, 3) = MR_r1;
	MR_tfield(0, MR_tempr1, 4) = MR_r2;
	MR_sv(1) = MR_r3;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__rbmm__points_to_graph, rptg_node);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(solutions__solutions_2_1,
		transform_hlds__rbmm__interproc_region_lifetime__born_removal_rule_2_4_0_i2);
MR_def_label(transform_hlds__rbmm__interproc_region_lifetime__born_removal_rule_2_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__rbmm__points_to_graph, rptg_node);
	MR_np_call_localret_ent(set__list_to_set_2_0,
		transform_hlds__rbmm__interproc_region_lifetime__born_removal_rule_2_4_0_i3);
MR_def_label(transform_hlds__rbmm__interproc_region_lifetime__born_removal_rule_2_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__rbmm__points_to_graph, rptg_node);
	MR_r2 = MR_sv(1);
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(set__difference_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__rbmm__interproc_region_lifetime_module14)
	MR_init_entry1(transform_hlds__rbmm__interproc_region_lifetime__process_one_mapping_6_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__rbmm__interproc_region_lifetime__process_one_mapping_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_r2 = MR_r3;
	MR_r3 = MR_r4;
	MR_np_tailcall_ent(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_114_98_109_109_95_95_105_110_116_101_114_112_114_111_99_95_114_101_103_105_111_110_95_108_105_102_101_116_105_109_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_111_110_101_95_109_97_112_112_105_110_103_95_95_91_49_93_95_48_6_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(set__equal_2_0);
MR_decl_entry(fn__set__to_sorted_list_1_0);

MR_BEGIN_MODULE(transform_hlds__rbmm__interproc_region_lifetime_module15)
	MR_init_entry1(transform_hlds__rbmm__interproc_region_lifetime__remove_this_from_ep_8_0);
	MR_init_label8(transform_hlds__rbmm__interproc_region_lifetime__remove_this_from_ep_8_0,43,7,6,9,10,11,12,13)
	MR_init_label8(transform_hlds__rbmm__interproc_region_lifetime__remove_this_from_ep_8_0,14,16,15,18,19,20,21,4)
	MR_init_label1(transform_hlds__rbmm__interproc_region_lifetime__remove_this_from_ep_8_0,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__rbmm__interproc_region_lifetime__remove_this_from_ep_8_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(12);
	MR_sv(12) = (MR_Word) MR_succip;
MR_def_label(transform_hlds__rbmm__interproc_region_lifetime__remove_this_from_ep_8_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(transform_hlds__rbmm__interproc_region_lifetime__remove_this_from_ep_8_0_i3);
	}
	MR_sv(8) = MR_ctfield(1, MR_r1, 1);
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr1 = MR_ctfield(1, MR_r1, 0);
	MR_tempr2 = MR_ctfield(0, MR_ctfield(0, MR_tempr1, 1), 0);
	if (MR_PTAG_TESTR(MR_tempr2,1)) {
		MR_GOTO_LAB(transform_hlds__rbmm__interproc_region_lifetime__remove_this_from_ep_8_0_i4);
	}
	MR_tag_alloc_heap(MR_tempr3, 0, (MR_Integer) 2);
	MR_sv(9) = MR_tempr3;
	MR_tfield(0, MR_tempr3, 0) = MR_ctfield(1, MR_tempr2, 0);
	MR_tfield(0, MR_tempr3, 1) = MR_ctfield(1, MR_tempr2, 1);
	MR_sv(7) = MR_ctfield(0, MR_tempr1, 0);
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = MR_tempr3;
	MR_tfield(1, MR_r1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_tempr4 = MR_r5;
	MR_sv(4) = MR_tempr4;
	MR_sv(5) = MR_r6;
	MR_sv(6) = MR_r7;
	MR_r2 = MR_tempr4;
	}
	MR_np_call_localret_ent(transform_hlds__smm_common__some_are_special_preds_2_0,
		transform_hlds__rbmm__interproc_region_lifetime__remove_this_from_ep_8_0_i7);
MR_def_label(transform_hlds__rbmm__interproc_region_lifetime__remove_this_from_ep_8_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__rbmm__interproc_region_lifetime__remove_this_from_ep_8_0_i6);
	}
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(4);
	MR_r6 = MR_sv(5);
	MR_r1 = MR_sv(8);
	MR_r7 = MR_sv(6);
	MR_succip_word = MR_sv(12);
	MR_GOTO_LAB(transform_hlds__rbmm__interproc_region_lifetime__remove_this_from_ep_8_0_i43);
MR_def_label(transform_hlds__rbmm__interproc_region_lifetime__remove_this_from_ep_8_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__rbmm__points_to_info, rpta_info);
	MR_r3 = MR_sv(5);
	MR_r4 = MR_sv(1);
	MR_np_call_localret_ent(map__lookup_3_0,
		transform_hlds__rbmm__interproc_region_lifetime__remove_this_from_ep_8_0_i9);
MR_def_label(transform_hlds__rbmm__interproc_region_lifetime__remove_this_from_ep_8_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__smm_common, program_point);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,14);
	MR_r3 = MR_ctfield(0, MR_tempr1, 1);
	MR_r4 = MR_sv(7);
	}
	MR_np_call_localret_ent(map__lookup_3_0,
		transform_hlds__rbmm__interproc_region_lifetime__remove_this_from_ep_8_0_i10);
MR_def_label(transform_hlds__rbmm__interproc_region_lifetime__remove_this_from_ep_8_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_sv(10) = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(9,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(transform_hlds__rbmm__interproc_region_lifetime__find_alpha_source_5_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(2);
	MR_sv(7) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__rbmm__points_to_graph, rptg_node);
	}
	MR_np_call_localret_ent(fn__set__init_0_0,
		transform_hlds__rbmm__interproc_region_lifetime__remove_this_from_ep_8_0_i11);
MR_def_label(transform_hlds__rbmm__interproc_region_lifetime__remove_this_from_ep_8_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(11) = (MR_Word) MR_TAG_COMMON(0,0,6);
	MR_r6 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__rbmm__points_to_graph, rptg_node);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__rbmm__points_to_graph, rptg_node);
	MR_r3 = MR_sv(11);
	MR_r4 = MR_sv(10);
	MR_r5 = MR_sv(7);
	MR_np_call_localret_ent(map__foldl_4_0,
		transform_hlds__rbmm__interproc_region_lifetime__remove_this_from_ep_8_0_i12);
MR_def_label(transform_hlds__rbmm__interproc_region_lifetime__remove_this_from_ep_8_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id);
	MR_r2 = MR_sv(11);
	MR_r3 = MR_sv(6);
	MR_r4 = MR_sv(9);
	MR_np_call_localret_ent(map__lookup_3_0,
		transform_hlds__rbmm__interproc_region_lifetime__remove_this_from_ep_8_0_i13);
MR_def_label(transform_hlds__rbmm__interproc_region_lifetime__remove_this_from_ep_8_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(7);
	MR_sv(7) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__rbmm__points_to_graph, rptg_node);
	MR_r2 = MR_sv(7);
	MR_np_call_localret_ent(set__difference_3_0,
		transform_hlds__rbmm__interproc_region_lifetime__remove_this_from_ep_8_0_i14);
MR_def_label(transform_hlds__rbmm__interproc_region_lifetime__remove_this_from_ep_8_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(10) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__rbmm__points_to_graph, rptg_node);
	MR_r2 = MR_sv(7);
	MR_r3 = MR_sv(10);
	MR_np_call_localret_ent(set__equal_2_0,
		transform_hlds__rbmm__interproc_region_lifetime__remove_this_from_ep_8_0_i16);
MR_def_label(transform_hlds__rbmm__interproc_region_lifetime__remove_this_from_ep_8_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__rbmm__interproc_region_lifetime__remove_this_from_ep_8_0_i15);
	}
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(4);
	MR_r6 = MR_sv(5);
	MR_r1 = MR_sv(8);
	MR_r7 = MR_sv(6);
	MR_succip_word = MR_sv(12);
	MR_GOTO_LAB(transform_hlds__rbmm__interproc_region_lifetime__remove_this_from_ep_8_0_i43);
MR_def_label(transform_hlds__rbmm__interproc_region_lifetime__remove_this_from_ep_8_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id);
	MR_r2 = MR_sv(11);
	MR_r3 = MR_sv(9);
	MR_r4 = MR_sv(10);
	MR_r5 = MR_sv(6);
	MR_np_call_localret_ent(svmap__set_4_0,
		transform_hlds__rbmm__interproc_region_lifetime__remove_this_from_ep_8_0_i18);
MR_def_label(transform_hlds__rbmm__interproc_region_lifetime__remove_this_from_ep_8_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__rbmm__points_to_graph, rptg_node);
	MR_r2 = MR_sv(7);
	MR_r3 = MR_sv(10);
	MR_np_call_localret_ent(set__difference_3_0,
		transform_hlds__rbmm__interproc_region_lifetime__remove_this_from_ep_8_0_i19);
MR_def_label(transform_hlds__rbmm__interproc_region_lifetime__remove_this_from_ep_8_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 7);
	MR_sv(7) = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(6,1);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(transform_hlds__rbmm__interproc_region_lifetime__remove_this_region_from_callees_of_proc_7_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 4;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(9);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(3);
	MR_tfield(0, MR_tempr1, 5) = MR_sv(4);
	MR_tfield(0, MR_tempr1, 6) = MR_sv(5);
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__rbmm__points_to_graph, rptg_node);
	}
	MR_np_call_localret_ent(fn__set__to_sorted_list_1_0,
		transform_hlds__rbmm__interproc_region_lifetime__remove_this_from_ep_8_0_i20);
MR_def_label(transform_hlds__rbmm__interproc_region_lifetime__remove_this_from_ep_8_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_r2 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_CTOR_ADDR(tree234, tree234, 2);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id);
	MR_tfield(0, MR_tempr1, 2) = MR_sv(11);
	MR_r4 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__rbmm__points_to_graph, rptg_node);
	MR_r3 = MR_sv(7);
	MR_r5 = MR_sv(6);
	}
	MR_np_call_localret_ent(list__foldl_4_1,
		transform_hlds__rbmm__interproc_region_lifetime__remove_this_from_ep_8_0_i21);
MR_def_label(transform_hlds__rbmm__interproc_region_lifetime__remove_this_from_ep_8_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(4);
	MR_r6 = MR_sv(5);
	MR_r7 = MR_r1;
	MR_r1 = MR_sv(8);
	MR_succip_word = MR_sv(12);
	MR_GOTO_LAB(transform_hlds__rbmm__interproc_region_lifetime__remove_this_from_ep_8_0_i43);
MR_def_label(transform_hlds__rbmm__interproc_region_lifetime__remove_this_from_ep_8_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(8);
	MR_succip_word = MR_sv(12);
	MR_GOTO_LAB(transform_hlds__rbmm__interproc_region_lifetime__remove_this_from_ep_8_0_i43);
MR_def_label(transform_hlds__rbmm__interproc_region_lifetime__remove_this_from_ep_8_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r7;
	MR_decr_sp_and_return(12);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__rbmm__interproc_region_lifetime_module16)
	MR_init_entry1(transform_hlds__rbmm__interproc_region_lifetime__remove_this_from_eps_8_0);
	MR_init_label3(transform_hlds__rbmm__interproc_region_lifetime__remove_this_from_eps_8_0,11,4,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__rbmm__interproc_region_lifetime__remove_this_from_eps_8_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
MR_def_label(transform_hlds__rbmm__interproc_region_lifetime__remove_this_from_eps_8_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(transform_hlds__rbmm__interproc_region_lifetime__remove_this_from_eps_8_0_i3);
	}
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_r5;
	MR_sv(5) = MR_r6;
	MR_sv(6) = MR_ctfield(1, MR_r1, 1);
	MR_r1 = MR_ctfield(1, MR_r1, 0);
	MR_np_call_localret_ent(transform_hlds__rbmm__interproc_region_lifetime__remove_this_from_ep_8_0,
		transform_hlds__rbmm__interproc_region_lifetime__remove_this_from_eps_8_0_i4);
MR_def_label(transform_hlds__rbmm__interproc_region_lifetime__remove_this_from_eps_8_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r7 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(4);
	MR_r6 = MR_sv(5);
	MR_succip_word = MR_sv(7);
	MR_GOTO_LAB(transform_hlds__rbmm__interproc_region_lifetime__remove_this_from_eps_8_0_i11);
MR_def_label(transform_hlds__rbmm__interproc_region_lifetime__remove_this_from_eps_8_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r7;
	MR_decr_sp_and_return(7);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__rbmm__interproc_region_lifetime_module17)
	MR_init_entry1(transform_hlds__rbmm__interproc_region_lifetime__remove_this_region_from_callees_of_proc_7_0);
	MR_init_label1(transform_hlds__rbmm__interproc_region_lifetime__remove_this_region_from_callees_of_proc_7_0,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__rbmm__interproc_region_lifetime__remove_this_region_from_callees_of_proc_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_sv(5) = MR_r5;
	MR_sv(6) = MR_r6;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,8);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(1);
	MR_np_call_localret_ent(map__lookup_3_0,
		transform_hlds__rbmm__interproc_region_lifetime__remove_this_region_from_callees_of_proc_7_0_i2);
MR_def_label(transform_hlds__rbmm__interproc_region_lifetime__remove_this_region_from_callees_of_proc_7_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(5);
	MR_r4 = MR_sv(2);
	MR_r5 = MR_sv(3);
	MR_r6 = MR_sv(4);
	MR_r7 = MR_sv(6);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(transform_hlds__rbmm__interproc_region_lifetime__remove_this_from_eps_8_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(set__insert_3_0);

MR_BEGIN_MODULE(transform_hlds__rbmm__interproc_region_lifetime_module18)
	MR_init_entry1(transform_hlds__rbmm__interproc_region_lifetime__find_alpha_source_5_0);
	MR_init_label1(transform_hlds__rbmm__interproc_region_lifetime__find_alpha_source_5_0,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__rbmm__interproc_region_lifetime__find_alpha_source_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 != MR_r3)) {
		MR_GOTO_LAB(transform_hlds__rbmm__interproc_region_lifetime__find_alpha_source_5_0_i2);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__rbmm__points_to_graph, rptg_node);
	MR_r3 = MR_r2;
	MR_r2 = MR_r4;
	MR_np_tailcall_ent(set__insert_3_0);
MR_def_label(transform_hlds__rbmm__interproc_region_lifetime__find_alpha_source_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r4;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(svmap__det_update_4_0);

MR_BEGIN_MODULE(transform_hlds__rbmm__interproc_region_lifetime_module19)
	MR_init_entry1(transform_hlds__rbmm__interproc_region_lifetime__eliminate_primitive_regions_6_0);
	MR_init_label3(transform_hlds__rbmm__interproc_region_lifetime__eliminate_primitive_regions_6_0,2,3,4)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__rbmm__interproc_region_lifetime__eliminate_primitive_regions_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_r5;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id);
	MR_r3 = MR_r2;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__rbmm__points_to_info, rpta_info);
	MR_r4 = MR_sv(2);
	MR_np_call_localret_ent(map__lookup_3_0,
		transform_hlds__rbmm__interproc_region_lifetime__eliminate_primitive_regions_6_0_i2);
MR_def_label(transform_hlds__rbmm__interproc_region_lifetime__eliminate_primitive_regions_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(9,1);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(transform_hlds__rbmm__interproc_region_lifetime__retain_non_primitive_regions_5_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 4) = MR_ctfield(0, MR_r1, 0);
	MR_sv(1) = MR_tempr1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__rbmm__points_to_graph, rptg_node);
	}
	MR_np_call_localret_ent(fn__set__init_0_0,
		transform_hlds__rbmm__interproc_region_lifetime__eliminate_primitive_regions_6_0_i3);
MR_def_label(transform_hlds__rbmm__interproc_region_lifetime__eliminate_primitive_regions_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(1);
	MR_sv(1) = (MR_Word) MR_TAG_COMMON(0,0,6);
	MR_r5 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__rbmm__points_to_graph, rptg_node);
	MR_r2 = MR_sv(1);
	MR_r4 = MR_sv(3);
	MR_np_call_localret_ent(set__fold_4_1,
		transform_hlds__rbmm__interproc_region_lifetime__eliminate_primitive_regions_6_0_i4);
MR_def_label(transform_hlds__rbmm__interproc_region_lifetime__eliminate_primitive_regions_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r5 = MR_sv(4);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(svmap__det_update_4_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__transform_hlds__rbmm__points_to_graph__rptg_lookup_node_type_2_0);
MR_decl_entry(check_hlds__type_util__type_is_atomic_2_0);
MR_decl_entry(check_hlds__type_util__is_dummy_argument_type_2_0);
MR_decl_entry(svset__insert_3_0);

MR_BEGIN_MODULE(transform_hlds__rbmm__interproc_region_lifetime_module20)
	MR_init_entry1(transform_hlds__rbmm__interproc_region_lifetime__retain_non_primitive_regions_5_0);
	MR_init_label5(transform_hlds__rbmm__interproc_region_lifetime__retain_non_primitive_regions_5_0,2,8,6,10,4)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__rbmm__interproc_region_lifetime__retain_non_primitive_regions_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(2) = MR_tempr1;
	MR_sv(4) = MR_r4;
	MR_r1 = MR_r2;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__transform_hlds__rbmm__points_to_graph__rptg_lookup_node_type_2_0,
		transform_hlds__rbmm__interproc_region_lifetime__retain_non_primitive_regions_5_0_i2);
MR_def_label(transform_hlds__rbmm__interproc_region_lifetime__retain_non_primitive_regions_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(check_hlds__type_util__type_is_atomic_2_0,
		transform_hlds__rbmm__interproc_region_lifetime__retain_non_primitive_regions_5_0_i8);
MR_def_label(transform_hlds__rbmm__interproc_region_lifetime__retain_non_primitive_regions_5_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__rbmm__interproc_region_lifetime__retain_non_primitive_regions_5_0_i6);
	}
	MR_r1 = MR_sv(4);
	MR_decr_sp_and_return(5);
MR_def_label(transform_hlds__rbmm__interproc_region_lifetime__retain_non_primitive_regions_5_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(check_hlds__type_util__is_dummy_argument_type_2_0,
		transform_hlds__rbmm__interproc_region_lifetime__retain_non_primitive_regions_5_0_i10);
MR_def_label(transform_hlds__rbmm__interproc_region_lifetime__retain_non_primitive_regions_5_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__rbmm__interproc_region_lifetime__retain_non_primitive_regions_5_0_i4);
	}
	MR_r1 = MR_sv(4);
	MR_decr_sp_and_return(5);
MR_def_label(transform_hlds__rbmm__interproc_region_lifetime__retain_non_primitive_regions_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__rbmm__points_to_graph, rptg_node);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(4);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(svset__insert_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__rbmm__interproc_region_lifetime_module21)
	MR_init_entry1(transform_hlds__rbmm__interproc_region_lifetime__eliminate_primitive_regions_2_6_0);
	MR_init_label3(transform_hlds__rbmm__interproc_region_lifetime__eliminate_primitive_regions_2_6_0,2,3,4)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__rbmm__interproc_region_lifetime__eliminate_primitive_regions_2_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_r5;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id);
	MR_r3 = MR_r2;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__rbmm__points_to_info, rpta_info);
	MR_r4 = MR_sv(2);
	MR_np_call_localret_ent(map__lookup_3_0,
		transform_hlds__rbmm__interproc_region_lifetime__eliminate_primitive_regions_2_6_0_i2);
MR_def_label(transform_hlds__rbmm__interproc_region_lifetime__eliminate_primitive_regions_2_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(2,5);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(transform_hlds__rbmm__interproc_region_lifetime__retain_non_primitive_regions_at_pp_6_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 4) = MR_ctfield(0, MR_r1, 0);
	MR_sv(1) = MR_tempr1;
	MR_sv(5) = (MR_Word) MR_TAG_COMMON(0,0,6);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__smm_common, program_point);
	MR_r2 = MR_sv(5);
	}
	MR_np_call_localret_ent(fn__map__init_0_0,
		transform_hlds__rbmm__interproc_region_lifetime__eliminate_primitive_regions_2_6_0_i3);
MR_def_label(transform_hlds__rbmm__interproc_region_lifetime__eliminate_primitive_regions_2_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_sv(1);
	MR_sv(1) = (MR_Word) MR_TAG_COMMON(0,1,11);
	MR_r6 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__smm_common, program_point);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(1);
	MR_r5 = MR_sv(3);
	MR_np_call_localret_ent(map__foldl_4_0,
		transform_hlds__rbmm__interproc_region_lifetime__eliminate_primitive_regions_2_6_0_i4);
MR_def_label(transform_hlds__rbmm__interproc_region_lifetime__eliminate_primitive_regions_2_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r5 = MR_sv(4);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(svmap__det_update_4_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__rbmm__interproc_region_lifetime_module22)
	MR_init_entry1(transform_hlds__rbmm__interproc_region_lifetime__retain_non_primitive_regions_at_pp_6_0);
	MR_init_label2(transform_hlds__rbmm__interproc_region_lifetime__retain_non_primitive_regions_at_pp_6_0,2,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__rbmm__interproc_region_lifetime__retain_non_primitive_regions_at_pp_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_sv(4) = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(9,2);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(transform_hlds__rbmm__interproc_region_lifetime__retain_non_primitive_regions_5_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr1, 3) = MR_r1;
	MR_tfield(0, MR_tempr1, 4) = MR_r2;
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r4;
	MR_sv(3) = MR_r5;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__rbmm__points_to_graph, rptg_node);
	}
	MR_np_call_localret_ent(fn__set__init_0_0,
		transform_hlds__rbmm__interproc_region_lifetime__retain_non_primitive_regions_at_pp_6_0_i2);
MR_def_label(transform_hlds__rbmm__interproc_region_lifetime__retain_non_primitive_regions_at_pp_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_sv(2);
	MR_sv(2) = (MR_Word) MR_TAG_COMMON(0,0,6);
	MR_r5 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__rbmm__points_to_graph, rptg_node);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(4);
	MR_np_call_localret_ent(set__fold_4_1,
		transform_hlds__rbmm__interproc_region_lifetime__retain_non_primitive_regions_at_pp_6_0_i3);
MR_def_label(transform_hlds__rbmm__interproc_region_lifetime__retain_non_primitive_regions_at_pp_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__smm_common, program_point);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(1);
	MR_r5 = MR_sv(3);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(svmap__set_4_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(private_builtin__builtin_unify_pred_2_0);

MR_BEGIN_MODULE(transform_hlds__rbmm__interproc_region_lifetime_module23)
	MR_init_entry1(__Unify___transform_hlds__rbmm__interproc_region_lifetime__rule_pred_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___transform_hlds__rbmm__interproc_region_lifetime__rule_pred_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(private_builtin__builtin_unify_pred_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(private_builtin__builtin_compare_pred_3_0);

MR_BEGIN_MODULE(transform_hlds__rbmm__interproc_region_lifetime_module24)
	MR_init_entry1(__Compare___transform_hlds__rbmm__interproc_region_lifetime__rule_pred_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___transform_hlds__rbmm__interproc_region_lifetime__rule_pred_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(private_builtin__builtin_compare_pred_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(map__inverse_search_3_0);

MR_BEGIN_MODULE(transform_hlds__rbmm__interproc_region_lifetime_module25)
	MR_init_entry1(transform_hlds__rbmm__interproc_region_lifetime__IntroducedFrom__pred__dead_removal_rule_1__377__1_3_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__rbmm__interproc_region_lifetime__IntroducedFrom__pred__dead_removal_rule_1__377__1_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__rbmm__points_to_graph, rptg_node);
	MR_r4 = MR_r2;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__rbmm__points_to_graph, rptg_node);
	MR_np_tailcall_ent(map__inverse_search_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__rbmm__interproc_region_lifetime_module26)
	MR_init_entry1(transform_hlds__rbmm__interproc_region_lifetime__IntroducedFrom__pred__dead_removal_rule_2__387__1_3_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__rbmm__interproc_region_lifetime__IntroducedFrom__pred__dead_removal_rule_2__387__1_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__rbmm__points_to_graph, rptg_node);
	MR_r4 = MR_r2;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__rbmm__points_to_graph, rptg_node);
	MR_np_tailcall_ent(map__inverse_search_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__rbmm__interproc_region_lifetime_module27)
	MR_init_entry1(transform_hlds__rbmm__interproc_region_lifetime__IntroducedFrom__pred__born_removal_rule_1__415__1_3_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__rbmm__interproc_region_lifetime__IntroducedFrom__pred__born_removal_rule_1__415__1_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__rbmm__points_to_graph, rptg_node);
	MR_r4 = MR_r2;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__rbmm__points_to_graph, rptg_node);
	MR_np_tailcall_ent(map__inverse_search_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__rbmm__interproc_region_lifetime_module28)
	MR_init_entry1(transform_hlds__rbmm__interproc_region_lifetime__IntroducedFrom__pred__born_removal_rule_2__426__1_3_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__rbmm__interproc_region_lifetime__IntroducedFrom__pred__born_removal_rule_2__426__1_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__rbmm__points_to_graph, rptg_node);
	MR_r4 = MR_r2;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__rbmm__points_to_graph, rptg_node);
	MR_np_tailcall_ent(map__inverse_search_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__rbmm__interproc_region_lifetime_module29)
	MR_init_entry1(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_114_98_109_109_95_95_105_110_116_101_114_112_114_111_99_95_114_101_103_105_111_110_95_108_105_102_101_116_105_109_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_112_112_108_121_95_108_105_118_101_95_114_101_103_105_111_110_95_114_117_108_101_115_95_101_120_101_99_95_112_97_116_104_115_95_95_91_53_93_95_48_11_0);
	MR_init_label3(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_114_98_109_109_95_95_105_110_116_101_114_112_114_111_99_95_114_101_103_105_111_110_95_108_105_102_101_116_105_109_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_112_112_108_121_95_108_105_118_101_95_114_101_103_105_111_110_95_114_117_108_101_115_95_101_120_101_99_95_112_97_116_104_115_95_95_91_53_93_95_48_11_0,11,4,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_114_98_109_109_95_95_105_110_116_101_114_112_114_111_99_95_114_101_103_105_111_110_95_108_105_102_101_116_105_109_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_112_112_108_121_95_108_105_118_101_95_114_101_103_105_111_110_95_114_117_108_101_115_95_101_120_101_99_95_112_97_116_104_115_95_95_91_53_93_95_48_11_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
MR_def_label(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_114_98_109_109_95_95_105_110_116_101_114_112_114_111_99_95_114_101_103_105_111_110_95_108_105_102_101_116_105_109_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_112_112_108_121_95_108_105_118_101_95_114_101_103_105_111_110_95_114_117_108_101_115_95_101_120_101_99_95_112_97_116_104_115_95_95_91_53_93_95_48_11_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r2,0,0)) {
		MR_GOTO_LAB(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_114_98_109_109_95_95_105_110_116_101_114_112_114_111_99_95_114_101_103_105_111_110_95_108_105_102_101_116_105_109_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_112_112_108_121_95_108_105_118_101_95_114_101_103_105_111_110_95_114_117_108_101_115_95_101_120_101_99_95_112_97_116_104_115_95_95_91_53_93_95_48_11_0_i3);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_r5;
	MR_sv(5) = MR_r6;
	MR_sv(6) = MR_r7;
	MR_sv(7) = MR_r8;
	MR_sv(8) = MR_ctfield(1, MR_r2, 1);
	MR_r2 = MR_ctfield(1, MR_r2, 0);
	MR_np_call_localret_ent(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_114_98_109_109_95_95_105_110_116_101_114_112_114_111_99_95_114_101_103_105_111_110_95_108_105_102_101_116_105_109_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_112_112_108_121_95_108_105_118_101_95_114_101_103_105_111_110_95_114_117_108_101_115_95_101_120_101_99_95_112_97_116_104_95_95_91_53_93_95_48_11_0,
		f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_114_98_109_109_95_95_105_110_116_101_114_112_114_111_99_95_114_101_103_105_111_110_95_108_105_102_101_116_105_109_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_112_112_108_121_95_108_105_118_101_95_114_101_103_105_111_110_95_114_117_108_101_115_95_101_120_101_99_95_112_97_116_104_115_95_95_91_53_93_95_48_11_0_i4);
MR_def_label(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_114_98_109_109_95_95_105_110_116_101_114_112_114_111_99_95_114_101_103_105_111_110_95_108_105_102_101_116_105_109_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_112_112_108_121_95_108_105_118_101_95_114_101_103_105_111_110_95_114_117_108_101_115_95_101_120_101_99_95_112_97_116_104_115_95_95_91_53_93_95_48_11_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r9 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(8);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(4);
	MR_r6 = MR_sv(5);
	MR_r7 = MR_sv(6);
	MR_r8 = MR_sv(7);
	MR_succip_word = MR_sv(9);
	MR_GOTO_LAB(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_114_98_109_109_95_95_105_110_116_101_114_112_114_111_99_95_114_101_103_105_111_110_95_108_105_102_101_116_105_109_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_112_112_108_121_95_108_105_118_101_95_114_101_103_105_111_110_95_114_117_108_101_115_95_101_120_101_99_95_112_97_116_104_115_95_95_91_53_93_95_48_11_0_i11);
MR_def_label(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_114_98_109_109_95_95_105_110_116_101_114_112_114_111_99_95_114_101_103_105_111_110_95_108_105_102_101_116_105_109_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_112_112_108_121_95_108_105_118_101_95_114_101_103_105_111_110_95_114_117_108_101_115_95_101_120_101_99_95_112_97_116_104_115_95_95_91_53_93_95_48_11_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r9;
	MR_decr_sp_and_return(9);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_declare_entry(mercury__do_call_closure_5);

MR_BEGIN_MODULE(transform_hlds__rbmm__interproc_region_lifetime_module30)
	MR_init_entry1(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_114_98_109_109_95_95_105_110_116_101_114_112_114_111_99_95_114_101_103_105_111_110_95_108_105_102_101_116_105_109_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_112_112_108_121_95_108_105_118_101_95_114_101_103_105_111_110_95_114_117_108_101_115_95_101_120_101_99_95_112_97_116_104_95_95_91_53_93_95_48_11_0);
	MR_init_label8(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_114_98_109_109_95_95_105_110_116_101_114_112_114_111_99_95_114_101_103_105_111_110_95_108_105_102_101_116_105_109_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_112_112_108_121_95_108_105_118_101_95_114_101_103_105_111_110_95_114_117_108_101_115_95_101_120_101_99_95_112_97_116_104_95_95_91_53_93_95_48_11_0,42,7,6,9,10,11,12,13)
	MR_init_label8(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_114_98_109_109_95_95_105_110_116_101_114_112_114_111_99_95_114_101_103_105_111_110_95_108_105_102_101_116_105_109_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_112_112_108_121_95_108_105_118_101_95_114_101_103_105_111_110_95_114_117_108_101_115_95_101_120_101_99_95_112_97_116_104_95_95_91_53_93_95_48_11_0,15,14,17,18,19,20,4,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_114_98_109_109_95_95_105_110_116_101_114_112_114_111_99_95_114_101_103_105_111_110_95_108_105_102_101_116_105_109_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_112_112_108_121_95_108_105_118_101_95_114_101_103_105_111_110_95_114_117_108_101_115_95_101_120_101_99_95_112_97_116_104_95_95_91_53_93_95_48_11_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(14);
	MR_sv(14) = (MR_Word) MR_succip;
MR_def_label(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_114_98_109_109_95_95_105_110_116_101_114_112_114_111_99_95_114_101_103_105_111_110_95_108_105_102_101_116_105_109_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_112_112_108_121_95_108_105_118_101_95_114_101_103_105_111_110_95_114_117_108_101_115_95_101_120_101_99_95_112_97_116_104_95_95_91_53_93_95_48_11_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r2,0,0)) {
		MR_GOTO_LAB(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_114_98_109_109_95_95_105_110_116_101_114_112_114_111_99_95_114_101_103_105_111_110_95_108_105_102_101_116_105_109_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_112_112_108_121_95_108_105_118_101_95_114_101_103_105_111_110_95_114_117_108_101_115_95_101_120_101_99_95_112_97_116_104_95_95_91_53_93_95_48_11_0_i3);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tempr4 = MR_r2;
	MR_sv(10) = MR_ctfield(1, MR_tempr4, 1);
	MR_tempr1 = MR_ctfield(1, MR_tempr4, 0);
	MR_tempr2 = MR_ctfield(0, MR_ctfield(0, MR_tempr1, 1), 0);
	if (MR_PTAG_TESTR(MR_tempr2,1)) {
		MR_GOTO_LAB(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_114_98_109_109_95_95_105_110_116_101_114_112_114_111_99_95_114_101_103_105_111_110_95_108_105_102_101_116_105_109_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_112_112_108_121_95_108_105_118_101_95_114_101_103_105_111_110_95_114_117_108_101_115_95_101_120_101_99_95_112_97_116_104_95_95_91_53_93_95_48_11_0_i4);
	}
	MR_tag_alloc_heap(MR_tempr3, 0, (MR_Integer) 2);
	MR_sv(11) = MR_tempr3;
	MR_tfield(0, MR_tempr3, 0) = MR_ctfield(1, MR_tempr2, 0);
	MR_tfield(0, MR_tempr3, 1) = MR_ctfield(1, MR_tempr2, 1);
	MR_sv(9) = MR_ctfield(0, MR_tempr1, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr3;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r3;
	MR_tempr5 = MR_r4;
	MR_sv(3) = MR_tempr5;
	MR_sv(4) = MR_r5;
	MR_sv(5) = MR_r6;
	MR_sv(6) = MR_r7;
	MR_sv(7) = MR_r8;
	MR_sv(8) = MR_r9;
	MR_r1 = MR_tempr2;
	MR_r2 = MR_tempr5;
	}
	MR_np_call_localret_ent(transform_hlds__smm_common__some_are_special_preds_2_0,
		f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_114_98_109_109_95_95_105_110_116_101_114_112_114_111_99_95_114_101_103_105_111_110_95_108_105_102_101_116_105_109_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_112_112_108_121_95_108_105_118_101_95_114_101_103_105_111_110_95_114_117_108_101_115_95_101_120_101_99_95_112_97_116_104_95_95_91_53_93_95_48_11_0_i7);
MR_def_label(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_114_98_109_109_95_95_105_110_116_101_114_112_114_111_99_95_114_101_103_105_111_110_95_108_105_102_101_116_105_109_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_112_112_108_121_95_108_105_118_101_95_114_101_103_105_111_110_95_114_117_108_101_115_95_101_120_101_99_95_112_97_116_104_95_95_91_53_93_95_48_11_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_114_98_109_109_95_95_105_110_116_101_114_112_114_111_99_95_114_101_103_105_111_110_95_108_105_102_101_116_105_109_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_112_112_108_121_95_108_105_118_101_95_114_101_103_105_111_110_95_114_117_108_101_115_95_101_120_101_99_95_112_97_116_104_95_95_91_53_93_95_48_11_0_i6);
	}
	MR_r1 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(4);
	MR_r6 = MR_sv(5);
	MR_r7 = MR_sv(6);
	MR_r8 = MR_sv(7);
	MR_r2 = MR_sv(10);
	MR_r9 = MR_sv(8);
	MR_succip_word = MR_sv(14);
	MR_GOTO_LAB(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_114_98_109_109_95_95_105_110_116_101_114_112_114_111_99_95_114_101_103_105_111_110_95_108_105_102_101_116_105_109_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_112_112_108_121_95_108_105_118_101_95_114_101_103_105_111_110_95_114_117_108_101_115_95_101_120_101_99_95_112_97_116_104_95_95_91_53_93_95_48_11_0_i42);
MR_def_label(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_114_98_109_109_95_95_105_110_116_101_114_112_114_111_99_95_114_101_103_105_111_110_95_108_105_102_101_116_105_109_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_112_112_108_121_95_108_105_118_101_95_114_101_103_105_111_110_95_114_117_108_101_115_95_101_120_101_99_95_112_97_116_104_95_95_91_53_93_95_48_11_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__smm_common, program_point);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,14);
	MR_r3 = MR_ctfield(0, MR_sv(4), 1);
	MR_r4 = MR_sv(9);
	MR_np_call_localret_ent(map__lookup_3_0,
		f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_114_98_109_109_95_95_105_110_116_101_114_112_114_111_99_95_114_101_103_105_111_110_95_108_105_102_101_116_105_109_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_112_112_108_121_95_108_105_118_101_95_114_101_103_105_111_110_95_114_117_108_101_115_95_101_120_101_99_95_112_97_116_104_95_95_91_53_93_95_48_11_0_i9);
MR_def_label(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_114_98_109_109_95_95_105_110_116_101_114_112_114_111_99_95_114_101_103_105_111_110_95_108_105_102_101_116_105_109_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_112_112_108_121_95_108_105_118_101_95_114_101_103_105_111_110_95_114_117_108_101_115_95_101_120_101_99_95_112_97_116_104_95_95_91_53_93_95_48_11_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(12) = MR_r1;
	MR_sv(13) = (MR_Word) MR_TAG_COMMON(0,0,6);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__smm_common, program_point);
	MR_r2 = MR_sv(13);
	MR_r3 = MR_sv(6);
	MR_r4 = MR_sv(9);
	MR_np_call_localret_ent(map__lookup_3_0,
		f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_114_98_109_109_95_95_105_110_116_101_114_112_114_111_99_95_114_101_103_105_111_110_95_108_105_102_101_116_105_109_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_112_112_108_121_95_108_105_118_101_95_114_101_103_105_111_110_95_114_117_108_101_115_95_101_120_101_99_95_112_97_116_104_95_95_91_53_93_95_48_11_0_i10);
MR_def_label(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_114_98_109_109_95_95_105_110_116_101_114_112_114_111_99_95_114_101_103_105_111_110_95_108_105_102_101_116_105_109_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_112_112_108_121_95_108_105_118_101_95_114_101_103_105_111_110_95_114_117_108_101_115_95_101_120_101_99_95_112_97_116_104_95_95_91_53_93_95_48_11_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_sv(9);
	MR_sv(9) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__smm_common, program_point);
	MR_r2 = MR_sv(13);
	MR_r3 = MR_sv(7);
	MR_np_call_localret_ent(map__lookup_3_0,
		f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_114_98_109_109_95_95_105_110_116_101_114_112_114_111_99_95_114_101_103_105_111_110_95_108_105_102_101_116_105_109_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_112_112_108_121_95_108_105_118_101_95_114_101_103_105_111_110_95_114_117_108_101_115_95_101_120_101_99_95_112_97_116_104_95_95_91_53_93_95_48_11_0_i11);
MR_def_label(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_114_98_109_109_95_95_105_110_116_101_114_112_114_111_99_95_114_101_103_105_111_110_95_108_105_102_101_116_105_109_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_112_112_108_121_95_108_105_118_101_95_114_101_103_105_111_110_95_114_117_108_101_115_95_101_120_101_99_95_112_97_116_104_95_95_91_53_93_95_48_11_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(11);
	MR_r3 = MR_sv(9);
	MR_r5 = MR_sv(8);
	MR_r6 = MR_sv(12);
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_114_98_109_109_95_95_105_110_116_101_114_112_114_111_99_95_114_101_103_105_111_110_95_108_105_102_101_116_105_109_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_112_112_108_121_95_108_105_118_101_95_114_101_103_105_111_110_95_114_117_108_101_115_95_101_120_101_99_95_112_97_116_104_95_95_91_53_93_95_48_11_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_5),
		mercury__f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_114_98_109_109_95_95_105_110_116_101_114_112_114_111_99_95_114_101_103_105_111_110_95_108_105_102_101_116_105_109_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_112_112_108_121_95_108_105_118_101_95_114_101_103_105_111_110_95_114_117_108_101_115_95_101_120_101_99_95_112_97_116_104_95_95_91_53_93_95_48_11_0_i12);
MR_def_label(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_114_98_109_109_95_95_105_110_116_101_114_112_114_111_99_95_114_101_103_105_111_110_95_108_105_102_101_116_105_109_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_112_112_108_121_95_108_105_118_101_95_114_101_103_105_111_110_95_114_117_108_101_115_95_101_120_101_99_95_112_97_116_104_95_95_91_53_93_95_48_11_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id);
	MR_r2 = MR_sv(13);
	MR_r3 = MR_sv(8);
	MR_r4 = MR_sv(11);
	MR_np_call_localret_ent(map__lookup_3_0,
		f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_114_98_109_109_95_95_105_110_116_101_114_112_114_111_99_95_114_101_103_105_111_110_95_108_105_102_101_116_105_109_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_112_112_108_121_95_108_105_118_101_95_114_101_103_105_111_110_95_114_117_108_101_115_95_101_120_101_99_95_112_97_116_104_95_95_91_53_93_95_48_11_0_i13);
MR_def_label(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_114_98_109_109_95_95_105_110_116_101_114_112_114_111_99_95_114_101_103_105_111_110_95_108_105_102_101_116_105_109_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_112_112_108_121_95_108_105_118_101_95_114_101_103_105_111_110_95_114_117_108_101_115_95_101_120_101_99_95_112_97_116_104_95_95_91_53_93_95_48_11_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(12) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__rbmm__points_to_graph, rptg_node);
	MR_r2 = MR_sv(9);
	MR_r3 = MR_sv(12);
	MR_np_call_localret_ent(set__equal_2_0,
		f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_114_98_109_109_95_95_105_110_116_101_114_112_114_111_99_95_114_101_103_105_111_110_95_108_105_102_101_116_105_109_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_112_112_108_121_95_108_105_118_101_95_114_101_103_105_111_110_95_114_117_108_101_115_95_101_120_101_99_95_112_97_116_104_95_95_91_53_93_95_48_11_0_i15);
MR_def_label(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_114_98_109_109_95_95_105_110_116_101_114_112_114_111_99_95_114_101_103_105_111_110_95_108_105_102_101_116_105_109_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_112_112_108_121_95_108_105_118_101_95_114_101_103_105_111_110_95_114_117_108_101_115_95_101_120_101_99_95_112_97_116_104_95_95_91_53_93_95_48_11_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_114_98_109_109_95_95_105_110_116_101_114_112_114_111_99_95_114_101_103_105_111_110_95_108_105_102_101_116_105_109_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_112_112_108_121_95_108_105_118_101_95_114_101_103_105_111_110_95_114_117_108_101_115_95_101_120_101_99_95_112_97_116_104_95_95_91_53_93_95_48_11_0_i14);
	}
	MR_r1 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(4);
	MR_r6 = MR_sv(5);
	MR_r7 = MR_sv(6);
	MR_r8 = MR_sv(7);
	MR_r2 = MR_sv(10);
	MR_r9 = MR_sv(8);
	MR_succip_word = MR_sv(14);
	MR_GOTO_LAB(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_114_98_109_109_95_95_105_110_116_101_114_112_114_111_99_95_114_101_103_105_111_110_95_108_105_102_101_116_105_109_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_112_112_108_121_95_108_105_118_101_95_114_101_103_105_111_110_95_114_117_108_101_115_95_101_120_101_99_95_112_97_116_104_95_95_91_53_93_95_48_11_0_i42);
MR_def_label(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_114_98_109_109_95_95_105_110_116_101_114_112_114_111_99_95_114_101_103_105_111_110_95_108_105_102_101_116_105_109_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_112_112_108_121_95_108_105_118_101_95_114_101_103_105_111_110_95_114_117_108_101_115_95_101_120_101_99_95_112_97_116_104_95_95_91_53_93_95_48_11_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id);
	MR_r2 = MR_sv(13);
	MR_r3 = MR_sv(11);
	MR_r4 = MR_sv(9);
	MR_r5 = MR_sv(8);
	MR_np_call_localret_ent(svmap__set_4_0,
		f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_114_98_109_109_95_95_105_110_116_101_114_112_114_111_99_95_114_101_103_105_111_110_95_108_105_102_101_116_105_109_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_112_112_108_121_95_108_105_118_101_95_114_101_103_105_111_110_95_114_117_108_101_115_95_101_120_101_99_95_112_97_116_104_95_95_91_53_93_95_48_11_0_i17);
MR_def_label(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_114_98_109_109_95_95_105_110_116_101_114_112_114_111_99_95_114_101_103_105_111_110_95_108_105_102_101_116_105_109_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_112_112_108_121_95_108_105_118_101_95_114_101_103_105_111_110_95_114_117_108_101_115_95_101_120_101_99_95_112_97_116_104_95_95_91_53_93_95_48_11_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__rbmm__points_to_graph, rptg_node);
	MR_r2 = MR_sv(12);
	MR_r3 = MR_sv(9);
	MR_np_call_localret_ent(set__difference_3_0,
		f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_114_98_109_109_95_95_105_110_116_101_114_112_114_111_99_95_114_101_103_105_111_110_95_108_105_102_101_116_105_109_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_112_112_108_121_95_108_105_118_101_95_114_101_103_105_111_110_95_114_117_108_101_115_95_101_120_101_99_95_112_97_116_104_95_95_91_53_93_95_48_11_0_i18);
MR_def_label(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_114_98_109_109_95_95_105_110_116_101_114_112_114_111_99_95_114_101_103_105_111_110_95_108_105_102_101_116_105_109_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_112_112_108_121_95_108_105_118_101_95_114_101_103_105_111_110_95_114_117_108_101_115_95_101_120_101_99_95_112_97_116_104_95_95_91_53_93_95_48_11_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 7);
	MR_sv(9) = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(6,2);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(transform_hlds__rbmm__interproc_region_lifetime__remove_this_region_from_callees_of_proc_7_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 4;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(11);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 5) = MR_sv(3);
	MR_tfield(0, MR_tempr1, 6) = MR_sv(5);
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__rbmm__points_to_graph, rptg_node);
	}
	MR_np_call_localret_ent(fn__set__to_sorted_list_1_0,
		f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_114_98_109_109_95_95_105_110_116_101_114_112_114_111_99_95_114_101_103_105_111_110_95_108_105_102_101_116_105_109_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_112_112_108_121_95_108_105_118_101_95_114_101_103_105_111_110_95_114_117_108_101_115_95_101_120_101_99_95_112_97_116_104_95_95_91_53_93_95_48_11_0_i19);
MR_def_label(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_114_98_109_109_95_95_105_110_116_101_114_112_114_111_99_95_114_101_103_105_111_110_95_108_105_102_101_116_105_109_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_112_112_108_121_95_108_105_118_101_95_114_101_103_105_111_110_95_114_117_108_101_115_95_101_120_101_99_95_112_97_116_104_95_95_91_53_93_95_48_11_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_r2 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_CTOR_ADDR(tree234, tree234, 2);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id);
	MR_tfield(0, MR_tempr1, 2) = MR_sv(13);
	MR_r4 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__rbmm__points_to_graph, rptg_node);
	MR_r3 = MR_sv(9);
	MR_r5 = MR_sv(8);
	}
	MR_np_call_localret_ent(list__foldl_4_1,
		f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_114_98_109_109_95_95_105_110_116_101_114_112_114_111_99_95_114_101_103_105_111_110_95_108_105_102_101_116_105_109_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_112_112_108_121_95_108_105_118_101_95_114_101_103_105_111_110_95_114_117_108_101_115_95_101_120_101_99_95_112_97_116_104_95_95_91_53_93_95_48_11_0_i20);
MR_def_label(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_114_98_109_109_95_95_105_110_116_101_114_112_114_111_99_95_114_101_103_105_111_110_95_108_105_102_101_116_105_109_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_112_112_108_121_95_108_105_118_101_95_114_101_103_105_111_110_95_114_117_108_101_115_95_101_120_101_99_95_112_97_116_104_95_95_91_53_93_95_48_11_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r9 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(4);
	MR_r6 = MR_sv(5);
	MR_r7 = MR_sv(6);
	MR_r8 = MR_sv(7);
	MR_r2 = MR_sv(10);
	MR_succip_word = MR_sv(14);
	MR_GOTO_LAB(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_114_98_109_109_95_95_105_110_116_101_114_112_114_111_99_95_114_101_103_105_111_110_95_108_105_102_101_116_105_109_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_112_112_108_121_95_108_105_118_101_95_114_101_103_105_111_110_95_114_117_108_101_115_95_101_120_101_99_95_112_97_116_104_95_95_91_53_93_95_48_11_0_i42);
MR_def_label(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_114_98_109_109_95_95_105_110_116_101_114_112_114_111_99_95_114_101_103_105_111_110_95_108_105_102_101_116_105_109_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_112_112_108_121_95_108_105_118_101_95_114_101_103_105_111_110_95_114_117_108_101_115_95_101_120_101_99_95_112_97_116_104_95_95_91_53_93_95_48_11_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(10);
	MR_succip_word = MR_sv(14);
	MR_GOTO_LAB(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_114_98_109_109_95_95_105_110_116_101_114_112_114_111_99_95_114_101_103_105_111_110_95_108_105_102_101_116_105_109_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_112_112_108_121_95_108_105_118_101_95_114_101_103_105_111_110_95_114_117_108_101_115_95_101_120_101_99_95_112_97_116_104_95_95_91_53_93_95_48_11_0_i42);
MR_def_label(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_114_98_109_109_95_95_105_110_116_101_114_112_114_111_99_95_114_101_103_105_111_110_95_108_105_102_101_116_105_109_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_112_112_108_121_95_108_105_118_101_95_114_101_103_105_111_110_95_114_117_108_101_115_95_101_120_101_99_95_112_97_116_104_95_95_91_53_93_95_48_11_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r9;
	MR_decr_sp_and_return(14);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__rbmm__interproc_region_lifetime_module31)
	MR_init_entry1(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_114_98_109_109_95_95_105_110_116_101_114_112_114_111_99_95_114_101_103_105_111_110_95_108_105_102_101_116_105_109_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_111_114_110_95_114_101_109_111_118_97_108_95_114_117_108_101_115_95_95_91_51_93_95_48_6_0);
	MR_init_label5(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_114_98_109_109_95_95_105_110_116_101_114_112_114_111_99_95_114_101_103_105_111_110_95_108_105_102_101_116_105_109_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_111_114_110_95_114_101_109_111_118_97_108_95_114_117_108_101_115_95_95_91_51_93_95_48_6_0,2,3,4,5,6)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_114_98_109_109_95_95_105_110_116_101_114_112_114_111_99_95_114_101_103_105_111_110_95_108_105_102_101_116_105_109_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_111_114_110_95_114_101_109_111_118_97_108_95_114_117_108_101_115_95_95_91_51_93_95_48_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r4;
	MR_sv(4) = (MR_Word) MR_TAG_COMMON(0,0,6);
	MR_r4 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id);
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(map__lookup_3_0,
		f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_114_98_109_109_95_95_105_110_116_101_114_112_114_111_99_95_114_101_103_105_111_110_95_108_105_102_101_116_105_109_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_111_114_110_95_114_101_109_111_118_97_108_95_114_117_108_101_115_95_95_91_51_93_95_48_6_0_i2);
MR_def_label(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_114_98_109_109_95_95_105_110_116_101_114_112_114_111_99_95_114_101_103_105_111_110_95_108_105_102_101_116_105_109_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_111_114_110_95_114_101_109_111_118_97_108_95_114_117_108_101_115_95_95_91_51_93_95_48_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(7,2);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(transform_hlds__rbmm__interproc_region_lifetime__born_removal_rule_1_4_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(2);
	MR_r5 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__rbmm__points_to_graph, rptg_node);
	MR_r2 = MR_sv(4);
	MR_r4 = MR_sv(1);
	}
	MR_np_call_localret_ent(set__fold_4_1,
		f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_114_98_109_109_95_95_105_110_116_101_114_112_114_111_99_95_114_101_103_105_111_110_95_108_105_102_101_116_105_109_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_111_114_110_95_114_101_109_111_118_97_108_95_114_117_108_101_115_95_95_91_51_93_95_48_6_0_i3);
MR_def_label(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_114_98_109_109_95_95_105_110_116_101_114_112_114_111_99_95_114_101_103_105_111_110_95_108_105_102_101_116_105_109_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_111_114_110_95_114_101_109_111_118_97_108_95_114_117_108_101_115_95_95_91_51_93_95_48_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__rbmm__points_to_graph, rptg_node);
	MR_np_call_localret_ent(fn__set__init_0_0,
		f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_114_98_109_109_95_95_105_110_116_101_114_112_114_111_99_95_114_101_103_105_111_110_95_108_105_102_101_116_105_109_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_111_114_110_95_114_101_109_111_118_97_108_95_114_117_108_101_115_95_95_91_51_93_95_48_6_0_i4);
MR_def_label(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_114_98_109_109_95_95_105_110_116_101_114_112_114_111_99_95_114_101_103_105_111_110_95_108_105_102_101_116_105_109_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_111_114_110_95_114_101_109_111_118_97_108_95_114_117_108_101_115_95_95_91_51_93_95_48_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__rbmm__points_to_graph, rptg_node);
	MR_np_call_localret_ent(fn__set__init_0_0,
		f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_114_98_109_109_95_95_105_110_116_101_114_112_114_111_99_95_114_101_103_105_111_110_95_108_105_102_101_116_105_109_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_111_114_110_95_114_101_109_111_118_97_108_95_114_117_108_101_115_95_95_91_51_93_95_48_6_0_i5);
MR_def_label(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_114_98_109_109_95_95_105_110_116_101_114_112_114_111_99_95_114_101_103_105_111_110_95_108_105_102_101_116_105_109_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_111_114_110_95_114_101_109_111_118_97_108_95_114_117_108_101_115_95_95_91_51_93_95_48_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r8 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__rbmm__points_to_graph, rptg_node);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__rbmm__points_to_graph, rptg_node);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_r3;
	MR_r5 = (MR_Word) MR_TAG_COMMON(0,3,3);
	MR_r6 = MR_sv(2);
	MR_r7 = MR_sv(3);
	MR_np_call_localret_ent(map__foldl2_6_0,
		f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_114_98_109_109_95_95_105_110_116_101_114_112_114_111_99_95_114_101_103_105_111_110_95_108_105_102_101_116_105_109_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_111_114_110_95_114_101_109_111_118_97_108_95_114_117_108_101_115_95_95_91_51_93_95_48_6_0_i6);
MR_def_label(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_114_98_109_109_95_95_105_110_116_101_114_112_114_111_99_95_114_101_103_105_111_110_95_108_105_102_101_116_105_109_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_111_114_110_95_114_101_109_111_118_97_108_95_114_117_108_101_115_95_95_91_51_93_95_48_6_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(7,3);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(transform_hlds__rbmm__interproc_region_lifetime__born_removal_rule_2_4_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(2);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__rbmm__points_to_graph, rptg_node);
	MR_r4 = MR_r2;
	MR_r2 = MR_sv(4);
	MR_r5 = MR_sv(1);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(set__fold_4_1);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(set__contains_2_0);

MR_BEGIN_MODULE(transform_hlds__rbmm__interproc_region_lifetime_module32)
	MR_init_entry1(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_114_98_109_109_95_95_105_110_116_101_114_112_114_111_99_95_114_101_103_105_111_110_95_108_105_102_101_116_105_109_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_111_110_101_95_109_97_112_112_105_110_103_95_95_91_49_93_95_48_6_0);
	MR_init_label4(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_114_98_109_109_95_95_105_110_116_101_114_112_114_111_99_95_114_101_103_105_111_110_95_108_105_102_101_116_105_109_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_111_110_101_95_109_97_112_112_105_110_103_95_95_91_49_93_95_48_6_0,3,5,2,6)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_114_98_109_109_95_95_105_110_116_101_114_112_114_111_99_95_114_101_103_105_111_110_95_108_105_102_101_116_105_109_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_111_110_101_95_109_97_112_112_105_110_103_95_95_91_49_93_95_48_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__rbmm__points_to_graph, rptg_node);
	MR_r3 = MR_sv(1);
	MR_np_call_localret_ent(set__contains_2_0,
		f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_114_98_109_109_95_95_105_110_116_101_114_112_114_111_99_95_114_101_103_105_111_110_95_108_105_102_101_116_105_109_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_111_110_101_95_109_97_112_112_105_110_103_95_95_91_49_93_95_48_6_0_i3);
MR_def_label(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_114_98_109_109_95_95_105_110_116_101_114_112_114_111_99_95_114_101_103_105_111_110_95_108_105_102_101_116_105_109_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_111_110_101_95_109_97_112_112_105_110_103_95_95_91_49_93_95_48_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_114_98_109_109_95_95_105_110_116_101_114_112_114_111_99_95_114_101_103_105_111_110_95_108_105_102_101_116_105_109_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_111_110_101_95_109_97_112_112_105_110_103_95_95_91_49_93_95_48_6_0_i2);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__rbmm__points_to_graph, rptg_node);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(3);
	MR_np_call_localret_ent(svset__insert_3_0,
		f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_114_98_109_109_95_95_105_110_116_101_114_112_114_111_99_95_114_101_103_105_111_110_95_108_105_102_101_116_105_109_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_111_110_101_95_109_97_112_112_105_110_103_95_95_91_49_93_95_48_6_0_i5);
MR_def_label(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_114_98_109_109_95_95_105_110_116_101_114_112_114_111_99_95_114_101_103_105_111_110_95_108_105_102_101_116_105_109_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_111_110_101_95_109_97_112_112_105_110_103_95_95_91_49_93_95_48_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_decr_sp_and_return(4);
MR_def_label(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_114_98_109_109_95_95_105_110_116_101_114_112_114_111_99_95_114_101_103_105_111_110_95_108_105_102_101_116_105_109_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_111_110_101_95_109_97_112_112_105_110_103_95_95_91_49_93_95_48_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__rbmm__points_to_graph, rptg_node);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_np_call_localret_ent(svset__insert_3_0,
		f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_114_98_109_109_95_95_105_110_116_101_114_112_114_111_99_95_114_101_103_105_111_110_95_108_105_102_101_116_105_109_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_111_110_101_95_109_97_112_112_105_110_103_95_95_91_49_93_95_48_6_0_i6);
MR_def_label(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_114_98_109_109_95_95_105_110_116_101_114_112_114_111_99_95_114_101_103_105_111_110_95_108_105_102_101_116_105_109_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_111_110_101_95_109_97_112_112_105_110_103_95_95_91_49_93_95_48_6_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(3);
	MR_decr_sp_and_return(4);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

static void mercury__transform_hlds__rbmm__interproc_region_lifetime_maybe_bunch_0(void)
{
	transform_hlds__rbmm__interproc_region_lifetime_module0();
	transform_hlds__rbmm__interproc_region_lifetime_module1();
	transform_hlds__rbmm__interproc_region_lifetime_module2();
	transform_hlds__rbmm__interproc_region_lifetime_module3();
	transform_hlds__rbmm__interproc_region_lifetime_module4();
	transform_hlds__rbmm__interproc_region_lifetime_module5();
	transform_hlds__rbmm__interproc_region_lifetime_module6();
	transform_hlds__rbmm__interproc_region_lifetime_module7();
	transform_hlds__rbmm__interproc_region_lifetime_module8();
	transform_hlds__rbmm__interproc_region_lifetime_module9();
	transform_hlds__rbmm__interproc_region_lifetime_module10();
	transform_hlds__rbmm__interproc_region_lifetime_module11();
	transform_hlds__rbmm__interproc_region_lifetime_module12();
	transform_hlds__rbmm__interproc_region_lifetime_module13();
	transform_hlds__rbmm__interproc_region_lifetime_module14();
	transform_hlds__rbmm__interproc_region_lifetime_module15();
	transform_hlds__rbmm__interproc_region_lifetime_module16();
	transform_hlds__rbmm__interproc_region_lifetime_module17();
	transform_hlds__rbmm__interproc_region_lifetime_module18();
	transform_hlds__rbmm__interproc_region_lifetime_module19();
	transform_hlds__rbmm__interproc_region_lifetime_module20();
	transform_hlds__rbmm__interproc_region_lifetime_module21();
	transform_hlds__rbmm__interproc_region_lifetime_module22();
	transform_hlds__rbmm__interproc_region_lifetime_module23();
	transform_hlds__rbmm__interproc_region_lifetime_module24();
	transform_hlds__rbmm__interproc_region_lifetime_module25();
	transform_hlds__rbmm__interproc_region_lifetime_module26();
	transform_hlds__rbmm__interproc_region_lifetime_module27();
	transform_hlds__rbmm__interproc_region_lifetime_module28();
	transform_hlds__rbmm__interproc_region_lifetime_module29();
	transform_hlds__rbmm__interproc_region_lifetime_module30();
	transform_hlds__rbmm__interproc_region_lifetime_module31();
	transform_hlds__rbmm__interproc_region_lifetime_module32();
}

/* suppress gcc -Wmissing-decls warnings */
void mercury__transform_hlds__rbmm__interproc_region_lifetime__init(void);
void mercury__transform_hlds__rbmm__interproc_region_lifetime__init_type_tables(void);
void mercury__transform_hlds__rbmm__interproc_region_lifetime__init_debugger(void);
#ifdef MR_DEEP_PROFILING
void mercury__transform_hlds__rbmm__interproc_region_lifetime__write_out_proc_statics(FILE *fp);
#endif
#ifdef MR_RECORD_TERM_SIZES
void mercury__transform_hlds__rbmm__interproc_region_lifetime__init_complexity_procs(void);
#endif

void mercury__transform_hlds__rbmm__interproc_region_lifetime__init(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	mercury__transform_hlds__rbmm__interproc_region_lifetime_maybe_bunch_0();
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_transform_hlds__rbmm__interproc_region_lifetime__type_ctor_info_rule_pred_0,
		transform_hlds__rbmm__interproc_region_lifetime__rule_pred_0_0);
	mercury__transform_hlds__rbmm__interproc_region_lifetime__init_debugger();
}

void mercury__transform_hlds__rbmm__interproc_region_lifetime__init_type_tables(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	{
		MR_register_type_ctor_info(
		&mercury_data_transform_hlds__rbmm__interproc_region_lifetime__type_ctor_info_rule_pred_0);
	}
}


void mercury__transform_hlds__rbmm__interproc_region_lifetime__init_debugger(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}

#ifdef MR_DEEP_PROFILING

void mercury__transform_hlds__rbmm__interproc_region_lifetime__write_out_proc_statics(FILE *fp)
{
}

#endif

#ifdef MR_RECORD_TERM_SIZES

void mercury__transform_hlds__rbmm__interproc_region_lifetime__init_complexity_procs(void)
{
}

#endif

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;
