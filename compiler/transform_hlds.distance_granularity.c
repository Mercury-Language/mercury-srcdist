/*
** Automatically generated from `distance_granularity.m'
** by the Mercury compiler,
** version rotd-2007-08-01, configured for i686-pc-linux-gnu.
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
INIT mercury__transform_hlds__distance_granularity__init
ENDINIT
*/

#define MR_ALLOW_RESET
#include "mercury_imp.h"
#line 530 "../library/io.int"
#include "io.mh"

#line 27 "transform_hlds.distance_granularity.c"
#line 538 "../library/io.int"
#include "string.mh"

#line 31 "transform_hlds.distance_granularity.c"
#line 17 "../mdbcomp/mdbcomp.rtti_access.int2"
#include "mdbcomp.rtti_access.mh"

#line 35 "transform_hlds.distance_granularity.c"
#line 30 "../library/array.int2"
#include "array.mh"

#line 39 "transform_hlds.distance_granularity.c"
#line 29 "../library/bitmap.int2"
#include "bitmap.mh"

#line 43 "transform_hlds.distance_granularity.c"
#line 28 "../library/time.int2"
#include "time.mh"

#line 47 "transform_hlds.distance_granularity.c"
#line 48 "transform_hlds.distance_granularity.c"
#include "transform_hlds.distance_granularity.mh"

#line 51 "transform_hlds.distance_granularity.c"
#line 52 "transform_hlds.distance_granularity.c"
#ifndef TRANSFORM_HLDS__DISTANCE_GRANULARITY_DECL_GUARD
#define TRANSFORM_HLDS__DISTANCE_GRANULARITY_DECL_GUARD

#line 56 "transform_hlds.distance_granularity.c"
#line 57 "transform_hlds.distance_granularity.c"

#endif
#line 60 "transform_hlds.distance_granularity.c"

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
	MR_String f1;
};
MR_STATIC_LINKAGE const struct mercury_type_1 mercury_common_1[];

struct mercury_type_2 {
	MR_Word * f1;
	MR_String f2;
};
MR_STATIC_LINKAGE const struct mercury_type_2 mercury_common_2[];

struct mercury_type_3 {
	MR_Word * f1;
	MR_Integer f2;
};
MR_STATIC_LINKAGE const struct mercury_type_3 mercury_common_3[];

struct mercury_type_4 {
	MR_Integer f1;
	MR_Integer f2;
	MR_Word * f3;
};
MR_STATIC_LINKAGE const struct mercury_type_4 mercury_common_4[];

struct mercury_type_5 {
	MR_Integer f1;
};
MR_STATIC_LINKAGE const struct mercury_type_5 mercury_common_5[];
MR_decl_label8(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_100_105_115_116_97_110_99_101_95_103_114_97_110_117_108_97_114_105_116_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_112_112_108_121_95_100_103_95_116_111_95_116_104_101_110_50_95_95_91_53_93_95_48_10_0, 57,5,6,7,11,12,13,14)
MR_decl_label7(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_100_105_115_116_97_110_99_101_95_103_114_97_110_117_108_97_114_105_116_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_112_112_108_121_95_100_103_95_116_111_95_116_104_101_110_50_95_95_91_53_93_95_48_10_0, 15,16,17,18,19,8,2)
MR_decl_label8(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_100_105_115_116_97_110_99_101_95_103_114_97_110_117_108_97_114_105_116_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_112_112_108_121_95_100_103_95_116_111_95_116_104_101_110_95_95_91_51_93_95_48_8_0, 2,5,6,7,8,9,10,11)
MR_decl_label2(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_100_105_115_116_97_110_99_101_95_103_114_97_110_117_108_97_114_105_116_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_112_112_108_121_95_100_103_95_116_111_95_116_104_101_110_95_95_91_51_93_95_48_8_0, 12,3)
MR_decl_label5(transform_hlds__distance_granularity__apply_dg_to_conj_17_0, 18,4,5,7,3)
MR_decl_label4(transform_hlds__distance_granularity__apply_dg_to_disj_14_0, 12,4,5,3)
MR_decl_label8(transform_hlds__distance_granularity__apply_dg_to_else_8_0, 2,5,6,7,8,9,10,11)
MR_decl_label2(transform_hlds__distance_granularity__apply_dg_to_else_8_0, 12,3)
MR_decl_label8(transform_hlds__distance_granularity__apply_dg_to_else2_10_0, 63,5,6,7,11,12,13,14)
MR_decl_label8(transform_hlds__distance_granularity__apply_dg_to_else2_10_0, 15,16,17,18,19,20,21,22)
MR_decl_label8(transform_hlds__distance_granularity__apply_dg_to_else2_10_0, 23,24,25,26,27,28,29,30)
MR_decl_label4(transform_hlds__distance_granularity__apply_dg_to_else2_10_0, 10,8,2,35)
MR_decl_label8(transform_hlds__distance_granularity__apply_dg_to_goal_15_0, 53,6,8,9,54,11,13,15)
MR_decl_label8(transform_hlds__distance_granularity__apply_dg_to_goal_15_0, 16,55,18,56,20,57,22,58)
MR_decl_label7(transform_hlds__distance_granularity__apply_dg_to_goal_15_0, 24,59,26,27,28,60,30)
MR_decl_label8(transform_hlds__distance_granularity__apply_dg_to_plain_call_14_0, 8,9,10,11,12,13,14,15)
MR_decl_label4(transform_hlds__distance_granularity__apply_dg_to_plain_call_14_0, 16,7,4,2)
MR_decl_label8(transform_hlds__distance_granularity__apply_dg_to_preds_4_0, 41,4,5,6,7,8,9,10)
MR_decl_label8(transform_hlds__distance_granularity__apply_dg_to_preds_4_0, 11,13,14,15,16,17,18,19)
MR_decl_label8(transform_hlds__distance_granularity__apply_dg_to_preds_4_0, 20,21,22,23,24,25,26,27)
MR_decl_label4(transform_hlds__distance_granularity__apply_dg_to_preds_4_0, 28,29,30,3)
MR_decl_label8(transform_hlds__distance_granularity__apply_dg_to_procs_11_0, 30,4,5,7,8,9,11,12)
MR_decl_label4(transform_hlds__distance_granularity__apply_dg_to_procs_11_0, 13,14,15,3)
MR_decl_label3(transform_hlds__distance_granularity__apply_dg_to_switch_14_0, 11,4,3)
MR_decl_label1(transform_hlds__distance_granularity__control_distance_granularity_3_0, 2)
MR_decl_label8(transform_hlds__distance_granularity__create_if_then_else_goal_10_0, 2,3,4,6,8,9,10,11)
MR_decl_label3(transform_hlds__distance_granularity__create_if_then_else_goal_10_0, 12,13,14)
MR_decl_label8(transform_hlds__distance_granularity__update_original_predicate_goal_9_0, 46,8,9,47,11,14,13,48)
MR_decl_label8(transform_hlds__distance_granularity__update_original_predicate_goal_9_0, 16,49,18,50,20,51,22,52)
MR_decl_label5(transform_hlds__distance_granularity__update_original_predicate_goal_9_0, 24,25,26,53,28)
MR_decl_label4(transform_hlds__distance_granularity__update_original_predicate_goals_10_0, 12,4,5,3)
MR_decl_label8(transform_hlds__distance_granularity__update_original_predicate_plain_call_9_0, 5,6,7,8,9,10,11,12)
MR_decl_label5(transform_hlds__distance_granularity__update_original_predicate_plain_call_9_0, 13,14,15,4,2)
MR_decl_label8(transform_hlds__distance_granularity__update_original_predicate_procs_9_0, 17,4,5,6,7,8,9,10)
MR_decl_label1(transform_hlds__distance_granularity__update_original_predicate_procs_9_0, 3)
MR_decl_label3(transform_hlds__distance_granularity__update_original_predicate_switch_10_0, 11,4,3)
MR_decl_static(fn__transform_hlds__distance_granularity__this_file_0_0)
MR_decl_static(transform_hlds__distance_granularity__apply_dg_to_plain_call_14_0)
MR_decl_static(transform_hlds__distance_granularity__apply_dg_to_else2_10_0)
MR_decl_static(transform_hlds__distance_granularity__apply_dg_to_else_8_0)
MR_decl_static(transform_hlds__distance_granularity__create_if_then_else_goal_10_0)
MR_decl_static(transform_hlds__distance_granularity__apply_dg_to_goal_15_0)
MR_decl_static(transform_hlds__distance_granularity__apply_dg_to_conj_17_0)
MR_decl_static(transform_hlds__distance_granularity__apply_dg_to_disj_14_0)
MR_decl_static(transform_hlds__distance_granularity__apply_dg_to_switch_14_0)
MR_decl_static(transform_hlds__distance_granularity__apply_dg_to_procs_11_0)
MR_decl_static(transform_hlds__distance_granularity__update_original_predicate_plain_call_9_0)
MR_decl_static(transform_hlds__distance_granularity__update_original_predicate_goal_9_0)
MR_decl_static(transform_hlds__distance_granularity__update_original_predicate_goals_10_0)
MR_decl_static(transform_hlds__distance_granularity__update_original_predicate_switch_10_0)
MR_decl_static(transform_hlds__distance_granularity__update_original_predicate_procs_9_0)
MR_decl_static(transform_hlds__distance_granularity__apply_dg_to_preds_4_0)
MR_def_extern_entry(transform_hlds__distance_granularity__control_distance_granularity_3_0)
MR_decl_static(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_100_105_115_116_97_110_99_101_95_103_114_97_110_117_108_97_114_105_116_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_112_112_108_121_95_100_103_95_116_111_95_116_104_101_110_95_95_91_51_93_95_48_8_0)
MR_decl_static(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_100_105_115_116_97_110_99_101_95_103_114_97_110_117_108_97_114_105_116_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_112_112_108_121_95_100_103_95_116_111_95_116_104_101_110_50_95_95_91_53_93_95_48_10_0)

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
MR_TAG_COMMON(3,1,1),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(2,5,0),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(0,0,2),
MR_tbmkword(0, 0)
}
},
};

static const struct mercury_type_1 mercury_common_1[4] =
{
{
MR_string_const("int", 3)
},
{
MR_string_const("distance_granularity", 20)
},
{
MR_string_const("DistanceGranularityFor", 22)
},
{
MR_string_const("pred", 4)
},
};

static const struct mercury_type_2 mercury_common_2[1] =
{
{
MR_TAG_COMMON(0,1,0),
MR_string_const("-", 1)
},
};

static const struct mercury_type_3 mercury_common_3[1] =
{
{
MR_TAG_COMMON(1,2,0),
2
},
};

static const struct mercury_type_4 mercury_common_4[3] =
{
{
1,
1,
MR_tbmkword(0, 0)
},
{
0,
0,
MR_TAG_COMMON(1,0,3)
},
{
1,
0,
MR_tbmkword(0, 0)
},
};

static const struct mercury_type_5 mercury_common_5[2] =
{
{
1
},
{
0
},
};


MR_BEGIN_MODULE(transform_hlds__distance_granularity_module0)
	MR_init_entry1(fn__transform_hlds__distance_granularity__this_file_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__transform_hlds__distance_granularity__this_file_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("distance_granularity.m", 22);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__parse_tree__prog_type__int_type_0_0);
MR_decl_entry(hlds__hlds_pred__proc_info_create_var_from_type_5_0);
MR_decl_entry(hlds__hlds_pred__proc_info_get_argmodes_2_0);
MR_decl_entry(hlds__hlds_pred__proc_info_get_headvars_2_0);
MR_decl_entry(fn__parse_tree__prog_mode__in_mode_0_0);
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_mer_mode_0;
MR_decl_entry(list__append_3_1);
MR_decl_entry(hlds__hlds_pred__proc_info_set_argmodes_3_0);
MR_decl_entry(hlds__hlds_pred__proc_info_set_headvars_3_0);
MR_decl_entry(libs__compiler_util__unexpected_2_0);

MR_BEGIN_MODULE(transform_hlds__distance_granularity_module1)
	MR_init_entry1(transform_hlds__distance_granularity__apply_dg_to_plain_call_14_0);
	MR_init_label8(transform_hlds__distance_granularity__apply_dg_to_plain_call_14_0,8,9,10,11,12,13,14,15)
	MR_init_label4(transform_hlds__distance_granularity__apply_dg_to_plain_call_14_0,16,7,4,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__distance_granularity__apply_dg_to_plain_call_14_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,1)) {
		MR_GOTO_LAB(transform_hlds__distance_granularity__apply_dg_to_plain_call_14_0_i2);
	}
	if (MR_INT_NE(MR_r8,1)) {
		MR_GOTO_LAB(transform_hlds__distance_granularity__apply_dg_to_plain_call_14_0_i4);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_ctfield(1, MR_r1, 0);
	if ((MR_tempr1 != MR_r2)) {
		MR_GOTO_LAB(transform_hlds__distance_granularity__apply_dg_to_plain_call_14_0_i4);
	}
	MR_tempr2 = MR_ctfield(1, MR_r1, 1);
	if ((MR_tempr2 != MR_r5)) {
		MR_GOTO_LAB(transform_hlds__distance_granularity__apply_dg_to_plain_call_14_0_i4);
	}
	if (MR_LTAGS_TESTR(MR_r9,0,0)) {
		MR_GOTO_LAB(transform_hlds__distance_granularity__apply_dg_to_plain_call_14_0_i7);
	}
	MR_incr_sp(13);
	MR_sv(13) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r4;
	MR_sv(3) = MR_r5;
	MR_sv(4) = MR_ctfield(1, MR_r1, 2);
	MR_sv(5) = MR_ctfield(1, MR_r1, 3);
	MR_sv(6) = MR_ctfield(1, MR_r1, 4);
	MR_sv(7) = MR_r6;
	MR_sv(10) = MR_r7;
	}
	MR_np_call_localret_ent(fn__parse_tree__prog_type__int_type_0_0,
		transform_hlds__distance_granularity__apply_dg_to_plain_call_14_0_i8);
MR_def_label(transform_hlds__distance_granularity__apply_dg_to_plain_call_14_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_r3 = MR_sv(7);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_create_var_from_type_5_0,
		transform_hlds__distance_granularity__apply_dg_to_plain_call_14_0_i9);
MR_def_label(transform_hlds__distance_granularity__apply_dg_to_plain_call_14_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_sv(11), 1, (MR_Integer) 1);
	MR_tfield(1, MR_sv(11), 0) = MR_r1;
	MR_sv(7) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_sv(12) = MR_tempr1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_argmodes_2_0,
		transform_hlds__distance_granularity__apply_dg_to_plain_call_14_0_i10);
MR_def_label(transform_hlds__distance_granularity__apply_dg_to_plain_call_14_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_r1 = MR_sv(12);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_headvars_2_0,
		transform_hlds__distance_granularity__apply_dg_to_plain_call_14_0_i11);
MR_def_label(transform_hlds__distance_granularity__apply_dg_to_plain_call_14_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_r1;
	MR_np_call_localret_ent(fn__parse_tree__prog_mode__in_mode_0_0,
		transform_hlds__distance_granularity__apply_dg_to_plain_call_14_0_i12);
MR_def_label(transform_hlds__distance_granularity__apply_dg_to_plain_call_14_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_mode);
	MR_r2 = MR_sv(8);
	}
	MR_np_call_localret_ent(list__append_3_1,
		transform_hlds__distance_granularity__apply_dg_to_plain_call_14_0_i13);
MR_def_label(transform_hlds__distance_granularity__apply_dg_to_plain_call_14_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(7);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_sv(7) = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r2 = MR_sv(9);
	}
	MR_np_call_localret_ent(list__append_3_1,
		transform_hlds__distance_granularity__apply_dg_to_plain_call_14_0_i14);
MR_def_label(transform_hlds__distance_granularity__apply_dg_to_plain_call_14_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_sv(7) = MR_tempr1;
	MR_r2 = MR_sv(12);
	}
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_set_argmodes_3_0,
		transform_hlds__distance_granularity__apply_dg_to_plain_call_14_0_i15);
MR_def_label(transform_hlds__distance_granularity__apply_dg_to_plain_call_14_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_set_headvars_3_0,
		transform_hlds__distance_granularity__apply_dg_to_plain_call_14_0_i16);
MR_def_label(transform_hlds__distance_granularity__apply_dg_to_plain_call_14_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 6);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = MR_sv(3);
	MR_tfield(1, MR_tempr1, 2) = MR_sv(4);
	MR_tfield(1, MR_tempr1, 3) = MR_sv(5);
	MR_tfield(1, MR_tempr1, 4) = MR_sv(6);
	MR_tfield(1, MR_tempr1, 5) = MR_sv(2);
	MR_r5 = (MR_Integer) 1;
	MR_r2 = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r3 = MR_sv(10);
	MR_r4 = MR_sv(11);
	MR_decr_sp_and_return(13);
	}
MR_def_label(transform_hlds__distance_granularity__apply_dg_to_plain_call_14_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 6);
	MR_r2 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_r3;
	MR_tfield(1, MR_tempr1, 1) = MR_r5;
	MR_tfield(1, MR_tempr1, 2) = MR_ctfield(1, MR_r1, 2);
	MR_tfield(1, MR_tempr1, 3) = MR_ctfield(1, MR_r1, 3);
	MR_tfield(1, MR_tempr1, 4) = MR_ctfield(1, MR_r1, 4);
	MR_tfield(1, MR_tempr1, 5) = MR_r4;
	MR_r5 = (MR_Integer) 1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_r6;
	MR_r3 = MR_r7;
	MR_r4 = MR_r9;
	MR_proceed();
	}
MR_def_label(transform_hlds__distance_granularity__apply_dg_to_plain_call_14_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r5 = (MR_Integer) 0;
	MR_r2 = MR_r6;
	MR_r3 = MR_r7;
	MR_r4 = MR_r9;
	MR_proceed();
MR_def_label(transform_hlds__distance_granularity__apply_dg_to_plain_call_14_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("distance_granularity.m", 22);
	MR_r2 = (MR_Word) MR_string_const("apply_dg_to_plain_call", 22);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_goal__type_ctor_info_hlds_goal_0;
MR_decl_entry(list__length_2_0);
MR_decl_entry(list__index1_det_3_0);
MR_decl_entry(hlds__hlds_goal__make_int_const_construction_3_0);
MR_decl_entry(hlds__pred_table__lookup_builtin_pred_proc_id_8_0);
MR_decl_entry(f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_105_115_116_95_116_111_95_115_101_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_0);
MR_decl_entry(hlds__instmap__instmap_delta_from_assoc_list_2_0);
MR_decl_entry(hlds__hlds_goal__goal_info_get_context_2_0);
MR_decl_entry(hlds__hlds_goal__goal_info_init_6_0);
MR_decl_entry(hlds__hlds_goal__goal_info_get_instmap_delta_2_0);
MR_decl_entry(hlds__instmap__instmap_delta_insert_4_0);
MR_decl_entry(hlds__hlds_goal__goal_info_set_instmap_delta_3_0);
MR_decl_entry(list__replace_nth_det_4_0);
MR_decl_entry(list__det_split_list_4_0);

MR_BEGIN_MODULE(transform_hlds__distance_granularity_module2)
	MR_init_entry1(transform_hlds__distance_granularity__apply_dg_to_else2_10_0);
	MR_init_label8(transform_hlds__distance_granularity__apply_dg_to_else2_10_0,63,5,6,7,11,12,13,14)
	MR_init_label8(transform_hlds__distance_granularity__apply_dg_to_else2_10_0,15,16,17,18,19,20,21,22)
	MR_init_label8(transform_hlds__distance_granularity__apply_dg_to_else2_10_0,23,24,25,26,27,28,29,30)
	MR_init_label4(transform_hlds__distance_granularity__apply_dg_to_else2_10_0,10,8,2,35)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__distance_granularity__apply_dg_to_else2_10_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(21);
	MR_sv(21) = (MR_Word) MR_succip;
MR_def_label(transform_hlds__distance_granularity__apply_dg_to_else2_10_0,63)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,1)) {
		MR_GOTO_LAB(transform_hlds__distance_granularity__apply_dg_to_else2_10_0_i2);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(3, MR_r1, 1);
	if (MR_INT_NE(MR_tempr1,0)) {
		MR_GOTO_LAB(transform_hlds__distance_granularity__apply_dg_to_else2_10_0_i2);
	}
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_r5;
	MR_sv(5) = MR_r6;
	MR_sv(6) = MR_ctfield(3, MR_r1, 2);
	MR_sv(1) = MR_r1;
	MR_sv(17) = MR_r2;
	MR_sv(12) = MR_r7;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	MR_r2 = MR_sv(6);
	}
	MR_np_call_localret_ent(list__length_2_0,
		transform_hlds__distance_granularity__apply_dg_to_else2_10_0_i5);
MR_def_label(transform_hlds__distance_granularity__apply_dg_to_else2_10_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) MR_sv(17) <= (MR_Integer) MR_r1)) {
		MR_GOTO_LAB(transform_hlds__distance_granularity__apply_dg_to_else2_10_0_i6);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(17);
	MR_r3 = MR_sv(12);
	MR_decr_sp_and_return(21);
MR_def_label(transform_hlds__distance_granularity__apply_dg_to_else2_10_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(17);
	MR_np_call_localret_ent(list__index1_det_3_0,
		transform_hlds__distance_granularity__apply_dg_to_else2_10_0_i7);
MR_def_label(transform_hlds__distance_granularity__apply_dg_to_else2_10_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_ctfield(0, MR_r1, 0);
	if (MR_PTAG_TESTR(MR_tempr1,1)) {
		MR_GOTO_LAB(transform_hlds__distance_granularity__apply_dg_to_else2_10_0_i8);
	}
	MR_tempr2 = MR_ctfield(1, MR_tempr1, 0);
	if ((MR_tempr2 != MR_sv(3))) {
		MR_GOTO_LAB(transform_hlds__distance_granularity__apply_dg_to_else2_10_0_i10);
	}
	MR_tempr3 = MR_ctfield(1, MR_tempr1, 1);
	if ((MR_tempr3 != MR_sv(4))) {
		MR_GOTO_LAB(transform_hlds__distance_granularity__apply_dg_to_else2_10_0_i10);
	}
	MR_sv(7) = MR_ctfield(0, MR_r1, 1);
	MR_sv(1) = MR_tempr2;
	MR_sv(8) = MR_tempr3;
	MR_sv(9) = MR_ctfield(1, MR_tempr1, 2);
	MR_sv(10) = MR_ctfield(1, MR_tempr1, 3);
	MR_sv(11) = MR_ctfield(1, MR_tempr1, 5);
	}
	MR_np_call_localret_ent(fn__parse_tree__prog_type__int_type_0_0,
		transform_hlds__distance_granularity__apply_dg_to_else2_10_0_i11);
MR_def_label(transform_hlds__distance_granularity__apply_dg_to_else2_10_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_r3 = MR_sv(12);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_create_var_from_type_5_0,
		transform_hlds__distance_granularity__apply_dg_to_else2_10_0_i12);
MR_def_label(transform_hlds__distance_granularity__apply_dg_to_else2_10_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(12) = MR_r1;
	MR_sv(14) = MR_r2;
	MR_r2 = (MR_Integer) 1;
	MR_np_call_localret_ent(hlds__hlds_goal__make_int_const_construction_3_0,
		transform_hlds__distance_granularity__apply_dg_to_else2_10_0_i13);
MR_def_label(transform_hlds__distance_granularity__apply_dg_to_else2_10_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(13) = MR_r1;
	MR_np_call_localret_ent(fn__parse_tree__prog_type__int_type_0_0,
		transform_hlds__distance_granularity__apply_dg_to_else2_10_0_i14);
MR_def_label(transform_hlds__distance_granularity__apply_dg_to_else2_10_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_r3 = MR_sv(14);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_create_var_from_type_5_0,
		transform_hlds__distance_granularity__apply_dg_to_else2_10_0_i15);
MR_def_label(transform_hlds__distance_granularity__apply_dg_to_else2_10_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(14) = MR_r1;
	MR_sv(18) = MR_r2;
	MR_sv(15) = (MR_Word) MR_TAG_COMMON(0,1,0);
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(15);
	MR_r3 = (MR_Word) MR_string_const("minus", 5);
	MR_r4 = (MR_Integer) 1;
	MR_r5 = (MR_Integer) 2;
	MR_r6 = (MR_Word) MR_tbmkword(0, 0);
	MR_np_call_localret_ent(hlds__pred_table__lookup_builtin_pred_proc_id_8_0,
		transform_hlds__distance_granularity__apply_dg_to_else2_10_0_i16);
MR_def_label(transform_hlds__distance_granularity__apply_dg_to_else2_10_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6, MR_tempr7, MR_tempr8, MR_tempr9, MR_tempr10, MR_tempr11;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_sv(19) = MR_tempr1;
	MR_tempr9 = MR_sv(14);
	MR_tfield(1, MR_tempr1, 0) = MR_tempr9;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tempr10 = MR_sv(12);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr10;
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr3;
	MR_tempr11 = MR_sv(2);
	MR_tfield(1, MR_tempr3, 0) = MR_tempr11;
	MR_tfield(1, MR_tempr3, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr4, 0) = MR_tempr10;
	MR_tfield(1, MR_tempr4, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr5, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr5, 0) = MR_tempr11;
	MR_tfield(1, MR_tempr5, 1) = MR_tempr4;
	MR_tag_alloc_heap(MR_tempr6, 1, (MR_Integer) 3);
	MR_tfield(1, MR_tempr6, 0) = (MR_Word) MR_TAG_COMMON(1,3,0);
	MR_tfield(1, MR_tempr6, 1) = (MR_Integer) 0;
	MR_tfield(1, MR_tempr6, 2) = MR_tempr5;
	MR_tag_alloc_heap(MR_tempr7, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr7, 0) = MR_tempr9;
	MR_tfield(0, MR_tempr7, 1) = MR_tempr6;
	MR_tfield(0, MR_tempr7, 2) = (MR_Word) MR_TAG_COMMON(0,0,1);
	MR_tag_alloc_heap(MR_tempr6, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr6, 0) = MR_tempr7;
	MR_tag_alloc_heap(MR_tempr8, 1, (MR_Integer) 6);
	MR_sv(15) = MR_tempr8;
	MR_tfield(1, MR_tempr8, 0) = MR_r1;
	MR_tfield(1, MR_tempr8, 1) = MR_r2;
	MR_tfield(1, MR_tempr8, 2) = MR_tempr3;
	MR_tfield(1, MR_tempr8, 3) = (MR_Integer) 0;
	MR_tfield(1, MR_tempr8, 4) = MR_tempr6;
	MR_tfield(1, MR_tempr8, 5) = (MR_Word) MR_TAG_COMMON(1,2,0);
	MR_sv(20) = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_sv(20);
	}
	MR_np_call_localret_ent(f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_105_115_116_95_116_111_95_115_101_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_0,
		transform_hlds__distance_granularity__apply_dg_to_else2_10_0_i17);
MR_def_label(transform_hlds__distance_granularity__apply_dg_to_else2_10_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(14);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_TAG_COMMON(3,4,0);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = MR_sv(12);
	MR_tfield(0, MR_tempr2, 1) = (MR_Word) MR_TAG_COMMON(3,4,1);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr3, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr1, 1) = MR_tempr3;
	MR_sv(14) = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__instmap__instmap_delta_from_assoc_list_2_0,
		transform_hlds__distance_granularity__apply_dg_to_else2_10_0_i18);
MR_def_label(transform_hlds__distance_granularity__apply_dg_to_else2_10_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(16) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	MR_r2 = MR_sv(6);
	MR_r3 = (MR_Integer) 1;
	MR_np_call_localret_ent(list__index1_det_3_0,
		transform_hlds__distance_granularity__apply_dg_to_else2_10_0_i19);
MR_def_label(transform_hlds__distance_granularity__apply_dg_to_else2_10_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(0, MR_r1, 1);
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_get_context_2_0,
		transform_hlds__distance_granularity__apply_dg_to_else2_10_0_i20);
MR_def_label(transform_hlds__distance_granularity__apply_dg_to_else2_10_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r5 = MR_r1;
	MR_r1 = MR_sv(14);
	MR_r2 = MR_sv(16);
	MR_r3 = (MR_Integer) 0;
	MR_r4 = (MR_Integer) 0;
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_init_6_0,
		transform_hlds__distance_granularity__apply_dg_to_else2_10_0_i21);
MR_def_label(transform_hlds__distance_granularity__apply_dg_to_else2_10_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(15);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_r2 = MR_sv(9);
	MR_sv(9) = MR_tempr1;
	MR_r1 = MR_sv(20);
	MR_r3 = MR_sv(19);
	}
	MR_np_call_localret_ent(list__append_3_1,
		transform_hlds__distance_granularity__apply_dg_to_else2_10_0_i22);
MR_def_label(transform_hlds__distance_granularity__apply_dg_to_else2_10_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 6);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = MR_sv(8);
	MR_tfield(1, MR_tempr1, 2) = MR_r1;
	MR_tfield(1, MR_tempr1, 3) = MR_sv(10);
	MR_tfield(1, MR_tempr1, 4) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(1, MR_tempr1, 5) = MR_sv(11);
	MR_sv(1) = MR_tempr1;
	MR_r1 = MR_sv(7);
	}
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_get_instmap_delta_2_0,
		transform_hlds__distance_granularity__apply_dg_to_else2_10_0_i23);
MR_def_label(transform_hlds__distance_granularity__apply_dg_to_else2_10_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(12);
	MR_r2 = (MR_Word) MR_TAG_COMMON(3,4,2);
	MR_np_call_localret_ent(hlds__instmap__instmap_delta_insert_4_0,
		transform_hlds__distance_granularity__apply_dg_to_else2_10_0_i24);
MR_def_label(transform_hlds__distance_granularity__apply_dg_to_else2_10_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(7);
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_set_instmap_delta_3_0,
		transform_hlds__distance_granularity__apply_dg_to_else2_10_0_i25);
MR_def_label(transform_hlds__distance_granularity__apply_dg_to_else2_10_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_r4 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(17);
	}
	MR_np_call_localret_ent(list__replace_nth_det_4_0,
		transform_hlds__distance_granularity__apply_dg_to_else2_10_0_i26);
MR_def_label(transform_hlds__distance_granularity__apply_dg_to_else2_10_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	MR_r2 = ((MR_Integer) MR_sv(17) - (MR_Integer) 1);
	MR_np_call_localret_ent(list__det_split_list_4_0,
		transform_hlds__distance_granularity__apply_dg_to_else2_10_0_i27);
MR_def_label(transform_hlds__distance_granularity__apply_dg_to_else2_10_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(13);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_sv(1) = MR_r2;
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	}
	MR_np_call_localret_ent(list__append_3_1,
		transform_hlds__distance_granularity__apply_dg_to_else2_10_0_i28);
MR_def_label(transform_hlds__distance_granularity__apply_dg_to_else2_10_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(9);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	}
	MR_np_call_localret_ent(list__append_3_1,
		transform_hlds__distance_granularity__apply_dg_to_else2_10_0_i29);
MR_def_label(transform_hlds__distance_granularity__apply_dg_to_else2_10_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	MR_r3 = MR_sv(1);
	MR_np_call_localret_ent(list__append_3_1,
		transform_hlds__distance_granularity__apply_dg_to_else2_10_0_i30);
MR_def_label(transform_hlds__distance_granularity__apply_dg_to_else2_10_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr1, 1) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr1, 2) = MR_r1;
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(4);
	MR_r6 = MR_sv(5);
	MR_r1 = MR_tempr1;
	MR_r2 = ((MR_Integer) MR_sv(17) + (MR_Integer) 3);
	MR_r7 = MR_sv(18);
	MR_succip_word = MR_sv(21);
	MR_GOTO_LAB(transform_hlds__distance_granularity__apply_dg_to_else2_10_0_i63);
	}
MR_def_label(transform_hlds__distance_granularity__apply_dg_to_else2_10_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(4);
	MR_r6 = MR_sv(5);
	MR_r1 = MR_sv(1);
	MR_r2 = ((MR_Integer) MR_sv(17) + (MR_Integer) 3);
	MR_r7 = MR_sv(12);
	MR_succip_word = MR_sv(21);
	MR_GOTO_LAB(transform_hlds__distance_granularity__apply_dg_to_else2_10_0_i63);
MR_def_label(transform_hlds__distance_granularity__apply_dg_to_else2_10_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(4);
	MR_r6 = MR_sv(5);
	MR_r1 = MR_sv(1);
	MR_r2 = ((MR_Integer) MR_sv(17) + (MR_Integer) 1);
	MR_r7 = MR_sv(12);
	MR_succip_word = MR_sv(21);
	MR_GOTO_LAB(transform_hlds__distance_granularity__apply_dg_to_else2_10_0_i63);
MR_def_label(transform_hlds__distance_granularity__apply_dg_to_else2_10_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__transform_hlds__distance_granularity__this_file_0_0,
		transform_hlds__distance_granularity__apply_dg_to_else2_10_0_i35);
MR_def_label(transform_hlds__distance_granularity__apply_dg_to_else2_10_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("apply_dg_to_else2", 17);
	MR_succip_word = MR_sv(21);
	MR_decr_sp(21);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__hlds_goal__goal_list_nonlocals_2_0);
MR_decl_entry(hlds__hlds_goal__goal_list_instmap_delta_2_0);
MR_decl_entry(hlds__hlds_goal__goal_list_determinism_2_0);
MR_decl_entry(hlds__hlds_goal__goal_list_purity_2_0);
MR_decl_entry(hlds__hlds_goal__goal_info_set_nonlocals_3_0);
MR_decl_entry(hlds__hlds_goal__goal_info_set_determinism_3_0);
MR_decl_entry(hlds__hlds_goal__goal_info_set_purity_3_0);

MR_BEGIN_MODULE(transform_hlds__distance_granularity_module3)
	MR_init_entry1(transform_hlds__distance_granularity__apply_dg_to_else_8_0);
	MR_init_label8(transform_hlds__distance_granularity__apply_dg_to_else_8_0,2,5,6,7,8,9,10,11)
	MR_init_label2(transform_hlds__distance_granularity__apply_dg_to_else_8_0,12,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__distance_granularity__apply_dg_to_else_8_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(1) = MR_ctfield(0, MR_r1, 1);
	MR_r1 = MR_ctfield(0, MR_r1, 0);
	MR_r7 = MR_r6;
	MR_r6 = MR_r5;
	MR_r5 = MR_r4;
	MR_r4 = MR_r3;
	MR_r3 = MR_r2;
	MR_r2 = (MR_Integer) 1;
	MR_np_call_localret_ent(transform_hlds__distance_granularity__apply_dg_to_else2_10_0,
		transform_hlds__distance_granularity__apply_dg_to_else_8_0_i2);
MR_def_label(transform_hlds__distance_granularity__apply_dg_to_else_8_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tfield(0, MR_tempr1, 1) = MR_sv(1);
	MR_tempr2 = MR_ctfield(0, MR_tempr1, 0);
	if (MR_RTAGS_TESTR(MR_tempr2,3,1)) {
		MR_GOTO_LAB(transform_hlds__distance_granularity__apply_dg_to_else_8_0_i3);
	}
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_ctfield(3, MR_tempr2, 2);
	MR_sv(3) = MR_ctfield(0, MR_tempr1, 1);
	MR_sv(6) = MR_tempr2;
	MR_r1 = MR_sv(2);
	}
	MR_np_call_localret_ent(hlds__hlds_goal__goal_list_nonlocals_2_0,
		transform_hlds__distance_granularity__apply_dg_to_else_8_0_i5);
MR_def_label(transform_hlds__distance_granularity__apply_dg_to_else_8_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(hlds__hlds_goal__goal_list_instmap_delta_2_0,
		transform_hlds__distance_granularity__apply_dg_to_else_8_0_i6);
MR_def_label(transform_hlds__distance_granularity__apply_dg_to_else_8_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(hlds__hlds_goal__goal_list_determinism_2_0,
		transform_hlds__distance_granularity__apply_dg_to_else_8_0_i7);
MR_def_label(transform_hlds__distance_granularity__apply_dg_to_else_8_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_sv(2) = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_goal__goal_list_purity_2_0,
		transform_hlds__distance_granularity__apply_dg_to_else_8_0_i8);
MR_def_label(transform_hlds__distance_granularity__apply_dg_to_else_8_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_set_nonlocals_3_0,
		transform_hlds__distance_granularity__apply_dg_to_else_8_0_i9);
MR_def_label(transform_hlds__distance_granularity__apply_dg_to_else_8_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_set_instmap_delta_3_0,
		transform_hlds__distance_granularity__apply_dg_to_else_8_0_i10);
MR_def_label(transform_hlds__distance_granularity__apply_dg_to_else_8_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_set_determinism_3_0,
		transform_hlds__distance_granularity__apply_dg_to_else_8_0_i11);
MR_def_label(transform_hlds__distance_granularity__apply_dg_to_else_8_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_set_purity_3_0,
		transform_hlds__distance_granularity__apply_dg_to_else_8_0_i12);
MR_def_label(transform_hlds__distance_granularity__apply_dg_to_else_8_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(6);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(1);
	MR_decr_sp_and_return(7);
	}
MR_def_label(transform_hlds__distance_granularity__apply_dg_to_else_8_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("distance_granularity.m", 22);
	MR_r2 = (MR_Word) MR_string_const("recompute_conj_info", 19);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__hlds_goal__make_simple_test_5_0);
MR_decl_entry(hlds__goal_util__create_conj_4_0);
MR_decl_entry(hlds__hlds_goal__goal_info_get_nonlocals_2_0);
MR_decl_entry(f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_105_110_115_101_114_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0);

MR_BEGIN_MODULE(transform_hlds__distance_granularity_module4)
	MR_init_entry1(transform_hlds__distance_granularity__create_if_then_else_goal_10_0);
	MR_init_label8(transform_hlds__distance_granularity__create_if_then_else_goal_10_0,2,3,4,6,8,9,10,11)
	MR_init_label3(transform_hlds__distance_granularity__create_if_then_else_goal_10_0,12,13,14)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__distance_granularity__create_if_then_else_goal_10_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(10);
	MR_sv(10) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_sv(5) = MR_r5;
	MR_sv(6) = MR_r6;
	MR_sv(7) = MR_r8;
	MR_sv(8) = MR_r7;
	MR_np_call_localret_ent(fn__parse_tree__prog_type__int_type_0_0,
		transform_hlds__distance_granularity__create_if_then_else_goal_10_0_i2);
MR_def_label(transform_hlds__distance_granularity__create_if_then_else_goal_10_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_r3 = MR_sv(8);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_create_var_from_type_5_0,
		transform_hlds__distance_granularity__create_if_then_else_goal_10_0_i3);
MR_def_label(transform_hlds__distance_granularity__create_if_then_else_goal_10_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_sv(9) = MR_r2;
	MR_r2 = (MR_Integer) 0;
	MR_np_call_localret_ent(hlds__hlds_goal__make_int_const_construction_3_0,
		transform_hlds__distance_granularity__create_if_then_else_goal_10_0_i4);
MR_def_label(transform_hlds__distance_granularity__create_if_then_else_goal_10_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(3),0,0)) {
		MR_GOTO_LAB(transform_hlds__distance_granularity__create_if_then_else_goal_10_0_i6);
	}
	MR_r1 = (MR_Word) MR_string_const("distance_granularity.m", 22);
	MR_r2 = (MR_Word) MR_string_const("apply_dg_to_goal", 16);
	MR_succip_word = MR_sv(10);
	MR_decr_sp(10);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
MR_def_label(transform_hlds__distance_granularity__create_if_then_else_goal_10_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r2 = MR_sv(8);
	MR_sv(8) = MR_ctfield(1, MR_tempr1, 0);
	MR_r1 = MR_sv(8);
	MR_r3 = (MR_Word) MR_TAG_COMMON(3,1,1);
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	}
	MR_np_call_localret_ent(hlds__hlds_goal__make_simple_test_5_0,
		transform_hlds__distance_granularity__create_if_then_else_goal_10_0_i8);
MR_def_label(transform_hlds__distance_granularity__create_if_then_else_goal_10_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r3 = (MR_Integer) 0;
	MR_np_call_localret_ent(hlds__goal_util__create_conj_4_0,
		transform_hlds__distance_granularity__create_if_then_else_goal_10_0_i9);
MR_def_label(transform_hlds__distance_granularity__create_if_then_else_goal_10_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr1, 1) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr1, 2) = MR_sv(1);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr2, 1) = MR_sv(2);
	MR_sv(3) = MR_r1;
	MR_r1 = MR_tempr2;
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(5);
	MR_r4 = MR_sv(6);
	MR_r5 = MR_sv(9);
	}
	MR_np_call_localret_ent(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_100_105_115_116_97_110_99_101_95_103_114_97_110_117_108_97_114_105_116_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_112_112_108_121_95_100_103_95_116_111_95_116_104_101_110_95_95_91_51_93_95_48_8_0,
		transform_hlds__distance_granularity__create_if_then_else_goal_10_0_i10);
MR_def_label(transform_hlds__distance_granularity__create_if_then_else_goal_10_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr1, 1) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr1, 2) = MR_sv(1);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr2, 1) = MR_sv(2);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tempr2;
	MR_r6 = MR_r2;
	MR_r2 = MR_sv(8);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(5);
	MR_r5 = MR_sv(7);
	}
	MR_np_call_localret_ent(transform_hlds__distance_granularity__apply_dg_to_else_8_0,
		transform_hlds__distance_granularity__create_if_then_else_goal_10_0_i11);
MR_def_label(transform_hlds__distance_granularity__create_if_then_else_goal_10_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_sv(5) = MR_r2;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_get_nonlocals_2_0,
		transform_hlds__distance_granularity__create_if_then_else_goal_10_0_i12);
MR_def_label(transform_hlds__distance_granularity__create_if_then_else_goal_10_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r4 = MR_sv(8);
	MR_np_call_localret_ent(f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_105_110_115_101_114_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		transform_hlds__distance_granularity__create_if_then_else_goal_10_0_i13);
MR_def_label(transform_hlds__distance_granularity__create_if_then_else_goal_10_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_set_nonlocals_3_0,
		transform_hlds__distance_granularity__create_if_then_else_goal_10_0_i14);
MR_def_label(transform_hlds__distance_granularity__create_if_then_else_goal_10_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 5);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 6;
	MR_tfield(3, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(3, MR_tempr1, 2) = MR_sv(3);
	MR_tfield(3, MR_tempr1, 3) = MR_sv(1);
	MR_tfield(3, MR_tempr1, 4) = MR_sv(4);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr2, 1) = MR_r1;
	MR_r1 = MR_tempr2;
	MR_r2 = MR_sv(5);
	MR_decr_sp_and_return(10);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__distance_granularity_module5)
	MR_init_entry1(transform_hlds__distance_granularity__apply_dg_to_goal_15_0);
	MR_init_label8(transform_hlds__distance_granularity__apply_dg_to_goal_15_0,53,6,8,9,54,11,13,15)
	MR_init_label8(transform_hlds__distance_granularity__apply_dg_to_goal_15_0,16,55,18,56,20,57,22,58)
	MR_init_label7(transform_hlds__distance_granularity__apply_dg_to_goal_15_0,24,59,26,27,28,60,30)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__distance_granularity__apply_dg_to_goal_15_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r11 = MR_ctfield(0, MR_r1, 0);
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r11),
		MR_LABEL_AP(transform_hlds__distance_granularity__apply_dg_to_goal_15_0_i9) MR_AND
		MR_LABEL_AP(transform_hlds__distance_granularity__apply_dg_to_goal_15_0_i53) MR_AND
		MR_LABEL_AP(transform_hlds__distance_granularity__apply_dg_to_goal_15_0_i9) MR_AND
		MR_LABEL_AP(transform_hlds__distance_granularity__apply_dg_to_goal_15_0_i8));
MR_def_label(transform_hlds__distance_granularity__apply_dg_to_goal_15_0,53)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(10);
	MR_sv(10) = (MR_Word) MR_succip;
	MR_sv(6) = MR_ctfield(0, MR_r1, 1);
	MR_r1 = MR_r11;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_r4 = MR_r5;
	MR_r5 = MR_r3;
	MR_r3 = MR_tempr1;
	MR_r8 = MR_r9;
	MR_r9 = MR_r10;
	}
	MR_np_call_localret_ent(transform_hlds__distance_granularity__apply_dg_to_plain_call_14_0,
		transform_hlds__distance_granularity__apply_dg_to_goal_15_0_i6);
MR_def_label(transform_hlds__distance_granularity__apply_dg_to_goal_15_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tfield(0, MR_tempr1, 1) = MR_sv(6);
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(10);
	}
MR_def_label(transform_hlds__distance_granularity__apply_dg_to_goal_15_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_ctfield(3, MR_r11, 0),
		MR_LABEL_AP(transform_hlds__distance_granularity__apply_dg_to_goal_15_0_i9) MR_AND
		MR_LABEL_AP(transform_hlds__distance_granularity__apply_dg_to_goal_15_0_i54) MR_AND
		MR_LABEL_AP(transform_hlds__distance_granularity__apply_dg_to_goal_15_0_i55) MR_AND
		MR_LABEL_AP(transform_hlds__distance_granularity__apply_dg_to_goal_15_0_i56) MR_AND
		MR_LABEL_AP(transform_hlds__distance_granularity__apply_dg_to_goal_15_0_i57) MR_AND
		MR_LABEL_AP(transform_hlds__distance_granularity__apply_dg_to_goal_15_0_i58) MR_AND
		MR_LABEL_AP(transform_hlds__distance_granularity__apply_dg_to_goal_15_0_i59) MR_AND
		MR_LABEL_AP(transform_hlds__distance_granularity__apply_dg_to_goal_15_0_i60));
MR_def_label(transform_hlds__distance_granularity__apply_dg_to_goal_15_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r5 = (MR_Integer) 0;
	MR_r2 = MR_r6;
	MR_r3 = MR_r7;
	MR_r4 = MR_r10;
	MR_proceed();
MR_def_label(transform_hlds__distance_granularity__apply_dg_to_goal_15_0,54)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(10);
	MR_sv(10) = (MR_Word) MR_succip;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_sv(5) = MR_r8;
	MR_sv(6) = MR_ctfield(0, MR_r1, 1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r11;
	MR_sv(1) = MR_ctfield(3, MR_tempr1, 1);
	MR_sv(4) = MR_r1;
	MR_r1 = MR_ctfield(3, MR_tempr1, 2);
	MR_r3 = MR_r2;
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_r4 = MR_sv(2);
	MR_r8 = MR_r7;
	MR_r7 = MR_r6;
	MR_r6 = MR_r5;
	MR_r5 = MR_sv(3);
	MR_r9 = MR_sv(5);
	MR_r11 = MR_r10;
	MR_r10 = (MR_Integer) 1;
	MR_r12 = (MR_Integer) 0;
	}
	MR_np_call_localret_ent(transform_hlds__distance_granularity__apply_dg_to_conj_17_0,
		transform_hlds__distance_granularity__apply_dg_to_goal_15_0_i11);
MR_def_label(transform_hlds__distance_granularity__apply_dg_to_goal_15_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(1),0)) {
		MR_GOTO_LAB(transform_hlds__distance_granularity__apply_dg_to_goal_15_0_i13);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr1, 1) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr1, 2) = MR_r1;
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r1, 0) = MR_tempr1;
	MR_tfield(0, MR_r1, 1) = MR_sv(6);
	MR_r5 = (MR_Integer) 0;
	MR_decr_sp_and_return(10);
	}
MR_def_label(transform_hlds__distance_granularity__apply_dg_to_goal_15_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r5,0)) {
		MR_GOTO_LAB(transform_hlds__distance_granularity__apply_dg_to_goal_15_0_i15);
	}
	MR_r5 = (MR_Integer) 0;
	MR_r1 = MR_sv(4);
	MR_decr_sp_and_return(10);
MR_def_label(transform_hlds__distance_granularity__apply_dg_to_goal_15_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r3;
	MR_r5 = MR_sv(2);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_sv(2) = MR_tempr1;
	MR_r7 = MR_r2;
	MR_r2 = MR_sv(6);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(3);
	MR_r6 = MR_sv(5);
	MR_r8 = MR_sv(1);
	}
	MR_np_call_localret_ent(transform_hlds__distance_granularity__create_if_then_else_goal_10_0,
		transform_hlds__distance_granularity__apply_dg_to_goal_15_0_i16);
MR_def_label(transform_hlds__distance_granularity__apply_dg_to_goal_15_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r5 = (MR_Integer) 0;
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_decr_sp_and_return(10);
MR_def_label(transform_hlds__distance_granularity__apply_dg_to_goal_15_0,55)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(10);
	MR_sv(10) = (MR_Word) MR_succip;
	MR_sv(6) = MR_ctfield(0, MR_r1, 1);
	MR_r1 = MR_ctfield(3, MR_r11, 1);
	MR_r9 = MR_r8;
	MR_r8 = MR_r7;
	MR_r7 = MR_r6;
	MR_r6 = MR_r5;
	MR_r5 = MR_r4;
	MR_r4 = MR_r3;
	MR_r3 = MR_r2;
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_np_call_localret_ent(transform_hlds__distance_granularity__apply_dg_to_disj_14_0,
		transform_hlds__distance_granularity__apply_dg_to_goal_15_0_i18);
MR_def_label(transform_hlds__distance_granularity__apply_dg_to_goal_15_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 2;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r1, 0) = MR_tempr1;
	MR_tfield(0, MR_r1, 1) = MR_sv(6);
	MR_r5 = (MR_Integer) 0;
	MR_decr_sp_and_return(10);
	}
MR_def_label(transform_hlds__distance_granularity__apply_dg_to_goal_15_0,56)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(10);
	MR_sv(10) = (MR_Word) MR_succip;
	MR_sv(6) = MR_ctfield(0, MR_r1, 1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r11;
	MR_sv(1) = MR_ctfield(3, MR_tempr1, 1);
	MR_sv(2) = MR_ctfield(3, MR_tempr1, 2);
	MR_r1 = MR_ctfield(3, MR_tempr1, 3);
	MR_r9 = MR_r8;
	MR_r8 = MR_r7;
	MR_r7 = MR_r6;
	MR_r6 = MR_r5;
	MR_r5 = MR_r4;
	MR_r4 = MR_r3;
	MR_r3 = MR_r2;
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	}
	MR_np_call_localret_ent(transform_hlds__distance_granularity__apply_dg_to_switch_14_0,
		transform_hlds__distance_granularity__apply_dg_to_goal_15_0_i20);
MR_def_label(transform_hlds__distance_granularity__apply_dg_to_goal_15_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 4);
	MR_r5 = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 3;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(1);
	MR_tfield(3, MR_tempr1, 2) = MR_sv(2);
	MR_tfield(3, MR_tempr1, 3) = MR_r1;
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r1, 0) = MR_tempr1;
	MR_tfield(0, MR_r1, 1) = MR_sv(6);
	MR_r5 = (MR_Integer) 0;
	MR_decr_sp_and_return(10);
	}
MR_def_label(transform_hlds__distance_granularity__apply_dg_to_goal_15_0,57)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(10);
	MR_sv(10) = (MR_Word) MR_succip;
	MR_sv(6) = MR_ctfield(0, MR_r1, 1);
	MR_r1 = MR_ctfield(3, MR_r11, 1);
	MR_np_localcall_lab(transform_hlds__distance_granularity__apply_dg_to_goal_15_0,
		transform_hlds__distance_granularity__apply_dg_to_goal_15_0_i22);
MR_def_label(transform_hlds__distance_granularity__apply_dg_to_goal_15_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 4;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r1, 0) = MR_tempr1;
	MR_tfield(0, MR_r1, 1) = MR_sv(6);
	MR_decr_sp_and_return(10);
	}
MR_def_label(transform_hlds__distance_granularity__apply_dg_to_goal_15_0,58)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(10);
	MR_sv(10) = (MR_Word) MR_succip;
	MR_sv(6) = MR_ctfield(0, MR_r1, 1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r11;
	MR_sv(1) = MR_ctfield(3, MR_tempr1, 1);
	MR_r1 = MR_ctfield(3, MR_tempr1, 2);
	}
	MR_np_localcall_lab(transform_hlds__distance_granularity__apply_dg_to_goal_15_0,
		transform_hlds__distance_granularity__apply_dg_to_goal_15_0_i24);
MR_def_label(transform_hlds__distance_granularity__apply_dg_to_goal_15_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 5;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(1);
	MR_tfield(3, MR_tempr1, 2) = MR_r1;
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r1, 0) = MR_tempr1;
	MR_tfield(0, MR_r1, 1) = MR_sv(6);
	MR_decr_sp_and_return(10);
	}
MR_def_label(transform_hlds__distance_granularity__apply_dg_to_goal_15_0,59)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(10);
	MR_sv(10) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_r5;
	MR_sv(5) = MR_r8;
	MR_sv(6) = MR_ctfield(0, MR_r1, 1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r11;
	MR_sv(7) = MR_ctfield(3, MR_tempr1, 1);
	MR_sv(8) = MR_ctfield(3, MR_tempr1, 3);
	MR_sv(9) = MR_ctfield(3, MR_tempr1, 4);
	MR_r1 = MR_ctfield(3, MR_tempr1, 2);
	MR_r9 = (MR_Integer) 0;
	}
	MR_np_localcall_lab(transform_hlds__distance_granularity__apply_dg_to_goal_15_0,
		transform_hlds__distance_granularity__apply_dg_to_goal_15_0_i26);
MR_def_label(transform_hlds__distance_granularity__apply_dg_to_goal_15_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(8);
	MR_sv(8) = MR_tempr1;
	MR_r6 = MR_r2;
	MR_r2 = MR_sv(1);
	MR_r7 = MR_r3;
	MR_r3 = MR_sv(2);
	MR_r10 = MR_r4;
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(4);
	MR_r8 = MR_sv(5);
	MR_r9 = (MR_Integer) 0;
	}
	MR_np_localcall_lab(transform_hlds__distance_granularity__apply_dg_to_goal_15_0,
		transform_hlds__distance_granularity__apply_dg_to_goal_15_0_i27);
MR_def_label(transform_hlds__distance_granularity__apply_dg_to_goal_15_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r6 = MR_r2;
	MR_r2 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(9);
	MR_r7 = MR_r3;
	MR_r3 = MR_sv(2);
	MR_r10 = MR_r4;
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(4);
	MR_r8 = MR_sv(5);
	MR_r9 = (MR_Integer) 0;
	MR_np_localcall_lab(transform_hlds__distance_granularity__apply_dg_to_goal_15_0,
		transform_hlds__distance_granularity__apply_dg_to_goal_15_0_i28);
MR_def_label(transform_hlds__distance_granularity__apply_dg_to_goal_15_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 5);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 6;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(7);
	MR_tfield(3, MR_tempr1, 2) = MR_sv(8);
	MR_tfield(3, MR_tempr1, 3) = MR_sv(1);
	MR_tfield(3, MR_tempr1, 4) = MR_r1;
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r1, 0) = MR_tempr1;
	MR_tfield(0, MR_r1, 1) = MR_sv(6);
	MR_r5 = (MR_Integer) 0;
	MR_decr_sp_and_return(10);
	}
MR_def_label(transform_hlds__distance_granularity__apply_dg_to_goal_15_0,60)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(10);
	MR_sv(10) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(fn__transform_hlds__distance_granularity__this_file_0_0,
		transform_hlds__distance_granularity__apply_dg_to_goal_15_0_i30);
MR_def_label(transform_hlds__distance_granularity__apply_dg_to_goal_15_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("apply_dg_to_goal", 16);
	MR_succip_word = MR_sv(10);
	MR_decr_sp(10);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__distance_granularity_module6)
	MR_init_entry1(transform_hlds__distance_granularity__apply_dg_to_conj_17_0);
	MR_init_label5(transform_hlds__distance_granularity__apply_dg_to_conj_17_0,18,4,5,7,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__distance_granularity__apply_dg_to_conj_17_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(13);
	MR_sv(13) = (MR_Word) MR_succip;
MR_def_label(transform_hlds__distance_granularity__apply_dg_to_conj_17_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(transform_hlds__distance_granularity__apply_dg_to_conj_17_0_i3);
	}
	MR_sv(1) = MR_r2;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr1 = MR_r3;
	MR_sv(2) = MR_tempr1;
	MR_tempr2 = MR_r4;
	MR_sv(3) = MR_tempr2;
	MR_tempr3 = MR_r5;
	MR_sv(4) = MR_tempr3;
	MR_tempr4 = MR_r6;
	MR_sv(5) = MR_tempr4;
	MR_tempr5 = MR_r9;
	MR_sv(6) = MR_tempr5;
	MR_tempr6 = MR_r10;
	MR_sv(7) = MR_tempr6;
	MR_sv(8) = MR_r12;
	MR_sv(9) = MR_ctfield(1, MR_r1, 1);
	MR_r1 = MR_ctfield(1, MR_r1, 0);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	MR_r4 = MR_tempr3;
	MR_r5 = MR_tempr4;
	MR_r6 = MR_r7;
	MR_r7 = MR_r8;
	MR_r8 = MR_tempr5;
	MR_r9 = MR_tempr6;
	MR_r10 = MR_r11;
	}
	MR_np_call_localret_ent(transform_hlds__distance_granularity__apply_dg_to_goal_15_0,
		transform_hlds__distance_granularity__apply_dg_to_conj_17_0_i4);
MR_def_label(transform_hlds__distance_granularity__apply_dg_to_conj_17_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_sv(10) = MR_r2;
	MR_r2 = MR_sv(1);
	MR_sv(1) = MR_r5;
	MR_sv(11) = MR_r3;
	MR_sv(12) = MR_r4;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__append_3_1,
		transform_hlds__distance_granularity__apply_dg_to_conj_17_0_i5);
MR_def_label(transform_hlds__distance_granularity__apply_dg_to_conj_17_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(1),0)) {
		MR_GOTO_LAB(transform_hlds__distance_granularity__apply_dg_to_conj_17_0_i7);
	}
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(4);
	MR_r6 = MR_sv(5);
	MR_r9 = MR_sv(6);
	MR_r10 = MR_sv(7);
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(9);
	MR_r7 = MR_sv(10);
	MR_r8 = MR_sv(11);
	MR_r11 = MR_sv(12);
	MR_r12 = MR_sv(8);
	MR_succip_word = MR_sv(13);
	MR_GOTO_LAB(transform_hlds__distance_granularity__apply_dg_to_conj_17_0_i18);
MR_def_label(transform_hlds__distance_granularity__apply_dg_to_conj_17_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(4);
	MR_r6 = MR_sv(5);
	MR_r9 = MR_sv(6);
	MR_r10 = MR_sv(7);
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(9);
	MR_r7 = MR_sv(10);
	MR_r8 = MR_sv(11);
	MR_r11 = MR_sv(12);
	MR_r12 = (MR_Integer) 1;
	MR_succip_word = MR_sv(13);
	MR_GOTO_LAB(transform_hlds__distance_granularity__apply_dg_to_conj_17_0_i18);
MR_def_label(transform_hlds__distance_granularity__apply_dg_to_conj_17_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_r2 = MR_r7;
	MR_r3 = MR_r8;
	MR_r4 = MR_r11;
	MR_r5 = MR_r12;
	MR_decr_sp_and_return(13);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__distance_granularity_module7)
	MR_init_entry1(transform_hlds__distance_granularity__apply_dg_to_disj_14_0);
	MR_init_label4(transform_hlds__distance_granularity__apply_dg_to_disj_14_0,12,4,5,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__distance_granularity__apply_dg_to_disj_14_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(10);
	MR_sv(10) = (MR_Word) MR_succip;
MR_def_label(transform_hlds__distance_granularity__apply_dg_to_disj_14_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(transform_hlds__distance_granularity__apply_dg_to_disj_14_0_i3);
	}
	MR_sv(1) = MR_r2;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tempr1 = MR_r3;
	MR_sv(2) = MR_tempr1;
	MR_tempr2 = MR_r4;
	MR_sv(3) = MR_tempr2;
	MR_tempr3 = MR_r5;
	MR_sv(4) = MR_tempr3;
	MR_tempr4 = MR_r6;
	MR_sv(5) = MR_tempr4;
	MR_tempr5 = MR_r9;
	MR_sv(6) = MR_tempr5;
	MR_sv(7) = MR_ctfield(1, MR_r1, 1);
	MR_r1 = MR_ctfield(1, MR_r1, 0);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	MR_r4 = MR_tempr3;
	MR_r5 = MR_tempr4;
	MR_r6 = MR_r7;
	MR_r7 = MR_r8;
	MR_r8 = MR_tempr5;
	MR_r9 = (MR_Integer) 0;
	}
	MR_np_call_localret_ent(transform_hlds__distance_granularity__apply_dg_to_goal_15_0,
		transform_hlds__distance_granularity__apply_dg_to_disj_14_0_i4);
MR_def_label(transform_hlds__distance_granularity__apply_dg_to_disj_14_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_sv(1);
	MR_sv(1) = MR_tempr2;
	MR_sv(8) = MR_r3;
	MR_sv(9) = MR_r4;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__append_3_1,
		transform_hlds__distance_granularity__apply_dg_to_disj_14_0_i5);
MR_def_label(transform_hlds__distance_granularity__apply_dg_to_disj_14_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(4);
	MR_r6 = MR_sv(5);
	MR_r7 = MR_sv(1);
	MR_r8 = MR_sv(8);
	MR_r9 = MR_sv(6);
	MR_r10 = MR_sv(9);
	MR_succip_word = MR_sv(10);
	MR_GOTO_LAB(transform_hlds__distance_granularity__apply_dg_to_disj_14_0_i12);
MR_def_label(transform_hlds__distance_granularity__apply_dg_to_disj_14_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_r2 = MR_r7;
	MR_r3 = MR_r8;
	MR_r4 = MR_r10;
	MR_decr_sp_and_return(10);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__distance_granularity_module8)
	MR_init_entry1(transform_hlds__distance_granularity__apply_dg_to_switch_14_0);
	MR_init_label3(transform_hlds__distance_granularity__apply_dg_to_switch_14_0,11,4,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__distance_granularity__apply_dg_to_switch_14_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
MR_def_label(transform_hlds__distance_granularity__apply_dg_to_switch_14_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(transform_hlds__distance_granularity__apply_dg_to_switch_14_0_i3);
	}
	MR_sv(1) = MR_r2;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr2 = MR_r3;
	MR_sv(2) = MR_tempr2;
	MR_tempr3 = MR_r4;
	MR_sv(3) = MR_tempr3;
	MR_tempr4 = MR_r5;
	MR_sv(4) = MR_tempr4;
	MR_tempr5 = MR_r6;
	MR_sv(5) = MR_tempr5;
	MR_tempr6 = MR_r9;
	MR_sv(6) = MR_tempr6;
	MR_sv(7) = MR_ctfield(1, MR_r1, 1);
	MR_tempr1 = MR_ctfield(1, MR_r1, 0);
	MR_sv(8) = MR_ctfield(0, MR_tempr1, 0);
	MR_r1 = MR_ctfield(0, MR_tempr1, 1);
	MR_r2 = MR_tempr2;
	MR_r3 = MR_tempr3;
	MR_r4 = MR_tempr4;
	MR_r5 = MR_tempr5;
	MR_r6 = MR_r7;
	MR_r7 = MR_r8;
	MR_r8 = MR_tempr6;
	MR_r9 = (MR_Integer) 0;
	}
	MR_np_call_localret_ent(transform_hlds__distance_granularity__apply_dg_to_goal_15_0,
		transform_hlds__distance_granularity__apply_dg_to_switch_14_0_i4);
MR_def_label(transform_hlds__distance_granularity__apply_dg_to_switch_14_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(8);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = MR_sv(1);
	MR_r1 = MR_sv(7);
	MR_r7 = MR_r2;
	MR_r2 = MR_tempr2;
	MR_r8 = MR_r3;
	MR_r3 = MR_sv(2);
	MR_r10 = MR_r4;
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(4);
	MR_r6 = MR_sv(5);
	MR_r9 = MR_sv(6);
	MR_succip_word = MR_sv(9);
	MR_GOTO_LAB(transform_hlds__distance_granularity__apply_dg_to_switch_14_0_i11);
	}
MR_def_label(transform_hlds__distance_granularity__apply_dg_to_switch_14_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_r2 = MR_r7;
	MR_r3 = MR_r8;
	MR_r4 = MR_r10;
	MR_decr_sp_and_return(9);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__hlds_module__module_info_proc_info_3_0);
MR_decl_entry(hlds__hlds_pred__proc_info_get_has_parallel_conj_2_0);
MR_decl_entry(hlds__hlds_pred__proc_info_get_goal_2_0);
MR_decl_entry(hlds__hlds_pred__proc_info_set_goal_3_0);
MR_decl_entry(hlds__quantification__requantify_proc_2_0);
MR_decl_entry(check_hlds__mode_util__recompute_instmap_delta_proc_5_0);
MR_decl_entry(hlds__hlds_pred__pred_info_set_proc_info_4_0);

MR_BEGIN_MODULE(transform_hlds__distance_granularity_module9)
	MR_init_entry1(transform_hlds__distance_granularity__apply_dg_to_procs_11_0);
	MR_init_label8(transform_hlds__distance_granularity__apply_dg_to_procs_11_0,30,4,5,7,8,9,11,12)
	MR_init_label4(transform_hlds__distance_granularity__apply_dg_to_procs_11_0,13,14,15,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__distance_granularity__apply_dg_to_procs_11_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(11);
	MR_sv(11) = (MR_Word) MR_succip;
MR_def_label(transform_hlds__distance_granularity__apply_dg_to_procs_11_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r2,0,0)) {
		MR_GOTO_LAB(transform_hlds__distance_granularity__apply_dg_to_procs_11_0_i3);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tempr2 = MR_r2;
	MR_tfield(0, MR_tempr1, 1) = MR_ctfield(1, MR_tempr2, 0);
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_r5;
	MR_sv(5) = MR_r6;
	MR_sv(6) = MR_r7;
	MR_tempr3 = MR_r8;
	MR_sv(7) = MR_tempr3;
	MR_sv(8) = MR_ctfield(0, MR_tempr1, 1);
	MR_sv(9) = MR_ctfield(1, MR_tempr2, 1);
	MR_r1 = MR_tempr3;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_module__module_info_proc_info_3_0,
		transform_hlds__distance_granularity__apply_dg_to_procs_11_0_i4);
MR_def_label(transform_hlds__distance_granularity__apply_dg_to_procs_11_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(10) = MR_r1;
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_has_parallel_conj_2_0,
		transform_hlds__distance_granularity__apply_dg_to_procs_11_0_i5);
MR_def_label(transform_hlds__distance_granularity__apply_dg_to_procs_11_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(transform_hlds__distance_granularity__apply_dg_to_procs_11_0_i7);
	}
	MR_r1 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(4);
	MR_r2 = MR_sv(9);
	MR_r6 = MR_sv(5);
	MR_r7 = MR_sv(6);
	MR_r8 = MR_sv(7);
	MR_succip_word = MR_sv(11);
	MR_GOTO_LAB(transform_hlds__distance_granularity__apply_dg_to_procs_11_0_i30);
MR_def_label(transform_hlds__distance_granularity__apply_dg_to_procs_11_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(10);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_goal_2_0,
		transform_hlds__distance_granularity__apply_dg_to_procs_11_0_i8);
MR_def_label(transform_hlds__distance_granularity__apply_dg_to_procs_11_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(8);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(4);
	MR_r6 = MR_sv(10);
	MR_r7 = MR_sv(7);
	MR_r8 = MR_sv(2);
	MR_r9 = (MR_Integer) 0;
	MR_r10 = (MR_Word) MR_tbmkword(0, 0);
	MR_np_call_localret_ent(transform_hlds__distance_granularity__apply_dg_to_goal_15_0,
		transform_hlds__distance_granularity__apply_dg_to_procs_11_0_i9);
MR_def_label(transform_hlds__distance_granularity__apply_dg_to_procs_11_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r4,0,0)) {
		MR_GOTO_LAB(transform_hlds__distance_granularity__apply_dg_to_procs_11_0_i11);
	}
	MR_r1 = MR_sv(1);
	MR_r8 = MR_r3;
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(4);
	MR_r2 = MR_sv(9);
	MR_r6 = MR_sv(5);
	MR_r7 = MR_sv(6);
	MR_succip_word = MR_sv(11);
	MR_GOTO_LAB(transform_hlds__distance_granularity__apply_dg_to_procs_11_0_i30);
MR_def_label(transform_hlds__distance_granularity__apply_dg_to_procs_11_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r3;
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_set_goal_3_0,
		transform_hlds__distance_granularity__apply_dg_to_procs_11_0_i12);
MR_def_label(transform_hlds__distance_granularity__apply_dg_to_procs_11_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(hlds__quantification__requantify_proc_2_0,
		transform_hlds__distance_granularity__apply_dg_to_procs_11_0_i13);
MR_def_label(transform_hlds__distance_granularity__apply_dg_to_procs_11_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Integer) 0;
	MR_r3 = MR_sv(6);
	MR_np_call_localret_ent(check_hlds__mode_util__recompute_instmap_delta_proc_5_0,
		transform_hlds__distance_granularity__apply_dg_to_procs_11_0_i14);
MR_def_label(transform_hlds__distance_granularity__apply_dg_to_procs_11_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(5);
	MR_sv(5) = MR_r2;
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(8);
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_set_proc_info_4_0,
		transform_hlds__distance_granularity__apply_dg_to_procs_11_0_i15);
MR_def_label(transform_hlds__distance_granularity__apply_dg_to_procs_11_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r6 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(4);
	MR_r2 = MR_sv(9);
	MR_r7 = (MR_Integer) 1;
	MR_r8 = MR_sv(5);
	MR_succip_word = MR_sv(11);
	MR_GOTO_LAB(transform_hlds__distance_granularity__apply_dg_to_procs_11_0_i30);
MR_def_label(transform_hlds__distance_granularity__apply_dg_to_procs_11_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r6;
	MR_r2 = MR_r7;
	MR_r3 = MR_r8;
	MR_decr_sp_and_return(11);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__distance_granularity_module10)
	MR_init_entry1(transform_hlds__distance_granularity__update_original_predicate_plain_call_9_0);
	MR_init_label8(transform_hlds__distance_granularity__update_original_predicate_plain_call_9_0,5,6,7,8,9,10,11,12)
	MR_init_label5(transform_hlds__distance_granularity__update_original_predicate_plain_call_9_0,13,14,15,4,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__distance_granularity__update_original_predicate_plain_call_9_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_ctfield(0, MR_r1, 0);
	if (MR_PTAG_TESTR(MR_tempr1,1)) {
		MR_GOTO_LAB(transform_hlds__distance_granularity__update_original_predicate_plain_call_9_0_i2);
	}
	MR_tempr2 = MR_ctfield(1, MR_tempr1, 0);
	if ((MR_tempr2 != MR_r2)) {
		MR_GOTO_LAB(transform_hlds__distance_granularity__update_original_predicate_plain_call_9_0_i4);
	}
	MR_tempr3 = MR_ctfield(1, MR_tempr1, 1);
	if ((MR_tempr3 != MR_r3)) {
		MR_GOTO_LAB(transform_hlds__distance_granularity__update_original_predicate_plain_call_9_0_i4);
	}
	MR_incr_sp(11);
	MR_sv(11) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r4;
	MR_sv(2) = MR_r5;
	MR_sv(3) = MR_r7;
	MR_sv(4) = MR_ctfield(0, MR_r1, 1);
	MR_sv(5) = MR_tempr3;
	MR_sv(6) = MR_ctfield(1, MR_tempr1, 2);
	MR_sv(7) = MR_ctfield(1, MR_tempr1, 3);
	MR_sv(8) = MR_r6;
	}
	MR_np_call_localret_ent(fn__parse_tree__prog_type__int_type_0_0,
		transform_hlds__distance_granularity__update_original_predicate_plain_call_9_0_i5);
MR_def_label(transform_hlds__distance_granularity__update_original_predicate_plain_call_9_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_r3 = MR_sv(8);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_create_var_from_type_5_0,
		transform_hlds__distance_granularity__update_original_predicate_plain_call_9_0_i6);
MR_def_label(transform_hlds__distance_granularity__update_original_predicate_plain_call_9_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r2;
	MR_r2 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_np_call_localret_ent(hlds__hlds_goal__make_int_const_construction_3_0,
		transform_hlds__distance_granularity__update_original_predicate_plain_call_9_0_i7);
MR_def_label(transform_hlds__distance_granularity__update_original_predicate_plain_call_9_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(3);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = MR_sv(6);
	MR_sv(6) = MR_r1;
	MR_sv(9) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_sv(10) = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r1 = MR_sv(10);
	}
	MR_np_call_localret_ent(list__append_3_1,
		transform_hlds__distance_granularity__update_original_predicate_plain_call_9_0_i8);
MR_def_label(transform_hlds__distance_granularity__update_original_predicate_plain_call_9_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 6);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = MR_sv(5);
	MR_tfield(1, MR_tempr1, 2) = MR_r1;
	MR_tfield(1, MR_tempr1, 3) = MR_sv(7);
	MR_tfield(1, MR_tempr1, 4) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(1, MR_tempr1, 5) = MR_sv(2);
	MR_sv(1) = MR_tempr1;
	MR_r1 = MR_sv(4);
	}
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_get_nonlocals_2_0,
		transform_hlds__distance_granularity__update_original_predicate_plain_call_9_0_i9);
MR_def_label(transform_hlds__distance_granularity__update_original_predicate_plain_call_9_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(10);
	MR_r4 = MR_sv(3);
	MR_np_call_localret_ent(f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_105_110_115_101_114_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		transform_hlds__distance_granularity__update_original_predicate_plain_call_9_0_i10);
MR_def_label(transform_hlds__distance_granularity__update_original_predicate_plain_call_9_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_set_nonlocals_3_0,
		transform_hlds__distance_granularity__update_original_predicate_plain_call_9_0_i11);
MR_def_label(transform_hlds__distance_granularity__update_original_predicate_plain_call_9_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_get_instmap_delta_2_0,
		transform_hlds__distance_granularity__update_original_predicate_plain_call_9_0_i12);
MR_def_label(transform_hlds__distance_granularity__update_original_predicate_plain_call_9_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = (MR_Word) MR_TAG_COMMON(3,4,2);
	MR_np_call_localret_ent(hlds__instmap__instmap_delta_insert_4_0,
		transform_hlds__distance_granularity__update_original_predicate_plain_call_9_0_i13);
MR_def_label(transform_hlds__distance_granularity__update_original_predicate_plain_call_9_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_set_instmap_delta_3_0,
		transform_hlds__distance_granularity__update_original_predicate_plain_call_9_0_i14);
MR_def_label(transform_hlds__distance_granularity__update_original_predicate_plain_call_9_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_r2 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r3 = (MR_Integer) 0;
	}
	MR_np_call_localret_ent(hlds__goal_util__create_conj_4_0,
		transform_hlds__distance_granularity__update_original_predicate_plain_call_9_0_i15);
MR_def_label(transform_hlds__distance_granularity__update_original_predicate_plain_call_9_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(8);
	MR_decr_sp_and_return(11);
MR_def_label(transform_hlds__distance_granularity__update_original_predicate_plain_call_9_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r6;
	MR_proceed();
MR_def_label(transform_hlds__distance_granularity__update_original_predicate_plain_call_9_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("distance_granularity.m", 22);
	MR_r2 = (MR_Word) MR_string_const("update_original_predicate_plain_call", 36);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__goal_util__flatten_conj_2_0);

MR_BEGIN_MODULE(transform_hlds__distance_granularity_module11)
	MR_init_entry1(transform_hlds__distance_granularity__update_original_predicate_goal_9_0);
	MR_init_label8(transform_hlds__distance_granularity__update_original_predicate_goal_9_0,46,8,9,47,11,14,13,48)
	MR_init_label8(transform_hlds__distance_granularity__update_original_predicate_goal_9_0,16,49,18,50,20,51,22,52)
	MR_init_label5(transform_hlds__distance_granularity__update_original_predicate_goal_9_0,24,25,26,53,28)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__distance_granularity__update_original_predicate_goal_9_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r8 = MR_ctfield(0, MR_r1, 0);
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r8),
		MR_LABEL_AP(transform_hlds__distance_granularity__update_original_predicate_goal_9_0_i9) MR_AND
		MR_LABEL_AP(transform_hlds__distance_granularity__update_original_predicate_goal_9_0_i46) MR_AND
		MR_LABEL_AP(transform_hlds__distance_granularity__update_original_predicate_goal_9_0_i9) MR_AND
		MR_LABEL_AP(transform_hlds__distance_granularity__update_original_predicate_goal_9_0_i8));
MR_def_label(transform_hlds__distance_granularity__update_original_predicate_goal_9_0,46)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(transform_hlds__distance_granularity__update_original_predicate_plain_call_9_0);
MR_def_label(transform_hlds__distance_granularity__update_original_predicate_goal_9_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_ctfield(3, MR_r8, 0),
		MR_LABEL_AP(transform_hlds__distance_granularity__update_original_predicate_goal_9_0_i9) MR_AND
		MR_LABEL_AP(transform_hlds__distance_granularity__update_original_predicate_goal_9_0_i47) MR_AND
		MR_LABEL_AP(transform_hlds__distance_granularity__update_original_predicate_goal_9_0_i48) MR_AND
		MR_LABEL_AP(transform_hlds__distance_granularity__update_original_predicate_goal_9_0_i49) MR_AND
		MR_LABEL_AP(transform_hlds__distance_granularity__update_original_predicate_goal_9_0_i50) MR_AND
		MR_LABEL_AP(transform_hlds__distance_granularity__update_original_predicate_goal_9_0_i51) MR_AND
		MR_LABEL_AP(transform_hlds__distance_granularity__update_original_predicate_goal_9_0_i52) MR_AND
		MR_LABEL_AP(transform_hlds__distance_granularity__update_original_predicate_goal_9_0_i53));
MR_def_label(transform_hlds__distance_granularity__update_original_predicate_goal_9_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r6;
	MR_proceed();
MR_def_label(transform_hlds__distance_granularity__update_original_predicate_goal_9_0,47)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(10);
	MR_sv(10) = (MR_Word) MR_succip;
	MR_sv(6) = MR_ctfield(0, MR_r1, 1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r8;
	MR_sv(1) = MR_ctfield(3, MR_tempr1, 1);
	MR_r1 = MR_ctfield(3, MR_tempr1, 2);
	MR_r8 = MR_r7;
	MR_r7 = MR_r6;
	MR_r6 = MR_r5;
	MR_r5 = MR_r4;
	MR_r4 = MR_r3;
	MR_r3 = MR_r2;
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	}
	MR_np_call_localret_ent(transform_hlds__distance_granularity__update_original_predicate_goals_10_0,
		transform_hlds__distance_granularity__update_original_predicate_goal_9_0_i11);
MR_def_label(transform_hlds__distance_granularity__update_original_predicate_goal_9_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(1),0)) {
		MR_GOTO_LAB(transform_hlds__distance_granularity__update_original_predicate_goal_9_0_i13);
	}
	MR_sv(2) = MR_r2;
	MR_np_call_localret_ent(hlds__goal_util__flatten_conj_2_0,
		transform_hlds__distance_granularity__update_original_predicate_goal_9_0_i14);
MR_def_label(transform_hlds__distance_granularity__update_original_predicate_goal_9_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(1);
	MR_tfield(3, MR_tempr1, 2) = MR_r1;
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r1, 0) = MR_tempr1;
	MR_tfield(0, MR_r1, 1) = MR_sv(6);
	MR_r2 = MR_sv(2);
	MR_decr_sp_and_return(10);
	}
MR_def_label(transform_hlds__distance_granularity__update_original_predicate_goal_9_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(1);
	MR_tfield(3, MR_tempr1, 2) = MR_r1;
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r1, 0) = MR_tempr1;
	MR_tfield(0, MR_r1, 1) = MR_sv(6);
	MR_decr_sp_and_return(10);
	}
MR_def_label(transform_hlds__distance_granularity__update_original_predicate_goal_9_0,48)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(10);
	MR_sv(10) = (MR_Word) MR_succip;
	MR_sv(6) = MR_ctfield(0, MR_r1, 1);
	MR_r1 = MR_ctfield(3, MR_r8, 1);
	MR_r8 = MR_r7;
	MR_r7 = MR_r6;
	MR_r6 = MR_r5;
	MR_r5 = MR_r4;
	MR_r4 = MR_r3;
	MR_r3 = MR_r2;
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_np_call_localret_ent(transform_hlds__distance_granularity__update_original_predicate_goals_10_0,
		transform_hlds__distance_granularity__update_original_predicate_goal_9_0_i16);
MR_def_label(transform_hlds__distance_granularity__update_original_predicate_goal_9_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 2;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r1, 0) = MR_tempr1;
	MR_tfield(0, MR_r1, 1) = MR_sv(6);
	MR_decr_sp_and_return(10);
	}
MR_def_label(transform_hlds__distance_granularity__update_original_predicate_goal_9_0,49)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(10);
	MR_sv(10) = (MR_Word) MR_succip;
	MR_sv(6) = MR_ctfield(0, MR_r1, 1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r8;
	MR_sv(1) = MR_ctfield(3, MR_tempr1, 1);
	MR_sv(2) = MR_ctfield(3, MR_tempr1, 2);
	MR_r1 = MR_ctfield(3, MR_tempr1, 3);
	MR_r8 = MR_r7;
	MR_r7 = MR_r6;
	MR_r6 = MR_r5;
	MR_r5 = MR_r4;
	MR_r4 = MR_r3;
	MR_r3 = MR_r2;
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	}
	MR_np_call_localret_ent(transform_hlds__distance_granularity__update_original_predicate_switch_10_0,
		transform_hlds__distance_granularity__update_original_predicate_goal_9_0_i18);
MR_def_label(transform_hlds__distance_granularity__update_original_predicate_goal_9_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 4);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 3;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(1);
	MR_tfield(3, MR_tempr1, 2) = MR_sv(2);
	MR_tfield(3, MR_tempr1, 3) = MR_r1;
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r1, 0) = MR_tempr1;
	MR_tfield(0, MR_r1, 1) = MR_sv(6);
	MR_decr_sp_and_return(10);
	}
MR_def_label(transform_hlds__distance_granularity__update_original_predicate_goal_9_0,50)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(10);
	MR_sv(10) = (MR_Word) MR_succip;
	MR_sv(6) = MR_ctfield(0, MR_r1, 1);
	MR_r1 = MR_ctfield(3, MR_r8, 1);
	MR_np_localcall_lab(transform_hlds__distance_granularity__update_original_predicate_goal_9_0,
		transform_hlds__distance_granularity__update_original_predicate_goal_9_0_i20);
MR_def_label(transform_hlds__distance_granularity__update_original_predicate_goal_9_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 4;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r1, 0) = MR_tempr1;
	MR_tfield(0, MR_r1, 1) = MR_sv(6);
	MR_decr_sp_and_return(10);
	}
MR_def_label(transform_hlds__distance_granularity__update_original_predicate_goal_9_0,51)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(10);
	MR_sv(10) = (MR_Word) MR_succip;
	MR_sv(6) = MR_ctfield(0, MR_r1, 1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r8;
	MR_sv(1) = MR_ctfield(3, MR_tempr1, 1);
	MR_r1 = MR_ctfield(3, MR_tempr1, 2);
	}
	MR_np_localcall_lab(transform_hlds__distance_granularity__update_original_predicate_goal_9_0,
		transform_hlds__distance_granularity__update_original_predicate_goal_9_0_i22);
MR_def_label(transform_hlds__distance_granularity__update_original_predicate_goal_9_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 5;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(1);
	MR_tfield(3, MR_tempr1, 2) = MR_r1;
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r1, 0) = MR_tempr1;
	MR_tfield(0, MR_r1, 1) = MR_sv(6);
	MR_decr_sp_and_return(10);
	}
MR_def_label(transform_hlds__distance_granularity__update_original_predicate_goal_9_0,52)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(10);
	MR_sv(10) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_r5;
	MR_sv(5) = MR_r7;
	MR_sv(6) = MR_ctfield(0, MR_r1, 1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r8;
	MR_sv(7) = MR_ctfield(3, MR_tempr1, 1);
	MR_sv(8) = MR_ctfield(3, MR_tempr1, 3);
	MR_sv(9) = MR_ctfield(3, MR_tempr1, 4);
	MR_r1 = MR_ctfield(3, MR_tempr1, 2);
	}
	MR_np_localcall_lab(transform_hlds__distance_granularity__update_original_predicate_goal_9_0,
		transform_hlds__distance_granularity__update_original_predicate_goal_9_0_i24);
MR_def_label(transform_hlds__distance_granularity__update_original_predicate_goal_9_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(8);
	MR_sv(8) = MR_tempr1;
	MR_r6 = MR_r2;
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(4);
	MR_r7 = MR_sv(5);
	}
	MR_np_localcall_lab(transform_hlds__distance_granularity__update_original_predicate_goal_9_0,
		transform_hlds__distance_granularity__update_original_predicate_goal_9_0_i25);
MR_def_label(transform_hlds__distance_granularity__update_original_predicate_goal_9_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r6 = MR_r2;
	MR_r2 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(9);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(4);
	MR_r7 = MR_sv(5);
	MR_np_localcall_lab(transform_hlds__distance_granularity__update_original_predicate_goal_9_0,
		transform_hlds__distance_granularity__update_original_predicate_goal_9_0_i26);
MR_def_label(transform_hlds__distance_granularity__update_original_predicate_goal_9_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 5);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 6;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(7);
	MR_tfield(3, MR_tempr1, 2) = MR_sv(8);
	MR_tfield(3, MR_tempr1, 3) = MR_sv(1);
	MR_tfield(3, MR_tempr1, 4) = MR_r1;
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r1, 0) = MR_tempr1;
	MR_tfield(0, MR_r1, 1) = MR_sv(6);
	MR_decr_sp_and_return(10);
	}
MR_def_label(transform_hlds__distance_granularity__update_original_predicate_goal_9_0,53)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(10);
	MR_sv(10) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(fn__transform_hlds__distance_granularity__this_file_0_0,
		transform_hlds__distance_granularity__update_original_predicate_goal_9_0_i28);
MR_def_label(transform_hlds__distance_granularity__update_original_predicate_goal_9_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("update_original_predicate_goal", 30);
	MR_succip_word = MR_sv(10);
	MR_decr_sp(10);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__distance_granularity_module12)
	MR_init_entry1(transform_hlds__distance_granularity__update_original_predicate_goals_10_0);
	MR_init_label4(transform_hlds__distance_granularity__update_original_predicate_goals_10_0,12,4,5,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__distance_granularity__update_original_predicate_goals_10_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
MR_def_label(transform_hlds__distance_granularity__update_original_predicate_goals_10_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(transform_hlds__distance_granularity__update_original_predicate_goals_10_0_i3);
	}
	MR_sv(1) = MR_r2;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tempr1 = MR_r3;
	MR_sv(2) = MR_tempr1;
	MR_tempr2 = MR_r4;
	MR_sv(3) = MR_tempr2;
	MR_tempr3 = MR_r5;
	MR_sv(4) = MR_tempr3;
	MR_tempr4 = MR_r6;
	MR_sv(5) = MR_tempr4;
	MR_tempr5 = MR_r8;
	MR_sv(6) = MR_tempr5;
	MR_sv(7) = MR_ctfield(1, MR_r1, 1);
	MR_r1 = MR_ctfield(1, MR_r1, 0);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	MR_r4 = MR_tempr3;
	MR_r5 = MR_tempr4;
	MR_r6 = MR_r7;
	MR_r7 = MR_tempr5;
	}
	MR_np_call_localret_ent(transform_hlds__distance_granularity__update_original_predicate_goal_9_0,
		transform_hlds__distance_granularity__update_original_predicate_goals_10_0_i4);
MR_def_label(transform_hlds__distance_granularity__update_original_predicate_goals_10_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_sv(1);
	MR_sv(1) = MR_tempr2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	}
	MR_np_call_localret_ent(list__append_3_1,
		transform_hlds__distance_granularity__update_original_predicate_goals_10_0_i5);
MR_def_label(transform_hlds__distance_granularity__update_original_predicate_goals_10_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(4);
	MR_r6 = MR_sv(5);
	MR_r7 = MR_sv(1);
	MR_r8 = MR_sv(6);
	MR_succip_word = MR_sv(8);
	MR_GOTO_LAB(transform_hlds__distance_granularity__update_original_predicate_goals_10_0_i12);
MR_def_label(transform_hlds__distance_granularity__update_original_predicate_goals_10_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_r2 = MR_r7;
	MR_decr_sp_and_return(8);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__distance_granularity_module13)
	MR_init_entry1(transform_hlds__distance_granularity__update_original_predicate_switch_10_0);
	MR_init_label3(transform_hlds__distance_granularity__update_original_predicate_switch_10_0,11,4,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__distance_granularity__update_original_predicate_switch_10_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
MR_def_label(transform_hlds__distance_granularity__update_original_predicate_switch_10_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(transform_hlds__distance_granularity__update_original_predicate_switch_10_0_i3);
	}
	MR_sv(1) = MR_r2;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr2 = MR_r3;
	MR_sv(2) = MR_tempr2;
	MR_tempr3 = MR_r4;
	MR_sv(3) = MR_tempr3;
	MR_tempr4 = MR_r5;
	MR_sv(4) = MR_tempr4;
	MR_tempr5 = MR_r6;
	MR_sv(5) = MR_tempr5;
	MR_tempr6 = MR_r8;
	MR_sv(6) = MR_tempr6;
	MR_sv(7) = MR_ctfield(1, MR_r1, 1);
	MR_tempr1 = MR_ctfield(1, MR_r1, 0);
	MR_sv(8) = MR_ctfield(0, MR_tempr1, 0);
	MR_r1 = MR_ctfield(0, MR_tempr1, 1);
	MR_r2 = MR_tempr2;
	MR_r3 = MR_tempr3;
	MR_r4 = MR_tempr4;
	MR_r5 = MR_tempr5;
	MR_r6 = MR_r7;
	MR_r7 = MR_tempr6;
	}
	MR_np_call_localret_ent(transform_hlds__distance_granularity__update_original_predicate_goal_9_0,
		transform_hlds__distance_granularity__update_original_predicate_switch_10_0_i4);
MR_def_label(transform_hlds__distance_granularity__update_original_predicate_switch_10_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(8);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = MR_sv(1);
	MR_r1 = MR_sv(7);
	MR_r7 = MR_r2;
	MR_r2 = MR_tempr2;
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(4);
	MR_r6 = MR_sv(5);
	MR_r8 = MR_sv(6);
	MR_succip_word = MR_sv(9);
	MR_GOTO_LAB(transform_hlds__distance_granularity__update_original_predicate_switch_10_0_i11);
	}
MR_def_label(transform_hlds__distance_granularity__update_original_predicate_switch_10_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_r2 = MR_r7;
	MR_decr_sp_and_return(9);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__distance_granularity_module14)
	MR_init_entry1(transform_hlds__distance_granularity__update_original_predicate_procs_9_0);
	MR_init_label8(transform_hlds__distance_granularity__update_original_predicate_procs_9_0,17,4,5,6,7,8,9,10)
	MR_init_label1(transform_hlds__distance_granularity__update_original_predicate_procs_9_0,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__distance_granularity__update_original_predicate_procs_9_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(10);
	MR_sv(10) = (MR_Word) MR_succip;
MR_def_label(transform_hlds__distance_granularity__update_original_predicate_procs_9_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r2,0,0)) {
		MR_GOTO_LAB(transform_hlds__distance_granularity__update_original_predicate_procs_9_0_i3);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tempr2 = MR_r2;
	MR_tfield(0, MR_tempr1, 1) = MR_ctfield(1, MR_tempr2, 0);
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_r5;
	MR_sv(5) = MR_r6;
	MR_tempr3 = MR_r7;
	MR_sv(6) = MR_tempr3;
	MR_sv(7) = MR_ctfield(0, MR_tempr1, 1);
	MR_sv(8) = MR_ctfield(1, MR_tempr2, 1);
	MR_r1 = MR_tempr3;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_module__module_info_proc_info_3_0,
		transform_hlds__distance_granularity__update_original_predicate_procs_9_0_i4);
MR_def_label(transform_hlds__distance_granularity__update_original_predicate_procs_9_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_r1;
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_goal_2_0,
		transform_hlds__distance_granularity__update_original_predicate_procs_9_0_i5);
MR_def_label(transform_hlds__distance_granularity__update_original_predicate_procs_9_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(7);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(4);
	MR_r6 = MR_sv(9);
	MR_r7 = MR_sv(2);
	MR_np_call_localret_ent(transform_hlds__distance_granularity__update_original_predicate_goal_9_0,
		transform_hlds__distance_granularity__update_original_predicate_procs_9_0_i6);
MR_def_label(transform_hlds__distance_granularity__update_original_predicate_procs_9_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_set_goal_3_0,
		transform_hlds__distance_granularity__update_original_predicate_procs_9_0_i7);
MR_def_label(transform_hlds__distance_granularity__update_original_predicate_procs_9_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(hlds__quantification__requantify_proc_2_0,
		transform_hlds__distance_granularity__update_original_predicate_procs_9_0_i8);
MR_def_label(transform_hlds__distance_granularity__update_original_predicate_procs_9_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Integer) 0;
	MR_r3 = MR_sv(6);
	MR_np_call_localret_ent(check_hlds__mode_util__recompute_instmap_delta_proc_5_0,
		transform_hlds__distance_granularity__update_original_predicate_procs_9_0_i9);
MR_def_label(transform_hlds__distance_granularity__update_original_predicate_procs_9_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(5);
	MR_sv(5) = MR_r2;
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_set_proc_info_4_0,
		transform_hlds__distance_granularity__update_original_predicate_procs_9_0_i10);
MR_def_label(transform_hlds__distance_granularity__update_original_predicate_procs_9_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r6 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(8);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(4);
	MR_r7 = MR_sv(5);
	MR_succip_word = MR_sv(10);
	MR_GOTO_LAB(transform_hlds__distance_granularity__update_original_predicate_procs_9_0_i17);
MR_def_label(transform_hlds__distance_granularity__update_original_predicate_procs_9_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r6;
	MR_r2 = MR_r7;
	MR_decr_sp_and_return(10);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__hlds_module__module_info_pred_info_3_0);
MR_decl_entry(hlds__hlds_module__module_info_get_predicate_table_2_0);
MR_decl_entry(hlds__pred_table__get_next_pred_id_2_0);
MR_decl_entry(fn__hlds__hlds_pred__pred_info_module_1_0);
MR_decl_entry(fn__hlds__hlds_pred__pred_info_name_1_0);
MR_decl_entry(parse_tree__prog_util__make_pred_name_6_0);
MR_decl_entry(fn__hlds__hlds_pred__pred_info_non_imported_procids_1_0);
MR_decl_entry(string__int_to_string_2_0);
MR_decl_entry(string__format_3_0);
MR_decl_entry(hlds__hlds_pred__pred_info_set_name_3_0);
MR_decl_entry(hlds__hlds_pred__pred_info_set_is_pred_or_func_3_0);
MR_decl_entry(fn__hlds__hlds_pred__pred_info_orig_arity_1_0);
MR_decl_entry(hlds__hlds_pred__pred_info_set_orig_arity_3_0);
MR_decl_entry(hlds__hlds_pred__pred_info_get_arg_types_2_0);
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_mer_type_0;
MR_decl_entry(hlds__hlds_pred__pred_info_get_typevarset_2_0);
MR_decl_entry(hlds__hlds_pred__pred_info_get_exist_quant_tvars_2_0);
MR_decl_entry(hlds__hlds_pred__pred_info_set_arg_types_5_0);
MR_decl_entry(hlds__pred_table__predicate_table_insert_4_0);
MR_decl_entry(hlds__hlds_module__module_info_set_predicate_table_3_0);
MR_decl_entry(hlds__hlds_module__module_info_set_pred_info_4_0);

MR_BEGIN_MODULE(transform_hlds__distance_granularity_module15)
	MR_init_entry1(transform_hlds__distance_granularity__apply_dg_to_preds_4_0);
	MR_init_label8(transform_hlds__distance_granularity__apply_dg_to_preds_4_0,41,4,5,6,7,8,9,10)
	MR_init_label8(transform_hlds__distance_granularity__apply_dg_to_preds_4_0,11,13,14,15,16,17,18,19)
	MR_init_label8(transform_hlds__distance_granularity__apply_dg_to_preds_4_0,20,21,22,23,24,25,26,27)
	MR_init_label4(transform_hlds__distance_granularity__apply_dg_to_preds_4_0,28,29,30,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__distance_granularity__apply_dg_to_preds_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(12);
	MR_sv(12) = (MR_Word) MR_succip;
MR_def_label(transform_hlds__distance_granularity__apply_dg_to_preds_4_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(transform_hlds__distance_granularity__apply_dg_to_preds_4_0_i3);
	}
	MR_sv(1) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(2) = MR_tempr1;
	MR_sv(3) = MR_ctfield(1, MR_r1, 0);
	MR_sv(4) = MR_ctfield(1, MR_r1, 1);
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(3);
	}
	MR_np_call_localret_ent(hlds__hlds_module__module_info_pred_info_3_0,
		transform_hlds__distance_granularity__apply_dg_to_preds_4_0_i4);
MR_def_label(transform_hlds__distance_granularity__apply_dg_to_preds_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_predicate_table_2_0,
		transform_hlds__distance_granularity__apply_dg_to_preds_4_0_i5);
MR_def_label(transform_hlds__distance_granularity__apply_dg_to_preds_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(hlds__pred_table__get_next_pred_id_2_0,
		transform_hlds__distance_granularity__apply_dg_to_preds_4_0_i6);
MR_def_label(transform_hlds__distance_granularity__apply_dg_to_preds_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(fn__hlds__hlds_pred__pred_info_module_1_0,
		transform_hlds__distance_granularity__apply_dg_to_preds_4_0_i7);
MR_def_label(transform_hlds__distance_granularity__apply_dg_to_preds_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_sv(9) = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(1);
	MR_sv(7) = MR_r1;
	MR_sv(8) = (MR_Word) MR_TAG_COMMON(1,5,1);
	MR_r1 = MR_sv(5);
	}
	MR_np_call_localret_ent(fn__hlds__hlds_pred__pred_info_name_1_0,
		transform_hlds__distance_granularity__apply_dg_to_preds_4_0_i8);
MR_def_label(transform_hlds__distance_granularity__apply_dg_to_preds_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_sv(7) = MR_r4;
	MR_r2 = (MR_Word) MR_string_const("DistanceGranularityFor", 22);
	MR_r3 = MR_sv(8);
	MR_r5 = MR_sv(9);
	MR_np_call_localret_ent(parse_tree__prog_util__make_pred_name_6_0,
		transform_hlds__distance_granularity__apply_dg_to_preds_4_0_i9);
MR_def_label(transform_hlds__distance_granularity__apply_dg_to_preds_4_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(fn__hlds__hlds_pred__pred_info_non_imported_procids_1_0,
		transform_hlds__distance_granularity__apply_dg_to_preds_4_0_i10);
MR_def_label(transform_hlds__distance_granularity__apply_dg_to_preds_4_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r8 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(6);
	MR_r5 = MR_sv(8);
	MR_r6 = MR_sv(5);
	MR_r7 = (MR_Integer) 0;
	MR_np_call_localret_ent(transform_hlds__distance_granularity__apply_dg_to_procs_11_0,
		transform_hlds__distance_granularity__apply_dg_to_preds_4_0_i11);
MR_def_label(transform_hlds__distance_granularity__apply_dg_to_preds_4_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r2,0)) {
		MR_GOTO_LAB(transform_hlds__distance_granularity__apply_dg_to_preds_4_0_i13);
	}
	MR_r2 = MR_sv(1);
	MR_r1 = MR_sv(4);
	MR_succip_word = MR_sv(12);
	MR_GOTO_LAB(transform_hlds__distance_granularity__apply_dg_to_preds_4_0_i41);
MR_def_label(transform_hlds__distance_granularity__apply_dg_to_preds_4_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_r1;
	MR_sv(11) = MR_r3;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(string__int_to_string_2_0,
		transform_hlds__distance_granularity__apply_dg_to_preds_4_0_i14);
MR_def_label(transform_hlds__distance_granularity__apply_dg_to_preds_4_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr1, 0) = MR_sv(7);
	MR_tag_alloc_heap(MR_tempr2, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr2, 0) = MR_r1;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr3, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = (MR_Word) MR_TAG_COMMON(2,1,3);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr4;
	MR_tfield(1, MR_tempr4, 0) = (MR_Word) MR_TAG_COMMON(2,1,2);
	MR_tfield(1, MR_tempr4, 1) = MR_tempr1;
	MR_r1 = (MR_Word) MR_string_const("%s__%s__%s__%s", 14);
	}
	MR_np_call_localret_ent(string__format_3_0,
		transform_hlds__distance_granularity__apply_dg_to_preds_4_0_i15);
MR_def_label(transform_hlds__distance_granularity__apply_dg_to_preds_4_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(9);
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_set_name_3_0,
		transform_hlds__distance_granularity__apply_dg_to_preds_4_0_i16);
MR_def_label(transform_hlds__distance_granularity__apply_dg_to_preds_4_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Integer) 0;
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_set_is_pred_or_func_3_0,
		transform_hlds__distance_granularity__apply_dg_to_preds_4_0_i17);
MR_def_label(transform_hlds__distance_granularity__apply_dg_to_preds_4_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_np_call_localret_ent(fn__hlds__hlds_pred__pred_info_orig_arity_1_0,
		transform_hlds__distance_granularity__apply_dg_to_preds_4_0_i18);
MR_def_label(transform_hlds__distance_granularity__apply_dg_to_preds_4_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = ((MR_Integer) MR_r1 + (MR_Integer) 1);
	MR_r2 = MR_sv(7);
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_set_orig_arity_3_0,
		transform_hlds__distance_granularity__apply_dg_to_preds_4_0_i19);
MR_def_label(transform_hlds__distance_granularity__apply_dg_to_preds_4_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_arg_types_2_0,
		transform_hlds__distance_granularity__apply_dg_to_preds_4_0_i20);
MR_def_label(transform_hlds__distance_granularity__apply_dg_to_preds_4_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_r1;
	MR_np_call_localret_ent(fn__parse_tree__prog_type__int_type_0_0,
		transform_hlds__distance_granularity__apply_dg_to_preds_4_0_i21);
MR_def_label(transform_hlds__distance_granularity__apply_dg_to_preds_4_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r2 = MR_sv(9);
	}
	MR_np_call_localret_ent(list__append_3_1,
		transform_hlds__distance_granularity__apply_dg_to_preds_4_0_i22);
MR_def_label(transform_hlds__distance_granularity__apply_dg_to_preds_4_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_r1;
	MR_r1 = MR_sv(7);
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_typevarset_2_0,
		transform_hlds__distance_granularity__apply_dg_to_preds_4_0_i23);
MR_def_label(transform_hlds__distance_granularity__apply_dg_to_preds_4_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(10) = MR_r1;
	MR_r1 = MR_sv(7);
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_exist_quant_tvars_2_0,
		transform_hlds__distance_granularity__apply_dg_to_preds_4_0_i24);
MR_def_label(transform_hlds__distance_granularity__apply_dg_to_preds_4_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(10);
	MR_r3 = MR_sv(9);
	MR_r4 = MR_sv(7);
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_set_arg_types_5_0,
		transform_hlds__distance_granularity__apply_dg_to_preds_4_0_i25);
MR_def_label(transform_hlds__distance_granularity__apply_dg_to_preds_4_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_r1 = MR_sv(11);
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_predicate_table_2_0,
		transform_hlds__distance_granularity__apply_dg_to_preds_4_0_i26);
MR_def_label(transform_hlds__distance_granularity__apply_dg_to_preds_4_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_np_call_localret_ent(hlds__pred_table__predicate_table_insert_4_0,
		transform_hlds__distance_granularity__apply_dg_to_preds_4_0_i27);
MR_def_label(transform_hlds__distance_granularity__apply_dg_to_preds_4_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_r2 = MR_sv(11);
	MR_np_call_localret_ent(hlds__hlds_module__module_info_set_predicate_table_3_0,
		transform_hlds__distance_granularity__apply_dg_to_preds_4_0_i28);
MR_def_label(transform_hlds__distance_granularity__apply_dg_to_preds_4_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r7 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(6);
	MR_r5 = MR_sv(8);
	MR_r6 = MR_sv(5);
	MR_np_call_localret_ent(transform_hlds__distance_granularity__update_original_predicate_procs_9_0,
		transform_hlds__distance_granularity__apply_dg_to_preds_4_0_i29);
MR_def_label(transform_hlds__distance_granularity__apply_dg_to_preds_4_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r2;
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(hlds__hlds_module__module_info_set_pred_info_4_0,
		transform_hlds__distance_granularity__apply_dg_to_preds_4_0_i30);
MR_def_label(transform_hlds__distance_granularity__apply_dg_to_preds_4_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_succip_word = MR_sv(12);
	MR_GOTO_LAB(transform_hlds__distance_granularity__apply_dg_to_preds_4_0_i41);
MR_def_label(transform_hlds__distance_granularity__apply_dg_to_preds_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r3;
	MR_decr_sp_and_return(12);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__hlds_module__module_info_predids_3_0);

MR_BEGIN_MODULE(transform_hlds__distance_granularity_module16)
	MR_init_entry1(transform_hlds__distance_granularity__control_distance_granularity_3_0);
	MR_init_label1(transform_hlds__distance_granularity__control_distance_granularity_3_0,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__transform_hlds__distance_granularity__control_distance_granularity_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_np_call_localret_ent(hlds__hlds_module__module_info_predids_3_0,
		transform_hlds__distance_granularity__control_distance_granularity_3_0_i2);
MR_def_label(transform_hlds__distance_granularity__control_distance_granularity_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r2;
	MR_r2 = MR_sv(1);
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(transform_hlds__distance_granularity__apply_dg_to_preds_4_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__distance_granularity_module17)
	MR_init_entry1(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_100_105_115_116_97_110_99_101_95_103_114_97_110_117_108_97_114_105_116_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_112_112_108_121_95_100_103_95_116_111_95_116_104_101_110_95_95_91_51_93_95_48_8_0);
	MR_init_label8(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_100_105_115_116_97_110_99_101_95_103_114_97_110_117_108_97_114_105_116_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_112_112_108_121_95_100_103_95_116_111_95_116_104_101_110_95_95_91_51_93_95_48_8_0,2,5,6,7,8,9,10,11)
	MR_init_label2(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_100_105_115_116_97_110_99_101_95_103_114_97_110_117_108_97_114_105_116_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_112_112_108_121_95_100_103_95_116_111_95_116_104_101_110_95_95_91_51_93_95_48_8_0,12,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_100_105_115_116_97_110_99_101_95_103_114_97_110_117_108_97_114_105_116_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_112_112_108_121_95_100_103_95_116_111_95_116_104_101_110_95_95_91_51_93_95_48_8_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(1) = MR_ctfield(0, MR_r1, 1);
	MR_r1 = MR_ctfield(0, MR_r1, 0);
	MR_r6 = MR_r5;
	MR_r5 = MR_r4;
	MR_r4 = MR_r3;
	MR_r3 = MR_r2;
	MR_r2 = (MR_Integer) 1;
	MR_np_call_localret_ent(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_100_105_115_116_97_110_99_101_95_103_114_97_110_117_108_97_114_105_116_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_112_112_108_121_95_100_103_95_116_111_95_116_104_101_110_50_95_95_91_53_93_95_48_10_0,
		f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_100_105_115_116_97_110_99_101_95_103_114_97_110_117_108_97_114_105_116_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_112_112_108_121_95_100_103_95_116_111_95_116_104_101_110_95_95_91_51_93_95_48_8_0_i2);
MR_def_label(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_100_105_115_116_97_110_99_101_95_103_114_97_110_117_108_97_114_105_116_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_112_112_108_121_95_100_103_95_116_111_95_116_104_101_110_95_95_91_51_93_95_48_8_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tfield(0, MR_tempr1, 1) = MR_sv(1);
	MR_tempr2 = MR_ctfield(0, MR_tempr1, 0);
	if (MR_RTAGS_TESTR(MR_tempr2,3,1)) {
		MR_GOTO_LAB(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_100_105_115_116_97_110_99_101_95_103_114_97_110_117_108_97_114_105_116_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_112_112_108_121_95_100_103_95_116_111_95_116_104_101_110_95_95_91_51_93_95_48_8_0_i3);
	}
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_ctfield(3, MR_tempr2, 2);
	MR_sv(3) = MR_ctfield(0, MR_tempr1, 1);
	MR_sv(6) = MR_tempr2;
	MR_r1 = MR_sv(2);
	}
	MR_np_call_localret_ent(hlds__hlds_goal__goal_list_nonlocals_2_0,
		f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_100_105_115_116_97_110_99_101_95_103_114_97_110_117_108_97_114_105_116_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_112_112_108_121_95_100_103_95_116_111_95_116_104_101_110_95_95_91_51_93_95_48_8_0_i5);
MR_def_label(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_100_105_115_116_97_110_99_101_95_103_114_97_110_117_108_97_114_105_116_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_112_112_108_121_95_100_103_95_116_111_95_116_104_101_110_95_95_91_51_93_95_48_8_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(hlds__hlds_goal__goal_list_instmap_delta_2_0,
		f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_100_105_115_116_97_110_99_101_95_103_114_97_110_117_108_97_114_105_116_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_112_112_108_121_95_100_103_95_116_111_95_116_104_101_110_95_95_91_51_93_95_48_8_0_i6);
MR_def_label(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_100_105_115_116_97_110_99_101_95_103_114_97_110_117_108_97_114_105_116_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_112_112_108_121_95_100_103_95_116_111_95_116_104_101_110_95_95_91_51_93_95_48_8_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(hlds__hlds_goal__goal_list_determinism_2_0,
		f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_100_105_115_116_97_110_99_101_95_103_114_97_110_117_108_97_114_105_116_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_112_112_108_121_95_100_103_95_116_111_95_116_104_101_110_95_95_91_51_93_95_48_8_0_i7);
MR_def_label(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_100_105_115_116_97_110_99_101_95_103_114_97_110_117_108_97_114_105_116_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_112_112_108_121_95_100_103_95_116_111_95_116_104_101_110_95_95_91_51_93_95_48_8_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_sv(2) = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_goal__goal_list_purity_2_0,
		f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_100_105_115_116_97_110_99_101_95_103_114_97_110_117_108_97_114_105_116_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_112_112_108_121_95_100_103_95_116_111_95_116_104_101_110_95_95_91_51_93_95_48_8_0_i8);
MR_def_label(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_100_105_115_116_97_110_99_101_95_103_114_97_110_117_108_97_114_105_116_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_112_112_108_121_95_100_103_95_116_111_95_116_104_101_110_95_95_91_51_93_95_48_8_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_set_nonlocals_3_0,
		f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_100_105_115_116_97_110_99_101_95_103_114_97_110_117_108_97_114_105_116_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_112_112_108_121_95_100_103_95_116_111_95_116_104_101_110_95_95_91_51_93_95_48_8_0_i9);
MR_def_label(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_100_105_115_116_97_110_99_101_95_103_114_97_110_117_108_97_114_105_116_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_112_112_108_121_95_100_103_95_116_111_95_116_104_101_110_95_95_91_51_93_95_48_8_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_set_instmap_delta_3_0,
		f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_100_105_115_116_97_110_99_101_95_103_114_97_110_117_108_97_114_105_116_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_112_112_108_121_95_100_103_95_116_111_95_116_104_101_110_95_95_91_51_93_95_48_8_0_i10);
MR_def_label(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_100_105_115_116_97_110_99_101_95_103_114_97_110_117_108_97_114_105_116_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_112_112_108_121_95_100_103_95_116_111_95_116_104_101_110_95_95_91_51_93_95_48_8_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_set_determinism_3_0,
		f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_100_105_115_116_97_110_99_101_95_103_114_97_110_117_108_97_114_105_116_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_112_112_108_121_95_100_103_95_116_111_95_116_104_101_110_95_95_91_51_93_95_48_8_0_i11);
MR_def_label(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_100_105_115_116_97_110_99_101_95_103_114_97_110_117_108_97_114_105_116_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_112_112_108_121_95_100_103_95_116_111_95_116_104_101_110_95_95_91_51_93_95_48_8_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_set_purity_3_0,
		f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_100_105_115_116_97_110_99_101_95_103_114_97_110_117_108_97_114_105_116_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_112_112_108_121_95_100_103_95_116_111_95_116_104_101_110_95_95_91_51_93_95_48_8_0_i12);
MR_def_label(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_100_105_115_116_97_110_99_101_95_103_114_97_110_117_108_97_114_105_116_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_112_112_108_121_95_100_103_95_116_111_95_116_104_101_110_95_95_91_51_93_95_48_8_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(6);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(1);
	MR_decr_sp_and_return(7);
	}
MR_def_label(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_100_105_115_116_97_110_99_101_95_103_114_97_110_117_108_97_114_105_116_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_112_112_108_121_95_100_103_95_116_111_95_116_104_101_110_95_95_91_51_93_95_48_8_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("distance_granularity.m", 22);
	MR_r2 = (MR_Word) MR_string_const("recompute_conj_info", 19);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__distance_granularity_module18)
	MR_init_entry1(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_100_105_115_116_97_110_99_101_95_103_114_97_110_117_108_97_114_105_116_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_112_112_108_121_95_100_103_95_116_111_95_116_104_101_110_50_95_95_91_53_93_95_48_10_0);
	MR_init_label8(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_100_105_115_116_97_110_99_101_95_103_114_97_110_117_108_97_114_105_116_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_112_112_108_121_95_100_103_95_116_111_95_116_104_101_110_50_95_95_91_53_93_95_48_10_0,57,5,6,7,11,12,13,14)
	MR_init_label7(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_100_105_115_116_97_110_99_101_95_103_114_97_110_117_108_97_114_105_116_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_112_112_108_121_95_100_103_95_116_111_95_116_104_101_110_50_95_95_91_53_93_95_48_10_0,15,16,17,18,19,8,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_100_105_115_116_97_110_99_101_95_103_114_97_110_117_108_97_114_105_116_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_112_112_108_121_95_100_103_95_116_111_95_116_104_101_110_50_95_95_91_53_93_95_48_10_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(14);
	MR_sv(14) = (MR_Word) MR_succip;
MR_def_label(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_100_105_115_116_97_110_99_101_95_103_114_97_110_117_108_97_114_105_116_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_112_112_108_121_95_100_103_95_116_111_95_116_104_101_110_50_95_95_91_53_93_95_48_10_0,57)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,1)) {
		MR_GOTO_LAB(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_100_105_115_116_97_110_99_101_95_103_114_97_110_117_108_97_114_105_116_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_112_112_108_121_95_100_103_95_116_111_95_116_104_101_110_50_95_95_91_53_93_95_48_10_0_i2);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(3, MR_r1, 1);
	if (MR_INT_NE(MR_tempr1,1)) {
		MR_GOTO_LAB(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_100_105_115_116_97_110_99_101_95_103_114_97_110_117_108_97_114_105_116_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_112_112_108_121_95_100_103_95_116_111_95_116_104_101_110_50_95_95_91_53_93_95_48_10_0_i2);
	}
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_r5;
	MR_sv(5) = MR_ctfield(3, MR_r1, 2);
	MR_sv(1) = MR_r1;
	MR_sv(12) = MR_r2;
	MR_sv(11) = MR_r6;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	MR_r2 = MR_sv(5);
	}
	MR_np_call_localret_ent(list__length_2_0,
		f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_100_105_115_116_97_110_99_101_95_103_114_97_110_117_108_97_114_105_116_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_112_112_108_121_95_100_103_95_116_111_95_116_104_101_110_50_95_95_91_53_93_95_48_10_0_i5);
MR_def_label(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_100_105_115_116_97_110_99_101_95_103_114_97_110_117_108_97_114_105_116_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_112_112_108_121_95_100_103_95_116_111_95_116_104_101_110_50_95_95_91_53_93_95_48_10_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) MR_sv(12) <= (MR_Integer) MR_r1)) {
		MR_GOTO_LAB(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_100_105_115_116_97_110_99_101_95_103_114_97_110_117_108_97_114_105_116_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_112_112_108_121_95_100_103_95_116_111_95_116_104_101_110_50_95_95_91_53_93_95_48_10_0_i6);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(12);
	MR_r3 = MR_sv(11);
	MR_decr_sp_and_return(14);
MR_def_label(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_100_105_115_116_97_110_99_101_95_103_114_97_110_117_108_97_114_105_116_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_112_112_108_121_95_100_103_95_116_111_95_116_104_101_110_50_95_95_91_53_93_95_48_10_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(12);
	MR_np_call_localret_ent(list__index1_det_3_0,
		f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_100_105_115_116_97_110_99_101_95_103_114_97_110_117_108_97_114_105_116_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_112_112_108_121_95_100_103_95_116_111_95_116_104_101_110_50_95_95_91_53_93_95_48_10_0_i7);
MR_def_label(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_100_105_115_116_97_110_99_101_95_103_114_97_110_117_108_97_114_105_116_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_112_112_108_121_95_100_103_95_116_111_95_116_104_101_110_50_95_95_91_53_93_95_48_10_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_ctfield(0, MR_r1, 0);
	if (MR_PTAG_TESTR(MR_tempr1,1)) {
		MR_GOTO_LAB(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_100_105_115_116_97_110_99_101_95_103_114_97_110_117_108_97_114_105_116_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_112_112_108_121_95_100_103_95_116_111_95_116_104_101_110_50_95_95_91_53_93_95_48_10_0_i8);
	}
	MR_tempr2 = MR_ctfield(1, MR_tempr1, 0);
	if ((MR_tempr2 != MR_sv(2))) {
		MR_GOTO_LAB(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_100_105_115_116_97_110_99_101_95_103_114_97_110_117_108_97_114_105_116_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_112_112_108_121_95_100_103_95_116_111_95_116_104_101_110_50_95_95_91_53_93_95_48_10_0_i8);
	}
	MR_tempr3 = MR_ctfield(1, MR_tempr1, 1);
	if ((MR_tempr3 != MR_sv(3))) {
		MR_GOTO_LAB(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_100_105_115_116_97_110_99_101_95_103_114_97_110_117_108_97_114_105_116_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_112_112_108_121_95_100_103_95_116_111_95_116_104_101_110_50_95_95_91_53_93_95_48_10_0_i8);
	}
	MR_sv(6) = MR_ctfield(0, MR_r1, 1);
	MR_sv(1) = MR_tempr2;
	MR_sv(7) = MR_tempr3;
	MR_sv(8) = MR_ctfield(1, MR_tempr1, 2);
	MR_sv(9) = MR_ctfield(1, MR_tempr1, 3);
	MR_sv(10) = MR_ctfield(1, MR_tempr1, 5);
	}
	MR_np_call_localret_ent(fn__parse_tree__prog_type__int_type_0_0,
		f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_100_105_115_116_97_110_99_101_95_103_114_97_110_117_108_97_114_105_116_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_112_112_108_121_95_100_103_95_116_111_95_116_104_101_110_50_95_95_91_53_93_95_48_10_0_i11);
MR_def_label(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_100_105_115_116_97_110_99_101_95_103_114_97_110_117_108_97_114_105_116_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_112_112_108_121_95_100_103_95_116_111_95_116_104_101_110_50_95_95_91_53_93_95_48_10_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_r3 = MR_sv(11);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_create_var_from_type_5_0,
		f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_100_105_115_116_97_110_99_101_95_103_114_97_110_117_108_97_114_105_116_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_112_112_108_121_95_100_103_95_116_111_95_116_104_101_110_50_95_95_91_53_93_95_48_10_0_i12);
MR_def_label(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_100_105_115_116_97_110_99_101_95_103_114_97_110_117_108_97_114_105_116_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_112_112_108_121_95_100_103_95_116_111_95_116_104_101_110_50_95_95_91_53_93_95_48_10_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(11) = MR_r1;
	MR_sv(13) = MR_r2;
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(hlds__hlds_goal__make_int_const_construction_3_0,
		f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_100_105_115_116_97_110_99_101_95_103_114_97_110_117_108_97_114_105_116_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_112_112_108_121_95_100_103_95_116_111_95_116_104_101_110_50_95_95_91_53_93_95_48_10_0_i13);
MR_def_label(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_100_105_115_116_97_110_99_101_95_103_114_97_110_117_108_97_114_105_116_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_112_112_108_121_95_100_103_95_116_111_95_116_104_101_110_50_95_95_91_53_93_95_48_10_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(11);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = MR_sv(8);
	MR_sv(8) = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	}
	MR_np_call_localret_ent(list__append_3_1,
		f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_100_105_115_116_97_110_99_101_95_103_114_97_110_117_108_97_114_105_116_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_112_112_108_121_95_100_103_95_116_111_95_116_104_101_110_50_95_95_91_53_93_95_48_10_0_i14);
MR_def_label(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_100_105_115_116_97_110_99_101_95_103_114_97_110_117_108_97_114_105_116_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_112_112_108_121_95_100_103_95_116_111_95_116_104_101_110_50_95_95_91_53_93_95_48_10_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 6);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = MR_sv(7);
	MR_tfield(1, MR_tempr1, 2) = MR_r1;
	MR_tfield(1, MR_tempr1, 3) = MR_sv(9);
	MR_tfield(1, MR_tempr1, 4) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(1, MR_tempr1, 5) = MR_sv(10);
	MR_sv(1) = MR_tempr1;
	MR_r1 = MR_sv(6);
	}
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_get_instmap_delta_2_0,
		f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_100_105_115_116_97_110_99_101_95_103_114_97_110_117_108_97_114_105_116_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_112_112_108_121_95_100_103_95_116_111_95_116_104_101_110_50_95_95_91_53_93_95_48_10_0_i15);
MR_def_label(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_100_105_115_116_97_110_99_101_95_103_114_97_110_117_108_97_114_105_116_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_112_112_108_121_95_100_103_95_116_111_95_116_104_101_110_50_95_95_91_53_93_95_48_10_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr1, 0) = MR_sv(4);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr3, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr4, 3, (MR_Integer) 3);
	MR_r2 = MR_tempr4;
	MR_tfield(3, MR_tempr4, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr4, 1) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr4, 2) = MR_tempr3;
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(11);
	}
	MR_np_call_localret_ent(hlds__instmap__instmap_delta_insert_4_0,
		f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_100_105_115_116_97_110_99_101_95_103_114_97_110_117_108_97_114_105_116_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_112_112_108_121_95_100_103_95_116_111_95_116_104_101_110_50_95_95_91_53_93_95_48_10_0_i16);
MR_def_label(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_100_105_115_116_97_110_99_101_95_103_114_97_110_117_108_97_114_105_116_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_112_112_108_121_95_100_103_95_116_111_95_116_104_101_110_50_95_95_91_53_93_95_48_10_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(6);
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_set_instmap_delta_3_0,
		f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_100_105_115_116_97_110_99_101_95_103_114_97_110_117_108_97_114_105_116_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_112_112_108_121_95_100_103_95_116_111_95_116_104_101_110_50_95_95_91_53_93_95_48_10_0_i17);
MR_def_label(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_100_105_115_116_97_110_99_101_95_103_114_97_110_117_108_97_114_105_116_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_112_112_108_121_95_100_103_95_116_111_95_116_104_101_110_50_95_95_91_53_93_95_48_10_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_r2 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r3 = (MR_Integer) 0;
	}
	MR_np_call_localret_ent(hlds__goal_util__create_conj_4_0,
		f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_100_105_115_116_97_110_99_101_95_103_114_97_110_117_108_97_114_105_116_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_112_112_108_121_95_100_103_95_116_111_95_116_104_101_110_50_95_95_91_53_93_95_48_10_0_i18);
MR_def_label(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_100_105_115_116_97_110_99_101_95_103_114_97_110_117_108_97_114_105_116_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_112_112_108_121_95_100_103_95_116_111_95_116_104_101_110_50_95_95_91_53_93_95_48_10_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(12);
	MR_np_call_localret_ent(list__replace_nth_det_4_0,
		f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_100_105_115_116_97_110_99_101_95_103_114_97_110_117_108_97_114_105_116_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_112_112_108_121_95_100_103_95_116_111_95_116_104_101_110_50_95_95_91_53_93_95_48_10_0_i19);
MR_def_label(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_100_105_115_116_97_110_99_101_95_103_114_97_110_117_108_97_114_105_116_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_112_112_108_121_95_100_103_95_116_111_95_116_104_101_110_50_95_95_91_53_93_95_48_10_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr1, 1) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr1, 2) = MR_r1;
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(4);
	MR_r1 = MR_tempr1;
	MR_r2 = ((MR_Integer) MR_sv(12) + (MR_Integer) 1);
	MR_r6 = MR_sv(13);
	MR_succip_word = MR_sv(14);
	MR_GOTO_LAB(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_100_105_115_116_97_110_99_101_95_103_114_97_110_117_108_97_114_105_116_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_112_112_108_121_95_100_103_95_116_111_95_116_104_101_110_50_95_95_91_53_93_95_48_10_0_i57);
	}
MR_def_label(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_100_105_115_116_97_110_99_101_95_103_114_97_110_117_108_97_114_105_116_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_112_112_108_121_95_100_103_95_116_111_95_116_104_101_110_50_95_95_91_53_93_95_48_10_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(4);
	MR_r1 = MR_sv(1);
	MR_r2 = ((MR_Integer) MR_sv(12) + (MR_Integer) 1);
	MR_r6 = MR_sv(11);
	MR_succip_word = MR_sv(14);
	MR_GOTO_LAB(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_100_105_115_116_97_110_99_101_95_103_114_97_110_117_108_97_114_105_116_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_112_112_108_121_95_100_103_95_116_111_95_116_104_101_110_50_95_95_91_53_93_95_48_10_0_i57);
MR_def_label(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_100_105_115_116_97_110_99_101_95_103_114_97_110_117_108_97_114_105_116_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_112_112_108_121_95_100_103_95_116_111_95_116_104_101_110_50_95_95_91_53_93_95_48_10_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("distance_granularity.m", 22);
	MR_r2 = (MR_Word) MR_string_const("apply_dg_to_then2", 17);
	MR_succip_word = MR_sv(14);
	MR_decr_sp(14);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

static void mercury__transform_hlds__distance_granularity_maybe_bunch_0(void)
{
	transform_hlds__distance_granularity_module0();
	transform_hlds__distance_granularity_module1();
	transform_hlds__distance_granularity_module2();
	transform_hlds__distance_granularity_module3();
	transform_hlds__distance_granularity_module4();
	transform_hlds__distance_granularity_module5();
	transform_hlds__distance_granularity_module6();
	transform_hlds__distance_granularity_module7();
	transform_hlds__distance_granularity_module8();
	transform_hlds__distance_granularity_module9();
	transform_hlds__distance_granularity_module10();
	transform_hlds__distance_granularity_module11();
	transform_hlds__distance_granularity_module12();
	transform_hlds__distance_granularity_module13();
	transform_hlds__distance_granularity_module14();
	transform_hlds__distance_granularity_module15();
	transform_hlds__distance_granularity_module16();
	transform_hlds__distance_granularity_module17();
	transform_hlds__distance_granularity_module18();
}

/* suppress gcc -Wmissing-decls warnings */
void mercury__transform_hlds__distance_granularity__init(void);
void mercury__transform_hlds__distance_granularity__init_type_tables(void);
void mercury__transform_hlds__distance_granularity__init_debugger(void);
#ifdef MR_DEEP_PROFILING
void mercury__transform_hlds__distance_granularity__write_out_proc_statics(FILE *fp);
#endif
#ifdef MR_RECORD_TERM_SIZES
void mercury__transform_hlds__distance_granularity__init_complexity_procs(void);
#endif

void mercury__transform_hlds__distance_granularity__init(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	mercury__transform_hlds__distance_granularity_maybe_bunch_0();
	mercury__transform_hlds__distance_granularity__init_debugger();
}

void mercury__transform_hlds__distance_granularity__init_type_tables(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}


void mercury__transform_hlds__distance_granularity__init_debugger(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}

#ifdef MR_DEEP_PROFILING

void mercury__transform_hlds__distance_granularity__write_out_proc_statics(FILE *fp)
{
}

#endif

#ifdef MR_RECORD_TERM_SIZES

void mercury__transform_hlds__distance_granularity__init_complexity_procs(void)
{
}

#endif

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;
