/*
** Automatically generated from `read_profile.m'
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
INIT mercury__read_profile__init
ENDINIT
*/

#define MR_ALLOW_RESET
#include "mercury_imp.h"
#line 25 "read_profile.c"
#include "read_profile.mh"

#line 28 "read_profile.c"
#line 526 "../library/io.int"
#include "io.mh"

#line 32 "read_profile.c"
#line 536 "../library/io.int"
#include "string.mh"

#line 36 "read_profile.c"
#line 284 "profile.int"
#include "profile.mh"

#line 40 "read_profile.c"
#line 202 "../library/array.int"
#include "array.mh"

#line 44 "read_profile.c"
#line 202 "mdbcomp.program_representation.int"
#include "mdbcomp.program_representation.mh"

#line 48 "read_profile.c"
#line 31 "../library/bitmap.int2"
#include "bitmap.mh"

#line 52 "read_profile.c"
#line 30 "../library/time.int2"
#include "time.mh"

#line 56 "read_profile.c"
#line 39 "mdbcomp.rtti_access.int2"
#include "mdbcomp.rtti_access.mh"

#line 60 "read_profile.c"
#line 61 "read_profile.c"
#ifndef READ_PROFILE_DECL_GUARD
#define READ_PROFILE_DECL_GUARD

#line 65 "read_profile.c"
#line 1526 "read_profile.m"
#include "mercury_deep_profiling.h"
#line 68 "read_profile.c"
#line 69 "read_profile.c"

#endif
#line 72 "read_profile.c"

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
	MR_Word * f1[2];
};
MR_STATIC_LINKAGE const struct mercury_type_1 mercury_common_1[];

struct mercury_type_2 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[4];
};
MR_STATIC_LINKAGE const struct mercury_type_2 mercury_common_2[];

struct mercury_type_3 {
	MR_Word * f1;
	MR_Code * f2;
	MR_Integer f3;
	MR_Integer f4;
};
MR_STATIC_LINKAGE const struct mercury_type_3 mercury_common_3[];

struct mercury_type_4 {
	MR_Word * f1;
	MR_Integer f2;
	MR_Word * f3;
	MR_Word * f4;
};
MR_STATIC_LINKAGE const struct mercury_type_4 mercury_common_4[];

struct mercury_type_5 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[3];
};
MR_STATIC_LINKAGE const struct mercury_type_5 mercury_common_5[];

struct mercury_type_6 {
	MR_Word * f1;
	MR_Code * f2;
	MR_Integer f3;
};
MR_STATIC_LINKAGE const struct mercury_type_6 mercury_common_6[];

struct mercury_type_7 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[5];
};
MR_STATIC_LINKAGE const struct mercury_type_7 mercury_common_7[];

struct mercury_type_8 {
	MR_Word * f1;
	MR_Word * f2;
	MR_Integer f3;
	MR_Word * f4;
	MR_Word * f5;
};
MR_STATIC_LINKAGE const struct mercury_type_8 mercury_common_8[];

struct mercury_type_9 {
	MR_Word * f1;
	MR_Word * f2;
	MR_Integer f3;
	MR_Word * f4;
};
MR_STATIC_LINKAGE const struct mercury_type_9 mercury_common_9[];

struct mercury_type_10 {
	MR_Word * f1;
	MR_Integer f2;
	MR_Word * f3[6];
};
MR_STATIC_LINKAGE const struct mercury_type_10 mercury_common_10[];

struct mercury_type_11 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[7];
};
MR_STATIC_LINKAGE const struct mercury_type_11 mercury_common_11[];

struct mercury_type_12 {
	MR_Word * f1;
	MR_Integer f2;
	MR_Word * f3;
	MR_Word * f4;
	MR_Word * f5;
};
MR_STATIC_LINKAGE const struct mercury_type_12 mercury_common_12[];

struct mercury_type_13 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[12];
};
MR_STATIC_LINKAGE const struct mercury_type_13 mercury_common_13[];

struct mercury_type_14 {
	MR_Integer f1;
	MR_String f2;
};
MR_STATIC_LINKAGE const struct mercury_type_14 mercury_common_14[];

struct mercury_type_15 {
	MR_Integer f1;
	MR_Integer f2;
	MR_Word * f3;
	MR_Integer f4;
	MR_Word * f5;
};
MR_STATIC_LINKAGE const struct mercury_type_15 mercury_common_15[];

struct mercury_type_16 {
	MR_Word * f1;
};
MR_STATIC_LINKAGE const struct mercury_type_16 mercury_common_16[];

struct mercury_type_17 {
	MR_Word * f1[3];
};
MR_STATIC_LINKAGE const struct mercury_type_17 mercury_common_17[];

extern const MR_TypeCtorInfo_Struct
	mercury_data_read_profile__type_ctor_info_maybe_error2_2,
	mercury_data_read_profile__type_ctor_info_maybe_init_deep_complete_0,
	mercury_data_read_profile__type_ctor_info_next_deep_item_0,
	mercury_data_read_profile__type_ctor_info_ptr_kind_0;
MR_decl_label2(read_profile__IntroducedFrom__pred__read_call_site_static__435__1_5_0, 2,3)
MR_decl_label2(read_profile__IntroducedFrom__pred__read_coverage_point_static__704__1_3_0, 2,3)
MR_decl_label4(f_114_101_97_100_95_112_114_111_102_105_108_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_100_95_110_95_116_104_105_110_103_115_95_95_91_49_93_95_48_6_0, 17,2,4,20)
MR_decl_label3(f_114_101_97_100_95_112_114_111_102_105_108_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_100_95_110_95_116_104_105_110_103_115_95_95_104_111_52_95_95_91_49_44_32_51_93_95_48_5_0, 2,5,3)
MR_decl_label4(f_114_101_97_100_95_112_114_111_102_105_108_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_100_95_110_95_116_104_105_110_103_115_95_95_104_111_53_95_95_91_49_44_32_51_93_95_48_6_0, 17,2,4,20)
MR_decl_label10(read_profile__create_refined_proc_ids_3_0, 5,8,7,11,10,14,13,19,20,21)
MR_decl_label10(read_profile__create_refined_proc_ids_3_0, 23,24,25,26,27,28,29,30,31,32)
MR_decl_label10(read_profile__create_refined_proc_ids_3_0, 33,34,35,36,4,39,42,41,45,44)
MR_decl_label10(read_profile__create_refined_proc_ids_3_0, 49,50,51,52,54,55,56,57,58,59)
MR_decl_label10(read_profile__create_refined_proc_ids_3_0, 60,61,62,63,64,38,66,67,68,69)
MR_decl_label10(read_profile__create_refined_proc_ids_3_0, 70,71,72,73,74,75,3,79,81,83)
MR_decl_label10(read_profile__create_refined_proc_ids_3_0, 85,87,89,95,96,97,98,99,100,101)
MR_decl_label8(read_profile__create_refined_proc_ids_3_0, 102,103,104,127,105,107,108,109)
MR_decl_label3(read_profile__deep_insert_4_0, 2,3,6)
MR_decl_label5(read_profile__fix_type_spec_suffix_3_0, 10,11,2,13,1)
MR_decl_label5(read_profile__glue_lambda_name_3_0, 57,7,10,13,1)
MR_decl_label1(read_profile__is_next_item_token_2_0, 1)
MR_decl_label10(read_profile__maybe_deep_flags_2_0, 2,3,4,5,9,8,12,13,11,6)
MR_decl_label1(read_profile__maybe_deep_flags_2_0, 19)
MR_decl_label10(read_profile__maybe_init_deep_12_0, 2,6,8,9,11,14,15,16,17,19)
MR_decl_label1(read_profile__maybe_init_deep_12_0, 3)
MR_decl_label3(read_profile__maybe_read_num_handle_error_7_0, 6,8,3)
MR_decl_label6(read_profile__maybe_read_pd_coverage_points_4_0, 4,7,10,11,3,36)
MR_decl_label10(read_profile__maybe_read_ps_coverage_points_4_0, 4,8,3,11,16,15,21,24,12,30)
MR_decl_label2(read_profile__maybe_read_ps_coverage_points_4_0, 34,2)
MR_decl_label10(read_profile__read_call_graph_4_0, 2,5,4,7,8,10,23,30,25,27)
MR_decl_label6(read_profile__read_call_site_dynamic_3_0, 2,4,6,8,10,12)
MR_decl_label6(read_profile__read_call_site_kind_3_0, 2,7,5,10,11,3)
MR_decl_label10(read_profile__read_call_site_kind_and_callee_3_0, 2,7,10,12,14,17,20,16,5,26)
MR_decl_label2(read_profile__read_call_site_kind_and_callee_3_0, 27,3)
MR_decl_label10(read_profile__read_call_site_slot_3_0, 2,7,11,12,6,16,15,25,29,30)
MR_decl_label8(read_profile__read_call_site_slot_3_0, 24,34,37,33,40,44,45,3)
MR_decl_label2(read_profile__read_cp_type_3_0, 2,3)
MR_decl_label4(read_profile__read_deep_byte_3_0, 2,4,7,6)
MR_decl_label8(read_profile__read_deep_id_string_3_0, 2,3,6,8,10,12,7,4)
MR_decl_label5(read_profile__read_fixed_size_int_acc_6_0, 17,2,4,7,20)
MR_decl_label10(read_profile__read_line_acc_5_0, 55,3,34,5,8,7,12,17,18,15)
MR_decl_label3(read_profile__read_line_acc_5_0, 2,24,25)
MR_decl_label6(read_profile__read_multi_call_site_csdis_2_4_0, 25,2,5,8,9,28)
MR_decl_label4(read_profile__read_n_bytes_acc_5_0, 17,2,4,20)
MR_decl_label3(read_profile__read_n_things_5_0, 2,5,3)
MR_decl_label3(read_profile__read_n_things__ho2_5_0, 2,5,3)
MR_decl_label3(read_profile__read_n_things__ho3_5_0, 3,6,4)
MR_decl_label4(read_profile__read_n_things__ho6_6_0, 17,2,4,20)
MR_decl_label4(read_profile__read_n_things__ho7_6_0, 26,2,7,29)
MR_decl_label4(read_profile__read_n_things__ho8_6_0, 17,2,4,20)
MR_decl_label4(read_profile__read_nodes_4_0, 16,2,4,6)
MR_decl_label1(read_profile__read_nodes_2_5_0, 2)
MR_decl_label10(read_profile__read_nodes_3_5_0, 2,4,6,5,10,14,16,18,13,22)
MR_decl_label10(read_profile__read_nodes_3_5_0, 24,26,21,29,31,33,35,30,38,40)
MR_decl_label4(read_profile__read_nodes_3_5_0, 42,8,45,46)
MR_decl_label7(read_profile__read_num_acc_4_0, 36,2,4,7,6,9,11)
MR_decl_label6(read_profile__read_proc_dynamic_4_0, 7,9,19,21,23,24)
MR_decl_label8(read_profile__read_proc_id_3_0, 2,7,10,19,5,22,23,3)
MR_decl_label10(read_profile__read_proc_static_4_0, 10,12,14,16,18,20,23,24,25,26)
MR_decl_label2(read_profile__read_proc_static_4_0, 27,30)
MR_decl_label10(read_profile__read_profile_3_0, 2,5,6,7,8,9,10,11,12,15)
MR_decl_label2(read_profile__read_profile_3_0, 14,3)
MR_decl_label8(read_profile__read_string_3_0, 2,5,8,11,14,16,12,3)
MR_decl_label5(read_profile__split_lambda_name_2_0, 62,9,4,12,14)
MR_decl_label1(fn__read_profile__add_plus_one_for_function_1_0, 3)
MR_decl_label6(fn__read_profile__raw_proc_id_to_string_1_0, 4,6,7,3,17,18)
MR_decl_label4(__Unify___read_profile__maybe_error2_2_0, 16,5,8,1)
MR_decl_label4(__Unify___read_profile__maybe_init_deep_complete_0_0, 5,21,7,1)
MR_decl_label7(__Compare___read_profile__maybe_error2_2_0, 3,2,7,5,10,12,45)
MR_decl_label10(__Compare___read_profile__maybe_init_deep_complete_0_0, 3,2,7,5,12,10,27,16,28,17)
MR_decl_static(read_profile__read_line_acc_5_0)
MR_decl_static(read_profile__read_deep_id_string_3_0)
MR_decl_static(read_profile__read_call_site_static_3_0)
MR_decl_static(read_profile__read_n_things_5_0)
MR_decl_static(read_profile__read_num_acc_4_0)
MR_decl_static(read_profile__read_num_3_0)
MR_decl_static(read_profile__maybe_read_ps_coverage_points_4_0)
MR_decl_static(fn__read_profile__add_plus_one_for_function_1_0)
MR_decl_static(fn__read_profile__raw_proc_id_to_string_1_0)
MR_decl_static(read_profile__fix_type_spec_suffix_3_0)
MR_decl_static(read_profile__split_lambda_name_2_0)
MR_decl_static(read_profile__glue_lambda_name_3_0)
MR_decl_static(read_profile__create_refined_proc_ids_3_0)
MR_decl_static(read_profile__read_proc_static_4_0)
MR_decl_static(fn__read_profile__make_psptr_1_0)
MR_decl_static(read_profile__read_proc_dynamic_4_0)
MR_decl_static(read_profile__maybe_read_num_handle_error_7_0)
MR_decl_static(read_profile__read_profile_3_0)
MR_decl_static(read_profile__read_ptr_4_0)
MR_decl_static(read_profile__read_call_site_dynamic_3_0)
MR_decl_static(read_profile__deep_insert_4_0)
MR_decl_static(read_profile__is_next_item_token_2_0)
MR_decl_static(read_profile__read_nodes_2_5_0)
MR_decl_static(read_profile__read_nodes_3_5_0)
MR_decl_static(read_profile__read_nodes_4_0)
MR_def_extern_entry(read_profile__read_call_graph_4_0)
MR_decl_static(read_profile__maybe_deep_flags_2_0)
MR_decl_static(read_profile__maybe_init_deep_12_0)
MR_decl_static(read_profile__maybe_read_pd_coverage_points_4_0)
MR_decl_static(read_profile__read_proc_id_user_defined_4_0)
MR_decl_static(read_profile__read_deep_byte_3_0)
MR_decl_static(read_profile__read_proc_id_3_0)
MR_decl_static(read_profile__read_coverage_point_static_and_num_3_0)
MR_decl_static(read_profile__read_coverage_point_static_3_0)
MR_decl_static(read_profile__non_right_bracket_1_0)
MR_decl_static(read_profile__read_multi_call_site_csdis_2_4_0)
MR_decl_static(read_profile__read_multi_call_site_csdis_3_0)
MR_decl_static(read_profile__read_call_site_kind_3_0)
MR_decl_static(fn__read_profile__make_csdptr_1_0)
MR_decl_static(read_profile__read_call_site_slot_3_0)
MR_decl_static(read_profile__read_n_bytes_acc_5_0)
MR_decl_static(read_profile__read_string_3_0)
MR_decl_static(read_profile__read_call_site_kind_and_callee_3_0)
MR_decl_static(read_profile__num_to_cp_type_2_0)
MR_decl_static(read_profile__read_cp_type_3_0)
MR_decl_static(read_profile__read_fixed_size_int_acc_6_0)
MR_decl_static(read_profile__read_fixed_size_int_3_0)
MR_decl_static(fn__read_profile__make_cssptr_1_0)
MR_decl_static(__Unify___read_profile__maybe_error2_2_0)
MR_decl_static(__Compare___read_profile__maybe_error2_2_0)
MR_decl_static(__Unify___read_profile__maybe_init_deep_complete_0_0)
MR_decl_static(__Compare___read_profile__maybe_init_deep_complete_0_0)
MR_decl_static(__Unify___read_profile__next_deep_item_0_0)
MR_decl_static(__Compare___read_profile__next_deep_item_0_0)
MR_decl_static(__Unify___read_profile__ptr_kind_0_0)
MR_decl_static(__Compare___read_profile__ptr_kind_0_0)
MR_decl_static(read_profile__IntroducedFrom__pred__read_call_site_static__435__1_5_0)
MR_decl_static(read_profile__IntroducedFrom__pred__read_proc_static__471__1_7_0)
MR_decl_static(fn__read_profile__IntroducedFrom__func__maybe_read_ps_coverage_points__577__1_1_0)
MR_decl_static(read_profile__IntroducedFrom__pred__read_proc_id_uci_pred__644__1_7_0)
MR_decl_static(read_profile__IntroducedFrom__pred__read_proc_id_user_defined__663__1_7_0)
MR_decl_static(read_profile__IntroducedFrom__pred__read_coverage_point_static_and_num__688__1_3_0)
MR_decl_static(read_profile__IntroducedFrom__pred__read_coverage_point_static__704__1_3_0)
MR_decl_static(read_profile__IntroducedFrom__pred__read_proc_dynamic__887__1_4_0)
MR_decl_static(read_profile__IntroducedFrom__pred__read_proc_dynamic__897__1_5_0)
MR_decl_static(read_profile__IntroducedFrom__pred__read_proc_dynamic__897__2_3_0)
MR_decl_static(read_profile__IntroducedFrom__pred__read_n_byte_string__1317__1_2_0)
MR_decl_static(read_profile__read_n_things__ho2_5_0)
MR_decl_static(read_profile__read_n_things__ho3_5_0)
MR_decl_static(read_profile__read_n_things__ho6_6_0)
MR_decl_static(read_profile__read_n_things__ho7_6_0)
MR_decl_static(read_profile__read_n_things__ho8_6_0)
MR_decl_static(f_114_101_97_100_95_112_114_111_102_105_108_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_100_95_110_95_116_104_105_110_103_115_95_95_91_49_93_95_48_6_0)
MR_decl_static(f_114_101_97_100_95_112_114_111_102_105_108_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_100_95_112_116_114_95_95_91_49_93_95_48_4_0)
MR_decl_static(f_114_101_97_100_95_112_114_111_102_105_108_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_100_95_110_95_116_104_105_110_103_115_95_95_104_111_52_95_95_91_49_44_32_51_93_95_48_5_0)
MR_decl_static(f_114_101_97_100_95_112_114_111_102_105_108_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_100_95_110_95_116_104_105_110_103_115_95_95_104_111_53_95_95_91_49_44_32_51_93_95_48_6_0)

static const struct mercury_type_0 mercury_common_0[5] =
{
{
MR_string_const("unexpected end of file", 22)
},
{
MR_string_const("version number mismatch", 23)
},
{
MR_string_const("not a deep profiling data file", 30)
},
{
MR_string_const("", 0)
},
{
MR_string_const("string contained bad char", 25)
},
};

extern const MR_TypeCtorInfo_Struct mercury_data_maybe__type_ctor_info_maybe_error_1;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;
extern const MR_TypeCtorInfo_Struct mercury_data_profile__type_ctor_info_call_site_kind_and_callee_1;
extern const MR_TypeCtorInfo_Struct mercury_data_profile__type_ctor_info_proc_static_ptr_0;
extern const MR_TypeCtorInfo_Struct mercury_data_profile__type_ctor_info_call_site_kind_and_callee_1;
extern const MR_TypeCtorInfo_Struct mercury_data_profile__type_ctor_info_proc_static_ptr_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_string_0;
extern const MR_TypeCtorInfo_Struct mercury_data_list__type_ctor_info_list_1;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;
extern const MR_TypeCtorInfo_Struct mercury_data_array__type_ctor_info_array_1;
extern const MR_TypeCtorInfo_Struct mercury_data_mdbcomp__program_representation__type_ctor_info_string_proc_label_0;
extern const MR_TypeCtorInfo_Struct mercury_data_array__type_ctor_info_array_1;
extern const MR_TypeCtorInfo_Struct mercury_data_maybe__type_ctor_info_maybe_1;
extern const MR_TypeCtorInfo_Struct mercury_data_profile__type_ctor_info_call_site_array_slot_0;
extern const MR_TypeCtorInfo_Struct mercury_data_maybe__type_ctor_info_maybe_error_1;
extern const MR_TypeCtorInfo_Struct mercury_data_list__type_ctor_info_list_1;
extern const MR_TypeCtorInfo_Struct mercury_data_maybe__type_ctor_info_maybe_1;
extern const MR_TypeCtorInfo_Struct mercury_data_profile__type_ctor_info_call_site_array_slot_0;
extern const MR_TypeCtorInfo_Struct mercury_data_profile__type_ctor_info_initial_deep_0;
extern const MR_TypeCtorInfo_Struct mercury_data_mdbcomp__program_representation__type_ctor_info_coverage_point_info_0;
extern const MR_TypeCtorInfo_Struct mercury_data_mdbcomp__program_representation__type_ctor_info_cp_type_0;
static const struct mercury_type_1 mercury_common_1[30] =
{
{
{
MR_CTOR1_ADDR(maybe, maybe_error),
MR_INT_CTOR_ADDR
}
},
{
{
MR_CTOR1_ADDR(profile, call_site_kind_and_callee),
MR_CTOR0_ADDR(profile, proc_static_ptr)
}
},
{
{
MR_CTOR1_ADDR(profile, call_site_kind_and_callee),
MR_CTOR0_ADDR(profile, proc_static_ptr)
}
},
{
{
MR_CTOR1_ADDR(maybe, maybe_error),
MR_COMMON(1,2)
}
},
{
{
MR_CTOR1_ADDR(maybe, maybe_error),
MR_STRING_CTOR_ADDR
}
},
{
{
MR_CTOR1_ADDR(profile, call_site_kind_and_callee),
MR_CTOR0_ADDR(profile, proc_static_ptr)
}
},
{
{
MR_CTOR1_ADDR(maybe, maybe_error),
MR_COMMON(4,1)
}
},
{
{
MR_LIST_CTOR_ADDR,
MR_INT_CTOR_ADDR
}
},
{
{
MR_CTOR1_ADDR(array, array),
MR_INT_CTOR_ADDR
}
},
{
{
MR_LIST_CTOR_ADDR,
MR_INT_CTOR_ADDR
}
},
{
{
MR_CTOR1_ADDR(array, array),
MR_INT_CTOR_ADDR
}
},
{
{
MR_CTOR1_ADDR(maybe, maybe_error),
MR_CTOR0_ADDR(mdbcomp__program_representation, string_proc_label)
}
},
{
{
MR_CTOR1_ADDR(maybe, maybe_error),
MR_COMMON(10,1)
}
},
{
{
MR_CTOR1_ADDR(maybe, maybe_error),
MR_COMMON(12,1)
}
},
{
{
MR_CTOR1_ADDR(array, array),
MR_INT_CTOR_ADDR
}
},
{
{
MR_CTOR1_ADDR(maybe, maybe),
MR_COMMON(1,14)
}
},
{
{
MR_CTOR1_ADDR(maybe, maybe_error),
MR_COMMON(1,15)
}
},
{
{
MR_CTOR1_ADDR(maybe, maybe_error),
MR_CTOR0_ADDR(profile, call_site_array_slot)
}
},
{
{
MR_CTOR1_ADDR(maybe, maybe_error),
MR_CTOR0_ADDR(profile, call_site_array_slot)
}
},
{
{
MR_LIST_CTOR_ADDR,
MR_CTOR0_ADDR(profile, call_site_array_slot)
}
},
{
{
MR_CTOR1_ADDR(maybe, maybe_error),
MR_COMMON(1,19)
}
},
{
{
MR_CTOR1_ADDR(maybe, maybe),
MR_TAG_COMMON(0,1,8)
}
},
{
{
MR_LIST_CTOR_ADDR,
MR_CTOR0_ADDR(profile, call_site_array_slot)
}
},
{
{
MR_CTOR1_ADDR(maybe, maybe),
MR_COMMON(1,14)
}
},
{
{
MR_LIST_CTOR_ADDR,
MR_CTOR0_ADDR(profile, call_site_array_slot)
}
},
{
{
MR_CTOR1_ADDR(maybe, maybe_error),
MR_COMMON(4,3)
}
},
{
{
MR_CTOR1_ADDR(maybe, maybe_error),
MR_CTOR0_ADDR(profile, initial_deep)
}
},
{
{
MR_CTOR1_ADDR(maybe, maybe_error),
MR_CTOR0_ADDR(mdbcomp__program_representation, coverage_point_info)
}
},
{
{
MR_CTOR1_ADDR(maybe, maybe_error),
MR_COMMON(17,1)
}
},
{
{
MR_CTOR1_ADDR(maybe, maybe_error),
MR_CTOR0_ADDR(mdbcomp__program_representation, cp_type)
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__read_profile__read_call_site_static_3_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_read_profile__type_ctor_info_ptr_kind_0;
extern const MR_TypeCtorInfo_Struct mercury_data_io__type_ctor_info_state_0;
static const MR_UserClosureId
mercury_data__closure_layout__read_profile__read_proc_static_4_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__read_profile__read_proc_dynamic_4_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__read_profile__read_proc_dynamic_4_0_2;
static const MR_UserClosureId
mercury_data__closure_layout__read_profile__read_proc_dynamic_4_0_4;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;
static const MR_UserClosureId
mercury_data__closure_layout__read_profile__read_proc_dynamic_4_0_5;
extern const MR_TypeCtorInfo_Struct mercury_data_profile__type_ctor_info_profile_stats_0;
static const MR_UserClosureId
mercury_data__closure_layout__read_profile__read_call_graph_4_0_1;
static const struct mercury_type_2 mercury_common_2[7] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__read_profile__read_call_site_static_3_0_1,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_CTOR0_ADDR(read_profile, ptr_kind),
MR_COMMON(1,0),
MR_IO_CTOR_ADDR,
MR_IO_CTOR_ADDR
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__read_profile__read_proc_static_4_0_1,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_CTOR0_ADDR(read_profile, ptr_kind),
MR_COMMON(1,0),
MR_IO_CTOR_ADDR,
MR_IO_CTOR_ADDR
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__read_profile__read_proc_dynamic_4_0_1,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_CTOR0_ADDR(read_profile, ptr_kind),
MR_COMMON(1,0),
MR_IO_CTOR_ADDR,
MR_IO_CTOR_ADDR
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__read_profile__read_proc_dynamic_4_0_2,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_CTOR0_ADDR(read_profile, ptr_kind),
MR_COMMON(1,0),
MR_IO_CTOR_ADDR,
MR_IO_CTOR_ADDR
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__read_profile__read_proc_dynamic_4_0_4,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_INT_CTOR_ADDR,
MR_INT_CTOR_ADDR,
MR_INT_CTOR_ADDR,
MR_COMMON(1,13)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__read_profile__read_proc_dynamic_4_0_5,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_CTOR0_ADDR(profile, profile_stats),
MR_COMMON(1,16),
MR_IO_CTOR_ADDR,
MR_IO_CTOR_ADDR
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__read_profile__read_call_graph_4_0_1,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_CTOR0_ADDR(read_profile, ptr_kind),
MR_COMMON(1,0),
MR_IO_CTOR_ADDR,
MR_IO_CTOR_ADDR
}
},
};

static const struct mercury_type_3 mercury_common_3[5] =
{
{
MR_COMMON(2,0),
MR_ENTRY_AP(read_profile__read_ptr_4_0),
1,
2
},
{
MR_COMMON(2,1),
MR_ENTRY_AP(read_profile__read_ptr_4_0),
1,
0
},
{
MR_COMMON(2,2),
MR_ENTRY_AP(read_profile__read_ptr_4_0),
1,
1
},
{
MR_COMMON(2,3),
MR_ENTRY_AP(read_profile__read_ptr_4_0),
1,
0
},
{
MR_COMMON(2,6),
MR_ENTRY_AP(read_profile__read_ptr_4_0),
1,
1
},
};

extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_tuple_0;
extern const MR_TypeCtorInfo_Struct mercury_data_profile__type_ctor_info_call_site_static_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_tuple_0;
extern const MR_TypeCtorInfo_Struct mercury_data_profile__type_ctor_info_call_site_static_0;
static const struct mercury_type_4 mercury_common_4[4] =
{
{
MR_CTOR0_ADDR(builtin, tuple),
2,
MR_CTOR0_ADDR(profile, call_site_static),
MR_INT_CTOR_ADDR
},
{
MR_CTOR0_ADDR(builtin, tuple),
2,
MR_CTOR0_ADDR(profile, call_site_static),
MR_INT_CTOR_ADDR
},
{
MR_CTOR0_ADDR(builtin, tuple),
2,
MR_TAG_COMMON(0,1,21),
MR_TAG_COMMON(0,1,22)
},
{
MR_CTOR0_ADDR(builtin, tuple),
2,
MR_COMMON(1,15),
MR_COMMON(1,19)
},
};

static const MR_UserClosureId
mercury_data__closure_layout__read_profile__read_call_site_static_3_0_2;
static const MR_UserClosureId
mercury_data__closure_layout__read_profile__read_call_site_static_3_0_3;
static const MR_UserClosureId
mercury_data__closure_layout__read_profile__read_call_site_static_3_0_4;
static const MR_UserClosureId
mercury_data__closure_layout__read_profile__read_proc_static_4_0_2;
static const MR_UserClosureId
mercury_data__closure_layout__read_profile__read_proc_static_4_0_3;
static const MR_UserClosureId
mercury_data__closure_layout__read_profile__read_proc_static_4_0_4;
static const MR_UserClosureId
mercury_data__closure_layout__read_profile__read_proc_static_4_0_5;
static const MR_UserClosureId
mercury_data__closure_layout__read_profile__read_proc_static_4_0_6;
static const MR_UserClosureId
mercury_data__closure_layout__read_profile__read_proc_dynamic_4_0_3;
static const MR_UserClosureId
mercury_data__closure_layout__read_profile__read_proc_dynamic_4_0_6;
static const MR_UserClosureId
mercury_data__closure_layout__read_profile__read_proc_dynamic_4_0_8;
static const MR_UserClosureId
mercury_data__closure_layout__read_profile__read_call_graph_4_0_3;
static const MR_UserClosureId
mercury_data__closure_layout__read_profile__read_call_graph_4_0_4;
static const MR_UserClosureId
mercury_data__closure_layout__read_profile__read_call_graph_4_0_5;
static const MR_UserClosureId
mercury_data__closure_layout__read_profile__read_call_graph_4_0_6;
static const MR_UserClosureId
mercury_data__closure_layout__read_profile__read_call_graph_4_0_7;
static const MR_UserClosureId
mercury_data__closure_layout__read_profile__read_call_graph_4_0_8;
static const MR_UserClosureId
mercury_data__closure_layout__read_profile__read_call_graph_4_0_9;
static const MR_UserClosureId
mercury_data__closure_layout__read_profile__read_call_graph_4_0_10;
static const MR_UserClosureId
mercury_data__closure_layout__read_profile__read_call_graph_4_0_11;
static const MR_UserClosureId
mercury_data__closure_layout__read_profile__read_call_graph_4_0_12;
static const MR_UserClosureId
mercury_data__closure_layout__read_profile__read_proc_id_user_defined_4_0_2;
static const MR_UserClosureId
mercury_data__closure_layout__read_profile__read_proc_id_user_defined_4_0_3;
static const MR_UserClosureId
mercury_data__closure_layout__read_profile__read_proc_id_user_defined_4_0_4;
static const MR_UserClosureId
mercury_data__closure_layout__read_profile__read_proc_id_user_defined_4_0_5;
static const MR_UserClosureId
mercury_data__closure_layout__read_profile__read_proc_id_user_defined_4_0_6;
static const MR_UserClosureId
mercury_data__closure_layout__read_profile__read_proc_id_3_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__read_profile__read_proc_id_3_0_2;
static const MR_UserClosureId
mercury_data__closure_layout__read_profile__read_proc_id_3_0_3;
static const MR_UserClosureId
mercury_data__closure_layout__read_profile__read_proc_id_3_0_4;
static const MR_UserClosureId
mercury_data__closure_layout__read_profile__read_proc_id_3_0_5;
static const MR_UserClosureId
mercury_data__closure_layout__read_profile__read_proc_id_3_0_6;
static const MR_UserClosureId
mercury_data__closure_layout__read_profile__read_coverage_point_static_and_num_3_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__read_profile__read_coverage_point_static_and_num_3_0_2;
static const MR_UserClosureId
mercury_data__closure_layout__read_profile__read_coverage_point_static_and_num_3_0_3;
extern const MR_TypeCtorInfo_Struct mercury_data_mdbcomp__program_representation__type_ctor_info_coverage_point_info_0;
static const MR_UserClosureId
mercury_data__closure_layout__read_profile__read_coverage_point_static_3_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__read_profile__read_coverage_point_static_3_0_2;
static const MR_UserClosureId
mercury_data__closure_layout__read_profile__read_coverage_point_static_3_0_3;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_string_0;
extern const MR_TypeCtorInfo_Struct mercury_data_mdbcomp__program_representation__type_ctor_info_cp_type_0;
static const MR_UserClosureId
mercury_data__closure_layout__read_profile__read_n_things__ho7_6_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__read_profile__read_n_things__ho7_6_0_2;
static const MR_UserClosureId
mercury_data__closure_layout__read_profile__read_n_things__ho7_6_0_3;
static const struct mercury_type_5 mercury_common_5[41] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__read_profile__read_call_site_static_3_0_2,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_COMMON(1,3),
MR_IO_CTOR_ADDR,
MR_IO_CTOR_ADDR
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__read_profile__read_call_site_static_3_0_3,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_COMMON(1,0),
MR_IO_CTOR_ADDR,
MR_IO_CTOR_ADDR
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__read_profile__read_call_site_static_3_0_4,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_COMMON(1,4),
MR_IO_CTOR_ADDR,
MR_IO_CTOR_ADDR
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__read_profile__read_proc_static_4_0_2,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_COMMON(1,11),
MR_IO_CTOR_ADDR,
MR_IO_CTOR_ADDR
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__read_profile__read_proc_static_4_0_3,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_COMMON(1,4),
MR_IO_CTOR_ADDR,
MR_IO_CTOR_ADDR
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__read_profile__read_proc_static_4_0_4,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_COMMON(1,0),
MR_IO_CTOR_ADDR,
MR_IO_CTOR_ADDR
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__read_profile__read_proc_static_4_0_5,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_COMMON(1,0),
MR_IO_CTOR_ADDR,
MR_IO_CTOR_ADDR
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__read_profile__read_proc_static_4_0_6,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_COMMON(1,0),
MR_IO_CTOR_ADDR,
MR_IO_CTOR_ADDR
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__read_profile__read_proc_dynamic_4_0_3,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_COMMON(1,0),
MR_IO_CTOR_ADDR,
MR_IO_CTOR_ADDR
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__read_profile__read_proc_dynamic_4_0_6,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_COMMON(1,17),
MR_IO_CTOR_ADDR,
MR_IO_CTOR_ADDR
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__read_profile__read_proc_dynamic_4_0_8,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_COMMON(1,23),
MR_COMMON(1,24),
MR_COMMON(1,25)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__read_profile__read_call_graph_4_0_3,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_COMMON(1,4),
MR_IO_CTOR_ADDR,
MR_IO_CTOR_ADDR
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__read_profile__read_call_graph_4_0_4,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_COMMON(1,0),
MR_IO_CTOR_ADDR,
MR_IO_CTOR_ADDR
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__read_profile__read_call_graph_4_0_5,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_COMMON(1,0),
MR_IO_CTOR_ADDR,
MR_IO_CTOR_ADDR
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__read_profile__read_call_graph_4_0_6,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_COMMON(1,0),
MR_IO_CTOR_ADDR,
MR_IO_CTOR_ADDR
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__read_profile__read_call_graph_4_0_7,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_COMMON(1,0),
MR_IO_CTOR_ADDR,
MR_IO_CTOR_ADDR
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__read_profile__read_call_graph_4_0_8,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_COMMON(1,0),
MR_IO_CTOR_ADDR,
MR_IO_CTOR_ADDR
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__read_profile__read_call_graph_4_0_9,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_COMMON(1,0),
MR_IO_CTOR_ADDR,
MR_IO_CTOR_ADDR
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__read_profile__read_call_graph_4_0_10,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_COMMON(1,0),
MR_IO_CTOR_ADDR,
MR_IO_CTOR_ADDR
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__read_profile__read_call_graph_4_0_11,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_COMMON(1,0),
MR_IO_CTOR_ADDR,
MR_IO_CTOR_ADDR
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__read_profile__read_call_graph_4_0_12,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_COMMON(1,0),
MR_IO_CTOR_ADDR,
MR_IO_CTOR_ADDR
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__read_profile__read_proc_id_user_defined_4_0_2,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_COMMON(1,4),
MR_IO_CTOR_ADDR,
MR_IO_CTOR_ADDR
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__read_profile__read_proc_id_user_defined_4_0_3,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_COMMON(1,4),
MR_IO_CTOR_ADDR,
MR_IO_CTOR_ADDR
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__read_profile__read_proc_id_user_defined_4_0_4,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_COMMON(1,4),
MR_IO_CTOR_ADDR,
MR_IO_CTOR_ADDR
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__read_profile__read_proc_id_user_defined_4_0_5,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_COMMON(1,0),
MR_IO_CTOR_ADDR,
MR_IO_CTOR_ADDR
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__read_profile__read_proc_id_user_defined_4_0_6,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_COMMON(1,0),
MR_IO_CTOR_ADDR,
MR_IO_CTOR_ADDR
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__read_profile__read_proc_id_3_0_1,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_COMMON(1,4),
MR_IO_CTOR_ADDR,
MR_IO_CTOR_ADDR
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__read_profile__read_proc_id_3_0_2,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_COMMON(1,4),
MR_IO_CTOR_ADDR,
MR_IO_CTOR_ADDR
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__read_profile__read_proc_id_3_0_3,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_COMMON(1,4),
MR_IO_CTOR_ADDR,
MR_IO_CTOR_ADDR
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__read_profile__read_proc_id_3_0_4,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_COMMON(1,4),
MR_IO_CTOR_ADDR,
MR_IO_CTOR_ADDR
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__read_profile__read_proc_id_3_0_5,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_COMMON(1,0),
MR_IO_CTOR_ADDR,
MR_IO_CTOR_ADDR
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__read_profile__read_proc_id_3_0_6,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_COMMON(1,0),
MR_IO_CTOR_ADDR,
MR_IO_CTOR_ADDR
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__read_profile__read_coverage_point_static_and_num_3_0_1,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_COMMON(1,27),
MR_IO_CTOR_ADDR,
MR_IO_CTOR_ADDR
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__read_profile__read_coverage_point_static_and_num_3_0_2,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_COMMON(1,0),
MR_IO_CTOR_ADDR,
MR_IO_CTOR_ADDR
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__read_profile__read_coverage_point_static_and_num_3_0_3,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_CTOR0_ADDR(mdbcomp__program_representation, coverage_point_info),
MR_INT_CTOR_ADDR,
MR_COMMON(1,28)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__read_profile__read_coverage_point_static_3_0_1,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_COMMON(1,4),
MR_IO_CTOR_ADDR,
MR_IO_CTOR_ADDR
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__read_profile__read_coverage_point_static_3_0_2,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_COMMON(1,29),
MR_IO_CTOR_ADDR,
MR_IO_CTOR_ADDR
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__read_profile__read_coverage_point_static_3_0_3,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_STRING_CTOR_ADDR,
MR_CTOR0_ADDR(mdbcomp__program_representation, cp_type),
MR_COMMON(1,27)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__read_profile__read_n_things__ho7_6_0_1,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_COMMON(1,4),
MR_IO_CTOR_ADDR,
MR_IO_CTOR_ADDR
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__read_profile__read_n_things__ho7_6_0_2,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_COMMON(1,29),
MR_IO_CTOR_ADDR,
MR_IO_CTOR_ADDR
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__read_profile__read_n_things__ho7_6_0_3,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_STRING_CTOR_ADDR,
MR_CTOR0_ADDR(mdbcomp__program_representation, cp_type),
MR_COMMON(1,27)
}
},
};

static const struct mercury_type_6 mercury_common_6[55] =
{
{
MR_COMMON(5,0),
MR_ENTRY_AP(read_profile__read_call_site_kind_and_callee_3_0),
0
},
{
MR_COMMON(5,1),
MR_ENTRY_AP(read_profile__read_num_3_0),
0
},
{
MR_COMMON(5,2),
MR_ENTRY_AP(read_profile__read_string_3_0),
0
},
{
MR_COMMON(7,0),
MR_ENTRY_AP(read_profile__IntroducedFrom__pred__read_call_site_static__435__1_5_0),
0
},
{
MR_COMMON(8,0),
MR_ENTRY_AP(fn__read_profile__IntroducedFrom__func__maybe_read_ps_coverage_points__577__1_1_0),
0
},
{
MR_COMMON(8,1),
MR_ENTRY_AP(fn__read_profile__IntroducedFrom__func__maybe_read_ps_coverage_points__577__1_1_0),
0
},
{
MR_COMMON(9,0),
MR_ENTRY_AP(read_profile__non_right_bracket_1_0),
0
},
{
MR_COMMON(5,3),
MR_ENTRY_AP(read_profile__read_proc_id_3_0),
0
},
{
MR_COMMON(5,4),
MR_ENTRY_AP(read_profile__read_string_3_0),
0
},
{
MR_COMMON(5,5),
MR_ENTRY_AP(read_profile__read_num_3_0),
0
},
{
MR_COMMON(5,6),
MR_ENTRY_AP(read_profile__read_deep_byte_3_0),
0
},
{
MR_COMMON(5,7),
MR_ENTRY_AP(read_profile__read_num_3_0),
0
},
{
MR_COMMON(11,0),
MR_ENTRY_AP(read_profile__IntroducedFrom__pred__read_proc_static__471__1_7_0),
0
},
{
MR_COMMON(8,2),
MR_ENTRY_AP(fn__read_profile__make_cssptr_1_0),
0
},
{
MR_COMMON(5,8),
MR_ENTRY_AP(read_profile__read_num_3_0),
0
},
{
MR_COMMON(2,4),
MR_ENTRY_AP(read_profile__IntroducedFrom__pred__read_proc_dynamic__887__1_4_0),
0
},
{
MR_COMMON(5,9),
MR_ENTRY_AP(read_profile__read_call_site_slot_3_0),
0
},
{
MR_COMMON(5,10),
MR_ENTRY_AP(read_profile__IntroducedFrom__pred__read_proc_dynamic__897__2_3_0),
0
},
{
MR_COMMON(13,0),
MR_ENTRY_AP(read_profile__maybe_init_deep_12_0),
0
},
{
MR_COMMON(5,11),
MR_ENTRY_AP(read_profile__read_string_3_0),
0
},
{
MR_COMMON(5,12),
MR_ENTRY_AP(read_profile__read_fixed_size_int_3_0),
0
},
{
MR_COMMON(5,13),
MR_ENTRY_AP(read_profile__read_fixed_size_int_3_0),
0
},
{
MR_COMMON(5,14),
MR_ENTRY_AP(read_profile__read_fixed_size_int_3_0),
0
},
{
MR_COMMON(5,15),
MR_ENTRY_AP(read_profile__read_fixed_size_int_3_0),
0
},
{
MR_COMMON(5,16),
MR_ENTRY_AP(read_profile__read_fixed_size_int_3_0),
0
},
{
MR_COMMON(5,17),
MR_ENTRY_AP(read_profile__read_num_3_0),
0
},
{
MR_COMMON(5,18),
MR_ENTRY_AP(read_profile__read_num_3_0),
0
},
{
MR_COMMON(5,19),
MR_ENTRY_AP(read_profile__read_num_3_0),
0
},
{
MR_COMMON(5,20),
MR_ENTRY_AP(read_profile__read_num_3_0),
0
},
{
MR_COMMON(5,21),
MR_ENTRY_AP(read_profile__read_string_3_0),
0
},
{
MR_COMMON(5,22),
MR_ENTRY_AP(read_profile__read_string_3_0),
0
},
{
MR_COMMON(5,23),
MR_ENTRY_AP(read_profile__read_string_3_0),
0
},
{
MR_COMMON(5,24),
MR_ENTRY_AP(read_profile__read_num_3_0),
0
},
{
MR_COMMON(5,25),
MR_ENTRY_AP(read_profile__read_num_3_0),
0
},
{
MR_COMMON(5,26),
MR_ENTRY_AP(read_profile__read_string_3_0),
0
},
{
MR_COMMON(5,27),
MR_ENTRY_AP(read_profile__read_string_3_0),
0
},
{
MR_COMMON(5,28),
MR_ENTRY_AP(read_profile__read_string_3_0),
0
},
{
MR_COMMON(5,29),
MR_ENTRY_AP(read_profile__read_string_3_0),
0
},
{
MR_COMMON(5,30),
MR_ENTRY_AP(read_profile__read_num_3_0),
0
},
{
MR_COMMON(5,31),
MR_ENTRY_AP(read_profile__read_num_3_0),
0
},
{
MR_COMMON(11,2),
MR_ENTRY_AP(read_profile__IntroducedFrom__pred__read_proc_id_uci_pred__644__1_7_0),
0
},
{
MR_COMMON(5,32),
MR_ENTRY_AP(read_profile__read_coverage_point_static_3_0),
0
},
{
MR_COMMON(5,33),
MR_ENTRY_AP(read_profile__read_num_3_0),
0
},
{
MR_COMMON(5,34),
MR_ENTRY_AP(read_profile__IntroducedFrom__pred__read_coverage_point_static_and_num__688__1_3_0),
0
},
{
MR_COMMON(5,35),
MR_ENTRY_AP(read_profile__read_string_3_0),
0
},
{
MR_COMMON(5,36),
MR_ENTRY_AP(read_profile__read_cp_type_3_0),
0
},
{
MR_COMMON(5,37),
MR_ENTRY_AP(read_profile__IntroducedFrom__pred__read_coverage_point_static__704__1_3_0),
0
},
{
MR_COMMON(8,3),
MR_ENTRY_AP(fn__read_profile__make_csdptr_1_0),
0
},
{
MR_COMMON(8,4),
MR_ENTRY_AP(fn__read_profile__make_csdptr_1_0),
0
},
{
MR_COMMON(8,5),
MR_ENTRY_AP(fn__read_profile__make_csdptr_1_0),
0
},
{
MR_COMMON(8,6),
MR_ENTRY_AP(fn__read_profile__make_csdptr_1_0),
0
},
{
MR_COMMON(8,7),
MR_ENTRY_AP(read_profile__IntroducedFrom__pred__read_n_byte_string__1317__1_2_0),
0
},
{
MR_COMMON(5,38),
MR_ENTRY_AP(read_profile__read_string_3_0),
0
},
{
MR_COMMON(5,39),
MR_ENTRY_AP(read_profile__read_cp_type_3_0),
0
},
{
MR_COMMON(5,40),
MR_ENTRY_AP(read_profile__IntroducedFrom__pred__read_coverage_point_static__704__1_3_0),
0
},
};

static const MR_UserClosureId
mercury_data__closure_layout__read_profile__read_call_site_static_3_0_5;
static const MR_UserClosureId
mercury_data__closure_layout__read_profile__read_proc_dynamic_4_0_7;
static const struct mercury_type_7 mercury_common_7[2] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__read_profile__read_call_site_static_3_0_5,
(MR_Word *) (MR_Integer) 0
},
5,
{
MR_INT_CTOR_ADDR,
MR_COMMON(1,5),
MR_INT_CTOR_ADDR,
MR_STRING_CTOR_ADDR,
MR_COMMON(1,6)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__read_profile__read_proc_dynamic_4_0_7,
(MR_Word *) (MR_Integer) 0
},
5,
{
MR_INT_CTOR_ADDR,
MR_COMMON(12,2),
MR_COMMON(1,20),
MR_IO_CTOR_ADDR,
MR_IO_CTOR_ADDR
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__read_profile__maybe_read_ps_coverage_points_4_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__read_profile__maybe_read_ps_coverage_points_4_0_2;
static const MR_UserClosureId
mercury_data__closure_layout__read_profile__read_proc_static_4_0_8;
extern const MR_TypeCtorInfo_Struct mercury_data_profile__type_ctor_info_call_site_static_ptr_0;
static const MR_UserClosureId
mercury_data__closure_layout__read_profile__read_call_site_slot_3_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_profile__type_ctor_info_call_site_dynamic_ptr_0;
static const MR_UserClosureId
mercury_data__closure_layout__read_profile__read_call_site_slot_3_0_2;
static const MR_UserClosureId
mercury_data__closure_layout__read_profile__read_call_site_slot_3_0_3;
static const MR_UserClosureId
mercury_data__closure_layout__read_profile__read_call_site_slot_3_0_4;
static const MR_UserClosureId
mercury_data__closure_layout__read_profile__read_string_3_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_character_0;
static const struct mercury_type_8 mercury_common_8[8] =
{
{
(MR_Word *) &mercury_data__closure_layout__read_profile__maybe_read_ps_coverage_points_4_0_1,
(MR_Word *) (MR_Integer) 0,
2,
MR_COMMON(1,9),
MR_COMMON(1,10)
},
{
(MR_Word *) &mercury_data__closure_layout__read_profile__maybe_read_ps_coverage_points_4_0_2,
(MR_Word *) (MR_Integer) 0,
2,
MR_COMMON(1,9),
MR_COMMON(1,10)
},
{
(MR_Word *) &mercury_data__closure_layout__read_profile__read_proc_static_4_0_8,
(MR_Word *) (MR_Integer) 0,
2,
MR_INT_CTOR_ADDR,
MR_CTOR0_ADDR(profile, call_site_static_ptr)
},
{
(MR_Word *) &mercury_data__closure_layout__read_profile__read_call_site_slot_3_0_1,
(MR_Word *) (MR_Integer) 0,
2,
MR_INT_CTOR_ADDR,
MR_CTOR0_ADDR(profile, call_site_dynamic_ptr)
},
{
(MR_Word *) &mercury_data__closure_layout__read_profile__read_call_site_slot_3_0_2,
(MR_Word *) (MR_Integer) 0,
2,
MR_INT_CTOR_ADDR,
MR_CTOR0_ADDR(profile, call_site_dynamic_ptr)
},
{
(MR_Word *) &mercury_data__closure_layout__read_profile__read_call_site_slot_3_0_3,
(MR_Word *) (MR_Integer) 0,
2,
MR_INT_CTOR_ADDR,
MR_CTOR0_ADDR(profile, call_site_dynamic_ptr)
},
{
(MR_Word *) &mercury_data__closure_layout__read_profile__read_call_site_slot_3_0_4,
(MR_Word *) (MR_Integer) 0,
2,
MR_INT_CTOR_ADDR,
MR_CTOR0_ADDR(profile, call_site_dynamic_ptr)
},
{
(MR_Word *) &mercury_data__closure_layout__read_profile__read_string_3_0_1,
(MR_Word *) (MR_Integer) 0,
2,
MR_INT_CTOR_ADDR,
MR_CHAR_CTOR_ADDR
},
};

static const MR_UserClosureId
mercury_data__closure_layout__read_profile__fix_type_spec_suffix_3_0_1;
static const struct mercury_type_9 mercury_common_9[1] =
{
{
(MR_Word *) &mercury_data__closure_layout__read_profile__fix_type_spec_suffix_3_0_1,
(MR_Word *) (MR_Integer) 0,
1,
MR_CHAR_CTOR_ADDR
},
};

extern const MR_TypeCtorInfo_Struct mercury_data_mdbcomp__program_representation__type_ctor_info_string_proc_label_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_string_0;
static const struct mercury_type_10 mercury_common_10[2] =
{
{
MR_CTOR0_ADDR(builtin, tuple),
6,
{
MR_INT_CTOR_ADDR,
MR_CTOR0_ADDR(mdbcomp__program_representation, string_proc_label),
MR_STRING_CTOR_ADDR,
MR_INT_CTOR_ADDR,
MR_INT_CTOR_ADDR,
MR_INT_CTOR_ADDR
}
},
{
MR_CTOR0_ADDR(builtin, tuple),
6,
{
MR_INT_CTOR_ADDR,
MR_CTOR0_ADDR(mdbcomp__program_representation, string_proc_label),
MR_STRING_CTOR_ADDR,
MR_INT_CTOR_ADDR,
MR_INT_CTOR_ADDR,
MR_INT_CTOR_ADDR
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__read_profile__read_proc_static_4_0_7;
extern const MR_TypeCtorInfo_Struct mercury_data_mdbcomp__program_representation__type_ctor_info_string_proc_label_0;
static const MR_UserClosureId
mercury_data__closure_layout__read_profile__read_proc_id_user_defined_4_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_mdbcomp__prim_data__type_ctor_info_pred_or_func_0;
static const MR_UserClosureId
mercury_data__closure_layout__read_profile__read_proc_id_3_0_7;
static const struct mercury_type_11 mercury_common_11[3] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__read_profile__read_proc_static_4_0_7,
(MR_Word *) (MR_Integer) 0
},
7,
{
MR_INT_CTOR_ADDR,
MR_CTOR0_ADDR(mdbcomp__program_representation, string_proc_label),
MR_STRING_CTOR_ADDR,
MR_INT_CTOR_ADDR,
MR_INT_CTOR_ADDR,
MR_INT_CTOR_ADDR,
MR_COMMON(1,12)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__read_profile__read_proc_id_user_defined_4_0_1,
(MR_Word *) (MR_Integer) 0
},
7,
{
MR_CTOR0_ADDR(mdbcomp__prim_data, pred_or_func),
MR_STRING_CTOR_ADDR,
MR_STRING_CTOR_ADDR,
MR_STRING_CTOR_ADDR,
MR_INT_CTOR_ADDR,
MR_INT_CTOR_ADDR,
MR_COMMON(1,11)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__read_profile__read_proc_id_3_0_7,
(MR_Word *) (MR_Integer) 0
},
7,
{
MR_STRING_CTOR_ADDR,
MR_STRING_CTOR_ADDR,
MR_STRING_CTOR_ADDR,
MR_STRING_CTOR_ADDR,
MR_INT_CTOR_ADDR,
MR_INT_CTOR_ADDR,
MR_COMMON(1,11)
}
},
};

extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_pred_0;
extern const MR_TypeCtorInfo_Struct mercury_data_io__type_ctor_info_state_0;
static const struct mercury_type_12 mercury_common_12[3] =
{
{
MR_CTOR0_ADDR(builtin, tuple),
3,
MR_INT_CTOR_ADDR,
MR_INT_CTOR_ADDR,
MR_INT_CTOR_ADDR
},
{
MR_CTOR0_ADDR(builtin, tuple),
3,
MR_INT_CTOR_ADDR,
MR_INT_CTOR_ADDR,
MR_INT_CTOR_ADDR
},
{
MR_CTOR0_ADDR(builtin, pred),
3,
MR_COMMON(1,18),
MR_IO_CTOR_ADDR,
MR_IO_CTOR_ADDR
},
};

static const MR_UserClosureId
mercury_data__closure_layout__read_profile__read_call_graph_4_0_2;
static const struct mercury_type_13 mercury_common_13[1] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__read_profile__read_call_graph_4_0_2,
(MR_Word *) (MR_Integer) 0
},
12,
{
MR_STRING_CTOR_ADDR,
MR_INT_CTOR_ADDR,
MR_INT_CTOR_ADDR,
MR_INT_CTOR_ADDR,
MR_INT_CTOR_ADDR,
MR_INT_CTOR_ADDR,
MR_INT_CTOR_ADDR,
MR_INT_CTOR_ADDR,
MR_INT_CTOR_ADDR,
MR_INT_CTOR_ADDR,
MR_INT_CTOR_ADDR,
MR_COMMON(1,26)
}
},
};

static const struct mercury_type_14 mercury_common_14[1] =
{
{
-1,
MR_string_const("", 0)
},
};

static const struct mercury_type_15 mercury_common_15[1] =
{
{
-1,
-1,
MR_TAG_COMMON(1,14,0),
-1,
MR_tbmkword(0, 0)
},
};

static const struct mercury_type_16 mercury_common_16[4] =
{
{
MR_tbmkword(0, 0)
},
{
MR_tbmkword(0, 3)
},
{
MR_tbmkword(0, 1)
},
{
MR_tbmkword(0, 2)
},
};

extern const MR_TypeCtorInfo_Struct mercury_data_pair__type_ctor_info_pair_2;
extern const MR_TypeCtorInfo_Struct mercury_data_mdbcomp__program_representation__type_ctor_info_coverage_point_info_0;
extern const MR_TypeCtorInfo_Struct mercury_data_pair__type_ctor_info_pair_2;
static const struct mercury_type_17 mercury_common_17[2] =
{
{
{
MR_CTOR_ADDR(pair, pair, 2),
MR_CTOR0_ADDR(mdbcomp__program_representation, coverage_point_info),
MR_INT_CTOR_ADDR
}
},
{
{
MR_CTOR_ADDR(pair, pair, 2),
MR_CTOR0_ADDR(mdbcomp__program_representation, coverage_point_info),
MR_INT_CTOR_ADDR
}
},
};

const MR_PseudoTypeInfo mercury_data_read_profile__field_types_maybe_error2_2_0[] = {
	(MR_PseudoTypeInfo) 1,
	(MR_PseudoTypeInfo) 2
};

static const MR_DuFunctorDesc mercury_data_read_profile__du_functor_desc_maybe_error2_2_0 = {
	"ok2",
	2,
	3,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_read_profile__field_types_maybe_error2_2_0,
	NULL,
	NULL
};

const MR_PseudoTypeInfo mercury_data_read_profile__field_types_maybe_error2_2_1[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_string_0
};

static const MR_DuFunctorDesc mercury_data_read_profile__du_functor_desc_maybe_error2_2_1 = {
	"error2",
	1,
	0,
	MR_SECTAG_NONE,
	1,
	-1,
	1,
	(MR_PseudoTypeInfo *) mercury_data_read_profile__field_types_maybe_error2_2_1,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_read_profile__du_stag_ordered_maybe_error2_2_0[] = {
	&mercury_data_read_profile__du_functor_desc_maybe_error2_2_0

};

const MR_DuFunctorDescPtr mercury_data_read_profile__du_stag_ordered_maybe_error2_2_1[] = {
	&mercury_data_read_profile__du_functor_desc_maybe_error2_2_1

};

const MR_DuPtagLayout mercury_data_read_profile__du_ptag_ordered_maybe_error2_2[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_read_profile__du_stag_ordered_maybe_error2_2_0 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_read_profile__du_stag_ordered_maybe_error2_2_1 }

};

const MR_DuFunctorDescPtr mercury_data_read_profile__du_name_ordered_maybe_error2_2[] = {
	&mercury_data_read_profile__du_functor_desc_maybe_error2_2_1,
	&mercury_data_read_profile__du_functor_desc_maybe_error2_2_0
};

const MR_Integer mercury_data_read_profile__functor_number_map_maybe_error2_2[] = {
	1,
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_read_profile__type_ctor_info_maybe_error2_2 = {
	2,
	14,
	2,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___read_profile__maybe_error2_2_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___read_profile__maybe_error2_2_0)),
	"read_profile",
	"maybe_error2",
	{ (void *)mercury_data_read_profile__du_name_ordered_maybe_error2_2 },
	{ (void *)mercury_data_read_profile__du_ptag_ordered_maybe_error2_2 },
	2,
	4,
	mercury_data_read_profile__functor_number_map_maybe_error2_2
};

const MR_PseudoTypeInfo mercury_data_read_profile__field_types_maybe_init_deep_complete_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_profile__type_ctor_info_initial_deep_0
};

static const MR_DuFunctorDesc mercury_data_read_profile__du_functor_desc_maybe_init_deep_complete_0_0 = {
	"init_deep_complete",
	1,
	0,
	MR_SECTAG_NONE_DIRECT_ARG,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_read_profile__field_types_maybe_init_deep_complete_0_0,
	NULL,
	NULL
};

const MR_PseudoTypeInfo mercury_data_read_profile__field_types_maybe_init_deep_complete_0_1[] = {
	(MR_PseudoTypeInfo) &mercury_data_profile__type_ctor_info_initial_deep_0
};

static const MR_DuFunctorDesc mercury_data_read_profile__du_functor_desc_maybe_init_deep_complete_0_1 = {
	"init_deep_incomplete",
	1,
	0,
	MR_SECTAG_NONE_DIRECT_ARG,
	1,
	-1,
	1,
	(MR_PseudoTypeInfo *) mercury_data_read_profile__field_types_maybe_init_deep_complete_0_1,
	NULL,
	NULL
};

const MR_PseudoTypeInfo mercury_data_read_profile__field_types_maybe_init_deep_complete_0_2[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_string_0
};

static const MR_DuFunctorDesc mercury_data_read_profile__du_functor_desc_maybe_init_deep_complete_0_2 = {
	"error",
	1,
	0,
	MR_SECTAG_NONE,
	2,
	-1,
	2,
	(MR_PseudoTypeInfo *) mercury_data_read_profile__field_types_maybe_init_deep_complete_0_2,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_read_profile__du_stag_ordered_maybe_init_deep_complete_0_0[] = {
	&mercury_data_read_profile__du_functor_desc_maybe_init_deep_complete_0_0

};

const MR_DuFunctorDescPtr mercury_data_read_profile__du_stag_ordered_maybe_init_deep_complete_0_1[] = {
	&mercury_data_read_profile__du_functor_desc_maybe_init_deep_complete_0_1

};

const MR_DuFunctorDescPtr mercury_data_read_profile__du_stag_ordered_maybe_init_deep_complete_0_2[] = {
	&mercury_data_read_profile__du_functor_desc_maybe_init_deep_complete_0_2

};

const MR_DuPtagLayout mercury_data_read_profile__du_ptag_ordered_maybe_init_deep_complete_0[] = {
	{ 1, MR_SECTAG_NONE_DIRECT_ARG,
	mercury_data_read_profile__du_stag_ordered_maybe_init_deep_complete_0_0 },
	{ 1, MR_SECTAG_NONE_DIRECT_ARG,
	mercury_data_read_profile__du_stag_ordered_maybe_init_deep_complete_0_1 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_read_profile__du_stag_ordered_maybe_init_deep_complete_0_2 }

};

const MR_DuFunctorDescPtr mercury_data_read_profile__du_name_ordered_maybe_init_deep_complete_0[] = {
	&mercury_data_read_profile__du_functor_desc_maybe_init_deep_complete_0_2,
	&mercury_data_read_profile__du_functor_desc_maybe_init_deep_complete_0_0,
	&mercury_data_read_profile__du_functor_desc_maybe_init_deep_complete_0_1
};

const MR_Integer mercury_data_read_profile__functor_number_map_maybe_init_deep_complete_0[] = {
	1,
	2,
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_read_profile__type_ctor_info_maybe_init_deep_complete_0 = {
	0,
	14,
	3,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___read_profile__maybe_init_deep_complete_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___read_profile__maybe_init_deep_complete_0_0)),
	"read_profile",
	"maybe_init_deep_complete",
	{ (void *)mercury_data_read_profile__du_name_ordered_maybe_init_deep_complete_0 },
	{ (void *)mercury_data_read_profile__du_ptag_ordered_maybe_init_deep_complete_0 },
	3,
	4,
	mercury_data_read_profile__functor_number_map_maybe_init_deep_complete_0
};

static const MR_ForeignEnumFunctorDesc mercury_data_read_profile__foreign_enum_functor_desc_next_deep_item_0_0 = {
	"deep_item_end",
	0,
	MR_deep_item_end
};

static const MR_ForeignEnumFunctorDesc mercury_data_read_profile__foreign_enum_functor_desc_next_deep_item_0_1 = {
	"deep_item_call_site_static",
	1,
	MR_deep_item_call_site_static
};

static const MR_ForeignEnumFunctorDesc mercury_data_read_profile__foreign_enum_functor_desc_next_deep_item_0_2 = {
	"deep_item_call_site_dynamic",
	2,
	MR_deep_item_call_site_dynamic
};

static const MR_ForeignEnumFunctorDesc mercury_data_read_profile__foreign_enum_functor_desc_next_deep_item_0_3 = {
	"deep_item_proc_static",
	3,
	MR_deep_item_proc_static
};

static const MR_ForeignEnumFunctorDesc mercury_data_read_profile__foreign_enum_functor_desc_next_deep_item_0_4 = {
	"deep_item_proc_dynamic",
	4,
	MR_deep_item_proc_dynamic
};

const MR_ForeignEnumFunctorDescPtr mercury_data_read_profile__foreign_enum_ordinal_ordered_next_deep_item_0[] = {
	&mercury_data_read_profile__foreign_enum_functor_desc_next_deep_item_0_0,
	&mercury_data_read_profile__foreign_enum_functor_desc_next_deep_item_0_1,
	&mercury_data_read_profile__foreign_enum_functor_desc_next_deep_item_0_2,
	&mercury_data_read_profile__foreign_enum_functor_desc_next_deep_item_0_3,
	&mercury_data_read_profile__foreign_enum_functor_desc_next_deep_item_0_4
};

const MR_ForeignEnumFunctorDescPtr mercury_data_read_profile__foreign_enum_name_ordered_next_deep_item_0[] = {
	&mercury_data_read_profile__foreign_enum_functor_desc_next_deep_item_0_2,
	&mercury_data_read_profile__foreign_enum_functor_desc_next_deep_item_0_1,
	&mercury_data_read_profile__foreign_enum_functor_desc_next_deep_item_0_0,
	&mercury_data_read_profile__foreign_enum_functor_desc_next_deep_item_0_4,
	&mercury_data_read_profile__foreign_enum_functor_desc_next_deep_item_0_3
};

const MR_Integer mercury_data_read_profile__functor_number_map_next_deep_item_0[] = {
	2,
	1,
	0,
	4,
	3 };
	
const MR_TypeCtorInfo_Struct mercury_data_read_profile__type_ctor_info_next_deep_item_0 = {
	0,
	14,
	-1,
	MR_TYPECTOR_REP_FOREIGN_ENUM,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___read_profile__next_deep_item_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___read_profile__next_deep_item_0_0)),
	"read_profile",
	"next_deep_item",
	{ (void *)mercury_data_read_profile__foreign_enum_name_ordered_next_deep_item_0 },
	{ (void *)mercury_data_read_profile__foreign_enum_ordinal_ordered_next_deep_item_0 },
	5,
	4,
	mercury_data_read_profile__functor_number_map_next_deep_item_0
};

static const MR_EnumFunctorDesc mercury_data_read_profile__enum_functor_desc_ptr_kind_0_0 = {
	"ps",
	0
};

static const MR_EnumFunctorDesc mercury_data_read_profile__enum_functor_desc_ptr_kind_0_1 = {
	"pd",
	1
};

static const MR_EnumFunctorDesc mercury_data_read_profile__enum_functor_desc_ptr_kind_0_2 = {
	"css",
	2
};

static const MR_EnumFunctorDesc mercury_data_read_profile__enum_functor_desc_ptr_kind_0_3 = {
	"csd",
	3
};

const MR_EnumFunctorDescPtr mercury_data_read_profile__enum_value_ordered_ptr_kind_0[] = {
	&mercury_data_read_profile__enum_functor_desc_ptr_kind_0_0,
	&mercury_data_read_profile__enum_functor_desc_ptr_kind_0_1,
	&mercury_data_read_profile__enum_functor_desc_ptr_kind_0_2,
	&mercury_data_read_profile__enum_functor_desc_ptr_kind_0_3
};

const MR_EnumFunctorDescPtr mercury_data_read_profile__enum_name_ordered_ptr_kind_0[] = {
	&mercury_data_read_profile__enum_functor_desc_ptr_kind_0_3,
	&mercury_data_read_profile__enum_functor_desc_ptr_kind_0_2,
	&mercury_data_read_profile__enum_functor_desc_ptr_kind_0_1,
	&mercury_data_read_profile__enum_functor_desc_ptr_kind_0_0
};

const MR_Integer mercury_data_read_profile__functor_number_map_ptr_kind_0[] = {
	3,
	2,
	1,
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_read_profile__type_ctor_info_ptr_kind_0 = {
	0,
	14,
	-1,
	MR_TYPECTOR_REP_ENUM,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___read_profile__ptr_kind_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___read_profile__ptr_kind_0_0)),
	"read_profile",
	"ptr_kind",
	{ (void *)mercury_data_read_profile__enum_name_ordered_ptr_kind_0 },
	{ (void *)mercury_data_read_profile__enum_value_ordered_ptr_kind_0 },
	4,
	4,
	mercury_data_read_profile__functor_number_map_ptr_kind_0
};


static const MR_UserClosureId
mercury_data__closure_layout__read_profile__read_n_things__ho7_6_0_3 = {
{
MR_PREDICATE,
"read_profile",
"read_profile",
"lambda_read_profile_m_704",
3,
0
},
"read_profile",
"read_profile.m",
704,
"7"
};

static const MR_UserClosureId
mercury_data__closure_layout__read_profile__read_n_things__ho7_6_0_2 = {
{
MR_PREDICATE,
"read_profile",
"read_profile",
"read_cp_type",
3,
0
},
"read_profile",
"read_profile.m",
704,
"6"
};

static const MR_UserClosureId
mercury_data__closure_layout__read_profile__read_n_things__ho7_6_0_1 = {
{
MR_PREDICATE,
"read_profile",
"read_profile",
"read_string",
3,
0
},
"read_profile",
"read_profile.m",
704,
"5"
};

static const MR_UserClosureId
mercury_data__closure_layout__read_profile__read_string_3_0_1 = {
{
MR_PREDICATE,
"read_profile",
"read_profile",
"lambda_read_profile_m_1317",
2,
0
},
"read_profile",
"read_profile.m",
1317,
"12"
};

static const MR_UserClosureId
mercury_data__closure_layout__read_profile__read_call_site_slot_3_0_4 = {
{
MR_FUNCTION,
"read_profile",
"read_profile",
"make_csdptr",
2,
0
},
"read_profile",
"read_profile.m",
1076,
"57"
};

static const MR_UserClosureId
mercury_data__closure_layout__read_profile__read_call_site_slot_3_0_3 = {
{
MR_FUNCTION,
"read_profile",
"read_profile",
"make_csdptr",
2,
0
},
"read_profile",
"read_profile.m",
1076,
"57"
};

static const MR_UserClosureId
mercury_data__closure_layout__read_profile__read_call_site_slot_3_0_2 = {
{
MR_FUNCTION,
"read_profile",
"read_profile",
"make_csdptr",
2,
0
},
"read_profile",
"read_profile.m",
1076,
"57"
};

static const MR_UserClosureId
mercury_data__closure_layout__read_profile__read_call_site_slot_3_0_1 = {
{
MR_FUNCTION,
"read_profile",
"read_profile",
"make_csdptr",
2,
0
},
"read_profile",
"read_profile.m",
1076,
"57"
};

static const MR_UserClosureId
mercury_data__closure_layout__read_profile__read_coverage_point_static_3_0_3 = {
{
MR_PREDICATE,
"read_profile",
"read_profile",
"lambda_read_profile_m_704",
3,
0
},
"read_profile",
"read_profile.m",
704,
"7"
};

static const MR_UserClosureId
mercury_data__closure_layout__read_profile__read_coverage_point_static_3_0_2 = {
{
MR_PREDICATE,
"read_profile",
"read_profile",
"read_cp_type",
3,
0
},
"read_profile",
"read_profile.m",
704,
"6"
};

static const MR_UserClosureId
mercury_data__closure_layout__read_profile__read_coverage_point_static_3_0_1 = {
{
MR_PREDICATE,
"read_profile",
"read_profile",
"read_string",
3,
0
},
"read_profile",
"read_profile.m",
704,
"5"
};

static const MR_UserClosureId
mercury_data__closure_layout__read_profile__read_coverage_point_static_and_num_3_0_3 = {
{
MR_PREDICATE,
"read_profile",
"read_profile",
"lambda_read_profile_m_688",
3,
0
},
"read_profile",
"read_profile.m",
688,
"7"
};

static const MR_UserClosureId
mercury_data__closure_layout__read_profile__read_coverage_point_static_and_num_3_0_2 = {
{
MR_PREDICATE,
"read_profile",
"read_profile",
"read_num",
3,
0
},
"read_profile",
"read_profile.m",
688,
"6"
};

static const MR_UserClosureId
mercury_data__closure_layout__read_profile__read_coverage_point_static_and_num_3_0_1 = {
{
MR_PREDICATE,
"read_profile",
"read_profile",
"read_coverage_point_static",
3,
0
},
"read_profile",
"read_profile.m",
688,
"5"
};

static const MR_UserClosureId
mercury_data__closure_layout__read_profile__read_proc_id_3_0_7 = {
{
MR_PREDICATE,
"read_profile",
"read_profile",
"lambda_read_profile_m_644",
7,
0
},
"read_profile",
"read_profile.m",
644,
"11"
};

static const MR_UserClosureId
mercury_data__closure_layout__read_profile__read_proc_id_3_0_6 = {
{
MR_PREDICATE,
"read_profile",
"read_profile",
"read_num",
3,
0
},
"read_profile",
"read_profile.m",
644,
"10"
};

static const MR_UserClosureId
mercury_data__closure_layout__read_profile__read_proc_id_3_0_5 = {
{
MR_PREDICATE,
"read_profile",
"read_profile",
"read_num",
3,
0
},
"read_profile",
"read_profile.m",
644,
"9"
};

static const MR_UserClosureId
mercury_data__closure_layout__read_profile__read_proc_id_3_0_4 = {
{
MR_PREDICATE,
"read_profile",
"read_profile",
"read_string",
3,
0
},
"read_profile",
"read_profile.m",
644,
"8"
};

static const MR_UserClosureId
mercury_data__closure_layout__read_profile__read_proc_id_3_0_3 = {
{
MR_PREDICATE,
"read_profile",
"read_profile",
"read_string",
3,
0
},
"read_profile",
"read_profile.m",
644,
"7"
};

static const MR_UserClosureId
mercury_data__closure_layout__read_profile__read_proc_id_3_0_2 = {
{
MR_PREDICATE,
"read_profile",
"read_profile",
"read_string",
3,
0
},
"read_profile",
"read_profile.m",
644,
"6"
};

static const MR_UserClosureId
mercury_data__closure_layout__read_profile__read_proc_id_3_0_1 = {
{
MR_PREDICATE,
"read_profile",
"read_profile",
"read_string",
3,
0
},
"read_profile",
"read_profile.m",
644,
"5"
};

static const MR_UserClosureId
mercury_data__closure_layout__read_profile__read_proc_id_user_defined_4_0_6 = {
{
MR_PREDICATE,
"read_profile",
"read_profile",
"read_num",
3,
0
},
"read_profile",
"read_profile.m",
663,
"10"
};

static const MR_UserClosureId
mercury_data__closure_layout__read_profile__read_proc_id_user_defined_4_0_5 = {
{
MR_PREDICATE,
"read_profile",
"read_profile",
"read_num",
3,
0
},
"read_profile",
"read_profile.m",
663,
"9"
};

static const MR_UserClosureId
mercury_data__closure_layout__read_profile__read_proc_id_user_defined_4_0_4 = {
{
MR_PREDICATE,
"read_profile",
"read_profile",
"read_string",
3,
0
},
"read_profile",
"read_profile.m",
663,
"8"
};

static const MR_UserClosureId
mercury_data__closure_layout__read_profile__read_proc_id_user_defined_4_0_3 = {
{
MR_PREDICATE,
"read_profile",
"read_profile",
"read_string",
3,
0
},
"read_profile",
"read_profile.m",
663,
"7"
};

static const MR_UserClosureId
mercury_data__closure_layout__read_profile__read_proc_id_user_defined_4_0_2 = {
{
MR_PREDICATE,
"read_profile",
"read_profile",
"read_string",
3,
0
},
"read_profile",
"read_profile.m",
663,
"6"
};

static const MR_UserClosureId
mercury_data__closure_layout__read_profile__read_proc_id_user_defined_4_0_1 = {
{
MR_PREDICATE,
"read_profile",
"read_profile",
"lambda_read_profile_m_663",
7,
0
},
"read_profile",
"read_profile.m",
663,
"11"
};

static const MR_UserClosureId
mercury_data__closure_layout__read_profile__read_call_graph_4_0_12 = {
{
MR_PREDICATE,
"read_profile",
"read_profile",
"read_num",
3,
0
},
"read_profile",
"read_profile.m",
73,
"24"
};

static const MR_UserClosureId
mercury_data__closure_layout__read_profile__read_call_graph_4_0_11 = {
{
MR_PREDICATE,
"read_profile",
"read_profile",
"read_num",
3,
0
},
"read_profile",
"read_profile.m",
73,
"23"
};

static const MR_UserClosureId
mercury_data__closure_layout__read_profile__read_call_graph_4_0_10 = {
{
MR_PREDICATE,
"read_profile",
"read_profile",
"read_num",
3,
0
},
"read_profile",
"read_profile.m",
73,
"22"
};

static const MR_UserClosureId
mercury_data__closure_layout__read_profile__read_call_graph_4_0_9 = {
{
MR_PREDICATE,
"read_profile",
"read_profile",
"read_num",
3,
0
},
"read_profile",
"read_profile.m",
73,
"21"
};

static const MR_UserClosureId
mercury_data__closure_layout__read_profile__read_call_graph_4_0_8 = {
{
MR_PREDICATE,
"read_profile",
"read_profile",
"read_fixed_size_int",
3,
0
},
"read_profile",
"read_profile.m",
73,
"20"
};

static const MR_UserClosureId
mercury_data__closure_layout__read_profile__read_call_graph_4_0_7 = {
{
MR_PREDICATE,
"read_profile",
"read_profile",
"read_fixed_size_int",
3,
0
},
"read_profile",
"read_profile.m",
73,
"19"
};

static const MR_UserClosureId
mercury_data__closure_layout__read_profile__read_call_graph_4_0_6 = {
{
MR_PREDICATE,
"read_profile",
"read_profile",
"read_fixed_size_int",
3,
0
},
"read_profile",
"read_profile.m",
73,
"18"
};

static const MR_UserClosureId
mercury_data__closure_layout__read_profile__read_call_graph_4_0_5 = {
{
MR_PREDICATE,
"read_profile",
"read_profile",
"read_fixed_size_int",
3,
0
},
"read_profile",
"read_profile.m",
73,
"17"
};

static const MR_UserClosureId
mercury_data__closure_layout__read_profile__read_call_graph_4_0_4 = {
{
MR_PREDICATE,
"read_profile",
"read_profile",
"read_fixed_size_int",
3,
0
},
"read_profile",
"read_profile.m",
73,
"16"
};

static const MR_UserClosureId
mercury_data__closure_layout__read_profile__read_call_graph_4_0_3 = {
{
MR_PREDICATE,
"read_profile",
"read_profile",
"read_string",
3,
0
},
"read_profile",
"read_profile.m",
73,
"15"
};

static const MR_UserClosureId
mercury_data__closure_layout__read_profile__read_call_graph_4_0_2 = {
{
MR_PREDICATE,
"read_profile",
"read_profile",
"maybe_init_deep",
12,
0
},
"read_profile",
"read_profile.m",
73,
"27"
};

static const MR_UserClosureId
mercury_data__closure_layout__read_profile__read_call_graph_4_0_1 = {
{
MR_PREDICATE,
"read_profile",
"read_profile",
"read_ptr",
4,
0
},
"read_profile",
"read_profile.m",
73,
"25"
};

static const MR_UserClosureId
mercury_data__closure_layout__read_profile__read_proc_dynamic_4_0_8 = {
{
MR_PREDICATE,
"read_profile",
"read_profile",
"lambda2_read_profile_m_897",
3,
0
},
"read_profile",
"read_profile.m",
897,
"34"
};

static const MR_UserClosureId
mercury_data__closure_layout__read_profile__read_proc_dynamic_4_0_7 = {
{
MR_PREDICATE,
"read_profile",
"read_profile",
"lambda_read_profile_m_897",
5,
0
},
"read_profile",
"read_profile.m",
897,
"32"
};

static const MR_UserClosureId
mercury_data__closure_layout__read_profile__read_proc_dynamic_4_0_6 = {
{
MR_PREDICATE,
"read_profile",
"read_profile",
"read_call_site_slot",
3,
0
},
"read_profile",
"read_profile.m",
899,
"33"
};

static const MR_UserClosureId
mercury_data__closure_layout__read_profile__read_proc_dynamic_4_0_5 = {
{
MR_PREDICATE,
"read_profile",
"read_profile",
"maybe_read_pd_coverage_points",
4,
0
},
"read_profile",
"read_profile.m",
897,
"31"
};

static const MR_UserClosureId
mercury_data__closure_layout__read_profile__read_proc_dynamic_4_0_4 = {
{
MR_PREDICATE,
"read_profile",
"read_profile",
"lambda_read_profile_m_887",
4,
0
},
"read_profile",
"read_profile.m",
887,
"17"
};

static const MR_UserClosureId
mercury_data__closure_layout__read_profile__read_proc_dynamic_4_0_3 = {
{
MR_PREDICATE,
"read_profile",
"read_profile",
"read_num",
3,
0
},
"read_profile",
"read_profile.m",
887,
"16"
};

static const MR_UserClosureId
mercury_data__closure_layout__read_profile__read_proc_dynamic_4_0_2 = {
{
MR_PREDICATE,
"read_profile",
"read_profile",
"read_ptr",
4,
0
},
"read_profile",
"read_profile.m",
887,
"14"
};

static const MR_UserClosureId
mercury_data__closure_layout__read_profile__read_proc_dynamic_4_0_1 = {
{
MR_PREDICATE,
"read_profile",
"read_profile",
"read_ptr",
4,
0
},
"read_profile",
"read_profile.m",
887,
"12"
};

static const MR_UserClosureId
mercury_data__closure_layout__read_profile__read_proc_static_4_0_8 = {
{
MR_FUNCTION,
"read_profile",
"read_profile",
"make_cssptr",
2,
0
},
"read_profile",
"read_profile.m",
492,
"48"
};

static const MR_UserClosureId
mercury_data__closure_layout__read_profile__read_proc_static_4_0_7 = {
{
MR_PREDICATE,
"read_profile",
"read_profile",
"lambda_read_profile_m_471",
7,
0
},
"read_profile",
"read_profile.m",
471,
"19"
};

static const MR_UserClosureId
mercury_data__closure_layout__read_profile__read_proc_static_4_0_6 = {
{
MR_PREDICATE,
"read_profile",
"read_profile",
"read_num",
3,
0
},
"read_profile",
"read_profile.m",
471,
"18"
};

static const MR_UserClosureId
mercury_data__closure_layout__read_profile__read_proc_static_4_0_5 = {
{
MR_PREDICATE,
"read_profile",
"read_profile",
"read_deep_byte",
3,
0
},
"read_profile",
"read_profile.m",
471,
"17"
};

static const MR_UserClosureId
mercury_data__closure_layout__read_profile__read_proc_static_4_0_4 = {
{
MR_PREDICATE,
"read_profile",
"read_profile",
"read_num",
3,
0
},
"read_profile",
"read_profile.m",
471,
"16"
};

static const MR_UserClosureId
mercury_data__closure_layout__read_profile__read_proc_static_4_0_3 = {
{
MR_PREDICATE,
"read_profile",
"read_profile",
"read_string",
3,
0
},
"read_profile",
"read_profile.m",
471,
"15"
};

static const MR_UserClosureId
mercury_data__closure_layout__read_profile__read_proc_static_4_0_2 = {
{
MR_PREDICATE,
"read_profile",
"read_profile",
"read_proc_id",
3,
0
},
"read_profile",
"read_profile.m",
471,
"14"
};

static const MR_UserClosureId
mercury_data__closure_layout__read_profile__read_proc_static_4_0_1 = {
{
MR_PREDICATE,
"read_profile",
"read_profile",
"read_ptr",
4,
0
},
"read_profile",
"read_profile.m",
471,
"12"
};

static const MR_UserClosureId
mercury_data__closure_layout__read_profile__fix_type_spec_suffix_3_0_1 = {
{
MR_PREDICATE,
"read_profile",
"read_profile",
"non_right_bracket",
1,
0
},
"read_profile",
"read_profile.m",
828,
"15"
};

static const MR_UserClosureId
mercury_data__closure_layout__read_profile__maybe_read_ps_coverage_points_4_0_2 = {
{
MR_FUNCTION,
"read_profile",
"read_profile",
"lambda_read_profile_m_577",
2,
0
},
"read_profile",
"read_profile.m",
577,
"62"
};

static const MR_UserClosureId
mercury_data__closure_layout__read_profile__maybe_read_ps_coverage_points_4_0_1 = {
{
MR_FUNCTION,
"read_profile",
"read_profile",
"lambda_read_profile_m_577",
2,
0
},
"read_profile",
"read_profile.m",
577,
"62"
};

static const MR_UserClosureId
mercury_data__closure_layout__read_profile__read_call_site_static_3_0_5 = {
{
MR_PREDICATE,
"read_profile",
"read_profile",
"lambda_read_profile_m_435",
5,
0
},
"read_profile",
"read_profile.m",
435,
"16"
};

static const MR_UserClosureId
mercury_data__closure_layout__read_profile__read_call_site_static_3_0_4 = {
{
MR_PREDICATE,
"read_profile",
"read_profile",
"read_string",
3,
0
},
"read_profile",
"read_profile.m",
435,
"15"
};

static const MR_UserClosureId
mercury_data__closure_layout__read_profile__read_call_site_static_3_0_3 = {
{
MR_PREDICATE,
"read_profile",
"read_profile",
"read_num",
3,
0
},
"read_profile",
"read_profile.m",
435,
"14"
};

static const MR_UserClosureId
mercury_data__closure_layout__read_profile__read_call_site_static_3_0_2 = {
{
MR_PREDICATE,
"read_profile",
"read_profile",
"read_call_site_kind_and_callee",
3,
0
},
"read_profile",
"read_profile.m",
435,
"13"
};

static const MR_UserClosureId
mercury_data__closure_layout__read_profile__read_call_site_static_3_0_1 = {
{
MR_PREDICATE,
"read_profile",
"read_profile",
"read_ptr",
4,
0
},
"read_profile",
"read_profile.m",
435,
"11"
};


MR_decl_entry(io__read_byte_3_0);
MR_decl_entry(io__error_message_2_0);
MR_decl_entry(char__to_int_2_2);
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_character_0;
MR_decl_entry(list__reverse_2_0);
MR_decl_entry(string__from_char_list_2_0);

MR_BEGIN_MODULE(read_profile_module0)
	MR_init_entry1(read_profile__read_line_acc_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__read_profile__read_line_acc_5_0);
	MR_init_label10(read_profile__read_line_acc_5_0,55,3,34,5,8,7,12,17,18,15)
	MR_init_label3(read_profile__read_line_acc_5_0,2,24,25)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'read_line_acc'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(read_profile__read_line_acc_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
MR_def_label(read_profile__read_line_acc_5_0,55)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_LE(MR_r1,0)) {
		MR_GOTO_LAB(read_profile__read_line_acc_5_0_i2);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_np_call_localret_ent(io__read_byte_3_0,
		read_profile__read_line_acc_5_0_i3);
MR_def_label(read_profile__read_line_acc_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(read_profile__read_line_acc_5_0_i5);
	}
MR_def_label(read_profile__read_line_acc_5_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(1,0,0);
	MR_decr_sp_and_return(3);
MR_def_label(read_profile__read_line_acc_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,2)) {
		MR_GOTO_LAB(read_profile__read_line_acc_5_0_i7);
	}
	MR_r1 = MR_tfield(2, MR_r1, 0);
	MR_np_call_localret_ent(io__error_message_2_0,
		read_profile__read_line_acc_5_0_i8);
MR_def_label(read_profile__read_line_acc_5_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(3);
	}
MR_def_label(read_profile__read_line_acc_5_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(1, MR_r1, 0);
	MR_np_call_localret_ent(char__to_int_2_2,
		read_profile__read_line_acc_5_0_i12);
MR_def_label(read_profile__read_line_acc_5_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(read_profile__read_line_acc_5_0_i34);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_r2;
	MR_tfield(1, MR_tempr1, 1) = MR_sv(2);
	if (MR_INT_NE(MR_r2,10)) {
		MR_GOTO_LAB(read_profile__read_line_acc_5_0_i15);
	}
	MR_r1 = (MR_Word) MR_CHAR_CTOR_ADDR;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__reverse_2_0,
		read_profile__read_line_acc_5_0_i17);
MR_def_label(read_profile__read_line_acc_5_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(string__from_char_list_2_0,
		read_profile__read_line_acc_5_0_i18);
MR_def_label(read_profile__read_line_acc_5_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 1);
	MR_tfield(0, MR_r2, 0) = MR_r1;
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(3);
MR_def_label(read_profile__read_line_acc_5_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = ((MR_Integer) MR_sv(1) - (MR_Integer) 1);
	MR_r2 = MR_r3;
	MR_succip_word = MR_sv(3);
	MR_GOTO_LAB(read_profile__read_line_acc_5_0_i55);
MR_def_label(read_profile__read_line_acc_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CHAR_CTOR_ADDR;
	MR_np_call_localret_ent(list__reverse_2_0,
		read_profile__read_line_acc_5_0_i24);
MR_def_label(read_profile__read_line_acc_5_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(string__from_char_list_2_0,
		read_profile__read_line_acc_5_0_i25);
MR_def_label(read_profile__read_line_acc_5_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(3);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__string__length_1_0);
MR_decl_entry(fn__string__chomp_1_0);
MR_decl_entry(string__append_3_1);
MR_decl_entry(string__to_int_2_0);

MR_BEGIN_MODULE(read_profile_module1)
	MR_init_entry1(read_profile__read_deep_id_string_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__read_profile__read_deep_id_string_3_0);
	MR_init_label8(read_profile__read_deep_id_string_3_0,2,3,6,8,10,12,7,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'read_deep_id_string'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(read_profile__read_deep_id_string_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_r1 = (MR_Word) MR_string_const("Mercury deep profiler data version ", 35);
	MR_np_call_localret_ent(fn__string__length_1_0,
		read_profile__read_deep_id_string_3_0_i2);
MR_def_label(read_profile__read_deep_id_string_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = ((MR_Integer) MR_r1 + (MR_Integer) 10);
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_np_call_localret_ent(read_profile__read_line_acc_5_0,
		read_profile__read_deep_id_string_3_0_i3);
MR_def_label(read_profile__read_deep_id_string_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TEST(MR_r1,1)) {
		MR_GOTO_LAB(read_profile__read_deep_id_string_3_0_i4);
	}
	MR_r1 = MR_tfield(0, MR_r1, 0);
	MR_np_call_localret_ent(fn__string__chomp_1_0,
		read_profile__read_deep_id_string_3_0_i6);
MR_def_label(read_profile__read_deep_id_string_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("Mercury deep profiler data version ", 35);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(string__append_3_1,
		read_profile__read_deep_id_string_3_0_i8);
MR_def_label(read_profile__read_deep_id_string_3_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(read_profile__read_deep_id_string_3_0_i7);
	}
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(string__to_int_2_0,
		read_profile__read_deep_id_string_3_0_i10);
MR_def_label(read_profile__read_deep_id_string_3_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(read_profile__read_deep_id_string_3_0_i7);
	}
	if (MR_INT_NE(MR_r2,8)) {
		MR_GOTO_LAB(read_profile__read_deep_id_string_3_0_i12);
	}
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_r1, 0) = MR_r2;
	MR_decr_sp_and_return(1);
MR_def_label(read_profile__read_deep_id_string_3_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(1,0,1);
	MR_decr_sp_and_return(1);
MR_def_label(read_profile__read_deep_id_string_3_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(1,0,2);
MR_def_label(read_profile__read_deep_id_string_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(1);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(io_combinator__maybe_error_sequence_4_8_0);

MR_BEGIN_MODULE(read_profile_module2)
	MR_init_entry1(read_profile__read_call_site_static_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__read_profile__read_call_site_static_3_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'read_call_site_static'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(read_profile__read_call_site_static_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,1);
	MR_r3 = MR_r1;
	MR_r4 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r5 = (MR_Word) MR_TAG_COMMON(0,4,0);
	MR_r6 = (MR_Word) MR_TAG_COMMON(0,3,0);
	MR_r7 = (MR_Word) MR_TAG_COMMON(0,6,0);
	MR_r8 = (MR_Word) MR_TAG_COMMON(0,6,1);
	MR_r9 = (MR_Word) MR_TAG_COMMON(0,6,2);
	MR_r10 = (MR_Word) MR_TAG_COMMON(0,6,3);
	MR_np_tailcall_ent(io_combinator__maybe_error_sequence_4_8_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(read_profile_module3)
	MR_init_entry1(read_profile__read_n_things_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__read_profile__read_n_things_5_0);
	MR_init_label3(read_profile__read_n_things_5_0,2,5,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'read_n_things'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(read_profile__read_n_things_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_r1 = MR_r2;
	MR_r2 = MR_r3;
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_np_call_localret_ent(f_114_101_97_100_95_112_114_111_102_105_108_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_100_95_110_95_116_104_105_110_103_115_95_95_91_49_93_95_48_6_0,
		read_profile__read_n_things_5_0_i2);
MR_def_label(read_profile__read_n_things_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TEST(MR_r1,1)) {
		MR_GOTO_LAB(read_profile__read_n_things_5_0_i3);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tfield(0, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(list__reverse_2_0,
		read_profile__read_n_things_5_0_i5);
MR_def_label(read_profile__read_n_things_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_r1 = MR_tempr1;
	}
MR_def_label(read_profile__read_n_things_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(2);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__f_105_110_116_95_95_60_60_2_0);

MR_BEGIN_MODULE(read_profile_module4)
	MR_init_entry1(read_profile__read_num_acc_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__read_profile__read_num_acc_4_0);
	MR_init_label7(read_profile__read_num_acc_4_0,36,2,4,7,6,9,11)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'read_num_acc'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(read_profile__read_num_acc_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
MR_def_label(read_profile__read_num_acc_4_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(io__read_byte_3_0,
		read_profile__read_num_acc_4_0_i2);
MR_def_label(read_profile__read_num_acc_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(read_profile__read_num_acc_4_0_i4);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(1,0,0);
	MR_decr_sp_and_return(2);
MR_def_label(read_profile__read_num_acc_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,2)) {
		MR_GOTO_LAB(read_profile__read_num_acc_4_0_i6);
	}
	MR_r1 = MR_tfield(2, MR_r1, 0);
	MR_np_call_localret_ent(io__error_message_2_0,
		read_profile__read_num_acc_4_0_i7);
MR_def_label(read_profile__read_num_acc_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(2);
	}
MR_def_label(read_profile__read_num_acc_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_tfield(1, MR_r1, 0);
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Integer) 7;
	}
	MR_np_call_localret_ent(fn__f_105_110_116_95_95_60_60_2_0,
		read_profile__read_num_acc_4_0_i9);
MR_def_label(read_profile__read_num_acc_4_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_sv(1);
	MR_r3 = ((MR_Integer) MR_r1 | ((MR_Integer) MR_tempr2 & (MR_Integer) 127));
	MR_tempr1 = ((MR_Integer) MR_tempr2 & (MR_Integer) 128);
	if (MR_INT_EQ(MR_tempr1,0)) {
		MR_GOTO_LAB(read_profile__read_num_acc_4_0_i11);
	}
	MR_r1 = MR_r3;
	MR_succip_word = MR_sv(2);
	MR_GOTO_LAB(read_profile__read_num_acc_4_0_i36);
	}
MR_def_label(read_profile__read_num_acc_4_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_r1, 0) = MR_r3;
	MR_decr_sp_and_return(2);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(read_profile_module5)
	MR_init_entry1(read_profile__read_num_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__read_profile__read_num_3_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'read_num'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(read_profile__read_num_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_np_tailcall_ent(read_profile__read_num_acc_4_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__array__array_1_0);
MR_decl_entry(fn__maybe__map_maybe_2_0);
MR_decl_entry(assoc_list__keys_and_values_3_0);

MR_BEGIN_MODULE(read_profile_module6)
	MR_init_entry1(read_profile__maybe_read_ps_coverage_points_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__read_profile__maybe_read_ps_coverage_points_4_0);
	MR_init_label10(read_profile__maybe_read_ps_coverage_points_4_0,4,8,3,11,16,15,21,24,12,30)
	MR_init_label2(read_profile__maybe_read_ps_coverage_points_4_0,34,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'maybe_read_ps_coverage_points'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(read_profile__maybe_read_ps_coverage_points_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_r3 = MR_tfield(0, MR_tfield(0, MR_r1, 9), 3);
	if (MR_INT_NE(MR_r3,0)) {
		MR_GOTO_LAB(read_profile__maybe_read_ps_coverage_points_4_0_i3);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__program_representation, coverage_point_info);
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_np_call_localret_ent(fn__array__array_1_0,
		read_profile__maybe_read_ps_coverage_points_4_0_i4);
MR_def_label(read_profile__maybe_read_ps_coverage_points_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,1,7);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,8);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,6,4);
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	MR_np_call_localret_ent(fn__maybe__map_maybe_2_0,
		read_profile__maybe_read_ps_coverage_points_4_0_i8);
MR_def_label(read_profile__maybe_read_ps_coverage_points_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_r1, 0) = MR_tempr1;
	MR_decr_sp_and_return(2);
	}
MR_def_label(read_profile__maybe_read_ps_coverage_points_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r3;
	MR_r1 = (MR_Integer) 0;
	MR_np_call_localret_ent(read_profile__read_num_acc_4_0,
		read_profile__maybe_read_ps_coverage_points_4_0_i11);
MR_def_label(read_profile__maybe_read_ps_coverage_points_4_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TEST(MR_r1,1)) {
		MR_GOTO_LAB(read_profile__maybe_read_ps_coverage_points_4_0_i12);
	}
	if (MR_INT_NE(MR_sv(1),2)) {
		MR_GOTO_LAB(read_profile__maybe_read_ps_coverage_points_4_0_i15);
	}
	MR_r1 = MR_tfield(0, MR_r1, 0);
	MR_np_call_localret_ent(read_profile__read_n_things__ho2_5_0,
		read_profile__maybe_read_ps_coverage_points_4_0_i16);
MR_def_label(read_profile__maybe_read_ps_coverage_points_4_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TEST(MR_r1,1)) {
		MR_GOTO_LAB(read_profile__maybe_read_ps_coverage_points_4_0_i12);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_tfield(0, MR_r1, 0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 1);
	MR_r4 = MR_tempr2;
	MR_tfield(0, MR_tempr2, 0) = MR_tempr1;
	MR_r1 = MR_tempr2;
	MR_GOTO_LAB(read_profile__maybe_read_ps_coverage_points_4_0_i12);
	}
MR_def_label(read_profile__maybe_read_ps_coverage_points_4_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(0, MR_r1, 0);
	MR_np_call_localret_ent(read_profile__read_n_things__ho3_5_0,
		read_profile__maybe_read_ps_coverage_points_4_0_i21);
MR_def_label(read_profile__maybe_read_ps_coverage_points_4_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TEST(MR_r1,1)) {
		MR_GOTO_LAB(read_profile__maybe_read_ps_coverage_points_4_0_i12);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__program_representation, coverage_point_info);
	MR_r2 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r3 = MR_tfield(0, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(assoc_list__keys_and_values_3_0,
		read_profile__maybe_read_ps_coverage_points_4_0_i24);
MR_def_label(read_profile__maybe_read_ps_coverage_points_4_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_r2;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = MR_r1;
	MR_tfield(0, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr1, 0) = MR_tempr2;
	MR_r1 = MR_tempr1;
	}
MR_def_label(read_profile__maybe_read_ps_coverage_points_4_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TEST(MR_r1,1)) {
		MR_GOTO_LAB(read_profile__maybe_read_ps_coverage_points_4_0_i2);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(0, MR_r1, 0);
	MR_sv(1) = MR_tfield(0, MR_tempr1, 1);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__program_representation, coverage_point_info);
	MR_r2 = MR_tfield(0, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(fn__array__array_1_0,
		read_profile__maybe_read_ps_coverage_points_4_0_i30);
MR_def_label(read_profile__maybe_read_ps_coverage_points_4_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,1,7);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,8);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,6,5);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__maybe__map_maybe_2_0,
		read_profile__maybe_read_ps_coverage_points_4_0_i34);
MR_def_label(read_profile__maybe_read_ps_coverage_points_4_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_r1, 0) = MR_tempr1;
	}
MR_def_label(read_profile__maybe_read_ps_coverage_points_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(2);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(read_profile_module7)
	MR_init_entry1(fn__read_profile__add_plus_one_for_function_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__read_profile__add_plus_one_for_function_1_0);
	MR_init_label1(fn__read_profile__add_plus_one_for_function_1_0,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'add_plus_one_for_function'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__read_profile__add_plus_one_for_function_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(fn__read_profile__add_plus_one_for_function_1_0_i3);
	}
	MR_r1 = (MR_Word) MR_string_const("+1", 2);
	MR_proceed();
MR_def_label(fn__read_profile__add_plus_one_for_function_1_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("", 0);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__string__int_to_string_1_0);
MR_decl_entry(fn__string__append_list_1_0);

MR_BEGIN_MODULE(read_profile_module8)
	MR_init_entry1(fn__read_profile__raw_proc_id_to_string_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__read_profile__raw_proc_id_to_string_1_0);
	MR_init_label6(fn__read_profile__raw_proc_id_to_string_1_0,4,6,7,3,17,18)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'raw_proc_id_to_string'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__read_profile__raw_proc_id_to_string_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	if (MR_PTAG_TESTR(MR_r1,0)) {
		MR_GOTO_LAB(fn__read_profile__raw_proc_id_to_string_1_0_i3);
	}
	MR_sv(1) = MR_tfield(0, MR_r1, 0);
	MR_sv(2) = MR_tfield(0, MR_r1, 1);
	MR_sv(3) = MR_tfield(0, MR_r1, 3);
	MR_sv(4) = MR_tfield(0, MR_r1, 5);
	MR_r1 = MR_tfield(0, MR_r1, 4);
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		fn__read_profile__raw_proc_id_to_string_1_0_i4);
MR_def_label(fn__read_profile__raw_proc_id_to_string_1_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(1),1)) {
		MR_GOTO_LAB(fn__read_profile__raw_proc_id_to_string_1_0_i6);
	}
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_sv(4) = (MR_Word) MR_string_const("+1", 2);
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		fn__read_profile__raw_proc_id_to_string_1_0_i7);
MR_def_label(fn__read_profile__raw_proc_id_to_string_1_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_sv(4) = (MR_Word) MR_string_const("", 0);
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		fn__read_profile__raw_proc_id_to_string_1_0_i7);
MR_def_label(fn__read_profile__raw_proc_id_to_string_1_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_r1;
	MR_tfield(1, MR_r2, 1) = (MR_Word) MR_tbmkword(0, 0);
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = (MR_Word) MR_string_const("-", 1);
	MR_tfield(1, MR_tempr1, 1) = MR_r2;
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(4);
	MR_tfield(1, MR_r2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = MR_r2;
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = (MR_Word) MR_string_const("/", 1);
	MR_tfield(1, MR_r2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(3);
	MR_tfield(1, MR_tempr1, 1) = MR_r2;
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = (MR_Word) MR_string_const(".", 1);
	MR_tfield(1, MR_r2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = MR_sv(2);
	MR_tfield(1, MR_r1, 1) = MR_r2;
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(fn__string__append_list_1_0);
	}
MR_def_label(fn__read_profile__raw_proc_id_to_string_1_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_tfield(1, MR_r1, 0);
	MR_sv(2) = MR_tfield(1, MR_r1, 1);
	MR_sv(3) = MR_tfield(1, MR_r1, 3);
	MR_sv(4) = MR_tfield(1, MR_r1, 5);
	MR_r1 = MR_tfield(1, MR_r1, 4);
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		fn__read_profile__raw_proc_id_to_string_1_0_i17);
MR_def_label(fn__read_profile__raw_proc_id_to_string_1_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		fn__read_profile__raw_proc_id_to_string_1_0_i18);
MR_def_label(fn__read_profile__raw_proc_id_to_string_1_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_r1;
	MR_tfield(1, MR_r2, 1) = (MR_Word) MR_tbmkword(0, 0);
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = (MR_Word) MR_string_const(" mode ", 6);
	MR_tfield(1, MR_tempr1, 1) = MR_r2;
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(4);
	MR_tfield(1, MR_r2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = (MR_Word) MR_string_const("/", 1);
	MR_tfield(1, MR_tempr1, 1) = MR_r2;
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(1);
	MR_tfield(1, MR_r2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = (MR_Word) MR_string_const(".", 1);
	MR_tfield(1, MR_tempr1, 1) = MR_r2;
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(2);
	MR_tfield(1, MR_r2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = (MR_Word) MR_string_const(" for ", 5);
	MR_tfield(1, MR_tempr1, 1) = MR_r2;
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = MR_sv(3);
	MR_tfield(1, MR_r1, 1) = MR_tempr1;
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(fn__string__append_list_1_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(list__takewhile_4_0);

MR_BEGIN_MODULE(read_profile_module9)
	MR_init_entry1(read_profile__fix_type_spec_suffix_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__read_profile__fix_type_spec_suffix_3_0);
	MR_init_label5(read_profile__fix_type_spec_suffix_3_0,10,11,2,13,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'fix_type_spec_suffix'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(read_profile__fix_type_spec_suffix_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(read_profile__fix_type_spec_suffix_3_0_i2);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(1, MR_r1, 0);
	if (MR_INT_NE(MR_tempr1,95)) {
		MR_GOTO_LAB(read_profile__fix_type_spec_suffix_3_0_i2);
	}
	MR_tempr1 = MR_tfield(1, MR_r1, 1);
	if (MR_LTAGS_TEST(MR_tempr1,0,0)) {
		MR_GOTO_LAB(read_profile__fix_type_spec_suffix_3_0_i2);
	}
	MR_tempr2 = MR_tfield(1, MR_tempr1, 0);
	if (MR_INT_NE(MR_tempr2,95)) {
		MR_GOTO_LAB(read_profile__fix_type_spec_suffix_3_0_i2);
	}
	MR_tempr2 = MR_tfield(1, MR_tempr1, 1);
	if (MR_LTAGS_TEST(MR_tempr2,0,0)) {
		MR_GOTO_LAB(read_profile__fix_type_spec_suffix_3_0_i2);
	}
	MR_tempr1 = MR_tfield(1, MR_tempr2, 0);
	if (MR_INT_NE(MR_tempr1,91)) {
		MR_GOTO_LAB(read_profile__fix_type_spec_suffix_3_0_i2);
	}
	MR_r1 = (MR_Word) MR_CHAR_CTOR_ADDR;
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,6,6);
	MR_r3 = MR_tfield(1, MR_tempr2, 1);
	}
	MR_np_call_localret_ent(list__takewhile_4_0,
		read_profile__fix_type_spec_suffix_3_0_i10);
MR_def_label(read_profile__fix_type_spec_suffix_3_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(string__from_char_list_2_0,
		read_profile__fix_type_spec_suffix_3_0_i11);
MR_def_label(read_profile__fix_type_spec_suffix_3_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_r3 = MR_r1;
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(read_profile__fix_type_spec_suffix_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(read_profile__fix_type_spec_suffix_3_0_i1);
	}
	MR_sv(1) = MR_tfield(1, MR_r1, 0);
	MR_r1 = MR_tfield(1, MR_r1, 1);
	MR_np_localcall_lab(read_profile__fix_type_spec_suffix_3_0,
		read_profile__fix_type_spec_suffix_3_0_i13);
MR_def_label(read_profile__fix_type_spec_suffix_3_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(read_profile__fix_type_spec_suffix_3_0_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = MR_r2;
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_r1 = MR_TRUE;
	MR_proceed();
	}
MR_def_label(read_profile__fix_type_spec_suffix_3_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(read_profile_module10)
	MR_init_entry1(read_profile__split_lambda_name_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__read_profile__split_lambda_name_2_0);
	MR_init_label5(read_profile__split_lambda_name_2_0,62,9,4,12,14)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'split_lambda_name'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(read_profile__split_lambda_name_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(read_profile__split_lambda_name_2_0_i62);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(read_profile__split_lambda_name_2_0,62)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_r2 = MR_tfield(1, MR_r1, 1);
	MR_sv(1) = MR_tfield(1, MR_r1, 0);
	if (MR_LTAGS_TEST(MR_r2,0,0)) {
		MR_GOTO_LAB(read_profile__split_lambda_name_2_0_i4);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(1, MR_r2, 0);
	if (MR_INT_NE(MR_tempr1,95)) {
		MR_GOTO_LAB(read_profile__split_lambda_name_2_0_i4);
	}
	MR_tempr1 = MR_tfield(1, MR_r2, 1);
	if (MR_LTAGS_TEST(MR_tempr1,0,0)) {
		MR_GOTO_LAB(read_profile__split_lambda_name_2_0_i4);
	}
	MR_tempr2 = MR_tfield(1, MR_tempr1, 0);
	if (MR_INT_NE(MR_tempr2,95)) {
		MR_GOTO_LAB(read_profile__split_lambda_name_2_0_i4);
	}
	MR_r1 = MR_tfield(1, MR_tempr1, 1);
	}
	MR_np_localcall_lab(read_profile__split_lambda_name_2_0,
		read_profile__split_lambda_name_2_0_i9);
MR_def_label(read_profile__split_lambda_name_2_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(1);
	MR_tfield(1, MR_r2, 1) = (MR_Word) MR_tbmkword(0, 0);
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r2;
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(2);
	}
MR_def_label(read_profile__split_lambda_name_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_np_localcall_lab(read_profile__split_lambda_name_2_0,
		read_profile__split_lambda_name_2_0_i12);
MR_def_label(read_profile__split_lambda_name_2_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(read_profile__split_lambda_name_2_0_i14);
	}
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(1);
	MR_tfield(1, MR_r2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = MR_r2;
	MR_tfield(1, MR_r1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_decr_sp_and_return(2);
MR_def_label(read_profile__split_lambda_name_2_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(1);
	MR_tfield(1, MR_r2, 1) = MR_tfield(1, MR_r1, 0);
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r2;
	MR_tfield(1, MR_tempr1, 1) = MR_tfield(1, MR_r1, 1);
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(2);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(list__append_3_1);

MR_BEGIN_MODULE(read_profile_module11)
	MR_init_entry1(read_profile__glue_lambda_name_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__read_profile__glue_lambda_name_3_0);
	MR_init_label5(read_profile__glue_lambda_name_3_0,57,7,10,13,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'glue_lambda_name'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(read_profile__glue_lambda_name_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(read_profile__glue_lambda_name_3_0_i57);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(1, MR_r1, 1);
	if (MR_LTAGS_TEST(MR_tempr1,0,0)) {
		MR_GOTO_LAB(read_profile__glue_lambda_name_3_0_i57);
	}
	MR_tempr2 = MR_tfield(1, MR_tempr1, 1);
	if (MR_LTAGS_TESTR(MR_tempr2,0,0)) {
		MR_GOTO_LAB(read_profile__glue_lambda_name_3_0_i57);
	}
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_r3 = MR_tfield(1, MR_r1, 0);
	MR_r1 = MR_TRUE;
	MR_proceed();
	}
MR_def_label(read_profile__glue_lambda_name_3_0,57)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(read_profile__glue_lambda_name_3_0_i1);
	}
	MR_sv(1) = MR_tfield(1, MR_r1, 0);
	MR_r1 = MR_tfield(1, MR_r1, 1);
	MR_np_localcall_lab(read_profile__glue_lambda_name_3_0,
		read_profile__glue_lambda_name_3_0_i7);
MR_def_label(read_profile__glue_lambda_name_3_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(read_profile__glue_lambda_name_3_0_i1);
	}
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(read_profile__glue_lambda_name_3_0_i10);
	}
	MR_r2 = MR_sv(1);
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(2);
MR_def_label(read_profile__glue_lambda_name_3_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = (MR_Integer) 95;
	MR_tfield(1, MR_tempr1, 1) = MR_r2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = (MR_Integer) 95;
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r3;
	MR_r1 = (MR_Word) MR_CHAR_CTOR_ADDR;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	}
	MR_np_call_localret_ent(list__append_3_1,
		read_profile__glue_lambda_name_3_0_i13);
MR_def_label(read_profile__glue_lambda_name_3_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r3 = MR_sv(1);
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(2);
MR_def_label(read_profile__glue_lambda_name_3_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(2);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(string__to_char_list_2_0);
MR_decl_entry(require__error_1_0);
MR_decl_entry(fn__string__from_char_list_1_0);
MR_decl_entry(fn__f_115_116_114_105_110_103_95_95_43_43_2_0);

MR_BEGIN_MODULE(read_profile_module12)
	MR_init_entry1(read_profile__create_refined_proc_ids_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__read_profile__create_refined_proc_ids_3_0);
	MR_init_label10(read_profile__create_refined_proc_ids_3_0,5,8,7,11,10,14,13,19,20,21)
	MR_init_label10(read_profile__create_refined_proc_ids_3_0,23,24,25,26,27,28,29,30,31,32)
	MR_init_label10(read_profile__create_refined_proc_ids_3_0,33,34,35,36,4,39,42,41,45,44)
	MR_init_label10(read_profile__create_refined_proc_ids_3_0,49,50,51,52,54,55,56,57,58,59)
	MR_init_label10(read_profile__create_refined_proc_ids_3_0,60,61,62,63,64,38,66,67,68,69)
	MR_init_label10(read_profile__create_refined_proc_ids_3_0,70,71,72,73,74,75,3,79,81,83)
	MR_init_label10(read_profile__create_refined_proc_ids_3_0,85,87,89,95,96,97,98,99,100,101)
	MR_init_label8(read_profile__create_refined_proc_ids_3_0,102,103,104,127,105,107,108,109)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'create_refined_proc_ids'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(read_profile__create_refined_proc_ids_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	if (MR_PTAG_TESTR(MR_r1,0)) {
		MR_GOTO_LAB(read_profile__create_refined_proc_ids_3_0_i3);
	}
	MR_sv(6) = MR_tfield(0, MR_r1, 5);
	MR_sv(5) = MR_tfield(0, MR_r1, 4);
	MR_r2 = MR_tfield(0, MR_r1, 3);
	MR_sv(2) = MR_tfield(0, MR_r1, 1);
	MR_sv(1) = MR_tfield(0, MR_r1, 0);
	MR_sv(3) = MR_r2;
	MR_r1 = (MR_Word) MR_string_const("TypeSpecOf__", 12);
	MR_np_call_localret_ent(string__append_3_1,
		read_profile__create_refined_proc_ids_3_0_i5);
MR_def_label(read_profile__create_refined_proc_ids_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(read_profile__create_refined_proc_ids_3_0_i4);
	}
	MR_sv(4) = MR_r2;
	MR_r1 = (MR_Word) MR_string_const("pred__", 6);
	MR_np_call_localret_ent(string__append_3_1,
		read_profile__create_refined_proc_ids_3_0_i8);
MR_def_label(read_profile__create_refined_proc_ids_3_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(read_profile__create_refined_proc_ids_3_0_i7);
	}
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(string__to_char_list_2_0,
		read_profile__create_refined_proc_ids_3_0_i20);
MR_def_label(read_profile__create_refined_proc_ids_3_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("func__", 6);
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(string__append_3_1,
		read_profile__create_refined_proc_ids_3_0_i11);
MR_def_label(read_profile__create_refined_proc_ids_3_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(read_profile__create_refined_proc_ids_3_0_i10);
	}
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(string__to_char_list_2_0,
		read_profile__create_refined_proc_ids_3_0_i20);
MR_def_label(read_profile__create_refined_proc_ids_3_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("pred_or_func__", 14);
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(string__append_3_1,
		read_profile__create_refined_proc_ids_3_0_i14);
MR_def_label(read_profile__create_refined_proc_ids_3_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(read_profile__create_refined_proc_ids_3_0_i13);
	}
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(string__to_char_list_2_0,
		read_profile__create_refined_proc_ids_3_0_i20);
MR_def_label(read_profile__create_refined_proc_ids_3_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("typespec: neither pred nor func", 31);
	MR_np_call_localret_ent(require__error_1_0,
		read_profile__create_refined_proc_ids_3_0_i19);
MR_def_label(read_profile__create_refined_proc_ids_3_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(string__to_char_list_2_0,
		read_profile__create_refined_proc_ids_3_0_i20);
MR_def_label(read_profile__create_refined_proc_ids_3_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(read_profile__fix_type_spec_suffix_3_0,
		read_profile__create_refined_proc_ids_3_0_i21);
MR_def_label(read_profile__create_refined_proc_ids_3_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(read_profile__create_refined_proc_ids_3_0_i4);
	}
	MR_sv(3) = MR_r3;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__string__from_char_list_1_0,
		read_profile__create_refined_proc_ids_3_0_i23);
MR_def_label(read_profile__create_refined_proc_ids_3_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		read_profile__create_refined_proc_ids_3_0_i24);
MR_def_label(read_profile__create_refined_proc_ids_3_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__read_profile__add_plus_one_for_function_1_0,
		read_profile__create_refined_proc_ids_3_0_i25);
MR_def_label(read_profile__create_refined_proc_ids_3_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(6);
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		read_profile__create_refined_proc_ids_3_0_i26);
MR_def_label(read_profile__create_refined_proc_ids_3_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Word) MR_string_const("]", 1);
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		read_profile__create_refined_proc_ids_3_0_i27);
MR_def_label(read_profile__create_refined_proc_ids_3_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const(" [", 2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		read_profile__create_refined_proc_ids_3_0_i28);
MR_def_label(read_profile__create_refined_proc_ids_3_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		read_profile__create_refined_proc_ids_3_0_i29);
MR_def_label(read_profile__create_refined_proc_ids_3_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("-", 1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		read_profile__create_refined_proc_ids_3_0_i30);
MR_def_label(read_profile__create_refined_proc_ids_3_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		read_profile__create_refined_proc_ids_3_0_i31);
MR_def_label(read_profile__create_refined_proc_ids_3_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		read_profile__create_refined_proc_ids_3_0_i32);
MR_def_label(read_profile__create_refined_proc_ids_3_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("/", 1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		read_profile__create_refined_proc_ids_3_0_i33);
MR_def_label(read_profile__create_refined_proc_ids_3_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		read_profile__create_refined_proc_ids_3_0_i34);
MR_def_label(read_profile__create_refined_proc_ids_3_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		read_profile__create_refined_proc_ids_3_0_i35);
MR_def_label(read_profile__create_refined_proc_ids_3_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const(".", 1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		read_profile__create_refined_proc_ids_3_0_i36);
MR_def_label(read_profile__create_refined_proc_ids_3_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		read_profile__create_refined_proc_ids_3_0_i127);
MR_def_label(read_profile__create_refined_proc_ids_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("IntroducedFrom__", 16);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(string__append_3_1,
		read_profile__create_refined_proc_ids_3_0_i39);
MR_def_label(read_profile__create_refined_proc_ids_3_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(read_profile__create_refined_proc_ids_3_0_i38);
	}
	MR_sv(4) = MR_r2;
	MR_r1 = (MR_Word) MR_string_const("pred__", 6);
	MR_np_call_localret_ent(string__append_3_1,
		read_profile__create_refined_proc_ids_3_0_i42);
MR_def_label(read_profile__create_refined_proc_ids_3_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(read_profile__create_refined_proc_ids_3_0_i41);
	}
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(string__to_char_list_2_0,
		read_profile__create_refined_proc_ids_3_0_i50);
MR_def_label(read_profile__create_refined_proc_ids_3_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("func__", 6);
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(string__append_3_1,
		read_profile__create_refined_proc_ids_3_0_i45);
MR_def_label(read_profile__create_refined_proc_ids_3_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(read_profile__create_refined_proc_ids_3_0_i44);
	}
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(string__to_char_list_2_0,
		read_profile__create_refined_proc_ids_3_0_i50);
MR_def_label(read_profile__create_refined_proc_ids_3_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("lambda: neither pred nor func", 29);
	MR_np_call_localret_ent(require__error_1_0,
		read_profile__create_refined_proc_ids_3_0_i49);
MR_def_label(read_profile__create_refined_proc_ids_3_0,49)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(string__to_char_list_2_0,
		read_profile__create_refined_proc_ids_3_0_i50);
MR_def_label(read_profile__create_refined_proc_ids_3_0,50)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(read_profile__split_lambda_name_2_0,
		read_profile__create_refined_proc_ids_3_0_i51);
MR_def_label(read_profile__create_refined_proc_ids_3_0,51)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(read_profile__glue_lambda_name_3_0,
		read_profile__create_refined_proc_ids_3_0_i52);
MR_def_label(read_profile__create_refined_proc_ids_3_0,52)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(read_profile__create_refined_proc_ids_3_0_i38);
	}
	MR_sv(3) = MR_r3;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(string__from_char_list_2_0,
		read_profile__create_refined_proc_ids_3_0_i54);
MR_def_label(read_profile__create_refined_proc_ids_3_0,54)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(string__from_char_list_2_0,
		read_profile__create_refined_proc_ids_3_0_i55);
MR_def_label(read_profile__create_refined_proc_ids_3_0,55)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		read_profile__create_refined_proc_ids_3_0_i56);
MR_def_label(read_profile__create_refined_proc_ids_3_0,56)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__read_profile__add_plus_one_for_function_1_0,
		read_profile__create_refined_proc_ids_3_0_i57);
MR_def_label(read_profile__create_refined_proc_ids_3_0,57)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		read_profile__create_refined_proc_ids_3_0_i58);
MR_def_label(read_profile__create_refined_proc_ids_3_0,58)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("/", 1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		read_profile__create_refined_proc_ids_3_0_i59);
MR_def_label(read_profile__create_refined_proc_ids_3_0,59)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		read_profile__create_refined_proc_ids_3_0_i60);
MR_def_label(read_profile__create_refined_proc_ids_3_0,60)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const(" lambda line ", 13);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		read_profile__create_refined_proc_ids_3_0_i61);
MR_def_label(read_profile__create_refined_proc_ids_3_0,61)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		read_profile__create_refined_proc_ids_3_0_i62);
MR_def_label(read_profile__create_refined_proc_ids_3_0,62)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		read_profile__create_refined_proc_ids_3_0_i63);
MR_def_label(read_profile__create_refined_proc_ids_3_0,63)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const(".", 1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		read_profile__create_refined_proc_ids_3_0_i64);
MR_def_label(read_profile__create_refined_proc_ids_3_0,64)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		read_profile__create_refined_proc_ids_3_0_i127);
MR_def_label(read_profile__create_refined_proc_ids_3_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		read_profile__create_refined_proc_ids_3_0_i66);
MR_def_label(read_profile__create_refined_proc_ids_3_0,66)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__read_profile__add_plus_one_for_function_1_0,
		read_profile__create_refined_proc_ids_3_0_i67);
MR_def_label(read_profile__create_refined_proc_ids_3_0,67)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(6);
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		read_profile__create_refined_proc_ids_3_0_i68);
MR_def_label(read_profile__create_refined_proc_ids_3_0,68)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("-", 1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		read_profile__create_refined_proc_ids_3_0_i69);
MR_def_label(read_profile__create_refined_proc_ids_3_0,69)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		read_profile__create_refined_proc_ids_3_0_i70);
MR_def_label(read_profile__create_refined_proc_ids_3_0,70)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		read_profile__create_refined_proc_ids_3_0_i71);
MR_def_label(read_profile__create_refined_proc_ids_3_0,71)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("/", 1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		read_profile__create_refined_proc_ids_3_0_i72);
MR_def_label(read_profile__create_refined_proc_ids_3_0,72)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		read_profile__create_refined_proc_ids_3_0_i73);
MR_def_label(read_profile__create_refined_proc_ids_3_0,73)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		read_profile__create_refined_proc_ids_3_0_i74);
MR_def_label(read_profile__create_refined_proc_ids_3_0,74)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const(".", 1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		read_profile__create_refined_proc_ids_3_0_i75);
MR_def_label(read_profile__create_refined_proc_ids_3_0,75)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		read_profile__create_refined_proc_ids_3_0_i127);
MR_def_label(read_profile__create_refined_proc_ids_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_tfield(1, MR_r1, 5);
	MR_sv(3) = MR_tfield(1, MR_r1, 4);
	MR_r3 = MR_tfield(1, MR_r1, 3);
	MR_sv(2) = MR_tfield(1, MR_r1, 1);
	MR_sv(1) = MR_tfield(1, MR_r1, 0);
	if ((strcmp((char *) (MR_Word *) MR_r3, MR_string_const("__Unify__", 9)) != 0)) {
		MR_GOTO_LAB(read_profile__create_refined_proc_ids_3_0_i79);
	}
	MR_r1 = (MR_Word) MR_string_const("Unify", 5);
	MR_r2 = (MR_Word) MR_string_const(" for ", 5);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		read_profile__create_refined_proc_ids_3_0_i96);
MR_def_label(read_profile__create_refined_proc_ids_3_0,79)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r3, MR_string_const("__Compare__", 11)) != 0)) {
		MR_GOTO_LAB(read_profile__create_refined_proc_ids_3_0_i81);
	}
	MR_r1 = (MR_Word) MR_string_const("Compare", 7);
	MR_r2 = (MR_Word) MR_string_const(" for ", 5);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		read_profile__create_refined_proc_ids_3_0_i96);
MR_def_label(read_profile__create_refined_proc_ids_3_0,81)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r3, MR_string_const("__CompareRep__", 14)) != 0)) {
		MR_GOTO_LAB(read_profile__create_refined_proc_ids_3_0_i83);
	}
	MR_r1 = (MR_Word) MR_string_const("CompareRep", 10);
	MR_r2 = (MR_Word) MR_string_const(" for ", 5);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		read_profile__create_refined_proc_ids_3_0_i96);
MR_def_label(read_profile__create_refined_proc_ids_3_0,83)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r3, MR_string_const("__Index__", 9)) != 0)) {
		MR_GOTO_LAB(read_profile__create_refined_proc_ids_3_0_i85);
	}
	MR_r1 = (MR_Word) MR_string_const("Index", 5);
	MR_r2 = (MR_Word) MR_string_const(" for ", 5);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		read_profile__create_refined_proc_ids_3_0_i96);
MR_def_label(read_profile__create_refined_proc_ids_3_0,85)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r3, MR_string_const("__Initialise__", 14)) != 0)) {
		MR_GOTO_LAB(read_profile__create_refined_proc_ids_3_0_i87);
	}
	MR_r1 = (MR_Word) MR_string_const("Initialise", 10);
	MR_r2 = (MR_Word) MR_string_const(" for ", 5);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		read_profile__create_refined_proc_ids_3_0_i96);
MR_def_label(read_profile__create_refined_proc_ids_3_0,87)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("unknown special predicate name ", 31);
	MR_r2 = MR_r3;
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		read_profile__create_refined_proc_ids_3_0_i89);
MR_def_label(read_profile__create_refined_proc_ids_3_0,89)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(require__error_1_0,
		read_profile__create_refined_proc_ids_3_0_i95);
MR_def_label(read_profile__create_refined_proc_ids_3_0,95)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		read_profile__create_refined_proc_ids_3_0_i96);
MR_def_label(read_profile__create_refined_proc_ids_3_0,96)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		read_profile__create_refined_proc_ids_3_0_i97);
MR_def_label(read_profile__create_refined_proc_ids_3_0,97)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("/", 1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		read_profile__create_refined_proc_ids_3_0_i98);
MR_def_label(read_profile__create_refined_proc_ids_3_0,98)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		read_profile__create_refined_proc_ids_3_0_i99);
MR_def_label(read_profile__create_refined_proc_ids_3_0,99)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		read_profile__create_refined_proc_ids_3_0_i100);
MR_def_label(read_profile__create_refined_proc_ids_3_0,100)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(5);
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		read_profile__create_refined_proc_ids_3_0_i101);
MR_def_label(read_profile__create_refined_proc_ids_3_0,101)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const(".", 1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		read_profile__create_refined_proc_ids_3_0_i102);
MR_def_label(read_profile__create_refined_proc_ids_3_0,102)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		read_profile__create_refined_proc_ids_3_0_i103);
MR_def_label(read_profile__create_refined_proc_ids_3_0,103)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		read_profile__create_refined_proc_ids_3_0_i104);
MR_def_label(read_profile__create_refined_proc_ids_3_0,104)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(4),0)) {
		MR_GOTO_LAB(read_profile__create_refined_proc_ids_3_0_i105);
	}
MR_def_label(read_profile__create_refined_proc_ids_3_0,127)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_decr_sp_and_return(7);
	}
MR_def_label(read_profile__create_refined_proc_ids_3_0,105)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		read_profile__create_refined_proc_ids_3_0_i107);
MR_def_label(read_profile__create_refined_proc_ids_3_0,107)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const(" mode ", 6);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		read_profile__create_refined_proc_ids_3_0_i108);
MR_def_label(read_profile__create_refined_proc_ids_3_0,108)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(1);
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		read_profile__create_refined_proc_ids_3_0_i109);
MR_def_label(read_profile__create_refined_proc_ids_3_0,109)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		read_profile__create_refined_proc_ids_3_0_i127);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(io_combinator__maybe_error_sequence_6_10_0);
extern const MR_TypeCtorInfo_Struct mercury_data_profile__type_ctor_info_call_site_static_ptr_0;
MR_decl_entry(fn__list__map_2_0);
MR_decl_entry(fn__profile__decl_module_1_0);

MR_BEGIN_MODULE(read_profile_module13)
	MR_init_entry1(read_profile__read_proc_static_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__read_profile__read_proc_static_4_0);
	MR_init_label10(read_profile__read_proc_static_4_0,10,12,14,16,18,20,23,24,25,26)
	MR_init_label2(read_profile__read_proc_static_4_0,27,30)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'read_proc_static'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(read_profile__read_proc_static_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(13);
	MR_sv(13) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(7) = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r1 = MR_sv(7);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__program_representation, string_proc_label);
	MR_r3 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r4 = MR_r1;
	MR_r5 = MR_r1;
	MR_r6 = MR_r1;
	MR_r7 = (MR_Word) MR_TAG_COMMON(0,10,0);
	MR_r8 = (MR_Word) MR_TAG_COMMON(0,3,1);
	MR_r9 = (MR_Word) MR_TAG_COMMON(0,6,7);
	MR_r10 = (MR_Word) MR_TAG_COMMON(0,6,8);
	MR_r11 = (MR_Word) MR_TAG_COMMON(0,6,9);
	MR_r12 = (MR_Word) MR_TAG_COMMON(0,6,10);
	MR_r13 = (MR_Word) MR_TAG_COMMON(0,6,11);
	MR_r14 = (MR_Word) MR_TAG_COMMON(0,6,12);
	MR_np_call_localret_ent(io_combinator__maybe_error_sequence_6_10_0,
		read_profile__read_proc_static_4_0_i10);
MR_def_label(read_profile__read_proc_static_4_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,1)) {
		MR_GOTO_LAB(read_profile__read_proc_static_4_0_i12);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_tfield(1, MR_r1, 0);
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(13);
	}
MR_def_label(read_profile__read_proc_static_4_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(0, MR_r1, 0);
	MR_sv(2) = MR_tfield(0, MR_tempr1, 0);
	MR_sv(3) = MR_tfield(0, MR_tempr1, 1);
	MR_sv(4) = MR_tfield(0, MR_tempr1, 2);
	MR_sv(5) = MR_tfield(0, MR_tempr1, 3);
	MR_sv(6) = MR_tfield(0, MR_tempr1, 4);
	MR_r1 = MR_tfield(0, MR_tempr1, 5);
	}
	MR_np_call_localret_ent(f_114_101_97_100_95_112_114_111_102_105_108_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_100_95_110_95_116_104_105_110_103_115_95_95_104_111_52_95_95_91_49_44_32_51_93_95_48_5_0,
		read_profile__read_proc_static_4_0_i14);
MR_def_label(read_profile__read_proc_static_4_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,1)) {
		MR_GOTO_LAB(read_profile__read_proc_static_4_0_i16);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_tfield(1, MR_r1, 0);
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(13);
	}
MR_def_label(read_profile__read_proc_static_4_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_tfield(0, MR_r1, 0);
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(read_profile__maybe_read_ps_coverage_points_4_0,
		read_profile__read_proc_static_4_0_i18);
MR_def_label(read_profile__read_proc_static_4_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,1)) {
		MR_GOTO_LAB(read_profile__read_proc_static_4_0_i20);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_tfield(1, MR_r1, 0);
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(13);
	}
MR_def_label(read_profile__read_proc_static_4_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_tempr2 = MR_tfield(0, MR_r1, 0);
	MR_sv(1) = MR_tfield(0, MR_tempr2, 0);
	MR_sv(7) = MR_tfield(0, MR_tempr2, 1);
	MR_sv(12) = (MR_Word) MR_CTOR0_ADDR(profile, call_site_static_ptr);
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = MR_sv(12);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,6,13);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__list__map_2_0,
		read_profile__read_proc_static_4_0_i23);
MR_def_label(read_profile__read_proc_static_4_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(fn__profile__decl_module_1_0,
		read_profile__read_proc_static_4_0_i24);
MR_def_label(read_profile__read_proc_static_4_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(read_profile__create_refined_proc_ids_3_0,
		read_profile__read_proc_static_4_0_i25);
MR_def_label(read_profile__read_proc_static_4_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(10) = MR_r1;
	MR_sv(11) = MR_r2;
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(fn__read_profile__raw_proc_id_to_string_1_0,
		read_profile__read_proc_static_4_0_i26);
MR_def_label(read_profile__read_proc_static_4_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(6),0)) {
		MR_GOTO_LAB(read_profile__read_proc_static_4_0_i27);
	}
	MR_r2 = MR_sv(8);
	MR_sv(6) = MR_r1;
	MR_sv(8) = (MR_Integer) 0;
	MR_r1 = MR_sv(12);
	MR_np_call_localret_ent(fn__array__array_1_0,
		read_profile__read_proc_static_4_0_i30);
MR_def_label(read_profile__read_proc_static_4_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(8);
	MR_sv(6) = MR_r1;
	MR_sv(8) = (MR_Integer) 1;
	MR_r1 = MR_sv(12);
	MR_np_call_localret_ent(fn__array__array_1_0,
		read_profile__read_proc_static_4_0_i30);
MR_def_label(read_profile__read_proc_static_4_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 12);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(3);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(9);
	MR_tfield(0, MR_tempr1, 2) = MR_sv(10);
	MR_tfield(0, MR_tempr1, 3) = MR_sv(11);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(6);
	MR_tfield(0, MR_tempr1, 5) = MR_sv(4);
	MR_tfield(0, MR_tempr1, 6) = MR_sv(5);
	MR_tfield(0, MR_tempr1, 7) = MR_sv(8);
	MR_tfield(0, MR_tempr1, 8) = MR_r1;
	MR_tfield(0, MR_tempr1, 9) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 10) = MR_sv(7);
	MR_tfield(0, MR_tempr1, 11) = (MR_Integer) 1;
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r1, 0) = MR_tempr1;
	MR_tfield(0, MR_r1, 1) = MR_sv(2);
	MR_decr_sp_and_return(13);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(read_profile_module14)
	MR_init_entry1(fn__read_profile__make_psptr_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__read_profile__make_psptr_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'make_psptr'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__read_profile__make_psptr_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(io_combinator__maybe_error_sequence_3_7_0);
MR_decl_entry(io_combinator__maybe_error_sequence_2_6_0);

MR_BEGIN_MODULE(read_profile_module15)
	MR_init_entry1(read_profile__read_proc_dynamic_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__read_profile__read_proc_dynamic_4_0);
	MR_init_label6(read_profile__read_proc_dynamic_4_0,7,9,19,21,23,24)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'read_proc_dynamic'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(read_profile__read_proc_dynamic_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = (MR_Word) MR_INT_CTOR_ADDR;
	MR_sv(3) = (MR_Word) MR_CTOR0_ADDR(builtin, tuple);
	MR_r1 = MR_sv(2);
	MR_r2 = MR_r1;
	MR_r3 = MR_r1;
	MR_r4 = (MR_Word) MR_TAG_COMMON(0,12,0);
	MR_r5 = (MR_Word) MR_TAG_COMMON(0,3,2);
	MR_r6 = (MR_Word) MR_TAG_COMMON(0,3,3);
	MR_r7 = (MR_Word) MR_TAG_COMMON(0,6,14);
	MR_r8 = (MR_Word) MR_TAG_COMMON(0,6,15);
	MR_np_call_localret_ent(io_combinator__maybe_error_sequence_3_7_0,
		read_profile__read_proc_dynamic_4_0_i7);
MR_def_label(read_profile__read_proc_dynamic_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,1)) {
		MR_GOTO_LAB(read_profile__read_proc_dynamic_4_0_i9);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_tfield(1, MR_r1, 0);
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(5);
	}
MR_def_label(read_profile__read_proc_dynamic_4_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r4 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(2,5);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(read_profile__maybe_read_pd_coverage_points_4_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(1);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 5);
	MR_r5 = MR_tempr2;
	MR_tfield(0, MR_tempr2, 0) = (MR_Word) MR_COMMON(7,1);
	MR_tfield(0, MR_tempr2, 1) = (MR_Word) MR_ENTRY_AP(read_profile__IntroducedFrom__pred__read_proc_dynamic__897__1_5_0);
	MR_tfield(0, MR_tempr2, 2) = (MR_Integer) 2;
	MR_tempr3 = MR_tfield(0, MR_r1, 0);
	MR_tfield(0, MR_tempr2, 3) = MR_tfield(0, MR_tempr3, 2);
	MR_tfield(0, MR_tempr2, 4) = (MR_Word) MR_TAG_COMMON(0,6,16);
	MR_sv(1) = MR_tfield(0, MR_tempr3, 0);
	MR_sv(2) = MR_tfield(0, MR_tempr3, 1);
	MR_sv(4) = (MR_Word) MR_CTOR0_ADDR(profile, call_site_array_slot);
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,1,21);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,22);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,4,2);
	MR_r6 = (MR_Word) MR_TAG_COMMON(0,6,17);
	}
	MR_np_call_localret_ent(io_combinator__maybe_error_sequence_2_6_0,
		read_profile__read_proc_dynamic_4_0_i19);
MR_def_label(read_profile__read_proc_dynamic_4_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,1)) {
		MR_GOTO_LAB(read_profile__read_proc_dynamic_4_0_i21);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_tfield(1, MR_r1, 0);
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(5);
	}
MR_def_label(read_profile__read_proc_dynamic_4_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(2);
	MR_tempr2 = MR_tfield(0, MR_r1, 0);
	MR_sv(2) = MR_tfield(0, MR_tempr2, 0);
	MR_sv(3) = MR_tfield(0, MR_tempr2, 1);
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__read_profile__make_psptr_1_0,
		read_profile__read_proc_dynamic_4_0_i23);
MR_def_label(read_profile__read_proc_dynamic_4_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__array__array_1_0,
		read_profile__read_proc_dynamic_4_0_i24);
MR_def_label(read_profile__read_proc_dynamic_4_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(3);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_tfield(0, MR_tempr1, 2) = MR_sv(2);
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r1, 0) = MR_tempr1;
	MR_tfield(0, MR_r1, 1) = MR_sv(1);
	MR_decr_sp_and_return(5);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(read_profile_module16)
	MR_init_entry1(read_profile__maybe_read_num_handle_error_7_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__read_profile__maybe_read_num_handle_error_7_0);
	MR_init_label3(read_profile__maybe_read_num_handle_error_7_0,6,8,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'maybe_read_num_handle_error'/7 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(read_profile__maybe_read_num_handle_error_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = ((MR_Integer) MR_r1 & (MR_Integer) MR_r2);
	if (MR_INT_EQ(MR_tempr1,0)) {
		MR_GOTO_LAB(read_profile__maybe_read_num_handle_error_7_0_i3);
	}
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r3;
	MR_r1 = (MR_Integer) 0;
	}
	MR_np_call_localret_ent(read_profile__read_num_acc_4_0,
		read_profile__maybe_read_num_handle_error_7_0_i6);
MR_def_label(read_profile__maybe_read_num_handle_error_7_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,1)) {
		MR_GOTO_LAB(read_profile__maybe_read_num_handle_error_7_0_i8);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_tfield(1, MR_r1, 0);
	MR_r1 = (MR_Integer) 0;
	MR_r2 = MR_tempr1;
	MR_decr_sp_and_return(2);
	}
MR_def_label(read_profile__maybe_read_num_handle_error_7_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(0, MR_r1, 0);
	MR_r2 = MR_sv(1);
	MR_decr_sp_and_return(2);
MR_def_label(read_profile__maybe_read_num_handle_error_7_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_r2 = MR_r3;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__measurements__compress_profile_8_0);

MR_BEGIN_MODULE(read_profile_module17)
	MR_init_entry1(read_profile__read_profile_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__read_profile__read_profile_3_0);
	MR_init_label10(read_profile__read_profile_3_0,2,5,6,7,8,9,10,11,12,15)
	MR_init_label2(read_profile__read_profile_3_0,14,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'read_profile'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(read_profile__read_profile_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	MR_r1 = (MR_Integer) 0;
	MR_np_call_localret_ent(read_profile__read_num_acc_4_0,
		read_profile__read_profile_3_0_i2);
MR_def_label(read_profile__read_profile_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TEST(MR_r1,1)) {
		MR_GOTO_LAB(read_profile__read_profile_3_0_i3);
	}
	MR_sv(1) = MR_tfield(0, MR_r1, 0);
	MR_r1 = MR_sv(1);
	MR_r2 = (MR_Integer) 2;
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_np_call_localret_ent(read_profile__maybe_read_num_handle_error_7_0,
		read_profile__read_profile_3_0_i5);
MR_def_label(read_profile__read_profile_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = (MR_Integer) 4;
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(read_profile__maybe_read_num_handle_error_7_0,
		read_profile__read_profile_3_0_i6);
MR_def_label(read_profile__read_profile_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = (MR_Integer) 64;
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(read_profile__maybe_read_num_handle_error_7_0,
		read_profile__read_profile_3_0_i7);
MR_def_label(read_profile__read_profile_3_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = (MR_Integer) 128;
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(read_profile__maybe_read_num_handle_error_7_0,
		read_profile__read_profile_3_0_i8);
MR_def_label(read_profile__read_profile_3_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = (MR_Integer) 256;
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(read_profile__maybe_read_num_handle_error_7_0,
		read_profile__read_profile_3_0_i9);
MR_def_label(read_profile__read_profile_3_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = (MR_Integer) 8;
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(read_profile__maybe_read_num_handle_error_7_0,
		read_profile__read_profile_3_0_i10);
MR_def_label(read_profile__read_profile_3_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_r1 = MR_sv(1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = (MR_Integer) 16;
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(read_profile__maybe_read_num_handle_error_7_0,
		read_profile__read_profile_3_0_i11);
MR_def_label(read_profile__read_profile_3_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_tempr2 = MR_r2;
	MR_r2 = (MR_Integer) 32;
	MR_r3 = MR_tempr2;
	}
	MR_np_call_localret_ent(read_profile__maybe_read_num_handle_error_7_0,
		read_profile__read_profile_3_0_i12);
MR_def_label(read_profile__read_profile_3_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(read_profile__read_profile_3_0_i14);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(5);
	MR_r5 = MR_sv(6);
	MR_r6 = MR_sv(7);
	MR_r7 = MR_sv(1);
	MR_r8 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__measurements__compress_profile_8_0,
		read_profile__read_profile_3_0_i15);
MR_def_label(read_profile__read_profile_3_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(8);
	}
MR_def_label(read_profile__read_profile_3_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r1, 0) = MR_tfield(1, MR_r2, 0);
MR_def_label(read_profile__read_profile_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(8);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(read_profile_module18)
	MR_init_entry1(read_profile__read_ptr_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__read_profile__read_ptr_4_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'read_ptr'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(read_profile__read_ptr_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(f_114_101_97_100_95_112_114_111_102_105_108_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_100_95_112_116_114_95_95_91_49_93_95_48_4_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(read_profile_module19)
	MR_init_entry1(read_profile__read_call_site_dynamic_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__read_profile__read_call_site_dynamic_3_0);
	MR_init_label6(read_profile__read_call_site_dynamic_3_0,2,4,6,8,10,12)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'read_call_site_dynamic'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(read_profile__read_call_site_dynamic_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_r1 = (MR_Integer) 0;
	MR_np_call_localret_ent(read_profile__read_num_acc_4_0,
		read_profile__read_call_site_dynamic_3_0_i2);
MR_def_label(read_profile__read_call_site_dynamic_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,1)) {
		MR_GOTO_LAB(read_profile__read_call_site_dynamic_3_0_i4);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_tfield(1, MR_r1, 0);
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(3);
	}
MR_def_label(read_profile__read_call_site_dynamic_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_tfield(0, MR_r1, 0);
	MR_np_call_localret_ent(f_114_101_97_100_95_112_114_111_102_105_108_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_100_95_112_116_114_95_95_91_49_93_95_48_4_0,
		read_profile__read_call_site_dynamic_3_0_i6);
MR_def_label(read_profile__read_call_site_dynamic_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,1)) {
		MR_GOTO_LAB(read_profile__read_call_site_dynamic_3_0_i8);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_tfield(1, MR_r1, 0);
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(3);
	}
MR_def_label(read_profile__read_call_site_dynamic_3_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_tfield(0, MR_r1, 0);
	MR_np_call_localret_ent(read_profile__read_profile_3_0,
		read_profile__read_call_site_dynamic_3_0_i10);
MR_def_label(read_profile__read_call_site_dynamic_3_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,1)) {
		MR_GOTO_LAB(read_profile__read_call_site_dynamic_3_0_i12);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_tfield(1, MR_r1, 0);
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(3);
	}
MR_def_label(read_profile__read_call_site_dynamic_3_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr1, 0) = (MR_Integer) -1;
	MR_tfield(0, MR_tempr1, 1) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 2) = MR_tfield(0, MR_r1, 0);
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r1, 0) = MR_tempr1;
	MR_tfield(0, MR_r1, 1) = MR_sv(1);
	MR_decr_sp_and_return(3);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(array__max_2_0);
MR_decl_entry(fn__array_util__u_1_0);
MR_decl_entry(array__set_4_0);

MR_BEGIN_MODULE(read_profile_module20)
	MR_init_entry1(read_profile__deep_insert_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__read_profile__deep_insert_4_0);
	MR_init_label3(read_profile__deep_insert_4_0,2,3,6)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'deep_insert'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(read_profile__deep_insert_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_r1;
	MR_np_call_localret_ent(array__max_2_0,
		read_profile__deep_insert_4_0_i2);
MR_def_label(read_profile__deep_insert_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) MR_sv(2) <= (MR_Integer) MR_r1)) {
		MR_GOTO_LAB(read_profile__deep_insert_4_0_i3);
	}
	MR_r1 = (MR_Word) MR_string_const("deep_insert: array bounds violation", 35);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(require__error_1_0);
MR_def_label(read_profile__deep_insert_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r1, 0) = (MR_Word) MR_CTOR1_ADDR(array, array);
	MR_tfield(0, MR_r1, 1) = MR_sv(4);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(fn__array_util__u_1_0,
		read_profile__deep_insert_4_0_i6);
MR_def_label(read_profile__deep_insert_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_tempr1;
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(array__set_4_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(read_profile_module21)
	MR_init_entry1(read_profile__is_next_item_token_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__read_profile__is_next_item_token_2_0);
	MR_init_label1(read_profile__is_next_item_token_2_0,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'is_next_item_token'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(read_profile__is_next_item_token_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Integer	Int;
	MR_Word	NextItem;
#define	MR_PROC_LABEL	mercury__read_profile__is_next_item_token_2_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
	Int = MR_r1;
{
#line 1548 "read_profile.m"

    NextItem = (MR_DeepProfNextItem) Int;

    switch (NextItem) {
        case MR_deep_item_end:
        case MR_deep_item_call_site_static:
        case MR_deep_item_call_site_dynamic:
        case MR_deep_item_proc_static:
        case MR_deep_item_proc_dynamic:
            SUCCESS_INDICATOR = MR_TRUE;
            break;

        default:
            SUCCESS_INDICATOR = MR_FALSE;
            break;
    }
;}
#line 5710 "read_profile.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(read_profile__is_next_item_token_2_0_i1);
	MR_r2 = NextItem;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(read_profile__is_next_item_token_2_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(read_profile_module22)
	MR_init_entry1(read_profile__read_nodes_2_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__read_profile__read_nodes_2_5_0);
	MR_init_label1(read_profile__read_nodes_2_5_0,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'read_nodes_2'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(read_profile__read_nodes_2_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_GE(MR_r1,1)) {
		MR_GOTO_LAB(read_profile__read_nodes_2_5_0_i2);
	}
	MR_r1 = (MR_Word) MR_tmkword(1, (MR_Word *) MR_r2);
	MR_proceed();
MR_def_label(read_profile__read_nodes_2_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = ((MR_Integer) MR_r1 - (MR_Integer) 1);
	MR_np_tailcall_ent(read_profile__read_nodes_3_5_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

extern const MR_TypeCtorInfo_Struct mercury_data_profile__type_ctor_info_call_site_dynamic_0;
extern const MR_TypeCtorInfo_Struct mercury_data_profile__type_ctor_info_proc_dynamic_0;
extern const MR_TypeCtorInfo_Struct mercury_data_profile__type_ctor_info_proc_static_0;

MR_BEGIN_MODULE(read_profile_module23)
	MR_init_entry1(read_profile__read_nodes_3_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__read_profile__read_nodes_3_5_0);
	MR_init_label10(read_profile__read_nodes_3_5_0,2,4,6,5,10,14,16,18,13,22)
	MR_init_label10(read_profile__read_nodes_3_5_0,24,26,21,29,31,33,35,30,38,40)
	MR_init_label4(read_profile__read_nodes_3_5_0,42,8,45,46)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'read_nodes_3'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(read_profile__read_nodes_3_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_tfield(0, MR_r2, 0);
	MR_sv(4) = MR_r2;
	MR_np_call_localret_ent(io__read_byte_3_0,
		read_profile__read_nodes_3_5_0_i2);
MR_def_label(read_profile__read_nodes_3_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(read_profile__read_nodes_3_5_0_i4);
	}
	MR_r1 = (MR_Word) MR_tmkword(0, (MR_Word *) MR_sv(4));
	MR_decr_sp_and_return(5);
MR_def_label(read_profile__read_nodes_3_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,2)) {
		MR_GOTO_LAB(read_profile__read_nodes_3_5_0_i5);
	}
	MR_r1 = MR_tfield(2, MR_r1, 0);
	MR_np_call_localret_ent(io__error_message_2_0,
		read_profile__read_nodes_3_5_0_i6);
MR_def_label(read_profile__read_nodes_3_5_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr1, 0) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(5);
	}
MR_def_label(read_profile__read_nodes_3_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(1, MR_r1, 0);
	MR_sv(3) = MR_tempr1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(read_profile__is_next_item_token_2_0,
		read_profile__read_nodes_3_5_0_i10);
MR_def_label(read_profile__read_nodes_3_5_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(read_profile__read_nodes_3_5_0_i8);
	}
	if (((MR_Integer) MR_r2 != ((MR_Integer) MR_deep_item_call_site_dynamic))) {
		MR_GOTO_LAB(read_profile__read_nodes_3_5_0_i13);
	}
	MR_np_call_localret_ent(read_profile__read_call_site_dynamic_3_0,
		read_profile__read_nodes_3_5_0_i14);
MR_def_label(read_profile__read_nodes_3_5_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,1)) {
		MR_GOTO_LAB(read_profile__read_nodes_3_5_0_i16);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr1, 0) = MR_tfield(1, MR_r1, 0);
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(5);
	}
MR_def_label(read_profile__read_nodes_3_5_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(profile, call_site_dynamic);
	MR_r2 = MR_tfield(0, MR_sv(4), 2);
	MR_r3 = MR_tfield(0, MR_tempr1, 1);
	MR_r4 = MR_tfield(0, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(read_profile__deep_insert_4_0,
		read_profile__read_nodes_3_5_0_i18);
MR_def_label(read_profile__read_nodes_3_5_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 6);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_tfield(0, MR_r2, 0) = MR_tfield(0, MR_tempr1, 0);
	MR_tfield(0, MR_r2, 1) = MR_tfield(0, MR_tempr1, 1);
	MR_tfield(0, MR_r2, 2) = MR_r1;
	MR_tfield(0, MR_r2, 3) = MR_tfield(0, MR_tempr1, 3);
	MR_tfield(0, MR_r2, 4) = MR_tfield(0, MR_tempr1, 4);
	MR_tfield(0, MR_r2, 5) = MR_tfield(0, MR_tempr1, 5);
	MR_r1 = MR_sv(1);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(read_profile__read_nodes_2_5_0);
	}
MR_def_label(read_profile__read_nodes_3_5_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) MR_r2 != ((MR_Integer) MR_deep_item_call_site_static))) {
		MR_GOTO_LAB(read_profile__read_nodes_3_5_0_i21);
	}
	MR_np_call_localret_ent(read_profile__read_call_site_static_3_0,
		read_profile__read_nodes_3_5_0_i22);
MR_def_label(read_profile__read_nodes_3_5_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,1)) {
		MR_GOTO_LAB(read_profile__read_nodes_3_5_0_i24);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr1, 0) = MR_tfield(1, MR_r1, 0);
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(5);
	}
MR_def_label(read_profile__read_nodes_3_5_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(profile, call_site_static);
	MR_r2 = MR_tfield(0, MR_sv(4), 4);
	MR_tempr2 = MR_tfield(0, MR_tempr1, 0);
	MR_r3 = MR_tfield(0, MR_tempr2, 1);
	MR_r4 = MR_tfield(0, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(read_profile__deep_insert_4_0,
		read_profile__read_nodes_3_5_0_i26);
MR_def_label(read_profile__read_nodes_3_5_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 6);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_tfield(0, MR_r2, 0) = MR_tfield(0, MR_tempr1, 0);
	MR_tfield(0, MR_r2, 1) = MR_tfield(0, MR_tempr1, 1);
	MR_tfield(0, MR_r2, 2) = MR_tfield(0, MR_tempr1, 2);
	MR_tfield(0, MR_r2, 3) = MR_tfield(0, MR_tempr1, 3);
	MR_tfield(0, MR_r2, 4) = MR_r1;
	MR_tfield(0, MR_r2, 5) = MR_tfield(0, MR_tempr1, 5);
	MR_r1 = MR_sv(1);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(read_profile__read_nodes_2_5_0);
	}
MR_def_label(read_profile__read_nodes_3_5_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) MR_r2 != ((MR_Integer) MR_deep_item_end))) {
		MR_GOTO_LAB(read_profile__read_nodes_3_5_0_i29);
	}
	MR_r1 = (MR_Word) MR_tmkword(0, (MR_Word *) MR_sv(4));
	MR_decr_sp_and_return(5);
MR_def_label(read_profile__read_nodes_3_5_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) MR_r2 != ((MR_Integer) MR_deep_item_proc_dynamic))) {
		MR_GOTO_LAB(read_profile__read_nodes_3_5_0_i30);
	}
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(read_profile__read_proc_dynamic_4_0,
		read_profile__read_nodes_3_5_0_i31);
MR_def_label(read_profile__read_nodes_3_5_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,1)) {
		MR_GOTO_LAB(read_profile__read_nodes_3_5_0_i33);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr1, 0) = MR_tfield(1, MR_r1, 0);
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(5);
	}
MR_def_label(read_profile__read_nodes_3_5_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(profile, proc_dynamic);
	MR_r2 = MR_tfield(0, MR_sv(4), 3);
	MR_r3 = MR_tfield(0, MR_tempr1, 1);
	MR_r4 = MR_tfield(0, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(read_profile__deep_insert_4_0,
		read_profile__read_nodes_3_5_0_i35);
MR_def_label(read_profile__read_nodes_3_5_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 6);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_tfield(0, MR_r2, 0) = MR_tfield(0, MR_tempr1, 0);
	MR_tfield(0, MR_r2, 1) = MR_tfield(0, MR_tempr1, 1);
	MR_tfield(0, MR_r2, 2) = MR_tfield(0, MR_tempr1, 2);
	MR_tfield(0, MR_r2, 3) = MR_r1;
	MR_tfield(0, MR_r2, 4) = MR_tfield(0, MR_tempr1, 4);
	MR_tfield(0, MR_r2, 5) = MR_tfield(0, MR_tempr1, 5);
	MR_r1 = MR_sv(1);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(read_profile__read_nodes_2_5_0);
	}
MR_def_label(read_profile__read_nodes_3_5_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(read_profile__read_proc_static_4_0,
		read_profile__read_nodes_3_5_0_i38);
MR_def_label(read_profile__read_nodes_3_5_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,1)) {
		MR_GOTO_LAB(read_profile__read_nodes_3_5_0_i40);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr1, 0) = MR_tfield(1, MR_r1, 0);
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(5);
	}
MR_def_label(read_profile__read_nodes_3_5_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(profile, proc_static);
	MR_r2 = MR_tfield(0, MR_sv(4), 5);
	MR_r3 = MR_tfield(0, MR_tempr1, 1);
	MR_r4 = MR_tfield(0, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(read_profile__deep_insert_4_0,
		read_profile__read_nodes_3_5_0_i42);
MR_def_label(read_profile__read_nodes_3_5_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 6);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_tfield(0, MR_r2, 0) = MR_tfield(0, MR_tempr1, 0);
	MR_tfield(0, MR_r2, 1) = MR_tfield(0, MR_tempr1, 1);
	MR_tfield(0, MR_r2, 2) = MR_tfield(0, MR_tempr1, 2);
	MR_tfield(0, MR_r2, 3) = MR_tfield(0, MR_tempr1, 3);
	MR_tfield(0, MR_r2, 4) = MR_tfield(0, MR_tempr1, 4);
	MR_tfield(0, MR_r2, 5) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(read_profile__read_nodes_2_5_0);
	}
MR_def_label(read_profile__read_nodes_3_5_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		read_profile__read_nodes_3_5_0_i45);
MR_def_label(read_profile__read_nodes_3_5_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("unexpected token ", 17);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		read_profile__read_nodes_3_5_0_i46);
MR_def_label(read_profile__read_nodes_3_5_0,46)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 2, (MR_Integer) 1);
	MR_tfield(2, MR_r2, 0) = MR_r1;
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(read_profile_module24)
	MR_init_entry1(read_profile__read_nodes_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__read_profile__read_nodes_4_0);
	MR_init_label4(read_profile__read_nodes_4_0,16,2,4,6)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'read_nodes'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(read_profile__read_nodes_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
MR_def_label(read_profile__read_nodes_4_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 49999;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(read_profile__read_nodes_3_5_0,
		read_profile__read_nodes_4_0_i2);
MR_def_label(read_profile__read_nodes_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,2)) {
		MR_GOTO_LAB(read_profile__read_nodes_4_0_i4);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_tfield(2, MR_r1, 0);
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(1);
	}
MR_def_label(read_profile__read_nodes_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,0)) {
		MR_GOTO_LAB(read_profile__read_nodes_4_0_i6);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr1, 0) = MR_body((MR_Integer) MR_r1, (MR_Integer) 0);
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(1);
	}
MR_def_label(read_profile__read_nodes_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_body((MR_Integer) MR_r1, (MR_Integer) 1);
	MR_succip_word = MR_sv(1);
	MR_GOTO_LAB(read_profile__read_nodes_4_0_i16);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(io__open_binary_input_4_0);
MR_decl_entry(io__set_binary_input_stream_4_0);
extern const MR_TypeCtorInfo_Struct mercury_data_profile__type_ctor_info_initial_deep_0;
MR_decl_entry(io_combinator__maybe_error_sequence_11_15_0);

MR_BEGIN_MODULE(read_profile_module25)
	MR_init_entry1(read_profile__read_call_graph_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__read_profile__read_call_graph_4_0);
	MR_init_label10(read_profile__read_call_graph_4_0,2,5,4,7,8,10,23,30,25,27)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'read_call_graph'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__read_profile__read_call_graph_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(io__open_binary_input_4_0,
		read_profile__read_call_graph_4_0_i2);
MR_def_label(read_profile__read_call_graph_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,1)) {
		MR_GOTO_LAB(read_profile__read_call_graph_4_0_i4);
	}
	MR_r1 = MR_tfield(1, MR_r1, 0);
	MR_np_call_localret_ent(io__error_message_2_0,
		read_profile__read_call_graph_4_0_i5);
MR_def_label(read_profile__read_call_graph_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(2);
	}
MR_def_label(read_profile__read_call_graph_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(0, MR_r1, 0);
	MR_np_call_localret_ent(io__set_binary_input_stream_4_0,
		read_profile__read_call_graph_4_0_i7);
MR_def_label(read_profile__read_call_graph_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(read_profile__read_deep_id_string_3_0,
		read_profile__read_call_graph_4_0_i8);
MR_def_label(read_profile__read_call_graph_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,1)) {
		MR_GOTO_LAB(read_profile__read_call_graph_4_0_i10);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(io__set_binary_input_stream_4_0,
		read_profile__read_call_graph_4_0_i27);
MR_def_label(read_profile__read_call_graph_4_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r3 = MR_r2;
	MR_r4 = MR_r2;
	MR_r5 = MR_r2;
	MR_r6 = MR_r2;
	MR_r7 = MR_r2;
	MR_r8 = MR_r2;
	MR_r9 = MR_r2;
	MR_r10 = MR_r2;
	MR_r11 = MR_r2;
	MR_r12 = (MR_Word) MR_CTOR0_ADDR(profile, initial_deep);
	MR_r13 = (MR_Word) MR_TAG_COMMON(0,6,19);
	MR_r14 = (MR_Word) MR_TAG_COMMON(0,6,20);
	MR_r15 = (MR_Word) MR_TAG_COMMON(0,6,21);
	MR_r16 = (MR_Word) MR_TAG_COMMON(0,6,22);
	MR_r17 = (MR_Word) MR_TAG_COMMON(0,6,23);
	MR_r18 = (MR_Word) MR_TAG_COMMON(0,6,24);
	MR_r19 = (MR_Word) MR_TAG_COMMON(0,6,25);
	MR_r20 = (MR_Word) MR_TAG_COMMON(0,6,26);
	MR_r21 = (MR_Word) MR_TAG_COMMON(0,6,27);
	MR_r22 = (MR_Word) MR_TAG_COMMON(0,6,28);
	MR_r23 = (MR_Word) MR_TAG_COMMON(0,3,4);
	MR_r24 = (MR_Word) MR_TAG_COMMON(0,6,18);
	MR_np_call_localret_ent(io_combinator__maybe_error_sequence_11_15_0,
		read_profile__read_call_graph_4_0_i23);
MR_def_label(read_profile__read_call_graph_4_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,1)) {
		MR_GOTO_LAB(read_profile__read_call_graph_4_0_i25);
	}
MR_def_label(read_profile__read_call_graph_4_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(io__set_binary_input_stream_4_0,
		read_profile__read_call_graph_4_0_i27);
MR_def_label(read_profile__read_call_graph_4_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(0, MR_r1, 0);
	MR_np_call_localret_ent(read_profile__read_nodes_4_0,
		read_profile__read_call_graph_4_0_i30);
MR_def_label(read_profile__read_call_graph_4_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_decr_sp_and_return(2);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__f_105_110_116_95_95_62_62_2_0);
MR_decl_entry(fn__string__format_2_0);

MR_BEGIN_MODULE(read_profile_module26)
	MR_init_entry1(read_profile__maybe_deep_flags_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__read_profile__maybe_deep_flags_2_0);
	MR_init_label10(read_profile__maybe_deep_flags_2_0,2,3,4,5,9,8,12,13,11,6)
	MR_init_label1(read_profile__maybe_deep_flags_2_0,19)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'maybe_deep_flags'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(read_profile__maybe_deep_flags_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_r1 = ((MR_Integer) MR_r1 & (MR_Integer) 255);
	MR_r2 = (MR_Integer) 0;
	MR_np_call_localret_ent(fn__f_105_110_116_95_95_62_62_2_0,
		read_profile__maybe_deep_flags_2_0_i2);
MR_def_label(read_profile__maybe_deep_flags_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = ((MR_Integer) MR_sv(1) & (MR_Integer) 768);
	MR_r2 = (MR_Integer) 8;
	MR_np_call_localret_ent(fn__f_105_110_116_95_95_62_62_2_0,
		read_profile__maybe_deep_flags_2_0_i3);
MR_def_label(read_profile__maybe_deep_flags_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = ((MR_Integer) MR_sv(1) & (MR_Integer) 3072);
	MR_r2 = (MR_Integer) 10;
	MR_np_call_localret_ent(fn__f_105_110_116_95_95_62_62_2_0,
		read_profile__maybe_deep_flags_2_0_i4);
MR_def_label(read_profile__maybe_deep_flags_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = ((MR_Integer) MR_sv(1) & (MR_Integer) 12288);
	MR_r2 = (MR_Integer) 12;
	MR_np_call_localret_ent(fn__f_105_110_116_95_95_62_62_2_0,
		read_profile__maybe_deep_flags_2_0_i5);
MR_def_label(read_profile__maybe_deep_flags_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(4),0)) {
		MR_GOTO_LAB(read_profile__maybe_deep_flags_2_0_i6);
	}
	if (MR_INT_NE(MR_sv(3),0)) {
		MR_GOTO_LAB(read_profile__maybe_deep_flags_2_0_i9);
	}
	MR_r2 = (MR_Integer) 1;
	MR_GOTO_LAB(read_profile__maybe_deep_flags_2_0_i8);
MR_def_label(read_profile__maybe_deep_flags_2_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(3),1)) {
		MR_GOTO_LAB(read_profile__maybe_deep_flags_2_0_i6);
	}
	MR_r2 = (MR_Integer) 0;
MR_def_label(read_profile__maybe_deep_flags_2_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(read_profile__maybe_deep_flags_2_0_i12);
	}
	MR_r1 = MR_r2;
	MR_r2 = (MR_Integer) 0;
	MR_GOTO_LAB(read_profile__maybe_deep_flags_2_0_i11);
MR_def_label(read_profile__maybe_deep_flags_2_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(read_profile__maybe_deep_flags_2_0_i13);
	}
	MR_r1 = MR_r2;
	MR_r2 = (MR_Integer) 1;
	MR_GOTO_LAB(read_profile__maybe_deep_flags_2_0_i11);
MR_def_label(read_profile__maybe_deep_flags_2_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,2)) {
		MR_GOTO_LAB(read_profile__maybe_deep_flags_2_0_i6);
	}
	MR_r1 = MR_r2;
	MR_r2 = (MR_Integer) 2;
MR_def_label(read_profile__maybe_deep_flags_2_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = ((MR_Integer) -16384 & (MR_Integer) MR_sv(1));
	if (((MR_Integer) 0 != (MR_Integer) MR_tempr1)) {
		MR_GOTO_LAB(read_profile__maybe_deep_flags_2_0_i6);
	}
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_tfield(0, MR_tempr1, 3) = MR_r2;
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_r1, 0) = MR_tempr1;
	MR_decr_sp_and_return(5);
	}
MR_def_label(read_profile__maybe_deep_flags_2_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_tempr1;
	MR_tfield(1, MR_r2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = (MR_Word) MR_string_const("Error parsing flags in file header, flags are 0x%x", 50);
	}
	MR_np_call_localret_ent(fn__string__format_2_0,
		read_profile__maybe_deep_flags_2_0_i19);
MR_def_label(read_profile__maybe_deep_flags_2_0,19)
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

MR_decl_entry(fn__measurements__zero_own_prof_info_0_0);
MR_decl_entry(fn__array__init_2_0);
MR_decl_entry(fn__profile__dummy_proc_id_0_0);

MR_BEGIN_MODULE(read_profile_module27)
	MR_init_entry1(read_profile__maybe_init_deep_12_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__read_profile__maybe_init_deep_12_0);
	MR_init_label10(read_profile__maybe_init_deep_12_0,2,6,8,9,11,14,15,16,17,19)
	MR_init_label1(read_profile__maybe_init_deep_12_0,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'maybe_init_deep'/12 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(read_profile__maybe_init_deep_12_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(11);
	MR_sv(11) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_r5;
	MR_sv(5) = MR_r6;
	MR_sv(6) = MR_r7;
	MR_sv(7) = MR_r8;
	MR_sv(8) = MR_r9;
	MR_sv(9) = MR_r10;
	MR_sv(10) = MR_r11;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(read_profile__maybe_deep_flags_2_0,
		read_profile__maybe_init_deep_12_0_i2);
MR_def_label(read_profile__maybe_init_deep_12_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TEST(MR_r1,1)) {
		MR_GOTO_LAB(read_profile__maybe_init_deep_12_0_i3);
	}
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 10);
	MR_tfield(0, MR_r2, 0) = MR_sv(1);
	MR_tfield(0, MR_r2, 1) = MR_sv(2);
	MR_tfield(0, MR_r2, 2) = MR_sv(3);
	MR_tfield(0, MR_r2, 3) = MR_sv(4);
	MR_tfield(0, MR_r2, 4) = MR_sv(5);
	MR_tfield(0, MR_r2, 5) = MR_sv(6);
	MR_tfield(0, MR_r2, 6) = MR_sv(7);
	MR_tfield(0, MR_r2, 7) = MR_sv(8);
	MR_tfield(0, MR_r2, 8) = MR_sv(9);
	MR_tfield(0, MR_r2, 9) = MR_tfield(0, MR_r1, 0);
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_sv(10);
	MR_sv(6) = ((MR_Integer) MR_tfield(0, MR_r2, 1) + (MR_Integer) 1);
	MR_sv(7) = (MR_Integer) -1;
	MR_np_call_localret_ent(fn__measurements__zero_own_prof_info_0_0,
		read_profile__maybe_init_deep_12_0_i6);
MR_def_label(read_profile__maybe_init_deep_12_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_r3 = MR_tempr1;
	MR_tempr2 = MR_sv(7);
	MR_tfield(0, MR_tempr1, 0) = MR_tempr2;
	MR_tfield(0, MR_tempr1, 1) = MR_tempr2;
	MR_tfield(0, MR_tempr1, 2) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(profile, call_site_dynamic);
	MR_r2 = MR_sv(6);
	}
	MR_np_call_localret_ent(fn__array__init_2_0,
		read_profile__maybe_init_deep_12_0_i8);
MR_def_label(read_profile__maybe_init_deep_12_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_sv(6) = ((MR_Integer) MR_tfield(0, MR_sv(1), 3) + (MR_Integer) 1);
	MR_sv(7) = (MR_Integer) -1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(profile, call_site_array_slot);
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_np_call_localret_ent(fn__array__array_1_0,
		read_profile__maybe_init_deep_12_0_i9);
MR_def_label(read_profile__maybe_init_deep_12_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_sv(7);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_tfield(0, MR_tempr1, 2) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(profile, proc_dynamic);
	MR_r2 = MR_sv(6);
	}
	MR_np_call_localret_ent(fn__array__init_2_0,
		read_profile__maybe_init_deep_12_0_i11);
MR_def_label(read_profile__maybe_init_deep_12_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(profile, call_site_static);
	MR_r2 = ((MR_Integer) MR_tfield(0, MR_sv(1), 2) + (MR_Integer) 1);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,15,0);
	MR_np_call_localret_ent(fn__array__init_2_0,
		read_profile__maybe_init_deep_12_0_i14);
MR_def_label(read_profile__maybe_init_deep_12_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_sv(6) = ((MR_Integer) MR_tfield(0, MR_sv(1), 4) + (MR_Integer) 1);
	MR_np_call_localret_ent(fn__profile__dummy_proc_id_0_0,
		read_profile__maybe_init_deep_12_0_i15);
MR_def_label(read_profile__maybe_init_deep_12_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(profile, call_site_static_ptr);
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_np_call_localret_ent(fn__array__array_1_0,
		read_profile__maybe_init_deep_12_0_i16);
MR_def_label(read_profile__maybe_init_deep_12_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__program_representation, coverage_point_info);
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_np_call_localret_ent(fn__array__array_1_0,
		read_profile__maybe_init_deep_12_0_i17);
MR_def_label(read_profile__maybe_init_deep_12_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 12);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_sv(7);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_string_const("", 0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Word) MR_string_const("", 0);
	MR_tfield(0, MR_tempr1, 3) = (MR_Word) MR_string_const("", 0);
	MR_tfield(0, MR_tempr1, 4) = (MR_Word) MR_string_const("", 0);
	MR_tfield(0, MR_tempr1, 5) = (MR_Word) MR_string_const("", 0);
	MR_tfield(0, MR_tempr1, 6) = (MR_Integer) -1;
	MR_tfield(0, MR_tempr1, 7) = (MR_Integer) 0;
	MR_tfield(0, MR_tempr1, 8) = MR_sv(8);
	MR_tfield(0, MR_tempr1, 9) = MR_r1;
	MR_tfield(0, MR_tempr1, 10) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_tempr1, 11) = (MR_Integer) 1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(profile, proc_static);
	MR_r2 = MR_sv(6);
	}
	MR_np_call_localret_ent(fn__array__init_2_0,
		read_profile__maybe_init_deep_12_0_i19);
MR_def_label(read_profile__maybe_init_deep_12_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 6);
	MR_tfield(0, MR_r2, 0) = MR_sv(1);
	MR_tfield(0, MR_r2, 1) = MR_sv(2);
	MR_tfield(0, MR_r2, 2) = MR_sv(4);
	MR_tfield(0, MR_r2, 3) = MR_sv(3);
	MR_tfield(0, MR_r2, 4) = MR_sv(5);
	MR_tfield(0, MR_r2, 5) = MR_r1;
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_r1, 0) = MR_r2;
MR_def_label(read_profile__maybe_init_deep_12_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(11);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(read_profile_module28)
	MR_init_entry1(read_profile__maybe_read_pd_coverage_points_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__read_profile__maybe_read_pd_coverage_points_4_0);
	MR_init_label6(read_profile__maybe_read_pd_coverage_points_4_0,4,7,10,11,3,36)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'maybe_read_pd_coverage_points'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(read_profile__maybe_read_pd_coverage_points_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(0, MR_tfield(0, MR_r1, 9), 3);
	if (MR_INT_NE(MR_tempr1,2)) {
		MR_GOTO_LAB(read_profile__maybe_read_pd_coverage_points_4_0_i3);
	}
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_r1 = (MR_Integer) 0;
	}
	MR_np_call_localret_ent(read_profile__read_num_acc_4_0,
		read_profile__maybe_read_pd_coverage_points_4_0_i4);
MR_def_label(read_profile__maybe_read_pd_coverage_points_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TEST(MR_r1,1)) {
		MR_GOTO_LAB(read_profile__maybe_read_pd_coverage_points_4_0_i36);
	}
	MR_r1 = MR_tfield(0, MR_r1, 0);
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_np_call_localret_ent(read_profile__read_n_things__ho8_6_0,
		read_profile__maybe_read_pd_coverage_points_4_0_i7);
MR_def_label(read_profile__maybe_read_pd_coverage_points_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TEST(MR_r1,1)) {
		MR_GOTO_LAB(read_profile__maybe_read_pd_coverage_points_4_0_i36);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = MR_tfield(0, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(list__reverse_2_0,
		read_profile__maybe_read_pd_coverage_points_4_0_i10);
MR_def_label(read_profile__maybe_read_pd_coverage_points_4_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__array__array_1_0,
		read_profile__maybe_read_pd_coverage_points_4_0_i11);
MR_def_label(read_profile__maybe_read_pd_coverage_points_4_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_r1, 0) = MR_tempr1;
	MR_decr_sp_and_return(1);
	}
MR_def_label(read_profile__maybe_read_pd_coverage_points_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,16,0);
	MR_proceed();
MR_def_label(read_profile__maybe_read_pd_coverage_points_4_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(1);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(io_combinator__maybe_error_sequence_5_9_0);

MR_BEGIN_MODULE(read_profile_module29)
	MR_init_entry1(read_profile__read_proc_id_user_defined_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__read_profile__read_proc_id_user_defined_4_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'read_proc_id_user_defined'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(read_profile__read_proc_id_user_defined_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r12 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(11,1);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(read_profile__IntroducedFrom__pred__read_proc_id_user_defined__663__1_7_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_r1;
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = MR_r1;
	MR_r3 = MR_r1;
	MR_r4 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r5 = MR_r4;
	MR_r6 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__program_representation, string_proc_label);
	MR_r7 = (MR_Word) MR_TAG_COMMON(0,6,29);
	MR_r8 = (MR_Word) MR_TAG_COMMON(0,6,30);
	MR_r9 = (MR_Word) MR_TAG_COMMON(0,6,31);
	MR_r10 = (MR_Word) MR_TAG_COMMON(0,6,32);
	MR_r11 = (MR_Word) MR_TAG_COMMON(0,6,33);
	MR_np_tailcall_ent(io_combinator__maybe_error_sequence_5_9_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(read_profile_module30)
	MR_init_entry1(read_profile__read_deep_byte_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__read_profile__read_deep_byte_3_0);
	MR_init_label4(read_profile__read_deep_byte_3_0,2,4,7,6)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'read_deep_byte'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(read_profile__read_deep_byte_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(io__read_byte_3_0,
		read_profile__read_deep_byte_3_0_i2);
MR_def_label(read_profile__read_deep_byte_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(read_profile__read_deep_byte_3_0_i4);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(1,0,0);
	MR_decr_sp_and_return(1);
MR_def_label(read_profile__read_deep_byte_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,2)) {
		MR_GOTO_LAB(read_profile__read_deep_byte_3_0_i6);
	}
	MR_r1 = MR_tfield(2, MR_r1, 0);
	MR_np_call_localret_ent(io__error_message_2_0,
		read_profile__read_deep_byte_3_0_i7);
MR_def_label(read_profile__read_deep_byte_3_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(1);
	}
MR_def_label(read_profile__read_deep_byte_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr1, 0) = MR_tfield(1, MR_r1, 0);
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(1);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(mdbcomp__program_representation__is_proclabel_kind_2_0);

MR_BEGIN_MODULE(read_profile_module31)
	MR_init_entry1(read_profile__read_proc_id_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__read_profile__read_proc_id_3_0);
	MR_init_label8(read_profile__read_proc_id_3_0,2,7,10,19,5,22,23,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'read_proc_id'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(read_profile__read_proc_id_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(read_profile__read_deep_byte_3_0,
		read_profile__read_proc_id_3_0_i2);
MR_def_label(read_profile__read_proc_id_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TEST(MR_r1,1)) {
		MR_GOTO_LAB(read_profile__read_proc_id_3_0_i3);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(0, MR_r1, 0);
	MR_sv(1) = MR_tempr1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(mdbcomp__program_representation__is_proclabel_kind_2_0,
		read_profile__read_proc_id_3_0_i7);
MR_def_label(read_profile__read_proc_id_3_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(read_profile__read_proc_id_3_0_i5);
	}
	if (((MR_Integer) MR_r2 != ((MR_Integer) MR_proclabel_special))) {
		MR_GOTO_LAB(read_profile__read_proc_id_3_0_i10);
	}
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = MR_r1;
	MR_r3 = MR_r1;
	MR_r4 = MR_r1;
	MR_r5 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r6 = MR_r5;
	MR_r7 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__program_representation, string_proc_label);
	MR_r8 = (MR_Word) MR_TAG_COMMON(0,6,34);
	MR_r9 = (MR_Word) MR_TAG_COMMON(0,6,35);
	MR_r10 = (MR_Word) MR_TAG_COMMON(0,6,36);
	MR_r11 = (MR_Word) MR_TAG_COMMON(0,6,37);
	MR_r12 = (MR_Word) MR_TAG_COMMON(0,6,38);
	MR_r13 = (MR_Word) MR_TAG_COMMON(0,6,39);
	MR_r14 = (MR_Word) MR_TAG_COMMON(0,6,40);
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(io_combinator__maybe_error_sequence_6_10_0);
MR_def_label(read_profile__read_proc_id_3_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) MR_r2 != ((MR_Integer) MR_proclabel_user_function))) {
		MR_GOTO_LAB(read_profile__read_proc_id_3_0_i19);
	}
	MR_r1 = (MR_Integer) 1;
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(read_profile__read_proc_id_user_defined_4_0);
MR_def_label(read_profile__read_proc_id_3_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(read_profile__read_proc_id_user_defined_4_0);
MR_def_label(read_profile__read_proc_id_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		read_profile__read_proc_id_3_0_i22);
MR_def_label(read_profile__read_proc_id_3_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("unexpected proclabel_kind ", 26);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		read_profile__read_proc_id_3_0_i23);
MR_def_label(read_profile__read_proc_id_3_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_r1 = MR_tempr1;
	}
MR_def_label(read_profile__read_proc_id_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(2);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(read_profile_module32)
	MR_init_entry1(read_profile__read_coverage_point_static_and_num_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__read_profile__read_coverage_point_static_and_num_3_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'read_coverage_point_static_and_num'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(read_profile__read_coverage_point_static_and_num_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__program_representation, coverage_point_info);
	MR_r2 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,17,0);
	MR_r4 = (MR_Word) MR_TAG_COMMON(0,6,41);
	MR_r5 = (MR_Word) MR_TAG_COMMON(0,6,42);
	MR_r6 = (MR_Word) MR_TAG_COMMON(0,6,43);
	MR_np_tailcall_ent(io_combinator__maybe_error_sequence_2_6_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

extern const MR_TypeCtorInfo_Struct mercury_data_mdbcomp__program_representation__type_ctor_info_cp_type_0;

MR_BEGIN_MODULE(read_profile_module33)
	MR_init_entry1(read_profile__read_coverage_point_static_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__read_profile__read_coverage_point_static_3_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'read_coverage_point_static'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(read_profile__read_coverage_point_static_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__program_representation, cp_type);
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__program_representation, coverage_point_info);
	MR_r4 = (MR_Word) MR_TAG_COMMON(0,6,44);
	MR_r5 = (MR_Word) MR_TAG_COMMON(0,6,45);
	MR_r6 = (MR_Word) MR_TAG_COMMON(0,6,46);
	MR_np_tailcall_ent(io_combinator__maybe_error_sequence_2_6_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(read_profile_module34)
	MR_init_entry1(read_profile__non_right_bracket_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__read_profile__non_right_bracket_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'non_right_bracket'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(read_profile__non_right_bracket_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = ((MR_Integer) MR_r1 != (MR_Integer) 93);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(io__putback_byte_3_0);

MR_BEGIN_MODULE(read_profile_module35)
	MR_init_entry1(read_profile__read_multi_call_site_csdis_2_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__read_profile__read_multi_call_site_csdis_2_4_0);
	MR_init_label6(read_profile__read_multi_call_site_csdis_2_4_0,25,2,5,8,9,28)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'read_multi_call_site_csdis_2'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(read_profile__read_multi_call_site_csdis_2_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
MR_def_label(read_profile__read_multi_call_site_csdis_2_4_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(read_profile__read_deep_byte_3_0,
		read_profile__read_multi_call_site_csdis_2_4_0_i2);
MR_def_label(read_profile__read_multi_call_site_csdis_2_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TEST(MR_r1,1)) {
		MR_GOTO_LAB(read_profile__read_multi_call_site_csdis_2_4_0_i28);
	}
	MR_r3 = MR_tfield(0, MR_r1, 0);
	if (MR_INT_NE(MR_r3,0)) {
		MR_GOTO_LAB(read_profile__read_multi_call_site_csdis_2_4_0_i5);
	}
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_r1, 0) = MR_sv(1);
	MR_decr_sp_and_return(2);
MR_def_label(read_profile__read_multi_call_site_csdis_2_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r3;
	MR_np_call_localret_ent(io__putback_byte_3_0,
		read_profile__read_multi_call_site_csdis_2_4_0_i8);
MR_def_label(read_profile__read_multi_call_site_csdis_2_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_np_call_localret_ent(read_profile__read_num_acc_4_0,
		read_profile__read_multi_call_site_csdis_2_4_0_i9);
MR_def_label(read_profile__read_multi_call_site_csdis_2_4_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TEST(MR_r1,1)) {
		MR_GOTO_LAB(read_profile__read_multi_call_site_csdis_2_4_0_i28);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_tfield(0, MR_r1, 0);
	MR_tfield(1, MR_tempr1, 1) = MR_sv(1);
	MR_r1 = MR_tempr1;
	MR_succip_word = MR_sv(2);
	MR_GOTO_LAB(read_profile__read_multi_call_site_csdis_2_4_0_i25);
	}
MR_def_label(read_profile__read_multi_call_site_csdis_2_4_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(2);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(read_profile_module36)
	MR_init_entry1(read_profile__read_multi_call_site_csdis_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__read_profile__read_multi_call_site_csdis_3_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'read_multi_call_site_csdis'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(read_profile__read_multi_call_site_csdis_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_np_tailcall_ent(read_profile__read_multi_call_site_csdis_2_4_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(profile__is_call_site_kind_2_0);

MR_BEGIN_MODULE(read_profile_module37)
	MR_init_entry1(read_profile__read_call_site_kind_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__read_profile__read_call_site_kind_3_0);
	MR_init_label6(read_profile__read_call_site_kind_3_0,2,7,5,10,11,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'read_call_site_kind'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(read_profile__read_call_site_kind_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(read_profile__read_deep_byte_3_0,
		read_profile__read_call_site_kind_3_0_i2);
MR_def_label(read_profile__read_call_site_kind_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TEST(MR_r1,1)) {
		MR_GOTO_LAB(read_profile__read_call_site_kind_3_0_i3);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(0, MR_r1, 0);
	MR_sv(1) = MR_tempr1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(profile__is_call_site_kind_2_0,
		read_profile__read_call_site_kind_3_0_i7);
MR_def_label(read_profile__read_call_site_kind_3_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(read_profile__read_call_site_kind_3_0_i5);
	}
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_r1, 0) = MR_r2;
	MR_decr_sp_and_return(2);
MR_def_label(read_profile__read_call_site_kind_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		read_profile__read_call_site_kind_3_0_i10);
MR_def_label(read_profile__read_call_site_kind_3_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("unexpected call_site_kind ", 26);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		read_profile__read_call_site_kind_3_0_i11);
MR_def_label(read_profile__read_call_site_kind_3_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_r1 = MR_tempr1;
	}
MR_def_label(read_profile__read_call_site_kind_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(2);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(read_profile_module38)
	MR_init_entry1(fn__read_profile__make_csdptr_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__read_profile__make_csdptr_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'make_csdptr'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__read_profile__make_csdptr_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

extern const MR_TypeCtorInfo_Struct mercury_data_profile__type_ctor_info_call_site_dynamic_ptr_0;

MR_BEGIN_MODULE(read_profile_module39)
	MR_init_entry1(read_profile__read_call_site_slot_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__read_profile__read_call_site_slot_3_0);
	MR_init_label10(read_profile__read_call_site_slot_3_0,2,7,11,12,6,16,15,25,29,30)
	MR_init_label8(read_profile__read_call_site_slot_3_0,24,34,37,33,40,44,45,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'read_call_site_slot'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(read_profile__read_call_site_slot_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(read_profile__read_call_site_kind_3_0,
		read_profile__read_call_site_slot_3_0_i2);
MR_def_label(read_profile__read_call_site_slot_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TEST(MR_r1,1)) {
		MR_GOTO_LAB(read_profile__read_call_site_slot_3_0_i3);
	}
	MR_r3 = MR_tfield(0, MR_r1, 0);
	if (((MR_Integer) MR_r3 != ((MR_Integer) MR_callsite_callback))) {
		MR_GOTO_LAB(read_profile__read_call_site_slot_3_0_i6);
	}
	MR_np_call_localret_ent(read_profile__read_multi_call_site_csdis_3_0,
		read_profile__read_call_site_slot_3_0_i7);
MR_def_label(read_profile__read_call_site_slot_3_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TEST(MR_r1,1)) {
		MR_GOTO_LAB(read_profile__read_call_site_slot_3_0_i3);
	}
	MR_sv(1) = (MR_Word) MR_CTOR0_ADDR(profile, call_site_dynamic_ptr);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = MR_sv(1);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,6,47);
	MR_r4 = MR_tfield(0, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(fn__list__map_2_0,
		read_profile__read_call_site_slot_3_0_i11);
MR_def_label(read_profile__read_call_site_slot_3_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__array__array_1_0,
		read_profile__read_call_site_slot_3_0_i12);
MR_def_label(read_profile__read_call_site_slot_3_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = (MR_Integer) 1;
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_r1, 0) = MR_tempr1;
	MR_decr_sp_and_return(2);
	}
MR_def_label(read_profile__read_call_site_slot_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) MR_r3 != ((MR_Integer) MR_callsite_higher_order_call))) {
		MR_GOTO_LAB(read_profile__read_call_site_slot_3_0_i15);
	}
	MR_np_call_localret_ent(read_profile__read_multi_call_site_csdis_3_0,
		read_profile__read_call_site_slot_3_0_i16);
MR_def_label(read_profile__read_call_site_slot_3_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TEST(MR_r1,1)) {
		MR_GOTO_LAB(read_profile__read_call_site_slot_3_0_i3);
	}
	MR_sv(1) = (MR_Word) MR_CTOR0_ADDR(profile, call_site_dynamic_ptr);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = MR_sv(1);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,6,48);
	MR_r4 = MR_tfield(0, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(fn__list__map_2_0,
		read_profile__read_call_site_slot_3_0_i29);
MR_def_label(read_profile__read_call_site_slot_3_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) MR_r3 != ((MR_Integer) MR_callsite_method_call))) {
		MR_GOTO_LAB(read_profile__read_call_site_slot_3_0_i24);
	}
	MR_np_call_localret_ent(read_profile__read_multi_call_site_csdis_3_0,
		read_profile__read_call_site_slot_3_0_i25);
MR_def_label(read_profile__read_call_site_slot_3_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TEST(MR_r1,1)) {
		MR_GOTO_LAB(read_profile__read_call_site_slot_3_0_i3);
	}
	MR_sv(1) = (MR_Word) MR_CTOR0_ADDR(profile, call_site_dynamic_ptr);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = MR_sv(1);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,6,49);
	MR_r4 = MR_tfield(0, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(fn__list__map_2_0,
		read_profile__read_call_site_slot_3_0_i29);
MR_def_label(read_profile__read_call_site_slot_3_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__array__array_1_0,
		read_profile__read_call_site_slot_3_0_i30);
MR_def_label(read_profile__read_call_site_slot_3_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = (MR_Integer) 0;
	MR_tfield(1, MR_r2, 1) = MR_r1;
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_r1, 0) = MR_r2;
	MR_decr_sp_and_return(2);
MR_def_label(read_profile__read_call_site_slot_3_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) MR_r3 != ((MR_Integer) MR_callsite_normal_call))) {
		MR_GOTO_LAB(read_profile__read_call_site_slot_3_0_i33);
	}
	MR_np_call_localret_ent(f_114_101_97_100_95_112_114_111_102_105_108_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_100_95_112_116_114_95_95_91_49_93_95_48_4_0,
		read_profile__read_call_site_slot_3_0_i34);
MR_def_label(read_profile__read_call_site_slot_3_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TEST(MR_r1,1)) {
		MR_GOTO_LAB(read_profile__read_call_site_slot_3_0_i3);
	}
	MR_r1 = MR_tfield(0, MR_r1, 0);
	MR_np_call_localret_ent(fn__read_profile__make_csdptr_1_0,
		read_profile__read_call_site_slot_3_0_i37);
MR_def_label(read_profile__read_call_site_slot_3_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 1);
	MR_tfield(0, MR_r2, 0) = MR_r1;
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_r1, 0) = MR_r2;
	MR_decr_sp_and_return(2);
MR_def_label(read_profile__read_call_site_slot_3_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(read_profile__read_multi_call_site_csdis_3_0,
		read_profile__read_call_site_slot_3_0_i40);
MR_def_label(read_profile__read_call_site_slot_3_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TEST(MR_r1,1)) {
		MR_GOTO_LAB(read_profile__read_call_site_slot_3_0_i3);
	}
	MR_sv(1) = (MR_Word) MR_CTOR0_ADDR(profile, call_site_dynamic_ptr);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = MR_sv(1);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,6,50);
	MR_r4 = MR_tfield(0, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(fn__list__map_2_0,
		read_profile__read_call_site_slot_3_0_i44);
MR_def_label(read_profile__read_call_site_slot_3_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__array__array_1_0,
		read_profile__read_call_site_slot_3_0_i45);
MR_def_label(read_profile__read_call_site_slot_3_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = (MR_Integer) 1;
	MR_tfield(1, MR_r2, 1) = MR_r1;
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_r1, 0) = MR_r2;
MR_def_label(read_profile__read_call_site_slot_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(2);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(read_profile_module40)
	MR_init_entry1(read_profile__read_n_bytes_acc_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__read_profile__read_n_bytes_acc_5_0);
	MR_init_label4(read_profile__read_n_bytes_acc_5_0,17,2,4,20)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'read_n_bytes_acc'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(read_profile__read_n_bytes_acc_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
MR_def_label(read_profile__read_n_bytes_acc_5_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_GT(MR_r1,0)) {
		MR_GOTO_LAB(read_profile__read_n_bytes_acc_5_0_i2);
	}
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_r1, 0) = MR_r2;
	MR_decr_sp_and_return(3);
MR_def_label(read_profile__read_n_bytes_acc_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_np_call_localret_ent(read_profile__read_deep_byte_3_0,
		read_profile__read_n_bytes_acc_5_0_i4);
MR_def_label(read_profile__read_n_bytes_acc_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TEST(MR_r1,1)) {
		MR_GOTO_LAB(read_profile__read_n_bytes_acc_5_0_i20);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_tfield(0, MR_r1, 0);
	MR_tfield(1, MR_tempr1, 1) = MR_sv(2);
	MR_r1 = ((MR_Integer) MR_sv(1) - (MR_Integer) 1);
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(3);
	MR_GOTO_LAB(read_profile__read_n_bytes_acc_5_0_i17);
	}
MR_def_label(read_profile__read_n_bytes_acc_5_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(list__map_3_2);

MR_BEGIN_MODULE(read_profile_module41)
	MR_init_entry1(read_profile__read_string_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__read_profile__read_string_3_0);
	MR_init_label8(read_profile__read_string_3_0,2,5,8,11,14,16,12,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'read_string'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(read_profile__read_string_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_r1 = (MR_Integer) 0;
	MR_np_call_localret_ent(read_profile__read_num_acc_4_0,
		read_profile__read_string_3_0_i2);
MR_def_label(read_profile__read_string_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TEST(MR_r1,1)) {
		MR_GOTO_LAB(read_profile__read_string_3_0_i3);
	}
	MR_r3 = MR_tfield(0, MR_r1, 0);
	if (MR_INT_NE(MR_r3,0)) {
		MR_GOTO_LAB(read_profile__read_string_3_0_i5);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,3);
	MR_decr_sp_and_return(1);
MR_def_label(read_profile__read_string_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r3;
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_np_call_localret_ent(read_profile__read_n_bytes_acc_5_0,
		read_profile__read_string_3_0_i8);
MR_def_label(read_profile__read_string_3_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TEST(MR_r1,1)) {
		MR_GOTO_LAB(read_profile__read_string_3_0_i3);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = MR_tfield(0, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(list__reverse_2_0,
		read_profile__read_string_3_0_i11);
MR_def_label(read_profile__read_string_3_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = (MR_Word) MR_CHAR_CTOR_ADDR;
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,6,51);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__map_3_2,
		read_profile__read_string_3_0_i14);
MR_def_label(read_profile__read_string_3_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(read_profile__read_string_3_0_i12);
	}
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(string__from_char_list_2_0,
		read_profile__read_string_3_0_i16);
MR_def_label(read_profile__read_string_3_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(1);
	}
MR_def_label(read_profile__read_string_3_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(1,0,4);
MR_def_label(read_profile__read_string_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(1);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(read_profile_module42)
	MR_init_entry1(read_profile__read_call_site_kind_and_callee_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__read_profile__read_call_site_kind_and_callee_3_0);
	MR_init_label10(read_profile__read_call_site_kind_and_callee_3_0,2,7,10,12,14,17,20,16,5,26)
	MR_init_label2(read_profile__read_call_site_kind_and_callee_3_0,27,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'read_call_site_kind_and_callee'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(read_profile__read_call_site_kind_and_callee_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(read_profile__read_deep_byte_3_0,
		read_profile__read_call_site_kind_and_callee_3_0_i2);
MR_def_label(read_profile__read_call_site_kind_and_callee_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TEST(MR_r1,1)) {
		MR_GOTO_LAB(read_profile__read_call_site_kind_and_callee_3_0_i3);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(0, MR_r1, 0);
	MR_sv(1) = MR_tempr1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(profile__is_call_site_kind_2_0,
		read_profile__read_call_site_kind_and_callee_3_0_i7);
MR_def_label(read_profile__read_call_site_kind_and_callee_3_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(read_profile__read_call_site_kind_and_callee_3_0_i5);
	}
	if (((MR_Integer) MR_r2 != ((MR_Integer) MR_callsite_callback))) {
		MR_GOTO_LAB(read_profile__read_call_site_kind_and_callee_3_0_i10);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,16,1);
	MR_decr_sp_and_return(2);
MR_def_label(read_profile__read_call_site_kind_and_callee_3_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) MR_r2 != ((MR_Integer) MR_callsite_higher_order_call))) {
		MR_GOTO_LAB(read_profile__read_call_site_kind_and_callee_3_0_i12);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,16,2);
	MR_decr_sp_and_return(2);
MR_def_label(read_profile__read_call_site_kind_and_callee_3_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) MR_r2 != ((MR_Integer) MR_callsite_method_call))) {
		MR_GOTO_LAB(read_profile__read_call_site_kind_and_callee_3_0_i14);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,16,3);
	MR_decr_sp_and_return(2);
MR_def_label(read_profile__read_call_site_kind_and_callee_3_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) MR_r2 != ((MR_Integer) MR_callsite_normal_call))) {
		MR_GOTO_LAB(read_profile__read_call_site_kind_and_callee_3_0_i16);
	}
	MR_r1 = (MR_Integer) 0;
	MR_np_call_localret_ent(read_profile__read_num_acc_4_0,
		read_profile__read_call_site_kind_and_callee_3_0_i17);
MR_def_label(read_profile__read_call_site_kind_and_callee_3_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TEST(MR_r1,1)) {
		MR_GOTO_LAB(read_profile__read_call_site_kind_and_callee_3_0_i3);
	}
	MR_sv(1) = MR_tfield(0, MR_r1, 0);
	MR_np_call_localret_ent(read_profile__read_string_3_0,
		read_profile__read_call_site_kind_and_callee_3_0_i20);
MR_def_label(read_profile__read_call_site_kind_and_callee_3_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TEST(MR_r1,1)) {
		MR_GOTO_LAB(read_profile__read_call_site_kind_and_callee_3_0_i3);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = MR_tfield(0, MR_r1, 0);
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_r1, 0) = MR_tempr1;
	MR_decr_sp_and_return(2);
	}
MR_def_label(read_profile__read_call_site_kind_and_callee_3_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,16,0);
	MR_decr_sp_and_return(2);
MR_def_label(read_profile__read_call_site_kind_and_callee_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		read_profile__read_call_site_kind_and_callee_3_0_i26);
MR_def_label(read_profile__read_call_site_kind_and_callee_3_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("unexpected call_site_kind ", 26);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		read_profile__read_call_site_kind_and_callee_3_0_i27);
MR_def_label(read_profile__read_call_site_kind_and_callee_3_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_r1 = MR_tempr1;
	}
MR_def_label(read_profile__read_call_site_kind_and_callee_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(2);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(read_profile_module43)
	MR_init_entry1(read_profile__num_to_cp_type_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__read_profile__num_to_cp_type_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'num_to_cp_type'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(read_profile__num_to_cp_type_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Integer	Int;
	MR_Word	CPType;
#define	MR_PROC_LABEL	mercury__read_profile__num_to_cp_type_2_0
	Int = MR_r1;
{
#line 1363 "read_profile.m"

    CPType = Int;
;}
#line 7582 "read_profile.c"
	MR_r1 = CPType;
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(read_profile_module44)
	MR_init_entry1(read_profile__read_cp_type_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__read_profile__read_cp_type_3_0);
	MR_init_label2(read_profile__read_cp_type_3_0,2,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'read_cp_type'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(read_profile__read_cp_type_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_r1 = (MR_Integer) 0;
	MR_np_call_localret_ent(read_profile__read_num_acc_4_0,
		read_profile__read_cp_type_3_0_i2);
MR_def_label(read_profile__read_cp_type_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TEST(MR_r1,1)) {
		MR_GOTO_LAB(read_profile__read_cp_type_3_0_i3);
	}
	MR_r3 = MR_tfield(0, MR_r1, 0);
	{
	MR_Integer	Int;
	MR_Word	CPType;
#define	MR_PROC_LABEL	mercury__read_profile__read_cp_type_3_0
	Int = MR_r3;
{
#line 1363 "read_profile.m"

    CPType = Int;
;}
#line 7629 "read_profile.c"
	MR_r3 = CPType;
#undef	MR_PROC_LABEL
	}
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_r1, 0) = MR_r3;
MR_def_label(read_profile__read_cp_type_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(1);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(read_profile_module45)
	MR_init_entry1(read_profile__read_fixed_size_int_acc_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__read_profile__read_fixed_size_int_acc_6_0);
	MR_init_label5(read_profile__read_fixed_size_int_acc_6_0,17,2,4,7,20)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'read_fixed_size_int_acc'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(read_profile__read_fixed_size_int_acc_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
MR_def_label(read_profile__read_fixed_size_int_acc_6_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_GT(MR_r1,0)) {
		MR_GOTO_LAB(read_profile__read_fixed_size_int_acc_6_0_i2);
	}
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_r1, 0) = MR_r2;
	MR_decr_sp_and_return(4);
MR_def_label(read_profile__read_fixed_size_int_acc_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_np_call_localret_ent(read_profile__read_deep_byte_3_0,
		read_profile__read_fixed_size_int_acc_6_0_i4);
MR_def_label(read_profile__read_fixed_size_int_acc_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TEST(MR_r1,1)) {
		MR_GOTO_LAB(read_profile__read_fixed_size_int_acc_6_0_i20);
	}
	MR_r1 = MR_tfield(0, MR_r1, 0);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(fn__f_105_110_116_95_95_60_60_2_0,
		read_profile__read_fixed_size_int_acc_6_0_i7);
MR_def_label(read_profile__read_fixed_size_int_acc_6_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = ((MR_Integer) MR_sv(1) - (MR_Integer) 1);
	MR_r2 = ((MR_Integer) MR_sv(2) | (MR_Integer) MR_tempr1);
	MR_r3 = ((MR_Integer) MR_sv(3) + (MR_Integer) 8);
	MR_succip_word = MR_sv(4);
	MR_GOTO_LAB(read_profile__read_fixed_size_int_acc_6_0_i17);
	}
MR_def_label(read_profile__read_fixed_size_int_acc_6_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(4);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(read_profile_module46)
	MR_init_entry1(read_profile__read_fixed_size_int_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__read_profile__read_fixed_size_int_3_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'read_fixed_size_int'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(read_profile__read_fixed_size_int_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 8;
	MR_r2 = (MR_Integer) 0;
	MR_r3 = (MR_Integer) 0;
	MR_np_tailcall_ent(read_profile__read_fixed_size_int_acc_6_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(read_profile_module47)
	MR_init_entry1(fn__read_profile__make_cssptr_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__read_profile__make_cssptr_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'make_cssptr'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__read_profile__make_cssptr_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(builtin__unify_2_0);

MR_BEGIN_MODULE(read_profile_module48)
	MR_init_entry1(__Unify___read_profile__maybe_error2_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___read_profile__maybe_error2_2_0);
	MR_init_label4(__Unify___read_profile__maybe_error2_2_0,16,5,8,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___read_profile__maybe_error2_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r3 == MR_r4)) {
		MR_GOTO_LAB(__Unify___read_profile__maybe_error2_2_0_i16);
	}
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r3;
	MR_sv(1) = MR_tempr1;
	MR_tempr2 = MR_r4;
	MR_sv(2) = MR_tempr2;
	MR_sv(3) = MR_r1;
	MR_sv(4) = MR_r2;
	if (MR_PTAG_TESTR(MR_tempr1,1)) {
		MR_GOTO_LAB(__Unify___read_profile__maybe_error2_2_0_i5);
	}
	if (MR_PTAG_TESTR(MR_tempr2,1)) {
		MR_GOTO_LAB(__Unify___read_profile__maybe_error2_2_0_i1);
	}
	MR_r1 = MR_tfield(1, MR_tempr1, 0);
	MR_r2 = MR_tfield(1, MR_tempr2, 0);
	MR_r1 = (strcmp((char *) (MR_Word *) MR_r1, (char *) (MR_Word *) MR_r2) == 0);
	MR_decr_sp(5);
	MR_proceed();
	}
MR_def_label(__Unify___read_profile__maybe_error2_2_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___read_profile__maybe_error2_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),0)) {
		MR_GOTO_LAB(__Unify___read_profile__maybe_error2_2_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_tfield(0, MR_tempr1, 1);
	MR_tempr2 = MR_sv(2);
	MR_sv(2) = MR_tfield(0, MR_tempr2, 1);
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tfield(0, MR_tempr1, 0);
	MR_r3 = MR_tfield(0, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(builtin__unify_2_0,
		__Unify___read_profile__maybe_error2_2_0_i8);
MR_def_label(__Unify___read_profile__maybe_error2_2_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___read_profile__maybe_error2_2_0_i1);
	}
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(builtin__unify_2_0);
MR_def_label(__Unify___read_profile__maybe_error2_2_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(private_builtin__builtin_compare_string_3_0);
MR_decl_entry(builtin__compare_3_0);

MR_BEGIN_MODULE(read_profile_module49)
	MR_init_entry1(__Compare___read_profile__maybe_error2_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___read_profile__maybe_error2_2_0);
	MR_init_label7(__Compare___read_profile__maybe_error2_2_0,3,2,7,5,10,12,45)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___read_profile__maybe_error2_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r3 == MR_r4)) {
		MR_GOTO_LAB(__Compare___read_profile__maybe_error2_2_0_i3);
	}
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r4;
	MR_sv(3) = MR_r1;
	MR_sv(4) = MR_r2;
	MR_GOTO_LAB(__Compare___read_profile__maybe_error2_2_0_i2);
MR_def_label(__Compare___read_profile__maybe_error2_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___read_profile__maybe_error2_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),1)) {
		MR_GOTO_LAB(__Compare___read_profile__maybe_error2_2_0_i5);
	}
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Compare___read_profile__maybe_error2_2_0_i7);
	}
	MR_r1 = MR_tfield(1, MR_sv(1), 0);
	MR_r2 = MR_tfield(1, MR_sv(2), 0);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(private_builtin__builtin_compare_string_3_0);
MR_def_label(__Compare___read_profile__maybe_error2_2_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(5);
MR_def_label(__Compare___read_profile__maybe_error2_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Compare___read_profile__maybe_error2_2_0_i10);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(5);
MR_def_label(__Compare___read_profile__maybe_error2_2_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(1);
	MR_tempr1 = MR_tfield(0, MR_tempr5, 1);
	MR_tempr6 = MR_sv(2);
	MR_tempr2 = MR_tfield(0, MR_tempr6, 1);
	MR_tempr3 = MR_tempr5;
	MR_sv(1) = MR_tempr2;
	MR_tempr4 = MR_tempr6;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tfield(0, MR_tempr3, 0);
	MR_r3 = MR_tfield(0, MR_tempr4, 0);
	}
	MR_np_call_localret_ent(builtin__compare_3_0,
		__Compare___read_profile__maybe_error2_2_0_i12);
MR_def_label(__Compare___read_profile__maybe_error2_2_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___read_profile__maybe_error2_2_0_i45);
	}
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(1);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(builtin__compare_3_0);
MR_def_label(__Compare___read_profile__maybe_error2_2_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___profile__initial_deep_0_0);

MR_BEGIN_MODULE(read_profile_module50)
	MR_init_entry1(__Unify___read_profile__maybe_init_deep_complete_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___read_profile__maybe_init_deep_complete_0_0);
	MR_init_label4(__Unify___read_profile__maybe_init_deep_complete_0_0,5,21,7,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___read_profile__maybe_init_deep_complete_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___read_profile__maybe_init_deep_complete_0_0_i21);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_tempr1;
	MR_tempr2 = MR_r2;
	MR_sv(2) = MR_tempr2;
	if (MR_PTAG_TESTR(MR_tempr1,2)) {
		MR_GOTO_LAB(__Unify___read_profile__maybe_init_deep_complete_0_0_i5);
	}
	if (MR_PTAG_TESTR(MR_tempr2,2)) {
		MR_GOTO_LAB(__Unify___read_profile__maybe_init_deep_complete_0_0_i1);
	}
	MR_r1 = MR_tfield(2, MR_tempr1, 0);
	MR_r2 = MR_tfield(2, MR_tempr2, 0);
	MR_r1 = (strcmp((char *) (MR_Word *) MR_r1, (char *) (MR_Word *) MR_r2) == 0);
	MR_decr_sp(3);
	MR_proceed();
	}
MR_def_label(__Unify___read_profile__maybe_init_deep_complete_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),0)) {
		MR_GOTO_LAB(__Unify___read_profile__maybe_init_deep_complete_0_0_i7);
	}
	if (MR_PTAG_TESTR(MR_sv(2),0)) {
		MR_GOTO_LAB(__Unify___read_profile__maybe_init_deep_complete_0_0_i1);
	}
	MR_r1 = MR_body((MR_Integer) MR_sv(1), (MR_Integer) 0);
	MR_r2 = MR_body((MR_Integer) MR_sv(2), (MR_Integer) 0);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Unify___profile__initial_deep_0_0);
MR_def_label(__Unify___read_profile__maybe_init_deep_complete_0_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___read_profile__maybe_init_deep_complete_0_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Unify___read_profile__maybe_init_deep_complete_0_0_i1);
	}
	MR_r1 = MR_body((MR_Integer) MR_sv(1), (MR_Integer) 1);
	MR_r2 = MR_body((MR_Integer) MR_sv(2), (MR_Integer) 1);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Unify___profile__initial_deep_0_0);
MR_def_label(__Unify___read_profile__maybe_init_deep_complete_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Compare___profile__initial_deep_0_0);

MR_BEGIN_MODULE(read_profile_module51)
	MR_init_entry1(__Compare___read_profile__maybe_init_deep_complete_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___read_profile__maybe_init_deep_complete_0_0);
	MR_init_label10(__Compare___read_profile__maybe_init_deep_complete_0_0,3,2,7,5,12,10,27,16,28,17)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___read_profile__maybe_init_deep_complete_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___read_profile__maybe_init_deep_complete_0_0_i3);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___read_profile__maybe_init_deep_complete_0_0_i2);
MR_def_label(__Compare___read_profile__maybe_init_deep_complete_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___read_profile__maybe_init_deep_complete_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),2)) {
		MR_GOTO_LAB(__Compare___read_profile__maybe_init_deep_complete_0_0_i5);
	}
	if (MR_PTAG_TESTR(MR_sv(2),2)) {
		MR_GOTO_LAB(__Compare___read_profile__maybe_init_deep_complete_0_0_i7);
	}
	MR_r1 = MR_tfield(2, MR_sv(1), 0);
	MR_r2 = MR_tfield(2, MR_sv(2), 0);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(private_builtin__builtin_compare_string_3_0);
MR_def_label(__Compare___read_profile__maybe_init_deep_complete_0_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),0)) {
		MR_GOTO_LAB(__Compare___read_profile__maybe_init_deep_complete_0_0_i28);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___read_profile__maybe_init_deep_complete_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),0)) {
		MR_GOTO_LAB(__Compare___read_profile__maybe_init_deep_complete_0_0_i10);
	}
	if (MR_PTAG_TESTR(MR_sv(2),2)) {
		MR_GOTO_LAB(__Compare___read_profile__maybe_init_deep_complete_0_0_i12);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___read_profile__maybe_init_deep_complete_0_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),0)) {
		MR_GOTO_LAB(__Compare___read_profile__maybe_init_deep_complete_0_0_i27);
	}
	MR_r1 = MR_body((MR_Integer) MR_sv(1), (MR_Integer) 0);
	MR_r2 = MR_body((MR_Integer) MR_sv(2), (MR_Integer) 0);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Compare___profile__initial_deep_0_0);
MR_def_label(__Compare___read_profile__maybe_init_deep_complete_0_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),2)) {
		MR_GOTO_LAB(__Compare___read_profile__maybe_init_deep_complete_0_0_i16);
	}
MR_def_label(__Compare___read_profile__maybe_init_deep_complete_0_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___read_profile__maybe_init_deep_complete_0_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),0)) {
		MR_GOTO_LAB(__Compare___read_profile__maybe_init_deep_complete_0_0_i17);
	}
MR_def_label(__Compare___read_profile__maybe_init_deep_complete_0_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___read_profile__maybe_init_deep_complete_0_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_body((MR_Integer) MR_sv(1), (MR_Integer) 1);
	MR_r2 = MR_body((MR_Integer) MR_sv(2), (MR_Integer) 1);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Compare___profile__initial_deep_0_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(read_profile_module52)
	MR_init_entry1(__Unify___read_profile__next_deep_item_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___read_profile__next_deep_item_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___read_profile__next_deep_item_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_r1 == MR_r2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(private_builtin__builtin_compare_int_3_0);

MR_BEGIN_MODULE(read_profile_module53)
	MR_init_entry1(__Compare___read_profile__next_deep_item_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___read_profile__next_deep_item_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___read_profile__next_deep_item_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(read_profile_module54)
	MR_init_entry1(__Unify___read_profile__ptr_kind_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___read_profile__ptr_kind_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___read_profile__ptr_kind_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_r1 == MR_r2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(read_profile_module55)
	MR_init_entry1(__Compare___read_profile__ptr_kind_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___read_profile__ptr_kind_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___read_profile__ptr_kind_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(mdbcomp__goal_path__rev_goal_path_from_string_det_2_0);
MR_decl_entry(mdbcomp__goal_path__rev_goal_path_remove_type_info_2_0);

MR_BEGIN_MODULE(read_profile_module56)
	MR_init_entry1(read_profile__IntroducedFrom__pred__read_call_site_static__435__1_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__read_profile__IntroducedFrom__pred__read_call_site_static__435__1_5_0);
	MR_init_label2(read_profile__IntroducedFrom__pred__read_call_site_static__435__1_5_0,2,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__pred__read_call_site_static__435__1'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(read_profile__IntroducedFrom__pred__read_call_site_static__435__1_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = (MR_Integer) -1;
	MR_sv(2) = MR_r1;
	MR_sv(3) = MR_r2;
	MR_sv(4) = MR_r3;
	MR_r1 = MR_r4;
	MR_np_call_localret_ent(mdbcomp__goal_path__rev_goal_path_from_string_det_2_0,
		read_profile__IntroducedFrom__pred__read_call_site_static__435__1_5_0_i2);
MR_def_label(read_profile__IntroducedFrom__pred__read_call_site_static__435__1_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(mdbcomp__goal_path__rev_goal_path_remove_type_info_2_0,
		read_profile__IntroducedFrom__pred__read_call_site_static__435__1_5_0_i3);
MR_def_label(read_profile__IntroducedFrom__pred__read_call_site_static__435__1_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 5);
	MR_tfield(0, MR_r2, 0) = MR_sv(1);
	MR_tfield(0, MR_r2, 1) = (MR_Integer) -1;
	MR_tfield(0, MR_r2, 2) = MR_sv(3);
	MR_tfield(0, MR_r2, 3) = MR_sv(4);
	MR_tfield(0, MR_r2, 4) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_r2;
	MR_tfield(0, MR_tempr1, 1) = MR_sv(2);
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_r1, 0) = MR_tempr1;
	MR_decr_sp_and_return(5);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(read_profile_module57)
	MR_init_entry1(read_profile__IntroducedFrom__pred__read_proc_static__471__1_7_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__read_profile__IntroducedFrom__pred__read_proc_static__471__1_7_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__pred__read_proc_static__471__1'/7 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(read_profile__IntroducedFrom__pred__read_proc_static__471__1_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 6);
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tfield(0, MR_tempr1, 1) = MR_r2;
	MR_tfield(0, MR_tempr1, 2) = MR_r3;
	MR_tfield(0, MR_tempr1, 3) = MR_r4;
	MR_tfield(0, MR_tempr1, 4) = MR_r5;
	MR_tfield(0, MR_tempr1, 5) = MR_r6;
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_r1, 0) = MR_tempr1;
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(read_profile_module58)
	MR_init_entry1(fn__read_profile__IntroducedFrom__func__maybe_read_ps_coverage_points__577__1_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__read_profile__IntroducedFrom__func__maybe_read_ps_coverage_points__577__1_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__func__maybe_read_ps_coverage_points__577__1'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__read_profile__IntroducedFrom__func__maybe_read_ps_coverage_points__577__1_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = MR_tempr1;
	MR_np_tailcall_ent(fn__array__array_1_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(read_profile_module59)
	MR_init_entry1(read_profile__IntroducedFrom__pred__read_proc_id_uci_pred__644__1_7_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__read_profile__IntroducedFrom__pred__read_proc_id_uci_pred__644__1_7_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__pred__read_proc_id_uci_pred__644__1'/7 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(read_profile__IntroducedFrom__pred__read_proc_id_uci_pred__644__1_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 6);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = MR_r2;
	MR_tfield(1, MR_tempr1, 2) = MR_r3;
	MR_tfield(1, MR_tempr1, 3) = MR_r4;
	MR_tfield(1, MR_tempr1, 4) = MR_r5;
	MR_tfield(1, MR_tempr1, 5) = MR_r6;
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_r1, 0) = MR_tempr1;
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(read_profile_module60)
	MR_init_entry1(read_profile__IntroducedFrom__pred__read_proc_id_user_defined__663__1_7_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__read_profile__IntroducedFrom__pred__read_proc_id_user_defined__663__1_7_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__pred__read_proc_id_user_defined__663__1'/7 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(read_profile__IntroducedFrom__pred__read_proc_id_user_defined__663__1_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 6);
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tfield(0, MR_tempr1, 1) = MR_r2;
	MR_tfield(0, MR_tempr1, 2) = MR_r3;
	MR_tfield(0, MR_tempr1, 3) = MR_r4;
	MR_tfield(0, MR_tempr1, 4) = MR_r5;
	MR_tfield(0, MR_tempr1, 5) = MR_r6;
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_r1, 0) = MR_tempr1;
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(read_profile_module61)
	MR_init_entry1(read_profile__IntroducedFrom__pred__read_coverage_point_static_and_num__688__1_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__read_profile__IntroducedFrom__pred__read_coverage_point_static_and_num__688__1_3_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__pred__read_coverage_point_static_and_num__688__1'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(read_profile__IntroducedFrom__pred__read_coverage_point_static_and_num__688__1_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tfield(0, MR_tempr1, 1) = MR_r2;
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_r1, 0) = MR_tempr1;
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(read_profile_module62)
	MR_init_entry1(read_profile__IntroducedFrom__pred__read_coverage_point_static__704__1_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__read_profile__IntroducedFrom__pred__read_coverage_point_static__704__1_3_0);
	MR_init_label2(read_profile__IntroducedFrom__pred__read_coverage_point_static__704__1_3_0,2,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__pred__read_coverage_point_static__704__1'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(read_profile__IntroducedFrom__pred__read_coverage_point_static__704__1_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_np_call_localret_ent(mdbcomp__goal_path__rev_goal_path_from_string_det_2_0,
		read_profile__IntroducedFrom__pred__read_coverage_point_static__704__1_3_0_i2);
MR_def_label(read_profile__IntroducedFrom__pred__read_coverage_point_static__704__1_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(mdbcomp__goal_path__rev_goal_path_remove_type_info_2_0,
		read_profile__IntroducedFrom__pred__read_coverage_point_static__704__1_3_0_i3);
MR_def_label(read_profile__IntroducedFrom__pred__read_coverage_point_static__704__1_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 0) = MR_r1;
	MR_tfield(0, MR_r2, 1) = MR_sv(1);
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_r1, 0) = MR_r2;
	MR_decr_sp_and_return(2);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(read_profile_module63)
	MR_init_entry1(read_profile__IntroducedFrom__pred__read_proc_dynamic__887__1_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__read_profile__IntroducedFrom__pred__read_proc_dynamic__887__1_4_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__pred__read_proc_dynamic__887__1'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(read_profile__IntroducedFrom__pred__read_proc_dynamic__887__1_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tfield(0, MR_tempr1, 1) = MR_r2;
	MR_tfield(0, MR_tempr1, 2) = MR_r3;
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_r1, 0) = MR_tempr1;
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(read_profile_module64)
	MR_init_entry1(read_profile__IntroducedFrom__pred__read_proc_dynamic__897__1_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__read_profile__IntroducedFrom__pred__read_proc_dynamic__897__1_5_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__pred__read_proc_dynamic__897__1'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(read_profile__IntroducedFrom__pred__read_proc_dynamic__897__1_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(profile, call_site_array_slot);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	MR_np_tailcall_ent(read_profile__read_n_things_5_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(read_profile_module65)
	MR_init_entry1(read_profile__IntroducedFrom__pred__read_proc_dynamic__897__2_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__read_profile__IntroducedFrom__pred__read_proc_dynamic__897__2_3_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__pred__read_proc_dynamic__897__2'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(read_profile__IntroducedFrom__pred__read_proc_dynamic__897__2_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tfield(0, MR_tempr1, 1) = MR_r2;
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_r1, 0) = MR_tempr1;
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(read_profile_module66)
	MR_init_entry1(read_profile__IntroducedFrom__pred__read_n_byte_string__1317__1_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__read_profile__IntroducedFrom__pred__read_n_byte_string__1317__1_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__pred__read_n_byte_string__1317__1'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(read_profile__IntroducedFrom__pred__read_n_byte_string__1317__1_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(char__to_int_2_2);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(read_profile_module67)
	MR_init_entry1(read_profile__read_n_things__ho2_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__read_profile__read_n_things__ho2_5_0);
	MR_init_label3(read_profile__read_n_things__ho2_5_0,2,5,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'read_n_things__ho2'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(read_profile__read_n_things__ho2_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_np_call_localret_ent(read_profile__read_n_things__ho7_6_0,
		read_profile__read_n_things__ho2_5_0_i2);
MR_def_label(read_profile__read_n_things__ho2_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TEST(MR_r1,1)) {
		MR_GOTO_LAB(read_profile__read_n_things__ho2_5_0_i3);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__program_representation, coverage_point_info);
	MR_r2 = MR_tfield(0, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(list__reverse_2_0,
		read_profile__read_n_things__ho2_5_0_i5);
MR_def_label(read_profile__read_n_things__ho2_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_r1 = MR_tempr1;
	}
MR_def_label(read_profile__read_n_things__ho2_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(1);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(read_profile_module68)
	MR_init_entry1(read_profile__read_n_things__ho3_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__read_profile__read_n_things__ho3_5_0);
	MR_init_label3(read_profile__read_n_things__ho3_5_0,3,6,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'read_n_things__ho3'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(read_profile__read_n_things__ho3_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = (MR_Word) MR_TAG_COMMON(0,17,0);
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_np_call_localret_ent(read_profile__read_n_things__ho6_6_0,
		read_profile__read_n_things__ho3_5_0_i3);
MR_def_label(read_profile__read_n_things__ho3_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TEST(MR_r1,1)) {
		MR_GOTO_LAB(read_profile__read_n_things__ho3_5_0_i4);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tfield(0, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(list__reverse_2_0,
		read_profile__read_n_things__ho3_5_0_i6);
MR_def_label(read_profile__read_n_things__ho3_5_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_r1 = MR_tempr1;
	}
MR_def_label(read_profile__read_n_things__ho3_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(2);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(read_profile_module69)
	MR_init_entry1(read_profile__read_n_things__ho6_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__read_profile__read_n_things__ho6_6_0);
	MR_init_label4(read_profile__read_n_things__ho6_6_0,17,2,4,20)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'read_n_things__ho6'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(read_profile__read_n_things__ho6_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
MR_def_label(read_profile__read_n_things__ho6_6_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_GT(MR_r1,0)) {
		MR_GOTO_LAB(read_profile__read_n_things__ho6_6_0_i2);
	}
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_r1, 0) = MR_r2;
	MR_decr_sp_and_return(3);
MR_def_label(read_profile__read_n_things__ho6_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_np_call_localret_ent(read_profile__read_coverage_point_static_and_num_3_0,
		read_profile__read_n_things__ho6_6_0_i4);
MR_def_label(read_profile__read_n_things__ho6_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TEST(MR_r1,1)) {
		MR_GOTO_LAB(read_profile__read_n_things__ho6_6_0_i20);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_tfield(0, MR_r1, 0);
	MR_tfield(1, MR_tempr1, 1) = MR_sv(2);
	MR_r1 = ((MR_Integer) MR_sv(1) - (MR_Integer) 1);
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(3);
	MR_GOTO_LAB(read_profile__read_n_things__ho6_6_0_i17);
	}
MR_def_label(read_profile__read_n_things__ho6_6_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(read_profile_module70)
	MR_init_entry1(read_profile__read_n_things__ho7_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__read_profile__read_n_things__ho7_6_0);
	MR_init_label4(read_profile__read_n_things__ho7_6_0,26,2,7,29)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'read_n_things__ho7'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(read_profile__read_n_things__ho7_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
MR_def_label(read_profile__read_n_things__ho7_6_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_GT(MR_r1,0)) {
		MR_GOTO_LAB(read_profile__read_n_things__ho7_6_0_i2);
	}
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_r1, 0) = MR_r2;
	MR_decr_sp_and_return(3);
MR_def_label(read_profile__read_n_things__ho7_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__program_representation, cp_type);
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__program_representation, coverage_point_info);
	MR_r4 = (MR_Word) MR_TAG_COMMON(0,6,52);
	MR_r5 = (MR_Word) MR_TAG_COMMON(0,6,53);
	MR_r6 = (MR_Word) MR_TAG_COMMON(0,6,54);
	MR_np_call_localret_ent(io_combinator__maybe_error_sequence_2_6_0,
		read_profile__read_n_things__ho7_6_0_i7);
MR_def_label(read_profile__read_n_things__ho7_6_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TEST(MR_r1,1)) {
		MR_GOTO_LAB(read_profile__read_n_things__ho7_6_0_i29);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_tfield(0, MR_r1, 0);
	MR_tfield(1, MR_tempr1, 1) = MR_sv(2);
	MR_r1 = ((MR_Integer) MR_sv(1) - (MR_Integer) 1);
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(3);
	MR_GOTO_LAB(read_profile__read_n_things__ho7_6_0_i26);
	}
MR_def_label(read_profile__read_n_things__ho7_6_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(read_profile_module71)
	MR_init_entry1(read_profile__read_n_things__ho8_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__read_profile__read_n_things__ho8_6_0);
	MR_init_label4(read_profile__read_n_things__ho8_6_0,17,2,4,20)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'read_n_things__ho8'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(read_profile__read_n_things__ho8_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
MR_def_label(read_profile__read_n_things__ho8_6_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_GT(MR_r1,0)) {
		MR_GOTO_LAB(read_profile__read_n_things__ho8_6_0_i2);
	}
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_r1, 0) = MR_r2;
	MR_decr_sp_and_return(3);
MR_def_label(read_profile__read_n_things__ho8_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_r1 = (MR_Integer) 0;
	MR_np_call_localret_ent(read_profile__read_num_acc_4_0,
		read_profile__read_n_things__ho8_6_0_i4);
MR_def_label(read_profile__read_n_things__ho8_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TEST(MR_r1,1)) {
		MR_GOTO_LAB(read_profile__read_n_things__ho8_6_0_i20);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_tfield(0, MR_r1, 0);
	MR_tfield(1, MR_tempr1, 1) = MR_sv(2);
	MR_r1 = ((MR_Integer) MR_sv(1) - (MR_Integer) 1);
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(3);
	MR_GOTO_LAB(read_profile__read_n_things__ho8_6_0_i17);
	}
MR_def_label(read_profile__read_n_things__ho8_6_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_declare_entry(mercury__do_call_closure_1);

MR_BEGIN_MODULE(read_profile_module72)
	MR_init_entry1(f_114_101_97_100_95_112_114_111_102_105_108_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_100_95_110_95_116_104_105_110_103_115_95_95_91_49_93_95_48_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__f_114_101_97_100_95_112_114_111_102_105_108_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_100_95_110_95_116_104_105_110_103_115_95_95_91_49_93_95_48_6_0);
	MR_init_label4(f_114_101_97_100_95_112_114_111_102_105_108_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_100_95_110_95_116_104_105_110_103_115_95_95_91_49_93_95_48_6_0,17,2,4,20)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__pred__read_n_things__[1]_0'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(f_114_101_97_100_95_112_114_111_102_105_108_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_100_95_110_95_116_104_105_110_103_115_95_95_91_49_93_95_48_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
MR_def_label(f_114_101_97_100_95_112_114_111_102_105_108_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_100_95_110_95_116_104_105_110_103_115_95_95_91_49_93_95_48_6_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_GT(MR_r1,0)) {
		MR_GOTO_LAB(f_114_101_97_100_95_112_114_111_102_105_108_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_100_95_110_95_116_104_105_110_103_115_95_95_91_49_93_95_48_6_0_i2);
	}
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_r1, 0) = MR_r3;
	MR_decr_sp_and_return(4);
MR_def_label(f_114_101_97_100_95_112_114_111_102_105_108_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_100_95_110_95_116_104_105_110_103_115_95_95_91_49_93_95_48_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_r1 = MR_r2;
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(f_114_101_97_100_95_112_114_111_102_105_108_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_100_95_110_95_116_104_105_110_103_115_95_95_91_49_93_95_48_6_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_1),
		mercury__f_114_101_97_100_95_112_114_111_102_105_108_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_100_95_110_95_116_104_105_110_103_115_95_95_91_49_93_95_48_6_0_i4);
MR_def_label(f_114_101_97_100_95_112_114_111_102_105_108_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_100_95_110_95_116_104_105_110_103_115_95_95_91_49_93_95_48_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TEST(MR_r1,1)) {
		MR_GOTO_LAB(f_114_101_97_100_95_112_114_111_102_105_108_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_100_95_110_95_116_104_105_110_103_115_95_95_91_49_93_95_48_6_0_i20);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_tfield(0, MR_r1, 0);
	MR_tfield(1, MR_tempr1, 1) = MR_sv(3);
	MR_r1 = ((MR_Integer) MR_sv(1) - (MR_Integer) 1);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(4);
	MR_GOTO_LAB(f_114_101_97_100_95_112_114_111_102_105_108_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_100_95_110_95_116_104_105_110_103_115_95_95_91_49_93_95_48_6_0_i17);
	}
MR_def_label(f_114_101_97_100_95_112_114_111_102_105_108_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_100_95_110_95_116_104_105_110_103_115_95_95_91_49_93_95_48_6_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(4);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(read_profile_module73)
	MR_init_entry1(f_114_101_97_100_95_112_114_111_102_105_108_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_100_95_112_116_114_95_95_91_49_93_95_48_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__f_114_101_97_100_95_112_114_111_102_105_108_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_100_95_112_116_114_95_95_91_49_93_95_48_4_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__pred__read_ptr__[1]_0'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(f_114_101_97_100_95_112_114_111_102_105_108_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_100_95_112_116_114_95_95_91_49_93_95_48_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_np_tailcall_ent(read_profile__read_num_acc_4_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(read_profile_module74)
	MR_init_entry1(f_114_101_97_100_95_112_114_111_102_105_108_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_100_95_110_95_116_104_105_110_103_115_95_95_104_111_52_95_95_91_49_44_32_51_93_95_48_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__f_114_101_97_100_95_112_114_111_102_105_108_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_100_95_110_95_116_104_105_110_103_115_95_95_104_111_52_95_95_91_49_44_32_51_93_95_48_5_0);
	MR_init_label3(f_114_101_97_100_95_112_114_111_102_105_108_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_100_95_110_95_116_104_105_110_103_115_95_95_104_111_52_95_95_91_49_44_32_51_93_95_48_5_0,2,5,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__pred__read_n_things__ho4__[1, 3]_0'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(f_114_101_97_100_95_112_114_111_102_105_108_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_100_95_110_95_116_104_105_110_103_115_95_95_104_111_52_95_95_91_49_44_32_51_93_95_48_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_np_call_localret_ent(f_114_101_97_100_95_112_114_111_102_105_108_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_100_95_110_95_116_104_105_110_103_115_95_95_104_111_53_95_95_91_49_44_32_51_93_95_48_6_0,
		f_114_101_97_100_95_112_114_111_102_105_108_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_100_95_110_95_116_104_105_110_103_115_95_95_104_111_52_95_95_91_49_44_32_51_93_95_48_5_0_i2);
MR_def_label(f_114_101_97_100_95_112_114_111_102_105_108_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_100_95_110_95_116_104_105_110_103_115_95_95_104_111_52_95_95_91_49_44_32_51_93_95_48_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TEST(MR_r1,1)) {
		MR_GOTO_LAB(f_114_101_97_100_95_112_114_111_102_105_108_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_100_95_110_95_116_104_105_110_103_115_95_95_104_111_52_95_95_91_49_44_32_51_93_95_48_5_0_i3);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = MR_tfield(0, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(list__reverse_2_0,
		f_114_101_97_100_95_112_114_111_102_105_108_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_100_95_110_95_116_104_105_110_103_115_95_95_104_111_52_95_95_91_49_44_32_51_93_95_48_5_0_i5);
MR_def_label(f_114_101_97_100_95_112_114_111_102_105_108_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_100_95_110_95_116_104_105_110_103_115_95_95_104_111_52_95_95_91_49_44_32_51_93_95_48_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_r1 = MR_tempr1;
	}
MR_def_label(f_114_101_97_100_95_112_114_111_102_105_108_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_100_95_110_95_116_104_105_110_103_115_95_95_104_111_52_95_95_91_49_44_32_51_93_95_48_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(1);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(read_profile_module75)
	MR_init_entry1(f_114_101_97_100_95_112_114_111_102_105_108_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_100_95_110_95_116_104_105_110_103_115_95_95_104_111_53_95_95_91_49_44_32_51_93_95_48_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__f_114_101_97_100_95_112_114_111_102_105_108_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_100_95_110_95_116_104_105_110_103_115_95_95_104_111_53_95_95_91_49_44_32_51_93_95_48_6_0);
	MR_init_label4(f_114_101_97_100_95_112_114_111_102_105_108_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_100_95_110_95_116_104_105_110_103_115_95_95_104_111_53_95_95_91_49_44_32_51_93_95_48_6_0,17,2,4,20)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__pred__read_n_things__ho5__[1, 3]_0'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(f_114_101_97_100_95_112_114_111_102_105_108_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_100_95_110_95_116_104_105_110_103_115_95_95_104_111_53_95_95_91_49_44_32_51_93_95_48_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
MR_def_label(f_114_101_97_100_95_112_114_111_102_105_108_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_100_95_110_95_116_104_105_110_103_115_95_95_104_111_53_95_95_91_49_44_32_51_93_95_48_6_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_GT(MR_r1,0)) {
		MR_GOTO_LAB(f_114_101_97_100_95_112_114_111_102_105_108_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_100_95_110_95_116_104_105_110_103_115_95_95_104_111_53_95_95_91_49_44_32_51_93_95_48_6_0_i2);
	}
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_r1, 0) = MR_r2;
	MR_decr_sp_and_return(3);
MR_def_label(f_114_101_97_100_95_112_114_111_102_105_108_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_100_95_110_95_116_104_105_110_103_115_95_95_104_111_53_95_95_91_49_44_32_51_93_95_48_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_r1 = (MR_Integer) 0;
	MR_np_call_localret_ent(read_profile__read_num_acc_4_0,
		f_114_101_97_100_95_112_114_111_102_105_108_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_100_95_110_95_116_104_105_110_103_115_95_95_104_111_53_95_95_91_49_44_32_51_93_95_48_6_0_i4);
MR_def_label(f_114_101_97_100_95_112_114_111_102_105_108_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_100_95_110_95_116_104_105_110_103_115_95_95_104_111_53_95_95_91_49_44_32_51_93_95_48_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TEST(MR_r1,1)) {
		MR_GOTO_LAB(f_114_101_97_100_95_112_114_111_102_105_108_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_100_95_110_95_116_104_105_110_103_115_95_95_104_111_53_95_95_91_49_44_32_51_93_95_48_6_0_i20);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_tfield(0, MR_r1, 0);
	MR_tfield(1, MR_tempr1, 1) = MR_sv(2);
	MR_r1 = ((MR_Integer) MR_sv(1) - (MR_Integer) 1);
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(3);
	MR_GOTO_LAB(f_114_101_97_100_95_112_114_111_102_105_108_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_100_95_110_95_116_104_105_110_103_115_95_95_104_111_53_95_95_91_49_44_32_51_93_95_48_6_0_i17);
	}
MR_def_label(f_114_101_97_100_95_112_114_111_102_105_108_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_100_95_110_95_116_104_105_110_103_115_95_95_104_111_53_95_95_91_49_44_32_51_93_95_48_6_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

static void mercury__read_profile_maybe_bunch_0(void)
{
	read_profile_module0();
	read_profile_module1();
	read_profile_module2();
	read_profile_module3();
	read_profile_module4();
	read_profile_module5();
	read_profile_module6();
	read_profile_module7();
	read_profile_module8();
	read_profile_module9();
	read_profile_module10();
	read_profile_module11();
	read_profile_module12();
	read_profile_module13();
	read_profile_module14();
	read_profile_module15();
	read_profile_module16();
	read_profile_module17();
	read_profile_module18();
	read_profile_module19();
	read_profile_module20();
	read_profile_module21();
	read_profile_module22();
	read_profile_module23();
	read_profile_module24();
	read_profile_module25();
	read_profile_module26();
	read_profile_module27();
	read_profile_module28();
	read_profile_module29();
	read_profile_module30();
	read_profile_module31();
	read_profile_module32();
	read_profile_module33();
	read_profile_module34();
	read_profile_module35();
	read_profile_module36();
	read_profile_module37();
	read_profile_module38();
	read_profile_module39();
}

static void mercury__read_profile_maybe_bunch_1(void)
{
	read_profile_module40();
	read_profile_module41();
	read_profile_module42();
	read_profile_module43();
	read_profile_module44();
	read_profile_module45();
	read_profile_module46();
	read_profile_module47();
	read_profile_module48();
	read_profile_module49();
	read_profile_module50();
	read_profile_module51();
	read_profile_module52();
	read_profile_module53();
	read_profile_module54();
	read_profile_module55();
	read_profile_module56();
	read_profile_module57();
	read_profile_module58();
	read_profile_module59();
	read_profile_module60();
	read_profile_module61();
	read_profile_module62();
	read_profile_module63();
	read_profile_module64();
	read_profile_module65();
	read_profile_module66();
	read_profile_module67();
	read_profile_module68();
	read_profile_module69();
	read_profile_module70();
	read_profile_module71();
	read_profile_module72();
	read_profile_module73();
	read_profile_module74();
	read_profile_module75();
}

/* suppress gcc -Wmissing-decls warnings */
void mercury__read_profile__init(void);
void mercury__read_profile__init_type_tables(void);
void mercury__read_profile__init_debugger(void);
#ifdef MR_DEEP_PROFILING
void mercury__read_profile__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp);
#endif
#ifdef MR_RECORD_TERM_SIZES
void mercury__read_profile__init_complexity_procs(void);
#endif
#ifdef MR_THREADSCOPE
void mercury__read_profile__init_threadscope_string_table(void);
#endif

void mercury__read_profile__init(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	mercury__read_profile_maybe_bunch_0();
	mercury__read_profile_maybe_bunch_1();
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_read_profile__type_ctor_info_maybe_error2_2,
		read_profile__maybe_error2_2_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_read_profile__type_ctor_info_maybe_init_deep_complete_0,
		read_profile__maybe_init_deep_complete_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_read_profile__type_ctor_info_next_deep_item_0,
		read_profile__next_deep_item_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_read_profile__type_ctor_info_ptr_kind_0,
		read_profile__ptr_kind_0_0);
	mercury__read_profile__init_debugger();
}

void mercury__read_profile__init_type_tables(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	{
		MR_register_type_ctor_info(
		&mercury_data_read_profile__type_ctor_info_maybe_error2_2);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_read_profile__type_ctor_info_maybe_init_deep_complete_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_read_profile__type_ctor_info_next_deep_item_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_read_profile__type_ctor_info_ptr_kind_0);
	}
}


void mercury__read_profile__init_debugger(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}

#ifdef MR_DEEP_PROFILING

void mercury__read_profile__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp)
{
	MR_write_out_module_proc_reps_start(procrep_fp, &mercury_data__module_common_layout__read_profile);
	MR_write_out_module_proc_reps_end(procrep_fp);
}

#endif

#ifdef MR_RECORD_TERM_SIZES

void mercury__read_profile__init_complexity_procs(void)
{
}

#endif

#ifdef MR_THREADSCOPE

void mercury__read_profile__init_threadscope_string_table(void)
{
}

#endif

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;
