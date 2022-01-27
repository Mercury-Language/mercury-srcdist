/*
** Automatically generated from `mode_constraint_robdd.m'
** by the Mercury compiler,
** version DEV, configured for x86_64-apple-darwin12.2.1.
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
INIT mercury__check_hlds__mode_constraint_robdd__init
ENDINIT
*/

#define MR_ALLOW_RESET
#include "mercury_imp.h"
#line 526 "../library/io.int"
#include "io.mh"

#line 28 "check_hlds.mode_constraint_robdd.c"
#line 536 "../library/io.int"
#include "time.mh"

#line 32 "check_hlds.mode_constraint_robdd.c"
#line 537 "../library/io.int"
#include "string.mh"

#line 36 "check_hlds.mode_constraint_robdd.c"
#line 31 "../library/bitmap.int2"
#include "bitmap.mh"

#line 40 "check_hlds.mode_constraint_robdd.c"
#line 33 "../library/array.int2"
#include "array.mh"

#line 44 "check_hlds.mode_constraint_robdd.c"
#line 39 "../mdbcomp/mdbcomp.rtti_access.int2"
#include "mdbcomp.rtti_access.mh"

#line 48 "check_hlds.mode_constraint_robdd.c"
#line 49 "check_hlds.mode_constraint_robdd.c"
#include "check_hlds.mode_constraint_robdd.mh"

#line 52 "check_hlds.mode_constraint_robdd.c"
#line 53 "check_hlds.mode_constraint_robdd.c"
#ifndef CHECK_HLDS__MODE_CONSTRAINT_ROBDD_DECL_GUARD
#define CHECK_HLDS__MODE_CONSTRAINT_ROBDD_DECL_GUARD

#line 57 "check_hlds.mode_constraint_robdd.c"
#line 58 "check_hlds.mode_constraint_robdd.c"

#endif
#line 61 "check_hlds.mode_constraint_robdd.c"

#ifdef _MSC_VER
#define MR_STATIC_LINKAGE extern
#else
#define MR_STATIC_LINKAGE static
#endif


#ifdef MR_MSVC
#pragma pack(push, MR_BYTES_PER_WORD)
#endif
struct mercury_type_0 {
	MR_Word * f1[2];
};
#ifdef MR_MSVC
#pragma pack(pop)
#endif
MR_STATIC_LINKAGE const struct mercury_type_0 mercury_common_0[];


#ifdef MR_MSVC
#pragma pack(push, MR_BYTES_PER_WORD)
#endif
struct mercury_type_1 {
	MR_Word * f1[3];
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
	MR_Integer f2;
	MR_Word * f3;
};
#ifdef MR_MSVC
#pragma pack(pop)
#endif
MR_STATIC_LINKAGE const struct mercury_type_2 mercury_common_2[];


#ifdef MR_MSVC
#pragma pack(push, MR_BYTES_PER_WORD)
#endif
struct mercury_type_3 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[3];
};
#ifdef MR_MSVC
#pragma pack(pop)
#endif
MR_STATIC_LINKAGE const struct mercury_type_3 mercury_common_3[];


#ifdef MR_MSVC
#pragma pack(push, MR_BYTES_PER_WORD)
#endif
struct mercury_type_4 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[4];
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
};
#ifdef MR_MSVC
#pragma pack(pop)
#endif
MR_STATIC_LINKAGE const struct mercury_type_5 mercury_common_5[];


#ifdef MR_MSVC
#pragma pack(push, MR_BYTES_PER_WORD)
#endif
struct mercury_type_6 {
	MR_Word * f1;
	MR_Code * f2;
	MR_Integer f3;
};
#ifdef MR_MSVC
#pragma pack(pop)
#endif
MR_STATIC_LINKAGE const struct mercury_type_6 mercury_common_6[];


#ifdef MR_MSVC
#pragma pack(push, MR_BYTES_PER_WORD)
#endif
struct mercury_type_7 {
	MR_Word * f1;
	MR_Integer f2;
	MR_Word * f3;
	MR_Word * f4;
};
#ifdef MR_MSVC
#pragma pack(pop)
#endif
MR_STATIC_LINKAGE const struct mercury_type_7 mercury_common_7[];


#ifdef MR_MSVC
#pragma pack(push, MR_BYTES_PER_WORD)
#endif
struct mercury_type_8 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[6];
};
#ifdef MR_MSVC
#pragma pack(pop)
#endif
MR_STATIC_LINKAGE const struct mercury_type_8 mercury_common_8[];


#ifdef MR_MSVC
#pragma pack(push, MR_BYTES_PER_WORD)
#endif
struct mercury_type_9 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[5];
};
#ifdef MR_MSVC
#pragma pack(pop)
#endif
MR_STATIC_LINKAGE const struct mercury_type_9 mercury_common_9[];

extern const MR_TypeCtorInfo_Struct
	mercury_data_check_hlds__mode_constraint_robdd__type_ctor_info_lambda_path_0,
	mercury_data_check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0,
	mercury_data_check_hlds__mode_constraint_robdd__type_ctor_info_mode_constraint_0,
	mercury_data_check_hlds__mode_constraint_robdd__type_ctor_info_mode_constraint_info_0,
	mercury_data_check_hlds__mode_constraint_robdd__type_ctor_info_mode_constraint_var_0,
	mercury_data_check_hlds__mode_constraint_robdd__type_ctor_info_mode_constraint_varmap_0,
	mercury_data_check_hlds__mode_constraint_robdd__type_ctor_info_mode_constraint_vars_0,
	mercury_data_check_hlds__mode_constraint_robdd__type_ctor_info_prodvars_map_0,
	mercury_data_check_hlds__mode_constraint_robdd__type_ctor_info_prog_var_and_level_0,
	mercury_data_check_hlds__mode_constraint_robdd__type_ctor_info_rep_var_0;

extern const MR_TypeCtorInfo_Struct
	mercury_data_check_hlds__mode_constraint_robdd__type_ctor_info_robdd_var_0,
	mercury_data_check_hlds__mode_constraint_robdd__type_ctor_info_threshold_0,
	mercury_data_check_hlds__mode_constraint_robdd__type_ctor_info_varmap_key_0;
MR_decl_label8(check_hlds__mode_constraint_robdd__IntroducedFrom__pred__atomic_prodvars_map__426__1_4_0, 3,4,7,9,11,8,13,2)
MR_decl_label5(check_hlds__mode_constraint_robdd__IntroducedFrom__pred__get_interesting_vars_for_pred__309__1_4_0, 2,3,5,6,1)
MR_decl_label3(check_hlds__mode_constraint_robdd__IntroducedFrom__pred__restrict_filter__283__1_3_0, 2,7,3)
MR_decl_label10(check_hlds__mode_constraint_robdd__IntroducedFrom__pred__robdd_to_dot__391__1_5_0, 2,5,6,7,4,10,11,9,13,14)
MR_decl_label10(check_hlds__mode_constraint_robdd__IntroducedFrom__pred__robdd_to_dot__391__1_5_0, 15,16,17,18,19,20,21,22,23,24)
MR_decl_label5(check_hlds__mode_constraint_robdd__IntroducedFrom__pred__set_input_nodes__321__1_6_0, 1,2,4,7,8)
MR_decl_label1(check_hlds__mode_constraint_robdd__add_forward_goal_path_map_4_0, 2)
MR_decl_label1(check_hlds__mode_constraint_robdd__enter_lambda_goal_3_0, 2)
MR_decl_label1(check_hlds__mode_constraint_robdd__leave_lambda_goal_2_0, 2)
MR_decl_label7(check_hlds__mode_constraint_robdd__mode_constraint_var_5_0, 5,2,3,9,8,11,12)
MR_decl_label1(check_hlds__mode_constraint_robdd__robdd_to_dot_6_0, 3)
MR_decl_label2(check_hlds__mode_constraint_robdd__save_max_var_for_pred_3_0, 2,3)
MR_decl_label2(check_hlds__mode_constraint_robdd__save_min_var_for_pred_3_0, 2,3)
MR_decl_label5(check_hlds__mode_constraint_robdd__set_input_nodes_4_0, 2,3,5,6,8)
MR_decl_label5(fn__check_hlds__mode_constraint_robdd__atomic_prodvars_map_2_0, 3,4,7,8,2)
MR_decl_label9(fn__check_hlds__mode_constraint_robdd__init_mode_constraint_info_1_0, 2,3,4,5,6,7,8,9,10)
MR_decl_label1(fn__check_hlds__mode_constraint_robdd__restrict_filter_3_0, 2)
MR_decl_label1(fn__check_hlds__mode_constraint_robdd__restrict_threshold_2_0, 2)
MR_decl_label10(__Unify___check_hlds__mode_constraint_robdd__mode_constraint_info_0_0, 4,6,8,10,12,14,16,18,22,1)
MR_decl_label4(__Unify___check_hlds__mode_constraint_robdd__prog_var_and_level_0_0, 4,6,10,1)
MR_decl_label5(__Unify___check_hlds__mode_constraint_robdd__rep_var_0_0, 7,5,24,9,1)
MR_decl_label1(__Unify___check_hlds__mode_constraint_robdd__threshold_0_0, 6)
MR_decl_label4(__Unify___check_hlds__mode_constraint_robdd__varmap_key_0_0, 4,6,10,1)
MR_decl_label10(__Compare___check_hlds__mode_constraint_robdd__mode_constraint_info_0_0, 3,2,5,9,13,17,21,25,29,33)
MR_decl_label2(__Compare___check_hlds__mode_constraint_robdd__mode_constraint_info_0_0, 37,115)
MR_decl_label5(__Compare___check_hlds__mode_constraint_robdd__prog_var_and_level_0_0, 3,2,5,9,38)
MR_decl_label10(__Compare___check_hlds__mode_constraint_robdd__rep_var_0_0, 3,2,9,7,5,17,42,15,33,21)
MR_decl_label2(__Compare___check_hlds__mode_constraint_robdd__rep_var_0_0, 34,80)
MR_decl_label2(__Compare___check_hlds__mode_constraint_robdd__threshold_0_0, 3,2)
MR_decl_label5(__Compare___check_hlds__mode_constraint_robdd__varmap_key_0_0, 3,2,5,9,38)
MR_def_extern_entry(fn__check_hlds__mode_constraint_robdd__init_mode_constraint_info_1_0)
MR_def_extern_entry(fn__check_hlds__mode_constraint_robdd__mci_set_pred_id_2_0)
MR_def_extern_entry(check_hlds__mode_constraint_robdd__mode_constraint_var_5_0)
MR_def_extern_entry(check_hlds__mode_constraint_robdd__mode_constraint_var_4_0)
MR_def_extern_entry(fn__check_hlds__mode_constraint_robdd__mode_constraint_var_2_0)
MR_def_extern_entry(check_hlds__mode_constraint_robdd__enter_lambda_goal_3_0)
MR_def_extern_entry(check_hlds__mode_constraint_robdd__leave_lambda_goal_2_0)
MR_def_extern_entry(check_hlds__mode_constraint_robdd__get_prog_var_level_3_0)
MR_def_extern_entry(check_hlds__mode_constraint_robdd__set_level_from_var_3_0)
MR_def_extern_entry(check_hlds__mode_constraint_robdd__save_threshold_2_0)
MR_def_extern_entry(fn__check_hlds__mode_constraint_robdd__restrict_threshold_2_0)
MR_def_extern_entry(fn__check_hlds__mode_constraint_robdd__restrict_filter_3_0)
MR_def_extern_entry(check_hlds__mode_constraint_robdd__save_min_var_for_pred_3_0)
MR_def_extern_entry(check_hlds__mode_constraint_robdd__save_max_var_for_pred_3_0)
MR_def_extern_entry(check_hlds__mode_constraint_robdd__get_interesting_vars_for_pred_3_0)
MR_def_extern_entry(check_hlds__mode_constraint_robdd__set_input_nodes_4_0)
MR_def_extern_entry(check_hlds__mode_constraint_robdd__set_simple_mode_constraints_2_0)
MR_def_extern_entry(check_hlds__mode_constraint_robdd__unset_simple_mode_constraints_2_0)
MR_def_extern_entry(check_hlds__mode_constraint_robdd__using_simple_mode_constraints_1_0)
MR_def_extern_entry(check_hlds__mode_constraint_robdd__get_forward_goal_path_map_2_0)
MR_def_extern_entry(check_hlds__mode_constraint_robdd__get_forward_goal_path_map_for_pred_3_0)
MR_def_extern_entry(check_hlds__mode_constraint_robdd__add_forward_goal_path_map_4_0)
MR_def_extern_entry(check_hlds__mode_constraint_robdd__robdd_to_dot_6_0)
MR_def_extern_entry(fn__check_hlds__mode_constraint_robdd__atomic_prodvars_map_2_0)
MR_def_extern_entry(__Unify___check_hlds__mode_constraint_robdd__lambda_path_0_0)
MR_def_extern_entry(__Compare___check_hlds__mode_constraint_robdd__lambda_path_0_0)
MR_def_extern_entry(__Unify___check_hlds__mode_constraint_robdd__mc_type_0_0)
MR_def_extern_entry(__Compare___check_hlds__mode_constraint_robdd__mc_type_0_0)
MR_def_extern_entry(__Unify___check_hlds__mode_constraint_robdd__mode_constraint_0_0)
MR_def_extern_entry(__Compare___check_hlds__mode_constraint_robdd__mode_constraint_0_0)
MR_def_extern_entry(__Unify___check_hlds__mode_constraint_robdd__mode_constraint_info_0_0)
MR_def_extern_entry(__Compare___check_hlds__mode_constraint_robdd__mode_constraint_info_0_0)
MR_def_extern_entry(__Unify___check_hlds__mode_constraint_robdd__mode_constraint_var_0_0)
MR_def_extern_entry(__Compare___check_hlds__mode_constraint_robdd__mode_constraint_var_0_0)
MR_decl_static(__Unify___check_hlds__mode_constraint_robdd__mode_constraint_varmap_0_0)
MR_decl_static(__Compare___check_hlds__mode_constraint_robdd__mode_constraint_varmap_0_0)
MR_def_extern_entry(__Unify___check_hlds__mode_constraint_robdd__mode_constraint_vars_0_0)
MR_def_extern_entry(__Compare___check_hlds__mode_constraint_robdd__mode_constraint_vars_0_0)
MR_def_extern_entry(__Unify___check_hlds__mode_constraint_robdd__prodvars_map_0_0)
MR_def_extern_entry(__Compare___check_hlds__mode_constraint_robdd__prodvars_map_0_0)
MR_def_extern_entry(__Unify___check_hlds__mode_constraint_robdd__prog_var_and_level_0_0)
MR_def_extern_entry(__Compare___check_hlds__mode_constraint_robdd__prog_var_and_level_0_0)
MR_def_extern_entry(__Unify___check_hlds__mode_constraint_robdd__rep_var_0_0)
MR_def_extern_entry(__Compare___check_hlds__mode_constraint_robdd__rep_var_0_0)
MR_decl_static(__Unify___check_hlds__mode_constraint_robdd__robdd_var_0_0)
MR_decl_static(__Compare___check_hlds__mode_constraint_robdd__robdd_var_0_0)
MR_def_extern_entry(__Unify___check_hlds__mode_constraint_robdd__threshold_0_0)
MR_def_extern_entry(__Compare___check_hlds__mode_constraint_robdd__threshold_0_0)
MR_decl_static(__Unify___check_hlds__mode_constraint_robdd__varmap_key_0_0)
MR_decl_static(__Compare___check_hlds__mode_constraint_robdd__varmap_key_0_0)
MR_decl_static(check_hlds__mode_constraint_robdd__IntroducedFrom__pred__restrict_filter__283__1_3_0)
MR_decl_static(fn__check_hlds__mode_constraint_robdd__IntroducedFrom__func__get_interesting_vars_for_pred__308__1_1_0)
MR_decl_static(check_hlds__mode_constraint_robdd__IntroducedFrom__pred__get_interesting_vars_for_pred__309__1_4_0)
MR_decl_static(fn__check_hlds__mode_constraint_robdd__IntroducedFrom__func__get_interesting_vars_for_pred__308__2_2_0)
MR_decl_static(fn__check_hlds__mode_constraint_robdd__IntroducedFrom__func__get_interesting_vars_for_pred__312__1_3_0)
MR_decl_static(fn__check_hlds__mode_constraint_robdd__IntroducedFrom__func__get_interesting_vars_for_pred__312__2_1_0)
MR_decl_static(check_hlds__mode_constraint_robdd__IntroducedFrom__pred__set_input_nodes__321__1_6_0)
MR_decl_static(check_hlds__mode_constraint_robdd__IntroducedFrom__pred__robdd_to_dot__391__1_5_0)
MR_decl_static(check_hlds__mode_constraint_robdd__IntroducedFrom__pred__atomic_prodvars_map__426__1_4_0)
MR_def_extern_entry(f_99_104_101_99_107_95_104_108_100_115_95_95_109_111_100_101_95_99_111_110_115_116_114_97_105_110_116_95_114_111_98_100_100_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_85_110_105_102_121_95_95_95_99_104_101_99_107_95_104_108_100_115_95_95_109_111_100_101_95_99_111_110_115_116_114_97_105_110_116_95_114_111_98_100_100_95_95_109_99_95_116_121_112_101_95_48_95_95_91_49_44_32_50_93_95_48_2_0)
MR_def_extern_entry(f_99_104_101_99_107_95_104_108_100_115_95_95_109_111_100_101_95_99_111_110_115_116_114_97_105_110_116_95_114_111_98_100_100_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_67_111_109_112_97_114_101_95_95_95_99_104_101_99_107_95_104_108_100_115_95_95_109_111_100_101_95_99_111_110_115_116_114_97_105_110_116_95_114_111_98_100_100_95_95_109_99_95_116_121_112_101_95_48_95_95_91_50_44_32_51_93_95_48_3_0)
MR_decl_static(fn__f_99_104_101_99_107_95_104_108_100_115_95_95_109_111_100_101_95_99_111_110_115_116_114_97_105_110_116_95_114_111_98_100_100_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_102_117_110_99_95_95_103_101_116_95_105_110_116_101_114_101_115_116_105_110_103_95_118_97_114_115_95_102_111_114_95_112_114_101_100_95_95_51_48_56_95_95_51_95_95_104_111_49_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_93_95_48_3_0)

extern const MR_TypeCtorInfo_Struct mercury_data_term__type_ctor_info_var_1;
extern const MR_TypeCtorInfo_Struct mercury_data_list__type_ctor_info_list_1;
extern const MR_TypeCtorInfo_Struct mercury_data_set_ordlist__type_ctor_info_set_ordlist_1;
extern const MR_TypeCtorInfo_Struct mercury_data_varset__type_ctor_info_varset_1;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_prog_var_type_0;
extern const MR_TypeCtorInfo_Struct mercury_data_stack__type_ctor_info_stack_1;
extern const MR_TypeCtorInfo_Struct mercury_data_mdbcomp__goal_path__type_ctor_info_goal_id_0;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__set_of_var__type_ctor_info_set_of_var_1;
extern const MR_TypeCtorInfo_Struct mercury_data_mode_robdd__tfeirn__type_ctor_info_tfeirn_1;
extern const MR_TypeCtorInfo_Struct mercury_data_sparse_bitset__type_ctor_info_sparse_bitset_1;
extern const MR_TypeCtorInfo_Struct mercury_data_check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0;
extern const MR_TypeCtorInfo_Struct mercury_data_term__type_ctor_info_var_1;
extern const MR_TypeCtorInfo_Struct mercury_data_list__type_ctor_info_list_1;
extern const MR_TypeCtorInfo_Struct mercury_data_set_ordlist__type_ctor_info_set_ordlist_1;
extern const MR_TypeCtorInfo_Struct mercury_data_mdbcomp__goal_path__type_ctor_info_goal_id_0;
extern const MR_TypeCtorInfo_Struct mercury_data_check_hlds__mode_constraint_robdd__type_ctor_info_varmap_key_0;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_prog_var_type_0;
extern const MR_TypeCtorInfo_Struct mercury_data_stack__type_ctor_info_stack_1;
extern const MR_TypeCtorInfo_Struct mercury_data_tree_bitset__type_ctor_info_tree_bitset_1;
static const struct mercury_type_0 mercury_common_0[24] =
{
{
{
MR_CTOR1_ADDR(term, var),
MR_CTOR0_ADDR(check_hlds__mode_constraint_robdd, mc_type)
}
},
{
{
MR_LIST_CTOR_ADDR,
MR_TAG_COMMON(0,0,0)
}
},
{
{
MR_CTOR1_ADDR(set_ordlist, set_ordlist),
MR_TAG_COMMON(0,0,0)
}
},
{
{
MR_CTOR1_ADDR(varset, varset),
MR_CTOR0_ADDR(check_hlds__mode_constraint_robdd, mc_type)
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
MR_CTOR1_ADDR(stack, stack),
MR_CTOR0_ADDR(mdbcomp__goal_path, goal_id)
}
},
{
{
MR_CTOR1_ADDR(parse_tree__set_of_var, set_of_var),
MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type)
}
},
{
{
MR_CTOR1_ADDR(mode_robdd__tfeirn, tfeirn),
MR_CTOR0_ADDR(check_hlds__mode_constraint_robdd, mc_type)
}
},
{
{
MR_CTOR1_ADDR(sparse_bitset, sparse_bitset),
MR_TAG_COMMON(0,0,0)
}
},
{
{
MR_CTOR1_ADDR(term, var),
MR_CTOR0_ADDR(check_hlds__mode_constraint_robdd, mc_type)
}
},
{
{
MR_CTOR1_ADDR(term, var),
MR_CTOR0_ADDR(check_hlds__mode_constraint_robdd, mc_type)
}
},
{
{
MR_LIST_CTOR_ADDR,
MR_COMMON(0,10)
}
},
{
{
MR_CTOR1_ADDR(set_ordlist, set_ordlist),
MR_COMMON(0,10)
}
},
{
{
MR_LIST_CTOR_ADDR,
MR_COMMON(0,10)
}
},
{
{
MR_CTOR1_ADDR(set_ordlist, set_ordlist),
MR_COMMON(0,10)
}
},
{
{
MR_CTOR1_ADDR(stack, stack),
MR_CTOR0_ADDR(mdbcomp__goal_path, goal_id)
}
},
{
{
MR_LIST_CTOR_ADDR,
MR_CTOR0_ADDR(check_hlds__mode_constraint_robdd, varmap_key)
}
},
{
{
MR_CTOR1_ADDR(mode_robdd__tfeirn, tfeirn),
MR_CTOR0_ADDR(check_hlds__mode_constraint_robdd, mc_type)
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
MR_CTOR1_ADDR(varset, varset),
MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type)
}
},
{
{
MR_CTOR1_ADDR(stack, stack),
MR_CTOR0_ADDR(mdbcomp__goal_path, goal_id)
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
MR_CTOR1_ADDR(tree_bitset, tree_bitset),
MR_COMMON(0,21)
}
},
{
{
MR_CTOR1_ADDR(varset, varset),
MR_CTOR0_ADDR(check_hlds__mode_constraint_robdd, mc_type)
}
},
};

extern const MR_TypeCtorInfo_Struct mercury_data_tree234__type_ctor_info_tree234_2;
extern const MR_TypeCtorInfo_Struct mercury_data_mdbcomp__goal_path__type_ctor_info_forward_goal_path_0;
extern const MR_BaseTypeclassInfo mercury_data_base_typeclass_info_enum__enum__arity1__term__var__arity1__[];
extern const MR_TypeCtorInfo_Struct mercury_data_bimap__type_ctor_info_bimap_2;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_pred_id_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_pred_id_0;
static const struct mercury_type_1 mercury_common_1[9] =
{
{
{
MR_CTOR_ADDR(tree234, tree234, 2),
MR_CTOR0_ADDR(mdbcomp__goal_path, goal_id),
MR_CTOR0_ADDR(mdbcomp__goal_path, forward_goal_path)
}
},
{
{
(MR_Word *) &mercury_data_base_typeclass_info_enum__enum__arity1__term__var__arity1__,
MR_CTOR0_ADDR(check_hlds__mode_constraint_robdd, mc_type),
MR_TAG_COMMON(0,0,0)
}
},
{
{
MR_CTOR_ADDR(tree234, tree234, 2),
MR_TAG_COMMON(0,0,5),
MR_TAG_COMMON(0,0,6)
}
},
{
{
MR_CTOR_ADDR(bimap, bimap, 2),
MR_CTOR0_ADDR(check_hlds__mode_constraint_robdd, varmap_key),
MR_TAG_COMMON(0,0,0)
}
},
{
{
MR_CTOR_ADDR(tree234, tree234, 2),
MR_CTOR0_ADDR(hlds__hlds_pred, pred_id),
MR_TAG_COMMON(0,0,0)
}
},
{
{
MR_CTOR_ADDR(tree234, tree234, 2),
MR_CTOR0_ADDR(hlds__hlds_pred, pred_id),
MR_TAG_COMMON(0,1,0)
}
},
{
{
MR_CTOR_ADDR(tree234, tree234, 2),
MR_CTOR0_ADDR(hlds__hlds_pred, pred_id),
MR_COMMON(0,10)
}
},
{
{
MR_CTOR_ADDR(bimap, bimap, 2),
MR_CTOR0_ADDR(check_hlds__mode_constraint_robdd, varmap_key),
MR_COMMON(0,10)
}
},
{
{
MR_CTOR_ADDR(tree234, tree234, 2),
MR_COMMON(0,20),
MR_COMMON(0,22)
}
},
};

extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_pred_0;
extern const MR_TypeCtorInfo_Struct mercury_data_check_hlds__mode_constraint_robdd__type_ctor_info_rep_var_0;
static const struct mercury_type_2 mercury_common_2[2] =
{
{
MR_CTOR0_ADDR(builtin, pred),
1,
MR_CTOR0_ADDR(check_hlds__mode_constraint_robdd, rep_var)
},
{
MR_CTOR0_ADDR(builtin, pred),
1,
MR_COMMON(0,10)
},
};

static const MR_UserClosureId
mercury_data__closure_layout__fn__check_hlds__mode_constraint_robdd__restrict_filter_3_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_check_hlds__mode_constraint_robdd__type_ctor_info_mode_constraint_info_0;
static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__mode_constraint_robdd__get_interesting_vars_for_pred_3_0_2;
static const struct mercury_type_3 mercury_common_3[2] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__fn__check_hlds__mode_constraint_robdd__restrict_filter_3_0_1,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_COMMON(2,0),
MR_CTOR0_ADDR(check_hlds__mode_constraint_robdd, mode_constraint_info),
MR_COMMON(0,9)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__check_hlds__mode_constraint_robdd__get_interesting_vars_for_pred_3_0_2,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_COMMON(2,1),
MR_COMMON(0,11),
MR_COMMON(0,11)
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__mode_constraint_robdd__get_interesting_vars_for_pred_3_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_pred_id_0;
static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__mode_constraint_robdd__get_interesting_vars_for_pred_3_0_4;
static const MR_UserClosureId
mercury_data__closure_layout__fn__check_hlds__mode_constraint_robdd__atomic_prodvars_map_2_0_1;
static const struct mercury_type_4 mercury_common_4[3] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__check_hlds__mode_constraint_robdd__get_interesting_vars_for_pred_3_0_1,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_CTOR0_ADDR(hlds__hlds_pred, pred_id),
MR_COMMON(1,6),
MR_COMMON(1,6),
MR_COMMON(0,9)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__check_hlds__mode_constraint_robdd__get_interesting_vars_for_pred_3_0_4,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_COMMON(7,0),
MR_COMMON(7,1),
MR_COMMON(0,11),
MR_COMMON(0,12)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__fn__check_hlds__mode_constraint_robdd__atomic_prodvars_map_2_0_1,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_CTOR0_ADDR(check_hlds__mode_constraint_robdd, mode_constraint_info),
MR_COMMON(0,9),
MR_COMMON(1,8),
MR_COMMON(1,8)
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__mode_constraint_robdd__get_interesting_vars_for_pred_3_0_3;
static const MR_UserClosureId
mercury_data__closure_layout__fn__f_99_104_101_99_107_95_104_108_100_115_95_95_109_111_100_101_95_99_111_110_115_116_114_97_105_110_116_95_114_111_98_100_100_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_102_117_110_99_95_95_103_101_116_95_105_110_116_101_114_101_115_116_105_110_103_95_118_97_114_115_95_102_111_114_95_112_114_101_100_95_95_51_48_56_95_95_51_95_95_104_111_49_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_93_95_48_3_0_1;
static const struct mercury_type_5 mercury_common_5[2] =
{
{
(MR_Word *) &mercury_data__closure_layout__check_hlds__mode_constraint_robdd__get_interesting_vars_for_pred_3_0_3,
(MR_Word *) (MR_Integer) 0,
2,
MR_COMMON(0,11),
MR_COMMON(0,12)
},
{
(MR_Word *) &mercury_data__closure_layout__fn__f_99_104_101_99_107_95_104_108_100_115_95_95_109_111_100_101_95_99_111_110_115_116_114_97_105_110_116_95_114_111_98_100_100_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_102_117_110_99_95_95_103_101_116_95_105_110_116_101_114_101_115_116_105_110_103_95_118_97_114_115_95_102_111_114_95_112_114_101_100_95_95_51_48_56_95_95_51_95_95_104_111_49_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_93_95_48_3_0_1,
(MR_Word *) (MR_Integer) 0,
2,
MR_COMMON(0,23),
MR_COMMON(0,11)
},
};

static const struct mercury_type_6 mercury_common_6[2] =
{
{
MR_COMMON(5,0),
MR_ENTRY_AP(fn__check_hlds__mode_constraint_robdd__IntroducedFrom__func__get_interesting_vars_for_pred__308__1_1_0),
0
},
{
MR_COMMON(5,1),
MR_ENTRY_AP(fn__check_hlds__mode_constraint_robdd__IntroducedFrom__func__get_interesting_vars_for_pred__312__2_1_0),
0
},
};

extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_func_0;
static const struct mercury_type_7 mercury_common_7[2] =
{
{
MR_CTOR0_ADDR(builtin, func),
2,
MR_COMMON(0,13),
MR_COMMON(0,14)
},
{
MR_CTOR0_ADDR(builtin, func),
2,
MR_COMMON(0,13),
MR_COMMON(0,13)
},
};

static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__mode_constraint_robdd__set_input_nodes_4_0_1;
static const struct mercury_type_8 mercury_common_8[1] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__check_hlds__mode_constraint_robdd__set_input_nodes_4_0_1,
(MR_Word *) (MR_Integer) 0
},
6,
{
MR_COMMON(1,7),
MR_COMMON(0,15),
MR_CTOR0_ADDR(hlds__hlds_pred, pred_id),
MR_COMMON(0,16),
MR_COMMON(0,17),
MR_COMMON(0,18)
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__mode_constraint_robdd__robdd_to_dot_6_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_io__type_ctor_info_state_0;
static const struct mercury_type_9 mercury_common_9[1] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__check_hlds__mode_constraint_robdd__robdd_to_dot_6_0_1,
(MR_Word *) (MR_Integer) 0
},
5,
{
MR_COMMON(0,19),
MR_COMMON(1,7),
MR_COMMON(0,9),
MR_IO_CTOR_ADDR,
MR_IO_CTOR_ADDR
}
},
};

static const MR_FA_TypeInfo_Struct1 mercury_data_stack__ti_stack_1mdbcomp__goal_path__type_ctor_info_goal_id_0 = {
	&mercury_data_stack__type_ctor_info_stack_1,
{	(MR_TypeInfo) &mercury_data_mdbcomp__goal_path__type_ctor_info_goal_id_0
}};

const MR_TypeCtorInfo_Struct mercury_data_check_hlds__mode_constraint_robdd__type_ctor_info_lambda_path_0 = {
	0,
	15,
	-1,
	MR_TYPECTOR_REP_EQUIV_GROUND,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___check_hlds__mode_constraint_robdd__lambda_path_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___check_hlds__mode_constraint_robdd__lambda_path_0_0)),
	"check_hlds.mode_constraint_robdd",
	"lambda_path",
	{ 0 },
	{ (void *)&mercury_data_stack__ti_stack_1mdbcomp__goal_path__type_ctor_info_goal_id_0 },
	-1,
	0,
	NULL
};

static const MR_EnumFunctorDesc mercury_data_check_hlds__mode_constraint_robdd__enum_functor_desc_mc_type_0_0 = {
	"mc_type",
	0
};

const MR_EnumFunctorDescPtr mercury_data_check_hlds__mode_constraint_robdd__enum_value_ordered_mc_type_0[] = {
	&mercury_data_check_hlds__mode_constraint_robdd__enum_functor_desc_mc_type_0_0
};

const MR_EnumFunctorDescPtr mercury_data_check_hlds__mode_constraint_robdd__enum_name_ordered_mc_type_0[] = {
	&mercury_data_check_hlds__mode_constraint_robdd__enum_functor_desc_mc_type_0_0
};

const MR_Integer mercury_data_check_hlds__mode_constraint_robdd__functor_number_map_mc_type_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0 = {
	0,
	15,
	-1,
	MR_TYPECTOR_REP_DUMMY,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___check_hlds__mode_constraint_robdd__mc_type_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___check_hlds__mode_constraint_robdd__mc_type_0_0)),
	"check_hlds.mode_constraint_robdd",
	"mc_type",
	{ (void *)mercury_data_check_hlds__mode_constraint_robdd__enum_name_ordered_mc_type_0 },
	{ (void *)mercury_data_check_hlds__mode_constraint_robdd__enum_value_ordered_mc_type_0 },
	1,
	4,
	mercury_data_check_hlds__mode_constraint_robdd__functor_number_map_mc_type_0
};

static const MR_FA_TypeInfo_Struct1 mercury_data_mode_robdd__tfeirn__ti_tfeirn_1check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0 = {
	&mercury_data_mode_robdd__tfeirn__type_ctor_info_tfeirn_1,
{	(MR_TypeInfo) &mercury_data_check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0
}};

const MR_TypeCtorInfo_Struct mercury_data_check_hlds__mode_constraint_robdd__type_ctor_info_mode_constraint_0 = {
	0,
	15,
	-1,
	MR_TYPECTOR_REP_EQUIV_GROUND,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___check_hlds__mode_constraint_robdd__mode_constraint_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___check_hlds__mode_constraint_robdd__mode_constraint_0_0)),
	"check_hlds.mode_constraint_robdd",
	"mode_constraint",
	{ 0 },
	{ (void *)&mercury_data_mode_robdd__tfeirn__ti_tfeirn_1check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0 },
	-1,
	0,
	NULL
};

static const MR_FA_TypeInfo_Struct1 mercury_data_varset__ti_varset_1check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0 = {
	&mercury_data_varset__type_ctor_info_varset_1,
{	(MR_TypeInfo) &mercury_data_check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0
}};

static const MR_FA_TypeInfo_Struct1 mercury_data_term__ti_var_1check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0 = {
	&mercury_data_term__type_ctor_info_var_1,
{	(MR_TypeInfo) &mercury_data_check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0
}};

static const MR_FA_TypeInfo_Struct2 mercury_data_bimap__ti_bimap_2check_hlds__mode_constraint_robdd__type_ctor_info_varmap_key_0term__ti_var_1check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0 = {
	&mercury_data_bimap__type_ctor_info_bimap_2,
{	(MR_TypeInfo) &mercury_data_check_hlds__mode_constraint_robdd__type_ctor_info_varmap_key_0,
	(MR_TypeInfo) &mercury_data_term__ti_var_1check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0
}};

static const MR_FA_TypeInfo_Struct2 mercury_data_tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_id_0term__ti_var_1check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0 = {
	&mercury_data_tree234__type_ctor_info_tree234_2,
{	(MR_TypeInfo) &mercury_data_hlds__hlds_pred__type_ctor_info_pred_id_0,
	(MR_TypeInfo) &mercury_data_term__ti_var_1check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0
}};
extern const MR_TypeCtorInfo_Struct mercury_data_tree_bitset__type_ctor_info_tree_bitset_1;

static const MR_FA_TypeInfo_Struct1 mercury_data_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
	&mercury_data_term__type_ctor_info_var_1,
{	(MR_TypeInfo) &mercury_data_parse_tree__prog_data__type_ctor_info_prog_var_type_0
}};

static const MR_FA_TypeInfo_Struct1 mercury_data_tree_bitset__ti_tree_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
	&mercury_data_tree_bitset__type_ctor_info_tree_bitset_1,
{	(MR_TypeInfo) &mercury_data_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
}};
extern const MR_TypeCtorInfo_Struct mercury_data_bool__type_ctor_info_bool_0;
extern const MR_TypeCtorInfo_Struct mercury_data_mdbcomp__goal_path__type_ctor_info_forward_goal_path_0;

static const MR_FA_TypeInfo_Struct2 mercury_data_tree234__ti_tree234_2mdbcomp__goal_path__type_ctor_info_goal_id_0mdbcomp__goal_path__type_ctor_info_forward_goal_path_0 = {
	&mercury_data_tree234__type_ctor_info_tree234_2,
{	(MR_TypeInfo) &mercury_data_mdbcomp__goal_path__type_ctor_info_goal_id_0,
	(MR_TypeInfo) &mercury_data_mdbcomp__goal_path__type_ctor_info_forward_goal_path_0
}};

static const MR_FA_TypeInfo_Struct2 mercury_data_tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_id_0tree234__ti_tree234_2mdbcomp__goal_path__type_ctor_info_goal_id_0mdbcomp__goal_path__type_ctor_info_forward_goal_path_0 = {
	&mercury_data_tree234__type_ctor_info_tree234_2,
{	(MR_TypeInfo) &mercury_data_hlds__hlds_pred__type_ctor_info_pred_id_0,
	(MR_TypeInfo) &mercury_data_tree234__ti_tree234_2mdbcomp__goal_path__type_ctor_info_goal_id_0mdbcomp__goal_path__type_ctor_info_forward_goal_path_0
}};
extern const MR_TypeCtorInfo_Struct mercury_data_bool__type_ctor_info_bool_0;

const MR_PseudoTypeInfo mercury_data_check_hlds__mode_constraint_robdd__field_types_mode_constraint_info_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_varset__ti_varset_1check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0,
	(MR_PseudoTypeInfo) &mercury_data_bimap__ti_bimap_2check_hlds__mode_constraint_robdd__type_ctor_info_varmap_key_0term__ti_var_1check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0,
	(MR_PseudoTypeInfo) &mercury_data_hlds__hlds_pred__type_ctor_info_pred_id_0,
	(MR_PseudoTypeInfo) &mercury_data_stack__ti_stack_1mdbcomp__goal_path__type_ctor_info_goal_id_0,
	(MR_PseudoTypeInfo) &mercury_data_tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_id_0term__ti_var_1check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0,
	(MR_PseudoTypeInfo) &mercury_data_tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_id_0term__ti_var_1check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0,
	(MR_PseudoTypeInfo) &mercury_data_tree_bitset__ti_tree_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
	(MR_PseudoTypeInfo) &mercury_data_term__ti_var_1check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0,
	(MR_PseudoTypeInfo) &mercury_data_bool__type_ctor_info_bool_0,
	(MR_PseudoTypeInfo) &mercury_data_tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_id_0tree234__ti_tree234_2mdbcomp__goal_path__type_ctor_info_goal_id_0mdbcomp__goal_path__type_ctor_info_forward_goal_path_0
};

const MR_ConstString mercury_data_check_hlds__mode_constraint_robdd__field_names_mode_constraint_info_0_0[] = {
	"mci_varset",
	"mci_varmap",
	"mci_pred_id",
	"mci_lambda_path",
	"mci_min_vars",
	"mci_max_vars",
	"mci_input_nodes",
	"mci_zero_var",
	"mci_simple_constraints",
	"mci_goal_path_map"
};

static const MR_DuFunctorDesc mercury_data_check_hlds__mode_constraint_robdd__du_functor_desc_mode_constraint_info_0_0 = {
	"mode_constraint_info",
	10,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_check_hlds__mode_constraint_robdd__field_types_mode_constraint_info_0_0,
	mercury_data_check_hlds__mode_constraint_robdd__field_names_mode_constraint_info_0_0,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_check_hlds__mode_constraint_robdd__du_stag_ordered_mode_constraint_info_0_0[] = {
	&mercury_data_check_hlds__mode_constraint_robdd__du_functor_desc_mode_constraint_info_0_0

};

const MR_DuPtagLayout mercury_data_check_hlds__mode_constraint_robdd__du_ptag_ordered_mode_constraint_info_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_check_hlds__mode_constraint_robdd__du_stag_ordered_mode_constraint_info_0_0 }

};

const MR_DuFunctorDescPtr mercury_data_check_hlds__mode_constraint_robdd__du_name_ordered_mode_constraint_info_0[] = {
	&mercury_data_check_hlds__mode_constraint_robdd__du_functor_desc_mode_constraint_info_0_0
};

const MR_Integer mercury_data_check_hlds__mode_constraint_robdd__functor_number_map_mode_constraint_info_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_check_hlds__mode_constraint_robdd__type_ctor_info_mode_constraint_info_0 = {
	0,
	15,
	1,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___check_hlds__mode_constraint_robdd__mode_constraint_info_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___check_hlds__mode_constraint_robdd__mode_constraint_info_0_0)),
	"check_hlds.mode_constraint_robdd",
	"mode_constraint_info",
	{ (void *)mercury_data_check_hlds__mode_constraint_robdd__du_name_ordered_mode_constraint_info_0 },
	{ (void *)mercury_data_check_hlds__mode_constraint_robdd__du_ptag_ordered_mode_constraint_info_0 },
	1,
	4,
	mercury_data_check_hlds__mode_constraint_robdd__functor_number_map_mode_constraint_info_0
};

const MR_TypeCtorInfo_Struct mercury_data_check_hlds__mode_constraint_robdd__type_ctor_info_mode_constraint_var_0 = {
	0,
	15,
	-1,
	MR_TYPECTOR_REP_EQUIV_GROUND,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___check_hlds__mode_constraint_robdd__mode_constraint_var_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___check_hlds__mode_constraint_robdd__mode_constraint_var_0_0)),
	"check_hlds.mode_constraint_robdd",
	"mode_constraint_var",
	{ 0 },
	{ (void *)&mercury_data_term__ti_var_1check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0 },
	-1,
	0,
	NULL
};

const MR_TypeCtorInfo_Struct mercury_data_check_hlds__mode_constraint_robdd__type_ctor_info_mode_constraint_varmap_0 = {
	0,
	15,
	-1,
	MR_TYPECTOR_REP_EQUIV_GROUND,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___check_hlds__mode_constraint_robdd__mode_constraint_varmap_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___check_hlds__mode_constraint_robdd__mode_constraint_varmap_0_0)),
	"check_hlds.mode_constraint_robdd",
	"mode_constraint_varmap",
	{ 0 },
	{ (void *)&mercury_data_bimap__ti_bimap_2check_hlds__mode_constraint_robdd__type_ctor_info_varmap_key_0term__ti_var_1check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0 },
	-1,
	0,
	NULL
};

static const MR_FA_TypeInfo_Struct1 mercury_data_sparse_bitset__ti_sparse_bitset_1term__ti_var_1check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0 = {
	&mercury_data_sparse_bitset__type_ctor_info_sparse_bitset_1,
{	(MR_TypeInfo) &mercury_data_term__ti_var_1check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0
}};

const MR_TypeCtorInfo_Struct mercury_data_check_hlds__mode_constraint_robdd__type_ctor_info_mode_constraint_vars_0 = {
	0,
	15,
	-1,
	MR_TYPECTOR_REP_EQUIV_GROUND,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___check_hlds__mode_constraint_robdd__mode_constraint_vars_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___check_hlds__mode_constraint_robdd__mode_constraint_vars_0_0)),
	"check_hlds.mode_constraint_robdd",
	"mode_constraint_vars",
	{ 0 },
	{ (void *)&mercury_data_sparse_bitset__ti_sparse_bitset_1term__ti_var_1check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0 },
	-1,
	0,
	NULL
};

static const MR_FA_TypeInfo_Struct2 mercury_data_tree234__ti_tree234_2stack__ti_stack_1mdbcomp__goal_path__type_ctor_info_goal_id_0tree_bitset__ti_tree_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
	&mercury_data_tree234__type_ctor_info_tree234_2,
{	(MR_TypeInfo) &mercury_data_stack__ti_stack_1mdbcomp__goal_path__type_ctor_info_goal_id_0,
	(MR_TypeInfo) &mercury_data_tree_bitset__ti_tree_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
}};

const MR_TypeCtorInfo_Struct mercury_data_check_hlds__mode_constraint_robdd__type_ctor_info_prodvars_map_0 = {
	0,
	15,
	-1,
	MR_TYPECTOR_REP_EQUIV_GROUND,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___check_hlds__mode_constraint_robdd__prodvars_map_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___check_hlds__mode_constraint_robdd__prodvars_map_0_0)),
	"check_hlds.mode_constraint_robdd",
	"prodvars_map",
	{ 0 },
	{ (void *)&mercury_data_tree234__ti_tree234_2stack__ti_stack_1mdbcomp__goal_path__type_ctor_info_goal_id_0tree_bitset__ti_tree_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 },
	-1,
	0,
	NULL
};

const MR_PseudoTypeInfo mercury_data_check_hlds__mode_constraint_robdd__field_types_prog_var_and_level_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
	(MR_PseudoTypeInfo) &mercury_data_hlds__hlds_pred__type_ctor_info_pred_id_0,
	(MR_PseudoTypeInfo) &mercury_data_stack__ti_stack_1mdbcomp__goal_path__type_ctor_info_goal_id_0
};

static const MR_DuFunctorDesc mercury_data_check_hlds__mode_constraint_robdd__du_functor_desc_prog_var_and_level_0_0 = {
	"prog_var_and_level",
	3,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_check_hlds__mode_constraint_robdd__field_types_prog_var_and_level_0_0,
	NULL,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_check_hlds__mode_constraint_robdd__du_stag_ordered_prog_var_and_level_0_0[] = {
	&mercury_data_check_hlds__mode_constraint_robdd__du_functor_desc_prog_var_and_level_0_0

};

const MR_DuPtagLayout mercury_data_check_hlds__mode_constraint_robdd__du_ptag_ordered_prog_var_and_level_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_check_hlds__mode_constraint_robdd__du_stag_ordered_prog_var_and_level_0_0 }

};

const MR_DuFunctorDescPtr mercury_data_check_hlds__mode_constraint_robdd__du_name_ordered_prog_var_and_level_0[] = {
	&mercury_data_check_hlds__mode_constraint_robdd__du_functor_desc_prog_var_and_level_0_0
};

const MR_Integer mercury_data_check_hlds__mode_constraint_robdd__functor_number_map_prog_var_and_level_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_check_hlds__mode_constraint_robdd__type_ctor_info_prog_var_and_level_0 = {
	0,
	15,
	1,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___check_hlds__mode_constraint_robdd__prog_var_and_level_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___check_hlds__mode_constraint_robdd__prog_var_and_level_0_0)),
	"check_hlds.mode_constraint_robdd",
	"prog_var_and_level",
	{ (void *)mercury_data_check_hlds__mode_constraint_robdd__du_name_ordered_prog_var_and_level_0 },
	{ (void *)mercury_data_check_hlds__mode_constraint_robdd__du_ptag_ordered_prog_var_and_level_0 },
	1,
	4,
	mercury_data_check_hlds__mode_constraint_robdd__functor_number_map_prog_var_and_level_0
};

const MR_PseudoTypeInfo mercury_data_check_hlds__mode_constraint_robdd__field_types_rep_var_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
};

static const MR_DuFunctorDesc mercury_data_check_hlds__mode_constraint_robdd__du_functor_desc_rep_var_0_0 = {
	"in",
	1,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_check_hlds__mode_constraint_robdd__field_types_rep_var_0_0,
	NULL,
	NULL,
	NULL
};

const MR_PseudoTypeInfo mercury_data_check_hlds__mode_constraint_robdd__field_types_rep_var_0_1[] = {
	(MR_PseudoTypeInfo) &mercury_data_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
};

static const MR_DuFunctorDesc mercury_data_check_hlds__mode_constraint_robdd__du_functor_desc_rep_var_0_1 = {
	"out",
	1,
	0,
	MR_SECTAG_NONE,
	1,
	-1,
	1,
	(MR_PseudoTypeInfo *) mercury_data_check_hlds__mode_constraint_robdd__field_types_rep_var_0_1,
	NULL,
	NULL,
	NULL
};

const MR_PseudoTypeInfo mercury_data_check_hlds__mode_constraint_robdd__field_types_rep_var_0_2[] = {
	(MR_PseudoTypeInfo) &mercury_data_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
	(MR_PseudoTypeInfo) &mercury_data_mdbcomp__goal_path__type_ctor_info_goal_id_0
};

static const MR_DuFunctorDesc mercury_data_check_hlds__mode_constraint_robdd__du_functor_desc_rep_var_0_2 = {
	"at",
	2,
	0,
	MR_SECTAG_NONE,
	2,
	-1,
	2,
	(MR_PseudoTypeInfo *) mercury_data_check_hlds__mode_constraint_robdd__field_types_rep_var_0_2,
	NULL,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_check_hlds__mode_constraint_robdd__du_stag_ordered_rep_var_0_0[] = {
	&mercury_data_check_hlds__mode_constraint_robdd__du_functor_desc_rep_var_0_0

};

const MR_DuFunctorDescPtr mercury_data_check_hlds__mode_constraint_robdd__du_stag_ordered_rep_var_0_1[] = {
	&mercury_data_check_hlds__mode_constraint_robdd__du_functor_desc_rep_var_0_1

};

const MR_DuFunctorDescPtr mercury_data_check_hlds__mode_constraint_robdd__du_stag_ordered_rep_var_0_2[] = {
	&mercury_data_check_hlds__mode_constraint_robdd__du_functor_desc_rep_var_0_2

};

const MR_DuPtagLayout mercury_data_check_hlds__mode_constraint_robdd__du_ptag_ordered_rep_var_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_check_hlds__mode_constraint_robdd__du_stag_ordered_rep_var_0_0 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_check_hlds__mode_constraint_robdd__du_stag_ordered_rep_var_0_1 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_check_hlds__mode_constraint_robdd__du_stag_ordered_rep_var_0_2 }

};

const MR_DuFunctorDescPtr mercury_data_check_hlds__mode_constraint_robdd__du_name_ordered_rep_var_0[] = {
	&mercury_data_check_hlds__mode_constraint_robdd__du_functor_desc_rep_var_0_2,
	&mercury_data_check_hlds__mode_constraint_robdd__du_functor_desc_rep_var_0_0,
	&mercury_data_check_hlds__mode_constraint_robdd__du_functor_desc_rep_var_0_1
};

const MR_Integer mercury_data_check_hlds__mode_constraint_robdd__functor_number_map_rep_var_0[] = {
	1,
	2,
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_check_hlds__mode_constraint_robdd__type_ctor_info_rep_var_0 = {
	0,
	15,
	3,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___check_hlds__mode_constraint_robdd__rep_var_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___check_hlds__mode_constraint_robdd__rep_var_0_0)),
	"check_hlds.mode_constraint_robdd",
	"rep_var",
	{ (void *)mercury_data_check_hlds__mode_constraint_robdd__du_name_ordered_rep_var_0 },
	{ (void *)mercury_data_check_hlds__mode_constraint_robdd__du_ptag_ordered_rep_var_0 },
	3,
	4,
	mercury_data_check_hlds__mode_constraint_robdd__functor_number_map_rep_var_0
};

const MR_TypeCtorInfo_Struct mercury_data_check_hlds__mode_constraint_robdd__type_ctor_info_robdd_var_0 = {
	0,
	15,
	-1,
	MR_TYPECTOR_REP_EQUIV_GROUND,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___check_hlds__mode_constraint_robdd__robdd_var_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___check_hlds__mode_constraint_robdd__robdd_var_0_0)),
	"check_hlds.mode_constraint_robdd",
	"robdd_var",
	{ 0 },
	{ (void *)&mercury_data_term__ti_var_1check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0 },
	-1,
	0,
	NULL
};

static const MR_NotagFunctorDesc mercury_data_check_hlds__mode_constraint_robdd__notag_functor_desc_threshold_0 = {
	"threshold",
	(MR_PseudoTypeInfo) &mercury_data_term__ti_var_1check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0,
	NULL
};

const MR_Integer mercury_data_check_hlds__mode_constraint_robdd__functor_number_map_threshold_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_check_hlds__mode_constraint_robdd__type_ctor_info_threshold_0 = {
	0,
	15,
	-1,
	MR_TYPECTOR_REP_NOTAG_GROUND,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___check_hlds__mode_constraint_robdd__threshold_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___check_hlds__mode_constraint_robdd__threshold_0_0)),
	"check_hlds.mode_constraint_robdd",
	"threshold",
	{ (void *)&mercury_data_check_hlds__mode_constraint_robdd__notag_functor_desc_threshold_0 },
	{ (void *)&mercury_data_check_hlds__mode_constraint_robdd__notag_functor_desc_threshold_0 },
	1,
	4,
	mercury_data_check_hlds__mode_constraint_robdd__functor_number_map_threshold_0
};

const MR_PseudoTypeInfo mercury_data_check_hlds__mode_constraint_robdd__field_types_varmap_key_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_check_hlds__mode_constraint_robdd__type_ctor_info_rep_var_0,
	(MR_PseudoTypeInfo) &mercury_data_hlds__hlds_pred__type_ctor_info_pred_id_0,
	(MR_PseudoTypeInfo) &mercury_data_stack__ti_stack_1mdbcomp__goal_path__type_ctor_info_goal_id_0
};

static const MR_DuFunctorDesc mercury_data_check_hlds__mode_constraint_robdd__du_functor_desc_varmap_key_0_0 = {
	"key",
	3,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_check_hlds__mode_constraint_robdd__field_types_varmap_key_0_0,
	NULL,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_check_hlds__mode_constraint_robdd__du_stag_ordered_varmap_key_0_0[] = {
	&mercury_data_check_hlds__mode_constraint_robdd__du_functor_desc_varmap_key_0_0

};

const MR_DuPtagLayout mercury_data_check_hlds__mode_constraint_robdd__du_ptag_ordered_varmap_key_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_check_hlds__mode_constraint_robdd__du_stag_ordered_varmap_key_0_0 }

};

const MR_DuFunctorDescPtr mercury_data_check_hlds__mode_constraint_robdd__du_name_ordered_varmap_key_0[] = {
	&mercury_data_check_hlds__mode_constraint_robdd__du_functor_desc_varmap_key_0_0
};

const MR_Integer mercury_data_check_hlds__mode_constraint_robdd__functor_number_map_varmap_key_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_check_hlds__mode_constraint_robdd__type_ctor_info_varmap_key_0 = {
	0,
	15,
	1,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___check_hlds__mode_constraint_robdd__varmap_key_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___check_hlds__mode_constraint_robdd__varmap_key_0_0)),
	"check_hlds.mode_constraint_robdd",
	"varmap_key",
	{ (void *)mercury_data_check_hlds__mode_constraint_robdd__du_name_ordered_varmap_key_0 },
	{ (void *)mercury_data_check_hlds__mode_constraint_robdd__du_ptag_ordered_varmap_key_0 },
	1,
	4,
	mercury_data_check_hlds__mode_constraint_robdd__functor_number_map_varmap_key_0
};


static const MR_UserClosureId
mercury_data__closure_layout__fn__f_99_104_101_99_107_95_104_108_100_115_95_95_109_111_100_101_95_99_111_110_115_116_114_97_105_110_116_95_114_111_98_100_100_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_102_117_110_99_95_95_103_101_116_95_105_110_116_101_114_101_115_116_105_110_103_95_118_97_114_115_95_102_111_114_95_112_114_101_100_95_95_51_48_56_95_95_51_95_95_104_111_49_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_93_95_48_3_0_1 = {
{
MR_FUNCTION,
"check_hlds.mode_constraint_robdd",
"check_hlds.mode_constraint_robdd",
"lambda2_mode_constraint_robdd_m_312",
2,
0
},
"check_hlds.mode_constraint_robdd",
"",
0,
"-1"
};

static const MR_UserClosureId
mercury_data__closure_layout__fn__check_hlds__mode_constraint_robdd__atomic_prodvars_map_2_0_1 = {
{
MR_PREDICATE,
"check_hlds.mode_constraint_robdd",
"check_hlds.mode_constraint_robdd",
"lambda_mode_constraint_robdd_m_426",
4,
0
},
"check_hlds.mode_constraint_robdd",
"mode_constraint_robdd.m",
410,
"11"
};

static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__mode_constraint_robdd__robdd_to_dot_6_0_1 = {
{
MR_PREDICATE,
"check_hlds.mode_constraint_robdd",
"check_hlds.mode_constraint_robdd",
"lambda_mode_constraint_robdd_m_391",
5,
0
},
"check_hlds.mode_constraint_robdd",
"mode_constraint_robdd.m",
391,
"9"
};

static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__mode_constraint_robdd__set_input_nodes_4_0_1 = {
{
MR_PREDICATE,
"check_hlds.mode_constraint_robdd",
"check_hlds.mode_constraint_robdd",
"lambda_mode_constraint_robdd_m_321",
6,
0
},
"check_hlds.mode_constraint_robdd",
"mode_constraint_robdd.m",
321,
"11"
};

static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__mode_constraint_robdd__get_interesting_vars_for_pred_3_0_4 = {
{
MR_FUNCTION,
"check_hlds.mode_constraint_robdd",
"check_hlds.mode_constraint_robdd",
"lambda_mode_constraint_robdd_m_312",
4,
0
},
"check_hlds.mode_constraint_robdd",
"mode_constraint_robdd.m",
312,
"10"
};

static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__mode_constraint_robdd__get_interesting_vars_for_pred_3_0_3 = {
{
MR_FUNCTION,
"check_hlds.mode_constraint_robdd",
"check_hlds.mode_constraint_robdd",
"lambda_mode_constraint_robdd_m_308",
2,
0
},
"check_hlds.mode_constraint_robdd",
"mode_constraint_robdd.m",
308,
"11"
};

static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__mode_constraint_robdd__get_interesting_vars_for_pred_3_0_2 = {
{
MR_FUNCTION,
"check_hlds.mode_constraint_robdd",
"check_hlds.mode_constraint_robdd",
"lambda2_mode_constraint_robdd_m_308",
3,
0
},
"check_hlds.mode_constraint_robdd",
"mode_constraint_robdd.m",
308,
"12"
};

static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__mode_constraint_robdd__get_interesting_vars_for_pred_3_0_1 = {
{
MR_PREDICATE,
"check_hlds.mode_constraint_robdd",
"check_hlds.mode_constraint_robdd",
"lambda_mode_constraint_robdd_m_309",
4,
0
},
"check_hlds.mode_constraint_robdd",
"mode_constraint_robdd.m",
309,
"13"
};

static const MR_UserClosureId
mercury_data__closure_layout__fn__check_hlds__mode_constraint_robdd__restrict_filter_3_0_1 = {
{
MR_PREDICATE,
"check_hlds.mode_constraint_robdd",
"check_hlds.mode_constraint_robdd",
"lambda_mode_constraint_robdd_m_283",
3,
0
},
"check_hlds.mode_constraint_robdd",
"mode_constraint_robdd.m",
283,
"7"
};


MR_decl_entry(fn__varset__init_0_0);
MR_decl_entry(varset__new_var_3_0);
MR_decl_entry(fn__hlds__hlds_pred__initial_pred_id_0_0);
MR_decl_entry(fn__bimap__init_0_0);
MR_decl_entry(fn__stack__init_0_0);
MR_decl_entry(fn__map__init_0_0);
MR_decl_entry(fn__parse_tree__set_of_var__init_0_0);

MR_BEGIN_MODULE(check_hlds__mode_constraint_robdd_module0)
	MR_init_entry1(fn__check_hlds__mode_constraint_robdd__init_mode_constraint_info_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__check_hlds__mode_constraint_robdd__init_mode_constraint_info_1_0);
	MR_init_label9(fn__check_hlds__mode_constraint_robdd__init_mode_constraint_info_1_0,2,3,4,5,6,7,8,9,10)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'init_mode_constraint_info'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__check_hlds__mode_constraint_robdd__init_mode_constraint_info_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(10);
	MR_sv(10) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(7) = (MR_Word) MR_CTOR0_ADDR(check_hlds__mode_constraint_robdd, mc_type);
	MR_r1 = MR_sv(7);
	MR_np_call_localret_ent(fn__varset__init_0_0,
		fn__check_hlds__mode_constraint_robdd__init_mode_constraint_info_1_0_i2);
MR_def_label(fn__check_hlds__mode_constraint_robdd__init_mode_constraint_info_1_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(varset__new_var_3_0,
		fn__check_hlds__mode_constraint_robdd__init_mode_constraint_info_1_0_i3);
MR_def_label(fn__check_hlds__mode_constraint_robdd__init_mode_constraint_info_1_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_np_call_localret_ent(fn__hlds__hlds_pred__initial_pred_id_0_0,
		fn__check_hlds__mode_constraint_robdd__init_mode_constraint_info_1_0_i4);
MR_def_label(fn__check_hlds__mode_constraint_robdd__init_mode_constraint_info_1_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_sv(8) = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(check_hlds__mode_constraint_robdd, varmap_key);
	MR_r2 = MR_sv(8);
	MR_np_call_localret_ent(fn__bimap__init_0_0,
		fn__check_hlds__mode_constraint_robdd__init_mode_constraint_info_1_0_i5);
MR_def_label(fn__check_hlds__mode_constraint_robdd__init_mode_constraint_info_1_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__goal_path, goal_id);
	MR_np_call_localret_ent(fn__stack__init_0_0,
		fn__check_hlds__mode_constraint_robdd__init_mode_constraint_info_1_0_i6);
MR_def_label(fn__check_hlds__mode_constraint_robdd__init_mode_constraint_info_1_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_sv(9) = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_id);
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(8);
	MR_np_call_localret_ent(fn__map__init_0_0,
		fn__check_hlds__mode_constraint_robdd__init_mode_constraint_info_1_0_i7);
MR_def_label(fn__check_hlds__mode_constraint_robdd__init_mode_constraint_info_1_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(8);
	MR_sv(8) = MR_r1;
	MR_r1 = MR_sv(9);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__map__init_0_0,
		fn__check_hlds__mode_constraint_robdd__init_mode_constraint_info_1_0_i8);
MR_def_label(fn__check_hlds__mode_constraint_robdd__init_mode_constraint_info_1_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_np_call_localret_ent(fn__parse_tree__set_of_var__init_0_0,
		fn__check_hlds__mode_constraint_robdd__init_mode_constraint_info_1_0_i9);
MR_def_label(fn__check_hlds__mode_constraint_robdd__init_mode_constraint_info_1_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_id);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,0);
	MR_np_call_localret_ent(fn__map__init_0_0,
		fn__check_hlds__mode_constraint_robdd__init_mode_constraint_info_1_0_i10);
MR_def_label(fn__check_hlds__mode_constraint_robdd__init_mode_constraint_info_1_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 10);
	MR_tfield(0, MR_r2, 0) = MR_sv(2);
	MR_tfield(0, MR_r2, 1) = MR_sv(4);
	MR_tfield(0, MR_r2, 2) = MR_sv(3);
	MR_tfield(0, MR_r2, 3) = MR_sv(5);
	MR_tfield(0, MR_r2, 4) = MR_sv(8);
	MR_tfield(0, MR_r2, 5) = MR_sv(6);
	MR_tfield(0, MR_r2, 6) = MR_sv(9);
	MR_tfield(0, MR_r2, 7) = MR_sv(7);
	MR_tfield(0, MR_r2, 8) = MR_sv(1);
	MR_tfield(0, MR_r2, 9) = MR_r1;
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(10);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__mode_constraint_robdd_module1)
	MR_init_entry1(fn__check_hlds__mode_constraint_robdd__mci_set_pred_id_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__check_hlds__mode_constraint_robdd__mci_set_pred_id_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'mci_set_pred_id'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__check_hlds__mode_constraint_robdd__mci_set_pred_id_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 10);
	MR_tfield(0, MR_tempr1, 0) = MR_tfield(0, MR_r1, 0);
	MR_tfield(0, MR_tempr1, 1) = MR_tfield(0, MR_r1, 1);
	MR_tfield(0, MR_tempr1, 2) = MR_r2;
	MR_tfield(0, MR_tempr1, 3) = MR_tfield(0, MR_r1, 3);
	MR_tfield(0, MR_tempr1, 4) = MR_tfield(0, MR_r1, 4);
	MR_tfield(0, MR_tempr1, 5) = MR_tfield(0, MR_r1, 5);
	MR_tfield(0, MR_tempr1, 6) = MR_tfield(0, MR_r1, 6);
	MR_tfield(0, MR_tempr1, 7) = MR_tfield(0, MR_r1, 7);
	MR_tfield(0, MR_tempr1, 8) = MR_tfield(0, MR_r1, 8);
	MR_tfield(0, MR_tempr1, 9) = MR_tfield(0, MR_r1, 9);
	MR_r1 = MR_tempr1;
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(parse_tree__set_of_var__contains_2_0);
MR_decl_entry(bimap__search_3_0);
MR_decl_entry(bimap__set_4_0);

MR_BEGIN_MODULE(check_hlds__mode_constraint_robdd_module2)
	MR_init_entry1(check_hlds__mode_constraint_robdd__mode_constraint_var_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__mode_constraint_robdd__mode_constraint_var_5_0);
	MR_init_label7(check_hlds__mode_constraint_robdd__mode_constraint_var_5_0,5,2,3,9,8,11,12)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'mode_constraint_var'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__check_hlds__mode_constraint_robdd__mode_constraint_var_5_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(5) = MR_tfield(0, MR_tempr1, 3);
	if (MR_PTAG_TESTR(MR_r2,2)) {
		MR_GOTO_LAB(check_hlds__mode_constraint_robdd__mode_constraint_var_5_0_i3);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_tempr1;
	MR_sv(4) = MR_tfield(0, MR_tempr1, 7);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_tfield(0, MR_tempr1, 6);
	MR_r3 = MR_tfield(2, MR_sv(2), 0);
	}
	MR_np_call_localret_ent(parse_tree__set_of_var__contains_2_0,
		check_hlds__mode_constraint_robdd__mode_constraint_var_5_0_i5);
MR_def_label(check_hlds__mode_constraint_robdd__mode_constraint_var_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__mode_constraint_robdd__mode_constraint_var_5_0_i2);
	}
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(3);
	MR_decr_sp_and_return(6);
MR_def_label(check_hlds__mode_constraint_robdd__mode_constraint_var_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
MR_def_label(check_hlds__mode_constraint_robdd__mode_constraint_var_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_r4 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_r2;
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_tfield(0, MR_tempr1, 2) = MR_sv(5);
	MR_sv(1) = MR_tempr1;
	MR_sv(3) = MR_r3;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(check_hlds__mode_constraint_robdd, varmap_key);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r3 = MR_tfield(0, MR_r3, 1);
	}
	MR_np_call_localret_ent(bimap__search_3_0,
		check_hlds__mode_constraint_robdd__mode_constraint_var_5_0_i9);
MR_def_label(check_hlds__mode_constraint_robdd__mode_constraint_var_5_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__mode_constraint_robdd__mode_constraint_var_5_0_i8);
	}
	MR_r1 = MR_r2;
	MR_r2 = MR_sv(3);
	MR_decr_sp_and_return(6);
MR_def_label(check_hlds__mode_constraint_robdd__mode_constraint_var_5_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(check_hlds__mode_constraint_robdd, mc_type);
	MR_r2 = MR_tfield(0, MR_sv(3), 0);
	MR_np_call_localret_ent(varset__new_var_3_0,
		check_hlds__mode_constraint_robdd__mode_constraint_var_5_0_i11);
MR_def_label(check_hlds__mode_constraint_robdd__mode_constraint_var_5_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(check_hlds__mode_constraint_robdd, varmap_key);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(1);
	MR_r5 = MR_tfield(0, MR_sv(3), 1);
	}
	MR_np_call_localret_ent(bimap__set_4_0,
		check_hlds__mode_constraint_robdd__mode_constraint_var_5_0_i12);
MR_def_label(check_hlds__mode_constraint_robdd__mode_constraint_var_5_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 10);
	MR_tfield(0, MR_r2, 0) = MR_sv(2);
	MR_tfield(0, MR_r2, 1) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_tfield(0, MR_r2, 2) = MR_tfield(0, MR_tempr1, 2);
	MR_tfield(0, MR_r2, 3) = MR_tfield(0, MR_tempr1, 3);
	MR_tfield(0, MR_r2, 4) = MR_tfield(0, MR_tempr1, 4);
	MR_tfield(0, MR_r2, 5) = MR_tfield(0, MR_tempr1, 5);
	MR_tfield(0, MR_r2, 6) = MR_tfield(0, MR_tempr1, 6);
	MR_tfield(0, MR_r2, 7) = MR_tfield(0, MR_tempr1, 7);
	MR_tfield(0, MR_r2, 8) = MR_tfield(0, MR_tempr1, 8);
	MR_tfield(0, MR_r2, 9) = MR_tfield(0, MR_tempr1, 9);
	MR_r1 = MR_sv(1);
	MR_decr_sp_and_return(6);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__mode_constraint_robdd_module3)
	MR_init_entry1(check_hlds__mode_constraint_robdd__mode_constraint_var_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__mode_constraint_robdd__mode_constraint_var_4_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'mode_constraint_var'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__check_hlds__mode_constraint_robdd__mode_constraint_var_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_tfield(0, MR_r2, 2);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	MR_np_tailcall_ent(check_hlds__mode_constraint_robdd__mode_constraint_var_5_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(bimap__lookup_3_0);

MR_BEGIN_MODULE(check_hlds__mode_constraint_robdd_module4)
	MR_init_entry1(fn__check_hlds__mode_constraint_robdd__mode_constraint_var_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__check_hlds__mode_constraint_robdd__mode_constraint_var_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'mode_constraint_var'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__check_hlds__mode_constraint_robdd__mode_constraint_var_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_r4 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_r2;
	MR_tfield(0, MR_tempr1, 1) = MR_tfield(0, MR_r1, 2);
	MR_tfield(0, MR_tempr1, 2) = MR_tfield(0, MR_r1, 3);
	MR_tempr2 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(check_hlds__mode_constraint_robdd, varmap_key);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r3 = MR_tfield(0, MR_tempr2, 1);
	MR_np_tailcall_ent(bimap__lookup_3_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__stack__push_2_0);

MR_BEGIN_MODULE(check_hlds__mode_constraint_robdd_module5)
	MR_init_entry1(check_hlds__mode_constraint_robdd__enter_lambda_goal_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__mode_constraint_robdd__enter_lambda_goal_3_0);
	MR_init_label1(check_hlds__mode_constraint_robdd__enter_lambda_goal_3_0,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'enter_lambda_goal'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__check_hlds__mode_constraint_robdd__enter_lambda_goal_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__goal_path, goal_id);
	MR_r2 = MR_tfield(0, MR_r2, 3);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__stack__push_2_0,
		check_hlds__mode_constraint_robdd__enter_lambda_goal_3_0_i2);
MR_def_label(check_hlds__mode_constraint_robdd__enter_lambda_goal_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 10);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_tfield(0, MR_r2, 0) = MR_tfield(0, MR_tempr1, 0);
	MR_tfield(0, MR_r2, 1) = MR_tfield(0, MR_tempr1, 1);
	MR_tfield(0, MR_r2, 2) = MR_tfield(0, MR_tempr1, 2);
	MR_tfield(0, MR_r2, 3) = MR_r1;
	MR_tfield(0, MR_r2, 4) = MR_tfield(0, MR_tempr1, 4);
	MR_tfield(0, MR_r2, 5) = MR_tfield(0, MR_tempr1, 5);
	MR_tfield(0, MR_r2, 6) = MR_tfield(0, MR_tempr1, 6);
	MR_tfield(0, MR_r2, 7) = MR_tfield(0, MR_tempr1, 7);
	MR_tfield(0, MR_r2, 8) = MR_tfield(0, MR_tempr1, 8);
	MR_tfield(0, MR_r2, 9) = MR_tfield(0, MR_tempr1, 9);
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(2);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(stack__det_pop_3_0);

MR_BEGIN_MODULE(check_hlds__mode_constraint_robdd_module6)
	MR_init_entry1(check_hlds__mode_constraint_robdd__leave_lambda_goal_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__mode_constraint_robdd__leave_lambda_goal_2_0);
	MR_init_label1(check_hlds__mode_constraint_robdd__leave_lambda_goal_2_0,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'leave_lambda_goal'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__check_hlds__mode_constraint_robdd__leave_lambda_goal_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__goal_path, goal_id);
	MR_r2 = MR_tfield(0, MR_sv(1), 3);
	MR_np_call_localret_ent(stack__det_pop_3_0,
		check_hlds__mode_constraint_robdd__leave_lambda_goal_2_0_i2);
MR_def_label(check_hlds__mode_constraint_robdd__leave_lambda_goal_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 10);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_tfield(0, MR_r1, 0) = MR_tfield(0, MR_tempr1, 0);
	MR_tfield(0, MR_r1, 1) = MR_tfield(0, MR_tempr1, 1);
	MR_tfield(0, MR_r1, 2) = MR_tfield(0, MR_tempr1, 2);
	MR_tfield(0, MR_r1, 3) = MR_r2;
	MR_tfield(0, MR_r1, 4) = MR_tfield(0, MR_tempr1, 4);
	MR_tfield(0, MR_r1, 5) = MR_tfield(0, MR_tempr1, 5);
	MR_tfield(0, MR_r1, 6) = MR_tfield(0, MR_tempr1, 6);
	MR_tfield(0, MR_r1, 7) = MR_tfield(0, MR_tempr1, 7);
	MR_tfield(0, MR_r1, 8) = MR_tfield(0, MR_tempr1, 8);
	MR_tfield(0, MR_r1, 9) = MR_tfield(0, MR_tempr1, 9);
	MR_decr_sp_and_return(2);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__mode_constraint_robdd_module7)
	MR_init_entry1(check_hlds__mode_constraint_robdd__get_prog_var_level_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__mode_constraint_robdd__get_prog_var_level_3_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'get_prog_var_level'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__check_hlds__mode_constraint_robdd__get_prog_var_level_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr1, 0) = MR_r2;
	MR_tfield(0, MR_tempr1, 1) = MR_tfield(0, MR_r1, 2);
	MR_tfield(0, MR_tempr1, 2) = MR_tfield(0, MR_r1, 3);
	MR_r1 = MR_tempr1;
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__mode_constraint_robdd_module8)
	MR_init_entry1(check_hlds__mode_constraint_robdd__set_level_from_var_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__mode_constraint_robdd__set_level_from_var_3_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'set_level_from_var'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__check_hlds__mode_constraint_robdd__set_level_from_var_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 10);
	MR_tfield(0, MR_tempr1, 0) = MR_tfield(0, MR_r2, 0);
	MR_tfield(0, MR_tempr1, 1) = MR_tfield(0, MR_r2, 1);
	MR_tfield(0, MR_tempr1, 2) = MR_tfield(0, MR_r1, 1);
	MR_tfield(0, MR_tempr1, 3) = MR_tfield(0, MR_r1, 2);
	MR_tfield(0, MR_tempr1, 4) = MR_tfield(0, MR_r2, 4);
	MR_tfield(0, MR_tempr1, 5) = MR_tfield(0, MR_r2, 5);
	MR_tfield(0, MR_tempr1, 6) = MR_tfield(0, MR_r2, 6);
	MR_tfield(0, MR_tempr1, 7) = MR_tfield(0, MR_r2, 7);
	MR_tfield(0, MR_tempr1, 8) = MR_tfield(0, MR_r2, 8);
	MR_tfield(0, MR_tempr1, 9) = MR_tfield(0, MR_r2, 9);
	MR_r1 = MR_tempr1;
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__varset__max_var_1_0);

MR_BEGIN_MODULE(check_hlds__mode_constraint_robdd_module9)
	MR_init_entry1(check_hlds__mode_constraint_robdd__save_threshold_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__mode_constraint_robdd__save_threshold_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'save_threshold'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__check_hlds__mode_constraint_robdd__save_threshold_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(check_hlds__mode_constraint_robdd, mc_type);
	MR_r2 = MR_tfield(0, MR_tempr1, 0);
	MR_np_tailcall_ent(fn__varset__max_var_1_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__f_109_111_100_101_95_114_111_98_100_100_95_95_116_102_101_105_114_110_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_101_110_115_117_114_101_95_110_111_114_109_97_108_105_115_101_100_95_95_91_84_32_61_32_109_99_95_116_121_112_101_93_95_48_95_49_1_0);
MR_decl_entry(fn__f_109_111_100_101_95_114_111_98_100_100_95_95_116_102_101_105_114_110_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_114_101_115_116_114_105_99_116_95_116_104_114_101_115_104_111_108_100_95_95_91_84_32_61_32_109_99_95_116_121_112_101_93_95_48_95_49_2_0);

MR_BEGIN_MODULE(check_hlds__mode_constraint_robdd_module10)
	MR_init_entry1(fn__check_hlds__mode_constraint_robdd__restrict_threshold_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__check_hlds__mode_constraint_robdd__restrict_threshold_2_0);
	MR_init_label1(fn__check_hlds__mode_constraint_robdd__restrict_threshold_2_0,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'restrict_threshold'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__check_hlds__mode_constraint_robdd__restrict_threshold_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__f_109_111_100_101_95_114_111_98_100_100_95_95_116_102_101_105_114_110_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_101_110_115_117_114_101_95_110_111_114_109_97_108_105_115_101_100_95_95_91_84_32_61_32_109_99_95_116_121_112_101_93_95_48_95_49_1_0,
		fn__check_hlds__mode_constraint_robdd__restrict_threshold_2_0_i2);
MR_def_label(fn__check_hlds__mode_constraint_robdd__restrict_threshold_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(fn__f_109_111_100_101_95_114_111_98_100_100_95_95_116_102_101_105_114_110_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_114_101_115_116_114_105_99_116_95_116_104_114_101_115_104_111_108_100_95_95_91_84_32_61_32_109_99_95_116_121_112_101_93_95_48_95_49_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__f_109_111_100_101_95_114_111_98_100_100_95_95_116_102_101_105_114_110_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_114_101_115_116_114_105_99_116_95_102_105_108_116_101_114_95_95_91_84_32_61_32_109_99_95_116_121_112_101_93_95_48_95_49_2_0);

MR_BEGIN_MODULE(check_hlds__mode_constraint_robdd_module11)
	MR_init_entry1(fn__check_hlds__mode_constraint_robdd__restrict_filter_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__check_hlds__mode_constraint_robdd__restrict_filter_3_0);
	MR_init_label1(fn__check_hlds__mode_constraint_robdd__restrict_filter_3_0,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'restrict_filter'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__check_hlds__mode_constraint_robdd__restrict_filter_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_r1 = MR_r3;
	MR_np_call_localret_ent(fn__f_109_111_100_101_95_114_111_98_100_100_95_95_116_102_101_105_114_110_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_101_110_115_117_114_101_95_110_111_114_109_97_108_105_115_101_100_95_95_91_84_32_61_32_109_99_95_116_121_112_101_93_95_48_95_49_1_0,
		fn__check_hlds__mode_constraint_robdd__restrict_filter_3_0_i2);
MR_def_label(fn__check_hlds__mode_constraint_robdd__restrict_filter_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(3,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(check_hlds__mode_constraint_robdd__IntroducedFrom__pred__restrict_filter__283__1_3_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(2);
	MR_tempr2 = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_tempr2;
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(fn__f_109_111_100_101_95_114_111_98_100_100_95_95_116_102_101_105_114_110_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_114_101_115_116_114_105_99_116_95_102_105_108_116_101_114_95_95_91_84_32_61_32_109_99_95_116_121_112_101_93_95_48_95_49_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(map__set_4_0);

MR_BEGIN_MODULE(check_hlds__mode_constraint_robdd_module12)
	MR_init_entry1(check_hlds__mode_constraint_robdd__save_min_var_for_pred_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__mode_constraint_robdd__save_min_var_for_pred_3_0);
	MR_init_label2(check_hlds__mode_constraint_robdd__save_min_var_for_pred_3_0,2,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'save_min_var_for_pred'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__check_hlds__mode_constraint_robdd__save_min_var_for_pred_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(check_hlds__mode_constraint_robdd, mc_type);
	MR_r2 = MR_tfield(0, MR_r2, 0);
	MR_np_call_localret_ent(fn__varset__max_var_1_0,
		check_hlds__mode_constraint_robdd__save_min_var_for_pred_3_0_i2);
MR_def_label(check_hlds__mode_constraint_robdd__save_min_var_for_pred_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_id);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_tempr1;
	MR_r5 = MR_tfield(0, MR_sv(2), 4);
	}
	MR_np_call_localret_ent(map__set_4_0,
		check_hlds__mode_constraint_robdd__save_min_var_for_pred_3_0_i3);
MR_def_label(check_hlds__mode_constraint_robdd__save_min_var_for_pred_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 10);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_tfield(0, MR_r2, 0) = MR_tfield(0, MR_tempr1, 0);
	MR_tfield(0, MR_r2, 1) = MR_tfield(0, MR_tempr1, 1);
	MR_tfield(0, MR_r2, 2) = MR_tfield(0, MR_tempr1, 2);
	MR_tfield(0, MR_r2, 3) = MR_tfield(0, MR_tempr1, 3);
	MR_tfield(0, MR_r2, 4) = MR_r1;
	MR_tfield(0, MR_r2, 5) = MR_tfield(0, MR_tempr1, 5);
	MR_tfield(0, MR_r2, 6) = MR_tfield(0, MR_tempr1, 6);
	MR_tfield(0, MR_r2, 7) = MR_tfield(0, MR_tempr1, 7);
	MR_tfield(0, MR_r2, 8) = MR_tfield(0, MR_tempr1, 8);
	MR_tfield(0, MR_r2, 9) = MR_tfield(0, MR_tempr1, 9);
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(3);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__mode_constraint_robdd_module13)
	MR_init_entry1(check_hlds__mode_constraint_robdd__save_max_var_for_pred_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__mode_constraint_robdd__save_max_var_for_pred_3_0);
	MR_init_label2(check_hlds__mode_constraint_robdd__save_max_var_for_pred_3_0,2,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'save_max_var_for_pred'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__check_hlds__mode_constraint_robdd__save_max_var_for_pred_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(check_hlds__mode_constraint_robdd, mc_type);
	MR_r2 = MR_tfield(0, MR_r2, 0);
	MR_np_call_localret_ent(fn__varset__max_var_1_0,
		check_hlds__mode_constraint_robdd__save_max_var_for_pred_3_0_i2);
MR_def_label(check_hlds__mode_constraint_robdd__save_max_var_for_pred_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_id);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_tempr1;
	MR_r5 = MR_tfield(0, MR_sv(2), 5);
	}
	MR_np_call_localret_ent(map__set_4_0,
		check_hlds__mode_constraint_robdd__save_max_var_for_pred_3_0_i3);
MR_def_label(check_hlds__mode_constraint_robdd__save_max_var_for_pred_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 10);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_tfield(0, MR_r2, 0) = MR_tfield(0, MR_tempr1, 0);
	MR_tfield(0, MR_r2, 1) = MR_tfield(0, MR_tempr1, 1);
	MR_tfield(0, MR_r2, 2) = MR_tfield(0, MR_tempr1, 2);
	MR_tfield(0, MR_r2, 3) = MR_tfield(0, MR_tempr1, 3);
	MR_tfield(0, MR_r2, 4) = MR_tfield(0, MR_tempr1, 4);
	MR_tfield(0, MR_r2, 5) = MR_r1;
	MR_tfield(0, MR_r2, 6) = MR_tfield(0, MR_tempr1, 6);
	MR_tfield(0, MR_r2, 7) = MR_tfield(0, MR_tempr1, 7);
	MR_tfield(0, MR_r2, 8) = MR_tfield(0, MR_tempr1, 8);
	MR_tfield(0, MR_r2, 9) = MR_tfield(0, MR_tempr1, 9);
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(3);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__mode_constraint_robdd_module14)
	MR_init_entry1(check_hlds__mode_constraint_robdd__get_interesting_vars_for_pred_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__mode_constraint_robdd__get_interesting_vars_for_pred_3_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'get_interesting_vars_for_pred'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__check_hlds__mode_constraint_robdd__get_interesting_vars_for_pred_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 6);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(4,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(check_hlds__mode_constraint_robdd__IntroducedFrom__pred__get_interesting_vars_for_pred__309__1_4_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 3;
	MR_tfield(0, MR_tempr1, 3) = MR_r2;
	MR_tfield(0, MR_tempr1, 4) = MR_tfield(0, MR_r1, 4);
	MR_tfield(0, MR_tempr1, 5) = MR_tfield(0, MR_r1, 5);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 4);
	MR_tfield(0, MR_tempr2, 0) = (MR_Word) MR_COMMON(3,1);
	MR_tfield(0, MR_tempr2, 1) = (MR_Word) MR_ENTRY_AP(fn__check_hlds__mode_constraint_robdd__IntroducedFrom__func__get_interesting_vars_for_pred__308__2_2_0);
	MR_tfield(0, MR_tempr2, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr2, 3) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(4,1);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(fn__check_hlds__mode_constraint_robdd__IntroducedFrom__func__get_interesting_vars_for_pred__312__1_3_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr1, 3) = (MR_Word) MR_TAG_COMMON(0,6,0);
	MR_tfield(0, MR_tempr1, 4) = MR_tempr2;
	MR_tempr2 = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_tfield(0, MR_tempr2, 0);
	MR_np_tailcall_ent(fn__f_99_104_101_99_107_95_104_108_100_115_95_95_109_111_100_101_95_99_111_110_115_116_114_97_105_110_116_95_114_111_98_100_100_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_102_117_110_99_95_95_103_101_116_95_105_110_116_101_114_101_115_116_105_110_103_95_118_97_114_115_95_102_111_114_95_112_114_101_100_95_95_51_48_56_95_95_51_95_95_104_111_49_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_93_95_48_3_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(bimap__ordinates_2_0);
MR_decl_entry(solutions__solutions_2_1);
MR_decl_entry(fn__parse_tree__set_of_var__sorted_list_to_set_1_0);
MR_decl_entry(fn__f_109_111_100_101_95_114_111_98_100_100_95_95_116_102_101_105_114_110_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_110_111_116_95_118_97_114_95_95_91_84_32_61_32_109_99_95_116_121_112_101_93_95_48_95_49_2_0);

MR_BEGIN_MODULE(check_hlds__mode_constraint_robdd_module15)
	MR_init_entry1(check_hlds__mode_constraint_robdd__set_input_nodes_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__mode_constraint_robdd__set_input_nodes_4_0);
	MR_init_label5(check_hlds__mode_constraint_robdd__set_input_nodes_4_0,2,3,5,6,8)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'set_input_nodes'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__check_hlds__mode_constraint_robdd__set_input_nodes_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(6) = MR_r1;
	MR_sv(1) = MR_tfield(0, MR_r2, 1);
	MR_sv(2) = MR_tfield(0, MR_r2, 3);
	MR_sv(3) = MR_tfield(0, MR_r2, 2);
	MR_sv(5) = MR_r2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(check_hlds__mode_constraint_robdd, varmap_key);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r3 = MR_sv(1);
	MR_np_call_localret_ent(bimap__ordinates_2_0,
		check_hlds__mode_constraint_robdd__set_input_nodes_4_0_i2);
MR_def_label(check_hlds__mode_constraint_robdd__set_input_nodes_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(6);
	MR_np_call_localret_ent(fn__f_109_111_100_101_95_114_111_98_100_100_95_95_116_102_101_105_114_110_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_101_110_115_117_114_101_95_110_111_114_109_97_108_105_115_101_100_95_95_91_84_32_61_32_109_99_95_116_121_112_101_93_95_48_95_49_1_0,
		check_hlds__mode_constraint_robdd__set_input_nodes_4_0_i3);
MR_def_label(check_hlds__mode_constraint_robdd__set_input_nodes_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 8);
	MR_tfield(0, MR_r2, 0) = (MR_Word) MR_COMMON(8,0);
	MR_tfield(0, MR_r2, 1) = (MR_Word) MR_ENTRY_AP(check_hlds__mode_constraint_robdd__IntroducedFrom__pred__set_input_nodes__321__1_6_0);
	MR_tfield(0, MR_r2, 2) = (MR_Integer) 5;
	MR_tfield(0, MR_r2, 3) = MR_sv(1);
	MR_tfield(0, MR_r2, 4) = MR_sv(2);
	MR_tfield(0, MR_r2, 5) = MR_sv(3);
	MR_tfield(0, MR_r2, 6) = MR_sv(4);
	MR_tfield(0, MR_r2, 7) = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,4);
	MR_np_call_localret_ent(solutions__solutions_2_1,
		check_hlds__mode_constraint_robdd__set_input_nodes_4_0_i5);
MR_def_label(check_hlds__mode_constraint_robdd__set_input_nodes_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__parse_tree__set_of_var__sorted_list_to_set_1_0,
		check_hlds__mode_constraint_robdd__set_input_nodes_4_0_i6);
MR_def_label(check_hlds__mode_constraint_robdd__set_input_nodes_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 10);
	MR_tempr3 = MR_sv(5);
	MR_tfield(0, MR_tempr1, 0) = MR_tfield(0, MR_tempr3, 0);
	MR_tfield(0, MR_tempr1, 1) = MR_tfield(0, MR_tempr3, 1);
	MR_tfield(0, MR_tempr1, 2) = MR_tfield(0, MR_tempr3, 2);
	MR_tfield(0, MR_tempr1, 3) = MR_tfield(0, MR_tempr3, 3);
	MR_tfield(0, MR_tempr1, 4) = MR_tfield(0, MR_tempr3, 4);
	MR_tfield(0, MR_tempr1, 5) = MR_tfield(0, MR_tempr3, 5);
	MR_tfield(0, MR_tempr1, 6) = MR_r1;
	MR_tfield(0, MR_tempr1, 7) = MR_tfield(0, MR_tempr3, 7);
	MR_tfield(0, MR_tempr1, 8) = MR_tfield(0, MR_tempr3, 8);
	MR_tfield(0, MR_tempr1, 9) = MR_tfield(0, MR_tempr3, 9);
	MR_tempr2 = MR_sv(6);
	MR_sv(6) = MR_tempr1;
	MR_r1 = MR_tfield(0, MR_tempr1, 7);
	MR_r2 = MR_tempr2;
	}
	MR_np_call_localret_ent(fn__f_109_111_100_101_95_114_111_98_100_100_95_95_116_102_101_105_114_110_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_110_111_116_95_118_97_114_95_95_91_84_32_61_32_109_99_95_116_121_112_101_93_95_48_95_49_2_0,
		check_hlds__mode_constraint_robdd__set_input_nodes_4_0_i8);
MR_def_label(check_hlds__mode_constraint_robdd__set_input_nodes_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(6);
	MR_decr_sp_and_return(7);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__mode_constraint_robdd_module16)
	MR_init_entry1(check_hlds__mode_constraint_robdd__set_simple_mode_constraints_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__mode_constraint_robdd__set_simple_mode_constraints_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'set_simple_mode_constraints'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__check_hlds__mode_constraint_robdd__set_simple_mode_constraints_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 10);
	MR_tfield(0, MR_r2, 0) = MR_tfield(0, MR_r1, 0);
	MR_tfield(0, MR_r2, 1) = MR_tfield(0, MR_r1, 1);
	MR_tfield(0, MR_r2, 2) = MR_tfield(0, MR_r1, 2);
	MR_tfield(0, MR_r2, 3) = MR_tfield(0, MR_r1, 3);
	MR_tfield(0, MR_r2, 4) = MR_tfield(0, MR_r1, 4);
	MR_tfield(0, MR_r2, 5) = MR_tfield(0, MR_r1, 5);
	MR_tfield(0, MR_r2, 6) = MR_tfield(0, MR_r1, 6);
	MR_tfield(0, MR_r2, 7) = MR_tfield(0, MR_r1, 7);
	MR_tfield(0, MR_r2, 8) = (MR_Integer) 1;
	MR_tfield(0, MR_r2, 9) = MR_tfield(0, MR_r1, 9);
	MR_r1 = MR_r2;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__mode_constraint_robdd_module17)
	MR_init_entry1(check_hlds__mode_constraint_robdd__unset_simple_mode_constraints_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__mode_constraint_robdd__unset_simple_mode_constraints_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'unset_simple_mode_constraints'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__check_hlds__mode_constraint_robdd__unset_simple_mode_constraints_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 10);
	MR_tfield(0, MR_r2, 0) = MR_tfield(0, MR_r1, 0);
	MR_tfield(0, MR_r2, 1) = MR_tfield(0, MR_r1, 1);
	MR_tfield(0, MR_r2, 2) = MR_tfield(0, MR_r1, 2);
	MR_tfield(0, MR_r2, 3) = MR_tfield(0, MR_r1, 3);
	MR_tfield(0, MR_r2, 4) = MR_tfield(0, MR_r1, 4);
	MR_tfield(0, MR_r2, 5) = MR_tfield(0, MR_r1, 5);
	MR_tfield(0, MR_r2, 6) = MR_tfield(0, MR_r1, 6);
	MR_tfield(0, MR_r2, 7) = MR_tfield(0, MR_r1, 7);
	MR_tfield(0, MR_r2, 8) = (MR_Integer) 0;
	MR_tfield(0, MR_r2, 9) = MR_tfield(0, MR_r1, 9);
	MR_r1 = MR_r2;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__mode_constraint_robdd_module18)
	MR_init_entry1(check_hlds__mode_constraint_robdd__using_simple_mode_constraints_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__mode_constraint_robdd__using_simple_mode_constraints_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'using_simple_mode_constraints'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__check_hlds__mode_constraint_robdd__using_simple_mode_constraints_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_tfield(0, MR_r1, 8);
	MR_r1 = ((MR_Integer) MR_r2 == (MR_Integer) 1);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(map__lookup_3_0);

MR_BEGIN_MODULE(check_hlds__mode_constraint_robdd_module19)
	MR_init_entry1(check_hlds__mode_constraint_robdd__get_forward_goal_path_map_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__mode_constraint_robdd__get_forward_goal_path_map_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'get_forward_goal_path_map'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__check_hlds__mode_constraint_robdd__get_forward_goal_path_map_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_id);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,0);
	MR_r3 = MR_tfield(0, MR_tempr1, 9);
	MR_r4 = MR_tfield(0, MR_tempr1, 2);
	MR_np_tailcall_ent(map__lookup_3_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__mode_constraint_robdd_module20)
	MR_init_entry1(check_hlds__mode_constraint_robdd__get_forward_goal_path_map_for_pred_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__mode_constraint_robdd__get_forward_goal_path_map_for_pred_3_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'get_forward_goal_path_map_for_pred'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__check_hlds__mode_constraint_robdd__get_forward_goal_path_map_for_pred_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_id);
	MR_tempr2 = MR_r2;
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,0);
	MR_r3 = MR_tfield(0, MR_tempr1, 9);
	MR_r4 = MR_tempr2;
	MR_np_tailcall_ent(map__lookup_3_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(map__det_insert_4_0);

MR_BEGIN_MODULE(check_hlds__mode_constraint_robdd_module21)
	MR_init_entry1(check_hlds__mode_constraint_robdd__add_forward_goal_path_map_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__mode_constraint_robdd__add_forward_goal_path_map_4_0);
	MR_init_label1(check_hlds__mode_constraint_robdd__add_forward_goal_path_map_4_0,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'add_forward_goal_path_map'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__check_hlds__mode_constraint_robdd__add_forward_goal_path_map_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r3;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_id);
	MR_tempr2 = MR_r2;
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,0);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tempr2;
	MR_r5 = MR_tfield(0, MR_sv(1), 9);
	}
	MR_np_call_localret_ent(map__det_insert_4_0,
		check_hlds__mode_constraint_robdd__add_forward_goal_path_map_4_0_i2);
MR_def_label(check_hlds__mode_constraint_robdd__add_forward_goal_path_map_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 10);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_tfield(0, MR_r2, 0) = MR_tfield(0, MR_tempr1, 0);
	MR_tfield(0, MR_r2, 1) = MR_tfield(0, MR_tempr1, 1);
	MR_tfield(0, MR_r2, 2) = MR_tfield(0, MR_tempr1, 2);
	MR_tfield(0, MR_r2, 3) = MR_tfield(0, MR_tempr1, 3);
	MR_tfield(0, MR_r2, 4) = MR_tfield(0, MR_tempr1, 4);
	MR_tfield(0, MR_r2, 5) = MR_tfield(0, MR_tempr1, 5);
	MR_tfield(0, MR_r2, 6) = MR_tfield(0, MR_tempr1, 6);
	MR_tfield(0, MR_r2, 7) = MR_tfield(0, MR_tempr1, 7);
	MR_tfield(0, MR_r2, 8) = MR_tfield(0, MR_tempr1, 8);
	MR_tfield(0, MR_r2, 9) = MR_r1;
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(2);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__mode_robdd__tfeirn__robdd_1_0);
MR_decl_entry(robdd__robdd_to_dot_5_0);

MR_BEGIN_MODULE(check_hlds__mode_constraint_robdd_module22)
	MR_init_entry1(check_hlds__mode_constraint_robdd__robdd_to_dot_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__mode_constraint_robdd__robdd_to_dot_6_0);
	MR_init_label1(check_hlds__mode_constraint_robdd__robdd_to_dot_6_0,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'robdd_to_dot'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__check_hlds__mode_constraint_robdd__robdd_to_dot_6_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_sv(2) = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(9,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(check_hlds__mode_constraint_robdd__IntroducedFrom__pred__robdd_to_dot__391__1_5_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr1, 3) = MR_r2;
	MR_tfield(0, MR_tempr1, 4) = MR_tfield(0, MR_r3, 1);
	MR_sv(1) = MR_r4;
	MR_sv(3) = (MR_Word) MR_CTOR0_ADDR(check_hlds__mode_constraint_robdd, mc_type);
	MR_tempr2 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tempr2;
	}
	MR_np_call_localret_ent(fn__mode_robdd__tfeirn__robdd_1_0,
		check_hlds__mode_constraint_robdd__robdd_to_dot_6_0_i3);
MR_def_label(check_hlds__mode_constraint_robdd__robdd_to_dot_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(1);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(robdd__robdd_to_dot_5_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__f_109_111_100_101_95_114_111_98_100_100_95_95_116_102_101_105_114_110_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_118_97_114_115_95_101_110_116_97_105_108_101_100_95_95_91_84_32_61_32_109_99_95_116_121_112_101_93_95_48_95_49_1_0);
MR_decl_entry(fn__f_115_112_97_114_115_101_95_98_105_116_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_116_111_95_115_111_114_116_101_100_95_108_105_115_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_1_0);
MR_decl_entry(list__foldl_4_0);
MR_decl_entry(require__unexpected_3_0);

MR_BEGIN_MODULE(check_hlds__mode_constraint_robdd_module23)
	MR_init_entry1(fn__check_hlds__mode_constraint_robdd__atomic_prodvars_map_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__check_hlds__mode_constraint_robdd__atomic_prodvars_map_2_0);
	MR_init_label5(fn__check_hlds__mode_constraint_robdd__atomic_prodvars_map_2_0,3,4,7,8,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'atomic_prodvars_map'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__check_hlds__mode_constraint_robdd__atomic_prodvars_map_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_np_call_localret_ent(fn__f_109_111_100_101_95_114_111_98_100_100_95_95_116_102_101_105_114_110_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_101_110_115_117_114_101_95_110_111_114_109_97_108_105_115_101_100_95_95_91_84_32_61_32_109_99_95_116_121_112_101_93_95_48_95_49_1_0,
		fn__check_hlds__mode_constraint_robdd__atomic_prodvars_map_2_0_i3);
MR_def_label(fn__check_hlds__mode_constraint_robdd__atomic_prodvars_map_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__f_109_111_100_101_95_114_111_98_100_100_95_95_116_102_101_105_114_110_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_118_97_114_115_95_101_110_116_97_105_108_101_100_95_95_91_84_32_61_32_109_99_95_116_121_112_101_93_95_48_95_49_1_0,
		fn__check_hlds__mode_constraint_robdd__atomic_prodvars_map_2_0_i4);
MR_def_label(fn__check_hlds__mode_constraint_robdd__atomic_prodvars_map_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(fn__check_hlds__mode_constraint_robdd__atomic_prodvars_map_2_0_i2);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(4,2);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(check_hlds__mode_constraint_robdd__IntroducedFrom__pred__atomic_prodvars_map__426__1_4_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	MR_tempr2 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(check_hlds__mode_constraint_robdd, mc_type);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,1);
	MR_r3 = MR_tfield(1, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(fn__f_115_112_97_114_115_101_95_98_105_116_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_116_111_95_115_111_114_116_101_100_95_108_105_115_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_1_0,
		fn__check_hlds__mode_constraint_robdd__atomic_prodvars_map_2_0_i7);
MR_def_label(fn__check_hlds__mode_constraint_robdd__atomic_prodvars_map_2_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,5);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,6);
	MR_np_call_localret_ent(fn__map__init_0_0,
		fn__check_hlds__mode_constraint_robdd__atomic_prodvars_map_2_0_i8);
MR_def_label(fn__check_hlds__mode_constraint_robdd__atomic_prodvars_map_2_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,2);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_r5 = MR_tempr1;
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(list__foldl_4_0);
	}
MR_def_label(fn__check_hlds__mode_constraint_robdd__atomic_prodvars_map_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("check_hlds.mode_constraint_robdd", 32);
	MR_r2 = (MR_Word) MR_string_const("function \140check_hlds.mode_constraint_robdd.atomic_prodvars_map\'/2", 65);
	MR_r3 = (MR_Word) MR_string_const("zero constraint", 15);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(require__unexpected_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(builtin__unify_2_0);

MR_BEGIN_MODULE(check_hlds__mode_constraint_robdd_module24)
	MR_init_entry1(__Unify___check_hlds__mode_constraint_robdd__lambda_path_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___check_hlds__mode_constraint_robdd__lambda_path_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___check_hlds__mode_constraint_robdd__lambda_path_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,5);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	MR_np_tailcall_ent(builtin__unify_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(builtin__compare_3_0);

MR_BEGIN_MODULE(check_hlds__mode_constraint_robdd_module25)
	MR_init_entry1(__Compare___check_hlds__mode_constraint_robdd__lambda_path_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___check_hlds__mode_constraint_robdd__lambda_path_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___check_hlds__mode_constraint_robdd__lambda_path_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,5);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	MR_np_tailcall_ent(builtin__compare_3_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__mode_constraint_robdd_module26)
	MR_init_entry1(__Unify___check_hlds__mode_constraint_robdd__mc_type_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___check_hlds__mode_constraint_robdd__mc_type_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___check_hlds__mode_constraint_robdd__mc_type_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(f_99_104_101_99_107_95_104_108_100_115_95_95_109_111_100_101_95_99_111_110_115_116_114_97_105_110_116_95_114_111_98_100_100_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_85_110_105_102_121_95_95_95_99_104_101_99_107_95_104_108_100_115_95_95_109_111_100_101_95_99_111_110_115_116_114_97_105_110_116_95_114_111_98_100_100_95_95_109_99_95_116_121_112_101_95_48_95_95_91_49_44_32_50_93_95_48_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__mode_constraint_robdd_module27)
	MR_init_entry1(__Compare___check_hlds__mode_constraint_robdd__mc_type_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___check_hlds__mode_constraint_robdd__mc_type_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___check_hlds__mode_constraint_robdd__mc_type_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(f_99_104_101_99_107_95_104_108_100_115_95_95_109_111_100_101_95_99_111_110_115_116_114_97_105_110_116_95_114_111_98_100_100_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_67_111_109_112_97_114_101_95_95_95_99_104_101_99_107_95_104_108_100_115_95_95_109_111_100_101_95_99_111_110_115_116_114_97_105_110_116_95_114_111_98_100_100_95_95_109_99_95_116_121_112_101_95_48_95_95_91_50_44_32_51_93_95_48_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__mode_constraint_robdd_module28)
	MR_init_entry1(__Unify___check_hlds__mode_constraint_robdd__mode_constraint_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___check_hlds__mode_constraint_robdd__mode_constraint_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___check_hlds__mode_constraint_robdd__mode_constraint_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,7);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	MR_np_tailcall_ent(builtin__unify_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__mode_constraint_robdd_module29)
	MR_init_entry1(__Compare___check_hlds__mode_constraint_robdd__mode_constraint_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___check_hlds__mode_constraint_robdd__mode_constraint_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___check_hlds__mode_constraint_robdd__mode_constraint_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,7);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	MR_np_tailcall_ent(builtin__compare_3_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___hlds__hlds_pred__pred_id_0_0);

MR_BEGIN_MODULE(check_hlds__mode_constraint_robdd_module30)
	MR_init_entry1(__Unify___check_hlds__mode_constraint_robdd__mode_constraint_info_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___check_hlds__mode_constraint_robdd__mode_constraint_info_0_0);
	MR_init_label10(__Unify___check_hlds__mode_constraint_robdd__mode_constraint_info_0_0,4,6,8,10,12,14,16,18,22,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___check_hlds__mode_constraint_robdd__mode_constraint_info_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___check_hlds__mode_constraint_robdd__mode_constraint_info_0_0_i22);
	}
	MR_incr_sp(19);
	MR_sv(19) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_tfield(0, MR_tempr1, 1);
	MR_tempr2 = MR_sv(2);
	MR_sv(2) = MR_tfield(0, MR_tempr1, 2);
	MR_sv(3) = MR_tfield(0, MR_tempr1, 3);
	MR_sv(4) = MR_tfield(0, MR_tempr1, 4);
	MR_sv(5) = MR_tfield(0, MR_tempr1, 5);
	MR_sv(6) = MR_tfield(0, MR_tempr1, 6);
	MR_sv(7) = MR_tfield(0, MR_tempr1, 7);
	MR_sv(8) = MR_tfield(0, MR_tempr1, 8);
	MR_sv(9) = MR_tfield(0, MR_tempr1, 9);
	MR_sv(10) = MR_tfield(0, MR_tempr2, 1);
	MR_sv(11) = MR_tfield(0, MR_tempr2, 2);
	MR_sv(12) = MR_tfield(0, MR_tempr2, 3);
	MR_sv(13) = MR_tfield(0, MR_tempr2, 4);
	MR_sv(14) = MR_tfield(0, MR_tempr2, 5);
	MR_sv(15) = MR_tfield(0, MR_tempr2, 6);
	MR_sv(16) = MR_tfield(0, MR_tempr2, 7);
	MR_sv(17) = MR_tfield(0, MR_tempr2, 8);
	MR_sv(18) = MR_tfield(0, MR_tempr2, 9);
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,3);
	MR_r2 = MR_tfield(0, MR_tempr1, 0);
	MR_r3 = MR_tfield(0, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(builtin__unify_2_0,
		__Unify___check_hlds__mode_constraint_robdd__mode_constraint_info_0_0_i4);
MR_def_label(__Unify___check_hlds__mode_constraint_robdd__mode_constraint_info_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___check_hlds__mode_constraint_robdd__mode_constraint_info_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,1,3);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(10);
	MR_np_call_localret_ent(builtin__unify_2_0,
		__Unify___check_hlds__mode_constraint_robdd__mode_constraint_info_0_0_i6);
MR_def_label(__Unify___check_hlds__mode_constraint_robdd__mode_constraint_info_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___check_hlds__mode_constraint_robdd__mode_constraint_info_0_0_i1);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(11);
	MR_np_call_localret_ent(__Unify___hlds__hlds_pred__pred_id_0_0,
		__Unify___check_hlds__mode_constraint_robdd__mode_constraint_info_0_0_i8);
MR_def_label(__Unify___check_hlds__mode_constraint_robdd__mode_constraint_info_0_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___check_hlds__mode_constraint_robdd__mode_constraint_info_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,5);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(12);
	MR_np_call_localret_ent(builtin__unify_2_0,
		__Unify___check_hlds__mode_constraint_robdd__mode_constraint_info_0_0_i10);
MR_def_label(__Unify___check_hlds__mode_constraint_robdd__mode_constraint_info_0_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___check_hlds__mode_constraint_robdd__mode_constraint_info_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,1,4);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(13);
	MR_np_call_localret_ent(builtin__unify_2_0,
		__Unify___check_hlds__mode_constraint_robdd__mode_constraint_info_0_0_i12);
MR_def_label(__Unify___check_hlds__mode_constraint_robdd__mode_constraint_info_0_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___check_hlds__mode_constraint_robdd__mode_constraint_info_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,1,4);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(14);
	MR_np_call_localret_ent(builtin__unify_2_0,
		__Unify___check_hlds__mode_constraint_robdd__mode_constraint_info_0_0_i14);
MR_def_label(__Unify___check_hlds__mode_constraint_robdd__mode_constraint_info_0_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___check_hlds__mode_constraint_robdd__mode_constraint_info_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,6);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(15);
	MR_np_call_localret_ent(builtin__unify_2_0,
		__Unify___check_hlds__mode_constraint_robdd__mode_constraint_info_0_0_i16);
MR_def_label(__Unify___check_hlds__mode_constraint_robdd__mode_constraint_info_0_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___check_hlds__mode_constraint_robdd__mode_constraint_info_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r2 = MR_sv(7);
	MR_r3 = MR_sv(16);
	MR_np_call_localret_ent(builtin__unify_2_0,
		__Unify___check_hlds__mode_constraint_robdd__mode_constraint_info_0_0_i18);
MR_def_label(__Unify___check_hlds__mode_constraint_robdd__mode_constraint_info_0_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___check_hlds__mode_constraint_robdd__mode_constraint_info_0_0_i1);
	}
	if ((MR_sv(8) != MR_sv(17))) {
		MR_GOTO_LAB(__Unify___check_hlds__mode_constraint_robdd__mode_constraint_info_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,1,5);
	MR_r2 = MR_sv(9);
	MR_r3 = MR_sv(18);
	MR_succip_word = MR_sv(19);
	MR_decr_sp(19);
	MR_np_tailcall_ent(builtin__unify_2_0);
MR_def_label(__Unify___check_hlds__mode_constraint_robdd__mode_constraint_info_0_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___check_hlds__mode_constraint_robdd__mode_constraint_info_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(19);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Compare___hlds__hlds_pred__pred_id_0_0);
MR_decl_entry(private_builtin__builtin_compare_int_3_0);

MR_BEGIN_MODULE(check_hlds__mode_constraint_robdd_module31)
	MR_init_entry1(__Compare___check_hlds__mode_constraint_robdd__mode_constraint_info_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___check_hlds__mode_constraint_robdd__mode_constraint_info_0_0);
	MR_init_label10(__Compare___check_hlds__mode_constraint_robdd__mode_constraint_info_0_0,3,2,5,9,13,17,21,25,29,33)
	MR_init_label2(__Compare___check_hlds__mode_constraint_robdd__mode_constraint_info_0_0,37,115)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___check_hlds__mode_constraint_robdd__mode_constraint_info_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___check_hlds__mode_constraint_robdd__mode_constraint_info_0_0_i3);
	}
	MR_incr_sp(19);
	MR_sv(19) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___check_hlds__mode_constraint_robdd__mode_constraint_info_0_0_i2);
MR_def_label(__Compare___check_hlds__mode_constraint_robdd__mode_constraint_info_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___check_hlds__mode_constraint_robdd__mode_constraint_info_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(2);
	MR_sv(18) = MR_tfield(0, MR_tempr5, 9);
	MR_sv(17) = MR_tfield(0, MR_tempr5, 8);
	MR_sv(16) = MR_tfield(0, MR_tempr5, 7);
	MR_sv(15) = MR_tfield(0, MR_tempr5, 6);
	MR_sv(14) = MR_tfield(0, MR_tempr5, 5);
	MR_sv(13) = MR_tfield(0, MR_tempr5, 4);
	MR_sv(12) = MR_tfield(0, MR_tempr5, 3);
	MR_sv(11) = MR_tfield(0, MR_tempr5, 2);
	MR_sv(10) = MR_tfield(0, MR_tempr5, 1);
	MR_tempr6 = MR_sv(1);
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
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,3);
	MR_r2 = MR_tfield(0, MR_tempr3, 0);
	MR_r3 = MR_tfield(0, MR_tempr4, 0);
	}
	MR_np_call_localret_ent(builtin__compare_3_0,
		__Compare___check_hlds__mode_constraint_robdd__mode_constraint_info_0_0_i5);
MR_def_label(__Compare___check_hlds__mode_constraint_robdd__mode_constraint_info_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___check_hlds__mode_constraint_robdd__mode_constraint_info_0_0_i115);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,1,3);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(10);
	MR_np_call_localret_ent(builtin__compare_3_0,
		__Compare___check_hlds__mode_constraint_robdd__mode_constraint_info_0_0_i9);
MR_def_label(__Compare___check_hlds__mode_constraint_robdd__mode_constraint_info_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___check_hlds__mode_constraint_robdd__mode_constraint_info_0_0_i115);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(11);
	MR_np_call_localret_ent(__Compare___hlds__hlds_pred__pred_id_0_0,
		__Compare___check_hlds__mode_constraint_robdd__mode_constraint_info_0_0_i13);
MR_def_label(__Compare___check_hlds__mode_constraint_robdd__mode_constraint_info_0_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___check_hlds__mode_constraint_robdd__mode_constraint_info_0_0_i115);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,5);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(12);
	MR_np_call_localret_ent(builtin__compare_3_0,
		__Compare___check_hlds__mode_constraint_robdd__mode_constraint_info_0_0_i17);
MR_def_label(__Compare___check_hlds__mode_constraint_robdd__mode_constraint_info_0_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___check_hlds__mode_constraint_robdd__mode_constraint_info_0_0_i115);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,1,4);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(13);
	MR_np_call_localret_ent(builtin__compare_3_0,
		__Compare___check_hlds__mode_constraint_robdd__mode_constraint_info_0_0_i21);
MR_def_label(__Compare___check_hlds__mode_constraint_robdd__mode_constraint_info_0_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___check_hlds__mode_constraint_robdd__mode_constraint_info_0_0_i115);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,1,4);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(14);
	MR_np_call_localret_ent(builtin__compare_3_0,
		__Compare___check_hlds__mode_constraint_robdd__mode_constraint_info_0_0_i25);
MR_def_label(__Compare___check_hlds__mode_constraint_robdd__mode_constraint_info_0_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___check_hlds__mode_constraint_robdd__mode_constraint_info_0_0_i115);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,6);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(15);
	MR_np_call_localret_ent(builtin__compare_3_0,
		__Compare___check_hlds__mode_constraint_robdd__mode_constraint_info_0_0_i29);
MR_def_label(__Compare___check_hlds__mode_constraint_robdd__mode_constraint_info_0_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___check_hlds__mode_constraint_robdd__mode_constraint_info_0_0_i115);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r2 = MR_sv(7);
	MR_r3 = MR_sv(16);
	MR_np_call_localret_ent(builtin__compare_3_0,
		__Compare___check_hlds__mode_constraint_robdd__mode_constraint_info_0_0_i33);
MR_def_label(__Compare___check_hlds__mode_constraint_robdd__mode_constraint_info_0_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___check_hlds__mode_constraint_robdd__mode_constraint_info_0_0_i115);
	}
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(17);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___check_hlds__mode_constraint_robdd__mode_constraint_info_0_0_i37);
MR_def_label(__Compare___check_hlds__mode_constraint_robdd__mode_constraint_info_0_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___check_hlds__mode_constraint_robdd__mode_constraint_info_0_0_i115);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,1,5);
	MR_r2 = MR_sv(9);
	MR_r3 = MR_sv(18);
	MR_succip_word = MR_sv(19);
	MR_decr_sp(19);
	MR_np_tailcall_ent(builtin__compare_3_0);
MR_def_label(__Compare___check_hlds__mode_constraint_robdd__mode_constraint_info_0_0,115)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(19);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__mode_constraint_robdd_module32)
	MR_init_entry1(__Unify___check_hlds__mode_constraint_robdd__mode_constraint_var_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___check_hlds__mode_constraint_robdd__mode_constraint_var_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___check_hlds__mode_constraint_robdd__mode_constraint_var_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	MR_np_tailcall_ent(builtin__unify_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__mode_constraint_robdd_module33)
	MR_init_entry1(__Compare___check_hlds__mode_constraint_robdd__mode_constraint_var_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___check_hlds__mode_constraint_robdd__mode_constraint_var_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___check_hlds__mode_constraint_robdd__mode_constraint_var_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	MR_np_tailcall_ent(builtin__compare_3_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__mode_constraint_robdd_module34)
	MR_init_entry1(__Unify___check_hlds__mode_constraint_robdd__mode_constraint_varmap_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___check_hlds__mode_constraint_robdd__mode_constraint_varmap_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___check_hlds__mode_constraint_robdd__mode_constraint_varmap_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,1,3);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	MR_np_tailcall_ent(builtin__unify_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__mode_constraint_robdd_module35)
	MR_init_entry1(__Compare___check_hlds__mode_constraint_robdd__mode_constraint_varmap_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___check_hlds__mode_constraint_robdd__mode_constraint_varmap_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___check_hlds__mode_constraint_robdd__mode_constraint_varmap_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,1,3);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	MR_np_tailcall_ent(builtin__compare_3_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__mode_constraint_robdd_module36)
	MR_init_entry1(__Unify___check_hlds__mode_constraint_robdd__mode_constraint_vars_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___check_hlds__mode_constraint_robdd__mode_constraint_vars_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___check_hlds__mode_constraint_robdd__mode_constraint_vars_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,8);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	MR_np_tailcall_ent(builtin__unify_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__mode_constraint_robdd_module37)
	MR_init_entry1(__Compare___check_hlds__mode_constraint_robdd__mode_constraint_vars_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___check_hlds__mode_constraint_robdd__mode_constraint_vars_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___check_hlds__mode_constraint_robdd__mode_constraint_vars_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,8);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	MR_np_tailcall_ent(builtin__compare_3_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__mode_constraint_robdd_module38)
	MR_init_entry1(__Unify___check_hlds__mode_constraint_robdd__prodvars_map_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___check_hlds__mode_constraint_robdd__prodvars_map_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___check_hlds__mode_constraint_robdd__prodvars_map_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,1,2);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	MR_np_tailcall_ent(builtin__unify_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__mode_constraint_robdd_module39)
	MR_init_entry1(__Compare___check_hlds__mode_constraint_robdd__prodvars_map_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___check_hlds__mode_constraint_robdd__prodvars_map_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___check_hlds__mode_constraint_robdd__prodvars_map_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,1,2);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	MR_np_tailcall_ent(builtin__compare_3_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__mode_constraint_robdd_module40)
	MR_init_entry1(__Unify___check_hlds__mode_constraint_robdd__prog_var_and_level_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___check_hlds__mode_constraint_robdd__prog_var_and_level_0_0);
	MR_init_label4(__Unify___check_hlds__mode_constraint_robdd__prog_var_and_level_0_0,4,6,10,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___check_hlds__mode_constraint_robdd__prog_var_and_level_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___check_hlds__mode_constraint_robdd__prog_var_and_level_0_0_i10);
	}
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_tfield(0, MR_tempr1, 1);
	MR_tempr2 = MR_sv(2);
	MR_sv(2) = MR_tfield(0, MR_tempr1, 2);
	MR_sv(3) = MR_tfield(0, MR_tempr2, 1);
	MR_sv(4) = MR_tfield(0, MR_tempr2, 2);
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,4);
	MR_r2 = MR_tfield(0, MR_tempr1, 0);
	MR_r3 = MR_tfield(0, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(builtin__unify_2_0,
		__Unify___check_hlds__mode_constraint_robdd__prog_var_and_level_0_0_i4);
MR_def_label(__Unify___check_hlds__mode_constraint_robdd__prog_var_and_level_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___check_hlds__mode_constraint_robdd__prog_var_and_level_0_0_i1);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(__Unify___hlds__hlds_pred__pred_id_0_0,
		__Unify___check_hlds__mode_constraint_robdd__prog_var_and_level_0_0_i6);
MR_def_label(__Unify___check_hlds__mode_constraint_robdd__prog_var_and_level_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___check_hlds__mode_constraint_robdd__prog_var_and_level_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,5);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(4);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(builtin__unify_2_0);
MR_def_label(__Unify___check_hlds__mode_constraint_robdd__prog_var_and_level_0_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___check_hlds__mode_constraint_robdd__prog_var_and_level_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__mode_constraint_robdd_module41)
	MR_init_entry1(__Compare___check_hlds__mode_constraint_robdd__prog_var_and_level_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___check_hlds__mode_constraint_robdd__prog_var_and_level_0_0);
	MR_init_label5(__Compare___check_hlds__mode_constraint_robdd__prog_var_and_level_0_0,3,2,5,9,38)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___check_hlds__mode_constraint_robdd__prog_var_and_level_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___check_hlds__mode_constraint_robdd__prog_var_and_level_0_0_i3);
	}
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___check_hlds__mode_constraint_robdd__prog_var_and_level_0_0_i2);
MR_def_label(__Compare___check_hlds__mode_constraint_robdd__prog_var_and_level_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___check_hlds__mode_constraint_robdd__prog_var_and_level_0_0,2)
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
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,4);
	MR_r2 = MR_tfield(0, MR_tempr3, 0);
	MR_r3 = MR_tfield(0, MR_tempr4, 0);
	}
	MR_np_call_localret_ent(builtin__compare_3_0,
		__Compare___check_hlds__mode_constraint_robdd__prog_var_and_level_0_0_i5);
MR_def_label(__Compare___check_hlds__mode_constraint_robdd__prog_var_and_level_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___check_hlds__mode_constraint_robdd__prog_var_and_level_0_0_i38);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(__Compare___hlds__hlds_pred__pred_id_0_0,
		__Compare___check_hlds__mode_constraint_robdd__prog_var_and_level_0_0_i9);
MR_def_label(__Compare___check_hlds__mode_constraint_robdd__prog_var_and_level_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___check_hlds__mode_constraint_robdd__prog_var_and_level_0_0_i38);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,5);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(4);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(builtin__compare_3_0);
MR_def_label(__Compare___check_hlds__mode_constraint_robdd__prog_var_and_level_0_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__mode_constraint_robdd_module42)
	MR_init_entry1(__Unify___check_hlds__mode_constraint_robdd__rep_var_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___check_hlds__mode_constraint_robdd__rep_var_0_0);
	MR_init_label5(__Unify___check_hlds__mode_constraint_robdd__rep_var_0_0,7,5,24,9,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___check_hlds__mode_constraint_robdd__rep_var_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___check_hlds__mode_constraint_robdd__rep_var_0_0_i24);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_tempr1;
	MR_tempr2 = MR_r2;
	MR_sv(2) = MR_tempr2;
	if (MR_PTAG_TESTR(MR_tempr1,2)) {
		MR_GOTO_LAB(__Unify___check_hlds__mode_constraint_robdd__rep_var_0_0_i5);
	}
	if (MR_PTAG_TESTR(MR_tempr2,2)) {
		MR_GOTO_LAB(__Unify___check_hlds__mode_constraint_robdd__rep_var_0_0_i1);
	}
	MR_tempr3 = MR_tempr1;
	MR_sv(1) = MR_tfield(2, MR_tempr3, 1);
	MR_tempr4 = MR_tempr2;
	MR_sv(2) = MR_tfield(2, MR_tempr4, 1);
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,4);
	MR_r2 = MR_tfield(2, MR_tempr3, 0);
	MR_r3 = MR_tfield(2, MR_tempr4, 0);
	}
	MR_np_call_localret_ent(builtin__unify_2_0,
		__Unify___check_hlds__mode_constraint_robdd__rep_var_0_0_i7);
MR_def_label(__Unify___check_hlds__mode_constraint_robdd__rep_var_0_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___check_hlds__mode_constraint_robdd__rep_var_0_0_i1);
	}
	MR_r1 = (MR_sv(1) == MR_sv(2));
	MR_decr_sp_and_return(3);
MR_def_label(__Unify___check_hlds__mode_constraint_robdd__rep_var_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),0)) {
		MR_GOTO_LAB(__Unify___check_hlds__mode_constraint_robdd__rep_var_0_0_i9);
	}
	if (MR_PTAG_TESTR(MR_sv(2),0)) {
		MR_GOTO_LAB(__Unify___check_hlds__mode_constraint_robdd__rep_var_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,4);
	MR_r2 = MR_tfield(0, MR_sv(1), 0);
	MR_r3 = MR_tfield(0, MR_sv(2), 0);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(builtin__unify_2_0);
MR_def_label(__Unify___check_hlds__mode_constraint_robdd__rep_var_0_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___check_hlds__mode_constraint_robdd__rep_var_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Unify___check_hlds__mode_constraint_robdd__rep_var_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,4);
	MR_r2 = MR_tfield(1, MR_sv(1), 0);
	MR_r3 = MR_tfield(1, MR_sv(2), 0);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(builtin__unify_2_0);
MR_def_label(__Unify___check_hlds__mode_constraint_robdd__rep_var_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__mode_constraint_robdd_module43)
	MR_init_entry1(__Compare___check_hlds__mode_constraint_robdd__rep_var_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___check_hlds__mode_constraint_robdd__rep_var_0_0);
	MR_init_label10(__Compare___check_hlds__mode_constraint_robdd__rep_var_0_0,3,2,9,7,5,17,42,15,33,21)
	MR_init_label2(__Compare___check_hlds__mode_constraint_robdd__rep_var_0_0,34,80)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___check_hlds__mode_constraint_robdd__rep_var_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___check_hlds__mode_constraint_robdd__rep_var_0_0_i3);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___check_hlds__mode_constraint_robdd__rep_var_0_0_i2);
MR_def_label(__Compare___check_hlds__mode_constraint_robdd__rep_var_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___check_hlds__mode_constraint_robdd__rep_var_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),2)) {
		MR_GOTO_LAB(__Compare___check_hlds__mode_constraint_robdd__rep_var_0_0_i5);
	}
	if (MR_PTAG_TESTR(MR_sv(2),2)) {
		MR_GOTO_LAB(__Compare___check_hlds__mode_constraint_robdd__rep_var_0_0_i7);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(1);
	MR_tempr1 = MR_tfield(2, MR_tempr5, 1);
	MR_tempr6 = MR_sv(2);
	MR_tempr2 = MR_tfield(2, MR_tempr6, 1);
	MR_tempr3 = MR_tempr5;
	MR_sv(1) = MR_tempr2;
	MR_tempr4 = MR_tempr6;
	MR_sv(2) = MR_tempr1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,4);
	MR_r2 = MR_tfield(2, MR_tempr3, 0);
	MR_r3 = MR_tfield(2, MR_tempr4, 0);
	}
	MR_np_call_localret_ent(builtin__compare_3_0,
		__Compare___check_hlds__mode_constraint_robdd__rep_var_0_0_i9);
MR_def_label(__Compare___check_hlds__mode_constraint_robdd__rep_var_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___check_hlds__mode_constraint_robdd__rep_var_0_0_i80);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(1);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
MR_def_label(__Compare___check_hlds__mode_constraint_robdd__rep_var_0_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),0)) {
		MR_GOTO_LAB(__Compare___check_hlds__mode_constraint_robdd__rep_var_0_0_i34);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___check_hlds__mode_constraint_robdd__rep_var_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),0)) {
		MR_GOTO_LAB(__Compare___check_hlds__mode_constraint_robdd__rep_var_0_0_i15);
	}
	if (MR_PTAG_TESTR(MR_sv(2),2)) {
		MR_GOTO_LAB(__Compare___check_hlds__mode_constraint_robdd__rep_var_0_0_i17);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___check_hlds__mode_constraint_robdd__rep_var_0_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),0)) {
		MR_GOTO_LAB(__Compare___check_hlds__mode_constraint_robdd__rep_var_0_0_i33);
	}
MR_def_label(__Compare___check_hlds__mode_constraint_robdd__rep_var_0_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,4);
	MR_r2 = MR_mask_field(MR_sv(1), 0);
	MR_r3 = MR_mask_field(MR_sv(2), 0);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(builtin__compare_3_0);
MR_def_label(__Compare___check_hlds__mode_constraint_robdd__rep_var_0_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),2)) {
		MR_GOTO_LAB(__Compare___check_hlds__mode_constraint_robdd__rep_var_0_0_i21);
	}
MR_def_label(__Compare___check_hlds__mode_constraint_robdd__rep_var_0_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___check_hlds__mode_constraint_robdd__rep_var_0_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),0)) {
		MR_GOTO_LAB(__Compare___check_hlds__mode_constraint_robdd__rep_var_0_0_i42);
	}
MR_def_label(__Compare___check_hlds__mode_constraint_robdd__rep_var_0_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___check_hlds__mode_constraint_robdd__rep_var_0_0,80)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__mode_constraint_robdd_module44)
	MR_init_entry1(__Unify___check_hlds__mode_constraint_robdd__robdd_var_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___check_hlds__mode_constraint_robdd__robdd_var_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___check_hlds__mode_constraint_robdd__robdd_var_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	MR_np_tailcall_ent(builtin__unify_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__mode_constraint_robdd_module45)
	MR_init_entry1(__Compare___check_hlds__mode_constraint_robdd__robdd_var_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___check_hlds__mode_constraint_robdd__robdd_var_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___check_hlds__mode_constraint_robdd__robdd_var_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	MR_np_tailcall_ent(builtin__compare_3_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__mode_constraint_robdd_module46)
	MR_init_entry1(__Unify___check_hlds__mode_constraint_robdd__threshold_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___check_hlds__mode_constraint_robdd__threshold_0_0);
	MR_init_label1(__Unify___check_hlds__mode_constraint_robdd__threshold_0_0,6)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___check_hlds__mode_constraint_robdd__threshold_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___check_hlds__mode_constraint_robdd__threshold_0_0_i6);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_decr_sp(3);
	MR_np_tailcall_ent(builtin__unify_2_0);
MR_def_label(__Unify___check_hlds__mode_constraint_robdd__threshold_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__mode_constraint_robdd_module47)
	MR_init_entry1(__Compare___check_hlds__mode_constraint_robdd__threshold_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___check_hlds__mode_constraint_robdd__threshold_0_0);
	MR_init_label2(__Compare___check_hlds__mode_constraint_robdd__threshold_0_0,3,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___check_hlds__mode_constraint_robdd__threshold_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___check_hlds__mode_constraint_robdd__threshold_0_0_i3);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___check_hlds__mode_constraint_robdd__threshold_0_0_i2);
MR_def_label(__Compare___check_hlds__mode_constraint_robdd__threshold_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___check_hlds__mode_constraint_robdd__threshold_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(builtin__compare_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__mode_constraint_robdd_module48)
	MR_init_entry1(__Unify___check_hlds__mode_constraint_robdd__varmap_key_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___check_hlds__mode_constraint_robdd__varmap_key_0_0);
	MR_init_label4(__Unify___check_hlds__mode_constraint_robdd__varmap_key_0_0,4,6,10,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___check_hlds__mode_constraint_robdd__varmap_key_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___check_hlds__mode_constraint_robdd__varmap_key_0_0_i10);
	}
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
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
	MR_np_call_localret_ent(__Unify___check_hlds__mode_constraint_robdd__rep_var_0_0,
		__Unify___check_hlds__mode_constraint_robdd__varmap_key_0_0_i4);
MR_def_label(__Unify___check_hlds__mode_constraint_robdd__varmap_key_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___check_hlds__mode_constraint_robdd__varmap_key_0_0_i1);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(__Unify___hlds__hlds_pred__pred_id_0_0,
		__Unify___check_hlds__mode_constraint_robdd__varmap_key_0_0_i6);
MR_def_label(__Unify___check_hlds__mode_constraint_robdd__varmap_key_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___check_hlds__mode_constraint_robdd__varmap_key_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,5);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(4);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(builtin__unify_2_0);
MR_def_label(__Unify___check_hlds__mode_constraint_robdd__varmap_key_0_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___check_hlds__mode_constraint_robdd__varmap_key_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__mode_constraint_robdd_module49)
	MR_init_entry1(__Compare___check_hlds__mode_constraint_robdd__varmap_key_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___check_hlds__mode_constraint_robdd__varmap_key_0_0);
	MR_init_label5(__Compare___check_hlds__mode_constraint_robdd__varmap_key_0_0,3,2,5,9,38)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___check_hlds__mode_constraint_robdd__varmap_key_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___check_hlds__mode_constraint_robdd__varmap_key_0_0_i3);
	}
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___check_hlds__mode_constraint_robdd__varmap_key_0_0_i2);
MR_def_label(__Compare___check_hlds__mode_constraint_robdd__varmap_key_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___check_hlds__mode_constraint_robdd__varmap_key_0_0,2)
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
	MR_np_call_localret_ent(__Compare___check_hlds__mode_constraint_robdd__rep_var_0_0,
		__Compare___check_hlds__mode_constraint_robdd__varmap_key_0_0_i5);
MR_def_label(__Compare___check_hlds__mode_constraint_robdd__varmap_key_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___check_hlds__mode_constraint_robdd__varmap_key_0_0_i38);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(__Compare___hlds__hlds_pred__pred_id_0_0,
		__Compare___check_hlds__mode_constraint_robdd__varmap_key_0_0_i9);
MR_def_label(__Compare___check_hlds__mode_constraint_robdd__varmap_key_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___check_hlds__mode_constraint_robdd__varmap_key_0_0_i38);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,5);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(4);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(builtin__compare_3_0);
MR_def_label(__Compare___check_hlds__mode_constraint_robdd__varmap_key_0_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(bimap__reverse_lookup_3_0);
MR_declare_entry(mercury__do_call_closure_1);

MR_BEGIN_MODULE(check_hlds__mode_constraint_robdd_module50)
	MR_init_entry1(check_hlds__mode_constraint_robdd__IntroducedFrom__pred__restrict_filter__283__1_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__mode_constraint_robdd__IntroducedFrom__pred__restrict_filter__283__1_3_0);
	MR_init_label3(check_hlds__mode_constraint_robdd__IntroducedFrom__pred__restrict_filter__283__1_3_0,2,7,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__pred__restrict_filter__283__1'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__mode_constraint_robdd__IntroducedFrom__pred__restrict_filter__283__1_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(check_hlds__mode_constraint_robdd, varmap_key);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,0);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_r3 = MR_tfield(0, MR_sv(2), 1);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(bimap__reverse_lookup_3_0,
		check_hlds__mode_constraint_robdd__IntroducedFrom__pred__restrict_filter__283__1_3_0_i2);
MR_def_label(check_hlds__mode_constraint_robdd__IntroducedFrom__pred__restrict_filter__283__1_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(0, MR_r1, 0);
	MR_tempr2 = MR_sv(2);
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_tfield(0, MR_r1, 1);
	MR_r2 = MR_tfield(0, MR_tempr2, 2);
	}
	MR_np_call_localret_ent(__Unify___hlds__hlds_pred__pred_id_0_0,
		check_hlds__mode_constraint_robdd__IntroducedFrom__pred__restrict_filter__283__1_3_0_i7);
MR_def_label(check_hlds__mode_constraint_robdd__IntroducedFrom__pred__restrict_filter__283__1_3_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__mode_constraint_robdd__IntroducedFrom__pred__restrict_filter__283__1_3_0_i3);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(check_hlds__mode_constraint_robdd__IntroducedFrom__pred__restrict_filter__283__1_3_0));
	MR_np_tailcall_ent(do_call_closure_1);
	}
MR_def_label(check_hlds__mode_constraint_robdd__IntroducedFrom__pred__restrict_filter__283__1_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_r1 = MR_TRUE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__set__sorted_list_to_set_1_0);

MR_BEGIN_MODULE(check_hlds__mode_constraint_robdd_module51)
	MR_init_entry1(fn__check_hlds__mode_constraint_robdd__IntroducedFrom__func__get_interesting_vars_for_pred__308__1_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__check_hlds__mode_constraint_robdd__IntroducedFrom__func__get_interesting_vars_for_pred__308__1_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__func__get_interesting_vars_for_pred__308__1'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__check_hlds__mode_constraint_robdd__IntroducedFrom__func__get_interesting_vars_for_pred__308__1_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r2 = MR_tempr1;
	MR_np_tailcall_ent(fn__set__sorted_list_to_set_1_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__map__lookup_2_0);

MR_BEGIN_MODULE(check_hlds__mode_constraint_robdd_module52)
	MR_init_entry1(check_hlds__mode_constraint_robdd__IntroducedFrom__pred__get_interesting_vars_for_pred__309__1_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__mode_constraint_robdd__IntroducedFrom__pred__get_interesting_vars_for_pred__309__1_4_0);
	MR_init_label5(check_hlds__mode_constraint_robdd__IntroducedFrom__pred__get_interesting_vars_for_pred__309__1_4_0,2,3,5,6,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__pred__get_interesting_vars_for_pred__309__1'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__mode_constraint_robdd__IntroducedFrom__pred__get_interesting_vars_for_pred__309__1_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_sv(4) = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_id);
	MR_sv(5) = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r1 = MR_sv(4);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(5);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(1);
	}
	MR_np_call_localret_ent(fn__map__lookup_2_0,
		check_hlds__mode_constraint_robdd__IntroducedFrom__pred__get_interesting_vars_for_pred__309__1_4_0_i2);
MR_def_label(check_hlds__mode_constraint_robdd__IntroducedFrom__pred__get_interesting_vars_for_pred__309__1_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(3);
	}
	MR_np_call_localret_ent(builtin__compare_3_0,
		check_hlds__mode_constraint_robdd__IntroducedFrom__pred__get_interesting_vars_for_pred__309__1_4_0_i3);
MR_def_label(check_hlds__mode_constraint_robdd__IntroducedFrom__pred__get_interesting_vars_for_pred__309__1_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) 1 != (MR_Integer) MR_r1)) {
		MR_GOTO_LAB(check_hlds__mode_constraint_robdd__IntroducedFrom__pred__get_interesting_vars_for_pred__309__1_4_0_i1);
	}
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(1);
	MR_np_call_localret_ent(fn__map__lookup_2_0,
		check_hlds__mode_constraint_robdd__IntroducedFrom__pred__get_interesting_vars_for_pred__309__1_4_0_i5);
MR_def_label(check_hlds__mode_constraint_robdd__IntroducedFrom__pred__get_interesting_vars_for_pred__309__1_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(3);
	}
	MR_np_call_localret_ent(builtin__compare_3_0,
		check_hlds__mode_constraint_robdd__IntroducedFrom__pred__get_interesting_vars_for_pred__309__1_4_0_i6);
MR_def_label(check_hlds__mode_constraint_robdd__IntroducedFrom__pred__get_interesting_vars_for_pred__309__1_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = ((MR_Integer) 1 != (MR_Integer) MR_r1);
	MR_decr_sp_and_return(6);
MR_def_label(check_hlds__mode_constraint_robdd__IntroducedFrom__pred__get_interesting_vars_for_pred__309__1_4_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__list__filter_2_0);

MR_BEGIN_MODULE(check_hlds__mode_constraint_robdd_module53)
	MR_init_entry1(fn__check_hlds__mode_constraint_robdd__IntroducedFrom__func__get_interesting_vars_for_pred__308__2_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__check_hlds__mode_constraint_robdd__IntroducedFrom__func__get_interesting_vars_for_pred__308__2_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__func__get_interesting_vars_for_pred__308__2'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__check_hlds__mode_constraint_robdd__IntroducedFrom__func__get_interesting_vars_for_pred__308__2_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	MR_np_tailcall_ent(fn__list__filter_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__std_util__compose_3_0);

MR_BEGIN_MODULE(check_hlds__mode_constraint_robdd_module54)
	MR_init_entry1(fn__check_hlds__mode_constraint_robdd__IntroducedFrom__func__get_interesting_vars_for_pred__312__1_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__check_hlds__mode_constraint_robdd__IntroducedFrom__func__get_interesting_vars_for_pred__312__1_3_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__func__get_interesting_vars_for_pred__312__1'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__check_hlds__mode_constraint_robdd__IntroducedFrom__func__get_interesting_vars_for_pred__312__1_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,1);
	MR_tempr2 = MR_r2;
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,2);
	MR_tempr3 = MR_r3;
	MR_r3 = MR_r1;
	MR_r4 = MR_tempr1;
	MR_r5 = MR_tempr2;
	MR_r6 = MR_tempr3;
	MR_np_tailcall_ent(fn__std_util__compose_3_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__varset__vars_1_0);

MR_BEGIN_MODULE(check_hlds__mode_constraint_robdd_module55)
	MR_init_entry1(fn__check_hlds__mode_constraint_robdd__IntroducedFrom__func__get_interesting_vars_for_pred__312__2_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__check_hlds__mode_constraint_robdd__IntroducedFrom__func__get_interesting_vars_for_pred__312__2_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__func__get_interesting_vars_for_pred__312__2'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__check_hlds__mode_constraint_robdd__IntroducedFrom__func__get_interesting_vars_for_pred__312__2_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(check_hlds__mode_constraint_robdd, mc_type);
	MR_r2 = MR_tempr1;
	MR_np_tailcall_ent(fn__varset__vars_1_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_declare_entry(MR_do_fail);
MR_decl_entry(list__member_2_1);
MR_declare_entry(MR_do_redo);
MR_decl_entry(f_109_111_100_101_95_114_111_98_100_100_95_95_116_102_101_105_114_110_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_118_97_114_95_101_110_116_97_105_108_101_100_95_95_91_84_32_61_32_109_99_95_116_121_112_101_93_95_48_95_49_2_0);

MR_BEGIN_MODULE(check_hlds__mode_constraint_robdd_module56)
	MR_init_entry1(check_hlds__mode_constraint_robdd__IntroducedFrom__pred__set_input_nodes__321__1_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__mode_constraint_robdd__IntroducedFrom__pred__set_input_nodes__321__1_6_0);
	MR_init_label5(check_hlds__mode_constraint_robdd__IntroducedFrom__pred__set_input_nodes__321__1_6_0,1,2,4,7,8)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__pred__set_input_nodes__321__1'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__mode_constraint_robdd__IntroducedFrom__pred__set_input_nodes__321__1_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_mkframe("pred check_hlds.mode_constraint_robdd.IntroducedFrom__pred__set_input_nodes__321__1/6-0", 8,
		MR_ENTRY(MR_do_fail));
	MR_fv(1) = MR_r1;
	MR_fv(2) = MR_r2;
	MR_fv(3) = MR_r3;
	MR_fv(4) = MR_r5;
	MR_fv(7) = (MR_Word) MR_CTOR0_ADDR(check_hlds__mode_constraint_robdd, varmap_key);
	MR_r1 = MR_fv(7);
	MR_r2 = MR_r4;
	MR_np_call_localret_ent(list__member_2_1,
		check_hlds__mode_constraint_robdd__IntroducedFrom__pred__set_input_nodes__321__1_6_0_i1);
MR_def_label(check_hlds__mode_constraint_robdd__IntroducedFrom__pred__set_input_nodes__321__1_6_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_fv(5) = MR_r1;
	MR_fv(6) = MR_tfield(0, MR_r1, 0);
	MR_fv(8) = MR_tfield(0, MR_r1, 2);
	MR_r1 = MR_fv(3);
	MR_r2 = MR_tfield(0, MR_fv(5), 1);
	MR_np_call_localret_ent(__Unify___hlds__hlds_pred__pred_id_0_0,
		check_hlds__mode_constraint_robdd__IntroducedFrom__pred__set_input_nodes__321__1_6_0_i2);
MR_def_label(check_hlds__mode_constraint_robdd__IntroducedFrom__pred__set_input_nodes__321__1_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO(MR_ENTRY(MR_do_redo));
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,5);
	MR_r2 = MR_fv(2);
	MR_r3 = MR_fv(8);
	MR_np_call_localret_ent(builtin__unify_2_0,
		check_hlds__mode_constraint_robdd__IntroducedFrom__pred__set_input_nodes__321__1_6_0_i4);
MR_def_label(check_hlds__mode_constraint_robdd__IntroducedFrom__pred__set_input_nodes__321__1_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO(MR_ENTRY(MR_do_redo));
	}
	if (MR_PTAG_TESTR(MR_fv(6),0)) {
		MR_GOTO(MR_ENTRY(MR_do_redo));
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_fv(5);
	MR_fv(5) = MR_tfield(0, MR_fv(6), 0);
	MR_r1 = MR_fv(7);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r3 = MR_fv(1);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(bimap__lookup_3_0,
		check_hlds__mode_constraint_robdd__IntroducedFrom__pred__set_input_nodes__321__1_6_0_i7);
MR_def_label(check_hlds__mode_constraint_robdd__IntroducedFrom__pred__set_input_nodes__321__1_6_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_fv(4);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(f_109_111_100_101_95_114_111_98_100_100_95_95_116_102_101_105_114_110_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_118_97_114_95_101_110_116_97_105_108_101_100_95_95_91_84_32_61_32_109_99_95_116_121_112_101_93_95_48_95_49_2_0,
		check_hlds__mode_constraint_robdd__IntroducedFrom__pred__set_input_nodes__321__1_6_0_i8);
MR_def_label(check_hlds__mode_constraint_robdd__IntroducedFrom__pred__set_input_nodes__321__1_6_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO(MR_ENTRY(MR_do_redo));
	}
	MR_r1 = MR_fv(5);
	MR_succeed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(varset__lookup_name_3_0);
MR_decl_entry(io__write_string_3_0);
MR_decl_entry(io__write_char_3_0);
MR_decl_entry(io__write_int_3_0);
MR_decl_entry(hlds__hlds_pred__pred_id_to_int_2_0);
MR_decl_entry(fn__stack__depth_1_0);
MR_decl_entry(fn__term__var_to_int_1_0);

MR_BEGIN_MODULE(check_hlds__mode_constraint_robdd_module57)
	MR_init_entry1(check_hlds__mode_constraint_robdd__IntroducedFrom__pred__robdd_to_dot__391__1_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__mode_constraint_robdd__IntroducedFrom__pred__robdd_to_dot__391__1_5_0);
	MR_init_label10(check_hlds__mode_constraint_robdd__IntroducedFrom__pred__robdd_to_dot__391__1_5_0,2,5,6,7,4,10,11,9,13,14)
	MR_init_label10(check_hlds__mode_constraint_robdd__IntroducedFrom__pred__robdd_to_dot__391__1_5_0,15,16,17,18,19,20,21,22,23,24)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__pred__robdd_to_dot__391__1'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__mode_constraint_robdd__IntroducedFrom__pred__robdd_to_dot__391__1_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(3) = MR_r3;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(check_hlds__mode_constraint_robdd, varmap_key);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(3);
	}
	MR_np_call_localret_ent(bimap__reverse_lookup_3_0,
		check_hlds__mode_constraint_robdd__IntroducedFrom__pred__robdd_to_dot__391__1_5_0_i2);
MR_def_label(check_hlds__mode_constraint_robdd__IntroducedFrom__pred__robdd_to_dot__391__1_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(0, MR_r1, 0);
	MR_r4 = MR_tempr1;
	if (MR_PTAG_TESTR(MR_tempr1,2)) {
		MR_GOTO_LAB(check_hlds__mode_constraint_robdd__IntroducedFrom__pred__robdd_to_dot__391__1_5_0_i4);
	}
	MR_tempr2 = MR_sv(1);
	MR_sv(1) = MR_tfield(0, MR_r1, 1);
	MR_sv(2) = MR_tfield(0, MR_r1, 2);
	MR_sv(4) = MR_tfield(2, MR_tempr1, 1);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_tempr2;
	MR_r3 = MR_tfield(2, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(varset__lookup_name_3_0,
		check_hlds__mode_constraint_robdd__IntroducedFrom__pred__robdd_to_dot__391__1_5_0_i5);
MR_def_label(check_hlds__mode_constraint_robdd__IntroducedFrom__pred__robdd_to_dot__391__1_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__write_string_3_0,
		check_hlds__mode_constraint_robdd__IntroducedFrom__pred__robdd_to_dot__391__1_5_0_i6);
MR_def_label(check_hlds__mode_constraint_robdd__IntroducedFrom__pred__robdd_to_dot__391__1_5_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 95;
	MR_np_call_localret_ent(io__write_char_3_0,
		check_hlds__mode_constraint_robdd__IntroducedFrom__pred__robdd_to_dot__391__1_5_0_i7);
MR_def_label(check_hlds__mode_constraint_robdd__IntroducedFrom__pred__robdd_to_dot__391__1_5_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(io__write_int_3_0,
		check_hlds__mode_constraint_robdd__IntroducedFrom__pred__robdd_to_dot__391__1_5_0_i15);
MR_def_label(check_hlds__mode_constraint_robdd__IntroducedFrom__pred__robdd_to_dot__391__1_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r4,0)) {
		MR_GOTO_LAB(check_hlds__mode_constraint_robdd__IntroducedFrom__pred__robdd_to_dot__391__1_5_0_i9);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_tfield(0, MR_r1, 1);
	MR_sv(2) = MR_tfield(0, MR_r1, 2);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tfield(0, MR_r4, 0);
	}
	MR_np_call_localret_ent(varset__lookup_name_3_0,
		check_hlds__mode_constraint_robdd__IntroducedFrom__pred__robdd_to_dot__391__1_5_0_i10);
MR_def_label(check_hlds__mode_constraint_robdd__IntroducedFrom__pred__robdd_to_dot__391__1_5_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__write_string_3_0,
		check_hlds__mode_constraint_robdd__IntroducedFrom__pred__robdd_to_dot__391__1_5_0_i11);
MR_def_label(check_hlds__mode_constraint_robdd__IntroducedFrom__pred__robdd_to_dot__391__1_5_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("_in", 3);
	MR_np_call_localret_ent(io__write_string_3_0,
		check_hlds__mode_constraint_robdd__IntroducedFrom__pred__robdd_to_dot__391__1_5_0_i15);
MR_def_label(check_hlds__mode_constraint_robdd__IntroducedFrom__pred__robdd_to_dot__391__1_5_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_tfield(0, MR_r1, 1);
	MR_sv(2) = MR_tfield(0, MR_r1, 2);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tfield(1, MR_r4, 0);
	}
	MR_np_call_localret_ent(varset__lookup_name_3_0,
		check_hlds__mode_constraint_robdd__IntroducedFrom__pred__robdd_to_dot__391__1_5_0_i13);
MR_def_label(check_hlds__mode_constraint_robdd__IntroducedFrom__pred__robdd_to_dot__391__1_5_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__write_string_3_0,
		check_hlds__mode_constraint_robdd__IntroducedFrom__pred__robdd_to_dot__391__1_5_0_i14);
MR_def_label(check_hlds__mode_constraint_robdd__IntroducedFrom__pred__robdd_to_dot__391__1_5_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("_out", 4);
	MR_np_call_localret_ent(io__write_string_3_0,
		check_hlds__mode_constraint_robdd__IntroducedFrom__pred__robdd_to_dot__391__1_5_0_i15);
MR_def_label(check_hlds__mode_constraint_robdd__IntroducedFrom__pred__robdd_to_dot__391__1_5_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(" ", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		check_hlds__mode_constraint_robdd__IntroducedFrom__pred__robdd_to_dot__391__1_5_0_i16);
MR_def_label(check_hlds__mode_constraint_robdd__IntroducedFrom__pred__robdd_to_dot__391__1_5_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(hlds__hlds_pred__pred_id_to_int_2_0,
		check_hlds__mode_constraint_robdd__IntroducedFrom__pred__robdd_to_dot__391__1_5_0_i17);
MR_def_label(check_hlds__mode_constraint_robdd__IntroducedFrom__pred__robdd_to_dot__391__1_5_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__write_int_3_0,
		check_hlds__mode_constraint_robdd__IntroducedFrom__pred__robdd_to_dot__391__1_5_0_i18);
MR_def_label(check_hlds__mode_constraint_robdd__IntroducedFrom__pred__robdd_to_dot__391__1_5_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(" ", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		check_hlds__mode_constraint_robdd__IntroducedFrom__pred__robdd_to_dot__391__1_5_0_i19);
MR_def_label(check_hlds__mode_constraint_robdd__IntroducedFrom__pred__robdd_to_dot__391__1_5_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__goal_path, goal_id);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(fn__stack__depth_1_0,
		check_hlds__mode_constraint_robdd__IntroducedFrom__pred__robdd_to_dot__391__1_5_0_i20);
MR_def_label(check_hlds__mode_constraint_robdd__IntroducedFrom__pred__robdd_to_dot__391__1_5_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__write_int_3_0,
		check_hlds__mode_constraint_robdd__IntroducedFrom__pred__robdd_to_dot__391__1_5_0_i21);
MR_def_label(check_hlds__mode_constraint_robdd__IntroducedFrom__pred__robdd_to_dot__391__1_5_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(" (", 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		check_hlds__mode_constraint_robdd__IntroducedFrom__pred__robdd_to_dot__391__1_5_0_i22);
MR_def_label(check_hlds__mode_constraint_robdd__IntroducedFrom__pred__robdd_to_dot__391__1_5_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(check_hlds__mode_constraint_robdd, mc_type);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(fn__term__var_to_int_1_0,
		check_hlds__mode_constraint_robdd__IntroducedFrom__pred__robdd_to_dot__391__1_5_0_i23);
MR_def_label(check_hlds__mode_constraint_robdd__IntroducedFrom__pred__robdd_to_dot__391__1_5_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__write_int_3_0,
		check_hlds__mode_constraint_robdd__IntroducedFrom__pred__robdd_to_dot__391__1_5_0_i24);
MR_def_label(check_hlds__mode_constraint_robdd__IntroducedFrom__pred__robdd_to_dot__391__1_5_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(")", 1);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(io__write_string_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(stack__push_3_0);
MR_decl_entry(map__search_3_0);
MR_decl_entry(parse_tree__set_of_var__insert_3_0);
MR_decl_entry(map__det_update_4_0);
MR_decl_entry(fn__parse_tree__set_of_var__make_singleton_1_0);

MR_BEGIN_MODULE(check_hlds__mode_constraint_robdd_module58)
	MR_init_entry1(check_hlds__mode_constraint_robdd__IntroducedFrom__pred__atomic_prodvars_map__426__1_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__mode_constraint_robdd__IntroducedFrom__pred__atomic_prodvars_map__426__1_4_0);
	MR_init_label8(check_hlds__mode_constraint_robdd__IntroducedFrom__pred__atomic_prodvars_map__426__1_4_0,3,4,7,9,11,8,13,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__pred__atomic_prodvars_map__426__1'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__mode_constraint_robdd__IntroducedFrom__pred__atomic_prodvars_map__426__1_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(3) = MR_r3;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(check_hlds__mode_constraint_robdd, varmap_key);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r3 = MR_tfield(0, MR_sv(1), 1);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(bimap__reverse_lookup_3_0,
		check_hlds__mode_constraint_robdd__IntroducedFrom__pred__atomic_prodvars_map__426__1_4_0_i3);
MR_def_label(check_hlds__mode_constraint_robdd__IntroducedFrom__pred__atomic_prodvars_map__426__1_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_tfield(0, MR_r1, 0);
	MR_sv(2) = MR_tfield(0, MR_r1, 2);
	MR_r1 = MR_tfield(0, MR_r1, 1);
	MR_r2 = MR_tfield(0, MR_tempr1, 2);
	}
	MR_np_call_localret_ent(__Unify___hlds__hlds_pred__pred_id_0_0,
		check_hlds__mode_constraint_robdd__IntroducedFrom__pred__atomic_prodvars_map__426__1_4_0_i4);
MR_def_label(check_hlds__mode_constraint_robdd__IntroducedFrom__pred__atomic_prodvars_map__426__1_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__mode_constraint_robdd__IntroducedFrom__pred__atomic_prodvars_map__426__1_4_0_i2);
	}
	if (MR_PTAG_TESTR(MR_sv(1),2)) {
		MR_GOTO_LAB(check_hlds__mode_constraint_robdd__IntroducedFrom__pred__atomic_prodvars_map__426__1_4_0_i2);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_tfield(2, MR_tempr1, 0);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__goal_path, goal_id);
	MR_r2 = MR_tfield(2, MR_tempr1, 1);
	MR_r3 = MR_sv(2);
	}
	MR_np_call_localret_ent(stack__push_3_0,
		check_hlds__mode_constraint_robdd__IntroducedFrom__pred__atomic_prodvars_map__426__1_4_0_i7);
MR_def_label(check_hlds__mode_constraint_robdd__IntroducedFrom__pred__atomic_prodvars_map__426__1_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,5);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,6);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(2);
	MR_np_call_localret_ent(map__search_3_0,
		check_hlds__mode_constraint_robdd__IntroducedFrom__pred__atomic_prodvars_map__426__1_4_0_i9);
MR_def_label(check_hlds__mode_constraint_robdd__IntroducedFrom__pred__atomic_prodvars_map__426__1_4_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__mode_constraint_robdd__IntroducedFrom__pred__atomic_prodvars_map__426__1_4_0_i8);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(parse_tree__set_of_var__insert_3_0,
		check_hlds__mode_constraint_robdd__IntroducedFrom__pred__atomic_prodvars_map__426__1_4_0_i11);
MR_def_label(check_hlds__mode_constraint_robdd__IntroducedFrom__pred__atomic_prodvars_map__426__1_4_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,5);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,6);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_tempr1;
	MR_r5 = MR_sv(3);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(map__det_update_4_0);
	}
MR_def_label(check_hlds__mode_constraint_robdd__IntroducedFrom__pred__atomic_prodvars_map__426__1_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(fn__parse_tree__set_of_var__make_singleton_1_0,
		check_hlds__mode_constraint_robdd__IntroducedFrom__pred__atomic_prodvars_map__426__1_4_0_i13);
MR_def_label(check_hlds__mode_constraint_robdd__IntroducedFrom__pred__atomic_prodvars_map__426__1_4_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,5);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,6);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_tempr1;
	MR_r5 = MR_sv(3);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(map__det_insert_4_0);
	}
MR_def_label(check_hlds__mode_constraint_robdd__IntroducedFrom__pred__atomic_prodvars_map__426__1_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_decr_sp_and_return(4);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__mode_constraint_robdd_module59)
	MR_init_entry1(f_99_104_101_99_107_95_104_108_100_115_95_95_109_111_100_101_95_99_111_110_115_116_114_97_105_110_116_95_114_111_98_100_100_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_85_110_105_102_121_95_95_95_99_104_101_99_107_95_104_108_100_115_95_95_109_111_100_101_95_99_111_110_115_116_114_97_105_110_116_95_114_111_98_100_100_95_95_109_99_95_116_121_112_101_95_48_95_95_91_49_44_32_50_93_95_48_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__f_99_104_101_99_107_95_104_108_100_115_95_95_109_111_100_101_95_99_111_110_115_116_114_97_105_110_116_95_114_111_98_100_100_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_85_110_105_102_121_95_95_95_99_104_101_99_107_95_104_108_100_115_95_95_109_111_100_101_95_99_111_110_115_116_114_97_105_110_116_95_114_111_98_100_100_95_95_109_99_95_116_121_112_101_95_48_95_95_91_49_44_32_50_93_95_48_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__pred____Unify___check_hlds__mode_constraint_robdd__mc_type_0__[1, 2]_0'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__f_99_104_101_99_107_95_104_108_100_115_95_95_109_111_100_101_95_99_111_110_115_116_114_97_105_110_116_95_114_111_98_100_100_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_85_110_105_102_121_95_95_95_99_104_101_99_107_95_104_108_100_115_95_95_109_111_100_101_95_99_111_110_115_116_114_97_105_110_116_95_114_111_98_100_100_95_95_109_99_95_116_121_112_101_95_48_95_95_91_49_44_32_50_93_95_48_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__mode_constraint_robdd_module60)
	MR_init_entry1(f_99_104_101_99_107_95_104_108_100_115_95_95_109_111_100_101_95_99_111_110_115_116_114_97_105_110_116_95_114_111_98_100_100_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_67_111_109_112_97_114_101_95_95_95_99_104_101_99_107_95_104_108_100_115_95_95_109_111_100_101_95_99_111_110_115_116_114_97_105_110_116_95_114_111_98_100_100_95_95_109_99_95_116_121_112_101_95_48_95_95_91_50_44_32_51_93_95_48_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__f_99_104_101_99_107_95_104_108_100_115_95_95_109_111_100_101_95_99_111_110_115_116_114_97_105_110_116_95_114_111_98_100_100_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_67_111_109_112_97_114_101_95_95_95_99_104_101_99_107_95_104_108_100_115_95_95_109_111_100_101_95_99_111_110_115_116_114_97_105_110_116_95_114_111_98_100_100_95_95_109_99_95_116_121_112_101_95_48_95_95_91_50_44_32_51_93_95_48_3_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__pred____Compare___check_hlds__mode_constraint_robdd__mc_type_0__[2, 3]_0'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__f_99_104_101_99_107_95_104_108_100_115_95_95_109_111_100_101_95_99_111_110_115_116_114_97_105_110_116_95_114_111_98_100_100_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_67_111_109_112_97_114_101_95_95_95_99_104_101_99_107_95_104_108_100_115_95_95_109_111_100_101_95_99_111_110_115_116_114_97_105_110_116_95_114_111_98_100_100_95_95_109_99_95_116_121_112_101_95_48_95_95_91_50_44_32_51_93_95_48_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__mode_constraint_robdd_module61)
	MR_init_entry1(fn__f_99_104_101_99_107_95_104_108_100_115_95_95_109_111_100_101_95_99_111_110_115_116_114_97_105_110_116_95_114_111_98_100_100_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_102_117_110_99_95_95_103_101_116_95_105_110_116_101_114_101_115_116_105_110_103_95_118_97_114_115_95_102_111_114_95_112_114_101_100_95_95_51_48_56_95_95_51_95_95_104_111_49_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_93_95_48_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__f_99_104_101_99_107_95_104_108_100_115_95_95_109_111_100_101_95_99_111_110_115_116_114_97_105_110_116_95_114_111_98_100_100_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_102_117_110_99_95_95_103_101_116_95_105_110_116_101_114_101_115_116_105_110_103_95_118_97_114_115_95_102_111_114_95_112_114_101_100_95_95_51_48_56_95_95_51_95_95_104_111_49_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_93_95_48_3_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__func__IntroducedFrom__func__get_interesting_vars_for_pred__308__3__ho1__[1, 2, 3, 4, 5]_0'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__f_99_104_101_99_107_95_104_108_100_115_95_95_109_111_100_101_95_99_111_110_115_116_114_97_105_110_116_95_114_111_98_100_100_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_102_117_110_99_95_95_103_101_116_95_105_110_116_101_114_101_115_116_105_110_103_95_118_97_114_115_95_102_111_114_95_112_114_101_100_95_95_51_48_56_95_95_51_95_95_104_111_49_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_93_95_48_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,1);
	MR_tempr2 = MR_r2;
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,2);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,0,3);
	MR_r4 = MR_tempr1;
	MR_r5 = (MR_Word) MR_TAG_COMMON(0,6,1);
	MR_r6 = MR_tempr2;
	MR_np_tailcall_ent(fn__std_util__compose_3_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

static void mercury__check_hlds__mode_constraint_robdd_maybe_bunch_0(void)
{
	check_hlds__mode_constraint_robdd_module0();
	check_hlds__mode_constraint_robdd_module1();
	check_hlds__mode_constraint_robdd_module2();
	check_hlds__mode_constraint_robdd_module3();
	check_hlds__mode_constraint_robdd_module4();
	check_hlds__mode_constraint_robdd_module5();
	check_hlds__mode_constraint_robdd_module6();
	check_hlds__mode_constraint_robdd_module7();
	check_hlds__mode_constraint_robdd_module8();
	check_hlds__mode_constraint_robdd_module9();
	check_hlds__mode_constraint_robdd_module10();
	check_hlds__mode_constraint_robdd_module11();
	check_hlds__mode_constraint_robdd_module12();
	check_hlds__mode_constraint_robdd_module13();
	check_hlds__mode_constraint_robdd_module14();
	check_hlds__mode_constraint_robdd_module15();
	check_hlds__mode_constraint_robdd_module16();
	check_hlds__mode_constraint_robdd_module17();
	check_hlds__mode_constraint_robdd_module18();
	check_hlds__mode_constraint_robdd_module19();
	check_hlds__mode_constraint_robdd_module20();
	check_hlds__mode_constraint_robdd_module21();
	check_hlds__mode_constraint_robdd_module22();
	check_hlds__mode_constraint_robdd_module23();
	check_hlds__mode_constraint_robdd_module24();
	check_hlds__mode_constraint_robdd_module25();
	check_hlds__mode_constraint_robdd_module26();
	check_hlds__mode_constraint_robdd_module27();
	check_hlds__mode_constraint_robdd_module28();
	check_hlds__mode_constraint_robdd_module29();
	check_hlds__mode_constraint_robdd_module30();
	check_hlds__mode_constraint_robdd_module31();
	check_hlds__mode_constraint_robdd_module32();
	check_hlds__mode_constraint_robdd_module33();
	check_hlds__mode_constraint_robdd_module34();
	check_hlds__mode_constraint_robdd_module35();
	check_hlds__mode_constraint_robdd_module36();
	check_hlds__mode_constraint_robdd_module37();
	check_hlds__mode_constraint_robdd_module38();
	check_hlds__mode_constraint_robdd_module39();
}

static void mercury__check_hlds__mode_constraint_robdd_maybe_bunch_1(void)
{
	check_hlds__mode_constraint_robdd_module40();
	check_hlds__mode_constraint_robdd_module41();
	check_hlds__mode_constraint_robdd_module42();
	check_hlds__mode_constraint_robdd_module43();
	check_hlds__mode_constraint_robdd_module44();
	check_hlds__mode_constraint_robdd_module45();
	check_hlds__mode_constraint_robdd_module46();
	check_hlds__mode_constraint_robdd_module47();
	check_hlds__mode_constraint_robdd_module48();
	check_hlds__mode_constraint_robdd_module49();
	check_hlds__mode_constraint_robdd_module50();
	check_hlds__mode_constraint_robdd_module51();
	check_hlds__mode_constraint_robdd_module52();
	check_hlds__mode_constraint_robdd_module53();
	check_hlds__mode_constraint_robdd_module54();
	check_hlds__mode_constraint_robdd_module55();
	check_hlds__mode_constraint_robdd_module56();
	check_hlds__mode_constraint_robdd_module57();
	check_hlds__mode_constraint_robdd_module58();
	check_hlds__mode_constraint_robdd_module59();
	check_hlds__mode_constraint_robdd_module60();
	check_hlds__mode_constraint_robdd_module61();
}

/* suppress gcc -Wmissing-decls warnings */
void mercury__check_hlds__mode_constraint_robdd__init(void);
void mercury__check_hlds__mode_constraint_robdd__init_type_tables(void);
void mercury__check_hlds__mode_constraint_robdd__init_debugger(void);
#ifdef MR_DEEP_PROFILING
void mercury__check_hlds__mode_constraint_robdd__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp);
#endif
#ifdef MR_RECORD_TERM_SIZES
void mercury__check_hlds__mode_constraint_robdd__init_complexity_procs(void);
#endif
#ifdef MR_THREADSCOPE
void mercury__check_hlds__mode_constraint_robdd__init_threadscope_string_table(void);
#endif

void mercury__check_hlds__mode_constraint_robdd__init(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	mercury__check_hlds__mode_constraint_robdd_maybe_bunch_0();
	mercury__check_hlds__mode_constraint_robdd_maybe_bunch_1();
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_check_hlds__mode_constraint_robdd__type_ctor_info_lambda_path_0,
		check_hlds__mode_constraint_robdd__lambda_path_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0,
		check_hlds__mode_constraint_robdd__mc_type_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_check_hlds__mode_constraint_robdd__type_ctor_info_mode_constraint_0,
		check_hlds__mode_constraint_robdd__mode_constraint_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_check_hlds__mode_constraint_robdd__type_ctor_info_mode_constraint_info_0,
		check_hlds__mode_constraint_robdd__mode_constraint_info_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_check_hlds__mode_constraint_robdd__type_ctor_info_mode_constraint_var_0,
		check_hlds__mode_constraint_robdd__mode_constraint_var_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_check_hlds__mode_constraint_robdd__type_ctor_info_mode_constraint_varmap_0,
		check_hlds__mode_constraint_robdd__mode_constraint_varmap_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_check_hlds__mode_constraint_robdd__type_ctor_info_mode_constraint_vars_0,
		check_hlds__mode_constraint_robdd__mode_constraint_vars_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_check_hlds__mode_constraint_robdd__type_ctor_info_prodvars_map_0,
		check_hlds__mode_constraint_robdd__prodvars_map_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_check_hlds__mode_constraint_robdd__type_ctor_info_prog_var_and_level_0,
		check_hlds__mode_constraint_robdd__prog_var_and_level_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_check_hlds__mode_constraint_robdd__type_ctor_info_rep_var_0,
		check_hlds__mode_constraint_robdd__rep_var_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_check_hlds__mode_constraint_robdd__type_ctor_info_robdd_var_0,
		check_hlds__mode_constraint_robdd__robdd_var_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_check_hlds__mode_constraint_robdd__type_ctor_info_threshold_0,
		check_hlds__mode_constraint_robdd__threshold_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_check_hlds__mode_constraint_robdd__type_ctor_info_varmap_key_0,
		check_hlds__mode_constraint_robdd__varmap_key_0_0);
	mercury__check_hlds__mode_constraint_robdd__init_debugger();
}

void mercury__check_hlds__mode_constraint_robdd__init_type_tables(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	{
		MR_register_type_ctor_info(
		&mercury_data_check_hlds__mode_constraint_robdd__type_ctor_info_lambda_path_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_check_hlds__mode_constraint_robdd__type_ctor_info_mode_constraint_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_check_hlds__mode_constraint_robdd__type_ctor_info_mode_constraint_info_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_check_hlds__mode_constraint_robdd__type_ctor_info_mode_constraint_var_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_check_hlds__mode_constraint_robdd__type_ctor_info_mode_constraint_varmap_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_check_hlds__mode_constraint_robdd__type_ctor_info_mode_constraint_vars_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_check_hlds__mode_constraint_robdd__type_ctor_info_prodvars_map_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_check_hlds__mode_constraint_robdd__type_ctor_info_prog_var_and_level_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_check_hlds__mode_constraint_robdd__type_ctor_info_rep_var_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_check_hlds__mode_constraint_robdd__type_ctor_info_robdd_var_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_check_hlds__mode_constraint_robdd__type_ctor_info_threshold_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_check_hlds__mode_constraint_robdd__type_ctor_info_varmap_key_0);
	}
}


void mercury__check_hlds__mode_constraint_robdd__init_debugger(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}

#ifdef MR_DEEP_PROFILING

void mercury__check_hlds__mode_constraint_robdd__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp)
{
	MR_write_out_module_proc_reps_start(procrep_fp, &mercury_data__module_layout__check_hlds__mode_constraint_robdd);
	MR_write_out_module_proc_reps_end(procrep_fp);
}

#endif

#ifdef MR_RECORD_TERM_SIZES

void mercury__check_hlds__mode_constraint_robdd__init_complexity_procs(void)
{
}

#endif

#ifdef MR_THREADSCOPE

void mercury__check_hlds__mode_constraint_robdd__init_threadscope_string_table(void)
{
}

#endif

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;
