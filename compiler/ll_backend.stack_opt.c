/*
** Automatically generated from `stack_opt.m'
** by the Mercury compiler,
** version 11.07-beta-2011-12-16, configured for x86_64-unknown-linux-gnu.
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
INIT mercury__ll_backend__stack_opt__init
ENDINIT
*/

#define MR_ALLOW_RESET
#include "mercury_imp.h"
#line 526 "../library/io.int"
#include "io.mh"

#line 28 "ll_backend.stack_opt.c"
#line 536 "../library/io.int"
#include "time.mh"

#line 32 "ll_backend.stack_opt.c"
#line 537 "../library/io.int"
#include "string.mh"

#line 36 "ll_backend.stack_opt.c"
#line 33 "../library/array.int2"
#include "array.mh"

#line 40 "ll_backend.stack_opt.c"
#line 39 "../mdbcomp/mdbcomp.rtti_access.int2"
#include "mdbcomp.rtti_access.mh"

#line 44 "ll_backend.stack_opt.c"
#line 31 "../library/bitmap.int2"
#include "bitmap.mh"

#line 48 "ll_backend.stack_opt.c"
#line 49 "ll_backend.stack_opt.c"
#include "ll_backend.stack_opt.mh"

#line 52 "ll_backend.stack_opt.c"
#line 53 "ll_backend.stack_opt.c"
#ifndef LL_BACKEND__STACK_OPT_DECL_GUARD
#define LL_BACKEND__STACK_OPT_DECL_GUARD

#line 57 "ll_backend.stack_opt.c"
#line 58 "ll_backend.stack_opt.c"

#endif
#line 61 "ll_backend.stack_opt.c"

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
	MR_Word * f3[3];
};
MR_STATIC_LINKAGE const struct mercury_type_2 mercury_common_2[];

struct mercury_type_3 {
	MR_Word * f1;
	MR_Code * f2;
	MR_Integer f3;
};
MR_STATIC_LINKAGE const struct mercury_type_3 mercury_common_3[];

struct mercury_type_4 {
	MR_Integer f1;
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
	MR_Word * f3[10];
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
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[7];
};
MR_STATIC_LINKAGE const struct mercury_type_8 mercury_common_8[];

struct mercury_type_9 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[4];
};
MR_STATIC_LINKAGE const struct mercury_type_9 mercury_common_9[];

struct mercury_type_10 {
	MR_Word * f1;
	MR_Word * f2;
	MR_Integer f3;
	MR_Word * f4;
};
MR_STATIC_LINKAGE const struct mercury_type_10 mercury_common_10[];

struct mercury_type_11 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[8];
};
MR_STATIC_LINKAGE const struct mercury_type_11 mercury_common_11[];

extern const MR_BaseTypeclassInfo
	mercury_data_base_typeclass_info_ll_backend__live_vars__stack_alloc_info__arity1__ll_backend__stack_opt__opt_stack_alloc__arity0__[],
	mercury_data_base_typeclass_info_backend_libs__interval__build_interval_info_acc__arity1__ll_backend__stack_opt__stack_opt_info__arity0__[];

extern const MR_TypeCtorInfo_Struct
	mercury_data_ll_backend__stack_opt__type_ctor_info_all_paths_0,
	mercury_data_ll_backend__stack_opt__type_ctor_info_current_segment_first_flush_0,
	mercury_data_ll_backend__stack_opt__type_ctor_info_match_info_0,
	mercury_data_ll_backend__stack_opt__type_ctor_info_match_path_info_0,
	mercury_data_ll_backend__stack_opt__type_ctor_info_matching_result_0,
	mercury_data_ll_backend__stack_opt__type_ctor_info_opt_stack_alloc_0,
	mercury_data_ll_backend__stack_opt__type_ctor_info_path_0,
	mercury_data_ll_backend__stack_opt__type_ctor_info_stack_opt_info_0,
	mercury_data_ll_backend__stack_opt__type_ctor_info_stack_opt_params_0;
MR_decl_label6(f_108_108_95_98_97_99_107_101_110_100_95_95_115_116_97_99_107_95_111_112_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_112_112_108_121_95_109_97_116_99_104_105_110_103_95_95_91_51_93_95_48_7_0, 2,3,4,5,6,7)
MR_decl_label8(f_108_108_95_98_97_99_107_101_110_100_95_95_115_116_97_99_107_95_111_112_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_112_112_108_121_95_109_97_116_99_104_105_110_103_95_108_111_111_112_95_95_91_51_93_95_48_9_0, 39,7,10,14,13,8,15,17)
MR_decl_label8(ll_backend__stack_opt__add_anchor_inserts_10_0, 2,3,6,11,9,17,20,5)
MR_decl_label10(ll_backend__stack_opt__apply_interval_find_all_branches_7_0, 4,5,7,8,12,13,11,15,17,18)
MR_decl_label6(ll_backend__stack_opt__apply_interval_find_all_branches_7_0, 21,9,10,22,24,23)
MR_decl_label5(ll_backend__stack_opt__apply_matching_for_path_8_0, 4,6,7,8,2)
MR_decl_label6(ll_backend__stack_opt__consolidate_after_join_2_0, 6,7,9,10,12,3)
MR_decl_label3(ll_backend__stack_opt__dump_anchor_inserts_3_0, 2,3,4)
MR_decl_label10(ll_backend__stack_opt__dump_insert_3_0, 3,5,6,7,8,12,13,14,15,16)
MR_decl_label3(ll_backend__stack_opt__dump_insert_3_0, 18,19,9)
MR_decl_label10(ll_backend__stack_opt__dump_matching_result_3_0, 2,3,4,5,8,9,11,12,13,14)
MR_decl_label10(ll_backend__stack_opt__dump_matching_result_3_0, 15,16,17,18,19,20,21,23,24,25)
MR_decl_label10(ll_backend__stack_opt__dump_matching_result_3_0, 26,27,29,30,31,32,33,35,36,37)
MR_decl_label2(ll_backend__stack_opt__dump_matching_result_3_0, 38,40)
MR_decl_label5(ll_backend__stack_opt__dump_stack_opt_info_3_0, 3,4,7,8,10)
MR_decl_label1(ll_backend__stack_opt__extract_match_and_save_info_4_0, 2)
MR_decl_label10(ll_backend__stack_opt__find_all_branches_7_0, 2,4,7,9,6,12,11,15,17,21)
MR_decl_label9(ll_backend__stack_opt__find_all_branches_7_0, 24,18,19,29,31,32,33,26,27)
MR_decl_label10(ll_backend__stack_opt__find_all_branches_from_8_0, 2,4,6,3,14,15,8,21,28,29)
MR_decl_label10(ll_backend__stack_opt__find_all_branches_from_8_0, 32,34,35,36,37,17,44,45,46,39)
MR_decl_label1(ll_backend__stack_opt__find_all_branches_from_8_0, 48)
MR_decl_label10(ll_backend__stack_opt__find_all_branches_from_cur_interval_4_0, 4,5,6,7,8,10,11,13,14,18)
MR_decl_label2(ll_backend__stack_opt__find_all_branches_from_cur_interval_4_0, 19,20)
MR_decl_label8(ll_backend__stack_opt__maybe_write_progress_message_7_0, 3,4,5,6,7,8,9,20)
MR_decl_label3(ll_backend__stack_opt__one_after_another_7_0, 10,3,4)
MR_decl_label10(ll_backend__stack_opt__optimize_live_sets_7_0, 2,3,4,5,10,11,12,15,14,16)
MR_decl_label10(ll_backend__stack_opt__optimize_live_sets_7_0, 17,18,20,21,23,25,26,27,28,29)
MR_decl_label10(ll_backend__stack_opt__optimize_live_sets_7_0, 30,31,32,34,35,36,37,38,40,41)
MR_decl_label10(ll_backend__stack_opt__optimize_live_sets_7_0, 42,43,44,45,46,48,53,55,56,54)
MR_decl_label9(ll_backend__stack_opt__optimize_live_sets_7_0, 57,60,58,62,64,65,66,67,68)
MR_decl_label5(ll_backend__stack_opt__record_cell_var_for_interval_9_0, 3,4,7,9,5)
MR_decl_label9(ll_backend__stack_opt__record_matching_result_11_0, 4,2,6,7,9,11,13,15,16)
MR_decl_label10(ll_backend__stack_opt__stack_opt_cell_5_0, 2,3,4,5,6,7,8,9,11,12)
MR_decl_label10(ll_backend__stack_opt__stack_opt_cell_5_0, 14,15,16,18,19,20,21,22,24,25)
MR_decl_label10(ll_backend__stack_opt__stack_opt_cell_5_0, 26,27,28,29,30,31,23,32,33,35)
MR_decl_label5(ll_backend__stack_opt__stack_opt_cell_5_0, 36,37,38,39,40)
MR_decl_label10(ll_backend__stack_opt__use_cell_8_0, 3,4,5,8,71,6,13,16,62,14)
MR_decl_label10(ll_backend__stack_opt__use_cell_8_0, 18,20,21,22,24,28,29,30,35,42)
MR_decl_label10(ll_backend__stack_opt__use_cell_8_0, 44,45,40,37,51,70,49,36,54,32)
MR_decl_label1(ll_backend__stack_opt__use_cell_8_0, 56)
MR_decl_label1(fn__ll_backend__stack_opt__add_anchor_to_path_2_0, 2)
MR_decl_label4(fn__ll_backend__stack_opt__add_interval_to_path_3_0, 4,2,7,8)
MR_decl_label7(fn__ll_backend__stack_opt__anchor_requires_close_2_0, 51,13,3,4,6,5,9)
MR_decl_label5(fn__ll_backend__stack_opt__close_path_1_0, 6,4,3,12,14)
MR_decl_label4(fn__ll_backend__stack_opt__may_have_more_successors_1_0, 3,4,24,7)
MR_decl_label5(fn__ll_backend__stack_opt__may_have_no_successor_1_0, 8,3,4,5,6)
MR_decl_label1(fn__ll_backend__stack_opt__may_have_one_successor_1_0, 3)
MR_decl_label3(__Unify___ll_backend__stack_opt__all_paths_0_0, 4,9,1)
MR_decl_label5(__Unify___ll_backend__stack_opt__match_info_0_0, 4,7,9,13,1)
MR_decl_label3(__Unify___ll_backend__stack_opt__match_path_info_0_0, 6,10,1)
MR_decl_label9(__Unify___ll_backend__stack_opt__matching_result_0_0, 5,7,9,11,13,15,17,21,1)
MR_decl_label1(__Unify___ll_backend__stack_opt__opt_stack_alloc_0_0, 7)
MR_decl_label6(__Unify___ll_backend__stack_opt__path_0_0, 6,8,10,12,16,1)
MR_decl_label4(__Unify___ll_backend__stack_opt__stack_opt_info_0_0, 4,7,11,1)
MR_decl_label3(__Unify___ll_backend__stack_opt__stack_opt_params_0_0, 4,9,1)
MR_decl_label5(__Compare___ll_backend__stack_opt__all_paths_0_0, 3,2,5,9,39)
MR_decl_label7(__Compare___ll_backend__stack_opt__match_info_0_0, 3,2,5,10,14,18,61)
MR_decl_label4(__Compare___ll_backend__stack_opt__match_path_info_0_0, 3,2,6,30)
MR_decl_label10(__Compare___ll_backend__stack_opt__matching_result_0_0, 3,2,5,9,14,19,23,27,31,35)
MR_decl_label1(__Compare___ll_backend__stack_opt__matching_result_0_0, 106)
MR_decl_label2(__Compare___ll_backend__stack_opt__opt_stack_alloc_0_0, 3,2)
MR_decl_label8(__Compare___ll_backend__stack_opt__path_0_0, 3,2,5,10,15,21,25,75)
MR_decl_label5(__Compare___ll_backend__stack_opt__stack_opt_info_0_0, 3,2,5,10,39)
MR_decl_label8(__Compare___ll_backend__stack_opt__stack_opt_params_0_0, 3,2,5,9,13,17,21,72)
MR_decl_static(ll_backend__stack_opt__dump_stack_opt_info_3_0)
MR_decl_static(ll_backend__stack_opt__optimize_live_sets_7_0)
MR_decl_static(ll_backend__stack_opt__maybe_write_progress_message_7_0)
MR_def_extern_entry(ll_backend__stack_opt__stack_opt_cell_5_0)
MR_decl_static(ll_backend__stack_opt__record_matching_result_11_0)
MR_decl_static(fn__ll_backend__stack_opt__may_have_no_successor_1_0)
MR_decl_static(fn__ll_backend__stack_opt__may_have_one_successor_1_0)
MR_decl_static(fn__ll_backend__stack_opt__may_have_more_successors_1_0)
MR_decl_static(fn__ll_backend__stack_opt__anchor_requires_close_2_0)
MR_decl_static(ll_backend__stack_opt__consolidate_after_join_2_0)
MR_decl_static(ll_backend__stack_opt__find_all_branches_7_0)
MR_decl_static(ll_backend__stack_opt__find_all_branches_from_8_0)
MR_decl_static(ll_backend__stack_opt__one_after_another_7_0)
MR_decl_static(ll_backend__stack_opt__apply_interval_find_all_branches_7_0)
MR_decl_static(ll_backend__stack_opt__find_all_branches_from_cur_interval_4_0)
MR_decl_static(ll_backend__stack_opt__use_cell_8_0)
MR_decl_static(ll_backend__stack_opt__apply_matching_for_path_8_0)
MR_decl_static(ll_backend__stack_opt__record_cell_var_for_interval_9_0)
MR_decl_static(ll_backend__stack_opt__add_anchor_inserts_10_0)
MR_decl_static(fn__ll_backend__stack_opt__close_path_1_0)
MR_decl_static(ll_backend__stack_opt__extract_match_and_save_info_4_0)
MR_decl_static(fn__ll_backend__stack_opt__add_interval_to_path_3_0)
MR_decl_static(fn__ll_backend__stack_opt__add_anchor_to_path_2_0)
MR_decl_static(ll_backend__stack_opt__apply_interval_find_all_branches_map_7_0)
MR_decl_static(fn__ll_backend__stack_opt__project_paths_from_all_paths_1_0)
MR_decl_static(fn__ll_backend__stack_opt__project_after_model_non_from_all_paths_1_0)
MR_decl_static(ll_backend__stack_opt__dump_anchor_inserts_3_0)
MR_decl_static(ll_backend__stack_opt__dump_insert_3_0)
MR_decl_static(ll_backend__stack_opt__dump_matching_result_3_0)
MR_decl_static(__Unify___ll_backend__stack_opt__all_paths_0_0)
MR_decl_static(__Compare___ll_backend__stack_opt__all_paths_0_0)
MR_decl_static(__Unify___ll_backend__stack_opt__current_segment_first_flush_0_0)
MR_decl_static(__Compare___ll_backend__stack_opt__current_segment_first_flush_0_0)
MR_decl_static(__Unify___ll_backend__stack_opt__match_info_0_0)
MR_decl_static(__Compare___ll_backend__stack_opt__match_info_0_0)
MR_decl_static(__Unify___ll_backend__stack_opt__match_path_info_0_0)
MR_decl_static(__Compare___ll_backend__stack_opt__match_path_info_0_0)
MR_decl_static(__Unify___ll_backend__stack_opt__matching_result_0_0)
MR_decl_static(__Compare___ll_backend__stack_opt__matching_result_0_0)
MR_decl_static(__Unify___ll_backend__stack_opt__opt_stack_alloc_0_0)
MR_decl_static(__Compare___ll_backend__stack_opt__opt_stack_alloc_0_0)
MR_decl_static(__Unify___ll_backend__stack_opt__path_0_0)
MR_decl_static(__Compare___ll_backend__stack_opt__path_0_0)
MR_decl_static(__Unify___ll_backend__stack_opt__stack_opt_info_0_0)
MR_decl_static(__Compare___ll_backend__stack_opt__stack_opt_info_0_0)
MR_decl_static(__Unify___ll_backend__stack_opt__stack_opt_params_0_0)
MR_decl_static(__Compare___ll_backend__stack_opt__stack_opt_params_0_0)
MR_decl_static(ll_backend__stack_opt__ClassMethod_for_backend_libs__interval__build_interval_info_acc____ll_backend__stack_opt__stack_opt_info__arity0______backend_libs__interval__use_cell_8_8_0)
MR_decl_static(ll_backend__stack_opt__ClassMethod_for_ll_backend__live_vars__stack_alloc_info____ll_backend__stack_opt__opt_stack_alloc__arity0______ll_backend__live_vars__at_call_site_4_4_0)
MR_decl_static(ll_backend__stack_opt__ClassMethod_for_ll_backend__live_vars__stack_alloc_info____ll_backend__stack_opt__opt_stack_alloc__arity0______ll_backend__live_vars__at_resume_site_4_4_0)
MR_decl_static(ll_backend__stack_opt__ClassMethod_for_ll_backend__live_vars__stack_alloc_info____ll_backend__stack_opt__opt_stack_alloc__arity0______ll_backend__live_vars__at_par_conj_4_4_0)
MR_decl_static(ll_backend__stack_opt__IntroducedFrom__pred__close_path__661__1_1_0)
MR_decl_static(ll_backend__stack_opt__IntroducedFrom__pred__find_all_branches__799__1_2_0)
MR_decl_static(ll_backend__stack_opt__IntroducedFrom__pred__find_all_branches__808__1_2_0)
MR_decl_static(ll_backend__stack_opt__IntroducedFrom__pred__find_all_branches__812__1_2_0)
MR_decl_static(ll_backend__stack_opt__IntroducedFrom__pred__dump_insert__1053__1_2_0)
MR_decl_static(ll_backend__stack_opt__IntroducedFrom__pred__dump_insert__1066__1_2_0)
MR_decl_static(ll_backend__stack_opt__IntroducedFrom__pred__dump_matching_result__1084__1_2_0)
MR_decl_static(ll_backend__stack_opt__IntroducedFrom__pred__dump_matching_result__1085__1_2_0)
MR_decl_static(ll_backend__stack_opt__IntroducedFrom__pred__dump_matching_result__1107__1_3_0)
MR_decl_static(ll_backend__stack_opt__IntroducedFrom__pred__dump_matching_result__1110__1_3_0)
MR_decl_static(f_108_108_95_98_97_99_107_101_110_100_95_95_115_116_97_99_107_95_111_112_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_112_112_108_121_95_109_97_116_99_104_105_110_103_95_95_91_51_93_95_48_7_0)
MR_decl_static(f_108_108_95_98_97_99_107_101_110_100_95_95_115_116_97_99_107_95_111_112_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_112_112_108_121_95_109_97_116_99_104_105_110_103_95_108_111_111_112_95_95_91_51_93_95_48_9_0)
MR_decl_static(f_108_108_95_98_97_99_107_101_110_100_95_95_115_116_97_99_107_95_111_112_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_108_108_95_98_97_99_107_101_110_100_95_95_108_105_118_101_95_118_97_114_115_95_95_115_116_97_99_107_95_97_108_108_111_99_95_105_110_102_111_95_95_95_95_108_108_95_98_97_99_107_101_110_100_95_95_115_116_97_99_107_95_111_112_116_95_95_111_112_116_95_115_116_97_99_107_95_97_108_108_111_99_95_95_97_114_105_116_121_48_95_95_95_95_95_95_108_108_95_98_97_99_107_101_110_100_95_95_108_105_118_101_95_118_97_114_115_95_95_97_116_95_99_97_108_108_95_115_105_116_101_95_52_95_95_91_49_44_32_50_93_95_48_4_0)
MR_decl_static(f_108_108_95_98_97_99_107_101_110_100_95_95_115_116_97_99_107_95_111_112_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_108_108_95_98_97_99_107_101_110_100_95_95_108_105_118_101_95_118_97_114_115_95_95_115_116_97_99_107_95_97_108_108_111_99_95_105_110_102_111_95_95_95_95_108_108_95_98_97_99_107_101_110_100_95_95_115_116_97_99_107_95_111_112_116_95_95_111_112_116_95_115_116_97_99_107_95_97_108_108_111_99_95_95_97_114_105_116_121_48_95_95_95_95_95_95_108_108_95_98_97_99_107_101_110_100_95_95_108_105_118_101_95_118_97_114_115_95_95_97_116_95_114_101_115_117_109_101_95_115_105_116_101_95_52_95_95_91_49_44_32_50_93_95_48_4_0)
MR_decl_static(f_108_108_95_98_97_99_107_101_110_100_95_95_115_116_97_99_107_95_111_112_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_108_108_95_98_97_99_107_101_110_100_95_95_108_105_118_101_95_118_97_114_115_95_95_115_116_97_99_107_95_97_108_108_111_99_95_105_110_102_111_95_95_95_95_108_108_95_98_97_99_107_101_110_100_95_95_115_116_97_99_107_95_111_112_116_95_95_111_112_116_95_115_116_97_99_107_95_97_108_108_111_99_95_95_97_114_105_116_121_48_95_95_95_95_95_95_108_108_95_98_97_99_107_101_110_100_95_95_108_105_118_101_95_118_97_114_115_95_95_97_116_95_112_97_114_95_99_111_110_106_95_52_95_95_91_50_93_95_48_4_0)

extern const MR_TypeCtorInfo_Struct mercury_data_list__type_ctor_info_list_1;
extern const MR_TypeCtorInfo_Struct mercury_data_backend_libs__interval__type_ctor_info_insert_spec_0;
extern const MR_TypeCtorInfo_Struct mercury_data_list__type_ctor_info_list_1;
extern const MR_TypeCtorInfo_Struct mercury_data_backend_libs__interval__type_ctor_info_insert_spec_0;
extern const MR_TypeCtorInfo_Struct mercury_data_term__type_ctor_info_var_1;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_prog_var_type_0;
extern const MR_TypeCtorInfo_Struct mercury_data_backend_libs__interval__type_ctor_info_interval_id_0;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_prog_var_type_0;
extern const MR_TypeCtorInfo_Struct mercury_data_term__type_ctor_info_var_1;
extern const MR_TypeCtorInfo_Struct mercury_data_set_ordlist__type_ctor_info_set_ordlist_1;
extern const MR_TypeCtorInfo_Struct mercury_data_backend_libs__interval__type_ctor_info_interval_id_0;
extern const MR_TypeCtorInfo_Struct mercury_data_backend_libs__interval__type_ctor_info_anchor_0;
extern const MR_TypeCtorInfo_Struct mercury_data_backend_libs__interval__type_ctor_info_anchor_0;
extern const MR_TypeCtorInfo_Struct mercury_data_ll_backend__stack_opt__type_ctor_info_path_0;
extern const MR_TypeCtorInfo_Struct mercury_data_maybe__type_ctor_info_maybe_1;
extern const MR_TypeCtorInfo_Struct mercury_data_backend_libs__matching__type_ctor_info_benefit_node_0;
extern const MR_TypeCtorInfo_Struct mercury_data_backend_libs__matching__type_ctor_info_cost_node_0;
extern const MR_TypeCtorInfo_Struct mercury_data_backend_libs__matching__type_ctor_info_benefit_node_0;
extern const MR_TypeCtorInfo_Struct mercury_data_backend_libs__matching__type_ctor_info_cost_node_0;
static const struct mercury_type_0 mercury_common_0[21] =
{
{
{
MR_LIST_CTOR_ADDR,
MR_CTOR0_ADDR(backend_libs__interval, insert_spec)
}
},
{
{
MR_LIST_CTOR_ADDR,
MR_CTOR0_ADDR(backend_libs__interval, insert_spec)
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
MR_LIST_CTOR_ADDR,
MR_CTOR0_ADDR(backend_libs__interval, interval_id)
}
},
{
{
(MR_Word *) &mercury_data_base_typeclass_info_backend_libs__interval__build_interval_info_acc__arity1__ll_backend__stack_opt__stack_opt_info__arity0__,
MR_CTOR0_ADDR(ll_backend__stack_opt, stack_opt_info)
}
},
{
{
(MR_Word *) &mercury_data_base_typeclass_info_ll_backend__live_vars__stack_alloc_info__arity1__ll_backend__stack_opt__opt_stack_alloc__arity0__,
MR_CTOR0_ADDR(ll_backend__stack_opt, opt_stack_alloc)
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
MR_COMMON(0,7)
}
},
{
{
MR_CTOR1_ADDR(set_ordlist, set_ordlist),
MR_CTOR0_ADDR(backend_libs__interval, interval_id)
}
},
{
{
MR_CTOR1_ADDR(set_ordlist, set_ordlist),
MR_CTOR0_ADDR(backend_libs__interval, interval_id)
}
},
{
{
MR_CTOR1_ADDR(set_ordlist, set_ordlist),
MR_CTOR0_ADDR(backend_libs__interval, anchor)
}
},
{
{
MR_CTOR1_ADDR(set_ordlist, set_ordlist),
MR_CTOR0_ADDR(backend_libs__interval, anchor)
}
},
{
{
MR_CTOR1_ADDR(set_ordlist, set_ordlist),
MR_CTOR0_ADDR(ll_backend__stack_opt, path)
}
},
{
{
MR_CTOR1_ADDR(set_ordlist, set_ordlist),
MR_CTOR0_ADDR(ll_backend__stack_opt, path)
}
},
{
{
MR_CTOR1_ADDR(maybe, maybe),
MR_CTOR0_ADDR(backend_libs__interval, anchor)
}
},
{
{
MR_CTOR1_ADDR(set_ordlist, set_ordlist),
MR_TAG_COMMON(0,0,2)
}
},
{
{
MR_CTOR1_ADDR(set_ordlist, set_ordlist),
MR_CTOR0_ADDR(backend_libs__matching, benefit_node)
}
},
{
{
MR_CTOR1_ADDR(set_ordlist, set_ordlist),
MR_CTOR0_ADDR(backend_libs__matching, cost_node)
}
},
{
{
MR_CTOR1_ADDR(set_ordlist, set_ordlist),
MR_CTOR0_ADDR(backend_libs__matching, benefit_node)
}
},
{
{
MR_CTOR1_ADDR(set_ordlist, set_ordlist),
MR_CTOR0_ADDR(backend_libs__matching, cost_node)
}
},
};

extern const MR_TypeCtorInfo_Struct mercury_data_pair__type_ctor_info_pair_2;
static const struct mercury_type_1 mercury_common_1[2] =
{
{
{
MR_CTOR_ADDR(pair, pair, 2),
MR_CTOR0_ADDR(backend_libs__interval, anchor),
MR_TAG_COMMON(0,0,0)
}
},
{
{
MR_CTOR_ADDR(pair, pair, 2),
MR_CTOR0_ADDR(backend_libs__interval, anchor),
MR_COMMON(0,1)
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__ll_backend__stack_opt__dump_stack_opt_info_3_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_io__type_ctor_info_state_0;
static const MR_UserClosureId
mercury_data__closure_layout__ll_backend__stack_opt__dump_stack_opt_info_3_0_2;
extern const MR_TypeCtorInfo_Struct mercury_data_ll_backend__stack_opt__type_ctor_info_matching_result_0;
static const MR_UserClosureId
mercury_data__closure_layout__ll_backend__stack_opt__apply_interval_find_all_branches_7_0_2;
extern const MR_TypeCtorInfo_Struct mercury_data_backend_libs__interval__type_ctor_info_anchor_0;
extern const MR_TypeCtorInfo_Struct mercury_data_ll_backend__stack_opt__type_ctor_info_path_0;
static const MR_UserClosureId
mercury_data__closure_layout__ll_backend__stack_opt__dump_anchor_inserts_3_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_backend_libs__interval__type_ctor_info_insert_spec_0;
static const MR_UserClosureId
mercury_data__closure_layout__ll_backend__stack_opt__dump_matching_result_3_0_5;
static const MR_UserClosureId
mercury_data__closure_layout__ll_backend__stack_opt__dump_matching_result_3_0_6;
static const struct mercury_type_2 mercury_common_2[6] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__ll_backend__stack_opt__dump_stack_opt_info_3_0_1,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_COMMON(1,1),
MR_IO_CTOR_ADDR,
MR_IO_CTOR_ADDR
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__ll_backend__stack_opt__dump_stack_opt_info_3_0_2,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_CTOR0_ADDR(ll_backend__stack_opt, matching_result),
MR_IO_CTOR_ADDR,
MR_IO_CTOR_ADDR
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__ll_backend__stack_opt__apply_interval_find_all_branches_7_0_2,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_CTOR0_ADDR(backend_libs__interval, anchor),
MR_CTOR0_ADDR(ll_backend__stack_opt, path),
MR_CTOR0_ADDR(ll_backend__stack_opt, path)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__ll_backend__stack_opt__dump_anchor_inserts_3_0_1,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_CTOR0_ADDR(backend_libs__interval, insert_spec),
MR_IO_CTOR_ADDR,
MR_IO_CTOR_ADDR
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__ll_backend__stack_opt__dump_matching_result_3_0_5,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_CTOR0_ADDR(backend_libs__interval, anchor),
MR_IO_CTOR_ADDR,
MR_IO_CTOR_ADDR
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__ll_backend__stack_opt__dump_matching_result_3_0_6,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_CTOR0_ADDR(backend_libs__interval, anchor),
MR_IO_CTOR_ADDR,
MR_IO_CTOR_ADDR
}
},
};

MR_decl_entry(fn__backend_libs__interval__interval_id_to_int_1_0);
static const struct mercury_type_3 mercury_common_3[15] =
{
{
MR_COMMON(2,0),
MR_ENTRY_AP(ll_backend__stack_opt__dump_anchor_inserts_3_0),
0
},
{
MR_COMMON(2,1),
MR_ENTRY_AP(ll_backend__stack_opt__dump_matching_result_3_0),
0
},
{
MR_COMMON(7,0),
MR_ENTRY_AP(fn__ll_backend__stack_opt__project_paths_from_all_paths_1_0),
0
},
{
MR_COMMON(7,1),
MR_ENTRY_AP(fn__ll_backend__stack_opt__project_after_model_non_from_all_paths_1_0),
0
},
{
MR_COMMON(7,5),
MR_ENTRY_AP(fn__ll_backend__stack_opt__close_path_1_0),
0
},
{
MR_COMMON(9,1),
MR_ENTRY_AP(ll_backend__stack_opt__extract_match_and_save_info_4_0),
0
},
{
MR_COMMON(2,3),
MR_ENTRY_AP(ll_backend__stack_opt__dump_insert_3_0),
0
},
{
MR_COMMON(7,6),
MR_ENTRY_AP(ll_backend__stack_opt__IntroducedFrom__pred__dump_insert__1053__1_2_0),
0
},
{
MR_COMMON(7,7),
MR_ENTRY_AP(ll_backend__stack_opt__IntroducedFrom__pred__dump_insert__1066__1_2_0),
0
},
{
MR_COMMON(7,8),
MR_ENTRY_AP(ll_backend__stack_opt__IntroducedFrom__pred__dump_matching_result__1084__1_2_0),
0
},
{
MR_COMMON(7,9),
MR_ENTRY_AP(ll_backend__stack_opt__IntroducedFrom__pred__dump_matching_result__1085__1_2_0),
0
},
{
MR_COMMON(7,10),
MR_ENTRY_AP(fn__backend_libs__interval__interval_id_to_int_1_0),
0
},
{
MR_COMMON(7,11),
MR_ENTRY_AP(fn__backend_libs__interval__interval_id_to_int_1_0),
0
},
{
MR_COMMON(2,4),
MR_ENTRY_AP(ll_backend__stack_opt__IntroducedFrom__pred__dump_matching_result__1107__1_3_0),
0
},
{
MR_COMMON(2,5),
MR_ENTRY_AP(ll_backend__stack_opt__IntroducedFrom__pred__dump_matching_result__1110__1_3_0),
0
},
};

static const struct mercury_type_4 mercury_common_4[1] =
{
{
3
},
};

static const MR_UserClosureId
mercury_data__closure_layout__ll_backend__stack_opt__record_matching_result_11_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_backend_libs__interval__type_ctor_info_interval_id_0;
extern const MR_TypeCtorInfo_Struct mercury_data_backend_libs__interval__type_ctor_info_interval_info_0;
extern const MR_TypeCtorInfo_Struct mercury_data_ll_backend__stack_opt__type_ctor_info_stack_opt_info_0;
static const struct mercury_type_5 mercury_common_5[1] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__ll_backend__stack_opt__record_matching_result_11_0_1,
(MR_Word *) (MR_Integer) 0
},
9,
{
MR_COMMON(0,6),
MR_COMMON(0,8),
MR_CTOR0_ADDR(backend_libs__interval, interval_id),
MR_CTOR0_ADDR(backend_libs__interval, interval_info),
MR_CTOR0_ADDR(backend_libs__interval, interval_info),
MR_CTOR0_ADDR(ll_backend__stack_opt, stack_opt_info),
MR_CTOR0_ADDR(ll_backend__stack_opt, stack_opt_info),
MR_COMMON(0,9),
MR_COMMON(0,9)
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__ll_backend__stack_opt__record_matching_result_11_0_2;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_goal__type_ctor_info_hlds_goal_0;
static const struct mercury_type_6 mercury_common_6[1] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__ll_backend__stack_opt__record_matching_result_11_0_2,
(MR_Word *) (MR_Integer) 0
},
10,
{
MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal),
MR_COMMON(0,8),
MR_COMMON(0,9),
MR_CTOR0_ADDR(backend_libs__interval, anchor),
MR_CTOR0_ADDR(backend_libs__interval, interval_info),
MR_CTOR0_ADDR(backend_libs__interval, interval_info),
MR_CTOR0_ADDR(ll_backend__stack_opt, stack_opt_info),
MR_CTOR0_ADDR(ll_backend__stack_opt, stack_opt_info),
MR_COMMON(0,11),
MR_COMMON(0,11)
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__ll_backend__stack_opt__consolidate_after_join_2_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_ll_backend__stack_opt__type_ctor_info_all_paths_0;
static const MR_UserClosureId
mercury_data__closure_layout__ll_backend__stack_opt__consolidate_after_join_2_0_2;
extern const MR_TypeCtorInfo_Struct mercury_data_bool__type_ctor_info_bool_0;
static const MR_UserClosureId
mercury_data__closure_layout__ll_backend__stack_opt__find_all_branches_7_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__ll_backend__stack_opt__find_all_branches_7_0_2;
static const MR_UserClosureId
mercury_data__closure_layout__ll_backend__stack_opt__find_all_branches_7_0_3;
static const MR_UserClosureId
mercury_data__closure_layout__ll_backend__stack_opt__find_all_branches_from_8_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__ll_backend__stack_opt__dump_insert_3_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;
static const MR_UserClosureId
mercury_data__closure_layout__ll_backend__stack_opt__dump_insert_3_0_2;
static const MR_UserClosureId
mercury_data__closure_layout__ll_backend__stack_opt__dump_matching_result_3_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__ll_backend__stack_opt__dump_matching_result_3_0_2;
static const MR_UserClosureId
mercury_data__closure_layout__ll_backend__stack_opt__dump_matching_result_3_0_3;
static const MR_UserClosureId
mercury_data__closure_layout__ll_backend__stack_opt__dump_matching_result_3_0_4;
static const struct mercury_type_7 mercury_common_7[12] =
{
{
(MR_Word *) &mercury_data__closure_layout__ll_backend__stack_opt__consolidate_after_join_2_0_1,
(MR_Word *) (MR_Integer) 0,
2,
MR_CTOR0_ADDR(ll_backend__stack_opt, all_paths),
MR_COMMON(0,14)
},
{
(MR_Word *) &mercury_data__closure_layout__ll_backend__stack_opt__consolidate_after_join_2_0_2,
(MR_Word *) (MR_Integer) 0,
2,
MR_CTOR0_ADDR(ll_backend__stack_opt, all_paths),
MR_BOOL_CTOR_ADDR
},
{
(MR_Word *) &mercury_data__closure_layout__ll_backend__stack_opt__find_all_branches_7_0_1,
(MR_Word *) (MR_Integer) 0,
2,
MR_BOOL_CTOR_ADDR,
MR_BOOL_CTOR_ADDR
},
{
(MR_Word *) &mercury_data__closure_layout__ll_backend__stack_opt__find_all_branches_7_0_2,
(MR_Word *) (MR_Integer) 0,
2,
MR_BOOL_CTOR_ADDR,
MR_BOOL_CTOR_ADDR
},
{
(MR_Word *) &mercury_data__closure_layout__ll_backend__stack_opt__find_all_branches_7_0_3,
(MR_Word *) (MR_Integer) 0,
2,
MR_BOOL_CTOR_ADDR,
MR_BOOL_CTOR_ADDR
},
{
(MR_Word *) &mercury_data__closure_layout__ll_backend__stack_opt__find_all_branches_from_8_0_1,
(MR_Word *) (MR_Integer) 0,
2,
MR_CTOR0_ADDR(ll_backend__stack_opt, path),
MR_CTOR0_ADDR(ll_backend__stack_opt, path)
},
{
(MR_Word *) &mercury_data__closure_layout__ll_backend__stack_opt__dump_insert_3_0_1,
(MR_Word *) (MR_Integer) 0,
2,
MR_COMMON(0,6),
MR_INT_CTOR_ADDR
},
{
(MR_Word *) &mercury_data__closure_layout__ll_backend__stack_opt__dump_insert_3_0_2,
(MR_Word *) (MR_Integer) 0,
2,
MR_COMMON(0,6),
MR_INT_CTOR_ADDR
},
{
(MR_Word *) &mercury_data__closure_layout__ll_backend__stack_opt__dump_matching_result_3_0_1,
(MR_Word *) (MR_Integer) 0,
2,
MR_COMMON(0,6),
MR_INT_CTOR_ADDR
},
{
(MR_Word *) &mercury_data__closure_layout__ll_backend__stack_opt__dump_matching_result_3_0_2,
(MR_Word *) (MR_Integer) 0,
2,
MR_COMMON(0,6),
MR_INT_CTOR_ADDR
},
{
(MR_Word *) &mercury_data__closure_layout__ll_backend__stack_opt__dump_matching_result_3_0_3,
(MR_Word *) (MR_Integer) 0,
2,
MR_CTOR0_ADDR(backend_libs__interval, interval_id),
MR_INT_CTOR_ADDR
},
{
(MR_Word *) &mercury_data__closure_layout__ll_backend__stack_opt__dump_matching_result_3_0_4,
(MR_Word *) (MR_Integer) 0,
2,
MR_CTOR0_ADDR(backend_libs__interval, interval_id),
MR_INT_CTOR_ADDR
},
};

static const MR_UserClosureId
mercury_data__closure_layout__ll_backend__stack_opt__find_all_branches_from_8_0_2;
static const struct mercury_type_8 mercury_common_8[1] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__ll_backend__stack_opt__find_all_branches_from_8_0_2,
(MR_Word *) (MR_Integer) 0
},
7,
{
MR_COMMON(0,8),
MR_COMMON(0,15),
MR_CTOR0_ADDR(backend_libs__interval, interval_info),
MR_CTOR0_ADDR(ll_backend__stack_opt, stack_opt_info),
MR_CTOR0_ADDR(ll_backend__stack_opt, all_paths),
MR_CTOR0_ADDR(backend_libs__interval, interval_id),
MR_CTOR0_ADDR(ll_backend__stack_opt, all_paths)
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__ll_backend__stack_opt__apply_interval_find_all_branches_7_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__ll_backend__stack_opt__find_all_branches_from_cur_interval_4_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_ll_backend__stack_opt__type_ctor_info_match_path_info_0;
static const struct mercury_type_9 mercury_common_9[2] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__ll_backend__stack_opt__apply_interval_find_all_branches_7_0_1,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_CTOR0_ADDR(backend_libs__interval, interval_id),
MR_COMMON(0,8),
MR_CTOR0_ADDR(ll_backend__stack_opt, path),
MR_CTOR0_ADDR(ll_backend__stack_opt, path)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__ll_backend__stack_opt__find_all_branches_from_cur_interval_4_0_1,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_CTOR0_ADDR(ll_backend__stack_opt, path),
MR_CTOR0_ADDR(ll_backend__stack_opt, match_path_info),
MR_COMMON(0,11),
MR_COMMON(0,9)
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__fn__ll_backend__stack_opt__close_path_1_0_1;
static const struct mercury_type_10 mercury_common_10[1] =
{
{
(MR_Word *) &mercury_data__closure_layout__fn__ll_backend__stack_opt__close_path_1_0_1,
(MR_Word *) (MR_Integer) 0,
1,
MR_COMMON(0,8)
},
};

static const MR_UserClosureId
mercury_data__closure_layout__f_108_108_95_98_97_99_107_101_110_100_95_95_115_116_97_99_107_95_111_112_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_112_112_108_121_95_109_97_116_99_104_105_110_103_95_108_111_111_112_95_95_91_51_93_95_48_9_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_ll_backend__stack_opt__type_ctor_info_stack_opt_params_0;
static const struct mercury_type_11 mercury_common_11[1] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__f_108_108_95_98_97_99_107_101_110_100_95_95_115_116_97_99_107_95_111_112_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_112_112_108_121_95_109_97_116_99_104_105_110_103_95_108_111_111_112_95_95_91_51_93_95_48_9_0_1,
(MR_Word *) (MR_Integer) 0
},
8,
{
MR_COMMON(0,6),
MR_BOOL_CTOR_ADDR,
MR_CTOR0_ADDR(ll_backend__stack_opt, stack_opt_params),
MR_COMMON(0,8),
MR_CTOR0_ADDR(ll_backend__stack_opt, match_path_info),
MR_COMMON(0,17),
MR_COMMON(0,18),
MR_COMMON(0,8)
}
},
};

static const MR_FA_TypeInfo_Struct1 mercury_data_set_ordlist__ti_set_ordlist_1ll_backend__stack_opt__type_ctor_info_path_0 = {
	&mercury_data_set_ordlist__type_ctor_info_set_ordlist_1,
{	(MR_TypeInfo) &mercury_data_ll_backend__stack_opt__type_ctor_info_path_0
}};
extern const MR_TypeCtorInfo_Struct mercury_data_bool__type_ctor_info_bool_0;

static const MR_FA_TypeInfo_Struct1 mercury_data_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
	&mercury_data_term__type_ctor_info_var_1,
{	(MR_TypeInfo) &mercury_data_parse_tree__prog_data__type_ctor_info_prog_var_type_0
}};

static const MR_FA_TypeInfo_Struct1 mercury_data_set_ordlist__ti_set_ordlist_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
	&mercury_data_set_ordlist__type_ctor_info_set_ordlist_1,
{	(MR_TypeInfo) &mercury_data_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
}};
extern const MR_TypeCtorInfo_Struct mercury_data_bool__type_ctor_info_bool_0;

const MR_PseudoTypeInfo mercury_data_ll_backend__stack_opt__field_types_all_paths_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_set_ordlist__ti_set_ordlist_1ll_backend__stack_opt__type_ctor_info_path_0,
	(MR_PseudoTypeInfo) &mercury_data_bool__type_ctor_info_bool_0,
	(MR_PseudoTypeInfo) &mercury_data_set_ordlist__ti_set_ordlist_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
};

const MR_ConstString mercury_data_ll_backend__stack_opt__field_names_all_paths_0_0[] = {
	"paths_so_far",
	"stepped_over_model_non",
	"used_after_scope"
};

static const MR_DuFunctorDesc mercury_data_ll_backend__stack_opt__du_functor_desc_all_paths_0_0 = {
	"all_paths",
	3,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_ll_backend__stack_opt__field_types_all_paths_0_0,
	mercury_data_ll_backend__stack_opt__field_names_all_paths_0_0,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_ll_backend__stack_opt__du_stag_ordered_all_paths_0_0[] = {
	&mercury_data_ll_backend__stack_opt__du_functor_desc_all_paths_0_0

};

const MR_DuPtagLayout mercury_data_ll_backend__stack_opt__du_ptag_ordered_all_paths_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_ll_backend__stack_opt__du_stag_ordered_all_paths_0_0 }

};

const MR_DuFunctorDescPtr mercury_data_ll_backend__stack_opt__du_name_ordered_all_paths_0[] = {
	&mercury_data_ll_backend__stack_opt__du_functor_desc_all_paths_0_0
};

const MR_Integer mercury_data_ll_backend__stack_opt__functor_number_map_all_paths_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_ll_backend__stack_opt__type_ctor_info_all_paths_0 = {
	0,
	14,
	1,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___ll_backend__stack_opt__all_paths_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___ll_backend__stack_opt__all_paths_0_0)),
	"ll_backend.stack_opt",
	"all_paths",
	{ (void *)mercury_data_ll_backend__stack_opt__du_name_ordered_all_paths_0 },
	{ (void *)mercury_data_ll_backend__stack_opt__du_ptag_ordered_all_paths_0 },
	1,
	4,
	mercury_data_ll_backend__stack_opt__functor_number_map_all_paths_0
};

static const MR_EnumFunctorDesc mercury_data_ll_backend__stack_opt__enum_functor_desc_current_segment_first_flush_0_0 = {
	"current_is_before_first_flush",
	0
};

static const MR_EnumFunctorDesc mercury_data_ll_backend__stack_opt__enum_functor_desc_current_segment_first_flush_0_1 = {
	"current_is_after_first_flush",
	1
};

const MR_EnumFunctorDescPtr mercury_data_ll_backend__stack_opt__enum_value_ordered_current_segment_first_flush_0[] = {
	&mercury_data_ll_backend__stack_opt__enum_functor_desc_current_segment_first_flush_0_0,
	&mercury_data_ll_backend__stack_opt__enum_functor_desc_current_segment_first_flush_0_1
};

const MR_EnumFunctorDescPtr mercury_data_ll_backend__stack_opt__enum_name_ordered_current_segment_first_flush_0[] = {
	&mercury_data_ll_backend__stack_opt__enum_functor_desc_current_segment_first_flush_0_1,
	&mercury_data_ll_backend__stack_opt__enum_functor_desc_current_segment_first_flush_0_0
};

const MR_Integer mercury_data_ll_backend__stack_opt__functor_number_map_current_segment_first_flush_0[] = {
	1,
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_ll_backend__stack_opt__type_ctor_info_current_segment_first_flush_0 = {
	0,
	14,
	-1,
	MR_TYPECTOR_REP_ENUM,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___ll_backend__stack_opt__current_segment_first_flush_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___ll_backend__stack_opt__current_segment_first_flush_0_0)),
	"ll_backend.stack_opt",
	"current_segment_first_flush",
	{ (void *)mercury_data_ll_backend__stack_opt__enum_name_ordered_current_segment_first_flush_0 },
	{ (void *)mercury_data_ll_backend__stack_opt__enum_value_ordered_current_segment_first_flush_0 },
	2,
	4,
	mercury_data_ll_backend__stack_opt__functor_number_map_current_segment_first_flush_0
};
extern const MR_TypeCtorInfo_Struct mercury_data_ll_backend__stack_opt__type_ctor_info_match_path_info_0;

static const MR_FA_TypeInfo_Struct1 mercury_data_list__ti_list_1ll_backend__stack_opt__type_ctor_info_match_path_info_0 = {
	&mercury_data_list__type_ctor_info_list_1,
{	(MR_TypeInfo) &mercury_data_ll_backend__stack_opt__type_ctor_info_match_path_info_0
}};

static const MR_FA_TypeInfo_Struct1 mercury_data_set_ordlist__ti_set_ordlist_1backend_libs__interval__type_ctor_info_anchor_0 = {
	&mercury_data_set_ordlist__type_ctor_info_set_ordlist_1,
{	(MR_TypeInfo) &mercury_data_backend_libs__interval__type_ctor_info_anchor_0
}};

static const MR_FA_TypeInfo_Struct1 mercury_data_set_ordlist__ti_set_ordlist_1backend_libs__interval__type_ctor_info_interval_id_0 = {
	&mercury_data_set_ordlist__type_ctor_info_set_ordlist_1,
{	(MR_TypeInfo) &mercury_data_backend_libs__interval__type_ctor_info_interval_id_0
}};

const MR_PseudoTypeInfo mercury_data_ll_backend__stack_opt__field_types_match_info_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_list__ti_list_1ll_backend__stack_opt__type_ctor_info_match_path_info_0,
	(MR_PseudoTypeInfo) &mercury_data_set_ordlist__ti_set_ordlist_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
	(MR_PseudoTypeInfo) &mercury_data_bool__type_ctor_info_bool_0,
	(MR_PseudoTypeInfo) &mercury_data_set_ordlist__ti_set_ordlist_1backend_libs__interval__type_ctor_info_anchor_0,
	(MR_PseudoTypeInfo) &mercury_data_set_ordlist__ti_set_ordlist_1backend_libs__interval__type_ctor_info_interval_id_0
};

static const MR_DuFunctorDesc mercury_data_ll_backend__stack_opt__du_functor_desc_match_info_0_0 = {
	"match_info",
	5,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_ll_backend__stack_opt__field_types_match_info_0_0,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_ll_backend__stack_opt__du_stag_ordered_match_info_0_0[] = {
	&mercury_data_ll_backend__stack_opt__du_functor_desc_match_info_0_0

};

const MR_DuPtagLayout mercury_data_ll_backend__stack_opt__du_ptag_ordered_match_info_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_ll_backend__stack_opt__du_stag_ordered_match_info_0_0 }

};

const MR_DuFunctorDescPtr mercury_data_ll_backend__stack_opt__du_name_ordered_match_info_0[] = {
	&mercury_data_ll_backend__stack_opt__du_functor_desc_match_info_0_0
};

const MR_Integer mercury_data_ll_backend__stack_opt__functor_number_map_match_info_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_ll_backend__stack_opt__type_ctor_info_match_info_0 = {
	0,
	14,
	1,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___ll_backend__stack_opt__match_info_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___ll_backend__stack_opt__match_info_0_0)),
	"ll_backend.stack_opt",
	"match_info",
	{ (void *)mercury_data_ll_backend__stack_opt__du_name_ordered_match_info_0 },
	{ (void *)mercury_data_ll_backend__stack_opt__du_ptag_ordered_match_info_0 },
	1,
	4,
	mercury_data_ll_backend__stack_opt__functor_number_map_match_info_0
};

static const MR_FA_TypeInfo_Struct1 mercury_data_list__ti_list_1set_ordlist__ti_set_ordlist_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
	&mercury_data_list__type_ctor_info_list_1,
{	(MR_TypeInfo) &mercury_data_set_ordlist__ti_set_ordlist_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
}};

const MR_PseudoTypeInfo mercury_data_ll_backend__stack_opt__field_types_match_path_info_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_set_ordlist__ti_set_ordlist_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
	(MR_PseudoTypeInfo) &mercury_data_list__ti_list_1set_ordlist__ti_set_ordlist_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
};

static const MR_DuFunctorDesc mercury_data_ll_backend__stack_opt__du_functor_desc_match_path_info_0_0 = {
	"match_path_info",
	2,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_ll_backend__stack_opt__field_types_match_path_info_0_0,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_ll_backend__stack_opt__du_stag_ordered_match_path_info_0_0[] = {
	&mercury_data_ll_backend__stack_opt__du_functor_desc_match_path_info_0_0

};

const MR_DuPtagLayout mercury_data_ll_backend__stack_opt__du_ptag_ordered_match_path_info_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_ll_backend__stack_opt__du_stag_ordered_match_path_info_0_0 }

};

const MR_DuFunctorDescPtr mercury_data_ll_backend__stack_opt__du_name_ordered_match_path_info_0[] = {
	&mercury_data_ll_backend__stack_opt__du_functor_desc_match_path_info_0_0
};

const MR_Integer mercury_data_ll_backend__stack_opt__functor_number_map_match_path_info_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_ll_backend__stack_opt__type_ctor_info_match_path_info_0 = {
	0,
	14,
	1,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___ll_backend__stack_opt__match_path_info_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___ll_backend__stack_opt__match_path_info_0_0)),
	"ll_backend.stack_opt",
	"match_path_info",
	{ (void *)mercury_data_ll_backend__stack_opt__du_name_ordered_match_path_info_0 },
	{ (void *)mercury_data_ll_backend__stack_opt__du_ptag_ordered_match_path_info_0 },
	1,
	4,
	mercury_data_ll_backend__stack_opt__functor_number_map_match_path_info_0
};
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_cons_id_0;

static const MR_FA_TypeInfo_Struct1 mercury_data_list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
	&mercury_data_list__type_ctor_info_list_1,
{	(MR_TypeInfo) &mercury_data_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
}};
extern const MR_TypeCtorInfo_Struct mercury_data_mdbcomp__goal_path__type_ctor_info_goal_id_0;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_cons_id_0;
extern const MR_TypeCtorInfo_Struct mercury_data_mdbcomp__goal_path__type_ctor_info_goal_id_0;

const MR_PseudoTypeInfo mercury_data_ll_backend__stack_opt__field_types_matching_result_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
	(MR_PseudoTypeInfo) &mercury_data_parse_tree__prog_data__type_ctor_info_cons_id_0,
	(MR_PseudoTypeInfo) &mercury_data_list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
	(MR_PseudoTypeInfo) &mercury_data_set_ordlist__ti_set_ordlist_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
	(MR_PseudoTypeInfo) &mercury_data_mdbcomp__goal_path__type_ctor_info_goal_id_0,
	(MR_PseudoTypeInfo) &mercury_data_set_ordlist__ti_set_ordlist_1backend_libs__interval__type_ctor_info_interval_id_0,
	(MR_PseudoTypeInfo) &mercury_data_set_ordlist__ti_set_ordlist_1backend_libs__interval__type_ctor_info_interval_id_0,
	(MR_PseudoTypeInfo) &mercury_data_set_ordlist__ti_set_ordlist_1backend_libs__interval__type_ctor_info_anchor_0,
	(MR_PseudoTypeInfo) &mercury_data_set_ordlist__ti_set_ordlist_1backend_libs__interval__type_ctor_info_anchor_0
};

static const MR_DuFunctorDesc mercury_data_ll_backend__stack_opt__du_functor_desc_matching_result_0_0 = {
	"matching_result",
	9,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_ll_backend__stack_opt__field_types_matching_result_0_0,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_ll_backend__stack_opt__du_stag_ordered_matching_result_0_0[] = {
	&mercury_data_ll_backend__stack_opt__du_functor_desc_matching_result_0_0

};

const MR_DuPtagLayout mercury_data_ll_backend__stack_opt__du_ptag_ordered_matching_result_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_ll_backend__stack_opt__du_stag_ordered_matching_result_0_0 }

};

const MR_DuFunctorDescPtr mercury_data_ll_backend__stack_opt__du_name_ordered_matching_result_0[] = {
	&mercury_data_ll_backend__stack_opt__du_functor_desc_matching_result_0_0
};

const MR_Integer mercury_data_ll_backend__stack_opt__functor_number_map_matching_result_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_ll_backend__stack_opt__type_ctor_info_matching_result_0 = {
	0,
	14,
	1,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___ll_backend__stack_opt__matching_result_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___ll_backend__stack_opt__matching_result_0_0)),
	"ll_backend.stack_opt",
	"matching_result",
	{ (void *)mercury_data_ll_backend__stack_opt__du_name_ordered_matching_result_0 },
	{ (void *)mercury_data_ll_backend__stack_opt__du_ptag_ordered_matching_result_0 },
	1,
	4,
	mercury_data_ll_backend__stack_opt__functor_number_map_matching_result_0
};

static const MR_NotagFunctorDesc mercury_data_ll_backend__stack_opt__notag_functor_desc_opt_stack_alloc_0 = {
	"opt_stack_alloc",
	(MR_PseudoTypeInfo) &mercury_data_set_ordlist__ti_set_ordlist_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
	"par_conj_own_slots"
};

const MR_Integer mercury_data_ll_backend__stack_opt__functor_number_map_opt_stack_alloc_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_ll_backend__stack_opt__type_ctor_info_opt_stack_alloc_0 = {
	0,
	14,
	-1,
	MR_TYPECTOR_REP_NOTAG_GROUND,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___ll_backend__stack_opt__opt_stack_alloc_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___ll_backend__stack_opt__opt_stack_alloc_0_0)),
	"ll_backend.stack_opt",
	"opt_stack_alloc",
	{ (void *)&mercury_data_ll_backend__stack_opt__notag_functor_desc_opt_stack_alloc_0 },
	{ (void *)&mercury_data_ll_backend__stack_opt__notag_functor_desc_opt_stack_alloc_0 },
	1,
	4,
	mercury_data_ll_backend__stack_opt__functor_number_map_opt_stack_alloc_0
};
extern const MR_TypeCtorInfo_Struct mercury_data_ll_backend__stack_opt__type_ctor_info_current_segment_first_flush_0;

const MR_PseudoTypeInfo mercury_data_ll_backend__stack_opt__field_types_path_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_ll_backend__stack_opt__type_ctor_info_current_segment_first_flush_0,
	(MR_PseudoTypeInfo) &mercury_data_set_ordlist__ti_set_ordlist_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
	(MR_PseudoTypeInfo) &mercury_data_set_ordlist__ti_set_ordlist_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
	(MR_PseudoTypeInfo) &mercury_data_list__ti_list_1set_ordlist__ti_set_ordlist_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
	(MR_PseudoTypeInfo) &mercury_data_set_ordlist__ti_set_ordlist_1backend_libs__interval__type_ctor_info_anchor_0,
	(MR_PseudoTypeInfo) &mercury_data_set_ordlist__ti_set_ordlist_1backend_libs__interval__type_ctor_info_interval_id_0
};

const MR_ConstString mercury_data_ll_backend__stack_opt__field_names_path_0_0[] = {
	"flush_state",
	"current_segment",
	"first_segment",
	"other_segments",
	"flush_anchors",
	"occurring_intervals"
};

static const MR_DuFunctorDesc mercury_data_ll_backend__stack_opt__du_functor_desc_path_0_0 = {
	"path",
	6,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_ll_backend__stack_opt__field_types_path_0_0,
	mercury_data_ll_backend__stack_opt__field_names_path_0_0,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_ll_backend__stack_opt__du_stag_ordered_path_0_0[] = {
	&mercury_data_ll_backend__stack_opt__du_functor_desc_path_0_0

};

const MR_DuPtagLayout mercury_data_ll_backend__stack_opt__du_ptag_ordered_path_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_ll_backend__stack_opt__du_stag_ordered_path_0_0 }

};

const MR_DuFunctorDescPtr mercury_data_ll_backend__stack_opt__du_name_ordered_path_0[] = {
	&mercury_data_ll_backend__stack_opt__du_functor_desc_path_0_0
};

const MR_Integer mercury_data_ll_backend__stack_opt__functor_number_map_path_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_ll_backend__stack_opt__type_ctor_info_path_0 = {
	0,
	14,
	1,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___ll_backend__stack_opt__path_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___ll_backend__stack_opt__path_0_0)),
	"ll_backend.stack_opt",
	"path",
	{ (void *)mercury_data_ll_backend__stack_opt__du_name_ordered_path_0 },
	{ (void *)mercury_data_ll_backend__stack_opt__du_ptag_ordered_path_0 },
	1,
	4,
	mercury_data_ll_backend__stack_opt__functor_number_map_path_0
};
extern const MR_TypeCtorInfo_Struct mercury_data_tree234__type_ctor_info_tree234_2;

static const MR_FA_TypeInfo_Struct1 mercury_data_list__ti_list_1backend_libs__interval__type_ctor_info_insert_spec_0 = {
	&mercury_data_list__type_ctor_info_list_1,
{	(MR_TypeInfo) &mercury_data_backend_libs__interval__type_ctor_info_insert_spec_0
}};

static const MR_FA_TypeInfo_Struct2 mercury_data_tree234__ti_tree234_2backend_libs__interval__type_ctor_info_anchor_0list__ti_list_1backend_libs__interval__type_ctor_info_insert_spec_0 = {
	&mercury_data_tree234__type_ctor_info_tree234_2,
{	(MR_TypeInfo) &mercury_data_backend_libs__interval__type_ctor_info_anchor_0,
	(MR_TypeInfo) &mercury_data_list__ti_list_1backend_libs__interval__type_ctor_info_insert_spec_0
}};
extern const MR_TypeCtorInfo_Struct mercury_data_ll_backend__stack_opt__type_ctor_info_matching_result_0;

static const MR_FA_TypeInfo_Struct1 mercury_data_list__ti_list_1ll_backend__stack_opt__type_ctor_info_matching_result_0 = {
	&mercury_data_list__type_ctor_info_list_1,
{	(MR_TypeInfo) &mercury_data_ll_backend__stack_opt__type_ctor_info_matching_result_0
}};
extern const MR_TypeCtorInfo_Struct mercury_data_ll_backend__stack_opt__type_ctor_info_stack_opt_params_0;

const MR_PseudoTypeInfo mercury_data_ll_backend__stack_opt__field_types_stack_opt_info_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_ll_backend__stack_opt__type_ctor_info_stack_opt_params_0,
	(MR_PseudoTypeInfo) &mercury_data_tree234__ti_tree234_2backend_libs__interval__type_ctor_info_anchor_0list__ti_list_1backend_libs__interval__type_ctor_info_insert_spec_0,
	(MR_PseudoTypeInfo) &mercury_data_list__ti_list_1ll_backend__stack_opt__type_ctor_info_matching_result_0
};

const MR_ConstString mercury_data_ll_backend__stack_opt__field_names_stack_opt_info_0_0[] = {
	"soi_stack_opt_params",
	"soi_left_anchor_inserts",
	"soi_matching_results"
};

static const MR_DuFunctorDesc mercury_data_ll_backend__stack_opt__du_functor_desc_stack_opt_info_0_0 = {
	"stack_opt_info",
	3,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_ll_backend__stack_opt__field_types_stack_opt_info_0_0,
	mercury_data_ll_backend__stack_opt__field_names_stack_opt_info_0_0,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_ll_backend__stack_opt__du_stag_ordered_stack_opt_info_0_0[] = {
	&mercury_data_ll_backend__stack_opt__du_functor_desc_stack_opt_info_0_0

};

const MR_DuPtagLayout mercury_data_ll_backend__stack_opt__du_ptag_ordered_stack_opt_info_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_ll_backend__stack_opt__du_stag_ordered_stack_opt_info_0_0 }

};

const MR_DuFunctorDescPtr mercury_data_ll_backend__stack_opt__du_name_ordered_stack_opt_info_0[] = {
	&mercury_data_ll_backend__stack_opt__du_functor_desc_stack_opt_info_0_0
};

const MR_Integer mercury_data_ll_backend__stack_opt__functor_number_map_stack_opt_info_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_ll_backend__stack_opt__type_ctor_info_stack_opt_info_0 = {
	0,
	14,
	1,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___ll_backend__stack_opt__stack_opt_info_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___ll_backend__stack_opt__stack_opt_info_0_0)),
	"ll_backend.stack_opt",
	"stack_opt_info",
	{ (void *)mercury_data_ll_backend__stack_opt__du_name_ordered_stack_opt_info_0 },
	{ (void *)mercury_data_ll_backend__stack_opt__du_ptag_ordered_stack_opt_info_0 },
	1,
	4,
	mercury_data_ll_backend__stack_opt__functor_number_map_stack_opt_info_0
};
extern const MR_TypeCtorInfo_Struct mercury_data_backend_libs__matching__type_ctor_info_matching_params_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;
extern const MR_TypeCtorInfo_Struct mercury_data_backend_libs__matching__type_ctor_info_matching_params_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;

const MR_PseudoTypeInfo mercury_data_ll_backend__stack_opt__field_types_stack_opt_params_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_backend_libs__matching__type_ctor_info_matching_params_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_bool__type_ctor_info_bool_0,
	(MR_PseudoTypeInfo) &mercury_data_bool__type_ctor_info_bool_0,
	(MR_PseudoTypeInfo) &mercury_data_bool__type_ctor_info_bool_0,
	(MR_PseudoTypeInfo) &mercury_data_set_ordlist__ti_set_ordlist_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
};

const MR_ConstString mercury_data_ll_backend__stack_opt__field_names_stack_opt_params_0_0[] = {
	"sop_matching_params",
	"sop_all_path_node_ratio",
	"sop_fixpoint_loop",
	"sop_full_path",
	"sop_on_stack",
	"sop_non_candidate_vars"
};

static const MR_DuFunctorDesc mercury_data_ll_backend__stack_opt__du_functor_desc_stack_opt_params_0_0 = {
	"stack_opt_params",
	6,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_ll_backend__stack_opt__field_types_stack_opt_params_0_0,
	mercury_data_ll_backend__stack_opt__field_names_stack_opt_params_0_0,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_ll_backend__stack_opt__du_stag_ordered_stack_opt_params_0_0[] = {
	&mercury_data_ll_backend__stack_opt__du_functor_desc_stack_opt_params_0_0

};

const MR_DuPtagLayout mercury_data_ll_backend__stack_opt__du_ptag_ordered_stack_opt_params_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_ll_backend__stack_opt__du_stag_ordered_stack_opt_params_0_0 }

};

const MR_DuFunctorDescPtr mercury_data_ll_backend__stack_opt__du_name_ordered_stack_opt_params_0[] = {
	&mercury_data_ll_backend__stack_opt__du_functor_desc_stack_opt_params_0_0
};

const MR_Integer mercury_data_ll_backend__stack_opt__functor_number_map_stack_opt_params_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_ll_backend__stack_opt__type_ctor_info_stack_opt_params_0 = {
	0,
	14,
	1,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___ll_backend__stack_opt__stack_opt_params_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___ll_backend__stack_opt__stack_opt_params_0_0)),
	"ll_backend.stack_opt",
	"stack_opt_params",
	{ (void *)mercury_data_ll_backend__stack_opt__du_name_ordered_stack_opt_params_0 },
	{ (void *)mercury_data_ll_backend__stack_opt__du_ptag_ordered_stack_opt_params_0 },
	1,
	4,
	mercury_data_ll_backend__stack_opt__functor_number_map_stack_opt_params_0
};

const MR_BaseTypeclassInfo mercury_data_base_typeclass_info_ll_backend__live_vars__stack_alloc_info__arity1__ll_backend__stack_opt__opt_stack_alloc__arity0__[] = {
	(MR_Code *) 0,
	(MR_Code *) 0,
	(MR_Code *) 0,
	(MR_Code *) 1,
	(MR_Code *) 3,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(ll_backend__stack_opt__ClassMethod_for_ll_backend__live_vars__stack_alloc_info____ll_backend__stack_opt__opt_stack_alloc__arity0______ll_backend__live_vars__at_call_site_4_4_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(ll_backend__stack_opt__ClassMethod_for_ll_backend__live_vars__stack_alloc_info____ll_backend__stack_opt__opt_stack_alloc__arity0______ll_backend__live_vars__at_resume_site_4_4_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(ll_backend__stack_opt__ClassMethod_for_ll_backend__live_vars__stack_alloc_info____ll_backend__stack_opt__opt_stack_alloc__arity0______ll_backend__live_vars__at_par_conj_4_4_0))
};

const MR_BaseTypeclassInfo mercury_data_base_typeclass_info_backend_libs__interval__build_interval_info_acc__arity1__ll_backend__stack_opt__stack_opt_info__arity0__[] = {
	(MR_Code *) 0,
	(MR_Code *) 0,
	(MR_Code *) 0,
	(MR_Code *) 1,
	(MR_Code *) 1,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(ll_backend__stack_opt__ClassMethod_for_backend_libs__interval__build_interval_info_acc____ll_backend__stack_opt__stack_opt_info__arity0______backend_libs__interval__use_cell_8_8_0))
};


static const MR_UserClosureId
mercury_data__closure_layout__f_108_108_95_98_97_99_107_101_110_100_95_95_115_116_97_99_107_95_111_112_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_112_112_108_121_95_109_97_116_99_104_105_110_103_95_108_111_111_112_95_95_91_51_93_95_48_9_0_1 = {
{
MR_PREDICATE,
"ll_backend.stack_opt",
"ll_backend.stack_opt",
"apply_matching_for_path",
8,
0
},
"ll_backend.stack_opt",
"stack_opt.m",
496,
"11"
};

static const MR_UserClosureId
mercury_data__closure_layout__ll_backend__stack_opt__dump_matching_result_3_0_6 = {
{
MR_PREDICATE,
"ll_backend.stack_opt",
"ll_backend.stack_opt",
"lambda_stack_opt_m_1110",
3,
0
},
"ll_backend.stack_opt",
"stack_opt.m",
1110,
"57"
};

static const MR_UserClosureId
mercury_data__closure_layout__ll_backend__stack_opt__dump_matching_result_3_0_5 = {
{
MR_PREDICATE,
"ll_backend.stack_opt",
"ll_backend.stack_opt",
"lambda_stack_opt_m_1107",
3,
0
},
"ll_backend.stack_opt",
"stack_opt.m",
1107,
"49"
};

static const MR_UserClosureId
mercury_data__closure_layout__ll_backend__stack_opt__dump_matching_result_3_0_4 = {
{
MR_FUNCTION,
"backend_libs.interval",
"backend_libs.interval",
"interval_id_to_int",
2,
0
},
"ll_backend.stack_opt",
"stack_opt.m",
1101,
"40"
};

static const MR_UserClosureId
mercury_data__closure_layout__ll_backend__stack_opt__dump_matching_result_3_0_3 = {
{
MR_FUNCTION,
"backend_libs.interval",
"backend_libs.interval",
"interval_id_to_int",
2,
0
},
"ll_backend.stack_opt",
"stack_opt.m",
1096,
"32"
};

static const MR_UserClosureId
mercury_data__closure_layout__ll_backend__stack_opt__dump_matching_result_3_0_2 = {
{
MR_PREDICATE,
"ll_backend.stack_opt",
"ll_backend.stack_opt",
"lambda_stack_opt_m_1085",
2,
0
},
"ll_backend.stack_opt",
"stack_opt.m",
1085,
"14"
};

static const MR_UserClosureId
mercury_data__closure_layout__ll_backend__stack_opt__dump_matching_result_3_0_1 = {
{
MR_PREDICATE,
"ll_backend.stack_opt",
"ll_backend.stack_opt",
"lambda_stack_opt_m_1084",
2,
0
},
"ll_backend.stack_opt",
"stack_opt.m",
1084,
"12"
};

static const MR_UserClosureId
mercury_data__closure_layout__ll_backend__stack_opt__dump_insert_3_0_2 = {
{
MR_PREDICATE,
"ll_backend.stack_opt",
"ll_backend.stack_opt",
"lambda_stack_opt_m_1066",
2,
0
},
"ll_backend.stack_opt",
"stack_opt.m",
1066,
"26"
};

static const MR_UserClosureId
mercury_data__closure_layout__ll_backend__stack_opt__dump_insert_3_0_1 = {
{
MR_PREDICATE,
"ll_backend.stack_opt",
"ll_backend.stack_opt",
"lambda_stack_opt_m_1053",
2,
0
},
"ll_backend.stack_opt",
"stack_opt.m",
1053,
"5"
};

static const MR_UserClosureId
mercury_data__closure_layout__ll_backend__stack_opt__dump_anchor_inserts_3_0_1 = {
{
MR_PREDICATE,
"ll_backend.stack_opt",
"ll_backend.stack_opt",
"dump_insert",
3,
0
},
"ll_backend.stack_opt",
"stack_opt.m",
1048,
"10"
};

static const MR_UserClosureId
mercury_data__closure_layout__fn__ll_backend__stack_opt__close_path_1_0_1 = {
{
MR_PREDICATE,
"ll_backend.stack_opt",
"ll_backend.stack_opt",
"lambda_stack_opt_m_661",
1,
0
},
"ll_backend.stack_opt",
"stack_opt.m",
661,
"8"
};

static const MR_UserClosureId
mercury_data__closure_layout__ll_backend__stack_opt__find_all_branches_from_cur_interval_4_0_1 = {
{
MR_PREDICATE,
"ll_backend.stack_opt",
"ll_backend.stack_opt",
"extract_match_and_save_info",
4,
0
},
"ll_backend.stack_opt",
"stack_opt.m",
782,
"24"
};

static const MR_UserClosureId
mercury_data__closure_layout__ll_backend__stack_opt__apply_interval_find_all_branches_7_0_2 = {
{
MR_FUNCTION,
"ll_backend.stack_opt",
"ll_backend.stack_opt",
"add_anchor_to_path",
3,
0
},
"ll_backend.stack_opt",
"stack_opt.m",
962,
"30"
};

static const MR_UserClosureId
mercury_data__closure_layout__ll_backend__stack_opt__apply_interval_find_all_branches_7_0_1 = {
{
MR_FUNCTION,
"ll_backend.stack_opt",
"ll_backend.stack_opt",
"add_interval_to_path",
4,
0
},
"ll_backend.stack_opt",
"stack_opt.m",
948,
"14"
};

static const MR_UserClosureId
mercury_data__closure_layout__ll_backend__stack_opt__find_all_branches_from_8_0_2 = {
{
MR_PREDICATE,
"ll_backend.stack_opt",
"ll_backend.stack_opt",
"apply_interval_find_all_branches_map",
7,
0
},
"ll_backend.stack_opt",
"stack_opt.m",
896,
"77"
};

static const MR_UserClosureId
mercury_data__closure_layout__ll_backend__stack_opt__find_all_branches_from_8_0_1 = {
{
MR_FUNCTION,
"ll_backend.stack_opt",
"ll_backend.stack_opt",
"close_path",
2,
0
},
"ll_backend.stack_opt",
"stack_opt.m",
849,
"16"
};

static const MR_UserClosureId
mercury_data__closure_layout__ll_backend__stack_opt__find_all_branches_7_0_3 = {
{
MR_PREDICATE,
"ll_backend.stack_opt",
"ll_backend.stack_opt",
"lambda_stack_opt_m_812",
2,
0
},
"ll_backend.stack_opt",
"stack_opt.m",
812,
"38"
};

static const MR_UserClosureId
mercury_data__closure_layout__ll_backend__stack_opt__find_all_branches_7_0_2 = {
{
MR_PREDICATE,
"ll_backend.stack_opt",
"ll_backend.stack_opt",
"lambda_stack_opt_m_808",
2,
0
},
"ll_backend.stack_opt",
"stack_opt.m",
808,
"29"
};

static const MR_UserClosureId
mercury_data__closure_layout__ll_backend__stack_opt__find_all_branches_7_0_1 = {
{
MR_PREDICATE,
"ll_backend.stack_opt",
"ll_backend.stack_opt",
"lambda_stack_opt_m_799",
2,
0
},
"ll_backend.stack_opt",
"stack_opt.m",
799,
"16"
};

static const MR_UserClosureId
mercury_data__closure_layout__ll_backend__stack_opt__consolidate_after_join_2_0_2 = {
{
MR_FUNCTION,
"ll_backend.stack_opt",
"ll_backend.stack_opt",
"project_after_model_non_from_all_paths",
2,
0
},
"ll_backend.stack_opt",
"stack_opt.m",
983,
"17"
};

static const MR_UserClosureId
mercury_data__closure_layout__ll_backend__stack_opt__consolidate_after_join_2_0_1 = {
{
MR_FUNCTION,
"ll_backend.stack_opt",
"ll_backend.stack_opt",
"project_paths_from_all_paths",
2,
0
},
"ll_backend.stack_opt",
"stack_opt.m",
980,
"12"
};

static const MR_UserClosureId
mercury_data__closure_layout__ll_backend__stack_opt__record_matching_result_11_0_2 = {
{
MR_PREDICATE,
"ll_backend.stack_opt",
"ll_backend.stack_opt",
"add_anchor_inserts",
10,
0
},
"ll_backend.stack_opt",
"stack_opt.m",
557,
"24"
};

static const MR_UserClosureId
mercury_data__closure_layout__ll_backend__stack_opt__record_matching_result_11_0_1 = {
{
MR_PREDICATE,
"ll_backend.stack_opt",
"ll_backend.stack_opt",
"record_cell_var_for_interval",
9,
0
},
"ll_backend.stack_opt",
"stack_opt.m",
554,
"21"
};

static const MR_UserClosureId
mercury_data__closure_layout__ll_backend__stack_opt__dump_stack_opt_info_3_0_2 = {
{
MR_PREDICATE,
"ll_backend.stack_opt",
"ll_backend.stack_opt",
"dump_matching_result",
3,
0
},
"ll_backend.stack_opt",
"stack_opt.m",
1038,
"13"
};

static const MR_UserClosureId
mercury_data__closure_layout__ll_backend__stack_opt__dump_stack_opt_info_3_0_1 = {
{
MR_PREDICATE,
"ll_backend.stack_opt",
"ll_backend.stack_opt",
"dump_anchor_inserts",
3,
0
},
"ll_backend.stack_opt",
"stack_opt.m",
1035,
"9"
};


MR_decl_entry(map__to_assoc_list_2_0);
MR_decl_entry(io__write_string_3_0);
extern const MR_TypeCtorInfo_Struct mercury_data_io__type_ctor_info_state_0;
MR_decl_entry(list__foldl_4_2);

MR_BEGIN_MODULE(ll_backend__stack_opt_module0)
	MR_init_entry1(ll_backend__stack_opt__dump_stack_opt_info_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__stack_opt__dump_stack_opt_info_3_0);
	MR_init_label5(ll_backend__stack_opt__dump_stack_opt_info_3_0,3,4,7,8,10)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'dump_stack_opt_info'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__stack_opt__dump_stack_opt_info_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(3) = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(backend_libs__interval, anchor);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_tfield(0, MR_sv(1), 1);
	MR_np_call_localret_ent(map__to_assoc_list_2_0,
		ll_backend__stack_opt__dump_stack_opt_info_3_0_i3);
MR_def_label(ll_backend__stack_opt__dump_stack_opt_info_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("\nANCHOR INSERT:\n", 16);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__stack_opt__dump_stack_opt_info_3_0_i4);
MR_def_label(ll_backend__stack_opt__dump_stack_opt_info_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = (MR_Word) MR_IO_CTOR_ADDR;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,1,0);
	MR_r2 = MR_sv(2);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,3,0);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__foldl_4_2,
		ll_backend__stack_opt__dump_stack_opt_info_3_0_i7);
MR_def_label(ll_backend__stack_opt__dump_stack_opt_info_3_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("\nMATCHING RESULTS:\n", 19);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__stack_opt__dump_stack_opt_info_3_0_i8);
MR_def_label(ll_backend__stack_opt__dump_stack_opt_info_3_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__stack_opt, matching_result);
	MR_r2 = MR_sv(2);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,3,1);
	MR_r4 = MR_tfield(0, MR_sv(1), 2);
	MR_np_call_localret_ent(list__foldl_4_2,
		ll_backend__stack_opt__dump_stack_opt_info_3_0_i10);
MR_def_label(ll_backend__stack_opt__dump_stack_opt_info_3_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("\n", 1);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(io__write_string_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__hlds_pred__proc_info_get_goal_2_0);
MR_decl_entry(hlds__hlds_pred__proc_info_get_vartypes_2_0);
MR_decl_entry(hlds__hlds_pred__proc_info_get_varset_2_0);
MR_decl_entry(hlds__arg_info__partition_proc_args_5_0);
MR_decl_entry(fn__set__union_list_1_0);
MR_decl_entry(hlds__hlds_module__module_info_get_globals_2_0);
MR_decl_entry(libs__globals__lookup_bool_option_3_0);
MR_decl_entry(f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_117_110_105_111_110_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0);
MR_decl_entry(fn__counter__init_1_0);
MR_decl_entry(counter__allocate_3_0);
MR_decl_entry(fn__map__singleton_2_0);
MR_decl_entry(fn__map__init_0_0);
MR_decl_entry(libs__globals__lookup_int_option_3_0);
MR_decl_entry(fn__set__init_0_0);
extern const MR_TypeCtorInfo_Struct mercury_data_backend_libs__interval__type_ctor_info_resume_save_status_0;
extern const MR_TypeCtorInfo_Struct mercury_data_backend_libs__interval__type_ctor_info_branch_end_info_0;
MR_decl_entry(fn__set__make_singleton_set_1_0);
extern const MR_TypeCtorInfo_Struct mercury_data_backend_libs__interval__type_ctor_info_anchor_follow_info_0;
MR_decl_entry(backend_libs__interval__build_interval_info_in_goal_5_0);
MR_decl_entry(backend_libs__interval__dump_interval_info_3_0);
MR_decl_entry(map__is_empty_1_0);
MR_decl_entry(backend_libs__interval__record_decisions_in_goal_10_0);
MR_decl_entry(backend_libs__interval__apply_headvar_correction_4_0);
MR_decl_entry(hlds__hlds_pred__proc_info_set_goal_3_0);
MR_decl_entry(hlds__hlds_pred__proc_info_set_varset_3_0);
MR_decl_entry(hlds__hlds_pred__proc_info_set_vartypes_3_0);

MR_BEGIN_MODULE(ll_backend__stack_opt_module1)
	MR_init_entry1(ll_backend__stack_opt__optimize_live_sets_7_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__stack_opt__optimize_live_sets_7_0);
	MR_init_label10(ll_backend__stack_opt__optimize_live_sets_7_0,2,3,4,5,10,11,12,15,14,16)
	MR_init_label10(ll_backend__stack_opt__optimize_live_sets_7_0,17,18,20,21,23,25,26,27,28,29)
	MR_init_label10(ll_backend__stack_opt__optimize_live_sets_7_0,30,31,32,34,35,36,37,38,40,41)
	MR_init_label10(ll_backend__stack_opt__optimize_live_sets_7_0,42,43,44,45,46,48,53,55,56,54)
	MR_init_label9(ll_backend__stack_opt__optimize_live_sets_7_0,57,60,58,62,64,65,66,67,68)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'optimize_live_sets'/7 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__stack_opt__optimize_live_sets_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(35);
	MR_sv(35) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_r5;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(24) = MR_tempr1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_goal_2_0,
		ll_backend__stack_opt__optimize_live_sets_7_0_i2);
MR_def_label(ll_backend__stack_opt__optimize_live_sets_7_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(24);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_vartypes_2_0,
		ll_backend__stack_opt__optimize_live_sets_7_0_i3);
MR_def_label(ll_backend__stack_opt__optimize_live_sets_7_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(24);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_varset_2_0,
		ll_backend__stack_opt__optimize_live_sets_7_0_i4);
MR_def_label(ll_backend__stack_opt__optimize_live_sets_7_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(24);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(hlds__arg_info__partition_proc_args_5_0,
		ll_backend__stack_opt__optimize_live_sets_7_0_i5);
MR_def_label(ll_backend__stack_opt__optimize_live_sets_7_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r3;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_r2;
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = MR_tempr2;
	MR_sv(8) = MR_r2;
	MR_sv(11) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_sv(30) = (MR_Word) MR_TAG_COMMON(0,0,2);
	MR_r1 = MR_sv(30);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__set__union_list_1_0,
		ll_backend__stack_opt__optimize_live_sets_7_0_i10);
MR_def_label(ll_backend__stack_opt__optimize_live_sets_7_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_globals_2_0,
		ll_backend__stack_opt__optimize_live_sets_7_0_i11);
MR_def_label(ll_backend__stack_opt__optimize_live_sets_7_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(10) = MR_r1;
	MR_r2 = (MR_Integer) 362;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		ll_backend__stack_opt__optimize_live_sets_7_0_i12);
MR_def_label(ll_backend__stack_opt__optimize_live_sets_7_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(ll_backend__stack_opt__optimize_live_sets_7_0_i14);
	}
	MR_r1 = MR_sv(11);
	MR_r2 = MR_sv(30);
	MR_r3 = MR_sv(9);
	MR_r4 = MR_sv(7);
	MR_np_call_localret_ent(f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_117_110_105_111_110_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		ll_backend__stack_opt__optimize_live_sets_7_0_i15);
MR_def_label(ll_backend__stack_opt__optimize_live_sets_7_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_r1 = (MR_Integer) 1;
	MR_np_call_localret_ent(fn__counter__init_1_0,
		ll_backend__stack_opt__optimize_live_sets_7_0_i16);
MR_def_label(ll_backend__stack_opt__optimize_live_sets_7_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_np_call_localret_ent(fn__counter__init_1_0,
		ll_backend__stack_opt__optimize_live_sets_7_0_i16);
MR_def_label(ll_backend__stack_opt__optimize_live_sets_7_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(counter__allocate_3_0,
		ll_backend__stack_opt__optimize_live_sets_7_0_i17);
MR_def_label(ll_backend__stack_opt__optimize_live_sets_7_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(11) = MR_r2;
	MR_sv(12) = MR_r1;
	MR_sv(29) = (MR_Word) MR_CTOR0_ADDR(backend_libs__interval, interval_id);
	MR_sv(31) = (MR_Word) MR_CTOR0_ADDR(backend_libs__interval, anchor);
	MR_r1 = MR_sv(29);
	MR_r2 = MR_sv(31);
	MR_r3 = MR_sv(12);
	MR_r4 = (MR_Word) MR_tbmkword(0, 1);
	MR_np_call_localret_ent(fn__map__singleton_2_0,
		ll_backend__stack_opt__optimize_live_sets_7_0_i18);
MR_def_label(ll_backend__stack_opt__optimize_live_sets_7_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(13) = MR_r1;
	MR_sv(32) = (MR_Word) MR_LIST_CTOR_ADDR;
	MR_sv(33) = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r1 = MR_sv(31);
	MR_r2 = MR_sv(33);
	MR_np_call_localret_ent(fn__map__init_0_0,
		ll_backend__stack_opt__optimize_live_sets_7_0_i20);
MR_def_label(ll_backend__stack_opt__optimize_live_sets_7_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(14) = MR_r1;
	MR_r1 = MR_sv(29);
	MR_r2 = MR_sv(31);
	MR_np_call_localret_ent(fn__map__init_0_0,
		ll_backend__stack_opt__optimize_live_sets_7_0_i21);
MR_def_label(ll_backend__stack_opt__optimize_live_sets_7_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(15) = MR_r1;
	MR_r1 = MR_sv(29);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,3);
	MR_r3 = MR_sv(12);
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	MR_np_call_localret_ent(fn__map__singleton_2_0,
		ll_backend__stack_opt__optimize_live_sets_7_0_i23);
MR_def_label(ll_backend__stack_opt__optimize_live_sets_7_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 0) = (MR_Word) MR_CTOR1_ADDR(set_ordlist, set_ordlist);
	MR_tfield(0, MR_r2, 1) = MR_sv(30);
	MR_sv(16) = MR_r1;
	MR_sv(34) = MR_r2;
	MR_r1 = MR_sv(29);
	MR_r3 = MR_sv(12);
	MR_r4 = MR_sv(8);
	MR_np_call_localret_ent(fn__map__singleton_2_0,
		ll_backend__stack_opt__optimize_live_sets_7_0_i25);
MR_def_label(ll_backend__stack_opt__optimize_live_sets_7_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(17) = MR_r1;
	MR_r1 = MR_sv(10);
	MR_r2 = (MR_Integer) 363;
	MR_np_call_localret_ent(libs__globals__lookup_int_option_3_0,
		ll_backend__stack_opt__optimize_live_sets_7_0_i26);
MR_def_label(ll_backend__stack_opt__optimize_live_sets_7_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(18) = MR_r1;
	MR_r1 = MR_sv(10);
	MR_r2 = (MR_Integer) 364;
	MR_np_call_localret_ent(libs__globals__lookup_int_option_3_0,
		ll_backend__stack_opt__optimize_live_sets_7_0_i27);
MR_def_label(ll_backend__stack_opt__optimize_live_sets_7_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(19) = MR_r1;
	MR_r1 = MR_sv(10);
	MR_r2 = (MR_Integer) 365;
	MR_np_call_localret_ent(libs__globals__lookup_int_option_3_0,
		ll_backend__stack_opt__optimize_live_sets_7_0_i28);
MR_def_label(ll_backend__stack_opt__optimize_live_sets_7_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(20) = MR_r1;
	MR_r1 = MR_sv(10);
	MR_r2 = (MR_Integer) 366;
	MR_np_call_localret_ent(libs__globals__lookup_int_option_3_0,
		ll_backend__stack_opt__optimize_live_sets_7_0_i29);
MR_def_label(ll_backend__stack_opt__optimize_live_sets_7_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(21) = MR_r1;
	MR_r1 = MR_sv(10);
	MR_r2 = (MR_Integer) 367;
	MR_np_call_localret_ent(libs__globals__lookup_int_option_3_0,
		ll_backend__stack_opt__optimize_live_sets_7_0_i30);
MR_def_label(ll_backend__stack_opt__optimize_live_sets_7_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(22) = MR_r1;
	MR_r1 = MR_sv(10);
	MR_r2 = (MR_Integer) 368;
	MR_np_call_localret_ent(libs__globals__lookup_int_option_3_0,
		ll_backend__stack_opt__optimize_live_sets_7_0_i31);
MR_def_label(ll_backend__stack_opt__optimize_live_sets_7_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(23) = MR_r1;
	MR_r1 = MR_sv(10);
	MR_r2 = (MR_Integer) 370;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		ll_backend__stack_opt__optimize_live_sets_7_0_i32);
MR_def_label(ll_backend__stack_opt__optimize_live_sets_7_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 7);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(18);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(19);
	MR_tfield(0, MR_tempr1, 2) = MR_sv(20);
	MR_tfield(0, MR_tempr1, 3) = MR_sv(21);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(22);
	MR_tfield(0, MR_tempr1, 5) = MR_sv(23);
	MR_tfield(0, MR_tempr1, 6) = MR_r1;
	MR_sv(18) = MR_tempr1;
	MR_r1 = MR_sv(10);
	MR_r2 = (MR_Integer) 369;
	}
	MR_np_call_localret_ent(libs__globals__lookup_int_option_3_0,
		ll_backend__stack_opt__optimize_live_sets_7_0_i34);
MR_def_label(ll_backend__stack_opt__optimize_live_sets_7_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(19) = MR_r1;
	MR_r1 = MR_sv(10);
	MR_r2 = (MR_Integer) 359;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		ll_backend__stack_opt__optimize_live_sets_7_0_i35);
MR_def_label(ll_backend__stack_opt__optimize_live_sets_7_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(20) = MR_r1;
	MR_r1 = MR_sv(10);
	MR_r2 = (MR_Integer) 360;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		ll_backend__stack_opt__optimize_live_sets_7_0_i36);
MR_def_label(ll_backend__stack_opt__optimize_live_sets_7_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(21) = MR_r1;
	MR_r1 = MR_sv(10);
	MR_r2 = (MR_Integer) 361;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		ll_backend__stack_opt__optimize_live_sets_7_0_i37);
MR_def_label(ll_backend__stack_opt__optimize_live_sets_7_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(10);
	MR_sv(10) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Integer) 310;
	}
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		ll_backend__stack_opt__optimize_live_sets_7_0_i38);
MR_def_label(ll_backend__stack_opt__optimize_live_sets_7_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 3);
	MR_tfield(0, MR_r2, 0) = MR_sv(1);
	MR_tfield(0, MR_r2, 1) = MR_sv(6);
	MR_tfield(0, MR_r2, 2) = MR_r1;
	MR_sv(1) = MR_r2;
	MR_r1 = MR_sv(30);
	MR_np_call_localret_ent(fn__set__init_0_0,
		ll_backend__stack_opt__optimize_live_sets_7_0_i40);
MR_def_label(ll_backend__stack_opt__optimize_live_sets_7_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(22) = MR_r1;
	MR_sv(25) = (MR_Word) MR_CTOR0_ADDR(mdbcomp__goal_path, goal_id);
	MR_r1 = MR_sv(25);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(backend_libs__interval, resume_save_status);
	MR_np_call_localret_ent(fn__map__init_0_0,
		ll_backend__stack_opt__optimize_live_sets_7_0_i41);
MR_def_label(ll_backend__stack_opt__optimize_live_sets_7_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(23) = MR_r1;
	MR_r1 = MR_sv(25);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(backend_libs__interval, branch_end_info);
	MR_np_call_localret_ent(fn__map__init_0_0,
		ll_backend__stack_opt__optimize_live_sets_7_0_i42);
MR_def_label(ll_backend__stack_opt__optimize_live_sets_7_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(25) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__goal_path, goal_id);
	MR_r2 = MR_sv(29);
	MR_np_call_localret_ent(fn__map__init_0_0,
		ll_backend__stack_opt__optimize_live_sets_7_0_i43);
MR_def_label(ll_backend__stack_opt__optimize_live_sets_7_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(26) = MR_r1;
	MR_r1 = MR_sv(29);
	MR_r2 = MR_sv(12);
	MR_np_call_localret_ent(fn__set__make_singleton_set_1_0,
		ll_backend__stack_opt__optimize_live_sets_7_0_i44);
MR_def_label(ll_backend__stack_opt__optimize_live_sets_7_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(27) = MR_r1;
	MR_r1 = MR_sv(31);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(backend_libs__interval, anchor_follow_info);
	MR_np_call_localret_ent(fn__map__init_0_0,
		ll_backend__stack_opt__optimize_live_sets_7_0_i45);
MR_def_label(ll_backend__stack_opt__optimize_live_sets_7_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(28) = MR_r1;
	MR_r1 = MR_sv(31);
	MR_np_call_localret_ent(fn__set__init_0_0,
		ll_backend__stack_opt__optimize_live_sets_7_0_i46);
MR_def_label(ll_backend__stack_opt__optimize_live_sets_7_0,46)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 0) = MR_sv(32);
	MR_tfield(0, MR_r2, 1) = MR_sv(34);
	MR_sv(29) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(backend_libs__interval, interval_id);
	MR_np_call_localret_ent(fn__map__init_0_0,
		ll_backend__stack_opt__optimize_live_sets_7_0_i48);
MR_def_label(ll_backend__stack_opt__optimize_live_sets_7_0,48)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 16);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(22);
	MR_tfield(0, MR_tempr1, 2) = MR_sv(8);
	MR_tfield(0, MR_tempr1, 3) = MR_sv(23);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(25);
	MR_tfield(0, MR_tempr1, 5) = MR_sv(26);
	MR_tfield(0, MR_tempr1, 6) = MR_sv(12);
	MR_tfield(0, MR_tempr1, 7) = MR_sv(11);
	MR_tfield(0, MR_tempr1, 8) = MR_sv(27);
	MR_tfield(0, MR_tempr1, 9) = MR_sv(28);
	MR_tfield(0, MR_tempr1, 10) = MR_sv(29);
	MR_tfield(0, MR_tempr1, 11) = MR_sv(15);
	MR_tfield(0, MR_tempr1, 12) = MR_sv(13);
	MR_tfield(0, MR_tempr1, 13) = MR_sv(16);
	MR_tfield(0, MR_tempr1, 14) = MR_sv(17);
	MR_tfield(0, MR_tempr1, 15) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 6);
	MR_tfield(0, MR_tempr2, 0) = MR_sv(18);
	MR_tfield(0, MR_tempr2, 1) = MR_sv(19);
	MR_tfield(0, MR_tempr2, 2) = MR_sv(20);
	MR_tfield(0, MR_tempr2, 3) = MR_sv(21);
	MR_tfield(0, MR_tempr2, 4) = MR_sv(10);
	MR_tfield(0, MR_tempr2, 5) = MR_sv(7);
	MR_tag_alloc_heap(MR_tempr3, 0, (MR_Integer) 3);
	MR_r4 = MR_tempr3;
	MR_tfield(0, MR_tempr3, 0) = MR_tempr2;
	MR_tfield(0, MR_tempr3, 1) = MR_sv(14);
	MR_tfield(0, MR_tempr3, 2) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,4);
	MR_r2 = MR_sv(5);
	}
	MR_np_call_localret_ent(backend_libs__interval__build_interval_info_in_goal_5_0,
		ll_backend__stack_opt__optimize_live_sets_7_0_i53);
MR_def_label(ll_backend__stack_opt__optimize_live_sets_7_0,53)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_sv(3) != MR_sv(4))) {
		MR_GOTO_LAB(ll_backend__stack_opt__optimize_live_sets_7_0_i54);
	}
	MR_sv(1) = MR_r2;
	MR_np_call_localret_ent(backend_libs__interval__dump_interval_info_3_0,
		ll_backend__stack_opt__optimize_live_sets_7_0_i55);
MR_def_label(ll_backend__stack_opt__optimize_live_sets_7_0,55)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(ll_backend__stack_opt__dump_stack_opt_info_3_0,
		ll_backend__stack_opt__optimize_live_sets_7_0_i56);
MR_def_label(ll_backend__stack_opt__optimize_live_sets_7_0,56)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_tfield(0, MR_sv(1), 1);
	MR_r1 = MR_sv(31);
	MR_r2 = MR_sv(33);
	MR_GOTO_LAB(ll_backend__stack_opt__optimize_live_sets_7_0_i57);
MR_def_label(ll_backend__stack_opt__optimize_live_sets_7_0,54)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_tfield(0, MR_r2, 1);
	MR_r1 = MR_sv(31);
	MR_r2 = MR_sv(33);
MR_def_label(ll_backend__stack_opt__optimize_live_sets_7_0,57)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r3;
	MR_np_call_localret_ent(map__is_empty_1_0,
		ll_backend__stack_opt__optimize_live_sets_7_0_i60);
MR_def_label(ll_backend__stack_opt__optimize_live_sets_7_0,60)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__stack_opt__optimize_live_sets_7_0_i58);
	}
	MR_r2 = (MR_Integer) 0;
	MR_r1 = MR_sv(24);
	MR_decr_sp_and_return(35);
MR_def_label(ll_backend__stack_opt__optimize_live_sets_7_0,58)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_r1 = MR_sv(30);
	MR_r2 = MR_r1;
	}
	MR_np_call_localret_ent(fn__map__init_0_0,
		ll_backend__stack_opt__optimize_live_sets_7_0_i62);
MR_def_label(ll_backend__stack_opt__optimize_live_sets_7_0,62)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(6);
	MR_r4 = MR_tempr1;
	MR_r5 = MR_sv(1);
	MR_r6 = (MR_Word) MR_TAG_COMMON(1,4,0);
	}
	MR_np_call_localret_ent(backend_libs__interval__record_decisions_in_goal_10_0,
		ll_backend__stack_opt__optimize_live_sets_7_0_i64);
MR_def_label(ll_backend__stack_opt__optimize_live_sets_7_0,64)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(9);
	MR_r2 = MR_r4;
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(backend_libs__interval__apply_headvar_correction_4_0,
		ll_backend__stack_opt__optimize_live_sets_7_0_i65);
MR_def_label(ll_backend__stack_opt__optimize_live_sets_7_0,65)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(24);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_set_goal_3_0,
		ll_backend__stack_opt__optimize_live_sets_7_0_i66);
MR_def_label(ll_backend__stack_opt__optimize_live_sets_7_0,66)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_set_varset_3_0,
		ll_backend__stack_opt__optimize_live_sets_7_0_i67);
MR_def_label(ll_backend__stack_opt__optimize_live_sets_7_0,67)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_set_vartypes_3_0,
		ll_backend__stack_opt__optimize_live_sets_7_0_i68);
MR_def_label(ll_backend__stack_opt__optimize_live_sets_7_0,68)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 1;
	MR_decr_sp_and_return(35);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__hlds__hlds_out__hlds_out_util__init_hlds_out_info_1_0);
MR_decl_entry(hlds__hlds_out__hlds_out_goal__write_goal_9_0);

MR_BEGIN_MODULE(ll_backend__stack_opt_module2)
	MR_init_entry1(ll_backend__stack_opt__maybe_write_progress_message_7_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__stack_opt__maybe_write_progress_message_7_0);
	MR_init_label8(ll_backend__stack_opt__maybe_write_progress_message_7_0,3,4,5,6,7,8,9,20)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'maybe_write_progress_message'/7 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__stack_opt__maybe_write_progress_message_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r2 != MR_r3)) {
		MR_GOTO_LAB(ll_backend__stack_opt__maybe_write_progress_message_7_0_i20);
	}
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r4;
	MR_sv(2) = MR_r5;
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__stack_opt__maybe_write_progress_message_7_0_i3);
MR_def_label(ll_backend__stack_opt__maybe_write_progress_message_7_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(":\n", 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__stack_opt__maybe_write_progress_message_7_0_i4);
MR_def_label(ll_backend__stack_opt__maybe_write_progress_message_7_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_goal_2_0,
		ll_backend__stack_opt__maybe_write_progress_message_7_0_i5);
MR_def_label(ll_backend__stack_opt__maybe_write_progress_message_7_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_varset_2_0,
		ll_backend__stack_opt__maybe_write_progress_message_7_0_i6);
MR_def_label(ll_backend__stack_opt__maybe_write_progress_message_7_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_globals_2_0,
		ll_backend__stack_opt__maybe_write_progress_message_7_0_i7);
MR_def_label(ll_backend__stack_opt__maybe_write_progress_message_7_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__hlds__hlds_out__hlds_out_util__init_hlds_out_info_1_0,
		ll_backend__stack_opt__maybe_write_progress_message_7_0_i8);
MR_def_label(ll_backend__stack_opt__maybe_write_progress_message_7_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_r5 = (MR_Integer) 1;
	MR_r6 = (MR_Integer) 0;
	MR_r7 = (MR_Word) MR_string_const("\n", 1);
	MR_np_call_localret_ent(hlds__hlds_out__hlds_out_goal__write_goal_9_0,
		ll_backend__stack_opt__maybe_write_progress_message_7_0_i9);
MR_def_label(ll_backend__stack_opt__maybe_write_progress_message_7_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("\n", 1);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(io__write_string_3_0);
MR_def_label(ll_backend__stack_opt__maybe_write_progress_message_7_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__check_hlds__simplify__list_to_simplifications_1_0);
MR_decl_entry(check_hlds__simplify__simplify_proc_7_0);
MR_decl_entry(ll_backend__liveness__detect_liveness_proc_4_0);
MR_decl_entry(ll_backend__liveness__initial_liveness_4_0);
MR_decl_entry(hlds__hlds_module__module_info_pred_info_3_0);
MR_decl_entry(hlds__hlds_pred__body_should_use_typeinfo_liveness_3_0);
MR_decl_entry(hlds__goal_path__fill_goal_id_slots_in_proc_4_0);
MR_decl_entry(set__init_1_0);
MR_decl_entry(ll_backend__live_vars__build_live_sets_in_goal_no_par_stack_10_0);
MR_decl_entry(ll_backend__store_alloc__allocate_store_maps_5_0);
MR_decl_entry(hlds__hlds_pred__pred_id_to_int_2_0);
MR_decl_entry(hlds__quantification__requantify_proc_general_3_0);
MR_decl_entry(check_hlds__mode_util__recompute_instmap_delta_proc_5_0);

MR_BEGIN_MODULE(ll_backend__stack_opt_module3)
	MR_init_entry1(ll_backend__stack_opt__stack_opt_cell_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__stack_opt__stack_opt_cell_5_0);
	MR_init_label10(ll_backend__stack_opt__stack_opt_cell_5_0,2,3,4,5,6,7,8,9,11,12)
	MR_init_label10(ll_backend__stack_opt__stack_opt_cell_5_0,14,15,16,18,19,20,21,22,24,25)
	MR_init_label10(ll_backend__stack_opt__stack_opt_cell_5_0,26,27,28,29,30,31,23,32,33,35)
	MR_init_label5(ll_backend__stack_opt__stack_opt_cell_5_0,36,37,38,39,40)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'stack_opt_cell'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__ll_backend__stack_opt__stack_opt_cell_5_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(11);
	MR_sv(11) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_tfield(0, MR_r1, 0);
	MR_sv(3) = MR_tfield(0, MR_r1, 1);
	MR_sv(4) = MR_r2;
	MR_sv(5) = MR_r3;
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_np_call_localret_ent(fn__check_hlds__simplify__list_to_simplifications_1_0,
		ll_backend__stack_opt__stack_opt_cell_5_0_i2);
MR_def_label(ll_backend__stack_opt__stack_opt_cell_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(5);
	MR_r5 = MR_sv(4);
	MR_np_call_localret_ent(check_hlds__simplify__simplify_proc_7_0,
		ll_backend__stack_opt__stack_opt_cell_5_0_i3);
MR_def_label(ll_backend__stack_opt__stack_opt_cell_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(ll_backend__liveness__detect_liveness_proc_4_0,
		ll_backend__stack_opt__stack_opt_cell_5_0_i4);
MR_def_label(ll_backend__stack_opt__stack_opt_cell_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(9);
	MR_np_call_localret_ent(ll_backend__liveness__initial_liveness_4_0,
		ll_backend__stack_opt__stack_opt_cell_5_0_i5);
MR_def_label(ll_backend__stack_opt__stack_opt_cell_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(9);
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_globals_2_0,
		ll_backend__stack_opt__stack_opt_cell_5_0_i6);
MR_def_label(ll_backend__stack_opt__stack_opt_cell_5_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(hlds__hlds_module__module_info_pred_info_3_0,
		ll_backend__stack_opt__stack_opt_cell_5_0_i7);
MR_def_label(ll_backend__stack_opt__stack_opt_cell_5_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(hlds__hlds_pred__body_should_use_typeinfo_liveness_3_0,
		ll_backend__stack_opt__stack_opt_cell_5_0_i8);
MR_def_label(ll_backend__stack_opt__stack_opt_cell_5_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = (MR_Integer) 310;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		ll_backend__stack_opt__stack_opt_cell_5_0_i9);
MR_def_label(ll_backend__stack_opt__stack_opt_cell_5_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_tempr2 = MR_sv(9);
	MR_tfield(0, MR_tempr1, 0) = MR_tempr2;
	MR_tempr3 = MR_sv(6);
	MR_tfield(0, MR_tempr1, 1) = MR_tempr3;
	MR_tfield(0, MR_tempr1, 2) = MR_sv(5);
	MR_tfield(0, MR_tempr1, 3) = MR_r1;
	MR_sv(5) = MR_tempr1;
	MR_r1 = MR_tempr2;
	MR_r2 = MR_tempr3;
	}
	MR_np_call_localret_ent(hlds__goal_path__fill_goal_id_slots_in_proc_4_0,
		ll_backend__stack_opt__stack_opt_cell_5_0_i11);
MR_def_label(ll_backend__stack_opt__stack_opt_cell_5_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(10) = MR_r2;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_goal_2_0,
		ll_backend__stack_opt__stack_opt_cell_5_0_i12);
MR_def_label(ll_backend__stack_opt__stack_opt_cell_5_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_sv(8) = (MR_Word) MR_TAG_COMMON(0,0,2);
	MR_r1 = MR_sv(8);
	MR_np_call_localret_ent(fn__set__init_0_0,
		ll_backend__stack_opt__stack_opt_cell_5_0_i14);
MR_def_label(ll_backend__stack_opt__stack_opt_cell_5_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_r1 = MR_sv(8);
	MR_np_call_localret_ent(set__init_1_0,
		ll_backend__stack_opt__stack_opt_cell_5_0_i15);
MR_def_label(ll_backend__stack_opt__stack_opt_cell_5_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,2);
	MR_np_call_localret_ent(set__init_1_0,
		ll_backend__stack_opt__stack_opt_cell_5_0_i16);
MR_def_label(ll_backend__stack_opt__stack_opt_cell_5_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,5);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(8);
	MR_r4 = MR_sv(5);
	MR_r5 = MR_sv(7);
	MR_r6 = MR_sv(3);
	MR_r7 = MR_tempr1;
	}
	MR_np_call_localret_ent(ll_backend__live_vars__build_live_sets_in_goal_no_par_stack_10_0,
		ll_backend__stack_opt__stack_opt_cell_5_0_i18);
MR_def_label(ll_backend__stack_opt__stack_opt_cell_5_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r2;
	MR_r2 = MR_sv(10);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_set_goal_3_0,
		ll_backend__stack_opt__stack_opt_cell_5_0_i19);
MR_def_label(ll_backend__stack_opt__stack_opt_cell_5_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 1;
	MR_r2 = MR_sv(9);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(ll_backend__store_alloc__allocate_store_maps_5_0,
		ll_backend__stack_opt__stack_opt_cell_5_0_i20);
MR_def_label(ll_backend__stack_opt__stack_opt_cell_5_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Integer) 73;
	}
	MR_np_call_localret_ent(libs__globals__lookup_int_option_3_0,
		ll_backend__stack_opt__stack_opt_cell_5_0_i21);
MR_def_label(ll_backend__stack_opt__stack_opt_cell_5_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(hlds__hlds_pred__pred_id_to_int_2_0,
		ll_backend__stack_opt__stack_opt_cell_5_0_i22);
MR_def_label(ll_backend__stack_opt__stack_opt_cell_5_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_sv(1) != MR_r1)) {
		MR_GOTO_LAB(ll_backend__stack_opt__stack_opt_cell_5_0_i23);
	}
	MR_sv(2) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("\nbefore stack opt cell", 22);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__stack_opt__stack_opt_cell_5_0_i24);
MR_def_label(ll_backend__stack_opt__stack_opt_cell_5_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(":\n", 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__stack_opt__stack_opt_cell_5_0_i25);
MR_def_label(ll_backend__stack_opt__stack_opt_cell_5_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_goal_2_0,
		ll_backend__stack_opt__stack_opt_cell_5_0_i26);
MR_def_label(ll_backend__stack_opt__stack_opt_cell_5_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_varset_2_0,
		ll_backend__stack_opt__stack_opt_cell_5_0_i27);
MR_def_label(ll_backend__stack_opt__stack_opt_cell_5_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(9);
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_globals_2_0,
		ll_backend__stack_opt__stack_opt_cell_5_0_i28);
MR_def_label(ll_backend__stack_opt__stack_opt_cell_5_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__hlds__hlds_out__hlds_out_util__init_hlds_out_info_1_0,
		ll_backend__stack_opt__stack_opt_cell_5_0_i29);
MR_def_label(ll_backend__stack_opt__stack_opt_cell_5_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(9);
	MR_r4 = MR_sv(6);
	MR_r5 = (MR_Integer) 1;
	MR_r6 = (MR_Integer) 0;
	MR_r7 = (MR_Word) MR_string_const("\n", 1);
	MR_np_call_localret_ent(hlds__hlds_out__hlds_out_goal__write_goal_9_0,
		ll_backend__stack_opt__stack_opt_cell_5_0_i30);
MR_def_label(ll_backend__stack_opt__stack_opt_cell_5_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("\n", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__stack_opt__stack_opt_cell_5_0_i31);
MR_def_label(ll_backend__stack_opt__stack_opt_cell_5_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(3);
	MR_r4 = MR_sv(1);
	MR_r5 = MR_sv(2);
	MR_r1 = MR_sv(9);
	MR_r3 = MR_sv(4);
	MR_GOTO_LAB(ll_backend__stack_opt__stack_opt_cell_5_0_i32);
MR_def_label(ll_backend__stack_opt__stack_opt_cell_5_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(3);
	MR_r4 = MR_sv(1);
	MR_r5 = MR_r1;
	MR_r1 = MR_sv(9);
	MR_r3 = MR_sv(4);
MR_def_label(ll_backend__stack_opt__stack_opt_cell_5_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r4;
	MR_sv(2) = MR_r5;
	MR_sv(9) = MR_r1;
	MR_np_call_localret_ent(ll_backend__stack_opt__optimize_live_sets_7_0,
		ll_backend__stack_opt__stack_opt_cell_5_0_i33);
MR_def_label(ll_backend__stack_opt__stack_opt_cell_5_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r2,0)) {
		MR_GOTO_LAB(ll_backend__stack_opt__stack_opt_cell_5_0_i35);
	}
	MR_r2 = MR_sv(9);
	MR_decr_sp_and_return(11);
MR_def_label(ll_backend__stack_opt__stack_opt_cell_5_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("\nafter stack opt transformation", 31);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(9);
	MR_np_call_localret_ent(ll_backend__stack_opt__maybe_write_progress_message_7_0,
		ll_backend__stack_opt__stack_opt_cell_5_0_i36);
MR_def_label(ll_backend__stack_opt__stack_opt_cell_5_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(hlds__quantification__requantify_proc_general_3_0,
		ll_backend__stack_opt__stack_opt_cell_5_0_i37);
MR_def_label(ll_backend__stack_opt__stack_opt_cell_5_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("\nafter stack opt requantify", 27);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(9);
	MR_np_call_localret_ent(ll_backend__stack_opt__maybe_write_progress_message_7_0,
		ll_backend__stack_opt__stack_opt_cell_5_0_i38);
MR_def_label(ll_backend__stack_opt__stack_opt_cell_5_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(9);
	MR_np_call_localret_ent(check_hlds__mode_util__recompute_instmap_delta_proc_5_0,
		ll_backend__stack_opt__stack_opt_cell_5_0_i39);
MR_def_label(ll_backend__stack_opt__stack_opt_cell_5_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_tempr2 = MR_sv(2);
	MR_sv(2) = MR_r2;
	MR_r1 = (MR_Word) MR_string_const("\nafter stack opt recompute instmaps", 35);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	MR_r4 = MR_sv(1);
	MR_r5 = MR_sv(2);
	}
	MR_np_call_localret_ent(ll_backend__stack_opt__maybe_write_progress_message_7_0,
		ll_backend__stack_opt__stack_opt_cell_5_0_i40);
MR_def_label(ll_backend__stack_opt__stack_opt_cell_5_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_decr_sp_and_return(11);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(set__empty_1_0);
MR_decl_entry(set__to_sorted_list_2_0);
extern const MR_TypeCtorInfo_Struct mercury_data_backend_libs__interval__type_ctor_info_interval_info_0;
MR_decl_entry(list__foldl3_8_0);
MR_decl_entry(fn__hlds__hlds_goal__goal_info_get_goal_id_1_0);

MR_BEGIN_MODULE(ll_backend__stack_opt_module4)
	MR_init_entry1(ll_backend__stack_opt__record_matching_result_11_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__stack_opt__record_matching_result_11_0);
	MR_init_label9(ll_backend__stack_opt__record_matching_result_11_0,4,2,6,7,9,11,13,15,16)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'record_matching_result'/11 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__stack_opt__record_matching_result_11_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(15);
	MR_sv(15) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_sv(4) = MR_tempr1;
	MR_sv(5) = MR_r5;
	MR_sv(6) = MR_r6;
	MR_sv(7) = MR_r7;
	MR_sv(10) = MR_r8;
	MR_sv(11) = MR_r9;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(set__empty_1_0,
		ll_backend__stack_opt__record_matching_result_11_0_i4);
MR_def_label(ll_backend__stack_opt__record_matching_result_11_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__stack_opt__record_matching_result_11_0_i2);
	}
	MR_r1 = MR_sv(10);
	MR_r2 = MR_sv(11);
	MR_decr_sp_and_return(15);
MR_def_label(ll_backend__stack_opt__record_matching_result_11_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(13) = (MR_Word) MR_CTOR0_ADDR(backend_libs__interval, interval_id);
	MR_r1 = MR_sv(13);
	MR_r2 = MR_sv(7);
	MR_np_call_localret_ent(set__to_sorted_list_2_0,
		ll_backend__stack_opt__record_matching_result_11_0_i6);
MR_def_label(ll_backend__stack_opt__record_matching_result_11_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_sv(14) = (MR_Word) MR_CTOR0_ADDR(backend_libs__interval, anchor);
	MR_r1 = MR_sv(14);
	MR_r2 = MR_sv(6);
	MR_np_call_localret_ent(set__to_sorted_list_2_0,
		ll_backend__stack_opt__record_matching_result_11_0_i7);
MR_def_label(ll_backend__stack_opt__record_matching_result_11_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_sv(12) = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(5,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(ll_backend__stack_opt__record_cell_var_for_interval_9_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(4);
	MR_sv(9) = MR_r1;
	MR_r1 = MR_sv(13);
	}
	MR_np_call_localret_ent(fn__set__init_0_0,
		ll_backend__stack_opt__record_matching_result_11_0_i9);
MR_def_label(ll_backend__stack_opt__record_matching_result_11_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(13) = (MR_Word) MR_CTOR1_ADDR(set_ordlist, set_ordlist);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(backend_libs__interval, interval_id);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(backend_libs__interval, interval_info);
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(ll_backend__stack_opt, stack_opt_info);
	MR_r4 = (MR_Word) MR_TAG_COMMON(0,0,10);
	MR_r5 = MR_sv(12);
	MR_r6 = MR_sv(8);
	MR_r7 = MR_sv(10);
	MR_r8 = MR_sv(11);
	MR_r9 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__foldl3_8_0,
		ll_backend__stack_opt__record_matching_result_11_0_i11);
MR_def_label(ll_backend__stack_opt__record_matching_result_11_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 6);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(6,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(ll_backend__stack_opt__add_anchor_inserts_10_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 3;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(5);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(4);
	MR_tempr2 = MR_r3;
	MR_tfield(0, MR_tempr1, 5) = MR_tempr2;
	MR_sv(8) = MR_tempr2;
	MR_sv(10) = MR_r1;
	MR_sv(11) = MR_r2;
	MR_sv(12) = MR_tempr1;
	MR_r1 = MR_sv(14);
	}
	MR_np_call_localret_ent(fn__set__init_0_0,
		ll_backend__stack_opt__record_matching_result_11_0_i13);
MR_def_label(ll_backend__stack_opt__record_matching_result_11_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(14);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(backend_libs__interval, interval_info);
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(ll_backend__stack_opt, stack_opt_info);
	MR_r4 = (MR_Word) MR_TAG_COMMON(0,0,12);
	MR_r5 = MR_sv(12);
	MR_r6 = MR_sv(9);
	MR_r7 = MR_sv(10);
	MR_r8 = MR_sv(11);
	MR_r9 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__foldl3_8_0,
		ll_backend__stack_opt__record_matching_result_11_0_i15);
MR_def_label(ll_backend__stack_opt__record_matching_result_11_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r3;
	MR_sv(9) = MR_r1;
	MR_sv(10) = MR_r2;
	MR_r1 = MR_tfield(0, MR_tfield(0, MR_sv(12), 3), 1);
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_goal_id_1_0,
		ll_backend__stack_opt__record_matching_result_11_0_i16);
MR_def_label(ll_backend__stack_opt__record_matching_result_11_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 9);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 2) = MR_sv(3);
	MR_tfield(0, MR_tempr1, 3) = MR_sv(4);
	MR_tfield(0, MR_tempr1, 4) = MR_r1;
	MR_tfield(0, MR_tempr1, 5) = MR_sv(7);
	MR_tfield(0, MR_tempr1, 6) = MR_sv(8);
	MR_tfield(0, MR_tempr1, 7) = MR_sv(6);
	MR_tfield(0, MR_tempr1, 8) = MR_sv(5);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tempr3 = MR_sv(10);
	MR_tfield(1, MR_tempr2, 1) = MR_tfield(0, MR_tempr3, 2);
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 3);
	MR_tfield(0, MR_r2, 0) = MR_tfield(0, MR_tempr3, 0);
	MR_tfield(0, MR_r2, 1) = MR_tfield(0, MR_tempr3, 1);
	MR_tfield(0, MR_r2, 2) = MR_tempr2;
	MR_r1 = MR_sv(9);
	MR_decr_sp_and_return(15);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__stack_opt_module5)
	MR_init_entry1(fn__ll_backend__stack_opt__may_have_no_successor_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__ll_backend__stack_opt__may_have_no_successor_1_0);
	MR_init_label5(fn__ll_backend__stack_opt__may_have_no_successor_1_0,8,3,4,5,6)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'may_have_no_successor'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__ll_backend__stack_opt__may_have_no_successor_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,1)) {
		MR_GOTO_LAB(fn__ll_backend__stack_opt__may_have_no_successor_1_0_i3);
	}
MR_def_label(fn__ll_backend__stack_opt__may_have_no_successor_1_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_proceed();
MR_def_label(fn__ll_backend__stack_opt__may_have_no_successor_1_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(fn__ll_backend__stack_opt__may_have_no_successor_1_0_i4);
	}
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(fn__ll_backend__stack_opt__may_have_no_successor_1_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,1)) {
		MR_GOTO_LAB(fn__ll_backend__stack_opt__may_have_no_successor_1_0_i5);
	}
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(fn__ll_backend__stack_opt__may_have_no_successor_1_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,2)) {
		MR_GOTO_LAB(fn__ll_backend__stack_opt__may_have_no_successor_1_0_i6);
	}
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(fn__ll_backend__stack_opt__may_have_no_successor_1_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,0)) {
		MR_GOTO_LAB(fn__ll_backend__stack_opt__may_have_no_successor_1_0_i8);
	}
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__stack_opt_module6)
	MR_init_entry1(fn__ll_backend__stack_opt__may_have_one_successor_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__ll_backend__stack_opt__may_have_one_successor_1_0);
	MR_init_label1(fn__ll_backend__stack_opt__may_have_one_successor_1_0,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'may_have_one_successor'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__ll_backend__stack_opt__may_have_one_successor_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,1)) {
		MR_GOTO_LAB(fn__ll_backend__stack_opt__may_have_one_successor_1_0_i3);
	}
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(fn__ll_backend__stack_opt__may_have_one_successor_1_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__stack_opt_module7)
	MR_init_entry1(fn__ll_backend__stack_opt__may_have_more_successors_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__ll_backend__stack_opt__may_have_more_successors_1_0);
	MR_init_label4(fn__ll_backend__stack_opt__may_have_more_successors_1_0,3,4,24,7)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'may_have_more_successors'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__ll_backend__stack_opt__may_have_more_successors_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,1)) {
		MR_GOTO_LAB(fn__ll_backend__stack_opt__may_have_more_successors_1_0_i3);
	}
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(fn__ll_backend__stack_opt__may_have_more_successors_1_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(fn__ll_backend__stack_opt__may_have_more_successors_1_0_i4);
	}
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(fn__ll_backend__stack_opt__may_have_more_successors_1_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,1)) {
		MR_GOTO_LAB(fn__ll_backend__stack_opt__may_have_more_successors_1_0_i24);
	}
	MR_r2 = MR_tfield(1, MR_r1, 0);
	if (MR_INT_NE(MR_r2,3)) {
		MR_GOTO_LAB(fn__ll_backend__stack_opt__may_have_more_successors_1_0_i7);
	}
MR_def_label(fn__ll_backend__stack_opt__may_have_more_successors_1_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(fn__ll_backend__stack_opt__may_have_more_successors_1_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(map__lookup_3_0);

MR_BEGIN_MODULE(ll_backend__stack_opt_module8)
	MR_init_entry1(fn__ll_backend__stack_opt__anchor_requires_close_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__ll_backend__stack_opt__anchor_requires_close_2_0);
	MR_init_label7(fn__ll_backend__stack_opt__anchor_requires_close_2_0,51,13,3,4,6,5,9)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'anchor_requires_close'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__ll_backend__stack_opt__anchor_requires_close_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,1)) {
		MR_GOTO_LAB(fn__ll_backend__stack_opt__anchor_requires_close_2_0_i3);
	}
MR_def_label(fn__ll_backend__stack_opt__anchor_requires_close_2_0,51)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
MR_def_label(fn__ll_backend__stack_opt__anchor_requires_close_2_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(1);
MR_def_label(fn__ll_backend__stack_opt__anchor_requires_close_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(fn__ll_backend__stack_opt__anchor_requires_close_2_0_i4);
	}
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(fn__ll_backend__stack_opt__anchor_requires_close_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r2,1)) {
		MR_GOTO_LAB(fn__ll_backend__stack_opt__anchor_requires_close_2_0_i5);
	}
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__goal_path, goal_id);
	MR_tempr2 = MR_r2;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(backend_libs__interval, resume_save_status);
	MR_r3 = MR_tfield(0, MR_tempr1, 3);
	MR_r4 = MR_tfield(1, MR_tempr2, 1);
	}
	MR_np_call_localret_ent(map__lookup_3_0,
		fn__ll_backend__stack_opt__anchor_requires_close_2_0_i6);
MR_def_label(fn__ll_backend__stack_opt__anchor_requires_close_2_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(fn__ll_backend__stack_opt__anchor_requires_close_2_0_i13);
	}
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(1);
MR_def_label(fn__ll_backend__stack_opt__anchor_requires_close_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r2,2)) {
		MR_GOTO_LAB(fn__ll_backend__stack_opt__anchor_requires_close_2_0_i9);
	}
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(fn__ll_backend__stack_opt__anchor_requires_close_2_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r2,3,0)) {
		MR_GOTO_LAB(fn__ll_backend__stack_opt__anchor_requires_close_2_0_i51);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(3, MR_r2, 1);
	if (MR_INT_NE(MR_tempr1,3)) {
		MR_GOTO_LAB(fn__ll_backend__stack_opt__anchor_requires_close_2_0_i51);
	}
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__list__map_2_0);
MR_decl_entry(bool__or_list_2_0);
MR_decl_entry(require__unexpected_3_0);

MR_BEGIN_MODULE(ll_backend__stack_opt_module9)
	MR_init_entry1(ll_backend__stack_opt__consolidate_after_join_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__stack_opt__consolidate_after_join_2_0);
	MR_init_label6(ll_backend__stack_opt__consolidate_after_join_2_0,6,7,9,10,12,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'consolidate_after_join'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__stack_opt__consolidate_after_join_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(ll_backend__stack_opt__consolidate_after_join_2_0_i3);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = (MR_Word) MR_CTOR0_ADDR(ll_backend__stack_opt, path);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__stack_opt, all_paths);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,13);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,3,2);
	MR_r4 = MR_sv(1);
	MR_np_call_localret_ent(fn__list__map_2_0,
		ll_backend__stack_opt__consolidate_after_join_2_0_i6);
MR_def_label(ll_backend__stack_opt__consolidate_after_join_2_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__set__union_list_1_0,
		ll_backend__stack_opt__consolidate_after_join_2_0_i7);
MR_def_label(ll_backend__stack_opt__consolidate_after_join_2_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__stack_opt, all_paths);
	MR_r2 = (MR_Word) MR_BOOL_CTOR_ADDR;
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,3,3);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__list__map_2_0,
		ll_backend__stack_opt__consolidate_after_join_2_0_i9);
MR_def_label(ll_backend__stack_opt__consolidate_after_join_2_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(bool__or_list_2_0,
		ll_backend__stack_opt__consolidate_after_join_2_0_i10);
MR_def_label(ll_backend__stack_opt__consolidate_after_join_2_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,2);
	MR_np_call_localret_ent(fn__set__init_0_0,
		ll_backend__stack_opt__consolidate_after_join_2_0_i12);
MR_def_label(ll_backend__stack_opt__consolidate_after_join_2_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 2) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(3);
	}
MR_def_label(ll_backend__stack_opt__consolidate_after_join_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("ll_backend.stack_opt", 20);
	MR_r2 = (MR_Word) MR_string_const("predicate \140ll_backend.stack_opt.consolidate_after_join\'/2", 57);
	MR_r3 = (MR_Word) MR_string_const("no paths to join", 16);
	MR_np_tailcall_ent(require__unexpected_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(require__expect_4_0);
MR_decl_entry(__Unify___backend_libs__interval__anchor_0_0);
MR_decl_entry(fn__f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_117_110_105_111_110_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_0);
MR_decl_entry(fn__f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_105_110_116_101_114_115_101_99_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_0);
MR_decl_entry(set__non_empty_1_0);

MR_BEGIN_MODULE(ll_backend__stack_opt_module10)
	MR_init_entry1(ll_backend__stack_opt__find_all_branches_7_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__stack_opt__find_all_branches_7_0);
	MR_init_label10(ll_backend__stack_opt__find_all_branches_7_0,2,4,7,9,6,12,11,15,17,21)
	MR_init_label9(ll_backend__stack_opt__find_all_branches_7_0,24,18,19,29,31,32,33,26,27)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'find_all_branches'/7 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__stack_opt__find_all_branches_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(10);
	MR_sv(10) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_sv(4) = MR_tempr1;
	MR_sv(5) = MR_r5;
	MR_sv(8) = MR_r6;
	MR_sv(6) = (MR_Word) MR_CTOR0_ADDR(backend_libs__interval, interval_id);
	MR_r1 = MR_sv(6);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(backend_libs__interval, anchor);
	MR_r3 = MR_tfield(0, MR_tempr1, 12);
	MR_r4 = MR_sv(2);
	}
	MR_np_call_localret_ent(map__lookup_3_0,
		ll_backend__stack_opt__find_all_branches_7_0_i2);
MR_def_label(ll_backend__stack_opt__find_all_branches_7_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,3);
	MR_r3 = MR_tfield(0, MR_sv(4), 13);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(map__lookup_3_0,
		ll_backend__stack_opt__find_all_branches_7_0_i4);
MR_def_label(ll_backend__stack_opt__find_all_branches_7_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(ll_backend__stack_opt__find_all_branches_7_0_i6);
	}
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(fn__ll_backend__stack_opt__may_have_no_successor_1_0,
		ll_backend__stack_opt__find_all_branches_7_0_i7);
MR_def_label(ll_backend__stack_opt__find_all_branches_7_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(7,2);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(ll_backend__stack_opt__IntroducedFrom__pred__find_all_branches__799__1_2_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr1, 3) = MR_r1;
	MR_tfield(0, MR_tempr1, 4) = (MR_Integer) 1;
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Word) MR_string_const("ll_backend.stack_opt", 20);
	MR_r3 = (MR_Word) MR_string_const("predicate \140ll_backend.stack_opt.find_all_branches\'/7", 52);
	MR_r4 = (MR_Word) MR_string_const("unexpected no successor", 23);
	}
	MR_np_call_localret_ent(require__expect_4_0,
		ll_backend__stack_opt__find_all_branches_7_0_i9);
MR_def_label(ll_backend__stack_opt__find_all_branches_7_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(8);
	MR_decr_sp_and_return(10);
MR_def_label(ll_backend__stack_opt__find_all_branches_7_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_tfield(1, MR_r1, 1);
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(ll_backend__stack_opt__find_all_branches_7_0_i11);
	}
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(fn__ll_backend__stack_opt__may_have_one_successor_1_0,
		ll_backend__stack_opt__find_all_branches_7_0_i12);
MR_def_label(ll_backend__stack_opt__find_all_branches_7_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(7,3);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(ll_backend__stack_opt__IntroducedFrom__pred__find_all_branches__808__1_2_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr1, 3) = MR_r1;
	MR_tfield(0, MR_tempr1, 4) = (MR_Integer) 1;
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Word) MR_string_const("ll_backend.stack_opt", 20);
	MR_r3 = (MR_Word) MR_string_const("predicate \140ll_backend.stack_opt.find_all_branches\'/7", 52);
	MR_r4 = (MR_Word) MR_string_const("unexpected one successor", 24);
	}
	MR_np_call_localret_ent(require__expect_4_0,
		ll_backend__stack_opt__find_all_branches_7_0_i17);
MR_def_label(ll_backend__stack_opt__find_all_branches_7_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(fn__ll_backend__stack_opt__may_have_more_successors_1_0,
		ll_backend__stack_opt__find_all_branches_7_0_i15);
MR_def_label(ll_backend__stack_opt__find_all_branches_7_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(7,4);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(ll_backend__stack_opt__IntroducedFrom__pred__find_all_branches__812__1_2_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr1, 3) = MR_r1;
	MR_tfield(0, MR_tempr1, 4) = (MR_Integer) 1;
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Word) MR_string_const("ll_backend.stack_opt", 20);
	MR_r3 = (MR_Word) MR_string_const("predicate \140ll_backend.stack_opt.find_all_branches\'/7", 52);
	MR_r4 = (MR_Word) MR_string_const("unexpected more successors", 26);
	}
	MR_np_call_localret_ent(require__expect_4_0,
		ll_backend__stack_opt__find_all_branches_7_0_i17);
MR_def_label(ll_backend__stack_opt__find_all_branches_7_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	if (MR_LTAGS_TEST(MR_sv(3),0,0)) {
		MR_GOTO_LAB(ll_backend__stack_opt__find_all_branches_7_0_i19);
	}
	MR_r2 = MR_tfield(1, MR_sv(3), 0);
	MR_np_call_localret_ent(__Unify___backend_libs__interval__anchor_0_0,
		ll_backend__stack_opt__find_all_branches_7_0_i21);
MR_def_label(ll_backend__stack_opt__find_all_branches_7_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__stack_opt__find_all_branches_7_0_i18);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,2);
	MR_np_call_localret_ent(fn__set__init_0_0,
		ll_backend__stack_opt__find_all_branches_7_0_i24);
MR_def_label(ll_backend__stack_opt__find_all_branches_7_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 3);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(8);
	MR_tfield(0, MR_r2, 0) = MR_tfield(0, MR_tempr1, 0);
	MR_tfield(0, MR_r2, 1) = MR_tfield(0, MR_tempr1, 1);
	MR_tfield(0, MR_r2, 2) = MR_r1;
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(10);
	}
MR_def_label(ll_backend__stack_opt__find_all_branches_7_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
MR_def_label(ll_backend__stack_opt__find_all_branches_7_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,0)) {
		MR_GOTO_LAB(ll_backend__stack_opt__find_all_branches_7_0_i27);
	}
	MR_sv(2) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__goal_path, goal_id);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(backend_libs__interval, branch_end_info);
	MR_r3 = MR_tfield(0, MR_sv(4), 4);
	MR_r4 = MR_tfield(3, MR_sv(2), 2);
	MR_np_call_localret_ent(map__lookup_3_0,
		ll_backend__stack_opt__find_all_branches_7_0_i29);
MR_def_label(ll_backend__stack_opt__find_all_branches_7_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_sv(9) = (MR_Word) MR_TAG_COMMON(0,0,2);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(9);
	MR_r3 = MR_tfield(0, MR_tempr1, 0);
	MR_r4 = MR_tfield(0, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(fn__f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_117_110_105_111_110_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_0,
		ll_backend__stack_opt__find_all_branches_7_0_i31);
MR_def_label(ll_backend__stack_opt__find_all_branches_7_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(9);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_105_110_116_101_114_115_101_99_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_0,
		ll_backend__stack_opt__find_all_branches_7_0_i32);
MR_def_label(ll_backend__stack_opt__find_all_branches_7_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(7);
	MR_np_call_localret_ent(set__non_empty_1_0,
		ll_backend__stack_opt__find_all_branches_7_0_i33);
MR_def_label(ll_backend__stack_opt__find_all_branches_7_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__stack_opt__find_all_branches_7_0_i26);
	}
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 3);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(8);
	MR_tfield(0, MR_r1, 0) = MR_tfield(0, MR_tempr1, 0);
	MR_tfield(0, MR_r1, 1) = MR_tfield(0, MR_tempr1, 1);
	MR_tfield(0, MR_r1, 2) = MR_sv(7);
	MR_decr_sp_and_return(10);
	}
MR_def_label(ll_backend__stack_opt__find_all_branches_7_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
MR_def_label(ll_backend__stack_opt__find_all_branches_7_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(4);
	MR_r5 = MR_sv(5);
	MR_r6 = MR_sv(6);
	MR_r7 = MR_sv(8);
	MR_succip_word = MR_sv(10);
	MR_decr_sp(10);
	MR_np_tailcall_ent(ll_backend__stack_opt__find_all_branches_from_8_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__set__map_2_0);
MR_decl_entry(list__map_3_0);

MR_BEGIN_MODULE(ll_backend__stack_opt_module11)
	MR_init_entry1(ll_backend__stack_opt__find_all_branches_from_8_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__stack_opt__find_all_branches_from_8_0);
	MR_init_label10(ll_backend__stack_opt__find_all_branches_from_8_0,2,4,6,3,14,15,8,21,28,29)
	MR_init_label10(ll_backend__stack_opt__find_all_branches_from_8_0,32,34,35,36,37,17,44,45,46,39)
	MR_init_label1(ll_backend__stack_opt__find_all_branches_from_8_0,48)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'find_all_branches_from'/8 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__stack_opt__find_all_branches_from_8_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(10);
	MR_sv(10) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_sv(4) = MR_tempr1;
	MR_sv(5) = MR_r5;
	MR_sv(6) = MR_r6;
	MR_sv(7) = MR_r7;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(1);
	}
	MR_np_call_localret_ent(fn__ll_backend__stack_opt__anchor_requires_close_2_0,
		ll_backend__stack_opt__find_all_branches_from_8_0_i2);
MR_def_label(ll_backend__stack_opt__find_all_branches_from_8_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(ll_backend__stack_opt__find_all_branches_from_8_0_i4);
	}
	MR_r1 = MR_sv(2);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(5);
	MR_r5 = MR_sv(6);
	MR_r2 = MR_tfield(0, MR_tfield(0, MR_r4, 0), 3);
	MR_r6 = MR_sv(7);
	MR_GOTO_LAB(ll_backend__stack_opt__find_all_branches_from_8_0_i3);
MR_def_label(ll_backend__stack_opt__find_all_branches_from_8_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__stack_opt, path);
	MR_r2 = MR_r1;
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,3,4);
	MR_r4 = MR_tfield(0, MR_sv(7), 0);
	MR_np_call_localret_ent(fn__set__map_2_0,
		ll_backend__stack_opt__find_all_branches_from_8_0_i6);
MR_def_label(ll_backend__stack_opt__find_all_branches_from_8_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_r6 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tempr2 = MR_sv(7);
	MR_tfield(0, MR_tempr1, 1) = MR_tfield(0, MR_tempr2, 1);
	MR_tfield(0, MR_tempr1, 2) = MR_tfield(0, MR_tempr2, 2);
	MR_r1 = MR_sv(2);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(5);
	MR_r5 = MR_sv(6);
	MR_r2 = MR_tfield(0, MR_tfield(0, MR_r4, 0), 3);
	}
MR_def_label(ll_backend__stack_opt__find_all_branches_from_8_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r2,1)) {
		MR_GOTO_LAB(ll_backend__stack_opt__find_all_branches_from_8_0_i8);
	}
	if (MR_PTAG_TESTR(MR_sv(1),1)) {
		MR_GOTO_LAB(ll_backend__stack_opt__find_all_branches_from_8_0_i8);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_sv(1);
	MR_tempr1 = MR_tfield(1, MR_tempr2, 0);
	if (MR_INT_NE(MR_tempr1,1)) {
		MR_GOTO_LAB(ll_backend__stack_opt__find_all_branches_from_8_0_i8);
	}
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr1, 1) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr1, 2) = MR_tfield(1, MR_tempr2, 1);
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r2, 0) = MR_tempr1;
	MR_sv(2) = MR_r1;
	MR_sv(4) = MR_r3;
	MR_sv(5) = MR_r4;
	MR_sv(1) = MR_tfield(3, MR_tempr1, 2);
	}
	MR_np_call_localret_ent(ll_backend__stack_opt__one_after_another_7_0,
		ll_backend__stack_opt__find_all_branches_from_8_0_i14);
MR_def_label(ll_backend__stack_opt__find_all_branches_from_8_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__goal_path, goal_id);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(backend_libs__interval, branch_end_info);
	MR_r3 = MR_tfield(0, MR_sv(4), 4);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(map__lookup_3_0,
		ll_backend__stack_opt__find_all_branches_from_8_0_i15);
MR_def_label(ll_backend__stack_opt__find_all_branches_from_8_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(5);
	MR_r5 = MR_tfield(0, MR_tempr1, 2);
	MR_r6 = MR_sv(1);
	MR_succip_word = MR_sv(10);
	MR_decr_sp(10);
	MR_np_tailcall_ent(ll_backend__stack_opt__apply_interval_find_all_branches_7_0);
	}
MR_def_label(ll_backend__stack_opt__find_all_branches_from_8_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r2,1)) {
		MR_GOTO_LAB(ll_backend__stack_opt__find_all_branches_from_8_0_i17);
	}
	if (MR_PTAG_TESTR(MR_sv(1),1)) {
		MR_GOTO_LAB(ll_backend__stack_opt__find_all_branches_from_8_0_i17);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr3 = MR_sv(1);
	MR_r7 = MR_tfield(1, MR_tempr3, 0);
	if (MR_INT_NE(MR_r7,0)) {
		MR_GOTO_LAB(ll_backend__stack_opt__find_all_branches_from_8_0_i17);
	}
	MR_sv(8) = MR_tfield(1, MR_tempr3, 1);
	if (MR_LTAGS_TEST(MR_r5,0,0)) {
		MR_GOTO_LAB(ll_backend__stack_opt__find_all_branches_from_8_0_i21);
	}
	MR_tempr4 = MR_r5;
	MR_tempr1 = MR_tfield(1, MR_tempr4, 1);
	MR_r7 = MR_tempr1;
	if (MR_LTAGS_TEST(MR_tempr1,0,0)) {
		MR_GOTO_LAB(ll_backend__stack_opt__find_all_branches_from_8_0_i21);
	}
	MR_r8 = MR_tfield(1, MR_tempr1, 1);
	if (MR_LTAGS_TESTR(MR_r8,0,0)) {
		MR_GOTO_LAB(ll_backend__stack_opt__find_all_branches_from_8_0_i21);
	}
	MR_tag_alloc_heap(MR_tempr2, 2, (MR_Integer) 1);
	MR_r8 = MR_tempr2;
	MR_tfield(2, MR_tempr2, 0) = MR_sv(8);
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r2, 0) = MR_tempr2;
	MR_sv(1) = MR_tfield(1, MR_tempr4, 0);
	MR_r5 = MR_tfield(1, MR_tempr1, 0);
	MR_GOTO_LAB(ll_backend__stack_opt__find_all_branches_from_8_0_i28);
	}
MR_def_label(ll_backend__stack_opt__find_all_branches_from_8_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("ll_backend.stack_opt", 20);
	MR_r2 = (MR_Word) MR_string_const("predicate \140ll_backend.stack_opt.find_all_branches_from\'/8", 57);
	MR_sv(4) = MR_r3;
	MR_r3 = (MR_Word) MR_string_const("ite not else, cond", 18);
	MR_np_call_localret_ent(require__unexpected_3_0,
		ll_backend__stack_opt__find_all_branches_from_8_0_i28);
MR_def_label(ll_backend__stack_opt__find_all_branches_from_8_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_sv(4) = MR_r3;
	MR_sv(5) = MR_r4;
	MR_np_call_localret_ent(ll_backend__stack_opt__apply_interval_find_all_branches_7_0,
		ll_backend__stack_opt__find_all_branches_from_8_0_i29);
MR_def_label(ll_backend__stack_opt__find_all_branches_from_8_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr1, 1) = (MR_Integer) 0;
	MR_tempr2 = MR_sv(8);
	MR_tfield(3, MR_tempr1, 2) = MR_tempr2;
	MR_tag_alloc_heap(MR_sv(6), 1, (MR_Integer) 1);
	MR_tfield(1, MR_sv(6), 0) = MR_tempr1;
	MR_sv(7) = MR_r1;
	MR_sv(9) = (MR_Word) MR_CTOR0_ADDR(mdbcomp__goal_path, goal_id);
	MR_r1 = MR_sv(9);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(backend_libs__interval, interval_id);
	MR_r3 = MR_tfield(0, MR_sv(4), 5);
	MR_r4 = MR_tempr2;
	}
	MR_np_call_localret_ent(map__lookup_3_0,
		ll_backend__stack_opt__find_all_branches_from_8_0_i32);
MR_def_label(ll_backend__stack_opt__find_all_branches_from_8_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_sv(1) = MR_tempr1;
	MR_tempr2 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(5);
	MR_r5 = MR_tempr2;
	MR_r6 = MR_sv(7);
	}
	MR_np_call_localret_ent(ll_backend__stack_opt__apply_interval_find_all_branches_7_0,
		ll_backend__stack_opt__find_all_branches_from_8_0_i34);
MR_def_label(ll_backend__stack_opt__find_all_branches_from_8_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_tfield(1, MR_tempr1, 1);
	MR_tempr2 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(5);
	MR_r5 = MR_tfield(1, MR_tempr1, 0);
	MR_r6 = MR_tempr2;
	}
	MR_np_call_localret_ent(ll_backend__stack_opt__apply_interval_find_all_branches_7_0,
		ll_backend__stack_opt__find_all_branches_from_8_0_i35);
MR_def_label(ll_backend__stack_opt__find_all_branches_from_8_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(5);
	MR_r5 = MR_sv(1);
	MR_r6 = MR_tempr1;
	}
	MR_np_call_localret_ent(ll_backend__stack_opt__one_after_another_7_0,
		ll_backend__stack_opt__find_all_branches_from_8_0_i36);
MR_def_label(ll_backend__stack_opt__find_all_branches_from_8_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(9);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(backend_libs__interval, branch_end_info);
	MR_r3 = MR_tfield(0, MR_sv(4), 4);
	MR_r4 = MR_sv(8);
	MR_np_call_localret_ent(map__lookup_3_0,
		ll_backend__stack_opt__find_all_branches_from_8_0_i37);
MR_def_label(ll_backend__stack_opt__find_all_branches_from_8_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(5);
	MR_r5 = MR_tfield(0, MR_tempr1, 2);
	MR_r6 = MR_sv(1);
	MR_succip_word = MR_sv(10);
	MR_decr_sp(10);
	MR_np_tailcall_ent(ll_backend__stack_opt__apply_interval_find_all_branches_7_0);
	}
MR_def_label(ll_backend__stack_opt__find_all_branches_from_8_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),1)) {
		MR_GOTO_LAB(ll_backend__stack_opt__find_all_branches_from_8_0_i39);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 0;
	MR_tempr4 = MR_sv(1);
	MR_tfield(3, MR_tempr1, 1) = MR_tfield(1, MR_tempr4, 0);
	MR_tfield(3, MR_tempr1, 2) = MR_tfield(1, MR_tempr4, 1);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr3, 0, (MR_Integer) 8);
	MR_tfield(0, MR_tempr3, 0) = (MR_Word) MR_COMMON(8,0);
	MR_tfield(0, MR_tempr3, 1) = (MR_Word) MR_ENTRY_AP(ll_backend__stack_opt__apply_interval_find_all_branches_map_7_0);
	MR_tfield(0, MR_tempr3, 2) = (MR_Integer) 5;
	MR_tfield(0, MR_tempr3, 3) = MR_r1;
	MR_tfield(0, MR_tempr3, 4) = MR_tempr2;
	MR_tempr5 = MR_r3;
	MR_tfield(0, MR_tempr3, 5) = MR_tempr5;
	MR_tempr6 = MR_r4;
	MR_tfield(0, MR_tempr3, 6) = MR_tempr6;
	MR_tfield(0, MR_tempr3, 7) = MR_r6;
	MR_sv(2) = MR_r1;
	MR_sv(4) = MR_tempr5;
	MR_sv(5) = MR_tempr6;
	MR_sv(1) = MR_tfield(3, MR_tempr1, 2);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(backend_libs__interval, interval_id);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(ll_backend__stack_opt, all_paths);
	MR_r3 = MR_tempr3;
	MR_r4 = MR_r5;
	}
	MR_np_call_localret_ent(list__map_3_0,
		ll_backend__stack_opt__find_all_branches_from_8_0_i44);
MR_def_label(ll_backend__stack_opt__find_all_branches_from_8_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(ll_backend__stack_opt__consolidate_after_join_2_0,
		ll_backend__stack_opt__find_all_branches_from_8_0_i45);
MR_def_label(ll_backend__stack_opt__find_all_branches_from_8_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__goal_path, goal_id);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(backend_libs__interval, branch_end_info);
	MR_r3 = MR_tfield(0, MR_sv(4), 4);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(map__lookup_3_0,
		ll_backend__stack_opt__find_all_branches_from_8_0_i46);
MR_def_label(ll_backend__stack_opt__find_all_branches_from_8_0,46)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(5);
	MR_r5 = MR_tfield(0, MR_tempr1, 2);
	MR_r6 = MR_sv(1);
	MR_succip_word = MR_sv(10);
	MR_decr_sp(10);
	MR_np_tailcall_ent(ll_backend__stack_opt__apply_interval_find_all_branches_7_0);
	}
MR_def_label(ll_backend__stack_opt__find_all_branches_from_8_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r5,0,0)) {
		MR_GOTO_LAB(ll_backend__stack_opt__find_all_branches_from_8_0_i48);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(1, MR_r5, 1);
	if (MR_LTAGS_TESTR(MR_tempr1,0,0)) {
		MR_GOTO_LAB(ll_backend__stack_opt__find_all_branches_from_8_0_i48);
	}
	MR_r2 = MR_sv(3);
	MR_r5 = MR_tfield(1, MR_r5, 0);
	MR_succip_word = MR_sv(10);
	MR_decr_sp(10);
	MR_np_tailcall_ent(ll_backend__stack_opt__apply_interval_find_all_branches_7_0);
	}
MR_def_label(ll_backend__stack_opt__find_all_branches_from_8_0,48)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("ll_backend.stack_opt", 20);
	MR_r2 = (MR_Word) MR_string_const("predicate \140ll_backend.stack_opt.find_all_branches_from\'/8", 57);
	MR_r3 = (MR_Word) MR_string_const("more successor ids", 18);
	MR_succip_word = MR_sv(10);
	MR_decr_sp(10);
	MR_np_tailcall_ent(require__unexpected_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__stack_opt_module12)
	MR_init_entry1(ll_backend__stack_opt__one_after_another_7_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__stack_opt__one_after_another_7_0);
	MR_init_label3(ll_backend__stack_opt__one_after_another_7_0,10,3,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'one_after_another'/7 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__stack_opt__one_after_another_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
MR_def_label(ll_backend__stack_opt__one_after_another_7_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r5,0,0)) {
		MR_GOTO_LAB(ll_backend__stack_opt__one_after_another_7_0_i3);
	}
	MR_r1 = MR_r6;
	MR_decr_sp_and_return(6);
MR_def_label(ll_backend__stack_opt__one_after_another_7_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_sv(5) = MR_tfield(1, MR_r5, 1);
	MR_r5 = MR_tfield(1, MR_r5, 0);
	MR_np_call_localret_ent(ll_backend__stack_opt__apply_interval_find_all_branches_7_0,
		ll_backend__stack_opt__one_after_another_7_0_i4);
MR_def_label(ll_backend__stack_opt__one_after_another_7_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(4);
	MR_r5 = MR_sv(5);
	MR_r6 = MR_tempr1;
	MR_succip_word = MR_sv(6);
	MR_GOTO_LAB(ll_backend__stack_opt__one_after_another_7_0_i10);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(map__search_3_0);
MR_decl_entry(f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_105_110_116_101_114_115_101_99_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0);
MR_decl_entry(set__member_2_0);

MR_BEGIN_MODULE(ll_backend__stack_opt_module13)
	MR_init_entry1(ll_backend__stack_opt__apply_interval_find_all_branches_7_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__stack_opt__apply_interval_find_all_branches_7_0);
	MR_init_label10(ll_backend__stack_opt__apply_interval_find_all_branches_7_0,4,5,7,8,12,13,11,15,17,18)
	MR_init_label6(ll_backend__stack_opt__apply_interval_find_all_branches_7_0,21,9,10,22,24,23)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'apply_interval_find_all_branches'/7 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__stack_opt__apply_interval_find_all_branches_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(13);
	MR_sv(13) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r5;
	MR_sv(5) = MR_tempr1;
	MR_sv(6) = MR_r6;
	MR_sv(10) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_sv(11) = (MR_Word) MR_TAG_COMMON(0,0,2);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(backend_libs__interval, interval_id);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,16);
	MR_r3 = MR_tfield(0, MR_r3, 14);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(map__lookup_3_0,
		ll_backend__stack_opt__apply_interval_find_all_branches_7_0_i4);
MR_def_label(ll_backend__stack_opt__apply_interval_find_all_branches_7_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(10);
	MR_r2 = MR_sv(11);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_105_110_116_101_114_115_101_99_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_0,
		ll_backend__stack_opt__apply_interval_find_all_branches_7_0_i5);
MR_def_label(ll_backend__stack_opt__apply_interval_find_all_branches_7_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(9,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(fn__ll_backend__stack_opt__add_interval_to_path_3_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(5);
	MR_tfield(0, MR_tempr1, 4) = MR_r1;
	MR_tempr2 = MR_sv(6);
	MR_sv(6) = MR_tfield(0, MR_tempr2, 1);
	MR_sv(7) = MR_tfield(0, MR_tempr2, 2);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__stack_opt, path);
	MR_r2 = MR_r1;
	MR_r4 = MR_tfield(0, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(fn__set__map_2_0,
		ll_backend__stack_opt__apply_interval_find_all_branches_7_0_i7);
MR_def_label(ll_backend__stack_opt__apply_interval_find_all_branches_7_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_sv(12) = (MR_Word) MR_CTOR0_ADDR(backend_libs__interval, anchor);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(backend_libs__interval, interval_id);
	MR_r2 = MR_sv(12);
	MR_r3 = MR_tfield(0, MR_sv(3), 11);
	MR_r4 = MR_sv(5);
	MR_np_call_localret_ent(map__lookup_3_0,
		ll_backend__stack_opt__apply_interval_find_all_branches_7_0_i8);
MR_def_label(ll_backend__stack_opt__apply_interval_find_all_branches_7_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,1)) {
		MR_GOTO_LAB(ll_backend__stack_opt__apply_interval_find_all_branches_7_0_i12);
	}
	MR_r4 = MR_r1;
	MR_r3 = MR_tfield(0, MR_sv(3), 9);
	MR_r1 = MR_sv(12);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(backend_libs__interval, anchor_follow_info);
	MR_GOTO_LAB(ll_backend__stack_opt__apply_interval_find_all_branches_7_0_i11);
MR_def_label(ll_backend__stack_opt__apply_interval_find_all_branches_7_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,0)) {
		MR_GOTO_LAB(ll_backend__stack_opt__apply_interval_find_all_branches_7_0_i13);
	}
	MR_r4 = MR_r1;
	MR_r3 = MR_tfield(0, MR_sv(3), 9);
	MR_r1 = MR_sv(12);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(backend_libs__interval, anchor_follow_info);
	MR_GOTO_LAB(ll_backend__stack_opt__apply_interval_find_all_branches_7_0_i11);
MR_def_label(ll_backend__stack_opt__apply_interval_find_all_branches_7_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,1)) {
		MR_GOTO_LAB(ll_backend__stack_opt__apply_interval_find_all_branches_7_0_i10);
	}
	MR_r4 = MR_r1;
	MR_r3 = MR_tfield(0, MR_sv(3), 9);
	MR_r1 = MR_sv(12);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(backend_libs__interval, anchor_follow_info);
MR_def_label(ll_backend__stack_opt__apply_interval_find_all_branches_7_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_r4;
	MR_sv(12) = MR_r1;
	MR_np_call_localret_ent(map__search_3_0,
		ll_backend__stack_opt__apply_interval_find_all_branches_7_0_i15);
MR_def_label(ll_backend__stack_opt__apply_interval_find_all_branches_7_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__stack_opt__apply_interval_find_all_branches_7_0_i9);
	}
	MR_r1 = MR_sv(10);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(11);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_tfield(0, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_105_110_116_101_114_115_101_99_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		ll_backend__stack_opt__apply_interval_find_all_branches_7_0_i17);
MR_def_label(ll_backend__stack_opt__apply_interval_find_all_branches_7_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(11);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(set__non_empty_1_0,
		ll_backend__stack_opt__apply_interval_find_all_branches_7_0_i18);
MR_def_label(ll_backend__stack_opt__apply_interval_find_all_branches_7_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__stack_opt__apply_interval_find_all_branches_7_0_i9);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(2,2);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(fn__ll_backend__stack_opt__add_anchor_to_path_2_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(9);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__stack_opt, path);
	MR_r2 = MR_r1;
	MR_r4 = MR_sv(8);
	}
	MR_np_call_localret_ent(fn__set__map_2_0,
		ll_backend__stack_opt__apply_interval_find_all_branches_7_0_i21);
MR_def_label(ll_backend__stack_opt__apply_interval_find_all_branches_7_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(9);
	MR_sv(8) = MR_r1;
	MR_r1 = MR_sv(12);
	MR_GOTO_LAB(ll_backend__stack_opt__apply_interval_find_all_branches_7_0_i22);
MR_def_label(ll_backend__stack_opt__apply_interval_find_all_branches_7_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(9);
MR_def_label(ll_backend__stack_opt__apply_interval_find_all_branches_7_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(12);
MR_def_label(ll_backend__stack_opt__apply_interval_find_all_branches_7_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_tfield(0, MR_sv(3), 10);
	MR_np_call_localret_ent(set__member_2_0,
		ll_backend__stack_opt__apply_interval_find_all_branches_7_0_i24);
MR_def_label(ll_backend__stack_opt__apply_interval_find_all_branches_7_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__stack_opt__apply_interval_find_all_branches_7_0_i23);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_r6 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_sv(8);
	MR_tfield(0, MR_tempr1, 1) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 2) = MR_sv(7);
	MR_r1 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(4);
	MR_r2 = MR_sv(5);
	MR_succip_word = MR_sv(13);
	MR_decr_sp(13);
	MR_np_tailcall_ent(ll_backend__stack_opt__find_all_branches_7_0);
	}
MR_def_label(ll_backend__stack_opt__apply_interval_find_all_branches_7_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_r6 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_sv(8);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(6);
	MR_tfield(0, MR_tempr1, 2) = MR_sv(7);
	MR_r1 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(4);
	MR_r2 = MR_sv(5);
	MR_succip_word = MR_sv(13);
	MR_decr_sp(13);
	MR_np_tailcall_ent(ll_backend__stack_opt__find_all_branches_7_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(list__map3_5_0);

MR_BEGIN_MODULE(ll_backend__stack_opt_module14)
	MR_init_entry1(ll_backend__stack_opt__find_all_branches_from_cur_interval_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__stack_opt__find_all_branches_from_cur_interval_4_0);
	MR_init_label10(ll_backend__stack_opt__find_all_branches_from_cur_interval_4_0,4,5,6,7,8,10,11,13,14,18)
	MR_init_label2(ll_backend__stack_opt__find_all_branches_from_cur_interval_4_0,19,20)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'find_all_branches_from_cur_interval'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__stack_opt__find_all_branches_from_cur_interval_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(10);
	MR_sv(10) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_tfield(0, MR_r2, 6);
	MR_sv(5) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_sv(8) = (MR_Word) MR_TAG_COMMON(0,0,2);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(backend_libs__interval, interval_id);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,16);
	MR_r3 = MR_tfield(0, MR_sv(2), 14);
	MR_r4 = MR_sv(4);
	MR_np_call_localret_ent(map__lookup_3_0,
		ll_backend__stack_opt__find_all_branches_from_cur_interval_4_0_i4);
MR_def_label(ll_backend__stack_opt__find_all_branches_from_cur_interval_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(8);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_105_110_116_101_114_115_101_99_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_0,
		ll_backend__stack_opt__find_all_branches_from_cur_interval_4_0_i5);
MR_def_label(ll_backend__stack_opt__find_all_branches_from_cur_interval_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(8);
	MR_np_call_localret_ent(fn__set__init_0_0,
		ll_backend__stack_opt__find_all_branches_from_cur_interval_4_0_i6);
MR_def_label(ll_backend__stack_opt__find_all_branches_from_cur_interval_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_sv(9) = (MR_Word) MR_CTOR0_ADDR(backend_libs__interval, anchor);
	MR_r1 = MR_sv(9);
	MR_np_call_localret_ent(fn__set__init_0_0,
		ll_backend__stack_opt__find_all_branches_from_cur_interval_4_0_i7);
MR_def_label(ll_backend__stack_opt__find_all_branches_from_cur_interval_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(backend_libs__interval, interval_id);
	MR_np_call_localret_ent(fn__set__init_0_0,
		ll_backend__stack_opt__find_all_branches_from_cur_interval_4_0_i8);
MR_def_label(ll_backend__stack_opt__find_all_branches_from_cur_interval_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 6);
	MR_tfield(0, MR_r2, 0) = (MR_Integer) 0;
	MR_tfield(0, MR_r2, 1) = MR_sv(5);
	MR_tfield(0, MR_r2, 2) = MR_sv(6);
	MR_tfield(0, MR_r2, 3) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_r2, 4) = MR_sv(7);
	MR_tfield(0, MR_r2, 5) = MR_r1;
	MR_sv(6) = (MR_Word) MR_CTOR0_ADDR(ll_backend__stack_opt, path);
	MR_r1 = MR_sv(6);
	MR_np_call_localret_ent(fn__set__make_singleton_set_1_0,
		ll_backend__stack_opt__find_all_branches_from_cur_interval_4_0_i10);
MR_def_label(ll_backend__stack_opt__find_all_branches_from_cur_interval_4_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(8);
	MR_np_call_localret_ent(fn__set__init_0_0,
		ll_backend__stack_opt__find_all_branches_from_cur_interval_4_0_i11);
MR_def_label(ll_backend__stack_opt__find_all_branches_from_cur_interval_4_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_r6 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_sv(5);
	MR_tfield(0, MR_tempr1, 1) = (MR_Integer) 0;
	MR_tfield(0, MR_tempr1, 2) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(4);
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_r4 = MR_sv(2);
	MR_r5 = MR_sv(3);
	}
	MR_np_call_localret_ent(ll_backend__stack_opt__find_all_branches_7_0,
		ll_backend__stack_opt__find_all_branches_from_cur_interval_4_0_i13);
MR_def_label(ll_backend__stack_opt__find_all_branches_from_cur_interval_4_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_tfield(0, MR_r1, 1);
	MR_sv(2) = MR_tfield(0, MR_r1, 2);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_tfield(0, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(set__to_sorted_list_2_0,
		ll_backend__stack_opt__find_all_branches_from_cur_interval_4_0_i14);
MR_def_label(ll_backend__stack_opt__find_all_branches_from_cur_interval_4_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(ll_backend__stack_opt, match_path_info);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,0,12);
	MR_r4 = (MR_Word) MR_TAG_COMMON(0,0,10);
	MR_r5 = (MR_Word) MR_TAG_COMMON(0,3,5);
	MR_r6 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__map3_5_0,
		ll_backend__stack_opt__find_all_branches_from_cur_interval_4_0_i18);
MR_def_label(ll_backend__stack_opt__find_all_branches_from_cur_interval_4_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_sv(4) = MR_r3;
	MR_r1 = MR_sv(9);
	MR_np_call_localret_ent(fn__set__union_list_1_0,
		ll_backend__stack_opt__find_all_branches_from_cur_interval_4_0_i19);
MR_def_label(ll_backend__stack_opt__find_all_branches_from_cur_interval_4_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(backend_libs__interval, interval_id);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__set__union_list_1_0,
		ll_backend__stack_opt__find_all_branches_from_cur_interval_4_0_i20);
MR_def_label(ll_backend__stack_opt__find_all_branches_from_cur_interval_4_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 5);
	MR_tfield(0, MR_r2, 0) = MR_sv(3);
	MR_tfield(0, MR_r2, 1) = MR_sv(2);
	MR_tfield(0, MR_r2, 2) = MR_sv(1);
	MR_tfield(0, MR_r2, 3) = MR_sv(4);
	MR_tfield(0, MR_r2, 4) = MR_r1;
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(10);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_105_115_116_95_116_111_95_115_101_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_0);
MR_decl_entry(f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_105_102_102_101_114_101_110_99_101_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0);
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_mer_type_0;
MR_decl_entry(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0);
MR_decl_entry(parse_tree__prog_type__type_is_tuple_2_0);
MR_decl_entry(parse_tree__prog_type__type_to_ctor_and_args_3_0);
MR_decl_entry(hlds__hlds_module__module_info_get_type_table_2_0);
MR_decl_entry(hlds__hlds_data__lookup_type_ctor_defn_3_0);
MR_decl_entry(hlds__hlds_data__get_type_defn_body_2_0);
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_data__type_ctor_info_cons_tag_0;
MR_decl_entry(fn__f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_105_110_115_101_114_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_0);
MR_decl_entry(list__member_2_1);
MR_decl_entry(f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_109_98_101_114_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_0);
MR_declare_entry(MR_do_redo);

MR_BEGIN_MODULE(ll_backend__stack_opt_module15)
	MR_init_entry1(ll_backend__stack_opt__use_cell_8_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__stack_opt__use_cell_8_0);
	MR_init_label10(ll_backend__stack_opt__use_cell_8_0,3,4,5,8,71,6,13,16,62,14)
	MR_init_label10(ll_backend__stack_opt__use_cell_8_0,18,20,21,22,24,28,29,30,35,42)
	MR_init_label10(ll_backend__stack_opt__use_cell_8_0,44,45,40,37,51,70,49,36,54,32)
	MR_init_label1(ll_backend__stack_opt__use_cell_8_0,56)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'use_cell'/8 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__stack_opt__use_cell_8_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(18);
	MR_sv(18) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r5;
	MR_sv(5) = MR_tfield(0, MR_tempr1, 1);
	MR_tempr2 = MR_r6;
	MR_sv(6) = MR_tfield(0, MR_tempr2, 0);
	MR_sv(7) = MR_tfield(0, MR_sv(6), 5);
	MR_sv(11) = MR_tempr1;
	MR_sv(12) = MR_tempr2;
	MR_sv(13) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_sv(14) = (MR_Word) MR_TAG_COMMON(0,0,2);
	MR_r1 = MR_sv(13);
	MR_r2 = MR_sv(14);
	MR_r3 = MR_sv(2);
	}
	MR_np_call_localret_ent(f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_105_115_116_95_116_111_95_115_101_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_0,
		ll_backend__stack_opt__use_cell_8_0_i3);
MR_def_label(ll_backend__stack_opt__use_cell_8_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_r1 = MR_sv(13);
	MR_r2 = MR_sv(14);
	MR_r3 = MR_sv(8);
	MR_r4 = MR_sv(5);
	MR_np_call_localret_ent(f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_105_110_116_101_114_115_101_99_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		ll_backend__stack_opt__use_cell_8_0_i4);
MR_def_label(ll_backend__stack_opt__use_cell_8_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(13);
	MR_r2 = MR_sv(14);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(7);
	}
	MR_np_call_localret_ent(f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_105_102_102_101_114_101_110_99_101_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		ll_backend__stack_opt__use_cell_8_0_i5);
MR_def_label(ll_backend__stack_opt__use_cell_8_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_r1 = MR_sv(14);
	MR_r2 = MR_sv(7);
	MR_np_call_localret_ent(set__empty_1_0,
		ll_backend__stack_opt__use_cell_8_0_i8);
MR_def_label(ll_backend__stack_opt__use_cell_8_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__stack_opt__use_cell_8_0_i6);
	}
MR_def_label(ll_backend__stack_opt__use_cell_8_0,71)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(11);
	MR_r2 = MR_sv(12);
	MR_decr_sp_and_return(18);
MR_def_label(ll_backend__stack_opt__use_cell_8_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(7);
	if (MR_PTAG_TESTR(MR_sv(3),1)) {
		MR_GOTO_LAB(ll_backend__stack_opt__use_cell_8_0_i71);
	}
	MR_sv(9) = MR_tfield(0, MR_sv(11), 0);
	MR_r1 = MR_sv(13);
	MR_r2 = MR_sv(14);
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r4 = MR_tfield(0, MR_sv(9), 1);
	MR_r5 = MR_sv(1);
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		ll_backend__stack_opt__use_cell_8_0_i13);
MR_def_label(ll_backend__stack_opt__use_cell_8_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(10) = MR_r1;
	MR_np_call_localret_ent(parse_tree__prog_type__type_is_tuple_2_0,
		ll_backend__stack_opt__use_cell_8_0_i16);
MR_def_label(ll_backend__stack_opt__use_cell_8_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__stack_opt__use_cell_8_0_i14);
	}
MR_def_label(ll_backend__stack_opt__use_cell_8_0,62)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_sv(1);
	MR_r3 = MR_sv(8);
	MR_sv(8) = (MR_Integer) 0;
	MR_r1 = MR_sv(13);
	MR_r2 = MR_sv(14);
	MR_GOTO_LAB(ll_backend__stack_opt__use_cell_8_0_i28);
MR_def_label(ll_backend__stack_opt__use_cell_8_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(10);
	MR_np_call_localret_ent(parse_tree__prog_type__type_to_ctor_and_args_3_0,
		ll_backend__stack_opt__use_cell_8_0_i18);
MR_def_label(ll_backend__stack_opt__use_cell_8_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__stack_opt__use_cell_8_0_i71);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(9);
	MR_sv(9) = MR_r2;
	MR_r1 = MR_tfield(0, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_type_table_2_0,
		ll_backend__stack_opt__use_cell_8_0_i20);
MR_def_label(ll_backend__stack_opt__use_cell_8_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(9);
	MR_np_call_localret_ent(hlds__hlds_data__lookup_type_ctor_defn_3_0,
		ll_backend__stack_opt__use_cell_8_0_i21);
MR_def_label(ll_backend__stack_opt__use_cell_8_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(hlds__hlds_data__get_type_defn_body_2_0,
		ll_backend__stack_opt__use_cell_8_0_i22);
MR_def_label(ll_backend__stack_opt__use_cell_8_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,0)) {
		MR_GOTO_LAB(ll_backend__stack_opt__use_cell_8_0_i71);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, cons_id);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_data, cons_tag);
	MR_r3 = MR_tfield(0, MR_tempr1, 1);
	MR_r4 = MR_sv(3);
	}
	MR_np_call_localret_ent(map__lookup_3_0,
		ll_backend__stack_opt__use_cell_8_0_i24);
MR_def_label(ll_backend__stack_opt__use_cell_8_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,1)) {
		MR_GOTO_LAB(ll_backend__stack_opt__use_cell_8_0_i62);
	}
	MR_r4 = MR_sv(1);
	MR_r3 = MR_sv(8);
	MR_sv(8) = (MR_Integer) 1;
	MR_r1 = MR_sv(13);
	MR_r2 = MR_sv(14);
MR_def_label(ll_backend__stack_opt__use_cell_8_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r4;
	MR_sv(13) = MR_r1;
	MR_sv(14) = MR_r2;
	MR_np_call_localret_ent(fn__f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_105_110_115_101_114_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_0,
		ll_backend__stack_opt__use_cell_8_0_i29);
MR_def_label(ll_backend__stack_opt__use_cell_8_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(11);
	MR_r3 = MR_sv(12);
	MR_np_call_localret_ent(ll_backend__stack_opt__find_all_branches_from_cur_interval_4_0,
		ll_backend__stack_opt__use_cell_8_0_i30);
MR_def_label(ll_backend__stack_opt__use_cell_8_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(8),0)) {
		MR_GOTO_LAB(ll_backend__stack_opt__use_cell_8_0_i32);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(0, MR_r1, 2);
	if (MR_INT_NE(MR_tempr1,0)) {
		MR_GOTO_LAB(ll_backend__stack_opt__use_cell_8_0_i71);
	}
	MR_tempr1 = MR_sv(7);
	MR_sv(7) = MR_tfield(0, MR_r1, 0);
	MR_sv(8) = MR_tfield(0, MR_r1, 3);
	MR_sv(9) = MR_tfield(0, MR_r1, 4);
	MR_sv(10) = MR_tfield(0, MR_sv(6), 4);
	MR_tempr2 = MR_r1;
	MR_r1 = MR_sv(13);
	MR_r2 = MR_sv(14);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tfield(0, MR_tempr2, 1);
	}
	MR_np_call_localret_ent(f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_105_102_102_101_114_101_110_99_101_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		ll_backend__stack_opt__use_cell_8_0_i35);
MR_def_label(ll_backend__stack_opt__use_cell_8_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(10),0)) {
		MR_GOTO_LAB(ll_backend__stack_opt__use_cell_8_0_i37);
	}
	MR_sv(15) = (MR_Word) MR_redoip_slot(MR_maxfr);
	MR_sv(16) = (MR_Word) MR_redofr_slot(MR_maxfr);
	MR_save_maxfr(MR_sv(17));
	MR_redofr_slot_word(MR_maxfr) = (MR_Word) MR_curfr;
	MR_redoip_slot_word(MR_maxfr) = (MR_Word) MR_LABEL_AP(ll_backend__stack_opt__use_cell_8_0_i40);
	MR_sv(5) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__stack_opt, match_path_info);
	MR_r2 = MR_sv(7);
	MR_np_call_localret_ent(list__member_2_1,
		ll_backend__stack_opt__use_cell_8_0_i42);
MR_def_label(ll_backend__stack_opt__use_cell_8_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_CTOR1_ADDR(set_ordlist, set_ordlist);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(14);
	MR_tempr2 = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_tfield(0, MR_tempr2, 1);
	}
	MR_np_call_localret_ent(list__member_2_1,
		ll_backend__stack_opt__use_cell_8_0_i44);
MR_def_label(ll_backend__stack_opt__use_cell_8_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(13);
	MR_r2 = MR_sv(14);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_109_98_101_114_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_0,
		ll_backend__stack_opt__use_cell_8_0_i45);
MR_def_label(ll_backend__stack_opt__use_cell_8_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO(MR_ENTRY(MR_do_redo));
	}
	MR_restore_maxfr(MR_sv(17));
	MR_redoip_slot_word(MR_maxfr) = MR_sv(15);
	MR_redofr_slot_word(MR_maxfr) = MR_sv(16);
	MR_GOTO_LAB(ll_backend__stack_opt__use_cell_8_0_i70);
MR_def_label(ll_backend__stack_opt__use_cell_8_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	MR_redoip_slot_word(MR_maxfr) = MR_sv(15);
	MR_redofr_slot_word(MR_maxfr) = MR_sv(16);
	MR_r6 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r3 = MR_sv(6);
	MR_r4 = MR_sv(7);
	MR_r5 = MR_r6;
	MR_r2 = (MR_Integer) 0;
	MR_GOTO_LAB(ll_backend__stack_opt__use_cell_8_0_i36);
MR_def_label(ll_backend__stack_opt__use_cell_8_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(5);
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(13);
	MR_r2 = MR_sv(14);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_109_98_101_114_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_0,
		ll_backend__stack_opt__use_cell_8_0_i51);
MR_def_label(ll_backend__stack_opt__use_cell_8_0,51)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__stack_opt__use_cell_8_0_i49);
	}
MR_def_label(ll_backend__stack_opt__use_cell_8_0,70)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r3 = MR_sv(6);
	MR_r4 = MR_sv(7);
	MR_r5 = MR_sv(5);
	MR_r2 = (MR_Integer) 1;
	MR_GOTO_LAB(ll_backend__stack_opt__use_cell_8_0_i36);
MR_def_label(ll_backend__stack_opt__use_cell_8_0,49)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r3 = MR_sv(6);
	MR_r4 = MR_sv(7);
	MR_r5 = MR_tempr1;
	MR_r2 = (MR_Integer) 0;
	}
MR_def_label(ll_backend__stack_opt__use_cell_8_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(f_108_108_95_98_97_99_107_101_110_100_95_95_115_116_97_99_107_95_111_112_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_112_112_108_121_95_109_97_116_99_104_105_110_103_95_95_91_51_93_95_48_7_0,
		ll_backend__stack_opt__use_cell_8_0_i54);
MR_def_label(ll_backend__stack_opt__use_cell_8_0,54)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_tempr1;
	MR_r5 = MR_sv(4);
	MR_r6 = MR_sv(8);
	MR_r7 = MR_sv(9);
	MR_r8 = MR_sv(11);
	MR_r9 = MR_sv(12);
	MR_succip_word = MR_sv(18);
	MR_decr_sp(18);
	MR_np_tailcall_ent(ll_backend__stack_opt__record_matching_result_11_0);
	}
MR_def_label(ll_backend__stack_opt__use_cell_8_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_tfield(0, MR_r1, 3);
	MR_sv(9) = MR_tfield(0, MR_r1, 4);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(13);
	MR_r2 = MR_sv(14);
	MR_r3 = MR_sv(7);
	MR_r4 = MR_tfield(0, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_105_102_102_101_114_101_110_99_101_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		ll_backend__stack_opt__use_cell_8_0_i56);
MR_def_label(ll_backend__stack_opt__use_cell_8_0,56)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_tempr1;
	MR_r5 = MR_sv(4);
	MR_r6 = MR_sv(8);
	MR_r7 = MR_sv(9);
	MR_r8 = MR_sv(11);
	MR_r9 = MR_sv(12);
	MR_succip_word = MR_sv(18);
	MR_decr_sp(18);
	MR_np_tailcall_ent(ll_backend__stack_opt__record_matching_result_11_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(backend_libs__matching__find_via_cell_vars_9_0);

MR_BEGIN_MODULE(ll_backend__stack_opt_module16)
	MR_init_entry1(ll_backend__stack_opt__apply_matching_for_path_8_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__stack_opt__apply_matching_for_path_8_0);
	MR_init_label5(ll_backend__stack_opt__apply_matching_for_path_8_0,4,6,7,8,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'apply_matching_for_path'/8 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__stack_opt__apply_matching_for_path_8_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_sv(4) = MR_tempr1;
	MR_sv(5) = MR_r5;
	MR_sv(6) = (MR_Word) MR_TAG_COMMON(0,0,2);
	MR_r1 = MR_sv(6);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(set__empty_1_0,
		ll_backend__stack_opt__apply_matching_for_path_8_0_i4);
MR_def_label(ll_backend__stack_opt__apply_matching_for_path_8_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__stack_opt__apply_matching_for_path_8_0_i2);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(backend_libs__matching, benefit_node);
	MR_np_call_localret_ent(fn__set__init_0_0,
		ll_backend__stack_opt__apply_matching_for_path_8_0_i6);
MR_def_label(ll_backend__stack_opt__apply_matching_for_path_8_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(backend_libs__matching, cost_node);
	MR_np_call_localret_ent(fn__set__init_0_0,
		ll_backend__stack_opt__apply_matching_for_path_8_0_i7);
MR_def_label(ll_backend__stack_opt__apply_matching_for_path_8_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(6);
	MR_np_call_localret_ent(fn__set__init_0_0,
		ll_backend__stack_opt__apply_matching_for_path_8_0_i8);
MR_def_label(ll_backend__stack_opt__apply_matching_for_path_8_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tempr1;
	MR_decr_sp_and_return(7);
	}
MR_def_label(ll_backend__stack_opt__apply_matching_for_path_8_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(2);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(5);
	MR_r4 = MR_tfield(0, MR_tempr1, 0);
	MR_r5 = MR_tfield(0, MR_tempr1, 1);
	MR_r6 = MR_tfield(0, MR_sv(3), 0);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(backend_libs__matching__find_via_cell_vars_9_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(backend_libs__interval__record_interval_vars_4_0);
MR_decl_entry(backend_libs__interval__delete_interval_vars_5_0);
MR_decl_entry(set__insert_3_0);

MR_BEGIN_MODULE(ll_backend__stack_opt_module17)
	MR_init_entry1(ll_backend__stack_opt__record_cell_var_for_interval_9_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__stack_opt__record_cell_var_for_interval_9_0);
	MR_init_label5(ll_backend__stack_opt__record_cell_var_for_interval_9_0,3,4,7,9,5)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'record_cell_var_for_interval'/9 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__stack_opt__record_cell_var_for_interval_9_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_sv(1) = MR_r2;
	MR_tempr2 = MR_r3;
	MR_sv(2) = MR_tempr2;
	MR_sv(3) = MR_r5;
	MR_sv(4) = MR_r6;
	MR_r1 = MR_tempr2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_r4;
	}
	MR_np_call_localret_ent(backend_libs__interval__record_interval_vars_4_0,
		ll_backend__stack_opt__record_cell_var_for_interval_9_0_i3);
MR_def_label(ll_backend__stack_opt__record_cell_var_for_interval_9_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(backend_libs__interval__delete_interval_vars_5_0,
		ll_backend__stack_opt__record_cell_var_for_interval_9_0_i4);
MR_def_label(ll_backend__stack_opt__record_cell_var_for_interval_9_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(set__non_empty_1_0,
		ll_backend__stack_opt__record_cell_var_for_interval_9_0_i7);
MR_def_label(ll_backend__stack_opt__record_cell_var_for_interval_9_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__stack_opt__record_cell_var_for_interval_9_0_i5);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(backend_libs__interval, interval_id);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(4);
	MR_np_call_localret_ent(set__insert_3_0,
		ll_backend__stack_opt__record_cell_var_for_interval_9_0_i9);
MR_def_label(ll_backend__stack_opt__record_cell_var_for_interval_9_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_tempr1;
	MR_decr_sp_and_return(5);
	}
MR_def_label(ll_backend__stack_opt__record_cell_var_for_interval_9_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(4);
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(set__intersect_3_0);
MR_decl_entry(map__det_update_4_0);
MR_decl_entry(map__det_insert_4_0);

MR_BEGIN_MODULE(ll_backend__stack_opt_module18)
	MR_init_entry1(ll_backend__stack_opt__add_anchor_inserts_10_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__stack_opt__add_anchor_inserts_10_0);
	MR_init_label8(ll_backend__stack_opt__add_anchor_inserts_10_0,2,3,6,11,9,17,20,5)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'add_anchor_inserts'/10 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__stack_opt__add_anchor_inserts_10_0)
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
	MR_sv(5) = MR_tempr1;
	MR_sv(6) = MR_r6;
	MR_sv(7) = MR_r7;
	MR_sv(8) = (MR_Word) MR_CTOR0_ADDR(backend_libs__interval, anchor);
	MR_r1 = MR_sv(8);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(backend_libs__interval, anchor_follow_info);
	MR_r3 = MR_tfield(0, MR_tempr1, 9);
	}
	MR_np_call_localret_ent(map__lookup_3_0,
		ll_backend__stack_opt__add_anchor_inserts_10_0_i2);
MR_def_label(ll_backend__stack_opt__add_anchor_inserts_10_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = (MR_Word) MR_CTOR0_ADDR(backend_libs__interval, interval_id);
	MR_tempr2 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tfield(0, MR_tempr2, 1);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(set__intersect_3_0,
		ll_backend__stack_opt__add_anchor_inserts_10_0_i3);
MR_def_label(ll_backend__stack_opt__add_anchor_inserts_10_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(set__non_empty_1_0,
		ll_backend__stack_opt__add_anchor_inserts_10_0_i6);
MR_def_label(ll_backend__stack_opt__add_anchor_inserts_10_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__stack_opt__add_anchor_inserts_10_0_i5);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(2);
	MR_r3 = MR_tfield(0, MR_sv(6), 1);
	MR_sv(1) = MR_tempr1;
	MR_sv(2) = MR_r3;
	MR_sv(3) = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(3);
	MR_r4 = MR_sv(4);
	}
	MR_np_call_localret_ent(map__search_3_0,
		ll_backend__stack_opt__add_anchor_inserts_10_0_i11);
MR_def_label(ll_backend__stack_opt__add_anchor_inserts_10_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__stack_opt__add_anchor_inserts_10_0_i9);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r4 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = MR_r2;
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(4);
	MR_r5 = MR_sv(2);
	}
	MR_np_call_localret_ent(map__det_update_4_0,
		ll_backend__stack_opt__add_anchor_inserts_10_0_i17);
MR_def_label(ll_backend__stack_opt__add_anchor_inserts_10_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r4 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_sv(8);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r3 = MR_sv(4);
	MR_r5 = MR_sv(2);
	}
	MR_np_call_localret_ent(map__det_insert_4_0,
		ll_backend__stack_opt__add_anchor_inserts_10_0_i17);
MR_def_label(ll_backend__stack_opt__add_anchor_inserts_10_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(4);
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_r1;
	MR_r3 = MR_sv(7);
	MR_r1 = MR_sv(8);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 3);
	MR_sv(1) = MR_tempr2;
	MR_tempr3 = MR_sv(6);
	MR_tfield(0, MR_tempr2, 0) = MR_tfield(0, MR_tempr3, 0);
	MR_tfield(0, MR_tempr2, 1) = MR_tempr1;
	MR_tfield(0, MR_tempr2, 2) = MR_tfield(0, MR_tempr3, 2);
	}
	MR_np_call_localret_ent(set__insert_3_0,
		ll_backend__stack_opt__add_anchor_inserts_10_0_i20);
MR_def_label(ll_backend__stack_opt__add_anchor_inserts_10_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tempr1;
	MR_decr_sp_and_return(9);
	}
MR_def_label(ll_backend__stack_opt__add_anchor_inserts_10_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(7);
	MR_decr_sp_and_return(9);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__stack_opt_module19)
	MR_init_entry1(fn__ll_backend__stack_opt__close_path_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__ll_backend__stack_opt__close_path_1_0);
	MR_init_label5(fn__ll_backend__stack_opt__close_path_1_0,6,4,3,12,14)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'close_path'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__ll_backend__stack_opt__close_path_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(0, MR_r1, 0);
	if (MR_INT_NE(MR_tempr1,1)) {
		MR_GOTO_LAB(fn__ll_backend__stack_opt__close_path_1_0_i3);
	}
	MR_sv(5) = MR_tfield(0, MR_r1, 5);
	MR_sv(4) = MR_tfield(0, MR_r1, 4);
	MR_sv(3) = MR_tfield(0, MR_r1, 3);
	MR_sv(2) = MR_tfield(0, MR_r1, 2);
	MR_r2 = MR_tfield(0, MR_r1, 1);
	MR_sv(1) = MR_r2;
	MR_sv(6) = (MR_Word) MR_TAG_COMMON(0,0,2);
	MR_r1 = MR_sv(6);
	}
	MR_np_call_localret_ent(set__empty_1_0,
		fn__ll_backend__stack_opt__close_path_1_0_i6);
MR_def_label(fn__ll_backend__stack_opt__close_path_1_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(fn__ll_backend__stack_opt__close_path_1_0_i4);
	}
	MR_sv(1) = MR_sv(2);
	MR_sv(2) = MR_sv(3);
	MR_r1 = MR_sv(6);
	MR_np_call_localret_ent(fn__set__init_0_0,
		fn__ll_backend__stack_opt__close_path_1_0_i14);
MR_def_label(fn__ll_backend__stack_opt__close_path_1_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(1);
	MR_tfield(1, MR_r2, 1) = MR_sv(3);
	MR_sv(1) = MR_sv(2);
	MR_sv(2) = MR_r2;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,2);
	MR_np_call_localret_ent(fn__set__init_0_0,
		fn__ll_backend__stack_opt__close_path_1_0_i14);
MR_def_label(fn__ll_backend__stack_opt__close_path_1_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(10,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(ll_backend__stack_opt__IntroducedFrom__pred__close_path__661__1_1_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_tfield(0, MR_r1, 2);
	MR_sv(1) = MR_tfield(0, MR_r1, 1);
	MR_sv(3) = MR_tfield(0, MR_r1, 3);
	MR_sv(4) = MR_tfield(0, MR_r1, 4);
	MR_sv(5) = MR_tfield(0, MR_r1, 5);
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Word) MR_string_const("ll_backend.stack_opt", 20);
	MR_r3 = (MR_Word) MR_string_const("function \140ll_backend.stack_opt.close_path\'/1", 44);
	MR_r4 = (MR_Word) MR_string_const("FirstSegment0 not empty", 23);
	}
	MR_np_call_localret_ent(require__expect_4_0,
		fn__ll_backend__stack_opt__close_path_1_0_i12);
MR_def_label(fn__ll_backend__stack_opt__close_path_1_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_sv(3);
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,2);
	MR_np_call_localret_ent(fn__set__init_0_0,
		fn__ll_backend__stack_opt__close_path_1_0_i14);
MR_def_label(fn__ll_backend__stack_opt__close_path_1_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 6);
	MR_tfield(0, MR_r2, 0) = (MR_Integer) 1;
	MR_tfield(0, MR_r2, 1) = MR_r1;
	MR_tfield(0, MR_r2, 2) = MR_sv(1);
	MR_tfield(0, MR_r2, 3) = MR_sv(2);
	MR_tfield(0, MR_r2, 4) = MR_sv(4);
	MR_tfield(0, MR_r2, 5) = MR_sv(5);
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(7);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__stack_opt_module20)
	MR_init_entry1(ll_backend__stack_opt__extract_match_and_save_info_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__stack_opt__extract_match_and_save_info_4_0);
	MR_init_label1(ll_backend__stack_opt__extract_match_and_save_info_4_0,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'extract_match_and_save_info'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__stack_opt__extract_match_and_save_info_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(fn__ll_backend__stack_opt__close_path_1_0,
		ll_backend__stack_opt__extract_match_and_save_info_4_0_i2);
MR_def_label(ll_backend__stack_opt__extract_match_and_save_info_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_tfield(0, MR_r1, 2);
	MR_tfield(0, MR_tempr1, 1) = MR_tfield(0, MR_r1, 3);
	MR_tempr2 = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_tfield(0, MR_tempr2, 4);
	MR_r3 = MR_tfield(0, MR_tempr2, 5);
	MR_decr_sp_and_return(1);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__stack_opt_module21)
	MR_init_entry1(fn__ll_backend__stack_opt__add_interval_to_path_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__ll_backend__stack_opt__add_interval_to_path_3_0);
	MR_init_label4(fn__ll_backend__stack_opt__add_interval_to_path_3_0,4,2,7,8)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'add_interval_to_path'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__ll_backend__stack_opt__add_interval_to_path_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,2);
	MR_np_call_localret_ent(set__empty_1_0,
		fn__ll_backend__stack_opt__add_interval_to_path_3_0_i4);
MR_def_label(fn__ll_backend__stack_opt__add_interval_to_path_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(fn__ll_backend__stack_opt__add_interval_to_path_3_0_i2);
	}
	MR_r1 = MR_sv(3);
	MR_decr_sp_and_return(4);
MR_def_label(fn__ll_backend__stack_opt__add_interval_to_path_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,2);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_tfield(0, MR_sv(3), 1);
	MR_np_call_localret_ent(fn__f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_117_110_105_111_110_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_0,
		fn__ll_backend__stack_opt__add_interval_to_path_3_0_i7);
MR_def_label(fn__ll_backend__stack_opt__add_interval_to_path_3_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(backend_libs__interval, interval_id);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tfield(0, MR_sv(3), 5);
	}
	MR_np_call_localret_ent(set__insert_3_0,
		fn__ll_backend__stack_opt__add_interval_to_path_3_0_i8);
MR_def_label(fn__ll_backend__stack_opt__add_interval_to_path_3_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 6);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_tfield(0, MR_r2, 0) = MR_tfield(0, MR_tempr1, 0);
	MR_tfield(0, MR_r2, 1) = MR_sv(1);
	MR_tfield(0, MR_r2, 2) = MR_tfield(0, MR_tempr1, 2);
	MR_tfield(0, MR_r2, 3) = MR_tfield(0, MR_tempr1, 3);
	MR_tfield(0, MR_r2, 4) = MR_tfield(0, MR_tempr1, 4);
	MR_tfield(0, MR_r2, 5) = MR_r1;
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(4);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__stack_opt_module22)
	MR_init_entry1(fn__ll_backend__stack_opt__add_anchor_to_path_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__ll_backend__stack_opt__add_anchor_to_path_2_0);
	MR_init_label1(fn__ll_backend__stack_opt__add_anchor_to_path_2_0,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'add_anchor_to_path'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__ll_backend__stack_opt__add_anchor_to_path_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(backend_libs__interval, anchor);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tfield(0, MR_sv(1), 4);
	}
	MR_np_call_localret_ent(set__insert_3_0,
		fn__ll_backend__stack_opt__add_anchor_to_path_2_0_i2);
MR_def_label(fn__ll_backend__stack_opt__add_anchor_to_path_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 6);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_tfield(0, MR_r2, 0) = MR_tfield(0, MR_tempr1, 0);
	MR_tfield(0, MR_r2, 1) = MR_tfield(0, MR_tempr1, 1);
	MR_tfield(0, MR_r2, 2) = MR_tfield(0, MR_tempr1, 2);
	MR_tfield(0, MR_r2, 3) = MR_tfield(0, MR_tempr1, 3);
	MR_tfield(0, MR_r2, 4) = MR_r1;
	MR_tfield(0, MR_r2, 5) = MR_tfield(0, MR_tempr1, 5);
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(2);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__stack_opt_module23)
	MR_init_entry1(ll_backend__stack_opt__apply_interval_find_all_branches_map_7_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__stack_opt__apply_interval_find_all_branches_map_7_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'apply_interval_find_all_branches_map'/7 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__stack_opt__apply_interval_find_all_branches_map_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r5;
	MR_r5 = MR_r6;
	MR_r6 = MR_tempr1;
	MR_np_tailcall_ent(ll_backend__stack_opt__apply_interval_find_all_branches_7_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__stack_opt_module24)
	MR_init_entry1(fn__ll_backend__stack_opt__project_paths_from_all_paths_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__ll_backend__stack_opt__project_paths_from_all_paths_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'project_paths_from_all_paths'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__ll_backend__stack_opt__project_paths_from_all_paths_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(0, MR_r1, 0);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__stack_opt_module25)
	MR_init_entry1(fn__ll_backend__stack_opt__project_after_model_non_from_all_paths_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__ll_backend__stack_opt__project_after_model_non_from_all_paths_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'project_after_model_non_from_all_paths'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__ll_backend__stack_opt__project_after_model_non_from_all_paths_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(0, MR_r1, 1);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(io__write_3_0);

MR_BEGIN_MODULE(ll_backend__stack_opt_module26)
	MR_init_entry1(ll_backend__stack_opt__dump_anchor_inserts_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__stack_opt__dump_anchor_inserts_3_0);
	MR_init_label3(ll_backend__stack_opt__dump_anchor_inserts_3_0,2,3,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'dump_anchor_inserts'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__stack_opt__dump_anchor_inserts_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_tfield(0, MR_r1, 0);
	MR_sv(2) = MR_tfield(0, MR_r1, 1);
	MR_r1 = (MR_Word) MR_string_const("\ninsertions after ", 18);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__stack_opt__dump_anchor_inserts_3_0_i2);
MR_def_label(ll_backend__stack_opt__dump_anchor_inserts_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(backend_libs__interval, anchor);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(io__write_3_0,
		ll_backend__stack_opt__dump_anchor_inserts_3_0_i3);
MR_def_label(ll_backend__stack_opt__dump_anchor_inserts_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(":\n", 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__stack_opt__dump_anchor_inserts_3_0_i4);
MR_def_label(ll_backend__stack_opt__dump_anchor_inserts_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(backend_libs__interval, insert_spec);
	MR_r2 = (MR_Word) MR_IO_CTOR_ADDR;
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,3,6);
	MR_r4 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(list__foldl_4_2);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__set__to_sorted_list_1_0);
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;
MR_decl_entry(backend_libs__interval__write_int_list_3_0);
MR_decl_entry(term__var_to_int_2_0);
MR_decl_entry(io__write_int_3_0);
MR_decl_entry(hlds__hlds_out__hlds_out_util__write_cons_id_and_arity_3_0);

MR_BEGIN_MODULE(ll_backend__stack_opt_module27)
	MR_init_entry1(ll_backend__stack_opt__dump_insert_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__stack_opt__dump_insert_3_0);
	MR_init_label10(ll_backend__stack_opt__dump_insert_3_0,3,5,6,7,8,12,13,14,15,16)
	MR_init_label3(ll_backend__stack_opt__dump_insert_3_0,18,19,9)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'dump_insert'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__stack_opt__dump_insert_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_tfield(0, MR_r1, 0);
	MR_sv(3) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_sv(4) = (MR_Word) MR_TAG_COMMON(0,0,2);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_tfield(0, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(fn__set__to_sorted_list_1_0,
		ll_backend__stack_opt__dump_insert_3_0_i3);
MR_def_label(ll_backend__stack_opt__dump_insert_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = (MR_Word) MR_INT_CTOR_ADDR;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(5);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,3,7);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__map_3_0,
		ll_backend__stack_opt__dump_insert_3_0_i5);
MR_def_label(ll_backend__stack_opt__dump_insert_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("vars [", 6);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__stack_opt__dump_insert_3_0_i6);
MR_def_label(ll_backend__stack_opt__dump_insert_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(backend_libs__interval__write_int_list_3_0,
		ll_backend__stack_opt__dump_insert_3_0_i7);
MR_def_label(ll_backend__stack_opt__dump_insert_3_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("]: ", 3);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__stack_opt__dump_insert_3_0_i8);
MR_def_label(ll_backend__stack_opt__dump_insert_3_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(0, MR_sv(1), 0);
	if (MR_PTAG_TESTR(MR_tempr1,0)) {
		MR_GOTO_LAB(ll_backend__stack_opt__dump_insert_3_0_i9);
	}
	MR_tempr2 = MR_tfield(0, MR_tempr1, 3);
	if (MR_PTAG_TESTR(MR_tempr2,1)) {
		MR_GOTO_LAB(ll_backend__stack_opt__dump_insert_3_0_i9);
	}
	MR_sv(1) = MR_tfield(1, MR_tempr2, 1);
	MR_sv(2) = MR_tfield(1, MR_tempr2, 2);
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tfield(1, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(term__var_to_int_2_0,
		ll_backend__stack_opt__dump_insert_3_0_i12);
MR_def_label(ll_backend__stack_opt__dump_insert_3_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__write_int_3_0,
		ll_backend__stack_opt__dump_insert_3_0_i13);
MR_def_label(ll_backend__stack_opt__dump_insert_3_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(" => ", 4);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__stack_opt__dump_insert_3_0_i14);
MR_def_label(ll_backend__stack_opt__dump_insert_3_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(hlds__hlds_out__hlds_out_util__write_cons_id_and_arity_3_0,
		ll_backend__stack_opt__dump_insert_3_0_i15);
MR_def_label(ll_backend__stack_opt__dump_insert_3_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("(", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__stack_opt__dump_insert_3_0_i16);
MR_def_label(ll_backend__stack_opt__dump_insert_3_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(5);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,3,8);
	MR_r4 = MR_sv(2);
	MR_np_call_localret_ent(list__map_3_0,
		ll_backend__stack_opt__dump_insert_3_0_i18);
MR_def_label(ll_backend__stack_opt__dump_insert_3_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(backend_libs__interval__write_int_list_3_0,
		ll_backend__stack_opt__dump_insert_3_0_i19);
MR_def_label(ll_backend__stack_opt__dump_insert_3_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(")\n", 2);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(io__write_string_3_0);
MR_def_label(ll_backend__stack_opt__dump_insert_3_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("BAD INSERT GOAL\n", 16);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(io__write_string_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(io__write_list_5_0);

MR_BEGIN_MODULE(ll_backend__stack_opt_module28)
	MR_init_entry1(ll_backend__stack_opt__dump_matching_result_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__stack_opt__dump_matching_result_3_0);
	MR_init_label10(ll_backend__stack_opt__dump_matching_result_3_0,2,3,4,5,8,9,11,12,13,14)
	MR_init_label10(ll_backend__stack_opt__dump_matching_result_3_0,15,16,17,18,19,20,21,23,24,25)
	MR_init_label10(ll_backend__stack_opt__dump_matching_result_3_0,26,27,29,30,31,32,33,35,36,37)
	MR_init_label2(ll_backend__stack_opt__dump_matching_result_3_0,38,40)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'dump_matching_result'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__stack_opt__dump_matching_result_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(11);
	MR_sv(11) = (MR_Word) MR_succip;
	MR_sv(1) = MR_tfield(0, MR_r1, 0);
	MR_sv(2) = MR_tfield(0, MR_r1, 1);
	MR_sv(3) = MR_tfield(0, MR_r1, 2);
	MR_sv(4) = MR_tfield(0, MR_r1, 3);
	MR_sv(5) = MR_tfield(0, MR_r1, 4);
	MR_sv(6) = MR_tfield(0, MR_r1, 5);
	MR_sv(7) = MR_tfield(0, MR_r1, 6);
	MR_sv(8) = MR_tfield(0, MR_r1, 7);
	MR_sv(9) = MR_tfield(0, MR_r1, 8);
	MR_r1 = (MR_Word) MR_string_const("\nmatching result at ", 20);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__stack_opt__dump_matching_result_3_0_i2);
MR_def_label(ll_backend__stack_opt__dump_matching_result_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__goal_path, goal_id);
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(io__write_3_0,
		ll_backend__stack_opt__dump_matching_result_3_0_i3);
MR_def_label(ll_backend__stack_opt__dump_matching_result_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("\n", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__stack_opt__dump_matching_result_3_0_i4);
MR_def_label(ll_backend__stack_opt__dump_matching_result_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(term__var_to_int_2_0,
		ll_backend__stack_opt__dump_matching_result_3_0_i5);
MR_def_label(ll_backend__stack_opt__dump_matching_result_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(5) = (MR_Word) MR_TAG_COMMON(0,0,2);
	MR_sv(10) = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(10);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,3,9);
	MR_r4 = MR_sv(3);
	MR_np_call_localret_ent(list__map_3_0,
		ll_backend__stack_opt__dump_matching_result_3_0_i8);
MR_def_label(ll_backend__stack_opt__dump_matching_result_3_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(fn__set__to_sorted_list_1_0,
		ll_backend__stack_opt__dump_matching_result_3_0_i9);
MR_def_label(ll_backend__stack_opt__dump_matching_result_3_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(10);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,3,10);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__map_3_0,
		ll_backend__stack_opt__dump_matching_result_3_0_i11);
MR_def_label(ll_backend__stack_opt__dump_matching_result_3_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(io__write_int_3_0,
		ll_backend__stack_opt__dump_matching_result_3_0_i12);
MR_def_label(ll_backend__stack_opt__dump_matching_result_3_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(" => ", 4);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__stack_opt__dump_matching_result_3_0_i13);
MR_def_label(ll_backend__stack_opt__dump_matching_result_3_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(hlds__hlds_out__hlds_out_util__write_cons_id_and_arity_3_0,
		ll_backend__stack_opt__dump_matching_result_3_0_i14);
MR_def_label(ll_backend__stack_opt__dump_matching_result_3_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("(", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__stack_opt__dump_matching_result_3_0_i15);
MR_def_label(ll_backend__stack_opt__dump_matching_result_3_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(backend_libs__interval__write_int_list_3_0,
		ll_backend__stack_opt__dump_matching_result_3_0_i16);
MR_def_label(ll_backend__stack_opt__dump_matching_result_3_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("): via cell ", 12);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__stack_opt__dump_matching_result_3_0_i17);
MR_def_label(ll_backend__stack_opt__dump_matching_result_3_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(backend_libs__interval__write_int_list_3_0,
		ll_backend__stack_opt__dump_matching_result_3_0_i18);
MR_def_label(ll_backend__stack_opt__dump_matching_result_3_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("\n", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__stack_opt__dump_matching_result_3_0_i19);
MR_def_label(ll_backend__stack_opt__dump_matching_result_3_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("potential intervals: ", 21);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__stack_opt__dump_matching_result_3_0_i20);
MR_def_label(ll_backend__stack_opt__dump_matching_result_3_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = (MR_Word) MR_CTOR0_ADDR(backend_libs__interval, interval_id);
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(6);
	MR_np_call_localret_ent(fn__set__to_sorted_list_1_0,
		ll_backend__stack_opt__dump_matching_result_3_0_i21);
MR_def_label(ll_backend__stack_opt__dump_matching_result_3_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(10);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,3,11);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__list__map_2_0,
		ll_backend__stack_opt__dump_matching_result_3_0_i23);
MR_def_label(ll_backend__stack_opt__dump_matching_result_3_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(backend_libs__interval__write_int_list_3_0,
		ll_backend__stack_opt__dump_matching_result_3_0_i24);
MR_def_label(ll_backend__stack_opt__dump_matching_result_3_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("\n", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__stack_opt__dump_matching_result_3_0_i25);
MR_def_label(ll_backend__stack_opt__dump_matching_result_3_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("insert intervals: ", 18);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__stack_opt__dump_matching_result_3_0_i26);
MR_def_label(ll_backend__stack_opt__dump_matching_result_3_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(7);
	MR_np_call_localret_ent(fn__set__to_sorted_list_1_0,
		ll_backend__stack_opt__dump_matching_result_3_0_i27);
MR_def_label(ll_backend__stack_opt__dump_matching_result_3_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(10);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,3,12);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__list__map_2_0,
		ll_backend__stack_opt__dump_matching_result_3_0_i29);
MR_def_label(ll_backend__stack_opt__dump_matching_result_3_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(backend_libs__interval__write_int_list_3_0,
		ll_backend__stack_opt__dump_matching_result_3_0_i30);
MR_def_label(ll_backend__stack_opt__dump_matching_result_3_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("\n", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__stack_opt__dump_matching_result_3_0_i31);
MR_def_label(ll_backend__stack_opt__dump_matching_result_3_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("potential anchors: ", 19);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__stack_opt__dump_matching_result_3_0_i32);
MR_def_label(ll_backend__stack_opt__dump_matching_result_3_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = (MR_Word) MR_CTOR0_ADDR(backend_libs__interval, anchor);
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(8);
	MR_np_call_localret_ent(fn__set__to_sorted_list_1_0,
		ll_backend__stack_opt__dump_matching_result_3_0_i33);
MR_def_label(ll_backend__stack_opt__dump_matching_result_3_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_r3 = (MR_Word) MR_string_const(" ", 1);
	MR_r4 = (MR_Word) MR_TAG_COMMON(0,3,13);
	}
	MR_np_call_localret_ent(io__write_list_5_0,
		ll_backend__stack_opt__dump_matching_result_3_0_i35);
MR_def_label(ll_backend__stack_opt__dump_matching_result_3_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("\n", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__stack_opt__dump_matching_result_3_0_i36);
MR_def_label(ll_backend__stack_opt__dump_matching_result_3_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("insert anchors: ", 16);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__stack_opt__dump_matching_result_3_0_i37);
MR_def_label(ll_backend__stack_opt__dump_matching_result_3_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(9);
	MR_np_call_localret_ent(fn__set__to_sorted_list_1_0,
		ll_backend__stack_opt__dump_matching_result_3_0_i38);
MR_def_label(ll_backend__stack_opt__dump_matching_result_3_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_r3 = (MR_Word) MR_string_const(" ", 1);
	MR_r4 = (MR_Word) MR_TAG_COMMON(0,3,14);
	}
	MR_np_call_localret_ent(io__write_list_5_0,
		ll_backend__stack_opt__dump_matching_result_3_0_i40);
MR_def_label(ll_backend__stack_opt__dump_matching_result_3_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("\n", 1);
	MR_succip_word = MR_sv(11);
	MR_decr_sp(11);
	MR_np_tailcall_ent(io__write_string_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___set_ordlist__set_ordlist_1_0);

MR_BEGIN_MODULE(ll_backend__stack_opt_module29)
	MR_init_entry1(__Unify___ll_backend__stack_opt__all_paths_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___ll_backend__stack_opt__all_paths_0_0);
	MR_init_label3(__Unify___ll_backend__stack_opt__all_paths_0_0,4,9,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___ll_backend__stack_opt__all_paths_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___ll_backend__stack_opt__all_paths_0_0_i9);
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
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__stack_opt, path);
	MR_r2 = MR_tfield(0, MR_tempr1, 0);
	MR_r3 = MR_tfield(0, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(__Unify___set_ordlist__set_ordlist_1_0,
		__Unify___ll_backend__stack_opt__all_paths_0_0_i4);
MR_def_label(__Unify___ll_backend__stack_opt__all_paths_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___ll_backend__stack_opt__all_paths_0_0_i1);
	}
	if ((MR_sv(1) != MR_sv(3))) {
		MR_GOTO_LAB(__Unify___ll_backend__stack_opt__all_paths_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,2);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(4);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(__Unify___set_ordlist__set_ordlist_1_0);
MR_def_label(__Unify___ll_backend__stack_opt__all_paths_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___ll_backend__stack_opt__all_paths_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Compare___set_ordlist__set_ordlist_1_0);
MR_decl_entry(private_builtin__builtin_compare_int_3_0);

MR_BEGIN_MODULE(ll_backend__stack_opt_module30)
	MR_init_entry1(__Compare___ll_backend__stack_opt__all_paths_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___ll_backend__stack_opt__all_paths_0_0);
	MR_init_label5(__Compare___ll_backend__stack_opt__all_paths_0_0,3,2,5,9,39)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___ll_backend__stack_opt__all_paths_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___ll_backend__stack_opt__all_paths_0_0_i3);
	}
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___ll_backend__stack_opt__all_paths_0_0_i2);
MR_def_label(__Compare___ll_backend__stack_opt__all_paths_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___ll_backend__stack_opt__all_paths_0_0,2)
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
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__stack_opt, path);
	MR_r2 = MR_tfield(0, MR_tempr3, 0);
	MR_r3 = MR_tfield(0, MR_tempr4, 0);
	}
	MR_np_call_localret_ent(__Compare___set_ordlist__set_ordlist_1_0,
		__Compare___ll_backend__stack_opt__all_paths_0_0_i5);
MR_def_label(__Compare___ll_backend__stack_opt__all_paths_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__stack_opt__all_paths_0_0_i39);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___ll_backend__stack_opt__all_paths_0_0_i9);
MR_def_label(__Compare___ll_backend__stack_opt__all_paths_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__stack_opt__all_paths_0_0_i39);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,2);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(4);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(__Compare___set_ordlist__set_ordlist_1_0);
MR_def_label(__Compare___ll_backend__stack_opt__all_paths_0_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__stack_opt_module31)
	MR_init_entry1(__Unify___ll_backend__stack_opt__current_segment_first_flush_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___ll_backend__stack_opt__current_segment_first_flush_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___ll_backend__stack_opt__current_segment_first_flush_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_r1 == MR_r2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__stack_opt_module32)
	MR_init_entry1(__Compare___ll_backend__stack_opt__current_segment_first_flush_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___ll_backend__stack_opt__current_segment_first_flush_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___ll_backend__stack_opt__current_segment_first_flush_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___list__list_1_0);

MR_BEGIN_MODULE(ll_backend__stack_opt_module33)
	MR_init_entry1(__Unify___ll_backend__stack_opt__match_info_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___ll_backend__stack_opt__match_info_0_0);
	MR_init_label5(__Unify___ll_backend__stack_opt__match_info_0_0,4,7,9,13,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___ll_backend__stack_opt__match_info_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___ll_backend__stack_opt__match_info_0_0_i13);
	}
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
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
	MR_sv(5) = MR_tfield(0, MR_tempr2, 1);
	MR_sv(6) = MR_tfield(0, MR_tempr2, 2);
	MR_sv(7) = MR_tfield(0, MR_tempr2, 3);
	MR_sv(8) = MR_tfield(0, MR_tempr2, 4);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__stack_opt, match_path_info);
	MR_r2 = MR_tfield(0, MR_tempr1, 0);
	MR_r3 = MR_tfield(0, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(__Unify___list__list_1_0,
		__Unify___ll_backend__stack_opt__match_info_0_0_i4);
MR_def_label(__Unify___ll_backend__stack_opt__match_info_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___ll_backend__stack_opt__match_info_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,2);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(5);
	MR_np_call_localret_ent(__Unify___set_ordlist__set_ordlist_1_0,
		__Unify___ll_backend__stack_opt__match_info_0_0_i7);
MR_def_label(__Unify___ll_backend__stack_opt__match_info_0_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___ll_backend__stack_opt__match_info_0_0_i1);
	}
	if ((MR_sv(2) != MR_sv(6))) {
		MR_GOTO_LAB(__Unify___ll_backend__stack_opt__match_info_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(backend_libs__interval, anchor);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(7);
	MR_np_call_localret_ent(__Unify___set_ordlist__set_ordlist_1_0,
		__Unify___ll_backend__stack_opt__match_info_0_0_i9);
MR_def_label(__Unify___ll_backend__stack_opt__match_info_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___ll_backend__stack_opt__match_info_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(backend_libs__interval, interval_id);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(8);
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_np_tailcall_ent(__Unify___set_ordlist__set_ordlist_1_0);
MR_def_label(__Unify___ll_backend__stack_opt__match_info_0_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___ll_backend__stack_opt__match_info_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(9);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Compare___list__list_1_0);

MR_BEGIN_MODULE(ll_backend__stack_opt_module34)
	MR_init_entry1(__Compare___ll_backend__stack_opt__match_info_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___ll_backend__stack_opt__match_info_0_0);
	MR_init_label7(__Compare___ll_backend__stack_opt__match_info_0_0,3,2,5,10,14,18,61)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___ll_backend__stack_opt__match_info_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___ll_backend__stack_opt__match_info_0_0_i3);
	}
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___ll_backend__stack_opt__match_info_0_0_i2);
MR_def_label(__Compare___ll_backend__stack_opt__match_info_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___ll_backend__stack_opt__match_info_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(2);
	MR_sv(8) = MR_tfield(0, MR_tempr5, 4);
	MR_sv(7) = MR_tfield(0, MR_tempr5, 3);
	MR_sv(6) = MR_tfield(0, MR_tempr5, 2);
	MR_sv(5) = MR_tfield(0, MR_tempr5, 1);
	MR_tempr6 = MR_sv(1);
	MR_sv(4) = MR_tfield(0, MR_tempr6, 4);
	MR_sv(3) = MR_tfield(0, MR_tempr6, 3);
	MR_tempr1 = MR_tfield(0, MR_tempr6, 2);
	MR_tempr2 = MR_tfield(0, MR_tempr6, 1);
	MR_tempr3 = MR_tempr6;
	MR_sv(1) = MR_tempr2;
	MR_tempr4 = MR_tempr5;
	MR_sv(2) = MR_tempr1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__stack_opt, match_path_info);
	MR_r2 = MR_tfield(0, MR_tempr3, 0);
	MR_r3 = MR_tfield(0, MR_tempr4, 0);
	}
	MR_np_call_localret_ent(__Compare___list__list_1_0,
		__Compare___ll_backend__stack_opt__match_info_0_0_i5);
MR_def_label(__Compare___ll_backend__stack_opt__match_info_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__stack_opt__match_info_0_0_i61);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,2);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(5);
	MR_np_call_localret_ent(__Compare___set_ordlist__set_ordlist_1_0,
		__Compare___ll_backend__stack_opt__match_info_0_0_i10);
MR_def_label(__Compare___ll_backend__stack_opt__match_info_0_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__stack_opt__match_info_0_0_i61);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(6);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___ll_backend__stack_opt__match_info_0_0_i14);
MR_def_label(__Compare___ll_backend__stack_opt__match_info_0_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__stack_opt__match_info_0_0_i61);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(backend_libs__interval, anchor);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(7);
	MR_np_call_localret_ent(__Compare___set_ordlist__set_ordlist_1_0,
		__Compare___ll_backend__stack_opt__match_info_0_0_i18);
MR_def_label(__Compare___ll_backend__stack_opt__match_info_0_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__stack_opt__match_info_0_0_i61);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(backend_libs__interval, interval_id);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(8);
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_np_tailcall_ent(__Compare___set_ordlist__set_ordlist_1_0);
MR_def_label(__Compare___ll_backend__stack_opt__match_info_0_0,61)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(9);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__stack_opt_module35)
	MR_init_entry1(__Unify___ll_backend__stack_opt__match_path_info_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___ll_backend__stack_opt__match_path_info_0_0);
	MR_init_label3(__Unify___ll_backend__stack_opt__match_path_info_0_0,6,10,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___ll_backend__stack_opt__match_path_info_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___ll_backend__stack_opt__match_path_info_0_0_i10);
	}
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_tfield(0, MR_tempr1, 1);
	MR_tempr2 = MR_sv(2);
	MR_sv(2) = MR_tfield(0, MR_tempr2, 1);
	MR_sv(3) = (MR_Word) MR_TAG_COMMON(0,0,16);
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,2);
	MR_r2 = MR_tfield(0, MR_tempr1, 0);
	MR_r3 = MR_tfield(0, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(__Unify___set_ordlist__set_ordlist_1_0,
		__Unify___ll_backend__stack_opt__match_path_info_0_0_i6);
MR_def_label(__Unify___ll_backend__stack_opt__match_path_info_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___ll_backend__stack_opt__match_path_info_0_0_i1);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(__Unify___list__list_1_0);
MR_def_label(__Unify___ll_backend__stack_opt__match_path_info_0_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___ll_backend__stack_opt__match_path_info_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(4);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__stack_opt_module36)
	MR_init_entry1(__Compare___ll_backend__stack_opt__match_path_info_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___ll_backend__stack_opt__match_path_info_0_0);
	MR_init_label4(__Compare___ll_backend__stack_opt__match_path_info_0_0,3,2,6,30)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___ll_backend__stack_opt__match_path_info_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___ll_backend__stack_opt__match_path_info_0_0_i3);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___ll_backend__stack_opt__match_path_info_0_0_i2);
MR_def_label(__Compare___ll_backend__stack_opt__match_path_info_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___ll_backend__stack_opt__match_path_info_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(2);
	MR_tempr1 = MR_tfield(0, MR_tempr5, 1);
	MR_tempr6 = MR_sv(1);
	MR_tempr2 = MR_tfield(0, MR_tempr6, 1);
	MR_tempr3 = MR_tempr6;
	MR_sv(1) = MR_tempr2;
	MR_tempr4 = MR_tempr5;
	MR_sv(2) = MR_tempr1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,2);
	MR_r2 = MR_tfield(0, MR_tempr3, 0);
	MR_r3 = MR_tfield(0, MR_tempr4, 0);
	}
	MR_np_call_localret_ent(__Compare___set_ordlist__set_ordlist_1_0,
		__Compare___ll_backend__stack_opt__match_path_info_0_0_i6);
MR_def_label(__Compare___ll_backend__stack_opt__match_path_info_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__stack_opt__match_path_info_0_0_i30);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,16);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Compare___list__list_1_0);
MR_def_label(__Compare___ll_backend__stack_opt__match_path_info_0_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___term__var_1_0);
MR_decl_entry(__Unify___parse_tree__prog_data__cons_id_0_0);

MR_BEGIN_MODULE(ll_backend__stack_opt_module37)
	MR_init_entry1(__Unify___ll_backend__stack_opt__matching_result_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___ll_backend__stack_opt__matching_result_0_0);
	MR_init_label9(__Unify___ll_backend__stack_opt__matching_result_0_0,5,7,9,11,13,15,17,21,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___ll_backend__stack_opt__matching_result_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___ll_backend__stack_opt__matching_result_0_0_i21);
	}
	MR_incr_sp(18);
	MR_sv(18) = (MR_Word) MR_succip;
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
	MR_sv(9) = MR_tfield(0, MR_tempr2, 1);
	MR_sv(10) = MR_tfield(0, MR_tempr2, 2);
	MR_sv(11) = MR_tfield(0, MR_tempr2, 3);
	MR_sv(12) = MR_tfield(0, MR_tempr2, 4);
	MR_sv(13) = MR_tfield(0, MR_tempr2, 5);
	MR_sv(14) = MR_tfield(0, MR_tempr2, 6);
	MR_sv(15) = MR_tfield(0, MR_tempr2, 7);
	MR_sv(16) = MR_tfield(0, MR_tempr2, 8);
	MR_sv(17) = (MR_Word) MR_TAG_COMMON(0,0,2);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_tfield(0, MR_tempr1, 0);
	MR_r3 = MR_tfield(0, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(__Unify___term__var_1_0,
		__Unify___ll_backend__stack_opt__matching_result_0_0_i5);
MR_def_label(__Unify___ll_backend__stack_opt__matching_result_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___ll_backend__stack_opt__matching_result_0_0_i1);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(9);
	MR_np_call_localret_ent(__Unify___parse_tree__prog_data__cons_id_0_0,
		__Unify___ll_backend__stack_opt__matching_result_0_0_i7);
MR_def_label(__Unify___ll_backend__stack_opt__matching_result_0_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___ll_backend__stack_opt__matching_result_0_0_i1);
	}
	MR_r1 = MR_sv(17);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(10);
	MR_np_call_localret_ent(__Unify___list__list_1_0,
		__Unify___ll_backend__stack_opt__matching_result_0_0_i9);
MR_def_label(__Unify___ll_backend__stack_opt__matching_result_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___ll_backend__stack_opt__matching_result_0_0_i1);
	}
	MR_r1 = MR_sv(17);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(11);
	MR_np_call_localret_ent(__Unify___set_ordlist__set_ordlist_1_0,
		__Unify___ll_backend__stack_opt__matching_result_0_0_i11);
MR_def_label(__Unify___ll_backend__stack_opt__matching_result_0_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___ll_backend__stack_opt__matching_result_0_0_i1);
	}
	if ((MR_sv(4) != MR_sv(12))) {
		MR_GOTO_LAB(__Unify___ll_backend__stack_opt__matching_result_0_0_i1);
	}
	MR_sv(1) = (MR_Word) MR_CTOR0_ADDR(backend_libs__interval, interval_id);
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(13);
	MR_np_call_localret_ent(__Unify___set_ordlist__set_ordlist_1_0,
		__Unify___ll_backend__stack_opt__matching_result_0_0_i13);
MR_def_label(__Unify___ll_backend__stack_opt__matching_result_0_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___ll_backend__stack_opt__matching_result_0_0_i1);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(14);
	MR_np_call_localret_ent(__Unify___set_ordlist__set_ordlist_1_0,
		__Unify___ll_backend__stack_opt__matching_result_0_0_i15);
MR_def_label(__Unify___ll_backend__stack_opt__matching_result_0_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___ll_backend__stack_opt__matching_result_0_0_i1);
	}
	MR_sv(1) = (MR_Word) MR_CTOR0_ADDR(backend_libs__interval, anchor);
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(7);
	MR_r3 = MR_sv(15);
	MR_np_call_localret_ent(__Unify___set_ordlist__set_ordlist_1_0,
		__Unify___ll_backend__stack_opt__matching_result_0_0_i17);
MR_def_label(__Unify___ll_backend__stack_opt__matching_result_0_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___ll_backend__stack_opt__matching_result_0_0_i1);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(8);
	MR_r3 = MR_sv(16);
	MR_succip_word = MR_sv(18);
	MR_decr_sp(18);
	MR_np_tailcall_ent(__Unify___set_ordlist__set_ordlist_1_0);
MR_def_label(__Unify___ll_backend__stack_opt__matching_result_0_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___ll_backend__stack_opt__matching_result_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(18);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Compare___term__var_1_0);
MR_decl_entry(__Compare___parse_tree__prog_data__cons_id_0_0);

MR_BEGIN_MODULE(ll_backend__stack_opt_module38)
	MR_init_entry1(__Compare___ll_backend__stack_opt__matching_result_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___ll_backend__stack_opt__matching_result_0_0);
	MR_init_label10(__Compare___ll_backend__stack_opt__matching_result_0_0,3,2,5,9,14,19,23,27,31,35)
	MR_init_label1(__Compare___ll_backend__stack_opt__matching_result_0_0,106)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___ll_backend__stack_opt__matching_result_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___ll_backend__stack_opt__matching_result_0_0_i3);
	}
	MR_incr_sp(17);
	MR_sv(17) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___ll_backend__stack_opt__matching_result_0_0_i2);
MR_def_label(__Compare___ll_backend__stack_opt__matching_result_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___ll_backend__stack_opt__matching_result_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(2);
	MR_sv(16) = MR_tfield(0, MR_tempr5, 8);
	MR_sv(15) = MR_tfield(0, MR_tempr5, 7);
	MR_sv(14) = MR_tfield(0, MR_tempr5, 6);
	MR_sv(13) = MR_tfield(0, MR_tempr5, 5);
	MR_sv(12) = MR_tfield(0, MR_tempr5, 4);
	MR_sv(11) = MR_tfield(0, MR_tempr5, 3);
	MR_sv(10) = MR_tfield(0, MR_tempr5, 2);
	MR_sv(9) = MR_tfield(0, MR_tempr5, 1);
	MR_tempr6 = MR_sv(1);
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
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_tfield(0, MR_tempr3, 0);
	MR_r3 = MR_tfield(0, MR_tempr4, 0);
	}
	MR_np_call_localret_ent(__Compare___term__var_1_0,
		__Compare___ll_backend__stack_opt__matching_result_0_0_i5);
MR_def_label(__Compare___ll_backend__stack_opt__matching_result_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__stack_opt__matching_result_0_0_i106);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(9);
	MR_np_call_localret_ent(__Compare___parse_tree__prog_data__cons_id_0_0,
		__Compare___ll_backend__stack_opt__matching_result_0_0_i9);
MR_def_label(__Compare___ll_backend__stack_opt__matching_result_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__stack_opt__matching_result_0_0_i106);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,2);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(10);
	MR_np_call_localret_ent(__Compare___list__list_1_0,
		__Compare___ll_backend__stack_opt__matching_result_0_0_i14);
MR_def_label(__Compare___ll_backend__stack_opt__matching_result_0_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__stack_opt__matching_result_0_0_i106);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,2);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(11);
	MR_np_call_localret_ent(__Compare___set_ordlist__set_ordlist_1_0,
		__Compare___ll_backend__stack_opt__matching_result_0_0_i19);
MR_def_label(__Compare___ll_backend__stack_opt__matching_result_0_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__stack_opt__matching_result_0_0_i106);
	}
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(12);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___ll_backend__stack_opt__matching_result_0_0_i23);
MR_def_label(__Compare___ll_backend__stack_opt__matching_result_0_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__stack_opt__matching_result_0_0_i106);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(backend_libs__interval, interval_id);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(13);
	MR_np_call_localret_ent(__Compare___set_ordlist__set_ordlist_1_0,
		__Compare___ll_backend__stack_opt__matching_result_0_0_i27);
MR_def_label(__Compare___ll_backend__stack_opt__matching_result_0_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__stack_opt__matching_result_0_0_i106);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(backend_libs__interval, interval_id);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(14);
	MR_np_call_localret_ent(__Compare___set_ordlist__set_ordlist_1_0,
		__Compare___ll_backend__stack_opt__matching_result_0_0_i31);
MR_def_label(__Compare___ll_backend__stack_opt__matching_result_0_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__stack_opt__matching_result_0_0_i106);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(backend_libs__interval, anchor);
	MR_r2 = MR_sv(7);
	MR_r3 = MR_sv(15);
	MR_np_call_localret_ent(__Compare___set_ordlist__set_ordlist_1_0,
		__Compare___ll_backend__stack_opt__matching_result_0_0_i35);
MR_def_label(__Compare___ll_backend__stack_opt__matching_result_0_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__stack_opt__matching_result_0_0_i106);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(backend_libs__interval, anchor);
	MR_r2 = MR_sv(8);
	MR_r3 = MR_sv(16);
	MR_succip_word = MR_sv(17);
	MR_decr_sp(17);
	MR_np_tailcall_ent(__Compare___set_ordlist__set_ordlist_1_0);
MR_def_label(__Compare___ll_backend__stack_opt__matching_result_0_0,106)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(17);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__stack_opt_module39)
	MR_init_entry1(__Unify___ll_backend__stack_opt__opt_stack_alloc_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___ll_backend__stack_opt__opt_stack_alloc_0_0);
	MR_init_label1(__Unify___ll_backend__stack_opt__opt_stack_alloc_0_0,7)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___ll_backend__stack_opt__opt_stack_alloc_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___ll_backend__stack_opt__opt_stack_alloc_0_0_i7);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,2);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Unify___set_ordlist__set_ordlist_1_0);
MR_def_label(__Unify___ll_backend__stack_opt__opt_stack_alloc_0_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__stack_opt_module40)
	MR_init_entry1(__Compare___ll_backend__stack_opt__opt_stack_alloc_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___ll_backend__stack_opt__opt_stack_alloc_0_0);
	MR_init_label2(__Compare___ll_backend__stack_opt__opt_stack_alloc_0_0,3,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___ll_backend__stack_opt__opt_stack_alloc_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___ll_backend__stack_opt__opt_stack_alloc_0_0_i3);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___ll_backend__stack_opt__opt_stack_alloc_0_0_i2);
MR_def_label(__Compare___ll_backend__stack_opt__opt_stack_alloc_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___ll_backend__stack_opt__opt_stack_alloc_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,2);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Compare___set_ordlist__set_ordlist_1_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__stack_opt_module41)
	MR_init_entry1(__Unify___ll_backend__stack_opt__path_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___ll_backend__stack_opt__path_0_0);
	MR_init_label6(__Unify___ll_backend__stack_opt__path_0_0,6,8,10,12,16,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___ll_backend__stack_opt__path_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___ll_backend__stack_opt__path_0_0_i16);
	}
	MR_incr_sp(11);
	MR_sv(11) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_tempr1;
	MR_tempr2 = MR_r2;
	MR_sv(2) = MR_tempr2;
	MR_tempr3 = MR_tfield(0, MR_tempr1, 0);
	MR_tempr4 = MR_tfield(0, MR_tempr2, 0);
	if ((MR_tempr3 != MR_tempr4)) {
		MR_GOTO_LAB(__Unify___ll_backend__stack_opt__path_0_0_i1);
	}
	MR_tempr3 = MR_tempr1;
	MR_sv(1) = MR_tfield(0, MR_tempr3, 2);
	MR_tempr4 = MR_tempr2;
	MR_sv(2) = MR_tfield(0, MR_tempr3, 3);
	MR_sv(3) = MR_tfield(0, MR_tempr3, 4);
	MR_sv(4) = MR_tfield(0, MR_tempr3, 5);
	MR_sv(5) = MR_tfield(0, MR_tempr4, 2);
	MR_sv(6) = MR_tfield(0, MR_tempr4, 3);
	MR_sv(7) = MR_tfield(0, MR_tempr4, 4);
	MR_sv(8) = MR_tfield(0, MR_tempr4, 5);
	MR_sv(9) = (MR_Word) MR_TAG_COMMON(0,0,2);
	MR_sv(10) = (MR_Word) MR_TAG_COMMON(0,0,16);
	MR_r1 = MR_sv(9);
	MR_r2 = MR_tfield(0, MR_tempr3, 1);
	MR_r3 = MR_tfield(0, MR_tempr4, 1);
	}
	MR_np_call_localret_ent(__Unify___set_ordlist__set_ordlist_1_0,
		__Unify___ll_backend__stack_opt__path_0_0_i6);
MR_def_label(__Unify___ll_backend__stack_opt__path_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___ll_backend__stack_opt__path_0_0_i1);
	}
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(5);
	MR_np_call_localret_ent(__Unify___set_ordlist__set_ordlist_1_0,
		__Unify___ll_backend__stack_opt__path_0_0_i8);
MR_def_label(__Unify___ll_backend__stack_opt__path_0_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___ll_backend__stack_opt__path_0_0_i1);
	}
	MR_r1 = MR_sv(10);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(6);
	MR_np_call_localret_ent(__Unify___list__list_1_0,
		__Unify___ll_backend__stack_opt__path_0_0_i10);
MR_def_label(__Unify___ll_backend__stack_opt__path_0_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___ll_backend__stack_opt__path_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(backend_libs__interval, anchor);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(7);
	MR_np_call_localret_ent(__Unify___set_ordlist__set_ordlist_1_0,
		__Unify___ll_backend__stack_opt__path_0_0_i12);
MR_def_label(__Unify___ll_backend__stack_opt__path_0_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___ll_backend__stack_opt__path_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(backend_libs__interval, interval_id);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(8);
	MR_succip_word = MR_sv(11);
	MR_decr_sp(11);
	MR_np_tailcall_ent(__Unify___set_ordlist__set_ordlist_1_0);
MR_def_label(__Unify___ll_backend__stack_opt__path_0_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___ll_backend__stack_opt__path_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(11);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__stack_opt_module42)
	MR_init_entry1(__Compare___ll_backend__stack_opt__path_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___ll_backend__stack_opt__path_0_0);
	MR_init_label8(__Compare___ll_backend__stack_opt__path_0_0,3,2,5,10,15,21,25,75)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___ll_backend__stack_opt__path_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___ll_backend__stack_opt__path_0_0_i3);
	}
	MR_incr_sp(11);
	MR_sv(11) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___ll_backend__stack_opt__path_0_0_i2);
MR_def_label(__Compare___ll_backend__stack_opt__path_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___ll_backend__stack_opt__path_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(2);
	MR_sv(10) = MR_tfield(0, MR_tempr5, 5);
	MR_sv(9) = MR_tfield(0, MR_tempr5, 4);
	MR_sv(8) = MR_tfield(0, MR_tempr5, 3);
	MR_sv(7) = MR_tfield(0, MR_tempr5, 2);
	MR_sv(6) = MR_tfield(0, MR_tempr5, 1);
	MR_tempr6 = MR_sv(1);
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
		__Compare___ll_backend__stack_opt__path_0_0_i5);
MR_def_label(__Compare___ll_backend__stack_opt__path_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__stack_opt__path_0_0_i75);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,2);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(6);
	MR_np_call_localret_ent(__Compare___set_ordlist__set_ordlist_1_0,
		__Compare___ll_backend__stack_opt__path_0_0_i10);
MR_def_label(__Compare___ll_backend__stack_opt__path_0_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__stack_opt__path_0_0_i75);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,2);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(7);
	MR_np_call_localret_ent(__Compare___set_ordlist__set_ordlist_1_0,
		__Compare___ll_backend__stack_opt__path_0_0_i15);
MR_def_label(__Compare___ll_backend__stack_opt__path_0_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__stack_opt__path_0_0_i75);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,16);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(8);
	MR_np_call_localret_ent(__Compare___list__list_1_0,
		__Compare___ll_backend__stack_opt__path_0_0_i21);
MR_def_label(__Compare___ll_backend__stack_opt__path_0_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__stack_opt__path_0_0_i75);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(backend_libs__interval, anchor);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(9);
	MR_np_call_localret_ent(__Compare___set_ordlist__set_ordlist_1_0,
		__Compare___ll_backend__stack_opt__path_0_0_i25);
MR_def_label(__Compare___ll_backend__stack_opt__path_0_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__stack_opt__path_0_0_i75);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(backend_libs__interval, interval_id);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(10);
	MR_succip_word = MR_sv(11);
	MR_decr_sp(11);
	MR_np_tailcall_ent(__Compare___set_ordlist__set_ordlist_1_0);
MR_def_label(__Compare___ll_backend__stack_opt__path_0_0,75)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(11);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___tree234__tree234_2_0);

MR_BEGIN_MODULE(ll_backend__stack_opt_module43)
	MR_init_entry1(__Unify___ll_backend__stack_opt__stack_opt_info_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___ll_backend__stack_opt__stack_opt_info_0_0);
	MR_init_label4(__Unify___ll_backend__stack_opt__stack_opt_info_0_0,4,7,11,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___ll_backend__stack_opt__stack_opt_info_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___ll_backend__stack_opt__stack_opt_info_0_0_i11);
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
	MR_np_call_localret_ent(__Unify___ll_backend__stack_opt__stack_opt_params_0_0,
		__Unify___ll_backend__stack_opt__stack_opt_info_0_0_i4);
MR_def_label(__Unify___ll_backend__stack_opt__stack_opt_info_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___ll_backend__stack_opt__stack_opt_info_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(backend_libs__interval, anchor);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(3);
	MR_np_call_localret_ent(__Unify___tree234__tree234_2_0,
		__Unify___ll_backend__stack_opt__stack_opt_info_0_0_i7);
MR_def_label(__Unify___ll_backend__stack_opt__stack_opt_info_0_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___ll_backend__stack_opt__stack_opt_info_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__stack_opt, matching_result);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(4);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(__Unify___list__list_1_0);
MR_def_label(__Unify___ll_backend__stack_opt__stack_opt_info_0_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___ll_backend__stack_opt__stack_opt_info_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Compare___tree234__tree234_2_0);

MR_BEGIN_MODULE(ll_backend__stack_opt_module44)
	MR_init_entry1(__Compare___ll_backend__stack_opt__stack_opt_info_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___ll_backend__stack_opt__stack_opt_info_0_0);
	MR_init_label5(__Compare___ll_backend__stack_opt__stack_opt_info_0_0,3,2,5,10,39)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___ll_backend__stack_opt__stack_opt_info_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___ll_backend__stack_opt__stack_opt_info_0_0_i3);
	}
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___ll_backend__stack_opt__stack_opt_info_0_0_i2);
MR_def_label(__Compare___ll_backend__stack_opt__stack_opt_info_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___ll_backend__stack_opt__stack_opt_info_0_0,2)
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
	MR_np_call_localret_ent(__Compare___ll_backend__stack_opt__stack_opt_params_0_0,
		__Compare___ll_backend__stack_opt__stack_opt_info_0_0_i5);
MR_def_label(__Compare___ll_backend__stack_opt__stack_opt_info_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__stack_opt__stack_opt_info_0_0_i39);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(backend_libs__interval, anchor);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(3);
	MR_np_call_localret_ent(__Compare___tree234__tree234_2_0,
		__Compare___ll_backend__stack_opt__stack_opt_info_0_0_i10);
MR_def_label(__Compare___ll_backend__stack_opt__stack_opt_info_0_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__stack_opt__stack_opt_info_0_0_i39);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__stack_opt, matching_result);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(4);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(__Compare___list__list_1_0);
MR_def_label(__Compare___ll_backend__stack_opt__stack_opt_info_0_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___backend_libs__matching__matching_params_0_0);

MR_BEGIN_MODULE(ll_backend__stack_opt_module45)
	MR_init_entry1(__Unify___ll_backend__stack_opt__stack_opt_params_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___ll_backend__stack_opt__stack_opt_params_0_0);
	MR_init_label3(__Unify___ll_backend__stack_opt__stack_opt_params_0_0,4,9,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___ll_backend__stack_opt__stack_opt_params_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___ll_backend__stack_opt__stack_opt_params_0_0_i9);
	}
	MR_incr_sp(11);
	MR_sv(11) = (MR_Word) MR_succip;
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
	MR_sv(6) = MR_tfield(0, MR_tempr2, 1);
	MR_sv(7) = MR_tfield(0, MR_tempr2, 2);
	MR_sv(8) = MR_tfield(0, MR_tempr2, 3);
	MR_sv(9) = MR_tfield(0, MR_tempr2, 4);
	MR_sv(10) = MR_tfield(0, MR_tempr2, 5);
	MR_r1 = MR_tfield(0, MR_tempr1, 0);
	MR_r2 = MR_tfield(0, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(__Unify___backend_libs__matching__matching_params_0_0,
		__Unify___ll_backend__stack_opt__stack_opt_params_0_0_i4);
MR_def_label(__Unify___ll_backend__stack_opt__stack_opt_params_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___ll_backend__stack_opt__stack_opt_params_0_0_i1);
	}
	if ((MR_sv(1) != MR_sv(6))) {
		MR_GOTO_LAB(__Unify___ll_backend__stack_opt__stack_opt_params_0_0_i1);
	}
	if ((MR_sv(2) != MR_sv(7))) {
		MR_GOTO_LAB(__Unify___ll_backend__stack_opt__stack_opt_params_0_0_i1);
	}
	if ((MR_sv(3) != MR_sv(8))) {
		MR_GOTO_LAB(__Unify___ll_backend__stack_opt__stack_opt_params_0_0_i1);
	}
	if ((MR_sv(4) != MR_sv(9))) {
		MR_GOTO_LAB(__Unify___ll_backend__stack_opt__stack_opt_params_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,2);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(10);
	MR_succip_word = MR_sv(11);
	MR_decr_sp(11);
	MR_np_tailcall_ent(__Unify___set_ordlist__set_ordlist_1_0);
MR_def_label(__Unify___ll_backend__stack_opt__stack_opt_params_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___ll_backend__stack_opt__stack_opt_params_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(11);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Compare___backend_libs__matching__matching_params_0_0);

MR_BEGIN_MODULE(ll_backend__stack_opt_module46)
	MR_init_entry1(__Compare___ll_backend__stack_opt__stack_opt_params_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___ll_backend__stack_opt__stack_opt_params_0_0);
	MR_init_label8(__Compare___ll_backend__stack_opt__stack_opt_params_0_0,3,2,5,9,13,17,21,72)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___ll_backend__stack_opt__stack_opt_params_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___ll_backend__stack_opt__stack_opt_params_0_0_i3);
	}
	MR_incr_sp(11);
	MR_sv(11) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___ll_backend__stack_opt__stack_opt_params_0_0_i2);
MR_def_label(__Compare___ll_backend__stack_opt__stack_opt_params_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___ll_backend__stack_opt__stack_opt_params_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(2);
	MR_sv(10) = MR_tfield(0, MR_tempr5, 5);
	MR_sv(9) = MR_tfield(0, MR_tempr5, 4);
	MR_sv(8) = MR_tfield(0, MR_tempr5, 3);
	MR_sv(7) = MR_tfield(0, MR_tempr5, 2);
	MR_sv(6) = MR_tfield(0, MR_tempr5, 1);
	MR_tempr6 = MR_sv(1);
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
	MR_np_call_localret_ent(__Compare___backend_libs__matching__matching_params_0_0,
		__Compare___ll_backend__stack_opt__stack_opt_params_0_0_i5);
MR_def_label(__Compare___ll_backend__stack_opt__stack_opt_params_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__stack_opt__stack_opt_params_0_0_i72);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(6);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___ll_backend__stack_opt__stack_opt_params_0_0_i9);
MR_def_label(__Compare___ll_backend__stack_opt__stack_opt_params_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__stack_opt__stack_opt_params_0_0_i72);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(7);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___ll_backend__stack_opt__stack_opt_params_0_0_i13);
MR_def_label(__Compare___ll_backend__stack_opt__stack_opt_params_0_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__stack_opt__stack_opt_params_0_0_i72);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(8);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___ll_backend__stack_opt__stack_opt_params_0_0_i17);
MR_def_label(__Compare___ll_backend__stack_opt__stack_opt_params_0_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__stack_opt__stack_opt_params_0_0_i72);
	}
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(9);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___ll_backend__stack_opt__stack_opt_params_0_0_i21);
MR_def_label(__Compare___ll_backend__stack_opt__stack_opt_params_0_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__stack_opt__stack_opt_params_0_0_i72);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,2);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(10);
	MR_succip_word = MR_sv(11);
	MR_decr_sp(11);
	MR_np_tailcall_ent(__Compare___set_ordlist__set_ordlist_1_0);
MR_def_label(__Compare___ll_backend__stack_opt__stack_opt_params_0_0,72)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(11);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__stack_opt_module47)
	MR_init_entry1(ll_backend__stack_opt__ClassMethod_for_backend_libs__interval__build_interval_info_acc____ll_backend__stack_opt__stack_opt_info__arity0______backend_libs__interval__use_cell_8_8_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__stack_opt__ClassMethod_for_backend_libs__interval__build_interval_info_acc____ll_backend__stack_opt__stack_opt_info__arity0______backend_libs__interval__use_cell_8_8_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'ClassMethod_for_backend_libs__interval__build_interval_info_acc____ll_backend__stack_opt__stack_opt_info__arity0______backend_libs__interval__use_cell_8'/8 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__stack_opt__ClassMethod_for_backend_libs__interval__build_interval_info_acc____ll_backend__stack_opt__stack_opt_info__arity0______backend_libs__interval__use_cell_8_8_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(ll_backend__stack_opt__use_cell_8_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__stack_opt_module48)
	MR_init_entry1(ll_backend__stack_opt__ClassMethod_for_ll_backend__live_vars__stack_alloc_info____ll_backend__stack_opt__opt_stack_alloc__arity0______ll_backend__live_vars__at_call_site_4_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__stack_opt__ClassMethod_for_ll_backend__live_vars__stack_alloc_info____ll_backend__stack_opt__opt_stack_alloc__arity0______ll_backend__live_vars__at_call_site_4_4_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'ClassMethod_for_ll_backend__live_vars__stack_alloc_info____ll_backend__stack_opt__opt_stack_alloc__arity0______ll_backend__live_vars__at_call_site_4'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__stack_opt__ClassMethod_for_ll_backend__live_vars__stack_alloc_info____ll_backend__stack_opt__opt_stack_alloc__arity0______ll_backend__live_vars__at_call_site_4_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r3;
	MR_np_tailcall_ent(f_108_108_95_98_97_99_107_101_110_100_95_95_115_116_97_99_107_95_111_112_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_108_108_95_98_97_99_107_101_110_100_95_95_108_105_118_101_95_118_97_114_115_95_95_115_116_97_99_107_95_97_108_108_111_99_95_105_110_102_111_95_95_95_95_108_108_95_98_97_99_107_101_110_100_95_95_115_116_97_99_107_95_111_112_116_95_95_111_112_116_95_115_116_97_99_107_95_97_108_108_111_99_95_95_97_114_105_116_121_48_95_95_95_95_95_95_108_108_95_98_97_99_107_101_110_100_95_95_108_105_118_101_95_118_97_114_115_95_95_97_116_95_99_97_108_108_95_115_105_116_101_95_52_95_95_91_49_44_32_50_93_95_48_4_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__stack_opt_module49)
	MR_init_entry1(ll_backend__stack_opt__ClassMethod_for_ll_backend__live_vars__stack_alloc_info____ll_backend__stack_opt__opt_stack_alloc__arity0______ll_backend__live_vars__at_resume_site_4_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__stack_opt__ClassMethod_for_ll_backend__live_vars__stack_alloc_info____ll_backend__stack_opt__opt_stack_alloc__arity0______ll_backend__live_vars__at_resume_site_4_4_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'ClassMethod_for_ll_backend__live_vars__stack_alloc_info____ll_backend__stack_opt__opt_stack_alloc__arity0______ll_backend__live_vars__at_resume_site_4'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__stack_opt__ClassMethod_for_ll_backend__live_vars__stack_alloc_info____ll_backend__stack_opt__opt_stack_alloc__arity0______ll_backend__live_vars__at_resume_site_4_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r3;
	MR_np_tailcall_ent(f_108_108_95_98_97_99_107_101_110_100_95_95_115_116_97_99_107_95_111_112_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_108_108_95_98_97_99_107_101_110_100_95_95_108_105_118_101_95_118_97_114_115_95_95_115_116_97_99_107_95_97_108_108_111_99_95_105_110_102_111_95_95_95_95_108_108_95_98_97_99_107_101_110_100_95_95_115_116_97_99_107_95_111_112_116_95_95_111_112_116_95_115_116_97_99_107_95_97_108_108_111_99_95_95_97_114_105_116_121_48_95_95_95_95_95_95_108_108_95_98_97_99_107_101_110_100_95_95_108_105_118_101_95_118_97_114_115_95_95_97_116_95_114_101_115_117_109_101_95_115_105_116_101_95_52_95_95_91_49_44_32_50_93_95_48_4_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__stack_opt_module50)
	MR_init_entry1(ll_backend__stack_opt__ClassMethod_for_ll_backend__live_vars__stack_alloc_info____ll_backend__stack_opt__opt_stack_alloc__arity0______ll_backend__live_vars__at_par_conj_4_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__stack_opt__ClassMethod_for_ll_backend__live_vars__stack_alloc_info____ll_backend__stack_opt__opt_stack_alloc__arity0______ll_backend__live_vars__at_par_conj_4_4_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'ClassMethod_for_ll_backend__live_vars__stack_alloc_info____ll_backend__stack_opt__opt_stack_alloc__arity0______ll_backend__live_vars__at_par_conj_4'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__stack_opt__ClassMethod_for_ll_backend__live_vars__stack_alloc_info____ll_backend__stack_opt__opt_stack_alloc__arity0______ll_backend__live_vars__at_par_conj_4_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r3;
	MR_np_tailcall_ent(f_108_108_95_98_97_99_107_101_110_100_95_95_115_116_97_99_107_95_111_112_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_108_108_95_98_97_99_107_101_110_100_95_95_108_105_118_101_95_118_97_114_115_95_95_115_116_97_99_107_95_97_108_108_111_99_95_105_110_102_111_95_95_95_95_108_108_95_98_97_99_107_101_110_100_95_95_115_116_97_99_107_95_111_112_116_95_95_111_112_116_95_115_116_97_99_107_95_97_108_108_111_99_95_95_97_114_105_116_121_48_95_95_95_95_95_95_108_108_95_98_97_99_107_101_110_100_95_95_108_105_118_101_95_118_97_114_115_95_95_97_116_95_112_97_114_95_99_111_110_106_95_52_95_95_91_50_93_95_48_4_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__stack_opt_module51)
	MR_init_entry1(ll_backend__stack_opt__IntroducedFrom__pred__close_path__661__1_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__stack_opt__IntroducedFrom__pred__close_path__661__1_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__pred__close_path__661__1'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__stack_opt__IntroducedFrom__pred__close_path__661__1_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,2);
	MR_r2 = MR_tempr1;
	MR_np_tailcall_ent(set__empty_1_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__stack_opt_module52)
	MR_init_entry1(ll_backend__stack_opt__IntroducedFrom__pred__find_all_branches__799__1_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__stack_opt__IntroducedFrom__pred__find_all_branches__799__1_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__pred__find_all_branches__799__1'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__stack_opt__IntroducedFrom__pred__find_all_branches__799__1_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_r1 == MR_r2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__stack_opt_module53)
	MR_init_entry1(ll_backend__stack_opt__IntroducedFrom__pred__find_all_branches__808__1_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__stack_opt__IntroducedFrom__pred__find_all_branches__808__1_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__pred__find_all_branches__808__1'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__stack_opt__IntroducedFrom__pred__find_all_branches__808__1_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_r1 == MR_r2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__stack_opt_module54)
	MR_init_entry1(ll_backend__stack_opt__IntroducedFrom__pred__find_all_branches__812__1_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__stack_opt__IntroducedFrom__pred__find_all_branches__812__1_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__pred__find_all_branches__812__1'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__stack_opt__IntroducedFrom__pred__find_all_branches__812__1_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_r1 == MR_r2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__stack_opt_module55)
	MR_init_entry1(ll_backend__stack_opt__IntroducedFrom__pred__dump_insert__1053__1_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__stack_opt__IntroducedFrom__pred__dump_insert__1053__1_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__pred__dump_insert__1053__1'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__stack_opt__IntroducedFrom__pred__dump_insert__1053__1_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_tempr1;
	MR_np_tailcall_ent(term__var_to_int_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__stack_opt_module56)
	MR_init_entry1(ll_backend__stack_opt__IntroducedFrom__pred__dump_insert__1066__1_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__stack_opt__IntroducedFrom__pred__dump_insert__1066__1_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__pred__dump_insert__1066__1'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__stack_opt__IntroducedFrom__pred__dump_insert__1066__1_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_tempr1;
	MR_np_tailcall_ent(term__var_to_int_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__stack_opt_module57)
	MR_init_entry1(ll_backend__stack_opt__IntroducedFrom__pred__dump_matching_result__1084__1_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__stack_opt__IntroducedFrom__pred__dump_matching_result__1084__1_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__pred__dump_matching_result__1084__1'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__stack_opt__IntroducedFrom__pred__dump_matching_result__1084__1_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_tempr1;
	MR_np_tailcall_ent(term__var_to_int_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__stack_opt_module58)
	MR_init_entry1(ll_backend__stack_opt__IntroducedFrom__pred__dump_matching_result__1085__1_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__stack_opt__IntroducedFrom__pred__dump_matching_result__1085__1_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__pred__dump_matching_result__1085__1'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__stack_opt__IntroducedFrom__pred__dump_matching_result__1085__1_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_tempr1;
	MR_np_tailcall_ent(term__var_to_int_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__stack_opt_module59)
	MR_init_entry1(ll_backend__stack_opt__IntroducedFrom__pred__dump_matching_result__1107__1_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__stack_opt__IntroducedFrom__pred__dump_matching_result__1107__1_3_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__pred__dump_matching_result__1107__1'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__stack_opt__IntroducedFrom__pred__dump_matching_result__1107__1_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(backend_libs__interval, anchor);
	MR_r2 = MR_tempr1;
	MR_np_tailcall_ent(io__write_3_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__stack_opt_module60)
	MR_init_entry1(ll_backend__stack_opt__IntroducedFrom__pred__dump_matching_result__1110__1_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__stack_opt__IntroducedFrom__pred__dump_matching_result__1110__1_3_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__pred__dump_matching_result__1110__1'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__stack_opt__IntroducedFrom__pred__dump_matching_result__1110__1_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(backend_libs__interval, anchor);
	MR_r2 = MR_tempr1;
	MR_np_tailcall_ent(io__write_3_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(set__count_2_0);

MR_BEGIN_MODULE(ll_backend__stack_opt_module61)
	MR_init_entry1(f_108_108_95_98_97_99_107_101_110_100_95_95_115_116_97_99_107_95_111_112_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_112_112_108_121_95_109_97_116_99_104_105_110_103_95_95_91_51_93_95_48_7_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__f_108_108_95_98_97_99_107_101_110_100_95_95_115_116_97_99_107_95_111_112_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_112_112_108_121_95_109_97_116_99_104_105_110_103_95_95_91_51_93_95_48_7_0);
	MR_init_label6(f_108_108_95_98_97_99_107_101_110_100_95_95_115_116_97_99_107_95_111_112_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_112_112_108_121_95_109_97_116_99_104_105_110_103_95_95_91_51_93_95_48_7_0,2,3,4,5,6,7)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__pred__apply_matching__[3]_0'/7 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(f_108_108_95_98_97_99_107_101_110_100_95_95_115_116_97_99_107_95_111_112_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_112_112_108_121_95_109_97_116_99_104_105_110_103_95_95_91_51_93_95_48_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r3;
	MR_np_call_localret_ent(f_108_108_95_98_97_99_107_101_110_100_95_95_115_116_97_99_107_95_111_112_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_112_112_108_121_95_109_97_116_99_104_105_110_103_95_108_111_111_112_95_95_91_51_93_95_48_9_0,
		f_108_108_95_98_97_99_107_101_110_100_95_95_115_116_97_99_107_95_111_112_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_112_112_108_121_95_109_97_116_99_104_105_110_103_95_95_91_51_93_95_48_7_0_i2);
MR_def_label(f_108_108_95_98_97_99_107_101_110_100_95_95_115_116_97_99_107_95_111_112_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_112_112_108_121_95_109_97_116_99_104_105_110_103_95_95_91_51_93_95_48_7_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = (MR_Word) MR_CTOR0_ADDR(backend_libs__matching, benefit_node);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__set__union_list_1_0,
		f_108_108_95_98_97_99_107_101_110_100_95_95_115_116_97_99_107_95_111_112_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_112_112_108_121_95_109_97_116_99_104_105_110_103_95_95_91_51_93_95_48_7_0_i3);
MR_def_label(f_108_108_95_98_97_99_107_101_110_100_95_95_115_116_97_99_107_95_111_112_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_112_112_108_121_95_109_97_116_99_104_105_110_103_95_95_91_51_93_95_48_7_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_sv(5) = (MR_Word) MR_CTOR0_ADDR(backend_libs__matching, cost_node);
	MR_r1 = MR_sv(5);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__set__union_list_1_0,
		f_108_108_95_98_97_99_107_101_110_100_95_95_115_116_97_99_107_95_111_112_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_112_112_108_121_95_109_97_116_99_104_105_110_103_95_95_91_51_93_95_48_7_0_i4);
MR_def_label(f_108_108_95_98_97_99_107_101_110_100_95_95_115_116_97_99_107_95_111_112_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_112_112_108_121_95_109_97_116_99_104_105_110_103_95_95_91_51_93_95_48_7_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(set__count_2_0,
		f_108_108_95_98_97_99_107_101_110_100_95_95_115_116_97_99_107_95_111_112_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_112_112_108_121_95_109_97_116_99_104_105_110_103_95_95_91_51_93_95_48_7_0_i5);
MR_def_label(f_108_108_95_98_97_99_107_101_110_100_95_95_115_116_97_99_107_95_111_112_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_112_112_108_121_95_109_97_116_99_104_105_110_103_95_95_91_51_93_95_48_7_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(set__count_2_0,
		f_108_108_95_98_97_99_107_101_110_100_95_95_115_116_97_99_107_95_111_112_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_112_112_108_121_95_109_97_116_99_104_105_110_103_95_95_91_51_93_95_48_7_0_i6);
MR_def_label(f_108_108_95_98_97_99_107_101_110_100_95_95_115_116_97_99_107_95_111_112_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_112_112_108_121_95_109_97_116_99_104_105_110_103_95_95_91_51_93_95_48_7_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = ((MR_Integer) MR_sv(2) * (MR_Integer) 100);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = ((MR_Integer) MR_r1 * (MR_Integer) MR_tfield(0, MR_sv(1), 1));
	if (((MR_Integer) MR_r2 < (MR_Integer) MR_tempr1)) {
		MR_GOTO_LAB(f_108_108_95_98_97_99_107_101_110_100_95_95_115_116_97_99_107_95_111_112_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_112_112_108_121_95_109_97_116_99_104_105_110_103_95_95_91_51_93_95_48_7_0_i7);
	}
	MR_r1 = MR_sv(3);
	MR_decr_sp_and_return(6);
	}
MR_def_label(f_108_108_95_98_97_99_107_101_110_100_95_95_115_116_97_99_107_95_111_112_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_112_112_108_121_95_109_97_116_99_104_105_110_103_95_95_91_51_93_95_48_7_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,2);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(fn__set__init_0_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(list__all_same_1_0);
MR_decl_entry(fn__set__intersect_list_1_0);

MR_BEGIN_MODULE(ll_backend__stack_opt_module62)
	MR_init_entry1(f_108_108_95_98_97_99_107_101_110_100_95_95_115_116_97_99_107_95_111_112_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_112_112_108_121_95_109_97_116_99_104_105_110_103_95_108_111_111_112_95_95_91_51_93_95_48_9_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__f_108_108_95_98_97_99_107_101_110_100_95_95_115_116_97_99_107_95_111_112_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_112_112_108_121_95_109_97_116_99_104_105_110_103_95_108_111_111_112_95_95_91_51_93_95_48_9_0);
	MR_init_label8(f_108_108_95_98_97_99_107_101_110_100_95_95_115_116_97_99_107_95_111_112_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_112_112_108_121_95_109_97_116_99_104_105_110_103_95_108_111_111_112_95_95_91_51_93_95_48_9_0,39,7,10,14,13,8,15,17)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__pred__apply_matching_loop__[3]_0'/9 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(f_108_108_95_98_97_99_107_101_110_100_95_95_115_116_97_99_107_95_111_112_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_112_112_108_121_95_109_97_116_99_104_105_110_103_95_108_111_111_112_95_95_91_51_93_95_48_9_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
MR_def_label(f_108_108_95_98_97_99_107_101_110_100_95_95_115_116_97_99_107_95_111_112_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_112_112_108_121_95_109_97_116_99_104_105_110_103_95_108_111_111_112_95_95_91_51_93_95_48_9_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 7);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(11,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(ll_backend__stack_opt__apply_matching_for_path_8_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 4;
	MR_tfield(0, MR_tempr1, 3) = MR_r1;
	MR_tfield(0, MR_tempr1, 4) = MR_r2;
	MR_tempr2 = MR_r3;
	MR_tfield(0, MR_tempr1, 5) = MR_tempr2;
	MR_tfield(0, MR_tempr1, 6) = MR_r5;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_tempr2;
	MR_sv(4) = MR_r4;
	MR_sv(8) = (MR_Word) MR_TAG_COMMON(0,0,2);
	MR_sv(5) = (MR_Word) MR_TAG_COMMON(0,0,16);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__stack_opt, match_path_info);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,19);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,0,20);
	MR_r4 = MR_sv(5);
	MR_r5 = MR_tempr1;
	MR_r6 = MR_sv(4);
	}
	MR_np_call_localret_ent(list__map3_5_0,
		f_108_108_95_98_97_99_107_101_110_100_95_95_115_116_97_99_107_95_111_112_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_112_112_108_121_95_109_97_116_99_104_105_110_103_95_108_111_111_112_95_95_91_51_93_95_48_9_0_i7);
MR_def_label(f_108_108_95_98_97_99_107_101_110_100_95_95_115_116_97_99_107_95_111_112_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_112_112_108_121_95_109_97_116_99_104_105_110_103_95_108_111_111_112_95_95_91_51_93_95_48_9_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_sv(6) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(7) = MR_tempr1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,16);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__all_same_1_0,
		f_108_108_95_98_97_99_107_101_110_100_95_95_115_116_97_99_107_95_111_112_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_112_112_108_121_95_109_97_116_99_104_105_110_103_95_108_111_111_112_95_95_91_51_93_95_48_9_0_i10);
MR_def_label(f_108_108_95_98_97_99_107_101_110_100_95_95_115_116_97_99_107_95_111_112_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_112_112_108_121_95_109_97_116_99_104_105_110_103_95_108_111_111_112_95_95_91_51_93_95_48_9_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(f_108_108_95_98_97_99_107_101_110_100_95_95_115_116_97_99_107_95_111_112_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_112_112_108_121_95_109_97_116_99_104_105_110_103_95_108_111_111_112_95_95_91_51_93_95_48_9_0_i8);
	}
	if (MR_LTAGS_TESTR(MR_sv(7),0,0)) {
		MR_GOTO_LAB(f_108_108_95_98_97_99_107_101_110_100_95_95_115_116_97_99_107_95_111_112_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_112_112_108_121_95_109_97_116_99_104_105_110_103_95_108_111_111_112_95_95_91_51_93_95_48_9_0_i13);
	}
	MR_sv(1) = MR_sv(5);
	MR_sv(2) = MR_sv(6);
	MR_r1 = MR_sv(8);
	MR_np_call_localret_ent(fn__set__init_0_0,
		f_108_108_95_98_97_99_107_101_110_100_95_95_115_116_97_99_107_95_111_112_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_112_112_108_121_95_109_97_116_99_104_105_110_103_95_108_111_111_112_95_95_91_51_93_95_48_9_0_i14);
MR_def_label(f_108_108_95_98_97_99_107_101_110_100_95_95_115_116_97_99_107_95_111_112_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_112_112_108_121_95_109_97_116_99_104_105_110_103_95_108_111_111_112_95_95_91_51_93_95_48_9_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tempr1;
	MR_decr_sp_and_return(9);
	}
MR_def_label(f_108_108_95_98_97_99_107_101_110_100_95_95_115_116_97_99_107_95_111_112_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_112_112_108_121_95_109_97_116_99_104_105_110_103_95_108_111_111_112_95_95_91_51_93_95_48_9_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_tfield(1, MR_sv(7), 0);
	MR_decr_sp_and_return(9);
MR_def_label(f_108_108_95_98_97_99_107_101_110_100_95_95_115_116_97_99_107_95_111_112_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_112_112_108_121_95_109_97_116_99_104_105_110_103_95_108_111_111_112_95_95_91_51_93_95_48_9_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(6);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(7);
	MR_r1 = MR_sv(8);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__set__intersect_list_1_0,
		f_108_108_95_98_97_99_107_101_110_100_95_95_115_116_97_99_107_95_111_112_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_112_112_108_121_95_109_97_116_99_104_105_110_103_95_108_111_111_112_95_95_91_51_93_95_48_9_0_i15);
MR_def_label(f_108_108_95_98_97_99_107_101_110_100_95_95_115_116_97_99_107_95_111_112_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_112_112_108_121_95_109_97_116_99_104_105_110_103_95_108_111_111_112_95_95_91_51_93_95_48_9_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(0, MR_sv(3), 2);
	if (MR_INT_NE(MR_tempr1,0)) {
		MR_GOTO_LAB(f_108_108_95_98_97_99_107_101_110_100_95_95_115_116_97_99_107_95_111_112_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_112_112_108_121_95_109_97_116_99_104_105_110_103_95_108_111_111_112_95_95_91_51_93_95_48_9_0_i17);
	}
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_tempr1;
	MR_decr_sp_and_return(9);
	}
MR_def_label(f_108_108_95_98_97_99_107_101_110_100_95_95_115_116_97_99_107_95_111_112_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_112_112_108_121_95_109_97_116_99_104_105_110_103_95_108_111_111_112_95_95_91_51_93_95_48_9_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(4);
	MR_r5 = MR_tempr1;
	MR_succip_word = MR_sv(9);
	MR_GOTO_LAB(f_108_108_95_98_97_99_107_101_110_100_95_95_115_116_97_99_107_95_111_112_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_112_112_108_121_95_109_97_116_99_104_105_110_103_95_108_111_111_112_95_95_91_51_93_95_48_9_0_i39);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__stack_opt_module63)
	MR_init_entry1(f_108_108_95_98_97_99_107_101_110_100_95_95_115_116_97_99_107_95_111_112_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_108_108_95_98_97_99_107_101_110_100_95_95_108_105_118_101_95_118_97_114_115_95_95_115_116_97_99_107_95_97_108_108_111_99_95_105_110_102_111_95_95_95_95_108_108_95_98_97_99_107_101_110_100_95_95_115_116_97_99_107_95_111_112_116_95_95_111_112_116_95_115_116_97_99_107_95_97_108_108_111_99_95_95_97_114_105_116_121_48_95_95_95_95_95_95_108_108_95_98_97_99_107_101_110_100_95_95_108_105_118_101_95_118_97_114_115_95_95_97_116_95_99_97_108_108_95_115_105_116_101_95_52_95_95_91_49_44_32_50_93_95_48_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__f_108_108_95_98_97_99_107_101_110_100_95_95_115_116_97_99_107_95_111_112_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_108_108_95_98_97_99_107_101_110_100_95_95_108_105_118_101_95_118_97_114_115_95_95_115_116_97_99_107_95_97_108_108_111_99_95_105_110_102_111_95_95_95_95_108_108_95_98_97_99_107_101_110_100_95_95_115_116_97_99_107_95_111_112_116_95_95_111_112_116_95_115_116_97_99_107_95_97_108_108_111_99_95_95_97_114_105_116_121_48_95_95_95_95_95_95_108_108_95_98_97_99_107_101_110_100_95_95_108_105_118_101_95_118_97_114_115_95_95_97_116_95_99_97_108_108_95_115_105_116_101_95_52_95_95_91_49_44_32_50_93_95_48_4_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__pred__ClassMethod_for_ll_backend__live_vars__stack_alloc_info____ll_backend__stack_opt__opt_stack_alloc__arity0______ll_backend__live_vars__at_call_site_4__[1, 2]_0'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(f_108_108_95_98_97_99_107_101_110_100_95_95_115_116_97_99_107_95_111_112_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_108_108_95_98_97_99_107_101_110_100_95_95_108_105_118_101_95_118_97_114_115_95_95_115_116_97_99_107_95_97_108_108_111_99_95_105_110_102_111_95_95_95_95_108_108_95_98_97_99_107_101_110_100_95_95_115_116_97_99_107_95_111_112_116_95_95_111_112_116_95_115_116_97_99_107_95_97_108_108_111_99_95_95_97_114_105_116_121_48_95_95_95_95_95_95_108_108_95_98_97_99_107_101_110_100_95_95_108_105_118_101_95_118_97_114_115_95_95_97_116_95_99_97_108_108_95_115_105_116_101_95_52_95_95_91_49_44_32_50_93_95_48_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__stack_opt_module64)
	MR_init_entry1(f_108_108_95_98_97_99_107_101_110_100_95_95_115_116_97_99_107_95_111_112_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_108_108_95_98_97_99_107_101_110_100_95_95_108_105_118_101_95_118_97_114_115_95_95_115_116_97_99_107_95_97_108_108_111_99_95_105_110_102_111_95_95_95_95_108_108_95_98_97_99_107_101_110_100_95_95_115_116_97_99_107_95_111_112_116_95_95_111_112_116_95_115_116_97_99_107_95_97_108_108_111_99_95_95_97_114_105_116_121_48_95_95_95_95_95_95_108_108_95_98_97_99_107_101_110_100_95_95_108_105_118_101_95_118_97_114_115_95_95_97_116_95_114_101_115_117_109_101_95_115_105_116_101_95_52_95_95_91_49_44_32_50_93_95_48_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__f_108_108_95_98_97_99_107_101_110_100_95_95_115_116_97_99_107_95_111_112_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_108_108_95_98_97_99_107_101_110_100_95_95_108_105_118_101_95_118_97_114_115_95_95_115_116_97_99_107_95_97_108_108_111_99_95_105_110_102_111_95_95_95_95_108_108_95_98_97_99_107_101_110_100_95_95_115_116_97_99_107_95_111_112_116_95_95_111_112_116_95_115_116_97_99_107_95_97_108_108_111_99_95_95_97_114_105_116_121_48_95_95_95_95_95_95_108_108_95_98_97_99_107_101_110_100_95_95_108_105_118_101_95_118_97_114_115_95_95_97_116_95_114_101_115_117_109_101_95_115_105_116_101_95_52_95_95_91_49_44_32_50_93_95_48_4_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__pred__ClassMethod_for_ll_backend__live_vars__stack_alloc_info____ll_backend__stack_opt__opt_stack_alloc__arity0______ll_backend__live_vars__at_resume_site_4__[1, 2]_0'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(f_108_108_95_98_97_99_107_101_110_100_95_95_115_116_97_99_107_95_111_112_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_108_108_95_98_97_99_107_101_110_100_95_95_108_105_118_101_95_118_97_114_115_95_95_115_116_97_99_107_95_97_108_108_111_99_95_105_110_102_111_95_95_95_95_108_108_95_98_97_99_107_101_110_100_95_95_115_116_97_99_107_95_111_112_116_95_95_111_112_116_95_115_116_97_99_107_95_97_108_108_111_99_95_95_97_114_105_116_121_48_95_95_95_95_95_95_108_108_95_98_97_99_107_101_110_100_95_95_108_105_118_101_95_118_97_114_115_95_95_97_116_95_114_101_115_117_109_101_95_115_105_116_101_95_52_95_95_91_49_44_32_50_93_95_48_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__stack_opt_module65)
	MR_init_entry1(f_108_108_95_98_97_99_107_101_110_100_95_95_115_116_97_99_107_95_111_112_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_108_108_95_98_97_99_107_101_110_100_95_95_108_105_118_101_95_118_97_114_115_95_95_115_116_97_99_107_95_97_108_108_111_99_95_105_110_102_111_95_95_95_95_108_108_95_98_97_99_107_101_110_100_95_95_115_116_97_99_107_95_111_112_116_95_95_111_112_116_95_115_116_97_99_107_95_97_108_108_111_99_95_95_97_114_105_116_121_48_95_95_95_95_95_95_108_108_95_98_97_99_107_101_110_100_95_95_108_105_118_101_95_118_97_114_115_95_95_97_116_95_112_97_114_95_99_111_110_106_95_52_95_95_91_50_93_95_48_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__f_108_108_95_98_97_99_107_101_110_100_95_95_115_116_97_99_107_95_111_112_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_108_108_95_98_97_99_107_101_110_100_95_95_108_105_118_101_95_118_97_114_115_95_95_115_116_97_99_107_95_97_108_108_111_99_95_105_110_102_111_95_95_95_95_108_108_95_98_97_99_107_101_110_100_95_95_115_116_97_99_107_95_111_112_116_95_95_111_112_116_95_115_116_97_99_107_95_97_108_108_111_99_95_95_97_114_105_116_121_48_95_95_95_95_95_95_108_108_95_98_97_99_107_101_110_100_95_95_108_105_118_101_95_118_97_114_115_95_95_97_116_95_112_97_114_95_99_111_110_106_95_52_95_95_91_50_93_95_48_4_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__pred__ClassMethod_for_ll_backend__live_vars__stack_alloc_info____ll_backend__stack_opt__opt_stack_alloc__arity0______ll_backend__live_vars__at_par_conj_4__[2]_0'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(f_108_108_95_98_97_99_107_101_110_100_95_95_115_116_97_99_107_95_111_112_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_108_108_95_98_97_99_107_101_110_100_95_95_108_105_118_101_95_118_97_114_115_95_95_115_116_97_99_107_95_97_108_108_111_99_95_105_110_102_111_95_95_95_95_108_108_95_98_97_99_107_101_110_100_95_95_115_116_97_99_107_95_111_112_116_95_95_111_112_116_95_115_116_97_99_107_95_97_108_108_111_99_95_95_97_114_105_116_121_48_95_95_95_95_95_95_108_108_95_98_97_99_107_101_110_100_95_95_108_105_118_101_95_118_97_114_115_95_95_97_116_95_112_97_114_95_99_111_110_106_95_52_95_95_91_50_93_95_48_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_tempr2 = MR_r2;
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,2);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tempr2;
	MR_np_tailcall_ent(fn__f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_117_110_105_111_110_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

static void mercury__ll_backend__stack_opt_maybe_bunch_0(void)
{
	ll_backend__stack_opt_module0();
	ll_backend__stack_opt_module1();
	ll_backend__stack_opt_module2();
	ll_backend__stack_opt_module3();
	ll_backend__stack_opt_module4();
	ll_backend__stack_opt_module5();
	ll_backend__stack_opt_module6();
	ll_backend__stack_opt_module7();
	ll_backend__stack_opt_module8();
	ll_backend__stack_opt_module9();
	ll_backend__stack_opt_module10();
	ll_backend__stack_opt_module11();
	ll_backend__stack_opt_module12();
	ll_backend__stack_opt_module13();
	ll_backend__stack_opt_module14();
	ll_backend__stack_opt_module15();
	ll_backend__stack_opt_module16();
	ll_backend__stack_opt_module17();
	ll_backend__stack_opt_module18();
	ll_backend__stack_opt_module19();
	ll_backend__stack_opt_module20();
	ll_backend__stack_opt_module21();
	ll_backend__stack_opt_module22();
	ll_backend__stack_opt_module23();
	ll_backend__stack_opt_module24();
	ll_backend__stack_opt_module25();
	ll_backend__stack_opt_module26();
	ll_backend__stack_opt_module27();
	ll_backend__stack_opt_module28();
	ll_backend__stack_opt_module29();
	ll_backend__stack_opt_module30();
	ll_backend__stack_opt_module31();
	ll_backend__stack_opt_module32();
	ll_backend__stack_opt_module33();
	ll_backend__stack_opt_module34();
	ll_backend__stack_opt_module35();
	ll_backend__stack_opt_module36();
	ll_backend__stack_opt_module37();
	ll_backend__stack_opt_module38();
	ll_backend__stack_opt_module39();
}

static void mercury__ll_backend__stack_opt_maybe_bunch_1(void)
{
	ll_backend__stack_opt_module40();
	ll_backend__stack_opt_module41();
	ll_backend__stack_opt_module42();
	ll_backend__stack_opt_module43();
	ll_backend__stack_opt_module44();
	ll_backend__stack_opt_module45();
	ll_backend__stack_opt_module46();
	ll_backend__stack_opt_module47();
	ll_backend__stack_opt_module48();
	ll_backend__stack_opt_module49();
	ll_backend__stack_opt_module50();
	ll_backend__stack_opt_module51();
	ll_backend__stack_opt_module52();
	ll_backend__stack_opt_module53();
	ll_backend__stack_opt_module54();
	ll_backend__stack_opt_module55();
	ll_backend__stack_opt_module56();
	ll_backend__stack_opt_module57();
	ll_backend__stack_opt_module58();
	ll_backend__stack_opt_module59();
	ll_backend__stack_opt_module60();
	ll_backend__stack_opt_module61();
	ll_backend__stack_opt_module62();
	ll_backend__stack_opt_module63();
	ll_backend__stack_opt_module64();
	ll_backend__stack_opt_module65();
}

/* suppress gcc -Wmissing-decls warnings */
void mercury__ll_backend__stack_opt__init(void);
void mercury__ll_backend__stack_opt__init_type_tables(void);
void mercury__ll_backend__stack_opt__init_debugger(void);
#ifdef MR_DEEP_PROFILING
void mercury__ll_backend__stack_opt__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp);
#endif
#ifdef MR_RECORD_TERM_SIZES
void mercury__ll_backend__stack_opt__init_complexity_procs(void);
#endif
#ifdef MR_THREADSCOPE
void mercury__ll_backend__stack_opt__init_threadscope_string_table(void);
#endif

void mercury__ll_backend__stack_opt__init(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	mercury__ll_backend__stack_opt_maybe_bunch_0();
	mercury__ll_backend__stack_opt_maybe_bunch_1();
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_ll_backend__stack_opt__type_ctor_info_all_paths_0,
		ll_backend__stack_opt__all_paths_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_ll_backend__stack_opt__type_ctor_info_current_segment_first_flush_0,
		ll_backend__stack_opt__current_segment_first_flush_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_ll_backend__stack_opt__type_ctor_info_match_info_0,
		ll_backend__stack_opt__match_info_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_ll_backend__stack_opt__type_ctor_info_match_path_info_0,
		ll_backend__stack_opt__match_path_info_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_ll_backend__stack_opt__type_ctor_info_matching_result_0,
		ll_backend__stack_opt__matching_result_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_ll_backend__stack_opt__type_ctor_info_opt_stack_alloc_0,
		ll_backend__stack_opt__opt_stack_alloc_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_ll_backend__stack_opt__type_ctor_info_path_0,
		ll_backend__stack_opt__path_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_ll_backend__stack_opt__type_ctor_info_stack_opt_info_0,
		ll_backend__stack_opt__stack_opt_info_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_ll_backend__stack_opt__type_ctor_info_stack_opt_params_0,
		ll_backend__stack_opt__stack_opt_params_0_0);
#ifndef MR_STATIC_CODE_ADDRESSES
		MR_field(MR_mktag(0), mercury_data_base_typeclass_info_ll_backend__live_vars__stack_alloc_info__arity1__ll_backend__stack_opt__opt_stack_alloc__arity0__, 5) =
			MR_ENTRY_AP(ll_backend__stack_opt__ClassMethod_for_ll_backend__live_vars__stack_alloc_info____ll_backend__stack_opt__opt_stack_alloc__arity0______ll_backend__live_vars__at_call_site_4_4_0);
		MR_field(MR_mktag(0), mercury_data_base_typeclass_info_ll_backend__live_vars__stack_alloc_info__arity1__ll_backend__stack_opt__opt_stack_alloc__arity0__, 6) =
			MR_ENTRY_AP(ll_backend__stack_opt__ClassMethod_for_ll_backend__live_vars__stack_alloc_info____ll_backend__stack_opt__opt_stack_alloc__arity0______ll_backend__live_vars__at_resume_site_4_4_0);
		MR_field(MR_mktag(0), mercury_data_base_typeclass_info_ll_backend__live_vars__stack_alloc_info__arity1__ll_backend__stack_opt__opt_stack_alloc__arity0__, 7) =
			MR_ENTRY_AP(ll_backend__stack_opt__ClassMethod_for_ll_backend__live_vars__stack_alloc_info____ll_backend__stack_opt__opt_stack_alloc__arity0______ll_backend__live_vars__at_par_conj_4_4_0);
#endif /* MR_STATIC_CODE_ADDRESSES */
#ifndef MR_STATIC_CODE_ADDRESSES
		MR_field(MR_mktag(0), mercury_data_base_typeclass_info_backend_libs__interval__build_interval_info_acc__arity1__ll_backend__stack_opt__stack_opt_info__arity0__, 5) =
			MR_ENTRY_AP(ll_backend__stack_opt__ClassMethod_for_backend_libs__interval__build_interval_info_acc____ll_backend__stack_opt__stack_opt_info__arity0______backend_libs__interval__use_cell_8_8_0);
#endif /* MR_STATIC_CODE_ADDRESSES */
	mercury__ll_backend__stack_opt__init_debugger();
}

void mercury__ll_backend__stack_opt__init_type_tables(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	{
		MR_register_type_ctor_info(
		&mercury_data_ll_backend__stack_opt__type_ctor_info_all_paths_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_ll_backend__stack_opt__type_ctor_info_current_segment_first_flush_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_ll_backend__stack_opt__type_ctor_info_match_info_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_ll_backend__stack_opt__type_ctor_info_match_path_info_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_ll_backend__stack_opt__type_ctor_info_matching_result_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_ll_backend__stack_opt__type_ctor_info_opt_stack_alloc_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_ll_backend__stack_opt__type_ctor_info_path_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_ll_backend__stack_opt__type_ctor_info_stack_opt_info_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_ll_backend__stack_opt__type_ctor_info_stack_opt_params_0);
	}
}


void mercury__ll_backend__stack_opt__init_debugger(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}

#ifdef MR_DEEP_PROFILING

void mercury__ll_backend__stack_opt__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp)
{
	MR_write_out_module_proc_reps_start(procrep_fp, &mercury_data__module_common_layout__ll_backend__stack_opt);
	MR_write_out_module_proc_reps_end(procrep_fp);
}

#endif

#ifdef MR_RECORD_TERM_SIZES

void mercury__ll_backend__stack_opt__init_complexity_procs(void)
{
}

#endif

#ifdef MR_THREADSCOPE

void mercury__ll_backend__stack_opt__init_threadscope_string_table(void)
{
}

#endif

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;
