/*
** Automatically generated from `instmap.m'
** by the Mercury compiler,
** version rotd-2010-03-01, configured for x86_64-unknown-linux-gnu.
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
INIT mercury__hlds__instmap__init
ENDINIT
*/

#define MR_ALLOW_RESET
#include "mercury_imp.h"
#line 136 "../library/io.int2"
#include "io.mh"

#line 28 "hlds.instmap.c"
#line 144 "../library/io.int2"
#include "string.mh"

#line 32 "hlds.instmap.c"
#line 29 "../library/bitmap.int2"
#include "bitmap.mh"

#line 36 "hlds.instmap.c"
#line 28 "../library/time.int2"
#include "time.mh"

#line 40 "hlds.instmap.c"
#line 33 "../mdbcomp/mdbcomp.rtti_access.int2"
#include "mdbcomp.rtti_access.mh"

#line 44 "hlds.instmap.c"
#line 31 "../library/array.int2"
#include "array.mh"

#line 48 "hlds.instmap.c"
#line 49 "hlds.instmap.c"
#include "hlds.instmap.mh"

#line 52 "hlds.instmap.c"
#line 53 "hlds.instmap.c"
#ifndef HLDS__INSTMAP_DECL_GUARD
#define HLDS__INSTMAP_DECL_GUARD

#line 57 "hlds.instmap.c"
#line 58 "hlds.instmap.c"

#endif
#line 61 "hlds.instmap.c"

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
	MR_Integer f1;
	MR_Integer f2;
	MR_Word * f3;
};
MR_STATIC_LINKAGE const struct mercury_type_1 mercury_common_1[];

struct mercury_type_2 {
	MR_Word * f1[3];
};
MR_STATIC_LINKAGE const struct mercury_type_2 mercury_common_2[];

struct mercury_type_3 {
	MR_Word * f1;
	MR_Word * f2;
	MR_Integer f3;
	MR_Word * f4;
	MR_Word * f5;
};
MR_STATIC_LINKAGE const struct mercury_type_3 mercury_common_3[];

struct mercury_type_4 {
	MR_Word * f1;
	MR_Code * f2;
	MR_Integer f3;
};
MR_STATIC_LINKAGE const struct mercury_type_4 mercury_common_4[];

struct mercury_type_5 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[5];
};
MR_STATIC_LINKAGE const struct mercury_type_5 mercury_common_5[];

struct mercury_type_6 {
	MR_Word * f1;
	MR_Integer f2;
};
MR_STATIC_LINKAGE const struct mercury_type_6 mercury_common_6[];

struct mercury_type_7 {
	MR_Word * f1;
	MR_Word * f2;
	MR_Integer f3;
	MR_Word * f4;
};
MR_STATIC_LINKAGE const struct mercury_type_7 mercury_common_7[];

struct mercury_type_8 {
	MR_Word * f1;
};
MR_STATIC_LINKAGE const struct mercury_type_8 mercury_common_8[];

struct mercury_type_9 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[3];
};
MR_STATIC_LINKAGE const struct mercury_type_9 mercury_common_9[];

extern const MR_TypeCtorInfo_Struct
	mercury_data_hlds__instmap__type_ctor_info_instmap_0,
	mercury_data_hlds__instmap__type_ctor_info_instmap_delta_0,
	mercury_data_hlds__instmap__type_ctor_info_instmapping_0,
	mercury_data_hlds__instmap__type_ctor_info_overlay_how_0;
MR_decl_label10(f_104_108_100_115_95_95_105_110_115_116_109_97_112_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_110_105_102_121_95_105_110_115_116_109_97_112_95_100_101_108_116_97_95_95_91_49_93_95_48_7_0, 3,28,7,8,9,10,11,12,13,14)
MR_decl_label10(f_104_108_100_115_95_95_105_110_115_116_109_97_112_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_110_105_102_121_95_105_110_115_116_109_97_112_112_105_110_103_95_100_101_108_116_97_95_50_95_95_91_50_93_95_48_8_0, 48,3,6,9,12,14,11,8,4,21)
MR_decl_label3(f_104_108_100_115_95_95_105_110_115_116_109_97_112_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_110_105_102_121_95_105_110_115_116_109_97_112_112_105_110_103_95_100_101_108_116_97_95_50_95_95_91_50_93_95_48_8_0, 23,19,52)
MR_decl_label3(hlds__instmap__apply_instmap_delta_3_0, 3,21,7)
MR_decl_label8(hlds__instmap__bind_inst_to_functors_others_6_0, 24,4,5,6,8,7,11,12)
MR_decl_label8(hlds__instmap__bind_var_to_functor_7_0, 2,3,4,5,7,6,10,11)
MR_decl_label10(hlds__instmap__bind_var_to_functors_8_0, 2,3,4,5,7,6,10,11,13,15)
MR_decl_label2(hlds__instmap__bind_var_to_functors_8_0, 14,17)
MR_decl_label5(hlds__instmap__compute_instmap_delta_4_0, 3,23,7,8,9)
MR_decl_label10(hlds__instmap__compute_instmap_delta_2_4_0, 39,4,7,5,9,12,10,14,17,15)
MR_decl_label4(hlds__instmap__get_reachable_instmaps_2_0, 18,3,5,7)
MR_decl_label1(hlds__instmap__init_reachable_1_0, 3)
MR_decl_label2(hlds__instmap__instmap_bound_vars_3_0, 19,8)
MR_decl_label2(hlds__instmap__instmap_bound_vars_2_5_0, 4,2)
MR_decl_label1(hlds__instmap__instmap_changed_vars_5_0, 2)
MR_decl_label7(hlds__instmap__instmap_changed_vars_2_6_0, 30,6,7,8,10,13,12)
MR_decl_label10(hlds__instmap__instmap_delta_apply_instmap_delta_4_0, 3,53,9,7,13,11,17,18,15,22)
MR_decl_label4(hlds__instmap__instmap_delta_apply_sub_4_0, 16,5,6,7)
MR_decl_label4(hlds__instmap__instmap_delta_apply_sub_2_5_0, 12,3,4,6)
MR_decl_label10(hlds__instmap__instmap_delta_bind_var_to_functor_8_0, 57,4,7,5,9,10,11,12,14,13)
MR_decl_label5(hlds__instmap__instmap_delta_bind_var_to_functor_8_0, 17,22,24,27,19)
MR_decl_label10(hlds__instmap__instmap_delta_bind_var_to_functors_9_0, 67,4,7,5,9,10,11,12,14,13)
MR_decl_label9(hlds__instmap__instmap_delta_bind_var_to_functors_9_0, 17,18,20,22,21,28,30,33,25)
MR_decl_label2(hlds__instmap__instmap_delta_changed_vars_2_0, 17,7)
MR_decl_label2(hlds__instmap__instmap_delta_delete_vars_3_0, 14,5)
MR_decl_label1(hlds__instmap__instmap_delta_from_mode_list_4_0, 3)
MR_decl_label7(hlds__instmap__instmap_delta_from_mode_list_2_5_0, 40,3,9,12,10,15,8)
MR_decl_label1(hlds__instmap__instmap_delta_init_reachable_1_0, 3)
MR_decl_label3(hlds__instmap__instmap_delta_insert_var_4_0, 3,22,7)
MR_decl_label1(hlds__instmap__instmap_delta_is_reachable_1_0, 1)
MR_decl_label1(hlds__instmap__instmap_delta_is_unreachable_1_0, 1)
MR_decl_label2(hlds__instmap__instmap_delta_map_foldl_5_0, 14,5)
MR_decl_label2(hlds__instmap__instmap_delta_no_output_vars_5_0, 5,2)
MR_decl_label9(hlds__instmap__instmap_delta_no_output_vars_2_5_0, 36,4,7,9,10,5,14,2,1)
MR_decl_label2(hlds__instmap__instmap_delta_restrict_3_0, 14,5)
MR_decl_label1(hlds__instmap__instmap_delta_search_var_3_0, 3)
MR_decl_label3(hlds__instmap__instmap_delta_set_var_4_0, 3,22,7)
MR_decl_label3(hlds__instmap__instmap_delta_set_vars_same_4_0, 16,6,7)
MR_decl_label1(hlds__instmap__instmap_delta_to_assoc_list_2_0, 3)
MR_decl_label1(hlds__instmap__instmap_is_reachable_1_0, 1)
MR_decl_label1(hlds__instmap__instmap_is_unreachable_1_0, 1)
MR_decl_label3(hlds__instmap__instmap_lookup_var_3_0, 20,6,4)
MR_decl_label3(hlds__instmap__instmap_lookup_vars_3_0, 14,4,5)
MR_decl_label10(hlds__instmap__instmap_merge_5_0, 2,3,4,9,10,11,12,24,14,16)
MR_decl_label1(hlds__instmap__instmap_merge_5_0, 5)
MR_decl_label2(hlds__instmap__instmap_restrict_3_0, 14,5)
MR_decl_label2(hlds__instmap__instmap_set_var_4_0, 14,5)
MR_decl_label2(hlds__instmap__instmap_set_vars_3_0, 13,4)
MR_decl_label2(hlds__instmap__instmap_set_vars_corresponding_4_0, 13,4)
MR_decl_label3(hlds__instmap__instmap_set_vars_same_4_0, 16,6,7)
MR_decl_label1(hlds__instmap__instmap_to_assoc_list_2_0, 3)
MR_decl_label10(hlds__instmap__instmap_unify_4_0, 10,11,4,13,3,15,22,24,25,26)
MR_decl_label4(hlds__instmap__instmap_unify_4_0, 49,28,30,19)
MR_decl_label1(hlds__instmap__instmap_vars_2_0, 2)
MR_decl_label1(hlds__instmap__instmap_vars_list_2_0, 3)
MR_decl_label4(hlds__instmap__instmapping_set_vars_3_0, 14,3,6,8)
MR_decl_label6(hlds__instmap__instmapping_set_vars_corresponding_4_0, 29,5,3,11,13,8)
MR_decl_label3(hlds__instmap__instmapping_set_vars_same_4_0, 11,3,5)
MR_decl_label10(hlds__instmap__merge_instmap_delta_8_0, 3,28,7,8,9,10,11,12,13,14)
MR_decl_label4(hlds__instmap__merge_instmap_deltas_7_0, 18,2,6,4)
MR_decl_label10(hlds__instmap__merge_instmap_deltas_2_8_0, 34,3,5,9,8,13,14,12,16,17)
MR_decl_label1(hlds__instmap__merge_instmap_deltas_2_8_0, 18)
MR_decl_label10(hlds__instmap__merge_instmapping_delta_2_9_0, 47,3,6,4,8,9,12,10,14,15)
MR_decl_label7(hlds__instmap__merge_instmapping_delta_2_9_0, 18,20,22,16,23,26,50)
MR_decl_label8(hlds__instmap__merge_insts_of_vars_8_0, 27,4,6,8,9,14,11,15)
MR_decl_label5(hlds__instmap__merge_var_insts_5_0, 26,3,7,10,5)
MR_decl_label10(hlds__instmap__merge_var_insts_pass_8_0, 85,3,5,11,9,8,18,20,16,25)
MR_decl_label3(hlds__instmap__merge_var_insts_pass_8_0, 27,29,24)
MR_decl_label3(hlds__instmap__pre_lambda_update_5_0, 2,4,5)
MR_decl_label6(hlds__instmap__unify_insts_of_vars_8_0, 24,4,5,6,8,13)
MR_decl_label7(hlds__instmap__unify_var_insts_10_0, 31,3,6,8,10,9,4)
MR_decl_label1(hlds__instmap__var_is_any_in_instmap_3_0, 2)
MR_decl_label6(hlds__instmap__var_is_bound_in_instmap_delta_4_0, 6,4,8,9,12,1)
MR_decl_label1(hlds__instmap__var_is_ground_in_instmap_3_0, 2)
MR_decl_label1(fn__hlds__instmap__instmap_delta_bind_no_var_0_0, 3)
MR_decl_label1(fn__hlds__instmap__instmap_delta_bind_var_1_0, 6)
MR_decl_label2(fn__hlds__instmap__instmap_delta_bind_vars_1_0, 5,6)
MR_decl_label1(fn__hlds__instmap__instmap_delta_from_assoc_list_1_0, 3)
MR_decl_label1(fn__hlds__instmap__instmap_from_assoc_list_1_0, 3)
MR_decl_label3(__Unify___hlds__instmap__instmap_0_0, 13,5,1)
MR_decl_label4(__Compare___hlds__instmap__instmap_0_0, 19,7,5,9)
MR_def_extern_entry(hlds__instmap__init_reachable_1_0)
MR_def_extern_entry(hlds__instmap__init_unreachable_1_0)
MR_def_extern_entry(hlds__instmap__instmap_delta_init_reachable_1_0)
MR_def_extern_entry(hlds__instmap__instmap_delta_init_unreachable_1_0)
MR_def_extern_entry(hlds__instmap__instmap_is_reachable_1_0)
MR_def_extern_entry(hlds__instmap__instmap_is_unreachable_1_0)
MR_def_extern_entry(hlds__instmap__instmap_delta_is_reachable_1_0)
MR_def_extern_entry(hlds__instmap__instmap_delta_is_unreachable_1_0)
MR_def_extern_entry(fn__hlds__instmap__instmap_from_assoc_list_1_0)
MR_def_extern_entry(fn__hlds__instmap__instmap_delta_from_assoc_list_1_0)
MR_def_extern_entry(hlds__instmap__instmap_delta_set_var_4_0)
MR_decl_static(hlds__instmap__instmap_delta_from_mode_list_2_5_0)
MR_def_extern_entry(hlds__instmap__instmap_delta_from_mode_list_4_0)
MR_def_extern_entry(fn__hlds__instmap__instmap_delta_bind_no_var_0_0)
MR_def_extern_entry(fn__hlds__instmap__instmap_delta_bind_var_1_0)
MR_def_extern_entry(fn__hlds__instmap__instmap_delta_bind_vars_1_0)
MR_def_extern_entry(hlds__instmap__instmap_vars_list_2_0)
MR_def_extern_entry(hlds__instmap__instmap_vars_2_0)
MR_def_extern_entry(hlds__instmap__instmap_delta_changed_vars_2_0)
MR_def_extern_entry(hlds__instmap__instmap_bound_vars_3_0)
MR_def_extern_entry(hlds__instmap__instmap_lookup_var_3_0)
MR_decl_static(hlds__instmap__instmap_changed_vars_2_6_0)
MR_def_extern_entry(hlds__instmap__instmap_changed_vars_5_0)
MR_def_extern_entry(hlds__instmap__instmap_delta_search_var_3_0)
MR_def_extern_entry(hlds__instmap__instmap_lookup_vars_3_0)
MR_def_extern_entry(hlds__instmap__instmap_delta_insert_var_4_0)
MR_def_extern_entry(hlds__instmap__instmap_set_var_4_0)
MR_decl_static(hlds__instmap__instmapping_set_vars_3_0)
MR_def_extern_entry(hlds__instmap__instmap_set_vars_3_0)
MR_decl_static(hlds__instmap__instmapping_set_vars_corresponding_4_0)
MR_def_extern_entry(hlds__instmap__instmap_set_vars_corresponding_4_0)
MR_decl_static(hlds__instmap__instmapping_set_vars_same_4_0)
MR_def_extern_entry(hlds__instmap__instmap_set_vars_same_4_0)
MR_def_extern_entry(hlds__instmap__instmap_delta_set_vars_same_4_0)
MR_def_extern_entry(hlds__instmap__instmap_delta_bind_var_to_functor_8_0)
MR_decl_static(hlds__instmap__bind_inst_to_functors_others_6_0)
MR_decl_static(hlds__instmap__merge_var_insts_pass_8_0)
MR_decl_static(hlds__instmap__merge_var_insts_5_0)
MR_def_extern_entry(hlds__instmap__instmap_delta_bind_var_to_functors_9_0)
MR_def_extern_entry(hlds__instmap__bind_var_to_functor_7_0)
MR_def_extern_entry(hlds__instmap__bind_var_to_functors_8_0)
MR_def_extern_entry(hlds__instmap__apply_instmap_delta_3_0)
MR_def_extern_entry(hlds__instmap__pre_lambda_update_5_0)
MR_decl_static(hlds__instmap__compute_instmap_delta_2_4_0)
MR_def_extern_entry(hlds__instmap__compute_instmap_delta_4_0)
MR_def_extern_entry(hlds__instmap__instmap_delta_apply_instmap_delta_4_0)
MR_decl_static(hlds__instmap__get_reachable_instmaps_2_0)
MR_decl_static(hlds__instmap__merge_insts_of_vars_8_0)
MR_def_extern_entry(hlds__instmap__instmap_merge_5_0)
MR_decl_static(hlds__instmap__unify_var_insts_10_0)
MR_decl_static(hlds__instmap__unify_insts_of_vars_8_0)
MR_def_extern_entry(hlds__instmap__instmap_unify_4_0)
MR_def_extern_entry(hlds__instmap__instmap_restrict_3_0)
MR_def_extern_entry(hlds__instmap__instmap_delta_restrict_3_0)
MR_def_extern_entry(hlds__instmap__instmap_delta_delete_vars_3_0)
MR_decl_static(hlds__instmap__instmap_delta_no_output_vars_2_5_0)
MR_def_extern_entry(hlds__instmap__instmap_delta_no_output_vars_5_0)
MR_decl_static(hlds__instmap__merge_instmapping_delta_2_9_0)
MR_def_extern_entry(hlds__instmap__merge_instmap_delta_8_0)
MR_decl_static(hlds__instmap__merge_instmap_deltas_2_8_0)
MR_def_extern_entry(hlds__instmap__merge_instmap_deltas_7_0)
MR_def_extern_entry(hlds__instmap__unify_instmap_delta_7_0)
MR_decl_static(hlds__instmap__instmap_delta_apply_sub_2_5_0)
MR_def_extern_entry(hlds__instmap__instmap_delta_apply_sub_4_0)
MR_def_extern_entry(hlds__instmap__instmap_apply_sub_4_0)
MR_def_extern_entry(hlds__instmap__instmap_to_assoc_list_2_0)
MR_def_extern_entry(hlds__instmap__instmap_delta_to_assoc_list_2_0)
MR_def_extern_entry(hlds__instmap__instmap_delta_map_foldl_5_0)
MR_def_extern_entry(hlds__instmap__var_is_ground_in_instmap_3_0)
MR_def_extern_entry(hlds__instmap__var_is_any_in_instmap_3_0)
MR_def_extern_entry(hlds__instmap__var_is_bound_in_instmap_delta_4_0)
MR_decl_static(fn__hlds__instmap__pair_with_ground_1_0)
MR_decl_static(hlds__instmap__instmap_bound_vars_2_5_0)
MR_decl_static(hlds__instmap__lookup_var_in_instmap_3_0)
MR_def_extern_entry(__Unify___hlds__instmap__instmap_0_0)
MR_def_extern_entry(__Compare___hlds__instmap__instmap_0_0)
MR_def_extern_entry(__Unify___hlds__instmap__instmap_delta_0_0)
MR_def_extern_entry(__Compare___hlds__instmap__instmap_delta_0_0)
MR_decl_static(__Unify___hlds__instmap__instmapping_0_0)
MR_decl_static(__Compare___hlds__instmap__instmapping_0_0)
MR_def_extern_entry(__Unify___hlds__instmap__overlay_how_0_0)
MR_def_extern_entry(__Compare___hlds__instmap__overlay_how_0_0)
MR_decl_static(hlds__instmap__IntroducedFrom__pred__instmap_set_vars_same__602__1_2_0)
MR_decl_static(hlds__instmap__IntroducedFrom__pred__instmap_delta_set_vars_same__631__1_2_0)
MR_decl_static(hlds__instmap__IntroducedFrom__pred__instmapping_set_vars__562__1_2_0)
MR_decl_static(hlds__instmap__IntroducedFrom__pred__instmapping_set_vars_corresponding__585__1_2_0)
MR_def_extern_entry(f_104_108_100_115_95_95_105_110_115_116_109_97_112_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_110_105_102_121_95_105_110_115_116_109_97_112_95_100_101_108_116_97_95_95_91_49_93_95_48_7_0)
MR_decl_static(f_104_108_100_115_95_95_105_110_115_116_109_97_112_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_110_105_102_121_95_105_110_115_116_109_97_112_112_105_110_103_95_100_101_108_116_97_95_50_95_95_91_50_93_95_48_8_0)

extern const MR_TypeCtorInfo_Struct mercury_data_term__type_ctor_info_var_1;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_prog_var_type_0;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_prog_var_type_0;
extern const MR_TypeCtorInfo_Struct mercury_data_term__type_ctor_info_var_1;
extern const MR_TypeCtorInfo_Struct mercury_data_set_ordlist__type_ctor_info_set_ordlist_1;
static const struct mercury_type_0 mercury_common_0[5] =
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
MR_CTOR1_ADDR(term, var),
MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type)
}
},
{
{
MR_CTOR1_ADDR(set_ordlist, set_ordlist),
MR_COMMON(0,2)
}
},
{
{
MR_CTOR1_ADDR(set_ordlist, set_ordlist),
MR_TAG_COMMON(0,0,0)
}
},
};

static const struct mercury_type_1 mercury_common_1[1] =
{
{
1,
0,
MR_tbmkword(0, 0)
},
};

extern const MR_TypeCtorInfo_Struct mercury_data_pair__type_ctor_info_pair_2;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_mer_inst_0;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_mer_inst_0;
static const struct mercury_type_2 mercury_common_2[3] =
{
{
{
MR_CTOR_ADDR(pair, pair, 2),
MR_TAG_COMMON(0,0,0),
MR_CTOR0_ADDR(parse_tree__prog_data, mer_inst)
}
},
{
{
MR_CTOR_ADDR(pair, pair, 2),
MR_COMMON(0,2),
MR_CTOR0_ADDR(parse_tree__prog_data, mer_inst)
}
},
{
{
MR_CTOR_ADDR(pair, pair, 2),
MR_CTOR0_ADDR(hlds__instmap, instmap),
MR_TAG_COMMON(0,0,4)
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__fn__hlds__instmap__instmap_delta_bind_vars_1_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__hlds__instmap__instmapping_set_vars_3_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_mer_inst_0;
static const MR_UserClosureId
mercury_data__closure_layout__hlds__instmap__instmapping_set_vars_corresponding_4_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__hlds__instmap__instmap_set_vars_same_4_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__hlds__instmap__instmap_delta_set_vars_same_4_0_1;
static const struct mercury_type_3 mercury_common_3[5] =
{
{
(MR_Word *) &mercury_data__closure_layout__fn__hlds__instmap__instmap_delta_bind_vars_1_0_1,
(MR_Word *) (MR_Integer) 0,
2,
MR_COMMON(0,1),
MR_COMMON(2,1)
},
{
(MR_Word *) &mercury_data__closure_layout__hlds__instmap__instmapping_set_vars_3_0_1,
(MR_Word *) (MR_Integer) 0,
2,
MR_CTOR0_ADDR(parse_tree__prog_data, mer_inst),
MR_CTOR0_ADDR(parse_tree__prog_data, mer_inst)
},
{
(MR_Word *) &mercury_data__closure_layout__hlds__instmap__instmapping_set_vars_corresponding_4_0_1,
(MR_Word *) (MR_Integer) 0,
2,
MR_CTOR0_ADDR(parse_tree__prog_data, mer_inst),
MR_CTOR0_ADDR(parse_tree__prog_data, mer_inst)
},
{
(MR_Word *) &mercury_data__closure_layout__hlds__instmap__instmap_set_vars_same_4_0_1,
(MR_Word *) (MR_Integer) 0,
2,
MR_CTOR0_ADDR(parse_tree__prog_data, mer_inst),
MR_CTOR0_ADDR(parse_tree__prog_data, mer_inst)
},
{
(MR_Word *) &mercury_data__closure_layout__hlds__instmap__instmap_delta_set_vars_same_4_0_1,
(MR_Word *) (MR_Integer) 0,
2,
MR_CTOR0_ADDR(parse_tree__prog_data, mer_inst),
MR_CTOR0_ADDR(parse_tree__prog_data, mer_inst)
},
};

static const struct mercury_type_4 mercury_common_4[1] =
{
{
MR_COMMON(3,0),
MR_ENTRY_AP(fn__hlds__instmap__pair_with_ground_1_0),
0
},
};

static const MR_UserClosureId
mercury_data__closure_layout__hlds__instmap__instmap_bound_vars_3_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_module__type_ctor_info_module_info_0;
static const struct mercury_type_5 mercury_common_5[1] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__hlds__instmap__instmap_bound_vars_3_0_1,
(MR_Word *) (MR_Integer) 0
},
5,
{
MR_CTOR0_ADDR(hlds__hlds_module, module_info),
MR_COMMON(0,1),
MR_CTOR0_ADDR(parse_tree__prog_data, mer_inst),
MR_COMMON(0,3),
MR_COMMON(0,3)
}
},
};

extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_pred_0;
static const struct mercury_type_6 mercury_common_6[1] =
{
{
MR_CTOR0_ADDR(builtin, pred),
0
},
};

static const MR_UserClosureId
mercury_data__closure_layout__hlds__instmap__instmapping_set_vars_3_0_2;
static const MR_UserClosureId
mercury_data__closure_layout__hlds__instmap__instmapping_set_vars_corresponding_4_0_2;
static const MR_UserClosureId
mercury_data__closure_layout__hlds__instmap__instmap_set_vars_same_4_0_2;
static const MR_UserClosureId
mercury_data__closure_layout__hlds__instmap__instmap_delta_set_vars_same_4_0_2;
static const struct mercury_type_7 mercury_common_7[4] =
{
{
(MR_Word *) &mercury_data__closure_layout__hlds__instmap__instmapping_set_vars_3_0_2,
(MR_Word *) (MR_Integer) 0,
1,
MR_COMMON(6,0)
},
{
(MR_Word *) &mercury_data__closure_layout__hlds__instmap__instmapping_set_vars_corresponding_4_0_2,
(MR_Word *) (MR_Integer) 0,
1,
MR_COMMON(6,0)
},
{
(MR_Word *) &mercury_data__closure_layout__hlds__instmap__instmap_set_vars_same_4_0_2,
(MR_Word *) (MR_Integer) 0,
1,
MR_COMMON(6,0)
},
{
(MR_Word *) &mercury_data__closure_layout__hlds__instmap__instmap_delta_set_vars_same_4_0_2,
(MR_Word *) (MR_Integer) 0,
1,
MR_COMMON(6,0)
},
};

static const struct mercury_type_8 mercury_common_8[1] =
{
{
MR_tbmkword(0, 1)
},
};

static const MR_UserClosureId
mercury_data__closure_layout__hlds__instmap__merge_insts_of_vars_8_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__instmap__type_ctor_info_instmap_0;
static const struct mercury_type_9 mercury_common_9[1] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__hlds__instmap__merge_insts_of_vars_8_0_1,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_COMMON(0,1),
MR_CTOR0_ADDR(hlds__instmap, instmap),
MR_CTOR0_ADDR(parse_tree__prog_data, mer_inst)
}
},
};
extern const MR_TypeCtorInfo_Struct mercury_data_tree234__type_ctor_info_tree234_2;

static const MR_FA_TypeInfo_Struct1 mercury_data_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
	&mercury_data_term__type_ctor_info_var_1,
{	(MR_TypeInfo) &mercury_data_parse_tree__prog_data__type_ctor_info_prog_var_type_0
}};

static const MR_FA_TypeInfo_Struct2 mercury_data_tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_inst_0 = {
	&mercury_data_tree234__type_ctor_info_tree234_2,
{	(MR_TypeInfo) &mercury_data_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
	(MR_TypeInfo) &mercury_data_parse_tree__prog_data__type_ctor_info_mer_inst_0
}};

const MR_PseudoTypeInfo mercury_data_hlds__instmap__field_types_instmap_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_inst_0
};

static const MR_DuFunctorDesc mercury_data_hlds__instmap__du_functor_desc_instmap_0_0 = {
	"reachable",
	1,
	0,
	MR_SECTAG_NONE,
	1,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_hlds__instmap__field_types_instmap_0_0,
	NULL,
	NULL
};

static const MR_DuFunctorDesc mercury_data_hlds__instmap__du_functor_desc_instmap_0_1 = {
	"unreachable",
	0,
	0,
	MR_SECTAG_LOCAL,
	0,
	0,
	1,
	(MR_PseudoTypeInfo *) NULL,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_hlds__instmap__du_stag_ordered_instmap_0_0[] = {
	&mercury_data_hlds__instmap__du_functor_desc_instmap_0_1

};

const MR_DuFunctorDescPtr mercury_data_hlds__instmap__du_stag_ordered_instmap_0_1[] = {
	&mercury_data_hlds__instmap__du_functor_desc_instmap_0_0

};

const MR_DuPtagLayout mercury_data_hlds__instmap__du_ptag_ordered_instmap_0[] = {
	{ 1, MR_SECTAG_LOCAL,
	mercury_data_hlds__instmap__du_stag_ordered_instmap_0_0 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_hlds__instmap__du_stag_ordered_instmap_0_1 }

};

const MR_DuFunctorDescPtr mercury_data_hlds__instmap__du_name_ordered_instmap_0[] = {
	&mercury_data_hlds__instmap__du_functor_desc_instmap_0_0,
	&mercury_data_hlds__instmap__du_functor_desc_instmap_0_1
};

const MR_Integer mercury_data_hlds__instmap__functor_number_map_instmap_0[] = {
	0,
	1 };
	
const MR_TypeCtorInfo_Struct mercury_data_hlds__instmap__type_ctor_info_instmap_0 = {
	0,
	13,
	2,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___hlds__instmap__instmap_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___hlds__instmap__instmap_0_0)),
	"hlds.instmap",
	"instmap",
	{ (void *)mercury_data_hlds__instmap__du_name_ordered_instmap_0 },
	{ (void *)mercury_data_hlds__instmap__du_ptag_ordered_instmap_0 },
	2,
	4,
	mercury_data_hlds__instmap__functor_number_map_instmap_0
};
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__instmap__type_ctor_info_instmap_0;

const MR_TypeCtorInfo_Struct mercury_data_hlds__instmap__type_ctor_info_instmap_delta_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_EQUIV_GROUND,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___hlds__instmap__instmap_delta_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___hlds__instmap__instmap_delta_0_0)),
	"hlds.instmap",
	"instmap_delta",
	{ 0 },
	{ (void *)&mercury_data_hlds__instmap__type_ctor_info_instmap_0 },
	-1,
	0,
	NULL
};

const MR_TypeCtorInfo_Struct mercury_data_hlds__instmap__type_ctor_info_instmapping_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_EQUIV_GROUND,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___hlds__instmap__instmapping_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___hlds__instmap__instmapping_0_0)),
	"hlds.instmap",
	"instmapping",
	{ 0 },
	{ (void *)&mercury_data_tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_inst_0 },
	-1,
	0,
	NULL
};

static const MR_EnumFunctorDesc mercury_data_hlds__instmap__enum_functor_desc_overlay_how_0_0 = {
	"large_base",
	0
};

static const MR_EnumFunctorDesc mercury_data_hlds__instmap__enum_functor_desc_overlay_how_0_1 = {
	"large_overlay",
	1
};

static const MR_EnumFunctorDesc mercury_data_hlds__instmap__enum_functor_desc_overlay_how_0_2 = {
	"test_size",
	2
};

const MR_EnumFunctorDescPtr mercury_data_hlds__instmap__enum_value_ordered_overlay_how_0[] = {
	&mercury_data_hlds__instmap__enum_functor_desc_overlay_how_0_0,
	&mercury_data_hlds__instmap__enum_functor_desc_overlay_how_0_1,
	&mercury_data_hlds__instmap__enum_functor_desc_overlay_how_0_2
};

const MR_EnumFunctorDescPtr mercury_data_hlds__instmap__enum_name_ordered_overlay_how_0[] = {
	&mercury_data_hlds__instmap__enum_functor_desc_overlay_how_0_0,
	&mercury_data_hlds__instmap__enum_functor_desc_overlay_how_0_1,
	&mercury_data_hlds__instmap__enum_functor_desc_overlay_how_0_2
};

const MR_Integer mercury_data_hlds__instmap__functor_number_map_overlay_how_0[] = {
	0,
	1,
	2 };
	
const MR_TypeCtorInfo_Struct mercury_data_hlds__instmap__type_ctor_info_overlay_how_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_ENUM,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___hlds__instmap__overlay_how_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___hlds__instmap__overlay_how_0_0)),
	"hlds.instmap",
	"overlay_how",
	{ (void *)mercury_data_hlds__instmap__enum_name_ordered_overlay_how_0 },
	{ (void *)mercury_data_hlds__instmap__enum_value_ordered_overlay_how_0 },
	3,
	4,
	mercury_data_hlds__instmap__functor_number_map_overlay_how_0
};


static const MR_UserClosureId
mercury_data__closure_layout__hlds__instmap__merge_insts_of_vars_8_0_1 = {
{
MR_PREDICATE,
"hlds.instmap",
"hlds.instmap",
"lookup_var_in_instmap",
3,
0
},
"hlds.instmap",
"instmap.m",
910,
"d2;c11;"
};

static const MR_UserClosureId
mercury_data__closure_layout__hlds__instmap__instmap_delta_set_vars_same_4_0_2 = {
{
MR_PREDICATE,
"std_util",
"std_util",
"negate",
1,
0
},
"hlds.instmap",
"instmap.m",
631,
"d1;c5;d2;c2;"
};

static const MR_UserClosureId
mercury_data__closure_layout__hlds__instmap__instmap_delta_set_vars_same_4_0_1 = {
{
MR_PREDICATE,
"hlds.instmap",
"hlds.instmap",
"lambda_instmap_m_631",
2,
0
},
"hlds.instmap",
"instmap.m",
631,
"d1;c5;d2;c3;"
};

static const MR_UserClosureId
mercury_data__closure_layout__hlds__instmap__instmap_set_vars_same_4_0_2 = {
{
MR_PREDICATE,
"std_util",
"std_util",
"negate",
1,
0
},
"hlds.instmap",
"instmap.m",
602,
"d1;c5;d2;c2;"
};

static const MR_UserClosureId
mercury_data__closure_layout__hlds__instmap__instmap_set_vars_same_4_0_1 = {
{
MR_PREDICATE,
"hlds.instmap",
"hlds.instmap",
"lambda_instmap_m_602",
2,
0
},
"hlds.instmap",
"instmap.m",
602,
"d1;c5;d2;c3;"
};

static const MR_UserClosureId
mercury_data__closure_layout__hlds__instmap__instmapping_set_vars_corresponding_4_0_2 = {
{
MR_PREDICATE,
"std_util",
"std_util",
"negate",
1,
0
},
"hlds.instmap",
"instmap.m",
585,
"d2;c5;"
};

static const MR_UserClosureId
mercury_data__closure_layout__hlds__instmap__instmapping_set_vars_corresponding_4_0_1 = {
{
MR_PREDICATE,
"hlds.instmap",
"hlds.instmap",
"lambda_instmap_m_585",
2,
0
},
"hlds.instmap",
"instmap.m",
585,
"d2;c6;"
};

static const MR_UserClosureId
mercury_data__closure_layout__hlds__instmap__instmapping_set_vars_3_0_2 = {
{
MR_PREDICATE,
"std_util",
"std_util",
"negate",
1,
0
},
"hlds.instmap",
"instmap.m",
562,
"d2;c5;"
};

static const MR_UserClosureId
mercury_data__closure_layout__hlds__instmap__instmapping_set_vars_3_0_1 = {
{
MR_PREDICATE,
"hlds.instmap",
"hlds.instmap",
"lambda_instmap_m_562",
2,
0
},
"hlds.instmap",
"instmap.m",
562,
"d2;c6;"
};

static const MR_UserClosureId
mercury_data__closure_layout__hlds__instmap__instmap_bound_vars_3_0_1 = {
{
MR_PREDICATE,
"hlds.instmap",
"hlds.instmap",
"instmap_bound_vars_2",
5,
0
},
"hlds.instmap",
"instmap.m",
471,
"d2;c4;"
};

static const MR_UserClosureId
mercury_data__closure_layout__fn__hlds__instmap__instmap_delta_bind_vars_1_0_1 = {
{
MR_FUNCTION,
"hlds.instmap",
"hlds.instmap",
"pair_with_ground",
2,
0
},
"hlds.instmap",
"instmap.m",
453,
"d1;c4;"
};


MR_decl_entry(map__init_1_0);

MR_BEGIN_MODULE(hlds__instmap_module0)
	MR_init_entry1(hlds__instmap__init_reachable_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__instmap__init_reachable_1_0);
	MR_init_label1(hlds__instmap__init_reachable_1_0,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'init_reachable'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__hlds__instmap__init_reachable_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_inst);
	MR_np_call_localret_ent(map__init_1_0,
		hlds__instmap__init_reachable_1_0_i3);
MR_def_label(hlds__instmap__init_reachable_1_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r2, 0) = MR_r1;
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(1);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__instmap_module1)
	MR_init_entry1(hlds__instmap__init_unreachable_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__instmap__init_unreachable_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'init_unreachable'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__hlds__instmap__init_unreachable_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__instmap_module2)
	MR_init_entry1(hlds__instmap__instmap_delta_init_reachable_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__instmap__instmap_delta_init_reachable_1_0);
	MR_init_label1(hlds__instmap__instmap_delta_init_reachable_1_0,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'instmap_delta_init_reachable'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__hlds__instmap__instmap_delta_init_reachable_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_inst);
	MR_np_call_localret_ent(map__init_1_0,
		hlds__instmap__instmap_delta_init_reachable_1_0_i3);
MR_def_label(hlds__instmap__instmap_delta_init_reachable_1_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r2, 0) = MR_r1;
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(1);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__instmap_module3)
	MR_init_entry1(hlds__instmap__instmap_delta_init_unreachable_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__instmap__instmap_delta_init_unreachable_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'instmap_delta_init_unreachable'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__hlds__instmap__instmap_delta_init_unreachable_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__instmap_module4)
	MR_init_entry1(hlds__instmap__instmap_is_reachable_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__instmap__instmap_is_reachable_1_0);
	MR_init_label1(hlds__instmap__instmap_is_reachable_1_0,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'instmap_is_reachable'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__hlds__instmap__instmap_is_reachable_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(hlds__instmap__instmap_is_reachable_1_0_i1);
	}
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(hlds__instmap__instmap_is_reachable_1_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__instmap_module5)
	MR_init_entry1(hlds__instmap__instmap_is_unreachable_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__instmap__instmap_is_unreachable_1_0);
	MR_init_label1(hlds__instmap__instmap_is_unreachable_1_0,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'instmap_is_unreachable'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__hlds__instmap__instmap_is_unreachable_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(hlds__instmap__instmap_is_unreachable_1_0_i1);
	}
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(hlds__instmap__instmap_is_unreachable_1_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__instmap_module6)
	MR_init_entry1(hlds__instmap__instmap_delta_is_reachable_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__instmap__instmap_delta_is_reachable_1_0);
	MR_init_label1(hlds__instmap__instmap_delta_is_reachable_1_0,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'instmap_delta_is_reachable'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__hlds__instmap__instmap_delta_is_reachable_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(hlds__instmap__instmap_delta_is_reachable_1_0_i1);
	}
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(hlds__instmap__instmap_delta_is_reachable_1_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__instmap_module7)
	MR_init_entry1(hlds__instmap__instmap_delta_is_unreachable_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__instmap__instmap_delta_is_unreachable_1_0);
	MR_init_label1(hlds__instmap__instmap_delta_is_unreachable_1_0,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'instmap_delta_is_unreachable'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__hlds__instmap__instmap_delta_is_unreachable_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(hlds__instmap__instmap_delta_is_unreachable_1_0_i1);
	}
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(hlds__instmap__instmap_delta_is_unreachable_1_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(map__from_assoc_list_2_0);

MR_BEGIN_MODULE(hlds__instmap_module8)
	MR_init_entry1(fn__hlds__instmap__instmap_from_assoc_list_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__hlds__instmap__instmap_from_assoc_list_1_0);
	MR_init_label1(fn__hlds__instmap__instmap_from_assoc_list_1_0,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'instmap_from_assoc_list'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__hlds__instmap__instmap_from_assoc_list_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_inst);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(map__from_assoc_list_2_0,
		fn__hlds__instmap__instmap_from_assoc_list_1_0_i3);
MR_def_label(fn__hlds__instmap__instmap_from_assoc_list_1_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r2, 0) = MR_r1;
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(1);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__instmap_module9)
	MR_init_entry1(fn__hlds__instmap__instmap_delta_from_assoc_list_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__hlds__instmap__instmap_delta_from_assoc_list_1_0);
	MR_init_label1(fn__hlds__instmap__instmap_delta_from_assoc_list_1_0,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'instmap_delta_from_assoc_list'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__hlds__instmap__instmap_delta_from_assoc_list_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_inst);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(map__from_assoc_list_2_0,
		fn__hlds__instmap__instmap_delta_from_assoc_list_1_0_i3);
MR_def_label(fn__hlds__instmap__instmap_delta_from_assoc_list_1_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r2, 0) = MR_r1;
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(1);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_115_101_116_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_0);

MR_BEGIN_MODULE(hlds__instmap_module10)
	MR_init_entry1(hlds__instmap__instmap_delta_set_var_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__instmap__instmap_delta_set_var_4_0);
	MR_init_label3(hlds__instmap__instmap_delta_set_var_4_0,3,22,7)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'instmap_delta_set_var'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__hlds__instmap__instmap_delta_set_var_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r3,0,0)) {
		MR_GOTO_LAB(hlds__instmap__instmap_delta_set_var_4_0_i3);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(hlds__instmap__instmap_delta_set_var_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_tfield(1, MR_r3, 0);
	if (MR_LTAGS_TESTR(MR_r2,0,1)) {
		MR_GOTO_LAB(hlds__instmap__instmap_delta_set_var_4_0_i22);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(hlds__instmap__instmap_delta_set_var_4_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_tempr2 = MR_r2;
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_inst);
	MR_r5 = MR_tempr1;
	MR_r6 = MR_tempr2;
	}
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_115_101_116_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_0,
		hlds__instmap__instmap_delta_set_var_4_0_i7);
MR_def_label(hlds__instmap__instmap_delta_set_var_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r2, 0) = MR_r1;
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(1);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(check_hlds__mode_util__mode_get_insts_4_0);
MR_decl_entry(__Unify___parse_tree__prog_data__mer_inst_0_0);
MR_decl_entry(libs__compiler_util__unexpected_2_0);

MR_BEGIN_MODULE(hlds__instmap_module11)
	MR_init_entry1(hlds__instmap__instmap_delta_from_mode_list_2_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__instmap__instmap_delta_from_mode_list_2_5_0);
	MR_init_label7(hlds__instmap__instmap_delta_from_mode_list_2_5_0,40,3,9,12,10,15,8)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'instmap_delta_from_mode_list_2'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__instmap__instmap_delta_from_mode_list_2_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
MR_def_label(hlds__instmap__instmap_delta_from_mode_list_2_5_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(hlds__instmap__instmap_delta_from_mode_list_2_5_0_i3);
	}
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(hlds__instmap__instmap_delta_from_mode_list_2_5_0_i8);
	}
	MR_r1 = MR_r4;
	MR_decr_sp_and_return(7);
MR_def_label(hlds__instmap__instmap_delta_from_mode_list_2_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r2,0,0)) {
		MR_GOTO_LAB(hlds__instmap__instmap_delta_from_mode_list_2_5_0_i8);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(1) = MR_tempr1;
	MR_sv(2) = MR_r4;
	MR_sv(3) = MR_tfield(1, MR_r2, 1);
	MR_sv(5) = MR_tfield(1, MR_r1, 1);
	MR_sv(6) = MR_tfield(1, MR_r1, 0);
	MR_r1 = MR_tempr1;
	MR_r2 = MR_tfield(1, MR_r2, 0);
	}
	MR_np_call_localret_ent(check_hlds__mode_util__mode_get_insts_4_0,
		hlds__instmap__instmap_delta_from_mode_list_2_5_0_i9);
MR_def_label(hlds__instmap__instmap_delta_from_mode_list_2_5_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r2;
	MR_np_call_localret_ent(__Unify___parse_tree__prog_data__mer_inst_0_0,
		hlds__instmap__instmap_delta_from_mode_list_2_5_0_i12);
MR_def_label(hlds__instmap__instmap_delta_from_mode_list_2_5_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(hlds__instmap__instmap_delta_from_mode_list_2_5_0_i10);
	}
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_succip_word = MR_sv(7);
	MR_GOTO_LAB(hlds__instmap__instmap_delta_from_mode_list_2_5_0_i40);
MR_def_label(hlds__instmap__instmap_delta_from_mode_list_2_5_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(4);
	MR_r1 = MR_sv(6);
	MR_r3 = MR_sv(2);
	MR_np_call_localret_ent(hlds__instmap__instmap_delta_set_var_4_0,
		hlds__instmap__instmap_delta_from_mode_list_2_5_0_i15);
MR_def_label(hlds__instmap__instmap_delta_from_mode_list_2_5_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_tempr1;
	MR_succip_word = MR_sv(7);
	MR_GOTO_LAB(hlds__instmap__instmap_delta_from_mode_list_2_5_0_i40);
	}
MR_def_label(hlds__instmap__instmap_delta_from_mode_list_2_5_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("instmap.m", 9);
	MR_r2 = (MR_Word) MR_string_const("instmap_delta_from_mode_list_2", 30);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__instmap_module12)
	MR_init_entry1(hlds__instmap__instmap_delta_from_mode_list_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__instmap__instmap_delta_from_mode_list_4_0);
	MR_init_label1(hlds__instmap__instmap_delta_from_mode_list_4_0,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'instmap_delta_from_mode_list'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__hlds__instmap__instmap_delta_from_mode_list_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_inst);
	MR_np_call_localret_ent(map__init_1_0,
		hlds__instmap__instmap_delta_from_mode_list_4_0_i3);
MR_def_label(hlds__instmap__instmap_delta_from_mode_list_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r4, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r4, 0) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(hlds__instmap__instmap_delta_from_mode_list_2_5_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__instmap_module13)
	MR_init_entry1(fn__hlds__instmap__instmap_delta_bind_no_var_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__hlds__instmap__instmap_delta_bind_no_var_0_0);
	MR_init_label1(fn__hlds__instmap__instmap_delta_bind_no_var_0_0,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'instmap_delta_bind_no_var'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__hlds__instmap__instmap_delta_bind_no_var_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_inst);
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_np_call_localret_ent(map__from_assoc_list_2_0,
		fn__hlds__instmap__instmap_delta_bind_no_var_0_0_i3);
MR_def_label(fn__hlds__instmap__instmap_delta_bind_no_var_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r2, 0) = MR_r1;
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(1);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__instmap_module14)
	MR_init_entry1(fn__hlds__instmap__instmap_delta_bind_var_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__hlds__instmap__instmap_delta_bind_var_1_0);
	MR_init_label1(fn__hlds__instmap__instmap_delta_bind_var_1_0,6)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'instmap_delta_bind_var'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__hlds__instmap__instmap_delta_bind_var_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_TAG_COMMON(3,1,0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_inst);
	}
	MR_np_call_localret_ent(map__from_assoc_list_2_0,
		fn__hlds__instmap__instmap_delta_bind_var_1_0_i6);
MR_def_label(fn__hlds__instmap__instmap_delta_bind_var_1_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r2, 0) = MR_r1;
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(1);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__list__map_2_0);

MR_BEGIN_MODULE(hlds__instmap_module15)
	MR_init_entry1(fn__hlds__instmap__instmap_delta_bind_vars_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__hlds__instmap__instmap_delta_bind_vars_1_0);
	MR_init_label2(fn__hlds__instmap__instmap_delta_bind_vars_1_0,5,6)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'instmap_delta_bind_vars'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__hlds__instmap__instmap_delta_bind_vars_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = (MR_Word) MR_TAG_COMMON(0,0,0);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,2,0);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,4,0);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__list__map_2_0,
		fn__hlds__instmap__instmap_delta_bind_vars_1_0_i5);
MR_def_label(fn__hlds__instmap__instmap_delta_bind_vars_1_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_inst);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(map__from_assoc_list_2_0,
		fn__hlds__instmap__instmap_delta_bind_vars_1_0_i6);
MR_def_label(fn__hlds__instmap__instmap_delta_bind_vars_1_0,6)
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

MR_decl_entry(map__keys_2_0);

MR_BEGIN_MODULE(hlds__instmap_module16)
	MR_init_entry1(hlds__instmap__instmap_vars_list_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__instmap__instmap_vars_list_2_0);
	MR_init_label1(hlds__instmap__instmap_vars_list_2_0,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'instmap_vars_list'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__hlds__instmap__instmap_vars_list_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(hlds__instmap__instmap_vars_list_2_0_i3);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(hlds__instmap__instmap_vars_list_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_inst);
	MR_r3 = MR_tfield(1, MR_tempr1, 0);
	MR_np_tailcall_ent(map__keys_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_105_115_116_95_116_111_95_115_101_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_0);

MR_BEGIN_MODULE(hlds__instmap_module17)
	MR_init_entry1(hlds__instmap__instmap_vars_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__instmap__instmap_vars_2_0);
	MR_init_label1(hlds__instmap__instmap_vars_2_0,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'instmap_vars'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__hlds__instmap__instmap_vars_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(hlds__instmap__instmap_vars_list_2_0,
		hlds__instmap__instmap_vars_2_0_i2);
MR_def_label(hlds__instmap__instmap_vars_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r3 = MR_tempr1;
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_np_tailcall_ent(f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_105_115_116_95_116_111_95_115_101_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(set__init_1_0);
MR_decl_entry(set__sorted_list_to_set_2_0);

MR_BEGIN_MODULE(hlds__instmap_module18)
	MR_init_entry1(hlds__instmap__instmap_delta_changed_vars_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__instmap__instmap_delta_changed_vars_2_0);
	MR_init_label2(hlds__instmap__instmap_delta_changed_vars_2_0,17,7)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'instmap_delta_changed_vars'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__hlds__instmap__instmap_delta_changed_vars_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(hlds__instmap__instmap_delta_changed_vars_2_0_i17);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_np_tailcall_ent(set__init_1_0);
MR_def_label(hlds__instmap__instmap_delta_changed_vars_2_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = (MR_Word) MR_TAG_COMMON(0,0,0);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_inst);
	MR_r3 = MR_tfield(1, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(map__keys_2_0,
		hlds__instmap__instmap_delta_changed_vars_2_0_i7);
MR_def_label(hlds__instmap__instmap_delta_changed_vars_2_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(set__sorted_list_to_set_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__set__init_0_0);
MR_decl_entry(map__foldl_4_0);

MR_BEGIN_MODULE(hlds__instmap_module19)
	MR_init_entry1(hlds__instmap__instmap_bound_vars_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__instmap__instmap_bound_vars_3_0);
	MR_init_label2(hlds__instmap__instmap_bound_vars_3_0,19,8)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'instmap_bound_vars'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__hlds__instmap__instmap_bound_vars_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(hlds__instmap__instmap_bound_vars_3_0_i19);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_np_tailcall_ent(fn__set__init_0_0);
MR_def_label(hlds__instmap__instmap_bound_vars_3_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_sv(2) = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(5,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(hlds__instmap__instmap_bound_vars_2_5_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_r2;
	MR_sv(1) = MR_tfield(1, MR_r1, 0);
	MR_sv(3) = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r1 = MR_sv(3);
	}
	MR_np_call_localret_ent(fn__set__init_0_0,
		hlds__instmap__instmap_bound_vars_3_0_i8);
MR_def_label(hlds__instmap__instmap_bound_vars_3_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_inst);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,0,4);
	MR_r4 = MR_sv(2);
	MR_r5 = MR_sv(1);
	MR_r6 = MR_tempr1;
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(map__foldl_4_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0);

MR_BEGIN_MODULE(hlds__instmap_module20)
	MR_init_entry1(hlds__instmap__instmap_lookup_var_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__instmap__instmap_lookup_var_3_0);
	MR_init_label3(hlds__instmap__instmap_lookup_var_3_0,20,6,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'instmap_lookup_var'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__hlds__instmap__instmap_lookup_var_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(hlds__instmap__instmap_lookup_var_3_0_i20);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 1);
	MR_proceed();
MR_def_label(hlds__instmap__instmap_lookup_var_3_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_tempr2 = MR_r2;
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_inst);
	MR_r4 = MR_tfield(1, MR_tempr1, 0);
	MR_r5 = MR_tempr2;
	}
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		hlds__instmap__instmap_lookup_var_3_0_i6);
MR_def_label(hlds__instmap__instmap_lookup_var_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(hlds__instmap__instmap_lookup_var_3_0_i4);
	}
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(1);
MR_def_label(hlds__instmap__instmap_lookup_var_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_decr_sp_and_return(1);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_mer_type_0;
MR_decl_entry(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0);
MR_decl_entry(check_hlds__inst_match__inst_matches_final_typed_4_0);
MR_decl_entry(f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_105_110_115_101_114_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0);

MR_BEGIN_MODULE(hlds__instmap_module21)
	MR_init_entry1(hlds__instmap__instmap_changed_vars_2_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__instmap__instmap_changed_vars_2_6_0);
	MR_init_label7(hlds__instmap__instmap_changed_vars_2_6_0,30,6,7,8,10,13,12)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'instmap_changed_vars_2'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__instmap__instmap_changed_vars_2_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(hlds__instmap__instmap_changed_vars_2_6_0_i30);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_np_tailcall_ent(set__init_1_0);
MR_def_label(hlds__instmap__instmap_changed_vars_2_6_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_r5;
	MR_sv(5) = MR_tfield(1, MR_r1, 0);
	MR_r1 = MR_tfield(1, MR_r1, 1);
	MR_np_localcall_lab(hlds__instmap__instmap_changed_vars_2_6_0,
		hlds__instmap__instmap_changed_vars_2_6_0_i6);
MR_def_label(hlds__instmap__instmap_changed_vars_2_6_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(5);
	}
	MR_np_call_localret_ent(hlds__instmap__instmap_lookup_var_3_0,
		hlds__instmap__instmap_changed_vars_2_6_0_i7);
MR_def_label(hlds__instmap__instmap_changed_vars_2_6_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(5);
	}
	MR_np_call_localret_ent(hlds__instmap__instmap_lookup_var_3_0,
		hlds__instmap__instmap_changed_vars_2_6_0_i8);
MR_def_label(hlds__instmap__instmap_changed_vars_2_6_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_sv(6) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_sv(7) = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(7);
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r4 = MR_tempr1;
	MR_r5 = MR_sv(5);
	}
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		hlds__instmap__instmap_changed_vars_2_6_0_i10);
MR_def_label(hlds__instmap__instmap_changed_vars_2_6_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(4);
	}
	MR_np_call_localret_ent(check_hlds__inst_match__inst_matches_final_typed_4_0,
		hlds__instmap__instmap_changed_vars_2_6_0_i13);
MR_def_label(hlds__instmap__instmap_changed_vars_2_6_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(hlds__instmap__instmap_changed_vars_2_6_0_i12);
	}
	MR_r1 = MR_sv(1);
	MR_decr_sp_and_return(8);
MR_def_label(hlds__instmap__instmap_changed_vars_2_6_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(7);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(5);
	MR_succip_word = MR_sv(8);
	MR_decr_sp(8);
	MR_np_tailcall_ent(f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_105_110_115_101_114_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__instmap_module22)
	MR_init_entry1(hlds__instmap__instmap_changed_vars_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__instmap__instmap_changed_vars_5_0);
	MR_init_label1(hlds__instmap__instmap_changed_vars_5_0,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'instmap_changed_vars'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__hlds__instmap__instmap_changed_vars_5_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(hlds__instmap__instmap_vars_list_2_0,
		hlds__instmap__instmap_changed_vars_5_0_i2);
MR_def_label(hlds__instmap__instmap_changed_vars_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(4);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(hlds__instmap__instmap_changed_vars_2_6_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__instmap_module23)
	MR_init_entry1(hlds__instmap__instmap_delta_search_var_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__instmap__instmap_delta_search_var_3_0);
	MR_init_label1(hlds__instmap__instmap_delta_search_var_3_0,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'instmap_delta_search_var'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__hlds__instmap__instmap_delta_search_var_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(hlds__instmap__instmap_delta_search_var_3_0_i3);
	}
	MR_r2 = (MR_Word) MR_tbmkword(0, 1);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(hlds__instmap__instmap_delta_search_var_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_tempr2 = MR_r2;
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_inst);
	MR_r4 = MR_tfield(1, MR_tempr1, 0);
	MR_r5 = MR_tempr2;
	MR_np_tailcall_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__instmap_module24)
	MR_init_entry1(hlds__instmap__instmap_lookup_vars_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__instmap__instmap_lookup_vars_3_0);
	MR_init_label3(hlds__instmap__instmap_lookup_vars_3_0,14,4,5)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'instmap_lookup_vars'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__hlds__instmap__instmap_lookup_vars_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(hlds__instmap__instmap_lookup_vars_3_0_i14);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(hlds__instmap__instmap_lookup_vars_3_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_tfield(1, MR_r2, 1);
	MR_r2 = MR_tfield(1, MR_r2, 0);
	MR_np_call_localret_ent(hlds__instmap__instmap_lookup_var_3_0,
		hlds__instmap__instmap_lookup_vars_3_0_i4);
MR_def_label(hlds__instmap__instmap_lookup_vars_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(2);
	}
	MR_np_localcall_lab(hlds__instmap__instmap_lookup_vars_3_0,
		hlds__instmap__instmap_lookup_vars_3_0_i5);
MR_def_label(hlds__instmap__instmap_lookup_vars_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(1);
	MR_tfield(1, MR_r2, 1) = MR_r1;
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_0);

MR_BEGIN_MODULE(hlds__instmap_module25)
	MR_init_entry1(hlds__instmap__instmap_delta_insert_var_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__instmap__instmap_delta_insert_var_4_0);
	MR_init_label3(hlds__instmap__instmap_delta_insert_var_4_0,3,22,7)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'instmap_delta_insert_var'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__hlds__instmap__instmap_delta_insert_var_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r3,0,0)) {
		MR_GOTO_LAB(hlds__instmap__instmap_delta_insert_var_4_0_i3);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(hlds__instmap__instmap_delta_insert_var_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_tfield(1, MR_r3, 0);
	if (MR_LTAGS_TESTR(MR_r2,0,1)) {
		MR_GOTO_LAB(hlds__instmap__instmap_delta_insert_var_4_0_i22);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(hlds__instmap__instmap_delta_insert_var_4_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_tempr2 = MR_r2;
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_inst);
	MR_r5 = MR_tempr1;
	MR_r6 = MR_tempr2;
	}
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_0,
		hlds__instmap__instmap_delta_insert_var_4_0_i7);
MR_def_label(hlds__instmap__instmap_delta_insert_var_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r2, 0) = MR_r1;
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(1);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__instmap_module26)
	MR_init_entry1(hlds__instmap__instmap_set_var_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__instmap__instmap_set_var_4_0);
	MR_init_label2(hlds__instmap__instmap_set_var_4_0,14,5)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'instmap_set_var'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__hlds__instmap__instmap_set_var_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r3,0,0)) {
		MR_GOTO_LAB(hlds__instmap__instmap_set_var_4_0_i14);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(hlds__instmap__instmap_set_var_4_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_tempr2 = MR_r2;
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_tempr3 = MR_r3;
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_inst);
	MR_r4 = MR_tfield(1, MR_tempr3, 0);
	MR_r5 = MR_tempr1;
	MR_r6 = MR_tempr2;
	}
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_115_101_116_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_0,
		hlds__instmap__instmap_set_var_4_0_i5);
MR_def_label(hlds__instmap__instmap_set_var_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r2, 0) = MR_r1;
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(1);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(std_util__negate_1_0);
MR_decl_entry(libs__compiler_util__expect_3_0);
MR_decl_entry(f_115_118_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_115_101_116_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_0);

MR_BEGIN_MODULE(hlds__instmap_module27)
	MR_init_entry1(hlds__instmap__instmapping_set_vars_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__instmap__instmapping_set_vars_3_0);
	MR_init_label4(hlds__instmap__instmapping_set_vars_3_0,14,3,6,8)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'instmapping_set_vars'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__instmap__instmapping_set_vars_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
MR_def_label(hlds__instmap__instmapping_set_vars_3_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(hlds__instmap__instmapping_set_vars_3_0_i3);
	}
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(5);
MR_def_label(hlds__instmap__instmapping_set_vars_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(3,1);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(hlds__instmap__IntroducedFrom__pred__instmapping_set_vars__562__1_2_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tempr2 = MR_tfield(1, MR_r1, 0);
	MR_tfield(0, MR_tempr1, 3) = MR_tfield(0, MR_tempr2, 1);
	MR_tfield(0, MR_tempr1, 4) = (MR_Word) MR_tbmkword(0, 1);
	MR_tag_alloc_heap(MR_tempr3, 0, (MR_Integer) 4);
	MR_tfield(0, MR_tempr3, 0) = (MR_Word) MR_COMMON(7,0);
	MR_tfield(0, MR_tempr3, 1) = (MR_Word) MR_ENTRY_AP(std_util__negate_1_0);
	MR_tfield(0, MR_tempr3, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr3, 3) = MR_tempr1;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_tfield(0, MR_tempr2, 0);
	MR_sv(3) = MR_tfield(0, MR_tempr1, 3);
	MR_sv(4) = MR_tfield(1, MR_r1, 1);
	MR_r1 = MR_tempr3;
	MR_r2 = (MR_Word) MR_string_const("instmap.m", 9);
	MR_r3 = (MR_Word) MR_string_const("instmapping_set_vars: not_reached", 33);
	}
	MR_np_call_localret_ent(libs__compiler_util__expect_3_0,
		hlds__instmap__instmapping_set_vars_3_0_i6);
MR_def_label(hlds__instmap__instmapping_set_vars_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_inst);
	MR_r4 = MR_sv(2);
	MR_r5 = MR_sv(3);
	MR_r6 = MR_sv(1);
	MR_np_call_localret_ent(f_115_118_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_115_101_116_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_0,
		hlds__instmap__instmapping_set_vars_3_0_i8);
MR_def_label(hlds__instmap__instmapping_set_vars_3_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(5);
	MR_GOTO_LAB(hlds__instmap__instmapping_set_vars_3_0_i14);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__instmap_module28)
	MR_init_entry1(hlds__instmap__instmap_set_vars_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__instmap__instmap_set_vars_3_0);
	MR_init_label2(hlds__instmap__instmap_set_vars_3_0,13,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'instmap_set_vars'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__hlds__instmap__instmap_set_vars_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(hlds__instmap__instmap_set_vars_3_0_i13);
	}
	MR_r1 = MR_r2;
	MR_proceed();
MR_def_label(hlds__instmap__instmap_set_vars_3_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_r2 = MR_tfield(1, MR_r2, 0);
	MR_np_call_localret_ent(hlds__instmap__instmapping_set_vars_3_0,
		hlds__instmap__instmap_set_vars_3_0_i4);
MR_def_label(hlds__instmap__instmap_set_vars_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r2, 0) = MR_r1;
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(1);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__instmap_module29)
	MR_init_entry1(hlds__instmap__instmapping_set_vars_corresponding_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__instmap__instmapping_set_vars_corresponding_4_0);
	MR_init_label6(hlds__instmap__instmapping_set_vars_corresponding_4_0,29,5,3,11,13,8)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'instmapping_set_vars_corresponding'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__instmap__instmapping_set_vars_corresponding_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
MR_def_label(hlds__instmap__instmapping_set_vars_corresponding_4_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(hlds__instmap__instmapping_set_vars_corresponding_4_0_i3);
	}
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(hlds__instmap__instmapping_set_vars_corresponding_4_0_i5);
	}
	MR_r1 = MR_r3;
	MR_decr_sp_and_return(6);
MR_def_label(hlds__instmap__instmapping_set_vars_corresponding_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("instmap.m", 9);
	MR_r2 = (MR_Word) MR_string_const("instmapping_set_vars_corresponding: length mismatch (2)", 55);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
MR_def_label(hlds__instmap__instmapping_set_vars_corresponding_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r2,0,0)) {
		MR_GOTO_LAB(hlds__instmap__instmapping_set_vars_corresponding_4_0_i8);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(3,2);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(hlds__instmap__IntroducedFrom__pred__instmapping_set_vars_corresponding__585__1_2_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr1, 3) = MR_tfield(1, MR_r2, 0);
	MR_tfield(0, MR_tempr1, 4) = (MR_Word) MR_tbmkword(0, 1);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 4);
	MR_tfield(0, MR_tempr2, 0) = (MR_Word) MR_COMMON(7,1);
	MR_tfield(0, MR_tempr2, 1) = (MR_Word) MR_ENTRY_AP(std_util__negate_1_0);
	MR_tfield(0, MR_tempr2, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr2, 3) = MR_tempr1;
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_tfield(0, MR_tempr1, 3);
	MR_sv(3) = MR_tfield(1, MR_r2, 1);
	MR_sv(4) = MR_tfield(1, MR_r1, 1);
	MR_sv(5) = MR_tfield(1, MR_r1, 0);
	MR_r1 = MR_tempr2;
	MR_r2 = (MR_Word) MR_string_const("instmap.m", 9);
	MR_r3 = (MR_Word) MR_string_const("instmapping_set_vars_corresponding: not_reached", 47);
	}
	MR_np_call_localret_ent(libs__compiler_util__expect_3_0,
		hlds__instmap__instmapping_set_vars_corresponding_4_0_i11);
MR_def_label(hlds__instmap__instmapping_set_vars_corresponding_4_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_inst);
	MR_r4 = MR_sv(5);
	MR_r5 = MR_sv(2);
	MR_r6 = MR_sv(1);
	MR_np_call_localret_ent(f_115_118_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_115_101_116_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_0,
		hlds__instmap__instmapping_set_vars_corresponding_4_0_i13);
MR_def_label(hlds__instmap__instmapping_set_vars_corresponding_4_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_tempr1;
	MR_succip_word = MR_sv(6);
	MR_GOTO_LAB(hlds__instmap__instmapping_set_vars_corresponding_4_0_i29);
	}
MR_def_label(hlds__instmap__instmapping_set_vars_corresponding_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("instmap.m", 9);
	MR_r2 = (MR_Word) MR_string_const("instmapping_set_vars_corresponding: length mismatch (1)", 55);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__instmap_module30)
	MR_init_entry1(hlds__instmap__instmap_set_vars_corresponding_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__instmap__instmap_set_vars_corresponding_4_0);
	MR_init_label2(hlds__instmap__instmap_set_vars_corresponding_4_0,13,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'instmap_set_vars_corresponding'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__hlds__instmap__instmap_set_vars_corresponding_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r3,0,0)) {
		MR_GOTO_LAB(hlds__instmap__instmap_set_vars_corresponding_4_0_i13);
	}
	MR_r1 = MR_r3;
	MR_proceed();
MR_def_label(hlds__instmap__instmap_set_vars_corresponding_4_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_r3 = MR_tfield(1, MR_r3, 0);
	MR_np_call_localret_ent(hlds__instmap__instmapping_set_vars_corresponding_4_0,
		hlds__instmap__instmap_set_vars_corresponding_4_0_i4);
MR_def_label(hlds__instmap__instmap_set_vars_corresponding_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r2, 0) = MR_r1;
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(1);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__instmap_module31)
	MR_init_entry1(hlds__instmap__instmapping_set_vars_same_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__instmap__instmapping_set_vars_same_4_0);
	MR_init_label3(hlds__instmap__instmapping_set_vars_same_4_0,11,3,5)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'instmapping_set_vars_same'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__instmap__instmapping_set_vars_same_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
MR_def_label(hlds__instmap__instmapping_set_vars_same_4_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(hlds__instmap__instmapping_set_vars_same_4_0_i3);
	}
	MR_r1 = MR_r3;
	MR_decr_sp_and_return(3);
MR_def_label(hlds__instmap__instmapping_set_vars_same_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_tfield(1, MR_r2, 1);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r2;
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_tempr2 = MR_r3;
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_inst);
	MR_r4 = MR_tfield(1, MR_tempr1, 0);
	MR_r5 = MR_sv(1);
	MR_r6 = MR_tempr2;
	}
	MR_np_call_localret_ent(f_115_118_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_115_101_116_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_0,
		hlds__instmap__instmapping_set_vars_same_4_0_i5);
MR_def_label(hlds__instmap__instmapping_set_vars_same_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tempr1;
	MR_succip_word = MR_sv(3);
	MR_GOTO_LAB(hlds__instmap__instmapping_set_vars_same_4_0_i11);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__instmap_module32)
	MR_init_entry1(hlds__instmap__instmap_set_vars_same_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__instmap__instmap_set_vars_same_4_0);
	MR_init_label3(hlds__instmap__instmap_set_vars_same_4_0,16,6,7)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'instmap_set_vars_same'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__hlds__instmap__instmap_set_vars_same_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r3,0,0)) {
		MR_GOTO_LAB(hlds__instmap__instmap_set_vars_same_4_0_i16);
	}
	MR_r1 = MR_r3;
	MR_proceed();
MR_def_label(hlds__instmap__instmap_set_vars_same_4_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(3,3);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(hlds__instmap__IntroducedFrom__pred__instmap_set_vars_same__602__1_2_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr1, 3) = MR_r1;
	MR_tfield(0, MR_tempr1, 4) = (MR_Word) MR_tbmkword(0, 1);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 4);
	MR_tfield(0, MR_tempr2, 0) = (MR_Word) MR_COMMON(7,2);
	MR_tfield(0, MR_tempr2, 1) = (MR_Word) MR_ENTRY_AP(std_util__negate_1_0);
	MR_tfield(0, MR_tempr2, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr2, 3) = MR_tempr1;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_tfield(1, MR_r3, 0);
	MR_r1 = MR_tempr2;
	MR_r2 = (MR_Word) MR_string_const("instmap.m", 9);
	MR_r3 = (MR_Word) MR_string_const("instmap_set_vars_same: not_reached", 34);
	}
	MR_np_call_localret_ent(libs__compiler_util__expect_3_0,
		hlds__instmap__instmap_set_vars_same_4_0_i6);
MR_def_label(hlds__instmap__instmap_set_vars_same_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_np_call_localret_ent(hlds__instmap__instmapping_set_vars_same_4_0,
		hlds__instmap__instmap_set_vars_same_4_0_i7);
MR_def_label(hlds__instmap__instmap_set_vars_same_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r2, 0) = MR_r1;
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(4);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__instmap_module33)
	MR_init_entry1(hlds__instmap__instmap_delta_set_vars_same_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__instmap__instmap_delta_set_vars_same_4_0);
	MR_init_label3(hlds__instmap__instmap_delta_set_vars_same_4_0,16,6,7)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'instmap_delta_set_vars_same'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__hlds__instmap__instmap_delta_set_vars_same_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r3,0,0)) {
		MR_GOTO_LAB(hlds__instmap__instmap_delta_set_vars_same_4_0_i16);
	}
	MR_r1 = MR_r3;
	MR_proceed();
MR_def_label(hlds__instmap__instmap_delta_set_vars_same_4_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(3,4);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(hlds__instmap__IntroducedFrom__pred__instmap_delta_set_vars_same__631__1_2_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr1, 3) = MR_r1;
	MR_tfield(0, MR_tempr1, 4) = (MR_Word) MR_tbmkword(0, 1);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 4);
	MR_tfield(0, MR_tempr2, 0) = (MR_Word) MR_COMMON(7,3);
	MR_tfield(0, MR_tempr2, 1) = (MR_Word) MR_ENTRY_AP(std_util__negate_1_0);
	MR_tfield(0, MR_tempr2, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr2, 3) = MR_tempr1;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_tfield(1, MR_r3, 0);
	MR_r1 = MR_tempr2;
	MR_r2 = (MR_Word) MR_string_const("instmap.m", 9);
	MR_r3 = (MR_Word) MR_string_const("instmap_delta_set_vars_same: not_reached", 40);
	}
	MR_np_call_localret_ent(libs__compiler_util__expect_3_0,
		hlds__instmap__instmap_delta_set_vars_same_4_0_i6);
MR_def_label(hlds__instmap__instmap_delta_set_vars_same_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_np_call_localret_ent(hlds__instmap__instmapping_set_vars_same_4_0,
		hlds__instmap__instmap_delta_set_vars_same_4_0_i7);
MR_def_label(hlds__instmap__instmap_delta_set_vars_same_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r2, 0) = MR_r1;
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(4);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__check_hlds__type_util__cons_id_adjusted_arity_3_0);
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_is_live_0;
MR_decl_entry(list__duplicate_3_0);
MR_decl_entry(check_hlds__inst_util__abstractly_unify_inst_functor_11_0);

MR_BEGIN_MODULE(hlds__instmap_module34)
	MR_init_entry1(hlds__instmap__instmap_delta_bind_var_to_functor_8_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__instmap__instmap_delta_bind_var_to_functor_8_0);
	MR_init_label10(hlds__instmap__instmap_delta_bind_var_to_functor_8_0,57,4,7,5,9,10,11,12,14,13)
	MR_init_label5(hlds__instmap__instmap_delta_bind_var_to_functor_8_0,17,22,24,27,19)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'instmap_delta_bind_var_to_functor'/8 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__hlds__instmap__instmap_delta_bind_var_to_functor_8_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r5,0,0)) {
		MR_GOTO_LAB(hlds__instmap__instmap_delta_bind_var_to_functor_8_0_i57);
	}
	MR_r1 = MR_r5;
	MR_r2 = MR_r6;
	MR_proceed();
MR_def_label(hlds__instmap__instmap_delta_bind_var_to_functor_8_0,57)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r5;
	MR_sv(4) = MR_tfield(1, MR_tempr1, 0);
	MR_sv(6) = MR_tempr1;
	MR_sv(7) = MR_r6;
	MR_r1 = MR_r4;
	MR_r2 = MR_sv(1);
	}
	MR_np_call_localret_ent(hlds__instmap__instmap_lookup_var_3_0,
		hlds__instmap__instmap_delta_bind_var_to_functor_8_0_i4);
MR_def_label(hlds__instmap__instmap_delta_bind_var_to_functor_8_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_inst);
	MR_r4 = MR_tempr1;
	MR_r5 = MR_sv(1);
	}
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		hlds__instmap__instmap_delta_bind_var_to_functor_8_0_i7);
MR_def_label(hlds__instmap__instmap_delta_bind_var_to_functor_8_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(hlds__instmap__instmap_delta_bind_var_to_functor_8_0_i5);
	}
	MR_sv(5) = MR_r2;
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r1 = MR_sv(7);
	MR_GOTO_LAB(hlds__instmap__instmap_delta_bind_var_to_functor_8_0_i9);
MR_def_label(hlds__instmap__instmap_delta_bind_var_to_functor_8_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_sv(5) = MR_sv(4);
	MR_r1 = MR_sv(7);
MR_def_label(hlds__instmap__instmap_delta_bind_var_to_functor_8_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(7) = MR_r1;
	MR_np_call_localret_ent(fn__check_hlds__type_util__cons_id_adjusted_arity_3_0,
		hlds__instmap__instmap_delta_bind_var_to_functor_8_0_i10);
MR_def_label(hlds__instmap__instmap_delta_bind_var_to_functor_8_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, is_live);
	MR_r2 = MR_sv(8);
	MR_r3 = (MR_Integer) 1;
	MR_np_call_localret_ent(list__duplicate_3_0,
		hlds__instmap__instmap_delta_bind_var_to_functor_8_0_i11);
MR_def_label(hlds__instmap__instmap_delta_bind_var_to_functor_8_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(8);
	MR_sv(8) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_inst);
	MR_r2 = MR_tempr1;
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	}
	MR_np_call_localret_ent(list__duplicate_3_0,
		hlds__instmap__instmap_delta_bind_var_to_functor_8_0_i12);
MR_def_label(hlds__instmap__instmap_delta_bind_var_to_functor_8_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 1;
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_tempr1;
	MR_r5 = MR_sv(8);
	MR_r6 = (MR_Integer) 0;
	MR_r7 = MR_sv(2);
	MR_r8 = MR_sv(7);
	}
	MR_np_call_localret_ent(check_hlds__inst_util__abstractly_unify_inst_functor_11_0,
		hlds__instmap__instmap_delta_bind_var_to_functor_8_0_i14);
MR_def_label(hlds__instmap__instmap_delta_bind_var_to_functor_8_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(hlds__instmap__instmap_delta_bind_var_to_functor_8_0_i13);
	}
	MR_r3 = MR_r2;
	MR_r2 = MR_sv(4);
	MR_r1 = MR_r3;
	MR_sv(3) = MR_r4;
	MR_GOTO_LAB(hlds__instmap__instmap_delta_bind_var_to_functor_8_0_i17);
MR_def_label(hlds__instmap__instmap_delta_bind_var_to_functor_8_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("instmap.m", 9);
	MR_r2 = (MR_Word) MR_string_const("bind_inst_to_functor: mode error", 32);
	MR_np_call_localret_ent(libs__compiler_util__unexpected_2_0,
		hlds__instmap__instmap_delta_bind_var_to_functor_8_0_i17);
MR_def_label(hlds__instmap__instmap_delta_bind_var_to_functor_8_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_np_call_localret_ent(__Unify___parse_tree__prog_data__mer_inst_0_0,
		hlds__instmap__instmap_delta_bind_var_to_functor_8_0_i22);
MR_def_label(hlds__instmap__instmap_delta_bind_var_to_functor_8_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(hlds__instmap__instmap_delta_bind_var_to_functor_8_0_i19);
	}
	MR_r1 = MR_sv(2);
	MR_r3 = MR_tfield(1, MR_sv(6), 0);
	if (MR_LTAGS_TESTR(MR_r1,0,1)) {
		MR_GOTO_LAB(hlds__instmap__instmap_delta_bind_var_to_functor_8_0_i24);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = MR_sv(3);
	MR_decr_sp_and_return(9);
MR_def_label(hlds__instmap__instmap_delta_bind_var_to_functor_8_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_tempr2 = MR_r3;
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_inst);
	MR_r4 = MR_tempr2;
	MR_r5 = MR_sv(1);
	MR_r6 = MR_tempr1;
	}
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_115_101_116_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_0,
		hlds__instmap__instmap_delta_bind_var_to_functor_8_0_i27);
MR_def_label(hlds__instmap__instmap_delta_bind_var_to_functor_8_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(3);
	MR_decr_sp_and_return(9);
	}
MR_def_label(hlds__instmap__instmap_delta_bind_var_to_functor_8_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(3);
	MR_decr_sp_and_return(9);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__instmap_module35)
	MR_init_entry1(hlds__instmap__bind_inst_to_functors_others_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__instmap__bind_inst_to_functors_others_6_0);
	MR_init_label8(hlds__instmap__bind_inst_to_functors_others_6_0,24,4,5,6,8,7,11,12)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'bind_inst_to_functors_others'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__instmap__bind_inst_to_functors_others_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(hlds__instmap__bind_inst_to_functors_others_6_0_i24);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = MR_r4;
	MR_proceed();
MR_def_label(hlds__instmap__bind_inst_to_functors_others_6_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r3;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_sv(3) = MR_tempr1;
	MR_sv(4) = MR_tfield(1, MR_r2, 0);
	MR_sv(5) = MR_tfield(1, MR_r2, 1);
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(4);
	}
	MR_np_call_localret_ent(fn__check_hlds__type_util__cons_id_adjusted_arity_3_0,
		hlds__instmap__bind_inst_to_functors_others_6_0_i4);
MR_def_label(hlds__instmap__bind_inst_to_functors_others_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, is_live);
	MR_r2 = MR_sv(6);
	MR_r3 = (MR_Integer) 1;
	MR_np_call_localret_ent(list__duplicate_3_0,
		hlds__instmap__bind_inst_to_functors_others_6_0_i5);
MR_def_label(hlds__instmap__bind_inst_to_functors_others_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(6);
	MR_sv(6) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_inst);
	MR_r2 = MR_tempr1;
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	}
	MR_np_call_localret_ent(list__duplicate_3_0,
		hlds__instmap__bind_inst_to_functors_others_6_0_i6);
MR_def_label(hlds__instmap__bind_inst_to_functors_others_6_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 1;
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_tempr1;
	MR_r5 = MR_sv(6);
	MR_r6 = (MR_Integer) 0;
	MR_r7 = MR_sv(1);
	MR_r8 = MR_sv(3);
	}
	MR_np_call_localret_ent(check_hlds__inst_util__abstractly_unify_inst_functor_11_0,
		hlds__instmap__bind_inst_to_functors_others_6_0_i8);
MR_def_label(hlds__instmap__bind_inst_to_functors_others_6_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(hlds__instmap__bind_inst_to_functors_others_6_0_i7);
	}
	MR_r1 = MR_sv(1);
	MR_r3 = MR_sv(2);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(5);
	MR_sv(1) = MR_tempr1;
	}
	MR_np_localcall_lab(hlds__instmap__bind_inst_to_functors_others_6_0,
		hlds__instmap__bind_inst_to_functors_others_6_0_i12);
MR_def_label(hlds__instmap__bind_inst_to_functors_others_6_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("instmap.m", 9);
	MR_r2 = (MR_Word) MR_string_const("bind_inst_to_functor: mode error", 32);
	MR_np_call_localret_ent(libs__compiler_util__unexpected_2_0,
		hlds__instmap__bind_inst_to_functors_others_6_0_i11);
MR_def_label(hlds__instmap__bind_inst_to_functors_others_6_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_localcall_lab(hlds__instmap__bind_inst_to_functors_others_6_0,
		hlds__instmap__bind_inst_to_functors_others_6_0_i12);
MR_def_label(hlds__instmap__bind_inst_to_functors_others_6_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(7);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(check_hlds__inst_util__inst_merge_6_0);

MR_BEGIN_MODULE(hlds__instmap_module36)
	MR_init_entry1(hlds__instmap__merge_var_insts_pass_8_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__instmap__merge_var_insts_pass_8_0);
	MR_init_label10(hlds__instmap__merge_var_insts_pass_8_0,85,3,5,11,9,8,18,20,16,25)
	MR_init_label3(hlds__instmap__merge_var_insts_pass_8_0,27,29,24)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'merge_var_insts_pass'/8 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__instmap__merge_var_insts_pass_8_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
MR_def_label(hlds__instmap__merge_var_insts_pass_8_0,85)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(hlds__instmap__merge_var_insts_pass_8_0_i3);
	}
	MR_r1 = MR_r3;
	MR_r2 = MR_r4;
	MR_r3 = MR_r5;
	MR_decr_sp_and_return(8);
MR_def_label(hlds__instmap__merge_var_insts_pass_8_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r6 = MR_tfield(1, MR_r1, 1);
	if (MR_LTAGS_TESTR(MR_r6,0,0)) {
		MR_GOTO_LAB(hlds__instmap__merge_var_insts_pass_8_0_i5);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_tfield(1, MR_r1, 0);
	MR_tfield(1, MR_tempr1, 1) = MR_r3;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_r4;
	MR_r3 = MR_r5;
	MR_decr_sp_and_return(8);
	}
MR_def_label(hlds__instmap__merge_var_insts_pass_8_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r6;
	MR_r7 = MR_tfield(1, MR_tempr2, 1);
	if (MR_LTAGS_TESTR(MR_r7,0,0)) {
		MR_GOTO_LAB(hlds__instmap__merge_var_insts_pass_8_0_i8);
	}
	MR_sv(4) = MR_r3;
	MR_sv(5) = MR_r4;
	MR_sv(6) = MR_r5;
	MR_r1 = MR_tfield(1, MR_r1, 0);
	MR_tempr1 = MR_r2;
	MR_r2 = MR_tfield(1, MR_tempr2, 0);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__inst_util__inst_merge_6_0,
		hlds__instmap__merge_var_insts_pass_8_0_i11);
MR_def_label(hlds__instmap__merge_var_insts_pass_8_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(hlds__instmap__merge_var_insts_pass_8_0_i9);
	}
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = MR_r2;
	MR_tfield(1, MR_r1, 1) = MR_sv(4);
	MR_r2 = MR_r3;
	MR_r3 = MR_sv(6);
	MR_decr_sp_and_return(8);
MR_def_label(hlds__instmap__merge_var_insts_pass_8_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(4);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(5);
	MR_r1 = MR_r3;
	MR_r2 = MR_tempr1;
	MR_r3 = (MR_Integer) 1;
	MR_decr_sp_and_return(8);
	}
MR_def_label(hlds__instmap__merge_var_insts_pass_8_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r7;
	MR_r8 = MR_tfield(1, MR_tempr1, 1);
	if (MR_LTAGS_TESTR(MR_r8,0,0)) {
		MR_GOTO_LAB(hlds__instmap__merge_var_insts_pass_8_0_i16);
	}
	MR_sv(1) = MR_r2;
	MR_sv(4) = MR_r3;
	MR_sv(5) = MR_r4;
	MR_sv(6) = MR_r5;
	MR_sv(7) = MR_tfield(1, MR_tempr1, 0);
	MR_r1 = MR_tfield(1, MR_r1, 0);
	MR_r2 = MR_tfield(1, MR_r6, 0);
	MR_r3 = MR_sv(1);
	}
	MR_np_call_localret_ent(check_hlds__inst_util__inst_merge_6_0,
		hlds__instmap__merge_var_insts_pass_8_0_i18);
MR_def_label(hlds__instmap__merge_var_insts_pass_8_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(hlds__instmap__merge_var_insts_pass_8_0_i24);
	}
	MR_r1 = MR_r2;
	MR_r2 = MR_sv(7);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_r3 = MR_sv(1);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__inst_util__inst_merge_6_0,
		hlds__instmap__merge_var_insts_pass_8_0_i20);
MR_def_label(hlds__instmap__merge_var_insts_pass_8_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(hlds__instmap__merge_var_insts_pass_8_0_i24);
	}
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = MR_r2;
	MR_tfield(1, MR_r1, 1) = MR_sv(4);
	MR_r2 = MR_r3;
	MR_r3 = MR_sv(6);
	MR_decr_sp_and_return(8);
MR_def_label(hlds__instmap__merge_var_insts_pass_8_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r8;
	MR_sv(2) = MR_tfield(1, MR_tempr1, 0);
	MR_sv(3) = MR_tfield(1, MR_tempr1, 1);
	MR_sv(4) = MR_r3;
	MR_sv(5) = MR_r4;
	MR_sv(6) = MR_r5;
	MR_sv(7) = MR_tfield(1, MR_r7, 0);
	MR_r1 = MR_tfield(1, MR_r1, 0);
	MR_r2 = MR_tfield(1, MR_r6, 0);
	MR_r3 = MR_sv(1);
	}
	MR_np_call_localret_ent(check_hlds__inst_util__inst_merge_6_0,
		hlds__instmap__merge_var_insts_pass_8_0_i25);
MR_def_label(hlds__instmap__merge_var_insts_pass_8_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(hlds__instmap__merge_var_insts_pass_8_0_i24);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r2;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_tempr1;
	MR_tempr2 = MR_r3;
	MR_r3 = MR_sv(1);
	MR_r4 = MR_tempr2;
	}
	MR_np_call_localret_ent(check_hlds__inst_util__inst_merge_6_0,
		hlds__instmap__merge_var_insts_pass_8_0_i27);
MR_def_label(hlds__instmap__merge_var_insts_pass_8_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(hlds__instmap__merge_var_insts_pass_8_0_i24);
	}
	MR_r1 = MR_sv(2);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_r3 = MR_sv(1);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__inst_util__inst_merge_6_0,
		hlds__instmap__merge_var_insts_pass_8_0_i29);
MR_def_label(hlds__instmap__merge_var_insts_pass_8_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(hlds__instmap__merge_var_insts_pass_8_0_i24);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r2;
	MR_tfield(1, MR_tempr1, 1) = MR_sv(4);
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(1);
	MR_tempr2 = MR_r3;
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tempr2;
	MR_r5 = MR_sv(6);
	MR_succip_word = MR_sv(8);
	MR_GOTO_LAB(hlds__instmap__merge_var_insts_pass_8_0_i85);
	}
MR_def_label(hlds__instmap__merge_var_insts_pass_8_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(5);
	MR_r3 = (MR_Integer) 1;
	MR_decr_sp_and_return(8);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__instmap_module37)
	MR_init_entry1(hlds__instmap__merge_var_insts_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__instmap__merge_var_insts_5_0);
	MR_init_label5(hlds__instmap__merge_var_insts_5_0,26,3,7,10,5)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'merge_var_insts'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__instmap__merge_var_insts_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
MR_def_label(hlds__instmap__merge_var_insts_5_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_r2;
	MR_sv(1) = MR_r2;
	MR_r2 = MR_tempr1;
	MR_tempr2 = MR_r3;
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_r4 = MR_tempr2;
	MR_r5 = (MR_Integer) 0;
	}
	MR_np_call_localret_ent(hlds__instmap__merge_var_insts_pass_8_0,
		hlds__instmap__merge_var_insts_5_0_i3);
MR_def_label(hlds__instmap__merge_var_insts_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r3,0)) {
		MR_GOTO_LAB(hlds__instmap__merge_var_insts_5_0_i5);
	}
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(hlds__instmap__merge_var_insts_5_0_i7);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = (MR_Word) MR_TAG_COMMON(1,8,0);
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(2);
	}
MR_def_label(hlds__instmap__merge_var_insts_5_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(1, MR_r1, 1);
	if (MR_LTAGS_TESTR(MR_tempr1,0,0)) {
		MR_GOTO_LAB(hlds__instmap__merge_var_insts_5_0_i10);
	}
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_tfield(1, MR_r1, 0);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r1 = MR_tempr2;
	MR_decr_sp_and_return(2);
	}
MR_def_label(hlds__instmap__merge_var_insts_5_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tempr1;
	MR_succip_word = MR_sv(2);
	MR_GOTO_LAB(hlds__instmap__merge_var_insts_5_0_i26);
	}
MR_def_label(hlds__instmap__merge_var_insts_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(2);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__instmap_module38)
	MR_init_entry1(hlds__instmap__instmap_delta_bind_var_to_functors_9_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__instmap__instmap_delta_bind_var_to_functors_9_0);
	MR_init_label10(hlds__instmap__instmap_delta_bind_var_to_functors_9_0,67,4,7,5,9,10,11,12,14,13)
	MR_init_label9(hlds__instmap__instmap_delta_bind_var_to_functors_9_0,17,18,20,22,21,28,30,33,25)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'instmap_delta_bind_var_to_functors'/9 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__hlds__instmap__instmap_delta_bind_var_to_functors_9_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r6,0,0)) {
		MR_GOTO_LAB(hlds__instmap__instmap_delta_bind_var_to_functors_9_0_i67);
	}
	MR_r1 = MR_r6;
	MR_r2 = MR_r7;
	MR_proceed();
MR_def_label(hlds__instmap__instmap_delta_bind_var_to_functors_9_0,67)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(10);
	MR_sv(10) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r6;
	MR_sv(5) = MR_tfield(1, MR_tempr1, 0);
	MR_sv(7) = MR_tempr1;
	MR_sv(8) = MR_r7;
	MR_r1 = MR_r5;
	MR_r2 = MR_sv(1);
	}
	MR_np_call_localret_ent(hlds__instmap__instmap_lookup_var_3_0,
		hlds__instmap__instmap_delta_bind_var_to_functors_9_0_i4);
MR_def_label(hlds__instmap__instmap_delta_bind_var_to_functors_9_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(5);
	MR_sv(5) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_inst);
	MR_r4 = MR_tempr1;
	MR_r5 = MR_sv(1);
	}
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		hlds__instmap__instmap_delta_bind_var_to_functors_9_0_i7);
MR_def_label(hlds__instmap__instmap_delta_bind_var_to_functors_9_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(hlds__instmap__instmap_delta_bind_var_to_functors_9_0_i5);
	}
	MR_sv(6) = MR_r2;
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r1 = MR_sv(8);
	MR_GOTO_LAB(hlds__instmap__instmap_delta_bind_var_to_functors_9_0_i9);
MR_def_label(hlds__instmap__instmap_delta_bind_var_to_functors_9_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_sv(6) = MR_sv(5);
	MR_r1 = MR_sv(8);
MR_def_label(hlds__instmap__instmap_delta_bind_var_to_functors_9_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(8) = MR_r1;
	MR_np_call_localret_ent(fn__check_hlds__type_util__cons_id_adjusted_arity_3_0,
		hlds__instmap__instmap_delta_bind_var_to_functors_9_0_i10);
MR_def_label(hlds__instmap__instmap_delta_bind_var_to_functors_9_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, is_live);
	MR_r2 = MR_sv(9);
	MR_r3 = (MR_Integer) 1;
	MR_np_call_localret_ent(list__duplicate_3_0,
		hlds__instmap__instmap_delta_bind_var_to_functors_9_0_i11);
MR_def_label(hlds__instmap__instmap_delta_bind_var_to_functors_9_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(9);
	MR_sv(9) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_inst);
	MR_r2 = MR_tempr1;
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	}
	MR_np_call_localret_ent(list__duplicate_3_0,
		hlds__instmap__instmap_delta_bind_var_to_functors_9_0_i12);
MR_def_label(hlds__instmap__instmap_delta_bind_var_to_functors_9_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 1;
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_tempr1;
	MR_r5 = MR_sv(9);
	MR_r6 = (MR_Integer) 0;
	MR_r7 = MR_sv(2);
	MR_r8 = MR_sv(8);
	}
	MR_np_call_localret_ent(check_hlds__inst_util__abstractly_unify_inst_functor_11_0,
		hlds__instmap__instmap_delta_bind_var_to_functors_9_0_i14);
MR_def_label(hlds__instmap__instmap_delta_bind_var_to_functors_9_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(hlds__instmap__instmap_delta_bind_var_to_functors_9_0_i13);
	}
	MR_r1 = MR_sv(2);
	MR_sv(3) = MR_r2;
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(6);
	MR_GOTO_LAB(hlds__instmap__instmap_delta_bind_var_to_functors_9_0_i17);
MR_def_label(hlds__instmap__instmap_delta_bind_var_to_functors_9_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("instmap.m", 9);
	MR_r2 = (MR_Word) MR_string_const("bind_inst_to_functor: mode error", 32);
	MR_np_call_localret_ent(libs__compiler_util__unexpected_2_0,
		hlds__instmap__instmap_delta_bind_var_to_functors_9_0_i17);
MR_def_label(hlds__instmap__instmap_delta_bind_var_to_functors_9_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_np_call_localret_ent(hlds__instmap__bind_inst_to_functors_others_6_0,
		hlds__instmap__instmap_delta_bind_var_to_functors_9_0_i18);
MR_def_label(hlds__instmap__instmap_delta_bind_var_to_functors_9_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(3);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_tempr2 = MR_r2;
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tempr2;
	}
	MR_np_call_localret_ent(hlds__instmap__merge_var_insts_5_0,
		hlds__instmap__instmap_delta_bind_var_to_functors_9_0_i20);
MR_def_label(hlds__instmap__instmap_delta_bind_var_to_functors_9_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r2,0,0)) {
		MR_GOTO_LAB(hlds__instmap__instmap_delta_bind_var_to_functors_9_0_i22);
	}
	MR_r3 = MR_r2;
	MR_r2 = MR_sv(5);
	MR_sv(3) = MR_r1;
	MR_r1 = MR_tfield(1, MR_r3, 0);
	MR_GOTO_LAB(hlds__instmap__instmap_delta_bind_var_to_functors_9_0_i21);
MR_def_label(hlds__instmap__instmap_delta_bind_var_to_functors_9_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("instmap.m", 9);
	MR_r2 = (MR_Word) MR_string_const("bind_inst_to_functors: no MaybeMergedInst", 41);
	MR_np_call_localret_ent(libs__compiler_util__unexpected_2_0,
		hlds__instmap__instmap_delta_bind_var_to_functors_9_0_i21);
MR_def_label(hlds__instmap__instmap_delta_bind_var_to_functors_9_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_np_call_localret_ent(__Unify___parse_tree__prog_data__mer_inst_0_0,
		hlds__instmap__instmap_delta_bind_var_to_functors_9_0_i28);
MR_def_label(hlds__instmap__instmap_delta_bind_var_to_functors_9_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(hlds__instmap__instmap_delta_bind_var_to_functors_9_0_i25);
	}
	MR_r1 = MR_sv(2);
	MR_r3 = MR_tfield(1, MR_sv(7), 0);
	if (MR_LTAGS_TESTR(MR_r1,0,1)) {
		MR_GOTO_LAB(hlds__instmap__instmap_delta_bind_var_to_functors_9_0_i30);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = MR_sv(3);
	MR_decr_sp_and_return(10);
MR_def_label(hlds__instmap__instmap_delta_bind_var_to_functors_9_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_tempr2 = MR_r3;
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_inst);
	MR_r4 = MR_tempr2;
	MR_r5 = MR_sv(1);
	MR_r6 = MR_tempr1;
	}
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_115_101_116_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_0,
		hlds__instmap__instmap_delta_bind_var_to_functors_9_0_i33);
MR_def_label(hlds__instmap__instmap_delta_bind_var_to_functors_9_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(3);
	MR_decr_sp_and_return(10);
	}
MR_def_label(hlds__instmap__instmap_delta_bind_var_to_functors_9_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(3);
	MR_decr_sp_and_return(10);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__instmap_module39)
	MR_init_entry1(hlds__instmap__bind_var_to_functor_7_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__instmap__bind_var_to_functor_7_0);
	MR_init_label8(hlds__instmap__bind_var_to_functor_7_0,2,3,4,5,7,6,10,11)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'bind_var_to_functor'/7 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__hlds__instmap__bind_var_to_functor_7_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_sv(5) = MR_tempr1;
	MR_sv(6) = MR_r5;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(1);
	}
	MR_np_call_localret_ent(hlds__instmap__instmap_lookup_var_3_0,
		hlds__instmap__bind_var_to_functor_7_0_i2);
MR_def_label(hlds__instmap__bind_var_to_functor_7_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_np_call_localret_ent(fn__check_hlds__type_util__cons_id_adjusted_arity_3_0,
		hlds__instmap__bind_var_to_functor_7_0_i3);
MR_def_label(hlds__instmap__bind_var_to_functor_7_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, is_live);
	MR_r2 = MR_sv(7);
	MR_r3 = (MR_Integer) 1;
	MR_np_call_localret_ent(list__duplicate_3_0,
		hlds__instmap__bind_var_to_functor_7_0_i4);
MR_def_label(hlds__instmap__bind_var_to_functor_7_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(7);
	MR_sv(7) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_inst);
	MR_r2 = MR_tempr1;
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	}
	MR_np_call_localret_ent(list__duplicate_3_0,
		hlds__instmap__bind_var_to_functor_7_0_i5);
MR_def_label(hlds__instmap__bind_var_to_functor_7_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 1;
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_tempr1;
	MR_r5 = MR_sv(7);
	MR_r6 = (MR_Integer) 0;
	MR_r7 = MR_sv(2);
	MR_r8 = MR_sv(6);
	}
	MR_np_call_localret_ent(check_hlds__inst_util__abstractly_unify_inst_functor_11_0,
		hlds__instmap__bind_var_to_functor_7_0_i7);
MR_def_label(hlds__instmap__bind_var_to_functor_7_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(hlds__instmap__bind_var_to_functor_7_0_i6);
	}
	MR_r1 = MR_sv(1);
	MR_r3 = MR_sv(5);
	MR_sv(1) = MR_r4;
	MR_np_call_localret_ent(hlds__instmap__instmap_set_var_4_0,
		hlds__instmap__bind_var_to_functor_7_0_i11);
MR_def_label(hlds__instmap__bind_var_to_functor_7_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("instmap.m", 9);
	MR_r2 = (MR_Word) MR_string_const("bind_inst_to_functor: mode error", 32);
	MR_np_call_localret_ent(libs__compiler_util__unexpected_2_0,
		hlds__instmap__bind_var_to_functor_7_0_i10);
MR_def_label(hlds__instmap__bind_var_to_functor_7_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(hlds__instmap__instmap_set_var_4_0,
		hlds__instmap__bind_var_to_functor_7_0_i11);
MR_def_label(hlds__instmap__bind_var_to_functor_7_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_decr_sp_and_return(8);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__instmap_module40)
	MR_init_entry1(hlds__instmap__bind_var_to_functors_8_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__instmap__bind_var_to_functors_8_0);
	MR_init_label10(hlds__instmap__bind_var_to_functors_8_0,2,3,4,5,7,6,10,11,13,15)
	MR_init_label2(hlds__instmap__bind_var_to_functors_8_0,14,17)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'bind_var_to_functors'/8 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__hlds__instmap__bind_var_to_functors_8_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r5;
	MR_sv(6) = MR_tempr1;
	MR_sv(7) = MR_r6;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(1);
	}
	MR_np_call_localret_ent(hlds__instmap__instmap_lookup_var_3_0,
		hlds__instmap__bind_var_to_functors_8_0_i2);
MR_def_label(hlds__instmap__bind_var_to_functors_8_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_np_call_localret_ent(fn__check_hlds__type_util__cons_id_adjusted_arity_3_0,
		hlds__instmap__bind_var_to_functors_8_0_i3);
MR_def_label(hlds__instmap__bind_var_to_functors_8_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, is_live);
	MR_r2 = MR_sv(8);
	MR_r3 = (MR_Integer) 1;
	MR_np_call_localret_ent(list__duplicate_3_0,
		hlds__instmap__bind_var_to_functors_8_0_i4);
MR_def_label(hlds__instmap__bind_var_to_functors_8_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(8);
	MR_sv(8) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_inst);
	MR_r2 = MR_tempr1;
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	}
	MR_np_call_localret_ent(list__duplicate_3_0,
		hlds__instmap__bind_var_to_functors_8_0_i5);
MR_def_label(hlds__instmap__bind_var_to_functors_8_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 1;
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_tempr1;
	MR_r5 = MR_sv(8);
	MR_r6 = (MR_Integer) 0;
	MR_r7 = MR_sv(2);
	MR_r8 = MR_sv(7);
	}
	MR_np_call_localret_ent(check_hlds__inst_util__abstractly_unify_inst_functor_11_0,
		hlds__instmap__bind_var_to_functors_8_0_i7);
MR_def_label(hlds__instmap__bind_var_to_functors_8_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(hlds__instmap__bind_var_to_functors_8_0_i6);
	}
	MR_r1 = MR_sv(2);
	MR_sv(3) = MR_r2;
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(5);
	MR_GOTO_LAB(hlds__instmap__bind_var_to_functors_8_0_i10);
MR_def_label(hlds__instmap__bind_var_to_functors_8_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("instmap.m", 9);
	MR_r2 = (MR_Word) MR_string_const("bind_inst_to_functor: mode error", 32);
	MR_np_call_localret_ent(libs__compiler_util__unexpected_2_0,
		hlds__instmap__bind_var_to_functors_8_0_i10);
MR_def_label(hlds__instmap__bind_var_to_functors_8_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_np_call_localret_ent(hlds__instmap__bind_inst_to_functors_others_6_0,
		hlds__instmap__bind_var_to_functors_8_0_i11);
MR_def_label(hlds__instmap__bind_var_to_functors_8_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(3);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_tempr2 = MR_r2;
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tempr2;
	}
	MR_np_call_localret_ent(hlds__instmap__merge_var_insts_5_0,
		hlds__instmap__bind_var_to_functors_8_0_i13);
MR_def_label(hlds__instmap__bind_var_to_functors_8_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r2,0,0)) {
		MR_GOTO_LAB(hlds__instmap__bind_var_to_functors_8_0_i15);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tfield(1, MR_r2, 0);
	MR_r3 = MR_sv(6);
	MR_sv(1) = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__instmap__instmap_set_var_4_0,
		hlds__instmap__bind_var_to_functors_8_0_i17);
MR_def_label(hlds__instmap__bind_var_to_functors_8_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("instmap.m", 9);
	MR_r2 = (MR_Word) MR_string_const("bind_inst_to_functors: no MaybeMergedInst", 41);
	}
	MR_np_call_localret_ent(libs__compiler_util__unexpected_2_0,
		hlds__instmap__bind_var_to_functors_8_0_i14);
MR_def_label(hlds__instmap__bind_var_to_functors_8_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(hlds__instmap__instmap_set_var_4_0,
		hlds__instmap__bind_var_to_functors_8_0_i17);
MR_def_label(hlds__instmap__bind_var_to_functors_8_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_decr_sp_and_return(9);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_111_118_101_114_108_97_121_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0);

MR_BEGIN_MODULE(hlds__instmap_module41)
	MR_init_entry1(hlds__instmap__apply_instmap_delta_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__instmap__apply_instmap_delta_3_0);
	MR_init_label3(hlds__instmap__apply_instmap_delta_3_0,3,21,7)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'apply_instmap_delta'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__hlds__instmap__apply_instmap_delta_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(hlds__instmap__apply_instmap_delta_3_0_i3);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(hlds__instmap__apply_instmap_delta_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(hlds__instmap__apply_instmap_delta_3_0_i21);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(hlds__instmap__apply_instmap_delta_3_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_tempr2 = MR_r2;
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_inst);
	MR_r4 = MR_tfield(1, MR_tempr1, 0);
	MR_r5 = MR_tfield(1, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_111_118_101_114_108_97_121_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		hlds__instmap__apply_instmap_delta_3_0_i7);
MR_def_label(hlds__instmap__apply_instmap_delta_3_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r2, 0) = MR_r1;
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(1);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(check_hlds__mode_util__mode_list_get_initial_insts_3_0);
MR_decl_entry(assoc_list__from_corresponding_lists_3_0);

MR_BEGIN_MODULE(hlds__instmap_module42)
	MR_init_entry1(hlds__instmap__pre_lambda_update_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__instmap__pre_lambda_update_5_0);
	MR_init_label3(hlds__instmap__pre_lambda_update_5_0,2,4,5)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'pre_lambda_update'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__hlds__instmap__pre_lambda_update_5_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r4;
	MR_r2 = MR_r3;
	MR_np_call_localret_ent(check_hlds__mode_util__mode_list_get_initial_insts_3_0,
		hlds__instmap__pre_lambda_update_5_0_i2);
MR_def_label(hlds__instmap__pre_lambda_update_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_tempr2 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_inst);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tempr2;
	}
	MR_np_call_localret_ent(assoc_list__from_corresponding_lists_3_0,
		hlds__instmap__pre_lambda_update_5_0_i4);
MR_def_label(hlds__instmap__pre_lambda_update_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_inst);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(map__from_assoc_list_2_0,
		hlds__instmap__pre_lambda_update_5_0_i5);
MR_def_label(hlds__instmap__pre_lambda_update_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r2, 0) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(hlds__instmap__apply_instmap_delta_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__instmap_module43)
	MR_init_entry1(hlds__instmap__compute_instmap_delta_2_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__instmap__compute_instmap_delta_2_4_0);
	MR_init_label10(hlds__instmap__compute_instmap_delta_2_4_0,39,4,7,5,9,12,10,14,17,15)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'compute_instmap_delta_2'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__instmap__compute_instmap_delta_2_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(hlds__instmap__compute_instmap_delta_2_4_0_i39);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(hlds__instmap__compute_instmap_delta_2_4_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_tfield(1, MR_r1, 0);
	MR_r1 = MR_tfield(1, MR_r1, 1);
	MR_np_localcall_lab(hlds__instmap__compute_instmap_delta_2_4_0,
		hlds__instmap__compute_instmap_delta_2_4_0_i4);
MR_def_label(hlds__instmap__compute_instmap_delta_2_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_inst);
	MR_r4 = MR_tempr1;
	MR_r5 = MR_sv(3);
	}
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		hlds__instmap__compute_instmap_delta_2_4_0_i7);
MR_def_label(hlds__instmap__compute_instmap_delta_2_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(hlds__instmap__compute_instmap_delta_2_4_0_i5);
	}
	MR_r4 = MR_sv(2);
	MR_r5 = MR_sv(3);
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(hlds__instmap__compute_instmap_delta_2_4_0_i9);
MR_def_label(hlds__instmap__compute_instmap_delta_2_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_sv(2);
	MR_r5 = MR_sv(3);
	MR_sv(2) = (MR_Word) MR_tbmkword(0, 0);
MR_def_label(hlds__instmap__compute_instmap_delta_2_4_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r5;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_inst);
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		hlds__instmap__compute_instmap_delta_2_4_0_i12);
MR_def_label(hlds__instmap__compute_instmap_delta_2_4_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(hlds__instmap__compute_instmap_delta_2_4_0_i10);
	}
	MR_r1 = MR_sv(2);
	MR_GOTO_LAB(hlds__instmap__compute_instmap_delta_2_4_0_i14);
MR_def_label(hlds__instmap__compute_instmap_delta_2_4_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
MR_def_label(hlds__instmap__compute_instmap_delta_2_4_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r2;
	MR_np_call_localret_ent(__Unify___parse_tree__prog_data__mer_inst_0_0,
		hlds__instmap__compute_instmap_delta_2_4_0_i17);
MR_def_label(hlds__instmap__compute_instmap_delta_2_4_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(hlds__instmap__compute_instmap_delta_2_4_0_i15);
	}
	MR_r1 = MR_sv(1);
	MR_decr_sp_and_return(4);
MR_def_label(hlds__instmap__compute_instmap_delta_2_4_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(3);
	MR_tfield(0, MR_tempr1, 1) = MR_r2;
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = MR_tempr1;
	MR_tfield(1, MR_r1, 1) = MR_sv(1);
	MR_decr_sp_and_return(4);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(set__to_sorted_list_2_0);
MR_decl_entry(map__from_sorted_assoc_list_2_0);

MR_BEGIN_MODULE(hlds__instmap_module44)
	MR_init_entry1(hlds__instmap__compute_instmap_delta_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__instmap__compute_instmap_delta_4_0);
	MR_init_label5(hlds__instmap__compute_instmap_delta_4_0,3,23,7,8,9)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'compute_instmap_delta'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__hlds__instmap__compute_instmap_delta_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(hlds__instmap__compute_instmap_delta_4_0_i3);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(hlds__instmap__compute_instmap_delta_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(hlds__instmap__compute_instmap_delta_4_0_i23);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(hlds__instmap__compute_instmap_delta_4_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_tfield(1, MR_r2, 0);
	MR_sv(2) = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_sv(3) = MR_tfield(1, MR_r1, 0);
	MR_r1 = MR_sv(2);
	MR_r2 = MR_r3;
	MR_np_call_localret_ent(set__to_sorted_list_2_0,
		hlds__instmap__compute_instmap_delta_4_0_i7);
MR_def_label(hlds__instmap__compute_instmap_delta_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(1);
	MR_np_call_localret_ent(hlds__instmap__compute_instmap_delta_2_4_0,
		hlds__instmap__compute_instmap_delta_4_0_i8);
MR_def_label(hlds__instmap__compute_instmap_delta_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_inst);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(map__from_sorted_assoc_list_2_0,
		hlds__instmap__compute_instmap_delta_4_0_i9);
MR_def_label(hlds__instmap__compute_instmap_delta_4_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r2, 0) = MR_r1;
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(4);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(map__overlay_large_map_3_0);
MR_decl_entry(map__count_2_0);

MR_BEGIN_MODULE(hlds__instmap_module45)
	MR_init_entry1(hlds__instmap__instmap_delta_apply_instmap_delta_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__instmap__instmap_delta_apply_instmap_delta_4_0);
	MR_init_label10(hlds__instmap__instmap_delta_apply_instmap_delta_4_0,3,53,9,7,13,11,17,18,15,22)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'instmap_delta_apply_instmap_delta'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__hlds__instmap__instmap_delta_apply_instmap_delta_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(hlds__instmap__instmap_delta_apply_instmap_delta_4_0_i3);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(hlds__instmap__instmap_delta_apply_instmap_delta_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(hlds__instmap__instmap_delta_apply_instmap_delta_4_0_i53);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(hlds__instmap__instmap_delta_apply_instmap_delta_4_0,53)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	if (MR_INT_NE(MR_r3,0)) {
		MR_GOTO_LAB(hlds__instmap__instmap_delta_apply_instmap_delta_4_0_i7);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_tempr2 = MR_r2;
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_inst);
	MR_r4 = MR_tfield(1, MR_tempr1, 0);
	MR_r5 = MR_tfield(1, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_111_118_101_114_108_97_121_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		hlds__instmap__instmap_delta_apply_instmap_delta_4_0_i9);
MR_def_label(hlds__instmap__instmap_delta_apply_instmap_delta_4_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r2, 0) = MR_r1;
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(6);
MR_def_label(hlds__instmap__instmap_delta_apply_instmap_delta_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r3,1)) {
		MR_GOTO_LAB(hlds__instmap__instmap_delta_apply_instmap_delta_4_0_i11);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_tempr2 = MR_r2;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_inst);
	MR_r3 = MR_tfield(1, MR_tempr1, 0);
	MR_r4 = MR_tfield(1, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(map__overlay_large_map_3_0,
		hlds__instmap__instmap_delta_apply_instmap_delta_4_0_i13);
MR_def_label(hlds__instmap__instmap_delta_apply_instmap_delta_4_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(6);
	}
MR_def_label(hlds__instmap__instmap_delta_apply_instmap_delta_4_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_tfield(1, MR_r1, 0);
	MR_sv(1) = MR_tfield(1, MR_r2, 0);
	MR_sv(3) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_sv(4) = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_sv(5) = MR_r3;
	MR_r1 = MR_sv(4);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_inst);
	MR_np_call_localret_ent(map__count_2_0,
		hlds__instmap__instmap_delta_apply_instmap_delta_4_0_i17);
MR_def_label(hlds__instmap__instmap_delta_apply_instmap_delta_4_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_inst);
	MR_r3 = MR_sv(1);
	MR_np_call_localret_ent(map__count_2_0,
		hlds__instmap__instmap_delta_apply_instmap_delta_4_0_i18);
MR_def_label(hlds__instmap__instmap_delta_apply_instmap_delta_4_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) MR_sv(2) < (MR_Integer) MR_r1)) {
		MR_GOTO_LAB(hlds__instmap__instmap_delta_apply_instmap_delta_4_0_i15);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(4);
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_inst);
	MR_r4 = MR_sv(5);
	MR_r5 = MR_sv(1);
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_111_118_101_114_108_97_121_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		hlds__instmap__instmap_delta_apply_instmap_delta_4_0_i22);
MR_def_label(hlds__instmap__instmap_delta_apply_instmap_delta_4_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_inst);
	MR_r3 = MR_sv(5);
	MR_r4 = MR_sv(1);
	MR_np_call_localret_ent(map__overlay_large_map_3_0,
		hlds__instmap__instmap_delta_apply_instmap_delta_4_0_i22);
MR_def_label(hlds__instmap__instmap_delta_apply_instmap_delta_4_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(6);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__instmap_module46)
	MR_init_entry1(hlds__instmap__get_reachable_instmaps_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__instmap__get_reachable_instmaps_2_0);
	MR_init_label4(hlds__instmap__get_reachable_instmaps_2_0,18,3,5,7)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'get_reachable_instmaps'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__instmap__get_reachable_instmaps_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
MR_def_label(hlds__instmap__get_reachable_instmaps_2_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(hlds__instmap__get_reachable_instmaps_2_0_i3);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_decr_sp_and_return(2);
MR_def_label(hlds__instmap__get_reachable_instmaps_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_tfield(1, MR_r1, 0);
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(hlds__instmap__get_reachable_instmaps_2_0_i5);
	}
	MR_r1 = MR_tfield(1, MR_r1, 1);
	MR_succip_word = MR_sv(2);
	MR_GOTO_LAB(hlds__instmap__get_reachable_instmaps_2_0_i18);
MR_def_label(hlds__instmap__get_reachable_instmaps_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_tfield(1, MR_r2, 0);
	MR_r1 = MR_tfield(1, MR_r1, 1);
	MR_np_localcall_lab(hlds__instmap__get_reachable_instmaps_2_0,
		hlds__instmap__get_reachable_instmaps_2_0_i7);
MR_def_label(hlds__instmap__get_reachable_instmaps_2_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(1);
	MR_tfield(1, MR_r2, 1) = MR_r1;
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(2);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(list__map_3_0);

MR_BEGIN_MODULE(hlds__instmap_module47)
	MR_init_entry1(hlds__instmap__merge_insts_of_vars_8_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__instmap__merge_insts_of_vars_8_0);
	MR_init_label8(hlds__instmap__merge_insts_of_vars_8_0,27,4,6,8,9,14,11,15)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'merge_insts_of_vars'/8 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__instmap__merge_insts_of_vars_8_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(hlds__instmap__merge_insts_of_vars_8_0_i27);
	}
	MR_r1 = MR_r4;
	MR_r2 = MR_r5;
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(hlds__instmap__merge_insts_of_vars_8_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_tfield(1, MR_r1, 0);
	MR_r1 = MR_tfield(1, MR_r1, 1);
	MR_np_localcall_lab(hlds__instmap__merge_insts_of_vars_8_0,
		hlds__instmap__merge_insts_of_vars_8_0_i4);
MR_def_label(hlds__instmap__merge_insts_of_vars_8_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_sv(4) = MR_r2;
	MR_sv(5) = MR_r3;
	MR_sv(6) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_sv(7) = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(7);
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r4 = MR_tempr1;
	MR_r5 = MR_sv(3);
	}
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		hlds__instmap__merge_insts_of_vars_8_0_i6);
MR_def_label(hlds__instmap__merge_insts_of_vars_8_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(9,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(hlds__instmap__lookup_var_in_instmap_3_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(3);
	MR_tempr2 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_sv(8) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_inst);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__instmap, instmap);
	MR_r2 = MR_sv(8);
	MR_r4 = MR_tempr2;
	}
	MR_np_call_localret_ent(list__map_3_0,
		hlds__instmap__merge_insts_of_vars_8_0_i8);
MR_def_label(hlds__instmap__merge_insts_of_vars_8_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(4);
	}
	MR_np_call_localret_ent(hlds__instmap__merge_var_insts_5_0,
		hlds__instmap__merge_insts_of_vars_8_0_i9);
MR_def_label(hlds__instmap__merge_insts_of_vars_8_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(hlds__instmap__merge_insts_of_vars_8_0_i11);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tempr4 = MR_sv(3);
	MR_tfield(0, MR_tempr1, 0) = MR_tempr4;
	MR_tfield(0, MR_tempr1, 1) = MR_sv(1);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = MR_sv(5);
	MR_sv(1) = MR_r1;
	MR_tempr3 = MR_sv(2);
	MR_sv(2) = MR_tempr2;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(7);
	MR_r3 = MR_sv(8);
	MR_r4 = MR_tempr4;
	MR_r5 = (MR_Word) MR_tbmkword(0, 1);
	MR_r6 = MR_tempr3;
	}
	MR_np_call_localret_ent(f_115_118_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_115_101_116_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_0,
		hlds__instmap__merge_insts_of_vars_8_0_i14);
MR_def_label(hlds__instmap__merge_insts_of_vars_8_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_decr_sp_and_return(9);
MR_def_label(hlds__instmap__merge_insts_of_vars_8_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(6);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(7);
	MR_r3 = MR_sv(8);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_tfield(1, MR_tempr1, 0);
	MR_r6 = MR_sv(2);
	}
	MR_np_call_localret_ent(f_115_118_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_115_101_116_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_0,
		hlds__instmap__merge_insts_of_vars_8_0_i15);
MR_def_label(hlds__instmap__merge_insts_of_vars_8_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(5);
	MR_decr_sp_and_return(9);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(check_hlds__mode_info__mode_info_get_instmap_2_0);
MR_decl_entry(check_hlds__mode_info__mode_info_get_module_info_2_0);
MR_decl_entry(check_hlds__mode_info__mode_info_get_var_types_2_0);
MR_decl_entry(check_hlds__mode_info__mode_info_set_module_info_3_0);
MR_decl_entry(check_hlds__mode_info__mode_info_set_instmap_3_0);
MR_decl_entry(set__singleton_set_2_1);
MR_decl_entry(check_hlds__mode_info__mode_info_error_4_0);

MR_BEGIN_MODULE(hlds__instmap_module48)
	MR_init_entry1(hlds__instmap__instmap_merge_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__instmap__instmap_merge_5_0);
	MR_init_label10(hlds__instmap__instmap_merge_5_0,2,3,4,9,10,11,12,24,14,16)
	MR_init_label1(hlds__instmap__instmap_merge_5_0,5)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'instmap_merge'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__hlds__instmap__instmap_merge_5_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_sv(6) = MR_tempr1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_get_instmap_2_0,
		hlds__instmap__instmap_merge_5_0_i2);
MR_def_label(hlds__instmap__instmap_merge_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(6);
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_get_module_info_2_0,
		hlds__instmap__instmap_merge_5_0_i3);
MR_def_label(hlds__instmap__instmap_merge_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(hlds__instmap__get_reachable_instmaps_2_0,
		hlds__instmap__instmap_merge_5_0_i4);
MR_def_label(hlds__instmap__instmap_merge_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(hlds__instmap__instmap_merge_5_0_i5);
	}
	if (MR_LTAGS_TEST(MR_sv(4),0,0)) {
		MR_GOTO_LAB(hlds__instmap__instmap_merge_5_0_i5);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_tfield(1, MR_sv(4), 0);
	MR_sv(7) = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r1 = MR_sv(7);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(set__to_sorted_list_2_0,
		hlds__instmap__instmap_merge_5_0_i9);
MR_def_label(hlds__instmap__instmap_merge_5_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(6);
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_get_var_types_2_0,
		hlds__instmap__instmap_merge_5_0_i10);
MR_def_label(hlds__instmap__instmap_merge_5_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(1);
	MR_r5 = MR_sv(5);
	}
	MR_np_call_localret_ent(hlds__instmap__merge_insts_of_vars_8_0,
		hlds__instmap__instmap_merge_5_0_i11);
MR_def_label(hlds__instmap__instmap_merge_5_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r3;
	MR_r1 = MR_r2;
	MR_r2 = MR_sv(6);
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_set_module_info_3_0,
		hlds__instmap__instmap_merge_5_0_i12);
MR_def_label(hlds__instmap__instmap_merge_5_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,0)) {
		MR_GOTO_LAB(hlds__instmap__instmap_merge_5_0_i14);
	}
MR_def_label(hlds__instmap__instmap_merge_5_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tempr2 = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_tempr2;
	MR_succip_word = MR_sv(8);
	MR_decr_sp(8);
	MR_np_tailcall_ent(check_hlds__mode_info__mode_info_set_instmap_3_0);
	}
MR_def_label(hlds__instmap__instmap_merge_5_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_tfield(0, MR_tfield(1, MR_sv(2), 0), 0);
	MR_np_call_localret_ent(set__singleton_set_2_1,
		hlds__instmap__instmap_merge_5_0_i16);
MR_def_label(hlds__instmap__instmap_merge_5_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(3);
	MR_tfield(1, MR_r2, 1) = MR_sv(2);
	MR_r3 = MR_sv(4);
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_error_4_0,
		hlds__instmap__instmap_merge_5_0_i24);
MR_def_label(hlds__instmap__instmap_merge_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = MR_sv(6);
	MR_succip_word = MR_sv(8);
	MR_decr_sp(8);
	MR_np_tailcall_ent(check_hlds__mode_info__mode_info_set_instmap_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_109_98_101_114_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_0);
MR_decl_entry(check_hlds__inst_util__abstractly_unify_inst_8_0);

MR_BEGIN_MODULE(hlds__instmap_module49)
	MR_init_entry1(hlds__instmap__unify_var_insts_10_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__instmap__unify_var_insts_10_0);
	MR_init_label7(hlds__instmap__unify_var_insts_10_0,31,3,6,8,10,9,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'unify_var_insts'/10 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__instmap__unify_var_insts_10_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
MR_def_label(hlds__instmap__unify_var_insts_10_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(hlds__instmap__unify_var_insts_10_0_i3);
	}
	MR_r1 = MR_r3;
	MR_r2 = MR_r4;
	MR_r3 = MR_r5;
	MR_r4 = MR_r6;
	MR_decr_sp_and_return(8);
MR_def_label(hlds__instmap__unify_var_insts_10_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_tfield(1, MR_r1, 1);
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_r5;
	MR_sv(5) = MR_r6;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(1, MR_r1, 0);
	MR_sv(6) = MR_tfield(0, MR_tempr1, 0);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_tfield(0, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_109_98_101_114_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_0,
		hlds__instmap__unify_var_insts_10_0_i6);
MR_def_label(hlds__instmap__unify_var_insts_10_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(hlds__instmap__unify_var_insts_10_0_i4);
	}
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(hlds__instmap__instmap_lookup_var_3_0,
		hlds__instmap__unify_var_insts_10_0_i8);
MR_def_label(hlds__instmap__unify_var_insts_10_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = (MR_Integer) 0;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(3);
	MR_r4 = (MR_Integer) 1;
	MR_r5 = MR_sv(4);
	}
	MR_np_call_localret_ent(check_hlds__inst_util__abstractly_unify_inst_8_0,
		hlds__instmap__unify_var_insts_10_0_i10);
MR_def_label(hlds__instmap__unify_var_insts_10_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(hlds__instmap__unify_var_insts_10_0_i9);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(3);
	MR_tfield(1, MR_tempr1, 1) = MR_sv(2);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_sv(1);
	MR_r1 = MR_sv(7);
	MR_r6 = MR_sv(5);
	MR_tempr3 = MR_r4;
	MR_r4 = MR_tempr2;
	MR_r5 = MR_tempr3;
	MR_succip_word = MR_sv(8);
	MR_GOTO_LAB(hlds__instmap__unify_var_insts_10_0_i31);
	}
MR_def_label(hlds__instmap__unify_var_insts_10_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(3);
	MR_tfield(1, MR_tempr1, 1) = MR_sv(2);
	MR_r2 = MR_sv(1);
	MR_r1 = MR_sv(7);
	MR_r6 = (MR_Integer) 1;
	MR_r4 = (MR_Word) MR_tbmkword(0, 1);
	MR_r5 = MR_sv(4);
	MR_succip_word = MR_sv(8);
	MR_GOTO_LAB(hlds__instmap__unify_var_insts_10_0_i31);
	}
MR_def_label(hlds__instmap__unify_var_insts_10_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(1, MR_tempr1, 1) = MR_sv(2);
	MR_r2 = MR_sv(1);
	MR_r1 = MR_sv(7);
	MR_r6 = MR_sv(5);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(4);
	MR_succip_word = MR_sv(8);
	MR_GOTO_LAB(hlds__instmap__unify_var_insts_10_0_i31);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__instmap_module50)
	MR_init_entry1(hlds__instmap__unify_insts_of_vars_8_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__instmap__unify_insts_of_vars_8_0);
	MR_init_label6(hlds__instmap__unify_insts_of_vars_8_0,24,4,5,6,8,13)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'unify_insts_of_vars'/8 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__instmap__unify_insts_of_vars_8_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(hlds__instmap__unify_insts_of_vars_8_0_i24);
	}
	MR_r1 = MR_r4;
	MR_r2 = MR_r5;
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(hlds__instmap__unify_insts_of_vars_8_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_tfield(1, MR_r1, 0);
	MR_r1 = MR_tfield(1, MR_r1, 1);
	MR_np_localcall_lab(hlds__instmap__unify_insts_of_vars_8_0,
		hlds__instmap__unify_insts_of_vars_8_0_i4);
MR_def_label(hlds__instmap__unify_insts_of_vars_8_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r3;
	MR_sv(4) = MR_r1;
	MR_sv(5) = MR_r2;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(3);
	}
	MR_np_call_localret_ent(hlds__instmap__instmap_lookup_var_3_0,
		hlds__instmap__unify_insts_of_vars_8_0_i5);
MR_def_label(hlds__instmap__unify_insts_of_vars_8_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(3);
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_r4 = MR_tempr1;
	MR_r5 = MR_sv(4);
	MR_r6 = (MR_Integer) 0;
	}
	MR_np_call_localret_ent(hlds__instmap__unify_var_insts_10_0,
		hlds__instmap__unify_insts_of_vars_8_0_i6);
MR_def_label(hlds__instmap__unify_insts_of_vars_8_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r4,0)) {
		MR_GOTO_LAB(hlds__instmap__unify_insts_of_vars_8_0_i8);
	}
	MR_sv(2) = MR_sv(1);
	MR_sv(1) = MR_r3;
	MR_r5 = MR_sv(3);
	MR_r6 = MR_r2;
	MR_r4 = MR_sv(5);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_inst);
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_115_101_116_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_0,
		hlds__instmap__unify_insts_of_vars_8_0_i13);
MR_def_label(hlds__instmap__unify_insts_of_vars_8_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tempr3 = MR_sv(3);
	MR_tfield(0, MR_tempr1, 0) = MR_tempr3;
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_sv(2) = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = MR_sv(1);
	MR_sv(1) = MR_r3;
	MR_r5 = MR_tempr3;
	MR_r6 = MR_r2;
	MR_r4 = MR_sv(5);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_inst);
	}
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_115_101_116_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_0,
		hlds__instmap__unify_insts_of_vars_8_0_i13);
MR_def_label(hlds__instmap__unify_insts_of_vars_8_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(2);
	MR_decr_sp_and_return(6);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(list__member_2_1);
MR_decl_entry(builtin__unify_2_0);
MR_declare_entry(MR_do_redo);

MR_BEGIN_MODULE(hlds__instmap_module51)
	MR_init_entry1(hlds__instmap__instmap_unify_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__instmap__instmap_unify_4_0);
	MR_init_label10(hlds__instmap__instmap_unify_4_0,10,11,4,13,3,15,22,24,25,26)
	MR_init_label4(hlds__instmap__instmap_unify_4_0,49,28,30,19)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'instmap_unify'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__hlds__instmap__instmap_unify_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(10);
	MR_sv(10) = (MR_Word) MR_succip;
	MR_sv(7) = (MR_Word) MR_redoip_slot(MR_maxfr);
	MR_sv(8) = (MR_Word) MR_redofr_slot(MR_maxfr);
	MR_save_maxfr(MR_sv(9));
	MR_redofr_slot_word(MR_maxfr) = (MR_Word) MR_curfr;
	MR_redoip_slot_word(MR_maxfr) = (MR_Word) MR_LABEL_AP(hlds__instmap__instmap_unify_4_0_i4);
	MR_tag_alloc_heap(MR_sv(3), 0, (MR_Integer) 2);
	MR_tfield(0, MR_sv(3), 0) = (MR_Word) MR_tbmkword(0, 0);
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(5) = MR_r3;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,2,2);
	MR_np_call_localret_ent(list__member_2_1,
		hlds__instmap__instmap_unify_4_0_i10);
MR_def_label(hlds__instmap__instmap_unify_4_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(0, MR_r1, 1);
	MR_tempr2 = MR_sv(3);
	MR_tfield(0, MR_tempr2, 1) = MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__instmap, instmap);
	MR_r2 = MR_tfield(0, MR_tempr1, 0);
	MR_r3 = MR_tfield(0, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(builtin__unify_2_0,
		hlds__instmap__instmap_unify_4_0_i11);
MR_def_label(hlds__instmap__instmap_unify_4_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO(MR_ENTRY(MR_do_redo));
	}
	MR_restore_maxfr(MR_sv(9));
	MR_redoip_slot_word(MR_maxfr) = MR_sv(7);
	MR_redofr_slot_word(MR_maxfr) = MR_sv(8);
	MR_GOTO_LAB(hlds__instmap__instmap_unify_4_0_i13);
MR_def_label(hlds__instmap__instmap_unify_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(5);
	MR_redoip_slot_word(MR_maxfr) = MR_sv(7);
	MR_redofr_slot_word(MR_maxfr) = MR_sv(8);
	MR_GOTO_LAB(hlds__instmap__instmap_unify_4_0_i3);
MR_def_label(hlds__instmap__instmap_unify_4_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = MR_sv(5);
	MR_succip_word = MR_sv(10);
	MR_decr_sp(10);
	MR_np_tailcall_ent(check_hlds__mode_info__mode_info_set_instmap_3_0);
MR_def_label(hlds__instmap__instmap_unify_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r2,0,0)) {
		MR_GOTO_LAB(hlds__instmap__instmap_unify_4_0_i15);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(1, MR_r2, 1);
	if (MR_LTAGS_TESTR(MR_tempr1,0,0)) {
		MR_GOTO_LAB(hlds__instmap__instmap_unify_4_0_i15);
	}
	MR_r1 = MR_tfield(0, MR_tfield(1, MR_r2, 0), 0);
	MR_r2 = MR_r3;
	MR_succip_word = MR_sv(10);
	MR_decr_sp(10);
	MR_np_tailcall_ent(check_hlds__mode_info__mode_info_set_instmap_3_0);
	}
MR_def_label(hlds__instmap__instmap_unify_4_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r2,0,0)) {
		MR_GOTO_LAB(hlds__instmap__instmap_unify_4_0_i19);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(0, MR_tfield(1, MR_r2, 0), 0);
	if (MR_LTAGS_TEST(MR_tempr1,0,0)) {
		MR_GOTO_LAB(hlds__instmap__instmap_unify_4_0_i19);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_tempr1;
	MR_sv(3) = MR_tfield(1, MR_r2, 1);
	MR_sv(4) = MR_tfield(1, MR_tempr1, 0);
	MR_tempr2 = MR_r3;
	MR_sv(5) = MR_tempr2;
	MR_r1 = MR_tempr2;
	}
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_get_module_info_2_0,
		hlds__instmap__instmap_unify_4_0_i22);
MR_def_label(hlds__instmap__instmap_unify_4_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_sv(6) = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r1 = MR_sv(6);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(set__to_sorted_list_2_0,
		hlds__instmap__instmap_unify_4_0_i24);
MR_def_label(hlds__instmap__instmap_unify_4_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(1);
	MR_r5 = MR_sv(4);
	MR_np_call_localret_ent(hlds__instmap__unify_insts_of_vars_8_0,
		hlds__instmap__instmap_unify_4_0_i25);
MR_def_label(hlds__instmap__instmap_unify_4_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_set_module_info_3_0,
		hlds__instmap__instmap_unify_4_0_i26);
MR_def_label(hlds__instmap__instmap_unify_4_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,0)) {
		MR_GOTO_LAB(hlds__instmap__instmap_unify_4_0_i28);
	}
MR_def_label(hlds__instmap__instmap_unify_4_0,49)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_r2 = MR_r1;
	MR_r1 = MR_tempr1;
	MR_succip_word = MR_sv(10);
	MR_decr_sp(10);
	MR_np_tailcall_ent(check_hlds__mode_info__mode_info_set_instmap_3_0);
	}
MR_def_label(hlds__instmap__instmap_unify_4_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_tfield(0, MR_tfield(1, MR_sv(2), 0), 0);
	MR_np_call_localret_ent(set__singleton_set_2_1,
		hlds__instmap__instmap_unify_4_0_i30);
MR_def_label(hlds__instmap__instmap_unify_4_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 2, (MR_Integer) 1);
	MR_tfield(2, MR_r2, 0) = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_error_4_0,
		hlds__instmap__instmap_unify_4_0_i49);
MR_def_label(hlds__instmap__instmap_unify_4_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r3;
	MR_decr_sp_and_return(10);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_108_101_99_116_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0);

MR_BEGIN_MODULE(hlds__instmap_module52)
	MR_init_entry1(hlds__instmap__instmap_restrict_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__instmap__instmap_restrict_3_0);
	MR_init_label2(hlds__instmap__instmap_restrict_3_0,14,5)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'instmap_restrict'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__hlds__instmap__instmap_restrict_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(hlds__instmap__instmap_restrict_3_0_i14);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(hlds__instmap__instmap_restrict_3_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_tempr2 = MR_r2;
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_inst);
	MR_r4 = MR_tfield(1, MR_tempr2, 0);
	MR_r5 = MR_tempr1;
	}
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_108_101_99_116_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		hlds__instmap__instmap_restrict_3_0_i5);
MR_def_label(hlds__instmap__instmap_restrict_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r2, 0) = MR_r1;
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(1);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__instmap_module53)
	MR_init_entry1(hlds__instmap__instmap_delta_restrict_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__instmap__instmap_delta_restrict_3_0);
	MR_init_label2(hlds__instmap__instmap_delta_restrict_3_0,14,5)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'instmap_delta_restrict'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__hlds__instmap__instmap_delta_restrict_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(hlds__instmap__instmap_delta_restrict_3_0_i14);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(hlds__instmap__instmap_delta_restrict_3_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_tempr2 = MR_r2;
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_inst);
	MR_r4 = MR_tfield(1, MR_tempr2, 0);
	MR_r5 = MR_tempr1;
	}
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_108_101_99_116_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		hlds__instmap__instmap_delta_restrict_3_0_i5);
MR_def_label(hlds__instmap__instmap_delta_restrict_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r2, 0) = MR_r1;
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(1);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(map__delete_list_3_0);

MR_BEGIN_MODULE(hlds__instmap_module54)
	MR_init_entry1(hlds__instmap__instmap_delta_delete_vars_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__instmap__instmap_delta_delete_vars_3_0);
	MR_init_label2(hlds__instmap__instmap_delta_delete_vars_3_0,14,5)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'instmap_delta_delete_vars'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__hlds__instmap__instmap_delta_delete_vars_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(hlds__instmap__instmap_delta_delete_vars_3_0_i14);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(hlds__instmap__instmap_delta_delete_vars_3_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_tempr2 = MR_r2;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_inst);
	MR_r3 = MR_tfield(1, MR_tempr2, 0);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(map__delete_list_3_0,
		hlds__instmap__instmap_delta_delete_vars_3_0_i5);
MR_def_label(hlds__instmap__instmap_delta_delete_vars_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r2, 0) = MR_r1;
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(1);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(check_hlds__inst_match__inst_matches_binding_4_0);
MR_decl_entry(check_hlds__inst_util__inst_contains_any_2_0);

MR_BEGIN_MODULE(hlds__instmap_module55)
	MR_init_entry1(hlds__instmap__instmap_delta_no_output_vars_2_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__instmap__instmap_delta_no_output_vars_2_5_0);
	MR_init_label9(hlds__instmap__instmap_delta_no_output_vars_2_5_0,36,4,7,9,10,5,14,2,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'instmap_delta_no_output_vars_2'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__instmap__instmap_delta_no_output_vars_2_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(10);
	MR_sv(10) = (MR_Word) MR_succip;
MR_def_label(hlds__instmap__instmap_delta_no_output_vars_2_5_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(hlds__instmap__instmap_delta_no_output_vars_2_5_0_i2);
	}
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_r5;
	MR_sv(5) = MR_tfield(1, MR_r1, 0);
	MR_sv(6) = MR_tfield(1, MR_r1, 1);
	MR_r1 = MR_r2;
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(hlds__instmap__instmap_lookup_var_3_0,
		hlds__instmap__instmap_delta_no_output_vars_2_5_0_i4);
MR_def_label(hlds__instmap__instmap_delta_no_output_vars_2_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_sv(8) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_sv(9) = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(9);
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_inst);
	MR_r4 = MR_sv(2);
	MR_r5 = MR_sv(5);
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		hlds__instmap__instmap_delta_no_output_vars_2_5_0_i7);
MR_def_label(hlds__instmap__instmap_delta_no_output_vars_2_5_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(hlds__instmap__instmap_delta_no_output_vars_2_5_0_i5);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(5);
	MR_sv(5) = MR_r2;
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(9);
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_tempr1;
	}
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		hlds__instmap__instmap_delta_no_output_vars_2_5_0_i9);
MR_def_label(hlds__instmap__instmap_delta_no_output_vars_2_5_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(7);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(4);
	}
	MR_np_call_localret_ent(check_hlds__inst_match__inst_matches_binding_4_0,
		hlds__instmap__instmap_delta_no_output_vars_2_5_0_i10);
MR_def_label(hlds__instmap__instmap_delta_no_output_vars_2_5_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(hlds__instmap__instmap_delta_no_output_vars_2_5_0_i1);
	}
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(4);
	MR_r1 = MR_sv(6);
	MR_succip_word = MR_sv(10);
	MR_GOTO_LAB(hlds__instmap__instmap_delta_no_output_vars_2_5_0_i36);
MR_def_label(hlds__instmap__instmap_delta_no_output_vars_2_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(7);
	MR_np_call_localret_ent(check_hlds__inst_util__inst_contains_any_2_0,
		hlds__instmap__instmap_delta_no_output_vars_2_5_0_i14);
MR_def_label(hlds__instmap__instmap_delta_no_output_vars_2_5_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(hlds__instmap__instmap_delta_no_output_vars_2_5_0_i1);
	}
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(4);
	MR_r1 = MR_sv(6);
	MR_succip_word = MR_sv(10);
	MR_GOTO_LAB(hlds__instmap__instmap_delta_no_output_vars_2_5_0_i36);
MR_def_label(hlds__instmap__instmap_delta_no_output_vars_2_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(10);
MR_def_label(hlds__instmap__instmap_delta_no_output_vars_2_5_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(10);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__instmap_module56)
	MR_init_entry1(hlds__instmap__instmap_delta_no_output_vars_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__instmap__instmap_delta_no_output_vars_5_0);
	MR_init_label2(hlds__instmap__instmap_delta_no_output_vars_5_0,5,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'instmap_delta_no_output_vars'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__hlds__instmap__instmap_delta_no_output_vars_5_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r2,0,0)) {
		MR_GOTO_LAB(hlds__instmap__instmap_delta_no_output_vars_5_0_i2);
	}
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r4;
	MR_sv(3) = MR_r5;
	MR_sv(4) = MR_tfield(1, MR_r2, 0);
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r2 = MR_r3;
	MR_np_call_localret_ent(set__to_sorted_list_2_0,
		hlds__instmap__instmap_delta_no_output_vars_5_0_i5);
MR_def_label(hlds__instmap__instmap_delta_no_output_vars_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(2);
	MR_r5 = MR_sv(3);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(hlds__instmap__instmap_delta_no_output_vars_2_5_0);
MR_def_label(hlds__instmap__instmap_delta_no_output_vars_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_101_116_95_101_108_101_109_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_0);
MR_decl_entry(f_115_118_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_0);
MR_decl_entry(term__var_to_int_2_0);
MR_decl_entry(string__format_3_0);

MR_BEGIN_MODULE(hlds__instmap_module57)
	MR_init_entry1(hlds__instmap__merge_instmapping_delta_2_9_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__instmap__merge_instmapping_delta_2_9_0);
	MR_init_label10(hlds__instmap__merge_instmapping_delta_2_9_0,47,3,6,4,8,9,12,10,14,15)
	MR_init_label7(hlds__instmap__merge_instmapping_delta_2_9_0,18,20,22,16,23,26,50)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'merge_instmapping_delta_2'/9 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__instmap__merge_instmapping_delta_2_9_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(13);
	MR_sv(13) = (MR_Word) MR_succip;
MR_def_label(hlds__instmap__merge_instmapping_delta_2_9_0,47)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(hlds__instmap__merge_instmapping_delta_2_9_0_i3);
	}
	MR_r1 = MR_r6;
	MR_r2 = MR_r7;
	MR_decr_sp_and_return(13);
MR_def_label(hlds__instmap__merge_instmapping_delta_2_9_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_tfield(1, MR_r1, 1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(1, MR_r1, 0);
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_r5;
	MR_sv(5) = MR_r6;
	MR_sv(6) = MR_r7;
	MR_sv(7) = MR_tempr1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_inst);
	MR_r5 = MR_tempr1;
	}
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		hlds__instmap__merge_instmapping_delta_2_9_0_i6);
MR_def_label(hlds__instmap__merge_instmapping_delta_2_9_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(hlds__instmap__merge_instmapping_delta_2_9_0_i4);
	}
	MR_r4 = MR_sv(4);
	MR_r5 = MR_sv(7);
	MR_sv(9) = MR_r2;
	MR_GOTO_LAB(hlds__instmap__merge_instmapping_delta_2_9_0_i9);
MR_def_label(hlds__instmap__merge_instmapping_delta_2_9_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(7);
	MR_np_call_localret_ent(hlds__instmap__instmap_lookup_var_3_0,
		hlds__instmap__merge_instmapping_delta_2_9_0_i8);
MR_def_label(hlds__instmap__merge_instmapping_delta_2_9_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_sv(4);
	MR_r5 = MR_sv(7);
	MR_sv(9) = MR_r1;
MR_def_label(hlds__instmap__merge_instmapping_delta_2_9_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r4;
	MR_sv(7) = MR_r5;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_inst);
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		hlds__instmap__merge_instmapping_delta_2_9_0_i12);
MR_def_label(hlds__instmap__merge_instmapping_delta_2_9_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(hlds__instmap__merge_instmapping_delta_2_9_0_i10);
	}
	MR_r5 = MR_sv(2);
	MR_r4 = MR_sv(7);
	MR_sv(10) = MR_r2;
	MR_GOTO_LAB(hlds__instmap__merge_instmapping_delta_2_9_0_i15);
MR_def_label(hlds__instmap__merge_instmapping_delta_2_9_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(7);
	MR_np_call_localret_ent(hlds__instmap__instmap_lookup_var_3_0,
		hlds__instmap__merge_instmapping_delta_2_9_0_i14);
MR_def_label(hlds__instmap__merge_instmapping_delta_2_9_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r5 = MR_sv(2);
	MR_r4 = MR_sv(7);
	MR_sv(10) = MR_r1;
MR_def_label(hlds__instmap__merge_instmapping_delta_2_9_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r5;
	MR_sv(7) = MR_r4;
	MR_sv(11) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_sv(12) = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r1 = MR_sv(11);
	MR_r2 = MR_sv(12);
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_np_call_localret_ent(fn__f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_101_116_95_101_108_101_109_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_0,
		hlds__instmap__merge_instmapping_delta_2_9_0_i18);
MR_def_label(hlds__instmap__merge_instmapping_delta_2_9_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r3, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r3, 0) = MR_r1;
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(10);
	MR_r4 = MR_sv(6);
	MR_np_call_localret_ent(check_hlds__inst_util__inst_merge_6_0,
		hlds__instmap__merge_instmapping_delta_2_9_0_i20);
MR_def_label(hlds__instmap__merge_instmapping_delta_2_9_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(hlds__instmap__merge_instmapping_delta_2_9_0_i16);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(5);
	MR_sv(5) = MR_r3;
	MR_r1 = MR_sv(11);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_sv(12);
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_inst);
	MR_r4 = MR_sv(7);
	MR_r5 = MR_tempr2;
	MR_r6 = MR_tempr1;
	}
	MR_np_call_localret_ent(f_115_118_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_0,
		hlds__instmap__merge_instmapping_delta_2_9_0_i22);
MR_def_label(hlds__instmap__merge_instmapping_delta_2_9_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(4);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r6 = MR_tempr1;
	MR_r7 = MR_sv(5);
	MR_succip_word = MR_sv(13);
	MR_GOTO_LAB(hlds__instmap__merge_instmapping_delta_2_9_0_i47);
	}
MR_def_label(hlds__instmap__merge_instmapping_delta_2_9_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_sv(7);
	MR_np_call_localret_ent(term__var_to_int_2_0,
		hlds__instmap__merge_instmapping_delta_2_9_0_i23);
MR_def_label(hlds__instmap__merge_instmapping_delta_2_9_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_tempr1;
	MR_tfield(1, MR_r2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = (MR_Word) MR_string_const("merge_instmapping_delta_2: error merging var %i", 47);
	}
	MR_np_call_localret_ent(string__format_3_0,
		hlds__instmap__merge_instmapping_delta_2_9_0_i26);
MR_def_label(hlds__instmap__merge_instmapping_delta_2_9_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("instmap.m", 9);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(libs__compiler_util__unexpected_2_0,
		hlds__instmap__merge_instmapping_delta_2_9_0_i50);
MR_def_label(hlds__instmap__merge_instmapping_delta_2_9_0,50)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(13);
	MR_GOTO_LAB(hlds__instmap__merge_instmapping_delta_2_9_0_i47);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_105_110_115_101_114_116_95_108_105_115_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0);
MR_decl_entry(f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_105_110_116_101_114_115_101_99_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0);
MR_decl_entry(fn__map__init_0_0);

MR_BEGIN_MODULE(hlds__instmap_module58)
	MR_init_entry1(hlds__instmap__merge_instmap_delta_8_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__instmap__merge_instmap_delta_8_0);
	MR_init_label10(hlds__instmap__merge_instmap_delta_8_0,3,28,7,8,9,10,11,12,13,14)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'merge_instmap_delta'/8 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__hlds__instmap__merge_instmap_delta_8_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r4,0,0)) {
		MR_GOTO_LAB(hlds__instmap__merge_instmap_delta_8_0_i3);
	}
	MR_r1 = MR_r5;
	MR_r2 = MR_r6;
	MR_proceed();
MR_def_label(hlds__instmap__merge_instmap_delta_8_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r5,0,0)) {
		MR_GOTO_LAB(hlds__instmap__merge_instmap_delta_8_0_i28);
	}
	MR_r1 = MR_r4;
	MR_r2 = MR_r6;
	MR_proceed();
MR_def_label(hlds__instmap__merge_instmap_delta_8_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(11);
	MR_sv(11) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r6;
	MR_sv(5) = MR_tfield(1, MR_r5, 0);
	MR_sv(6) = MR_tfield(1, MR_r4, 0);
	MR_sv(8) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_sv(9) = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_sv(10) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_inst);
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(10);
	MR_r3 = MR_sv(6);
	MR_np_call_localret_ent(map__keys_2_0,
		hlds__instmap__merge_instmap_delta_8_0_i7);
MR_def_label(hlds__instmap__merge_instmap_delta_8_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(10);
	MR_r3 = MR_sv(5);
	MR_np_call_localret_ent(map__keys_2_0,
		hlds__instmap__merge_instmap_delta_8_0_i8);
MR_def_label(hlds__instmap__merge_instmap_delta_8_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(7);
	MR_sv(7) = MR_r1;
	MR_r1 = MR_sv(9);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(set__sorted_list_to_set_2_0,
		hlds__instmap__merge_instmap_delta_8_0_i9);
MR_def_label(hlds__instmap__merge_instmap_delta_8_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(9);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(7);
	}
	MR_np_call_localret_ent(f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_105_110_115_101_114_116_95_108_105_115_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		hlds__instmap__merge_instmap_delta_8_0_i10);
MR_def_label(hlds__instmap__merge_instmap_delta_8_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(9);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(2);
	}
	MR_np_call_localret_ent(f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_105_110_116_101_114_115_101_99_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		hlds__instmap__merge_instmap_delta_8_0_i11);
MR_def_label(hlds__instmap__merge_instmap_delta_8_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(9);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(set__to_sorted_list_2_0,
		hlds__instmap__merge_instmap_delta_8_0_i12);
MR_def_label(hlds__instmap__merge_instmap_delta_8_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(10);
	MR_np_call_localret_ent(fn__map__init_0_0,
		hlds__instmap__merge_instmap_delta_8_0_i13);
MR_def_label(hlds__instmap__merge_instmap_delta_8_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(6);
	MR_r5 = MR_sv(5);
	MR_r6 = MR_tempr1;
	MR_r7 = MR_sv(4);
	}
	MR_np_call_localret_ent(hlds__instmap__merge_instmapping_delta_2_9_0,
		hlds__instmap__merge_instmap_delta_8_0_i14);
MR_def_label(hlds__instmap__merge_instmap_delta_8_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(11);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__instmap_module59)
	MR_init_entry1(hlds__instmap__merge_instmap_deltas_2_8_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__instmap__merge_instmap_deltas_2_8_0);
	MR_init_label10(hlds__instmap__merge_instmap_deltas_2_8_0,34,3,5,9,8,13,14,12,16,17)
	MR_init_label1(hlds__instmap__merge_instmap_deltas_2_8_0,18)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'merge_instmap_deltas_2'/8 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__instmap__merge_instmap_deltas_2_8_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
MR_def_label(hlds__instmap__merge_instmap_deltas_2_8_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r4,0,0)) {
		MR_GOTO_LAB(hlds__instmap__merge_instmap_deltas_2_8_0_i3);
	}
	MR_r1 = MR_r5;
	MR_r2 = MR_r6;
	MR_decr_sp_and_return(8);
MR_def_label(hlds__instmap__merge_instmap_deltas_2_8_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_r7 = MR_tfield(1, MR_tempr1, 1);
	if (MR_LTAGS_TESTR(MR_r7,0,0)) {
		MR_GOTO_LAB(hlds__instmap__merge_instmap_deltas_2_8_0_i5);
	}
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = MR_tfield(1, MR_tempr1, 0);
	MR_tfield(1, MR_r1, 1) = MR_r5;
	MR_r2 = MR_r6;
	MR_decr_sp_and_return(8);
	}
MR_def_label(hlds__instmap__merge_instmap_deltas_2_8_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r7;
	MR_r8 = MR_tfield(1, MR_tempr1, 1);
	if (MR_LTAGS_TESTR(MR_r8,0,0)) {
		MR_GOTO_LAB(hlds__instmap__merge_instmap_deltas_2_8_0_i8);
	}
	MR_sv(6) = MR_r5;
	MR_r4 = MR_tfield(1, MR_r4, 0);
	MR_r5 = MR_tfield(1, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(hlds__instmap__merge_instmap_delta_8_0,
		hlds__instmap__merge_instmap_deltas_2_8_0_i9);
MR_def_label(hlds__instmap__merge_instmap_deltas_2_8_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = MR_sv(6);
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(8);
	}
MR_def_label(hlds__instmap__merge_instmap_deltas_2_8_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r8;
	MR_r9 = MR_tfield(1, MR_tempr1, 1);
	if (MR_LTAGS_TESTR(MR_r9,0,0)) {
		MR_GOTO_LAB(hlds__instmap__merge_instmap_deltas_2_8_0_i12);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(6) = MR_r5;
	MR_sv(7) = MR_tfield(1, MR_tempr1, 0);
	MR_r4 = MR_tfield(1, MR_r4, 0);
	MR_r5 = MR_tfield(1, MR_r7, 0);
	}
	MR_np_call_localret_ent(hlds__instmap__merge_instmap_delta_8_0,
		hlds__instmap__merge_instmap_deltas_2_8_0_i13);
MR_def_label(hlds__instmap__merge_instmap_deltas_2_8_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_tempr1;
	MR_r5 = MR_sv(7);
	MR_r6 = MR_tempr2;
	}
	MR_np_call_localret_ent(hlds__instmap__merge_instmap_delta_8_0,
		hlds__instmap__merge_instmap_deltas_2_8_0_i14);
MR_def_label(hlds__instmap__merge_instmap_deltas_2_8_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = MR_sv(6);
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(8);
	}
MR_def_label(hlds__instmap__merge_instmap_deltas_2_8_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r9;
	MR_sv(4) = MR_tfield(1, MR_tempr1, 0);
	MR_sv(5) = MR_tfield(1, MR_tempr1, 1);
	MR_sv(6) = MR_r5;
	MR_sv(7) = MR_tfield(1, MR_r8, 0);
	MR_r4 = MR_tfield(1, MR_r4, 0);
	MR_r5 = MR_tfield(1, MR_r7, 0);
	}
	MR_np_call_localret_ent(hlds__instmap__merge_instmap_delta_8_0,
		hlds__instmap__merge_instmap_deltas_2_8_0_i16);
MR_def_label(hlds__instmap__merge_instmap_deltas_2_8_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(7);
	MR_r5 = MR_tempr1;
	MR_r6 = MR_tempr2;
	}
	MR_np_call_localret_ent(hlds__instmap__merge_instmap_delta_8_0,
		hlds__instmap__merge_instmap_deltas_2_8_0_i17);
MR_def_label(hlds__instmap__merge_instmap_deltas_2_8_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(4);
	MR_r5 = MR_tempr1;
	MR_r6 = MR_tempr2;
	}
	MR_np_call_localret_ent(hlds__instmap__merge_instmap_delta_8_0,
		hlds__instmap__merge_instmap_deltas_2_8_0_i18);
MR_def_label(hlds__instmap__merge_instmap_deltas_2_8_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r5 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = MR_sv(6);
	MR_r1 = MR_sv(1);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(5);
	MR_r6 = MR_tempr2;
	MR_succip_word = MR_sv(8);
	MR_GOTO_LAB(hlds__instmap__merge_instmap_deltas_2_8_0_i34);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__instmap_module60)
	MR_init_entry1(hlds__instmap__merge_instmap_deltas_7_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__instmap__merge_instmap_deltas_7_0);
	MR_init_label4(hlds__instmap__merge_instmap_deltas_7_0,18,2,6,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'merge_instmap_deltas'/7 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__hlds__instmap__merge_instmap_deltas_7_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
MR_def_label(hlds__instmap__merge_instmap_deltas_7_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r5;
	MR_r5 = (MR_Word) MR_tbmkword(0, 0);
	MR_r6 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__instmap__merge_instmap_deltas_2_8_0,
		hlds__instmap__merge_instmap_deltas_7_0_i2);
MR_def_label(hlds__instmap__merge_instmap_deltas_7_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(hlds__instmap__merge_instmap_deltas_7_0_i4);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(1, MR_r1, 1);
	if (MR_LTAGS_TESTR(MR_tempr1,0,0)) {
		MR_GOTO_LAB(hlds__instmap__merge_instmap_deltas_7_0_i6);
	}
	MR_r1 = MR_tfield(1, MR_r1, 0);
	MR_decr_sp_and_return(4);
	}
MR_def_label(hlds__instmap__merge_instmap_deltas_7_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_tempr1;
	MR_r5 = MR_tempr2;
	MR_succip_word = MR_sv(4);
	MR_GOTO_LAB(hlds__instmap__merge_instmap_deltas_7_0_i18);
	}
MR_def_label(hlds__instmap__merge_instmap_deltas_7_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("instmap.m", 9);
	MR_r2 = (MR_Word) MR_string_const("merge_instmap_deltas: empty instmap_delta list.", 47);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__instmap_module61)
	MR_init_entry1(hlds__instmap__unify_instmap_delta_7_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__instmap__unify_instmap_delta_7_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'unify_instmap_delta'/7 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__hlds__instmap__unify_instmap_delta_7_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_r2 = MR_r3;
	MR_r3 = MR_r4;
	MR_r4 = MR_r5;
	MR_np_tailcall_ent(f_104_108_100_115_95_95_105_110_115_116_109_97_112_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_110_105_102_121_95_105_110_115_116_109_97_112_95_100_101_108_116_97_95_95_91_49_93_95_48_7_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(parse_tree__prog_data__rename_var_4_0);

MR_BEGIN_MODULE(hlds__instmap_module62)
	MR_init_entry1(hlds__instmap__instmap_delta_apply_sub_2_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__instmap__instmap_delta_apply_sub_2_5_0);
	MR_init_label4(hlds__instmap__instmap_delta_apply_sub_2_5_0,12,3,4,6)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'instmap_delta_apply_sub_2'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__instmap__instmap_delta_apply_sub_2_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
MR_def_label(hlds__instmap__instmap_delta_apply_sub_2_5_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(hlds__instmap__instmap_delta_apply_sub_2_5_0_i3);
	}
	MR_r1 = MR_r4;
	MR_decr_sp_and_return(7);
MR_def_label(hlds__instmap__instmap_delta_apply_sub_2_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(1, MR_r1, 0);
	MR_sv(4) = MR_tfield(0, MR_tempr1, 1);
	MR_sv(5) = MR_tfield(1, MR_r1, 1);
	MR_sv(6) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r1 = MR_sv(6);
	MR_r4 = MR_tfield(0, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(parse_tree__prog_data__rename_var_4_0,
		hlds__instmap__instmap_delta_apply_sub_2_5_0_i4);
MR_def_label(hlds__instmap__instmap_delta_apply_sub_2_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_inst);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_tempr1;
	MR_r6 = MR_sv(4);
	}
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_115_101_116_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_0,
		hlds__instmap__instmap_delta_apply_sub_2_5_0_i6);
MR_def_label(hlds__instmap__instmap_delta_apply_sub_2_5_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_tempr1;
	MR_succip_word = MR_sv(7);
	MR_GOTO_LAB(hlds__instmap__instmap_delta_apply_sub_2_5_0_i12);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(map__to_assoc_list_2_0);

MR_BEGIN_MODULE(hlds__instmap_module63)
	MR_init_entry1(hlds__instmap__instmap_delta_apply_sub_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__instmap__instmap_delta_apply_sub_4_0);
	MR_init_label4(hlds__instmap__instmap_delta_apply_sub_4_0,16,5,6,7)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'instmap_delta_apply_sub'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__hlds__instmap__instmap_delta_apply_sub_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r3,0,0)) {
		MR_GOTO_LAB(hlds__instmap__instmap_delta_apply_sub_4_0_i16);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(hlds__instmap__instmap_delta_apply_sub_4_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_sv(4) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_inst);
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_tfield(1, MR_r3, 0);
	MR_np_call_localret_ent(map__to_assoc_list_2_0,
		hlds__instmap__instmap_delta_apply_sub_4_0_i5);
MR_def_label(hlds__instmap__instmap_delta_apply_sub_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(fn__map__init_0_0,
		hlds__instmap__instmap_delta_apply_sub_4_0_i6);
MR_def_label(hlds__instmap__instmap_delta_apply_sub_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__instmap__instmap_delta_apply_sub_2_5_0,
		hlds__instmap__instmap_delta_apply_sub_4_0_i7);
MR_def_label(hlds__instmap__instmap_delta_apply_sub_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r2, 0) = MR_r1;
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__instmap_module64)
	MR_init_entry1(hlds__instmap__instmap_apply_sub_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__instmap__instmap_apply_sub_4_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'instmap_apply_sub'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__hlds__instmap__instmap_apply_sub_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(hlds__instmap__instmap_delta_apply_sub_4_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__instmap_module65)
	MR_init_entry1(hlds__instmap__instmap_to_assoc_list_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__instmap__instmap_to_assoc_list_2_0);
	MR_init_label1(hlds__instmap__instmap_to_assoc_list_2_0,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'instmap_to_assoc_list'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__hlds__instmap__instmap_to_assoc_list_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(hlds__instmap__instmap_to_assoc_list_2_0_i3);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(hlds__instmap__instmap_to_assoc_list_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_inst);
	MR_r3 = MR_tfield(1, MR_tempr1, 0);
	MR_np_tailcall_ent(map__to_assoc_list_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__instmap_module66)
	MR_init_entry1(hlds__instmap__instmap_delta_to_assoc_list_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__instmap__instmap_delta_to_assoc_list_2_0);
	MR_init_label1(hlds__instmap__instmap_delta_to_assoc_list_2_0,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'instmap_delta_to_assoc_list'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__hlds__instmap__instmap_delta_to_assoc_list_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(hlds__instmap__instmap_delta_to_assoc_list_2_0_i3);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(hlds__instmap__instmap_delta_to_assoc_list_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_inst);
	MR_r3 = MR_tfield(1, MR_tempr1, 0);
	MR_np_tailcall_ent(map__to_assoc_list_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(map__map_foldl_5_1);

MR_BEGIN_MODULE(hlds__instmap_module67)
	MR_init_entry1(hlds__instmap__instmap_delta_map_foldl_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__instmap__instmap_delta_map_foldl_5_0);
	MR_init_label2(hlds__instmap__instmap_delta_map_foldl_5_0,14,5)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'instmap_delta_map_foldl'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__hlds__instmap__instmap_delta_map_foldl_5_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r3,0,0)) {
		MR_GOTO_LAB(hlds__instmap__instmap_delta_map_foldl_5_0_i14);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = MR_r4;
	MR_proceed();
MR_def_label(hlds__instmap__instmap_delta_map_foldl_5_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_tempr2 = MR_r2;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_inst);
	MR_tempr3 = MR_r3;
	MR_r3 = MR_r2;
	MR_tempr4 = MR_r4;
	MR_r4 = MR_tempr1;
	MR_r5 = MR_tempr2;
	MR_r6 = MR_tfield(1, MR_tempr3, 0);
	MR_r7 = MR_tempr4;
	}
	MR_np_call_localret_ent(map__map_foldl_5_1,
		hlds__instmap__instmap_delta_map_foldl_5_0_i5);
MR_def_label(hlds__instmap__instmap_delta_map_foldl_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(1);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(check_hlds__inst_match__inst_is_ground_2_0);

MR_BEGIN_MODULE(hlds__instmap_module68)
	MR_init_entry1(hlds__instmap__var_is_ground_in_instmap_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__instmap__var_is_ground_in_instmap_3_0);
	MR_init_label1(hlds__instmap__var_is_ground_in_instmap_3_0,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'var_is_ground_in_instmap'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__hlds__instmap__var_is_ground_in_instmap_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_r1 = MR_r2;
	MR_r2 = MR_r3;
	MR_np_call_localret_ent(hlds__instmap__instmap_lookup_var_3_0,
		hlds__instmap__var_is_ground_in_instmap_3_0_i2);
MR_def_label(hlds__instmap__var_is_ground_in_instmap_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(check_hlds__inst_match__inst_is_ground_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(check_hlds__inst_match__inst_is_any_2_0);

MR_BEGIN_MODULE(hlds__instmap_module69)
	MR_init_entry1(hlds__instmap__var_is_any_in_instmap_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__instmap__var_is_any_in_instmap_3_0);
	MR_init_label1(hlds__instmap__var_is_any_in_instmap_3_0,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'var_is_any_in_instmap'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__hlds__instmap__var_is_any_in_instmap_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_r1 = MR_r2;
	MR_r2 = MR_r3;
	MR_np_call_localret_ent(hlds__instmap__instmap_lookup_var_3_0,
		hlds__instmap__var_is_any_in_instmap_3_0_i2);
MR_def_label(hlds__instmap__var_is_any_in_instmap_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(check_hlds__inst_match__inst_is_any_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(check_hlds__inst_match__inst_is_free_2_0);
MR_decl_entry(check_hlds__inst_match__inst_is_bound_2_0);

MR_BEGIN_MODULE(hlds__instmap_module70)
	MR_init_entry1(hlds__instmap__var_is_bound_in_instmap_delta_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__instmap__var_is_bound_in_instmap_delta_4_0);
	MR_init_label6(hlds__instmap__var_is_bound_in_instmap_delta_4_0,6,4,8,9,12,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'var_is_bound_in_instmap_delta'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__hlds__instmap__var_is_bound_in_instmap_delta_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	if (MR_LTAGS_TEST(MR_r2,0,0)) {
		MR_GOTO_LAB(hlds__instmap__var_is_bound_in_instmap_delta_4_0_i1);
	}
	if (MR_LTAGS_TEST(MR_r3,0,0)) {
		MR_GOTO_LAB(hlds__instmap__var_is_bound_in_instmap_delta_4_0_i1);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_inst);
	MR_r4 = MR_tfield(1, MR_tempr1, 0);
	MR_r5 = MR_sv(3);
	}
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		hlds__instmap__var_is_bound_in_instmap_delta_4_0_i6);
MR_def_label(hlds__instmap__var_is_bound_in_instmap_delta_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(hlds__instmap__var_is_bound_in_instmap_delta_4_0_i4);
	}
	MR_r1 = MR_sv(1);
	MR_GOTO_LAB(hlds__instmap__var_is_bound_in_instmap_delta_4_0_i8);
MR_def_label(hlds__instmap__var_is_bound_in_instmap_delta_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
MR_def_label(hlds__instmap__var_is_bound_in_instmap_delta_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(check_hlds__inst_match__inst_is_free_2_0,
		hlds__instmap__var_is_bound_in_instmap_delta_4_0_i9);
MR_def_label(hlds__instmap__var_is_bound_in_instmap_delta_4_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(hlds__instmap__var_is_bound_in_instmap_delta_4_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_inst);
	MR_r4 = MR_tfield(1, MR_sv(2), 0);
	MR_r5 = MR_sv(3);
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		hlds__instmap__var_is_bound_in_instmap_delta_4_0_i12);
MR_def_label(hlds__instmap__var_is_bound_in_instmap_delta_4_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(hlds__instmap__var_is_bound_in_instmap_delta_4_0_i1);
	}
	MR_r1 = MR_sv(1);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(check_hlds__inst_match__inst_is_bound_2_0);
MR_def_label(hlds__instmap__var_is_bound_in_instmap_delta_4_0,1)
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


MR_BEGIN_MODULE(hlds__instmap_module71)
	MR_init_entry1(fn__hlds__instmap__pair_with_ground_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__hlds__instmap__pair_with_ground_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'pair_with_ground'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__hlds__instmap__pair_with_ground_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 0) = MR_r1;
	MR_tfield(0, MR_r2, 1) = (MR_Word) MR_TAG_COMMON(3,1,0);
	MR_r1 = MR_r2;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__instmap_module72)
	MR_init_entry1(hlds__instmap__instmap_bound_vars_2_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__instmap__instmap_bound_vars_2_5_0);
	MR_init_label2(hlds__instmap__instmap_bound_vars_2_5_0,4,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'instmap_bound_vars_2'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__instmap__instmap_bound_vars_2_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r4;
	MR_r2 = MR_r3;
	MR_np_call_localret_ent(check_hlds__inst_match__inst_is_bound_2_0,
		hlds__instmap__instmap_bound_vars_2_5_0_i4);
MR_def_label(hlds__instmap__instmap_bound_vars_2_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(hlds__instmap__instmap_bound_vars_2_5_0_i2);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(1);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_105_110_115_101_114_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0);
MR_def_label(hlds__instmap__instmap_bound_vars_2_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(3);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__instmap_module73)
	MR_init_entry1(hlds__instmap__lookup_var_in_instmap_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__instmap__lookup_var_in_instmap_3_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'lookup_var_in_instmap'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__instmap__lookup_var_in_instmap_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_np_tailcall_ent(hlds__instmap__instmap_lookup_var_3_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___tree234__tree234_2_0);

MR_BEGIN_MODULE(hlds__instmap_module74)
	MR_init_entry1(__Unify___hlds__instmap__instmap_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___hlds__instmap__instmap_0_0);
	MR_init_label3(__Unify___hlds__instmap__instmap_0_0,13,5,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___hlds__instmap__instmap_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___hlds__instmap__instmap_0_0_i13);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_tempr1;
	MR_sv(2) = MR_r2;
	if (MR_LTAGS_TESTR(MR_tempr1,0,0)) {
		MR_GOTO_LAB(__Unify___hlds__instmap__instmap_0_0_i5);
	}
	MR_r1 = (MR_sv(2) == MR_tempr1);
	MR_decr_sp(3);
	MR_proceed();
	}
MR_def_label(__Unify___hlds__instmap__instmap_0_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___hlds__instmap__instmap_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_sv(2),0,0)) {
		MR_GOTO_LAB(__Unify___hlds__instmap__instmap_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_inst);
	MR_r3 = MR_tfield(1, MR_sv(1), 0);
	MR_r4 = MR_tfield(1, MR_sv(2), 0);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Unify___tree234__tree234_2_0);
MR_def_label(__Unify___hlds__instmap__instmap_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Compare___tree234__tree234_2_0);

MR_BEGIN_MODULE(hlds__instmap_module75)
	MR_init_entry1(__Compare___hlds__instmap__instmap_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___hlds__instmap__instmap_0_0);
	MR_init_label4(__Compare___hlds__instmap__instmap_0_0,19,7,5,9)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___hlds__instmap__instmap_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___hlds__instmap__instmap_0_0_i19);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	if (MR_LTAGS_TESTR(MR_sv(1),0,0)) {
		MR_GOTO_LAB(__Compare___hlds__instmap__instmap_0_0_i5);
	}
	if (MR_LTAGS_TESTR(MR_sv(2),0,0)) {
		MR_GOTO_LAB(__Compare___hlds__instmap__instmap_0_0_i7);
	}
MR_def_label(__Compare___hlds__instmap__instmap_0_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___hlds__instmap__instmap_0_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___hlds__instmap__instmap_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,0)) {
		MR_GOTO_LAB(__Compare___hlds__instmap__instmap_0_0_i9);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___hlds__instmap__instmap_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_inst);
	MR_r3 = MR_tfield(1, MR_sv(1), 0);
	MR_r4 = MR_tfield(1, MR_sv(2), 0);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Compare___tree234__tree234_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__instmap_module76)
	MR_init_entry1(__Unify___hlds__instmap__instmap_delta_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___hlds__instmap__instmap_delta_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___hlds__instmap__instmap_delta_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(__Unify___hlds__instmap__instmap_0_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__instmap_module77)
	MR_init_entry1(__Compare___hlds__instmap__instmap_delta_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___hlds__instmap__instmap_delta_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___hlds__instmap__instmap_delta_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(__Compare___hlds__instmap__instmap_0_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__instmap_module78)
	MR_init_entry1(__Unify___hlds__instmap__instmapping_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___hlds__instmap__instmapping_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___hlds__instmap__instmapping_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_tempr2 = MR_r2;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_inst);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tempr2;
	MR_np_tailcall_ent(__Unify___tree234__tree234_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__instmap_module79)
	MR_init_entry1(__Compare___hlds__instmap__instmapping_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___hlds__instmap__instmapping_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___hlds__instmap__instmapping_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_tempr2 = MR_r2;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_inst);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tempr2;
	MR_np_tailcall_ent(__Compare___tree234__tree234_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__instmap_module80)
	MR_init_entry1(__Unify___hlds__instmap__overlay_how_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___hlds__instmap__overlay_how_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___hlds__instmap__overlay_how_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_r1 == MR_r2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(private_builtin__builtin_compare_int_3_0);

MR_BEGIN_MODULE(hlds__instmap_module81)
	MR_init_entry1(__Compare___hlds__instmap__overlay_how_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___hlds__instmap__overlay_how_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___hlds__instmap__overlay_how_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__instmap_module82)
	MR_init_entry1(hlds__instmap__IntroducedFrom__pred__instmap_set_vars_same__602__1_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__instmap__IntroducedFrom__pred__instmap_set_vars_same__602__1_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__pred__instmap_set_vars_same__602__1'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__instmap__IntroducedFrom__pred__instmap_set_vars_same__602__1_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(__Unify___parse_tree__prog_data__mer_inst_0_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__instmap_module83)
	MR_init_entry1(hlds__instmap__IntroducedFrom__pred__instmap_delta_set_vars_same__631__1_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__instmap__IntroducedFrom__pred__instmap_delta_set_vars_same__631__1_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__pred__instmap_delta_set_vars_same__631__1'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__instmap__IntroducedFrom__pred__instmap_delta_set_vars_same__631__1_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(__Unify___parse_tree__prog_data__mer_inst_0_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__instmap_module84)
	MR_init_entry1(hlds__instmap__IntroducedFrom__pred__instmapping_set_vars__562__1_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__instmap__IntroducedFrom__pred__instmapping_set_vars__562__1_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__pred__instmapping_set_vars__562__1'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__instmap__IntroducedFrom__pred__instmapping_set_vars__562__1_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(__Unify___parse_tree__prog_data__mer_inst_0_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__instmap_module85)
	MR_init_entry1(hlds__instmap__IntroducedFrom__pred__instmapping_set_vars_corresponding__585__1_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__instmap__IntroducedFrom__pred__instmapping_set_vars_corresponding__585__1_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__pred__instmapping_set_vars_corresponding__585__1'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__instmap__IntroducedFrom__pred__instmapping_set_vars_corresponding__585__1_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(__Unify___parse_tree__prog_data__mer_inst_0_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__instmap_module86)
	MR_init_entry1(f_104_108_100_115_95_95_105_110_115_116_109_97_112_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_110_105_102_121_95_105_110_115_116_109_97_112_95_100_101_108_116_97_95_95_91_49_93_95_48_7_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__f_104_108_100_115_95_95_105_110_115_116_109_97_112_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_110_105_102_121_95_105_110_115_116_109_97_112_95_100_101_108_116_97_95_95_91_49_93_95_48_7_0);
	MR_init_label10(f_104_108_100_115_95_95_105_110_115_116_109_97_112_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_110_105_102_121_95_105_110_115_116_109_97_112_95_100_101_108_116_97_95_95_91_49_93_95_48_7_0,3,28,7,8,9,10,11,12,13,14)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__pred__unify_instmap_delta__[1]_0'/7 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__f_104_108_100_115_95_95_105_110_115_116_109_97_112_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_110_105_102_121_95_105_110_115_116_109_97_112_95_100_101_108_116_97_95_95_91_49_93_95_48_7_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(f_104_108_100_115_95_95_105_110_115_116_109_97_112_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_110_105_102_121_95_105_110_115_116_109_97_112_95_100_101_108_116_97_95_95_91_49_93_95_48_7_0_i3);
	}
	MR_r1 = MR_r3;
	MR_r2 = MR_r4;
	MR_proceed();
MR_def_label(f_104_108_100_115_95_95_105_110_115_116_109_97_112_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_110_105_102_121_95_105_110_115_116_109_97_112_95_100_101_108_116_97_95_95_91_49_93_95_48_7_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r3,0,0)) {
		MR_GOTO_LAB(f_104_108_100_115_95_95_105_110_115_116_109_97_112_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_110_105_102_121_95_105_110_115_116_109_97_112_95_100_101_108_116_97_95_95_91_49_93_95_48_7_0_i28);
	}
	MR_r1 = MR_r2;
	MR_r2 = MR_r4;
	MR_proceed();
MR_def_label(f_104_108_100_115_95_95_105_110_115_116_109_97_112_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_110_105_102_121_95_105_110_115_116_109_97_112_95_100_101_108_116_97_95_95_91_49_93_95_48_7_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r4;
	MR_sv(3) = MR_tfield(1, MR_r3, 0);
	MR_sv(4) = MR_tfield(1, MR_r2, 0);
	MR_sv(6) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_sv(7) = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_sv(8) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_inst);
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(8);
	MR_r3 = MR_sv(4);
	MR_np_call_localret_ent(map__keys_2_0,
		f_104_108_100_115_95_95_105_110_115_116_109_97_112_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_110_105_102_121_95_105_110_115_116_109_97_112_95_100_101_108_116_97_95_95_91_49_93_95_48_7_0_i7);
MR_def_label(f_104_108_100_115_95_95_105_110_115_116_109_97_112_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_110_105_102_121_95_105_110_115_116_109_97_112_95_100_101_108_116_97_95_95_91_49_93_95_48_7_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(8);
	MR_r3 = MR_sv(3);
	MR_np_call_localret_ent(map__keys_2_0,
		f_104_108_100_115_95_95_105_110_115_116_109_97_112_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_110_105_102_121_95_105_110_115_116_109_97_112_95_100_101_108_116_97_95_95_91_49_93_95_48_7_0_i8);
MR_def_label(f_104_108_100_115_95_95_105_110_115_116_109_97_112_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_110_105_102_121_95_105_110_115_116_109_97_112_95_100_101_108_116_97_95_95_91_49_93_95_48_7_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(5);
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(set__sorted_list_to_set_2_0,
		f_104_108_100_115_95_95_105_110_115_116_109_97_112_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_110_105_102_121_95_105_110_115_116_109_97_112_95_100_101_108_116_97_95_95_91_49_93_95_48_7_0_i9);
MR_def_label(f_104_108_100_115_95_95_105_110_115_116_109_97_112_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_110_105_102_121_95_105_110_115_116_109_97_112_95_100_101_108_116_97_95_95_91_49_93_95_48_7_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(7);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(5);
	}
	MR_np_call_localret_ent(f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_105_110_115_101_114_116_95_108_105_115_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		f_104_108_100_115_95_95_105_110_115_116_109_97_112_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_110_105_102_121_95_105_110_115_116_109_97_112_95_100_101_108_116_97_95_95_91_49_93_95_48_7_0_i10);
MR_def_label(f_104_108_100_115_95_95_105_110_115_116_109_97_112_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_110_105_102_121_95_105_110_115_116_109_97_112_95_100_101_108_116_97_95_95_91_49_93_95_48_7_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(7);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(1);
	}
	MR_np_call_localret_ent(f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_105_110_116_101_114_115_101_99_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		f_104_108_100_115_95_95_105_110_115_116_109_97_112_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_110_105_102_121_95_105_110_115_116_109_97_112_95_100_101_108_116_97_95_95_91_49_93_95_48_7_0_i11);
MR_def_label(f_104_108_100_115_95_95_105_110_115_116_109_97_112_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_110_105_102_121_95_105_110_115_116_109_97_112_95_100_101_108_116_97_95_95_91_49_93_95_48_7_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(set__to_sorted_list_2_0,
		f_104_108_100_115_95_95_105_110_115_116_109_97_112_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_110_105_102_121_95_105_110_115_116_109_97_112_95_100_101_108_116_97_95_95_91_49_93_95_48_7_0_i12);
MR_def_label(f_104_108_100_115_95_95_105_110_115_116_109_97_112_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_110_105_102_121_95_105_110_115_116_109_97_112_95_100_101_108_116_97_95_95_91_49_93_95_48_7_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(8);
	MR_np_call_localret_ent(fn__map__init_0_0,
		f_104_108_100_115_95_95_105_110_115_116_109_97_112_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_110_105_102_121_95_105_110_115_116_109_97_112_95_100_101_108_116_97_95_95_91_49_93_95_48_7_0_i13);
MR_def_label(f_104_108_100_115_95_95_105_110_115_116_109_97_112_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_110_105_102_121_95_105_110_115_116_109_97_112_95_100_101_108_116_97_95_95_91_49_93_95_48_7_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_tempr1;
	MR_r5 = MR_sv(2);
	}
	MR_np_call_localret_ent(f_104_108_100_115_95_95_105_110_115_116_109_97_112_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_110_105_102_121_95_105_110_115_116_109_97_112_112_105_110_103_95_100_101_108_116_97_95_50_95_95_91_50_93_95_48_8_0,
		f_104_108_100_115_95_95_105_110_115_116_109_97_112_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_110_105_102_121_95_105_110_115_116_109_97_112_95_100_101_108_116_97_95_95_91_49_93_95_48_7_0_i14);
MR_def_label(f_104_108_100_115_95_95_105_110_115_116_109_97_112_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_110_105_102_121_95_105_110_115_116_109_97_112_95_100_101_108_116_97_95_95_91_49_93_95_48_7_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(9);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__instmap_module87)
	MR_init_entry1(f_104_108_100_115_95_95_105_110_115_116_109_97_112_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_110_105_102_121_95_105_110_115_116_109_97_112_112_105_110_103_95_100_101_108_116_97_95_50_95_95_91_50_93_95_48_8_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__f_104_108_100_115_95_95_105_110_115_116_109_97_112_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_110_105_102_121_95_105_110_115_116_109_97_112_112_105_110_103_95_100_101_108_116_97_95_50_95_95_91_50_93_95_48_8_0);
	MR_init_label10(f_104_108_100_115_95_95_105_110_115_116_109_97_112_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_110_105_102_121_95_105_110_115_116_109_97_112_112_105_110_103_95_100_101_108_116_97_95_50_95_95_91_50_93_95_48_8_0,48,3,6,9,12,14,11,8,4,21)
	MR_init_label3(f_104_108_100_115_95_95_105_110_115_116_109_97_112_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_110_105_102_121_95_105_110_115_116_109_97_112_112_105_110_103_95_100_101_108_116_97_95_50_95_95_91_50_93_95_48_8_0,23,19,52)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__pred__unify_instmapping_delta_2__[2]_0'/8 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(f_104_108_100_115_95_95_105_110_115_116_109_97_112_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_110_105_102_121_95_105_110_115_116_109_97_112_112_105_110_103_95_100_101_108_116_97_95_50_95_95_91_50_93_95_48_8_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(10);
	MR_sv(10) = (MR_Word) MR_succip;
MR_def_label(f_104_108_100_115_95_95_105_110_115_116_109_97_112_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_110_105_102_121_95_105_110_115_116_109_97_112_112_105_110_103_95_100_101_108_116_97_95_50_95_95_91_50_93_95_48_8_0,48)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(f_104_108_100_115_95_95_105_110_115_116_109_97_112_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_110_105_102_121_95_105_110_115_116_109_97_112_112_105_110_103_95_100_101_108_116_97_95_50_95_95_91_50_93_95_48_8_0_i3);
	}
	MR_r1 = MR_r4;
	MR_r2 = MR_r5;
	MR_decr_sp_and_return(10);
MR_def_label(f_104_108_100_115_95_95_105_110_115_116_109_97_112_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_110_105_102_121_95_105_110_115_116_109_97_112_112_105_110_103_95_100_101_108_116_97_95_50_95_95_91_50_93_95_48_8_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_tfield(1, MR_r1, 1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(1, MR_r1, 0);
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_r5;
	MR_sv(5) = MR_tempr1;
	MR_sv(8) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_sv(9) = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(9);
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_inst);
	MR_r4 = MR_sv(1);
	MR_r5 = MR_tempr1;
	}
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		f_104_108_100_115_95_95_105_110_115_116_109_97_112_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_110_105_102_121_95_105_110_115_116_109_97_112_112_105_110_103_95_100_101_108_116_97_95_50_95_95_91_50_93_95_48_8_0_i6);
MR_def_label(f_104_108_100_115_95_95_105_110_115_116_109_97_112_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_110_105_102_121_95_105_110_115_116_109_97_112_112_105_110_103_95_100_101_108_116_97_95_50_95_95_91_50_93_95_48_8_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(f_104_108_100_115_95_95_105_110_115_116_109_97_112_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_110_105_102_121_95_105_110_115_116_109_97_112_112_105_110_103_95_100_101_108_116_97_95_50_95_95_91_50_93_95_48_8_0_i4);
	}
	MR_sv(7) = MR_r2;
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(9);
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_inst);
	MR_r4 = MR_sv(2);
	MR_r5 = MR_sv(5);
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		f_104_108_100_115_95_95_105_110_115_116_109_97_112_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_110_105_102_121_95_105_110_115_116_109_97_112_112_105_110_103_95_100_101_108_116_97_95_50_95_95_91_50_93_95_48_8_0_i9);
MR_def_label(f_104_108_100_115_95_95_105_110_115_116_109_97_112_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_110_105_102_121_95_105_110_115_116_109_97_112_112_105_110_103_95_100_101_108_116_97_95_50_95_95_91_50_93_95_48_8_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(f_104_108_100_115_95_95_105_110_115_116_109_97_112_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_110_105_102_121_95_105_110_115_116_109_97_112_112_105_110_103_95_100_101_108_116_97_95_50_95_95_91_50_93_95_48_8_0_i8);
	}
	MR_r1 = (MR_Integer) 0;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(7);
	MR_r3 = MR_tempr1;
	MR_r4 = (MR_Integer) 1;
	MR_r5 = MR_sv(4);
	}
	MR_np_call_localret_ent(check_hlds__inst_util__abstractly_unify_inst_8_0,
		f_104_108_100_115_95_95_105_110_115_116_109_97_112_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_110_105_102_121_95_105_110_115_116_109_97_112_112_105_110_103_95_100_101_108_116_97_95_50_95_95_91_50_93_95_48_8_0_i12);
MR_def_label(f_104_108_100_115_95_95_105_110_115_116_109_97_112_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_110_105_102_121_95_105_110_115_116_109_97_112_112_105_110_103_95_100_101_108_116_97_95_50_95_95_91_50_93_95_48_8_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(f_104_108_100_115_95_95_105_110_115_116_109_97_112_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_110_105_102_121_95_105_110_115_116_109_97_112_112_105_110_103_95_100_101_108_116_97_95_50_95_95_91_50_93_95_48_8_0_i11);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r4;
	MR_r1 = MR_sv(8);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_sv(9);
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_inst);
	MR_r4 = MR_sv(5);
	MR_r5 = MR_tempr2;
	MR_r6 = MR_tempr1;
	}
	MR_np_call_localret_ent(f_115_118_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_0,
		f_104_108_100_115_95_95_105_110_115_116_109_97_112_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_110_105_102_121_95_105_110_115_116_109_97_112_112_105_110_103_95_100_101_108_116_97_95_50_95_95_91_50_93_95_48_8_0_i14);
MR_def_label(f_104_108_100_115_95_95_105_110_115_116_109_97_112_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_110_105_102_121_95_105_110_115_116_109_97_112_112_105_110_103_95_100_101_108_116_97_95_50_95_95_91_50_93_95_48_8_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r4 = MR_tempr1;
	MR_r5 = MR_sv(3);
	MR_succip_word = MR_sv(10);
	MR_GOTO_LAB(f_104_108_100_115_95_95_105_110_115_116_109_97_112_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_110_105_102_121_95_105_110_115_116_109_97_112_112_105_110_103_95_100_101_108_116_97_95_50_95_95_91_50_93_95_48_8_0_i48);
	}
MR_def_label(f_104_108_100_115_95_95_105_110_115_116_109_97_112_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_110_105_102_121_95_105_110_115_116_109_97_112_112_105_110_103_95_100_101_108_116_97_95_50_95_95_91_50_93_95_48_8_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("instmap.m", 9);
	MR_r2 = (MR_Word) MR_string_const("unify_instmapping_delta_2: unexpected error", 43);
	MR_np_call_localret_ent(libs__compiler_util__unexpected_2_0,
		f_104_108_100_115_95_95_105_110_115_116_109_97_112_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_110_105_102_121_95_105_110_115_116_109_97_112_112_105_110_103_95_100_101_108_116_97_95_50_95_95_91_50_93_95_48_8_0_i52);
MR_def_label(f_104_108_100_115_95_95_105_110_115_116_109_97_112_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_110_105_102_121_95_105_110_115_116_109_97_112_112_105_110_103_95_100_101_108_116_97_95_50_95_95_91_50_93_95_48_8_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(9);
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_inst);
	MR_r4 = MR_sv(5);
	MR_r5 = MR_sv(7);
	MR_r6 = MR_sv(3);
	MR_np_call_localret_ent(f_115_118_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_0,
		f_104_108_100_115_95_95_105_110_115_116_109_97_112_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_110_105_102_121_95_105_110_115_116_109_97_112_112_105_110_103_95_100_101_108_116_97_95_50_95_95_91_50_93_95_48_8_0_i23);
MR_def_label(f_104_108_100_115_95_95_105_110_115_116_109_97_112_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_110_105_102_121_95_105_110_115_116_109_97_112_112_105_110_103_95_100_101_108_116_97_95_50_95_95_91_50_93_95_48_8_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_sv(8) = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(8);
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_inst);
	MR_r4 = MR_sv(2);
	MR_r5 = MR_sv(5);
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		f_104_108_100_115_95_95_105_110_115_116_109_97_112_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_110_105_102_121_95_105_110_115_116_109_97_112_112_105_110_103_95_100_101_108_116_97_95_50_95_95_91_50_93_95_48_8_0_i21);
MR_def_label(f_104_108_100_115_95_95_105_110_115_116_109_97_112_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_110_105_102_121_95_105_110_115_116_109_97_112_112_105_110_103_95_100_101_108_116_97_95_50_95_95_91_50_93_95_48_8_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(f_104_108_100_115_95_95_105_110_115_116_109_97_112_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_110_105_102_121_95_105_110_115_116_109_97_112_112_105_110_103_95_100_101_108_116_97_95_50_95_95_91_50_93_95_48_8_0_i19);
	}
	MR_r1 = MR_sv(7);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(8);
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_inst);
	MR_r4 = MR_sv(5);
	MR_r5 = MR_tempr1;
	MR_r6 = MR_sv(3);
	}
	MR_np_call_localret_ent(f_115_118_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_0,
		f_104_108_100_115_95_95_105_110_115_116_109_97_112_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_110_105_102_121_95_105_110_115_116_109_97_112_112_105_110_103_95_100_101_108_116_97_95_50_95_95_91_50_93_95_48_8_0_i23);
MR_def_label(f_104_108_100_115_95_95_105_110_115_116_109_97_112_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_110_105_102_121_95_105_110_115_116_109_97_112_112_105_110_103_95_100_101_108_116_97_95_50_95_95_91_50_93_95_48_8_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r4 = MR_tempr1;
	MR_r5 = MR_sv(4);
	MR_succip_word = MR_sv(10);
	MR_GOTO_LAB(f_104_108_100_115_95_95_105_110_115_116_109_97_112_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_110_105_102_121_95_105_110_115_116_109_97_112_112_105_110_103_95_100_101_108_116_97_95_50_95_95_91_50_93_95_48_8_0_i48);
	}
MR_def_label(f_104_108_100_115_95_95_105_110_115_116_109_97_112_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_110_105_102_121_95_105_110_115_116_109_97_112_112_105_110_103_95_100_101_108_116_97_95_50_95_95_91_50_93_95_48_8_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r1 = MR_sv(6);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(4);
MR_def_label(f_104_108_100_115_95_95_105_110_115_116_109_97_112_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_110_105_102_121_95_105_110_115_116_109_97_112_112_105_110_103_95_100_101_108_116_97_95_50_95_95_91_50_93_95_48_8_0,52)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(10);
	MR_GOTO_LAB(f_104_108_100_115_95_95_105_110_115_116_109_97_112_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_110_105_102_121_95_105_110_115_116_109_97_112_112_105_110_103_95_100_101_108_116_97_95_50_95_95_91_50_93_95_48_8_0_i48);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

static void mercury__hlds__instmap_maybe_bunch_0(void)
{
	hlds__instmap_module0();
	hlds__instmap_module1();
	hlds__instmap_module2();
	hlds__instmap_module3();
	hlds__instmap_module4();
	hlds__instmap_module5();
	hlds__instmap_module6();
	hlds__instmap_module7();
	hlds__instmap_module8();
	hlds__instmap_module9();
	hlds__instmap_module10();
	hlds__instmap_module11();
	hlds__instmap_module12();
	hlds__instmap_module13();
	hlds__instmap_module14();
	hlds__instmap_module15();
	hlds__instmap_module16();
	hlds__instmap_module17();
	hlds__instmap_module18();
	hlds__instmap_module19();
	hlds__instmap_module20();
	hlds__instmap_module21();
	hlds__instmap_module22();
	hlds__instmap_module23();
	hlds__instmap_module24();
	hlds__instmap_module25();
	hlds__instmap_module26();
	hlds__instmap_module27();
	hlds__instmap_module28();
	hlds__instmap_module29();
	hlds__instmap_module30();
	hlds__instmap_module31();
	hlds__instmap_module32();
	hlds__instmap_module33();
	hlds__instmap_module34();
	hlds__instmap_module35();
	hlds__instmap_module36();
	hlds__instmap_module37();
	hlds__instmap_module38();
	hlds__instmap_module39();
}

static void mercury__hlds__instmap_maybe_bunch_1(void)
{
	hlds__instmap_module40();
	hlds__instmap_module41();
	hlds__instmap_module42();
	hlds__instmap_module43();
	hlds__instmap_module44();
	hlds__instmap_module45();
	hlds__instmap_module46();
	hlds__instmap_module47();
	hlds__instmap_module48();
	hlds__instmap_module49();
	hlds__instmap_module50();
	hlds__instmap_module51();
	hlds__instmap_module52();
	hlds__instmap_module53();
	hlds__instmap_module54();
	hlds__instmap_module55();
	hlds__instmap_module56();
	hlds__instmap_module57();
	hlds__instmap_module58();
	hlds__instmap_module59();
	hlds__instmap_module60();
	hlds__instmap_module61();
	hlds__instmap_module62();
	hlds__instmap_module63();
	hlds__instmap_module64();
	hlds__instmap_module65();
	hlds__instmap_module66();
	hlds__instmap_module67();
	hlds__instmap_module68();
	hlds__instmap_module69();
	hlds__instmap_module70();
	hlds__instmap_module71();
	hlds__instmap_module72();
	hlds__instmap_module73();
	hlds__instmap_module74();
	hlds__instmap_module75();
	hlds__instmap_module76();
	hlds__instmap_module77();
	hlds__instmap_module78();
	hlds__instmap_module79();
}

static void mercury__hlds__instmap_maybe_bunch_2(void)
{
	hlds__instmap_module80();
	hlds__instmap_module81();
	hlds__instmap_module82();
	hlds__instmap_module83();
	hlds__instmap_module84();
	hlds__instmap_module85();
	hlds__instmap_module86();
	hlds__instmap_module87();
}

/* suppress gcc -Wmissing-decls warnings */
void mercury__hlds__instmap__init(void);
void mercury__hlds__instmap__init_type_tables(void);
void mercury__hlds__instmap__init_debugger(void);
#ifdef MR_DEEP_PROFILING
void mercury__hlds__instmap__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp);
#endif
#ifdef MR_RECORD_TERM_SIZES
void mercury__hlds__instmap__init_complexity_procs(void);
#endif

void mercury__hlds__instmap__init(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	mercury__hlds__instmap_maybe_bunch_0();
	mercury__hlds__instmap_maybe_bunch_1();
	mercury__hlds__instmap_maybe_bunch_2();
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_hlds__instmap__type_ctor_info_instmap_0,
		hlds__instmap__instmap_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_hlds__instmap__type_ctor_info_instmap_delta_0,
		hlds__instmap__instmap_delta_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_hlds__instmap__type_ctor_info_instmapping_0,
		hlds__instmap__instmapping_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_hlds__instmap__type_ctor_info_overlay_how_0,
		hlds__instmap__overlay_how_0_0);
	mercury__hlds__instmap__init_debugger();
}

void mercury__hlds__instmap__init_type_tables(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	{
		MR_register_type_ctor_info(
		&mercury_data_hlds__instmap__type_ctor_info_instmap_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_hlds__instmap__type_ctor_info_instmap_delta_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_hlds__instmap__type_ctor_info_instmapping_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_hlds__instmap__type_ctor_info_overlay_how_0);
	}
}


void mercury__hlds__instmap__init_debugger(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}

#ifdef MR_DEEP_PROFILING

void mercury__hlds__instmap__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp)
{
	MR_write_out_module_proc_reps_start(procrep_fp, &mercury_data__module_common_layout__hlds__instmap);
	MR_write_out_module_proc_reps_end(procrep_fp);
}

#endif

#ifdef MR_RECORD_TERM_SIZES

void mercury__hlds__instmap__init_complexity_procs(void)
{
}

#endif

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;
