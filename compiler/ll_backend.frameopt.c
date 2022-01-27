/*
** Automatically generated from `frameopt.m'
** by the Mercury compiler,
** version rotd-2013-03-18, configured for x86_64-apple-darwin12.2.1.
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
INIT mercury__ll_backend__frameopt__init
ENDINIT
*/

#define MR_ALLOW_RESET
#include "mercury_imp.h"
#line 140 "../library/io.int2"
#include "io.mh"

#line 28 "ll_backend.frameopt.c"
#line 150 "../library/io.int2"
#include "time.mh"

#line 32 "ll_backend.frameopt.c"
#line 151 "../library/io.int2"
#include "string.mh"

#line 36 "ll_backend.frameopt.c"
#line 33 "../library/array.int2"
#include "array.mh"

#line 40 "ll_backend.frameopt.c"
#line 39 "../mdbcomp/mdbcomp.rtti_access.int2"
#include "mdbcomp.rtti_access.mh"

#line 44 "ll_backend.frameopt.c"
#line 31 "../library/bitmap.int2"
#include "bitmap.mh"

#line 48 "ll_backend.frameopt.c"
#line 49 "ll_backend.frameopt.c"
#include "ll_backend.frameopt.mh"

#line 52 "ll_backend.frameopt.c"
#line 53 "ll_backend.frameopt.c"
#ifndef LL_BACKEND__FRAMEOPT_DECL_GUARD
#define LL_BACKEND__FRAMEOPT_DECL_GUARD

#line 57 "ll_backend.frameopt.c"
#line 58 "ll_backend.frameopt.c"

#endif
#line 61 "ll_backend.frameopt.c"

#ifdef _MSC_VER
#define MR_STATIC_LINKAGE extern
#else
#define MR_STATIC_LINKAGE static
#endif


#ifdef MR_MSVC
#pragma pack(push, MR_BYTES_PER_WORD)
#endif
struct mercury_type_0 {
	MR_Word * f1[3];
};
#ifdef MR_MSVC
#pragma pack(pop)
#endif
MR_STATIC_LINKAGE const struct mercury_type_0 mercury_common_0[];


#ifdef MR_MSVC
#pragma pack(push, MR_BYTES_PER_WORD)
#endif
struct mercury_type_1 {
	MR_Word * f1[2];
};
#ifdef MR_MSVC
#pragma pack(pop)
#endif
MR_STATIC_LINKAGE const struct mercury_type_1 mercury_common_1[];


#ifdef MR_MSVC
#pragma pack(push, MR_BYTES_PER_WORD)
#endif
struct mercury_type_2 {
	MR_String f1;
};
#ifdef MR_MSVC
#pragma pack(pop)
#endif
MR_STATIC_LINKAGE const struct mercury_type_2 mercury_common_2[];


#ifdef MR_MSVC
#pragma pack(push, MR_BYTES_PER_WORD)
#endif
struct mercury_type_3 {
	MR_Word * f1;
	MR_String f2;
};
#ifdef MR_MSVC
#pragma pack(pop)
#endif
MR_STATIC_LINKAGE const struct mercury_type_3 mercury_common_3[];


#ifdef MR_MSVC
#pragma pack(push, MR_BYTES_PER_WORD)
#endif
struct mercury_type_4 {
	MR_Integer f1;
	MR_Word * f2;
};
#ifdef MR_MSVC
#pragma pack(pop)
#endif
MR_STATIC_LINKAGE const struct mercury_type_4 mercury_common_4[];


#ifdef MR_MSVC
#pragma pack(push, MR_BYTES_PER_WORD)
#endif
struct mercury_type_5 {
	MR_Integer f1[2];
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
	MR_Word * f2;
	MR_Integer f3;
	MR_Word * f4;
	MR_Word * f5;
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
	MR_Integer f3;
};
#ifdef MR_MSVC
#pragma pack(pop)
#endif
MR_STATIC_LINKAGE const struct mercury_type_7 mercury_common_7[];


#ifdef MR_MSVC
#pragma pack(push, MR_BYTES_PER_WORD)
#endif
struct mercury_type_8 {
	MR_Unsigned f1[3];
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
	MR_Word * f3[4];
};
#ifdef MR_MSVC
#pragma pack(pop)
#endif
MR_STATIC_LINKAGE const struct mercury_type_9 mercury_common_9[];


#ifdef MR_MSVC
#pragma pack(push, MR_BYTES_PER_WORD)
#endif
struct mercury_type_10 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[5];
};
#ifdef MR_MSVC
#pragma pack(pop)
#endif
MR_STATIC_LINKAGE const struct mercury_type_10 mercury_common_10[];


#ifdef MR_MSVC
#pragma pack(push, MR_BYTES_PER_WORD)
#endif
struct mercury_type_11 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[8];
};
#ifdef MR_MSVC
#pragma pack(pop)
#endif
MR_STATIC_LINKAGE const struct mercury_type_11 mercury_common_11[];


#ifdef MR_MSVC
#pragma pack(push, MR_BYTES_PER_WORD)
#endif
struct mercury_type_12 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[3];
};
#ifdef MR_MSVC
#pragma pack(pop)
#endif
MR_STATIC_LINKAGE const struct mercury_type_12 mercury_common_12[];


#ifdef MR_MSVC
#pragma pack(push, MR_BYTES_PER_WORD)
#endif
struct mercury_type_13 {
	MR_Word * f1;
	MR_Code * f2;
	MR_Integer f3;
};
#ifdef MR_MSVC
#pragma pack(pop)
#endif
MR_STATIC_LINKAGE const struct mercury_type_13 mercury_common_13[];


#ifdef MR_MSVC
#pragma pack(push, MR_BYTES_PER_WORD)
#endif
struct mercury_type_14 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[7];
};
#ifdef MR_MSVC
#pragma pack(pop)
#endif
MR_STATIC_LINKAGE const struct mercury_type_14 mercury_common_14[];


#ifdef MR_MSVC
#pragma pack(push, MR_BYTES_PER_WORD)
#endif
struct mercury_type_15 {
	MR_Word * f1;
};
#ifdef MR_MSVC
#pragma pack(pop)
#endif
MR_STATIC_LINKAGE const struct mercury_type_15 mercury_common_15[];

extern const MR_BaseTypeclassInfo
	mercury_data_base_typeclass_info_ll_backend__frameopt__block_entry_exit__arity2__ll_backend__frameopt__nondet_entry_info__arity0__ll_backend__frameopt__nondet_exit_info__arity0__[],
	mercury_data_base_typeclass_info_ll_backend__frameopt__block_entry_exit__arity2__ll_backend__frameopt__det_entry_info__arity0__ll_backend__frameopt__det_exit_info__arity0__[];

extern const MR_TypeClassDeclStruct
	mercury_data_ll_backend__frameopt__type_class_decl_block_entry_exit_2;

extern const MR_TypeCtorInfo_Struct
	mercury_data_ll_backend__frameopt__type_ctor_info_block_needs_frame_0,
	mercury_data_ll_backend__frameopt__type_ctor_info_block_type_2,
	mercury_data_ll_backend__frameopt__type_ctor_info_can_transform_0,
	mercury_data_ll_backend__frameopt__type_ctor_info_det_entry_info_0,
	mercury_data_ll_backend__frameopt__type_ctor_info_det_exit_info_0,
	mercury_data_ll_backend__frameopt__type_ctor_info_det_frame_block_map_0,
	mercury_data_ll_backend__frameopt__type_ctor_info_exit_par_map_0,
	mercury_data_ll_backend__frameopt__type_ctor_info_frame_block_info_2,
	mercury_data_ll_backend__frameopt__type_ctor_info_frame_block_map_2,
	mercury_data_ll_backend__frameopt__type_ctor_info_maybe_dummy_0;

extern const MR_TypeCtorInfo_Struct
	mercury_data_ll_backend__frameopt__type_ctor_info_nondet_entry_info_0,
	mercury_data_ll_backend__frameopt__type_ctor_info_nondet_exit_info_0,
	mercury_data_ll_backend__frameopt__type_ctor_info_ord_needs_frame_0,
	mercury_data_ll_backend__frameopt__type_ctor_info_pre_exit_dummy_label_map_0,
	mercury_data_ll_backend__frameopt__type_ctor_info_pred_map_0,
	mercury_data_ll_backend__frameopt__type_ctor_info_prop_queue_0,
	mercury_data_ll_backend__frameopt__type_ctor_info_rev_map_0,
	mercury_data_ll_backend__frameopt__type_ctor_info_setup_par_map_0;
MR_decl_label4(ll_backend__frameopt__ClassMethod_for_ll_backend__frameopt__block_entry_exit____ll_backend__frameopt__det_entry_info__arity0__ll_backend__frameopt__det_exit_info__arity0______ll_backend__frameopt__detect_entry_4_4_0, 2,5,7,1)
MR_decl_label5(ll_backend__frameopt__ClassMethod_for_ll_backend__frameopt__block_entry_exit____ll_backend__frameopt__det_entry_info__arity0__ll_backend__frameopt__det_exit_info__arity0______ll_backend__frameopt__detect_exit_6_6_0, 2,5,6,7,1)
MR_decl_label1(ll_backend__frameopt__ClassMethod_for_ll_backend__frameopt__block_entry_exit____ll_backend__frameopt__nondet_entry_info__arity0__ll_backend__frameopt__nondet_exit_info__arity0______ll_backend__frameopt__detect_entry_4_4_0, 1)
MR_decl_label2(ll_backend__frameopt__IntroducedFrom__pred__analyze_block__1252__1_4_0, 2,3)
MR_decl_label2(ll_backend__frameopt__IntroducedFrom__pred__create_parallels__2072__1_2_0, 2,3)
MR_decl_label9(f_108_108_95_98_97_99_107_101_110_100_95_95_102_114_97_109_101_111_112_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_108_108_95_98_97_99_107_101_110_100_95_95_102_114_97_109_101_111_112_116_95_95_98_108_111_99_107_95_101_110_116_114_121_95_101_120_105_116_95_95_95_95_108_108_95_98_97_99_107_101_110_100_95_95_102_114_97_109_101_111_112_116_95_95_110_111_110_100_101_116_95_101_110_116_114_121_95_105_110_102_111_95_95_97_114_105_116_121_48_95_95_108_108_95_98_97_99_107_101_110_100_95_95_102_114_97_109_101_111_112_116_95_95_110_111_110_100_101_116_95_101_120_105_116_95_105_110_102_111_95_95_97_114_105_116_121_48_95_95_95_95_95_95_108_108_95_98_97_99_107_101_110_100_95_95_102_114_97_109_101_111_112_116_95_95_100_101_116_101_99_116_95_101_120_105_116_95_54_95_95_91_50_93_95_48_6_0, 2,5,6,7,8,10,16,15,1)
MR_decl_label7(f_108_108_95_98_97_99_107_101_110_100_95_95_102_114_97_109_101_111_112_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_109_112_117_116_101_95_98_108_111_99_107_95_110_101_101_100_115_95_102_114_97_109_101_95_95_91_49_93_95_48_3_0, 2,7,10,12,8,6,4)
MR_decl_label10(f_108_108_95_98_97_99_107_101_110_100_95_95_102_114_97_109_101_111_112_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_114_101_97_116_101_95_112_97_114_97_108_108_101_108_115_95_95_91_49_49_93_95_48_12_0, 144,4,5,6,8,10,13,16,18,20)
MR_decl_label10(f_108_108_95_98_97_99_107_101_110_100_95_95_102_114_97_109_101_111_112_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_114_101_97_116_101_95_112_97_114_97_108_108_101_108_115_95_95_91_49_49_93_95_48_12_0, 21,17,25,26,27,33,34,35,41,37)
MR_decl_label10(f_108_108_95_98_97_99_107_101_110_100_95_95_102_114_97_109_101_111_112_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_114_101_97_116_101_95_112_97_114_97_108_108_101_108_115_95_95_91_49_49_93_95_48_12_0, 48,29,12,52,55,56,57,58,60,66)
MR_decl_label7(f_108_108_95_98_97_99_107_101_110_100_95_95_102_114_97_109_101_111_112_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_114_101_97_116_101_95_112_97_114_97_108_108_101_108_115_95_95_91_49_49_93_95_48_12_0, 78,82,59,86,87,91,51)
MR_decl_label3(ll_backend__frameopt__all_successors_need_frame_3_0, 3,5,9)
MR_decl_label10(ll_backend__frameopt__analyze_block_11_0, 2,3,5,7,8,10,6,12,14,17)
MR_decl_label10(ll_backend__frameopt__analyze_block_11_0, 15,24,22,31,29,39,43,45,49,36)
MR_decl_label10(ll_backend__frameopt__analyze_block_11_0, 53,54,56,58,57,62,67,64,11,73)
MR_decl_label3(ll_backend__frameopt__analyze_block_11_0, 74,75,78)
MR_decl_label9(ll_backend__frameopt__analyze_block_map_5_0, 5,6,8,10,13,14,15,16,2)
MR_decl_label3(ll_backend__frameopt__analyze_block_map_2_10_0, 10,3,4)
MR_decl_label10(ll_backend__frameopt__build_frame_block_map_14_0, 3,7,8,6,10,12,13,15,22,25)
MR_decl_label10(ll_backend__frameopt__build_frame_block_map_14_0, 39,55,56,57,58,60,61,9,66,68)
MR_decl_label10(ll_backend__frameopt__build_frame_block_map_14_0, 70,77,78,75,85,93,95,96,97,99)
MR_decl_label10(ll_backend__frameopt__build_frame_block_map_14_0, 100,65,103,104,109,111,113,108,117,118)
MR_decl_label4(ll_backend__frameopt__build_frame_block_map_14_0, 119,120,122,4)
MR_decl_label2(ll_backend__frameopt__can_delay_frame_2_0, 5,2)
MR_decl_label10(ll_backend__frameopt__delay_frame_init_8_0, 35,3,5,7,8,11,10,12,13,6)
MR_decl_label2(ll_backend__frameopt__delay_frame_init_8_0, 14,17)
MR_decl_label10(ll_backend__frameopt__delay_frame_transform_13_0, 2,3,4,5,6,7,8,9,10,11)
MR_decl_label10(ll_backend__frameopt__delay_frame_transform_13_0, 12,14,15,16,17,18,21,22,23,24)
MR_decl_label4(ll_backend__frameopt__delay_frame_transform_13_0, 20,19,26,28)
MR_decl_label10(ll_backend__frameopt__describe_block_6_0, 2,3,5,7,9,10,11,12,14,16)
MR_decl_label10(ll_backend__frameopt__describe_block_6_0, 17,18,13,19,21,22,23,24,20,26)
MR_decl_label10(ll_backend__frameopt__describe_block_6_0, 27,28,29,25,31,32,33,34,30,37)
MR_decl_label10(ll_backend__frameopt__describe_block_6_0, 36,41,42,39,45,46,44,48,50,52)
MR_decl_label10(ll_backend__frameopt__describe_block_6_0, 57,55,51,60,62,63,64,65,66,67)
MR_decl_label1(ll_backend__frameopt__describe_block_6_0, 68)
MR_decl_label4(ll_backend__frameopt__detect_det_entry_4_0, 2,5,7,1)
MR_decl_label6(ll_backend__frameopt__detstack_setup_6_0, 80,5,11,3,20,1)
MR_decl_label5(ll_backend__frameopt__detstack_teardown_8_0, 14,3,6,8,12)
MR_decl_label10(ll_backend__frameopt__detstack_teardown_2_12_0, 151,2,5,11,20,22,25,10,29,1)
MR_decl_label8(ll_backend__frameopt__divide_into_basic_blocks_5_0, 55,5,8,10,14,18,4,22)
MR_decl_label6(ll_backend__frameopt__find_redoip_labels_4_0, 46,3,11,12,4,5)
MR_decl_label7(ll_backend__frameopt__find_succeed_labels_3_0, 32,3,7,8,10,4,5)
MR_decl_label6(ll_backend__frameopt__flatten_block_seq_3_0, 59,4,6,8,13,7)
MR_decl_label10(ll_backend__frameopt__frameopt_keep_nondet_frame_7_0, 2,9,13,14,16,10,11,18,19,21)
MR_decl_label2(ll_backend__frameopt__frameopt_keep_nondet_frame_7_0, 40,4)
MR_decl_label10(ll_backend__frameopt__frameopt_main_det_stack_7_0, 2,5,7,9,10,11,12,13,17,19)
MR_decl_label10(ll_backend__frameopt__frameopt_main_det_stack_7_0, 22,23,24,25,21,26,15,28,29,33)
MR_decl_label3(ll_backend__frameopt__frameopt_main_det_stack_7_0, 34,35,4)
MR_decl_label10(ll_backend__frameopt__frameopt_main_nondet_stack_7_0, 2,10,12,13,14,15,16,20,22,19)
MR_decl_label8(ll_backend__frameopt__frameopt_main_nondet_stack_7_0, 24,27,28,29,30,26,31,3)
MR_decl_label10(ll_backend__frameopt__keep_frame_transform_6_0, 165,3,4,6,16,19,21,23,18,25)
MR_decl_label7(ll_backend__frameopt__keep_frame_transform_6_0, 29,30,35,37,42,47,5)
MR_decl_label9(ll_backend__frameopt__keep_nondet_frame_9_0, 138,9,14,24,26,27,4,5,34)
MR_decl_label1(ll_backend__frameopt__key_block_needs_frame_2_0, 1)
MR_decl_label2(ll_backend__frameopt__label_needs_frame_2_0, 2,1)
MR_decl_label10(ll_backend__frameopt__mark_parallel_for_nostack_successor_11_0, 3,7,6,9,11,5,14,16,18,17)
MR_decl_label3(ll_backend__frameopt__mark_parallel_for_nostack_successor_11_0, 20,22,13)
MR_decl_label3(ll_backend__frameopt__mark_parallels_for_nostack_successors_12_0, 19,4,6)
MR_decl_label3(ll_backend__frameopt__mark_redoip_label_3_0, 3,5,9)
MR_decl_label4(ll_backend__frameopt__matching_label_ref_2_0, 4,17,7,1)
MR_decl_label3(ll_backend__frameopt__maybe_add_comments_5_0, 16,4,5)
MR_decl_label5(ll_backend__frameopt__no_disagreement_3_0, 26,5,9,4,2)
MR_decl_label5(ll_backend__frameopt__nondetstack_teardown_9_0, 14,3,6,8,12)
MR_decl_label10(ll_backend__frameopt__nondetstack_teardown_2_14_0, 214,2,5,11,20,29,37,39,42,10)
MR_decl_label1(ll_backend__frameopt__nondetstack_teardown_2_14_0, 1)
MR_decl_label10(ll_backend__frameopt__process_frame_delay_11_0, 66,3,4,5,7,9,12,19,20,11)
MR_decl_label3(ll_backend__frameopt__process_frame_delay_11_0, 22,24,26)
MR_decl_label10(ll_backend__frameopt__propagate_frame_requirement_to_predecessors_9_0, 57,4,6,9,8,12,15,14,18,19)
MR_decl_label4(ll_backend__frameopt__propagate_frame_requirement_to_predecessors_9_0, 21,22,5,3)
MR_decl_label10(ll_backend__frameopt__propagate_frame_requirement_to_successors_9_0, 57,4,6,8,10,12,13,14,17,16)
MR_decl_label5(ll_backend__frameopt__propagate_frame_requirement_to_successors_9_0, 20,21,22,5,3)
MR_decl_label6(ll_backend__frameopt__record_frame_need_6_0, 3,5,7,10,9,6)
MR_decl_label5(ll_backend__frameopt__rev_map_side_labels_4_0, 26,3,5,4,10)
MR_decl_label10(ll_backend__frameopt__transform_nostack_ordinary_block_13_0, 2,3,4,6,7,8,9,12,17,15)
MR_decl_label8(ll_backend__frameopt__transform_nostack_ordinary_block_13_0, 5,24,25,26,28,30,31,33)
MR_decl_label7(fn__ll_backend__frameopt__ClassMethod_for_ll_backend__frameopt__block_entry_exit____ll_backend__frameopt__det_entry_info__arity0__ll_backend__frameopt__det_exit_info__arity0______ll_backend__frameopt__describe_entry_1_1_0, 2,3,4,5,6,7,8)
MR_decl_label7(fn__ll_backend__frameopt__ClassMethod_for_ll_backend__frameopt__block_entry_exit____ll_backend__frameopt__det_entry_info__arity0__ll_backend__frameopt__det_exit_info__arity0______ll_backend__frameopt__describe_exit_2_2_0, 2,3,4,5,6,7,8)
MR_decl_label7(fn__ll_backend__frameopt__ClassMethod_for_ll_backend__frameopt__block_entry_exit____ll_backend__frameopt__nondet_entry_info__arity0__ll_backend__frameopt__nondet_exit_info__arity0______ll_backend__frameopt__describe_entry_1_1_0, 2,3,4,5,6,7,8)
MR_decl_label10(fn__ll_backend__frameopt__ClassMethod_for_ll_backend__frameopt__block_entry_exit____ll_backend__frameopt__nondet_entry_info__arity0__ll_backend__frameopt__nondet_exit_info__arity0______ll_backend__frameopt__describe_exit_2_2_0, 4,5,6,7,3,9,10,11,12,13)
MR_decl_label8(fn__ll_backend__frameopt__ClassMethod_for_ll_backend__frameopt__block_entry_exit____ll_backend__frameopt__nondet_entry_info__arity0__ll_backend__frameopt__nondet_exit_info__arity0______ll_backend__frameopt__describe_exit_2_2_0, 14,15,16,17,18,19,20,21)
MR_decl_label1(fn__ll_backend__frameopt__ClassMethod_for_ll_backend__frameopt__block_entry_exit____ll_backend__frameopt__nondet_entry_info__arity0__ll_backend__frameopt__nondet_exit_info__arity0______ll_backend__frameopt__non_teardown_exit_code_1_1_0, 3)
MR_decl_label3(fn__f_108_108_95_98_97_99_107_101_110_100_95_95_102_114_97_109_101_111_112_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_112_114_101_118_95_98_108_111_99_107_95_110_101_101_100_115_95_102_114_97_109_101_95_95_91_49_44_32_50_93_95_48_2_0, 8,3,5)
MR_decl_label1(fn__f_108_108_95_98_97_99_107_101_110_100_95_95_102_114_97_109_101_111_112_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_115_117_99_99_101_115_115_111_114_115_95_95_91_49_44_32_50_93_95_48_1_0, 3)
MR_decl_label9(fn__ll_backend__frameopt__can_clobber_succip_2_0, 32,3,5,10,12,11,9,15,7)
MR_decl_label4(__Unify___ll_backend__frameopt__block_type_2_0, 5,21,9,1)
MR_decl_label2(__Unify___ll_backend__frameopt__det_entry_info_0_0, 4,1)
MR_decl_label4(__Unify___ll_backend__frameopt__det_exit_info_0_0, 4,6,10,1)
MR_decl_label1(__Unify___ll_backend__frameopt__exit_par_map_0_0, 6)
MR_decl_label7(__Unify___ll_backend__frameopt__frame_block_info_2_0, 4,6,8,10,12,16,1)
MR_decl_label2(__Unify___ll_backend__frameopt__nondet_entry_info_0_0, 6,1)
MR_decl_label8(__Unify___ll_backend__frameopt__nondet_exit_info_0_0, 7,27,5,12,14,16,18,1)
MR_decl_label1(__Unify___ll_backend__frameopt__setup_par_map_0_0, 6)
MR_decl_label10(__Compare___ll_backend__frameopt__block_type_2_0, 3,2,7,5,12,10,32,16,33,17)
MR_decl_label2(__Compare___ll_backend__frameopt__block_type_2_0, 19,69)
MR_decl_label5(__Compare___ll_backend__frameopt__det_entry_info_0_0, 3,2,5,9,29)
MR_decl_label5(__Compare___ll_backend__frameopt__det_exit_info_0_0, 3,2,5,9,38)
MR_decl_label2(__Compare___ll_backend__frameopt__exit_par_map_0_0, 3,2)
MR_decl_label8(__Compare___ll_backend__frameopt__frame_block_info_2_0, 3,2,5,9,13,17,21,71)
MR_decl_label5(__Compare___ll_backend__frameopt__nondet_entry_info_0_0, 3,2,5,9,29)
MR_decl_label10(__Compare___ll_backend__frameopt__nondet_exit_info_0_0, 3,2,9,7,5,15,17,21,25,29)
MR_decl_label1(__Compare___ll_backend__frameopt__nondet_exit_info_0_0, 99)
MR_decl_label2(__Compare___ll_backend__frameopt__setup_par_map_0_0, 3,2)
MR_decl_static(ll_backend__frameopt__maybe_add_comments_5_0)
MR_decl_static(ll_backend__frameopt__divide_into_basic_blocks_5_0)
MR_decl_static(ll_backend__frameopt__flatten_block_seq_3_0)
MR_decl_static(ll_backend__frameopt__detect_entry_4_0)
MR_decl_static(ll_backend__frameopt__detect_exit_6_0)
MR_decl_static(ll_backend__frameopt__build_frame_block_map_14_0)
MR_decl_static(ll_backend__frameopt__detstack_setup_6_0)
MR_decl_static(ll_backend__frameopt__detect_det_entry_4_0)
MR_decl_static(ll_backend__frameopt__matching_label_ref_2_0)
MR_decl_static(ll_backend__frameopt__find_redoip_labels_4_0)
MR_decl_static(ll_backend__frameopt__analyze_block_11_0)
MR_decl_static(ll_backend__frameopt__analyze_block_map_2_10_0)
MR_decl_static(ll_backend__frameopt__analyze_block_map_5_0)
MR_decl_static(fn__ll_backend__frameopt__can_clobber_succip_2_0)
MR_decl_static(ll_backend__frameopt__keep_frame_transform_6_0)
MR_decl_static(ll_backend__frameopt__can_delay_frame_2_0)
MR_decl_static(ll_backend__frameopt__rev_map_side_labels_4_0)
MR_decl_static(ll_backend__frameopt__delay_frame_init_8_0)
MR_decl_static(ll_backend__frameopt__propagate_frame_requirement_to_successors_9_0)
MR_decl_static(ll_backend__frameopt__propagate_frame_requirement_to_predecessors_9_0)
MR_decl_static(ll_backend__frameopt__mark_parallel_for_nostack_successor_11_0)
MR_decl_static(ll_backend__frameopt__mark_parallels_for_nostack_successors_12_0)
MR_decl_static(ll_backend__frameopt__process_frame_delay_11_0)
MR_decl_static(ll_backend__frameopt__transform_nostack_ordinary_block_13_0)
MR_decl_static(fn__ll_backend__frameopt__late_setup_code_1_0)
MR_decl_static(fn__ll_backend__frameopt__non_teardown_exit_code_1_0)
MR_decl_static(ll_backend__frameopt__search_setup_par_map_3_0)
MR_decl_static(ll_backend__frameopt__search_exit_par_map_3_0)
MR_decl_static(ll_backend__frameopt__delay_frame_transform_13_0)
MR_def_extern_entry(ll_backend__frameopt__frameopt_main_det_stack_7_0)
MR_def_extern_entry(ll_backend__frameopt__frameopt_main_nondet_stack_7_0)
MR_decl_static(ll_backend__frameopt__find_succeed_labels_3_0)
MR_decl_static(ll_backend__frameopt__keep_nondet_frame_9_0)
MR_def_extern_entry(ll_backend__frameopt__frameopt_keep_nondet_frame_7_0)
MR_decl_static(fn__ll_backend__frameopt__describe_entry_1_0)
MR_decl_static(fn__ll_backend__frameopt__describe_exit_2_0)
MR_decl_static(ll_backend__frameopt__detstack_teardown_2_12_0)
MR_decl_static(ll_backend__frameopt__detstack_teardown_8_0)
MR_decl_static(ll_backend__frameopt__nondetstack_teardown_2_14_0)
MR_decl_static(ll_backend__frameopt__nondetstack_teardown_9_0)
MR_decl_static(ll_backend__frameopt__local_label_2_0)
MR_decl_static(ll_backend__frameopt__mark_redoip_label_3_0)
MR_decl_static(ll_backend__frameopt__key_block_needs_frame_2_0)
MR_decl_static(ll_backend__frameopt__record_frame_need_6_0)
MR_decl_static(ll_backend__frameopt__all_successors_need_frame_3_0)
MR_decl_static(ll_backend__frameopt__label_needs_frame_2_0)
MR_decl_static(ll_backend__frameopt__no_disagreement_3_0)
MR_decl_static(ll_backend__frameopt__describe_block_6_0)
MR_decl_static(__Unify___ll_backend__frameopt__block_needs_frame_0_0)
MR_decl_static(__Compare___ll_backend__frameopt__block_needs_frame_0_0)
MR_decl_static(__Unify___ll_backend__frameopt__block_type_2_0)
MR_decl_static(__Compare___ll_backend__frameopt__block_type_2_0)
MR_decl_static(__Unify___ll_backend__frameopt__can_transform_0_0)
MR_decl_static(__Compare___ll_backend__frameopt__can_transform_0_0)
MR_decl_static(__Unify___ll_backend__frameopt__det_entry_info_0_0)
MR_decl_static(__Compare___ll_backend__frameopt__det_entry_info_0_0)
MR_decl_static(__Unify___ll_backend__frameopt__det_exit_info_0_0)
MR_decl_static(__Compare___ll_backend__frameopt__det_exit_info_0_0)
MR_decl_static(__Unify___ll_backend__frameopt__det_frame_block_map_0_0)
MR_decl_static(__Compare___ll_backend__frameopt__det_frame_block_map_0_0)
MR_decl_static(__Unify___ll_backend__frameopt__exit_par_map_0_0)
MR_decl_static(__Compare___ll_backend__frameopt__exit_par_map_0_0)
MR_decl_static(__Unify___ll_backend__frameopt__frame_block_info_2_0)
MR_decl_static(__Compare___ll_backend__frameopt__frame_block_info_2_0)
MR_decl_static(__Unify___ll_backend__frameopt__frame_block_map_2_0)
MR_decl_static(__Compare___ll_backend__frameopt__frame_block_map_2_0)
MR_decl_static(__Unify___ll_backend__frameopt__maybe_dummy_0_0)
MR_decl_static(__Compare___ll_backend__frameopt__maybe_dummy_0_0)
MR_decl_static(__Unify___ll_backend__frameopt__nondet_entry_info_0_0)
MR_decl_static(__Compare___ll_backend__frameopt__nondet_entry_info_0_0)
MR_decl_static(__Unify___ll_backend__frameopt__nondet_exit_info_0_0)
MR_decl_static(__Compare___ll_backend__frameopt__nondet_exit_info_0_0)
MR_decl_static(__Unify___ll_backend__frameopt__ord_needs_frame_0_0)
MR_decl_static(__Compare___ll_backend__frameopt__ord_needs_frame_0_0)
MR_decl_static(__Unify___ll_backend__frameopt__pre_exit_dummy_label_map_0_0)
MR_decl_static(__Compare___ll_backend__frameopt__pre_exit_dummy_label_map_0_0)
MR_decl_static(__Unify___ll_backend__frameopt__pred_map_0_0)
MR_decl_static(__Compare___ll_backend__frameopt__pred_map_0_0)
MR_decl_static(__Unify___ll_backend__frameopt__prop_queue_0_0)
MR_decl_static(__Compare___ll_backend__frameopt__prop_queue_0_0)
MR_decl_static(__Unify___ll_backend__frameopt__rev_map_0_0)
MR_decl_static(__Compare___ll_backend__frameopt__rev_map_0_0)
MR_decl_static(__Unify___ll_backend__frameopt__setup_par_map_0_0)
MR_decl_static(__Compare___ll_backend__frameopt__setup_par_map_0_0)
MR_decl_static(ll_backend__frameopt__ClassMethod_for_ll_backend__frameopt__block_entry_exit____ll_backend__frameopt__nondet_entry_info__arity0__ll_backend__frameopt__nondet_exit_info__arity0______ll_backend__frameopt__detect_entry_4_4_0)
MR_decl_static(ll_backend__frameopt__ClassMethod_for_ll_backend__frameopt__block_entry_exit____ll_backend__frameopt__nondet_entry_info__arity0__ll_backend__frameopt__nondet_exit_info__arity0______ll_backend__frameopt__detect_exit_6_6_0)
MR_decl_static(fn__ll_backend__frameopt__ClassMethod_for_ll_backend__frameopt__block_entry_exit____ll_backend__frameopt__nondet_entry_info__arity0__ll_backend__frameopt__nondet_exit_info__arity0______ll_backend__frameopt__late_setup_code_1_1_0)
MR_decl_static(fn__ll_backend__frameopt__ClassMethod_for_ll_backend__frameopt__block_entry_exit____ll_backend__frameopt__nondet_entry_info__arity0__ll_backend__frameopt__nondet_exit_info__arity0______ll_backend__frameopt__non_teardown_exit_code_1_1_0)
MR_decl_static(fn__ll_backend__frameopt__ClassMethod_for_ll_backend__frameopt__block_entry_exit____ll_backend__frameopt__nondet_entry_info__arity0__ll_backend__frameopt__nondet_exit_info__arity0______ll_backend__frameopt__describe_entry_1_1_0)
MR_decl_static(fn__ll_backend__frameopt__ClassMethod_for_ll_backend__frameopt__block_entry_exit____ll_backend__frameopt__nondet_entry_info__arity0__ll_backend__frameopt__nondet_exit_info__arity0______ll_backend__frameopt__describe_exit_2_2_0)
MR_decl_static(ll_backend__frameopt__ClassMethod_for_ll_backend__frameopt__block_entry_exit____ll_backend__frameopt__det_entry_info__arity0__ll_backend__frameopt__det_exit_info__arity0______ll_backend__frameopt__detect_entry_4_4_0)
MR_decl_static(ll_backend__frameopt__ClassMethod_for_ll_backend__frameopt__block_entry_exit____ll_backend__frameopt__det_entry_info__arity0__ll_backend__frameopt__det_exit_info__arity0______ll_backend__frameopt__detect_exit_6_6_0)
MR_decl_static(fn__ll_backend__frameopt__ClassMethod_for_ll_backend__frameopt__block_entry_exit____ll_backend__frameopt__det_entry_info__arity0__ll_backend__frameopt__det_exit_info__arity0______ll_backend__frameopt__late_setup_code_1_1_0)
MR_decl_static(fn__ll_backend__frameopt__ClassMethod_for_ll_backend__frameopt__block_entry_exit____ll_backend__frameopt__det_entry_info__arity0__ll_backend__frameopt__det_exit_info__arity0______ll_backend__frameopt__non_teardown_exit_code_1_1_0)
MR_decl_static(fn__ll_backend__frameopt__ClassMethod_for_ll_backend__frameopt__block_entry_exit____ll_backend__frameopt__det_entry_info__arity0__ll_backend__frameopt__det_exit_info__arity0______ll_backend__frameopt__describe_entry_1_1_0)
MR_decl_static(fn__ll_backend__frameopt__ClassMethod_for_ll_backend__frameopt__block_entry_exit____ll_backend__frameopt__det_entry_info__arity0__ll_backend__frameopt__det_exit_info__arity0______ll_backend__frameopt__describe_exit_2_2_0)
MR_decl_static(ll_backend__frameopt__IntroducedFrom__pred__build_frame_block_map__684__1_2_0)
MR_decl_static(ll_backend__frameopt__IntroducedFrom__pred__analyze_block__1252__1_4_0)
MR_decl_static(ll_backend__frameopt__IntroducedFrom__pred__propagate_frame_requirement_to_successors__1691__1_2_0)
MR_decl_static(ll_backend__frameopt__IntroducedFrom__pred__process_frame_delay__1825__1_2_0)
MR_decl_static(ll_backend__frameopt__IntroducedFrom__pred__create_parallels__2028__1_2_0)
MR_decl_static(ll_backend__frameopt__IntroducedFrom__pred__create_parallels__2031__1_2_0)
MR_decl_static(ll_backend__frameopt__IntroducedFrom__pred__create_parallels__2072__1_2_0)
MR_decl_static(ll_backend__frameopt__IntroducedFrom__pred__describe_block__2214__1_2_0)
MR_decl_static(ll_backend__frameopt__IntroducedFrom__pred__describe_block__2289__1_2_0)
MR_decl_static(ll_backend__frameopt__IntroducedFrom__pred__describe_block__2274__1_2_0)
MR_decl_static(f_108_108_95_98_97_99_107_101_110_100_95_95_102_114_97_109_101_111_112_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_109_112_117_116_101_95_98_108_111_99_107_95_110_101_101_100_115_95_102_114_97_109_101_95_95_91_49_93_95_48_3_0)
MR_decl_static(fn__f_108_108_95_98_97_99_107_101_110_100_95_95_102_114_97_109_101_111_112_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_115_117_99_99_101_115_115_111_114_115_95_95_91_49_44_32_50_93_95_48_1_0)
MR_decl_static(f_108_108_95_98_97_99_107_101_110_100_95_95_102_114_97_109_101_111_112_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_114_101_97_116_101_95_112_97_114_97_108_108_101_108_115_95_95_91_49_49_93_95_48_12_0)
MR_decl_static(fn__f_108_108_95_98_97_99_107_101_110_100_95_95_102_114_97_109_101_111_112_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_112_114_101_118_95_98_108_111_99_107_95_110_101_101_100_115_95_102_114_97_109_101_95_95_91_49_44_32_50_93_95_48_2_0)
MR_decl_static(f_108_108_95_98_97_99_107_101_110_100_95_95_102_114_97_109_101_111_112_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_115_95_111_114_100_105_110_97_114_121_95_98_108_111_99_107_95_95_91_49_44_32_50_93_95_48_1_0)
MR_decl_static(f_108_108_95_98_97_99_107_101_110_100_95_95_102_114_97_109_101_111_112_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_108_108_95_98_97_99_107_101_110_100_95_95_102_114_97_109_101_111_112_116_95_95_98_108_111_99_107_95_101_110_116_114_121_95_101_120_105_116_95_95_95_95_108_108_95_98_97_99_107_101_110_100_95_95_102_114_97_109_101_111_112_116_95_95_110_111_110_100_101_116_95_101_110_116_114_121_95_105_110_102_111_95_95_97_114_105_116_121_48_95_95_108_108_95_98_97_99_107_101_110_100_95_95_102_114_97_109_101_111_112_116_95_95_110_111_110_100_101_116_95_101_120_105_116_95_105_110_102_111_95_95_97_114_105_116_121_48_95_95_95_95_95_95_108_108_95_98_97_99_107_101_110_100_95_95_102_114_97_109_101_111_112_116_95_95_100_101_116_101_99_116_95_101_120_105_116_95_54_95_95_91_50_93_95_48_6_0)

extern const MR_TypeCtorInfo_Struct mercury_data_pair__type_ctor_info_pair_2;
extern const MR_TypeCtorInfo_Struct mercury_data_ll_backend__llds__type_ctor_info_label_0;
extern const MR_TypeCtorInfo_Struct mercury_data_tree234__type_ctor_info_tree234_2;
extern const MR_TypeCtorInfo_Struct mercury_data_ll_backend__llds__type_ctor_info_label_0;
extern const MR_TypeCtorInfo_Struct mercury_data_ll_backend__frameopt__type_ctor_info_block_needs_frame_0;
extern const MR_TypeCtorInfo_Struct mercury_data_pair__type_ctor_info_pair_2;
static const struct mercury_type_0 mercury_common_0[14] =
{
{
{
MR_CTOR_ADDR(ll_backend__frameopt, frame_block_info, 2),
MR_CTOR0_ADDR(ll_backend__frameopt, det_entry_info),
MR_CTOR0_ADDR(ll_backend__frameopt, det_exit_info)
}
},
{
{
(MR_Word *) &mercury_data_base_typeclass_info_ll_backend__frameopt__block_entry_exit__arity2__ll_backend__frameopt__det_entry_info__arity0__ll_backend__frameopt__det_exit_info__arity0__,
MR_CTOR0_ADDR(ll_backend__frameopt, det_entry_info),
MR_CTOR0_ADDR(ll_backend__frameopt, det_exit_info)
}
},
{
{
MR_CTOR_ADDR(ll_backend__frameopt, frame_block_info, 2),
MR_CTOR0_ADDR(ll_backend__frameopt, nondet_entry_info),
MR_CTOR0_ADDR(ll_backend__frameopt, nondet_exit_info)
}
},
{
{
(MR_Word *) &mercury_data_base_typeclass_info_ll_backend__frameopt__block_entry_exit__arity2__ll_backend__frameopt__nondet_entry_info__arity0__ll_backend__frameopt__nondet_exit_info__arity0__,
MR_CTOR0_ADDR(ll_backend__frameopt, nondet_entry_info),
MR_CTOR0_ADDR(ll_backend__frameopt, nondet_exit_info)
}
},
{
{
MR_CTOR_ADDR(pair, pair, 2),
MR_CTOR0_ADDR(ll_backend__llds, label),
MR_CTOR0_ADDR(ll_backend__frameopt, block_needs_frame)
}
},
{
{
MR_CTOR_ADDR(tree234, tree234, 2),
MR_CTOR0_ADDR(ll_backend__llds, label),
MR_CTOR0_ADDR(ll_backend__frameopt, block_needs_frame)
}
},
{
{
MR_CTOR_ADDR(tree234, tree234, 2),
MR_CTOR0_ADDR(ll_backend__llds, label),
MR_TAG_COMMON(0,0,0)
}
},
{
{
MR_CTOR_ADDR(tree234, tree234, 2),
MR_CTOR0_ADDR(ll_backend__llds, label),
MR_CTOR0_ADDR(ll_backend__llds, label)
}
},
{
{
MR_CTOR_ADDR(tree234, tree234, 2),
MR_CTOR0_ADDR(ll_backend__llds, label),
MR_TAG_COMMON(0,1,1)
}
},
{
{
MR_CTOR_ADDR(tree234, tree234, 2),
MR_CTOR0_ADDR(ll_backend__llds, label),
MR_COMMON(7,0)
}
},
{
{
MR_CTOR_ADDR(tree234, tree234, 2),
MR_CTOR0_ADDR(ll_backend__llds, label),
MR_CTOR0_ADDR(ll_backend__frameopt, block_needs_frame)
}
},
{
{
MR_CTOR_ADDR(pair, pair, 2),
MR_CTOR0_ADDR(ll_backend__llds, label),
MR_CTOR0_ADDR(ll_backend__llds, label)
}
},
{
{
MR_CTOR_ADDR(pair, pair, 2),
MR_CTOR0_ADDR(ll_backend__llds, label),
MR_CTOR0_ADDR(ll_backend__frameopt, block_needs_frame)
}
},
{
{
MR_CTOR_ADDR(tree234, tree234, 2),
MR_CTOR0_ADDR(ll_backend__llds, label),
MR_CTOR0_ADDR(ll_backend__llds, label)
}
},
};

extern const MR_TypeCtorInfo_Struct mercury_data_list__type_ctor_info_list_1;
extern const MR_TypeCtorInfo_Struct mercury_data_ll_backend__llds__type_ctor_info_instruction_0;
extern const MR_TypeCtorInfo_Struct mercury_data_maybe__type_ctor_info_maybe_1;
extern const MR_TypeCtorInfo_Struct mercury_data_queue__type_ctor_info_queue_1;
extern const MR_TypeCtorInfo_Struct mercury_data_set_ordlist__type_ctor_info_set_ordlist_1;
static const struct mercury_type_1 mercury_common_1[11] =
{
{
{
MR_LIST_CTOR_ADDR,
MR_CTOR0_ADDR(ll_backend__llds, instruction)
}
},
{
{
MR_LIST_CTOR_ADDR,
MR_CTOR0_ADDR(ll_backend__llds, label)
}
},
{
{
MR_CTOR1_ADDR(maybe, maybe),
MR_CTOR0_ADDR(ll_backend__llds, label)
}
},
{
{
MR_CTOR1_ADDR(queue, queue),
MR_CTOR0_ADDR(ll_backend__llds, label)
}
},
{
{
MR_TAG_COMMON(0,3,0),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(0,3,1),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(0,3,2),
MR_tbmkword(0, 0)
}
},
{
{
MR_CTOR1_ADDR(set_ordlist, set_ordlist),
MR_CTOR0_ADDR(ll_backend__llds, label)
}
},
{
{
MR_LIST_CTOR_ADDR,
MR_COMMON(0,11)
}
},
{
{
MR_TAG_COMMON(0,3,3),
MR_tbmkword(0, 0)
}
},
{
{
MR_CTOR1_ADDR(maybe, maybe),
MR_CTOR0_ADDR(ll_backend__llds, label)
}
},
};

static const struct mercury_type_2 mercury_common_2[3] =
{
{
MR_string_const("could not delay frame creation", 30)
},
{
MR_string_const("delaying stack frame", 20)
},
{
MR_string_const("keeping stack frame", 19)
},
};

static const struct mercury_type_3 mercury_common_3[4] =
{
{
MR_TAG_COMMON(1,2,0),
MR_string_const("", 0)
},
{
MR_TAG_COMMON(1,2,1),
MR_string_const("", 0)
},
{
MR_TAG_COMMON(3,4,0),
MR_string_const("", 0)
},
{
MR_TAG_COMMON(1,2,2),
MR_string_const("", 0)
},
};

static const struct mercury_type_4 mercury_common_4[2] =
{
{
6,
MR_tbmkword(0, 0)
},
{
6,
MR_TAG_COMMON(0,15,0)
},
};

static const struct mercury_type_5 mercury_common_5[3] =
{
{
{
1,
1
}
},
{
{
0,
0
}
},
{
{
1,
0
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__ll_backend__frameopt__build_frame_block_map_14_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_ll_backend__frameopt__type_ctor_info_block_needs_frame_0;
static const MR_UserClosureId
mercury_data__closure_layout__ll_backend__frameopt__analyze_block_11_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_mdbcomp__prim_data__type_ctor_info_proc_label_0;
extern const MR_TypeCtorInfo_Struct mercury_data_ll_backend__llds__type_ctor_info_label_0;
static const MR_UserClosureId
mercury_data__closure_layout__ll_backend__frameopt__propagate_frame_requirement_to_successors_9_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__ll_backend__frameopt__propagate_frame_requirement_to_successors_9_0_2;
static const MR_UserClosureId
mercury_data__closure_layout__ll_backend__frameopt__process_frame_delay_11_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__ll_backend__frameopt__delay_frame_transform_13_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__ll_backend__frameopt__all_successors_need_frame_3_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__ll_backend__frameopt__all_successors_need_frame_3_0_2;
static const MR_UserClosureId
mercury_data__closure_layout__ll_backend__frameopt__describe_block_6_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__ll_backend__frameopt__describe_block_6_0_2;
static const MR_UserClosureId
mercury_data__closure_layout__ll_backend__frameopt__describe_block_6_0_3;
static const MR_UserClosureId
mercury_data__closure_layout__f_108_108_95_98_97_99_107_101_110_100_95_95_102_114_97_109_101_111_112_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_114_101_97_116_101_95_112_97_114_97_108_108_101_108_115_95_95_91_49_49_93_95_48_12_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__f_108_108_95_98_97_99_107_101_110_100_95_95_102_114_97_109_101_111_112_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_114_101_97_116_101_95_112_97_114_97_108_108_101_108_115_95_95_91_49_49_93_95_48_12_0_2;
static const MR_UserClosureId
mercury_data__closure_layout__f_108_108_95_98_97_99_107_101_110_100_95_95_102_114_97_109_101_111_112_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_114_101_97_116_101_95_112_97_114_97_108_108_101_108_115_95_95_91_49_49_93_95_48_12_0_3;
extern const MR_TypeCtorInfo_Struct mercury_data_private_builtin__type_ctor_info_typeclass_info_0;
static const struct mercury_type_6 mercury_common_6[14] =
{
{
(MR_Word *) &mercury_data__closure_layout__ll_backend__frameopt__build_frame_block_map_14_0_1,
(MR_Word *) (MR_Integer) 0,
2,
MR_CTOR0_ADDR(ll_backend__frameopt, block_needs_frame),
MR_CTOR0_ADDR(ll_backend__frameopt, block_needs_frame)
},
{
(MR_Word *) &mercury_data__closure_layout__ll_backend__frameopt__analyze_block_11_0_1,
(MR_Word *) (MR_Integer) 0,
2,
MR_CTOR0_ADDR(mdbcomp__prim_data, proc_label),
MR_CTOR0_ADDR(ll_backend__llds, label)
},
{
(MR_Word *) &mercury_data__closure_layout__ll_backend__frameopt__propagate_frame_requirement_to_successors_9_0_1,
(MR_Word *) (MR_Integer) 0,
2,
MR_COMMON(1,7),
MR_CTOR0_ADDR(ll_backend__llds, label)
},
{
(MR_Word *) &mercury_data__closure_layout__ll_backend__frameopt__propagate_frame_requirement_to_successors_9_0_2,
(MR_Word *) (MR_Integer) 0,
2,
MR_COMMON(1,7),
MR_CTOR0_ADDR(ll_backend__llds, label)
},
{
(MR_Word *) &mercury_data__closure_layout__ll_backend__frameopt__process_frame_delay_11_0_1,
(MR_Word *) (MR_Integer) 0,
2,
MR_CTOR0_ADDR(ll_backend__llds, label),
MR_CTOR0_ADDR(ll_backend__llds, label)
},
{
(MR_Word *) &mercury_data__closure_layout__ll_backend__frameopt__delay_frame_transform_13_0_1,
(MR_Word *) (MR_Integer) 0,
2,
MR_COMMON(0,12),
MR_CTOR0_ADDR(ll_backend__llds, label)
},
{
(MR_Word *) &mercury_data__closure_layout__ll_backend__frameopt__all_successors_need_frame_3_0_1,
(MR_Word *) (MR_Integer) 0,
2,
MR_COMMON(0,10),
MR_CTOR0_ADDR(ll_backend__llds, label)
},
{
(MR_Word *) &mercury_data__closure_layout__ll_backend__frameopt__all_successors_need_frame_3_0_2,
(MR_Word *) (MR_Integer) 0,
2,
MR_COMMON(0,10),
MR_CTOR0_ADDR(ll_backend__llds, label)
},
{
(MR_Word *) &mercury_data__closure_layout__ll_backend__frameopt__describe_block_6_0_1,
(MR_Word *) (MR_Integer) 0,
2,
MR_CTOR0_ADDR(ll_backend__llds, label),
MR_CTOR0_ADDR(ll_backend__llds, label)
},
{
(MR_Word *) &mercury_data__closure_layout__ll_backend__frameopt__describe_block_6_0_2,
(MR_Word *) (MR_Integer) 0,
2,
MR_COMMON(1,10),
MR_COMMON(1,10)
},
{
(MR_Word *) &mercury_data__closure_layout__ll_backend__frameopt__describe_block_6_0_3,
(MR_Word *) (MR_Integer) 0,
2,
MR_CTOR0_ADDR(ll_backend__frameopt, block_needs_frame),
MR_CTOR0_ADDR(ll_backend__frameopt, block_needs_frame)
},
{
(MR_Word *) &mercury_data__closure_layout__f_108_108_95_98_97_99_107_101_110_100_95_95_102_114_97_109_101_111_112_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_114_101_97_116_101_95_112_97_114_97_108_108_101_108_115_95_95_91_49_49_93_95_48_12_0_1,
(MR_Word *) (MR_Integer) 0,
2,
MR_CTOR0_ADDR(ll_backend__llds, label),
MR_CTOR0_ADDR(ll_backend__llds, label)
},
{
(MR_Word *) &mercury_data__closure_layout__f_108_108_95_98_97_99_107_101_110_100_95_95_102_114_97_109_101_111_112_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_114_101_97_116_101_95_112_97_114_97_108_108_101_108_115_95_95_91_49_49_93_95_48_12_0_2,
(MR_Word *) (MR_Integer) 0,
2,
MR_COMMON(1,10),
MR_COMMON(1,10)
},
{
(MR_Word *) &mercury_data__closure_layout__f_108_108_95_98_97_99_107_101_110_100_95_95_102_114_97_109_101_111_112_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_114_101_97_116_101_95_112_97_114_97_108_108_101_108_115_95_95_91_49_49_93_95_48_12_0_3,
MR_COMMON(8,0),
2,
MR_CTOR0_ADDR(private_builtin, typeclass_info),
MR_COMMON(7,1)
},
};

static const struct mercury_type_7 mercury_common_7[2] =
{
{
MR_CTOR_ADDR(ll_backend__frameopt, frame_block_info, 2),
1,
2
},
{
MR_CTOR_ADDR(ll_backend__frameopt, block_type, 2),
1,
2
},
};

static const struct mercury_type_8 mercury_common_8[2] =
{
{
{
2,
67631,
67663
}
},
{
{
2,
33,
65
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__ll_backend__frameopt__analyze_block_11_0_2;
static const struct mercury_type_9 mercury_common_9[1] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__ll_backend__frameopt__analyze_block_11_0_2,
MR_COMMON(8,0)
},
4,
{
MR_CTOR0_ADDR(private_builtin, typeclass_info),
MR_CTOR0_ADDR(ll_backend__llds, label),
MR_COMMON(0,9),
MR_COMMON(0,9)
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__ll_backend__frameopt__propagate_frame_requirement_to_predecessors_9_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_private_builtin__type_ctor_info_type_info_0;
static const MR_UserClosureId
mercury_data__closure_layout__ll_backend__frameopt__propagate_frame_requirement_to_predecessors_9_0_2;
static const MR_UserClosureId
mercury_data__closure_layout__ll_backend__frameopt__propagate_frame_requirement_to_predecessors_9_0_3;
static const struct mercury_type_10 mercury_common_10[3] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__ll_backend__frameopt__propagate_frame_requirement_to_predecessors_9_0_1,
MR_COMMON(8,1)
},
5,
{
MR_CTOR0_ADDR(private_builtin, type_info),
MR_CTOR0_ADDR(private_builtin, type_info),
MR_COMMON(0,9),
MR_COMMON(0,10),
MR_CTOR0_ADDR(ll_backend__llds, label)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__ll_backend__frameopt__propagate_frame_requirement_to_predecessors_9_0_2,
MR_COMMON(8,1)
},
5,
{
MR_CTOR0_ADDR(private_builtin, type_info),
MR_CTOR0_ADDR(private_builtin, type_info),
MR_COMMON(0,9),
MR_COMMON(0,10),
MR_CTOR0_ADDR(ll_backend__llds, label)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__ll_backend__frameopt__propagate_frame_requirement_to_predecessors_9_0_3,
MR_COMMON(8,1)
},
5,
{
MR_CTOR0_ADDR(private_builtin, type_info),
MR_CTOR0_ADDR(private_builtin, type_info),
MR_COMMON(0,9),
MR_COMMON(0,10),
MR_CTOR0_ADDR(ll_backend__llds, label)
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__ll_backend__frameopt__propagate_frame_requirement_to_predecessors_9_0_4;
extern const MR_TypeCtorInfo_Struct mercury_data_ll_backend__frameopt__type_ctor_info_can_transform_0;
static const struct mercury_type_11 mercury_common_11[1] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__ll_backend__frameopt__propagate_frame_requirement_to_predecessors_9_0_4,
MR_COMMON(8,1)
},
8,
{
MR_CTOR0_ADDR(private_builtin, type_info),
MR_CTOR0_ADDR(private_builtin, type_info),
MR_COMMON(0,9),
MR_CTOR0_ADDR(ll_backend__llds, label),
MR_COMMON(0,10),
MR_COMMON(0,10),
MR_CTOR0_ADDR(ll_backend__frameopt, can_transform),
MR_CTOR0_ADDR(ll_backend__frameopt, can_transform)
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__ll_backend__frameopt__transform_nostack_ordinary_block_13_0_1;
static const struct mercury_type_12 mercury_common_12[1] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__ll_backend__frameopt__transform_nostack_ordinary_block_13_0_1,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_COMMON(1,8),
MR_CTOR0_ADDR(ll_backend__llds, label),
MR_CTOR0_ADDR(ll_backend__llds, label)
}
},
};

static const struct mercury_type_13 mercury_common_13[1] =
{
{
MR_COMMON(6,5),
MR_ENTRY_AP(ll_backend__frameopt__key_block_needs_frame_2_0),
0
},
};

static const MR_UserClosureId
mercury_data__closure_layout__ll_backend__frameopt__delay_frame_transform_13_0_2;
extern const MR_TypeCtorInfo_Struct mercury_data_ll_backend__llds__type_ctor_info_instruction_0;
static const struct mercury_type_14 mercury_common_14[1] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__ll_backend__frameopt__delay_frame_transform_13_0_2,
MR_COMMON(8,0)
},
7,
{
MR_CTOR0_ADDR(private_builtin, typeclass_info),
MR_COMMON(0,9),
MR_COMMON(0,10),
MR_COMMON(0,13),
MR_CTOR0_ADDR(mdbcomp__prim_data, proc_label),
MR_CTOR0_ADDR(ll_backend__llds, label),
MR_CTOR0_ADDR(ll_backend__llds, instruction)
}
},
};

static const struct mercury_type_15 mercury_common_15[2] =
{
{
MR_tbmkword(0, 2)
},
{
MR_tbmkword(0, 0)
},
};

static const MR_EnumFunctorDesc mercury_data_ll_backend__frameopt__enum_functor_desc_block_needs_frame_0_0 = {
	"block_needs_frame",
	0
};

static const MR_EnumFunctorDesc mercury_data_ll_backend__frameopt__enum_functor_desc_block_needs_frame_0_1 = {
	"block_doesnt_need_frame",
	1
};

const MR_EnumFunctorDescPtr mercury_data_ll_backend__frameopt__enum_value_ordered_block_needs_frame_0[] = {
	&mercury_data_ll_backend__frameopt__enum_functor_desc_block_needs_frame_0_0,
	&mercury_data_ll_backend__frameopt__enum_functor_desc_block_needs_frame_0_1
};

const MR_EnumFunctorDescPtr mercury_data_ll_backend__frameopt__enum_name_ordered_block_needs_frame_0[] = {
	&mercury_data_ll_backend__frameopt__enum_functor_desc_block_needs_frame_0_1,
	&mercury_data_ll_backend__frameopt__enum_functor_desc_block_needs_frame_0_0
};

const MR_Integer mercury_data_ll_backend__frameopt__functor_number_map_block_needs_frame_0[] = {
	1,
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_ll_backend__frameopt__type_ctor_info_block_needs_frame_0 = {
	0,
	15,
	-1,
	MR_TYPECTOR_REP_ENUM,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___ll_backend__frameopt__block_needs_frame_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___ll_backend__frameopt__block_needs_frame_0_0)),
	"ll_backend.frameopt",
	"block_needs_frame",
	{ (void *)mercury_data_ll_backend__frameopt__enum_name_ordered_block_needs_frame_0 },
	{ (void *)mercury_data_ll_backend__frameopt__enum_value_ordered_block_needs_frame_0 },
	2,
	4,
	mercury_data_ll_backend__frameopt__functor_number_map_block_needs_frame_0
};

const MR_PseudoTypeInfo mercury_data_ll_backend__frameopt__field_types_block_type_2_0[] = {
	(MR_PseudoTypeInfo) 1
};

static const MR_DuFunctorDesc mercury_data_ll_backend__frameopt__du_functor_desc_block_type_2_0 = {
	"entry_block",
	1,
	1,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_ll_backend__frameopt__field_types_block_type_2_0,
	NULL,
	NULL,
	NULL
};
extern const MR_TypeCtorInfo_Struct mercury_data_ll_backend__frameopt__type_ctor_info_maybe_dummy_0;

const MR_PseudoTypeInfo mercury_data_ll_backend__frameopt__field_types_block_type_2_1[] = {
	(MR_PseudoTypeInfo) &mercury_data_ll_backend__frameopt__type_ctor_info_block_needs_frame_0,
	(MR_PseudoTypeInfo) &mercury_data_ll_backend__frameopt__type_ctor_info_maybe_dummy_0
};

static const MR_DuFunctorDesc mercury_data_ll_backend__frameopt__du_functor_desc_block_type_2_1 = {
	"ordinary_block",
	2,
	0,
	MR_SECTAG_NONE,
	1,
	-1,
	1,
	(MR_PseudoTypeInfo *) mercury_data_ll_backend__frameopt__field_types_block_type_2_1,
	NULL,
	NULL,
	NULL
};

const MR_PseudoTypeInfo mercury_data_ll_backend__frameopt__field_types_block_type_2_2[] = {
	(MR_PseudoTypeInfo) 2
};

static const MR_DuFunctorDesc mercury_data_ll_backend__frameopt__du_functor_desc_block_type_2_2 = {
	"exit_block",
	1,
	1,
	MR_SECTAG_NONE,
	2,
	-1,
	2,
	(MR_PseudoTypeInfo *) mercury_data_ll_backend__frameopt__field_types_block_type_2_2,
	NULL,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_ll_backend__frameopt__du_stag_ordered_block_type_2_0[] = {
	&mercury_data_ll_backend__frameopt__du_functor_desc_block_type_2_0

};

const MR_DuFunctorDescPtr mercury_data_ll_backend__frameopt__du_stag_ordered_block_type_2_1[] = {
	&mercury_data_ll_backend__frameopt__du_functor_desc_block_type_2_1

};

const MR_DuFunctorDescPtr mercury_data_ll_backend__frameopt__du_stag_ordered_block_type_2_2[] = {
	&mercury_data_ll_backend__frameopt__du_functor_desc_block_type_2_2

};

const MR_DuPtagLayout mercury_data_ll_backend__frameopt__du_ptag_ordered_block_type_2[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_ll_backend__frameopt__du_stag_ordered_block_type_2_0 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_ll_backend__frameopt__du_stag_ordered_block_type_2_1 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_ll_backend__frameopt__du_stag_ordered_block_type_2_2 }

};

const MR_DuFunctorDescPtr mercury_data_ll_backend__frameopt__du_name_ordered_block_type_2[] = {
	&mercury_data_ll_backend__frameopt__du_functor_desc_block_type_2_0,
	&mercury_data_ll_backend__frameopt__du_functor_desc_block_type_2_2,
	&mercury_data_ll_backend__frameopt__du_functor_desc_block_type_2_1
};

const MR_Integer mercury_data_ll_backend__frameopt__functor_number_map_block_type_2[] = {
	0,
	2,
	1 };
	
const MR_TypeCtorInfo_Struct mercury_data_ll_backend__frameopt__type_ctor_info_block_type_2 = {
	2,
	15,
	3,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___ll_backend__frameopt__block_type_2_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___ll_backend__frameopt__block_type_2_0)),
	"ll_backend.frameopt",
	"block_type",
	{ (void *)mercury_data_ll_backend__frameopt__du_name_ordered_block_type_2 },
	{ (void *)mercury_data_ll_backend__frameopt__du_ptag_ordered_block_type_2 },
	3,
	4,
	mercury_data_ll_backend__frameopt__functor_number_map_block_type_2
};

static const MR_EnumFunctorDesc mercury_data_ll_backend__frameopt__enum_functor_desc_can_transform_0_0 = {
	"can_transform",
	0
};

static const MR_EnumFunctorDesc mercury_data_ll_backend__frameopt__enum_functor_desc_can_transform_0_1 = {
	"cannot_transform",
	1
};

const MR_EnumFunctorDescPtr mercury_data_ll_backend__frameopt__enum_value_ordered_can_transform_0[] = {
	&mercury_data_ll_backend__frameopt__enum_functor_desc_can_transform_0_0,
	&mercury_data_ll_backend__frameopt__enum_functor_desc_can_transform_0_1
};

const MR_EnumFunctorDescPtr mercury_data_ll_backend__frameopt__enum_name_ordered_can_transform_0[] = {
	&mercury_data_ll_backend__frameopt__enum_functor_desc_can_transform_0_0,
	&mercury_data_ll_backend__frameopt__enum_functor_desc_can_transform_0_1
};

const MR_Integer mercury_data_ll_backend__frameopt__functor_number_map_can_transform_0[] = {
	0,
	1 };
	
const MR_TypeCtorInfo_Struct mercury_data_ll_backend__frameopt__type_ctor_info_can_transform_0 = {
	0,
	15,
	-1,
	MR_TYPECTOR_REP_ENUM,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___ll_backend__frameopt__can_transform_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___ll_backend__frameopt__can_transform_0_0)),
	"ll_backend.frameopt",
	"can_transform",
	{ (void *)mercury_data_ll_backend__frameopt__enum_name_ordered_can_transform_0 },
	{ (void *)mercury_data_ll_backend__frameopt__enum_value_ordered_can_transform_0 },
	2,
	4,
	mercury_data_ll_backend__frameopt__functor_number_map_can_transform_0
};
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_string_0;
extern const MR_TypeCtorInfo_Struct mercury_data_ll_backend__llds__type_ctor_info_stack_incr_kind_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_string_0;
extern const MR_TypeCtorInfo_Struct mercury_data_ll_backend__llds__type_ctor_info_stack_incr_kind_0;

const MR_PseudoTypeInfo mercury_data_ll_backend__frameopt__field_types_det_entry_info_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_string_0,
	(MR_PseudoTypeInfo) &mercury_data_ll_backend__llds__type_ctor_info_stack_incr_kind_0
};

static const MR_DuFunctorDesc mercury_data_ll_backend__frameopt__du_functor_desc_det_entry_info_0_0 = {
	"det_entry",
	3,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_ll_backend__frameopt__field_types_det_entry_info_0_0,
	NULL,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_ll_backend__frameopt__du_stag_ordered_det_entry_info_0_0[] = {
	&mercury_data_ll_backend__frameopt__du_functor_desc_det_entry_info_0_0

};

const MR_DuPtagLayout mercury_data_ll_backend__frameopt__du_ptag_ordered_det_entry_info_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_ll_backend__frameopt__du_stag_ordered_det_entry_info_0_0 }

};

const MR_DuFunctorDescPtr mercury_data_ll_backend__frameopt__du_name_ordered_det_entry_info_0[] = {
	&mercury_data_ll_backend__frameopt__du_functor_desc_det_entry_info_0_0
};

const MR_Integer mercury_data_ll_backend__frameopt__functor_number_map_det_entry_info_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_ll_backend__frameopt__type_ctor_info_det_entry_info_0 = {
	0,
	15,
	1,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___ll_backend__frameopt__det_entry_info_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___ll_backend__frameopt__det_entry_info_0_0)),
	"ll_backend.frameopt",
	"det_entry_info",
	{ (void *)mercury_data_ll_backend__frameopt__du_name_ordered_det_entry_info_0 },
	{ (void *)mercury_data_ll_backend__frameopt__du_ptag_ordered_det_entry_info_0 },
	1,
	4,
	mercury_data_ll_backend__frameopt__functor_number_map_det_entry_info_0
};
extern const MR_TypeCtorInfo_Struct mercury_data_ll_backend__llds__type_ctor_info_instruction_0;

static const MR_FA_TypeInfo_Struct1 mercury_data_list__ti_list_1ll_backend__llds__type_ctor_info_instruction_0 = {
	&mercury_data_list__type_ctor_info_list_1,
{	(MR_TypeInfo) &mercury_data_ll_backend__llds__type_ctor_info_instruction_0
}};

const MR_PseudoTypeInfo mercury_data_ll_backend__frameopt__field_types_det_exit_info_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_list__ti_list_1ll_backend__llds__type_ctor_info_instruction_0,
	(MR_PseudoTypeInfo) &mercury_data_list__ti_list_1ll_backend__llds__type_ctor_info_instruction_0,
	(MR_PseudoTypeInfo) &mercury_data_ll_backend__llds__type_ctor_info_instruction_0
};

static const MR_DuFunctorDesc mercury_data_ll_backend__frameopt__du_functor_desc_det_exit_info_0_0 = {
	"det_exit",
	3,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_ll_backend__frameopt__field_types_det_exit_info_0_0,
	NULL,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_ll_backend__frameopt__du_stag_ordered_det_exit_info_0_0[] = {
	&mercury_data_ll_backend__frameopt__du_functor_desc_det_exit_info_0_0

};

const MR_DuPtagLayout mercury_data_ll_backend__frameopt__du_ptag_ordered_det_exit_info_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_ll_backend__frameopt__du_stag_ordered_det_exit_info_0_0 }

};

const MR_DuFunctorDescPtr mercury_data_ll_backend__frameopt__du_name_ordered_det_exit_info_0[] = {
	&mercury_data_ll_backend__frameopt__du_functor_desc_det_exit_info_0_0
};

const MR_Integer mercury_data_ll_backend__frameopt__functor_number_map_det_exit_info_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_ll_backend__frameopt__type_ctor_info_det_exit_info_0 = {
	0,
	15,
	1,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___ll_backend__frameopt__det_exit_info_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___ll_backend__frameopt__det_exit_info_0_0)),
	"ll_backend.frameopt",
	"det_exit_info",
	{ (void *)mercury_data_ll_backend__frameopt__du_name_ordered_det_exit_info_0 },
	{ (void *)mercury_data_ll_backend__frameopt__du_ptag_ordered_det_exit_info_0 },
	1,
	4,
	mercury_data_ll_backend__frameopt__functor_number_map_det_exit_info_0
};
extern const MR_TypeCtorInfo_Struct mercury_data_ll_backend__frameopt__type_ctor_info_det_entry_info_0;
extern const MR_TypeCtorInfo_Struct mercury_data_ll_backend__frameopt__type_ctor_info_det_exit_info_0;

static const MR_FA_TypeInfo_Struct2 mercury_data_ll_backend__frameopt__ti_frame_block_info_2ll_backend__frameopt__type_ctor_info_det_entry_info_0ll_backend__frameopt__type_ctor_info_det_exit_info_0 = {
	&mercury_data_ll_backend__frameopt__type_ctor_info_frame_block_info_2,
{	(MR_TypeInfo) &mercury_data_ll_backend__frameopt__type_ctor_info_det_entry_info_0,
	(MR_TypeInfo) &mercury_data_ll_backend__frameopt__type_ctor_info_det_exit_info_0
}};

static const MR_FA_TypeInfo_Struct2 mercury_data_tree234__ti_tree234_2ll_backend__llds__type_ctor_info_label_0ll_backend__frameopt__ti_frame_block_info_2ll_backend__frameopt__type_ctor_info_det_entry_info_0ll_backend__frameopt__type_ctor_info_det_exit_info_0 = {
	&mercury_data_tree234__type_ctor_info_tree234_2,
{	(MR_TypeInfo) &mercury_data_ll_backend__llds__type_ctor_info_label_0,
	(MR_TypeInfo) &mercury_data_ll_backend__frameopt__ti_frame_block_info_2ll_backend__frameopt__type_ctor_info_det_entry_info_0ll_backend__frameopt__type_ctor_info_det_exit_info_0
}};

const MR_TypeCtorInfo_Struct mercury_data_ll_backend__frameopt__type_ctor_info_det_frame_block_map_0 = {
	0,
	15,
	-1,
	MR_TYPECTOR_REP_EQUIV_GROUND,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___ll_backend__frameopt__det_frame_block_map_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___ll_backend__frameopt__det_frame_block_map_0_0)),
	"ll_backend.frameopt",
	"det_frame_block_map",
	{ 0 },
	{ (void *)&mercury_data_tree234__ti_tree234_2ll_backend__llds__type_ctor_info_label_0ll_backend__frameopt__ti_frame_block_info_2ll_backend__frameopt__type_ctor_info_det_entry_info_0ll_backend__frameopt__type_ctor_info_det_exit_info_0 },
	-1,
	0,
	NULL
};

static const MR_FA_TypeInfo_Struct2 mercury_data_tree234__ti_tree234_2ll_backend__llds__type_ctor_info_label_0ll_backend__llds__type_ctor_info_label_0 = {
	&mercury_data_tree234__type_ctor_info_tree234_2,
{	(MR_TypeInfo) &mercury_data_ll_backend__llds__type_ctor_info_label_0,
	(MR_TypeInfo) &mercury_data_ll_backend__llds__type_ctor_info_label_0
}};

static const MR_NotagFunctorDesc mercury_data_ll_backend__frameopt__notag_functor_desc_exit_par_map_0 = {
	"exit_par_map",
	(MR_PseudoTypeInfo) &mercury_data_tree234__ti_tree234_2ll_backend__llds__type_ctor_info_label_0ll_backend__llds__type_ctor_info_label_0,
	NULL
};

const MR_Integer mercury_data_ll_backend__frameopt__functor_number_map_exit_par_map_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_ll_backend__frameopt__type_ctor_info_exit_par_map_0 = {
	0,
	15,
	-1,
	MR_TYPECTOR_REP_NOTAG_GROUND,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___ll_backend__frameopt__exit_par_map_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___ll_backend__frameopt__exit_par_map_0_0)),
	"ll_backend.frameopt",
	"exit_par_map",
	{ (void *)&mercury_data_ll_backend__frameopt__notag_functor_desc_exit_par_map_0 },
	{ (void *)&mercury_data_ll_backend__frameopt__notag_functor_desc_exit_par_map_0 },
	1,
	4,
	mercury_data_ll_backend__frameopt__functor_number_map_exit_par_map_0
};

static const MR_FA_TypeInfo_Struct1 mercury_data_maybe__ti_maybe_1ll_backend__llds__type_ctor_info_label_0 = {
	&mercury_data_maybe__type_ctor_info_maybe_1,
{	(MR_TypeInfo) &mercury_data_ll_backend__llds__type_ctor_info_label_0
}};

static const MR_FA_TypeInfo_Struct1 mercury_data_list__ti_list_1ll_backend__llds__type_ctor_info_label_0 = {
	&mercury_data_list__type_ctor_info_list_1,
{	(MR_TypeInfo) &mercury_data_ll_backend__llds__type_ctor_info_label_0
}};

static const MR_FA_PseudoTypeInfo_Struct2 mercury_data_ll_backend__frameopt__pti_block_type_2__pseudo_1__pseudo_2 = {
	&mercury_data_ll_backend__frameopt__type_ctor_info_block_type_2,
{	(MR_PseudoTypeInfo) 1,
	(MR_PseudoTypeInfo) 2
}};

const MR_PseudoTypeInfo mercury_data_ll_backend__frameopt__field_types_frame_block_info_2_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_ll_backend__llds__type_ctor_info_label_0,
	(MR_PseudoTypeInfo) &mercury_data_list__ti_list_1ll_backend__llds__type_ctor_info_instruction_0,
	(MR_PseudoTypeInfo) &mercury_data_maybe__ti_maybe_1ll_backend__llds__type_ctor_info_label_0,
	(MR_PseudoTypeInfo) &mercury_data_list__ti_list_1ll_backend__llds__type_ctor_info_label_0,
	(MR_PseudoTypeInfo) &mercury_data_maybe__ti_maybe_1ll_backend__llds__type_ctor_info_label_0,
	(MR_PseudoTypeInfo) &mercury_data_ll_backend__frameopt__pti_block_type_2__pseudo_1__pseudo_2
};

const MR_ConstString mercury_data_ll_backend__frameopt__field_names_frame_block_info_2_0[] = {
	"fb_label",
	"fb_instrs",
	"fb_fallen_into",
	"fb_jump_dests",
	"fb_fall_dest",
	"fb_type"
};

static const MR_DuFunctorDesc mercury_data_ll_backend__frameopt__du_functor_desc_frame_block_info_2_0 = {
	"frame_block_info",
	6,
	32,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_ll_backend__frameopt__field_types_frame_block_info_2_0,
	mercury_data_ll_backend__frameopt__field_names_frame_block_info_2_0,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_ll_backend__frameopt__du_stag_ordered_frame_block_info_2_0[] = {
	&mercury_data_ll_backend__frameopt__du_functor_desc_frame_block_info_2_0

};

const MR_DuPtagLayout mercury_data_ll_backend__frameopt__du_ptag_ordered_frame_block_info_2[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_ll_backend__frameopt__du_stag_ordered_frame_block_info_2_0 }

};

const MR_DuFunctorDescPtr mercury_data_ll_backend__frameopt__du_name_ordered_frame_block_info_2[] = {
	&mercury_data_ll_backend__frameopt__du_functor_desc_frame_block_info_2_0
};

const MR_Integer mercury_data_ll_backend__frameopt__functor_number_map_frame_block_info_2[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_ll_backend__frameopt__type_ctor_info_frame_block_info_2 = {
	2,
	15,
	1,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___ll_backend__frameopt__frame_block_info_2_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___ll_backend__frameopt__frame_block_info_2_0)),
	"ll_backend.frameopt",
	"frame_block_info",
	{ (void *)mercury_data_ll_backend__frameopt__du_name_ordered_frame_block_info_2 },
	{ (void *)mercury_data_ll_backend__frameopt__du_ptag_ordered_frame_block_info_2 },
	1,
	4,
	mercury_data_ll_backend__frameopt__functor_number_map_frame_block_info_2
};

static const MR_FA_PseudoTypeInfo_Struct2 mercury_data_ll_backend__frameopt__pti_frame_block_info_2__pseudo_1__pseudo_2 = {
	&mercury_data_ll_backend__frameopt__type_ctor_info_frame_block_info_2,
{	(MR_PseudoTypeInfo) 1,
	(MR_PseudoTypeInfo) 2
}};

static const MR_FA_PseudoTypeInfo_Struct2 mercury_data_tree234__pti_tree234_2__plain_ll_backend__llds__type_ctor_info_label_0__pseudo_ll_backend__frameopt__pti_frame_block_info_2__pseudo_1__pseudo_2 = {
	&mercury_data_tree234__type_ctor_info_tree234_2,
{	(MR_PseudoTypeInfo) &mercury_data_ll_backend__llds__type_ctor_info_label_0,
	(MR_PseudoTypeInfo) &mercury_data_ll_backend__frameopt__pti_frame_block_info_2__pseudo_1__pseudo_2
}};

const MR_TypeCtorInfo_Struct mercury_data_ll_backend__frameopt__type_ctor_info_frame_block_map_2 = {
	2,
	15,
	-1,
	MR_TYPECTOR_REP_EQUIV,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___ll_backend__frameopt__frame_block_map_2_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___ll_backend__frameopt__frame_block_map_2_0)),
	"ll_backend.frameopt",
	"frame_block_map",
	{ 0 },
	{ (void *)&mercury_data_tree234__pti_tree234_2__plain_ll_backend__llds__type_ctor_info_label_0__pseudo_ll_backend__frameopt__pti_frame_block_info_2__pseudo_1__pseudo_2 },
	-1,
	0,
	NULL
};

static const MR_EnumFunctorDesc mercury_data_ll_backend__frameopt__enum_functor_desc_maybe_dummy_0_0 = {
	"is_not_dummy",
	0
};

static const MR_EnumFunctorDesc mercury_data_ll_backend__frameopt__enum_functor_desc_maybe_dummy_0_1 = {
	"is_post_entry_dummy",
	1
};

static const MR_EnumFunctorDesc mercury_data_ll_backend__frameopt__enum_functor_desc_maybe_dummy_0_2 = {
	"is_pre_exit_dummy",
	2
};

const MR_EnumFunctorDescPtr mercury_data_ll_backend__frameopt__enum_value_ordered_maybe_dummy_0[] = {
	&mercury_data_ll_backend__frameopt__enum_functor_desc_maybe_dummy_0_0,
	&mercury_data_ll_backend__frameopt__enum_functor_desc_maybe_dummy_0_1,
	&mercury_data_ll_backend__frameopt__enum_functor_desc_maybe_dummy_0_2
};

const MR_EnumFunctorDescPtr mercury_data_ll_backend__frameopt__enum_name_ordered_maybe_dummy_0[] = {
	&mercury_data_ll_backend__frameopt__enum_functor_desc_maybe_dummy_0_0,
	&mercury_data_ll_backend__frameopt__enum_functor_desc_maybe_dummy_0_1,
	&mercury_data_ll_backend__frameopt__enum_functor_desc_maybe_dummy_0_2
};

const MR_Integer mercury_data_ll_backend__frameopt__functor_number_map_maybe_dummy_0[] = {
	0,
	1,
	2 };
	
const MR_TypeCtorInfo_Struct mercury_data_ll_backend__frameopt__type_ctor_info_maybe_dummy_0 = {
	0,
	15,
	-1,
	MR_TYPECTOR_REP_ENUM,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___ll_backend__frameopt__maybe_dummy_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___ll_backend__frameopt__maybe_dummy_0_0)),
	"ll_backend.frameopt",
	"maybe_dummy",
	{ (void *)mercury_data_ll_backend__frameopt__enum_name_ordered_maybe_dummy_0 },
	{ (void *)mercury_data_ll_backend__frameopt__enum_value_ordered_maybe_dummy_0 },
	3,
	4,
	mercury_data_ll_backend__frameopt__functor_number_map_maybe_dummy_0
};
extern const MR_TypeCtorInfo_Struct mercury_data_ll_backend__llds__type_ctor_info_code_addr_0;
extern const MR_TypeCtorInfo_Struct mercury_data_ll_backend__llds__type_ctor_info_code_addr_0;

const MR_PseudoTypeInfo mercury_data_ll_backend__frameopt__field_types_nondet_entry_info_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_string_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_ll_backend__llds__type_ctor_info_code_addr_0
};

static const MR_DuFunctorDesc mercury_data_ll_backend__frameopt__du_functor_desc_nondet_entry_info_0_0 = {
	"nondet_entry",
	3,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_ll_backend__frameopt__field_types_nondet_entry_info_0_0,
	NULL,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_ll_backend__frameopt__du_stag_ordered_nondet_entry_info_0_0[] = {
	&mercury_data_ll_backend__frameopt__du_functor_desc_nondet_entry_info_0_0

};

const MR_DuPtagLayout mercury_data_ll_backend__frameopt__du_ptag_ordered_nondet_entry_info_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_ll_backend__frameopt__du_stag_ordered_nondet_entry_info_0_0 }

};

const MR_DuFunctorDescPtr mercury_data_ll_backend__frameopt__du_name_ordered_nondet_entry_info_0[] = {
	&mercury_data_ll_backend__frameopt__du_functor_desc_nondet_entry_info_0_0
};

const MR_Integer mercury_data_ll_backend__frameopt__functor_number_map_nondet_entry_info_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_ll_backend__frameopt__type_ctor_info_nondet_entry_info_0 = {
	0,
	15,
	1,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___ll_backend__frameopt__nondet_entry_info_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___ll_backend__frameopt__nondet_entry_info_0_0)),
	"ll_backend.frameopt",
	"nondet_entry_info",
	{ (void *)mercury_data_ll_backend__frameopt__du_name_ordered_nondet_entry_info_0 },
	{ (void *)mercury_data_ll_backend__frameopt__du_ptag_ordered_nondet_entry_info_0 },
	1,
	4,
	mercury_data_ll_backend__frameopt__functor_number_map_nondet_entry_info_0
};

const MR_PseudoTypeInfo mercury_data_ll_backend__frameopt__field_types_nondet_exit_info_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_list__ti_list_1ll_backend__llds__type_ctor_info_instruction_0,
	(MR_PseudoTypeInfo) &mercury_data_ll_backend__llds__type_ctor_info_instruction_0
};

static const MR_DuFunctorDesc mercury_data_ll_backend__frameopt__du_functor_desc_nondet_exit_info_0_0 = {
	"nondet_plain_exit",
	2,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_ll_backend__frameopt__field_types_nondet_exit_info_0_0,
	NULL,
	NULL,
	NULL
};

const MR_PseudoTypeInfo mercury_data_ll_backend__frameopt__field_types_nondet_exit_info_0_1[] = {
	(MR_PseudoTypeInfo) &mercury_data_ll_backend__llds__type_ctor_info_instruction_0,
	(MR_PseudoTypeInfo) &mercury_data_ll_backend__llds__type_ctor_info_instruction_0,
	(MR_PseudoTypeInfo) &mercury_data_ll_backend__llds__type_ctor_info_instruction_0,
	(MR_PseudoTypeInfo) &mercury_data_list__ti_list_1ll_backend__llds__type_ctor_info_instruction_0,
	(MR_PseudoTypeInfo) &mercury_data_ll_backend__llds__type_ctor_info_instruction_0
};

static const MR_DuFunctorDesc mercury_data_ll_backend__frameopt__du_functor_desc_nondet_exit_info_0_1 = {
	"nondet_teardown_exit",
	5,
	0,
	MR_SECTAG_NONE,
	1,
	-1,
	1,
	(MR_PseudoTypeInfo *) mercury_data_ll_backend__frameopt__field_types_nondet_exit_info_0_1,
	NULL,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_ll_backend__frameopt__du_stag_ordered_nondet_exit_info_0_0[] = {
	&mercury_data_ll_backend__frameopt__du_functor_desc_nondet_exit_info_0_0

};

const MR_DuFunctorDescPtr mercury_data_ll_backend__frameopt__du_stag_ordered_nondet_exit_info_0_1[] = {
	&mercury_data_ll_backend__frameopt__du_functor_desc_nondet_exit_info_0_1

};

const MR_DuPtagLayout mercury_data_ll_backend__frameopt__du_ptag_ordered_nondet_exit_info_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_ll_backend__frameopt__du_stag_ordered_nondet_exit_info_0_0 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_ll_backend__frameopt__du_stag_ordered_nondet_exit_info_0_1 }

};

const MR_DuFunctorDescPtr mercury_data_ll_backend__frameopt__du_name_ordered_nondet_exit_info_0[] = {
	&mercury_data_ll_backend__frameopt__du_functor_desc_nondet_exit_info_0_0,
	&mercury_data_ll_backend__frameopt__du_functor_desc_nondet_exit_info_0_1
};

const MR_Integer mercury_data_ll_backend__frameopt__functor_number_map_nondet_exit_info_0[] = {
	0,
	1 };
	
const MR_TypeCtorInfo_Struct mercury_data_ll_backend__frameopt__type_ctor_info_nondet_exit_info_0 = {
	0,
	15,
	2,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___ll_backend__frameopt__nondet_exit_info_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___ll_backend__frameopt__nondet_exit_info_0_0)),
	"ll_backend.frameopt",
	"nondet_exit_info",
	{ (void *)mercury_data_ll_backend__frameopt__du_name_ordered_nondet_exit_info_0 },
	{ (void *)mercury_data_ll_backend__frameopt__du_ptag_ordered_nondet_exit_info_0 },
	2,
	4,
	mercury_data_ll_backend__frameopt__functor_number_map_nondet_exit_info_0
};

static const MR_FA_TypeInfo_Struct2 mercury_data_tree234__ti_tree234_2ll_backend__llds__type_ctor_info_label_0ll_backend__frameopt__type_ctor_info_block_needs_frame_0 = {
	&mercury_data_tree234__type_ctor_info_tree234_2,
{	(MR_TypeInfo) &mercury_data_ll_backend__llds__type_ctor_info_label_0,
	(MR_TypeInfo) &mercury_data_ll_backend__frameopt__type_ctor_info_block_needs_frame_0
}};

const MR_TypeCtorInfo_Struct mercury_data_ll_backend__frameopt__type_ctor_info_ord_needs_frame_0 = {
	0,
	15,
	-1,
	MR_TYPECTOR_REP_EQUIV_GROUND,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___ll_backend__frameopt__ord_needs_frame_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___ll_backend__frameopt__ord_needs_frame_0_0)),
	"ll_backend.frameopt",
	"ord_needs_frame",
	{ 0 },
	{ (void *)&mercury_data_tree234__ti_tree234_2ll_backend__llds__type_ctor_info_label_0ll_backend__frameopt__type_ctor_info_block_needs_frame_0 },
	-1,
	0,
	NULL
};

const MR_TypeCtorInfo_Struct mercury_data_ll_backend__frameopt__type_ctor_info_pre_exit_dummy_label_map_0 = {
	0,
	15,
	-1,
	MR_TYPECTOR_REP_EQUIV_GROUND,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___ll_backend__frameopt__pre_exit_dummy_label_map_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___ll_backend__frameopt__pre_exit_dummy_label_map_0_0)),
	"ll_backend.frameopt",
	"pre_exit_dummy_label_map",
	{ 0 },
	{ (void *)&mercury_data_tree234__ti_tree234_2ll_backend__llds__type_ctor_info_label_0ll_backend__llds__type_ctor_info_label_0 },
	-1,
	0,
	NULL
};

const MR_TypeCtorInfo_Struct mercury_data_ll_backend__frameopt__type_ctor_info_pred_map_0 = {
	0,
	15,
	-1,
	MR_TYPECTOR_REP_EQUIV_GROUND,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___ll_backend__frameopt__pred_map_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___ll_backend__frameopt__pred_map_0_0)),
	"ll_backend.frameopt",
	"pred_map",
	{ 0 },
	{ (void *)&mercury_data_tree234__ti_tree234_2ll_backend__llds__type_ctor_info_label_0ll_backend__llds__type_ctor_info_label_0 },
	-1,
	0,
	NULL
};

static const MR_FA_TypeInfo_Struct1 mercury_data_queue__ti_queue_1ll_backend__llds__type_ctor_info_label_0 = {
	&mercury_data_queue__type_ctor_info_queue_1,
{	(MR_TypeInfo) &mercury_data_ll_backend__llds__type_ctor_info_label_0
}};

const MR_TypeCtorInfo_Struct mercury_data_ll_backend__frameopt__type_ctor_info_prop_queue_0 = {
	0,
	15,
	-1,
	MR_TYPECTOR_REP_EQUIV_GROUND,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___ll_backend__frameopt__prop_queue_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___ll_backend__frameopt__prop_queue_0_0)),
	"ll_backend.frameopt",
	"prop_queue",
	{ 0 },
	{ (void *)&mercury_data_queue__ti_queue_1ll_backend__llds__type_ctor_info_label_0 },
	-1,
	0,
	NULL
};

static const MR_FA_TypeInfo_Struct2 mercury_data_tree234__ti_tree234_2ll_backend__llds__type_ctor_info_label_0list__ti_list_1ll_backend__llds__type_ctor_info_label_0 = {
	&mercury_data_tree234__type_ctor_info_tree234_2,
{	(MR_TypeInfo) &mercury_data_ll_backend__llds__type_ctor_info_label_0,
	(MR_TypeInfo) &mercury_data_list__ti_list_1ll_backend__llds__type_ctor_info_label_0
}};

const MR_TypeCtorInfo_Struct mercury_data_ll_backend__frameopt__type_ctor_info_rev_map_0 = {
	0,
	15,
	-1,
	MR_TYPECTOR_REP_EQUIV_GROUND,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___ll_backend__frameopt__rev_map_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___ll_backend__frameopt__rev_map_0_0)),
	"ll_backend.frameopt",
	"rev_map",
	{ 0 },
	{ (void *)&mercury_data_tree234__ti_tree234_2ll_backend__llds__type_ctor_info_label_0list__ti_list_1ll_backend__llds__type_ctor_info_label_0 },
	-1,
	0,
	NULL
};

static const MR_NotagFunctorDesc mercury_data_ll_backend__frameopt__notag_functor_desc_setup_par_map_0 = {
	"setup_par_map",
	(MR_PseudoTypeInfo) &mercury_data_tree234__ti_tree234_2ll_backend__llds__type_ctor_info_label_0ll_backend__llds__type_ctor_info_label_0,
	NULL
};

const MR_Integer mercury_data_ll_backend__frameopt__functor_number_map_setup_par_map_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_ll_backend__frameopt__type_ctor_info_setup_par_map_0 = {
	0,
	15,
	-1,
	MR_TYPECTOR_REP_NOTAG_GROUND,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___ll_backend__frameopt__setup_par_map_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___ll_backend__frameopt__setup_par_map_0_0)),
	"ll_backend.frameopt",
	"setup_par_map",
	{ (void *)&mercury_data_ll_backend__frameopt__notag_functor_desc_setup_par_map_0 },
	{ (void *)&mercury_data_ll_backend__frameopt__notag_functor_desc_setup_par_map_0 },
	1,
	4,
	mercury_data_ll_backend__frameopt__functor_number_map_setup_par_map_0
};

const MR_BaseTypeclassInfo mercury_data_base_typeclass_info_ll_backend__frameopt__block_entry_exit__arity2__ll_backend__frameopt__nondet_entry_info__arity0__ll_backend__frameopt__nondet_exit_info__arity0__[] = {
	(MR_Code *) 0,
	(MR_Code *) 0,
	(MR_Code *) 0,
	(MR_Code *) 2,
	(MR_Code *) 6,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(ll_backend__frameopt__ClassMethod_for_ll_backend__frameopt__block_entry_exit____ll_backend__frameopt__nondet_entry_info__arity0__ll_backend__frameopt__nondet_exit_info__arity0______ll_backend__frameopt__detect_entry_4_4_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(ll_backend__frameopt__ClassMethod_for_ll_backend__frameopt__block_entry_exit____ll_backend__frameopt__nondet_entry_info__arity0__ll_backend__frameopt__nondet_exit_info__arity0______ll_backend__frameopt__detect_exit_6_6_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(fn__ll_backend__frameopt__ClassMethod_for_ll_backend__frameopt__block_entry_exit____ll_backend__frameopt__nondet_entry_info__arity0__ll_backend__frameopt__nondet_exit_info__arity0______ll_backend__frameopt__late_setup_code_1_1_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(fn__ll_backend__frameopt__ClassMethod_for_ll_backend__frameopt__block_entry_exit____ll_backend__frameopt__nondet_entry_info__arity0__ll_backend__frameopt__nondet_exit_info__arity0______ll_backend__frameopt__non_teardown_exit_code_1_1_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(fn__ll_backend__frameopt__ClassMethod_for_ll_backend__frameopt__block_entry_exit____ll_backend__frameopt__nondet_entry_info__arity0__ll_backend__frameopt__nondet_exit_info__arity0______ll_backend__frameopt__describe_entry_1_1_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(fn__ll_backend__frameopt__ClassMethod_for_ll_backend__frameopt__block_entry_exit____ll_backend__frameopt__nondet_entry_info__arity0__ll_backend__frameopt__nondet_exit_info__arity0______ll_backend__frameopt__describe_exit_2_2_0))
};

const MR_BaseTypeclassInfo mercury_data_base_typeclass_info_ll_backend__frameopt__block_entry_exit__arity2__ll_backend__frameopt__det_entry_info__arity0__ll_backend__frameopt__det_exit_info__arity0__[] = {
	(MR_Code *) 0,
	(MR_Code *) 0,
	(MR_Code *) 0,
	(MR_Code *) 2,
	(MR_Code *) 6,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(ll_backend__frameopt__ClassMethod_for_ll_backend__frameopt__block_entry_exit____ll_backend__frameopt__det_entry_info__arity0__ll_backend__frameopt__det_exit_info__arity0______ll_backend__frameopt__detect_entry_4_4_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(ll_backend__frameopt__ClassMethod_for_ll_backend__frameopt__block_entry_exit____ll_backend__frameopt__det_entry_info__arity0__ll_backend__frameopt__det_exit_info__arity0______ll_backend__frameopt__detect_exit_6_6_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(fn__ll_backend__frameopt__ClassMethod_for_ll_backend__frameopt__block_entry_exit____ll_backend__frameopt__det_entry_info__arity0__ll_backend__frameopt__det_exit_info__arity0______ll_backend__frameopt__late_setup_code_1_1_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(fn__ll_backend__frameopt__ClassMethod_for_ll_backend__frameopt__block_entry_exit____ll_backend__frameopt__det_entry_info__arity0__ll_backend__frameopt__det_exit_info__arity0______ll_backend__frameopt__non_teardown_exit_code_1_1_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(fn__ll_backend__frameopt__ClassMethod_for_ll_backend__frameopt__block_entry_exit____ll_backend__frameopt__det_entry_info__arity0__ll_backend__frameopt__det_exit_info__arity0______ll_backend__frameopt__describe_entry_1_1_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(fn__ll_backend__frameopt__ClassMethod_for_ll_backend__frameopt__block_entry_exit____ll_backend__frameopt__det_entry_info__arity0__ll_backend__frameopt__det_exit_info__arity0______ll_backend__frameopt__describe_exit_2_2_0))
};

const MR_ConstString mercury_data_ll_backend__frameopt__type_class_id_var_names_block_entry_exit_2[] = {
	"En",
	"Ex",
};

const MR_TypeClassMethod mercury_data_ll_backend__frameopt__type_class_id_method_ids_block_entry_exit_2[] = {
	{ "detect_entry", 4, MR_PREDICATE },
	{ "detect_exit", 6, MR_PREDICATE },
	{ "late_setup_code", 2, MR_FUNCTION },
	{ "non_teardown_exit_code", 2, MR_FUNCTION },
	{ "describe_entry", 2, MR_FUNCTION },
	{ "describe_exit", 3, MR_FUNCTION },
};

static const MR_TypeClassId mercury_data_ll_backend__frameopt__type_class_id_block_entry_exit_2 = {
	"ll_backend.frameopt",
	"block_entry_exit",
	2,
	2,
	6,
	mercury_data_ll_backend__frameopt__type_class_id_var_names_block_entry_exit_2,
	mercury_data_ll_backend__frameopt__type_class_id_method_ids_block_entry_exit_2
};

const MR_TypeClassDeclStruct mercury_data_ll_backend__frameopt__type_class_decl_block_entry_exit_2 = {
	&mercury_data_ll_backend__frameopt__type_class_id_block_entry_exit_2,
	0,
	0,
	NULL
};


static const MR_UserClosureId
mercury_data__closure_layout__f_108_108_95_98_97_99_107_101_110_100_95_95_102_114_97_109_101_111_112_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_114_101_97_116_101_95_112_97_114_97_108_108_101_108_115_95_95_91_49_49_93_95_48_12_0_3 = {
{
MR_PREDICATE,
"ll_backend.frameopt",
"ll_backend.frameopt",
"lambda_frameopt_m_2072",
2,
0
},
"ll_backend.frameopt",
"frameopt.m",
2072,
"107"
};

static const MR_UserClosureId
mercury_data__closure_layout__f_108_108_95_98_97_99_107_101_110_100_95_95_102_114_97_109_101_111_112_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_114_101_97_116_101_95_112_97_114_97_108_108_101_108_115_95_95_91_49_49_93_95_48_12_0_2 = {
{
MR_PREDICATE,
"ll_backend.frameopt",
"ll_backend.frameopt",
"lambda_frameopt_m_2031",
2,
0
},
"ll_backend.frameopt",
"frameopt.m",
2031,
"40"
};

static const MR_UserClosureId
mercury_data__closure_layout__f_108_108_95_98_97_99_107_101_110_100_95_95_102_114_97_109_101_111_112_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_114_101_97_116_101_95_112_97_114_97_108_108_101_108_115_95_95_91_49_49_93_95_48_12_0_1 = {
{
MR_PREDICATE,
"ll_backend.frameopt",
"ll_backend.frameopt",
"lambda_frameopt_m_2028",
2,
0
},
"ll_backend.frameopt",
"frameopt.m",
2028,
"32"
};

static const MR_UserClosureId
mercury_data__closure_layout__ll_backend__frameopt__describe_block_6_0_3 = {
{
MR_PREDICATE,
"ll_backend.frameopt",
"ll_backend.frameopt",
"lambda_frameopt_m_2274",
2,
0
},
"ll_backend.frameopt",
"frameopt.m",
2274,
"97"
};

static const MR_UserClosureId
mercury_data__closure_layout__ll_backend__frameopt__describe_block_6_0_2 = {
{
MR_PREDICATE,
"ll_backend.frameopt",
"ll_backend.frameopt",
"lambda_frameopt_m_2289",
2,
0
},
"ll_backend.frameopt",
"frameopt.m",
2289,
"116"
};

static const MR_UserClosureId
mercury_data__closure_layout__ll_backend__frameopt__describe_block_6_0_1 = {
{
MR_PREDICATE,
"ll_backend.frameopt",
"ll_backend.frameopt",
"lambda_frameopt_m_2214",
2,
0
},
"ll_backend.frameopt",
"frameopt.m",
2214,
"10"
};

static const MR_UserClosureId
mercury_data__closure_layout__ll_backend__frameopt__all_successors_need_frame_3_0_2 = {
{
MR_PREDICATE,
"ll_backend.frameopt",
"ll_backend.frameopt",
"label_needs_frame",
2,
0
},
"ll_backend.frameopt",
"frameopt.m",
1776,
"7"
};

static const MR_UserClosureId
mercury_data__closure_layout__ll_backend__frameopt__all_successors_need_frame_3_0_1 = {
{
MR_PREDICATE,
"ll_backend.frameopt",
"ll_backend.frameopt",
"label_needs_frame",
2,
0
},
"ll_backend.frameopt",
"frameopt.m",
1776,
"7"
};

static const MR_UserClosureId
mercury_data__closure_layout__ll_backend__frameopt__delay_frame_transform_13_0_2 = {
{
MR_PREDICATE,
"ll_backend.frameopt",
"ll_backend.frameopt",
"describe_block",
6,
0
},
"ll_backend.frameopt",
"frameopt.m",
1562,
"59"
};

static const MR_UserClosureId
mercury_data__closure_layout__ll_backend__frameopt__delay_frame_transform_13_0_1 = {
{
MR_PREDICATE,
"ll_backend.frameopt",
"ll_backend.frameopt",
"key_block_needs_frame",
2,
0
},
"ll_backend.frameopt",
"frameopt.m",
1538,
"26"
};

static const MR_UserClosureId
mercury_data__closure_layout__ll_backend__frameopt__transform_nostack_ordinary_block_13_0_1 = {
{
MR_PREDICATE,
"ll_backend.frameopt",
"ll_backend.frameopt",
"no_disagreement",
3,
0
},
"ll_backend.frameopt",
"frameopt.m",
1906,
"22"
};

static const MR_UserClosureId
mercury_data__closure_layout__ll_backend__frameopt__process_frame_delay_11_0_1 = {
{
MR_PREDICATE,
"ll_backend.frameopt",
"ll_backend.frameopt",
"lambda_frameopt_m_1825",
2,
0
},
"ll_backend.frameopt",
"frameopt.m",
1825,
"31"
};

static const MR_UserClosureId
mercury_data__closure_layout__ll_backend__frameopt__propagate_frame_requirement_to_predecessors_9_0_4 = {
{
MR_PREDICATE,
"ll_backend.frameopt",
"ll_backend.frameopt",
"record_frame_need",
6,
0
},
"ll_backend.frameopt",
"frameopt.m",
1740,
"44"
};

static const MR_UserClosureId
mercury_data__closure_layout__ll_backend__frameopt__propagate_frame_requirement_to_predecessors_9_0_3 = {
{
MR_PREDICATE,
"ll_backend.frameopt",
"ll_backend.frameopt",
"all_successors_need_frame",
3,
0
},
"ll_backend.frameopt",
"frameopt.m",
1738,
"42"
};

static const MR_UserClosureId
mercury_data__closure_layout__ll_backend__frameopt__propagate_frame_requirement_to_predecessors_9_0_2 = {
{
MR_PREDICATE,
"ll_backend.frameopt",
"ll_backend.frameopt",
"all_successors_need_frame",
3,
0
},
"ll_backend.frameopt",
"frameopt.m",
1738,
"42"
};

static const MR_UserClosureId
mercury_data__closure_layout__ll_backend__frameopt__propagate_frame_requirement_to_predecessors_9_0_1 = {
{
MR_PREDICATE,
"ll_backend.frameopt",
"ll_backend.frameopt",
"all_successors_need_frame",
3,
0
},
"ll_backend.frameopt",
"frameopt.m",
1738,
"42"
};

static const MR_UserClosureId
mercury_data__closure_layout__ll_backend__frameopt__propagate_frame_requirement_to_successors_9_0_2 = {
{
MR_PREDICATE,
"ll_backend.frameopt",
"ll_backend.frameopt",
"lambda_frameopt_m_1691",
2,
0
},
"ll_backend.frameopt",
"frameopt.m",
1691,
"43"
};

static const MR_UserClosureId
mercury_data__closure_layout__ll_backend__frameopt__propagate_frame_requirement_to_successors_9_0_1 = {
{
MR_PREDICATE,
"ll_backend.frameopt",
"ll_backend.frameopt",
"lambda_frameopt_m_1691",
2,
0
},
"ll_backend.frameopt",
"frameopt.m",
1691,
"43"
};

static const MR_UserClosureId
mercury_data__closure_layout__ll_backend__frameopt__analyze_block_11_0_2 = {
{
MR_PREDICATE,
"ll_backend.frameopt",
"ll_backend.frameopt",
"lambda_frameopt_m_1252",
4,
0
},
"ll_backend.frameopt",
"frameopt.m",
1252,
"111"
};

static const MR_UserClosureId
mercury_data__closure_layout__ll_backend__frameopt__analyze_block_11_0_1 = {
{
MR_PREDICATE,
"ll_backend.frameopt",
"ll_backend.frameopt",
"local_label",
2,
0
},
"ll_backend.frameopt",
"frameopt.m",
1228,
"85"
};

static const MR_UserClosureId
mercury_data__closure_layout__ll_backend__frameopt__build_frame_block_map_14_0_1 = {
{
MR_PREDICATE,
"ll_backend.frameopt",
"ll_backend.frameopt",
"lambda_frameopt_m_684",
2,
0
},
"ll_backend.frameopt",
"frameopt.m",
684,
"117"
};


MR_decl_entry(fn__f_108_105_115_116_95_95_43_43_2_0);

MR_BEGIN_MODULE(ll_backend__frameopt_module0)
	MR_init_entry1(ll_backend__frameopt__maybe_add_comments_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__frameopt__maybe_add_comments_5_0);
	MR_init_label3(ll_backend__frameopt__maybe_add_comments_5_0,16,4,5)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'maybe_add_comments'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__frameopt__maybe_add_comments_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(ll_backend__frameopt__maybe_add_comments_5_0_i16);
	}
	MR_r1 = MR_r3;
	MR_r2 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(ll_backend__frameopt__maybe_add_comments_5_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		ll_backend__frameopt__maybe_add_comments_5_0_i4);
MR_def_label(ll_backend__frameopt__maybe_add_comments_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = (MR_Word) MR_TAG_COMMON(1,1,4);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		ll_backend__frameopt__maybe_add_comments_5_0_i5);
MR_def_label(ll_backend__frameopt__maybe_add_comments_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 1;
	MR_decr_sp_and_return(2);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__ll_backend__opt_util__can_instr_branch_away_1_0);
MR_decl_entry(counter__allocate_3_0);

MR_BEGIN_MODULE(ll_backend__frameopt_module1)
	MR_init_entry1(ll_backend__frameopt__divide_into_basic_blocks_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__frameopt__divide_into_basic_blocks_5_0);
	MR_init_label8(ll_backend__frameopt__divide_into_basic_blocks_5_0,55,5,8,10,14,18,4,22)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'divide_into_basic_blocks'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__frameopt__divide_into_basic_blocks_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(ll_backend__frameopt__divide_into_basic_blocks_5_0_i55);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = MR_r3;
	MR_proceed();
MR_def_label(ll_backend__frameopt__divide_into_basic_blocks_5_0,55)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(3) = MR_tfield(1, MR_r1, 1);
	MR_sv(2) = MR_tfield(1, MR_r1, 0);
	MR_sv(4) = MR_r2;
	MR_sv(1) = MR_r3;
	MR_r1 = MR_tfield(0, MR_sv(2), 0);
	MR_np_call_localret_ent(fn__ll_backend__opt_util__can_instr_branch_away_1_0,
		ll_backend__frameopt__divide_into_basic_blocks_5_0_i5);
MR_def_label(ll_backend__frameopt__divide_into_basic_blocks_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(ll_backend__frameopt__divide_into_basic_blocks_5_0_i4);
	}
	if (MR_LTAGS_TESTR(MR_sv(3),0,0)) {
		MR_GOTO_LAB(ll_backend__frameopt__divide_into_basic_blocks_5_0_i8);
	}
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = MR_sv(2);
	MR_tfield(1, MR_r1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = MR_sv(1);
	MR_decr_sp_and_return(5);
MR_def_label(ll_backend__frameopt__divide_into_basic_blocks_5_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_sv(3);
	MR_tempr1 = MR_tfield(0, MR_tfield(1, MR_tempr2, 0), 0);
	if (MR_RTAGS_TESTR(MR_tempr1,3,5)) {
		MR_GOTO_LAB(ll_backend__frameopt__divide_into_basic_blocks_5_0_i10);
	}
	MR_r1 = MR_tempr2;
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(1);
	}
	MR_np_localcall_lab(ll_backend__frameopt__divide_into_basic_blocks_5_0,
		ll_backend__frameopt__divide_into_basic_blocks_5_0_i22);
MR_def_label(ll_backend__frameopt__divide_into_basic_blocks_5_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(counter__allocate_3_0,
		ll_backend__frameopt__divide_into_basic_blocks_5_0_i14);
MR_def_label(ll_backend__frameopt__divide_into_basic_blocks_5_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tfield(0, MR_tempr1, 1) = MR_sv(4);
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 5;
	MR_tfield(3, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr3, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr3, 0) = MR_tempr2;
	MR_tfield(0, MR_tempr3, 1) = (MR_Word) MR_string_const("", 0);
	MR_sv(4) = MR_tempr3;
	MR_r1 = MR_sv(3);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tfield(0, MR_tempr1, 1);
	MR_r3 = MR_tempr2;
	}
	MR_np_localcall_lab(ll_backend__frameopt__divide_into_basic_blocks_5_0,
		ll_backend__frameopt__divide_into_basic_blocks_5_0_i18);
MR_def_label(ll_backend__frameopt__divide_into_basic_blocks_5_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(4);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = MR_sv(2);
	MR_tfield(1, MR_r1, 1) = MR_tempr1;
	MR_decr_sp_and_return(5);
	}
MR_def_label(ll_backend__frameopt__divide_into_basic_blocks_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(1);
	MR_np_localcall_lab(ll_backend__frameopt__divide_into_basic_blocks_5_0,
		ll_backend__frameopt__divide_into_basic_blocks_5_0_i22);
MR_def_label(ll_backend__frameopt__divide_into_basic_blocks_5_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(5);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(map__lookup_3_0);
MR_decl_entry(list__split_last_3_0);
MR_decl_entry(__Unify___ll_backend__llds__label_0_0);

MR_BEGIN_MODULE(ll_backend__frameopt_module2)
	MR_init_entry1(ll_backend__frameopt__flatten_block_seq_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__frameopt__flatten_block_seq_3_0);
	MR_init_label6(ll_backend__frameopt__flatten_block_seq_3_0,59,4,6,8,13,7)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'flatten_block_seq'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__frameopt__flatten_block_seq_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r3,0,0)) {
		MR_GOTO_LAB(ll_backend__frameopt__flatten_block_seq_3_0_i59);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(ll_backend__frameopt__flatten_block_seq_3_0,59)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r4;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(2) = MR_tfield(1, MR_tempr1, 0);
	MR_sv(3) = MR_tfield(1, MR_tempr1, 1);
	MR_sv(4) = MR_r1;
	MR_sv(5) = MR_r2;
	MR_r3 = MR_sv(3);
	}
	MR_np_localcall_lab(ll_backend__frameopt__flatten_block_seq_3_0,
		ll_backend__frameopt__flatten_block_seq_3_0_i4);
MR_def_label(ll_backend__frameopt__flatten_block_seq_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 3);
	MR_tfield(0, MR_r2, 0) = (MR_Word) MR_CTOR_ADDR(ll_backend__frameopt, frame_block_info, 2);
	MR_tfield(0, MR_r2, 1) = MR_sv(4);
	MR_tfield(0, MR_r2, 2) = MR_sv(5);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, label);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(2);
	}
	MR_np_call_localret_ent(map__lookup_3_0,
		ll_backend__frameopt__flatten_block_seq_3_0_i6);
MR_def_label(ll_backend__frameopt__flatten_block_seq_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_tfield(0, MR_r1, 1);
	MR_sv(2) = MR_r2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	MR_np_call_localret_ent(list__split_last_3_0,
		ll_backend__frameopt__flatten_block_seq_3_0_i8);
MR_def_label(ll_backend__frameopt__flatten_block_seq_3_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__frameopt__flatten_block_seq_3_0_i7);
	}
	if (MR_LTAGS_TEST(MR_sv(3),0,0)) {
		MR_GOTO_LAB(ll_backend__frameopt__flatten_block_seq_3_0_i7);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(0, MR_r3, 0);
	if (MR_RTAGS_TESTR(MR_tempr1,3,6)) {
		MR_GOTO_LAB(ll_backend__frameopt__flatten_block_seq_3_0_i7);
	}
	MR_tempr2 = MR_tfield(3, MR_tempr1, 1);
	if (MR_PTAG_TESTR(MR_tempr2,1)) {
		MR_GOTO_LAB(ll_backend__frameopt__flatten_block_seq_3_0_i7);
	}
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r2;
	MR_r1 = MR_tfield(1, MR_tempr1, 0);
	MR_r2 = MR_tfield(1, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(__Unify___ll_backend__llds__label_0_0,
		ll_backend__frameopt__flatten_block_seq_3_0_i13);
MR_def_label(ll_backend__frameopt__flatten_block_seq_3_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__frameopt__flatten_block_seq_3_0_i7);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(1);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(fn__f_108_105_115_116_95_95_43_43_2_0);
MR_def_label(ll_backend__frameopt__flatten_block_seq_3_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(1);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(fn__f_108_105_115_116_95_95_43_43_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_declare_entry(mercury__do_call_class_method_1);

MR_BEGIN_MODULE(ll_backend__frameopt_module3)
	MR_init_entry1(ll_backend__frameopt__detect_entry_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__frameopt__detect_entry_4_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'detect_entry'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__frameopt__detect_entry_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r2;
	MR_r2 = (MR_Integer) 1;
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(ll_backend__frameopt__detect_entry_4_0));
	MR_np_tailcall_ent(do_call_class_method_1);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_declare_entry(mercury__do_call_class_method_2);

MR_BEGIN_MODULE(ll_backend__frameopt_module4)
	MR_init_entry1(ll_backend__frameopt__detect_exit_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__frameopt__detect_exit_6_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'detect_exit'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__frameopt__detect_exit_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_r3 = MR_r2;
	MR_r4 = MR_tempr1;
	MR_r2 = (MR_Integer) 2;
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(ll_backend__frameopt__detect_exit_6_0));
	MR_np_tailcall_ent(do_call_class_method_2);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(map__det_insert_4_0);
MR_decl_entry(private_builtin__type_info_from_typeclass_info_3_0);
MR_decl_entry(builtin__unify_2_0);
MR_decl_entry(require__expect_4_0);
MR_decl_entry(ll_backend__opt_util__skip_to_next_label_3_0);
MR_decl_entry(list__last_2_0);
MR_decl_entry(fn__ll_backend__opt_util__can_instr_fall_through_1_0);
MR_decl_entry(require__unexpected_3_0);

MR_BEGIN_MODULE(ll_backend__frameopt_module5)
	MR_init_entry1(ll_backend__frameopt__build_frame_block_map_14_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__frameopt__build_frame_block_map_14_0);
	MR_init_label10(ll_backend__frameopt__build_frame_block_map_14_0,3,7,8,6,10,12,13,15,22,25)
	MR_init_label10(ll_backend__frameopt__build_frame_block_map_14_0,39,55,56,57,58,60,61,9,66,68)
	MR_init_label10(ll_backend__frameopt__build_frame_block_map_14_0,70,77,78,75,85,93,95,96,97,99)
	MR_init_label10(ll_backend__frameopt__build_frame_block_map_14_0,100,65,103,104,109,111,113,108,117,118)
	MR_init_label4(ll_backend__frameopt__build_frame_block_map_14_0,119,120,122,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'build_frame_block_map'/14 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__frameopt__build_frame_block_map_14_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(ll_backend__frameopt__build_frame_block_map_14_0_i3);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = MR_r7;
	MR_r3 = MR_r8;
	MR_r4 = MR_r9;
	MR_r5 = MR_r10;
	MR_proceed();
MR_def_label(ll_backend__frameopt__build_frame_block_map_14_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(0, MR_tfield(1, MR_r2, 0), 0);
	MR_r11 = MR_tempr1;
	if (MR_RTAGS_TESTR(MR_tempr1,3,5)) {
		MR_GOTO_LAB(ll_backend__frameopt__build_frame_block_map_14_0_i4);
	}
	MR_incr_sp(18);
	MR_sv(18) = (MR_Word) MR_succip;
	if (MR_LTAGS_TESTR(MR_r4,0,0)) {
		MR_GOTO_LAB(ll_backend__frameopt__build_frame_block_map_14_0_i7);
	}
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r5;
	MR_sv(4) = MR_r6;
	MR_sv(11) = MR_r7;
	MR_sv(9) = MR_r9;
	MR_sv(1) = MR_r10;
	MR_sv(10) = MR_tfield(1, MR_r2, 0);
	MR_r2 = MR_tfield(1, MR_r2, 1);
	MR_sv(6) = MR_tfield(3, MR_r11, 1);
	MR_sv(15) = MR_r8;
	MR_GOTO_LAB(ll_backend__frameopt__build_frame_block_map_14_0_i6);
	}
MR_def_label(ll_backend__frameopt__build_frame_block_map_14_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r5;
	MR_sv(4) = MR_r6;
	MR_sv(11) = MR_r7;
	MR_sv(9) = MR_r9;
	MR_sv(1) = MR_r10;
	MR_sv(10) = MR_tfield(1, MR_r2, 0);
	MR_sv(5) = MR_tfield(1, MR_r2, 1);
	MR_sv(6) = MR_tfield(3, MR_r11, 1);
	MR_sv(17) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, label);
	MR_r2 = MR_r1;
	MR_r3 = MR_sv(6);
	MR_r4 = MR_tfield(1, MR_r4, 0);
	MR_r5 = MR_r8;
	MR_np_call_localret_ent(map__det_insert_4_0,
		ll_backend__frameopt__build_frame_block_map_14_0_i8);
MR_def_label(ll_backend__frameopt__build_frame_block_map_14_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(5);
	MR_sv(15) = MR_r1;
	MR_r1 = MR_sv(17);
MR_def_label(ll_backend__frameopt__build_frame_block_map_14_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r2;
	MR_sv(17) = MR_r1;
	MR_np_call_localret_ent(ll_backend__frameopt__detect_entry_4_0,
		ll_backend__frameopt__build_frame_block_map_14_0_i10);
MR_def_label(ll_backend__frameopt__build_frame_block_map_14_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__frameopt__build_frame_block_map_14_0_i9);
	}
	MR_sv(7) = MR_r2;
	MR_sv(8) = MR_r3;
	MR_sv(12) = MR_r4;
	MR_r1 = MR_sv(17);
	MR_r2 = (MR_Integer) 1;
	MR_np_call_localret_ent(private_builtin__type_info_from_typeclass_info_3_0,
		ll_backend__frameopt__build_frame_block_map_14_0_i12);
MR_def_label(ll_backend__frameopt__build_frame_block_map_14_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(12);
	MR_np_call_localret_ent(builtin__unify_2_0,
		ll_backend__frameopt__build_frame_block_map_14_0_i13);
MR_def_label(ll_backend__frameopt__build_frame_block_map_14_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__frameopt__build_frame_block_map_14_0_i9);
	}
	MR_r1 = MR_sv(9);
	MR_np_call_localret_ent(counter__allocate_3_0,
		ll_backend__frameopt__build_frame_block_map_14_0_i15);
MR_def_label(ll_backend__frameopt__build_frame_block_map_14_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_sv(9) = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tfield(0, MR_tempr1, 1) = MR_sv(4);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr3, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr3, 0) = (MR_Integer) 6;
	MR_tfield(3, MR_tempr3, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr4, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr4, 0) = MR_tempr3;
	MR_tfield(0, MR_tempr4, 1) = (MR_Word) MR_string_const("fall through", 12);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_sv(10);
	MR_tfield(1, MR_tempr3, 1) = MR_sv(7);
	MR_tag_alloc_heap(MR_tempr5, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr5;
	MR_tfield(1, MR_tempr5, 0) = MR_tempr4;
	MR_tfield(1, MR_tempr5, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_sv(10) = MR_r2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	MR_r2 = MR_tempr3;
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		ll_backend__frameopt__build_frame_block_map_14_0_i22);
MR_def_label(ll_backend__frameopt__build_frame_block_map_14_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6, MR_tempr7, MR_tempr8, MR_tempr9, MR_tempr10, MR_tempr11, MR_tempr12, MR_tempr13, MR_tempr14, MR_tempr15, MR_tempr16;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 1);
	MR_r11 = MR_tempr1;
	MR_tempr13 = MR_sv(2);
	MR_tfield(0, MR_tempr1, 0) = MR_tempr13;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 6);
	MR_r12 = MR_tempr2;
	MR_tempr14 = MR_sv(6);
	MR_tfield(0, MR_tempr2, 0) = MR_tempr14;
	MR_tfield(0, MR_tempr2, 1) = MR_r1;
	MR_tfield(0, MR_tempr2, 2) = MR_sv(3);
	MR_tfield(0, MR_tempr2, 3) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_tempr2, 4) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_tempr2, 5) = MR_tempr1;
	if (MR_LTAGS_TEST(MR_sv(8),0,0)) {
		MR_GOTO_LAB(ll_backend__frameopt__build_frame_block_map_14_0_i25);
	}
	MR_tempr15 = MR_sv(8);
	MR_tempr3 = MR_tfield(0, MR_tfield(1, MR_tempr15, 0), 0);
	MR_r13 = MR_tempr3;
	if (MR_RTAGS_TESTR(MR_tempr3,3,5)) {
		MR_GOTO_LAB(ll_backend__frameopt__build_frame_block_map_14_0_i25);
	}
	MR_tag_alloc_heap(MR_tempr4, 3, (MR_Integer) 2);
	MR_r14 = MR_tempr4;
	MR_tfield(3, MR_tempr4, 0) = (MR_Integer) 5;
	MR_tempr16 = MR_sv(9);
	MR_tfield(3, MR_tempr4, 1) = MR_tempr16;
	MR_tag_alloc_heap(MR_tempr5, 0, (MR_Integer) 2);
	MR_r15 = MR_tempr5;
	MR_tfield(0, MR_tempr5, 0) = MR_tempr4;
	MR_tfield(0, MR_tempr5, 1) = (MR_Word) MR_string_const("", 0);
	MR_tag_alloc_heap(MR_tempr6, 1, (MR_Integer) 1);
	MR_r16 = MR_tempr6;
	MR_tfield(1, MR_tempr6, 0) = MR_tfield(3, MR_tempr3, 1);
	MR_tag_alloc_heap(MR_tempr7, 3, (MR_Integer) 2);
	MR_r13 = MR_tempr7;
	MR_tfield(3, MR_tempr7, 0) = (MR_Integer) 6;
	MR_tfield(3, MR_tempr7, 1) = MR_tempr6;
	MR_tag_alloc_heap(MR_tempr8, 0, (MR_Integer) 2);
	MR_r16 = MR_tempr8;
	MR_tfield(0, MR_tempr8, 0) = MR_tempr7;
	MR_tfield(0, MR_tempr8, 1) = (MR_Word) MR_string_const("fall through", 12);
	MR_tag_alloc_heap(MR_tempr9, 1, (MR_Integer) 2);
	MR_r13 = MR_tempr9;
	MR_tfield(1, MR_tempr9, 0) = MR_tempr8;
	MR_tfield(1, MR_tempr9, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr10, 1, (MR_Integer) 2);
	MR_r16 = MR_tempr10;
	MR_tfield(1, MR_tempr10, 0) = MR_tempr5;
	MR_tfield(1, MR_tempr10, 1) = MR_tempr9;
	MR_tag_alloc_heap(MR_tempr11, 1, (MR_Integer) 1);
	MR_r13 = MR_tempr11;
	MR_tfield(1, MR_tempr11, 0) = MR_tempr14;
	MR_tag_alloc_heap(MR_tempr12, 0, (MR_Integer) 6);
	MR_r15 = MR_tempr12;
	MR_tfield(0, MR_tempr12, 0) = MR_tempr16;
	MR_tfield(0, MR_tempr12, 1) = MR_tempr10;
	MR_tfield(0, MR_tempr12, 2) = MR_tempr11;
	MR_tfield(0, MR_tempr12, 3) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_tempr12, 4) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_tempr12, 5) = (MR_Word) MR_TAG_COMMON(1,5,0);
	MR_tag_alloc_heap(MR_r4, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r4, 0) = MR_tempr16;
	MR_r3 = MR_tempr13;
	MR_r6 = MR_sv(4);
	MR_r7 = MR_sv(11);
	MR_r10 = MR_sv(1);
	MR_r16 = MR_sv(10);
	MR_sv(10) = MR_tempr2;
	MR_r2 = MR_tempr15;
	MR_sv(11) = MR_tempr12;
	MR_r8 = MR_sv(15);
	MR_r9 = MR_r16;
	MR_r1 = MR_sv(17);
	MR_GOTO_LAB(ll_backend__frameopt__build_frame_block_map_14_0_i55);
	}
MR_def_label(ll_backend__frameopt__build_frame_block_map_14_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(10);
	MR_sv(10) = MR_r12;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(counter__allocate_3_0,
		ll_backend__frameopt__build_frame_block_map_14_0_i39);
MR_def_label(ll_backend__frameopt__build_frame_block_map_14_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6, MR_tempr7, MR_tempr8;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tempr7 = MR_sv(4);
	MR_tfield(0, MR_tempr1, 1) = MR_tempr7;
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 5;
	MR_tfield(3, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr3, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr3, 0) = MR_tempr2;
	MR_tfield(0, MR_tempr3, 1) = (MR_Word) MR_string_const("", 0);
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr4, 0) = MR_tempr3;
	MR_tfield(1, MR_tempr4, 1) = MR_sv(8);
	MR_tag_alloc_heap(MR_tempr3, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr3, 0) = (MR_Integer) 5;
	MR_tempr8 = MR_sv(9);
	MR_tfield(3, MR_tempr3, 1) = MR_tempr8;
	MR_tag_alloc_heap(MR_tempr5, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr5, 0) = MR_tempr3;
	MR_tfield(0, MR_tempr5, 1) = (MR_Word) MR_string_const("", 0);
	MR_tag_alloc_heap(MR_tempr6, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr6, 0) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 6;
	MR_tfield(3, MR_tempr2, 1) = MR_tempr6;
	MR_tag_alloc_heap(MR_tempr6, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr6, 0) = MR_tempr2;
	MR_tfield(0, MR_tempr6, 1) = (MR_Word) MR_string_const("fall through", 12);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr6;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr6, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr6, 0) = MR_tempr5;
	MR_tfield(1, MR_tempr6, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(6);
	MR_tag_alloc_heap(MR_tempr5, 0, (MR_Integer) 6);
	MR_tfield(0, MR_tempr5, 0) = MR_tempr8;
	MR_tfield(0, MR_tempr5, 1) = MR_tempr6;
	MR_tfield(0, MR_tempr5, 2) = MR_tempr2;
	MR_tfield(0, MR_tempr5, 3) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_tempr5, 4) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_tempr5, 5) = (MR_Word) MR_TAG_COMMON(1,5,0);
	MR_tag_alloc_heap(MR_r4, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r4, 0) = MR_tempr8;
	MR_r3 = MR_sv(2);
	MR_r6 = MR_tempr7;
	MR_r7 = MR_sv(11);
	MR_r10 = MR_sv(1);
	MR_tempr6 = MR_r2;
	MR_r2 = MR_tempr4;
	MR_sv(11) = MR_tempr5;
	MR_r8 = MR_sv(15);
	MR_r9 = MR_tempr6;
	MR_r1 = MR_sv(17);
	}
MR_def_label(ll_backend__frameopt__build_frame_block_map_14_0,55)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(17) = MR_r1;
	MR_r5 = MR_r4;
	MR_np_localcall_lab(ll_backend__frameopt__build_frame_block_map_14_0,
		ll_backend__frameopt__build_frame_block_map_14_0_i56);
MR_def_label(ll_backend__frameopt__build_frame_block_map_14_0,56)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_r5;
	MR_sv(1) = MR_r1;
	MR_sv(5) = MR_r2;
	MR_r1 = MR_sv(17);
	MR_r2 = (MR_Integer) 1;
	MR_np_call_localret_ent(private_builtin__type_info_from_typeclass_info_3_0,
		ll_backend__frameopt__build_frame_block_map_14_0_i57);
MR_def_label(ll_backend__frameopt__build_frame_block_map_14_0,57)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_r1 = MR_sv(17);
	MR_r2 = (MR_Integer) 2;
	MR_np_call_localret_ent(private_builtin__type_info_from_typeclass_info_3_0,
		ll_backend__frameopt__build_frame_block_map_14_0_i58);
MR_def_label(ll_backend__frameopt__build_frame_block_map_14_0,58)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 3);
	MR_tfield(0, MR_r2, 0) = (MR_Word) MR_CTOR_ADDR(ll_backend__frameopt, frame_block_info, 2);
	MR_tfield(0, MR_r2, 1) = MR_sv(7);
	MR_tfield(0, MR_r2, 2) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(10);
	MR_sv(10) = MR_r2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, label);
	MR_r3 = MR_sv(6);
	MR_r4 = MR_tempr1;
	MR_r5 = MR_sv(5);
	}
	MR_np_call_localret_ent(map__det_insert_4_0,
		ll_backend__frameopt__build_frame_block_map_14_0_i60);
MR_def_label(ll_backend__frameopt__build_frame_block_map_14_0,60)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, label);
	MR_r2 = MR_sv(10);
	MR_r3 = MR_sv(9);
	MR_r4 = MR_sv(11);
	MR_r5 = MR_tempr1;
	}
	MR_np_call_localret_ent(map__det_insert_4_0,
		ll_backend__frameopt__build_frame_block_map_14_0_i61);
MR_def_label(ll_backend__frameopt__build_frame_block_map_14_0,61)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(9);
	MR_tfield(1, MR_tempr1, 1) = MR_sv(1);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(6);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_tempr2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(4);
	MR_decr_sp_and_return(18);
	}
MR_def_label(ll_backend__frameopt__build_frame_block_map_14_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(17);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(2);
	MR_np_call_localret_ent(ll_backend__frameopt__detect_exit_6_0,
		ll_backend__frameopt__build_frame_block_map_14_0_i66);
MR_def_label(ll_backend__frameopt__build_frame_block_map_14_0,66)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__frameopt__build_frame_block_map_14_0_i65);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(9);
	MR_sv(9) = MR_r2;
	MR_sv(5) = MR_r3;
	MR_sv(7) = MR_r4;
	MR_sv(8) = MR_r5;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(counter__allocate_3_0,
		ll_backend__frameopt__build_frame_block_map_14_0_i68);
MR_def_label(ll_backend__frameopt__build_frame_block_map_14_0,68)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_sv(12) = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tfield(0, MR_tempr1, 1) = MR_sv(4);
	MR_sv(16) = MR_r2;
	MR_r1 = MR_sv(9);
	}
	MR_np_call_localret_ent(f_108_108_95_98_97_99_107_101_110_100_95_95_102_114_97_109_101_111_112_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_109_112_117_116_101_95_98_108_111_99_107_95_110_101_101_100_115_95_102_114_97_109_101_95_95_91_49_93_95_48_3_0,
		ll_backend__frameopt__build_frame_block_map_14_0_i70);
MR_def_label(ll_backend__frameopt__build_frame_block_map_14_0,70)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(12);
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 6;
	MR_tfield(3, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr3, 0, (MR_Integer) 2);
	MR_sv(14) = MR_tempr3;
	MR_tfield(0, MR_tempr3, 0) = MR_tempr2;
	MR_tfield(0, MR_tempr3, 1) = (MR_Word) MR_string_const("fall through", 12);
	if (MR_LTAGS_TESTR(MR_sv(9),0,0)) {
		MR_GOTO_LAB(ll_backend__frameopt__build_frame_block_map_14_0_i75);
	}
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 5);
	MR_tfield(0, MR_tempr2, 0) = (MR_Word) MR_COMMON(6,0);
	MR_tfield(0, MR_tempr2, 1) = (MR_Word) MR_ENTRY_AP(ll_backend__frameopt__IntroducedFrom__pred__build_frame_block_map__684__1_2_0);
	MR_tfield(0, MR_tempr2, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr2, 3) = MR_r1;
	MR_tfield(0, MR_tempr2, 4) = (MR_Integer) 1;
	MR_sv(13) = MR_r1;
	MR_r1 = MR_tempr2;
	MR_r2 = (MR_Word) MR_string_const("ll_backend.frameopt", 19);
	MR_r3 = (MR_Word) MR_string_const("predicate \140ll_backend.frameopt.build_frame_block_map\'/14", 56);
	MR_r4 = (MR_Word) MR_string_const("[] needs frame", 14);
	}
	MR_np_call_localret_ent(require__expect_4_0,
		ll_backend__frameopt__build_frame_block_map_14_0_i77);
MR_def_label(ll_backend__frameopt__build_frame_block_map_14_0,77)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, label);
	MR_r2 = MR_r1;
	MR_r3 = MR_sv(6);
	MR_r4 = MR_sv(12);
	MR_r5 = MR_sv(1);
	MR_np_call_localret_ent(map__det_insert_4_0,
		ll_backend__frameopt__build_frame_block_map_14_0_i78);
MR_def_label(ll_backend__frameopt__build_frame_block_map_14_0,78)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(13);
	MR_tfield(1, MR_tempr1, 1) = (MR_Integer) 2;
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(10);
	MR_tfield(1, MR_r2, 1) = MR_sv(9);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_sv(14);
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_sv(9) = MR_tempr1;
	MR_sv(10) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		ll_backend__frameopt__build_frame_block_map_14_0_i85);
MR_def_label(ll_backend__frameopt__build_frame_block_map_14_0,75)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Integer) 0;
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(10);
	MR_tfield(1, MR_r2, 1) = MR_sv(9);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_sv(14);
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_sv(9) = MR_tempr1;
	MR_sv(10) = MR_sv(1);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		ll_backend__frameopt__build_frame_block_map_14_0_i85);
MR_def_label(ll_backend__frameopt__build_frame_block_map_14_0,85)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6, MR_tempr7, MR_tempr8;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 6);
	MR_tempr7 = MR_sv(6);
	MR_tfield(0, MR_tempr1, 0) = MR_tempr7;
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_tfield(0, MR_tempr1, 2) = MR_sv(3);
	MR_tfield(0, MR_tempr1, 3) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_tempr1, 4) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_tempr1, 5) = MR_sv(9);
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 5;
	MR_tempr8 = MR_sv(12);
	MR_tfield(3, MR_tempr2, 1) = MR_tempr8;
	MR_tag_alloc_heap(MR_tempr3, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr3, 0) = MR_tempr2;
	MR_tfield(0, MR_tempr3, 1) = (MR_Word) MR_string_const("", 0);
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr4, 0) = MR_tempr3;
	MR_tfield(1, MR_tempr4, 1) = MR_sv(5);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr3, 0) = MR_tempr7;
	MR_tag_alloc_heap(MR_tempr5, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr5, 0) = MR_sv(8);
	MR_tag_alloc_heap(MR_tempr6, 0, (MR_Integer) 6);
	MR_sv(1) = MR_tempr6;
	MR_tfield(0, MR_tempr6, 0) = MR_tempr8;
	MR_tfield(0, MR_tempr6, 1) = MR_tempr4;
	MR_tfield(0, MR_tempr6, 2) = MR_tempr3;
	MR_tfield(0, MR_tempr6, 3) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_tempr6, 4) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_tempr6, 5) = MR_tempr5;
	MR_sv(9) = MR_tempr1;
	MR_sv(5) = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, label);
	MR_r1 = MR_sv(5);
	MR_r2 = MR_r1;
	MR_r3 = MR_tempr8;
	MR_r4 = MR_tempr7;
	MR_r5 = MR_sv(15);
	}
	MR_np_call_localret_ent(map__det_insert_4_0,
		ll_backend__frameopt__build_frame_block_map_14_0_i93);
MR_def_label(ll_backend__frameopt__build_frame_block_map_14_0,93)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r4, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r4, 0) = MR_sv(12);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(17);
	MR_r2 = MR_sv(7);
	MR_r3 = MR_sv(2);
	MR_r5 = (MR_Word) MR_tbmkword(0, 0);
	MR_r6 = MR_sv(4);
	MR_r7 = MR_sv(11);
	MR_r8 = MR_tempr1;
	MR_r9 = MR_sv(16);
	MR_r10 = MR_sv(10);
	}
	MR_np_localcall_lab(ll_backend__frameopt__build_frame_block_map_14_0,
		ll_backend__frameopt__build_frame_block_map_14_0_i95);
MR_def_label(ll_backend__frameopt__build_frame_block_map_14_0,95)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_r5;
	MR_sv(11) = MR_r2;
	MR_sv(10) = MR_r1;
	MR_r1 = MR_sv(17);
	MR_r2 = (MR_Integer) 1;
	MR_np_call_localret_ent(private_builtin__type_info_from_typeclass_info_3_0,
		ll_backend__frameopt__build_frame_block_map_14_0_i96);
MR_def_label(ll_backend__frameopt__build_frame_block_map_14_0,96)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_r1 = MR_sv(17);
	MR_r2 = (MR_Integer) 2;
	MR_np_call_localret_ent(private_builtin__type_info_from_typeclass_info_3_0,
		ll_backend__frameopt__build_frame_block_map_14_0_i97);
MR_def_label(ll_backend__frameopt__build_frame_block_map_14_0,97)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 3);
	MR_tfield(0, MR_r2, 0) = (MR_Word) MR_CTOR_ADDR(ll_backend__frameopt, frame_block_info, 2);
	MR_tfield(0, MR_r2, 1) = MR_sv(7);
	MR_tfield(0, MR_r2, 2) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(11);
	MR_sv(11) = MR_r2;
	MR_r1 = MR_sv(5);
	MR_r3 = MR_sv(12);
	MR_r4 = MR_sv(1);
	MR_r5 = MR_tempr1;
	}
	MR_np_call_localret_ent(map__det_insert_4_0,
		ll_backend__frameopt__build_frame_block_map_14_0_i99);
MR_def_label(ll_backend__frameopt__build_frame_block_map_14_0,99)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(11);
	MR_r3 = MR_sv(6);
	MR_r4 = MR_sv(9);
	MR_r5 = MR_tempr1;
	}
	MR_np_call_localret_ent(map__det_insert_4_0,
		ll_backend__frameopt__build_frame_block_map_14_0_i100);
MR_def_label(ll_backend__frameopt__build_frame_block_map_14_0,100)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(12);
	MR_tfield(1, MR_tempr1, 1) = MR_sv(10);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(6);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_tempr2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(4);
	MR_decr_sp_and_return(18);
	}
MR_def_label(ll_backend__frameopt__build_frame_block_map_14_0,65)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(ll_backend__opt_util__skip_to_next_label_3_0,
		ll_backend__frameopt__build_frame_block_map_14_0_i103);
MR_def_label(ll_backend__frameopt__build_frame_block_map_14_0,103)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_sv(7) = MR_r2;
	MR_np_call_localret_ent(f_108_108_95_98_97_99_107_101_110_100_95_95_102_114_97_109_101_111_112_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_109_112_117_116_101_95_98_108_111_99_107_95_110_101_101_100_115_95_102_114_97_109_101_95_95_91_49_93_95_48_3_0,
		ll_backend__frameopt__build_frame_block_map_14_0_i104);
MR_def_label(ll_backend__frameopt__build_frame_block_map_14_0,104)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(10);
	MR_tfield(1, MR_r2, 1) = MR_sv(5);
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Integer) 0;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 6);
	MR_sv(10) = MR_tempr2;
	MR_tfield(0, MR_tempr2, 0) = MR_sv(6);
	MR_tfield(0, MR_tempr2, 1) = MR_r2;
	MR_tfield(0, MR_tempr2, 2) = MR_sv(3);
	MR_tfield(0, MR_tempr2, 3) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_tempr2, 4) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_tempr2, 5) = MR_tempr1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	}
	MR_np_call_localret_ent(list__last_2_0,
		ll_backend__frameopt__build_frame_block_map_14_0_i109);
MR_def_label(ll_backend__frameopt__build_frame_block_map_14_0,109)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__frameopt__build_frame_block_map_14_0_i108);
	}
	MR_r1 = MR_tfield(0, MR_r2, 0);
	MR_np_call_localret_ent(fn__ll_backend__opt_util__can_instr_fall_through_1_0,
		ll_backend__frameopt__build_frame_block_map_14_0_i111);
MR_def_label(ll_backend__frameopt__build_frame_block_map_14_0,111)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(ll_backend__frameopt__build_frame_block_map_14_0_i113);
	}
	MR_tag_alloc_heap(MR_r4, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r4, 0) = MR_sv(6);
	MR_r3 = MR_sv(2);
	MR_r6 = MR_sv(4);
	MR_r7 = MR_sv(11);
	MR_r9 = MR_sv(9);
	MR_r10 = MR_sv(1);
	MR_r5 = (MR_Word) MR_tbmkword(0, 0);
	MR_r8 = MR_sv(15);
	MR_r2 = MR_sv(7);
	MR_r1 = MR_sv(17);
	MR_GOTO_LAB(ll_backend__frameopt__build_frame_block_map_14_0_i117);
MR_def_label(ll_backend__frameopt__build_frame_block_map_14_0,113)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_r4 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(6);
	MR_r3 = MR_sv(2);
	MR_r6 = MR_sv(4);
	MR_r7 = MR_sv(11);
	MR_r9 = MR_sv(9);
	MR_r10 = MR_sv(1);
	MR_r5 = MR_tempr1;
	MR_r8 = MR_sv(15);
	MR_r2 = MR_sv(7);
	MR_r1 = MR_sv(17);
	MR_GOTO_LAB(ll_backend__frameopt__build_frame_block_map_14_0_i117);
	}
MR_def_label(ll_backend__frameopt__build_frame_block_map_14_0,108)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_r4 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(6);
	MR_r3 = MR_sv(2);
	MR_r6 = MR_sv(4);
	MR_r7 = MR_sv(11);
	MR_r9 = MR_sv(9);
	MR_r10 = MR_sv(1);
	MR_r5 = MR_tempr1;
	MR_r8 = MR_sv(15);
	MR_r2 = MR_sv(7);
	MR_r1 = MR_sv(17);
	}
MR_def_label(ll_backend__frameopt__build_frame_block_map_14_0,117)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(17) = MR_r1;
	MR_np_localcall_lab(ll_backend__frameopt__build_frame_block_map_14_0,
		ll_backend__frameopt__build_frame_block_map_14_0_i118);
MR_def_label(ll_backend__frameopt__build_frame_block_map_14_0,118)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_r5;
	MR_sv(11) = MR_r2;
	MR_sv(9) = MR_r1;
	MR_r1 = MR_sv(17);
	MR_r2 = (MR_Integer) 1;
	MR_np_call_localret_ent(private_builtin__type_info_from_typeclass_info_3_0,
		ll_backend__frameopt__build_frame_block_map_14_0_i119);
MR_def_label(ll_backend__frameopt__build_frame_block_map_14_0,119)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(17);
	MR_r2 = (MR_Integer) 2;
	MR_np_call_localret_ent(private_builtin__type_info_from_typeclass_info_3_0,
		ll_backend__frameopt__build_frame_block_map_14_0_i120);
MR_def_label(ll_backend__frameopt__build_frame_block_map_14_0,120)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 3);
	MR_tfield(0, MR_r2, 0) = (MR_Word) MR_CTOR_ADDR(ll_backend__frameopt, frame_block_info, 2);
	MR_tfield(0, MR_r2, 1) = MR_sv(1);
	MR_tfield(0, MR_r2, 2) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, label);
	MR_r3 = MR_sv(6);
	MR_r4 = MR_sv(10);
	MR_r5 = MR_sv(11);
	MR_np_call_localret_ent(map__det_insert_4_0,
		ll_backend__frameopt__build_frame_block_map_14_0_i122);
MR_def_label(ll_backend__frameopt__build_frame_block_map_14_0,122)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(6);
	MR_tfield(1, MR_tempr1, 1) = MR_sv(9);
	MR_tempr2 = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_tempr2;
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(4);
	MR_decr_sp_and_return(18);
	}
MR_def_label(ll_backend__frameopt__build_frame_block_map_14_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("ll_backend.frameopt", 19);
	MR_r2 = (MR_Word) MR_string_const("predicate \140ll_backend.frameopt.build_frame_block_map\'/14", 56);
	MR_r3 = (MR_Word) MR_string_const("block does not start with label", 31);
	MR_np_tailcall_ent(require__unexpected_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__frameopt_module6)
	MR_init_entry1(ll_backend__frameopt__detstack_setup_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__frameopt__detstack_setup_6_0);
	MR_init_label6(ll_backend__frameopt__detstack_setup_6_0,80,5,11,3,20,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'detstack_setup'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__frameopt__detstack_setup_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
MR_def_label(ll_backend__frameopt__detstack_setup_6_0,80)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(ll_backend__frameopt__detstack_setup_6_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr1 = MR_tfield(0, MR_tfield(1, MR_r1, 0), 0);
	MR_r5 = MR_tempr1;
	MR_r4 = MR_tfield(1, MR_r1, 1);
	MR_r6 = MR_tfield(1, MR_r1, 0);
	if (MR_RTAGS_TESTR(MR_tempr1,3,1)) {
		MR_GOTO_LAB(ll_backend__frameopt__detstack_setup_6_0_i3);
	}
	MR_tempr2 = MR_tfield(3, MR_tempr1, 1);
	MR_r7 = MR_tempr2;
	if (MR_RTAGS_TESTR(MR_tempr2,3,0)) {
		MR_GOTO_LAB(ll_backend__frameopt__detstack_setup_6_0_i5);
	}
	MR_tempr3 = MR_tfield(3, MR_tempr2, 1);
	if ((MR_r2 != MR_tempr3)) {
		MR_GOTO_LAB(ll_backend__frameopt__detstack_setup_6_0_i5);
	}
	MR_tempr3 = MR_tfield(3, MR_tempr1, 2);
	if (MR_PTAG_TESTR(MR_tempr3,0)) {
		MR_GOTO_LAB(ll_backend__frameopt__detstack_setup_6_0_i5);
	}
	MR_tempr4 = MR_tfield(0, MR_tempr3, 0);
	if (MR_LTAGS_TESTR(MR_tempr4,0,0)) {
		MR_GOTO_LAB(ll_backend__frameopt__detstack_setup_6_0_i5);
	}
	MR_r2 = MR_r6;
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(3);
	}
MR_def_label(ll_backend__frameopt__detstack_setup_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r7,0,0)) {
		MR_GOTO_LAB(ll_backend__frameopt__detstack_setup_6_0_i1);
	}
	if (MR_RTAGS_TESTR(MR_r7,3,0)) {
		MR_GOTO_LAB(ll_backend__frameopt__detstack_setup_6_0_i11);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(3, MR_r7, 1);
	if ((MR_r2 == MR_tempr1)) {
		MR_GOTO_LAB(ll_backend__frameopt__detstack_setup_6_0_i1);
	}
	}
MR_def_label(ll_backend__frameopt__detstack_setup_6_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r6;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_sv(1) = MR_r4;
	MR_sv(2) = MR_r2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	MR_r2 = MR_r3;
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		ll_backend__frameopt__detstack_setup_6_0_i20);
MR_def_label(ll_backend__frameopt__detstack_setup_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r5,1)) {
		MR_GOTO_LAB(ll_backend__frameopt__detstack_setup_6_0_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r6;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_sv(1) = MR_r4;
	MR_sv(2) = MR_r2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	MR_r2 = MR_r3;
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		ll_backend__frameopt__detstack_setup_6_0_i20);
MR_def_label(ll_backend__frameopt__detstack_setup_6_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tempr1;
	MR_succip_word = MR_sv(3);
	MR_GOTO_LAB(ll_backend__frameopt__detstack_setup_6_0_i80);
	}
MR_def_label(ll_backend__frameopt__detstack_setup_6_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(ll_backend__opt_util__gather_comments_3_0);

MR_BEGIN_MODULE(ll_backend__frameopt_module7)
	MR_init_entry1(ll_backend__frameopt__detect_det_entry_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__frameopt__detect_det_entry_4_0);
	MR_init_label4(ll_backend__frameopt__detect_det_entry_4_0,2,5,7,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'detect_det_entry'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__frameopt__detect_det_entry_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(ll_backend__opt_util__gather_comments_3_0,
		ll_backend__frameopt__detect_det_entry_4_0_i2);
MR_def_label(ll_backend__frameopt__detect_det_entry_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r2,0,0)) {
		MR_GOTO_LAB(ll_backend__frameopt__detect_det_entry_4_0_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(0, MR_tfield(1, MR_r2, 0), 0);
	if (MR_RTAGS_TESTR(MR_tempr1,3,24)) {
		MR_GOTO_LAB(ll_backend__frameopt__detect_det_entry_4_0_i1);
	}
	MR_sv(1) = MR_tfield(1, MR_r2, 0);
	MR_sv(2) = MR_tfield(3, MR_tempr1, 1);
	MR_sv(3) = MR_tfield(3, MR_tempr1, 2);
	MR_sv(4) = MR_tfield(3, MR_tempr1, 3);
	MR_tempr1 = MR_r1;
	MR_r1 = MR_tfield(1, MR_r2, 1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(ll_backend__frameopt__detstack_setup_6_0,
		ll_backend__frameopt__detect_det_entry_4_0_i5);
MR_def_label(ll_backend__frameopt__detect_det_entry_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__frameopt__detect_det_entry_4_0_i1);
	}
	MR_sv(5) = MR_r2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	MR_r2 = MR_r3;
	MR_r3 = MR_r4;
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		ll_backend__frameopt__detect_det_entry_4_0_i7);
MR_def_label(ll_backend__frameopt__detect_det_entry_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(5);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(1);
	MR_tfield(1, MR_r2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 3);
	MR_r4 = MR_tempr2;
	MR_tfield(0, MR_tempr2, 0) = MR_sv(2);
	MR_tfield(0, MR_tempr2, 1) = MR_sv(3);
	MR_tfield(0, MR_tempr2, 2) = MR_sv(4);
	MR_r3 = MR_r1;
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_r1 = MR_TRUE;
	MR_proceed();
	}
MR_def_label(ll_backend__frameopt__detect_det_entry_4_0,1)
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

MR_decl_entry(__Unify___mdbcomp__prim_data__proc_label_0_0);

MR_BEGIN_MODULE(ll_backend__frameopt_module8)
	MR_init_entry1(ll_backend__frameopt__matching_label_ref_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__frameopt__matching_label_ref_2_0);
	MR_init_label4(ll_backend__frameopt__matching_label_ref_2_0,4,17,7,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'matching_label_ref'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__frameopt__matching_label_ref_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	if (MR_PTAG_TESTR(MR_r1,1)) {
		MR_GOTO_LAB(ll_backend__frameopt__matching_label_ref_2_0_i1);
	}
	if (MR_PTAG_TESTR(MR_r2,1)) {
		MR_GOTO_LAB(ll_backend__frameopt__matching_label_ref_2_0_i1);
	}
	MR_sv(1) = MR_tfield(1, MR_r1, 0);
	MR_sv(2) = MR_tfield(1, MR_r2, 0);
	MR_r1 = MR_tfield(1, MR_r1, 1);
	MR_r2 = MR_tfield(1, MR_r2, 1);
	MR_np_call_localret_ent(__Unify___mdbcomp__prim_data__proc_label_0_0,
		ll_backend__frameopt__matching_label_ref_2_0_i4);
MR_def_label(ll_backend__frameopt__matching_label_ref_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__frameopt__matching_label_ref_2_0_i1);
	}
	if (MR_INT_NE(MR_sv(1),0)) {
		MR_GOTO_LAB(ll_backend__frameopt__matching_label_ref_2_0_i7);
	}
	MR_r1 = ((MR_Integer) MR_sv(2) == (MR_Integer) 0);
	MR_decr_sp_and_return(3);
MR_def_label(ll_backend__frameopt__matching_label_ref_2_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(ll_backend__frameopt__matching_label_ref_2_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_EQ(MR_sv(1),2)) {
		MR_GOTO_LAB(ll_backend__frameopt__matching_label_ref_2_0_i17);
	}
	if (MR_INT_EQ(MR_sv(2),0)) {
		MR_GOTO_LAB(ll_backend__frameopt__matching_label_ref_2_0_i17);
	}
	MR_r1 = ((MR_Integer) MR_sv(2) == (MR_Integer) 1);
	MR_decr_sp_and_return(3);
MR_def_label(ll_backend__frameopt__matching_label_ref_2_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__ll_backend__llds__get_proc_label_1_0);

MR_BEGIN_MODULE(ll_backend__frameopt_module9)
	MR_init_entry1(ll_backend__frameopt__find_redoip_labels_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__frameopt__find_redoip_labels_4_0);
	MR_init_label6(ll_backend__frameopt__find_redoip_labels_4_0,46,3,11,12,4,5)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'find_redoip_labels'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__frameopt__find_redoip_labels_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
MR_def_label(ll_backend__frameopt__find_redoip_labels_4_0,46)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(ll_backend__frameopt__find_redoip_labels_4_0_i3);
	}
	MR_r1 = MR_r3;
	MR_decr_sp_and_return(5);
MR_def_label(ll_backend__frameopt__find_redoip_labels_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_tfield(1, MR_r1, 1);
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(0, MR_tfield(1, MR_r1, 0), 0);
	if (MR_RTAGS_TESTR(MR_tempr1,3,1)) {
		MR_GOTO_LAB(ll_backend__frameopt__find_redoip_labels_4_0_i5);
	}
	MR_tempr2 = MR_tfield(3, MR_tempr1, 1);
	if (MR_RTAGS_TESTR(MR_tempr2,3,6)) {
		MR_GOTO_LAB(ll_backend__frameopt__find_redoip_labels_4_0_i5);
	}
	MR_tempr2 = MR_tfield(3, MR_tempr1, 2);
	if (MR_RTAGS_TESTR(MR_tempr2,3,1)) {
		MR_GOTO_LAB(ll_backend__frameopt__find_redoip_labels_4_0_i5);
	}
	MR_tempr1 = MR_tfield(3, MR_tempr2, 1);
	if (MR_RTAGS_TESTR(MR_tempr1,3,3)) {
		MR_GOTO_LAB(ll_backend__frameopt__find_redoip_labels_4_0_i5);
	}
	MR_tempr2 = MR_tfield(3, MR_tempr1, 1);
	if (MR_PTAG_TESTR(MR_tempr2,1)) {
		MR_GOTO_LAB(ll_backend__frameopt__find_redoip_labels_4_0_i5);
	}
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(4) = MR_tfield(1, MR_tempr2, 0);
	MR_r1 = MR_sv(4);
	}
	MR_np_call_localret_ent(fn__ll_backend__llds__get_proc_label_1_0,
		ll_backend__frameopt__find_redoip_labels_4_0_i11);
MR_def_label(ll_backend__frameopt__find_redoip_labels_4_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(__Unify___mdbcomp__prim_data__proc_label_0_0,
		ll_backend__frameopt__find_redoip_labels_4_0_i12);
MR_def_label(ll_backend__frameopt__find_redoip_labels_4_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__frameopt__find_redoip_labels_4_0_i4);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(4);
	MR_tfield(1, MR_tempr1, 1) = MR_sv(2);
	MR_r2 = MR_sv(1);
	MR_r1 = MR_sv(3);
	MR_succip_word = MR_sv(5);
	MR_GOTO_LAB(ll_backend__frameopt__find_redoip_labels_4_0_i46);
	}
MR_def_label(ll_backend__frameopt__find_redoip_labels_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
MR_def_label(ll_backend__frameopt__find_redoip_labels_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_succip_word = MR_sv(5);
	MR_GOTO_LAB(ll_backend__frameopt__find_redoip_labels_4_0_i46);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(list__det_split_last_3_0);
MR_decl_entry(ll_backend__opt_util__replace_labels_code_addr_3_0);
MR_decl_entry(ll_backend__opt_util__replace_labels_maybe_label_list_3_0);
MR_decl_entry(ll_backend__opt_util__replace_labels_label_3_0);
MR_decl_entry(ll_backend__opt_util__replace_labels_comps_3_0);
MR_decl_entry(ll_backend__opt_util__possible_targets_3_0);
MR_decl_entry(list__filter_3_0);
MR_decl_entry(map__det_update_4_0);
MR_decl_entry(list__foldl_4_0);

MR_BEGIN_MODULE(ll_backend__frameopt_module10)
	MR_init_entry1(ll_backend__frameopt__analyze_block_11_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__frameopt__analyze_block_11_0);
	MR_init_label10(ll_backend__frameopt__analyze_block_11_0,2,3,5,7,8,10,6,12,14,17)
	MR_init_label10(ll_backend__frameopt__analyze_block_11_0,15,24,22,31,29,39,43,45,49,36)
	MR_init_label10(ll_backend__frameopt__analyze_block_11_0,53,54,56,58,57,62,67,64,11,73)
	MR_init_label3(ll_backend__frameopt__analyze_block_11_0,74,75,78)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'analyze_block'/11 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__frameopt__analyze_block_11_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(25);
	MR_sv(25) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(19) = MR_r3;
	MR_sv(2) = MR_r4;
	MR_sv(3) = MR_r5;
	MR_sv(8) = MR_r6;
	MR_sv(20) = MR_r7;
	MR_sv(4) = MR_r8;
	MR_sv(22) = MR_r9;
	MR_sv(23) = MR_r1;
	MR_r2 = (MR_Integer) 1;
	MR_np_call_localret_ent(private_builtin__type_info_from_typeclass_info_3_0,
		ll_backend__frameopt__analyze_block_11_0_i2);
MR_def_label(ll_backend__frameopt__analyze_block_11_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_r1 = MR_sv(23);
	MR_r2 = (MR_Integer) 2;
	MR_np_call_localret_ent(private_builtin__type_info_from_typeclass_info_3_0,
		ll_backend__frameopt__analyze_block_11_0_i3);
MR_def_label(ll_backend__frameopt__analyze_block_11_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 3);
	MR_tfield(0, MR_r2, 0) = (MR_Word) MR_CTOR_ADDR(ll_backend__frameopt, frame_block_info, 2);
	MR_tfield(0, MR_r2, 1) = MR_sv(7);
	MR_tfield(0, MR_r2, 2) = MR_r1;
	MR_sv(24) = MR_r2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, label);
	MR_r3 = MR_sv(20);
	MR_r4 = MR_sv(1);
	MR_np_call_localret_ent(map__lookup_3_0,
		ll_backend__frameopt__analyze_block_11_0_i5);
MR_def_label(ll_backend__frameopt__analyze_block_11_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(0, MR_r1, 5);
	MR_r3 = MR_tempr1;
	if (MR_PTAG_TESTR(MR_tempr1,0)) {
		MR_GOTO_LAB(ll_backend__frameopt__analyze_block_11_0_i7);
	}
	MR_tempr2 = MR_r1;
	MR_r4 = MR_tempr2;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tfield(0, MR_tempr2, 0);
	MR_sv(7) = MR_tfield(0, MR_tempr2, 1);
	MR_sv(5) = MR_tfield(0, MR_tempr2, 2);
	MR_sv(6) = MR_tempr1;
	MR_sv(21) = MR_sv(4);
	MR_GOTO_LAB(ll_backend__frameopt__analyze_block_11_0_i6);
	}
MR_def_label(ll_backend__frameopt__analyze_block_11_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r3,2)) {
		MR_GOTO_LAB(ll_backend__frameopt__analyze_block_11_0_i8);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r4 = MR_tempr1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tfield(0, MR_tempr1, 0);
	MR_sv(7) = MR_tfield(0, MR_tempr1, 1);
	MR_sv(5) = MR_tfield(0, MR_tempr1, 2);
	MR_sv(6) = MR_r3;
	MR_sv(21) = MR_sv(4);
	MR_GOTO_LAB(ll_backend__frameopt__analyze_block_11_0_i6);
	}
MR_def_label(ll_backend__frameopt__analyze_block_11_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r3;
	MR_r4 = MR_tfield(1, MR_tempr2, 0);
	if (MR_INT_NE(MR_r4,1)) {
		MR_GOTO_LAB(ll_backend__frameopt__analyze_block_11_0_i10);
	}
	MR_tempr1 = MR_r1;
	MR_r4 = MR_tempr1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tfield(0, MR_tempr1, 0);
	MR_sv(7) = MR_tfield(0, MR_tempr1, 1);
	MR_sv(5) = MR_tfield(0, MR_tempr1, 2);
	MR_sv(6) = MR_tempr2;
	MR_sv(21) = MR_sv(4);
	MR_GOTO_LAB(ll_backend__frameopt__analyze_block_11_0_i6);
	}
MR_def_label(ll_backend__frameopt__analyze_block_11_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tfield(0, MR_tempr1, 0);
	MR_sv(7) = MR_tfield(0, MR_tempr1, 1);
	MR_sv(5) = MR_tfield(0, MR_tempr1, 2);
	MR_sv(6) = MR_r3;
	MR_sv(21) = (MR_Integer) 1;
	}
MR_def_label(ll_backend__frameopt__analyze_block_11_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(4) = MR_r2;
	MR_np_call_localret_ent(__Unify___ll_backend__llds__label_0_0,
		ll_backend__frameopt__analyze_block_11_0_i12);
MR_def_label(ll_backend__frameopt__analyze_block_11_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__frameopt__analyze_block_11_0_i11);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	MR_r2 = MR_sv(7);
	MR_np_call_localret_ent(list__det_split_last_3_0,
		ll_backend__frameopt__analyze_block_11_0_i14);
MR_def_label(ll_backend__frameopt__analyze_block_11_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(18) = MR_tfield(0, MR_r2, 1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(0, MR_r2, 0);
	MR_r3 = MR_tempr1;
	if (MR_RTAGS_TESTR(MR_tempr1,3,6)) {
		MR_GOTO_LAB(ll_backend__frameopt__analyze_block_11_0_i15);
	}
	MR_sv(7) = MR_r1;
	MR_r1 = MR_tfield(3, MR_tempr1, 1);
	MR_r2 = MR_sv(8);
	}
	MR_np_call_localret_ent(ll_backend__opt_util__replace_labels_code_addr_3_0,
		ll_backend__frameopt__analyze_block_11_0_i17);
MR_def_label(ll_backend__frameopt__analyze_block_11_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_sv(8) = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 6;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr2, 1) = MR_sv(18);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr3;
	MR_tfield(1, MR_tempr3, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr3, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	MR_r2 = MR_sv(7);
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		ll_backend__frameopt__analyze_block_11_0_i49);
MR_def_label(ll_backend__frameopt__analyze_block_11_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r3,3,9)) {
		MR_GOTO_LAB(ll_backend__frameopt__analyze_block_11_0_i22);
	}
	MR_sv(7) = MR_r1;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(8);
	MR_tempr2 = MR_r3;
	MR_sv(8) = MR_tfield(3, MR_tempr2, 1);
	MR_r1 = MR_tfield(3, MR_tempr2, 2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(ll_backend__opt_util__replace_labels_code_addr_3_0,
		ll_backend__frameopt__analyze_block_11_0_i24);
MR_def_label(ll_backend__frameopt__analyze_block_11_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 9;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(8);
	MR_tfield(3, MR_tempr1, 2) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr2, 1) = MR_sv(18);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr3;
	MR_tfield(1, MR_tempr3, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr3, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_sv(8) = MR_tempr1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	MR_r2 = MR_sv(7);
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		ll_backend__frameopt__analyze_block_11_0_i49);
MR_def_label(ll_backend__frameopt__analyze_block_11_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r3,3,7)) {
		MR_GOTO_LAB(ll_backend__frameopt__analyze_block_11_0_i29);
	}
	MR_sv(7) = MR_r1;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(8);
	MR_tempr2 = MR_r3;
	MR_sv(8) = MR_tfield(3, MR_tempr2, 1);
	MR_r1 = MR_tfield(3, MR_tempr2, 2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(ll_backend__opt_util__replace_labels_maybe_label_list_3_0,
		ll_backend__frameopt__analyze_block_11_0_i31);
MR_def_label(ll_backend__frameopt__analyze_block_11_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 7;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(8);
	MR_tfield(3, MR_tempr1, 2) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr2, 1) = MR_sv(18);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr3;
	MR_tfield(1, MR_tempr3, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr3, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_sv(8) = MR_tempr1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	MR_r2 = MR_sv(7);
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		ll_backend__frameopt__analyze_block_11_0_i49);
MR_def_label(ll_backend__frameopt__analyze_block_11_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r3,3,27)) {
		MR_GOTO_LAB(ll_backend__frameopt__analyze_block_11_0_i36);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr4 = MR_r3;
	MR_r4 = MR_tfield(3, MR_tempr4, 7);
	if (MR_LTAGS_TESTR(MR_r4,0,0)) {
		MR_GOTO_LAB(ll_backend__frameopt__analyze_block_11_0_i39);
	}
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 11);
	MR_sv(8) = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 27;
	MR_tfield(3, MR_tempr1, 1) = MR_tfield(3, MR_tempr4, 1);
	MR_tfield(3, MR_tempr1, 2) = MR_tfield(3, MR_tempr4, 2);
	MR_tfield(3, MR_tempr1, 3) = MR_tfield(3, MR_tempr4, 3);
	MR_tfield(3, MR_tempr1, 4) = MR_tfield(3, MR_tempr4, 4);
	MR_tfield(3, MR_tempr1, 5) = MR_tfield(3, MR_tempr4, 5);
	MR_tfield(3, MR_tempr1, 6) = MR_tfield(3, MR_tempr4, 6);
	MR_tfield(3, MR_tempr1, 7) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(3, MR_tempr1, 8) = MR_tfield(3, MR_tempr4, 8);
	MR_tfield(3, MR_tempr1, 9) = MR_tfield(3, MR_tempr4, 9);
	MR_tfield(3, MR_tempr1, 10) = MR_tfield(3, MR_tempr4, 10);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr2, 1) = MR_sv(18);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr3;
	MR_tfield(1, MR_tempr3, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr3, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		ll_backend__frameopt__analyze_block_11_0_i49);
MR_def_label(ll_backend__frameopt__analyze_block_11_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(9) = MR_tfield(3, MR_tempr1, 1);
	MR_sv(10) = MR_tfield(3, MR_tempr1, 2);
	MR_sv(11) = MR_tfield(3, MR_tempr1, 3);
	MR_sv(12) = MR_tfield(3, MR_tempr1, 4);
	MR_sv(13) = MR_tfield(3, MR_tempr1, 5);
	MR_sv(14) = MR_tfield(3, MR_tempr1, 6);
	MR_sv(15) = MR_tfield(3, MR_tempr1, 8);
	MR_sv(16) = MR_tfield(3, MR_tempr1, 9);
	MR_sv(17) = MR_tfield(3, MR_tempr1, 10);
	MR_r1 = MR_tfield(1, MR_r4, 0);
	MR_r2 = MR_sv(8);
	}
	MR_np_call_localret_ent(ll_backend__opt_util__replace_labels_label_3_0,
		ll_backend__frameopt__analyze_block_11_0_i43);
MR_def_label(ll_backend__frameopt__analyze_block_11_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tempr2 = MR_sv(8);
	MR_sv(8) = MR_tempr1;
	MR_r1 = MR_sv(10);
	MR_r2 = MR_tempr2;
	}
	MR_np_call_localret_ent(ll_backend__opt_util__replace_labels_comps_3_0,
		ll_backend__frameopt__analyze_block_11_0_i45);
MR_def_label(ll_backend__frameopt__analyze_block_11_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 11);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 27;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(9);
	MR_tfield(3, MR_tempr1, 2) = MR_r1;
	MR_tfield(3, MR_tempr1, 3) = MR_sv(11);
	MR_tfield(3, MR_tempr1, 4) = MR_sv(12);
	MR_tfield(3, MR_tempr1, 5) = MR_sv(13);
	MR_tfield(3, MR_tempr1, 6) = MR_sv(14);
	MR_tfield(3, MR_tempr1, 7) = MR_sv(8);
	MR_tfield(3, MR_tempr1, 8) = MR_sv(15);
	MR_tfield(3, MR_tempr1, 9) = MR_sv(16);
	MR_tfield(3, MR_tempr1, 10) = MR_sv(17);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr2, 1) = MR_sv(18);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr3;
	MR_tfield(1, MR_tempr3, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr3, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = MR_sv(7);
	MR_sv(8) = MR_tempr1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		ll_backend__frameopt__analyze_block_11_0_i49);
MR_def_label(ll_backend__frameopt__analyze_block_11_0,49)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_r1 = MR_sv(8);
	MR_GOTO_LAB(ll_backend__frameopt__analyze_block_11_0_i53);
MR_def_label(ll_backend__frameopt__analyze_block_11_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r3;
MR_def_label(ll_backend__frameopt__analyze_block_11_0,53)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_np_call_localret_ent(ll_backend__opt_util__possible_targets_3_0,
		ll_backend__frameopt__analyze_block_11_0_i54);
MR_def_label(ll_backend__frameopt__analyze_block_11_0,54)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 4);
	MR_tfield(0, MR_r2, 0) = (MR_Word) MR_COMMON(6,1);
	MR_tfield(0, MR_r2, 1) = (MR_Word) MR_ENTRY_AP(ll_backend__frameopt__local_label_2_0);
	MR_tfield(0, MR_r2, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_r2, 3) = MR_sv(3);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, label);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__filter_3_0,
		ll_backend__frameopt__analyze_block_11_0_i56);
MR_def_label(ll_backend__frameopt__analyze_block_11_0,56)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(18) = MR_r1;
	MR_r1 = MR_sv(8);
	MR_np_call_localret_ent(fn__ll_backend__opt_util__can_instr_fall_through_1_0,
		ll_backend__frameopt__analyze_block_11_0_i58);
MR_def_label(ll_backend__frameopt__analyze_block_11_0,58)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(ll_backend__frameopt__analyze_block_11_0_i57);
	}
	if (MR_LTAGS_TEST(MR_sv(19),0,0)) {
		MR_GOTO_LAB(ll_backend__frameopt__analyze_block_11_0_i57);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_r3 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_tfield(1, MR_sv(19), 0);
	MR_r1 = MR_sv(2);
	MR_sv(19) = MR_tempr1;
	MR_GOTO_LAB(ll_backend__frameopt__analyze_block_11_0_i62);
	}
MR_def_label(ll_backend__frameopt__analyze_block_11_0,57)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_sv(19) = (MR_Word) MR_tbmkword(0, 0);
MR_def_label(ll_backend__frameopt__analyze_block_11_0,62)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(8),3,6)) {
		MR_GOTO_LAB(ll_backend__frameopt__analyze_block_11_0_i64);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(3, MR_sv(8), 1);
	if (MR_PTAG_TESTR(MR_tempr1,1)) {
		MR_GOTO_LAB(ll_backend__frameopt__analyze_block_11_0_i64);
	}
	MR_r2 = MR_tfield(1, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(ll_backend__frameopt__matching_label_ref_2_0,
		ll_backend__frameopt__analyze_block_11_0_i67);
MR_def_label(ll_backend__frameopt__analyze_block_11_0,67)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__frameopt__analyze_block_11_0_i64);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 6);
	MR_r4 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_sv(4);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(7);
	MR_tfield(0, MR_tempr1, 2) = MR_sv(5);
	MR_tfield(0, MR_tempr1, 3) = MR_sv(18);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(19);
	MR_tfield(0, MR_tempr1, 5) = MR_sv(6);
	MR_r3 = MR_sv(1);
	MR_r5 = MR_sv(20);
	MR_sv(1) = (MR_Integer) 1;
	MR_r2 = MR_sv(24);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, label);
	MR_GOTO_LAB(ll_backend__frameopt__analyze_block_11_0_i73);
	}
MR_def_label(ll_backend__frameopt__analyze_block_11_0,64)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 6);
	MR_r4 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_sv(4);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(7);
	MR_tfield(0, MR_tempr1, 2) = MR_sv(5);
	MR_tfield(0, MR_tempr1, 3) = MR_sv(18);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(19);
	MR_tfield(0, MR_tempr1, 5) = MR_sv(6);
	MR_r3 = MR_sv(1);
	MR_r5 = MR_sv(20);
	MR_sv(1) = MR_sv(22);
	MR_r2 = MR_sv(24);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, label);
	MR_GOTO_LAB(ll_backend__frameopt__analyze_block_11_0_i73);
	}
MR_def_label(ll_backend__frameopt__analyze_block_11_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("ll_backend.frameopt", 19);
	MR_r2 = (MR_Word) MR_string_const("predicate \140ll_backend.frameopt.analyze_block\'/11", 48);
	MR_r3 = (MR_Word) MR_string_const("mismatch or no last instr", 25);
	MR_np_call_localret_ent(require__unexpected_3_0,
		ll_backend__frameopt__analyze_block_11_0_i73);
MR_def_label(ll_backend__frameopt__analyze_block_11_0,73)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(24) = MR_r2;
	MR_np_call_localret_ent(map__det_update_4_0,
		ll_backend__frameopt__analyze_block_11_0_i74);
MR_def_label(ll_backend__frameopt__analyze_block_11_0,74)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(19) = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(3);
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_np_call_localret_ent(ll_backend__frameopt__find_redoip_labels_4_0,
		ll_backend__frameopt__analyze_block_11_0_i75);
MR_def_label(ll_backend__frameopt__analyze_block_11_0,75)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(9,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(ll_backend__frameopt__IntroducedFrom__pred__analyze_block__1252__1_4_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(23);
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 3);
	MR_tfield(0, MR_r2, 0) = (MR_Word) MR_CTOR_ADDR(tree234, tree234, 2);
	MR_tfield(0, MR_r2, 1) = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, label);
	MR_tfield(0, MR_r2, 2) = MR_sv(24);
	MR_tempr2 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, label);
	MR_r4 = MR_tempr2;
	MR_r5 = MR_sv(19);
	}
	MR_np_call_localret_ent(list__foldl_4_0,
		ll_backend__frameopt__analyze_block_11_0_i78);
MR_def_label(ll_backend__frameopt__analyze_block_11_0,78)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(21);
	MR_r3 = MR_sv(1);
	MR_decr_sp_and_return(25);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__frameopt_module11)
	MR_init_entry1(ll_backend__frameopt__analyze_block_map_2_10_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__frameopt__analyze_block_map_2_10_0);
	MR_init_label3(ll_backend__frameopt__analyze_block_map_2_10_0,10,3,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'analyze_block_map_2'/10 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__frameopt__analyze_block_map_2_10_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
MR_def_label(ll_backend__frameopt__analyze_block_map_2_10_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(ll_backend__frameopt__analyze_block_map_2_10_0_i3);
	}
	MR_r1 = MR_r6;
	MR_r2 = MR_r7;
	MR_r3 = MR_r8;
	MR_decr_sp_and_return(6);
MR_def_label(ll_backend__frameopt__analyze_block_map_2_10_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r4;
	MR_sv(3) = MR_r5;
	MR_sv(4) = MR_tfield(1, MR_r2, 1);
	MR_sv(5) = MR_r1;
	MR_r2 = MR_tfield(1, MR_r2, 0);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(1);
	MR_r5 = MR_sv(2);
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_r6;
	MR_r6 = MR_sv(3);
	MR_tempr2 = MR_r7;
	MR_r7 = MR_tempr1;
	MR_tempr3 = MR_r8;
	MR_r8 = MR_tempr2;
	MR_r9 = MR_tempr3;
	}
	MR_np_call_localret_ent(ll_backend__frameopt__analyze_block_11_0,
		ll_backend__frameopt__analyze_block_map_2_10_0_i4);
MR_def_label(ll_backend__frameopt__analyze_block_map_2_10_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_sv(4);
	MR_tempr3 = MR_r3;
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_r5 = MR_sv(3);
	MR_r6 = MR_tempr1;
	MR_r7 = MR_tempr2;
	MR_r8 = MR_tempr3;
	MR_succip_word = MR_sv(6);
	MR_GOTO_LAB(ll_backend__frameopt__analyze_block_map_2_10_0_i10);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(map__search_3_0);

MR_BEGIN_MODULE(ll_backend__frameopt_module12)
	MR_init_entry1(ll_backend__frameopt__analyze_block_map_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__frameopt__analyze_block_map_5_0);
	MR_init_label9(ll_backend__frameopt__analyze_block_map_5_0,5,6,8,10,13,14,15,16,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'analyze_block_map'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__frameopt__analyze_block_map_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	if (MR_LTAGS_TEST(MR_r2,0,0)) {
		MR_GOTO_LAB(ll_backend__frameopt__analyze_block_map_5_0_i2);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(1, MR_r2, 1);
	if (MR_LTAGS_TEST(MR_tempr1,0,0)) {
		MR_GOTO_LAB(ll_backend__frameopt__analyze_block_map_5_0_i2);
	}
	MR_sv(4) = MR_r2;
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_tfield(1, MR_r2, 0);
	MR_sv(3) = MR_tfield(1, MR_tempr1, 0);
	MR_sv(5) = MR_r4;
	MR_sv(6) = MR_r1;
	MR_r2 = (MR_Integer) 1;
	}
	MR_np_call_localret_ent(private_builtin__type_info_from_typeclass_info_3_0,
		ll_backend__frameopt__analyze_block_map_5_0_i5);
MR_def_label(ll_backend__frameopt__analyze_block_map_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = (MR_Integer) 2;
	MR_np_call_localret_ent(private_builtin__type_info_from_typeclass_info_3_0,
		ll_backend__frameopt__analyze_block_map_5_0_i6);
MR_def_label(ll_backend__frameopt__analyze_block_map_5_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 3);
	MR_tfield(0, MR_r2, 0) = (MR_Word) MR_CTOR_ADDR(ll_backend__frameopt, frame_block_info, 2);
	MR_tfield(0, MR_r2, 1) = MR_sv(7);
	MR_tfield(0, MR_r2, 2) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, label);
	MR_r3 = MR_sv(5);
	MR_r4 = MR_sv(2);
	MR_np_call_localret_ent(map__search_3_0,
		ll_backend__frameopt__analyze_block_map_5_0_i8);
MR_def_label(ll_backend__frameopt__analyze_block_map_5_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__frameopt__analyze_block_map_5_0_i2);
	}
	MR_sv(7) = MR_tfield(0, MR_r2, 5);
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tfield(0, MR_r2, 0);
	MR_np_call_localret_ent(__Unify___ll_backend__llds__label_0_0,
		ll_backend__frameopt__analyze_block_map_5_0_i10);
MR_def_label(ll_backend__frameopt__analyze_block_map_5_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__frameopt__analyze_block_map_5_0_i2);
	}
	if (MR_PTAG_TESTR(MR_sv(7),0)) {
		MR_GOTO_LAB(ll_backend__frameopt__analyze_block_map_5_0_i2);
	}
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(fn__ll_backend__llds__get_proc_label_1_0,
		ll_backend__frameopt__analyze_block_map_5_0_i13);
MR_def_label(ll_backend__frameopt__analyze_block_map_5_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_sv(7) = MR_tfield(1, MR_tempr1, 1);
	MR_r1 = MR_sv(6);
	MR_r2 = MR_tfield(1, MR_tempr1, 0);
	MR_r3 = MR_sv(7);
	MR_r4 = MR_sv(2);
	MR_r5 = MR_sv(4);
	MR_r6 = MR_sv(1);
	MR_r7 = MR_sv(5);
	MR_r8 = (MR_Integer) 0;
	MR_r9 = (MR_Integer) 0;
	}
	MR_np_call_localret_ent(ll_backend__frameopt__analyze_block_11_0,
		ll_backend__frameopt__analyze_block_map_5_0_i14);
MR_def_label(ll_backend__frameopt__analyze_block_map_5_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_sv(7);
	MR_tempr3 = MR_r3;
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(4);
	MR_r5 = MR_sv(1);
	MR_r6 = MR_tempr1;
	MR_r7 = MR_tempr2;
	MR_r8 = MR_tempr3;
	}
	MR_np_call_localret_ent(ll_backend__frameopt__analyze_block_map_2_10_0,
		ll_backend__frameopt__analyze_block_map_5_0_i15);
MR_def_label(ll_backend__frameopt__analyze_block_map_5_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r2,1)) {
		MR_GOTO_LAB(ll_backend__frameopt__analyze_block_map_5_0_i16);
	}
	if (MR_INT_NE(MR_r3,1)) {
		MR_GOTO_LAB(ll_backend__frameopt__analyze_block_map_5_0_i16);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(3);
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r2, 0) = MR_tempr1;
	MR_decr_sp_and_return(8);
	}
MR_def_label(ll_backend__frameopt__analyze_block_map_5_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_decr_sp_and_return(8);
MR_def_label(ll_backend__frameopt__analyze_block_map_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("ll_backend.frameopt", 19);
	MR_r2 = (MR_Word) MR_string_const("predicate \140ll_backend.frameopt.analyze_block_map\'/5", 51);
	MR_r3 = (MR_Word) MR_string_const("bad data", 8);
	MR_succip_word = MR_sv(8);
	MR_decr_sp(8);
	MR_np_tailcall_ent(require__unexpected_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(list__member_2_1);
MR_declare_entry(MR_do_redo);

MR_BEGIN_MODULE(ll_backend__frameopt_module13)
	MR_init_entry1(fn__ll_backend__frameopt__can_clobber_succip_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__ll_backend__frameopt__can_clobber_succip_2_0);
	MR_init_label9(fn__ll_backend__frameopt__can_clobber_succip_2_0,32,3,5,10,12,11,9,15,7)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'can_clobber_succip'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__ll_backend__frameopt__can_clobber_succip_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
MR_def_label(fn__ll_backend__frameopt__can_clobber_succip_2_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r3,0,0)) {
		MR_GOTO_LAB(fn__ll_backend__frameopt__can_clobber_succip_2_0_i3);
	}
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(8);
MR_def_label(fn__ll_backend__frameopt__can_clobber_succip_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_CTOR_ADDR(ll_backend__frameopt, frame_block_info, 2);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_tfield(0, MR_tempr1, 2) = MR_r2;
	MR_tempr3 = MR_r4;
	MR_sv(1) = MR_tempr3;
	MR_tempr4 = MR_r3;
	MR_sv(2) = MR_tfield(1, MR_tempr4, 1);
	MR_sv(3) = MR_r1;
	MR_sv(4) = MR_r2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, label);
	MR_r2 = MR_tempr1;
	MR_tempr2 = MR_tempr4;
	MR_r3 = MR_tempr3;
	MR_r4 = MR_tfield(1, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(map__lookup_3_0,
		fn__ll_backend__frameopt__can_clobber_succip_2_0_i5);
MR_def_label(fn__ll_backend__frameopt__can_clobber_succip_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = (MR_Word) MR_redoip_slot(MR_maxfr);
	MR_sv(6) = (MR_Word) MR_redofr_slot(MR_maxfr);
	MR_save_maxfr(MR_sv(7));
	MR_redofr_slot_word(MR_maxfr) = (MR_Word) MR_curfr;
	MR_redoip_slot_word(MR_maxfr) = (MR_Word) MR_LABEL_AP(fn__ll_backend__frameopt__can_clobber_succip_2_0_i9);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	MR_r2 = MR_tfield(0, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(list__member_2_1,
		fn__ll_backend__frameopt__can_clobber_succip_2_0_i10);
MR_def_label(fn__ll_backend__frameopt__can_clobber_succip_2_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_tfield(0, MR_r1, 0);
	if (MR_RTAGS_TESTR(MR_r2,3,27)) {
		MR_GOTO_LAB(fn__ll_backend__frameopt__can_clobber_succip_2_0_i12);
	}
	MR_r3 = MR_tfield(3, MR_r2, 3);
	if (MR_INT_NE(MR_r3,0)) {
		MR_GOTO(MR_ENTRY(MR_do_redo));
	}
	MR_GOTO_LAB(fn__ll_backend__frameopt__can_clobber_succip_2_0_i11);
MR_def_label(fn__ll_backend__frameopt__can_clobber_succip_2_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r2,3,3)) {
		MR_GOTO(MR_ENTRY(MR_do_redo));
	}
MR_def_label(fn__ll_backend__frameopt__can_clobber_succip_2_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_restore_maxfr(MR_sv(7));
	MR_redoip_slot_word(MR_maxfr) = MR_sv(5);
	MR_redofr_slot_word(MR_maxfr) = MR_sv(6);
	MR_GOTO_LAB(fn__ll_backend__frameopt__can_clobber_succip_2_0_i15);
MR_def_label(fn__ll_backend__frameopt__can_clobber_succip_2_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_redoip_slot_word(MR_maxfr) = MR_sv(5);
	MR_redofr_slot_word(MR_maxfr) = MR_sv(6);
	MR_GOTO_LAB(fn__ll_backend__frameopt__can_clobber_succip_2_0_i7);
MR_def_label(fn__ll_backend__frameopt__can_clobber_succip_2_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(8);
MR_def_label(fn__ll_backend__frameopt__can_clobber_succip_2_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(1);
	MR_succip_word = MR_sv(8);
	MR_GOTO_LAB(fn__ll_backend__frameopt__can_clobber_succip_2_0_i32);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(string__append_3_2);

MR_BEGIN_MODULE(ll_backend__frameopt_module14)
	MR_init_entry1(ll_backend__frameopt__keep_frame_transform_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__frameopt__keep_frame_transform_6_0);
	MR_init_label10(ll_backend__frameopt__keep_frame_transform_6_0,165,3,4,6,16,19,21,23,18,25)
	MR_init_label7(ll_backend__frameopt__keep_frame_transform_6_0,29,30,35,37,42,47,5)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'keep_frame_transform'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__frameopt__keep_frame_transform_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(16);
	MR_sv(16) = (MR_Word) MR_succip;
MR_def_label(ll_backend__frameopt__keep_frame_transform_6_0,165)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(ll_backend__frameopt__keep_frame_transform_6_0_i3);
	}
	MR_r1 = MR_r5;
	MR_decr_sp_and_return(16);
MR_def_label(ll_backend__frameopt__keep_frame_transform_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r5;
	MR_sv(4) = MR_tempr1;
	MR_sv(5) = MR_tfield(1, MR_r1, 0);
	MR_sv(6) = MR_tfield(1, MR_r1, 1);
	MR_sv(12) = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, label);
	MR_sv(13) = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r1 = MR_sv(12);
	MR_r2 = MR_sv(13);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(5);
	}
	MR_np_call_localret_ent(map__lookup_3_0,
		ll_backend__frameopt__keep_frame_transform_6_0_i4);
MR_def_label(ll_backend__frameopt__keep_frame_transform_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_tfield(0, MR_r1, 1);
	MR_sv(7) = MR_tfield(0, MR_r1, 2);
	MR_sv(9) = MR_tfield(0, MR_r1, 3);
	MR_sv(10) = MR_tfield(0, MR_r1, 4);
	MR_sv(11) = MR_tfield(0, MR_r1, 5);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_tfield(0, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(__Unify___ll_backend__llds__label_0_0,
		ll_backend__frameopt__keep_frame_transform_6_0_i6);
MR_def_label(ll_backend__frameopt__keep_frame_transform_6_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__frameopt__keep_frame_transform_6_0_i5);
	}
	if (MR_LTAGS_TESTR(MR_sv(10),0,0)) {
		MR_GOTO_LAB(ll_backend__frameopt__keep_frame_transform_6_0_i5);
	}
	if (MR_LTAGS_TEST(MR_sv(9),0,0)) {
		MR_GOTO_LAB(ll_backend__frameopt__keep_frame_transform_6_0_i5);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tempr1 = MR_tfield(1, MR_sv(9), 1);
	if (MR_LTAGS_TESTR(MR_tempr1,0,0)) {
		MR_GOTO_LAB(ll_backend__frameopt__keep_frame_transform_6_0_i5);
	}
	if (MR_PTAG_TESTR(MR_sv(11),2)) {
		MR_GOTO_LAB(ll_backend__frameopt__keep_frame_transform_6_0_i5);
	}
	MR_tempr2 = MR_tfield(2, MR_sv(11), 0);
	MR_tempr3 = MR_tfield(0, MR_tempr2, 2);
	MR_tempr1 = MR_tfield(0, MR_tempr3, 0);
	if (MR_RTAGS_TESTR(MR_tempr1,3,6)) {
		MR_GOTO_LAB(ll_backend__frameopt__keep_frame_transform_6_0_i5);
	}
	MR_tempr4 = MR_tfield(3, MR_tempr1, 1);
	if (MR_PTAG_TESTR(MR_tempr4,1)) {
		MR_GOTO_LAB(ll_backend__frameopt__keep_frame_transform_6_0_i5);
	}
	if (MR_PTAG_TESTR(MR_sv(1),1)) {
		MR_GOTO_LAB(ll_backend__frameopt__keep_frame_transform_6_0_i5);
	}
	MR_tempr1 = MR_tfield(1, MR_tempr4, 0);
	if (MR_PTAG_TESTR(MR_tempr1,1)) {
		MR_GOTO_LAB(ll_backend__frameopt__keep_frame_transform_6_0_i5);
	}
	MR_sv(9) = MR_tfield(0, MR_tempr2, 0);
	MR_sv(10) = MR_tfield(0, MR_tempr2, 1);
	MR_sv(11) = MR_tfield(0, MR_tempr3, 1);
	MR_tempr5 = MR_sv(1);
	MR_sv(14) = MR_tfield(1, MR_tempr5, 0);
	MR_sv(15) = MR_tfield(1, MR_tempr1, 0);
	MR_r1 = MR_tfield(1, MR_tempr5, 1);
	MR_r2 = MR_tfield(1, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(__Unify___mdbcomp__prim_data__proc_label_0_0,
		ll_backend__frameopt__keep_frame_transform_6_0_i16);
MR_def_label(ll_backend__frameopt__keep_frame_transform_6_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__frameopt__keep_frame_transform_6_0_i5);
	}
	if (MR_INT_NE(MR_sv(14),0)) {
		MR_GOTO_LAB(ll_backend__frameopt__keep_frame_transform_6_0_i19);
	}
	if (MR_INT_NE(MR_sv(15),0)) {
		MR_GOTO_LAB(ll_backend__frameopt__keep_frame_transform_6_0_i5);
	}
	MR_r1 = MR_sv(11);
	MR_GOTO_LAB(ll_backend__frameopt__keep_frame_transform_6_0_i18);
MR_def_label(ll_backend__frameopt__keep_frame_transform_6_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(14),2)) {
		MR_GOTO_LAB(ll_backend__frameopt__keep_frame_transform_6_0_i21);
	}
	MR_r1 = MR_sv(11);
	MR_GOTO_LAB(ll_backend__frameopt__keep_frame_transform_6_0_i18);
MR_def_label(ll_backend__frameopt__keep_frame_transform_6_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(15),0)) {
		MR_GOTO_LAB(ll_backend__frameopt__keep_frame_transform_6_0_i23);
	}
	MR_r1 = MR_sv(11);
	MR_GOTO_LAB(ll_backend__frameopt__keep_frame_transform_6_0_i18);
MR_def_label(ll_backend__frameopt__keep_frame_transform_6_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(15),1)) {
		MR_GOTO_LAB(ll_backend__frameopt__keep_frame_transform_6_0_i5);
	}
	MR_r1 = MR_sv(11);
MR_def_label(ll_backend__frameopt__keep_frame_transform_6_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_sv(8),0,0)) {
		MR_GOTO_LAB(ll_backend__frameopt__keep_frame_transform_6_0_i25);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(0, MR_tfield(1, MR_sv(8), 0), 0);
	if (MR_RTAGS_TESTR(MR_tempr1,3,5)) {
		MR_GOTO_LAB(ll_backend__frameopt__keep_frame_transform_6_0_i25);
	}
	MR_sv(8) = MR_tfield(1, MR_sv(8), 0);
	MR_r2 = (MR_Word) MR_string_const(" (keeping frame)", 16);
	}
	MR_np_call_localret_ent(string__append_3_2,
		ll_backend__frameopt__keep_frame_transform_6_0_i30);
MR_def_label(ll_backend__frameopt__keep_frame_transform_6_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(11) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("ll_backend.frameopt", 19);
	MR_r2 = (MR_Word) MR_string_const("predicate \140ll_backend.frameopt.keep_frame_transform\'/6", 54);
	MR_r3 = (MR_Word) MR_string_const("block does not begin with label", 31);
	MR_np_call_localret_ent(require__unexpected_3_0,
		ll_backend__frameopt__keep_frame_transform_6_0_i29);
MR_def_label(ll_backend__frameopt__keep_frame_transform_6_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(string__append_3_2,
		ll_backend__frameopt__keep_frame_transform_6_0_i30);
MR_def_label(ll_backend__frameopt__keep_frame_transform_6_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(2);
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 6;
	MR_tfield(3, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr3, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr3, 0) = MR_tempr2;
	MR_tfield(0, MR_tempr3, 1) = MR_r1;
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr4;
	MR_tfield(1, MR_tempr4, 0) = MR_tempr3;
	MR_tfield(1, MR_tempr4, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	MR_r2 = MR_sv(10);
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		ll_backend__frameopt__keep_frame_transform_6_0_i35);
MR_def_label(ll_backend__frameopt__keep_frame_transform_6_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(3),0)) {
		MR_GOTO_LAB(ll_backend__frameopt__keep_frame_transform_6_0_i37);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(8);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr3, 0, (MR_Integer) 6);
	MR_r4 = MR_tempr3;
	MR_tempr4 = MR_sv(5);
	MR_tfield(0, MR_tempr3, 0) = MR_tempr4;
	MR_tfield(0, MR_tempr3, 1) = MR_tempr1;
	MR_tfield(0, MR_tempr3, 2) = MR_sv(7);
	MR_tfield(0, MR_tempr3, 3) = MR_tempr2;
	MR_tfield(0, MR_tempr3, 4) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_tempr3, 5) = (MR_Word) MR_TAG_COMMON(1,5,1);
	MR_r5 = MR_sv(4);
	MR_r3 = MR_tempr4;
	MR_r1 = MR_sv(12);
	MR_r2 = MR_sv(13);
	}
	MR_np_call_localret_ent(map__det_update_4_0,
		ll_backend__frameopt__keep_frame_transform_6_0_i47);
MR_def_label(ll_backend__frameopt__keep_frame_transform_6_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	MR_r2 = MR_sv(9);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		ll_backend__frameopt__keep_frame_transform_6_0_i42);
MR_def_label(ll_backend__frameopt__keep_frame_transform_6_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(8);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr3, 0, (MR_Integer) 6);
	MR_r4 = MR_tempr3;
	MR_tempr4 = MR_sv(5);
	MR_tfield(0, MR_tempr3, 0) = MR_tempr4;
	MR_tfield(0, MR_tempr3, 1) = MR_tempr1;
	MR_tfield(0, MR_tempr3, 2) = MR_sv(7);
	MR_tfield(0, MR_tempr3, 3) = MR_tempr2;
	MR_tfield(0, MR_tempr3, 4) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_tempr3, 5) = (MR_Word) MR_TAG_COMMON(1,5,1);
	MR_r5 = MR_sv(4);
	MR_r3 = MR_tempr4;
	MR_r1 = MR_sv(12);
	MR_r2 = MR_sv(13);
	}
	MR_np_call_localret_ent(map__det_update_4_0,
		ll_backend__frameopt__keep_frame_transform_6_0_i47);
MR_def_label(ll_backend__frameopt__keep_frame_transform_6_0,47)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r5 = MR_tempr1;
	MR_succip_word = MR_sv(16);
	MR_GOTO_LAB(ll_backend__frameopt__keep_frame_transform_6_0_i165);
	}
MR_def_label(ll_backend__frameopt__keep_frame_transform_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_r1 = MR_sv(6);
	MR_r5 = MR_sv(4);
	MR_succip_word = MR_sv(16);
	MR_GOTO_LAB(ll_backend__frameopt__keep_frame_transform_6_0_i165);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__frameopt_module15)
	MR_init_entry1(ll_backend__frameopt__can_delay_frame_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__frameopt__can_delay_frame_2_0);
	MR_init_label2(ll_backend__frameopt__can_delay_frame_2_0,5,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'can_delay_frame'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__frameopt__can_delay_frame_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r3,0,0)) {
		MR_GOTO_LAB(ll_backend__frameopt__can_delay_frame_2_0_i2);
	}
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_CTOR_ADDR(ll_backend__frameopt, frame_block_info, 2);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_tfield(0, MR_tempr1, 2) = MR_r2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, label);
	MR_r2 = MR_tempr1;
	MR_tempr2 = MR_r3;
	MR_r3 = MR_r4;
	MR_r4 = MR_tfield(1, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(map__lookup_3_0,
		ll_backend__frameopt__can_delay_frame_2_0_i5);
MR_def_label(ll_backend__frameopt__can_delay_frame_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_tfield(0, MR_r1, 5);
	MR_r1 = (MR_tag(MR_r2) == MR_mktag((MR_Integer) 0));
	MR_decr_sp_and_return(1);
MR_def_label(ll_backend__frameopt__can_delay_frame_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__frameopt_module16)
	MR_init_entry1(ll_backend__frameopt__rev_map_side_labels_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__frameopt__rev_map_side_labels_4_0);
	MR_init_label5(ll_backend__frameopt__rev_map_side_labels_4_0,26,3,5,4,10)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'rev_map_side_labels'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__frameopt__rev_map_side_labels_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
MR_def_label(ll_backend__frameopt__rev_map_side_labels_4_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(ll_backend__frameopt__rev_map_side_labels_4_0_i3);
	}
	MR_r1 = MR_r3;
	MR_decr_sp_and_return(5);
MR_def_label(ll_backend__frameopt__rev_map_side_labels_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_tfield(1, MR_r1, 1);
	MR_r4 = MR_tfield(1, MR_r1, 0);
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, label);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,1);
	MR_np_call_localret_ent(map__search_3_0,
		ll_backend__frameopt__rev_map_side_labels_4_0_i5);
MR_def_label(ll_backend__frameopt__rev_map_side_labels_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__frameopt__rev_map_side_labels_4_0_i4);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r4 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = MR_r2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, label);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,1);
	MR_r3 = MR_sv(3);
	MR_r5 = MR_sv(2);
	}
	MR_np_call_localret_ent(map__det_update_4_0,
		ll_backend__frameopt__rev_map_side_labels_4_0_i10);
MR_def_label(ll_backend__frameopt__rev_map_side_labels_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r4 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, label);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,1);
	MR_r3 = MR_sv(3);
	MR_r5 = MR_sv(2);
	}
	MR_np_call_localret_ent(map__det_insert_4_0,
		ll_backend__frameopt__rev_map_side_labels_4_0_i10);
MR_def_label(ll_backend__frameopt__rev_map_side_labels_4_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r3 = MR_tempr1;
	MR_succip_word = MR_sv(5);
	MR_GOTO_LAB(ll_backend__frameopt__rev_map_side_labels_4_0_i26);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(queue__put_3_0);

MR_BEGIN_MODULE(ll_backend__frameopt_module17)
	MR_init_entry1(ll_backend__frameopt__delay_frame_init_8_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__frameopt__delay_frame_init_8_0);
	MR_init_label10(ll_backend__frameopt__delay_frame_init_8_0,35,3,5,7,8,11,10,12,13,6)
	MR_init_label2(ll_backend__frameopt__delay_frame_init_8_0,14,17)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'delay_frame_init'/8 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__frameopt__delay_frame_init_8_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(10);
	MR_sv(10) = (MR_Word) MR_succip;
MR_def_label(ll_backend__frameopt__delay_frame_init_8_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r3,0,0)) {
		MR_GOTO_LAB(ll_backend__frameopt__delay_frame_init_8_0_i3);
	}
	MR_r1 = MR_r5;
	MR_r2 = MR_r6;
	MR_r3 = MR_r7;
	MR_decr_sp_and_return(10);
MR_def_label(ll_backend__frameopt__delay_frame_init_8_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_CTOR_ADDR(ll_backend__frameopt, frame_block_info, 2);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_tfield(0, MR_tempr1, 2) = MR_r2;
	MR_tempr2 = MR_r4;
	MR_sv(1) = MR_tempr2;
	MR_sv(4) = MR_r5;
	MR_sv(5) = MR_r6;
	MR_sv(8) = MR_r7;
	MR_tempr3 = MR_r3;
	MR_sv(2) = MR_tfield(1, MR_tempr3, 0);
	MR_sv(3) = MR_tfield(1, MR_tempr3, 1);
	MR_sv(6) = MR_r1;
	MR_sv(7) = MR_r2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, label);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	MR_r4 = MR_sv(2);
	}
	MR_np_call_localret_ent(map__lookup_3_0,
		ll_backend__frameopt__delay_frame_init_8_0_i5);
MR_def_label(ll_backend__frameopt__delay_frame_init_8_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_tfield(0, MR_r1, 5);
	if (MR_PTAG_TESTR(MR_r4,0)) {
		MR_GOTO_LAB(ll_backend__frameopt__delay_frame_init_8_0_i7);
	}
	MR_r3 = MR_sv(4);
	MR_r2 = MR_sv(2);
	MR_sv(4) = MR_sv(5);
	MR_sv(5) = MR_sv(8);
	MR_r4 = MR_r1;
	MR_r1 = MR_tfield(0, MR_r1, 3);
	MR_sv(9) = MR_tfield(0, MR_r4, 4);
	MR_GOTO_LAB(ll_backend__frameopt__delay_frame_init_8_0_i6);
MR_def_label(ll_backend__frameopt__delay_frame_init_8_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r4,2)) {
		MR_GOTO_LAB(ll_backend__frameopt__delay_frame_init_8_0_i8);
	}
	MR_r3 = MR_sv(4);
	MR_r2 = MR_sv(2);
	MR_sv(4) = MR_sv(5);
	MR_sv(5) = MR_sv(8);
	MR_r4 = MR_r1;
	MR_r1 = MR_tfield(0, MR_r1, 3);
	MR_sv(9) = MR_tfield(0, MR_r4, 4);
	MR_GOTO_LAB(ll_backend__frameopt__delay_frame_init_8_0_i6);
MR_def_label(ll_backend__frameopt__delay_frame_init_8_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(1, MR_r4, 0);
	if (MR_INT_NE(MR_tempr1,1)) {
		MR_GOTO_LAB(ll_backend__frameopt__delay_frame_init_8_0_i10);
	}
	MR_tempr1 = MR_sv(8);
	MR_sv(8) = MR_tfield(0, MR_r1, 3);
	MR_sv(9) = MR_tfield(0, MR_r1, 4);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, label);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(ll_backend__frameopt, block_needs_frame);
	MR_r3 = MR_sv(2);
	MR_r4 = (MR_Integer) 1;
	MR_r5 = MR_tempr1;
	}
	MR_np_call_localret_ent(map__det_insert_4_0,
		ll_backend__frameopt__delay_frame_init_8_0_i11);
MR_def_label(ll_backend__frameopt__delay_frame_init_8_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(4);
	MR_r2 = MR_sv(2);
	MR_sv(4) = MR_sv(5);
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(8);
	MR_GOTO_LAB(ll_backend__frameopt__delay_frame_init_8_0_i6);
MR_def_label(ll_backend__frameopt__delay_frame_init_8_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(8);
	MR_sv(8) = MR_tfield(0, MR_r1, 3);
	MR_sv(9) = MR_tfield(0, MR_r1, 4);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, label);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(ll_backend__frameopt, block_needs_frame);
	MR_r3 = MR_sv(2);
	MR_r4 = (MR_Integer) 0;
	MR_r5 = MR_tempr1;
	}
	MR_np_call_localret_ent(map__det_insert_4_0,
		ll_backend__frameopt__delay_frame_init_8_0_i12);
MR_def_label(ll_backend__frameopt__delay_frame_init_8_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(5);
	MR_sv(5) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, label);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(queue__put_3_0,
		ll_backend__frameopt__delay_frame_init_8_0_i13);
MR_def_label(ll_backend__frameopt__delay_frame_init_8_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(4);
	MR_r2 = MR_sv(2);
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(8);
MR_def_label(ll_backend__frameopt__delay_frame_init_8_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_sv(9),0,0)) {
		MR_GOTO_LAB(ll_backend__frameopt__delay_frame_init_8_0_i14);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_tfield(1, MR_sv(9), 0);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	}
MR_def_label(ll_backend__frameopt__delay_frame_init_8_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(ll_backend__frameopt__rev_map_side_labels_4_0,
		ll_backend__frameopt__delay_frame_init_8_0_i17);
MR_def_label(ll_backend__frameopt__delay_frame_init_8_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(7);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(1);
	MR_r5 = MR_tempr1;
	MR_r6 = MR_sv(4);
	MR_r7 = MR_sv(5);
	MR_succip_word = MR_sv(10);
	MR_GOTO_LAB(ll_backend__frameopt__delay_frame_init_8_0_i35);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(queue__get_3_0);
MR_decl_entry(set__insert_3_0);
MR_decl_entry(list__filter_4_0);
MR_decl_entry(queue__put_list_3_0);

MR_BEGIN_MODULE(ll_backend__frameopt_module18)
	MR_init_entry1(ll_backend__frameopt__propagate_frame_requirement_to_successors_9_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__frameopt__propagate_frame_requirement_to_successors_9_0);
	MR_init_label10(ll_backend__frameopt__propagate_frame_requirement_to_successors_9_0,57,4,6,8,10,12,13,14,17,16)
	MR_init_label5(ll_backend__frameopt__propagate_frame_requirement_to_successors_9_0,20,21,22,5,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'propagate_frame_requirement_to_successors'/9 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__frameopt__propagate_frame_requirement_to_successors_9_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(14);
	MR_sv(14) = (MR_Word) MR_succip;
MR_def_label(ll_backend__frameopt__propagate_frame_requirement_to_successors_9_0,57)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r8,0)) {
		MR_GOTO_LAB(ll_backend__frameopt__propagate_frame_requirement_to_successors_9_0_i3);
	}
	if (MR_INT_GE(MR_r7,0)) {
		MR_GOTO_LAB(ll_backend__frameopt__propagate_frame_requirement_to_successors_9_0_i4);
	}
	MR_r1 = MR_r5;
	MR_r2 = MR_r7;
	MR_r3 = (MR_Integer) 1;
	MR_decr_sp_and_return(14);
MR_def_label(ll_backend__frameopt__propagate_frame_requirement_to_successors_9_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r4;
	MR_sv(2) = MR_r5;
	MR_sv(6) = MR_r6;
	MR_sv(7) = MR_r7;
	MR_sv(3) = MR_r8;
	MR_sv(9) = MR_r1;
	MR_sv(10) = MR_r2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, label);
	MR_r2 = MR_r3;
	MR_np_call_localret_ent(queue__get_3_0,
		ll_backend__frameopt__propagate_frame_requirement_to_successors_9_0_i6);
MR_def_label(ll_backend__frameopt__propagate_frame_requirement_to_successors_9_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__frameopt__propagate_frame_requirement_to_successors_9_0_i5);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(6);
	MR_sv(6) = MR_r2;
	MR_sv(4) = MR_r3;
	MR_sv(5) = ((MR_Integer) MR_sv(7) - (MR_Integer) 1);
	MR_sv(11) = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, label);
	MR_r1 = MR_sv(11);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(set__insert_3_0,
		ll_backend__frameopt__propagate_frame_requirement_to_successors_9_0_i8);
MR_def_label(ll_backend__frameopt__propagate_frame_requirement_to_successors_9_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 3);
	MR_tfield(0, MR_r2, 0) = (MR_Word) MR_CTOR_ADDR(ll_backend__frameopt, frame_block_info, 2);
	MR_tfield(0, MR_r2, 1) = MR_sv(9);
	MR_tfield(0, MR_r2, 2) = MR_sv(10);
	MR_sv(8) = MR_r1;
	MR_r1 = MR_sv(11);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(6);
	MR_np_call_localret_ent(map__lookup_3_0,
		ll_backend__frameopt__propagate_frame_requirement_to_successors_9_0_i10);
MR_def_label(ll_backend__frameopt__propagate_frame_requirement_to_successors_9_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r9 = MR_tfield(0, MR_r1, 5);
	if (MR_PTAG_TESTR(MR_r9,0)) {
		MR_GOTO_LAB(ll_backend__frameopt__propagate_frame_requirement_to_successors_9_0_i12);
	}
	MR_r4 = MR_sv(1);
	MR_r7 = MR_sv(5);
	MR_r8 = (MR_Integer) 1;
	MR_r5 = MR_sv(2);
	MR_r6 = MR_sv(8);
	MR_r3 = MR_sv(4);
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(10);
	MR_succip_word = MR_sv(14);
	MR_GOTO_LAB(ll_backend__frameopt__propagate_frame_requirement_to_successors_9_0_i57);
MR_def_label(ll_backend__frameopt__propagate_frame_requirement_to_successors_9_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r9,2)) {
		MR_GOTO_LAB(ll_backend__frameopt__propagate_frame_requirement_to_successors_9_0_i13);
	}
	MR_r4 = MR_sv(1);
	MR_r7 = MR_sv(5);
	MR_r8 = MR_sv(3);
	MR_r5 = MR_sv(2);
	MR_r6 = MR_sv(8);
	MR_r3 = MR_sv(4);
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(10);
	MR_succip_word = MR_sv(14);
	MR_GOTO_LAB(ll_backend__frameopt__propagate_frame_requirement_to_successors_9_0_i57);
MR_def_label(ll_backend__frameopt__propagate_frame_requirement_to_successors_9_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_sv(12) = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, label);
	MR_sv(13) = (MR_Word) MR_CTOR0_ADDR(ll_backend__frameopt, block_needs_frame);
	MR_r1 = MR_sv(12);
	MR_r2 = MR_sv(13);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(6);
	MR_np_call_localret_ent(map__lookup_3_0,
		ll_backend__frameopt__propagate_frame_requirement_to_successors_9_0_i14);
MR_def_label(ll_backend__frameopt__propagate_frame_requirement_to_successors_9_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(ll_backend__frameopt__propagate_frame_requirement_to_successors_9_0_i16);
	}
	MR_r1 = MR_sv(12);
	MR_r2 = MR_sv(13);
	MR_r3 = MR_sv(6);
	MR_r4 = (MR_Integer) 0;
	MR_r5 = MR_sv(2);
	MR_np_call_localret_ent(map__det_update_4_0,
		ll_backend__frameopt__propagate_frame_requirement_to_successors_9_0_i17);
MR_def_label(ll_backend__frameopt__propagate_frame_requirement_to_successors_9_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 4);
	MR_tfield(0, MR_r2, 0) = (MR_Word) MR_COMMON(6,2);
	MR_tfield(0, MR_r2, 1) = (MR_Word) MR_ENTRY_AP(ll_backend__frameopt__IntroducedFrom__pred__propagate_frame_requirement_to_successors__1691__1_2_0);
	MR_tfield(0, MR_r2, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_r2, 3) = MR_sv(8);
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(7);
	MR_sv(7) = MR_r2;
	MR_np_call_localret_ent(fn__f_108_108_95_98_97_99_107_101_110_100_95_95_102_114_97_109_101_111_112_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_115_117_99_99_101_115_115_111_114_115_95_95_91_49_44_32_50_93_95_48_1_0,
		ll_backend__frameopt__propagate_frame_requirement_to_successors_9_0_i20);
MR_def_label(ll_backend__frameopt__propagate_frame_requirement_to_successors_9_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(6,3);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(ll_backend__frameopt__IntroducedFrom__pred__propagate_frame_requirement_to_successors__1691__1_2_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(8);
	MR_r1 = MR_sv(7);
	MR_sv(6) = MR_sv(2);
	MR_sv(7) = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_108_108_95_98_97_99_107_101_110_100_95_95_102_114_97_109_101_111_112_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_115_117_99_99_101_115_115_111_114_115_95_95_91_49_44_32_50_93_95_48_1_0,
		ll_backend__frameopt__propagate_frame_requirement_to_successors_9_0_i20);
MR_def_label(ll_backend__frameopt__propagate_frame_requirement_to_successors_9_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(11);
	MR_r2 = MR_sv(7);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__filter_4_0,
		ll_backend__frameopt__propagate_frame_requirement_to_successors_9_0_i21);
MR_def_label(ll_backend__frameopt__propagate_frame_requirement_to_successors_9_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(11);
	MR_r3 = MR_sv(4);
	MR_np_call_localret_ent(queue__put_list_3_0,
		ll_backend__frameopt__propagate_frame_requirement_to_successors_9_0_i22);
MR_def_label(ll_backend__frameopt__propagate_frame_requirement_to_successors_9_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_sv(1);
	MR_r7 = MR_sv(5);
	MR_r8 = MR_sv(3);
	MR_r5 = MR_sv(6);
	MR_r6 = MR_sv(8);
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(10);
	MR_succip_word = MR_sv(14);
	MR_GOTO_LAB(ll_backend__frameopt__propagate_frame_requirement_to_successors_9_0_i57);
MR_def_label(ll_backend__frameopt__propagate_frame_requirement_to_successors_9_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(7);
	MR_r3 = MR_sv(3);
	MR_decr_sp_and_return(14);
MR_def_label(ll_backend__frameopt__propagate_frame_requirement_to_successors_9_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r5;
	MR_r2 = MR_r7;
	MR_r3 = MR_r8;
	MR_decr_sp_and_return(14);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(list__foldl2_6_0);

MR_BEGIN_MODULE(ll_backend__frameopt_module19)
	MR_init_entry1(ll_backend__frameopt__propagate_frame_requirement_to_predecessors_9_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__frameopt__propagate_frame_requirement_to_predecessors_9_0);
	MR_init_label10(ll_backend__frameopt__propagate_frame_requirement_to_predecessors_9_0,57,4,6,9,8,12,15,14,18,19)
	MR_init_label4(ll_backend__frameopt__propagate_frame_requirement_to_predecessors_9_0,21,22,5,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'propagate_frame_requirement_to_predecessors'/9 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__frameopt__propagate_frame_requirement_to_predecessors_9_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(12);
	MR_sv(12) = (MR_Word) MR_succip;
MR_def_label(ll_backend__frameopt__propagate_frame_requirement_to_predecessors_9_0,57)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r8,0)) {
		MR_GOTO_LAB(ll_backend__frameopt__propagate_frame_requirement_to_predecessors_9_0_i3);
	}
	if (MR_INT_GE(MR_r7,0)) {
		MR_GOTO_LAB(ll_backend__frameopt__propagate_frame_requirement_to_predecessors_9_0_i4);
	}
	MR_r1 = MR_r6;
	MR_r2 = MR_r7;
	MR_r3 = (MR_Integer) 1;
	MR_decr_sp_and_return(12);
MR_def_label(ll_backend__frameopt__propagate_frame_requirement_to_predecessors_9_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r4;
	MR_sv(2) = MR_r5;
	MR_sv(9) = MR_r6;
	MR_sv(6) = MR_r7;
	MR_sv(3) = MR_r8;
	MR_sv(7) = MR_r1;
	MR_sv(8) = MR_r2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, label);
	MR_r2 = MR_r3;
	MR_np_call_localret_ent(queue__get_3_0,
		ll_backend__frameopt__propagate_frame_requirement_to_predecessors_9_0_i6);
MR_def_label(ll_backend__frameopt__propagate_frame_requirement_to_predecessors_9_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__frameopt__propagate_frame_requirement_to_predecessors_9_0_i5);
	}
	MR_sv(5) = ((MR_Integer) MR_sv(6) - (MR_Integer) 1);
	MR_sv(6) = MR_r2;
	MR_sv(4) = MR_r3;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, label);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(6);
	MR_np_call_localret_ent(map__search_3_0,
		ll_backend__frameopt__propagate_frame_requirement_to_predecessors_9_0_i9);
MR_def_label(ll_backend__frameopt__propagate_frame_requirement_to_predecessors_9_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__frameopt__propagate_frame_requirement_to_predecessors_9_0_i8);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 7);
	MR_r4 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(10,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(ll_backend__frameopt__all_successors_need_frame_3_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 4;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(7);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(8);
	MR_tfield(0, MR_tempr1, 5) = MR_sv(1);
	MR_tempr2 = MR_sv(9);
	MR_tfield(0, MR_tempr1, 6) = MR_tempr2;
	MR_r3 = MR_r2;
	MR_sv(6) = MR_tempr2;
	MR_r2 = MR_tempr1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, label);
	MR_GOTO_LAB(ll_backend__frameopt__propagate_frame_requirement_to_predecessors_9_0_i18);
	}
MR_def_label(ll_backend__frameopt__propagate_frame_requirement_to_predecessors_9_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(10) = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, label);
	MR_sv(11) = (MR_Word) MR_CTOR0_ADDR(ll_backend__frameopt, block_needs_frame);
	MR_r1 = MR_sv(10);
	MR_r2 = MR_sv(11);
	MR_r3 = MR_sv(9);
	MR_r4 = MR_sv(6);
	MR_np_call_localret_ent(map__lookup_3_0,
		ll_backend__frameopt__propagate_frame_requirement_to_predecessors_9_0_i12);
MR_def_label(ll_backend__frameopt__propagate_frame_requirement_to_predecessors_9_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(ll_backend__frameopt__propagate_frame_requirement_to_predecessors_9_0_i14);
	}
	MR_r1 = MR_sv(10);
	MR_r2 = MR_sv(11);
	MR_r3 = MR_sv(6);
	MR_r4 = (MR_Integer) 0;
	MR_r5 = MR_sv(9);
	MR_np_call_localret_ent(map__det_update_4_0,
		ll_backend__frameopt__propagate_frame_requirement_to_predecessors_9_0_i15);
MR_def_label(ll_backend__frameopt__propagate_frame_requirement_to_predecessors_9_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 7);
	MR_tfield(0, MR_r2, 0) = (MR_Word) MR_COMMON(10,1);
	MR_tfield(0, MR_r2, 1) = (MR_Word) MR_ENTRY_AP(ll_backend__frameopt__all_successors_need_frame_3_0);
	MR_tfield(0, MR_r2, 2) = (MR_Integer) 4;
	MR_tfield(0, MR_r2, 3) = MR_sv(7);
	MR_tfield(0, MR_r2, 4) = MR_sv(8);
	MR_tfield(0, MR_r2, 5) = MR_sv(1);
	MR_tfield(0, MR_r2, 6) = MR_r1;
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_sv(6) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, label);
	MR_GOTO_LAB(ll_backend__frameopt__propagate_frame_requirement_to_predecessors_9_0_i18);
MR_def_label(ll_backend__frameopt__propagate_frame_requirement_to_predecessors_9_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 7);
	MR_tfield(0, MR_r2, 0) = (MR_Word) MR_COMMON(10,2);
	MR_tfield(0, MR_r2, 1) = (MR_Word) MR_ENTRY_AP(ll_backend__frameopt__all_successors_need_frame_3_0);
	MR_tfield(0, MR_r2, 2) = (MR_Integer) 4;
	MR_tfield(0, MR_r2, 3) = MR_sv(7);
	MR_tfield(0, MR_r2, 4) = MR_sv(8);
	MR_tfield(0, MR_r2, 5) = MR_sv(1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(9);
	MR_tfield(0, MR_r2, 6) = MR_tempr1;
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_sv(6) = MR_tempr1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, label);
	}
MR_def_label(ll_backend__frameopt__propagate_frame_requirement_to_predecessors_9_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_r1;
	MR_np_call_localret_ent(list__filter_3_0,
		ll_backend__frameopt__propagate_frame_requirement_to_predecessors_9_0_i19);
MR_def_label(ll_backend__frameopt__propagate_frame_requirement_to_predecessors_9_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 6);
	MR_r4 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(11,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(ll_backend__frameopt__record_frame_need_6_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 3;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(7);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(8);
	MR_tfield(0, MR_tempr1, 5) = MR_sv(1);
	MR_tempr2 = MR_sv(6);
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(9);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,5);
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(ll_backend__frameopt, can_transform);
	MR_r5 = MR_sv(6);
	MR_r6 = MR_tempr2;
	MR_r7 = MR_sv(3);
	}
	MR_np_call_localret_ent(list__foldl2_6_0,
		ll_backend__frameopt__propagate_frame_requirement_to_predecessors_9_0_i21);
MR_def_label(ll_backend__frameopt__propagate_frame_requirement_to_predecessors_9_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(6);
	MR_sv(6) = MR_r1;
	MR_tempr2 = MR_sv(9);
	MR_sv(9) = MR_r2;
	MR_r1 = MR_tempr2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(4);
	}
	MR_np_call_localret_ent(queue__put_list_3_0,
		ll_backend__frameopt__propagate_frame_requirement_to_predecessors_9_0_i22);
MR_def_label(ll_backend__frameopt__propagate_frame_requirement_to_predecessors_9_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(8);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(1);
	MR_r5 = MR_sv(2);
	MR_r6 = MR_sv(6);
	MR_r7 = MR_sv(5);
	MR_r8 = MR_sv(9);
	MR_succip_word = MR_sv(12);
	MR_GOTO_LAB(ll_backend__frameopt__propagate_frame_requirement_to_predecessors_9_0_i57);
	}
MR_def_label(ll_backend__frameopt__propagate_frame_requirement_to_predecessors_9_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(3);
	MR_decr_sp_and_return(12);
MR_def_label(ll_backend__frameopt__propagate_frame_requirement_to_predecessors_9_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r6;
	MR_r2 = MR_r7;
	MR_r3 = MR_r8;
	MR_decr_sp_and_return(12);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__frameopt_module20)
	MR_init_entry1(ll_backend__frameopt__mark_parallel_for_nostack_successor_11_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__frameopt__mark_parallel_for_nostack_successor_11_0);
	MR_init_label10(ll_backend__frameopt__mark_parallel_for_nostack_successor_11_0,3,7,6,9,11,5,14,16,18,17)
	MR_init_label3(ll_backend__frameopt__mark_parallel_for_nostack_successor_11_0,20,22,13)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'mark_parallel_for_nostack_successor'/11 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__frameopt__mark_parallel_for_nostack_successor_11_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_CTOR_ADDR(ll_backend__frameopt, frame_block_info, 2);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_tfield(0, MR_tempr1, 2) = MR_r2;
	MR_sv(1) = MR_r3;
	MR_sv(6) = MR_r4;
	MR_sv(2) = MR_r6;
	MR_sv(3) = MR_r7;
	MR_sv(4) = MR_r8;
	MR_sv(5) = MR_r9;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, label);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_r5;
	MR_r4 = MR_sv(1);
	}
	MR_np_call_localret_ent(map__lookup_3_0,
		ll_backend__frameopt__mark_parallel_for_nostack_successor_11_0_i3);
MR_def_label(ll_backend__frameopt__mark_parallel_for_nostack_successor_11_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_tfield(0, MR_r1, 5);
	if (MR_PTAG_TESTR(MR_r4,2)) {
		MR_GOTO_LAB(ll_backend__frameopt__mark_parallel_for_nostack_successor_11_0_i5);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(5);
	MR_sv(6) = MR_tempr1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, label);
	MR_r2 = MR_r1;
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(1);
	}
	MR_np_call_localret_ent(map__search_3_0,
		ll_backend__frameopt__mark_parallel_for_nostack_successor_11_0_i7);
MR_def_label(ll_backend__frameopt__mark_parallel_for_nostack_successor_11_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__frameopt__mark_parallel_for_nostack_successor_11_0_i6);
	}
	MR_r1 = MR_r2;
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(5);
	MR_decr_sp_and_return(7);
MR_def_label(ll_backend__frameopt__mark_parallel_for_nostack_successor_11_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(counter__allocate_3_0,
		ll_backend__frameopt__mark_parallel_for_nostack_successor_11_0_i9);
MR_def_label(ll_backend__frameopt__mark_parallel_for_nostack_successor_11_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_r4 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tfield(0, MR_tempr1, 1) = MR_sv(2);
	MR_tempr2 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	MR_tempr3 = MR_sv(6);
	MR_sv(6) = MR_r2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, label);
	MR_r2 = MR_r1;
	MR_r3 = MR_tempr2;
	MR_r5 = MR_tempr3;
	}
	MR_np_call_localret_ent(map__det_insert_4_0,
		ll_backend__frameopt__mark_parallel_for_nostack_successor_11_0_i11);
MR_def_label(ll_backend__frameopt__mark_parallel_for_nostack_successor_11_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_tempr1;
	MR_decr_sp_and_return(7);
	}
MR_def_label(ll_backend__frameopt__mark_parallel_for_nostack_successor_11_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r4,1)) {
		MR_GOTO_LAB(ll_backend__frameopt__mark_parallel_for_nostack_successor_11_0_i13);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, label);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(ll_backend__frameopt, block_needs_frame);
	MR_r3 = MR_sv(6);
	MR_r4 = MR_sv(1);
	MR_np_call_localret_ent(map__lookup_3_0,
		ll_backend__frameopt__mark_parallel_for_nostack_successor_11_0_i14);
MR_def_label(ll_backend__frameopt__mark_parallel_for_nostack_successor_11_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(ll_backend__frameopt__mark_parallel_for_nostack_successor_11_0_i16);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(5);
	MR_decr_sp_and_return(7);
MR_def_label(ll_backend__frameopt__mark_parallel_for_nostack_successor_11_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_sv(6) = MR_tempr1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, label);
	MR_r2 = MR_r1;
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(1);
	}
	MR_np_call_localret_ent(map__search_3_0,
		ll_backend__frameopt__mark_parallel_for_nostack_successor_11_0_i18);
MR_def_label(ll_backend__frameopt__mark_parallel_for_nostack_successor_11_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__frameopt__mark_parallel_for_nostack_successor_11_0_i17);
	}
	MR_r1 = MR_r2;
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(5);
	MR_decr_sp_and_return(7);
MR_def_label(ll_backend__frameopt__mark_parallel_for_nostack_successor_11_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(counter__allocate_3_0,
		ll_backend__frameopt__mark_parallel_for_nostack_successor_11_0_i20);
MR_def_label(ll_backend__frameopt__mark_parallel_for_nostack_successor_11_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_r4 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tfield(0, MR_tempr1, 1) = MR_sv(2);
	MR_tempr2 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	MR_tempr3 = MR_sv(6);
	MR_sv(6) = MR_r2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, label);
	MR_r2 = MR_r1;
	MR_r3 = MR_tempr2;
	MR_r5 = MR_tempr3;
	}
	MR_np_call_localret_ent(map__det_insert_4_0,
		ll_backend__frameopt__mark_parallel_for_nostack_successor_11_0_i22);
MR_def_label(ll_backend__frameopt__mark_parallel_for_nostack_successor_11_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(5);
	MR_decr_sp_and_return(7);
	}
MR_def_label(ll_backend__frameopt__mark_parallel_for_nostack_successor_11_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("ll_backend.frameopt", 19);
	MR_r2 = (MR_Word) MR_string_const("predicate \140ll_backend.frameopt.mark_parallel_for_nostack_successor\'/11", 70);
	MR_r3 = (MR_Word) MR_string_const("reached setup via jump from ordinary block", 42);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(require__unexpected_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__frameopt_module21)
	MR_init_entry1(ll_backend__frameopt__mark_parallels_for_nostack_successors_12_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__frameopt__mark_parallels_for_nostack_successors_12_0);
	MR_init_label3(ll_backend__frameopt__mark_parallels_for_nostack_successors_12_0,19,4,6)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'mark_parallels_for_nostack_successors'/12 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__frameopt__mark_parallels_for_nostack_successors_12_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r3,0,0)) {
		MR_GOTO_LAB(ll_backend__frameopt__mark_parallels_for_nostack_successors_12_0_i19);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_r3 = MR_r7;
	MR_r4 = MR_r8;
	MR_r5 = MR_r9;
	MR_proceed();
MR_def_label(ll_backend__frameopt__mark_parallels_for_nostack_successors_12_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	MR_sv(4) = MR_r4;
	MR_sv(5) = MR_r5;
	MR_sv(1) = MR_r6;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(2) = MR_tfield(1, MR_tempr1, 0);
	MR_sv(3) = MR_tfield(1, MR_tempr1, 1);
	MR_sv(6) = MR_r1;
	MR_sv(7) = MR_r2;
	MR_r3 = MR_sv(2);
	}
	MR_np_call_localret_ent(ll_backend__frameopt__mark_parallel_for_nostack_successor_11_0,
		ll_backend__frameopt__mark_parallels_for_nostack_successors_12_0_i4);
MR_def_label(ll_backend__frameopt__mark_parallels_for_nostack_successors_12_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_tempr2 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_tempr3 = MR_sv(5);
	MR_sv(5) = MR_tempr1;
	MR_r1 = MR_sv(6);
	MR_tempr4 = MR_r2;
	MR_r2 = MR_sv(7);
	MR_tempr5 = MR_r3;
	MR_r3 = MR_sv(3);
	MR_tempr6 = MR_r4;
	MR_r4 = MR_tempr2;
	MR_r5 = MR_tempr3;
	MR_r6 = MR_sv(1);
	MR_r7 = MR_tempr4;
	MR_r8 = MR_tempr5;
	MR_r9 = MR_tempr6;
	}
	MR_np_localcall_lab(ll_backend__frameopt__mark_parallels_for_nostack_successors_12_0,
		ll_backend__frameopt__mark_parallels_for_nostack_successors_12_0_i6);
MR_def_label(ll_backend__frameopt__mark_parallels_for_nostack_successors_12_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(4);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(5);
	MR_tfield(1, MR_tempr2, 1) = MR_r2;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_tempr2;
	MR_decr_sp_and_return(8);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__frameopt_module22)
	MR_init_entry1(ll_backend__frameopt__process_frame_delay_11_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__frameopt__process_frame_delay_11_0);
	MR_init_label10(ll_backend__frameopt__process_frame_delay_11_0,66,3,4,5,7,9,12,19,20,11)
	MR_init_label3(ll_backend__frameopt__process_frame_delay_11_0,22,24,26)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'process_frame_delay'/11 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__frameopt__process_frame_delay_11_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(17);
	MR_sv(17) = (MR_Word) MR_succip;
MR_def_label(ll_backend__frameopt__process_frame_delay_11_0,66)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(ll_backend__frameopt__process_frame_delay_11_0_i3);
	}
	MR_r1 = MR_r5;
	MR_r2 = MR_r6;
	MR_r3 = MR_r7;
	MR_r4 = MR_r8;
	MR_decr_sp_and_return(17);
MR_def_label(ll_backend__frameopt__process_frame_delay_11_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r4;
	MR_sv(3) = MR_r5;
	MR_sv(4) = MR_r6;
	MR_sv(5) = MR_r7;
	MR_sv(6) = MR_r8;
	MR_sv(7) = MR_tfield(1, MR_r2, 0);
	MR_sv(8) = MR_tfield(1, MR_r2, 1);
	MR_sv(15) = MR_r1;
	MR_r2 = (MR_Integer) 1;
	MR_np_call_localret_ent(private_builtin__type_info_from_typeclass_info_3_0,
		ll_backend__frameopt__process_frame_delay_11_0_i4);
MR_def_label(ll_backend__frameopt__process_frame_delay_11_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_r1;
	MR_r1 = MR_sv(15);
	MR_r2 = (MR_Integer) 2;
	MR_np_call_localret_ent(private_builtin__type_info_from_typeclass_info_3_0,
		ll_backend__frameopt__process_frame_delay_11_0_i5);
MR_def_label(ll_backend__frameopt__process_frame_delay_11_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 3);
	MR_tfield(0, MR_r2, 0) = (MR_Word) MR_CTOR_ADDR(ll_backend__frameopt, frame_block_info, 2);
	MR_tfield(0, MR_r2, 1) = MR_sv(9);
	MR_tfield(0, MR_r2, 2) = MR_r1;
	MR_sv(16) = MR_r2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, label);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(7);
	MR_np_call_localret_ent(map__lookup_3_0,
		ll_backend__frameopt__process_frame_delay_11_0_i7);
MR_def_label(ll_backend__frameopt__process_frame_delay_11_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(6,4);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(ll_backend__frameopt__IntroducedFrom__pred__process_frame_delay__1825__1_2_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(7);
	MR_tfield(0, MR_tempr1, 4) = MR_tfield(0, MR_r1, 0);
	MR_sv(9) = MR_r1;
	MR_sv(10) = MR_tfield(0, MR_r1, 1);
	MR_sv(11) = MR_tfield(0, MR_r1, 2);
	MR_sv(12) = MR_tfield(0, MR_r1, 3);
	MR_sv(13) = MR_tfield(0, MR_r1, 4);
	MR_sv(14) = MR_tfield(0, MR_r1, 5);
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Word) MR_string_const("ll_backend.frameopt", 19);
	MR_r3 = (MR_Word) MR_string_const("predicate \140ll_backend.frameopt.process_frame_delay\'/11", 54);
	MR_r4 = (MR_Word) MR_string_const("label in frame_block_info is not copy", 37);
	}
	MR_np_call_localret_ent(require__expect_4_0,
		ll_backend__frameopt__process_frame_delay_11_0_i9);
MR_def_label(ll_backend__frameopt__process_frame_delay_11_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(14),0)) {
		MR_GOTO_LAB(ll_backend__frameopt__process_frame_delay_11_0_i11);
	}
	if (MR_LTAGS_TEST(MR_sv(10),0,0)) {
		MR_GOTO_LAB(ll_backend__frameopt__process_frame_delay_11_0_i12);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr3 = MR_sv(10);
	MR_tempr1 = MR_tfield(0, MR_tfield(1, MR_tempr3, 0), 0);
	if (MR_RTAGS_TESTR(MR_tempr1,3,5)) {
		MR_GOTO_LAB(ll_backend__frameopt__process_frame_delay_11_0_i12);
	}
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_tfield(1, MR_tempr3, 0);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 6);
	MR_r4 = MR_tempr2;
	MR_tempr4 = MR_sv(7);
	MR_tfield(0, MR_tempr2, 0) = MR_tempr4;
	MR_tfield(0, MR_tempr2, 1) = MR_tempr1;
	MR_tfield(0, MR_tempr2, 2) = MR_sv(11);
	MR_tfield(0, MR_tempr2, 3) = MR_sv(12);
	MR_tfield(0, MR_tempr2, 4) = MR_sv(13);
	MR_tfield(0, MR_tempr2, 5) = (MR_Word) MR_TAG_COMMON(1,5,2);
	MR_r5 = MR_sv(4);
	MR_r3 = MR_tempr4;
	MR_r2 = MR_sv(16);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, label);
	}
	MR_np_call_localret_ent(map__det_update_4_0,
		ll_backend__frameopt__process_frame_delay_11_0_i20);
MR_def_label(ll_backend__frameopt__process_frame_delay_11_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("ll_backend.frameopt", 19);
	MR_r2 = (MR_Word) MR_string_const("predicate \140ll_backend.frameopt.process_frame_delay\'/11", 54);
	MR_r3 = (MR_Word) MR_string_const("setup block does not begin with label", 37);
	MR_np_call_localret_ent(require__unexpected_3_0,
		ll_backend__frameopt__process_frame_delay_11_0_i19);
MR_def_label(ll_backend__frameopt__process_frame_delay_11_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(map__det_update_4_0,
		ll_backend__frameopt__process_frame_delay_11_0_i20);
MR_def_label(ll_backend__frameopt__process_frame_delay_11_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(15);
	MR_r2 = MR_sv(8);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_r5 = MR_sv(3);
	MR_r6 = MR_tempr1;
	MR_r7 = MR_sv(5);
	MR_r8 = MR_sv(6);
	MR_succip_word = MR_sv(17);
	MR_GOTO_LAB(ll_backend__frameopt__process_frame_delay_11_0_i66);
	}
MR_def_label(ll_backend__frameopt__process_frame_delay_11_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(14),2)) {
		MR_GOTO_LAB(ll_backend__frameopt__process_frame_delay_11_0_i22);
	}
	MR_r1 = MR_sv(15);
	MR_r2 = MR_sv(8);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_r5 = MR_sv(3);
	MR_r6 = MR_sv(4);
	MR_r7 = MR_sv(5);
	MR_r8 = MR_sv(6);
	MR_succip_word = MR_sv(17);
	MR_GOTO_LAB(ll_backend__frameopt__process_frame_delay_11_0_i66);
MR_def_label(ll_backend__frameopt__process_frame_delay_11_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, label);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(ll_backend__frameopt, block_needs_frame);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(7);
	MR_np_call_localret_ent(map__lookup_3_0,
		ll_backend__frameopt__process_frame_delay_11_0_i24);
MR_def_label(ll_backend__frameopt__process_frame_delay_11_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(ll_backend__frameopt__process_frame_delay_11_0_i26);
	}
	MR_r1 = MR_sv(15);
	MR_r2 = MR_sv(7);
	MR_r3 = MR_sv(8);
	MR_r4 = MR_sv(9);
	MR_r5 = MR_sv(1);
	MR_r6 = MR_sv(2);
	MR_r7 = MR_sv(3);
	MR_r8 = MR_sv(4);
	MR_r9 = MR_sv(5);
	MR_r10 = MR_sv(6);
	MR_succip_word = MR_sv(17);
	MR_decr_sp(17);
	MR_np_tailcall_ent(ll_backend__frameopt__transform_nostack_ordinary_block_13_0);
MR_def_label(ll_backend__frameopt__process_frame_delay_11_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(15);
	MR_r2 = MR_sv(8);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_r5 = MR_sv(3);
	MR_r6 = MR_sv(4);
	MR_r7 = MR_sv(5);
	MR_r8 = MR_sv(6);
	MR_succip_word = MR_sv(17);
	MR_GOTO_LAB(ll_backend__frameopt__process_frame_delay_11_0_i66);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(map__from_assoc_list_2_0);
MR_decl_entry(ll_backend__opt_util__replace_labels_instruction_4_0);
MR_decl_entry(map__set_4_0);

MR_BEGIN_MODULE(ll_backend__frameopt_module23)
	MR_init_entry1(ll_backend__frameopt__transform_nostack_ordinary_block_13_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__frameopt__transform_nostack_ordinary_block_13_0);
	MR_init_label10(ll_backend__frameopt__transform_nostack_ordinary_block_13_0,2,3,4,6,7,8,9,12,17,15)
	MR_init_label8(ll_backend__frameopt__transform_nostack_ordinary_block_13_0,5,24,25,26,28,30,31,33)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'transform_nostack_ordinary_block'/13 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__frameopt__transform_nostack_ordinary_block_13_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(21);
	MR_sv(21) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r5;
	MR_sv(4) = MR_r6;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_sv(9) = MR_tfield(0, MR_tempr1, 1);
	MR_sv(5) = MR_tfield(0, MR_tempr1, 2);
	MR_sv(7) = MR_tfield(0, MR_tempr1, 3);
	MR_sv(8) = MR_tfield(0, MR_tempr1, 4);
	MR_sv(6) = MR_tfield(0, MR_tempr1, 5);
	MR_sv(10) = MR_r7;
	MR_sv(11) = MR_r8;
	MR_sv(12) = MR_r9;
	MR_sv(13) = MR_r10;
	MR_sv(17) = MR_r1;
	MR_sv(18) = (MR_Integer) 1;
	MR_r2 = MR_sv(18);
	}
	MR_np_call_localret_ent(private_builtin__type_info_from_typeclass_info_3_0,
		ll_backend__frameopt__transform_nostack_ordinary_block_13_0_i2);
MR_def_label(ll_backend__frameopt__transform_nostack_ordinary_block_13_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(14) = MR_r1;
	MR_sv(19) = (MR_Integer) 2;
	MR_r1 = MR_sv(17);
	MR_r2 = MR_sv(19);
	MR_np_call_localret_ent(private_builtin__type_info_from_typeclass_info_3_0,
		ll_backend__frameopt__transform_nostack_ordinary_block_13_0_i3);
MR_def_label(ll_backend__frameopt__transform_nostack_ordinary_block_13_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(14);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(7);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(11);
	MR_r6 = MR_sv(4);
	MR_r7 = MR_sv(10);
	MR_r8 = MR_sv(12);
	MR_r9 = MR_sv(13);
	}
	MR_np_call_localret_ent(ll_backend__frameopt__mark_parallels_for_nostack_successors_12_0,
		ll_backend__frameopt__transform_nostack_ordinary_block_13_0_i4);
MR_def_label(ll_backend__frameopt__transform_nostack_ordinary_block_13_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(8),0,0)) {
		MR_GOTO_LAB(ll_backend__frameopt__transform_nostack_ordinary_block_13_0_i6);
	}
	MR_sv(8) = MR_r2;
	MR_r2 = MR_sv(9);
	MR_sv(7) = MR_r1;
	MR_sv(13) = (MR_Word) MR_tbmkword(0, 0);
	MR_sv(9) = (MR_Word) MR_tbmkword(0, 0);
	MR_sv(14) = MR_r3;
	MR_sv(15) = MR_r4;
	MR_sv(16) = MR_r5;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	MR_GOTO_LAB(ll_backend__frameopt__transform_nostack_ordinary_block_13_0_i5);
MR_def_label(ll_backend__frameopt__transform_nostack_ordinary_block_13_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(8);
	MR_sv(8) = MR_r2;
	MR_sv(10) = MR_tfield(1, MR_tempr1, 0);
	MR_sv(12) = MR_r3;
	MR_sv(13) = MR_r4;
	MR_sv(14) = MR_r5;
	MR_r1 = MR_sv(17);
	MR_r2 = MR_sv(18);
	}
	MR_np_call_localret_ent(private_builtin__type_info_from_typeclass_info_3_0,
		ll_backend__frameopt__transform_nostack_ordinary_block_13_0_i7);
MR_def_label(ll_backend__frameopt__transform_nostack_ordinary_block_13_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(15) = MR_r1;
	MR_r1 = MR_sv(17);
	MR_r2 = MR_sv(19);
	MR_np_call_localret_ent(private_builtin__type_info_from_typeclass_info_3_0,
		ll_backend__frameopt__transform_nostack_ordinary_block_13_0_i8);
MR_def_label(ll_backend__frameopt__transform_nostack_ordinary_block_13_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(15);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(10);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(11);
	MR_r6 = MR_sv(4);
	MR_r7 = MR_sv(12);
	MR_r8 = MR_sv(13);
	MR_r9 = MR_sv(14);
	}
	MR_np_call_localret_ent(ll_backend__frameopt__mark_parallel_for_nostack_successor_11_0,
		ll_backend__frameopt__transform_nostack_ordinary_block_13_0_i9);
MR_def_label(ll_backend__frameopt__transform_nostack_ordinary_block_13_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_sv(13), 1, (MR_Integer) 1);
	MR_tfield(1, MR_sv(13), 0) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 6);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(12,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(ll_backend__frameopt__no_disagreement_3_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 3;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(8);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(10);
	MR_tfield(0, MR_tempr1, 5) = MR_r1;
	MR_sv(12) = MR_r1;
	MR_sv(14) = MR_r2;
	MR_sv(15) = MR_r3;
	MR_sv(16) = MR_r4;
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Word) MR_string_const("ll_backend.frameopt", 19);
	MR_r3 = (MR_Word) MR_string_const("predicate \140ll_backend.frameopt.transform_nostack_ordinary_block\'/13", 67);
	MR_r4 = (MR_Word) MR_string_const("disagreement", 12);
	}
	MR_np_call_localret_ent(require__expect_4_0,
		ll_backend__frameopt__transform_nostack_ordinary_block_13_0_i12);
MR_def_label(ll_backend__frameopt__transform_nostack_ordinary_block_13_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tempr3 = MR_sv(10);
	MR_tfield(0, MR_tempr1, 0) = MR_tempr3;
	MR_tempr4 = MR_sv(12);
	MR_tfield(0, MR_tempr1, 1) = MR_tempr4;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = MR_sv(8);
	MR_sv(8) = MR_tempr2;
	MR_r1 = MR_tempr4;
	MR_r2 = MR_tempr3;
	}
	MR_np_call_localret_ent(__Unify___ll_backend__llds__label_0_0,
		ll_backend__frameopt__transform_nostack_ordinary_block_13_0_i17);
MR_def_label(ll_backend__frameopt__transform_nostack_ordinary_block_13_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__frameopt__transform_nostack_ordinary_block_13_0_i15);
	}
	MR_r2 = MR_sv(9);
	MR_sv(9) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	MR_GOTO_LAB(ll_backend__frameopt__transform_nostack_ordinary_block_13_0_i5);
MR_def_label(ll_backend__frameopt__transform_nostack_ordinary_block_13_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_sv(8);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(12);
	MR_tag_alloc_heap(MR_tempr3, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr3, 0) = (MR_Integer) 6;
	MR_tfield(3, MR_tempr3, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = MR_tempr3;
	MR_tfield(0, MR_tempr2, 1) = (MR_Word) MR_string_const("redirect fallthrough", 20);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr3, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = MR_sv(9);
	MR_sv(9) = MR_tempr3;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	}
MR_def_label(ll_backend__frameopt__transform_nostack_ordinary_block_13_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(12) = MR_r1;
	MR_np_call_localret_ent(list__det_split_last_3_0,
		ll_backend__frameopt__transform_nostack_ordinary_block_13_0_i24);
MR_def_label(ll_backend__frameopt__transform_nostack_ordinary_block_13_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(8);
	MR_sv(8) = MR_r1;
	MR_sv(10) = MR_r2;
	MR_sv(20) = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, label);
	MR_r1 = MR_sv(20);
	MR_r2 = MR_r1;
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(map__from_assoc_list_2_0,
		ll_backend__frameopt__transform_nostack_ordinary_block_13_0_i25);
MR_def_label(ll_backend__frameopt__transform_nostack_ordinary_block_13_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(10);
	MR_r2 = MR_tempr1;
	MR_r3 = (MR_Integer) 0;
	}
	MR_np_call_localret_ent(ll_backend__opt_util__replace_labels_instruction_4_0,
		ll_backend__frameopt__transform_nostack_ordinary_block_13_0_i26);
MR_def_label(ll_backend__frameopt__transform_nostack_ordinary_block_13_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = MR_sv(9);
	MR_r1 = MR_sv(12);
	MR_r2 = MR_sv(8);
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		ll_backend__frameopt__transform_nostack_ordinary_block_13_0_i28);
MR_def_label(ll_backend__frameopt__transform_nostack_ordinary_block_13_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 6);
	MR_sv(9) = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_tfield(0, MR_tempr1, 2) = MR_sv(5);
	MR_tfield(0, MR_tempr1, 3) = MR_sv(7);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(13);
	MR_tfield(0, MR_tempr1, 5) = MR_sv(6);
	MR_r1 = MR_sv(17);
	MR_r2 = MR_sv(18);
	}
	MR_np_call_localret_ent(private_builtin__type_info_from_typeclass_info_3_0,
		ll_backend__frameopt__transform_nostack_ordinary_block_13_0_i30);
MR_def_label(ll_backend__frameopt__transform_nostack_ordinary_block_13_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(17);
	MR_r2 = MR_sv(19);
	MR_np_call_localret_ent(private_builtin__type_info_from_typeclass_info_3_0,
		ll_backend__frameopt__transform_nostack_ordinary_block_13_0_i31);
MR_def_label(ll_backend__frameopt__transform_nostack_ordinary_block_13_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 3);
	MR_tfield(0, MR_r2, 0) = (MR_Word) MR_CTOR_ADDR(ll_backend__frameopt, frame_block_info, 2);
	MR_tfield(0, MR_r2, 1) = MR_sv(5);
	MR_tfield(0, MR_r2, 2) = MR_r1;
	MR_r1 = MR_sv(20);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(9);
	MR_r5 = MR_sv(11);
	MR_np_call_localret_ent(map__set_4_0,
		ll_backend__frameopt__transform_nostack_ordinary_block_13_0_i33);
MR_def_label(ll_backend__frameopt__transform_nostack_ordinary_block_13_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(17);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(4);
	MR_r5 = MR_sv(14);
	MR_r6 = MR_tempr1;
	MR_r7 = MR_sv(15);
	MR_r8 = MR_sv(16);
	MR_succip_word = MR_sv(21);
	MR_decr_sp(21);
	MR_np_tailcall_ent(ll_backend__frameopt__process_frame_delay_11_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__frameopt_module24)
	MR_init_entry1(fn__ll_backend__frameopt__late_setup_code_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__ll_backend__frameopt__late_setup_code_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'late_setup_code'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__ll_backend__frameopt__late_setup_code_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r2;
	MR_r2 = (MR_Integer) 3;
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(fn__ll_backend__frameopt__late_setup_code_1_0));
	MR_np_tailcall_ent(do_call_class_method_1);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__frameopt_module25)
	MR_init_entry1(fn__ll_backend__frameopt__non_teardown_exit_code_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__ll_backend__frameopt__non_teardown_exit_code_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'non_teardown_exit_code'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__ll_backend__frameopt__non_teardown_exit_code_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r2;
	MR_r2 = (MR_Integer) 4;
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(fn__ll_backend__frameopt__non_teardown_exit_code_1_0));
	MR_np_tailcall_ent(do_call_class_method_1);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__frameopt_module26)
	MR_init_entry1(ll_backend__frameopt__search_setup_par_map_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__frameopt__search_setup_par_map_3_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'search_setup_par_map'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__frameopt__search_setup_par_map_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, label);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_r1;
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tempr2;
	MR_np_tailcall_ent(map__search_3_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__frameopt_module27)
	MR_init_entry1(ll_backend__frameopt__search_exit_par_map_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__frameopt__search_exit_par_map_3_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'search_exit_par_map'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__frameopt__search_exit_par_map_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, label);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_r1;
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tempr2;
	MR_np_tailcall_ent(map__search_3_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__map__init_0_0);
MR_decl_entry(fn__queue__init_0_0);
MR_decl_entry(fn__set__init_0_0);
MR_decl_entry(map__to_assoc_list_2_0);
MR_decl_entry(list__filter_map_3_0);
MR_decl_entry(queue__list_to_queue_2_0);
MR_decl_entry(list__map_3_0);

MR_BEGIN_MODULE(ll_backend__frameopt_module28)
	MR_init_entry1(ll_backend__frameopt__delay_frame_transform_13_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__frameopt__delay_frame_transform_13_0);
	MR_init_label10(ll_backend__frameopt__delay_frame_transform_13_0,2,3,4,5,6,7,8,9,10,11)
	MR_init_label10(ll_backend__frameopt__delay_frame_transform_13_0,12,14,15,16,17,18,21,22,23,24)
	MR_init_label4(ll_backend__frameopt__delay_frame_transform_13_0,20,19,26,28)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'delay_frame_transform'/13 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__frameopt__delay_frame_transform_13_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(18);
	MR_sv(18) = (MR_Word) MR_succip;
	MR_sv(3) = MR_r3;
	MR_sv(5) = MR_r4;
	MR_sv(7) = MR_r5;
	MR_sv(1) = MR_r8;
	MR_sv(2) = MR_r2;
	MR_sv(4) = MR_r6;
	MR_sv(6) = MR_r7;
	MR_sv(13) = MR_r1;
	MR_sv(14) = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, label);
	MR_sv(10) = (MR_Word) MR_CTOR0_ADDR(ll_backend__frameopt, block_needs_frame);
	MR_r1 = MR_sv(14);
	MR_r2 = MR_sv(10);
	MR_np_call_localret_ent(fn__map__init_0_0,
		ll_backend__frameopt__delay_frame_transform_13_0_i2);
MR_def_label(ll_backend__frameopt__delay_frame_transform_13_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_r1 = MR_sv(14);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,1);
	MR_np_call_localret_ent(fn__map__init_0_0,
		ll_backend__frameopt__delay_frame_transform_13_0_i3);
MR_def_label(ll_backend__frameopt__delay_frame_transform_13_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(11) = MR_r1;
	MR_r1 = MR_sv(14);
	MR_np_call_localret_ent(fn__queue__init_0_0,
		ll_backend__frameopt__delay_frame_transform_13_0_i4);
MR_def_label(ll_backend__frameopt__delay_frame_transform_13_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(12) = MR_r1;
	MR_sv(17) = (MR_Integer) 1;
	MR_r1 = MR_sv(13);
	MR_r2 = MR_sv(17);
	MR_np_call_localret_ent(private_builtin__type_info_from_typeclass_info_3_0,
		ll_backend__frameopt__delay_frame_transform_13_0_i5);
MR_def_label(ll_backend__frameopt__delay_frame_transform_13_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_r1;
	MR_sv(15) = (MR_Integer) 2;
	MR_r1 = MR_sv(13);
	MR_r2 = MR_sv(15);
	MR_np_call_localret_ent(private_builtin__type_info_from_typeclass_info_3_0,
		ll_backend__frameopt__delay_frame_transform_13_0_i6);
MR_def_label(ll_backend__frameopt__delay_frame_transform_13_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(9);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(6);
	MR_r5 = MR_sv(11);
	MR_r6 = MR_sv(12);
	MR_r7 = MR_sv(8);
	}
	MR_np_call_localret_ent(ll_backend__frameopt__delay_frame_init_8_0,
		ll_backend__frameopt__delay_frame_transform_13_0_i7);
MR_def_label(ll_backend__frameopt__delay_frame_transform_13_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_sv(11) = MR_r2;
	MR_sv(12) = MR_r3;
	MR_r1 = MR_sv(14);
	MR_np_call_localret_ent(fn__set__init_0_0,
		ll_backend__frameopt__delay_frame_transform_13_0_i8);
MR_def_label(ll_backend__frameopt__delay_frame_transform_13_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_r1;
	MR_r1 = MR_sv(13);
	MR_r2 = MR_sv(17);
	MR_np_call_localret_ent(private_builtin__type_info_from_typeclass_info_3_0,
		ll_backend__frameopt__delay_frame_transform_13_0_i9);
MR_def_label(ll_backend__frameopt__delay_frame_transform_13_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(16) = MR_r1;
	MR_r1 = MR_sv(13);
	MR_r2 = MR_sv(15);
	MR_np_call_localret_ent(private_builtin__type_info_from_typeclass_info_3_0,
		ll_backend__frameopt__delay_frame_transform_13_0_i10);
MR_def_label(ll_backend__frameopt__delay_frame_transform_13_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(16);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(11);
	MR_r4 = MR_sv(6);
	MR_r5 = MR_sv(12);
	MR_r6 = MR_sv(9);
	MR_r7 = (MR_Integer) 10000;
	MR_r8 = (MR_Integer) 0;
	}
	MR_np_call_localret_ent(ll_backend__frameopt__propagate_frame_requirement_to_successors_9_0,
		ll_backend__frameopt__delay_frame_transform_13_0_i11);
MR_def_label(ll_backend__frameopt__delay_frame_transform_13_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(12) = MR_r1;
	MR_sv(9) = MR_r2;
	MR_sv(10) = MR_r3;
	MR_r1 = MR_sv(14);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(ll_backend__frameopt, block_needs_frame);
	MR_r3 = MR_sv(12);
	MR_np_call_localret_ent(map__to_assoc_list_2_0,
		ll_backend__frameopt__delay_frame_transform_13_0_i12);
MR_def_label(ll_backend__frameopt__delay_frame_transform_13_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,4);
	MR_r2 = MR_sv(14);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,13,0);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__filter_map_3_0,
		ll_backend__frameopt__delay_frame_transform_13_0_i14);
MR_def_label(ll_backend__frameopt__delay_frame_transform_13_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(14);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(queue__list_to_queue_2_0,
		ll_backend__frameopt__delay_frame_transform_13_0_i15);
MR_def_label(ll_backend__frameopt__delay_frame_transform_13_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(11) = MR_r1;
	MR_r1 = MR_sv(13);
	MR_r2 = MR_sv(17);
	MR_np_call_localret_ent(private_builtin__type_info_from_typeclass_info_3_0,
		ll_backend__frameopt__delay_frame_transform_13_0_i16);
MR_def_label(ll_backend__frameopt__delay_frame_transform_13_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(17) = MR_r1;
	MR_r1 = MR_sv(13);
	MR_r2 = MR_sv(15);
	MR_np_call_localret_ent(private_builtin__type_info_from_typeclass_info_3_0,
		ll_backend__frameopt__delay_frame_transform_13_0_i17);
MR_def_label(ll_backend__frameopt__delay_frame_transform_13_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(17);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(11);
	MR_r4 = MR_sv(6);
	MR_r5 = MR_sv(8);
	MR_r6 = MR_sv(12);
	MR_r7 = MR_sv(9);
	MR_r8 = MR_sv(10);
	}
	MR_np_call_localret_ent(ll_backend__frameopt__propagate_frame_requirement_to_predecessors_9_0,
		ll_backend__frameopt__delay_frame_transform_13_0_i18);
MR_def_label(ll_backend__frameopt__delay_frame_transform_13_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r3,0)) {
		MR_GOTO_LAB(ll_backend__frameopt__delay_frame_transform_13_0_i20);
	}
	MR_sv(8) = MR_r3;
	MR_sv(11) = MR_r1;
	MR_r1 = MR_sv(14);
	MR_r2 = MR_r1;
	MR_np_call_localret_ent(fn__map__init_0_0,
		ll_backend__frameopt__delay_frame_transform_13_0_i21);
MR_def_label(ll_backend__frameopt__delay_frame_transform_13_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(12) = MR_r1;
	MR_r1 = MR_sv(14);
	MR_r2 = MR_r1;
	MR_np_call_localret_ent(fn__map__init_0_0,
		ll_backend__frameopt__delay_frame_transform_13_0_i22);
MR_def_label(ll_backend__frameopt__delay_frame_transform_13_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(13);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(11);
	MR_r4 = MR_sv(5);
	MR_r5 = MR_sv(4);
	MR_r6 = MR_sv(6);
	MR_r7 = MR_sv(12);
	MR_r8 = MR_tempr1;
	}
	MR_np_call_localret_ent(ll_backend__frameopt__process_frame_delay_11_0,
		ll_backend__frameopt__delay_frame_transform_13_0_i23);
MR_def_label(ll_backend__frameopt__delay_frame_transform_13_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(13);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_sv(2);
	MR_tempr3 = MR_r3;
	MR_r3 = MR_sv(3);
	MR_tempr4 = MR_r4;
	MR_r4 = MR_sv(5);
	MR_r5 = MR_tempr1;
	MR_r6 = MR_sv(11);
	MR_r7 = MR_tempr3;
	MR_r8 = MR_tempr4;
	MR_r9 = MR_tempr2;
	}
	MR_np_call_localret_ent(f_108_108_95_98_97_99_107_101_110_100_95_95_102_114_97_109_101_111_112_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_114_101_97_116_101_95_112_97_114_97_108_108_101_108_115_95_95_91_49_49_93_95_48_12_0,
		ll_backend__frameopt__delay_frame_transform_13_0_i24);
MR_def_label(ll_backend__frameopt__delay_frame_transform_13_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r6 = MR_sv(8);
	MR_GOTO_LAB(ll_backend__frameopt__delay_frame_transform_13_0_i19);
MR_def_label(ll_backend__frameopt__delay_frame_transform_13_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r6 = MR_r3;
	MR_sv(11) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(6);
MR_def_label(ll_backend__frameopt__delay_frame_transform_13_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(1),0)) {
		MR_GOTO_LAB(ll_backend__frameopt__delay_frame_transform_13_0_i26);
	}
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	MR_r5 = (MR_Word) MR_tbmkword(0, 0);
	MR_decr_sp_and_return(18);
MR_def_label(ll_backend__frameopt__delay_frame_transform_13_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 8);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(14,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(ll_backend__frameopt__describe_block_6_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 5;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(13);
	MR_tempr2 = MR_r3;
	MR_tfield(0, MR_tempr1, 4) = MR_tempr2;
	MR_tfield(0, MR_tempr1, 5) = MR_sv(11);
	MR_tfield(0, MR_tempr1, 6) = MR_sv(7);
	MR_tfield(0, MR_tempr1, 7) = MR_sv(5);
	MR_sv(8) = MR_r6;
	MR_sv(3) = MR_r1;
	MR_sv(5) = MR_r2;
	MR_sv(7) = MR_tempr2;
	MR_r1 = MR_sv(14);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(3);
	}
	MR_np_call_localret_ent(list__map_3_0,
		ll_backend__frameopt__delay_frame_transform_13_0_i28);
MR_def_label(ll_backend__frameopt__delay_frame_transform_13_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = (MR_Word) MR_TAG_COMMON(1,1,5);
	MR_r5 = MR_r1;
	MR_r6 = MR_sv(8);
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(7);
	MR_decr_sp_and_return(18);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(ll_backend__opt_util__get_prologue_4_0);
MR_decl_entry(map__init_1_0);

MR_BEGIN_MODULE(ll_backend__frameopt_module29)
	MR_init_entry1(ll_backend__frameopt__frameopt_main_det_stack_7_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__frameopt__frameopt_main_det_stack_7_0);
	MR_init_label10(ll_backend__frameopt__frameopt_main_det_stack_7_0,2,5,7,9,10,11,12,13,17,19)
	MR_init_label10(ll_backend__frameopt__frameopt_main_det_stack_7_0,22,23,24,25,21,26,15,28,29,33)
	MR_init_label3(ll_backend__frameopt__frameopt_main_det_stack_7_0,34,35,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'frameopt_main_det_stack'/7 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__ll_backend__frameopt__frameopt_main_det_stack_7_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(11);
	MR_sv(11) = (MR_Word) MR_succip;
	MR_sv(8) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(9) = MR_tempr1;
	MR_sv(1) = MR_r4;
	MR_sv(6) = MR_r2;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(ll_backend__opt_util__get_prologue_4_0,
		ll_backend__frameopt__frameopt_main_det_stack_7_0_i2);
MR_def_label(ll_backend__frameopt__frameopt_main_det_stack_7_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_sv(2) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(5) = MR_tempr1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(ll_backend__frameopt__detect_det_entry_4_0,
		ll_backend__frameopt__frameopt_main_det_stack_7_0_i5);
MR_def_label(ll_backend__frameopt__frameopt_main_det_stack_7_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__frameopt__frameopt_main_det_stack_7_0_i4);
	}
	MR_sv(3) = MR_r4;
	MR_sv(7) = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, label);
	MR_r1 = MR_sv(7);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_np_call_localret_ent(map__init_1_0,
		ll_backend__frameopt__frameopt_main_det_stack_7_0_i7);
MR_def_label(ll_backend__frameopt__frameopt_main_det_stack_7_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(4);
	MR_tfield(1, MR_tempr1, 1) = MR_sv(5);
	MR_sv(5) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(8);
	MR_r3 = MR_sv(6);
	}
	MR_np_call_localret_ent(ll_backend__frameopt__divide_into_basic_blocks_5_0,
		ll_backend__frameopt__frameopt_main_det_stack_7_0_i9);
MR_def_label(ll_backend__frameopt__frameopt_main_det_stack_7_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_sv(6) = MR_r2;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_r1;
	MR_np_call_localret_ent(fn__map__init_0_0,
		ll_backend__frameopt__frameopt_main_det_stack_7_0_i10);
MR_def_label(ll_backend__frameopt__frameopt_main_det_stack_7_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, label);
	MR_r2 = MR_r1;
	MR_np_call_localret_ent(fn__map__init_0_0,
		ll_backend__frameopt__frameopt_main_det_stack_7_0_i11);
MR_def_label(ll_backend__frameopt__frameopt_main_det_stack_7_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,1);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(3);
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	MR_r5 = (MR_Word) MR_tbmkword(0, 0);
	MR_r6 = MR_sv(8);
	MR_r7 = MR_sv(5);
	MR_r8 = MR_sv(7);
	MR_r9 = MR_sv(6);
	MR_r10 = MR_tempr1;
	}
	MR_np_call_localret_ent(ll_backend__frameopt__build_frame_block_map_14_0,
		ll_backend__frameopt__frameopt_main_det_stack_7_0_i12);
MR_def_label(ll_backend__frameopt__frameopt_main_det_stack_7_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_sv(5) = MR_r3;
	MR_sv(6) = MR_r4;
	MR_sv(10) = (MR_Word) MR_TAG_COMMON(0,0,1);
	MR_r1 = MR_sv(10);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(4);
	MR_r3 = MR_r5;
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(ll_backend__frameopt__analyze_block_map_5_0,
		ll_backend__frameopt__frameopt_main_det_stack_7_0_i13);
MR_def_label(ll_backend__frameopt__frameopt_main_det_stack_7_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(ll_backend__frameopt__frameopt_main_det_stack_7_0_i15);
	}
	MR_sv(7) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__frameopt, det_entry_info);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(ll_backend__frameopt, det_exit_info);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(7);
	MR_np_call_localret_ent(ll_backend__frameopt__can_delay_frame_2_0,
		ll_backend__frameopt__frameopt_main_det_stack_7_0_i17);
MR_def_label(ll_backend__frameopt__frameopt_main_det_stack_7_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__frameopt__frameopt_main_det_stack_7_0_i4);
	}
	MR_r1 = MR_sv(10);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(8);
	MR_r5 = MR_sv(5);
	MR_r6 = MR_sv(6);
	MR_r7 = MR_sv(7);
	MR_r8 = MR_sv(1);
	MR_np_call_localret_ent(ll_backend__frameopt__delay_frame_transform_13_0,
		ll_backend__frameopt__frameopt_main_det_stack_7_0_i19);
MR_def_label(ll_backend__frameopt__frameopt_main_det_stack_7_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r6,0)) {
		MR_GOTO_LAB(ll_backend__frameopt__frameopt_main_det_stack_7_0_i21);
	}
	MR_sv(8) = MR_r2;
	MR_sv(9) = MR_r1;
	MR_sv(1) = MR_r3;
	MR_sv(4) = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	MR_r1 = MR_sv(4);
	MR_r2 = MR_r4;
	MR_r3 = MR_r5;
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		ll_backend__frameopt__frameopt_main_det_stack_7_0_i22);
MR_def_label(ll_backend__frameopt__frameopt_main_det_stack_7_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		ll_backend__frameopt__frameopt_main_det_stack_7_0_i23);
MR_def_label(ll_backend__frameopt__frameopt_main_det_stack_7_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(9);
	MR_sv(9) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__frameopt, det_entry_info);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(ll_backend__frameopt, det_exit_info);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(1);
	}
	MR_np_call_localret_ent(ll_backend__frameopt__flatten_block_seq_3_0,
		ll_backend__frameopt__frameopt_main_det_stack_7_0_i24);
MR_def_label(ll_backend__frameopt__frameopt_main_det_stack_7_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(9);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		ll_backend__frameopt__frameopt_main_det_stack_7_0_i25);
MR_def_label(ll_backend__frameopt__frameopt_main_det_stack_7_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r3 = (MR_Integer) 1;
	MR_r1 = MR_sv(8);
	MR_decr_sp_and_return(11);
MR_def_label(ll_backend__frameopt__frameopt_main_det_stack_7_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r2;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_r5;
	MR_r3 = MR_sv(9);
	MR_np_call_localret_ent(ll_backend__frameopt__maybe_add_comments_5_0,
		ll_backend__frameopt__frameopt_main_det_stack_7_0_i26);
MR_def_label(ll_backend__frameopt__frameopt_main_det_stack_7_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_r1;
	MR_r3 = MR_tempr1;
	MR_r1 = MR_sv(8);
	MR_decr_sp_and_return(11);
	}
MR_def_label(ll_backend__frameopt__frameopt_main_det_stack_7_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(1, MR_r2, 0);
	MR_sv(8) = MR_tfield(0, MR_tempr1, 0);
	MR_sv(9) = MR_tfield(0, MR_tempr1, 1);
	MR_sv(7) = MR_r1;
	MR_sv(1) = (MR_Word) MR_CTOR0_ADDR(ll_backend__frameopt, det_entry_info);
	MR_sv(5) = (MR_Word) MR_CTOR0_ADDR(ll_backend__frameopt, det_exit_info);
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(7);
	}
	MR_np_call_localret_ent(fn__ll_backend__frameopt__can_clobber_succip_2_0,
		ll_backend__frameopt__frameopt_main_det_stack_7_0_i28);
MR_def_label(ll_backend__frameopt__frameopt_main_det_stack_7_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(8);
	MR_r3 = MR_sv(9);
	MR_r4 = MR_tempr1;
	MR_r5 = MR_sv(7);
	}
	MR_np_call_localret_ent(ll_backend__frameopt__keep_frame_transform_6_0,
		ll_backend__frameopt__frameopt_main_det_stack_7_0_i29);
MR_def_label(ll_backend__frameopt__frameopt_main_det_stack_7_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	MR_r2 = MR_sv(2);
	MR_r3 = (MR_Word) MR_TAG_COMMON(1,1,9);
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		ll_backend__frameopt__frameopt_main_det_stack_7_0_i33);
MR_def_label(ll_backend__frameopt__frameopt_main_det_stack_7_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(8);
	MR_sv(8) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(ll_backend__frameopt__flatten_block_seq_3_0,
		ll_backend__frameopt__frameopt_main_det_stack_7_0_i34);
MR_def_label(ll_backend__frameopt__frameopt_main_det_stack_7_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	MR_r2 = MR_sv(8);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		ll_backend__frameopt__frameopt_main_det_stack_7_0_i35);
MR_def_label(ll_backend__frameopt__frameopt_main_det_stack_7_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r3 = (MR_Integer) 1;
	MR_r1 = MR_sv(6);
	MR_decr_sp_and_return(11);
MR_def_label(ll_backend__frameopt__frameopt_main_det_stack_7_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(9);
	MR_r3 = (MR_Integer) 0;
	MR_r1 = MR_sv(6);
	MR_decr_sp_and_return(11);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__frameopt_module30)
	MR_init_entry1(ll_backend__frameopt__frameopt_main_nondet_stack_7_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__frameopt__frameopt_main_nondet_stack_7_0);
	MR_init_label10(ll_backend__frameopt__frameopt_main_nondet_stack_7_0,2,10,12,13,14,15,16,20,22,19)
	MR_init_label8(ll_backend__frameopt__frameopt_main_nondet_stack_7_0,24,27,28,29,30,26,31,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'frameopt_main_nondet_stack'/7 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__ll_backend__frameopt__frameopt_main_nondet_stack_7_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(11);
	MR_sv(11) = (MR_Word) MR_succip;
	MR_sv(3) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(4) = MR_tempr1;
	MR_sv(7) = MR_r4;
	MR_sv(6) = MR_r2;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(ll_backend__opt_util__get_prologue_4_0,
		ll_backend__frameopt__frameopt_main_nondet_stack_7_0_i2);
MR_def_label(ll_backend__frameopt__frameopt_main_nondet_stack_7_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r3,0,0)) {
		MR_GOTO_LAB(ll_backend__frameopt__frameopt_main_nondet_stack_7_0_i3);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tempr5 = MR_r3;
	MR_tempr1 = MR_tfield(0, MR_tfield(1, MR_tempr5, 0), 0);
	if (MR_RTAGS_TESTR(MR_tempr1,3,4)) {
		MR_GOTO_LAB(ll_backend__frameopt__frameopt_main_nondet_stack_7_0_i3);
	}
	MR_tempr2 = MR_tfield(3, MR_tempr1, 2);
	if (MR_LTAGS_TEST(MR_tempr2,0,0)) {
		MR_GOTO_LAB(ll_backend__frameopt__frameopt_main_nondet_stack_7_0_i3);
	}
	MR_tempr3 = MR_tfield(1, MR_tempr2, 0);
	if (MR_LTAGS_TESTR(MR_tempr3,0,2)) {
		MR_GOTO_LAB(ll_backend__frameopt__frameopt_main_nondet_stack_7_0_i3);
	}
	MR_tempr2 = MR_tfield(3, MR_tempr1, 1);
	if (MR_PTAG_TESTR(MR_tempr2,1)) {
		MR_GOTO_LAB(ll_backend__frameopt__frameopt_main_nondet_stack_7_0_i3);
	}
	MR_tag_alloc_heap(MR_tempr4, 0, (MR_Integer) 3);
	MR_sv(2) = MR_tempr4;
	MR_tfield(0, MR_tempr4, 0) = MR_tfield(1, MR_tempr2, 0);
	MR_tfield(0, MR_tempr4, 1) = MR_tfield(1, MR_tempr2, 1);
	MR_tfield(0, MR_tempr4, 2) = MR_tempr3;
	MR_sv(10) = MR_r1;
	MR_sv(1) = MR_r2;
	MR_sv(5) = MR_tempr5;
	MR_sv(8) = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, label);
	MR_r1 = MR_sv(8);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,2);
	}
	MR_np_call_localret_ent(map__init_1_0,
		ll_backend__frameopt__frameopt_main_nondet_stack_7_0_i10);
MR_def_label(ll_backend__frameopt__frameopt_main_nondet_stack_7_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(10);
	MR_tfield(1, MR_tempr1, 1) = MR_sv(5);
	MR_sv(5) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(6);
	}
	MR_np_call_localret_ent(ll_backend__frameopt__divide_into_basic_blocks_5_0,
		ll_backend__frameopt__frameopt_main_nondet_stack_7_0_i12);
MR_def_label(ll_backend__frameopt__frameopt_main_nondet_stack_7_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(10) = MR_r1;
	MR_sv(6) = MR_r2;
	MR_r1 = MR_sv(8);
	MR_r2 = MR_r1;
	MR_np_call_localret_ent(fn__map__init_0_0,
		ll_backend__frameopt__frameopt_main_nondet_stack_7_0_i13);
MR_def_label(ll_backend__frameopt__frameopt_main_nondet_stack_7_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, label);
	MR_r2 = MR_r1;
	MR_np_call_localret_ent(fn__map__init_0_0,
		ll_backend__frameopt__frameopt_main_nondet_stack_7_0_i14);
MR_def_label(ll_backend__frameopt__frameopt_main_nondet_stack_7_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,3);
	MR_r2 = MR_sv(10);
	MR_r3 = MR_sv(2);
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	MR_r5 = (MR_Word) MR_tbmkword(0, 0);
	MR_r6 = MR_sv(3);
	MR_r7 = MR_sv(5);
	MR_r8 = MR_sv(8);
	MR_r9 = MR_sv(6);
	MR_r10 = MR_tempr1;
	}
	MR_np_call_localret_ent(ll_backend__frameopt__build_frame_block_map_14_0,
		ll_backend__frameopt__frameopt_main_nondet_stack_7_0_i15);
MR_def_label(ll_backend__frameopt__frameopt_main_nondet_stack_7_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(10) = MR_r1;
	MR_sv(5) = MR_r3;
	MR_sv(6) = MR_r4;
	MR_sv(9) = (MR_Word) MR_TAG_COMMON(0,0,3);
	MR_r1 = MR_sv(9);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(10);
	MR_r3 = MR_r5;
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(ll_backend__frameopt__analyze_block_map_5_0,
		ll_backend__frameopt__frameopt_main_nondet_stack_7_0_i16);
MR_def_label(ll_backend__frameopt__frameopt_main_nondet_stack_7_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(10),0,0)) {
		MR_GOTO_LAB(ll_backend__frameopt__frameopt_main_nondet_stack_7_0_i20);
	}
	MR_r4 = MR_sv(3);
	MR_r8 = MR_sv(7);
	MR_r3 = MR_sv(2);
	MR_r2 = MR_sv(10);
	MR_r5 = MR_sv(5);
	MR_r6 = MR_sv(6);
	MR_r7 = MR_r1;
	MR_r1 = MR_sv(9);
	MR_GOTO_LAB(ll_backend__frameopt__frameopt_main_nondet_stack_7_0_i19);
MR_def_label(ll_backend__frameopt__frameopt_main_nondet_stack_7_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, label);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,2);
	MR_r3 = MR_sv(8);
	MR_r4 = MR_tfield(1, MR_sv(10), 0);
	MR_np_call_localret_ent(map__lookup_3_0,
		ll_backend__frameopt__frameopt_main_nondet_stack_7_0_i22);
MR_def_label(ll_backend__frameopt__frameopt_main_nondet_stack_7_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(0, MR_r1, 5);
	if (MR_PTAG_TESTR(MR_tempr1,0)) {
		MR_GOTO_LAB(ll_backend__frameopt__frameopt_main_nondet_stack_7_0_i3);
	}
	MR_r4 = MR_sv(3);
	MR_r8 = MR_sv(7);
	MR_r3 = MR_sv(2);
	MR_r2 = MR_sv(10);
	MR_r5 = MR_sv(5);
	MR_r6 = MR_sv(6);
	MR_r7 = MR_sv(8);
	MR_r1 = MR_sv(9);
	}
MR_def_label(ll_backend__frameopt__frameopt_main_nondet_stack_7_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r8;
	MR_np_call_localret_ent(ll_backend__frameopt__delay_frame_transform_13_0,
		ll_backend__frameopt__frameopt_main_nondet_stack_7_0_i24);
MR_def_label(ll_backend__frameopt__frameopt_main_nondet_stack_7_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r6,0)) {
		MR_GOTO_LAB(ll_backend__frameopt__frameopt_main_nondet_stack_7_0_i26);
	}
	MR_sv(3) = MR_r1;
	MR_sv(4) = MR_r2;
	MR_sv(7) = MR_r3;
	MR_sv(10) = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	MR_r1 = MR_sv(10);
	MR_r2 = MR_r4;
	MR_r3 = MR_r5;
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		ll_backend__frameopt__frameopt_main_nondet_stack_7_0_i27);
MR_def_label(ll_backend__frameopt__frameopt_main_nondet_stack_7_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(10);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		ll_backend__frameopt__frameopt_main_nondet_stack_7_0_i28);
MR_def_label(ll_backend__frameopt__frameopt_main_nondet_stack_7_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__frameopt, nondet_entry_info);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(ll_backend__frameopt, nondet_exit_info);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(7);
	}
	MR_np_call_localret_ent(ll_backend__frameopt__flatten_block_seq_3_0,
		ll_backend__frameopt__frameopt_main_nondet_stack_7_0_i29);
MR_def_label(ll_backend__frameopt__frameopt_main_nondet_stack_7_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(10);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		ll_backend__frameopt__frameopt_main_nondet_stack_7_0_i30);
MR_def_label(ll_backend__frameopt__frameopt_main_nondet_stack_7_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r3 = (MR_Integer) 1;
	MR_r1 = MR_sv(4);
	MR_decr_sp_and_return(11);
MR_def_label(ll_backend__frameopt__frameopt_main_nondet_stack_7_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = MR_r2;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_r5;
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(ll_backend__frameopt__maybe_add_comments_5_0,
		ll_backend__frameopt__frameopt_main_nondet_stack_7_0_i31);
MR_def_label(ll_backend__frameopt__frameopt_main_nondet_stack_7_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_r1;
	MR_r3 = MR_tempr1;
	MR_r1 = MR_sv(4);
	MR_decr_sp_and_return(11);
	}
MR_def_label(ll_backend__frameopt__frameopt_main_nondet_stack_7_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(4);
	MR_r3 = (MR_Integer) 0;
	MR_r1 = MR_sv(6);
	MR_decr_sp_and_return(11);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(ll_backend__opt_util__skip_comments_2_0);
MR_decl_entry(ll_backend__opt_util__is_succeed_next_2_0);

MR_BEGIN_MODULE(ll_backend__frameopt_module31)
	MR_init_entry1(ll_backend__frameopt__find_succeed_labels_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__frameopt__find_succeed_labels_3_0);
	MR_init_label7(ll_backend__frameopt__find_succeed_labels_3_0,32,3,7,8,10,4,5)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'find_succeed_labels'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__frameopt__find_succeed_labels_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
MR_def_label(ll_backend__frameopt__find_succeed_labels_3_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(ll_backend__frameopt__find_succeed_labels_3_0_i3);
	}
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(4);
MR_def_label(ll_backend__frameopt__find_succeed_labels_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(1, MR_r1, 1);
	MR_r3 = MR_tempr1;
	MR_tempr2 = MR_tfield(0, MR_tfield(1, MR_r1, 0), 0);
	if (MR_RTAGS_TESTR(MR_tempr2,3,5)) {
		MR_GOTO_LAB(ll_backend__frameopt__find_succeed_labels_3_0_i5);
	}
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_tempr1;
	MR_sv(3) = MR_tfield(3, MR_tempr2, 1);
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(ll_backend__opt_util__skip_comments_2_0,
		ll_backend__frameopt__find_succeed_labels_3_0_i7);
MR_def_label(ll_backend__frameopt__find_succeed_labels_3_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(ll_backend__opt_util__is_succeed_next_2_0,
		ll_backend__frameopt__find_succeed_labels_3_0_i8);
MR_def_label(ll_backend__frameopt__find_succeed_labels_3_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__frameopt__find_succeed_labels_3_0_i4);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, label);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,0);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_tempr1;
	MR_r5 = MR_sv(1);
	}
	MR_np_call_localret_ent(map__det_insert_4_0,
		ll_backend__frameopt__find_succeed_labels_3_0_i10);
MR_def_label(ll_backend__frameopt__find_succeed_labels_3_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(4);
	MR_GOTO_LAB(ll_backend__frameopt__find_succeed_labels_3_0_i32);
	}
MR_def_label(ll_backend__frameopt__find_succeed_labels_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
MR_def_label(ll_backend__frameopt__find_succeed_labels_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r3;
	MR_succip_word = MR_sv(4);
	MR_GOTO_LAB(ll_backend__frameopt__find_succeed_labels_3_0_i32);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(set_tree234__member_2_0);
MR_decl_entry(fn__f_115_116_114_105_110_103_95_95_43_43_2_0);

MR_BEGIN_MODULE(ll_backend__frameopt_module32)
	MR_init_entry1(ll_backend__frameopt__keep_nondet_frame_9_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__frameopt__keep_nondet_frame_9_0);
	MR_init_label9(ll_backend__frameopt__keep_nondet_frame_9_0,138,9,14,24,26,27,4,5,34)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'keep_nondet_frame'/9 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__frameopt__keep_nondet_frame_9_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(ll_backend__frameopt__keep_nondet_frame_9_0_i138);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = MR_r7;
	MR_proceed();
MR_def_label(ll_backend__frameopt__keep_nondet_frame_9_0,138)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(13);
	MR_sv(13) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr1 = MR_tfield(1, MR_r1, 0);
	MR_r8 = MR_tempr1;
	MR_tempr2 = MR_tfield(0, MR_tempr1, 0);
	MR_sv(8) = MR_tempr2;
	MR_sv(7) = MR_tfield(1, MR_r1, 1);
	if (MR_RTAGS_TESTR(MR_tempr2,3,3)) {
		MR_GOTO_LAB(ll_backend__frameopt__keep_nondet_frame_9_0_i5);
	}
	MR_tempr3 = MR_tfield(3, MR_tempr2, 1);
	if (MR_PTAG_TESTR(MR_tempr3,1)) {
		MR_GOTO_LAB(ll_backend__frameopt__keep_nondet_frame_9_0_i5);
	}
	MR_tempr4 = MR_tfield(1, MR_tempr3, 0);
	if (MR_PTAG_TESTR(MR_tempr4,1)) {
		MR_GOTO_LAB(ll_backend__frameopt__keep_nondet_frame_9_0_i5);
	}
	MR_sv(11) = MR_r2;
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r4;
	MR_sv(3) = MR_r5;
	MR_sv(4) = MR_r6;
	MR_sv(5) = MR_r7;
	MR_sv(6) = MR_tempr1;
	MR_sv(9) = MR_tfield(0, MR_tempr1, 1);
	MR_sv(10) = MR_tfield(3, MR_tempr2, 6);
	MR_sv(12) = MR_tfield(3, MR_tempr2, 2);
	MR_r1 = MR_r2;
	MR_r2 = MR_tfield(1, MR_tempr4, 1);
	}
	MR_np_call_localret_ent(__Unify___mdbcomp__prim_data__proc_label_0_0,
		ll_backend__frameopt__keep_nondet_frame_9_0_i9);
MR_def_label(ll_backend__frameopt__keep_nondet_frame_9_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__frameopt__keep_nondet_frame_9_0_i4);
	}
	if (MR_PTAG_TESTR(MR_sv(12),1)) {
		MR_GOTO_LAB(ll_backend__frameopt__keep_nondet_frame_9_0_i4);
	}
	if (MR_PTAG_TESTR(MR_sv(10),2)) {
		MR_GOTO_LAB(ll_backend__frameopt__keep_nondet_frame_9_0_i4);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(2, MR_sv(10), 0);
	if (MR_INT_NE(MR_tempr1,2)) {
		MR_GOTO_LAB(ll_backend__frameopt__keep_nondet_frame_9_0_i4);
	}
	MR_sv(10) = MR_tfield(1, MR_sv(12), 0);
	MR_sv(12) = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, label);
	MR_r1 = MR_sv(12);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,0);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(10);
	}
	MR_np_call_localret_ent(map__search_3_0,
		ll_backend__frameopt__keep_nondet_frame_9_0_i14);
MR_def_label(ll_backend__frameopt__keep_nondet_frame_9_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__frameopt__keep_nondet_frame_9_0_i4);
	}
	if (MR_PTAG_TESTR(MR_sv(2),2)) {
		MR_GOTO_LAB(ll_backend__frameopt__keep_nondet_frame_9_0_i4);
	}
	if (MR_LTAGS_TEST(MR_r2,0,0)) {
		MR_GOTO_LAB(ll_backend__frameopt__keep_nondet_frame_9_0_i4);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(0, MR_tfield(1, MR_r2, 0), 0);
	if (MR_PTAG_TESTR(MR_tempr1,2)) {
		MR_GOTO_LAB(ll_backend__frameopt__keep_nondet_frame_9_0_i4);
	}
	MR_tempr1 = MR_tfield(1, MR_r2, 1);
	if (MR_LTAGS_TEST(MR_tempr1,0,0)) {
		MR_GOTO_LAB(ll_backend__frameopt__keep_nondet_frame_9_0_i4);
	}
	MR_tempr2 = MR_tfield(1, MR_tempr1, 1);
	if (MR_LTAGS_TESTR(MR_tempr2,0,0)) {
		MR_GOTO_LAB(ll_backend__frameopt__keep_nondet_frame_9_0_i4);
	}
	MR_tempr2 = MR_tfield(0, MR_tfield(1, MR_tempr1, 0), 0);
	if (MR_RTAGS_TESTR(MR_tempr2,3,6)) {
		MR_GOTO_LAB(ll_backend__frameopt__keep_nondet_frame_9_0_i4);
	}
	MR_r1 = MR_sv(12);
	MR_r2 = MR_sv(10);
	MR_r3 = MR_sv(4);
	}
	MR_np_call_localret_ent(set_tree234__member_2_0,
		ll_backend__frameopt__keep_nondet_frame_9_0_i24);
MR_def_label(ll_backend__frameopt__keep_nondet_frame_9_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(ll_backend__frameopt__keep_nondet_frame_9_0_i4);
	}
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(11);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(8);
	MR_r5 = MR_sv(3);
	MR_r6 = MR_sv(4);
	MR_r7 = MR_sv(5);
	MR_np_localcall_lab(ll_backend__frameopt__keep_nondet_frame_9_0,
		ll_backend__frameopt__keep_nondet_frame_9_0_i26);
MR_def_label(ll_backend__frameopt__keep_nondet_frame_9_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(11) = MR_r1;
	MR_r1 = MR_sv(9);
	MR_r2 = (MR_Word) MR_string_const(" (nondet tailcall)", 18);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__frameopt__keep_nondet_frame_9_0_i27);
MR_def_label(ll_backend__frameopt__keep_nondet_frame_9_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_string_const("", 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(1);
	MR_tag_alloc_heap(MR_tempr3, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr3, 0) = (MR_Integer) 6;
	MR_tfield(3, MR_tempr3, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = MR_tempr3;
	MR_tfield(0, MR_tempr2, 1) = MR_r1;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr3, 1) = MR_sv(11);
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = MR_tempr1;
	MR_tfield(1, MR_r1, 1) = MR_tempr3;
	MR_r2 = (MR_Integer) 1;
	MR_decr_sp_and_return(13);
	}
MR_def_label(ll_backend__frameopt__keep_nondet_frame_9_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(11);
	MR_r3 = MR_sv(1);
	MR_r5 = MR_sv(3);
	MR_r6 = MR_sv(4);
	MR_r7 = MR_sv(5);
	MR_r8 = MR_sv(6);
MR_def_label(ll_backend__frameopt__keep_nondet_frame_9_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r8;
	MR_r1 = MR_sv(7);
	MR_r4 = MR_sv(8);
	MR_np_localcall_lab(ll_backend__frameopt__keep_nondet_frame_9_0,
		ll_backend__frameopt__keep_nondet_frame_9_0_i34);
MR_def_label(ll_backend__frameopt__keep_nondet_frame_9_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(6);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(13);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(list__condense_2_0);

MR_BEGIN_MODULE(ll_backend__frameopt_module33)
	MR_init_entry1(ll_backend__frameopt__frameopt_keep_nondet_frame_7_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__frameopt__frameopt_keep_nondet_frame_7_0);
	MR_init_label10(ll_backend__frameopt__frameopt_keep_nondet_frame_7_0,2,9,13,14,16,10,11,18,19,21)
	MR_init_label2(ll_backend__frameopt__frameopt_keep_nondet_frame_7_0,40,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'frameopt_keep_nondet_frame'/7 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__ll_backend__frameopt__frameopt_keep_nondet_frame_7_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(15);
	MR_sv(15) = (MR_Word) MR_succip;
	MR_sv(10) = MR_r1;
	MR_sv(12) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_sv(1) = MR_tempr1;
	MR_sv(9) = MR_r3;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(ll_backend__opt_util__get_prologue_4_0,
		ll_backend__frameopt__frameopt_keep_nondet_frame_7_0_i2);
MR_def_label(ll_backend__frameopt__frameopt_keep_nondet_frame_7_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r3,0,0)) {
		MR_GOTO_LAB(ll_backend__frameopt__frameopt_keep_nondet_frame_7_0_i4);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tempr5 = MR_r3;
	MR_tempr1 = MR_tfield(1, MR_tempr5, 0);
	MR_tempr2 = MR_tfield(0, MR_tempr1, 0);
	if (MR_RTAGS_TESTR(MR_tempr2,3,4)) {
		MR_GOTO_LAB(ll_backend__frameopt__frameopt_keep_nondet_frame_7_0_i4);
	}
	MR_tempr3 = MR_tfield(3, MR_tempr2, 1);
	if (MR_PTAG_TESTR(MR_tempr3,1)) {
		MR_GOTO_LAB(ll_backend__frameopt__frameopt_keep_nondet_frame_7_0_i4);
	}
	MR_tempr4 = MR_tfield(3, MR_tempr2, 2);
	if (MR_LTAGS_TEST(MR_tempr4,0,0)) {
		MR_GOTO_LAB(ll_backend__frameopt__frameopt_keep_nondet_frame_7_0_i4);
	}
	MR_sv(2) = MR_r1;
	MR_sv(3) = MR_r2;
	MR_sv(11) = MR_tempr5;
	MR_sv(4) = MR_tempr3;
	MR_sv(5) = MR_tfield(1, MR_tempr4, 0);
	MR_sv(6) = MR_tfield(1, MR_tempr5, 1);
	MR_sv(7) = MR_tempr2;
	MR_sv(8) = MR_tfield(0, MR_tempr1, 1);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, label);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,0);
	}
	MR_np_call_localret_ent(fn__map__init_0_0,
		ll_backend__frameopt__frameopt_keep_nondet_frame_7_0_i9);
MR_def_label(ll_backend__frameopt__frameopt_keep_nondet_frame_7_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_sv(11);
	MR_r2 = MR_tfield(1, MR_tempr2, 1);
	MR_tempr1 = MR_tfield(0, MR_tfield(1, MR_tempr2, 0), 0);
	if (MR_RTAGS_TESTR(MR_tempr1,3,5)) {
		MR_GOTO_LAB(ll_backend__frameopt__frameopt_keep_nondet_frame_7_0_i11);
	}
	MR_sv(11) = MR_r1;
	MR_sv(13) = MR_r2;
	MR_sv(14) = MR_tfield(3, MR_tempr1, 1);
	MR_r1 = MR_r2;
	}
	MR_np_call_localret_ent(ll_backend__opt_util__skip_comments_2_0,
		ll_backend__frameopt__frameopt_keep_nondet_frame_7_0_i13);
MR_def_label(ll_backend__frameopt__frameopt_keep_nondet_frame_7_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(ll_backend__opt_util__is_succeed_next_2_0,
		ll_backend__frameopt__frameopt_keep_nondet_frame_7_0_i14);
MR_def_label(ll_backend__frameopt__frameopt_keep_nondet_frame_7_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__frameopt__frameopt_keep_nondet_frame_7_0_i10);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, label);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,0);
	MR_r3 = MR_sv(14);
	MR_r4 = MR_tempr1;
	MR_r5 = MR_sv(11);
	}
	MR_np_call_localret_ent(map__det_insert_4_0,
		ll_backend__frameopt__frameopt_keep_nondet_frame_7_0_i16);
MR_def_label(ll_backend__frameopt__frameopt_keep_nondet_frame_7_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(13);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(ll_backend__frameopt__find_succeed_labels_3_0,
		ll_backend__frameopt__frameopt_keep_nondet_frame_7_0_i18);
MR_def_label(ll_backend__frameopt__frameopt_keep_nondet_frame_7_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(11);
	MR_r2 = MR_sv(13);
MR_def_label(ll_backend__frameopt__frameopt_keep_nondet_frame_7_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_r2;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(ll_backend__frameopt__find_succeed_labels_3_0,
		ll_backend__frameopt__frameopt_keep_nondet_frame_7_0_i18);
MR_def_label(ll_backend__frameopt__frameopt_keep_nondet_frame_7_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(11) = MR_r1;
	MR_r1 = MR_sv(9);
	MR_np_call_localret_ent(counter__allocate_3_0,
		ll_backend__frameopt__frameopt_keep_nondet_frame_7_0_i19);
MR_def_label(ll_backend__frameopt__frameopt_keep_nondet_frame_7_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tfield(0, MR_tempr1, 1) = MR_sv(10);
	MR_sv(10) = MR_tempr1;
	MR_tempr2 = MR_sv(12);
	MR_sv(12) = MR_r2;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_tfield(0, MR_tempr1, 1);
	MR_r4 = MR_sv(7);
	MR_r5 = MR_sv(11);
	MR_r6 = MR_tempr2;
	MR_r7 = (MR_Integer) 0;
	}
	MR_np_call_localret_ent(ll_backend__frameopt__keep_nondet_frame_9_0,
		ll_backend__frameopt__frameopt_keep_nondet_frame_7_0_i21);
MR_def_label(ll_backend__frameopt__frameopt_keep_nondet_frame_7_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) 1 != (MR_Integer) MR_r2)) {
		MR_GOTO_LAB(ll_backend__frameopt__frameopt_keep_nondet_frame_7_0_i4);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 4;
	MR_tfield(3, MR_tempr2, 1) = MR_sv(4);
	MR_tfield(3, MR_tempr2, 2) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr3, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr3, 0) = MR_tempr2;
	MR_tfield(0, MR_tempr3, 1) = MR_sv(8);
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 5;
	MR_tfield(3, MR_tempr2, 1) = MR_sv(10);
	MR_tag_alloc_heap(MR_tempr4, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr4, 0) = MR_tempr2;
	MR_tfield(0, MR_tempr4, 1) = (MR_Word) MR_string_const("tail recursion target, nofulljump", 33);
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 3;
	MR_tfield(3, MR_tempr2, 1) = MR_sv(5);
	MR_tag_alloc_heap(MR_tempr5, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr5, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr5, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr2, 1) = (MR_Word) MR_TAG_COMMON(3,4,1);
	MR_tfield(3, MR_tempr2, 2) = MR_tempr5;
	MR_tag_alloc_heap(MR_tempr5, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr5, 0) = MR_tempr2;
	MR_tfield(0, MR_tempr5, 1) = (MR_Word) MR_string_const("", 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr5;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr5, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr5, 0) = MR_tempr4;
	MR_tfield(1, MR_tempr5, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr3;
	MR_tfield(1, MR_tempr2, 1) = MR_tempr5;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_r1;
	MR_tfield(1, MR_tempr3, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr4, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr4, 1) = MR_tempr3;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(3);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr4;
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_tempr1;
	MR_tfield(1, MR_r2, 1) = MR_tempr2;
	MR_sv(10) = MR_sv(12);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	}
	MR_np_call_localret_ent(list__condense_2_0,
		ll_backend__frameopt__frameopt_keep_nondet_frame_7_0_i40);
MR_def_label(ll_backend__frameopt__frameopt_keep_nondet_frame_7_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r3 = (MR_Integer) 1;
	MR_r1 = MR_sv(10);
	MR_decr_sp_and_return(15);
MR_def_label(ll_backend__frameopt__frameopt_keep_nondet_frame_7_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_r3 = (MR_Integer) 0;
	MR_r1 = MR_sv(9);
	MR_decr_sp_and_return(15);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__frameopt_module34)
	MR_init_entry1(fn__ll_backend__frameopt__describe_entry_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__ll_backend__frameopt__describe_entry_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'describe_entry'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__ll_backend__frameopt__describe_entry_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r2;
	MR_r2 = (MR_Integer) 5;
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(fn__ll_backend__frameopt__describe_entry_1_0));
	MR_np_tailcall_ent(do_call_class_method_1);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__frameopt_module35)
	MR_init_entry1(fn__ll_backend__frameopt__describe_exit_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__ll_backend__frameopt__describe_exit_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'describe_exit'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__ll_backend__frameopt__describe_exit_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_r3 = MR_r2;
	MR_r4 = MR_tempr1;
	MR_r2 = (MR_Integer) 6;
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(fn__ll_backend__frameopt__describe_exit_2_0));
	MR_np_tailcall_ent(do_call_class_method_2);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__ll_backend__opt_util__lval_refers_stackvars_1_0);
MR_decl_entry(fn__ll_backend__opt_util__rval_refers_stackvars_1_0);

MR_BEGIN_MODULE(ll_backend__frameopt_module36)
	MR_init_entry1(ll_backend__frameopt__detstack_teardown_2_12_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__frameopt__detstack_teardown_2_12_0);
	MR_init_label10(ll_backend__frameopt__detstack_teardown_2_12_0,151,2,5,11,20,22,25,10,29,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'detstack_teardown_2'/12 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__frameopt__detstack_teardown_2_12_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
MR_def_label(ll_backend__frameopt__detstack_teardown_2_12_0,151)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_sv(5) = MR_r3;
	MR_sv(6) = MR_r4;
	MR_sv(7) = MR_r5;
	MR_sv(8) = MR_r6;
	MR_np_call_localret_ent(ll_backend__opt_util__skip_comments_2_0,
		ll_backend__frameopt__detstack_teardown_2_12_0_i2);
MR_def_label(ll_backend__frameopt__detstack_teardown_2_12_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(ll_backend__frameopt__detstack_teardown_2_12_0_i1);
	}
	MR_r7 = MR_tfield(0, MR_tfield(1, MR_r1, 0), 0);
	if (MR_PTAG_TESTR(MR_r7,2)) {
		MR_GOTO_LAB(ll_backend__frameopt__detstack_teardown_2_12_0_i5);
	}
	if (MR_LTAGS_TESTR(MR_sv(8),0,0)) {
		MR_GOTO_LAB(ll_backend__frameopt__detstack_teardown_2_12_0_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r6 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_tfield(1, MR_r1, 0);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_tfield(1, MR_r1, 1);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(5);
	MR_r4 = MR_sv(6);
	MR_r5 = MR_sv(7);
	MR_succip_word = MR_sv(9);
	MR_GOTO_LAB(ll_backend__frameopt__detstack_teardown_2_12_0_i151);
	}
MR_def_label(ll_backend__frameopt__detstack_teardown_2_12_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r7,3,1)) {
		MR_GOTO_LAB(ll_backend__frameopt__detstack_teardown_2_12_0_i10);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tempr5 = MR_r7;
	MR_tempr1 = MR_tfield(3, MR_tempr5, 2);
	MR_sv(4) = MR_tempr1;
	MR_r8 = MR_tfield(3, MR_tempr5, 1);
	MR_r7 = MR_tfield(1, MR_r1, 1);
	MR_sv(2) = MR_tfield(1, MR_r1, 0);
	if (MR_LTAGS_TESTR(MR_r8,0,0)) {
		MR_GOTO_LAB(ll_backend__frameopt__detstack_teardown_2_12_0_i11);
	}
	if (MR_PTAG_TESTR(MR_tempr1,0)) {
		MR_GOTO_LAB(ll_backend__frameopt__detstack_teardown_2_12_0_i11);
	}
	MR_tempr2 = MR_tfield(0, MR_tempr1, 0);
	if (MR_RTAGS_TESTR(MR_tempr2,3,0)) {
		MR_GOTO_LAB(ll_backend__frameopt__detstack_teardown_2_12_0_i11);
	}
	MR_tempr3 = MR_tfield(3, MR_tempr2, 1);
	if ((MR_sv(1) != MR_tempr3)) {
		MR_GOTO_LAB(ll_backend__frameopt__detstack_teardown_2_12_0_i11);
	}
	if (MR_LTAGS_TESTR(MR_sv(6),0,0)) {
		MR_GOTO_LAB(ll_backend__frameopt__detstack_teardown_2_12_0_i1);
	}
	if (MR_LTAGS_TESTR(MR_sv(7),0,0)) {
		MR_GOTO_LAB(ll_backend__frameopt__detstack_teardown_2_12_0_i1);
	}
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 2);
	MR_r4 = MR_tempr4;
	MR_tfield(1, MR_tempr4, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr4, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_r7;
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(5);
	MR_r5 = MR_sv(7);
	MR_r6 = MR_sv(8);
	MR_succip_word = MR_sv(9);
	MR_GOTO_LAB(ll_backend__frameopt__detstack_teardown_2_12_0_i151);
	}
MR_def_label(ll_backend__frameopt__detstack_teardown_2_12_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r7;
	MR_r1 = MR_r8;
	MR_np_call_localret_ent(fn__ll_backend__opt_util__lval_refers_stackvars_1_0,
		ll_backend__frameopt__detstack_teardown_2_12_0_i20);
MR_def_label(ll_backend__frameopt__detstack_teardown_2_12_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(ll_backend__frameopt__detstack_teardown_2_12_0_i1);
	}
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(fn__ll_backend__opt_util__rval_refers_stackvars_1_0,
		ll_backend__frameopt__detstack_teardown_2_12_0_i22);
MR_def_label(ll_backend__frameopt__detstack_teardown_2_12_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(ll_backend__frameopt__detstack_teardown_2_12_0_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	MR_r2 = MR_sv(5);
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		ll_backend__frameopt__detstack_teardown_2_12_0_i25);
MR_def_label(ll_backend__frameopt__detstack_teardown_2_12_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(6);
	MR_r5 = MR_sv(7);
	MR_r6 = MR_sv(8);
	MR_succip_word = MR_sv(9);
	MR_GOTO_LAB(ll_backend__frameopt__detstack_teardown_2_12_0_i151);
	}
MR_def_label(ll_backend__frameopt__detstack_teardown_2_12_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r7,3,25)) {
		MR_GOTO_LAB(ll_backend__frameopt__detstack_teardown_2_12_0_i29);
	}
	if (MR_LTAGS_TESTR(MR_sv(7),0,0)) {
		MR_GOTO_LAB(ll_backend__frameopt__detstack_teardown_2_12_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(3, MR_r7, 1);
	if ((MR_sv(1) != MR_tempr1)) {
		MR_GOTO_LAB(ll_backend__frameopt__detstack_teardown_2_12_0_i1);
	}
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_r5 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_tfield(1, MR_r1, 0);
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_tfield(1, MR_r1, 1);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(5);
	MR_r4 = MR_sv(6);
	MR_r6 = MR_sv(8);
	MR_succip_word = MR_sv(9);
	MR_GOTO_LAB(ll_backend__frameopt__detstack_teardown_2_12_0_i151);
	}
MR_def_label(ll_backend__frameopt__detstack_teardown_2_12_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r7,3,6)) {
		MR_GOTO_LAB(ll_backend__frameopt__detstack_teardown_2_12_0_i1);
	}
	if (MR_LTAGS_TEST(MR_sv(7),0,0)) {
		MR_GOTO_LAB(ll_backend__frameopt__detstack_teardown_2_12_0_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(7);
	MR_r7 = MR_tfield(1, MR_tempr1, 1);
	if (MR_LTAGS_TESTR(MR_r7,0,0)) {
		MR_GOTO_LAB(ll_backend__frameopt__detstack_teardown_2_12_0_i1);
	}
	MR_r6 = MR_tfield(1, MR_r1, 0);
	MR_r7 = MR_tfield(1, MR_r1, 1);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(6);
	MR_r4 = MR_tempr1;
	MR_r5 = MR_sv(8);
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(9);
	}
MR_def_label(ll_backend__frameopt__detstack_teardown_2_12_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(9);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__frameopt_module37)
	MR_init_entry1(ll_backend__frameopt__detstack_teardown_8_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__frameopt__detstack_teardown_8_0);
	MR_init_label5(ll_backend__frameopt__detstack_teardown_8_0,14,3,6,8,12)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'detstack_teardown'/8 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__frameopt__detstack_teardown_8_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(ll_backend__frameopt__detstack_teardown_8_0_i14);
	}
	MR_sv(2) = MR_tfield(1, MR_r1, 1);
	MR_sv(1) = MR_tfield(1, MR_r1, 0);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(0, MR_sv(1), 0);
	if (MR_RTAGS_TESTR(MR_tempr1,3,5)) {
		MR_GOTO_LAB(ll_backend__frameopt__detstack_teardown_8_0_i3);
	}
	}
MR_def_label(ll_backend__frameopt__detstack_teardown_8_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_r1 = MR_FALSE;
	MR_proceed();
MR_def_label(ll_backend__frameopt__detstack_teardown_8_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r2;
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	MR_r5 = (MR_Word) MR_tbmkword(0, 0);
	MR_r6 = (MR_Word) MR_tbmkword(0, 0);
	MR_np_call_localret_ent(ll_backend__frameopt__detstack_teardown_2_12_0,
		ll_backend__frameopt__detstack_teardown_8_0_i6);
MR_def_label(ll_backend__frameopt__detstack_teardown_8_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(ll_backend__frameopt__detstack_teardown_8_0_i12);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(3);
	MR_np_localcall_lab(ll_backend__frameopt__detstack_teardown_8_0,
		ll_backend__frameopt__detstack_teardown_8_0_i8);
MR_def_label(ll_backend__frameopt__detstack_teardown_8_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__frameopt__detstack_teardown_8_0_i14);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = MR_r2;
	MR_r2 = MR_tempr1;
	}
MR_def_label(ll_backend__frameopt__detstack_teardown_8_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_r1 = MR_TRUE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__frameopt_module38)
	MR_init_entry1(ll_backend__frameopt__nondetstack_teardown_2_14_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__frameopt__nondetstack_teardown_2_14_0);
	MR_init_label10(ll_backend__frameopt__nondetstack_teardown_2_14_0,214,2,5,11,20,29,37,39,42,10)
	MR_init_label1(ll_backend__frameopt__nondetstack_teardown_2_14_0,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'nondetstack_teardown_2'/14 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__frameopt__nondetstack_teardown_2_14_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
MR_def_label(ll_backend__frameopt__nondetstack_teardown_2_14_0,214)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r2;
	MR_sv(5) = MR_r3;
	MR_sv(6) = MR_r4;
	MR_sv(7) = MR_r5;
	MR_sv(8) = MR_r6;
	MR_np_call_localret_ent(ll_backend__opt_util__skip_comments_2_0,
		ll_backend__frameopt__nondetstack_teardown_2_14_0_i2);
MR_def_label(ll_backend__frameopt__nondetstack_teardown_2_14_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(ll_backend__frameopt__nondetstack_teardown_2_14_0_i1);
	}
	MR_r7 = MR_tfield(0, MR_tfield(1, MR_r1, 0), 0);
	if (MR_PTAG_TESTR(MR_r7,2)) {
		MR_GOTO_LAB(ll_backend__frameopt__nondetstack_teardown_2_14_0_i5);
	}
	if (MR_LTAGS_TESTR(MR_sv(8),0,0)) {
		MR_GOTO_LAB(ll_backend__frameopt__nondetstack_teardown_2_14_0_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r6 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_tfield(1, MR_r1, 0);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_tfield(1, MR_r1, 1);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(5);
	MR_r4 = MR_sv(6);
	MR_r5 = MR_sv(7);
	MR_succip_word = MR_sv(9);
	MR_GOTO_LAB(ll_backend__frameopt__nondetstack_teardown_2_14_0_i214);
	}
MR_def_label(ll_backend__frameopt__nondetstack_teardown_2_14_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r7,3,1)) {
		MR_GOTO_LAB(ll_backend__frameopt__nondetstack_teardown_2_14_0_i10);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tempr5 = MR_r7;
	MR_tempr1 = MR_tfield(3, MR_tempr5, 2);
	MR_sv(3) = MR_tempr1;
	MR_r8 = MR_tfield(3, MR_tempr5, 1);
	MR_r7 = MR_tfield(1, MR_r1, 1);
	MR_sv(1) = MR_tfield(1, MR_r1, 0);
	if (MR_LTAGS_TESTR(MR_r8,0,0)) {
		MR_GOTO_LAB(ll_backend__frameopt__nondetstack_teardown_2_14_0_i11);
	}
	if (MR_LTAGS_TESTR(MR_sv(5),0,0)) {
		MR_GOTO_LAB(ll_backend__frameopt__nondetstack_teardown_2_14_0_i11);
	}
	if (MR_LTAGS_TESTR(MR_sv(7),0,0)) {
		MR_GOTO_LAB(ll_backend__frameopt__nondetstack_teardown_2_14_0_i11);
	}
	if (MR_PTAG_TESTR(MR_tempr1,0)) {
		MR_GOTO_LAB(ll_backend__frameopt__nondetstack_teardown_2_14_0_i11);
	}
	MR_tempr2 = MR_tfield(0, MR_tempr1, 0);
	if (MR_RTAGS_TESTR(MR_tempr2,3,4)) {
		MR_GOTO_LAB(ll_backend__frameopt__nondetstack_teardown_2_14_0_i11);
	}
	MR_tempr3 = MR_tfield(3, MR_tempr2, 1);
	if (MR_PTAG_TESTR(MR_tempr3,0)) {
		MR_GOTO_LAB(ll_backend__frameopt__nondetstack_teardown_2_14_0_i11);
	}
	MR_tempr2 = MR_tfield(0, MR_tempr3, 0);
	if (MR_LTAGS_TESTR(MR_tempr2,0,2)) {
		MR_GOTO_LAB(ll_backend__frameopt__nondetstack_teardown_2_14_0_i11);
	}
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr4;
	MR_tfield(1, MR_tempr4, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr4, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_r7;
	MR_r6 = MR_sv(8);
	MR_r4 = MR_sv(6);
	MR_r5 = MR_sv(7);
	MR_r2 = MR_sv(4);
	MR_succip_word = MR_sv(9);
	MR_GOTO_LAB(ll_backend__frameopt__nondetstack_teardown_2_14_0_i214);
	}
MR_def_label(ll_backend__frameopt__nondetstack_teardown_2_14_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r8,0,1)) {
		MR_GOTO_LAB(ll_backend__frameopt__nondetstack_teardown_2_14_0_i20);
	}
	if (MR_LTAGS_TESTR(MR_sv(6),0,0)) {
		MR_GOTO_LAB(ll_backend__frameopt__nondetstack_teardown_2_14_0_i20);
	}
	if (MR_LTAGS_TESTR(MR_sv(7),0,0)) {
		MR_GOTO_LAB(ll_backend__frameopt__nondetstack_teardown_2_14_0_i20);
	}
	if (MR_PTAG_TESTR(MR_sv(3),0)) {
		MR_GOTO_LAB(ll_backend__frameopt__nondetstack_teardown_2_14_0_i20);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_tfield(0, MR_sv(3), 0);
	if (MR_RTAGS_TESTR(MR_tempr1,3,8)) {
		MR_GOTO_LAB(ll_backend__frameopt__nondetstack_teardown_2_14_0_i20);
	}
	MR_tempr2 = MR_tfield(3, MR_tempr1, 1);
	if (MR_PTAG_TESTR(MR_tempr2,0)) {
		MR_GOTO_LAB(ll_backend__frameopt__nondetstack_teardown_2_14_0_i20);
	}
	MR_tempr1 = MR_tfield(0, MR_tempr2, 0);
	if (MR_LTAGS_TESTR(MR_tempr1,0,2)) {
		MR_GOTO_LAB(ll_backend__frameopt__nondetstack_teardown_2_14_0_i20);
	}
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_r4 = MR_tempr3;
	MR_tfield(1, MR_tempr3, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr3, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_r7;
	MR_r6 = MR_sv(8);
	MR_r3 = MR_sv(5);
	MR_r5 = MR_sv(7);
	MR_r2 = MR_sv(4);
	MR_succip_word = MR_sv(9);
	MR_GOTO_LAB(ll_backend__frameopt__nondetstack_teardown_2_14_0_i214);
	}
MR_def_label(ll_backend__frameopt__nondetstack_teardown_2_14_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r8,0,2)) {
		MR_GOTO_LAB(ll_backend__frameopt__nondetstack_teardown_2_14_0_i29);
	}
	if (MR_LTAGS_TESTR(MR_sv(7),0,0)) {
		MR_GOTO_LAB(ll_backend__frameopt__nondetstack_teardown_2_14_0_i29);
	}
	if (MR_PTAG_TESTR(MR_sv(3),0)) {
		MR_GOTO_LAB(ll_backend__frameopt__nondetstack_teardown_2_14_0_i29);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_tfield(0, MR_sv(3), 0);
	if (MR_RTAGS_TESTR(MR_tempr1,3,5)) {
		MR_GOTO_LAB(ll_backend__frameopt__nondetstack_teardown_2_14_0_i29);
	}
	MR_tempr2 = MR_tfield(3, MR_tempr1, 1);
	if (MR_PTAG_TESTR(MR_tempr2,0)) {
		MR_GOTO_LAB(ll_backend__frameopt__nondetstack_teardown_2_14_0_i29);
	}
	MR_tempr1 = MR_tfield(0, MR_tempr2, 0);
	if (MR_LTAGS_TESTR(MR_tempr1,0,2)) {
		MR_GOTO_LAB(ll_backend__frameopt__nondetstack_teardown_2_14_0_i29);
	}
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_r5 = MR_tempr3;
	MR_tfield(1, MR_tempr3, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr3, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_r7;
	MR_r6 = MR_sv(8);
	MR_r3 = MR_sv(5);
	MR_r4 = MR_sv(6);
	MR_r2 = MR_sv(4);
	MR_succip_word = MR_sv(9);
	MR_GOTO_LAB(ll_backend__frameopt__nondetstack_teardown_2_14_0_i214);
	}
MR_def_label(ll_backend__frameopt__nondetstack_teardown_2_14_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r7;
	MR_r1 = MR_r8;
	MR_np_call_localret_ent(fn__ll_backend__opt_util__lval_refers_stackvars_1_0,
		ll_backend__frameopt__nondetstack_teardown_2_14_0_i37);
MR_def_label(ll_backend__frameopt__nondetstack_teardown_2_14_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(ll_backend__frameopt__nondetstack_teardown_2_14_0_i1);
	}
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(fn__ll_backend__opt_util__rval_refers_stackvars_1_0,
		ll_backend__frameopt__nondetstack_teardown_2_14_0_i39);
MR_def_label(ll_backend__frameopt__nondetstack_teardown_2_14_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(ll_backend__frameopt__nondetstack_teardown_2_14_0_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	MR_r2 = MR_sv(4);
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		ll_backend__frameopt__nondetstack_teardown_2_14_0_i42);
MR_def_label(ll_backend__frameopt__nondetstack_teardown_2_14_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r6 = MR_sv(8);
	MR_r3 = MR_sv(5);
	MR_r4 = MR_sv(6);
	MR_r5 = MR_sv(7);
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(9);
	MR_GOTO_LAB(ll_backend__frameopt__nondetstack_teardown_2_14_0_i214);
	}
MR_def_label(ll_backend__frameopt__nondetstack_teardown_2_14_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r7,3,6)) {
		MR_GOTO_LAB(ll_backend__frameopt__nondetstack_teardown_2_14_0_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r7;
	MR_r7 = MR_tfield(1, MR_r1, 0);
	MR_r8 = MR_tfield(3, MR_tempr1, 1);
	MR_r9 = MR_tfield(1, MR_r1, 1);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(5);
	MR_r4 = MR_sv(6);
	MR_r5 = MR_sv(7);
	MR_r6 = MR_sv(8);
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(9);
	}
MR_def_label(ll_backend__frameopt__nondetstack_teardown_2_14_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(9);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__frameopt_module39)
	MR_init_entry1(ll_backend__frameopt__nondetstack_teardown_9_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__frameopt__nondetstack_teardown_9_0);
	MR_init_label5(ll_backend__frameopt__nondetstack_teardown_9_0,14,3,6,8,12)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'nondetstack_teardown'/9 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__frameopt__nondetstack_teardown_9_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(ll_backend__frameopt__nondetstack_teardown_9_0_i14);
	}
	MR_sv(2) = MR_tfield(1, MR_r1, 1);
	MR_sv(1) = MR_tfield(1, MR_r1, 0);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(0, MR_sv(1), 0);
	if (MR_RTAGS_TESTR(MR_tempr1,3,5)) {
		MR_GOTO_LAB(ll_backend__frameopt__nondetstack_teardown_9_0_i3);
	}
	}
MR_def_label(ll_backend__frameopt__nondetstack_teardown_9_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_r1 = MR_FALSE;
	MR_proceed();
MR_def_label(ll_backend__frameopt__nondetstack_teardown_9_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	MR_r5 = (MR_Word) MR_tbmkword(0, 0);
	MR_r6 = (MR_Word) MR_tbmkword(0, 0);
	MR_np_call_localret_ent(ll_backend__frameopt__nondetstack_teardown_2_14_0,
		ll_backend__frameopt__nondetstack_teardown_9_0_i6);
MR_def_label(ll_backend__frameopt__nondetstack_teardown_9_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(ll_backend__frameopt__nondetstack_teardown_9_0_i12);
	}
	MR_r1 = MR_sv(2);
	MR_np_localcall_lab(ll_backend__frameopt__nondetstack_teardown_9_0,
		ll_backend__frameopt__nondetstack_teardown_9_0_i8);
MR_def_label(ll_backend__frameopt__nondetstack_teardown_9_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__frameopt__nondetstack_teardown_9_0_i14);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = MR_r2;
	MR_r2 = MR_tempr1;
	}
MR_def_label(ll_backend__frameopt__nondetstack_teardown_9_0,12)
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


MR_BEGIN_MODULE(ll_backend__frameopt_module40)
	MR_init_entry1(ll_backend__frameopt__local_label_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__frameopt__local_label_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'local_label'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__frameopt__local_label_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_mask_field(MR_r2, 1);
	MR_np_tailcall_ent(__Unify___mdbcomp__prim_data__proc_label_0_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__frameopt_module41)
	MR_init_entry1(ll_backend__frameopt__mark_redoip_label_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__frameopt__mark_redoip_label_3_0);
	MR_init_label3(ll_backend__frameopt__mark_redoip_label_3_0,3,5,9)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'mark_redoip_label'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__frameopt__mark_redoip_label_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_CTOR_ADDR(ll_backend__frameopt, frame_block_info, 2);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_tfield(0, MR_tempr1, 2) = MR_r2;
	MR_sv(1) = MR_r3;
	MR_tempr2 = MR_r4;
	MR_sv(2) = MR_tempr2;
	MR_sv(3) = MR_tempr1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, label);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	MR_r4 = MR_sv(1);
	}
	MR_np_call_localret_ent(map__lookup_3_0,
		ll_backend__frameopt__mark_redoip_label_3_0_i3);
MR_def_label(ll_backend__frameopt__mark_redoip_label_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_tfield(0, MR_r1, 5);
	MR_r4 = MR_tempr1;
	if (MR_PTAG_TESTR(MR_tempr1,1)) {
		MR_GOTO_LAB(ll_backend__frameopt__mark_redoip_label_3_0_i5);
	}
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = (MR_Integer) 0;
	MR_tfield(1, MR_tempr2, 1) = MR_tfield(1, MR_tempr1, 1);
	MR_tag_alloc_heap(MR_tempr3, 0, (MR_Integer) 6);
	MR_r4 = MR_tempr3;
	MR_tfield(0, MR_tempr3, 0) = MR_tfield(0, MR_r1, 0);
	MR_tfield(0, MR_tempr3, 1) = MR_tfield(0, MR_r1, 1);
	MR_tfield(0, MR_tempr3, 2) = MR_tfield(0, MR_r1, 2);
	MR_tfield(0, MR_tempr3, 3) = MR_tfield(0, MR_r1, 3);
	MR_tfield(0, MR_tempr3, 4) = MR_tfield(0, MR_r1, 4);
	MR_tfield(0, MR_tempr3, 5) = MR_tempr2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, label);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(1);
	MR_r5 = MR_sv(2);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(map__det_update_4_0);
	}
MR_def_label(ll_backend__frameopt__mark_redoip_label_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r4,0)) {
		MR_GOTO_LAB(ll_backend__frameopt__mark_redoip_label_3_0_i9);
	}
	MR_r1 = (MR_Word) MR_string_const("ll_backend.frameopt", 19);
	MR_r2 = (MR_Word) MR_string_const("predicate \140ll_backend.frameopt.mark_redoip_label\'/3", 51);
	MR_r3 = (MR_Word) MR_string_const("entry_block", 11);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(require__unexpected_3_0);
MR_def_label(ll_backend__frameopt__mark_redoip_label_3_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("ll_backend.frameopt", 19);
	MR_r2 = (MR_Word) MR_string_const("predicate \140ll_backend.frameopt.mark_redoip_label\'/3", 51);
	MR_r3 = (MR_Word) MR_string_const("exit_block", 10);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(require__unexpected_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__frameopt_module42)
	MR_init_entry1(ll_backend__frameopt__key_block_needs_frame_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__frameopt__key_block_needs_frame_2_0);
	MR_init_label1(ll_backend__frameopt__key_block_needs_frame_2_0,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'key_block_needs_frame'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__frameopt__key_block_needs_frame_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(0, MR_r1, 1);
	if (MR_INT_NE(MR_tempr1,0)) {
		MR_GOTO_LAB(ll_backend__frameopt__key_block_needs_frame_2_0_i1);
	}
	MR_r2 = MR_tfield(0, MR_r1, 0);
	MR_r1 = MR_TRUE;
	MR_proceed();
	}
MR_def_label(ll_backend__frameopt__key_block_needs_frame_2_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__frameopt_module43)
	MR_init_entry1(ll_backend__frameopt__record_frame_need_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__frameopt__record_frame_need_6_0);
	MR_init_label6(ll_backend__frameopt__record_frame_need_6_0,3,5,7,10,9,6)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'record_frame_need'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__frameopt__record_frame_need_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_CTOR_ADDR(ll_backend__frameopt, frame_block_info, 2);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_tfield(0, MR_tempr1, 2) = MR_r2;
	MR_sv(1) = MR_r4;
	MR_sv(2) = MR_r5;
	MR_sv(3) = MR_r6;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, label);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(map__lookup_3_0,
		ll_backend__frameopt__record_frame_need_6_0_i3);
MR_def_label(ll_backend__frameopt__record_frame_need_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_tfield(0, MR_r1, 5);
	if (MR_PTAG_TESTR(MR_r3,0)) {
		MR_GOTO_LAB(ll_backend__frameopt__record_frame_need_6_0_i5);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = (MR_Integer) 1;
	MR_decr_sp_and_return(6);
MR_def_label(ll_backend__frameopt__record_frame_need_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r3,1)) {
		MR_GOTO_LAB(ll_backend__frameopt__record_frame_need_6_0_i6);
	}
	MR_sv(4) = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, label);
	MR_sv(5) = (MR_Word) MR_CTOR0_ADDR(ll_backend__frameopt, block_needs_frame);
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(1);
	MR_np_call_localret_ent(map__lookup_3_0,
		ll_backend__frameopt__record_frame_need_6_0_i7);
MR_def_label(ll_backend__frameopt__record_frame_need_6_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(ll_backend__frameopt__record_frame_need_6_0_i9);
	}
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(1);
	MR_r4 = (MR_Integer) 0;
	MR_r5 = MR_sv(2);
	MR_np_call_localret_ent(map__det_update_4_0,
		ll_backend__frameopt__record_frame_need_6_0_i10);
MR_def_label(ll_backend__frameopt__record_frame_need_6_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(3);
	MR_decr_sp_and_return(6);
MR_def_label(ll_backend__frameopt__record_frame_need_6_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(3);
	MR_decr_sp_and_return(6);
MR_def_label(ll_backend__frameopt__record_frame_need_6_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("ll_backend.frameopt", 19);
	MR_r2 = (MR_Word) MR_string_const("predicate \140ll_backend.frameopt.record_frame_need\'/6", 51);
	MR_r3 = (MR_Word) MR_string_const("exit_block", 10);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(require__unexpected_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__frameopt_module44)
	MR_init_entry1(ll_backend__frameopt__all_successors_need_frame_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__frameopt__all_successors_need_frame_3_0);
	MR_init_label3(ll_backend__frameopt__all_successors_need_frame_3_0,3,5,9)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'all_successors_need_frame'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__frameopt__all_successors_need_frame_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_CTOR_ADDR(ll_backend__frameopt, frame_block_info, 2);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_tfield(0, MR_tempr1, 2) = MR_r2;
	MR_sv(1) = MR_r4;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, label);
	MR_r2 = MR_tempr1;
	MR_r4 = MR_r5;
	}
	MR_np_call_localret_ent(map__lookup_3_0,
		ll_backend__frameopt__all_successors_need_frame_3_0_i3);
MR_def_label(ll_backend__frameopt__all_successors_need_frame_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_tfield(0, MR_r1, 4);
	if (MR_LTAGS_TESTR(MR_r4,0,0)) {
		MR_GOTO_LAB(ll_backend__frameopt__all_successors_need_frame_3_0_i5);
	}
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 4);
	MR_tfield(0, MR_r2, 0) = (MR_Word) MR_COMMON(6,6);
	MR_tfield(0, MR_r2, 1) = (MR_Word) MR_ENTRY_AP(ll_backend__frameopt__label_needs_frame_2_0);
	MR_tfield(0, MR_r2, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_r2, 3) = MR_sv(1);
	MR_r3 = MR_tfield(0, MR_r1, 3);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, label);
	MR_np_call_localret_ent(list__filter_4_0,
		ll_backend__frameopt__all_successors_need_frame_3_0_i9);
MR_def_label(ll_backend__frameopt__all_successors_need_frame_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_tfield(1, MR_r4, 0);
	MR_tfield(1, MR_tempr1, 1) = MR_tfield(0, MR_r1, 3);
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 4);
	MR_tfield(0, MR_r2, 0) = (MR_Word) MR_COMMON(6,7);
	MR_tfield(0, MR_r2, 1) = (MR_Word) MR_ENTRY_AP(ll_backend__frameopt__label_needs_frame_2_0);
	MR_tfield(0, MR_r2, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_r2, 3) = MR_sv(1);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, label);
	}
	MR_np_call_localret_ent(list__filter_4_0,
		ll_backend__frameopt__all_successors_need_frame_3_0_i9);
MR_def_label(ll_backend__frameopt__all_successors_need_frame_3_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = ((MR_Integer) MR_r2 == (MR_Integer) MR_tbmkword(0, 0));
	MR_decr_sp_and_return(2);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__frameopt_module45)
	MR_init_entry1(ll_backend__frameopt__label_needs_frame_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__frameopt__label_needs_frame_2_0);
	MR_init_label2(ll_backend__frameopt__label_needs_frame_2_0,2,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'label_needs_frame'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__frameopt__label_needs_frame_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, label);
	MR_tempr2 = MR_r2;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(ll_backend__frameopt, block_needs_frame);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tempr2;
	}
	MR_np_call_localret_ent(map__search_3_0,
		ll_backend__frameopt__label_needs_frame_2_0_i2);
MR_def_label(ll_backend__frameopt__label_needs_frame_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__frameopt__label_needs_frame_2_0_i1);
	}
	MR_r1 = ((MR_Integer) MR_r2 == (MR_Integer) 0);
	MR_decr_sp_and_return(1);
MR_def_label(ll_backend__frameopt__label_needs_frame_2_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__frameopt_module46)
	MR_init_entry1(ll_backend__frameopt__no_disagreement_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__frameopt__no_disagreement_3_0);
	MR_init_label5(ll_backend__frameopt__no_disagreement_3_0,26,5,9,4,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'no_disagreement'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__frameopt__no_disagreement_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
MR_def_label(ll_backend__frameopt__no_disagreement_3_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(ll_backend__frameopt__no_disagreement_3_0_i2);
	}
	MR_sv(4) = MR_tfield(1, MR_r1, 1);
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(1, MR_r1, 0);
	MR_sv(3) = MR_tfield(0, MR_tempr1, 1);
	MR_r1 = MR_tfield(0, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(__Unify___ll_backend__llds__label_0_0,
		ll_backend__frameopt__no_disagreement_3_0_i5);
MR_def_label(ll_backend__frameopt__no_disagreement_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__frameopt__no_disagreement_3_0_i4);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(__Unify___ll_backend__llds__label_0_0,
		ll_backend__frameopt__no_disagreement_3_0_i9);
MR_def_label(ll_backend__frameopt__no_disagreement_3_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(ll_backend__frameopt__no_disagreement_3_0_i4);
	}
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(5);
MR_def_label(ll_backend__frameopt__no_disagreement_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_succip_word = MR_sv(5);
	MR_GOTO_LAB(ll_backend__frameopt__no_disagreement_3_0_i26);
MR_def_label(ll_backend__frameopt__no_disagreement_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__ll_backend__opt_debug__dump_label_2_0);
MR_decl_entry(fn__ll_backend__opt_debug__dump_fullinstrs_3_0);
MR_decl_entry(fn__ll_backend__opt_debug__dump_labels_2_0);

MR_BEGIN_MODULE(ll_backend__frameopt_module47)
	MR_init_entry1(ll_backend__frameopt__describe_block_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__frameopt__describe_block_6_0);
	MR_init_label10(ll_backend__frameopt__describe_block_6_0,2,3,5,7,9,10,11,12,14,16)
	MR_init_label10(ll_backend__frameopt__describe_block_6_0,17,18,13,19,21,22,23,24,20,26)
	MR_init_label10(ll_backend__frameopt__describe_block_6_0,27,28,29,25,31,32,33,34,30,37)
	MR_init_label10(ll_backend__frameopt__describe_block_6_0,36,41,42,39,45,46,44,48,50,52)
	MR_init_label10(ll_backend__frameopt__describe_block_6_0,57,55,51,60,62,63,64,65,66,67)
	MR_init_label1(ll_backend__frameopt__describe_block_6_0,68)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'describe_block'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__frameopt__describe_block_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(12);
	MR_sv(12) = (MR_Word) MR_succip;
	MR_sv(8) = MR_r2;
	MR_sv(10) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_sv(9) = MR_r5;
	MR_sv(1) = MR_r6;
	MR_sv(11) = MR_r1;
	MR_r2 = (MR_Integer) 1;
	MR_np_call_localret_ent(private_builtin__type_info_from_typeclass_info_3_0,
		ll_backend__frameopt__describe_block_6_0_i2);
MR_def_label(ll_backend__frameopt__describe_block_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(11);
	MR_r2 = (MR_Integer) 2;
	MR_np_call_localret_ent(private_builtin__type_info_from_typeclass_info_3_0,
		ll_backend__frameopt__describe_block_6_0_i3);
MR_def_label(ll_backend__frameopt__describe_block_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 3);
	MR_tfield(0, MR_r2, 0) = (MR_Word) MR_CTOR_ADDR(ll_backend__frameopt, frame_block_info, 2);
	MR_tfield(0, MR_r2, 1) = MR_sv(4);
	MR_tfield(0, MR_r2, 2) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, label);
	MR_r3 = MR_sv(8);
	MR_r4 = MR_sv(1);
	MR_np_call_localret_ent(map__lookup_3_0,
		ll_backend__frameopt__describe_block_6_0_i5);
MR_def_label(ll_backend__frameopt__describe_block_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(6,8);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(ll_backend__frameopt__IntroducedFrom__pred__describe_block__2214__1_2_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 4) = MR_tfield(0, MR_r1, 0);
	MR_sv(8) = MR_tfield(0, MR_r1, 1);
	MR_sv(4) = MR_tfield(0, MR_r1, 2);
	MR_sv(5) = MR_tfield(0, MR_r1, 3);
	MR_sv(7) = MR_tfield(0, MR_r1, 4);
	MR_sv(2) = MR_tfield(0, MR_r1, 5);
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Word) MR_string_const("ll_backend.frameopt", 19);
	MR_r3 = (MR_Word) MR_string_const("predicate \140ll_backend.frameopt.describe_block\'/6", 48);
	MR_r4 = (MR_Word) MR_string_const("label mismatch", 14);
	}
	MR_np_call_localret_ent(require__expect_4_0,
		ll_backend__frameopt__describe_block_6_0_i7);
MR_def_label(ll_backend__frameopt__describe_block_6_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r1, 0) = MR_sv(9);
	MR_sv(9) = MR_r1;
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(fn__ll_backend__opt_debug__dump_label_2_0,
		ll_backend__frameopt__describe_block_6_0_i9);
MR_def_label(ll_backend__frameopt__describe_block_6_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(8);
	MR_sv(8) = MR_r1;
	MR_r1 = MR_sv(9);
	MR_r2 = (MR_Integer) 1;
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__ll_backend__opt_debug__dump_fullinstrs_3_0,
		ll_backend__frameopt__describe_block_6_0_i10);
MR_def_label(ll_backend__frameopt__describe_block_6_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(8);
	MR_sv(8) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Word) MR_string_const("\n\n", 2);
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__frameopt__describe_block_6_0_i11);
MR_def_label(ll_backend__frameopt__describe_block_6_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("\nBLOCK ", 7);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__frameopt__describe_block_6_0_i12);
MR_def_label(ll_backend__frameopt__describe_block_6_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, label);
	MR_r2 = MR_r1;
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(1);
	}
	MR_np_call_localret_ent(map__search_3_0,
		ll_backend__frameopt__describe_block_6_0_i14);
MR_def_label(ll_backend__frameopt__describe_block_6_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__frameopt__describe_block_6_0_i13);
	}
	MR_r1 = MR_sv(9);
	MR_np_call_localret_ent(fn__ll_backend__opt_debug__dump_label_2_0,
		ll_backend__frameopt__describe_block_6_0_i16);
MR_def_label(ll_backend__frameopt__describe_block_6_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("\n", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__frameopt__describe_block_6_0_i17);
MR_def_label(ll_backend__frameopt__describe_block_6_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("previous label ", 15);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__frameopt__describe_block_6_0_i18);
MR_def_label(ll_backend__frameopt__describe_block_6_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(11);
	MR_GOTO_LAB(ll_backend__frameopt__describe_block_6_0_i19);
MR_def_label(ll_backend__frameopt__describe_block_6_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("no previous label\n", 18);
	MR_r1 = MR_sv(11);
MR_def_label(ll_backend__frameopt__describe_block_6_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(4),0,0)) {
		MR_GOTO_LAB(ll_backend__frameopt__describe_block_6_0_i21);
	}
	MR_sv(4) = MR_r2;
	MR_r2 = (MR_Word) MR_string_const("not fallen into\n", 16);
	MR_GOTO_LAB(ll_backend__frameopt__describe_block_6_0_i20);
MR_def_label(ll_backend__frameopt__describe_block_6_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = MR_r2;
	MR_sv(11) = MR_r1;
	MR_r1 = MR_sv(9);
	MR_r2 = MR_tfield(1, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(fn__ll_backend__opt_debug__dump_label_2_0,
		ll_backend__frameopt__describe_block_6_0_i22);
MR_def_label(ll_backend__frameopt__describe_block_6_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("\n", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__frameopt__describe_block_6_0_i23);
MR_def_label(ll_backend__frameopt__describe_block_6_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("fallen into from ", 17);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__frameopt__describe_block_6_0_i24);
MR_def_label(ll_backend__frameopt__describe_block_6_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(11);
MR_def_label(ll_backend__frameopt__describe_block_6_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(5),0,0)) {
		MR_GOTO_LAB(ll_backend__frameopt__describe_block_6_0_i26);
	}
	MR_sv(5) = MR_r2;
	MR_sv(6) = (MR_Word) MR_string_const("no side labels\n", 15);
	MR_GOTO_LAB(ll_backend__frameopt__describe_block_6_0_i25);
MR_def_label(ll_backend__frameopt__describe_block_6_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(5);
	MR_sv(5) = MR_r2;
	MR_sv(11) = MR_r1;
	MR_r1 = MR_sv(9);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__ll_backend__opt_debug__dump_labels_2_0,
		ll_backend__frameopt__describe_block_6_0_i27);
MR_def_label(ll_backend__frameopt__describe_block_6_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("\n", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__frameopt__describe_block_6_0_i28);
MR_def_label(ll_backend__frameopt__describe_block_6_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("side labels ", 12);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__frameopt__describe_block_6_0_i29);
MR_def_label(ll_backend__frameopt__describe_block_6_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(11);
MR_def_label(ll_backend__frameopt__describe_block_6_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(7),0,0)) {
		MR_GOTO_LAB(ll_backend__frameopt__describe_block_6_0_i31);
	}
	MR_r2 = (MR_Word) MR_string_const("does not fall through\n", 22);
	MR_GOTO_LAB(ll_backend__frameopt__describe_block_6_0_i30);
MR_def_label(ll_backend__frameopt__describe_block_6_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(11) = MR_r1;
	MR_r1 = MR_sv(9);
	MR_r2 = MR_tfield(1, MR_sv(7), 0);
	MR_np_call_localret_ent(fn__ll_backend__opt_debug__dump_label_2_0,
		ll_backend__frameopt__describe_block_6_0_i32);
MR_def_label(ll_backend__frameopt__describe_block_6_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("\n", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__frameopt__describe_block_6_0_i33);
MR_def_label(ll_backend__frameopt__describe_block_6_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("falls through to ", 17);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__frameopt__describe_block_6_0_i34);
MR_def_label(ll_backend__frameopt__describe_block_6_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(11);
MR_def_label(ll_backend__frameopt__describe_block_6_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),0)) {
		MR_GOTO_LAB(ll_backend__frameopt__describe_block_6_0_i36);
	}
	MR_sv(7) = MR_r2;
	MR_r2 = MR_tfield(0, MR_sv(2), 0);
	MR_np_call_localret_ent(fn__ll_backend__frameopt__describe_entry_1_0,
		ll_backend__frameopt__describe_block_6_0_i37);
MR_def_label(ll_backend__frameopt__describe_block_6_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("entry_block\n", 12);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__frameopt__describe_block_6_0_i60);
MR_def_label(ll_backend__frameopt__describe_block_6_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),2)) {
		MR_GOTO_LAB(ll_backend__frameopt__describe_block_6_0_i39);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(6,9);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(ll_backend__frameopt__IntroducedFrom__pred__describe_block__2289__1_2_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(7);
	MR_tfield(0, MR_tempr1, 4) = (MR_Word) MR_tbmkword(0, 0);
	MR_sv(7) = MR_r2;
	MR_sv(10) = MR_tfield(2, MR_sv(2), 0);
	MR_sv(11) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Word) MR_string_const("ll_backend.frameopt", 19);
	MR_r3 = (MR_Word) MR_string_const("predicate \140ll_backend.frameopt.describe_block\'/6", 48);
	MR_r4 = (MR_Word) MR_string_const("exit_block, MaybeFallThrough=yes(_)", 35);
	}
	MR_np_call_localret_ent(require__expect_4_0,
		ll_backend__frameopt__describe_block_6_0_i41);
MR_def_label(ll_backend__frameopt__describe_block_6_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(11);
	MR_r2 = MR_sv(9);
	MR_r3 = MR_sv(10);
	MR_np_call_localret_ent(fn__ll_backend__frameopt__describe_exit_2_0,
		ll_backend__frameopt__describe_block_6_0_i42);
MR_def_label(ll_backend__frameopt__describe_block_6_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("exit_block\n", 11);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__frameopt__describe_block_6_0_i60);
MR_def_label(ll_backend__frameopt__describe_block_6_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_r3 = MR_tfield(1, MR_tempr1, 1);
	if (MR_INT_NE(MR_r3,0)) {
		MR_GOTO_LAB(ll_backend__frameopt__describe_block_6_0_i45);
	}
	MR_sv(7) = MR_r2;
	MR_sv(9) = MR_tfield(1, MR_tempr1, 0);
	MR_r1 = (MR_Word) MR_string_const("ordinary_block; ", 16);
	MR_GOTO_LAB(ll_backend__frameopt__describe_block_6_0_i44);
	}
MR_def_label(ll_backend__frameopt__describe_block_6_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r3,1)) {
		MR_GOTO_LAB(ll_backend__frameopt__describe_block_6_0_i46);
	}
	MR_sv(7) = MR_r2;
	MR_sv(9) = MR_tfield(1, MR_sv(2), 0);
	MR_r1 = (MR_Word) MR_string_const("ordinary_block (post_entry_dummy); ", 35);
	MR_GOTO_LAB(ll_backend__frameopt__describe_block_6_0_i44);
MR_def_label(ll_backend__frameopt__describe_block_6_0,46)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r2;
	MR_sv(9) = MR_tfield(1, MR_sv(2), 0);
	MR_r1 = (MR_Word) MR_string_const("ordinary_block (pre_exit_dummy); ", 33);
MR_def_label(ll_backend__frameopt__describe_block_6_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(9),1)) {
		MR_GOTO_LAB(ll_backend__frameopt__describe_block_6_0_i48);
	}
	MR_r2 = (MR_Word) MR_string_const("does not use frame\n", 19);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__frameopt__describe_block_6_0_i50);
MR_def_label(ll_backend__frameopt__describe_block_6_0,48)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("uses frame\n", 11);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__frameopt__describe_block_6_0_i50);
MR_def_label(ll_backend__frameopt__describe_block_6_0,50)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(10);
	MR_r4 = MR_sv(1);
	MR_sv(10) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, label);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(ll_backend__frameopt, block_needs_frame);
	MR_np_call_localret_ent(map__search_3_0,
		ll_backend__frameopt__describe_block_6_0_i52);
MR_def_label(ll_backend__frameopt__describe_block_6_0,52)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__frameopt__describe_block_6_0_i51);
	}
	if (MR_INT_NE(MR_r2,1)) {
		MR_GOTO_LAB(ll_backend__frameopt__describe_block_6_0_i55);
	}
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 5);
	MR_tfield(0, MR_r1, 0) = (MR_Word) MR_COMMON(6,10);
	MR_tfield(0, MR_r1, 1) = (MR_Word) MR_ENTRY_AP(ll_backend__frameopt__IntroducedFrom__pred__describe_block__2274__1_2_0);
	MR_tfield(0, MR_r1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_r1, 3) = MR_sv(9);
	MR_tfield(0, MR_r1, 4) = (MR_Integer) 1;
	MR_r2 = (MR_Word) MR_string_const("ll_backend.frameopt", 19);
	MR_r3 = (MR_Word) MR_string_const("predicate \140ll_backend.frameopt.describe_block\'/6", 48);
	MR_r4 = (MR_Word) MR_string_const("NeedsFrame=block_doesnt_need_frame, UsesFrame=block_needs_frame", 63);
	MR_np_call_localret_ent(require__expect_4_0,
		ll_backend__frameopt__describe_block_6_0_i57);
MR_def_label(ll_backend__frameopt__describe_block_6_0,57)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(10);
	MR_r2 = (MR_Word) MR_string_const("does not need frame\n", 20);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__frameopt__describe_block_6_0_i60);
MR_def_label(ll_backend__frameopt__describe_block_6_0,55)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(10);
	MR_r2 = (MR_Word) MR_string_const("does need frame\n", 16);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__frameopt__describe_block_6_0_i60);
MR_def_label(ll_backend__frameopt__describe_block_6_0,51)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(10);
	MR_r2 = (MR_Word) MR_string_const("(unknown whether it does need frame)\n", 37);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__frameopt__describe_block_6_0_i60);
MR_def_label(ll_backend__frameopt__describe_block_6_0,60)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(8);
	MR_sv(8) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("CODE:\n", 6);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__frameopt__describe_block_6_0_i62);
MR_def_label(ll_backend__frameopt__describe_block_6_0,62)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__frameopt__describe_block_6_0_i63);
MR_def_label(ll_backend__frameopt__describe_block_6_0,63)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__frameopt__describe_block_6_0_i64);
MR_def_label(ll_backend__frameopt__describe_block_6_0,64)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__frameopt__describe_block_6_0_i65);
MR_def_label(ll_backend__frameopt__describe_block_6_0,65)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__frameopt__describe_block_6_0_i66);
MR_def_label(ll_backend__frameopt__describe_block_6_0,66)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__frameopt__describe_block_6_0_i67);
MR_def_label(ll_backend__frameopt__describe_block_6_0,67)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__frameopt__describe_block_6_0_i68);
MR_def_label(ll_backend__frameopt__describe_block_6_0,68)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r2, 0) = MR_r1;
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r1, 0) = MR_r2;
	MR_tfield(0, MR_r1, 1) = (MR_Word) MR_string_const("", 0);
	MR_decr_sp_and_return(12);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__frameopt_module48)
	MR_init_entry1(__Unify___ll_backend__frameopt__block_needs_frame_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___ll_backend__frameopt__block_needs_frame_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___ll_backend__frameopt__block_needs_frame_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_r1 == MR_r2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(private_builtin__builtin_compare_int_3_0);

MR_BEGIN_MODULE(ll_backend__frameopt_module49)
	MR_init_entry1(__Compare___ll_backend__frameopt__block_needs_frame_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___ll_backend__frameopt__block_needs_frame_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___ll_backend__frameopt__block_needs_frame_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__frameopt_module50)
	MR_init_entry1(__Unify___ll_backend__frameopt__block_type_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___ll_backend__frameopt__block_type_2_0);
	MR_init_label4(__Unify___ll_backend__frameopt__block_type_2_0,5,21,9,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___ll_backend__frameopt__block_type_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r3 == MR_r4)) {
		MR_GOTO_LAB(__Unify___ll_backend__frameopt__block_type_2_0_i21);
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
	if (MR_PTAG_TESTR(MR_tempr1,0)) {
		MR_GOTO_LAB(__Unify___ll_backend__frameopt__block_type_2_0_i5);
	}
	if (MR_PTAG_TESTR(MR_tempr2,0)) {
		MR_GOTO_LAB(__Unify___ll_backend__frameopt__block_type_2_0_i1);
	}
	MR_r2 = MR_tfield(0, MR_tempr1, 0);
	MR_r3 = MR_tfield(0, MR_tempr2, 0);
	MR_decr_sp(5);
	MR_np_tailcall_ent(builtin__unify_2_0);
	}
MR_def_label(__Unify___ll_backend__frameopt__block_type_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),2)) {
		MR_GOTO_LAB(__Unify___ll_backend__frameopt__block_type_2_0_i9);
	}
	if (MR_PTAG_TESTR(MR_sv(2),2)) {
		MR_GOTO_LAB(__Unify___ll_backend__frameopt__block_type_2_0_i1);
	}
	MR_r1 = MR_sv(4);
	MR_r2 = MR_tfield(2, MR_sv(1), 0);
	MR_r3 = MR_tfield(2, MR_sv(2), 0);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(builtin__unify_2_0);
MR_def_label(__Unify___ll_backend__frameopt__block_type_2_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___ll_backend__frameopt__block_type_2_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Unify___ll_backend__frameopt__block_type_2_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr3 = MR_sv(1);
	MR_tempr1 = MR_tfield(1, MR_tempr3, 0);
	MR_tempr4 = MR_sv(2);
	MR_tempr2 = MR_tfield(1, MR_tempr4, 0);
	if ((MR_tempr1 != MR_tempr2)) {
		MR_GOTO_LAB(__Unify___ll_backend__frameopt__block_type_2_0_i1);
	}
	MR_tempr1 = MR_tfield(1, MR_tempr3, 1);
	MR_tempr2 = MR_tfield(1, MR_tempr4, 1);
	MR_r1 = (MR_tempr1 == MR_tempr2);
	MR_decr_sp_and_return(5);
	}
MR_def_label(__Unify___ll_backend__frameopt__block_type_2_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(builtin__compare_3_0);

MR_BEGIN_MODULE(ll_backend__frameopt_module51)
	MR_init_entry1(__Compare___ll_backend__frameopt__block_type_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___ll_backend__frameopt__block_type_2_0);
	MR_init_label10(__Compare___ll_backend__frameopt__block_type_2_0,3,2,7,5,12,10,32,16,33,17)
	MR_init_label2(__Compare___ll_backend__frameopt__block_type_2_0,19,69)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___ll_backend__frameopt__block_type_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r3 == MR_r4)) {
		MR_GOTO_LAB(__Compare___ll_backend__frameopt__block_type_2_0_i3);
	}
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_sv(2) = MR_r1;
	MR_sv(3) = MR_r2;
	MR_GOTO_LAB(__Compare___ll_backend__frameopt__block_type_2_0_i2);
MR_def_label(__Compare___ll_backend__frameopt__block_type_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___ll_backend__frameopt__block_type_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),0)) {
		MR_GOTO_LAB(__Compare___ll_backend__frameopt__block_type_2_0_i5);
	}
	if (MR_PTAG_TESTR(MR_sv(4),0)) {
		MR_GOTO_LAB(__Compare___ll_backend__frameopt__block_type_2_0_i7);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tfield(0, MR_sv(1), 0);
	MR_r3 = MR_tfield(0, MR_sv(4), 0);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(builtin__compare_3_0);
MR_def_label(__Compare___ll_backend__frameopt__block_type_2_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(4),2)) {
		MR_GOTO_LAB(__Compare___ll_backend__frameopt__block_type_2_0_i33);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(5);
MR_def_label(__Compare___ll_backend__frameopt__block_type_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),2)) {
		MR_GOTO_LAB(__Compare___ll_backend__frameopt__block_type_2_0_i10);
	}
	if (MR_PTAG_TESTR(MR_sv(4),0)) {
		MR_GOTO_LAB(__Compare___ll_backend__frameopt__block_type_2_0_i12);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(5);
MR_def_label(__Compare___ll_backend__frameopt__block_type_2_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(4),2)) {
		MR_GOTO_LAB(__Compare___ll_backend__frameopt__block_type_2_0_i32);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tfield(2, MR_sv(1), 0);
	MR_r3 = MR_tfield(2, MR_sv(4), 0);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(builtin__compare_3_0);
MR_def_label(__Compare___ll_backend__frameopt__block_type_2_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(4),0)) {
		MR_GOTO_LAB(__Compare___ll_backend__frameopt__block_type_2_0_i16);
	}
MR_def_label(__Compare___ll_backend__frameopt__block_type_2_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(5);
MR_def_label(__Compare___ll_backend__frameopt__block_type_2_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(4),2)) {
		MR_GOTO_LAB(__Compare___ll_backend__frameopt__block_type_2_0_i17);
	}
MR_def_label(__Compare___ll_backend__frameopt__block_type_2_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(5);
MR_def_label(__Compare___ll_backend__frameopt__block_type_2_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(1);
	MR_tempr1 = MR_tfield(1, MR_tempr5, 1);
	MR_tempr6 = MR_sv(4);
	MR_tempr2 = MR_tfield(1, MR_tempr6, 1);
	MR_tempr3 = MR_tempr5;
	MR_sv(1) = MR_tempr2;
	MR_tempr4 = MR_tempr6;
	MR_sv(4) = MR_tempr1;
	MR_r1 = MR_tfield(1, MR_tempr3, 0);
	MR_r2 = MR_tfield(1, MR_tempr4, 0);
	}
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___ll_backend__frameopt__block_type_2_0_i19);
MR_def_label(__Compare___ll_backend__frameopt__block_type_2_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__frameopt__block_type_2_0_i69);
	}
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(1);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
MR_def_label(__Compare___ll_backend__frameopt__block_type_2_0,69)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__frameopt_module52)
	MR_init_entry1(__Unify___ll_backend__frameopt__can_transform_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___ll_backend__frameopt__can_transform_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___ll_backend__frameopt__can_transform_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_r1 == MR_r2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__frameopt_module53)
	MR_init_entry1(__Compare___ll_backend__frameopt__can_transform_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___ll_backend__frameopt__can_transform_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___ll_backend__frameopt__can_transform_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__frameopt_module54)
	MR_init_entry1(__Unify___ll_backend__frameopt__det_entry_info_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___ll_backend__frameopt__det_entry_info_0_0);
	MR_init_label2(__Unify___ll_backend__frameopt__det_entry_info_0_0,4,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___ll_backend__frameopt__det_entry_info_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___ll_backend__frameopt__det_entry_info_0_0_i4);
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
		MR_GOTO_LAB(__Unify___ll_backend__frameopt__det_entry_info_0_0_i1);
	}
	MR_r1 = MR_tfield(0, MR_tempr1, 1);
	MR_r2 = MR_tfield(0, MR_tempr2, 1);
	if ((strcmp((char *) (MR_Word *) MR_r1, (char *) (MR_Word *) MR_r2) != 0)) {
		MR_GOTO_LAB(__Unify___ll_backend__frameopt__det_entry_info_0_0_i1);
	}
	MR_r1 = MR_tfield(0, MR_tempr1, 2);
	MR_r2 = MR_tfield(0, MR_tempr2, 2);
	MR_r1 = (MR_r1 == MR_r2);
	MR_decr_sp(2);
	MR_proceed();
	}
MR_def_label(__Unify___ll_backend__frameopt__det_entry_info_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp(2);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___ll_backend__frameopt__det_entry_info_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp(2);
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(private_builtin__builtin_compare_string_3_0);

MR_BEGIN_MODULE(ll_backend__frameopt_module55)
	MR_init_entry1(__Compare___ll_backend__frameopt__det_entry_info_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___ll_backend__frameopt__det_entry_info_0_0);
	MR_init_label5(__Compare___ll_backend__frameopt__det_entry_info_0_0,3,2,5,9,29)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___ll_backend__frameopt__det_entry_info_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___ll_backend__frameopt__det_entry_info_0_0_i3);
	}
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___ll_backend__frameopt__det_entry_info_0_0_i2);
MR_def_label(__Compare___ll_backend__frameopt__det_entry_info_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___ll_backend__frameopt__det_entry_info_0_0,2)
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
		__Compare___ll_backend__frameopt__det_entry_info_0_0_i5);
MR_def_label(__Compare___ll_backend__frameopt__det_entry_info_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__frameopt__det_entry_info_0_0_i29);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(private_builtin__builtin_compare_string_3_0,
		__Compare___ll_backend__frameopt__det_entry_info_0_0_i9);
MR_def_label(__Compare___ll_backend__frameopt__det_entry_info_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__frameopt__det_entry_info_0_0_i29);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(4);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
MR_def_label(__Compare___ll_backend__frameopt__det_entry_info_0_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___ll_backend__llds__instruction_0_0);

MR_BEGIN_MODULE(ll_backend__frameopt_module56)
	MR_init_entry1(__Unify___ll_backend__frameopt__det_exit_info_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___ll_backend__frameopt__det_exit_info_0_0);
	MR_init_label4(__Unify___ll_backend__frameopt__det_exit_info_0_0,4,6,10,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___ll_backend__frameopt__det_exit_info_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___ll_backend__frameopt__det_exit_info_0_0_i10);
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
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,1,0);
	MR_r2 = MR_tfield(0, MR_tempr1, 0);
	MR_r3 = MR_tfield(0, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(builtin__unify_2_0,
		__Unify___ll_backend__frameopt__det_exit_info_0_0_i4);
MR_def_label(__Unify___ll_backend__frameopt__det_exit_info_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___ll_backend__frameopt__det_exit_info_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,1,0);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(3);
	MR_np_call_localret_ent(builtin__unify_2_0,
		__Unify___ll_backend__frameopt__det_exit_info_0_0_i6);
MR_def_label(__Unify___ll_backend__frameopt__det_exit_info_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___ll_backend__frameopt__det_exit_info_0_0_i1);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(4);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(__Unify___ll_backend__llds__instruction_0_0);
MR_def_label(__Unify___ll_backend__frameopt__det_exit_info_0_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___ll_backend__frameopt__det_exit_info_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Compare___ll_backend__llds__instruction_0_0);

MR_BEGIN_MODULE(ll_backend__frameopt_module57)
	MR_init_entry1(__Compare___ll_backend__frameopt__det_exit_info_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___ll_backend__frameopt__det_exit_info_0_0);
	MR_init_label5(__Compare___ll_backend__frameopt__det_exit_info_0_0,3,2,5,9,38)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___ll_backend__frameopt__det_exit_info_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___ll_backend__frameopt__det_exit_info_0_0_i3);
	}
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___ll_backend__frameopt__det_exit_info_0_0_i2);
MR_def_label(__Compare___ll_backend__frameopt__det_exit_info_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___ll_backend__frameopt__det_exit_info_0_0,2)
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
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,1,0);
	MR_r2 = MR_tfield(0, MR_tempr3, 0);
	MR_r3 = MR_tfield(0, MR_tempr4, 0);
	}
	MR_np_call_localret_ent(builtin__compare_3_0,
		__Compare___ll_backend__frameopt__det_exit_info_0_0_i5);
MR_def_label(__Compare___ll_backend__frameopt__det_exit_info_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__frameopt__det_exit_info_0_0_i38);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,1,0);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(3);
	MR_np_call_localret_ent(builtin__compare_3_0,
		__Compare___ll_backend__frameopt__det_exit_info_0_0_i9);
MR_def_label(__Compare___ll_backend__frameopt__det_exit_info_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__frameopt__det_exit_info_0_0_i38);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(4);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(__Compare___ll_backend__llds__instruction_0_0);
MR_def_label(__Compare___ll_backend__frameopt__det_exit_info_0_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__frameopt_module58)
	MR_init_entry1(__Unify___ll_backend__frameopt__det_frame_block_map_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___ll_backend__frameopt__det_frame_block_map_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___ll_backend__frameopt__det_frame_block_map_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,6);
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


MR_BEGIN_MODULE(ll_backend__frameopt_module59)
	MR_init_entry1(__Compare___ll_backend__frameopt__det_frame_block_map_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___ll_backend__frameopt__det_frame_block_map_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___ll_backend__frameopt__det_frame_block_map_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,6);
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


MR_BEGIN_MODULE(ll_backend__frameopt_module60)
	MR_init_entry1(__Unify___ll_backend__frameopt__exit_par_map_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___ll_backend__frameopt__exit_par_map_0_0);
	MR_init_label1(__Unify___ll_backend__frameopt__exit_par_map_0_0,6)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___ll_backend__frameopt__exit_par_map_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___ll_backend__frameopt__exit_par_map_0_0_i6);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,7);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_decr_sp(3);
	MR_np_tailcall_ent(builtin__unify_2_0);
MR_def_label(__Unify___ll_backend__frameopt__exit_par_map_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__frameopt_module61)
	MR_init_entry1(__Compare___ll_backend__frameopt__exit_par_map_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___ll_backend__frameopt__exit_par_map_0_0);
	MR_init_label2(__Compare___ll_backend__frameopt__exit_par_map_0_0,3,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___ll_backend__frameopt__exit_par_map_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___ll_backend__frameopt__exit_par_map_0_0_i3);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___ll_backend__frameopt__exit_par_map_0_0_i2);
MR_def_label(__Compare___ll_backend__frameopt__exit_par_map_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___ll_backend__frameopt__exit_par_map_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,7);
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


MR_BEGIN_MODULE(ll_backend__frameopt_module62)
	MR_init_entry1(__Unify___ll_backend__frameopt__frame_block_info_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___ll_backend__frameopt__frame_block_info_2_0);
	MR_init_label7(__Unify___ll_backend__frameopt__frame_block_info_2_0,4,6,8,10,12,16,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___ll_backend__frameopt__frame_block_info_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r3 == MR_r4)) {
		MR_GOTO_LAB(__Unify___ll_backend__frameopt__frame_block_info_2_0_i16);
	}
	MR_incr_sp(13);
	MR_sv(13) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r4;
	MR_sv(11) = MR_r1;
	MR_sv(12) = MR_r2;
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
	MR_np_call_localret_ent(__Unify___ll_backend__llds__label_0_0,
		__Unify___ll_backend__frameopt__frame_block_info_2_0_i4);
MR_def_label(__Unify___ll_backend__frameopt__frame_block_info_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___ll_backend__frameopt__frame_block_info_2_0_i1);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,1,0);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(6);
	MR_np_call_localret_ent(builtin__unify_2_0,
		__Unify___ll_backend__frameopt__frame_block_info_2_0_i6);
MR_def_label(__Unify___ll_backend__frameopt__frame_block_info_2_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___ll_backend__frameopt__frame_block_info_2_0_i1);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,1,2);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(7);
	MR_np_call_localret_ent(builtin__unify_2_0,
		__Unify___ll_backend__frameopt__frame_block_info_2_0_i8);
MR_def_label(__Unify___ll_backend__frameopt__frame_block_info_2_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___ll_backend__frameopt__frame_block_info_2_0_i1);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,1,1);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(8);
	MR_np_call_localret_ent(builtin__unify_2_0,
		__Unify___ll_backend__frameopt__frame_block_info_2_0_i10);
MR_def_label(__Unify___ll_backend__frameopt__frame_block_info_2_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___ll_backend__frameopt__frame_block_info_2_0_i1);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,1,2);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(9);
	MR_np_call_localret_ent(builtin__unify_2_0,
		__Unify___ll_backend__frameopt__frame_block_info_2_0_i12);
MR_def_label(__Unify___ll_backend__frameopt__frame_block_info_2_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___ll_backend__frameopt__frame_block_info_2_0_i1);
	}
	MR_r1 = MR_sv(11);
	MR_r2 = MR_sv(12);
	MR_r3 = MR_sv(5);
	MR_r4 = MR_sv(10);
	MR_succip_word = MR_sv(13);
	MR_decr_sp(13);
	MR_np_tailcall_ent(__Unify___ll_backend__frameopt__block_type_2_0);
MR_def_label(__Unify___ll_backend__frameopt__frame_block_info_2_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___ll_backend__frameopt__frame_block_info_2_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(13);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Compare___ll_backend__llds__label_0_0);

MR_BEGIN_MODULE(ll_backend__frameopt_module63)
	MR_init_entry1(__Compare___ll_backend__frameopt__frame_block_info_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___ll_backend__frameopt__frame_block_info_2_0);
	MR_init_label8(__Compare___ll_backend__frameopt__frame_block_info_2_0,3,2,5,9,13,17,21,71)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___ll_backend__frameopt__frame_block_info_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r3 == MR_r4)) {
		MR_GOTO_LAB(__Compare___ll_backend__frameopt__frame_block_info_2_0_i3);
	}
	MR_incr_sp(13);
	MR_sv(13) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r4;
	MR_sv(11) = MR_r1;
	MR_sv(12) = MR_r2;
	MR_GOTO_LAB(__Compare___ll_backend__frameopt__frame_block_info_2_0_i2);
MR_def_label(__Compare___ll_backend__frameopt__frame_block_info_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___ll_backend__frameopt__frame_block_info_2_0,2)
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
	MR_np_call_localret_ent(__Compare___ll_backend__llds__label_0_0,
		__Compare___ll_backend__frameopt__frame_block_info_2_0_i5);
MR_def_label(__Compare___ll_backend__frameopt__frame_block_info_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__frameopt__frame_block_info_2_0_i71);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,1,0);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(6);
	MR_np_call_localret_ent(builtin__compare_3_0,
		__Compare___ll_backend__frameopt__frame_block_info_2_0_i9);
MR_def_label(__Compare___ll_backend__frameopt__frame_block_info_2_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__frameopt__frame_block_info_2_0_i71);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,1,2);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(7);
	MR_np_call_localret_ent(builtin__compare_3_0,
		__Compare___ll_backend__frameopt__frame_block_info_2_0_i13);
MR_def_label(__Compare___ll_backend__frameopt__frame_block_info_2_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__frameopt__frame_block_info_2_0_i71);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,1,1);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(8);
	MR_np_call_localret_ent(builtin__compare_3_0,
		__Compare___ll_backend__frameopt__frame_block_info_2_0_i17);
MR_def_label(__Compare___ll_backend__frameopt__frame_block_info_2_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__frameopt__frame_block_info_2_0_i71);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,1,2);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(9);
	MR_np_call_localret_ent(builtin__compare_3_0,
		__Compare___ll_backend__frameopt__frame_block_info_2_0_i21);
MR_def_label(__Compare___ll_backend__frameopt__frame_block_info_2_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__frameopt__frame_block_info_2_0_i71);
	}
	MR_r1 = MR_sv(11);
	MR_r2 = MR_sv(12);
	MR_r3 = MR_sv(5);
	MR_r4 = MR_sv(10);
	MR_succip_word = MR_sv(13);
	MR_decr_sp(13);
	MR_np_tailcall_ent(__Compare___ll_backend__frameopt__block_type_2_0);
MR_def_label(__Compare___ll_backend__frameopt__frame_block_info_2_0,71)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(13);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___tree234__tree234_2_0);

MR_BEGIN_MODULE(ll_backend__frameopt_module64)
	MR_init_entry1(__Unify___ll_backend__frameopt__frame_block_map_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___ll_backend__frameopt__frame_block_map_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___ll_backend__frameopt__frame_block_map_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_CTOR_ADDR(ll_backend__frameopt, frame_block_info, 2);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_tfield(0, MR_tempr1, 2) = MR_r2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, label);
	MR_r2 = MR_tempr1;
	MR_np_tailcall_ent(__Unify___tree234__tree234_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Compare___tree234__tree234_2_0);

MR_BEGIN_MODULE(ll_backend__frameopt_module65)
	MR_init_entry1(__Compare___ll_backend__frameopt__frame_block_map_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___ll_backend__frameopt__frame_block_map_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___ll_backend__frameopt__frame_block_map_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_CTOR_ADDR(ll_backend__frameopt, frame_block_info, 2);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_tfield(0, MR_tempr1, 2) = MR_r2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, label);
	MR_r2 = MR_tempr1;
	MR_np_tailcall_ent(__Compare___tree234__tree234_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__frameopt_module66)
	MR_init_entry1(__Unify___ll_backend__frameopt__maybe_dummy_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___ll_backend__frameopt__maybe_dummy_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___ll_backend__frameopt__maybe_dummy_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_r1 == MR_r2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__frameopt_module67)
	MR_init_entry1(__Compare___ll_backend__frameopt__maybe_dummy_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___ll_backend__frameopt__maybe_dummy_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___ll_backend__frameopt__maybe_dummy_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___ll_backend__llds__code_addr_0_0);

MR_BEGIN_MODULE(ll_backend__frameopt_module68)
	MR_init_entry1(__Unify___ll_backend__frameopt__nondet_entry_info_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___ll_backend__frameopt__nondet_entry_info_0_0);
	MR_init_label2(__Unify___ll_backend__frameopt__nondet_entry_info_0_0,6,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___ll_backend__frameopt__nondet_entry_info_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___ll_backend__frameopt__nondet_entry_info_0_0_i6);
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
	if ((strcmp((char *) (MR_Word *) MR_tempr3, (char *) (MR_Word *) MR_tempr4) != 0)) {
		MR_GOTO_LAB(__Unify___ll_backend__frameopt__nondet_entry_info_0_0_i1);
	}
	MR_tempr3 = MR_tfield(0, MR_tempr1, 1);
	MR_tempr4 = MR_tfield(0, MR_tempr2, 1);
	if ((MR_tempr3 != MR_tempr4)) {
		MR_GOTO_LAB(__Unify___ll_backend__frameopt__nondet_entry_info_0_0_i1);
	}
	MR_r1 = MR_tfield(0, MR_tempr1, 2);
	MR_r2 = MR_tfield(0, MR_tempr2, 2);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Unify___ll_backend__llds__code_addr_0_0);
	}
MR_def_label(__Unify___ll_backend__frameopt__nondet_entry_info_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___ll_backend__frameopt__nondet_entry_info_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Compare___ll_backend__llds__code_addr_0_0);

MR_BEGIN_MODULE(ll_backend__frameopt_module69)
	MR_init_entry1(__Compare___ll_backend__frameopt__nondet_entry_info_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___ll_backend__frameopt__nondet_entry_info_0_0);
	MR_init_label5(__Compare___ll_backend__frameopt__nondet_entry_info_0_0,3,2,5,9,29)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___ll_backend__frameopt__nondet_entry_info_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___ll_backend__frameopt__nondet_entry_info_0_0_i3);
	}
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___ll_backend__frameopt__nondet_entry_info_0_0_i2);
MR_def_label(__Compare___ll_backend__frameopt__nondet_entry_info_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___ll_backend__frameopt__nondet_entry_info_0_0,2)
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
	MR_np_call_localret_ent(private_builtin__builtin_compare_string_3_0,
		__Compare___ll_backend__frameopt__nondet_entry_info_0_0_i5);
MR_def_label(__Compare___ll_backend__frameopt__nondet_entry_info_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__frameopt__nondet_entry_info_0_0_i29);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___ll_backend__frameopt__nondet_entry_info_0_0_i9);
MR_def_label(__Compare___ll_backend__frameopt__nondet_entry_info_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__frameopt__nondet_entry_info_0_0_i29);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(4);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(__Compare___ll_backend__llds__code_addr_0_0);
MR_def_label(__Compare___ll_backend__frameopt__nondet_entry_info_0_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__frameopt_module70)
	MR_init_entry1(__Unify___ll_backend__frameopt__nondet_exit_info_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___ll_backend__frameopt__nondet_exit_info_0_0);
	MR_init_label8(__Unify___ll_backend__frameopt__nondet_exit_info_0_0,7,27,5,12,14,16,18,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___ll_backend__frameopt__nondet_exit_info_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___ll_backend__frameopt__nondet_exit_info_0_0_i27);
	}
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_tempr1;
	MR_tempr2 = MR_r2;
	MR_sv(2) = MR_tempr2;
	if (MR_PTAG_TESTR(MR_tempr1,0)) {
		MR_GOTO_LAB(__Unify___ll_backend__frameopt__nondet_exit_info_0_0_i5);
	}
	if (MR_PTAG_TESTR(MR_tempr2,0)) {
		MR_GOTO_LAB(__Unify___ll_backend__frameopt__nondet_exit_info_0_0_i1);
	}
	MR_tempr3 = MR_tempr1;
	MR_sv(1) = MR_tfield(0, MR_tempr3, 1);
	MR_tempr4 = MR_tempr2;
	MR_sv(2) = MR_tfield(0, MR_tempr4, 1);
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,1,0);
	MR_r2 = MR_tfield(0, MR_tempr3, 0);
	MR_r3 = MR_tfield(0, MR_tempr4, 0);
	}
	MR_np_call_localret_ent(builtin__unify_2_0,
		__Unify___ll_backend__frameopt__nondet_exit_info_0_0_i7);
MR_def_label(__Unify___ll_backend__frameopt__nondet_exit_info_0_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___ll_backend__frameopt__nondet_exit_info_0_0_i1);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_np_tailcall_ent(__Unify___ll_backend__llds__instruction_0_0);
MR_def_label(__Unify___ll_backend__frameopt__nondet_exit_info_0_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___ll_backend__frameopt__nondet_exit_info_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Unify___ll_backend__frameopt__nondet_exit_info_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_tfield(1, MR_tempr1, 1);
	MR_tempr2 = MR_sv(2);
	MR_sv(2) = MR_tfield(1, MR_tempr1, 2);
	MR_sv(3) = MR_tfield(1, MR_tempr1, 3);
	MR_sv(4) = MR_tfield(1, MR_tempr1, 4);
	MR_sv(5) = MR_tfield(1, MR_tempr2, 1);
	MR_sv(6) = MR_tfield(1, MR_tempr2, 2);
	MR_sv(7) = MR_tfield(1, MR_tempr2, 3);
	MR_sv(8) = MR_tfield(1, MR_tempr2, 4);
	MR_r1 = MR_tfield(1, MR_tempr1, 0);
	MR_r2 = MR_tfield(1, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(__Unify___ll_backend__llds__instruction_0_0,
		__Unify___ll_backend__frameopt__nondet_exit_info_0_0_i12);
MR_def_label(__Unify___ll_backend__frameopt__nondet_exit_info_0_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___ll_backend__frameopt__nondet_exit_info_0_0_i1);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(__Unify___ll_backend__llds__instruction_0_0,
		__Unify___ll_backend__frameopt__nondet_exit_info_0_0_i14);
MR_def_label(__Unify___ll_backend__frameopt__nondet_exit_info_0_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___ll_backend__frameopt__nondet_exit_info_0_0_i1);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(6);
	MR_np_call_localret_ent(__Unify___ll_backend__llds__instruction_0_0,
		__Unify___ll_backend__frameopt__nondet_exit_info_0_0_i16);
MR_def_label(__Unify___ll_backend__frameopt__nondet_exit_info_0_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___ll_backend__frameopt__nondet_exit_info_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,1,0);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(7);
	MR_np_call_localret_ent(builtin__unify_2_0,
		__Unify___ll_backend__frameopt__nondet_exit_info_0_0_i18);
MR_def_label(__Unify___ll_backend__frameopt__nondet_exit_info_0_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___ll_backend__frameopt__nondet_exit_info_0_0_i1);
	}
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(8);
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_np_tailcall_ent(__Unify___ll_backend__llds__instruction_0_0);
MR_def_label(__Unify___ll_backend__frameopt__nondet_exit_info_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(9);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__frameopt_module71)
	MR_init_entry1(__Compare___ll_backend__frameopt__nondet_exit_info_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___ll_backend__frameopt__nondet_exit_info_0_0);
	MR_init_label10(__Compare___ll_backend__frameopt__nondet_exit_info_0_0,3,2,9,7,5,15,17,21,25,29)
	MR_init_label1(__Compare___ll_backend__frameopt__nondet_exit_info_0_0,99)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___ll_backend__frameopt__nondet_exit_info_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___ll_backend__frameopt__nondet_exit_info_0_0_i3);
	}
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(4) = MR_r2;
	MR_GOTO_LAB(__Compare___ll_backend__frameopt__nondet_exit_info_0_0_i2);
MR_def_label(__Compare___ll_backend__frameopt__nondet_exit_info_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___ll_backend__frameopt__nondet_exit_info_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),0)) {
		MR_GOTO_LAB(__Compare___ll_backend__frameopt__nondet_exit_info_0_0_i5);
	}
	if (MR_PTAG_TESTR(MR_sv(4),0)) {
		MR_GOTO_LAB(__Compare___ll_backend__frameopt__nondet_exit_info_0_0_i7);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(1);
	MR_tempr1 = MR_tfield(0, MR_tempr5, 1);
	MR_tempr6 = MR_sv(4);
	MR_tempr2 = MR_tfield(0, MR_tempr6, 1);
	MR_tempr3 = MR_tempr5;
	MR_sv(1) = MR_tempr2;
	MR_tempr4 = MR_tempr6;
	MR_sv(4) = MR_tempr1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,1,0);
	MR_r2 = MR_tfield(0, MR_tempr3, 0);
	MR_r3 = MR_tfield(0, MR_tempr4, 0);
	}
	MR_np_call_localret_ent(builtin__compare_3_0,
		__Compare___ll_backend__frameopt__nondet_exit_info_0_0_i9);
MR_def_label(__Compare___ll_backend__frameopt__nondet_exit_info_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__frameopt__nondet_exit_info_0_0_i99);
	}
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(1);
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_np_tailcall_ent(__Compare___ll_backend__llds__instruction_0_0);
MR_def_label(__Compare___ll_backend__frameopt__nondet_exit_info_0_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(9);
MR_def_label(__Compare___ll_backend__frameopt__nondet_exit_info_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(4),0)) {
		MR_GOTO_LAB(__Compare___ll_backend__frameopt__nondet_exit_info_0_0_i15);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(9);
MR_def_label(__Compare___ll_backend__frameopt__nondet_exit_info_0_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(1);
	MR_sv(8) = MR_tfield(1, MR_tempr5, 1);
	MR_sv(7) = MR_tfield(1, MR_tempr5, 2);
	MR_sv(6) = MR_tfield(1, MR_tempr5, 3);
	MR_sv(5) = MR_tfield(1, MR_tempr5, 4);
	MR_tempr6 = MR_sv(4);
	MR_sv(3) = MR_tfield(1, MR_tempr6, 4);
	MR_sv(2) = MR_tfield(1, MR_tempr6, 3);
	MR_tempr1 = MR_tfield(1, MR_tempr6, 2);
	MR_tempr2 = MR_tfield(1, MR_tempr6, 1);
	MR_tempr3 = MR_tempr5;
	MR_sv(1) = MR_tempr2;
	MR_tempr4 = MR_tempr6;
	MR_sv(4) = MR_tempr1;
	MR_r1 = MR_tfield(1, MR_tempr3, 0);
	MR_r2 = MR_tfield(1, MR_tempr4, 0);
	}
	MR_np_call_localret_ent(__Compare___ll_backend__llds__instruction_0_0,
		__Compare___ll_backend__frameopt__nondet_exit_info_0_0_i17);
MR_def_label(__Compare___ll_backend__frameopt__nondet_exit_info_0_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__frameopt__nondet_exit_info_0_0_i99);
	}
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(__Compare___ll_backend__llds__instruction_0_0,
		__Compare___ll_backend__frameopt__nondet_exit_info_0_0_i21);
MR_def_label(__Compare___ll_backend__frameopt__nondet_exit_info_0_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__frameopt__nondet_exit_info_0_0_i99);
	}
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(__Compare___ll_backend__llds__instruction_0_0,
		__Compare___ll_backend__frameopt__nondet_exit_info_0_0_i25);
MR_def_label(__Compare___ll_backend__frameopt__nondet_exit_info_0_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__frameopt__nondet_exit_info_0_0_i99);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,1,0);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(2);
	MR_np_call_localret_ent(builtin__compare_3_0,
		__Compare___ll_backend__frameopt__nondet_exit_info_0_0_i29);
MR_def_label(__Compare___ll_backend__frameopt__nondet_exit_info_0_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__frameopt__nondet_exit_info_0_0_i99);
	}
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(3);
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_np_tailcall_ent(__Compare___ll_backend__llds__instruction_0_0);
MR_def_label(__Compare___ll_backend__frameopt__nondet_exit_info_0_0,99)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(9);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__frameopt_module72)
	MR_init_entry1(__Unify___ll_backend__frameopt__ord_needs_frame_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___ll_backend__frameopt__ord_needs_frame_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___ll_backend__frameopt__ord_needs_frame_0_0)
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


MR_BEGIN_MODULE(ll_backend__frameopt_module73)
	MR_init_entry1(__Compare___ll_backend__frameopt__ord_needs_frame_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___ll_backend__frameopt__ord_needs_frame_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___ll_backend__frameopt__ord_needs_frame_0_0)
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


MR_BEGIN_MODULE(ll_backend__frameopt_module74)
	MR_init_entry1(__Unify___ll_backend__frameopt__pre_exit_dummy_label_map_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___ll_backend__frameopt__pre_exit_dummy_label_map_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___ll_backend__frameopt__pre_exit_dummy_label_map_0_0)
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


MR_BEGIN_MODULE(ll_backend__frameopt_module75)
	MR_init_entry1(__Compare___ll_backend__frameopt__pre_exit_dummy_label_map_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___ll_backend__frameopt__pre_exit_dummy_label_map_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___ll_backend__frameopt__pre_exit_dummy_label_map_0_0)
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


MR_BEGIN_MODULE(ll_backend__frameopt_module76)
	MR_init_entry1(__Unify___ll_backend__frameopt__pred_map_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___ll_backend__frameopt__pred_map_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___ll_backend__frameopt__pred_map_0_0)
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


MR_BEGIN_MODULE(ll_backend__frameopt_module77)
	MR_init_entry1(__Compare___ll_backend__frameopt__pred_map_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___ll_backend__frameopt__pred_map_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___ll_backend__frameopt__pred_map_0_0)
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


MR_BEGIN_MODULE(ll_backend__frameopt_module78)
	MR_init_entry1(__Unify___ll_backend__frameopt__prop_queue_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___ll_backend__frameopt__prop_queue_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___ll_backend__frameopt__prop_queue_0_0)
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


MR_BEGIN_MODULE(ll_backend__frameopt_module79)
	MR_init_entry1(__Compare___ll_backend__frameopt__prop_queue_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___ll_backend__frameopt__prop_queue_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___ll_backend__frameopt__prop_queue_0_0)
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


MR_BEGIN_MODULE(ll_backend__frameopt_module80)
	MR_init_entry1(__Unify___ll_backend__frameopt__rev_map_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___ll_backend__frameopt__rev_map_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___ll_backend__frameopt__rev_map_0_0)
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


MR_BEGIN_MODULE(ll_backend__frameopt_module81)
	MR_init_entry1(__Compare___ll_backend__frameopt__rev_map_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___ll_backend__frameopt__rev_map_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___ll_backend__frameopt__rev_map_0_0)
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


MR_BEGIN_MODULE(ll_backend__frameopt_module82)
	MR_init_entry1(__Unify___ll_backend__frameopt__setup_par_map_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___ll_backend__frameopt__setup_par_map_0_0);
	MR_init_label1(__Unify___ll_backend__frameopt__setup_par_map_0_0,6)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___ll_backend__frameopt__setup_par_map_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___ll_backend__frameopt__setup_par_map_0_0_i6);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,7);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_decr_sp(3);
	MR_np_tailcall_ent(builtin__unify_2_0);
MR_def_label(__Unify___ll_backend__frameopt__setup_par_map_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__frameopt_module83)
	MR_init_entry1(__Compare___ll_backend__frameopt__setup_par_map_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___ll_backend__frameopt__setup_par_map_0_0);
	MR_init_label2(__Compare___ll_backend__frameopt__setup_par_map_0_0,3,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___ll_backend__frameopt__setup_par_map_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___ll_backend__frameopt__setup_par_map_0_0_i3);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___ll_backend__frameopt__setup_par_map_0_0_i2);
MR_def_label(__Compare___ll_backend__frameopt__setup_par_map_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___ll_backend__frameopt__setup_par_map_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,7);
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


MR_BEGIN_MODULE(ll_backend__frameopt_module84)
	MR_init_entry1(ll_backend__frameopt__ClassMethod_for_ll_backend__frameopt__block_entry_exit____ll_backend__frameopt__nondet_entry_info__arity0__ll_backend__frameopt__nondet_exit_info__arity0______ll_backend__frameopt__detect_entry_4_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__frameopt__ClassMethod_for_ll_backend__frameopt__block_entry_exit____ll_backend__frameopt__nondet_entry_info__arity0__ll_backend__frameopt__nondet_exit_info__arity0______ll_backend__frameopt__detect_entry_4_4_0);
	MR_init_label1(ll_backend__frameopt__ClassMethod_for_ll_backend__frameopt__block_entry_exit____ll_backend__frameopt__nondet_entry_info__arity0__ll_backend__frameopt__nondet_exit_info__arity0______ll_backend__frameopt__detect_entry_4_4_0,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'ClassMethod_for_ll_backend__frameopt__block_entry_exit____ll_backend__frameopt__nondet_entry_info__arity0__ll_backend__frameopt__nondet_exit_info__arity0______ll_backend__frameopt__detect_entry_4'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__frameopt__ClassMethod_for_ll_backend__frameopt__block_entry_exit____ll_backend__frameopt__nondet_entry_info__arity0__ll_backend__frameopt__nondet_exit_info__arity0______ll_backend__frameopt__detect_entry_4_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(ll_backend__frameopt__ClassMethod_for_ll_backend__frameopt__block_entry_exit____ll_backend__frameopt__nondet_entry_info__arity0__ll_backend__frameopt__nondet_exit_info__arity0______ll_backend__frameopt__detect_entry_4_4_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr1 = MR_tfield(0, MR_tfield(1, MR_r1, 0), 0);
	if (MR_RTAGS_TESTR(MR_tempr1,3,4)) {
		MR_GOTO_LAB(ll_backend__frameopt__ClassMethod_for_ll_backend__frameopt__block_entry_exit____ll_backend__frameopt__nondet_entry_info__arity0__ll_backend__frameopt__nondet_exit_info__arity0______ll_backend__frameopt__detect_entry_4_4_0_i1);
	}
	MR_tempr2 = MR_tfield(3, MR_tempr1, 2);
	if (MR_LTAGS_TEST(MR_tempr2,0,0)) {
		MR_GOTO_LAB(ll_backend__frameopt__ClassMethod_for_ll_backend__frameopt__block_entry_exit____ll_backend__frameopt__nondet_entry_info__arity0__ll_backend__frameopt__nondet_exit_info__arity0______ll_backend__frameopt__detect_entry_4_4_0_i1);
	}
	MR_tempr3 = MR_tfield(1, MR_tempr2, 0);
	if (MR_LTAGS_TESTR(MR_tempr3,0,2)) {
		MR_GOTO_LAB(ll_backend__frameopt__ClassMethod_for_ll_backend__frameopt__block_entry_exit____ll_backend__frameopt__nondet_entry_info__arity0__ll_backend__frameopt__nondet_exit_info__arity0______ll_backend__frameopt__detect_entry_4_4_0_i1);
	}
	MR_tempr2 = MR_tfield(3, MR_tempr1, 1);
	if (MR_PTAG_TESTR(MR_tempr2,1)) {
		MR_GOTO_LAB(ll_backend__frameopt__ClassMethod_for_ll_backend__frameopt__block_entry_exit____ll_backend__frameopt__nondet_entry_info__arity0__ll_backend__frameopt__nondet_exit_info__arity0______ll_backend__frameopt__detect_entry_4_4_0_i1);
	}
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_tfield(1, MR_r1, 0);
	MR_tfield(1, MR_r2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr4, 0, (MR_Integer) 3);
	MR_r4 = MR_tempr4;
	MR_tfield(0, MR_tempr4, 0) = MR_tfield(1, MR_tempr2, 0);
	MR_tfield(0, MR_tempr4, 1) = MR_tfield(1, MR_tempr2, 1);
	MR_tfield(0, MR_tempr4, 2) = MR_tempr3;
	MR_r3 = MR_tfield(1, MR_r1, 1);
	MR_r1 = MR_TRUE;
	MR_proceed();
	}
MR_def_label(ll_backend__frameopt__ClassMethod_for_ll_backend__frameopt__block_entry_exit____ll_backend__frameopt__nondet_entry_info__arity0__ll_backend__frameopt__nondet_exit_info__arity0______ll_backend__frameopt__detect_entry_4_4_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__frameopt_module85)
	MR_init_entry1(ll_backend__frameopt__ClassMethod_for_ll_backend__frameopt__block_entry_exit____ll_backend__frameopt__nondet_entry_info__arity0__ll_backend__frameopt__nondet_exit_info__arity0______ll_backend__frameopt__detect_exit_6_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__frameopt__ClassMethod_for_ll_backend__frameopt__block_entry_exit____ll_backend__frameopt__nondet_entry_info__arity0__ll_backend__frameopt__nondet_exit_info__arity0______ll_backend__frameopt__detect_exit_6_6_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'ClassMethod_for_ll_backend__frameopt__block_entry_exit____ll_backend__frameopt__nondet_entry_info__arity0__ll_backend__frameopt__nondet_exit_info__arity0______ll_backend__frameopt__detect_exit_6'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__frameopt__ClassMethod_for_ll_backend__frameopt__block_entry_exit____ll_backend__frameopt__nondet_entry_info__arity0__ll_backend__frameopt__nondet_exit_info__arity0______ll_backend__frameopt__detect_exit_6_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(f_108_108_95_98_97_99_107_101_110_100_95_95_102_114_97_109_101_111_112_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_108_108_95_98_97_99_107_101_110_100_95_95_102_114_97_109_101_111_112_116_95_95_98_108_111_99_107_95_101_110_116_114_121_95_101_120_105_116_95_95_95_95_108_108_95_98_97_99_107_101_110_100_95_95_102_114_97_109_101_111_112_116_95_95_110_111_110_100_101_116_95_101_110_116_114_121_95_105_110_102_111_95_95_97_114_105_116_121_48_95_95_108_108_95_98_97_99_107_101_110_100_95_95_102_114_97_109_101_111_112_116_95_95_110_111_110_100_101_116_95_101_120_105_116_95_105_110_102_111_95_95_97_114_105_116_121_48_95_95_95_95_95_95_108_108_95_98_97_99_107_101_110_100_95_95_102_114_97_109_101_111_112_116_95_95_100_101_116_101_99_116_95_101_120_105_116_95_54_95_95_91_50_93_95_48_6_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__frameopt_module86)
	MR_init_entry1(fn__ll_backend__frameopt__ClassMethod_for_ll_backend__frameopt__block_entry_exit____ll_backend__frameopt__nondet_entry_info__arity0__ll_backend__frameopt__nondet_exit_info__arity0______ll_backend__frameopt__late_setup_code_1_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__ll_backend__frameopt__ClassMethod_for_ll_backend__frameopt__block_entry_exit____ll_backend__frameopt__nondet_entry_info__arity0__ll_backend__frameopt__nondet_exit_info__arity0______ll_backend__frameopt__late_setup_code_1_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'ClassMethod_for_ll_backend__frameopt__block_entry_exit____ll_backend__frameopt__nondet_entry_info__arity0__ll_backend__frameopt__nondet_exit_info__arity0______ll_backend__frameopt__late_setup_code_1'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__ll_backend__frameopt__ClassMethod_for_ll_backend__frameopt__block_entry_exit____ll_backend__frameopt__nondet_entry_info__arity0__ll_backend__frameopt__nondet_exit_info__arity0______ll_backend__frameopt__late_setup_code_1_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_tfield(0, MR_r1, 0);
	MR_tfield(1, MR_r2, 1) = MR_tfield(0, MR_r1, 1);
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_tfield(0, MR_r1, 2);
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 4;
	MR_tfield(3, MR_tempr2, 1) = MR_r2;
	MR_tfield(3, MR_tempr2, 2) = MR_tempr1;
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 0) = MR_tempr2;
	MR_tfield(0, MR_r2, 1) = (MR_Word) MR_string_const("late setup", 10);
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = MR_r2;
	MR_tfield(1, MR_r1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__frameopt_module87)
	MR_init_entry1(fn__ll_backend__frameopt__ClassMethod_for_ll_backend__frameopt__block_entry_exit____ll_backend__frameopt__nondet_entry_info__arity0__ll_backend__frameopt__nondet_exit_info__arity0______ll_backend__frameopt__non_teardown_exit_code_1_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__ll_backend__frameopt__ClassMethod_for_ll_backend__frameopt__block_entry_exit____ll_backend__frameopt__nondet_entry_info__arity0__ll_backend__frameopt__nondet_exit_info__arity0______ll_backend__frameopt__non_teardown_exit_code_1_1_0);
	MR_init_label1(fn__ll_backend__frameopt__ClassMethod_for_ll_backend__frameopt__block_entry_exit____ll_backend__frameopt__nondet_entry_info__arity0__ll_backend__frameopt__nondet_exit_info__arity0______ll_backend__frameopt__non_teardown_exit_code_1_1_0,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'ClassMethod_for_ll_backend__frameopt__block_entry_exit____ll_backend__frameopt__nondet_entry_info__arity0__ll_backend__frameopt__nondet_exit_info__arity0______ll_backend__frameopt__non_teardown_exit_code_1'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__ll_backend__frameopt__ClassMethod_for_ll_backend__frameopt__block_entry_exit____ll_backend__frameopt__nondet_entry_info__arity0__ll_backend__frameopt__nondet_exit_info__arity0______ll_backend__frameopt__non_teardown_exit_code_1_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,0)) {
		MR_GOTO_LAB(fn__ll_backend__frameopt__ClassMethod_for_ll_backend__frameopt__block_entry_exit____ll_backend__frameopt__nondet_entry_info__arity0__ll_backend__frameopt__nondet_exit_info__arity0______ll_backend__frameopt__non_teardown_exit_code_1_1_0_i3);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	MR_r2 = MR_tfield(0, MR_tempr1, 0);
	MR_r3 = (MR_Word) MR_TAG_COMMON(1,1,6);
	MR_np_tailcall_ent(fn__f_108_105_115_116_95_95_43_43_2_0);
	}
MR_def_label(fn__ll_backend__frameopt__ClassMethod_for_ll_backend__frameopt__block_entry_exit____ll_backend__frameopt__nondet_entry_info__arity0__ll_backend__frameopt__nondet_exit_info__arity0______ll_backend__frameopt__non_teardown_exit_code_1_1_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_tfield(1, MR_r1, 4);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tempr2 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	MR_r2 = MR_tfield(1, MR_tempr2, 3);
	MR_np_tailcall_ent(fn__f_108_105_115_116_95_95_43_43_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__string__int_to_string_1_0);
MR_decl_entry(fn__ll_backend__opt_debug__dump_code_addr_2_0);

MR_BEGIN_MODULE(ll_backend__frameopt_module88)
	MR_init_entry1(fn__ll_backend__frameopt__ClassMethod_for_ll_backend__frameopt__block_entry_exit____ll_backend__frameopt__nondet_entry_info__arity0__ll_backend__frameopt__nondet_exit_info__arity0______ll_backend__frameopt__describe_entry_1_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__ll_backend__frameopt__ClassMethod_for_ll_backend__frameopt__block_entry_exit____ll_backend__frameopt__nondet_entry_info__arity0__ll_backend__frameopt__nondet_exit_info__arity0______ll_backend__frameopt__describe_entry_1_1_0);
	MR_init_label7(fn__ll_backend__frameopt__ClassMethod_for_ll_backend__frameopt__block_entry_exit____ll_backend__frameopt__nondet_entry_info__arity0__ll_backend__frameopt__nondet_exit_info__arity0______ll_backend__frameopt__describe_entry_1_1_0,2,3,4,5,6,7,8)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'ClassMethod_for_ll_backend__frameopt__block_entry_exit____ll_backend__frameopt__nondet_entry_info__arity0__ll_backend__frameopt__nondet_exit_info__arity0______ll_backend__frameopt__describe_entry_1'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__ll_backend__frameopt__ClassMethod_for_ll_backend__frameopt__block_entry_exit____ll_backend__frameopt__nondet_entry_info__arity0__ll_backend__frameopt__nondet_exit_info__arity0______ll_backend__frameopt__describe_entry_1_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_tfield(0, MR_r1, 0);
	MR_sv(2) = MR_tfield(0, MR_r1, 2);
	MR_r1 = MR_tfield(0, MR_r1, 1);
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		fn__ll_backend__frameopt__ClassMethod_for_ll_backend__frameopt__block_entry_exit____ll_backend__frameopt__nondet_entry_info__arity0__ll_backend__frameopt__nondet_exit_info__arity0______ll_backend__frameopt__describe_entry_1_1_0_i2);
MR_def_label(fn__ll_backend__frameopt__ClassMethod_for_ll_backend__frameopt__block_entry_exit____ll_backend__frameopt__nondet_entry_info__arity0__ll_backend__frameopt__nondet_exit_info__arity0______ll_backend__frameopt__describe_entry_1_1_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__ll_backend__opt_debug__dump_code_addr_2_0,
		fn__ll_backend__frameopt__ClassMethod_for_ll_backend__frameopt__block_entry_exit____ll_backend__frameopt__nondet_entry_info__arity0__ll_backend__frameopt__nondet_exit_info__arity0______ll_backend__frameopt__describe_entry_1_1_0_i3);
MR_def_label(fn__ll_backend__frameopt__ClassMethod_for_ll_backend__frameopt__block_entry_exit____ll_backend__frameopt__nondet_entry_info__arity0__ll_backend__frameopt__nondet_exit_info__arity0______ll_backend__frameopt__describe_entry_1_1_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("\n", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__ll_backend__frameopt__ClassMethod_for_ll_backend__frameopt__block_entry_exit____ll_backend__frameopt__nondet_entry_info__arity0__ll_backend__frameopt__nondet_exit_info__arity0______ll_backend__frameopt__describe_entry_1_1_0_i4);
MR_def_label(fn__ll_backend__frameopt__ClassMethod_for_ll_backend__frameopt__block_entry_exit____ll_backend__frameopt__nondet_entry_info__arity0__ll_backend__frameopt__nondet_exit_info__arity0______ll_backend__frameopt__describe_entry_1_1_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const(", redoip: ", 10);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__ll_backend__frameopt__ClassMethod_for_ll_backend__frameopt__block_entry_exit____ll_backend__frameopt__nondet_entry_info__arity0__ll_backend__frameopt__nondet_exit_info__arity0______ll_backend__frameopt__describe_entry_1_1_0_i5);
MR_def_label(fn__ll_backend__frameopt__ClassMethod_for_ll_backend__frameopt__block_entry_exit____ll_backend__frameopt__nondet_entry_info__arity0__ll_backend__frameopt__nondet_exit_info__arity0______ll_backend__frameopt__describe_entry_1_1_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__ll_backend__frameopt__ClassMethod_for_ll_backend__frameopt__block_entry_exit____ll_backend__frameopt__nondet_entry_info__arity0__ll_backend__frameopt__nondet_exit_info__arity0______ll_backend__frameopt__describe_entry_1_1_0_i6);
MR_def_label(fn__ll_backend__frameopt__ClassMethod_for_ll_backend__frameopt__block_entry_exit____ll_backend__frameopt__nondet_entry_info__arity0__ll_backend__frameopt__nondet_exit_info__arity0______ll_backend__frameopt__describe_entry_1_1_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const(", size: ", 8);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__ll_backend__frameopt__ClassMethod_for_ll_backend__frameopt__block_entry_exit____ll_backend__frameopt__nondet_entry_info__arity0__ll_backend__frameopt__nondet_exit_info__arity0______ll_backend__frameopt__describe_entry_1_1_0_i7);
MR_def_label(fn__ll_backend__frameopt__ClassMethod_for_ll_backend__frameopt__block_entry_exit____ll_backend__frameopt__nondet_entry_info__arity0__ll_backend__frameopt__nondet_exit_info__arity0______ll_backend__frameopt__describe_entry_1_1_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__ll_backend__frameopt__ClassMethod_for_ll_backend__frameopt__block_entry_exit____ll_backend__frameopt__nondet_entry_info__arity0__ll_backend__frameopt__nondet_exit_info__arity0______ll_backend__frameopt__describe_entry_1_1_0_i8);
MR_def_label(fn__ll_backend__frameopt__ClassMethod_for_ll_backend__frameopt__block_entry_exit____ll_backend__frameopt__nondet_entry_info__arity0__ll_backend__frameopt__nondet_exit_info__arity0______ll_backend__frameopt__describe_entry_1_1_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("msg: ", 5);
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__ll_backend__opt_debug__dump_fullinstr_3_0);

MR_BEGIN_MODULE(ll_backend__frameopt_module89)
	MR_init_entry1(fn__ll_backend__frameopt__ClassMethod_for_ll_backend__frameopt__block_entry_exit____ll_backend__frameopt__nondet_entry_info__arity0__ll_backend__frameopt__nondet_exit_info__arity0______ll_backend__frameopt__describe_exit_2_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__ll_backend__frameopt__ClassMethod_for_ll_backend__frameopt__block_entry_exit____ll_backend__frameopt__nondet_entry_info__arity0__ll_backend__frameopt__nondet_exit_info__arity0______ll_backend__frameopt__describe_exit_2_2_0);
	MR_init_label10(fn__ll_backend__frameopt__ClassMethod_for_ll_backend__frameopt__block_entry_exit____ll_backend__frameopt__nondet_entry_info__arity0__ll_backend__frameopt__nondet_exit_info__arity0______ll_backend__frameopt__describe_exit_2_2_0,4,5,6,7,3,9,10,11,12,13)
	MR_init_label8(fn__ll_backend__frameopt__ClassMethod_for_ll_backend__frameopt__block_entry_exit____ll_backend__frameopt__nondet_entry_info__arity0__ll_backend__frameopt__nondet_exit_info__arity0______ll_backend__frameopt__describe_exit_2_2_0,14,15,16,17,18,19,20,21)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'ClassMethod_for_ll_backend__frameopt__block_entry_exit____ll_backend__frameopt__nondet_entry_info__arity0__ll_backend__frameopt__nondet_exit_info__arity0______ll_backend__frameopt__describe_exit_2'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__ll_backend__frameopt__ClassMethod_for_ll_backend__frameopt__block_entry_exit____ll_backend__frameopt__nondet_entry_info__arity0__ll_backend__frameopt__nondet_exit_info__arity0______ll_backend__frameopt__describe_exit_2_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	if (MR_PTAG_TESTR(MR_r2,0)) {
		MR_GOTO_LAB(fn__ll_backend__frameopt__ClassMethod_for_ll_backend__frameopt__block_entry_exit____ll_backend__frameopt__nondet_entry_info__arity0__ll_backend__frameopt__nondet_exit_info__arity0______ll_backend__frameopt__describe_exit_2_2_0_i3);
	}
	MR_sv(5) = MR_r1;
	MR_sv(2) = MR_tfield(0, MR_r2, 1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = (MR_Integer) 1;
	MR_r3 = MR_tfield(0, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(fn__ll_backend__opt_debug__dump_fullinstrs_3_0,
		fn__ll_backend__frameopt__ClassMethod_for_ll_backend__frameopt__block_entry_exit____ll_backend__frameopt__nondet_entry_info__arity0__ll_backend__frameopt__nondet_exit_info__arity0______ll_backend__frameopt__describe_exit_2_2_0_i4);
MR_def_label(fn__ll_backend__frameopt__ClassMethod_for_ll_backend__frameopt__block_entry_exit____ll_backend__frameopt__nondet_entry_info__arity0__ll_backend__frameopt__nondet_exit_info__arity0______ll_backend__frameopt__describe_exit_2_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(5);
	MR_sv(5) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Integer) 1;
	MR_r3 = MR_sv(2);
	}
	MR_np_call_localret_ent(fn__ll_backend__opt_debug__dump_fullinstr_3_0,
		fn__ll_backend__frameopt__ClassMethod_for_ll_backend__frameopt__block_entry_exit____ll_backend__frameopt__nondet_entry_info__arity0__ll_backend__frameopt__nondet_exit_info__arity0______ll_backend__frameopt__describe_exit_2_2_0_i5);
MR_def_label(fn__ll_backend__frameopt__ClassMethod_for_ll_backend__frameopt__block_entry_exit____ll_backend__frameopt__nondet_entry_info__arity0__ll_backend__frameopt__nondet_exit_info__arity0______ll_backend__frameopt__describe_exit_2_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("goto:     ", 10);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__ll_backend__frameopt__ClassMethod_for_ll_backend__frameopt__block_entry_exit____ll_backend__frameopt__nondet_entry_info__arity0__ll_backend__frameopt__nondet_exit_info__arity0______ll_backend__frameopt__describe_exit_2_2_0_i6);
MR_def_label(fn__ll_backend__frameopt__ClassMethod_for_ll_backend__frameopt__block_entry_exit____ll_backend__frameopt__nondet_entry_info__arity0__ll_backend__frameopt__nondet_exit_info__arity0______ll_backend__frameopt__describe_exit_2_2_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__ll_backend__frameopt__ClassMethod_for_ll_backend__frameopt__block_entry_exit____ll_backend__frameopt__nondet_entry_info__arity0__ll_backend__frameopt__nondet_exit_info__arity0______ll_backend__frameopt__describe_exit_2_2_0_i7);
MR_def_label(fn__ll_backend__frameopt__ClassMethod_for_ll_backend__frameopt__block_entry_exit____ll_backend__frameopt__nondet_entry_info__arity0__ll_backend__frameopt__nondet_exit_info__arity0______ll_backend__frameopt__describe_exit_2_2_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("livevals: ", 10);
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0);
	}
MR_def_label(fn__ll_backend__frameopt__ClassMethod_for_ll_backend__frameopt__block_entry_exit____ll_backend__frameopt__nondet_entry_info__arity0__ll_backend__frameopt__nondet_exit_info__arity0______ll_backend__frameopt__describe_exit_2_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_sv(2) = MR_tfield(1, MR_r2, 1);
	MR_sv(3) = MR_tfield(1, MR_r2, 2);
	MR_sv(4) = MR_tfield(1, MR_r2, 3);
	MR_sv(1) = MR_tfield(1, MR_r2, 4);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = (MR_Integer) 1;
	MR_r3 = MR_tfield(1, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(fn__ll_backend__opt_debug__dump_fullinstr_3_0,
		fn__ll_backend__frameopt__ClassMethod_for_ll_backend__frameopt__block_entry_exit____ll_backend__frameopt__nondet_entry_info__arity0__ll_backend__frameopt__nondet_exit_info__arity0______ll_backend__frameopt__describe_exit_2_2_0_i9);
MR_def_label(fn__ll_backend__frameopt__ClassMethod_for_ll_backend__frameopt__block_entry_exit____ll_backend__frameopt__nondet_entry_info__arity0__ll_backend__frameopt__nondet_exit_info__arity0______ll_backend__frameopt__describe_exit_2_2_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = (MR_Integer) 1;
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__ll_backend__opt_debug__dump_fullinstr_3_0,
		fn__ll_backend__frameopt__ClassMethod_for_ll_backend__frameopt__block_entry_exit____ll_backend__frameopt__nondet_entry_info__arity0__ll_backend__frameopt__nondet_exit_info__arity0______ll_backend__frameopt__describe_exit_2_2_0_i10);
MR_def_label(fn__ll_backend__frameopt__ClassMethod_for_ll_backend__frameopt__block_entry_exit____ll_backend__frameopt__nondet_entry_info__arity0__ll_backend__frameopt__nondet_exit_info__arity0______ll_backend__frameopt__describe_exit_2_2_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = (MR_Integer) 1;
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__ll_backend__opt_debug__dump_fullinstr_3_0,
		fn__ll_backend__frameopt__ClassMethod_for_ll_backend__frameopt__block_entry_exit____ll_backend__frameopt__nondet_entry_info__arity0__ll_backend__frameopt__nondet_exit_info__arity0______ll_backend__frameopt__describe_exit_2_2_0_i11);
MR_def_label(fn__ll_backend__frameopt__ClassMethod_for_ll_backend__frameopt__block_entry_exit____ll_backend__frameopt__nondet_entry_info__arity0__ll_backend__frameopt__nondet_exit_info__arity0______ll_backend__frameopt__describe_exit_2_2_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = (MR_Integer) 1;
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__ll_backend__opt_debug__dump_fullinstrs_3_0,
		fn__ll_backend__frameopt__ClassMethod_for_ll_backend__frameopt__block_entry_exit____ll_backend__frameopt__nondet_entry_info__arity0__ll_backend__frameopt__nondet_exit_info__arity0______ll_backend__frameopt__describe_exit_2_2_0_i12);
MR_def_label(fn__ll_backend__frameopt__ClassMethod_for_ll_backend__frameopt__block_entry_exit____ll_backend__frameopt__nondet_entry_info__arity0__ll_backend__frameopt__nondet_exit_info__arity0______ll_backend__frameopt__describe_exit_2_2_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(5);
	MR_sv(5) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Integer) 1;
	MR_r3 = MR_sv(1);
	}
	MR_np_call_localret_ent(fn__ll_backend__opt_debug__dump_fullinstr_3_0,
		fn__ll_backend__frameopt__ClassMethod_for_ll_backend__frameopt__block_entry_exit____ll_backend__frameopt__nondet_entry_info__arity0__ll_backend__frameopt__nondet_exit_info__arity0______ll_backend__frameopt__describe_exit_2_2_0_i13);
MR_def_label(fn__ll_backend__frameopt__ClassMethod_for_ll_backend__frameopt__block_entry_exit____ll_backend__frameopt__nondet_entry_info__arity0__ll_backend__frameopt__nondet_exit_info__arity0______ll_backend__frameopt__describe_exit_2_2_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("goto:     ", 10);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__ll_backend__frameopt__ClassMethod_for_ll_backend__frameopt__block_entry_exit____ll_backend__frameopt__nondet_entry_info__arity0__ll_backend__frameopt__nondet_exit_info__arity0______ll_backend__frameopt__describe_exit_2_2_0_i14);
MR_def_label(fn__ll_backend__frameopt__ClassMethod_for_ll_backend__frameopt__block_entry_exit____ll_backend__frameopt__nondet_entry_info__arity0__ll_backend__frameopt__nondet_exit_info__arity0______ll_backend__frameopt__describe_exit_2_2_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__ll_backend__frameopt__ClassMethod_for_ll_backend__frameopt__block_entry_exit____ll_backend__frameopt__nondet_entry_info__arity0__ll_backend__frameopt__nondet_exit_info__arity0______ll_backend__frameopt__describe_exit_2_2_0_i15);
MR_def_label(fn__ll_backend__frameopt__ClassMethod_for_ll_backend__frameopt__block_entry_exit____ll_backend__frameopt__nondet_entry_info__arity0__ll_backend__frameopt__nondet_exit_info__arity0______ll_backend__frameopt__describe_exit_2_2_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("livevals: ", 10);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__ll_backend__frameopt__ClassMethod_for_ll_backend__frameopt__block_entry_exit____ll_backend__frameopt__nondet_entry_info__arity0__ll_backend__frameopt__nondet_exit_info__arity0______ll_backend__frameopt__describe_exit_2_2_0_i16);
MR_def_label(fn__ll_backend__frameopt__ClassMethod_for_ll_backend__frameopt__block_entry_exit____ll_backend__frameopt__nondet_entry_info__arity0__ll_backend__frameopt__nondet_exit_info__arity0______ll_backend__frameopt__describe_exit_2_2_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__ll_backend__frameopt__ClassMethod_for_ll_backend__frameopt__block_entry_exit____ll_backend__frameopt__nondet_entry_info__arity0__ll_backend__frameopt__nondet_exit_info__arity0______ll_backend__frameopt__describe_exit_2_2_0_i17);
MR_def_label(fn__ll_backend__frameopt__ClassMethod_for_ll_backend__frameopt__block_entry_exit____ll_backend__frameopt__nondet_entry_info__arity0__ll_backend__frameopt__nondet_exit_info__arity0______ll_backend__frameopt__describe_exit_2_2_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("curfr: ", 7);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__ll_backend__frameopt__ClassMethod_for_ll_backend__frameopt__block_entry_exit____ll_backend__frameopt__nondet_entry_info__arity0__ll_backend__frameopt__nondet_exit_info__arity0______ll_backend__frameopt__describe_exit_2_2_0_i18);
MR_def_label(fn__ll_backend__frameopt__ClassMethod_for_ll_backend__frameopt__block_entry_exit____ll_backend__frameopt__nondet_entry_info__arity0__ll_backend__frameopt__nondet_exit_info__arity0______ll_backend__frameopt__describe_exit_2_2_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__ll_backend__frameopt__ClassMethod_for_ll_backend__frameopt__block_entry_exit____ll_backend__frameopt__nondet_entry_info__arity0__ll_backend__frameopt__nondet_exit_info__arity0______ll_backend__frameopt__describe_exit_2_2_0_i19);
MR_def_label(fn__ll_backend__frameopt__ClassMethod_for_ll_backend__frameopt__block_entry_exit____ll_backend__frameopt__nondet_entry_info__arity0__ll_backend__frameopt__nondet_exit_info__arity0______ll_backend__frameopt__describe_exit_2_2_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("maxfr: ", 7);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__ll_backend__frameopt__ClassMethod_for_ll_backend__frameopt__block_entry_exit____ll_backend__frameopt__nondet_entry_info__arity0__ll_backend__frameopt__nondet_exit_info__arity0______ll_backend__frameopt__describe_exit_2_2_0_i20);
MR_def_label(fn__ll_backend__frameopt__ClassMethod_for_ll_backend__frameopt__block_entry_exit____ll_backend__frameopt__nondet_entry_info__arity0__ll_backend__frameopt__nondet_exit_info__arity0______ll_backend__frameopt__describe_exit_2_2_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__ll_backend__frameopt__ClassMethod_for_ll_backend__frameopt__block_entry_exit____ll_backend__frameopt__nondet_entry_info__arity0__ll_backend__frameopt__nondet_exit_info__arity0______ll_backend__frameopt__describe_exit_2_2_0_i21);
MR_def_label(fn__ll_backend__frameopt__ClassMethod_for_ll_backend__frameopt__block_entry_exit____ll_backend__frameopt__nondet_entry_info__arity0__ll_backend__frameopt__nondet_exit_info__arity0______ll_backend__frameopt__describe_exit_2_2_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("succip: ", 8);
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__frameopt_module90)
	MR_init_entry1(ll_backend__frameopt__ClassMethod_for_ll_backend__frameopt__block_entry_exit____ll_backend__frameopt__det_entry_info__arity0__ll_backend__frameopt__det_exit_info__arity0______ll_backend__frameopt__detect_entry_4_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__frameopt__ClassMethod_for_ll_backend__frameopt__block_entry_exit____ll_backend__frameopt__det_entry_info__arity0__ll_backend__frameopt__det_exit_info__arity0______ll_backend__frameopt__detect_entry_4_4_0);
	MR_init_label4(ll_backend__frameopt__ClassMethod_for_ll_backend__frameopt__block_entry_exit____ll_backend__frameopt__det_entry_info__arity0__ll_backend__frameopt__det_exit_info__arity0______ll_backend__frameopt__detect_entry_4_4_0,2,5,7,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'ClassMethod_for_ll_backend__frameopt__block_entry_exit____ll_backend__frameopt__det_entry_info__arity0__ll_backend__frameopt__det_exit_info__arity0______ll_backend__frameopt__detect_entry_4'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__frameopt__ClassMethod_for_ll_backend__frameopt__block_entry_exit____ll_backend__frameopt__det_entry_info__arity0__ll_backend__frameopt__det_exit_info__arity0______ll_backend__frameopt__detect_entry_4_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(ll_backend__opt_util__gather_comments_3_0,
		ll_backend__frameopt__ClassMethod_for_ll_backend__frameopt__block_entry_exit____ll_backend__frameopt__det_entry_info__arity0__ll_backend__frameopt__det_exit_info__arity0______ll_backend__frameopt__detect_entry_4_4_0_i2);
MR_def_label(ll_backend__frameopt__ClassMethod_for_ll_backend__frameopt__block_entry_exit____ll_backend__frameopt__det_entry_info__arity0__ll_backend__frameopt__det_exit_info__arity0______ll_backend__frameopt__detect_entry_4_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r2,0,0)) {
		MR_GOTO_LAB(ll_backend__frameopt__ClassMethod_for_ll_backend__frameopt__block_entry_exit____ll_backend__frameopt__det_entry_info__arity0__ll_backend__frameopt__det_exit_info__arity0______ll_backend__frameopt__detect_entry_4_4_0_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(0, MR_tfield(1, MR_r2, 0), 0);
	if (MR_RTAGS_TESTR(MR_tempr1,3,24)) {
		MR_GOTO_LAB(ll_backend__frameopt__ClassMethod_for_ll_backend__frameopt__block_entry_exit____ll_backend__frameopt__det_entry_info__arity0__ll_backend__frameopt__det_exit_info__arity0______ll_backend__frameopt__detect_entry_4_4_0_i1);
	}
	MR_sv(1) = MR_tfield(1, MR_r2, 0);
	MR_sv(2) = MR_tfield(3, MR_tempr1, 1);
	MR_sv(3) = MR_tfield(3, MR_tempr1, 2);
	MR_sv(4) = MR_tfield(3, MR_tempr1, 3);
	MR_tempr1 = MR_r1;
	MR_r1 = MR_tfield(1, MR_r2, 1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(ll_backend__frameopt__detstack_setup_6_0,
		ll_backend__frameopt__ClassMethod_for_ll_backend__frameopt__block_entry_exit____ll_backend__frameopt__det_entry_info__arity0__ll_backend__frameopt__det_exit_info__arity0______ll_backend__frameopt__detect_entry_4_4_0_i5);
MR_def_label(ll_backend__frameopt__ClassMethod_for_ll_backend__frameopt__block_entry_exit____ll_backend__frameopt__det_entry_info__arity0__ll_backend__frameopt__det_exit_info__arity0______ll_backend__frameopt__detect_entry_4_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__frameopt__ClassMethod_for_ll_backend__frameopt__block_entry_exit____ll_backend__frameopt__det_entry_info__arity0__ll_backend__frameopt__det_exit_info__arity0______ll_backend__frameopt__detect_entry_4_4_0_i1);
	}
	MR_sv(5) = MR_r2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	MR_r2 = MR_r3;
	MR_r3 = MR_r4;
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		ll_backend__frameopt__ClassMethod_for_ll_backend__frameopt__block_entry_exit____ll_backend__frameopt__det_entry_info__arity0__ll_backend__frameopt__det_exit_info__arity0______ll_backend__frameopt__detect_entry_4_4_0_i7);
MR_def_label(ll_backend__frameopt__ClassMethod_for_ll_backend__frameopt__block_entry_exit____ll_backend__frameopt__det_entry_info__arity0__ll_backend__frameopt__det_exit_info__arity0______ll_backend__frameopt__detect_entry_4_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(5);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(1);
	MR_tfield(1, MR_r2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 3);
	MR_r4 = MR_tempr2;
	MR_tfield(0, MR_tempr2, 0) = MR_sv(2);
	MR_tfield(0, MR_tempr2, 1) = MR_sv(3);
	MR_tfield(0, MR_tempr2, 2) = MR_sv(4);
	MR_r3 = MR_r1;
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_r1 = MR_TRUE;
	MR_proceed();
	}
MR_def_label(ll_backend__frameopt__ClassMethod_for_ll_backend__frameopt__block_entry_exit____ll_backend__frameopt__det_entry_info__arity0__ll_backend__frameopt__det_exit_info__arity0______ll_backend__frameopt__detect_entry_4_4_0,1)
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


MR_BEGIN_MODULE(ll_backend__frameopt_module91)
	MR_init_entry1(ll_backend__frameopt__ClassMethod_for_ll_backend__frameopt__block_entry_exit____ll_backend__frameopt__det_entry_info__arity0__ll_backend__frameopt__det_exit_info__arity0______ll_backend__frameopt__detect_exit_6_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__frameopt__ClassMethod_for_ll_backend__frameopt__block_entry_exit____ll_backend__frameopt__det_entry_info__arity0__ll_backend__frameopt__det_exit_info__arity0______ll_backend__frameopt__detect_exit_6_6_0);
	MR_init_label5(ll_backend__frameopt__ClassMethod_for_ll_backend__frameopt__block_entry_exit____ll_backend__frameopt__det_entry_info__arity0__ll_backend__frameopt__det_exit_info__arity0______ll_backend__frameopt__detect_exit_6_6_0,2,5,6,7,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'ClassMethod_for_ll_backend__frameopt__block_entry_exit____ll_backend__frameopt__det_entry_info__arity0__ll_backend__frameopt__det_exit_info__arity0______ll_backend__frameopt__detect_exit_6'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__frameopt__ClassMethod_for_ll_backend__frameopt__block_entry_exit____ll_backend__frameopt__det_entry_info__arity0__ll_backend__frameopt__det_exit_info__arity0______ll_backend__frameopt__detect_exit_6_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_r2 = MR_tfield(0, MR_r2, 0);
	MR_np_call_localret_ent(ll_backend__frameopt__detstack_teardown_8_0,
		ll_backend__frameopt__ClassMethod_for_ll_backend__frameopt__block_entry_exit____ll_backend__frameopt__det_entry_info__arity0__ll_backend__frameopt__det_exit_info__arity0______ll_backend__frameopt__detect_exit_6_6_0_i2);
MR_def_label(ll_backend__frameopt__ClassMethod_for_ll_backend__frameopt__block_entry_exit____ll_backend__frameopt__det_entry_info__arity0__ll_backend__frameopt__det_exit_info__arity0______ll_backend__frameopt__detect_exit_6_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__frameopt__ClassMethod_for_ll_backend__frameopt__block_entry_exit____ll_backend__frameopt__det_entry_info__arity0__ll_backend__frameopt__det_exit_info__arity0______ll_backend__frameopt__detect_exit_6_6_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tempr2 = MR_r6;
	MR_tfield(1, MR_tempr1, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r7;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_tempr3 = MR_r5;
	MR_sv(5) = MR_tempr3;
	MR_sv(6) = MR_tempr2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	MR_r2 = MR_tempr3;
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		ll_backend__frameopt__ClassMethod_for_ll_backend__frameopt__block_entry_exit____ll_backend__frameopt__det_entry_info__arity0__ll_backend__frameopt__det_exit_info__arity0______ll_backend__frameopt__detect_exit_6_6_0_i5);
MR_def_label(ll_backend__frameopt__ClassMethod_for_ll_backend__frameopt__block_entry_exit____ll_backend__frameopt__det_entry_info__arity0__ll_backend__frameopt__det_exit_info__arity0______ll_backend__frameopt__detect_exit_6_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		ll_backend__frameopt__ClassMethod_for_ll_backend__frameopt__block_entry_exit____ll_backend__frameopt__det_entry_info__arity0__ll_backend__frameopt__det_exit_info__arity0______ll_backend__frameopt__detect_exit_6_6_0_i6);
MR_def_label(ll_backend__frameopt__ClassMethod_for_ll_backend__frameopt__block_entry_exit____ll_backend__frameopt__det_entry_info__arity0__ll_backend__frameopt__det_exit_info__arity0______ll_backend__frameopt__detect_exit_6_6_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		ll_backend__frameopt__ClassMethod_for_ll_backend__frameopt__block_entry_exit____ll_backend__frameopt__det_entry_info__arity0__ll_backend__frameopt__det_exit_info__arity0______ll_backend__frameopt__detect_exit_6_6_0_i7);
MR_def_label(ll_backend__frameopt__ClassMethod_for_ll_backend__frameopt__block_entry_exit____ll_backend__frameopt__det_entry_info__arity0__ll_backend__frameopt__det_exit_info__arity0______ll_backend__frameopt__detect_exit_6_6_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_r5 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_sv(3);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(5);
	MR_tfield(0, MR_tempr1, 2) = MR_sv(6);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_r1;
	MR_r4 = MR_sv(2);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_r1 = MR_TRUE;
	MR_proceed();
	}
MR_def_label(ll_backend__frameopt__ClassMethod_for_ll_backend__frameopt__block_entry_exit____ll_backend__frameopt__det_entry_info__arity0__ll_backend__frameopt__det_exit_info__arity0______ll_backend__frameopt__detect_exit_6_6_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__frameopt_module92)
	MR_init_entry1(fn__ll_backend__frameopt__ClassMethod_for_ll_backend__frameopt__block_entry_exit____ll_backend__frameopt__det_entry_info__arity0__ll_backend__frameopt__det_exit_info__arity0______ll_backend__frameopt__late_setup_code_1_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__ll_backend__frameopt__ClassMethod_for_ll_backend__frameopt__block_entry_exit____ll_backend__frameopt__det_entry_info__arity0__ll_backend__frameopt__det_exit_info__arity0______ll_backend__frameopt__late_setup_code_1_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'ClassMethod_for_ll_backend__frameopt__block_entry_exit____ll_backend__frameopt__det_entry_info__arity0__ll_backend__frameopt__det_exit_info__arity0______ll_backend__frameopt__late_setup_code_1'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__ll_backend__frameopt__ClassMethod_for_ll_backend__frameopt__block_entry_exit____ll_backend__frameopt__det_entry_info__arity0__ll_backend__frameopt__det_exit_info__arity0______ll_backend__frameopt__late_setup_code_1_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 3, (MR_Integer) 4);
	MR_tfield(3, MR_r2, 0) = (MR_Integer) 24;
	MR_tfield(3, MR_r2, 1) = MR_tfield(0, MR_r1, 0);
	MR_tfield(3, MR_r2, 2) = MR_tfield(0, MR_r1, 1);
	MR_tfield(3, MR_r2, 3) = MR_tfield(0, MR_r1, 2);
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_r2;
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_string_const("late setup", 10);
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr2, 1) = MR_tfield(3, MR_r2, 1);
	MR_tag_alloc_heap(MR_r2, 3, (MR_Integer) 3);
	MR_tfield(3, MR_r2, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_r2, 1) = MR_tempr2;
	MR_tfield(3, MR_r2, 2) = (MR_Word) MR_TAG_COMMON(0,15,1);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = MR_r2;
	MR_tfield(0, MR_tempr2, 1) = (MR_Word) MR_string_const("late save", 9);
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_tempr2;
	MR_tfield(1, MR_r2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = MR_tempr1;
	MR_tfield(1, MR_r1, 1) = MR_r2;
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__frameopt_module93)
	MR_init_entry1(fn__ll_backend__frameopt__ClassMethod_for_ll_backend__frameopt__block_entry_exit____ll_backend__frameopt__det_entry_info__arity0__ll_backend__frameopt__det_exit_info__arity0______ll_backend__frameopt__non_teardown_exit_code_1_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__ll_backend__frameopt__ClassMethod_for_ll_backend__frameopt__block_entry_exit____ll_backend__frameopt__det_entry_info__arity0__ll_backend__frameopt__det_exit_info__arity0______ll_backend__frameopt__non_teardown_exit_code_1_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'ClassMethod_for_ll_backend__frameopt__block_entry_exit____ll_backend__frameopt__det_entry_info__arity0__ll_backend__frameopt__det_exit_info__arity0______ll_backend__frameopt__non_teardown_exit_code_1'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__ll_backend__frameopt__ClassMethod_for_ll_backend__frameopt__block_entry_exit____ll_backend__frameopt__det_entry_info__arity0__ll_backend__frameopt__det_exit_info__arity0______ll_backend__frameopt__non_teardown_exit_code_1_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_tfield(0, MR_r1, 2);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tempr2 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	MR_r2 = MR_tfield(0, MR_tempr2, 1);
	MR_np_tailcall_ent(fn__f_108_105_115_116_95_95_43_43_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__ll_backend__opt_debug__dump_stack_incr_kind_1_0);

MR_BEGIN_MODULE(ll_backend__frameopt_module94)
	MR_init_entry1(fn__ll_backend__frameopt__ClassMethod_for_ll_backend__frameopt__block_entry_exit____ll_backend__frameopt__det_entry_info__arity0__ll_backend__frameopt__det_exit_info__arity0______ll_backend__frameopt__describe_entry_1_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__ll_backend__frameopt__ClassMethod_for_ll_backend__frameopt__block_entry_exit____ll_backend__frameopt__det_entry_info__arity0__ll_backend__frameopt__det_exit_info__arity0______ll_backend__frameopt__describe_entry_1_1_0);
	MR_init_label7(fn__ll_backend__frameopt__ClassMethod_for_ll_backend__frameopt__block_entry_exit____ll_backend__frameopt__det_entry_info__arity0__ll_backend__frameopt__det_exit_info__arity0______ll_backend__frameopt__describe_entry_1_1_0,2,3,4,5,6,7,8)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'ClassMethod_for_ll_backend__frameopt__block_entry_exit____ll_backend__frameopt__det_entry_info__arity0__ll_backend__frameopt__det_exit_info__arity0______ll_backend__frameopt__describe_entry_1'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__ll_backend__frameopt__ClassMethod_for_ll_backend__frameopt__block_entry_exit____ll_backend__frameopt__det_entry_info__arity0__ll_backend__frameopt__det_exit_info__arity0______ll_backend__frameopt__describe_entry_1_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_tfield(0, MR_r1, 1);
	MR_sv(2) = MR_tfield(0, MR_r1, 2);
	MR_r1 = MR_tfield(0, MR_r1, 0);
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		fn__ll_backend__frameopt__ClassMethod_for_ll_backend__frameopt__block_entry_exit____ll_backend__frameopt__det_entry_info__arity0__ll_backend__frameopt__det_exit_info__arity0______ll_backend__frameopt__describe_entry_1_1_0_i2);
MR_def_label(fn__ll_backend__frameopt__ClassMethod_for_ll_backend__frameopt__block_entry_exit____ll_backend__frameopt__det_entry_info__arity0__ll_backend__frameopt__det_exit_info__arity0______ll_backend__frameopt__describe_entry_1_1_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__ll_backend__opt_debug__dump_stack_incr_kind_1_0,
		fn__ll_backend__frameopt__ClassMethod_for_ll_backend__frameopt__block_entry_exit____ll_backend__frameopt__det_entry_info__arity0__ll_backend__frameopt__det_exit_info__arity0______ll_backend__frameopt__describe_entry_1_1_0_i3);
MR_def_label(fn__ll_backend__frameopt__ClassMethod_for_ll_backend__frameopt__block_entry_exit____ll_backend__frameopt__det_entry_info__arity0__ll_backend__frameopt__det_exit_info__arity0______ll_backend__frameopt__describe_entry_1_1_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("\n", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__ll_backend__frameopt__ClassMethod_for_ll_backend__frameopt__block_entry_exit____ll_backend__frameopt__det_entry_info__arity0__ll_backend__frameopt__det_exit_info__arity0______ll_backend__frameopt__describe_entry_1_1_0_i4);
MR_def_label(fn__ll_backend__frameopt__ClassMethod_for_ll_backend__frameopt__block_entry_exit____ll_backend__frameopt__det_entry_info__arity0__ll_backend__frameopt__det_exit_info__arity0______ll_backend__frameopt__describe_entry_1_1_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const(", kind: ", 8);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__ll_backend__frameopt__ClassMethod_for_ll_backend__frameopt__block_entry_exit____ll_backend__frameopt__det_entry_info__arity0__ll_backend__frameopt__det_exit_info__arity0______ll_backend__frameopt__describe_entry_1_1_0_i5);
MR_def_label(fn__ll_backend__frameopt__ClassMethod_for_ll_backend__frameopt__block_entry_exit____ll_backend__frameopt__det_entry_info__arity0__ll_backend__frameopt__det_exit_info__arity0______ll_backend__frameopt__describe_entry_1_1_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__ll_backend__frameopt__ClassMethod_for_ll_backend__frameopt__block_entry_exit____ll_backend__frameopt__det_entry_info__arity0__ll_backend__frameopt__det_exit_info__arity0______ll_backend__frameopt__describe_entry_1_1_0_i6);
MR_def_label(fn__ll_backend__frameopt__ClassMethod_for_ll_backend__frameopt__block_entry_exit____ll_backend__frameopt__det_entry_info__arity0__ll_backend__frameopt__det_exit_info__arity0______ll_backend__frameopt__describe_entry_1_1_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const(", msg: ", 7);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__ll_backend__frameopt__ClassMethod_for_ll_backend__frameopt__block_entry_exit____ll_backend__frameopt__det_entry_info__arity0__ll_backend__frameopt__det_exit_info__arity0______ll_backend__frameopt__describe_entry_1_1_0_i7);
MR_def_label(fn__ll_backend__frameopt__ClassMethod_for_ll_backend__frameopt__block_entry_exit____ll_backend__frameopt__det_entry_info__arity0__ll_backend__frameopt__det_exit_info__arity0______ll_backend__frameopt__describe_entry_1_1_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__ll_backend__frameopt__ClassMethod_for_ll_backend__frameopt__block_entry_exit____ll_backend__frameopt__det_entry_info__arity0__ll_backend__frameopt__det_exit_info__arity0______ll_backend__frameopt__describe_entry_1_1_0_i8);
MR_def_label(fn__ll_backend__frameopt__ClassMethod_for_ll_backend__frameopt__block_entry_exit____ll_backend__frameopt__det_entry_info__arity0__ll_backend__frameopt__det_exit_info__arity0______ll_backend__frameopt__describe_entry_1_1_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("size: ", 6);
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__frameopt_module95)
	MR_init_entry1(fn__ll_backend__frameopt__ClassMethod_for_ll_backend__frameopt__block_entry_exit____ll_backend__frameopt__det_entry_info__arity0__ll_backend__frameopt__det_exit_info__arity0______ll_backend__frameopt__describe_exit_2_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__ll_backend__frameopt__ClassMethod_for_ll_backend__frameopt__block_entry_exit____ll_backend__frameopt__det_entry_info__arity0__ll_backend__frameopt__det_exit_info__arity0______ll_backend__frameopt__describe_exit_2_2_0);
	MR_init_label7(fn__ll_backend__frameopt__ClassMethod_for_ll_backend__frameopt__block_entry_exit____ll_backend__frameopt__det_entry_info__arity0__ll_backend__frameopt__det_exit_info__arity0______ll_backend__frameopt__describe_exit_2_2_0,2,3,4,5,6,7,8)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'ClassMethod_for_ll_backend__frameopt__block_entry_exit____ll_backend__frameopt__det_entry_info__arity0__ll_backend__frameopt__det_exit_info__arity0______ll_backend__frameopt__describe_exit_2'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__ll_backend__frameopt__ClassMethod_for_ll_backend__frameopt__block_entry_exit____ll_backend__frameopt__det_entry_info__arity0__ll_backend__frameopt__det_exit_info__arity0______ll_backend__frameopt__describe_exit_2_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(3) = MR_r1;
	MR_sv(2) = MR_tfield(0, MR_r2, 1);
	MR_sv(1) = MR_tfield(0, MR_r2, 2);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = (MR_Integer) 1;
	MR_r3 = MR_tfield(0, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(fn__ll_backend__opt_debug__dump_fullinstrs_3_0,
		fn__ll_backend__frameopt__ClassMethod_for_ll_backend__frameopt__block_entry_exit____ll_backend__frameopt__det_entry_info__arity0__ll_backend__frameopt__det_exit_info__arity0______ll_backend__frameopt__describe_exit_2_2_0_i2);
MR_def_label(fn__ll_backend__frameopt__ClassMethod_for_ll_backend__frameopt__block_entry_exit____ll_backend__frameopt__det_entry_info__arity0__ll_backend__frameopt__det_exit_info__arity0______ll_backend__frameopt__describe_exit_2_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = (MR_Integer) 1;
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__ll_backend__opt_debug__dump_fullinstrs_3_0,
		fn__ll_backend__frameopt__ClassMethod_for_ll_backend__frameopt__block_entry_exit____ll_backend__frameopt__det_entry_info__arity0__ll_backend__frameopt__det_exit_info__arity0______ll_backend__frameopt__describe_exit_2_2_0_i3);
MR_def_label(fn__ll_backend__frameopt__ClassMethod_for_ll_backend__frameopt__block_entry_exit____ll_backend__frameopt__det_entry_info__arity0__ll_backend__frameopt__det_exit_info__arity0______ll_backend__frameopt__describe_exit_2_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Integer) 1;
	MR_r3 = MR_sv(1);
	}
	MR_np_call_localret_ent(fn__ll_backend__opt_debug__dump_fullinstr_3_0,
		fn__ll_backend__frameopt__ClassMethod_for_ll_backend__frameopt__block_entry_exit____ll_backend__frameopt__det_entry_info__arity0__ll_backend__frameopt__det_exit_info__arity0______ll_backend__frameopt__describe_exit_2_2_0_i4);
MR_def_label(fn__ll_backend__frameopt__ClassMethod_for_ll_backend__frameopt__block_entry_exit____ll_backend__frameopt__det_entry_info__arity0__ll_backend__frameopt__det_exit_info__arity0______ll_backend__frameopt__describe_exit_2_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("goto:     ", 10);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__ll_backend__frameopt__ClassMethod_for_ll_backend__frameopt__block_entry_exit____ll_backend__frameopt__det_entry_info__arity0__ll_backend__frameopt__det_exit_info__arity0______ll_backend__frameopt__describe_exit_2_2_0_i5);
MR_def_label(fn__ll_backend__frameopt__ClassMethod_for_ll_backend__frameopt__block_entry_exit____ll_backend__frameopt__det_entry_info__arity0__ll_backend__frameopt__det_exit_info__arity0______ll_backend__frameopt__describe_exit_2_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__ll_backend__frameopt__ClassMethod_for_ll_backend__frameopt__block_entry_exit____ll_backend__frameopt__det_entry_info__arity0__ll_backend__frameopt__det_exit_info__arity0______ll_backend__frameopt__describe_exit_2_2_0_i6);
MR_def_label(fn__ll_backend__frameopt__ClassMethod_for_ll_backend__frameopt__block_entry_exit____ll_backend__frameopt__det_entry_info__arity0__ll_backend__frameopt__det_exit_info__arity0______ll_backend__frameopt__describe_exit_2_2_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("livevals: ", 10);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__ll_backend__frameopt__ClassMethod_for_ll_backend__frameopt__block_entry_exit____ll_backend__frameopt__det_entry_info__arity0__ll_backend__frameopt__det_exit_info__arity0______ll_backend__frameopt__describe_exit_2_2_0_i7);
MR_def_label(fn__ll_backend__frameopt__ClassMethod_for_ll_backend__frameopt__block_entry_exit____ll_backend__frameopt__det_entry_info__arity0__ll_backend__frameopt__det_exit_info__arity0______ll_backend__frameopt__describe_exit_2_2_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__ll_backend__frameopt__ClassMethod_for_ll_backend__frameopt__block_entry_exit____ll_backend__frameopt__det_entry_info__arity0__ll_backend__frameopt__det_exit_info__arity0______ll_backend__frameopt__describe_exit_2_2_0_i8);
MR_def_label(fn__ll_backend__frameopt__ClassMethod_for_ll_backend__frameopt__block_entry_exit____ll_backend__frameopt__det_entry_info__arity0__ll_backend__frameopt__det_exit_info__arity0______ll_backend__frameopt__describe_exit_2_2_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("restore:  ", 10);
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__frameopt_module96)
	MR_init_entry1(ll_backend__frameopt__IntroducedFrom__pred__build_frame_block_map__684__1_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__frameopt__IntroducedFrom__pred__build_frame_block_map__684__1_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__pred__build_frame_block_map__684__1'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__frameopt__IntroducedFrom__pred__build_frame_block_map__684__1_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_r1 == MR_r2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__frameopt_module97)
	MR_init_entry1(ll_backend__frameopt__IntroducedFrom__pred__analyze_block__1252__1_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__frameopt__IntroducedFrom__pred__analyze_block__1252__1_4_0);
	MR_init_label2(ll_backend__frameopt__IntroducedFrom__pred__analyze_block__1252__1_4_0,2,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__pred__analyze_block__1252__1'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__frameopt__IntroducedFrom__pred__analyze_block__1252__1_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(3) = MR_r1;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_r2 = (MR_Integer) 1;
	MR_np_call_localret_ent(private_builtin__type_info_from_typeclass_info_3_0,
		ll_backend__frameopt__IntroducedFrom__pred__analyze_block__1252__1_4_0_i2);
MR_def_label(ll_backend__frameopt__IntroducedFrom__pred__analyze_block__1252__1_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Integer) 2;
	}
	MR_np_call_localret_ent(private_builtin__type_info_from_typeclass_info_3_0,
		ll_backend__frameopt__IntroducedFrom__pred__analyze_block__1252__1_4_0_i3);
MR_def_label(ll_backend__frameopt__IntroducedFrom__pred__analyze_block__1252__1_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(ll_backend__frameopt__mark_redoip_label_3_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(set__contains_2_0);

MR_BEGIN_MODULE(ll_backend__frameopt_module98)
	MR_init_entry1(ll_backend__frameopt__IntroducedFrom__pred__propagate_frame_requirement_to_successors__1691__1_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__frameopt__IntroducedFrom__pred__propagate_frame_requirement_to_successors__1691__1_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__pred__propagate_frame_requirement_to_successors__1691__1'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__frameopt__IntroducedFrom__pred__propagate_frame_requirement_to_successors__1691__1_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, label);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	MR_np_tailcall_ent(set__contains_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__frameopt_module99)
	MR_init_entry1(ll_backend__frameopt__IntroducedFrom__pred__process_frame_delay__1825__1_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__frameopt__IntroducedFrom__pred__process_frame_delay__1825__1_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__pred__process_frame_delay__1825__1'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__frameopt__IntroducedFrom__pred__process_frame_delay__1825__1_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(__Unify___ll_backend__llds__label_0_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__frameopt_module100)
	MR_init_entry1(ll_backend__frameopt__IntroducedFrom__pred__create_parallels__2028__1_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__frameopt__IntroducedFrom__pred__create_parallels__2028__1_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__pred__create_parallels__2028__1'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__frameopt__IntroducedFrom__pred__create_parallels__2028__1_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(__Unify___ll_backend__llds__label_0_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__frameopt_module101)
	MR_init_entry1(ll_backend__frameopt__IntroducedFrom__pred__create_parallels__2031__1_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__frameopt__IntroducedFrom__pred__create_parallels__2031__1_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__pred__create_parallels__2031__1'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__frameopt__IntroducedFrom__pred__create_parallels__2031__1_2_0)
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


MR_BEGIN_MODULE(ll_backend__frameopt_module102)
	MR_init_entry1(ll_backend__frameopt__IntroducedFrom__pred__create_parallels__2072__1_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__frameopt__IntroducedFrom__pred__create_parallels__2072__1_2_0);
	MR_init_label2(ll_backend__frameopt__IntroducedFrom__pred__create_parallels__2072__1_2_0,2,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__pred__create_parallels__2072__1'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__frameopt__IntroducedFrom__pred__create_parallels__2072__1_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r1;
	MR_r2 = (MR_Integer) 1;
	MR_np_call_localret_ent(private_builtin__type_info_from_typeclass_info_3_0,
		ll_backend__frameopt__IntroducedFrom__pred__create_parallels__2072__1_2_0_i2);
MR_def_label(ll_backend__frameopt__IntroducedFrom__pred__create_parallels__2072__1_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_r2 = (MR_Integer) 2;
	MR_np_call_localret_ent(private_builtin__type_info_from_typeclass_info_3_0,
		ll_backend__frameopt__IntroducedFrom__pred__create_parallels__2072__1_2_0_i3);
MR_def_label(ll_backend__frameopt__IntroducedFrom__pred__create_parallels__2072__1_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(f_108_108_95_98_97_99_107_101_110_100_95_95_102_114_97_109_101_111_112_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_115_95_111_114_100_105_110_97_114_121_95_98_108_111_99_107_95_95_91_49_44_32_50_93_95_48_1_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__frameopt_module103)
	MR_init_entry1(ll_backend__frameopt__IntroducedFrom__pred__describe_block__2214__1_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__frameopt__IntroducedFrom__pred__describe_block__2214__1_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__pred__describe_block__2214__1'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__frameopt__IntroducedFrom__pred__describe_block__2214__1_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(__Unify___ll_backend__llds__label_0_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__frameopt_module104)
	MR_init_entry1(ll_backend__frameopt__IntroducedFrom__pred__describe_block__2289__1_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__frameopt__IntroducedFrom__pred__describe_block__2289__1_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__pred__describe_block__2289__1'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__frameopt__IntroducedFrom__pred__describe_block__2289__1_2_0)
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


MR_BEGIN_MODULE(ll_backend__frameopt_module105)
	MR_init_entry1(ll_backend__frameopt__IntroducedFrom__pred__describe_block__2274__1_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__frameopt__IntroducedFrom__pred__describe_block__2274__1_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__pred__describe_block__2274__1'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__frameopt__IntroducedFrom__pred__describe_block__2274__1_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_r1 == MR_r2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__ll_backend__opt_util__block_refers_to_stack_1_0);

MR_BEGIN_MODULE(ll_backend__frameopt_module106)
	MR_init_entry1(f_108_108_95_98_97_99_107_101_110_100_95_95_102_114_97_109_101_111_112_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_109_112_117_116_101_95_98_108_111_99_107_95_110_101_101_100_115_95_102_114_97_109_101_95_95_91_49_93_95_48_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__f_108_108_95_98_97_99_107_101_110_100_95_95_102_114_97_109_101_111_112_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_109_112_117_116_101_95_98_108_111_99_107_95_110_101_101_100_115_95_102_114_97_109_101_95_95_91_49_93_95_48_3_0);
	MR_init_label7(f_108_108_95_98_97_99_107_101_110_100_95_95_102_114_97_109_101_111_112_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_109_112_117_116_101_95_98_108_111_99_107_95_110_101_101_100_115_95_102_114_97_109_101_95_95_91_49_93_95_48_3_0,2,7,10,12,8,6,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__pred__compute_block_needs_frame__[1]_0'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(f_108_108_95_98_97_99_107_101_110_100_95_95_102_114_97_109_101_111_112_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_109_112_117_116_101_95_98_108_111_99_107_95_110_101_101_100_115_95_102_114_97_109_101_95_95_91_49_93_95_48_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(fn__ll_backend__opt_util__block_refers_to_stack_1_0,
		f_108_108_95_98_97_99_107_101_110_100_95_95_102_114_97_109_101_111_112_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_109_112_117_116_101_95_98_108_111_99_107_95_110_101_101_100_115_95_102_114_97_109_101_95_95_91_49_93_95_48_3_0_i2);
MR_def_label(f_108_108_95_98_97_99_107_101_110_100_95_95_102_114_97_109_101_111_112_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_109_112_117_116_101_95_98_108_111_99_107_95_110_101_101_100_115_95_102_114_97_109_101_95_95_91_49_93_95_48_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(f_108_108_95_98_97_99_107_101_110_100_95_95_102_114_97_109_101_111_112_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_109_112_117_116_101_95_98_108_111_99_107_95_110_101_101_100_115_95_102_114_97_109_101_95_95_91_49_93_95_48_3_0_i4);
	}
	MR_sv(2) = (MR_Word) MR_redoip_slot(MR_maxfr);
	MR_sv(3) = (MR_Word) MR_redofr_slot(MR_maxfr);
	MR_save_maxfr(MR_sv(4));
	MR_redofr_slot_word(MR_maxfr) = (MR_Word) MR_curfr;
	MR_redoip_slot_word(MR_maxfr) = (MR_Word) MR_LABEL_AP(f_108_108_95_98_97_99_107_101_110_100_95_95_102_114_97_109_101_111_112_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_109_112_117_116_101_95_98_108_111_99_107_95_110_101_101_100_115_95_102_114_97_109_101_95_95_91_49_93_95_48_3_0_i6);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(list__member_2_1,
		f_108_108_95_98_97_99_107_101_110_100_95_95_102_114_97_109_101_111_112_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_109_112_117_116_101_95_98_108_111_99_107_95_110_101_101_100_115_95_102_114_97_109_101_95_95_91_49_93_95_48_3_0_i7);
MR_def_label(f_108_108_95_98_97_99_107_101_110_100_95_95_102_114_97_109_101_111_112_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_109_112_117_116_101_95_98_108_111_99_107_95_110_101_101_100_115_95_102_114_97_109_101_95_95_91_49_93_95_48_3_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_tfield(0, MR_r1, 0);
	if (MR_RTAGS_TEST(MR_r2,3,8)) {
		MR_GOTO_LAB(f_108_108_95_98_97_99_107_101_110_100_95_95_102_114_97_109_101_111_112_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_109_112_117_116_101_95_98_108_111_99_107_95_110_101_101_100_115_95_102_114_97_109_101_95_95_91_49_93_95_48_3_0_i8);
	}
	if (MR_RTAGS_TESTR(MR_r2,3,1)) {
		MR_GOTO_LAB(f_108_108_95_98_97_99_107_101_110_100_95_95_102_114_97_109_101_111_112_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_109_112_117_116_101_95_98_108_111_99_107_95_110_101_101_100_115_95_102_114_97_109_101_95_95_91_49_93_95_48_3_0_i10);
	}
	MR_r3 = MR_tfield(3, MR_r2, 1);
	if (MR_LTAGS_TESTR(MR_r3,0,0)) {
		MR_GOTO(MR_ENTRY(MR_do_redo));
	}
	MR_GOTO_LAB(f_108_108_95_98_97_99_107_101_110_100_95_95_102_114_97_109_101_111_112_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_109_112_117_116_101_95_98_108_111_99_107_95_110_101_101_100_115_95_102_114_97_109_101_95_95_91_49_93_95_48_3_0_i8);
MR_def_label(f_108_108_95_98_97_99_107_101_110_100_95_95_102_114_97_109_101_111_112_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_109_112_117_116_101_95_98_108_111_99_107_95_110_101_101_100_115_95_102_114_97_109_101_95_95_91_49_93_95_48_3_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r2,3,27)) {
		MR_GOTO_LAB(f_108_108_95_98_97_99_107_101_110_100_95_95_102_114_97_109_101_111_112_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_109_112_117_116_101_95_98_108_111_99_107_95_110_101_101_100_115_95_102_114_97_109_101_95_95_91_49_93_95_48_3_0_i12);
	}
	MR_r3 = MR_tfield(3, MR_r2, 9);
	MR_r4 = MR_tfield(3, MR_r2, 8);
	MR_r5 = MR_tfield(3, MR_r2, 6);
	MR_r6 = MR_tfield(3, MR_r2, 5);
	MR_r7 = MR_tfield(3, MR_r2, 3);
	if (MR_INT_EQ(MR_r7,0)) {
		MR_GOTO_LAB(f_108_108_95_98_97_99_107_101_110_100_95_95_102_114_97_109_101_111_112_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_109_112_117_116_101_95_98_108_111_99_107_95_110_101_101_100_115_95_102_114_97_109_101_95_95_91_49_93_95_48_3_0_i8);
	}
	if (MR_LTAGS_TESTR(MR_r6,0,0)) {
		MR_GOTO_LAB(f_108_108_95_98_97_99_107_101_110_100_95_95_102_114_97_109_101_111_112_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_109_112_117_116_101_95_98_108_111_99_107_95_110_101_101_100_115_95_102_114_97_109_101_95_95_91_49_93_95_48_3_0_i8);
	}
	if (MR_LTAGS_TESTR(MR_r5,0,0)) {
		MR_GOTO_LAB(f_108_108_95_98_97_99_107_101_110_100_95_95_102_114_97_109_101_111_112_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_109_112_117_116_101_95_98_108_111_99_107_95_110_101_101_100_115_95_102_114_97_109_101_95_95_91_49_93_95_48_3_0_i8);
	}
	if (MR_LTAGS_TESTR(MR_r4,0,0)) {
		MR_GOTO_LAB(f_108_108_95_98_97_99_107_101_110_100_95_95_102_114_97_109_101_111_112_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_109_112_117_116_101_95_98_108_111_99_107_95_110_101_101_100_115_95_102_114_97_109_101_95_95_91_49_93_95_48_3_0_i8);
	}
	if (MR_INT_NE(MR_r3,1)) {
		MR_GOTO(MR_ENTRY(MR_do_redo));
	}
	MR_GOTO_LAB(f_108_108_95_98_97_99_107_101_110_100_95_95_102_114_97_109_101_111_112_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_109_112_117_116_101_95_98_108_111_99_107_95_110_101_101_100_115_95_102_114_97_109_101_95_95_91_49_93_95_48_3_0_i8);
MR_def_label(f_108_108_95_98_97_99_107_101_110_100_95_95_102_114_97_109_101_111_112_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_109_112_117_116_101_95_98_108_111_99_107_95_110_101_101_100_115_95_102_114_97_109_101_95_95_91_49_93_95_48_3_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TEST(MR_r2,3,3)) {
		MR_GOTO_LAB(f_108_108_95_98_97_99_107_101_110_100_95_95_102_114_97_109_101_111_112_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_109_112_117_116_101_95_98_108_111_99_107_95_110_101_101_100_115_95_102_114_97_109_101_95_95_91_49_93_95_48_3_0_i8);
	}
	if (MR_RTAGS_TESTR(MR_r2,3,4)) {
		MR_GOTO(MR_ENTRY(MR_do_redo));
	}
MR_def_label(f_108_108_95_98_97_99_107_101_110_100_95_95_102_114_97_109_101_111_112_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_109_112_117_116_101_95_98_108_111_99_107_95_110_101_101_100_115_95_102_114_97_109_101_95_95_91_49_93_95_48_3_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_restore_maxfr(MR_sv(4));
	MR_redoip_slot_word(MR_maxfr) = MR_sv(2);
	MR_redofr_slot_word(MR_maxfr) = MR_sv(3);
	MR_GOTO_LAB(f_108_108_95_98_97_99_107_101_110_100_95_95_102_114_97_109_101_111_112_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_109_112_117_116_101_95_98_108_111_99_107_95_110_101_101_100_115_95_102_114_97_109_101_95_95_91_49_93_95_48_3_0_i4);
MR_def_label(f_108_108_95_98_97_99_107_101_110_100_95_95_102_114_97_109_101_111_112_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_109_112_117_116_101_95_98_108_111_99_107_95_110_101_101_100_115_95_102_114_97_109_101_95_95_91_49_93_95_48_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_redoip_slot_word(MR_maxfr) = MR_sv(2);
	MR_redofr_slot_word(MR_maxfr) = MR_sv(3);
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(5);
MR_def_label(f_108_108_95_98_97_99_107_101_110_100_95_95_102_114_97_109_101_111_112_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_109_112_117_116_101_95_98_108_111_99_107_95_110_101_101_100_115_95_102_114_97_109_101_95_95_91_49_93_95_48_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__frameopt_module107)
	MR_init_entry1(fn__f_108_108_95_98_97_99_107_101_110_100_95_95_102_114_97_109_101_111_112_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_115_117_99_99_101_115_115_111_114_115_95_95_91_49_44_32_50_93_95_48_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__f_108_108_95_98_97_99_107_101_110_100_95_95_102_114_97_109_101_111_112_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_115_117_99_99_101_115_115_111_114_115_95_95_91_49_44_32_50_93_95_48_1_0);
	MR_init_label1(fn__f_108_108_95_98_97_99_107_101_110_100_95_95_102_114_97_109_101_111_112_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_115_117_99_99_101_115_115_111_114_115_95_95_91_49_44_32_50_93_95_48_1_0,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__func__successors__[1, 2]_0'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__f_108_108_95_98_97_99_107_101_110_100_95_95_102_114_97_109_101_111_112_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_115_117_99_99_101_115_115_111_114_115_95_95_91_49_44_32_50_93_95_48_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_tfield(0, MR_r1, 4);
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(fn__f_108_108_95_98_97_99_107_101_110_100_95_95_102_114_97_109_101_111_112_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_115_117_99_99_101_115_115_111_114_115_95_95_91_49_44_32_50_93_95_48_1_0_i3);
	}
	MR_r1 = MR_tfield(0, MR_r1, 3);
	MR_proceed();
MR_def_label(fn__f_108_108_95_98_97_99_107_101_110_100_95_95_102_114_97_109_101_111_112_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_115_117_99_99_101_115_115_111_114_115_95_95_91_49_44_32_50_93_95_48_1_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_tfield(1, MR_r2, 0);
	MR_tfield(1, MR_tempr1, 1) = MR_tfield(0, MR_r1, 3);
	MR_r1 = MR_tempr1;
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__frameopt_module108)
	MR_init_entry1(f_108_108_95_98_97_99_107_101_110_100_95_95_102_114_97_109_101_111_112_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_114_101_97_116_101_95_112_97_114_97_108_108_101_108_115_95_95_91_49_49_93_95_48_12_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__f_108_108_95_98_97_99_107_101_110_100_95_95_102_114_97_109_101_111_112_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_114_101_97_116_101_95_112_97_114_97_108_108_101_108_115_95_95_91_49_49_93_95_48_12_0);
	MR_init_label10(f_108_108_95_98_97_99_107_101_110_100_95_95_102_114_97_109_101_111_112_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_114_101_97_116_101_95_112_97_114_97_108_108_101_108_115_95_95_91_49_49_93_95_48_12_0,144,4,5,6,8,10,13,16,18,20)
	MR_init_label10(f_108_108_95_98_97_99_107_101_110_100_95_95_102_114_97_109_101_111_112_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_114_101_97_116_101_95_112_97_114_97_108_108_101_108_115_95_95_91_49_49_93_95_48_12_0,21,17,25,26,27,33,34,35,41,37)
	MR_init_label10(f_108_108_95_98_97_99_107_101_110_100_95_95_102_114_97_109_101_111_112_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_114_101_97_116_101_95_112_97_114_97_108_108_101_108_115_95_95_91_49_49_93_95_48_12_0,48,29,12,52,55,56,57,58,60,66)
	MR_init_label7(f_108_108_95_98_97_99_107_101_110_100_95_95_102_114_97_109_101_111_112_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_114_101_97_116_101_95_112_97_114_97_108_108_101_108_115_95_95_91_49_49_93_95_48_12_0,78,82,59,86,87,91,51)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__pred__create_parallels__[11]_0'/12 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(f_108_108_95_98_97_99_107_101_110_100_95_95_102_114_97_109_101_111_112_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_114_101_97_116_101_95_112_97_114_97_108_108_101_108_115_95_95_91_49_49_93_95_48_12_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(f_108_108_95_98_97_99_107_101_110_100_95_95_102_114_97_109_101_111_112_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_114_101_97_116_101_95_112_97_114_97_108_108_101_108_115_95_95_91_49_49_93_95_48_12_0_i144);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = MR_r5;
	MR_r3 = MR_r9;
	MR_proceed();
MR_def_label(f_108_108_95_98_97_99_107_101_110_100_95_95_102_114_97_109_101_111_112_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_114_101_97_116_101_95_112_97_114_97_108_108_101_108_115_95_95_91_49_49_93_95_48_12_0,144)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(19);
	MR_sv(19) = (MR_Word) MR_succip;
	MR_sv(9) = MR_r3;
	MR_sv(10) = MR_r4;
	MR_sv(11) = MR_r6;
	MR_sv(12) = MR_r7;
	MR_sv(1) = MR_r8;
	MR_sv(2) = MR_tfield(1, MR_r2, 0);
	MR_sv(15) = MR_r1;
	MR_r2 = MR_tfield(1, MR_r2, 1);
	MR_np_localcall_lab(f_108_108_95_98_97_99_107_101_110_100_95_95_102_114_97_109_101_111_112_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_114_101_97_116_101_95_112_97_114_97_108_108_101_108_115_95_95_91_49_49_93_95_48_12_0,
		f_108_108_95_98_97_99_107_101_110_100_95_95_102_114_97_109_101_111_112_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_114_101_97_116_101_95_112_97_114_97_108_108_101_108_115_95_95_91_49_49_93_95_48_12_0_i4);
MR_def_label(f_108_108_95_98_97_99_107_101_110_100_95_95_102_114_97_109_101_111_112_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_114_101_97_116_101_95_112_97_114_97_108_108_101_108_115_95_95_91_49_49_93_95_48_12_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_sv(13) = MR_r2;
	MR_sv(14) = MR_r3;
	MR_sv(16) = (MR_Integer) 1;
	MR_r1 = MR_sv(15);
	MR_r2 = MR_sv(16);
	MR_np_call_localret_ent(private_builtin__type_info_from_typeclass_info_3_0,
		f_108_108_95_98_97_99_107_101_110_100_95_95_102_114_97_109_101_111_112_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_114_101_97_116_101_95_112_97_114_97_108_108_101_108_115_95_95_91_49_49_93_95_48_12_0_i5);
MR_def_label(f_108_108_95_98_97_99_107_101_110_100_95_95_102_114_97_109_101_111_112_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_114_101_97_116_101_95_112_97_114_97_108_108_101_108_115_95_95_91_49_49_93_95_48_12_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_sv(17) = (MR_Integer) 2;
	MR_r1 = MR_sv(15);
	MR_r2 = MR_sv(17);
	MR_np_call_localret_ent(private_builtin__type_info_from_typeclass_info_3_0,
		f_108_108_95_98_97_99_107_101_110_100_95_95_102_114_97_109_101_111_112_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_114_101_97_116_101_95_112_97_114_97_108_108_101_108_115_95_95_91_49_49_93_95_48_12_0_i6);
MR_def_label(f_108_108_95_98_97_99_107_101_110_100_95_95_102_114_97_109_101_111_112_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_114_101_97_116_101_95_112_97_114_97_108_108_101_108_115_95_95_91_49_49_93_95_48_12_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 3);
	MR_tfield(0, MR_r2, 0) = (MR_Word) MR_CTOR_ADDR(ll_backend__frameopt, frame_block_info, 2);
	MR_tfield(0, MR_r2, 1) = MR_sv(4);
	MR_tfield(0, MR_r2, 2) = MR_r1;
	MR_sv(18) = MR_r2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, label);
	MR_r3 = MR_sv(14);
	MR_r4 = MR_sv(2);
	MR_np_call_localret_ent(map__lookup_3_0,
		f_108_108_95_98_97_99_107_101_110_100_95_95_102_114_97_109_101_111_112_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_114_101_97_116_101_95_112_97_114_97_108_108_101_108_115_95_95_91_49_49_93_95_48_12_0_i8);
MR_def_label(f_108_108_95_98_97_99_107_101_110_100_95_95_102_114_97_109_101_111_112_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_114_101_97_116_101_95_112_97_114_97_108_108_101_108_115_95_95_91_49_49_93_95_48_12_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(6,11);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(ll_backend__frameopt__IntroducedFrom__pred__create_parallels__2028__1_2_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 4) = MR_tfield(0, MR_r1, 0);
	MR_sv(4) = MR_r1;
	MR_sv(5) = MR_tfield(0, MR_r1, 2);
	MR_sv(6) = MR_tfield(0, MR_r1, 3);
	MR_sv(7) = MR_tfield(0, MR_r1, 4);
	MR_sv(8) = MR_tfield(0, MR_r1, 5);
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Word) MR_string_const("ll_backend.frameopt", 19);
	MR_r3 = (MR_Word) MR_string_const("predicate \140ll_backend.frameopt.create_parallels\'/12", 51);
	MR_r4 = (MR_Word) MR_string_const("label in frame_block_info is not copy", 37);
	}
	MR_np_call_localret_ent(require__expect_4_0,
		f_108_108_95_98_97_99_107_101_110_100_95_95_102_114_97_109_101_111_112_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_114_101_97_116_101_95_112_97_114_97_108_108_101_108_115_95_95_91_49_49_93_95_48_12_0_i10);
MR_def_label(f_108_108_95_98_97_99_107_101_110_100_95_95_102_114_97_109_101_111_112_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_114_101_97_116_101_95_112_97_114_97_108_108_101_108_115_95_95_91_49_49_93_95_48_12_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(ll_backend__frameopt__search_exit_par_map_3_0,
		f_108_108_95_98_97_99_107_101_110_100_95_95_102_114_97_109_101_111_112_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_114_101_97_116_101_95_112_97_114_97_108_108_101_108_115_95_95_91_49_49_93_95_48_12_0_i13);
MR_def_label(f_108_108_95_98_97_99_107_101_110_100_95_95_102_114_97_109_101_111_112_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_114_101_97_116_101_95_112_97_114_97_108_108_101_108_115_95_95_91_49_49_93_95_48_12_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(f_108_108_95_98_97_99_107_101_110_100_95_95_102_114_97_109_101_111_112_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_114_101_97_116_101_95_112_97_114_97_108_108_101_108_115_95_95_91_49_49_93_95_48_12_0_i12);
	}
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 5);
	MR_tfield(0, MR_r1, 0) = (MR_Word) MR_COMMON(6,12);
	MR_tfield(0, MR_r1, 1) = (MR_Word) MR_ENTRY_AP(ll_backend__frameopt__IntroducedFrom__pred__create_parallels__2031__1_2_0);
	MR_tfield(0, MR_r1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_r1, 3) = MR_sv(7);
	MR_tfield(0, MR_r1, 4) = (MR_Word) MR_tbmkword(0, 0);
	MR_sv(9) = MR_r2;
	MR_r2 = (MR_Word) MR_string_const("ll_backend.frameopt", 19);
	MR_r3 = (MR_Word) MR_string_const("predicate \140ll_backend.frameopt.create_parallels\'/12", 51);
	MR_r4 = (MR_Word) MR_string_const("exit block with parallel has fall through", 41);
	MR_np_call_localret_ent(require__expect_4_0,
		f_108_108_95_98_97_99_107_101_110_100_95_95_102_114_97_109_101_111_112_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_114_101_97_116_101_95_112_97_114_97_108_108_101_108_115_95_95_91_49_49_93_95_48_12_0_i16);
MR_def_label(f_108_108_95_98_97_99_107_101_110_100_95_95_102_114_97_109_101_111_112_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_114_101_97_116_101_95_112_97_114_97_108_108_101_108_115_95_95_91_49_49_93_95_48_12_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(6),0,0)) {
		MR_GOTO_LAB(f_108_108_95_98_97_99_107_101_110_100_95_95_102_114_97_109_101_111_112_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_114_101_97_116_101_95_112_97_114_97_108_108_101_108_115_95_95_91_49_49_93_95_48_12_0_i18);
	}
	MR_sv(10) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_sv(15);
	MR_r2 = MR_sv(16);
	MR_GOTO_LAB(f_108_108_95_98_97_99_107_101_110_100_95_95_102_114_97_109_101_111_112_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_114_101_97_116_101_95_112_97_114_97_108_108_101_108_115_95_95_91_49_49_93_95_48_12_0_i17);
MR_def_label(f_108_108_95_98_97_99_107_101_110_100_95_95_102_114_97_109_101_111_112_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_114_101_97_116_101_95_112_97_114_97_108_108_101_108_115_95_95_91_49_49_93_95_48_12_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r1, 0) = MR_sv(10);
	MR_r2 = MR_sv(6);
	MR_np_call_localret_ent(fn__ll_backend__opt_debug__dump_labels_2_0,
		f_108_108_95_98_97_99_107_101_110_100_95_95_102_114_97_109_101_111_112_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_114_101_97_116_101_95_112_97_114_97_108_108_101_108_115_95_95_91_49_49_93_95_48_12_0_i20);
MR_def_label(f_108_108_95_98_97_99_107_101_110_100_95_95_102_114_97_109_101_111_112_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_114_101_97_116_101_95_112_97_114_97_108_108_101_108_115_95_95_91_49_49_93_95_48_12_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("exit side labels ", 17);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		f_108_108_95_98_97_99_107_101_110_100_95_95_102_114_97_109_101_111_112_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_114_101_97_116_101_95_112_97_114_97_108_108_101_108_115_95_95_91_49_49_93_95_48_12_0_i21);
MR_def_label(f_108_108_95_98_97_99_107_101_110_100_95_95_102_114_97_109_101_111_112_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_114_101_97_116_101_95_112_97_114_97_108_108_101_108_115_95_95_91_49_49_93_95_48_12_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr2, 1) = (MR_Word) MR_string_const("", 0);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_sv(10) = MR_tempr3;
	MR_tfield(1, MR_tempr3, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr3, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_sv(15);
	MR_r2 = MR_sv(16);
	}
MR_def_label(f_108_108_95_98_97_99_107_101_110_100_95_95_102_114_97_109_101_111_112_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_114_101_97_116_101_95_112_97_114_97_108_108_101_108_115_95_95_91_49_49_93_95_48_12_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(15) = MR_r1;
	MR_np_call_localret_ent(private_builtin__type_info_from_typeclass_info_3_0,
		f_108_108_95_98_97_99_107_101_110_100_95_95_102_114_97_109_101_111_112_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_114_101_97_116_101_95_112_97_114_97_108_108_101_108_115_95_95_91_49_49_93_95_48_12_0_i25);
MR_def_label(f_108_108_95_98_97_99_107_101_110_100_95_95_102_114_97_109_101_111_112_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_114_101_97_116_101_95_112_97_114_97_108_108_101_108_115_95_95_91_49_49_93_95_48_12_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(15);
	MR_r2 = MR_sv(17);
	MR_np_call_localret_ent(private_builtin__type_info_from_typeclass_info_3_0,
		f_108_108_95_98_97_99_107_101_110_100_95_95_102_114_97_109_101_111_112_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_114_101_97_116_101_95_112_97_114_97_108_108_101_108_115_95_95_91_49_49_93_95_48_12_0_i26);
MR_def_label(f_108_108_95_98_97_99_107_101_110_100_95_95_102_114_97_109_101_111_112_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_114_101_97_116_101_95_112_97_114_97_108_108_101_108_115_95_95_91_49_49_93_95_48_12_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(11);
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(fn__f_108_108_95_98_97_99_107_101_110_100_95_95_102_114_97_109_101_111_112_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_112_114_101_118_95_98_108_111_99_107_95_110_101_101_100_115_95_102_114_97_109_101_95_95_91_49_44_32_50_93_95_48_2_0,
		f_108_108_95_98_97_99_107_101_110_100_95_95_102_114_97_109_101_111_112_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_114_101_97_116_101_95_112_97_114_97_108_108_101_108_115_95_95_91_49_49_93_95_48_12_0_i27);
MR_def_label(f_108_108_95_98_97_99_107_101_110_100_95_95_102_114_97_109_101_111_112_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_114_101_97_116_101_95_112_97_114_97_108_108_101_108_115_95_95_91_49_49_93_95_48_12_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(8),2)) {
		MR_GOTO_LAB(f_108_108_95_98_97_99_107_101_110_100_95_95_102_114_97_109_101_111_112_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_114_101_97_116_101_95_112_97_114_97_108_108_101_108_115_95_95_91_49_49_93_95_48_12_0_i29);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 5;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(9);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr2, 1) = (MR_Word) MR_string_const("non-teardown parallel", 21);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_sv(12) = MR_tempr3;
	MR_tfield(1, MR_tempr3, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr3, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_sv(11) = MR_r1;
	MR_r1 = MR_sv(15);
	MR_r2 = MR_tfield(2, MR_sv(8), 0);
	}
	MR_np_call_localret_ent(fn__ll_backend__frameopt__non_teardown_exit_code_1_0,
		f_108_108_95_98_97_99_107_101_110_100_95_95_102_114_97_109_101_111_112_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_114_101_97_116_101_95_112_97_114_97_108_108_101_108_115_95_95_91_49_49_93_95_48_12_0_i33);
MR_def_label(f_108_108_95_98_97_99_107_101_110_100_95_95_102_114_97_109_101_111_112_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_114_101_97_116_101_95_112_97_114_97_108_108_101_108_115_95_95_91_49_49_93_95_48_12_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	MR_r2 = MR_sv(10);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		f_108_108_95_98_97_99_107_101_110_100_95_95_102_114_97_109_101_111_112_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_114_101_97_116_101_95_112_97_114_97_108_108_101_108_115_95_95_91_49_49_93_95_48_12_0_i34);
MR_def_label(f_108_108_95_98_97_99_107_101_110_100_95_95_102_114_97_109_101_111_112_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_114_101_97_116_101_95_112_97_114_97_108_108_101_108_115_95_95_91_49_49_93_95_48_12_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	MR_r2 = MR_sv(12);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		f_108_108_95_98_97_99_107_101_110_100_95_95_102_114_97_109_101_111_112_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_114_101_97_116_101_95_112_97_114_97_108_108_101_108_115_95_95_91_49_49_93_95_48_12_0_i35);
MR_def_label(f_108_108_95_98_97_99_107_101_110_100_95_95_102_114_97_109_101_111_112_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_114_101_97_116_101_95_112_97_114_97_108_108_101_108_115_95_95_91_49_49_93_95_48_12_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(11),1)) {
		MR_GOTO_LAB(f_108_108_95_98_97_99_107_101_110_100_95_95_102_114_97_109_101_111_112_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_114_101_97_116_101_95_112_97_114_97_108_108_101_108_115_95_95_91_49_49_93_95_48_12_0_i37);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tempr4 = MR_sv(2);
	MR_tfield(1, MR_tempr1, 0) = MR_tempr4;
	MR_tfield(1, MR_tempr1, 1) = MR_sv(3);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_sv(10) = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_sv(9);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr3, 0, (MR_Integer) 6);
	MR_r4 = MR_tempr3;
	MR_tempr5 = MR_sv(4);
	MR_tfield(0, MR_tempr3, 0) = MR_tfield(0, MR_tempr5, 0);
	MR_tfield(0, MR_tempr3, 1) = MR_tfield(0, MR_tempr5, 1);
	MR_tfield(0, MR_tempr3, 2) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_tempr3, 3) = MR_tfield(0, MR_tempr5, 3);
	MR_tfield(0, MR_tempr3, 4) = MR_tfield(0, MR_tempr5, 4);
	MR_tfield(0, MR_tempr3, 5) = MR_tfield(0, MR_tempr5, 5);
	MR_sv(11) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, label);
	MR_r2 = MR_sv(18);
	MR_r3 = MR_tempr4;
	MR_r5 = MR_sv(14);
	}
	MR_np_call_localret_ent(map__det_update_4_0,
		f_108_108_95_98_97_99_107_101_110_100_95_95_102_114_97_109_101_111_112_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_114_101_97_116_101_95_112_97_114_97_108_108_101_108_115_95_95_91_49_49_93_95_48_12_0_i41);
MR_def_label(f_108_108_95_98_97_99_107_101_110_100_95_95_102_114_97_109_101_111_112_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_114_101_97_116_101_95_112_97_114_97_108_108_101_108_115_95_95_91_49_49_93_95_48_12_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 6);
	MR_r4 = MR_tempr1;
	MR_tempr2 = MR_sv(9);
	MR_tfield(0, MR_tempr1, 0) = MR_tempr2;
	MR_tfield(0, MR_tempr1, 1) = MR_sv(11);
	MR_tfield(0, MR_tempr1, 2) = MR_sv(5);
	MR_tfield(0, MR_tempr1, 3) = MR_sv(6);
	MR_tfield(0, MR_tempr1, 4) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_tempr1, 5) = (MR_Word) MR_TAG_COMMON(1,5,2);
	MR_r3 = MR_tempr2;
	MR_r5 = MR_r1;
	MR_r2 = MR_sv(18);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, label);
	}
	MR_np_call_localret_ent(map__det_insert_4_0,
		f_108_108_95_98_97_99_107_101_110_100_95_95_102_114_97_109_101_111_112_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_114_101_97_116_101_95_112_97_114_97_108_108_101_108_115_95_95_91_49_49_93_95_48_12_0_i48);
MR_def_label(f_108_108_95_98_97_99_107_101_110_100_95_95_102_114_97_109_101_111_112_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_114_101_97_116_101_95_112_97_114_97_108_108_101_108_115_95_95_91_49_49_93_95_48_12_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tempr4 = MR_sv(9);
	MR_tfield(1, MR_tempr1, 0) = MR_tempr4;
	MR_tfield(1, MR_tempr1, 1) = MR_sv(3);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_sv(10) = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr3, 0, (MR_Integer) 6);
	MR_r4 = MR_tempr3;
	MR_tfield(0, MR_tempr3, 0) = MR_tempr4;
	MR_tfield(0, MR_tempr3, 1) = MR_r1;
	MR_tfield(0, MR_tempr3, 2) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_tempr3, 3) = MR_sv(6);
	MR_tfield(0, MR_tempr3, 4) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_tempr3, 5) = (MR_Word) MR_TAG_COMMON(1,5,2);
	MR_r3 = MR_tempr4;
	MR_r5 = MR_sv(14);
	MR_r2 = MR_sv(18);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, label);
	}
	MR_np_call_localret_ent(map__det_insert_4_0,
		f_108_108_95_98_97_99_107_101_110_100_95_95_102_114_97_109_101_111_112_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_114_101_97_116_101_95_112_97_114_97_108_108_101_108_115_95_95_91_49_49_93_95_48_12_0_i48);
MR_def_label(f_108_108_95_98_97_99_107_101_110_100_95_95_102_114_97_109_101_111_112_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_114_101_97_116_101_95_112_97_114_97_108_108_101_108_115_95_95_91_49_49_93_95_48_12_0,48)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(10);
	MR_r2 = MR_sv(13);
	MR_r3 = MR_tempr1;
	MR_decr_sp_and_return(19);
	}
MR_def_label(f_108_108_95_98_97_99_107_101_110_100_95_95_102_114_97_109_101_111_112_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_114_101_97_116_101_95_112_97_114_97_108_108_101_108_115_95_95_91_49_49_93_95_48_12_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("ll_backend.frameopt", 19);
	MR_r2 = (MR_Word) MR_string_const("predicate \140ll_backend.frameopt.create_parallels\'/12", 51);
	MR_r3 = (MR_Word) MR_string_const("block in exit_par_map is not exit", 33);
	MR_succip_word = MR_sv(19);
	MR_decr_sp(19);
	MR_np_tailcall_ent(require__unexpected_3_0);
MR_def_label(f_108_108_95_98_97_99_107_101_110_100_95_95_102_114_97_109_101_111_112_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_114_101_97_116_101_95_112_97_114_97_108_108_101_108_115_95_95_91_49_49_93_95_48_12_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(12);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(ll_backend__frameopt__search_setup_par_map_3_0,
		f_108_108_95_98_97_99_107_101_110_100_95_95_102_114_97_109_101_111_112_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_114_101_97_116_101_95_112_97_114_97_108_108_101_108_115_95_95_91_49_49_93_95_48_12_0_i52);
MR_def_label(f_108_108_95_98_97_99_107_101_110_100_95_95_102_114_97_109_101_111_112_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_114_101_97_116_101_95_112_97_114_97_108_108_101_108_115_95_95_91_49_49_93_95_48_12_0,52)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(f_108_108_95_98_97_99_107_101_110_100_95_95_102_114_97_109_101_111_112_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_114_101_97_116_101_95_112_97_114_97_108_108_101_108_115_95_95_91_49_49_93_95_48_12_0_i51);
	}
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 5);
	MR_tfield(0, MR_r1, 0) = (MR_Word) MR_COMMON(6,13);
	MR_tfield(0, MR_r1, 1) = (MR_Word) MR_ENTRY_AP(ll_backend__frameopt__IntroducedFrom__pred__create_parallels__2072__1_2_0);
	MR_tfield(0, MR_r1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_r1, 3) = MR_sv(15);
	MR_tfield(0, MR_r1, 4) = MR_sv(8);
	MR_sv(12) = MR_r2;
	MR_r2 = (MR_Word) MR_string_const("ll_backend.frameopt", 19);
	MR_r3 = (MR_Word) MR_string_const("predicate \140ll_backend.frameopt.create_parallels\'/12", 51);
	MR_r4 = (MR_Word) MR_string_const("block in setup map is not ordinary", 34);
	MR_np_call_localret_ent(require__expect_4_0,
		f_108_108_95_98_97_99_107_101_110_100_95_95_102_114_97_109_101_111_112_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_114_101_97_116_101_95_112_97_114_97_108_108_101_108_115_95_95_91_49_49_93_95_48_12_0_i55);
MR_def_label(f_108_108_95_98_97_99_107_101_110_100_95_95_102_114_97_109_101_111_112_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_114_101_97_116_101_95_112_97_114_97_108_108_101_108_115_95_95_91_49_49_93_95_48_12_0,55)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(15);
	MR_r2 = MR_sv(16);
	MR_np_call_localret_ent(private_builtin__type_info_from_typeclass_info_3_0,
		f_108_108_95_98_97_99_107_101_110_100_95_95_102_114_97_109_101_111_112_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_114_101_97_116_101_95_112_97_114_97_108_108_101_108_115_95_95_91_49_49_93_95_48_12_0_i56);
MR_def_label(f_108_108_95_98_97_99_107_101_110_100_95_95_102_114_97_109_101_111_112_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_114_101_97_116_101_95_112_97_114_97_108_108_101_108_115_95_95_91_49_49_93_95_48_12_0,56)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(15);
	MR_r2 = MR_sv(17);
	MR_np_call_localret_ent(private_builtin__type_info_from_typeclass_info_3_0,
		f_108_108_95_98_97_99_107_101_110_100_95_95_102_114_97_109_101_111_112_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_114_101_97_116_101_95_112_97_114_97_108_108_101_108_115_95_95_91_49_49_93_95_48_12_0_i57);
MR_def_label(f_108_108_95_98_97_99_107_101_110_100_95_95_102_114_97_109_101_111_112_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_114_101_97_116_101_95_112_97_114_97_108_108_101_108_115_95_95_91_49_49_93_95_48_12_0,57)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(11);
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(fn__f_108_108_95_98_97_99_107_101_110_100_95_95_102_114_97_109_101_111_112_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_112_114_101_118_95_98_108_111_99_107_95_110_101_101_100_115_95_102_114_97_109_101_95_95_91_49_44_32_50_93_95_48_2_0,
		f_108_108_95_98_97_99_107_101_110_100_95_95_102_114_97_109_101_111_112_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_114_101_97_116_101_95_112_97_114_97_108_108_101_108_115_95_95_91_49_49_93_95_48_12_0_i58);
MR_def_label(f_108_108_95_98_97_99_107_101_110_100_95_95_102_114_97_109_101_111_112_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_114_101_97_116_101_95_112_97_114_97_108_108_101_108_115_95_95_91_49_49_93_95_48_12_0,58)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(f_108_108_95_98_97_99_107_101_110_100_95_95_102_114_97_109_101_111_112_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_114_101_97_116_101_95_112_97_114_97_108_108_101_108_115_95_95_91_49_49_93_95_48_12_0_i60);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr1, 1) = MR_sv(3);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_sv(10) = MR_tempr2;
	MR_tempr6 = MR_sv(12);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr6;
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr3, 3, (MR_Integer) 2);
	MR_r4 = MR_tempr3;
	MR_tfield(3, MR_tempr3, 0) = (MR_Integer) 5;
	MR_tfield(3, MR_tempr3, 1) = MR_tempr6;
	MR_tag_alloc_heap(MR_tempr4, 0, (MR_Integer) 2);
	MR_r5 = MR_tempr4;
	MR_tfield(0, MR_tempr4, 0) = MR_tempr3;
	MR_tfield(0, MR_tempr4, 1) = (MR_Word) MR_string_const("late setup label", 16);
	MR_tag_alloc_heap(MR_tempr5, 1, (MR_Integer) 2);
	MR_sv(4) = MR_tempr5;
	MR_tfield(1, MR_tempr5, 0) = MR_tempr4;
	MR_tfield(1, MR_tempr5, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = MR_sv(9);
	MR_sv(11) = MR_sv(13);
	MR_sv(1) = (MR_Word) MR_tbmkword(0, 0);
	MR_sv(3) = MR_sv(14);
	MR_r1 = MR_sv(15);
	MR_GOTO_LAB(f_108_108_95_98_97_99_107_101_110_100_95_95_102_114_97_109_101_111_112_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_114_101_97_116_101_95_112_97_114_97_108_108_101_108_115_95_95_91_49_49_93_95_48_12_0_i59);
	}
MR_def_label(f_108_108_95_98_97_99_107_101_110_100_95_95_102_114_97_109_101_111_112_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_114_101_97_116_101_95_112_97_114_97_108_108_101_108_115_95_95_91_49_49_93_95_48_12_0,60)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(13);
	MR_np_call_localret_ent(counter__allocate_3_0,
		f_108_108_95_98_97_99_107_101_110_100_95_95_102_114_97_109_101_111_112_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_114_101_97_116_101_95_112_97_114_97_108_108_101_108_115_95_95_91_49_49_93_95_48_12_0_i66);
MR_def_label(f_108_108_95_98_97_99_107_101_110_100_95_95_102_114_97_109_101_111_112_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_114_101_97_116_101_95_112_97_114_97_108_108_101_108_115_95_95_91_49_49_93_95_48_12_0,66)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6, MR_tempr7, MR_tempr8, MR_tempr9;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tfield(0, MR_tempr1, 1) = MR_sv(10);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 1);
	MR_tempr9 = MR_sv(2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr9;
	MR_tag_alloc_heap(MR_tempr3, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr3, 0) = (MR_Integer) 6;
	MR_tfield(3, MR_tempr3, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr4, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr4, 0) = MR_tempr3;
	MR_tfield(0, MR_tempr4, 1) = (MR_Word) MR_string_const("jump around setup", 17);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_tempr4;
	MR_tfield(1, MR_tempr3, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr4, 0) = MR_tempr9;
	MR_tfield(1, MR_tempr4, 1) = MR_sv(3);
	MR_tag_alloc_heap(MR_tempr5, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr5, 0) = MR_sv(12);
	MR_tfield(1, MR_tempr5, 1) = MR_tempr4;
	MR_tag_alloc_heap(MR_tempr6, 1, (MR_Integer) 2);
	MR_sv(10) = MR_tempr6;
	MR_tfield(1, MR_tempr6, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr6, 1) = MR_tempr5;
	MR_tag_alloc_heap(MR_tempr7, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr7, 0) = MR_tempr9;
	MR_tfield(1, MR_tempr7, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr8, 0, (MR_Integer) 6);
	MR_r4 = MR_tempr8;
	MR_tfield(0, MR_tempr8, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr8, 1) = MR_tempr3;
	MR_tfield(0, MR_tempr8, 2) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_tempr8, 3) = MR_tempr7;
	MR_tfield(0, MR_tempr8, 4) = MR_sv(5);
	MR_tfield(0, MR_tempr8, 5) = (MR_Word) MR_TAG_COMMON(1,5,1);
	MR_sv(11) = MR_r2;
	MR_sv(1) = MR_tempr1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, label);
	MR_r2 = MR_sv(18);
	MR_r5 = MR_sv(14);
	}
	MR_np_call_localret_ent(map__det_insert_4_0,
		f_108_108_95_98_97_99_107_101_110_100_95_95_102_114_97_109_101_111_112_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_114_101_97_116_101_95_112_97_114_97_108_108_101_108_115_95_95_91_49_49_93_95_48_12_0_i78);
MR_def_label(f_108_108_95_98_97_99_107_101_110_100_95_95_102_114_97_109_101_111_112_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_114_101_97_116_101_95_112_97_114_97_108_108_101_108_115_95_95_91_49_49_93_95_48_12_0,78)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(12);
	MR_tag_alloc_heap(MR_tempr3, 0, (MR_Integer) 6);
	MR_r4 = MR_tempr3;
	MR_tempr5 = MR_sv(4);
	MR_tfield(0, MR_tempr3, 0) = MR_tfield(0, MR_tempr5, 0);
	MR_tfield(0, MR_tempr3, 1) = MR_tfield(0, MR_tempr5, 1);
	MR_tfield(0, MR_tempr3, 2) = MR_tempr2;
	MR_tfield(0, MR_tempr3, 3) = MR_tfield(0, MR_tempr5, 3);
	MR_tfield(0, MR_tempr3, 4) = MR_tfield(0, MR_tempr5, 4);
	MR_tfield(0, MR_tempr3, 5) = MR_tfield(0, MR_tempr5, 5);
	MR_sv(1) = MR_tempr1;
	MR_tempr4 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, label);
	MR_r2 = MR_sv(18);
	MR_r3 = MR_sv(2);
	MR_r5 = MR_tempr4;
	}
	MR_np_call_localret_ent(map__det_update_4_0,
		f_108_108_95_98_97_99_107_101_110_100_95_95_102_114_97_109_101_111_112_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_114_101_97_116_101_95_112_97_114_97_108_108_101_108_115_95_95_91_49_49_93_95_48_12_0_i82);
MR_def_label(f_108_108_95_98_97_99_107_101_110_100_95_95_102_114_97_109_101_111_112_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_114_101_97_116_101_95_112_97_114_97_108_108_101_108_115_95_95_91_49_49_93_95_48_12_0,82)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 5;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(12);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr2, 1) = (MR_Word) MR_string_const("late setup label", 16);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_sv(4) = MR_tempr3;
	MR_tfield(1, MR_tempr3, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr3, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = MR_sv(9);
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(15);
	}
MR_def_label(f_108_108_95_98_97_99_107_101_110_100_95_95_102_114_97_109_101_111_112_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_114_101_97_116_101_95_112_97_114_97_108_108_101_108_115_95_95_91_49_49_93_95_48_12_0,59)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_r2;
	MR_np_call_localret_ent(fn__ll_backend__frameopt__late_setup_code_1_0,
		f_108_108_95_98_97_99_107_101_110_100_95_95_102_114_97_109_101_111_112_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_114_101_97_116_101_95_112_97_114_97_108_108_101_108_115_95_95_91_49_49_93_95_48_12_0_i86);
MR_def_label(f_108_108_95_98_97_99_107_101_110_100_95_95_102_114_97_109_101_111_112_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_114_101_97_116_101_95_112_97_114_97_108_108_101_108_115_95_95_91_49_49_93_95_48_12_0,86)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		f_108_108_95_98_97_99_107_101_110_100_95_95_102_114_97_109_101_111_112_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_114_101_97_116_101_95_112_97_114_97_108_108_101_108_115_95_95_91_49_49_93_95_48_12_0_i87);
MR_def_label(f_108_108_95_98_97_99_107_101_110_100_95_95_102_114_97_109_101_111_112_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_114_101_97_116_101_95_112_97_114_97_108_108_101_108_115_95_95_91_49_49_93_95_48_12_0,87)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(2);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr2, 0) = MR_sv(9);
	MR_tag_alloc_heap(MR_tempr3, 0, (MR_Integer) 6);
	MR_r4 = MR_tempr3;
	MR_tempr4 = MR_sv(12);
	MR_tfield(0, MR_tempr3, 0) = MR_tempr4;
	MR_tfield(0, MR_tempr3, 1) = MR_r1;
	MR_tfield(0, MR_tempr3, 2) = MR_sv(1);
	MR_tfield(0, MR_tempr3, 3) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_tempr3, 4) = MR_tempr1;
	MR_tfield(0, MR_tempr3, 5) = MR_tempr2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, label);
	MR_r2 = MR_sv(18);
	MR_r3 = MR_tempr4;
	MR_r5 = MR_sv(3);
	}
	MR_np_call_localret_ent(map__det_insert_4_0,
		f_108_108_95_98_97_99_107_101_110_100_95_95_102_114_97_109_101_111_112_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_114_101_97_116_101_95_112_97_114_97_108_108_101_108_115_95_95_91_49_49_93_95_48_12_0_i91);
MR_def_label(f_108_108_95_98_97_99_107_101_110_100_95_95_102_114_97_109_101_111_112_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_114_101_97_116_101_95_112_97_114_97_108_108_101_108_115_95_95_91_49_49_93_95_48_12_0,91)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(10);
	MR_r2 = MR_sv(11);
	MR_r3 = MR_tempr1;
	MR_decr_sp_and_return(19);
	}
MR_def_label(f_108_108_95_98_97_99_107_101_110_100_95_95_102_114_97_109_101_111_112_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_114_101_97_116_101_95_112_97_114_97_108_108_101_108_115_95_95_91_49_49_93_95_48_12_0,51)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = MR_sv(2);
	MR_tfield(1, MR_r1, 1) = MR_sv(3);
	MR_r2 = MR_sv(13);
	MR_r3 = MR_sv(14);
	MR_decr_sp_and_return(19);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__frameopt_module109)
	MR_init_entry1(fn__f_108_108_95_98_97_99_107_101_110_100_95_95_102_114_97_109_101_111_112_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_112_114_101_118_95_98_108_111_99_107_95_110_101_101_100_115_95_102_114_97_109_101_95_95_91_49_44_32_50_93_95_48_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__f_108_108_95_98_97_99_107_101_110_100_95_95_102_114_97_109_101_111_112_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_112_114_101_118_95_98_108_111_99_107_95_110_101_101_100_115_95_102_114_97_109_101_95_95_91_49_44_32_50_93_95_48_2_0);
	MR_init_label3(fn__f_108_108_95_98_97_99_107_101_110_100_95_95_102_114_97_109_101_111_112_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_112_114_101_118_95_98_108_111_99_107_95_110_101_101_100_115_95_102_114_97_109_101_95_95_91_49_44_32_50_93_95_48_2_0,8,3,5)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__func__prev_block_needs_frame__[1, 2]_0'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__f_108_108_95_98_97_99_107_101_110_100_95_95_102_114_97_109_101_111_112_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_112_114_101_118_95_98_108_111_99_107_95_110_101_101_100_115_95_102_114_97_109_101_95_95_91_49_44_32_50_93_95_48_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_r3 = MR_tfield(0, MR_r2, 2);
	if (MR_LTAGS_TESTR(MR_r3,0,0)) {
		MR_GOTO_LAB(fn__f_108_108_95_98_97_99_107_101_110_100_95_95_102_114_97_109_101_111_112_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_112_114_101_118_95_98_108_111_99_107_95_110_101_101_100_115_95_102_114_97_109_101_95_95_91_49_44_32_50_93_95_48_2_0_i3);
	}
MR_def_label(fn__f_108_108_95_98_97_99_107_101_110_100_95_95_102_114_97_109_101_111_112_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_112_114_101_118_95_98_108_111_99_107_95_110_101_101_100_115_95_102_114_97_109_101_95_95_91_49_44_32_50_93_95_48_2_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(1);
MR_def_label(fn__f_108_108_95_98_97_99_107_101_110_100_95_95_102_114_97_109_101_111_112_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_112_114_101_118_95_98_108_111_99_107_95_110_101_101_100_115_95_102_114_97_109_101_95_95_91_49_44_32_50_93_95_48_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, label);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(ll_backend__frameopt, block_needs_frame);
	MR_tempr2 = MR_r3;
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tfield(1, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(map__search_3_0,
		fn__f_108_108_95_98_97_99_107_101_110_100_95_95_102_114_97_109_101_111_112_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_112_114_101_118_95_98_108_111_99_107_95_110_101_101_100_115_95_102_114_97_109_101_95_95_91_49_44_32_50_93_95_48_2_0_i5);
MR_def_label(fn__f_108_108_95_98_97_99_107_101_110_100_95_95_102_114_97_109_101_111_112_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_112_114_101_118_95_98_108_111_99_107_95_110_101_101_100_115_95_102_114_97_109_101_95_95_91_49_44_32_50_93_95_48_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(fn__f_108_108_95_98_97_99_107_101_110_100_95_95_102_114_97_109_101_111_112_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_112_114_101_118_95_98_108_111_99_107_95_110_101_101_100_115_95_102_114_97_109_101_95_95_91_49_44_32_50_93_95_48_2_0_i8);
	}
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(1);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__frameopt_module110)
	MR_init_entry1(f_108_108_95_98_97_99_107_101_110_100_95_95_102_114_97_109_101_111_112_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_115_95_111_114_100_105_110_97_114_121_95_98_108_111_99_107_95_95_91_49_44_32_50_93_95_48_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__f_108_108_95_98_97_99_107_101_110_100_95_95_102_114_97_109_101_111_112_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_115_95_111_114_100_105_110_97_114_121_95_98_108_111_99_107_95_95_91_49_44_32_50_93_95_48_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__pred__is_ordinary_block__[1, 2]_0'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(f_108_108_95_98_97_99_107_101_110_100_95_95_102_114_97_109_101_111_112_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_115_95_111_114_100_105_110_97_114_121_95_98_108_111_99_107_95_95_91_49_44_32_50_93_95_48_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_tag(MR_r1) == MR_mktag((MR_Integer) 1));
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__frameopt_module111)
	MR_init_entry1(f_108_108_95_98_97_99_107_101_110_100_95_95_102_114_97_109_101_111_112_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_108_108_95_98_97_99_107_101_110_100_95_95_102_114_97_109_101_111_112_116_95_95_98_108_111_99_107_95_101_110_116_114_121_95_101_120_105_116_95_95_95_95_108_108_95_98_97_99_107_101_110_100_95_95_102_114_97_109_101_111_112_116_95_95_110_111_110_100_101_116_95_101_110_116_114_121_95_105_110_102_111_95_95_97_114_105_116_121_48_95_95_108_108_95_98_97_99_107_101_110_100_95_95_102_114_97_109_101_111_112_116_95_95_110_111_110_100_101_116_95_101_120_105_116_95_105_110_102_111_95_95_97_114_105_116_121_48_95_95_95_95_95_95_108_108_95_98_97_99_107_101_110_100_95_95_102_114_97_109_101_111_112_116_95_95_100_101_116_101_99_116_95_101_120_105_116_95_54_95_95_91_50_93_95_48_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__f_108_108_95_98_97_99_107_101_110_100_95_95_102_114_97_109_101_111_112_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_108_108_95_98_97_99_107_101_110_100_95_95_102_114_97_109_101_111_112_116_95_95_98_108_111_99_107_95_101_110_116_114_121_95_101_120_105_116_95_95_95_95_108_108_95_98_97_99_107_101_110_100_95_95_102_114_97_109_101_111_112_116_95_95_110_111_110_100_101_116_95_101_110_116_114_121_95_105_110_102_111_95_95_97_114_105_116_121_48_95_95_108_108_95_98_97_99_107_101_110_100_95_95_102_114_97_109_101_111_112_116_95_95_110_111_110_100_101_116_95_101_120_105_116_95_105_110_102_111_95_95_97_114_105_116_121_48_95_95_95_95_95_95_108_108_95_98_97_99_107_101_110_100_95_95_102_114_97_109_101_111_112_116_95_95_100_101_116_101_99_116_95_101_120_105_116_95_54_95_95_91_50_93_95_48_6_0);
	MR_init_label9(f_108_108_95_98_97_99_107_101_110_100_95_95_102_114_97_109_101_111_112_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_108_108_95_98_97_99_107_101_110_100_95_95_102_114_97_109_101_111_112_116_95_95_98_108_111_99_107_95_101_110_116_114_121_95_101_120_105_116_95_95_95_95_108_108_95_98_97_99_107_101_110_100_95_95_102_114_97_109_101_111_112_116_95_95_110_111_110_100_101_116_95_101_110_116_114_121_95_105_110_102_111_95_95_97_114_105_116_121_48_95_95_108_108_95_98_97_99_107_101_110_100_95_95_102_114_97_109_101_111_112_116_95_95_110_111_110_100_101_116_95_101_120_105_116_95_105_110_102_111_95_95_97_114_105_116_121_48_95_95_95_95_95_95_108_108_95_98_97_99_107_101_110_100_95_95_102_114_97_109_101_111_112_116_95_95_100_101_116_101_99_116_95_101_120_105_116_95_54_95_95_91_50_93_95_48_6_0,2,5,6,7,8,10,16,15,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__pred__ClassMethod_for_ll_backend__frameopt__block_entry_exit____ll_backend__frameopt__nondet_entry_info__arity0__ll_backend__frameopt__nondet_exit_info__arity0______ll_backend__frameopt__detect_exit_6__[2]_0'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(f_108_108_95_98_97_99_107_101_110_100_95_95_102_114_97_109_101_111_112_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_108_108_95_98_97_99_107_101_110_100_95_95_102_114_97_109_101_111_112_116_95_95_98_108_111_99_107_95_101_110_116_114_121_95_101_120_105_116_95_95_95_95_108_108_95_98_97_99_107_101_110_100_95_95_102_114_97_109_101_111_112_116_95_95_110_111_110_100_101_116_95_101_110_116_114_121_95_105_110_102_111_95_95_97_114_105_116_121_48_95_95_108_108_95_98_97_99_107_101_110_100_95_95_102_114_97_109_101_111_112_116_95_95_110_111_110_100_101_116_95_101_120_105_116_95_105_110_102_111_95_95_97_114_105_116_121_48_95_95_95_95_95_95_108_108_95_98_97_99_107_101_110_100_95_95_102_114_97_109_101_111_112_116_95_95_100_101_116_101_99_116_95_101_120_105_116_95_54_95_95_91_50_93_95_48_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(ll_backend__frameopt__nondetstack_teardown_9_0,
		f_108_108_95_98_97_99_107_101_110_100_95_95_102_114_97_109_101_111_112_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_108_108_95_98_97_99_107_101_110_100_95_95_102_114_97_109_101_111_112_116_95_95_98_108_111_99_107_95_101_110_116_114_121_95_101_120_105_116_95_95_95_95_108_108_95_98_97_99_107_101_110_100_95_95_102_114_97_109_101_111_112_116_95_95_110_111_110_100_101_116_95_101_110_116_114_121_95_105_110_102_111_95_95_97_114_105_116_121_48_95_95_108_108_95_98_97_99_107_101_110_100_95_95_102_114_97_109_101_111_112_116_95_95_110_111_110_100_101_116_95_101_120_105_116_95_105_110_102_111_95_95_97_114_105_116_121_48_95_95_95_95_95_95_108_108_95_98_97_99_107_101_110_100_95_95_102_114_97_109_101_111_112_116_95_95_100_101_116_101_99_116_95_101_120_105_116_95_54_95_95_91_50_93_95_48_6_0_i2);
MR_def_label(f_108_108_95_98_97_99_107_101_110_100_95_95_102_114_97_109_101_111_112_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_108_108_95_98_97_99_107_101_110_100_95_95_102_114_97_109_101_111_112_116_95_95_98_108_111_99_107_95_101_110_116_114_121_95_101_120_105_116_95_95_95_95_108_108_95_98_97_99_107_101_110_100_95_95_102_114_97_109_101_111_112_116_95_95_110_111_110_100_101_116_95_101_110_116_114_121_95_105_110_102_111_95_95_97_114_105_116_121_48_95_95_108_108_95_98_97_99_107_101_110_100_95_95_102_114_97_109_101_111_112_116_95_95_110_111_110_100_101_116_95_101_120_105_116_95_105_110_102_111_95_95_97_114_105_116_121_48_95_95_95_95_95_95_108_108_95_98_97_99_107_101_110_100_95_95_102_114_97_109_101_111_112_116_95_95_100_101_116_101_99_116_95_101_120_105_116_95_54_95_95_91_50_93_95_48_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(f_108_108_95_98_97_99_107_101_110_100_95_95_102_114_97_109_101_111_112_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_108_108_95_98_97_99_107_101_110_100_95_95_102_114_97_109_101_111_112_116_95_95_98_108_111_99_107_95_101_110_116_114_121_95_101_120_105_116_95_95_95_95_108_108_95_98_97_99_107_101_110_100_95_95_102_114_97_109_101_111_112_116_95_95_110_111_110_100_101_116_95_101_110_116_114_121_95_105_110_102_111_95_95_97_114_105_116_121_48_95_95_108_108_95_98_97_99_107_101_110_100_95_95_102_114_97_109_101_111_112_116_95_95_110_111_110_100_101_116_95_101_120_105_116_95_105_110_102_111_95_95_97_114_105_116_121_48_95_95_95_95_95_95_108_108_95_98_97_99_107_101_110_100_95_95_102_114_97_109_101_111_112_116_95_95_100_101_116_101_99_116_95_101_120_105_116_95_54_95_95_91_50_93_95_48_6_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tempr2 = MR_r7;
	MR_tfield(1, MR_tempr1, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r9;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_sv(5) = MR_r5;
	MR_tempr3 = MR_r6;
	MR_sv(6) = MR_tempr3;
	MR_sv(7) = MR_tempr2;
	MR_sv(8) = MR_r8;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	MR_r2 = MR_tempr3;
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		f_108_108_95_98_97_99_107_101_110_100_95_95_102_114_97_109_101_111_112_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_108_108_95_98_97_99_107_101_110_100_95_95_102_114_97_109_101_111_112_116_95_95_98_108_111_99_107_95_101_110_116_114_121_95_101_120_105_116_95_95_95_95_108_108_95_98_97_99_107_101_110_100_95_95_102_114_97_109_101_111_112_116_95_95_110_111_110_100_101_116_95_101_110_116_114_121_95_105_110_102_111_95_95_97_114_105_116_121_48_95_95_108_108_95_98_97_99_107_101_110_100_95_95_102_114_97_109_101_111_112_116_95_95_110_111_110_100_101_116_95_101_120_105_116_95_105_110_102_111_95_95_97_114_105_116_121_48_95_95_95_95_95_95_108_108_95_98_97_99_107_101_110_100_95_95_102_114_97_109_101_111_112_116_95_95_100_101_116_101_99_116_95_101_120_105_116_95_54_95_95_91_50_93_95_48_6_0_i5);
MR_def_label(f_108_108_95_98_97_99_107_101_110_100_95_95_102_114_97_109_101_111_112_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_108_108_95_98_97_99_107_101_110_100_95_95_102_114_97_109_101_111_112_116_95_95_98_108_111_99_107_95_101_110_116_114_121_95_101_120_105_116_95_95_95_95_108_108_95_98_97_99_107_101_110_100_95_95_102_114_97_109_101_111_112_116_95_95_110_111_110_100_101_116_95_101_110_116_114_121_95_105_110_102_111_95_95_97_114_105_116_121_48_95_95_108_108_95_98_97_99_107_101_110_100_95_95_102_114_97_109_101_111_112_116_95_95_110_111_110_100_101_116_95_101_120_105_116_95_105_110_102_111_95_95_97_114_105_116_121_48_95_95_95_95_95_95_108_108_95_98_97_99_107_101_110_100_95_95_102_114_97_109_101_111_112_116_95_95_100_101_116_101_99_116_95_101_120_105_116_95_54_95_95_91_50_93_95_48_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		f_108_108_95_98_97_99_107_101_110_100_95_95_102_114_97_109_101_111_112_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_108_108_95_98_97_99_107_101_110_100_95_95_102_114_97_109_101_111_112_116_95_95_98_108_111_99_107_95_101_110_116_114_121_95_101_120_105_116_95_95_95_95_108_108_95_98_97_99_107_101_110_100_95_95_102_114_97_109_101_111_112_116_95_95_110_111_110_100_101_116_95_101_110_116_114_121_95_105_110_102_111_95_95_97_114_105_116_121_48_95_95_108_108_95_98_97_99_107_101_110_100_95_95_102_114_97_109_101_111_112_116_95_95_110_111_110_100_101_116_95_101_120_105_116_95_105_110_102_111_95_95_97_114_105_116_121_48_95_95_95_95_95_95_108_108_95_98_97_99_107_101_110_100_95_95_102_114_97_109_101_111_112_116_95_95_100_101_116_101_99_116_95_101_120_105_116_95_54_95_95_91_50_93_95_48_6_0_i6);
MR_def_label(f_108_108_95_98_97_99_107_101_110_100_95_95_102_114_97_109_101_111_112_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_108_108_95_98_97_99_107_101_110_100_95_95_102_114_97_109_101_111_112_116_95_95_98_108_111_99_107_95_101_110_116_114_121_95_101_120_105_116_95_95_95_95_108_108_95_98_97_99_107_101_110_100_95_95_102_114_97_109_101_111_112_116_95_95_110_111_110_100_101_116_95_101_110_116_114_121_95_105_110_102_111_95_95_97_114_105_116_121_48_95_95_108_108_95_98_97_99_107_101_110_100_95_95_102_114_97_109_101_111_112_116_95_95_110_111_110_100_101_116_95_101_120_105_116_95_105_110_102_111_95_95_97_114_105_116_121_48_95_95_95_95_95_95_108_108_95_98_97_99_107_101_110_100_95_95_102_114_97_109_101_111_112_116_95_95_100_101_116_101_99_116_95_101_120_105_116_95_54_95_95_91_50_93_95_48_6_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		f_108_108_95_98_97_99_107_101_110_100_95_95_102_114_97_109_101_111_112_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_108_108_95_98_97_99_107_101_110_100_95_95_102_114_97_109_101_111_112_116_95_95_98_108_111_99_107_95_101_110_116_114_121_95_101_120_105_116_95_95_95_95_108_108_95_98_97_99_107_101_110_100_95_95_102_114_97_109_101_111_112_116_95_95_110_111_110_100_101_116_95_101_110_116_114_121_95_105_110_102_111_95_95_97_114_105_116_121_48_95_95_108_108_95_98_97_99_107_101_110_100_95_95_102_114_97_109_101_111_112_116_95_95_110_111_110_100_101_116_95_101_120_105_116_95_105_110_102_111_95_95_97_114_105_116_121_48_95_95_95_95_95_95_108_108_95_98_97_99_107_101_110_100_95_95_102_114_97_109_101_111_112_116_95_95_100_101_116_101_99_116_95_101_120_105_116_95_54_95_95_91_50_93_95_48_6_0_i7);
MR_def_label(f_108_108_95_98_97_99_107_101_110_100_95_95_102_114_97_109_101_111_112_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_108_108_95_98_97_99_107_101_110_100_95_95_102_114_97_109_101_111_112_116_95_95_98_108_111_99_107_95_101_110_116_114_121_95_101_120_105_116_95_95_95_95_108_108_95_98_97_99_107_101_110_100_95_95_102_114_97_109_101_111_112_116_95_95_110_111_110_100_101_116_95_101_110_116_114_121_95_105_110_102_111_95_95_97_114_105_116_121_48_95_95_108_108_95_98_97_99_107_101_110_100_95_95_102_114_97_109_101_111_112_116_95_95_110_111_110_100_101_116_95_101_120_105_116_95_105_110_102_111_95_95_97_114_105_116_121_48_95_95_95_95_95_95_108_108_95_98_97_99_107_101_110_100_95_95_102_114_97_109_101_111_112_116_95_95_100_101_116_101_99_116_95_101_120_105_116_95_54_95_95_91_50_93_95_48_6_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		f_108_108_95_98_97_99_107_101_110_100_95_95_102_114_97_109_101_111_112_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_108_108_95_98_97_99_107_101_110_100_95_95_102_114_97_109_101_111_112_116_95_95_98_108_111_99_107_95_101_110_116_114_121_95_101_120_105_116_95_95_95_95_108_108_95_98_97_99_107_101_110_100_95_95_102_114_97_109_101_111_112_116_95_95_110_111_110_100_101_116_95_101_110_116_114_121_95_105_110_102_111_95_95_97_114_105_116_121_48_95_95_108_108_95_98_97_99_107_101_110_100_95_95_102_114_97_109_101_111_112_116_95_95_110_111_110_100_101_116_95_101_120_105_116_95_105_110_102_111_95_95_97_114_105_116_121_48_95_95_95_95_95_95_108_108_95_98_97_99_107_101_110_100_95_95_102_114_97_109_101_111_112_116_95_95_100_101_116_101_99_116_95_101_120_105_116_95_54_95_95_91_50_93_95_48_6_0_i8);
MR_def_label(f_108_108_95_98_97_99_107_101_110_100_95_95_102_114_97_109_101_111_112_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_108_108_95_98_97_99_107_101_110_100_95_95_102_114_97_109_101_111_112_116_95_95_98_108_111_99_107_95_101_110_116_114_121_95_101_120_105_116_95_95_95_95_108_108_95_98_97_99_107_101_110_100_95_95_102_114_97_109_101_111_112_116_95_95_110_111_110_100_101_116_95_101_110_116_114_121_95_105_110_102_111_95_95_97_114_105_116_121_48_95_95_108_108_95_98_97_99_107_101_110_100_95_95_102_114_97_109_101_111_112_116_95_95_110_111_110_100_101_116_95_101_120_105_116_95_105_110_102_111_95_95_97_114_105_116_121_48_95_95_95_95_95_95_108_108_95_98_97_99_107_101_110_100_95_95_102_114_97_109_101_111_112_116_95_95_100_101_116_101_99_116_95_101_120_105_116_95_54_95_95_91_50_93_95_48_6_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(3),0,0)) {
		MR_GOTO_LAB(f_108_108_95_98_97_99_107_101_110_100_95_95_102_114_97_109_101_111_112_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_108_108_95_98_97_99_107_101_110_100_95_95_102_114_97_109_101_111_112_116_95_95_98_108_111_99_107_95_101_110_116_114_121_95_101_120_105_116_95_95_95_95_108_108_95_98_97_99_107_101_110_100_95_95_102_114_97_109_101_111_112_116_95_95_110_111_110_100_101_116_95_101_110_116_114_121_95_105_110_102_111_95_95_97_114_105_116_121_48_95_95_108_108_95_98_97_99_107_101_110_100_95_95_102_114_97_109_101_111_112_116_95_95_110_111_110_100_101_116_95_101_120_105_116_95_105_110_102_111_95_95_97_114_105_116_121_48_95_95_95_95_95_95_108_108_95_98_97_99_107_101_110_100_95_95_102_114_97_109_101_111_112_116_95_95_100_101_116_101_99_116_95_101_120_105_116_95_54_95_95_91_50_93_95_48_6_0_i10);
	}
	if (MR_LTAGS_TESTR(MR_sv(5),0,0)) {
		MR_GOTO_LAB(f_108_108_95_98_97_99_107_101_110_100_95_95_102_114_97_109_101_111_112_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_108_108_95_98_97_99_107_101_110_100_95_95_102_114_97_109_101_111_112_116_95_95_98_108_111_99_107_95_101_110_116_114_121_95_101_120_105_116_95_95_95_95_108_108_95_98_97_99_107_101_110_100_95_95_102_114_97_109_101_111_112_116_95_95_110_111_110_100_101_116_95_101_110_116_114_121_95_105_110_102_111_95_95_97_114_105_116_121_48_95_95_108_108_95_98_97_99_107_101_110_100_95_95_102_114_97_109_101_111_112_116_95_95_110_111_110_100_101_116_95_101_120_105_116_95_105_110_102_111_95_95_97_114_105_116_121_48_95_95_95_95_95_95_108_108_95_98_97_99_107_101_110_100_95_95_102_114_97_109_101_111_112_116_95_95_100_101_116_101_99_116_95_101_120_105_116_95_54_95_95_91_50_93_95_48_6_0_i1);
	}
	if (MR_LTAGS_TESTR(MR_sv(4),0,0)) {
		MR_GOTO_LAB(f_108_108_95_98_97_99_107_101_110_100_95_95_102_114_97_109_101_111_112_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_108_108_95_98_97_99_107_101_110_100_95_95_102_114_97_109_101_111_112_116_95_95_98_108_111_99_107_95_101_110_116_114_121_95_101_120_105_116_95_95_95_95_108_108_95_98_97_99_107_101_110_100_95_95_102_114_97_109_101_111_112_116_95_95_110_111_110_100_101_116_95_101_110_116_114_121_95_105_110_102_111_95_95_97_114_105_116_121_48_95_95_108_108_95_98_97_99_107_101_110_100_95_95_102_114_97_109_101_111_112_116_95_95_110_111_110_100_101_116_95_101_120_105_116_95_105_110_102_111_95_95_97_114_105_116_121_48_95_95_95_95_95_95_108_108_95_98_97_99_107_101_110_100_95_95_102_114_97_109_101_111_112_116_95_95_100_101_116_101_99_116_95_101_120_105_116_95_54_95_95_91_50_93_95_48_6_0_i1);
	}
	if (MR_RTAGS_TESTR(MR_sv(8),3,0)) {
		MR_GOTO_LAB(f_108_108_95_98_97_99_107_101_110_100_95_95_102_114_97_109_101_111_112_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_108_108_95_98_97_99_107_101_110_100_95_95_102_114_97_109_101_111_112_116_95_95_98_108_111_99_107_95_101_110_116_114_121_95_101_120_105_116_95_95_95_95_108_108_95_98_97_99_107_101_110_100_95_95_102_114_97_109_101_111_112_116_95_95_110_111_110_100_101_116_95_101_110_116_114_121_95_105_110_102_111_95_95_97_114_105_116_121_48_95_95_108_108_95_98_97_99_107_101_110_100_95_95_102_114_97_109_101_111_112_116_95_95_110_111_110_100_101_116_95_101_120_105_116_95_105_110_102_111_95_95_97_114_105_116_121_48_95_95_95_95_95_95_108_108_95_98_97_99_107_101_110_100_95_95_102_114_97_109_101_111_112_116_95_95_100_101_116_101_99_116_95_101_120_105_116_95_54_95_95_91_50_93_95_48_6_0_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_r5 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_sv(6);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(7);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_r1;
	MR_r4 = MR_sv(2);
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_r1 = MR_TRUE;
	MR_proceed();
	}
MR_def_label(f_108_108_95_98_97_99_107_101_110_100_95_95_102_114_97_109_101_111_112_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_108_108_95_98_97_99_107_101_110_100_95_95_102_114_97_109_101_111_112_116_95_95_98_108_111_99_107_95_101_110_116_114_121_95_101_120_105_116_95_95_95_95_108_108_95_98_97_99_107_101_110_100_95_95_102_114_97_109_101_111_112_116_95_95_110_111_110_100_101_116_95_101_110_116_114_121_95_105_110_102_111_95_95_97_114_105_116_121_48_95_95_108_108_95_98_97_99_107_101_110_100_95_95_102_114_97_109_101_111_112_116_95_95_110_111_110_100_101_116_95_101_120_105_116_95_105_110_102_111_95_95_97_114_105_116_121_48_95_95_95_95_95_95_108_108_95_98_97_99_107_101_110_100_95_95_102_114_97_109_101_111_112_116_95_95_100_101_116_101_99_116_95_101_120_105_116_95_54_95_95_91_50_93_95_48_6_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(8),2)) {
		MR_GOTO_LAB(f_108_108_95_98_97_99_107_101_110_100_95_95_102_114_97_109_101_111_112_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_108_108_95_98_97_99_107_101_110_100_95_95_102_114_97_109_101_111_112_116_95_95_98_108_111_99_107_95_101_110_116_114_121_95_101_120_105_116_95_95_95_95_108_108_95_98_97_99_107_101_110_100_95_95_102_114_97_109_101_111_112_116_95_95_110_111_110_100_101_116_95_101_110_116_114_121_95_105_110_102_111_95_95_97_114_105_116_121_48_95_95_108_108_95_98_97_99_107_101_110_100_95_95_102_114_97_109_101_111_112_116_95_95_110_111_110_100_101_116_95_101_120_105_116_95_105_110_102_111_95_95_97_114_105_116_121_48_95_95_95_95_95_95_108_108_95_98_97_99_107_101_110_100_95_95_102_114_97_109_101_111_112_116_95_95_100_101_116_101_99_116_95_101_120_105_116_95_54_95_95_91_50_93_95_48_6_0_i16);
	}
	MR_r2 = MR_sv(1);
	MR_r3 = MR_r1;
	MR_r4 = MR_sv(2);
	MR_GOTO_LAB(f_108_108_95_98_97_99_107_101_110_100_95_95_102_114_97_109_101_111_112_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_108_108_95_98_97_99_107_101_110_100_95_95_102_114_97_109_101_111_112_116_95_95_98_108_111_99_107_95_101_110_116_114_121_95_101_120_105_116_95_95_95_95_108_108_95_98_97_99_107_101_110_100_95_95_102_114_97_109_101_111_112_116_95_95_110_111_110_100_101_116_95_101_110_116_114_121_95_105_110_102_111_95_95_97_114_105_116_121_48_95_95_108_108_95_98_97_99_107_101_110_100_95_95_102_114_97_109_101_111_112_116_95_95_110_111_110_100_101_116_95_101_120_105_116_95_105_110_102_111_95_95_97_114_105_116_121_48_95_95_95_95_95_95_108_108_95_98_97_99_107_101_110_100_95_95_102_114_97_109_101_111_112_116_95_95_100_101_116_101_99_116_95_101_120_105_116_95_54_95_95_91_50_93_95_48_6_0_i15);
MR_def_label(f_108_108_95_98_97_99_107_101_110_100_95_95_102_114_97_109_101_111_112_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_108_108_95_98_97_99_107_101_110_100_95_95_102_114_97_109_101_111_112_116_95_95_98_108_111_99_107_95_101_110_116_114_121_95_101_120_105_116_95_95_95_95_108_108_95_98_97_99_107_101_110_100_95_95_102_114_97_109_101_111_112_116_95_95_110_111_110_100_101_116_95_101_110_116_114_121_95_105_110_102_111_95_95_97_114_105_116_121_48_95_95_108_108_95_98_97_99_107_101_110_100_95_95_102_114_97_109_101_111_112_116_95_95_110_111_110_100_101_116_95_101_120_105_116_95_105_110_102_111_95_95_97_114_105_116_121_48_95_95_95_95_95_95_108_108_95_98_97_99_107_101_110_100_95_95_102_114_97_109_101_111_112_116_95_95_100_101_116_101_99_116_95_101_120_105_116_95_54_95_95_91_50_93_95_48_6_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(8),1)) {
		MR_GOTO_LAB(f_108_108_95_98_97_99_107_101_110_100_95_95_102_114_97_109_101_111_112_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_108_108_95_98_97_99_107_101_110_100_95_95_102_114_97_109_101_111_112_116_95_95_98_108_111_99_107_95_101_110_116_114_121_95_101_120_105_116_95_95_95_95_108_108_95_98_97_99_107_101_110_100_95_95_102_114_97_109_101_111_112_116_95_95_110_111_110_100_101_116_95_101_110_116_114_121_95_105_110_102_111_95_95_97_114_105_116_121_48_95_95_108_108_95_98_97_99_107_101_110_100_95_95_102_114_97_109_101_111_112_116_95_95_110_111_110_100_101_116_95_101_120_105_116_95_105_110_102_111_95_95_97_114_105_116_121_48_95_95_95_95_95_95_108_108_95_98_97_99_107_101_110_100_95_95_102_114_97_109_101_111_112_116_95_95_100_101_116_101_99_116_95_101_120_105_116_95_54_95_95_91_50_93_95_48_6_0_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(1, MR_sv(8), 0);
	if (MR_PTAG_TESTR(MR_tempr1,1)) {
		MR_GOTO_LAB(f_108_108_95_98_97_99_107_101_110_100_95_95_102_114_97_109_101_111_112_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_108_108_95_98_97_99_107_101_110_100_95_95_102_114_97_109_101_111_112_116_95_95_98_108_111_99_107_95_101_110_116_114_121_95_101_120_105_116_95_95_95_95_108_108_95_98_97_99_107_101_110_100_95_95_102_114_97_109_101_111_112_116_95_95_110_111_110_100_101_116_95_101_110_116_114_121_95_105_110_102_111_95_95_97_114_105_116_121_48_95_95_108_108_95_98_97_99_107_101_110_100_95_95_102_114_97_109_101_111_112_116_95_95_110_111_110_100_101_116_95_101_120_105_116_95_105_110_102_111_95_95_97_114_105_116_121_48_95_95_95_95_95_95_108_108_95_98_97_99_107_101_110_100_95_95_102_114_97_109_101_111_112_116_95_95_100_101_116_101_99_116_95_101_120_105_116_95_54_95_95_91_50_93_95_48_6_0_i1);
	}
	MR_r2 = MR_sv(1);
	MR_r3 = MR_r1;
	MR_r4 = MR_sv(2);
	}
MR_def_label(f_108_108_95_98_97_99_107_101_110_100_95_95_102_114_97_109_101_111_112_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_108_108_95_98_97_99_107_101_110_100_95_95_102_114_97_109_101_111_112_116_95_95_98_108_111_99_107_95_101_110_116_114_121_95_101_120_105_116_95_95_95_95_108_108_95_98_97_99_107_101_110_100_95_95_102_114_97_109_101_111_112_116_95_95_110_111_110_100_101_116_95_101_110_116_114_121_95_105_110_102_111_95_95_97_114_105_116_121_48_95_95_108_108_95_98_97_99_107_101_110_100_95_95_102_114_97_109_101_111_112_116_95_95_110_111_110_100_101_116_95_101_120_105_116_95_105_110_102_111_95_95_97_114_105_116_121_48_95_95_95_95_95_95_108_108_95_98_97_99_107_101_110_100_95_95_102_114_97_109_101_111_112_116_95_95_100_101_116_101_99_116_95_101_120_105_116_95_54_95_95_91_50_93_95_48_6_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_sv(5),0,0)) {
		MR_GOTO_LAB(f_108_108_95_98_97_99_107_101_110_100_95_95_102_114_97_109_101_111_112_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_108_108_95_98_97_99_107_101_110_100_95_95_102_114_97_109_101_111_112_116_95_95_98_108_111_99_107_95_101_110_116_114_121_95_101_120_105_116_95_95_95_95_108_108_95_98_97_99_107_101_110_100_95_95_102_114_97_109_101_111_112_116_95_95_110_111_110_100_101_116_95_101_110_116_114_121_95_105_110_102_111_95_95_97_114_105_116_121_48_95_95_108_108_95_98_97_99_107_101_110_100_95_95_102_114_97_109_101_111_112_116_95_95_110_111_110_100_101_116_95_101_120_105_116_95_105_110_102_111_95_95_97_114_105_116_121_48_95_95_95_95_95_95_108_108_95_98_97_99_107_101_110_100_95_95_102_114_97_109_101_111_112_116_95_95_100_101_116_101_99_116_95_101_120_105_116_95_54_95_95_91_50_93_95_48_6_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tempr3 = MR_sv(5);
	MR_tempr1 = MR_tfield(1, MR_tempr3, 1);
	if (MR_LTAGS_TESTR(MR_tempr1,0,0)) {
		MR_GOTO_LAB(f_108_108_95_98_97_99_107_101_110_100_95_95_102_114_97_109_101_111_112_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_108_108_95_98_97_99_107_101_110_100_95_95_102_114_97_109_101_111_112_116_95_95_98_108_111_99_107_95_101_110_116_114_121_95_101_120_105_116_95_95_95_95_108_108_95_98_97_99_107_101_110_100_95_95_102_114_97_109_101_111_112_116_95_95_110_111_110_100_101_116_95_101_110_116_114_121_95_105_110_102_111_95_95_97_114_105_116_121_48_95_95_108_108_95_98_97_99_107_101_110_100_95_95_102_114_97_109_101_111_112_116_95_95_110_111_110_100_101_116_95_101_120_105_116_95_105_110_102_111_95_95_97_114_105_116_121_48_95_95_95_95_95_95_108_108_95_98_97_99_107_101_110_100_95_95_102_114_97_109_101_111_112_116_95_95_100_101_116_101_99_116_95_101_120_105_116_95_54_95_95_91_50_93_95_48_6_0_i1);
	}
	if (MR_LTAGS_TEST(MR_sv(4),0,0)) {
		MR_GOTO_LAB(f_108_108_95_98_97_99_107_101_110_100_95_95_102_114_97_109_101_111_112_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_108_108_95_98_97_99_107_101_110_100_95_95_102_114_97_109_101_111_112_116_95_95_98_108_111_99_107_95_101_110_116_114_121_95_101_120_105_116_95_95_95_95_108_108_95_98_97_99_107_101_110_100_95_95_102_114_97_109_101_111_112_116_95_95_110_111_110_100_101_116_95_101_110_116_114_121_95_105_110_102_111_95_95_97_114_105_116_121_48_95_95_108_108_95_98_97_99_107_101_110_100_95_95_102_114_97_109_101_111_112_116_95_95_110_111_110_100_101_116_95_101_120_105_116_95_105_110_102_111_95_95_97_114_105_116_121_48_95_95_95_95_95_95_108_108_95_98_97_99_107_101_110_100_95_95_102_114_97_109_101_111_112_116_95_95_100_101_116_101_99_116_95_101_120_105_116_95_54_95_95_91_50_93_95_48_6_0_i1);
	}
	MR_tempr4 = MR_sv(4);
	MR_tempr1 = MR_tfield(1, MR_tempr4, 1);
	if (MR_LTAGS_TESTR(MR_tempr1,0,0)) {
		MR_GOTO_LAB(f_108_108_95_98_97_99_107_101_110_100_95_95_102_114_97_109_101_111_112_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_108_108_95_98_97_99_107_101_110_100_95_95_102_114_97_109_101_111_112_116_95_95_98_108_111_99_107_95_101_110_116_114_121_95_101_120_105_116_95_95_95_95_108_108_95_98_97_99_107_101_110_100_95_95_102_114_97_109_101_111_112_116_95_95_110_111_110_100_101_116_95_101_110_116_114_121_95_105_110_102_111_95_95_97_114_105_116_121_48_95_95_108_108_95_98_97_99_107_101_110_100_95_95_102_114_97_109_101_111_112_116_95_95_110_111_110_100_101_116_95_101_120_105_116_95_105_110_102_111_95_95_97_114_105_116_121_48_95_95_95_95_95_95_108_108_95_98_97_99_107_101_110_100_95_95_102_114_97_109_101_111_112_116_95_95_100_101_116_101_99_116_95_101_120_105_116_95_54_95_95_91_50_93_95_48_6_0_i1);
	}
	MR_tempr5 = MR_sv(3);
	MR_tempr1 = MR_tfield(1, MR_tempr5, 1);
	if (MR_LTAGS_TESTR(MR_tempr1,0,0)) {
		MR_GOTO_LAB(f_108_108_95_98_97_99_107_101_110_100_95_95_102_114_97_109_101_111_112_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_108_108_95_98_97_99_107_101_110_100_95_95_102_114_97_109_101_111_112_116_95_95_98_108_111_99_107_95_101_110_116_114_121_95_101_120_105_116_95_95_95_95_108_108_95_98_97_99_107_101_110_100_95_95_102_114_97_109_101_111_112_116_95_95_110_111_110_100_101_116_95_101_110_116_114_121_95_105_110_102_111_95_95_97_114_105_116_121_48_95_95_108_108_95_98_97_99_107_101_110_100_95_95_102_114_97_109_101_111_112_116_95_95_110_111_110_100_101_116_95_101_120_105_116_95_105_110_102_111_95_95_97_114_105_116_121_48_95_95_95_95_95_95_108_108_95_98_97_99_107_101_110_100_95_95_102_114_97_109_101_111_112_116_95_95_100_101_116_101_99_116_95_101_120_105_116_95_54_95_95_91_50_93_95_48_6_0_i1);
	}
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 5);
	MR_r5 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_tfield(1, MR_tempr5, 0);
	MR_tfield(1, MR_tempr2, 1) = MR_tfield(1, MR_tempr4, 0);
	MR_tfield(1, MR_tempr2, 2) = MR_tfield(1, MR_tempr3, 0);
	MR_tfield(1, MR_tempr2, 3) = MR_sv(6);
	MR_tfield(1, MR_tempr2, 4) = MR_sv(7);
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_r1 = MR_TRUE;
	MR_proceed();
	}
MR_def_label(f_108_108_95_98_97_99_107_101_110_100_95_95_102_114_97_109_101_111_112_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_108_108_95_98_97_99_107_101_110_100_95_95_102_114_97_109_101_111_112_116_95_95_98_108_111_99_107_95_101_110_116_114_121_95_101_120_105_116_95_95_95_95_108_108_95_98_97_99_107_101_110_100_95_95_102_114_97_109_101_111_112_116_95_95_110_111_110_100_101_116_95_101_110_116_114_121_95_105_110_102_111_95_95_97_114_105_116_121_48_95_95_108_108_95_98_97_99_107_101_110_100_95_95_102_114_97_109_101_111_112_116_95_95_110_111_110_100_101_116_95_101_120_105_116_95_105_110_102_111_95_95_97_114_105_116_121_48_95_95_95_95_95_95_108_108_95_98_97_99_107_101_110_100_95_95_102_114_97_109_101_111_112_116_95_95_100_101_116_101_99_116_95_101_120_105_116_95_54_95_95_91_50_93_95_48_6_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

static void mercury__ll_backend__frameopt_maybe_bunch_0(void)
{
	ll_backend__frameopt_module0();
	ll_backend__frameopt_module1();
	ll_backend__frameopt_module2();
	ll_backend__frameopt_module3();
	ll_backend__frameopt_module4();
	ll_backend__frameopt_module5();
	ll_backend__frameopt_module6();
	ll_backend__frameopt_module7();
	ll_backend__frameopt_module8();
	ll_backend__frameopt_module9();
	ll_backend__frameopt_module10();
	ll_backend__frameopt_module11();
	ll_backend__frameopt_module12();
	ll_backend__frameopt_module13();
	ll_backend__frameopt_module14();
	ll_backend__frameopt_module15();
	ll_backend__frameopt_module16();
	ll_backend__frameopt_module17();
	ll_backend__frameopt_module18();
	ll_backend__frameopt_module19();
	ll_backend__frameopt_module20();
	ll_backend__frameopt_module21();
	ll_backend__frameopt_module22();
	ll_backend__frameopt_module23();
	ll_backend__frameopt_module24();
	ll_backend__frameopt_module25();
	ll_backend__frameopt_module26();
	ll_backend__frameopt_module27();
	ll_backend__frameopt_module28();
	ll_backend__frameopt_module29();
	ll_backend__frameopt_module30();
	ll_backend__frameopt_module31();
	ll_backend__frameopt_module32();
	ll_backend__frameopt_module33();
	ll_backend__frameopt_module34();
	ll_backend__frameopt_module35();
	ll_backend__frameopt_module36();
	ll_backend__frameopt_module37();
	ll_backend__frameopt_module38();
	ll_backend__frameopt_module39();
}

static void mercury__ll_backend__frameopt_maybe_bunch_1(void)
{
	ll_backend__frameopt_module40();
	ll_backend__frameopt_module41();
	ll_backend__frameopt_module42();
	ll_backend__frameopt_module43();
	ll_backend__frameopt_module44();
	ll_backend__frameopt_module45();
	ll_backend__frameopt_module46();
	ll_backend__frameopt_module47();
	ll_backend__frameopt_module48();
	ll_backend__frameopt_module49();
	ll_backend__frameopt_module50();
	ll_backend__frameopt_module51();
	ll_backend__frameopt_module52();
	ll_backend__frameopt_module53();
	ll_backend__frameopt_module54();
	ll_backend__frameopt_module55();
	ll_backend__frameopt_module56();
	ll_backend__frameopt_module57();
	ll_backend__frameopt_module58();
	ll_backend__frameopt_module59();
	ll_backend__frameopt_module60();
	ll_backend__frameopt_module61();
	ll_backend__frameopt_module62();
	ll_backend__frameopt_module63();
	ll_backend__frameopt_module64();
	ll_backend__frameopt_module65();
	ll_backend__frameopt_module66();
	ll_backend__frameopt_module67();
	ll_backend__frameopt_module68();
	ll_backend__frameopt_module69();
	ll_backend__frameopt_module70();
	ll_backend__frameopt_module71();
	ll_backend__frameopt_module72();
	ll_backend__frameopt_module73();
	ll_backend__frameopt_module74();
	ll_backend__frameopt_module75();
	ll_backend__frameopt_module76();
	ll_backend__frameopt_module77();
	ll_backend__frameopt_module78();
	ll_backend__frameopt_module79();
}

static void mercury__ll_backend__frameopt_maybe_bunch_2(void)
{
	ll_backend__frameopt_module80();
	ll_backend__frameopt_module81();
	ll_backend__frameopt_module82();
	ll_backend__frameopt_module83();
	ll_backend__frameopt_module84();
	ll_backend__frameopt_module85();
	ll_backend__frameopt_module86();
	ll_backend__frameopt_module87();
	ll_backend__frameopt_module88();
	ll_backend__frameopt_module89();
	ll_backend__frameopt_module90();
	ll_backend__frameopt_module91();
	ll_backend__frameopt_module92();
	ll_backend__frameopt_module93();
	ll_backend__frameopt_module94();
	ll_backend__frameopt_module95();
	ll_backend__frameopt_module96();
	ll_backend__frameopt_module97();
	ll_backend__frameopt_module98();
	ll_backend__frameopt_module99();
	ll_backend__frameopt_module100();
	ll_backend__frameopt_module101();
	ll_backend__frameopt_module102();
	ll_backend__frameopt_module103();
	ll_backend__frameopt_module104();
	ll_backend__frameopt_module105();
	ll_backend__frameopt_module106();
	ll_backend__frameopt_module107();
	ll_backend__frameopt_module108();
	ll_backend__frameopt_module109();
	ll_backend__frameopt_module110();
	ll_backend__frameopt_module111();
}

/* suppress gcc -Wmissing-decls warnings */
void mercury__ll_backend__frameopt__init(void);
void mercury__ll_backend__frameopt__init_type_tables(void);
void mercury__ll_backend__frameopt__init_debugger(void);
#ifdef MR_DEEP_PROFILING
void mercury__ll_backend__frameopt__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp);
#endif
#ifdef MR_RECORD_TERM_SIZES
void mercury__ll_backend__frameopt__init_complexity_procs(void);
#endif
#ifdef MR_THREADSCOPE
void mercury__ll_backend__frameopt__init_threadscope_string_table(void);
#endif

void mercury__ll_backend__frameopt__init(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	mercury__ll_backend__frameopt_maybe_bunch_0();
	mercury__ll_backend__frameopt_maybe_bunch_1();
	mercury__ll_backend__frameopt_maybe_bunch_2();
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_ll_backend__frameopt__type_ctor_info_block_needs_frame_0,
		ll_backend__frameopt__block_needs_frame_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_ll_backend__frameopt__type_ctor_info_block_type_2,
		ll_backend__frameopt__block_type_2_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_ll_backend__frameopt__type_ctor_info_can_transform_0,
		ll_backend__frameopt__can_transform_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_ll_backend__frameopt__type_ctor_info_det_entry_info_0,
		ll_backend__frameopt__det_entry_info_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_ll_backend__frameopt__type_ctor_info_det_exit_info_0,
		ll_backend__frameopt__det_exit_info_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_ll_backend__frameopt__type_ctor_info_det_frame_block_map_0,
		ll_backend__frameopt__det_frame_block_map_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_ll_backend__frameopt__type_ctor_info_exit_par_map_0,
		ll_backend__frameopt__exit_par_map_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_ll_backend__frameopt__type_ctor_info_frame_block_info_2,
		ll_backend__frameopt__frame_block_info_2_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_ll_backend__frameopt__type_ctor_info_frame_block_map_2,
		ll_backend__frameopt__frame_block_map_2_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_ll_backend__frameopt__type_ctor_info_maybe_dummy_0,
		ll_backend__frameopt__maybe_dummy_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_ll_backend__frameopt__type_ctor_info_nondet_entry_info_0,
		ll_backend__frameopt__nondet_entry_info_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_ll_backend__frameopt__type_ctor_info_nondet_exit_info_0,
		ll_backend__frameopt__nondet_exit_info_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_ll_backend__frameopt__type_ctor_info_ord_needs_frame_0,
		ll_backend__frameopt__ord_needs_frame_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_ll_backend__frameopt__type_ctor_info_pre_exit_dummy_label_map_0,
		ll_backend__frameopt__pre_exit_dummy_label_map_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_ll_backend__frameopt__type_ctor_info_pred_map_0,
		ll_backend__frameopt__pred_map_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_ll_backend__frameopt__type_ctor_info_prop_queue_0,
		ll_backend__frameopt__prop_queue_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_ll_backend__frameopt__type_ctor_info_rev_map_0,
		ll_backend__frameopt__rev_map_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_ll_backend__frameopt__type_ctor_info_setup_par_map_0,
		ll_backend__frameopt__setup_par_map_0_0);
#ifndef MR_STATIC_CODE_ADDRESSES
		MR_field(MR_mktag(0), mercury_data_base_typeclass_info_ll_backend__frameopt__block_entry_exit__arity2__ll_backend__frameopt__nondet_entry_info__arity0__ll_backend__frameopt__nondet_exit_info__arity0__, 5) =
			MR_ENTRY_AP(ll_backend__frameopt__ClassMethod_for_ll_backend__frameopt__block_entry_exit____ll_backend__frameopt__nondet_entry_info__arity0__ll_backend__frameopt__nondet_exit_info__arity0______ll_backend__frameopt__detect_entry_4_4_0);
		MR_field(MR_mktag(0), mercury_data_base_typeclass_info_ll_backend__frameopt__block_entry_exit__arity2__ll_backend__frameopt__nondet_entry_info__arity0__ll_backend__frameopt__nondet_exit_info__arity0__, 6) =
			MR_ENTRY_AP(ll_backend__frameopt__ClassMethod_for_ll_backend__frameopt__block_entry_exit____ll_backend__frameopt__nondet_entry_info__arity0__ll_backend__frameopt__nondet_exit_info__arity0______ll_backend__frameopt__detect_exit_6_6_0);
		MR_field(MR_mktag(0), mercury_data_base_typeclass_info_ll_backend__frameopt__block_entry_exit__arity2__ll_backend__frameopt__nondet_entry_info__arity0__ll_backend__frameopt__nondet_exit_info__arity0__, 7) =
			MR_ENTRY_AP(fn__ll_backend__frameopt__ClassMethod_for_ll_backend__frameopt__block_entry_exit____ll_backend__frameopt__nondet_entry_info__arity0__ll_backend__frameopt__nondet_exit_info__arity0______ll_backend__frameopt__late_setup_code_1_1_0);
		MR_field(MR_mktag(0), mercury_data_base_typeclass_info_ll_backend__frameopt__block_entry_exit__arity2__ll_backend__frameopt__nondet_entry_info__arity0__ll_backend__frameopt__nondet_exit_info__arity0__, 8) =
			MR_ENTRY_AP(fn__ll_backend__frameopt__ClassMethod_for_ll_backend__frameopt__block_entry_exit____ll_backend__frameopt__nondet_entry_info__arity0__ll_backend__frameopt__nondet_exit_info__arity0______ll_backend__frameopt__non_teardown_exit_code_1_1_0);
		MR_field(MR_mktag(0), mercury_data_base_typeclass_info_ll_backend__frameopt__block_entry_exit__arity2__ll_backend__frameopt__nondet_entry_info__arity0__ll_backend__frameopt__nondet_exit_info__arity0__, 9) =
			MR_ENTRY_AP(fn__ll_backend__frameopt__ClassMethod_for_ll_backend__frameopt__block_entry_exit____ll_backend__frameopt__nondet_entry_info__arity0__ll_backend__frameopt__nondet_exit_info__arity0______ll_backend__frameopt__describe_entry_1_1_0);
		MR_field(MR_mktag(0), mercury_data_base_typeclass_info_ll_backend__frameopt__block_entry_exit__arity2__ll_backend__frameopt__nondet_entry_info__arity0__ll_backend__frameopt__nondet_exit_info__arity0__, 10) =
			MR_ENTRY_AP(fn__ll_backend__frameopt__ClassMethod_for_ll_backend__frameopt__block_entry_exit____ll_backend__frameopt__nondet_entry_info__arity0__ll_backend__frameopt__nondet_exit_info__arity0______ll_backend__frameopt__describe_exit_2_2_0);
#endif /* MR_STATIC_CODE_ADDRESSES */
#ifndef MR_STATIC_CODE_ADDRESSES
		MR_field(MR_mktag(0), mercury_data_base_typeclass_info_ll_backend__frameopt__block_entry_exit__arity2__ll_backend__frameopt__det_entry_info__arity0__ll_backend__frameopt__det_exit_info__arity0__, 5) =
			MR_ENTRY_AP(ll_backend__frameopt__ClassMethod_for_ll_backend__frameopt__block_entry_exit____ll_backend__frameopt__det_entry_info__arity0__ll_backend__frameopt__det_exit_info__arity0______ll_backend__frameopt__detect_entry_4_4_0);
		MR_field(MR_mktag(0), mercury_data_base_typeclass_info_ll_backend__frameopt__block_entry_exit__arity2__ll_backend__frameopt__det_entry_info__arity0__ll_backend__frameopt__det_exit_info__arity0__, 6) =
			MR_ENTRY_AP(ll_backend__frameopt__ClassMethod_for_ll_backend__frameopt__block_entry_exit____ll_backend__frameopt__det_entry_info__arity0__ll_backend__frameopt__det_exit_info__arity0______ll_backend__frameopt__detect_exit_6_6_0);
		MR_field(MR_mktag(0), mercury_data_base_typeclass_info_ll_backend__frameopt__block_entry_exit__arity2__ll_backend__frameopt__det_entry_info__arity0__ll_backend__frameopt__det_exit_info__arity0__, 7) =
			MR_ENTRY_AP(fn__ll_backend__frameopt__ClassMethod_for_ll_backend__frameopt__block_entry_exit____ll_backend__frameopt__det_entry_info__arity0__ll_backend__frameopt__det_exit_info__arity0______ll_backend__frameopt__late_setup_code_1_1_0);
		MR_field(MR_mktag(0), mercury_data_base_typeclass_info_ll_backend__frameopt__block_entry_exit__arity2__ll_backend__frameopt__det_entry_info__arity0__ll_backend__frameopt__det_exit_info__arity0__, 8) =
			MR_ENTRY_AP(fn__ll_backend__frameopt__ClassMethod_for_ll_backend__frameopt__block_entry_exit____ll_backend__frameopt__det_entry_info__arity0__ll_backend__frameopt__det_exit_info__arity0______ll_backend__frameopt__non_teardown_exit_code_1_1_0);
		MR_field(MR_mktag(0), mercury_data_base_typeclass_info_ll_backend__frameopt__block_entry_exit__arity2__ll_backend__frameopt__det_entry_info__arity0__ll_backend__frameopt__det_exit_info__arity0__, 9) =
			MR_ENTRY_AP(fn__ll_backend__frameopt__ClassMethod_for_ll_backend__frameopt__block_entry_exit____ll_backend__frameopt__det_entry_info__arity0__ll_backend__frameopt__det_exit_info__arity0______ll_backend__frameopt__describe_entry_1_1_0);
		MR_field(MR_mktag(0), mercury_data_base_typeclass_info_ll_backend__frameopt__block_entry_exit__arity2__ll_backend__frameopt__det_entry_info__arity0__ll_backend__frameopt__det_exit_info__arity0__, 10) =
			MR_ENTRY_AP(fn__ll_backend__frameopt__ClassMethod_for_ll_backend__frameopt__block_entry_exit____ll_backend__frameopt__det_entry_info__arity0__ll_backend__frameopt__det_exit_info__arity0______ll_backend__frameopt__describe_exit_2_2_0);
#endif /* MR_STATIC_CODE_ADDRESSES */
	mercury__ll_backend__frameopt__init_debugger();
}

void mercury__ll_backend__frameopt__init_type_tables(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	{
		MR_register_type_ctor_info(
		&mercury_data_ll_backend__frameopt__type_ctor_info_block_needs_frame_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_ll_backend__frameopt__type_ctor_info_block_type_2);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_ll_backend__frameopt__type_ctor_info_can_transform_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_ll_backend__frameopt__type_ctor_info_det_entry_info_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_ll_backend__frameopt__type_ctor_info_det_exit_info_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_ll_backend__frameopt__type_ctor_info_det_frame_block_map_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_ll_backend__frameopt__type_ctor_info_exit_par_map_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_ll_backend__frameopt__type_ctor_info_frame_block_info_2);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_ll_backend__frameopt__type_ctor_info_frame_block_map_2);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_ll_backend__frameopt__type_ctor_info_maybe_dummy_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_ll_backend__frameopt__type_ctor_info_nondet_entry_info_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_ll_backend__frameopt__type_ctor_info_nondet_exit_info_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_ll_backend__frameopt__type_ctor_info_ord_needs_frame_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_ll_backend__frameopt__type_ctor_info_pre_exit_dummy_label_map_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_ll_backend__frameopt__type_ctor_info_pred_map_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_ll_backend__frameopt__type_ctor_info_prop_queue_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_ll_backend__frameopt__type_ctor_info_rev_map_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_ll_backend__frameopt__type_ctor_info_setup_par_map_0);
	}
	{
		MR_register_type_class_decl(
		&mercury_data_ll_backend__frameopt__type_class_decl_block_entry_exit_2);
	}
}


void mercury__ll_backend__frameopt__init_debugger(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}

#ifdef MR_DEEP_PROFILING

void mercury__ll_backend__frameopt__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp)
{
	MR_write_out_module_proc_reps_start(procrep_fp, &mercury_data__module_layout__ll_backend__frameopt);
	MR_write_out_module_proc_reps_end(procrep_fp);
}

#endif

#ifdef MR_RECORD_TERM_SIZES

void mercury__ll_backend__frameopt__init_complexity_procs(void)
{
}

#endif

#ifdef MR_THREADSCOPE

void mercury__ll_backend__frameopt__init_threadscope_string_table(void)
{
}

#endif

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;
